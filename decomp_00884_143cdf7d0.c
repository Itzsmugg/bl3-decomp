// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143cdf7d0 tls_construct_ctos_ec_pt_formats body=218 status=ok
// SIG undefined tls_construct_ctos_ec_pt_formats(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_ec_pt_formats(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0x143cdf7e0;
  iVar1 = use_ecc();
  if (iVar1 == 0) {
    return 2;
  }
  tls1_get_formatlist(param_1,&local_10,&local_18);
  iVar1 = WPACKET_put_bytes__(param_2,0xb,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__(param_2,local_10,local_18,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d3,0x44,"ssl\\statem\\extensions_clnt.c",0xa1);
  return 0;
}



// FUNCTION 143cdf8b0 tls_construct_ctos_ems body=134 status=ok
// SIG undefined tls_construct_ctos_ems(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_ems(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,0x17,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d4,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1f1));
  return 0;
}



// FUNCTION 143cdf940 tls_construct_ctos_etm body=164 status=ok
// SIG undefined tls_construct_ctos_etm(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_etm(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(uint *)(param_1 + 0x5c4) & 0x80000) != 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x16,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_put_bytes__(param_2,0,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d5,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1ce));
  return 0;
}



// FUNCTION 143cdf9f0 tls_construct_ctos_key_share body=732 status=ok
// SIG undefined tls_construct_ctos_key_share(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_key_share(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  short sVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_38;
  ulonglong local_30;
  longlong local_28 [2];
  
  local_28[1] = 0x143cdfa02;
  uVar5 = 0;
  local_30 = 0;
  local_28[0] = 0;
  iVar1 = WPACKET_put_bytes__(param_2,0x33,2);
  if (((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
     (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar8 = 0x290;
    uVar7 = 0x44;
LAB_143cdfac3:
    ossl_statem_fatal(param_1,0x50,0x1d6,uVar7,"ssl\\statem\\extensions_clnt.c",uVar8);
    return 0;
  }
  tls1_get_supported_groups(param_1,local_28,&local_30);
  sVar4 = *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406);
  if (sVar4 == 0) {
    if (local_30 != 0) {
      do {
        iVar1 = tls_curve_allowed(param_1,*(undefined2 *)(local_28[0] + uVar5 * 2),0x20004);
        if (iVar1 != 0) {
          sVar4 = *(short *)(local_28[0] + uVar5 * 2);
          if (sVar4 != 0) goto LAB_143cdfb02;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < local_30);
    }
    uVar8 = 0x2a9;
    uVar7 = 0x65;
    goto LAB_143cdfac3;
  }
LAB_143cdfb02:
  local_38 = 0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if (lVar2 == 0) {
    lVar2 = ssl_generate_pkey_group(param_1,sVar4);
    if (lVar2 == 0) {
      return 0;
    }
LAB_143cdfb8b:
    lVar3 = EVP_PKEY_get1_tls_encodedpoint(lVar2,&local_38);
    if (lVar3 == 0) {
      uVar8 = 0x262;
      uVar6 = 0x10;
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_2,sVar4,2);
      if ((iVar1 != 0) && (iVar1 = WPACKET_sub_memcpy__(param_2,local_38,lVar3,2), iVar1 != 0)) {
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) = lVar2;
        *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = sVar4;
        CRYPTO_free(local_38,"ssl\\statem\\extensions_clnt.c",0x275);
        iVar1 = WPACKET_close(param_2);
        if ((iVar1 != 0) && (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
          return 1;
        }
        uVar8 = 0x2b4;
        uVar7 = 0x1d6;
        goto LAB_143cdfb54;
      }
      uVar8 = 0x26a;
      uVar6 = 0x44;
    }
    ossl_statem_fatal(param_1,0x50,0x200,uVar6,"ssl\\statem\\extensions_clnt.c",uVar8);
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
      EVP_PKEY_free(lVar2);
    }
    CRYPTO_free(local_38,"ssl\\statem\\extensions_clnt.c",0x27b);
  }
  else {
    if (*(int *)(param_1 + 0x4d8) == 1) goto LAB_143cdfb8b;
    uVar8 = 0x24f;
    uVar7 = 0x200;
LAB_143cdfb54:
    ossl_statem_fatal(param_1,0x50,uVar7,0x44,"ssl\\statem\\extensions_clnt.c",uVar8);
  }
  return 0;
}



// FUNCTION 143cdfcd0 tls_construct_ctos_maxfragmentlen body=197 status=ok
// SIG undefined tls_construct_ctos_maxfragmentlen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_maxfragmentlen(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(char *)(param_1 + 0x704) == '\0') {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,1,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,*(undefined1 *)(param_1 + 0x704),1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x225,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x51));
  return 0;
}



// FUNCTION 143cdfda0 tls_construct_ctos_npn body=202 status=ok
// SIG undefined tls_construct_ctos_npn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_npn(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x288) != 0) &&
     ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0 ||
      (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)))) {
    iVar1 = WPACKET_put_bytes__(param_2,0x3374,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1d7,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x178)
                     );
    return 0;
  }
  return 2;
}



// FUNCTION 143cdfe70 tls_construct_ctos_padding body=357 status=ok
// SIG undefined tls_construct_ctos_padding(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_padding(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  size_t local_res8;
  undefined4 uVar4;
  void *local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cdfe80;
  if ((*(byte *)(param_1 + 0x5c4) & 0x10) == 0) {
    return 2;
  }
  iVar2 = WPACKET_get_total_written(param_2,&local_res8);
  if (iVar2 != 0) {
    piVar1 = *(int **)(param_1 + 0x508);
    if ((((*piVar1 == 0x304) && (*(longlong *)(piVar1 + 0x62) != 0)) &&
        (*(longlong *)(piVar1 + 0x4a) != 0)) &&
       (lVar3 = ssl_md(*(undefined4 *)(*(longlong *)(piVar1 + 0x4a) + 0x40)), lVar3 != 0)) {
      iVar2 = EVP_MD_size(lVar3);
      local_res8 = (longlong)iVar2 + *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x188) +
                   local_res8 + 0xf;
    }
    if (local_res8 - 0x100 < 0x100) {
      if (-local_res8 + 0x200 < 5) {
        local_res8 = 1;
      }
      else {
        local_res8 = -local_res8 + 0x1fc;
      }
      iVar2 = WPACKET_put_bytes__(param_2,0x15,2);
      if ((iVar2 == 0) ||
         (iVar2 = WPACKET_sub_allocate_bytes__(param_2,local_res8,&local_18,2), iVar2 == 0)) {
        uVar4 = 0x3cb;
        goto LAB_143cdfebb;
      }
      _guard_xfg_dispatch_icall_nop(local_18,0,local_res8);
    }
    return 1;
  }
  uVar4 = 0x3a2;
LAB_143cdfebb:
  ossl_statem_fatal(param_1,0x50,0x1d8,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}



// FUNCTION 143cdffe0 tls_construct_ctos_post_handshake_auth body=182 status=ok
// SIG undefined tls_construct_ctos_post_handshake_auth(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_post_handshake_auth(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x75c) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0x31,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_2);
      if (iVar1 != 0) {
        *(undefined4 *)(param_1 + 0x758) = 1;
        return 1;
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x26b,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x4b5));
  return 0;
}



// FUNCTION 143ce00a0 tls_construct_ctos_psk body=1168 status=ok
// SIG undefined tls_construct_ctos_psk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_psk(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  int *piVar4;
  ulonglong uVar5;
  __time64_t _Var6;
  longlong lVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong local_res8;
  undefined8 uVar14;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30;
  ulonglong uVar13;
  
  local_30 = 0x143ce00c2;
  uVar10 = 0;
  local_48 = 0;
  uVar12 = 0;
  local_40 = 0;
  local_res8 = 0;
  iVar2 = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x198) = 0xffffffff;
  piVar4 = *(int **)(param_1 + 0x508);
  if (*piVar4 != 0x304) {
    return 2;
  }
  if ((*(longlong *)(piVar4 + 0x62) == 0) && (*(longlong *)(param_1 + 0x510) == 0)) {
    return 2;
  }
  uVar3 = uVar10;
  if (*(int *)(param_1 + 0x4d8) == 1) {
    uVar3 = ssl_handshake_md();
    piVar4 = *(int **)(param_1 + 0x508);
  }
  uVar5 = uVar10;
  uVar13 = uVar10;
  if (*(longlong *)(piVar4 + 0x62) == 0) goto LAB_143ce0212;
  if (*(longlong *)(piVar4 + 0x4a) == 0) {
    uVar14 = 0x3f8;
  }
  else {
    uVar5 = ssl_md(*(undefined4 *)(*(longlong *)(piVar4 + 0x4a) + 0x40));
    uVar13 = uVar12;
    if ((uVar5 == 0) || ((*(int *)(param_1 + 0x4d8) == 1 && (uVar5 != uVar3)))) {
LAB_143ce0212:
      lVar7 = *(longlong *)(param_1 + 0x510);
      if (lVar7 == 0) {
        return 2;
      }
    }
    else {
      _Var6 = _time64((__time64_t *)0x0);
      lVar7 = *(longlong *)(param_1 + 0x508);
      iVar1 = (int)_Var6 - *(int *)(lVar7 + 0x11c);
      uVar8 = iVar1 - 1;
      if (iVar1 == 0) {
        uVar8 = 0;
      }
      if (*(uint *)(lVar7 + 400) < uVar8) goto LAB_143ce0212;
      uVar11 = uVar8 * 1000;
      uVar13 = (ulonglong)uVar11;
      if ((uVar8 != 0) && (uVar11 / 1000 != uVar8)) goto LAB_143ce0212;
      uVar13 = (ulonglong)(uVar11 + *(int *)(lVar7 + 0x194));
      iVar2 = EVP_MD_size(uVar5);
      local_res8 = (longlong)iVar2;
      iVar2 = 1;
      lVar7 = *(longlong *)(param_1 + 0x510);
    }
    uVar12 = uVar10;
    if (lVar7 != 0) {
      uVar12 = ssl_md(*(undefined4 *)(*(longlong *)(lVar7 + 0x128) + 0x40));
      if (uVar12 == 0) {
        uVar14 = 0x44a;
        uVar9 = 0xdb;
        goto LAB_143ce0168;
      }
      if ((*(int *)(param_1 + 0x4d8) == 1) && (uVar12 != uVar3)) {
        uVar14 = 0x454;
        uVar9 = 0xdb;
        goto LAB_143ce0168;
      }
      iVar1 = EVP_MD_size(uVar12);
      uVar10 = (ulonglong)iVar1;
    }
    iVar1 = WPACKET_put_bytes__(param_2,0x29,2);
    if (((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
       (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
      uVar14 = 0x460;
    }
    else if ((iVar2 == 0) ||
            ((iVar1 = WPACKET_sub_memcpy__
                                (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x180),
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x188),2),
             iVar1 != 0 && (iVar1 = WPACKET_put_bytes__(param_2,uVar13,4), iVar1 != 0)))) {
      if ((*(longlong *)(param_1 + 0x510) == 0) ||
         ((iVar1 = WPACKET_sub_memcpy__
                             (param_2,*(undefined8 *)(param_1 + 0x518),
                              *(undefined8 *)(param_1 + 0x520),2), iVar1 != 0 &&
          (iVar1 = WPACKET_put_bytes__(param_2,0,4), iVar1 != 0)))) {
        iVar1 = WPACKET_close(param_2);
        if ((((iVar1 != 0) &&
             ((iVar1 = WPACKET_get_total_written(param_2,&local_38), iVar1 != 0 &&
              (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)))) &&
            ((iVar2 == 0 ||
             (iVar1 = WPACKET_sub_allocate_bytes__(param_2,local_res8,&local_48,1), iVar1 != 0))))
           && (((((*(longlong *)(param_1 + 0x510) == 0 ||
                  (iVar1 = WPACKET_sub_allocate_bytes__(param_2,uVar10,&local_40,1), iVar1 != 0)) &&
                 (iVar1 = WPACKET_close(param_2), iVar1 != 0)) &&
                ((iVar1 = WPACKET_close(param_2), iVar1 != 0 &&
                 (iVar1 = WPACKET_get_total_written(param_2,&local_30), iVar1 != 0)))) &&
               (iVar1 = WPACKET_fill_lengths(param_2), iVar1 != 0)))) {
          lVar7 = WPACKET_get_curr(param_2);
          lVar7 = lVar7 - local_30;
          if ((iVar2 != 0) &&
             (iVar1 = tls_psk_do_binder(param_1,uVar5,lVar7,local_38,0,local_48,
                                        *(undefined8 *)(param_1 + 0x508),1,0), iVar1 != 1)) {
            return 0;
          }
          if ((*(longlong *)(param_1 + 0x510) != 0) &&
             (iVar1 = tls_psk_do_binder(param_1,uVar12,lVar7,local_38,0,local_40,
                                        *(longlong *)(param_1 + 0x510),1,1), iVar1 != 1)) {
            return 0;
          }
          if (iVar2 != 0) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x198) = 0;
          }
          if (*(longlong *)(param_1 + 0x510) != 0) {
            *(int *)(*(longlong *)(param_1 + 0x510) + 0x198) = iVar2;
          }
          return 1;
        }
        uVar14 = 0x488;
      }
      else {
        uVar14 = 0x473;
      }
    }
    else {
      uVar14 = 0x469;
    }
  }
  uVar9 = 0x44;
LAB_143ce0168:
  ossl_statem_fatal(param_1,0x50,0x1f5,uVar9,"ssl\\statem\\extensions_clnt.c",uVar14);
  return 0;
}



// FUNCTION 143ce0530 tls_construct_ctos_psk_kex_modes body=281 status=ok
// SIG undefined tls_construct_ctos_psk_kex_modes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_psk_kex_modes(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 1;
  uVar3 = *(uint *)(param_1 + 0x5c4) & 0x400;
  iVar1 = WPACKET_put_bytes__(param_2,0x2d,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,1,1);
        if (iVar1 != 0) {
          if (uVar3 != 0) {
            iVar1 = WPACKET_put_bytes__(param_2,0,1);
            if (iVar1 == 0) goto LAB_143ce060c;
          }
          iVar1 = WPACKET_close(param_2);
          if (iVar1 != 0) {
            iVar1 = WPACKET_close(param_2);
            if (iVar1 != 0) {
              *(undefined4 *)(param_1 + 0x6e0) = 2;
              uVar2 = *(undefined4 *)(param_1 + 0x6e0);
              if (uVar3 != 0) {
                uVar2 = 3;
              }
              *(undefined4 *)(param_1 + 0x6e0) = uVar2;
              return 1;
            }
          }
        }
      }
    }
  }
LAB_143ce060c:
  ossl_statem_fatal(param_1,0x50,0x1fd,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x239));
  return 0;
}



// FUNCTION 143ce0650 tls_construct_ctos_renegotiate body=213 status=ok
// SIG undefined tls_construct_ctos_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_renegotiate(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(int *)(param_1 + 0x750) == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xff01,2);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_sub_memcpy__
                        (param_2,*(longlong *)(param_1 + 0xa8) + 0x348,
                         *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x388),1);
      if (iVar1 != 0) {
        iVar1 = WPACKET_close(param_2);
        if (iVar1 != 0) {
          return 1;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1d9,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1d));
  return 0;
}



// FUNCTION 143ce0730 tls_construct_ctos_sct body=165 status=ok
// SIG undefined tls_construct_ctos_sct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_ctos_sct(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((*(longlong *)(param_1 + 0x718) != 0) && (param_4 == 0)) {
    iVar1 = WPACKET_put_bytes__(param_2,0x12,2);
    if (iVar1 != 0) {
      iVar1 = WPACKET_put_bytes__(param_2,0,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    ossl_statem_fatal(param_1,0x50,0x1da,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar2,0x1e3)
                     );
    return 0;
  }
  return 2;
}



// FUNCTION 143ce07e0 tls_construct_ctos_server_name body=285 status=ok
// SIG undefined tls_construct_ctos_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_server_name(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x630) == 0) {
    return 2;
  }
  iVar3 = WPACKET_put_bytes__(param_2,0,2);
  if ((((iVar3 != 0) && (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
      (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
     (iVar3 = WPACKET_put_bytes__(param_2,0,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 0x630);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = WPACKET_sub_memcpy__(param_2,pcVar2,uVar5 & 0x7fffffff,2);
    if (((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) &&
       (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1db,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x37));
  return 0;
}



// FUNCTION 143ce0900 tls_construct_ctos_session_ticket body=402 status=ok
// SIG undefined tls_construct_ctos_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_session_ticket(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  ushort *puVar2;
  void *_Dst;
  int iVar3;
  undefined8 uVar4;
  ulonglong _Size;
  undefined4 uVar5;
  
  uVar5 = 1;
  iVar3 = tls_use_ticket();
  if (iVar3 == 0) {
LAB_143ce0a78:
    uVar4 = 2;
  }
  else {
    if ((((*(int *)(param_1 + 0x3c) == 0) &&
         (piVar1 = *(int **)(param_1 + 0x508), piVar1 != (int *)0x0)) &&
        (*(longlong *)(piVar1 + 0x60) != 0)) && (*piVar1 != 0x304)) {
      _Size = *(ulonglong *)(piVar1 + 0x62);
LAB_143ce0a10:
      if (_Size == 0) {
LAB_143ce0a19:
        if ((*(longlong *)(param_1 + 0x698) != 0) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x698) + 8) == 0)) goto LAB_143ce0a78;
      }
      iVar3 = WPACKET_put_bytes__(param_2,0x23,2);
      if ((iVar3 != 0) &&
         (iVar3 = WPACKET_sub_memcpy__
                            (param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x180),_Size,2
                            ), iVar3 != 0)) {
        return 1;
      }
      uVar4 = CONCAT44(uVar5,0xfe);
    }
    else {
      if (((*(longlong *)(param_1 + 0x508) == 0) ||
          (puVar2 = *(ushort **)(param_1 + 0x698), puVar2 == (ushort *)0x0)) ||
         (*(longlong *)(puVar2 + 4) == 0)) {
        _Size = 0;
        goto LAB_143ce0a19;
      }
      _Size = (ulonglong)*puVar2;
      uVar4 = CRYPTO_malloc(_Size,"ssl\\statem\\extensions_clnt.c",0xe9);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x180) = uVar4;
      _Dst = *(void **)(*(longlong *)(param_1 + 0x508) + 0x180);
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(*(longlong *)(param_1 + 0x698) + 8),_Size);
        *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x188) = _Size;
        goto LAB_143ce0a10;
      }
      uVar4 = CONCAT44(uVar5,0xed);
    }
    ossl_statem_fatal(param_1,0x50,0x1dc,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 143ce0aa0 tls_construct_ctos_sig_algs body=296 status=ok
// SIG undefined tls_construct_ctos_sig_algs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_sig_algs(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  undefined4 uVar3;
  
  uVar3 = 1;
  iVar1 = *(int *)(param_1 + 0x5e4);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    if (0x302 < iVar1) {
LAB_143ce0af9:
      uVar2 = tls12_get_psigalgs(param_1,1,&local_res8);
      iVar1 = WPACKET_put_bytes__(param_2,0xd,2);
      if (iVar1 != 0) {
        iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
        if (iVar1 != 0) {
          iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
          if (iVar1 != 0) {
            iVar1 = tls12_copy_sigalgs(param_1,param_2,local_res8,uVar2);
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
      ossl_statem_fatal(param_1,0x50,0x1dd,0x44,"ssl\\statem\\extensions_clnt.c",
                        CONCAT44(uVar3,0x119));
      return 0;
    }
  }
  else if ((iVar1 != 0x100) && (iVar1 < 0xfefe)) goto LAB_143ce0af9;
  return 2;
}



// FUNCTION 143ce0bd0 tls_construct_ctos_srp body=281 status=ok
// SIG undefined tls_construct_ctos_srp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_srp(longlong param_1,undefined8 param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  if (*(longlong *)(param_1 + 0x7a0) == 0) {
    return 2;
  }
  iVar3 = WPACKET_put_bytes__(param_2,0xc,2);
  if ((((iVar3 != 0) && (iVar3 = WPACKET_start_sub_packet_len__(param_2,2), iVar3 != 0)) &&
      (iVar3 = WPACKET_start_sub_packet_len__(param_2,1), iVar3 != 0)) &&
     (iVar3 = WPACKET_set_flags(param_2,1), iVar3 != 0)) {
    pcVar2 = *(char **)(param_1 + 0x7a0);
    cVar1 = *pcVar2;
    pcVar4 = pcVar2;
    for (uVar5 = 0; (cVar1 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
      pcVar4 = pcVar4 + 1;
      cVar1 = *pcVar4;
    }
    iVar3 = WPACKET_memcpy(param_2,pcVar2,uVar5 & 0x7fffffff);
    if (((iVar3 != 0) && (iVar3 = WPACKET_close(param_2), iVar3 != 0)) &&
       (iVar3 = WPACKET_close(param_2), iVar3 != 0)) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1de,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar6,0x6b));
  return 0;
}



// FUNCTION 143ce0cf0 tls_construct_ctos_status_request body=584 status=ok
// SIG undefined tls_construct_ctos_status_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_ctos_status_request
          (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 local_res20 [8];
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ce0cfd;
  if ((param_4 != 0) || (*(int *)(param_1 + 0x638) != 1)) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,5,2);
  if ((((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) ||
      (iVar1 = WPACKET_put_bytes__(param_2,1,1), iVar1 == 0)) ||
     (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",0x135,uVar5);
    return 0;
  }
  iVar3 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x650));
  if (0 < iVar1) {
    do {
      uVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x650),iVar3);
      iVar1 = FUN_143cfee90(uVar5,0);
      if (((iVar1 < 1) ||
          (iVar2 = WPACKET_sub_allocate_bytes__(param_2,(longlong)iVar1,local_res20,2), iVar2 == 0))
         || (iVar2 = FUN_143cfee90(uVar5,local_res20), iVar2 != iVar1)) {
        uVar4 = 0x143;
        goto LAB_143ce0ed1;
      }
      iVar3 = iVar3 + 1;
      iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x650));
    } while (iVar3 < iVar1);
  }
  iVar1 = WPACKET_close(param_2);
  if ((iVar1 == 0) || (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 == 0)) {
    uVar4 = 0x14a;
    goto LAB_143ce0ed1;
  }
  if (*(longlong *)(param_1 + 0x658) != 0) {
    iVar1 = FUN_143cfb640(*(longlong *)(param_1 + 0x658),0);
    if (iVar1 < 0) {
      uVar4 = 0x154;
      goto LAB_143ce0ed1;
    }
    iVar3 = WPACKET_allocate_bytes(param_2,(longlong)iVar1,local_res20);
    if ((iVar3 == 0) ||
       (iVar3 = FUN_143cfb640(*(undefined8 *)(param_1 + 0x658),local_res20), iVar3 != iVar1)) {
      uVar4 = 0x15c;
      goto LAB_143ce0ed1;
    }
  }
  iVar1 = WPACKET_close(param_2);
  if ((iVar1 != 0) && (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
    return 1;
  }
  uVar4 = 0x162;
LAB_143ce0ed1:
  ossl_statem_fatal(param_1,0x50,0x1df,0x44,"ssl\\statem\\extensions_clnt.c",uVar4);
  return 0;
}



// FUNCTION 143ce0f40 tls_construct_ctos_supported_groups body=405 status=ok
// SIG undefined tls_construct_ctos_supported_groups(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_supported_groups(undefined8 param_1,undefined8 param_2)

{
  undefined2 uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong local_18;
  longlong local_10;
  
  uVar4 = 0;
  local_10 = 0;
  local_18 = 0;
  iVar2 = use_ecc();
  if (iVar2 == 0) {
    return 2;
  }
  tls1_get_supported_groups(param_1,&local_10,&local_18);
  iVar2 = WPACKET_put_bytes__(param_2,10,2);
  if (((iVar2 == 0) || (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) ||
     (iVar2 = WPACKET_start_sub_packet_len__(param_2,2), iVar2 == 0)) {
    ossl_statem_fatal(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",0xbe);
    return 0;
  }
  if (local_18 != 0) {
    do {
      uVar1 = *(undefined2 *)(local_10 + uVar4 * 2);
      iVar2 = tls_curve_allowed(param_1,uVar1,0x20004);
      if ((iVar2 != 0) && (iVar2 = WPACKET_put_bytes__(param_2,uVar1,2), iVar2 == 0)) {
        uVar5 = 0xc9;
        goto LAB_143ce1071;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_18);
  }
  iVar2 = WPACKET_close(param_2);
  if ((iVar2 == 0) || (iVar2 = WPACKET_close(param_2), iVar2 == 0)) {
    uVar5 = 0xd1;
LAB_143ce1071:
    ossl_statem_fatal(param_1,0x50,0x1e0,0x44,"ssl\\statem\\extensions_clnt.c",uVar5);
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143ce10e0 tls_construct_ctos_supported_versions body=387 status=ok
// SIG undefined tls_construct_ctos_supported_versions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_ctos_supported_versions(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_18;
  int local_14 [3];
  
  local_14[1] = 0x43ce10f0;
  local_14[2] = 1;
  iVar1 = ssl_get_min_max_version(param_1,local_14,&local_18,0);
  if (iVar1 == 0) {
    if (local_18 < 0x304) {
      return 2;
    }
    iVar1 = WPACKET_put_bytes__(param_2,0x2b,2);
    if (((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,2), iVar1 != 0)) &&
       (iVar1 = WPACKET_start_sub_packet_len__(param_2,1), iVar1 != 0)) {
      iVar1 = local_18;
      if (local_14[0] <= local_18) {
        do {
          iVar2 = WPACKET_put_bytes__(param_2,iVar1,2);
          if (iVar2 == 0) {
            uVar3 = 0x219;
            goto LAB_143ce121b;
          }
          iVar1 = iVar1 + -1;
        } while (local_14[0] <= iVar1);
      }
      iVar1 = WPACKET_close(param_2);
      if ((iVar1 != 0) && (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
        return 1;
      }
      uVar3 = 0x220;
LAB_143ce121b:
      ossl_statem_fatal(param_1,0x50,0x1e1,0x44,"ssl\\statem\\extensions_clnt.c",uVar3);
      return 0;
    }
    uVar3 = 0x211;
    iVar1 = 0x44;
  }
  else {
    uVar3 = 0x201;
  }
  ossl_statem_fatal(param_1,0x50,0x1e1,iVar1,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 143ce1270 tls_construct_ctos_use_srtp body=395 status=ok
// SIG undefined tls_construct_ctos_use_srtp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_construct_ctos_use_srtp(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0x143ce1286;
  lVar3 = SSL_get_srtp_profiles();
  if (lVar3 == 0) {
    return 2;
  }
  iVar1 = WPACKET_put_bytes__(param_2,0xe,2);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar1 != 0) {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (iVar1 != 0) {
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (iVar1 != 0) {
        iVar1 = OPENSSL_sk_num(lVar3);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        iVar5 = 0;
        if (0 < iVar1) {
          do {
            lVar4 = OPENSSL_sk_value(lVar3,iVar5);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (lVar4 == 0) {
LAB_143ce1384:
              uVar6 = CONCAT44(uVar7,0x1b4);
              goto LAB_143ce1396;
            }
            iVar2 = WPACKET_put_bytes__(param_2,*(undefined4 *)(lVar4 + 8),2);
            uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
            if (iVar2 == 0) goto LAB_143ce1384;
            iVar5 = iVar5 + 1;
          } while (iVar5 < iVar1);
        }
        iVar1 = WPACKET_close(param_2);
        if (((iVar1 != 0) && (iVar1 = WPACKET_put_bytes__(param_2,0,1), iVar1 != 0)) &&
           (iVar1 = WPACKET_close(param_2), iVar1 != 0)) {
          return 1;
        }
        uVar6 = CONCAT44(uVar7,0x1bd);
LAB_143ce1396:
        ossl_statem_fatal(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",uVar6);
        return 0;
      }
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1e2,0x44,"ssl\\statem\\extensions_clnt.c",CONCAT44(uVar7,0x1a9));
  return 0;
}



// FUNCTION 143ce1400 tls_parse_stoc_alpn body=639 status=ok
// SIG undefined tls_parse_stoc_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_alpn(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x400) == 0) {
    ossl_statem_fatal(param_1,0x6e,0x243,0x6e,"ssl\\statem\\extensions_clnt.c",0x100000650);
    return 0;
  }
  uVar4 = param_2[1];
  if (uVar4 < 2) {
LAB_143ce163c:
    uVar8 = 0x10000065d;
  }
  else {
    puVar5 = (undefined1 *)*param_2;
    uVar10 = uVar4 - 2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *param_2 = (longlong)(puVar5 + 2);
    param_2[1] = uVar10;
    if ((uVar10 != CONCAT11(uVar1,uVar2)) || (uVar10 == 0)) goto LAB_143ce163c;
    bVar3 = puVar5[2];
    *param_2 = (longlong)(puVar5 + 3);
    uVar10 = (ulonglong)bVar3;
    param_2[1] = uVar4 - 3;
    if (uVar4 - 3 != (ulonglong)bVar3) goto LAB_143ce163c;
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                "ssl\\statem\\extensions_clnt.c",0x660);
    uVar8 = CRYPTO_malloc(uVar10,"ssl\\statem\\extensions_clnt.c",0x661);
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar8;
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0);
    if (lVar6 == 0) {
      uVar9 = 0x50;
      uVar8 = 0x664;
      uVar11 = 0x44;
      goto LAB_143ce1655;
    }
    iVar7 = PACKET_copy_bytes(param_2,lVar6,uVar10);
    if (iVar7 != 0) {
      *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 1000) = uVar10;
      lVar6 = *(longlong *)(param_1 + 0x508);
      if (((*(void **)(lVar6 + 0x1a0) == (void *)0x0) || (*(ulonglong *)(lVar6 + 0x1a8) != uVar10))
         || (iVar7 = _guard_xfg_dispatch_icall_nop
                               (*(void **)(lVar6 + 0x1a0),
                                *(void **)(*(longlong *)(param_1 + 0xa8) + 0x3e0),uVar10),
            iVar7 != 0)) {
        *(undefined4 *)(param_1 + 0x6ec) = 0;
      }
      if (*(int *)(param_1 + 200) != 0) {
        return 1;
      }
      if (*(longlong *)(lVar6 + 0x1a0) == 0) {
        uVar8 = CRYPTO_memdup(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                              "ssl\\statem\\extensions_clnt.c",0x680);
        *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0) = uVar8;
        if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1a0) != 0) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
          return 1;
        }
        uVar9 = 0x50;
        uVar8 = 0x683;
        uVar11 = 0x44;
      }
      else {
        uVar9 = 0x50;
        uVar8 = 0x67c;
        uVar11 = 0x44;
      }
      goto LAB_143ce1655;
    }
    uVar8 = 0x669;
  }
  uVar11 = 0x6e;
  uVar9 = 0x32;
LAB_143ce1655:
  ossl_statem_fatal(param_1,uVar9,0x243,uVar11,"ssl\\statem\\extensions_clnt.c",uVar8);
  return 0;
}



// FUNCTION 143ce1680 tls_parse_stoc_cookie body=299 status=ok
// SIG undefined tls_parse_stoc_cookie(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_cookie(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  
  puVar5 = (undefined1 *)*param_2;
  uVar3 = param_2[1];
  if (1 < uVar3) {
    uVar3 = uVar3 - 2;
    puVar1 = puVar5 + 2;
    uVar4 = (ulonglong)CONCAT11(*puVar5,puVar5[1]);
    puVar5 = puVar1;
    if (uVar4 <= uVar3) {
      puVar5 = puVar1 + uVar4;
      uVar3 = uVar3 - uVar4;
      if (uVar3 == 0) {
        *param_2 = (longlong)puVar5;
        param_2[1] = 0;
        CRYPTO_free(*(undefined8 *)(param_1 + 0x6f0),
                    "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
        *(undefined8 *)(param_1 + 0x6f0) = 0;
        *(undefined8 *)(param_1 + 0x6f8) = 0;
        if (uVar4 != 0) {
          lVar2 = CRYPTO_memdup(puVar1,uVar4,
                                "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1ad)
          ;
          *(longlong *)(param_1 + 0x6f0) = lVar2;
          if (lVar2 == 0) goto LAB_143ce176e;
          *(ulonglong *)(param_1 + 0x6f8) = uVar4;
        }
        return 1;
      }
    }
  }
LAB_143ce176e:
  ossl_statem_fatal(param_1,0x32,0x216,0x9f,"ssl\\statem\\extensions_clnt.c",0x767,puVar5,uVar3);
  return 0;
}



// FUNCTION 143ce17b0 tls_parse_stoc_early_data body=261 status=ok
// SIG undefined tls_parse_stoc_early_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_early_data(longlong param_1,longlong *param_2,int param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  uVar5 = param_2[1];
  if (param_3 == 0x2000) {
    if (3 < uVar5) {
      puVar6 = (undefined1 *)*param_2;
      uVar1 = puVar6[1];
      uVar2 = *puVar6;
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *param_2 = (longlong)(puVar6 + 4);
      param_2[1] = uVar5 - 4;
      if (uVar5 - 4 == 0) {
        *(uint *)(*(longlong *)(param_1 + 0x508) + 0x19c) =
             CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),uVar4);
        return 1;
      }
    }
    uVar7 = 0x32;
    uVar9 = 0x777;
    uVar8 = 0xae;
  }
  else {
    if (uVar5 == 0) {
      if (((*(int *)(param_1 + 0x6ec) != 0) && (*(int *)(param_1 + 200) != 0)) &&
         (*(int *)(*(longlong *)(param_1 + 0x508) + 0x198) == 0)) {
        *(undefined4 *)(param_1 + 0x6e8) = 2;
        return 1;
      }
      uVar9 = 0x78f;
      uVar7 = 0x2f;
    }
    else {
      uVar9 = 0x782;
      uVar7 = 0x32;
    }
    uVar8 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar7,0x21a,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9,0x143ce17ba);
  return 0;
}



// FUNCTION 143ce18c0 tls_parse_stoc_ec_pt_formats body=388 status=ok
// SIG undefined tls_parse_stoc_ec_pt_formats(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_ec_pt_formats(longlong param_1,undefined8 *param_2)

{
  byte *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong _Size;
  undefined8 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_2;
  uVar1 = param_2[1];
  if (uVar1 == 0) {
LAB_143ce1a00:
    uVar4 = 0x553;
    uVar3 = 0x6e;
  }
  else {
    uVar1 = uVar1 - 1;
    _Size = (ulonglong)*pbVar5;
    _Src = pbVar5 + 1;
    pbVar5 = _Src;
    if (uVar1 < _Size) goto LAB_143ce1a00;
    pbVar5 = _Src + _Size;
    uVar1 = uVar1 - _Size;
    if (uVar1 != 0) goto LAB_143ce1a00;
    *param_2 = pbVar5;
    param_2[1] = 0;
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (_Size != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x160) = 0;
      CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x168),
                  "ssl\\statem\\extensions_clnt.c",0x55f);
      uVar3 = CRYPTO_malloc(_Size,"ssl\\statem\\extensions_clnt.c",0x560);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x168) = uVar3;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x168) != 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x160) = _Size;
        _guard_xfg_dispatch_icall_nop(*(void **)(*(longlong *)(param_1 + 0x508) + 0x168),_Src,_Size)
        ;
        return 1;
      }
      uVar2 = 0x50;
      uVar4 = 0x563;
      uVar3 = 0x44;
      goto LAB_143ce1a1a;
    }
    uVar4 = 0x55a;
    uVar3 = 0x10f;
  }
  uVar2 = 0x32;
LAB_143ce1a1a:
  ossl_statem_fatal(param_1,uVar2,0x244,uVar3,"ssl\\statem\\extensions_clnt.c",uVar4,pbVar5,uVar1);
  return 0;
}



// FUNCTION 143ce1ac0 tls_parse_stoc_key_share body=866 status=ok
// SIG undefined tls_parse_stoc_key_share(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_key_share(longlong param_1,longlong *param_2,uint param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  short sVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  longlong lVar10;
  longlong local_res8;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 *local_28;
  ulonglong uStack_20;
  
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
  if ((lVar3 == 0) || (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
    ossl_statem_fatal(param_1,0x50,0x1bd,0x44,"ssl\\statem\\extensions_clnt.c",0x703);
    return 0;
  }
  if ((ulonglong)param_2[1] < 2) {
    ossl_statem_fatal(param_1,0x32,0x1bd,0x9f,"ssl\\statem\\extensions_clnt.c",0x709);
    return 0;
  }
  puVar6 = (undefined1 *)*param_2;
  lVar10 = param_2[1] - 2;
  uVar1 = *puVar6;
  uVar2 = puVar6[1];
  sVar4 = CONCAT11(uVar1,uVar2);
  param_2[1] = lVar10;
  *param_2 = (longlong)(puVar6 + 2);
  if ((param_3 >> 0xb & 1) == 0) {
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      local_28 = (undefined1 *)*param_2;
      uStack_20 = param_2[1];
      if (1 < uStack_20) {
        uStack_20 = uStack_20 - 2;
        puVar6 = local_28 + 2;
        uVar8 = (ulonglong)CONCAT11(*local_28,local_28[1]);
        local_28 = puVar6;
        if (uVar8 <= uStack_20) {
          local_28 = puVar6 + uVar8;
          uStack_20 = uStack_20 - uVar8;
          if (uStack_20 == 0) {
            *param_2 = (longlong)local_28;
            param_2[1] = 0;
            if (uVar8 != 0) {
              lVar10 = ssl_generate_pkey(lVar3);
              if (lVar10 != 0) {
                iVar5 = EVP_PKEY_set1_tls_encodedpoint(lVar10,puVar6,uVar8);
                if (iVar5 == 0) {
                  ossl_statem_fatal(param_1,0x2f,0x1bd,0x132,"ssl\\statem\\extensions_clnt.c",0x74e)
                  ;
                }
                else {
                  iVar5 = ssl_derive(param_1,lVar3,lVar10,1);
                  if (iVar5 != 0) {
                    *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) = lVar10;
                    return 1;
                  }
                }
                EVP_PKEY_free(lVar10);
                return 0;
              }
              uVar12 = 0x748;
              uVar9 = 0x50;
              uVar11 = 0x41;
              goto LAB_143ce1da4;
            }
          }
        }
      }
      uVar9 = 0x32;
      uVar12 = 0x741;
      uVar11 = 0x9f;
LAB_143ce1da4:
      ossl_statem_fatal(param_1,uVar9,0x1bd,uVar11,"ssl\\statem\\extensions_clnt.c",uVar12);
      return 0;
    }
    uVar11 = 0x73a;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    local_res8 = 0;
    if (lVar10 != 0) {
      uVar7 = 0x32;
      uVar11 = 0x713;
      uVar9 = 0x9f;
      goto LAB_143ce1c45;
    }
    if (sVar4 == *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406)) {
      uVar7 = 0x2f;
      uVar11 = 0x71d;
      uVar9 = 0x6c;
      goto LAB_143ce1c45;
    }
    tls1_get_supported_groups(param_1,&local_res8,&local_28);
    if (local_28 != (undefined1 *)0x0) {
      do {
        if (sVar4 == *(short *)(local_res8 + (longlong)puVar6 * 2)) {
          if ((puVar6 < local_28) &&
             (iVar5 = tls_curve_allowed(param_1,CONCAT11(uVar1,uVar2),0x20004), iVar5 != 0)) {
            *(short *)(*(longlong *)(param_1 + 0xa8) + 0x406) = sVar4;
            EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
            return 1;
          }
          break;
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 < local_28);
    }
    uVar11 = 0x72a;
  }
  uVar7 = 0x2f;
  uVar9 = 0x6c;
LAB_143ce1c45:
  ossl_statem_fatal(param_1,uVar7,0x1bd,uVar9,"ssl\\statem\\extensions_clnt.c",uVar11);
  return 0;
}



// FUNCTION 143ce1e30 tls_parse_stoc_maxfragmentlen body=171 status=ok
// SIG undefined tls_parse_stoc_maxfragmentlen(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_maxfragmentlen(longlong param_1,undefined8 *param_2)

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
      if (cVar1 == *(char *)(param_1 + 0x704)) {
        *(char *)(*(longlong *)(param_1 + 0x508) + 0x1b0) = cVar1;
        return 1;
      }
      uVar4 = 0x51d;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
    else {
      uVar4 = 0x510;
      uVar2 = 0x2f;
      uVar3 = 0xe8;
    }
  }
  else {
    uVar2 = 0x32;
    uVar4 = 0x508;
    uVar3 = 0x6e;
  }
  ossl_statem_fatal(param_1,uVar2,0x245,uVar3,"ssl\\statem\\extensions_clnt.c",uVar4,0x143ce1e3a);
  return 0;
}



// FUNCTION 143ce1ee0 tls_parse_stoc_npn body=547 status=ok
// SIG undefined tls_parse_stoc_npn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_npn(longlong param_1,undefined1 (*param_2) [16])

{
  longlong lVar1;
  byte *pbVar2;
  int iVar3;
  void *_Dst;
  undefined4 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  byte local_res8 [8];
  undefined8 uVar8;
  byte *local_28;
  undefined8 uStack_20;
  undefined1 local_18 [16];
  
  local_18._8_8_ = 0x143ce1eec;
  if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) != 0) &&
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0)) {
    return 1;
  }
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (*(longlong *)(lVar1 + 0x288) == 0) {
    ossl_statem_fatal(param_1,0x6e,0x246,0x6e,"ssl\\statem\\extensions_clnt.c",0x620);
    return 0;
  }
  local_18 = *param_2;
  pbVar2 = local_18._0_8_;
  uVar5 = local_18._8_8_;
  if (local_18._8_8_ == 0) {
LAB_143ce2017:
    iVar3 = (**(code **)(lVar1 + 0x288))
                      (param_1,&local_28,local_res8,*(undefined8 *)*param_2,
                       *(ulonglong *)(*param_2 + 8) & 0xffffffff,*(undefined8 *)(lVar1 + 0x290));
    if (iVar3 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x6d0),"ssl\\statem\\extensions_clnt.c",0x638);
      _Dst = (void *)CRYPTO_malloc(local_res8[0],"ssl\\statem\\extensions_clnt.c",0x639);
      *(void **)(param_1 + 0x6d0) = _Dst;
      if (_Dst != (void *)0x0) {
        _guard_xfg_dispatch_icall_nop(_Dst,local_28,(ulonglong)local_res8[0]);
        *(ulonglong *)(param_1 + 0x6d8) = (ulonglong)local_res8[0];
        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 1;
        return 1;
      }
      uVar8 = 0x63c;
      uVar4 = 0x50;
      uVar7 = 0x44;
    }
    else {
      uVar4 = 0x28;
      uVar8 = 0x630;
      uVar7 = 0x6e;
    }
    ossl_statem_fatal(param_1,uVar4,0x246,uVar7,"ssl\\statem\\extensions_clnt.c",uVar8);
    return 0;
  }
  while( true ) {
    local_28 = pbVar2;
    uStack_20 = uVar5;
    if (local_18._8_8_ == 0) break;
    uStack_20 = uVar5 - 1;
    local_28 = (byte *)(local_18._0_8_ + 1);
    uVar6 = (ulonglong)*(byte *)local_18._0_8_;
    if (uStack_20 < uVar6) break;
    uVar5 = uStack_20 - uVar6;
    local_28 = local_28 + uVar6;
    uStack_20._0_4_ = (undefined4)uVar5;
    uStack_20._4_4_ = (undefined4)(uVar5 >> 0x20);
    local_18._8_4_ = (undefined4)uStack_20;
    local_18._0_8_ = local_28;
    local_18._12_4_ = uStack_20._4_4_;
    uStack_20 = uVar5;
    if (uVar6 == 0) break;
    if (uVar5 == 0) goto LAB_143ce2017;
    pbVar2 = local_28;
  }
  ossl_statem_fatal(param_1,0x32,0x235,0x6e,"ssl\\statem\\extensions_clnt.c",0x60a);
  return 0;
}



// FUNCTION 143ce2110 tls_parse_stoc_psk body=364 status=ok
// SIG undefined tls_parse_stoc_psk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_psk(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    *param_2 = (longlong)(puVar4 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x508);
      if (*(uint *)(lVar1 + 0x198) == (uint)CONCAT11(uVar3,uVar2)) {
        *(undefined4 *)(param_1 + 200) = 1;
        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x510));
        *(undefined8 *)(param_1 + 0x510) = 0;
        return 1;
      }
      lVar5 = *(longlong *)(param_1 + 0x510);
      if ((lVar5 != 0) && (*(uint *)(lVar5 + 0x198) == (uint)CONCAT11(uVar3,uVar2))) {
        if ((((*(int *)(param_1 + 0x84) - 3U & 0xfffffffb) != 0) || (*(int *)(lVar1 + 0x19c) != 0))
           || (*(int *)(lVar5 + 0x19c) == 0)) {
          uVar8 = *(undefined8 *)(lVar5 + 0x18);
          *(undefined8 *)(param_1 + 300) = *(undefined8 *)(lVar5 + 0x10);
          *(undefined8 *)(param_1 + 0x134) = uVar8;
          uVar8 = *(undefined8 *)(lVar5 + 0x28);
          *(undefined8 *)(param_1 + 0x13c) = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(param_1 + 0x144) = uVar8;
          uVar9 = *(undefined4 *)(lVar5 + 0x34);
          uVar6 = *(undefined4 *)(lVar5 + 0x38);
          uVar7 = *(undefined4 *)(lVar5 + 0x3c);
          *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(lVar5 + 0x30);
          *(undefined4 *)(param_1 + 0x150) = uVar9;
          *(undefined4 *)(param_1 + 0x154) = uVar6;
          *(undefined4 *)(param_1 + 0x158) = uVar7;
          uVar9 = *(undefined4 *)(lVar5 + 0x44);
          uVar6 = *(undefined4 *)(lVar5 + 0x48);
          uVar7 = *(undefined4 *)(lVar5 + 0x4c);
          *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(lVar5 + 0x40);
          *(undefined4 *)(param_1 + 0x160) = uVar9;
          *(undefined4 *)(param_1 + 0x164) = uVar6;
          *(undefined4 *)(param_1 + 0x168) = uVar7;
        }
        SSL_SESSION_free(lVar1);
        *(undefined8 *)(param_1 + 0x508) = *(undefined8 *)(param_1 + 0x510);
        *(undefined8 *)(param_1 + 0x510) = 0;
        *(undefined4 *)(param_1 + 200) = 1;
        return 1;
      }
      uVar8 = 0x2f;
      uVar10 = 0x1000007ae;
      uVar9 = 0x72;
      goto LAB_143ce225a;
    }
  }
  uVar8 = 0x32;
  uVar10 = 0x1000007a0;
  uVar9 = 0x9f;
LAB_143ce225a:
  ossl_statem_fatal(param_1,uVar8,0x1f6,uVar9,"ssl\\statem\\extensions_clnt.c",uVar10);
  return 0;
}



// FUNCTION 143ce2280 tls_parse_stoc_renegotiate body=511 status=ok
// SIG undefined tls_parse_stoc_renegotiate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_renegotiate(longlong param_1,undefined8 *param_2)

{
  byte *_Buf1;
  ulonglong uVar1;
  byte *_Buf1_00;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0);
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
  uVar1 = lVar3 + lVar2;
  if ((uVar1 != 0) && ((lVar3 == 0 || ((uVar1 != 0 && (lVar2 == 0)))))) {
    ossl_statem_fatal(param_1,0x50,0x1c0,0x44,"ssl\\statem\\extensions_clnt.c",0x1000004d3);
    return 0;
  }
  if (param_2[1] == 0) {
    uVar9 = 0x1000004da;
  }
  else {
    uVar7 = param_2[1] - 1;
    uVar5 = (ulonglong)*(byte *)*param_2;
    _Buf1 = (byte *)*param_2 + 1;
    *param_2 = _Buf1;
    param_2[1] = uVar7;
    if (uVar7 == uVar5) {
      if (uVar5 == uVar1) {
        uVar1 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388);
        if (uVar1 <= uVar7) {
          _Buf1_00 = _Buf1 + uVar1;
          uVar7 = uVar7 - uVar1;
          *param_2 = _Buf1_00;
          param_2[1] = uVar7;
          lVar2 = *(longlong *)(param_1 + 0xa8);
          iVar4 = _guard_xfg_dispatch_icall_nop
                            (_Buf1,(void *)(lVar2 + 0x348),*(size_t *)(lVar2 + 0x388));
          if (iVar4 == 0) {
            uVar1 = *(ulonglong *)(lVar2 + 0x3d0);
            if (uVar1 <= uVar7) {
              *param_2 = _Buf1_00 + uVar1;
              param_2[1] = uVar7 - uVar1;
              lVar2 = *(longlong *)(param_1 + 0xa8);
              iVar4 = _guard_xfg_dispatch_icall_nop
                                (_Buf1_00,(void *)(lVar2 + 0x390),*(size_t *)(lVar2 + 0x3d0));
              if (iVar4 == 0) {
                *(undefined4 *)(lVar2 + 0x3d8) = 1;
                return 1;
              }
            }
            uVar9 = 0x4f8;
            goto LAB_143ce2419;
          }
        }
        uVar9 = 0x4f0;
LAB_143ce2419:
        ossl_statem_fatal(param_1,0x2f,0x1c0,0x151,"ssl\\statem\\extensions_clnt.c",uVar9);
        return 0;
      }
      uVar9 = 0x1000004e8;
      uVar6 = 0x2f;
      uVar8 = 0x151;
      goto LAB_143ce2453;
    }
    uVar9 = 0x1000004e1;
  }
  uVar6 = 0x32;
  uVar8 = 0x150;
LAB_143ce2453:
  ossl_statem_fatal(param_1,uVar6,0x1c0,uVar8,"ssl\\statem\\extensions_clnt.c",uVar9);
  return 0;
}



// FUNCTION 143ce2480 tls_parse_stoc_sct body=359 status=ok
// SIG undefined tls_parse_stoc_sct(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_stoc_sct(longlong param_1,undefined8 *param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 in_stack_ffffffffffffffe0;
  undefined4 uVar7;
  undefined8 uVar6;
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffe0 >> 0x20);
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x718) == 0) {
    lVar3 = custom_ext_find(*(longlong *)(param_1 + 0x488) + 0x1e8,~(param_3 >> 7) & 2,0x12);
    if (lVar3 != 0) {
      iVar1 = custom_ext_parse(param_1,param_3,0x12,*param_2,param_2[1],param_4,param_5);
      if (iVar1 == 0) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x6e;
    uVar6 = CONCAT44(uVar7,0x5ea);
    uVar5 = 0x6e;
  }
  else {
    lVar3 = param_2[1];
    CRYPTO_free(*(undefined8 *)(param_1 + 0x640),"ssl\\statem\\extensions_clnt.c",0x5d1);
    *(undefined8 *)(param_1 + 0x640) = 0;
    *(short *)(param_1 + 0x648) = (short)lVar3;
    if (lVar3 == 0) {
      return 1;
    }
    lVar2 = CRYPTO_malloc(lVar3,"ssl\\statem\\extensions_clnt.c",0x5d6);
    *(longlong *)(param_1 + 0x640) = lVar2;
    if ((lVar2 != 0) && (iVar1 = PACKET_copy_bytes(param_2,lVar2,lVar3), iVar1 != 0)) {
      return 1;
    }
    uVar4 = 0x50;
    uVar6 = CONCAT44(uVar7,0x5da);
    uVar5 = 0x44;
  }
  ossl_statem_fatal(param_1,uVar4,0x234,uVar5,"ssl\\statem\\extensions_clnt.c",uVar6);
  return 0;
}



// FUNCTION 143ce25f0 tls_parse_stoc_server_name body=240 status=ok
// SIG undefined tls_parse_stoc_server_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_server_name(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x630) == 0) {
    uVar3 = 0x10000052f;
  }
  else {
    if (*(longlong *)(param_2 + 8) != 0) {
      uVar1 = 0x32;
      uVar3 = 0x100000535;
      uVar2 = 0x6e;
      goto LAB_143ce262a;
    }
    if (*(int *)(param_1 + 200) != 0) {
      return 1;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x158) == 0) {
      uVar1 = CRYPTO_strdup(*(longlong *)(param_1 + 0x630),"ssl\\statem\\extensions_clnt.c",0x53f);
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x158) = uVar1;
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x158) != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar2,0x542);
    }
    else {
      uVar3 = 0x10000053c;
    }
  }
  uVar1 = 0x50;
  uVar2 = 0x44;
LAB_143ce262a:
  ossl_statem_fatal(param_1,uVar1,0x247,uVar2,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 143ce26e0 tls_parse_stoc_session_ticket body=191 status=ok
// SIG undefined tls_parse_stoc_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_session_ticket(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((*(code **)(param_1 + 0x6a0) == (code *)0x0) ||
     (uVar4 = 1,
     iVar1 = (**(code **)(param_1 + 0x6a0))
                       (param_1,*param_2,*(undefined4 *)(param_2 + 1),
                        *(undefined8 *)(param_1 + 0x6a8)), iVar1 != 0)) {
    iVar1 = tls_use_ticket(param_1);
    if (iVar1 == 0) {
      uVar2 = 0x6e;
      uVar3 = CONCAT44(uVar4,0x584);
    }
    else {
      if (param_2[1] == 0) {
        *(undefined4 *)(param_1 + 0x670) = 1;
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0x589);
      uVar2 = 0x32;
    }
  }
  else {
    uVar3 = CONCAT44(uVar4,0x57e);
    uVar2 = 0x28;
  }
  ossl_statem_fatal(param_1,uVar2,0x248,0x6e,"ssl\\statem\\extensions_clnt.c",uVar3);
  return 0;
}



// FUNCTION 143ce27a0 tls_parse_stoc_status_request body=236 status=ok
// SIG undefined tls_parse_stoc_status_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_parse_stoc_status_request
          (longlong param_1,longlong param_2,int param_3,undefined8 param_4,longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  
  if (param_3 == 0x4000) {
    return 1;
  }
  if (*(int *)(param_1 + 0x638) != 1) {
    ossl_statem_fatal(param_1,0x6e,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5a2,0x143ce27aa);
    return 0;
  }
  piVar1 = *(int **)(param_1 + 8);
  uVar3 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
  if (((uVar3 != 0) || (*piVar1 < 0x304)) || (*piVar1 == 0x10000)) {
    if (*(longlong *)(param_2 + 8) != 0) {
      ossl_statem_fatal(param_1,0x32,0x249,0x6e,"ssl\\statem\\extensions_clnt.c",0x5a7,0x143ce27aa);
      return 0;
    }
    if (uVar3 != 0) goto LAB_143ce2878;
  }
  if ((0x303 < *piVar1) && (*piVar1 != 0x10000)) {
    if (param_5 != 0) {
      return 1;
    }
    uVar2 = tls_process_cert_status_body(param_1,param_2);
    return uVar2;
  }
LAB_143ce2878:
  *(undefined4 *)(param_1 + 0x64c) = 1;
  return 1;
}



// FUNCTION 143ce2890 tls_parse_stoc_supported_versions body=160 status=ok
// SIG undefined tls_parse_stoc_supported_versions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_supported_versions(undefined4 *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (1 < (ulonglong)param_2[1]) {
    puVar4 = (undefined1 *)*param_2;
    uVar2 = puVar4[1];
    uVar3 = *puVar4;
    *param_2 = (longlong)(puVar4 + 2);
    lVar1 = param_2[1] - 2;
    param_2[1] = lVar1;
    if (lVar1 == 0) {
      if (CONCAT11(uVar3,uVar2) == 0x304) {
        if (param_3 == 0x800) {
          return 1;
        }
        *param_1 = 0x304;
        return 1;
      }
      uVar7 = 0x6ea;
      uVar5 = 0x2f;
      uVar6 = 0x74;
      goto LAB_143ce2912;
    }
  }
  uVar5 = 0x32;
  uVar7 = 0x6df;
  uVar6 = 0x9f;
LAB_143ce2912:
  ossl_statem_fatal(param_1,uVar5,0x264,uVar6,"ssl\\statem\\extensions_clnt.c",uVar7,0x143ce289a);
  return 0;
}



// FUNCTION 143ce2930 tls_parse_stoc_use_srtp body=472 status=ok
// SIG undefined tls_parse_stoc_use_srtp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_parse_stoc_use_srtp(longlong param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  
  uVar10 = 0x143ce2940;
  uVar4 = param_2[1];
  if (1 < uVar4) {
    puVar5 = (undefined1 *)*param_2;
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    *param_2 = (longlong)(puVar5 + 2);
    param_2[1] = uVar4 - 2;
    if ((CONCAT11(uVar1,uVar2) == 2) && (1 < uVar4 - 2)) {
      uVar1 = puVar5[2];
      uVar2 = puVar5[3];
      *param_2 = (longlong)(puVar5 + 4);
      param_2[1] = uVar4 - 4;
      if (uVar4 - 4 != 0) {
        cVar3 = puVar5[4];
        *param_2 = (longlong)(puVar5 + 5);
        param_2[1] = uVar4 - 5;
        if (uVar4 - 5 == 0) {
          if (cVar3 != '\0') {
            ossl_statem_fatal(param_1,0x2f,0x1be,0x160,"ssl\\statem\\extensions_clnt.c",0x1000006a1)
            ;
            return 0;
          }
          lVar7 = SSL_get_srtp_profiles(param_1);
          if (lVar7 != 0) {
            iVar9 = 0;
            iVar6 = OPENSSL_sk_num(lVar7);
            uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
            if (0 < iVar6) {
              do {
                lVar8 = OPENSSL_sk_value(lVar7,iVar9);
                if (*(uint *)(lVar8 + 8) == (uint)CONCAT11(uVar1,uVar2)) {
                  *(longlong *)(param_1 + 0x748) = lVar8;
                  return 1;
                }
                iVar9 = iVar9 + 1;
                iVar6 = OPENSSL_sk_num(lVar7);
                uVar11 = (undefined4)((ulonglong)uVar10 >> 0x20);
              } while (iVar9 < iVar6);
            }
            ossl_statem_fatal(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",
                              CONCAT44(uVar11,0x6bb));
            return 0;
          }
          ossl_statem_fatal(param_1,0x32,0x1be,0x167,"ssl\\statem\\extensions_clnt.c",0x6a9);
          return 0;
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x1be,0x161,"ssl\\statem\\extensions_clnt.c",0x10000069a);
  return 0;
}



// FUNCTION 143ce2b10 use_ecc body=140 status=ok
// SIG undefined use_ecc(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 use_ecc(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*param_1 != 0x300) {
    uVar2 = SSL_get_ciphers();
    iVar1 = OPENSSL_sk_num(uVar2);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        lVar3 = OPENSSL_sk_value(uVar2,iVar4);
        if ((((*(byte *)(lVar3 + 0x1c) & 0x84) != 0) || ((*(byte *)(lVar3 + 0x20) & 8) != 0)) ||
           (0x303 < *(int *)(lVar3 + 0x2c))) {
          return 1;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return 0;
}



// FUNCTION 143ce2ba0 SSL_CTX_use_PrivateKey body=71 status=ok
// SIG undefined SSL_CTX_use_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_use_PrivateKey(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xae,0x43,"ssl\\ssl_rsa.c",0x209);
    return 0;
  }
  uVar1 = ssl_set_pkey(*(undefined8 *)(param_1 + 0x130));
  return uVar1;
}



// FUNCTION 143ce2bf0 SSL_CTX_use_PrivateKey_ASN1 body=130 status=ok
// SIG undefined SSL_CTX_use_PrivateKey_ASN1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_PrivateKey_ASN1(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x143ce2c00;
  local_res18[0] = param_3;
  lVar2 = d2i_PrivateKey(param_1,0,local_res18);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xaf,0xd,"ssl\\ssl_rsa.c",0x23f,uVar3);
    return 0;
  }
  uVar1 = ssl_set_pkey(*(undefined8 *)(param_2 + 0x130),lVar2);
  EVP_PKEY_free(lVar2);
  return uVar1;
}



// FUNCTION 143ce2c80 SSL_CTX_use_PrivateKey_file body=296 status=ok
// SIG undefined SSL_CTX_use_PrivateKey_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_PrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143ce2ca0;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0x217;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x21c;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = PEM_read_bio_PrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0xa8),*(undefined8 *)(param_1 + 0xb0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x228;
          uVar6 = 0x7c;
          goto LAB_143ce2d6c;
        }
        uVar6 = 0xd;
        lVar5 = d2i_PrivateKey_bio(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = SSL_CTX_use_PrivateKey(param_1,lVar5);
        EVP_PKEY_free(lVar5);
        goto LAB_143ce2d82;
      }
      uVar7 = 0x22c;
    }
  }
LAB_143ce2d6c:
  ERR_put_error(0x14,0xb0,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_143ce2d82:
  BIO_free(lVar4);
  return uVar2;
}



// FUNCTION 143ce2db0 SSL_CTX_use_certificate body=173 status=ok
// SIG undefined SSL_CTX_use_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_use_certificate(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xab,0x43,"ssl\\ssl_rsa.c",0x131);
    return 0;
  }
  iVar1 = ssl_security_cert(0,param_1,param_2,0,1,0x143ce2dc0);
  if (iVar1 != 1) {
    ERR_put_error(0x14,0xab,iVar1,"ssl\\ssl_rsa.c",0x136);
    return 0;
  }
  uVar2 = ssl_set_cert(*(undefined8 *)(param_1 + 0x130),param_2);
  return uVar2;
}



// FUNCTION 143ce2e60 SSL_CTX_use_certificate_ASN1 body=129 status=ok
// SIG undefined SSL_CTX_use_certificate_ASN1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_CTX_use_certificate_ASN1(undefined8 param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 local_res18 [2];
  undefined8 uVar3;
  
  uVar3 = 0x143ce2e75;
  local_res18[0] = param_3;
  lVar2 = d2i_X509(0,local_res18,param_2);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xac,0xd,"ssl\\ssl_rsa.c",0x1a8,uVar3);
    return 0;
  }
  uVar1 = SSL_CTX_use_certificate(param_1,lVar2);
  X509_free(lVar2);
  return uVar1;
}



// FUNCTION 143ce2ef0 SSL_CTX_use_certificate_chain_file body=27 status=ok
// SIG undefined SSL_CTX_use_certificate_chain_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_use_certificate_chain_file(undefined8 param_1,undefined8 param_2)

{
  use_certificate_chain_file(param_1,0,param_2);
  return;
}



// FUNCTION 143ce2f10 SSL_CTX_use_serverinfo_ex body=340 status=ok
// SIG undefined SSL_CTX_use_serverinfo_ex(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_CTX_use_serverinfo_ex(longlong param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ce2f2a;
  if (((param_1 == 0) || (param_3 == (void *)0x0)) || (param_4 == 0)) {
    uVar4 = 0x363;
    uVar3 = 0x43;
  }
  else {
    iVar1 = serverinfo_process_buffer(param_2,param_3,param_4,0);
    if (iVar1 == 0) {
      uVar4 = 0x368;
      uVar3 = 0x184;
    }
    else if (**(longlong **)(param_1 + 0x130) == 0) {
      uVar4 = 0x36c;
      uVar3 = 0x44;
    }
    else {
      lVar2 = CRYPTO_realloc(*(undefined8 *)(**(longlong **)(param_1 + 0x130) + 0x18),param_4,
                             "ssl\\ssl_rsa.c",0x370);
      if (lVar2 == 0) {
        uVar4 = 0x372;
        uVar3 = 0x41;
      }
      else {
        *(longlong *)(**(longlong **)(param_1 + 0x130) + 0x18) = lVar2;
        _guard_xfg_dispatch_icall_nop
                  (*(void **)(**(longlong **)(param_1 + 0x130) + 0x18),param_3,param_4);
        *(size_t *)(**(longlong **)(param_1 + 0x130) + 0x20) = param_4;
        iVar1 = serverinfo_process_buffer(param_2,param_3,param_4,param_1);
        if (iVar1 != 0) {
          return 1;
        }
        uVar4 = 0x37f;
        uVar3 = 0x184;
      }
    }
  }
  ERR_put_error(0x14,0x21f,uVar3,"ssl\\ssl_rsa.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 143ce3070 SSL_CTX_use_serverinfo_file body=1142 status=ok
// SIG undefined SSL_CTX_use_serverinfo_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong SSL_CTX_use_serverinfo_file(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  char *pcVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined1 auStack_c8 [32];
  int *local_a8;
  int local_98 [2];
  void *local_90;
  char *local_88;
  undefined8 local_80;
  longlong local_78;
  char local_70 [24];
  char local_58 [16];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143ce308f;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  uVar10 = 0;
  local_90 = (void *)0x0;
  uVar14 = 0;
  local_98[0] = 0;
  local_88 = (char *)0x0;
  lVar11 = 0;
  local_80 = 0;
  builtin_strncpy(local_70,"SERVERINFOV2 FOR ",0x12);
  builtin_strncpy(local_58,"SERVERINFO FOR ",0x10);
  local_78 = param_1;
  if ((param_1 == 0) || (param_2 == 0)) {
    local_a8 = (int *)CONCAT44(local_a8._4_4_,0x39c);
    uVar5 = 0x43;
  }
  else {
    uVar5 = BIO_s_file();
    lVar11 = BIO_new(uVar5);
    if (lVar11 == 0) {
      local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3a2);
      uVar5 = 7;
      uVar14 = uVar10;
    }
    else {
      iVar2 = BIO_ctrl(lVar11,0x6c,3,param_2);
      if (iVar2 < 1) {
        local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3a6);
        uVar5 = 2;
      }
      else {
        local_a8 = local_98;
        iVar2 = PEM_read_bio(lVar11,&local_88,&local_80,&local_90);
        uVar9 = uVar10;
        uVar12 = uVar10;
        uVar13 = uVar10;
        uVar15 = uVar10;
        uVar14 = uVar10;
        if (iVar2 != 0) {
          do {
            uVar4 = 0;
            cVar1 = *local_88;
            uVar14 = uVar10;
            uVar8 = uVar4;
            pcVar6 = local_88;
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar14, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar8;
            }
            pcVar6 = local_58;
            uVar14 = uVar10;
            uVar3 = uVar4;
            cVar1 = local_58[0];
            while ((cVar1 != '\0' && (uVar3 = (uint)uVar14, uVar3 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar3 = uVar3 + 1;
              cVar1 = *pcVar6;
              uVar14 = (ulonglong)uVar3;
            }
            uVar14 = uVar15;
            if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
              local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3bb);
              uVar5 = 0x188;
              goto LAB_143ce3448;
            }
            pcVar6 = local_58;
            uVar7 = uVar10;
            uVar8 = uVar4;
            cVar1 = local_58[0];
            while ((cVar1 != '\0' && (uVar8 = (uint)uVar7, uVar8 < 0x80000000))) {
              pcVar6 = pcVar6 + 1;
              uVar8 = uVar8 + 1;
              cVar1 = *pcVar6;
              uVar7 = (ulonglong)uVar8;
            }
            iVar2 = strncmp(local_88,local_58,(ulonglong)(uVar8 & 0x7fffffff));
            if (iVar2 == 0) {
              if ((local_98[0] < 4) ||
                 ((uint)*(byte *)((longlong)local_90 + 2) * 0x100 +
                  (uint)*(byte *)((longlong)local_90 + 3) != local_98[0] + -4)) {
                local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3d5);
                uVar5 = 0x186;
                goto LAB_143ce3448;
              }
              uVar9 = 4;
            }
            else {
              cVar1 = *local_88;
              uVar7 = uVar10;
              uVar8 = uVar4;
              pcVar6 = local_88;
              while ((cVar1 != '\0' && (uVar8 = (uint)uVar7, uVar8 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar8 = uVar8 + 1;
                cVar1 = *pcVar6;
                uVar7 = (ulonglong)uVar8;
              }
              pcVar6 = local_70;
              uVar7 = uVar10;
              uVar3 = uVar4;
              cVar1 = local_70[0];
              while ((cVar1 != '\0' && (uVar3 = (uint)uVar7, uVar3 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar3 = uVar3 + 1;
                cVar1 = *pcVar6;
                uVar7 = (ulonglong)uVar3;
              }
              if ((uVar8 & 0x7fffffff) < (uVar3 & 0x7fffffff)) {
                local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3c3);
                uVar5 = 0x188;
                goto LAB_143ce3448;
              }
              pcVar6 = local_70;
              uVar7 = uVar10;
              cVar1 = local_70[0];
              while ((cVar1 != '\0' && (uVar4 = (uint)uVar7, uVar4 < 0x80000000))) {
                pcVar6 = pcVar6 + 1;
                uVar4 = uVar4 + 1;
                cVar1 = *pcVar6;
                uVar7 = (ulonglong)uVar4;
              }
              iVar2 = strncmp(local_88,local_70,(ulonglong)(uVar4 & 0x7fffffff));
              if (iVar2 != 0) {
                local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3c8);
                uVar5 = 0x187;
                goto LAB_143ce3448;
              }
              if ((local_98[0] < 8) ||
                 ((uint)*(byte *)((longlong)local_90 + 6) * 0x100 +
                  (uint)*(byte *)((longlong)local_90 + 7) != local_98[0] + -8)) {
                local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3e2);
                uVar5 = 0x186;
                goto LAB_143ce3448;
              }
            }
            uVar14 = CRYPTO_realloc(uVar15,(longlong)local_98[0] + uVar9 + uVar13,"ssl\\ssl_rsa.c",
                                    1000);
            if (uVar14 == 0) {
              local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3ea);
              uVar5 = 0x41;
              uVar14 = uVar15;
              goto LAB_143ce3448;
            }
            if (uVar9 != 0) {
              *(undefined4 *)(uVar14 + uVar13) = 0xd0010000;
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(uVar14 + uVar9 + uVar13),local_90,(longlong)local_98[0]);
            uVar13 = uVar13 + (longlong)local_98[0] + uVar9;
            CRYPTO_free(local_88,"ssl\\ssl_rsa.c",0x3fb);
            local_88 = (char *)0x0;
            CRYPTO_free(local_80,"ssl\\ssl_rsa.c",0x3fd);
            local_80 = 0;
            CRYPTO_free(local_90,"ssl\\ssl_rsa.c",0x3ff);
            local_a8 = local_98;
            local_90 = (void *)0x0;
            uVar12 = uVar12 + 1;
            iVar2 = PEM_read_bio(lVar11,&local_88,&local_80,&local_90);
            uVar15 = uVar14;
          } while (iVar2 != 0);
          if (uVar12 != 0) {
            uVar8 = SSL_CTX_use_serverinfo_ex(local_78,2,uVar14,uVar13);
            uVar10 = (ulonglong)uVar8;
            goto LAB_143ce345e;
          }
        }
        local_a8 = (int *)CONCAT44(local_a8._4_4_,0x3b4);
        uVar5 = 0x185;
      }
    }
  }
LAB_143ce3448:
  ERR_put_error(0x14,0x151,uVar5,"ssl\\ssl_rsa.c");
LAB_143ce345e:
  CRYPTO_free(local_88,"ssl\\ssl_rsa.c",0x407);
  CRYPTO_free(local_80,"ssl\\ssl_rsa.c",0x408);
  CRYPTO_free(local_90,"ssl\\ssl_rsa.c",0x409);
  CRYPTO_free(uVar14,"ssl\\ssl_rsa.c",0x40a);
  BIO_free(lVar11);
  return uVar10;
}



// FUNCTION 143ce34f0 SSL_use_PrivateKey body=73 status=ok
// SIG undefined SSL_use_PrivateKey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_use_PrivateKey(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xc9,0x43,"ssl\\ssl_rsa.c",0xed);
    return 0;
  }
  uVar1 = ssl_set_pkey(*(undefined8 *)(param_1 + 0x488));
  return uVar1;
}



// FUNCTION 143ce3540 SSL_use_PrivateKey_file body=296 status=ok
// SIG undefined SSL_use_PrivateKey_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 SSL_use_PrivateKey_file(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143ce3560;
  uVar2 = 0;
  uVar3 = BIO_s_file();
  lVar4 = BIO_new(uVar3);
  if (lVar4 == 0) {
    uVar7 = 0xfc;
    uVar6 = 7;
  }
  else {
    iVar1 = BIO_ctrl(lVar4,0x6c,3,param_2);
    if (iVar1 < 1) {
      uVar7 = 0x101;
      uVar6 = 2;
    }
    else {
      if (param_3 == 1) {
        uVar6 = 9;
        lVar5 = PEM_read_bio_PrivateKey
                          (lVar4,0,*(undefined8 *)(param_1 + 0x16b8),
                           *(undefined8 *)(param_1 + 0x16c0));
      }
      else {
        if (param_3 != 2) {
          uVar7 = 0x10d;
          uVar6 = 0x7c;
          goto LAB_143ce362c;
        }
        uVar6 = 0xd;
        lVar5 = d2i_PrivateKey_bio(lVar4,0);
      }
      if (lVar5 != 0) {
        uVar2 = SSL_use_PrivateKey(param_1,lVar5);
        EVP_PKEY_free(lVar5);
        goto LAB_143ce3642;
      }
      uVar7 = 0x111;
    }
  }
LAB_143ce362c:
  ERR_put_error(0x14,0xcb,uVar6,"ssl\\ssl_rsa.c",uVar7,uVar8);
LAB_143ce3642:
  BIO_free(lVar4);
  return uVar2;
}



// FUNCTION 143ce3670 SSL_use_certificate body=172 status=ok
// SIG undefined SSL_use_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_use_certificate(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0) {
    ERR_put_error(0x14,0xc6,0x43,"ssl\\ssl_rsa.c",0x1f);
    return 0;
  }
  iVar1 = ssl_security_cert(param_1,0,param_2,0,1,0x143ce3680);
  if (iVar1 != 1) {
    ERR_put_error(0x14,0xc6,iVar1,"ssl\\ssl_rsa.c",0x24);
    return 0;
  }
  uVar2 = ssl_set_cert(*(undefined8 *)(param_1 + 0x488),param_2);
  return uVar2;
}



// FUNCTION 143ce3720 SSL_use_certificate_chain_file body=30 status=ok
// SIG undefined SSL_use_certificate_chain_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_use_certificate_chain_file(undefined8 param_1,undefined8 param_2)

{
  use_certificate_chain_file(0,param_1,param_2);
  return;
}



// FUNCTION 143ce3740 serverinfo_process_buffer body=460 status=ok
// SIG undefined serverinfo_process_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
serverinfo_process_buffer(int param_1,undefined1 *param_2,ulonglong param_3,longlong param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  
  if ((((param_2 == (undefined1 *)0x0) || (param_3 == 0)) || (1 < param_1 - 1U)) ||
     (0x7fffffffffffffff < param_3)) {
LAB_143ce38ee:
    uVar5 = 0;
  }
  else {
    do {
      iVar6 = 0;
      if (param_1 == 2) {
        if (param_3 < 4) goto LAB_143ce38ee;
        puVar1 = param_2 + 1;
        uVar4 = *param_2;
        puVar2 = param_2 + 2;
        puVar3 = param_2 + 3;
        param_2 = param_2 + 4;
        iVar6 = CONCAT31(CONCAT21(CONCAT11(uVar4,*puVar1),*puVar2),*puVar3);
        param_3 = param_3 - 4;
      }
      if (param_3 < 2) goto LAB_143ce38ee;
      puVar1 = param_2 + 1;
      uVar4 = *param_2;
      if (param_3 - 2 < 2) goto LAB_143ce38ee;
      uVar7 = (ulonglong)CONCAT11(param_2[2],param_2[3]);
      if (param_3 - 4 < uVar7) goto LAB_143ce38ee;
      param_3 = (param_3 - 4) - uVar7;
      param_2 = param_2 + uVar7 + 4;
      if (param_4 != 0) {
        if ((param_1 == 1) || (iVar6 == 0x1d0)) {
          iVar6 = SSL_CTX_add_server_custom_ext
                            (param_4,CONCAT11(uVar4,*puVar1),serverinfo_srv_add_cb,0,0,
                             &LAB_143ce3960,0);
        }
        else {
          iVar6 = SSL_CTX_add_custom_ext
                            (param_4,CONCAT11(uVar4,*puVar1),iVar6,serverinfoex_srv_add_cb,0,0,
                             &LAB_143ce3b20,0);
        }
        if (iVar6 == 0) goto LAB_143ce38ee;
      }
    } while (param_3 != 0);
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143ce3910 serverinfo_srv_add_cb body=72 status=ok
// SIG undefined serverinfo_srv_add_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void serverinfo_srv_add_cb
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  serverinfoex_srv_add_cb(param_1,param_2,0,param_3,param_4,0,0,param_5,param_6);
  return;
}



// FUNCTION 143ce3980 serverinfoex_srv_add_cb body=401 status=ok
// SIG undefined serverinfoex_srv_add_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
serverinfoex_srv_add_cb
          (undefined8 param_1,uint param_2,uint param_3,longlong *param_4,ulonglong *param_5,
          undefined8 param_6,longlong param_7,undefined4 *param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  longlong local_28;
  ulonglong local_20 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143ce3995;
  local_28 = 0;
  local_20[0] = 0;
  if ((((param_3 >> 0xc & 1) == 0) || (param_7 == 0)) &&
     (iVar4 = ssl_get_server_cert_serverinfo(param_1,&local_28,local_20), iVar4 != 0)) {
    *param_4 = 0;
    *param_5 = 0;
    if ((local_28 == 0) || (0x7ffffffffffffffe < local_20[0] - 1)) {
LAB_143ce3adc:
      *param_8 = 0x50;
      return 0xffffffff;
    }
    do {
      if ((local_20[0] < 4) || (local_20[0] - 4 < 2)) goto LAB_143ce3adc;
      puVar1 = (undefined1 *)(local_28 + 5);
      puVar2 = (undefined1 *)(local_28 + 4);
      if (local_20[0] - 6 < 2) goto LAB_143ce3adc;
      lVar3 = local_28 + 8;
      uVar5 = (ulonglong)CONCAT11(*(undefined1 *)(local_28 + 6),*(undefined1 *)(local_28 + 7));
      if (local_20[0] - 8 < uVar5) goto LAB_143ce3adc;
      local_20[0] = (local_20[0] - 8) - uVar5;
      local_28 = lVar3 + uVar5;
      if (CONCAT11(*puVar2,*puVar1) == param_2) {
        *param_4 = lVar3;
        *param_5 = uVar5;
        return 1;
      }
    } while (local_20[0] != 0);
  }
  return 0;
}



// FUNCTION 143ce3b40 ssl_set_cert body=483 status=ok
// SIG undefined ssl_set_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_cert(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res18 [2];
  undefined8 uVar6;
  
  uVar6 = 0x143ce3b55;
  lVar2 = X509_get0_pubkey(param_2);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xbf,0x10c,"ssl\\ssl_rsa.c",0x143,uVar6);
    return 0;
  }
  lVar3 = ssl_cert_lookup_by_pkey(lVar2,local_res18);
  if (lVar3 == 0) {
    ERR_put_error(0x14,0xbf,0xf7,"ssl\\ssl_rsa.c",0x148,uVar6);
    return 0;
  }
  if (local_res18[0] == 3) {
    uVar4 = EVP_PKEY_get0_EC_KEY(lVar2);
    iVar1 = EC_KEY_can_sign(uVar4);
    if (iVar1 == 0) {
      ERR_put_error(0x14,0xbf,0x13e,"ssl\\ssl_rsa.c",0x14d,uVar6);
      return 0;
    }
  }
  if (param_1[local_res18[0] * 5 + 5] != 0) {
    EVP_PKEY_copy_parameters(lVar2);
    ERR_clear_error();
    iVar1 = FRollingHash::GetWindowSize(param_1[local_res18[0] * 5 + 5]);
    if (iVar1 == 6) {
      uVar6 = EVP_PKEY_get0_RSA(param_1[local_res18[0] * 5 + 5]);
      uVar5 = RSA_flags(uVar6);
      if ((uVar5 & 1) != 0) goto LAB_143ce3cd1;
    }
    iVar1 = X509_check_private_key(param_2,param_1[local_res18[0] * 5 + 5]);
    if (iVar1 == 0) {
      EVP_PKEY_free(param_1[local_res18[0] * 5 + 5]);
      param_1[local_res18[0] * 5 + 5] = 0;
      ERR_clear_error();
    }
  }
LAB_143ce3cd1:
  X509_free(param_1[local_res18[0] * 5 + 4]);
  X509_up_ref(param_2);
  param_1[local_res18[0] * 5 + 4] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}



// FUNCTION 143ce3d30 ssl_set_pkey body=368 status=ok
// SIG undefined ssl_set_pkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_pkey(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong local_res18 [2];
  undefined8 uVar4;
  
  uVar4 = 0x143ce3d40;
  lVar2 = ssl_cert_lookup_by_pkey(param_2,local_res18);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xc1,0xf7,"ssl\\ssl_rsa.c",0x85,uVar4);
    return 0;
  }
  if (param_1[local_res18[0] * 5 + 4] != 0) {
    lVar2 = X509_get0_pubkey();
    if (lVar2 == 0) {
      ERR_put_error(0x14,0xc1,0x41,"ssl\\ssl_rsa.c",0x8d,uVar4);
      return 0;
    }
    EVP_PKEY_copy_parameters(lVar2,param_2);
    ERR_clear_error();
    iVar1 = FRollingHash::GetWindowSize(param_2);
    if (iVar1 == 6) {
      uVar4 = EVP_PKEY_get0_RSA(param_2);
      uVar3 = RSA_flags(uVar4);
      if ((uVar3 & 1) != 0) goto LAB_143ce3e58;
    }
    iVar1 = X509_check_private_key(param_1[local_res18[0] * 5 + 4],param_2);
    if (iVar1 == 0) {
      X509_free(param_1[local_res18[0] * 5 + 4]);
      param_1[local_res18[0] * 5 + 4] = 0;
      return 0;
    }
  }
LAB_143ce3e58:
  EVP_PKEY_free(param_1[local_res18[0] * 5 + 5]);
  EVP_PKEY_up_ref(param_2);
  param_1[local_res18[0] * 5 + 5] = param_2;
  *param_1 = (longlong)(param_1 + local_res18[0] * 5 + 4);
  return 1;
}



// FUNCTION 143ce3ea0 use_certificate_chain_file body=556 status=ok
// SIG undefined use_certificate_chain_file(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int use_certificate_chain_file(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar10 = 0x143ce3ec2;
  iVar2 = 0;
  lVar6 = 0;
  ERR_clear_error();
  if (param_1 == 0) {
    uVar9 = *(undefined8 *)(param_2 + 0x16b8);
    uVar8 = *(undefined8 *)(param_2 + 0x16c0);
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 0xa8);
    uVar8 = *(undefined8 *)(param_1 + 0xb0);
  }
  uVar4 = BIO_s_file();
  lVar5 = BIO_new(uVar4);
  if (lVar5 == 0) {
    ERR_put_error(0x14,0xdc,7,"ssl\\ssl_rsa.c",0x262,uVar10);
  }
  else {
    iVar1 = BIO_ctrl(lVar5,0x6c,3,param_3);
    if (iVar1 < 1) {
      ERR_put_error(0x14,0xdc,2,"ssl\\ssl_rsa.c",0x267,uVar10);
    }
    else {
      lVar6 = PEM_read_bio_X509_AUX(lVar5,0,uVar9,uVar8);
      if (lVar6 == 0) {
        ERR_put_error(0x14,0xdc,9,"ssl\\ssl_rsa.c",0x26e);
      }
      else {
        if (param_1 == 0) {
          iVar2 = SSL_use_certificate(param_2,lVar6);
        }
        else {
          iVar2 = SSL_CTX_use_certificate(param_1);
        }
        iVar1 = ERR_peek_error();
        if (iVar1 == 0) {
          if (iVar2 == 0) goto LAB_143ce409d;
          if (param_1 == 0) {
            iVar1 = FUN_143ca4750(param_2,0x58,0,0);
          }
          else {
            iVar1 = FUN_143ca38a0(param_1);
          }
          if (iVar1 != 0) {
            lVar7 = PEM_read_bio_X509(lVar5,0,uVar9,uVar8);
            while (lVar7 != 0) {
              if (param_1 == 0) {
                iVar1 = FUN_143ca4750(param_2,0x59,0,lVar7);
              }
              else {
                iVar1 = FUN_143ca38a0(param_1);
              }
              if (iVar1 == 0) {
                X509_free(lVar7);
                goto LAB_143ce409b;
              }
              lVar7 = PEM_read_bio_X509(lVar5,0,uVar9,uVar8);
            }
            uVar3 = ERR_peek_last_error();
            if (((uVar3 & 0xff000000) == 0x9000000) && ((uVar3 & 0xfff) == 0x6c)) {
              ERR_clear_error();
              goto LAB_143ce409d;
            }
          }
        }
LAB_143ce409b:
        iVar2 = 0;
      }
    }
  }
LAB_143ce409d:
  X509_free(lVar6);
  BIO_free(lVar5);
  return iVar2;
}



// FUNCTION 143ce40d0 ssl3_cbc_digest_record body=2644 status=ok
// SIG undefined ssl3_cbc_digest_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ssl3_cbc_digest_record
          (undefined8 param_1,undefined8 param_2,ulonglong *param_3,undefined8 *param_4,
          void *param_5,longlong param_6,ulonglong param_7,void *param_8,ulonglong param_9,
          char param_10)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  void *pvVar9;
  byte bVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  byte bVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong _Size;
  byte bVar20;
  ulonglong uVar21;
  size_t sVar22;
  longlong lVar23;
  ulonglong uVar24;
  size_t _Size_00;
  longlong lVar25;
  uint uVar26;
  undefined1 auStack_3f8 [32];
  byte local_3d8;
  byte local_3d7;
  code *local_3d0;
  ulonglong local_3c8;
  ulonglong local_3c0;
  code *local_3b8;
  ulonglong local_3b0;
  undefined8 *local_3a8;
  undefined1 *local_3a0;
  uint local_398 [2];
  void *local_390;
  ulonglong local_388;
  ulonglong local_380;
  ulonglong local_378;
  size_t local_370;
  void *local_368;
  ulonglong local_360;
  ulonglong local_358;
  longlong local_350;
  ulonglong local_348;
  ulonglong local_340;
  undefined8 local_338;
  undefined8 local_330;
  ulonglong *local_328;
  undefined1 local_318 [216];
  undefined1 auStack_240 [24];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  ulonglong local_1e8 [16];
  undefined8 local_168;
  undefined4 local_160;
  undefined1 local_15c;
  undefined1 local_15b [115];
  undefined4 local_e8;
  uint auStack_e4 [31];
  ulonglong local_68;
  undefined8 uStack_48;
  
  uStack_48 = 0x143ce40ef;
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  _Size = 0x40;
  lVar23 = 0x28;
  local_390 = param_5;
  local_368 = param_8;
  sVar22 = 8;
  local_370 = 0x28;
  local_3d8 = 1;
  if (0xfffff < param_7) {
    return 0;
  }
  local_3a8 = param_4;
  local_338 = param_1;
  local_330 = param_2;
  local_328 = param_3;
  uVar12 = EVP_MD_CTX_md();
  iVar11 = FRollingHash::GetWindowSize(uVar12);
  if (iVar11 < 0x2a2) {
    if (iVar11 == 0x2a1) {
      iVar11 = SHA384_Init(local_318);
      if (iVar11 < 1) {
        return 0;
      }
      uVar21 = 0x30;
      local_3b8 = (code *)&LAB_143ce4d60;
      local_3d0 = SSL_CTX_remove_session;
      local_3c8 = 0x30;
      _Size = 0x80;
      sVar22 = 0x10;
    }
    else if (iVar11 == 4) {
      iVar11 = MD5_Init(local_318);
      if (iVar11 < 1) {
        return 0;
      }
      uVar21 = 0x10;
      local_3d8 = 0;
      lVar23 = 0x30;
      local_3c8 = 0x10;
      local_370 = 0x30;
      local_3b8 = (code *)&LAB_143ce4b70;
      local_3d0 = SSL_CTX_remove_session;
    }
    else if (iVar11 == 0x40) {
      iVar11 = SHA1_Init(local_318);
      if (iVar11 < 1) {
        return 0;
      }
      uVar21 = 0x14;
      local_3b8 = (code *)&LAB_143ce4bf0;
      local_3c8 = 0x14;
      local_3d0 = SSL_CTX_remove_session;
    }
    else {
      if (iVar11 != 0x2a0) goto LAB_143ce4275;
      iVar11 = SHA256_Init(local_318);
      if (iVar11 < 1) {
        return 0;
      }
      uVar21 = 0x20;
      local_3b8 = FUN_143ce4c80;
      local_3c8 = 0x20;
      local_3d0 = SSL_CTX_remove_session;
    }
  }
  else if (iVar11 == 0x2a2) {
    iVar11 = SHA512_Init(local_318);
    if (iVar11 < 1) {
      return 0;
    }
    uVar21 = 0x40;
    local_3c8 = 0x40;
    _Size = 0x80;
    local_3b8 = (code *)&LAB_143ce4d60;
    local_3d0 = SSL_CTX_remove_session;
    sVar22 = 0x10;
  }
  else {
    if (iVar11 != 0x2a3) {
LAB_143ce4275:
      if (param_3 == (ulonglong *)0x0) {
        return 0;
      }
      *param_3 = 0;
      return 0;
    }
    iVar11 = SHA224_Init(local_318);
    if (iVar11 < 1) {
      return 0;
    }
    uVar21 = 0x1c;
    local_3b8 = FUN_143ce4c80;
    local_3c8 = 0x1c;
    local_3d0 = SSL_CTX_remove_session;
  }
  uVar19 = 0xd;
  if (param_10 != '\0') {
    uVar19 = param_9 + 0xb + lVar23;
  }
  local_380 = 6;
  if (param_10 != '\0') {
    local_380 = 2;
  }
  uVar24 = param_6 + (uVar19 - uVar21);
  uVar14 = 0;
  uVar13 = ((uVar19 - uVar21) + sVar22 + _Size + (param_7 - 1)) / _Size;
  local_378 = uVar24 % _Size;
  local_360 = uVar24 / _Size;
  local_358 = (uVar24 + sVar22) / _Size;
  uVar16 = uVar13 - local_380;
  local_388 = uVar14;
  uVar18 = uVar14;
  if ((param_10 != '\0') + local_380 < uVar13) {
    local_388 = uVar16;
    uVar18 = uVar16 * _Size;
  }
  uVar24 = uVar24 * 8;
  if (param_10 == '\0') {
    uVar24 = uVar24 + _Size * 8;
    _guard_xfg_dispatch_icall_nop(local_1e8,0,_Size);
    if (0x80 < param_9) {
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(local_1e8,local_368,param_9);
    do {
      *(ulonglong *)((longlong)local_1e8 + uVar14) =
           *(ulonglong *)((longlong)local_1e8 + uVar14) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 8) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 8) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x10) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x10) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x18) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x18) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x20) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x20) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x28) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x28) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x30) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x30) ^ 0x3636363636363636;
      *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x38) =
           *(ulonglong *)((longlong)local_1e8 + uVar14 + 0x38) ^ 0x3636363636363636;
      uVar14 = uVar14 + 0x40;
    } while (uVar14 < _Size);
    (*local_3d0)(local_318);
  }
  local_3a0 = (undefined1 *)(uVar24 >> 0x18);
  local_3b0 = uVar24 >> 0x10;
  local_3c0 = uVar24 >> 8;
  if (local_3d8 == 0) {
    _guard_xfg_dispatch_icall_nop(auStack_240 + 8,0,sVar22);
    auStack_240[sVar22 + 3] = (char)local_3a0;
    auStack_240[sVar22 + 2] = (char)local_3b0;
    auStack_240[sVar22 + 1] = (char)local_3c0;
    auStack_240[sVar22] = (char)uVar24;
  }
  else {
    _guard_xfg_dispatch_icall_nop(auStack_240 + 8,0,sVar22 - 4);
    auStack_240[sVar22 + 4] = (char)local_3a0;
    auStack_240[sVar22 + 5] = (char)local_3b0;
    auStack_240[sVar22 + 6] = (char)local_3c0;
    auStack_240[sVar22 + 7] = (char)uVar24;
  }
  pvVar9 = local_390;
  if (uVar18 != 0) {
    if (param_10 == '\0') {
      local_160 = *(undefined4 *)(local_3a8 + 1);
      local_168 = *local_3a8;
      local_15c = *(undefined1 *)((longlong)local_3a8 + 0xc);
      _guard_xfg_dispatch_icall_nop(local_15b,local_390,_Size - 0xd);
      (*local_3d0)(local_318);
      pcVar8 = local_3d0;
      if (1 < uVar18 / _Size) {
        lVar23 = uVar18 / _Size - 1;
        lVar25 = (longlong)pvVar9 + -0xd;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar8)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          uVar21 = local_3c8;
        } while (lVar23 != 0);
      }
    }
    else {
      if (uVar19 <= _Size) {
        return 0;
      }
      _Size_00 = uVar19 - _Size;
      local_3c0 = _Size_00;
      (*local_3d0)(local_318,local_3a8);
      _guard_xfg_dispatch_icall_nop(&local_168,(void *)((longlong)local_3a8 + _Size),_Size_00);
      pvVar9 = local_390;
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)&local_168 + _Size_00),local_390,_Size - _Size_00);
      (*local_3d0)(local_318);
      pcVar8 = local_3d0;
      if (1 < uVar18 / _Size - 1) {
        lVar25 = (longlong)pvVar9 - local_3c0;
        lVar23 = uVar18 / _Size - 2;
        do {
          lVar25 = lVar25 + _Size;
          (*pcVar8)(local_318,lVar25);
          lVar23 = lVar23 + -1;
          uVar21 = local_3c8;
        } while (lVar23 != 0);
      }
    }
  }
  local_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  local_208 = 0;
  local_200 = 0;
  local_1f8 = 0;
  local_1f0 = 0;
  local_348 = local_380 + local_388;
  if (local_388 <= local_348) {
    local_340 = ~local_378;
    local_3b0 = local_378 + 1;
    local_3c0 = local_3b0 >> 0x3f;
    local_380 = _Size - sVar22;
    local_3a0 = auStack_240 + sVar22 + (local_378 - _Size) + 9;
    local_350 = (longlong)&local_e8 + local_378 + 1;
    local_378 = local_378 >> 0x3f;
    do {
      bVar1 = (char)((byte)((local_388 ^ local_360) - 1 >> 0x38) &
                    ~(byte)((local_388 ^ local_360) >> 0x38)) >> 7;
      bVar2 = (char)((byte)((local_388 ^ local_358) - 1 >> 0x38) &
                    ~(byte)((local_388 ^ local_358) >> 0x38)) >> 7;
      local_3d8 = ~bVar2;
      local_3d7 = local_3d8 | bVar1;
      uVar26 = CONCAT22(CONCAT11(bVar2,bVar2),CONCAT11(bVar2,bVar2));
      uVar21 = local_340;
      do {
        bVar10 = 0;
        puVar15 = local_3a8;
        if (uVar18 < uVar19) {
LAB_143ce47ad:
          bVar10 = *(byte *)((longlong)puVar15 + uVar18);
        }
        else if (uVar18 < param_7 + uVar19) {
          puVar15 = (undefined8 *)((longlong)local_390 - uVar19);
          goto LAB_143ce47ad;
        }
        uVar24 = uVar21 + 1;
        bVar17 = (byte)(local_3b0 + uVar21 >> 0x3f);
        bVar20 = (((byte)(uVar24 >> 0x3f) ^ (byte)local_378 | bVar17 ^ (byte)local_378) ^ bVar17) -
                 1 & bVar1;
        uVar18 = uVar18 + 1;
        bVar10 = ~((((byte)(uVar21 >> 0x3f) ^ (byte)local_3c0 | bVar17 ^ (byte)local_3c0) ^ bVar17)
                   - 1 & bVar1) & (~bVar20 & bVar10 | bVar20 & 0x80) & local_3d7;
        if (local_380 <= local_3b0 + uVar21) {
          bVar10 = bVar10 & local_3d8 | local_3a0[uVar21] & bVar2;
        }
        *(byte *)(local_350 + uVar21) = bVar10;
        uVar21 = uVar24;
      } while (local_3b0 + uVar24 < _Size);
      (*local_3d0)(local_318,&local_e8);
      (*local_3b8)(local_318,&local_e8);
      uVar21 = 0;
      if (0x3f < local_3c8) {
        do {
          uVar3 = *(uint *)((longlong)&local_220 + uVar21);
          uVar4 = *(uint *)((longlong)&local_220 + uVar21 + 4);
          uVar5 = *(uint *)((longlong)auStack_e4 + uVar21 + 4);
          uVar6 = *(uint *)((longlong)auStack_e4 + uVar21 + 8);
          *(uint *)((longlong)&local_228 + uVar21) =
               *(uint *)((longlong)&local_e8 + uVar21) & uVar26 |
               *(uint *)((longlong)&local_228 + uVar21);
          *(uint *)((longlong)&local_228 + uVar21 + 4) =
               *(uint *)((longlong)auStack_e4 + uVar21) & uVar26 |
               *(uint *)((longlong)&local_228 + uVar21 + 4);
          *(uint *)((longlong)&local_220 + uVar21) = uVar5 & uVar26 | uVar3;
          *(uint *)((longlong)&local_220 + uVar21 + 4) = uVar6 & uVar26 | uVar4;
          uVar3 = *(uint *)((longlong)&local_210 + uVar21);
          uVar4 = *(uint *)((longlong)&local_210 + uVar21 + 4);
          uVar5 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x10);
          uVar6 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x14);
          uVar7 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x18);
          *(uint *)((longlong)&local_218 + uVar21) =
               *(uint *)((longlong)auStack_e4 + uVar21 + 0xc) & uVar26 |
               *(uint *)((longlong)&local_218 + uVar21);
          *(uint *)((longlong)&local_218 + uVar21 + 4) =
               uVar5 & uVar26 | *(uint *)((longlong)&local_218 + uVar21 + 4);
          *(uint *)((longlong)&local_210 + uVar21) = uVar6 & uVar26 | uVar3;
          *(uint *)((longlong)&local_210 + uVar21 + 4) = uVar7 & uVar26 | uVar4;
          uVar3 = *(uint *)((longlong)&local_200 + uVar21);
          uVar4 = *(uint *)((longlong)&local_200 + uVar21 + 4);
          uVar5 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x20);
          uVar6 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x24);
          uVar7 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x28);
          *(uint *)((longlong)&local_208 + uVar21) =
               *(uint *)((longlong)auStack_e4 + uVar21 + 0x1c) & uVar26 |
               *(uint *)((longlong)&local_208 + uVar21);
          *(uint *)((longlong)&local_208 + uVar21 + 4) =
               uVar5 & uVar26 | *(uint *)((longlong)&local_208 + uVar21 + 4);
          *(uint *)((longlong)&local_200 + uVar21) = uVar6 & uVar26 | uVar3;
          *(uint *)((longlong)&local_200 + uVar21 + 4) = uVar7 & uVar26 | uVar4;
          uVar3 = *(uint *)((longlong)local_1e8 + (uVar21 - 8));
          uVar4 = *(uint *)((longlong)local_1e8 + (uVar21 - 4));
          uVar5 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x30);
          uVar6 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x34);
          uVar7 = *(uint *)((longlong)auStack_e4 + uVar21 + 0x38);
          *(uint *)((longlong)&local_1f8 + uVar21) =
               *(uint *)((longlong)auStack_e4 + uVar21 + 0x2c) & uVar26 |
               *(uint *)((longlong)&local_1f8 + uVar21);
          *(uint *)((longlong)&local_1f8 + uVar21 + 4) =
               uVar5 & uVar26 | *(uint *)((longlong)&local_1f8 + uVar21 + 4);
          *(uint *)((longlong)local_1e8 + (uVar21 - 8)) = uVar6 & uVar26 | uVar3;
          *(uint *)((longlong)local_1e8 + (uVar21 - 4)) = uVar7 & uVar26 | uVar4;
          uVar21 = uVar21 + 0x40;
        } while (uVar21 < (local_3c8 & 0xffffffffffffffc0));
      }
      for (; uVar21 < local_3c8; uVar21 = uVar21 + 1) {
        *(byte *)((longlong)&local_228 + uVar21) =
             *(byte *)((longlong)&local_228 + uVar21) |
             *(byte *)((longlong)&local_e8 + uVar21) & bVar2;
      }
      local_388 = local_388 + 1;
      uVar21 = local_3c8;
    } while (local_388 <= local_348);
  }
  uVar19 = 0;
  lVar23 = EVP_MD_CTX_new();
  if (lVar23 != 0) {
    uVar12 = EVP_MD_CTX_md(local_338);
    iVar11 = EVP_DigestInit_ex(lVar23,uVar12,0);
    sVar22 = local_370;
    if (0 < iVar11) {
      if (param_10 == '\0') {
        do {
          *(ulonglong *)((longlong)local_1e8 + uVar19) =
               *(ulonglong *)((longlong)local_1e8 + uVar19) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 8) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 8) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x10) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x10) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x18) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x18) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x20) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x20) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x28) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x28) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x30) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x30) ^ 0x6a6a6a6a6a6a6a6a;
          *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x38) =
               *(ulonglong *)((longlong)local_1e8 + uVar19 + 0x38) ^ 0x6a6a6a6a6a6a6a6a;
          uVar19 = uVar19 + 0x40;
        } while (uVar19 < _Size);
        iVar11 = EVP_DigestUpdate(lVar23,local_1e8,_Size);
        if (iVar11 < 1) goto LAB_143ce49fe;
        iVar11 = EVP_DigestUpdate(lVar23,&local_228,uVar21);
      }
      else {
        _guard_xfg_dispatch_icall_nop(local_1e8,0x5c,local_370);
        iVar11 = EVP_DigestUpdate(lVar23,local_368,param_9);
        if ((iVar11 < 1) || (iVar11 = EVP_DigestUpdate(lVar23,local_1e8,sVar22), iVar11 < 1))
        goto LAB_143ce49fe;
        iVar11 = EVP_DigestUpdate(lVar23,&local_228,uVar21);
      }
      if (0 < iVar11) {
        iVar11 = EVP_DigestFinal(lVar23,local_330,local_398);
        if ((iVar11 != 0) && (local_328 != (ulonglong *)0x0)) {
          *local_328 = (ulonglong)local_398[0];
        }
        EVP_MD_CTX_free(lVar23);
        return 1;
      }
    }
  }
LAB_143ce49fe:
  EVP_MD_CTX_free(lVar23);
  return 0;
}



// FUNCTION 143ce4b30 ssl3_cbc_record_digest_supported body=60 status=ok
// SIG undefined ssl3_cbc_record_digest_supported(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_cbc_record_digest_supported(void)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = EVP_MD_CTX_md();
  iVar1 = FRollingHash::GetWindowSize(uVar2);
  if ((iVar1 != 4) && (iVar1 != 0x40)) {
    if (3 < iVar1 - 0x2a0U) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143ce4c80 FUN_143ce4c80 body=223 status=ok
// SIG undefined FUN_143ce4c80(void)

void FUN_143ce4c80(undefined1 *param_1,undefined1 *param_2)

{
  *param_2 = param_1[3];
  param_2[1] = param_1[2];
  param_2[2] = param_1[1];
  param_2[3] = *param_1;
  param_2[4] = param_1[7];
  param_2[5] = param_1[6];
  param_2[6] = param_1[5];
  param_2[7] = param_1[4];
  param_2[8] = param_1[0xb];
  param_2[9] = param_1[10];
  param_2[10] = param_1[9];
  param_2[0xb] = param_1[8];
  param_2[0xc] = param_1[0xf];
  param_2[0xd] = param_1[0xe];
  param_2[0xe] = param_1[0xd];
  param_2[0xf] = param_1[0xc];
  param_2[0x10] = param_1[0x13];
  param_2[0x11] = param_1[0x12];
  param_2[0x12] = param_1[0x11];
  param_2[0x13] = param_1[0x10];
  param_2[0x14] = param_1[0x17];
  param_2[0x15] = param_1[0x16];
  param_2[0x16] = param_1[0x15];
  param_2[0x17] = param_1[0x14];
  param_2[0x18] = param_1[0x1b];
  param_2[0x19] = param_1[0x1a];
  param_2[0x1a] = param_1[0x19];
  param_2[0x1b] = param_1[0x18];
  param_2[0x1c] = param_1[0x1f];
  param_2[0x1d] = param_1[0x1e];
  param_2[0x1e] = param_1[0x1d];
  param_2[0x1f] = param_1[0x1c];
  return;
}



// FUNCTION 143ce4f20 SSL_get_srtp_profiles body=44 status=ok
// SIG undefined SSL_get_srtp_profiles(void)

longlong SSL_get_srtp_profiles(longlong param_1)

{
  longlong lVar1;
  
  if ((param_1 == 0) ||
     ((lVar1 = *(longlong *)(param_1 + 0x740), lVar1 == 0 &&
      ((*(longlong *)(param_1 + 0x598) == 0 ||
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x368), lVar1 == 0)))))) {
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ce4f50 OPENSSL_sk_deep_copy body=353 status=ok
// SIG undefined OPENSSL_sk_deep_copy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * OPENSSL_sk_deep_copy(int *param_1,code *param_2,code *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143ce4f64;
  piVar3 = (int *)CRYPTO_malloc(0x20,"crypto\\stack\\stack.c",0x50);
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0xf,0x7f,0x41,"crypto\\stack\\stack.c",0x51,uVar7);
    return (int *)0x0;
  }
  iVar6 = param_1[1];
  iVar2 = param_1[2];
  iVar1 = param_1[3];
  *piVar3 = *param_1;
  piVar3[1] = iVar6;
  piVar3[2] = iVar2;
  piVar3[3] = iVar1;
  iVar6 = param_1[5];
  iVar2 = param_1[6];
  iVar1 = param_1[7];
  piVar3[4] = param_1[4];
  piVar3[5] = iVar6;
  piVar3[6] = iVar2;
  piVar3[7] = iVar1;
  iVar6 = *param_1;
  if (iVar6 == 0) {
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[5] = 0;
  }
  else {
    iVar2 = 4;
    if (4 < iVar6) {
      iVar2 = iVar6;
    }
    piVar3[5] = iVar2;
    lVar4 = CRYPTO_zalloc((longlong)iVar2 << 3,"crypto\\stack\\stack.c",0x60);
    *(longlong *)(piVar3 + 2) = lVar4;
    if (lVar4 == 0) {
      CRYPTO_free(piVar3,"crypto\\stack\\stack.c",0x62);
      piVar3 = (int *)0x0;
    }
    else {
      iVar6 = 0;
      if (0 < *piVar3) {
        lVar4 = 0;
        do {
          if (*(longlong *)(lVar4 + *(longlong *)(param_1 + 2)) != 0) {
            lVar5 = (*param_2)();
            *(longlong *)(lVar4 + *(longlong *)(piVar3 + 2)) = lVar5;
            if (lVar5 == 0) {
              lVar4 = (longlong)(iVar6 + -1);
              if (-1 < iVar6 + -1) {
                do {
                  if (*(longlong *)(*(longlong *)(piVar3 + 2) + lVar4 * 8) != 0) {
                    (*param_3)();
                  }
                  lVar4 = lVar4 + -1;
                } while (-1 < lVar4);
              }
              OPENSSL_sk_free(piVar3);
              return (int *)0x0;
            }
          }
          iVar6 = iVar6 + 1;
          lVar4 = lVar4 + 8;
        } while (iVar6 < *piVar3);
      }
    }
  }
  return piVar3;
}



// FUNCTION 143ce50c0 OPENSSL_sk_delete body=42 status=ok
// SIG undefined OPENSSL_sk_delete(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_delete(int *param_1,int param_2)

{
  undefined8 uVar1;
  
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    uVar1 = internal_delete();
    return uVar1;
  }
  return 0;
}



// FUNCTION 143ce50f0 OPENSSL_sk_delete_ptr body=132 status=ok
// SIG undefined OPENSSL_sk_delete_ptr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_sk_delete_ptr(int *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  iVar5 = *param_1;
  iVar3 = 0;
  if (0 < iVar5) {
    plVar1 = *(longlong **)(param_1 + 2);
    plVar4 = plVar1;
    do {
      if (*plVar4 == param_2) {
        lVar2 = plVar1[iVar3];
        if (iVar3 != iVar5 + -1) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar3,plVar1 + (iVar3 + 1),(longlong)((iVar5 - iVar3) + -1) << 3);
          iVar5 = *param_1;
        }
        *param_1 = iVar5 + -1;
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      plVar4 = plVar4 + 1;
    } while (iVar3 < iVar5);
  }
  return 0;
}



// FUNCTION 143ce5180 OPENSSL_sk_dup body=225 status=ok
// SIG undefined OPENSSL_sk_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * OPENSSL_sk_dup(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void *_Dst;
  undefined8 uVar5;
  
  uVar5 = 0x143ce5190;
  piVar4 = (int *)CRYPTO_malloc(0x20,"crypto\\stack\\stack.c",0x31);
  if (piVar4 == (int *)0x0) {
    ERR_put_error(0xf,0x80,0x41,"crypto\\stack\\stack.c",0x32,uVar5);
    return (int *)0x0;
  }
  iVar1 = param_1[1];
  iVar2 = param_1[2];
  iVar3 = param_1[3];
  *piVar4 = *param_1;
  piVar4[1] = iVar1;
  piVar4[2] = iVar2;
  piVar4[3] = iVar3;
  iVar1 = param_1[5];
  iVar2 = param_1[6];
  iVar3 = param_1[7];
  piVar4[4] = param_1[4];
  piVar4[5] = iVar1;
  piVar4[6] = iVar2;
  piVar4[7] = iVar3;
  if (*param_1 == 0) {
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[5] = 0;
    return piVar4;
  }
  _Dst = (void *)CRYPTO_malloc((longlong)param_1[5] << 3,"crypto\\stack\\stack.c",0x40);
  *(void **)(piVar4 + 2) = _Dst;
  if (_Dst == (void *)0x0) {
    OPENSSL_sk_free(piVar4);
    return (int *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 2),(longlong)*param_1 << 3);
  return piVar4;
}



// FUNCTION 143ce5270 OPENSSL_sk_find body=26 status=ok
// SIG undefined OPENSSL_sk_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_find(undefined8 param_1,undefined8 param_2)

{
  internal_find(param_1,param_2,2);
  return;
}



// FUNCTION 143ce5290 OPENSSL_sk_free body=71 status=ok
// SIG undefined OPENSSL_sk_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_free(longlong param_1)

{
  if (param_1 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1 + 8),"crypto\\stack\\stack.c",0x178);
    CRYPTO_free(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// FUNCTION 143ce52e0 OPENSSL_sk_insert body=226 status=ok
// SIG undefined OPENSSL_sk_insert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int OPENSSL_sk_insert(int *param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0x7fffffff)) {
    iVar1 = sk_reserve(param_1,1,0);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      if ((param_3 < iVar1) && (-1 < param_3)) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*(longlong *)(param_1 + 2) + (longlong)(param_3 + 1) * 8),
                   (void *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)),
                   (longlong)(iVar1 - param_3) << 3);
        *(undefined8 *)((longlong)param_3 * 8 + *(longlong *)(param_1 + 2)) = param_2;
        iVar1 = *param_1;
        *param_1 = iVar1 + 1;
        param_1[4] = 0;
        return iVar1 + 1;
      }
      *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)iVar1 * 8) = param_2;
      iVar1 = *param_1;
      param_1[4] = 0;
      *param_1 = iVar1 + 1;
      return iVar1 + 1;
    }
  }
  return 0;
}



// FUNCTION 143ce53d0 OPENSSL_sk_is_sorted body=14 status=ok
// SIG undefined OPENSSL_sk_is_sorted(void)

undefined4 OPENSSL_sk_is_sorted(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
  }
  return uVar1;
}



// FUNCTION 143ce53e0 OPENSSL_sk_new body=59 status=ok
// SIG undefined OPENSSL_sk_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_new(undefined8 param_1)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  return;
}



// FUNCTION 143ce5420 OPENSSL_sk_new_null body=57 status=ok
// SIG undefined OPENSSL_sk_new_null(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_new_null(void)

{
  longlong lVar1;
  undefined8 in_R9;
  
  lVar1 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1,in_R9,0x143ce542a);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x18) = 0;
  return;
}



// FUNCTION 143ce5460 OPENSSL_sk_new_reserve body=130 status=ok
// SIG undefined OPENSSL_sk_new_reserve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong OPENSSL_sk_new_reserve(undefined8 param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = CRYPTO_zalloc(0x20,"crypto\\stack\\stack.c",0xd1);
  if (lVar2 == 0) {
    return 0;
  }
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  if ((0 < param_2) && (iVar1 = sk_reserve(lVar2,param_2,1), iVar1 == 0)) {
    OPENSSL_sk_free(lVar2);
    return 0;
  }
  return lVar2;
}



// FUNCTION 143ce54f0 OPENSSL_sk_num body=13 status=ok
// SIG undefined OPENSSL_sk_num(void)

undefined4 OPENSSL_sk_num(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
  }
  return uVar1;
}



// FUNCTION 143ce5500 OPENSSL_sk_pop body=42 status=ok
// SIG undefined OPENSSL_sk_pop(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_pop(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = internal_delete(param_1,*param_1 + -1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143ce5530 OPENSSL_sk_pop_free body=153 status=ok
// SIG undefined OPENSSL_sk_pop_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_pop_free(int *param_1,code *param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != (int *)0x0) {
    iVar1 = 0;
    if (0 < *param_1) {
      lVar2 = 0;
      do {
        if (*(longlong *)(lVar2 + *(longlong *)(param_1 + 2)) != 0) {
          (*param_2)();
        }
        iVar1 = iVar1 + 1;
        lVar2 = lVar2 + 8;
      } while (iVar1 < *param_1);
    }
    CRYPTO_free(*(undefined8 *)(param_1 + 2),"crypto\\stack\\stack.c",0x178);
    CRYPTO_free(param_1,"crypto\\stack\\stack.c",0x179);
  }
  return;
}



// FUNCTION 143ce55d0 OPENSSL_sk_push body=38 status=ok
// SIG undefined OPENSSL_sk_push(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_push(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0xffffffff;
  }
  uVar1 = OPENSSL_sk_insert(param_1,param_2,*param_1);
  return uVar1;
}



// FUNCTION 143ce5600 OPENSSL_sk_reserve body=54 status=ok
// SIG undefined OPENSSL_sk_reserve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_reserve(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 < 0) {
    return 1;
  }
  uVar1 = sk_reserve(param_1,param_2,1);
  return uVar1;
}



// FUNCTION 143ce5640 OPENSSL_sk_set body=51 status=ok
// SIG undefined OPENSSL_sk_set(void)

undefined8 OPENSSL_sk_set(int *param_1,int param_2,undefined8 param_3)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2)) = param_3;
    param_1[4] = 0;
    return *(undefined8 *)((longlong)param_2 * 8 + *(longlong *)(param_1 + 2));
  }
  return 0;
}



// FUNCTION 143ce5680 OPENSSL_sk_set_cmp_func body=21 status=ok
// SIG undefined OPENSSL_sk_set_cmp_func(void)

void OPENSSL_sk_set_cmp_func(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  *(longlong *)(param_1 + 0x18) = param_2;
  if (lVar1 != param_2) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143ce56a0 OPENSSL_sk_shift body=41 status=ok
// SIG undefined OPENSSL_sk_shift(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_sk_shift(int *param_1)

{
  undefined8 uVar1;
  
  if ((param_1 != (int *)0x0) && (*param_1 != 0)) {
    uVar1 = internal_delete(param_1,0);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143ce56d0 OPENSSL_sk_sort body=77 status=ok
// SIG undefined OPENSSL_sk_sort(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_sk_sort(int *param_1)

{
  if (((param_1 != (int *)0x0) && (param_1[4] == 0)) &&
     (*(_PtFuncCompare **)(param_1 + 6) != (_PtFuncCompare *)0x0)) {
    if (1 < *param_1) {
      qsort(*(void **)(param_1 + 2),(longlong)*param_1,8,*(_PtFuncCompare **)(param_1 + 6));
    }
    param_1[4] = 1;
  }
  return;
}



// FUNCTION 143ce5720 OPENSSL_sk_value body=28 status=ok
// SIG undefined OPENSSL_sk_value(void)

undefined8 OPENSSL_sk_value(int *param_1,int param_2)

{
  if (((param_1 != (int *)0x0) && (-1 < param_2)) && (param_2 < *param_1)) {
    return *(undefined8 *)(*(longlong *)(param_1 + 2) + (longlong)param_2 * 8);
  }
  return 0;
}



// FUNCTION 143ce5740 internal_delete body=94 status=ok
// SIG undefined internal_delete(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 internal_delete(int *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar3 = *param_1;
  uVar2 = *(undefined8 *)(lVar1 + (longlong)param_2 * 8);
  if (param_2 != iVar3 + -1) {
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar1 + (longlong)param_2 * 8),(void *)(lVar1 + (longlong)(param_2 + 1) * 8)
               ,(longlong)((iVar3 - param_2) + -1) << 3);
    iVar3 = *param_1;
  }
  *param_1 = iVar3 + -1;
  return uVar2;
}



// FUNCTION 143ce57a0 internal_find body=207 status=ok
// SIG undefined internal_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong internal_find(int *param_1,longlong param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar4;
  longlong *plVar5;
  longlong local_res10 [3];
  ulonglong uVar3;
  
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      if (*(_PtFuncCompare **)(param_1 + 6) == (_PtFuncCompare *)0x0) {
        if (0 < iVar1) {
          plVar5 = *(longlong **)(param_1 + 2);
          uVar3 = 0;
          do {
            if (*plVar5 == param_2) {
              return uVar3;
            }
            uVar2 = (int)uVar3 + 1;
            uVar3 = (ulonglong)uVar2;
            plVar5 = plVar5 + 1;
          } while ((int)uVar2 < iVar1);
        }
      }
      else {
        local_res10[0] = param_2;
        if (param_1[4] == 0) {
          if (1 < iVar1) {
            qsort(*(void **)(param_1 + 2),(longlong)iVar1,8,*(_PtFuncCompare **)(param_1 + 6));
          }
          param_1[4] = 1;
        }
        if ((local_res10[0] != 0) &&
           (lVar4 = OBJ_bsearch_ex_(local_res10,*(undefined8 *)(param_1 + 2),*param_1,8,
                                    *(undefined8 *)(param_1 + 6),param_3), lVar4 != 0)) {
          return lVar4 - *(longlong *)(param_1 + 2) >> 3;
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143ce5870 sk_reserve body=267 status=ok
// SIG undefined sk_reserve(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 sk_reserve(int *param_1,int param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143ce5880;
  if (0x7fffffff - *param_1 < param_2) {
    return 0;
  }
  param_2 = *param_1 + param_2;
  if (param_2 < 4) {
    param_2 = 4;
  }
  if (*(longlong *)(param_1 + 2) == 0) {
    lVar1 = CRYPTO_zalloc((longlong)param_2 << 3,"crypto\\stack\\stack.c",0xb4);
    *(longlong *)(param_1 + 2) = lVar1;
    if (lVar1 == 0) {
      ERR_put_error(0xf,0x81,0x41,"crypto\\stack\\stack.c",0xb5,uVar3);
      return 0;
    }
  }
  else {
    iVar2 = param_1[5];
    if (param_3 == 0) {
      if (param_2 <= iVar2) {
        return 1;
      }
      do {
        if (0x7ffffffe < iVar2) {
          return 0;
        }
        if (iVar2 < 0x55555555) {
          iVar2 = iVar2 + iVar2 / 2;
        }
        else {
          iVar2 = 0x7fffffff;
        }
      } while (iVar2 < param_2);
      param_2 = iVar2;
      if (iVar2 == 0) {
        return 0;
      }
    }
    else if (param_2 == iVar2) {
      return 1;
    }
    lVar1 = CRYPTO_realloc(*(longlong *)(param_1 + 2),(longlong)param_2 << 3,
                           "crypto\\stack\\stack.c",0xc6);
    if (lVar1 == 0) {
      return 0;
    }
    *(longlong *)(param_1 + 2) = lVar1;
  }
  param_1[5] = param_2;
  return 1;
}



// FUNCTION 143ce5980 OPENSSL_atexit body=149 status=ok
// SIG undefined OPENSSL_atexit(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_atexit(LPCWSTR param_1)

{
  BOOL BVar1;
  undefined8 *puVar2;
  HMODULE local_res8 [4];
  undefined8 uVar3;
  
  uVar3 = 0x143ce598c;
  local_res8[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(5,param_1,local_res8);
  if (BVar1 != 0) {
    puVar2 = (undefined8 *)CRYPTO_malloc(0x10,"crypto\\init.c",0x2eb);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = param_1;
      puVar2[1] = DAT_146bc98f8;
      DAT_146bc98f8 = puVar2;
      return 1;
    }
    ERR_put_error(0xf,0x72,0x41,"crypto\\init.c",0x2ec,uVar3);
  }
  return 0;
}



// FUNCTION 143ce5a20 OPENSSL_cleanup body=303 status=ok
// SIG undefined OPENSSL_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void OPENSSL_cleanup(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 local_res8 [8];
  
  if ((DAT_146bc9908 != 0) && (DAT_146bc98f0 == 0)) {
    DAT_146bc98f0 = 1;
    uVar3 = CRYPTO_THREAD_get_local(&DAT_146836430);
    CRYPTO_THREAD_set_local(&DAT_146836430,0);
    ossl_init_thread_destructor(uVar3);
    puVar2 = DAT_146bc98f8;
    uVar3 = DAT_146bc9900;
    while (DAT_146bc9900 = uVar3, puVar2 != (undefined8 *)0x0) {
      (*(code *)*puVar2)();
      puVar1 = (undefined8 *)puVar2[1];
      CRYPTO_free(puVar2,"crypto\\init.c",0x1e3);
      puVar2 = puVar1;
      uVar3 = DAT_146bc9900;
    }
    DAT_146bc98f8 = (undefined8 *)0x0;
    CRYPTO_THREAD_lock_free();
    DAT_146bc9900 = 0;
    if (DAT_146bc998c != 0) {
      AK::MemoryMgr::StartProfileThreadUsage((long)uVar3);
    }
    if (DAT_146bc9958 != 0) {
      async_deinit();
    }
    if (DAT_146bc991c != 0) {
      err_free_strings_int();
    }
    lVar4 = (long)local_res8;
    local_res8[0] = DAT_146836430;
    DAT_146836430 = 0xffffffff;
    CRYPTO_THREAD_cleanup_local();
    rand_cleanup_int();
    rand_drbg_cleanup_int();
    conf_modules_free_int();
    engine_cleanup_int();
    ossl_store_cleanup_int();
    crypto_cleanup_all_ex_data_int();
    bio_cleanup();
    evp_cleanup_int();
    obj_cleanup_int();
    err_cleanup();
    AK::MemoryMgr::GetPoolName(lVar4);
    DAT_146bc9908 = 0;
  }
  return;
}



// FUNCTION 143ce5b50 OPENSSL_init_crypto body=932 status=ok
// SIG undefined OPENSSL_init_crypto(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 OPENSSL_init_crypto(ulonglong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  wchar_t *pwVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (DAT_146bc98f0 == 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc98f4,ossl_init_base_ossl_);
    uVar6 = 0;
    iVar4 = 0;
    iVar7 = 0;
    if (iVar1 != 0) {
      iVar7 = DAT_146bc990c;
    }
    if (iVar7 != 0) {
      if ((param_1 >> 0x12 & 1) == 0) {
        iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc9910,ossl_init_load_crypto_nodelete_ossl_);
        iVar7 = 0;
        if (iVar1 != 0) {
          iVar7 = DAT_146bc9914;
        }
        if (iVar7 == 0) {
          return 0;
        }
      }
      iVar1 = 0;
      if ((param_1 & 1) != 0) {
        iVar7 = 0x46bc9918;
        iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc9918,&LAB_143ce6220);
        iVar3 = iVar1;
        if (iVar2 != 0) {
          iVar3 = DAT_146bc9920;
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
      if ((param_1 & 2) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9918,ossl_init_load_crypto_strings_ossl_);
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = DAT_146bc9924;
        }
        if (iVar7 == 0) {
          return 0;
        }
      }
      if ((param_1 & 0x10) != 0) {
        iVar7 = 0x46bc9928;
        iVar2 = CRYPTO_THREAD_run_once(&DAT_146bc9928,&LAB_143ce61e0);
        iVar3 = iVar1;
        if (iVar2 != 0) {
          iVar3 = DAT_146bc9938;
        }
        if (iVar3 == 0) {
          return 0;
        }
      }
      if ((param_1 & 4) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9928,ossl_init_add_all_ciphers_ossl_);
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = DAT_146bc992c;
        }
        if (iVar7 == 0) {
          return 0;
        }
      }
      if ((param_1 & 0x20) != 0) {
        iVar7 = 0x46bc9930;
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9930,&LAB_143ce61e0);
        if (iVar3 != 0) {
          iVar1 = DAT_146bc9938;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 & 8) != 0) {
        iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc9930,ossl_init_add_all_digests_ossl_);
        iVar7 = iVar4;
        if (iVar1 != 0) {
          iVar7 = DAT_146bc9934;
        }
        if (iVar7 == 0) {
          return 0;
        }
      }
      if (((param_1 >> 0x11 & 1) != 0) &&
         (pwVar5 = AK::MemoryMgr::GetPoolName(iVar7), (int)pwVar5 == 0)) {
        return 0;
      }
      iVar7 = 0;
      if ((char)param_1 < '\0') {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc993c,ossl_init_no_config_ossl_);
        iVar1 = iVar7;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc9950;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 & 0x40) != 0) {
        CRYPTO_THREAD_read_lock(DAT_146bc9900);
        if (param_2 != (undefined8 *)0x0) {
          uVar6 = *param_2;
        }
        DAT_146bc9948 = uVar6;
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc993c,ossl_init_config_ossl_);
        iVar1 = iVar7;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc9944;
        }
        CRYPTO_THREAD_unlock(DAT_146bc9900);
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 8 & 1) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9954,ossl_init_async_ossl_);
        iVar1 = iVar7;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc995c;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 0xb & 1) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9960,ossl_init_engine_openssl_ossl_);
        iVar1 = iVar7;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc9964;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 9 & 1) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9968,ossl_init_engine_rdrand_ossl_);
        iVar1 = iVar4;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc996c;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 10 & 1) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9970,ossl_init_engine_dynamic_ossl_);
        iVar1 = iVar4;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc9974;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 0xe & 1) != 0) {
        iVar3 = CRYPTO_THREAD_run_once(&DAT_146bc9978,ossl_init_engine_padlock_ossl_);
        iVar1 = iVar4;
        if (iVar3 != 0) {
          iVar1 = DAT_146bc997c;
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      if ((param_1 >> 0xd & 1) != 0) {
        iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc9980,ossl_init_engine_capi_ossl_);
        if (iVar1 != 0) {
          iVar4 = DAT_146bc9984;
        }
        if (iVar4 == 0) {
          return 0;
        }
      }
      if ((param_1 & 0xfe00) != 0) {
        ENGINE_register_all_complete();
      }
      if ((param_1 >> 0x10 & 1) != 0) {
        iVar4 = CRYPTO_THREAD_run_once(&DAT_146bc9988,&LAB_143ce63c0);
        if (iVar4 != 0) {
          iVar7 = DAT_146bc9990;
        }
        if (iVar7 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
  else if ((param_1 >> 0x12 & 1) == 0) {
    ERR_put_error(0xf,0x74,0x46,"crypto\\init.c",0x249,0x143ce5b65);
  }
  return 0;
}



// FUNCTION 143ce5f00 ossl_init_add_all_ciphers_ossl_ body=33 status=ok
// SIG undefined ossl_init_add_all_ciphers_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_add_all_ciphers_ossl_(void)

{
  openssl_add_all_ciphers_int();
  DAT_146bc992c = 1;
  return;
}



// FUNCTION 143ce5f30 ossl_init_add_all_digests_ossl_ body=33 status=ok
// SIG undefined ossl_init_add_all_digests_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_add_all_digests_ossl_(void)

{
  openssl_add_all_digests_int();
  DAT_146bc9934 = 1;
  return;
}



// FUNCTION 143ce5f60 ossl_init_async_ossl_ body=58 status=ok
// SIG undefined ossl_init_async_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_async_ossl_(void)

{
  DAT_146bc995c = async_init();
  if (DAT_146bc995c == 0) {
    return;
  }
  DAT_146bc9958 = 1;
  DAT_146bc995c = 1;
  return;
}



// FUNCTION 143ce5fa0 ossl_init_base_ossl_ body=158 status=ok
// SIG undefined ossl_init_base_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_base_ossl_
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 local_res8 [8];
  
  iVar1 = CRYPTO_THREAD_init_local
                    (local_res8,ossl_init_thread_destructor,param_3,param_4,0x143ce5faa);
  if (iVar1 != 0) {
    DAT_146bc9900 = CRYPTO_THREAD_lock_new();
    if ((DAT_146bc9900 != 0) && (iVar1 = atexit(OPENSSL_cleanup), iVar1 == 0)) {
      OPENSSL_cpuid_setup();
      DAT_146836430 = local_res8[0];
      DAT_146bc9908 = 1;
      DAT_146bc990c = 1;
      return;
    }
    CRYPTO_THREAD_lock_free(DAT_146bc9900);
    DAT_146bc9900 = 0;
    CRYPTO_THREAD_cleanup_local(local_res8);
  }
  DAT_146bc990c = 0;
  return;
}



// FUNCTION 143ce6040 ossl_init_config_ossl_ body=50 status=ok
// SIG undefined ossl_init_config_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_init_config_ossl_(void)

{
  openssl_config_int(DAT_146bc9948);
  _DAT_146bc9940 = 1;
  DAT_146bc9944 = 1;
  return;
}



// FUNCTION 143ce6080 ossl_init_engine_capi_ossl_ body=33 status=ok
// SIG undefined ossl_init_engine_capi_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_engine_capi_ossl_(void)

{
  engine_load_capi_int();
  DAT_146bc9984 = 1;
  return;
}



// FUNCTION 143ce60b0 ossl_init_engine_dynamic_ossl_ body=33 status=ok
// SIG undefined ossl_init_engine_dynamic_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_engine_dynamic_ossl_(void)

{
  engine_load_dynamic_int();
  DAT_146bc9974 = 1;
  return;
}



// FUNCTION 143ce60e0 ossl_init_engine_openssl_ossl_ body=33 status=ok
// SIG undefined ossl_init_engine_openssl_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_engine_openssl_ossl_(void)

{
  engine_load_openssl_int();
  DAT_146bc9964 = 1;
  return;
}



// FUNCTION 143ce6110 ossl_init_engine_padlock_ossl_ body=33 status=ok
// SIG undefined ossl_init_engine_padlock_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_engine_padlock_ossl_(void)

{
  engine_load_padlock_int();
  DAT_146bc997c = 1;
  return;
}



// FUNCTION 143ce6140 ossl_init_engine_rdrand_ossl_ body=33 status=ok
// SIG undefined ossl_init_engine_rdrand_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_engine_rdrand_ossl_(void)

{
  engine_load_rdrand_int();
  DAT_146bc996c = 1;
  return;
}



// FUNCTION 143ce6170 ossl_init_load_crypto_nodelete_ossl_ body=61 status=ok
// SIG undefined ossl_init_load_crypto_nodelete_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_load_crypto_nodelete_ossl_(void)

{
  BOOL BVar1;
  HMODULE local_res8 [4];
  
  local_res8[0] = (HMODULE)0x0;
  BVar1 = GetModuleHandleExW(5,(LPCWSTR)&DAT_146bc9908,local_res8);
  DAT_146bc9914 = (uint)(BVar1 == 1);
  return;
}



// FUNCTION 143ce61b0 ossl_init_load_crypto_strings_ossl_ body=39 status=ok
// SIG undefined ossl_init_load_crypto_strings_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_load_crypto_strings_ossl_(void)

{
  DAT_146bc9924 = err_load_crypto_strings_int();
  DAT_146bc991c = 1;
  return;
}



// FUNCTION 143ce61f0 ossl_init_no_config_ossl_ body=43 status=ok
// SIG undefined ossl_init_no_config_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ossl_init_no_config_ossl_(void)

{
  openssl_no_config_int();
  _DAT_146bc9940 = 1;
  DAT_146bc9950 = 1;
  return;
}



// FUNCTION 143ce6230 ossl_init_thread_destructor body=81 status=ok
// SIG undefined ossl_init_thread_destructor(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ossl_init_thread_destructor(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      async_delete_thread_state();
    }
    if (param_1[1] != 0) {
      err_delete_thread_state();
    }
    if (param_1[2] != 0) {
      drbg_delete_thread_state();
    }
    CRYPTO_free(param_1,"crypto\\init.c",0x19a);
  }
  return;
}



// FUNCTION 143ce6290 ossl_init_thread_start body=294 status=ok
// SIG undefined ossl_init_thread_start(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ossl_init_thread_start(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (DAT_146bc98f0 == 0) {
    iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc98f4,ossl_init_base_ossl_);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = DAT_146bc990c;
    }
    if (iVar2 != 0) {
      iVar1 = CRYPTO_THREAD_run_once(&DAT_146bc9910,ossl_init_load_crypto_nodelete_ossl_);
      iVar2 = 0;
      if (iVar1 != 0) {
        iVar2 = DAT_146bc9914;
      }
      if (iVar2 != 0) {
        puVar3 = (undefined4 *)CRYPTO_THREAD_get_local(&DAT_146836430);
        if (puVar3 == (undefined4 *)0x0) {
          puVar3 = (undefined4 *)CRYPTO_zalloc(0xc,"crypto\\init.c",0x42);
          if (puVar3 == (undefined4 *)0x0) {
            return 0;
          }
          iVar2 = CRYPTO_THREAD_set_local(&DAT_146836430,puVar3);
          if (iVar2 == 0) {
            CRYPTO_free(puVar3,"crypto\\init.c",0x44);
            return 0;
          }
        }
        if ((param_1 & 1) != 0) {
          *puVar3 = 1;
        }
        if ((param_1 & 2) != 0) {
          puVar3[1] = 1;
        }
        if ((param_1 & 4) != 0) {
          puVar3[2] = 1;
        }
        return 1;
      }
    }
  }
  else {
    ERR_put_error(0xf,0x74,0x46,"crypto\\init.c",0x249,0x143ce62a0);
  }
  return 0;
}



// FUNCTION 143ce63e0 BIO_callback_ctrl body=345 status=ok
// SIG undefined BIO_callback_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_callback_ctrl(longlong *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_res18 [2];
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  local_res18[0] = param_3;
  if (((*param_1 != 0) && (*(longlong *)(*param_1 + 0x58) != 0)) && (param_2 == 0xe)) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,local_res18,0xe,0,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1,0xe,local_res18[0]);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,local_res18,0xe,0,(int)uVar1);
        return uVar1;
      }
      uVar1 = (*(code *)param_1[2])();
    }
    return uVar1;
  }
  ERR_put_error(0x20,0x83,0x79,"crypto\\bio\\bio_lib.c",0x222);
  return 0xfffffffe;
}



// FUNCTION 143ce6540 BIO_clear_flags body=6 status=ok
// SIG undefined BIO_clear_flags(void)

void BIO_clear_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) & ~param_2;
  return;
}



// FUNCTION 143ce6550 BIO_copy_next_retry body=20 status=ok
// SIG undefined BIO_copy_next_retry(void)

void BIO_copy_next_retry(longlong param_1)

{
  *(uint *)(param_1 + 0x28) =
       *(uint *)(param_1 + 0x28) | *(uint *)(*(longlong *)(param_1 + 0x40) + 0x28) & 0xf;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x2c);
  return;
}



// FUNCTION 143ce6570 BIO_ctrl body=332 status=ok
// SIG undefined BIO_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_ctrl(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    uVar1 = 0;
  }
  else if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x40) == 0)) {
    ERR_put_error(0x20,0x67,0x79,"crypto\\bio\\bio_lib.c",0x206);
    uVar1 = 0xfffffffe;
  }
  else {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,6,param_4,param_2,param_3,1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
      if ((int)uVar1 < 1) {
        return uVar1;
      }
    }
    uVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,param_3,param_4);
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar1 = (*(code *)param_1[1])(param_1,0x86,param_4,param_2,param_3,(int)uVar1);
      }
      else {
        uVar1 = (*(code *)param_1[2])();
      }
    }
  }
  return uVar1;
}



// FUNCTION 143ce66c0 BIO_find_type body=45 status=ok
// SIG undefined BIO_find_type(void)

undefined8 * BIO_find_type(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  
  do {
    if (param_1 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    if ((uint *)*param_1 != (uint *)0x0) {
      uVar1 = *(uint *)*param_1;
      if ((char)param_2 == '\0') {
        if ((param_2 & uVar1) != 0) {
          return param_1;
        }
      }
      else if (uVar1 == param_2) {
        return param_1;
      }
    }
    param_1 = (undefined8 *)param_1[8];
  } while( true );
}



// FUNCTION 143ce66f0 BIO_free body=214 status=ok
// SIG undefined BIO_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_free(longlong *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  LOCK();
  plVar1 = param_1 + 10;
  lVar3 = *plVar1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  UNLOCK();
  if ((int)lVar3 < 2) {
    if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
      if ((code *)param_1[2] == (code *)0x0) {
        uVar4 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
      }
      else {
        uVar4 = (*(code *)param_1[2])(param_1,1,0,0,0,0,1,0);
      }
      if ((int)uVar4 < 1) {
        return uVar4;
      }
    }
    if ((*param_1 != 0) && (pcVar2 = *(code **)(*param_1 + 0x50), pcVar2 != (code *)0x0)) {
      (*pcVar2)(param_1);
    }
    CRYPTO_free_ex_data(0xc,param_1,param_1 + 0xd);
    CRYPTO_THREAD_lock_free(param_1[0xe]);
    CRYPTO_free(param_1,"crypto\\bio\\bio_lib.c",0x8a);
  }
  return 1;
}



// FUNCTION 143ce67d0 BIO_free_all body=264 status=ok
// SIG undefined BIO_free_all(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_free_all(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  do {
    if (param_1 == (longlong *)0x0) {
      return;
    }
    lVar4 = param_1[10];
    plVar1 = param_1 + 10;
    plVar2 = (longlong *)param_1[8];
    LOCK();
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 < 2) {
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          iVar6 = (*(code *)param_1[1])(param_1,1,0,0,0,1);
        }
        else {
          iVar6 = (*(code *)param_1[2])();
        }
        if (iVar6 < 1) goto LAB_143ce68b5;
      }
      if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 0x50), pcVar3 != (code *)0x0)) {
        (*pcVar3)(param_1);
      }
      CRYPTO_free_ex_data(0xc,param_1,param_1 + 0xd);
      CRYPTO_THREAD_lock_free(param_1[0xe]);
      CRYPTO_free(param_1,"crypto\\bio\\bio_lib.c");
    }
LAB_143ce68b5:
    param_1 = plVar2;
    if (1 < (int)lVar4) {
      return;
    }
  } while( true );
}



// FUNCTION 143ce68e0 BIO_gets body=570 status=ok
// SIG undefined BIO_gets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_gets(longlong *param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong local_res8;
  
  uVar5 = (ulonglong)(int)param_3;
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x38) == 0)) {
    ERR_put_error(0x20,0x68,0x79,"crypto\\bio\\bio_lib.c",0x1b6);
    return 0xfffffffe;
  }
  if ((int)param_3 < 0) {
    ERR_put_error(0x20,0x68,0x7d,"crypto\\bio\\bio_lib.c",0x1bb);
    return 0;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < uVar5) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,5,param_2,param_3,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,5,param_2,uVar5,0,0,1,0);
    }
    uVar4 = (ulonglong)uVar1;
    if ((int)uVar1 < 1) goto LAB_143ce6a92;
  }
  if ((int)param_1[4] == 0) {
    ERR_put_error(0x20,0x68,0x78,"crypto\\bio\\bio_lib.c",0x1c6);
    return 0xfffffffe;
  }
  iVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  uVar4 = (longlong)iVar2;
  if (0 < iVar2) {
    uVar4 = 1;
    local_res8 = (longlong)iVar2;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar3 = 0;
      if ((int)uVar4 != 0) {
        if (0x7fffffff < local_res8) {
          return 0xffffffff;
        }
        uVar3 = (undefined4)local_res8;
      }
      iVar2 = (*(code *)param_1[1])(param_1,0x85,param_2,param_3,0,uVar3);
      uVar4 = (longlong)iVar2;
      if (-1 < iVar2) {
        uVar4 = 1;
        local_res8 = (longlong)iVar2;
      }
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,0x85,param_2,uVar5,0,0,(int)uVar4,&local_res8);
      uVar4 = (ulonglong)uVar1;
    }
  }
  if ((0 < (int)uVar4) && (uVar4 = local_res8 & 0xffffffff, uVar5 < local_res8)) {
    uVar4 = 0xffffffff;
  }
LAB_143ce6a92:
  return uVar4 & 0xffffffff;
}



// FUNCTION 143ce6b20 BIO_indent body=514 status=ok
// SIG undefined BIO_indent(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_indent(longlong *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong local_res20;
  undefined4 uVar4;
  
  iVar2 = 0;
  if (-1 < param_2) {
    iVar2 = param_2;
  }
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  do {
    if (iVar2 == 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    local_res20 = 0;
    if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0))
    {
      uVar4 = 0x189;
      uVar3 = 0x79;
      goto LAB_143ce6d07;
    }
    if (((code *)param_1[1] == (code *)0x0) && (param_1[2] == 0)) {
LAB_143ce6be3:
      if ((int)param_1[4] == 0) {
        uVar4 = 0x194;
        uVar3 = 0x78;
LAB_143ce6d07:
        ERR_put_error(0x20,0x6e,uVar3,"crypto\\bio\\bio_lib.c",uVar4);
        return 0;
      }
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,&DAT_145cc13b4);
      if (0 < iVar1) {
        local_res20 = (ulonglong)iVar1;
        iVar1 = 1;
        param_1[0xc] = param_1[0xc] + local_res20;
      }
      if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
        if ((code *)param_1[2] == (code *)0x0) {
          uVar4 = 0;
          if (iVar1 != 0) {
            if (0x7fffffff < local_res20) {
              return 0;
            }
            uVar4 = (undefined4)local_res20;
          }
          iVar1 = (*(code *)param_1[1])(param_1,0x84,&DAT_145cc13b4,0,0,uVar4);
          if (-1 < iVar1) {
            local_res20 = (ulonglong)iVar1;
            iVar1 = 1;
          }
        }
        else {
          iVar1 = (*(code *)param_1[2])(param_1,0x84,&DAT_145cc13b4,0,0,0,iVar1,&local_res20);
        }
      }
      if (0 < iVar1) {
        if (0x7fffffff < local_res20) {
          uVar4 = 0x1a6;
          uVar3 = 0x66;
          goto LAB_143ce6d07;
        }
        iVar1 = (int)local_res20;
      }
    }
    else {
      if ((code *)param_1[2] == (code *)0x0) {
        iVar1 = (*(code *)param_1[1])(param_1,4,&DAT_145cc13b4,0,0,1);
      }
      else {
        iVar1 = (*(code *)param_1[2])();
      }
      if (0 < iVar1) goto LAB_143ce6be3;
    }
    if (iVar1 != 1) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143ce6d30 BIO_int_ctrl body=33 status=ok
// SIG undefined BIO_int_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_int_ctrl(void)

{
  BIO_ctrl();
  return;
}



// FUNCTION 143ce6d60 BIO_new body=344 status=ok
// SIG undefined BIO_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong * BIO_new(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar4 = 0x143ce6d70;
  plVar2 = (longlong *)CRYPTO_zalloc(0x78,"crypto\\bio\\bio_lib.c",0x49);
  if (plVar2 == (longlong *)0x0) {
    ERR_put_error(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x4c,uVar4);
    return (longlong *)0x0;
  }
  *plVar2 = param_1;
  *(undefined4 *)((longlong)plVar2 + 0x24) = 1;
  *(undefined4 *)(plVar2 + 10) = 1;
  iVar1 = CRYPTO_new_ex_data(0xc,plVar2,plVar2 + 0xd);
  if (iVar1 != 0) {
    lVar3 = CRYPTO_THREAD_lock_new();
    plVar2[0xe] = lVar3;
    if (lVar3 != 0) {
      if (*(code **)(param_1 + 0x48) != (code *)0x0) {
        iVar1 = (**(code **)(param_1 + 0x48))(plVar2);
        if (iVar1 == 0) {
          ERR_put_error(0x20,0x6c,0x46,"crypto\\bio\\bio_lib.c",0x5f,uVar4);
          CRYPTO_free_ex_data(0xc,plVar2,plVar2 + 0xd);
          CRYPTO_THREAD_lock_free(plVar2[0xe]);
          goto LAB_143ce6e24;
        }
      }
      if (*(longlong *)(param_1 + 0x48) == 0) {
        *(undefined4 *)(plVar2 + 4) = 1;
      }
      return plVar2;
    }
    ERR_put_error(0x20,0x6c,0x41,"crypto\\bio\\bio_lib.c",0x59,uVar4);
    CRYPTO_free_ex_data(0xc,plVar2,plVar2 + 0xd);
  }
LAB_143ce6e24:
  CRYPTO_free(plVar2,"crypto\\bio\\bio_lib.c",0x6a);
  return (longlong *)0x0;
}



// FUNCTION 143ce6ec0 BIO_next body=13 status=ok
// SIG undefined BIO_next(void)

undefined8 BIO_next(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined8 *)(param_1 + 0x40);
}



// FUNCTION 143ce6ed0 BIO_pop body=113 status=ok
// SIG undefined BIO_pop(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 BIO_pop(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  BIO_ctrl(param_1,7,0,param_1);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x40) = *(undefined8 *)(param_1 + 0x40);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x48) = *(undefined8 *)(param_1 + 0x48);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  return uVar1;
}



// FUNCTION 143ce6f50 BIO_push body=94 status=ok
// SIG undefined BIO_push(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_push(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x40);
    lVar2 = param_1;
    while (lVar1 = lVar3, lVar1 != 0) {
      lVar2 = lVar1;
      lVar3 = *(longlong *)(lVar1 + 0x40);
    }
    *(longlong *)(lVar2 + 0x40) = param_2;
    if (param_2 != 0) {
      *(longlong *)(param_2 + 0x48) = lVar2;
    }
    BIO_ctrl(param_1,6);
    return param_1;
  }
  return param_2;
}



// FUNCTION 143ce6fb0 BIO_puts body=504 status=ok
// SIG undefined BIO_puts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong BIO_puts(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong local_res8;
  
  local_res8 = 0;
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x30) == 0)) {
    ERR_put_error(0x20,0x6e,0x79,"crypto\\bio\\bio_lib.c",0x189);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      uVar1 = (*(code *)param_1[1])(param_1,4,param_2,0,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])();
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    ERR_put_error(0x20,0x6e,0x78,"crypto\\bio\\bio_lib.c",0x194);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_2);
  if (0 < (int)uVar1) {
    local_res8 = (ulonglong)(int)uVar1;
    uVar1 = 1;
    param_1[0xc] = param_1[0xc] + local_res8;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if ((int)uVar1 != 0) {
        if (0x7fffffff < local_res8) {
          return 0xffffffff;
        }
        uVar1 = local_res8 & 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,0x84,param_2,0,0,(int)uVar1);
      if (-1 < (int)uVar1) {
        local_res8 = (ulonglong)(int)uVar1;
        uVar1 = 1;
      }
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,0x84,param_2,0,0,0,(int)uVar1,&local_res8);
    }
  }
  if (0 < (int)uVar1) {
    if (0x7fffffff < local_res8) {
      ERR_put_error(0x20,0x6e,0x66,"crypto\\bio\\bio_lib.c",0x1a6);
      return 0xffffffff;
    }
    return local_res8 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143ce71b0 BIO_read body=50 status=ok
// SIG undefined BIO_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_read(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = bio_read_intern(param_1,param_2,(longlong)param_3,local_res20,0x143ce71ba);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 143ce71f0 BIO_set_flags body=4 status=ok
// SIG undefined BIO_set_flags(void)

void BIO_set_flags(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | param_2;
  return;
}



// FUNCTION 143ce7200 BIO_test_flags body=6 status=ok
// SIG undefined BIO_test_flags(void)

uint BIO_test_flags(longlong param_1,uint param_2)

{
  return *(uint *)(param_1 + 0x28) & param_2;
}



// FUNCTION 143ce7210 BIO_up_ref body=21 status=ok
// SIG undefined BIO_up_ref(void)

bool BIO_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x50);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143ce7230 BIO_vfree body=22 status=ok
// SIG undefined BIO_vfree(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void BIO_vfree(void)

{
  BIO_free();
  return;
}



// FUNCTION 143ce7250 BIO_write body=50 status=ok
// SIG undefined BIO_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int BIO_write(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int local_res20 [2];
  
  if (param_3 < 0) {
    return 0;
  }
  iVar1 = bio_write_intern(param_1,param_2,(longlong)param_3,local_res20,0x143ce725a);
  if (0 < iVar1) {
    iVar1 = local_res20[0];
  }
  return iVar1;
}



// FUNCTION 143ce7290 bio_call_callback body=197 status=ok
// SIG undefined bio_call_callback(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bio_call_callback(longlong param_1,uint param_2,undefined8 param_3,ulonglong param_4,
                 undefined8 param_5,undefined8 param_6,int param_7,ulonglong *param_8)

{
  undefined8 uVar1;
  uint uVar2;
  
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ce72af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_1 + 0x10))();
    return uVar1;
  }
  uVar2 = param_2 & 0xffffff7f;
  if (((((uVar2 - 2 & 0xfffffffc) != 0) || (uVar2 == 4)) || (param_4 < 0x80000000)) &&
     (((param_7 == 0 || (-1 < (char)param_2)) || ((uVar2 == 6 || (*param_8 < 0x80000000)))))) {
    uVar1 = (**(code **)(param_1 + 8))();
    if (((-1 < (int)uVar1) && ((char)param_2 < '\0')) && (uVar2 != 6)) {
      *param_8 = (longlong)(int)uVar1;
      uVar1 = 1;
    }
    return uVar1;
  }
  return 0xffffffff;
}



// FUNCTION 143ce7360 bio_cleanup body=69 status=ok
// SIG undefined bio_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void bio_cleanup(void)

{
  bio_sock_cleanup_int();
  CRYPTO_THREAD_lock_free(DAT_146bcd578);
  DAT_146bcd578 = 0;
  CRYPTO_THREAD_lock_free(DAT_146bcb8c8);
  DAT_146bcb8c8 = 0;
  return;
}



// FUNCTION 143ce73b0 bio_read_intern body=432 status=ok
// SIG undefined bio_read_intern(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bio_read_intern(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong *param_4)

{
  undefined8 uVar1;
  
  if (((param_1 == (longlong *)0x0) || (*param_1 == 0)) || (*(longlong *)(*param_1 + 0x20) == 0)) {
    ERR_put_error(0x20,0x78,0x79,"crypto\\bio\\bio_lib.c",0x100);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,2,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,2,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    ERR_put_error(0x20,0x78,0x78,"crypto\\bio\\bio_lib.c",0x10a);
    return 0xfffffffe;
  }
  uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2,param_3,param_4);
  if (0 < (int)uVar1) {
    param_1[0xb] = param_1[0xb] + *param_4;
  }
  if ((param_1[1] != 0) || (param_1[2] != 0)) {
    uVar1 = bio_call_callback(param_1,0x82,param_2,param_3,0,0,(int)uVar1,param_4);
  }
  if (0 < (int)uVar1) {
    if (param_3 < *param_4) {
      ERR_put_error(0x20,0x78,0x44,"crypto\\bio\\bio_lib.c",0x119);
      return 0xffffffff;
    }
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 143ce7560 bio_write_intern body=406 status=ok
// SIG undefined bio_write_intern(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
bio_write_intern(longlong *param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  if ((*param_1 == 0) || (*(longlong *)(*param_1 + 0x10) == 0)) {
    ERR_put_error(0x20,0x80,0x79,"crypto\\bio\\bio_lib.c",0x149);
    return 0xfffffffe;
  }
  if (((code *)param_1[1] != (code *)0x0) || (param_1[2] != 0)) {
    if ((code *)param_1[2] == (code *)0x0) {
      if (0x7fffffff < param_3) {
        return 0xffffffff;
      }
      uVar1 = (*(code *)param_1[1])(param_1,3,param_2,param_3 & 0xffffffff,0,1);
    }
    else {
      uVar1 = (*(code *)param_1[2])(param_1,3,param_2,param_3,0,0,1,0);
    }
    if ((int)uVar1 < 1) {
      return uVar1;
    }
  }
  if ((int)param_1[4] == 0) {
    ERR_put_error(0x20,0x80,0x78,"crypto\\bio\\bio_lib.c",0x153);
    uVar1 = 0xfffffffe;
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4);
    if (0 < (int)uVar1) {
      param_1[0xc] = param_1[0xc] + *param_4;
    }
    if ((param_1[1] != 0) || (param_1[2] != 0)) {
      uVar1 = bio_call_callback(param_1,0x83,param_2,param_3,0,0,(int)uVar1,param_4);
    }
  }
  return uVar1;
}



// FUNCTION 143ce7700 mem_write body=254 status=ok
// SIG undefined mem_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int mem_write(longlong param_1,void *param_2,int param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  plVar2 = *(longlong **)(param_1 + 0x38);
  iVar7 = -1;
  if (param_2 == (void *)0x0) {
    ERR_put_error(0x20,0x75,0x73,"crypto\\bio\\bss_mem.c",0xd3,0x143ce7718);
  }
  else if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    BIO_clear_flags(param_1,0xf);
    if (param_3 == 0) {
      iVar7 = 0;
    }
    else {
      iVar1 = *(int *)plVar2[1];
      mem_buf_sync(param_1);
      lVar6 = BUF_MEM_grow_clean(*plVar2,(longlong)(iVar1 + param_3));
      if (lVar6 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 + *(longlong *)(*plVar2 + 8)),param_2,(longlong)param_3)
        ;
        puVar3 = (undefined8 *)*plVar2;
        puVar4 = (undefined8 *)plVar2[1];
        uVar5 = puVar3[1];
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        uVar5 = puVar3[3];
        puVar4[2] = puVar3[2];
        puVar4[3] = uVar5;
        iVar7 = param_3;
      }
    }
  }
  else {
    ERR_put_error(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xd7,0x143ce7718);
  }
  return iVar7;
}



// FUNCTION 143ce7800 mem_read body=169 status=ok
// SIG undefined mem_read(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong mem_read(longlong param_1,void *param_2,ulonglong param_3)

{
  uint uVar1;
  ulonglong *puVar2;
  size_t _Size;
  ulonglong uVar3;
  
  puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x38) + 8);
  BIO_clear_flags(param_1,0xf);
  if (((int)param_3 < 0) || (uVar3 = *puVar2, (ulonglong)(longlong)(int)param_3 <= uVar3)) {
    uVar3 = param_3 & 0xffffffff;
  }
  if ((param_2 == (void *)0x0) || ((int)uVar3 < 1)) {
    if (*puVar2 == 0) {
      uVar1 = *(uint *)(param_1 + 0x30);
      if (uVar1 != 0) {
        BIO_set_flags(param_1,9);
      }
      return (ulonglong)uVar1;
    }
  }
  else {
    _Size = (size_t)(int)uVar3;
    _guard_xfg_dispatch_icall_nop(param_2,(void *)puVar2[1],_Size);
    *puVar2 = *puVar2 - _Size;
    puVar2[1] = puVar2[1] + _Size;
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 143ce78b0 mem_puts body=252 status=ok
// SIG undefined mem_puts(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint mem_puts(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  char *pcVar8;
  longlong lVar9;
  uint uVar10;
  
  cVar1 = *param_2;
  pcVar8 = param_2;
  for (uVar10 = 0; (cVar1 != '\0' && (uVar10 < 0x80000000)); uVar10 = uVar10 + 1) {
    pcVar8 = pcVar8 + 1;
    cVar1 = *pcVar8;
  }
  plVar3 = *(longlong **)(param_1 + 0x38);
  uVar10 = uVar10 & 0x7fffffff;
  uVar7 = 0xffffffff;
  if ((*(uint *)(param_1 + 0x28) & 0x200) == 0) {
    BIO_clear_flags(param_1,0xf);
    if (uVar10 == 0) {
      uVar7 = 0;
    }
    else {
      iVar2 = *(int *)plVar3[1];
      mem_buf_sync(param_1);
      lVar9 = BUF_MEM_grow_clean(*plVar3,(longlong)(int)(iVar2 + uVar10));
      if (lVar9 != 0) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar2 + *(longlong *)(*plVar3 + 8)),param_2,(ulonglong)uVar10)
        ;
        puVar4 = (undefined8 *)*plVar3;
        puVar5 = (undefined8 *)plVar3[1];
        uVar6 = puVar4[1];
        *puVar5 = *puVar4;
        puVar5[1] = uVar6;
        uVar6 = puVar4[3];
        puVar5[2] = puVar4[2];
        puVar5[3] = uVar6;
        uVar7 = uVar10;
      }
    }
  }
  else {
    ERR_put_error(0x20,0x75,0x7e,"crypto\\bio\\bss_mem.c",0xd7,0x143ce78c8);
  }
  return uVar7;
}



// FUNCTION 143ce79b0 mem_gets body=258 status=ok
// SIG undefined mem_gets(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int mem_gets(longlong param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  size_t _Size;
  ulonglong uVar6;
  
  piVar1 = *(int **)(*(longlong *)(param_1 + 0x38) + 8);
  BIO_clear_flags(param_1,0xf);
  iVar4 = param_3 + -1;
  if (*piVar1 <= param_3 + -1) {
    iVar4 = *piVar1;
  }
  if (iVar4 < 1) {
    *param_2 = 0;
    iVar4 = 0;
  }
  else {
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = uVar3;
    if (0 < iVar4) {
      do {
        uVar5 = (int)uVar6 + 1;
        if (*(char *)(uVar3 + *(longlong *)(piVar1 + 2)) == '\n') break;
        uVar3 = uVar3 + 1;
        uVar6 = (ulonglong)uVar5;
      } while ((longlong)uVar3 < (longlong)iVar4);
    }
    puVar2 = *(ulonglong **)(*(longlong *)(param_1 + 0x38) + 8);
    BIO_clear_flags(param_1,0xf);
    if (((int)uVar5 < 0) || (uVar6 = *puVar2, (ulonglong)(longlong)(int)uVar5 <= uVar6)) {
      uVar6 = (ulonglong)uVar5;
    }
    iVar4 = (int)uVar6;
    if ((param_2 == (undefined1 *)0x0) || (iVar4 < 1)) {
      if ((*puVar2 == 0) && (iVar4 = *(int *)(param_1 + 0x30), iVar4 != 0)) {
        BIO_set_flags(param_1,9);
      }
    }
    else {
      _Size = (size_t)iVar4;
      _guard_xfg_dispatch_icall_nop(param_2,(void *)puVar2[1],_Size);
      *puVar2 = *puVar2 - _Size;
      puVar2[1] = puVar2[1] + _Size;
    }
    if (0 < iVar4) {
      param_2[iVar4] = 0;
    }
  }
  return iVar4;
}



// FUNCTION 143ce7ac0 FUN_143ce7ac0 body=318 status=ok
// SIG undefined FUN_143ce7ac0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_143ce7ac0(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4)

{
  longlong *plVar1;
  size_t *psVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  size_t _Size;
  uint uVar8;
  uint uVar9;
  
  plVar1 = *(longlong **)(param_1 + 0x38);
  uVar9 = 1;
  uVar8 = 1;
  switch(param_2) {
  case 1:
    psVar2 = (size_t *)*plVar1;
    uVar9 = uVar8;
    if ((void *)psVar2[1] != (void *)0x0) {
      _Size = psVar2[2];
      if ((*(uint *)(param_1 + 0x28) & 0x600) == 0) {
        _guard_xfg_dispatch_icall_nop((void *)psVar2[1],0,_Size);
        _Size = 0;
      }
      *psVar2 = _Size;
      puVar3 = (undefined8 *)*plVar1;
      puVar4 = (undefined8 *)plVar1[1];
      uVar6 = puVar3[1];
      *puVar4 = *puVar3;
      puVar4[1] = uVar6;
      uVar6 = puVar3[3];
      puVar4[2] = puVar3[2];
      puVar4[3] = uVar6;
    }
    break;
  case 2:
    uVar9 = (uint)(*(longlong *)plVar1[1] == 0);
    break;
  case 3:
    uVar9 = *(uint *)plVar1[1];
    if (param_4 != (longlong *)0x0) {
      *param_4 = *(longlong *)((uint *)plVar1[1] + 2);
    }
    break;
  default:
    uVar9 = 0;
    break;
  case 8:
    uVar9 = *(uint *)(param_1 + 0x24);
    break;
  case 9:
    *(undefined4 *)(param_1 + 0x24) = param_3;
    uVar9 = uVar8;
    break;
  case 10:
    uVar9 = *(uint *)plVar1[1];
    break;
  case 0xb:
  case 0xc:
    break;
  case 0x72:
    mem_buf_free(param_1,0);
    *(undefined4 *)(param_1 + 0x24) = param_3;
    plVar5 = (longlong *)plVar1[1];
    *plVar1 = (longlong)param_4;
    lVar7 = param_4[1];
    *plVar5 = *param_4;
    plVar5[1] = lVar7;
    lVar7 = param_4[3];
    plVar5[2] = param_4[2];
    plVar5[3] = lVar7;
    *(longlong **)(param_1 + 0x38) = plVar1;
    uVar9 = uVar8;
    break;
  case 0x73:
    if (param_4 != (longlong *)0x0) {
      mem_buf_sync(param_1);
      *param_4 = plVar1[1];
    }
    break;
  case 0x82:
    *(undefined4 *)(param_1 + 0x30) = param_3;
  }
  return uVar9;
}



// FUNCTION 143ce7cc0 mem_new body=24 status=ok
// SIG undefined mem_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void mem_new(undefined8 param_1)

{
  mem_init(param_1,0);
  return;
}



// FUNCTION 143ce7ce0 secmem_new body=25 status=ok
// SIG undefined secmem_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void secmem_new(undefined8 param_1)

{
  mem_init(param_1,1);
  return;
}



// FUNCTION 143ce7d00 mem_free body=25 status=ok
// SIG undefined mem_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void mem_free(undefined8 param_1)

{
  mem_buf_free(param_1,1);
  return;
}



// FUNCTION 143ce7d20 BIO_new_mem_buf body=206 status=ok
// SIG undefined BIO_new_mem_buf(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong BIO_new_mem_buf(char *param_1,int param_2)

{
  char cVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  
  if (param_1 == (char *)0x0) {
    ERR_put_error(0x20,0x7e,0x73,"crypto\\bio\\bss_mem.c",0x59,0x143ce7d2c);
    return 0;
  }
  if (param_2 < 0) {
    cVar1 = *param_1;
    pcVar9 = param_1;
    for (uVar7 = 0; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar9 = pcVar9 + 1;
      cVar1 = *pcVar9;
    }
    uVar10 = (ulonglong)(uVar7 & 0x7fffffff);
  }
  else {
    uVar10 = (ulonglong)param_2;
  }
  lVar8 = BIO_new(&DAT_145d57a40);
  if (lVar8 != 0) {
    plVar2 = *(longlong **)(lVar8 + 0x38);
    puVar3 = (ulonglong *)*plVar2;
    *puVar3 = uVar10;
    puVar3[2] = uVar10;
    puVar3[1] = (ulonglong)param_1;
    puVar4 = (undefined8 *)*plVar2;
    puVar5 = (undefined8 *)plVar2[1];
    uVar6 = puVar4[1];
    *puVar5 = *puVar4;
    puVar5[1] = uVar6;
    uVar6 = puVar4[3];
    puVar5[2] = puVar4[2];
    puVar5[3] = uVar6;
    *(uint *)(lVar8 + 0x28) = *(uint *)(lVar8 + 0x28) | 0x200;
    *(undefined4 *)(lVar8 + 0x30) = 0;
    return lVar8;
  }
  return 0;
}



// FUNCTION 143ce7df0 BIO_s_mem body=8 status=ok
// SIG undefined BIO_s_mem(void)

undefined * BIO_s_mem(void)

{
  return &DAT_145d57a40;
}



// FUNCTION 143ce7e00 BIO_s_mem body=8 status=ok
// SIG undefined BIO_s_mem(void)

undefined * BIO_s_mem(void)

{
  return &DAT_145d57aa0;
}



// FUNCTION 143ce7e10 mem_buf_free body=169 status=ok
// SIG undefined mem_buf_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 mem_buf_free(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_1 != 0) {
    if (((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x38), plVar1 != (longlong *)0x0)) {
      if ((*(uint *)(param_1 + 0x28) & 0x200) != 0) {
        *(undefined8 *)(*plVar1 + 8) = 0;
      }
      BUF_MEM_free();
      if (param_2 != 0) {
        CRYPTO_free(plVar1[1],"crypto\\bio\\bss_mem.c",0x9f);
        CRYPTO_free(plVar1,"crypto\\bio\\bss_mem.c",0xa0);
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143ce7ec0 mem_buf_sync body=113 status=ok
// SIG undefined mem_buf_sync(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 mem_buf_sync(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    plVar1 = *(longlong **)(param_1 + 0x38);
    if (plVar1 != (longlong *)0x0) {
      _Src = (void *)((size_t *)plVar1[1])[1];
      if (_Src != *(void **)(*plVar1 + 8)) {
        _guard_xfg_dispatch_icall_nop(*(void **)(*plVar1 + 8),_Src,*(size_t *)plVar1[1]);
        *(undefined8 *)*plVar1 = *(undefined8 *)plVar1[1];
        *(undefined8 *)(plVar1[1] + 8) = *(undefined8 *)(*plVar1 + 8);
      }
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143ce7f40 mem_init body=239 status=ok
// SIG undefined mem_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 mem_init(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  
  plVar3 = (longlong *)CRYPTO_zalloc(0x10,"crypto\\bio\\bss_mem.c",0x6e);
  if (plVar3 != (longlong *)0x0) {
    lVar4 = BUF_MEM_new_ex(param_2);
    *plVar3 = lVar4;
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)CRYPTO_zalloc(0x20,"crypto\\bio\\bss_mem.c");
      puVar1 = (undefined8 *)*plVar3;
      plVar3[1] = (longlong)puVar5;
      if (puVar5 == (undefined8 *)0x0) {
        BUF_MEM_free();
        CRYPTO_free(plVar3,"crypto\\bio\\bss_mem.c",0x78);
        return 0;
      }
      uVar2 = puVar1[1];
      *puVar5 = *puVar1;
      puVar5[1] = uVar2;
      uVar2 = puVar1[3];
      puVar5[2] = puVar1[2];
      puVar5[3] = uVar2;
      *(longlong **)(param_1 + 0x38) = plVar3;
      *(undefined4 *)(param_1 + 0x24) = 1;
      *(undefined4 *)(param_1 + 0x20) = 1;
      *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
      return 1;
    }
    CRYPTO_free(plVar3,"crypto\\bio\\bss_mem.c",0x73);
  }
  return 0;
}



// FUNCTION 143ce8030 SHA224_Final body=22 status=ok
// SIG undefined SHA224_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA224_Final(void)

{
  SHA256_Final();
  return;
}



// FUNCTION 143ce8050 SHA224_Init body=109 status=ok
// SIG undefined SHA224_Init(void)

undefined8 SHA224_Init(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *param_1 = 0xc1059ed8;
  param_1[1] = 0x367cd507;
  param_1[2] = 0x3070dd17;
  param_1[3] = 0xf70e5939;
  param_1[4] = 0xffc00b31;
  param_1[5] = 0x68581511;
  param_1[6] = 0x64f98fa7;
  param_1[7] = 0xbefa4fa4;
  param_1[0x1b] = 0x1c;
  return 1;
}



// FUNCTION 143ce80c0 SHA224_Update body=22 status=ok
// SIG undefined SHA224_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SHA224_Update(void)

{
  SHA256_Update();
  return;
}



// FUNCTION 143ce80e0 FUN_143ce80e0 body=251 status=ok
// SIG undefined FUN_143ce80e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_143ce80e0(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ce80ec;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0x6a09e667;
  local_84 = 0xbb67ae85;
  puVar1 = &DAT_146bc99b8;
  if (param_3 != (undefined *)0x0) {
    puVar1 = param_3;
  }
  local_80 = 0x3c6ef372;
  local_7c = 0xa54ff53a;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_78 = 0x510e527f;
  local_74 = 0x9b05688c;
  local_70 = 0x1f83d9ab;
  local_6c = 0x5be0cd19;
  local_1c = 0x20;
  SHA256_Update(&local_88,param_1,param_2);
  SHA256_Final(puVar1,&local_88);
  FUN_14004ff40(&local_88,0x70);
  return puVar1;
}



// FUNCTION 143ce81e0 SHA256_Final body=793 status=ok
// SIG undefined SHA256_Final(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA256_Final(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar2 = param_2[0x1a];
  puVar1 = param_2 + 10;
  uVar4 = 0;
  *(undefined1 *)((ulonglong)uVar2 + (longlong)puVar1) = 0x80;
  uVar5 = (ulonglong)uVar2 + 1;
  if (0x38 < uVar5) {
    _guard_xfg_dispatch_icall_nop((void *)(uVar5 + (longlong)puVar1),0,0x40 - uVar5);
    uVar5 = 0;
    FUN_1400501c0(param_2,puVar1,1);
  }
  _guard_xfg_dispatch_icall_nop((void *)(uVar5 + (longlong)puVar1),0,0x38 - uVar5);
  *(undefined1 *)(param_2 + 0x18) = *(undefined1 *)((longlong)param_2 + 0x27);
  *(undefined1 *)((longlong)param_2 + 0x61) = *(undefined1 *)((longlong)param_2 + 0x26);
  *(undefined1 *)((longlong)param_2 + 0x62) = *(undefined1 *)((longlong)param_2 + 0x25);
  *(undefined1 *)((longlong)param_2 + 99) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(param_2 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x23);
  *(undefined1 *)((longlong)param_2 + 0x65) = *(undefined1 *)((longlong)param_2 + 0x22);
  *(undefined1 *)((longlong)param_2 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x21);
  *(undefined1 *)((longlong)param_2 + 0x67) = *(undefined1 *)(param_2 + 8);
  FUN_1400501c0(param_2,puVar1,1);
  param_2[0x1a] = 0;
  FUN_14004ff40(puVar1,0x40);
  uVar2 = param_2[0x1b];
  if (uVar2 == 0x1c) {
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
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
  }
  else if (uVar2 == 0x20) {
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
    uVar3 = param_2[5];
    param_1[0x14] = (char)((uint)uVar3 >> 0x18);
    param_1[0x15] = (char)((uint)uVar3 >> 0x10);
    param_1[0x16] = (char)((uint)uVar3 >> 8);
    param_1[0x17] = (char)uVar3;
    uVar3 = param_2[6];
    param_1[0x18] = (char)((uint)uVar3 >> 0x18);
    param_1[0x19] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1a] = (char)((uint)uVar3 >> 8);
    param_1[0x1b] = (char)uVar3;
    uVar3 = param_2[7];
    param_1[0x1c] = (char)((uint)uVar3 >> 0x18);
    param_1[0x1d] = (char)((uint)uVar3 >> 0x10);
    param_1[0x1e] = (char)((uint)uVar3 >> 8);
    param_1[0x1f] = (char)uVar3;
  }
  else {
    if (0x20 < uVar2) {
      return 0;
    }
    if ((uVar2 & 0xfffffffc) != 0) {
      do {
        uVar5 = (ulonglong)uVar4;
        uVar4 = uVar4 + 1;
        uVar3 = param_2[uVar5];
        *param_1 = (char)((uint)uVar3 >> 0x18);
        param_1[1] = (char)((uint)uVar3 >> 0x10);
        param_1[2] = (char)((uint)uVar3 >> 8);
        param_1[3] = (char)uVar3;
        param_1 = param_1 + 4;
      } while (uVar4 < (uint)param_2[0x1b] >> 2);
    }
  }
  return 1;
}



// FUNCTION 143ce8500 SHA256_Init body=109 status=ok
// SIG undefined SHA256_Init(void)

undefined8 SHA256_Init(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x1a] = 0;
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[0x1b] = 0x20;
  return 1;
}



// FUNCTION 143ce8570 SSL_CTX_remove_session body=26 status=ok
// SIG undefined SSL_CTX_remove_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  FUN_1400501c0(param_1,param_2,1);
  return;
}



// FUNCTION 143ce8590 SHA256_Update body=307 status=ok
// SIG undefined SHA256_Update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SHA256_Update(longlong param_1,void *param_2,size_t param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  size_t _Size;
  ulonglong uVar4;
  
  if (param_3 != 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    uVar3 = *(uint *)(param_1 + 0x20) + (int)param_3 * 8;
    if (uVar3 < *(uint *)(param_1 + 0x20)) {
      iVar2 = iVar2 + 1;
    }
    *(uint *)(param_1 + 0x20) = uVar3;
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x68);
    *(int *)(param_1 + 0x24) = (int)(param_3 >> 0x1d) + iVar2;
    if (uVar4 != 0) {
      puVar1 = (undefined8 *)(param_1 + 0x28);
      if ((param_3 < 0x40) && (uVar4 + param_3 < 0x40)) {
        _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,param_3);
        *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + (int)param_3;
        return 1;
      }
      _Size = 0x40 - uVar4;
      _guard_xfg_dispatch_icall_nop((void *)(uVar4 + (longlong)puVar1),param_2,_Size);
      FUN_1400501c0(param_1,puVar1,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      param_2 = (void *)((longlong)param_2 + _Size);
      param_3 = param_3 - _Size;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x48) = 0;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x58) = 0;
      *(undefined8 *)(param_1 + 0x60) = 0;
    }
    uVar4 = param_3 >> 6;
    if (uVar4 != 0) {
      FUN_1400501c0(param_1,param_2,uVar4);
      param_2 = (void *)((longlong)param_2 + uVar4 * 0x40);
      param_3 = param_3 + uVar4 * -0x40;
    }
    if (param_3 != 0) {
      *(int *)(param_1 + 0x68) = (int)param_3;
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x28),param_2,param_3);
    }
  }
  return 1;
}



// FUNCTION 143ce86d0 X509_LOOKUP_ctrl body=58 status=ok
// SIG undefined X509_LOOKUP_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_LOOKUP_ctrl(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    return 0xffffffff;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 8) + 0x28);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ce86fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 1;
}



// FUNCTION 143ce8710 X509_OBJECT_free body=81 status=ok
// SIG undefined X509_OBJECT_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_OBJECT_free(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 1) {
      X509_free(*(undefined8 *)(param_1 + 2));
    }
    else if (*param_1 == 2) {
      X509_CRL_free(*(undefined8 *)(param_1 + 2));
    }
  }
  CRYPTO_free(param_1,"crypto\\x509\\x509_lu.c",0x1d0);
  return;
}



// FUNCTION 143ce8770 X509_OBJECT_new body=89 status=ok
// SIG undefined X509_OBJECT_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * X509_OBJECT_new(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x19d);
  if (puVar1 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a0);
    return (undefined4 *)0x0;
  }
  *puVar1 = 0;
  return puVar1;
}



// FUNCTION 143ce87d0 X509_STORE_CTX_get1_certs body=388 status=ok
// SIG undefined X509_STORE_CTX_get1_certs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_get1_certs(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int local_res8 [2];
  
  if (*param_1 != 0) {
    CRYPTO_THREAD_read_lock(*(undefined8 *)(*param_1 + 0x90));
    iVar2 = x509_object_idx_cnt(*(undefined8 *)(*param_1 + 8),1,param_2,local_res8);
    if (-1 < iVar2) {
LAB_143ce88af:
      uVar5 = OPENSSL_sk_new_null();
      iVar6 = 0;
      if (0 < local_res8[0]) {
        do {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(*param_1 + 8),iVar2);
          uVar1 = *(undefined8 *)(lVar4 + 8);
          X509_up_ref(uVar1);
          iVar3 = OPENSSL_sk_push(uVar5,uVar1);
          if (iVar3 == 0) {
            CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
            X509_free(uVar1);
            OPENSSL_sk_pop_free(uVar5,X509_free);
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 1;
        } while (iVar6 < local_res8[0]);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
      return uVar5;
    }
    lVar4 = X509_OBJECT_new();
    CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
    if (lVar4 != 0) {
      iVar2 = X509_STORE_CTX_get_by_subject(param_1,1,param_2,lVar4);
      X509_OBJECT_free(lVar4);
      if (iVar2 != 0) {
        CRYPTO_THREAD_read_lock(*(undefined8 *)(*param_1 + 0x90));
        iVar2 = x509_object_idx_cnt(*(undefined8 *)(*param_1 + 8),1,param_2,local_res8);
        if (-1 < iVar2) goto LAB_143ce88af;
        CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
      }
    }
  }
  return 0;
}



// FUNCTION 143ce8960 X509_STORE_CTX_get1_crls body=479 status=ok
// SIG undefined X509_STORE_CTX_get1_crls(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_CTX_get1_crls(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  int local_res18 [2];
  undefined8 uVar7;
  
  uVar7 = 0x143ce8978;
  lVar3 = OPENSSL_sk_new_null();
  piVar4 = (int *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x19d);
  if (piVar4 == (int *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a0,uVar7);
    piVar4 = (int *)0x0;
  }
  else {
    *piVar4 = 0;
  }
  iVar6 = 0;
  if (lVar3 != 0) {
    if (piVar4 == (int *)0x0) goto LAB_143ce8b1b;
    if ((*param_1 != 0) &&
       (iVar1 = X509_STORE_CTX_get_by_subject(param_1,2,param_2,piVar4), iVar1 != 0)) {
      X509_OBJECT_free(piVar4);
      CRYPTO_THREAD_read_lock(*(undefined8 *)(*param_1 + 0x90));
      iVar1 = x509_object_idx_cnt(*(undefined8 *)(*param_1 + 8),2,param_2,local_res18);
      if (iVar1 < 0) {
        CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
        OPENSSL_sk_free(lVar3);
        return 0;
      }
      if (0 < local_res18[0]) {
        do {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(*param_1 + 8),iVar1);
          uVar7 = *(undefined8 *)(lVar5 + 8);
          X509_CRL_up_ref(uVar7);
          iVar2 = OPENSSL_sk_push(lVar3,uVar7);
          if (iVar2 == 0) {
            CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
            X509_CRL_free(uVar7);
            OPENSSL_sk_pop_free(lVar3,X509_CRL_free);
            return 0;
          }
          iVar6 = iVar6 + 1;
          iVar1 = iVar1 + 1;
        } while (iVar6 < local_res18[0]);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(*param_1 + 0x90));
      return lVar3;
    }
  }
  if (piVar4 != (int *)0x0) {
    if (*piVar4 == 1) {
      X509_free(*(undefined8 *)(piVar4 + 2));
    }
    else if (*piVar4 == 2) {
      X509_CRL_free(*(undefined8 *)(piVar4 + 2));
    }
  }
LAB_143ce8b1b:
  CRYPTO_free(piVar4,"crypto\\x509\\x509_lu.c",0x1d0);
  OPENSSL_sk_free(lVar3);
  return 0;
}



// FUNCTION 143ce8b40 X509_STORE_CTX_get1_issuer body=505 status=ok
// SIG undefined X509_STORE_CTX_get1_issuer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 X509_STORE_CTX_get1_issuer(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = 0x143ce8b54;
  puVar4 = (undefined4 *)CRYPTO_zalloc(0x10,"crypto\\x509\\x509_lu.c",0x19d);
  if (puVar4 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x96,0x41,"crypto\\x509\\x509_lu.c",0x1a0,uVar8);
    return 0xffffffff;
  }
  uVar7 = 0;
  *puVar4 = 0;
  *param_1 = 0;
  uVar8 = FVoicePacketImpl::GetSampleCounter(param_3);
  iVar2 = X509_STORE_CTX_get_by_subject(param_2,1,uVar8,puVar4);
  if (iVar2 == 1) {
    iVar2 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(puVar4 + 2));
    if ((iVar2 != 0) &&
       (iVar2 = x509_check_cert_time(param_2,*(undefined8 *)(puVar4 + 2),0xffffffff), iVar2 != 0)) {
      *param_1 = *(longlong *)(puVar4 + 2);
      X509_up_ref();
      X509_OBJECT_free(puVar4);
      return 1;
    }
    X509_OBJECT_free(puVar4);
    if (*param_2 != 0) {
      CRYPTO_THREAD_read_lock(*(undefined8 *)(*param_2 + 0x90));
      iVar2 = x509_object_idx_cnt(*(undefined8 *)(*param_2 + 8),1,uVar8);
      if ((iVar2 != -1) && (iVar3 = OPENSSL_sk_num(*(undefined8 *)(*param_2 + 8)), iVar2 < iVar3)) {
        do {
          piVar5 = (int *)OPENSSL_sk_value(*(undefined8 *)(*param_2 + 8),iVar2);
          if (*piVar5 != 1) break;
          uVar6 = FBackChannelConnection::GetSocket(*(undefined8 *)(piVar5 + 2));
          iVar3 = X509_NAME_cmp(uVar8,uVar6);
          if (iVar3 != 0) break;
          iVar3 = (*(code *)param_2[9])(param_2,param_3,*(undefined8 *)(piVar5 + 2));
          if (iVar3 != 0) {
            lVar1 = *(longlong *)(piVar5 + 2);
            uVar7 = 1;
            *param_1 = lVar1;
            iVar3 = x509_check_cert_time(param_2,lVar1,0xffffffff);
            if (iVar3 != 0) break;
          }
          iVar2 = iVar2 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(*param_2 + 8));
        } while (iVar2 < iVar3);
      }
      CRYPTO_THREAD_unlock(*(undefined8 *)(*param_2 + 0x90));
      if (*param_1 == 0) {
        return uVar7;
      }
      X509_up_ref();
      return uVar7;
    }
  }
  else {
    X509_OBJECT_free(puVar4);
  }
  return 0;
}



// FUNCTION 143ce8d40 X509_STORE_CTX_get_by_subject body=300 status=ok
// SIG undefined X509_STORE_CTX_get_by_subject(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
X509_STORE_CTX_get_by_subject(longlong *param_1,int param_2,undefined8 param_3,int *param_4)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  int local_28 [2];
  undefined8 local_20;
  
  local_20 = 0x143ce8d5e;
  lVar1 = *param_1;
  if (lVar1 == 0) {
LAB_143ce8e51:
    uVar6 = 0;
  }
  else {
    CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar1 + 0x90));
    uVar6 = *(undefined8 *)(lVar1 + 8);
    iVar3 = x509_object_idx_cnt(uVar6,param_2,param_3,0);
    iVar7 = 0;
    if (iVar3 == -1) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)OPENSSL_sk_value(uVar6,iVar3);
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(lVar1 + 0x90));
    if ((piVar4 == (int *)0x0) || (param_2 == 2)) {
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
      if (0 < iVar3) {
        do {
          lVar5 = OPENSSL_sk_value(*(undefined8 *)(lVar1 + 0x10),iVar7);
          if ((((*(longlong *)(lVar5 + 8) != 0) &&
               (pcVar2 = *(code **)(*(longlong *)(lVar5 + 8) + 0x30), pcVar2 != (code *)0x0)) &&
              (*(int *)(lVar5 + 4) == 0)) &&
             (iVar3 = (*pcVar2)(lVar5,param_2,param_3,local_28), iVar3 != 0)) {
            piVar4 = local_28;
            goto LAB_143ce8e1b;
          }
          iVar7 = iVar7 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 0x10));
        } while (iVar7 < iVar3);
      }
      if (piVar4 == (int *)0x0) goto LAB_143ce8e51;
    }
LAB_143ce8e1b:
    iVar3 = *piVar4;
    *param_4 = iVar3;
    *(undefined8 *)(param_4 + 2) = *(undefined8 *)(piVar4 + 2);
    if (iVar3 == 1) {
      X509_up_ref();
    }
    else if (iVar3 == 2) {
      X509_CRL_up_ref();
      return 1;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143ce8e70 X509_STORE_add_cert body=72 status=ok
// SIG undefined X509_STORE_add_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_add_cert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = x509_store_add(param_1,param_2,0);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x7c,0x41,"crypto\\x509\\x509_lu.c",0x16c);
    return 0;
  }
  return 1;
}



// FUNCTION 143ce8ec0 X509_STORE_add_crl body=73 status=ok
// SIG undefined X509_STORE_add_crl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_add_crl(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = x509_store_add(param_1,param_2,1);
  if (iVar1 == 0) {
    ERR_put_error(0xb,0x7d,0x41,"crypto\\x509\\x509_lu.c",0x175);
    return 0;
  }
  return 1;
}



// FUNCTION 143ce8f10 X509_STORE_add_lookup body=354 status=ok
// SIG undefined X509_STORE_add_lookup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_add_lookup(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143ce8f2a;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  iVar5 = 0;
  iVar3 = OPENSSL_sk_num(uVar1);
  if (0 < iVar3) {
    do {
      lVar4 = OPENSSL_sk_value(uVar1,iVar5);
      if (param_2 == *(longlong *)(lVar4 + 8)) {
        return lVar4;
      }
      iVar5 = iVar5 + 1;
      iVar3 = OPENSSL_sk_num(uVar1);
    } while (iVar5 < iVar3);
  }
  lVar4 = CRYPTO_zalloc(0x20,"crypto\\x509\\x509_lu.c");
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x9b,0x41,"crypto\\x509\\x509_lu.c",0x17,uVar6);
  }
  else {
    *(longlong *)(lVar4 + 8) = param_2;
    if ((*(code **)(param_2 + 8) == (code *)0x0) ||
       (iVar3 = (**(code **)(param_2 + 8))(lVar4), iVar3 != 0)) {
      *(longlong *)(lVar4 + 0x18) = param_1;
      iVar3 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x10),lVar4);
      if (iVar3 == 0) {
        ERR_put_error(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x10d);
        if ((*(longlong *)(lVar4 + 8) != 0) &&
           (pcVar2 = *(code **)(*(longlong *)(lVar4 + 8) + 0x10), pcVar2 != (code *)0x0)) {
          (*pcVar2)(lVar4);
        }
        CRYPTO_free(lVar4,"crypto\\x509\\x509_lu.c",0x29);
        return 0;
      }
      return lVar4;
    }
    CRYPTO_free(lVar4,"crypto\\x509\\x509_lu.c",0x1d);
  }
  ERR_put_error(0xb,0x9d,0x41,"crypto\\x509\\x509_lu.c",0x105);
  return 0;
}



// FUNCTION 143ce9080 X509_STORE_free body=282 status=ok
// SIG undefined X509_STORE_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_free(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x88);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 2) {
      uVar2 = *(undefined8 *)(param_1 + 0x10);
      iVar6 = 0;
      iVar3 = OPENSSL_sk_num(uVar2);
      if (0 < iVar3) {
        do {
          lVar4 = OPENSSL_sk_value(uVar2,iVar6);
          lVar5 = *(longlong *)(lVar4 + 8);
          if (lVar5 != 0) {
            if (*(code **)(lVar5 + 0x20) != (code *)0x0) {
              (**(code **)(lVar5 + 0x20))(lVar4);
              lVar5 = *(longlong *)(lVar4 + 8);
            }
            if ((lVar5 != 0) && (*(code **)(lVar5 + 0x10) != (code *)0x0)) {
              (**(code **)(lVar5 + 0x10))(lVar4);
            }
          }
          CRYPTO_free(lVar4,"crypto\\x509\\x509_lu.c",0x29);
          iVar6 = iVar6 + 1;
          iVar3 = OPENSSL_sk_num(uVar2);
        } while (iVar6 < iVar3);
      }
      OPENSSL_sk_free(uVar2);
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 8),X509_OBJECT_free);
      CRYPTO_free_ex_data(4,param_1,param_1 + 0x80);
      X509_VERIFY_PARAM_free(*(undefined8 *)(param_1 + 0x18));
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x90));
      CRYPTO_free(param_1,"crypto\\x509\\x509_lu.c",0xe6);
    }
  }
  return;
}



// FUNCTION 143ce91a0 X509_STORE_new body=316 status=ok
// SIG undefined X509_STORE_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 * X509_STORE_new(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143ce91ac;
  puVar3 = (undefined4 *)CRYPTO_zalloc(0x98,"crypto\\x509\\x509_lu.c",0xa2);
  if (puVar3 == (undefined4 *)0x0) {
    ERR_put_error(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",0xa5,uVar5);
    return (undefined4 *)0x0;
  }
  lVar4 = OPENSSL_sk_new(x509_object_cmp);
  *(longlong *)(puVar3 + 2) = lVar4;
  if (lVar4 == 0) {
    uVar1 = 0xa9;
  }
  else {
    *puVar3 = 1;
    lVar4 = OPENSSL_sk_new_null();
    *(longlong *)(puVar3 + 4) = lVar4;
    if (lVar4 == 0) {
      uVar1 = 0xae;
    }
    else {
      lVar4 = X509_VERIFY_PARAM_new();
      *(longlong *)(puVar3 + 6) = lVar4;
      if (lVar4 == 0) {
        uVar1 = 0xb3;
      }
      else {
        iVar2 = CRYPTO_new_ex_data(4,puVar3,puVar3 + 0x20);
        if (iVar2 == 0) {
          uVar1 = 0xb7;
        }
        else {
          lVar4 = CRYPTO_THREAD_lock_new();
          *(longlong *)(puVar3 + 0x24) = lVar4;
          if (lVar4 != 0) {
            puVar3[0x22] = 1;
            return puVar3;
          }
          uVar1 = 0xbd;
        }
      }
    }
  }
  ERR_put_error(0xb,0x9e,0x41,"crypto\\x509\\x509_lu.c",uVar1,uVar5);
  X509_VERIFY_PARAM_free(*(undefined8 *)(puVar3 + 6));
  OPENSSL_sk_free(*(undefined8 *)(puVar3 + 2));
  OPENSSL_sk_free(*(undefined8 *)(puVar3 + 4));
  CRYPTO_free(puVar3,"crypto\\x509\\x509_lu.c",200);
  return (undefined4 *)0x0;
}



// FUNCTION 143ce92e0 X509_STORE_up_ref body=24 status=ok
// SIG undefined X509_STORE_up_ref(void)

bool X509_STORE_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x88);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143ce9300 x509_object_cmp body=92 status=ok
// SIG undefined x509_object_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong x509_object_cmp(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  ulonglong uVar4;
  uint uVar5;
  
  piVar2 = (int *)*param_2;
  piVar3 = (int *)*param_1;
  iVar1 = *piVar3;
  uVar5 = iVar1 - *piVar2;
  if (uVar5 == 0) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == 1) {
      uVar5 = X509_subject_name_cmp
                        (*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2),piVar3,piVar2,
                         0x143ce930a);
    }
    else if (iVar1 == 2) {
      uVar4 = X509_CRL_cmp(*(undefined8 *)(piVar3 + 2),*(undefined8 *)(piVar2 + 2));
      return uVar4;
    }
  }
  return (ulonglong)uVar5;
}



// FUNCTION 143ce9360 x509_object_idx_cnt body=293 status=ok
// SIG undefined x509_object_idx_cnt(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int x509_object_idx_cnt(undefined8 param_1,int param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_298 [32];
  int local_278 [2];
  undefined1 *local_270;
  undefined8 local_240;
  undefined8 local_130;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (param_2 == 0) {
    return -1;
  }
  if (param_2 == 1) {
    local_270 = &stack0x00000110;
    local_130 = param_3;
  }
  else {
    if (param_2 != 2) goto LAB_143ce93c7;
    local_270 = &stack0x00000030;
    local_240 = param_3;
  }
  local_270 = local_270 + -0x288;
LAB_143ce93c7:
  local_278[0] = param_2;
  iVar1 = OPENSSL_sk_find(param_1,local_278);
  if ((-1 < iVar1) && (param_4 != (int *)0x0)) {
    iVar4 = iVar1 + 1;
    *param_4 = 1;
    iVar2 = OPENSSL_sk_num(param_1);
    if (iVar4 < iVar2) {
      do {
        piVar3 = (int *)OPENSSL_sk_value(param_1,iVar4);
        iVar2 = *piVar3;
        if (iVar2 != local_278[0]) {
          return iVar1;
        }
        if (iVar2 != 0) {
          if (iVar2 == 1) {
            iVar2 = X509_subject_name_cmp(*(undefined8 *)(piVar3 + 2),local_270);
          }
          else {
            if (iVar2 != 2) goto LAB_143ce9442;
            iVar2 = X509_CRL_cmp(*(undefined8 *)(piVar3 + 2),local_270);
          }
          if (iVar2 != 0) {
            return iVar1;
          }
        }
LAB_143ce9442:
        *param_4 = *param_4 + 1;
        iVar4 = iVar4 + 1;
        iVar2 = OPENSSL_sk_num(param_1);
      } while (iVar4 < iVar2);
    }
  }
  return iVar1;
}



// FUNCTION 143ce9490 x509_store_add body=424 status=ok
// SIG undefined x509_store_add(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool x509_store_add(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  
  iVar5 = 0;
  if ((param_2 == 0) || (piVar6 = (int *)X509_OBJECT_new(), piVar6 == (int *)0x0)) {
    return false;
  }
  *piVar6 = (param_3 != 0) + 1;
  *(longlong *)(piVar6 + 2) = param_2;
  if (*piVar6 == 1) {
    X509_up_ref(param_2);
  }
  else if (*piVar6 == 2) {
    X509_CRL_up_ref(param_2);
  }
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x90));
  uVar1 = *(undefined8 *)(param_1 + 8);
  iVar2 = OPENSSL_sk_find(uVar1,piVar6);
  if (-1 < iVar2) {
    if (*piVar6 - 1U < 2) {
      iVar3 = OPENSSL_sk_num(uVar1);
      for (; iVar2 < iVar3; iVar2 = iVar2 + 1) {
        piVar7 = (int *)OPENSSL_sk_value(uVar1,iVar2);
        iVar4 = *piVar7;
        if (iVar4 != *piVar6) break;
        if (iVar4 != 0) {
          if (iVar4 == 1) {
            iVar4 = X509_subject_name_cmp(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
          }
          else {
            if (iVar4 != 2) goto LAB_143ce95a3;
            iVar4 = X509_CRL_cmp(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
          }
          if (iVar4 != 0) break;
        }
LAB_143ce95a3:
        if (*piVar6 == 1) {
          iVar4 = X509_cmp(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
        }
        else {
          if (*piVar6 != 2) goto LAB_143ce9543;
          iVar4 = X509_CRL_match(*(undefined8 *)(piVar7 + 2),*(undefined8 *)(piVar6 + 2));
        }
        if (iVar4 == 0) goto LAB_143ce9543;
      }
    }
    else {
      piVar7 = (int *)OPENSSL_sk_value(uVar1,iVar2);
LAB_143ce9543:
      if (piVar7 != (int *)0x0) {
        bVar8 = true;
        goto LAB_143ce95ef;
      }
    }
  }
  iVar5 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 8),piVar6);
  bVar8 = iVar5 != 0;
LAB_143ce95ef:
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x90));
  if (iVar5 == 0) {
    X509_OBJECT_free(piVar6);
  }
  return bVar8;
}



// FUNCTION 143ce9640 X509_STORE_CTX_cleanup body=157 status=ok
// SIG undefined X509_STORE_CTX_cleanup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_cleanup(longlong param_1)

{
  if (*(code **)(param_1 + 0x88) != (code *)0x0) {
    (**(code **)(param_1 + 0x88))();
    *(undefined8 *)(param_1 + 0x88) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      X509_VERIFY_PARAM_free();
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  X509_policy_tree_free(*(undefined8 *)(param_1 + 0xa0));
  *(undefined8 *)(param_1 + 0xa0) = 0;
  OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x98),X509_free);
  *(undefined8 *)(param_1 + 0x98) = 0;
  CRYPTO_free_ex_data(5,param_1,param_1 + 0xe0);
  *(undefined8 *)(param_1 + 0xe0) = 0;
  return;
}



// FUNCTION 143ce96e0 X509_STORE_CTX_free body=54 status=ok
// SIG undefined X509_STORE_CTX_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_free(longlong param_1)

{
  if (param_1 != 0) {
    X509_STORE_CTX_cleanup();
    CRYPTO_free(param_1,"crypto\\x509\\x509_vfy.c",0x895);
  }
  return;
}



// FUNCTION 143ce9720 X509_STORE_CTX_get1_chain body=41 status=ok
// SIG undefined X509_STORE_CTX_get1_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_get1_chain(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    return 0;
  }
  uVar1 = X509_chain_up_ref();
  return uVar1;
}



// FUNCTION 143ce9750 GetAvoidanceGroupMask body=7 status=ok
// SIG undefined GetAvoidanceGroupMask(void)

undefined4 UWheeledVehicleMovementComponent::GetAvoidanceGroupMask(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xb0);
}



// FUNCTION 143ce9760 X509_STORE_CTX_init body=669 status=ok
// SIG undefined X509_STORE_CTX_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_STORE_CTX_init(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143ce9775;
  *param_1 = param_2;
  param_1[1] = param_3;
  lVar4 = 0;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[0x12] = 0;
  param_1[5] = 0;
  param_1[0x13] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  param_1[0x1c] = 0;
  if (param_2 != 0) {
    lVar4 = *(longlong *)(param_2 + 0x78);
  }
  param_1[0x11] = lVar4;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x38), pcVar3 == (code *)0x0)) {
    pcVar3 = check_issued;
  }
  param_1[9] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x30), pcVar3 == (code *)0x0)) {
    pcVar3 = X509_STORE_CTX_get1_issuer;
  }
  param_1[8] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x28), pcVar3 == (code *)0x0)) {
    pcVar3 = FUN_142452330;
  }
  param_1[7] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x20), pcVar3 == (code *)0x0)) {
    pcVar3 = internal_verify;
  }
  param_1[6] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x40), pcVar3 == (code *)0x0)) {
    pcVar3 = check_revocation;
  }
  param_1[10] = (longlong)pcVar3;
  if ((param_2 == 0) || (lVar4 = *(longlong *)(param_2 + 0x48), *(longlong *)(param_2 + 0x48) == 0))
  {
    lVar4 = 0;
  }
  param_1[0xb] = lVar4;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x50), pcVar3 == (code *)0x0)) {
    pcVar3 = check_crl;
  }
  param_1[0xc] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x58), pcVar3 == (code *)0x0)) {
    pcVar3 = cert_crl;
  }
  param_1[0xd] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x60), pcVar3 == (code *)0x0)) {
    pcVar3 = check_policy;
  }
  param_1[0xe] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x68), pcVar3 == (code *)0x0)) {
    pcVar3 = X509_STORE_CTX_get1_certs;
  }
  param_1[0xf] = (longlong)pcVar3;
  if ((param_2 == 0) || (pcVar3 = *(code **)(param_2 + 0x70), pcVar3 == (code *)0x0)) {
    pcVar3 = X509_STORE_CTX_get1_crls;
  }
  param_1[0x10] = (longlong)pcVar3;
  lVar4 = X509_VERIFY_PARAM_new();
  param_1[4] = lVar4;
  if (lVar4 == 0) {
    uVar2 = 0x8f3;
    goto LAB_143ce99c5;
  }
  if (param_2 == 0) {
    *(uint *)(lVar4 + 0x10) = *(uint *)(lVar4 + 0x10) | 0x11;
LAB_143ce9943:
    uVar5 = X509_VERIFY_PARAM_lookup("default");
    iVar1 = X509_VERIFY_PARAM_inherit(param_1[4],uVar5);
    if (iVar1 != 0) {
      if (*(int *)(param_1[4] + 0x1c) == 0) {
        uVar2 = X509_PURPOSE_get_by_id(*(undefined4 *)(param_1[4] + 0x18));
        lVar4 = X509_PURPOSE_get0(uVar2);
        if (lVar4 != 0) {
          uVar2 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(lVar4);
          *(undefined4 *)(param_1[4] + 0x1c) = uVar2;
        }
      }
      iVar1 = CRYPTO_new_ex_data(5,param_1,param_1 + 0x1c);
      if (iVar1 != 0) {
        return 1;
      }
      uVar2 = 0x917;
      goto LAB_143ce99c5;
    }
  }
  else {
    iVar1 = X509_VERIFY_PARAM_inherit(lVar4,*(undefined8 *)(param_2 + 0x18));
    if (iVar1 != 0) goto LAB_143ce9943;
  }
  uVar2 = 0x904;
LAB_143ce99c5:
  ERR_put_error(0xb,0x8f,0x41,"crypto\\x509\\x509_vfy.c",uVar2,uVar6);
  X509_STORE_CTX_cleanup(param_1);
  return 0;
}



// FUNCTION 143ce9a00 X509_STORE_CTX_new body=80 status=ok
// SIG undefined X509_STORE_CTX_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_STORE_CTX_new(void)

{
  longlong lVar1;
  
  lVar1 = CRYPTO_zalloc(0xf8,"crypto\\x509\\x509_vfy.c",0x886);
  if (lVar1 == 0) {
    ERR_put_error(0xb,0x8e,0x41,"crypto\\x509\\x509_vfy.c",0x889);
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 143ce9a50 X509_STORE_CTX_set0_dane body=8 status=ok
// SIG undefined X509_STORE_CTX_set0_dane(void)

void X509_STORE_CTX_set0_dane(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xe8) = param_2;
  return;
}



// FUNCTION 143ce9a60 X509_STORE_CTX_set_default body=54 status=ok
// SIG undefined X509_STORE_CTX_set_default(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_default(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = X509_VERIFY_PARAM_lookup(param_2);
  if (lVar1 == 0) {
    return;
  }
  X509_VERIFY_PARAM_inherit(*(undefined8 *)(param_1 + 0x20),lVar1);
  return;
}



// FUNCTION 143ce9aa0 X509_STORE_CTX_set_error body=7 status=ok
// SIG undefined X509_STORE_CTX_set_error(void)

void X509_STORE_CTX_set_error(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xb0) = param_2;
  return;
}



// FUNCTION 143ce9ab0 X509_STORE_CTX_set_flags body=26 status=ok
// SIG undefined X509_STORE_CTX_set_flags(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_STORE_CTX_set_flags(longlong param_1)

{
  FUN_143cfa530(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 143ce9ad0 X509_cmp_current_time body=24 status=ok
// SIG undefined X509_cmp_current_time(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_cmp_current_time(undefined8 param_1)

{
  X509_cmp_time(param_1,0);
  return;
}



// FUNCTION 143ce9af0 X509_cmp_time body=273 status=ok
// SIG undefined X509_cmp_time(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_cmp_time(int *param_1,__time64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  int local_res8 [4];
  int local_res18 [2];
  __time64_t local_res20;
  
  uVar3 = 0;
  if (param_1[1] == 0x17) {
    iVar2 = *param_1;
    if (iVar2 != 0xd) {
      return 0;
    }
  }
  else {
    if (param_1[1] != 0x18) {
      return 0;
    }
    if (*param_1 != 0xf) {
      return 0;
    }
    iVar2 = 0xf;
  }
  uVar4 = uVar3;
  uVar6 = uVar3;
  if (0 < iVar2 + -1) {
    do {
      iVar2 = ossl_ctype_check(*(undefined1 *)(*(longlong *)(param_1 + 2) + uVar4),4);
      if (iVar2 == 0) {
        return 0;
      }
      iVar2 = *param_1;
      uVar5 = (int)uVar6 + 1;
      uVar4 = uVar4 + 1;
      uVar6 = (ulonglong)uVar5;
    } while ((int)uVar5 < iVar2 + -1);
  }
  if (*(char *)(*(longlong *)(param_1 + 2) + -1 + (longlong)iVar2) != 'Z') {
    return 0;
  }
  if (param_2 == (__time64_t *)0x0) {
    _time64(&local_res20);
  }
  else {
    local_res20 = *param_2;
  }
  lVar1 = ASN1_TIME_adj(0,local_res20,0,0);
  if (((lVar1 != 0) && (iVar2 = ASN1_TIME_diff(local_res8,local_res18,param_1,lVar1), iVar2 != 0))
     && ((local_res8[0] < 0 || (uVar3 = 0xffffffff, local_res18[0] < 0)))) {
    uVar3 = 1;
  }
  ASN1_TIME_free(lVar1);
  return uVar3;
}



// FUNCTION 143ce9c10 X509_get_pubkey_parameters body=274 status=ok
// SIG undefined X509_get_pubkey_parameters(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get_pubkey_parameters(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143ce9c2a;
  if ((param_1 == 0) || (iVar1 = EVP_PKEY_missing_parameters(), iVar1 != 0)) {
    iVar1 = 0;
    iVar2 = OPENSSL_sk_num(param_2);
    if (iVar2 < 1) {
      uVar5 = 0x76c;
      uVar3 = 0x6b;
LAB_143ce9cf7:
      ERR_put_error(0xb,0x6e,uVar3,"crypto\\x509\\x509_vfy.c",uVar5,uVar6);
      return 0;
    }
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar1);
      lVar4 = X509_get0_pubkey(uVar3);
      if (lVar4 == 0) {
        uVar5 = 0x764;
        uVar3 = 0x6c;
        goto LAB_143ce9cf7;
      }
      iVar2 = EVP_PKEY_missing_parameters(lVar4);
      if (iVar2 == 0) break;
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar1 < iVar2);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      uVar6 = OPENSSL_sk_value(param_2,iVar1);
      uVar6 = X509_get0_pubkey(uVar6);
      EVP_PKEY_copy_parameters(uVar6,lVar4);
    }
    if (param_1 != 0) {
      EVP_PKEY_copy_parameters(param_1,lVar4);
    }
  }
  return 1;
}



// FUNCTION 143ce9d30 X509_gmtime_adj body=149 status=ok
// SIG undefined X509_gmtime_adj(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_gmtime_adj(longlong param_1,undefined4 param_2)

{
  __time64_t local_res8;
  
  _time64(&local_res8);
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x10) & 0x40) == 0)) {
    if (*(int *)(param_1 + 4) == 0x17) {
      ASN1_UTCTIME_adj(param_1,local_res8,0,param_2);
      return;
    }
    if (*(int *)(param_1 + 4) == 0x18) {
      ASN1_GENERALIZEDTIME_adj(param_1,local_res8,0,param_2);
      return;
    }
  }
  ASN1_TIME_adj(param_1,local_res8,0,param_2);
  return;
}



// FUNCTION 143ce9dd0 X509_verify_cert body=737 status=ok
// SIG undefined X509_verify_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong X509_verify_cert(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143ce9de0;
  lVar1 = *(longlong *)(param_1 + 0xe8);
  if (*(longlong *)(param_1 + 8) == 0) {
    ERR_put_error(0xb,0x7f,0x69,"crypto\\x509\\x509_vfy.c",0x103,0x143ce9de0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    ERR_put_error(0xb,0x7f,0x42,"crypto\\x509\\x509_vfy.c",0x10d,0x143ce9de0);
    *(undefined4 *)(param_1 + 0xb0) = 0x45;
    return 0xffffffff;
  }
  lVar4 = OPENSSL_sk_new_null();
  *(longlong *)(param_1 + 0x98) = lVar4;
  if ((lVar4 == 0) || (iVar2 = OPENSSL_sk_push(lVar4,*(undefined8 *)(param_1 + 8)), iVar2 == 0)) {
    ERR_put_error(0xb,0x7f,0x41,"crypto\\x509\\x509_vfy.c",0x118,uVar7);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
    return 0xffffffff;
  }
  X509_up_ref(*(undefined8 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 0x94) = 1;
  iVar2 = check_key_level(param_1,*(undefined8 *)(param_1 + 8));
  uVar6 = 0;
  if (iVar2 == 0) {
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x42;
    uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
  }
  if ((lVar1 == 0) || (iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), iVar2 < 1)) {
LAB_143cea03a:
    uVar3 = verify_chain(param_1);
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0xe8);
    lVar4 = *(longlong *)(param_1 + 8);
    X509_free(*(undefined8 *)(lVar1 + 0x20));
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined8 *)(lVar1 + 0x2c) = 0xffffffffffffffff;
    iVar2 = dane_match(param_1,*(undefined8 *)(param_1 + 8),0);
    if ((iVar2 == 0) && (((*(byte *)(lVar1 + 0x28) & 5) != 0 || (-1 < *(int *)(lVar1 + 0x2c)))))
    goto LAB_143cea03a;
    X509_get_pubkey_parameters(0,*(undefined8 *)(param_1 + 0x98));
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        *(undefined4 *)(param_1 + 0xac) = 0;
        uVar6 = 0xffffffff;
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
        goto LAB_143cea048;
      }
      iVar2 = check_leaf_suiteb(param_1,lVar4);
      if (iVar2 == 0) goto LAB_143cea048;
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x41;
      uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
    }
    else {
      iVar2 = check_leaf_suiteb(param_1,lVar4);
      uVar6 = 0;
      if ((iVar2 == 0) ||
         (((*(byte *)(lVar1 + 0x34) & 1) == 0 && (iVar2 = check_id(param_1), iVar2 == 0))))
      goto LAB_143cea048;
      *(undefined4 *)(param_1 + 0xac) = 0;
      *(longlong *)(param_1 + 0xb8) = lVar4;
      uVar3 = (**(code **)(param_1 + 0x38))(1,param_1);
    }
  }
  uVar6 = (ulonglong)uVar3;
  if (0 < (int)uVar3) {
    return uVar6;
  }
LAB_143cea048:
  if (*(int *)(param_1 + 0xb0) == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 1;
  }
  return uVar6;
}



// FUNCTION 143cea0c0 build_chain body=2476 status=ok
// SIG undefined build_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 build_chain(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte bVar13;
  int iVar14;
  ulonglong uVar15;
  uint uVar16;
  int iVar17;
  byte bVar18;
  bool bVar19;
  bool bVar20;
  int local_res8;
  longlong local_res20;
  undefined4 uVar21;
  longlong local_68;
  
  lVar2 = *(longlong *)(param_1 + 0xe8);
  iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar10 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6 + -1);
  X509_check_purpose(lVar10,0xffffffff);
  iVar14 = 0;
  uVar16 = *(uint *)(lVar10 + 0xd0) >> 0xd & 1;
  local_68 = 0;
  local_res8 = 0;
  iVar17 = 3;
  if ((iVar6 != 1) || (*(int *)(param_1 + 0x94) != 1)) {
    ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xb3d);
    *(undefined4 *)(param_1 + 0xb0) = 1;
    return 0;
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  bVar18 = lVar10 != 0;
  if ((lVar2 == 0) || ((*(uint *)(lVar2 + 0x28) & 3) != 0)) {
LAB_143cea172:
    if ((lVar10 == 0) ||
       (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14), (uVar1 >> 0xf & 1) != 0)) {
      bVar18 = bVar18 | 2;
      bVar4 = false;
    }
    else {
      bVar4 = false;
      if ((uVar1 >> 0x14 & 1) == 0) {
        bVar4 = true;
      }
    }
    bVar5 = true;
  }
  else {
    bVar4 = false;
    bVar5 = false;
    if ((*(uint *)(lVar2 + 0x28) & 0xc) == 0) goto LAB_143cea172;
  }
  if ((lVar10 == 0) || (local_68 = OPENSSL_sk_dup(), local_68 != 0)) {
    if ((lVar2 != 0) &&
       ((iVar6 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8)), 0 < iVar6 &&
        (*(longlong *)(lVar2 + 0x10) != 0)))) {
      if ((local_68 == 0) && (local_68 = OPENSSL_sk_new_null(), local_68 == 0)) {
        uVar21 = 0xb6c;
        goto LAB_143cea1ca;
      }
      iVar6 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
      if (0 < iVar6) {
        do {
          uVar11 = OPENSSL_sk_value(*(undefined8 *)(lVar2 + 0x10),iVar14);
          iVar6 = OPENSSL_sk_push(local_68,uVar11);
          if (iVar6 == 0) {
            OPENSSL_sk_free(local_68);
            uVar21 = 0xb73;
            goto LAB_143cea1ca;
          }
          iVar14 = iVar14 + 1;
          iVar6 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 0x10));
        } while (iVar14 < iVar6);
      }
    }
    iVar6 = 0;
    lVar10 = *(longlong *)(param_1 + 0x20);
    if (0x3fffffff < *(int *)(lVar10 + 0x20)) {
      *(undefined4 *)(lVar10 + 0x20) = 0x3fffffff;
      lVar10 = *(longlong *)(param_1 + 0x20);
    }
    iVar14 = *(int *)(lVar10 + 0x20) + 1;
    if (bVar18 != 0) {
      while( true ) {
        local_res20 = 0;
        if ((bVar18 & 2) == 0) goto LAB_143cea530;
        iVar7 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        iVar9 = iVar7;
        if ((bVar18 & 4) != 0) {
          iVar9 = iVar6;
        }
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9 + -1);
        if (iVar7 <= iVar14) break;
LAB_143cea4d8:
        if ((bVar18 & 1) == 0) {
          if (((bVar18 & 4) == 0) || (local_res8 = iVar6 + -1, iVar6 = local_res8, local_res8 < 1))
          {
            if ((bVar4) && (((bVar18 & 4) == 0 && (1 < *(int *)(param_1 + 0x94))))) {
              bVar18 = bVar18 | 4;
              local_res8 = *(int *)(param_1 + 0x94) + -1;
              uVar16 = 0;
              iVar6 = local_res8;
              goto LAB_143cea530;
            }
            goto LAB_143cea6ff;
          }
        }
        else {
LAB_143cea530:
          if ((bVar18 & 1) != 0) {
            iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
            if (iVar6 != *(int *)(param_1 + 0x94)) {
              uVar21 = 0xc3d;
LAB_143cea6d6:
              ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",uVar21);
LAB_143cea6ef:
              *(undefined4 *)(param_1 + 0xb0) = 1;
              goto LAB_143cea6f9;
            }
            uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6 + -1);
            if ((uVar16 == 0) && (iVar6 <= iVar14)) {
              local_res20 = find_issuer(param_1,local_68,uVar11);
            }
            else {
              local_res20 = 0;
            }
            iVar6 = local_res8;
            if (local_res20 == 0) {
              bVar13 = bVar18 & 0xfe;
              bVar18 = bVar13 | 2;
              if (!bVar5) {
                bVar18 = bVar13;
              }
            }
            else {
              OPENSSL_sk_delete_ptr(local_68,local_res20);
              iVar17 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_res20);
              if (iVar17 == 0) {
                uVar21 = 0xc55;
                goto LAB_143cea68a;
              }
              X509_up_ref(local_res20);
              lVar10 = local_res20;
              *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
              X509_check_purpose(local_res20,0xffffffff);
              uVar16 = *(uint *)(lVar10 + 0xd0) >> 0xd & 1;
              iVar17 = check_dane_issuer(param_1,*(int *)(param_1 + 0x94) + -1);
              if ((0 < iVar17) && (iVar17 < 3)) goto LAB_143cea6ff;
            }
          }
        }
LAB_143cea632:
        if (bVar18 == 0) goto LAB_143cea6ff;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x98);
      *(undefined8 *)(param_1 + 0x98) = 0;
      iVar8 = (**(code **)(param_1 + 0x40))(&local_res20,param_1,uVar11);
      *(undefined8 *)(param_1 + 0x98) = uVar3;
      if (iVar8 < 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x46;
      }
      else {
        iVar6 = local_res8;
        if (iVar8 < 1) goto LAB_143cea4d8;
        if ((bVar18 & 4) != 0) {
          if (((iVar9 < iVar7) && (0 < iVar9)) && (uVar16 == 0)) {
            bVar18 = bVar18 & 0xfb;
            uVar15 = (ulonglong)(uint)(iVar7 - iVar9);
            iVar7 = iVar7 - (iVar7 - iVar9);
            do {
              uVar11 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
              X509_free(uVar11);
              uVar15 = uVar15 - 1;
            } while (uVar15 != 0);
            *(int *)(param_1 + 0x94) = iVar7;
            if (lVar2 != 0) {
              iVar17 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8));
              if ((0 < iVar17) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x2c))) {
                *(undefined4 *)(lVar2 + 0x2c) = 0xffffffff;
                X509_free(*(undefined8 *)(lVar2 + 0x20));
                *(undefined8 *)(lVar2 + 0x20) = 0;
              }
              iVar17 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8));
              if ((0 < iVar17) && (*(int *)(param_1 + 0x94) <= *(int *)(lVar2 + 0x30))) {
                *(undefined4 *)(lVar2 + 0x30) = 0xffffffff;
              }
            }
            goto LAB_143cea40b;
          }
          ERR_put_error(0xb,0x6a,0x44,"crypto\\x509\\x509_vfy.c",0xbca);
          X509_free(local_res20);
          goto LAB_143cea6ef;
        }
        if (uVar16 != 0) {
          iVar9 = *(int *)(param_1 + 0x94);
          bVar20 = SBORROW4(iVar9,iVar7);
          iVar8 = iVar9 - iVar7;
          bVar19 = false;
          if (iVar9 == iVar7) {
            iVar9 = X509_cmp(uVar11,local_res20);
            if (iVar9 != 0) {
              X509_free(local_res20);
              goto LAB_143cea4d8;
            }
            X509_free(uVar11);
            iVar7 = iVar7 + -1;
            *(int *)(param_1 + 0x94) = iVar7;
            OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),iVar7,local_res20);
            goto LAB_143cea4a0;
          }
LAB_143cea4a6:
          if (!bVar19 && bVar20 == iVar8 < 0) {
            uVar21 = 0xc10;
            goto LAB_143cea6d6;
          }
          bVar18 = bVar18 & 0xfe;
          iVar17 = check_trust(param_1,iVar7);
          if (1 < iVar17 - 1U) {
            if (uVar16 != 0) goto LAB_143cea4d8;
            goto LAB_143cea632;
          }
          goto LAB_143cea6ff;
        }
LAB_143cea40b:
        lVar10 = local_res20;
        iVar17 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),local_res20);
        if (iVar17 != 0) {
          X509_check_purpose(lVar10,0xffffffff);
          uVar16 = *(uint *)(lVar10 + 0xd0) >> 0xd & 1;
LAB_143cea4a0:
          iVar17 = *(int *)(param_1 + 0x94);
          bVar20 = SBORROW4(iVar17,iVar7);
          iVar8 = iVar17 - iVar7;
          bVar19 = iVar17 == iVar7;
          goto LAB_143cea4a6;
        }
        X509_free(local_res20);
        uVar21 = 0xbe8;
LAB_143cea68a:
        ERR_put_error(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar21);
        *(undefined4 *)(param_1 + 0xb0) = 0x11;
      }
LAB_143cea6f9:
      iVar17 = 2;
    }
LAB_143cea6ff:
    OPENSSL_sk_free(local_68);
    iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if ((iVar6 <= iVar14) && (iVar17 == 3)) {
      if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x28) & 4) != 0)) {
        iVar17 = *(int *)(param_1 + 0x94) + -1;
        lVar10 = *(longlong *)(param_1 + 0xe8);
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar17);
        iVar9 = OPENSSL_sk_num(*(undefined8 *)(lVar10 + 8));
        iVar7 = 0;
        if (0 < iVar9) {
LAB_143cea782:
          pcVar12 = (char *)OPENSSL_sk_value(*(undefined8 *)(lVar10 + 8),iVar7);
          if ((((*pcVar12 != '\x02') || (pcVar12[1] != '\x01')) || (pcVar12[2] != '\0')) ||
             (iVar8 = X509_verify(uVar11,*(undefined8 *)(pcVar12 + 0x18)), iVar8 < 1))
          goto LAB_143cea7b5;
          X509_free(*(undefined8 *)(lVar10 + 0x20));
          *(undefined8 *)(lVar10 + 0x20) = 0;
          *(undefined4 *)(param_1 + 0xf0) = 1;
          *(int *)(lVar10 + 0x2c) = iVar17;
          *(char **)(lVar10 + 0x18) = pcVar12;
          iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
          if (*(int *)(param_1 + 0x94) < iVar6) {
            do {
              uVar11 = OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
              X509_free(uVar11);
              iVar6 = iVar6 + -1;
            } while (*(int *)(param_1 + 0x94) < iVar6);
          }
          iVar17 = 1;
          goto LAB_143cea7de;
        }
LAB_143cea7c3:
        iVar17 = 3;
      }
      if (iVar6 == *(int *)(param_1 + 0x94)) {
        iVar17 = check_trust(param_1,iVar6);
      }
    }
LAB_143cea7de:
    if (iVar17 == 1) {
      return 1;
    }
    if (iVar17 != 2) {
      iVar6 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      if (iVar14 < iVar6) {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0x16;
                    /* WARNING: Could not recover jumptable at 0x000143cea84f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar11;
      }
      if (((lVar2 != 0) && (iVar17 = OPENSSL_sk_num(*(undefined8 *)(lVar2 + 8)), 0 < iVar17)) &&
         (((*(byte *)(lVar2 + 0x28) & 3) == 0 || (-1 < *(int *)(lVar2 + 0x30))))) {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0x41;
                    /* WARNING: Could not recover jumptable at 0x000143cea917. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar11;
      }
      if ((uVar16 != 0) && (iVar17 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), iVar17 == 1))
      {
        *(int *)(param_1 + 0xac) = iVar6 + -1;
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0x12;
                    /* WARNING: Could not recover jumptable at 0x000143cea96d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar11;
      }
      *(int *)(param_1 + 0xac) = iVar6 + -1;
      if (uVar16 != 0) {
        uVar11 = OPENSSL_sk_value();
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0x13;
                    /* WARNING: Could not recover jumptable at 0x000143cea9b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar11;
      }
      if (iVar6 <= *(int *)(param_1 + 0x94)) {
        uVar11 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined8 *)(param_1 + 0xb8) = uVar11;
        *(undefined4 *)(param_1 + 0xb0) = 0x14;
                    /* WARNING: Could not recover jumptable at 0x000143ceaa1a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar11;
      }
      uVar11 = OPENSSL_sk_value();
      *(undefined8 *)(param_1 + 0xb8) = uVar11;
      *(undefined4 *)(param_1 + 0xb0) = 2;
                    /* WARNING: Could not recover jumptable at 0x000143cea9ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar11 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar11;
    }
  }
  else {
    uVar21 = 0xb5b;
LAB_143cea1ca:
    ERR_put_error(0xb,0x6a,0x41,"crypto\\x509\\x509_vfy.c",uVar21);
    *(undefined4 *)(param_1 + 0xb0) = 0x11;
  }
  return 0;
LAB_143cea7b5:
  iVar7 = iVar7 + 1;
  if (iVar9 <= iVar7) goto LAB_143cea7c3;
  goto LAB_143cea782;
}



// FUNCTION 143ceaa70 cert_crl body=187 status=ok
// SIG undefined cert_crl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 cert_crl(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong local_res8;
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
     ((*(uint *)(param_2 + 0x7c) & 0x200) != 0)) {
    *(undefined4 *)(param_1 + 0xb0) = 0x24;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = X509_CRL_get0_by_cert(param_2,&local_res8,param_3);
  if (iVar1 != 0) {
    if (*(int *)(local_res8 + 0x30) == 8) {
      return 2;
    }
    *(undefined4 *)(param_1 + 0xb0) = 0x17;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143ceab30 check_auth_level body=410 status=ok
// SIG undefined check_auth_level(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_auth_level(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int local_res8 [2];
  undefined8 uVar7;
  
  uVar7 = 0x143ceab52;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  if ((0 < *(int *)(*(longlong *)(param_1 + 0x20) + 0x24)) && (iVar6 = 0, 0 < iVar1)) {
    do {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
      if (0 < iVar6) {
        lVar5 = X509_get0_pubkey(lVar4);
        if (lVar5 == 0) {
LAB_143ceabd6:
          *(int *)(param_1 + 0xac) = iVar6;
          lVar5 = lVar4;
          if (lVar4 == 0) {
            lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
          }
          *(longlong *)(param_1 + 0xb8) = lVar5;
          *(undefined4 *)(param_1 + 0xb0) = 0x43;
          iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar3 == 0) {
            return 0;
          }
        }
        else {
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
          if (0 < iVar3) {
            if (5 < iVar3) {
              iVar3 = 5;
            }
            iVar2 = EVP_PKEY_security_bits(lVar5);
            if (iVar2 < *(int *)(&DAT_145d57b64 + (longlong)iVar3 * 4)) goto LAB_143ceabd6;
          }
        }
      }
      if (iVar6 < iVar1 + -1) {
        local_res8[0] = -1;
        iVar3 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
        if (0 < iVar3) {
          if (5 < iVar3) {
            iVar3 = 5;
          }
          iVar2 = X509_get_signature_info(lVar4,0,0,local_res8,0,uVar7);
          if ((iVar2 == 0) || (local_res8[0] < *(int *)(&DAT_145d57b64 + (longlong)iVar3 * 4))) {
            *(int *)(param_1 + 0xac) = iVar6;
            if (lVar4 == 0) {
              lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
            }
            *(longlong *)(param_1 + 0xb8) = lVar4;
            *(undefined4 *)(param_1 + 0xb0) = 0x44;
            iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar3 == 0) {
              return 0;
            }
          }
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar1);
  }
  return 1;
}



// FUNCTION 143ceacd0 check_chain_extensions body=780 status=ok
// SIG undefined check_chain_extensions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_chain_extensions(longlong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar11 = 0;
  iVar5 = 0;
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar8 = -1;
  if (*(longlong *)(param_1 + 0xd8) == 0) {
    iVar10 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x18);
    uVar12 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) >> 6 & 1;
  }
  else {
    uVar12 = 0;
    iVar10 = 6;
  }
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      lVar6 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
      if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x10) == 0) &&
         ((*(uint *)(lVar6 + 0xd0) & 0x200) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x22;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      if ((uVar12 == 0) && ((*(uint *)(lVar6 + 0xd0) & 0x400) != 0)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x28;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) {
          return 0;
        }
      }
      uVar3 = X509_check_ca(lVar6);
      if (iVar8 == -1) {
        if (((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0) && (1 < uVar3)) {
LAB_143ceae21:
          uVar4 = 0x18;
LAB_143ceae26:
          *(undefined4 *)(param_1 + 0xb0) = uVar4;
          *(int *)(param_1 + 0xac) = iVar9;
          lVar7 = lVar6;
          if (lVar6 == 0) {
            lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
          }
          *(longlong *)(param_1 + 0xb8) = lVar7;
          iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar2 == 0) {
            return 0;
          }
        }
      }
      else if (iVar8 == 0) {
        if (uVar3 != 0) {
          uVar4 = 0x25;
          goto LAB_143ceae26;
        }
      }
      else if ((uVar3 == 0) ||
              (((iVar9 + 1 < iVar1 ||
                ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)) && (uVar3 != 1))))
      goto LAB_143ceae21;
      if (0 < iVar10) {
        iVar2 = 3;
        if ((*(int *)(param_1 + 0x94) <= iVar9) &&
           (iVar10 == *(int *)(*(longlong *)(param_1 + 0x20) + 0x18))) {
          iVar2 = X509_check_trust(lVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),4);
        }
        if ((iVar2 != 1) &&
           (((iVar2 == 2 || (iVar8 = X509_check_purpose(lVar6,iVar10,0 < iVar8), iVar8 == 0)) ||
            ((iVar8 != 1 && ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x20) != 0)))))) {
          *(int *)(param_1 + 0xac) = iVar9;
          lVar7 = lVar6;
          if (lVar6 == 0) {
            lVar7 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar9);
          }
          *(longlong *)(param_1 + 0xb8) = lVar7;
          *(undefined4 *)(param_1 + 0xb0) = 0x1a;
          iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
          if (iVar8 == 0) {
            return 0;
          }
        }
      }
      if ((((1 < iVar9) && ((*(byte *)(lVar6 + 0xd0) & 0x20) == 0)) && (*(int *)(lVar6 + 200) != -1)
          ) && (*(int *)(lVar6 + 200) + 1 + iVar5 < iVar11)) {
        *(int *)(param_1 + 0xac) = iVar9;
        *(longlong *)(param_1 + 0xb8) = lVar6;
        *(undefined4 *)(param_1 + 0xb0) = 0x19;
        iVar8 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar8 == 0) {
          return 0;
        }
      }
      iVar2 = iVar11 + 1;
      if ((*(uint *)(lVar6 + 0xd0) & 0x20) != 0) {
        iVar2 = iVar11;
      }
      if ((*(uint *)(lVar6 + 0xd0) >> 10 & 1) == 0) {
        iVar8 = 1;
      }
      else {
        if (*(int *)(lVar6 + 0xcc) != -1) {
          if (*(int *)(lVar6 + 0xcc) < iVar5) {
            *(int *)(param_1 + 0xac) = iVar9;
            *(longlong *)(param_1 + 0xb8) = lVar6;
            *(undefined4 *)(param_1 + 0xb0) = 0x26;
            iVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar5 == 0) {
              return 0;
            }
          }
          iVar5 = *(int *)(lVar6 + 0xcc);
        }
        iVar5 = iVar5 + 1;
        iVar8 = 0;
      }
      iVar9 = iVar9 + 1;
      iVar11 = iVar2;
    } while (iVar9 < iVar1);
  }
  return 1;
}



// FUNCTION 143ceafe0 check_crl body=705 status=ok
// SIG undefined check_crl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_crl(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar3 = *(int *)(param_1 + 0xac);
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  lVar4 = *(longlong *)(param_1 + 0xc0);
  if (lVar4 == 0) {
    if (iVar3 < iVar2 + -1) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3 + 1);
    }
    else {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar2 + -1);
      iVar3 = (**(code **)(param_1 + 0x48))(param_1,lVar4,lVar4);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x21;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    if (lVar4 == 0) {
      return 1;
    }
  }
  if (*(longlong *)(param_2 + 0xa0) == 0) {
    if (((*(byte *)(lVar4 + 0xd0) & 2) != 0) && ((*(byte *)(lVar4 + 0xd4) & 2) == 0)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x23;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1 + 0xd0) & 0x80) == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x2c;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (((*(byte *)(param_1 + 0xd0) & 8) == 0) &&
       (iVar3 = check_crl_path(param_1,*(undefined8 *)(param_1 + 0xc0)), iVar3 < 1)) {
      *(undefined4 *)(param_1 + 0xb0) = 0x36;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_2 + 0x90) & 2) != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0x29;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
  }
  if ((*(byte *)(param_1 + 0xd0) & 0x40) == 0) {
    *(longlong *)(param_1 + 200) = param_2;
    uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
    if ((uVar1 & 2) == 0) {
      if ((uVar1 >> 0x15 & 1) != 0) goto LAB_143ceb219;
      lVar7 = 0;
    }
    else {
      lVar7 = *(longlong *)(param_1 + 0x20) + 8;
    }
    uVar5 = USignificanceManager::GetWorld(param_2);
    iVar3 = X509_cmp_time(uVar5,lVar7);
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0xf;
      uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
      if ((int)uVar5 == 0) {
        return uVar5;
      }
    }
    else if (0 < iVar3) {
      *(undefined4 *)(param_1 + 0xb0) = 0xb;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    lVar6 = FNiagaraEmitterHandle::GetInstance(param_2);
    if (lVar6 != 0) {
      uVar5 = FNiagaraEmitterHandle::GetInstance(param_2);
      iVar3 = X509_cmp_time(uVar5,lVar7);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xb0) = 0x10;
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar5 == 0) {
          return uVar5;
        }
      }
      else if ((iVar3 < 0) && ((*(byte *)(param_1 + 0xd0) & 2) == 0)) {
        *(undefined4 *)(param_1 + 0xb0) = 0xc;
        iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
    *(undefined8 *)(param_1 + 200) = 0;
  }
LAB_143ceb219:
  lVar4 = X509_get0_pubkey(lVar4);
  if (lVar4 == 0) {
    *(undefined4 *)(param_1 + 0xb0) = 6;
  }
  else {
    iVar3 = X509_CRL_check_suiteb
                      (param_2,lVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
    if (iVar3 != 0) {
      *(int *)(param_1 + 0xb0) = iVar3;
      iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar3 == 0) {
        return 0;
      }
    }
    iVar3 = X509_CRL_verify(param_2,lVar4);
    if (0 < iVar3) {
      return 1;
    }
    *(undefined4 *)(param_1 + 0xb0) = 8;
  }
  iVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
  if (iVar3 != 0) {
    return 1;
  }
  return 0;
}



// FUNCTION 143ceb2b0 check_crl_path body=265 status=ok
// SIG undefined check_crl_path(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint check_crl_path(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_108 [24];
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_d0;
  undefined8 local_70;
  undefined8 *local_30;
  undefined8 uStack_10;
  
  uStack_10 = 0x143ceb2bc;
  if (param_1[0x1b] != 0) {
    return 0;
  }
  iVar1 = X509_STORE_CTX_init(local_108,*param_1,param_2,param_1[2]);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  local_f0 = param_1[3];
  uVar3 = param_1[4];
  X509_VERIFY_PARAM_free(local_e8);
  local_d0 = param_1[7];
  local_e8 = uVar3;
  local_30 = param_1;
  uVar2 = X509_verify_cert(local_108);
  if (0 < (int)uVar2) {
    uVar3 = param_1[0x13];
    iVar1 = OPENSSL_sk_num(uVar3);
    uVar3 = OPENSSL_sk_value(uVar3,iVar1 + -1);
    iVar1 = OPENSSL_sk_num(local_70);
    uVar4 = OPENSSL_sk_value(local_70,iVar1 + -1);
    iVar1 = X509_cmp(uVar3,uVar4);
    uVar2 = (uint)(iVar1 == 0);
  }
  X509_STORE_CTX_cleanup(local_108);
  return uVar2;
}



// FUNCTION 143ceb3c0 check_dane_issuer body=140 status=ok
// SIG undefined check_dane_issuer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_dane_issuer(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (((*(longlong *)(param_1 + 0xe8) != 0) &&
      ((*(byte *)(*(longlong *)(param_1 + 0xe8) + 0x28) & 5) != 0)) && (param_2 != 0)) {
    lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
    if (lVar2 != 0) {
      iVar1 = dane_match(param_1,lVar2,param_2);
      if (iVar1 < 0) {
        return 2;
      }
      if (0 < iVar1) {
        *(int *)(param_1 + 0x94) = param_2 + -1;
        return 1;
      }
    }
  }
  return 3;
}



// FUNCTION 143ceb450 check_id body=439 status=ok
// SIG undefined check_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_id(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  
  lVar5 = *(longlong *)(param_1 + 0x20);
  uVar6 = *(undefined8 *)(param_1 + 8);
  iVar7 = 0;
  if (*(longlong *)(lVar5 + 0x30) == 0) {
LAB_143ceb531:
    if ((*(longlong *)(lVar5 + 0x48) != 0) &&
       (iVar7 = X509_check_email(uVar6,*(longlong *)(lVar5 + 0x48),*(undefined8 *)(lVar5 + 0x50),0),
       iVar7 < 1)) {
      lVar4 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar4 == 0) {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar4;
      *(undefined4 *)(param_1 + 0xb0) = 0x3f;
      iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar7 == 0) goto LAB_143ceb5df;
    }
    if ((*(longlong *)(lVar5 + 0x58) != 0) &&
       (iVar7 = X509_check_ip(uVar6,*(longlong *)(lVar5 + 0x58),*(undefined8 *)(lVar5 + 0x60),0),
       iVar7 < 1)) {
      lVar5 = *(longlong *)(param_1 + 8);
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar5 == 0) {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined4 *)(param_1 + 0xb0) = 0x40;
      iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar7 == 0) goto LAB_143ceb5df;
    }
    uVar6 = 1;
  }
  else {
    iVar1 = OPENSSL_sk_num();
    if (*(longlong *)(lVar5 + 0x40) != 0) {
      CRYPTO_free(*(longlong *)(lVar5 + 0x40),"crypto\\x509\\x509_vfy.c",0x2ce);
      *(undefined8 *)(lVar5 + 0x40) = 0;
    }
    if (0 < iVar1) {
      do {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(lVar5 + 0x30),iVar7);
        iVar2 = X509_check_host(uVar6,uVar3,0,*(undefined4 *)(lVar5 + 0x38),
                                (undefined8 *)(lVar5 + 0x40));
        if (0 < iVar2) goto LAB_143ceb531;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
    if (iVar1 == 0) goto LAB_143ceb531;
    lVar4 = *(longlong *)(param_1 + 8);
    *(undefined4 *)(param_1 + 0xac) = 0;
    if (lVar4 == 0) {
      lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    }
    *(longlong *)(param_1 + 0xb8) = lVar4;
    *(undefined4 *)(param_1 + 0xb0) = 0x3e;
    iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar7 != 0) goto LAB_143ceb531;
LAB_143ceb5df:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 143ceb610 check_issued body=270 status=ok
// SIG undefined check_issued(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong check_issued(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  if (param_2 == param_3) {
    X509_check_purpose(param_2,0xffffffff,0);
    return (ulonglong)(*(uint *)(param_2 + 0xd0) >> 0xd & 1);
  }
  iVar1 = X509_check_issued(param_3);
  iVar5 = 0;
  if (iVar1 == 0) {
    X509_check_purpose(param_2,0xffffffff,0);
    if (((*(uint *)(param_2 + 0xd0) & 0x2000) != 0) &&
       (uVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98)), (int)uVar3 == 1)) {
      return uVar3;
    }
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (0 < iVar2) {
      do {
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar5);
        if ((lVar4 == param_3) || (iVar2 = X509_cmp(lVar4,param_3), iVar2 == 0)) {
          iVar1 = 0x37;
          break;
        }
        iVar5 = iVar5 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      } while (iVar5 < iVar2);
    }
  }
  return (ulonglong)(iVar1 == 0);
}



// FUNCTION 143ceb720 check_key_level body=105 status=ok
// SIG undefined check_key_level(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool check_key_level(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = X509_get0_pubkey(param_2);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x20) + 0x24);
  if (lVar3 == 0) {
    return false;
  }
  if (iVar1 < 1) {
    return true;
  }
  if (5 < iVar1) {
    iVar1 = 5;
  }
  iVar2 = EVP_PKEY_security_bits(lVar3);
  return *(int *)(&DAT_145d57b64 + (longlong)iVar1 * 4) <= iVar2;
}



// FUNCTION 143ceb790 check_leaf_suiteb body=145 status=ok
// SIG undefined check_leaf_suiteb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_leaf_suiteb(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = X509_chain_check_suiteb(0,param_2,0,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14))
  ;
  if (iVar1 == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0xac) = 0;
  if (param_2 == 0) {
    param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
  }
  *(longlong *)(param_1 + 0xb8) = param_2;
  *(int *)(param_1 + 0xb0) = iVar1;
                    /* WARNING: Could not recover jumptable at 0x000143ceb81e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
  return uVar2;
}



// FUNCTION 143ceb830 check_name_constraints body=753 status=ok
// SIG undefined check_name_constraints(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_name_constraints(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  
  iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  do {
    do {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 1;
      }
      lVar8 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
    } while ((iVar3 != 0) && ((*(byte *)(lVar8 + 0xd0) & 0x20) != 0));
    if ((*(uint *)(lVar8 + 0xd0) & 0x400) != 0) {
      uVar9 = FBackChannelConnection::GetSocket(lVar8);
      uVar10 = FVoicePacketImpl::GetSampleCounter(lVar8);
      iVar7 = 0;
      iVar4 = X509_NAME_entry_count(uVar9);
      iVar15 = iVar4 + -1;
      if (iVar15 < 1) {
        iVar7 = 0x48;
      }
      else {
        iVar5 = X509_NAME_entry_count(uVar10);
        iVar6 = X509_NAME_entry_count(uVar9);
        if (iVar6 == iVar5 + 1) {
          uVar11 = X509_NAME_get_entry(uVar9,iVar4 + -2);
          iVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar11);
          uVar11 = X509_NAME_get_entry(uVar9,iVar15);
          iVar5 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar11);
          if (iVar5 == iVar4) {
            iVar7 = 0x48;
          }
          else {
            lVar12 = X509_NAME_dup(uVar9);
            if (lVar12 == 0) {
              ERR_put_error(0xb,0x95,0x41,"crypto\\x509\\x509_vfy.c",0x285);
              *(undefined4 *)(param_1 + 0xb0) = 0x11;
              return 0;
            }
            uVar9 = X509_NAME_delete_entry(lVar12,iVar15);
            uVar11 = EVP_MD_CTX_md(uVar9);
            iVar4 = OBJ_obj2nid(uVar11);
            if ((iVar4 != 0xd) || (iVar4 = X509_NAME_cmp(lVar12,uVar10), iVar4 != 0)) {
              iVar7 = 0x48;
            }
            X509_NAME_ENTRY_free(uVar9);
            X509_NAME_free(lVar12);
            if (iVar7 == 0) goto LAB_143ceb9b1;
          }
        }
        else {
          iVar7 = 0x48;
        }
      }
      *(int *)(param_1 + 0xac) = iVar3;
      *(longlong *)(param_1 + 0xb8) = lVar8;
      *(int *)(param_1 + 0xb0) = iVar7;
      iVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar4 == 0) {
        return 0;
      }
    }
LAB_143ceb9b1:
    iVar4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
joined_r0x000143ceb9c3:
    iVar4 = iVar4 + -1;
    if (iVar3 < iVar4) {
      lVar12 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar4);
      lVar12 = *(longlong *)(lVar12 + 0x108);
      if (lVar12 != 0) {
        iVar7 = NAME_CONSTRAINTS_check(lVar8,lVar12);
        if (iVar7 == 0) {
          if ((iVar3 != 0) ||
             (uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x38), (uVar1 & 0x20) != 0))
          goto joined_r0x000143ceb9c3;
          if ((uVar1 & 1) == 0) {
            bVar2 = false;
            lVar13 = X509_get_ext_d2i(lVar8,0x55,0,0);
            if (lVar13 != 0) {
              iVar15 = 0;
              iVar7 = OPENSSL_sk_num(lVar13);
              if (0 < iVar7) {
                do {
                  piVar14 = (int *)OPENSSL_sk_value(lVar13,iVar15);
                  if (*piVar14 == 2) {
                    bVar2 = true;
                    break;
                  }
                  iVar15 = iVar15 + 1;
                  iVar7 = OPENSSL_sk_num(lVar13);
                } while (iVar15 < iVar7);
              }
              GENERAL_NAMES_free(lVar13);
              if (bVar2) goto joined_r0x000143ceb9c3;
            }
          }
          iVar7 = NAME_CONSTRAINTS_check_CN(lVar8,lVar12);
          if (iVar7 == 0) goto joined_r0x000143ceb9c3;
        }
        if (iVar7 == 0x11) {
          return 0;
        }
        *(int *)(param_1 + 0xac) = iVar3;
        *(longlong *)(param_1 + 0xb8) = lVar8;
        *(int *)(param_1 + 0xb0) = iVar7;
        iVar7 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar7 == 0) {
          return 0;
        }
      }
      goto joined_r0x000143ceb9c3;
    }
  } while( true );
}



// FUNCTION 143cebb30 check_policy body=498 status=ok
// SIG undefined check_policy(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_policy(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cebb40;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    return 1;
  }
  if ((*(int *)(param_1 + 0xf0) == 0) ||
     (iVar1 = OPENSSL_sk_push(*(undefined8 *)(param_1 + 0x98),0), iVar1 != 0)) {
    iVar1 = X509_policy_check(param_1 + 0xa0,param_1 + 0xa8,*(undefined8 *)(param_1 + 0x98),
                              *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x28),
                              *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14),uVar5);
    if (*(int *)(param_1 + 0xf0) != 0) {
      OPENSSL_sk_pop(*(undefined8 *)(param_1 + 0x98));
    }
    if (iVar1 != 0) {
      if (iVar1 == -1) {
        iVar3 = 1;
        iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        if (iVar1 < 2) {
          return 1;
        }
        do {
          lVar2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar3);
          if ((*(uint *)(lVar2 + 0xd0) & 0x800) != 0) {
            *(int *)(param_1 + 0xac) = iVar3;
            *(longlong *)(param_1 + 0xb8) = lVar2;
            *(undefined4 *)(param_1 + 0xb0) = 0x2a;
            iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
            if (iVar1 == 0) {
              return 0;
            }
          }
          iVar3 = iVar3 + 1;
          iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
        } while (iVar3 < iVar1);
        return 1;
      }
      if (iVar1 == -2) {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        *(undefined4 *)(param_1 + 0xb0) = 0x2b;
                    /* WARNING: Could not recover jumptable at 0x000143cebcb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(param_1 + 0x38))(0,param_1);
        return uVar5;
      }
      if (iVar1 != 1) {
        ERR_put_error(0xb,0x91,0x44,"crypto\\x509\\x509_vfy.c",0x66b);
        return 0;
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x800) != 0) {
        *(undefined8 *)(param_1 + 0xb8) = 0;
        iVar1 = (**(code **)(param_1 + 0x38))(2,param_1);
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    uVar4 = 0x651;
  }
  else {
    uVar4 = 0x647;
  }
  ERR_put_error(0xb,0x91,0x41,"crypto\\x509\\x509_vfy.c",uVar4);
  *(undefined4 *)(param_1 + 0xb0) = 0x11;
  return 0;
}



// FUNCTION 143cebd30 check_revocation body=1010 status=ok
// SIG undefined check_revocation(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_revocation(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20;
  ulonglong local_b8;
  undefined4 local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  undefined8 local_a0;
  int local_98;
  int local_94;
  ulonglong local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ulonglong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cebd4c;
  uVar10 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar10 & 4) != 0) {
    local_a4 = 0;
    if ((uVar10 & 8) == 0) {
      if (*(longlong *)(param_1 + 0xd8) != 0) {
        return 1;
      }
    }
    else {
      local_a4 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      local_a4 = local_a4 + -1;
    }
    local_a8 = 0;
    if (-1 < local_a4) {
      do {
        *(int *)(param_1 + 0xac) = local_a8;
        local_b8 = 0;
        lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),local_a8);
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined8 *)(param_1 + 0xc0) = 0;
        *(undefined8 *)(param_1 + 0xd0) = 0;
        local_50 = lVar4;
        if ((*(uint *)(lVar4 + 0xd0) & 0x400) == 0) {
          local_ac = 0;
          while( true ) {
            iVar2 = local_ac;
            uVar9 = 0;
            if (*(code **)(param_1 + 0x58) != (code *)0x0) break;
            local_88 = 0;
            local_res8[0] = 0;
            local_60 = 0;
            local_90 = 0;
            local_80 = 0;
            local_58 = FVoicePacketImpl::GetSampleCounter(lVar4);
            uVar6 = *(undefined8 *)(param_1 + 0x18);
            uVar8 = *(undefined4 *)(param_1 + 0xd4);
            local_68 = *(undefined8 *)(param_1 + 0xb8);
            local_res20 = 0;
            local_78 = 0;
            local_70 = 0;
            local_res10[0] = uVar8;
            local_b0 = uVar8;
            local_a0 = uVar6;
            iVar2 = OPENSSL_sk_num(uVar6);
            if (iVar2 < 1) {
LAB_143cebf87:
              lVar4 = (**(code **)(param_1 + 0x80))(param_1,local_58);
              if ((lVar4 != 0) || (uVar11 = uVar9, uVar9 == 0)) {
                get_crl_sk(param_1,&local_90,&local_80,&local_88,local_res8,local_res10,lVar4);
                OPENSSL_sk_pop_free(lVar4,X509_CRL_free);
                uVar11 = local_90;
                uVar8 = local_res10[0];
                goto LAB_143cebfe2;
              }
            }
            else {
              iVar2 = 0;
              uVar11 = uVar9;
              do {
                uVar5 = OPENSSL_sk_value(uVar6,uVar9);
                local_res18[0] = uVar8;
                iVar1 = get_crl_score(param_1,&local_78,local_res18,uVar5,local_68);
                if ((iVar2 <= iVar1) && (iVar1 != 0)) {
                  if ((iVar1 == iVar2) && (uVar11 != 0)) {
                    uVar6 = USignificanceManager::GetWorld(uVar5);
                    uVar7 = USignificanceManager::GetWorld(uVar11);
                    iVar3 = ASN1_TIME_diff(&local_98,&local_94,uVar7,uVar6);
                    uVar6 = local_a0;
                    if ((iVar3 == 0) || ((local_98 < 1 && (local_94 < 1)))) goto LAB_143cebf10;
                  }
                  local_70 = local_78;
                  local_res20 = local_res18[0];
                  uVar11 = uVar5;
                  iVar2 = iVar1;
                }
LAB_143cebf10:
                uVar10 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar10;
                iVar1 = OPENSSL_sk_num(uVar6);
                uVar8 = local_b0;
              } while ((int)uVar10 < iVar1);
              uVar9 = local_60;
              if (uVar11 != 0) {
                X509_CRL_free(0);
                uVar8 = local_res20;
                local_88 = local_70;
                local_res10[0] = local_res20;
                local_res8[0] = iVar2;
                local_90 = uVar11;
                X509_CRL_up_ref(uVar11);
                X509_CRL_free(0);
                get_delta_sk(param_1,&local_80,local_res8,uVar11,uVar6);
                uVar9 = uVar11;
              }
              uVar11 = uVar9;
              if (iVar2 < 0x1c0) goto LAB_143cebf87;
LAB_143cebfe2:
              if (uVar11 == 0) goto LAB_143cec0c1;
            }
            *(undefined8 *)(param_1 + 0xc0) = local_88;
            *(undefined4 *)(param_1 + 0xd4) = uVar8;
            *(int *)(param_1 + 0xd0) = local_res8[0];
            uVar9 = local_80;
            lVar4 = local_50;
            iVar2 = local_ac;
            local_b8 = uVar11;
LAB_143cec018:
            *(ulonglong *)(param_1 + 200) = local_b8;
            iVar3 = (**(code **)(param_1 + 0x60))(param_1,local_b8);
            iVar1 = 0;
            if (iVar3 == 0) goto LAB_143cec0d8;
            if (uVar9 == 0) {
LAB_143cec061:
              iVar1 = (**(code **)(param_1 + 0x68))(param_1,local_b8,lVar4);
              if (iVar1 == 0) goto LAB_143cec0d8;
            }
            else {
              iVar3 = (**(code **)(param_1 + 0x60))(param_1,uVar9);
              iVar1 = 0;
              if ((iVar3 == 0) ||
                 (iVar1 = (**(code **)(param_1 + 0x68))(param_1,uVar9,lVar4), iVar1 == 0))
              goto LAB_143cec0d8;
              if (iVar1 != 2) goto LAB_143cec061;
            }
            X509_CRL_free(local_b8);
            X509_CRL_free(uVar9);
            iVar3 = *(int *)(param_1 + 0xd4);
            local_b8 = 0;
            if (iVar2 == iVar3) {
              *(undefined4 *)(param_1 + 0xb0) = 3;
              iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
              goto LAB_143cec0d6;
            }
            uVar9 = 0;
            local_ac = iVar3;
            if (iVar3 == 0x807f) goto LAB_143cec0d8;
          }
          iVar1 = (**(code **)(param_1 + 0x58))(param_1,&local_b8,lVar4);
          if (iVar1 != 0) goto LAB_143cec018;
LAB_143cec0c1:
          *(undefined4 *)(param_1 + 0xb0) = 3;
          iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
LAB_143cec0d6:
          uVar9 = 0;
LAB_143cec0d8:
          X509_CRL_free(local_b8);
          X509_CRL_free(uVar9);
          *(undefined8 *)(param_1 + 200) = 0;
          if (iVar1 == 0) {
            return 0;
          }
        }
        local_a8 = local_a8 + 1;
      } while (local_a8 <= local_a4);
    }
  }
  return 1;
}



// FUNCTION 143cec130 check_trust body=594 status=ok
// SIG undefined check_trust(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_trust(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar9;
  
  lVar1 = *(longlong *)(param_1 + 0xe8);
  uVar9 = param_2 & 0xffffffff;
  iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar11 = (int)param_2;
  if ((((lVar1 != 0) && ((*(byte *)(lVar1 + 0x28) & 5) != 0)) && (0 < iVar11)) &&
     ((iVar11 < iVar2 && (uVar4 = check_dane_issuer(param_1,uVar9), (int)uVar4 - 1U < 2)))) {
    return uVar4;
  }
  if (iVar11 < iVar2) {
    do {
      lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar9);
      iVar3 = X509_check_trust(lVar5,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
      if (iVar3 == 1) goto LAB_143cec350;
      if (iVar3 == 2) goto LAB_143cec2ea;
      uVar8 = (int)uVar9 + 1;
      uVar9 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar2);
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      return 3;
    }
  }
  else {
    if (iVar11 != iVar2) {
      return 3;
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      return 3;
    }
    uVar9 = 0;
    lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
    uVar8 = 0;
    uVar4 = FBackChannelConnection::GetSocket(lVar5);
    lVar6 = (**(code **)(param_1 + 0x78))(param_1,uVar4);
    if (lVar6 == 0) {
      return 3;
    }
    iVar2 = OPENSSL_sk_num(lVar6);
    uVar10 = uVar9;
    uVar7 = uVar9;
    if (0 < iVar2) {
      do {
        uVar8 = (uint)uVar10;
        uVar7 = OPENSSL_sk_value(lVar6,uVar10);
        iVar2 = X509_cmp(uVar7,lVar5);
        if (iVar2 == 0) break;
        uVar8 = uVar8 + 1;
        uVar10 = (ulonglong)uVar8;
        iVar2 = OPENSSL_sk_num(lVar6);
      } while ((int)uVar8 < iVar2);
    }
    iVar2 = OPENSSL_sk_num(lVar6);
    uVar10 = uVar9;
    if ((int)uVar8 < iVar2) {
      X509_up_ref(uVar7);
      uVar10 = uVar7;
    }
    OPENSSL_sk_pop_free(lVar6,X509_free);
    if (uVar10 == 0) {
      return 3;
    }
    iVar2 = X509_check_trust(uVar10,*(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x1c),0);
    if (iVar2 == 2) {
      X509_free(uVar10);
LAB_143cec2ea:
      *(int *)(param_1 + 0xac) = (int)uVar9;
      if (lVar5 == 0) {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),uVar9);
      }
      *(longlong *)(param_1 + 0xb8) = lVar5;
      *(undefined4 *)(param_1 + 0xb0) = 0x1c;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) {
        return 3;
      }
      return 2;
    }
    OPENSSL_sk_set(*(undefined8 *)(param_1 + 0x98),0,uVar10);
    X509_free(lVar5);
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
LAB_143cec350:
  if ((lVar1 != 0) && (iVar2 = OPENSSL_sk_num(*(undefined8 *)(lVar1 + 8)), 0 < iVar2)) {
    if (*(int *)(lVar1 + 0x30) < 0) {
      *(int *)(lVar1 + 0x30) = iVar11;
    }
    if (*(int *)(lVar1 + 0x2c) < 0) {
      return 3;
    }
  }
  return 1;
}



// FUNCTION 143cec390 crl_akid_check body=410 status=ok
// SIG undefined crl_akid_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void crl_akid_check(longlong param_1,longlong param_2,undefined8 *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  
  uVar3 = FUniqueNetIdString::GetBytes(param_2);
  iVar2 = *(int *)(param_1 + 0xac);
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar6 = iVar2 + 1;
  if (iVar2 == iVar1 + -1) {
    iVar6 = iVar2;
  }
  uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
  iVar2 = X509_check_akid(uVar4,*(undefined8 *)(param_2 + 0x80));
  if ((iVar2 == 0) && ((*param_4 & 0x20) != 0)) {
    *param_4 = *param_4 | 0x1c;
    *param_3 = uVar4;
  }
  else {
    iVar6 = iVar6 + 1;
    iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
    if (iVar6 < iVar2) {
      do {
        uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar6);
        uVar5 = FBackChannelConnection::GetSocket(uVar4);
        iVar2 = X509_NAME_cmp(uVar5,uVar3);
        if ((iVar2 == 0) &&
           (iVar2 = X509_check_akid(uVar4,*(undefined8 *)(param_2 + 0x80)), iVar2 == 0)) {
          *param_4 = *param_4 | 0xc;
          *param_3 = uVar4;
          return;
        }
        iVar6 = iVar6 + 1;
        iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
      } while (iVar6 < iVar2);
    }
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) != 0) {
      iVar6 = 0;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
      if (0 < iVar2) {
        do {
          uVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x10),iVar6);
          uVar5 = FBackChannelConnection::GetSocket(uVar4);
          iVar2 = X509_NAME_cmp(uVar5,uVar3);
          if ((iVar2 == 0) &&
             (iVar2 = X509_check_akid(uVar4,*(undefined8 *)(param_2 + 0x80)), iVar2 == 0)) {
            *param_3 = uVar4;
            *param_4 = *param_4 | 4;
            return;
          }
          iVar6 = iVar6 + 1;
          iVar2 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x10));
        } while (iVar6 < iVar2);
      }
    }
  }
  return;
}



// FUNCTION 143cec530 crl_crldp_check body=640 status=ok
// SIG undefined crl_crldp_check(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 crl_crldp_check(longlong param_1,longlong param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined8 uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  
  uVar1 = *(uint *)(param_2 + 0x90);
  if ((uVar1 & 0x10) == 0) {
    if ((*(byte *)(param_1 + 0xd0) & 0x10) == 0) {
      uVar1 = uVar1 & 8;
    }
    else {
      uVar1 = uVar1 & 4;
    }
    if (uVar1 == 0) {
      iVar11 = 0;
      *param_4 = *(uint *)(param_2 + 0x94);
      iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
      if (0 < iVar3) {
        do {
          puVar4 = (undefined8 *)OPENSSL_sk_value(*(undefined8 *)(param_1 + 0xf8),iVar11);
          uVar5 = FUniqueNetIdString::GetBytes(param_2);
          if (puVar4[2] == 0) {
            if ((param_3 & 0x20) != 0) {
LAB_143cec62b:
              if (*(undefined8 **)(param_2 + 0x88) == (undefined8 *)0x0) {
LAB_143cec67c:
                *param_4 = *param_4 & *(uint *)(puVar4 + 3);
                return 1;
              }
              piVar6 = (int *)*puVar4;
              piVar2 = (int *)**(undefined8 **)(param_2 + 0x88);
              if ((piVar6 == (int *)0x0) || (piVar2 == (int *)0x0)) goto LAB_143cec67c;
              if (*piVar6 == 1) {
                lVar10 = *(longlong *)(piVar6 + 4);
                if (lVar10 != 0) {
                  if (*piVar2 == 1) {
                    if ((*(longlong *)(piVar2 + 4) != 0) &&
                       (iVar3 = X509_NAME_cmp(lVar10), iVar3 == 0)) goto LAB_143cec67c;
                  }
                  else {
                    uVar5 = *(undefined8 *)(piVar2 + 2);
LAB_143cec6ad:
                    if (lVar10 == 0) goto LAB_143cec6f3;
                    iVar8 = 0;
                    iVar3 = OPENSSL_sk_num(uVar5);
                    if (0 < iVar3) {
                      do {
                        piVar6 = (int *)OPENSSL_sk_value(uVar5,iVar8);
                        if ((*piVar6 == 4) &&
                           (iVar3 = X509_NAME_cmp(lVar10,*(undefined8 *)(piVar6 + 2)), iVar3 == 0))
                        goto LAB_143cec67c;
                        iVar8 = iVar8 + 1;
                        iVar3 = OPENSSL_sk_num(uVar5);
                      } while (iVar8 < iVar3);
                    }
                  }
                }
              }
              else if (*piVar2 == 1) {
                lVar10 = *(longlong *)(piVar2 + 4);
                if (lVar10 != 0) {
                  uVar5 = *(undefined8 *)(piVar6 + 2);
                  goto LAB_143cec6ad;
                }
              }
              else {
LAB_143cec6f3:
                iVar8 = 0;
                iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar6 + 2));
                if (0 < iVar3) {
                  do {
                    uVar5 = OPENSSL_sk_value(*(undefined8 *)(piVar6 + 2),iVar8);
                    iVar9 = 0;
                    iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar2 + 2));
                    if (0 < iVar3) {
                      do {
                        uVar7 = OPENSSL_sk_value(*(undefined8 *)(piVar2 + 2),iVar9);
                        iVar3 = FUN_143d2d0b0(uVar5,uVar7);
                        if (iVar3 == 0) goto LAB_143cec67c;
                        iVar9 = iVar9 + 1;
                        iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar2 + 2));
                      } while (iVar9 < iVar3);
                    }
                    iVar8 = iVar8 + 1;
                    iVar3 = OPENSSL_sk_num(*(undefined8 *)(piVar6 + 2));
                  } while (iVar8 < iVar3);
                }
              }
            }
          }
          else {
            iVar8 = 0;
            iVar3 = OPENSSL_sk_num();
            if (0 < iVar3) {
              do {
                piVar6 = (int *)OPENSSL_sk_value(puVar4[2],iVar8);
                if ((*piVar6 == 4) &&
                   (iVar3 = X509_NAME_cmp(*(undefined8 *)(piVar6 + 2),uVar5), iVar3 == 0))
                goto LAB_143cec62b;
                iVar8 = iVar8 + 1;
                iVar3 = OPENSSL_sk_num(puVar4[2]);
              } while (iVar8 < iVar3);
            }
          }
          iVar11 = iVar11 + 1;
          iVar3 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0xf8));
        } while (iVar11 < iVar3);
      }
      if (((*(longlong **)(param_2 + 0x88) == (longlong *)0x0) ||
          (**(longlong **)(param_2 + 0x88) == 0)) && ((param_3 & 0x20) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cec7b0 crl_extension_match body=243 status=ok
// SIG undefined crl_extension_match(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 crl_extension_match(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar1 = X509_CRL_get_ext_d2i(param_1,param_3,0xffffffff);
  lVar5 = 0;
  lVar4 = lVar5;
  if (-1 < iVar1) {
    iVar2 = X509_CRL_get_ext_d2i(param_1,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = X509_CRL_get_ext_d2i(param_1,iVar1);
    lVar4 = X509_EXTENSION_get_data(uVar3);
  }
  iVar1 = X509_CRL_get_ext_d2i(param_2,param_3,0xffffffff);
  if (-1 < iVar1) {
    iVar2 = X509_CRL_get_ext_d2i(param_2,param_3,iVar1);
    if (iVar2 != -1) {
      return 0;
    }
    uVar3 = X509_CRL_get_ext_d2i(param_2,iVar1);
    lVar5 = X509_EXTENSION_get_data(uVar3);
  }
  if (lVar4 == 0) {
    if (lVar5 == 0) {
      return 1;
    }
  }
  else if ((lVar5 != 0) && (iVar1 = ASN1_OCTET_STRING_cmp(lVar4,lVar5), iVar1 == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cec8b0 dane_match body=801 status=ok
// SIG undefined dane_match(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * dane_match(longlong param_1,longlong param_2,int param_3)

{
  byte bVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 local_d0;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  int local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  longlong local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cec8c6;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  plVar2 = *(longlong **)(param_1 + 0xe8);
  puVar13 = (undefined1 *)0x0;
  uVar5 = 0x100;
  local_c8 = 0x100;
  local_bc = 0x100;
  local_c4 = 0x100;
  uVar4 = 5;
  if (param_3 == 0) {
    uVar4 = 10;
  }
  local_a0 = (undefined1 *)0x0;
  uVar16 = 0x100;
  local_c0 = 0;
  if (*(int *)(param_1 + 0x94) <= param_3) {
    uVar4 = 2 - (param_3 != 0);
  }
  local_b4 = uVar4 & 0xfffffffc;
  if (*(int *)((longlong)plVar2 + 0x2c) < 0) {
    local_b4 = uVar4;
  }
  puVar8 = puVar13;
  local_b0 = param_3;
  local_98 = param_2;
  if ((*(uint *)(plVar2 + 5) & local_b4) != 0) {
    puVar8 = (undefined1 *)OPENSSL_sk_num(plVar2[1]);
  }
  local_b8 = (uint)puVar8;
  puVar12 = puVar13;
  puVar14 = puVar13;
  puVar15 = puVar13;
  do {
    if ((int)puVar8 <= (int)puVar14) {
LAB_143cecb8e:
      CRYPTO_free(puVar12,"crypto\\x509\\x509_vfy.c",0xa89);
      return puVar13;
    }
    pbVar9 = (byte *)OPENSSL_sk_value(plVar2[1],puVar14);
    bVar1 = *pbVar9;
    if ((local_b4 >> (bVar1 & 0x1f) & 1) != 0) {
      if (bVar1 != uVar5) {
        uVar16 = 0x100;
        local_c8 = (uint)bVar1;
        local_c4 = (uint)*(byte *)((ulonglong)pbVar9[2] + *(longlong *)(*plVar2 + 8));
      }
      bVar1 = pbVar9[1];
      if (bVar1 == local_bc) {
        bVar1 = pbVar9[2];
        uVar11 = (ulonglong)bVar1;
        if ((bVar1 != 0) &&
           (uVar5 = local_c8, *(byte *)(*(longlong *)(*plVar2 + 8) + (ulonglong)bVar1) < local_c4))
        goto LAB_143cecaff;
      }
      else {
        local_bc = (uint)bVar1;
        CRYPTO_free(puVar12,"crypto\\x509\\x509_vfy.c",0xa4c);
        local_a8 = (undefined1 *)0x0;
        if (bVar1 == 0) {
          uVar5 = i2d_X509(local_98,&local_a8);
        }
        else {
          if (bVar1 != 1) {
            uVar7 = 0x9ef;
            uVar10 = 0x85;
            goto LAB_143cecb23;
          }
          uVar10 = AAIController::GetPerceptionComponent(local_98);
          uVar5 = i2d_X509_PUBKEY(uVar10,&local_a8);
        }
        puVar15 = (undefined1 *)(ulonglong)uVar5;
        if (((int)uVar5 < 0) || (local_a8 == (undefined1 *)0x0)) {
          uVar7 = 0x9f4;
          uVar10 = 0x41;
LAB_143cecb23:
          local_d8 = CONCAT44(local_d8._4_4_,uVar7);
          ERR_put_error(0xb,0x6b,uVar10,"crypto\\x509\\x509_vfy.c");
          return (undefined1 *)0xffffffff;
        }
        uVar16 = 0x100;
        uVar11 = (ulonglong)pbVar9[2];
        local_c4 = (uint)*(byte *)(*(longlong *)(*plVar2 + 8) + uVar11);
        puVar12 = local_a8;
      }
      puVar8 = local_a0;
      if ((int)uVar11 != (int)uVar16) {
        local_c0 = (uint)puVar15;
        lVar3 = *(longlong *)(*(longlong *)*plVar2 + uVar11 * 8);
        puVar8 = puVar12;
        uVar16 = uVar11;
        local_a0 = puVar12;
        if (lVar3 != 0) {
          local_d0 = 0;
          local_d8 = lVar3;
          local_a0 = local_88;
          iVar6 = EVP_Digest(puVar12,puVar15,local_88,&local_c0);
          puVar8 = local_88;
          if (iVar6 == 0) {
            puVar13 = (undefined1 *)0xffffffff;
            goto LAB_143cecb8e;
          }
        }
      }
      uVar5 = local_c8;
      if (((ulonglong)local_c0 == *(ulonglong *)(pbVar9 + 0x10)) &&
         (iVar6 = _guard_xfg_dispatch_icall_nop(puVar8,*(void **)(pbVar9 + 8),(ulonglong)local_c0),
         uVar5 = local_c8, iVar6 == 0)) {
        if (local_c8 - 2 < 2) {
          puVar13 = (undefined1 *)0x1;
        }
        else if (-1 < *(int *)((longlong)plVar2 + 0x2c)) goto LAB_143cecb8e;
        *(int *)((longlong)plVar2 + 0x2c) = local_b0;
        plVar2[3] = (longlong)pbVar9;
        CRYPTO_free(plVar2[4],"crypto\\x509\\x509_vfy.c",0xa80);
        plVar2[4] = local_98;
        X509_up_ref(local_98);
        goto LAB_143cecb8e;
      }
    }
LAB_143cecaff:
    puVar8 = (undefined1 *)(ulonglong)local_b8;
    puVar14 = (undefined1 *)(ulonglong)((int)puVar14 + 1);
  } while( true );
}



// FUNCTION 143cecbe0 find_issuer body=226 status=ok
// SIG undefined find_issuer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 find_issuer(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  uVar4 = 0;
  iVar7 = 0;
  iVar2 = OPENSSL_sk_num(param_2);
  if (0 < iVar2) {
    do {
      uVar3 = OPENSSL_sk_value(param_2,iVar7);
      iVar2 = (**(code **)(param_1 + 0x48))(param_1,param_3,uVar3);
      if (iVar2 != 0) {
        uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
        if ((uVar1 & 2) == 0) {
          if ((uVar1 >> 0x15 & 1) != 0) {
            return uVar3;
          }
          lVar6 = 0;
        }
        else {
          lVar6 = *(longlong *)(param_1 + 0x20) + 8;
        }
        uVar4 = UNiagaraSystem::GetEffectType(uVar3);
        iVar2 = X509_cmp_time(uVar4,lVar6);
        uVar4 = uVar3;
        if (iVar2 < 0) {
          uVar5 = FWmfMediaPlayer::GetSamples(uVar3);
          iVar2 = X509_cmp_time(uVar5,lVar6);
          if (0 < iVar2) {
            return uVar3;
          }
        }
      }
      iVar7 = iVar7 + 1;
      iVar2 = OPENSSL_sk_num(param_2);
    } while (iVar7 < iVar2);
  }
  return uVar4;
}



// FUNCTION 143ceccd0 get_crl_score body=405 status=ok
// SIG undefined get_crl_score(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint get_crl_score(longlong param_1,undefined8 param_2,uint *param_3,longlong param_4,
                  undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint local_res18 [4];
  
  uVar8 = *param_3;
  lVar7 = 0;
  uVar6 = 0;
  local_res18[0] = 0;
  uVar2 = *(uint *)(param_4 + 0x90);
  if ((uVar2 & 2) != 0) {
    return 0;
  }
  if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x1000) == 0) {
    if ((uVar2 & 0x60) != 0) {
      return 0;
    }
  }
  else if ((uVar2 & 0x40) == 0) {
    if (*(longlong *)(param_4 + 0xa0) != 0) {
      return 0;
    }
  }
  else if ((*(uint *)(param_4 + 0x94) & ~uVar8) == 0) {
    return 0;
  }
  uVar3 = FUniqueNetIdString::GetBytes(param_4);
  uVar4 = FVoicePacketImpl::GetSampleCounter(param_5);
  iVar1 = X509_NAME_cmp(uVar4,uVar3);
  if (iVar1 == 0) {
    uVar6 = 0x20;
    local_res18[0] = 0x20;
  }
  else if ((*(byte *)(param_4 + 0x90) & 0x20) == 0) {
    return 0;
  }
  if ((*(uint *)(param_4 + 0x7c) & 0x200) == 0) {
    uVar6 = uVar6 | 0x100;
    local_res18[0] = uVar6;
  }
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar2 & 2) == 0) {
    if ((uVar2 >> 0x15 & 1) == 0) goto LAB_143cecdbd;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x20) + 8;
LAB_143cecdbd:
    uVar3 = USignificanceManager::GetWorld(param_4);
    uVar2 = X509_cmp_time(uVar3,lVar7);
    if (uVar2 < 0x80000000) goto LAB_143cece0c;
    lVar5 = FNiagaraEmitterHandle::GetInstance(param_4);
    if (lVar5 != 0) {
      uVar3 = FNiagaraEmitterHandle::GetInstance(param_4);
      iVar1 = X509_cmp_time(uVar3,lVar7);
      if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
      goto LAB_143cece0c;
    }
  }
  local_res18[0] = uVar6 | 0x40;
LAB_143cece0c:
  crl_akid_check(param_1,param_4,param_2,local_res18);
  uVar2 = local_res18[0];
  if ((local_res18[0] & 4) == 0) {
    return 0;
  }
  iVar1 = crl_crldp_check(param_5,param_4,local_res18[0],local_res18);
  if (iVar1 != 0) {
    if ((local_res18[0] & ~uVar8) == 0) {
      return 0;
    }
    uVar8 = uVar8 | local_res18[0];
    uVar2 = uVar2 | 0x80;
  }
  *param_3 = uVar8;
  return uVar2;
}



// FUNCTION 143cece70 get_crl_sk body=469 status=ok
// SIG undefined get_crl_sk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool get_crl_sk(longlong param_1,ulonglong *param_2,undefined8 *param_3,undefined8 *param_4,
               int *param_5,uint *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint local_78;
  uint local_74;
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar4 = *(undefined8 *)(param_1 + 0xb8);
  uVar6 = 0;
  local_78 = 0;
  iVar10 = *param_5;
  local_60 = 0;
  local_68 = 0;
  local_58 = uVar4;
  iVar1 = OPENSSL_sk_num(param_7);
  uVar8 = uVar6;
  uVar9 = uVar6;
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_7,uVar8);
      local_74 = *param_6;
      iVar1 = get_crl_score(param_1,&local_60,&local_74,uVar3,uVar4);
      if ((iVar10 <= iVar1) && (iVar1 != 0)) {
        if ((iVar1 == iVar10) && (uVar9 != 0)) {
          uVar4 = USignificanceManager::GetWorld(uVar3);
          uVar5 = USignificanceManager::GetWorld(uVar9);
          iVar2 = ASN1_TIME_diff(&local_70,&local_6c,uVar5,uVar4);
          if ((iVar2 == 0) || ((local_70 < 1 && (local_6c < 1)))) {
            uVar6 = (ulonglong)local_78;
            goto LAB_143cecf98;
          }
        }
        uVar6 = (ulonglong)local_74;
        local_68 = local_60;
        local_78 = local_74;
        uVar9 = uVar3;
        iVar10 = iVar1;
      }
LAB_143cecf98:
      uVar5 = local_68;
      uVar7 = (int)uVar8 + 1;
      iVar1 = OPENSSL_sk_num(param_7);
      uVar8 = (ulonglong)uVar7;
      uVar4 = local_58;
    } while ((int)uVar7 < iVar1);
    if (uVar9 != 0) {
      X509_CRL_free(*param_2);
      *param_2 = uVar9;
      *param_4 = uVar5;
      *param_5 = iVar10;
      *param_6 = (uint)uVar6;
      X509_CRL_up_ref(uVar9);
      X509_CRL_free(*param_3);
      *param_3 = 0;
      get_delta_sk(param_1,param_3,param_5,uVar9,param_7);
    }
  }
  return 0x1bf < iVar10;
}



// FUNCTION 143ced050 get_delta_sk body=463 status=ok
// SIG undefined get_delta_sk(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void get_delta_sk(longlong param_1,longlong *param_2,uint *param_3,longlong param_4,
                 undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar8;
  ulonglong uVar7;
  
  if (((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x2000) != 0) &&
     (((*(uint *)(*(longlong *)(param_1 + 0xb8) + 0xd0) | *(uint *)(param_4 + 0x7c)) >> 0xc & 1) !=
      0)) {
    uVar8 = 0;
    iVar1 = OPENSSL_sk_num(param_5);
    uVar7 = uVar8;
    if (0 < iVar1) {
      do {
        lVar2 = OPENSSL_sk_value(param_5,uVar7);
        if ((*(longlong *)(lVar2 + 0xa0) != 0) && (*(longlong *)(param_4 + 0x98) != 0)) {
          uVar3 = FUniqueNetIdString::GetBytes(lVar2);
          uVar4 = FUniqueNetIdString::GetBytes(param_4);
          iVar1 = X509_NAME_cmp(uVar4,uVar3);
          if (((iVar1 == 0) &&
              (((iVar1 = crl_extension_match(lVar2,param_4,0x5a), iVar1 != 0 &&
                (iVar1 = crl_extension_match(lVar2,param_4,0x302), iVar1 != 0)) &&
               (iVar1 = ASN1_INTEGER_cmp(*(undefined8 *)(lVar2 + 0xa0),
                                         *(undefined8 *)(param_4 + 0x98)), iVar1 < 1)))) &&
             (iVar1 = ASN1_INTEGER_cmp(*(undefined8 *)(lVar2 + 0x98),*(undefined8 *)(param_4 + 0x98)
                                      ), 0 < iVar1)) {
            uVar6 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
            if ((uVar6 & 2) == 0) {
              if ((uVar6 >> 0x15 & 1) == 0) goto LAB_143ced1be;
            }
            else {
              uVar8 = *(longlong *)(param_1 + 0x20) + 8;
LAB_143ced1be:
              uVar3 = USignificanceManager::GetWorld(lVar2);
              uVar6 = X509_cmp_time(uVar3,uVar8);
              if (uVar6 < 0x80000000) goto LAB_143ced20e;
              lVar5 = FNiagaraEmitterHandle::GetInstance(lVar2);
              if (lVar5 != 0) {
                uVar3 = FNiagaraEmitterHandle::GetInstance(lVar2);
                iVar1 = X509_cmp_time(uVar3,uVar8);
                if ((iVar1 == 0) || ((iVar1 < 0 && ((*(byte *)(param_1 + 0xd0) & 2) == 0))))
                goto LAB_143ced20e;
              }
            }
            *param_3 = *param_3 | 2;
LAB_143ced20e:
            X509_CRL_up_ref(lVar2);
            *param_2 = lVar2;
            return;
          }
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        iVar1 = OPENSSL_sk_num(param_5);
      } while ((int)uVar6 < iVar1);
    }
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143ced220 internal_verify body=492 status=ok
// SIG undefined internal_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 internal_verify(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(param_1 + 0x98));
  iVar7 = iVar1 + -1;
  lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
  if (*(int *)(param_1 + 0xf0) == 0) {
    iVar2 = (**(code **)(param_1 + 0x48))(param_1,lVar3,lVar3);
    lVar6 = lVar3;
    if (iVar2 != 0) goto LAB_143ced2f8;
    if ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80000) == 0) {
      if (0 < iVar7) {
        iVar7 = iVar1 + -2;
        *(int *)(param_1 + 0xac) = iVar7;
        goto LAB_143ced2e7;
      }
      *(undefined4 *)(param_1 + 0xac) = 0;
      if (lVar3 == 0) {
        lVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),0);
      }
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(undefined4 *)(param_1 + 0xb0) = 0x15;
      uVar4 = (**(code **)(param_1 + 0x38))(0,param_1);
      return uVar4;
    }
  }
  else {
    lVar6 = 0;
  }
LAB_143ced3a8:
  do {
    do {
      iVar1 = x509_check_cert_time(param_1,lVar3,iVar7);
      if (iVar1 == 0) {
        return 0;
      }
      *(longlong *)(param_1 + 0xc0) = lVar6;
      *(longlong *)(param_1 + 0xb8) = lVar3;
      *(int *)(param_1 + 0xac) = iVar7;
      iVar1 = (**(code **)(param_1 + 0x38))(1,param_1);
      if (iVar1 == 0) {
        return 0;
      }
      iVar7 = iVar7 + -1;
      if (-1 < iVar7) {
LAB_143ced2e7:
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
        lVar6 = lVar3;
        lVar3 = lVar5;
      }
LAB_143ced2f8:
      if (iVar7 < 0) {
        return 1;
      }
    } while ((lVar3 == lVar6) && ((*(uint *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x4000) == 0));
    lVar5 = X509_get0_pubkey(lVar6);
    if (lVar5 == 0) {
      iVar1 = iVar7 + 1;
      if (lVar6 == lVar3) {
        iVar1 = iVar7;
      }
      *(int *)(param_1 + 0xac) = iVar1;
      if (lVar6 == 0) {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98));
        *(undefined4 *)(param_1 + 0xb0) = 6;
      }
      else {
        *(undefined4 *)(param_1 + 0xb0) = 6;
        lVar5 = lVar6;
      }
    }
    else {
      iVar1 = X509_verify(lVar3,lVar5);
      if (0 < iVar1) goto LAB_143ced3a8;
      *(int *)(param_1 + 0xac) = iVar7;
      lVar5 = lVar3;
      if (lVar3 == 0) {
        lVar5 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),iVar7);
      }
      *(undefined4 *)(param_1 + 0xb0) = 7;
    }
    *(longlong *)(param_1 + 0xb8) = lVar5;
    iVar1 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar1 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143ced410 verify_chain body=316 status=ok
// SIG undefined verify_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong verify_chain(longlong param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = build_chain();
  uVar4 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = check_chain_extensions(param_1);
    uVar4 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      uVar1 = check_auth_level(param_1);
      uVar4 = (ulonglong)uVar1;
      if (uVar1 != 0) {
        uVar1 = check_id(param_1);
        uVar4 = (ulonglong)uVar1;
      }
    }
  }
  X509_get_pubkey_parameters(0,*(undefined8 *)(param_1 + 0x98));
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  iVar2 = (**(code **)(param_1 + 0x50))(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = X509_chain_check_suiteb
                    (param_1 + 0xac,0,*(undefined8 *)(param_1 + 0x98),
                     *(undefined4 *)(*(longlong *)(param_1 + 0x20) + 0x14));
  if (iVar2 != 0) {
    uVar3 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0xac));
    *(undefined8 *)(param_1 + 0xb8) = uVar3;
    *(int *)(param_1 + 0xb0) = iVar2;
    iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
    if (iVar2 == 0) {
      return 0;
    }
  }
  if (*(code **)(param_1 + 0x30) == (code *)0x0) {
    iVar2 = internal_verify(param_1);
  }
  else {
    iVar2 = (**(code **)(param_1 + 0x30))();
  }
  if ((((iVar2 != 0) && (iVar2 = check_name_constraints(param_1), iVar2 != 0)) &&
      (iVar2 = X509v3_asid_validate_path(param_1), iVar2 != 0)) &&
     (uVar4 = X509v3_addr_validate_path(param_1), (int)uVar4 != 0)) {
    if ((*(byte *)(*(longlong *)(param_1 + 0x20) + 0x14) & 0x80) != 0) {
      uVar4 = (**(code **)(param_1 + 0x70))(param_1);
    }
    return uVar4;
  }
  return 0;
}



// FUNCTION 143ced550 x509_check_cert_time body=394 status=ok
// SIG undefined x509_check_cert_time(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_check_cert_time(longlong param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x20) + 0x14);
  if ((uVar1 & 2) == 0) {
    if ((uVar1 >> 0x15 & 1) == 0) {
      lVar5 = 0;
      goto LAB_143ced594;
    }
LAB_143ced6c0:
    uVar3 = 1;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x20) + 8;
LAB_143ced594:
    uVar3 = UNiagaraSystem::GetEffectType(param_2);
    iVar2 = X509_cmp_time(uVar3,lVar5);
    if ((iVar2 < 0) || (-1 < param_3)) {
      if (iVar2 == 0) {
        *(int *)(param_1 + 0xac) = param_3;
        lVar4 = param_2;
        if (param_2 == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 0xd;
        uVar3 = (**(code **)(param_1 + 0x38))(0,param_1);
        if ((int)uVar3 == 0) {
          return uVar3;
        }
      }
      else if (0 < iVar2) {
        *(int *)(param_1 + 0xac) = param_3;
        lVar4 = param_2;
        if (param_2 == 0) {
          lVar4 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(longlong *)(param_1 + 0xb8) = lVar4;
        *(undefined4 *)(param_1 + 0xb0) = 9;
        iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
        if (iVar2 == 0) goto LAB_143ced6bc;
      }
      uVar3 = FWmfMediaPlayer::GetSamples(param_2);
      iVar2 = X509_cmp_time(uVar3,lVar5);
      if (iVar2 < 1) {
        if (param_3 < 0) goto LAB_143ced6bc;
        if (iVar2 != 0) goto LAB_143ced681;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 0xe;
      }
      else {
LAB_143ced681:
        if (-1 < iVar2) goto LAB_143ced6c0;
        *(int *)(param_1 + 0xac) = param_3;
        if (param_2 == 0) {
          param_2 = OPENSSL_sk_value(*(undefined8 *)(param_1 + 0x98),param_3);
        }
        *(undefined4 *)(param_1 + 0xb0) = 10;
      }
      *(longlong *)(param_1 + 0xb8) = param_2;
      iVar2 = (**(code **)(param_1 + 0x38))(0,param_1);
      if (iVar2 != 0) goto LAB_143ced6c0;
    }
LAB_143ced6bc:
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143ced6e0 pubkey_cb body=121 status=ok
// SIG undefined pubkey_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 pubkey_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  
  if (param_1 == 3) {
    EVP_PKEY_free(*(undefined8 *)(*param_2 + 0x10));
    return 1;
  }
  if (param_1 == 5) {
    lVar1 = *param_2;
    EVP_PKEY_free(*(undefined8 *)(lVar1 + 0x10));
    ERR_set_mark();
    iVar2 = x509_pubkey_decode(lVar1 + 0x10,lVar1);
    if (iVar2 == -1) {
      return 0;
    }
    ERR_pop_to_mark();
  }
  return 1;
}



// FUNCTION 143ced760 X509_PUBKEY_free body=29 status=ok
// SIG undefined X509_PUBKEY_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_PUBKEY_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d57c10);
  return;
}



// FUNCTION 143ced780 X509_PUBKEY_get body=151 status=ok
// SIG undefined X509_PUBKEY_get(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PUBKEY_get(longlong param_1)

{
  longlong lVar1;
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x10);
    if (lVar1 != 0) {
      EVP_PKEY_up_ref(lVar1);
      return lVar1;
    }
    x509_pubkey_decode(local_res8,param_1);
    lVar1 = local_res8[0];
    if (local_res8[0] != 0) {
      ERR_put_error(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa1);
      EVP_PKEY_free(lVar1);
    }
    return 0;
  }
  return 0;
}



// FUNCTION 143ced820 X509_PUBKEY_get0 body=113 status=ok
// SIG undefined X509_PUBKEY_get0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong X509_PUBKEY_get0(longlong param_1)

{
  longlong local_res8 [4];
  
  local_res8[0] = 0;
  if ((param_1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      return *(longlong *)(param_1 + 0x10);
    }
    x509_pubkey_decode(local_res8,param_1);
    if (local_res8[0] != 0) {
      ERR_put_error(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa1);
      EVP_PKEY_free(local_res8[0]);
    }
  }
  return 0;
}



// FUNCTION 143ced8a0 X509_PUBKEY_get0_param body=61 status=ok
// SIG undefined X509_PUBKEY_get0_param(void)

undefined8
X509_PUBKEY_get0_param
          (undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4,
          undefined8 *param_5)

{
  if (param_1 != (undefined8 *)0x0) {
    *param_1 = *(undefined8 *)*param_5;
  }
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_5[1] + 8);
    *param_3 = *(undefined4 *)param_5[1];
  }
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = *param_5;
  }
  return 1;
}



// FUNCTION 143ced8f0 X509_PUBKEY_set body=251 status=ok
// SIG undefined X509_PUBKEY_set(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_PUBKEY_set(longlong *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143ced900;
  if (param_1 == (longlong *)0x0) {
    return 0;
  }
  lVar3 = ASN1_item_new(&DAT_145d57c10);
  if (lVar3 != 0) {
    if (*(longlong *)(param_2 + 0x10) == 0) {
      uVar5 = 0x51;
      uVar4 = 0x6f;
    }
    else {
      pcVar1 = *(code **)(*(longlong *)(param_2 + 0x10) + 0x28);
      if (pcVar1 == (code *)0x0) {
        uVar5 = 0x4d;
        uVar4 = 0x7c;
      }
      else {
        iVar2 = (*pcVar1)(lVar3,param_2);
        if (iVar2 != 0) {
          ASN1_item_free(*param_1,&DAT_145d57c10);
          *param_1 = lVar3;
          *(longlong *)(lVar3 + 0x10) = param_2;
          EVP_PKEY_up_ref(param_2);
          return 1;
        }
        uVar5 = 0x49;
        uVar4 = 0x7e;
      }
    }
    ERR_put_error(0xb,0x78,uVar4,"crypto\\x509\\x_pubkey.c",uVar5,uVar6);
  }
  ASN1_item_free(lVar3,&DAT_145d57c10);
  return 0;
}



// FUNCTION 143ced9f0 X509_PUBKEY_set0_param body=127 status=ok
// SIG undefined X509_PUBKEY_set0_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_PUBKEY_set0_param(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong in_stack_00000028;
  undefined4 in_stack_00000030;
  
  uVar1 = X509_ALGOR_set0(*param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  if (in_stack_00000028 != 0) {
    CRYPTO_free(*(undefined8 *)(param_1[1] + 8),"crypto\\x509\\x_pubkey.c",0x158);
    *(longlong *)(param_1[1] + 8) = in_stack_00000028;
    *(undefined4 *)param_1[1] = in_stack_00000030;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) & 0xfffffff0;
    *(uint *)(param_1[1] + 0x10) = *(uint *)(param_1[1] + 0x10) | 8;
  }
  return 1;
}



// FUNCTION 143ceda70 d2i_PUBKEY body=244 status=ok
// SIG undefined d2i_PUBKEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_PUBKEY(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res10 [2];
  undefined8 local_res20;
  undefined8 uVar3;
  
  uVar3 = 0x143ceda83;
  local_res20 = *param_2;
  lVar1 = ASN1_item_d2i(0,&local_res20,param_3,&DAT_145d57c10);
  if (lVar1 == 0) {
    return 0;
  }
  local_res10[0] = 0;
  if (*(longlong *)(lVar1 + 8) != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    if (lVar2 != 0) {
      EVP_PKEY_up_ref(lVar2);
      goto LAB_143cedb17;
    }
    x509_pubkey_decode(local_res10,lVar1);
    lVar2 = local_res10[0];
    if (local_res10[0] != 0) {
      ERR_put_error(0xb,0x77,0x44,"crypto\\x509\\x_pubkey.c",0xa1,uVar3);
      EVP_PKEY_free(lVar2);
    }
  }
  lVar2 = 0;
LAB_143cedb17:
  ASN1_item_free(lVar1,&DAT_145d57c10);
  if (lVar2 == 0) {
    return 0;
  }
  *param_2 = local_res20;
  if (param_1 != (longlong *)0x0) {
    EVP_PKEY_free(*param_1);
    *param_1 = lVar2;
  }
  return lVar2;
}



// FUNCTION 143cedb70 i2d_X509_PUBKEY body=29 status=ok
// SIG undefined i2d_X509_PUBKEY(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509_PUBKEY(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d57c10);
  return;
}



// FUNCTION 143cedb90 x509_pubkey_decode body=252 status=ok
// SIG undefined x509_pubkey_decode(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 x509_pubkey_decode(longlong *param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143cedba5;
  lVar4 = EVP_PKEY_new();
  if (lVar4 == 0) {
    ERR_put_error(0xb,0x94,0x41,"crypto\\x509\\x_pubkey.c",0x6c,uVar6);
    return 0xffffffff;
  }
  uVar2 = OBJ_obj2nid(*(undefined8 *)*param_2);
  iVar3 = EVP_PKEY_set_type(lVar4,uVar2);
  if (iVar3 == 0) {
    uVar2 = 0x71;
    uVar5 = 0x6f;
  }
  else {
    pcVar1 = *(code **)(*(longlong *)(lVar4 + 0x10) + 0x20);
    if (pcVar1 == (code *)0x0) {
      uVar2 = 0x80;
      uVar5 = 0x7c;
    }
    else {
      iVar3 = (*pcVar1)(lVar4,param_2);
      if (iVar3 != 0) {
        *param_1 = lVar4;
        return 1;
      }
      uVar2 = 0x7c;
      uVar5 = 0x7d;
    }
  }
  ERR_put_error(0xb,0x94,uVar5,"crypto\\x509\\x_pubkey.c",uVar2,uVar6);
  EVP_PKEY_free(lVar4);
  return 0;
}



// FUNCTION 143cedc90 X509_CINF_it body=8 status=ok
// SIG undefined X509_CINF_it(void)

undefined * X509_CINF_it(void)

{
  return &DAT_145d57e10;
}



// FUNCTION 143cedca0 x509_cb body=269 status=ok
// SIG undefined x509_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 x509_cb(int param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_2;
  if (param_1 == 1) {
    *(undefined8 *)(lVar1 + 200) = 0xffffffffffffffff;
    *(undefined4 *)(lVar1 + 0xd0) = 0;
    *(undefined8 *)(lVar1 + 0xe0) = 0;
    *(undefined8 *)(lVar1 + 0xe8) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0xf8) = 0;
    uVar2 = CRYPTO_new_ex_data(3,lVar1,lVar1 + 0xc0);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
  }
  else if (param_1 == 3) {
    CRYPTO_free_ex_data(3,lVar1,lVar1 + 0xc0);
    FUN_143d34be0(*(undefined8 *)(lVar1 + 0x138));
    ASN1_BIT_STRING_free(*(undefined8 *)(lVar1 + 0xe0));
    AUTHORITY_KEYID_free(*(undefined8 *)(lVar1 + 0xe8));
    FUN_143d35630(*(undefined8 *)(lVar1 + 0xf8));
    policy_cache_free(*(undefined8 *)(lVar1 + 0xf0));
    GENERAL_NAMES_free(*(undefined8 *)(lVar1 + 0x100));
    FUN_143d2d850(*(undefined8 *)(lVar1 + 0x108));
    OPENSSL_sk_pop_free(*(undefined8 *)(lVar1 + 0x110),FUN_143d32060);
    FUN_143d30c50(*(undefined8 *)(lVar1 + 0x118));
  }
  return 1;
}



// FUNCTION 143ceddb0 X509_dup body=32 status=ok
// SIG undefined X509_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_dup(undefined8 param_1)

{
  ASN1_item_dup(&DAT_145d57ea0,param_1);
  return;
}



// FUNCTION 143ceddd0 X509_free body=29 status=ok
// SIG undefined X509_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_free(undefined8 param_1)

{
  ASN1_item_free(param_1,&DAT_145d57ea0);
  return;
}



// FUNCTION 143ceddf0 X509_get0_signature body=31 status=ok
// SIG undefined X509_get0_signature(void)

void X509_get0_signature(longlong *param_1,longlong *param_2,longlong param_3)

{
  if (param_1 != (longlong *)0x0) {
    *param_1 = param_3 + 0x90;
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = param_3 + 0x80;
  }
  return;
}



// FUNCTION 143cede10 X509_get_ex_data body=29 status=ok
// SIG undefined X509_get_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_ex_data(longlong param_1)

{
  CRYPTO_get_ex_data(param_1 + 0xc0);
  return;
}



// FUNCTION 143cede30 X509_get_signature_nid body=29 status=ok
// SIG undefined X509_get_signature_nid(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_signature_nid(longlong param_1)

{
  OBJ_obj2nid(*(undefined8 *)(param_1 + 0x80));
  return;
}



// FUNCTION 143cede50 X509_it body=8 status=ok
// SIG undefined X509_it(void)

undefined * X509_it(void)

{
  return &DAT_145d57ea0;
}



// FUNCTION 143cede60 X509_set_ex_data body=29 status=ok
// SIG undefined X509_set_ex_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_set_ex_data(longlong param_1)

{
  CRYPTO_set_ex_data(param_1 + 0xc0);
  return;
}



// FUNCTION 143cede80 d2i_X509 body=29 status=ok
// SIG undefined d2i_X509(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void d2i_X509(void)

{
  ASN1_item_d2i();
  return;
}



// FUNCTION 143cedea0 d2i_X509_AUX body=192 status=ok
// SIG undefined d2i_X509_AUX(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong d2i_X509_AUX(longlong *param_1,int *param_2,undefined8 param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res8;
  
  local_res8 = *(undefined8 *)param_2;
  bVar1 = false;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    bVar1 = true;
  }
  lVar2 = ASN1_item_d2i(param_1,&local_res8,param_3,&DAT_145d57ea0);
  if (lVar2 != 0) {
    iVar4 = (int)param_3 + (*param_2 - (int)local_res8);
    if ((iVar4 < 1) || (lVar3 = d2i_X509_CERT_AUX(lVar2 + 0x138,&local_res8,iVar4), lVar3 != 0)) {
      *(undefined8 *)param_2 = local_res8;
      return lVar2;
    }
    if ((bVar1) && (ASN1_item_free(lVar2,&DAT_145d57ea0), param_1 != (longlong *)0x0)) {
      *param_1 = 0;
    }
  }
  return 0;
}



// FUNCTION 143cedf60 i2d_X509 body=29 status=ok
// SIG undefined i2d_X509(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_X509(undefined8 param_1,undefined8 param_2)

{
  ASN1_item_i2d(param_1,param_2,&DAT_145d57ea0);
  return;
}



// FUNCTION 143cedf80 i2d_re_X509_tbs body=36 status=ok
// SIG undefined i2d_re_X509_tbs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void i2d_re_X509_tbs(longlong param_1,undefined8 param_2)

{
  *(undefined4 *)(param_1 + 0x7c) = 1;
  ASN1_item_i2d(param_1,param_2,&DAT_145d57e10);
  return;
}



// FUNCTION 143cedfb0 X509_NAME_oneline body=975 status=ok
// SIG undefined X509_NAME_oneline(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * X509_NAME_oneline(undefined8 *param_1,char *param_2,int param_3)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 *_Src;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  byte *pbVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  char *pcVar20;
  ulonglong uVar21;
  int iVar22;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  int local_c8;
  ulonglong local_c0;
  char *local_b8;
  undefined8 *local_b0;
  int local_a8 [4];
  undefined1 local_98 [80];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cedfca;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar5 = 0;
  local_b8 = param_2;
  local_b0 = param_1;
  if (param_2 == (char *)0x0) {
    lVar5 = BUF_MEM_new();
    if (lVar5 != 0) {
      param_3 = 200;
      lVar6 = BUF_MEM_grow(lVar5,200);
      if (lVar6 != 0) {
        **(undefined1 **)(lVar5 + 8) = 0;
        goto LAB_143cee034;
      }
    }
LAB_143cee33e:
    local_d8 = 0xb1;
    uVar19 = 0x41;
LAB_143cee35b:
    ERR_put_error(0xb,0x74,uVar19,"crypto\\x509\\x509_obj.c");
    BUF_MEM_free(lVar5);
  }
  else if (param_3 != 0) {
LAB_143cee034:
    if (param_1 == (undefined8 *)0x0) {
      if (lVar5 != 0) {
        param_2 = *(char **)(lVar5 + 8);
        CRYPTO_free(lVar5,"crypto\\x509\\x509_obj.c",0x35);
      }
      strncpy(param_2,"NO X509_NAME",(longlong)param_3);
      param_2[(longlong)param_3 - 1] = '\0';
      return param_2;
    }
    local_c0 = (ulonglong)(param_3 - 1);
    iVar22 = 0;
    iVar14 = 0;
    local_c8 = 0;
    iVar3 = OPENSSL_sk_num(*param_1);
    if (0 < iVar3) {
      do {
        puVar7 = (undefined8 *)OPENSSL_sk_value(*param_1,iVar14);
        iVar3 = OBJ_obj2nid(*puVar7);
        if ((iVar3 == 0) || (_Src = (undefined1 *)OBJ_nid2sn(iVar3), _Src == (undefined1 *)0x0)) {
          i2t_ASN1_OBJECT(local_98,0x50,*puVar7);
          _Src = local_98;
        }
        uVar16 = 0xffffffffffffffff;
        do {
          uVar16 = uVar16 + 1;
        } while (_Src[uVar16] != '\0');
        puVar2 = (uint *)puVar7[1];
        uVar13 = *puVar2;
        uVar21 = (ulonglong)uVar13;
        if (0x100000 < (int)uVar13) {
          local_d8 = 0x4a;
LAB_143cee355:
          uVar19 = 0x86;
          goto LAB_143cee35b;
        }
        pcVar20 = *(char **)(puVar2 + 2);
        if (puVar2[1] == 0x1b) {
          uVar4 = uVar13 & 0x80000003;
          if ((int)uVar4 < 0) {
            uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
          }
          if (uVar4 != 0) goto LAB_143cee185;
          uVar4 = 0;
          iVar3 = 0;
          local_a8[1] = 0;
          local_a8[2] = 0;
          local_a8[0] = 0;
          pcVar11 = pcVar20;
          uVar17 = uVar21;
          iVar14 = iVar3;
          iVar9 = iVar3;
          if (0 < (int)uVar13) {
            do {
              if (*pcVar11 != '\0') {
                local_a8[uVar4 & 3] = 1;
              }
              uVar4 = uVar4 + 1;
              uVar17 = uVar17 - 1;
              pcVar11 = pcVar11 + 1;
            } while (uVar17 != 0);
            iVar3 = local_a8[0];
            iVar14 = local_a8[1];
            iVar9 = local_a8[2];
          }
          local_a8[3] = 1;
          if ((iVar3 != 0 || iVar14 != 0) || iVar9 != 0) goto LAB_143cee190;
          local_a8[1] = 0;
          local_a8[2] = 0;
          local_a8[0] = 0;
        }
        else {
LAB_143cee185:
          local_a8[3] = 1;
LAB_143cee190:
          local_a8[0] = 1;
          local_a8[1] = 1;
          local_a8[2] = 1;
        }
        local_a8[3] = 1;
        uVar12 = 0;
        uVar10 = 0;
        uVar17 = uVar21;
        uVar4 = uVar12;
        if (0 < (int)uVar13) {
          do {
            uVar10 = uVar4;
            if ((local_a8[uVar12 & 3] != 0) && (uVar10 = uVar4 + 1, 0x5e < (byte)(*pcVar20 - 0x20U))
               ) {
              uVar10 = uVar4 + 4;
            }
            uVar12 = uVar12 + 1;
            pcVar20 = pcVar20 + 1;
            uVar17 = uVar17 - 1;
            uVar4 = uVar10;
          } while (uVar17 != 0);
        }
        lVar6 = (longlong)iVar22;
        iVar22 = iVar22 + 2 + uVar10 + (int)uVar16;
        if (0x100000 < iVar22) {
          local_d8 = 0x7b;
          goto LAB_143cee355;
        }
        if (lVar5 == 0) {
          pcVar20 = param_2;
          if ((int)local_c0 < iVar22) goto LAB_143cee304;
        }
        else {
          lVar8 = BUF_MEM_grow(lVar5,(longlong)(iVar22 + 1));
          if (lVar8 == 0) goto LAB_143cee33e;
          pcVar20 = *(char **)(lVar5 + 8);
        }
        pcVar20 = pcVar20 + lVar6;
        *pcVar20 = '/';
        pcVar20 = pcVar20 + 1;
        _guard_xfg_dispatch_icall_nop(pcVar20,_Src,uVar16 & 0xffffffff);
        param_1 = local_b0;
        pcVar20[(int)uVar16] = '=';
        pbVar15 = (byte *)(pcVar20 + (int)uVar16 + 1);
        pbVar18 = *(byte **)(puVar7[1] + 8);
        if (0 < (int)uVar13) {
          uVar13 = 0;
          do {
            if (local_a8[uVar13 & 3] != 0) {
              bVar1 = *pbVar18;
              if (bVar1 - 0x20 < 0x5f) {
                *pbVar15 = bVar1;
                pbVar15 = pbVar15 + 1;
              }
              else {
                pbVar15[0] = 0x5c;
                pbVar15[1] = 0x78;
                pbVar15[2] = "0123456789ABCDEF"[bVar1 >> 4];
                pbVar15[3] = "0123456789ABCDEF"[bVar1 & 0xf];
                pbVar15 = pbVar15 + 4;
              }
            }
            uVar13 = uVar13 + 1;
            pbVar18 = pbVar18 + 1;
            uVar21 = uVar21 - 1;
            param_2 = local_b8;
          } while (uVar21 != 0);
        }
        *pbVar15 = 0;
        iVar14 = local_c8 + 1;
        local_c8 = iVar14;
        iVar3 = OPENSSL_sk_num(*local_b0);
      } while (iVar14 < iVar3);
    }
    if (lVar5 != 0) {
      param_2 = *(char **)(lVar5 + 8);
      CRYPTO_free(lVar5,"crypto\\x509\\x509_obj.c",0xaa);
    }
LAB_143cee304:
    if (local_c8 != 0) {
      return param_2;
    }
    *param_2 = '\0';
    return param_2;
  }
  return (char *)0x0;
}



// FUNCTION 143cee380 X509_CRL_check_suiteb body=69 status=ok
// SIG undefined X509_CRL_check_suiteb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_CRL_check_suiteb(longlong param_1,undefined8 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  uint local_res18 [4];
  
  if ((param_3 & 0x30000) == 0) {
    return 0;
  }
  local_res18[0] = param_3;
  uVar1 = OBJ_obj2nid(*(undefined8 *)(param_1 + 8));
  uVar2 = check_suite_b(param_2,uVar1,local_res18);
  return uVar2;
}



// FUNCTION 143cee3d0 X509_CRL_cmp body=30 status=ok
// SIG undefined X509_CRL_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_cmp(longlong param_1,longlong param_2)

{
  X509_NAME_cmp(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_2 + 0x18));
  return;
}



// FUNCTION 143cee3f0 X509_CRL_match body=40 status=ok
// SIG undefined X509_CRL_match(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_CRL_match(longlong param_1,longlong param_2)

{
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0xb0),(void *)(param_2 + 0xb0),0x14);
  return;
}



// FUNCTION 143cee420 X509_NAME_cmp body=133 status=ok
// SIG undefined X509_NAME_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_NAME_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1 + 0x18) == 0) || (*(int *)(param_1 + 8) != 0)) {
    iVar2 = i2d_X509_NAME(param_1,0);
    if (-1 < iVar2) goto LAB_143cee451;
LAB_143cee495:
    iVar2 = -2;
  }
  else {
LAB_143cee451:
    if ((*(longlong *)(param_2 + 0x18) == 0) || (*(int *)(param_2 + 8) != 0)) {
      iVar2 = i2d_X509_NAME(param_2,0);
      if (iVar2 < 0) goto LAB_143cee495;
    }
    iVar1 = *(int *)(param_1 + 0x20);
    iVar2 = iVar1 - *(int *)(param_2 + 0x20);
    if ((iVar2 == 0) && (iVar1 != 0)) {
      iVar2 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + 0x18),*(void **)(param_2 + 0x18),(longlong)iVar1);
      return iVar2;
    }
  }
  return iVar2;
}



// FUNCTION 143cee4b0 X509_NAME_hash body=157 status=ok
// SIG undefined X509_NAME_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong X509_NAME_hash(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  uint local_28 [6];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  i2d_X509_NAME(param_1,0);
  local_38 = EVP_sha1();
  local_30 = 0;
  uVar1 = EVP_Digest(*(undefined8 *)(param_1 + 0x18),(longlong)*(int *)(param_1 + 0x20),local_28,0);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  return (ulonglong)local_28[0];
}



// FUNCTION 143cee550 X509_chain_check_suiteb body=623 status=ok
// SIG undefined X509_chain_check_suiteb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_chain_check_suiteb(uint *param_1,longlong param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  bool bVar8;
  uint local_res20 [2];
  
  if ((param_4 & 0x30000) == 0) {
    return 0;
  }
  bVar8 = param_2 == 0;
  local_res20[0] = param_4;
  if (bVar8) {
    param_2 = OPENSSL_sk_value(param_3);
  }
  uVar7 = (uint)bVar8;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = X509_PUBKEY_get0(*(undefined8 *)(param_2 + 0x50));
  }
  if (param_3 == 0) {
    if ((lVar5 != 0) && (iVar2 = FRollingHash::GetWindowSize(lVar5), iVar2 == 0x198)) {
      uVar4 = EVP_PKEY_get0_EC_KEY(lVar5);
      lVar5 = FUniqueNetIdString::GetBytes(uVar4);
      if (lVar5 != 0) {
        iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(lVar5);
        if (iVar2 == 0x2cb) {
          if ((param_4 >> 0x11 & 1) == 0) {
            return 0x3c;
          }
        }
        else {
          if (iVar2 != 0x19f) {
            return 0x3a;
          }
          if ((param_4 >> 0x10 & 1) == 0) {
            return 0x3c;
          }
        }
        return 0;
      }
    }
    return 0x39;
  }
  iVar2 = X509_get_version(param_2);
  if (iVar2 != 2) {
    iVar2 = 0x38;
    uVar7 = 0;
    goto LAB_143cee79a;
  }
  if ((lVar5 == 0) || (iVar2 = FRollingHash::GetWindowSize(lVar5), iVar2 != 0x198)) {
LAB_143cee76c:
    iVar2 = 0x39;
LAB_143cee771:
    uVar7 = 0;
  }
  else {
    uVar4 = EVP_PKEY_get0_EC_KEY(lVar5);
    lVar6 = FUniqueNetIdString::GetBytes(uVar4);
    if (lVar6 == 0) goto LAB_143cee76c;
    iVar2 = TMeshAttributeArraySet<int>::GetNumIndices(lVar6);
    if (iVar2 != 0x2cb) {
      if (iVar2 == 0x19f) {
        if ((param_4 >> 0x10 & 1) != 0) goto LAB_143cee6c0;
        iVar2 = 0x3c;
      }
      else {
        iVar2 = 0x3a;
      }
      goto LAB_143cee771;
    }
    if ((param_4 >> 0x11 & 1) == 0) {
      iVar2 = 0x3c;
      goto LAB_143cee771;
    }
    local_res20[0] = param_4 & 0xfffeffff;
LAB_143cee6c0:
    iVar2 = OPENSSL_sk_num(param_3);
    if ((int)uVar7 < iVar2) {
      do {
        uVar3 = X509_get_signature_nid(param_2);
        param_2 = OPENSSL_sk_value(param_3,uVar7);
        iVar2 = X509_get_version(param_2);
        if (iVar2 != 2) {
          iVar2 = 0x38;
          goto LAB_143cee79a;
        }
        if (param_2 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = X509_PUBKEY_get0(*(undefined8 *)(param_2 + 0x50));
        }
        iVar2 = check_suite_b(lVar5,uVar3,local_res20);
        if (iVar2 != 0) goto LAB_143cee777;
        uVar7 = uVar7 + 1;
        iVar2 = OPENSSL_sk_num(param_3);
      } while ((int)uVar7 < iVar2);
    }
    uVar3 = X509_get_signature_nid(param_2);
    iVar2 = check_suite_b(lVar5,uVar3,local_res20);
  }
  if (iVar2 == 0) {
    return 0;
  }
LAB_143cee777:
  if (iVar2 - 0x3bU < 2) {
    uVar1 = uVar7 - 1;
    if (uVar7 == 0) {
      uVar1 = uVar7;
    }
    uVar7 = uVar1;
    if ((iVar2 == 0x3c) && (param_4 != local_res20[0])) {
      iVar2 = 0x3d;
    }
  }
LAB_143cee79a:
  if (param_1 != (uint *)0x0) {
    *param_1 = uVar7;
  }
  return iVar2;
}



// FUNCTION 143cee7c0 X509_chain_up_ref body=94 status=ok
// SIG undefined X509_chain_up_ref(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_chain_up_ref(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = OPENSSL_sk_dup();
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(uVar2);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(uVar2,iVar4);
      X509_up_ref(uVar3);
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(uVar2);
    } while (iVar4 < iVar1);
  }
  return uVar2;
}



// FUNCTION 143cee820 X509_check_private_key body=147 status=ok
// SIG undefined X509_check_private_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_check_private_key(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = 0x143cee82c;
  if (((param_1 == 0) || (lVar2 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50)), lVar2 == 0)) ||
     (iVar1 = EVP_PKEY_cmp(lVar2,param_2), iVar1 == -2)) {
    uVar4 = 300;
    uVar3 = 0x75;
  }
  else if (iVar1 == -1) {
    uVar4 = 0x129;
    uVar3 = 0x73;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 < 1) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x126;
    uVar3 = 0x74;
  }
  ERR_put_error(0xb,0x80,uVar3,"crypto\\x509\\x509_cmp.c",uVar4,uVar5);
  return 0;
}



// FUNCTION 143cee8c0 X509_cmp body=172 status=ok
// SIG undefined X509_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int X509_cmp(longlong param_1,longlong param_2)

{
  int iVar1;
  
  X509_check_purpose(param_1,0xffffffff,0);
  X509_check_purpose(param_2,0xffffffff);
  iVar1 = _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x120),(void *)(param_2 + 0x120),0x14);
  if (iVar1 == 0) {
    if ((*(int *)(param_1 + 0x7c) == 0) && (*(int *)(param_2 + 0x7c) == 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      if (iVar1 < *(int *)(param_2 + 0x78)) {
        return -1;
      }
      if (*(int *)(param_2 + 0x78) < iVar1) {
        return 1;
      }
      iVar1 = _guard_xfg_dispatch_icall_nop
                        (*(void **)(param_1 + 0x70),*(void **)(param_2 + 0x70),(longlong)iVar1);
      return iVar1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



// FUNCTION 143cee970 X509_get0_pubkey body=38 status=ok
// SIG undefined X509_get0_pubkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get0(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}



// FUNCTION 143cee9a0 X509_get0_pubkey body=38 status=ok
// SIG undefined X509_get0_pubkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_get0_pubkey(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_PUBKEY_get(*(undefined8 *)(param_1 + 0x50));
  return uVar1;
}



// FUNCTION 143cee9d0 X509_subject_name_cmp body=30 status=ok
// SIG undefined X509_subject_name_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_subject_name_cmp(longlong param_1,longlong param_2)

{
  X509_NAME_cmp(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
  return;
}



// FUNCTION 143cee9f0 check_suite_b body=254 status=ok
// SIG undefined check_suite_b(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 check_suite_b(longlong param_1,int param_2,uint *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (iVar1 = FRollingHash::GetWindowSize(), iVar1 == 0x198)) {
    uVar2 = EVP_PKEY_get0_EC_KEY(param_1);
    lVar3 = FUniqueNetIdString::GetBytes(uVar2);
    if (lVar3 != 0) {
      iVar1 = TMeshAttributeArraySet<int>::GetNumIndices(lVar3);
      if (iVar1 == 0x2cb) {
        if ((param_2 != -1) && (param_2 != 0x31b)) {
          return 0x3b;
        }
        if ((*param_3 >> 0x11 & 1) == 0) {
          return 0x3c;
        }
        *param_3 = *param_3 & 0xfffeffff;
      }
      else {
        if (iVar1 != 0x19f) {
          return 0x3a;
        }
        if ((param_2 != -1) && (param_2 != 0x31a)) {
          return 0x3b;
        }
        if ((*param_3 & 0x10000) == 0) {
          return 0x3c;
        }
      }
      return 0;
    }
  }
  return 0x39;
}



// FUNCTION 143ceeaf0 X509_SIG_INFO_set body=18 status=ok
// SIG undefined X509_SIG_INFO_set(void)

void X509_SIG_INFO_set(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                      undefined4 param_5)

{
  param_1[3] = param_5;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



// FUNCTION 143ceeb10 X509_get0_uids body=25 status=ok
// SIG undefined X509_get0_uids(void)

void X509_get0_uids(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = *(undefined8 *)(param_1 + 0x58);
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = *(undefined8 *)(param_1 + 0x60);
  }
  return;
}



// FUNCTION 143ceeb30 X509_get_signature_info body=144 status=ok
// SIG undefined X509_get_signature_info(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint X509_get_signature_info
               (longlong param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
               undefined4 *param_5)

{
  X509_check_purpose(param_1,0xffffffff,0xffffffff);
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0xa8);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0xac);
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = *(undefined4 *)(param_1 + 0xb0);
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = *(undefined4 *)(param_1 + 0xb4);
  }
  return *(uint *)(param_1 + 0xb4) & 1;
}



// FUNCTION 143ceebc0 X509_get_version body=25 status=ok
// SIG undefined X509_get_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_get_version(undefined8 *param_1)

{
  ASN1_INTEGER_get(*param_1);
  return;
}



// FUNCTION 143ceebe0 X509_set_issuer_name body=38 status=ok
// SIG undefined X509_set_issuer_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 X509_set_issuer_name(longlong param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = X509_NAME_set(param_1 + 0x30);
  return uVar1;
}



// FUNCTION 143ceec10 X509_up_ref body=24 status=ok
// SIG undefined X509_up_ref(void)

bool X509_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0xb8);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143ceec30 x509_init_sig_info body=253 status=ok
// SIG undefined x509_init_sig_info(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void x509_init_sig_info(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int local_res8 [2];
  int local_res10 [2];
  
  piVar1 = (int *)(param_1 + 0xa8);
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  uVar2 = OBJ_obj2nid(*(undefined8 *)(param_1 + 0x80));
  iVar3 = OBJ_find_sigid_algs(uVar2,local_res8,local_res10);
  if (iVar3 != 0) {
    if (local_res10[0] != 0) {
      *(int *)(param_1 + 0xac) = local_res10[0];
      if (local_res8[0] == 0) {
        lVar4 = EVP_PKEY_asn1_find(0);
        if ((lVar4 != 0) && (*(code **)(lVar4 + 0xd8) != (code *)0x0)) {
          iVar3 = (**(code **)(lVar4 + 0xd8))(piVar1,param_1 + 0x80,param_1 + 0x90);
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
            return;
          }
        }
      }
      else {
        *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 1;
        *piVar1 = local_res8[0];
        uVar5 = OBJ_nid2sn();
        lVar4 = EVP_get_digestbyname(uVar5);
        if (lVar4 != 0) {
          iVar3 = EVP_MD_size(lVar4);
          *(int *)(param_1 + 0xb0) = iVar3 << 2;
          if ((local_res8[0] == 0x40) || (local_res8[0] - 0x2a0U < 3)) {
            *(uint *)(param_1 + 0xb4) = *(uint *)(param_1 + 0xb4) | 2;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 143ceed30 PEM_read_bio_X509 body=53 status=ok
// SIG undefined PEM_read_bio_X509(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_read_bio_X509(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  PEM_ASN1_read_bio(d2i_X509,"CERTIFICATE",param_1,param_2,param_3,param_4,0x143ceed3a);
  return;
}



// FUNCTION 143ceed70 PEM_write_bio_X509 body=69 status=ok
// SIG undefined PEM_write_bio_X509(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void PEM_write_bio_X509(undefined8 param_1,undefined8 param_2)

{
  PEM_ASN1_write_bio(i2d_X509,"CERTIFICATE",param_1,param_2,0,0,0,0,0);
  return;
}


