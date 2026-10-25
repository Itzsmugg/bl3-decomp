// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436a3f00 FUN_1436a3f00 body=126 status=ok
// SIG undefined FUN_1436a3f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436a3f00(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  iVar1 = Ordinal_115(0x202,local_1b8);
  if (iVar1 == 0) {
    if (((char)local_1b8._0_2_ == '\x02') && (SUB21(local_1b8._0_2_,1) == '\x02')) {
      uVar2 = FUN_1436ab940();
      return uVar2;
    }
    Ordinal_116();
  }
  return 2;
}



// FUNCTION 1436a3f80 Curl_slist_append_nodup body=110 status=ok
// SIG undefined Curl_slist_append_nodup(void)

undefined8 * Curl_slist_append_nodup(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar4 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x10);
  if (puVar4 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  puVar4[1] = 0;
  *puVar4 = param_2;
  if (param_1 != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)param_1[1];
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined8 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined8 *)puVar1[1];
    }
    puVar2[1] = puVar4;
    puVar4 = param_1;
  }
  return puVar4;
}



// FUNCTION 1436a3ff0 curl_slist_append body=83 status=ok
// SIG undefined curl_slist_append(void)

longlong curl_slist_append(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = (*(code *)PTR__strdup_1467dcc70)(param_2);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = Curl_slist_append_nodup(param_1,lVar1);
  if (lVar2 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar1);
  }
  return lVar2;
}



// FUNCTION 1436a4050 curl_slist_free_all body=81 status=ok
// SIG undefined curl_slist_free_all(void)

void curl_slist_free_all(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[1];
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
    *param_1 = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    param_1 = puVar1;
  }
  return;
}



// FUNCTION 1436a40b0 Curl_share_lock body=56 status=ok
// SIG undefined Curl_share_lock(void)

undefined8 Curl_share_lock(longlong param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x88);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 >> (param_2 & 0x1f) & 1) != 0) && (*(code **)(puVar1 + 2) != (code *)0x0)) {
    (**(code **)(puVar1 + 2))();
  }
  return 0;
}



// FUNCTION 1436a40f0 Curl_share_unlock body=56 status=ok
// SIG undefined Curl_share_unlock(void)

undefined8 Curl_share_unlock(longlong param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 0x88);
  if (puVar1 == (uint *)0x0) {
    return 3;
  }
  if (((*puVar1 >> (param_2 & 0x1f) & 1) != 0) && (*(code **)(puVar1 + 4) != (code *)0x0)) {
    (**(code **)(puVar1 + 4))(param_1,param_2,*(undefined8 *)(puVar1 + 6));
  }
  return 0;
}



// FUNCTION 1436a4130 curl_share_init body=70 status=ok
// SIG undefined curl_share_init(void)

uint * curl_share_init(void)

{
  int iVar1;
  uint *puVar2;
  
  puVar2 = (uint *)(*(code *)PTR_calloc_1467dcc78)(1);
  if (puVar2 != (uint *)0x0) {
    *puVar2 = *puVar2 | 2;
    iVar1 = Curl_mk_dnscache(puVar2 + 8);
    if (iVar1 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
      return (uint *)0x0;
    }
  }
  return puVar2;
}



// FUNCTION 1436a4180 FUN_1436a4180 body=364 status=ok
// SIG undefined FUN_1436a4180(void)

undefined8 FUN_1436a4180(uint *param_1,int param_2,undefined8 param_3)

{
  longlong lVar1;
  int local_res18;
  
  if (param_1[1] != 0) {
    return 2;
  }
  local_res18 = (int)param_3;
  if (param_2 == 1) {
    *param_1 = *param_1 | 1 << ((byte)param_3 & 0x1f);
    if (local_res18 == 2) {
      if (*(longlong *)(param_1 + 0x14) != 0) {
        return 0;
      }
      lVar1 = FUN_1436aaaa0(0,0,0,1);
      *(longlong *)(param_1 + 0x14) = lVar1;
      if (lVar1 != 0) {
        return 0;
      }
      return 4;
    }
    if (local_res18 == 3) {
      return 0;
    }
    if (local_res18 == 4) {
      if (*(longlong *)(param_1 + 0x16) != 0) {
        return 0;
      }
      param_1[0x18] = 8;
      param_1[0x19] = 0;
      lVar1 = (*(code *)PTR_calloc_1467dcc78)(8,0xa0);
      *(longlong *)(param_1 + 0x16) = lVar1;
      param_1[0x1a] = 0;
      if (lVar1 != 0) {
        return 0;
      }
      return 4;
    }
  }
  else {
    if (param_2 != 2) {
      if (param_2 == 3) {
        *(undefined8 *)(param_1 + 2) = param_3;
        return 0;
      }
      if (param_2 != 4) {
        if (param_2 != 5) {
          return 1;
        }
        *(undefined8 *)(param_1 + 6) = param_3;
        return 0;
      }
      *(undefined8 *)(param_1 + 4) = param_3;
      return 0;
    }
    *param_1 = *param_1 & ~(1 << ((byte)param_3 & 0x1f));
    if (local_res18 == 2) {
      if (*(longlong *)(param_1 + 0x14) == 0) {
        return 0;
      }
      Curl_cookie_cleanup();
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      return 0;
    }
    if (local_res18 == 3) {
      return 0;
    }
    if (local_res18 == 4) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x16));
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      return 0;
    }
  }
  if (local_res18 != 5) {
    return 1;
  }
  return 0;
}



// FUNCTION 1436a42f0 FUN_1436a42f0 body=77 status=ok
// SIG undefined FUN_1436a42f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1436a42f0(void)

{
  FUN_1436a4340();
  if (DAT_146b7b7a1 == '\0') {
    Curl_schannel_version(&DAT_146b7b880,0x50);
    _DAT_1467dcca0 = _DAT_1467dcca0 | 0x400;
    _DAT_1467dcca8 = &DAT_146b7b880;
    DAT_146b7b7a1 = '\x01';
  }
  return;
}



// FUNCTION 1436a4340 FUN_1436a4340 body=213 status=ok
// SIG undefined FUN_1436a4340(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1436a4340(void)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  ulonglong uVar4;
  
  if (DAT_146b7b7a0 != '\0') {
    return &DAT_146b7b7b0;
  }
  _DAT_146b7b7b8 = 0x30352e37;
  _DAT_146b7b7bc = 0x312e;
  DAT_146b7b7be = 0;
  _DAT_146b7b7b0 = 0x2f6c72756362696c;
  lVar2 = -1;
  do {
    lVar1 = lVar2;
    lVar2 = lVar1 + 1;
  } while ((&DAT_146b7b7b1)[lVar1] != '\0');
  puVar3 = &DAT_146b7b7b1 + lVar1;
  lVar2 = -(lVar1 + 1);
  uVar4 = lVar2 + 200;
  if (1 < uVar4) {
    lVar2 = Curl_schannel_version(lVar1 + 0x146b7b7b2,lVar2 + 199);
    if (lVar2 != 0) {
      *puVar3 = 0x20;
      uVar4 = uVar4 - (lVar2 + 1);
      puVar3 = puVar3 + lVar2 + 1;
    }
  }
  curl_msnprintf(puVar3,uVar4," WinIDN");
  DAT_146b7b7a0 = 1;
  return &DAT_146b7b7b0;
}



// FUNCTION 1436a4420 FUN_1436a4420 body=79 status=ok
// SIG undefined FUN_1436a4420(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1436a4420(void)

{
  if (DAT_146b7b7a1 == '\0') {
    Curl_schannel_version(&DAT_146b7b880,0x50);
    _DAT_1467dcca0 = _DAT_1467dcca0 | 0x400;
    _DAT_1467dcca8 = &DAT_146b7b880;
    DAT_146b7b7a1 = '\x01';
  }
  return &DAT_1467dcc80;
}



// FUNCTION 1436a4470 FUN_1436a4470 body=144 status=ok
// SIG undefined FUN_1436a4470(void)

bool FUN_1436a4470(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x110);
  if (iVar1 < 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x18) << 2;
  }
  *(undefined1 *)(param_2 + 9) = 0;
  plVar2 = (longlong *)0x0;
  if ((iVar1 != 0) &&
     (plVar2 = (longlong *)0x0,
     (ulonglong)(longlong)iVar1 < *(ulonglong *)(*(longlong *)(param_1 + 0x7b8) + 0x30))) {
    FUN_1436b58e0(param_1,"Connection cache is full, closing the oldest one.\n");
    plVar2 = (longlong *)FUN_1436aed20(param_1);
    if (plVar2 != (longlong *)0x0) {
      *plVar2 = param_1;
      FUN_1436ae720(plVar2,0);
    }
  }
  return plVar2 != param_2;
}



// FUNCTION 1436a4500 FUN_1436a4500 body=416 status=ok
// SIG undefined FUN_1436a4500(void)

void FUN_1436a4500(longlong param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x78);
  piVar1 = (int *)(param_1 + 0x8980);
  if (lVar2 != 0) {
    if (param_2 == 0) {
      if ((*piVar1 != 0) || (*(int *)(param_1 + 0x8984) != 0)) {
        lVar3 = *(longlong *)(param_1 + 0x89b0);
        iVar4 = Curl_splayremovebyaddr(*(undefined8 *)(lVar2 + 0x80),param_1 + 0x8988,lVar2 + 0x80);
        if (iVar4 != 0) {
          FUN_1436b58e0(param_1,"Internal error clearing splay node = %d\n",iVar4);
        }
        lVar2 = *(longlong *)(lVar3 + 0x18);
        while (lVar2 != 0) {
          Curl_llist_remove(lVar3,*(undefined8 *)(lVar3 + 8),0);
          lVar2 = *(longlong *)(lVar3 + 0x18);
        }
        piVar1[0] = 0;
        piVar1[1] = 0;
      }
    }
    else {
      uVar5 = curlx_tvnow();
      local_res8._0_4_ = (int)uVar5;
      local_res8._4_4_ = (int)((ulonglong)uVar5 >> 0x20);
      local_res8._0_4_ = (int)local_res8 + param_2 / 1000;
      local_res8._4_4_ = local_res8._4_4_ + (param_2 % 1000) * 1000;
      if (999999 < local_res8._4_4_) {
        local_res8 = CONCAT44(local_res8._4_4_ + -1000000,(int)local_res8 + 1);
      }
      uVar5 = local_res8;
      if ((*piVar1 != 0) || (*(int *)(param_1 + 0x8984) != 0)) {
        iVar4 = curlx_tvdiff(local_res8,*(undefined8 *)piVar1);
        if (0 < iVar4) {
          multi_addtimeout(*(undefined8 *)(param_1 + 0x89b0),&local_res8);
          return;
        }
        multi_addtimeout(*(undefined8 *)(param_1 + 0x89b0),piVar1);
        iVar4 = Curl_splayremovebyaddr(*(undefined8 *)(lVar2 + 0x80),param_1 + 0x8988,lVar2 + 0x80);
        if (iVar4 != 0) {
          FUN_1436b58e0(param_1,"Internal error removing splay node = %d\n",iVar4);
        }
      }
      *(undefined8 *)piVar1 = uVar5;
      *(longlong *)(param_1 + 0x89a8) = param_1;
      uVar5 = Curl_splayinsert(*(undefined8 *)piVar1,*(undefined8 *)(lVar2 + 0x80),param_1 + 0x8988)
      ;
      *(undefined8 *)(lVar2 + 0x80) = uVar5;
    }
  }
  return;
}



// FUNCTION 1436a46a0 FUN_1436a46a0 body=167 status=ok
// SIG undefined FUN_1436a46a0(void)

void FUN_1436a46a0(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  uVar2 = curlx_tvnow();
  local_res8._0_4_ = (int)uVar2;
  local_res8._0_4_ = (int)local_res8 + param_2 / 1000;
  local_res8._4_4_ = (int)((ulonglong)uVar2 >> 0x20);
  local_res8._4_4_ = local_res8._4_4_ + (param_2 % 1000) * 1000;
  if (999999 < local_res8._4_4_) {
    local_res8 = CONCAT44(local_res8._4_4_ + -1000000,(int)local_res8 + 1);
  }
  if (((*(int *)(param_1 + 0x8980) != 0) || (*(int *)(param_1 + 0x8984) != 0)) &&
     (iVar1 = curlx_tvdiff(local_res8,*(undefined8 *)(param_1 + 0x8980)), 0 < iVar1)) {
    return;
  }
  FUN_1436a4500(param_1,param_2);
  return;
}



// FUNCTION 1436a4750 Curl_multi_chunk_length_penalty_size body=18 status=ok
// SIG undefined Curl_multi_chunk_length_penalty_size(void)

longlong Curl_multi_chunk_length_penalty_size(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x124);
  }
  return 0;
}



// FUNCTION 1436a4770 FUN_1436a4770 body=163 status=ok
// SIG undefined FUN_1436a4770(void)

void FUN_1436a4770(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar1 = *(longlong *)(*param_1 + 0x78);
  if (((lVar1 != 0) && (param_2 != -1)) &&
     (local_res8 = param_2, lVar2 = FUN_1436b8020(lVar1 + 0x88,&local_res8,8), lVar2 != 0)) {
    if (*(code **)(lVar1 + 0x30) != (code *)0x0) {
      (**(code **)(lVar1 + 0x30))
                (*param_1,param_2,4,*(undefined8 *)(lVar1 + 0x38),*(undefined8 *)(lVar2 + 0x18));
    }
    local_res8 = param_2;
    FUN_1436b7d50(lVar1 + 0x88,&local_res8,8);
  }
  return;
}



// FUNCTION 1436a4820 Curl_multi_content_length_penalty_size body=18 status=ok
// SIG undefined Curl_multi_content_length_penalty_size(void)

longlong Curl_multi_content_length_penalty_size(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x120);
  }
  return 0;
}



// FUNCTION 1436a4840 FUN_1436a4840 body=364 status=ok
// SIG undefined FUN_1436a4840(void)

undefined4 * FUN_1436a4840(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)(*(code *)PTR_calloc_1467dcc78)(1,0x150);
  if (puVar2 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar2 = 0xbab1e;
  iVar1 = Curl_mk_dnscache(puVar2 + 0x14);
  if ((iVar1 == 0) &&
     (iVar1 = Curl_hash_init(puVar2 + 0x22,param_1,&LAB_1436a56d0,&LAB_1436a56c0,
                             _guard_xfg_dispatch_icall_nop), iVar1 == 0)) {
    iVar1 = Curl_conncache_init(puVar2 + 0x30,param_2);
    if (iVar1 == 0) {
      lVar3 = Curl_llist_alloc(FUN_140447710);
      *(longlong *)(puVar2 + 8) = lVar3;
      if (lVar3 != 0) {
        lVar3 = Curl_llist_alloc(FUN_140447710);
        *(longlong *)(puVar2 + 10) = lVar3;
        if (lVar3 != 0) {
          lVar3 = curl_easy_init();
          *(longlong *)(puVar2 + 0x42) = lVar3;
          if (lVar3 != 0) {
            *(undefined4 **)(lVar3 + 0x78) = puVar2;
            *(undefined4 **)(*(longlong *)(puVar2 + 0x42) + 0x7b8) = puVar2 + 0x30;
            puVar2[0x47] = 5;
            puVar2[0x44] = 0xffffffff;
            return puVar2;
          }
        }
      }
    }
  }
  Curl_hash_destroy(puVar2 + 0x22);
  Curl_hash_destroy(puVar2 + 0x14);
  FUN_1436be9c0(puVar2 + 0x30);
  FUN_1436ae310(*(undefined8 *)(puVar2 + 0x42));
  *(undefined8 *)(puVar2 + 0x42) = 0;
  Curl_llist_destroy(*(undefined8 *)(puVar2 + 8),0);
  Curl_llist_destroy(*(undefined8 *)(puVar2 + 10),0);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
  return (undefined4 *)0x0;
}



// FUNCTION 1436a49b0 Curl_multi_handlePipeBreak body=9 status=ok
// SIG undefined Curl_multi_handlePipeBreak(void)

void Curl_multi_handlePipeBreak(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1436a49c0 Curl_multi_max_host_connections body=18 status=ok
// SIG undefined Curl_multi_max_host_connections(void)

longlong Curl_multi_max_host_connections(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x114);
  }
  return 0;
}



// FUNCTION 1436a49e0 Curl_multi_max_total_connections body=18 status=ok
// SIG undefined Curl_multi_max_total_connections(void)

longlong Curl_multi_max_total_connections(longlong param_1)

{
  if (param_1 != 0) {
    return (longlong)*(int *)(param_1 + 0x118);
  }
  return 0;
}



// FUNCTION 1436a4a00 Curl_multi_pipelining_server_bl body=8 status=ok
// SIG undefined Curl_multi_pipelining_server_bl(void)

undefined8 Curl_multi_pipelining_server_bl(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x130);
}



// FUNCTION 1436a4a10 GetTotalInboundBytes body=8 status=ok
// SIG undefined GetTotalInboundBytes(void)

undefined8 FUdpMessageTunnel::GetTotalInboundBytes(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x128);
}



// FUNCTION 1436a4a20 Curl_multi_process_pending_handles body=143 status=ok
// SIG undefined Curl_multi_process_pending_handles(void)

void Curl_multi_process_pending_handles(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = (longlong *)**(undefined8 **)(param_1 + 0x28);
  while (plVar3 = plVar2, plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    plVar2 = (longlong *)plVar3[2];
    if (*(int *)(lVar1 + 0x18) == 1) {
      *(undefined4 *)(lVar1 + 0x18) = 2;
      FUN_1436b8650(lVar1);
      Curl_llist_remove(*(undefined8 *)(param_1 + 0x28),plVar3,0);
      FUN_1436a46a0(lVar1,1);
    }
  }
  return;
}



// FUNCTION 1436a4ab0 FUN_1436a4ab0 body=19 status=ok
// SIG undefined FUN_1436a4ab0(void)

undefined1 FUN_1436a4ab0(longlong param_1,uint param_2)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0xb8) & param_2) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1436a4ad0 FUN_1436a4ad0 body=203 status=ok
// SIG undefined FUN_1436a4ad0(void)

undefined8 FUN_1436a4ad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 uVar5;
  
  plVar1 = *(longlong **)(param_3 + 0x89b0);
  puVar3 = (undefined8 *)*plVar1;
  while (puVar3 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)puVar3[2];
    iVar4 = curlx_tvdiff(*(undefined8 *)*puVar3,param_1);
    if (0 < iVar4) break;
    Curl_llist_remove(plVar1,puVar3,0);
    puVar3 = puVar2;
  }
  puVar3 = (undefined8 *)*plVar1;
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(param_3 + 0x8980) = 0;
    return 0;
  }
  *(undefined8 *)(param_3 + 0x8980) = *(undefined8 *)*puVar3;
  Curl_llist_remove(plVar1,puVar3,0);
  uVar5 = Curl_splayinsert(*(undefined8 *)(param_3 + 0x8980),*(undefined8 *)(param_2 + 0x80),
                           param_3 + 0x8988);
  *(undefined8 *)(param_2 + 0x80) = uVar5;
  return 0;
}



// FUNCTION 1436a4ba0 FUN_1436a4ba0 body=342 status=ok
// SIG undefined FUN_1436a4ba0(void)

undefined8 FUN_1436a4ba0(int *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int *piVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (undefined8 *)0x0) || (*(int *)(param_2 + 0x1167) != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xf] != 0) {
    return 7;
  }
  lVar2 = Curl_llist_alloc(&LAB_1436a5970);
  if (lVar2 == 0) {
    return 3;
  }
  param_2[0x1136] = lVar2;
  if (*(int *)(param_2 + 3) != 0) {
    *(undefined4 *)(param_2 + 3) = 0;
  }
  if ((*(char *)((longlong)param_2 + 0x46d) == '\0') || (*(int *)(param_2 + 0xe) == 1)) {
    if ((param_2[0xd] != 0) && (*(int *)(param_2 + 0xe) != 0)) goto LAB_1436a4c68;
    piVar3 = param_1 + 0x14;
    *(undefined4 *)(param_2 + 0xe) = 2;
  }
  else {
    piVar3 = (int *)Curl_global_host_cache_init();
    if (piVar3 == (int *)0x0) goto LAB_1436a4c68;
    *(undefined4 *)(param_2 + 0xe) = 1;
  }
  param_2[0xd] = piVar3;
LAB_1436a4c68:
  *param_2 = 0;
  param_2[0xf7] = param_1 + 0x30;
  if (*(longlong *)(param_1 + 2) == 0) {
    param_2[1] = 0;
    *(undefined8 **)(param_1 + 2) = param_2;
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 4);
    *puVar1 = param_2;
    param_2[1] = puVar1;
  }
  *(undefined8 **)(param_1 + 4) = param_2;
  param_2[0xf] = param_1;
  FUN_1436a4500(param_2,1);
  param_1[6] = param_1[6] + 1;
  param_1[7] = param_1[7] + 1;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  update_timer(param_1);
  return 0;
}



// FUNCTION 1436a4d00 FUN_1436a4d00 body=340 status=ok
// SIG undefined FUN_1436a4d00(void)

undefined8 FUN_1436a4d00(int *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    *param_1 = 0;
    plVar4 = (longlong *)Curl_conncache_find_first_connection(param_1 + 0x30);
    while (plVar4 != (longlong *)0x0) {
      lVar1 = *(longlong *)(param_1 + 0x42);
      *plVar4 = lVar1;
      *(undefined8 *)(lVar1 + 0x10) = 0;
      FUN_1436ae720(plVar4,0);
      plVar4 = (longlong *)Curl_conncache_find_first_connection(param_1 + 0x30);
    }
    if (*(longlong *)(param_1 + 0x42) != 0) {
      *(int **)(*(longlong *)(param_1 + 0x42) + 0x68) = param_1 + 0x14;
      Curl_hostcache_clean
                (*(longlong *)(param_1 + 0x42),*(undefined8 *)(*(longlong *)(param_1 + 0x42) + 0x68)
                );
      FUN_1436ae310(*(undefined8 *)(param_1 + 0x42));
    }
    Curl_hash_destroy(param_1 + 0x22);
    FUN_1436be9c0(param_1 + 0x30);
    Curl_llist_destroy(*(undefined8 *)(param_1 + 8),0);
    Curl_llist_destroy(*(undefined8 *)(param_1 + 10),0);
    puVar3 = *(undefined8 **)(param_1 + 2);
    while (puVar3 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar3;
      if (*(int *)(puVar3 + 0xe) == 2) {
        Curl_hostcache_clean(puVar3,puVar3[0xd]);
        puVar3[0xd] = 0;
        *(undefined4 *)(puVar3 + 0xe) = 0;
      }
      puVar3[0xf7] = 0;
      puVar3[0xf] = 0;
      puVar3 = puVar2;
    }
    Curl_hash_destroy(param_1 + 0x14);
    Curl_pipeline_set_site_blacklist(0,param_1 + 0x4a);
    FUN_1436bfca0(0,param_1 + 0x4c);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    return 0;
  }
  return 1;
}



// FUNCTION 1436a4e60 curl_multi_info_read body=123 status=ok
// SIG undefined curl_multi_info_read(void)

undefined8 curl_multi_info_read(int *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  *param_2 = 0;
  if ((param_1 != (int *)0x0) && (*param_1 == 0xbab1e)) {
    lVar4 = FUN_1428ecdf0(*(undefined8 *)(param_1 + 8));
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)**(undefined8 **)(param_1 + 8);
      uVar2 = *puVar1;
      Curl_llist_remove(*(undefined8 **)(param_1 + 8),puVar1,0);
      uVar5 = FUN_1428ecdf0(*(undefined8 *)(param_1 + 8));
      uVar3 = curlx_sltosi(uVar5);
      *param_2 = uVar3;
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 1436a4ee0 curl_multi_init body=15 status=ok
// SIG undefined curl_multi_init(void)

void curl_multi_init(void)

{
  FUN_1436a4840(0x38f,0x61);
  return;
}



// FUNCTION 1436a4ef0 FUN_1436a4ef0 body=209 status=ok
// SIG undefined FUN_1436a4ef0(void)

int FUN_1436a4ef0(int *param_1,int *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong local_res8;
  
  uVar4 = curlx_tvnow();
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  puVar1 = *(undefined8 **)(param_1 + 2);
  iVar2 = 0;
  while (puVar1 != (undefined8 *)0x0) {
    iVar3 = FUN_1436a5b70(param_1,uVar4,puVar1);
    puVar1 = (undefined8 *)*puVar1;
    if (iVar3 != 0) {
      iVar2 = iVar3;
    }
  }
  do {
    uVar5 = Curl_splaygetbest(uVar4,*(undefined8 *)(param_1 + 0x20),&local_res8);
    *(undefined8 *)(param_1 + 0x20) = uVar5;
    if (local_res8 == 0) break;
    FUN_1436a4ad0(uVar4,param_1,*(undefined8 *)(local_res8 + 0x20));
  } while (local_res8 != 0);
  *param_2 = param_1[7];
  if (iVar2 < 1) {
    update_timer(param_1);
  }
  return iVar2;
}



// FUNCTION 1436a4fd0 FUN_1436a4fd0 body=490 status=ok
// SIG undefined FUN_1436a4fd0(void)

undefined8 FUN_1436a4fd0(int *param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  if ((param_2 == (longlong *)0x0) || ((int)param_2[0x1167] != -0x3f212453)) {
    return 2;
  }
  if (param_2[0xf] != 0) {
    lVar3 = param_2[3];
    if (((longlong *)param_2[2] == (longlong *)0x0) || (*(longlong **)param_2[2] != param_2)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((int)lVar3 < 0x11) {
      param_1[7] = param_1[7] + -1;
      Curl_multi_process_pending_handles(param_1);
    }
    if ((param_2[2] != 0) && ((int)param_2[3] - 10U < 7)) {
      *(undefined1 *)(param_2[2] + 0x3b9) = 1;
      bVar2 = true;
      *(longlong **)param_2[2] = param_2;
    }
    FUN_1436a4500(param_2,0);
    if ((int)param_2[0xe] == 2) {
      param_2[0xd] = 0;
      *(undefined4 *)(param_2 + 0xe) = 0;
    }
    if (param_2[2] != 0) {
      if (bVar2) {
        FUN_1436a5790(param_2 + 2,*(undefined4 *)((longlong)param_2 + 0x1c),(int)lVar3 < 0x11);
      }
      else {
        FUN_1436ae9c0(param_2);
      }
    }
    Curl_wildcard_dtor(param_2 + 0x1148);
    if (param_2[0x1136] != 0) {
      Curl_llist_destroy(param_2[0x1136],0);
      param_2[0x1136] = 0;
    }
    param_2[0xf7] = 0;
    *(undefined4 *)(param_2 + 3) = 0x11;
    FUN_1436a6e90(param_1,param_2);
    if ((undefined8 *)param_2[2] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[2] = 0;
      param_2[2] = 0;
    }
    param_2[0xf] = 0;
    for (plVar1 = (longlong *)**(undefined8 **)(param_1 + 8); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[2]) {
      if (*(longlong **)(*plVar1 + 8) == param_2) {
        Curl_llist_remove(*(undefined8 **)(param_1 + 8),plVar1,0);
        break;
      }
    }
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      *(longlong *)(param_1 + 2) = *param_2;
    }
    else {
      *(longlong *)param_2[1] = *param_2;
    }
    lVar3 = param_2[1];
    if (*param_2 != 0) {
      *(longlong *)(*param_2 + 8) = lVar3;
      param_1[6] = param_1[6] + -1;
      update_timer(param_1);
      return 0;
    }
    param_1[6] = param_1[6] + -1;
    *(longlong *)(param_1 + 4) = lVar3;
    update_timer(param_1);
  }
  return 0;
}



// FUNCTION 1436a51c0 curl_multi_setopt body=453 status=ok
// SIG undefined curl_multi_setopt(void)

undefined8 curl_multi_setopt(int *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int local_res18;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    return 1;
  }
  local_res18 = (int)param_3;
  if (param_2 < 0x271c) {
    if (param_2 == 0x271b) {
      uVar1 = Curl_pipeline_set_site_blacklist(param_3,param_1 + 0x4a);
      return uVar1;
    }
    if (param_2 < 9) {
      if (param_2 == 8) {
        param_1[0x47] = local_res18;
        return 0;
      }
      if (param_2 == 3) {
        param_1[0x2e] = local_res18;
        return 0;
      }
      if (param_2 == 6) {
        param_1[0x44] = local_res18;
        return 0;
      }
      if (param_2 == 7) {
        param_1[0x45] = local_res18;
        return 0;
      }
    }
    else {
      if (param_2 == 0xd) {
        param_1[0x46] = local_res18;
        return 0;
      }
      if (param_2 == 0x2712) {
        *(undefined8 *)(param_1 + 0xe) = param_3;
        return 0;
      }
      if (param_2 == 0x2715) {
        *(undefined8 *)(param_1 + 0x50) = param_3;
        return 0;
      }
    }
  }
  else if (param_2 < 0x4e25) {
    if (param_2 == 0x4e24) {
      *(undefined8 *)(param_1 + 0x4e) = param_3;
      return 0;
    }
    if (param_2 == 0x271c) {
      uVar1 = FUN_1436bfca0(param_3,param_1 + 0x4c);
      return uVar1;
    }
    if (param_2 == 0x271f) {
      *(undefined8 *)(param_1 + 0x12) = param_3;
      return 0;
    }
    if (param_2 == 0x4e21) {
      *(undefined8 *)(param_1 + 0xc) = param_3;
      return 0;
    }
  }
  else {
    if (param_2 == 0x4e2e) {
      *(undefined8 *)(param_1 + 0x10) = param_3;
      return 0;
    }
    if (param_2 == 0x7539) {
      param_1[0x48] = local_res18;
      return 0;
    }
    if (param_2 == 0x753a) {
      param_1[0x49] = local_res18;
      return 0;
    }
  }
  return 6;
}



// FUNCTION 1436a5390 FUN_1436a5390 body=752 status=ok
// SIG undefined FUN_1436a5390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436a5390(int *param_1,longlong param_2,uint param_3,int param_4,int *param_5)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined8 *puVar9;
  ushort uVar10;
  longlong lVar11;
  byte *pbVar12;
  int iVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  ushort *puVar18;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  longlong local_90;
  int *local_88;
  longlong local_80 [5];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar17 = (ulonglong)param_3;
  local_88 = param_5;
  iVar13 = 0;
  local_98 = 0;
  lVar6 = 0;
  if ((param_1 == (int *)0x0) || (*param_1 != 0xbab1e)) {
    uVar4 = 1;
  }
  else {
    local_90 = param_2;
    multi_timeout(param_1,&local_94);
    if ((-1 < local_94) && (local_94 < param_4)) {
      param_4 = local_94;
    }
    for (puVar9 = *(undefined8 **)(param_1 + 2); puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)*puVar9) {
      uVar2 = FUN_1436a5980(puVar9,local_80,5);
      plVar14 = local_80;
      uVar3 = 1;
      uVar15 = 0;
      do {
        lVar11 = -1;
        if ((uVar2 & uVar3) != 0) {
          lVar11 = *plVar14;
          iVar13 = iVar13 + 1;
        }
        if ((uVar2 & (uVar3 << 0x10 | uVar3 >> 0x10)) != 0) {
          lVar11 = *plVar14;
          iVar13 = iVar13 + 1;
        }
        if (lVar11 == -1) break;
        uVar15 = uVar15 + 1;
        uVar3 = uVar3 << 1 | (uint)((int)uVar3 < 0);
        plVar14 = plVar14 + 1;
      } while (uVar15 < 5);
    }
    if (((iVar13 + param_3 == 0) && (param_3 == 0)) ||
       (lVar6 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                          ((ulonglong)(iVar13 + param_3) << 4), lVar6 != 0)) {
      uVar2 = 0;
      if (iVar13 != 0) {
        for (puVar9 = *(undefined8 **)(param_1 + 2); puVar9 != (undefined8 *)0x0;
            puVar9 = (undefined8 *)*puVar9) {
          uVar3 = FUN_1436a5980(puVar9,local_80,5);
          plVar14 = local_80;
          uVar16 = 0;
          uVar15 = 1;
          do {
            lVar11 = -1;
            if ((uVar3 & uVar15) != 0) {
              uVar8 = (ulonglong)uVar2;
              uVar2 = uVar2 + 1;
              *(longlong *)(lVar6 + uVar8 * 0x10) = *plVar14;
              *(undefined2 *)(lVar6 + 8 + uVar8 * 0x10) = 0x300;
              lVar11 = *plVar14;
            }
            if ((uVar3 & (uVar15 << 0x10 | uVar15 >> 0x10)) != 0) {
              uVar8 = (ulonglong)uVar2;
              uVar2 = uVar2 + 1;
              *(longlong *)(lVar6 + uVar8 * 0x10) = *plVar14;
              *(undefined2 *)(lVar6 + 8 + uVar8 * 0x10) = 0x10;
              lVar11 = *plVar14;
            }
            if (lVar11 == -1) break;
            uVar16 = uVar16 + 1;
            uVar15 = uVar15 << 1 | (uint)((int)uVar15 < 0);
            plVar14 = plVar14 + 1;
          } while (uVar16 < 5);
          param_5 = local_88;
        }
      }
      lVar11 = local_90;
      if (param_3 != 0) {
        pbVar12 = (byte *)(local_90 + 8);
        do {
          puVar9 = (undefined8 *)((ulonglong)uVar2 * 0x10 + lVar6);
          *puVar9 = *(undefined8 *)(pbVar12 + -8);
          *(undefined2 *)(puVar9 + 1) = 0;
          if ((*pbVar12 & 1) != 0) {
            *(undefined2 *)(puVar9 + 1) = 0x300;
          }
          if ((*pbVar12 & 2) != 0) {
            *(ushort *)(puVar9 + 1) = *(ushort *)(puVar9 + 1) | 0x400;
          }
          if ((*pbVar12 & 4) != 0) {
            *(ushort *)(puVar9 + 1) = *(ushort *)(puVar9 + 1) | 0x10;
          }
          uVar2 = uVar2 + 1;
          pbVar12 = pbVar12 + 0x10;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      if (((uVar2 != 0) && (iVar5 = Curl_poll(lVar6,uVar2,param_4), 0 < iVar5)) &&
         (uVar2 = 0, local_98 = iVar5, param_3 != 0)) {
        puVar18 = (ushort *)(lVar11 + 10);
        do {
          uVar1 = *(ushort *)(lVar6 + 10 + (ulonglong)(iVar13 + uVar2) * 0x10);
          uVar7 = (ushort)((uVar1 & 0x300) != 0);
          uVar10 = uVar7 | 4;
          if ((uVar1 & 0x10) == 0) {
            uVar10 = uVar7;
          }
          uVar7 = uVar10 | 2;
          if ((uVar1 & 0x400) == 0) {
            uVar7 = uVar10;
          }
          uVar2 = uVar2 + 1;
          *puVar18 = uVar7;
          puVar18 = puVar18 + 8;
          param_5 = local_88;
        } while (uVar2 < param_3);
      }
      iVar13 = local_98;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
      if (param_5 != (int *)0x0) {
        *param_5 = iVar13;
      }
      uVar4 = 0;
    }
    else {
      uVar4 = 3;
    }
  }
  return uVar4;
}



// FUNCTION 1436a5680 FUN_1436a5680 body=57 status=ok
// SIG undefined FUN_1436a5680(void)

void FUN_1436a5680(longlong *param_1)

{
  ulonglong uVar1;
  
  *(undefined1 *)(*param_1 + 400) = 0;
  uVar1 = param_1[0x81];
  if ((ulonglong)param_1[0x81] < (ulonglong)param_1[0x80]) {
    uVar1 = param_1[0x80];
  }
  *(ulonglong *)(*param_1 + 0x160) = uVar1 + 1;
  FUN_1436bee30(*param_1,6);
  return;
}



// FUNCTION 1436a56e0 multi_addtimeout body=168 status=ok
// SIG undefined multi_addtimeout(void)

undefined8 multi_addtimeout(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  
  puVar6 = (undefined8 *)0x0;
  puVar4 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(8);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = *param_2;
    lVar5 = FUN_1428ecdf0(param_1);
    if (lVar5 != 0) {
      puVar2 = (undefined8 *)*param_1;
      while ((puVar1 = puVar2, puVar1 != (undefined8 *)0x0 &&
             (iVar3 = curlx_tvdiff(*(undefined8 *)*puVar1,*puVar4), iVar3 < 1))) {
        puVar2 = (undefined8 *)puVar1[2];
        puVar6 = puVar1;
      }
    }
    iVar3 = FUN_1436b9de0(param_1,puVar6,puVar4);
    if (iVar3 != 0) {
      return 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar4);
  }
  return 3;
}



// FUNCTION 1436a5790 FUN_1436a5790 body=476 status=ok
// SIG undefined FUN_1436a5790(void)

ulonglong FUN_1436a5790(longlong *param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  plVar1 = (longlong *)*param_1;
  uVar6 = (ulonglong)(int)param_2;
  lVar2 = *plVar1;
  if (*(char *)(lVar2 + 0x8a18) == '\0') {
    FUN_1436ae9c0(lVar2,plVar1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x178));
    *(undefined8 *)(lVar2 + 0x178) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x170));
    *(undefined8 *)(lVar2 + 0x170) = 0;
    if ((param_2 < 0x2b) && ((0x40004800000U >> (uVar6 & 0x3f) & 1) != 0)) {
      param_3 = '\x01';
    }
    if (*(code **)(plVar1[0x7d] + 0x18) != (code *)0x0) {
      uVar4 = (**(code **)(plVar1[0x7d] + 0x18))(plVar1,param_2,param_3);
      uVar6 = (ulonglong)uVar4;
    }
    if ((((int)uVar6 != 0x2a) && (iVar5 = FUN_1436bece0(plVar1), (int)uVar6 == 0)) &&
       (uVar6 = uVar6 & 0xffffffff, iVar5 != 0)) {
      uVar6 = 0x2a;
    }
    if (((param_3 == '\0') &&
        (*(longlong *)(plVar1[0x9a] + 0x18) + *(longlong *)(plVar1[0x99] + 0x18) != 0)) &&
       ((*(char *)(lVar2 + 0x45a) == '\0' && (*(char *)((longlong)plVar1 + 0x3b9) == '\0')))) {
      uVar6 = 0;
    }
    else {
      *(undefined1 *)(lVar2 + 0x8a18) = 1;
      FUN_1436abaa0(plVar1);
      if (plVar1[10] != 0) {
        Curl_resolv_unlock(lVar2);
        plVar1[10] = 0;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x8820));
      *(undefined8 *)(lVar2 + 0x8820) = 0;
      if ((((*(char *)(lVar2 + 0x45a) == '\0') || ((int)plVar1[0xa0] == 2)) ||
          ((int)plVar1[0xae] == 2)) &&
         ((*(char *)((longlong)plVar1 + 0x3b9) == '\0' && (param_3 == '\0')))) {
        cVar3 = FUN_1436a4470(lVar2,plVar1);
        if (cVar3 == '\0') {
          *(undefined8 *)(lVar2 + 2000) = 0;
        }
        else {
          *(longlong **)(lVar2 + 2000) = plVar1;
          if (*(char *)((longlong)plVar1 + 0x3be) == '\0') {
            lVar7 = plVar1[0x18];
          }
          else {
            lVar7 = plVar1[0x20];
          }
          FUN_1436b58e0(lVar2,"Connection #%ld to host %s left intact\n",
                        *(undefined4 *)((longlong)plVar1 + 0x4c),lVar7);
        }
      }
      else {
        uVar4 = FUN_1436ae720(plVar1,param_3);
        if (((int)uVar6 == 0) && (uVar6 = uVar6 & 0xffffffff, uVar4 != 0)) {
          uVar6 = (ulonglong)uVar4;
        }
      }
      *param_1 = 0;
      FUN_1436ae8e0(lVar2);
      uVar6 = uVar6 & 0xffffffff;
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1436a5980 FUN_1436a5980 body=269 status=ok
// SIG undefined FUN_1436a5980(void)

ulonglong FUN_1436a5980(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *UNRECOVERED_JUMPTABLE;
  ulonglong uVar3;
  bool bVar4;
  
  if ((*(char *)(param_1 + 0x89c9) == '\0') && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0))
  {
    if (*(int *)(param_1 + 0x18) - 3U < 0xe) {
      **(longlong **)(param_1 + 0x10) = param_1;
    }
    switch(*(undefined4 *)(param_1 + 0x18)) {
    case 3:
      uVar3 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
              ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    case 4:
      lVar1 = *(longlong *)(param_1 + 0x10);
      uVar3 = 0;
      if (param_3 == 0) {
        return 0;
      }
      lVar2 = *(longlong *)(lVar1 + 0x1e0);
      bVar4 = lVar2 != -1;
      if (bVar4) {
        *param_2 = lVar2;
        uVar3 = 0x10000;
      }
      lVar1 = *(longlong *)(lVar1 + 0x1e8);
      if (lVar1 != -1) {
        param_2[bVar4] = lVar1;
        uVar3 = (ulonglong)((uint)uVar3 | 1 << bVar4 + 0x10);
      }
      return uVar3;
    case 5:
      lVar1 = *(longlong *)(param_1 + 0x10);
      if (param_3 != 0) {
        *param_2 = *(longlong *)(lVar1 + 0x1d0);
        uVar3 = 0x10000;
        if (*(int *)(lVar1 + 0x810) == 1) {
          uVar3 = 1;
        }
        return uVar3;
      }
      break;
    case 6:
    case 7:
      uVar3 = FUN_1436af020(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    default:
      goto LAB_1436a5a8c;
    case 9:
    case 10:
      uVar3 = FUN_1436ae8c0(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    case 0xb:
      if ((*(longlong *)(param_1 + 0x10) != 0) &&
         (UNRECOVERED_JUMPTABLE =
               *(code **)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 1000) + 0x50),
         UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001436a5a7b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*UNRECOVERED_JUMPTABLE)();
        return uVar3;
      }
      break;
    case 0xc:
    case 0xd:
    case 0xe:
      uVar3 = FUN_1436b8e70(*(undefined8 *)(param_1 + 0x10));
      return uVar3;
    }
    return 0;
  }
LAB_1436a5a8c:
  return 0;
}



// FUNCTION 1436a5ac0 FUN_1436a5ac0 body=164 status=ok
// SIG undefined FUN_1436a5ac0(void)

void FUN_1436a5ac0(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *local_res8;
  char local_res10 [8];
  
  puVar1 = (undefined8 *)*param_1;
  uVar2 = *puVar1;
  local_res8 = puVar1;
  FUN_1436b58e0(uVar2,"Re-used connection seems dead, get a new one\n");
  *(undefined1 *)((longlong)puVar1 + 0x3b9) = 1;
  iVar4 = FUN_1436a5790(&local_res8,0,0);
  *param_1 = 0;
  if ((iVar4 == 0) || (iVar4 == 0x37)) {
    local_res8 = (undefined8 *)CONCAT71(local_res8._1_7_,1);
    iVar4 = FUN_1436ae540(uVar2,param_1,local_res10,&local_res8);
    if ((iVar4 == 0) && (lVar3 = *param_1, local_res10[0] != '\0')) {
      iVar4 = FUN_1436abd90(lVar3,0);
      if (iVar4 == 0) {
        FUN_1436ba0d0(lVar3,&local_res8);
      }
    }
  }
  return;
}



// FUNCTION 1436a5b70 FUN_1436a5b70 body=4424 status=ok
// SIG undefined FUN_1436a5b70(void)

/* WARNING: Removing unreachable block (ram,0x0001436a5e7b) */
/* WARNING: Removing unreachable block (ram,0x0001436a6679) */
/* WARNING: Removing unreachable block (ram,0x0001436a66bc) */
/* WARNING: Removing unreachable block (ram,0x0001436a67cd) */
/* WARNING: Removing unreachable block (ram,0x0001436a6980) */
/* WARNING: Removing unreachable block (ram,0x0001436a676c) */
/* WARNING: Removing unreachable block (ram,0x0001436a62c3) */
/* WARNING: Removing unreachable block (ram,0x0001436a6288) */
/* WARNING: Removing unreachable block (ram,0x0001436a5f23) */
/* WARNING: Removing unreachable block (ram,0x0001436a5ef8) */
/* WARNING: Removing unreachable block (ram,0x0001436a6b86) */
/* WARNING: Removing unreachable block (ram,0x0001436a6c38) */

int FUN_1436a5b70(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  code *pcVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *plVar17;
  bool bVar18;
  bool bVar19;
  undefined8 local_res10;
  char local_res18 [8];
  char local_res20;
  char local_57;
  char local_56;
  int local_54;
  longlong local_50 [2];
  
  iVar8 = 0;
  local_res18[0] = '\0';
  local_res20 = '\0';
  bVar3 = false;
  if ((param_3 == 0) || (local_res10 = param_2, *(int *)(param_3 + 0x8b38) != -0x3f212453)) {
    return 2;
  }
  do {
    bVar18 = false;
    iVar10 = 0;
    iVar11 = 0;
    if (*(char *)(param_3 + 0x89c9) != '\0') {
      FUN_1436b58e0(param_3,"Pipe broke: handle %p, url = %s\n",param_3,
                    *(undefined8 *)(param_3 + 0x89d8));
      if (*(int *)(param_3 + 0x18) < 0x11) {
        if (*(int *)(param_3 + 0x18) != 2) {
          *(undefined4 *)(param_3 + 0x18) = 2;
          FUN_1436b8650(param_3);
        }
        iVar10 = -1;
        iVar8 = 0;
      }
      *(undefined1 *)(param_3 + 0x89c9) = 0;
      *(undefined8 *)(param_3 + 0x10) = 0;
      goto LAB_1436a6c4b;
    }
    if ((*(longlong *)(param_3 + 0x10) == 0) && (*(int *)(param_3 + 0x18) - 3U < 0xd)) {
      FUN_1436b5820(param_3,"In state %d with no easy_conn, bail out!\n",
                    *(undefined4 *)(param_3 + 0x18));
switchD_1436a5d8b_default:
      return 4;
    }
    cVar4 = *(char *)(param_1 + 0xbc);
    *(undefined1 *)(param_1 + 0xbc) = 0;
    if (cVar4 != '\0') {
      Curl_multi_process_pending_handles(param_1);
    }
    if ((*(longlong **)(param_3 + 0x10) != (longlong *)0x0) && (*(int *)(param_3 + 0x18) - 3U < 0xe)
       ) {
      **(longlong **)(param_3 + 0x10) = param_3;
    }
    iVar9 = iVar10;
    if (((*(longlong *)(param_3 + 0x10) != 0) && (*(int *)(param_3 + 0x18) - 2U < 0xf)) &&
       (iVar5 = FUN_1436b6c20(param_3,&local_res10,*(int *)(param_3 + 0x18) < 9), iVar5 < 0)) {
      uVar16 = *(undefined8 *)(param_3 + 0x738);
      if (*(int *)(param_3 + 0x18) == 3) {
        uVar6 = curlx_tvdiff(local_res10,uVar16);
        FUN_1436b5820(param_3,"Resolving timed out after %ld milliseconds",uVar6);
      }
      else if (*(int *)(param_3 + 0x18) == 4) {
        uVar6 = curlx_tvdiff(local_res10,uVar16);
        FUN_1436b5820(param_3,"Connection timed out after %ld milliseconds",uVar6);
      }
      else {
        lVar12 = *(longlong *)(param_3 + 0x90);
        uVar6 = curlx_tvdiff(local_res10,uVar16);
        if (lVar12 == -1) {
          FUN_1436b5820(param_3,
                        "Operation timed out after %ld milliseconds with %I64d bytes received",uVar6
                        ,*(undefined8 *)(param_3 + 0xb0));
        }
        else {
          FUN_1436b5820(param_3,
                        "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes received"
                        ,uVar6,*(undefined8 *)(param_3 + 0xb0),lVar12);
        }
      }
      iVar8 = *(int *)(param_3 + 0x18);
      if (9 < iVar8) {
        *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x3b9) = 1;
      }
      bVar18 = 9 < iVar8;
      FUN_1436a5790(param_3 + 0x10,0x1c,1);
      iVar8 = 0x1c;
      goto switchD_1436a5d8b_caseD_1;
    }
    switch(*(undefined4 *)(param_3 + 0x18)) {
    case 0:
      iVar8 = FUN_1436b86e0(param_3);
      iVar9 = iVar11;
      if (iVar8 == 0) {
        if (*(int *)(param_3 + 0x18) != 2) {
          *(undefined4 *)(param_3 + 0x18) = 2;
          FUN_1436b8650(param_3);
        }
        FUN_1436bee30(param_3);
        iVar9 = -1;
      }
      break;
    case 1:
      break;
    case 2:
      FUN_1436bee30(param_3,2);
      iVar8 = FUN_1436ae540(param_3,param_3 + 0x10,&local_57,local_res18);
      if (iVar8 == 0x59) {
        if (*(int *)(param_3 + 0x18) != 1) {
          *(undefined4 *)(param_3 + 0x18) = 1;
        }
        iVar10 = FUN_1436b9de0();
        iVar8 = 0;
        iVar9 = iVar11;
        if (iVar10 == 0) {
          iVar8 = 0x1b;
        }
      }
      else {
        iVar9 = iVar11;
        if (iVar8 == 0) {
          iVar8 = FUN_1436bf970(param_3);
          if (iVar8 != 0) {
            bVar18 = true;
            break;
          }
          if (local_57 != '\0') {
            if (*(int *)(param_3 + 0x18) != 3) {
              *(undefined4 *)(param_3 + 0x18) = 3;
            }
            break;
          }
          iVar9 = -1;
          if (local_res18[0] != '\0') {
            cVar4 = FUN_1436a4ab0();
            uVar7 = 9 - (cVar4 != '\0');
            if (*(uint *)(param_3 + 0x18) != uVar7) {
              pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
              *(uint *)(param_3 + 0x18) = uVar7;
              if (pcVar14 != (code *)0x0) {
                (*pcVar14)(param_3);
              }
            }
            break;
          }
          if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x810) != 1) {
            if (*(int *)(param_3 + 0x18) != 4) {
              *(undefined4 *)(param_3 + 0x18) = 4;
            }
            break;
          }
LAB_1436a5ed7:
          iVar9 = -1;
          if (*(int *)(param_3 + 0x18) != 5) {
            *(undefined4 *)(param_3 + 0x18) = 5;
          }
        }
      }
      break;
    case 3:
      lVar12 = *(longlong *)(param_3 + 0x10);
      local_50[0] = 0;
      if (*(char *)(lVar12 + 0x3bd) == '\0') {
        if (*(char *)(lVar12 + 0x3bb) == '\0') {
          uVar16 = *(undefined8 *)(lVar12 + 0xb8);
        }
        else {
          uVar16 = *(undefined8 *)(lVar12 + 0xd8);
        }
      }
      else {
        uVar16 = *(undefined8 *)(lVar12 + 0xf8);
      }
      local_50[0] = Curl_fetch_addr(lVar12,uVar16);
      if (local_50[0] == 0) {
LAB_1436a5fa4:
        iVar8 = FUN_1436abc70(*(undefined8 *)(param_3 + 0x10),local_50);
      }
      else {
        *(longlong *)(lVar12 + 0x6f0) = local_50[0];
        *(undefined1 *)(lVar12 + 0x6f8) = 1;
        iVar8 = 0;
        FUN_1436b58e0(param_3,"Hostname \'%s\' was found in DNS cache\n");
        if (local_50[0] == 0) goto LAB_1436a5fa4;
      }
      FUN_1436a6e90(param_1);
      if (local_50[0] != 0) {
        iVar8 = FUN_1436ba0d0(*(undefined8 *)(param_3 + 0x10));
        if (iVar8 == 0) {
          iVar10 = -1;
          if (local_res18[0] != '\0') {
            cVar4 = FUN_1436a4ab0();
            uVar7 = 9 - (cVar4 != '\0');
            if (*(uint *)(param_3 + 0x18) != uVar7) {
              pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
              *(uint *)(param_3 + 0x18) = uVar7;
              if (pcVar14 != (code *)0x0) {
                (*pcVar14)(param_3);
              }
            }
            goto LAB_1436a6ad2;
          }
          if (*(int *)(*(longlong *)(param_3 + 0x10) + 0x810) == 1) goto LAB_1436a5ed7;
          iVar9 = iVar10;
          if (*(int *)(param_3 + 0x18) != 4) {
            *(undefined4 *)(param_3 + 0x18) = 4;
          }
          break;
        }
        *(undefined8 *)(param_3 + 0x10) = 0;
      }
      if (iVar8 != 0) {
        bVar18 = true;
      }
      goto LAB_1436a6ad2;
    case 4:
      iVar8 = FUN_1436b64a0(*(undefined8 *)(param_3 + 0x10));
      if (local_56 == '\0') {
        iVar9 = iVar11;
        if (iVar8 != 0) goto LAB_1436a616b;
      }
      else if (iVar8 == 0) {
        iVar9 = -1;
        uVar7 = 6 - (*(char *)(*(longlong *)(param_3 + 0x10) + 0x3c8) != '\0');
        if (*(uint *)(param_3 + 0x18) != uVar7) {
          pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
          *(uint *)(param_3 + 0x18) = uVar7;
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(param_3);
          }
        }
      }
      else {
LAB_1436a616b:
        bVar18 = true;
        iVar9 = iVar11;
      }
      break;
    case 5:
      iVar8 = FUN_1436bbd50(*(undefined8 *)(param_3 + 0x10));
      if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x3d0) == '\0') {
        iVar9 = iVar11;
        if (((iVar8 == 0) && (*(int *)(*(longlong *)(param_3 + 0x10) + 0x810) == 2)) &&
           (iVar9 = -1, *(int *)(param_3 + 0x18) != 6)) {
          *(undefined4 *)(param_3 + 0x18) = 6;
        }
      }
      else {
        iVar8 = 0;
        FUN_1436a5790(param_3 + 0x10,0,0);
        iVar9 = -1;
        if (*(int *)(param_3 + 0x18) != 2) {
          *(undefined4 *)(param_3 + 0x18) = 2;
          FUN_1436b8650(param_3);
        }
      }
      break;
    case 6:
      iVar8 = FUN_1436aef00(*(undefined8 *)(param_3 + 0x10));
      if (local_res18[0] != '\0') {
        if (iVar8 != 0) goto LAB_1436a61e1;
        cVar4 = FUN_1436a4ab0();
        uVar7 = 9 - (cVar4 != '\0');
        if (*(uint *)(param_3 + 0x18) != uVar7) {
          pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
          *(uint *)(param_3 + 0x18) = uVar7;
LAB_1436a61ce:
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(param_3);
          }
        }
        goto LAB_1436a61d8;
      }
      iVar9 = iVar11;
      if (*(int *)(param_3 + 0x18) != 7) {
        *(undefined4 *)(param_3 + 0x18) = 7;
      }
      break;
    case 7:
      iVar8 = FUN_1436aefc0(*(undefined8 *)(param_3 + 0x10));
      if (iVar8 == 0) {
        iVar9 = iVar11;
        if (local_res18[0] != '\0') {
          cVar4 = FUN_1436a4ab0();
          uVar7 = 9 - (cVar4 != '\0');
          if (*(uint *)(param_3 + 0x18) != uVar7) {
            pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
            *(uint *)(param_3 + 0x18) = uVar7;
            if (pcVar14 != (code *)0x0) {
              (*pcVar14)(param_3);
              iVar9 = -1;
              break;
            }
          }
          goto LAB_1436a61d8;
        }
      }
      else {
LAB_1436a61e1:
        TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
        ::GetBoundProgramCounterForTimerManager(param_3);
        FUN_1436a5790(param_3 + 0x10,iVar8,1);
        bVar18 = true;
        iVar9 = iVar11;
      }
      break;
    case 8:
      cVar4 = FUN_1436bfaa0(param_3);
      iVar9 = iVar11;
      if (cVar4 != '\0') {
        if (*(int *)(param_3 + 0x18) != 9) {
          *(undefined4 *)(param_3 + 0x18) = 9;
        }
        goto LAB_1436a61d8;
      }
      break;
    case 9:
      if (*(char *)(param_3 + 0x471) == '\0') {
        plVar17 = *(longlong **)(param_3 + 0x10);
        iVar8 = 0;
        lVar12 = *plVar17;
        if (*(code **)(plVar17[0x7d] + 0x10) == (code *)0x0) goto LAB_1436a6352;
        iVar8 = (**(code **)(plVar17[0x7d] + 0x10))(plVar17);
        if (iVar8 == 0x37) {
          if (*(char *)((longlong)plVar17 + 0x3ba) == '\0') {
LAB_1436a6352:
            if (iVar8 == 0) {
              if (local_res20 == '\0') {
                if ((*(char *)(param_3 + 0x614) != '\0') &&
                   ((*(int *)(param_3 + 0x8a40) - 4U & 0xfffffffd) == 0)) {
                  FUN_1436a5790(param_3 + 0x10,0,0);
                  if (*(int *)(param_3 + 0x18) != 0x10) {
                    *(undefined4 *)(param_3 + 0x18) = 0x10;
                  }
                  goto LAB_1436a61d8;
                }
                iVar9 = iVar11;
                if (*(int *)(param_3 + 0x18) != 10) {
                  *(undefined4 *)(param_3 + 0x18) = 10;
                  iVar9 = iVar10;
                }
              }
              else {
                if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x3c3) == '\0') {
                  if (*(int *)(param_3 + 0x18) != 0xc) {
                    *(undefined4 *)(param_3 + 0x18) = 0xc;
                  }
                  goto LAB_1436a61d8;
                }
                iVar9 = iVar11;
                if (*(int *)(param_3 + 0x18) != 0xb) {
                  *(undefined4 *)(param_3 + 0x18) = 0xb;
                }
              }
              break;
            }
            goto LAB_1436a6412;
          }
          if (*(longlong *)(lVar12 + 0x78) == 0) {
            iVar8 = FUN_1436a5ac0(param_3 + 0x10);
            if (iVar8 == 0) {
              plVar17 = *(longlong **)(param_3 + 0x10);
              iVar8 = (**(code **)(plVar17[0x7d] + 0x10))(plVar17);
              goto LAB_1436a633b;
            }
            goto LAB_1436a6352;
          }
          iVar8 = 0x37;
LAB_1436a641c:
          if (*(char *)(*(longlong *)(param_3 + 0x10) + 0x3ba) != '\0') {
            local_50[0] = 0;
            iVar10 = FUN_1436b8c40(*(longlong *)(param_3 + 0x10),local_50);
            bVar18 = iVar10 != 0;
            if (bVar18) {
              iVar8 = iVar10;
            }
            bVar19 = local_50[0] == 0;
            TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
            ::GetBoundProgramCounterForTimerManager(param_3);
            iVar10 = FUN_1436a5790(param_3 + 0x10,iVar8,0);
            if (bVar18 || bVar19) {
              bVar18 = true;
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
              iVar9 = iVar11;
            }
            else if (((iVar10 == 0) || (iVar10 == 0x37)) &&
                    (iVar10 = FUN_1436b8380(param_3), iVar10 == 0)) {
              if (*(int *)(param_3 + 0x18) != 2) {
                *(undefined4 *)(param_3 + 0x18) = 2;
                FUN_1436b8650(param_3);
              }
              iVar8 = 0;
              iVar9 = -1;
            }
            else {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
              iVar9 = iVar11;
              iVar8 = iVar10;
            }
            break;
          }
        }
        else {
LAB_1436a633b:
          if (iVar8 == 0) {
            if (local_res20 != '\0') {
              FUN_1436a5680(plVar17);
            }
            goto LAB_1436a6352;
          }
LAB_1436a6412:
          if (iVar8 == 0x37) goto LAB_1436a641c;
        }
        TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
        ::GetBoundProgramCounterForTimerManager(param_3);
        if (*(longlong *)(param_3 + 0x10) == 0) goto LAB_1436a616b;
LAB_1436a64f2:
        FUN_1436a5790(param_3 + 0x10,iVar8,0);
        bVar18 = true;
        iVar9 = iVar11;
      }
      else {
        *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x3b9) = 0;
        if (*(int *)(param_3 + 0x18) != 0x10) {
          *(undefined4 *)(param_3 + 0x18) = 0x10;
        }
        iVar9 = -1;
        iVar8 = 0;
      }
      break;
    case 10:
      iVar8 = FUN_1436aeff0(*(undefined8 *)(param_3 + 0x10));
      if (iVar8 != 0) {
LAB_1436a6552:
        TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
        ::GetBoundProgramCounterForTimerManager(param_3);
        goto LAB_1436a64f2;
      }
      iVar9 = iVar11;
      if (local_res20 != '\0') {
        uVar7 = 0xc - (*(char *)(*(longlong *)(param_3 + 0x10) + 0x3c3) != '\0');
        if (*(uint *)(param_3 + 0x18) != uVar7) {
          pcVar14 = *(code **)(&DAT_145b67710 + (ulonglong)uVar7 * 8);
          *(uint *)(param_3 + 0x18) = uVar7;
          goto LAB_1436a61ce;
        }
        goto LAB_1436a61d8;
      }
      break;
    case 0xb:
      plVar17 = *(longlong **)(param_3 + 0x10);
      local_54 = 0;
      iVar8 = 0;
      if (((*(code **)(plVar17[0x7d] + 0x20) != (code *)0x0) &&
          (iVar8 = (**(code **)(plVar17[0x7d] + 0x20))(plVar17), iVar8 == 0)) && (local_54 == 1)) {
        *(undefined1 *)(*plVar17 + 400) = 0;
        uVar15 = plVar17[0x81];
        if ((ulonglong)plVar17[0x81] < (ulonglong)plVar17[0x80]) {
          uVar15 = plVar17[0x80];
        }
        *(ulonglong *)(*plVar17 + 0x160) = uVar15 + 1;
        FUN_1436bee30(*plVar17);
      }
      if (iVar8 != 0) goto LAB_1436a6552;
      iVar9 = iVar11;
      if (local_54 != 0) {
        lVar12 = 10;
        if (local_54 == 1) {
          lVar12 = 0xc;
        }
        if (*(int *)(param_3 + 0x18) != (int)lVar12) {
          pcVar14 = *(code **)(&DAT_145b67710 + lVar12 * 8);
          *(int *)(param_3 + 0x18) = (int)lVar12;
          if (pcVar14 != (code *)0x0) {
            (*pcVar14)(param_3);
          }
        }
        iVar10 = -1;
        goto LAB_1436a6ad2;
      }
      break;
    case 0xc:
      FUN_1436bf9f0(param_3);
      Curl_multi_process_pending_handles(param_1);
      if ((*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x400) == -1) &&
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x408) == -1)) {
        if (*(int *)(param_3 + 0x18) != 0x10) {
          *(undefined4 *)(param_3 + 0x18) = 0x10;
        }
      }
      else if (*(int *)(param_3 + 0x18) != 0xd) {
        *(undefined4 *)(param_3 + 0x18) = 0xd;
      }
LAB_1436a61d8:
      iVar9 = -1;
      break;
    case 0xd:
      cVar4 = FUN_1436bfa60(param_3);
      iVar9 = iVar11;
      if (cVar4 != '\0') {
        if (*(int *)(param_3 + 0x18) != 0xe) {
          *(undefined4 *)(param_3 + 0x18) = 0xe;
        }
        goto LAB_1436a61d8;
      }
      break;
    case 0xe:
      bVar19 = false;
      local_50[0] = 0;
      if ((*(longlong *)(param_3 + 0x2f0) < 1) ||
         (*(longlong *)(param_3 + 0x6f8) <= *(longlong *)(param_3 + 0x2f0))) {
        if ((*(longlong *)(param_3 + 0x2f8) < 1) ||
           (*(longlong *)(param_3 + 0x6f0) <= *(longlong *)(param_3 + 0x2f8))) {
          iVar8 = FUN_1436b8980(*(undefined8 *)(param_3 + 0x10));
          if ((*(byte *)(param_3 + 0x168) & 1) == 0) {
            FUN_1436bfae0(*(undefined8 *)(param_3 + 0x10));
          }
          if ((*(byte *)(param_3 + 0x168) & 2) == 0) {
            FUN_1436bfaf0(*(undefined8 *)(param_3 + 0x10));
          }
          if ((((bVar3) || (iVar8 == 0x38)) &&
              (iVar9 = FUN_1436b8c40(*(undefined8 *)(param_3 + 0x10)), iVar9 == 0)) &&
             (bVar19 = local_50[0] != 0, bVar19)) {
            iVar8 = 0;
            bVar3 = true;
LAB_1436a68c3:
            TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
            ::GetBoundProgramCounterForTimerManager(param_3);
            Curl_removeHandleFromPipeline(param_3);
            puVar2 = (undefined8 *)**(longlong **)(*(longlong *)(param_3 + 0x10) + 0x4d0);
            if (puVar2 != (undefined8 *)0x0) {
              FUN_1436a46a0(*puVar2);
            }
            Curl_multi_process_pending_handles(param_1);
            if (*(longlong *)(param_3 + 0x178) == 0) {
              if (bVar19) goto LAB_1436a69c5;
              if (*(longlong *)(param_3 + 0x170) != 0) {
                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
                local_50[0] = *(longlong *)(param_3 + 0x170);
                *(undefined8 *)(param_3 + 0x170) = 0;
                iVar8 = FUN_1436b8380(param_3);
                if (iVar8 == 0) {
                  local_50[0] = 0;
                }
                else {
                  bVar18 = true;
                }
              }
              if (*(int *)(param_3 + 0x18) != 0x10) {
                *(undefined4 *)(param_3 + 0x18) = 0x10;
              }
            }
            else {
              if (!bVar19) {
                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
                local_50[0] = *(longlong *)(param_3 + 0x178);
                *(undefined8 *)(param_3 + 0x178) = 0;
              }
LAB_1436a69c5:
              iVar8 = FUN_1436a5790(param_3 + 0x10,0,0);
              iVar11 = iVar10;
              if ((iVar8 != 0) || (iVar8 = FUN_1436b8380(param_3), iVar8 != 0)) goto LAB_1436a6a1d;
              if (*(int *)(param_3 + 0x18) != 2) {
                *(undefined4 *)(param_3 + 0x18) = 2;
                FUN_1436b8650(param_3);
              }
              local_50[0] = 0;
            }
            iVar11 = -1;
          }
          else {
            if (iVar8 != 0) {
              if (((*(byte *)(*(longlong *)(*(longlong *)(param_3 + 0x10) + 1000) + 0x78) & 2) == 0)
                 && (iVar8 != 0x5c)) {
                *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x3b9) = 1;
              }
              TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
              ::GetBoundProgramCounterForTimerManager(param_3);
              FUN_1436a5790(param_3 + 0x10,iVar8,0);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
              iVar9 = iVar11;
              break;
            }
            if (bVar3) goto LAB_1436a68c3;
          }
LAB_1436a6a1d:
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_50[0]);
          iVar9 = iVar11;
        }
        else {
          *(undefined4 *)(param_3 + 0x18) = 0xf;
          FUN_1436b8ef0(*(undefined8 *)(param_3 + 0x2f8),*(undefined8 *)(param_3 + 0x6f0));
          FUN_1436a46a0(param_3);
          iVar9 = iVar11;
        }
      }
      else {
        *(undefined4 *)(param_3 + 0x18) = 0xf;
        FUN_1436b8ef0(*(undefined8 *)(param_3 + 0x2f0),*(undefined8 *)(param_3 + 0x6f8));
        FUN_1436a46a0(param_3);
        iVar9 = iVar11;
      }
      break;
    case 0xf:
      iVar8 = FUN_1436befa0(*(undefined8 *)(param_3 + 0x10));
      if (iVar8 == 0) {
        iVar8 = FUN_1436bf8a0(param_3);
      }
      else {
        iVar8 = 0x2a;
      }
      if ((((*(longlong *)(param_3 + 0x2f0) == 0) ||
           (iVar9 = iVar11, *(longlong *)(param_3 + 0x6f8) < *(longlong *)(param_3 + 0x2f0))) &&
          ((*(longlong *)(param_3 + 0x2f8) == 0 ||
           (iVar9 = iVar11, *(longlong *)(param_3 + 0x6f0) < *(longlong *)(param_3 + 0x2f8))))) &&
         (iVar9 = iVar11, *(int *)(param_3 + 0x18) != 0xe)) {
        *(undefined4 *)(param_3 + 0x18) = 0xe;
        iVar9 = iVar10;
      }
      break;
    case 0x10:
      if (*(longlong *)(param_3 + 0x10) != 0) {
        Curl_removeHandleFromPipeline
                  (param_3,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x4d0));
        Curl_multi_process_pending_handles(param_1);
        iVar10 = FUN_1436a5790(param_3 + 0x10,iVar8,0);
        if (iVar8 == 0) {
          iVar8 = iVar10;
        }
        if (*(longlong *)(param_3 + 0x10) != 0) {
          *(undefined8 *)(param_3 + 0x10) = 0;
        }
      }
      if ((*(char *)(param_3 + 0x614) == '\0') || (*(int *)(param_3 + 0x8a40) == 6)) {
        iVar9 = -1;
        if (*(int *)(param_3 + 0x18) != 0x11) {
          *(undefined4 *)(param_3 + 0x18) = 0x11;
          piVar1 = (int *)(*(longlong *)(param_3 + 0x78) + 0x1c);
          *piVar1 = *piVar1 + -1;
          iVar9 = -1;
        }
        break;
      }
      iVar10 = -1;
      if (*(int *)(param_3 + 0x18) != 0) {
        *(undefined4 *)(param_3 + 0x18) = 0;
        iVar10 = -1;
      }
      goto LAB_1436a6ad2;
    case 0x11:
      *(undefined8 *)(param_3 + 0x10) = 0;
      FUN_1436a4500(param_3,0);
      break;
    case 0x12:
      *(int *)(param_3 + 0x1c) = iVar8;
      return 0;
    default:
      goto switchD_1436a5d8b_default;
    }
switchD_1436a5d8b_caseD_1:
    iVar10 = iVar9;
LAB_1436a6ad2:
    if (*(int *)(param_3 + 0x18) < 0x11) {
      if (iVar8 == 0) {
        if ((*(longlong *)(param_3 + 0x10) != 0) && (iVar11 = FUN_1436befa0(), iVar11 != 0)) {
          iVar8 = 0x2a;
          *(undefined1 *)(*(longlong *)(param_3 + 0x10) + 0x3b9) = 1;
          uVar7 = *(uint *)(param_3 + 0x18);
          uVar13 = (0xf < (int)uVar7) + 0x10;
          if (uVar7 != uVar13) {
            *(uint *)(param_3 + 0x18) = uVar13;
            if (0xf < (int)uVar7) {
              piVar1 = (int *)(*(longlong *)(param_3 + 0x78) + 0x1c);
              *piVar1 = *piVar1 + -1;
            }
            if (*(code **)(&DAT_145b67710 + (ulonglong)uVar13 * 8) != (code *)0x0) {
              (**(code **)(&DAT_145b67710 + (ulonglong)uVar13 * 8))(param_3);
            }
          }
          iVar10 = -1;
        }
        goto LAB_1436a6beb;
      }
      *(undefined1 *)(param_3 + 0x89c9) = 0;
      Curl_multi_process_pending_handles(param_1);
      if (*(longlong *)(param_3 + 0x10) == 0) {
        if (*(int *)(param_3 + 0x18) == 2) {
          TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
          ::GetBoundProgramCounterForTimerManager(param_3);
        }
      }
      else {
        FUN_1436bfaf0();
        FUN_1436bfae0(*(undefined8 *)(param_3 + 0x10));
        Curl_removeHandleFromPipeline
                  (param_3,*(undefined8 *)(*(longlong *)(param_3 + 0x10) + 0x4c8));
        Curl_removeHandleFromPipeline(param_3);
        if (bVar18) {
          FUN_1436ae720(*(undefined8 *)(param_3 + 0x10));
          *(undefined8 *)(param_3 + 0x10) = 0;
        }
      }
      if (*(int *)(param_3 + 0x18) != 0x11) {
        *(undefined4 *)(param_3 + 0x18) = 0x11;
        piVar1 = (int *)(*(longlong *)(param_3 + 0x78) + 0x1c);
        *piVar1 = *piVar1 + -1;
        goto LAB_1436a6beb;
      }
LAB_1436a6bf1:
      *(undefined4 *)(param_3 + 0x20) = 1;
      *(longlong *)(param_3 + 0x28) = param_3;
      *(int *)(param_3 + 0x30) = iVar8;
      iVar11 = FUN_1436b9de0();
      iVar10 = 0;
      if (iVar11 == 0) {
        iVar10 = 3;
      }
      if (*(int *)(param_3 + 0x18) != 0x12) {
        *(undefined4 *)(param_3 + 0x18) = 0x12;
      }
    }
    else {
LAB_1436a6beb:
      if (*(int *)(param_3 + 0x18) == 0x11) goto LAB_1436a6bf1;
    }
LAB_1436a6c4b:
    if ((iVar10 != -1) && (*(char *)(param_1 + 0xbc) == '\0')) {
      *(int *)(param_3 + 0x1c) = iVar8;
      return iVar10;
    }
  } while( true );
}



// FUNCTION 1436a6d10 multi_timeout body=196 status=ok
// SIG undefined multi_timeout(void)

undefined8 multi_timeout(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined4 uStackX_c;
  
  if (*(longlong *)(param_1 + 0x80) == 0) {
    *param_2 = -1;
    return 0;
  }
  uVar2 = curlx_tvnow();
  lVar3 = Curl_splay(DAT_146b7b8d0,*(undefined8 *)(param_1 + 0x80));
  *(longlong *)(param_1 + 0x80) = lVar3;
  if ((int)uVar2 <= *(int *)(lVar3 + 0x18)) {
    if (*(int *)(lVar3 + 0x18) <= (int)uVar2) {
      uStackX_c = (int)((ulonglong)uVar2 >> 0x20);
      if ((*(int *)(lVar3 + 0x1c) < uStackX_c) || (*(int *)(lVar3 + 0x1c) <= uStackX_c))
      goto LAB_1436a6da9;
    }
    iVar1 = curlx_tvdiff(*(undefined8 *)(lVar3 + 0x18),uVar2);
    *param_2 = iVar1;
    if (iVar1 == 0) {
      *param_2 = 1;
    }
    return 0;
  }
LAB_1436a6da9:
  *param_2 = 0;
  return 0;
}



// FUNCTION 1436a6de0 sh_addentry body=165 status=ok
// SIG undefined sh_addentry(void)

undefined8 * sh_addentry(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong local_res10;
  longlong local_res20;
  
  local_res10 = param_2;
  local_res20 = param_2;
  if ((param_2 != -1) &&
     (puVar1 = (undefined8 *)FUN_1436b8020(param_1,&local_res20,8), puVar1 != (undefined8 *)0x0)) {
    return puVar1;
  }
  puVar1 = (undefined8 *)(*(code *)PTR_calloc_1467dcc78)(1);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = param_3;
    puVar1[2] = local_res10;
    lVar2 = FUN_1436b7af0(param_1,&local_res10,8,puVar1);
    if (lVar2 != 0) {
      return puVar1;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1436a6e90 FUN_1436a6e90 body=1164 status=ok
// SIG undefined FUN_1436a6e90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436a6e90(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_88;
  int local_80;
  int local_7c;
  longlong *local_78;
  longlong local_70 [7];
  
  local_70[5] = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_70[0] = -1;
  local_70[1] = 0xffffffffffffffff;
  local_70[2] = 0xffffffffffffffff;
  local_70[3] = 0xffffffffffffffff;
  local_70[4] = 0xffffffffffffffff;
  local_88 = param_1;
  if ((*(char *)(param_2 + 0x89c9) == '\0') && (*(longlong **)(param_2 + 0x10) != (longlong *)0x0))
  {
    if (*(int *)(param_2 + 0x18) - 3U < 0xe) {
      **(longlong **)(param_2 + 0x10) = param_2;
    }
    switch(*(undefined4 *)(param_2 + 0x18)) {
    case 3:
      uVar6 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
              ::GetBoundProgramCounterForTimerManager(*(undefined8 *)(param_2 + 0x10),local_70,5);
      break;
    case 4:
      uVar6 = 0;
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x1e0);
      bVar13 = lVar7 != -1;
      if (bVar13) {
        local_70[0] = lVar7;
        uVar6 = 0x10000;
      }
      lVar7 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x1e8);
      if (lVar7 != -1) {
        local_70[bVar13] = lVar7;
        uVar6 = uVar6 | 1 << bVar13 + 0x10;
      }
      break;
    case 5:
      local_70[0] = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x1d0);
      uVar6 = 1;
      if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x810) != 1) {
        uVar6 = 0x10000;
      }
      break;
    case 6:
    case 7:
      uVar6 = FUN_1436af020(*(undefined8 *)(param_2 + 0x10),local_70,5);
      break;
    default:
      goto switchD_1436a6f32_caseD_8;
    case 9:
    case 10:
      uVar6 = FUN_1436ae8c0(*(undefined8 *)(param_2 + 0x10),local_70,5);
      break;
    case 0xb:
      lVar7 = *(longlong *)(param_2 + 0x10);
      if ((lVar7 == 0) ||
         (pcVar3 = *(code **)(*(longlong *)(lVar7 + 1000) + 0x50), pcVar3 == (code *)0x0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = (*pcVar3)(lVar7,local_70,5);
      }
      break;
    case 0xc:
    case 0xd:
    case 0xe:
      uVar6 = FUN_1436b8e70(*(undefined8 *)(param_2 + 0x10),local_70,5);
    }
  }
  else {
switchD_1436a6f32_caseD_8:
    uVar6 = 0;
  }
  local_7c = 0;
  plVar9 = local_70;
  do {
    iVar4 = local_7c;
    uVar1 = local_7c + 0x10;
    uVar11 = 1 << ((byte)local_7c & 0x1f);
    if ((uVar6 & (uVar11 | 1 << (uVar1 & 0x1f))) == 0) break;
    plVar2 = (longlong *)*plVar9;
    local_78 = plVar2;
    if (plVar2 == (longlong *)&DAT_ffffffffffffffff) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_1436b8020(local_88 + 0x88,&local_78,8);
    }
    lVar12 = local_88;
    bVar13 = (uVar6 & uVar11) != 0;
    uVar11 = bVar13 | 2;
    if ((uVar6 >> (uVar1 & 0x1f) & 1) == 0) {
      uVar11 = (uint)bVar13;
    }
    if (lVar7 == 0) {
      lVar7 = sh_addentry(local_88 + 0x88,plVar2,param_2);
      if (lVar7 == 0) {
        return;
      }
LAB_1436a7118:
      pcVar3 = *(code **)(lVar12 + 0x30);
      if (pcVar3 != (code *)0x0) {
        local_98 = *(longlong *)(lVar7 + 0x18);
        (*pcVar3)(param_2,plVar2,uVar11,*(undefined8 *)(lVar12 + 0x38));
      }
      *(uint *)(lVar7 + 8) = uVar11;
    }
    else if (*(uint *)(lVar7 + 8) != uVar11) goto LAB_1436a7118;
    local_7c = iVar4 + 1;
    plVar9 = plVar9 + 1;
  } while (local_7c < 5);
  lVar7 = local_88;
  local_80 = 0;
  lVar12 = (longlong)local_7c;
  if (0 < *(int *)(param_2 + 0x60)) {
    local_78 = (longlong *)(param_2 + 0x38);
    do {
      lVar10 = *local_78;
      lVar8 = 0;
      if (0 < lVar12) {
        do {
          if (lVar10 == local_70[lVar8]) {
            lVar10 = -1;
            break;
          }
          lVar8 = lVar8 + 1;
        } while (lVar8 < lVar12);
      }
      local_88 = lVar10;
      if ((lVar10 != -1) &&
         (plVar9 = (longlong *)FUN_1436b8020(lVar7 + 0x88,&local_88,8), plVar9 != (longlong *)0x0))
      {
        lVar8 = *(longlong *)(param_2 + 0x10);
        bVar13 = true;
        if (lVar8 == 0) {
LAB_1436a7277:
          if (*(code **)(lVar7 + 0x30) != (code *)0x0) {
            local_98 = plVar9[3];
            (**(code **)(lVar7 + 0x30))(param_2,lVar10,4,*(undefined8 *)(lVar7 + 0x38));
          }
          local_88 = lVar10;
          FUN_1436b7d50(lVar7 + 0x88,&local_88,8);
        }
        else {
          if (((*(longlong *)(lVar8 + 0x4d0) != 0) &&
              (1 < *(ulonglong *)(*(longlong *)(lVar8 + 0x4d0) + 0x18))) &&
             (bVar13 = false, *plVar9 == param_2)) {
            cVar5 = FUN_1436bff70(param_2,lVar8);
            if (cVar5 == '\0') {
              *plVar9 = *(longlong *)**(undefined8 **)(lVar8 + 0x4d0);
            }
            else {
              *plVar9 = *(longlong *)((longlong *)**(undefined8 **)(lVar8 + 0x4d0))[2];
            }
          }
          if ((*(longlong *)(lVar8 + 0x4c8) == 0) ||
             (*(ulonglong *)(*(longlong *)(lVar8 + 0x4c8) + 0x18) < 2)) {
            if (bVar13) goto LAB_1436a7277;
          }
          else if (*plVar9 == param_2) {
            cVar5 = FUN_1436bff90(param_2,lVar8);
            if (cVar5 == '\0') {
              *plVar9 = *(longlong *)**(undefined8 **)(lVar8 + 0x4c8);
            }
            else {
              *plVar9 = *(longlong *)((longlong *)**(undefined8 **)(lVar8 + 0x4c8))[2];
            }
          }
        }
      }
      local_80 = local_80 + 1;
      local_78 = local_78 + 1;
    } while (local_80 < *(int *)(param_2 + 0x60));
  }
  iVar4 = local_7c;
  _guard_xfg_dispatch_icall_nop((void *)(param_2 + 0x38),local_70,lVar12 * 8);
  *(int *)(param_2 + 0x60) = iVar4;
  return;
}



// FUNCTION 1436a7360 update_timer body=192 status=ok
// SIG undefined update_timer(void)

undefined8 update_timer(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int local_res8 [8];
  
  if (*(longlong *)(param_1 + 0x138) == 0) {
    return 0;
  }
  iVar2 = multi_timeout(param_1,local_res8);
  if (iVar2 == 0) {
    if (local_res8[0] < 0) {
      if (((*(int *)(param_1 + 0x148) == 0) && (*(int *)(param_1 + 0x14c) < 1)) &&
         (-1 < *(int *)(param_1 + 0x14c))) {
        return 0;
      }
      uVar3 = 0;
      local_res8[0] = -1;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x80);
      if ((*(int *)(param_1 + 0x148) <= *(int *)(lVar1 + 0x18)) &&
         (*(int *)(lVar1 + 0x18) <= *(int *)(param_1 + 0x148))) {
        if ((*(int *)(param_1 + 0x14c) <= *(int *)(lVar1 + 0x1c)) &&
           (*(int *)(lVar1 + 0x1c) <= *(int *)(param_1 + 0x14c))) {
          return 0;
        }
      }
      uVar3 = *(undefined8 *)(lVar1 + 0x18);
    }
    *(undefined8 *)(param_1 + 0x148) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001436a741d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_1 + 0x138))(param_1,local_res8[0],*(undefined8 *)(param_1 + 0x140));
    return uVar3;
  }
  return 0xffffffff;
}



// FUNCTION 1436a7420 FUN_1436a7420 body=1488 status=ok
// SIG undefined FUN_1436a7420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1436a7420(longlong param_1,DWORD param_2)

{
  char *_Dest;
  DWORD dwErrCode;
  DWORD DVar1;
  char *pcVar2;
  undefined1 auStackY_1a8 [32];
  char local_168 [79];
  undefined1 local_119;
  CHAR local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_1a8;
  _Dest = (char *)(param_1 + 0x5e0);
  *_Dest = '\0';
  dwErrCode = GetLastError();
  if ((int)param_2 < -0x7ff6dfef) {
    if (param_2 == 0x80092010) {
      pcVar2 = "CRYPT_E_REVOKED";
    }
    else {
      switch(param_2) {
      case 0x80090300:
        pcVar2 = "SEC_E_INSUFFICIENT_MEMORY";
        break;
      case 0x80090301:
        pcVar2 = "SEC_E_INVALID_HANDLE";
        break;
      case 0x80090302:
        pcVar2 = "SEC_E_UNSUPPORTED_FUNCTION";
        break;
      case 0x80090303:
        pcVar2 = "SEC_E_TARGET_UNKNOWN";
        break;
      case 0x80090304:
        pcVar2 = "SEC_E_INTERNAL_ERROR";
        break;
      case 0x80090305:
        pcVar2 = "SEC_E_SECPKG_NOT_FOUND";
        break;
      case 0x80090306:
        pcVar2 = "SEC_E_NOT_OWNER";
        break;
      case 0x80090307:
        pcVar2 = "SEC_E_CANNOT_INSTALL";
        break;
      case 0x80090308:
        pcVar2 = "SEC_E_INVALID_TOKEN";
        break;
      case 0x80090309:
        pcVar2 = "SEC_E_CANNOT_PACK";
        break;
      case 0x8009030a:
        pcVar2 = "SEC_E_QOP_NOT_SUPPORTED";
        break;
      case 0x8009030b:
        pcVar2 = "SEC_E_NO_IMPERSONATION";
        break;
      case 0x8009030c:
        pcVar2 = "SEC_E_LOGON_DENIED";
        break;
      case 0x8009030d:
        pcVar2 = "SEC_E_UNKNOWN_CREDENTIALS";
        break;
      case 0x8009030e:
        pcVar2 = "SEC_E_NO_CREDENTIALS";
        break;
      case 0x8009030f:
        pcVar2 = "SEC_E_MESSAGE_ALTERED";
        break;
      case 0x80090310:
        pcVar2 = "SEC_E_OUT_OF_SEQUENCE";
        break;
      case 0x80090311:
        pcVar2 = "SEC_E_NO_AUTHENTICATING_AUTHORITY";
        break;
      default:
        goto switchD_1436a748c_caseD_80090312;
      case 0x80090316:
        pcVar2 = "SEC_E_BAD_PKGID";
        break;
      case 0x80090317:
        pcVar2 = "SEC_E_CONTEXT_EXPIRED";
        break;
      case 0x80090318:
        pcVar2 = "SEC_E_INCOMPLETE_MESSAGE";
        break;
      case 0x80090320:
        pcVar2 = "SEC_E_INCOMPLETE_CREDENTIALS";
        break;
      case 0x80090321:
        pcVar2 = "SEC_E_BUFFER_TOO_SMALL";
        break;
      case 0x80090322:
        pcVar2 = "SEC_E_WRONG_PRINCIPAL";
        break;
      case 0x80090324:
        pcVar2 = "SEC_E_TIME_SKEW";
        break;
      case 0x80090325:
        pcVar2 = "SEC_E_UNTRUSTED_ROOT";
        break;
      case 0x80090326:
        pcVar2 = "SEC_E_ILLEGAL_MESSAGE";
        break;
      case 0x80090327:
        pcVar2 = "SEC_E_CERT_UNKNOWN";
        break;
      case 0x80090328:
        pcVar2 = "SEC_E_CERT_EXPIRED";
        break;
      case 0x80090329:
        pcVar2 = "SEC_E_ENCRYPT_FAILURE";
        break;
      case 0x80090330:
        pcVar2 = "SEC_E_DECRYPT_FAILURE";
        break;
      case 0x80090331:
        pcVar2 = "SEC_E_ALGORITHM_MISMATCH";
        break;
      case 0x80090332:
        pcVar2 = "SEC_E_SECURITY_QOS_FAILED";
        break;
      case 0x80090333:
        pcVar2 = "SEC_E_UNFINISHED_CONTEXT_DELETED";
        break;
      case 0x80090334:
        pcVar2 = "SEC_E_NO_TGT_REPLY";
        break;
      case 0x80090335:
        pcVar2 = "SEC_E_NO_IP_ADDRESSES";
        break;
      case 0x80090336:
        pcVar2 = "SEC_E_WRONG_CREDENTIAL_HANDLE";
        break;
      case 0x80090337:
        pcVar2 = "SEC_E_CRYPTO_SYSTEM_INVALID";
        break;
      case 0x80090338:
        pcVar2 = "SEC_E_MAX_REFERRALS_EXCEEDED";
        break;
      case 0x80090339:
        pcVar2 = "SEC_E_MUST_BE_KDC";
        break;
      case 0x8009033a:
        pcVar2 = "SEC_E_STRONG_CRYPTO_NOT_SUPPORTED";
        break;
      case 0x8009033b:
        pcVar2 = "SEC_E_TOO_MANY_PRINCIPALS";
        break;
      case 0x8009033c:
        pcVar2 = "SEC_E_NO_PA_DATA";
        break;
      case 0x8009033d:
        pcVar2 = "SEC_E_PKINIT_NAME_MISMATCH";
        break;
      case 0x8009033e:
        pcVar2 = "SEC_E_SMARTCARD_LOGON_REQUIRED";
        break;
      case 0x8009033f:
        pcVar2 = "SEC_E_SHUTDOWN_IN_PROGRESS";
        break;
      case 0x80090340:
        pcVar2 = "SEC_E_KDC_INVALID_REQUEST";
        break;
      case 0x80090341:
        pcVar2 = "SEC_E_KDC_UNABLE_TO_REFER";
        break;
      case 0x80090342:
        pcVar2 = "SEC_E_KDC_UNKNOWN_ETYPE";
        break;
      case 0x80090343:
        pcVar2 = "SEC_E_UNSUPPORTED_PREAUTH";
        break;
      case 0x80090345:
        pcVar2 = "SEC_E_DELEGATION_REQUIRED";
        break;
      case 0x80090346:
        pcVar2 = "SEC_E_BAD_BINDINGS";
        break;
      case 0x80090347:
        pcVar2 = "SEC_E_MULTIPLE_ACCOUNTS";
        break;
      case 0x80090348:
        pcVar2 = "SEC_E_NO_KERB_KEY";
        break;
      case 0x80090349:
        pcVar2 = "SEC_E_CERT_WRONG_USAGE";
        break;
      case 0x80090350:
        pcVar2 = "SEC_E_DOWNGRADE_DETECTED";
        break;
      case 0x80090351:
        pcVar2 = "SEC_E_SMARTCARD_CERT_REVOKED";
        break;
      case 0x80090352:
        pcVar2 = "SEC_E_ISSUING_CA_UNTRUSTED";
        break;
      case 0x80090353:
        pcVar2 = "SEC_E_REVOCATION_OFFLINE_C";
        break;
      case 0x80090354:
        pcVar2 = "SEC_E_PKINIT_CLIENT_FAILURE";
        break;
      case 0x80090355:
        pcVar2 = "SEC_E_SMARTCARD_CERT_EXPIRED";
        break;
      case 0x80090356:
        pcVar2 = "SEC_E_NO_S4U_PROT_SUPPORT";
        break;
      case 0x80090357:
        pcVar2 = "SEC_E_CROSSREALM_DELEGATION_FAILURE";
        break;
      case 0x80090358:
        pcVar2 = "SEC_E_REVOCATION_OFFLINE_KDC";
        break;
      case 0x80090359:
        pcVar2 = "SEC_E_ISSUING_CA_UNTRUSTED_KDC";
        break;
      case 0x8009035a:
        pcVar2 = "SEC_E_KDC_CERT_EXPIRED";
        break;
      case 0x8009035b:
        pcVar2 = "SEC_E_KDC_CERT_REVOKED";
        break;
      case 0x8009035d:
        pcVar2 = "SEC_E_INVALID_PARAMETER";
        break;
      case 0x8009035e:
        pcVar2 = "SEC_E_DELEGATION_POLICY";
        break;
      case 0x8009035f:
        pcVar2 = "SEC_E_POLICY_NLTM_ONLY";
      }
LAB_1436a796d:
      if (param_2 == 0) goto LAB_1436a79a0;
      if (param_2 == 0x80090326) {
        curl_msnprintf(_Dest,0xff,
                       "SEC_E_ILLEGAL_MESSAGE (0x%08X) - This error usually occurs when a fatal SSL/TLS alert is received (e.g. handshake failed). More detail may be available in the Windows System event log."
                       ,0x80090326);
        goto LAB_1436a79af;
      }
    }
LAB_1436a77dd:
    curl_msnprintf(local_168,0x50,"%s (0x%08X)",pcVar2);
    local_119 = 0;
    DVar1 = FormatMessageA(0x1200,(LPCVOID)0x0,param_2,0,local_118,0xff,(va_list *)0x0);
    if (DVar1 != 0) {
      local_19 = 0;
      pcVar2 = strrchr(local_118,10);
      if ((pcVar2 != (char *)0x0) && (1 < (longlong)pcVar2 - (longlong)local_118)) {
        *pcVar2 = '\0';
      }
      pcVar2 = strrchr(local_118,0xd);
      if ((pcVar2 != (char *)0x0) && (0 < (longlong)pcVar2 - (longlong)local_118)) {
        *pcVar2 = '\0';
      }
      curl_msnprintf(_Dest,0xff,"%s - %s",local_168);
      goto LAB_1436a79af;
    }
    pcVar2 = local_168;
  }
  else {
    if (0x90312 < (int)param_2) {
      switch(param_2) {
      case 0x90313:
        pcVar2 = "SEC_I_COMPLETE_NEEDED";
        break;
      case 0x90314:
        pcVar2 = "SEC_I_COMPLETE_AND_CONTINUE";
        break;
      case 0x90315:
        pcVar2 = "SEC_I_LOCAL_LOGON";
        break;
      default:
switchD_1436a748c_caseD_80090312:
        pcVar2 = "Unknown error";
        break;
      case 0x90317:
        pcVar2 = "SEC_I_CONTEXT_EXPIRED";
        break;
      case 0x90320:
        pcVar2 = "SEC_I_INCOMPLETE_CREDENTIALS";
        break;
      case 0x90321:
        pcVar2 = "SEC_I_RENEGOTIATE";
        break;
      case 0x90323:
        pcVar2 = "SEC_I_NO_LSA_CONTEXT";
        break;
      case 0x9035c:
        pcVar2 = "SEC_I_SIGNATURE_NEEDED";
      }
      goto LAB_1436a796d;
    }
    if (param_2 == 0x90312) {
      pcVar2 = "SEC_I_CONTINUE_NEEDED";
      goto LAB_1436a77dd;
    }
    if (param_2 != 0) goto switchD_1436a748c_caseD_80090312;
    pcVar2 = "No error";
  }
LAB_1436a79a0:
  strncpy(_Dest,pcVar2,0xff);
LAB_1436a79af:
  DVar1 = GetLastError();
  if (dwErrCode != DVar1) {
    SetLastError(dwErrCode);
  }
  *(undefined1 *)(param_1 + 0x6df) = 0;
  return _Dest;
}



// FUNCTION 1436a7be0 FUN_1436a7be0 body=281 status=ok
// SIG undefined FUN_1436a7be0(void)

char * FUN_1436a7be0(longlong param_1,DWORD param_2)

{
  DWORD dwErrCode;
  DWORD DVar1;
  int *piVar2;
  char *pcVar3;
  longlong lVar4;
  char *lpBuffer;
  
  dwErrCode = GetLastError();
  lpBuffer = (char *)(param_1 + 0x5e0);
  *lpBuffer = '\0';
  if (-1 < (int)param_2) {
    piVar2 = __sys_nerr();
    if ((int)param_2 < *piVar2) {
      pcVar3 = strerror(param_2);
      strncpy(lpBuffer,pcVar3,0xff);
      goto LAB_1436a7c89;
    }
  }
  lVar4 = FUN_1436a81e0(param_2,lpBuffer,0xff);
  if (lVar4 == 0) {
    DVar1 = FormatMessageA(0x1000,(LPCVOID)0x0,param_2,0,lpBuffer,0xff,(va_list *)0x0);
    if (DVar1 == 0) {
      curl_msnprintf(lpBuffer,0xff,"Unknown error %d (%#x)",param_2,param_2);
    }
  }
LAB_1436a7c89:
  *(undefined1 *)(param_1 + 0x6df) = 0;
  pcVar3 = strrchr(lpBuffer,10);
  if ((pcVar3 != (char *)0x0) && (1 < (longlong)pcVar3 - (longlong)lpBuffer)) {
    *pcVar3 = '\0';
  }
  pcVar3 = strrchr(lpBuffer,0xd);
  if ((pcVar3 != (char *)0x0) && (0 < (longlong)pcVar3 - (longlong)lpBuffer)) {
    *pcVar3 = '\0';
  }
  DVar1 = GetLastError();
  if (dwErrCode != DVar1) {
    SetLastError(dwErrCode);
  }
  return lpBuffer;
}



// FUNCTION 1436a7d00 FUN_1436a7d00 body=711 status=ok
// SIG undefined FUN_1436a7d00(void)

char * FUN_1436a7d00(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "Unsupported protocol";
  case 2:
    return "Failed initialization";
  case 3:
    return "URL using bad/illegal format or missing URL";
  case 4:
    return 
    "A requested feature, protocol or option was not found built-in in this libcurl due to a build-time decision."
    ;
  case 5:
    return "Couldn\'t resolve proxy name";
  case 6:
    return "Couldn\'t resolve host name";
  case 7:
    return "Couldn\'t connect to server";
  case 8:
    return "FTP: weird server reply";
  case 9:
    return "Access denied to remote resource";
  case 10:
    return "FTP: The server failed to connect to data port";
  case 0xb:
    return "FTP: unknown PASS reply";
  case 0xc:
    return "FTP: Accepting server connect has timed out";
  case 0xd:
    return "FTP: unknown PASV reply";
  case 0xe:
    return "FTP: unknown 227 response format";
  case 0xf:
    return "FTP: can\'t figure out the host in the PASV response";
  case 0x10:
    return "Error in the HTTP2 framing layer";
  case 0x11:
    return "FTP: couldn\'t set file type";
  case 0x12:
    return "Transferred a partial file";
  case 0x13:
    return "FTP: couldn\'t retrieve (RETR failed) the specified file";
  default:
    return "Unknown error";
  case 0x15:
    return "Quote command returned error";
  case 0x16:
    return "HTTP response code said error";
  case 0x17:
    return "Failed writing received data to disk/application";
  case 0x19:
    return "Upload failed (at start/before it took off)";
  case 0x1a:
    return "Failed to open/read local data from file/application";
  case 0x1b:
    return "Out of memory";
  case 0x1c:
    return "Timeout was reached";
  case 0x1e:
    return "FTP: command PORT failed";
  case 0x1f:
    return "FTP: command REST failed";
  case 0x21:
    return "Requested range was not delivered by the server";
  case 0x22:
    return "Internal problem setting up the POST";
  case 0x23:
    return "SSL connect error";
  case 0x24:
    return "Couldn\'t resume download";
  case 0x25:
    return "Couldn\'t read a file:// file";
  case 0x26:
    return "LDAP: cannot bind";
  case 0x27:
    return "LDAP: search failed";
  case 0x29:
    return "A required function in the library was not found";
  case 0x2a:
    return "Operation was aborted by an application callback";
  case 0x2b:
    return "A libcurl function was given a bad argument";
  case 0x2d:
    return "Failed binding local connection end";
  case 0x2f:
    return "Number of redirects hit maximum amount";
  case 0x30:
    return "An unknown option was passed in to libcurl";
  case 0x31:
    return "Malformed telnet option";
  case 0x33:
    return "SSL peer certificate or SSH remote key was not OK";
  case 0x34:
    return "Server returned nothing (no headers, no data)";
  case 0x35:
    return "SSL crypto engine not found";
  case 0x36:
    return "Can not set SSL crypto engine as default";
  case 0x37:
    return "Failed sending data to the peer";
  case 0x38:
    return "Failure when receiving data from the peer";
  case 0x3a:
    return "Problem with the local SSL certificate";
  case 0x3b:
    return "Couldn\'t use specified SSL cipher";
  case 0x3c:
    return "Peer certificate cannot be authenticated with given CA certificates";
  case 0x3d:
    return "Unrecognized or bad HTTP Content or Transfer-Encoding";
  case 0x3e:
    return "Invalid LDAP URL";
  case 0x3f:
    return "Maximum file size exceeded";
  case 0x40:
    return "Requested SSL level failed";
  case 0x41:
    return "Send failed since rewinding of the data stream failed";
  case 0x42:
    return "Failed to initialise SSL crypto engine";
  case 0x43:
    return "Login denied";
  case 0x44:
    return "TFTP: File Not Found";
  case 0x45:
    return "TFTP: Access Violation";
  case 0x46:
    return "Disk full or allocation exceeded";
  case 0x47:
    return "TFTP: Illegal operation";
  case 0x48:
    return "TFTP: Unknown transfer ID";
  case 0x49:
    return "Remote file already exists";
  case 0x4a:
    return "TFTP: No such user";
  case 0x4b:
    return "Conversion failed";
  case 0x4c:
    return "Caller must register CURLOPT_CONV_ callback options";
  case 0x4d:
    return "Problem with the SSL CA cert (path? access rights?)";
  case 0x4e:
    return "Remote file not found";
  case 0x4f:
    return "Error in the SSH layer";
  case 0x50:
    return "Failed to shut down the SSL connection";
  case 0x51:
    return "Socket not ready for send/recv";
  case 0x52:
    return "Failed to load CRL file (path? access rights?, format?)";
  case 0x53:
    return "Issuer check against peer certificate failed";
  case 0x54:
    return "FTP: The server did not accept the PRET command.";
  case 0x55:
    return "RTSP CSeq mismatch or invalid CSeq";
  case 0x56:
    return "RTSP session error";
  case 0x57:
    return "Unable to parse FTP file list";
  case 0x58:
    return "Chunk callback failed";
  case 0x59:
    return "The max connection limit is reached";
  case 0x5a:
    return "SSL public key does not match pinned public key";
  case 0x5b:
    return "SSL server certificate status verification FAILED";
  case 0x5c:
    return "Stream error in the HTTP/2 framing layer";
  }
}



// FUNCTION 1436a8140 FUN_1436a8140 body=109 status=ok
// SIG undefined FUN_1436a8140(void)

char * FUN_1436a8140(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return "No error";
  case 1:
    return "Invalid multi handle";
  case 2:
    return "Invalid easy handle";
  case 3:
    return "Out of memory";
  case 4:
    return "Internal error";
  case 5:
    return "Invalid socket argument";
  case 6:
    return "Unknown option";
  case 7:
    return "The easy handle is already added to a multi handle";
  case 0xffffffff:
    return "Please call curl_multi_perform() soon";
  default:
    return "Unknown error";
  }
}



// FUNCTION 1436a81e0 FUN_1436a81e0 body=703 status=ok
// SIG undefined FUN_1436a81e0(void)

char * FUN_1436a81e0(int param_1,char *param_2,size_t param_3)

{
  char *_Source;
  
  if (param_1 < 0x2afa) {
    if (param_1 == 0x2af9) {
      _Source = "Host not found";
    }
    else {
      switch(param_1) {
      case 0x2714:
        _Source = "Call interrupted";
        break;
      default:
        return (char *)0x0;
      case 0x2719:
        _Source = "Bad file";
        break;
      case 0x271d:
        _Source = "Bad access";
        break;
      case 0x271e:
        _Source = "Bad argument";
        break;
      case 0x2726:
        _Source = "Invalid arguments";
        break;
      case 0x2728:
        _Source = "Out of file descriptors";
        break;
      case 0x2733:
        _Source = "Call would block";
        break;
      case 0x2734:
      case 0x2735:
        _Source = "Blocking call in progress";
        break;
      case 0x2736:
        _Source = "Descriptor is not a socket";
        break;
      case 0x2737:
        _Source = "Need destination address";
        break;
      case 0x2738:
        _Source = "Bad message size";
        break;
      case 0x2739:
        _Source = "Bad protocol";
        break;
      case 0x273a:
        _Source = "Protocol option is unsupported";
        break;
      case 0x273b:
        _Source = "Protocol is unsupported";
        break;
      case 0x273c:
        _Source = "Socket is unsupported";
        break;
      case 0x273d:
        _Source = "Operation not supported";
        break;
      case 0x273e:
        _Source = "Protocol family not supported";
        break;
      case 0x273f:
        _Source = "Address family not supported";
        break;
      case 0x2740:
        _Source = "Address already in use";
        break;
      case 0x2741:
        _Source = "Address not available";
        break;
      case 0x2742:
        _Source = "Network down";
        break;
      case 0x2743:
        _Source = "Network unreachable";
        break;
      case 0x2744:
        _Source = "Network has been reset";
        break;
      case 0x2745:
        _Source = "Connection was aborted";
        break;
      case 0x2746:
        _Source = "Connection was reset";
        break;
      case 0x2747:
        _Source = "No buffer space";
        break;
      case 0x2748:
        _Source = "Socket is already connected";
        break;
      case 0x2749:
        _Source = "Socket is not connected";
        break;
      case 0x274a:
        _Source = "Socket has been shut down";
        break;
      case 0x274b:
        _Source = "Too many references";
        break;
      case 0x274c:
        _Source = "Timed out";
        break;
      case 0x274d:
        _Source = "Connection refused";
        break;
      case 0x274e:
        _Source = "Loop??";
        break;
      case 0x274f:
        _Source = "Name too long";
        break;
      case 0x2750:
        _Source = "Host down";
        break;
      case 0x2751:
        _Source = "Host unreachable";
        break;
      case 0x2752:
        _Source = "Not empty";
        break;
      case 0x2753:
        _Source = "Process limit reached";
        break;
      case 0x2754:
        _Source = "Too many users";
        break;
      case 0x2755:
        _Source = "Bad quota";
        break;
      case 0x2756:
        _Source = "Something is stale";
        break;
      case 0x2757:
        _Source = "Remote error";
        break;
      case 0x276b:
        _Source = "Winsock library is not ready";
        break;
      case 0x276c:
        _Source = "Winsock version not supported";
        break;
      case 0x276d:
        _Source = "Winsock library not initialised";
        break;
      case 0x2775:
        _Source = "Disconnected";
      }
    }
  }
  else if (param_1 == 0x2afa) {
    _Source = "Host not found, try again";
  }
  else if (param_1 == 0x2afb) {
    _Source = "Unrecoverable error in call to nameserver";
  }
  else {
    if (param_1 != 0x2afc) {
      return (char *)0x0;
    }
    _Source = "No data record of requested type";
  }
  strncpy(param_2,_Source,param_3);
  param_2[param_3 - 1] = '\0';
  return param_2;
}



// FUNCTION 1436a85c0 FUN_1436a85c0 body=17 status=ok
// SIG undefined FUN_1436a85c0(void)

longlong FUN_1436a85c0(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _read(param_1,param_2,param_3);
  return (longlong)iVar1;
}



// FUNCTION 1436a85e0 curlx_sltosi body=7 status=ok
// SIG undefined curlx_sltosi(void)

uint curlx_sltosi(uint param_1)

{
  return param_1 & 0x7fffffff;
}



// FUNCTION 1436a85f0 FUN_1436a85f0 body=3 status=ok
// SIG undefined FUN_1436a85f0(void)

undefined4 FUN_1436a85f0(undefined4 param_1)

{
  return param_1;
}



// FUNCTION 1436a8600 curlx_sltous body=4 status=ok
// SIG undefined curlx_sltous(void)

undefined2 curlx_sltous(undefined2 param_1)

{
  return param_1;
}



// FUNCTION 1436a8610 curlx_ultouc body=4 status=ok
// SIG undefined curlx_ultouc(void)

undefined1 curlx_ultouc(undefined1 param_1)

{
  return param_1;
}



// FUNCTION 1436a8620 curlx_uztosz body=14 status=ok
// SIG undefined curlx_uztosz(void)

ulonglong curlx_uztosz(ulonglong param_1)

{
  return param_1 & 0x7fffffffffffffff;
}



// FUNCTION 1436a8630 FUN_1436a8630 body=17 status=ok
// SIG undefined FUN_1436a8630(void)

longlong FUN_1436a8630(int param_1,void *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = _write(param_1,param_2,param_3);
  return (longlong)iVar1;
}



// FUNCTION 1436a8670 alloc_addbyter body=155 status=ok
// SIG undefined alloc_addbyter(void)

ulonglong alloc_addbyter(byte param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*param_2 == 0) {
    lVar1 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
    *param_2 = lVar1;
    if (lVar1 == 0) {
LAB_1436a869a:
      *(undefined4 *)(param_2 + 3) = 1;
      return 0xffffffff;
    }
    param_2[2] = 0x20;
    param_2[1] = 0;
  }
  else if ((ulonglong)param_2[2] <= param_2[1] + 1U) {
    lVar1 = (*(code *)PTR_realloc_1467dcc68)(*param_2,param_2[2] * 2);
    if (lVar1 == 0) goto LAB_1436a869a;
    *param_2 = lVar1;
    param_2[2] = param_2[2] * 2;
  }
  *(byte *)(param_2[1] + *param_2) = param_1;
  param_2[1] = param_2[1] + 1;
  return (ulonglong)param_1;
}



// FUNCTION 1436a8710 curl_maprintf body=152 status=ok
// SIG undefined curl_maprintf(void)

longlong curl_maprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  int local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = FUN_1436a9210(&local_28,alloc_addbyter,param_1,&local_res10);
  if ((iVar1 != -1) && (local_10 == 0)) {
    if (local_18 != 0) {
      *(undefined1 *)(local_20 + local_28) = 0;
      return local_28;
    }
    lVar2 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    return lVar2;
  }
  if (local_18 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_28);
  }
  return 0;
}



// FUNCTION 1436a87b0 curl_mfprintf body=44 status=ok
// SIG undefined curl_mfprintf(void)

void curl_mfprintf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1436a9210(param_1,fputc_exref,param_2,&local_res18);
  return;
}



// FUNCTION 1436a87e0 curl_msnprintf body=101 status=ok
// SIG undefined curl_msnprintf(void)

undefined4
curl_msnprintf(undefined1 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 local_res20;
  undefined1 *local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = 0;
  local_res20 = param_4;
  local_28 = param_1;
  local_18 = param_2;
  uVar1 = FUN_1436a9210(&local_28,&LAB_1436a8650,param_3,&local_res20);
  if (local_18 != 0) {
    if (local_18 == local_20) {
      local_28[-1] = 0;
      return uVar1;
    }
    *local_28 = 0;
  }
  return uVar1;
}



// FUNCTION 1436a8850 curl_mvaprintf body=136 status=ok
// SIG undefined curl_mvaprintf(void)

longlong curl_mvaprintf(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  int local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  iVar1 = FUN_1436a9210(&local_28,alloc_addbyter,param_1,param_2);
  if ((iVar1 != -1) && (local_10 == 0)) {
    if (local_18 != 0) {
      *(undefined1 *)(local_20 + local_28) = 0;
      return local_28;
    }
    lVar2 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    return lVar2;
  }
  if (local_18 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_28);
  }
  return 0;
}



// FUNCTION 1436a88e0 curl_mvsnprintf body=90 status=ok
// SIG undefined curl_mvsnprintf(void)

undefined4 curl_mvsnprintf(undefined1 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined1 *local_28;
  longlong local_20;
  longlong local_18;
  
  local_20 = 0;
  local_28 = param_1;
  local_18 = param_2;
  uVar1 = FUN_1436a9210(&local_28,&LAB_1436a8650);
  if (local_18 != 0) {
    if (local_18 == local_20) {
      local_28[-1] = 0;
      return uVar1;
    }
    *local_28 = 0;
  }
  return uVar1;
}



// FUNCTION 1436a8940 dprintf_DollarString body=127 status=ok
// SIG undefined dprintf_DollarString(void)

int dprintf_DollarString(byte *param_1,undefined8 *param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = isdigit((uint)*param_1);
  if (iVar1 != 0) {
    do {
      pbVar2 = param_1;
      param_1 = pbVar2 + 1;
      iVar3 = (int)(char)*pbVar2 + iVar3 * 10 + -0x30;
      iVar1 = isdigit((uint)*param_1);
    } while (iVar1 != 0);
    if ((iVar3 != 0) && (*param_1 == 0x24)) {
      *param_2 = pbVar2 + 2;
      return iVar3;
    }
  }
  return 0;
}



// FUNCTION 1436a89c0 FUN_1436a89c0 body=114 status=ok
// SIG undefined FUN_1436a89c0(void)

undefined8 FUN_1436a89c0(char *param_1)

{
  int iVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 uVar2;
  
  iVar1 = strncmp(param_1,"I32",3);
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
    iVar1 = strncmp(param_1,"I64",3);
    uVar2 = CONCAT44(extraout_var_00,iVar1);
    if (iVar1 != 0) {
      uVar2 = 0;
      switch(*param_1 + -0x20) {
      case 0:
      case 3:
      case 10:
      case 0xb:
      case 0xd:
      case 0xe:
      case 0x10:
      case 0x11:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x29:
      case 0x2c:
      case 0x2f:
      case 0x48:
      case 0x4c:
      case 0x51:
      case 0x5a:
        break;
      default:
        return 0;
      }
    }
  }
  return CONCAT71((int7)((ulonglong)uVar2 >> 8),1);
}



// FUNCTION 1436a8aa0 FUN_1436a8aa0 body=1598 status=ok
// SIG undefined FUN_1436a8aa0(void)

int FUN_1436a8aa0(byte *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  ulonglong *puVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  int iVar13;
  uint uVar14;
  ulonglong *puVar15;
  ulonglong *puVar16;
  longlong lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  longlong *local_res18;
  byte *local_58 [3];
  
  iVar20 = 0;
  iVar19 = 0;
  bVar2 = *param_1;
  local_res18 = param_3;
  do {
    if (bVar2 == 0) {
      lVar17 = (longlong)iVar19;
      if (0 < iVar19) {
        puVar15 = (ulonglong *)(param_4 + -8);
        puVar16 = (ulonglong *)(param_2 + 0x10);
        do {
          if ((*(uint *)((longlong)puVar16 + -0xc) & 0x4000) != 0) {
            puVar15 = puVar15 + 1;
            *(longlong *)(param_2 + 0x10 + (longlong)(int)puVar16[-1] * 0x18) =
                 (longlong)(int)(uint)*puVar15;
          }
          if ((*(uint *)((longlong)puVar16 + -0xc) & 0x10000) != 0) {
            puVar15 = puVar15 + 1;
            *(longlong *)(param_2 + 0x10 + (longlong)*(int *)((longlong)puVar16 + -4) * 0x18) =
                 (longlong)(int)(uint)*puVar15;
          }
          switch((int)puVar16[-2]) {
          case 0:
          case 1:
          case 2:
          case 4:
          case 7:
            puVar1 = puVar15 + 1;
            puVar15 = puVar15 + 1;
            *puVar16 = *puVar1;
            break;
          case 3:
            uVar14 = *(uint *)((longlong)puVar16 + -0xc);
            puVar15 = puVar15 + 1;
            if ((uVar14 & 0x240) == 0x240) {
              *puVar16 = *puVar15;
            }
            else if ((uVar14 & 0x40) == 0) {
              if ((uVar14 & 0x220) == 0x220) {
                *puVar16 = (ulonglong)(uint)*puVar15;
              }
              else if (((uVar14 & 0x20) == 0) && ((uVar14 >> 9 & 1) != 0)) {
                *puVar16 = (ulonglong)(uint)*puVar15;
              }
              else {
                *puVar16 = (longlong)(int)(uint)*puVar15;
              }
            }
            else {
              *puVar16 = *puVar15;
            }
            break;
          case 9:
            *(undefined4 *)(puVar16 + -2) = 3;
          }
          puVar16 = puVar16 + 3;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      return iVar19;
    }
    pbVar11 = param_1 + 1;
    local_58[0] = pbVar11;
    if (*param_1 == 0x25) {
      if (*pbVar11 == 0x25) {
        local_58[0] = param_1 + 2;
      }
      else {
        uVar14 = 0;
        iVar20 = iVar20 + 1;
        iVar13 = 0;
        iVar5 = isdigit((uint)*pbVar11);
        if (iVar5 == 0) {
LAB_1436a8b71:
          iVar13 = 0;
        }
        else {
          do {
            pbVar12 = pbVar11;
            pbVar11 = pbVar12 + 1;
            iVar13 = (int)(char)*pbVar12 + iVar13 * 10 + -0x30;
            iVar5 = isdigit((uint)*pbVar11);
          } while (iVar5 != 0);
          if ((iVar13 == 0) || (*pbVar11 != 0x24)) goto LAB_1436a8b71;
          local_58[0] = pbVar12 + 2;
        }
        iVar5 = iVar20;
        if (iVar13 != 0) {
          iVar5 = iVar13;
        }
        iVar13 = 0;
        iVar9 = 0;
        iVar18 = iVar5;
        if (iVar5 <= iVar19) {
          iVar18 = iVar19;
        }
        iVar19 = iVar18;
        cVar4 = FUN_1436a89c0(local_58[0]);
        if (cVar4 != '\0') {
          iVar18 = iVar19;
          uVar14 = 0;
          do {
            iVar6 = strncmp((char *)local_58[0],"I32",3);
            if (iVar6 == 0) {
              uVar14 = uVar14 | 0x20;
              pbVar12 = local_58[0] + 3;
            }
            else {
              iVar6 = strncmp((char *)local_58[0],"I64",3);
              pbVar11 = local_58[0];
              if (iVar6 == 0) {
                uVar14 = uVar14 | 0x40;
                pbVar12 = local_58[0] + 3;
              }
              else {
                pbVar12 = local_58[0] + 1;
                switch(*local_58[0]) {
                case 0x20:
                  uVar14 = uVar14 | 1;
                  break;
                case 0x23:
                  uVar14 = uVar14 | 8;
                  break;
                case 0x2a:
                  uVar14 = uVar14 | 0x4000;
                  iVar20 = iVar20 + 1;
                  iVar6 = 0;
                  local_58[0] = pbVar12;
                  iVar8 = isdigit((uint)*pbVar12);
                  iVar13 = iVar20;
                  if (iVar8 != 0) {
                    do {
                      pbVar11 = pbVar12;
                      pbVar12 = pbVar11 + 1;
                      iVar6 = (int)(char)*pbVar11 + iVar6 * 10 + -0x30;
                      iVar8 = isdigit((uint)*pbVar12);
                    } while (iVar8 != 0);
                    if ((iVar6 != 0) && (*pbVar12 == 0x24)) {
                      local_58[0] = pbVar11 + 2;
                      iVar13 = iVar6;
                    }
                  }
                  bVar3 = iVar19 < iVar13;
                  iVar19 = iVar18;
                  pbVar12 = local_58[0];
                  if (bVar3) {
                    iVar19 = iVar13;
                    iVar18 = iVar13;
                  }
                  break;
                case 0x2b:
                  uVar14 = uVar14 | 2;
                  break;
                case 0x2d:
                  uVar14 = uVar14 & 0xfffffeff | 4;
                  break;
                case 0x2e:
                  if (*pbVar12 == 0x2a) {
                    local_58[0] = local_58[0] + 2;
                    iVar20 = iVar20 + 1;
                    iVar6 = dprintf_DollarString(local_58[0]);
                    iVar9 = iVar20;
                    if (iVar6 != 0) {
                      iVar9 = iVar6;
                    }
                    if (iVar19 < iVar9) {
                      iVar18 = iVar9;
                    }
                    uVar14 = uVar14 | 0x18000;
                    iVar19 = iVar18;
                    pbVar12 = local_58[0];
                  }
                  else {
                    local_58[0] = pbVar12;
                    iVar9 = strtol((char *)pbVar12,(char **)local_58,10);
                    uVar14 = uVar14 | 0x8000;
                    pbVar12 = local_58[0];
                  }
                  break;
                case 0x30:
                  if ((uVar14 & 4) == 0) {
                    uVar14 = uVar14 | 0x100;
                  }
                case 0x31:
                case 0x32:
                case 0x33:
                case 0x34:
                case 0x35:
                case 0x36:
                case 0x37:
                case 0x38:
                case 0x39:
                  uVar14 = uVar14 | 0x2000;
                  local_58[0] = pbVar12;
                  iVar13 = strtol((char *)pbVar11,(char **)local_58,10);
                  pbVar12 = local_58[0];
                  break;
                case 0x49:
                case 0x4f:
                case 0x71:
                case 0x7a:
                  uVar14 = uVar14 | 0x40;
                  break;
                case 0x4c:
                  uVar14 = uVar14 | 0x80;
                  break;
                case 0x68:
                  uVar14 = uVar14 | 0x10;
                  break;
                case 0x6c:
                  uVar7 = 0x20;
                  if ((uVar14 & 0x20) != 0) {
                    uVar7 = 0x40;
                  }
                  uVar14 = uVar14 | uVar7;
                }
              }
            }
            local_58[0] = pbVar12;
            cVar4 = FUN_1436a89c0(local_58[0]);
          } while (cVar4 != '\0');
        }
        iVar5 = iVar5 + -1;
        switch(*local_58[0]) {
        case 0x45:
          uVar14 = uVar14 | 0x41000;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 7;
          break;
        default:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 0;
          break;
        case 0x47:
          uVar14 = uVar14 | 0x81000;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 7;
          break;
        case 0x53:
          uVar14 = uVar14 | 8;
        case 0x73:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 1;
          break;
        case 0x58:
          uVar14 = uVar14 | 0x1a00;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
          break;
        case 99:
          uVar14 = uVar14 | 0x20000;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
          break;
        case 100:
        case 0x69:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
          break;
        case 0x65:
          uVar14 = uVar14 | 0x40000;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 7;
          break;
        case 0x66:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 7;
          break;
        case 0x67:
          uVar14 = uVar14 | 0x80000;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 7;
          break;
        case 0x6e:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 4;
          break;
        case 0x6f:
          uVar14 = uVar14 | 0x400;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
          break;
        case 0x70:
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 2;
          break;
        case 0x75:
          uVar14 = uVar14 | 0x200;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
          break;
        case 0x78:
          uVar14 = uVar14 | 0xa00;
          puVar10 = (undefined4 *)(param_2 + (longlong)iVar5 * 0x18);
          *puVar10 = 3;
        }
        puVar10[1] = uVar14;
        puVar10[2] = iVar13;
        puVar10[3] = iVar9;
        if ((uVar14 >> 0xe & 1) != 0) {
          iVar13 = iVar13 + -1;
          puVar10[2] = iVar13;
          *(undefined8 *)(param_2 + (longlong)iVar13 * 0x18) = 9;
          *(undefined8 *)(param_2 + 8 + (longlong)iVar13 * 0x18) = 0;
        }
        if ((uVar14 >> 0x10 & 1) != 0) {
          iVar9 = iVar9 + -1;
          puVar10[3] = iVar9;
          *(undefined8 *)(param_2 + (longlong)iVar9 * 0x18) = 9;
          *(undefined8 *)(param_2 + 8 + (longlong)iVar9 * 0x18) = 0;
        }
        *local_res18 = (longlong)(local_58[0] + 1);
        local_res18 = local_res18 + 1;
      }
    }
    bVar2 = *local_58[0];
    param_1 = local_58[0];
  } while( true );
}



// FUNCTION 1436a9210 FUN_1436a9210 body=2398 status=ok
// SIG undefined FUN_1436a9210(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436a9210(undefined8 param_1,code *param_2,char *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar15;
  undefined8 uVar16;
  uint uVar17;
  byte *pbVar18;
  char *pcVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  uint uVar23;
  bool bVar24;
  undefined1 auStack_11c8 [32];
  int local_11a8;
  code *local_11a0;
  undefined8 local_1198;
  uint local_1190;
  char *local_1188;
  undefined8 *local_1180;
  uint local_1178 [4];
  ulonglong auStack_1168 [382];
  undefined8 local_578 [128];
  undefined2 local_178;
  undefined8 local_176;
  undefined8 local_16e;
  undefined8 local_166;
  undefined4 local_15e;
  undefined2 local_15a;
  char local_158 [254];
  char local_5a [2];
  ulonglong local_58;
  undefined8 uStack_48;
  longlong lVar14;
  
  uStack_48 = 0x1436a922f;
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_11c8;
  local_1188 = "0123456789abcdefghijklmnopqrstuvwxyz";
  iVar20 = 0;
  local_11a0 = param_2;
  local_1198 = param_1;
  FUN_1436a8aa0(param_3,local_1178);
  bVar24 = *param_3 == '\0';
  local_1180 = local_578;
  iVar10 = 0;
  do {
    while( true ) {
      while( true ) {
        if (bVar24) {
          return iVar20;
        }
        cVar7 = *param_3;
        if (cVar7 == '%') break;
        do {
          iVar8 = (*param_2)(cVar7,param_1);
          if (iVar8 == -1) {
            return iVar20;
          }
          cVar7 = param_3[1];
          param_3 = param_3 + 1;
          iVar20 = iVar20 + 1;
          if (cVar7 == '\0') {
            return iVar20;
          }
        } while (cVar7 != '%');
        bVar24 = false;
      }
      pbVar18 = (byte *)(param_3 + 1);
      if (param_3[1] != 0x25) break;
      param_3 = param_3 + 2;
      iVar8 = (*param_2)(0x25,param_1);
      if (iVar8 == -1) {
        return iVar20;
      }
      iVar20 = iVar20 + 1;
      bVar24 = *param_3 == '\0';
    }
    iVar8 = 0;
    iVar9 = isdigit((uint)(byte)param_3[1]);
    iVar11 = iVar10;
    if (iVar9 != 0) {
      do {
        bVar1 = *pbVar18;
        pbVar18 = pbVar18 + 1;
        iVar8 = (int)(char)bVar1 + iVar8 * 10 + -0x30;
        iVar9 = isdigit((uint)*pbVar18);
      } while (iVar9 != 0);
      if ((iVar8 != 0) && (*pbVar18 == 0x24)) {
        iVar11 = iVar8 + -1;
      }
    }
    uVar6 = local_1198;
    param_2 = local_11a0;
    local_11a8 = iVar10 + 1;
    lVar12 = (longlong)iVar11;
    if ((local_1178[lVar12 * 6 + 1] >> 0xe & 1) == 0) {
      uVar17 = local_1178[lVar12 * 6 + 2];
      uVar23 = uVar17;
    }
    else {
      uVar23 = local_1178[lVar12 * 6 + 2];
      local_11a8 = iVar10 + 2;
      uVar17 = (uint)auStack_1168[(longlong)(int)uVar23 * 3];
      if ((int)uVar17 < 0) {
        uVar17 = -uVar17;
        local_1178[lVar12 * 6 + 1] = local_1178[lVar12 * 6 + 1] & 0xfffffeff | 4;
      }
    }
    uVar2 = local_1178[lVar12 * 6 + 1];
    if ((uVar2 & 0x10000) == 0) {
      if ((uVar2 >> 0xf & 1) == 0) goto LAB_1436a93aa;
      uVar21 = local_1178[lVar12 * 6 + 3];
    }
    else {
      local_11a8 = local_11a8 + 1;
      uVar21 = (uint)auStack_1168[(longlong)(int)local_1178[lVar12 * 6 + 3] * 3];
      if ((int)uVar21 < 0) {
LAB_1436a93aa:
        uVar21 = 0xffffffff;
      }
    }
    uVar3 = local_1178[lVar12 * 6];
    local_1190 = uVar2 >> 3 & 1;
    if (uVar3 == 1) {
      pcVar19 = (char *)auStack_1168[lVar12 * 3];
      if (pcVar19 == (char *)0x0) {
        if ((uVar21 == 0xffffffff) || (4 < (int)uVar21)) {
          pcVar19 = "(nil)";
          local_1178[lVar12 * 6 + 1] = uVar2 & 0xfffffff7;
          uVar15 = 5;
        }
        else {
          pcVar19 = "";
          uVar15 = 0;
        }
      }
      else if (uVar21 == 0xffffffff) {
        uVar15 = 0xffffffffffffffff;
        do {
          uVar15 = uVar15 + 1;
        } while (pcVar19[uVar15] != '\0');
      }
      else {
        uVar15 = (ulonglong)(int)uVar21;
      }
      uVar23 = local_1178[lVar12 * 6 + 1];
      iVar10 = (int)uVar15;
      if (0x7fffffff < uVar15) {
        iVar10 = 0x7fffffff;
      }
      iVar10 = uVar17 - iVar10;
      uVar17 = uVar23 & 8;
      if (uVar17 != 0) {
        iVar8 = (*local_11a0)(0x22,param_1);
        if (iVar8 == -1) {
          return iVar20;
        }
        iVar20 = iVar20 + 1;
      }
      uVar23 = uVar23 & 4;
      if (uVar23 == 0) {
        while (0 < iVar10) {
          iVar10 = iVar10 + -1;
          iVar8 = (*local_11a0)(0x20,param_1);
          if (iVar8 == -1) {
            return iVar20;
          }
          iVar20 = iVar20 + 1;
        }
        iVar10 = iVar10 + -1;
      }
      while (uVar15 != 0) {
        uVar15 = uVar15 - 1;
        if (*pcVar19 == '\0') break;
        iVar8 = (*local_11a0)(*pcVar19,param_1);
        pcVar19 = pcVar19 + 1;
        if (iVar8 == -1) {
          return iVar20;
        }
        iVar20 = iVar20 + 1;
      }
      if (uVar23 != 0) {
        while (0 < iVar10) {
          iVar10 = iVar10 + -1;
          iVar8 = (*local_11a0)(0x20,param_1);
          if (iVar8 == -1) {
            return iVar20;
          }
          iVar20 = iVar20 + 1;
        }
      }
      param_2 = local_11a0;
      if (uVar17 != 0) {
        iVar10 = (*local_11a0)(0x22,param_1);
        if (iVar10 == -1) {
          return iVar20;
        }
        iVar20 = iVar20 + 1;
      }
    }
    else if (uVar3 == 2) {
      uVar15 = auStack_1168[lVar12 * 3];
      if (uVar15 == 0) {
        iVar10 = uVar17 - 5;
        if ((uVar2 & 4) != 0) {
          while (0 < iVar10) {
            iVar10 = iVar10 + -1;
            iVar8 = (*local_11a0)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
          }
          iVar10 = iVar10 + -1;
        }
        param_2 = local_11a0;
        pcVar19 = "(nil)";
        do {
          iVar8 = (*param_2)(*pcVar19,param_1);
          if (iVar8 == -1) {
            return iVar20;
          }
          pcVar19 = pcVar19 + 1;
          iVar20 = iVar20 + 1;
        } while (*pcVar19 != '\0');
        if ((uVar2 & 4) == 0) {
          while (0 < iVar10) {
            iVar10 = iVar10 + -1;
            iVar8 = (*param_2)(0x20,param_1);
            if (iVar8 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
          }
        }
      }
      else {
        local_1188 = "0123456789abcdefghijklmnopqrstuvwxyz";
        if ((uVar2 >> 0xc & 1) != 0) {
          local_1188 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        }
        local_1190 = 1;
        uVar22 = 0x10;
        uVar23 = 0;
LAB_1436a96f8:
        pcVar19 = local_5a;
        if (uVar21 == 0xffffffff) {
          uVar21 = 1;
        }
        iVar10 = (int)uVar22;
        for (; uVar15 != 0; uVar15 = uVar15 / uVar22) {
          *pcVar19 = local_1188[uVar15 % uVar22];
          pcVar19 = pcVar19 + -1;
        }
        iVar11 = (int)pcVar19 - (int)local_5a;
        iVar8 = uVar17 + iVar11;
        iVar11 = uVar21 + iVar11;
        if ((local_1190 == 0) || (iVar10 != 8)) {
LAB_1436a9762:
          if (0 < iVar11) goto LAB_1436a9767;
        }
        else {
          if (iVar11 < 1) {
            *pcVar19 = '0';
            pcVar19 = pcVar19 + -1;
            iVar8 = iVar8 + -1;
            goto LAB_1436a9762;
          }
LAB_1436a9767:
          iVar8 = iVar8 - iVar11;
          do {
            *pcVar19 = '0';
            iVar11 = iVar11 + -1;
            pcVar19 = pcVar19 + -1;
          } while (0 < iVar11);
        }
        if ((local_1190 != 0) && (iVar10 == 0x10)) {
          iVar8 = iVar8 + -2;
        }
        if ((uVar23 != 0) || ((uVar2 & 3) != 0)) {
          iVar8 = iVar8 + -1;
        }
        if ((uVar2 & 0x104) == 0) {
          while (0 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar11 = (*local_11a0)(0x20,uVar6);
            if (iVar11 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
          }
          iVar8 = iVar8 + -1;
        }
        param_2 = local_11a0;
        if (uVar23 == 0) {
          if ((uVar2 & 2) != 0) {
            uVar16 = 0x2b;
            goto LAB_1436a9853;
          }
          if ((uVar2 & 1) != 0) {
            uVar16 = 0x20;
            goto LAB_1436a9853;
          }
        }
        else {
          uVar16 = 0x2d;
LAB_1436a9853:
          iVar11 = (*local_11a0)(uVar16,uVar6);
          if (iVar11 == -1) {
            return iVar20;
          }
          iVar20 = iVar20 + 1;
        }
        param_1 = local_1198;
        if ((local_1190 != 0) && (iVar10 == 0x10)) {
          iVar10 = (*param_2)(0x30,local_1198);
          if (iVar10 == -1) {
            return iVar20;
          }
          if ((uVar2 >> 0xc & 1) == 0) {
            iVar10 = (*param_2)(0x78,param_1);
            if (iVar10 == -1) goto LAB_1436a9b44;
            iVar20 = iVar20 + 2;
          }
          else {
            iVar10 = (*param_2)(0x58);
            if (iVar10 == -1) {
LAB_1436a9b44:
              return iVar20 + 1;
            }
            iVar20 = iVar20 + 2;
          }
        }
        if (((uVar2 & 4) == 0) && ((uVar2 >> 8 & 1) != 0)) {
          while (0 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar10 = (*param_2)(0x30,param_1);
            if (iVar10 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
          }
          iVar8 = iVar8 + -1;
        }
        pcVar19 = pcVar19 + 1;
        if (pcVar19 <= local_5a) {
          do {
            iVar10 = (*param_2)(*pcVar19,param_1);
            if (iVar10 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
            pcVar19 = pcVar19 + 1;
          } while (pcVar19 <= local_5a);
        }
        if ((uVar2 & 4) != 0) {
          while (0 < iVar8) {
            iVar8 = iVar8 + -1;
            iVar10 = (*param_2)(0x20,param_1);
            if (iVar10 == -1) {
              return iVar20;
            }
            iVar20 = iVar20 + 1;
          }
        }
      }
    }
    else if (uVar3 == 3) {
      uVar15 = auStack_1168[lVar12 * 3];
      if ((uVar2 >> 0x11 & 1) == 0) {
        if ((uVar2 >> 10 & 1) == 0) {
          if ((uVar2 >> 0xb & 1) == 0) {
            uVar22 = 10;
            if ((uVar2 >> 9 & 1) == 0) {
              uVar23 = (uint)(uVar15 >> 0x3f);
              if ((longlong)uVar15 < 0) {
                uVar15 = -uVar15;
              }
              goto LAB_1436a96f8;
            }
          }
          else {
            local_1188 = "0123456789abcdefghijklmnopqrstuvwxyz";
            uVar22 = 0x10;
            if ((uVar2 >> 0xc & 1) != 0) {
              local_1188 = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            }
          }
        }
        else {
          uVar22 = 8;
        }
        uVar23 = 0;
        goto LAB_1436a96f8;
      }
      if ((uVar2 & 4) == 0) {
        while (uVar17 = uVar17 - 1, 0 < (int)uVar17) {
          iVar10 = (*param_2)(0x20,param_1);
          if (iVar10 == -1) {
            return iVar20;
          }
          iVar20 = iVar20 + 1;
        }
      }
      iVar10 = (*param_2)(uVar15 & 0xff,param_1);
      if (iVar10 == -1) {
        return iVar20;
      }
      iVar20 = iVar20 + 1;
      if ((uVar2 & 4) != 0) {
        while (uVar17 = uVar17 - 1, 0 < (int)uVar17) {
          iVar10 = (*param_2)(0x20,param_1);
          if (iVar10 == -1) {
            return iVar20;
          }
          iVar20 = iVar20 + 1;
        }
      }
    }
    else if (uVar3 == 4) {
      plVar4 = (longlong *)auStack_1168[lVar12 * 3];
      if ((uVar2 & 0x40) == 0) {
        if ((uVar2 & 0x20) == 0) {
          if ((uVar2 & 0x10) == 0) {
            *(int *)plVar4 = iVar20;
          }
          else {
            *(short *)plVar4 = (short)iVar20;
          }
        }
        else {
          *(int *)plVar4 = iVar20;
        }
      }
      else {
        *plVar4 = (longlong)iVar20;
      }
    }
    else if (uVar3 == 7) {
      local_178 = 0x25;
      local_176 = 0;
      local_16e = 0;
      local_166 = 0;
      local_15e = 0;
      local_15a = 0;
      lVar14 = -1;
      do {
        lVar13 = lVar14 + 1;
        lVar5 = lVar14 + 1;
        lVar14 = lVar13;
      } while (*(char *)((longlong)&local_178 + lVar5) != '\0');
      lVar13 = 0x20 - lVar13;
      uVar17 = uVar23;
      if (((uVar2 >> 0xd & 1) == 0) && (uVar17 = 0xffffffff, (uVar2 >> 0xe & 1) != 0)) {
        uVar17 = (uint)auStack_1168[(longlong)(int)uVar23 * 3];
      }
      uVar23 = 0xffffffff;
      if ((uVar2 >> 0xf & 1) == 0) {
        if ((uVar2 & 0x10000) != 0) {
          uVar23 = (uint)auStack_1168[(longlong)(int)local_1178[lVar12 * 6 + 3] * 3];
        }
      }
      else {
        uVar23 = local_1178[lVar12 * 6 + 3];
      }
      local_178._1_1_ = 0;
      if ((uVar2 & 4) != 0) {
        local_178._1_1_ = 0x2d;
      }
      local_178 = CONCAT11(local_178._1_1_,0x25);
      pbVar18 = (byte *)((longlong)&local_178 + 1);
      if ((uVar2 & 4) != 0) {
        pbVar18 = (byte *)&local_176;
      }
      if ((uVar2 & 2) != 0) {
        *pbVar18 = 0x2b;
        pbVar18 = pbVar18 + 1;
      }
      if ((uVar2 & 1) != 0) {
        *pbVar18 = 0x20;
        pbVar18 = pbVar18 + 1;
      }
      if ((uVar2 & 8) != 0) {
        *pbVar18 = 0x23;
        pbVar18 = pbVar18 + 1;
      }
      *pbVar18 = 0;
      if (-1 < (int)uVar17) {
        iVar10 = curl_msnprintf(pbVar18,lVar13,&DAT_145b69640);
        pbVar18 = pbVar18 + iVar10;
        lVar13 = lVar13 - iVar10;
      }
      if (-1 < (int)uVar23) {
        iVar10 = curl_msnprintf(pbVar18,lVar13,&DAT_145b69644,uVar23);
        pbVar18 = pbVar18 + iVar10;
      }
      if ((uVar2 & 0x20) != 0) {
        *pbVar18 = 0x6c;
        pbVar18 = pbVar18 + 1;
      }
      if ((uVar2 >> 0x12 & 1) == 0) {
        if ((uVar2 >> 0x13 & 1) == 0) {
          *pbVar18 = 0x66;
        }
        else {
          *pbVar18 = ~(byte)(uVar2 >> 7) & 0x20 | 0x47;
        }
      }
      else {
        *pbVar18 = ~(byte)(uVar2 >> 7) & 0x20 | 0x45;
      }
      pbVar18[1] = 0;
      sprintf(local_158,(char *)&local_178);
      param_2 = local_11a0;
      pcVar19 = local_158;
      cVar7 = local_158[0];
      while (cVar7 != '\0') {
        iVar10 = (*param_2)(*pcVar19,param_1);
        if (iVar10 == -1) {
          return iVar20;
        }
        pcVar19 = pcVar19 + 1;
        iVar20 = iVar20 + 1;
        cVar7 = *pcVar19;
      }
    }
    param_3 = (char *)*local_1180;
    local_1180 = local_1180 + 1;
    bVar24 = *param_3 == '\0';
    iVar10 = local_11a8;
  } while( true );
}



// FUNCTION 1436a9b70 FUN_1436a9b70 body=2661 status=ok
// SIG undefined FUN_1436a9b70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 *
FUN_1436a9b70(undefined8 param_1,undefined8 *param_2,char param_3,char *param_4,char *param_5,
             char *param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 *puVar8;
  char cVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  char *pcVar13;
  char *pcVar14;
  ulonglong uVar15;
  undefined8 uVar17;
  void *_Dst;
  undefined8 *puVar18;
  undefined8 *puVar19;
  char *pcVar20;
  uint uVar21;
  char *pcVar22;
  longlong lVar23;
  undefined8 *puVar24;
  undefined1 auStack_4a8 [32];
  undefined8 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined8 local_470;
  __time64_t local_468;
  undefined8 *local_460;
  undefined8 local_458;
  char *local_450;
  char local_448 [1024];
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_4a8;
  puVar24 = (undefined8 *)0x0;
  local_450 = param_6;
  local_460 = param_2;
  local_458 = param_1;
  local_468 = _time64((__time64_t *)0x0);
  bVar5 = false;
  puVar12 = (undefined8 *)(*(code *)PTR_calloc_1467dcc78)(1);
  if (puVar12 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_3 == '\0') {
    local_468 = 0;
    iVar11 = strncmp(param_4,"#HttpOnly_",10);
    if (iVar11 == 0) {
      param_4 = param_4 + 10;
      *(undefined1 *)((longlong)puVar12 + 0x5a) = 1;
    }
    if (*param_4 != '#') {
      pcVar13 = strchr(param_4,0xd);
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      pcVar13 = strchr(param_4,10);
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      pcVar13 = (char *)Curl_strtok_r(param_4,&DAT_145b07094,&local_468);
      puVar18 = puVar24;
      if (pcVar13 != (char *)0x0) {
LAB_1436aa1f5:
        uVar21 = (uint)puVar18;
        if (!bVar5) {
          bVar6 = bVar5;
          switch(uVar21) {
          case 0:
            pcVar14 = pcVar13 + 1;
            if (*pcVar13 != '.') {
              pcVar14 = pcVar13;
            }
            lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar14);
            puVar12[5] = lVar23;
            if (lVar23 == 0) {
              bVar5 = true;
            }
            break;
          case 1:
            iVar11 = Curl_strcasecompare(pcVar13,&DAT_145b69704);
            *(bool *)(puVar12 + 8) = iVar11 != 0;
            break;
          case 2:
            puVar18 = puVar24;
            do {
              pcVar14 = (char *)((longlong)puVar18 + 0x145b69704);
              puVar18 = (undefined8 *)((longlong)puVar18 + 1);
              puVar19 = puVar24;
              if (*pcVar14 != (pcVar13 + -1)[(longlong)puVar18]) goto LAB_1436aa280;
            } while (puVar18 != (undefined8 *)0x5);
            goto LAB_1436aa293;
          case 3:
            goto switchD_1436aa215_caseD_3;
          case 4:
            uVar17 = strtoll(pcVar13,0,10);
            puVar12[6] = uVar17;
            break;
          case 5:
            lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar13);
            puVar12[1] = lVar23;
            if (lVar23 == 0) {
              bVar5 = true;
            }
            break;
          case 6:
            lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar13);
            puVar12[2] = lVar23;
            if (lVar23 == 0) {
              bVar5 = true;
            }
          }
          goto switchD_1436aa215_default;
        }
        goto LAB_1436aa385;
      }
      goto LAB_1436aa127;
    }
LAB_1436a9c0b:
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12);
    return (undefined8 *)0x0;
  }
  pcVar13 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(5000);
  if (pcVar13 == (char *)0x0) goto LAB_1436a9c0b;
  pcVar14 = strchr(param_4,0x3b);
  cVar9 = *param_4;
  while ((cVar9 != '\0' && ((cVar9 == ' ' || (cVar9 == '\t'))))) {
    pcVar20 = param_4 + 1;
    param_4 = param_4 + 1;
    cVar9 = *pcVar20;
  }
LAB_1436a9c50:
  *pcVar13 = '\0';
  local_448[0] = '\0';
  iVar11 = FUN_143662c40(param_4,"%1023[^;\r\n=] =%4999[^;\r\n]",local_448,pcVar13);
  if (iVar11 < 1) {
LAB_1436a9fb4:
    if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_1436a9d68;
    cVar9 = pcVar14[1];
    while ((param_4 = pcVar14 + 1, cVar9 != '\0' && ((cVar9 == ' ' || (cVar9 == '\t'))))) {
      cVar9 = pcVar14[2];
      pcVar14 = param_4;
    }
    pcVar14 = strchr(param_4,0x3b);
    if ((pcVar14 == (char *)0x0) &&
       ((*param_4 == '\0' || (pcVar14 = strchr(param_4,0), pcVar14 == (char *)0x0))))
    goto LAB_1436a9d68;
    goto LAB_1436a9c50;
  }
  lVar23 = -1;
  do {
    lVar23 = lVar23 + 1;
  } while (pcVar13[lVar23] != '\0');
  uVar16 = 0xffffffffffffffff;
  do {
    uVar15 = uVar16 + 1;
    lVar7 = uVar16 + 1;
    uVar16 = uVar15;
  } while (local_448[lVar7] != '\0');
  cVar9 = param_4[uVar15];
  param_4 = param_4 + uVar15;
  if ((uVar15 != 0) && ((cVar10 = param_4[-1], cVar10 == ' ' || (cVar10 == '\t')))) {
    for (; (cVar10 != '\0' && (((cVar10 == ' ' || (cVar10 == '\t')) && (uVar15 != 0))));
        uVar15 = uVar15 - 1) {
      cVar10 = param_4[-2];
      param_4 = param_4 + -1;
    }
    if (0x3ff < uVar15) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_448[uVar15] = '\0';
  }
  for (; (lVar23 != 0 && ((pcVar13[lVar23 + -1] == ' ' || (pcVar13[lVar23 + -1] == '\t'))));
      lVar23 = lVar23 + -1) {
    pcVar13[lVar23 + -1] = '\0';
  }
  cVar10 = *pcVar13;
  pcVar20 = pcVar13;
  while ((cVar10 != '\0' && ((cVar10 == ' ' || (cVar10 == '\t'))))) {
    pcVar22 = pcVar20 + 1;
    pcVar20 = pcVar20 + 1;
    cVar10 = *pcVar22;
  }
  if ((puVar12[1] != 0) || (cVar9 != '=')) {
    if (lVar23 != 0) goto LAB_1436a9dff;
    iVar11 = Curl_strcasecompare("secure",local_448);
    if (iVar11 == 0) {
      iVar11 = Curl_strcasecompare("httponly",local_448);
      if (iVar11 == 0) {
        if (cVar9 == '=') goto LAB_1436a9dff;
      }
      else {
        *(undefined1 *)((longlong)puVar12 + 0x5a) = 1;
      }
    }
    else {
      *(undefined1 *)(puVar12 + 0xb) = 1;
    }
    goto LAB_1436a9fb4;
  }
  uVar17 = (*(code *)PTR__strdup_1467dcc70)(local_448);
  puVar12[1] = uVar17;
  lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar20);
  puVar12[2] = lVar23;
  if ((puVar12[1] != 0) && (lVar23 != 0)) {
LAB_1436a9dff:
    iVar11 = Curl_strcasecompare(&DAT_145b696ac,local_448);
    if (iVar11 == 0) {
      iVar11 = Curl_strcasecompare("domain",local_448);
      if (iVar11 == 0) {
        iVar11 = Curl_strcasecompare("version",local_448);
        if (iVar11 == 0) {
          iVar11 = Curl_strcasecompare("max-age",local_448);
          if (iVar11 == 0) {
            iVar11 = Curl_strcasecompare("expires",local_448);
            if (iVar11 == 0) goto LAB_1436a9fb4;
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12[7]);
            lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar20);
            puVar12[7] = lVar23;
          }
          else {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12[10]);
            lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar20);
            puVar12[10] = lVar23;
          }
        }
        else {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12[9]);
          lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar20);
          puVar12[9] = lVar23;
        }
        goto LAB_1436a9fae;
      }
      pcVar22 = pcVar20 + 1;
      if (*pcVar20 != '.') {
        pcVar22 = pcVar20;
      }
      pcVar20 = pcVar22;
      if (param_5 != (char *)0x0) {
        pcVar20 = param_5;
      }
      cVar9 = isip(pcVar20);
      pcVar20 = strchr(pcVar22,0x2e);
      if (pcVar20 == (char *)0x0) {
        param_5 = ":";
LAB_1436a9e9f:
        if (cVar9 == '\0') {
          cVar10 = tailmatch(pcVar22,param_5);
          if (cVar10 == '\0') goto LAB_1436a9f07;
        }
        else {
          pcVar20 = pcVar22;
          do {
            cVar10 = *pcVar20;
            cVar1 = pcVar20[(longlong)param_5 - (longlong)pcVar22];
            if (cVar10 != cVar1) break;
            pcVar20 = pcVar20 + 1;
          } while (cVar1 != '\0');
          if (cVar10 != cVar1) {
LAB_1436a9f07:
            bVar5 = true;
            FUN_1436b58e0(local_458,"skipped cookie with bad tailmatch domain: %s\n",pcVar22);
            goto LAB_1436a9fb4;
          }
        }
      }
      else if (param_5 != (char *)0x0) goto LAB_1436a9e9f;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12[5]);
      lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar22);
      puVar12[5] = lVar23;
      if (lVar23 != 0) {
        if (cVar9 == '\0') {
          *(undefined1 *)(puVar12 + 8) = 1;
        }
        goto LAB_1436a9fb4;
      }
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12[3]);
      lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar20);
      puVar12[3] = lVar23;
      if (lVar23 != 0) {
        lVar23 = sanitize_cookie_path(lVar23);
        puVar12[4] = lVar23;
LAB_1436a9fae:
        if (lVar23 != 0) goto LAB_1436a9fb4;
      }
    }
  }
  bVar5 = true;
LAB_1436a9d68:
  pcVar14 = (char *)puVar12[10];
  if (pcVar14 == (char *)0x0) {
    if (puVar12[7] != 0) {
      lVar23 = curl_getdate(puVar12[7],0);
      puVar12[6] = lVar23;
      if (lVar23 == 0) {
        puVar12[6] = 1;
      }
      else if (lVar23 < 0) {
        puVar12[6] = 0;
      }
    }
  }
  else {
    if (*pcVar14 == '\"') {
      pcVar14 = pcVar14 + 1;
    }
    lVar23 = strtoll(pcVar14,0,10);
    puVar12[6] = lVar23;
    if (0x7fffffffffffffff - local_468 < lVar23) {
      puVar12[6] = 0x7fffffffffffffff;
    }
    else {
      puVar12[6] = lVar23 + local_468;
    }
  }
  if (!bVar5) {
    if ((puVar12[5] == 0) && (param_5 != (char *)0x0)) {
      lVar23 = (*(code *)PTR__strdup_1467dcc70)(param_5);
      puVar12[5] = lVar23;
      if (lVar23 != 0) goto LAB_1436aa082;
      goto LAB_1436aa10c;
    }
LAB_1436aa082:
    pcVar14 = local_450;
    if ((puVar12[3] == 0) && (local_450 != (char *)0x0)) {
      pcVar20 = strchr(local_450,0x3f);
      if (pcVar20 == (char *)0x0) {
        pcVar20 = strrchr(pcVar14,0x2f);
      }
      else {
        pcVar20 = (char *)Curl_memrchr(pcVar14,0x2f,(longlong)pcVar20 - (longlong)pcVar14);
      }
      if (pcVar20 != (char *)0x0) {
        _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                 (pcVar20 + (2 - (longlong)pcVar14));
        puVar12[3] = _Dst;
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,pcVar14,(size_t)(pcVar20 + (1 - (longlong)pcVar14)));
          pcVar20[puVar12[3] + (1 - (longlong)pcVar14)] = '\0';
          lVar23 = sanitize_cookie_path(puVar12[3]);
          puVar12[4] = lVar23;
          if (lVar23 != 0) goto LAB_1436aa10f;
        }
LAB_1436aa10c:
        bVar5 = true;
      }
    }
  }
LAB_1436aa10f:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar13);
  if ((bVar5) || (puVar18 = local_460, puVar12[1] == 0)) goto LAB_1436aa127;
LAB_1436aa3c7:
  if ((*(char *)(puVar18 + 2) != '\0') || ((*(char *)(puVar18 + 3) == '\0' || (puVar12[6] != 0)))) {
    *(char *)((longlong)puVar12 + 0x59) = *(char *)(puVar18 + 2);
    remove_expired(puVar18);
    puVar19 = (undefined8 *)*puVar18;
    do {
      puVar8 = puVar19;
      bVar5 = false;
      if (puVar8 == (undefined8 *)0x0) goto LAB_1436aa52b;
      iVar11 = Curl_strcasecompare(puVar8[1],puVar12[1]);
      if (iVar11 == 0) goto LAB_1436aa5ad;
      lVar23 = puVar8[5];
      if (lVar23 == 0) {
LAB_1436aa441:
        if (puVar12[5] == 0) {
LAB_1436aa44c:
          lVar23 = puVar8[4];
          if (lVar23 == 0) {
LAB_1436aa59f:
            if (puVar12[4] == 0) {
LAB_1436aa476:
              bVar5 = true;
              if ((*(char *)((longlong)puVar12 + 0x59) == '\0') &&
                 (*(char *)((longlong)puVar8 + 0x59) != '\0')) break;
              *puVar12 = *puVar8;
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[1]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[2]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[5]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[3]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[4]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[7]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[9]);
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar8[10]);
              uVar17 = puVar12[1];
              *puVar8 = *puVar12;
              puVar8[1] = uVar17;
              uVar17 = puVar12[3];
              puVar8[2] = puVar12[2];
              puVar8[3] = uVar17;
              uVar17 = puVar12[5];
              puVar8[4] = puVar12[4];
              puVar8[5] = uVar17;
              uVar17 = puVar12[7];
              puVar8[6] = puVar12[6];
              puVar8[7] = uVar17;
              uVar2 = *(undefined4 *)((longlong)puVar12 + 0x44);
              uVar3 = *(undefined4 *)(puVar12 + 9);
              uVar4 = *(undefined4 *)((longlong)puVar12 + 0x4c);
              *(undefined4 *)(puVar8 + 8) = *(undefined4 *)(puVar12 + 8);
              *(undefined4 *)((longlong)puVar8 + 0x44) = uVar2;
              *(undefined4 *)(puVar8 + 9) = uVar3;
              *(undefined4 *)((longlong)puVar8 + 0x4c) = uVar4;
              uVar2 = *(undefined4 *)((longlong)puVar12 + 0x54);
              uVar3 = *(undefined4 *)(puVar12 + 0xb);
              uVar4 = *(undefined4 *)((longlong)puVar12 + 0x5c);
              *(undefined4 *)(puVar8 + 10) = *(undefined4 *)(puVar12 + 10);
              *(undefined4 *)((longlong)puVar8 + 0x54) = uVar2;
              *(undefined4 *)(puVar8 + 0xb) = uVar3;
              *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar12);
              puVar19 = puVar8;
              do {
                puVar24 = puVar19;
                puVar19 = (undefined8 *)*puVar24;
                puVar12 = puVar8;
              } while ((undefined8 *)*puVar24 != (undefined8 *)0x0);
LAB_1436aa52b:
              if (*(char *)(puVar18 + 2) != '\0') {
                pcVar13 = "Added";
                if (bVar5) {
                  pcVar13 = "Replaced";
                }
                local_470 = puVar12[6];
                local_478 = puVar12[3];
                local_480 = puVar12[5];
                local_488 = puVar12[2];
                FUN_1436b58e0(local_458,"%s cookie %s=\"%s\" for domain %s, path %s, expire %I64d\n"
                              ,pcVar13,puVar12[1]);
              }
              if (!bVar5) {
                if (puVar24 == (undefined8 *)0x0) {
                  *(int *)((longlong)puVar18 + 0x14) = *(int *)((longlong)puVar18 + 0x14) + 1;
                  *puVar18 = puVar12;
                  return puVar12;
                }
                *puVar24 = puVar12;
                *(int *)((longlong)puVar18 + 0x14) = *(int *)((longlong)puVar18 + 0x14) + 1;
                return puVar12;
              }
              return puVar12;
            }
          }
          else if (puVar12[4] == 0) {
            if (lVar23 == 0) goto LAB_1436aa59f;
          }
          else {
            iVar11 = Curl_strcasecompare(lVar23);
            if (iVar11 != 0) goto LAB_1436aa476;
          }
        }
      }
      else if (puVar12[5] == 0) {
        if (lVar23 == 0) goto LAB_1436aa441;
      }
      else {
        iVar11 = Curl_strcasecompare(lVar23);
        if (iVar11 != 0) goto LAB_1436aa44c;
      }
LAB_1436aa5ad:
      puVar19 = (undefined8 *)*puVar8;
      puVar24 = puVar8;
    } while( true );
  }
LAB_1436aa127:
  freecookie(puVar12);
  return (undefined8 *)0x0;
  while (puVar19 = puVar18, puVar18 != (undefined8 *)&DAT_00000006) {
LAB_1436aa280:
    puVar18 = (undefined8 *)((longlong)puVar19 + 1);
    if (*(char *)((longlong)puVar19 + 0x145b6970c) != (pcVar13 + -1)[(longlong)puVar18]) {
      lVar23 = (*(code *)PTR__strdup_1467dcc70)(pcVar13);
      puVar12[3] = lVar23;
      if (lVar23 == 0) {
        bVar5 = true;
      }
      else {
        lVar23 = sanitize_cookie_path(lVar23);
        puVar12[4] = lVar23;
        if (lVar23 == 0) {
          bVar5 = true;
        }
      }
      goto switchD_1436aa215_default;
    }
  }
LAB_1436aa293:
  lVar23 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
  puVar12[3] = lVar23;
  if (lVar23 == 0) {
    bVar5 = true;
  }
  lVar23 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
  uVar21 = 3;
  puVar12[4] = lVar23;
  bVar6 = true;
  if (lVar23 != 0) {
    bVar6 = bVar5;
  }
switchD_1436aa215_caseD_3:
  iVar11 = Curl_strcasecompare(pcVar13,&DAT_145b69704);
  *(bool *)(puVar12 + 0xb) = iVar11 != 0;
  bVar5 = bVar6;
switchD_1436aa215_default:
  pcVar13 = (char *)Curl_strtok_r(0,&DAT_145b07094,&local_468);
  uVar21 = uVar21 + 1;
  puVar18 = (undefined8 *)(ulonglong)uVar21;
  if (pcVar13 == (char *)0x0) goto LAB_1436aa385;
  goto LAB_1436aa1f5;
LAB_1436aa385:
  puVar18 = local_460;
  if (uVar21 == 6) {
    lVar23 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    puVar12[2] = lVar23;
    if (lVar23 == 0) goto LAB_1436aa127;
    uVar21 = 7;
  }
  if ((bVar5) || (uVar21 != 7)) goto LAB_1436aa127;
  goto LAB_1436aa3c7;
}



// FUNCTION 1436aa600 Curl_cookie_cleanup body=173 status=ok
// SIG undefined Curl_cookie_cleanup(void)

void Curl_cookie_cleanup(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[1]);
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[7]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[5]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[3]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[4]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[1]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[2]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[10]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[9]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
      puVar2 = puVar1;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return;
}



// FUNCTION 1436aa6b0 Curl_cookie_clearall body=159 status=ok
// SIG undefined Curl_cookie_clearall(void)

void Curl_cookie_clearall(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*param_1;
    while (puVar2 != (undefined8 *)0x0) {
      puVar1 = (undefined8 *)*puVar2;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[7]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[5]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[3]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[4]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[1]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[2]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[10]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[9]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
      puVar2 = puVar1;
    }
    *param_1 = 0;
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  return;
}



// FUNCTION 1436aa750 Curl_cookie_clearsess body=140 status=ok
// SIG undefined Curl_cookie_clearsess(void)

void Curl_cookie_clearsess(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if ((param_1 != (longlong *)0x0) &&
     (plVar2 = (longlong *)*param_1, plVar3 = plVar2, plVar4 = plVar2, plVar2 != (longlong *)0x0)) {
    do {
      plVar1 = (longlong *)*plVar2;
      plVar5 = plVar2;
      if (plVar2[6] == 0) {
        if (plVar3 == plVar2) {
          plVar3 = plVar1;
        }
        if (plVar4 == plVar2) {
          freecookie(plVar2);
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          plVar5 = plVar1;
        }
        else {
          *plVar4 = (longlong)plVar1;
          freecookie(plVar2);
          *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
          plVar5 = plVar4;
        }
      }
      plVar2 = plVar1;
      plVar4 = plVar5;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = (longlong)plVar3;
  }
  return;
}



// FUNCTION 1436aa7e0 Curl_cookie_freelist body=153 status=ok
// SIG undefined Curl_cookie_freelist(void)

void Curl_cookie_freelist(undefined8 *param_1,char param_2)

{
  undefined8 *puVar1;
  
  while (param_1 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*param_1;
    if (param_2 != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[7]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[5]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[3]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[4]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[1]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[2]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[10]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[9]);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    param_1 = puVar1;
  }
  return;
}



// FUNCTION 1436aa880 FUN_1436aa880 body=540 status=ok
// SIG undefined FUN_1436aa880(void)

longlong * FUN_1436aa880(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  __time64_t _Var8;
  longlong *plVar9;
  longlong *_Base;
  ulonglong uVar10;
  size_t _NumOfElements;
  longlong *plVar11;
  
  _Var8 = _time64((__time64_t *)0x0);
  plVar9 = (longlong *)0x0;
  _NumOfElements = 0;
  if ((param_1 == (longlong *)0x0) || (*param_1 == 0)) {
    plVar9 = (longlong *)0x0;
  }
  else {
    remove_expired(param_1);
    cVar5 = isip(param_2);
    param_1 = (longlong *)*param_1;
    plVar11 = plVar9;
    if (param_1 != (longlong *)0x0) {
      do {
        plVar9 = plVar11;
        if (((param_1[6] == 0) || (_Var8 < param_1[6])) &&
           (((char)param_1[0xb] == '\0' || (param_4 != '\0')))) {
          if (param_1[5] != 0) {
            if ((char)param_1[8] != '\0') {
              if ((cVar5 == '\0') && (cVar6 = tailmatch(param_1[5],param_2), cVar6 != '\0'))
              goto LAB_1436aa94c;
              if (((char)param_1[8] != '\0') && (cVar5 == '\0')) goto LAB_1436aa9ac;
            }
            iVar7 = Curl_strcasecompare(param_2,param_1[5]);
            if (iVar7 == 0) goto LAB_1436aa9ac;
          }
LAB_1436aa94c:
          if ((param_1[4] == 0) || (cVar6 = pathmatch(param_1[4],param_3), cVar6 != '\0')) {
            plVar9 = (longlong *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x60);
            if (plVar9 == (longlong *)0x0) goto joined_r0x0001436aaa7c;
            lVar4 = param_1[1];
            _NumOfElements = _NumOfElements + 1;
            *plVar9 = *param_1;
            plVar9[1] = lVar4;
            lVar4 = param_1[3];
            plVar9[2] = param_1[2];
            plVar9[3] = lVar4;
            lVar4 = param_1[5];
            plVar9[4] = param_1[4];
            plVar9[5] = lVar4;
            lVar4 = param_1[7];
            plVar9[6] = param_1[6];
            plVar9[7] = lVar4;
            uVar1 = *(undefined4 *)((longlong)param_1 + 0x44);
            lVar4 = param_1[9];
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x4c);
            *(int *)(plVar9 + 8) = (int)param_1[8];
            *(undefined4 *)((longlong)plVar9 + 0x44) = uVar1;
            *(int *)(plVar9 + 9) = (int)lVar4;
            *(undefined4 *)((longlong)plVar9 + 0x4c) = uVar2;
            lVar4 = param_1[0xb];
            plVar9[10] = param_1[10];
            plVar9[0xb] = lVar4;
            *plVar9 = (longlong)plVar11;
          }
        }
LAB_1436aa9ac:
        param_1 = (longlong *)*param_1;
        plVar11 = plVar9;
      } while (param_1 != (longlong *)0x0);
      if (_NumOfElements != 0) {
        _Base = (longlong *)
                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(_NumOfElements * 8);
        plVar3 = _Base;
        if (_Base == (longlong *)0x0) {
joined_r0x0001436aaa7c:
          while (plVar11 != (longlong *)0x0) {
            plVar9 = (longlong *)*plVar11;
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar11);
            plVar11 = plVar9;
          }
          plVar9 = (longlong *)0x0;
        }
        else {
          for (; plVar9 != (longlong *)0x0; plVar9 = (longlong *)*plVar9) {
            *plVar3 = (longlong)plVar9;
            plVar3 = plVar3 + 1;
          }
          qsort(_Base,_NumOfElements,8,(_PtFuncCompare *)&LAB_1436ab190);
          plVar9 = (longlong *)*_Base;
          uVar10 = 0;
          if (_NumOfElements != 1) {
            do {
              plVar11 = _Base + uVar10;
              lVar4 = uVar10 + 1;
              uVar10 = uVar10 + 1;
              *(longlong *)*plVar11 = _Base[lVar4];
            } while (uVar10 < _NumOfElements - 1);
          }
          *(undefined8 *)_Base[_NumOfElements - 1] = 0;
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Base);
        }
      }
    }
  }
  return plVar9;
}



// FUNCTION 1436aaaa0 FUN_1436aaaa0 body=459 status=ok
// SIG undefined FUN_1436aaaa0(void)

longlong FUN_1436aaaa0(undefined8 param_1,char *param_2,longlong param_3,undefined1 param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  FILE *_File;
  char *pcVar7;
  char *pcVar8;
  
  _File = (FILE *)0x0;
  bVar3 = true;
  lVar5 = param_3;
  if (param_3 == 0) {
    lVar5 = (*(code *)PTR_calloc_1467dcc78)(1,0x20);
    if (lVar5 != 0) {
      pcVar7 = "none";
      if (param_2 != (char *)0x0) {
        pcVar7 = param_2;
      }
      lVar6 = (*(code *)PTR__strdup_1467dcc70)(pcVar7);
      *(longlong *)(lVar5 + 8) = lVar6;
      if (lVar6 != 0) goto LAB_1436aab0f;
LAB_1436aab71:
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(0);
      if (param_3 == 0) {
        Curl_cookie_cleanup(lVar5);
      }
      if ((bVar3) && (_File != (FILE *)0x0)) {
        fclose(_File);
      }
    }
    lVar5 = 0;
  }
  else {
LAB_1436aab0f:
    *(undefined1 *)(lVar5 + 0x10) = 0;
    if (param_2 != (char *)0x0) {
      iVar4 = curl_strequal(param_2,&DAT_145b69768);
      if (iVar4 == 0) {
        if (*param_2 != '\0') {
          _File = fopen(param_2,"rt");
        }
      }
      else {
        _File = (FILE *)__acrt_iob_func(0);
        bVar3 = false;
      }
    }
    *(undefined1 *)(lVar5 + 0x18) = param_4;
    if (_File != (FILE *)0x0) {
      pcVar7 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(5000);
      if (pcVar7 == (char *)0x0) goto LAB_1436aab71;
      pcVar8 = fgets(pcVar7,5000,_File);
      while (pcVar8 != (char *)0x0) {
        iVar4 = Curl_raw_nequal("Set-Cookie:",pcVar7,0xb);
        pcVar8 = pcVar7;
        if (iVar4 != 0) {
          pcVar8 = pcVar7 + 0xb;
        }
        cVar2 = *pcVar8;
        while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
          pcVar1 = pcVar8 + 1;
          pcVar8 = pcVar8 + 1;
          cVar2 = *pcVar1;
        }
        FUN_1436a9b70(param_1,lVar5,iVar4 != 0,pcVar8,0,0);
        pcVar8 = fgets(pcVar7,5000,_File);
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar7);
      if (bVar3) {
        fclose(_File);
      }
    }
    *(undefined1 *)(lVar5 + 0x10) = 1;
  }
  return lVar5;
}



// FUNCTION 1436aac70 FUN_1436aac70 body=165 status=ok
// SIG undefined FUN_1436aac70(void)

longlong FUN_1436aac70(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x6a0);
  if ((puVar1 == (undefined8 *)0x0) || (*(int *)((longlong)puVar1 + 0x14) == 0)) {
    return 0;
  }
  puVar1 = (undefined8 *)*puVar1;
  lVar2 = 0;
  do {
    if (puVar1 == (undefined8 *)0x0) {
      return lVar2;
    }
    lVar4 = lVar2;
    if (puVar1[5] != 0) {
      lVar3 = get_netscape_format(puVar1);
      if (lVar3 == 0) {
LAB_1436aacf1:
        curl_slist_free_all(lVar2);
        return 0;
      }
      lVar4 = Curl_slist_append_nodup(lVar2,lVar3);
      if (lVar4 == 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
        goto LAB_1436aacf1;
      }
    }
    puVar1 = (undefined8 *)*puVar1;
    lVar2 = lVar4;
  } while( true );
}



// FUNCTION 1436aad20 FUN_1436aad20 body=600 status=ok
// SIG undefined FUN_1436aad20(void)

void FUN_1436aad20(longlong param_1)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  FILE *_File;
  char *pcVar9;
  char *pcVar10;
  undefined8 *puVar11;
  
  puVar11 = *(undefined8 **)(param_1 + 0x690);
  if (puVar11 != (undefined8 *)0x0) {
    Curl_share_lock(param_1,2,2);
    do {
      lVar4 = *(longlong *)(param_1 + 0x6a0);
      _File = (FILE *)0x0;
      uVar2 = *(undefined1 *)(param_1 + 0x321);
      pcVar9 = (char *)*puVar11;
      bVar5 = true;
      lVar7 = lVar4;
      if (lVar4 == 0) {
        lVar7 = (*(code *)PTR_calloc_1467dcc78)(1,0x20);
        if (lVar7 != 0) {
          pcVar10 = "none";
          if (pcVar9 != (char *)0x0) {
            pcVar10 = pcVar9;
          }
          lVar8 = (*(code *)PTR__strdup_1467dcc70)(pcVar10);
          *(longlong *)(lVar7 + 8) = lVar8;
          if (lVar8 != 0) goto LAB_1436aadc2;
LAB_1436aae2e:
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(0);
          if (lVar4 == 0) {
            Curl_cookie_cleanup(lVar7);
          }
          if ((bVar5) && (_File != (FILE *)0x0)) {
            fclose(_File);
          }
        }
        FUN_1436b58e0(param_1,"ignoring failed cookie_init for %s\n",*puVar11);
      }
      else {
LAB_1436aadc2:
        *(undefined1 *)(lVar7 + 0x10) = 0;
        if (pcVar9 != (char *)0x0) {
          iVar6 = curl_strequal(pcVar9,&DAT_145b69768);
          if (iVar6 == 0) {
            if (*pcVar9 != '\0') {
              _File = fopen(pcVar9,"rt");
            }
          }
          else {
            _File = (FILE *)__acrt_iob_func(0);
            bVar5 = false;
          }
        }
        *(undefined1 *)(lVar7 + 0x18) = uVar2;
        if (_File != (FILE *)0x0) {
          pcVar9 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(5000);
          if (pcVar9 == (char *)0x0) goto LAB_1436aae2e;
          pcVar10 = fgets(pcVar9,5000,_File);
          while (pcVar10 != (char *)0x0) {
            iVar6 = Curl_raw_nequal("Set-Cookie:",pcVar9,0xb);
            pcVar10 = pcVar9;
            if (iVar6 != 0) {
              pcVar10 = pcVar9 + 0xb;
            }
            cVar3 = *pcVar10;
            while ((cVar3 != '\0' && ((cVar3 == ' ' || (cVar3 == '\t'))))) {
              pcVar1 = pcVar10 + 1;
              pcVar10 = pcVar10 + 1;
              cVar3 = *pcVar1;
            }
            FUN_1436a9b70(param_1,lVar7,iVar6 != 0,pcVar10,0,0);
            pcVar10 = fgets(pcVar9,5000,_File);
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar9);
          if (bVar5) {
            fclose(_File);
          }
        }
        *(undefined1 *)(lVar7 + 0x10) = 1;
        *(longlong *)(param_1 + 0x6a0) = lVar7;
      }
      puVar11 = (undefined8 *)puVar11[1];
    } while (puVar11 != (undefined8 *)0x0);
    curl_slist_free_all(*(undefined8 *)(param_1 + 0x690));
    *(undefined8 *)(param_1 + 0x690) = 0;
    Curl_share_unlock(param_1,2);
  }
  return;
}



// FUNCTION 1436aaf80 FUN_1436aaf80 body=215 status=ok
// SIG undefined FUN_1436aaf80(void)

void FUN_1436aaf80(longlong param_1,int param_2)

{
  int iVar1;
  
  if (*(longlong *)(param_1 + 0x4a0) == 0) {
    if ((param_2 != 0) && (*(longlong *)(param_1 + 0x690) != 0)) {
      curl_slist_free_all();
      *(undefined8 *)(param_1 + 0x690) = 0;
    }
    Curl_share_lock(param_1,2,2);
  }
  else {
    if (*(longlong *)(param_1 + 0x690) != 0) {
      FUN_1436aad20();
    }
    Curl_share_lock(param_1,2,2);
    iVar1 = cookie_output(*(undefined8 *)(param_1 + 0x6a0),*(undefined8 *)(param_1 + 0x4a0));
    if (iVar1 != 0) {
      FUN_1436b58e0(param_1,"WARNING: failed to save cookies in %s\n",
                    *(undefined8 *)(param_1 + 0x4a0));
    }
  }
  if ((param_2 != 0) &&
     ((*(longlong *)(param_1 + 0x88) == 0 ||
      (*(longlong *)(param_1 + 0x6a0) != *(longlong *)(*(longlong *)(param_1 + 0x88) + 0x50))))) {
    Curl_cookie_cleanup(*(undefined8 *)(param_1 + 0x6a0));
  }
  Curl_share_unlock(param_1,2);
  return;
}



// FUNCTION 1436ab060 cookie_output body=290 status=ok
// SIG undefined cookie_output(void)

undefined8 cookie_output(undefined8 *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  FILE *_File;
  longlong lVar3;
  
  bVar1 = false;
  if ((param_1 != (undefined8 *)0x0) && (*(int *)((longlong)param_1 + 0x14) != 0)) {
    remove_expired();
    iVar2 = curl_strequal(&DAT_145b69768,param_2);
    if (iVar2 == 0) {
      _File = fopen(param_2,"wt");
      if (_File == (FILE *)0x0) {
        return 1;
      }
    }
    else {
      _File = (FILE *)__acrt_iob_func(1);
      bVar1 = true;
    }
    fputs("# Netscape HTTP Cookie File\n# https://curl.haxx.se/docs/http-cookies.html\n# This file was generated by libcurl! Edit at your own risk.\n\n"
          ,_File);
    param_1 = (undefined8 *)*param_1;
    do {
      if (param_1 == (undefined8 *)0x0) {
        if (!bVar1) {
          fclose(_File);
        }
        return 0;
      }
      if (param_1[5] != 0) {
        lVar3 = get_netscape_format(param_1);
        if (lVar3 == 0) {
          curl_mfprintf(_File,"#\n# Fatal libcurl error\n");
          if (bVar1) {
            return 1;
          }
          fclose(_File);
          return 1;
        }
        curl_mfprintf(_File,&DAT_145af6478,lVar3);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
      }
      param_1 = (undefined8 *)*param_1;
    } while( true );
  }
  return 0;
}



// FUNCTION 1436ab270 freecookie body=104 status=ok
// SIG undefined freecookie(void)

void freecookie(longlong param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x38));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x28));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x18));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x20));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 8));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x50));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001436ab2d1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return;
}



// FUNCTION 1436ab2e0 get_netscape_format body=211 status=ok
// SIG undefined get_netscape_format(void)

void get_netscape_format(longlong param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = "";
  puVar5 = &DAT_145af3922;
  if (*(undefined1 **)(param_1 + 0x10) != (undefined1 *)0x0) {
    puVar5 = *(undefined1 **)(param_1 + 0x10);
  }
  puVar2 = &DAT_145b11fc0;
  if (*(undefined1 **)(param_1 + 0x18) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x18);
  }
  pcVar1 = *(char **)(param_1 + 0x28);
  pcVar3 = "unknown";
  if (pcVar1 != (char *)0x0) {
    pcVar3 = pcVar1;
  }
  if (((*(char *)(param_1 + 0x40) == '\0') || (pcVar1 == (char *)0x0)) ||
     (puVar4 = &DAT_145af796c, *pcVar1 == '.')) {
    puVar4 = &DAT_145af3922;
  }
  pcVar6 = "FALSE";
  pcVar1 = "FALSE";
  if (*(char *)(param_1 + 0x58) != '\0') {
    pcVar1 = "TRUE";
  }
  if (*(char *)(param_1 + 0x40) != '\0') {
    pcVar6 = "TRUE";
  }
  if (*(char *)(param_1 + 0x5a) != '\0') {
    pcVar7 = "#HttpOnly_";
  }
  curl_maprintf("%s%s%s\t%s\t%s\t%s\t%I64d\t%s\t%s",pcVar7,puVar4,pcVar3,pcVar6,puVar2,pcVar1,
                *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 8),puVar5);
  return;
}



// FUNCTION 1436ab3c0 isip body=106 status=ok
// SIG undefined isip(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 isip(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [8];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  iVar1 = Curl_inet_pton(2,param_1,local_28);
  if (iVar1 == 0) {
    iVar1 = Curl_inet_pton(0x17,param_1,local_20);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1436ab430 pathmatch body=257 status=ok
// SIG undefined pathmatch(void)

bool pathmatch(char *param_1,undefined8 param_2)

{
  int iVar1;
  char *_Str;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong _MaxCount;
  bool bVar5;
  
  uVar4 = 0xffffffffffffffff;
  _MaxCount = 0xffffffffffffffff;
  do {
    _MaxCount = _MaxCount + 1;
  } while (param_1[_MaxCount] != '\0');
  if (_MaxCount != 1) {
    _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(param_2);
    if (_Str == (char *)0x0) {
      return false;
    }
    pcVar2 = strchr(_Str,0x3f);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (_Str[lVar3] != '\0');
    if ((lVar3 == 0) || (*_Str != '/')) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
      _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
      if (_Str == (char *)0x0) {
        return false;
      }
    }
    do {
      uVar4 = uVar4 + 1;
    } while (_Str[uVar4] != '\0');
    if ((uVar4 < _MaxCount) || (iVar1 = strncmp(param_1,_Str,_MaxCount), iVar1 != 0)) {
      bVar5 = false;
    }
    else if (_MaxCount == uVar4) {
      bVar5 = true;
    }
    else {
      bVar5 = _Str[_MaxCount] == '/';
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    return bVar5;
  }
  return true;
}



// FUNCTION 1436ab540 remove_expired body=230 status=ok
// SIG undefined remove_expired(void)

void remove_expired(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  __time64_t _Var4;
  
  _Var4 = _time64((__time64_t *)0x0);
  puVar1 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)0x0;
  while (puVar2 = puVar3, puVar3 = puVar1, puVar3 != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)*puVar3;
    if ((puVar3[6] != 0) && ((longlong)puVar3[6] < _Var4)) {
      if (puVar3 == (undefined8 *)*param_1) {
        *param_1 = puVar1;
      }
      else {
        *puVar2 = puVar1;
      }
      *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[7]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[5]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[3]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[4]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[1]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[2]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[10]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[9]);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
      puVar3 = puVar2;
    }
  }
  return;
}



// FUNCTION 1436ab630 sanitize_cookie_path body=157 status=ok
// SIG undefined sanitize_cookie_path(void)

char * sanitize_cookie_path(void)

{
  char *pcVar1;
  size_t _Size;
  size_t sVar2;
  
  pcVar1 = (char *)(*(code *)PTR__strdup_1467dcc70)();
  if (pcVar1 == (char *)0x0) {
    return (char *)0x0;
  }
  _Size = 0xffffffffffffffff;
  do {
    sVar2 = _Size;
    _Size = sVar2 + 1;
  } while (pcVar1[_Size] != '\0');
  if (*pcVar1 == '\"') {
    memmove(pcVar1,pcVar1 + 1,_Size);
    _Size = sVar2;
  }
  if ((_Size != 0) && (pcVar1[_Size - 1] == '\"')) {
    pcVar1[_Size - 1] = '\0';
    _Size = _Size - 1;
  }
  if (*pcVar1 != '/') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar1);
                    /* WARNING: Could not recover jumptable at 0x0001436ab6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pcVar1 = (char *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
    return pcVar1;
  }
  if ((_Size != 0) && (pcVar1[_Size - 1] == '/')) {
    pcVar1[_Size - 1] = '\0';
  }
  return pcVar1;
}



// FUNCTION 1436ab6d0 tailmatch body=147 status=ok
// SIG undefined tailmatch(void)

bool tailmatch(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0xffffffffffffffff;
  uVar3 = 0xffffffffffffffff;
  do {
    uVar3 = uVar3 + 1;
  } while (*(char *)(param_1 + uVar3) != '\0');
  do {
    uVar2 = uVar2 + 1;
  } while (*(char *)(param_2 + uVar2) != '\0');
  if (uVar2 < uVar3) {
    return false;
  }
  param_2 = (uVar2 - uVar3) + param_2;
  iVar1 = Curl_strcasecompare(param_1,param_2);
  if (iVar1 == 0) {
    return false;
  }
  if (uVar2 != uVar3) {
    return *(char *)(param_2 + -1) == '.';
  }
  return true;
}



// FUNCTION 1436ab770 FUN_1436ab770 body=334 status=ok
// SIG undefined FUN_1436ab770(void)

undefined4 FUN_1436ab770(char *param_1,longlong param_2,longlong *param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  size_t _Count;
  longlong lVar5;
  
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  if (param_1 == (char *)0x0) {
    return 0x1b;
  }
  pcVar2 = strchr(param_1,0x5c);
  if ((pcVar2 == (char *)0x0) && (pcVar2 = strchr(param_1,0x2f), pcVar2 == (char *)0x0)) {
    _Count = 0;
    pcVar2 = param_1;
    param_1 = "";
  }
  else {
    _Count = (longlong)pcVar2 - (longlong)param_1;
    pcVar2 = pcVar2 + 1;
  }
  lVar3 = (*(code *)PTR__strdup_1467dcc70)(pcVar2);
  if (lVar3 != 0) {
    lVar5 = -1;
    lVar4 = -1;
    *param_3 = lVar3;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(lVar3 + lVar4) != '\0');
    uVar1 = FUN_1436a85f0();
    *(undefined4 *)(param_3 + 1) = uVar1;
    pcVar2 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(_Count + 1);
    if (pcVar2 != (char *)0x0) {
      strncpy(pcVar2,param_1,_Count);
      pcVar2[_Count] = '\0';
      param_3[2] = (longlong)pcVar2;
      uVar1 = FUN_1436a85f0(_Count);
      *(undefined4 *)(param_3 + 3) = uVar1;
      if ((param_2 != 0) && (lVar3 = (*(code *)PTR__strdup_1467dcc70)(param_2), lVar3 != 0)) {
        param_3[4] = lVar3;
        do {
          lVar5 = lVar5 + 1;
        } while (*(char *)(lVar3 + lVar5) != '\0');
        uVar1 = FUN_1436a85f0(lVar5);
        *(undefined4 *)(param_3 + 5) = uVar1;
        *(undefined4 *)((longlong)param_3 + 0x2c) = 1;
        return 0;
      }
    }
    return 0x1b;
  }
  return 0x1b;
}



// FUNCTION 1436ab8c0 FUN_1436ab8c0 body=71 status=ok
// SIG undefined FUN_1436ab8c0(void)

void FUN_1436ab8c0(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
    *param_1 = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[4]);
    param_1[4] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[2]);
    param_1[2] = 0;
  }
  return;
}



// FUNCTION 1436ab910 Curl_sspi_global_cleanup body=43 status=ok
// SIG undefined Curl_sspi_global_cleanup(void)

void Curl_sspi_global_cleanup(void)

{
  if (DAT_146b7b8d8 != (HMODULE)0x0) {
    FreeLibrary(DAT_146b7b8d8);
    DAT_146b7b8d8 = (HMODULE)0x0;
    DAT_146b7b8e0 = 0;
  }
  return;
}



// FUNCTION 1436ab940 FUN_1436ab940 body=120 status=ok
// SIG undefined FUN_1436ab940(void)

undefined8 FUN_1436ab940(void)

{
  char cVar1;
  FARPROC pFVar2;
  char *pcVar3;
  
  if (DAT_146b7b8d8 != (HMODULE)0x0) {
    return 0;
  }
  cVar1 = Curl_verify_windows_version(4,0,2);
  pcVar3 = "security.dll";
  if (cVar1 == '\0') {
    pcVar3 = "secur32.dll";
  }
  DAT_146b7b8d8 = (HMODULE)Curl_load_library(pcVar3);
  if (((DAT_146b7b8d8 != (HMODULE)0x0) &&
      (pFVar2 = GetProcAddress(DAT_146b7b8d8,"InitSecurityInterfaceA"), pFVar2 != (FARPROC)0x0)) &&
     (DAT_146b7b8e0 = (*pFVar2)(), DAT_146b7b8e0 != 0)) {
    return 0;
  }
  return 2;
}



// FUNCTION 1436ab9c0 curlx_tvdiff body=50 status=ok
// SIG undefined curlx_tvdiff(void)

int curlx_tvdiff(undefined8 param_1,undefined8 param_2)

{
  return ((int)((ulonglong)param_1 >> 0x20) - (int)((ulonglong)param_2 >> 0x20)) / 1000 +
         ((int)param_1 - (int)param_2) * 1000;
}



// FUNCTION 1436aba00 FUN_1436aba00 body=80 status=ok
// SIG undefined FUN_1436aba00(void)

double FUN_1436aba00(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((ulonglong)param_1 >> 0x20);
  iVar2 = (int)((ulonglong)param_2 >> 0x20);
  if ((int)param_1 != (int)param_2) {
    return (double)(iVar1 - iVar2) / 1000000.0 + (double)((int)param_1 - (int)param_2);
  }
  return (double)(iVar1 - iVar2) / 1000000.0;
}



// FUNCTION 1436aba50 curlx_tvnow body=76 status=ok
// SIG undefined curlx_tvnow(void)

undefined8 curlx_tvnow(void)

{
  undefined1 auVar1 [16];
  ULONGLONG UVar2;
  int iVar3;
  longlong lVar4;
  
  UVar2 = GetTickCount64();
  auVar1._8_8_ = 0;
  auVar1._0_8_ = UVar2;
  lVar4 = SUB168(ZEXT816(0x624dd2f1a9fbe77) * auVar1,8);
  iVar3 = (int)((UVar2 - lVar4 >> 1) + lVar4 >> 9);
  return CONCAT44(((int)UVar2 + iVar3 * -1000) * 1000,iVar3);
}



// FUNCTION 1436abaa0 FUN_1436abaa0 body=12 status=ok
// SIG undefined FUN_1436abaa0(void)

void FUN_1436abaa0(longlong param_1)

{
  destroy_async_data(param_1 + 0x6e0);
  return;
}



// FUNCTION 1436abab0 FUN_1436abab0 body=439 status=ok
// SIG undefined FUN_1436abab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1436abab0(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  longlong local_98;
  ulonglong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  *param_4 = 0;
  iVar2 = Curl_inet_pton(2,param_2,local_a8);
  if (iVar2 < 1) {
    iVar2 = Curl_inet_pton(0x17,param_2,local_68);
    if (iVar2 < 1) {
      if (*(int *)(param_1 + 0x7f) == 1) {
        uVar6 = 2;
      }
      else {
        if (*(int *)(param_1 + 0x7f) == 2) {
          uVar6 = 0x17;
        }
        cVar1 = Curl_ipv6works();
        if (cVar1 == '\0') {
          uVar6 = 2;
        }
      }
      local_88 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 0;
      local_90 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      local_98 = (ulonglong)uVar6 << 0x20;
      curl_msnprintf(local_58,0xc,&DAT_145af963c,param_3);
      cVar1 = FUN_1436ac070(param_1,param_2,param_3,&local_98);
      if (cVar1 == '\0') {
        DVar3 = GetLastError();
        uVar5 = FUN_1436a7be0(param_1,DVar3);
        FUN_1436b58e0(*param_1,"init_resolve_thread() failed for %s; %s\n",param_2,uVar5);
        iVar2 = Curl_getaddrinfo_ex(param_2,local_58,&local_98,&local_a0);
        if (iVar2 != 0) {
          uVar4 = Ordinal_111();
          local_b8 = FUN_1436a7be0(param_1,uVar4);
          FUN_1436b58e0(*param_1,"getaddrinfo() failed for %s:%d; %s\n",param_2,param_3);
          local_a0 = 0;
        }
      }
      else {
        *param_4 = 1;
        local_a0 = 0;
      }
    }
    else {
      local_a0 = Curl_ip2addr(0x17,local_68,param_2,param_3);
    }
  }
  else {
    local_a0 = Curl_ip2addr(2,local_a8,param_2,param_3);
  }
  return local_a0;
}



// FUNCTION 1436abc70 FUN_1436abc70 body=285 status=ok
// SIG undefined FUN_1436abc70(void)

undefined4 FUN_1436abc70(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  lVar1 = param_1[0xe0];
  lVar2 = *param_1;
  *param_2 = 0;
  if (lVar1 == 0) {
    uVar3 = 6;
  }
  else {
    EnterCriticalSection(*(LPCRITICAL_SECTION *)(lVar1 + 0x10));
    iVar4 = *(int *)(lVar1 + 0x18);
    LeaveCriticalSection(*(LPCRITICAL_SECTION *)(lVar1 + 0x10));
    if (iVar4 == 0) {
      uVar5 = curlx_tvnow();
      iVar4 = curlx_tvdiff(uVar5,*(undefined8 *)(lVar2 + 0x738));
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      if (*(int *)(lVar1 + 8) == 0) {
        *(undefined4 *)(lVar1 + 8) = 1;
      }
      else if (*(int *)(lVar1 + 0xc) <= iVar4) {
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) * 2;
      }
      if (0xfa < *(uint *)(lVar1 + 8)) {
        *(undefined4 *)(lVar1 + 8) = 0xfa;
      }
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 8) + iVar4;
      FUN_1436a4500(*param_1);
    }
    else {
      lVar1 = param_1[0xe0];
      FUN_1436ba000(param_1,*(undefined4 *)(lVar1 + 0x2c),*(undefined8 *)(lVar1 + 0x30));
      *(undefined8 *)(lVar1 + 0x30) = 0;
      if (param_1[0xde] == 0) {
        uVar3 = FUN_1436ac260(param_1);
        destroy_async_data(param_1 + 0xdc);
        return uVar3;
      }
      destroy_async_data(param_1 + 0xdc);
      *param_2 = param_1[0xde];
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1436abd90 FUN_1436abd90 body=212 status=ok
// SIG undefined FUN_1436abd90(void)

int FUN_1436abd90(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  
  iVar4 = 0;
  iVar3 = Curl_thread_join(param_1[0xe0]);
  if (iVar3 != 0) {
    lVar2 = param_1[0xe0];
    iVar4 = FUN_1436ba000(param_1,*(undefined4 *)(lVar2 + 0x2c),*(undefined8 *)(lVar2 + 0x30));
    *(undefined8 *)(lVar2 + 0x30) = 0;
  }
  *(undefined1 *)(param_1 + 0xdf) = 1;
  if (param_2 != (undefined8 *)0x0) {
    *param_2 = param_1[0xde];
  }
  if (param_1[0xde] == 0) {
    cVar1 = *(char *)((longlong)param_1 + 0x3be);
    pcVar5 = "proxy";
    if (cVar1 == '\0') {
      pcVar5 = "host";
    }
    FUN_1436b5820(*param_1,"Could not resolve %s: %s",pcVar5,param_1[0xdc]);
    iVar4 = 6 - (uint)(cVar1 != '\0');
  }
  destroy_async_data(param_1 + 0xdc);
  if (param_1[0xde] == 0) {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  }
  return iVar4;
}



// FUNCTION 1436abe70 FUN_1436abe70 body=6 status=ok
// SIG undefined FUN_1436abe70(void)

undefined8 FUN_1436abe70(void)

{
  return 4;
}



// FUNCTION 1436abe80 destroy_async_data body=209 status=ok
// SIG undefined destroy_async_data(void)

void destroy_async_data(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)param_1[4];
  if (plVar1 != (longlong *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)plVar1[2]);
    lVar2 = plVar1[3];
    *(undefined4 *)(plVar1 + 3) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)plVar1[2]);
    if ((int)lVar2 == 0) {
      Curl_thread_destroy((HANDLE)*plVar1);
    }
    else {
      if (*plVar1 != 0) {
        Curl_thread_join(plVar1);
      }
      if ((LPCRITICAL_SECTION)plVar1[2] != (LPCRITICAL_SECTION)0x0) {
        DeleteCriticalSection((LPCRITICAL_SECTION)plVar1[2]);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar1[2]);
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar1[4]);
      if (plVar1[6] != 0) {
        Curl_freeaddrinfo();
      }
      _guard_xfg_dispatch_icall_nop(plVar1 + 2,0,0x60);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[4]);
    }
  }
  param_1[4] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 1436abf60 getaddrinfo_thread body=272 status=ok
// SIG undefined getaddrinfo_thread(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 getaddrinfo_thread(undefined8 *param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = param_1[0xb];
  curl_msnprintf(local_28,0xc,&DAT_145af963c,*(undefined4 *)(param_1 + 3));
  iVar2 = Curl_getaddrinfo_ex(param_1[2],local_28,param_1 + 5,param_1 + 4);
  if (iVar2 != 0) {
    iVar3 = Ordinal_111();
    if (iVar3 != 0) {
      iVar2 = Ordinal_111();
    }
    if (iVar2 == 0) {
      iVar2 = 8;
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar2;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)*param_1);
  if (*(int *)(param_1 + 1) == 0) {
    *(undefined4 *)(param_1 + 1) = 1;
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
  }
  else {
    LeaveCriticalSection((LPCRITICAL_SECTION)*param_1);
    if ((LPCRITICAL_SECTION)*param_1 != (LPCRITICAL_SECTION)0x0) {
      DeleteCriticalSection((LPCRITICAL_SECTION)*param_1);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[2]);
    if (param_1[4] != 0) {
      Curl_freeaddrinfo();
    }
    _guard_xfg_dispatch_icall_nop(param_1,0,0x60);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(uVar1);
  }
  return 0;
}



// FUNCTION 1436ac070 FUN_1436ac070 body=240 status=ok
// SIG undefined FUN_1436ac070(void)

undefined8 FUN_1436ac070(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  DWORD *pDVar4;
  DWORD dwErrCode;
  
  plVar2 = (longlong *)(*(code *)PTR_calloc_1467dcc78)(1);
  *(longlong **)(param_1 + 0x700) = plVar2;
  dwErrCode = 8;
  if (plVar2 != (longlong *)0x0) {
    *(undefined4 *)(param_1 + 0x6e8) = param_3;
    *(undefined4 *)(param_1 + 0x6fc) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
    *(undefined1 *)(param_1 + 0x6f8) = 0;
    *plVar2 = 0;
    iVar1 = init_thread_sync_data(plVar2,param_2,param_3,param_4);
    if (iVar1 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x6e0));
      lVar3 = (*(code *)PTR__strdup_1467dcc70)(param_2);
      *(longlong *)(param_1 + 0x6e0) = lVar3;
      if (lVar3 != 0) {
        lVar3 = Curl_thread_create(getaddrinfo_thread,plVar2 + 2);
        *plVar2 = lVar3;
        if (lVar3 != 0) {
          return 1;
        }
        pDVar4 = (DWORD *)_errno();
        dwErrCode = *pDVar4;
      }
    }
  }
  destroy_async_data(param_1 + 0x6e0);
  SetLastError(dwErrCode);
  return 0;
}



// FUNCTION 1436ac160 init_thread_sync_data body=243 status=ok
// SIG undefined init_thread_sync_data(void)

undefined8
init_thread_sync_data(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar5;
  
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x10),0,0x60);
  *(longlong *)(param_1 + 0x68) = param_1;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  uVar4 = param_4[1];
  *(undefined8 *)(param_1 + 0x38) = *param_4;
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x14);
  uVar2 = *(undefined4 *)(param_4 + 3);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x1c);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_4 + 2);
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  *(undefined4 *)(param_1 + 0x50) = uVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  uVar1 = *(undefined4 *)((longlong)param_4 + 0x24);
  uVar2 = *(undefined4 *)(param_4 + 5);
  uVar3 = *(undefined4 *)((longlong)param_4 + 0x2c);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(param_1 + 0x5c) = uVar1;
  *(undefined4 *)(param_1 + 0x60) = uVar2;
  *(undefined4 *)(param_1 + 100) = uVar3;
  lpCriticalSection =
       (LPCRITICAL_SECTION)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x28);
  *(LPCRITICAL_SECTION *)(param_1 + 0x10) = lpCriticalSection;
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionEx(lpCriticalSection,0,1);
    *(undefined4 *)(param_1 + 0x2c) = 0;
    lVar5 = (*(code *)PTR__strdup_1467dcc70)(param_2);
    *(longlong *)(param_1 + 0x20) = lVar5;
    if (lVar5 != 0) {
      return 1;
    }
  }
  if (*(LPCRITICAL_SECTION *)(param_1 + 0x10) != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection(*(LPCRITICAL_SECTION *)(param_1 + 0x10));
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x30) != 0) {
    Curl_freeaddrinfo();
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x10),0,0x60);
  return 0;
}



// FUNCTION 1436ac260 FUN_1436ac260 body=71 status=ok
// SIG undefined FUN_1436ac260(void)

int FUN_1436ac260(undefined8 *param_1)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *(char *)((longlong)param_1 + 0x3be);
  pcVar2 = "proxy";
  if (cVar1 == '\0') {
    pcVar2 = "host";
  }
  FUN_1436b5820(*param_1,"Could not resolve %s: %s",pcVar2,param_1[0xdc]);
  return 6 - (uint)(cVar1 != '\0');
}



// FUNCTION 1436ac2b0 Curl_cache_addr body=271 status=ok
// SIG undefined Curl_cache_addr(void)

longlong Curl_cache_addr(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  longlong lVar5;
  byte *pbVar6;
  longlong lVar7;
  
  pbVar3 = (byte *)curl_maprintf("%s:%d",param_3,param_4);
  if (pbVar3 == (byte *)0x0) {
    return 0;
  }
  bVar1 = *pbVar3;
  pbVar6 = pbVar3;
  while ((bVar1 != 0 && (*pbVar6 != 0x3a))) {
    iVar2 = tolower((uint)*pbVar6);
    *pbVar6 = (byte)iVar2;
    pbVar6 = pbVar6 + 1;
    bVar1 = *pbVar6;
  }
  lVar5 = -1;
  do {
    lVar7 = lVar5;
    lVar5 = lVar7 + 1;
  } while (pbVar3[lVar7 + 1] != 0);
  puVar4 = (undefined8 *)(*(code *)PTR_calloc_1467dcc78)(1);
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar4 + 2) = 1;
    *puVar4 = param_2;
    _time64(puVar4 + 1);
    if (puVar4[1] == 0) {
      puVar4[1] = 1;
    }
    lVar5 = FUN_1436b7af0(*(undefined8 *)(param_1 + 0x68),pbVar3,lVar7 + 2,puVar4);
    if (lVar5 != 0) {
      *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + 1;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar3);
      return lVar5;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar4);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar3);
  return 0;
}



// FUNCTION 1436ac3c0 Curl_fetch_addr body=131 status=ok
// SIG undefined Curl_fetch_addr(void)

longlong Curl_fetch_addr(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x88) != 0) {
    Curl_share_lock(lVar1,3,2);
  }
  lVar2 = FUN_1436acb90(param_1,param_2,param_3);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + 1;
  }
  if (*(longlong *)(lVar1 + 0x88) != 0) {
    Curl_share_unlock(lVar1,3);
  }
  return lVar2;
}



// FUNCTION 1436ac450 Curl_global_host_cache_dtor body=40 status=ok
// SIG undefined Curl_global_host_cache_dtor(void)

void Curl_global_host_cache_dtor(void)

{
  if (DAT_146b7b918 != 0) {
    Curl_hash_destroy(&DAT_146b7b8e8);
    DAT_146b7b918 = 0;
  }
  return;
}



// FUNCTION 1436ac480 Curl_global_host_cache_init body=108 status=ok
// SIG undefined Curl_global_host_cache_init(void)

undefined * Curl_global_host_cache_init(void)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if ((DAT_146b7b918 == 0) &&
     (iVar1 = Curl_hash_init(&DAT_146b7b8e8,7,&LAB_1436b80d0,Curl_str_key_compare,freednsentry),
     iVar1 == 0)) {
    DAT_146b7b918 = 1;
  }
  puVar2 = &DAT_146b7b8e8;
  if (iVar1 != 0) {
    puVar2 = (undefined *)0x0;
  }
  return puVar2;
}



// FUNCTION 1436ac4f0 Curl_hostcache_clean body=92 status=ok
// SIG undefined Curl_hostcache_clean(void)

void Curl_hostcache_clean(longlong param_1,undefined8 param_2)

{
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    Curl_share_lock(param_1,3,2);
  }
  Curl_hash_clean(param_2);
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    Curl_share_unlock(param_1,3);
  }
  return;
}



// FUNCTION 1436ac550 FUN_1436ac550 body=158 status=ok
// SIG undefined FUN_1436ac550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436ac550(longlong param_1)

{
  undefined1 auStack_48 [32];
  __time64_t local_28;
  undefined4 local_20 [2];
  __time64_t local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if ((*(int *)(param_1 + 0x3fc) != -1) && (*(longlong *)(param_1 + 0x68) != 0)) {
    if (*(longlong *)(param_1 + 0x88) != 0) {
      Curl_share_lock(param_1,3,2);
    }
    _time64(&local_28);
    local_20[0] = *(undefined4 *)(param_1 + 0x3fc);
    local_18 = local_28;
    Curl_hash_clean_with_criterium(*(undefined8 *)(param_1 + 0x68),local_20,&LAB_1436accd0);
    if (*(longlong *)(param_1 + 0x88) != 0) {
      Curl_share_unlock(param_1,3);
    }
  }
  return;
}



// FUNCTION 1436ac5f0 FUN_1436ac5f0 body=759 status=ok
// SIG undefined FUN_1436ac5f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436ac5f0(longlong param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  char *pcVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  longlong lVar7;
  byte *pbVar8;
  longlong lVar9;
  undefined1 auStack_268 [32];
  undefined1 *local_248;
  undefined4 local_238 [4];
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  puVar2 = *(undefined8 **)(param_1 + 0x698);
  do {
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x698) = 0;
      return 0;
    }
    pcVar3 = (char *)*puVar2;
    if (pcVar3 != (char *)0x0) {
      if (*pcVar3 == '-') {
        iVar4 = FUN_143662c40(pcVar3 + 1,"%255[^:]:%d",local_228,local_238);
        if (iVar4 == 2) {
          pbVar5 = (byte *)curl_maprintf("%s:%d",local_228,local_238[0]);
          if (pbVar5 == (byte *)0x0) {
            return 0x1b;
          }
          bVar1 = *pbVar5;
          pbVar8 = pbVar5;
          while ((bVar1 != 0 && (*pbVar8 != 0x3a))) {
            iVar4 = tolower((uint)*pbVar8);
            *pbVar8 = (byte)iVar4;
            pbVar8 = pbVar8 + 1;
            bVar1 = *pbVar8;
          }
          lVar6 = -1;
          do {
            lVar7 = lVar6;
            lVar6 = lVar7 + 1;
          } while (pbVar5[lVar7 + 1] != 0);
          if (*(longlong *)(param_1 + 0x88) != 0) {
            Curl_share_lock(param_1,3,2);
          }
          FUN_1436b7d50(*(undefined8 *)(param_1 + 0x68),pbVar5,lVar7 + 2);
          if (*(longlong *)(param_1 + 0x88) != 0) {
            Curl_share_unlock(param_1,3);
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
        }
        else {
          FUN_1436b58e0(param_1,"Couldn\'t parse CURLOPT_RESOLVE removal entry \'%s\'!\n",*puVar2);
        }
      }
      else {
        local_248 = local_128;
        iVar4 = FUN_143662c40(pcVar3,"%255[^:]:%d:%255s",local_228,local_238);
        if (iVar4 == 3) {
          lVar6 = Curl_str2addr(local_128,local_238[0]);
          if (lVar6 == 0) {
            FUN_1436b58e0(param_1,"Address in \'%s\' found illegal!\n",*puVar2);
          }
          else {
            pbVar5 = (byte *)curl_maprintf("%s:%d",local_228,local_238[0]);
            if (pbVar5 == (byte *)0x0) {
LAB_1436ac8d8:
              Curl_freeaddrinfo(lVar6);
              return 0x1b;
            }
            bVar1 = *pbVar5;
            pbVar8 = pbVar5;
            while ((bVar1 != 0 && (*pbVar8 != 0x3a))) {
              iVar4 = tolower((uint)*pbVar8);
              *pbVar8 = (byte)iVar4;
              pbVar8 = pbVar8 + 1;
              bVar1 = *pbVar8;
            }
            lVar7 = -1;
            do {
              lVar9 = lVar7;
              lVar7 = lVar9 + 1;
            } while (pbVar5[lVar9 + 1] != 0);
            if (*(longlong *)(param_1 + 0x88) != 0) {
              Curl_share_lock(param_1,3,2);
            }
            lVar7 = FUN_1436b8020(*(undefined8 *)(param_1 + 0x68),pbVar5,lVar9 + 2);
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
            if (lVar7 == 0) {
              lVar7 = Curl_cache_addr(param_1,lVar6,local_228,local_238[0]);
              if (lVar7 != 0) {
                *(int *)(lVar7 + 0x10) = *(int *)(lVar7 + 0x10) + -1;
                *(undefined8 *)(lVar7 + 8) = 0;
              }
            }
            else {
              Curl_freeaddrinfo(lVar6);
            }
            if (*(longlong *)(param_1 + 0x88) != 0) {
              Curl_share_unlock(param_1,3);
            }
            if (lVar7 == 0) goto LAB_1436ac8d8;
            local_248 = local_128;
            FUN_1436b58e0(param_1,"Added %s:%d:%s to DNS cache\n",local_228,local_238[0]);
          }
        }
        else {
          FUN_1436b58e0(param_1,"Couldn\'t parse CURLOPT_RESOLVE entry \'%s\'!\n",*puVar2);
        }
      }
    }
    puVar2 = (undefined8 *)puVar2[1];
  } while( true );
}



// FUNCTION 1436ac8f0 Curl_mk_dnscache body=45 status=ok
// SIG undefined Curl_mk_dnscache(void)

void Curl_mk_dnscache(undefined8 param_1)

{
  Curl_hash_init(param_1,7,&LAB_1436b80d0,Curl_str_key_compare,freednsentry);
  return;
}



// FUNCTION 1436ac920 Curl_num_addresses body=28 status=ok
// SIG undefined Curl_num_addresses(void)

int Curl_num_addresses(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = *(longlong *)(param_1 + 0x28)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}



// FUNCTION 1436ac940 Curl_printable_address body=60 status=ok
// SIG undefined Curl_printable_address(void)

undefined8 Curl_printable_address(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 4) == 2) {
    uVar1 = FUN_1436c1610(2,*(longlong *)(param_1 + 0x20) + 4,param_2,param_3);
    return uVar1;
  }
  if (*(int *)(param_1 + 4) != 0x17) {
    return 0;
  }
  uVar1 = FUN_1436c1610(0x17,*(longlong *)(param_1 + 0x20) + 8,param_2,param_3);
  return uVar1;
}



// FUNCTION 1436ac980 Curl_resolv body=377 status=ok
// SIG undefined Curl_resolv(void)

ulonglong Curl_resolv(longlong *param_1,undefined8 param_2,undefined4 param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  int local_res8 [2];
  longlong local_res20;
  
  lVar1 = *param_1;
  uVar5 = 0xffffffff;
  local_res20 = 0;
  *param_4 = 0;
  if (*(longlong *)(lVar1 + 0x88) != 0) {
    Curl_share_lock(lVar1,3,2);
  }
  local_res20 = FUN_1436acb90(param_1,param_2,param_3);
  if (local_res20 != 0) {
    FUN_1436b58e0(lVar1,"Hostname %s was found in DNS cache\n",param_2);
    *(int *)(local_res20 + 0x10) = *(int *)(local_res20 + 0x10) + 1;
    uVar5 = 0;
  }
  if (*(longlong *)(lVar1 + 0x88) != 0) {
    Curl_share_unlock(lVar1,3);
  }
  if (local_res20 == 0) {
    cVar2 = FUN_1436acd60(param_1);
    if (cVar2 == '\0') {
      return 0xffffffff;
    }
    lVar4 = Curl_getaddrinfo(param_1,param_2,param_3,local_res8);
    if (lVar4 == 0) {
      if (local_res8[0] != 0) {
        iVar3 = FUN_1436abc70(param_1,&local_res20);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        uVar5 = (ulonglong)(local_res20 == 0);
      }
    }
    else {
      if (*(longlong *)(lVar1 + 0x88) != 0) {
        Curl_share_lock(lVar1,3,2);
      }
      local_res20 = Curl_cache_addr(lVar1,lVar4,param_2,param_3);
      if (*(longlong *)(lVar1 + 0x88) != 0) {
        Curl_share_unlock(lVar1,3);
      }
      if (local_res20 == 0) {
        Curl_freeaddrinfo(lVar4);
      }
      else {
        uVar5 = 0;
      }
    }
  }
  *param_4 = local_res20;
  return uVar5;
}



// FUNCTION 1436acb00 Curl_resolv_timeout body=25 status=ok
// SIG undefined Curl_resolv_timeout(void)

undefined8 Curl_resolv_timeout(void)

{
  undefined8 uVar1;
  undefined8 *in_R9;
  int in_stack_00000028;
  
  *in_R9 = 0;
  if (in_stack_00000028 < 0) {
    return 0xfffffffe;
  }
  uVar1 = Curl_resolv();
  return uVar1;
}



// FUNCTION 1436acb20 Curl_resolv_unlock body=107 status=ok
// SIG undefined Curl_resolv_unlock(void)

void Curl_resolv_unlock(longlong param_1,undefined8 *param_2)

{
  int *piVar1;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    Curl_share_lock(param_1,3,2);
  }
  piVar1 = (int *)(param_2 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Curl_freeaddrinfo(*param_2);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
  }
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x88) != 0)) {
    Curl_share_unlock(param_1,3);
  }
  return;
}



// FUNCTION 1436acb90 FUN_1436acb90 body=257 status=ok
// SIG undefined FUN_1436acb90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1436acb90(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined1 auStack_58 [32];
  int local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  pbVar4 = (byte *)curl_maprintf("%s:%d");
  lVar6 = 0;
  if (pbVar4 != (byte *)0x0) {
    bVar1 = *pbVar4;
    pbVar7 = pbVar4;
    while ((bVar1 != 0 && (*pbVar7 != 0x3a))) {
      iVar3 = tolower((uint)*pbVar7);
      *pbVar7 = (byte)iVar3;
      pbVar7 = pbVar7 + 1;
      bVar1 = *pbVar7;
    }
    lVar6 = -1;
    do {
      lVar5 = lVar6;
      lVar6 = lVar5 + 1;
    } while (pbVar4[lVar5 + 1] != 0);
    lVar6 = FUN_1436b8020(*(undefined8 *)(lVar2 + 0x68),pbVar4,lVar5 + 2);
    if ((lVar6 != 0) && (*(int *)(lVar2 + 0x3fc) != -1)) {
      _time64(&local_30);
      local_38 = *(int *)(lVar2 + 0x3fc);
      if ((*(longlong *)(lVar6 + 8) != 0) &&
         ((longlong)local_38 <= local_30 - *(longlong *)(lVar6 + 8))) {
        FUN_1436b58e0(lVar2,"Hostname in DNS cache was stale, zapped\n");
        lVar6 = 0;
        FUN_1436b7d50(*(undefined8 *)(lVar2 + 0x68),pbVar4,lVar5 + 2);
      }
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar4);
  }
  return lVar6;
}



// FUNCTION 1436acca0 freednsentry body=44 status=ok
// SIG undefined freednsentry(void)

void freednsentry(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 2);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    Curl_freeaddrinfo(*param_1);
                    /* WARNING: Could not recover jumptable at 0x0001436accbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    return;
  }
  return;
}



// FUNCTION 1436acd00 Curl_ipv6works body=96 status=ok
// SIG undefined Curl_ipv6works(void)

bool Curl_ipv6works(void)

{
  longlong lVar1;
  
  if (DAT_1467dccf0 == -1) {
    lVar1 = Ordinal_23(0x17,2,0);
    if (lVar1 == -1) {
      DAT_1467dccf0 = 0;
      return false;
    }
    DAT_1467dccf0 = 1;
    FUN_1436b61e0(0,lVar1);
  }
  return 0 < DAT_1467dccf0;
}



// FUNCTION 1436acd60 FUN_1436acd60 body=16 status=ok
// SIG undefined FUN_1436acd60(void)

bool FUN_1436acd60(longlong param_1)

{
  longlong lVar1;
  
  if (*(int *)(param_1 + 0x3f8) != 2) {
    return true;
  }
  if (DAT_1467dccf0 == -1) {
    lVar1 = Ordinal_23(0x17,2,0);
    if (lVar1 == -1) {
      DAT_1467dccf0 = 0;
      return false;
    }
    DAT_1467dccf0 = 1;
    FUN_1436b61e0(0,lVar1);
  }
  return 0 < DAT_1467dccf0;
}



// FUNCTION 1436acd70 FUN_1436acd70 body=342 status=ok
// SIG undefined FUN_1436acd70(void)

undefined8 FUN_1436acd70(undefined4 *param_1,undefined4 *param_2)

{
  longlong lVar1;
  
  *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(param_1 + 0x1a);
  *(undefined1 *)((longlong)param_2 + 9) = *(undefined1 *)((longlong)param_1 + 9);
  *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_1 + 2);
  *param_2 = *param_1;
  if (*(longlong *)(param_1 + 6) == 0) {
    *(undefined8 *)(param_2 + 6) = 0;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 6) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 4) == 0) {
    *(undefined8 *)(param_2 + 4) = 0;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 4) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x12) == 0) {
    *(undefined8 *)(param_2 + 0x12) = 0;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 0x12) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(param_2 + 0x10) = 0;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 0x10) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0xe) == 0) {
    *(undefined8 *)(param_2 + 0xe) = 0;
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 0xe) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(longlong *)(param_1 + 0xc) != 0) {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)();
    *(longlong *)(param_2 + 0xc) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0x1a) = 0;
    return 1;
  }
  *(undefined8 *)(param_2 + 0xc) = 0;
  return 1;
}



// FUNCTION 1436aced0 FUN_1436aced0 body=110 status=ok
// SIG undefined FUN_1436aced0(void)

void FUN_1436aced0(longlong param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x40));
  *(undefined8 *)(param_1 + 0x40) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x38));
  *(undefined8 *)(param_1 + 0x38) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1436acf40 FUN_1436acf40 body=159 status=ok
// SIG undefined FUN_1436acf40(void)

uint FUN_1436acf40(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  uint local_res10 [2];
  undefined8 local_res18;
  
  local_res10[0] = 0;
  iVar1 = FUN_1436c1a40(local_res10,4);
  if (iVar1 != 0) {
    if (DAT_146b7b91c == '\0') {
      uVar2 = curlx_tvnow();
      local_res18 = uVar2;
      FUN_1436b58e0(param_1,"WARNING: Using weak random seed\n");
      DAT_146b7b91c = '\x01';
      DAT_146b7b920 = (DAT_146b7b920 + (int)uVar2 + local_res18._4_4_) * -0x7f82434b + -0x58fbd821;
    }
    DAT_146b7b920 = DAT_146b7b920 * 0x41c64e6d + 0x3039;
    return DAT_146b7b920 * 0x10000 | DAT_146b7b920 >> 0x10;
  }
  return local_res10[0];
}



// FUNCTION 1436acfe0 FUN_1436acfe0 body=499 status=ok
// SIG undefined FUN_1436acfe0(void)

undefined4 FUN_1436acfe0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  
  lVar1 = *param_1;
  plVar9 = *(longlong **)(lVar1 + 0x8810);
  iVar10 = (int)plVar9[4];
  lVar5 = (*(code *)PTR__strdup_1467dcc70)(param_1[0x17]);
  if (lVar5 == 0) {
    return 0x1b;
  }
  if (*(char *)((longlong)param_1 + 0x3bb) == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = (*(code *)PTR__strdup_1467dcc70)(param_1[0x1b]);
    if (lVar6 == 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
      return 0x1b;
    }
  }
  if (*(char *)((longlong)param_1 + 0x3bc) == '\0') {
    iVar12 = -1;
  }
  else {
    iVar12 = (int)param_1[0x22];
  }
  pbVar2 = *(byte **)(lVar1 + 0x88);
  if ((pbVar2 == (byte *)0x0) || (pbVar11 = pbVar2 + 0x68, (*pbVar2 & 0x10) == 0)) {
    pbVar11 = (byte *)(lVar1 + 0x8818);
  }
  uVar3 = *(ulonglong *)(lVar1 + 0x3d8);
  uVar8 = 1;
  bVar13 = uVar3 == 1;
  if (1 < uVar3) {
    piVar7 = (int *)(*(longlong *)(lVar1 + 0x8810) + 0xc0);
    do {
      if (*(longlong *)(piVar7 + -4) == 0) break;
      if (*piVar7 < iVar10) {
        plVar9 = (longlong *)(piVar7 + -8);
        iVar10 = *piVar7;
      }
      uVar8 = uVar8 + 1;
      piVar7 = piVar7 + 0x28;
    } while (uVar8 < uVar3);
    bVar13 = uVar8 == uVar3;
  }
  if (bVar13) {
    if (plVar9[2] != 0) {
      FUN_1436c1ac0();
      plVar9[2] = 0;
      *(int *)(plVar9 + 4) = 0;
      FUN_1436aced0(plVar9 + 6);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar9);
      *plVar9 = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar9[1]);
      plVar9[1] = 0;
    }
  }
  else {
    plVar9 = (longlong *)(uVar8 * 0xa0 + *(longlong *)(lVar1 + 0x8810));
  }
  plVar9[2] = param_2;
  plVar9[3] = param_3;
  *(int *)(plVar9 + 4) = *(int *)pbVar11;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar9);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar9[1]);
  *plVar9 = lVar5;
  plVar9[1] = lVar6;
  *(int *)(plVar9 + 5) = iVar12;
  *(int *)((longlong)plVar9 + 0x24) = *(int *)((longlong)param_1 + 0x10c);
  cVar4 = FUN_1436acd70(param_1 + 0x69,plVar9 + 6);
  if (cVar4 != '\0') {
    return 0;
  }
  plVar9[2] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
  return 0x1b;
}



// FUNCTION 1436ad1e0 GetMouseCursor body=6 status=ok
// SIG undefined GetMouseCursor(void)

undefined8 HInterpTrackKeypointProxy::GetMouseCursor(void)

{
  return 8;
}



// FUNCTION 1436ad1f0 CompressMemoryBound body=4 status=ok
// SIG undefined CompressMemoryBound(void)

undefined8 FGenericPlatformCompression::CompressMemoryBound(void)

{
  return 0xffffffff;
}



// FUNCTION 1436ad200 Curl_ssl_cleanup body=30 status=ok
// SIG undefined Curl_ssl_cleanup(void)

void Curl_ssl_cleanup(void)

{
  if (DAT_146b7b91d != '\0') {
    Curl_schannel_cleanup();
    DAT_146b7b91d = '\0';
  }
  return;
}



// FUNCTION 1436ad220 thunk_FUN_1436c19a0 body=5 status=ok
// SIG undefined thunk_FUN_1436c19a0(void)

longlong thunk_FUN_1436c19a0(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = ((longlong)param_2 + 5) * 0x78;
  if (*(char *)(lVar2 + param_1) == '\0') {
    return lVar2;
  }
  lVar2 = (longlong)param_2;
  iVar1 = FUN_1436c1af0(param_1,param_2);
  if (iVar1 != 0) {
    return 0x50;
  }
  *(undefined1 *)((lVar2 + 5) * 0x78 + param_1) = 0;
  *(undefined4 *)(lVar2 * 0x78 + 0x25c + param_1) = 0;
  *(code **)(param_1 + 0x1f8 + lVar2 * 8) = FUN_1436b5b40;
  *(code **)(param_1 + 0x208 + lVar2 * 8) = FUN_1436b5c00;
  return 0;
}



// FUNCTION 1436ad230 FUN_1436ad230 body=219 status=ok
// SIG undefined FUN_1436ad230(void)

void FUN_1436ad230(longlong param_1)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if ((*(longlong *)(param_1 + 0x8810) != 0) &&
     ((*(byte **)(param_1 + 0x88) == (byte *)0x0 || ((**(byte **)(param_1 + 0x88) & 0x10) == 0)))) {
    uVar2 = 0;
    uVar3 = uVar2;
    if (*(longlong *)(param_1 + 0x3d8) != 0) {
      do {
        lVar1 = *(longlong *)(param_1 + 0x8810);
        if (*(longlong *)(uVar3 + 0x10 + lVar1) != 0) {
          FUN_1436c1ac0();
          *(undefined8 *)(uVar3 + 0x10 + lVar1) = 0;
          *(undefined4 *)(uVar3 + 0x20 + lVar1) = 0;
          FUN_1436aced0(lVar1 + 0x30 + uVar3);
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(uVar3 + lVar1));
          *(undefined8 *)(uVar3 + lVar1) = 0;
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(uVar3 + 8 + lVar1))
          ;
          *(undefined8 *)(uVar3 + 8 + lVar1) = 0;
        }
        uVar2 = uVar2 + 1;
        uVar3 = uVar3 + 0xa0;
      } while (uVar2 < *(ulonglong *)(param_1 + 0x3d8));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8810));
    *(undefined8 *)(param_1 + 0x8810) = 0;
  }
  return;
}



// FUNCTION 1436ad310 FUN_1436ad310 body=211 status=ok
// SIG undefined FUN_1436ad310(void)

undefined8 FUN_1436ad310(int *param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  bool bVar4;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  if ((char)param_1[2] != (char)param_2[2]) {
    return 0;
  }
  if (*(char *)((longlong)param_1 + 9) != *(char *)((longlong)param_2 + 9)) {
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 4);
  if (*(longlong *)(param_1 + 4) == 0) {
    if (lVar1 == 0) {
      bVar4 = true;
      goto LAB_1436ad370;
    }
  }
  else if (lVar1 != 0) {
    iVar3 = Curl_strcasecompare(*(longlong *)(param_1 + 4),lVar1);
    bVar4 = iVar3 != 0;
    goto LAB_1436ad370;
  }
  bVar4 = false;
LAB_1436ad370:
  if ((((bVar4) &&
       (cVar2 = FUN_1436adaa0(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_2 + 6)),
       cVar2 != '\0')) &&
      (cVar2 = FUN_1436adaa0(*(undefined8 *)(param_1 + 0xc),*(undefined8 *)(param_2 + 0xc)),
      cVar2 != '\0')) &&
     (((cVar2 = FUN_1436adaa0(*(undefined8 *)(param_1 + 0xe),*(undefined8 *)(param_2 + 0xe)),
       cVar2 != '\0' &&
       (cVar2 = FUN_1436adaa0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 0x10)),
       cVar2 != '\0')) &&
      (cVar2 = FUN_1436adaa0(*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_2 + 0x12)),
      cVar2 != '\0')))) {
    return 1;
  }
  return 0;
}



// FUNCTION 1436ad3f0 FUN_1436ad3f0 body=120 status=ok
// SIG undefined FUN_1436ad3f0(void)

int FUN_1436ad3f0(longlong *param_1,int param_2)

{
  int iVar1;
  
  if (6 < *(uint *)(*param_1 + 0x388)) {
    FUN_1436b5820(*param_1,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    return 0x23;
  }
  *(undefined1 *)(param_1 + ((longlong)param_2 + 5) * 0xf) = 1;
  *(undefined4 *)((longlong)param_2 * 0x78 + 0x25c + (longlong)param_1) = 1;
  iVar1 = Curl_ossl_connect(param_1,param_2);
  if (iVar1 == 0) {
    FUN_1436bee30(*param_1,5);
  }
  return iVar1;
}



// FUNCTION 1436ad470 FUN_1436ad470 body=123 status=ok
// SIG undefined FUN_1436ad470(void)

int FUN_1436ad470(longlong *param_1,int param_2,char *param_3)

{
  int iVar1;
  
  if (6 < *(uint *)(*param_1 + 0x388)) {
    FUN_1436b5820(*param_1,"Unrecognized parameter value passed via CURLOPT_SSLVERSION");
    return 0x23;
  }
  *(undefined1 *)(param_1 + ((longlong)param_2 + 5) * 0xf) = 1;
  iVar1 = Curl_ossl_connect_nonblocking(param_1);
  if ((iVar1 == 0) && (*param_3 != '\0')) {
    FUN_1436bee30(*param_1,5);
  }
  return iVar1;
}



// FUNCTION 1436ad4f0 thunk_FUN_1436c19f0 body=5 status=ok
// SIG undefined thunk_FUN_1436c19f0(void)

ulonglong thunk_FUN_1436c19f0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = ((longlong)param_2 + 5U) * 0x78;
  if (*(char *)(lVar1 + param_1) == '\0') {
    return (longlong)param_2 + 5U & 0xffffffffffffff00;
  }
  if ((*(longlong *)(lVar1 + 0x48 + param_1) == 0) && (*(longlong *)(lVar1 + 0x50 + param_1) == 0))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 1436ad500 FUN_1436ad500 body=135 status=ok
// SIG undefined FUN_1436ad500(void)

void FUN_1436ad500(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  
  uVar2 = 0;
  uVar1 = *(ulonglong *)(*param_1 + 0x3d8);
  if (uVar1 != 0) {
    puVar3 = *(undefined8 **)(*param_1 + 0x8810);
    while (puVar3[2] != param_2) {
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 0x14;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    if (puVar3[2] != 0) {
      FUN_1436c1ac0();
      puVar3[2] = 0;
      *(undefined4 *)(puVar3 + 4) = 0;
      FUN_1436aced0(puVar3 + 6);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*puVar3);
      *puVar3 = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3[1]);
      puVar3[1] = 0;
    }
  }
  return;
}



// FUNCTION 1436ad590 FUN_1436ad590 body=137 status=ok
// SIG undefined FUN_1436ad590(void)

void FUN_1436ad590(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (*(int *)(param_1 + 0x8b18) != 0) {
    uVar1 = 0;
    uVar3 = uVar1;
    if (0 < *(int *)(param_1 + 0x8b18)) {
      do {
        curl_slist_free_all(*(undefined8 *)(*(longlong *)(param_1 + 0x8b20) + uVar3));
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
        *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0x8b20)) = 0;
        uVar3 = uVar3 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x8b18));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8b20));
    *(undefined8 *)(param_1 + 0x8b20) = 0;
    *(undefined4 *)(param_1 + 0x8b18) = 0;
  }
  return;
}



// FUNCTION 1436ad620 FUN_1436ad620 body=378 status=ok
// SIG undefined FUN_1436ad620(void)

undefined8 FUN_1436ad620(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte *pbVar8;
  
  lVar2 = *param_1;
  uVar6 = 0;
  *param_2 = 0;
  if ((char)param_1[0x76] == '\0') {
    return 1;
  }
  pbVar3 = *(byte **)(lVar2 + 0x88);
  if ((pbVar3 == (byte *)0x0) || (pbVar8 = pbVar3 + 0x68, (*pbVar3 & 0x10) == 0)) {
    pbVar8 = (byte *)(lVar2 + 0x8818);
  }
  uVar7 = uVar6;
  if (*(longlong *)(lVar2 + 0x3d8) != 0) {
    do {
      puVar1 = (undefined8 *)(uVar7 + *(longlong *)(lVar2 + 0x8810));
      if ((*(longlong *)(uVar7 + 0x10 + *(longlong *)(lVar2 + 0x8810)) != 0) &&
         (iVar5 = Curl_strcasecompare(param_1[0x17],*puVar1), iVar5 != 0)) {
        if (*(char *)((longlong)param_1 + 0x3bb) == '\0') {
          if (puVar1[1] == 0) {
LAB_1436ad6f9:
            if (*(char *)((longlong)param_1 + 0x3bc) == '\0') {
              if (*(int *)(puVar1 + 5) == -1) {
LAB_1436ad71e:
                if ((*(int *)((longlong)param_1 + 0x10c) == *(int *)((longlong)puVar1 + 0x24)) &&
                   (cVar4 = FUN_1436ad310(param_1 + 0x69,puVar1 + 6), cVar4 != '\0')) {
                  *(int *)pbVar8 = *(int *)pbVar8 + 1;
                  *(int *)(puVar1 + 4) = *(int *)pbVar8;
                  *param_2 = puVar1[2];
                  if (param_3 != (undefined8 *)0x0) {
                    *param_3 = puVar1[3];
                  }
                  return 0;
                }
              }
            }
            else if ((*(int *)(puVar1 + 5) != -1) && ((int)param_1[0x22] == *(int *)(puVar1 + 5)))
            goto LAB_1436ad71e;
          }
        }
        else if ((puVar1[1] != 0) && (iVar5 = Curl_strcasecompare(param_1[0x1b]), iVar5 != 0))
        goto LAB_1436ad6f9;
      }
      uVar6 = uVar6 + 1;
      uVar7 = uVar7 + 0xa0;
    } while (uVar6 < *(ulonglong *)(lVar2 + 0x3d8));
  }
  return 1;
}



// FUNCTION 1436ad7a0 Curl_ssl_init body=27 status=ok
// SIG undefined Curl_ssl_init(void)

undefined8 Curl_ssl_init(void)

{
  undefined8 uVar1;
  
  if (DAT_146b7b91d != '\0') {
    return 1;
  }
  DAT_146b7b91d = 1;
  uVar1 = FUN_1436c1a20();
  return uVar1;
}



// FUNCTION 1436ad7c0 FUN_1436ad7c0 body=82 status=ok
// SIG undefined FUN_1436ad7c0(void)

undefined8 FUN_1436ad7c0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_1436ad590();
  lVar1 = (*(code *)PTR_calloc_1467dcc78)((longlong)param_2,8);
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(longlong *)(param_1 + 0x8b20) = lVar1;
  *(int *)(param_1 + 0x8b18) = param_2;
  return 0;
}



// FUNCTION 1436ad820 FUN_1436ad820 body=98 status=ok
// SIG undefined FUN_1436ad820(void)

undefined8 FUN_1436ad820(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x8810) == 0) {
    lVar1 = (*(code *)PTR_calloc_1467dcc78)(param_2,0xa0);
    if (lVar1 == 0) {
      return 0x1b;
    }
    *(undefined8 *)(param_1 + 0x3d8) = param_2;
    *(longlong *)(param_1 + 0x8810) = lVar1;
    *(undefined4 *)(param_1 + 0x8818) = 1;
  }
  return 0;
}



// FUNCTION 1436ad890 Curl_ssl_push_certinfo body=41 status=ok
// SIG undefined Curl_ssl_push_certinfo(void)

void Curl_ssl_push_certinfo(void)

{
  longlong lVar1;
  longlong in_R9;
  
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(in_R9 + lVar1) != '\0');
  FUN_1436ad8c0();
  return;
}



// FUNCTION 1436ad8c0 FUN_1436ad8c0 body=252 status=ok
// SIG undefined FUN_1436ad8c0(void)

undefined4 FUN_1436ad8c0(longlong param_1,int param_2,longlong param_3,void *param_4,size_t param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_3 + lVar4) != '\0');
  lVar2 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar4 + param_5 + 2);
  if (lVar2 == 0) {
    uVar1 = 0x1b;
  }
  else {
    curl_msnprintf(lVar2,lVar4 + param_5 + 2,&DAT_145b69ac4,param_3);
    _guard_xfg_dispatch_icall_nop((void *)(lVar4 + lVar2 + 1),param_4,param_5);
    *(undefined1 *)(lVar4 + lVar2 + 1 + param_5) = 0;
    lVar4 = (longlong)param_2 * 8;
    lVar3 = Curl_slist_append_nodup(*(undefined8 *)(*(longlong *)(param_1 + 0x8b20) + lVar4),lVar2);
    if (lVar3 == 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
      curl_slist_free_all(*(undefined8 *)(*(longlong *)(param_1 + 0x8b20) + lVar4));
      uVar1 = 0x1b;
    }
    *(longlong *)(lVar4 + *(longlong *)(param_1 + 0x8b20)) = lVar3;
  }
  return uVar1;
}



// FUNCTION 1436ad9c0 FUN_1436ad9c0 body=35 status=ok
// SIG undefined FUN_1436ad9c0(void)

void FUN_1436ad9c0(longlong *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*param_1 + 0x88);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x10) != 0)) {
    Curl_share_lock(*param_1,4,2);
    return;
  }
  return;
}



// FUNCTION 1436ad9f0 FUN_1436ad9f0 body=31 status=ok
// SIG undefined FUN_1436ad9f0(void)

void FUN_1436ad9f0(longlong *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*param_1 + 0x88);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x10) != 0)) {
    Curl_share_unlock(*param_1,4);
    return;
  }
  return;
}



// FUNCTION 1436ada10 FUN_1436ada10 body=113 status=ok
// SIG undefined FUN_1436ada10(void)

undefined8 FUN_1436ada10(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = (longlong)param_2;
  iVar1 = FUN_1436c1af0(param_1,param_2);
  if (iVar1 != 0) {
    return 0x50;
  }
  *(undefined1 *)((lVar2 + 5) * 0x78 + param_1) = 0;
  *(undefined4 *)(lVar2 * 0x78 + 0x25c + param_1) = 0;
  *(code **)(param_1 + 0x1f8 + lVar2 * 8) = FUN_1436b5b40;
  *(code **)(param_1 + 0x208 + lVar2 * 8) = FUN_1436b5c00;
  return 0;
}



// FUNCTION 1436ada90 Curl_schannel_version body=5 status=ok
// SIG undefined Curl_schannel_version(void)

longlong Curl_schannel_version(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = curl_msnprintf(param_1,param_2,"WinSSL");
  return (longlong)iVar1;
}



// FUNCTION 1436adaa0 FUN_1436adaa0 body=57 status=ok
// SIG undefined FUN_1436adaa0(void)

bool FUN_1436adaa0(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return true;
    }
  }
  else if (param_2 != 0) {
    iVar1 = Curl_strcasecompare();
    return iVar1 != 0;
  }
  return false;
}



// FUNCTION 1436adae0 FUN_1436adae0 body=2090 status=ok
// SIG undefined FUN_1436adae0(void)

undefined8
FUN_1436adae0(longlong param_1,longlong param_2,ulonglong *param_3,undefined1 *param_4,
             undefined1 *param_5)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  char *pcVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong *puVar19;
  ulonglong local_50;
  
  bVar6 = false;
  uVar12 = 0;
  if ((*(byte *)(*(longlong *)(param_2 + 1000) + 0x74) & 3) == 0) {
LAB_1436adb68:
    bVar3 = false;
  }
  else {
    cVar7 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),1);
    if (((cVar7 == '\0') || (*(int *)(param_1 + 900) == 1)) ||
       ((*(int *)(param_1 + 0x380) - 1U & 0xfffffffb) != 0)) {
      cVar7 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),2);
      if ((cVar7 == '\0') || (*(int *)(param_1 + 900) < 3)) goto LAB_1436adb68;
      bVar3 = true;
    }
    else {
      bVar3 = true;
    }
  }
  if (((*(byte *)(param_1 + 0x8950) & 0x28) == 0) ||
     (bVar4 = true, (*(byte *)(*(longlong *)(param_2 + 1000) + 0x74) & 3) == 0)) {
    bVar4 = false;
  }
  if (((*(char *)(param_2 + 0x3c0) == '\0') || ((*(byte *)(param_1 + 0x8960) & 0x28) == 0)) ||
     ((*(byte *)(*(longlong *)(param_2 + 1000) + 0x74) & 3) == 0)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  *param_4 = 0;
  *param_5 = 0;
  if ((bVar3) && (cVar7 = FUN_1436bfec0(param_1,param_2), cVar7 != '\0')) {
    bVar3 = false;
  }
  piVar9 = (int *)FUN_1436be9d0(param_2,*(undefined8 *)(param_1 + 0x7b8));
  if (piVar9 == (int *)0x0) {
    return 0;
  }
  iVar8 = *piVar9;
  uVar18 = uVar12;
  if (iVar8 != 2) {
    if (*(longlong *)(param_1 + 0x78) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = (longlong)*(int *)(*(longlong *)(param_1 + 0x78) + 0x11c);
    }
  }
  if (*(char *)(param_2 + 0x3bb) == '\0') {
    uVar15 = *(undefined8 *)(param_2 + 0xb8);
  }
  else {
    uVar15 = *(undefined8 *)(param_2 + 0xd8);
  }
  if (iVar8 == 1) {
    pcVar10 = "can pipeline";
  }
  else {
    pcVar10 = "serially";
    if (iVar8 == 2) {
      pcVar10 = "can multiplex";
    }
  }
  FUN_1436b58e0(param_1,"Found bundle for host %s: %p [%s]\n",uVar15,piVar9,pcVar10);
  if (bVar3) {
    if (*piVar9 < 1) {
      if ((*piVar9 == 0) && (*(char *)(param_1 + 0x65b) != '\0')) {
        FUN_1436b58e0(param_1,"Server doesn\'t support multi-use yet, wait\n");
        *param_5 = 1;
        return 0;
      }
      FUN_1436b58e0(param_1,"Server doesn\'t support multi-use (yet)\n");
      bVar3 = false;
    }
    if ((*piVar9 == 1) && (cVar7 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),1), cVar7 == '\0'))
    {
      pcVar10 = "Could pipeline, but not asked to!\n";
    }
    else {
      if ((*piVar9 != 2) ||
         (cVar7 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),2), cVar7 != '\0'))
      goto LAB_1436add15;
      pcVar10 = "Could multiplex, but not asked to!\n";
    }
    FUN_1436b58e0(param_1,pcVar10);
    bVar3 = false;
  }
LAB_1436add15:
  puVar19 = (ulonglong *)**(longlong **)(piVar9 + 4);
  local_50 = uVar18;
  if (puVar19 != (ulonglong *)0x0) {
    do {
      uVar17 = *puVar19;
      puVar19 = (ulonglong *)puVar19[2];
      cVar7 = FUN_1436b2200(uVar17,param_1);
      if (cVar7 == '\0') {
        uVar13 = (*(longlong **)(uVar17 + 0x4c8))[3] + (*(longlong **)(uVar17 + 0x4d0))[3];
        if (bVar3) {
          if (*(char *)(uVar17 + 0x3d3) == '\0') {
            plVar2 = (longlong *)**(longlong **)(uVar17 + 0x4c8);
            if (plVar2 == (longlong *)0x0) {
              lVar16 = 0;
            }
            else {
              lVar16 = *plVar2;
            }
            plVar2 = (longlong *)**(longlong **)(uVar17 + 0x4d0);
            lVar11 = 0;
            if (plVar2 != (longlong *)0x0) {
              lVar11 = *plVar2;
            }
            if (lVar16 == 0) {
              if (lVar11 == 0) goto LAB_1436addf4;
              cVar7 = FUN_1436b0ea0(lVar11,uVar17);
            }
            else {
              cVar7 = FUN_1436b0ea0(lVar16,uVar17);
            }
            if (cVar7 == '\0') goto LAB_1436ae2a9;
          }
LAB_1436addf4:
          lVar16 = *(longlong *)(param_2 + 1000);
          uVar14 = *(uint *)(lVar16 + 0x78) & 1;
          if ((((uVar14 == (*(uint *)(*(longlong *)(uVar17 + 1000) + 0x78) & 1)) ||
               ((iVar8 = FUN_1436b24d0(*(undefined4 *)(*(longlong *)(uVar17 + 1000) + 0x74)),
                iVar8 == *(int *)(lVar16 + 0x74) && (*(char *)(uVar17 + 0x3b8) != '\0')))) &&
              (((uVar14 == 0 ||
                ((*(char *)(param_1 + 0x390) == *(char *)(uVar17 + 0x7fc) &&
                 (*(char *)(param_1 + 0x391) == *(char *)(uVar17 + 0x7fd))))) &&
               (*(char *)(param_2 + 0x3bd) == *(char *)(uVar17 + 0x3bd))))) &&
             ((((*(char *)(param_2 + 0x3bd) == '\0' ||
                ((((*(int *)(param_2 + 0x1b0) == *(int *)(uVar17 + 0x1b0) &&
                   (*(char *)(param_2 + 0x3be) == *(char *)(uVar17 + 0x3be))) &&
                  (*(char *)(param_2 + 0x3c8) == *(char *)(uVar17 + 0x3c8))) &&
                 ((iVar8 = Curl_strcasecompare(*(undefined8 *)(param_2 + 0xf8),
                                               *(undefined8 *)(uVar17 + 0xf8)), iVar8 != 0 &&
                  (*(int *)(param_2 + 0x108) == *(int *)(uVar17 + 0x108))))))) &&
               (*(char *)(param_2 + 0x3bb) == *(char *)(uVar17 + 0x3bb))) &&
              ((*(char *)(param_2 + 0x3bc) == *(char *)(uVar17 + 0x3bc) &&
               ((bVar3 || (*(char *)(uVar17 + 0x48) == '\0')))))))) {
            lVar16 = *(longlong *)(param_2 + 0x800);
            if ((lVar16 == 0) && (*(short *)(param_2 + 0x808) == 0)) {
LAB_1436adf8b:
              if (((*(byte *)(*(longlong *)(param_2 + 1000) + 0x78) & 0x80) != 0) ||
                 ((iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x180),
                                         *(undefined8 *)(uVar17 + 0x180)), iVar8 != 0 &&
                  (iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x188),
                                         *(undefined8 *)(uVar17 + 0x188)), iVar8 != 0)))) {
                if ((*(char *)(param_2 + 0x3be) == '\0') ||
                   (((*(byte *)(*(longlong *)(param_2 + 1000) + 0x78) & 1) != 0 ||
                    (*(char *)(param_2 + 0x3c8) != '\0')))) {
                  iVar8 = Curl_strcasecompare(**(undefined8 **)(param_2 + 1000),
                                              **(undefined8 **)(uVar17 + 1000));
                  if ((((iVar8 != 0) ||
                       ((iVar8 = FUN_1436b24d0(*(undefined4 *)(*(longlong *)(uVar17 + 1000) + 0x74))
                        , iVar8 == *(int *)(*(longlong *)(param_2 + 1000) + 0x74) &&
                        (*(char *)(uVar17 + 0x3b8) != '\0')))) &&
                      ((*(char *)(param_2 + 0x3bb) == '\0' ||
                       (iVar8 = Curl_strcasecompare(*(undefined8 *)(param_2 + 0xd8),
                                                    *(undefined8 *)(uVar17 + 0xd8)), iVar8 != 0))))
                     && ((((*(char *)(param_2 + 0x3bc) == '\0' ||
                           (*(int *)(param_2 + 0x110) == *(int *)(uVar17 + 0x110))) &&
                          (iVar8 = Curl_strcasecompare(*(undefined8 *)(param_2 + 0xb8),
                                                       *(undefined8 *)(uVar17 + 0xb8)), iVar8 != 0))
                         && (*(int *)(param_2 + 0x10c) == *(int *)(uVar17 + 0x10c))))) {
                    if ((*(byte *)(*(longlong *)(param_2 + 1000) + 0x78) & 1) == 0)
                    goto LAB_1436ae0e2;
                    cVar7 = FUN_1436ad310(param_2 + 0x348,uVar17 + 0x348);
                    if (cVar7 != '\0') {
                      if (*(int *)(uVar17 + 0x25c) == 2) goto LAB_1436ae0e2;
                      bVar6 = true;
                    }
                  }
                }
                else {
LAB_1436ae0e2:
                  if (bVar4) {
                    iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x180),
                                          *(undefined8 *)(uVar17 + 0x180));
                    if ((iVar8 != 0) &&
                       (iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x188),
                                              *(undefined8 *)(uVar17 + 0x188)), iVar8 != 0))
                    goto LAB_1436ae130;
                  }
                  else if (*(int *)(uVar17 + 0x500) == 0) {
LAB_1436ae130:
                    if (bVar5) {
                      if (((*(longlong *)(uVar17 + 0x1a0) != 0) &&
                          (*(longlong *)(uVar17 + 0x1a8) != 0)) &&
                         ((iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x1a0)), iVar8 != 0 &&
                          (iVar8 = curl_strequal(*(undefined8 *)(param_2 + 0x1a8),
                                                 *(undefined8 *)(uVar17 + 0x1a8)), iVar8 != 0)))) {
LAB_1436ae195:
                        if ((bVar4) || (bVar5)) {
                          if (((bVar4) && (*(int *)(uVar17 + 0x500) != 0)) ||
                             ((uVar12 = uVar17, bVar5 && (*(int *)(uVar17 + 0x570) != 0)))) {
                            *param_4 = 1;
                            break;
                          }
                        }
                        else {
                          if ((!bVar3) || (uVar13 == 0)) break;
                          if ((uVar18 == 0) || (uVar13 < uVar18)) {
                            cVar7 = FUN_1436bfb00(param_1,uVar17);
                            if (cVar7 == '\0') {
                              if (uVar18 == 0) {
                                FUN_1436b58e0(param_1,"Multiplexed connection found!\n");
                                break;
                              }
                              if (uVar13 < local_50) {
                                uVar12 = uVar17;
                                local_50 = uVar13;
                              }
                            }
                            else {
                              FUN_1436b58e0(param_1,"Penalized, skip\n");
                            }
                          }
                          else {
                            FUN_1436b58e0(param_1,"Pipe is full, skip (%zu)\n");
                          }
                        }
                      }
                    }
                    else if (*(int *)(uVar17 + 0x570) == 0) goto LAB_1436ae195;
                  }
                }
              }
            }
            else if ((((*(short *)(uVar17 + 0x808) == *(short *)(param_2 + 0x808)) &&
                      (*(int *)(uVar17 + 0x80c) == *(int *)(param_2 + 0x80c))) &&
                     (pcVar10 = *(char **)(uVar17 + 0x800), pcVar10 != (char *)0x0)) &&
                    (lVar16 != 0)) {
              lVar16 = lVar16 - (longlong)pcVar10;
              do {
                cVar7 = *pcVar10;
                cVar1 = pcVar10[lVar16];
                if (cVar7 != cVar1) break;
                pcVar10 = pcVar10 + 1;
              } while (cVar1 != '\0');
              if (cVar7 == cVar1) goto LAB_1436adf8b;
            }
          }
        }
        else if (uVar13 == 0) {
          if (*(char *)(uVar17 + 0x70) == '\0') {
            pcVar10 = "Connection #%ld is still name resolving, can\'t reuse\n";
          }
          else {
            if ((*(longlong *)(uVar17 + 0x1d0) != -1) && (*(char *)(uVar17 + 0x3b9) == '\0'))
            goto LAB_1436addf4;
            pcVar10 = "Connection #%ld isn\'t open enough, can\'t reuse\n";
            if (*(char *)(uVar17 + 0x3b9) == '\0') {
              bVar6 = true;
            }
          }
          FUN_1436b58e0(param_1,pcVar10);
        }
      }
LAB_1436ae2a9:
      uVar17 = uVar12;
    } while (puVar19 != (ulonglong *)0x0);
    if (uVar17 != 0) {
      *param_3 = uVar17;
      return 1;
    }
    if ((bVar6) && (*(char *)(param_1 + 0x65b) != '\0')) {
      FUN_1436b58e0(param_1,"Found pending candidate for reuse and CURLOPT_PIPEWAIT is set\n");
      *param_5 = 1;
    }
  }
  return 0;
}



// FUNCTION 1436ae310 FUN_1436ae310 body=555 status=ok
// SIG undefined FUN_1436ae310(void)

undefined8 FUN_1436ae310(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1436a4500(param_1,0);
    if (*(longlong *)(param_1 + 0x78) != 0) {
      FUN_1436a4fd0(*(longlong *)(param_1 + 0x78),param_1);
    }
    if (*(longlong *)(param_1 + 0x80) != 0) {
      FUN_1436a4d00();
    }
    if (*(longlong *)(param_1 + 0x89b0) != 0) {
      Curl_llist_destroy(*(longlong *)(param_1 + 0x89b0),0);
      *(undefined8 *)(param_1 + 0x89b0) = 0;
    }
    *(undefined4 *)(param_1 + 0x8b38) = 0;
    if (*(char *)(param_1 + 0x89e2) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89e8));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89d0));
    *(undefined8 *)(param_1 + 0x89d0) = 0;
    *(undefined8 *)(param_1 + 0x89d8) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
    FUN_1436ad230(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8800));
    *(undefined8 *)(param_1 + 0x8800) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8838));
    *(undefined8 *)(param_1 + 0x8838) = 0;
    FUN_1436ad590(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x178));
    *(undefined8 *)(param_1 + 0x178) = 0;
    if (*(char *)(param_1 + 0x688) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x680));
      *(undefined8 *)(param_1 + 0x680) = 0;
      *(undefined1 *)(param_1 + 0x688) = 0;
    }
    *(undefined8 *)(param_1 + 0x680) = 0;
    if (*(char *)(param_1 + 0x678) != '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
      *(undefined8 *)(param_1 + 0x670) = 0;
      *(undefined1 *)(param_1 + 0x678) = 0;
    }
    *(undefined8 *)(param_1 + 0x670) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x7d8));
    *(undefined8 *)(param_1 + 0x7d8) = 0;
    FUN_1436aaf80(param_1,1);
    FUN_1436d58b0(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa0));
    *(undefined8 *)(param_1 + 0x8aa0) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa8));
    *(undefined8 *)(param_1 + 0x8aa8) = 0;
    FUN_140447710(*(undefined8 *)(param_1 + 0x8978));
    if (*(longlong *)(param_1 + 0x88) != 0) {
      Curl_share_lock(param_1,1,2);
      *(int *)(*(longlong *)(param_1 + 0x88) + 4) = *(int *)(*(longlong *)(param_1 + 0x88) + 4) + -1
      ;
      Curl_share_unlock(param_1,1);
    }
    if (*(char *)(param_1 + 0x614) != '\0') {
      Curl_wildcard_dtor(param_1 + 0x8a40);
    }
    FUN_1436ae920(param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return 0;
}



// FUNCTION 1436ae540 FUN_1436ae540 body=162 status=ok
// SIG undefined FUN_1436ae540(void)

int FUN_1436ae540(undefined8 param_1,longlong *param_2,char *param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  
  *param_3 = '\0';
  iVar2 = FUN_1436b1620();
  if (iVar2 == 0) {
    lVar1 = *param_2;
    if ((*(longlong *)(*(longlong *)(lVar1 + 0x4c8) + 0x18) != 0) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x4d0) + 0x18) != 0)) {
      *param_4 = 1;
      return 0;
    }
    if (*param_3 != '\0') {
      return 0;
    }
    iVar2 = FUN_1436b0cf0(lVar1,param_4);
  }
  if (iVar2 == 0x59) {
    *param_2 = 0;
  }
  else if ((iVar2 != 0) && (*param_2 != 0)) {
    FUN_1436ae720(*param_2,0);
    *param_2 = 0;
  }
  return iVar2;
}



// FUNCTION 1436ae5f0 FUN_1436ae5f0 body=301 status=ok
// SIG undefined FUN_1436ae5f0(void)

undefined8 FUN_1436ae5f0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  ulonglong in_stack_ffffffffffffffe8;
  undefined8 in_stack_fffffffffffffff0;
  uint7 uVar4;
  
  if ((*(char *)(param_1 + 0x3bd) == '\0') || (param_2 != 0)) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  uVar4 = (uint7)((ulonglong)in_stack_fffffffffffffff0 >> 8);
  if (iVar1 == 4) {
    if (*(char *)(param_1 + 0x3bc) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x10c);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x110);
    }
    if (*(char *)(param_1 + 0x3bb) == '\0') {
      uVar3 = *(undefined8 *)(param_1 + 0xb8);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0xd8);
    }
    uVar3 = FUN_1436d5ee0(*(undefined8 *)(param_1 + 0x1a0),uVar3,uVar2,0,param_1,
                          (ulonglong)uVar4 << 8);
    return uVar3;
  }
  if (iVar1 != 5) {
    if (iVar1 == 6) {
      if (*(char *)(param_1 + 0x3bc) == '\0') {
        uVar2 = *(undefined4 *)(param_1 + 0x10c);
      }
      else {
        uVar2 = *(undefined4 *)(param_1 + 0x110);
      }
      if (*(char *)(param_1 + 0x3bb) == '\0') {
        uVar3 = *(undefined8 *)(param_1 + 0xb8);
      }
      else {
        uVar3 = *(undefined8 *)(param_1 + 0xd8);
      }
      uVar3 = FUN_1436d5ee0(*(undefined8 *)(param_1 + 0x1a0),uVar3,uVar2,0,param_1,CONCAT71(uVar4,1)
                           );
      return uVar3;
    }
    if (iVar1 != 7) {
      return 0;
    }
  }
  if (*(char *)(param_1 + 0x3bc) == '\0') {
    uVar2 = *(undefined4 *)(param_1 + 0x10c);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 0x110);
  }
  if (*(char *)(param_1 + 0x3bb) == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0xb8);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0xd8);
  }
  uVar3 = FUN_1436d63a0(*(undefined8 *)(param_1 + 0x1a0),*(undefined8 *)(param_1 + 0x1a8),uVar3,
                        uVar2,in_stack_ffffffffffffffe8 & 0xffffffff00000000,param_1);
  return uVar3;
}



// FUNCTION 1436ae720 FUN_1436ae720 body=408 status=ok
// SIG undefined FUN_1436ae720(void)

undefined8 FUN_1436ae720(longlong *param_1,undefined1 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  char cVar5;
  
  if ((param_1 != (longlong *)0x0) && (lVar1 = *param_1, lVar1 != 0)) {
    if (param_1[10] != 0) {
      Curl_resolv_unlock(lVar1);
      param_1[10] = 0;
    }
    FUN_1436ac550(lVar1);
    FUN_1436d5b30(param_1);
    if (*(code **)(param_1[0x7d] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[0x7d] + 0x60))(param_1,param_2);
    }
    FUN_1436b58e0(lVar1,"Closing connection %ld\n",*(undefined4 *)((longlong)param_1 + 0x4c));
    FUN_1436beb90(*(undefined8 *)(lVar1 + 0x7b8),param_1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x16]);
    param_1[0x16] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x1a]);
    param_1[0x1a] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x1e]);
    param_1[0x1e] = 0;
    thunk_FUN_1436c19a0(param_1,0);
    cVar5 = FUN_1436a4ab0(*(undefined8 *)(lVar1 + 0x78),3);
    if (cVar5 != '\0') {
      puVar2 = (undefined8 *)param_1[0x99];
      if (puVar2 != (undefined8 *)0x0) {
        plVar4 = (longlong *)*puVar2;
        while (plVar4 != (longlong *)0x0) {
          plVar3 = (longlong *)plVar4[2];
          *(undefined1 *)(*plVar4 + 0x89c9) = 1;
          Curl_multi_handlePipeBreak();
          Curl_llist_remove(puVar2,plVar4,0);
          plVar4 = plVar3;
        }
      }
      puVar2 = (undefined8 *)param_1[0x9a];
      if (puVar2 != (undefined8 *)0x0) {
        plVar4 = (longlong *)*puVar2;
        while (plVar4 != (longlong *)0x0) {
          plVar3 = (longlong *)plVar4[2];
          *(undefined1 *)(*plVar4 + 0x89c9) = 1;
          Curl_multi_handlePipeBreak();
          Curl_llist_remove(puVar2,plVar4,0);
          plVar4 = plVar3;
        }
      }
    }
    FUN_1436b1300(param_1);
  }
  return 0;
}



// FUNCTION 1436ae8c0 FUN_1436ae8c0 body=27 status=ok
// SIG undefined FUN_1436ae8c0(void)

undefined8 FUN_1436ae8c0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 1000) + 0x48),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001436ae8d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1436ae8e0 FUN_1436ae8e0 body=63 status=ok
// SIG undefined FUN_1436ae8e0(void)

void FUN_1436ae8e0(longlong param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x198));
  *(undefined8 *)(param_1 + 0x198) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x178));
  *(undefined8 *)(param_1 + 0x178) = 0;
  return;
}



// FUNCTION 1436ae920 FUN_1436ae920 body=159 status=ok
// SIG undefined FUN_1436ae920(void)

void FUN_1436ae920(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(param_1 + 0x488);
  lVar2 = 0x2d;
  do {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  if (*(char *)(param_1 + 0x688) != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x680));
    *(undefined8 *)(param_1 + 0x680) = 0;
    *(undefined1 *)(param_1 + 0x688) = 0;
  }
  *(undefined8 *)(param_1 + 0x680) = 0;
  if (*(char *)(param_1 + 0x678) != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  *(undefined8 *)(param_1 + 0x670) = 0;
  return;
}



// FUNCTION 1436ae9c0 FUN_1436ae9c0 body=233 status=ok
// SIG undefined FUN_1436ae9c0(void)

void FUN_1436ae9c0(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  
  if ((*(char *)(param_2 + 0x4c0) == '\0') || (cVar5 = FUN_1436bff70(), cVar5 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(char *)(param_2 + 0x4c1) == '\0') ||
     (cVar5 = FUN_1436bff90(param_1,param_2), cVar5 == '\0')) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  puVar1 = *(undefined8 **)(param_2 + 0x4d0);
  if (puVar1 != (undefined8 *)0x0) {
    for (plVar2 = (longlong *)*puVar1; plVar2 != (longlong *)0x0; plVar2 = (longlong *)plVar2[2]) {
      if (*plVar2 == param_1) {
        Curl_llist_remove(puVar1,plVar2,0);
        if (bVar3) {
          FUN_1436bfae0(param_2);
        }
        break;
      }
    }
  }
  plVar2 = *(longlong **)(param_2 + 0x4c8);
  if ((plVar2 != (longlong *)0x0) && (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
    while (*plVar6 != param_1) {
      plVar6 = (longlong *)plVar6[2];
      if (plVar6 == (longlong *)0x0) {
        return;
      }
    }
    Curl_llist_remove(plVar2,plVar6,0);
    if (bVar4) {
      FUN_1436bfaf0(param_2);
    }
  }
  return;
}



// FUNCTION 1436aeab0 FUN_1436aeab0 body=197 status=ok
// SIG undefined FUN_1436aeab0(void)

undefined8 FUN_1436aeab0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_2 + 0x3c3) = 0;
  }
  *(undefined1 *)(param_1 + 0x8a18) = 0;
  *(undefined1 *)(param_1 + 0x89c8) = 0;
  if (*(char *)(param_1 + 0x44f) == '\0') {
    if (*(int *)(param_1 + 0x380) == 5) {
      *(undefined4 *)(param_1 + 0x380) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x380) = 5;
  }
  uVar1 = curlx_tvnow();
  *(undefined8 *)(param_1 + 200) = uVar1;
  *(undefined8 *)(param_1 + 0xd0) = uVar1;
  *(longlong *)(param_1 + 0x150) = param_1 + 0x7e8;
  *(longlong *)(param_1 + 0x158) = param_1 + 0x47e9;
  *(undefined1 *)(param_1 + 0xd8) = 1;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x7d8);
  *(undefined1 *)(param_1 + 0x16d) = 0;
  FUN_1436bf960(param_1);
  FUN_1436bedc0(param_1,0);
  FUN_1436bed80(param_1,0);
  return 0;
}



// FUNCTION 1436aeb80 FUN_1436aeb80 body=401 status=ok
// SIG undefined FUN_1436aeb80(void)

void FUN_1436aeb80(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __acrt_iob_func(1);
  param_1[4] = uVar1;
  uVar1 = __acrt_iob_func(0);
  param_1[5] = uVar1;
  uVar1 = __acrt_iob_func(2);
  *param_1 = uVar1;
  param_1[0x10] = fwrite_exref;
  param_1[0x13] = fread_exref;
  param_1[0x14] = 0;
  param_1[0xd] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2be) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x474) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  *(undefined1 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined1 *)(param_1 + 0x95) = 0;
  param_1[0x28] = 0xffffffffffffffff;
  param_1[0xe] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 1;
  *(undefined2 *)((longlong)param_1 + 700) = 0x101;
  *(undefined4 *)(param_1 + 0x51) = 1;
  *(undefined4 *)((longlong)param_1 + 0x25c) = 0x3c;
  param_1[0x47] = 5;
  *(undefined4 *)(param_1 + 3) = 0x438;
  *(undefined4 *)((longlong)param_1 + 0x44) = 1;
  *(undefined4 *)(param_1 + 9) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2a7) = 1;
  *(undefined2 *)(param_1 + 0x3e) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x1a4;
  *(undefined4 *)(param_1 + 0x5c) = 0x1ed;
  *(undefined4 *)((longlong)param_1 + 0x454) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x8b) = 0xf3fffbef;
  *(undefined4 *)((longlong)param_1 + 0x4a4) = 0x3c;
  *(undefined4 *)(param_1 + 0x94) = 0x3c;
  *(undefined2 *)(param_1 + 0x97) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x4bc) = 1000;
  *(undefined1 *)(param_1 + 0x30) = 1;
  return;
}



// FUNCTION 1436aed20 FUN_1436aed20 body=183 status=ok
// SIG undefined FUN_1436aed20(void)

longlong FUN_1436aed20(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  undefined1 local_28 [32];
  
  uVar1 = *(undefined8 *)(param_1 + 0x7b8);
  iVar6 = -1;
  lVar7 = 0;
  uVar4 = curlx_tvnow();
  Curl_hash_start_iterate(uVar1,local_28);
  plVar5 = (longlong *)Curl_hash_next_element(local_28);
  while (plVar5 != (longlong *)0x0) {
    for (plVar5 = (longlong *)**(undefined8 **)(*plVar5 + 0x10); plVar5 != (longlong *)0x0;
        plVar5 = (longlong *)plVar5[2]) {
      lVar2 = *plVar5;
      if ((*(char *)(lVar2 + 0x48) == '\0') &&
         (iVar3 = curlx_tvdiff(uVar4,*(undefined8 *)(lVar2 + 0x1bc)), iVar6 < iVar3)) {
        lVar7 = lVar2;
        iVar6 = iVar3;
      }
    }
    plVar5 = (longlong *)Curl_hash_next_element(local_28);
  }
  return lVar7;
}



// FUNCTION 1436aede0 FUN_1436aede0 body=286 status=ok
// SIG undefined FUN_1436aede0(void)

int FUN_1436aede0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = (*(code *)PTR_calloc_1467dcc78)(1,0x8b40);
  if (lVar2 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(lVar2 + 0x8b38) = 0xc0dedbad;
  iVar1 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
          ::GetBoundProgramCounterForTimerManager(lVar2 + 0x8978);
  if (iVar1 == 0) {
    lVar3 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x100);
    *(longlong *)(lVar2 + 0x7d8) = lVar3;
    if (lVar3 == 0) {
      iVar1 = 0x1b;
    }
    else {
      iVar1 = FUN_1436aeb80(lVar2 + 0x1a0);
      *(uint *)(lVar2 + 0x6e0) = *(uint *)(lVar2 + 0x6e0) | 0x10;
      *(undefined8 *)(lVar2 + 0x7e0) = 0x100;
      *(undefined8 *)(lVar2 + 2000) = 0;
      *(undefined8 *)(lVar2 + 0x87f0) = 0xffffffffffffffff;
      *(undefined4 *)(lVar2 + 0x8a40) = 0;
      *(undefined8 *)(lVar2 + 0x8a58) = 0;
      *(undefined8 *)(lVar2 + 0x628) = 0;
      *(undefined8 *)(lVar2 + 0x650) = 5;
      if (iVar1 == 0) {
        *param_1 = lVar2;
        return 0;
      }
    }
    FUN_140447710(*(undefined8 *)(lVar2 + 0x8978));
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x7d8));
    FUN_1436ae920(lVar2);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
  return iVar1;
}



// FUNCTION 1436aef00 FUN_1436aef00 body=177 status=ok
// SIG undefined FUN_1436aef00(void)

ulonglong FUN_1436aef00(longlong param_1,undefined1 *param_2)

{
  code *pcVar1;
  uint uVar2;
  ulonglong uVar3;
  
  *param_2 = 0;
  if (*(char *)(param_1 + 0x3c4) == '\0') {
    if (*(char *)(param_1 + 0x3c6) != '\0') {
      return 0;
    }
  }
  else if (*(char *)(param_1 + 0x3c6) != '\0') {
    *param_2 = *(longlong *)(*(longlong *)(param_1 + 1000) + 0x30) == 0;
    return 0;
  }
  uVar3 = FUN_1436d7770(param_1);
  if ((int)uVar3 == 0) {
    if (((*(char *)(param_1 + 0x3c8) != (char)uVar3) && (*(char *)(param_1 + 0x3be) != (char)uVar3))
       && (*(int *)(param_1 + 0x810) != 2)) {
      return 0;
    }
    pcVar1 = *(code **)(*(longlong *)(param_1 + 1000) + 0x28);
    if (pcVar1 == (code *)0x0) {
      *param_2 = 1;
      uVar3 = uVar3 & 0xffffffff;
    }
    else {
      uVar2 = (*pcVar1)(param_1,param_2);
      uVar3 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        return uVar3;
      }
    }
    *(undefined1 *)(param_1 + 0x3c6) = 1;
  }
  return uVar3;
}



// FUNCTION 1436aefc0 FUN_1436aefc0 body=39 status=ok
// SIG undefined FUN_1436aefc0(void)

undefined8 FUN_1436aefc0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(*(longlong *)(param_1 + 1000) + 0x30) != 0)) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001436aefdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 1000) + 0x30))();
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



// FUNCTION 1436aeff0 FUN_1436aeff0 body=39 status=ok
// SIG undefined FUN_1436aeff0(void)

undefined8 FUN_1436aeff0(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  if ((param_1 != 0) && (*(longlong *)(*(longlong *)(param_1 + 1000) + 0x38) != 0)) {
    *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001436af00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(longlong *)(param_1 + 1000) + 0x38))();
    return uVar1;
  }
  *param_2 = 1;
  return 0;
}



// FUNCTION 1436af020 FUN_1436af020 body=22 status=ok
// SIG undefined FUN_1436af020(void)

undefined8 FUN_1436af020(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 1000) + 0x40);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436af030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  return 0;
}



// FUNCTION 1436af040 Curl_removeHandleFromPipeline body=62 status=ok
// SIG undefined Curl_removeHandleFromPipeline(void)

undefined8 Curl_removeHandleFromPipeline(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  if (param_2 != (undefined8 *)0x0) {
    for (plVar1 = (longlong *)*param_2; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      if (*plVar1 == param_1) {
        Curl_llist_remove(param_2,plVar1,0);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1436af080 FUN_1436af080 body=5718 status=ok
// SIG undefined FUN_1436af080(void)

uint FUN_1436af080(longlong param_1,int param_2,uint *param_3)

{
  void *_Src;
  code *pcVar1;
  char cVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  void *_Dst;
  undefined8 uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  
  uVar4 = 0;
  uVar8 = 0;
  if (0x2711 < param_2) {
    if (param_2 < 0x4e2c) {
      if (param_2 == 0x4e2b) {
        lVar11 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x220) = lVar11;
        if (lVar11 == 0) {
          *(code **)(param_1 + 0x220) = fwrite_exref;
          *(undefined4 *)(param_1 + 0x244) = 0;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x244) = 1;
        return 0;
      }
      switch(param_2) {
      case 0x2712:
        if (*(char *)(param_1 + 0x678) != '\0') {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
          *(undefined8 *)(param_1 + 0x670) = 0;
          *(undefined1 *)(param_1 + 0x678) = 0;
        }
        uVar4 = setstropt(param_1 + 0x520,*(undefined8 *)param_3);
        *(undefined8 *)(param_1 + 0x670) = *(undefined8 *)(param_1 + 0x520);
        return uVar4;
      case 0x2714:
        uVar4 = setstropt(param_1 + 0x508,*(undefined8 *)param_3);
        return uVar4;
      case 0x2715:
        uVar4 = setstropt_userpwd(*(undefined8 *)param_3,param_1 + 0x570,param_1 + 0x578);
        return uVar4;
      case 0x2716:
        uVar4 = setstropt_userpwd(*(undefined8 *)param_3,param_1 + 0x588,param_1 + 0x590);
        return uVar4;
      case 0x2717:
        uVar4 = setstropt(param_1 + 0x510,*(undefined8 *)param_3);
        return uVar4;
      case 0x2719:
        *(undefined8 *)(param_1 + 0x1c8) = *(undefined8 *)param_3;
        return 0;
      case 0x271a:
        *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)param_3;
        return 0;
      case 0x271f:
        *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)param_3;
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x5e8));
        *(undefined8 *)(param_1 + 0x5e8) = 0;
        *(undefined4 *)(param_1 + 0x380) = 2;
        return 0;
      case 0x2720:
        if (*(char *)(param_1 + 0x688) != '\0') {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x680));
          *(undefined8 *)(param_1 + 0x680) = 0;
          *(undefined1 *)(param_1 + 0x688) = 0;
        }
        uVar4 = setstropt(param_1 + 0x518,*(undefined8 *)param_3);
        *(undefined8 *)(param_1 + 0x680) = *(undefined8 *)(param_1 + 0x518);
        return uVar4;
      case 0x2721:
        uVar4 = setstropt(param_1 + 0x4d8,*(undefined8 *)param_3);
        *(bool *)(param_1 + 0x446) = *(longlong *)(param_1 + 0x4d8) != 0;
        return uVar4;
      case 0x2722:
        uVar4 = setstropt(param_1 + 0x558,*(undefined8 *)param_3);
        return uVar4;
      case 0x2726:
        uVar4 = setstropt(param_1 + 0x498,*(undefined8 *)param_3);
        return uVar4;
      case 0x2727:
        *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)param_3;
        return 0;
      case 0x2728:
        *(undefined8 *)(param_1 + 0x318) = *(undefined8 *)param_3;
        *(undefined4 *)(param_1 + 0x380) = 3;
        *(undefined1 *)(param_1 + 0x44f) = 0;
        return 0;
      case 0x2729:
        uVar4 = setstropt(param_1 + 0x488,*(undefined8 *)param_3);
        return uVar4;
      case 0x272a:
        uVar4 = setstropt(param_1 + 0x4e8,*(undefined8 *)param_3);
        return uVar4;
      case 0x272c:
        *(undefined8 *)(param_1 + 0x328) = *(undefined8 *)param_3;
        return 0;
      case 0x272d:
        *(undefined8 *)(param_1 + 0x1d0) = *(undefined8 *)param_3;
        return 0;
      case 0x272f:
        if (*(longlong *)param_3 == 0) {
          return 0;
        }
        lVar11 = curl_slist_append(*(undefined8 *)(param_1 + 0x690));
        if (lVar11 != 0) {
          *(longlong *)(param_1 + 0x690) = lVar11;
          return 0;
        }
        curl_slist_free_all(*(undefined8 *)(param_1 + 0x690));
        *(undefined8 *)(param_1 + 0x690) = 0;
        return 0x1b;
      case 0x2734:
        uVar4 = setstropt(param_1 + 0x4a8,*(undefined8 *)param_3);
        return uVar4;
      case 0x2735:
        lVar11 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x1a0) = lVar11;
        if (lVar11 != 0) {
          return 0;
        }
        uVar7 = __acrt_iob_func(2);
        *(undefined8 *)(param_1 + 0x1a0) = uVar7;
        return 0;
      case 0x2737:
        *(undefined8 *)(param_1 + 0x330) = *(undefined8 *)param_3;
        return 0;
      case 0x2749:
        *(undefined8 *)(param_1 + 0x2b8) = *(undefined8 *)param_3;
        return 0;
      case 0x274e:
        uVar4 = setstropt(param_1 + 0x4b8,*(undefined8 *)param_3);
        return uVar4;
      case 0x274f:
        uVar4 = setstropt(param_1 + 0x4f8,*(undefined8 *)param_3);
        *(bool *)(param_1 + 0x459) = *(longlong *)(param_1 + 0x4f8) != 0;
        return uVar4;
      case 0x2751:
        uVar4 = setstropt(param_1 + 0x530,*(undefined8 *)param_3);
        return uVar4;
      case 0x2756:
        *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)param_3;
        return 0;
      case 0x275c:
        uVar4 = setstropt(param_1 + 0x550,*(undefined8 *)param_3);
        return uVar4;
      case 0x275d:
        uVar4 = setstropt(param_1 + 0x548,*(undefined8 *)param_3);
        return uVar4;
      case 0x2762:
        uVar4 = setstropt(param_1 + 0x4a0,*(undefined8 *)param_3);
        lVar11 = FUN_1436aaaa0(param_1,0,*(undefined8 *)(param_1 + 0x6a0),
                               *(undefined1 *)(param_1 + 0x321));
        *(longlong *)(param_1 + 0x6a0) = lVar11;
        if (lVar11 != 0) {
          return uVar4;
        }
        return 0x1b;
      case 0x2763:
        uVar4 = setstropt(param_1 + 0x540,*(undefined8 *)param_3);
        return uVar4;
      case 0x2766:
        uVar4 = setstropt(param_1 + 0x490,*(undefined8 *)param_3);
        return uVar4;
      case 0x2767:
        uVar4 = setstropt(param_1 + 0x4e0,*(undefined8 *)param_3);
        return uVar4;
      case 0x2768:
        uVar4 = setstropt(param_1 + 0x4f0,*(undefined8 *)param_3);
        return uVar4;
      case 0x2769:
        if (*(char **)param_3 == (char *)0x0) {
          return 0;
        }
        if (**(char **)param_3 == '\0') {
          return 0;
        }
        uVar4 = FUN_1436abe70(param_1);
        return uVar4;
      case 0x276d:
        *(undefined8 *)(param_1 + 0x338) = *(undefined8 *)param_3;
        return 0;
      case 0x276f:
        *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)param_3;
        return 0;
      case 0x2771:
      case 0x277d:
      case 0x27f6:
        goto switchD_1436af0d9_caseD_f4;
      case 0x2774:
        lVar11 = *(longlong *)param_3;
        if (*(longlong *)(param_1 + 0x88) != 0) {
          Curl_share_lock(param_1,1,2);
          if (*(int *)(param_1 + 0x70) == 3) {
            *(undefined8 *)(param_1 + 0x68) = 0;
            *(undefined4 *)(param_1 + 0x70) = 0;
          }
          if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x50) == *(longlong *)(param_1 + 0x6a0))
          {
            *(undefined8 *)(param_1 + 0x6a0) = 0;
          }
          if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x58) == *(longlong *)(param_1 + 0x8810)
             ) {
            *(undefined8 *)(param_1 + 0x8810) = 0;
          }
          *(int *)(*(longlong *)(param_1 + 0x88) + 4) =
               *(int *)(*(longlong *)(param_1 + 0x88) + 4) + -1;
          Curl_share_unlock(param_1,1);
          *(undefined8 *)(param_1 + 0x88) = 0;
        }
        *(longlong *)(param_1 + 0x88) = lVar11;
        if (lVar11 == 0) {
          return 0;
        }
        Curl_share_lock(param_1,1,2);
        *(int *)(*(longlong *)(param_1 + 0x88) + 4) =
             *(int *)(*(longlong *)(param_1 + 0x88) + 4) + 1;
        if ((**(byte **)(param_1 + 0x88) & 8) != 0) {
          *(byte **)(param_1 + 0x68) = *(byte **)(param_1 + 0x88) + 0x20;
          *(undefined4 *)(param_1 + 0x70) = 3;
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x50) != 0) {
          Curl_cookie_cleanup(*(undefined8 *)(param_1 + 0x6a0));
          *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x50);
        }
        if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x58) != 0) {
          *(undefined8 *)(param_1 + 0x3d8) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x60);
          *(undefined8 *)(param_1 + 0x8810) = *(undefined8 *)(*(longlong *)(param_1 + 0x88) + 0x58);
        }
        Curl_share_unlock(param_1,1);
        return 0;
      case 0x2776:
        pcVar10 = *(char **)param_3;
        if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\0')) {
          pcVar10 = "identity";
        }
        uVar4 = setstropt(param_1 + 0x4c0,pcVar10);
        return uVar4;
      case 0x2777:
        *(undefined8 *)(param_1 + 0x408) = *(undefined8 *)param_3;
        return 0;
      case 0x2778:
        *(undefined8 *)(param_1 + 0x410) = *(undefined8 *)param_3;
        return 0;
      case 0x2786:
        uVar4 = setstropt(param_1 + 0x500,*(undefined8 *)param_3);
        return uVar4;
      case 0x2793:
        *(undefined8 *)(param_1 + 0x2c0) = *(undefined8 *)param_3;
        return 0;
      case 0x2796:
        uVar4 = setstropt(param_1 + 0x4c8,*(undefined8 *)param_3);
        return uVar4;
      case 0x2797:
        lVar11 = *(longlong *)param_3;
        if (lVar11 == 0) {
          return 0;
        }
        iVar6 = Curl_strcasecompare(lVar11,&DAT_145b2bc84);
        if (iVar6 != 0) {
          Curl_share_lock(param_1,2,2);
          Curl_cookie_clearall(*(undefined8 *)(param_1 + 0x6a0));
          Curl_share_unlock(param_1,2);
          return 0;
        }
        iVar6 = Curl_strcasecompare(lVar11,&DAT_145b69c00);
        if (iVar6 != 0) {
          Curl_share_lock(param_1,2,2);
          Curl_cookie_clearsess(*(undefined8 *)(param_1 + 0x6a0));
          Curl_share_unlock(param_1,2);
          return 0;
        }
        iVar6 = Curl_strcasecompare(lVar11,"FLUSH");
        if (iVar6 != 0) {
          FUN_1436aaf80(param_1,0);
          return 0;
        }
        iVar6 = Curl_strcasecompare(lVar11,"RELOAD");
        if (iVar6 != 0) {
          FUN_1436aad20(param_1);
          return 0;
        }
        if (*(longlong *)(param_1 + 0x6a0) == 0) {
          uVar7 = FUN_1436aaaa0(param_1,0,0,1);
          *(undefined8 *)(param_1 + 0x6a0) = uVar7;
        }
        lVar11 = (*(code *)PTR__strdup_1467dcc70)(lVar11);
        if ((lVar11 != 0) && (*(longlong *)(param_1 + 0x6a0) != 0)) {
          Curl_share_lock(param_1,2,2);
          iVar6 = Curl_raw_nequal("Set-Cookie:",lVar11,0xb);
          lVar12 = lVar11;
          if (iVar6 != 0) {
            lVar12 = lVar11 + 0xb;
          }
          FUN_1436a9b70(param_1,*(undefined8 *)(param_1 + 0x6a0),iVar6 != 0,lVar12,0,0);
          Curl_share_unlock(param_1,2);
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar11);
          return 0;
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar11);
        return 0x1b;
      case 0x27a3:
        uVar4 = setstropt(param_1 + 0x4d0,*(undefined8 *)param_3);
        return uVar4;
      case 0x27a5:
        *(undefined8 *)(param_1 + 0x270) = *(undefined8 *)param_3;
        return 0;
      case 0x27b4:
        *(undefined8 *)(param_1 + 0x280) = *(undefined8 *)param_3;
        return 0;
      case 0x27b5:
        _Src = *(void **)param_3;
        if ((_Src == (void *)0x0) || (*(longlong *)(param_1 + 0x210) == -1)) {
          uVar4 = setstropt(param_1 + 0x5e8,_Src);
        }
        else {
          if (-1 < *(longlong *)(param_1 + 0x210)) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x5e8))
            ;
            *(undefined8 *)(param_1 + 0x5e8) = 0;
            lVar11 = 1;
            if (*(longlong *)(param_1 + 0x210) != 0) {
              lVar11 = *(longlong *)(param_1 + 0x210);
            }
            _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar11);
            if (_Dst != (void *)0x0) {
              if (*(size_t *)(param_1 + 0x210) != 0) {
                _guard_xfg_dispatch_icall_nop(_Dst,_Src,*(size_t *)(param_1 + 0x210));
              }
              *(void **)(param_1 + 0x5e8) = _Dst;
              goto LAB_1436afae0;
            }
          }
          uVar4 = 0x1b;
        }
LAB_1436afae0:
        *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_1 + 0x5e8);
        *(undefined4 *)(param_1 + 0x380) = 2;
        return uVar4;
      case 0x27b8:
        *(undefined8 *)(param_1 + 0x298) = *(undefined8 *)param_3;
        return 0;
      case 0x27b9:
        uVar4 = setstropt(param_1 + 0x560,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ba:
        uVar4 = setstropt(param_1 + 0x568,*(undefined8 *)param_3);
        return uVar4;
      case 0x27bd:
        uVar4 = setstropt(param_1 + 0x570,*(undefined8 *)param_3);
        return uVar4;
      case 0x27be:
        uVar4 = setstropt(param_1 + 0x578,*(undefined8 *)param_3);
        return uVar4;
      case 0x27bf:
        uVar4 = setstropt(param_1 + 0x588,*(undefined8 *)param_3);
        return uVar4;
      case 0x27c0:
        uVar4 = setstropt(param_1 + 0x590,*(undefined8 *)param_3);
        return uVar4;
      case 0x27c1:
        uVar4 = setstropt(param_1 + 0x598,*(undefined8 *)param_3);
        return uVar4;
      case 0x27c3:
      case 0x27fb:
        uVar4 = setstropt(param_1 + 0x5b8,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ca:
        uVar4 = setstropt(param_1 + 0x5c8,*(undefined8 *)param_3);
        return uVar4;
      case 0x27cb:
        *(undefined8 *)(param_1 + 0x600) = *(undefined8 *)param_3;
        return 0;
      case 0x27ce:
        uVar4 = setstropt(param_1 + 0x5a0,*(undefined8 *)param_3);
        return uVar4;
      case 0x27cf:
        uVar4 = setstropt(param_1 + 0x5a8,*(undefined8 *)param_3);
        return uVar4;
      case 0x27d0:
        uVar4 = setstropt(param_1 + 0x5b0,*(undefined8 *)param_3);
        return uVar4;
      case 0x27d3:
        *(undefined8 *)(param_1 + 0x1d8) = *(undefined8 *)param_3;
        return 0;
      case 0x27d9:
        *(undefined8 *)(param_1 + 0x8a70) = *(undefined8 *)param_3;
        return 0;
      case 0x27da:
        *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)param_3;
        return 0;
      case 0x27db:
        uVar7 = *(undefined8 *)param_3;
        *(undefined8 *)(param_1 + 0x360) = uVar7;
        *(undefined8 *)(param_1 + 0x698) = uVar7;
        return 0;
      case 0x27e1:
        *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)param_3;
        return 0;
      case 0x27e3:
        uVar4 = FUN_1436abe70(param_1,*(undefined8 *)param_3);
        return uVar4;
      case 0x27e9:
        uVar4 = setstropt(param_1 + 0x5d0,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ec:
        uVar4 = setstropt(param_1 + 0x5d8,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ed:
        uVar4 = FUN_1436abe70(param_1,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ee:
        uVar4 = FUN_1436abe70(param_1,*(undefined8 *)param_3);
        return uVar4;
      case 0x27ef:
        uVar4 = FUN_1436abe70(param_1,*(undefined8 *)param_3);
        return uVar4;
      case 0x27f0:
        uVar4 = setstropt(param_1 + 0x580,*(undefined8 *)param_3);
        return uVar4;
      case 0x27f4:
        *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)param_3;
        return 0;
      case 0x27fc:
        uVar4 = setstropt(param_1 + 0x5c0,*(undefined8 *)param_3);
        return uVar4;
      case 0x27fe:
        uVar4 = setstropt(param_1 + 0x4b0,*(undefined8 *)param_3);
        return uVar4;
      case 0x2800:
      case 0x2801:
        goto switchD_1436af0d9_caseD_ef;
      case 0x2803:
        *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)param_3;
        return 0;
      }
    }
    else if (param_2 < 0x75a4) {
      if (param_2 == 0x75a3) {
        *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)param_3;
        return 0;
      }
      switch(param_2) {
      case 0x4e2c:
        lVar11 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x238) = lVar11;
        pcVar1 = fread_exref;
        if (lVar11 == 0) {
          *(undefined4 *)(param_1 + 0x240) = 0;
          *(code **)(param_1 + 0x238) = pcVar1;
          return 0;
        }
        *(undefined4 *)(param_1 + 0x240) = 1;
        return 0;
      case 0x4e58:
        lVar11 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x248) = lVar11;
        *(bool *)(param_1 + 0x6d8) = lVar11 != 0;
        return 0;
      case 0x4e6f:
        *(undefined8 *)(param_1 + 0x228) = *(undefined8 *)param_3;
        return 0;
      case 0x4e7e:
        *(undefined8 *)(param_1 + 600) = *(undefined8 *)param_3;
        return 0;
      case 0x4e8c:
        goto switchD_1436af0d9_caseD_f4;
      case 0x4ea2:
        *(undefined8 *)(param_1 + 0x260) = *(undefined8 *)param_3;
        return 0;
      case 0x4eae:
        *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)param_3;
        return 0;
      case 0x4eaf:
        *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)param_3;
        return 0;
      case 0x4eb0:
        *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)param_3;
        return 0;
      case 0x4eb4:
        *(undefined8 *)(param_1 + 0x268) = *(undefined8 *)param_3;
        return 0;
      case 0x4ec3:
        *(undefined8 *)(param_1 + 0x278) = *(undefined8 *)param_3;
        return 0;
      case 0x4ec7:
        *(undefined8 *)(param_1 + 0x208) = *(undefined8 *)param_3;
        return 0;
      case 0x4ee4:
        *(undefined8 *)(param_1 + 0x230) = *(undefined8 *)param_3;
        return 0;
      case 0x4ee6:
        *(undefined8 *)(param_1 + 0x618) = *(undefined8 *)param_3;
        return 0;
      case 0x4ee7:
        *(undefined8 *)(param_1 + 0x620) = *(undefined8 *)param_3;
        return 0;
      case 0x4ee8:
        *(undefined8 *)(param_1 + 0x628) = *(undefined8 *)param_3;
        return 0;
      case 0x4ef0:
        *(undefined8 *)(param_1 + 0x288) = *(undefined8 *)param_3;
        return 0;
      case 0x4efb:
        lVar11 = *(longlong *)param_3;
        *(longlong *)(param_1 + 0x250) = lVar11;
        *(bool *)(param_1 + 0x6d8) = lVar11 != 0;
        return 0;
      }
    }
    else {
      if (param_2 == 0x75a4) {
        *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)param_3;
        return 0;
      }
      if (param_2 == 0x75a5) {
        *(undefined8 *)(param_1 + 0x420) = *(undefined8 *)param_3;
        return 0;
      }
      if (param_2 == 0x75a8) {
        lVar11 = *(longlong *)param_3;
        if ((*(longlong *)(param_1 + 0x210) < lVar11) &&
           (*(longlong *)(param_1 + 0x200) == *(longlong *)(param_1 + 0x5e8))) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(longlong *)(param_1 + 0x5e8));
          *(undefined8 *)(param_1 + 0x5e8) = 0;
          *(undefined8 *)(param_1 + 0x200) = 0;
          *(longlong *)(param_1 + 0x210) = lVar11;
          return 0;
        }
        goto LAB_1436af382;
      }
      if (param_2 == 0x75c1) {
        *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)param_3;
        return 0;
      }
      if (param_2 == 0x75c2) {
        *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)param_3;
        return 0;
      }
    }
    goto switchD_1436af0d9_caseD_4;
  }
  if (param_2 == 0x2711) {
    *(undefined8 *)(param_1 + 0x1c0) = *(undefined8 *)param_3;
    return 0;
  }
  switch(param_2) {
  case 3:
    *(uint *)(param_1 + 0x1e0) = *param_3;
    break;
  default:
    goto switchD_1436af0d9_caseD_4;
  case 0xd:
    *(uint *)(param_1 + 0x2c8) = *param_3 * 1000;
    break;
  case 0xe:
    *(longlong *)(param_1 + 0x2e0) = (longlong)(int)*param_3;
    break;
  case 0x13:
    *(uint *)(param_1 + 0x2e8) = *param_3;
    break;
  case 0x14:
    *(uint *)(param_1 + 0x2ec) = *param_3;
    break;
  case 0x15:
    *(longlong *)(param_1 + 0x300) = (longlong)(int)*param_3;
    break;
  case 0x1b:
    *(bool *)(param_1 + 0x322) = *param_3 != 0;
    break;
  case 0x20:
    *(uint *)(param_1 + 0x388) = *param_3;
    break;
  case 0x21:
    *(uint *)(param_1 + 0x370) = *param_3;
    break;
  case 0x22:
    *(longlong *)(param_1 + 0x378) = (longlong)(int)*param_3;
    break;
  case 0x29:
    *(bool *)(param_1 + 0x458) = *param_3 != 0;
    break;
  case 0x2a:
    *(bool *)(param_1 + 0x44c) = *param_3 != 0;
    break;
  case 0x2b:
    uVar4 = *param_3;
    *(bool *)(param_1 + 0x447) = uVar4 != 0;
    if (uVar4 != 0) {
      *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) | 0x10;
    }
    else {
      *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) & 0xffffffef;
    }
    break;
  case 0x2c:
    *(bool *)(param_1 + 0x44f) = *param_3 != 0;
    break;
  case 0x2d:
    *(bool *)(param_1 + 0x448) = *param_3 != 0;
    break;
  case 0x2e:
  case 0x36:
    uVar4 = *param_3;
    *(bool *)(param_1 + 0x450) = uVar4 != 0;
    if (uVar4 != 0) {
      *(undefined4 *)(param_1 + 0x380) = 4;
      *(undefined1 *)(param_1 + 0x44f) = 0;
      return 0;
    }
    goto LAB_1436af1bd;
  case 0x2f:
    if (*param_3 != 0) {
      *(undefined4 *)(param_1 + 0x380) = 2;
      *(undefined1 *)(param_1 + 0x44f) = 0;
      return 0;
    }
LAB_1436af1bd:
    *(undefined4 *)(param_1 + 0x380) = 1;
    break;
  case 0x30:
    *(bool *)(param_1 + 0x445) = *param_3 != 0;
    break;
  case 0x32:
    *(bool *)(param_1 + 0x444) = *param_3 != 0;
    break;
  case 0x33:
    *(uint *)(param_1 + 0x454) = *param_3;
    break;
  case 0x34:
    *(bool *)(param_1 + 0x449) = *param_3 != 0;
    break;
  case 0x35:
    *(bool *)(param_1 + 0x443) = *param_3 != 0;
    break;
  case 0x3a:
    *(bool *)(param_1 + 0x44e) = *param_3 != 0;
    break;
  case 0x3b:
    *(uint *)(param_1 + 0x1b8) = *param_3;
    break;
  case 0x3c:
    lVar11 = (longlong)(int)*param_3;
    if ((*(longlong *)(param_1 + 0x210) < lVar11) &&
       (*(longlong *)(param_1 + 0x200) == *(longlong *)(param_1 + 0x5e8))) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(longlong *)(param_1 + 0x5e8));
      *(undefined8 *)(param_1 + 0x5e8) = 0;
      *(undefined8 *)(param_1 + 0x200) = 0;
    }
LAB_1436af382:
    *(longlong *)(param_1 + 0x210) = lVar11;
    break;
  case 0x3d:
    *(bool *)(param_1 + 0x442) = *param_3 != 0;
    break;
  case 0x40:
    *(bool *)(param_1 + 0x390) = *param_3 != 0;
    break;
  case 0x44:
    *(uint *)(param_1 + 0x1f0) = *param_3;
    break;
  case 0x45:
    *(bool *)(param_1 + 0x441) = *param_3 != 0;
    break;
  case 0x47:
    *(longlong *)(param_1 + 0x650) = (longlong)(int)*param_3;
    break;
  case 0x4a:
    *(bool *)(param_1 + 0x45b) = *param_3 != 0;
    break;
  case 0x4b:
    *(bool *)(param_1 + 0x45a) = *param_3 != 0;
    break;
  case 0x4e:
    *(uint *)(param_1 + 0x2cc) = *param_3 * 1000;
    break;
  case 0x50:
    if (*param_3 != 0) {
      *(undefined2 *)(param_1 + 0x44f) = 0;
      *(undefined4 *)(param_1 + 0x380) = 1;
    }
    break;
  case 0x51:
    if (*param_3 == 1) {
      FUN_1436b5820(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
      uVar8 = 0x2b;
    }
    else {
      *(bool *)(param_1 + 0x391) = *param_3 != 0;
    }
    break;
  case 0x54:
    if ((int)*param_3 < 3) {
      *(uint *)(param_1 + 900) = *param_3;
    }
    else {
      uVar8 = 1;
    }
    break;
  case 0x55:
    *(bool *)(param_1 + 0x45c) = *param_3 != 0;
    break;
  case 0x5a:
    uVar8 = FUN_1436abe70(param_1);
    break;
  case 0x5b:
    *(bool *)(param_1 + 0x46d) = *param_3 != 0;
    break;
  case 0x5c:
    *(uint *)(param_1 + 0x3fc) = *param_3;
    break;
  case 0x60:
    *(bool *)(param_1 + 0x321) = *param_3 != 0;
    break;
  case 0x62:
    uVar4 = *param_3;
    *(uint *)(param_1 + 0x400) = uVar4;
    if (0x3ffe < uVar4 - 1) {
      *(undefined4 *)(param_1 + 0x400) = 0;
    }
    break;
  case 99:
    *(bool *)(param_1 + 0x46c) = *param_3 != 0;
    break;
  case 0x65:
    *(uint *)(param_1 + 0x3f8) = *param_3;
    break;
  case 0x69:
    *(bool *)(param_1 + 1099) = *param_3 != 0;
    break;
  case 0x6a:
    *(bool *)(param_1 + 0x45d) = *param_3 != 0;
    break;
  case 0x6b:
    uVar8 = *param_3;
    if (uVar8 == 0) {
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      return 0;
    }
    *(byte *)(param_1 + 0x895e) = (byte)(uVar8 >> 4) & 1;
    if ((uVar8 & 0x10) != 0) {
      uVar8 = uVar8 & 0xffffffef | 2;
    }
    do {
      uVar9 = uVar4 + 1;
      if (((uVar8 & 0xffffffdf) >> (uVar4 & 0x1f) & 1) != 0) {
        *(uint *)(param_1 + 0x1e4) = uVar8 & 0xffffffdf;
        return 0;
      }
      uVar4 = uVar9;
    } while ((int)uVar9 < 0x1f);
  case 0xef:
switchD_1436af0d9_caseD_ef:
    uVar8 = 4;
    break;
  case 0x6e:
    uVar4 = *param_3;
    if (uVar4 == 0) {
      *(undefined4 *)(param_1 + 0x42c) = 0;
      return 0;
    }
    if (uVar4 == 1) {
      *(undefined4 *)(param_1 + 0x42c) = 1;
      return 0;
    }
    if (uVar4 == 2) {
      *(undefined4 *)(param_1 + 0x42c) = 2;
      return 0;
    }
    goto switchD_1436af0d9_caseD_4;
  case 0x6f:
    uVar9 = *param_3;
    if (uVar9 == 0) {
      *(undefined4 *)(param_1 + 0x1e8) = 0;
    }
    else {
      *(byte *)(param_1 + 0x896e) = (byte)(uVar9 >> 4) & 1;
      if ((uVar9 & 0x10) != 0) {
        uVar9 = uVar9 & 0xffffffef | 2;
      }
      do {
        uVar8 = uVar4 + 1;
        if (((uVar9 & 0xffffffdf) >> (uVar4 & 0x1f) & 1) != 0) {
          *(uint *)(param_1 + 0x1e8) = uVar9 & 0xffffffdf;
          return 0;
        }
        uVar4 = uVar8;
      } while ((int)uVar8 < 0x1f);
      uVar8 = 4;
    }
    break;
  case 0x70:
    *(uint *)(param_1 + 0x2d4) = *param_3 * 1000;
    break;
  case 0x71:
    *(uint *)(param_1 + 0x418) = *param_3;
    break;
  case 0x72:
    *(longlong *)(param_1 + 0x420) = (longlong)(int)*param_3;
    break;
  case 0x77:
    *(uint *)(param_1 + 0x460) = *param_3;
    break;
  case 0x79:
    *(bool *)(param_1 + 0x46e) = *param_3 != 0;
    break;
  case 0x81:
    *(uint *)(param_1 + 0x464) = *param_3;
    break;
  case 0x88:
    *(bool *)(param_1 + 0x46f) = *param_3 != 0;
    break;
  case 0x89:
    *(bool *)(param_1 + 0x470) = *param_3 != 0;
    break;
  case 0x8a:
    *(uint *)(param_1 + 0x428) = *param_3;
    break;
  case 0x8b:
    uVar3 = curlx_sltous(*param_3);
    *(undefined2 *)(param_1 + 0x218) = uVar3;
    break;
  case 0x8c:
    uVar5 = curlx_sltosi(*param_3);
    *(undefined4 *)(param_1 + 0x21c) = uVar5;
    break;
  case 0x8d:
    *(bool *)(param_1 + 0x471) = *param_3 != 0;
    break;
  case 0x96:
    *(bool *)(param_1 + 0x3f0) = *param_3 != 0;
    break;
  case 0x9a:
    *(uint *)(param_1 + 0x468) = *param_3;
    break;
  case 0x9b:
    *(uint *)(param_1 + 0x2c8) = *param_3;
    break;
  case 0x9c:
    *(uint *)(param_1 + 0x2cc) = *param_3;
    break;
  case 0x9d:
    *(bool *)(param_1 + 0x478) = *param_3 == 0;
    break;
  case 0x9e:
    *(bool *)(param_1 + 0x479) = *param_3 == 0;
    break;
  case 0x9f:
    *(uint *)(param_1 + 0x47c) = *param_3;
    break;
  case 0xa0:
    *(uint *)(param_1 + 0x480) = *param_3;
    break;
  case 0xa1:
    uVar4 = curlx_sltosi(*param_3);
    *(uint *)(param_1 + 500) = uVar4 & 7;
    break;
  case 0xa6:
    if (*param_3 == 0) {
      *(undefined1 *)(param_1 + 0x484) = 0;
      return 0;
    }
    if (*param_3 == 1) {
      *(undefined1 *)(param_1 + 0x484) = 1;
      return 0;
    }
switchD_1436af0d9_caseD_4:
    uVar8 = 0x30;
    break;
  case 0xab:
    uVar5 = FUN_1436a85f0(*param_3);
    *(undefined4 *)(param_1 + 0x5f0) = uVar5;
    break;
  case 0xac:
    *(bool *)(param_1 + 0x3f1) = *param_3 != 0;
    break;
  case 0xb2:
    *(uint *)(param_1 + 0x2d8) = *param_3;
    break;
  case 0xb4:
    *(bool *)(param_1 + 0x5fc) = *param_3 != 0;
    break;
  case 0xb5:
    *(uint *)(param_1 + 0x5f4) = *param_3;
    break;
  case 0xb6:
    *(uint *)(param_1 + 0x5f8) = *param_3;
    break;
  case 0xbc:
    *(bool *)(param_1 + 0x45e) = *param_3 != 0;
    break;
  case 0xbd:
    switch(*param_3) {
    case 1:
      *(undefined4 *)(param_1 + 0x60c) = 1;
      break;
    case 2:
      *(undefined4 *)(param_1 + 0x60c) = 2;
      break;
    case 3:
      *(undefined4 *)(param_1 + 0x60c) = 3;
      break;
    case 4:
      *(undefined4 *)(param_1 + 0x60c) = 4;
      break;
    case 5:
      *(undefined4 *)(param_1 + 0x60c) = 5;
      break;
    case 6:
      *(undefined4 *)(param_1 + 0x60c) = 6;
      break;
    case 7:
      *(undefined4 *)(param_1 + 0x60c) = 7;
      break;
    case 8:
      *(undefined4 *)(param_1 + 0x60c) = 8;
      break;
    case 9:
      *(undefined4 *)(param_1 + 0x60c) = 9;
      break;
    case 10:
      *(undefined4 *)(param_1 + 0x60c) = 10;
      break;
    case 0xb:
      *(undefined4 *)(param_1 + 0x60c) = 0xb;
      break;
    default:
      *(undefined4 *)(param_1 + 0x60c) = 0;
    }
    break;
  case 0xc1:
  case 0xc2:
    *(uint *)(param_1 + 0x89f8) = *param_3;
    break;
  case 0xc5:
    *(bool *)(param_1 + 0x614) = *param_3 != 0;
    break;
  case 0xcf:
    *(bool *)(param_1 + 0x44a) = *param_3 != 0;
    break;
  case 0xd2:
    *(uint *)(param_1 + 0x638) = *param_3;
    break;
  case 0xd4:
    *(uint *)(param_1 + 0x2d0) = *param_3;
    break;
  case 0xd5:
    *(bool *)(param_1 + 0x63c) = *param_3 != 0;
    break;
  case 0xd6:
    *(uint *)(param_1 + 0x640) = *param_3;
    break;
  case 0xd7:
    *(uint *)(param_1 + 0x644) = *param_3;
    break;
  case 0xd8:
    uVar4 = *param_3;
    *(byte *)(param_1 + 0x472) = (byte)uVar4 & 1;
    *(byte *)(param_1 + 0x473) = (byte)(uVar4 >> 1) & 1;
    break;
  case 0xda:
    *(bool *)(param_1 + 0x608) = *param_3 != 0;
    break;
  case 0xe1:
    *(bool *)(param_1 + 0x658) = *param_3 != 0;
    break;
  case 0xe2:
    *(bool *)(param_1 + 0x659) = *param_3 != 0;
    break;
  case 0xe3:
    *(uint *)(param_1 + 0x65c) = *param_3;
    break;
  case 0xe5:
    *(byte *)(param_1 + 800) = (byte)*param_3 & 1;
    break;
  case 0xe8:
    cVar2 = FUN_140493780();
    if (cVar2 != '\0') {
      *(bool *)(param_1 + 0x392) = *param_3 != 0;
      return 0;
    }
  case 0xf4:
switchD_1436af0d9_caseD_f4:
    uVar8 = 4;
    break;
  case 0xe9:
    cVar2 = FUN_140493780();
    if (cVar2 != '\0') {
      *(bool *)(param_1 + 0x3f2) = *param_3 != 0;
      return 0;
    }
    goto switchD_1436af0d9_caseD_f4;
  case 0xea:
    *(bool *)(param_1 + 0x65a) = *param_3 != 0;
    break;
  case 0xed:
    *(bool *)(param_1 + 0x65b) = *param_3 != 0;
    break;
  case 0xf2:
    *(bool *)(param_1 + 0x2dc) = *param_3 != 0;
  }
  return uVar8;
}



// FUNCTION 1436b0cf0 FUN_1436b0cf0 body=327 status=ok
// SIG undefined FUN_1436b0cf0(void)

undefined8 FUN_1436b0cf0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  FUN_1436bee30(lVar1,3);
  if ((*(byte *)(param_1[0x7d] + 0x78) & 0x10) != 0) {
    *param_2 = 1;
    return 0;
  }
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  if (*(longlong *)(lVar1 + 0x558) != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x83]);
    param_1[0x83] = 0;
    lVar2 = curl_maprintf("User-Agent: %s\r\n",*(undefined8 *)(lVar1 + 0x558));
    param_1[0x83] = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
  }
  *(undefined4 *)(lVar1 + 0xc0) = 0;
  uVar3 = curlx_tvnow();
  *(undefined8 *)((longlong)param_1 + 0x1bc) = uVar3;
  if (param_1[0x3a] == -1) {
    *(undefined1 *)((longlong)param_1 + 0x3c4) = 0;
    uVar3 = FUN_1436b6250(param_1,param_1[10]);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
  }
  else {
    FUN_1436bee30(lVar1,4);
    FUN_1436bee30(lVar1,5);
    *(undefined1 *)((longlong)param_1 + 0x3c4) = 1;
    *param_2 = 1;
    FUN_1436b6d00(param_1,param_1[0x3a]);
    FUN_1436b0e40(param_1);
  }
  uVar3 = curlx_tvnow();
  *(undefined8 *)((longlong)param_1 + 0x1bc) = uVar3;
  return 0;
}



// FUNCTION 1436b0e40 FUN_1436b0e40 body=83 status=ok
// SIG undefined FUN_1436b0e40(void)

void FUN_1436b0e40(longlong *param_1)

{
  longlong lVar1;
  
  if (*(char *)(*param_1 + 0x458) != '\0') {
    if (*(char *)((longlong)param_1 + 0x3bd) == '\0') {
      lVar1 = param_1[0x18];
    }
    else {
      lVar1 = param_1[0x20];
    }
    FUN_1436b58e0(*param_1,"Connected to %s (%s) port %ld (#%ld)\n",lVar1,param_1 + 0xe,
                  (int)param_1[0x21],*(undefined4 *)((longlong)param_1 + 0x4c));
  }
  return;
}



// FUNCTION 1436b0ea0 FUN_1436b0ea0 body=107 status=ok
// SIG undefined FUN_1436b0ea0(void)

undefined8 FUN_1436b0ea0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(byte *)(*(longlong *)(param_2 + 1000) + 0x74) & 3) == 0) {
    return 0;
  }
  cVar1 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),1);
  if (((cVar1 == '\0') || (*(int *)(param_1 + 900) == 1)) ||
     ((*(int *)(param_1 + 0x380) - 1U & 0xfffffffb) != 0)) {
    cVar1 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),2);
    if (cVar1 == '\0') {
      return 0;
    }
    if (*(int *)(param_1 + 900) < 3) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1436b0f10 FUN_1436b0f10 body=613 status=ok
// SIG undefined FUN_1436b0f10(void)

longlong * FUN_1436b0f10(longlong param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)(*(code *)PTR_calloc_1467dcc78)(1,0x828);
  if (plVar3 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar3[0x7d] = (longlong)&PTR_s_<no_protocol>_145b69b70;
  plVar3[0x3a] = -1;
  plVar3[0x3b] = -1;
  plVar3[0x3c] = -1;
  plVar3[0x3d] = -1;
  *(undefined4 *)((longlong)plVar3 + 0x4c) = 0xffffffff;
  plVar3[0x21] = -1;
  *(undefined1 *)((longlong)plVar3 + 0x3b9) = 1;
  uVar4 = curlx_tvnow();
  *(undefined8 *)((longlong)plVar3 + 0x1c4) = uVar4;
  *plVar3 = param_1;
  *(undefined4 *)(plVar3 + 0x36) = *(undefined4 *)(param_1 + 0x3f8);
  if ((*(char **)(param_1 + 0x508) == (char *)0x0) || (**(char **)(param_1 + 0x508) == '\0')) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)((longlong)plVar3 + 0x3bd) = cVar2;
  if ((cVar2 == '\0') || (1 < *(uint *)(plVar3 + 0x36))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)((longlong)plVar3 + 0x3be) = uVar1;
  *(bool *)(plVar3 + 0x78) = *(longlong *)(param_1 + 0x588) != 0;
  *(undefined1 *)(plVar3 + 0x79) = *(undefined1 *)(param_1 + 0x442);
  *(bool *)((longlong)plVar3 + 0x3bf) = *(longlong *)(param_1 + 0x570) != 0;
  *(undefined1 *)((longlong)plVar3 + 0x3cb) = *(undefined1 *)(param_1 + 0x45c);
  *(undefined1 *)((longlong)plVar3 + 0x3cc) = *(undefined1 *)(param_1 + 0x45d);
  *(undefined1 *)((longlong)plVar3 + 0x7fc) = *(undefined1 *)(param_1 + 0x390);
  *(undefined1 *)((longlong)plVar3 + 0x7fd) = *(undefined1 *)(param_1 + 0x391);
  *(undefined4 *)(plVar3 + 0x7f) = *(undefined4 *)(param_1 + 0x418);
  cVar2 = FUN_1436a4ab0(*(undefined8 *)(param_1 + 0x78),1);
  if ((cVar2 != '\0') && (plVar3[0x9b] == 0)) {
    lVar5 = (*(code *)PTR_calloc_1467dcc78)(0x4000,1);
    plVar3[0x9b] = lVar5;
    if (lVar5 == 0) goto LAB_1436b1119;
  }
  lVar5 = Curl_llist_alloc(FUN_140447710);
  plVar3[0x99] = lVar5;
  lVar5 = Curl_llist_alloc(FUN_140447710);
  plVar3[0x9a] = lVar5;
  if ((plVar3[0x99] != 0) && (lVar5 != 0)) {
    if (*(longlong *)(param_1 + 0x4b8) != 0) {
      lVar5 = (*(code *)PTR__strdup_1467dcc70)();
      plVar3[0x100] = lVar5;
      if (lVar5 == 0) goto LAB_1436b1119;
    }
    *(undefined4 *)((longlong)plVar3 + 0x80c) = *(undefined4 *)(param_1 + 0x21c);
    *(undefined2 *)(plVar3 + 0x101) = *(undefined2 *)(param_1 + 0x218);
    plVar3[7] = *(longlong *)(param_1 + 0x288);
    plVar3[8] = *(longlong *)(param_1 + 0x290);
    return plVar3;
  }
LAB_1436b1119:
  Curl_llist_destroy(plVar3[0x99],0);
  Curl_llist_destroy(plVar3[0x9a],0);
  plVar3[0x99] = 0;
  plVar3[0x9a] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar3[0x9b]);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar3[0x100]);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar3);
  return (longlong *)0x0;
}



// FUNCTION 1436b1180 FUN_1436b1180 body=16 status=ok
// SIG undefined FUN_1436b1180(void)

undefined8 FUN_1436b1180(void)

{
  FUN_1436b2200();
  return 0;
}



// FUNCTION 1436b1190 check_noproxy body=360 status=ok
// SIG undefined check_noproxy(void)

undefined8 check_noproxy(char *param_1,char *param_2)

{
  ulonglong uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    iVar2 = Curl_strcasecompare(&DAT_145af6c98);
    if (iVar2 != 0) {
      return 1;
    }
    uVar6 = 0xffffffffffffffff;
    do {
      uVar6 = uVar6 + 1;
    } while (param_2[uVar6] != '\0');
    pcVar3 = strchr(param_1,0x3a);
    if (pcVar3 == (char *)0x0) {
      pcVar3 = &DAT_ffffffffffffffff;
      do {
        pcVar3 = pcVar3 + 1;
      } while (param_1[(longlong)pcVar3] != '\0');
    }
    else {
      pcVar3 = pcVar3 + -(longlong)param_1;
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      if (uVar6 == 0) goto LAB_1436b1251;
LAB_1436b1230:
      do {
        pcVar4 = strchr(", ",(int)param_2[uVar5]);
        if (pcVar4 != (char *)0x0) {
          uVar5 = uVar5 + 1;
          if (uVar5 < uVar6) goto LAB_1436b1230;
        }
LAB_1436b1251:
        uVar1 = uVar5;
        if (uVar5 == uVar6) {
          return 0;
        }
        while ((uVar1 < uVar6 && (pcVar4 = strchr(", ",(int)param_2[uVar1]), pcVar4 == (char *)0x0))
              ) {
          uVar1 = uVar1 + 1;
        }
        uVar7 = uVar5 + 1;
        if (param_2[uVar5] != '.') {
          uVar7 = uVar5;
        }
        if ((char *)(uVar1 - uVar7) <= pcVar3) {
          iVar2 = Curl_raw_nequal(param_2 + uVar7,pcVar3 + (uVar7 - uVar1) + (longlong)param_1);
          if (iVar2 != 0) {
            if ((char *)(uVar1 - uVar7) == pcVar3) {
              return 1;
            }
            if ((pcVar3 + (uVar7 - uVar1) + (longlong)param_1)[-1] == '.') {
              return 1;
            }
          }
        }
        uVar5 = uVar1 + 1;
      } while (uVar5 < uVar6);
    }
  }
  return 0;
}



// FUNCTION 1436b1300 FUN_1436b1300 body=658 status=ok
// SIG undefined FUN_1436b1300(void)

void FUN_1436b1300(longlong param_1)

{
  if (param_1 != 0) {
    FUN_1436abaa0();
    thunk_FUN_1436c19a0(param_1,0);
    thunk_FUN_1436c19a0(param_1,1);
    if (*(longlong *)(param_1 + 0x1d8) != -1) {
      FUN_1436b61e0(param_1);
    }
    if (*(longlong *)(param_1 + 0x1d0) != -1) {
      FUN_1436b61e0(param_1);
    }
    if (*(longlong *)(param_1 + 0x1e0) != -1) {
      FUN_1436b61e0(param_1);
    }
    if (*(longlong *)(param_1 + 0x1e8) != -1) {
      FUN_1436b61e0(param_1);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x198));
    *(undefined8 *)(param_1 + 0x198) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x1a0));
    *(undefined8 *)(param_1 + 0x1a0) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x1a8));
    *(undefined8 *)(param_1 + 0x1a8) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x410));
    *(undefined8 *)(param_1 + 0x410) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x418));
    *(undefined8 *)(param_1 + 0x418) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x428));
    *(undefined8 *)(param_1 + 0x428) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x420));
    *(undefined8 *)(param_1 + 0x420) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x458));
    *(undefined8 *)(param_1 + 0x458) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x430));
    *(undefined8 *)(param_1 + 0x430) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x438));
    *(undefined8 *)(param_1 + 0x438) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x440));
    *(undefined8 *)(param_1 + 0x440) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x448));
    *(undefined8 *)(param_1 + 0x448) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x450));
    *(undefined8 *)(param_1 + 0x450) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x708));
    *(undefined8 *)(param_1 + 0x708) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0xa8));
    *(undefined8 *)(param_1 + 0xa8) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 200));
    *(undefined8 *)(param_1 + 200) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0xe8));
    *(undefined8 *)(param_1 + 0xe8) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x4d8));
    *(undefined8 *)(param_1 + 0x4d8) = 0;
    FUN_1436b15a0(param_1);
    Curl_llist_destroy(*(undefined8 *)(param_1 + 0x4c8),0);
    Curl_llist_destroy(*(undefined8 *)(param_1 + 0x4d0),0);
    *(undefined8 *)(param_1 + 0x4c8) = 0;
    *(undefined8 *)(param_1 + 0x4d0) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x800));
    *(undefined8 *)(param_1 + 0x800) = 0;
    FUN_1436aced0(param_1 + 0x348);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return;
}



// FUNCTION 1436b15a0 FUN_1436b15a0 body=118 status=ok
// SIG undefined FUN_1436b15a0(void)

void FUN_1436b15a0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x218) != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
    *(undefined8 *)(param_1 + 0x218) = 0;
    *(undefined8 *)(param_1 + 0x220) = 0;
    *(undefined8 *)(param_1 + 0x228) = 0;
    *(undefined8 *)(param_1 + 0x230) = 0;
  }
  if (*(longlong *)(param_1 + 0x238) != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
  }
  return;
}



// FUNCTION 1436b1620 FUN_1436b1620 body=2679 status=ok
// SIG undefined FUN_1436b1620(void)

int FUN_1436b1620(longlong param_1,undefined8 *param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  longlong *plVar13;
  int iVar14;
  ulonglong uVar15;
  bool bVar16;
  char local_res8 [8];
  undefined8 *local_res10;
  undefined1 *local_res18;
  char local_res20 [8];
  undefined4 uVar17;
  char local_78 [8];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong *local_58;
  ulonglong local_50;
  
  pcVar12 = (char *)0x0;
  local_58 = (longlong *)0x0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_res8[0] = '\0';
  local_res20[0] = '\0';
  local_78[0] = '\0';
  local_res10 = param_2;
  local_res18 = param_3;
  uVar4 = Curl_multi_max_host_connections(*(undefined8 *)(param_1 + 0x78));
  uVar5 = Curl_multi_max_total_connections(*(undefined8 *)(param_1 + 0x78));
  *param_3 = 0;
  local_50 = uVar5;
  if (*(longlong *)(param_1 + 0x670) == 0) {
    iVar14 = 3;
    goto LAB_1436b1745;
  }
  plVar6 = (longlong *)FUN_1436b0f10(param_1);
  if (plVar6 != (longlong *)0x0) {
    *param_2 = plVar6;
    uVar15 = 0xffffffffffffffff;
    do {
      uVar15 = uVar15 + 1;
    } while (*(char *)(*(longlong *)(param_1 + 0x670) + uVar15) != '\0');
    if (uVar15 < 0x100) {
      uVar15 = 0x100;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89d0));
    *(undefined8 *)(param_1 + 0x89d0) = 0;
    *(undefined8 *)(param_1 + 0x89d8) = 0;
    lVar7 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar15 + 2);
    *(longlong *)(param_1 + 0x89d0) = lVar7;
    if (lVar7 != 0) {
      *(longlong *)(param_1 + 0x89d8) = lVar7;
      puVar8 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar15 + 2);
      plVar6[0x15] = (longlong)puVar8;
      if (puVar8 == (undefined1 *)0x0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89d0));
        *(undefined8 *)(param_1 + 0x89d0) = 0;
        *(undefined8 *)(param_1 + 0x89d8) = 0;
      }
      else {
        plVar6[0x17] = (longlong)puVar8;
        *puVar8 = 0;
        local_68 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
        local_70 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
        local_60 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
        if (((local_68 != 0) && (local_70 != 0)) && (local_60 != 0)) {
          plVar13 = &local_60;
          iVar14 = FUN_1436b36a0(param_1,plVar6,local_res8,&local_68,&local_70,plVar13);
          uVar17 = (undefined4)((ulonglong)plVar13 >> 0x20);
          if (iVar14 != 0) goto LAB_1436b1745;
          if (local_res8[0] != '\0') {
            pbVar9 = (byte *)curl_maprintf("%s://%s",*(undefined8 *)plVar6[0x7d],
                                           *(undefined8 *)(param_1 + 0x670));
            if (pbVar9 == (byte *)0x0) goto LAB_1436b1740;
            bVar2 = *pbVar9;
            pbVar1 = pbVar9;
            while (uVar17 = (undefined4)((ulonglong)plVar13 >> 0x20), bVar2 != 0x3a) {
              iVar14 = tolower((uint)*pbVar1);
              *pbVar1 = (byte)iVar14;
              pbVar1 = pbVar1 + 1;
              bVar2 = *pbVar1;
            }
            if (*(char *)(param_1 + 0x678) != '\0') {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)
                        (*(undefined8 *)(param_1 + 0x670));
              *(undefined8 *)(param_1 + 0x670) = 0;
              *(undefined1 *)(param_1 + 0x678) = 0;
            }
            *(byte **)(param_1 + 0x670) = pbVar9;
            *(undefined1 *)(param_1 + 0x678) = 1;
            uVar5 = local_50;
          }
          if (((*(byte *)(plVar6[0x7e] + 0x78) & 0x40) != 0) &&
             (pcVar10 = strchr(*(char **)(*plVar6 + 0x89d8),0x3f), pcVar10 != (char *)0x0)) {
            *pcVar10 = '\0';
          }
          if (*(longlong *)(param_1 + 0x5d8) != 0) {
            lVar7 = (*(code *)PTR__strdup_1467dcc70)();
            plVar6[0x33] = lVar7;
            if (lVar7 == 0) goto LAB_1436b1740;
          }
          if (((char)plVar6[0x78] != '\0') && (iVar14 = FUN_1436b3140(param_1,plVar6), iVar14 != 0))
          goto LAB_1436b1745;
          pcVar10 = pcVar12;
          if ((*(longlong *)(param_1 + 0x508) != 0) &&
             (pcVar10 = (char *)(*(code *)PTR__strdup_1467dcc70)(), pcVar10 == (char *)0x0)) {
            FUN_1436b5820(param_1,"memory shortage");
            goto LAB_1436b1740;
          }
          if ((*(longlong *)(param_1 + 0x598) == 0) ||
             (cVar3 = check_noproxy(plVar6[0x17]), cVar3 == '\0')) {
            if ((pcVar10 == (char *)0x0) &&
               (pcVar10 = (char *)FUN_1436b20a0(plVar6), pcVar10 == (char *)0x0))
            goto LAB_1436b19f5;
            if ((*pcVar10 == '\0') || ((*(byte *)(plVar6[0x7d] + 0x78) & 0x10) != 0))
            goto LAB_1436b19e9;
            iVar14 = FUN_1436b2d00(param_1,plVar6,pcVar10);
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar10);
            if (iVar14 != 0) goto LAB_1436b1745;
            if (*(uint *)(plVar6 + 0x36) < 2) {
              if (((*(byte *)(plVar6[0x7d] + 0x74) & 3) == 0) && ((char)plVar6[0x79] == '\0')) {
                plVar6[0x7d] = (longlong)&PTR_DAT_145b6af50;
              }
              *(undefined1 *)((longlong)plVar6 + 0x3be) = 1;
              *(undefined1 *)((longlong)plVar6 + 0x3bd) = 1;
            }
            else {
              *(undefined1 *)((longlong)plVar6 + 0x3be) = 0;
              *(undefined1 *)(plVar6 + 0x79) = 0;
              *(undefined1 *)((longlong)plVar6 + 0x3bd) = 1;
            }
          }
          else {
LAB_1436b19e9:
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar10);
LAB_1436b19f5:
            *(undefined2 *)((longlong)plVar6 + 0x3bd) = 0;
            *(undefined1 *)(plVar6 + 0x78) = 0;
            *(undefined1 *)(plVar6 + 0x79) = 0;
          }
          if (((*(byte *)(plVar6[0x7e] + 0x78) & 1) != 0) &&
             (*(char *)((longlong)plVar6 + 0x3be) != '\0')) {
            *(undefined1 *)(plVar6 + 0x79) = 1;
          }
          iVar14 = FUN_1436b3250(param_1,plVar6);
          if (iVar14 != 0) goto LAB_1436b1745;
          if (*(longlong *)(param_1 + 0x570) != 0) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_68);
            local_68 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x570));
            if (local_68 == 0) goto LAB_1436b1740;
          }
          if (*(longlong *)(param_1 + 0x578) != 0) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_70);
            local_70 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x578));
            if (local_70 == 0) goto LAB_1436b1740;
          }
          if (*(longlong *)(param_1 + 0x580) != 0) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_60);
            local_60 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x580));
            if (local_60 == 0) goto LAB_1436b1740;
          }
          *(undefined1 *)((longlong)plVar6 + 0x3cd) = 0;
          if (*(int *)(param_1 + 0x454) != 0) {
            iVar14 = FUN_1436d55c0(plVar6[0x17],&local_68,&local_70,*(undefined8 *)(param_1 + 0x500)
                                  );
            if (iVar14 < 1) {
              if (iVar14 < 0) goto LAB_1436b1740;
              *(undefined1 *)((longlong)plVar6 + 0x3cd) = 1;
              *(undefined1 *)((longlong)plVar6 + 0x3bf) = 1;
            }
            else {
              FUN_1436b58e0(param_1,"Couldn\'t find host %s in the _netrc file; using defaults\n",
                            plVar6[0x17]);
            }
          }
          iVar14 = FUN_1436b4180(plVar6,local_68,local_70,local_60);
          if ((iVar14 != 0) ||
             (iVar14 = FUN_1436b2870(param_1,plVar6,*(undefined8 *)(param_1 + 0x368)), iVar14 != 0))
          goto LAB_1436b1745;
          FUN_1436b2410(param_1,plVar6,plVar6 + 0x15);
          if (*(char *)((longlong)plVar6 + 0x3bb) != '\0') {
            FUN_1436b2410(param_1,plVar6,plVar6 + 0x19);
          }
          if (((char *)plVar6[0x1f] != (char *)0x0) && (*(char *)plVar6[0x1f] != '\0')) {
            FUN_1436b2410(param_1,plVar6,plVar6 + 0x1d);
          }
          if ((*(char *)((longlong)plVar6 + 0x3bb) != '\0') &&
             (iVar14 = Curl_strcasecompare(plVar6[0x1b],plVar6[0x17]), iVar14 != 0)) {
            *(undefined1 *)((longlong)plVar6 + 0x3bb) = 0;
          }
          if ((*(char *)((longlong)plVar6 + 0x3bc) != '\0') &&
             ((int)plVar6[0x22] == *(int *)((longlong)plVar6 + 0x10c))) {
            *(undefined1 *)((longlong)plVar6 + 0x3bc) = 0;
          }
          if (((*(char *)((longlong)plVar6 + 0x3bb) != '\0') ||
              (*(char *)((longlong)plVar6 + 0x3bc) != '\0')) &&
             (*(char *)((longlong)plVar6 + 0x3be) != '\0')) {
            *(undefined1 *)(plVar6 + 0x79) = 1;
          }
          iVar14 = FUN_1436b43a0(plVar6);
          if (iVar14 != 0) goto LAB_1436b1745;
          plVar6[0x3f] = (longlong)FUN_1436b5b40;
          plVar6[0x41] = (longlong)FUN_1436b5c00;
          plVar6[0x40] = (longlong)FUN_1436b5b40;
          plVar6[0x42] = (longlong)FUN_1436b5c00;
          *(undefined1 *)((longlong)plVar6 + 0x3d4) = *(undefined1 *)(param_1 + 0x648);
          if ((*(byte *)(plVar6[0x7d] + 0x78) & 0x10) != 0) {
            iVar14 = (**(code **)(plVar6[0x7d] + 0x28))(plVar6,&local_res18);
            if (iVar14 == 0) {
              *plVar6 = param_1;
              *(undefined1 *)((longlong)plVar6 + 0x3c4) = 1;
              FUN_1436be840(*(undefined8 *)(param_1 + 0x7b8),plVar6);
              iVar14 = FUN_1436b4450(param_1);
              if (iVar14 != 0) {
                (**(code **)(plVar6[0x7d] + 0x18))(plVar6,iVar14,0);
                goto LAB_1436b1745;
              }
              FUN_1436b8d40(plVar6,0xffffffff,0xffffffffffffffff,0,0,CONCAT44(uVar17,0xffffffff),0);
            }
            FUN_1436aeab0(param_1,plVar6);
            goto LAB_1436b1745;
          }
          *(undefined8 *)(param_1 + 0x398) = *(undefined8 *)(param_1 + 0x528);
          *(undefined8 *)(param_1 + 0x3a0) = *(undefined8 *)(param_1 + 0x530);
          *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_1 + 0x560);
          *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_1 + 0x568);
          *(undefined8 *)(param_1 + 0x3c0) = *(undefined8 *)(param_1 + 0x550);
          *(undefined8 *)(param_1 + 0x3c8) = *(undefined8 *)(param_1 + 0x548);
          *(undefined8 *)(param_1 + 0x3d0) = *(undefined8 *)(param_1 + 0x540);
          *(undefined8 *)(param_1 + 0x3b8) = *(undefined8 *)(param_1 + 0x488);
          cVar3 = FUN_1436acd70(param_1 + 0x388,plVar6 + 0x69);
          if (cVar3 == '\0') goto LAB_1436b1740;
          uVar11 = curlx_tvnow();
          iVar14 = curlx_tvdiff(uVar11,*(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x3c));
          if (999 < iVar14) {
            Curl_conncache_foreach(*(undefined8 *)(param_1 + 0x7b8),param_1,FUN_1436b1180);
            *(undefined8 *)(*(longlong *)(param_1 + 0x7b8) + 0x3c) = uVar11;
          }
          if (((*(char *)(param_1 + 0x45b) == '\0') || (*(char *)(param_1 + 0x87f8) != '\0')) &&
             (cVar3 = FUN_1436adae0(param_1,plVar6,&local_58,local_res20,local_78),
             plVar13 = local_58, cVar3 != '\0')) {
            if (((local_res20[0] == '\0') &&
                (cVar3 = FUN_1436b0ea0(param_1,local_58), cVar3 != '\0')) &&
               ((*(longlong *)(plVar13[0x9a] + 0x18) + *(longlong *)(plVar13[0x99] + 0x18) != 0 &&
                ((FUN_1436b58e0(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                                *(undefined4 *)((longlong)plVar13 + 0x4c)),
                 *(ulonglong *)(plVar13[0x103] + 8) < uVar4 &&
                 (*(ulonglong *)(*(longlong *)(param_1 + 0x7b8) + 0x30) < uVar5)))))) {
              FUN_1436b58e0(param_1,"We can reuse, but we want a new connection anyway\n");
              goto LAB_1436b1e64;
            }
            *(undefined1 *)(plVar13 + 9) = 1;
            FUN_1436b3ef0(plVar6,plVar13);
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar6);
            *local_res10 = plVar13;
            if (plVar13[0x1f] == 0) {
              lVar7 = plVar13[0x18];
            }
            else {
              lVar7 = plVar13[0x20];
            }
            pcVar12 = "host";
            if (*(char *)((longlong)plVar13 + 0x3bd) != '\0') {
              pcVar12 = "proxy";
            }
            FUN_1436b58e0(param_1,"Re-using existing connection! (#%ld) with %s %s\n",
                          *(undefined4 *)((longlong)plVar13 + 0x4c),pcVar12,lVar7);
LAB_1436b1ff9:
            *(undefined1 *)(plVar13 + 9) = 1;
            FUN_1436aeab0(param_1,plVar13);
            iVar14 = FUN_1436b4450(param_1);
            if (iVar14 == 0) {
              plVar13[0x9e] = *(longlong *)(param_1 + 0x208);
              plVar13[0x9f] = *(longlong *)(param_1 + 0x298);
              iVar14 = FUN_1436b3da0(param_1,plVar13,local_res18);
            }
          }
          else {
LAB_1436b1e64:
            if ((*(uint *)(plVar6[0x7d] + 0x78) & 0x100) != 0) {
              if (*(char *)(param_1 + 0x659) != '\0') {
                *(undefined1 *)((longlong)plVar6 + 0x3d6) = 1;
              }
              if (*(char *)(param_1 + 0x658) != '\0') {
                *(undefined1 *)((longlong)plVar6 + 0x3d5) = 1;
              }
            }
            bVar16 = local_78[0] == '\0';
            if (bVar16) {
              pcVar12 = (char *)FUN_1436be9d0(plVar6,*(undefined8 *)(param_1 + 0x7b8));
            }
            if (((uVar4 == 0) || (pcVar12 == (char *)0x0)) || (*(ulonglong *)(pcVar12 + 8) < uVar4))
            {
LAB_1436b1f54:
              if (bVar16) {
                if ((uVar5 != 0) && (uVar5 <= *(ulonglong *)(*(longlong *)(param_1 + 0x7b8) + 0x30))
                   ) {
                  plVar13 = (longlong *)FUN_1436aed20(param_1);
                  if (plVar13 == (longlong *)0x0) {
                    FUN_1436b58e0(param_1,"No connections available in cache\n");
                    goto LAB_1436b205e;
                  }
                  *plVar13 = param_1;
                  FUN_1436ae720(plVar13,0);
                }
                FUN_1436be840(*(undefined8 *)(param_1 + 0x7b8),plVar6);
                if (((*(byte *)(param_1 + 0x8954) & 0x28) != 0) &&
                   (*(char *)(param_1 + 0x895c) != '\0')) {
                  FUN_1436b58e0(param_1,"NTLM picked AND auth done set, clear picked!\n");
                  *(undefined4 *)(param_1 + 0x8954) = 0;
                  *(undefined1 *)(param_1 + 0x895c) = 0;
                }
                plVar13 = plVar6;
                if (((*(byte *)(param_1 + 0x8964) & 0x28) != 0) &&
                   (*(char *)(param_1 + 0x896c) != '\0')) {
                  FUN_1436b58e0(param_1,"NTLM-proxy picked AND auth done set, clear picked!\n");
                  *(undefined4 *)(param_1 + 0x8964) = 0;
                  *(undefined1 *)(param_1 + 0x896c) = 0;
                }
                goto LAB_1436b1ff9;
              }
            }
            else {
              plVar13 = (longlong *)FUN_1436b22c0(param_1);
              if (plVar13 != (longlong *)0x0) {
                *plVar13 = param_1;
                FUN_1436ae720(plVar13,0);
                goto LAB_1436b1f54;
              }
              FUN_1436b58e0(param_1,"No more connections allowed to host: %d\n",uVar4);
            }
LAB_1436b205e:
            FUN_1436b58e0(param_1,"No connections available.\n");
            FUN_1436b1300(plVar6);
            iVar14 = 0x59;
            *local_res10 = 0;
          }
          goto LAB_1436b1745;
        }
      }
    }
  }
LAB_1436b1740:
  iVar14 = 0x1b;
LAB_1436b1745:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_60);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_70);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_68);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(0);
  return iVar14;
}



// FUNCTION 1436b20a0 FUN_1436b20a0 body=344 status=ok
// SIG undefined FUN_1436b20a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1436b20a0(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_b8 [32];
  undefined4 local_98 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar5 = 0;
  lVar4 = GetEnv("no_proxy");
  if (lVar4 == 0) {
    lVar4 = GetEnv("NO_PROXY");
  }
  cVar2 = check_noproxy(*(undefined8 *)(param_1 + 0xb8),lVar4);
  if (cVar2 == '\0') {
    puVar6 = local_98;
    pcVar1 = (char *)**(undefined8 **)(param_1 + 1000);
    cVar2 = *pcVar1;
    while (cVar2 != '\0') {
      iVar3 = tolower((int)cVar2);
      *(char *)puVar6 = (char)iVar3;
      pcVar1 = pcVar1 + 1;
      puVar6 = (undefined4 *)((longlong)puVar6 + 1);
      cVar2 = *pcVar1;
    }
    *puVar6 = 0x6f72705f;
    *(undefined2 *)(puVar6 + 1) = 0x7978;
    *(undefined1 *)((longlong)puVar6 + 6) = 0;
    lVar5 = GetEnv(local_98);
    if (lVar5 == 0) {
      iVar3 = Curl_strcasecompare("http_proxy",local_98);
      if (iVar3 == 0) {
        Curl_strntoupper(local_98,local_98,0x80);
        lVar5 = GetEnv(local_98);
        if (lVar5 != 0) goto LAB_1436b21c7;
      }
      lVar5 = GetEnv("all_proxy");
      if (lVar5 == 0) {
        lVar5 = GetEnv("ALL_PROXY");
      }
    }
  }
LAB_1436b21c7:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
  return lVar5;
}



// FUNCTION 1436b2200 FUN_1436b2200 body=179 status=ok
// SIG undefined FUN_1436b2200(void)

undefined8 FUN_1436b2200(undefined8 *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  if ((*(longlong *)(param_1[0x9a] + 0x18) + *(longlong *)(param_1[0x99] + 0x18) == 0) &&
     (*(char *)(param_1 + 9) == '\0')) {
    if ((*(uint *)(param_1[0x7d] + 0x74) & 0x40000) == 0) {
      iVar2 = FUN_1436b50e0(param_1[0x3a],0xffffffffffffffff,0xffffffffffffffff,0);
      cVar1 = '\x01';
      if (iVar2 == 0) {
        cVar1 = '\0';
      }
    }
    else {
      cVar1 = FUN_1436d3bb0();
    }
    if (cVar1 != '\0') {
      *param_1 = param_2;
      FUN_1436b58e0(param_2,"Connection %ld seems to be dead!\n",
                    *(undefined4 *)((longlong)param_1 + 0x4c));
      FUN_1436ae720(param_1,1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436b22c0 FUN_1436b22c0 body=129 status=ok
// SIG undefined FUN_1436b22c0(void)

longlong FUN_1436b22c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = -1;
  lVar5 = 0;
  uVar4 = curlx_tvnow();
  for (plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x10); plVar1 != (longlong *)0x0;
      plVar1 = (longlong *)plVar1[2]) {
    lVar2 = *plVar1;
    if ((*(char *)(lVar2 + 0x48) == '\0') &&
       (iVar3 = curlx_tvdiff(uVar4,*(undefined8 *)(lVar2 + 0x1bc)), iVar6 < iVar3)) {
      lVar5 = lVar2;
      iVar6 = iVar3;
    }
  }
  return lVar5;
}



// FUNCTION 1436b2350 FUN_1436b2350 body=188 status=ok
// SIG undefined FUN_1436b2350(void)

undefined8 FUN_1436b2350(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  ppuVar2 = &PTR_DAT_145b6af50;
  ppuVar3 = &PTR_PTR_145b69ad0;
  do {
    iVar1 = Curl_strcasecompare(*ppuVar2,param_3);
    if (iVar1 != 0) {
      if (((*(uint *)(param_1 + 0x5f4) & *(uint *)((longlong)ppuVar2 + 0x74)) != 0) &&
         ((*(char *)(param_1 + 0x87f8) == '\0' ||
          ((*(uint *)(param_1 + 0x5f8) & *(uint *)((longlong)ppuVar2 + 0x74)) != 0)))) {
        *(undefined ***)(param_2 + 0x3f0) = ppuVar2;
        *(undefined ***)(param_2 + 1000) = ppuVar2;
        return 0;
      }
      break;
    }
    ppuVar2 = (undefined **)ppuVar3[1];
    ppuVar3 = ppuVar3 + 1;
  } while (ppuVar2 != (undefined **)0x0);
  FUN_1436b5820(param_1,"Protocol \"%s\" not supported or disabled in libcurl",param_3);
  return 1;
}



// FUNCTION 1436b2410 FUN_1436b2410 body=186 status=ok
// SIG undefined FUN_1436b2410(void)

void FUN_1436b2410(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 local_res18 [2];
  
  lVar1 = *(longlong *)(param_3 + 0x10);
  *(longlong *)(param_3 + 0x18) = lVar1;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(lVar1 + lVar4) != '\0');
  if ((lVar4 != 0) && (*(char *)(lVar1 + -1 + lVar4) == '.')) {
    *(undefined1 *)(lVar1 + -1 + lVar4) = 0;
  }
  pcVar2 = *(char **)(param_3 + 0x10);
  cVar3 = *pcVar2;
  pcVar5 = pcVar2;
  if (cVar3 != '\0') {
    while (pcVar5 = pcVar5 + 1, -1 < cVar3) {
      cVar3 = *pcVar5;
      if (cVar3 == '\0') {
        return;
      }
    }
    local_res18[0] = 0;
    cVar3 = curl_win32_idn_to_ascii(pcVar2,local_res18);
    if (cVar3 != '\0') {
      *(undefined8 *)(param_3 + 8) = local_res18[0];
      *(undefined8 *)(param_3 + 0x10) = local_res18[0];
      return;
    }
    FUN_1436b58e0(param_1,"Failed to convert %s to ACE;\n",*(undefined8 *)(param_3 + 0x10));
  }
  return;
}



// FUNCTION 1436b24d0 FUN_1436b24d0 body=328 status=ok
// SIG undefined FUN_1436b24d0(void)

undefined8 FUN_1436b24d0(uint param_1)

{
  if (param_1 < 0x4001) {
    if (param_1 == 0x4000) {
      return 0x4000;
    }
    if (param_1 < 0x81) {
      if (param_1 == 0x80) {
        return 0x80;
      }
      switch(param_1) {
      case 1:
      case 2:
        return 1;
      case 4:
      case 8:
        return 4;
      case 0x10:
        return 0x10;
      case 0x20:
        return 0x20;
      case 0x40:
        return 0x40;
      }
    }
    else if (param_1 < 0x801) {
      if (param_1 == 0x800) {
        return 0x800;
      }
      if (param_1 == 0x100) {
        return 0x80;
      }
      if (param_1 == 0x200) {
        return 0x200;
      }
      if (param_1 == 0x400) {
        return 0x400;
      }
    }
    else if ((param_1 - 0x1000 & 0xffffefff) == 0) {
      return 0x1000;
    }
  }
  else if (param_1 < 0x200001) {
    if (param_1 == 0x200000) {
      return 0x200000;
    }
    if (0x40000 < param_1) {
      if (param_1 == 0x80000) {
        return 0x80000;
      }
      if (param_1 == 0x100000) {
        return 0x100000;
      }
      return 0;
    }
    if (param_1 == 0x40000) {
      return 0x40000;
    }
    if (param_1 == 0x8000) {
      return 0x4000;
    }
    if ((param_1 - 0x10000 & 0xfffeffff) == 0) {
      return 0x10000;
    }
  }
  else if (param_1 < 0x2000001) {
    if (param_1 == 0x2000000) {
      return 0x2000000;
    }
    if (param_1 == 0x400000) {
      return 0x400000;
    }
    if (param_1 == 0x800000) {
      return 0x80000;
    }
    if (param_1 == 0x1000000) {
      return 0x100000;
    }
  }
  else if ((param_1 + 0xfc000000 & 0xfbffffff) == 0) {
    return 0x4000000;
  }
  return 0;
}



// FUNCTION 1436b2670 parse_connect_to_host_port body=502 status=ok
// SIG undefined parse_connect_to_host_port(void)

undefined8
parse_connect_to_host_port(undefined8 param_1,char *param_2,longlong *param_3,uint *param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  char *pcVar5;
  longlong lVar6;
  byte *_Str2;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  char *local_res10;
  
  uVar9 = 0xffffffff;
  *param_3 = 0;
  *param_4 = 0xffffffff;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    return 0;
  }
  pbVar4 = (byte *)(*(code *)PTR__strdup_1467dcc70)(param_2);
  if (pbVar4 == (byte *)0x0) {
    return 0x1b;
  }
  _Str2 = pbVar4;
  pbVar8 = pbVar4;
  if (*pbVar4 == 0x5b) {
    bVar1 = pbVar4[1];
    pbVar8 = pbVar4 + 1;
    _Str2 = pbVar8;
    while ((bVar1 != 0 &&
           (((iVar2 = isxdigit((uint)*_Str2), iVar2 != 0 || (*_Str2 == 0x3a)) || (*_Str2 == 0x2e))))
          ) {
      _Str2 = _Str2 + 1;
      bVar1 = *_Str2;
    }
    if (*_Str2 == 0x25) {
      iVar2 = strncmp("%25",(char *)_Str2,3);
      if (iVar2 != 0) {
        FUN_1436b58e0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
      }
      bVar1 = _Str2[1];
      pbVar7 = _Str2;
      while ((_Str2 = pbVar7 + 1, bVar1 != 0 &&
             (((iVar2 = isalpha((uint)bVar1), iVar2 != 0 ||
               (iVar2 = isxdigit((uint)*_Str2), iVar2 != 0)) ||
              ((bVar1 = *_Str2, (byte)(bVar1 - 0x2d) < 2 || ((bVar1 == 0x5f || (bVar1 == 0x7e)))))))
             )) {
        bVar1 = pbVar7[2];
        pbVar7 = _Str2;
      }
    }
    if (*_Str2 == 0x5d) {
      *_Str2 = 0;
      _Str2 = _Str2 + 1;
    }
    else {
      FUN_1436b58e0(param_1,"Invalid IPv6 address format\n");
    }
  }
  pcVar5 = strchr((char *)_Str2,0x3a);
  uVar3 = uVar9;
  if (pcVar5 != (char *)0x0) {
    *pcVar5 = '\0';
    local_res10 = (char *)0x0;
    uVar3 = 0xffffffff;
    if ((pcVar5[1] != '\0') &&
       (((uVar3 = strtol(pcVar5 + 1,&local_res10,10), local_res10 != (char *)0x0 &&
         (*local_res10 != '\0')) || (0xffff < uVar3)))) {
      FUN_1436b58e0(param_1,"No valid port number in connect to host string (%s)\n",pcVar5 + 1);
      goto LAB_1436b2848;
    }
  }
  lVar6 = (*(code *)PTR__strdup_1467dcc70)(pbVar8);
  *param_3 = lVar6;
  uVar9 = uVar3;
  if (lVar6 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar4);
    return 0x1b;
  }
LAB_1436b2848:
  *param_4 = uVar9;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar4);
  return 0;
}



// FUNCTION 1436b2870 FUN_1436b2870 body=611 status=ok
// SIG undefined FUN_1436b2870(void)

int FUN_1436b2870(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  long lVar1;
  int iVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  longlong lVar7;
  undefined1 *puVar9;
  char *_Str;
  bool bVar10;
  int local_res18 [2];
  char *local_res20;
  char *local_48 [2];
  longlong lVar8;
  
  _Str = (char *)0x0;
  local_48[0] = (char *)0x0;
  bVar10 = param_3 == (undefined8 *)0x0;
  local_res18[0] = 0;
  do {
    if ((bVar10) || (_Str != (char *)0x0)) {
      return 0;
    }
    pcVar5 = (char *)*param_3;
    if (*pcVar5 == ':') {
      pcVar5 = pcVar5 + 1;
LAB_1436b2959:
      if (*pcVar5 == ':') {
LAB_1436b29b0:
        iVar2 = parse_connect_to_host_port(param_1,pcVar5 + 1,local_48,local_res18);
        _Str = local_48[0];
      }
      else {
        pcVar4 = strchr(pcVar5,0x3a);
        iVar2 = 0;
        if (pcVar4 != (char *)0x0) {
          local_res20 = (char *)0x0;
          lVar1 = strtol(pcVar5,&local_res20,10);
          if ((local_res20 == pcVar4) &&
             (pcVar5 = pcVar4, iVar2 = 0, lVar1 == *(int *)(param_2 + 0x10c))) goto LAB_1436b29b0;
        }
      }
      if (iVar2 != 0) {
        return iVar2;
      }
      if ((_Str == (char *)0x0) || (*_Str == '\0')) goto LAB_1436b2a49;
      *(char **)(param_2 + 200) = _Str;
      *(char **)(param_2 + 0xd8) = _Str;
      *(undefined1 *)(param_2 + 0x3bb) = 1;
      pcVar5 = strchr(_Str,0x3a);
      puVar9 = &DAT_145af3922;
      puVar6 = &DAT_145af3922;
      if (pcVar5 != (char *)0x0) {
        puVar6 = &DAT_145b18618;
        puVar9 = &DAT_145b4dda8;
      }
      FUN_1436b58e0(param_1,"Connecting to hostname: %s%s%s\n",puVar9,_Str,puVar6);
    }
    else {
      puVar6 = &DAT_145af3922;
      puVar9 = &DAT_145af3922;
      if (*(char *)(param_2 + 0x3c1) != '\0') {
        puVar6 = &DAT_145b18618;
        puVar9 = &DAT_145b4dda8;
      }
      lVar3 = curl_maprintf("%s%s%s",puVar9,*(undefined8 *)(param_2 + 0xb8),puVar6);
      if (lVar3 == 0) {
        return 0x1b;
      }
      lVar7 = -1;
      do {
        lVar8 = lVar7;
        lVar7 = lVar8 + 1;
      } while (*(char *)(lVar7 + lVar3) != '\0');
      iVar2 = curl_strnequal(pcVar5,lVar3,lVar7);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
      if ((iVar2 != 0) && (pcVar5[lVar7] == ':')) {
        pcVar5 = pcVar5 + lVar8 + 2;
        goto LAB_1436b2959;
      }
LAB_1436b2a49:
      *(undefined1 *)(param_2 + 0x3bb) = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    }
    if (local_res18[0] < 0) {
      *(undefined1 *)(param_2 + 0x3bc) = 0;
      param_3 = (undefined8 *)param_3[1];
      bVar10 = param_3 == (undefined8 *)0x0;
    }
    else {
      *(int *)(param_2 + 0x110) = local_res18[0];
      *(undefined1 *)(param_2 + 0x3bc) = 1;
      FUN_1436b58e0(param_1,"Connecting to port: %d\n",local_res18[0]);
      param_3 = (undefined8 *)param_3[1];
      bVar10 = param_3 == (undefined8 *)0x0;
    }
  } while( true );
}



// FUNCTION 1436b2ae0 parse_login_details body=538 status=ok
// SIG undefined parse_login_details(void)

undefined8
parse_login_details(char *param_1,size_t param_2,undefined8 *param_3,undefined8 *param_4,
                   undefined8 *param_5)

{
  char *pcVar1;
  char *pcVar2;
  char *_Dst;
  char *_Dst_00;
  size_t sVar3;
  char *pcVar4;
  char *_Size;
  void *local_48;
  
  _Dst_00 = (char *)0x0;
  pcVar4 = (char *)0x0;
  local_48 = (void *)0x0;
  pcVar1 = _Dst_00;
  if ((param_4 != (undefined8 *)0x0) && (pcVar1 = strchr(param_1,0x3a), param_1 + param_2 <= pcVar1)
     ) {
    pcVar1 = (char *)0x0;
  }
  pcVar2 = _Dst_00;
  if ((param_5 != (undefined8 *)0x0) && (pcVar2 = strchr(param_1,0x3b), param_1 + param_2 <= pcVar2)
     ) {
    pcVar2 = (char *)0x0;
  }
  if (pcVar1 == (char *)0x0) {
    sVar3 = param_2;
    if (pcVar2 != (char *)0x0) {
      sVar3 = (longlong)pcVar2 - (longlong)param_1;
      pcVar4 = _Dst_00;
    }
  }
  else {
    if ((pcVar2 == (char *)0x0) || (pcVar4 = pcVar2, pcVar1 <= pcVar2)) {
      pcVar4 = pcVar1;
    }
    sVar3 = (longlong)pcVar4 - (longlong)param_1;
    if ((pcVar2 == (char *)0x0) || (pcVar2 <= pcVar1)) {
      pcVar4 = param_1 + (param_2 - (longlong)pcVar1) + -1;
    }
    else {
      pcVar4 = pcVar2 + (-1 - (longlong)pcVar1);
    }
  }
  if (pcVar2 == (char *)0x0) {
    _Size = (char *)0x0;
  }
  else if ((pcVar1 == (char *)0x0) || (pcVar1 <= pcVar2)) {
    _Size = param_1 + (param_2 - (longlong)pcVar2) + -1;
  }
  else {
    _Size = pcVar1 + (-1 - (longlong)pcVar2);
  }
  _Dst = _Dst_00;
  if (((param_3 == (undefined8 *)0x0) || (_Dst = (char *)0x0, sVar3 == 0)) ||
     (_Dst = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(sVar3 + 1),
     _Dst != (char *)0x0)) {
    if (((param_4 == (undefined8 *)0x0) || (_Dst_00 = (char *)0x0, pcVar4 == (char *)0x0)) ||
       (_Dst_00 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(pcVar4 + 1),
       _Dst_00 != (char *)0x0)) {
      if (((param_5 == (undefined8 *)0x0) || (_Size == (char *)0x0)) ||
         (local_48 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(_Size + 1),
         local_48 != (void *)0x0)) {
        if (_Dst != (char *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,param_1,sVar3);
          _Dst[sVar3] = '\0';
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_3);
          *param_3 = _Dst;
        }
        if (_Dst_00 != (char *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst_00,pcVar1 + 1,(size_t)pcVar4);
          pcVar4[(longlong)_Dst_00] = '\0';
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_4);
          *param_4 = _Dst_00;
        }
        if (local_48 != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_48,pcVar2 + 1,(size_t)_Size);
          _Size[(longlong)local_48] = '\0';
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_5);
          *param_5 = local_48;
        }
        return 0;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Dst_00);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Dst);
  }
  return 0x1b;
}



// FUNCTION 1436b2d00 FUN_1436b2d00 body=1078 status=ok
// SIG undefined FUN_1436b2d00(void)

int FUN_1436b2d00(longlong param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *local_res20;
  longlong local_48 [2];
  
  pcVar5 = strstr((char *)param_3,"://");
  if (pcVar5 != (char *)0x0) {
    pbVar11 = (byte *)(pcVar5 + 3);
    iVar2 = Curl_raw_nequal("socks5h",param_3,7);
    if (iVar2 == 0) {
      iVar2 = Curl_raw_nequal("socks5",param_3,6);
      if (iVar2 == 0) {
        iVar2 = Curl_raw_nequal("socks4a",param_3,7);
        if (iVar2 == 0) {
          iVar2 = Curl_raw_nequal("socks4",param_3,6);
          if ((iVar2 != 0) ||
             (iVar2 = Curl_raw_nequal("socks",param_3,5), param_3 = pbVar11, iVar2 != 0)) {
            *(undefined4 *)(param_2 + 0x1b0) = 4;
            param_3 = pbVar11;
          }
        }
        else {
          *(undefined4 *)(param_2 + 0x1b0) = 6;
          param_3 = pbVar11;
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x1b0) = 5;
        param_3 = pbVar11;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x1b0) = 7;
      param_3 = pbVar11;
    }
  }
  pcVar5 = strchr((char *)param_3,0x40);
  iVar2 = 0;
  if (pcVar5 == (char *)0x0) goto LAB_1436b2f74;
  local_res20 = (byte *)0x0;
  local_48[0] = 0;
  iVar3 = parse_login_details(param_3,(longlong)pcVar5 - (longlong)param_3,&local_res20,local_48,0);
  lVar8 = local_48[0];
  pbVar11 = local_res20;
  if (iVar3 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x1a0));
    uVar9 = 0xffffffffffffffff;
    *(undefined8 *)(param_2 + 0x1a0) = 0;
    if (pbVar11 == (byte *)0x0) {
LAB_1436b2ea9:
      lVar7 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    }
    else {
      uVar6 = 0xffffffffffffffff;
      do {
        uVar6 = uVar6 + 1;
      } while (pbVar11[uVar6] != 0);
      if (0xff < uVar6) goto LAB_1436b2ea9;
      lVar7 = curl_easy_unescape(param_1,pbVar11,0,0);
    }
    *(longlong *)(param_2 + 0x1a0) = lVar7;
    if (lVar7 == 0) {
      iVar3 = 0x1b;
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x1a8));
      *(undefined8 *)(param_2 + 0x1a8) = 0;
      if (lVar8 == 0) {
LAB_1436b2f0c:
        lVar7 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
      }
      else {
        do {
          uVar9 = uVar9 + 1;
        } while (*(char *)(lVar8 + uVar9) != '\0');
        if (0xff < uVar9) goto LAB_1436b2f0c;
        lVar7 = curl_easy_unescape(param_1,lVar8,0,0);
      }
      *(longlong *)(param_2 + 0x1a8) = lVar7;
      if (lVar7 == 0) {
        iVar3 = 0x1b;
      }
      else {
        *(undefined1 *)(param_2 + 0x3c0) = 1;
        param_3 = (byte *)(pcVar5 + 1);
      }
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar11);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar8);
  if (iVar3 != 0) {
    return iVar3;
  }
LAB_1436b2f74:
  pbVar11 = param_3;
  if (*param_3 == 0x5b) {
    pbVar11 = param_3 + 1;
    bVar1 = *pbVar11;
    param_3 = pbVar11;
    while ((bVar1 != 0 &&
           (((iVar3 = isxdigit((uint)*param_3), iVar3 != 0 || (*param_3 == 0x3a)) ||
            (*param_3 == 0x2e))))) {
      param_3 = param_3 + 1;
      bVar1 = *param_3;
    }
    if (*param_3 == 0x25) {
      iVar3 = strncmp("%25",(char *)param_3,3);
      if (iVar3 != 0) {
        FUN_1436b58e0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
      }
      bVar1 = param_3[1];
      pbVar10 = param_3;
      while ((param_3 = pbVar10 + 1, bVar1 != 0 &&
             (((iVar3 = isalpha((uint)bVar1), iVar3 != 0 ||
               (iVar3 = isxdigit((uint)*param_3), iVar3 != 0)) ||
              ((bVar1 = *param_3, (byte)(bVar1 - 0x2d) < 2 || ((bVar1 == 0x5f || (bVar1 == 0x7e)))))
              )))) {
        bVar1 = pbVar10[2];
        pbVar10 = param_3;
      }
    }
    if (*param_3 == 0x5d) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    else {
      FUN_1436b58e0(param_1,"Invalid IPv6 address format\n");
    }
  }
  pcVar5 = strchr((char *)param_3,0x3a);
  if (pcVar5 == (char *)0x0) {
    if (*pbVar11 == 0x2f) {
      return 5;
    }
    pcVar5 = strchr((char *)pbVar11,0x2f);
    if (pcVar5 != (char *)0x0) {
      *pcVar5 = '\0';
    }
    if (*(int *)(param_1 + 0x1b8) != 0) {
      *(int *)(param_2 + 0x108) = *(int *)(param_1 + 0x1b8);
    }
  }
  else {
    local_res20 = (byte *)0x0;
    *pcVar5 = '\0';
    uVar4 = strtol(pcVar5 + 1,(char **)&local_res20,10);
    if (((local_res20 == (byte *)0x0) ||
        ((*local_res20 < 0x30 && ((0x800100000001U >> ((ulonglong)*local_res20 & 0x3f) & 1) != 0))))
       && (uVar4 < 0x10000)) {
      *(uint *)(param_2 + 0x108) = uVar4;
    }
    else {
      FUN_1436b58e0(param_1,"No valid port number in proxy string (%s)\n",pcVar5 + 1);
    }
  }
  lVar8 = (*(code *)PTR__strdup_1467dcc70)(pbVar11);
  *(longlong *)(param_2 + 0xe8) = lVar8;
  *(longlong *)(param_2 + 0xf8) = lVar8;
  if (lVar8 == 0) {
    iVar2 = 0x1b;
  }
  return iVar2;
}



// FUNCTION 1436b3140 FUN_1436b3140 body=268 status=ok
// SIG undefined FUN_1436b3140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436b3140(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 auStack_238 [32];
  char local_218 [255];
  undefined1 local_119;
  char local_118 [255];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  _guard_xfg_dispatch_icall_nop(local_218,0,0x100);
  _guard_xfg_dispatch_icall_nop(local_118,0,0x100);
  if (*(char **)(param_1 + 0x588) != (char *)0x0) {
    strncpy(local_218,*(char **)(param_1 + 0x588),0x100);
    local_119 = 0;
  }
  if (*(char **)(param_1 + 0x590) != (char *)0x0) {
    strncpy(local_118,*(char **)(param_1 + 0x590),0x100);
    local_19 = 0;
  }
  lVar1 = curl_easy_unescape(param_1,local_218,0,0);
  *(longlong *)(param_2 + 0x1a0) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  else {
    lVar1 = curl_easy_unescape(param_1,local_118,0,0);
    uVar2 = 0;
    *(longlong *)(param_2 + 0x1a8) = lVar1;
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
  }
  return uVar2;
}



// FUNCTION 1436b3250 FUN_1436b3250 body=693 status=ok
// SIG undefined FUN_1436b3250(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436b3250(longlong param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined4 local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined1 *local_58;
  char local_48 [8];
  undefined1 local_40 [16];
  char *local_30;
  undefined1 uStack_28;
  undefined2 local_27;
  undefined1 local_25;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  iVar2 = FUN_143662c40(*(undefined8 *)(param_2 + 0xb8),"[%*45[0123456789abcdefABCDEF:.]%c",local_48
                       );
  if ((iVar2 == 1) && (local_48[0] == ']')) {
    *(longlong *)(param_2 + 0xb8) = *(longlong *)(param_2 + 0xb8) + 1;
    *(undefined1 *)(param_2 + 0x3c1) = 1;
    pcVar4 = strchr(*(char **)(param_2 + 0xb8),0x5d);
    pcVar6 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      pcVar6 = pcVar4 + 1;
      *pcVar4 = '\0';
      if (*pcVar6 != ':') {
        pcVar6 = (char *)0x0;
      }
    }
  }
  else {
    iVar2 = Curl_inet_pton(0x17,*(undefined8 *)(param_2 + 0xb8),local_40);
    if (0 < iVar2) {
      FUN_1436b5820(param_1,"IPv6 numerical address used in URL without brackets");
      return 3;
    }
    pcVar6 = strrchr(*(char **)(param_2 + 0xb8),0x3a);
  }
  if ((*(int *)(param_1 + 0x1e0) == 0) || (*(char *)(param_1 + 0x8848) == '\0')) {
    if (pcVar6 != (char *)0x0) {
      uVar3 = strtol(pcVar6 + 1,&local_30,10);
      if (0xffff < uVar3) {
        FUN_1436b5820(param_1,"Port number out of range");
        return 3;
      }
      *pcVar6 = '\0';
      if ((char *)CONCAT71(local_30._1_7_,local_30._0_1_) != pcVar6 + 1) {
        uVar1 = curlx_sltous(uVar3);
        *(uint *)(param_2 + 0x10c) = (uint)uVar1;
      }
    }
  }
  else {
    *(uint *)(param_2 + 0x10c) = (uint)*(ushort *)(param_1 + 0x1e0);
    if (pcVar6 != (char *)0x0) {
      *pcVar6 = '\0';
    }
    if (*(char *)(param_2 + 0x3be) != '\0') {
      local_30._0_1_ = 0;
      local_30._1_7_ = 0;
      uStack_28 = 0;
      local_27 = 0;
      local_25 = 0;
      if (*(char *)(param_2 + 0x3d2) != '\0') {
        if (*(char *)(param_1 + 0x443) == '\0') {
          uVar8 = 0x49;
          if (*(char *)(param_1 + 0x445) != '\0') {
            uVar8 = 0x44;
          }
        }
        else {
          uVar8 = 0x41;
        }
        curl_msnprintf(&local_30,0xc,";type=%c",uVar8);
      }
      puVar7 = &DAT_145af3922;
      local_68 = &DAT_145af3922;
      if (*(char *)(param_1 + 0x89e0) != '\0') {
        local_68 = &DAT_145b11fc0;
      }
      bVar9 = *(char *)(param_2 + 0x3c1) != '\0';
      local_78 = &DAT_145af3922;
      local_58 = (undefined1 *)&local_30;
      if (bVar9) {
        local_78 = &DAT_145b18618;
      }
      local_60 = *(undefined8 *)(param_1 + 0x89d8);
      if (bVar9) {
        puVar7 = &DAT_145b4dda8;
      }
      local_70 = *(undefined4 *)(param_2 + 0x10c);
      lVar5 = curl_maprintf("%s://%s%s%s:%hu%s%s%s",**(undefined8 **)(param_2 + 0x3f0),puVar7,
                            *(undefined8 *)(param_2 + 0xb8));
      if (lVar5 == 0) {
        return 0x1b;
      }
      if (*(char *)(param_1 + 0x678) != '\0') {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
        *(undefined8 *)(param_1 + 0x670) = 0;
        *(undefined1 *)(param_1 + 0x678) = 0;
      }
      *(longlong *)(param_1 + 0x670) = lVar5;
      *(undefined1 *)(param_1 + 0x678) = 1;
    }
  }
  if (*(int *)(param_2 + 0x10c) < 0) {
    *(uint *)(param_2 + 0x10c) = (uint)*(ushort *)(*(longlong *)(param_2 + 0x3f0) + 0x70);
  }
  return 0;
}



// FUNCTION 1436b3510 FUN_1436b3510 body=385 status=ok
// SIG undefined FUN_1436b3510(void)

ulonglong FUN_1436b3510(longlong param_1,longlong param_2,longlong *param_3,longlong *param_4,
                       longlong *param_5)

{
  uint uVar1;
  char *pcVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong local_res10;
  ulonglong local_38;
  longlong local_30;
  
  uVar5 = 0;
  local_38 = 0;
  local_res10 = 0;
  local_30 = 0;
  pcVar2 = strchr(*(char **)(param_2 + 0xb8),0x40);
  lVar3 = *(longlong *)(param_2 + 0xb8);
  uVar4 = uVar5;
  uVar6 = uVar5;
  if (pcVar2 == (char *)0x0) goto LAB_1436b35d7;
  *(char **)(param_2 + 0xb8) = pcVar2 + 1;
  uVar4 = 0;
  uVar6 = 0;
  if (*(int *)(param_1 + 0x454) == 2) goto LAB_1436b35d7;
  uVar1 = parse_login_details(lVar3,pcVar2 + 1 + (-1 - lVar3),&local_38,&local_res10,&local_30);
  uVar4 = local_38;
  uVar5 = (ulonglong)uVar1;
  uVar6 = local_res10;
  if (uVar1 != 0) goto LAB_1436b35d7;
  if (local_38 != 0) {
    *(undefined1 *)(param_2 + 0x3ce) = 1;
    *(undefined1 *)(param_2 + 0x3bf) = 1;
    lVar3 = curl_easy_unescape(param_1,local_38,0,0);
    if (lVar3 == 0) {
      uVar5 = 0x1b;
      uVar6 = local_res10;
      goto LAB_1436b35d7;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_3);
    *param_3 = lVar3;
  }
  uVar6 = local_res10;
  if (local_res10 == 0) {
LAB_1436b3654:
    if (local_30 == 0) goto LAB_1436b35d7;
    lVar3 = curl_easy_unescape(param_1,local_30,0,0);
    if (lVar3 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_5);
      *param_5 = lVar3;
      goto LAB_1436b35d7;
    }
  }
  else {
    lVar3 = curl_easy_unescape(param_1,local_res10,0,0);
    if (lVar3 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_4);
      *param_4 = lVar3;
      goto LAB_1436b3654;
    }
  }
  uVar5 = 0x1b;
LAB_1436b35d7:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(uVar4);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(uVar6);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_30);
  return uVar5;
}



// FUNCTION 1436b36a0 FUN_1436b36a0 body=1792 status=ok
// SIG undefined FUN_1436b36a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1436b36a0(longlong param_1,longlong param_2,char *param_3,char *param_4,undefined8 param_5,
             undefined8 param_6)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  void *_Dst;
  undefined8 uVar8;
  char *pcVar9;
  longlong lVar10;
  size_t sVar11;
  size_t sVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar17;
  undefined *puVar18;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  char *local_90;
  char local_88 [8];
  char *local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_5f;
  undefined4 local_57;
  undefined2 local_53;
  undefined1 local_51;
  ulonglong local_50;
  ulonglong uVar16;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  pcVar9 = *(char **)(param_1 + 0x89d8);
  local_68 = param_5;
  local_70 = param_6;
  bVar3 = false;
  *param_3 = '\0';
  local_60 = 0;
  local_5f = 0;
  local_57 = 0;
  local_53 = 0;
  local_51 = 0;
  local_80 = param_4;
  local_78 = param_3;
  pcVar6 = strpbrk(*(char **)(param_1 + 0x670),"\r\n");
  if (pcVar6 != (char *)0x0) {
    FUN_1436b5820(param_1,"Illegal characters found in URL");
    return 3;
  }
  iVar4 = FUN_143662c40(*(undefined8 *)(param_1 + 0x670),"%15[^:]:%[^\n]",&local_60,pcVar9);
  if (iVar4 == 2) {
    puVar18 = &DAT_145b59324;
    iVar4 = Curl_strcasecompare(&local_60,&DAT_145b59324);
    if (iVar4 == 0) goto LAB_1436b380f;
    if (*pcVar9 == '/') {
      if (pcVar9[1] == '/') {
        lVar14 = -1;
        do {
          lVar13 = lVar14;
          lVar14 = lVar13 + 1;
        } while ((pcVar9 + 2)[lVar14] != '\0');
        memmove(pcVar9,pcVar9 + 2,lVar13 + 2);
      }
      if (*pcVar9 != '/') goto LAB_1436b37cf;
    }
    else {
LAB_1436b37cf:
      pcVar6 = strchr(pcVar9,0x2f);
      if (pcVar6 != (char *)0x0) {
        lVar14 = -1;
        if (pcVar6[1] == '/') {
          pcVar6 = pcVar6 + 1;
        }
        do {
          lVar13 = lVar14;
          lVar14 = lVar13 + 1;
        } while (pcVar6[lVar14] != '\0');
        memmove(pcVar9,pcVar6,lVar13 + 2);
      }
    }
  }
  else {
LAB_1436b380f:
    *pcVar9 = '\0';
    local_98 = *(undefined8 *)(param_2 + 0xb8);
    local_90 = pcVar9;
    iVar4 = FUN_143662c40(*(undefined8 *)(param_1 + 0x670),"%15[^\n:]:%3[/]%[^\n/?]%[^\n]",&local_60
                          ,local_88);
    if (iVar4 == 2) {
      pcVar9 = "Bad URL";
LAB_1436b3880:
      FUN_1436b5820(param_1,pcVar9);
      return 3;
    }
    if (iVar4 < 3) {
      iVar4 = FUN_143662c40(*(undefined8 *)(param_1 + 0x670),"%[^\n/?]%[^\n]",
                            *(undefined8 *)(param_2 + 0xb8),pcVar9);
      if (iVar4 < 1) {
        pcVar9 = "<url> malformed";
        goto LAB_1436b3880;
      }
      puVar18 = *(undefined **)(param_1 + 0x4b0);
      if (puVar18 == (undefined *)0x0) {
        iVar4 = Curl_raw_nequal(&DAT_145b69f88,*(undefined8 *)(param_2 + 0xb8),4);
        if (iVar4 == 0) {
          iVar4 = Curl_raw_nequal("DICT.",*(undefined8 *)(param_2 + 0xb8),5);
          if (iVar4 == 0) {
            iVar4 = Curl_raw_nequal("LDAP.",*(undefined8 *)(param_2 + 0xb8),5);
            if (iVar4 == 0) {
              iVar4 = Curl_raw_nequal("IMAP.",*(undefined8 *)(param_2 + 0xb8),5);
              if (iVar4 == 0) {
                iVar4 = Curl_raw_nequal("SMTP.",*(undefined8 *)(param_2 + 0xb8),5);
                if (iVar4 == 0) {
                  iVar4 = Curl_raw_nequal("POP3.",*(undefined8 *)(param_2 + 0xb8),5);
                  puVar18 = &DAT_145b67694;
                  if (iVar4 == 0) {
                    puVar18 = &DAT_145b6766c;
                  }
                  goto LAB_1436b39aa;
                }
                puVar18 = &DAT_145b676b8;
                *param_3 = '\x01';
              }
              else {
                puVar18 = &DAT_145b69fb8;
                *param_3 = '\x01';
              }
            }
            else {
              puVar18 = &DAT_145b69fa8;
              *param_3 = '\x01';
            }
          }
          else {
            puVar18 = &DAT_145b69f98;
            *param_3 = '\x01';
          }
        }
        else {
          puVar18 = &DAT_145b67658;
          *param_3 = '\x01';
        }
      }
      else {
LAB_1436b39aa:
        *param_3 = '\x01';
      }
    }
    else {
      uVar16 = 0xffffffffffffffff;
      do {
        uVar15 = uVar16 + 1;
        lVar14 = uVar16 + 1;
        uVar16 = uVar15;
      } while (local_88[lVar14] != '\0');
      puVar18 = &local_60;
      if (uVar15 != 2) {
        puVar17 = &DAT_145af3922;
        if (1 < uVar15) {
          puVar17 = &DAT_145b69fd0;
        }
        FUN_1436b58e0(param_1,"Unwillingly accepted illegal URL using %d slash%s!\n",uVar15,puVar17)
        ;
        if (*(char *)(param_1 + 0x678) != '\0') {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
        }
        lVar14 = curl_maprintf("%s://%s%s",&local_60,*(undefined8 *)(param_2 + 0xb8),pcVar9);
        *(longlong *)(param_1 + 0x670) = lVar14;
        if (lVar14 == 0) {
          return 0x1b;
        }
        *(undefined1 *)(param_1 + 0x678) = 1;
      }
    }
  }
  pcVar7 = strchr(*(char **)(param_2 + 0xb8),0x40);
  pcVar6 = pcVar7 + 1;
  if (pcVar7 == (char *)0x0) {
    pcVar6 = *(char **)(param_2 + 0xb8);
  }
  pcVar6 = strchr(pcVar6,0x3f);
  if (pcVar6 == (char *)0x0) {
    if (*pcVar9 == '\0') {
      pcVar9[0] = '/';
      pcVar9[1] = '\0';
      goto LAB_1436b3ad2;
    }
  }
  else {
    sVar11 = 0xffffffffffffffff;
    do {
      sVar12 = sVar11;
      sVar11 = sVar12 + 1;
    } while (pcVar6[sVar11] != '\0');
    lVar14 = -1;
    do {
      lVar13 = lVar14;
      lVar14 = lVar13 + 1;
    } while (pcVar9[lVar14] != '\0');
    memmove(pcVar9 + sVar12 + 2,pcVar9,lVar13 + 2);
    _guard_xfg_dispatch_icall_nop(pcVar9 + 1,pcVar6,sVar11);
    *pcVar9 = '/';
    *pcVar6 = '\0';
LAB_1436b3ad2:
    bVar3 = true;
  }
  if (*pcVar9 == '?') {
    lVar14 = -1;
    do {
      lVar13 = lVar14;
      lVar14 = lVar13 + 1;
    } while (pcVar9[lVar14] != '\0');
    memmove(pcVar9 + 1,pcVar9,lVar13 + 2);
    *pcVar9 = '/';
  }
  else {
    if (*(char *)(param_1 + 0x65a) == '\0') {
      pcVar6 = (char *)FUN_1436d7860(pcVar9);
      if (pcVar6 == (char *)0x0) {
        return 0x1b;
      }
      pcVar7 = pcVar6;
      do {
        cVar1 = *pcVar7;
        cVar2 = pcVar7[(longlong)pcVar9 - (longlong)pcVar6];
        if (cVar1 != cVar2) break;
        pcVar7 = pcVar7 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89d0));
        *(char **)(param_1 + 0x89d0) = pcVar6;
        *(char **)(param_1 + 0x89d8) = pcVar6;
        pcVar9 = pcVar6;
        goto LAB_1436b3b6b;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar6);
    }
    if (!bVar3) goto LAB_1436b3c4d;
  }
LAB_1436b3b6b:
  lVar14 = -1;
  do {
    lVar13 = lVar14;
    lVar14 = lVar13 + 1;
  } while (pcVar9[lVar13 + 1] != '\0');
  lVar14 = -1;
  do {
    lVar10 = lVar14;
    lVar14 = lVar10 + 1;
  } while (*(char *)(*(longlong *)(param_1 + 0x670) + lVar14) != '\0');
  sVar11 = 0xffffffffffffffff;
  do {
    sVar12 = sVar11;
    sVar11 = sVar12 + 1;
  } while (*(char *)(*(longlong *)(param_2 + 0xb8) + sVar11) != '\0');
  if (*local_78 == '\0') {
    lVar14 = -1;
    do {
      lVar14 = lVar14 + 1;
    } while (puVar18[lVar14] != '\0');
    sVar11 = sVar12 + 4 + lVar14;
  }
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar10 + 3);
  if (_Dst == (void *)0x0) {
    return 0x1b;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(param_1 + 0x670),sVar11);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + sVar11),pcVar9,lVar13 + 2);
  if (*(char *)(param_1 + 0x678) != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  FUN_1436b58e0(param_1,"Rebuilt URL to: %s\n",_Dst);
  *(void **)(param_1 + 0x670) = _Dst;
  *(undefined1 *)(param_1 + 0x678) = 1;
LAB_1436b3c4d:
  local_98 = local_70;
  uVar8 = FUN_1436b3510(param_1,param_2,local_80,local_68);
  if ((int)uVar8 == 0) {
    if ((**(char **)(param_2 + 0xb8) == '[') &&
       (pcVar6 = strchr(*(char **)(param_2 + 0xb8),0x25), pcVar6 != (char *)0x0)) {
      lVar14 = 3;
      iVar4 = strncmp("%25",pcVar6,3);
      if (iVar4 != 0) {
        FUN_1436b58e0(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        lVar14 = 1;
      }
      uVar5 = strtoul(pcVar6 + lVar14,&local_80,10);
      lVar14 = -1;
      if (*local_80 == ']') {
        do {
          lVar13 = lVar14;
          lVar14 = lVar13 + 1;
        } while (local_80[lVar13 + 1] != '\0');
        memmove(pcVar6,local_80,lVar13 + 2);
        *(ulong *)(param_2 + 0xa0) = uVar5;
      }
      else {
        FUN_1436b58e0(param_1,"Invalid IPv6 address format\n");
      }
    }
    if (*(int *)(param_1 + 0x5f0) != 0) {
      *(int *)(param_2 + 0xa0) = *(int *)(param_1 + 0x5f0);
    }
    pcVar9 = strchr(pcVar9,0x23);
    if (pcVar9 != (char *)0x0) {
      *pcVar9 = '\0';
      pcVar9 = strchr(*(char **)(param_1 + 0x670),0x23);
      if (pcVar9 != (char *)0x0) {
        *pcVar9 = '\0';
      }
    }
    uVar8 = FUN_1436b2350(param_1,param_2,puVar18);
    return uVar8;
  }
  return uVar8;
}



// FUNCTION 1436b3da0 FUN_1436b3da0 body=332 status=ok
// SIG undefined FUN_1436b3da0(void)

undefined4 FUN_1436b3da0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong local_res10;
  
  uVar5 = 0;
  uVar2 = FUN_1436b6c20(param_1,0,1);
  if (*(char *)(param_2 + 0x3ba) == '\0') {
    pcVar1 = *(char **)(param_2 + 0xf8);
    if ((pcVar1 == (char *)0x0) || (*pcVar1 == '\0')) {
      lVar6 = 0xa8;
      if (*(char *)(param_2 + 0x3bb) != '\0') {
        lVar6 = 200;
      }
      if (*(char *)(param_2 + 0x3bc) == '\0') {
        uVar4 = *(undefined4 *)(param_2 + 0x10c);
      }
      else {
        uVar4 = *(undefined4 *)(param_2 + 0x110);
      }
      *(undefined4 *)(param_2 + 0x108) = uVar4;
      iVar3 = Curl_resolv_timeout(param_2,*(undefined8 *)(lVar6 + 0x10 + param_2),uVar4,&local_res10
                                  ,uVar2);
      if (iVar3 == 1) {
        *param_3 = 1;
      }
      else if (iVar3 == -2) {
        uVar5 = 0x1c;
      }
      else if (local_res10 == 0) {
        FUN_1436b5820(param_1,"Couldn\'t resolve host \'%s\'",
                      *(undefined8 *)(lVar6 + 0x18 + param_2));
        uVar5 = 6;
      }
    }
    else {
      iVar3 = Curl_resolv_timeout(param_2,pcVar1,*(undefined4 *)(param_2 + 0x108),&local_res10,uVar2
                                 );
      if (iVar3 == 1) {
        *param_3 = 1;
      }
      else if (iVar3 == -2) {
        uVar5 = 0x1c;
      }
      else if (local_res10 == 0) {
        FUN_1436b5820(param_1,"Couldn\'t resolve proxy \'%s\'",*(undefined8 *)(param_2 + 0x100));
        uVar5 = 5;
      }
    }
    *(longlong *)(param_2 + 0x50) = local_res10;
    return uVar5;
  }
  *param_3 = 0;
  return 0;
}



// FUNCTION 1436b3ef0 FUN_1436b3ef0 body=655 status=ok
// SIG undefined FUN_1436b3ef0(void)

void FUN_1436b3ef0(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x1e]);
  param_1[0x1e] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x1d]);
  FUN_1436aced0(param_1 + 0x69);
  *param_2 = *param_1;
  cVar1 = *(char *)((longlong)param_1 + 0x3bf);
  *(char *)((longlong)param_2 + 0x3bf) = cVar1;
  if (cVar1 != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x30]);
    param_2[0x30] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x31]);
    param_2[0x31] = 0;
    param_2[0x30] = param_1[0x30];
    param_2[0x31] = param_1[0x31];
    param_1[0x30] = 0;
    param_1[0x31] = 0;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  *(char *)(param_2 + 0x78) = cVar1;
  if (cVar1 != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x34]);
    param_2[0x34] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x35]);
    param_2[0x35] = 0;
    param_2[0x34] = param_1[0x34];
    param_2[0x35] = param_1[0x35];
    param_1[0x34] = 0;
    param_1[0x35] = 0;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x16]);
  param_2[0x16] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x1a]);
  param_2[0x1a] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x15]);
  param_2[0x15] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[0x19]);
  param_2[0x19] = 0;
  uVar5 = param_1[0x16];
  param_2[0x15] = param_1[0x15];
  param_2[0x16] = uVar5;
  uVar5 = param_1[0x18];
  param_2[0x17] = param_1[0x17];
  param_2[0x18] = uVar5;
  *(undefined1 *)((longlong)param_2 + 0x3bb) = *(undefined1 *)((longlong)param_1 + 0x3bb);
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xcc);
  uVar3 = *(undefined4 *)(param_1 + 0x1a);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xd4);
  *(undefined4 *)(param_2 + 0x19) = *(undefined4 *)(param_1 + 0x19);
  *(undefined4 *)((longlong)param_2 + 0xcc) = uVar2;
  *(undefined4 *)(param_2 + 0x1a) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xd4) = uVar4;
  uVar2 = *(undefined4 *)((longlong)param_1 + 0xdc);
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  uVar4 = *(undefined4 *)((longlong)param_1 + 0xe4);
  *(undefined4 *)(param_2 + 0x1b) = *(undefined4 *)(param_1 + 0x1b);
  *(undefined4 *)((longlong)param_2 + 0xdc) = uVar2;
  *(undefined4 *)(param_2 + 0x1c) = uVar3;
  *(undefined4 *)((longlong)param_2 + 0xe4) = uVar4;
  *(undefined1 *)((longlong)param_2 + 0x3bc) = *(undefined1 *)((longlong)param_1 + 0x3bc);
  *(undefined4 *)(param_2 + 0x22) = *(undefined4 *)(param_1 + 0x22);
  FUN_1436b6930(param_2);
  FUN_1436b15a0(param_1);
  FUN_1436b15a0(param_2);
  *(undefined1 *)((longlong)param_2 + 0x3ba) = 1;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x30]);
  param_1[0x30] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x31]);
  param_1[0x31] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x34]);
  param_1[0x34] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x35]);
  param_1[0x35] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x100]);
  param_1[0x100] = 0;
  Curl_llist_destroy(param_1[0x99],0);
  Curl_llist_destroy(param_1[0x9a],0);
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x9b]);
  param_1[0x9b] = 0;
  return;
}



// FUNCTION 1436b4180 FUN_1436b4180 body=226 status=ok
// SIG undefined FUN_1436b4180(void)

undefined8 FUN_1436b4180(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 0x20) == 0) ||
     (*(char *)(param_1 + 0x3bf) != '\0')) {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)(param_2);
    *(longlong *)(param_1 + 0x180) = lVar1;
    if (lVar1 != 0) {
      uVar2 = (*(code *)PTR__strdup_1467dcc70)(param_3);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      goto LAB_1436b4212;
    }
  }
  else {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)("anonymous");
    *(longlong *)(param_1 + 0x180) = lVar1;
    if (lVar1 != 0) {
      uVar2 = (*(code *)PTR__strdup_1467dcc70)("ftp@example.com");
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      goto LAB_1436b4212;
    }
  }
  *(undefined8 *)(param_1 + 0x188) = 0;
LAB_1436b4212:
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x188) == 0)) {
    uVar3 = 0x1b;
  }
  else if (*param_4 != '\0') {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)(param_4);
    *(longlong *)(param_1 + 400) = lVar1;
    if (lVar1 == 0) {
      uVar3 = 0x1b;
    }
  }
  return uVar3;
}



// FUNCTION 1436b4270 setstropt body=83 status=ok
// SIG undefined setstropt(void)

undefined8 setstropt(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  if (param_2 != 0) {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)(param_2);
    if (lVar1 == 0) {
      return 0x1b;
    }
    *param_1 = lVar1;
  }
  return 0;
}



// FUNCTION 1436b42d0 setstropt_userpwd body=202 status=ok
// SIG undefined setstropt_userpwd(void)

longlong * setstropt_userpwd(char *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong local_res8;
  longlong local_res20;
  
  plVar3 = (longlong *)0x0;
  local_res8 = 0;
  local_res20 = 0;
  if (param_1 != (char *)0x0) {
    plVar1 = &local_res20;
    if (param_3 == (longlong *)0x0) {
      plVar1 = plVar3;
    }
    plVar4 = &local_res8;
    if (param_2 == (longlong *)0x0) {
      plVar4 = plVar3;
    }
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (param_1[lVar2] != '\0');
    plVar1 = (longlong *)parse_login_details(param_1,lVar2,plVar4,plVar1,0);
    plVar3 = (longlong *)((ulonglong)plVar1 & 0xffffffff);
    if ((int)plVar1 != 0) {
      return plVar1;
    }
  }
  if (param_2 != (longlong *)0x0) {
    if ((((local_res8 == 0) && (param_1 != (char *)0x0)) && (*param_1 == ':')) &&
       (local_res8 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922), local_res8 == 0)) {
      plVar3 = (longlong *)0x1b;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_2);
    *param_2 = local_res8;
  }
  if (param_3 != (longlong *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_3);
    *param_3 = local_res20;
  }
  return plVar3;
}



// FUNCTION 1436b43a0 FUN_1436b43a0 body=168 status=ok
// SIG undefined FUN_1436b43a0(void)

undefined8 FUN_1436b43a0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x198));
  *(undefined8 *)(lVar2 + 0x198) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x178));
  *(undefined8 *)(lVar2 + 0x178) = 0;
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x90),0,0x110);
  *(undefined8 *)(lVar2 + 0xa0) = 0xffffffffffffffff;
  lVar2 = param_1[0x7d];
  *(undefined4 *)((longlong)param_1 + 0xa4) = 1;
  if (*(code **)(lVar2 + 8) != (code *)0x0) {
    uVar1 = (**(code **)(lVar2 + 8))(param_1);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    lVar2 = param_1[0x7d];
  }
  if ((int)param_1[0x21] < 0) {
    *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(lVar2 + 0x70);
  }
  return 0;
}



// FUNCTION 1436b4450 FUN_1436b4450 body=161 status=ok
// SIG undefined FUN_1436b4450(void)

undefined8 FUN_1436b4450(longlong param_1)

{
  longlong lVar1;
  
  *(longlong *)(param_1 + 0x89f0) = *(longlong *)(param_1 + 0x300);
  if ((*(longlong *)(param_1 + 0x300) == 0) && (*(longlong *)(param_1 + 0x510) == 0)) {
    *(undefined1 *)(param_1 + 0x89e1) = 0;
    return 0;
  }
  if (*(char *)(param_1 + 0x89e2) != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x89e8));
  }
  if (*(longlong *)(param_1 + 0x89f0) == 0) {
    lVar1 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x510));
  }
  else {
    lVar1 = curl_maprintf("%I64u-");
  }
  *(longlong *)(param_1 + 0x89e8) = lVar1;
  *(bool *)(param_1 + 0x89e2) = lVar1 != 0;
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(undefined1 *)(param_1 + 0x89e1) = 1;
  return 0;
}



// FUNCTION 1436b4500 Curl_getinfo body=290 status=ok
// SIG undefined Curl_getinfo(void)

ulonglong Curl_getinfo(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = 0x30;
  if (param_1 != 0) {
    uVar2 = (uint)param_2 & 0xf00000;
    if (uVar2 == 0x100000) {
      if (param_3 != (undefined8 *)0x0) {
        uVar2 = FUN_1436b46e0(param_1,param_2,param_3);
        uVar3 = (ulonglong)uVar2;
      }
    }
    else if (uVar2 == 0x200000) {
      if (param_3 != (undefined8 *)0x0) {
        uVar3 = FUN_1436b4980(param_1,param_2,param_3);
        return uVar3;
      }
    }
    else if (uVar2 == 0x300000) {
      if (param_3 != (undefined8 *)0x0) {
        uVar3 = FUN_1436b47e0(param_1,param_2,param_3);
        return uVar3;
      }
    }
    else if (uVar2 == 0x400000) {
      if (param_3 != (undefined8 *)0x0) {
        uVar3 = FUN_1436b4bc0(param_1,param_2,param_3);
        return uVar3;
      }
    }
    else if (((uVar2 == 0x500000) && (param_3 != (undefined8 *)0x0)) && ((uint)param_2 == 0x50002c))
    {
      uVar1 = FUN_1436b63c0(param_1,0);
      *param_3 = uVar1;
      return 0;
    }
  }
  return uVar3;
}



// FUNCTION 1436b4630 FUN_1436b4630 body=166 status=ok
// SIG undefined FUN_1436b4630(void)

undefined8 FUN_1436b4630(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x710) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x6e8) = 0;
  *(undefined8 *)(param_1 + 0x728) = 0;
  *(undefined8 *)(param_1 + 0x8a78) = 0;
  *(undefined4 *)(param_1 + 0x8a80) = 0;
  *(undefined4 *)(param_1 + 0x8a84) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x8a88) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa0));
  *(undefined8 *)(param_1 + 0x8aa0) = 0;
  *(undefined8 *)(param_1 + 0x8a8c) = 0;
  *(undefined4 *)(param_1 + 0x8a9c) = 0;
  *(undefined1 *)(param_1 + 0x8ab0) = 0;
  *(undefined1 *)(param_1 + 0x8ae4) = 0;
  *(undefined4 *)(param_1 + 0x8ae0) = 0;
  *(undefined4 *)(param_1 + 0x8b14) = 0;
  return 0;
}



// FUNCTION 1436b46e0 FUN_1436b46e0 body=171 status=ok
// SIG undefined FUN_1436b46e0(void)

undefined8 FUN_1436b46e0(longlong param_1,undefined4 param_2,longlong *param_3)

{
  undefined1 *puVar1;
  
  switch(param_2) {
  case 0x100001:
    break;
  default:
    return 0x30;
  case 0x100012:
    *param_3 = *(longlong *)(param_1 + 0x8aa0);
    return 0;
  case 0x100015:
    *param_3 = *(longlong *)(param_1 + 0x408);
    return 0;
  case 0x10001e:
    *param_3 = *(longlong *)(param_1 + 0x89b8);
    return 0;
  case 0x10001f:
    *param_3 = *(longlong *)(param_1 + 0x8aa8);
    return 0;
  case 0x100020:
    *param_3 = param_1 + 0x8ab0;
    return 0;
  case 0x100024:
    *param_3 = *(longlong *)(param_1 + 0x5a0);
    return 0;
  case 0x100029:
    *param_3 = param_1 + 0x8ae4;
    return 0;
  }
  puVar1 = &DAT_145af3922;
  if (*(undefined1 **)(param_1 + 0x670) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_1 + 0x670);
  }
  *param_3 = (longlong)puVar1;
  return 0;
}



// FUNCTION 1436b47e0 FUN_1436b47e0 body=289 status=ok
// SIG undefined FUN_1436b47e0(void)

undefined8 FUN_1436b47e0(longlong param_1,undefined4 param_2,double *param_3)

{
  switch(param_2) {
  case 0x300003:
    *param_3 = *(double *)(param_1 + 0x6e8);
    return 0;
  case 0x300004:
    *param_3 = *(double *)(param_1 + 0x700);
    return 0;
  case 0x300005:
    *param_3 = *(double *)(param_1 + 0x708);
    return 0;
  case 0x300006:
    *param_3 = *(double *)(param_1 + 0x718);
    return 0;
  case 0x300007:
    *param_3 = (double)*(longlong *)(param_1 + 0x6c8);
    return 0;
  case 0x300008:
    *param_3 = (double)*(longlong *)(param_1 + 0x6c0);
    return 0;
  case 0x300009:
    *param_3 = (double)*(longlong *)(param_1 + 0x6f0);
    return 0;
  case 0x30000a:
    *param_3 = (double)*(longlong *)(param_1 + 0x6f8);
    return 0;
  default:
    return 0x30;
  case 0x30000f:
    if ((*(byte *)(param_1 + 0x6e0) & 0x40) != 0) {
      *param_3 = (double)*(longlong *)(param_1 + 0x6b0);
      return 0;
    }
    break;
  case 0x300010:
    if ((*(byte *)(param_1 + 0x6e0) & 0x20) != 0) {
      *param_3 = (double)*(longlong *)(param_1 + 0x6b8);
      return 0;
    }
    break;
  case 0x300011:
    *param_3 = *(double *)(param_1 + 0x720);
    return 0;
  case 0x300013:
    *param_3 = *(double *)(param_1 + 0x728);
    return 0;
  case 0x300021:
    *param_3 = *(double *)(param_1 + 0x710);
    return 0;
  }
  *param_3 = -1.0;
  return 0;
}



// FUNCTION 1436b4980 FUN_1436b4980 body=444 status=ok
// SIG undefined FUN_1436b4980(void)

undefined8 FUN_1436b4980(longlong param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  
  switch(param_2) {
  case 0x200002:
    *param_3 = *(uint *)(param_1 + 0x8a78);
    return 0;
  default:
    return 0x30;
  case 0x20000b:
    *param_3 = *(uint *)(param_1 + 0x8a8c);
    return 0;
  case 0x20000c:
    *param_3 = *(uint *)(param_1 + 0x8a90);
    return 0;
  case 0x20000d:
    *param_3 = *(uint *)(param_1 + 0x38c);
    return 0;
  case 0x20000e:
    *param_3 = *(uint *)(param_1 + 0x8a84);
    return 0;
  case 0x200014:
    *param_3 = *(uint *)(param_1 + 0x1ec);
    return 0;
  case 0x200016:
    *param_3 = *(uint *)(param_1 + 0x8a7c);
    return 0;
  case 0x200017:
    *param_3 = *(uint *)(param_1 + 0x8a98);
    return 0;
  case 0x200018:
    *param_3 = *(uint *)(param_1 + 0x8a94);
    return 0;
  case 0x200019:
    *param_3 = *(uint *)(param_1 + 0x8844);
    return 0;
  case 0x20001a:
    *param_3 = *(uint *)(param_1 + 0x8a9c);
    return 0;
  case 0x20001d:
    lVar2 = FUN_1436b63c0(param_1,0);
    uVar3 = 0xffffffff;
    if (lVar2 != -1) {
      uVar3 = (uint)lVar2;
    }
    *param_3 = uVar3;
    return 0;
  case 0x200023:
    *param_3 = (uint)(*(char *)(param_1 + 0x8a88) != '\0');
    return 0;
  case 0x200025:
    *param_3 = *(uint *)(param_1 + 0x89f8);
    return 0;
  case 0x200026:
    *param_3 = *(uint *)(param_1 + 0x89fc);
    return 0;
  case 0x200027:
    *param_3 = *(uint *)(param_1 + 0x8a00);
    return 0;
  case 0x200028:
    *param_3 = *(uint *)(param_1 + 0x8ae0);
    return 0;
  case 0x20002a:
    *param_3 = *(uint *)(param_1 + 0x8b14);
    return 0;
  case 0x20002e:
    break;
  }
  iVar1 = *(int *)(param_1 + 0x8a80);
  if (iVar1 == 10) {
    *param_3 = 1;
    return 0;
  }
  if (iVar1 != 0xb) {
    if (iVar1 != 0x14) {
      *param_3 = 0;
      return 0;
    }
    *param_3 = 3;
    return 0;
  }
  *param_3 = 2;
  return 0;
}



// FUNCTION 1436b4bc0 FUN_1436b4bc0 body=259 status=ok
// SIG undefined FUN_1436b4bc0(void)

undefined8 FUN_1436b4bc0(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  
  if (param_2 == 0x40001b) {
    lVar3 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
            ::GetBoundProgramCounterForTimerManager();
  }
  else {
    if (param_2 != 0x40001c) {
      if (param_2 == 0x400022) {
        *param_3 = param_1 + 0x8b18;
        return 0;
      }
      if ((param_2 != 0x40002b) && (param_2 != 0x40002d)) {
        return 0x30;
      }
      lVar3 = *(longlong *)(param_1 + 0x10);
      *param_3 = param_1 + 0x8b28;
      iVar1 = HInterpTrackKeypointProxy::GetMouseCursor();
      uVar5 = 0;
      *(int *)(param_1 + 0x8b28) = iVar1;
      *(undefined8 *)(param_1 + 0x8b30) = 0;
      if (lVar3 == 0) {
        return 0;
      }
      if (iVar1 == 0) {
        return 0;
      }
      pcVar2 = (char *)(lVar3 + 600);
      do {
        if (*pcVar2 != '\0') {
          *(undefined8 *)(param_1 + 0x8b30) = *(undefined8 *)(uVar5 * 0x78 + 0x270 + lVar3);
          return 0;
        }
        uVar4 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar4;
        pcVar2 = pcVar2 + 0x78;
      } while (uVar4 < 2);
      return 0;
    }
    lVar3 = FUN_1436aac70();
  }
  *param_3 = lVar3;
  return 0;
}



// FUNCTION 1436b4cd0 Curl_poll body=1029 status=ok
// SIG undefined Curl_poll(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * Curl_poll(longlong *param_1,uint param_2,ulonglong param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  DWORD DVar3;
  int iVar4;
  longlong *plVar5;
  uint *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  ushort *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined1 auStack_6c8 [32];
  uint *local_6a8;
  ulonglong local_698;
  uint local_690 [2];
  DWORD local_688;
  longlong *local_680;
  uint local_678 [2];
  ulonglong auStack_670 [65];
  uint local_468 [2];
  ulonglong auStack_460 [65];
  uint local_258 [2];
  ulonglong auStack_250 [65];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_6c8;
  puVar6 = (uint *)0x0;
  local_688 = (DWORD)param_3;
  uVar15 = (ulonglong)param_2;
  local_698 = 0;
  local_680 = param_1;
  if ((param_1 != (longlong *)0x0) && (plVar5 = param_1, puVar12 = puVar6, param_2 != 0)) {
    do {
      if (*plVar5 != -1) {
        if ((int)local_688 < 1) {
          uVar7 = 0;
          puVar12 = puVar6;
        }
        else {
          uVar7 = curlx_tvnow();
          puVar12 = (uint *)(param_3 & 0xffffffff);
        }
        DVar3 = local_688;
        uVar21 = 0xffffffffffffffff;
        local_678[0] = 0;
        puVar14 = (ushort *)(param_1 + 1);
        local_468[0] = 0;
        local_258[0] = 0;
        uVar16 = uVar15;
        puVar17 = puVar6;
        puVar19 = puVar6;
        puVar13 = puVar6;
        do {
          uVar2 = *(ulonglong *)(puVar14 + -4);
          puVar14[1] = 0;
          if ((uVar2 != 0xffffffffffffffff) && (uVar1 = *puVar14, (uVar1 & 0x710) != 0)) {
            if (uVar21 < uVar2) {
              uVar21 = uVar2;
            }
            if ((uVar1 & 0x300) != 0) {
              uVar9 = (uint)puVar19;
              puVar10 = puVar6;
              uVar11 = 0;
              if (uVar9 != 0) {
                do {
                  uVar11 = (uint)puVar10;
                  if (auStack_670[(longlong)puVar10] == uVar2) break;
                  uVar11 = uVar11 + 1;
                  puVar10 = (uint *)(ulonglong)uVar11;
                } while (uVar11 < uVar9);
              }
              if ((uVar11 == uVar9) && (uVar9 < 0x40)) {
                auStack_670[uVar11] = uVar2;
                local_678[0] = local_678[0] + 1;
                puVar19 = (uint *)(ulonglong)local_678[0];
              }
            }
            uVar11 = 0;
            if ((uVar1 & 0x10) != 0) {
              uVar20 = (uint)puVar13;
              puVar10 = puVar6;
              uVar9 = uVar11;
              if (uVar20 != 0) {
                do {
                  uVar9 = (uint)puVar10;
                  if (auStack_460[(longlong)puVar10] == uVar2) break;
                  uVar9 = uVar9 + 1;
                  puVar10 = (uint *)(ulonglong)uVar9;
                } while (uVar9 < uVar20);
              }
              if ((uVar9 == uVar20) && (uVar20 < 0x40)) {
                auStack_460[uVar9] = uVar2;
                puVar13 = (uint *)(ulonglong)(local_468[0] + 1);
                local_468[0] = local_468[0] + 1;
              }
            }
            if ((uVar1 & 0x600) != 0) {
              uVar9 = (uint)puVar17;
              puVar10 = puVar6;
              if (uVar9 != 0) {
                do {
                  uVar11 = (uint)puVar10;
                  if (auStack_250[(longlong)puVar10] == uVar2) break;
                  uVar11 = uVar11 + 1;
                  puVar10 = (uint *)(ulonglong)uVar11;
                } while (uVar11 < uVar9);
              }
              if ((uVar11 == uVar9) && (uVar9 < 0x40)) {
                auStack_250[uVar11] = uVar2;
                puVar17 = (uint *)(ulonglong)(local_258[0] + 1);
                local_258[0] = local_258[0] + 1;
              }
            }
          }
          puVar14 = puVar14 + 8;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) {
            local_698 = uVar15;
            if ((((int)puVar19 == 0) && ((int)puVar13 == 0)) && ((int)puVar17 == 0)) {
              if (local_688 == 0) {
                return (uint *)0x0;
              }
              if (-1 < (int)local_688) {
                Sleep(local_688);
                return (uint *)0x0;
              }
              Ordinal_112(0x2726);
              return (uint *)0xffffffff;
            }
            puVar10 = local_690;
            if ((int)local_688 < 0) {
              puVar10 = puVar6;
            }
            while( true ) {
              if ((int)DVar3 < 1) {
                if (DVar3 == 0) {
                  local_690[0] = 0;
                  local_690[1] = 0;
                }
              }
              else {
                local_690[1] = ((int)puVar12 % 1000) * 1000;
                local_690[0] = (int)puVar12 / 1000;
              }
              puVar18 = local_258;
              if ((int)puVar17 == 0) {
                puVar18 = puVar6;
              }
              puVar17 = local_468;
              if ((int)puVar13 == 0) {
                puVar17 = puVar6;
              }
              puVar13 = local_678;
              if ((int)puVar19 == 0) {
                puVar13 = puVar6;
              }
              local_6a8 = puVar10;
              iVar4 = Ordinal_18((int)uVar21 + 1,puVar13,puVar17,puVar18);
              if (iVar4 != -1) break;
              iVar4 = Ordinal_111();
              if ((iVar4 != 0) && ((DAT_146b7b924 != 0 || (iVar4 != 0x2714)))) {
                return (uint *)0xffffffff;
              }
              if ((int)DVar3 < 1) {
                puVar19 = (uint *)(ulonglong)local_678[0];
                puVar13 = (uint *)(ulonglong)local_468[0];
                puVar17 = (uint *)(ulonglong)local_258[0];
              }
              else {
                uVar8 = curlx_tvnow();
                iVar4 = curlx_tvdiff(uVar8,uVar7);
                puVar12 = (uint *)(ulonglong)(DVar3 - iVar4);
                if ((int)(DVar3 - iVar4) < 1) {
                  return (uint *)0x0;
                }
                puVar19 = (uint *)(ulonglong)local_678[0];
                puVar13 = (uint *)(ulonglong)local_468[0];
                puVar17 = (uint *)(ulonglong)local_258[0];
              }
            }
            if (iVar4 < 0) {
              return (uint *)0xffffffff;
            }
            if (iVar4 == 0) {
              return (uint *)0x0;
            }
            puVar14 = (ushort *)((longlong)local_680 + 10);
            do {
              *puVar14 = 0;
              if (*(longlong *)(puVar14 + -5) != -1) {
                iVar4 = _guard_xfg_dispatch_icall_nop(*(longlong *)(puVar14 + -5),local_678);
                if (iVar4 != 0) {
                  *puVar14 = *puVar14 | 0x300;
                }
                iVar4 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(puVar14 + -5),local_468);
                if (iVar4 != 0) {
                  *puVar14 = *puVar14 | 0x10;
                }
                iVar4 = _guard_xfg_dispatch_icall_nop(*(undefined8 *)(puVar14 + -5),local_258);
                if (iVar4 != 0) {
                  *puVar14 = *puVar14 | 0x400;
                }
                if (*puVar14 != 0) {
                  puVar6 = (uint *)(ulonglong)((int)puVar6 + 1);
                }
              }
              puVar14 = puVar14 + 8;
              local_698 = local_698 - 1;
            } while (local_698 != 0);
            return puVar6;
          }
        } while( true );
      }
      uVar11 = (int)puVar12 + 1;
      plVar5 = plVar5 + 2;
      puVar12 = (uint *)(ulonglong)uVar11;
    } while (uVar11 < param_2);
  }
  if (local_688 != 0) {
    if ((int)local_688 < 0) {
      Ordinal_112(0x2726);
      puVar6 = (uint *)0xffffffff;
    }
    else {
      Sleep(local_688);
    }
  }
  return puVar6;
}



// FUNCTION 1436b50e0 FUN_1436b50e0 body=906 status=ok
// SIG undefined FUN_1436b50e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint * FUN_1436b50e0(ulonglong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar10;
  ulonglong uVar11;
  DWORD dwMilliseconds;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  undefined1 auStack_6d8 [32];
  uint *local_6b8;
  uint local_6a8 [4];
  uint *local_698;
  uint local_688 [2];
  ulonglong local_680 [65];
  uint local_478 [2];
  ulonglong local_470;
  uint local_268 [2];
  ulonglong local_260 [65];
  ulonglong local_58;
  uint *puVar9;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_6d8;
  puVar3 = (uint *)0x0;
  dwMilliseconds = (DWORD)param_4;
  local_6a8[0] = 0;
  local_6a8[1] = 0;
  if (((param_1 == 0xffffffffffffffff) && (param_2 == 0xffffffffffffffff)) &&
     (param_3 == 0xffffffffffffffff)) {
    if (dwMilliseconds != 0) {
      if ((int)dwMilliseconds < 0) {
        Ordinal_112(0x2726);
        puVar3 = (uint *)0xffffffff;
      }
      else {
        Sleep(dwMilliseconds);
      }
    }
  }
  else {
    if ((int)dwMilliseconds < 1) {
      uVar4 = 0;
      puVar13 = puVar3;
    }
    else {
      uVar4 = curlx_tvnow();
      puVar13 = (uint *)(param_4 & 0xffffffff);
    }
    local_268[0] = 0;
    bVar14 = param_1 != 0xffffffffffffffff;
    uVar11 = 0xffffffffffffffff;
    if (bVar14) {
      local_680[0] = param_1;
      local_260[0] = param_1;
      local_268[0] = 1;
      uVar11 = param_1;
    }
    local_268[0] = (uint)bVar14;
    local_688[0] = (uint)bVar14;
    uVar6 = (uint)bVar14;
    uVar8 = 0;
    if (param_2 != 0xffffffffffffffff) {
      uVar12 = (uint)bVar14;
      puVar9 = puVar3;
      uVar7 = uVar8;
      if (uVar12 != 0) {
        do {
          uVar7 = (uint)puVar9;
          if (local_680[(longlong)puVar9] == param_2) break;
          uVar7 = uVar7 + 1;
          puVar9 = (uint *)(ulonglong)uVar7;
        } while (uVar7 < uVar12);
      }
      if ((uVar7 == uVar12) && (uVar12 < 0x40)) {
        local_680[uVar7] = param_2;
        local_688[0] = local_688[0] + 1;
      }
      puVar9 = puVar3;
      uVar7 = uVar8;
      if (uVar6 != 0) {
        do {
          uVar7 = (uint)puVar9;
          if (local_260[(longlong)puVar9] == param_2) break;
          uVar7 = uVar7 + 1;
          puVar9 = (uint *)(ulonglong)uVar7;
        } while (uVar7 < uVar6);
      }
      if ((uVar7 == uVar6) && (uVar6 < 0x40)) {
        local_260[uVar7] = param_2;
        uVar6 = local_268[0] + 1;
        local_268[0] = uVar6;
      }
      if (uVar11 < param_2) {
        uVar11 = param_2;
      }
    }
    local_478[0] = 0;
    if (param_3 != 0xffffffffffffffff) {
      local_470 = param_3;
      local_478[0] = 1;
      puVar9 = puVar3;
      if (uVar6 != 0) {
        do {
          uVar8 = (uint)puVar9;
          if (local_260[(longlong)puVar9] == param_3) break;
          uVar8 = uVar8 + 1;
          puVar9 = (uint *)(ulonglong)uVar8;
        } while (uVar8 < uVar6);
      }
      if ((uVar8 == uVar6) && (uVar6 < 0x40)) {
        local_260[uVar8] = param_3;
        local_268[0] = local_268[0] + 1;
      }
      if (uVar11 < param_3) {
        uVar11 = param_3;
      }
    }
    local_6a8[2] = (int)uVar11 + 1;
    local_698 = local_6a8;
    if ((int)dwMilliseconds < 0) {
      local_698 = puVar3;
    }
    do {
      do {
        if ((int)dwMilliseconds < 1) {
          if (dwMilliseconds == 0) {
            local_6a8[0] = 0;
            local_6a8[1] = 0;
          }
        }
        else {
          local_6a8[1] = ((int)puVar13 % 1000) * 1000;
          local_6a8[0] = (int)puVar13 / 1000;
        }
        puVar9 = local_478;
        if (local_478[0] == 0) {
          puVar9 = puVar3;
        }
        puVar10 = local_688;
        if (local_688[0] == 0) {
          puVar10 = puVar3;
        }
        local_6b8 = local_698;
        iVar1 = Ordinal_18(local_6a8[2],puVar10,puVar9,local_268);
        if (iVar1 != -1) {
          if (iVar1 < 0) {
            return (uint *)0xffffffff;
          }
          if (iVar1 != 0) {
            if (param_1 != 0xffffffffffffffff) {
              iVar1 = _guard_xfg_dispatch_icall_nop(param_1,local_688);
              puVar3 = (uint *)(ulonglong)(iVar1 != 0);
              iVar2 = _guard_xfg_dispatch_icall_nop(param_1,local_268);
              if (iVar2 != 0) {
                puVar3 = (uint *)(ulonglong)(iVar1 != 0 | 4);
              }
            }
            if (param_2 != 0xffffffffffffffff) {
              iVar1 = _guard_xfg_dispatch_icall_nop(param_2,local_688);
              if (iVar1 != 0) {
                puVar3 = (uint *)(ulonglong)((uint)puVar3 | 8);
              }
              iVar1 = _guard_xfg_dispatch_icall_nop(param_2,local_268);
              if (iVar1 != 0) {
                puVar3 = (uint *)(ulonglong)((uint)puVar3 | 4);
              }
            }
            if (param_3 != 0xffffffffffffffff) {
              iVar1 = _guard_xfg_dispatch_icall_nop(param_3,local_478);
              if (iVar1 != 0) {
                puVar3 = (uint *)(ulonglong)((uint)puVar3 | 2);
              }
              iVar1 = _guard_xfg_dispatch_icall_nop(param_3,local_268);
              if (iVar1 != 0) {
                return (uint *)(ulonglong)((uint)puVar3 | 4);
              }
              return puVar3;
            }
            return puVar3;
          }
          goto LAB_1436b539f;
        }
        iVar1 = Ordinal_111();
        if (iVar1 != 0) {
          if (DAT_146b7b924 != 0) {
            return (uint *)0xffffffff;
          }
          if (iVar1 != 0x2714) {
            return (uint *)0xffffffff;
          }
        }
      } while ((int)dwMilliseconds < 1);
      uVar5 = curlx_tvnow();
      iVar1 = curlx_tvdiff(uVar5,uVar4);
      puVar13 = (uint *)(ulonglong)(dwMilliseconds - iVar1);
    } while (0 < (int)(dwMilliseconds - iVar1));
LAB_1436b539f:
    puVar3 = (uint *)0x0;
  }
  return puVar3;
}



// FUNCTION 1436b5470 Curl_wait_ms body=42 status=ok
// SIG undefined Curl_wait_ms(void)

undefined8 Curl_wait_ms(DWORD param_1)

{
  if (param_1 != 0) {
    if ((int)param_1 < 0) {
      Ordinal_112(0x2726);
      return 0xffffffff;
    }
    Sleep(param_1);
  }
  return 0;
}



// FUNCTION 1436b54a0 FUN_1436b54a0 body=500 status=ok
// SIG undefined FUN_1436b54a0(void)

undefined8 FUN_1436b54a0(longlong *param_1,uint param_2,void *param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  code *pcVar6;
  longlong lVar7;
  code *pcVar8;
  code *pcVar9;
  
  lVar1 = *param_1;
  pcVar6 = (code *)0x0;
  if (param_4 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar1 + 0x168) & 0x10) == 0) {
    pcVar9 = pcVar6;
    if ((param_2 & 1) != 0) {
      pcVar9 = *(code **)(lVar1 + 0x220);
    }
    pcVar8 = pcVar6;
    if ((((param_2 & 2) != 0) && (pcVar8 = *(code **)(lVar1 + 0x228), pcVar8 == (code *)0x0)) &&
       (pcVar8 = pcVar6, *(longlong *)(lVar1 + 0x1d0) != 0)) {
      pcVar8 = *(code **)(lVar1 + 0x220);
    }
    do {
      uVar5 = 0x4000;
      if (param_4 < 0x4001) {
        uVar5 = param_4;
      }
      if (pcVar9 != (code *)0x0) {
        uVar3 = (*pcVar9)(param_3,1,uVar5,*(undefined8 *)(lVar1 + 0x1c0));
        if (uVar3 == 0x10000001) {
          if ((*(byte *)(param_1[0x7d] + 0x78) & 0x10) != 0) {
            FUN_1436b5820(lVar1,"Write callback asked for PAUSE when not supported!");
            return 0x17;
          }
          uVar4 = FUN_1436b5fb0(lVar1,param_2,param_3,param_4);
          return uVar4;
        }
        if (uVar3 != uVar5) {
          FUN_1436b5820(lVar1,"Failed writing body (%zu != %zu)",uVar3,uVar5);
          return 0x17;
        }
      }
      if (pcVar8 != (code *)0x0) {
        uVar3 = (*pcVar8)(param_3,1,uVar5,*(undefined8 *)(lVar1 + 0x1d0));
        if (uVar3 == 0x10000001) {
          uVar4 = FUN_1436b5fb0(lVar1,2,param_3,param_4);
          return uVar4;
        }
        if (uVar3 != uVar5) {
          FUN_1436b5820(lVar1,"Failed writing header");
          return 0x17;
        }
      }
      param_3 = (void *)((longlong)param_3 + uVar5);
      param_4 = param_4 - uVar5;
    } while (param_4 != 0);
  }
  else {
    if (param_2 != *(uint *)(lVar1 + 0x8830)) {
      return 0x38;
    }
    lVar7 = *(longlong *)(lVar1 + 0x8828) + param_4;
    lVar2 = (*(code *)PTR_realloc_1467dcc68)(*(undefined8 *)(lVar1 + 0x8820),lVar7);
    if (lVar2 == 0) {
      return 0x1b;
    }
    _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(lVar1 + 0x8828) + lVar2),param_3,param_4);
    *(longlong *)(lVar1 + 0x8820) = lVar2;
    *(longlong *)(lVar1 + 0x8828) = lVar7;
  }
  return 0;
}



// FUNCTION 1436b56a0 Curl_client_write body=31 status=ok
// SIG undefined Curl_client_write(void)

void Curl_client_write(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  
  if (param_4 == 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_3 + lVar1) != '\0');
  }
  FUN_1436b54a0();
  return;
}



// FUNCTION 1436b56c0 FUN_1436b56c0 body=351 status=ok
// SIG undefined FUN_1436b56c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436b56c0(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  longlong param_5)

{
  longlong lVar1;
  int iVar2;
  size_t _Size;
  char *pcVar4;
  undefined1 auStack_108 [32];
  undefined *local_e8;
  longlong local_e0;
  char local_d8 [160];
  ulonglong local_38;
  size_t sVar3;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (((*(char *)(param_1 + 0x440) == '\0') || (param_5 == 0)) ||
     (*(longlong *)(param_5 + 0xc0) == 0)) goto LAB_1436b57f1;
  pcVar4 = "Data";
  if (param_2 == 1) {
    pcVar4 = "Header";
LAB_1436b5752:
    local_e8 = &DAT_145b6a588;
  }
  else {
    if (param_2 == 2) {
      pcVar4 = "Header";
    }
    else {
      if (param_2 == 3) goto LAB_1436b5752;
      if (param_2 != 4) goto LAB_1436b57f1;
    }
    local_e8 = &DAT_145b6a590;
  }
  local_e0 = *(longlong *)(param_5 + 0xc0);
  curl_msnprintf(local_d8,0xa0,"[%s %s %s]",pcVar4);
  sVar3 = 0xffffffffffffffff;
  do {
    _Size = sVar3 + 1;
    lVar1 = sVar3 + 1;
    sVar3 = _Size;
  } while (local_d8[lVar1] != '\0');
  if (*(code **)(param_1 + 600) == (code *)0x0) {
    fwrite(&DAT_145b6a4b8,2,1,*(FILE **)(param_1 + 0x1a0));
    fwrite(local_d8,_Size,1,*(FILE **)(param_1 + 0x1a0));
  }
  else {
    local_e8 = *(undefined **)(param_1 + 0x1a8);
    iVar2 = (**(code **)(param_1 + 600))(param_1,0,local_d8,_Size);
    if (iVar2 != 0) {
      return;
    }
  }
LAB_1436b57f1:
  FUN_1436b6140(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 1436b5820 FUN_1436b5820 body=191 status=ok
// SIG undefined FUN_1436b5820(void)

void FUN_1436b5820(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  curl_mvsnprintf(param_1 + 0x7e8,0x4000,param_2);
  if ((*(longlong *)(param_1 + 0x1b0) != 0) && (*(char *)(param_1 + 0x8840) == '\0')) {
    curl_msnprintf(*(longlong *)(param_1 + 0x1b0),0x100,&DAT_145afa01c);
    *(undefined1 *)(param_1 + 0x8840) = 1;
  }
  if (*(char *)(param_1 + 0x458) != '\0') {
    uVar1 = 0xffffffffffffffff;
    do {
      uVar2 = uVar1;
      uVar1 = uVar2 + 1;
    } while (*(char *)(param_1 + 0x7e8 + uVar1) != '\0');
    if (uVar1 < 0x3fff) {
      *(undefined1 *)(uVar2 + 0x7e9 + param_1) = 10;
      uVar1 = uVar2 + 2;
      *(undefined1 *)(uVar2 + 0x7ea + param_1) = 0;
    }
    FUN_1436b56c0(param_1,0,param_1 + 0x7e8,uVar1,0);
  }
  return;
}



// FUNCTION 1436b58e0 FUN_1436b58e0 body=155 status=ok
// SIG undefined FUN_1436b58e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436b58e0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_858 [32];
  undefined8 local_838;
  char local_828 [2064];
  ulonglong local_18;
  
  if ((param_1 != 0) &&
     (local_18 = DAT_1468387a8 ^ (ulonglong)auStack_858, *(char *)(param_1 + 0x458) != '\0')) {
    curl_mvsnprintf(local_828,0x801,param_2);
    lVar2 = -1;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (local_828[lVar1] != '\0');
    local_838 = 0;
    FUN_1436b56c0(param_1,0,local_828);
  }
  return;
}



// FUNCTION 1436b5980 FUN_1436b5980 body=356 status=ok
// SIG undefined FUN_1436b5980(void)

undefined4
FUN_1436b5980(longlong *param_1,longlong param_2,void *param_3,ulonglong param_4,size_t *param_5)

{
  uint uVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  size_t _Size;
  ulonglong uVar7;
  void *pvVar8;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0x38;
  cVar4 = FUN_1436a4ab0(*(undefined8 *)(*param_1 + 0x78),1);
  if ((cVar4 == '\0') || (*(int *)param_1[0x103] != 1)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar2 = param_1[0x3b];
  *param_5 = 0;
  if (bVar3) {
    uVar6 = param_1[0x9d] - param_1[0x9c];
    uVar7 = param_4;
    if (uVar6 < param_4) {
      uVar7 = uVar6;
    }
    if (uVar7 != 0) {
      _guard_xfg_dispatch_icall_nop(param_3,(void *)(param_1[0x9b] + param_1[0x9c]),uVar7);
      param_1[0x9c] = param_1[0x9c] + uVar7;
      *(undefined1 *)((longlong)param_1 + 0x3cf) = 0;
      *param_5 = uVar7;
      return 0;
    }
    pvVar8 = (void *)param_1[0x9b];
    uVar7 = 0x4000;
    if (param_4 < 0x4000) {
      uVar7 = param_4;
    }
  }
  else {
    uVar1 = *(uint *)(*param_1 + 0x400);
    uVar5 = 0x4000;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    if ((int)uVar5 <= (int)param_4) {
      uVar5 = 0x4000;
      if (uVar1 != 0) {
        uVar5 = uVar1;
      }
      param_4 = (ulonglong)uVar5;
    }
    pvVar8 = param_3;
    uVar7 = (longlong)(int)param_4;
  }
  _Size = (*(code *)param_1[(ulonglong)(param_2 == lVar2) + 0x3f])
                    (param_1,(ulonglong)(param_2 == lVar2),pvVar8,uVar7,local_res8);
  if (-1 < (longlong)_Size) {
    if (bVar3) {
      _guard_xfg_dispatch_icall_nop(param_3,(void *)param_1[0x9b],_Size);
      param_1[0x9d] = _Size;
      param_1[0x9c] = _Size;
    }
    *param_5 = *param_5 + _Size;
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 1436b5af0 Curl_read_plain body=70 status=ok
// SIG undefined Curl_read_plain(void)

undefined8 Curl_read_plain(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *in_R9;
  
  iVar1 = Ordinal_16();
  if ((longlong)iVar1 == -1) {
    iVar1 = Ordinal_111();
    uVar2 = 0x38;
    if (iVar1 == 0x2733) {
      uVar2 = 0x51;
    }
    return uVar2;
  }
  *in_R9 = (longlong)iVar1;
  return 0;
}



// FUNCTION 1436b5b40 FUN_1436b5b40 body=191 status=ok
// SIG undefined FUN_1436b5b40(void)

longlong FUN_1436b5b40(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[(longlong)param_2 + 0x3a];
  lVar3 = FUN_1436b5f10();
  if (lVar3 < 1) {
    iVar2 = Ordinal_16(lVar1,param_3,param_4,0);
    lVar3 = (longlong)iVar2;
    *param_5 = 0;
    if (lVar3 == -1) {
      iVar2 = Ordinal_111();
      if (iVar2 == 0x2733) {
        *param_5 = 0x51;
      }
      else {
        uVar4 = FUN_1436a7be0(param_1,iVar2);
        FUN_1436b5820(*param_1,"Recv failure: %s",uVar4);
        *(int *)(*param_1 + 0x8844) = iVar2;
        *param_5 = 0x38;
      }
    }
  }
  else {
    *param_5 = 0;
  }
  return lVar3;
}



// FUNCTION 1436b5c00 FUN_1436b5c00 body=177 status=ok
// SIG undefined FUN_1436b5c00(void)

longlong FUN_1436b5c00(longlong *param_1,int param_2,undefined8 param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = param_1[(longlong)param_2 + 0x3a];
  FUN_1436b6040();
  iVar1 = Ordinal_19(lVar3,param_3,param_4,0);
  lVar3 = (longlong)iVar1;
  *param_5 = 0;
  if (lVar3 == -1) {
    iVar1 = Ordinal_111();
    if (iVar1 == 0x2733) {
      *param_5 = 0x51;
      lVar3 = 0;
    }
    else {
      uVar2 = FUN_1436a7be0(param_1,iVar1);
      FUN_1436b5820(*param_1,"Send failure: %s",uVar2);
      *(int *)(*param_1 + 0x8844) = iVar1;
      *param_5 = 0x37;
    }
  }
  return lVar3;
}



// FUNCTION 1436b5cc0 FUN_1436b5cc0 body=284 status=ok
// SIG undefined FUN_1436b5cc0(void)

int FUN_1436b5cc0(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined8 local_res20;
  int local_58 [6];
  
  lVar1 = *param_2;
  local_res20 = param_4;
  lVar2 = curl_mvaprintf(param_3,&local_res20);
  if (lVar2 == 0) {
    return 0x1b;
  }
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
    lVar5 = lVar2;
  } while (*(char *)(lVar2 + lVar4) != '\0');
  do {
    local_58[0] = 0;
    lVar3 = (*(code *)param_2[(ulonglong)(param_1 == param_2[0x3b]) + 0x41])
                      (param_2,(ulonglong)(param_1 == param_2[0x3b]),lVar5,lVar4,local_58);
    if (lVar3 < 0) {
      if (local_58[0] == 0) {
        iVar6 = 0x37;
LAB_1436b5db0:
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
        return iVar6;
      }
      iVar6 = local_58[0];
      if (local_58[0] != 0x51) goto LAB_1436b5db0;
      lVar3 = 0;
    }
    iVar6 = 0;
    if (*(char *)(lVar1 + 0x458) != '\0') {
      FUN_1436b56c0(lVar1,4,lVar5,lVar3,param_2);
    }
    if (lVar3 == lVar4) goto LAB_1436b5db0;
    lVar4 = lVar4 - lVar3;
    lVar5 = lVar5 + lVar3;
  } while( true );
}



// FUNCTION 1436b5de0 FUN_1436b5de0 body=98 status=ok
// SIG undefined FUN_1436b5de0(void)

int FUN_1436b5de0(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 longlong *param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  int local_res8 [8];
  
  local_res8[0] = 0;
  uVar1 = (ulonglong)(param_2 == *(longlong *)(param_1 + 0x1d8));
  lVar2 = (**(code **)(param_1 + 0x208 + uVar1 * 8))(param_1,uVar1,param_3,param_4,local_res8);
  *param_5 = lVar2;
  if (-1 < lVar2) {
    return 0;
  }
  if (local_res8[0] == 0) {
    local_res8[0] = 0x37;
  }
  else if (local_res8[0] == 0x51) {
    *param_5 = 0;
    return 0;
  }
  return local_res8[0];
}



// FUNCTION 1436b5e50 FUN_1436b5e50 body=192 status=ok
// SIG undefined FUN_1436b5e50(void)

int FUN_1436b5e50(longlong *param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                 longlong *param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  lVar1 = param_1[(ulonglong)(param_2 == param_1[0x3b]) + 0x3a];
  FUN_1436b6040();
  iVar2 = Ordinal_19(lVar1,param_3,param_4,0);
  if ((longlong)iVar2 == -1) {
    iVar3 = Ordinal_111();
    if (iVar3 == 0x2733) {
      *param_5 = 0;
      return iVar2 + 0x52;
    }
    uVar4 = FUN_1436a7be0(param_1,iVar3);
    FUN_1436b5820(*param_1,"Send failure: %s",uVar4);
    *(int *)(*param_1 + 0x8844) = iVar3;
    iVar3 = 0x37;
  }
  else {
    iVar3 = 0;
  }
  *param_5 = (longlong)iVar2;
  return iVar3;
}



// FUNCTION 1436b5f10 FUN_1436b5f10 body=154 status=ok
// SIG undefined FUN_1436b5f10(void)

size_t FUN_1436b5f10(longlong param_1,int param_2,void *param_3,ulonglong param_4)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong _Size;
  
  plVar2 = (longlong *)(param_1 + 0x218 + (longlong)param_2 * 0x20);
  if (*plVar2 != 0) {
    uVar1 = plVar2[3];
    _Size = 0;
    if (uVar1 < (ulonglong)plVar2[2]) {
      _Size = plVar2[2] - uVar1;
      if (param_4 < _Size) {
        _Size = param_4;
      }
      _guard_xfg_dispatch_icall_nop(param_3,(void *)(uVar1 + *plVar2),_Size);
      plVar2[3] = plVar2[3] + _Size;
    }
    if (plVar2[3] == plVar2[2]) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar2);
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2[2] = 0;
      plVar2[3] = 0;
    }
    return _Size;
  }
  return 0;
}



// FUNCTION 1436b5fb0 FUN_1436b5fb0 body=131 status=ok
// SIG undefined FUN_1436b5fb0(void)

undefined4 FUN_1436b5fb0(longlong param_1,undefined4 param_2,void *param_3,size_t param_4)

{
  undefined4 uVar1;
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(param_4);
  if (_Dst == (void *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,param_3,param_4);
    *(void **)(param_1 + 0x8820) = _Dst;
    *(size_t *)(param_1 + 0x8828) = param_4;
    *(undefined4 *)(param_1 + 0x8830) = param_2;
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x10;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436b6040 FUN_1436b6040 body=243 status=ok
// SIG undefined FUN_1436b6040(void)

void FUN_1436b6040(longlong param_1,int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  lVar6 = (longlong)param_2;
  plVar4 = (longlong *)(param_1 + 0x218 + lVar6 * 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x1d0 + lVar6 * 8);
  uVar5 = plVar4[1] - plVar4[2];
  if ((((*(byte *)(*(longlong *)(param_1 + 1000) + 0x74) & 3) != 0) &&
      (*(code **)(param_1 + 0x1f8 + lVar6 * 8) == FUN_1436b5b40)) &&
     ((*plVar4 == 0 || (uVar5 != 0)))) {
    uVar2 = FUN_1436b50e0(uVar1,0xffffffffffffffff,0xffffffffffffffff,0);
    if ((uVar2 != 0xffffffff) && ((uVar2 & 1) != 0)) {
      if (*plVar4 == 0) {
        plVar4[1] = 0x8000;
        lVar6 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
        uVar5 = plVar4[1];
        *plVar4 = lVar6;
        plVar4[2] = 0;
        plVar4[3] = 0;
        if (lVar6 == 0) {
          plVar4[1] = 0;
          return;
        }
      }
      iVar3 = Ordinal_16(uVar1,*plVar4 + plVar4[2],uVar5 & 0xffffffff,0);
      if (0 < iVar3) {
        plVar4[2] = plVar4[2] + (longlong)iVar3;
      }
    }
  }
  return;
}



// FUNCTION 1436b6140 FUN_1436b6140 body=154 status=ok
// SIG undefined FUN_1436b6140(void)

undefined8 FUN_1436b6140(longlong param_1,uint param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 600) != (code *)0x0) {
    uVar1 = (**(code **)(param_1 + 600))();
    return uVar1;
  }
  if (param_2 < 3) {
    fwrite(&DAT_145b6a4b8 + (longlong)(int)param_2 * 3,2,1,*(FILE **)(param_1 + 0x1a0));
    fwrite(param_3,param_4,1,*(FILE **)(param_1 + 0x1a0));
  }
  return 0;
}



// FUNCTION 1436b61e0 FUN_1436b61e0 body=109 status=ok
// SIG undefined FUN_1436b61e0(void)

undefined8 FUN_1436b61e0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      if ((param_2 != *(longlong *)(param_1 + 0x1d8)) || (*(char *)(param_1 + 0x1f1) == '\0')) {
        FUN_1436a4770();
                    /* WARNING: Could not recover jumptable at 0x0001436b624a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),param_2);
        return uVar1;
      }
      *(undefined1 *)(param_1 + 0x1f1) = 0;
    }
    FUN_1436a4770();
  }
  Ordinal_3(param_2);
  return 0;
}



// FUNCTION 1436b6250 FUN_1436b6250 body=367 status=ok
// SIG undefined FUN_1436b6250(void)

int FUN_1436b6250(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  byte bVar9;
  
  lVar2 = *param_1;
  uVar7 = curlx_tvnow();
  iVar4 = *(int *)(lVar2 + 0x2c8);
  iVar1 = *(int *)(lVar2 + 0x2cc);
  bVar9 = 0 < iVar4;
  iVar6 = 7;
  if (0 < iVar1) {
    bVar9 = bVar9 | 2;
  }
  iVar8 = iVar4;
  if ((((bVar9 != 1) && (iVar8 = iVar1, bVar9 != 2)) && (iVar8 = 300000, bVar9 == 3)) &&
     (iVar8 = iVar1, iVar4 < iVar1)) {
    iVar8 = iVar4;
  }
  iVar4 = curlx_tvdiff(uVar7,*(undefined8 *)(lVar2 + 0x738));
  iVar8 = iVar8 - iVar4;
  if (iVar8 < 1) {
    FUN_1436b5820(lVar2,"Connection time-out");
    iVar6 = 0x1c;
  }
  else {
    uVar5 = Curl_num_addresses(*param_2);
    *(undefined4 *)(param_1 + 0x7c) = uVar5;
    param_1[0xc] = *param_2;
    param_1[0xd] = 0;
    param_1[0x3c] = -1;
    param_1[0x3d] = -1;
    FUN_1436a4500(*param_1,200);
    if (*(longlong *)(param_1[0xc] + 0x28) != 0) {
      iVar8 = iVar8 / 2;
    }
    *(int *)((longlong)param_1 + 0x3e4) = iVar8;
    lVar3 = param_1[0xc];
    while ((lVar3 != 0 && (iVar6 = FUN_1436b74a0(param_1,param_1[0xc],param_1 + 0x3c), iVar6 != 0)))
    {
      lVar3 = *(longlong *)(param_1[0xc] + 0x28);
      param_1[0xc] = lVar3;
    }
    if (param_1[0x3c] == -1) {
      if (iVar6 == 0) {
        iVar6 = 7;
      }
    }
    else {
      *(int *)(lVar2 + 0x8a9c) = *(int *)(lVar2 + 0x8a9c) + 1;
      iVar6 = 0;
    }
  }
  return iVar6;
}



// FUNCTION 1436b63c0 FUN_1436b63c0 body=223 status=ok
// SIG undefined FUN_1436b63c0(void)

longlong FUN_1436b63c0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 local_res8 [8];
  longlong local_18;
  char local_10;
  
  lVar1 = *(longlong *)(param_1 + 2000);
  if ((lVar1 != 0) &&
     ((lVar3 = *(longlong *)(param_1 + 0x80), lVar3 != 0 || (*(longlong *)(param_1 + 0x78) != 0))))
  {
    local_10 = '\0';
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x78);
    }
    local_18 = lVar1;
    Curl_conncache_foreach(lVar3 + 0xc0,&local_18,&LAB_1436b73f0);
    if (local_10 == '\0') {
      *(undefined8 *)(param_1 + 2000) = 0;
      return -1;
    }
    if (param_2 != (longlong *)0x0) {
      *param_2 = lVar1;
    }
    lVar3 = *(longlong *)(lVar1 + 0x1d0);
    if (*(char *)(lVar1 + 600) == '\0') {
      if (lVar3 == -1) {
        return -1;
      }
      iVar2 = Ordinal_16(lVar3,local_res8,1);
    }
    else {
      iVar2 = FGenericPlatformCompression::CompressMemoryBound(lVar1);
    }
    if (iVar2 != 0) {
      return lVar3;
    }
  }
  return -1;
}



// FUNCTION 1436b64a0 FUN_1436b64a0 body=1159 status=ok
// SIG undefined FUN_1436b64a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436b64a0(longlong *param_1,int param_2,undefined1 *param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte bVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  uint local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  ulonglong local_88;
  undefined1 *local_80;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = *param_1;
  uVar12 = 0;
  local_88 = (ulonglong)param_2;
  *param_3 = 0;
  local_90 = 0;
  local_98 = 0;
  if (*(char *)(local_88 + 0x3c4 + (longlong)param_1) == '\0') {
    local_8c = param_2;
    local_80 = param_3;
    uVar6 = curlx_tvnow();
    iVar3 = *(int *)(lVar1 + 0x2c8);
    iVar5 = *(int *)(lVar1 + 0x2cc);
    bVar9 = 0 < iVar3;
    if (0 < iVar5) {
      bVar9 = bVar9 | 2;
    }
    iVar13 = iVar3;
    if ((((bVar9 != 1) && (iVar13 = iVar5, bVar9 != 2)) && (iVar13 = 300000, bVar9 == 3)) &&
       (iVar13 = iVar5, iVar3 < iVar5)) {
      iVar13 = iVar3;
    }
    iVar3 = curlx_tvdiff(uVar6,*(undefined8 *)(lVar1 + 0x738));
    iVar13 = iVar13 - iVar3;
    if (iVar13 < 1) {
      FUN_1436b5820(lVar1,"Connection time-out");
      uVar7 = 0x1c;
    }
    else {
      uVar14 = 0;
      plVar15 = param_1 + 0x3c;
      do {
        uVar11 = uVar14 ^ 1;
        local_94 = uVar11;
        if (*plVar15 != -1) {
          uVar4 = FUN_1436b50e0(0xffffffffffffffff,0xffffffffffffffff,*plVar15,0);
          if (uVar4 == 0) {
            uVar12 = 0;
            iVar3 = *(int *)((longlong)param_1 + 0x3e4);
            local_98 = 0;
            iVar5 = curlx_tvdiff();
            if (iVar3 <= iVar5) {
              FUN_1436b58e0(lVar1,"After %ldms connect time, move on!\n",iVar3);
              uVar12 = 0x274c;
              local_98 = 0x274c;
            }
            uVar11 = local_94;
            if (((uVar14 == 0) && (param_1[0xd] == 0)) &&
               (iVar3 = curlx_tvdiff(), uVar11 = local_94, 199 < iVar3)) {
              FUN_1436b7950(param_1,local_8c,1);
              uVar11 = local_94;
            }
          }
          else if ((uVar4 == 2) || (*(char *)((longlong)param_1 + 0x3d4) != '\0')) {
            lVar10 = *plVar15;
            local_94 = 0;
            local_98 = 4;
            SleepEx(0,0);
            local_a8 = &local_98;
            iVar3 = Ordinal_7(lVar10,0xffff,0x1007);
            uVar12 = local_94;
            if (iVar3 != 0) {
              uVar12 = Ordinal_111();
            }
            uVar7 = local_88;
            if ((uVar12 == 0) || (uVar12 == 0x2748)) {
              bVar2 = true;
            }
            else {
              bVar2 = false;
            }
            local_98 = uVar12;
            if (bVar2) {
              param_1[local_88 + 0x3a] = param_1[(longlong)(int)uVar14 + 0x3c];
              param_1[0xb] = param_1[(longlong)(int)uVar14 + 0xc];
              param_1[(longlong)(int)uVar14 + 0x3c] = -1;
              if (param_1[(longlong)(int)uVar11 + 0x3c] != -1) {
                FUN_1436b61e0(param_1);
                param_1[(longlong)(int)uVar11 + 0x3c] = -1;
              }
              uVar8 = FUN_1436ae5f0(param_1,uVar7 & 0xffffffff);
              if ((int)uVar8 == 0) {
                *(undefined1 *)(uVar7 + 0x3c4 + (longlong)param_1) = 1;
                *local_80 = 1;
                if ((int)uVar7 == 0) {
                  FUN_1436bee30(lVar1,4);
                }
                FUN_1436b6d00(param_1,param_1[uVar7 + 0x3a]);
                FUN_1436b0e40(param_1);
                return 0;
              }
              return uVar8;
            }
            FUN_1436b58e0();
          }
          else if ((uVar4 & 4) != 0) {
            verifyconnect();
            uVar12 = local_98;
          }
          if (uVar12 != 0) {
            *(uint *)(lVar1 + 0x8844) = uVar12;
            Ordinal_112(uVar12);
            if (plVar15[-0x30] != 0) {
              Curl_printable_address(plVar15[-0x30],local_78,0x2e);
              local_a8 = (uint *)FUN_1436a7be0(param_1,uVar12);
              FUN_1436b58e0(lVar1,"connect to %s port %ld failed: %s\n",local_78);
              iVar3 = iVar13;
              if (*(longlong *)(plVar15[-0x30] + 0x28) != 0) {
                iVar3 = iVar13 / 2;
              }
              *(int *)((longlong)param_1 + 0x3e4) = iVar3;
              uVar4 = FUN_1436b7950(param_1,local_8c,uVar14);
              if ((uVar4 != 7) || (param_1[(longlong)(int)uVar11 + 0x3c] == -1)) {
                local_90 = uVar4;
              }
            }
          }
        }
        uVar7 = (ulonglong)local_90;
        uVar14 = uVar14 + 1;
        plVar15 = plVar15 + 1;
      } while ((int)uVar14 < 2);
      if (local_90 != 0) {
        if (param_1[0xd] == 0) {
          uVar14 = FUN_1436b7950(param_1,local_8c,1);
          uVar7 = (ulonglong)uVar14;
          if (uVar14 == 0) {
            return 0;
          }
        }
        if (*(char *)((longlong)param_1 + 0x3bd) == '\0') {
          if (*(char *)((longlong)param_1 + 0x3bb) == '\0') {
            lVar10 = param_1[0x17];
          }
          else {
            lVar10 = param_1[0x1b];
          }
        }
        else {
          lVar10 = param_1[0x1f];
        }
        local_a8 = (uint *)FUN_1436a7be0(param_1,uVar12);
        FUN_1436b5820(lVar1,"Failed to connect to %s port %ld: %s",lVar10,(int)param_1[0x21]);
      }
    }
  }
  else {
    *param_3 = 1;
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 1436b6930 FUN_1436b6930 body=187 status=ok
// SIG undefined FUN_1436b6930(void)

void FUN_1436b6930(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  uVar2 = *(undefined8 *)((longlong)param_1 + 0x11c);
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x8ab0) = *(undefined8 *)((longlong)param_1 + 0x114);
  *(undefined8 *)(lVar1 + 0x8ab8) = uVar2;
  uVar2 = *(undefined8 *)((longlong)param_1 + 300);
  *(undefined8 *)(lVar1 + 0x8ac0) = *(undefined8 *)((longlong)param_1 + 0x124);
  *(undefined8 *)(lVar1 + 0x8ac8) = uVar2;
  *(undefined8 *)(lVar1 + 0x8ad0) = *(undefined8 *)((longlong)param_1 + 0x134);
  *(undefined4 *)(lVar1 + 0x8ad8) = *(undefined4 *)((longlong)param_1 + 0x13c);
  *(short *)(lVar1 + 0x8adc) = (short)param_1[0x28];
  lVar1 = *param_1;
  lVar3 = param_1[0x2a];
  *(longlong *)(lVar1 + 0x8ae4) = param_1[0x29];
  *(longlong *)(lVar1 + 0x8aec) = lVar3;
  lVar3 = param_1[0x2c];
  *(longlong *)(lVar1 + 0x8af4) = param_1[0x2b];
  *(longlong *)(lVar1 + 0x8afc) = lVar3;
  *(longlong *)(lVar1 + 0x8b04) = param_1[0x2d];
  *(int *)(lVar1 + 0x8b0c) = (int)param_1[0x2e];
  *(undefined2 *)(lVar1 + 0x8b10) = *(undefined2 *)((longlong)param_1 + 0x174);
  *(undefined4 *)(*param_1 + 0x8ae0) = *(undefined4 *)((longlong)param_1 + 0x144);
  *(int *)(*param_1 + 0x8b14) = (int)param_1[0x2f];
  return;
}



// FUNCTION 1436b69f0 Curl_sndbufset body=186 status=ok
// SIG undefined Curl_sndbufset(void)

void Curl_sndbufset(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int local_res10 [2];
  int local_res18 [2];
  undefined4 local_res20 [2];
  
  local_res18[0] = 0x4020;
  local_res10[0] = 0;
  local_res20[0] = 4;
  if (DAT_146b7b928 == 0) {
    cVar1 = Curl_verify_windows_version(6,0,2,3);
    if (cVar1 != '\0') {
      DAT_146b7b928 = 2;
      return;
    }
    DAT_146b7b928 = 1;
  }
  else if (DAT_146b7b928 == 2) {
    return;
  }
  iVar2 = Ordinal_7(param_1,0xffff,0x1001,local_res10,local_res20);
  if ((iVar2 != 0) || (local_res10[0] <= local_res18[0])) {
    Ordinal_21(param_1,0xffff,0x1001,local_res18,4);
  }
  return;
}



// FUNCTION 1436b6ab0 FUN_1436b6ab0 body=224 status=ok
// SIG undefined FUN_1436b6ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436b6ab0(longlong *param_1,longlong param_2,int *param_3,longlong *param_4)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int *piVar6;
  undefined1 auStack_e8 [32];
  int local_c8 [36];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar4 = *param_1;
  piVar6 = local_c8;
  if (param_3 != (int *)0x0) {
    piVar6 = param_3;
  }
  *piVar6 = *(int *)(param_2 + 4);
  piVar6[1] = *(int *)((longlong)param_1 + 0xa4);
  iVar3 = 0x11;
  if (*(int *)((longlong)param_1 + 0xa4) != 2) {
    iVar3 = *(int *)(param_2 + 0xc);
  }
  piVar6[2] = iVar3;
  uVar2 = *(uint *)(param_2 + 0x10);
  if (0x80 < *(uint *)(param_2 + 0x10)) {
    uVar2 = 0x80;
  }
  piVar6[3] = uVar2;
  _guard_xfg_dispatch_icall_nop(piVar6 + 4,*(void **)(param_2 + 0x20),(ulonglong)uVar2);
  pcVar1 = *(code **)(lVar4 + 0x278);
  if (pcVar1 == (code *)0x0) {
    lVar4 = Ordinal_23(*piVar6,piVar6[1],piVar6[2]);
  }
  else {
    lVar4 = (*pcVar1)(*(undefined8 *)(lVar4 + 0x280),0,piVar6);
  }
  *param_4 = lVar4;
  if (lVar4 == -1) {
    uVar5 = 7;
  }
  else {
    if (((int)param_1[0x14] != 0) && (*piVar6 == 0x17)) {
      piVar6[10] = (int)param_1[0x14];
    }
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1436b6b90 Curl_tcpnodelay body=133 status=ok
// SIG undefined Curl_tcpnodelay(void)

void Curl_tcpnodelay(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined4 local_res8 [2];
  
  uVar1 = *param_1;
  local_res8[0] = 1;
  iVar2 = Ordinal_21(param_2,6,1,local_res8,4);
  if (iVar2 < 0) {
    uVar3 = Ordinal_111();
    uVar4 = FUN_1436a7be0(param_1,uVar3);
    FUN_1436b58e0(uVar1,"Could not set TCP_NODELAY: %s\n",uVar4);
    return;
  }
  FUN_1436b58e0(uVar1,"TCP_NODELAY set\n");
  return;
}



// FUNCTION 1436b6c20 FUN_1436b6c20 body=214 status=ok
// SIG undefined FUN_1436b6c20(void)

int FUN_1436b6c20(longlong param_1,undefined8 *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  undefined8 local_res8;
  
  uVar1 = *(uint *)(param_1 + 0x2c8);
  bVar5 = 0 < (int)uVar1;
  if ((param_3 != '\0') && (0 < *(int *)(param_1 + 0x2cc))) {
    bVar5 = bVar5 | 2;
  }
  uVar4 = uVar1;
  if (bVar5 != 1) {
    if (bVar5 == 2) {
      uVar4 = *(uint *)(param_1 + 0x2cc);
    }
    else if (bVar5 == 3) {
      uVar4 = *(uint *)(param_1 + 0x2cc);
      if ((int)uVar1 < (int)*(uint *)(param_1 + 0x2cc)) {
        uVar4 = uVar1;
      }
    }
    else {
      uVar4 = -(uint)(param_3 != '\0') & 300000;
      if (param_3 == '\0') {
        return 0;
      }
    }
  }
  if (param_2 == (undefined8 *)0x0) {
    local_res8 = curlx_tvnow();
    param_2 = &local_res8;
  }
  if (param_3 == '\0') {
    uVar3 = *(undefined8 *)(param_1 + 0x740);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x738);
  }
  iVar2 = curlx_tvdiff(*param_2,uVar3);
  iVar2 = uVar4 - iVar2;
  if (iVar2 == 0) {
    iVar2 = -1;
  }
  return iVar2;
}



// FUNCTION 1436b6d00 FUN_1436b6d00 body=498 status=ok
// SIG undefined FUN_1436b6d00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436b6d00(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  DWORD DVar5;
  undefined8 uVar6;
  undefined1 auStack_148 [32];
  undefined4 local_128 [4];
  undefined1 local_118 [128];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar1 = *param_1;
  if (*(int *)((longlong)param_1 + 0xa4) == 2) {
    return;
  }
  if ((*(char *)((longlong)param_1 + 0x3ba) == '\0') &&
     (*(char *)((longlong)param_1 + 0x3d4) == '\0')) {
    local_128[0] = 0x80;
    iVar3 = Ordinal_5(param_2,local_98,local_128);
    if (iVar3 != 0) {
      uVar4 = Ordinal_111();
      uVar6 = FUN_1436a7be0(param_1,uVar4);
      FUN_1436b5820(uVar1,"getpeername() failed with errno %d: %s",uVar4,uVar6);
      return;
    }
    local_128[0] = 0x80;
    _guard_xfg_dispatch_icall_nop(local_118,0,0x80);
    iVar3 = Ordinal_6(param_2,local_118,local_128);
    if (iVar3 != 0) {
      uVar4 = Ordinal_111();
      uVar6 = FUN_1436a7be0(param_1,uVar4);
      FUN_1436b5820(uVar1,"getsockname() failed with errno %d: %s",uVar4,uVar6);
      return;
    }
    cVar2 = FUN_1436b7410(local_98,(undefined8 *)((longlong)param_1 + 0x114),
                          (longlong)param_1 + 0x144);
    if (cVar2 == '\0') {
      DVar5 = GetLastError();
      uVar6 = FUN_1436a7be0(param_1,DVar5);
      FUN_1436b5820(uVar1,"ssrem inet_ntop() failed with errno %d: %s",DVar5,uVar6);
      return;
    }
    param_1[0xe] = *(undefined8 *)((longlong)param_1 + 0x114);
    param_1[0xf] = *(undefined8 *)((longlong)param_1 + 0x11c);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)((longlong)param_1 + 0x124);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)(param_1 + 0x25);
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)((longlong)param_1 + 300);
    *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)(param_1 + 0x26);
    param_1[0x12] = *(undefined8 *)((longlong)param_1 + 0x134);
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)((longlong)param_1 + 0x13c);
    *(undefined2 *)((longlong)param_1 + 0x9c) = *(undefined2 *)(param_1 + 0x28);
    cVar2 = FUN_1436b7410(local_118,param_1 + 0x29,param_1 + 0x2f);
    if (cVar2 == '\0') {
      DVar5 = GetLastError();
      uVar6 = FUN_1436a7be0(param_1,DVar5);
      FUN_1436b5820(uVar1,"ssloc inet_ntop() failed with errno %d: %s",DVar5,uVar6);
      return;
    }
  }
  FUN_1436b6930(param_1);
  return;
}



// FUNCTION 1436b6f00 FUN_1436b6f00 body=1254 status=ok
// SIG undefined FUN_1436b6f00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436b6f00(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  short sVar6;
  undefined2 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong *plVar10;
  size_t sVar11;
  int iVar12;
  undefined1 auStack_228 [32];
  char *local_208;
  undefined4 local_200;
  char local_1f8;
  undefined4 local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  undefined8 local_1e0;
  undefined2 local_1d8;
  undefined2 local_1d6;
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [16];
  int local_1c0;
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  lVar1 = *param_1;
  uVar3 = 0;
  local_1e8 = (longlong *)0x0;
  pcVar8 = *(char **)(lVar1 + 0x4b8);
  sVar6 = *(short *)(lVar1 + 0x218);
  iVar12 = *(int *)(lVar1 + 0x21c);
  if ((pcVar8 == (char *)0x0) && (sVar6 == 0)) {
    return 0;
  }
  local_1f4 = param_4;
  local_1f0 = param_1;
  local_1e0 = param_2;
  _guard_xfg_dispatch_icall_nop(&local_1d8,0,0x80);
  uVar7 = (undefined2)param_3;
  if (pcVar8 != (char *)0x0) {
    lVar9 = -1;
    uVar4 = 0xffffffffffffffff;
    do {
      uVar4 = uVar4 + 1;
    } while (pcVar8[uVar4] != '\0');
    if (uVar4 < 0xff) {
      _guard_xfg_dispatch_icall_nop(local_158,0,0x100);
      sVar11 = 0xffffffffffffffff;
      local_1f8 = '\0';
      do {
        sVar11 = sVar11 + 1;
      } while (PTR_DAT_1467dccf8[sVar11] != '\0');
      iVar2 = strncmp(PTR_DAT_1467dccf8,pcVar8,sVar11);
      if (iVar2 == 0) {
        do {
          lVar9 = lVar9 + 1;
        } while (PTR_DAT_1467dccf8[lVar9] != '\0');
        pcVar8 = pcVar8 + lVar9;
        local_1f8 = '\x01';
LAB_1436b7007:
        plVar10 = local_1f0;
        local_208 = local_158;
        local_200 = 0x100;
        iVar2 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                ::GetBoundProgramCounterForTimerManager
                          (param_3,local_1f4,(int)local_1f0[0x14],pcVar8);
        if (iVar2 == 0) {
          if (local_1f8 != '\0') {
            FUN_1436b5820(lVar1,"Couldn\'t bind to interface \'%s\'",pcVar8);
            return 0x2d;
          }
          goto LAB_1436b7054;
        }
        if (iVar2 == 1) {
          return 1;
        }
        if (iVar2 != 2) {
          if (local_1f8 != '\0') goto LAB_1436b7247;
          goto LAB_1436b7054;
        }
        local_208 = (char *)CONCAT44(local_208._4_4_,param_3);
        FUN_1436b58e0(lVar1,"Local Interface %s is ip %s using address family %i\n",pcVar8,local_158
                     );
      }
      else {
        sVar11 = 0xffffffffffffffff;
        do {
          sVar11 = sVar11 + 1;
        } while (PTR_s_host__1467dcd00[sVar11] != '\0');
        iVar2 = strncmp(PTR_s_host__1467dcd00,pcVar8,sVar11);
        if (iVar2 != 0) goto LAB_1436b7007;
        do {
          lVar9 = lVar9 + 1;
        } while (PTR_s_host__1467dcd00[lVar9] != '\0');
        pcVar8 = pcVar8 + lVar9;
        plVar10 = local_1f0;
LAB_1436b7054:
        local_1f4 = (undefined4)plVar10[0x7f];
        if (param_3 == 2) {
          *(undefined4 *)(plVar10 + 0x7f) = 1;
        }
        else if (param_3 == 0x17) {
          *(undefined4 *)(plVar10 + 0x7f) = 2;
        }
        iVar2 = Curl_resolv(plVar10,pcVar8,0,&local_1e8);
        if (iVar2 == 1) {
          FUN_1436abd90(plVar10,&local_1e8);
        }
        *(undefined4 *)(plVar10 + 0x7f) = local_1f4;
        if (local_1e8 == (longlong *)0x0) {
LAB_1436b7247:
          FUN_1436b5820(lVar1,"Couldn\'t bind to \'%s\'",pcVar8);
          return 0x2d;
        }
        Curl_printable_address(*local_1e8,local_158,0x100);
        local_200 = *(undefined4 *)(*local_1e8 + 4);
        local_208 = local_158;
        FUN_1436b58e0(lVar1,"Name \'%s\' family %i resolved to \'%s\' family %i\n",pcVar8,param_3);
        Curl_resolv_unlock(lVar1,local_1e8);
      }
      if (param_3 == 0x17) {
        pcVar8 = strchr(local_158,0x25);
        if (pcVar8 != (char *)0x0) {
          *pcVar8 = '\0';
          pcVar8 = pcVar8 + 1;
        }
        iVar2 = Curl_inet_pton(0x17,local_158,local_1d0);
        if (0 < iVar2) {
          local_1d8 = 0x17;
          local_1d6 = Ordinal_9(sVar6);
          if (pcVar8 != (char *)0x0) {
            local_1c0 = atoi(pcVar8);
          }
        }
        uVar3 = 0x1c;
        plVar10 = local_1f0;
      }
      else if ((param_3 == 2) && (iVar2 = Curl_inet_pton(2,local_158,local_1d4), 0 < iVar2)) {
        local_1d8 = uVar7;
        local_1d6 = Ordinal_9(sVar6);
        uVar3 = 0x10;
      }
      goto LAB_1436b72a8;
    }
  }
  if (param_3 == 0x17) {
    local_1d8 = uVar7;
    local_1d6 = Ordinal_9(sVar6);
    uVar3 = 0x1c;
    plVar10 = local_1f0;
  }
  else {
    plVar10 = local_1f0;
    if (param_3 == 2) {
      local_1d8 = uVar7;
      local_1d6 = Ordinal_9(sVar6);
      uVar3 = 0x10;
      plVar10 = local_1f0;
    }
  }
LAB_1436b72a8:
  uVar5 = local_1e0;
  iVar2 = Ordinal_2(local_1e0,&local_1d8,uVar3);
  while( true ) {
    if (-1 < iVar2) {
      local_1f4 = 0x80;
      _guard_xfg_dispatch_icall_nop(local_158,0,0x80);
      iVar12 = Ordinal_6(uVar5,local_158,&local_1f4);
      if (iVar12 < 0) {
        uVar3 = Ordinal_111();
        *(undefined4 *)(lVar1 + 0x8844) = uVar3;
        uVar5 = FUN_1436a7be0(plVar10,uVar3);
        FUN_1436b5820(lVar1,"getsockname() failed with errno %d: %s",uVar3,uVar5);
        uVar5 = 0x2d;
      }
      else {
        FUN_1436b58e0(lVar1,"Local port: %hu\n",sVar6);
        uVar5 = 0;
        *(undefined1 *)((longlong)plVar10 + 0x3d1) = 1;
      }
      return uVar5;
    }
    iVar12 = iVar12 + -1;
    if (iVar12 < 1) break;
    FUN_1436b58e0(lVar1,"Bind to local port %hu failed, trying next\n",sVar6);
    sVar6 = sVar6 + 1;
    local_1d6 = Ordinal_15(sVar6);
    iVar2 = Ordinal_2(uVar5,&local_1d8,uVar3);
  }
  uVar3 = Ordinal_111();
  *(undefined4 *)(lVar1 + 0x8844) = uVar3;
  uVar5 = FUN_1436a7be0(plVar10,uVar3);
  FUN_1436b5820(lVar1,"bind failed with errno %d: %s",uVar3,uVar5);
  return 0x2d;
}



// FUNCTION 1436b7410 FUN_1436b7410 body=133 status=ok
// SIG undefined FUN_1436b7410(void)

ulonglong FUN_1436b7410(ushort *param_1,undefined1 *param_2,uint *param_3)

{
  ushort uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined2 uVar4;
  ushort *puVar5;
  
  uVar1 = *param_1;
  uVar2 = (ulonglong)uVar1;
  if (uVar1 == 2) {
    puVar5 = param_1 + 2;
    uVar4 = 2;
  }
  else {
    if (uVar1 != 0x17) goto LAB_1436b747a;
    puVar5 = param_1 + 4;
    uVar4 = 0x17;
  }
  lVar3 = FUN_1436c1610(uVar4,puVar5,param_2,0x2e);
  uVar2 = 0;
  if (lVar3 != 0) {
    uVar1 = Ordinal_15(param_1[1]);
    *param_3 = (uint)uVar1;
    return CONCAT71((uint7)(byte)(uVar1 >> 8),1);
  }
LAB_1436b747a:
  *param_2 = 0;
  *param_3 = 0;
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1436b74a0 FUN_1436b74a0 body=905 status=ok
// SIG undefined FUN_1436b74a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001436b76c7) */

int FUN_1436b74a0(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  DWORD DVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  undefined1 *puVar13;
  undefined1 auStack_138 [32];
  longlong *local_118;
  int local_108;
  int local_104;
  undefined4 local_100;
  uint local_fc;
  short local_f8;
  undefined2 local_f6;
  undefined1 local_f4 [4];
  undefined1 local_f0 [16];
  int local_e0;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar1 = *param_1;
  iVar7 = -1;
  *param_3 = -1;
  iVar4 = 0;
  local_108 = *(int *)(param_2 + 4);
  lVar9 = *param_1;
  local_104 = *(int *)((longlong)param_1 + 0xa4);
  local_100 = 0x11;
  if (local_104 != 2) {
    local_100 = *(undefined4 *)(param_2 + 0xc);
  }
  local_fc = *(uint *)(param_2 + 0x10);
  if (0x80 < *(uint *)(param_2 + 0x10)) {
    local_fc = 0x80;
  }
  local_118 = param_3;
  _guard_xfg_dispatch_icall_nop(&local_f8,*(void **)(param_2 + 0x20),(ulonglong)local_fc);
  pcVar2 = *(code **)(lVar9 + 0x278);
  if (pcVar2 == (code *)0x0) {
    lVar9 = Ordinal_23(local_108,local_104,local_100);
  }
  else {
    lVar9 = (*pcVar2)(*(undefined8 *)(lVar9 + 0x280),0,&local_108);
  }
  if (lVar9 == -1) {
    return 0;
  }
  if (((int)param_1[0x14] != 0) && (local_108 == 0x17)) {
    local_e0 = (int)param_1[0x14];
  }
  if (local_f8 == 2) {
    puVar13 = local_f4;
    uVar12 = 2;
  }
  else {
    if (local_f8 != 0x17) goto LAB_1436b77ed;
    puVar13 = local_f0;
    uVar12 = 0x17;
  }
  lVar10 = FUN_1436c1610(uVar12,puVar13,local_78,0x2e);
  if (lVar10 == 0) {
LAB_1436b77ed:
    local_78[0] = 0;
    DVar8 = GetLastError();
    uVar11 = FUN_1436a7be0(param_1,DVar8);
    FUN_1436b5820(lVar1,"sa_addr inet_ntop() failed with errno %d: %s",DVar8,uVar11);
    FUN_1436b61e0(param_1,lVar9);
    return 0;
  }
  Ordinal_15(local_f6);
  FUN_1436b58e0(lVar1,"  Trying %s...\n",local_78);
  if (((local_108 == 2) || (local_108 == 0x17)) && (local_104 == 1)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((bVar3) && (*(char *)(lVar1 + 0x46e) != '\0')) {
    Curl_tcpnodelay(param_1,lVar9);
  }
  Curl_sndbufset(lVar9);
  if ((bVar3) && (*(char *)(lVar1 + 0x63c) != '\0')) {
    FUN_1436b7830(lVar1,lVar9);
  }
  if (*(code **)(lVar1 + 0x268) != (code *)0x0) {
    iVar4 = (**(code **)(lVar1 + 0x268))(*(undefined8 *)(lVar1 + 0x270),lVar9,0);
    if (iVar4 == 2) {
      bVar3 = true;
      goto LAB_1436b7676;
    }
    if (iVar4 != 0) {
      FUN_1436b61e0(param_1,lVar9);
      return 0x2a;
    }
  }
  bVar3 = false;
LAB_1436b7676:
  if ((local_108 == 2) || (local_108 == 0x17)) {
    uVar5 = FUN_1436d7b50(&local_f8);
    iVar6 = FUN_1436b6f00(param_1,lVar9,local_108,uVar5);
    if (iVar6 != 0) {
      FUN_1436b61e0(param_1,lVar9);
      if (iVar6 != 1) {
        return iVar6;
      }
      return 7;
    }
  }
  curlx_nonblock(lVar9,1);
  lVar10 = curlx_tvnow();
  param_1[0x7b] = lVar10;
  if (1 < (int)param_1[0x7c]) {
    FUN_1436a46a0(lVar1,*(undefined4 *)((longlong)param_1 + 0x3e4));
  }
  if ((!bVar3) && (*(int *)((longlong)param_1 + 0xa4) == 1)) {
    if ((*(char *)((longlong)param_1 + 0x3d4) != '\0') ||
       (iVar7 = Ordinal_4(lVar9,&local_f8,local_fc), iVar7 == -1)) {
      iVar4 = Ordinal_111();
    }
    *(bool *)((longlong)param_1 + 0x3c2) = local_108 == 0x17;
    if (iVar7 == -1) {
      if ((iVar4 != 0xb) && (1 < iVar4 - 0x2733U)) {
        uVar11 = FUN_1436a7be0(param_1,iVar4);
        FUN_1436b58e0(lVar1,"Immediate connect fail for %s: %s\n",local_78,uVar11);
        *(int *)(lVar1 + 0x8844) = iVar4;
        FUN_1436b61e0(param_1,lVar9);
        return 7;
      }
      *local_118 = lVar9;
      return 0;
    }
    *local_118 = lVar9;
    return 0;
  }
  *local_118 = lVar9;
  return 0;
}



// FUNCTION 1436b7830 FUN_1436b7830 body=285 status=ok
// SIG undefined FUN_1436b7830(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436b7830(longlong param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined8 local_38;
  uint local_28;
  undefined1 local_24 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = CONCAT44(local_58._4_4_,4);
  local_28 = (uint)(*(char *)(param_1 + 0x63c) != '\0');
  iVar1 = Ordinal_21(param_2,0xffff,8,&local_28);
  if (iVar1 < 0) {
    FUN_1436b58e0(param_1,"Failed to set SO_KEEPALIVE on fd %d\n",param_2);
  }
  else {
    local_20 = 1;
    iVar1 = curlx_sltosi(*(undefined4 *)(param_1 + 0x640));
    local_28 = iVar1 * 1000;
    local_1c = local_28;
    iVar1 = curlx_sltosi(*(undefined4 *)(param_1 + 0x644));
    local_28 = iVar1 * 1000;
    local_38 = 0;
    local_48 = local_24;
    local_40 = 0;
    local_50 = 0;
    local_58 = 0;
    local_18 = local_28;
    iVar1 = WSAIoctl(param_2,0x98000004,&local_20,0xc);
    if (iVar1 != 0) {
      uVar2 = Ordinal_111();
      FUN_1436b58e0(param_1,"Failed to set SIO_KEEPALIVE_VALS on fd %d: %d\n",param_2 & 0xffffffff,
                    uVar2);
    }
  }
  return;
}



// FUNCTION 1436b7950 FUN_1436b7950 body=262 status=ok
// SIG undefined FUN_1436b7950(void)

int FUN_1436b7950(longlong param_1,int param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  lVar5 = (longlong)(int)param_3;
  iVar2 = 7;
  lVar1 = *(longlong *)(param_1 + 0x1e0 + lVar5 * 8);
  *(undefined8 *)(param_1 + 0x1e0 + lVar5 * 8) = 0xffffffffffffffff;
  if (param_2 == 0) {
    lVar3 = *(longlong *)(param_1 + 0x60 + lVar5 * 8);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0x60);
      if (lVar3 == 0) goto LAB_1436b7a35;
      iVar4 = 2;
      if (*(int *)(lVar3 + 4) == 2) {
        iVar4 = 0x17;
      }
    }
    else {
      iVar4 = *(int *)(lVar3 + 4);
    }
    lVar3 = *(longlong *)(lVar3 + 0x28);
    if (lVar3 != 0) {
      do {
        if (*(longlong *)(param_1 + (longlong)(int)(param_3 ^ 1) * 8 + 0x60) != 0) {
          while (*(int *)(lVar3 + 4) != iVar4) {
            lVar3 = *(longlong *)(lVar3 + 0x28);
            if (lVar3 == 0) goto LAB_1436b7a35;
          }
        }
        iVar2 = FUN_1436b74a0(param_1,lVar3,param_1 + (lVar5 + 0x3c) * 8);
        if (iVar2 != 7) {
          *(longlong *)(param_1 + lVar5 * 8 + 0x60) = lVar3;
          break;
        }
        lVar3 = *(longlong *)(lVar3 + 0x28);
      } while (lVar3 != 0);
    }
  }
LAB_1436b7a35:
  if (lVar1 != -1) {
    FUN_1436b61e0(param_1,lVar1);
  }
  return iVar2;
}



// FUNCTION 1436b7a60 verifyconnect body=131 status=ok
// SIG undefined verifyconnect(void)

undefined8 verifyconnect(undefined8 param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int local_res10 [2];
  undefined4 local_res18 [4];
  
  local_res10[0] = 0;
  local_res18[0] = 4;
  SleepEx(0,0);
  iVar1 = Ordinal_7(param_1,0xffff,0x1007,local_res10,local_res18);
  if (iVar1 != 0) {
    local_res10[0] = Ordinal_111();
  }
  if ((local_res10[0] == 0) || (local_res10[0] == 0x2748)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  if (param_2 != (int *)0x0) {
    *param_2 = local_res10[0];
  }
  return uVar2;
}



// FUNCTION 1436b7af0 FUN_1436b7af0 body=280 status=ok
// SIG undefined FUN_1436b7af0(void)

undefined8 FUN_1436b7af0(longlong *param_1,void *param_2,size_t param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  void *_Dst;
  
  lVar4 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
  puVar1 = *(undefined8 **)(lVar4 * 8 + *param_1);
  plVar2 = (longlong *)*puVar1;
  do {
    if (plVar2 == (longlong *)0x0) {
LAB_1436b7b76:
      puVar5 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x18);
      if (puVar5 != (undefined8 *)0x0) {
        _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(param_3);
        if (_Dst != (void *)0x0) {
          _guard_xfg_dispatch_icall_nop(_Dst,param_2,param_3);
          puVar5[1] = _Dst;
          puVar5[2] = param_3;
          *puVar5 = param_4;
          iVar3 = FUN_1436b9de0(puVar1,puVar1[1],puVar5);
          if (iVar3 != 0) {
            param_1[5] = param_1[5] + 1;
            return param_4;
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar5[1]);
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar5);
      }
      return 0;
    }
    lVar4 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar2 + 8),*(undefined8 *)(*plVar2 + 0x10),param_2,param_3)
    ;
    if (lVar4 != 0) {
      Curl_llist_remove(puVar1,plVar2,param_1);
      param_1[5] = param_1[5] + -1;
      goto LAB_1436b7b76;
    }
    plVar2 = (longlong *)plVar2[2];
  } while( true );
}



// FUNCTION 1436b7c10 Curl_hash_clean body=128 status=ok
// SIG undefined Curl_hash_clean(void)

void Curl_hash_clean(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if ((param_1 != (longlong *)0x0) && (iVar4 = 0, 0 < (int)param_1[4])) {
    lVar5 = 0;
    do {
      plVar1 = *(longlong **)(lVar5 + *param_1);
      lVar3 = *plVar1;
      while (lVar3 != 0) {
        lVar2 = *(longlong *)(lVar3 + 0x10);
        Curl_llist_remove(plVar1,lVar3,param_1);
        param_1[5] = param_1[5] + -1;
        lVar3 = lVar2;
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 1436b7c90 Curl_hash_clean_with_criterium body=177 status=ok
// SIG undefined Curl_hash_clean_with_criterium(void)

void Curl_hash_clean_with_criterium(longlong *param_1,undefined8 param_2,code *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  if ((param_1 != (longlong *)0x0) && (iVar6 = 0, 0 < (int)param_1[4])) {
    lVar5 = 0;
    do {
      puVar1 = *(undefined8 **)(lVar5 + *param_1);
      puVar2 = (undefined8 *)*puVar1;
      while (puVar3 = puVar2, puVar3 != (undefined8 *)0x0) {
        puVar2 = (undefined8 *)puVar3[2];
        if ((param_3 == (code *)0x0) ||
           (iVar4 = (*param_3)(param_2,*(undefined8 *)*puVar3), iVar4 != 0)) {
          Curl_llist_remove(puVar1,puVar3,param_1);
          param_1[5] = param_1[5] + -1;
        }
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar6 < (int)param_1[4]);
  }
  return;
}



// FUNCTION 1436b7d50 FUN_1436b7d50 body=168 status=ok
// SIG undefined FUN_1436b7d50(void)

undefined8 FUN_1436b7d50(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar3 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
  puVar1 = *(undefined8 **)(lVar3 * 8 + *param_1);
  plVar2 = (longlong *)*puVar1;
  while( true ) {
    if (plVar2 == (longlong *)0x0) {
      return 1;
    }
    lVar3 = (*(code *)param_1[2])
                      (*(undefined8 *)(*plVar2 + 8),*(undefined8 *)(*plVar2 + 0x10),param_2,param_3)
    ;
    if (lVar3 != 0) break;
    plVar2 = (longlong *)plVar2[2];
  }
  Curl_llist_remove(puVar1,plVar2,param_1);
  param_1[5] = param_1[5] + -1;
  return 0;
}



// FUNCTION 1436b7e00 Curl_hash_destroy body=122 status=ok
// SIG undefined Curl_hash_destroy(void)

void Curl_hash_destroy(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  uVar3 = uVar1;
  if (0 < (int)param_1[4]) {
    do {
      Curl_llist_destroy(*(undefined8 *)(uVar3 + *param_1),param_1);
      uVar2 = (int)uVar1 + 1;
      uVar1 = (ulonglong)uVar2;
      *(undefined8 *)(uVar3 + *param_1) = 0;
      uVar3 = uVar3 + 8;
    } while ((int)uVar2 < (int)param_1[4]);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



// FUNCTION 1436b7e80 Curl_hash_init body=278 status=ok
// SIG undefined Curl_hash_init(void)

undefined8
Curl_hash_init(longlong *param_1,int param_2,longlong param_3,longlong param_4,longlong param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && (param_5 != 0)) {
    lVar3 = 0;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
    param_1[5] = 0;
    *(int *)(param_1 + 4) = param_2;
    lVar4 = (longlong)param_2;
    lVar1 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar4 * 8);
    *param_1 = lVar1;
    if (lVar1 == 0) {
      *(undefined4 *)(param_1 + 4) = 0;
      return 1;
    }
    if (0 < lVar4) {
      do {
        uVar2 = Curl_llist_alloc(hash_element_dtor);
        *(undefined8 *)(*param_1 + lVar3 * 8) = uVar2;
        if (*(longlong *)(*param_1 + lVar3 * 8) == 0) {
          while (lVar3 != 0) {
            lVar3 = lVar3 + -1;
            Curl_llist_destroy(*(undefined8 *)(*param_1 + lVar3 * 8),0);
            *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
          *param_1 = 0;
          *(undefined4 *)(param_1 + 4) = 0;
          return 1;
        }
        lVar3 = lVar3 + 1;
      } while (lVar3 < lVar4);
    }
    return 0;
  }
  return 1;
}



// FUNCTION 1436b7fa0 Curl_hash_next_element body=125 status=ok
// SIG undefined Curl_hash_next_element(void)

undefined8 Curl_hash_next_element(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 *puVar6;
  
  if (param_1[2] != 0) {
    param_1[2] = *(longlong *)(param_1[2] + 0x10);
  }
  if (param_1[2] == 0) {
    uVar4 = (ulonglong)(int)param_1[1];
    iVar1 = (int)((longlong *)*param_1)[4];
    if ((int)param_1[1] < iVar1) {
      lVar2 = *(longlong *)*param_1;
      puVar6 = (undefined8 *)(lVar2 + uVar4 * 8);
      uVar5 = uVar4;
      do {
        iVar3 = (int)uVar5;
        if (*(longlong *)*puVar6 != 0) {
          param_1[2] = **(longlong **)(lVar2 + (longlong)iVar3 * 8);
          *(int *)(param_1 + 1) = iVar3 + 1;
          break;
        }
        uVar5 = (ulonglong)(iVar3 + 1);
        uVar4 = uVar4 + 1;
        puVar6 = puVar6 + 1;
      } while ((longlong)uVar4 < (longlong)iVar1);
    }
  }
  if ((undefined8 *)param_1[2] == (undefined8 *)0x0) {
    param_1[2] = 0;
    return 0;
  }
  return *(undefined8 *)param_1[2];
}



// FUNCTION 1436b8020 FUN_1436b8020 body=148 status=ok
// SIG undefined FUN_1436b8020(void)

undefined8 FUN_1436b8020(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar3 = (*(code *)param_1[1])(param_2,param_3,(longlong)(int)param_1[4]);
    for (plVar1 = (longlong *)**(undefined8 **)(lVar3 * 8 + *param_1); plVar1 != (longlong *)0x0;
        plVar1 = (longlong *)plVar1[2]) {
      puVar2 = (undefined8 *)*plVar1;
      lVar3 = (*(code *)param_1[2])(puVar2[1],puVar2[2],param_2,param_3);
      if (lVar3 != 0) {
        return *puVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 1436b80c0 Curl_hash_start_iterate body=13 status=ok
// SIG undefined Curl_hash_start_iterate(void)

void Curl_hash_start_iterate(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  param_2[2] = 0;
  return;
}



// FUNCTION 1436b8120 Curl_str_key_compare body=44 status=ok
// SIG undefined Curl_str_key_compare(void)

undefined8 Curl_str_key_compare(void *param_1,size_t param_2,void *param_3,size_t param_4)

{
  int iVar1;
  
  if (param_2 == param_4) {
    iVar1 = _guard_xfg_dispatch_icall_nop(param_1,param_3,param_2);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436b8150 hash_element_dtor body=80 status=ok
// SIG undefined hash_element_dtor(void)

void hash_element_dtor(longlong param_1,longlong *param_2)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2[1]);
  param_2[1] = 0;
  if (*param_2 != 0) {
    (**(code **)(param_1 + 0x18))();
    *param_2 = 0;
  }
  param_2[2] = 0;
                    /* WARNING: Could not recover jumptable at 0x0001436b8199. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
  return;
}



// FUNCTION 1436b81a0 FUN_1436b81a0 body=472 status=ok
// SIG undefined FUN_1436b81a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436b81a0(longlong *param_1,int param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined2 *_Src;
  ulonglong uVar5;
  longlong lVar6;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined2 *local_58;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  uVar5 = (ulonglong)param_2;
  if (*(char *)(lVar1 + 0x191) != '\0') {
    uVar5 = uVar5 - 0xc;
    *(longlong *)(lVar1 + 0x188) = *(longlong *)(lVar1 + 0x188) + 10;
  }
  iVar2 = (**(code **)(lVar1 + 0x8a20))
                    (*(undefined8 *)(lVar1 + 0x188),1,uVar5,*(undefined8 *)(lVar1 + 0x8a28));
  if (iVar2 == 0x10000000) {
    FUN_1436b5820(lVar1,"operation aborted by callback");
    uVar4 = 0x2a;
    *param_3 = 0;
  }
  else {
    if (iVar2 == 0x10000001) {
      if ((*(byte *)(param_1[0x7d] + 0x78) & 0x10) != 0) {
        FUN_1436b5820(lVar1,"Read callback asked for PAUSE when not supported!");
        return 0x1a;
      }
      *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 0x20;
      if (*(char *)(lVar1 + 0x191) != '\0') {
        *(longlong *)(lVar1 + 0x188) = *(longlong *)(lVar1 + 0x188) + -10;
      }
      *param_3 = 0;
    }
    else {
      if (uVar5 < (ulonglong)(longlong)iVar2) {
        *param_3 = 0;
        FUN_1436b5820(lVar1,"read function returned funny value");
        return 0x1a;
      }
      if ((*(char *)(lVar1 + 0x193) == '\0') && (*(char *)(lVar1 + 0x191) != '\0')) {
        _Src = (undefined2 *)&DAT_145af0af0;
        if (*(char *)(lVar1 + 0x322) == '\0') {
          _Src = &DAT_145b5531c;
        }
        local_58 = _Src;
        iVar3 = curl_msnprintf(local_48,0xb,&DAT_145b6a984,iVar2);
        *(longlong *)(lVar1 + 0x188) = *(longlong *)(lVar1 + 0x188) - (longlong)iVar3;
        iVar2 = iVar2 + iVar3;
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar1 + 0x188),local_48,(longlong)iVar3);
        lVar6 = -1;
        _Size = 0xffffffffffffffff;
        do {
          _Size = _Size + 1;
        } while (*(char *)((longlong)_Src + _Size) != '\0');
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar2 + *(longlong *)(lVar1 + 0x188)),_Src,_Size);
        if (iVar2 == iVar3) {
          *(undefined1 *)(lVar1 + 0x16c) = 1;
        }
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)((longlong)_Src + lVar6) != '\0');
        iVar2 = iVar2 + (int)lVar6;
      }
      *param_3 = iVar2;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1436b8380 FUN_1436b8380 body=711 status=ok
// SIG undefined FUN_1436b8380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436b8380(longlong param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  byte *pbVar7;
  undefined1 *puVar8;
  longlong lVar9;
  undefined1 auStack_68 [32];
  undefined1 local_48 [8];
  undefined1 local_40 [16];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  bVar3 = false;
  if (param_3 == 3) {
    if ((*(int *)(param_1 + 0x1f0) != -1) &&
       (*(int *)(param_1 + 0x1f0) <= *(int *)(param_1 + 0x1ec))) {
      FUN_1436b5820(param_1,"Maximum (%ld) redirects followed");
      return 0x2f;
    }
    *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
    *(undefined1 *)(param_1 + 0x87f8) = 1;
    if (*(char *)(param_1 + 0x44e) != '\0') {
      if (*(char *)(param_1 + 0x688) != '\0') {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x680));
        *(undefined8 *)(param_1 + 0x680) = 0;
        *(undefined1 *)(param_1 + 0x688) = 0;
      }
      lVar5 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x670));
      *(longlong *)(param_1 + 0x680) = lVar5;
      if (lVar5 == 0) {
        return 0x1b;
      }
      *(undefined1 *)(param_1 + 0x688) = 1;
    }
  }
  iVar4 = FUN_143662c40(param_2,"%15[^?&/:]://%c",local_40,local_48);
  if (iVar4 == 2) {
    lVar9 = 1;
    bVar2 = *param_2;
    lVar5 = 0;
    pbVar7 = param_2;
    while (bVar2 != 0) {
      if (bVar2 == 0x20) {
        if ((char)lVar9 == '\0') {
          lVar5 = lVar5 + 1;
        }
        else {
          lVar5 = lVar5 + 3;
        }
      }
      else {
        if (bVar2 == 0x3f) {
          lVar9 = 0;
        }
        lVar6 = lVar5 + 2;
        if (bVar2 < 0x80) {
          lVar6 = lVar5;
        }
        lVar5 = lVar6 + 1;
      }
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar2 = *pbVar1;
    }
    bVar3 = true;
    lVar5 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar5 + 1);
    if (lVar5 == 0) {
      return 0x1b;
    }
    FUN_1436b9c00(lVar5,param_2);
  }
  else {
    lVar5 = FUN_1436b8f60(*(undefined8 *)(param_1 + 0x670),param_2);
    if (lVar5 == 0) {
      return 0x1b;
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
  if (param_3 == 1) {
    *(longlong *)(param_1 + 0x8aa8) = lVar5;
    return 0;
  }
  if (bVar3) {
    *(undefined1 *)(param_1 + 0x8848) = 0;
  }
  if (*(char *)(param_1 + 0x678) != '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x670));
    *(undefined8 *)(param_1 + 0x670) = 0;
    *(undefined1 *)(param_1 + 0x678) = 0;
  }
  *(longlong *)(param_1 + 0x670) = lVar5;
  *(undefined1 *)(param_1 + 0x678) = 1;
  FUN_1436b58e0(param_1,"Issue another request to this URL: \'%s\'\n",lVar5);
  iVar4 = *(int *)(param_1 + 0x8a78);
  if (iVar4 == 0x12d) {
    if (1 < *(int *)(param_1 + 0x380) - 2U) goto LAB_1436b860f;
    bVar2 = *(byte *)(param_1 + 500) & 1;
  }
  else {
    if (iVar4 != 0x12e) {
      if (((iVar4 == 0x12f) && (*(int *)(param_1 + 0x380) != 1)) &&
         ((*(byte *)(param_1 + 500) & 4) == 0)) {
        *(undefined4 *)(param_1 + 0x380) = 1;
        puVar8 = &DAT_145b250c4;
        if (*(char *)(param_1 + 0x44f) != '\0') {
          puVar8 = &DAT_145b377dc;
        }
        FUN_1436b58e0(param_1,"Disables POST, goes with %s\n",puVar8);
      }
      goto LAB_1436b860f;
    }
    if (1 < *(int *)(param_1 + 0x380) - 2U) goto LAB_1436b860f;
    bVar2 = *(byte *)(param_1 + 500) & 2;
  }
  if (bVar2 == 0) {
    FUN_1436b58e0(param_1,"Switch from POST to GET\n");
    *(undefined4 *)(param_1 + 0x380) = 1;
  }
LAB_1436b860f:
  FUN_1436bee30(param_1,10);
  FUN_1436bed40(param_1);
  return 0;
}



// FUNCTION 1436b8650 FUN_1436b8650 body=29 status=ok
// SIG undefined FUN_1436b8650(void)

void FUN_1436b8650(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x8a20) = *(undefined8 *)(param_1 + 0x238);
  *(undefined8 *)(param_1 + 0x8a28) = *(undefined8 *)(param_1 + 0x1c8);
  return;
}



// FUNCTION 1436b8670 FUN_1436b8670 body=107 status=ok
// SIG undefined FUN_1436b8670(void)

undefined8 FUN_1436b8670(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_1 + 0x378), lVar1 != 0)) {
    if (*(int *)(param_1 + 0x370) == 2) {
      if (lVar1 <= param_2) {
        FUN_1436b58e0(param_1,"The requested document is not old enough\n");
        *(undefined1 *)(param_1 + 0x8a88) = 1;
        return 0;
      }
    }
    else if (param_2 <= lVar1) {
      FUN_1436b58e0(param_1,"The requested document is not new enough\n");
      *(undefined1 *)(param_1 + 0x8a88) = 1;
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1436b86e0 FUN_1436b86e0 body=368 status=ok
// SIG undefined FUN_1436b86e0(void)

ulonglong FUN_1436b86e0(longlong param_1)

{
  undefined1 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x670) == 0) {
    FUN_1436b5820(param_1,"No URL set!");
    return 3;
  }
  uVar3 = FUN_1436ad820(param_1,*(undefined8 *)(param_1 + 0x3d8));
  uVar5 = uVar3 & 0xffffffff;
  if ((int)uVar3 == 0) {
    *(undefined4 *)(param_1 + 0x1ec) = 0;
    uVar1 = (undefined1)uVar3;
    *(undefined1 *)(param_1 + 0x87f8) = uVar1;
    *(undefined1 *)(param_1 + 0x8840) = uVar1;
    *(undefined4 *)(param_1 + 0x89c4) = 0;
    *(undefined1 *)(param_1 + 0x8970) = uVar1;
    *(undefined4 *)(param_1 + 0x8950) = *(undefined4 *)(param_1 + 0x1e4);
    *(undefined4 *)(param_1 + 0x8960) = *(undefined4 *)(param_1 + 0x1e8);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x8aa8));
    *(undefined8 *)(param_1 + 0x8aa8) = 0;
    if (*(int *)(param_1 + 0x380) == 4) {
      uVar4 = *(undefined8 *)(param_1 + 0x2e0);
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x210);
    }
    *(undefined8 *)(param_1 + 0x8a08) = uVar4;
    if (*(longlong *)(param_1 + 0x690) != 0) {
      FUN_1436aad20(param_1);
    }
    if (*(longlong *)(param_1 + 0x698) != 0) {
      uVar2 = FUN_1436ac5f0(param_1);
      uVar5 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        return uVar5;
      }
    }
    *(undefined1 *)(param_1 + 0x8848) = 1;
    FUN_1436b4630(param_1);
    FUN_1436bed40(param_1);
    FUN_1436bee00(param_1);
    if (*(int *)(param_1 + 0x2c8) != 0) {
      FUN_1436a4500(param_1);
    }
    if (*(int *)(param_1 + 0x2cc) != 0) {
      FUN_1436a4500(param_1);
    }
    *(uint *)(param_1 + 0x8954) = *(uint *)(param_1 + 0x8954) & *(uint *)(param_1 + 0x8950);
    *(uint *)(param_1 + 0x8964) = *(uint *)(param_1 + 0x8964) & *(uint *)(param_1 + 0x8960);
    if ((*(char *)(param_1 + 0x614) != '\0') && (*(longlong *)(param_1 + 0x8a58) == 0)) {
      uVar2 = Curl_wildcard_init();
      uVar5 = (ulonglong)uVar2;
      if (uVar2 != 0) {
        return 0x1b;
      }
    }
    return uVar5;
  }
  return uVar3;
}


