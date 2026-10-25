// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143caba90 read_state_machine body=965 status=ok
// SIG undefined read_state_machine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 read_state_machine(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  code *pcVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  bool bVar12;
  undefined4 local_res8 [2];
  ulonglong local_res10;
  undefined4 uVar13;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = 0x143cabaaa;
  pcVar6 = *(code **)(param_1 + 0x568);
  local_res10 = 0;
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  pcVar11 = ossl_statem_server_post_process_message;
  bVar12 = *(int *)(param_1 + 0x38) == 0;
  pcVar8 = (code *)&LAB_143cbd4d0;
  if (bVar12) {
    pcVar11 = ossl_statem_client_post_process_message;
  }
  pcVar9 = FUN_143cbdc00;
  if (bVar12) {
    pcVar8 = FUN_143ccd9f0;
  }
  pcVar10 = FUN_143cbdfb0;
  if (bVar12) {
    pcVar9 = FUN_143ccdf70;
    pcVar10 = FUN_143cce5d0;
  }
  if (*(int *)(param_1 + 0x68) != 0) {
    *(undefined4 *)(param_1 + 0x5e0) = 1;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
LAB_143cabb40:
  while (iVar3 = *(int *)(param_1 + 0x54), iVar3 != 0) {
    if (iVar3 == 1) goto LAB_143cabc83;
    if (iVar3 != 2) {
      uVar13 = 0x2ae;
      uVar7 = 0x44;
      goto LAB_143cabd4b;
    }
    iVar3 = (*pcVar11)(param_1,*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3;
    if (iVar3 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar13 = 0x298;
      goto LAB_143cabd45;
    }
    if (iVar3 == 1) {
      bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
      goto LAB_143cabdb3;
    }
    if (iVar3 == 2) goto LAB_143cabcfe;
    if ((2 < iVar3) && (iVar3 < 6)) {
      return 0;
    }
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    iVar3 = tls_get_message_header(param_1,local_res8);
  }
  else {
    iVar3 = dtls_get_message(param_1,local_res8,&local_res10);
  }
  if (iVar3 == 0) {
    return 0;
  }
  if (pcVar6 != (code *)0x0) {
    uVar7 = 0x2001;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar7 = 0x1001;
    }
    (*pcVar6)(param_1,uVar7,1);
  }
  iVar3 = (*pcVar10)(param_1,local_res8[0]);
  if (iVar3 == 0) {
    return 0;
  }
  uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x228);
  uVar4 = (*pcVar8)(param_1);
  if (uVar4 < uVar2) {
    *(undefined4 *)(param_1 + 100) = 1;
    *(undefined4 *)(param_1 + 0x48) = 1;
    ERR_put_error(0x14,0x160,0x98,"ssl\\statem\\statem.c",600);
    if (*(int *)(param_1 + 0x7c) == 1) {
      return 0;
    }
    uVar7 = 0x2f;
    goto LAB_143cabe2e;
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (uVar2 != 0)) {
    uVar4 = *(longlong *)(param_1 + 0x90) - *(longlong *)(*(longlong *)(param_1 + 0x88) + 8);
    lVar5 = BUF_MEM_grow_clean(*(longlong *)(param_1 + 0x88),(longlong)(int)(uVar2 + 4));
    if ((lVar5 == 0) || (uVar2 + 4 < uVar4)) {
      uVar13 = 0x262;
      uVar7 = 7;
      goto LAB_143cabd4b;
    }
    *(ulonglong *)(param_1 + 0x90) = *(longlong *)(*(longlong *)(param_1 + 0x88) + 8) + uVar4;
  }
  *(undefined4 *)(param_1 + 0x54) = 1;
LAB_143cabc83:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (iVar3 = tls_get_message_body(param_1,&local_res10), iVar3 == 0)) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  if (local_res10 < 0x8000000000000000) {
    local_48 = *(undefined8 *)(param_1 + 0x90);
    local_40 = local_res10;
    iVar3 = (*pcVar9)(param_1,&local_48);
    *(undefined8 *)(param_1 + 0x98) = 0;
    if (iVar3 != 0) {
      if (iVar3 == 1) {
        bVar1 = *(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60);
LAB_143cabdb3:
        if ((bVar1 & 8) != 0) {
          dtls1_stop_timer(param_1);
        }
        return 1;
      }
      if (iVar3 == 2) {
        *(undefined4 *)(param_1 + 0x54) = 2;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      else {
LAB_143cabcfe:
        *(undefined4 *)(param_1 + 0x54) = 0;
      }
      goto LAB_143cabb40;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar13 = 0x280;
LAB_143cabd45:
    uVar7 = 0x100;
  }
  else {
    uVar13 = 0x276;
    uVar7 = 0x44;
  }
LAB_143cabd4b:
  *(undefined4 *)(param_1 + 0x48) = 1;
  *(undefined4 *)(param_1 + 100) = 1;
  ERR_put_error(0x14,0x160,uVar7,"ssl\\statem\\statem.c",uVar13);
  if (*(int *)(param_1 + 0x7c) == 1) {
    return 0;
  }
  uVar7 = 0x50;
LAB_143cabe2e:
  ssl3_send_alert(param_1,2,uVar7);
  return 0;
}



// FUNCTION 143cabe60 state_machine body=878 status=ok
// SIG undefined state_machine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 state_machine(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 uVar5;
  code *pcVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cabe7e;
  lVar7 = 0;
  uVar5 = 0xffffffff;
  if (param_1[0x12] == 1) {
    return 0xffffffff;
  }
  ERR_clear_error();
  SetLastError(0);
  pcVar6 = *(code **)(param_1 + 0x15a);
  if (pcVar6 == (code *)0x0) {
    pcVar6 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x108);
  }
  param_1[0x1b] = param_1[0x1b] + 1;
  if ((((param_1[0x19] == 0) || ((param_1[0x17] == 0 && (param_1[0x12] == 0)))) &&
      ((**(uint **)(param_1 + 0x2a) & 0x800) == 0)) && (iVar1 = SSL_clear(param_1), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = param_1[0x12];
  if (uVar2 == 0) {
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  else if (uVar2 != 4) {
    do {
      if (uVar2 == 2) {
        iVar1 = read_state_machine(param_1);
        if (iVar1 != 1) goto LAB_143cac127;
        param_1[0x12] = 3;
        param_1[0x13] = 0;
      }
      else {
        if (uVar2 != 3) {
          if ((param_1[0x19] == 0) || (uVar2 != 1)) {
            param_1[0x19] = 1;
            param_1[0x12] = 1;
            ERR_put_error(0x14,0x161,0x100,"ssl\\statem\\statem.c",0x1c4);
            if (param_1[0x1f] != 1) {
              ssl3_send_alert(param_1,2,0x50);
            }
          }
          uVar9 = 0x1c5;
          uVar8 = 0x42;
          goto LAB_143cac02f;
        }
        iVar1 = write_state_machine(param_1);
        if (iVar1 == 1) {
          param_1[0x12] = 2;
          param_1[0x15] = 0;
        }
        else {
          if (iVar1 != 2) goto LAB_143cac127;
          param_1[0x12] = 4;
        }
      }
      uVar2 = param_1[0x12];
joined_r0x000143cac0cb:
    } while (uVar2 != 4);
    uVar5 = 1;
    goto LAB_143cac127;
  }
  param_1[0xe] = param_2;
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1,0x10,1);
  }
  uVar2 = *param_1;
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if ((uVar2 & 0xffffff00) == 0x300) goto LAB_143cabf9c;
    uVar9 = 0x16b;
    lVar7 = 0;
  }
  else if (((uVar2 & 0xff00) == 0xfe00) || ((param_2 == 0 && ((uVar2 & 0xff00) == 0x100)))) {
LAB_143cabf9c:
    iVar1 = ssl_security(param_1,9,0,uVar2,0,uVar9);
    if (iVar1 == 0) {
      uVar9 = 0x172;
      lVar7 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x22) != 0) {
LAB_143cac007:
        iVar1 = ssl3_setup_buffers(param_1);
        if (iVar1 == 0) {
          uVar9 = 0x187;
        }
        else {
          param_1[0x26] = 0;
          param_1[0x27] = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 0;
          iVar1 = ssl_init_wbio_buffer(param_1);
          if (iVar1 != 0) {
            if (((param_1[0x17] != 0) || (param_1[0x12] != 0)) && (param_1[0x1d4] == 0)) {
LAB_143cac0bd:
              param_1[0x12] = 3;
              param_1[0x13] = 0;
              uVar2 = param_1[0x12];
              goto joined_r0x000143cac0cb;
            }
            iVar1 = tls_setup_handshake(param_1);
            if (iVar1 != 0) {
              if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
                param_1[0x1a] = 1;
              }
              goto LAB_143cac0bd;
            }
            goto LAB_143cac127;
          }
          uVar9 = 0x19a;
        }
        param_1[0x12] = 1;
        uVar8 = 0x44;
        param_1[0x19] = 1;
LAB_143cac02f:
        ERR_put_error(0x14,0x161,uVar8,"ssl\\statem\\statem.c",uVar9);
        goto LAB_143cac127;
      }
      lVar3 = BUF_MEM_new();
      if (lVar3 == 0) {
        uVar9 = 0x179;
        lVar7 = lVar3;
      }
      else {
        lVar4 = BUF_MEM_grow(lVar3,0x4000);
        if (lVar4 != 0) {
          *(longlong *)(param_1 + 0x22) = lVar3;
          goto LAB_143cac007;
        }
        uVar9 = 0x17e;
        lVar7 = lVar3;
      }
    }
  }
  else {
    uVar9 = 0x165;
  }
  param_1[0x19] = 1;
  param_1[0x12] = 1;
  ERR_put_error(0x14,0x161,0x44,"ssl\\statem\\statem.c",uVar9);
LAB_143cac127:
  param_1[0x1b] = param_1[0x1b] - 1;
  BUF_MEM_free(lVar7);
  if (pcVar6 != (code *)0x0) {
    uVar9 = 0x2002;
    if (param_2 == 0) {
      uVar9 = 0x1002;
    }
    (*pcVar6)(param_1,uVar9,uVar5);
  }
  return uVar5;
}



// FUNCTION 143cac1d0 statem_flush body=73 status=ok
// SIG undefined statem_flush(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 statem_flush(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x28) = 2;
  iVar1 = BIO_ctrl(*(undefined8 *)(param_1 + 0x18),0xb,0,0);
  if (iVar1 < 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  return 1;
}



// FUNCTION 143cac220 write_state_machine body=995 status=ok
// SIG undefined write_state_machine(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 write_state_machine(longlong param_1)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  code *pcVar6;
  code *pcVar7;
  bool bVar8;
  int local_res8 [2];
  code *local_res10;
  undefined4 uVar9;
  undefined1 local_58 [40];
  undefined8 uStack_30;
  
  uStack_30 = 0x143cac23c;
  pcVar4 = *(code **)(param_1 + 0x568);
  if (pcVar4 == (code *)0x0) {
    pcVar4 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
  }
  pcVar7 = FUN_143cbd250;
  bVar8 = *(int *)(param_1 + 0x38) == 0;
  pcVar2 = FUN_143cbd650;
  if (bVar8) {
    pcVar7 = FUN_143ccd800;
  }
  pcVar6 = FUN_143cbd9f0;
  if (bVar8) {
    pcVar2 = FUN_143ccdb10;
  }
  pcVar3 = FUN_143cbe380;
  if (bVar8) {
    pcVar6 = ossl_statem_client_pre_work;
    pcVar3 = FUN_143cceb10;
  }
LAB_143cac2b0:
  while (iVar1 = *(int *)(param_1 + 0x4c), iVar1 == 0) {
    if (pcVar4 != (code *)0x0) {
      uVar5 = 0x2001;
      if (*(int *)(param_1 + 0x38) == 0) {
        uVar5 = 0x1001;
      }
      (*pcVar4)(param_1,uVar5,1);
    }
    iVar1 = (*pcVar3)(param_1);
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar9 = 0x321;
      goto LAB_143cac5a6;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x4c) = 1;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 == 2) {
      return 1;
    }
  }
  if (iVar1 == 1) {
    iVar1 = (*pcVar6)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 == 0) {
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar9 = 0x329;
    }
    else {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 2;
      }
      else if (iVar1 - 3U < 3) {
        return 0;
      }
      iVar1 = (*pcVar7)(param_1,local_58,&local_res10,local_res8);
      if (iVar1 == 0) {
        return 0;
      }
      if (local_res8[0] == -1) {
        *(undefined4 *)(param_1 + 0x4c) = 3;
        *(undefined4 *)(param_1 + 0x50) = 3;
        goto LAB_143cac2b0;
      }
      iVar1 = WPACKET_init(local_58,*(undefined8 *)(param_1 + 0x88));
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x68))
                            (param_1,local_58,local_res8[0]), iVar1 == 0)) {
        WPACKET_cleanup(local_58);
        uVar5 = 0x44;
        uVar9 = 0x345;
        goto LAB_143cac5ac;
      }
      if ((local_res10 == (code *)0x0) || (iVar1 = (*local_res10)(param_1,local_58), iVar1 != 0)) {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x70))
                          (param_1,local_58,local_res8[0]);
        if ((iVar1 == 0) || (iVar1 = WPACKET_finish(local_58), iVar1 == 0)) {
          WPACKET_cleanup(local_58);
          uVar5 = 0x44;
          uVar9 = 0x351;
          goto LAB_143cac5ac;
        }
        goto LAB_143cac3f4;
      }
      WPACKET_cleanup(local_58);
      if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
        return 0;
      }
      uVar9 = 0x34a;
    }
  }
  else {
    if (iVar1 == 2) {
LAB_143cac3f4:
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
         (*(int *)(param_1 + 0x78) != 0)) {
        dtls1_start_timer(param_1);
      }
      if ((*(int *)(param_1 + 0x5c) == 0x10) || (*(int *)(param_1 + 0x5c) == 0x23)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
          iVar1 = ssl3_do_write(param_1,0x14);
        }
        else {
          iVar1 = dtls1_do_write();
        }
      }
      else {
        iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x78))(param_1);
      }
      if (iVar1 < 1) {
        return 0;
      }
      *(undefined4 *)(param_1 + 0x4c) = 3;
      *(undefined4 *)(param_1 + 0x50) = 3;
    }
    else if (iVar1 != 3) {
      uVar9 = 0x378;
      uVar5 = 0x44;
      goto LAB_143cac5ac;
    }
    iVar1 = (*pcVar2)(param_1,*(undefined4 *)(param_1 + 0x50));
    *(int *)(param_1 + 0x50) = iVar1;
    if (iVar1 != 0) {
      if (iVar1 == 1) {
        return 2;
      }
      if (iVar1 == 2) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
      }
      else if ((2 < iVar1) && (iVar1 < 6)) {
        return 0;
      }
      goto LAB_143cac2b0;
    }
    if ((*(int *)(param_1 + 100) != 0) && (*(int *)(param_1 + 0x48) == 1)) {
      return 0;
    }
    uVar9 = 0x366;
  }
LAB_143cac5a6:
  uVar5 = 0x100;
LAB_143cac5ac:
  *(undefined4 *)(param_1 + 100) = 1;
  *(undefined4 *)(param_1 + 0x48) = 1;
  ERR_put_error(0x14,0x24a,uVar5,"ssl\\statem\\statem.c",uVar9);
  if (*(int *)(param_1 + 0x7c) != 1) {
    ssl3_send_alert(param_1,2);
  }
  return 0;
}



// FUNCTION 143cac610 SSL_CTX_add_session body=532 status=ok
// SIG undefined SSL_CTX_add_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 SSL_CTX_add_session(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = 1;
  LOCK();
  *(int *)(param_2 + 0x114) = *(int *)(param_2 + 0x114) + 1;
  UNLOCK();
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x378));
  lVar4 = OPENSSL_LH_insert(*(undefined8 *)(param_1 + 0x28),param_2);
  if (lVar4 == 0) {
    lVar4 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),param_2);
    if ((lVar4 == 0) && (lVar4 = param_2, param_2 != 0)) goto LAB_143cac6d4;
  }
  else {
    if (lVar4 == param_2) {
LAB_143cac6d4:
      SSL_SESSION_free(lVar4);
      uVar7 = 0;
      goto LAB_143cac804;
    }
    SSL_SESSION_list_remove(param_1);
    SSL_SESSION_free(lVar4);
  }
  if ((*(longlong *)(param_2 + 0x150) != 0) && (*(longlong *)(param_2 + 0x148) != 0)) {
    SSL_SESSION_list_remove(param_1,param_2);
  }
  lVar4 = *(longlong *)(param_1 + 0x38);
  plVar1 = (longlong *)(param_1 + 0x38);
  if (lVar4 == 0) {
    *plVar1 = param_2;
    *(longlong *)(param_1 + 0x40) = param_2;
    *(longlong **)(param_2 + 0x148) = plVar1;
    *(longlong **)(param_2 + 0x150) = (longlong *)(param_1 + 0x40);
  }
  else {
    *(longlong *)(param_2 + 0x150) = lVar4;
    *(longlong *)(lVar4 + 0x148) = param_2;
    *(longlong **)(param_2 + 0x148) = plVar1;
    *plVar1 = param_2;
  }
  iVar2 = FUN_143ca38a0(param_1,0x2b,0);
  if (0 < iVar2) {
    iVar2 = FUN_143ca38a0(param_1,0x2b,0);
    iVar3 = FUN_143ca38a0(param_1,0x14,0);
    if (iVar2 < iVar3) {
      do {
        lVar4 = *(longlong *)(param_1 + 0x40);
        if ((lVar4 == 0) || (*(longlong *)(lVar4 + 0x90) == 0)) break;
        lVar5 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),lVar4);
        uVar6 = 0;
        if (lVar5 != 0) {
          uVar6 = OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x28),lVar5);
          SSL_SESSION_list_remove(param_1,uVar6);
        }
        *(undefined4 *)(lVar4 + 0xf0) = 1;
        if (*(code **)(param_1 + 0x58) != (code *)0x0) {
          (**(code **)(param_1 + 0x58))(param_1,lVar4);
        }
        if (lVar5 == 0) break;
        SSL_SESSION_free(uVar6);
        LOCK();
        *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + 1;
        UNLOCK();
        iVar2 = FUN_143ca38a0(param_1,0x2b,0);
        iVar3 = FUN_143ca38a0(param_1,0x14);
      } while (iVar2 < iVar3);
    }
  }
LAB_143cac804:
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x378));
  return uVar7;
}



// FUNCTION 143cac830 SSL_CTX_flush_sessions body=136 status=ok
// SIG undefined SSL_CTX_flush_sessions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_flush_sessions(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cac83c;
  local_18 = *(longlong *)(param_1 + 0x28);
  if (local_18 != 0) {
    local_28 = param_1;
    local_20 = param_2;
    CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x378));
    uVar1 = FImgMediaPlayer::GetState(*(undefined8 *)(param_1 + 0x28));
    BIO_set_retry_reason(*(undefined8 *)(param_1 + 0x28),0);
    OPENSSL_LH_doall_arg(local_18,timeout_cb,&local_28);
    BIO_set_retry_reason(*(undefined8 *)(param_1 + 0x28),uVar1);
    CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x378));
  }
  return;
}



// FUNCTION 143cac8c0 SSL_CTX_remove_session body=26 status=ok
// SIG undefined SSL_CTX_remove_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_remove_session(undefined8 param_1,undefined8 param_2)

{
  remove_session_lock(param_1,param_2,1);
  return;
}



// FUNCTION 143cac8e0 SSL_SESSION_free body=451 status=ok
// SIG undefined SSL_SESSION_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_SESSION_free(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 != 0) {
    LOCK();
    piVar1 = (int *)(param_1 + 0x114);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 2) {
      CRYPTO_free_ex_data(2,param_1,param_1 + 0x140);
      FUN_14004ff40(param_1 + 0x50,0x40);
      FUN_14004ff40(param_1 + 0x98,0x20);
      X509_free(*(undefined8 *)(param_1 + 0xf8));
      OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0x108),X509_free);
      OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x138));
      CRYPTO_free(*(undefined8 *)(param_1 + 0x158),"ssl\\ssl_sess.c",0x31a);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x180),"ssl\\ssl_sess.c",0x31b);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x168),"ssl\\ssl_sess.c",0x31d);
      *(undefined8 *)(param_1 + 0x168) = 0;
      *(undefined8 *)(param_1 + 0x160) = 0;
      CRYPTO_free(*(undefined8 *)(param_1 + 0x178),"ssl\\ssl_sess.c",800);
      *(undefined8 *)(param_1 + 0x178) = 0;
      *(undefined8 *)(param_1 + 0x170) = 0;
      CRYPTO_free(*(undefined8 *)(param_1 + 0xe0),"ssl\\ssl_sess.c",0x325);
      CRYPTO_free(*(undefined8 *)(param_1 + 0xe8),"ssl\\ssl_sess.c",0x326);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1b8),"ssl\\ssl_sess.c",0x329);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a0),"ssl\\ssl_sess.c",0x32b);
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1c0),"ssl\\ssl_sess.c",0x32c);
      CRYPTO_THREAD_lock_free(*(undefined8 *)(param_1 + 0x1d8));
      CRYPTO_clear_free(param_1,0x1e0,"ssl\\ssl_sess.c",0x32e);
    }
  }
  return;
}



// FUNCTION 143cacab0 SSL_SESSION_get_time body=15 status=ok
// SIG undefined SSL_SESSION_get_time(void)

undefined4 SSL_SESSION_get_time(longlong param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x11c);
}



// FUNCTION 143cacac0 SSL_SESSION_is_resumable body=38 status=ok
// SIG undefined SSL_SESSION_is_resumable(void)

undefined8 SSL_SESSION_is_resumable(longlong param_1)

{
  if ((*(int *)(param_1 + 0xf0) == 0) &&
     ((*(longlong *)(param_1 + 0x90) != 0 || (*(longlong *)(param_1 + 0x188) != 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cacaf0 SSL_SESSION_list_remove body=186 status=ok
// SIG undefined SSL_SESSION_list_remove(void)

void SSL_SESSION_list_remove(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar2 = *(undefined8 **)(param_2 + 0x150);
  if ((puVar2 != (undefined8 *)0x0) &&
     (puVar3 = *(undefined8 **)(param_2 + 0x148), puVar3 != (undefined8 *)0x0)) {
    puVar1 = (undefined8 *)(param_1 + 0x40);
    puVar4 = (undefined8 *)(param_1 + 0x38);
    if (puVar2 == puVar1) {
      if (puVar3 == puVar4) {
        *puVar4 = 0;
        *puVar1 = 0;
        *(undefined8 *)(param_2 + 0x150) = 0;
        *(undefined8 *)(param_2 + 0x148) = 0;
        return;
      }
      *puVar1 = puVar3;
      *(undefined8 **)(*(longlong *)(param_2 + 0x148) + 0x150) = puVar1;
      *(undefined8 *)(param_2 + 0x150) = 0;
      *(undefined8 *)(param_2 + 0x148) = 0;
      return;
    }
    if (puVar3 == puVar4) {
      *puVar4 = puVar2;
      *(undefined8 **)(*(longlong *)(param_2 + 0x150) + 0x148) = puVar4;
      *(undefined8 *)(param_2 + 0x150) = 0;
      *(undefined8 *)(param_2 + 0x148) = 0;
      return;
    }
    puVar2[0x29] = puVar3;
    *(undefined8 *)(*(longlong *)(param_2 + 0x148) + 0x150) = *(undefined8 *)(param_2 + 0x150);
    *(undefined8 *)(param_2 + 0x150) = 0;
    *(undefined8 *)(param_2 + 0x148) = 0;
  }
  return;
}



// FUNCTION 143cacbb0 SSL_SESSION_new body=299 status=ok
// SIG undefined SSL_SESSION_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong SSL_SESSION_new(void)

{
  int iVar1;
  longlong lVar2;
  __time64_t _Var3;
  longlong lVar4;
  undefined8 uVar5;
  
  iVar1 = OPENSSL_init_ssl(0x200000,0);
  if (iVar1 == 0) {
    return 0;
  }
  lVar2 = CRYPTO_zalloc(0x1e0,"ssl\\ssl_sess.c",0x48);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x4a);
    return 0;
  }
  *(undefined4 *)(lVar2 + 0x110) = 1;
  *(undefined4 *)(lVar2 + 0x114) = 1;
  *(undefined4 *)(lVar2 + 0x118) = 0x130;
  _Var3 = _time64((__time64_t *)0x0);
  *(int *)(lVar2 + 0x11c) = (int)_Var3;
  lVar4 = CRYPTO_THREAD_lock_new();
  *(longlong *)(lVar2 + 0x1d8) = lVar4;
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",0x54);
    uVar5 = 0x55;
  }
  else {
    iVar1 = CRYPTO_new_ex_data(2,lVar2,lVar2 + 0x140);
    if (iVar1 != 0) {
      return lVar2;
    }
    CRYPTO_THREAD_lock_free(*(undefined8 *)(lVar2 + 0x1d8));
    uVar5 = 0x5b;
  }
  CRYPTO_free(lVar2,"ssl\\ssl_sess.c",uVar5);
  return 0;
}



// FUNCTION 143cacce0 SSL_SESSION_set_cipher body=13 status=ok
// SIG undefined SSL_SESSION_set_cipher(void)

undefined8 SSL_SESSION_set_cipher(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x128) = param_2;
  return 1;
}



// FUNCTION 143caccf0 SSL_SESSION_set_protocol_version body=8 status=ok
// SIG undefined SSL_SESSION_set_protocol_version(void)

undefined8 SSL_SESSION_set_protocol_version(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  return 1;
}



// FUNCTION 143cacd00 SSL_SESSION_up_ref body=24 status=ok
// SIG undefined SSL_SESSION_up_ref(void)

bool SSL_SESSION_up_ref(longlong param_1)

{
  int *piVar1;
  int iVar2;
  
  LOCK();
  piVar1 = (int *)(param_1 + 0x114);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  return 1 < iVar2 + 1;
}



// FUNCTION 143cacd20 def_generate_session_id body=122 status=ok
// SIG undefined def_generate_session_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 def_generate_session_id(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = RAND_bytes(param_2,*param_3);
    if (iVar1 < 1) {
      return 0;
    }
    iVar1 = SSL_has_matching_session_id(param_1,param_2,*param_3);
    if (iVar1 == 0) break;
    uVar2 = uVar2 + 1;
    if (9 < uVar2) {
      return 0;
    }
  }
  if (9 < uVar2) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cacda0 lookup_sess_in_cache body=351 status=ok
// SIG undefined lookup_sess_in_cache(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong lookup_sess_in_cache(undefined4 *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_248 [32];
  int local_228 [4];
  undefined4 local_218 [36];
  size_t local_188;
  undefined1 local_180 [328];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143cacdb6;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  lVar1 = *(longlong *)(param_1 + 0x1ce);
  if ((*(uint *)(lVar1 + 0x48) & 0x100) == 0) {
    local_218[0] = *param_1;
    if (0x20 < param_3) {
      return 0;
    }
    _guard_xfg_dispatch_icall_nop(local_180,param_2,param_3);
    local_188 = param_3;
    CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar1 + 0x378));
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x28),local_218);
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0x114) = *(int *)(lVar1 + 0x114) + 1;
      UNLOCK();
    }
    CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
    if (lVar1 != 0) {
      return lVar1;
    }
    LOCK();
    *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) =
         *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) + 1;
    UNLOCK();
    lVar1 = *(longlong *)(param_1 + 0x1ce);
  }
  lVar2 = 0;
  if (*(code **)(lVar1 + 0x60) != (code *)0x0) {
    local_228[0] = 1;
    lVar2 = (**(code **)(lVar1 + 0x60))(param_1,param_2,param_3 & 0xffffffff,local_228);
    if (lVar2 != 0) {
      LOCK();
      *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x90) =
           *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x90) + 1;
      UNLOCK();
      if (local_228[0] != 0) {
        LOCK();
        *(int *)(lVar2 + 0x114) = *(int *)(lVar2 + 0x114) + 1;
        UNLOCK();
      }
      if ((*(uint *)(*(longlong *)(param_1 + 0x1ce) + 0x48) & 0x200) == 0) {
        SSL_CTX_add_session(*(longlong *)(param_1 + 0x1ce),lVar2);
      }
    }
  }
  return lVar2;
}



// FUNCTION 143cacf00 remove_session_lock body=225 status=ok
// SIG undefined remove_session_lock(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool remove_session_lock(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  bVar3 = false;
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x90) != 0)) {
    if (param_3 != 0) {
      CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x378));
    }
    lVar1 = OPENSSL_LH_retrieve(*(undefined8 *)(param_1 + 0x28),param_2);
    bVar3 = lVar1 != 0;
    uVar2 = 0;
    if (bVar3) {
      uVar2 = OPENSSL_LH_delete(*(undefined8 *)(param_1 + 0x28),lVar1);
      SSL_SESSION_list_remove(param_1,uVar2);
    }
    *(undefined4 *)(param_2 + 0xf0) = 1;
    if (param_3 != 0) {
      CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x378));
    }
    if (*(code **)(param_1 + 0x58) != (code *)0x0) {
      (**(code **)(param_1 + 0x58))(param_1,param_2);
    }
    if (bVar3) {
      SSL_SESSION_free(uVar2);
    }
  }
  return bVar3;
}



// FUNCTION 143cacff0 ssl_clear_bad_session body=97 status=ok
// SIG undefined ssl_clear_bad_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_clear_bad_session(longlong param_1)

{
  int iVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && ((*(byte *)(param_1 + 0x44) & 1) == 0)) {
    iVar1 = FSlateAccessibleWidget::GetId();
    if (iVar1 == 0) {
      iVar1 = SSL_in_before(param_1);
      if (iVar1 == 0) {
        remove_session_lock(*(undefined8 *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x508),1);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cad060 ssl_generate_session_id body=491 status=ok
// SIG undefined ssl_generate_session_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_generate_session_id(int *param_1,longlong param_2)

{
  code *pcVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  undefined8 uVar5;
  undefined4 uVar6;
  
  uVar6 = 1;
  iVar2 = *param_1;
  if ((((iVar2 != 0x100) && (4 < iVar2 - 0x300U)) && (iVar2 != 0xfefd)) && (iVar2 != 0xfeff)) {
    ossl_statem_fatal(param_1,0x50,0x223,0x103,"ssl\\ssl_sess.c",0x100000146);
    return 0;
  }
  *(undefined8 *)(param_2 + 0x90) = 0x20;
  if (param_1[0x19c] != 0) {
    *(undefined8 *)(param_2 + 0x90) = 0;
    return 1;
  }
  CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x5c2));
  CRYPTO_THREAD_read_lock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
  pcVar3 = *(code **)(param_1 + 0x14a);
  if (*(code **)(param_1 + 0x14a) == (code *)0x0) {
    pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1ce) + 0x188);
    pcVar3 = def_generate_session_id;
    if (pcVar1 != (code *)0x0) {
      pcVar3 = pcVar1;
    }
  }
  CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
  CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x5c2));
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x98),0,*(size_t *)(param_2 + 0x90));
  local_res8[0] = *(uint *)(param_2 + 0x90);
  iVar2 = (*pcVar3)(param_1,param_2 + 0x98,local_res8);
  if (iVar2 == 0) {
    uVar5 = CONCAT44(uVar6,0x16d);
    uVar4 = 0x12d;
  }
  else if ((local_res8[0] == 0) || (*(ulonglong *)(param_2 + 0x90) < (ulonglong)local_res8[0])) {
    uVar5 = CONCAT44(uVar6,0x177);
    uVar4 = 0x12f;
  }
  else {
    *(ulonglong *)(param_2 + 0x90) = (ulonglong)local_res8[0];
    iVar2 = SSL_has_matching_session_id(param_1,param_2 + 0x98,local_res8[0]);
    if (iVar2 == 0) {
      return 1;
    }
    uVar5 = CONCAT44(uVar6,0x17f);
    uVar4 = 0x12e;
  }
  ossl_statem_fatal(param_1,0x50,0x223,uVar4,"ssl\\ssl_sess.c",uVar5);
  return 0;
}



// FUNCTION 143cad250 ssl_get_new_session body=927 status=ok
// SIG undefined ssl_get_new_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_get_new_session(int *param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  __time64_t _Var4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  uint local_res18 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar8 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar9 = 0x143cad263;
  iVar2 = OPENSSL_init_ssl(0x200000,0);
  if (iVar2 == 0) goto LAB_143cad329;
  piVar3 = (int *)CRYPTO_zalloc(0x1e0,"ssl\\ssl_sess.c",0x48);
  if (piVar3 == (int *)0x0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",CONCAT44(uVar8,0x4a),uVar9);
    goto LAB_143cad329;
  }
  piVar3[0x44] = 1;
  piVar3[0x45] = 1;
  piVar3[0x46] = 0x130;
  _Var4 = _time64((__time64_t *)0x0);
  piVar3[0x47] = (int)_Var4;
  lVar5 = CRYPTO_THREAD_lock_new();
  *(longlong *)(piVar3 + 0x76) = lVar5;
  if (lVar5 == 0) {
    ERR_put_error(0x14,0xbd,0x41,"ssl\\ssl_sess.c",CONCAT44(uVar8,0x54),uVar9);
    uVar9 = 0x55;
  }
  else {
    iVar2 = CRYPTO_new_ex_data(2,piVar3,piVar3 + 0x50);
    uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
    if (iVar2 != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x4c);
      if (iVar2 == 0) {
        iVar2 = SSL_get_default_timeout(param_1);
      }
      piVar3[0x46] = iVar2;
      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
      param_1[0x142] = 0;
      param_1[0x143] = 0;
      if ((param_2 == 0) ||
         ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
           (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)))) {
LAB_143cad545:
        piVar3[0x24] = 0;
        piVar3[0x25] = 0;
      }
      else {
        iVar2 = *param_1;
        if ((((iVar2 != 0x100) && (4 < iVar2 - 0x300U)) && (iVar2 != 0xfefd)) && (iVar2 != 0xfeff))
        {
          uVar9 = 0x223;
          uVar10 = CONCAT44(uVar8,0x146);
          uVar7 = 0x103;
          goto LAB_143cad56b;
        }
        piVar3[0x24] = 0x20;
        piVar3[0x25] = 0;
        if (param_1[0x19c] != 0) goto LAB_143cad545;
        CRYPTO_THREAD_read_lock(*(undefined8 *)(param_1 + 0x5c2));
        CRYPTO_THREAD_read_lock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
        pcVar6 = *(code **)(param_1 + 0x14a);
        if (*(code **)(param_1 + 0x14a) == (code *)0x0) {
          pcVar1 = *(code **)(*(longlong *)(param_1 + 0x1ce) + 0x188);
          pcVar6 = def_generate_session_id;
          if (pcVar1 != (code *)0x0) {
            pcVar6 = pcVar1;
          }
        }
        CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
        CRYPTO_THREAD_unlock(*(undefined8 *)(param_1 + 0x5c2));
        _guard_xfg_dispatch_icall_nop(piVar3 + 0x26,0,*(size_t *)(piVar3 + 0x24));
        local_res18[0] = piVar3[0x24];
        iVar2 = (*pcVar6)(param_1,piVar3 + 0x26,local_res18);
        if (iVar2 == 0) {
          uVar9 = 0x223;
          uVar10 = CONCAT44(uVar8,0x16d);
          uVar7 = 0x12d;
          goto LAB_143cad56b;
        }
        if ((local_res18[0] == 0) || (*(ulonglong *)(piVar3 + 0x24) < (ulonglong)local_res18[0])) {
          uVar9 = 0x223;
          uVar10 = CONCAT44(uVar8,0x177);
          uVar7 = 0x12f;
          goto LAB_143cad56b;
        }
        *(ulonglong *)(piVar3 + 0x24) = (ulonglong)local_res18[0];
        iVar2 = SSL_has_matching_session_id(param_1,piVar3 + 0x26,local_res18[0]);
        if (iVar2 != 0) {
          uVar9 = 0x223;
          uVar10 = CONCAT44(uVar8,0x17f);
          uVar7 = 0x12e;
          goto LAB_143cad56b;
        }
      }
      if (*(ulonglong *)(param_1 + 0x138) < 0x21) {
        _guard_xfg_dispatch_icall_nop(piVar3 + 0x30,param_1 + 0x13a,*(ulonglong *)(param_1 + 0x138))
        ;
        *(undefined8 *)(piVar3 + 0x2e) = *(undefined8 *)(param_1 + 0x138);
        *(int **)(param_1 + 0x142) = piVar3;
        *piVar3 = *param_1;
        piVar3[0x44] = 0;
        if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
          piVar3[0x74] = piVar3[0x74] | 1;
        }
        return 1;
      }
      uVar7 = 0x44;
      uVar10 = CONCAT44(uVar8,0x1ae);
      uVar9 = 0xb5;
LAB_143cad56b:
      ossl_statem_fatal(param_1,0x50,uVar9,uVar7,"ssl\\ssl_sess.c",uVar10);
      SSL_SESSION_free(piVar3);
      return 0;
    }
    CRYPTO_THREAD_lock_free(*(undefined8 *)(piVar3 + 0x76));
    uVar9 = 0x5b;
  }
  CRYPTO_free(piVar3,"ssl\\ssl_sess.c",uVar9);
LAB_143cad329:
  ossl_statem_fatal(param_1,0x50,0xb5,0x41,"ssl\\ssl_sess.c",0x18e);
  return 0;
}



// FUNCTION 143cad5f0 ssl_get_prev_session body=1137 status=ok
// SIG undefined ssl_get_prev_session(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ssl_get_prev_session(int *param_1,longlong param_2)

{
  ulonglong _Size;
  size_t sVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  __time64_t _Var8;
  undefined4 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_268 [32];
  char *local_248;
  undefined8 local_240;
  int *local_238;
  int local_230 [2];
  int local_228 [36];
  ulonglong local_198;
  undefined1 local_190 [328];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  piVar5 = (int *)0x0;
  local_238 = (int *)0x0;
  bVar3 = false;
  bVar2 = false;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    param_1[0x19c] = 1;
    local_240 = 0;
    local_248 = (char *)0x0;
    iVar4 = tls_parse_extension(param_1,0x12,0x80,*(undefined8 *)(param_2 + 0x288));
    if (iVar4 != 0) {
      local_240 = 0;
      local_248 = (char *)0x0;
      iVar4 = tls_parse_extension(param_1,0x19,0x80,*(undefined8 *)(param_2 + 0x288));
      if (iVar4 != 0) {
        piVar6 = *(int **)(param_1 + 0x142);
        bVar2 = false;
        goto LAB_143cad863;
      }
    }
LAB_143cad935:
    uVar7 = 0xffffffff;
  }
  else {
    iVar4 = tls_get_ticket_from_client(param_1,param_2,&local_238);
    piVar6 = local_238;
    if (iVar4 < 0) {
LAB_143cad863:
      local_238 = piVar6;
      piVar5 = local_238;
      if (local_238 != (int *)0x0) {
        if (*local_238 == *param_1) {
          sVar1 = *(size_t *)(param_1 + 0x138);
          if ((*(size_t *)(local_238 + 0x2e) == sVar1) &&
             (iVar4 = _guard_xfg_dispatch_icall_nop
                                (local_238 + 0x30,param_1 + 0x13a,*(size_t *)(local_238 + 0x2e)),
             iVar4 == 0)) {
            if (((*(byte *)(param_1 + 0x156) & 1) == 0) || (sVar1 != 0)) {
              _Var8 = _time64((__time64_t *)0x0);
              piVar5 = local_238;
              if (local_238[0x46] < (int)_Var8 - local_238[0x47]) {
                LOCK();
                *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x84) =
                     *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x84) + 1;
                UNLOCK();
                bVar3 = false;
                if (bVar2) {
                  remove_session_lock(*(undefined8 *)(param_1 + 0x1ce),local_238,1);
                  piVar5 = local_238;
                  bVar3 = false;
                }
              }
              else {
                if ((*(byte *)(local_238 + 0x74) & 1) != 0) {
                  if ((**(uint **)(param_1 + 0x2a) & 0x200) != 0) {
LAB_143cad9d7:
                    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0)
                        || (iVar4 = **(int **)(param_1 + 2), iVar4 < 0x304)) || (iVar4 == 0x10000))
                    {
                      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
                      *(int **)(param_1 + 0x142) = local_238;
                    }
                    LOCK();
                    *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x8c) =
                         *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x8c) + 1;
                    UNLOCK();
                    param_1[0x16a] = *(int *)(*(longlong *)(param_1 + 0x142) + 0x110);
                    return 1;
                  }
                  local_240 = CONCAT44(local_240._4_4_,0x271);
                  uVar9 = 0x2f;
                  uVar11 = 0x68;
                  goto LAB_143cad8cf;
                }
                if ((**(uint **)(param_1 + 0x2a) & 0x200) == 0) goto LAB_143cad9d7;
              }
            }
            else {
              local_240 = CONCAT44(local_240._4_4_,0x25e);
              uVar9 = 0x50;
              uVar11 = 0x115;
LAB_143cad8cf:
              local_248 = "ssl\\ssl_sess.c";
              ossl_statem_fatal(param_1,uVar9,0xd9,uVar11);
              piVar5 = local_238;
              bVar3 = true;
            }
          }
        }
        goto LAB_143cad8e8;
      }
    }
    else {
      if (1 < iVar4) {
        if ((iVar4 < 4) && (_Size = *(ulonglong *)(param_2 + 0x28), _Size != 0)) {
          bVar2 = true;
          lVar10 = *(longlong *)(param_1 + 0x1ce);
          if ((*(uint *)(lVar10 + 0x48) & 0x100) == 0) {
            local_228[0] = *param_1;
            piVar6 = piVar5;
            if (_Size < 0x21) {
              _guard_xfg_dispatch_icall_nop(local_190,(void *)(param_2 + 0x30),_Size);
              local_198 = _Size;
              CRYPTO_THREAD_read_lock(*(undefined8 *)(lVar10 + 0x378));
              piVar5 = (int *)OPENSSL_LH_retrieve(*(undefined8 *)
                                                   (*(longlong *)(param_1 + 0x1ce) + 0x28),local_228
                                                 );
              if (piVar5 != (int *)0x0) {
                LOCK();
                piVar5[0x45] = piVar5[0x45] + 1;
                UNLOCK();
              }
              CRYPTO_THREAD_unlock(*(undefined8 *)(*(longlong *)(param_1 + 0x1ce) + 0x378));
              piVar6 = piVar5;
              if (piVar5 == (int *)0x0) {
                LOCK();
                *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) =
                     *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x80) + 1;
                UNLOCK();
                lVar10 = *(longlong *)(param_1 + 0x1ce);
                goto LAB_143cad7b0;
              }
            }
          }
          else {
LAB_143cad7b0:
            piVar6 = piVar5;
            if (*(code **)(lVar10 + 0x60) != (code *)0x0) {
              local_230[0] = 1;
              piVar6 = (int *)(**(code **)(lVar10 + 0x60))
                                        (param_1,(void *)(param_2 + 0x30),_Size & 0xffffffff,
                                         local_230);
              if (piVar6 != (int *)0x0) {
                LOCK();
                *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x90) =
                     *(int *)(*(longlong *)(param_1 + 0x1ce) + 0x90) + 1;
                UNLOCK();
                if (local_230[0] != 0) {
                  LOCK();
                  piVar6[0x45] = piVar6[0x45] + 1;
                  UNLOCK();
                }
                if ((*(uint *)(*(longlong *)(param_1 + 0x1ce) + 0x48) & 0x200) == 0) {
                  SSL_CTX_add_session(*(longlong *)(param_1 + 0x1ce),piVar6);
                }
              }
            }
          }
        }
        goto LAB_143cad863;
      }
      bVar3 = true;
      local_240 = CONCAT44(local_240._4_4_,0x22f);
      local_248 = "ssl\\ssl_sess.c";
      ossl_statem_fatal(param_1,0x50,0xd9,0x44);
      piVar5 = local_238;
      bVar2 = false;
LAB_143cad8e8:
      if (piVar5 != (int *)0x0) {
        SSL_SESSION_free(piVar5);
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
            (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
          param_1[0x142] = 0;
          param_1[0x143] = 0;
        }
        if (!bVar2) {
          param_1[0x19c] = 1;
        }
      }
      if (bVar3) goto LAB_143cad935;
    }
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143cada70 ssl_session_dup body=1081 status=ok
// SIG undefined ssl_session_dup(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * ssl_session_dup(undefined8 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  
  uVar12 = 0x143cada90;
  puVar8 = (undefined8 *)CRYPTO_malloc(0x1e0,"ssl\\ssl_sess.c",0x6e);
  if (puVar8 != (undefined8 *)0x0) {
    lVar9 = 3;
    puVar5 = param_1;
    puVar6 = puVar8;
    do {
      puVar11 = puVar6;
      puVar10 = puVar5;
      uVar4 = puVar10[1];
      *puVar11 = *puVar10;
      puVar11[1] = uVar4;
      uVar4 = puVar10[3];
      puVar11[2] = puVar10[2];
      puVar11[3] = uVar4;
      uVar4 = puVar10[5];
      puVar11[4] = puVar10[4];
      puVar11[5] = uVar4;
      uVar4 = puVar10[7];
      puVar11[6] = puVar10[6];
      puVar11[7] = uVar4;
      uVar4 = puVar10[9];
      puVar11[8] = puVar10[8];
      puVar11[9] = uVar4;
      uVar4 = puVar10[0xb];
      puVar11[10] = puVar10[10];
      puVar11[0xb] = uVar4;
      uVar4 = puVar10[0xd];
      puVar11[0xc] = puVar10[0xc];
      puVar11[0xd] = uVar4;
      uVar4 = puVar10[0xf];
      puVar11[0xe] = puVar10[0xe];
      puVar11[0xf] = uVar4;
      lVar9 = lVar9 + -1;
      puVar5 = puVar10 + 0x10;
      puVar6 = puVar11 + 0x10;
    } while (lVar9 != 0);
    uVar4 = puVar10[0x11];
    puVar11[0x10] = puVar10[0x10];
    puVar11[0x11] = uVar4;
    uVar4 = puVar10[0x13];
    puVar11[0x12] = puVar10[0x12];
    puVar11[0x13] = uVar4;
    uVar4 = puVar10[0x15];
    puVar11[0x14] = puVar10[0x14];
    puVar11[0x15] = uVar4;
    uVar4 = puVar10[0x17];
    puVar11[0x16] = puVar10[0x16];
    puVar11[0x17] = uVar4;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xc4);
    uVar2 = *(undefined4 *)(puVar10 + 0x19);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xcc);
    *(undefined4 *)(puVar11 + 0x18) = *(undefined4 *)(puVar10 + 0x18);
    *(undefined4 *)((longlong)puVar11 + 0xc4) = uVar1;
    *(undefined4 *)(puVar11 + 0x19) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xcc) = uVar3;
    uVar1 = *(undefined4 *)((longlong)puVar10 + 0xd4);
    uVar2 = *(undefined4 *)(puVar10 + 0x1b);
    uVar3 = *(undefined4 *)((longlong)puVar10 + 0xdc);
    *(undefined4 *)(puVar11 + 0x1a) = *(undefined4 *)(puVar10 + 0x1a);
    *(undefined4 *)((longlong)puVar11 + 0xd4) = uVar1;
    *(undefined4 *)(puVar11 + 0x1b) = uVar2;
    *(undefined4 *)((longlong)puVar11 + 0xdc) = uVar3;
    puVar8[0x1c] = 0;
    puVar8[0x1d] = 0;
    puVar8[0x27] = 0;
    puVar8[0x2b] = 0;
    puVar8[0x2d] = 0;
    puVar8[0x2f] = 0;
    puVar8[0x30] = 0;
    puVar8[0x34] = 0;
    puVar8[0x37] = 0;
    puVar8[0x21] = 0;
    puVar8[0x1f] = 0;
    puVar8[0x38] = 0;
    puVar8[0x28] = 0;
    puVar8[0x29] = 0;
    puVar8[0x2a] = 0;
    *(undefined4 *)((longlong)puVar8 + 0x114) = 1;
    lVar9 = CRYPTO_THREAD_lock_new();
    puVar8[0x3b] = lVar9;
    if ((lVar9 != 0) && (iVar7 = CRYPTO_new_ex_data(2,puVar8,puVar8 + 0x28), iVar7 != 0)) {
      if (param_1[0x1f] != 0) {
        iVar7 = X509_up_ref();
        if (iVar7 == 0) goto LAB_143caddb4;
        puVar8[0x1f] = param_1[0x1f];
      }
      if (param_1[0x21] != 0) {
        lVar9 = X509_chain_up_ref();
        puVar8[0x21] = lVar9;
        if (lVar9 == 0) goto LAB_143caddb4;
      }
      if (param_1[0x1c] != 0) {
        lVar9 = CRYPTO_strdup(param_1[0x1c],"ssl\\ssl_sess.c",0xa6);
        puVar8[0x1c] = lVar9;
        if (lVar9 == 0) goto LAB_143caddb4;
      }
      if (param_1[0x1d] != 0) {
        lVar9 = CRYPTO_strdup(param_1[0x1d],"ssl\\ssl_sess.c",0xac);
        puVar8[0x1d] = lVar9;
        if (lVar9 == 0) goto LAB_143caddb4;
      }
      if (param_1[0x27] != 0) {
        lVar9 = OPENSSL_sk_dup();
        puVar8[0x27] = lVar9;
        if (lVar9 == 0) goto LAB_143caddb4;
      }
      iVar7 = CRYPTO_dup_ex_data(2,puVar8 + 0x28,param_1 + 0x28);
      if (iVar7 != 0) {
        if (param_1[0x2b] != 0) {
          lVar9 = CRYPTO_strdup(param_1[0x2b],"ssl\\ssl_sess.c",0xbf);
          puVar8[0x2b] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if (param_1[0x2d] != 0) {
          lVar9 = CRYPTO_memdup(param_1[0x2d],param_1[0x2c],"ssl\\ssl_sess.c",200);
          puVar8[0x2d] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if (param_1[0x2f] != 0) {
          lVar9 = CRYPTO_memdup(param_1[0x2f],param_1[0x2e] * 2,"ssl\\ssl_sess.c",0xd0);
          puVar8[0x2f] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if ((param_2 == 0) || (param_1[0x30] == 0)) {
          *(undefined4 *)(puVar8 + 0x32) = 0;
          puVar8[0x31] = 0;
        }
        else {
          lVar9 = CRYPTO_memdup(param_1[0x30],param_1[0x31],"ssl\\ssl_sess.c",0xd8);
          puVar8[0x30] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if (param_1[0x34] != 0) {
          lVar9 = CRYPTO_memdup(param_1[0x34],param_1[0x35],"ssl\\ssl_sess.c",0xe2);
          puVar8[0x34] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if (param_1[0x37] != 0) {
          lVar9 = CRYPTO_strdup(param_1[0x37],"ssl\\ssl_sess.c",0xe9);
          puVar8[0x37] = lVar9;
          if (lVar9 == 0) goto LAB_143caddb4;
        }
        if (param_1[0x38] == 0) {
          return puVar8;
        }
        lVar9 = CRYPTO_memdup(param_1[0x38],param_1[0x39],"ssl\\ssl_sess.c",0xf2);
        puVar8[0x38] = lVar9;
        if (lVar9 != 0) {
          return puVar8;
        }
      }
    }
  }
LAB_143caddb4:
  ERR_put_error(0x14,0x15c,0x41,"ssl\\ssl_sess.c",0xf9,uVar12);
  SSL_SESSION_free(puVar8);
  return (undefined8 *)0x0;
}



// FUNCTION 143cadeb0 timeout_cb body=114 status=ok
// SIG undefined timeout_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void timeout_cb(longlong param_1,longlong *param_2)

{
  if (((int)param_2[1] == 0) ||
     (*(int *)(param_1 + 0x11c) + *(int *)(param_1 + 0x118) < (int)param_2[1])) {
    OPENSSL_LH_delete(param_2[2],param_1);
    SSL_SESSION_list_remove(*param_2,param_1);
    *(undefined4 *)(param_1 + 0xf0) = 1;
    if (*(code **)(*param_2 + 0x58) != (code *)0x0) {
      (**(code **)(*param_2 + 0x58))();
    }
    SSL_SESSION_free(param_1);
  }
  return;
}



// FUNCTION 143cadf30 SSL_CIPHER_find body=31 status=ok
// SIG undefined SSL_CIPHER_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CIPHER_find(longlong param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143cadf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  return;
}



// FUNCTION 143cadf50 SSL_CIPHER_get_cipher_nid body=53 status=ok
// SIG undefined SSL_CIPHER_get_cipher_nid(void)

undefined4 SSL_CIPHER_get_cipher_nid(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  
  if (param_1 != 0) {
    piVar2 = &DAT_145d48b40;
    uVar1 = 0;
    do {
      if (*piVar2 == *(int *)(param_1 + 0x24)) {
        if ((int)uVar1 == -1) {
          return 0;
        }
        return (&DAT_145d48b44)[(longlong)(int)uVar1 * 2];
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar1 < 0x16);
  }
  return 0;
}



// FUNCTION 143cadf90 SSL_COMP_get_compression_methods body=44 status=ok
// SIG undefined SSL_COMP_get_compression_methods(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
SSL_COMP_get_compression_methods
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  CRYPTO_THREAD_run_once
            (&DAT_146bc9818,do_load_builtin_compressions_ossl_,param_3,param_4,0x143cadf9a);
  return DAT_146bc9810;
}



// FUNCTION 143cadfc0 SSL_CTX_set_ciphersuites body=70 status=ok
// SIG undefined SSL_CTX_set_ciphersuites(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_CTX_set_ciphersuites(longlong param_1)

{
  int iVar1;
  
  iVar1 = set_ciphersuites(param_1 + 0x18);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 8) != 0)) {
    update_cipher_list(param_1 + 8,param_1 + 0x10,*(undefined8 *)(param_1 + 0x18));
  }
  return;
}



// FUNCTION 143cae010 SSL_set_ciphersuites body=81 status=ok
// SIG undefined SSL_set_ciphersuites(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL_set_ciphersuites(longlong param_1)

{
  int iVar1;
  
  iVar1 = set_ciphersuites(param_1 + 0x120);
  if ((iVar1 != 0) && (*(longlong *)(param_1 + 0x110) != 0)) {
    update_cipher_list((longlong *)(param_1 + 0x110),param_1 + 0x118,
                       *(undefined8 *)(param_1 + 0x120));
  }
  return;
}



// FUNCTION 143cae070 ciphersuite_cb body=262 status=ok
// SIG undefined ciphersuite_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 ciphersuite_cb(void *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong _Size;
  undefined4 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [80];
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cae07c;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (param_2 < 0x50) {
    _Size = (ulonglong)param_2;
    _guard_xfg_dispatch_icall_nop(local_68,param_1,_Size);
    if (0x4f < _Size) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_68[_Size] = 0;
    lVar2 = ssl3_get_cipher_by_std_name(local_68);
    if (lVar2 == 0) {
      local_78 = 0x50c;
      uVar3 = 0xb9;
    }
    else {
      iVar1 = OPENSSL_sk_push(param_3,lVar2);
      if (iVar1 != 0) {
        return 1;
      }
      local_78 = 0x511;
      uVar3 = 0x44;
    }
    ERR_put_error(0x14,0x26e,uVar3,"ssl\\ssl_ciph.c");
  }
  else {
    local_78 = 0x503;
    ERR_put_error(0x14,0x26e,0xb9,"ssl\\ssl_ciph.c");
  }
  return 0;
}



// FUNCTION 143cae180 cmeth_free body=35 status=ok
// SIG undefined cmeth_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void cmeth_free(undefined8 param_1)

{
  CRYPTO_free(param_1,"ssl\\ssl_ciph.c",0x79c);
  return;
}



// FUNCTION 143cae1b0 do_load_builtin_compressions_ossl_ body=190 status=ok
// SIG undefined do_load_builtin_compressions_ossl_(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void do_load_builtin_compressions_ossl_(void)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  
  uVar3 = COMP_zlib();
  AK::MemoryMgr::GetPoolName(3);
  DAT_146bc9810 = OPENSSL_sk_new(&LAB_143cae300);
  iVar2 = FRollingHash::GetWindowSize(uVar3);
  if (((iVar2 != 0) && (DAT_146bc9810 != 0)) &&
     (puVar4 = (undefined4 *)CRYPTO_malloc(0x18,"ssl\\ssl_ciph.c",0x1d1),
     puVar4 != (undefined4 *)0x0)) {
    *(undefined8 *)(puVar4 + 4) = uVar3;
    *puVar4 = 1;
    uVar3 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(uVar3);
    lVar1 = DAT_146bc9810;
    *(undefined8 *)(puVar4 + 2) = uVar3;
    OPENSSL_sk_push(lVar1,puVar4);
    OPENSSL_sk_sort(DAT_146bc9810);
  }
  AK::MemoryMgr::GetPoolName(2);
  _DAT_146bc98ec = 1;
  return;
}



// FUNCTION 143cae270 set_ciphersuites body=139 status=ok
// SIG undefined set_ciphersuites(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 set_ciphersuites(longlong *param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cae285;
  lVar2 = OPENSSL_sk_new_null();
  if (lVar2 == 0) {
    return 0;
  }
  if ((*param_2 != '\0') &&
     (iVar1 = CONF_parse_list(param_2,0x3a,1,ciphersuite_cb,lVar2,uVar3), iVar1 == 0)) {
    OPENSSL_sk_free(lVar2);
    return 0;
  }
  OPENSSL_sk_free(*param_1);
  *param_1 = lVar2;
  return 1;
}



// FUNCTION 143cae310 ssl3_comp_find body=107 status=ok
// SIG undefined ssl3_comp_find(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ssl3_comp_find(longlong param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((param_2 != 0) && (param_1 != 0)) {
    iVar1 = OPENSSL_sk_num();
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = (int *)OPENSSL_sk_value(param_1,iVar3);
        if (*piVar2 == param_2) {
          return piVar2;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
    }
  }
  return (int *)0x0;
}



// FUNCTION 143cae380 ssl_cert_is_disabled body=51 status=ok
// SIG undefined ssl_cert_is_disabled(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cert_is_disabled(void)

{
  longlong lVar1;
  
  lVar1 = ssl_cert_lookup_by_idx();
  if ((lVar1 != 0) && ((DAT_146bc98e8 & *(uint *)(lVar1 + 4)) == 0)) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cae3c0 ssl_cipher_apply_rule body=1034 status=ok
// SIG undefined ssl_cipher_apply_rule(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_cipher_apply_rule
               (int param_1,uint param_2,uint param_3,uint param_4,uint param_5,int param_6,
               uint param_7,int param_8,int param_9,undefined8 *param_10,undefined8 *param_11)

{
  longlong lVar1;
  bool bVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  
  bVar11 = false;
  if ((param_8 == 3) || (bVar2 = false, param_8 == 6)) {
    bVar11 = true;
    bVar2 = true;
  }
  plVar6 = (longlong *)*param_10;
  plVar7 = (longlong *)*param_11;
  plVar3 = plVar6;
  if (!bVar11) {
    plVar3 = plVar7;
  }
  if (plVar3 == (longlong *)0x0) {
    *param_10 = plVar6;
    *param_11 = plVar7;
    return;
  }
  plVar9 = plVar7;
  if (!bVar11) {
    plVar9 = plVar6;
  }
  do {
    if (plVar9 == (longlong *)0x0) break;
    if (bVar2) {
      plVar10 = (longlong *)plVar9[3];
    }
    else {
      plVar10 = (longlong *)plVar9[2];
    }
    lVar1 = *plVar9;
    if (param_9 < 0) {
      if (((((((param_1 == 0) || (param_1 == *(int *)(lVar1 + 0x18))) &&
             ((param_2 == 0 || ((*(uint *)(lVar1 + 0x1c) & param_2) != 0)))) &&
            ((param_3 == 0 || ((*(uint *)(lVar1 + 0x20) & param_3) != 0)))) &&
           ((param_4 == 0 || ((*(uint *)(lVar1 + 0x24) & param_4) != 0)))) &&
          ((((param_5 == 0 || ((*(uint *)(lVar1 + 0x28) & param_5) != 0)) &&
            ((param_6 == 0 || (param_6 == *(int *)(lVar1 + 0x2c))))) &&
           (((param_7 & 0x1f) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x1f) != 0)))))) &&
         (((param_7 & 0x20) == 0 || ((*(uint *)(lVar1 + 0x3c) & param_7 & 0x20) != 0))))
      goto LAB_143cae59a;
    }
    else if (param_9 == *(int *)(lVar1 + 0x44)) {
LAB_143cae59a:
      if (param_8 == 1) {
        if ((int)plVar9[1] == 0) {
          plVar5 = plVar6;
          if (plVar9 != plVar7) {
            plVar4 = (longlong *)plVar9[2];
            plVar5 = plVar4;
            if (plVar9 != plVar6) {
              plVar5 = plVar6;
            }
            if (plVar9[3] != 0) {
              *(longlong **)(plVar9[3] + 0x10) = plVar4;
              plVar4 = (longlong *)plVar9[2];
            }
            if (plVar4 != (longlong *)0x0) {
              plVar4[3] = plVar9[3];
            }
            plVar7[2] = (longlong)plVar9;
            plVar9[3] = (longlong)plVar7;
            plVar9[2] = 0;
            plVar7 = plVar9;
          }
          *(undefined4 *)(plVar9 + 1) = 1;
          plVar6 = plVar5;
        }
      }
      else if (param_8 == 4) {
        if (((int)plVar9[1] != 0) && (plVar9 != plVar7)) {
          plVar5 = (longlong *)plVar9[2];
          plVar4 = plVar5;
          if (plVar9 != plVar6) {
            plVar4 = plVar6;
          }
          if (plVar9[3] != 0) {
            *(longlong **)(plVar9[3] + 0x10) = plVar5;
            plVar5 = (longlong *)plVar9[2];
          }
          if (plVar5 != (longlong *)0x0) {
            plVar5[3] = plVar9[3];
          }
          plVar7[2] = (longlong)plVar9;
          plVar9[3] = (longlong)plVar7;
          plVar9[2] = 0;
          plVar6 = plVar4;
          plVar7 = plVar9;
        }
      }
      else if (param_8 == 3) {
        if ((int)plVar9[1] != 0) {
          if (plVar9 == plVar6) {
            *(undefined4 *)(plVar9 + 1) = 0;
          }
          else {
            plVar5 = (longlong *)plVar9[3];
            plVar4 = plVar5;
            if (plVar9 != plVar7) {
              plVar4 = plVar7;
            }
            if (plVar9[2] != 0) {
              *(longlong **)(plVar9[2] + 0x18) = plVar5;
              plVar5 = (longlong *)plVar9[3];
            }
            if (plVar5 != (longlong *)0x0) {
              plVar5[2] = plVar9[2];
            }
            plVar6[3] = (longlong)plVar9;
            plVar9[2] = (longlong)plVar6;
            plVar9[3] = 0;
            *(undefined4 *)(plVar9 + 1) = 0;
            plVar6 = plVar9;
            plVar7 = plVar4;
          }
        }
      }
      else if (param_8 == 6) {
        if (((int)plVar9[1] != 0) && (plVar9 != plVar6)) {
          plVar5 = (longlong *)plVar9[3];
          plVar4 = plVar5;
          if (plVar9 != plVar7) {
            plVar4 = plVar7;
          }
          if (plVar9[2] != 0) {
            *(longlong **)(plVar9[2] + 0x18) = plVar5;
            plVar5 = (longlong *)plVar9[3];
          }
          if (plVar5 != (longlong *)0x0) {
            plVar5[2] = plVar9[2];
          }
          plVar6[3] = (longlong)plVar9;
          plVar9[2] = (longlong)plVar6;
          plVar9[3] = 0;
          plVar6 = plVar9;
          plVar7 = plVar4;
        }
      }
      else if (param_8 == 2) {
        plVar5 = (longlong *)plVar9[2];
        plVar4 = plVar5;
        if (plVar6 != plVar9) {
          *(longlong **)(plVar9[3] + 0x10) = plVar5;
          plVar5 = (longlong *)plVar9[2];
          plVar4 = plVar6;
        }
        plVar6 = (longlong *)plVar9[3];
        plVar8 = plVar6;
        if (plVar7 != plVar9) {
          plVar8 = plVar7;
        }
        *(undefined4 *)(plVar9 + 1) = 0;
        if (plVar5 != (longlong *)0x0) {
          plVar5[3] = (longlong)plVar6;
          plVar6 = (longlong *)plVar9[3];
        }
        if (plVar6 != (longlong *)0x0) {
          plVar6[2] = plVar9[2];
        }
        plVar9[2] = 0;
        plVar9[3] = 0;
        plVar6 = plVar4;
        plVar7 = plVar8;
      }
    }
    bVar11 = plVar9 != plVar3;
    plVar9 = plVar10;
  } while (bVar11);
  *param_10 = plVar6;
  *param_11 = plVar7;
  return;
}



// FUNCTION 143cae7d0 ssl_cipher_collect_ciphers body=766 status=ok
// SIG undefined ssl_cipher_collect_ciphers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_cipher_collect_ciphers
               (longlong param_1,int param_2,uint param_3,uint param_4,uint param_5,uint param_6,
               longlong param_7,longlong *param_8,longlong *param_9)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auVar12 [16];
  undefined1 in_XMM2 [16];
  undefined1 auVar13 [16];
  ulonglong uVar16;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar17 [16];
  
  if (0 < param_2) {
    iVar7 = 0;
    iVar8 = 0;
    puVar6 = (undefined8 *)(param_7 + 0x18);
    do {
      piVar3 = (int *)(**(code **)(param_1 + 0xb0))(iVar8);
      if (((((piVar3 != (int *)0x0) && (*piVar3 != 0)) && ((piVar3[7] & param_3) == 0)) &&
          (((piVar3[8] & param_4) == 0 && ((piVar3[9] & param_5) == 0)))) &&
         ((piVar3[10] & param_6) == 0)) {
        if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 8) == 0) {
          iVar5 = piVar3[0xb];
        }
        else {
          iVar5 = piVar3[0xd];
        }
        if (iVar5 != 0) {
          iVar7 = iVar7 + 1;
          puVar6[-3] = piVar3;
          puVar6[-1] = 0;
          *puVar6 = 0;
          *(undefined4 *)(puVar6 + -2) = 0;
          puVar6 = puVar6 + 4;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < param_2);
    if (0 < iVar7) {
      *(undefined8 *)(param_7 + 0x18) = 0;
      if (1 < iVar7) {
        iVar8 = 1;
        *(longlong *)(param_7 + 0x10) = param_7 + 0x20;
        if (((1 < iVar7 + -1) && (3 < iVar7 - 2U)) && (1 < DAT_1468387b0)) {
          uVar2 = iVar7 - 2U & 0x80000003;
          if ((int)uVar2 < 0) {
            uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
          }
          plVar9 = (longlong *)(param_7 + 0x50);
          iVar5 = iVar8;
          do {
            iVar1 = iVar5 + 2;
            iVar8 = iVar5 + 4;
            auVar15._0_4_ = iVar5 + -1;
            auVar15._4_4_ = iVar5;
            auVar15._8_4_ = iVar5;
            auVar15._12_4_ = iVar5;
            auVar12._0_4_ = iVar5 + 1;
            auVar12._4_4_ = iVar5 + 2;
            auVar12._8_4_ = iVar5;
            auVar12._12_4_ = iVar5;
            auVar13 = pmovsxdq(in_XMM2,auVar15);
            auVar12 = pmovsxdq(auVar15,auVar12);
            uVar16 = auVar13._8_8_ * 0x20 + param_7;
            plVar9[-3] = auVar13._0_8_ * 0x20 + param_7;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar16;
            plVar9[1] = uVar16;
            plVar9[-4] = auVar12._0_8_ * 0x20 + param_7;
            *plVar9 = auVar12._8_8_ * 0x20 + param_7;
            auVar13._0_4_ = iVar5 + 1;
            auVar13._4_4_ = iVar5 + 2;
            auVar13._8_4_ = iVar1;
            auVar13._12_4_ = iVar1;
            auVar17._0_4_ = iVar5 + 3;
            auVar17._4_4_ = iVar5 + 4;
            auVar17._8_4_ = iVar1;
            auVar17._12_4_ = iVar1;
            auVar15 = pmovsxdq(auVar14,auVar13);
            auVar12 = pmovsxdq(auVar13,auVar17);
            uVar16 = auVar15._8_8_ * 0x20 + param_7;
            plVar9[5] = auVar15._0_8_ * 0x20 + param_7;
            in_XMM2._8_8_ = 0;
            in_XMM2._0_8_ = uVar16;
            plVar9[9] = uVar16;
            plVar9[4] = auVar12._0_8_ * 0x20 + param_7;
            plVar9[8] = auVar12._8_8_ * 0x20 + param_7;
            plVar9 = plVar9 + 0x10;
            iVar5 = iVar8;
          } while (iVar8 < (int)((iVar7 + -1) - uVar2));
        }
        lVar11 = (longlong)iVar7 + -1;
        lVar4 = (longlong)iVar8;
        if (lVar4 < lVar11) {
          lVar10 = lVar11 - lVar4;
          plVar9 = (longlong *)(param_7 + 0x10 + lVar4 * 0x20);
          do {
            *plVar9 = (longlong)(iVar8 + 1) * 0x20 + param_7;
            plVar9[1] = (longlong)(iVar8 + -1) * 0x20 + param_7;
            lVar10 = lVar10 + -1;
            plVar9 = plVar9 + 4;
            iVar8 = iVar8 + 1;
          } while (lVar10 != 0);
        }
        *(longlong *)(lVar11 * 0x20 + 0x18 + param_7) = (longlong)(iVar7 + -2) * 0x20 + param_7;
      }
      lVar4 = param_7 + -0x20 + (longlong)iVar7 * 0x20;
      *(undefined8 *)(lVar4 + 0x10) = 0;
      *param_8 = param_7;
      *param_9 = lVar4;
    }
  }
  return;
}



// FUNCTION 143caead0 FUN_143caead0 body=693 status=ok
// SIG undefined FUN_143caead0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143caead0(uint *param_1,longlong *param_2,longlong *param_3,int *param_4,undefined8 *param_5,
             undefined8 *param_6,int param_7)

{
  longlong lVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int *piVar6;
  int *piVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  uint local_38 [6];
  undefined8 uStack_20;
  
  uStack_20 = 0x143caeaf4;
  lVar1 = *(longlong *)(param_1 + 0x4a);
  if (lVar1 != 0) {
    piVar10 = (int *)0x0;
    if (param_6 == (undefined8 *)0x0) {
      if (param_2 == (longlong *)0x0) {
        return 0;
      }
    }
    else {
      CRYPTO_THREAD_run_once(&DAT_146bc9818,do_load_builtin_compressions_ossl_);
      lVar8 = DAT_146bc9810;
      *param_6 = 0;
      local_38[0] = param_1[0x48];
      if (lVar8 != 0) {
        uVar2 = OPENSSL_sk_find(lVar8,local_38);
        uVar5 = OPENSSL_sk_value(DAT_146bc9810,uVar2);
        *param_6 = uVar5;
      }
      if (param_2 == (longlong *)0x0) {
        if (param_3 == (longlong *)0x0) {
          return 1;
        }
        return 0;
      }
    }
    if (param_3 != (longlong *)0x0) {
      piVar9 = &DAT_145d48b40;
      piVar6 = piVar10;
      do {
        piVar7 = piVar10;
        if (*piVar9 == *(int *)(lVar1 + 0x24)) {
          iVar3 = (int)piVar6;
          if (iVar3 != -1) {
            if (iVar3 == 5) {
              piVar7 = (int *)FUN_143d13050();
            }
            else {
              piVar7 = (int *)(&DAT_146bc9760)[iVar3];
            }
          }
          break;
        }
        piVar6 = (int *)((longlong)piVar6 + 1);
        piVar9 = piVar9 + 2;
      } while (piVar6 < &DAT_00000016);
      *param_2 = (longlong)piVar7;
      piVar9 = &DAT_145d48bf0;
      piVar6 = piVar10;
      do {
        if (*piVar9 == *(int *)(lVar1 + 0x28)) {
          if ((int)piVar6 != -1) {
            lVar8 = (longlong)(int)piVar6;
            *param_3 = (&DAT_146bc9820)[lVar8];
            if (param_4 != (int *)0x0) {
              *param_4 = *(int *)(&DAT_146832d58 + lVar8 * 4);
            }
            piVar10 = param_4;
            if (param_5 != (undefined8 *)0x0) {
              *param_5 = (&DAT_146bc9880)[lVar8];
            }
            goto LAB_143caec81;
          }
          break;
        }
        piVar6 = (int *)((longlong)piVar6 + 1);
        piVar9 = piVar9 + 2;
      } while (piVar6 < &DAT_0000000c);
      *param_3 = 0;
      if (param_4 != (int *)0x0) {
        *param_4 = 0;
      }
      if (param_5 != (undefined8 *)0x0) {
        *param_5 = 0;
      }
      if (*(int *)(lVar1 + 0x28) != 0x40) {
        piVar10 = param_4;
      }
LAB_143caec81:
      if (((*param_2 != 0) &&
          ((*param_3 != 0 ||
           (uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(), (uVar4 >> 0x15 & 1) != 0
           )))) && ((piVar10 == (int *)0x0 || (*piVar10 != 0)))) {
        if ((((param_7 == 0) && ((*param_1 & 0xffffff00) == 0x300)) && (0x300 < (int)*param_1)) &&
           (((((*(int *)(lVar1 + 0x24) == 4 && (*(int *)(lVar1 + 0x28) == 1)) &&
              (lVar8 = EVP_get_cipherbyname("RC4-HMAC-MD5"), lVar8 != 0)) ||
             (((((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 2)) &&
                (lVar8 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA1"), lVar8 != 0)) ||
               (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 2)) &&
                (lVar8 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA1"), lVar8 != 0)))) ||
              (((*(int *)(lVar1 + 0x24) == 0x40 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
               (lVar8 = EVP_get_cipherbyname("AES-128-CBC-HMAC-SHA256"), lVar8 != 0)))))) ||
            (((*(int *)(lVar1 + 0x24) == 0x80 && (*(int *)(lVar1 + 0x28) == 0x10)) &&
             (lVar8 = EVP_get_cipherbyname("AES-256-CBC-HMAC-SHA256"), lVar8 != 0)))))) {
          *param_2 = lVar8;
          *param_3 = 0;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143caed90 ssl_cipher_process_rulestr body=1461 status=ok
// SIG undefined ssl_cipher_process_rulestr(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
ssl_cipher_process_rulestr
          (byte *param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,longlong param_5)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  byte *_Str1;
  byte *pbVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  longlong *plVar14;
  size_t _MaxCount;
  int local_res8;
  int local_78;
  undefined4 local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  
  bVar5 = *param_1;
  uVar8 = 1;
  local_res8 = 0;
  local_74 = 1;
  if (bVar5 == 0) {
    return 1;
  }
  do {
    if (bVar5 == 0x2d) {
      local_6c = 3;
LAB_143caee24:
      param_1 = param_1 + 1;
LAB_143caee29:
      local_68 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      local_70 = 0;
      local_78 = 0;
      do {
        _Str1 = param_1;
        _MaxCount = 0;
        lVar11 = 0;
        pbVar10 = _Str1;
        while( true ) {
          bVar5 = *pbVar10;
          iVar7 = (int)_MaxCount;
          if (((0x2d < (byte)(bVar5 - 0x2d)) ||
              ((0x3ffffff11ffbU >> ((longlong)(char)(bVar5 - 0x2d) & 0x3fU) & 1) == 0)) &&
             (0x19 < (byte)(bVar5 + 0x9f))) break;
          pbVar10 = pbVar10 + 1;
          _MaxCount = (size_t)(iVar7 + 1);
          lVar11 = lVar11 + 1;
        }
        if (iVar7 == 0) {
          ERR_put_error(0x14);
          bVar4 = false;
          local_74 = 0;
          param_1 = pbVar10 + 1;
          break;
        }
        param_1 = pbVar10;
        if (local_6c == 5) goto LAB_143caefd4;
        param_1 = pbVar10 + 1;
        if (bVar5 != 0x2b) {
          param_1 = pbVar10;
        }
        local_res8 = 0;
        lVar9 = *param_4;
        bVar4 = false;
        lVar13 = 0;
        if (lVar9 == 0) break;
        plVar14 = param_4;
        while ((iVar6 = strncmp((char *)_Str1,*(char **)(lVar9 + 8),(longlong)iVar7), iVar6 != 0 ||
               (*(char *)(*(longlong *)(*plVar14 + 8) + lVar11) != '\0'))) {
          lVar13 = lVar13 + 1;
          lVar9 = param_4[lVar13];
          plVar14 = param_4 + lVar13;
          if (lVar9 == 0) goto LAB_143caefbf;
        }
        bVar4 = true;
        piVar3 = (int *)param_4[lVar13];
        uVar1 = piVar3[7];
        uVar12 = local_68;
        if ((((((uVar1 != 0) && (uVar12 = uVar1, local_68 != 0)) &&
              (uVar12 = local_68 & uVar1, (local_68 & uVar1) == 0)) ||
             (((local_68 = uVar12, uVar1 = piVar3[8], uVar12 = local_5c, uVar1 != 0 &&
               (uVar12 = uVar1, local_5c != 0)) &&
              (uVar12 = local_5c & uVar1, (local_5c & uVar1) == 0)))) ||
            (((local_5c = uVar12, uVar1 = piVar3[9], uVar12 = local_60, uVar1 != 0 &&
              (uVar12 = uVar1, local_60 != 0)) &&
             (uVar12 = local_60 & uVar1, (local_60 & uVar1) == 0)))) ||
           (((local_60 = uVar12, uVar1 = piVar3[10], uVar12 = local_64, uVar1 != 0 &&
             (uVar12 = uVar1, local_64 != 0)) &&
            (uVar12 = local_64 & uVar1, (local_64 & uVar1) == 0)))) {
LAB_143caefb8:
          bVar4 = false;
          break;
        }
        local_64 = uVar12;
        uVar1 = piVar3[0xf];
        uVar12 = local_70;
        if ((((uVar1 & 0x1f) != 0) && (uVar12 = uVar1 & 0x1f, (local_70 & 0x1f) != 0)) &&
           (uVar12 = local_70 & (uVar1 | 0xffffffe0), (uVar12 & 0x1f) == 0)) goto LAB_143caefb8;
        local_70 = uVar12;
        if ((uVar1 & 0x20) != 0) {
          if ((local_70 & 0x20) == 0) {
            local_70 = local_70 | uVar1 & 0x20;
          }
          else {
            local_70 = local_70 & (uVar1 | 0xffffffdf);
            if ((local_70 & 0x20) == 0) goto LAB_143caefb8;
          }
        }
        iVar6 = local_78;
        if (*piVar3 == 0) {
          iVar2 = piVar3[0xb];
          if (((iVar2 != 0) && (iVar6 = iVar2, local_78 != 0)) && (local_78 != iVar2))
          goto LAB_143caefb8;
        }
        else {
          local_res8 = piVar3[6];
        }
        local_78 = iVar6;
      } while (bVar5 == 0x2b);
LAB_143caefbf:
      if (local_6c == 5) {
LAB_143caefd4:
        iVar6 = 0;
        if (iVar7 == 8) {
          iVar7 = strncmp((char *)_Str1,"STRENGTH",_MaxCount);
          if (iVar7 == 0) {
            iVar6 = ssl_cipher_strength_sort(param_2);
          }
          else {
LAB_143caf1f2:
            ERR_put_error(0x14);
          }
        }
        else {
          if (((iVar7 != 10) || (iVar7 = strncmp((char *)_Str1,"SECLEVEL=",9), iVar7 != 0)) ||
             (5 < (int)(char)_Str1[9] - 0x30U)) goto LAB_143caf1f2;
          iVar6 = 1;
          *(uint *)(param_5 + 0x200) = (int)(char)_Str1[9] - 0x30U;
        }
        uVar8 = 0;
        if (iVar6 != 0) {
          uVar8 = local_74;
        }
        bVar5 = *param_1;
        while ((bVar5 != 0 &&
               ((0x3b < bVar5 || ((0xc00100100000000U >> ((longlong)(char)bVar5 & 0x3fU) & 1) == 0))
               ))) {
          bVar5 = param_1[1];
          param_1 = param_1 + 1;
        }
        bVar5 = *param_1;
        local_74 = uVar8;
      }
      else if (bVar4) {
        ssl_cipher_apply_rule(local_res8);
        bVar5 = *param_1;
      }
      else {
        bVar5 = *param_1;
        if (bVar5 == 0) {
          return local_74;
        }
        do {
          if (((bVar5 == 0x3a) || (bVar5 == 0x20)) || ((bVar5 == 0x3b || (bVar5 == 0x2c)))) break;
          bVar5 = param_1[1];
          param_1 = param_1 + 1;
        } while (bVar5 != 0);
      }
      uVar8 = local_74;
      if (bVar5 == 0) {
        return local_74;
      }
    }
    else {
      if (bVar5 == 0x2b) {
        local_6c = 4;
        goto LAB_143caee24;
      }
      if (bVar5 == 0x21) {
        local_6c = 2;
        goto LAB_143caee24;
      }
      if (bVar5 == 0x40) {
        local_6c = 5;
        goto LAB_143caee24;
      }
      local_6c = 1;
      if ((0x3b < bVar5) || ((0xc00100100000000U >> ((longlong)(char)bVar5 & 0x3fU) & 1) == 0))
      goto LAB_143caee29;
      bVar5 = param_1[1];
      param_1 = param_1 + 1;
    }
    if (bVar5 == 0) {
      return uVar8;
    }
  } while( true );
}



// FUNCTION 143caf350 ssl_cipher_strength_sort body=437 status=ok
// SIG undefined ssl_cipher_strength_sort(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_cipher_strength_sort(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar12 = 0x143caf368;
  iVar6 = 0;
  for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
    if (((int)plVar2[1] != 0) && (iVar6 < *(int *)(*plVar2 + 0x44))) {
      iVar6 = *(int *)(*plVar2 + 0x44);
    }
  }
  lVar7 = (longlong)iVar6;
  lVar4 = CRYPTO_zalloc(lVar7 * 4 + 4,"ssl\\ssl_ciph.c",0x39f);
  if (lVar4 == 0) {
    ERR_put_error(0x14,0xe7,0x41,"ssl\\ssl_ciph.c",0x3a1,uVar12);
    return 0;
  }
  for (plVar2 = (longlong *)*param_1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
    if ((int)plVar2[1] != 0) {
      piVar1 = (int *)(lVar4 + (longlong)*(int *)(*plVar2 + 0x44) * 4);
      *piVar1 = *piVar1 + 1;
    }
  }
  if (-1 < iVar6) {
    do {
      if (0 < *(int *)(lVar4 + lVar7 * 4)) {
        plVar2 = (longlong *)*param_2;
        plVar5 = (longlong *)*param_1;
        plVar8 = plVar2;
        plVar10 = plVar5;
        plVar9 = plVar5;
        if (plVar2 != (longlong *)0x0) {
          do {
            plVar10 = plVar9;
            if (plVar5 == (longlong *)0x0) break;
            plVar3 = (longlong *)plVar5[2];
            if ((((lVar7 < 0) || (iVar6 == *(int *)(*plVar5 + 0x44))) && ((int)plVar5[1] != 0)) &&
               (plVar5 != plVar8)) {
              plVar10 = plVar3;
              if (plVar5 != plVar9) {
                plVar10 = plVar9;
              }
              plVar9 = plVar3;
              if (plVar5[3] != 0) {
                *(longlong **)(plVar5[3] + 0x10) = plVar3;
                plVar9 = (longlong *)plVar5[2];
              }
              if (plVar9 != (longlong *)0x0) {
                plVar9[3] = plVar5[3];
              }
              plVar8[2] = (longlong)plVar5;
              plVar5[3] = (longlong)plVar8;
              plVar5[2] = 0;
              plVar8 = plVar5;
            }
            bVar11 = plVar5 != plVar2;
            plVar5 = plVar3;
            plVar9 = plVar10;
          } while (bVar11);
        }
        *param_1 = plVar10;
        *param_2 = (longlong)plVar8;
      }
      iVar6 = iVar6 + -1;
      lVar7 = lVar7 + -1;
    } while (-1 < lVar7);
  }
  CRYPTO_free(lVar4,"ssl\\ssl_ciph.c",0x3b7);
  return 1;
}



// FUNCTION 143caf510 ssl_comp_free_compression_methods_int body=47 status=ok
// SIG undefined ssl_comp_free_compression_methods_int(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_comp_free_compression_methods_int(void)

{
  undefined8 uVar1;
  
  uVar1 = DAT_146bc9810;
  DAT_146bc9810 = 0;
  OPENSSL_sk_pop_free(uVar1,cmeth_free);
  return;
}



// FUNCTION 143caf540 ssl_create_cipher_list body=3672 status=ok
// SIG undefined ssl_create_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_create_cipher_list
                   (longlong param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                   char *param_5,longlong param_6)

{
  char cVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined *puVar16;
  char *pcVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar24;
  longlong *local_50;
  longlong *local_48;
  longlong local_40;
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar13 = 0;
  uVar7 = 0;
  local_50 = (longlong *)0x0;
  local_48 = (longlong *)0x0;
  if (((param_5 == (char *)0x0) || (param_3 == (longlong *)0x0)) || (param_4 == 0)) {
    return 0;
  }
  iVar4 = 0;
  iVar3 = strncmp(param_5,"SUITEB128ONLY",0xd);
  iVar12 = 1;
  if (iVar3 == 0) {
    uVar7 = 0x10000;
    *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff;
    *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) | 0x10000;
  }
  else {
    iVar3 = strncmp(param_5,"SUITEB128C2",0xb);
    if (iVar3 == 0) {
      uVar7 = 0x30000;
      *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff;
      *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) | 0x30000;
      iVar4 = iVar12;
    }
    else {
      iVar3 = strncmp(param_5,"SUITEB128",9);
      if (iVar3 == 0) {
        uVar7 = 0x30000;
        *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff;
        *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) | 0x30000;
      }
      else {
        iVar3 = strncmp(param_5,"SUITEB192",9);
        if (iVar3 == 0) {
          uVar7 = 0x20000;
        }
        if (uVar7 == 0) {
          uVar7 = *(uint *)(param_6 + 0x1c) & 0x30000;
        }
        else {
          *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) & 0xfffcffff;
          *(uint *)(param_6 + 0x1c) = *(uint *)(param_6 + 0x1c) | uVar7;
        }
      }
    }
  }
  uVar22 = DAT_146bc98e8;
  uVar21 = DAT_146bc98e4;
  uVar20 = DAT_146bc98e0;
  uVar19 = DAT_146bc981c;
  if (uVar7 != 0) {
    if ((*(byte *)(*(longlong *)(param_1 + 0xc0) + 0x60) & 0x10) == 0) {
      ERR_put_error(0x14,0x14b,0x9e,"ssl\\ssl_ciph.c",CONCAT44(uVar24,0x4e0));
      return 0;
    }
    if (uVar7 == 0x10000) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256";
    }
    else if (uVar7 == 0x20000) {
      param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384";
    }
    else if ((uVar7 == 0x30000) && (param_5 = "ECDHE-ECDSA-AES256-GCM-SHA384", iVar4 == 0)) {
      param_5 = "ECDHE-ECDSA-AES128-GCM-SHA256:ECDHE-ECDSA-AES256-GCM-SHA384";
    }
  }
  iVar4 = (**(code **)(param_1 + 0xa8))();
  local_40 = CRYPTO_malloc((longlong)iVar4 << 5,"ssl\\ssl_ciph.c",0x5a1);
  if (local_40 == 0) {
    uVar14 = CONCAT44(uVar24,0x5a3);
LAB_143cb003e:
    ERR_put_error(0x14,0xa6,0x41,"ssl\\ssl_ciph.c",uVar14);
    return 0;
  }
  uVar14 = CONCAT44(uVar24,uVar19);
  ssl_cipher_collect_ciphers(param_1,iVar4,uVar21,uVar22,uVar14,uVar20,local_40,&local_50,&local_48)
  ;
  uVar24 = (undefined4)((ulonglong)uVar14 >> 0x20);
  plVar9 = local_48;
  plVar5 = local_50;
  plVar10 = local_50;
  if (local_48 != (longlong *)0x0) {
    do {
      plVar5 = local_50;
      if (plVar10 == (longlong *)0x0) break;
      plVar15 = (longlong *)plVar10[2];
      if ((((*(byte *)(*plVar10 + 0x1c) & 4) != 0) && ((*(byte *)(*plVar10 + 0x20) & 8) != 0)) &&
         ((int)plVar10[1] == 0)) {
        if (plVar10 != plVar9) {
          plVar5 = plVar15;
          if (plVar10 != local_50) {
            plVar5 = local_50;
          }
          plVar8 = plVar15;
          if (plVar10[3] != 0) {
            *(longlong **)(plVar10[3] + 0x10) = plVar15;
            plVar8 = (longlong *)plVar10[2];
          }
          if (plVar8 != (longlong *)0x0) {
            plVar8[3] = plVar10[3];
          }
          plVar9[2] = (longlong)plVar10;
          plVar10[3] = (longlong)plVar9;
          plVar10[2] = 0;
          plVar9 = plVar10;
        }
        *(undefined4 *)(plVar10 + 1) = 1;
      }
      bVar23 = plVar10 != local_48;
      local_50 = plVar5;
      plVar10 = plVar15;
    } while (bVar23);
  }
  plVar10 = plVar9;
  plVar15 = plVar5;
  plVar8 = plVar5;
  if (plVar9 != (longlong *)0x0) {
    do {
      plVar15 = plVar8;
      if (plVar5 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar5[2];
      if (((*(byte *)(*plVar5 + 0x1c) & 4) != 0) && ((int)plVar5[1] == 0)) {
        if (plVar5 != plVar10) {
          plVar15 = plVar2;
          if (plVar5 != plVar8) {
            plVar15 = plVar8;
          }
          plVar8 = plVar2;
          if (plVar5[3] != 0) {
            *(longlong **)(plVar5[3] + 0x10) = plVar2;
            plVar8 = (longlong *)plVar5[2];
          }
          if (plVar8 != (longlong *)0x0) {
            plVar8[3] = plVar5[3];
          }
          plVar10[2] = (longlong)plVar5;
          plVar5[3] = (longlong)plVar10;
          plVar5[2] = 0;
          plVar10 = plVar5;
        }
        *(undefined4 *)(plVar5 + 1) = 1;
      }
      bVar23 = plVar5 != plVar9;
      plVar5 = plVar2;
      plVar8 = plVar15;
    } while (bVar23);
  }
  plVar5 = plVar10;
  plVar8 = plVar10;
  plVar9 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar5 = plVar8;
      if (plVar10 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar10[3];
      if (((*(byte *)(*plVar10 + 0x1c) & 4) != 0) && ((int)plVar10[1] != 0)) {
        if (plVar10 != plVar9) {
          plVar5 = plVar2;
          if (plVar10 != plVar8) {
            plVar5 = plVar8;
          }
          plVar8 = plVar2;
          if (plVar10[2] != 0) {
            *(longlong **)(plVar10[2] + 0x18) = plVar2;
            plVar8 = (longlong *)plVar10[3];
          }
          if (plVar8 != (longlong *)0x0) {
            plVar8[2] = plVar10[2];
          }
          plVar9[3] = (longlong)plVar10;
          plVar10[2] = (longlong)plVar9;
          plVar10[3] = 0;
          plVar9 = plVar10;
        }
        *(undefined4 *)(plVar10 + 1) = 0;
      }
      bVar23 = plVar10 != plVar15;
      plVar10 = plVar2;
      plVar8 = plVar5;
    } while (bVar23);
  }
  plVar10 = plVar9;
  plVar15 = plVar9;
  plVar8 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    do {
      plVar10 = plVar9;
      if (plVar15 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar15[2];
      if (((*(uint *)(*plVar15 + 0x24) & 0x3000) != 0) && ((int)plVar15[1] == 0)) {
        if (plVar15 != plVar8) {
          plVar10 = plVar2;
          if (plVar15 != plVar9) {
            plVar10 = plVar9;
          }
          plVar9 = plVar2;
          if (plVar15[3] != 0) {
            *(longlong **)(plVar15[3] + 0x10) = plVar2;
            plVar9 = (longlong *)plVar15[2];
          }
          if (plVar9 != (longlong *)0x0) {
            plVar9[3] = plVar15[3];
          }
          plVar8[2] = (longlong)plVar15;
          plVar15[3] = (longlong)plVar8;
          plVar15[2] = 0;
          plVar8 = plVar15;
        }
        *(undefined4 *)(plVar15 + 1) = 1;
      }
      bVar23 = plVar15 != plVar5;
      plVar9 = plVar10;
      plVar15 = plVar2;
    } while (bVar23);
  }
  plVar9 = plVar10;
  plVar5 = plVar10;
  plVar15 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    do {
      plVar9 = plVar5;
      if (plVar10 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar10[2];
      if (((*(uint *)(*plVar10 + 0x24) & 0x80000) != 0) && ((int)plVar10[1] == 0)) {
        if (plVar10 != plVar15) {
          plVar9 = plVar2;
          if (plVar10 != plVar5) {
            plVar9 = plVar5;
          }
          plVar5 = plVar2;
          if (plVar10[3] != 0) {
            *(longlong **)(plVar10[3] + 0x10) = plVar2;
            plVar5 = (longlong *)plVar10[2];
          }
          if (plVar5 != (longlong *)0x0) {
            plVar5[3] = plVar10[3];
          }
          plVar15[2] = (longlong)plVar10;
          plVar10[3] = (longlong)plVar15;
          plVar10[2] = 0;
          plVar15 = plVar10;
        }
        *(undefined4 *)(plVar10 + 1) = 1;
      }
      bVar23 = plVar10 != plVar8;
      plVar10 = plVar2;
      plVar5 = plVar9;
    } while (bVar23);
  }
  plVar5 = plVar9;
  plVar10 = plVar15;
  plVar8 = plVar9;
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar5 = plVar9;
      if (plVar8 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar8[2];
      if (((*(uint *)(*plVar8 + 0x24) & 0x3c0c0) != 0) && ((int)plVar8[1] == 0)) {
        if (plVar8 != plVar10) {
          plVar5 = plVar2;
          if (plVar8 != plVar9) {
            plVar5 = plVar9;
          }
          plVar9 = plVar2;
          if (plVar8[3] != 0) {
            *(longlong **)(plVar8[3] + 0x10) = plVar2;
            plVar9 = (longlong *)plVar8[2];
          }
          if (plVar9 != (longlong *)0x0) {
            plVar9[3] = plVar8[3];
          }
          plVar10[2] = (longlong)plVar8;
          plVar8[3] = (longlong)plVar10;
          plVar8[2] = 0;
          plVar10 = plVar8;
        }
        *(undefined4 *)(plVar8 + 1) = 1;
      }
      bVar23 = plVar8 != plVar15;
      plVar9 = plVar5;
      plVar8 = plVar2;
    } while (bVar23);
  }
  plVar9 = plVar5;
  plVar15 = plVar5;
  plVar8 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    do {
      plVar9 = plVar15;
      if (plVar5 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar5[2];
      if ((int)plVar5[1] == 0) {
        if (plVar5 != plVar8) {
          plVar9 = plVar2;
          if (plVar5 != plVar15) {
            plVar9 = plVar15;
          }
          plVar15 = plVar2;
          if (plVar5[3] != 0) {
            *(longlong **)(plVar5[3] + 0x10) = plVar2;
            plVar15 = (longlong *)plVar5[2];
          }
          if (plVar15 != (longlong *)0x0) {
            plVar15[3] = plVar5[3];
          }
          plVar8[2] = (longlong)plVar5;
          plVar5[3] = (longlong)plVar8;
          plVar5[2] = 0;
          plVar8 = plVar5;
        }
        *(undefined4 *)(plVar5 + 1) = 1;
      }
      bVar23 = plVar5 != plVar10;
      plVar5 = plVar2;
      plVar15 = plVar9;
    } while (bVar23);
  }
  plVar5 = plVar9;
  plVar10 = plVar9;
  plVar15 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    do {
      plVar5 = plVar9;
      if (plVar10 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar10[2];
      if ((((*(byte *)(*plVar10 + 0x28) & 1) != 0) && ((int)plVar10[1] != 0)) &&
         (plVar10 != plVar15)) {
        plVar5 = plVar2;
        if (plVar10 != plVar9) {
          plVar5 = plVar9;
        }
        plVar9 = plVar2;
        if (plVar10[3] != 0) {
          *(longlong **)(plVar10[3] + 0x10) = plVar2;
          plVar9 = (longlong *)plVar10[2];
        }
        if (plVar9 != (longlong *)0x0) {
          plVar9[3] = plVar10[3];
        }
        plVar15[2] = (longlong)plVar10;
        plVar10[3] = (longlong)plVar15;
        plVar10[2] = 0;
        plVar15 = plVar10;
      }
      bVar23 = plVar10 != plVar8;
      plVar9 = plVar5;
      plVar10 = plVar2;
    } while (bVar23);
  }
  plVar10 = plVar5;
  plVar9 = plVar5;
  plVar8 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar9 = plVar10;
      if (plVar5 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar5[2];
      if ((((*(byte *)(*plVar5 + 0x20) & 4) != 0) && ((int)plVar5[1] != 0)) && (plVar5 != plVar8)) {
        plVar9 = plVar2;
        if (plVar5 != plVar10) {
          plVar9 = plVar10;
        }
        plVar10 = plVar2;
        if (plVar5[3] != 0) {
          *(longlong **)(plVar5[3] + 0x10) = plVar2;
          plVar10 = (longlong *)plVar5[2];
        }
        if (plVar10 != (longlong *)0x0) {
          plVar10[3] = plVar5[3];
        }
        plVar8[2] = (longlong)plVar5;
        plVar5[3] = (longlong)plVar8;
        plVar5[2] = 0;
        plVar8 = plVar5;
      }
      bVar23 = plVar5 != plVar15;
      plVar5 = plVar2;
      plVar10 = plVar9;
    } while (bVar23);
  }
  plVar5 = plVar9;
  plVar10 = plVar9;
  plVar15 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    do {
      plVar5 = plVar9;
      if (plVar10 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar10[2];
      if ((((*(byte *)(*plVar10 + 0x1c) & 1) != 0) && ((int)plVar10[1] != 0)) &&
         (plVar10 != plVar15)) {
        plVar5 = plVar2;
        if (plVar10 != plVar9) {
          plVar5 = plVar9;
        }
        plVar9 = plVar2;
        if (plVar10[3] != 0) {
          *(longlong **)(plVar10[3] + 0x10) = plVar2;
          plVar9 = (longlong *)plVar10[2];
        }
        if (plVar9 != (longlong *)0x0) {
          plVar9[3] = plVar10[3];
        }
        plVar15[2] = (longlong)plVar10;
        plVar10[3] = (longlong)plVar15;
        plVar10[2] = 0;
        plVar15 = plVar10;
      }
      bVar23 = plVar10 != plVar8;
      plVar9 = plVar5;
      plVar10 = plVar2;
    } while (bVar23);
  }
  plVar9 = plVar5;
  plVar10 = plVar5;
  plVar8 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar9 = plVar10;
      if (plVar5 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar5[2];
      if ((((*(byte *)(*plVar5 + 0x1c) & 8) != 0) && ((int)plVar5[1] != 0)) && (plVar5 != plVar8)) {
        plVar9 = plVar2;
        if (plVar5 != plVar10) {
          plVar9 = plVar10;
        }
        plVar10 = plVar2;
        if (plVar5[3] != 0) {
          *(longlong **)(plVar5[3] + 0x10) = plVar2;
          plVar10 = (longlong *)plVar5[2];
        }
        if (plVar10 != (longlong *)0x0) {
          plVar10[3] = plVar5[3];
        }
        plVar8[2] = (longlong)plVar5;
        plVar5[3] = (longlong)plVar8;
        plVar5[2] = 0;
        plVar8 = plVar5;
      }
      bVar23 = plVar5 != plVar15;
      plVar5 = plVar2;
      plVar10 = plVar9;
    } while (bVar23);
  }
  local_48 = plVar8;
  plVar5 = plVar9;
  local_50 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    do {
      local_50 = plVar5;
      if (plVar9 == (longlong *)0x0) break;
      plVar10 = (longlong *)plVar9[2];
      if ((((*(byte *)(*plVar9 + 0x24) & 4) != 0) && ((int)plVar9[1] != 0)) && (plVar9 != local_48))
      {
        local_50 = plVar10;
        if (plVar9 != plVar5) {
          local_50 = plVar5;
        }
        plVar5 = plVar10;
        if (plVar9[3] != 0) {
          *(longlong **)(plVar9[3] + 0x10) = plVar10;
          plVar5 = (longlong *)plVar9[2];
        }
        if (plVar5 != (longlong *)0x0) {
          plVar5[3] = plVar9[3];
        }
        local_48[2] = (longlong)plVar9;
        plVar9[3] = (longlong)local_48;
        plVar9[2] = 0;
        local_48 = plVar9;
      }
      bVar23 = plVar9 != plVar8;
      plVar9 = plVar10;
      plVar5 = local_50;
    } while (bVar23);
  }
  iVar3 = ssl_cipher_strength_sort(&local_50,&local_48);
  if (iVar3 == 0) {
    uVar14 = 0x5e6;
    goto LAB_143cb02ac;
  }
  plVar9 = local_48;
  plVar5 = local_48;
  plVar10 = local_50;
  if (local_50 != (longlong *)0x0) {
    do {
      plVar9 = plVar5;
      if (local_48 == (longlong *)0x0) break;
      plVar15 = (longlong *)local_48[3];
      if (((*(int *)(*local_48 + 0x2c) == 0x303) && ((int)local_48[1] != 0)) &&
         (local_48 != plVar10)) {
        plVar9 = plVar15;
        if (local_48 != plVar5) {
          plVar9 = plVar5;
        }
        plVar5 = plVar15;
        if (local_48[2] != 0) {
          *(longlong **)(local_48[2] + 0x18) = plVar15;
          plVar5 = (longlong *)local_48[3];
        }
        if (plVar5 != (longlong *)0x0) {
          plVar5[2] = local_48[2];
        }
        plVar10[3] = (longlong)local_48;
        local_48[2] = (longlong)plVar10;
        local_48[3] = 0;
        plVar10 = local_48;
      }
      bVar23 = local_48 != local_50;
      local_48 = plVar15;
      plVar5 = plVar9;
    } while (bVar23);
  }
  plVar5 = plVar9;
  plVar15 = plVar9;
  plVar8 = plVar10;
  if (plVar10 != (longlong *)0x0) {
    do {
      plVar5 = plVar9;
      if (plVar15 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar15[3];
      if ((((*(byte *)(*plVar15 + 0x28) & 0x40) != 0) && ((int)plVar15[1] != 0)) &&
         (plVar15 != plVar8)) {
        plVar5 = plVar2;
        if (plVar15 != plVar9) {
          plVar5 = plVar9;
        }
        plVar9 = plVar2;
        if (plVar15[2] != 0) {
          *(longlong **)(plVar15[2] + 0x18) = plVar2;
          plVar9 = (longlong *)plVar15[3];
        }
        if (plVar9 != (longlong *)0x0) {
          plVar9[2] = plVar15[2];
        }
        plVar8[3] = (longlong)plVar15;
        plVar15[2] = (longlong)plVar8;
        plVar15[3] = 0;
        plVar8 = plVar15;
      }
      bVar23 = plVar15 != plVar10;
      plVar9 = plVar5;
      plVar15 = plVar2;
    } while (bVar23);
  }
  plVar10 = plVar5;
  plVar9 = plVar5;
  plVar15 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    do {
      plVar9 = plVar10;
      if (plVar5 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar5[3];
      if ((((*(byte *)(*plVar5 + 0x1c) & 6) != 0) && ((int)plVar5[1] != 0)) && (plVar5 != plVar15))
      {
        plVar9 = plVar2;
        if (plVar5 != plVar10) {
          plVar9 = plVar10;
        }
        plVar10 = plVar2;
        if (plVar5[2] != 0) {
          *(longlong **)(plVar5[2] + 0x18) = plVar2;
          plVar10 = (longlong *)plVar5[3];
        }
        if (plVar10 != (longlong *)0x0) {
          plVar10[2] = plVar5[2];
        }
        plVar15[3] = (longlong)plVar5;
        plVar5[2] = (longlong)plVar15;
        plVar5[3] = 0;
        plVar15 = plVar5;
      }
      bVar23 = plVar5 != plVar8;
      plVar5 = plVar2;
      plVar10 = plVar9;
    } while (bVar23);
  }
  plVar5 = plVar9;
  plVar10 = plVar9;
  plVar8 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    do {
      plVar5 = plVar9;
      if (plVar10 == (longlong *)0x0) break;
      plVar2 = (longlong *)plVar10[3];
      if ((((*(byte *)(*plVar10 + 0x1c) & 6) != 0) && ((*(byte *)(*plVar10 + 0x28) & 0x40) != 0)) &&
         (((int)plVar10[1] != 0 && (plVar10 != plVar8)))) {
        plVar5 = plVar2;
        if (plVar10 != plVar9) {
          plVar5 = plVar9;
        }
        plVar9 = plVar2;
        if (plVar10[2] != 0) {
          *(longlong **)(plVar10[2] + 0x18) = plVar2;
          plVar9 = (longlong *)plVar10[3];
        }
        if (plVar9 != (longlong *)0x0) {
          plVar9[2] = plVar10[2];
        }
        plVar8[3] = (longlong)plVar10;
        plVar10[2] = (longlong)plVar8;
        plVar10[3] = 0;
        plVar8 = plVar10;
      }
      bVar23 = plVar10 != plVar15;
      plVar9 = plVar5;
      plVar10 = plVar2;
    } while (bVar23);
  }
  plVar9 = plVar8;
  plVar10 = plVar5;
  local_48 = plVar5;
  if (plVar8 != (longlong *)0x0) {
    do {
      local_48 = plVar10;
      if (plVar5 == (longlong *)0x0) break;
      plVar15 = (longlong *)plVar5[3];
      if ((int)plVar5[1] != 0) {
        if (plVar5 != plVar9) {
          local_48 = plVar15;
          if (plVar5 != plVar10) {
            local_48 = plVar10;
          }
          plVar10 = plVar15;
          if (plVar5[2] != 0) {
            *(longlong **)(plVar5[2] + 0x18) = plVar15;
            plVar10 = (longlong *)plVar5[3];
          }
          if (plVar10 != (longlong *)0x0) {
            plVar10[2] = plVar5[2];
          }
          plVar9[3] = (longlong)plVar5;
          plVar5[2] = (longlong)plVar9;
          plVar5[3] = 0;
          plVar9 = plVar5;
        }
        *(undefined4 *)(plVar5 + 1) = 0;
      }
      bVar23 = plVar5 != plVar8;
      plVar5 = plVar15;
      plVar10 = local_48;
    } while (bVar23);
  }
  local_50 = plVar9;
  plVar5 = (longlong *)CRYPTO_malloc((longlong)(iVar4 + 0x4d) << 3,"ssl\\ssl_ciph.c",0x612);
  if (plVar5 == (longlong *)0x0) {
    CRYPTO_free(local_40,"ssl\\ssl_ciph.c",0x614);
    uVar14 = CONCAT44(uVar24,0x615);
    goto LAB_143cb003e;
  }
  uVar21 = ~uVar21;
  uVar19 = ~uVar19;
  uVar20 = ~uVar20;
  uVar22 = ~uVar22;
  plVar10 = plVar5;
  for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)plVar9[2]) {
    *plVar10 = *plVar9;
    plVar10 = plVar10 + 1;
  }
  puVar6 = &DAT_145d48d10;
  lVar18 = 0x13;
  puVar16 = &DAT_145d48d90;
  do {
    if (((((puVar6[-1] == 0) || ((puVar6[-1] & uVar21) != 0)) &&
         ((*puVar6 == 0 || ((uVar22 & *puVar6) != 0)))) &&
        ((puVar6[1] == 0 || ((uVar19 & puVar6[1]) != 0)))) &&
       ((puVar6[2] == 0 || ((uVar20 & puVar6[2]) != 0)))) {
      *plVar10 = (longlong)(puVar16 + -0xa0);
      plVar10 = plVar10 + 1;
    }
    if (((((puVar6[0x13] == 0) || ((puVar6[0x13] & uVar21) != 0)) &&
         ((puVar6[0x14] == 0 || ((uVar22 & puVar6[0x14]) != 0)))) &&
        ((puVar6[0x15] == 0 || ((uVar19 & puVar6[0x15]) != 0)))) &&
       ((puVar6[0x16] == 0 || ((uVar20 & puVar6[0x16]) != 0)))) {
      *plVar10 = (longlong)(puVar16 + -0x50);
      plVar10 = plVar10 + 1;
    }
    if ((((puVar6[0x27] == 0) || ((puVar6[0x27] & uVar21) != 0)) &&
        ((puVar6[0x28] == 0 || ((uVar22 & puVar6[0x28]) != 0)))) &&
       (((puVar6[0x29] == 0 || ((uVar19 & puVar6[0x29]) != 0)) &&
        ((puVar6[0x2a] == 0 || ((uVar20 & puVar6[0x2a]) != 0)))))) {
      *plVar10 = (longlong)puVar16;
      plVar10 = plVar10 + 1;
    }
    if (((((puVar6[0x3b] == 0) || ((puVar6[0x3b] & uVar21) != 0)) &&
         ((puVar6[0x3c] == 0 || ((uVar22 & puVar6[0x3c]) != 0)))) &&
        ((puVar6[0x3d] == 0 || ((uVar19 & puVar6[0x3d]) != 0)))) &&
       ((puVar6[0x3e] == 0 || ((uVar20 & puVar6[0x3e]) != 0)))) {
      *plVar10 = (longlong)(puVar16 + 0x50);
      plVar10 = plVar10 + 1;
    }
    puVar16 = puVar16 + 0x140;
    puVar6 = puVar6 + 0x50;
    lVar18 = lVar18 + -1;
  } while (lVar18 != 0);
  *plVar10 = 0;
  iVar4 = strncmp(param_5,"DEFAULT",7);
  pcVar11 = param_5;
  if (iVar4 == 0) {
    iVar12 = ssl_cipher_process_rulestr
                       ("ALL:!COMPLEMENTOFDEFAULT:!eNULL",&local_50,&local_48,plVar5,param_6);
    pcVar11 = param_5 + 7;
    if (param_5[7] == ':') {
      pcVar11 = param_5 + 8;
    }
    if (iVar12 != 0) goto LAB_143cb0239;
  }
  else {
LAB_143cb0239:
    cVar1 = *pcVar11;
    pcVar17 = pcVar11;
    for (uVar7 = uVar13; (cVar1 != '\0' && (uVar7 < 0x80000000)); uVar7 = uVar7 + 1) {
      pcVar17 = pcVar17 + 1;
      cVar1 = *pcVar17;
    }
    if ((uVar7 & 0x7fffffff) != 0) {
      iVar12 = ssl_cipher_process_rulestr(pcVar11,&local_50,&local_48,plVar5,param_6);
    }
  }
  CRYPTO_free(plVar5,"ssl\\ssl_ciph.c",0x62d);
  if (iVar12 == 0) {
    uVar14 = 0x630;
  }
  else {
    lVar18 = OPENSSL_sk_new_null();
    if (lVar18 != 0) {
      iVar4 = OPENSSL_sk_num(param_2);
      plVar9 = local_50;
      if (0 < iVar4) {
        do {
          uVar14 = OPENSSL_sk_value(param_2,uVar13);
          iVar4 = OPENSSL_sk_push(lVar18,uVar14);
          if (iVar4 == 0) goto LAB_143cb038b;
          uVar13 = uVar13 + 1;
          iVar4 = OPENSSL_sk_num(param_2);
          plVar9 = local_50;
        } while ((int)uVar13 < iVar4);
      }
      do {
        if (plVar9 == (longlong *)0x0) {
          CRYPTO_free(local_40,"ssl\\ssl_ciph.c",0x656);
          iVar4 = update_cipher_list_by_id(param_4,lVar18);
          if (iVar4 != 0) {
            OPENSSL_sk_free(*param_3);
            *param_3 = lVar18;
            return lVar18;
          }
LAB_143cb038b:
          OPENSSL_sk_free(lVar18);
          return 0;
        }
        if (((int)plVar9[1] != 0) && (iVar4 = OPENSSL_sk_push(lVar18,*plVar9), iVar4 == 0)) {
          CRYPTO_free(local_40,"ssl\\ssl_ciph.c",0x64d);
          goto LAB_143cb038b;
        }
        plVar9 = (longlong *)plVar9[2];
      } while( true );
    }
    uVar14 = 0x639;
  }
LAB_143cb02ac:
  CRYPTO_free(local_40,"ssl\\ssl_ciph.c",uVar14);
  return 0;
}



// FUNCTION 143cb03a0 ssl_get_cipher_by_char body=52 status=ok
// SIG undefined ssl_get_cipher_by_char(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int * ssl_get_cipher_by_char(longlong param_1,undefined8 param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)(**(code **)(*(longlong *)(param_1 + 8) + 0x90))(param_2);
  if ((piVar1 == (int *)0x0) || ((param_3 == 0 && (*piVar1 == 0)))) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}



// FUNCTION 143cb03e0 ssl_handshake_md body=51 status=ok
// SIG undefined ssl_handshake_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_handshake_md(void)

{
  uint uVar1;
  
  uVar1 = ssl_get_algorithm2();
  if ((uVar1 & 0xff) < 0xc) {
    return (&DAT_146bc9820)[uVar1 & 0xff];
  }
  return 0;
}



// FUNCTION 143cb0420 FUN_143cb0420 body=834 status=ok
// SIG undefined FUN_143cb0420(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_143cb0420(void)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint *puVar7;
  int local_res8 [2];
  undefined8 local_res10;
  
  uVar6 = 0;
  DAT_146bc981c = 0;
  ssl_sort_cipher_list();
  puVar7 = &DAT_145d48b40;
  uVar5 = uVar6;
  do {
    if (puVar7[1] == 0) {
      *(undefined8 *)((longlong)&DAT_146bc9760 + uVar5) = 0;
    }
    else {
      uVar3 = OBJ_nid2sn();
      lVar4 = EVP_get_cipherbyname(uVar3);
      *(longlong *)((longlong)&DAT_146bc9760 + uVar5) = lVar4;
      if (lVar4 == 0) {
        DAT_146bc981c = DAT_146bc981c | *puVar7;
      }
    }
    uVar5 = uVar5 + 8;
    puVar7 = puVar7 + 2;
  } while (uVar5 < 0xb0);
  DAT_146bc98e0 = 0;
  puVar7 = &DAT_145d48bf0;
  do {
    uVar3 = OBJ_nid2sn(puVar7[1]);
    lVar4 = EVP_get_digestbyname(uVar3);
    *(longlong *)((longlong)&DAT_146bc9820 + uVar6) = lVar4;
    if (lVar4 == 0) {
      DAT_146bc98e0 = DAT_146bc98e0 | *puVar7;
    }
    else {
      iVar1 = EVP_MD_size(lVar4);
      if (iVar1 < 0) goto LAB_143cb074d;
      *(longlong *)((longlong)&DAT_146bc9880 + uVar6) = (longlong)iVar1;
    }
    uVar6 = uVar6 + 8;
    puVar7 = puVar7 + 2;
  } while (uVar6 < 0x60);
  if ((DAT_146bc9820 == 0) || (DAT_146bc9828 == 0)) {
LAB_143cb074d:
    uVar3 = 0;
  }
  else {
    DAT_146bc98e4 = 0;
    DAT_146bc98e8 = 0;
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost-mac",0xffffffff);
    if ((lVar4 != 0) && (iVar1 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar1 < 1)) {
      local_res8[0] = 0;
    }
    ENGINE_finish(local_res10);
    _DAT_146832d64 = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_146bc98e0 = DAT_146bc98e0 | 8;
    }
    else {
      _DAT_146bc9898 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost-mac-12",0xffffffff);
    iVar1 = 0;
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    _DAT_146832d74 = local_res8[0];
    if (local_res8[0] == 0) {
      DAT_146bc98e0 = DAT_146bc98e0 | 0x100;
    }
    else {
      _DAT_146bc98b8 = 0x20;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2001",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_146bc98e8 = DAT_146bc98e8 | 0xa0;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2012_256",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_146bc98e8 = DAT_146bc98e8 | 0x80;
    }
    local_res10 = 0;
    local_res8[0] = 0;
    lVar4 = EVP_PKEY_asn1_find_str(&local_res10,"gost2012_512",0xffffffff);
    if ((lVar4 != 0) && (iVar2 = EVP_PKEY_asn1_get0_info(local_res8,0,0,0,0,lVar4), iVar2 < 1)) {
      local_res8[0] = iVar1;
    }
    ENGINE_finish(local_res10);
    if (local_res8[0] == 0) {
      DAT_146bc98e8 = DAT_146bc98e8 | 0x80;
    }
    if (((byte)DAT_146bc98e8 & 0xa0) == 0xa0) {
      DAT_146bc98e4 = DAT_146bc98e4 | 0x10;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143cb0770 ssl_md body=23 status=ok
// SIG undefined ssl_md(void)

undefined8 ssl_md(byte param_1)

{
  if (param_1 < 0xc) {
    return (&DAT_146bc9820)[param_1];
  }
  return 0;
}



// FUNCTION 143cb0790 ssl_prf_md body=54 status=ok
// SIG undefined ssl_prf_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_prf_md(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = ssl_get_algorithm2();
  uVar2 = iVar1 >> 8 & 0xff;
  if (uVar2 < 0xc) {
    return (&DAT_146bc9820)[uVar2];
  }
  return 0;
}



// FUNCTION 143cb07d0 update_cipher_list body=279 status=ok
// SIG undefined update_cipher_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 update_cipher_list(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  
  lVar2 = OPENSSL_sk_dup(*param_1);
  if (lVar2 != 0) {
    iVar1 = OPENSSL_sk_num(lVar2);
    while ((0 < iVar1 && (lVar3 = OPENSSL_sk_value(lVar2,0), *(int *)(lVar3 + 0x2c) == 0x304))) {
      OPENSSL_sk_delete(lVar2);
      iVar1 = OPENSSL_sk_num(lVar2);
    }
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(param_3);
    if (0 < iVar1) {
      do {
        uVar4 = OPENSSL_sk_value(param_3,iVar5);
        OPENSSL_sk_insert(lVar2,uVar4,iVar5);
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(param_3);
      } while (iVar5 < iVar1);
    }
    lVar3 = OPENSSL_sk_dup(lVar2);
    if (lVar3 != 0) {
      OPENSSL_sk_free(*param_2);
      *param_2 = lVar3;
      OPENSSL_sk_set_cmp_func(lVar3,&LAB_143ca6fa0);
      OPENSSL_sk_sort(*param_2);
      OPENSSL_sk_free(*param_1);
      *param_1 = lVar2;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cb08f0 update_cipher_list_by_id body=99 status=ok
// SIG undefined update_cipher_list_by_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 update_cipher_list_by_id(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = OPENSSL_sk_dup(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  OPENSSL_sk_free(*param_1);
  *param_1 = lVar1;
  OPENSSL_sk_set_cmp_func(lVar1,&LAB_143ca6fa0);
  OPENSSL_sk_sort(*param_1);
  return 1;
}



// FUNCTION 143cb0960 RECORD_LAYER_clear body=174 status=ok
// SIG undefined RECORD_LAYER_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_clear(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xf0;
  param_1[0x1c9] = 0;
  param_1[0x1ca] = 0;
  param_1[0x1cb] = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0;
  param_1[0x1cd] = 0;
  param_1[0x1cf] = 0;
  *(undefined4 *)(param_1 + 0x1d0) = 0;
  param_1[0x1d1] = 0;
  param_1[0x1d2] = 0;
  SSL3_BUFFER_clear(param_1 + 4);
  ssl3_release_write_buffer(*param_1);
  param_1[2] = 0;
  SSL3_RECORD_clear(param_1 + 0xa9,0x20);
  param_1[0x1d3] = 0;
  param_1[0x1d4] = 0;
  if (param_1[0x1d6] != 0) {
    DTLS_RECORD_LAYER_clear(param_1);
  }
  return;
}



// FUNCTION 143cb0a10 RECORD_LAYER_get_rrec_length body=8 status=ok
// SIG undefined RECORD_LAYER_get_rrec_length(void)

undefined8 RECORD_LAYER_get_rrec_length(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x550);
}



// FUNCTION 143cb0a20 RECORD_LAYER_init body=45 status=ok
// SIG undefined RECORD_LAYER_init(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_init(longlong *param_1,longlong param_2)

{
  *param_1 = param_2;
  *(undefined4 *)(param_2 + 0x16a8) = 1;
  SSL3_RECORD_clear(param_1 + 0xa9,0x20);
  return;
}



// FUNCTION 143cb0a50 RECORD_LAYER_is_sslv2_record body=13 status=ok
// SIG undefined RECORD_LAYER_is_sslv2_record(void)

bool RECORD_LAYER_is_sslv2_record(longlong param_1)

{
  return *(int *)(param_1 + 0x548) == 2;
}



// FUNCTION 143cb0a60 RECORD_LAYER_processed_read_pending body=43 status=ok
// SIG undefined RECORD_LAYER_processed_read_pending(void)

bool RECORD_LAYER_processed_read_pending(longlong param_1)

{
  ulonglong uVar1;
  int *piVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  uVar3 = 0;
  if (uVar1 != 0) {
    piVar2 = (int *)(param_1 + 0x580);
    do {
      if (*piVar2 == 0) break;
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 0x12;
    } while (uVar3 < uVar1);
  }
  return uVar3 < uVar1;
}



// FUNCTION 143cb0a90 RECORD_LAYER_read_pending body=10 status=ok
// SIG undefined RECORD_LAYER_read_pending(void)

bool RECORD_LAYER_read_pending(longlong param_1)

{
  return *(longlong *)(param_1 + 0x40) != 0;
}



// FUNCTION 143cb0aa0 RECORD_LAYER_release body=70 status=ok
// SIG undefined RECORD_LAYER_release(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void RECORD_LAYER_release(undefined8 *param_1)

{
  if (param_1[4] != 0) {
    ssl3_release_read_buffer(*param_1);
  }
  if (param_1[3] != 0) {
    ssl3_release_write_buffer(*param_1);
  }
  SSL3_RECORD_release(param_1 + 0xa9,0x20);
  return;
}



// FUNCTION 143cb0af0 RECORD_LAYER_reset_read_sequence body=10 status=ok
// SIG undefined RECORD_LAYER_reset_read_sequence(void)

void RECORD_LAYER_reset_read_sequence(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xe98) = 0;
  return;
}



// FUNCTION 143cb0b00 RECORD_LAYER_reset_write_sequence body=10 status=ok
// SIG undefined RECORD_LAYER_reset_write_sequence(void)

void RECORD_LAYER_reset_write_sequence(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xea0) = 0;
  return;
}



// FUNCTION 143cb0b10 RECORD_LAYER_write_pending body=30 status=ok
// SIG undefined RECORD_LAYER_write_pending(void)

undefined8 RECORD_LAYER_write_pending(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x18) != 0) &&
     (*(longlong *)(param_1 + 0x40 + *(longlong *)(param_1 + 0x18) * 0x28) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cb0b30 do_ssl3_write body=3156 status=ok
// SIG undefined do_ssl3_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
do_ssl3_write(int *param_1,int param_2,longlong param_3,longlong param_4,ulonglong param_5,
             int param_6,ulonglong *param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  int *piVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auStack_1008 [32];
  ulonglong *local_fe8;
  int *local_fe0;
  ulonglong *local_fd8;
  int local_fc8;
  undefined1 local_fc4 [4];
  int local_fc0;
  ulonglong local_fb8;
  int local_fb0;
  ulonglong local_fa8;
  longlong local_fa0;
  ulonglong local_f98;
  longlong local_f90;
  ulonglong local_f88;
  ulonglong local_f80;
  longlong local_f78;
  ulonglong local_f70;
  ulonglong *local_f68;
  undefined1 local_f58 [1536];
  undefined1 local_958 [8];
  ulonglong local_950 [287];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cb0b4f;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1008;
  uVar7 = 0;
  local_f68 = param_7;
  local_fa8 = 0;
  local_fc0 = 0;
  local_fa0 = 0;
  uVar5 = uVar7;
  uVar17 = uVar7;
  if (3 < param_5) {
    lVar13 = 0;
    lVar15 = 0;
    lVar14 = 0;
    lVar16 = 0;
    do {
      plVar12 = (longlong *)(param_4 + uVar5 * 8);
      lVar13 = *plVar12 + lVar13;
      lVar15 = plVar12[1] + lVar15;
      plVar12 = (longlong *)(param_4 + 0x10 + uVar5 * 8);
      uVar5 = uVar5 + 4;
      lVar14 = *plVar12 + lVar14;
      lVar16 = plVar12[1] + lVar16;
    } while (uVar5 < (param_5 & 0xfffffffffffffffc));
    uVar17 = lVar14 + lVar13 + lVar16 + lVar15;
  }
  if (uVar5 < param_5) {
    uVar6 = uVar7;
    uVar11 = uVar7;
    if (1 < param_5 - uVar5) {
      do {
        uVar6 = uVar6 + *(longlong *)(param_4 + uVar5 * 8);
        uVar11 = uVar11 + *(longlong *)(param_4 + 8 + uVar5 * 8);
        uVar5 = uVar5 + 2;
      } while (uVar5 < param_5 - 1);
    }
    if (uVar5 < param_5) {
      uVar17 = uVar17 + *(longlong *)(param_4 + uVar5 * 8);
    }
    uVar17 = uVar17 + uVar11 + uVar6;
  }
  local_fc8 = param_2;
  local_f90 = param_4;
  local_f78 = param_3;
  if ((*(longlong *)(param_1 + 0x206) == 0) ||
     (*(longlong *)(param_1 + *(longlong *)(param_1 + 0x206) * 10 + 0x210) == 0)) {
    if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
       (uVar4 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1), (int)uVar4 < 1)) {
      return uVar4;
    }
    if ((param_5 <= *(ulonglong *)(param_1 + 0x206)) ||
       (iVar1 = ssl3_setup_write_buffer(param_1,param_5,0), iVar1 != 0)) {
      if ((uVar17 == 0) && (param_6 == 0)) {
        return 0;
      }
      if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x118) == 0)) ||
         (lVar13 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e)), lVar13 == 0)) {
        local_fb0 = 0;
        if (*(longlong *)(param_1 + 0x118) != 0) goto LAB_143cb0d57;
        if (param_6 != 0) goto LAB_143cb0e39;
LAB_143cb0dde:
        if (local_fa8 == 0) {
          if (param_5 != 0) {
            puVar8 = local_f58;
            piVar9 = param_1 + 0x216;
            do {
              lVar13 = 7 - (ulonglong)((int)*(undefined8 *)(piVar9 + -4) - 4U & 7);
              *(longlong *)(piVar9 + 2) = lVar13;
              iVar1 = WPACKET_init_static_len
                                (puVar8,*(undefined8 *)(piVar9 + -4),*(undefined8 *)piVar9,0);
              if ((iVar1 == 0) || (iVar1 = WPACKET_allocate_bytes(puVar8,lVar13,0), iVar1 == 0)) {
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x318);
                goto LAB_143cb16d3;
              }
              local_fa0 = local_fa0 + 1;
              uVar7 = uVar7 + 1;
              piVar9 = piVar9 + 10;
              puVar8 = puVar8 + 0x30;
              param_4 = local_f90;
              param_2 = local_fc8;
            } while (uVar7 < param_5);
          }
        }
        else {
          iVar1 = WPACKET_init_static_len
                            (local_f58,*(undefined8 *)(param_1 + 0x212),
                             *(undefined8 *)(param_1 + 0x216),0);
          if ((iVar1 == 0) ||
             (iVar1 = WPACKET_allocate_bytes(local_f58,local_fa8 + *(longlong *)(param_1 + 0x218),0)
             , iVar1 == 0)) {
            local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x306);
LAB_143cb0d0c:
            local_fe8 = (ulonglong *)0x145d4a910;
            ossl_statem_fatal(param_1,0x50,0x68,0x44);
            return 0xffffffff;
          }
          local_fa0 = 1;
        }
      }
      else {
        uVar4 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e));
        local_fb0 = EVP_MD_size(uVar4);
        if (local_fb0 < 0) {
          local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x2c0);
          goto LAB_143cb0d0c;
        }
LAB_143cb0d57:
        if (param_6 == 0) {
          if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0xdc) == 0) {
            if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xd8) != 0) && (param_2 == 0x17)) {
              local_fd8 = &local_fa8;
              local_fe0 = (int *)CONCAT44(local_fe0._4_4_,1);
              local_fe8 = (ulonglong *)0x1;
              local_f98 = 0;
              iVar1 = do_ssl3_write(param_1,0x17,local_f78,&local_f98);
              if (iVar1 < 1) goto LAB_143cb1717;
              if (0x55 < local_fa8) {
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x2e2);
                goto LAB_143cb0d0c;
              }
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 1;
          }
          goto LAB_143cb0dde;
        }
LAB_143cb0e39:
        lVar13 = 7 - (ulonglong)((int)*(undefined8 *)(param_1 + 0x212) + 1U & 7);
        *(longlong *)(param_1 + 0x218) = lVar13;
        iVar1 = WPACKET_init_static_len
                          (local_f58,*(undefined8 *)(param_1 + 0x212),
                           *(undefined8 *)(param_1 + 0x216),0);
        if ((iVar1 == 0) || (iVar1 = WPACKET_allocate_bytes(local_f58,lVar13,0), iVar1 == 0)) {
          local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x2fa);
          goto LAB_143cb0d0c;
        }
        local_fa0 = 1;
      }
      if (*(longlong *)(param_1 + 0x118) != 0) {
        uVar2 = *(uint *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60);
        if (((uVar2 & 1) != 0) &&
           (((((uVar2 & 8) != 0 || (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) ||
             (iVar1 == 0x10000)) && ((3 < param_1[0x21] - 1U && (param_1[0x136] != 1)))))) {
          uVar4 = FHardwareCursor::GetHandle(*(longlong *)(param_1 + 0x118));
          uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar4);
          uVar2 = uVar2 & 0xf0007;
          if (uVar2 == 2) {
            local_fc0 = EVP_CIPHER_CTX_iv_length(*(undefined8 *)(param_1 + 0x118));
            if (local_fc0 < 2) {
              local_fc0 = 0;
            }
          }
          else if (uVar2 == 6) {
            local_fc0 = 8;
          }
          else {
            local_fc0 = 0;
            if (uVar2 == 7) {
              local_fc0 = 8;
            }
          }
        }
      }
      local_f80 = 0;
      _guard_xfg_dispatch_icall_nop(local_958,0,0x900);
      local_fb8 = 0;
      if (param_5 != 0) {
        puVar8 = local_f58;
        puVar10 = local_950;
        do {
          local_f98 = 0;
          iVar1 = *param_1;
          if (*param_1 == 0x304) {
            iVar1 = 0x303;
          }
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                (iVar3 = **(int **)(param_1 + 2), 0x303 < iVar3)) && (iVar3 != 0x10000)) ||
              ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
             ((*(longlong *)(param_1 + 0x118) != 0 && ((param_1[0x1f] != 2 || (param_2 != 0x15))))))
          {
            param_2 = 0x17;
          }
          *(int *)((longlong)puVar10 + -4) = param_2;
          iVar3 = FPlanarReflectionRenderTarget::GetSizeY(param_1);
          if ((((iVar3 == 0xc) && (param_1[0x1d4] == 0)) &&
              (uVar2 = FRollingHash::GetWindowSize(param_1), (uVar2 & 0xffffff00) == 0x300)) &&
             ((iVar3 = FRollingHash::GetWindowSize(param_1), 0x301 < iVar3 && (param_1[0x136] == 0))
             )) {
            iVar1 = 0x301;
          }
          lVar13 = *(longlong *)(param_1 + 0x114);
          *(int *)(puVar10 + -1) = iVar1;
          lVar14 = *(longlong *)(param_4 + local_fb8 * 8);
          lVar15 = lVar14 + 0x400;
          if (lVar13 == 0) {
            lVar15 = lVar14;
          }
          iVar3 = WPACKET_put_bytes__(puVar8,param_2,1);
          if ((((iVar3 == 0) || (iVar1 = WPACKET_put_bytes__(puVar8,iVar1,2), iVar1 == 0)) ||
              ((iVar1 = WPACKET_start_sub_packet_len__(puVar8,2), iVar1 == 0 ||
               ((0 < local_fc0 &&
                (iVar1 = WPACKET_allocate_bytes(puVar8,(longlong)local_fc0,0), iVar1 == 0)))))) ||
             ((lVar15 != 0 && (iVar1 = WPACKET_reserve_bytes(puVar8,lVar15,&local_f98), iVar1 == 0))
             )) {
            local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x362);
            goto LAB_143cb16d3;
          }
          param_4 = local_f90;
          uVar17 = local_fb8;
          puVar10[3] = local_f98;
          uVar5 = *(ulonglong *)(local_f90 + local_fb8 * 8);
          uVar7 = local_f78 + local_f80;
          local_f80 = local_f80 + uVar5;
          *puVar10 = uVar5;
          lVar13 = *(longlong *)(param_1 + 0x114);
          puVar10[4] = uVar7;
          if (lVar13 == 0) {
            iVar1 = WPACKET_memcpy(puVar8);
            if (iVar1 == 0) {
              local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x37c);
              goto LAB_143cb16d3;
            }
            puVar10[4] = puVar10[3];
          }
          else {
            iVar1 = ssl3_do_compress(param_1,puVar10 + -1);
            if ((iVar1 == 0) || (iVar1 = WPACKET_allocate_bytes(puVar8,*puVar10,0), iVar1 == 0)) {
              local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x376);
              uVar4 = 0x8d;
              goto LAB_143cb16dc;
            }
          }
          param_2 = local_fc8;
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
              ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
             ((*(longlong *)(param_1 + 0x118) != 0 && ((param_1[0x1f] != 2 || (local_fc8 != 0x15))))
             )) {
            iVar1 = WPACKET_put_bytes__(puVar8,local_fc8,1);
            if (iVar1 == 0) {
              local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x38a);
              uVar4 = 0x44;
              goto LAB_143cb16dc;
            }
            *puVar10 = *puVar10 + 1;
            uVar2 = ssl_get_max_send_fragment(param_1);
            uVar5 = *puVar10;
            uVar17 = local_fb8;
            if (uVar5 < uVar2) {
              uVar7 = uVar2 - uVar5;
              if (*(code **)(param_1 + 0x5bc) == (code *)0x0) {
                uVar6 = *(ulonglong *)(param_1 + 0x5c0);
                if (uVar6 != 0) {
                  if ((uVar6 - 1 & uVar6) == 0) {
                    uVar5 = uVar6 - 1 & uVar5;
                  }
                  else {
                    uVar5 = uVar5 % uVar6;
                  }
                  if (uVar5 != 0) {
                    uVar6 = uVar6 - uVar5;
                    goto LAB_143cb12d4;
                  }
                }
              }
              else {
                uVar6 = (**(code **)(param_1 + 0x5bc))
                                  (param_1,param_2,uVar5,*(undefined8 *)(param_1 + 0x5be));
LAB_143cb12d4:
                uVar17 = local_fb8;
                if (uVar6 != 0) {
                  if (uVar6 <= uVar7) {
                    uVar7 = uVar6;
                  }
                  iVar1 = WPACKET_memset(puVar8,0,uVar7);
                  if (iVar1 == 0) {
                    local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x3ac);
                    goto LAB_143cb16d3;
                  }
                  *puVar10 = *puVar10 + uVar7;
                  uVar17 = local_fb8;
                }
              }
            }
          }
          if ((((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (local_fb0 != 0)) &&
             ((iVar1 = WPACKET_allocate_bytes(puVar8,(longlong)local_fb0,&local_f70), iVar1 == 0 ||
              (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                 (param_1,puVar10 + -1,local_f70,1), iVar1 == 0)))) {
            local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x3c0);
            goto LAB_143cb16d3;
          }
          iVar1 = WPACKET_reserve_bytes(puVar8,0x10);
          if ((iVar1 == 0) || (iVar1 = WPACKET_get_length(puVar8,&local_f88), iVar1 == 0)) {
            local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x3d2);
            goto LAB_143cb16d3;
          }
          lVar13 = WPACKET_get_curr(puVar8);
          local_fb8 = uVar17 + 1;
          *puVar10 = local_f88;
          puVar10[3] = lVar13 - local_f88;
          puVar8 = puVar8 + 0x30;
          puVar10[4] = lVar13 - local_f88;
          puVar10 = puVar10 + 9;
        } while (local_fb8 < param_5);
      }
      uVar5 = 0;
      if (param_1[0x1f] == 2) {
        iVar1 = tls13_enc();
        if (0 < iVar1) {
LAB_143cb1495:
          param_2 = local_fc8;
          if (param_5 != 0) {
            puVar8 = local_f58;
            plVar12 = (longlong *)(param_1 + 0x21a);
            puVar10 = local_950;
            do {
              iVar1 = WPACKET_get_length(puVar8,&local_f70);
              if (iVar1 == 0) {
LAB_143cb16cb:
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x402);
                goto LAB_143cb16d3;
              }
              uVar17 = *puVar10;
              if ((uVar17 < local_f70) ||
                 ((local_f70 < uVar17 &&
                  (iVar1 = WPACKET_allocate_bytes(puVar8,uVar17 - local_f70,0), iVar1 == 0))))
              goto LAB_143cb16cb;
              if (((**(uint **)(param_1 + 0x2a) & 0x400) != 0) &&
                 (lVar13 = (longlong)local_fb0, local_fb0 != 0)) {
                iVar1 = WPACKET_allocate_bytes(puVar8,lVar13,&local_f90);
                if ((iVar1 == 0) ||
                   (iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                                      (param_1,puVar10 + -1,local_f90,1), iVar1 == 0)) {
                  local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x40b);
                  goto LAB_143cb16d3;
                }
                *puVar10 = *puVar10 + lVar13;
              }
              iVar1 = WPACKET_get_length(puVar8,&local_f88);
              if ((iVar1 == 0) || (iVar1 = WPACKET_close(puVar8), iVar1 == 0)) {
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x414);
                goto LAB_143cb16d3;
              }
              param_2 = local_fc8;
              if (*(longlong *)(param_1 + 0x2e) != 0) {
                lVar13 = WPACKET_get_curr(puVar8);
                local_fd8 = *(ulonglong **)(param_1 + 0x30);
                local_fe8 = (ulonglong *)0x5;
                local_fe0 = param_1;
                (**(code **)(param_1 + 0x2e))(1,0,0x100,lVar13 + (-5 - local_f88));
                param_2 = local_fc8;
                if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                      && (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) ||
                    ((param_1[0x21] - 1U < 4 || (param_1[0x136] == 1)))) &&
                   (*(longlong *)(param_1 + 0x118) != 0)) {
                  local_fd8 = *(ulonglong **)(param_1 + 0x30);
                  local_fe8 = (ulonglong *)0x1;
                  local_fc4[0] = (undefined1)local_fc8;
                  local_fe0 = param_1;
                  (**(code **)(param_1 + 0x2e))(1,*param_1,0x101,local_fc4);
                }
              }
              iVar1 = WPACKET_finish(puVar8);
              if (iVar1 == 0) {
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x429);
                goto LAB_143cb16d3;
              }
              uVar17 = *puVar10 + 5;
              *(int *)((longlong)puVar10 + -4) = param_2;
              *puVar10 = uVar17;
              if (param_6 != 0) {
                if (uVar5 == 0) {
                  *local_f68 = uVar17;
                  return 1;
                }
                local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x43d);
                goto LAB_143cb16d3;
              }
              uVar5 = uVar5 + 1;
              *plVar12 = uVar17 + local_fa8;
              puVar8 = puVar8 + 0x30;
              plVar12 = plVar12 + 5;
              puVar10 = puVar10 + 9;
            } while (uVar5 < param_5);
          }
          *(ulonglong *)(param_1 + 0x59e) = local_f80;
          *(longlong *)(param_1 + 0x5a4) = local_f78;
          param_1[0x5a0] = param_2;
          *(ulonglong *)(param_1 + 0x5a2) = local_f80;
          uVar17 = local_f80;
          goto LAB_143cb1759;
        }
        iVar1 = ossl_statem_in_error(param_1);
        if (iVar1 == 0) {
          local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x3e6);
LAB_143cb16d3:
          uVar4 = 0x44;
LAB_143cb16dc:
          local_fe8 = (ulonglong *)0x145d4a910;
          ossl_statem_fatal(param_1,0x50,0x68,uVar4);
        }
      }
      else {
        iVar1 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))
                          (param_1,local_958,param_5,1);
        if (0 < iVar1) goto LAB_143cb1495;
        iVar1 = ossl_statem_in_error(param_1);
        if (iVar1 == 0) {
          local_fe0 = (int *)CONCAT44(local_fe0._4_4_,0x3ee);
          goto LAB_143cb16d3;
        }
      }
      if (local_fa0 != 0) {
        puVar8 = local_f58;
        lVar13 = local_fa0;
        do {
          WPACKET_cleanup(puVar8);
          puVar8 = puVar8 + 0x30;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
    }
LAB_143cb1717:
    uVar4 = 0xffffffff;
  }
  else {
LAB_143cb1759:
    local_fe8 = local_f68;
    uVar4 = ssl3_write_pending(param_1,param_2,local_f78,uVar17);
  }
  return uVar4;
}



// FUNCTION 143cb17d0 ssl3_read_bytes body=2440 status=ok
// SIG undefined ssl3_read_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
ssl3_read_bytes(WriteBytesMem *param_1,int param_2,int *param_3,void *param_4,ulonglong param_5,
               int param_6,ulonglong *param_7)

{
  WriteBytesMem WVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  code *pcVar8;
  uchar *puVar9;
  ulonglong uVar10;
  size_t sVar11;
  WriteBytesMem *pWVar12;
  undefined4 uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined4 uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  undefined1 auStack_b8 [32];
  char *local_98;
  WriteBytesMem *local_90;
  undefined8 local_88;
  void *local_78;
  code *local_70;
  int *local_68;
  ulonglong local_60;
  ulonglong *local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar19 = 0;
  local_58[0] = param_7;
  local_70 = (code *)0x0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
      (iVar5 = **(int **)(param_1 + 8), iVar5 < 0x304)) || (uVar17 = 1, iVar5 == 0x10000)) {
    uVar17 = uVar19;
  }
  local_78 = param_4;
  local_68 = param_3;
  local_60 = uVar17;
  if ((*(longlong *)(param_1 + 0x820) != 0) || (iVar5 = ssl3_setup_read_buffer(param_1), iVar5 != 0)
     ) {
    if (((param_2 == 0) || (param_2 - 0x16U < 2)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      if ((param_2 == 0x16) && (lVar6 = *(longlong *)(param_1 + 0x1668), lVar6 != 0)) {
        pWVar12 = param_1 + 0x1660;
        uVar17 = uVar19;
        if (param_5 != 0) {
          lVar18 = (longlong)local_78 - (longlong)pWVar12;
          do {
            bVar21 = lVar6 == 0;
            lVar6 = 0;
            if (bVar21) break;
            uVar17 = uVar17 + 1;
            pWVar12[lVar18] = *pWVar12;
            pWVar12 = pWVar12 + 1;
            lVar6 = *(longlong *)(param_1 + 0x1668) + -1;
            *(longlong *)(param_1 + 0x1668) = lVar6;
            param_5 = param_5 - 1;
          } while (param_5 != 0);
        }
        if (lVar6 != 0) {
          do {
            WVar1 = *pWVar12;
            pWVar12 = pWVar12 + 1;
            uVar10 = (ulonglong)((int)uVar19 + 1);
            param_1[uVar19 + 0x1660] = WVar1;
            uVar19 = uVar10;
          } while (uVar10 < *(ulonglong *)(param_1 + 0x1668));
        }
        if (local_68 != (int *)0x0) {
          *local_68 = 0x16;
        }
        *param_7 = uVar17;
        return 1;
      }
      iVar5 = ossl_statem_get_in_handshake(param_1);
      if ((iVar5 == 0) && (iVar5 = FSlateAccessibleWidget::GetId(param_1), iVar5 != 0)) {
        uVar7 = (**(code **)(param_1 + 0x30))(param_1);
        if ((int)uVar7 < 0) {
          return uVar7;
        }
        if ((int)uVar7 == 0) {
          return 0xffffffff;
        }
      }
LAB_143cb19c0:
      *(undefined4 *)(param_1 + 0x28) = 1;
      uVar10 = *(ulonglong *)(param_1 + 0x810);
LAB_143cb19d0:
      if (uVar10 != 0) goto LAB_143cb19f5;
      do {
        uVar7 = ssl3_get_record(param_1);
        if ((int)uVar7 < 1) {
          return uVar7;
        }
        uVar10 = *(ulonglong *)(param_1 + 0x810);
        if (uVar10 == 0) {
          local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x516);
          goto LAB_143cb18ab;
        }
LAB_143cb19f5:
        uVar15 = uVar19;
        if (uVar10 != 0) {
          pWVar12 = param_1 + 0xd80;
          do {
            if (*(int *)pWVar12 == 0) break;
            uVar15 = uVar15 + 1;
            pWVar12 = pWVar12 + 0x48;
          } while (uVar15 < uVar10);
        }
        if (uVar15 == uVar10) goto code_r0x000143cb1a1a;
        if (uVar10 != 0) {
          lVar6 = uVar15 * 9 + 0x1a9;
          pWVar12 = param_1 + lVar6 * 8;
          if ((*(int *)(param_1 + lVar6 * 8 + 4) != 0x15) && (*(longlong *)(pWVar12 + 8) != 0)) {
            *(undefined4 *)(param_1 + 0x16ac) = 0;
          }
          if ((*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf0) != 0) &&
             (*(int *)(pWVar12 + 4) != 0x16)) {
            local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x534);
            uVar13 = 10;
            uVar16 = 0x91;
            goto LAB_143cb18b9;
          }
          if ((*(uint *)(param_1 + 0x44) & 2) != 0) {
            *(undefined8 *)(pWVar12 + 8) = 0;
            *(undefined4 *)(param_1 + 0x28) = 1;
            return 0;
          }
          iVar5 = *(int *)(pWVar12 + 4);
          if ((param_2 == iVar5) ||
             ((((iVar5 == 0x14 && (param_2 == 0x16)) && (local_68 != (int *)0x0)) && (uVar17 == 0)))
             ) {
            iVar5 = FSlateAccessibleWidget::GetId(param_1);
            if ((iVar5 == 0) || (param_2 != 0x17)) {
              if ((param_2 == 0x16) &&
                 ((*(int *)(pWVar12 + 4) == 0x14 && (*(longlong *)(param_1 + 0x1668) != 0)))) {
                uVar13 = 10;
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x55a);
                uVar16 = 0x85;
                goto LAB_143cb18b9;
              }
            }
            else if (*(longlong *)(param_1 + 0x430) == 0) {
              local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x552);
              uVar13 = 10;
              uVar16 = 100;
              goto LAB_143cb18b9;
            }
            if (local_68 != (int *)0x0) {
              *local_68 = *(int *)(pWVar12 + 4);
            }
            if (param_5 == 0) {
              if (*(longlong *)(pWVar12 + 8) != 0) {
                return 0;
              }
              *(int *)(pWVar12 + 0x38) = 1;
              return 0;
            }
            pWVar12 = pWVar12 + 0x18;
            uVar20 = uVar19;
            goto LAB_143cb1e60;
          }
          if (*(int *)pWVar12 == 2) {
            local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x5a7);
            goto LAB_143cb18ab;
          }
          iVar4 = **(int **)(param_1 + 8);
          if (iVar4 == 0x10000) {
            if ((*(int *)(param_1 + 0x38) != 0) || (iVar5 != 0x15)) {
              *(int *)param_1 = *(int *)pWVar12;
              uVar13 = 10;
              local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x5b5);
              uVar16 = 0xf4;
              goto LAB_143cb18b9;
            }
          }
          else if (iVar5 != 0x15) {
            if ((*(uint *)(param_1 + 0x44) & 1) == 0) {
              if (iVar5 == 0x16) {
LAB_143cb1cb2:
                uVar15 = 4 - *(longlong *)(param_1 + 0x1668);
                uVar10 = *(ulonglong *)(pWVar12 + 8);
                if (uVar15 <= *(ulonglong *)(pWVar12 + 8)) {
                  uVar10 = uVar15;
                }
                _guard_xfg_dispatch_icall_nop
                          (param_1 + *(longlong *)(param_1 + 0x1668) + 0x1660,
                           (void *)(*(longlong *)(pWVar12 + 0x20) + *(longlong *)(pWVar12 + 0x18)),
                           uVar10);
                *(ulonglong *)(pWVar12 + 0x18) = *(longlong *)(pWVar12 + 0x18) + uVar10;
                *(ulonglong *)(pWVar12 + 8) = *(longlong *)(pWVar12 + 8) - uVar10;
                *(ulonglong *)(param_1 + 0x1668) = *(longlong *)(param_1 + 0x1668) + uVar10;
                uVar10 = *(ulonglong *)(param_1 + 0x1668);
                if (*(longlong *)(pWVar12 + 8) == 0) {
                  *(int *)(pWVar12 + 0x38) = 1;
                  uVar10 = *(ulonglong *)(param_1 + 0x1668);
                }
                if (uVar10 < 4) goto LAB_143cb19c0;
              }
              if (*(int *)(pWVar12 + 4) == 0x14) {
                uVar13 = 10;
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x65b);
                uVar16 = 0x85;
                goto LAB_143cb18b9;
              }
              if ((*(ulonglong *)(param_1 + 0x1668) < 4) ||
                 (iVar5 = ossl_statem_get_in_handshake(param_1), iVar5 != 0)) {
                iVar5 = *(int *)(pWVar12 + 4);
                if (0x13 < iVar5) {
                  if (iVar5 < 0x17) {
                    local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x6a3);
                    uVar13 = 10;
                    goto LAB_143cb18b0;
                  }
                  if (iVar5 == 0x17) {
                    iVar5 = ossl_statem_app_data_allowed(param_1);
                    if (iVar5 != 0) {
                      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 2;
                      return 0xffffffff;
                    }
                    iVar5 = ossl_statem_skip_early_data(param_1);
                    if (iVar5 == 0) {
                      local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x6c3);
                      uVar13 = 10;
                      uVar16 = 0xf5;
                      goto LAB_143cb18b9;
                    }
                    iVar5 = early_data_count_ok(param_1,*(undefined8 *)(pWVar12 + 8),0x68);
                    if (iVar5 == 0) {
                      return 0xffffffff;
                    }
                    *(int *)(pWVar12 + 0x38) = 1;
                    goto LAB_143cb19c0;
                  }
                }
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x698);
                uVar13 = 10;
                uVar16 = 0xf5;
                goto LAB_143cb18b9;
              }
              iVar5 = *(int *)(param_1 + 0x84);
              ossl_statem_set_in_init(param_1,1);
              uVar7 = (**(code **)(param_1 + 0x30))(param_1);
              if ((int)uVar7 < 0) {
                return uVar7;
              }
              if ((int)uVar7 == 0) {
                return 0xffffffff;
              }
              if (iVar5 == 0xb) {
                return 0xffffffff;
              }
              if (((byte)param_1[0x5c8] & 4) != 0) goto LAB_143cb19c0;
              bVar21 = *(longlong *)(param_1 + 0x840) == 0;
            }
            else {
              if (iVar5 != 0x16) {
                *(undefined8 *)(pWVar12 + 8) = 0;
                uVar13 = 0xffffffff;
                *(int *)(pWVar12 + 0x38) = 1;
                uVar16 = 0x123;
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x638);
                goto LAB_143cb18b9;
              }
              if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
                 (0x303 < iVar4)) goto LAB_143cb1cb2;
              *(undefined8 *)(pWVar12 + 8) = 0;
              *(int *)(pWVar12 + 0x38) = 1;
              bVar21 = ((byte)param_1[0x5c8] & 4) == 0;
            }
            if (bVar21) {
              *(undefined4 *)(param_1 + 0x28) = 3;
              puVar9 = AK::WriteBytesMem::Bytes(param_1);
              BIO_clear_flags(puVar9,0xf);
              BIO_set_flags(puVar9,9);
              return 0xffffffff;
            }
            goto LAB_143cb19c0;
          }
          lVar6 = *(longlong *)(pWVar12 + 8);
          if (((0x7ffffffffffffffe < lVar6 - 1U) ||
              (cVar2 = *(char *)(*(longlong *)(pWVar12 + 0x20) + *(longlong *)(pWVar12 + 0x18)),
              lVar6 == 1)) ||
             (bVar3 = ((char *)(*(longlong *)(pWVar12 + 0x20) + *(longlong *)(pWVar12 + 0x18)))[1],
             lVar6 != 2)) {
            local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x5c9);
            uVar13 = 10;
            uVar16 = 0xcd;
            goto LAB_143cb18b9;
          }
          if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
            local_88 = *(undefined8 *)(param_1 + 0xc0);
            local_98 = (char *)0x2;
            local_90 = param_1;
            (**(code **)(param_1 + 0xb8))(0,*(undefined4 *)param_1,0x15);
          }
          pcVar8 = *(code **)(param_1 + 0x568);
          if ((*(code **)(param_1 + 0x568) == (code *)0x0) &&
             (pcVar8 = local_70, *(code **)(*(longlong *)(param_1 + 0x598) + 0x108) != (code *)0x0))
          {
            pcVar8 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
          }
          uVar14 = (uint)bVar3;
          local_70 = pcVar8;
          if (pcVar8 != (code *)0x0) {
            (*pcVar8)(param_1,0x4004,CONCAT11(cVar2,bVar3));
          }
          if (cVar2 == '\x01') {
LAB_143cb1bb3:
            *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xf4) = uVar14;
            *(int *)(pWVar12 + 0x38) = 1;
            *(int *)(param_1 + 0x16ac) = *(int *)(param_1 + 0x16ac) + 1;
            if (*(int *)(param_1 + 0x16ac) == 5) {
              local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x5e3);
              uVar13 = 10;
              uVar16 = 0x199;
              goto LAB_143cb18b9;
            }
LAB_143cb1bdb:
            if ((uVar17 != 0) && (uVar14 == 0x5a)) goto LAB_143cb19c0;
          }
          else if (uVar17 != 0) {
            if (uVar14 == 0x5a) goto LAB_143cb1bb3;
            goto LAB_143cb1bdb;
          }
          if ((uVar14 == 0) && ((uVar17 != 0 || (cVar2 == '\x01')))) {
            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
          }
          else {
            if ((cVar2 != '\x02') && (uVar17 == 0)) {
              if (uVar14 == 100) {
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x609);
                uVar13 = 0x28;
                uVar16 = 0x153;
              }
              else {
                if (cVar2 == '\x01') goto LAB_143cb19c0;
                local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x611);
                uVar13 = 0x2f;
                uVar16 = 0xf6;
              }
              goto LAB_143cb18b9;
            }
            *(undefined4 *)(param_1 + 0x28) = 1;
            local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x5f8);
            *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xf8) = uVar14;
            local_98 = "ssl\\record\\rec_layer_s3.c";
            ossl_statem_fatal(param_1,0xffffffff,0x94,bVar3 + 1000);
            BIO_snprintf(local_58,0x10,&DAT_144cd4c80,bVar3);
            ERR_add_error_data(2,"SSL alert number ",local_58);
            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
            *(int *)(pWVar12 + 0x38) = 1;
            SSL_CTX_remove_session
                      (*(undefined8 *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x508));
          }
          return 0;
        }
      } while( true );
    }
    local_90 = (WriteBytesMem *)CONCAT44(local_90._4_4_,0x4d2);
LAB_143cb18ab:
    uVar13 = 0x50;
LAB_143cb18b0:
    uVar16 = 0x44;
LAB_143cb18b9:
    local_98 = "ssl\\record\\rec_layer_s3.c";
    ossl_statem_fatal(param_1,uVar13,0x94,uVar16);
  }
  return 0xffffffff;
code_r0x000143cb1a1a:
  *(undefined8 *)(param_1 + 0x810) = 0;
  uVar10 = uVar19;
  goto LAB_143cb19d0;
LAB_143cb1e60:
  do {
    uVar17 = *(ulonglong *)(pWVar12 + -0x10);
    if (param_5 - uVar20 <= *(ulonglong *)(pWVar12 + -0x10)) {
      uVar17 = param_5 - uVar20;
    }
    _guard_xfg_dispatch_icall_nop
              (local_78,(void *)(*(longlong *)(pWVar12 + 8) + *(longlong *)pWVar12),uVar17);
    local_78 = (void *)((longlong)local_78 + uVar17);
    sVar11 = *(size_t *)(pWVar12 + -0x10);
    if (param_6 == 0) {
      *(ulonglong *)pWVar12 = *(longlong *)pWVar12 + uVar17;
      sVar11 = sVar11 - uVar17;
      *(size_t *)(pWVar12 + -0x10) = sVar11;
      if (sVar11 == 0) {
        *(undefined4 *)(param_1 + 0x80c) = 0xf0;
        sVar11 = *(size_t *)(pWVar12 + -0x10);
        *(longlong *)pWVar12 = 0;
        goto LAB_143cb1ec0;
      }
LAB_143cb1ecd:
      if ((param_6 != 0) && (uVar17 == sVar11)) goto LAB_143cb1ed6;
    }
    else {
      if (sVar11 != 0) goto LAB_143cb1ecd;
LAB_143cb1ec0:
      *(undefined4 *)(pWVar12 + 0x20) = 1;
      if (sVar11 != 0) goto LAB_143cb1ecd;
LAB_143cb1ed6:
      uVar15 = uVar15 + 1;
      pWVar12 = pWVar12 + 0x48;
    }
    uVar20 = uVar20 + uVar17;
  } while (((param_2 == 0x17) && (uVar15 < uVar10)) && (uVar20 < param_5));
  uVar17 = local_60;
  if (uVar20 != 0) {
    if (((param_6 == 0) && (uVar15 == uVar10)) &&
       ((((byte)param_1[0x5c8] & 0x10) != 0 && (*(longlong *)(param_1 + 0x840) == 0)))) {
      ssl3_release_read_buffer(param_1);
    }
    *local_58[0] = uVar20;
    return 1;
  }
  goto LAB_143cb19c0;
}



// FUNCTION 143cb2160 ssl3_read_n body=785 status=ok
// SIG undefined ssl3_read_n(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_read_n(longlong param_1,ulonglong param_2,ulonglong param_3,int param_4,int param_5,
                     ulonglong *param_6)

{
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  void *_Src;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong _Size;
  char *_Src_00;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((*(longlong *)(param_1 + 0x820) == 0) && (iVar1 = ssl3_setup_read_buffer(), iVar1 == 0)) {
    return 0xffffffff;
  }
  lVar4 = *(longlong *)(param_1 + 0x820);
  _Size = *(ulonglong *)(param_1 + 0x840);
  lVar5 = 7 - (ulonglong)((int)lVar4 - 4U & 7);
  if (param_4 != 0) {
    lVar6 = *(longlong *)(param_1 + 0x1650);
    _Src = *(void **)(param_1 + 0x1648);
    goto LAB_143cb2260;
  }
  if (_Size == 0) {
LAB_143cb2223:
    *(longlong *)(param_1 + 0x838) = lVar5;
  }
  else if ((((lVar5 != 0) && (4 < _Size)) &&
           (_Src_00 = (char *)(*(longlong *)(param_1 + 0x838) + lVar4), *_Src_00 == '\x17')) &&
          (0x7f < CONCAT11(_Src_00[3],_Src_00[4]))) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar4 + lVar5),_Src_00,_Size);
    lVar4 = *(longlong *)(param_1 + 0x820);
    goto LAB_143cb2223;
  }
  _Src = (void *)(*(longlong *)(param_1 + 0x838) + lVar4);
  *(undefined8 *)(param_1 + 0x1650) = 0;
  *(void **)(param_1 + 0x1648) = _Src;
  lVar6 = 0;
  lVar4 = *(longlong *)(param_1 + 0x820);
LAB_143cb2260:
  _Dst = (void *)(lVar4 + lVar5);
  if ((_Src != _Dst) && (param_5 == 1)) {
    _guard_xfg_dispatch_icall_nop(_Dst,_Src,lVar6 + _Size);
    *(void **)(param_1 + 0x1648) = _Dst;
    *(longlong *)(param_1 + 0x838) = lVar6 + lVar5;
  }
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8;
  if (uVar3 != 0) {
    if (_Size == 0) {
      if (param_4 != 0) {
        return 0;
      }
    }
    else if (_Size < param_2) {
      param_2 = _Size;
    }
  }
  if (param_2 <= _Size) {
    *(longlong *)(param_1 + 0x1650) = *(longlong *)(param_1 + 0x1650) + param_2;
    *(longlong *)(param_1 + 0x838) = *(longlong *)(param_1 + 0x838) + param_2;
    *(ulonglong *)(param_1 + 0x840) = _Size - param_2;
    *param_6 = param_2;
    return 1;
  }
  uVar2 = *(longlong *)(param_1 + 0x830) - *(longlong *)(param_1 + 0x838);
  if (uVar2 < param_2) {
    ossl_statem_fatal(param_1,0x50,0x95,0x44,"ssl\\record\\rec_layer_s3.c",0x10b);
    return 0xffffffff;
  }
  if ((*(int *)(param_1 + 0x808) != 0) || (uVar8 = param_2, uVar3 != 0)) {
    if (param_3 < param_2) {
      param_3 = param_2;
    }
    uVar8 = param_3;
    if (uVar2 < param_3) {
      uVar8 = uVar2;
    }
  }
  do {
    SetLastError(0);
    if (*(longlong *)(param_1 + 0x10) == 0) {
      ossl_statem_fatal(param_1,0x50,0x95,0xd3,"ssl\\record\\rec_layer_s3.c",0x12d);
      uVar2 = 0xffffffff;
LAB_143cb2438:
      *(ulonglong *)(param_1 + 0x840) = _Size;
      if ((((*(byte *)(param_1 + 0x5c8) & 0x10) != 0) &&
          ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)) &&
         (lVar6 + _Size == 0)) {
        ssl3_release_read_buffer(param_1);
      }
      return uVar2 & 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0x28) = 3;
    iVar1 = BIO_read(*(longlong *)(param_1 + 0x10),(longlong)_Dst + _Size + lVar6,
                     (int)uVar8 - (int)_Size);
    uVar2 = (ulonglong)iVar1;
    uVar7 = 0;
    if (-1 < iVar1) {
      uVar7 = uVar2;
    }
    if (iVar1 < 1) goto LAB_143cb2438;
    _Size = _Size + uVar7;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      if (_Size < param_2) {
        param_2 = _Size;
      }
      goto LAB_143cb23d4;
    }
    if (param_2 <= _Size) {
LAB_143cb23d4:
      *(longlong *)(param_1 + 0x838) = *(longlong *)(param_1 + 0x838) + param_2;
      *(ulonglong *)(param_1 + 0x840) = _Size - param_2;
      *(longlong *)(param_1 + 0x1650) = *(longlong *)(param_1 + 0x1650) + param_2;
      *(undefined4 *)(param_1 + 0x28) = 1;
      *param_6 = param_2;
      return 1;
    }
  } while( true );
}



// FUNCTION 143cb2480 ssl3_record_sequence_update body=18 status=ok
// SIG undefined ssl3_record_sequence_update(void)

void ssl3_record_sequence_update(longlong param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(param_1 + 7);
  do {
    *pcVar1 = *pcVar1 + '\x01';
    if (*pcVar1 != '\0') {
      return;
    }
    pcVar1 = pcVar1 + -1;
  } while (-1 < (longlong)pcVar1 - param_1);
  return;
}



// FUNCTION 143cb24a0 ssl3_write_bytes body=1714 status=ok
// SIG undefined ssl3_write_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong ssl3_write_bytes(undefined4 *param_1,int param_2,longlong param_3,ulonglong param_4,
                          ulonglong *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  undefined1 auStack_1f8 [32];
  ulonglong *local_1d8;
  undefined4 local_1d0;
  ulonglong *local_1c8;
  int local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong *local_1a0;
  undefined8 local_198;
  undefined8 *local_190;
  ulonglong local_188;
  uint local_180;
  ulonglong local_178;
  ulonglong local_168 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined2 local_5d;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1f8;
  uVar11 = *(ulonglong *)(param_1 + 0x596);
  local_1a0 = param_5;
  param_1[10] = 1;
  local_1b8 = param_2;
  local_1a8 = param_3;
  if ((param_4 < uVar11) ||
     ((*(longlong *)(param_1 + 0x21a) != 0 && (param_4 < *(longlong *)(param_1 + 0x59e) + uVar11))))
  {
    local_1d0 = 0x16c;
    local_1d8 = (ulonglong *)0x145d4a910;
    ossl_statem_fatal(param_1,0x50,0x9e,0x10f);
    return 0xffffffff;
  }
  if ((param_1[0x21] == 4) && (iVar2 = early_data_count_ok(param_1,param_4,0,1), iVar2 == 0)) {
    return 0xffffffff;
  }
  *(undefined8 *)(param_1 + 0x596) = 0;
  iVar2 = FSlateAccessibleWidget::GetId(param_1);
  if (((iVar2 != 0) && (iVar2 = ossl_statem_get_in_handshake(param_1), iVar2 == 0)) &&
     (param_1[0x21] != 6)) {
    uVar6 = (**(code **)(param_1 + 0xc))(param_1);
    if ((int)uVar6 < 0) {
      return uVar6;
    }
    if ((int)uVar6 == 0) {
      return 0xffffffff;
    }
  }
  if (*(longlong *)(param_1 + 0x21a) != 0) {
    local_1d8 = &local_1b0;
    uVar6 = ssl3_write_pending(param_1,param_2,param_3 + uVar11,*(undefined8 *)(param_1 + 0x59e));
    if ((int)uVar6 < 1) goto LAB_143cb2ade;
    uVar11 = uVar11 + local_1b0;
  }
  if (param_2 == 0x17) {
    uVar3 = ssl_get_max_send_fragment(param_1);
    uVar6 = (ulonglong)uVar3;
    if (((param_4 < uVar6 * 4) || (*(longlong *)(param_1 + 0x114) != 0)) ||
       ((*(longlong *)(param_1 + 0x2e) != 0 ||
        (((**(uint **)(param_1 + 0x2a) & 0x400) != 0 ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))))))
    goto LAB_143cb291f;
    uVar7 = FHardwareCursor::GetHandle(*(undefined8 *)(param_1 + 0x118));
    uVar4 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar7);
    if ((uVar4 >> 0x16 & 1) == 0) goto LAB_143cb291f;
    uVar14 = uVar6 - 0x200;
    if ((uVar3 & 0xfff) != 0) {
      uVar14 = uVar6;
    }
    local_178 = uVar14;
    if ((uVar11 != 0) && (*(longlong *)(param_1 + 0x212) != 0)) {
      if (uVar11 != param_4) goto LAB_143cb26d2;
      goto LAB_143cb293e;
    }
    ssl3_release_write_buffer(param_1);
    iVar2 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x118),0x1c,uVar14 & 0xffffffff);
    lVar8 = 8;
    if (param_4 < uVar14 * 8) {
      lVar8 = 4;
    }
    iVar2 = ssl3_setup_write_buffer(param_1,1,iVar2 * lVar8);
    if (iVar2 == 0) {
      return 0xffffffff;
    }
LAB_143cb26d2:
    uVar12 = uVar14 * 4;
    uVar17 = param_4 - uVar11;
    if (uVar12 <= uVar17) {
      do {
        if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
           (uVar6 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(param_1), (int)uVar6 < 1))
        goto LAB_143cb2ade;
        local_60 = 0x17;
        local_5d = 0;
        local_198 = 0;
        local_180 = 4;
        if (uVar14 * 8 <= uVar17) {
          local_180 = 8;
          uVar12 = uVar14 * 8;
        }
        local_68 = *(undefined8 *)(param_1 + 0x5a8);
        local_5f = (undefined1)((uint)*param_1 >> 8);
        local_190 = &local_68;
        local_5e = (undefined1)*param_1;
        local_188 = uVar12;
        iVar2 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x118),0x19,0x20,&local_198);
        if ((iVar2 < 1) || (*(ulonglong *)(param_1 + 0x216) < (ulonglong)(longlong)iVar2)) break;
        local_198 = *(undefined8 *)(param_1 + 0x212);
        puVar15 = (undefined8 *)(local_1a8 + uVar11);
        local_190 = puVar15;
        local_188 = uVar12;
        iVar5 = EVP_CIPHER_CTX_ctrl(*(undefined8 *)(param_1 + 0x118),0x1a,0x20,&local_198);
        if (iVar5 < 1) {
          return 0xffffffff;
        }
        *(char *)((longlong)param_1 + 0x16a7) =
             *(char *)((longlong)param_1 + 0x16a7) + (char)local_180;
        if (*(byte *)((longlong)param_1 + 0x16a7) < local_180) {
          pcVar9 = (char *)((longlong)param_1 + 0x16a6);
          do {
            if ((longlong)(pcVar9 + (-0x16a0 - (longlong)param_1)) < 0) break;
            *pcVar9 = *pcVar9 + '\x01';
            cVar1 = *pcVar9;
            pcVar9 = pcVar9 + -1;
          } while (cVar1 == '\0');
        }
        *(undefined8 *)(param_1 + 0x218) = 0;
        local_1d8 = &local_1b0;
        *(longlong *)(param_1 + 0x21a) = (longlong)iVar2;
        *(ulonglong *)(param_1 + 0x59e) = uVar12;
        *(undefined8 **)(param_1 + 0x5a4) = puVar15;
        param_1[0x5a0] = 0x17;
        *(ulonglong *)(param_1 + 0x5a2) = uVar12;
        uVar3 = ssl3_write_pending(param_1,0x17,puVar15,uVar12);
        if ((int)uVar3 < 1) {
          if (((int)uVar3 < 0) &&
             ((*(longlong *)(param_1 + 6) == 0 ||
              (iVar2 = BIO_test_flags(*(longlong *)(param_1 + 6),8), iVar2 == 0)))) {
            ssl3_release_write_buffer(param_1);
          }
          *(ulonglong *)(param_1 + 0x596) = uVar11;
          return (ulonglong)uVar3;
        }
        uVar14 = local_1b0;
        if (local_1b0 == uVar17) goto LAB_143cb2ac5;
        uVar17 = uVar17 - local_1b0;
        uVar11 = uVar11 + local_1b0;
        uVar12 = local_178 * 4;
        uVar14 = local_178;
      } while (uVar12 <= uVar17);
    }
    ssl3_release_write_buffer(param_1);
  }
  else {
LAB_143cb291f:
    if (uVar11 == param_4) {
      if (((*(byte *)(param_1 + 0x172) & 0x10) == 0) ||
         ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0))
      goto LAB_143cb2946;
LAB_143cb293e:
      ssl3_release_write_buffer(param_1);
LAB_143cb2946:
      *param_5 = uVar11;
      return 1;
    }
  }
  param_4 = param_4 - uVar11;
  uVar3 = ssl_get_max_send_fragment(param_1);
  uVar12 = (ulonglong)uVar3;
  uVar3 = ssl_get_split_send_fragment();
  puVar16 = *(ulonglong **)(param_1 + 0x17e);
  uVar14 = (ulonglong)uVar3;
  if ((ulonglong *)0x20 < puVar16) {
    local_1d0 = 0x233;
    goto LAB_143cb2af2;
  }
  if ((puVar16 == (ulonglong *)0x0) || (*(longlong *)(param_1 + 0x118) == 0)) {
LAB_143cb29ad:
    puVar16 = (ulonglong *)0x1;
  }
  else {
    FHardwareCursor::GetHandle();
    uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize();
    if (((uVar3 >> 0x17 & 1) == 0) ||
       ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 1) == 0))
    goto LAB_143cb29ad;
  }
  if (((uVar12 != 0) && (uVar14 != 0)) && (uVar14 <= uVar12)) {
    while( true ) {
      if (param_4 == 0) {
        puVar10 = (ulonglong *)0x1;
      }
      else {
        puVar10 = (ulonglong *)((param_4 - 1) / uVar14 + 1);
      }
      local_1d8 = puVar16;
      if (puVar10 <= puVar16) {
        local_1d8 = puVar10;
      }
      uVar6 = param_4 / (ulonglong)local_1d8;
      if (uVar6 < uVar12) {
        puVar10 = (ulonglong *)0x0;
        if (local_1d8 != (ulonglong *)0x0) {
          do {
            local_168[(longlong)puVar10] = uVar6;
            if (puVar10 < (ulonglong *)(param_4 % (ulonglong)local_1d8)) {
              local_168[(longlong)puVar10] = uVar6 + 1;
            }
            puVar10 = (ulonglong *)((longlong)puVar10 + 1);
          } while (puVar10 < local_1d8);
        }
      }
      else if (local_1d8 != (ulonglong *)0x0) {
        puVar13 = local_168;
        for (puVar10 = local_1d8; puVar10 != (ulonglong *)0x0;
            puVar10 = (ulonglong *)((longlong)puVar10 + -1)) {
          *puVar13 = uVar12;
          puVar13 = puVar13 + 1;
        }
      }
      local_1c8 = &local_1b0;
      local_1d0 = 0;
      uVar6 = do_ssl3_write(param_1,local_1b8,local_1a8 + uVar11,local_168);
      if ((int)uVar6 < 1) break;
      if ((local_1b0 == param_4) || ((local_1b8 == 0x17 && ((*(byte *)(param_1 + 0x172) & 1) != 0)))
         ) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xdc) = 0;
        uVar14 = local_1b0;
        if (((int)uVar6 == (int)param_4) &&
           (((*(byte *)(param_1 + 0x172) & 0x10) != 0 &&
            ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0)))) {
LAB_143cb2ac5:
          ssl3_release_write_buffer(param_1);
        }
        *local_1a0 = uVar14 + uVar11;
        return 1;
      }
      param_4 = param_4 - local_1b0;
      uVar11 = uVar11 + local_1b0;
    }
LAB_143cb2ade:
    *(ulonglong *)(param_1 + 0x596) = uVar11;
    return uVar6;
  }
  local_1d0 = 0x243;
LAB_143cb2af2:
  local_1d8 = (ulonglong *)0x145d4a910;
  ossl_statem_fatal(param_1,0x50,0x9e,0x44);
  return 0xffffffff;
}



// FUNCTION 143cb2b60 ssl3_write_pending body=416 status=ok
// SIG undefined ssl3_write_pending(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ssl3_write_pending(longlong param_1,int param_2,longlong param_3,ulonglong param_4,
                            undefined8 *param_5)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar4 = 0;
  if ((param_4 < *(ulonglong *)(param_1 + 0x1678)) ||
     ((((*(byte *)(param_1 + 0x5c8) & 2) == 0 && (*(longlong *)(param_1 + 0x1690) != param_3)) ||
      (*(int *)(param_1 + 0x1680) != param_2)))) {
    ossl_statem_fatal(param_1,0x50,0x9f,0x7f,"ssl\\record\\rec_layer_s3.c",0x10000046b);
    return 0xffffffff;
  }
  puVar3 = (ulonglong *)(param_1 + 0x868);
  uVar5 = uVar4;
  uVar6 = uVar4;
  do {
    uVar2 = *puVar3;
    while ((uVar2 != 0 || (*(longlong *)(param_1 + 0x818) - 1U <= uVar5))) {
      SetLastError(0);
      if (*(longlong *)(param_1 + 0x18) == 0) {
        ossl_statem_fatal(param_1,0x50,0x9f,0x80,"ssl\\record\\rec_layer_s3.c",0x482);
        uVar2 = 0xffffffff;
LAB_143cb2caf:
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
          *(undefined8 *)(param_1 + 0x868 + uVar5 * 0x28) = 0;
        }
        return uVar2 & 0xffffffff;
      }
      *(undefined4 *)(param_1 + 0x28) = 2;
      iVar1 = BIO_write(*(longlong *)(param_1 + 0x18),puVar3[-4] + puVar3[-1],(int)*puVar3);
      uVar2 = (ulonglong)iVar1;
      if (-1 < iVar1) {
        uVar6 = uVar2;
      }
      if (iVar1 < 1) goto LAB_143cb2caf;
      puVar3[-1] = puVar3[-1] + uVar6;
      if (uVar6 == *puVar3) {
        *puVar3 = 0;
        uVar2 = uVar4;
        if (*(ulonglong *)(param_1 + 0x818) <= uVar5 + 1) {
          *(undefined4 *)(param_1 + 0x28) = 1;
          *param_5 = *(undefined8 *)(param_1 + 0x1688);
          return 1;
        }
      }
      else {
        uVar2 = *puVar3 - uVar6;
        *puVar3 = uVar2;
      }
    }
    uVar5 = uVar5 + 1;
    puVar3 = puVar3 + 5;
  } while( true );
}



// FUNCTION 143cb2d00 SSL3_BUFFER_clear body=11 status=ok
// SIG undefined SSL3_BUFFER_clear(void)

void SSL3_BUFFER_clear(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}



// FUNCTION 143cb2d10 SSL3_BUFFER_release body=50 status=ok
// SIG undefined SSL3_BUFFER_release(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void SSL3_BUFFER_release(undefined8 *param_1)

{
  CRYPTO_free(*param_1,"ssl\\record\\ssl3_buffer.c",0x21);
  *param_1 = 0;
  return;
}



// FUNCTION 143cb2d50 ssl3_release_read_buffer body=65 status=ok
// SIG undefined ssl3_release_read_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_release_read_buffer(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x820),"ssl\\record\\ssl3_buffer.c",0xb0);
  *(undefined8 *)(param_1 + 0x820) = 0;
  return 1;
}



// FUNCTION 143cb2da0 ssl3_release_write_buffer body=141 status=ok
// SIG undefined ssl3_release_write_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_release_write_buffer(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x818);
  if (lVar1 == 0) {
    *(undefined8 *)(param_1 + 0x818) = 0;
  }
  else {
    puVar2 = (undefined8 *)(param_1 + (lVar1 + 0x34) * 0x28);
    do {
      CRYPTO_free(*puVar2,"ssl\\record\\ssl3_buffer.c",0xa3);
      *puVar2 = 0;
      puVar2 = puVar2 + -5;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    *(undefined8 *)(param_1 + 0x818) = 0;
  }
  return 1;
}



// FUNCTION 143cb2e30 ssl3_setup_buffers body=452 status=ok
// SIG undefined ssl3_setup_buffers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_buffers(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  
  uVar9 = 1;
  lVar4 = *(longlong *)(param_1 + 0x820);
  if (lVar4 == 0) {
    uVar6 = 0x4150;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar6 = 0x4148;
    }
    uVar9 = 1;
    iVar2 = ssl_allow_compression(param_1);
    if (iVar2 != 0) {
      uVar6 = uVar6 + 0x400;
    }
    uVar7 = *(ulonglong *)(param_1 + 0x828);
    if (*(ulonglong *)(param_1 + 0x828) <= uVar6) {
      uVar7 = uVar6;
    }
    lVar4 = CRYPTO_malloc(uVar7,"ssl\\record\\ssl3_buffer.c",0x3f);
    if (lVar4 != 0) {
      *(longlong *)(param_1 + 0x820) = lVar4;
      *(ulonglong *)(param_1 + 0x830) = uVar7;
      goto LAB_143cb2eda;
    }
    uVar3 = 0x46;
    uVar5 = 0x9c;
LAB_143cb2fbe:
    ossl_statem_fatal(param_1,0xffffffff,uVar5,0x41,"ssl\\record\\ssl3_buffer.c",
                      CONCAT44(uVar9,uVar3));
    uVar5 = 0;
  }
  else {
LAB_143cb2eda:
    *(longlong *)(param_1 + 0x1648) = lVar4;
    *(undefined8 *)(param_1 + 0x818) = 1;
    lVar4 = 0xe;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar4 = 5;
    }
    iVar2 = ssl_get_max_send_fragment(param_1);
    lVar8 = lVar4 + 3 + (ulonglong)(iVar2 + 0x50);
    iVar2 = ssl_allow_compression(param_1);
    if (iVar2 != 0) {
      lVar8 = lVar8 + 0x400;
    }
    if ((*(uint *)(param_1 + 0x5c4) & 0x800) == 0) {
      lVar8 = lVar8 + 0x53 + lVar4;
    }
    plVar1 = (longlong *)(param_1 + 0x848);
    if (*plVar1 == 0) {
LAB_143cb2f6f:
      lVar4 = CRYPTO_malloc(lVar8,"ssl\\record\\ssl3_buffer.c",0x78);
      if (lVar4 == 0) {
        *(undefined8 *)(param_1 + 0x818) = 0;
        uVar3 = 0x81;
        uVar5 = 0x123;
        goto LAB_143cb2fbe;
      }
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined8 *)(param_1 + 0x860) = 0;
      *(undefined8 *)(param_1 + 0x868) = 0;
      *plVar1 = lVar4;
      *(longlong *)(param_1 + 0x858) = lVar8;
    }
    else if (*(longlong *)(param_1 + 0x858) != lVar8) {
      CRYPTO_free(*plVar1,"ssl\\record\\ssl3_buffer.c",0x73);
      *plVar1 = 0;
      goto LAB_143cb2f6f;
    }
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 143cb3000 ssl3_setup_read_buffer body=229 status=ok
// SIG undefined ssl3_setup_read_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_read_buffer(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  lVar2 = *(longlong *)(param_1 + 0x820);
  if (lVar2 == 0) {
    uVar4 = 0x4150;
    if ((*(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar4 = 0x4148;
    }
    iVar1 = ssl_allow_compression(param_1);
    if (iVar1 != 0) {
      uVar4 = uVar4 + 0x400;
    }
    uVar3 = *(ulonglong *)(param_1 + 0x828);
    if (*(ulonglong *)(param_1 + 0x828) <= uVar4) {
      uVar3 = uVar4;
    }
    lVar2 = CRYPTO_malloc(uVar3,"ssl\\record\\ssl3_buffer.c",0x3f);
    if (lVar2 == 0) {
      ossl_statem_fatal(param_1,0xffffffff,0x9c,0x41,"ssl\\record\\ssl3_buffer.c",
                        CONCAT44(uVar5,0x46));
      return 0;
    }
    *(longlong *)(param_1 + 0x820) = lVar2;
    *(ulonglong *)(param_1 + 0x830) = uVar3;
  }
  *(longlong *)(param_1 + 0x1648) = lVar2;
  return 1;
}



// FUNCTION 143cb30f0 ssl3_setup_write_buffer body=332 status=ok
// SIG undefined ssl3_setup_write_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_setup_write_buffer(longlong param_1,ulonglong param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  
  *(ulonglong *)(param_1 + 0x818) = param_2;
  if (param_3 == 0) {
    lVar2 = 0xe;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      lVar2 = 5;
    }
    iVar1 = ssl_get_max_send_fragment();
    param_3 = lVar2 + 3 + (ulonglong)(iVar1 + 0x50);
    iVar1 = ssl_allow_compression(param_1);
    if (iVar1 != 0) {
      param_3 = param_3 + 0x400;
    }
    if ((*(uint *)(param_1 + 0x5c4) & 0x800) == 0) {
      param_3 = param_3 + 0x53 + lVar2;
    }
  }
  uVar4 = 0;
  plVar3 = (longlong *)(param_1 + 0x848);
  if (param_2 != 0) {
    do {
      if (*plVar3 == 0) {
LAB_143cb31b5:
        lVar2 = CRYPTO_malloc(param_3,"ssl\\record\\ssl3_buffer.c",0x78);
        if (lVar2 == 0) {
          *(ulonglong *)(param_1 + 0x818) = uVar4;
          ossl_statem_fatal(param_1,0xffffffff,0x123,0x41,"ssl\\record\\ssl3_buffer.c",0x81);
          return 0;
        }
        plVar3[1] = 0;
        plVar3[3] = 0;
        plVar3[4] = 0;
        *plVar3 = lVar2;
        plVar3[2] = param_3;
      }
      else if (plVar3[2] != param_3) {
        CRYPTO_free(*plVar3,"ssl\\record\\ssl3_buffer.c",0x73);
        *plVar3 = 0;
        goto LAB_143cb31b5;
      }
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 5;
    } while (uVar4 < param_2);
  }
  return 1;
}



// FUNCTION 143cb3240 X509_REVOKED_cmp body=28 status=ok
// SIG undefined X509_REVOKED_cmp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void X509_REVOKED_cmp(undefined8 *param_1,undefined8 *param_2)

{
  X509_NAME_cmp(*param_1,*param_2);
  return;
}



// FUNCTION 143cb3260 check_for_downgrade body=166 status=ok
// SIG undefined check_for_downgrade(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void check_for_downgrade(longlong param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 == 0x303) {
    iVar1 = ssl_version_supported(param_1,0x304,0);
    if (iVar1 != 0) {
      *param_3 = 1;
      return;
    }
  }
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) &&
     (param_2 < 0x303)) {
    iVar1 = ssl_version_supported(param_1,0x303,0);
    if (iVar1 != 0) {
      *param_3 = 2;
      return;
    }
  }
  *param_3 = 0;
  return;
}



// FUNCTION 143cb3310 check_in_list body=141 status=ok
// SIG undefined check_in_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
check_in_list(undefined8 param_1,short param_2,longlong param_3,ulonglong param_4,int param_5)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  
  if (((param_3 != 0) && (param_4 != 0)) && (uVar3 = 0, param_4 != 0)) {
    do {
      sVar1 = *(short *)(param_3 + uVar3 * 2);
      if ((param_2 == sVar1) &&
         ((param_5 == 0 || (iVar2 = tls_curve_allowed(param_1,sVar1,0x20006), iVar2 != 0)))) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_4);
  }
  return 0;
}



// FUNCTION 143cb33a0 construct_ca_names body=339 status=ok
// SIG undefined construct_ca_names(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 construct_ca_names(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined1 local_res18 [8];
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar6 = 0x143cb33b0;
  lVar3 = SSL_get0_CA_list();
  iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar7,0x8df));
    return 0;
  }
  if (lVar3 != 0) {
    iVar5 = 0;
    iVar1 = OPENSSL_sk_num(lVar3);
    uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
    if (0 < iVar1) {
      do {
        lVar4 = OPENSSL_sk_value(lVar3,iVar5);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (lVar4 == 0) {
LAB_143cb34cb:
          uVar6 = CONCAT44(uVar7,0x8f1);
          goto LAB_143cb34a4;
        }
        iVar1 = i2d_X509_NAME(lVar4,0);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar1 < 0) goto LAB_143cb34cb;
        iVar2 = WPACKET_sub_allocate_bytes__(param_2,(longlong)iVar1,local_res18,2);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar2 == 0) goto LAB_143cb34cb;
        iVar2 = i2d_X509_NAME(lVar4,local_res18);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
        if (iVar2 != iVar1) goto LAB_143cb34cb;
        iVar5 = iVar5 + 1;
        iVar1 = OPENSSL_sk_num(lVar3);
        uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
      } while (iVar5 < iVar1);
    }
  }
  iVar1 = WPACKET_close(param_2);
  if (iVar1 == 0) {
    uVar6 = CONCAT44(uVar7,0x8f9);
LAB_143cb34a4:
    ossl_statem_fatal(param_1,0x50,0x228,0x44,"ssl\\statem\\statem_lib.c",uVar6);
    uVar6 = 0;
  }
  else {
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143cb3500 construct_key_exchange_tbs body=232 status=ok
// SIG undefined construct_key_exchange_tbs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong construct_key_exchange_tbs
                   (longlong param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  puVar2 = (undefined8 *)CRYPTO_malloc(param_4 + 0x40,"ssl\\statem\\statem_lib.c",0x905);
  if (puVar2 == (undefined8 *)0x0) {
    ossl_statem_fatal(param_1,0x50,0x229,0x41,"ssl\\statem\\statem_lib.c",CONCAT44(uVar4,0x909));
    lVar3 = 0;
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xc0);
    *puVar2 = *(undefined8 *)(lVar3 + 0xb8);
    puVar2[1] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xd0);
    puVar2[2] = *(undefined8 *)(lVar3 + 200);
    puVar2[3] = uVar1;
    lVar3 = *(longlong *)(param_1 + 0xa8);
    uVar1 = *(undefined8 *)(lVar3 + 0xa0);
    puVar2[4] = *(undefined8 *)(lVar3 + 0x98);
    puVar2[5] = uVar1;
    uVar1 = *(undefined8 *)(lVar3 + 0xb0);
    puVar2[6] = *(undefined8 *)(lVar3 + 0xa8);
    puVar2[7] = uVar1;
    _guard_xfg_dispatch_icall_nop(puVar2 + 8,param_3,param_4);
    lVar3 = param_4 + 0x40;
    *param_2 = puVar2;
  }
  return lVar3;
}



// FUNCTION 143cb35f0 create_synthetic_message_hash body=287 status=ok
// SIG undefined create_synthetic_message_hash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
create_synthetic_message_hash
          (longlong param_1,undefined1 *param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 local_70;
  undefined1 local_68 [64];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cb35fe;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78 = 0;
  local_70 = param_3;
  if (param_2 == (undefined1 *)0x0) {
    param_2 = local_68;
    local_70 = 0;
    iVar1 = ssl3_digest_cached_records();
    if (iVar1 == 0) {
      return 0;
    }
    iVar1 = ssl_handshake_hash(param_1,local_68,0x40,&local_70);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = ssl3_init_finished_mac(param_1);
  if (iVar1 != 0) {
    local_78 = CONCAT13((undefined1)local_70,(undefined3)local_78);
    local_78 = CONCAT31(local_78._1_3_,0xfe);
    iVar1 = ssl3_finish_mac(param_1,&local_78,4);
    if (((iVar1 != 0) && (iVar1 = ssl3_finish_mac(param_1,param_2,local_70), iVar1 != 0)) &&
       ((param_4 == 0 ||
        ((iVar1 = ssl3_finish_mac(param_1,param_4,param_5), iVar1 != 0 &&
         (iVar1 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x88) + 8),
                                  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x228) + 4),
         iVar1 != 0)))))) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cb3710 get_cert_verify_tbs_data body=408 status=ok
// SIG undefined get_cert_verify_tbs_data(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
get_cert_verify_tbs_data(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char *pcVar5;
  longlong local_res8;
  undefined4 uVar6;
  
  uVar6 = 1;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    *param_2 = 0x2020202020202020;
    param_2[1] = 0x2020202020202020;
    param_2[2] = 0x2020202020202020;
    param_2[3] = 0x2020202020202020;
    param_2[4] = 0x2020202020202020;
    param_2[5] = 0x2020202020202020;
    param_2[6] = 0x2020202020202020;
    param_2[7] = 0x2020202020202020;
    puVar3 = PTR_s_TLS_1_3__client_CertificateVerif_146832d98;
    puVar2 = PTR_s_TLS_1_3__server_CertificateVerif_146832d90;
    if (*(int *)(param_1 + 0x5c) - 0x27U < 2) {
      pcVar5 = PTR_s_TLS_1_3__server_CertificateVerif_146832d90;
      do {
        cVar1 = *pcVar5;
        pcVar5[(longlong)param_2 + (0x40 - (longlong)puVar2)] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    else {
      pcVar5 = PTR_s_TLS_1_3__client_CertificateVerif_146832d98;
      do {
        cVar1 = *pcVar5;
        pcVar5[(longlong)param_2 + (0x40 - (longlong)puVar3)] = cVar1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
    }
    if ((*(int *)(param_1 + 0x5c) == 0x27) || (*(int *)(param_1 + 0x5c) == 0x1d)) {
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 + 0x62),(void *)(param_1 + 0x490),
                 *(size_t *)(param_1 + 0x4d0));
      local_res8 = *(longlong *)(param_1 + 0x4d0);
    }
    else {
      iVar4 = ssl_handshake_hash(param_1,(longlong)param_2 + 0x62,0x40,&local_res8);
      if (iVar4 == 0) {
        return 0;
      }
    }
    *param_3 = param_2;
    local_res8 = local_res8 + 0x62;
  }
  else {
    iVar4 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,param_3);
    local_res8 = (longlong)iVar4;
    if (local_res8 == 0) {
      ossl_statem_fatal(param_1,0x50,0x24c,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar6,0xd2));
      return 0;
    }
  }
  *param_4 = local_res8;
  return 1;
}



// FUNCTION 143cb38b0 is_tls13_capable body=99 status=ok
// SIG undefined is_tls13_capable(void)

undefined8 is_tls13_capable(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  
  if (((*(longlong *)(param_1 + 0x580) == 0) && (*(longlong *)(param_1 + 0x588) == 0)) &&
     ((*(longlong **)(param_1 + 0x488))[0x39] == 0)) {
    uVar2 = 0;
    plVar1 = *(longlong **)(param_1 + 0x488);
    while (((uVar2 == 2 || (uVar2 - 4 < 3)) ||
           ((8 < uVar2 || ((plVar1[4] == 0 || (plVar1[5] == 0))))))) {
      uVar2 = uVar2 + 1;
      plVar1 = plVar1 + 5;
      if (8 < (int)uVar2) {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 143cb3920 parse_ca_names body=551 status=ok
// SIG undefined parse_ca_names(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 parse_ca_names(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined1 *local_res18 [2];
  undefined4 uVar10;
  
  lVar2 = OPENSSL_sk_new(X509_REVOKED_cmp);
  lVar3 = 0;
  if (lVar2 == 0) {
    uVar10 = 0x8a4;
LAB_143cb3963:
    uVar5 = 0x50;
    uVar9 = 0x41;
  }
  else {
    puVar7 = (undefined1 *)*param_2;
    if (1 < (ulonglong)param_2[1]) {
      uVar4 = param_2[1] - 2;
      puVar8 = puVar7 + 2;
      uVar6 = (ulonglong)CONCAT11(*puVar7,puVar7[1]);
      if (uVar6 <= uVar4) {
        *param_2 = (longlong)(puVar8 + uVar6);
        param_2[1] = uVar4 - uVar6;
        do {
          if (uVar6 == 0) {
            OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),
                                X509_NAME_free);
            *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x260) = lVar2;
            return 1;
          }
          if (uVar6 < 2) {
LAB_143cb3abb:
            ossl_statem_fatal(param_1,0x32,0x21d,0x9f,"ssl\\statem\\statem_lib.c",0x8b5);
            lVar3 = 0;
            goto LAB_143cb3b17;
          }
          puVar7 = puVar8 + 2;
          uVar4 = (ulonglong)CONCAT11(*puVar8,puVar8[1]);
          if (uVar6 - 2 < uVar4) goto LAB_143cb3abb;
          puVar8 = puVar7 + uVar4;
          uVar6 = (uVar6 - 2) - uVar4;
          local_res18[0] = puVar7;
          lVar3 = X509_NAME_free(0,local_res18);
          if (lVar3 == 0) {
            uVar10 = 0x8bc;
            uVar9 = 0xd;
            goto LAB_143cb3af8;
          }
          if (local_res18[0] != puVar7 + uVar4) {
            uVar10 = 0x8c1;
            uVar9 = 0x83;
            goto LAB_143cb3af8;
          }
          iVar1 = OPENSSL_sk_push(lVar2,lVar3);
        } while (iVar1 != 0);
        uVar10 = 0x8c7;
        goto LAB_143cb3963;
      }
    }
    uVar10 = 0x8aa;
    uVar9 = 0x9f;
LAB_143cb3af8:
    uVar5 = 0x32;
  }
  ossl_statem_fatal(param_1,uVar5,0x21d,uVar9,"ssl\\statem\\statem_lib.c",uVar10);
LAB_143cb3b17:
  OPENSSL_sk_pop_free(lVar2,X509_NAME_free);
  X509_NAME_free(lVar3);
  return 0;
}



// FUNCTION 143cb3b50 ssl3_do_write body=318 status=ok
// SIG undefined ssl3_do_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_do_write(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x143cb3b60;
  local_res8 = 0;
  iVar2 = ssl3_write_bytes(param_1,param_2,
                           *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                           *(longlong *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x26),&local_res8
                          );
  if (iVar2 < 0) {
    return 0xffffffff;
  }
  if ((((int)param_2 == 0x16) &&
      (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0 ||
         (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
       ((param_1[0x17] != 0x21 && (1 < param_1[0x17] - 0x2a)))))) &&
     (iVar2 = ssl3_finish_mac(param_1,*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) +
                                      *(longlong *)(param_1 + 0x28),local_res8), iVar2 == 0)) {
    return 0xffffffff;
  }
  lVar1 = *(longlong *)(param_1 + 0x26);
  if (local_res8 != lVar1) {
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + local_res8;
    *(longlong *)(param_1 + 0x26) = lVar1 - local_res8;
    return 0;
  }
  if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
    (**(code **)(param_1 + 0x2e))
              (1,*param_1,param_2 & 0xffffffff,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
               lVar1 + *(longlong *)(param_1 + 0x28),param_1,*(undefined8 *)(param_1 + 0x30),uVar3);
  }
  return 1;
}



// FUNCTION 143cb3c90 ssl3_output_cert_chain body=214 status=ok
// SIG undefined ssl3_output_cert_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_output_cert_chain(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_start_sub_packet_len__(param_2,3);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3e3));
  }
  else {
    iVar1 = ssl_add_cert_chain(param_1,param_2,param_3);
    if (iVar1 != 0) {
      iVar1 = WPACKET_close(param_2);
      if (iVar1 == 0) {
        ossl_statem_fatal(param_1,0x50,0x93,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x3ec));
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cb3d70 ssl3_take_mac body=110 status=ok
// SIG undefined ssl3_take_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl3_take_mac(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x40);
    uVar3 = *(undefined8 *)(lVar1 + 0x48);
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
  }
  uVar2 = (**(code **)(lVar1 + 0x28))(param_1,uVar2,uVar3,*(longlong *)(param_1 + 0xa8) + 0x1a0);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x220) = uVar2;
  return *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) != 0;
}



// FUNCTION 143cb3de0 ssl_add_cert_chain body=559 status=ok
// SIG undefined ssl_add_cert_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_add_cert_chain(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar10 = 1;
  uVar9 = 1;
  if ((param_3 == (longlong *)0x0) || (lVar1 = *param_3, lVar1 == 0)) {
    return 1;
  }
  lVar3 = param_3[2];
  if (lVar3 == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0xf8);
  }
  if ((((*(byte *)(param_1 + 0x5c8) & 8) == 0) && (lVar3 == 0)) &&
     ((lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1d8), lVar7 != 0 ||
      (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x598) + 0x20), lVar7 != 0)))) {
    lVar3 = X509_STORE_CTX_new();
    if (lVar3 == 0) {
      uVar4 = CONCAT44(uVar10,0x3a0);
      iVar8 = 0x41;
    }
    else {
      iVar8 = X509_STORE_CTX_init(lVar3,lVar7,lVar1,0);
      if (iVar8 == 0) {
        X509_STORE_CTX_free();
        iVar8 = 0xb;
        uVar4 = CONCAT44(uVar10,0x3a6);
      }
      else {
        X509_verify_cert(lVar3);
        ERR_clear_error();
        uVar4 = FBufferReaderBase::Tell(lVar3);
        iVar8 = ssl_security_cert_chain(param_1,uVar4,0,0);
        if (iVar8 == 1) {
          iVar8 = OPENSSL_sk_num(uVar4);
          iVar6 = 0;
          if (0 < iVar8) {
            do {
              uVar5 = OPENSSL_sk_value(uVar4,iVar6);
              iVar2 = ssl_add_cert_to_wpacket(param_1,param_2,uVar5,iVar6);
              if (iVar2 == 0) {
                X509_STORE_CTX_free(lVar3);
                return 0;
              }
              iVar6 = iVar6 + 1;
            } while (iVar6 < iVar8);
          }
          X509_STORE_CTX_free(lVar3);
          return 1;
        }
        X509_STORE_CTX_free(lVar3);
        uVar4 = CONCAT44(uVar10,0x3bc);
      }
    }
  }
  else {
    iVar8 = ssl_security_cert_chain(param_1,lVar3,lVar1,0);
    if (iVar8 == 1) {
      iVar8 = ssl_add_cert_to_wpacket(param_1,param_2,lVar1,0);
      if (iVar8 == 0) {
        return 0;
      }
      iVar6 = 0;
      iVar8 = OPENSSL_sk_num(lVar3);
      if (iVar8 < 1) {
        return 1;
      }
      do {
        uVar4 = OPENSSL_sk_value(lVar3,iVar6);
        iVar6 = iVar6 + 1;
        iVar8 = ssl_add_cert_to_wpacket(param_1,param_2,uVar4,iVar6);
        if (iVar8 == 0) {
          return 0;
        }
        iVar8 = OPENSSL_sk_num(lVar3);
      } while (iVar6 < iVar8);
      return 1;
    }
    uVar4 = CONCAT44(uVar9,0x3cd);
  }
  ossl_statem_fatal(param_1,0x50,0x13c,iVar8,"ssl\\statem\\statem_lib.c",uVar4);
  return 0;
}



// FUNCTION 143cb4010 ssl_add_cert_to_wpacket body=266 status=ok
// SIG undefined ssl_add_cert_to_wpacket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_add_cert_to_wpacket(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 local_18 [8];
  undefined8 uStack_10;
  
  uStack_10 = 0x143cb4030;
  iVar1 = i2d_X509(param_3,0);
  if (iVar1 < 0) {
    uVar4 = 0x36a;
    uVar3 = 7;
  }
  else {
    iVar2 = WPACKET_sub_allocate_bytes__(param_2,(longlong)iVar1,local_18,3);
    if ((iVar2 != 0) && (iVar2 = i2d_X509(param_3,local_18), iVar2 == iVar1)) {
      if (((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (((iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1 && (iVar1 != 0x10000)) &&
          (iVar1 = tls_construct_extensions(param_1,param_2,0x1000,param_3,(longlong)param_4),
          iVar1 == 0)))) {
        return 0;
      }
      return 1;
    }
    uVar4 = 0x370;
    uVar3 = 0x44;
  }
  ossl_statem_fatal(param_1,0x50,0x1ed,uVar3,"ssl\\statem\\statem_lib.c",uVar4);
  return 0;
}



// FUNCTION 143cb4120 ssl_allow_compression body=61 status=ok
// SIG undefined ssl_allow_compression(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_allow_compression(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5c4) & 0x20000) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,0xf,0,0,0);
  return uVar1;
}



// FUNCTION 143cb4160 ssl_check_version_downgrade body=181 status=ok
// SIG undefined ssl_check_version_downgrade(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_check_version_downgrade(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  
  if (*param_1 == *(int *)**(undefined8 **)(param_1 + 0x166)) {
    return true;
  }
  piVar2 = (int *)FUN_143ca7f90();
  if (*(int *)**(undefined8 **)(param_1 + 0x166) == *piVar2) {
    piVar2 = &DAT_145d4aad0;
  }
  else {
    piVar2 = (int *)FUN_143ca7f70();
    if (*(int *)**(undefined8 **)(param_1 + 0x166) != *piVar2) {
      return false;
    }
    piVar2 = &DAT_145d4ab60;
  }
  iVar1 = *piVar2;
  do {
    if (iVar1 == 0) {
      return false;
    }
    if (*(code **)(piVar2 + 4) != (code *)0x0) {
      uVar3 = (**(code **)(piVar2 + 4))();
      iVar1 = ssl_method_error(param_1,uVar3);
      if (iVar1 == 0) {
        return *param_1 == *piVar2;
      }
    }
    piVar2 = piVar2 + 6;
    iVar1 = *piVar2;
  } while( true );
}



// FUNCTION 143cb4220 ssl_choose_client_version body=656 status=ok
// SIG undefined ssl_choose_client_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_choose_client_version(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int local_res8 [2];
  int local_res10 [2];
  int local_res20 [2];
  undefined4 uVar10;
  
  iVar1 = *param_1;
  *param_1 = param_2;
  uVar10 = 0;
  uVar5 = tls_parse_extension(param_1,0x11,0x300,param_3,0,0);
  if ((int)uVar5 == 0) {
    *param_1 = iVar1;
    return uVar5;
  }
  if ((param_1[0x136] != 0) && (*param_1 != 0x304)) {
    *param_1 = iVar1;
    ossl_statem_fatal(param_1,0x46,0x25f,0x10a,"ssl\\statem\\statem_lib.c",CONCAT44(uVar10,0x74b));
    return 0;
  }
  iVar3 = **(int **)(param_1 + 2);
  if (iVar3 == 0x10000) {
    piVar8 = &DAT_145d4aad0;
LAB_143cb42f2:
    iVar3 = ssl_get_min_max_version(param_1,local_res10,local_res8,local_res20);
    if (iVar3 == 0) {
      iVar3 = *param_1;
      uVar9 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8;
      if (uVar9 == 0) {
        bVar2 = iVar3 < local_res10[0];
      }
      else {
        iVar6 = iVar3;
        if (iVar3 == 0x100) {
          iVar6 = 0xff00;
        }
        if (local_res10[0] == 0x100) {
          local_res10[0] = 0xff00;
        }
        bVar2 = local_res10[0] < iVar6;
      }
      if (bVar2) {
        uVar5 = CONCAT44(uVar10,0x773);
      }
      else {
        if (uVar9 == 0) {
          bVar2 = local_res8[0] < iVar3;
        }
        else {
          iVar6 = iVar3;
          if (iVar3 == 0x100) {
            iVar6 = 0xff00;
          }
          iVar4 = local_res8[0];
          if (local_res8[0] == 0x100) {
            iVar4 = 0xff00;
          }
          bVar2 = iVar6 < iVar4;
        }
        if (bVar2) {
          uVar5 = CONCAT44(uVar10,0x779);
        }
        else {
          if ((*(byte *)(param_1 + 0x172) & 0x80) == 0) {
            local_res20[0] = local_res8[0];
          }
          if ((iVar3 == 0x303) && (0x303 < local_res20[0])) {
            if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xb0) == 0x14452474e574f44) {
              uVar5 = CONCAT44(uVar10,0x789);
              uVar7 = 0x2f;
              iVar3 = 0x175;
              goto LAB_143cb446d;
            }
          }
          else if ((uVar9 == 0) &&
                  (((iVar3 < 0x303 && (iVar3 < local_res20[0])) &&
                   (*(char (*) [8])(*(longlong *)(param_1 + 0x2a) + 0xb0) ==
                    (char  [8])0x4452474e574f44)))) {
            uVar7 = 0x2f;
            uVar5 = CONCAT44(uVar10,0x796);
            iVar3 = 0x175;
            goto LAB_143cb446d;
          }
          iVar6 = *piVar8;
          while (iVar6 != 0) {
            if ((*(code **)(piVar8 + 2) != (code *)0x0) && (iVar3 == *piVar8)) {
              uVar5 = (**(code **)(piVar8 + 2))();
              *(undefined8 *)(param_1 + 2) = uVar5;
              return 1;
            }
            piVar8 = piVar8 + 6;
            iVar6 = *piVar8;
          }
          uVar5 = CONCAT44(uVar10,0x7a5);
        }
      }
      iVar3 = 0x102;
    }
    else {
      uVar5 = CONCAT44(uVar10,0x76c);
    }
  }
  else {
    if (iVar3 == 0x1ffff) {
      piVar8 = &DAT_145d4ab60;
      goto LAB_143cb42f2;
    }
    if (*param_1 == iVar3) {
      return 1;
    }
    uVar5 = CONCAT44(uVar10,0x755);
    iVar3 = 0x10a;
  }
  uVar7 = 0x46;
LAB_143cb446d:
  *param_1 = iVar1;
  ossl_statem_fatal(param_1,uVar7,0x25f,iVar3,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}



// FUNCTION 143cb44b0 ssl_choose_server_version body=844 status=ok
// SIG undefined ssl_choose_server_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_choose_server_version(uint *param_1,longlong param_2,undefined4 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined8 local_res8;
  
  piVar3 = *(int **)(param_1 + 2);
  uVar7 = 0;
  uVar11 = *(uint *)(param_2 + 4);
  iVar5 = *piVar3;
  param_1[0x179] = uVar11;
  bVar13 = false;
  if (iVar5 == 0x10000) {
LAB_143cb453d:
    puVar12 = &DAT_145d4aad0;
  }
  else {
    if (iVar5 != 0x1ffff) {
      if ((((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) != 0) || (*piVar3 < 0x304)) ||
         (*piVar3 == 0x10000)) {
        iVar5 = version_cmp(param_1,uVar11,*param_1);
        if (iVar5 < 0) {
          return 0x10a;
        }
        *param_3 = 0;
        return 0;
      }
      goto LAB_143cb453d;
    }
    puVar12 = &DAT_145d4ab60;
  }
  lVar4 = *(longlong *)(param_2 + 0x288);
  if (*(int *)(lVar4 + 0x2b8) == 0) {
    if (param_1[0x136] != 0) {
      return 0x102;
    }
  }
  else if ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0) {
    *(undefined4 *)(lVar4 + 700) = 1;
    local_res8 = 0;
    if (*(longlong *)(lVar4 + 0x2b0) != 0) {
      uVar10 = *(longlong *)(lVar4 + 0x2b0) - 1;
      uVar14 = (ulonglong)**(byte **)(lVar4 + 0x2a8);
      pbVar15 = *(byte **)(lVar4 + 0x2a8) + 1;
      if ((uVar14 <= uVar10) && (uVar10 == uVar14)) {
        *(byte **)(lVar4 + 0x2a8) = pbVar15 + uVar14;
        *(undefined8 *)(lVar4 + 0x2b0) = 0;
        if ((int)uVar11 < 0x301) {
          return 0x124;
        }
        while (1 < uVar14) {
          bVar2 = *pbVar15;
          uVar14 = uVar14 - 2;
          pbVar1 = pbVar15 + 1;
          pbVar15 = pbVar15 + 2;
          uVar11 = (uint)CONCAT11(bVar2,*pbVar1);
          if (uVar11 != uVar7) {
            if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
              iVar5 = 1;
              if (uVar11 < uVar7) {
                iVar5 = -1;
              }
            }
            else {
              uVar9 = uVar11;
              if (uVar11 == 0x100) {
                uVar9 = 0xff00;
              }
              uVar6 = uVar7;
              if (uVar7 == 0x100) {
                uVar6 = 0xff00;
              }
              iVar5 = 1;
              if (uVar6 < uVar9) {
                iVar5 = -1;
              }
            }
            if ((0 < iVar5) &&
               (iVar5 = ssl_version_supported(param_1,uVar11,&local_res8), iVar5 != 0)) {
              uVar7 = uVar11;
            }
          }
        }
        if (uVar14 == 0) {
          if (uVar7 == 0) {
            return 0x102;
          }
          if (param_1[0x136] != 0) {
            if (uVar7 != 0x304) {
              return 0x102;
            }
            return 0;
          }
          check_for_downgrade(param_1,uVar7,param_3);
          *(undefined8 *)(param_1 + 2) = local_res8;
          *param_1 = uVar7;
          return 0;
        }
      }
    }
    return 0x9f;
  }
  if (uVar11 != 0x304) {
    iVar5 = 1;
    if ((*(byte *)(*(longlong *)(piVar3 + 0x30) + 0x60) & 8) == 0) {
      if ((int)uVar11 < 0x304) {
        iVar5 = -1;
      }
    }
    else {
      uVar7 = uVar11;
      if (uVar11 == 0x100) {
        uVar7 = 0xff00;
      }
      if (0x304 < (int)uVar7) {
        iVar5 = -1;
      }
    }
    if (iVar5 < 0) goto LAB_143cb473e;
  }
  uVar11 = 0x303;
LAB_143cb473e:
  uVar7 = *puVar12;
  do {
    if (uVar7 == 0) {
      uVar8 = 0x18c;
      if (bVar13) {
        uVar8 = 0x102;
      }
      return uVar8;
    }
    if (*(code **)(puVar12 + 4) != (code *)0x0) {
      uVar7 = *puVar12;
      if (uVar11 != uVar7) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar5 = 1;
          if ((int)uVar11 < (int)uVar7) {
            iVar5 = -1;
          }
        }
        else {
          if (uVar7 == 0x100) {
            uVar7 = 0xff00;
          }
          uVar9 = uVar11;
          if (uVar11 == 0x100) {
            uVar9 = 0xff00;
          }
          iVar5 = 1;
          if ((int)uVar7 < (int)uVar9) {
            iVar5 = -1;
          }
        }
        if (iVar5 < 0) goto LAB_143cb47a9;
      }
      uVar8 = (**(code **)(puVar12 + 4))();
      iVar5 = ssl_method_error(param_1,uVar8);
      if (iVar5 == 0) {
        check_for_downgrade(param_1,*puVar12,param_3);
        *param_1 = *puVar12;
        *(undefined8 *)(param_1 + 2) = uVar8;
        return 0;
      }
      bVar13 = true;
    }
LAB_143cb47a9:
    puVar12 = puVar12 + 6;
    uVar7 = *puVar12;
  } while( true );
}



// FUNCTION 143cb4800 ssl_get_min_max_version body=590 status=ok
// SIG undefined ssl_get_min_max_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_get_min_max_version(int *param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  if (**(int **)(param_1 + 2) == 0x10000) {
    piVar8 = &DAT_145d4aad0;
  }
  else {
    if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar7 = *param_1;
      *param_3 = iVar7;
      *param_2 = iVar7;
      if (param_4 == (int *)0x0) {
        return 0;
      }
      return 0x44;
    }
    piVar8 = &DAT_145d4ab60;
  }
  iVar7 = 0;
  *param_2 = 0;
  bVar2 = true;
  if (param_4 != (int *)0x0) {
    *param_4 = 0;
  }
  iVar9 = 0;
  iVar3 = *piVar8;
  do {
    if (iVar3 == 0) {
      *param_3 = iVar7;
      if (iVar7 != 0) {
        return 0;
      }
      return 0xbf;
    }
    if (*(code **)(piVar8 + 2) == (code *)0x0) {
      iVar9 = 0;
LAB_143cb48ac:
      bVar2 = true;
    }
    else {
      piVar5 = (int *)(**(code **)(piVar8 + 2))();
      if ((bVar2) && (iVar9 == 0)) {
        iVar9 = *piVar8;
      }
      iVar3 = param_1[0x173];
      iVar1 = *piVar5;
      if ((iVar3 != 0) && (iVar1 != iVar3)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar6 = 1;
          if (iVar1 < iVar3) {
            iVar6 = -1;
          }
        }
        else {
          if (iVar3 == 0x100) {
            iVar3 = 0xff00;
          }
          iVar4 = iVar1;
          if (iVar1 == 0x100) {
            iVar4 = 0xff00;
          }
          iVar6 = 1;
          if (iVar3 < iVar4) {
            iVar6 = -1;
          }
        }
        if (iVar6 < 0) goto LAB_143cb48ac;
      }
      iVar3 = ssl_security(param_1,9,0,iVar1,0);
      if (iVar3 == 0) goto LAB_143cb48ac;
      iVar3 = param_1[0x174];
      if ((iVar3 != 0) && (iVar1 != iVar3)) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar4 = 1;
          if (iVar1 < iVar3) {
            iVar4 = -1;
          }
        }
        else {
          if (iVar3 == 0x100) {
            iVar3 = 0xff00;
          }
          if (iVar1 == 0x100) {
            iVar1 = 0xff00;
          }
          iVar4 = 1;
          if (iVar3 < iVar1) {
            iVar4 = -1;
          }
        }
        if (0 < iVar4) goto LAB_143cb48ac;
      }
      if (((piVar5[2] & param_1[0x171]) != 0) ||
         (((*(byte *)(piVar5 + 1) & 2) != 0 &&
          ((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) != 0)))) goto LAB_143cb48ac;
      if (bVar2) {
        if ((param_4 != (int *)0x0) && (iVar9 != 0)) {
          *param_4 = iVar9;
        }
        bVar2 = false;
        iVar7 = *piVar5;
        *param_2 = iVar7;
      }
      else {
        *param_2 = *piVar5;
        bVar2 = false;
      }
    }
    piVar8 = piVar8 + 6;
    iVar3 = *piVar8;
  } while( true );
}



// FUNCTION 143cb4a50 ssl_method_error body=315 status=ok
// SIG undefined ssl_method_error(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_method_error(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_2;
  iVar2 = *(int *)(param_1 + 0x5cc);
  if ((iVar2 != 0) && (iVar3 != iVar2)) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      iVar4 = 1;
      if (iVar3 < iVar2) {
        iVar4 = -1;
      }
    }
    else {
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      iVar1 = iVar3;
      if (iVar3 == 0x100) {
        iVar1 = 0xff00;
      }
      iVar4 = 1;
      if (iVar2 < iVar1) {
        iVar4 = -1;
      }
    }
    if (iVar4 < 0) {
      return 0x18c;
    }
  }
  iVar2 = ssl_security(param_1,9,0,iVar3,0,0x143cb4a65);
  if (iVar2 == 0) {
    return 0x18c;
  }
  if ((*(int *)(param_1 + 0x5d0) != 0) && (iVar3 = version_cmp(param_1,iVar3), 0 < iVar3)) {
    return 0xa6;
  }
  if ((param_2[2] & *(uint *)(param_1 + 0x5c4)) != 0) {
    return 0x102;
  }
  if (((*(byte *)(param_2 + 1) & 2) != 0) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
    return 0x9e;
  }
  return 0;
}



// FUNCTION 143cb4b90 ssl_set_client_hello_version body=114 status=ok
// SIG undefined ssl_set_client_hello_version(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_client_hello_version(int *param_1)

{
  undefined8 uVar1;
  int local_res8 [2];
  undefined1 local_res10 [24];
  
  if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
    uVar1 = ssl_get_min_max_version(param_1,local_res10,local_res8,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    *param_1 = local_res8[0];
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) &&
       (0x303 < local_res8[0])) {
      local_res8[0] = 0x303;
    }
    param_1[0x179] = local_res8[0];
  }
  return 0;
}



// FUNCTION 143cb4c10 FUN_143cb4c10 body=76 status=ok
// SIG undefined FUN_143cb4c10(void)

undefined4 FUN_143cb4c10(int param_1,int param_2,int *param_3)

{
  int iVar1;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return 1;
  }
  if (param_1 == 0x10000) {
    if (param_2 - 0x300U < 5) {
LAB_143cb4c53:
      *param_3 = param_2;
      return 1;
    }
  }
  else if (param_1 == 0x1ffff) {
    iVar1 = param_2;
    if (param_2 == 0x100) {
      iVar1 = 0xff00;
    }
    if (iVar1 - 0xfefdU < 4) goto LAB_143cb4c53;
  }
  return 0;
}



// FUNCTION 143cb4c60 ssl_version_supported body=398 status=ok
// SIG undefined ssl_version_supported(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_version_supported(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  iVar2 = **(int **)(param_1 + 2);
  if (iVar2 == 0x10000) {
    piVar5 = &DAT_145d4aad0;
  }
  else {
    if (iVar2 != 0x1ffff) {
      iVar2 = *param_1;
      if (param_2 == iVar2) {
        return true;
      }
      if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) {
        if (iVar2 == 0x100) {
          iVar2 = 0xff00;
        }
        if (param_2 == 0x100) {
          param_2 = 0xff00;
        }
        iVar4 = 1;
        if (iVar2 < param_2) {
          iVar4 = -1;
        }
        return iVar4 == 0;
      }
      iVar4 = 1;
      if (param_2 < iVar2) {
        iVar4 = -1;
      }
      return iVar4 == 0;
    }
    piVar5 = &DAT_145d4ab60;
  }
  iVar2 = *piVar5;
  if (iVar2 != 0) {
    do {
      if (param_2 != iVar2) {
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
          iVar6 = 1;
          if (param_2 < iVar2) {
            iVar6 = -1;
          }
        }
        else {
          iVar4 = iVar2;
          if (iVar2 == 0x100) {
            iVar4 = 0xff00;
          }
          iVar1 = param_2;
          if (param_2 == 0x100) {
            iVar1 = 0xff00;
          }
          iVar6 = 1;
          if (iVar4 < iVar1) {
            iVar6 = -1;
          }
        }
        if (0 < iVar6) {
          return false;
        }
      }
      if ((*(code **)(piVar5 + 2) != (code *)0x0) && (param_2 == iVar2)) {
        uVar3 = (**(code **)(piVar5 + 2))();
        iVar2 = ssl_method_error(param_1,uVar3);
        if ((iVar2 == 0) &&
           (((param_1[0xe] == 0 || (param_2 != 0x304)) ||
            (iVar2 = is_tls13_capable(param_1), iVar2 != 0)))) {
          if (param_3 != (undefined8 *)0x0) {
            uVar3 = (**(code **)(piVar5 + 2))();
            *param_3 = uVar3;
          }
          return true;
        }
      }
      iVar2 = piVar5[6];
      piVar5 = piVar5 + 6;
    } while (iVar2 != 0);
  }
  return false;
}



// FUNCTION 143cb4df0 ssl_x509err2alert body=35 status=ok
// SIG undefined ssl_x509err2alert(void)

undefined4 ssl_x509err2alert(int param_1)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = &DAT_145d4a990;
  iVar2 = 0x32;
  do {
    if (iVar2 == param_1) break;
    iVar2 = *(int *)(puVar1 + 8);
    puVar1 = puVar1 + 8;
  } while (iVar2 != 0);
  return *(undefined4 *)(puVar1 + 4);
}



// FUNCTION 143cb4e20 tls13_restore_handshake_digest_for_pha body=163 status=ok
// SIG undefined tls13_restore_handshake_digest_for_pha(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_restore_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (*(longlong *)(param_1 + 0x778) == 0) {
    ossl_statem_fatal(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",0x10000093b);
    return 0;
  }
  iVar1 = EVP_MD_CTX_copy_ex(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x269,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x942));
    return 0;
  }
  return 1;
}



// FUNCTION 143cb4ed0 tls13_save_handshake_digest_for_pha body=155 status=ok
// SIG undefined tls13_save_handshake_digest_for_pha(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_save_handshake_digest_for_pha(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if (*(longlong *)(param_1 + 0x778) != 0) {
    return 1;
  }
  iVar1 = ssl3_digest_cached_records(param_1,1);
  if (iVar1 != 0) {
    lVar2 = EVP_MD_CTX_new();
    *(longlong *)(param_1 + 0x778) = lVar2;
    if (lVar2 == 0) {
      uVar3 = CONCAT44(uVar4,0x924);
    }
    else {
      iVar1 = EVP_MD_CTX_copy_ex(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = CONCAT44(uVar4,0x92b);
    }
    ossl_statem_fatal(param_1,0x50,0x26a,0x44,"ssl\\statem\\statem_lib.c",uVar3);
  }
  return 0;
}



// FUNCTION 143cb4f70 tls_close_construct_packet body=125 status=ok
// SIG undefined tls_close_construct_packet(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_close_construct_packet(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong local_res20;
  
  if ((param_3 != 0x101) && (iVar1 = WPACKET_close(param_2), iVar1 == 0)) {
    return 0;
  }
  iVar1 = WPACKET_get_length(param_2,&local_res20);
  if ((iVar1 != 0) && (local_res20 < 0x80000000)) {
    *(longlong *)(param_1 + 0x98) = (longlong)(int)local_res20;
    *(undefined8 *)(param_1 + 0xa0) = 0;
    return 1;
  }
  return 0;
}



// FUNCTION 143cb4ff0 tls_construct_cert_verify body=880 status=ok
// SIG undefined tls_construct_cert_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_cert_verify(int *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined1 auStack_158 [32];
  char *local_138;
  undefined4 local_130;
  longlong local_128;
  undefined8 local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108 [2];
  undefined1 local_f8 [176];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cb500a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  lVar8 = 0;
  local_110 = 0;
  local_120 = 0;
  lVar6 = 0;
  local_128 = 0;
  lVar5 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2d8);
  local_118 = (char *)0x0;
  if ((lVar1 == 0) || (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x2e0), lVar2 == 0)) {
    local_130 = 0xe9;
LAB_143cb52ff:
    uVar7 = 0x44;
  }
  else {
    pcVar3 = *(char **)(lVar2 + 8);
    if ((pcVar3 == (char *)0x0) || (iVar4 = tls1_lookup_md(lVar1,&local_110), iVar4 == 0)) {
      local_130 = 0xf0;
      goto LAB_143cb52ff;
    }
    lVar6 = EVP_MD_CTX_new();
    lVar5 = lVar8;
    if (lVar6 == 0) {
      local_130 = 0xf7;
      uVar7 = 0x41;
      goto LAB_143cb5305;
    }
    iVar4 = get_cert_verify_tbs_data(param_1,local_f8,local_108,&local_118);
    if (iVar4 == 0) goto LAB_143cb531a;
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) != 0) &&
       (iVar4 = WPACKET_put_bytes__(param_2,*(undefined2 *)(lVar1 + 8),2), iVar4 == 0)) {
      local_130 = 0x103;
      goto LAB_143cb52ff;
    }
    iVar4 = EVP_PKEY_size(pcVar3);
    local_128 = (longlong)iVar4;
    lVar5 = CRYPTO_malloc(local_128,"ssl\\statem\\statem_lib.c",0x107);
    if (lVar5 == 0) {
      local_130 = 0x10a;
      uVar7 = 0x41;
    }
    else {
      local_138 = pcVar3;
      iVar4 = EVP_DigestSignInit(lVar6,&local_120,local_110,0);
      if (iVar4 < 1) {
        local_130 = 0x110;
        uVar7 = 6;
      }
      else if (*(int *)(lVar1 + 0x14) == 0x390) {
        local_138 = (char *)0x0;
        iVar4 = RSA_pkey_ctx_ctrl(local_120,0xffffffff,0x1001,6);
        if (0 < iVar4) {
          local_138 = (char *)0x0;
          iVar4 = RSA_pkey_ctx_ctrl(local_120,0x18,0x1002,0xffffffff);
          if (0 < iVar4) goto LAB_143cb51d7;
        }
        local_130 = 0x119;
        uVar7 = 6;
      }
      else {
LAB_143cb51d7:
        if (*param_1 == 0x300) {
          iVar4 = EVP_DigestUpdate(lVar6,local_108[0],local_118);
          if (((0 < iVar4) &&
              (iVar4 = EVP_MD_CTX_ctrl(lVar6,0x1d,
                                       *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                       *(longlong *)(param_1 + 0x142) + 0x50), iVar4 != 0)) &&
             (iVar4 = EVP_DigestSignFinal(lVar6,lVar5,&local_128), 0 < iVar4)) {
LAB_143cb5275:
            if ((*(int *)(lVar1 + 0x14) == 0x32b) || (*(int *)(lVar1 + 0x14) - 0x3d3U < 2)) {
              BUF_reverse(lVar5,0,local_128);
            }
            iVar4 = WPACKET_sub_memcpy__(param_2,lVar5,local_128,2);
            if (iVar4 != 0) {
              iVar4 = ssl3_digest_cached_records(param_1,0);
              if (iVar4 != 0) {
                CRYPTO_free(lVar5,"ssl\\statem\\statem_lib.c",0x145);
                EVP_MD_CTX_free(lVar6);
                return 1;
              }
              goto LAB_143cb531a;
            }
            local_130 = 0x13b;
            goto LAB_143cb52ff;
          }
          local_130 = 0x125;
          uVar7 = 6;
        }
        else {
          local_138 = local_118;
          iVar4 = EVP_DigestSign(lVar6,lVar5,&local_128,local_108[0]);
          if (0 < iVar4) goto LAB_143cb5275;
          local_130 = 0x12a;
          uVar7 = 6;
        }
      }
    }
  }
LAB_143cb5305:
  local_138 = "ssl\\statem\\statem_lib.c";
  ossl_statem_fatal(param_1,0x50,0x1f0,uVar7);
LAB_143cb531a:
  CRYPTO_free(lVar5,"ssl\\statem\\statem_lib.c",0x149);
  EVP_MD_CTX_free(lVar6);
  return 0;
}



// FUNCTION 143cb5360 tls_construct_change_cipher_spec body=103 status=ok
// SIG undefined tls_construct_change_cipher_spec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_change_cipher_spec(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,1,1);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1ab,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x35a));
    return 0;
  }
  return 1;
}



// FUNCTION 143cb53d0 tls_construct_finished body=500 status=ok
// SIG undefined tls_construct_finished(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_finished(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong _Size;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if ((*(int *)(param_1 + 0x38) == 0) && (*(int *)(param_1 + 0x758) != 4)) {
    *(undefined4 *)(param_1 + 0x70) = 1;
  }
  lVar1 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
  if ((((((*(byte *)(lVar1 + 0x60) & 8) == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2))
       && (iVar2 != 0x10000)) &&
      ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x248) == 0))))
     && (uVar5 = 1, iVar2 = (**(code **)(lVar1 + 0x20))(param_1,0x92), iVar2 == 0)) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 8) + 0xc0);
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
  }
  else {
    uVar3 = *(undefined8 *)(lVar1 + 0x40);
    uVar4 = *(undefined8 *)(lVar1 + 0x48);
  }
  _Size = (**(code **)(lVar1 + 0x28))(param_1,uVar3,uVar4,*(longlong *)(param_1 + 0xa8) + 0x118);
  if (_Size != 0) {
    *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x198) = _Size;
    iVar2 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0xa8) + 0x118,_Size);
    if (iVar2 == 0) {
      uVar3 = CONCAT44(uVar5,0x227);
    }
    else {
      if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
         (iVar2 = ssl_log_secret(param_1,"CLIENT_RANDOM",*(longlong *)(param_1 + 0x508) + 0x50,
                                 *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 8)), iVar2 == 0))
      {
        return 0;
      }
      if (_Size < 0x41) {
        lVar1 = *(longlong *)(param_1 + 0xa8);
        if (*(int *)(param_1 + 0x38) != 0) {
          _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x390),(void *)(lVar1 + 0x118),_Size);
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
          return 1;
        }
        _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0x348),(void *)(lVar1 + 0x118),_Size);
        *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
        return 1;
      }
      uVar3 = CONCAT44(uVar5,0x23b);
    }
    ossl_statem_fatal(param_1,0x50,0x167,0x44,"ssl\\statem\\statem_lib.c",uVar3);
  }
  return 0;
}



// FUNCTION 143cb55d0 tls_construct_key_update body=117 status=ok
// SIG undefined tls_construct_key_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_key_update(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(param_1 + 0x754),1);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x205,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar2,0x24f));
    return 0;
  }
  *(undefined4 *)(param_1 + 0x754) = 0xffffffff;
  return 1;
}



// FUNCTION 143cb5650 tls_finish_handshake body=710 status=ok
// SIG undefined tls_finish_handshake(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_finish_handshake(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  int *piVar1;
  code *pcVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  if (param_3 != 0) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      uVar5 = 1;
      BUF_MEM_free(*(undefined8 *)(param_1 + 0x88));
      *(undefined8 *)(param_1 + 0x88) = 0;
    }
    iVar3 = ssl_free_wbio_buffer(param_1);
    if (iVar3 == 0) {
      ossl_statem_fatal(param_1,0x50,0x255,0x44,"ssl\\statem\\statem_lib.c",CONCAT44(uVar5,0x407));
      return 0;
    }
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
       (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) &&
     ((*(int *)(param_1 + 0x38) == 0 && (*(int *)(param_1 + 0x758) == 4)))) {
    *(undefined4 *)(param_1 + 0x758) = 1;
  }
  if (*(int *)(param_1 + 0x70) == 0) goto LAB_143cb5899;
  *(undefined4 *)(param_1 + 0x750) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x670) = 0;
  ssl3_cleanup_key_block(param_1);
  piVar1 = *(int **)(param_1 + 8);
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1)) &&
       (*piVar1 != 0x10000)) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x738) + 0x48) & 1) != 0) {
        SSL_CTX_remove_session(*(longlong *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x508));
      }
    }
    else {
      ssl_update_cache(param_1,1);
    }
    if (*(int *)(param_1 + 200) != 0) {
      LOCK();
      piVar1 = (int *)(*(longlong *)(param_1 + 0x738) + 0x8c);
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    *(code **)(param_1 + 0x30) = ossl_statem_connect;
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x738) + 0x70);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
       (*(int *)(param_1 + 200) != 0)) goto LAB_143cb584e;
  }
  else {
    if (((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) != 0) ||
       ((*piVar1 < 0x304 || (*piVar1 == 0x10000)))) {
      ssl_update_cache(param_1,2);
    }
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x598) + 0x7c);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(code **)(param_1 + 0x30) = ossl_statem_accept;
    if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) &&
       (*(int *)(param_1 + 200) == 0)) {
LAB_143cb584e:
      dtls1_start_timer(param_1);
    }
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
    *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x110) = 0;
    *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10c) = 0;
    *(undefined2 *)(*(longlong *)(param_1 + 0xb0) + 0x10e) = 0;
    dtls1_clear_received_buffer(param_1);
  }
LAB_143cb5899:
  pcVar4 = *(code **)(param_1 + 0x568);
  if ((*(code **)(param_1 + 0x568) == (code *)0x0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108), pcVar4 = (code *)0x0,
     pcVar2 != (code *)0x0)) {
    pcVar4 = pcVar2;
  }
  ossl_statem_set_in_init(param_1,0);
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(param_1,0x20,1);
  }
  if (param_4 != 0) {
    return 1;
  }
  ossl_statem_set_in_init(param_1,1);
  return 2;
}



// FUNCTION 143cb5920 tls_get_message_body body=662 status=ok
// SIG undefined tls_get_message_body(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_message_body(undefined4 *param_1,ulonglong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong local_res8;
  ulonglong in_stack_ffffffffffffffd0;
  undefined8 uVar8;
  
  uVar8 = 0x143cb592e;
  if (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) == 0x101) {
    *param_2 = (ulonglong)(uint)param_1[0x26];
    return 1;
  }
  lVar3 = *(longlong *)(param_1 + 0x24);
  lVar1 = *(longlong *)(param_1 + 0x26);
  for (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) - lVar1; lVar5 != 0;
      lVar5 = lVar5 - local_res8) {
    in_stack_ffffffffffffffd0 = in_stack_ffffffffffffffd0 & 0xffffffff00000000;
    iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                      (param_1,0x16,0,lVar1 + lVar3,lVar5,in_stack_ffffffffffffffd0,&local_res8,
                       uVar8);
    if (iVar2 < 1) {
      param_1[10] = 3;
      goto LAB_143cb5a07;
    }
    *(longlong *)(param_1 + 0x26) = *(longlong *)(param_1 + 0x26) + local_res8;
    lVar1 = *(longlong *)(param_1 + 0x26);
  }
  if (**(char **)(*(longlong *)(param_1 + 0x22) + 8) == '\x14') {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 2) + 0xc0);
    if (param_1[0xe] == 0) {
      uVar8 = *(undefined8 *)(lVar3 + 0x40);
      uVar6 = *(undefined8 *)(lVar3 + 0x48);
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x30);
      uVar6 = *(undefined8 *)(lVar3 + 0x38);
    }
    uVar8 = (**(code **)(lVar3 + 0x28))(param_1,uVar8,uVar6,*(longlong *)(param_1 + 0x2a) + 0x1a0);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x220) = uVar8;
    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0) goto LAB_143cb5a07;
  }
  iVar2 = RECORD_LAYER_is_sslv2_record(param_1 + 0x200);
  if (iVar2 == 0) {
    if (((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
           (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
         ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 4 &&
          (*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 0x18)))) &&
        ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0x230) != 2 ||
         ((*(ulonglong *)(param_1 + 0x26) < 0x26 ||
          (iVar2 = _guard_xfg_dispatch_icall_nop
                             (&DAT_145d4a970,
                              (void *)(*(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 6),0x20),
          iVar2 != 0)))))) &&
       (iVar2 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                                *(longlong *)(param_1 + 0x26) + 4), iVar2 == 0)) goto LAB_143cb5a07;
    pcVar7 = *(code **)(param_1 + 0x2e);
    if (pcVar7 == (code *)0x0) goto LAB_143cb5b95;
    uVar6 = 0x16;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x26) + 4;
    uVar4 = *param_1;
  }
  else {
    iVar2 = ssl3_finish_mac(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),
                            *(undefined8 *)(param_1 + 0x26));
    if (iVar2 == 0) {
LAB_143cb5a07:
      *param_2 = 0;
      return 0;
    }
    pcVar7 = *(code **)(param_1 + 0x2e);
    if (pcVar7 == (code *)0x0) goto LAB_143cb5b95;
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = 0;
    lVar3 = *(longlong *)(param_1 + 0x26);
    uVar4 = 2;
  }
  (*pcVar7)(0,uVar4,uVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8),lVar3,param_1,uVar8);
LAB_143cb5b95:
  *param_2 = *(ulonglong *)(param_1 + 0x26);
  return 1;
}



// FUNCTION 143cb5bc0 tls_get_message_header body=677 status=ok
// SIG undefined tls_get_message_header(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_message_header(undefined4 *param_1,uint *param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_res8 [2];
  longlong local_res18;
  undefined4 *in_stack_ffffffffffffffd0;
  undefined8 uVar6;
  
  uVar6 = 0x143cb5bd8;
  uVar5 = 0;
  pbVar1 = *(byte **)(*(longlong *)(param_1 + 0x22) + 8);
  do {
    uVar4 = *(ulonglong *)(param_1 + 0x26);
    while (uVar4 < 4) {
      in_stack_ffffffffffffffd0 =
           (undefined4 *)((ulonglong)in_stack_ffffffffffffffd0 & 0xffffffff00000000);
      iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x68))
                        (param_1,0x16,local_res8,pbVar1 + uVar4,4 - uVar4,in_stack_ffffffffffffffd0,
                         &local_res18,uVar6);
      if (iVar2 < 1) {
        param_1[10] = 3;
        return 0;
      }
      if (local_res8[0] == 0x14) {
        if (((*(longlong *)(param_1 + 0x26) == 0) && (local_res18 == 1)) && (*pbVar1 == 1)) {
          if ((param_1[0x17] == 0) && ((**(uint **)(param_1 + 0x2a) & 0x800) != 0)) {
            return 0;
          }
          *param_2 = 0x101;
          *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x230) = 0x101;
          *(undefined8 *)(param_1 + 0x26) = 0;
          *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(*(longlong *)(param_1 + 0x22) + 8);
          *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x228) = 1;
          return 1;
        }
        uVar5 = 0x48a;
        uVar6 = 0x67;
LAB_143cb5d82:
        ossl_statem_fatal(param_1,10,0x183,uVar6,"ssl\\statem\\statem_lib.c",uVar5);
        return 0;
      }
      if (local_res8[0] != 0x16) {
        uVar5 = 0x4a0;
        uVar6 = 0x85;
        goto LAB_143cb5d82;
      }
      uVar4 = *(longlong *)(param_1 + 0x26) + local_res18;
      *(ulonglong *)(param_1 + 0x26) = uVar4;
      local_res8[0] = 0x16;
    }
    if (((param_1[0xe] != 0) || (param_1[0x17] == 1)) ||
       ((*pbVar1 != 0 || (((pbVar1[1] != 0 || (pbVar1[2] != 0)) || (pbVar1[3] != 0)))))) {
      *param_2 = (uint)*pbVar1;
      *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x230) = (uint)*pbVar1;
      iVar2 = RECORD_LAYER_is_sslv2_record(param_1 + 0x200);
      if (iVar2 == 0) {
        *(ulonglong *)(*(longlong *)(param_1 + 0x2a) + 0x228) =
             (ulonglong)CONCAT21(CONCAT11(pbVar1[1],pbVar1[2]),pbVar1[3]);
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8) + 4;
      }
      else {
        lVar3 = RECORD_LAYER_get_rrec_length(param_1 + 0x200);
        *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x228) = lVar3 + 4;
        lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x22) + 8);
        uVar5 = 4;
      }
      *(longlong *)(param_1 + 0x24) = lVar3;
      *(undefined8 *)(param_1 + 0x26) = uVar5;
      return 1;
    }
    *(undefined8 *)(param_1 + 0x26) = 0;
    if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
      in_stack_ffffffffffffffd0 = param_1;
      (**(code **)(param_1 + 0x2e))
                (0,*param_1,0x16,pbVar1,4,param_1,*(undefined8 *)(param_1 + 0x30));
    }
  } while( true );
}



// FUNCTION 143cb5e70 tls_process_cert_verify body=1349 status=ok
// SIG undefined tls_process_cert_verify(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong tls_process_cert_verify(int *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  ulonglong uVar4;
  int iVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 auStack_148 [32];
  char *local_128;
  undefined4 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8 [176];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar15 = 0;
  local_108 = 0;
  lVar13 = 0;
  local_110 = (char *)0x0;
  lVar6 = EVP_MD_CTX_new();
  local_118 = 0;
  if (lVar6 == 0) {
    local_120 = 0x162;
    local_128 = "ssl\\statem\\statem_lib.c";
    ossl_statem_fatal(param_1,0x50,0x17b,0x41);
    lVar8 = lVar15;
    lVar14 = lVar15;
    goto LAB_143cb62f6;
  }
  pcVar7 = (char *)X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0xf8));
  if (pcVar7 == (char *)0x0) {
    local_120 = 0x16a;
LAB_143cb5fc4:
    uVar9 = 0x50;
    uVar12 = 0x44;
  }
  else {
    lVar8 = ssl_cert_lookup_by_pkey(pcVar7,0);
    if (lVar8 != 0) {
      lVar8 = 0;
      lVar14 = lVar13;
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) {
        iVar5 = tls1_set_peer_legacy_sigalg(param_1,pcVar7);
        if (iVar5 == 0) {
          local_120 = 0x182;
          goto LAB_143cb5fc4;
        }
      }
      else {
        if ((ulonglong)param_2[1] < 2) {
          local_120 = 0x179;
          uVar9 = 0x32;
          uVar12 = 0xf0;
          goto LAB_143cb5fcd;
        }
        puVar3 = (undefined1 *)*param_2;
        uVar1 = *puVar3;
        uVar2 = puVar3[1];
        *param_2 = (longlong)(puVar3 + 2);
        param_2[1] = param_2[1] - 2;
        iVar5 = tls12_check_peer_sigalg(param_1,CONCAT11(uVar1,uVar2),pcVar7);
        if (iVar5 < 1) goto LAB_143cb62f6;
      }
      iVar5 = tls1_lookup_md(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x308),&local_108);
      if (iVar5 == 0) {
        local_120 = 0x188;
        goto LAB_143cb5fc4;
      }
      if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 2) == 0) &&
         (((param_2[1] == 0x40 &&
           ((iVar5 = FRollingHash::GetWindowSize(pcVar7), iVar5 == 0x32b ||
            (iVar5 = FRollingHash::GetWindowSize(pcVar7), iVar5 == 0x3d3)))) ||
          ((param_2[1] == 0x80 && (iVar5 = FRollingHash::GetWindowSize(pcVar7), iVar5 == 0x3d4))))))
      {
        uVar10 = (ulonglong)*(uint *)(param_2 + 1);
LAB_143cb609b:
        iVar5 = EVP_PKEY_size(pcVar7);
        if (((iVar5 < (int)uVar10) || (iVar5 < (int)param_2[1])) || (uVar4 = param_2[1], uVar4 == 0)
           ) {
          local_120 = 0x1aa;
          local_128 = "ssl\\statem\\statem_lib.c";
          ossl_statem_fatal(param_1,0x32,0x17b);
          goto LAB_143cb62f6;
        }
        if (uVar10 <= uVar4) {
          lVar16 = *param_2;
          param_2[1] = uVar4 - uVar10;
          *param_2 = lVar16 + uVar10;
          iVar5 = get_cert_verify_tbs_data(param_1,local_f8,&local_100,&local_110);
          lVar8 = lVar15;
          lVar14 = lVar15;
          if (iVar5 == 0) goto LAB_143cb62f6;
          local_128 = pcVar7;
          iVar5 = EVP_DigestVerifyInit(lVar6,&local_118,local_108,0);
          if (iVar5 < 1) {
            uVar9 = 0x50;
            local_120 = 0x1bd;
            uVar11 = 6;
          }
          else {
            iVar5 = FRollingHash::GetWindowSize(pcVar7);
            if ((iVar5 == 0x32b) || (iVar5 - 0x3d3U < 2)) {
              lVar8 = CRYPTO_malloc(uVar10,"ssl\\statem\\statem_lib.c",0x1c6);
              if (lVar8 == 0) {
                local_120 = 0x1c8;
                uVar9 = 0x50;
                uVar11 = 0x41;
                goto LAB_143cb62bd;
              }
              BUF_reverse(lVar8,lVar16,uVar10);
              lVar16 = lVar8;
            }
            if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) == 0) ||
               (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x308) + 0x14) != 0x390)) {
LAB_143cb61ff:
              if (*param_1 == 0x300) {
                iVar5 = EVP_DigestUpdate(lVar6,local_100,local_110);
                if ((iVar5 < 1) ||
                   (iVar5 = EVP_MD_CTX_ctrl(lVar6,0x1d,
                                            *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 8),
                                            *(longlong *)(param_1 + 0x142) + 0x50), iVar5 == 0)) {
                  local_120 = 0x1e0;
                  local_128 = "ssl\\statem\\statem_lib.c";
                  ossl_statem_fatal(param_1,0x50,0x17b,6);
                  lVar14 = lVar13;
                  goto LAB_143cb62f6;
                }
                iVar5 = EVP_DigestVerifyFinal(lVar6,lVar16,uVar10);
                if (0 < iVar5) goto LAB_143cb62d9;
                local_120 = 0x1e5;
              }
              else {
                local_128 = local_110;
                iVar5 = EVP_DigestVerify(lVar6,lVar16,uVar10,local_100);
                if (0 < iVar5) {
LAB_143cb62d9:
                  lVar14 = 3;
                  goto LAB_143cb62f6;
                }
                local_120 = 0x1ec;
              }
              uVar9 = 0x33;
              uVar11 = 0x7b;
            }
            else {
              local_128 = (char *)0x0;
              iVar5 = RSA_pkey_ctx_ctrl(local_118,0xffffffff,0x1001,6);
              if (0 < iVar5) {
                local_128 = (char *)0x0;
                iVar5 = RSA_pkey_ctx_ctrl(local_118,0x18,0x1002,0xffffffff);
                if (0 < iVar5) goto LAB_143cb61ff;
              }
              uVar9 = 0x50;
              local_120 = 0x1d6;
              uVar11 = 6;
            }
          }
LAB_143cb62bd:
          local_128 = "ssl\\statem\\statem_lib.c";
          ossl_statem_fatal(param_1,uVar9,0x17b,uVar11);
          goto LAB_143cb62f6;
        }
        local_120 = 0x1af;
      }
      else {
        if (1 < (ulonglong)param_2[1]) {
          puVar3 = (undefined1 *)*param_2;
          uVar10 = (ulonglong)CONCAT11(*puVar3,puVar3[1]);
          *param_2 = (longlong)(puVar3 + 2);
          param_2[1] = param_2[1] - 2;
          goto LAB_143cb609b;
        }
        local_120 = 0x1a2;
      }
      local_128 = "ssl\\statem\\statem_lib.c";
      ossl_statem_fatal(param_1,0x32,0x17b,0x9f);
      lVar8 = lVar15;
      goto LAB_143cb62f6;
    }
    local_120 = 0x170;
    uVar9 = 0x2f;
    uVar12 = 0xdc;
  }
LAB_143cb5fcd:
  local_128 = "ssl\\statem\\statem_lib.c";
  ossl_statem_fatal(param_1,uVar9,0x17b,uVar12);
  lVar8 = lVar15;
  lVar14 = lVar15;
LAB_143cb62f6:
  BIO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0));
  *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0xe0) = 0;
  EVP_MD_CTX_free(lVar6);
  CRYPTO_free(lVar8,"ssl\\statem\\statem_lib.c",0x1f7);
  return lVar14;
}



// FUNCTION 143cb63c0 tls_process_change_cipher_spec body=262 status=ok
// SIG undefined tls_process_change_cipher_spec(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_change_cipher_spec(int *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(param_2 + 8);
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
    if (lVar1 == 0) goto LAB_143cb63f5;
    uVar5 = 0x1000002c6;
LAB_143cb6429:
    uVar3 = 0x32;
    uVar4 = 0x67;
  }
  else {
    if (*param_1 == 0x100) {
      if (lVar1 != 2) {
LAB_143cb6421:
        uVar5 = 0x1000002bf;
        goto LAB_143cb6429;
      }
    }
    else if (lVar1 != 0) goto LAB_143cb6421;
LAB_143cb63f5:
    if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0) {
      uVar3 = 10;
      uVar5 = 0x1000002ce;
      uVar4 = 0x85;
    }
    else {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0xf0) = 1;
      iVar2 = ssl3_do_change_cipher_spec(param_1);
      if (iVar2 != 0) {
        if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) &&
           (dtls1_reset_seq_numbers(param_1,1), *param_1 == 0x100)) {
          *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) =
               *(short *)(*(longlong *)(param_1 + 0x2c) + 0x110) + 1;
        }
        return 3;
      }
      uVar5 = CONCAT44(uVar3,0x2d5);
      uVar3 = 0x50;
      uVar4 = 0x44;
    }
  }
  ossl_statem_fatal(param_1,uVar3,0x16b,uVar4,"ssl\\statem\\statem_lib.c",uVar5);
  return 0;
}



// FUNCTION 143cb64d0 tls_process_finished body=771 status=ok
// SIG undefined tls_process_finished(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_finished(longlong param_1,undefined8 *param_2)

{
  ulonglong _Size;
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (*(int *)(param_1 + 0x758) != 4) {
      *(undefined4 *)(param_1 + 0x70) = 1;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
         (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (*(longlong *)(param_1 + 0x778) == 0)) {
      uVar7 = 1;
      iVar1 = ssl3_digest_cached_records(param_1,1);
      if (iVar1 == 0) {
        return 0;
      }
      lVar2 = EVP_MD_CTX_new();
      *(longlong *)(param_1 + 0x778) = lVar2;
      if (lVar2 == 0) {
        uVar6 = CONCAT44(uVar7,0x924);
      }
      else {
        iVar1 = EVP_MD_CTX_copy_ex(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe8));
        if (iVar1 != 0) goto LAB_143cb659c;
        uVar6 = CONCAT44(uVar7,0x92b);
      }
      uVar3 = 0x50;
      uVar4 = 0x26a;
      uVar5 = 0x44;
      goto LAB_143cb65e6;
    }
  }
LAB_143cb659c:
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
     ((iVar1 != 0x10000 &&
      (iVar1 = RECORD_LAYER_processed_read_pending(param_1 + 0x800), iVar1 != 0)))) {
    uVar6 = CONCAT44(uVar7,0x307);
    uVar5 = 0xb6;
LAB_143cb65db:
    uVar3 = 10;
  }
  else {
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) &&
       (*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf0) == 0)) {
      uVar6 = CONCAT44(uVar7,0x30e);
      uVar5 = 0x9a;
      goto LAB_143cb65db;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0xf0) = 0;
    _Size = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x220);
    if (_Size == param_2[1]) {
      iVar1 = FUN_14004ffa0(*param_2,*(longlong *)(param_1 + 0xa8) + 0x1a0,_Size);
      if (iVar1 == 0) {
        if (_Size < 0x41) {
          lVar2 = *(longlong *)(param_1 + 0xa8);
          if (*(int *)(param_1 + 0x38) == 0) {
            _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x390),(void *)(lVar2 + 0x1a0),_Size);
            *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x3d0) = _Size;
          }
          else {
            _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x348),(void *)(lVar2 + 0x1a0),_Size);
            *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x388) = _Size;
          }
          lVar2 = *(longlong *)(*(int **)(param_1 + 8) + 0x30);
          if ((((*(byte *)(lVar2 + 0x60) & 8) != 0) ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
            return 1;
          }
          if (*(int *)(param_1 + 0x38) == 0) {
            iVar1 = (**(code **)(lVar2 + 0x18))
                              (param_1,param_1 + 0x1ac,param_1 + 0x16c,0,
                               *(longlong *)(param_1 + 0x508) + 8);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))
                              (param_1,0x111);
            if (iVar1 == 0) {
              return 0;
            }
            iVar1 = tls_process_initial_server_flight(param_1);
          }
          else {
            if (*(int *)(param_1 + 0x758) == 4) {
              return 1;
            }
            iVar1 = (**(code **)(lVar2 + 0x20))(param_1,0x121);
          }
          if (iVar1 == 0) {
            return 0;
          }
          return 1;
        }
        uVar3 = 0x50;
        uVar6 = CONCAT44(uVar7,0x327);
        uVar5 = 0x44;
      }
      else {
        uVar3 = 0x33;
        uVar6 = CONCAT44(uVar7,0x31e);
        uVar5 = 0x95;
      }
    }
    else {
      uVar3 = 0x32;
      uVar6 = CONCAT44(uVar7,0x317);
      uVar5 = 0x6f;
    }
  }
  uVar4 = 0x16c;
LAB_143cb65e6:
  ossl_statem_fatal(param_1,uVar3,uVar4,uVar5,"ssl\\statem\\statem_lib.c",uVar6);
  return 0;
}



// FUNCTION 143cb67e0 tls_process_key_update body=254 status=ok
// SIG undefined tls_process_key_update(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_process_key_update(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = 1;
  *(int *)(param_1 + 0x480) = *(int *)(param_1 + 0x480) + 1;
  if (0x20 < *(uint *)(param_1 + 0x480)) {
    uVar6 = 0x10000025e;
    uVar4 = 0x2f;
    uVar5 = 0x84;
    goto LAB_143cb68ba;
  }
  iVar3 = RECORD_LAYER_processed_read_pending(param_1 + 0x800);
  if (iVar3 != 0) {
    uVar6 = CONCAT44(uVar4,0x268);
    uVar4 = 10;
    uVar5 = 0xb6;
    goto LAB_143cb68ba;
  }
  if (param_2[1] == 0) {
LAB_143cb68a4:
    uVar6 = CONCAT44(uVar4,0x26f);
    uVar4 = 0x32;
  }
  else {
    cVar2 = *(char *)*param_2;
    *param_2 = (char *)*param_2 + 1;
    lVar1 = param_2[1] + -1;
    param_2[1] = lVar1;
    if (lVar1 != 0) goto LAB_143cb68a4;
    if (cVar2 == '\0') {
LAB_143cb6887:
      iVar3 = tls13_update_key(param_1,0);
      return iVar3 != 0;
    }
    if (cVar2 == '\x01') {
      if ((*(byte *)(param_1 + 0x44) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x754) = 0;
      }
      goto LAB_143cb6887;
    }
    uVar6 = CONCAT44(uVar4,0x27a);
    uVar4 = 0x2f;
  }
  uVar5 = 0x7a;
LAB_143cb68ba:
  ossl_statem_fatal(param_1,uVar4,0x206,uVar5,"ssl\\statem\\statem_lib.c",uVar6);
  return false;
}



// FUNCTION 143cb68e0 tls_setup_handshake body=648 status=ok
// SIG undefined tls_setup_handshake(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_setup_handshake(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  int local_res10 [2];
  undefined1 local_res18 [8];
  
  uVar3 = ssl3_init_finished_mac();
  if ((int)uVar3 == 0) {
    return uVar3;
  }
  *(undefined8 *)(param_1 + 0x600) = 0;
  *(undefined8 *)(param_1 + 0x608) = 0;
  *(undefined8 *)(param_1 + 0x610) = 0;
  *(undefined2 *)(param_1 + 0x618) = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      piVar5 = (int *)(*(longlong *)(param_1 + 0x738) + 0x68);
    }
    else {
      piVar5 = (int *)(*(longlong *)(param_1 + 0x738) + 0x6c);
    }
    LOCK();
    *piVar5 = *piVar5 + 1;
    UNLOCK();
    lVar4 = *(longlong *)(param_1 + 0xa8);
    *(undefined8 *)(lVar4 + 0xb8) = 0;
    *(undefined8 *)(lVar4 + 0xc0) = 0;
    *(undefined8 *)(lVar4 + 200) = 0;
    *(undefined8 *)(lVar4 + 0xd0) = 0;
    *(undefined4 *)(param_1 + 200) = 0;
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x248) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
    }
LAB_143cb6b49:
    uVar3 = 1;
  }
  else {
    uVar3 = SSL_get_ciphers(param_1);
    iVar2 = ssl_get_min_max_version(param_1,local_res18,local_res10,0);
    if (iVar2 == 0) {
      iVar6 = 0;
      iVar2 = OPENSSL_sk_num(uVar3);
      if (0 < iVar2) {
        do {
          lVar4 = OPENSSL_sk_value(uVar3,iVar6);
          if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
            if ((*(int *)(lVar4 + 0x2c) <= local_res10[0]) &&
               (local_res10[0] <= *(int *)(lVar4 + 0x30))) {
LAB_143cb69f8:
              if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
                 (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
                LOCK();
                piVar5 = (int *)(*(longlong *)(param_1 + 0x738) + 0x74);
                *piVar5 = *piVar5 + 1;
                UNLOCK();
              }
              else {
                LOCK();
                piVar5 = (int *)(*(longlong *)(param_1 + 0x598) + 0x78);
                *piVar5 = *piVar5 + 1;
                UNLOCK();
                *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 0;
              }
              goto LAB_143cb6b49;
            }
          }
          else {
            iVar2 = *(int *)(lVar4 + 0x34);
            if (iVar2 == 0x100) {
              iVar2 = 0xff00;
            }
            iVar1 = local_res10[0];
            if (local_res10[0] == 0x100) {
              iVar1 = 0xff00;
            }
            if (iVar1 <= iVar2) {
              iVar2 = *(int *)(lVar4 + 0x38);
              if (iVar2 == 0x100) {
                iVar2 = 0xff00;
              }
              if (iVar2 <= iVar1) goto LAB_143cb69f8;
            }
          }
          iVar6 = iVar6 + 1;
          iVar2 = OPENSSL_sk_num(uVar3);
        } while (iVar6 < iVar2);
      }
      ossl_statem_fatal(param_1,0x28,0x1fc,0xb5,"ssl\\statem\\statem_lib.c",0x80);
      ERR_add_error_data(1,"No ciphers enabled for max supported SSL/TLS version");
      uVar3 = 0;
    }
    else {
      ossl_statem_fatal(param_1,0x50,0x1fc,0x44,"ssl\\statem\\statem_lib.c",0x6e);
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 143cb6b70 version_cmp body=79 status=ok
// SIG undefined version_cmp(void)

undefined8 version_cmp(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  
  if (param_2 == param_3) {
    return 0;
  }
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
    uVar1 = 1;
    if (param_2 < param_3) {
      uVar1 = 0xffffffff;
    }
    return uVar1;
  }
  if (param_2 == 0x100) {
    param_2 = 0xff00;
  }
  if (param_3 == 0x100) {
    param_3 = 0xff00;
  }
  uVar1 = 1;
  if (param_3 < param_2) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 143cb6bc0 derive_secret_key_and_iv body=647 status=ok
// SIG undefined derive_secret_key_and_iv(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
derive_secret_key_and_iv
          (longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,char *param_8,undefined1 *param_9
          ,undefined1 *param_10,undefined8 param_11)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 local_d0;
  ulonglong local_c8;
  undefined1 *local_c0;
  ulonglong local_b8;
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cb6bd7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_a0 = param_10;
  local_a8 = param_2;
  iVar1 = EVP_MD_size(param_3);
  if (iVar1 < 0) {
    local_d0 = CONCAT44(local_d0._4_4_,0x14e);
  }
  else {
    local_c8 = (ulonglong)iVar1;
    local_c0 = param_9;
    local_d0 = param_6;
    local_d8 = param_8;
    local_b8 = local_c8;
    iVar1 = tls13_hkdf_expand(param_1,param_3,param_5,param_7);
    if (iVar1 == 0) goto LAB_143cb6e12;
    iVar1 = IStreamingManager::GetNumWantingResources(param_4);
    uVar2 = TResourceArray<unsigned_char,0>::GetResourceDataSize(param_4);
    if ((uVar2 & 0xf0007) == 7) {
      uVar6 = 0xc;
      lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      if (lVar4 == 0) {
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x128);
      }
      lVar5 = 8;
      if ((*(uint *)(lVar4 + 0x24) & 0x30000) == 0) {
        lVar5 = 0x10;
      }
    }
    else {
      iVar3 = IStreamingManager::GetNumWantingResourcesID(param_4);
      uVar6 = (ulonglong)iVar3;
      lVar5 = 0;
    }
    local_c0 = local_98;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (char *)0x3;
    local_b8 = (longlong)iVar1;
    iVar1 = tls13_hkdf_expand(param_1,param_3,param_9,&DAT_145d4ac70);
    if (iVar1 == 0) goto LAB_143cb6e12;
    local_c0 = local_a0;
    local_c8 = 0;
    local_d0 = 0;
    local_d8 = (char *)0x2;
    local_b8 = uVar6;
    iVar1 = tls13_hkdf_expand(param_1,param_3,param_9,&DAT_145d4ac74);
    if (iVar1 == 0) goto LAB_143cb6e12;
    local_d0 = CONCAT44(local_d0._4_4_,local_a8);
    local_d8 = (char *)0x0;
    iVar1 = FUN_143cf75a0(param_11,param_4,0,0);
    if (((0 < iVar1) && (iVar1 = EVP_CIPHER_CTX_ctrl(param_11,9,uVar6 & 0xffffffff,0), iVar1 != 0))
       && ((lVar5 == 0 || (iVar1 = EVP_CIPHER_CTX_ctrl(param_11,0x11,lVar5,0), iVar1 != 0)))) {
      local_d0 = CONCAT44(local_d0._4_4_,0xffffffff);
      local_d8 = (char *)0x0;
      iVar1 = FUN_143cf75a0(param_11,0,0,local_98);
      if (0 < iVar1) {
        return 1;
      }
    }
    local_d0 = CONCAT44(local_d0._4_4_,0x17a);
  }
  local_d8 = "ssl\\tls13_enc.c";
  ossl_statem_fatal(param_1,0x50,0x202);
LAB_143cb6e12:
  FUN_14004ff40(local_98,0x40);
  return 0;
}



// FUNCTION 143cb6e50 tls13_alert_code body=39 status=ok
// SIG undefined tls13_alert_code(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls13_alert_code(uint param_1)

{
  ulonglong uVar1;
  
  if ((param_1 != 0x6d) && (param_1 != 0x74)) {
    uVar1 = FUN_143cd8880();
    return uVar1;
  }
  return (ulonglong)param_1;
}



// FUNCTION 143cb6e80 tls13_change_cipher_state body=1977 status=ok
// SIG undefined tls13_change_cipher_state(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls13_change_cipher_state(longlong param_1,byte param_2)

{
  char *_Size;
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  char *pcVar12;
  char *pcVar13;
  undefined1 auStack_188 [32];
  char *local_168;
  undefined1 *local_160;
  char *local_158;
  longlong local_150;
  char *local_148;
  longlong local_140;
  longlong local_138;
  char *local_128;
  longlong local_120;
  char *local_118;
  longlong local_110;
  int local_108;
  uint local_104;
  undefined1 *local_100;
  undefined8 local_f8;
  longlong local_f0;
  char *local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined1 local_c8 [64];
  char local_88 [64];
  ulonglong local_48;
  undefined8 uVar11;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_100 = local_c8;
  local_f0 = 0;
  local_e8 = (char *)0x0;
  local_128 = (char *)0x0;
  local_110 = 0;
  local_f8 = 0;
  if ((param_2 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    if (*(longlong *)(param_1 + 0x460) == 0) {
      lVar4 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x460) = lVar4;
      if (lVar4 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1b4);
        goto LAB_143cb6f1b;
      }
    }
    else {
      EVP_CIPHER_CTX_reset();
      lVar4 = *(longlong *)(param_1 + 0x460);
    }
    RECORD_LAYER_reset_write_sequence(param_1 + 0x800);
    local_d8 = 0x468;
  }
  else {
    if (*(longlong *)(param_1 + 0x430) == 0) {
      lVar4 = EVP_CIPHER_CTX_new();
      *(longlong *)(param_1 + 0x430) = lVar4;
      if (lVar4 == 0) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1a4);
LAB_143cb6f1b:
        local_168 = "ssl\\tls13_enc.c";
        ossl_statem_fatal(param_1,0x50,0x1b8,0x41);
        uVar5 = uVar9;
        goto LAB_143cb760d;
      }
    }
    else {
      EVP_CIPHER_CTX_reset();
      lVar4 = *(longlong *)(param_1 + 0x430);
    }
    RECORD_LAYER_reset_read_sequence(param_1 + 0x800);
    local_d8 = 0x438;
  }
  local_d8 = local_d8 + param_1;
  pcVar13 = "s hs traffic";
  uVar5 = uVar11;
  if (((param_2 & 0x12) == 0x12) || ((param_2 & 0x21) == 0x21)) {
    if ((param_2 & 0x40) == 0) {
      if (-1 < (char)param_2) {
        pcVar13 = "c ap traffic";
        local_118 = "CLIENT_TRAFFIC_SECRET_0";
        local_100 = (undefined1 *)(param_1 + 0x2ac);
        goto LAB_143cb7366;
      }
      local_f0 = param_1 + 0x22c;
      pcVar12 = (char *)(param_1 + 0x16c);
      uVar5 = ssl_handshake_md(param_1);
      iVar2 = EVP_MD_size(uVar5);
      local_e8 = (char *)(longlong)iVar2;
      pcVar13 = "c hs traffic";
      local_118 = "CLIENT_HANDSHAKE_TRAFFIC_SECRET";
      local_100 = (undefined1 *)(param_1 + 0x2ec);
      goto LAB_143cb736d;
    }
    lVar6 = FUdpMessageTunnel::GetTotalInboundBytes(*(undefined8 *)(param_1 + 0x508));
    local_120 = 0xb;
    pcVar13 = "c e traffic";
    local_118 = "CLIENT_EARLY_TRAFFIC_SECRET";
    local_108 = BIO_ctrl(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0xe0),3,0,&local_e0);
    if (local_108 < 1) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1d0);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8);
      goto LAB_143cb760d;
    }
    if (((*(int *)(param_1 + 0x84) == 2) && (*(int *)(param_1 + 0x16e0) != 0)) &&
       (*(int *)(*(longlong *)(param_1 + 0x508) + 0x19c) == 0)) {
      if ((*(longlong *)(param_1 + 0x510) == 0) ||
         (*(int *)(param_1 + 0x16e0) != *(int *)(*(longlong *)(param_1 + 0x510) + 0x19c))) {
        local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1e1);
        local_168 = "ssl\\tls13_enc.c";
        ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
        goto LAB_143cb760d;
      }
      lVar6 = FUdpMessageTunnel::GetTotalInboundBytes();
    }
    if (lVar6 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1e8);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0xdb);
      goto LAB_143cb760d;
    }
    lVar7 = EVP_MD_CTX_new();
    if (lVar7 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,500);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x41);
      goto LAB_143cb760d;
    }
    uVar3 = SSL_CIPHER_get_cipher_nid(lVar6);
    uVar8 = OBJ_nid2sn(uVar3);
    local_f8 = EVP_get_cipherbyname(uVar8);
    local_110 = ssl_md(*(undefined4 *)(lVar6 + 0x40));
    if (((local_110 == 0) || (iVar2 = EVP_DigestInit_ex(lVar7,local_110,0), iVar2 == 0)) ||
       ((iVar2 = EVP_DigestUpdate(lVar7,local_e0,(longlong)local_108), iVar2 == 0 ||
        (iVar2 = EVP_DigestFinal_ex(lVar7,local_c8,&local_104), iVar2 == 0)))) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x1fd);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
      EVP_MD_CTX_free(lVar7);
      goto LAB_143cb760d;
    }
    local_128 = (char *)(ulonglong)local_104;
    EVP_MD_CTX_free(lVar7);
    pcVar12 = (char *)(param_1 + 300);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xc;
    local_150 = param_1 + 0x3ec;
    iVar2 = tls13_hkdf_expand(param_1,local_110,pcVar12,"e exp master");
    if (iVar2 == 0) {
      local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x20a);
      local_168 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x1b8,0x44);
      goto LAB_143cb760d;
    }
    iVar2 = ssl_log_secret(param_1,"EARLY_EXPORTER_SECRET",param_1 + 0x3ec,local_128);
    if (iVar2 == 0) goto LAB_143cb760d;
  }
  else {
    if ((char)param_2 < '\0') {
      local_f0 = param_1 + 0x26c;
      pcVar12 = (char *)(param_1 + 0x16c);
      uVar5 = ssl_handshake_md(param_1);
      iVar2 = EVP_MD_size(uVar5);
      local_e8 = (char *)(longlong)iVar2;
      local_118 = "SERVER_HANDSHAKE_TRAFFIC_SECRET";
    }
    else {
      pcVar13 = "s ap traffic";
      local_118 = "SERVER_TRAFFIC_SECRET_0";
LAB_143cb7366:
      pcVar12 = (char *)(param_1 + 0x1ac);
    }
LAB_143cb736d:
    local_120 = 0xc;
  }
  if ((param_2 & 0x40) == 0) {
    local_110 = ssl_handshake_md(param_1);
    local_f8 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278);
    iVar2 = ssl3_digest_cached_records(param_1,1);
    uVar5 = uVar9;
    if ((iVar2 == 0) || (iVar2 = ssl_handshake_hash(param_1,local_c8,0x40,&local_128), iVar2 == 0))
    goto LAB_143cb760d;
  }
  _Size = local_128;
  if (pcVar13 == "s ap traffic") {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2ac),local_c8,(size_t)local_128);
  }
  if (pcVar13 == "s hs traffic") {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x2ec),local_c8,(size_t)_Size);
  }
  if (pcVar13 == "c ap traffic") {
    uVar5 = ssl_handshake_md(param_1);
    local_148 = local_128;
    local_158 = local_128;
    local_160 = local_c8;
    local_168 = (char *)0xa;
    local_150 = param_1 + 0x1ec;
    iVar2 = tls13_hkdf_expand(param_1,uVar5,pcVar12,"res master");
    uVar5 = uVar9;
    if (iVar2 == 0) goto LAB_143cb760d;
  }
  puVar1 = local_100;
  local_140 = local_d8;
  local_150 = local_120;
  local_160 = local_100;
  local_168 = pcVar12;
  local_158 = pcVar13;
  local_148 = local_88;
  local_138 = lVar4;
  iVar2 = derive_secret_key_and_iv(param_1,param_2 & 2,local_110,local_f8);
  uVar5 = uVar11;
  if (iVar2 != 0) {
    if (pcVar13 == "s ap traffic") {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x36c),local_88,(size_t)local_128);
      uVar9 = ssl_handshake_md(param_1);
      local_148 = local_128;
      local_158 = local_128;
      local_160 = puVar1;
      local_168 = (char *)0xa;
      local_150 = param_1 + 0x3ac;
      iVar2 = tls13_hkdf_expand(param_1,uVar9,pcVar12,"exp master");
      if ((iVar2 == 0) ||
         (iVar2 = ssl_log_secret(param_1,"EXPORTER_SECRET",param_1 + 0x3ac,local_128), iVar2 == 0))
      goto LAB_143cb760d;
    }
    else if (pcVar13 == "c ap traffic") {
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x32c),local_88,(size_t)local_128);
    }
    iVar2 = ssl_log_secret(param_1,local_118,local_88,local_128);
    lVar4 = local_f0;
    if (iVar2 != 0) {
      if (local_f0 != 0) {
        uVar9 = ssl_handshake_md(param_1);
        local_148 = local_e8;
        local_150 = lVar4;
        local_158 = (char *)0x0;
        local_160 = (undefined1 *)0x0;
        local_168 = (char *)0x8;
        iVar2 = tls13_hkdf_expand(param_1,uVar9,local_88,"finished");
        if (iVar2 == 0) goto LAB_143cb760d;
      }
      if ((*(int *)(param_1 + 0x38) == 0) && (pcVar13 == "c e traffic")) {
        uVar10 = 2;
      }
      *(undefined4 *)(param_1 + 0x7c) = uVar10;
      uVar5 = 1;
    }
  }
LAB_143cb760d:
  FUN_14004ff40(local_88,0x40);
  return uVar5;
}



// FUNCTION 143cb7640 tls13_derive_finishedkey body=69 status=ok
// SIG undefined tls13_derive_finishedkey(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_derive_finishedkey(void)

{
  tls13_hkdf_expand();
  return;
}



// FUNCTION 143cb7690 tls13_export_keying_material body=456 status=ok
// SIG undefined tls13_export_keying_material(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
tls13_export_keying_material
          (longlong param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  undefined1 *local_140;
  ulonglong local_138;
  undefined1 *local_130;
  ulonglong local_128;
  uint local_118;
  uint local_114 [3];
  undefined1 local_108 [64];
  undefined1 local_c8 [64];
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cb76aa;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  uVar2 = ssl_handshake_md();
  lVar3 = EVP_MD_CTX_new();
  uVar4 = 0;
  uVar5 = 0;
  if (lVar3 != 0) {
    iVar1 = ossl_statem_export_allowed(param_1);
    uVar5 = uVar4;
    if (iVar1 != 0) {
      iVar1 = EVP_DigestInit_ex(lVar3,uVar2,0);
      if (0 < iVar1) {
        uVar6 = 0;
        if (param_8 != 0) {
          uVar6 = param_7;
        }
        iVar1 = EVP_DigestUpdate(lVar3,param_6,uVar6);
        if (0 < iVar1) {
          iVar1 = EVP_DigestFinal_ex(lVar3,local_c8,&local_118);
          if (0 < iVar1) {
            iVar1 = EVP_DigestInit_ex(lVar3,uVar2,0);
            if (0 < iVar1) {
              iVar1 = EVP_DigestFinal_ex(lVar3,local_108,local_114);
              if (0 < iVar1) {
                local_128 = (ulonglong)local_118;
                local_138 = (ulonglong)local_114[0];
                local_130 = local_88;
                local_140 = local_108;
                local_148 = param_5;
                iVar1 = tls13_hkdf_expand(param_1,uVar2,param_1 + 0x3ac,param_4);
                if (iVar1 != 0) {
                  local_138 = (ulonglong)local_118;
                  local_140 = local_c8;
                  local_148 = 8;
                  local_130 = param_2;
                  local_128 = param_3;
                  iVar1 = tls13_hkdf_expand(param_1,uVar2,local_88,"exporter");
                  uVar5 = 0;
                  if (iVar1 != 0) {
                    uVar5 = 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  EVP_MD_CTX_free(lVar3);
  return uVar5;
}



// FUNCTION 143cb7860 tls13_final_finish_mac body=513 status=ok
// SIG undefined tls13_final_finish_mac(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * tls13_final_finish_mac
                 (longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  char *local_d8;
  char *local_c8 [2];
  undefined1 local_b8 [64];
  undefined1 local_78 [64];
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143cb787c;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar3 = ssl_handshake_md();
  pcVar8 = (char *)0x0;
  lVar4 = EVP_MD_CTX_new();
  iVar2 = ssl_handshake_hash(param_1,local_78,0x40,local_c8);
  pcVar1 = local_c8[0];
  pcVar6 = pcVar8;
  pcVar9 = pcVar8;
  if (iVar2 == 0) goto LAB_143cb7a22;
  if (param_2 == *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x40)) {
    lVar7 = param_1 + 0x26c;
LAB_143cb798c:
    pcVar6 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,lVar7,local_c8[0]);
  }
  else {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      lVar7 = param_1 + 0x22c;
      goto LAB_143cb798c;
    }
    uVar5 = ssl_handshake_md(param_1);
    local_d8 = pcVar1;
    local_e0 = local_b8;
    local_e8 = 0;
    local_f0 = 0;
    local_f8 = (char *)0x8;
    iVar2 = tls13_hkdf_expand(param_1,uVar5,param_1 + 0x32c,"finished");
    pcVar6 = (char *)0x0;
    pcVar9 = (char *)0x0;
    if (iVar2 == 0) goto LAB_143cb7a22;
    pcVar6 = (char *)EVP_PKEY_new_raw_private_key(0x357,0,local_b8,local_c8[0]);
    FUN_14004ff40(local_b8,0x40);
  }
  if ((((pcVar6 == (char *)0x0) || (lVar4 == 0)) ||
      (local_f8 = pcVar6, iVar2 = EVP_DigestSignInit(lVar4,0,uVar3,0), iVar2 < 1)) ||
     ((iVar2 = EVP_DigestUpdate(lVar4,local_78,local_c8[0]), iVar2 < 1 ||
      (iVar2 = EVP_DigestSignFinal(lVar4,param_4,local_c8), pcVar9 = local_c8[0], iVar2 < 1)))) {
    local_f0 = CONCAT44(local_f0._4_4_,0x11b);
    local_f8 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x25d,0x44);
    pcVar9 = pcVar8;
  }
LAB_143cb7a22:
  EVP_PKEY_free(pcVar6);
  EVP_MD_CTX_free(lVar4);
  return pcVar9;
}



// FUNCTION 143cb7a70 tls13_generate_handshake_secret body=114 status=ok
// SIG undefined tls13_generate_handshake_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_generate_handshake_secret(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = ssl_handshake_md();
  tls13_generate_secret(param_1,uVar1,param_1 + 300,param_2,param_3,param_1 + 0x16c);
  return;
}



// FUNCTION 143cb7af0 tls13_generate_master_secret body=117 status=ok
// SIG undefined tls13_generate_master_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls13_generate_master_secret
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               longlong *param_5)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ssl_handshake_md();
  iVar1 = EVP_MD_size(uVar2);
  *param_5 = (longlong)iVar1;
  tls13_generate_secret(param_1,uVar2,param_3,0,0,param_2);
  return;
}



// FUNCTION 143cb7b70 tls13_generate_secret body=782 status=ok
// SIG undefined tls13_generate_secret(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
tls13_generate_secret
          (undefined8 param_1,undefined *param_2,longlong param_3,undefined *param_4,int param_5,
          undefined8 param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined1 auStack_138 [32];
  char *local_118;
  undefined *local_110;
  longlong local_108;
  undefined1 *local_100;
  longlong local_f8;
  longlong local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_e0 = param_6;
  lVar2 = EVP_PKEY_CTX_new_id(0x40c,0);
  if (lVar2 == 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0x8c);
LAB_143cb7bcc:
    local_118 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x24f,0x44);
    return 0;
  }
  iVar1 = EVP_MD_size(param_2);
  if (iVar1 < 0) {
    local_110 = (undefined *)CONCAT44(local_110._4_4_,0x94);
    goto LAB_143cb7bcc;
  }
  puVar5 = &DAT_145d4ad40;
  local_e8 = (longlong)iVar1;
  if (param_4 == (undefined *)0x0) {
    param_5 = iVar1;
    param_4 = &DAT_145d4ad40;
  }
  lVar3 = 0;
  if (param_3 != 0) {
    lVar3 = EVP_MD_CTX_new();
    if (((lVar3 == 0) || (iVar1 = EVP_DigestInit_ex(lVar3,param_2,0), iVar1 < 1)) ||
       (iVar1 = EVP_DigestFinal_ex(lVar3,local_98,0), iVar1 < 1)) {
      local_110 = (undefined *)CONCAT44(local_110._4_4_,0xa9);
      local_118 = "ssl\\tls13_enc.c";
      ossl_statem_fatal(param_1,0x50,0x24f,0x44);
      EVP_MD_CTX_free(lVar3);
LAB_143cb7e3d:
      EVP_PKEY_CTX_free(lVar2);
      return 0;
    }
    EVP_MD_CTX_free(lVar3);
    local_100 = local_d8;
    local_f8 = local_e8;
    local_108 = local_e8;
    local_110 = local_98;
    local_118 = (char *)0x7;
    iVar1 = tls13_hkdf_expand(param_1,param_2,param_3,"derived");
    if (iVar1 == 0) goto LAB_143cb7e3d;
    puVar5 = local_d8;
    lVar3 = local_e8;
  }
  iVar1 = EVP_PKEY_derive_init(lVar2);
  if (0 < iVar1) {
    uVar4 = 1;
    local_110 = (undefined *)0x0;
    local_118._0_4_ = 1;
    iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1007);
    if (0 < iVar1) {
      local_118._0_4_ = 0;
      local_110 = param_2;
      iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1003);
      if ((0 < iVar1) &&
         (local_110 = param_4, local_118._0_4_ = param_5,
         iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1005), 0 < iVar1)) {
        local_118 = (char *)CONCAT44(local_118._4_4_,(int)lVar3);
        local_110 = puVar5;
        iVar1 = EVP_PKEY_CTX_ctrl(lVar2,0xffffffff,0x400,0x1004);
        if ((0 < iVar1) && (iVar1 = EVP_PKEY_derive(lVar2,local_e0,&local_e8), 0 < iVar1))
        goto LAB_143cb7de5;
      }
    }
  }
  uVar4 = 0;
  local_110 = (undefined *)CONCAT44(local_110._4_4_,0xca);
  local_118 = "ssl\\tls13_enc.c";
  ossl_statem_fatal(param_1,0x50,0x24f,0x44);
LAB_143cb7de5:
  EVP_PKEY_CTX_free(lVar2);
  if (puVar5 != local_d8) {
    return uVar4;
  }
  FUN_14004ff40(local_d8,local_e8);
  return uVar4;
}



// FUNCTION 143cb7e80 tls13_hkdf_expand body=790 status=ok
// SIG undefined tls13_hkdf_expand(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
tls13_hkdf_expand(undefined8 param_1,undefined1 *param_2,undefined1 *param_3,undefined8 param_4,
                 undefined8 param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                 undefined4 param_9)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined1 auStack_218 [32];
  char *local_1f8;
  undefined1 *local_1f0;
  undefined1 *local_1e8;
  undefined4 local_1e0 [2];
  undefined1 local_1d8 [48];
  undefined4 local_1a8;
  undefined2 local_1a4;
  undefined1 local_1a2;
  undefined1 local_198 [320];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  local_1a8 = 0x31736c74;
  local_1a4 = 0x2033;
  local_1a2 = 0;
  local_1e8 = param_3;
  lVar4 = EVP_PKEY_CTX_new_id(0x40c,0);
  if (lVar4 == 0) {
    return 0;
  }
  uVar2 = EVP_MD_size(param_2);
  iVar3 = WPACKET_init_static_len(local_1d8,local_198,0x140,0);
  if ((iVar3 == 0) || (iVar3 = WPACKET_put_bytes__(local_1d8,param_9,2), iVar3 == 0)) {
LAB_143cb8126:
    EVP_PKEY_CTX_free(lVar4);
    WPACKET_cleanup(local_1d8);
    local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x3f);
    local_1f8 = "ssl\\tls13_enc.c";
    ossl_statem_fatal(param_1,0x50,0x231,0x44);
    return 0;
  }
  uVar5 = 1;
  iVar3 = WPACKET_start_sub_packet_len__(local_1d8,1);
  if ((iVar3 == 0) ||
     (((iVar3 = WPACKET_memcpy(local_1d8,&local_1a8,6), iVar3 == 0 ||
       (iVar3 = WPACKET_memcpy(local_1d8,param_4,param_5), iVar3 == 0)) ||
      (iVar3 = WPACKET_close(local_1d8), iVar3 == 0)))) goto LAB_143cb8126;
  if (param_6 == 0) {
    param_7 = 0;
  }
  iVar3 = WPACKET_sub_memcpy__(local_1d8,param_6,param_7,1);
  if (((iVar3 == 0) || (iVar3 = WPACKET_get_total_written(local_1d8,local_1e0), iVar3 == 0)) ||
     (iVar3 = WPACKET_finish(local_1d8), iVar3 == 0)) goto LAB_143cb8126;
  iVar3 = EVP_PKEY_derive_init(lVar4);
  bVar1 = false;
  if (0 < iVar3) {
    local_1f0 = (undefined1 *)0x0;
    local_1f8 = (char *)CONCAT44(local_1f8._4_4_,2);
    iVar3 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x400,0x1007);
    if (0 < iVar3) {
      local_1f8 = (char *)((ulonglong)local_1f8 & 0xffffffff00000000);
      local_1f0 = param_2;
      iVar3 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x400,0x1003);
      if (0 < iVar3) {
        local_1f0 = local_1e8;
        local_1f8 = (char *)CONCAT44(local_1f8._4_4_,uVar2);
        iVar3 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x400,0x1005);
        if (0 < iVar3) {
          local_1f0 = local_198;
          local_1f8 = (char *)CONCAT44(local_1f8._4_4_,local_1e0[0]);
          iVar3 = EVP_PKEY_CTX_ctrl(lVar4,0xffffffff,0x400,0x1006);
          if ((0 < iVar3) && (iVar3 = EVP_PKEY_derive(lVar4,param_8,&param_9), 0 < iVar3))
          goto LAB_143cb80eb;
        }
      }
    }
  }
  bVar1 = true;
  uVar5 = 0;
LAB_143cb80eb:
  EVP_PKEY_CTX_free(lVar4);
  if (!bVar1) {
    return uVar5;
  }
  local_1f0 = (undefined1 *)CONCAT44(local_1f0._4_4_,0x4f);
  local_1f8 = "ssl\\tls13_enc.c";
  ossl_statem_fatal(param_1,0x50,0x231,0x44);
  return uVar5;
}



// FUNCTION 143cb81a0 tls13_setup_key_block body=197 status=ok
// SIG undefined tls13_setup_key_block(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls13_setup_key_block(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  undefined8 local_res18 [2];
  undefined4 uVar2;
  
  local_res8[0] = 0;
  uVar2 = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x128) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  iVar1 = FUN_143caead0(*(undefined8 *)(param_1 + 0x508),&local_res10,local_res18,local_res8,0,0,0,
                        0x143cb81ac);
  if (iVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1b9,0x8a,"ssl\\tls13_enc.c",CONCAT44(uVar2,0x134));
    return 0;
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x278) = local_res10;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x280) = local_res18[0];
  return 1;
}



// FUNCTION 143cb8270 tls13_update_key body=327 status=ok
// SIG undefined tls13_update_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool tls13_update_key(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  void *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined1 local_88 [64];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cb828a;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar4 = ssl_handshake_md();
  iVar2 = EVP_MD_size(uVar4);
  lVar7 = 0x36c;
  if (*(int *)(param_1 + 0x38) != param_2) {
    lVar7 = 0x32c;
  }
  if (param_2 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x430);
    RECORD_LAYER_reset_read_sequence(param_1 + 0x800);
    lVar5 = 0x438;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x460);
    *(undefined4 *)(param_1 + 0x7c) = 1;
    RECORD_LAYER_reset_write_sequence();
    lVar5 = 0x468;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  uVar6 = ssl_handshake_md(param_1);
  local_a8 = local_88;
  local_b0 = 0xb;
  local_b8 = "traffic upd";
  local_c0 = 0;
  local_c8 = (void *)(lVar7 + param_1);
  local_a0 = param_1 + lVar5;
  local_98 = uVar4;
  iVar3 = derive_secret_key_and_iv(param_1,param_2,uVar6,*(undefined8 *)(lVar1 + 0x278));
  if (iVar3 != 0) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar7 + param_1),local_88,(longlong)iVar2);
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  FUN_14004ff40(local_88,0x40);
  return iVar3 != 0;
}



// FUNCTION 143cb83c0 get_sigorhash body=314 status=ok
// SIG undefined get_sigorhash(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void get_sigorhash(undefined4 *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = 0;
  lVar3 = lVar5;
  do {
    lVar4 = lVar3 + 1;
    lVar2 = lVar5;
    if (*(char *)(param_3 + lVar3) != (&DAT_145d473d4)[lVar3]) {
      do {
        lVar4 = lVar2 + 1;
        lVar3 = lVar5;
        if (*(char *)(param_3 + lVar2) != (&DAT_145d4b7f8)[lVar2]) {
          do {
            lVar4 = lVar3 + 1;
            lVar2 = lVar5;
            if (*(char *)(param_3 + lVar3) != (&DAT_145d4b800)[lVar3]) {
              do {
                lVar3 = lVar2 + 1;
                if (*(char *)(param_3 + lVar2) != (&DAT_145d4b804)[lVar2]) {
                  do {
                    lVar3 = lVar5 + 1;
                    if (*(char *)(param_3 + lVar5) != (&DAT_145d4a56c)[lVar5]) {
                      iVar1 = OBJ_sn2nid(param_3);
                      *param_2 = iVar1;
                      if (iVar1 == 0) {
                        iVar1 = OBJ_ln2nid(param_3);
                        *param_2 = iVar1;
                      }
                      return;
                    }
                    lVar5 = lVar3;
                  } while (lVar3 != 6);
                  *param_1 = 0x198;
                  return;
                }
                lVar2 = lVar3;
              } while (lVar3 != 4);
              *param_1 = 0x74;
              return;
            }
            lVar3 = lVar4;
          } while (lVar4 != 4);
          *param_1 = 0x390;
          return;
        }
        lVar2 = lVar4;
      } while (lVar4 != 8);
      *param_1 = 0x390;
      return;
    }
    lVar3 = lVar4;
  } while (lVar4 != 4);
  *param_1 = 6;
  return;
}



// FUNCTION 143cb8500 has_usable_cert body=314 status=ok
// SIG undefined has_usable_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 has_usable_cert(longlong param_1,longlong param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined **ppuVar5;
  ulonglong uVar6;
  int local_res18 [2];
  int local_res20 [2];
  
  if (param_3 == 0xffffffff) {
    param_3 = *(uint *)(param_2 + 0x18);
  }
  if (param_3 < 9) {
    lVar1 = (longlong)(int)param_3 * 0x28;
    if ((*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x20 + lVar1) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x28 + lVar1) != 0)) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
      if (*(longlong *)(lVar3 + 0x2f0) == 0) {
        return 1;
      }
      uVar6 = 0;
      if (*(longlong *)(lVar3 + 0x300) != 0) {
        do {
          ppuVar5 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
          uVar4 = 0;
          do {
            if (*(short *)(ppuVar5 + 1) == *(short *)(*(longlong *)(lVar3 + 0x2f0) + uVar6 * 2)) {
              iVar2 = X509_get_signature_info
                                (*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x20 + lVar1),
                                 local_res18,local_res20,0,0);
              if (((iVar2 != 0) && (local_res18[0] == *(int *)((longlong)ppuVar5 + 0xc))) &&
                 (local_res20[0] == *(int *)((longlong)ppuVar5 + 0x14))) {
                return 1;
              }
              break;
            }
            uVar4 = uVar4 + 1;
            ppuVar5 = ppuVar5 + 5;
          } while (uVar4 < 0x1a);
          lVar3 = *(longlong *)(param_1 + 0xa8);
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(ulonglong *)(lVar3 + 0x300));
      }
    }
  }
  return 0;
}



// FUNCTION 143cb8640 nid_cb body=223 status=ok
// SIG undefined nid_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 nid_cb(void *param_1,int param_2,ulonglong *param_3)

{
  int iVar1;
  ulonglong *puVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (((param_1 == (void *)0x0) || (*param_3 == 0x1e)) || (0x13 < param_2)) {
LAB_143cb8700:
    uVar3 = 0;
  }
  else {
    uVar5 = (ulonglong)param_2;
    _guard_xfg_dispatch_icall_nop(local_28,param_1,uVar5);
    if (0x13 < uVar5) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_28[uVar5] = 0;
    iVar1 = EC_curve_nist2nid();
    if (iVar1 == 0) {
      iVar1 = OBJ_sn2nid();
      if (iVar1 == 0) {
        iVar1 = OBJ_ln2nid();
        if (iVar1 == 0) goto LAB_143cb8700;
      }
    }
    uVar5 = *param_3;
    uVar4 = 0;
    if (uVar5 != 0) {
      puVar2 = param_3 + 1;
      do {
        if ((int)*puVar2 == iVar1) goto LAB_143cb8700;
        uVar4 = uVar4 + 1;
        puVar2 = (ulonglong *)((longlong)puVar2 + 4);
      } while (uVar4 < uVar5);
    }
    *(int *)((longlong)param_3 + uVar5 * 4 + 8) = iVar1;
    uVar3 = 1;
    *param_3 = *param_3 + 1;
  }
  return uVar3;
}



// FUNCTION 143cb8720 rsa_pss_check_min_key_size body=112 status=ok
// SIG undefined rsa_pss_check_min_key_size(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 rsa_pss_check_min_key_size(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (*(int *)(param_2 + 0xc) == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = ssl_md(*(undefined4 *)(param_2 + 0x10));
      if (lVar3 == 0) {
        return 0;
      }
    }
    if (lVar3 != 0) {
      iVar1 = EVP_MD_size(lVar3);
      iVar2 = RSA_size(param_1);
      if (iVar1 * 2 + 2 <= iVar2) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143cb8790 sig_cb body=431 status=ok
// SIG undefined sig_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 sig_cb(void *param_1,int param_2,ulonglong *param_3)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  char local_50 [40];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cb879e;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  uVar5 = 0;
  local_58 = 0;
  local_54 = 0;
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (*param_3 == 0x34) {
    return 0;
  }
  if (0x27 < param_2) {
    return 0;
  }
  uVar6 = (ulonglong)param_2;
  _guard_xfg_dispatch_icall_nop(local_50,param_1,uVar6);
  if (0x27 < uVar6) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  local_50[uVar6] = '\0';
  pcVar3 = _guard_xfg_dispatch_icall_nop(local_50,0x2b);
  uVar6 = uVar5;
  if (pcVar3 == (char *)0x0) {
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    do {
      if (*ppuVar7 != (undefined *)0x0) {
        pcVar3 = local_50;
        lVar8 = (longlong)*ppuVar7 - (longlong)pcVar3;
        do {
          cVar1 = *pcVar3;
          cVar2 = pcVar3[lVar8];
          if (cVar1 != cVar2) break;
          pcVar3 = pcVar3 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
          *param_3 = *param_3 + 1;
          break;
        }
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
  }
  else {
    *pcVar3 = '\0';
    if (pcVar3[1] == '\0') {
      return 0;
    }
    get_sigorhash(&local_58,&local_54,local_50);
    get_sigorhash(&local_58,&local_54,pcVar3 + 1);
    if (local_58 == 0) {
      return 0;
    }
    if (local_54 == 0) {
      return 0;
    }
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    do {
      if ((*(int *)((longlong)ppuVar7 + 0xc) == local_54) &&
         (*(int *)((longlong)ppuVar7 + 0x14) == local_58)) {
        *(undefined2 *)((longlong)param_3 + *param_3 * 2 + 8) = *(undefined2 *)(ppuVar7 + 1);
        *param_3 = *param_3 + 1;
        break;
      }
      uVar6 = uVar6 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar6 < 0x1a);
  }
  if (uVar6 == 0x1a) {
    return 0;
  }
  uVar6 = *param_3 - 1;
  if (uVar6 != 0) {
    puVar4 = param_3 + 1;
    do {
      if ((short)*puVar4 == *(short *)((longlong)param_3 + uVar6 * 2 + 8)) {
        *param_3 = uVar6;
        return 0;
      }
      uVar5 = uVar5 + 1;
      puVar4 = (ulonglong *)((longlong)puVar4 + 2);
    } while (uVar5 < uVar6);
  }
  return 1;
}



// FUNCTION 143cb8940 ssl_check_ca_name body=130 status=ok
// SIG undefined ssl_check_ca_name(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_check_ca_name(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar2 = FVoicePacketImpl::GetSampleCounter(param_2);
  iVar4 = 0;
  iVar1 = OPENSSL_sk_num(param_1);
  if (0 < iVar1) {
    do {
      uVar3 = OPENSSL_sk_value(param_1,iVar4);
      iVar1 = X509_NAME_cmp(uVar2,uVar3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      iVar1 = OPENSSL_sk_num(param_1);
    } while (iVar4 < iVar1);
  }
  return 0;
}



// FUNCTION 143cb89d0 ssl_cipher_disabled body=270 status=ok
// SIG undefined ssl_cipher_disabled(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_cipher_disabled(longlong param_1,longlong param_2,undefined4 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if ((((*(uint *)(lVar1 + 0x334) & *(uint *)(param_2 + 0x1c)) == 0) &&
      ((*(uint *)(param_2 + 0x20) & *(uint *)(lVar1 + 0x338)) == 0)) &&
     (iVar3 = *(int *)(lVar1 + 0x340), iVar3 != 0)) {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      iVar2 = *(int *)(param_2 + 0x2c);
      if (((iVar2 == 0x301) && (param_4 != 0)) && ((*(uint *)(param_2 + 0x1c) & 0x84) != 0)) {
        iVar2 = 0x300;
      }
      if ((iVar2 <= iVar3) && (*(int *)(lVar1 + 0x33c) <= *(int *)(param_2 + 0x30))) {
LAB_143cb8aaf:
        iVar3 = ssl_security(param_1,param_3,*(undefined4 *)(param_2 + 0x44),0,param_2,0x143cb89e5);
        return iVar3 == 0;
      }
    }
    else {
      iVar2 = *(int *)(param_2 + 0x34);
      if (iVar2 == 0x100) {
        iVar2 = 0xff00;
      }
      if (iVar3 == 0x100) {
        iVar3 = 0xff00;
      }
      if (iVar3 <= iVar2) {
        iVar3 = *(int *)(param_2 + 0x38);
        iVar2 = *(int *)(lVar1 + 0x33c);
        if (iVar3 == 0x100) {
          iVar3 = 0xff00;
        }
        if (iVar2 == 0x100) {
          iVar2 = 0xff00;
        }
        if (iVar3 <= iVar2) goto LAB_143cb8aaf;
      }
    }
  }
  return true;
}



// FUNCTION 143cb8ae0 ssl_get_auto_dh body=372 status=ok
// SIG undefined ssl_get_auto_dh(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl_get_auto_dh(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) == 2) {
    lVar3 = FUN_143d18cb0();
    return lVar3;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
  if ((*(byte *)(lVar3 + 0x20) & 0x14) == 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
    if (lVar3 == 0) {
      return 0;
    }
    iVar2 = EVP_PKEY_security_bits(*(undefined8 *)(lVar3 + 8));
  }
  else {
    iVar2 = 0x80;
    if (*(int *)(lVar3 + 0x44) != 0x100) {
      iVar2 = 0x50;
    }
  }
  if (0x7f < iVar2) {
    lVar3 = DH_new();
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = BN_new();
    if ((lVar4 == 0) || (iVar1 = BN_set_word(lVar4,2), iVar1 == 0)) {
      DH_free(lVar3);
    }
    else {
      if (iVar2 < 0xc0) {
        lVar5 = BN_get_rfc3526_prime_3072(0);
      }
      else {
        lVar5 = BN_get_rfc3526_prime_8192();
      }
      if ((lVar5 != 0) && (iVar2 = DH_set0_pqg(lVar3,lVar5,0,lVar4), iVar2 != 0)) {
        return lVar3;
      }
      DH_free(lVar3);
      BN_free(lVar5);
    }
    BN_free(lVar4);
    return 0;
  }
  if (0x6f < iVar2) {
    lVar3 = FUN_143d18d30();
    return lVar3;
  }
  lVar3 = FUN_143d18cb0();
  return lVar3;
}



// FUNCTION 143cb8c60 ssl_security_cert body=269 status=ok
// SIG undefined ssl_security_cert(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
ssl_security_cert(longlong param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int local_res20 [2];
  int local_18 [2];
  undefined8 uStack_10;
  
  uStack_10 = 0x143cb8c7a;
  uVar3 = 0x1000;
  if (param_4 == 0) {
    uVar3 = 0;
  }
  if (param_5 == 0) {
    iVar1 = ssl_security_cert_key();
    if (iVar1 == 0) {
      return 0x18d;
    }
  }
  else {
    iVar1 = ssl_security_cert_key();
    if (iVar1 == 0) {
      return 399;
    }
  }
  uVar2 = X509_get_extension_flags(param_3);
  if ((uVar2 >> 0xd & 1) == 0) {
    iVar1 = X509_get_signature_info(param_3,local_res20,local_18,&param_5,0);
    if (iVar1 == 0) {
      param_5 = -1;
    }
    if (local_res20[0] == 0) {
      local_res20[0] = local_18[0];
    }
    if (param_1 == 0) {
      iVar1 = ssl_ctx_security(param_2,uVar3 | 0x60012,param_5,local_res20[0],param_3);
    }
    else {
      iVar1 = ssl_security(param_1);
    }
    if (iVar1 == 0) {
      return 0x18e;
    }
  }
  return 1;
}



// FUNCTION 143cb8d70 ssl_security_cert_chain body=386 status=ok
// SIG undefined ssl_security_cert_chain(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_security_cert_chain(longlong param_1,undefined8 param_2,longlong param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_res18 [2];
  undefined8 in_stack_ffffffffffffffb8;
  undefined4 uVar7;
  int local_38;
  int local_34 [3];
  
  uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffb8 >> 0x20);
  local_34[1] = 0x43cb8d82;
  local_34[2] = 1;
  bVar6 = param_3 == 0;
  if (bVar6) {
    param_3 = OPENSSL_sk_value(param_2,0);
  }
  uVar4 = (uint)bVar6;
  uVar3 = ssl_security_cert(param_1,0,param_3,param_4,CONCAT44(uVar7,1));
  if ((int)uVar3 == 1) {
    iVar1 = OPENSSL_sk_num(param_2);
    if ((int)uVar4 < iVar1) {
      uVar5 = 0x1000;
      if (param_4 == 0) {
        uVar5 = 0;
      }
      do {
        uVar3 = OPENSSL_sk_value(param_2,uVar4);
        iVar1 = ssl_security_cert_key(param_1,0,uVar3,uVar5 | 0x60011);
        if (iVar1 == 0) {
          return 0x18d;
        }
        uVar2 = X509_get_extension_flags(uVar3);
        if ((uVar2 >> 0xd & 1) == 0) {
          iVar1 = X509_get_signature_info(uVar3,&local_38,local_34,local_res18,0);
          if (iVar1 == 0) {
            local_res18[0] = 0xffffffff;
          }
          if (local_38 == 0) {
            local_38 = local_34[0];
          }
          if (param_1 == 0) {
            iVar1 = ssl_ctx_security(0,uVar5 | 0x60012,local_res18[0],local_38,uVar3);
          }
          else {
            iVar1 = ssl_security(param_1);
          }
          if (iVar1 == 0) {
            return 0x18e;
          }
        }
        uVar4 = uVar4 + 1;
        iVar1 = OPENSSL_sk_num(param_2);
      } while ((int)uVar4 < iVar1);
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143cb8f00 ssl_security_cert_key body=136 status=ok
// SIG undefined ssl_security_cert_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_security_cert_key
               (longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cb8f20;
  uVar2 = 0xffffffff;
  lVar1 = X509_get0_pubkey(param_3);
  if (lVar1 != 0) {
    uVar2 = EVP_PKEY_security_bits(lVar1);
  }
  if (param_1 == 0) {
    ssl_ctx_security(param_2,param_4,uVar2,0,param_3,uVar3);
  }
  else {
    ssl_security(param_1);
  }
  return;
}



// FUNCTION 143cb8f90 ssl_set_client_disabled body=525 status=ok
// SIG undefined ssl_set_client_disabled(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl_set_client_disabled(longlong param_1)

{
  uint *puVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined **ppuVar7;
  longlong lVar8;
  short *psVar9;
  uint uVar10;
  
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x338) = 0;
  uVar10 = 0xb;
  *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x334) = 0;
  lVar8 = *(longlong *)(param_1 + 0x488);
  lVar2 = *(longlong *)(param_1 + 0xa8);
  uVar3 = *(uint *)(lVar8 + 0x1c) & 0x30000;
  if (uVar3 == 0x10000) {
    lVar8 = 1;
LAB_143cb906a:
    psVar9 = &DAT_145d4b204;
  }
  else if (uVar3 == 0x20000) {
    psVar9 = &DAT_145d4b206;
    lVar8 = 1;
  }
  else {
    if (uVar3 == 0x30000) {
      lVar8 = 2;
      goto LAB_143cb906a;
    }
    if ((*(int *)(param_1 + 0x38) == 1) &&
       (psVar9 = *(short **)(lVar8 + 0x1a8), psVar9 != (short *)0x0)) {
      lVar8 = *(longlong *)(lVar8 + 0x1b0);
    }
    else {
      psVar9 = *(short **)(lVar8 + 0x198);
      if (psVar9 == (short *)0x0) {
        psVar9 = &DAT_145d4b1d0;
        lVar8 = 0x1a;
        goto LAB_143cb9090;
      }
      lVar8 = *(longlong *)(lVar8 + 0x1a0);
    }
    if (lVar8 == 0) goto LAB_143cb90f9;
  }
LAB_143cb9090:
  do {
    uVar5 = 0;
    ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    do {
      if (*(short *)(ppuVar7 + 1) == *psVar9) {
        lVar6 = ssl_cert_lookup_by_idx((longlong)*(int *)(ppuVar7 + 3));
        if (((lVar6 != 0) && ((*(uint *)(lVar6 + 4) & uVar10) != 0)) &&
           (iVar4 = tls12_sigalg_allowed(param_1,0x5000e,ppuVar7), iVar4 != 0)) {
          uVar10 = uVar10 & ~*(uint *)(lVar6 + 4);
        }
        break;
      }
      uVar5 = uVar5 + 1;
      ppuVar7 = ppuVar7 + 5;
    } while (uVar5 < 0x1a);
    psVar9 = psVar9 + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
LAB_143cb90f9:
  puVar1 = (uint *)(lVar2 + 0x338);
  *puVar1 = *puVar1 | uVar10;
  iVar4 = ssl_get_min_max_version
                    (param_1,*(longlong *)(param_1 + 0xa8) + 0x33c,
                     *(longlong *)(param_1 + 0xa8) + 0x340,0);
  if (iVar4 == 0) {
    if (*(longlong *)(param_1 + 0x578) == 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
      *puVar1 = *puVar1 | 0x10;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
      *puVar1 = *puVar1 | 0x1c8;
    }
    if ((*(byte *)(param_1 + 0x7f4) & 0x20) == 0) {
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x338);
      *puVar1 = *puVar1 | 0x40;
      puVar1 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x334);
      *puVar1 = *puVar1 | 0x20;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 143cb91a0 ssl_set_sig_mask body=336 status=ok
// SIG undefined ssl_set_sig_mask(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_set_sig_mask(uint *param_1,longlong param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined **ppuVar5;
  longlong lVar6;
  short *psVar7;
  uint uVar8;
  
  lVar6 = *(longlong *)(param_2 + 0x488);
  uVar8 = 0xb;
  uVar1 = *(uint *)(lVar6 + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    lVar6 = 1;
  }
  else {
    if (uVar1 == 0x20000) {
      psVar7 = &DAT_145d4b206;
      lVar6 = 1;
      goto LAB_143cb9270;
    }
    if (uVar1 != 0x30000) {
      if ((*(int *)(param_2 + 0x38) == 1) &&
         (psVar7 = *(short **)(lVar6 + 0x1a8), psVar7 != (short *)0x0)) {
        lVar6 = *(longlong *)(lVar6 + 0x1b0);
      }
      else {
        psVar7 = *(short **)(lVar6 + 0x198);
        if (psVar7 == (short *)0x0) {
          psVar7 = &DAT_145d4b1d0;
          lVar6 = 0x1a;
          goto LAB_143cb9270;
        }
        lVar6 = *(longlong *)(lVar6 + 0x1a0);
      }
      if (lVar6 == 0) {
        *param_1 = *param_1 | 0xb;
        return;
      }
      goto LAB_143cb9270;
    }
    lVar6 = 2;
  }
  psVar7 = &DAT_145d4b204;
LAB_143cb9270:
  do {
    ppuVar5 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    uVar3 = 0;
    do {
      if (*(short *)(ppuVar5 + 1) == *psVar7) {
        lVar4 = ssl_cert_lookup_by_idx((longlong)*(int *)(ppuVar5 + 3));
        if (((lVar4 != 0) && ((*(uint *)(lVar4 + 4) & uVar8) != 0)) &&
           (iVar2 = tls12_sigalg_allowed(param_2,param_3,ppuVar5), iVar2 != 0)) {
          uVar8 = uVar8 & ~*(uint *)(lVar4 + 4);
        }
        break;
      }
      uVar3 = uVar3 + 1;
      ppuVar5 = ppuVar5 + 5;
    } while (uVar3 < 0x1a);
    psVar7 = psVar7 + 1;
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) {
      *param_1 = *param_1 | uVar8;
      return;
    }
  } while( true );
}



// FUNCTION 143cb92f0 tls12_check_peer_sigalg body=1002 status=ok
// SIG undefined tls12_check_peer_sigalg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls12_check_peer_sigalg(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  short sVar9;
  uint uVar10;
  undefined4 uVar11;
  short *psVar12;
  undefined **ppuVar13;
  undefined1 local_res20;
  undefined1 local_res21;
  undefined4 uVar14;
  int local_28 [2];
  short *local_20;
  
  local_20 = (short *)0x143cb9303;
  sVar9 = (short)param_2;
  uVar5 = FRollingHash::GetWindowSize(param_3);
  iVar4 = (int)uVar5;
  if (iVar4 == -1) {
    return uVar5;
  }
  piVar1 = *(int **)(param_1 + 8);
  uVar10 = *(uint *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8;
  if (((uVar10 == 0) && (0x303 < *piVar1)) && (*piVar1 != 0x10000)) {
    if (iVar4 == 0x74) {
      ossl_statem_fatal(param_1,0x2f,0x14d,0x172,"ssl\\t1_lib.c",0x3c9);
      return 0;
    }
    if (iVar4 == 6) {
      iVar4 = 0x390;
    }
  }
  ppuVar13 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
  uVar8 = 0;
  uVar6 = uVar8;
  do {
    if (*(short *)(ppuVar13 + 1) == sVar9) {
      if ((((uVar10 == 0) && (0x303 < *piVar1)) &&
          ((*piVar1 != 0x10000 &&
           ((*(int *)((longlong)ppuVar13 + 0xc) == 0x40 ||
            (*(int *)((longlong)ppuVar13 + 0xc) == 0x2a3)))))) ||
         ((iVar4 != *(int *)((longlong)ppuVar13 + 0x14) &&
          ((*(int *)((longlong)ppuVar13 + 0x14) != 0x390 || (iVar4 != 6)))))) {
        uVar14 = 0x3da;
        goto LAB_143cb969b;
      }
      uVar14 = FRollingHash::GetWindowSize(param_3);
      iVar3 = ssl_cert_lookup_by_nid(uVar14,local_28);
      if ((iVar3 == 0) || (*(int *)(ppuVar13 + 3) != local_28[0])) {
        uVar14 = 0x3e1;
        goto LAB_143cb969b;
      }
      if (iVar4 == 0x198) {
        iVar4 = tls1_check_pkey_comp(param_1,param_3);
        if (iVar4 == 0) {
          uVar14 = 0x3ec;
          uVar5 = 0xa2;
          goto LAB_143cb96a1;
        }
        if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
             (iVar4 = **(int **)(param_1 + 8), 0x303 < iVar4)) && (iVar4 != 0x10000)) ||
           ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0)) {
          uVar5 = EVP_PKEY_get0_EC_KEY(param_3);
          uVar5 = FUniqueNetIdString::GetBytes(uVar5);
          iVar4 = TMeshAttributeArraySet<int>::GetNumIndices(uVar5);
          if ((*(int *)(ppuVar13 + 4) != 0) && (iVar4 != *(int *)(ppuVar13 + 4))) {
            uVar14 = 0x3f7;
            uVar5 = 0x17a;
            goto LAB_143cb96a1;
          }
        }
        if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
            (iVar4 = **(int **)(param_1 + 8), iVar4 < 0x304)) || (iVar4 == 0x10000)) {
          uVar2 = tls1_get_group_id(param_3);
          iVar4 = tls1_check_group_id(param_1,uVar2,1);
          if (iVar4 == 0) {
            uVar14 = 0x3ff;
            uVar5 = 0x17a;
            goto LAB_143cb96a1;
          }
          if (((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) &&
             ((sVar9 - 0x403U & 0xfeff) != 0)) {
            uVar14 = 0x408;
            uVar11 = 0x28;
            uVar5 = 0x172;
            goto LAB_143cb96a6;
          }
        }
      }
      else if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
        uVar14 = 0x40f;
        uVar11 = 0x28;
        uVar5 = 0x172;
        goto LAB_143cb96a6;
      }
      uVar7 = tls12_get_psigalgs(param_1,1,&local_20);
      uVar6 = uVar8;
      psVar12 = local_20;
      if (uVar7 == 0) goto LAB_143cb95c1;
      goto LAB_143cb95b0;
    }
    uVar6 = uVar6 + 1;
    ppuVar13 = ppuVar13 + 5;
  } while (uVar6 < 0x1a);
  uVar14 = 0x3da;
LAB_143cb969b:
  uVar5 = 0x172;
LAB_143cb96a1:
  uVar11 = 0x2f;
  goto LAB_143cb96a6;
  while( true ) {
    uVar6 = uVar6 + 1;
    psVar12 = psVar12 + 1;
    if (uVar7 <= uVar6) break;
LAB_143cb95b0:
    if (sVar9 == *psVar12) break;
  }
LAB_143cb95c1:
  if ((uVar6 == uVar7) &&
     ((*(int *)((longlong)ppuVar13 + 0xc) != 0x40 ||
      ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30001) != 0)))) {
    uVar14 = 0x41e;
    uVar11 = 0x28;
    uVar5 = 0x172;
  }
  else {
    if ((*(int *)((longlong)ppuVar13 + 0xc) == 0) ||
       (uVar8 = ssl_md(*(undefined4 *)(ppuVar13 + 2)), uVar8 != 0)) {
      if (uVar8 != 0) {
        local_res21 = (undefined1)param_2;
        local_res20 = (undefined1)((ulonglong)param_2 >> 8);
        uVar14 = FRollingHash::GetWindowSize(uVar8);
        iVar4 = EVP_MD_size(uVar8);
        iVar4 = ssl_security(param_1,0x5000d,iVar4 << 2,uVar14,&local_res20);
        if (iVar4 == 0) {
          uVar14 = 0x431;
          uVar11 = 0x28;
          uVar5 = 0x172;
          goto LAB_143cb96a6;
        }
      }
      *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x308) = ppuVar13;
      return 1;
    }
    uVar14 = 0x423;
    uVar11 = 0x28;
    uVar5 = 0x170;
  }
LAB_143cb96a6:
  ossl_statem_fatal(param_1,uVar11,0x14d,uVar5,"ssl\\t1_lib.c",uVar14);
  return 0;
}



// FUNCTION 143cb96e0 tls12_copy_sigalgs body=306 status=ok
// SIG undefined tls12_copy_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int tls12_copy_sigalgs(longlong param_1,undefined8 param_2,short *param_3,ulonglong param_4)

{
  int iVar1;
  ulonglong uVar2;
  undefined **ppuVar3;
  ulonglong uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = 0x143cb9702;
  iVar5 = 0;
  uVar4 = 0;
  if (param_4 != 0) {
    do {
      uVar2 = 0;
      ppuVar3 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
      do {
        if (*(short *)(ppuVar3 + 1) == *param_3) goto LAB_143cb974d;
        uVar2 = uVar2 + 1;
        ppuVar3 = ppuVar3 + 5;
      } while (uVar2 < 0x1a);
      ppuVar3 = (undefined **)0x0;
LAB_143cb974d:
      iVar1 = tls12_sigalg_allowed(param_1,0x5000b,ppuVar3);
      if (iVar1 != 0) {
        iVar1 = WPACKET_put_bytes__(param_2,*param_3,2);
        if (iVar1 == 0) {
          return 0;
        }
        if ((iVar5 == 0) &&
           (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
              (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) ||
            (((*(int *)((longlong)ppuVar3 + 0x14) != 6 &&
              (*(int *)((longlong)ppuVar3 + 0xc) != 0x40)) &&
             (*(int *)((longlong)ppuVar3 + 0xc) != 0x2a3)))))) {
          iVar5 = 1;
        }
      }
      uVar4 = uVar4 + 1;
      param_3 = param_3 + 1;
    } while (uVar4 < param_4);
    if (iVar5 != 0) {
      return iVar5;
    }
  }
  ERR_put_error(0x14,0x215,0x76,"ssl\\t1_lib.c",0x66b,uVar6);
  return 0;
}



// FUNCTION 143cb9820 tls12_get_psigalgs body=166 status=ok
// SIG undefined tls12_get_psigalgs(void)

undefined8 tls12_get_psigalgs(longlong param_1,int param_2,longlong *param_3)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar2 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  if (uVar2 == 0x10000) {
    *param_3 = (longlong)&DAT_145d4b204;
    return 1;
  }
  if (uVar2 == 0x20000) {
    *param_3 = (longlong)&DAT_145d4b206;
    return 1;
  }
  if (uVar2 == 0x30000) {
    *param_3 = (longlong)&DAT_145d4b204;
    return 2;
  }
  if ((*(int *)(param_1 + 0x38) == param_2) && (*(longlong *)(lVar1 + 0x1a8) != 0)) {
    *param_3 = *(longlong *)(lVar1 + 0x1a8);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1b0);
  }
  if (*(longlong *)(lVar1 + 0x198) != 0) {
    *param_3 = *(longlong *)(lVar1 + 0x198);
    return *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1a0);
  }
  *param_3 = (longlong)&DAT_145d4b1d0;
  return 0x1a;
}



// FUNCTION 143cb98d0 tls12_shared_sigalgs body=226 status=ok
// SIG undefined tls12_shared_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong tls12_shared_sigalgs
                   (undefined8 param_1,undefined8 *param_2,short *param_3,longlong param_4,
                   short *param_5,ulonglong param_6)

{
  int iVar1;
  ulonglong uVar2;
  short *psVar3;
  undefined **ppuVar4;
  longlong lVar5;
  
  lVar5 = 0;
  do {
    if (param_4 == 0) {
      return lVar5;
    }
    ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    uVar2 = 0;
    do {
      if (*(short *)(ppuVar4 + 1) == *param_3) goto LAB_143cb9945;
      uVar2 = uVar2 + 1;
      ppuVar4 = ppuVar4 + 5;
    } while (uVar2 < 0x1a);
    ppuVar4 = (undefined **)0x0;
LAB_143cb9945:
    iVar1 = tls12_sigalg_allowed(param_1,0x5000c,ppuVar4);
    if ((iVar1 != 0) && (uVar2 = 0, param_6 != 0)) {
      psVar3 = param_5;
      do {
        if (*param_3 == *psVar3) {
          lVar5 = lVar5 + 1;
          if (param_2 != (undefined8 *)0x0) {
            *param_2 = ppuVar4;
            param_2 = param_2 + 1;
          }
          break;
        }
        uVar2 = uVar2 + 1;
        psVar3 = psVar3 + 1;
      } while (uVar2 < param_6);
    }
    param_3 = param_3 + 1;
    param_4 = param_4 + -1;
  } while( true );
}



// FUNCTION 143cb99c0 tls12_sigalg_allowed body=729 status=ok
// SIG undefined tls12_sigalg_allowed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls12_sigalg_allowed(longlong param_1,undefined4 param_2,longlong param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 local_res18;
  undefined1 local_res19;
  
  if ((param_3 != 0) &&
     ((*(int *)(param_3 + 0xc) == 0 || (lVar6 = ssl_md(*(undefined4 *)(param_3 + 0x10)), lVar6 != 0)
      ))) {
    uVar9 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
    if ((((uVar9 != 0) ||
         (((iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304 || (iVar3 == 0x10000)) ||
          (*(int *)(param_3 + 0x14) != 0x74)))) &&
        ((((*(int *)(param_1 + 0x38) != 0 || (uVar9 != 0)) ||
          (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c) < 0x304)) ||
         (((*(int *)(param_3 + 0x14) != 0x74 && (1 < *(uint *)(param_3 + 0x10))) &&
          (*(uint *)(param_3 + 0x10) != 10)))))) &&
       (iVar3 = ssl_cert_is_disabled((longlong)*(int *)(param_3 + 0x18)), iVar3 == 0)) {
      if ((*(int *)(param_3 + 0x14) - 0x3d3U < 2) || (*(int *)(param_3 + 0x14) == 0x32b)) {
        piVar1 = *(int **)(param_1 + 8);
        if (*(int *)(param_1 + 0x38) == 0) {
          if ((*piVar1 == 0x10000) && (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x340))) {
            if (0x303 < *(int *)(*(longlong *)(param_1 + 0xa8) + 0x33c)) {
              return 0;
            }
            lVar6 = SSL_get_ciphers(param_1);
            if (lVar6 == 0) {
              iVar3 = 0;
            }
            else {
              iVar3 = OPENSSL_sk_num(lVar6);
            }
            iVar10 = 0;
            iVar5 = 0;
            if (0 < iVar3) {
              do {
                iVar10 = iVar5;
                lVar7 = OPENSSL_sk_value(lVar6,iVar10);
                lVar2 = *(longlong *)(param_1 + 0xa8);
                if ((((*(uint *)(lVar7 + 0x1c) & *(uint *)(lVar2 + 0x334)) == 0) &&
                    ((*(uint *)(lVar7 + 0x20) & *(uint *)(lVar2 + 0x338)) == 0)) &&
                   (iVar5 = *(int *)(lVar2 + 0x340), iVar5 != 0)) {
                  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0)
                  {
                    if ((*(int *)(lVar7 + 0x2c) <= iVar5) &&
                       (*(int *)(lVar2 + 0x33c) <= *(int *)(lVar7 + 0x30))) {
LAB_143cb9be2:
                      iVar5 = ssl_security(param_1,0x10001,*(undefined4 *)(lVar7 + 0x44),0,lVar7);
                      if ((iVar5 != 0) && ((*(byte *)(lVar7 + 0x1c) & 0x10) != 0)) break;
                    }
                  }
                  else {
                    iVar4 = *(int *)(lVar7 + 0x34);
                    if (iVar4 == 0x100) {
                      iVar4 = 0xff00;
                    }
                    if (iVar5 == 0x100) {
                      iVar5 = 0xff00;
                    }
                    if (iVar5 <= iVar4) {
                      iVar5 = *(int *)(lVar7 + 0x38);
                      if (iVar5 == 0x100) {
                        iVar5 = 0xff00;
                      }
                      iVar4 = *(int *)(lVar2 + 0x33c);
                      if (*(int *)(lVar2 + 0x33c) == 0x100) {
                        iVar4 = 0xff00;
                      }
                      if (iVar5 <= iVar4) goto LAB_143cb9be2;
                    }
                  }
                }
                iVar10 = iVar10 + 1;
                iVar5 = iVar10;
              } while (iVar10 < iVar3);
            }
            if (iVar10 == iVar3) {
              return 0;
            }
          }
        }
        else if ((((*(byte *)(*(longlong *)(piVar1 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar1))
                && (*piVar1 != 0x10000)) {
          return 0;
        }
      }
      if (*(int *)(param_3 + 0xc) == 0) {
        return 1;
      }
      uVar8 = ssl_md(*(undefined4 *)(param_3 + 0x10));
      iVar3 = EVP_MD_size(uVar8);
      local_res18 = (undefined1)((ushort)*(undefined2 *)(param_3 + 8) >> 8);
      local_res19 = (undefined1)*(undefined2 *)(param_3 + 8);
      uVar8 = ssl_security(param_1,param_2,iVar3 << 2,*(undefined4 *)(param_3 + 0xc),&local_res18);
      return uVar8;
    }
  }
  return 0;
}



// FUNCTION 143cb9ca0 tls1_check_cert_param body=247 status=ok
// SIG undefined tls1_check_cert_param(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_check_cert_param(longlong param_1,undefined8 param_2,int param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  lVar3 = X509_get0_pubkey(param_2);
  if (lVar3 != 0) {
    iVar2 = FRollingHash::GetWindowSize(lVar3);
    if (iVar2 != 0x198) {
      return 1;
    }
    iVar2 = tls1_check_pkey_comp(param_1,lVar3);
    if (iVar2 != 0) {
      sVar1 = tls1_get_group_id(lVar3);
      uVar5 = 0;
      iVar2 = tls1_check_group_id(param_1,sVar1,*(int *)(param_1 + 0x38) == 0);
      if (iVar2 != 0) {
        if (param_3 == 0) {
          return 1;
        }
        lVar3 = *(longlong *)(param_1 + 0x488);
        if ((*(uint *)(lVar3 + 0x1c) & 0x30000) == 0) {
          return 1;
        }
        if (sVar1 == 0x17) {
          iVar2 = 0x31a;
        }
        else {
          if (sVar1 != 0x18) {
            return 0;
          }
          iVar2 = 0x31b;
        }
        if (*(ulonglong *)(lVar3 + 0x1c0) != 0) {
          plVar4 = *(longlong **)(lVar3 + 0x1b8);
          do {
            if (iVar2 == *(int *)(*plVar4 + 0x1c)) {
              return 1;
            }
            uVar5 = uVar5 + 1;
            plVar4 = plVar4 + 1;
          } while (uVar5 < *(ulonglong *)(lVar3 + 0x1c0));
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143cb9da0 FUN_143cb9da0 body=1469 status=ok
// SIG undefined FUN_143cb9da0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

uint FUN_143cb9da0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,uint param_5)

{
  longlong *plVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  longlong *plVar20;
  short *psVar21;
  char cVar22;
  uint *local_res8;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_40;
  
  local_40 = 0x143cb9dc4;
  plVar1 = *(longlong **)(param_1 + 0x488);
  uVar16 = 0;
  uVar6 = 0;
  uVar15 = 0;
  uVar18 = 0;
  uVar17 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30000;
  if (param_5 == -1) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_3 == 0) {
      return 0;
    }
    lVar10 = ssl_cert_lookup_by_pkey(param_3,&local_40);
    if (lVar10 == 0) {
      return 0;
    }
    param_5 = 1;
    local_res8 = (uint *)(*(longlong *)(param_1 + 0xa8) + ((longlong)(int)local_40 + 0xc4) * 4);
    uVar6 = 0x6f0;
    iVar7 = (int)local_40;
    local_res10 = param_2;
    local_res18 = param_3;
    if ((*(uint *)((longlong)plVar1 + 0x1c) & 0x30001) == 0) {
      uVar6 = 0x50;
    }
  }
  else {
    if (param_5 == -2) {
      plVar20 = (longlong *)*plVar1;
      param_5 = (uint)(((longlong)plVar20 + (-0x20 - (longlong)plVar1)) / 0x28);
    }
    else {
      plVar20 = plVar1 + (longlong)(int)param_5 * 5 + 4;
    }
    param_4 = plVar20[2];
    local_res8 = (uint *)(*(longlong *)(param_1 + 0xa8) + 0x310 + (longlong)(int)param_5 * 4);
    local_res10 = *plVar20;
    local_res18 = plVar20[1];
    uVar4 = uVar18;
    if ((local_res10 == 0) ||
       (iVar7 = param_5, param_5 = *(uint *)((longlong)plVar1 + 0x1c) & 0x30001, local_res18 == 0))
    goto LAB_143cba2f3;
  }
  uVar4 = uVar6;
  uVar2 = 0;
  if (uVar17 != 0) {
    uVar4 = uVar6 | 0x800;
    if (uVar6 == 0) {
      uVar4 = uVar6;
    }
    iVar5 = X509_chain_check_suiteb(0,local_res10,param_4,uVar17);
    if (iVar5 == 0) {
      uVar2 = 0x800;
    }
    else {
      uVar2 = 0;
      if (uVar4 == 0) goto LAB_143cba2f3;
    }
  }
  uVar15 = uVar2;
  uVar6 = FRollingHash::GetWindowSize(param_1);
  if ((((uVar6 & 0xffffff00) == 0x300) &&
      (iVar5 = FRollingHash::GetWindowSize(param_1), 0x302 < iVar5)) && (param_5 != 0)) {
    if ((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2f0) == 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0)) {
      switch(iVar7) {
      case 0:
        uVar18 = 0x41;
        iVar7 = 6;
        break;
      default:
        uVar18 = 0xffffffff;
        goto LAB_143cba069;
      case 2:
        uVar18 = 0x71;
        iVar7 = 0x74;
        break;
      case 3:
        uVar18 = 0x1a0;
        iVar7 = 0x198;
        break;
      case 4:
        uVar18 = 0x327;
        iVar7 = 0x32b;
        break;
      case 5:
        uVar18 = 0x3d9;
        iVar7 = 0x3d3;
        break;
      case 6:
        uVar18 = 0x3da;
        iVar7 = 0x3d4;
      }
      psVar21 = (short *)plVar1[0x33];
      if (psVar21 != (short *)0x0) {
        uVar19 = plVar1[0x34];
        uVar14 = uVar16;
        if (uVar19 != 0) {
          do {
            ppuVar8 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
            uVar12 = uVar16;
            do {
              if (*(short *)(ppuVar8 + 1) == *psVar21) {
                if ((*(int *)((longlong)ppuVar8 + 0xc) == 0x40) &&
                   (*(int *)((longlong)ppuVar8 + 0x14) == iVar7)) goto LAB_143cba04d;
                break;
              }
              uVar12 = uVar12 + 1;
              ppuVar8 = ppuVar8 + 5;
            } while (uVar12 < 0x1a);
            uVar14 = uVar14 + 1;
            psVar21 = psVar21 + 1;
          } while (uVar14 < uVar19);
        }
LAB_143cba04d:
        uVar6 = uVar15;
        uVar17 = uVar15;
        if (uVar14 == uVar19) {
joined_r0x000143cba055:
          uVar15 = uVar6;
          uVar6 = uVar17;
          if (uVar4 == 0) goto LAB_143cba2f3;
          goto LAB_143cba0e2;
        }
      }
    }
LAB_143cba069:
    iVar7 = tls1_check_sig_alg(plVar1,local_res10,uVar18);
    if (iVar7 == 0) {
      if (uVar4 == 0) goto LAB_143cba2f3;
    }
    else {
      uVar15 = uVar15 | 0x10;
    }
    uVar6 = uVar15 | 0x20;
    iVar7 = OPENSSL_sk_num(param_4);
    uVar19 = uVar16;
    if (0 < iVar7) {
      do {
        uVar9 = OPENSSL_sk_value(param_4,uVar19);
        iVar7 = tls1_check_sig_alg(plVar1,uVar9,uVar18);
        uVar17 = uVar15;
        if (iVar7 == 0) goto joined_r0x000143cba055;
        uVar17 = (int)uVar19 + 1;
        uVar19 = (ulonglong)uVar17;
        iVar7 = OPENSSL_sk_num(param_4);
      } while ((int)uVar17 < iVar7);
    }
  }
  else {
    uVar6 = uVar15;
    if (uVar4 != 0) {
      uVar6 = uVar15 | 0x30;
    }
  }
LAB_143cba0e2:
  uVar15 = uVar6;
  iVar7 = tls1_check_cert_param(param_1,local_res10,1);
  if (iVar7 == 0) {
    uVar6 = uVar15;
    if (uVar4 == 0) goto LAB_143cba2f3;
  }
  else {
    uVar6 = uVar15 | 0x40;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    uVar17 = uVar6 | 0x80;
  }
  else {
    uVar17 = uVar6;
    if (param_5 != 0) {
      uVar15 = uVar6 | 0x80;
      iVar7 = OPENSSL_sk_num(param_4);
      uVar19 = uVar16;
      uVar17 = uVar15;
      if (0 < iVar7) {
        do {
          uVar9 = OPENSSL_sk_value(param_4,uVar19);
          lVar10 = X509_get0_pubkey(uVar9);
          if (lVar10 == 0) {
LAB_143cba1aa:
            uVar17 = uVar6;
            if (uVar4 == 0) goto LAB_143cba2f3;
            break;
          }
          iVar7 = FRollingHash::GetWindowSize(lVar10);
          if (iVar7 == 0x198) {
            iVar7 = tls1_check_pkey_comp(param_1,lVar10);
            if (iVar7 != 0) {
              uVar3 = tls1_get_group_id(lVar10);
              iVar7 = tls1_check_group_id(param_1,uVar3,*(int *)(param_1 + 0x38) == 0);
              if (iVar7 != 0) goto LAB_143cba19a;
            }
            goto LAB_143cba1aa;
          }
LAB_143cba19a:
          uVar18 = (int)uVar19 + 1;
          iVar7 = OPENSSL_sk_num(param_4);
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < iVar7);
      }
    }
  }
  uVar15 = uVar17;
  if ((*(int *)(param_1 + 0x38) == 0) && (param_5 != 0)) {
    iVar7 = FRollingHash::GetWindowSize(local_res18);
    if (iVar7 == 6) {
      cVar22 = '\x01';
LAB_143cba20f:
      uVar19 = *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 600);
      pcVar13 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x250);
      uVar14 = uVar16;
      if (uVar19 != 0) {
        do {
          if (*pcVar13 == cVar22) {
            uVar15 = uVar15 | 0x400;
            break;
          }
          pcVar13 = pcVar13 + 1;
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar19);
      }
      if (((uVar15 >> 10 & 1) == 0) && (uVar4 == 0)) goto LAB_143cba2f3;
    }
    else {
      if (iVar7 == 0x74) {
        cVar22 = '\x02';
        goto LAB_143cba20f;
      }
      if (iVar7 == 0x198) {
        cVar22 = '@';
        goto LAB_143cba20f;
      }
      uVar15 = uVar15 | 0x400;
    }
    uVar9 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260);
    iVar7 = OPENSSL_sk_num(uVar9);
    if (iVar7 == 0) {
      uVar15 = uVar15 | 0x200;
    }
    if ((uVar15 >> 9 & 1) == 0) {
      iVar7 = ssl_check_ca_name(uVar9,local_res10);
      if (iVar7 != 0) {
        uVar15 = uVar15 | 0x200;
      }
      if (((uVar15 >> 9 & 1) == 0) && (iVar7 = OPENSSL_sk_num(param_4), 0 < iVar7)) {
        do {
          uVar11 = OPENSSL_sk_value(param_4,uVar16);
          iVar7 = ssl_check_ca_name(uVar9,uVar11);
          if (iVar7 != 0) {
            uVar15 = uVar15 | 0x200;
            break;
          }
          uVar6 = (int)uVar16 + 1;
          uVar16 = (ulonglong)uVar6;
          iVar7 = OPENSSL_sk_num(param_4);
        } while ((int)uVar6 < iVar7);
      }
    }
    if (uVar4 == 0) {
      if ((uVar15 >> 9 & 1) == 0) goto LAB_143cba2f3;
    }
    else {
LAB_143cba2e6:
      if ((uVar4 & uVar15) != uVar4) goto LAB_143cba2f3;
    }
  }
  else {
    uVar15 = uVar15 | 0x600;
    if (uVar4 != 0) goto LAB_143cba2e6;
  }
  uVar15 = uVar15 | 1;
LAB_143cba2f3:
  uVar6 = FRollingHash::GetWindowSize(param_1);
  if (((uVar6 & 0xffffff00) == 0x300) &&
     (iVar7 = FRollingHash::GetWindowSize(param_1), 0x302 < iVar7)) {
    uVar6 = *local_res8 & 0x102;
  }
  else {
    uVar6 = 0x102;
  }
  uVar6 = uVar6 | uVar15;
  if (uVar4 == 0) {
    if ((uVar15 & 1) == 0) {
      *local_res8 = *local_res8 & 0x102;
      return 0;
    }
    *local_res8 = uVar6;
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 143cba380 tls1_check_ec_tmp_key body=110 status=ok
// SIG undefined tls1_check_ec_tmp_key(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls1_check_ec_tmp_key(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  short sVar1;
  ulonglong uVar2;
  
  if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) == 0) {
    sVar1 = tls1_shared_group(param_1,0,param_3,param_4,0x143cba38a);
    return (ulonglong)(sVar1 != 0);
  }
  if (param_2 == 0x300c02b) {
    uVar2 = tls1_check_group_id(param_1,0x17,1);
    return uVar2;
  }
  if (param_2 == 0x300c02c) {
    uVar2 = tls1_check_group_id(param_1,0x18,1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 143cba3f0 tls1_check_group_id body=370 status=ok
// SIG undefined tls1_check_group_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_check_group_id(longlong param_1,short param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined2 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if ((uVar5 != 0) && (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238), lVar1 != 0)) {
    iVar2 = *(int *)(lVar1 + 0x18);
    if (iVar2 == 0x300c02b) {
      if (param_2 != 0x17) {
        return 0;
      }
    }
    else {
      if (iVar2 != 0x300c02c) {
        return 0;
      }
      if (param_2 != 0x18) {
        return 0;
      }
    }
  }
  uVar7 = 1;
  if (param_3 == 0) goto LAB_143cba500;
  if (uVar5 == 0x10000) {
    puVar4 = &DAT_145d4b1cc;
    uVar6 = 1;
LAB_143cba4d2:
    if (uVar6 == 0) {
      return 0;
    }
  }
  else if (uVar5 == 0x20000) {
    puVar4 = &DAT_145d4b1ce;
    uVar6 = 1;
  }
  else if (uVar5 == 0x30000) {
    puVar4 = &DAT_145d4b1cc;
    uVar6 = 2;
  }
  else {
    puVar4 = *(undefined2 **)(param_1 + 0x690);
    if (puVar4 != (undefined2 *)0x0) {
      uVar6 = *(ulonglong *)(param_1 + 0x688);
      goto LAB_143cba4d2;
    }
    puVar4 = &DAT_145d4b1c0;
    uVar6 = 5;
  }
  uVar3 = 0;
  while (puVar4[uVar3] != param_2) {
    uVar3 = uVar3 + 1;
    if (uVar6 <= uVar3) {
      return 0;
    }
  }
LAB_143cba500:
  iVar2 = tls_curve_allowed(param_1,param_2,0x20006);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) != 0) {
    uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x170);
    if (uVar6 != 0) {
      uVar3 = 0;
      if (uVar6 != 0) {
        do {
          if (*(short *)(*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x178) + uVar3 * 2) ==
              param_2) {
            return 1;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      uVar7 = 0;
    }
  }
  return uVar7;
}



// FUNCTION 143cba570 tls1_check_pkey_comp body=244 status=ok
// SIG undefined tls1_check_pkey_comp(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_check_pkey_comp(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char cVar6;
  
  iVar3 = FRollingHash::GetWindowSize(param_2);
  if (iVar3 == 0x198) {
    uVar4 = EVP_PKEY_get0_EC_KEY(param_2);
    uVar4 = FUniqueNetIdString::GetBytes(uVar4);
    iVar3 = UPartyBeaconState::GetMaxReservations();
    if (iVar3 == 4) {
      cVar6 = '\0';
    }
    else {
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
          (iVar3 = **(int **)(param_1 + 8), 0x303 < iVar3)) && (iVar3 != 0x10000)) {
        return 1;
      }
      uVar4 = FHardwareCursor::GetHandle(uVar4);
      iVar3 = FCachedCompositeFontData::FCachedFontRange::BinarySearchKey(uVar4);
      if (iVar3 == 0x196) {
        cVar6 = '\x01';
      }
      else {
        if (iVar3 != 0x197) {
          return 0;
        }
        cVar6 = '\x02';
      }
    }
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x508) + 0x168);
    if (lVar1 != 0) {
      uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x160);
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          if (*(char *)(lVar1 + uVar5) == cVar6) {
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < uVar2);
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143cba670 tls1_check_sig_alg body=135 status=ok
// SIG undefined tls1_check_sig_alg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls1_check_sig_alg(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_3 == -1) {
    return true;
  }
  iVar1 = X509_get_signature_nid();
  uVar2 = 0;
  if (param_3 == 0) {
    if (*(ulonglong *)(param_1 + 0x1c0) != 0) {
      plVar3 = *(longlong **)(param_1 + 0x1b8);
      do {
        if (iVar1 == *(int *)(*plVar3 + 0x1c)) {
          return true;
        }
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
      } while (uVar2 < *(ulonglong *)(param_1 + 0x1c0));
    }
    return false;
  }
  return iVar1 == param_3;
}



// FUNCTION 143cba700 tls1_clear body=66 status=ok
// SIG undefined tls1_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_clear(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = ssl3_clear();
  if ((int)uVar2 == 0) {
    return uVar2;
  }
  iVar1 = **(int **)(param_1 + 2);
  if (**(int **)(param_1 + 2) == 0x10000) {
    iVar1 = 0x304;
  }
  *param_1 = iVar1;
  return 1;
}



// FUNCTION 143cba760 tls1_free body=54 status=ok
// SIG undefined tls1_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls1_free(longlong param_1)

{
  CRYPTO_free(*(undefined8 *)(param_1 + 0x698),"ssl\\t1_lib.c",0x72);
  ssl3_free(param_1);
  return;
}



// FUNCTION 143cba7a0 tls1_get_formatlist body=65 status=ok
// SIG undefined tls1_get_formatlist(void)

void tls1_get_formatlist(longlong param_1,longlong *param_2,longlong *param_3)

{
  if (*(longlong *)(param_1 + 0x680) != 0) {
    *param_2 = *(longlong *)(param_1 + 0x680);
    *param_3 = *(longlong *)(param_1 + 0x678);
    return;
  }
  *param_2 = (longlong)&DAT_145d4b1b8;
  *param_3 = 3 - (ulonglong)((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0);
  return;
}



// FUNCTION 143cba7f0 tls1_get_group_id body=99 status=ok
// SIG undefined tls1_get_group_id(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

int tls1_get_group_id(void)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  lVar3 = EVP_PKEY_get0_EC_KEY();
  if (lVar3 == 0) {
    return 0;
  }
  uVar4 = FUniqueNetIdString::GetBytes(lVar3);
  iVar1 = TMeshAttributeArraySet<int>::GetNumIndices(uVar4);
  iVar2 = 0;
  uVar5 = 0;
  do {
    if (*(int *)((longlong)&DAT_145d4b050 + uVar5) == iVar1) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
    uVar5 = uVar5 + 0xc;
  } while (uVar5 < 0x168);
  return 0;
}



// FUNCTION 143cba860 tls1_get_legacy_sigalg body=354 status=ok
// SIG undefined tls1_get_legacy_sigalg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined ** tls1_get_legacy_sigalg(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined **ppuVar7;
  
  uVar6 = 0;
  uVar4 = param_2 & 0xffffffff;
  if ((int)param_2 == -1) {
    uVar5 = uVar6;
    if (*(int *)(param_1 + 0x38) == 0) {
      uVar4 = ((**(longlong **)(param_1 + 0x488) - (longlong)*(longlong **)(param_1 + 0x488)) +
              -0x20) / 0x28;
    }
    else {
      while( true ) {
        lVar2 = ssl_cert_lookup_by_idx(uVar5);
        uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
        if ((*(uint *)(lVar2 + 4) & uVar1) != 0) break;
        uVar5 = uVar5 + 1;
        if (8 < uVar5) {
          return (undefined **)0x0;
        }
      }
      uVar4 = uVar5;
      if ((int)uVar5 == 4) {
        if (uVar1 != 0x20) {
          uVar4 = 6;
          lVar2 = 6;
          plVar3 = (longlong *)(*(longlong *)(param_1 + 0x488) + 0x118);
          do {
            if (*plVar3 != 0) goto LAB_143cba92d;
            uVar4 = (ulonglong)((int)uVar4 - 1);
            lVar2 = lVar2 + -1;
            plVar3 = plVar3 + -5;
          } while (3 < lVar2);
        }
        goto LAB_143cba932;
      }
    }
  }
LAB_143cba92d:
  uVar5 = uVar4;
  if (8 < (uint)uVar4) {
    return (undefined **)0x0;
  }
LAB_143cba932:
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) &&
     ((int)uVar5 == 0)) {
    return &PTR_s_rsa_pkcs1_md5_sha1_145d4b208;
  }
  ppuVar7 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
  while (*(short *)(ppuVar7 + 1) != *(short *)(&DAT_145d4b640 + (longlong)(int)uVar5 * 2)) {
    uVar6 = uVar6 + 1;
    ppuVar7 = ppuVar7 + 5;
    if (0x19 < uVar6) {
      return (undefined **)0x0;
    }
  }
  if ((*(int *)((longlong)ppuVar7 + 0xc) != 0) &&
     (lVar2 = ssl_md(*(undefined4 *)(ppuVar7 + 2)), lVar2 == 0)) {
    return (undefined **)0x0;
  }
  return ppuVar7;
}



// FUNCTION 143cba9d0 tls1_get_supported_groups body=143 status=ok
// SIG undefined tls1_get_supported_groups(void)

void tls1_get_supported_groups(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar1 == 0x10000) {
    *param_2 = (longlong)&DAT_145d4b1cc;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x20000) {
    *param_2 = (longlong)&DAT_145d4b1ce;
    *param_3 = 1;
    return;
  }
  if (uVar1 == 0x30000) {
    *param_2 = (longlong)&DAT_145d4b1cc;
    *param_3 = 2;
    return;
  }
  if (*(longlong *)(param_1 + 0x690) == 0) {
    *param_2 = (longlong)&DAT_145d4b1c0;
    *param_3 = 5;
    return;
  }
  *param_2 = *(longlong *)(param_1 + 0x690);
  *param_3 = *(undefined8 *)(param_1 + 0x688);
  return;
}



// FUNCTION 143cbaa60 tls1_group_id_lookup body=35 status=ok
// SIG undefined tls1_group_id_lookup(void)

longlong tls1_group_id_lookup(ushort param_1)

{
  if ((ushort)(param_1 - 1) < 0x1e) {
    return (ulonglong)param_1 * 0xc + 0x145d4b044;
  }
  return 0;
}



// FUNCTION 143cbaa90 tls1_lookup_md body=73 status=ok
// SIG undefined tls1_lookup_md(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_lookup_md(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = ssl_md(*(undefined4 *)(param_1 + 0x10));
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (param_2 != (longlong *)0x0) {
    *param_2 = lVar1;
  }
  return 1;
}



// FUNCTION 143cbaae0 tls1_new body=60 status=ok
// SIG undefined tls1_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_new(longlong param_1)

{
  int iVar1;
  
  iVar1 = ssl3_new();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cbab20 tls1_process_sigalgs body=246 status=ok
// SIG undefined tls1_process_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_process_sigalgs(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xa8);
  lVar1 = *(longlong *)(param_1 + 0x488);
  puVar6 = (undefined8 *)(lVar5 + 0x310);
  uVar3 = tls1_set_shared_sigalgs();
  if ((int)uVar3 != 0) {
    uVar4 = 0;
    *puVar6 = 0;
    *(undefined8 *)(lVar5 + 0x318) = 0;
    *(undefined8 *)(lVar5 + 800) = 0;
    *(undefined8 *)(lVar5 + 0x328) = 0;
    *(undefined4 *)(lVar5 + 0x330) = 0;
    if (*(longlong *)(lVar1 + 0x1c0) != 0) {
      do {
        lVar5 = *(longlong *)(*(longlong *)(lVar1 + 0x1b8) + uVar4 * 8);
        if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
              (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
            (*(int *)(lVar5 + 0x14) != 6)) &&
           ((lVar5 = (longlong)*(int *)(lVar5 + 0x18), *(int *)((longlong)puVar6 + lVar5 * 4) == 0
            && (iVar2 = ssl_cert_is_disabled(lVar5), iVar2 == 0)))) {
          *(undefined4 *)((longlong)puVar6 + lVar5 * 4) = 0x102;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(ulonglong *)(lVar1 + 0x1c0));
    }
    return 1;
  }
  return uVar3;
}



// FUNCTION 143cbac20 tls1_save_sigalgs body=122 status=ok
// SIG undefined tls1_save_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_save_sigalgs(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x488) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (param_3 != 0) {
    uVar2 = tls1_save_u16(param_2,lVar1 + 0x2f0,lVar1 + 0x300);
    return uVar2;
  }
  uVar2 = tls1_save_u16(param_2,lVar1 + 0x2e8,lVar1 + 0x2f8);
  return uVar2;
}



// FUNCTION 143cbaca0 tls1_save_u16 body=302 status=ok
// SIG undefined tls1_save_u16(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_save_u16(undefined8 *param_1,longlong *param_2,ulonglong *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  
  uVar7 = 0x143cbacbb;
  uVar5 = param_1[1];
  if ((uVar5 != 0) && ((uVar5 & 1) == 0)) {
    uVar5 = uVar5 >> 1;
    lVar4 = CRYPTO_malloc(uVar5 * 2,"ssl\\t1_lib.c",0x6c6);
    if (lVar4 == 0) {
      ERR_put_error(0x14,0x274,0x41,"ssl\\t1_lib.c",0x6c7,uVar7);
    }
    else {
      uVar6 = 0;
      if (uVar5 != 0) {
        do {
          if ((ulonglong)param_1[1] < 2) break;
          puVar3 = (undefined1 *)*param_1;
          uVar1 = *puVar3;
          uVar2 = puVar3[1];
          *param_1 = puVar3 + 2;
          param_1[1] = param_1[1] - 2;
          *(ushort *)(lVar4 + uVar6 * 2) = CONCAT11(uVar1,uVar2);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar5);
      }
      if (uVar6 == uVar5) {
        CRYPTO_free(*param_2,"ssl\\t1_lib.c",0x6d2);
        *param_2 = lVar4;
        *param_3 = uVar5;
        return 1;
      }
      CRYPTO_free(lVar4,"ssl\\t1_lib.c",0x6ce);
    }
  }
  return 0;
}



// FUNCTION 143cbadd0 tls1_set_cert_validity body=237 status=ok
// SIG undefined tls1_set_cert_validity(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void tls1_set_cert_validity(undefined8 param_1)

{
  FUN_143cb9da0(param_1,0,0,0,0,0x143cbaddc);
  FUN_143cb9da0(param_1,0,0,0,1);
  FUN_143cb9da0(param_1,0,0,0,2);
  FUN_143cb9da0(param_1,0,0,0,3);
  FUN_143cb9da0(param_1,0,0,0,4);
  FUN_143cb9da0(param_1,0,0,0,5);
  FUN_143cb9da0(param_1,0,0,0,6);
  FUN_143cb9da0(param_1,0,0,0,7);
  FUN_143cb9da0(param_1,0,0,0,8);
  return;
}



// FUNCTION 143cbaec0 tls1_set_groups body=313 status=ok
// SIG undefined tls1_set_groups(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_groups(longlong *param_1,ulonglong *param_2,longlong param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  short sVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cbaee4;
  uVar8 = 0;
  lVar2 = CRYPTO_malloc(param_4 * 2,"ssl\\t1_lib.c",0x15a);
  if (lVar2 == 0) {
    ERR_put_error(0x14,0x275,0x41,"ssl\\t1_lib.c",0x15b,uVar9);
    uVar9 = 0;
  }
  else {
    uVar6 = uVar8;
    uVar7 = uVar8;
    if (param_4 != 0) {
      do {
        uVar3 = uVar8;
        uVar5 = uVar8;
        do {
          if (*(int *)((longlong)&DAT_145d4b050 + uVar3) == *(int *)(param_3 + uVar7 * 4)) {
            sVar4 = (short)uVar5 + 1;
            goto LAB_143cbaf7e;
          }
          uVar5 = uVar5 + 1;
          uVar3 = uVar3 + 0xc;
        } while (uVar3 < 0x168);
        sVar4 = 0;
LAB_143cbaf7e:
        uVar1 = 1 << ((byte)sVar4 & 0x1f);
        if ((sVar4 == 0) || (((uint)uVar6 & uVar1) != 0)) {
          CRYPTO_free(lVar2,"ssl\\t1_lib.c",0x165);
          return 0;
        }
        *(short *)(lVar2 + uVar7 * 2) = sVar4;
        uVar7 = uVar7 + 1;
        uVar6 = (ulonglong)((uint)uVar6 | uVar1);
      } while (uVar7 < param_4);
    }
    CRYPTO_free(*param_1,"ssl\\t1_lib.c",0x16b);
    *param_1 = lVar2;
    uVar9 = 1;
    *param_2 = param_4;
  }
  return uVar9;
}



// FUNCTION 143cbb000 tls1_set_groups_list body=413 status=ok
// SIG undefined tls1_set_groups_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong tls1_set_groups_list(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  short sVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 auStack_e8 [32];
  ulonglong *local_c8;
  ulonglong local_b8;
  int aiStack_b0 [30];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar8 = 0;
  local_b8 = 0;
  local_c8 = &local_b8;
  uVar3 = CONF_parse_list(param_3,0x3a,1,nid_cb);
  uVar1 = local_b8;
  if ((int)uVar3 != 0) {
    if (param_1 == (longlong *)0x0) {
      uVar3 = 1;
    }
    else {
      lVar4 = CRYPTO_malloc(local_b8 * 2,"ssl\\t1_lib.c",0x15a);
      if (lVar4 == 0) {
        local_c8 = (ulonglong *)CONCAT44(local_c8._4_4_,0x15b);
        ERR_put_error(0x14,0x275,0x41,"ssl\\t1_lib.c");
        uVar3 = uVar8;
      }
      else {
        uVar3 = uVar8;
        uVar9 = uVar8;
        if (uVar1 != 0) {
          do {
            uVar5 = uVar8;
            uVar7 = uVar8;
            do {
              if (*(int *)((longlong)&DAT_145d4b050 + uVar5) == aiStack_b0[uVar9]) {
                sVar6 = (short)uVar7 + 1;
                goto LAB_143cbb10d;
              }
              uVar7 = uVar7 + 1;
              uVar5 = uVar5 + 0xc;
            } while (uVar5 < 0x168);
            sVar6 = 0;
LAB_143cbb10d:
            uVar2 = 1 << ((byte)sVar6 & 0x1f);
            if ((sVar6 == 0) || (((uint)uVar3 & uVar2) != 0)) {
              CRYPTO_free(lVar4,"ssl\\t1_lib.c",0x165);
              return 0;
            }
            *(short *)(lVar4 + uVar9 * 2) = sVar6;
            uVar9 = uVar9 + 1;
            uVar3 = (ulonglong)((uint)uVar3 | uVar2);
          } while (uVar9 < uVar1);
        }
        CRYPTO_free(*param_1,"ssl\\t1_lib.c",0x16b);
        *param_1 = lVar4;
        uVar3 = 1;
        *param_2 = uVar1;
      }
    }
  }
  return uVar3;
}



// FUNCTION 143cbb1a0 tls1_set_peer_legacy_sigalg body=89 status=ok
// SIG undefined tls1_set_peer_legacy_sigalg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_peer_legacy_sigalg(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res18 [4];
  
  lVar1 = ssl_cert_lookup_by_pkey(param_2,local_res18);
  if (lVar1 != 0) {
    lVar1 = tls1_get_legacy_sigalg(param_1,local_res18[0]);
    if (lVar1 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308) = lVar1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cbb200 tls1_set_server_sigalgs body=671 status=ok
// SIG undefined tls1_set_server_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_server_sigalgs(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1b8),"ssl\\t1_lib.c",0x495);
  uVar8 = 0;
  uVar13 = 0x310;
  uVar6 = 0x310;
  *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1b8) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1c0) = 0;
  do {
    *(undefined4 *)(uVar6 + *(longlong *)(param_1 + 0xa8)) = 0;
    uVar6 = uVar6 + 4;
  } while (uVar6 < 0x334);
  lVar4 = *(longlong *)(param_1 + 0xa8);
  if ((*(longlong *)(lVar4 + 0x2f0) != 0) || (*(longlong *)(lVar4 + 0x2e8) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x488);
    iVar3 = tls1_set_shared_sigalgs(param_1);
    if (iVar3 == 0) {
      uVar7 = 0x50;
      uVar14 = 0x4b7;
      uVar12 = 0x44;
    }
    else {
      *(undefined8 *)(lVar4 + 0x310) = 0;
      *(undefined8 *)(lVar4 + 0x318) = 0;
      *(undefined8 *)(lVar4 + 800) = 0;
      *(undefined8 *)(lVar4 + 0x328) = 0;
      *(undefined4 *)(lVar4 + 0x330) = 0;
      if (*(longlong *)(lVar1 + 0x1c0) != 0) {
        do {
          lVar11 = *(longlong *)(*(longlong *)(lVar1 + 0x1b8) + uVar8 * 8);
          if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
                (iVar3 = **(int **)(param_1 + 8), iVar3 < 0x304)) || (iVar3 == 0x10000)) ||
              (*(int *)(lVar11 + 0x14) != 6)) &&
             ((lVar11 = (longlong)*(int *)(lVar11 + 0x18), *(int *)(lVar4 + 0x310 + lVar11 * 4) == 0
              && (iVar3 = ssl_cert_is_disabled(lVar11), iVar3 == 0)))) {
            *(undefined4 *)(lVar4 + 0x310 + lVar11 * 4) = 0x102;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(ulonglong *)(lVar1 + 0x1c0));
      }
      if (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x1b8) != 0) {
        return 1;
      }
      uVar14 = 0x4bf;
      uVar7 = 0x28;
      uVar12 = 0x178;
    }
    ossl_statem_fatal(param_1,uVar7,0x14f,uVar12,"ssl\\t1_lib.c",uVar14);
    return 0;
  }
  lVar4 = *(longlong *)(param_1 + 0x488);
  uVar2 = *(uint *)(lVar4 + 0x1c) & 0x30000;
  uVar6 = uVar8;
  if (uVar2 == 0x10000) {
    uVar9 = 1;
  }
  else {
    if (uVar2 == 0x20000) {
      puVar10 = &DAT_145d4b206;
      uVar9 = 1;
      goto LAB_143cbb333;
    }
    if (uVar2 != 0x30000) {
      if ((*(int *)(param_1 + 0x38) == 1) &&
         (puVar10 = *(undefined2 **)(lVar4 + 0x1a8), puVar10 != (undefined2 *)0x0)) {
        uVar9 = *(ulonglong *)(lVar4 + 0x1b0);
      }
      else {
        puVar10 = *(undefined2 **)(lVar4 + 0x198);
        if (puVar10 == (undefined2 *)0x0) {
          puVar10 = &DAT_145d4b1d0;
          uVar9 = 0x1a;
        }
        else {
          uVar9 = *(ulonglong *)(lVar4 + 0x1a0);
        }
      }
      goto LAB_143cbb333;
    }
    uVar9 = 2;
  }
  puVar10 = &DAT_145d4b204;
LAB_143cbb333:
  do {
    lVar4 = tls1_get_legacy_sigalg(param_1,uVar6 & 0xffffffff);
    if ((lVar4 != 0) && (uVar9 != 0)) {
      uVar5 = uVar8;
      do {
        if (*(short *)(lVar4 + 8) == puVar10[uVar5]) {
          *(undefined4 *)(uVar13 + *(longlong *)(param_1 + 0xa8)) = 2;
          break;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar9);
    }
    uVar13 = uVar13 + 4;
    uVar6 = uVar6 + 1;
    if (0x333 < uVar13) {
      return 1;
    }
  } while( true );
}



// FUNCTION 143cbb4a0 tls1_set_shared_sigalgs body=730 status=ok
// SIG undefined tls1_set_shared_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_shared_sigalgs(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  short *psVar3;
  undefined **ppuVar4;
  int iVar5;
  undefined **ppuVar6;
  short *psVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  short *psVar14;
  short *psVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined8 in_stack_ffffffffffffff98;
  undefined4 uVar20;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  uVar11 = *(uint *)(lVar1 + 0x1c) & 0x30000;
  CRYPTO_free(*(undefined8 *)(lVar1 + 0x1b8),"ssl\\t1_lib.c",0x692);
  uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
  ppuVar8 = (undefined **)0x0;
  *(undefined8 *)(lVar1 + 0x1b8) = 0;
  *(undefined8 *)(lVar1 + 0x1c0) = 0;
  if (((*(int *)(param_1 + 0x38) == 0) &&
      (psVar14 = *(short **)(lVar1 + 0x1a8), psVar14 != (short *)0x0)) && (uVar11 == 0)) {
    ppuVar16 = *(undefined ***)(lVar1 + 0x1b0);
  }
  else {
    psVar14 = *(short **)(lVar1 + 0x198);
    if ((psVar14 == (short *)0x0) || (uVar11 != 0)) {
      lVar2 = *(longlong *)(param_1 + 0x488);
      uVar10 = *(uint *)(lVar2 + 0x1c) & 0x30000;
      if (uVar10 == 0x10000) {
        ppuVar16 = (undefined **)0x1;
      }
      else {
        if (uVar10 == 0x20000) {
          psVar14 = &DAT_145d4b206;
          ppuVar16 = (undefined **)0x1;
          goto LAB_143cbb5cb;
        }
        if (uVar10 != 0x30000) {
          if ((*(int *)(param_1 + 0x38) == 0) &&
             (psVar14 = *(short **)(lVar2 + 0x1a8), psVar14 != (short *)0x0)) {
            ppuVar16 = *(undefined ***)(lVar2 + 0x1b0);
          }
          else {
            psVar14 = *(short **)(lVar2 + 0x198);
            if (psVar14 == (short *)0x0) {
              psVar14 = &DAT_145d4b1d0;
              ppuVar16 = (undefined **)0x1a;
            }
            else {
              ppuVar16 = *(undefined ***)(lVar2 + 0x1a0);
            }
          }
          goto LAB_143cbb5cb;
        }
        ppuVar16 = (undefined **)0x2;
      }
      psVar14 = &DAT_145d4b204;
    }
    else {
      ppuVar16 = *(undefined ***)(lVar1 + 0x1a0);
    }
  }
LAB_143cbb5cb:
  ppuVar18 = ppuVar8;
  ppuVar19 = ppuVar8;
  if (((*(uint *)(param_1 + 0x5c4) & 0x400000) == 0) && (uVar11 == 0)) {
    psVar3 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar4 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    ppuVar17 = ppuVar16;
    psVar15 = psVar14;
    ppuVar16 = ppuVar4;
    psVar14 = psVar3;
  }
  else {
    psVar15 = *(short **)(*(longlong *)(param_1 + 0xa8) + 0x2e8);
    ppuVar17 = *(undefined ***)(*(longlong *)(param_1 + 0xa8) + 0x2f8);
    psVar3 = psVar14;
    ppuVar4 = ppuVar16;
  }
  do {
    if (ppuVar4 == (undefined **)0x0) {
      uVar9 = 0;
      if (ppuVar18 != (undefined **)0x0) {
        ppuVar8 = (undefined **)CRYPTO_malloc((longlong)ppuVar18 * 8,"ssl\\t1_lib.c",0x6ab);
        if (ppuVar8 == (undefined **)0x0) {
          ERR_put_error(0x14,0x277,0x41,"ssl\\t1_lib.c",CONCAT44(uVar20,0x6ac));
          return 0;
        }
        uVar9 = tls12_shared_sigalgs(param_1,ppuVar8,psVar14,ppuVar16,psVar15,ppuVar17);
      }
      *(undefined ***)(lVar1 + 0x1b8) = ppuVar8;
      *(undefined8 *)(lVar1 + 0x1c0) = uVar9;
      return 1;
    }
    ppuVar12 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
    ppuVar6 = ppuVar8;
    do {
      ppuVar13 = ppuVar12;
      if (*(short *)(ppuVar12 + 1) == *psVar3) break;
      ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
      ppuVar12 = ppuVar12 + 5;
      ppuVar13 = ppuVar8;
    } while (ppuVar6 < (undefined **)0x1a);
    iVar5 = tls12_sigalg_allowed(param_1,0x5000c,ppuVar13);
    uVar20 = (undefined4)((ulonglong)in_stack_ffffffffffffff98 >> 0x20);
    if ((iVar5 != 0) && (ppuVar17 != (undefined **)0x0)) {
      psVar7 = psVar15;
      ppuVar6 = ppuVar8;
      do {
        if (*psVar3 == *psVar7) {
          ppuVar18 = (undefined **)((longlong)ppuVar18 + 1);
          if (ppuVar19 != (undefined **)0x0) {
            *ppuVar19 = (undefined *)ppuVar13;
            ppuVar19 = ppuVar19 + 1;
          }
          break;
        }
        ppuVar6 = (undefined **)((longlong)ppuVar6 + 1);
        psVar7 = psVar7 + 1;
      } while (ppuVar6 < ppuVar17);
    }
    psVar3 = psVar3 + 1;
    ppuVar4 = (undefined **)((longlong)ppuVar4 + -1);
  } while( true );
}



// FUNCTION 143cbb780 tls1_set_sigalgs body=361 status=ok
// SIG undefined tls1_set_sigalgs(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls1_set_sigalgs(longlong param_1,int *param_2,ulonglong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined **ppuVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  
  uVar9 = 0x143cbb793;
  if ((param_3 & 1) != 0) {
    return 0;
  }
  uVar8 = param_3 >> 1;
  puVar3 = (undefined2 *)CRYPTO_malloc(uVar8 * 2,"ssl\\t1_lib.c",0x7c7);
  if (puVar3 == (undefined2 *)0x0) {
    ERR_put_error(0x14,0x278,0x41,"ssl\\t1_lib.c",0x7c8,uVar9);
    uVar9 = 0;
  }
  else {
    uVar6 = 0;
    puVar7 = puVar3;
    if (param_3 != 0) {
      do {
        iVar2 = *param_2;
        uVar5 = 0;
        piVar1 = param_2 + 1;
        param_2 = param_2 + 2;
        ppuVar4 = &PTR_s_ecdsa_secp256r1_sha256_145d4b230;
        do {
          if ((*(int *)((longlong)ppuVar4 + 0xc) == iVar2) &&
             (*(int *)((longlong)ppuVar4 + 0x14) == *piVar1)) {
            *puVar7 = *(undefined2 *)(ppuVar4 + 1);
            puVar7 = puVar7 + 1;
            break;
          }
          uVar5 = uVar5 + 1;
          ppuVar4 = ppuVar4 + 5;
        } while (uVar5 < 0x1a);
        if (uVar5 == 0x1a) {
          CRYPTO_free(puVar3,"ssl\\t1_lib.c",0x7ea);
          return 0;
        }
        uVar6 = uVar6 + 2;
      } while (uVar6 < param_3);
    }
    if (param_4 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x7e2);
      *(undefined2 **)(param_1 + 0x198) = puVar3;
      *(ulonglong *)(param_1 + 0x1a0) = uVar8;
    }
    else {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x7de);
      *(undefined2 **)(param_1 + 0x1a8) = puVar3;
      *(ulonglong *)(param_1 + 0x1b0) = uVar8;
    }
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 143cbb8f0 tls1_set_sigalgs_list body=354 status=ok
// SIG undefined tls1_set_sigalgs_list(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls1_set_sigalgs_list(longlong param_1,undefined8 param_2,int param_3)

{
  size_t _Size;
  longlong lVar1;
  undefined8 uVar2;
  void *_Dst;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  longlong local_a8;
  undefined1 local_a0 [104];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  local_a8 = 0;
  local_b8 = &local_a8;
  uVar2 = CONF_parse_list(param_2,0x3a,1,sig_cb);
  lVar1 = local_a8;
  if ((int)uVar2 != 0) {
    if (param_1 == 0) {
      uVar2 = 1;
    }
    else {
      _Size = local_a8 * 2;
      _Dst = (void *)CRYPTO_malloc(_Size,"ssl\\t1_lib.c",0x7ad);
      if (_Dst == (void *)0x0) {
        local_b8 = (longlong *)CONCAT44(local_b8._4_4_,0x7ae);
        ERR_put_error(0x14,0x276,0x41,"ssl\\t1_lib.c");
        uVar2 = 0;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,local_a0,_Size);
        if (param_3 == 0) {
          CRYPTO_free(*(undefined8 *)(param_1 + 0x198),"ssl\\t1_lib.c",0x7b8);
          *(void **)(param_1 + 0x198) = _Dst;
          *(longlong *)(param_1 + 0x1a0) = lVar1;
        }
        else {
          CRYPTO_free(*(undefined8 *)(param_1 + 0x1a8),"ssl\\t1_lib.c",0x7b4);
          *(void **)(param_1 + 0x1a8) = _Dst;
          *(longlong *)(param_1 + 0x1b0) = lVar1;
        }
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143cbba60 tls1_shared_group body=641 status=ok
// SIG undefined tls1_shared_group(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong tls1_shared_group(longlong param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined1 local_res8;
  undefined1 local_res9;
  int local_res10;
  undefined8 uVar12;
  
  uVar12 = 0x143cbba7e;
  uVar10 = 0;
  if (*(int *)(param_1 + 0x38) == 0) {
    return 0;
  }
  local_res10 = param_2;
  if (param_2 == -2) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000) != 0) {
      iVar5 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x18);
      if (iVar5 == 0x300c02b) {
        return 0x17;
      }
      if (iVar5 != 0x300c02c) {
        return 0;
      }
      return 0x18;
    }
    local_res10 = 0;
  }
  if ((*(uint *)(param_1 + 0x5c4) & 0x400000) == 0) {
    puVar9 = *(undefined2 **)(*(longlong *)(param_1 + 0x508) + 0x178);
    uVar8 = *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x170);
    uVar4 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
    if (uVar4 == 0x10000) {
      uVar6 = 1;
    }
    else {
      if (uVar4 == 0x20000) {
        puVar7 = &DAT_145d4b1ce;
        uVar6 = 1;
        goto LAB_143cbbbfd;
      }
      if (uVar4 != 0x30000) {
        puVar7 = *(undefined2 **)(param_1 + 0x690);
        if (puVar7 == (undefined2 *)0x0) {
          puVar7 = &DAT_145d4b1c0;
          uVar6 = 5;
        }
        else {
          uVar6 = *(ulonglong *)(param_1 + 0x688);
        }
        goto LAB_143cbbbfd;
      }
      uVar6 = 2;
    }
    puVar7 = &DAT_145d4b1cc;
    goto LAB_143cbbbfd;
  }
  uVar4 = *(uint *)(*(longlong *)(param_1 + 0x488) + 0x1c) & 0x30000;
  if (uVar4 == 0x10000) {
    uVar8 = 1;
LAB_143cbbb5b:
    puVar9 = &DAT_145d4b1cc;
  }
  else if (uVar4 == 0x20000) {
    puVar9 = &DAT_145d4b1ce;
    uVar8 = 1;
  }
  else {
    if (uVar4 == 0x30000) {
      uVar8 = 2;
      goto LAB_143cbbb5b;
    }
    puVar9 = *(undefined2 **)(param_1 + 0x690);
    if (puVar9 == (undefined2 *)0x0) {
      puVar9 = &DAT_145d4b1c0;
      uVar8 = 5;
    }
    else {
      uVar8 = *(ulonglong *)(param_1 + 0x688);
    }
  }
  puVar7 = *(undefined2 **)(*(longlong *)(param_1 + 0x508) + 0x178);
  uVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x170);
LAB_143cbbbfd:
  uVar11 = uVar10;
  iVar5 = local_res10;
  if (uVar8 != 0) {
    do {
      uVar3 = 0;
      uVar1 = puVar9[uVar10];
      if (uVar6 != 0) {
        do {
          if (puVar7[uVar3] == uVar1) {
            if ((ushort)(uVar1 - 1) < 0x1e) {
              iVar5 = local_res10;
              if (&DAT_145d4b050 + ((ulonglong)uVar1 - 1) * 3 != (undefined4 *)0x0) {
                local_res8 = (undefined1)(uVar1 >> 8);
                local_res9 = (undefined1)uVar1;
                iVar2 = ssl_security(param_1,0x20005,
                                     *(undefined4 *)(&DAT_145d4b054 + ((ulonglong)uVar1 - 1) * 0xc),
                                     (&DAT_145d4b050)[((ulonglong)uVar1 - 1) * 3],&local_res8,uVar12
                                    );
                iVar5 = local_res10;
                if (iVar2 != 0) {
                  if (local_res10 == (int)uVar11) {
                    return (ulonglong)uVar1;
                  }
                  uVar11 = (ulonglong)((int)uVar11 + 1);
                }
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar6);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar8);
  }
  if (iVar5 != -1) {
    return 0;
  }
  return uVar11 & 0xffff;
}



// FUNCTION 143cbbcf0 tls_choose_sigalg body=1318 status=ok
// SIG undefined tls_choose_sigalg(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_choose_sigalg(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined4 uVar8;
  longlong *plVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  short *local_res8;
  
  uVar13 = 0;
  uVar10 = 0xffffffff;
  iVar3 = -1;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = 0;
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60);
  if ((((uVar4 & 8) == 0) && (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)
     ) {
    lVar5 = *(longlong *)(param_1 + 0x488);
    uVar12 = uVar13;
    if (*(longlong *)(lVar5 + 0x1c0) != 0) {
      do {
        uVar13 = *(ulonglong *)(*(longlong *)(lVar5 + 0x1b8) + uVar12 * 8);
        iVar2 = *(int *)(uVar13 + 0xc);
        if (((((iVar2 != 0x40) && (iVar2 != 0x2a3)) &&
             ((*(int *)(uVar13 + 0x14) != 0x74 && (*(int *)(uVar13 + 0x14) != 6)))) &&
            ((iVar2 == 0 || (lVar5 = ssl_md(*(undefined4 *)(uVar13 + 0x10)), lVar5 != 0)))) &&
           (iVar2 = has_usable_cert(param_1,uVar13,0xffffffff), iVar2 != 0)) {
          if (*(int *)(uVar13 + 0x14) == 0x198) {
            if (iVar3 == -1) {
              uVar6 = EVP_PKEY_get0_EC_KEY(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0xa0));
              uVar6 = FUniqueNetIdString::GetBytes(uVar6);
              iVar3 = TMeshAttributeArraySet<int>::GetNumIndices(uVar6);
            }
            if ((*(int *)(uVar13 + 0x20) == 0) || (iVar3 == *(int *)(uVar13 + 0x20))) break;
          }
          else {
            if (*(int *)(uVar13 + 0x14) != 0x390) break;
            uVar6 = FNiagaraEmitterHandle::GetInstance
                              (*(undefined8 *)
                                (*(longlong *)(param_1 + 0x488) +
                                ((longlong)*(int *)(uVar13 + 0x18) + 1) * 0x28));
            iVar2 = rsa_pss_check_min_key_size(uVar6,uVar13);
            if (iVar2 != 0) break;
          }
        }
        lVar5 = *(longlong *)(param_1 + 0x488);
        uVar12 = uVar12 + 1;
      } while (uVar12 < *(ulonglong *)(lVar5 + 0x1c0));
    }
    uVar11 = uVar13;
    if (uVar12 == *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x1c0)) {
      if (param_2 == 0) {
        return 1;
      }
      uVar6 = 0xa1d;
LAB_143cbbe8f:
      uVar8 = 0x28;
      uVar14 = 0x76;
LAB_143cbbe98:
      ossl_statem_fatal(param_1,uVar8,0x201,uVar14,"ssl\\t1_lib.c",uVar6);
      return 0;
    }
  }
  else {
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0xab) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x38) == 0) {
      plVar9 = *(longlong **)(param_1 + 0x488);
      uVar1 = (uint)(((*plVar9 - (longlong)plVar9) + -0x20) / 0x28);
      if (8 < uVar1) {
        return 1;
      }
      if (plVar9[(longlong)(int)uVar1 * 5 + 4] == 0) {
        return 1;
      }
      if (plVar9[(longlong)(int)uVar1 * 5 + 5] == 0) {
        return 1;
      }
    }
    if ((uVar4 & 2) == 0) {
      uVar11 = tls1_get_legacy_sigalg(param_1,0xffffffff);
      if (uVar11 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar6 = 0xa82;
        uVar8 = 0x50;
        uVar14 = 0x44;
        goto LAB_143cbbe98;
      }
    }
    else if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e8) == 0) {
      uVar11 = tls1_get_legacy_sigalg(param_1,0xffffffff);
      if (uVar11 == 0) {
        if (param_2 == 0) {
          return 1;
        }
        uVar6 = 0xa69;
        uVar8 = 0x50;
        uVar14 = 0x44;
        goto LAB_143cbbe98;
      }
      uVar12 = tls12_get_psigalgs(param_1,1,&local_res8);
      if (uVar12 != 0) {
        do {
          if ((*(short *)(uVar11 + 8) == *local_res8) &&
             (iVar3 = has_usable_cert(param_1,uVar11,*(undefined4 *)(uVar11 + 0x18)), iVar3 != 0))
          break;
          uVar13 = uVar13 + 1;
          local_res8 = local_res8 + 1;
        } while (uVar13 < uVar12);
      }
      if (uVar13 == uVar12) {
        if (param_2 == 0) {
          return 1;
        }
        uVar6 = 0xa79;
        uVar8 = 0x2f;
        uVar14 = 0x172;
        goto LAB_143cbbe98;
      }
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x488);
      uVar4 = uVar10;
      if ((*(uint *)((longlong)plVar9 + 0x1c) & 0x30000) != 0) {
        uVar6 = EVP_PKEY_get0_EC_KEY(plVar9[0x14]);
        uVar6 = FUniqueNetIdString::GetBytes(uVar6);
        uVar4 = TMeshAttributeArraySet<int>::GetNumIndices(uVar6);
        plVar9 = *(longlong **)(param_1 + 0x488);
      }
      uVar12 = uVar13;
      if (plVar9[0x38] != 0) {
        do {
          uVar13 = *(ulonglong *)(plVar9[0x37] + uVar12 * 8);
          uVar10 = *(uint *)(uVar13 + 0x18);
          uVar11 = (ulonglong)(int)uVar10;
          if (*(int *)(param_1 + 0x38) == 0) {
            if ((uint)(((*plVar9 - (longlong)plVar9) + -0x20) / 0x28) == uVar10) {
LAB_143cbc03e:
              uVar10 = (uint)uVar11;
              iVar3 = has_usable_cert(param_1,uVar13,uVar11 & 0xffffffff);
              if (iVar3 != 0) {
                if (*(int *)(uVar13 + 0x14) == 0x390) {
                  uVar6 = FNiagaraEmitterHandle::GetInstance
                                    (*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x488) +
                                      ((longlong)(int)uVar10 + 1) * 0x28));
                  iVar3 = rsa_pss_check_min_key_size(uVar6,uVar13);
                  if (iVar3 == 0) goto LAB_143cbc098;
                }
                if ((uVar4 == 0xffffffff) || (*(uint *)(uVar13 + 0x20) == uVar4)) break;
              }
            }
          }
          else {
            piVar7 = (int *)ssl_cert_lookup_by_idx(uVar11);
            if (piVar7 != (int *)0x0) {
              lVar5 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
              if (((piVar7[1] & *(uint *)(lVar5 + 0x20)) != 0) &&
                 ((*piVar7 != 0x390 || ((*(byte *)(lVar5 + 0x1c) & 1) == 0)))) {
                lVar5 = uVar11 * 4;
                uVar11 = 0xffffffff;
                if ((*(byte *)(*(longlong *)(param_1 + 0xa8) + 0x310 + lVar5) & 1) != 0) {
                  uVar11 = (ulonglong)uVar10;
                }
                uVar10 = (uint)uVar11;
                if (uVar10 != 0xffffffff) goto LAB_143cbc03e;
                goto LAB_143cbc098;
              }
            }
            uVar10 = 0xffffffff;
          }
LAB_143cbc098:
          plVar9 = *(longlong **)(param_1 + 0x488);
          uVar12 = uVar12 + 1;
        } while (uVar12 < (ulonglong)plVar9[0x38]);
      }
      lVar5 = *(longlong *)(param_1 + 0x488);
      if (uVar12 == *(ulonglong *)(lVar5 + 0x1c0)) {
        if (param_2 == 0) {
          return 1;
        }
        uVar6 = 0xa5b;
        goto LAB_143cbbe8f;
      }
      uVar11 = uVar13;
      if (uVar10 != 0xffffffff) goto LAB_143cbc0ea;
    }
  }
  uVar10 = *(uint *)(uVar11 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x488);
  uVar13 = uVar11;
LAB_143cbc0ea:
  *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) = lVar5 + (longlong)(int)uVar10 * 0x28 + 0x20
  ;
  **(undefined8 **)(param_1 + 0x488) = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d8) = uVar13;
  return 1;
}



// FUNCTION 143cbc220 tls_curve_allowed body=104 status=ok
// SIG undefined tls_curve_allowed(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_curve_allowed(undefined8 param_1,uint param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res10;
  undefined1 local_res11;
  
  if ((ushort)((short)param_2 - 1U) < 0x1e) {
    lVar1 = (ulonglong)(param_2 & 0xffff) * 3 + -3;
    if (&DAT_145d4b050 + lVar1 != (undefined4 *)0x0) {
      local_res10 = (undefined1)(param_2 >> 8);
      local_res11 = (undefined1)param_2;
      uVar2 = ssl_security(param_1,param_3,*(undefined4 *)(&DAT_145d4b054 + lVar1 * 4),
                           (&DAT_145d4b050)[lVar1],&local_res10);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 143cbc290 tls_decrypt_ticket body=1277 status=ok
// SIG undefined tls_decrypt_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int tls_decrypt_ticket(longlong param_1,longlong *param_2,ulonglong param_3,void *param_4,
                      size_t param_5,longlong *param_6)

{
  code *pcVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  ulonglong local_d0;
  int local_c8 [2];
  longlong *local_c0;
  longlong local_b8;
  int local_b0 [2];
  void *local_a8;
  longlong *local_a0;
  undefined1 local_98 [64];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cbc2a7;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar7 = 0;
  lVar6 = *(longlong *)(param_1 + 0x738);
  iVar9 = 0;
  plVar3 = (longlong *)0x0;
  lVar4 = 0;
  local_a0 = param_6;
  iVar8 = 4;
  local_c0 = param_2;
  local_a8 = param_4;
  if (param_3 == 0) {
    iVar8 = 3;
    param_2 = param_2;
    goto LAB_143cbc666;
  }
  if ((((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar10 = **(int **)(param_1 + 8), iVar10 < 0x304)) || (iVar10 == 0x10000)) &&
      (*(longlong *)(param_1 + 0x6b0) != 0)) || (param_3 < 0x20)) goto LAB_143cbc666;
  plVar3 = (longlong *)HMAC_CTX_new();
  if (plVar3 == (longlong *)0x0) {
    iVar8 = 0;
    param_2 = local_c0;
    lVar4 = 0;
    goto LAB_143cbc666;
  }
  lVar4 = EVP_CIPHER_CTX_new();
  if (lVar4 == 0) {
    iVar8 = 0;
    param_2 = local_c0;
    goto LAB_143cbc666;
  }
  if (*(code **)(lVar6 + 0x218) == (code *)0x0) {
    if ((*param_2 == *(longlong *)(lVar6 + 0x200)) && (param_2[1] == *(longlong *)(lVar6 + 0x208)))
    {
      uVar5 = EVP_sha256();
      local_d8 = (longlong *)0x0;
      iVar8 = HMAC_Init_ex(plVar3,*(undefined8 *)(lVar6 + 0x210),0x20,uVar5);
      if (0 < iVar8) {
        lVar6 = *(longlong *)(lVar6 + 0x210);
        uVar5 = EVP_aes_256_cbc();
        local_d8 = param_2 + 2;
        iVar8 = EVP_DecryptInit_ex(lVar4,uVar5,0,lVar6 + 0x20);
        if (0 < iVar8) {
          if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
              (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar9 = 0, iVar8 != 0x10000)) {
            iVar9 = 1;
          }
          goto LAB_143cbc450;
        }
      }
      goto LAB_143cbc38c;
    }
  }
  else {
    local_d0 = local_d0 & 0xffffffff00000000;
    local_d8 = plVar3;
    iVar8 = (**(code **)(lVar6 + 0x218))(param_1,param_2,param_2 + 2,lVar4);
    if (iVar8 < 0) {
LAB_143cbc38c:
      iVar8 = 1;
      param_2 = local_c0;
      goto LAB_143cbc666;
    }
    if (iVar8 != 0) {
      iVar9 = 0;
      if (iVar8 == 2) {
        iVar9 = 1;
      }
LAB_143cbc450:
      lVar6 = HMAC_size(plVar3);
      if (lVar6 == 0) {
        iVar8 = 1;
        param_2 = local_c0;
      }
      else {
        iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
        param_2 = local_c0;
        if ((ulonglong)((iVar8 + 0x10) + lVar6) < param_3) {
          param_3 = param_3 - lVar6;
          iVar8 = HMAC_Update(plVar3,local_c0,param_3);
          if ((0 < iVar8) && (iVar8 = HMAC_Final(plVar3,local_98,0), 0 < iVar8)) {
            iVar8 = FUN_14004ffa0(local_98,param_3 + (longlong)param_2,lVar6);
            if (iVar8 != 0) {
              iVar8 = 4;
              goto LAB_143cbc666;
            }
            iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
            local_b8 = (longlong)param_2 + (longlong)iVar8 + 0x10;
            iVar8 = EVP_CIPHER_CTX_iv_length(lVar4);
            param_3 = param_3 - (longlong)(iVar8 + 0x10);
            lVar6 = CRYPTO_malloc(param_3,"ssl\\t1_lib.c",0x571);
            if (lVar6 != 0) {
              local_d8 = (longlong *)CONCAT44(local_d8._4_4_,(int)param_3);
              iVar8 = EVP_DecryptUpdate(lVar4,lVar6,local_c8,local_b8);
              if (0 < iVar8) {
                iVar8 = EVP_DecryptFinal(lVar4,local_c8[0] + lVar6,local_b0);
                if (iVar8 < 1) {
                  CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x579);
                  iVar8 = 4;
                  lVar7 = 0;
                }
                else {
                  local_c8[0] = local_c8[0] + local_b0[0];
                  local_b8 = lVar6;
                  lVar7 = d2i_SSL_SESSION(0,&local_b8);
                  local_c8[0] = local_c8[0] + ((int)lVar6 - (int)local_b8);
                  CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x582);
                  if (lVar7 == 0) {
                    ERR_clear_error();
                    iVar8 = 4;
                  }
                  else if (local_c8[0] == 0) {
                    if (param_5 != 0) {
                      _guard_xfg_dispatch_icall_nop((void *)(lVar7 + 0x98),local_a8,param_5);
                      *(size_t *)(lVar7 + 0x90) = param_5;
                    }
                    iVar8 = iVar9 + 5;
                  }
                  else {
                    SSL_SESSION_free(lVar7);
                    iVar8 = 4;
                    lVar7 = 0;
                  }
                }
                goto LAB_143cbc666;
              }
            }
            CRYPTO_free(lVar6,"ssl\\t1_lib.c",0x574);
          }
          iVar8 = 1;
          lVar7 = 0;
        }
        else {
          iVar8 = 4;
        }
      }
      goto LAB_143cbc666;
    }
  }
  iVar8 = 4;
  param_2 = local_c0;
LAB_143cbc666:
  iVar10 = 1;
  EVP_CIPHER_CTX_free(lVar4);
  HMAC_CTX_free(plVar3);
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x738) + 0x3b0);
  iVar9 = iVar8;
  if ((pcVar1 != (code *)0x0) && (iVar8 - 3U < 4)) {
    if (0x10 < param_3) {
      param_3 = 0x10;
    }
    local_d0 = *(undefined8 *)(*(longlong *)(param_1 + 0x738) + 0x3b8);
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,iVar8);
    iVar2 = (*pcVar1)(param_1,lVar7,param_2,param_3);
    iVar9 = iVar10;
    if (iVar2 != 0) {
      if (iVar2 == 1) {
        SSL_SESSION_free(lVar7);
        lVar7 = 0;
        iVar9 = 2;
      }
      else if (iVar2 == 2) {
        if (1 < iVar8 - 3U) {
          iVar8 = 4;
        }
        SSL_SESSION_free(lVar7);
        lVar7 = 0;
        iVar9 = iVar8;
      }
      else if ((iVar2 - 3U < 2) && (iVar8 - 5U < 2)) {
        iVar9 = (iVar2 != 3) + 5;
      }
    }
  }
  if (((*(longlong *)(param_1 + 0x6b0) == 0) ||
      ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
        (iVar8 = **(int **)(param_1 + 8), 0x303 < iVar8)) && (iVar8 != 0x10000)))) &&
     (((iVar9 - 3U & 0xfffffffc) == 0 && (iVar9 != 5)))) {
    *(undefined4 *)(param_1 + 0x670) = 1;
  }
  *local_a0 = lVar7;
  return iVar9;
}



// FUNCTION 143cbc790 tls_get_ticket_from_client body=180 status=ok
// SIG undefined tls_get_ticket_from_client(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_get_ticket_from_client(int *param_1,longlong param_2,undefined8 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  *param_3 = 0;
  param_1[0x19c] = 0;
  if ((0x300 < *param_1) && ((param_1[0x171] & 0x4000U) == 0)) {
    iVar2 = ssl_security(param_1,10,0,0,0,0x143cbc7a5);
    if ((iVar2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x288), *(int *)(lVar1 + 0x100) != 0)) {
      uVar3 = tls_decrypt_ticket(param_1,*(undefined8 *)(lVar1 + 0xf0),*(undefined8 *)(lVar1 + 0xf8)
                                 ,param_2 + 0x30,*(undefined8 *)(param_2 + 0x28),param_3);
      return uVar3;
    }
  }
  return 2;
}



// FUNCTION 143cbc850 tls_use_ticket body=61 status=ok
// SIG undefined tls_use_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_use_ticket(longlong param_1)

{
  undefined8 uVar1;
  
  if ((*(uint *)(param_1 + 0x5c4) & 0x4000) != 0) {
    return 0;
  }
  uVar1 = ssl_security(param_1,10,0,0,0);
  return uVar1;
}



// FUNCTION 143cbc890 PACKET_copy_bytes body=81 status=ok
// SIG undefined PACKET_copy_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PACKET_copy_bytes(longlong *param_1,void *param_2,ulonglong param_3)

{
  if (param_3 <= (ulonglong)param_1[1]) {
    _guard_xfg_dispatch_icall_nop(param_2,(void *)*param_1,param_3);
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 143cbc8f0 PACKET_get_length_prefixed_1 body=118 status=ok
// SIG undefined PACKET_get_length_prefixed_1(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PACKET_get_length_prefixed_1(longlong *param_1,longlong *param_2)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1[1] != 0) {
    uVar2 = param_1[1] - 1;
    uVar3 = (ulonglong)*(byte *)*param_1;
    pbVar1 = (byte *)*param_1 + 1;
    if (uVar3 <= uVar2) {
      *param_1 = (longlong)(pbVar1 + uVar3);
      param_1[1] = uVar2 - uVar3;
      *param_2 = (longlong)pbVar1;
      param_2[1] = uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cbc970 PACKET_get_length_prefixed_2 body=128 status=ok
// SIG undefined PACKET_get_length_prefixed_2(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 PACKET_get_length_prefixed_2(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  puVar1 = (undefined1 *)*param_1;
  if (1 < (ulonglong)param_1[1]) {
    uVar2 = param_1[1] - 2;
    uVar3 = (ulonglong)CONCAT11(*puVar1,puVar1[1]);
    if (uVar3 <= uVar2) {
      *param_1 = (longlong)(puVar1 + 2 + uVar3);
      param_1[1] = uVar2 - uVar3;
      *param_2 = (longlong)(puVar1 + 2);
      param_2[1] = uVar3;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cbc9f0 PACKET_get_sub_packet body=63 status=ok
// SIG undefined PACKET_get_sub_packet(void)

undefined8 PACKET_get_sub_packet(longlong *param_1,longlong *param_2,ulonglong param_3)

{
  if ((param_3 <= (ulonglong)param_1[1]) && (param_3 < 0x8000000000000000)) {
    *param_2 = *param_1;
    param_2[1] = param_3;
    *param_1 = *param_1 + param_3;
    param_1[1] = param_1[1] - param_3;
    return 1;
  }
  return 0;
}



// FUNCTION 143cbca30 construct_stateless_ticket body=1451 status=ok
// SIG undefined construct_stateless_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong construct_stateless_ticket
                    (longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined1 auStack_128 [32];
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  int local_f0 [2];
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  uint local_d8 [2];
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  undefined8 uStack_48;
  
  uStack_48 = 0x143cbca4c;
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  local_a8 = 0;
  pcVar6 = (char *)0x0;
  local_e8 = 0;
  local_b8 = *(longlong *)(param_1 + 0x738);
  local_dc = param_3;
  local_90 = param_4;
  iVar1 = i2d_SSL_SESSION(*(undefined8 *)(param_1 + 0x508),0);
  if ((iVar1 == 0) || (0xff00 < iVar1)) {
    local_100 = 0xefc;
    local_108 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x27d,0x44);
    pcVar7 = (char *)0x0;
    goto LAB_143cbcb5f;
  }
  local_e8 = CRYPTO_malloc((longlong)iVar1,"ssl\\statem\\statem_srvr.c",0xeff);
  if (local_e8 == 0) {
    local_100 = 0xf02;
    local_108 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x27d,0x41);
    pcVar6 = (char *)0x0;
    pcVar7 = (char *)0x0;
    goto LAB_143cbcb5f;
  }
  pcVar6 = (char *)EVP_CIPHER_CTX_new();
  local_f8 = (char *)HMAC_CTX_new();
  lVar4 = local_e8;
  if ((pcVar6 == (char *)0x0) || (local_f8 == (char *)0x0)) {
    local_100 = 0xf0a;
    uVar5 = 0x41;
  }
  else {
    local_d0 = local_e8;
    iVar2 = i2d_SSL_SESSION(*(undefined8 *)(param_1 + 0x508),&local_d0);
    if (iVar2 == 0) {
      local_100 = 0xf11;
    }
    else {
      local_a0 = lVar4;
      lVar4 = d2i_SSL_SESSION(0,&local_a0,iVar1);
      if (lVar4 != 0) {
        iVar2 = i2d_SSL_SESSION(lVar4,0);
        if ((iVar2 == 0) || (iVar1 < iVar2)) {
          local_100 = 0xf24;
        }
        else {
          local_d0 = local_e8;
          iVar1 = i2d_SSL_SESSION(lVar4,&local_d0);
          if (iVar1 != 0) {
            SSL_SESSION_free(lVar4);
            lVar4 = local_b8;
            pcVar8 = local_f8;
            if (*(code **)(local_b8 + 0x218) != (code *)0x0) {
              local_100 = 1;
              local_108 = local_f8;
              iVar1 = (**(code **)(local_b8 + 0x218))(param_1,&local_60,local_70,pcVar6);
              if (iVar1 == 0) {
                iVar1 = WPACKET_put_bytes__(param_2,0,4);
                if ((iVar1 != 0) && (iVar1 = WPACKET_put_bytes__(param_2,0,2), iVar1 != 0)) {
                  CRYPTO_free(local_e8,"ssl\\statem\\statem_srvr.c",0xf44);
                  EVP_CIPHER_CTX_free(pcVar6);
                  HMAC_CTX_free(pcVar8);
                  return 1;
                }
                local_100 = 0xf41;
                uVar5 = 0x44;
              }
              else {
                if (-1 < iVar1) {
                  iVar1 = EVP_CIPHER_CTX_iv_length(pcVar6);
LAB_143cbcdab:
                  iVar3 = create_ticket_prequel(param_1,param_2,local_dc,local_90);
                  pcVar7 = local_f8;
                  if (iVar3 == 0) goto LAB_143cbcb5f;
                  iVar3 = WPACKET_get_total_written(param_2,&local_80);
                  if (((iVar3 != 0) && (iVar3 = WPACKET_memcpy(param_2,&local_60,0x10), iVar3 != 0))
                     && (iVar1 = WPACKET_memcpy(param_2,local_70,(longlong)iVar1), iVar1 != 0)) {
                    iVar1 = WPACKET_reserve_bytes(param_2,(longlong)(iVar2 + 0x20),&local_c8);
                    if (iVar1 != 0) {
                      local_108 = (char *)CONCAT44(local_108._4_4_,iVar2);
                      iVar1 = EVP_EncryptUpdate(pcVar6,local_c8,local_f0,local_e8);
                      if ((((iVar1 != 0) &&
                           (iVar1 = WPACKET_allocate_bytes(param_2,(longlong)local_f0[0],&local_c0),
                           iVar1 != 0)) &&
                          ((local_c8 == local_c0 &&
                           ((iVar1 = EVP_EncryptFinal(pcVar6,local_f0[0] + local_c8,&local_e0),
                            iVar1 != 0 &&
                            (iVar1 = WPACKET_allocate_bytes(param_2,(longlong)local_e0,&local_c0),
                            iVar1 != 0)))))) &&
                         ((local_f0[0] + local_c8 == local_c0 &&
                          (((((local_f0[0] + local_e0 <= iVar2 + 0x20 &&
                              (iVar1 = WPACKET_get_total_written(param_2,&local_88), iVar1 != 0)) &&
                             (iVar1 = HMAC_Update(pcVar8,local_80 +
                                                         *(longlong *)
                                                          (*(longlong *)(param_1 + 0x88) + 8),
                                                  local_88 - local_80), iVar1 != 0)) &&
                            ((iVar1 = WPACKET_reserve_bytes(param_2,0x40,&local_b0), iVar1 != 0 &&
                             (iVar1 = HMAC_Final(pcVar8,local_b0,local_d8), iVar1 != 0)))) &&
                           ((local_d8[0] < 0x41 &&
                            ((iVar1 = WPACKET_allocate_bytes(param_2,local_d8[0],&local_78),
                             iVar1 != 0 && (local_b0 == local_78)))))))))) {
                        iVar1 = WPACKET_close(param_2);
                        if (iVar1 != 0) {
                          local_a8 = CONCAT44(local_a8._4_4_,1);
                          pcVar7 = local_f8;
                          goto LAB_143cbcb5f;
                        }
                        local_100 = 0xf86;
                        goto LAB_143cbcb3c;
                      }
                    }
                  }
                  local_100 = 0xf7f;
                  goto LAB_143cbcb3c;
                }
                local_100 = 0xf4b;
                uVar5 = 0xea;
              }
              local_108 = "ssl\\statem\\statem_srvr.c";
              ossl_statem_fatal(param_1,0x50,0x27d,uVar5);
              pcVar7 = pcVar8;
              goto LAB_143cbcb5f;
            }
            local_98 = EVP_aes_256_cbc();
            iVar1 = IStreamingManager::GetNumWantingResourcesID(local_98);
            iVar3 = RAND_bytes(local_70,iVar1);
            if (0 < iVar3) {
              local_108 = local_70;
              iVar3 = EVP_EncryptInit_ex(pcVar6,local_98,0,*(longlong *)(lVar4 + 0x210) + 0x20);
              if (iVar3 != 0) {
                uVar5 = EVP_sha256();
                pcVar8 = local_f8;
                local_108 = (char *)0x0;
                iVar3 = HMAC_Init_ex(local_f8,*(undefined8 *)(lVar4 + 0x210),0x20,uVar5);
                if (iVar3 != 0) {
                  local_60 = *(undefined4 *)(local_b8 + 0x200);
                  uStack_5c = *(undefined4 *)(local_b8 + 0x204);
                  uStack_58 = *(undefined4 *)(local_b8 + 0x208);
                  uStack_54 = *(undefined4 *)(local_b8 + 0x20c);
                  goto LAB_143cbcdab;
                }
              }
            }
            local_100 = 0xf5a;
            goto LAB_143cbcb3c;
          }
          local_100 = 0xf2b;
        }
        local_108 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x27d,0x44);
        SSL_SESSION_free(lVar4);
        pcVar7 = local_f8;
        goto LAB_143cbcb5f;
      }
      local_100 = 0xf1c;
    }
LAB_143cbcb3c:
    uVar5 = 0x44;
  }
  local_108 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,0x27d,uVar5);
  pcVar7 = local_f8;
LAB_143cbcb5f:
  CRYPTO_free(local_e8,"ssl\\statem\\statem_srvr.c",0xf8c);
  EVP_CIPHER_CTX_free(pcVar6);
  HMAC_CTX_free(pcVar7);
  return local_a8 & 0xffffffff;
}



// FUNCTION 143cbcfe0 create_ticket_prequel body=309 status=ok
// SIG undefined create_ticket_prequel(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
create_ticket_prequel(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  uVar4 = 1;
  if ((*(int *)(param_1 + 200) == 0) ||
     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0 &&
       (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)))) {
    uVar2 = *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x118);
  }
  else {
    uVar2 = 0;
  }
  iVar1 = WPACKET_put_bytes__(param_2,uVar2,4);
  if (iVar1 == 0) {
    uVar3 = CONCAT44(uVar4,0xecc);
  }
  else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
           (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) &&
          ((iVar1 != 0x10000 &&
           ((iVar1 = WPACKET_put_bytes__(param_2,param_3,4), iVar1 == 0 ||
            (iVar1 = WPACKET_sub_memcpy__(param_2,param_4,8), iVar1 == 0)))))) {
    uVar3 = CONCAT44(uVar4,0xed4);
  }
  else {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar3 = CONCAT44(uVar4,0xedc);
  }
  ossl_statem_fatal(param_1,0x50,0x27e,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
  return 0;
}



// FUNCTION 143cbd120 dtls_construct_hello_verify_request body=302 status=ok
// SIG undefined dtls_construct_hello_verify_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls_construct_hello_verify_request(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  uint local_res8 [2];
  undefined4 uVar5;
  
  uVar5 = 1;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 0xc0);
  if (((pcVar1 != (code *)0x0) &&
      (uVar5 = 1, iVar4 = (*pcVar1)(param_1,*(undefined8 *)(param_1 + 0xb0),local_res8), iVar4 != 0)
      ) && (local_res8[0] < 0x100)) {
    *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x100) = (ulonglong)local_res8[0];
    lVar2 = *(longlong *)(param_1 + 0xb0);
    uVar3 = *(undefined8 *)(lVar2 + 0x100);
    iVar4 = WPACKET_put_bytes__(param_2,0xfeff,2);
    if ((iVar4 != 0) && (iVar4 = WPACKET_sub_memcpy__(param_2,lVar2,uVar3,1), iVar4 != 0)) {
      return 1;
    }
    ossl_statem_fatal(param_1,0xffffffff,0x181,0x44,"ssl\\statem\\statem_srvr.c",
                      CONCAT44(uVar5,0x503));
    return 0;
  }
  ossl_statem_fatal(param_1,0xffffffff,0x181,400,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar5,0x4fb))
  ;
  return 0;
}



// FUNCTION 143cbd250 FUN_143cbd250 body=516 status=ok
// SIG undefined FUN_143cbd250(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
FUN_143cbd250(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  code *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *param_3 = 0;
    *param_4 = 0;
    return 1;
  default:
    ossl_statem_fatal(param_1,0x50,0x1af,0xec,"ssl\\statem\\statem_srvr.c",999,0x143cbd25a);
    return 0;
  case 0x15:
    *param_3 = dtls_construct_hello_verify_request;
    *param_4 = 3;
    return 1;
  case 0x16:
    *param_3 = tls_construct_server_hello;
    *param_4 = 2;
    return 1;
  case 0x17:
    *param_3 = tls_construct_server_certificate;
    *param_4 = 0xb;
    return 1;
  case 0x18:
    *param_3 = tls_construct_server_key_exchange;
    *param_4 = 0xc;
    return 1;
  case 0x19:
    *param_3 = tls_construct_certificate_request;
    *param_4 = 0xd;
    return 1;
  case 0x1a:
    *param_3 = tls_construct_server_done;
    *param_4 = 0xe;
    return 1;
  case 0x21:
    *param_3 = tls_construct_new_session_ticket;
    *param_4 = 4;
    return 1;
  case 0x22:
    *param_3 = tls_construct_cert_status;
    *param_4 = 0x16;
    return 1;
  case 0x23:
    break;
  case 0x24:
    *param_3 = tls_construct_finished;
    *param_4 = 0x14;
    return 1;
  case 0x25:
    *param_3 = tls_construct_encrypted_extensions;
    *param_4 = 8;
    return 1;
  case 0x28:
    *param_3 = tls_construct_cert_verify;
    *param_4 = 0xf;
    return 1;
  case 0x2a:
    *param_3 = tls_construct_key_update;
    *param_4 = 0x18;
    return 1;
  case 0x2e:
    *param_3 = 0;
    *param_4 = 0xffffffff;
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



// FUNCTION 143cbd570 ossl_statem_server_post_process_message body=214 status=ok
// SIG undefined ossl_statem_server_post_process_message(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong ossl_statem_server_post_process_message(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x5c) == 0x14) {
    uVar2 = tls_post_process_client_hello();
    return uVar2;
  }
  if (*(int *)(param_1 + 0x5c) != 0x1c) {
    ossl_statem_fatal(param_1,0x50,0x259,0x44,"ssl\\statem\\statem_srvr.c",0x4ba,0x143cbd57a);
    return 0;
  }
  if ((*(int *)(param_1 + 0x74) == 0) && (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8) != 0)
     ) {
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0xe0) == 0) {
      ossl_statem_fatal(param_1,0x50,0x180,0x44,"ssl\\statem\\statem_srvr.c",0xdca,0x143cbd57a);
      return 0;
    }
    iVar1 = ssl3_digest_cached_records(param_1,1);
    return (ulonglong)(-(uint)(iVar1 != 0) & 2);
  }
  iVar1 = ssl3_digest_cached_records(param_1,0);
  return (ulonglong)(-(uint)(iVar1 != 0) & 2);
}



// FUNCTION 143cbd650 FUN_143cbd650 body=820 status=ok
// SIG undefined FUN_143cbd650(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143cbd650(int *param_1)

{
  longlong lVar1;
  int iVar2;
  DWORD DVar3;
  bool bVar4;
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 3;
    }
    iVar2 = ssl3_init_finished_mac(param_1);
    break;
  default:
    goto switchD_143cbd68b_caseD_14;
  case 0x15:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 3;
    }
    if ((*param_1 != 0x100) && (iVar2 = ssl3_init_finished_mac(param_1), iVar2 == 0)) {
      return 0;
    }
    param_1[0x178] = 1;
    return 2;
  case 0x16:
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) {
      return 2;
    }
    iVar2 = **(int **)(param_1 + 2);
    if (iVar2 < 0x304) {
      return 2;
    }
    if (iVar2 == 0x10000) {
      return 2;
    }
    if (param_1[0x136] != 1) {
      if (iVar2 == 0x10000) {
        return 2;
      }
      if (((param_1[0x171] & 0x100000U) != 0) && (param_1[0x136] != 2)) {
        return 2;
      }
      goto switchD_143cbd68b_caseD_23;
    }
    bVar4 = (param_1[0x171] & 0x100000U) == 0;
    goto LAB_143cbd8b8;
  case 0x19:
    bVar4 = param_1[0x1d6] == 3;
LAB_143cbd8b8:
    if (!bVar4) {
      return 2;
    }
switchD_143cbd68b_caseD_1a:
    iVar2 = statem_flush(param_1);
    if (iVar2 == 1) {
      return 2;
    }
    return 3;
  case 0x1a:
    goto switchD_143cbd68b_caseD_1a;
  case 0x21:
    SetLastError(0);
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) {
      return 2;
    }
    iVar2 = **(int **)(param_1 + 2);
    if (iVar2 < 0x304) {
      return 2;
    }
    if (iVar2 == 0x10000) {
      return 2;
    }
    iVar2 = statem_flush(param_1);
    if (iVar2 == 1) {
      return 2;
    }
    iVar2 = SSL_get_error(param_1,0);
    if (iVar2 != 5) {
      return 3;
    }
    DVar3 = GetLastError();
    if ((DVar3 != 0x20) && (DVar3 != 0x6c)) {
      return 3;
    }
    param_1[10] = 1;
    return 2;
  case 0x23:
switchD_143cbd68b_caseD_23:
    if (param_1[0x136] == 1) {
      iVar2 = statem_flush(param_1);
      if (iVar2 != 0) {
        return 2;
      }
      return 3;
    }
    lVar1 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
    if ((((*(byte *)(lVar1 + 0x60) & 8) != 0) || (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304))
       || (iVar2 == 0x10000)) {
      iVar2 = (**(code **)(lVar1 + 0x20))(param_1,0x22);
      if (iVar2 == 0) {
        return 0;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) == 0) {
        return 2;
      }
      dtls1_reset_seq_numbers(param_1,2);
      return 2;
    }
    iVar2 = (**(code **)(lVar1 + 0x10))(param_1);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa2);
    if (iVar2 == 0) {
      return 0;
    }
    if ((param_1[0x1ba] != 2) &&
       (iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1)
       , iVar2 == 0)) {
      return 0;
    }
    param_1[0x20] = 1;
    return 2;
  case 0x24:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 3;
    }
    lVar1 = *(longlong *)(*(int **)(param_1 + 2) + 0x30);
    if ((*(byte *)(lVar1 + 0x60) & 8) != 0) {
      return 2;
    }
    iVar2 = **(int **)(param_1 + 2);
    if (iVar2 < 0x304) {
      return 2;
    }
    if (iVar2 == 0x10000) {
      return 2;
    }
    iVar2 = (**(code **)(lVar1 + 0x18))
                      (param_1,param_1 + 0x6b,param_1 + 0x5b,0,*(longlong *)(param_1 + 0x142) + 8);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x122);
    break;
  case 0x2a:
    iVar2 = statem_flush(param_1);
    if (iVar2 != 1) {
      return 3;
    }
    iVar2 = tls13_update_key(param_1,1);
  }
  if (iVar2 == 0) {
    return 0;
  }
switchD_143cbd68b_caseD_14:
  return 2;
}



// FUNCTION 143cbd9f0 FUN_143cbd9f0 body=430 status=ok
// SIG undefined FUN_143cbd9f0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143cbd9f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x13:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      dtls1_clear_sent_buffer(param_1);
      return 2;
    }
    break;
  case 0x15:
    *(undefined4 *)(param_1 + 0x44) = 0;
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) == 0) {
      return 2;
    }
    dtls1_clear_sent_buffer(param_1);
    goto LAB_143cbda76;
  case 0x16:
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
      *(undefined4 *)(param_1 + 0x78) = 1;
      return 2;
    }
    break;
  case 0x21:
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) {
      iVar1 = **(int **)(param_1 + 8);
      if (iVar1 < 0x304) {
        return 2;
      }
      if (iVar1 == 0x10000) {
        return 2;
      }
      if (*(longlong *)(param_1 + 0x1720) != 0) {
        return 2;
      }
      uVar2 = tls_finish_handshake(param_1,param_2,0,0);
      return uVar2;
    }
LAB_143cbda76:
    *(undefined4 *)(param_1 + 0x78) = 0;
    break;
  case 0x23:
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar1 = **(int **)(param_1 + 8), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x128) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x10))(param_1);
      if ((int)uVar2 == 0) {
        return uVar2;
      }
      if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
        *(undefined4 *)(param_1 + 0x78) = 0;
        return 2;
      }
    }
    break;
  case 0x2e:
    if ((*(int *)(param_1 + 0x84) != 9) && ((**(uint **)(param_1 + 0xa8) & 0x800) == 0)) {
      return 2;
    }
  case 1:
    uVar2 = tls_finish_handshake(param_1,param_2,1);
    return uVar2;
  }
  return 2;
}



// FUNCTION 143cbdc00 FUN_143cbdc00 body=866 status=ok
// SIG undefined FUN_143cbdc00(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143cbdc00(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0x14:
    uVar6 = tls_process_client_hello(param_1);
    return uVar6;
  default:
    ossl_statem_fatal(param_1,0x50,0x25b,0x44,"ssl\\statem\\statem_srvr.c",0x48a);
    return 0;
  case 0x1b:
    uVar6 = tls_process_client_certificate(param_1);
    return uVar6;
  case 0x1c:
    uVar6 = tls_process_client_key_exchange(param_1);
    return uVar6;
  case 0x1d:
    uVar6 = tls_process_cert_verify(param_1);
    return uVar6;
  case 0x1e:
    break;
  case 0x1f:
    uVar6 = tls_process_change_cipher_spec(param_1);
    return uVar6;
  case 0x20:
    uVar6 = tls_process_finished(param_1);
    return uVar6;
  case 0x2c:
    uVar6 = tls_process_key_update(param_1);
    return uVar6;
  case 0x31:
    if (param_2[1] == 0) {
      if (*(int *)(param_1 + 0x84) - 10U < 2) {
        iVar4 = RECORD_LAYER_processed_read_pending(param_1 + 0x800);
        if (iVar4 == 0) {
          *(undefined4 *)(param_1 + 0x84) = 0xc;
          iVar4 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x20))
                            (param_1,0xa1);
          return (ulonglong)(-(uint)(iVar4 != 0) & 3);
        }
        uVar11 = 0x10a1;
        uVar7 = 10;
        uVar10 = 0xb6;
      }
      else {
        uVar7 = 0x50;
        uVar11 = 0x1096;
        uVar10 = 0x44;
      }
    }
    else {
      uVar7 = 0x32;
      uVar11 = 0x108f;
      uVar10 = 0x9f;
    }
    ossl_statem_fatal(param_1,uVar7,0x219,uVar10,"ssl\\statem\\statem_srvr.c",uVar11);
    return 0;
  }
  pbVar3 = (byte *)*param_2;
  uVar6 = param_2[1];
  pbVar12 = pbVar3;
  if (uVar6 != 0) {
    uVar6 = uVar6 - 1;
    bVar2 = *pbVar3;
    uVar8 = (ulonglong)bVar2;
    if (uVar8 <= uVar6) {
      pbVar1 = pbVar3 + 1 + uVar8;
      uVar6 = uVar6 - uVar8;
      *param_2 = (longlong)pbVar1;
      param_2[1] = uVar6;
      pbVar12 = pbVar1;
      if (uVar6 != 0) {
        pbVar12 = pbVar1 + 1;
        uVar9 = (ulonglong)*pbVar1;
        uVar6 = uVar6 - 1;
        if (uVar9 <= uVar6) {
          uVar6 = uVar6 - uVar9;
          pbVar12 = pbVar12 + uVar9;
          *param_2 = (longlong)pbVar12;
          param_2[1] = uVar6;
          if (param_2[1] == 0) {
            CRYPTO_free(*(undefined8 *)(param_1 + 0x6d0),
                        "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1a4);
            uVar6 = 0;
            *(undefined8 *)(param_1 + 0x6d0) = 0;
            if (uVar8 != 0) {
              lVar5 = CRYPTO_memdup(pbVar3 + 1,uVar8,
                                    "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",
                                    0x1ad);
              *(longlong *)(param_1 + 0x6d0) = lVar5;
              if (lVar5 == 0) {
                *(undefined8 *)(param_1 + 0x6d8) = 0;
                ossl_statem_fatal(param_1,0x50,0x17f,0x44,"ssl\\statem\\statem_srvr.c",0x1076);
                return 0;
              }
              uVar6 = (ulonglong)bVar2;
            }
            *(ulonglong *)(param_1 + 0x6d8) = uVar6;
            return 3;
          }
        }
      }
    }
  }
  ossl_statem_fatal(param_1,0x32,0x17f,0x9f,"ssl\\statem\\statem_srvr.c",0x106f,pbVar12,uVar6);
  return 0;
}



// FUNCTION 143cbdfb0 FUN_143cbdfb0 body=816 status=ok
// SIG undefined FUN_143cbdfb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 FUN_143cbdfb0(WriteBytesMem *param_1,int param_2)

{
  int iVar1;
  uchar *puVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined4 uVar7;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar4 == 0) && (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 1:
      if (*(int *)(param_1 + 0x84) != 0xb) {
        if (param_2 == 0xb) {
          bVar6 = *(int *)(param_1 + 0x758) == 4;
          goto LAB_143cbe0d9;
        }
        if (param_2 == 0x18) {
          *(undefined4 *)(param_1 + 0x5c) = 0x2c;
          return 1;
        }
      }
      break;
    case 0x1b:
      if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8) == 0)
      goto switchD_143cbe01d_caseD_1d;
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1d;
        return 1;
      }
      break;
    case 0x1d:
switchD_143cbe01d_caseD_1d:
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        return 1;
      }
      break;
    case 0x24:
    case 0x31:
switchD_143cbe01d_caseD_24:
      if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) == 0) goto switchD_143cbe01d_caseD_1d;
      bVar6 = param_2 == 0xb;
LAB_143cbe0d9:
      if (bVar6) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1b;
        return 1;
      }
      break;
    case 0x2e:
      if (*(int *)(param_1 + 0x4d8) == 1) {
        if (param_2 == 1) {
          *(undefined4 *)(param_1 + 0x5c) = 0x14;
          return 1;
        }
      }
      else {
        if (*(int *)(param_1 + 0x6e8) != 2) goto switchD_143cbe01d_caseD_24;
        if (param_2 == 5) {
          *(undefined4 *)(param_1 + 0x5c) = 0x31;
          return 1;
        }
      }
    }
  }
  else {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 0:
    case 1:
    case 0x15:
      if (param_2 == 1) {
        *(undefined4 *)(param_1 + 0x5c) = 0x14;
        return 1;
      }
      break;
    case 0x1a:
      if (param_2 == 0x10) {
        if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) == 0) {
LAB_143cbe1c1:
          *(undefined4 *)(param_1 + 0x5c) = 0x1c;
          return 1;
        }
        if (*(int *)param_1 == 0x300) {
          if (((byte)*(undefined4 *)(param_1 + 0x558) & 3) != 3) goto LAB_143cbe1c1;
          uVar7 = 0xb9;
          uVar3 = 0x28;
          uVar5 = 199;
          goto LAB_143cbe2bf;
        }
      }
      else if ((*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) != 0) && (param_2 == 0xb)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1b;
        return 1;
      }
      break;
    case 0x1b:
      if (param_2 == 0x10) goto LAB_143cbe1c1;
      break;
    case 0x1c:
      if ((*(longlong *)(*(longlong *)(param_1 + 0x508) + 0xf8) == 0) ||
         (*(int *)(param_1 + 0x74) != 0)) goto switchD_143cbe134_caseD_1d;
      if (param_2 == 0xf) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1d;
        return 1;
      }
      break;
    case 0x1d:
    case 0x24:
switchD_143cbe134_caseD_1d:
      if (param_2 == 0x101) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1f;
        return 1;
      }
      break;
    case 0x1e:
switchD_143cbe134_caseD_1e:
      if (param_2 == 0x14) {
        *(undefined4 *)(param_1 + 0x5c) = 0x20;
        return 1;
      }
      break;
    case 0x1f:
      if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) == 0) goto switchD_143cbe134_caseD_1e;
      if (param_2 == 0x43) {
        *(undefined4 *)(param_1 + 0x5c) = 0x1e;
        return 1;
      }
    }
  }
  if ((uVar4 != 0) && (param_2 == 0x101)) {
    *(undefined8 *)(param_1 + 0x98) = 0;
    *(undefined4 *)(param_1 + 0x28) = 3;
    puVar2 = AK::WriteBytesMem::Bytes(param_1);
    BIO_clear_flags(puVar2,0xf);
    BIO_set_flags(puVar2,9);
    return 0;
  }
  uVar7 = 0x12a;
  uVar3 = 10;
  uVar5 = 0xf4;
LAB_143cbe2bf:
  ossl_statem_fatal(param_1,uVar3,0x1a2,uVar5,"ssl\\statem\\statem_srvr.c",uVar7,0x143cbdfba);
  return 0;
}



// FUNCTION 143cbe380 FUN_143cbe380 body=1295 status=ok
// SIG undefined FUN_143cbe380(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 FUN_143cbe380(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8;
  if (((uVar4 == 0) && (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    switch(*(undefined4 *)(param_1 + 0x5c)) {
    case 1:
      if (*(int *)(param_1 + 0x754) == -1) {
        if (*(int *)(param_1 + 0x758) == 3) {
          *(undefined4 *)(param_1 + 0x5c) = 0x19;
          return 1;
        }
        return 2;
      }
      break;
    default:
      ossl_statem_fatal(param_1,0x50,600,0x44,"ssl\\statem\\statem_srvr.c",0x10000019c);
      return 0;
    case 0x14:
      *(undefined4 *)(param_1 + 0x5c) = 0x16;
      return 1;
    case 0x16:
      if (((*(uint *)(param_1 + 0x5c4) & 0x100000) != 0) && (*(int *)(param_1 + 0x4d8) != 2)) {
        *(undefined4 *)(param_1 + 0x5c) = 0x23;
        return 1;
      }
      uVar3 = 0x25;
      if (*(int *)(param_1 + 0x4d8) == 1) {
        uVar3 = 0x2e;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    case 0x17:
      *(undefined4 *)(param_1 + 0x5c) = 0x28;
      return 1;
    case 0x19:
      if (*(int *)(param_1 + 0x758) == 3) {
        *(undefined4 *)(param_1 + 0x758) = 4;
        *(undefined4 *)(param_1 + 0x5c) = 1;
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 0x17;
      return 1;
    case 0x20:
      if (*(int *)(param_1 + 0x758) == 4) {
        *(undefined4 *)(param_1 + 0x758) = 2;
      }
      else if (*(int *)(param_1 + 0x670) == 0) goto switchD_143cbe3ec_caseD_2a;
      uVar3 = 0x21;
      if (*(ulonglong *)(param_1 + 0x1718) <= *(ulonglong *)(param_1 + 0x1720)) {
        uVar3 = 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    case 0x21:
      if ((*(int *)(param_1 + 200) == 0) &&
         (*(ulonglong *)(param_1 + 0x1720) < *(ulonglong *)(param_1 + 0x1718))) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return 1;
    case 0x23:
      uVar3 = 0x2e;
      if (*(int *)(param_1 + 0x4d8) != 1) {
        uVar3 = 0x25;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    case 0x24:
      *(undefined4 *)(param_1 + 0x5c) = 0x2e;
      return 1;
    case 0x25:
      if (*(int *)(param_1 + 200) != 0) {
        *(undefined4 *)(param_1 + 0x5c) = 0x24;
        return 1;
      }
      iVar1 = FUN_143cbe960(param_1);
      uVar3 = 0x17;
      if (iVar1 != 0) {
        uVar3 = 0x19;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    case 0x28:
      *(undefined4 *)(param_1 + 0x5c) = 0x24;
      return 1;
    case 0x2a:
switchD_143cbe3ec_caseD_2a:
      *(undefined4 *)(param_1 + 0x5c) = 1;
      return 1;
    case 0x2c:
      if (*(int *)(param_1 + 0x754) == -1) goto switchD_143cbe3ec_caseD_2a;
      break;
    case 0x2e:
      return 2;
    }
    *(undefined4 *)(param_1 + 0x5c) = 0x2a;
    return 1;
  }
  switch(*(undefined4 *)(param_1 + 0x5c)) {
  case 0:
  case 0x15:
  case 0x1a:
    break;
  case 1:
    if (*(int *)(param_1 + 0x60) == 0x13) {
      *(undefined8 *)(param_1 + 0x5c) = 0x13;
      return 1;
    }
    uVar2 = tls_setup_handshake(param_1);
    if ((int)uVar2 == 0) {
      return uVar2;
    }
    break;
  default:
    ossl_statem_fatal(param_1,0x50,0x25c,0x44,"ssl\\statem\\statem_srvr.c",0x100000225);
    return 0;
  case 0x13:
    goto switchD_143cbe658_caseD_13;
  case 0x14:
    if (((uVar4 != 0) && (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x108) == 0)) &&
       (uVar4 = SSL_get_options(param_1), (uVar4 >> 0xd & 1) != 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x15;
      return 1;
    }
    if (((*(int *)(param_1 + 0x750) != 0) ||
        (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0)) ||
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) {
      *(undefined4 *)(param_1 + 0x5c) = 0x16;
      return 1;
    }
    goto switchD_143cbe658_caseD_13;
  case 0x16:
    if (*(int *)(param_1 + 200) != 0) {
      uVar3 = 0x21;
      if (*(int *)(param_1 + 0x670) == 0) {
        uVar3 = 0x23;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20) & 0x54) == 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x17;
      return 1;
    }
    iVar1 = FUN_143cbe9d0(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
    iVar1 = FUN_143cbe960();
    *(uint *)(param_1 + 0x5c) = 0x1a - (uint)(iVar1 != 0);
    return 1;
  case 0x17:
    if (*(int *)(param_1 + 0x64c) != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x22;
      return 1;
    }
  case 0x22:
    iVar1 = FUN_143cbe9d0(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x18;
      return 1;
    }
switchD_143cbe658_caseD_18:
    iVar1 = FUN_143cbe960(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0x5c) = 0x19;
      return 1;
    }
switchD_143cbe658_caseD_19:
    *(undefined4 *)(param_1 + 0x5c) = 0x1a;
    return 1;
  case 0x18:
    goto switchD_143cbe658_caseD_18;
  case 0x19:
    goto switchD_143cbe658_caseD_19;
  case 0x20:
    if (*(int *)(param_1 + 200) == 0) {
      uVar3 = 0x21;
      if (*(int *)(param_1 + 0x670) == 0) {
        uVar3 = 0x23;
      }
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      return 1;
    }
switchD_143cbe658_caseD_13:
    *(undefined4 *)(param_1 + 0x5c) = 1;
    return 1;
  case 0x21:
    *(undefined4 *)(param_1 + 0x5c) = 0x23;
    return 1;
  case 0x23:
    *(undefined4 *)(param_1 + 0x5c) = 0x24;
    return 1;
  case 0x24:
    if (*(int *)(param_1 + 200) == 0) goto switchD_143cbe658_caseD_13;
  }
  return 2;
}



// FUNCTION 143cbe960 FUN_143cbe960 body=112 status=ok
// SIG undefined FUN_143cbe960(void)

undefined8 FUN_143cbe960(longlong param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x558);
  if (((((uVar1 & 1) != 0) &&
       (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0 ||
          (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
        (((uVar1 & 8) == 0 || (*(int *)(param_1 + 0x758) == 3)))))) &&
      ((*(int *)(param_1 + 0x770) < 1 || ((uVar1 & 4) == 0)))) &&
     (((uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20),
       (uVar3 & 4) == 0 || ((uVar1 & 2) != 0)) && ((uVar3 & 0x50) == 0)))) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cbe9d0 FUN_143cbe9d0 body=65 status=ok
// SIG undefined FUN_143cbe9d0(void)

undefined8 FUN_143cbe9d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar1 & 6) == 0) &&
     ((((uVar1 & 0x48) == 0 || (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x210) == 0)) &&
      ((uVar1 & 0x1a0) == 0)))) {
    return 0;
  }
  return 1;
}



// FUNCTION 143cbea20 tls_construct_cert_status body=151 status=ok
// SIG undefined tls_construct_cert_status(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_cert_status(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = WPACKET_put_bytes__(param_2,*(undefined4 *)(param_1 + 0x638),1);
  if (iVar1 != 0) {
    iVar1 = WPACKET_sub_memcpy__
                      (param_2,*(undefined8 *)(param_1 + 0x660),*(undefined8 *)(param_1 + 0x668),3);
    if (iVar1 != 0) {
      return 1;
    }
  }
  ossl_statem_fatal(param_1,0x50,0x1ee,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar2,0x1049));
  return 0;
}



// FUNCTION 143cbeac0 tls_construct_certificate_request body=596 status=ok
// SIG undefined tls_construct_certificate_request(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_certificate_request(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res8;
  undefined8 uVar3;
  
  uVar3 = 0x143cbead5;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar1 = **(int **)(param_1 + 8), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
    if (*(int *)(param_1 + 0x758) == 3) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x760),"ssl\\statem\\statem_srvr.c",0xb07);
      *(undefined8 *)(param_1 + 0x768) = 0x20;
      lVar2 = CRYPTO_malloc(0x20,"ssl\\statem\\statem_srvr.c",0xb09);
      *(longlong *)(param_1 + 0x760) = lVar2;
      if (((lVar2 != 0) && (iVar1 = RAND_bytes(lVar2,*(undefined4 *)(param_1 + 0x768)), 0 < iVar1))
         && (iVar1 = WPACKET_sub_memcpy__
                               (param_2,*(undefined8 *)(param_1 + 0x760),
                                *(undefined8 *)(param_1 + 0x768),1), iVar1 != 0)) {
        iVar1 = tls13_restore_handshake_digest_for_pha(param_1);
        if (iVar1 == 0) {
          return 0;
        }
LAB_143cbeba0:
        iVar1 = tls_construct_extensions(param_1,param_2,0x4000,0,0,uVar3);
        goto LAB_143cbeca6;
      }
      uVar3 = 0xb0e;
    }
    else {
      iVar1 = WPACKET_put_bytes__(param_2,0,1);
      if (iVar1 != 0) goto LAB_143cbeba0;
      uVar3 = 0xb1a;
    }
LAB_143cbece5:
    ossl_statem_fatal(param_1,0x50,0x174,0x44,"ssl\\statem\\statem_srvr.c",uVar3);
  }
  else {
    iVar1 = WPACKET_start_sub_packet_len__(param_2,1);
    if (((iVar1 == 0) || (iVar1 = ssl3_get_req_cert_type(param_1,param_2), iVar1 == 0)) ||
       (iVar1 = WPACKET_close(param_2), iVar1 == 0)) {
      uVar3 = 0xb2c;
      goto LAB_143cbece5;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) != 0) {
      uVar3 = tls12_get_psigalgs(param_1,1,&local_res8);
      iVar1 = WPACKET_start_sub_packet_len__(param_2,2);
      if (((iVar1 == 0) || (iVar1 = WPACKET_set_flags(param_2,1), iVar1 == 0)) ||
         ((iVar1 = tls12_copy_sigalgs(param_1,param_2,local_res8,uVar3), iVar1 == 0 ||
          (iVar1 = WPACKET_close(param_2), iVar1 == 0)))) {
        uVar3 = 0xb3a;
        goto LAB_143cbece5;
      }
    }
    iVar1 = construct_ca_names(param_1,param_2);
LAB_143cbeca6:
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x770) = *(int *)(param_1 + 0x770) + 1;
      *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) = 1;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143cbed20 tls_construct_encrypted_extensions body=49 status=ok
// SIG undefined tls_construct_encrypted_extensions(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_encrypted_extensions(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = tls_construct_extensions(param_1,param_2,0x400,0,0,0x143cbed2c);
  return iVar1 != 0;
}



// FUNCTION 143cbed60 tls_construct_new_session_ticket body=1154 status=ok
// SIG undefined tls_construct_new_session_ticket(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_construct_new_session_ticket(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  __time64_t _Var6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [32];
  char *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  longlong local_60;
  longlong local_58;
  undefined4 local_48 [2];
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  ulonglong local_38;
  undefined8 local_30;
  
  local_30 = 0x143cbed7c;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0x738);
  local_48[0] = 0;
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
      (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
LAB_143cbf098:
    pcVar7 = *(code **)(lVar1 + 0x3a8);
    if ((pcVar7 != (code *)0x0) &&
       (iVar2 = (*pcVar7)(param_1,*(undefined8 *)(lVar1 + 0x3b8),local_48[0]), iVar2 == 0)) {
      return 0;
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) ||
       (((*(uint *)(param_1 + 0x5c4) >> 0xe & 1) == 0 &&
        ((*(int *)(param_1 + 0x16e0) == 0 || ((*(uint *)(param_1 + 0x5c4) >> 0x18 & 1) != 0)))))) {
      iVar2 = construct_stateless_ticket(param_1,param_2,local_48[0],&local_40);
      if (iVar2 == 0) {
        return 0;
      }
LAB_143cbf177:
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
          (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
        local_78 = (char *)0x0;
        iVar2 = tls_construct_extensions(param_1,param_2,0x2000,0);
        if (iVar2 == 0) {
          return 0;
        }
        *(longlong *)(param_1 + 0x1720) = *(longlong *)(param_1 + 0x1720) + 1;
        *(longlong *)(param_1 + 0x1728) = *(longlong *)(param_1 + 0x1728) + 1;
        ssl_update_cache(param_1,2);
      }
      return 1;
    }
    iVar2 = create_ticket_prequel(param_1,param_2,local_48[0],&local_40);
    if (iVar2 == 0) {
      return 0;
    }
    iVar2 = WPACKET_memcpy(param_2,*(longlong *)(param_1 + 0x508) + 0x98,
                           *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x90));
    if ((iVar2 != 0) && (iVar2 = WPACKET_close(param_2), iVar2 != 0)) goto LAB_143cbf177;
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xf9e);
    uVar4 = 0x44;
    uVar8 = 0x27c;
    goto LAB_143cbee09;
  }
  uVar4 = ssl_handshake_md(param_1);
  iVar2 = EVP_MD_size(uVar4);
  if (iVar2 < 0) {
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xfbc);
LAB_143cbedf6:
    uVar4 = 0x44;
  }
  else {
    pcVar7 = *(code **)(param_1 + 0x568);
    if ((pcVar7 != (code *)0x0) ||
       (pcVar7 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108), pcVar7 != (code *)0x0)) {
      if (*(longlong *)(param_1 + 0x1720) != 0) {
        ossl_statem_set_in_init(param_1,0);
        (*pcVar7)(param_1,0x20,1);
        ossl_statem_set_in_init(param_1,1);
      }
      (*pcVar7)(param_1,0x10,1);
    }
    if ((*(longlong *)(param_1 + 0x1720) != 0) || (*(int *)(param_1 + 200) != 0)) {
      lVar5 = ssl_session_dup(*(undefined8 *)(param_1 + 0x508),0);
      if (lVar5 == 0) {
        return 0;
      }
      SSL_SESSION_free(*(undefined8 *)(param_1 + 0x508));
      *(longlong *)(param_1 + 0x508) = lVar5;
    }
    iVar3 = ssl_generate_session_id(param_1,*(undefined8 *)(param_1 + 0x508));
    if (iVar3 == 0) {
      return 0;
    }
    iVar3 = RAND_bytes(local_48,4);
    if (iVar3 < 1) {
      local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0xfeb);
      goto LAB_143cbedf6;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x194) = local_48[0];
    uVar8 = *(undefined8 *)(param_1 + 0x1728);
    local_39 = (undefined1)uVar8;
    local_3a = (undefined1)((ulonglong)uVar8 >> 8);
    local_3b = (undefined1)((ulonglong)uVar8 >> 0x10);
    local_3c = (undefined1)((ulonglong)uVar8 >> 0x18);
    local_3d = (undefined1)((ulonglong)uVar8 >> 0x20);
    local_3e = (undefined1)((ulonglong)uVar8 >> 0x28);
    local_3f = (undefined1)((ulonglong)uVar8 >> 0x30);
    local_40 = (undefined1)((ulonglong)uVar8 >> 0x38);
    local_60 = *(longlong *)(param_1 + 0x508) + 0x50;
    local_70 = &local_40;
    local_68 = 8;
    local_78 = (char *)0xa;
    local_58 = (longlong)iVar2;
    iVar3 = tls13_hkdf_expand(param_1,uVar4,param_1 + 0x1ec,"resumption");
    if (iVar3 == 0) {
      return 0;
    }
    *(longlong *)(*(longlong *)(param_1 + 0x508) + 8) = (longlong)iVar2;
    _Var6 = _time64((__time64_t *)0x0);
    *(int *)(*(longlong *)(param_1 + 0x508) + 0x11c) = (int)_Var6;
    if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
LAB_143cbf080:
      *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x19c) = *(undefined4 *)(param_1 + 0x16e0);
      goto LAB_143cbf098;
    }
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0),"ssl\\statem\\statem_srvr.c"
                ,0x1004);
    uVar4 = CRYPTO_memdup(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                          *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000),
                          "ssl\\statem\\statem_srvr.c",0x1006);
    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0) = uVar4;
    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1a0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a8) =
           *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 1000);
      goto LAB_143cbf080;
    }
    local_70 = (undefined1 *)CONCAT44(local_70._4_4_,0x100a);
    uVar4 = 0x41;
  }
  uVar8 = 0x1ac;
LAB_143cbee09:
  local_78 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,uVar8,uVar4);
  return 0;
}



// FUNCTION 143cbf1f0 tls_construct_server_certificate body=256 status=ok
// SIG undefined tls_construct_server_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool tls_construct_server_certificate(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = 1;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
  if (lVar1 == 0) {
    ossl_statem_fatal(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",0x100000eaa);
    return false;
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
      (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
    iVar2 = WPACKET_put_bytes__(param_2,0,1);
    if (iVar2 == 0) {
      ossl_statem_fatal(param_1,0x50,0x1ea,0x44,"ssl\\statem\\statem_srvr.c",CONCAT44(uVar3,0xeb4));
      return false;
    }
  }
  iVar2 = ssl3_output_cert_chain(param_1,param_2,lVar1);
  return iVar2 != 0;
}



// FUNCTION 143cbf2f0 tls_construct_server_done body=55 status=ok
// SIG undefined tls_construct_server_done(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
tls_construct_server_done(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x2a0) == 0) {
    uVar1 = ssl3_digest_cached_records(param_1,0,param_3,param_4,0x143cbf2fa);
    if ((int)uVar1 == 0) {
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 143cbf330 tls_construct_server_hello body=646 status=ok
// SIG undefined tls_construct_server_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_construct_server_hello(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 local_res8 [8];
  undefined4 uVar9;
  
  uVar9 = 1;
  iVar3 = 0;
  if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
       (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) ||
     (param_1[0x136] == 1)) {
    iVar2 = 1;
    uVar4 = 0x303;
  }
  else {
    uVar4 = *param_1;
    iVar2 = iVar3;
  }
  iVar1 = WPACKET_put_bytes__(param_2,uVar4,2);
  if (iVar1 != 0) {
    if (param_1[0x136] == 1) {
      puVar5 = &DAT_145d4a970;
    }
    else {
      puVar5 = (undefined *)(*(longlong *)(param_1 + 0x2a) + 0x98);
    }
    iVar1 = WPACKET_memcpy(param_2,puVar5,0x20);
    if (iVar1 != 0) {
      if ((*(int *)(*(longlong *)(param_1 + 0x142) + 0xf0) != 0) ||
         (((*(byte *)(*(longlong *)(param_1 + 0x166) + 0x48) & 2) == 0 && (param_1[0x32] == 0)))) {
        *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x90) = 0;
      }
      if (iVar2 == 0) {
        uVar7 = *(ulonglong *)(*(longlong *)(param_1 + 0x142) + 0x90);
        puVar6 = (undefined4 *)(*(longlong *)(param_1 + 0x142) + 0x98);
      }
      else {
        uVar7 = *(ulonglong *)(param_1 + 0x154);
        puVar6 = param_1 + 0x14c;
      }
      if (uVar7 < 0x21) {
        if ((iVar2 == 0) && (*(int **)(*(longlong *)(param_1 + 0x2a) + 0x298) != (int *)0x0)) {
          iVar3 = **(int **)(*(longlong *)(param_1 + 0x2a) + 0x298);
        }
        iVar2 = WPACKET_sub_memcpy__(param_2,puVar6,uVar7,1);
        if (((iVar2 != 0) &&
            (iVar2 = (**(code **)(*(longlong *)(param_1 + 2) + 0x98))
                               (*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x238),param_2,
                                local_res8), iVar2 != 0)) &&
           (iVar3 = WPACKET_put_bytes__(param_2,iVar3,1), iVar3 != 0)) {
          if (param_1[0x136] == 1) {
            uVar8 = 0x800;
          }
          else if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
                   (iVar3 = **(int **)(param_1 + 2), iVar3 < 0x304)) ||
                  (uVar8 = 0x200, iVar3 == 0x10000)) {
            uVar8 = 0x100;
          }
          iVar3 = tls_construct_extensions(param_1,param_2,uVar8,0,0);
          if (iVar3 == 0) {
            return 0;
          }
          if (param_1[0x136] == 1) {
            SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
            *(undefined8 *)(param_1 + 0x142) = 0;
            param_1[0x32] = 0;
            iVar3 = create_synthetic_message_hash(param_1,0,0,0,0);
          }
          else {
            if ((*(byte *)(param_1 + 0x156) & 1) != 0) {
              return 1;
            }
            iVar3 = ssl3_digest_cached_records(param_1,0);
          }
          if (iVar3 == 0) {
            return 0;
          }
          return 1;
        }
        uVar8 = CONCAT44(uVar9,0x967);
      }
      else {
        uVar8 = CONCAT44(uVar9,0x955);
      }
      goto LAB_143cbf57b;
    }
  }
  uVar8 = CONCAT44(uVar9,0x930);
LAB_143cbf57b:
  ossl_statem_fatal(param_1,0x50,0x1eb,0x44,"ssl\\statem\\statem_srvr.c",uVar8);
  return 0;
}



// FUNCTION 143cbf5c0 tls_construct_server_key_exchange body=2365 status=ok
// SIG undefined tls_construct_server_key_exchange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 tls_construct_server_key_exchange(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  code *pcVar3;
  longlong lVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  char *pcVar18;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined4 local_c0;
  longlong local_b8;
  void *local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68 [5];
  undefined8 uStack_40;
  char *pcVar11;
  
  uStack_40 = 0x143cbf5df;
  local_68[4] = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  pcVar15 = (char *)0x0;
  local_a8 = 0;
  local_a0 = 0;
  pcVar14 = (char *)0x0;
  pcVar12 = *(char **)(*(longlong *)(param_1 + 0xa8) + 0x2d8);
  lVar9 = EVP_MD_CTX_new();
  local_98 = 0;
  local_b8 = lVar9;
  iVar6 = WPACKET_get_total_written(param_2,&local_80);
  if (iVar6 == 0) {
    local_c0 = 0x9ac;
    uVar16 = 0x44;
  }
  else {
    if (lVar9 != 0) {
      uVar2 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
      local_68[3] = 0;
      local_68[2] = 0;
      local_68[1] = 0;
      local_68[0] = 0;
      pcVar18 = pcVar15;
      if ((uVar2 & 0x48) != 0) {
LAB_143cbf866:
        pcVar14 = (char *)0x0;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
        pcVar15 = pcVar14;
        if ((((*(byte *)(lVar9 + 0x20) & 0x44) == 0) && ((*(uint *)(lVar9 + 0x1c) & 0x1c8) == 0)) &&
           (pcVar15 = pcVar12, pcVar12 == (char *)0x0)) {
          local_c0 = 0xa50;
          local_c8 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x32,0x1ec,0x44);
          lVar9 = local_b8;
          goto LAB_143cbf9f4;
        }
        if ((uVar2 & 0x1c8) != 0) {
          pcVar12 = *(char **)(*(longlong *)(param_1 + 0x488) + 0x210);
          uVar7 = 0;
          if (pcVar12 != (char *)0x0) {
            cVar1 = *pcVar12;
            pcVar13 = pcVar12;
            pcVar11 = pcVar14;
            while ((cVar1 != '\0' && (uVar7 = (uint)pcVar11, uVar7 < 0x80000000))) {
              pcVar13 = pcVar13 + 1;
              uVar7 = uVar7 + 1;
              cVar1 = *pcVar13;
              pcVar11 = (char *)(ulonglong)uVar7;
            }
            uVar7 = uVar7 & 0x7fffffff;
          }
          if ((0x80 < uVar7) || (iVar6 = WPACKET_sub_memcpy__(param_2,pcVar12,uVar7,2), iVar6 == 0))
          {
            local_c0 = 0xa62;
            local_c8 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
            lVar9 = local_b8;
            goto LAB_143cbf9f4;
          }
        }
        do {
          if (local_68[(longlong)pcVar14] == 0) break;
          if ((pcVar14 != (char *)0x2) || (uVar16 = 1, (uVar2 & 0x20) == 0)) {
            uVar16 = 2;
          }
          iVar6 = WPACKET_start_sub_packet_len__(param_2,uVar16);
          if (iVar6 == 0) {
            local_c0 = 0xa76;
            goto LAB_143cbfc68;
          }
          if ((pcVar14 == (char *)0x2) && ((uVar2 & 0x102) != 0)) {
            iVar6 = BN_num_bits(local_68[0]);
            iVar8 = BN_num_bits(local_68[2]);
            iVar6 = ((int)((iVar6 + 7 >> 0x1f & 7U) + iVar6 + 7) >> 3) -
                    ((int)(iVar8 + 7 + (iVar8 + 7 >> 0x1f & 7U)) >> 3);
            if (iVar6 != 0) {
              iVar8 = WPACKET_allocate_bytes(param_2,(longlong)iVar6,&local_b0);
              if (iVar8 == 0) {
                local_c0 = 0xa87;
                goto LAB_143cbfc68;
              }
              _guard_xfg_dispatch_icall_nop(local_b0,0,(longlong)iVar6);
            }
          }
          iVar6 = BN_num_bits(local_68[(longlong)pcVar14]);
          iVar6 = WPACKET_allocate_bytes
                            (param_2,(longlong)((int)(iVar6 + 7 + (iVar6 + 7 >> 0x1f & 7U)) >> 3),
                             &local_b0);
          if ((iVar6 == 0) || (iVar6 = WPACKET_close(param_2), iVar6 == 0)) {
            local_c0 = 0xa92;
            goto LAB_143cbfc68;
          }
          BN_bn2bin(local_68[(longlong)pcVar14],local_b0);
          pcVar14 = pcVar14 + 1;
        } while ((longlong)pcVar14 < 4);
        if ((uVar2 & 0x84) != 0) {
          iVar6 = WPACKET_put_bytes__(param_2,3,1);
          if ((((iVar6 == 0) || (iVar6 = WPACKET_put_bytes__(param_2,0,1), iVar6 == 0)) ||
              (iVar6 = WPACKET_put_bytes__(param_2,pcVar18,1), iVar6 == 0)) ||
             (iVar6 = WPACKET_sub_memcpy__(param_2,local_a8,local_a0,1), iVar6 == 0)) {
            local_c0 = 0xaa7;
LAB_143cbfc68:
            local_c8 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
            pcVar14 = (char *)0x0;
            lVar9 = local_b8;
            goto LAB_143cbf9f4;
          }
          CRYPTO_free(local_a8,"ssl\\statem\\statem_srvr.c",0xaaa);
          local_a8 = 0;
        }
        lVar9 = local_b8;
        if (pcVar15 == (char *)0x0) goto LAB_143cbfecb;
        pcVar12 = *(char **)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0) + 8);
        if ((pcVar12 == (char *)0x0) || (iVar6 = tls1_lookup_md(pcVar15,&local_88), iVar6 == 0)) {
          local_c0 = 0xabb;
        }
        else {
          iVar6 = WPACKET_get_length(param_2,&local_78);
          if (iVar6 == 0) {
            local_c0 = 0xac2;
          }
          else {
            if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 2) == 0) ||
               (iVar6 = WPACKET_put_bytes__(param_2,*(undefined2 *)(pcVar15 + 8),2), iVar6 != 0)) {
              iVar6 = EVP_PKEY_size(pcVar12);
              local_b0 = (void *)(longlong)iVar6;
              iVar6 = WPACKET_sub_reserve_bytes__(param_2,local_b0,&local_90,2);
              lVar9 = local_b8;
              if ((iVar6 == 0) ||
                 (local_c8 = pcVar12, iVar6 = EVP_DigestSignInit(local_b8,&local_98,local_88,0),
                 iVar6 < 1)) {
                local_c0 = 0xad7;
LAB_143cbfe94:
                uVar10 = 0x44;
              }
              else {
                if (*(int *)(pcVar15 + 0x14) != 0x390) {
LAB_143cbfe02:
                  pcVar12 = (char *)construct_key_exchange_tbs
                                              (param_1,&local_a0,
                                               local_80 +
                                               *(longlong *)(*(longlong *)(param_1 + 0x88) + 8),
                                               local_78);
                  pcVar14 = (char *)0x0;
                  if (pcVar12 == (char *)0x0) goto LAB_143cbf9f4;
                  local_c8 = pcVar12;
                  iVar6 = EVP_DigestSign(lVar9,local_90,&local_b0,local_a0);
                  CRYPTO_free(local_a0,"ssl\\statem\\statem_srvr.c",0xaeb);
                  if (((0 < iVar6) &&
                      (iVar6 = WPACKET_sub_allocate_bytes__(param_2,local_b0,&local_70,2),
                      iVar6 != 0)) && (local_90 == local_70)) {
LAB_143cbfecb:
                    EVP_MD_CTX_free(lVar9);
                    return 1;
                  }
                  local_c0 = 0xaf0;
                  goto LAB_143cbfe94;
                }
                local_c8 = (char *)0x0;
                iVar6 = RSA_pkey_ctx_ctrl(local_98,0xffffffff,0x1001,6);
                if (0 < iVar6) {
                  local_c8 = (char *)0x0;
                  iVar6 = RSA_pkey_ctx_ctrl(local_98,0x18,0x1002,0xffffffff);
                  if (0 < iVar6) goto LAB_143cbfe02;
                }
                local_c0 = 0xadf;
                uVar10 = 6;
              }
              local_c8 = "ssl\\statem\\statem_srvr.c";
              ossl_statem_fatal(param_1,0x50,0x1ec,uVar10);
              pcVar14 = (char *)0x0;
              goto LAB_143cbf9f4;
            }
            local_c0 = 0xac9;
          }
        }
        local_c8 = "ssl\\statem\\statem_srvr.c";
        ossl_statem_fatal(param_1,0x50,0x1ec,0x44);
        pcVar14 = (char *)0x0;
        lVar9 = local_b8;
        goto LAB_143cbf9f4;
      }
      if ((uVar2 & 0x102) == 0) {
        if ((uVar2 & 0x84) == 0) {
          if ((uVar2 & 0x20) == 0) {
            local_c0 = 0xa47;
            uVar10 = 0xfa;
          }
          else {
            if ((((*(longlong *)(param_1 + 0x7a8) != 0) && (*(longlong *)(param_1 + 0x7b0) != 0)) &&
                (*(longlong *)(param_1 + 0x7b8) != 0)) && (*(longlong *)(param_1 + 0x7c0) != 0)) {
              local_68[0] = *(longlong *)(param_1 + 0x7a8);
              local_68[1] = *(longlong *)(param_1 + 0x7b0);
              local_68[2] = *(longlong *)(param_1 + 0x7b8);
              local_68[3] = *(longlong *)(param_1 + 0x7c0);
              pcVar18 = (char *)0x0;
              goto LAB_143cbf866;
            }
            local_c0 = 0xa3b;
            uVar10 = 0x166;
          }
LAB_143cbf9de:
          local_c8 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x50,0x1ec,uVar10);
          lVar9 = local_b8;
          goto LAB_143cbf9f4;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) != 0) {
          local_c0 = 0xa0e;
          uVar10 = 0x44;
          pcVar14 = pcVar15;
          goto LAB_143cbf9de;
        }
        uVar5 = tls1_shared_group(param_1,0xfffffffe);
        pcVar18 = (char *)(ulonglong)uVar5;
        if (uVar5 == 0) {
          local_c0 = 0xa17;
          uVar16 = 0x28;
          uVar17 = 0x13b;
          pcVar14 = pcVar15;
          goto LAB_143cbf716;
        }
        uVar10 = ssl_generate_pkey_group(param_1,pcVar18);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar10;
        lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
        pcVar14 = pcVar15;
        lVar9 = local_b8;
        if (lVar4 == 0) goto LAB_143cbf9f4;
        local_a0 = EVP_PKEY_get1_tls_encodedpoint(lVar4,&local_a8);
        if (local_a0 != 0) goto LAB_143cbf866;
        local_c0 = 0xa26;
        uVar17 = 0x10;
LAB_143cbf70e:
        uVar16 = 0x50;
        pcVar14 = pcVar15;
      }
      else {
        if (*(int *)(*(longlong *)(param_1 + 0x488) + 0x18) != 0) {
          lVar9 = ssl_get_auto_dh(param_1);
          pcVar14 = (char *)EVP_PKEY_new();
          if ((pcVar14 != (char *)0x0) && (lVar9 != 0)) {
            EVP_PKEY_assign(pcVar14,0x1c,lVar9);
            pcVar13 = pcVar14;
            goto LAB_143cbf73a;
          }
          DH_free(lVar9);
          local_c0 = 0x9cc;
LAB_143cbf708:
          uVar17 = 0x44;
          pcVar15 = pcVar14;
          goto LAB_143cbf70e;
        }
        pcVar13 = *(char **)(*(longlong *)(param_1 + 0x488) + 8);
        pcVar14 = pcVar15;
LAB_143cbf73a:
        if (pcVar13 == (char *)0x0) {
          pcVar3 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x10);
          if (pcVar3 == (code *)0x0) {
            local_c0 = 0x9e2;
            uVar10 = 0xab;
            goto LAB_143cbf9de;
          }
          uVar10 = (*pcVar3)(param_1,0,0x400);
          pcVar14 = (char *)ssl_dh_to_pkey(uVar10);
          pcVar13 = pcVar14;
          if (pcVar14 == (char *)0x0) {
            local_c0 = 0x9da;
            goto LAB_143cbf708;
          }
        }
        uVar16 = EVP_PKEY_security_bits(pcVar13);
        local_c8 = pcVar13;
        iVar6 = ssl_security(param_1,0x40007,uVar16,0);
        if (iVar6 != 0) {
          if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) {
            uVar10 = ssl_generate_pkey(pcVar13);
            *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = uVar10;
            lVar9 = local_b8;
            if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240) == 0) goto LAB_143cbf9f4;
            lVar9 = EVP_PKEY_get0_DH();
            if (lVar9 != 0) {
              EVP_PKEY_free(pcVar14);
              DH_get0_pqg(lVar9,local_68,0,local_68 + 1);
              DH_get0_key(lVar9,local_68 + 2,0);
              goto LAB_143cbf866;
            }
            local_c0 = 0x9fd;
          }
          else {
            local_c0 = 0x9ef;
          }
          goto LAB_143cbf708;
        }
        local_c0 = 0x9e9;
        uVar16 = 0x28;
        uVar17 = 0x18a;
      }
LAB_143cbf716:
      local_c8 = "ssl\\statem\\statem_srvr.c";
      ossl_statem_fatal(param_1,uVar16,0x1ec,uVar17);
      lVar9 = local_b8;
      goto LAB_143cbf9f4;
    }
    local_c0 = 0x9b2;
    uVar16 = 0x41;
  }
  local_c8 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,0x50,0x1ec,uVar16);
  pcVar14 = pcVar15;
LAB_143cbf9f4:
  EVP_PKEY_free(pcVar14);
  CRYPTO_free(local_a8,"ssl\\statem\\statem_srvr.c",0xafc);
  EVP_MD_CTX_free(lVar9);
  return 0;
}



// FUNCTION 143cbff00 tls_early_post_process_client_hello body=3274 status=ok
// SIG undefined tls_early_post_process_client_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_early_post_process_client_hello(int *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  WriteBytesMem *this;
  undefined8 uVar13;
  longlong lVar14;
  uint *puVar15;
  ulonglong uVar16;
  uint *puVar17;
  undefined4 uVar18;
  int *piVar19;
  void *_Buf2;
  uint *puVar20;
  uint *puVar21;
  bool bVar22;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  int local_res18 [2];
  longlong local_res20;
  undefined8 in_stack_ffffffffffffff88;
  undefined8 in_stack_ffffffffffffff90;
  undefined4 uVar23;
  longlong local_68 [2];
  undefined1 *local_58;
  ulonglong uStack_50;
  undefined8 uStack_48;
  
  uVar18 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  uVar23 = (undefined4)((ulonglong)in_stack_ffffffffffffff90 >> 0x20);
  uStack_48 = 0x143cbff1a;
  piVar2 = *(int **)(param_1 + 0x1c2);
  puVar17 = (uint *)0x0;
  local_res10[0] = 0x50;
  local_res20 = 0;
  puVar21 = (uint *)0x0;
  local_68[0] = 0;
  local_res8[0] = 0;
  pcVar3 = *(code **)(*(longlong *)(param_1 + 0x166) + 0x1e0);
  if (pcVar3 == (code *)0x0) {
LAB_143cc0005:
    lVar14 = *(longlong *)(param_1 + 0x2a);
    uVar13 = *(undefined8 *)(piVar2 + 4);
    *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(piVar2 + 2);
    *(undefined8 *)(lVar14 + 0xc0) = uVar13;
    iVar7 = piVar2[7];
    iVar10 = piVar2[8];
    iVar4 = piVar2[9];
    *(int *)(lVar14 + 200) = piVar2[6];
    *(int *)(lVar14 + 0xcc) = iVar7;
    *(int *)(lVar14 + 0xd0) = iVar10;
    *(int *)(lVar14 + 0xd4) = iVar4;
    if (*piVar2 != 0) {
      uVar8 = piVar2[1];
      if ((uVar8 == 2) || ((uVar8 & 0xff00) != 0x300)) {
        uVar13 = 0x65e;
        uVar18 = 0x46;
        iVar7 = 0xfc;
        goto LAB_143cbff93;
      }
      param_1[0x179] = uVar8;
    }
    if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) {
      iVar7 = ssl_choose_server_version(param_1,piVar2,local_res8);
      if (iVar7 != 0) {
LAB_143cc0127:
        if ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x198) == 0) ||
           (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x220) == 0)) {
          iVar10 = piVar2[1];
          param_1[0x179] = iVar10;
          *param_1 = iVar10;
        }
        uVar13 = 0x677;
        uVar18 = 0x46;
        goto LAB_143cbff93;
      }
    }
    else if (**(int **)(param_1 + 2) != 0x1ffff) {
      iVar7 = piVar2[1];
      iVar10 = *param_1;
      if (iVar7 == 0x100) {
        iVar7 = 0xff00;
      }
      if (iVar10 == 0x100) {
        iVar10 = 0xff00;
      }
      if (iVar10 < iVar7) {
        iVar7 = 0x18c;
        goto LAB_143cc0127;
      }
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
         (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) &&
       (iVar7 = RECORD_LAYER_processed_read_pending(param_1 + 0x200), iVar7 != 0)) {
      uVar13 = 0x67f;
      uVar18 = 10;
      iVar7 = 0xb6;
      goto LAB_143cbff93;
    }
    if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 0x60) & 8) != 0) {
      uVar8 = SSL_get_options(param_1);
      if ((uVar8 >> 0xd & 1) == 0) {
LAB_143cc01fe:
        if ((**(int **)(param_1 + 2) != 0x1ffff) ||
           (iVar7 = ssl_choose_server_version(param_1,piVar2,local_res8), iVar7 == 0))
        goto LAB_143cc024c;
        uVar18 = 0x46;
        uVar13 = 0x69f;
        *param_1 = param_1[0x179];
      }
      else {
        if (*(code **)(*(longlong *)(param_1 + 0x166) + 200) == (code *)0x0) {
          _Buf2 = *(void **)(param_1 + 0x2c);
          if ((*(size_t *)((longlong)_Buf2 + 0x100) == *(size_t *)(piVar2 + 0x14)) &&
             (iVar7 = _guard_xfg_dispatch_icall_nop
                                (piVar2 + 0x16,_Buf2,*(size_t *)((longlong)_Buf2 + 0x100)),
             iVar7 == 0)) goto LAB_143cc01f4;
          uVar13 = 0x695;
        }
        else {
          iVar7 = (**(code **)(*(longlong *)(param_1 + 0x166) + 200))
                            (param_1,piVar2 + 0x16,piVar2[0x14]);
          if (iVar7 != 0) {
            _Buf2 = *(void **)(param_1 + 0x2c);
LAB_143cc01f4:
            *(undefined4 *)((longlong)_Buf2 + 0x108) = 1;
            goto LAB_143cc01fe;
          }
          uVar13 = 0x68b;
        }
        uVar18 = 0x28;
        iVar7 = 0x134;
      }
      goto LAB_143cbff93;
    }
LAB_143cc024c:
    param_1[0x32] = 0;
    iVar7 = ssl_cache_cipherlist(param_1,piVar2 + 0x56,*piVar2);
    if ((iVar7 != 0) &&
       (iVar7 = bytes_to_cipher_list
                          (param_1,piVar2 + 0x56,&local_res20,local_68,CONCAT44(uVar18,*piVar2),
                           CONCAT44(uVar23,1)), iVar7 != 0)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 0;
      if ((local_68[0] != 0) && (iVar7 = OPENSSL_sk_num(), puVar20 = puVar17, 0 < iVar7)) {
        do {
          this = (WriteBytesMem *)OPENSSL_sk_value(local_68[0],puVar20);
          lVar9 = AK::WriteBytesMem::Count(this);
          if (lVar9 == 0x30000ff) {
            if (param_1[0x1d4] != 0) {
              uVar13 = 0x6b9;
              uVar18 = 0x28;
              iVar7 = 0x159;
              goto LAB_143cbff93;
            }
            *(undefined4 *)(*(longlong *)(param_1 + 0x2a) + 0x3d8) = 1;
          }
          else {
            lVar9 = AK::WriteBytesMem::Count(this);
            if ((lVar9 == 0x3005600) && (iVar7 = ssl_check_version_downgrade(param_1), iVar7 == 0))
            {
              uVar13 = 0x6c8;
              uVar18 = 0x56;
              iVar7 = 0x175;
              goto LAB_143cbff93;
            }
          }
          uVar8 = (int)puVar20 + 1;
          puVar20 = (uint *)(ulonglong)uVar8;
          iVar7 = OPENSSL_sk_num(local_68[0]);
        } while ((int)uVar8 < iVar7);
      }
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
          (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
        uVar13 = SSL_get_ciphers(param_1);
        lVar14 = ssl3_choose_cipher(param_1,local_res20,uVar13);
        if (lVar14 != 0) {
          if ((param_1[0x136] == 1) &&
             ((*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) == 0 ||
              (*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) + 0x18) !=
               *(int *)(lVar14 + 0x18))))) {
            uVar13 = 0x6e2;
            uVar18 = 0x2f;
            iVar7 = 0xba;
            goto LAB_143cbff93;
          }
          *(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x238) = lVar14;
          goto LAB_143cc041d;
        }
        uVar13 = 0x6d6;
LAB_143cc037f:
        uVar18 = 0x28;
        iVar7 = 0xc1;
      }
      else {
LAB_143cc041d:
        iVar7 = tls_parse_extension(param_1,0xd,0x80,*(undefined8 *)(piVar2 + 0xa2),0,0);
        if (iVar7 == 0) goto LAB_143cbffa1;
        if ((*piVar2 == 0) && ((param_1[0xf] == 0 || ((param_1[0x171] & 0x10000U) == 0)))) {
          iVar7 = ssl_get_prev_session(param_1,piVar2);
          if (iVar7 != 1) {
            if (iVar7 == -1) goto LAB_143cbffa1;
            iVar7 = ssl_get_new_session(param_1,1);
            goto joined_r0x000143cc04a4;
          }
          param_1[0x32] = 1;
        }
        else {
          iVar7 = ssl_get_new_session(param_1,1);
joined_r0x000143cc04a4:
          if (iVar7 == 0) goto LAB_143cbffa1;
        }
        piVar19 = *(int **)(param_1 + 2);
        if ((((*(byte *)(*(longlong *)(piVar19 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar19)) &&
           (*piVar19 != 0x10000)) {
          _guard_xfg_dispatch_icall_nop
                    (param_1 + 0x14c,(void *)(*(longlong *)(param_1 + 0x1c2) + 0x30),
                     *(size_t *)(*(longlong *)(param_1 + 0x1c2) + 0x28));
          piVar19 = *(int **)(param_1 + 2);
          *(undefined8 *)(param_1 + 0x154) = *(undefined8 *)(*(longlong *)(param_1 + 0x1c2) + 0x28);
        }
        if (((((*(byte *)(*(longlong *)(piVar19 + 0x30) + 0x60) & 8) == 0) && (0x303 < *piVar19)) &&
            (*piVar19 != 0x10000)) || (param_1[0x32] == 0)) {
LAB_143cc058d:
          puVar20 = *(uint **)(piVar2 + 0x5a);
          bVar22 = false;
          puVar15 = puVar17;
          if (puVar20 != (uint *)0x0) {
            do {
              if (*(char *)((longlong)(piVar2 + 0x5c) + (longlong)puVar15) == '\0') break;
              puVar15 = (uint *)((longlong)puVar15 + 1);
            } while (puVar15 < puVar20);
          }
          if (puVar15 < puVar20) {
            uVar8 = 0;
            if ((*(byte *)(param_1 + 0x171) & 0x40) != 0) {
              puVar5 = *(undefined1 **)(piVar2 + 0x9c);
              uVar6 = *(ulonglong *)(piVar2 + 0x9e);
              local_58 = puVar5;
              uStack_50 = uVar6;
              if ((1 < uVar6) && (uStack_50 = uVar6 - 2, 1 < uStack_50)) {
                puVar1 = puVar5 + 4;
                uStack_50 = uVar6 - 4;
                local_58 = puVar1;
                if (1 < uStack_50) {
                  uVar16 = (ulonglong)CONCAT11(*puVar1,puVar5[5]);
                  if ((uVar16 <= uVar6 - 6) && (CONCAT11(puVar5[2],puVar5[3]) == 0)) {
                    uVar11 = SSL_client_version(param_1);
                    uVar12 = uVar8;
                    if ((uVar11 & 0xffffff00) == 0x300) {
                      uVar12 = SSL_client_version(param_1);
                    }
                    lVar14 = 0x12;
                    if (0x302 < (int)uVar12) {
                      lVar14 = 0x22;
                    }
                    if ((uVar6 - 6) - uVar16 == lVar14) {
                      iVar7 = FUN_14004ffa0(puVar1 + uVar16 + 2,&DAT_145d4b818);
                      bVar22 = iVar7 == 0;
                    }
                    *(bool *)(*(longlong *)(param_1 + 0x2a) + 0x404) = bVar22;
                  }
                }
              }
            }
            uVar18 = 0;
            iVar7 = tls_parse_all_extensions(param_1,0x80,*(undefined8 *)(piVar2 + 0xa2),0,0,1);
            if (iVar7 == 0) goto LAB_143cbffa1;
            iVar7 = ssl_fill_hello_random
                              (param_1,1,*(longlong *)(param_1 + 0x2a) + 0x98,0x20,
                               CONCAT44(uVar18,local_res8[0]));
            if (iVar7 < 1) {
              uVar13 = 0x765;
LAB_143cc0733:
              uVar18 = 0x50;
              iVar7 = 0x44;
            }
            else {
              if (((((param_1[0x32] == 0) && (0x300 < *param_1)) &&
                   ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)) &&
                  ((iVar7 = **(int **)(param_1 + 2), iVar7 < 0x304 || (iVar7 == 0x10000)))) &&
                 (*(code **)(param_1 + 0x1ac) != (code *)0x0)) {
                local_58 = (undefined1 *)0x0;
                local_res18[0] = 0x40;
                iVar7 = (**(code **)(param_1 + 0x1ac))
                                  (param_1,*(longlong *)(param_1 + 0x142) + 0x50,local_res18,
                                   local_res20,&local_58,*(undefined8 *)(param_1 + 0x1ae));
                if ((iVar7 != 0) && (0 < local_res18[0])) {
                  *(longlong *)(*(longlong *)(param_1 + 0x142) + 8) = (longlong)local_res18[0];
                  param_1[0x32] = 1;
                  *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x138) = local_res20;
                  *(undefined4 *)(*(longlong *)(param_1 + 0x142) + 0x110) = 0;
                  local_res20 = 0;
                  if (local_58 == (undefined1 *)0x0) {
                    uVar13 = SSL_get_ciphers(param_1);
                    local_58 = (undefined1 *)
                               ssl3_choose_cipher(param_1,*(undefined8 *)
                                                           (*(longlong *)(param_1 + 0x142) + 0x138),
                                                  uVar13);
                    if (local_58 == (undefined1 *)0x0) {
                      uVar13 = 0x78a;
                      goto LAB_143cc037f;
                    }
                  }
                  *(undefined1 **)(*(longlong *)(param_1 + 0x142) + 0x128) = local_58;
                  OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x44));
                  uVar13 = OPENSSL_sk_dup(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x138));
                  *(undefined8 *)(param_1 + 0x44) = uVar13;
                  OPENSSL_sk_free(*(undefined8 *)(param_1 + 0x46));
                  uVar13 = OPENSSL_sk_dup(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x138));
                  *(undefined8 *)(param_1 + 0x46) = uVar13;
                }
              }
              *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x298) = 0;
              if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
                  (iVar7 = **(int **)(param_1 + 2), 0x303 < iVar7)) && (iVar7 != 0x10000)) {
                puVar21 = puVar17;
                if (*(longlong *)(piVar2 + 0x5a) == 1) {
LAB_143cc0ad0:
                  iVar7 = param_1[0x32];
                  if ((iVar7 == 0) ||
                     ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0 &&
                       (iVar10 = **(int **)(param_1 + 2), 0x303 < iVar10)) && (iVar10 != 0x10000))))
                  {
                    OPENSSL_sk_free(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x138));
                    *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x138) = local_res20;
                    if (local_res20 == 0) {
                      uVar13 = 0x7ff;
                      goto LAB_143cc0733;
                    }
                    iVar7 = param_1[0x32];
                    local_res20 = 0;
                  }
                  if (iVar7 == 0) {
                    if (puVar21 != (uint *)0x0) {
                      uVar8 = *puVar21;
                    }
                    *(uint *)(*(longlong *)(param_1 + 0x142) + 0x120) = uVar8;
                    iVar7 = tls1_set_server_sigalgs(param_1);
                    if (iVar7 == 0) goto LAB_143cbffa1;
                  }
                  OPENSSL_sk_free(local_res20);
                  OPENSSL_sk_free(local_68[0]);
                  CRYPTO_free(*(undefined8 *)(piVar2 + 0xa2),"ssl\\statem\\statem_srvr.c",0x813);
                  CRYPTO_free(*(undefined8 *)(param_1 + 0x1c2),"ssl\\statem\\statem_srvr.c",0x814);
                  uVar13 = 1;
                  goto LAB_143cbffdf;
                }
                uVar13 = 0x7a5;
                uVar18 = 0x2f;
                iVar7 = 0x155;
              }
              else {
                uVar12 = *(uint *)(*(longlong *)(param_1 + 0x142) + 0x120);
                if (uVar12 == 0) {
                  if (((param_1[0x32] == 0) && (iVar7 = ssl_allow_compression(param_1), iVar7 != 0))
                     && (*(longlong *)(*(longlong *)(param_1 + 0x166) + 0x100) != 0)) {
                    iVar7 = OPENSSL_sk_num();
                    puVar20 = puVar17;
                    if (0 < iVar7) {
                      do {
                        puVar21 = (uint *)OPENSSL_sk_value(*(undefined8 *)
                                                            (*(longlong *)(param_1 + 0x166) + 0x100)
                                                           ,puVar20);
                        puVar15 = puVar17;
                        if (*(uint **)(piVar2 + 0x5a) != (uint *)0x0) {
                          do {
                            if (*puVar21 ==
                                (uint)*(byte *)((longlong)(puVar15 + 0x5c) + (longlong)piVar2)) {
                              *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar21;
                              goto LAB_143cc0ad0;
                            }
                            puVar15 = (uint *)(ulonglong)((int)puVar15 + 1);
                          } while (puVar15 < *(uint **)(piVar2 + 0x5a));
                        }
                        uVar12 = (int)puVar20 + 1;
                        puVar20 = (uint *)(ulonglong)uVar12;
                      } while ((int)uVar12 < iVar7);
                    }
                    puVar21 = (uint *)0x0;
                  }
                  goto LAB_143cc0ad0;
                }
                iVar7 = ssl_allow_compression(param_1);
                if (iVar7 == 0) {
                  uVar13 = 0x7b3;
                  uVar18 = 0x28;
                  iVar7 = 0x154;
                }
                else {
                  iVar7 = OPENSSL_sk_num(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100));
                  puVar20 = puVar17;
                  puVar21 = puVar17;
                  if (0 < iVar7) {
                    do {
                      puVar21 = (uint *)OPENSSL_sk_value(*(undefined8 *)
                                                          (*(longlong *)(param_1 + 0x166) + 0x100),
                                                         puVar20);
                      if (uVar12 == *puVar21) {
                        *(uint **)(*(longlong *)(param_1 + 0x2a) + 0x298) = puVar21;
                        break;
                      }
                      uVar11 = (int)puVar20 + 1;
                      puVar20 = (uint *)(ulonglong)uVar11;
                      iVar7 = OPENSSL_sk_num(*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x100)
                                            );
                    } while ((int)uVar11 < iVar7);
                  }
                  if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0x298) == 0) {
                    uVar13 = 0x7c1;
                    uVar18 = 0x28;
                    iVar7 = 0x155;
                  }
                  else {
                    puVar20 = *(uint **)(piVar2 + 0x5a);
                    if (puVar20 != (uint *)0x0) {
                      do {
                        if (*(byte *)((longlong)(puVar17 + 0x5c) + (longlong)piVar2) == uVar12)
                        break;
                        puVar17 = (uint *)(ulonglong)((int)puVar17 + 1);
                      } while (puVar17 < puVar20);
                    }
                    if (puVar17 < puVar20) goto LAB_143cc0ad0;
                    uVar13 = 0x7cc;
                    uVar18 = 0x2f;
                    iVar7 = 0x156;
                  }
                }
              }
            }
          }
          else {
            uVar13 = 0x749;
            uVar18 = 0x32;
            iVar7 = 0xbb;
          }
        }
        else {
          iVar7 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x142) + 0x128) + 0x18);
          iVar10 = OPENSSL_sk_num(local_res20);
          puVar20 = puVar17;
          if (0 < iVar10) {
            do {
              lVar14 = OPENSSL_sk_value(local_res20,puVar20);
              if (*(int *)(lVar14 + 0x18) == iVar7) goto LAB_143cc058d;
              uVar8 = (int)puVar20 + 1;
              iVar10 = OPENSSL_sk_num(local_res20);
              puVar20 = (uint *)(ulonglong)uVar8;
            } while ((int)uVar8 < iVar10);
          }
          uVar13 = 0x73b;
          uVar18 = 0x2f;
          iVar7 = 0xd7;
        }
      }
      goto LAB_143cbff93;
    }
  }
  else {
    iVar7 = (*pcVar3)(param_1,local_res10,*(undefined8 *)(*(longlong *)(param_1 + 0x166) + 0x1e8));
    if (iVar7 == -1) {
      param_1[10] = 7;
      return 0xffffffff;
    }
    if (iVar7 == 1) goto LAB_143cc0005;
    iVar7 = 0xea;
    uVar13 = 0x64a;
    uVar18 = local_res10[0];
LAB_143cbff93:
    ossl_statem_fatal(param_1,uVar18,0x209,iVar7,"ssl\\statem\\statem_srvr.c",uVar13);
  }
LAB_143cbffa1:
  OPENSSL_sk_free(local_res20);
  OPENSSL_sk_free(local_68[0]);
  CRYPTO_free(*(undefined8 *)(piVar2 + 0xa2),"ssl\\statem\\statem_srvr.c",0x81a);
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1c2),"ssl\\statem\\statem_srvr.c",0x81b);
  uVar13 = 0;
LAB_143cbffdf:
  param_1[0x1c2] = 0;
  param_1[0x1c3] = 0;
  return uVar13;
}



// FUNCTION 143cc0bd0 tls_handle_alpn body=548 status=ok
// SIG undefined tls_handle_alpn(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_handle_alpn(longlong param_1)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  byte local_res8 [8];
  void *local_res10;
  
  local_res10 = (void *)0x0;
  local_res8[0] = 0;
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x598) + 600);
  if (pcVar1 != (code *)0x0) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3f0);
    if (lVar2 != 0) {
      iVar3 = (*pcVar1)(param_1,&local_res10,local_res8,lVar2,
                        *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3f8),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x260));
      if (iVar3 == 0) {
        CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),
                    "ssl\\statem\\statem_srvr.c",0x863);
        uVar4 = CRYPTO_memdup(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x864);
        *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) = uVar4;
        if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x3e0) == 0) {
          uVar4 = 0x867;
        }
        else {
          *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 1000) = (ulonglong)local_res8[0];
          *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x3dc) = 0;
          lVar2 = *(longlong *)(param_1 + 0x508);
          if (((*(void **)(lVar2 + 0x1a0) != (void *)0x0) &&
              ((ulonglong)local_res8[0] == *(ulonglong *)(lVar2 + 0x1a8))) &&
             (iVar3 = _guard_xfg_dispatch_icall_nop
                                (local_res10,*(void **)(lVar2 + 0x1a0),(ulonglong)local_res8[0]),
             iVar3 == 0)) {
            return 1;
          }
          *(undefined4 *)(param_1 + 0x6ec) = 0;
          if (*(int *)(param_1 + 200) != 0) {
            return 1;
          }
          if (*(longlong *)(lVar2 + 0x1a0) == 0) {
            uVar4 = CRYPTO_memdup(local_res10,local_res8[0],"ssl\\statem\\statem_srvr.c",0x885);
            *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1a0) = uVar4;
            if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1a0) != 0) {
              *(ulonglong *)(*(longlong *)(param_1 + 0x508) + 0x1a8) = (ulonglong)local_res8[0];
              return 1;
            }
            uVar4 = 0x889;
          }
          else {
            uVar4 = 0x881;
          }
        }
        uVar5 = 0x50;
        uVar6 = 0x44;
      }
      else {
        if (iVar3 == 3) goto LAB_143cc0dca;
        uVar5 = 0x78;
        uVar4 = 0x893;
        uVar6 = 0xeb;
      }
      ossl_statem_fatal(param_1,uVar5,0x232,uVar6,"ssl\\statem\\statem_srvr.c",uVar4);
      return 0;
    }
  }
LAB_143cc0dca:
  if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1a0) != 0) {
    *(undefined4 *)(param_1 + 0x6ec) = 0;
  }
  return 1;
}



// FUNCTION 143cc0e00 tls_post_process_client_hello body=880 status=ok
// SIG undefined tls_post_process_client_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_post_process_client_hello(longlong param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_res10 [6];
  undefined8 uVar7;
  undefined4 uVar8;
  
  uVar3 = 1;
  uVar8 = 1;
  if (param_2 == 3) {
    iVar2 = tls_early_post_process_client_hello();
    if (iVar2 == 0) {
      return 0;
    }
    if (iVar2 < 0) {
      return 3;
    }
LAB_143cc0e3a:
    uVar8 = uVar3;
    if (*(int *)(param_1 + 200) == 0) {
      pcVar1 = *(code **)(*(longlong *)(param_1 + 0x488) + 0x1c8);
      if (pcVar1 != (code *)0x0) {
        iVar2 = (*pcVar1)(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 0x1d0));
        if (iVar2 == 0) {
          uVar6 = 0x179;
          uVar7 = CONCAT44(uVar8,0x8bb);
          iVar2 = 0x50;
          uVar5 = 0x17a;
          goto LAB_143cc113a;
        }
        if (iVar2 < 0) {
          *(undefined4 *)(param_1 + 0x28) = 4;
          return 4;
        }
        *(undefined4 *)(param_1 + 0x28) = 1;
      }
LAB_143cc0edd:
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
          (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) {
        uVar5 = SSL_get_ciphers(param_1);
        lVar4 = ssl3_choose_cipher(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x138),
                                   uVar5);
        if (lVar4 == 0) {
          uVar7 = CONCAT44(uVar8,0x8cd);
          iVar2 = 0x28;
          uVar6 = 0xc1;
          uVar5 = 0x17a;
          goto LAB_143cc113a;
        }
        *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) = lVar4;
      }
      if (*(int *)(param_1 + 200) == 0) {
        iVar2 = tls_choose_sigalg(param_1,1);
        if (iVar2 == 0) {
          return 0;
        }
        if (*(code **)(param_1 + 0x7f8) != (code *)0x0) {
          uVar3 = (**(code **)(param_1 + 0x7f8))
                            (param_1,(*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238)
                                               + 0x1c) & 6) != 0);
          *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0xf0) = uVar3;
        }
        if (*(int *)(*(longlong *)(param_1 + 0x508) + 0xf0) != 0) {
          *(undefined4 *)(param_1 + 0x670) = 0;
        }
      }
    }
    else {
      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) == 0) &&
          (iVar2 = **(int **)(param_1 + 8), 0x303 < iVar2)) && (iVar2 != 0x10000))
      goto LAB_143cc0edd;
      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x238) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x128);
    }
    *(undefined4 *)(param_1 + 0x64c) = 0;
    if (((*(int *)(param_1 + 0x638) != -1) && (*(longlong *)(param_1 + 0x598) != 0)) &&
       ((*(longlong *)(*(longlong *)(param_1 + 0x598) + 0x220) != 0 &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0), lVar4 != 0)))) {
      **(longlong **)(param_1 + 0x488) = lVar4;
      iVar2 = (**(code **)(*(longlong *)(param_1 + 0x598) + 0x220))
                        (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x598) + 0x228));
      if (iVar2 == 0) {
        if (*(longlong *)(param_1 + 0x660) != 0) {
          *(undefined4 *)(param_1 + 0x64c) = 1;
        }
      }
      else {
        if (iVar2 != 3) {
          uVar7 = CONCAT44(uVar8,0x84a);
          uVar6 = 0xe2;
          uVar5 = 0x233;
          iVar2 = 0x50;
          goto LAB_143cc113a;
        }
        *(undefined4 *)(param_1 + 0x64c) = 0;
      }
    }
    if (((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
         (iVar2 = **(int **)(param_1 + 8), iVar2 < 0x304)) || (iVar2 == 0x10000)) &&
       (iVar2 = tls_handle_alpn(param_1), iVar2 == 0)) {
      return 0;
    }
  }
  else {
    uVar3 = 1;
    if (param_2 == 4) goto LAB_143cc0e3a;
    if (param_2 != 5) {
      return 1;
    }
  }
  local_res10[0] = 0x70;
  if (((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c) & 0x20) == 0) ||
     (*(longlong *)(param_1 + 0x788) == 0)) {
    return 1;
  }
  if (*(longlong *)(param_1 + 0x7a0) == 0) {
    uVar7 = CONCAT44(uVar8,0x4d5);
    uVar5 = 0x25e;
    uVar6 = 0xdf;
    iVar2 = 0x73;
  }
  else {
    iVar2 = SSL_srp_server_param_with_username(param_1,local_res10);
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0x28) = 4;
      return 5;
    }
    if (iVar2 != 2) {
      return 1;
    }
    uVar7 = CONCAT44(uVar8,0x4df);
    uVar5 = 0x25e;
    uVar6 = 0xe2;
    iVar2 = local_res10[0];
    if (local_res10[0] == 0x73) {
      uVar6 = 0xdf;
    }
  }
LAB_143cc113a:
  ossl_statem_fatal(param_1,iVar2,uVar5,uVar6,"ssl\\statem\\statem_srvr.c",uVar7);
  return 0;
}



// FUNCTION 143cc1170 tls_process_cke_dhe body=536 status=ok
// SIG undefined tls_process_cke_dhe(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_cke_dhe(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  uVar15 = 1;
  lVar10 = 0;
  uVar13 = 0;
  if ((ulonglong)param_2[1] < 2) {
LAB_143cc1331:
    uVar14 = 0x100000c45;
    uVar12 = 0x94;
LAB_143cc133f:
    uVar8 = 0x32;
    lVar10 = 0;
  }
  else {
    puVar2 = (undefined1 *)*param_2;
    uVar7 = param_2[1] - 2;
    puVar1 = puVar2 + 2;
    uVar9 = (uint)CONCAT11(*puVar2,puVar2[1]);
    *param_2 = (longlong)puVar1;
    uVar11 = (ulonglong)uVar9;
    param_2[1] = uVar7;
    if (uVar7 != uVar11) goto LAB_143cc1331;
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x240);
    if (lVar3 != 0) {
      if (uVar7 != 0) {
        if (uVar7 < uVar11) {
          uVar8 = 0x50;
          uVar14 = 0x100000c57;
          uVar12 = 0x44;
        }
        else {
          *param_2 = (longlong)(puVar1 + uVar9);
          param_2[1] = uVar7 - uVar11;
          lVar10 = EVP_PKEY_new();
          if (lVar10 != 0) {
            iVar4 = EVP_PKEY_copy_parameters(lVar10,lVar3);
            if (iVar4 != 0) {
              lVar5 = EVP_PKEY_get0_DH(lVar10);
              lVar6 = BN_bin2bn(puVar1,uVar9,0);
              if ((lVar6 != 0) && (lVar5 != 0)) {
                iVar4 = DH_set0_key(lVar5,lVar6,0);
                if (iVar4 != 0) {
                  iVar4 = ssl_derive(param_1,lVar3,lVar10,1);
                  if (iVar4 != 0) {
                    uVar13 = 1;
                    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
                  }
                  goto LAB_143cc135e;
                }
              }
              ossl_statem_fatal(param_1,0x50,0x19b,0x44,"ssl\\statem\\statem_srvr.c",
                                CONCAT44(uVar15,0xc65));
              BN_free(lVar6);
              goto LAB_143cc135e;
            }
          }
          uVar8 = 0x50;
          uVar14 = CONCAT44(uVar15,0xc5d);
          uVar12 = 0x82;
        }
        goto LAB_143cc1344;
      }
      uVar14 = 0x100000c51;
      uVar12 = 0xab;
      goto LAB_143cc133f;
    }
    uVar8 = 0x50;
    uVar14 = 0x100000c4b;
    uVar12 = 0xab;
    lVar10 = 0;
  }
LAB_143cc1344:
  ossl_statem_fatal(param_1,uVar8,0x19b,uVar12,"ssl\\statem\\statem_srvr.c",uVar14);
LAB_143cc135e:
  EVP_PKEY_free(lVar10);
  return uVar13;
}



// FUNCTION 143cc1390 tls_process_cke_gost body=695 status=ok
// SIG undefined tls_process_cke_gost(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_process_cke_gost(longlong param_1,longlong *param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 uVar11;
  undefined1 auStack_88 [32];
  char *local_68;
  undefined8 local_60;
  byte *local_58;
  char *pcStack_50;
  undefined8 local_48;
  undefined1 local_40 [32];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar9 = 0;
  local_48 = 0x20;
  lVar10 = 0;
  uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x20);
  if ((char)uVar3 < '\0') {
    lVar6 = *(longlong *)(param_1 + 0x488);
    lVar10 = *(longlong *)(lVar6 + 0x118);
    if ((lVar10 == 0) && (lVar10 = *(longlong *)(lVar6 + 0xf0), lVar10 == 0)) {
LAB_143cc1409:
      lVar10 = *(longlong *)(lVar6 + 200);
    }
  }
  else if ((uVar3 & 0x20) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x488);
    goto LAB_143cc1409;
  }
  lVar10 = EVP_PKEY_CTX_new(lVar10,0);
  if (lVar10 == 0) {
    local_60 = CONCAT44(local_60._4_4_,0xd07);
    uVar11 = 0x41;
LAB_143cc142e:
    local_68 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x19d,uVar11);
    return 0;
  }
  iVar5 = EVP_PKEY_decrypt_init(lVar10);
  if (iVar5 < 1) {
    local_60 = CONCAT44(local_60._4_4_,0xd0c);
    uVar11 = 0x44;
    goto LAB_143cc142e;
  }
  lVar6 = X509_get0_pubkey(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xf8));
  if ((lVar6 != 0) && (iVar5 = EVP_PKEY_derive_set_peer(lVar10,lVar6), iVar5 < 1)) {
    ERR_clear_error();
  }
  lVar6 = param_2[1];
  if (lVar6 == 0) {
LAB_143cc15f3:
    local_60 = CONCAT44(local_60._4_4_,0xd1f);
LAB_143cc15fb:
    uVar8 = 0x32;
  }
  else {
    pcVar4 = (char *)*param_2;
    lVar7 = lVar6 + -1;
    cVar1 = *pcVar4;
    *param_2 = (longlong)(pcVar4 + 1);
    param_2[1] = lVar7;
    if ((cVar1 != '0') || (lVar7 == 0)) goto LAB_143cc15f3;
    bVar2 = pcVar4[1];
    if (bVar2 != 0x81) {
      if (bVar2 < 0x80) goto LAB_143cc14f4;
      local_60 = CONCAT44(local_60._4_4_,0xd33);
      goto LAB_143cc15fb;
    }
    if (lVar7 != 0) {
      *param_2 = (longlong)(pcVar4 + 2);
      param_2[1] = lVar6 + -2;
LAB_143cc14f4:
      local_58 = (byte *)*param_2;
      pcStack_50 = (char *)param_2[1];
      if (pcStack_50 != (char *)0x0) {
        pcStack_50 = pcStack_50 + -1;
        local_68 = (char *)(ulonglong)*local_58;
        local_58 = local_58 + 1;
        if (local_68 <= pcStack_50) {
          local_58 = local_58 + (longlong)local_68;
          pcStack_50 = pcStack_50 + -(longlong)local_68;
          if (pcStack_50 == (char *)0x0) {
            *param_2 = (longlong)local_58;
            param_2[1] = 0;
            iVar5 = EVP_PKEY_decrypt(lVar10,local_40,&local_48);
            if (0 < iVar5) {
              iVar5 = ssl_generate_master_secret(param_1,local_40,0x20);
              if (iVar5 != 0) {
                local_60 = 0;
                local_68 = (char *)CONCAT44(local_68._4_4_,2);
                iVar5 = EVP_PKEY_CTX_ctrl(lVar10,0xffffffff,0xffffffff,2);
                if (0 < iVar5) {
                  *(undefined4 *)(param_1 + 0x74) = 1;
                }
                uVar9 = 1;
              }
              goto LAB_143cc1620;
            }
            local_60 = CONCAT44(local_60._4_4_,0xd42);
            uVar8 = 0x32;
            goto LAB_143cc1603;
          }
        }
      }
      local_60 = CONCAT44(local_60._4_4_,0xd39);
      goto LAB_143cc15fb;
    }
    local_60 = CONCAT44(local_60._4_4_,0xd2a);
    uVar8 = 0x50;
  }
LAB_143cc1603:
  local_68 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,uVar8,0x19d,0x93);
LAB_143cc1620:
  EVP_PKEY_CTX_free(lVar10);
  return uVar9;
}



// FUNCTION 143cc1650 tls_process_cke_psk_preamble body=604 status=ok
// SIG undefined tls_process_cke_psk_preamble(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_process_cke_psk_preamble(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  undefined1 auStack_168 [32];
  char *local_148;
  undefined4 local_140;
  undefined1 *local_138;
  ulonglong uStack_130;
  undefined1 local_128 [256];
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x143cc1662;
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  local_138 = (undefined1 *)*param_2;
  uStack_130 = param_2[1];
  if (uStack_130 < 2) {
LAB_143cc185a:
    local_140 = 0xb53;
    uVar8 = 0x9f;
  }
  else {
    uStack_130 = uStack_130 - 2;
    puVar1 = local_138 + 2;
    uVar7 = (ulonglong)CONCAT11(*local_138,local_138[1]);
    local_138 = puVar1;
    if (uStack_130 < uVar7) goto LAB_143cc185a;
    uStack_130 = uStack_130 - uVar7;
    local_138 = puVar1 + uVar7;
    *param_2 = (longlong)local_138;
    param_2[1] = uStack_130;
    if (uVar7 < 0x81) {
      if (*(longlong *)(param_1 + 0x580) == 0) {
        local_140 = 0xb5d;
        uVar6 = 0x50;
        uVar8 = 0xe1;
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x508);
        CRYPTO_free(*(undefined8 *)(lVar2 + 0xe8),
                    "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c1);
        lVar4 = CRYPTO_strndup(puVar1,uVar7,
                               "d:\\dev\\openssl\\source\\win64-release\\ssl\\packet_locl.h",0x1c4);
        *(longlong *)(lVar2 + 0xe8) = lVar4;
        if (lVar4 == 0) {
          local_140 = 0xb63;
          uVar6 = 0x50;
          uVar8 = 0x44;
        }
        else {
          uVar3 = (**(code **)(param_1 + 0x580))
                            (param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0xe8),
                             local_128,0x100);
          uVar7 = (ulonglong)uVar3;
          if (uVar7 < 0x101) {
            if (uVar3 == 0) {
              uVar6 = 0x73;
              local_140 = 0xb74;
              uVar8 = 0xdf;
            }
            else {
              CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                          "ssl\\statem\\statem_srvr.c",0xb78);
              uVar5 = CRYPTO_memdup(local_128,uVar7,"ssl\\statem\\statem_srvr.c",0xb79);
              *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = uVar5;
              FUN_14004ff40(local_128,uVar7);
              if (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) != 0) {
                *(ulonglong *)(*(longlong *)(param_1 + 0xa8) + 0x2d0) = uVar7;
                return 1;
              }
              uVar6 = 0x50;
              local_140 = 0xb7e;
              uVar8 = 0x41;
            }
          }
          else {
            uVar6 = 0x50;
            local_140 = 0xb6c;
            uVar8 = 0x44;
          }
        }
      }
      goto LAB_143cc1877;
    }
    local_140 = 0xb58;
    uVar8 = 0x92;
  }
  uVar6 = 0x32;
LAB_143cc1877:
  local_148 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,uVar6,0x19e,uVar8);
  return 0;
}



// FUNCTION 143cc18b0 tls_process_cke_rsa body=1940 status=ok
// SIG undefined tls_process_cke_rsa(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 tls_process_cke_rsa(uint *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  byte *pbVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined4 uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  undefined1 auStack_178 [32];
  char *local_158;
  undefined4 local_150;
  byte *local_148;
  ulonglong uStack_140;
  longlong local_138;
  byte *local_130;
  byte *local_128;
  byte *local_120;
  byte *local_118;
  byte *local_110;
  byte *local_108;
  byte *local_100;
  byte *local_f8;
  byte *local_f0;
  byte *local_e8;
  byte *local_e0;
  byte *local_d8;
  byte *local_d0;
  byte *local_c8;
  byte *local_c0;
  byte *local_b8;
  byte *local_b0;
  byte *local_a8;
  byte *local_a0;
  byte *local_98;
  byte *local_90;
  byte *local_88;
  uint *local_80;
  byte local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  uVar6 = 0;
  local_80 = param_1;
  lVar4 = EVP_PKEY_get0_RSA(*(undefined8 *)(*(longlong *)(param_1 + 0x122) + 0x28));
  if (lVar4 == 0) {
    local_150 = 0xb9c;
    local_158 = "ssl\\statem\\statem_srvr.c";
    ossl_statem_fatal(param_1,0x50,0x19f,0xa8);
    return 0;
  }
  puVar10 = (undefined1 *)*param_2;
  uVar12 = param_2[1];
  local_148 = puVar10;
  uStack_140 = uVar12;
  if ((*param_1 - 0x100 & 0xfffffdff) == 0) {
LAB_143cc19d2:
    iVar3 = RSA_size(lVar4);
    if (iVar3 < 0x30) {
      local_150 = 0xbb4;
      uVar8 = 0x78;
    }
    else {
      iVar3 = RSA_size(lVar4);
      pbVar5 = (byte *)CRYPTO_malloc((longlong)iVar3,"ssl\\statem\\statem_srvr.c",3000);
      if (pbVar5 != (byte *)0x0) {
        local_148 = pbVar5;
        iVar3 = RAND_priv_bytes(local_78,0x30);
        if (iVar3 < 1) {
          local_150 = 0xbca;
          local_158 = "ssl\\statem\\statem_srvr.c";
          ossl_statem_fatal(param_1,0x50,0x19f,0x44);
        }
        else {
          local_158 = (char *)CONCAT44(local_158._4_4_,3);
          iVar3 = RSA_private_decrypt(uVar12 & 0xffffffff,puVar10,pbVar5,lVar4);
          if (iVar3 < 0) {
            local_150 = 0xbd8;
            local_158 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x33,0x19f,0x44);
          }
          else if (iVar3 < 0x3b) {
            local_150 = 0xbe5;
            local_158 = "ssl\\statem\\statem_srvr.c";
            ossl_statem_fatal(param_1,0x33,0x19f,0x93);
          }
          else {
            lVar4 = (longlong)(iVar3 + -0x30);
            bVar7 = (char)((byte)((pbVar5[1] ^ 2) - 1 >> 0x18) & (byte)(*pbVar5 - 1 >> 0x18)) >> 7;
            uVar12 = 2;
            local_138 = 2;
            if (2 < lVar4 - 1U) {
              do {
                pbVar9 = pbVar5 + uVar12;
                uVar12 = uVar12 + 1;
                bVar7 = bVar7 & -(char)((int)(*pbVar9 - 1) >> 0x1f) - 1U;
              } while (uVar12 < lVar4 - 1U);
            }
            local_88 = pbVar5 + lVar4;
            uVar2 = param_1[0x179];
            bVar11 = (byte)((uVar2 & 0xff ^ (uint)local_88[1]) - 1 >> 0x18) &
                     (byte)(((int)uVar2 >> 8 ^ (uint)*local_88) - 1 >> 0x18) &
                     ~(byte)((int)uVar2 >> 0x1f);
            if ((param_1[0x171] & 0x800000) != 0) {
              uVar2 = *param_1;
              bVar11 = bVar11 | (byte)((uVar2 & 0xff ^ (uint)local_88[1]) - 1 >> 0x18) &
                                (byte)(((int)uVar2 >> 8 ^ (uint)*local_88) - 1 >> 0x18) &
                                ~(byte)((int)uVar2 >> 0x1f);
            }
            bVar7 = (char)bVar11 >> 7 & bVar7 & (byte)((int)(pbVar5[lVar4 + -1] - 1) >> 0x1f);
            local_130 = local_78 + (-(longlong)pbVar5 - lVar4) + 3;
            local_128 = local_78 + (-(longlong)pbVar5 - lVar4) + 4;
            local_120 = local_78 + (-(longlong)pbVar5 - lVar4) + 5;
            bVar11 = ~bVar7;
            local_118 = local_78 + (-(longlong)pbVar5 - lVar4) + 6;
            local_110 = local_78 + (-(longlong)pbVar5 - lVar4) + 7;
            local_108 = local_78 + (-(longlong)pbVar5 - lVar4) + 8;
            local_100 = local_78 + (-(longlong)pbVar5 - lVar4) + 9;
            local_f8 = local_78 + (-(longlong)pbVar5 - lVar4) + 10;
            local_f0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0xb;
            local_e8 = local_78 + (-(longlong)pbVar5 - lVar4) + 0xc;
            local_e0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0xd;
            local_d8 = local_78 + (-(longlong)pbVar5 - lVar4) + 0xe;
            local_d0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0xf;
            local_c8 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x10;
            local_c0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x11;
            local_b8 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x12;
            local_b0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x13;
            local_a8 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x14;
            local_a0 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x15;
            local_98 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x16;
            local_90 = local_78 + (-(longlong)pbVar5 - lVar4) + 0x17;
            pbVar9 = local_88;
            do {
              *pbVar9 = pbVar9[(longlong)(local_78 + (-(longlong)pbVar5 - lVar4))] & bVar11 |
                        *pbVar9 & bVar7;
              pbVar9[1] = pbVar9[(longlong)(local_78 + (-(longlong)pbVar5 - lVar4) + 1)] & bVar11 |
                          pbVar9[1] & bVar7;
              pbVar9[2] = pbVar9[(longlong)(local_78 + (-(longlong)pbVar5 - lVar4) + 2)] & bVar11 |
                          pbVar9[2] & bVar7;
              pbVar9[3] = pbVar9[(longlong)local_130] & bVar11 | pbVar9[3] & bVar7;
              pbVar9[4] = pbVar9[(longlong)local_128] & bVar11 | pbVar9[4] & bVar7;
              pbVar9[5] = pbVar9[(longlong)local_120] & bVar11 | pbVar9[5] & bVar7;
              pbVar9[6] = pbVar9[(longlong)local_118] & bVar11 | pbVar9[6] & bVar7;
              pbVar9[7] = pbVar9[(longlong)local_110] & bVar11 | pbVar9[7] & bVar7;
              pbVar9[8] = pbVar9[(longlong)local_108] & bVar11 | pbVar9[8] & bVar7;
              pbVar9[9] = pbVar9[(longlong)local_100] & bVar11 | pbVar9[9] & bVar7;
              pbVar9[10] = pbVar9[(longlong)local_f8] & bVar11 | pbVar9[10] & bVar7;
              pbVar9[0xb] = pbVar9[(longlong)local_f0] & bVar11 | pbVar9[0xb] & bVar7;
              pbVar9[0xc] = pbVar9[(longlong)local_e8] & bVar11 | pbVar9[0xc] & bVar7;
              pbVar9[0xd] = pbVar9[(longlong)local_e0] & bVar11 | pbVar9[0xd] & bVar7;
              pbVar9[0xe] = pbVar9[(longlong)local_d8] & bVar11 | pbVar9[0xe] & bVar7;
              pbVar9[0xf] = pbVar9[(longlong)local_d0] & bVar11 | pbVar9[0xf] & bVar7;
              pbVar9[0x10] = pbVar9[(longlong)local_c8] & bVar11 | pbVar9[0x10] & bVar7;
              pbVar9[0x11] = pbVar9[(longlong)local_c0] & bVar11 | pbVar9[0x11] & bVar7;
              pbVar9[0x12] = pbVar9[(longlong)local_b8] & bVar11 | pbVar9[0x12] & bVar7;
              pbVar9[0x13] = pbVar9[(longlong)local_b0] & bVar11 | pbVar9[0x13] & bVar7;
              pbVar9[0x14] = pbVar9[(longlong)local_a8] & bVar11 | pbVar9[0x14] & bVar7;
              pbVar9[0x15] = pbVar9[(longlong)local_a0] & bVar11 | pbVar9[0x15] & bVar7;
              pbVar9[0x16] = pbVar9[(longlong)local_98] & bVar11 | pbVar9[0x16] & bVar7;
              local_138 = local_138 + -1;
              pbVar9[0x17] = pbVar9[(longlong)local_90] & bVar11 | pbVar9[0x17] & bVar7;
              pbVar9 = pbVar9 + 0x18;
            } while (local_138 != 0);
            iVar3 = ssl_generate_master_secret(local_80,local_88,0x30);
            uVar6 = 0;
            pbVar5 = local_148;
            if (iVar3 != 0) {
              uVar6 = 1;
            }
          }
        }
        CRYPTO_free(pbVar5,"ssl\\statem\\statem_srvr.c",0xc2e);
        return uVar6;
      }
      local_150 = 0xbbb;
      uVar8 = 0x41;
      local_148 = (undefined1 *)0x0;
    }
    uVar6 = 0x50;
  }
  else {
    if (1 < uVar12) {
      uStack_140 = uVar12 - 2;
      puVar1 = puVar10 + 2;
      uVar12 = (ulonglong)CONCAT11(*puVar10,puVar10[1]);
      local_148 = puVar1;
      if (uVar12 <= uStack_140) {
        uStack_140 = uStack_140 - uVar12;
        local_148 = puVar1 + uVar12;
        *param_2 = (longlong)local_148;
        param_2[1] = uStack_140;
        puVar10 = puVar1;
        if (param_2[1] == 0) goto LAB_143cc19d2;
      }
    }
    uVar6 = 0x32;
    local_150 = 0xba7;
    uVar8 = 0x9f;
  }
  local_158 = "ssl\\statem\\statem_srvr.c";
  ossl_statem_fatal(param_1,uVar6,0x19f,uVar8);
  return 0;
}



// FUNCTION 143cc2050 tls_process_client_certificate body=1696 status=ok
// SIG undefined tls_process_client_certificate(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4 tls_process_client_certificate(int *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined4 local_res8;
  undefined8 local_res20;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 *local_78 [2];
  undefined1 *local_68;
  ulonglong uStack_60;
  undefined1 *local_58;
  ulonglong uStack_50;
  undefined1 *local_48;
  ulonglong local_40;
  
  lVar4 = 0;
  local_res8 = 0;
  param_1[0x20] = 0;
  lVar3 = OPENSSL_sk_new_null();
  if (lVar3 == 0) {
    uVar12 = 0xdef;
    uVar5 = 0x50;
    uVar9 = 0x41;
  }
  else {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) != 0) ||
        (iVar2 = **(int **)(param_1 + 2), iVar2 < 0x304)) || (iVar2 == 0x10000)) goto LAB_143cc210f;
    iVar2 = PACKET_get_length_prefixed_1(param_2,&local_58);
    if (iVar2 != 0) {
      if (*(longlong *)(param_1 + 0x1d8) == 0) {
        if (uStack_50 == 0) {
LAB_143cc210f:
          local_68 = (undefined1 *)*param_2;
          uStack_60 = param_2[1];
          if (2 < uStack_60) {
            uStack_60 = uStack_60 - 3;
            puVar11 = local_68 + 3;
            uVar6 = (ulonglong)CONCAT21(CONCAT11(*local_68,local_68[1]),local_68[2]);
            local_68 = puVar11;
            if (uVar6 <= uStack_60) {
              uStack_60 = uStack_60 - uVar6;
              local_68 = puVar11 + uVar6;
              *param_2 = (longlong)local_68;
              param_2[1] = uStack_60;
              if (param_2[1] == 0) {
                lVar10 = 0;
                puVar1 = local_78[0];
                while (uVar6 != 0) {
                  if (uVar6 < 3) {
LAB_143cc248c:
                    uVar12 = 0x32;
                    uVar13 = 0xe08;
                    iVar2 = 0x87;
                    local_78[0] = puVar1;
                    goto LAB_143cc249d;
                  }
                  local_78[0] = puVar11 + 3;
                  uVar8 = (uint)CONCAT21(CONCAT11(*puVar11,puVar11[1]),puVar11[2]);
                  uStack_50 = uVar6 - 3;
                  uVar7 = (ulonglong)uVar8;
                  local_68 = local_78[0];
                  if (uStack_50 < uVar7) goto LAB_143cc248c;
                  puVar11 = local_78[0] + uVar8;
                  uVar6 = uStack_50 - uVar7;
                  local_58 = puVar11;
                  uStack_50 = uVar6;
                  lVar4 = d2i_X509(0,local_78);
                  if (lVar4 == 0) {
                    uVar12 = 0xe10;
                    uVar5 = 0xd;
LAB_143cc23e7:
                    ossl_statem_fatal(param_1,0x32,0x17c,uVar5,"ssl\\statem\\statem_srvr.c",uVar12);
                    goto LAB_143cc2406;
                  }
                  if (local_78[0] != local_68 + uVar7) {
                    uVar12 = 0xe16;
                    uVar5 = 0x87;
                    goto LAB_143cc23e7;
                  }
                  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0)
                      && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) && (iVar2 != 0x10000)) {
                    local_res20 = 0;
                    local_68 = local_58;
                    uStack_60 = uStack_50;
                    if (1 < uVar6) {
                      puVar1 = puVar11 + 2;
                      uStack_60 = uStack_50 - 2;
                      uVar6 = (ulonglong)CONCAT11(*puVar11,puVar11[1]);
                      local_68 = puVar1;
                      if (uVar6 <= uStack_60) {
                        local_68 = puVar1 + uVar6;
                        uVar7 = uStack_60 - uVar6;
                        uStack_60 = uVar7;
                        local_58 = local_68;
                        uStack_50 = uVar7;
                        local_48 = puVar1;
                        local_40 = uVar6;
                        iVar2 = tls_collect_extensions
                                          (param_1,&local_48,0x1000,&local_res20,0,lVar10 == 0);
                        if ((iVar2 != 0) &&
                           (iVar2 = tls_parse_all_extensions
                                              (param_1,0x1000,local_res20,lVar4,lVar10,uVar7 == 0),
                           iVar2 != 0)) {
                          CRYPTO_free(local_res20,"ssl\\statem\\statem_srvr.c",0xe2d);
                          uVar6 = uStack_50;
                          puVar11 = local_58;
                          goto LAB_143cc232e;
                        }
                        CRYPTO_free(local_res20,"ssl\\statem\\statem_srvr.c",0xe2a);
                        goto LAB_143cc2406;
                      }
                    }
                    uVar12 = 0xe21;
                    uVar5 = 0x10f;
                    goto LAB_143cc23e7;
                  }
LAB_143cc232e:
                  iVar2 = OPENSSL_sk_push(lVar3,lVar4);
                  if (iVar2 == 0) {
                    ossl_statem_fatal(param_1,0x50,0x17c,0x41,"ssl\\statem\\statem_srvr.c",0xe33);
                    goto LAB_143cc2406;
                  }
                  lVar10 = lVar10 + 1;
                  puVar1 = local_78[0];
                }
                local_78[0] = puVar1;
                iVar2 = OPENSSL_sk_num(lVar3);
                if (iVar2 < 1) {
                  if (*param_1 == 0x300) {
                    uVar13 = 0xe3e;
                    uVar12 = 0x28;
                    iVar2 = 0xb0;
                  }
                  else {
                    if (((byte)param_1[0x156] & 3) != 3) {
                      if (*(longlong *)(*(longlong *)(param_1 + 0x2a) + 0xe0) != 0) {
                        lVar4 = 0;
                        iVar2 = ssl3_digest_cached_records(param_1,0);
                        if (iVar2 == 0) goto LAB_143cc2406;
                      }
LAB_143cc24fc:
                      if (param_1[0x1d6] == 4) {
                        lVar4 = ssl_session_dup(*(undefined8 *)(param_1 + 0x142),0);
                        if (lVar4 == 0) {
                          uVar13 = 0xe71;
                          uVar12 = 0x50;
                          iVar2 = 0x41;
                          goto LAB_143cc249d;
                        }
                        SSL_SESSION_free(*(undefined8 *)(param_1 + 0x142));
                        *(longlong *)(param_1 + 0x142) = lVar4;
                      }
                      X509_free(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0xf8));
                      uVar5 = OPENSSL_sk_shift(lVar3);
                      *(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0xf8) = uVar5;
                      *(int *)(*(longlong *)(param_1 + 0x142) + 0x110) = param_1[0x16a];
                      OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0x142) + 0x108),
                                          X509_free);
                      *(longlong *)(*(longlong *)(param_1 + 0x142) + 0x108) = lVar3;
                      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) ==
                            0) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
                         (iVar2 != 0x10000)) {
                        lVar4 = 0;
                        iVar2 = ssl3_digest_cached_records(param_1,1);
                        if (iVar2 == 0) goto LAB_143cc2406;
                      }
                      lVar3 = 0;
                      if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) ==
                            0) && (iVar2 = **(int **)(param_1 + 2), 0x303 < iVar2)) &&
                         (iVar2 != 0x10000)) {
                        lVar4 = 0;
                        iVar2 = ssl_handshake_hash(param_1,param_1 + 0x124,0x40,param_1 + 0x134);
                        if (iVar2 == 0) goto LAB_143cc2406;
                        param_1[0x5c8] = 0;
                        param_1[0x5c9] = 0;
                      }
                      local_res8 = 3;
                      lVar4 = 0;
                      goto LAB_143cc2406;
                    }
                    uVar12 = 0x74;
                    uVar13 = 0xe46;
                    iVar2 = 199;
                  }
                }
                else {
                  iVar2 = ssl_verify_cert_chain(param_1,lVar3);
                  if (iVar2 < 1) {
                    uVar12 = ssl_x509err2alert(param_1[0x16a]);
                    uVar13 = 0xe54;
                    iVar2 = 0x86;
                  }
                  else if (iVar2 < 2) {
                    uVar5 = OPENSSL_sk_value(lVar3,0);
                    lVar4 = X509_get0_pubkey(uVar5);
                    if (lVar4 != 0) goto LAB_143cc24fc;
                    uVar13 = 0xe60;
                    uVar12 = 0x28;
                    iVar2 = 0xf7;
                  }
                  else {
                    uVar13 = 0xe59;
                    uVar12 = 0x28;
                  }
                }
LAB_143cc249d:
                ossl_statem_fatal(param_1,uVar12,0x17c,iVar2,"ssl\\statem\\statem_srvr.c",uVar13);
                lVar4 = 0;
                goto LAB_143cc2406;
              }
            }
          }
          ossl_statem_fatal(param_1,0x32,0x17c,0x9f,"ssl\\statem\\statem_srvr.c",0xdff);
          goto LAB_143cc2406;
        }
      }
      else if ((uStack_50 == *(ulonglong *)(param_1 + 0x1da)) &&
              (iVar2 = FUN_14004ffa0(local_58), iVar2 == 0)) goto LAB_143cc210f;
    }
    uVar12 = 0xdf8;
    uVar5 = 0x32;
    uVar9 = 0x11a;
  }
  ossl_statem_fatal(param_1,uVar5,0x17c,uVar9,"ssl\\statem\\statem_srvr.c",uVar12);
LAB_143cc2406:
  X509_free(lVar4);
  OPENSSL_sk_pop_free(lVar3,X509_free);
  return local_res8;
}



// FUNCTION 143cc26f0 tls_process_client_hello body=1495 status=ok
// SIG undefined tls_process_client_hello(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_hello(longlong param_1,longlong *param_2)

{
  int *piVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  void *_Src;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  undefined8 uVar13;
  uint uVar15;
  undefined4 uVar17;
  void *local_48;
  ulonglong local_40;
  undefined *local_38;
  ulonglong local_30;
  int local_28;
  int iStack_24;
  undefined8 uStack_20;
  ulonglong uVar14;
  ulonglong uVar16;
  
  uStack_20 = 0x143cc2714;
  piVar8 = (int *)0x0;
  if (((*(int *)(param_1 + 0x750) == 0) &&
      (lVar9 = *(longlong *)(param_1 + 0xa8), *(longlong *)(lVar9 + 0x198) != 0)) &&
     (*(longlong *)(lVar9 + 0x220) != 0)) {
    if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 8) + 0x30) + 0x60) & 8) != 0) ||
        (iVar7 = **(int **)(param_1 + 8), iVar7 < 0x304)) || (iVar7 == 0x10000)) {
      if (((*(uint *)(param_1 + 0x5c4) >> 0x1e & 1) != 0) ||
         ((*(int *)(lVar9 + 0x3d8) == 0 && ((*(uint *)(param_1 + 0x5c4) >> 0x12 & 1) == 0)))) {
        ssl3_send_alert(param_1,1,100);
        return 1;
      }
      *(undefined4 *)(param_1 + 0x750) = 1;
      *(undefined4 *)(param_1 + 0x3c) = 1;
      goto LAB_143cc27c8;
    }
    uVar17 = 0x555;
  }
  else {
LAB_143cc27c8:
    piVar8 = (int *)CRYPTO_zalloc(0x290,"ssl\\statem\\statem_srvr.c",0x563);
    if (piVar8 != (int *)0x0) {
      iVar7 = RECORD_LAYER_is_sslv2_record(param_1 + 0x800);
      *piVar8 = iVar7;
      local_48 = (void *)0x0;
      local_40 = 0;
      if (iVar7 != 0) {
        if (((*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x198) == 0) ||
            (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x220) == 0)) &&
           (*(int *)(param_1 + 0x4d8) == 0)) {
          if (param_2[1] != 0) {
            cVar2 = *(char *)*param_2;
            *param_2 = (longlong)((char *)*param_2 + 1);
            param_2[1] = param_2[1] + -1;
            if (cVar2 == '\x01') goto LAB_143cc289d;
          }
          uVar10 = 0x50;
          uVar17 = 0x591;
          uVar13 = 0x44;
        }
        else {
          uVar17 = 0x576;
          uVar10 = 10;
          uVar13 = 0xf4;
        }
        goto LAB_143cc2c6d;
      }
LAB_143cc289d:
      if ((ulonglong)param_2[1] < 2) {
        uVar17 = 0x598;
        uVar13 = 0xa0;
        goto LAB_143cc2c68;
      }
      bVar3 = *(byte *)*param_2;
      piVar8[1] = (uint)bVar3 << 8;
      piVar8[1] = (uint)CONCAT11(bVar3,*(undefined1 *)(*param_2 + 1));
      *param_2 = *param_2 + 2;
      param_2[1] = param_2[1] + -2;
      puVar6 = (undefined1 *)*param_2;
      uVar11 = param_2[1];
      if (*piVar8 == 0) {
        iVar7 = PACKET_copy_bytes(param_2,piVar8 + 2,0x20);
        if ((iVar7 == 0) || (iVar7 = PACKET_get_length_prefixed_1(param_2,&local_38), iVar7 == 0)) {
LAB_143cc2a95:
          uVar17 = 0x5db;
          uVar13 = 0x9f;
          goto LAB_143cc2c68;
        }
        if (0x20 < local_30) {
          piVar8[10] = 0;
          piVar8[0xb] = 0;
          goto LAB_143cc2a95;
        }
        *(ulonglong *)(piVar8 + 10) = local_30;
        _guard_xfg_dispatch_icall_nop(piVar8 + 0xc,local_38,local_30);
        if ((*(byte *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0xc0) + 0x60) & 8) != 0) {
          iVar7 = PACKET_get_length_prefixed_1(param_2,&local_48);
          if (iVar7 == 0) {
            uVar17 = 0x5e2;
            uVar13 = 0x9f;
            goto LAB_143cc2c68;
          }
          if (0x100 < local_40) {
            uVar10 = 0x50;
            piVar8[0x14] = 0;
            piVar8[0x15] = 0;
            uVar17 = 0x5e9;
            uVar13 = 0x44;
            goto LAB_143cc2c6d;
          }
          *(ulonglong *)(piVar8 + 0x14) = local_40;
          _guard_xfg_dispatch_icall_nop(piVar8 + 0x16,local_48,local_40);
          uVar12 = SSL_get_options(param_1);
          if (((uVar12 >> 0xd & 1) != 0) && (*(longlong *)(piVar8 + 0x14) == 0)) {
            return 1;
          }
        }
        iVar7 = PACKET_get_length_prefixed_2(param_2,piVar8 + 0x56);
        if (iVar7 == 0) {
          uVar17 = 0x5f9;
          uVar13 = 0x9f;
          goto LAB_143cc2c68;
        }
        iVar7 = PACKET_get_length_prefixed_1(param_2,&local_38);
        if (iVar7 == 0) {
          uVar17 = 0x5ff;
          uVar13 = 0x9f;
          goto LAB_143cc2c68;
        }
        piVar1 = piVar8 + 0x9c;
        if (param_2[1] == 0) {
          piVar1[0] = 0;
          piVar1[1] = 0;
          piVar8[0x9e] = 0;
          piVar8[0x9f] = 0;
        }
        else {
          iVar7 = PACKET_get_length_prefixed_2(param_2,piVar1);
          if ((iVar7 == 0) || (param_2[1] != 0)) {
            uVar17 = 0x60a;
            uVar13 = 0x9f;
            goto LAB_143cc2c68;
          }
        }
        if (0xff < local_30) {
          uVar10 = 0x50;
          piVar8[0x5a] = 0;
          piVar8[0x5b] = 0;
          uVar17 = 0x614;
          uVar13 = 0x44;
          goto LAB_143cc2c6d;
        }
LAB_143cc2bee:
        *(ulonglong *)(piVar8 + 0x5a) = local_30;
        _guard_xfg_dispatch_icall_nop(piVar8 + 0x5c,local_38,local_30);
        local_28 = piVar8[0x9c];
        iStack_24 = piVar8[0x9d];
        uStack_20 = *(undefined8 *)(piVar8 + 0x9e);
        iVar7 = tls_collect_extensions(param_1,&local_28,0x80,piVar8 + 0xa2,piVar8 + 0xa0,1);
        if (iVar7 != 0) {
          *(int **)(param_1 + 0x708) = piVar8;
          return 2;
        }
      }
      else {
        if (uVar11 < 2) {
LAB_143cc2a4c:
          uVar17 = 0x5aa;
          uVar13 = 0xd5;
LAB_143cc2c68:
          uVar10 = 0x32;
        }
        else {
          uVar4 = *puVar6;
          uVar5 = puVar6[1];
          *param_2 = (longlong)(puVar6 + 2);
          param_2[1] = uVar11 - 2;
          if (uVar11 - 2 < 2) goto LAB_143cc2a4c;
          uVar12 = (uint)CONCAT11(puVar6[2],puVar6[3]);
          uVar14 = (ulonglong)uVar12;
          *param_2 = (longlong)(puVar6 + 4);
          param_2[1] = uVar11 - 4;
          if (uVar11 - 4 < 2) goto LAB_143cc2a4c;
          uVar15 = (uint)CONCAT11(puVar6[4],puVar6[5]);
          uVar16 = (ulonglong)uVar15;
          *param_2 = (longlong)(puVar6 + 6);
          param_2[1] = uVar11 - 6;
          if (uVar12 < 0x21) {
            iVar7 = PACKET_get_sub_packet(param_2,piVar8 + 0x56,CONCAT11(uVar4,uVar5));
            if (iVar7 != 0) {
              iVar7 = PACKET_copy_bytes(param_2,piVar8 + 0xc,uVar14 & 0xffffffff);
              if ((iVar7 != 0) && (uVar16 <= (ulonglong)param_2[1])) {
                _Src = (void *)*param_2;
                lVar9 = param_2[1] - uVar16;
                param_2[1] = lVar9;
                *param_2 = (longlong)_Src + uVar16;
                if (lVar9 == 0) {
                  *(ulonglong *)(piVar8 + 10) = uVar14 & 0xffffffff;
                  if (0x20 < uVar15) {
                    uVar15 = 0x20;
                  }
                  piVar8[2] = 0;
                  piVar8[3] = 0;
                  piVar8[4] = 0;
                  piVar8[5] = 0;
                  uVar11 = (ulonglong)uVar15;
                  piVar8[6] = 0;
                  piVar8[7] = 0;
                  piVar8[8] = 0;
                  piVar8[9] = 0;
                  if (uVar16 < uVar11) {
                    uVar10 = 0x50;
                    uVar17 = 0x5ce;
                    uVar13 = 0x44;
                    goto LAB_143cc2c6d;
                  }
                  _guard_xfg_dispatch_icall_nop
                            ((void *)((longlong)piVar8 + (0x28 - uVar11)),_Src,uVar11);
                  local_30 = 1;
                  piVar8[0x9c] = 0;
                  piVar8[0x9d] = 0;
                  local_38 = &DAT_145d4b813;
                  piVar8[0x9e] = 0;
                  piVar8[0x9f] = 0;
                  goto LAB_143cc2bee;
                }
              }
            }
            uVar17 = 0x5bb;
            uVar13 = 0xd5;
            goto LAB_143cc2c68;
          }
          uVar10 = 0x2f;
          uVar17 = 0x5b0;
          uVar13 = 0x9f;
        }
LAB_143cc2c6d:
        ossl_statem_fatal(param_1,uVar10,0x17d,uVar13,"ssl\\statem\\statem_srvr.c",uVar17);
      }
      CRYPTO_free(*(undefined8 *)(piVar8 + 0xa2),"ssl\\statem\\statem_srvr.c",0x626);
      goto LAB_143cc2c95;
    }
    uVar17 = 0x566;
  }
  ossl_statem_fatal(param_1,0x50,0x17d,0x44,"ssl\\statem\\statem_srvr.c",uVar17);
LAB_143cc2c95:
  CRYPTO_free(piVar8,"ssl\\statem\\statem_srvr.c",0x627);
  return 0;
}



// FUNCTION 143cc2cd0 tls_process_client_key_exchange body=1026 status=ok
// SIG undefined tls_process_client_key_exchange(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 tls_process_client_key_exchange(longlong param_1,longlong *param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  
  uVar15 = 0x143cc2ce0;
  uVar8 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238) + 0x1c);
  if (((uVar8 & 0x1c8) != 0) && (iVar4 = tls_process_cke_psk_preamble(), iVar4 == 0))
  goto LAB_143cc3091;
  if ((uVar8 & 8) == 0) {
    if ((uVar8 & 0x41) == 0) {
      if ((uVar8 & 0x102) == 0) {
        if ((uVar8 & 0x84) == 0) {
          if ((uVar8 & 0x20) != 0) {
            if (1 < (ulonglong)param_2[1]) {
              puVar3 = (undefined1 *)*param_2;
              uVar11 = param_2[1] - 2;
              puVar7 = puVar3 + 2;
              uVar8 = (uint)CONCAT11(*puVar3,puVar3[1]);
              *param_2 = (longlong)puVar7;
              param_2[1] = uVar11;
              if (uVar8 <= uVar11) {
                param_2[1] = uVar11 - uVar8;
                *param_2 = (longlong)(puVar7 + uVar8);
                lVar6 = BN_bin2bn(puVar7,(ulonglong)uVar8,0);
                *(longlong *)(param_1 + 0x7c8) = lVar6;
                if (lVar6 == 0) {
                  uVar14 = 0xcc8;
                  uVar9 = 0x50;
                  uVar13 = 3;
                  uVar12 = 0x1a0;
                }
                else {
                  iVar4 = BN_ucmp(lVar6,*(undefined8 *)(param_1 + 0x7a8));
                  if ((iVar4 < 0) &&
                     (iVar4 = BN_is_zero(*(undefined8 *)(param_1 + 0x7c8)), iVar4 == 0)) {
                    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8),
                                "ssl\\statem\\statem_srvr.c",0xcd0);
                    uVar12 = CRYPTO_strdup(*(undefined8 *)(param_1 + 0x7a0),
                                           "ssl\\statem\\statem_srvr.c",0xcd1);
                    *(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x1b8) = uVar12;
                    if (*(longlong *)(*(longlong *)(param_1 + 0x508) + 0x1b8) != 0) {
                      iVar4 = srp_generate_server_master_secret(param_1);
                      if (iVar4 != 0) {
                        return 2;
                      }
                      goto LAB_143cc3091;
                    }
                    uVar9 = 0x50;
                    uVar14 = 0xcd4;
                    uVar12 = 0x1a0;
                    uVar13 = 0x41;
                  }
                  else {
                    uVar13 = 0x173;
                    uVar14 = 0xccd;
                    uVar9 = 0x2f;
                    uVar12 = 0x1a0;
                  }
                }
                goto LAB_143cc3087;
              }
            }
            uVar13 = 0x15b;
            uVar14 = 0xcc3;
            uVar9 = 0x32;
            uVar12 = 0x1a0;
            goto LAB_143cc3087;
          }
          if ((uVar8 & 0x10) == 0) {
            uVar14 = 0xd91;
            uVar9 = 0x50;
            uVar13 = 0xf9;
            goto LAB_143cc3081;
          }
          iVar4 = tls_process_cke_gost(param_1,param_2);
        }
        else {
          lVar6 = 0;
          iVar4 = 0;
          uVar12 = *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240);
          if (param_2[1] == 0) {
            ossl_statem_fatal(param_1,0x28,0x19c,0x137,"ssl\\statem\\statem_srvr.c",0xc87,uVar15);
            iVar4 = 0;
          }
          else {
            uVar10 = param_2[1] - 1;
            bVar2 = *(byte *)*param_2;
            uVar11 = (ulonglong)bVar2;
            pbVar1 = (byte *)*param_2 + 1;
            *param_2 = (longlong)pbVar1;
            param_2[1] = uVar10;
            if (uVar10 < uVar11) {
LAB_143cc2ea8:
              uVar9 = 0x32;
              uVar14 = 0xc96;
              uVar13 = 0x9f;
            }
            else {
              *param_2 = (longlong)(pbVar1 + uVar11);
              param_2[1] = uVar10 - uVar11;
              if (uVar10 - uVar11 != 0) goto LAB_143cc2ea8;
              lVar6 = EVP_PKEY_new();
              if ((lVar6 == 0) || (iVar5 = EVP_PKEY_copy_parameters(lVar6,uVar12), iVar5 < 1)) {
                uVar9 = 0x50;
                uVar14 = 0xc9c;
                uVar13 = 6;
              }
              else {
                iVar5 = EVP_PKEY_set1_tls_encodedpoint(lVar6,pbVar1,bVar2);
                if (iVar5 != 0) {
                  iVar5 = ssl_derive(param_1,uVar12,lVar6,1);
                  if (iVar5 != 0) {
                    iVar4 = 1;
                    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
                  }
                  goto LAB_143cc2ed6;
                }
                uVar14 = 0xca1;
                uVar9 = 0x50;
                uVar13 = 0x10;
              }
            }
            ossl_statem_fatal(param_1,uVar9,0x19c,uVar13,"ssl\\statem\\statem_srvr.c",uVar14);
            iVar4 = 0;
          }
LAB_143cc2ed6:
          EVP_PKEY_free(lVar6);
        }
      }
      else {
        iVar4 = tls_process_cke_dhe(param_1,param_2);
      }
    }
    else {
      iVar4 = tls_process_cke_rsa(param_1,param_2);
    }
  }
  else {
    if (param_2[1] != 0) {
      uVar9 = 0x32;
      uVar14 = 0xd6d;
      uVar13 = 0x9f;
LAB_143cc3081:
      uVar12 = 0x17e;
LAB_143cc3087:
      ossl_statem_fatal(param_1,uVar9,uVar12,uVar13,"ssl\\statem\\statem_srvr.c",uVar14,uVar15);
      goto LAB_143cc3091;
    }
    iVar4 = ssl_generate_master_secret(param_1,0,0,0);
  }
  if (iVar4 != 0) {
    return 2;
  }
LAB_143cc3091:
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2d0),
                    "ssl\\statem\\statem_srvr.c",0xd98);
  *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c8) = 0;
  return 0;
}



// FUNCTION 143cc30e0 ssl_ctx_system_config body=34 status=ok
// SIG undefined ssl_ctx_system_config(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl_ctx_system_config(undefined8 param_1)

{
  ssl_do_config(0,param_1,0,1);
  return;
}



// FUNCTION 143cc3110 ssl_do_config body=603 status=ok
// SIG undefined ssl_do_config(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

bool ssl_do_config(longlong param_1,longlong *param_2,char *param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  ulonglong local_res8;
  char *local_res18;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x143cc312b;
  uVar6 = 0;
  iVar3 = 0;
  iVar10 = 0;
  uVar8 = 0;
  local_res18 = param_3;
  if ((param_1 == 0) && (param_2 == (longlong *)0x0)) {
    ERR_put_error(0x14,0x187,0x43,"ssl\\ssl_mcnf.c",0x21);
    uVar8 = uVar6;
    iVar3 = iVar10;
  }
  else {
    if ((param_3 == (char *)0x0) && (local_res18 = "system_default", param_4 == 0)) {
      local_res18 = param_3;
    }
    iVar1 = conf_ssl_name_find(local_res18,&local_38);
    if (iVar1 == 0) {
      iVar3 = iVar10;
      if (param_4 == 0) {
        ERR_put_error(0x14,0x187,0x71,"ssl\\ssl_mcnf.c",0x29);
        ERR_add_error_data(2,"name=",local_res18);
      }
    }
    else {
      uVar5 = conf_ssl_get(local_38,&local_res18,&local_res8);
      uVar8 = SSL_CONF_CTX_new();
      if (uVar8 != 0) {
        uVar9 = 0x62;
        if (param_4 != 0) {
          uVar9 = 2;
        }
        if (param_1 == 0) {
          lVar7 = *param_2;
          SSL_CONF_CTX_set_ssl_ctx(uVar8,param_2);
        }
        else {
          lVar7 = *(longlong *)(param_1 + 8);
          SSL_CONF_CTX_set_ssl(uVar8,param_1);
        }
        uVar2 = uVar9 | 8;
        if (*(code **)(lVar7 + 0x28) == FUN_143ca3700) {
          uVar2 = uVar9;
        }
        uVar9 = uVar2 | 4;
        if (*(code **)(lVar7 + 0x30) == FUN_143ca3700) {
          uVar9 = uVar2;
        }
        SSL_CONF_CTX_set_flags(uVar8,uVar9);
        if (local_res8 != 0) {
          do {
            conf_ssl_get_cmd(uVar5,uVar6,&local_40,&local_48);
            iVar3 = SSL_CONF_cmd(uVar8,local_40,local_48);
            if (iVar3 < 1) {
              if (iVar3 == -2) {
                uVar4 = 0x48;
                uVar5 = 0x8b;
              }
              else {
                uVar4 = 0x4a;
                uVar5 = 0x180;
              }
              ERR_put_error(0x14,0x187,uVar5,"ssl\\ssl_mcnf.c",uVar4);
              ERR_add_error_data(6,"section=",local_res18,", cmd=",local_40,", arg=",local_48);
              goto LAB_143cc32cc;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_res8);
        }
        iVar3 = SSL_CONF_CTX_finish(uVar8);
      }
    }
  }
LAB_143cc32cc:
  SSL_CONF_CTX_free(uVar8);
  return 0 < iVar3;
}



// FUNCTION 143cc3370 DTLS_RECORD_LAYER_clear body=372 status=ok
// SIG undefined DTLS_RECORD_LAYER_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DTLS_RECORD_LAYER_clear(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  _Dst = *(void **)(param_1 + 0xeb0);
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x46)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x47);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x4d)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x4e);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x54)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x55);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  }
  uVar1 = *(undefined8 *)((longlong)_Dst + 0x28);
  uVar2 = *(undefined8 *)((longlong)_Dst + 0x38);
  uVar3 = *(undefined8 *)((longlong)_Dst + 0x48);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
  *(undefined8 *)((longlong)_Dst + 0x28) = uVar1;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar3;
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar2;
  return;
}



// FUNCTION 143cc34f0 DTLS_RECORD_LAYER_free body=478 status=ok
// SIG undefined DTLS_RECORD_LAYER_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void DTLS_RECORD_LAYER_free(longlong param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  _Dst = *(void **)(param_1 + 0xeb0);
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x46)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x47);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x28));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x4d)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x4e);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x38));
  }
  lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  while (lVar4 != 0) {
    CRYPTO_free(*(undefined8 *)(*(longlong *)(lVar4 + 8) + 0x10),"ssl\\record\\rec_layer_d1.c",0x54)
    ;
    CRYPTO_free(*(undefined8 *)(lVar4 + 8),"ssl\\record\\rec_layer_d1.c",0x55);
    pitem_free(lVar4);
    lVar4 = pqueue_pop(*(undefined8 *)((longlong)_Dst + 0x48));
  }
  uVar1 = *(undefined8 *)((longlong)_Dst + 0x28);
  uVar2 = *(undefined8 *)((longlong)_Dst + 0x38);
  uVar3 = *(undefined8 *)((longlong)_Dst + 0x48);
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x60);
  *(undefined8 *)((longlong)_Dst + 0x28) = uVar1;
  *(undefined8 *)((longlong)_Dst + 0x38) = uVar2;
  *(undefined8 *)((longlong)_Dst + 0x48) = uVar3;
  pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x28));
  pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x38));
  pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x48));
  CRYPTO_free(*(undefined8 *)(param_1 + 0xeb0),"ssl\\record\\rec_layer_d1.c",0x35);
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  return;
}



// FUNCTION 143cc36d0 DTLS_RECORD_LAYER_new body=233 status=ok
// SIG undefined DTLS_RECORD_LAYER_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 DTLS_RECORD_LAYER_new(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cc36e0;
  lVar1 = CRYPTO_malloc(0x60,"ssl\\record\\rec_layer_d1.c",0x17);
  if (lVar1 == 0) {
    ERR_put_error(0x14,0x27b,0x41,"ssl\\record\\rec_layer_d1.c",0x18,uVar3);
    return 0;
  }
  *(longlong *)(param_1 + 0xeb0) = lVar1;
  uVar3 = pqueue_new();
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  uVar3 = pqueue_new();
  *(undefined8 *)(lVar1 + 0x38) = uVar3;
  lVar2 = pqueue_new();
  *(longlong *)(lVar1 + 0x48) = lVar2;
  if (((*(longlong *)(lVar1 + 0x28) != 0) && (*(longlong *)(lVar1 + 0x38) != 0)) && (lVar2 != 0)) {
    return 1;
  }
  pqueue_free();
  pqueue_free(*(undefined8 *)(lVar1 + 0x38));
  pqueue_free(*(undefined8 *)(lVar1 + 0x48));
  CRYPTO_free(lVar1,"ssl\\record\\rec_layer_d1.c",0x27);
  *(undefined8 *)(param_1 + 0xeb0) = 0;
  return 0;
}



// FUNCTION 143cc37c0 DTLS_RECORD_LAYER_set_saved_w_epoch body=106 status=ok
// SIG undefined DTLS_RECORD_LAYER_set_saved_w_epoch(void)

void DTLS_RECORD_LAYER_set_saved_w_epoch(longlong param_1,ushort param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xeb0);
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) - 1) {
    *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_1 + 0xea0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(*(longlong *)(param_1 + 0xeb0) + 0x50);
    *(ushort *)(*(longlong *)(param_1 + 0xeb0) + 2) = param_2;
    return;
  }
  if ((uint)param_2 == *(ushort *)(lVar1 + 2) + 1) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0xea0);
    lVar1 = *(longlong *)(param_1 + 0xeb0);
    *(undefined8 *)(param_1 + 0xea0) = *(undefined8 *)(lVar1 + 0x58);
  }
  *(ushort *)(lVar1 + 2) = param_2;
  return;
}



// FUNCTION 143cc3830 do_dtls1_write body=1215 status=ok
// SIG undefined do_dtls1_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
do_dtls1_write(undefined4 *param_1,undefined4 param_2,undefined1 *param_3,ulonglong param_4,
              int param_5,longlong *param_6)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_f8 [32];
  longlong *local_d8;
  undefined4 *local_d0;
  undefined8 local_c8;
  undefined1 *local_b8;
  longlong *local_b0;
  undefined1 local_a8 [4];
  undefined4 local_a4;
  ulonglong local_a0;
  undefined1 *local_88;
  undefined1 *local_80;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_b0 = param_6;
  local_b8 = param_3;
  if (*(longlong *)(param_1 + 0x21a) != 0) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x340);
    local_d8 = (longlong *)0x145d4b8b0;
    ossl_statem_fatal(param_1,0x50,0xf5,0x44);
    return 0;
  }
  if ((*(int *)(*(longlong *)(param_1 + 0x2a) + 0xfc) != 0) &&
     (uVar7 = (**(code **)(*(longlong *)(param_1 + 2) + 0x78))(), (int)uVar7 < 1)) {
    return uVar7;
  }
  if ((param_4 == 0) && (param_5 == 0)) {
    return 0;
  }
  uVar3 = ssl_get_max_send_fragment(param_1);
  if (uVar3 < param_4) {
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x351);
    local_d8 = (longlong *)0x145d4b8b0;
    ossl_statem_fatal(param_1,0x50,0xf5);
    return 0;
  }
  if (((*(longlong *)(param_1 + 0x142) == 0) || (*(longlong *)(param_1 + 0x118) == 0)) ||
     (lVar8 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e)), lVar8 == 0)) {
    iVar4 = 0;
  }
  else {
    uVar7 = EVP_MD_CTX_md(*(undefined8 *)(param_1 + 0x11e));
    iVar4 = EVP_MD_size(uVar7);
    if (iVar4 < 0) {
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x361);
      local_d8 = (longlong *)0x145d4b8b0;
      ossl_statem_fatal(param_1,0x50,0xf5);
      return 0xffffffff;
    }
  }
  puVar1 = *(undefined1 **)(param_1 + 0x212);
  *puVar1 = (char)param_2;
  if ((**(int **)(param_1 + 2) == 0x1ffff) && (param_1[0x174] != 0x100)) {
    puVar1[1] = 0xfe;
    uVar2 = 0xff;
  }
  else {
    puVar1[1] = (char)((uint)*param_1 >> 8);
    uVar2 = *(undefined1 *)param_1;
  }
  puVar1[2] = uVar2;
  local_a4 = param_2;
  if (*(longlong *)(param_1 + 0x118) == 0) {
LAB_143cc3a21:
    iVar5 = 0;
  }
  else {
    uVar7 = FHardwareCursor::GetHandle();
    uVar3 = TResourceArray<unsigned_char,0>::GetResourceDataSize(uVar7);
    uVar3 = uVar3 & 0xf0007;
    if (uVar3 == 2) {
      iVar5 = EVP_CIPHER_CTX_iv_length(*(undefined8 *)(param_1 + 0x118));
      if (iVar5 < 2) goto LAB_143cc3a21;
    }
    else {
      iVar5 = 8;
      if ((uVar3 != 6) && (iVar5 = 0, uVar3 == 7)) {
        iVar5 = 8;
      }
    }
  }
  lVar8 = (longlong)iVar5;
  local_88 = puVar1 + lVar8 + 0xd;
  local_80 = local_b8;
  local_a0 = param_4;
  if (*(longlong *)(param_1 + 0x114) == 0) {
    _guard_xfg_dispatch_icall_nop(local_88,local_b8,param_4);
    local_80 = local_88;
  }
  else {
    iVar6 = ssl3_do_compress(param_1,local_a8);
    if (iVar6 == 0) {
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x39d);
      uVar7 = 0x8d;
      goto LAB_143cc3b93;
    }
  }
  if (((**(uint **)(param_1 + 0x2a) & 0x400) == 0) && (iVar4 != 0)) {
    iVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                      (param_1,local_a8,puVar1 + local_a0 + lVar8 + 0xd,1);
    if (iVar6 != 0) {
      local_a0 = local_a0 + (longlong)iVar4;
      goto LAB_143cc3af6;
    }
    local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3b1);
  }
  else {
LAB_143cc3af6:
    local_88 = puVar1 + 0xd;
    if (iVar5 != 0) {
      local_a0 = local_a0 + lVar8;
    }
    local_80 = local_88;
    iVar5 = (*(code *)**(undefined8 **)(*(longlong *)(param_1 + 2) + 0xc0))(param_1,local_a8,1);
    if (iVar5 < 1) {
      iVar4 = ossl_statem_in_error(param_1);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3c1);
    }
    else {
      if (((**(uint **)(param_1 + 0x2a) & 0x400) == 0) || (iVar4 == 0)) {
LAB_143cc3bc3:
        puVar1[3] = *(undefined1 *)(*(longlong *)(param_1 + 0x5ac) + 3);
        puVar1[4] = *(undefined1 *)(*(longlong *)(param_1 + 0x5ac) + 2);
        *(undefined4 *)(puVar1 + 5) = *(undefined4 *)((longlong)param_1 + 0x16a2);
        *(undefined2 *)(puVar1 + 9) = *(undefined2 *)((longlong)param_1 + 0x16a6);
        puVar1[0xb] = (char)(local_a0 >> 8);
        puVar1[0xc] = (undefined1)local_a0;
        if (*(code **)(param_1 + 0x2e) != (code *)0x0) {
          local_c8 = *(undefined8 *)(param_1 + 0x30);
          local_d8 = (longlong *)0xd;
          local_d0 = param_1;
          (**(code **)(param_1 + 0x2e))(1,0,0x100,puVar1);
        }
        local_a0 = local_a0 + 0xd;
        local_a4 = param_2;
        ssl3_record_sequence_update(param_1 + 0x5a8);
        if (param_5 == 0) {
          *(ulonglong *)(param_1 + 0x21a) = local_a0;
          *(undefined8 *)(param_1 + 0x218) = 0;
          local_d8 = local_b0;
          *(ulonglong *)(param_1 + 0x59e) = param_4;
          *(undefined1 **)(param_1 + 0x5a4) = local_b8;
          param_1[0x5a0] = param_2;
          *(ulonglong *)(param_1 + 0x5a2) = param_4;
          uVar7 = ssl3_write_pending(param_1,param_2,local_b8,param_4);
          return uVar7;
        }
        *local_b0 = local_a0;
        return 1;
      }
      iVar5 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 2) + 0xc0) + 8))
                        (param_1,local_a8,puVar1 + local_a0 + 0xd,1);
      if (iVar5 != 0) {
        local_a0 = local_a0 + (longlong)iVar4;
        goto LAB_143cc3bc3;
      }
      local_d0 = (undefined4 *)CONCAT44(local_d0._4_4_,0x3ca);
    }
  }
  uVar7 = 0x44;
LAB_143cc3b93:
  local_d8 = (longlong *)0x145d4b8b0;
  ossl_statem_fatal(param_1,0x50,0xf5,uVar7);
  return 0xffffffff;
}



// FUNCTION 143cc3cf0 dtls1_buffer_record body=544 status=ok
// SIG undefined dtls1_buffer_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_buffer_record(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar7 = 1;
  uVar2 = pqueue_size(*(undefined8 *)(param_2 + 8));
  if (99 < uVar2) {
    return 0;
  }
  puVar3 = (undefined8 *)CRYPTO_malloc(0x80,"ssl\\record\\rec_layer_d1.c");
  lVar4 = pitem_new(param_3);
  if ((puVar3 == (undefined8 *)0x0) || (lVar4 == 0)) {
    CRYPTO_free(puVar3,"ssl\\record\\rec_layer_d1.c",0x97);
    pitem_free(lVar4);
    ossl_statem_fatal(param_1,0x50,0xf7,0x44,"ssl\\record\\rec_layer_d1.c",CONCAT44(uVar7,0x9a));
  }
  else {
    *puVar3 = *(undefined8 *)(param_1 + 0x1648);
    puVar3[1] = *(undefined8 *)(param_1 + 0x1650);
    uVar6 = *(undefined8 *)(param_1 + 0x828);
    puVar3[2] = *(undefined8 *)(param_1 + 0x820);
    puVar3[3] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0x838);
    puVar3[4] = *(undefined8 *)(param_1 + 0x830);
    puVar3[5] = uVar6;
    puVar3[6] = *(undefined8 *)(param_1 + 0x840);
    uVar6 = *(undefined8 *)(param_1 + 0xd50);
    puVar3[7] = *(undefined8 *)(param_1 + 0xd48);
    puVar3[8] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xd60);
    puVar3[9] = *(undefined8 *)(param_1 + 0xd58);
    puVar3[10] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xd70);
    puVar3[0xb] = *(undefined8 *)(param_1 + 0xd68);
    puVar3[0xc] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0xd80);
    puVar3[0xd] = *(undefined8 *)(param_1 + 0xd78);
    puVar3[0xe] = uVar6;
    puVar3[0xf] = *(undefined8 *)(param_1 + 0xd88);
    *(undefined8 **)(lVar4 + 8) = puVar3;
    *(undefined8 *)(param_1 + 0x1648) = 0;
    *(undefined8 *)(param_1 + 0x1650) = 0;
    *(undefined8 *)(param_1 + 0x820) = 0;
    *(undefined8 *)(param_1 + 0x828) = 0;
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
    *(undefined8 *)(param_1 + 0x840) = 0;
    _guard_xfg_dispatch_icall_nop((undefined8 *)(param_1 + 0xd48),0,0x900);
    iVar1 = ssl3_setup_buffers(param_1);
    if (iVar1 == 0) {
      CRYPTO_free(puVar3[2],"ssl\\record\\rec_layer_d1.c",0xb6);
      uVar6 = 0xb7;
    }
    else {
      lVar5 = pqueue_insert(*(undefined8 *)(param_2 + 8),lVar4);
      if (lVar5 != 0) {
        return 1;
      }
      ossl_statem_fatal(param_1,0x50,0xf7,0x44,"ssl\\record\\rec_layer_d1.c",CONCAT44(uVar7,0xbf));
      CRYPTO_free(puVar3[2],"ssl\\record\\rec_layer_d1.c",0xc0);
      uVar6 = 0xc1;
    }
    CRYPTO_free(puVar3,"ssl\\record\\rec_layer_d1.c",uVar6);
    pitem_free(lVar4);
  }
  return 0xffffffff;
}



// FUNCTION 143cc3f10 dtls1_copy_record body=200 status=ok
// SIG undefined dtls1_copy_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_copy_record(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_2 + 8);
  SSL3_BUFFER_release(param_1 + 0x820);
  *(longlong *)(param_1 + 0x1648) = *plVar1;
  *(longlong *)(param_1 + 0x1650) = plVar1[1];
  lVar2 = plVar1[3];
  *(longlong *)(param_1 + 0x820) = plVar1[2];
  *(longlong *)(param_1 + 0x828) = lVar2;
  lVar2 = plVar1[5];
  *(longlong *)(param_1 + 0x830) = plVar1[4];
  *(longlong *)(param_1 + 0x838) = lVar2;
  *(longlong *)(param_1 + 0x840) = plVar1[6];
  lVar2 = plVar1[8];
  *(longlong *)(param_1 + 0xd48) = plVar1[7];
  *(longlong *)(param_1 + 0xd50) = lVar2;
  lVar2 = plVar1[10];
  *(longlong *)(param_1 + 0xd58) = plVar1[9];
  *(longlong *)(param_1 + 0xd60) = lVar2;
  lVar2 = plVar1[0xc];
  *(longlong *)(param_1 + 0xd68) = plVar1[0xb];
  *(longlong *)(param_1 + 0xd70) = lVar2;
  lVar2 = plVar1[0xe];
  *(longlong *)(param_1 + 0xd78) = plVar1[0xd];
  *(longlong *)(param_1 + 0xd80) = lVar2;
  *(longlong *)(param_1 + 0xd88) = plVar1[0xf];
  lVar2 = *plVar1;
  *(undefined4 *)(param_1 + 0x169a) = *(undefined4 *)(lVar2 + 5);
  *(undefined2 *)(param_1 + 0x169e) = *(undefined2 *)(lVar2 + 9);
  return 1;
}



// FUNCTION 143cc3fe0 dtls1_get_bitmap body=81 status=ok
// SIG undefined dtls1_get_bitmap(void)

ushort * dtls1_get_bitmap(longlong param_1,longlong param_2,undefined4 *param_3)

{
  ushort uVar1;
  ushort *puVar2;
  
  *param_3 = 0;
  puVar2 = *(ushort **)(param_1 + 0x16b0);
  uVar1 = *puVar2;
  if (*(uint *)(param_2 + 0x3c) == (uint)uVar1) {
    return puVar2 + 2;
  }
  if (((*(uint *)(param_2 + 0x3c) == uVar1 + 1) && (puVar2[0x10] != uVar1)) &&
     (*(int *)(param_2 + 4) - 0x15U < 2)) {
    *param_3 = 1;
    return (ushort *)(*(longlong *)(param_1 + 0x16b0) + 0x10);
  }
  return (ushort *)0x0;
}



// FUNCTION 143cc4040 dtls1_process_buffered_records body=497 status=ok
// SIG undefined dtls1_process_buffered_records(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_process_buffered_records(longlong param_1)

{
  ushort uVar1;
  short *psVar2;
  ushort *puVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = FHardwareCursor::GetHandle(*(undefined8 *)(*(longlong *)(param_1 + 0x16b0) + 0x28));
  if (lVar5 != 0) {
    psVar2 = *(short **)(param_1 + 0x16b0);
    if (psVar2[0x10] != *psVar2) {
      return 1;
    }
    if (*(longlong *)(param_1 + 0x840) != 0) {
      return 1;
    }
    lVar5 = FHardwareCursor::GetHandle(*(undefined8 *)(psVar2 + 0x14));
    while (lVar5 != 0) {
      lVar5 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0x16b0) + 0x28));
      if (lVar5 != 0) {
        dtls1_copy_record(param_1,lVar5);
        CRYPTO_free(*(undefined8 *)(lVar5 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
        pitem_free(lVar5);
      }
      puVar3 = *(ushort **)(param_1 + 0x16b0);
      uVar1 = *puVar3;
      if (*(uint *)(param_1 + 0xd84) == (uint)uVar1) {
        lVar5 = 4;
      }
      else {
        if (((*(uint *)(param_1 + 0xd84) != uVar1 + 1) || (puVar3[0x10] == uVar1)) ||
           (1 < *(int *)(param_1 + 0xd4c) - 0x15U)) goto LAB_143cc4209;
        lVar5 = 0x10;
      }
      lVar5 = (longlong)puVar3 + lVar5;
      if (lVar5 == 0) {
LAB_143cc4209:
        ossl_statem_fatal(param_1,0x50,0x1a8,0x44,"ssl\\record\\rec_layer_d1.c",0x10b);
        return 0;
      }
      iVar4 = dtls1_record_replay_check(param_1,lVar5);
      if ((iVar4 == 0) || (iVar4 = dtls1_process_record(param_1,lVar5), iVar4 == 0)) {
        iVar4 = ossl_statem_in_error(param_1);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        *(undefined8 *)(param_1 + 0xd50) = 0;
        *(undefined8 *)(param_1 + 0x1650) = 0;
      }
      else {
        iVar4 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x16b0) + 0x30,param_1 + 0xd88);
        if (iVar4 < 0) {
          return 0;
        }
      }
      lVar5 = FHardwareCursor::GetHandle(*(undefined8 *)(*(longlong *)(param_1 + 0x16b0) + 0x28));
    }
  }
  (*(undefined2 **)(param_1 + 0x16b0))[0x18] = **(undefined2 **)(param_1 + 0x16b0);
  (*(short **)(param_1 + 0x16b0))[0x10] = **(short **)(param_1 + 0x16b0) + 1;
  return 1;
}



// FUNCTION 143cc4240 dtls1_read_bytes body=1954 status=ok
// SIG undefined dtls1_read_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
dtls1_read_bytes(WriteBytesMem *param_1,int param_2,undefined4 *param_3,void *param_4,
                ulonglong param_5,int param_6,size_t *param_7)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  uchar *puVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  undefined4 uVar11;
  code *pcVar12;
  undefined1 auStack_108 [32];
  char *local_e8;
  WriteBytesMem *local_e0;
  undefined8 local_d8;
  void *local_c8;
  char local_b8 [96];
  size_t *local_58 [2];
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x143cc4255;
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  local_58[0] = param_7;
  pcVar9 = (code *)0x0;
  local_c8 = param_4;
  if ((*(longlong *)(param_1 + 0x820) != 0) || (iVar4 = ssl3_setup_buffers(), iVar4 != 0)) {
    if (((param_2 == 0) || (param_2 - 0x16U < 2)) && ((param_6 == 0 || (param_2 == 0x17)))) {
      iVar4 = ossl_statem_get_in_handshake(param_1);
      if ((iVar4 == 0) && (iVar4 = FSlateAccessibleWidget::GetId(param_1), iVar4 != 0)) {
        uVar5 = (**(code **)(param_1 + 0x30))(param_1);
        if ((int)uVar5 < 0) {
          return uVar5;
        }
        if ((int)uVar5 == 0) {
          return 0xffffffff;
        }
      }
LAB_143cc4350:
      while( true ) {
        do {
          *(undefined4 *)(param_1 + 0x28) = 1;
          iVar4 = SSL_is_init_finished(param_1);
          if (((iVar4 != 0) && (*(longlong *)(param_1 + 0xd50) == 0)) &&
             (lVar6 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0x16b0) + 0x48)),
             lVar6 != 0)) {
            dtls1_copy_record(param_1,lVar6);
            CRYPTO_free(*(undefined8 *)(lVar6 + 8),"ssl\\record\\rec_layer_d1.c",0x196);
            pitem_free(lVar6);
          }
          iVar4 = dtls1_handle_timeout(param_1);
        } while (0 < iVar4);
        iVar4 = ossl_statem_in_error(param_1);
        if (iVar4 != 0) {
          return 0xffffffff;
        }
        if ((*(longlong *)(param_1 + 0xd50) != 0) && (*(int *)(param_1 + 0x80c) != 0xf1)) break;
        *(undefined8 *)(param_1 + 0x810) = 0;
        iVar4 = dtls1_get_record(param_1);
        if (0 < iVar4) {
          *(undefined8 *)(param_1 + 0x810) = 1;
          break;
        }
        uVar5 = dtls1_read_failed(param_1,iVar4);
        if ((int)uVar5 < 1) {
          return uVar5;
        }
      }
      iVar4 = *(int *)(param_1 + 0xd4c);
      if ((iVar4 != 0x15) && (*(longlong *)(param_1 + 0xd50) != 0)) {
        *(undefined4 *)(param_1 + 0x16ac) = 0;
        iVar4 = *(int *)(param_1 + 0xd4c);
      }
      if ((((iVar4 - 0x14U & 0xfffffffd) != 0) &&
          (iVar4 = FSlateAccessibleWidget::GetId(param_1), iVar4 == 0)) &&
         ((*(int *)(*(longlong *)(param_1 + 0xb0) + 500) != 0 ||
          (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) != 0)))) {
        dtls1_stop_timer(param_1);
      }
      if ((*(int *)(*(longlong *)(param_1 + 0xa8) + 0xf0) == 0) ||
         (*(int *)(param_1 + 0xd4c) == 0x16)) {
        if ((*(uint *)(param_1 + 0x44) & 2) != 0) {
          *(undefined8 *)(param_1 + 0xd50) = 0;
          *(undefined4 *)(param_1 + 0xd80) = 1;
          *(undefined4 *)(param_1 + 0x28) = 1;
          return 0;
        }
        iVar4 = *(int *)(param_1 + 0xd4c);
        if (param_2 == iVar4) {
LAB_143cc48d4:
          iVar4 = FSlateAccessibleWidget::GetId(param_1);
          if ((iVar4 == 0) || ((param_2 != 0x17 || (*(longlong *)(param_1 + 0x430) != 0)))) {
            if (param_3 != (undefined4 *)0x0) {
              *param_3 = *(undefined4 *)(param_1 + 0xd4c);
            }
            uVar3 = *(ulonglong *)(param_1 + 0xd50);
            if (param_5 == 0) {
              if (uVar3 == 0) {
                *(undefined4 *)(param_1 + 0xd80) = 1;
              }
              return 0;
            }
            if (uVar3 < param_5) {
              param_5 = uVar3;
            }
            _guard_xfg_dispatch_icall_nop
                      (local_c8,(void *)(*(longlong *)(param_1 + 0xd68) +
                                        *(longlong *)(param_1 + 0xd60)),param_5);
            if (param_6 == 0) {
              *(ulonglong *)(param_1 + 0xd60) = *(longlong *)(param_1 + 0xd60) + param_5;
              lVar6 = *(longlong *)(param_1 + 0xd50) - param_5;
              *(longlong *)(param_1 + 0xd50) = lVar6;
              if (lVar6 != 0) goto LAB_143cc49ae;
              *(undefined4 *)(param_1 + 0x80c) = 0xf0;
              *(undefined8 *)(param_1 + 0xd60) = 0;
            }
            else if (*(longlong *)(param_1 + 0xd50) != 0) goto LAB_143cc49ae;
            *(undefined4 *)(param_1 + 0xd80) = 1;
LAB_143cc49ae:
            *local_58[0] = param_5;
            return 1;
          }
          local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x1f9);
          uVar8 = 10;
          uVar11 = 100;
          goto LAB_143cc42e4;
        }
        if (iVar4 == 0x14) {
          if ((param_2 == 0x16) && (param_3 != (undefined4 *)0x0)) goto LAB_143cc48d4;
        }
        else if (iVar4 == 0x15) {
          lVar6 = *(longlong *)(param_1 + 0xd50);
          if (((0x7ffffffffffffffe < lVar6 - 1U) ||
              (cVar1 = *(char *)(*(longlong *)(param_1 + 0xd68) + *(longlong *)(param_1 + 0xd60)),
              lVar6 == 1)) ||
             (bVar2 = ((char *)(*(longlong *)(param_1 + 0xd68) + *(longlong *)(param_1 + 0xd60)))[1]
             , lVar6 != 2)) {
            local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x23e);
            uVar8 = 10;
            uVar11 = 0xcd;
            goto LAB_143cc42e4;
          }
          if (*(code **)(param_1 + 0xb8) != (code *)0x0) {
            local_d8 = *(undefined8 *)(param_1 + 0xc0);
            local_e8 = (char *)0x2;
            local_e0 = param_1;
            (**(code **)(param_1 + 0xb8))(0,*(undefined4 *)param_1,0x15);
          }
          pcVar12 = *(code **)(param_1 + 0x568);
          if ((pcVar12 == (code *)0x0) &&
             (pcVar12 = pcVar9, *(code **)(*(longlong *)(param_1 + 0x598) + 0x108) != (code *)0x0))
          {
            pcVar12 = *(code **)(*(longlong *)(param_1 + 0x598) + 0x108);
          }
          uVar10 = (uint)bVar2;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(param_1,0x4004,CONCAT11(cVar1,bVar2));
          }
          if (cVar1 != '\x01') {
            if (cVar1 == '\x02') {
              *(undefined4 *)(param_1 + 0x28) = 1;
              local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x274);
              local_e8 = "ssl\\record\\rec_layer_d1.c";
              *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xf8) = uVar10;
              ossl_statem_fatal(param_1,0xffffffff,0x102,bVar2 + 1000);
              BIO_snprintf(local_58,0x10,&DAT_144cd4c80,bVar2);
              ERR_add_error_data(2,"SSL alert number ",local_58);
              *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
              *(undefined4 *)(param_1 + 0xd80) = 1;
              SSL_CTX_remove_session
                        (*(undefined8 *)(param_1 + 0x738),*(undefined8 *)(param_1 + 0x508));
              return 0;
            }
            local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x27d);
            uVar8 = 0x2f;
            uVar11 = 0xf6;
            goto LAB_143cc42e4;
          }
          *(uint *)(*(longlong *)(param_1 + 0xa8) + 0xf4) = uVar10;
          *(undefined4 *)(param_1 + 0xd80) = 1;
          *(int *)(param_1 + 0x16ac) = *(int *)(param_1 + 0x16ac) + 1;
          if (*(int *)(param_1 + 0x16ac) == 5) {
            local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,599);
            uVar8 = 10;
            uVar11 = 0x199;
            goto LAB_143cc42e4;
          }
          pcVar9 = pcVar12;
          if (uVar10 == 0) {
            *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 2;
            return 0;
          }
          goto LAB_143cc4350;
        }
        if ((*(uint *)(param_1 + 0x44) & 1) != 0) {
          *(undefined4 *)(param_1 + 0x28) = 1;
          *(undefined8 *)(param_1 + 0xd50) = 0;
          *(undefined4 *)(param_1 + 0xd80) = 1;
          return 0;
        }
        if (iVar4 != 0x14) {
          if ((iVar4 != 0x16) || (iVar4 = ossl_statem_get_in_handshake(param_1), iVar4 != 0)) {
            iVar4 = *(int *)(param_1 + 0xd4c);
            if (iVar4 < 0x14) {
LAB_143cc48ab:
              local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x2f7);
            }
            else {
              if (iVar4 < 0x17) {
                local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x302);
                uVar8 = 10;
                goto LAB_143cc42d5;
              }
              if (iVar4 != 0x17) goto LAB_143cc48ab;
              if (((*(int *)(*(longlong *)(param_1 + 0xa8) + 0x110) != 0) &&
                  (*(int *)(*(longlong *)(param_1 + 0xa8) + 0x108) != 0)) &&
                 (iVar4 = ossl_statem_app_data_allowed(param_1), iVar4 != 0)) {
                *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x110) = 2;
                return 0xffffffff;
              }
              local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x313);
            }
            uVar8 = 10;
            uVar11 = 0xf5;
            goto LAB_143cc42e4;
          }
          if ((*(uint *)(param_1 + 0xd84) == (uint)**(ushort **)(param_1 + 0x16b0)) &&
             (0xb < *(ulonglong *)(param_1 + 0xd50))) {
            dtls1_get_message_header(*(undefined8 *)(param_1 + 0xd68),local_b8);
            if (local_b8[0] == '\x14') {
              iVar4 = dtls1_check_timeout_num();
              if (iVar4 < 0) {
                return 0xffffffff;
              }
              iVar4 = dtls1_retransmit_buffered_messages(param_1);
              if ((iVar4 < 1) && (iVar4 = ossl_statem_in_error(param_1), iVar4 != 0)) {
                return 0xffffffff;
              }
              *(undefined8 *)(param_1 + 0xd50) = 0;
              *(undefined4 *)(param_1 + 0xd80) = 1;
            }
            else {
              iVar4 = SSL_is_init_finished(param_1);
              if (iVar4 == 0) {
                uVar8 = 0x50;
                local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x2d2);
                uVar11 = 0x44;
                goto LAB_143cc42e4;
              }
              ossl_statem_set_in_init(param_1,1);
              uVar5 = (**(code **)(param_1 + 0x30))(param_1);
              if ((int)uVar5 < 0) {
                return uVar5;
              }
              if ((int)uVar5 == 0) {
                return 0xffffffff;
              }
            }
            if ((((byte)param_1[0x5c8] & 4) == 0) && (*(longlong *)(param_1 + 0x840) == 0)) {
              *(undefined4 *)(param_1 + 0x28) = 3;
              puVar7 = AK::WriteBytesMem::Bytes(param_1);
              BIO_clear_flags(puVar7,0xf);
              BIO_set_flags(puVar7,9);
              return 0xffffffff;
            }
            goto LAB_143cc4350;
          }
        }
      }
      else {
        iVar4 = dtls1_buffer_record(param_1,*(longlong *)(param_1 + 0x16b0) + 0x40,param_1 + 0xd88);
        if (iVar4 < 0) {
          return 0xffffffff;
        }
      }
      *(undefined8 *)(param_1 + 0xd50) = 0;
      *(undefined4 *)(param_1 + 0xd80) = 1;
      goto LAB_143cc4350;
    }
    local_e0 = (WriteBytesMem *)CONCAT44(local_e0._4_4_,0x16a);
    uVar8 = 0x50;
LAB_143cc42d5:
    uVar11 = 0x44;
LAB_143cc42e4:
    local_e8 = "ssl\\record\\rec_layer_d1.c";
    ossl_statem_fatal(param_1,uVar8,0x102,uVar11);
  }
  return 0xffffffff;
}



// FUNCTION 143cc49f0 dtls1_reset_seq_numbers body=129 status=ok
// SIG undefined dtls1_reset_seq_numbers(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_reset_seq_numbers(longlong param_1,ulonglong param_2)

{
  short *psVar1;
  longlong lVar2;
  
  psVar1 = *(short **)(param_1 + 0x16b0);
  if ((param_2 & 1) != 0) {
    *psVar1 = *psVar1 + 1;
    lVar2 = *(longlong *)(param_1 + 0x16b0);
    *(undefined8 *)(lVar2 + 4) = *(undefined8 *)(lVar2 + 0x10);
    *(undefined4 *)(lVar2 + 0xc) = *(undefined4 *)(lVar2 + 0x18);
    lVar2 = *(longlong *)(param_1 + 0x16b0);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    *(undefined4 *)(lVar2 + 0x18) = 0;
    dtls1_clear_received_buffer();
    *(undefined8 *)(param_1 + 0x1698) = 0;
    return;
  }
  *(undefined8 *)(psVar1 + 0x28) = *(undefined8 *)(param_1 + 0x16a0);
  psVar1 = (short *)(*(longlong *)(param_1 + 0x16b0) + 2);
  *psVar1 = *psVar1 + 1;
  *(undefined8 *)(param_1 + 0x16a0) = 0;
  return;
}



// FUNCTION 143cc4a80 dtls1_retrieve_buffered_record body=107 status=ok
// SIG undefined dtls1_retrieve_buffered_record(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_retrieve_buffered_record(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(param_2 + 8));
  if (lVar1 != 0) {
    dtls1_copy_record(param_1,lVar1);
    CRYPTO_free(*(undefined8 *)(lVar1 + 8),"ssl\\record\\rec_layer_d1.c",0xd1);
    pitem_free(lVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 143cc4af0 dtls1_write_bytes body=107 status=ok
// SIG undefined dtls1_write_bytes(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_write_bytes(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  undefined8 uVar1;
  
  if (0x4000 < param_4) {
    ossl_statem_fatal(param_1,0x50,0x221,0x44,"ssl\\record\\rec_layer_d1.c",0x325,0x143cc4afa);
    return 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = 1;
  uVar1 = do_dtls1_write();
  return uVar1;
}



// FUNCTION 143cc4b60 dtls1_handshake_write body=25 status=ok
// SIG undefined dtls1_handshake_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_handshake_write(undefined8 param_1)

{
  dtls1_do_write(param_1,0x16);
  return;
}



// FUNCTION 143cc4b80 dtls1_check_timeout_num body=188 status=ok
// SIG undefined dtls1_check_timeout_num(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_check_timeout_num(longlong param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  uVar5 = 1;
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f0);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    uVar5 = 1;
    uVar2 = SSL_get_options();
    if ((uVar2 >> 0xc & 1) == 0) {
      uVar4 = SSL_get_wbio(param_1);
      iVar3 = BIO_ctrl(uVar4,0x2f,0);
      if ((ulonglong)(longlong)iVar3 < *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130)) {
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
      }
    }
  }
  if (0xc < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    ossl_statem_fatal(param_1,0xffffffff,0x13e,0x138,"ssl\\d1_lib.c",CONCAT44(uVar5,0x17e));
    return 0xffffffff;
  }
  return 0;
}



// FUNCTION 143cc4c40 dtls1_clear body=369 status=ok
// SIG undefined dtls1_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_clear(int *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  DTLS_RECORD_LAYER_clear(param_1 + 0x200);
  lVar1 = *(longlong *)(param_1 + 0x2c);
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + 0x208);
    uVar2 = *(undefined8 *)(lVar1 + 0x118);
    uVar3 = *(undefined8 *)(lVar1 + 0x128);
    uVar4 = *(undefined8 *)(lVar1 + 0x120);
    uVar5 = *(undefined8 *)(lVar1 + 0x130);
    dtls1_clear_queues(param_1);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x2c),0,0x210);
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x208) = uVar7;
    if (param_1[0xe] != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x100) = 0x100;
    }
    uVar6 = SSL_get_options(param_1);
    if ((uVar6 >> 0xc & 1) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x130) = uVar5;
      *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x128) = uVar3;
    }
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x118) = uVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0x2c) + 0x120) = uVar4;
  }
  uVar7 = ssl3_clear(param_1);
  if ((int)uVar7 == 0) {
    return uVar7;
  }
  if (**(int **)(param_1 + 2) == 0x1ffff) {
    *param_1 = 0xfefd;
    return 1;
  }
  if ((param_1[0x171] & 0x8000U) != 0) {
    param_1[0x179] = 0x100;
    *param_1 = 0x100;
    return 1;
  }
  *param_1 = **(int **)(param_1 + 2);
  return 1;
}



// FUNCTION 143cc4dc0 dtls1_clear_queues body=111 status=ok
// SIG undefined dtls1_clear_queues(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_clear_queues(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  while (lVar1 != 0) {
    dtls1_hm_fragment_free(*(undefined8 *)(lVar1 + 8));
    pitem_free(lVar1);
    lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  }
  dtls1_clear_sent_buffer(param_1);
  return;
}



// FUNCTION 143cc4e30 dtls1_clear_received_buffer body=104 status=ok
// SIG undefined dtls1_clear_received_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_clear_received_buffer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  while (lVar1 != 0) {
    dtls1_hm_fragment_free(*(undefined8 *)(lVar1 + 8));
    pitem_free(lVar1);
    lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  }
  return;
}



// FUNCTION 143cc4ea0 dtls1_clear_sent_buffer body=104 status=ok
// SIG undefined dtls1_clear_sent_buffer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_clear_sent_buffer(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  while (lVar1 != 0) {
    dtls1_hm_fragment_free(*(undefined8 *)(lVar1 + 8));
    pitem_free(lVar1);
    lVar1 = pqueue_pop(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  }
  return;
}



// FUNCTION 143cc4f10 dtls1_ctrl body=594 status=ok
// SIG undefined dtls1_ctrl(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong dtls1_ctrl(longlong param_1,int param_2,uint param_3,undefined8 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 uVar7;
  int local_18;
  int local_14;
  undefined8 uStack_10;
  
  uStack_10 = 0x143cc4f20;
  if (param_2 == 0x11) {
    if ((int)param_3 < 0xd0) {
      return 0;
    }
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)(int)param_3;
    return (ulonglong)param_3;
  }
  if (param_2 == 0x49) {
    lVar6 = dtls1_get_timeout(param_1,param_4);
    uVar3 = 0;
    if (lVar6 != 0) {
      uVar3 = 1;
    }
  }
  else {
    if (param_2 != 0x4a) {
      if (param_2 != 0x78) {
        if (param_2 == 0x79) {
          return 0x100;
        }
        uVar5 = FUN_143cc60d0(param_1);
        return uVar5;
      }
      if ((int)param_3 < 0x100) {
        return 0;
      }
      *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) = (longlong)(int)param_3;
      return 1;
    }
    lVar6 = dtls1_get_timeout(param_1,&local_18);
    uVar3 = 0;
    if (((lVar6 != 0) && (uVar3 = 0, local_18 < 1)) && (local_14 < 1)) {
      lVar6 = *(longlong *)(param_1 + 0xb0);
      if (*(code **)(lVar6 + 0x208) == (code *)0x0) {
        *(int *)(lVar6 + 0x1fc) = *(int *)(lVar6 + 0x1fc) * 2;
        if (60000000 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 60000000;
        }
        dtls1_start_timer(param_1);
      }
      else {
        uVar2 = (**(code **)(lVar6 + 0x208))(param_1);
        *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar2;
      }
      piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f0);
      *piVar1 = *piVar1 + 1;
      if ((2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) &&
         (uVar3 = SSL_get_options(param_1), (uVar3 >> 0xc & 1) == 0)) {
        uVar7 = SSL_get_wbio(param_1);
        iVar4 = BIO_ctrl(uVar7,0x2f,0);
        if ((ulonglong)(longlong)iVar4 < *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130)) {
          *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar4;
        }
      }
      if (*(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0) < 0xd) {
        piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1e8);
        *piVar1 = *piVar1 + 1;
        if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1e8)) {
          *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1e8) = 1;
        }
        dtls1_start_timer(param_1);
        uVar5 = dtls1_retransmit_buffered_messages(param_1);
        return uVar5;
      }
      ossl_statem_fatal(param_1,0xffffffff,0x13e,0x138,"ssl\\d1_lib.c",0x17e);
      return 0xffffffff;
    }
  }
  return (ulonglong)uVar3;
}



// FUNCTION 143cc5170 dtls1_free body=126 status=ok
// SIG undefined dtls1_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_free(longlong param_1)

{
  DTLS_RECORD_LAYER_free(param_1 + 0x800);
  ssl3_free(param_1);
  dtls1_clear_queues(param_1);
  pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x118));
  pqueue_free(*(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x120));
  CRYPTO_free(*(undefined8 *)(param_1 + 0xb0),"ssl\\d1_lib.c",0x96);
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 143cc51f0 dtls1_get_timeout body=266 status=ok
// SIG undefined dtls1_get_timeout(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * dtls1_get_timeout(longlong param_1,int *param_2)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(int *)(*(longlong *)(param_1 + 0xb0) + 500) == 0) &&
     (*(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) == 0)) {
    param_2 = (int *)0x0;
  }
  else {
    GetSystemTime(&local_20);
    SystemTimeToFileTime(&local_20,&local_28);
    iVar4 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
    iVar5 = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar4 * -10000000) / 10;
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if ((iVar4 <= *(int *)(lVar2 + 500)) &&
       ((*(int *)(lVar2 + 500) != iVar4 || (iVar5 < *(int *)(lVar2 + 0x1f8))))) {
      uVar3 = *(undefined8 *)(lVar2 + 500);
      *(undefined8 *)param_2 = uVar3;
      iVar4 = (int)uVar3 - iVar4;
      piVar1 = param_2 + 1;
      *piVar1 = *piVar1 - iVar5;
      iVar5 = param_2[1];
      *param_2 = iVar4;
      if (*piVar1 < 0) {
        iVar4 = iVar4 + -1;
        iVar5 = iVar5 + 1000000;
        *param_2 = iVar4;
        param_2[1] = iVar5;
      }
      if (iVar4 != 0) {
        return param_2;
      }
      if (14999 < iVar5) {
        return param_2;
      }
    }
    param_2[0] = 0;
    param_2[1] = 0;
  }
  return param_2;
}



// FUNCTION 143cc5300 dtls1_handle_timeout body=376 status=ok
// SIG undefined dtls1_handle_timeout(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_handle_timeout(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  int local_res10;
  int local_res14;
  undefined4 uVar7;
  
  uVar7 = 1;
  lVar5 = dtls1_get_timeout(param_1,&local_res10);
  if (((lVar5 == 0) || (0 < local_res10)) || (0 < local_res14)) {
    return 0;
  }
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (*(code **)(lVar5 + 0x208) == (code *)0x0) {
    *(int *)(lVar5 + 0x1fc) = *(int *)(lVar5 + 0x1fc) * 2;
    if (60000000 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc)) {
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 60000000;
    }
    dtls1_start_timer(param_1);
  }
  else {
    uVar2 = (**(code **)(lVar5 + 0x208))(param_1);
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar2;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1f0);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    uVar3 = SSL_get_options(param_1);
    if ((uVar3 >> 0xc & 1) == 0) {
      uVar6 = SSL_get_wbio(param_1);
      iVar4 = BIO_ctrl(uVar6,0x2f,0);
      if ((ulonglong)(longlong)iVar4 < *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130)) {
        *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar4;
      }
    }
  }
  if (0xc < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1f0)) {
    ossl_statem_fatal(param_1,0xffffffff,0x13e,0x138,"ssl\\d1_lib.c",CONCAT44(uVar7,0x17e));
    return 0xffffffff;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 0x1e8);
  *piVar1 = *piVar1 + 1;
  if (2 < *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1e8)) {
    *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1e8) = 1;
  }
  dtls1_start_timer(param_1);
  uVar6 = dtls1_retransmit_buffered_messages(param_1);
  return uVar6;
}



// FUNCTION 143cc5480 dtls1_is_timer_expired body=59 status=ok
// SIG undefined dtls1_is_timer_expired(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8
dtls1_is_timer_expired(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  int local_res10;
  int local_res14;
  
  lVar1 = dtls1_get_timeout(param_1,&local_res10,param_3,param_4,0x143cc548a);
  if (((lVar1 != 0) && (local_res10 < 1)) && (local_res14 < 1)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cc54c0 dtls1_min_mtu body=51 status=ok
// SIG undefined dtls1_min_mtu(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong dtls1_min_mtu(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x143cc54ca;
  uVar2 = SSL_get_wbio();
  uVar1 = BIO_ctrl(uVar2,0x31,0,0,uVar3);
  return 0x100 - (ulonglong)uVar1;
}



// FUNCTION 143cc5500 dtls1_new body=263 status=ok
// SIG undefined dtls1_new(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_new(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  iVar1 = DTLS_RECORD_LAYER_new(param_1 + 0x800);
  if ((iVar1 != 0) && (iVar1 = ssl3_new(param_1), iVar1 != 0)) {
    lVar2 = CRYPTO_zalloc(0x210,"ssl\\d1_lib.c",0x4d);
    if (lVar2 != 0) {
      uVar3 = pqueue_new();
      *(undefined8 *)(lVar2 + 0x118) = uVar3;
      lVar4 = pqueue_new();
      *(longlong *)(lVar2 + 0x120) = lVar4;
      if (*(int *)(param_1 + 0x38) != 0) {
        *(undefined8 *)(lVar2 + 0x100) = 0x100;
      }
      *(undefined8 *)(lVar2 + 0x128) = 0;
      *(undefined8 *)(lVar2 + 0x130) = 0;
      if ((*(longlong *)(lVar2 + 0x118) != 0) && (lVar4 != 0)) {
        *(longlong *)(param_1 + 0xb0) = lVar2;
        iVar1 = (**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1);
        if (iVar1 == 0) {
          return 0;
        }
        return 1;
      }
      pqueue_free();
      pqueue_free(*(undefined8 *)(lVar2 + 0x120));
      CRYPTO_free(lVar2,"ssl\\d1_lib.c",0x5f);
    }
    ssl3_free(param_1);
  }
  return 0;
}



// FUNCTION 143cc5610 dtls1_query_mtu body=385 status=ok
// SIG undefined dtls1_query_mtu(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 dtls1_query_mtu(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) != 0) {
    uVar4 = SSL_get_wbio();
    uVar2 = BIO_ctrl(uVar4,0x31,0);
    *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) =
         *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x128) - (ulonglong)uVar2;
    *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0x128) = 0;
  }
  uVar4 = SSL_get_wbio(param_1);
  uVar2 = BIO_ctrl(uVar4,0x31,0);
  if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
    uVar2 = SSL_get_options(param_1);
    if ((uVar2 >> 0xc & 1) != 0) {
      return 0;
    }
    uVar4 = SSL_get_wbio(param_1);
    iVar3 = BIO_ctrl(uVar4,0x28,0);
    *(longlong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = (longlong)iVar3;
    uVar4 = SSL_get_wbio(param_1);
    uVar2 = BIO_ctrl(uVar4,0x31,0);
    if (*(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) < 0x100 - (ulonglong)uVar2) {
      uVar4 = SSL_get_wbio(param_1);
      uVar2 = BIO_ctrl(uVar4,0x31,0);
      *(ulonglong *)(*(longlong *)(param_1 + 0xb0) + 0x130) = 0x100 - (ulonglong)uVar2;
      lVar1 = *(longlong *)(param_1 + 0xb0);
      uVar4 = SSL_get_wbio(param_1);
      BIO_ctrl(uVar4,0x2a,*(undefined4 *)(lVar1 + 0x130));
    }
  }
  return 1;
}



// FUNCTION 143cc57a0 dtls1_shutdown body=22 status=ok
// SIG undefined dtls1_shutdown(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_shutdown(void)

{
  ssl3_shutdown();
  return;
}



// FUNCTION 143cc57c0 dtls1_start_timer body=251 status=ok
// SIG undefined dtls1_start_timer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_start_timer(WriteBytesMem *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  uchar *puVar4;
  longlong lVar5;
  
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if ((*(int *)(lVar5 + 500) == 0) && (*(int *)(lVar5 + 0x1f8) == 0)) {
    if (*(code **)(lVar5 + 0x208) == (code *)0x0) {
      *(undefined4 *)(lVar5 + 0x1fc) = 1000000;
    }
    else {
      uVar3 = (**(code **)(lVar5 + 0x208))(param_1,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = uVar3;
    }
  }
  get_current_time(*(longlong *)(param_1 + 0xb0) + 500);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0xb0) + 0x1fc);
  piVar1 = (int *)(*(longlong *)(param_1 + 0xb0) + 500);
  *piVar1 = *piVar1 + uVar2 / 1000000;
  *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) =
       *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) + uVar2 % 1000000;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (999999 < *(int *)(lVar5 + 0x1f8)) {
    *(int *)(lVar5 + 500) = *(int *)(lVar5 + 500) + 1;
    *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) =
         *(int *)(*(longlong *)(param_1 + 0xb0) + 0x1f8) + -1000000;
    lVar5 = *(longlong *)(param_1 + 0xb0);
  }
  puVar4 = AK::WriteBytesMem::Bytes(param_1);
  BIO_ctrl(puVar4,0x2d,0,lVar5 + 500);
  return;
}



// FUNCTION 143cc58c0 dtls1_stop_timer body=130 status=ok
// SIG undefined dtls1_stop_timer(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_stop_timer(WriteBytesMem *param_1)

{
  longlong lVar1;
  uchar *puVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  *(undefined8 *)(lVar1 + 0x1e8) = 0;
  *(undefined4 *)(lVar1 + 0x1f0) = 0;
  *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 500) = 0;
  *(undefined4 *)(*(longlong *)(param_1 + 0xb0) + 0x1fc) = 1000000;
  lVar1 = *(longlong *)(param_1 + 0xb0);
  puVar2 = AK::WriteBytesMem::Bytes(param_1);
  BIO_ctrl(puVar2,0x2d,0,lVar1 + 500);
  dtls1_clear_sent_buffer(param_1);
  return;
}



// FUNCTION 143cc5950 get_current_time body=146 status=ok
// SIG undefined get_current_time(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void get_current_time(int *param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  _FILETIME local_28;
  _SYSTEMTIME local_20;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  GetSystemTime(&local_20);
  SystemTimeToFileTime(&local_20,&local_28);
  iVar1 = (int)(((longlong)local_28 + 0xfe624e212ac18000U) / 10000000);
  *param_1 = iVar1;
  param_1[1] = ((int)((longlong)local_28 + 0xfe624e212ac18000U) + iVar1 * -10000000) / 10;
  return;
}



// FUNCTION 143cc59f0 ssl3_set_handshake_header body=86 status=ok
// SIG undefined ssl3_set_handshake_header(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_set_handshake_header(undefined8 param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  
  if (param_3 == 0x101) {
    return 1;
  }
  iVar1 = WPACKET_put_bytes__(param_2,param_3,1);
  if ((iVar1 != 0) && (iVar1 = WPACKET_start_sub_packet_len__(param_2,3), iVar1 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143cc5a50 dtls1_handshake_write body=25 status=ok
// SIG undefined dtls1_handshake_write(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void dtls1_handshake_write(undefined8 param_1)

{
  ssl3_do_write(param_1,0x16);
  return;
}



// FUNCTION 143cc5a70 FUN_143cc5a70 body=22 status=ok
// SIG undefined FUN_143cc5a70(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_143cc5a70(void)

{
  FUN_143ca3700();
  return;
}



// FUNCTION 143cc5ab0 srp_password_from_info_cb body=42 status=ok
// SIG undefined srp_password_from_info_cb(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void srp_password_from_info_cb(longlong param_1)

{
  CRYPTO_strdup(*(undefined8 *)(param_1 + 0x7e8),"ssl\\s3_lib.c",0xd38);
  return;
}



// FUNCTION 143cc5b20 ssl3_choose_cipher body=1014 status=ok
// SIG undefined ssl3_choose_cipher(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

longlong ssl3_choose_cipher(int *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  uint local_res8;
  uint local_res20;
  
  lVar11 = 0;
  local_res8 = 0;
  local_res20 = 0;
  lVar7 = EVP_sha256();
  lVar13 = 0;
  lVar10 = param_3;
  lVar15 = param_2;
  lVar9 = lVar13;
  if (((((*(uint *)(*(longlong *)(param_1 + 0x122) + 0x1c) & 0x30000) == 0) &&
       (lVar10 = param_2, lVar15 = param_3, lVar9 = 0, ((uint)param_1[0x171] >> 0x16 & 1) != 0)) &&
      (lVar10 = param_3, lVar15 = param_2, lVar9 = lVar13, ((uint)param_1[0x171] >> 0x15 & 1) != 0))
     && ((iVar4 = OPENSSL_sk_num(param_2), 0 < iVar4 &&
         (lVar8 = OPENSSL_sk_value(param_2), *(int *)(lVar8 + 0x24) == 0x80000)))) {
    iVar5 = OPENSSL_sk_num(param_3);
    iVar4 = 0;
    lVar9 = 0;
    if (0 < iVar5) {
      do {
        lVar8 = OPENSSL_sk_value(param_3);
        if (*(int *)(lVar8 + 0x24) == 0x80000) {
          lVar9 = OPENSSL_sk_new_reserve(0);
          if (lVar9 != 0) {
            OPENSSL_sk_push(lVar9,lVar8);
            while (iVar4 = iVar4 + 1, iVar4 < iVar5) {
              lVar10 = OPENSSL_sk_value(param_3,iVar4);
              if (*(int *)(lVar10 + 0x24) == 0x80000) {
                OPENSSL_sk_push(lVar9,lVar10);
              }
            }
            iVar4 = 0;
            do {
              lVar10 = OPENSSL_sk_value(param_3);
              if (*(int *)(lVar10 + 0x24) != 0x80000) {
                OPENSSL_sk_push(lVar9);
              }
              iVar4 = iVar4 + 1;
              lVar10 = lVar9;
            } while (iVar4 < iVar5);
          }
          break;
        }
        iVar4 = iVar4 + 1;
        lVar9 = lVar13;
      } while (iVar4 < iVar5);
    }
  }
  if ((((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) &&
      (iVar4 = **(int **)(param_1 + 2), 0x303 < iVar4)) && (iVar4 != 0x10000)) {
    bVar16 = false;
    if (*(longlong *)(param_1 + 0x160) != 0) {
      iVar4 = 0;
      uVar14 = 0;
      lVar13 = 0;
      do {
        if (((uVar14 < 9) && (*(longlong *)(lVar13 + 0x20 + *(longlong *)(param_1 + 0x122)) != 0))
           && (*(longlong *)(lVar13 + 0x28 + *(longlong *)(param_1 + 0x122)) != 0)) break;
        iVar4 = iVar4 + 1;
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + 0x28;
      } while (lVar13 < 0x168);
      bVar16 = iVar4 == 9;
    }
  }
  else {
    tls1_set_cert_validity(param_1);
    ssl_set_masks(param_1);
    bVar16 = false;
  }
  iVar5 = 0;
  iVar4 = OPENSSL_sk_num(lVar10);
  lVar13 = lVar11;
  if (0 < iVar4) {
    do {
      lVar11 = OPENSSL_sk_value(lVar10,iVar5);
      iVar4 = *param_1;
      if ((*(byte *)(*(longlong *)(*(int **)(param_1 + 2) + 0x30) + 0x60) & 8) == 0) {
        if ((*(int *)(lVar11 + 0x2c) <= iVar4) && (iVar4 <= *(int *)(lVar11 + 0x30))) {
          iVar4 = **(int **)(param_1 + 2);
          if ((iVar4 < 0x304) || (iVar4 == 0x10000)) {
LAB_143cc5db3:
            local_res8 = *(uint *)(lVar11 + 0x1c);
            uVar1 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x338);
            uVar2 = *(uint *)(*(longlong *)(param_1 + 0x2a) + 0x334);
            uVar3 = uVar1 | 0x40;
            if ((param_1[0x1fd] & 0x20U) == 0) {
              uVar3 = uVar1;
            }
            local_res20 = *(uint *)(lVar11 + 0x20);
            uVar1 = uVar2 | 0x20;
            if ((param_1[0x1fd] & 0x20U) == 0) {
              uVar1 = uVar2;
            }
            if (((local_res8 & 0x1c8) == 0) || (*(longlong *)(param_1 + 0x160) != 0)) {
              if (((local_res8 & uVar1) == 0) || ((local_res20 & uVar3) == 0)) {
                iVar4 = 0;
              }
              else {
                iVar4 = 1;
              }
              if ((local_res8 & 4) != 0) {
                if (iVar4 == 0) goto LAB_143cc5edc;
                iVar4 = tls1_check_ec_tmp_key(param_1,*(undefined4 *)(lVar11 + 0x18));
              }
              if (iVar4 != 0) goto LAB_143cc5e42;
            }
          }
          else {
LAB_143cc5e42:
            iVar4 = OPENSSL_sk_find(lVar15,lVar11);
            if ((-1 < iVar4) &&
               (iVar6 = ssl_security(param_1,0x10002,*(undefined4 *)(lVar11 + 0x44),0,lVar11),
               iVar6 != 0)) {
              if (((local_res8 & 4) == 0) ||
                 (((local_res20 & 8) == 0 ||
                  (*(char *)(*(longlong *)(param_1 + 0x2a) + 0x404) == '\0')))) {
                lVar11 = OPENSSL_sk_value(lVar15,iVar4);
                if ((!bVar16) || (lVar8 = ssl_md(*(undefined4 *)(lVar11 + 0x40)), lVar8 == lVar7))
                break;
                if (lVar13 == 0) {
                  lVar13 = lVar11;
                }
              }
              else if (lVar13 == 0) {
                lVar13 = OPENSSL_sk_value(lVar15,iVar4);
              }
            }
          }
        }
      }
      else {
        iVar6 = *(int *)(lVar11 + 0x34);
        iVar12 = iVar4;
        if (iVar4 == 0x100) {
          iVar12 = 0xff00;
        }
        if (iVar6 == 0x100) {
          iVar6 = 0xff00;
        }
        if (iVar12 <= iVar6) {
          iVar6 = *(int *)(lVar11 + 0x38);
          if (iVar4 == 0x100) {
            iVar4 = 0xff00;
          }
          if (iVar6 == 0x100) {
            iVar6 = 0xff00;
          }
          if (iVar6 <= iVar4) goto LAB_143cc5db3;
        }
      }
LAB_143cc5edc:
      lVar11 = lVar13;
      iVar5 = iVar5 + 1;
      iVar4 = OPENSSL_sk_num(lVar10);
      lVar13 = lVar11;
    } while (iVar5 < iVar4);
  }
  OPENSSL_sk_free(lVar9);
  return lVar11;
}



// FUNCTION 143cc5f20 ssl3_clear body=422 status=ok
// SIG undefined ssl3_clear(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 ssl3_clear(undefined4 *param_1)

{
  undefined8 uVar1;
  
  ssl3_cleanup_key_block();
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x250),"ssl\\s3_lib.c",0xd13);
  OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x260),X509_NAME_free);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2a8),"ssl\\s3_lib.c",0xd15);
  CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2b8),
                    *(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2c0),"ssl\\s3_lib.c",0xd16);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2e8),"ssl\\s3_lib.c",0xd17);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x2f0),"ssl\\s3_lib.c",0xd18);
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x240));
  EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x408));
  ssl3_free_digest_list(param_1);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3e0),"ssl\\s3_lib.c",0xd21);
  CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0x2a) + 0x3f0),"ssl\\s3_lib.c",0xd22);
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x2a),0,0x410);
  uVar1 = ssl_free_wbio_buffer(param_1);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  *param_1 = 0x300;
  CRYPTO_free(*(undefined8 *)(param_1 + 0x1b4),"ssl\\s3_lib.c",0xd2d);
  *(undefined8 *)(param_1 + 0x1b4) = 0;
  *(undefined8 *)(param_1 + 0x1b6) = 0;
  return 1;
}



// FUNCTION 143cc60d0 FUN_143cc60d0 body=1739 status=ok
// SIG undefined FUN_143cc60d0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143cc60d0(longlong param_1,undefined4 param_2,int param_3,longlong *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  uint *puVar9;
  undefined4 uVar10;
  longlong lVar11;
  int local_res10 [2];
  undefined8 in_stack_ffffffffffffffd8;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffd8 >> 0x20);
  uVar13 = 0x143cc60e8;
  uVar7 = 0;
  uVar6 = 0;
  lVar11 = (longlong)param_3;
  uVar3 = 0;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar11 = ssl_dh_to_pkey(param_4);
      if (lVar11 == 0) {
        ERR_put_error(0x14,0xd5,0x41,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd5d),uVar13);
        return 0;
      }
      uVar10 = EVP_PKEY_security_bits(lVar11);
      iVar5 = ssl_security(param_1,0x40007,uVar10,0,lVar11);
      if (iVar5 == 0) {
        ERR_put_error(0x14,0xd5,0x18a,"ssl\\s3_lib.c",0xd62,uVar13);
        EVP_PKEY_free(lVar11);
        return 0;
      }
      EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x488) + 8));
      *(longlong *)(*(longlong *)(param_1 + 0x488) + 8) = lVar11;
      goto LAB_143cc63cf;
    }
    uVar12 = CONCAT44(uVar10,0xd58);
LAB_143cc6179:
    uVar10 = 0x43;
    goto LAB_143cc617f;
  case 4:
    if (param_4 == (longlong *)0x0) {
      uVar12 = CONCAT44(uVar10,0xd7b);
      goto LAB_143cc6179;
    }
    lVar11 = FUniqueNetIdString::GetBytes(param_4);
    if (lVar11 == 0) {
      uVar12 = 0xd80;
      uVar10 = 0x7c;
      goto LAB_143cc617f;
    }
    local_res10[0] = TMeshAttributeArraySet<int>::GetNumIndices(lVar11);
    if (local_res10[0] != 0) {
      uVar7 = tls1_set_groups(param_1 + 0x690,param_1 + 0x688,local_res10,1);
      return uVar7;
    }
    goto LAB_143cc6195;
  default:
    goto switchD_143cc6120_caseD_5;
  case 6:
    ERR_put_error(0x14,0xd5,0x42,"ssl\\s3_lib.c",CONCAT44(uVar10,0xd6d),0x143cc60e8);
    uVar7 = 0;
    break;
  case 10:
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    goto switchD_143cc6120_caseD_5;
  case 0xb:
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0xa8) + 0x10c);
    *(undefined4 *)(*(longlong *)(param_1 + 0xa8) + 0x10c) = 0;
    uVar3 = (ulonglong)uVar6;
    goto switchD_143cc6120_caseD_5;
  case 0xc:
    uVar3 = (ulonglong)*(uint *)(*(longlong *)(param_1 + 0xa8) + 0x108);
    goto switchD_143cc6120_caseD_5;
  case 0xd:
    uVar3 = (ulonglong)**(uint **)(param_1 + 0xa8);
    goto switchD_143cc6120_caseD_5;
  case 0x37:
    if (param_3 == 0) {
      CRYPTO_free(*(undefined8 *)(param_1 + 0x630),"ssl\\s3_lib.c",0xd99);
      *(undefined8 *)(param_1 + 0x630) = 0;
      uVar3 = 1;
      if (param_4 == (longlong *)0x0) goto switchD_143cc6120_caseD_5;
      cVar1 = (char)*param_4;
      plVar8 = param_4;
      while ((cVar1 != '\0' && (uVar6 = (uint)uVar7, uVar6 < 0x80000000))) {
        plVar8 = (longlong *)((longlong)plVar8 + 1);
        uVar6 = uVar6 + 1;
        cVar1 = *(char *)plVar8;
        uVar7 = (ulonglong)uVar6;
      }
      if ((ulonglong)(uVar6 & 0x7fffffff) - 1 < 0xff) {
        lVar11 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xda4);
        *(longlong *)(param_1 + 0x630) = lVar11;
        if (lVar11 != 0) goto switchD_143cc6120_caseD_5;
        uVar12 = 0xda5;
        uVar10 = 0x44;
      }
      else {
        uVar12 = 0xda1;
        uVar10 = 0x13f;
      }
    }
    else {
      uVar12 = CONCAT44(uVar10,0xda9);
      uVar10 = 0x140;
    }
LAB_143cc617f:
    ERR_put_error(0x14,0xd5,uVar10,"ssl\\s3_lib.c",uVar12,uVar13);
    goto LAB_143cc6195;
  case 0x39:
    *(longlong **)(param_1 + 0x628) = param_4;
    goto LAB_143cc63cf;
  case 0x41:
    *(int *)(param_1 + 0x638) = param_3;
    goto LAB_143cc63cf;
  case 0x42:
    lVar11 = *(longlong *)(param_1 + 0x658);
    goto LAB_143cc63cc;
  case 0x43:
    *(longlong **)(param_1 + 0x658) = param_4;
    goto LAB_143cc63cf;
  case 0x44:
    lVar11 = *(longlong *)(param_1 + 0x650);
LAB_143cc63cc:
    *param_4 = lVar11;
    goto LAB_143cc63cf;
  case 0x45:
    *(longlong **)(param_1 + 0x650) = param_4;
    goto LAB_143cc63cf;
  case 0x46:
    *param_4 = *(longlong *)(param_1 + 0x660);
    uVar7 = 0xffffffff;
    if (*(ulonglong *)(param_1 + 0x668) - 1 < 0x7fffffff) {
      uVar7 = *(ulonglong *)(param_1 + 0x668) & 0xffffffff;
    }
    break;
  case 0x47:
    CRYPTO_free(*(undefined8 *)(param_1 + 0x660),"ssl\\s3_lib.c",0xdd7);
    *(longlong **)(param_1 + 0x660) = param_4;
    *(longlong *)(param_1 + 0x668) = lVar11;
LAB_143cc63cf:
    uVar3 = 1;
    goto switchD_143cc6120_caseD_5;
  case 0x58:
    if (param_3 == 0) {
      uVar7 = ssl_cert_set0_chain(param_1,0,param_4);
    }
    else {
      uVar7 = ssl_cert_set1_chain();
    }
    break;
  case 0x59:
    if (param_3 == 0) {
      uVar7 = ssl_cert_add0_chain_cert(param_1,0,param_4);
    }
    else {
      uVar7 = ssl_cert_add1_chain_cert();
    }
    break;
  case 0x5a:
    lVar11 = *(longlong *)(param_1 + 0x508);
    if (lVar11 != 0) {
      lVar2 = *(longlong *)(lVar11 + 0x178);
      uVar3 = *(ulonglong *)(lVar11 + 0x170);
      if ((param_4 != (longlong *)0x0) && (uVar3 != 0)) {
        do {
          puVar9 = (uint *)tls1_group_id_lookup(*(undefined2 *)(lVar2 + uVar7 * 2));
          if (puVar9 == (uint *)0x0) {
            uVar6 = *(ushort *)(lVar2 + uVar7 * 2) | 0x1000000;
          }
          else {
            uVar6 = *puVar9;
          }
          *(uint *)((longlong)param_4 + uVar7 * 4) = uVar6;
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar3);
      }
      return uVar3 & 0xffffffff;
    }
    goto LAB_143cc6195;
  case 0x5b:
    uVar7 = tls1_set_groups(param_1 + 0x690,param_1 + 0x688,param_4,lVar11);
    break;
  case 0x5c:
    uVar7 = tls1_set_groups_list(param_1 + 0x690,param_1 + 0x688,param_4);
    break;
  case 0x5d:
    uVar4 = tls1_shared_group(param_1,param_3);
    if (param_3 == -1) {
      uVar7 = (ulonglong)uVar4;
    }
    else {
      puVar9 = (uint *)tls1_group_id_lookup(uVar4);
      if (puVar9 != (uint *)0x0) {
        uVar7 = (ulonglong)*puVar9;
      }
    }
    break;
  case 0x61:
    uVar7 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,0);
    break;
  case 0x62:
    uVar7 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x488),param_4,0);
    break;
  case 0x65:
    uVar7 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x488),param_4,lVar11,1);
    break;
  case 0x66:
    uVar7 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x488),param_4,1);
    break;
  case 0x67:
    if ((*(int *)(param_1 + 0x38) == 0) &&
       (lVar11 = *(longlong *)(param_1 + 0xa8), *(int *)(lVar11 + 0x248) != 0)) {
      if (param_4 != (longlong *)0x0) {
        *param_4 = *(longlong *)(lVar11 + 0x250);
        lVar11 = *(longlong *)(param_1 + 0xa8);
      }
      return (ulonglong)*(uint *)(lVar11 + 600);
    }
    goto LAB_143cc6195;
  case 0x68:
    if (*(int *)(param_1 + 0x38) != 0) {
      uVar7 = ssl3_set_req_cert_type(*(undefined8 *)(param_1 + 0x488),param_4,lVar11);
      return uVar7;
    }
    goto LAB_143cc6195;
  case 0x69:
    uVar7 = ssl_build_cert_chain(param_1,0,param_3);
    break;
  case 0x6a:
    uVar7 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,0,param_3);
    break;
  case 0x6b:
    uVar7 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x488),param_4,1,param_3);
    break;
  case 0x6c:
    lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x308);
    if (lVar11 != 0) {
      *(undefined4 *)param_4 = *(undefined4 *)(lVar11 + 0xc);
      return 1;
    }
    goto LAB_143cc6195;
  case 0x6d:
    if (((*(int *)(param_1 + 0x38) == 0) && (*(longlong *)(param_1 + 0x508) != 0)) &&
       (*(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408) != 0)) {
      EVP_PKEY_up_ref();
      *param_4 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x408);
      return 1;
    }
    goto LAB_143cc6195;
  case 0x6f:
    lVar11 = *(longlong *)(param_1 + 0x508);
    if ((lVar11 != 0) && (*(longlong *)(lVar11 + 0x168) != 0)) {
      *param_4 = *(longlong *)(lVar11 + 0x168);
      return (ulonglong)*(uint *)(lVar11 + 0x160);
    }
    goto LAB_143cc6195;
  case 0x73:
    *param_4 = *(longlong *)(**(longlong **)(param_1 + 0x488) + 0x10);
    goto switchD_143cc6120_caseD_5;
  case 0x74:
    uVar7 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x488),param_4);
    break;
  case 0x75:
    if (param_3 != 3) {
      uVar7 = FUN_143ca99c0(*(undefined8 *)(param_1 + 0x488),param_3);
      return uVar7;
    }
    if (*(int *)(param_1 + 0x38) != 0) {
      lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x238);
      if (lVar11 != 0) {
        if ((*(byte *)(lVar11 + 0x20) & 0x44) != 0) {
          return 2;
        }
        lVar11 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x2e0);
        if (lVar11 != 0) {
          **(longlong **)(param_1 + 0x488) = lVar11;
          return 1;
        }
      }
    }
LAB_143cc6195:
    uVar7 = 0;
    break;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x488) + 0x18) = param_3;
    uVar7 = 1;
    break;
  case 0x7f:
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x638);
switchD_143cc6120_caseD_5:
    uVar7 = uVar3;
  }
  return uVar7;
}



// FUNCTION 143cc69e0 FUN_143cc69e0 body=1895 status=ok
// SIG undefined FUN_143cc69e0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

ulonglong FUN_143cc69e0(longlong param_1,int param_2,int param_3,longlong *param_4)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong *plVar10;
  int local_res10 [6];
  undefined8 in_stack_ffffffffffffffe8;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffffe8 >> 0x20);
  uVar12 = 0x143cc69f0;
  switch(param_2) {
  case 3:
    if (param_4 != (longlong *)0x0) {
      lVar7 = ssl_dh_to_pkey(param_4);
      if (lVar7 != 0) {
        uVar4 = EVP_PKEY_security_bits(lVar7);
        iVar6 = ssl_ctx_security(param_1,0x40007,uVar4,0,lVar7);
        if (iVar6 != 0) {
          EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0x130) + 8));
          *(longlong *)(*(longlong *)(param_1 + 0x130) + 8) = lVar7;
          return 1;
        }
        ERR_put_error(0x14,0x85,0x18a,"ssl\\s3_lib.c",0xeb2,uVar12);
        EVP_PKEY_free(lVar7);
        return 1;
      }
      uVar11 = CONCAT44(uVar4,0xead);
LAB_143cc7023:
      ERR_put_error(0x14,0x85,0x41,"ssl\\s3_lib.c",uVar11,uVar12);
      return 0;
    }
    uVar12 = CONCAT44(uVar4,0xea8);
    goto LAB_143cc6a2d;
  case 4:
    if (param_4 != (longlong *)0x0) {
      lVar7 = FUniqueNetIdString::GetBytes(param_4);
      if (lVar7 == 0) {
        ERR_put_error(0x14,0x85,0x7c,"ssl\\s3_lib.c",CONCAT44(uVar4,0xecf));
        return 0;
      }
      local_res10[0] = TMeshAttributeArraySet<int>::GetNumIndices(lVar7);
      if (local_res10[0] == 0) {
        return 0;
      }
      uVar8 = tls1_set_groups(param_1 + 0x250,param_1 + 0x248,local_res10,1);
      return uVar8;
    }
    uVar12 = CONCAT44(uVar4,0xeca);
LAB_143cc6a2d:
    ERR_put_error(0x14,0x85,0x43,"ssl\\s3_lib.c",uVar12,0x143cc69f0);
switchD_143cc6a1d_caseD_5:
    return 0;
  default:
    goto switchD_143cc6a1d_caseD_5;
  case 6:
    ERR_put_error(0x14,0x85,0x42,"ssl\\s3_lib.c",CONCAT44(uVar4,0xebc),0x143cc69f0);
    return 0;
  case 0xe:
    lVar7 = *(longlong *)(param_1 + 0xf8);
    if (lVar7 == 0) {
      lVar7 = OPENSSL_sk_new_null();
      *(longlong *)(param_1 + 0xf8) = lVar7;
      if (lVar7 == 0) {
        uVar11 = CONCAT44(uVar4,0xf60);
        goto LAB_143cc7023;
      }
    }
    iVar6 = OPENSSL_sk_push(lVar7,param_4);
    if (iVar6 == 0) {
      uVar11 = CONCAT44(uVar4,0xf65);
      goto LAB_143cc7023;
    }
    break;
  case 0x36:
    *(longlong **)(param_1 + 0x1f8) = param_4;
    return 1;
  case 0x3a:
  case 0x3b:
    if (param_4 == (longlong *)0x0) {
      return 0x50;
    }
    if (param_3 == 0x50) {
      if (param_2 != 0x3b) {
        lVar7 = *(longlong *)(param_1 + 0x208);
        *param_4 = *(longlong *)(param_1 + 0x200);
        param_4[1] = lVar7;
        plVar10 = *(longlong **)(param_1 + 0x210);
        lVar7 = plVar10[1];
        param_4[2] = *plVar10;
        param_4[3] = lVar7;
        lVar7 = plVar10[3];
        param_4[4] = plVar10[2];
        param_4[5] = lVar7;
        lVar7 = *(longlong *)(param_1 + 0x210);
        lVar3 = *(longlong *)(lVar7 + 0x28);
        param_4[6] = *(longlong *)(lVar7 + 0x20);
        param_4[7] = lVar3;
        lVar3 = *(longlong *)(lVar7 + 0x38);
        param_4[8] = *(longlong *)(lVar7 + 0x30);
        param_4[9] = lVar3;
        return 1;
      }
      lVar7 = param_4[1];
      plVar10 = *(longlong **)(param_1 + 0x210);
      *(longlong *)(param_1 + 0x200) = *param_4;
      *(longlong *)(param_1 + 0x208) = lVar7;
      lVar7 = param_4[3];
      *plVar10 = param_4[2];
      plVar10[1] = lVar7;
      lVar7 = param_4[5];
      plVar10[2] = param_4[4];
      plVar10[3] = lVar7;
      lVar7 = *(longlong *)(param_1 + 0x210);
      lVar3 = param_4[7];
      *(longlong *)(lVar7 + 0x20) = param_4[6];
      *(longlong *)(lVar7 + 0x28) = lVar3;
      lVar3 = param_4[9];
      *(longlong *)(lVar7 + 0x30) = param_4[8];
      *(longlong *)(lVar7 + 0x38) = lVar3;
      return 1;
    }
    ERR_put_error(0x14,0x85,0x145,"ssl\\s3_lib.c",CONCAT44(uVar4,0xee7),0x143cc69f0);
    return 0;
  case 0x40:
    *(longlong **)(param_1 + 0x228) = param_4;
    return 1;
  case 0x41:
    *(int *)(param_1 + 0x230) = param_3;
    return 1;
  case 0x4e:
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 0x20;
    *(longlong **)(param_1 + 0x2d8) = param_4;
    return 1;
  case 0x4f:
    *(uint *)(param_1 + 0x34c) = *(uint *)(param_1 + 0x34c) | 0x20;
    CRYPTO_free(*(undefined8 *)(param_1 + 0x2f8),"ssl\\s3_lib.c",0xf18);
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2f8) = 0;
    if (param_4 != (longlong *)0x0) {
      cVar2 = (char)*param_4;
      plVar10 = param_4;
      cVar1 = cVar2;
      for (uVar9 = uVar5; (cVar1 != '\0' && (uVar9 < 0x80000000)); uVar9 = uVar9 + 1) {
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        cVar1 = *(char *)plVar10;
      }
      plVar10 = param_4;
      if ((uVar9 & 0x7fffffff) < 0x100) {
        for (; (cVar2 != '\0' && (uVar5 < 0x80000000)); uVar5 = uVar5 + 1) {
          cVar2 = *(char *)((longlong)plVar10 + 1);
          plVar10 = (longlong *)((longlong)plVar10 + 1);
        }
        if ((uVar5 & 0x7fffffff) != 0) {
          lVar7 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xf20);
          *(longlong *)(param_1 + 0x2f8) = lVar7;
          if (lVar7 != 0) {
            return 1;
          }
          uVar12 = CONCAT44(uVar4,0xf21);
          goto LAB_143cc6de7;
        }
      }
      ERR_put_error(0x14,0x85,0x165,"ssl\\s3_lib.c",CONCAT44(uVar4,0xf1d));
      return 0;
    }
    break;
  case 0x50:
    *(int *)(param_1 + 0x348) = param_3;
    return 1;
  case 0x51:
    *(code **)(param_1 + 0x2f0) = srp_password_from_info_cb;
    if (*(longlong *)(param_1 + 0x340) != 0) {
      CRYPTO_free(*(longlong *)(param_1 + 0x340),"ssl\\s3_lib.c",0xf29);
    }
    lVar7 = CRYPTO_strdup(param_4,"ssl\\s3_lib.c",0xf2a);
    *(longlong *)(param_1 + 0x340) = lVar7;
    if (lVar7 == 0) {
      uVar12 = CONCAT44(uVar4,0xf2b);
LAB_143cc6de7:
      ERR_put_error(0x14,0x85,0x44,"ssl\\s3_lib.c",uVar12);
      return 0;
    }
    break;
  case 0x52:
    lVar7 = *(longlong *)(param_1 + 0xf8);
    if ((lVar7 == 0) && (param_3 == 0)) goto switchD_143cc6a1d_caseD_73;
    goto LAB_143cc7080;
  case 0x53:
    OPENSSL_sk_pop_free(*(undefined8 *)(param_1 + 0xf8),X509_free);
    *(undefined8 *)(param_1 + 0xf8) = 0;
    return 1;
  case 0x58:
    if (param_3 == 0) {
      uVar8 = ssl_cert_set0_chain(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = ssl_cert_set1_chain();
    return uVar8;
  case 0x59:
    if (param_3 == 0) {
      uVar8 = ssl_cert_add0_chain_cert(0,param_1,param_4);
      return uVar8;
    }
    uVar8 = ssl_cert_add1_chain_cert();
    return uVar8;
  case 0x5b:
    uVar8 = tls1_set_groups(param_1 + 0x250,param_1 + 0x248,param_4,(longlong)param_3);
    return uVar8;
  case 0x5c:
    uVar8 = tls1_set_groups_list(param_1 + 0x250,param_1 + 0x248,param_4);
    return uVar8;
  case 0x61:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x130),param_4,(longlong)param_3,0);
    return uVar8;
  case 0x62:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x130),param_4,0);
    return uVar8;
  case 0x65:
    uVar8 = tls1_set_sigalgs(*(undefined8 *)(param_1 + 0x130),param_4,(longlong)param_3,1);
    return uVar8;
  case 0x66:
    uVar8 = tls1_set_sigalgs_list(*(undefined8 *)(param_1 + 0x130),param_4,1);
    return uVar8;
  case 0x68:
    uVar8 = ssl3_set_req_cert_type(*(undefined8 *)(param_1 + 0x130),param_4,(longlong)param_3);
    return uVar8;
  case 0x69:
    uVar8 = ssl_build_cert_chain(0,param_1);
    return uVar8;
  case 0x6a:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x130),param_4,0,param_3);
    return uVar8;
  case 0x6b:
    uVar8 = ssl_cert_set_cert_store(*(undefined8 *)(param_1 + 0x130),param_4,1,param_3);
    return uVar8;
  case 0x73:
switchD_143cc6a1d_caseD_73:
    lVar7 = *(longlong *)(**(longlong **)(param_1 + 0x130) + 0x10);
LAB_143cc7080:
    *param_4 = lVar7;
    break;
  case 0x74:
    uVar8 = ssl_cert_select_current(*(undefined8 *)(param_1 + 0x130),param_4);
    return uVar8;
  case 0x75:
    uVar8 = FUN_143ca99c0(*(undefined8 *)(param_1 + 0x130),param_3);
    return uVar8;
  case 0x76:
    *(int *)(*(longlong *)(param_1 + 0x130) + 0x18) = param_3;
    return 1;
  case 0x7f:
    return (ulonglong)*(uint *)(param_1 + 0x230);
  case 0x80:
    *param_4 = *(longlong *)(param_1 + 0x220);
    return 1;
  case 0x81:
    *param_4 = *(longlong *)(param_1 + 0x228);
    return 1;
  }
  return 1;
}



// FUNCTION 143cc7250 ssl3_free body=439 status=ok
// SIG undefined ssl3_free(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void ssl3_free(longlong param_1)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0xa8) != 0)) {
    ssl3_cleanup_key_block();
    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x408) = 0;
    EVP_PKEY_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240));
    *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x240) = 0;
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x250),"ssl\\s3_lib.c",0xcff);
    OPENSSL_sk_pop_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x260),X509_NAME_free);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2a8),"ssl\\s3_lib.c",0xd01);
    CRYPTO_clear_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2b8),
                      *(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2c0),"ssl\\s3_lib.c",0xd02);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2e8),"ssl\\s3_lib.c",0xd03);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x2f0),"ssl\\s3_lib.c",0xd04);
    ssl3_free_digest_list(param_1);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3e0),"ssl\\s3_lib.c",0xd06);
    CRYPTO_free(*(undefined8 *)(*(longlong *)(param_1 + 0xa8) + 0x3f0),"ssl\\s3_lib.c",0xd07);
    SSL_SRP_CTX_free(param_1);
    CRYPTO_clear_free(*(undefined8 *)(param_1 + 0xa8),0x410,"ssl\\s3_lib.c",0xd0c);
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  return;
}


