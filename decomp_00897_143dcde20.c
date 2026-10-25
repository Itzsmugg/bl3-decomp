// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143dcde20 FUN_143dcde20 body=243 status=ok
// SIG undefined FUN_143dcde20(void)

void FUN_143dcde20(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  puVar3 = *(undefined8 **)(param_1 + 0xa8);
  if ((puVar3 != (undefined8 *)0x0) || (*(longlong *)(param_1 + 0xb0) != 0)) {
    if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(uint *)(param_1 + 0x1b8) & 0x20000000) != 0)) {
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = *(undefined8 *)(param_1 + 0xb0);
      }
      if (*(longlong *)(param_1 + 0xb0) != 0) {
        *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
      }
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xdfffffff;
      *(undefined8 *)(param_1 + 0xa8) = 0;
      *(undefined8 *)(param_1 + 0xb0) = 0;
    }
    Curl_pp_sendf(4,"Attempted to attach wsi twice to same vh prot\n");
  }
  lVar4 = *(longlong *)(param_1 + 0x80);
  lVar2 = (longlong)param_2 * 8;
  plVar1 = (longlong *)(param_1 + 0xb0);
  *(longlong *)(param_1 + 0xa8) = *(longlong *)(lVar4 + 400) + lVar2;
  *plVar1 = *(longlong *)(lVar2 + *(longlong *)(lVar4 + 400));
  *(longlong *)(lVar2 + *(longlong *)(lVar4 + 400)) = param_1;
  if (*plVar1 != 0) {
    *(longlong **)(*plVar1 + 0xa8) = plVar1;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000000;
  return;
}



// FUNCTION 143dcdf20 FUN_143dcdf20 body=97 status=ok
// SIG undefined FUN_143dcdf20(void)

void FUN_143dcdf20(longlong param_1)

{
  if ((*(longlong *)(param_1 + 0x80) != 0) && ((*(uint *)(param_1 + 0x1b8) & 0x20000000) != 0)) {
    if (*(undefined8 **)(param_1 + 0xa8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_1 + 0xa8) = *(undefined8 *)(param_1 + 0xb0);
    }
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      *(undefined8 *)(*(longlong *)(param_1 + 0xb0) + 0xa8) = *(undefined8 *)(param_1 + 0xa8);
    }
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xdfffffff;
    *(undefined8 *)(param_1 + 0xa8) = 0;
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}



// FUNCTION 143dcdf90 FUN_143dcdf90 body=369 status=ok
// SIG undefined FUN_143dcdf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143dcdf90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  __time64_t local_38;
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x78) + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  plVar1 = (longlong *)(lVar6 + 0x80);
  lVar2 = *plVar1;
  do {
    if (lVar2 == 0) {
LAB_143dce00b:
      if (lVar4 == 0) {
        return 0;
      }
      _time64(&local_38);
      *(undefined8 *)(lVar4 + 0x318) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(lVar4 + 8) = 0;
      lVar2 = *(longlong *)(lVar6 + 0x80);
      plVar1 = (longlong *)(lVar6 + 0x80);
      if (lVar2 != 0) {
        do {
          plVar5 = plVar1;
          lVar3 = lVar2;
          lVar2 = *(longlong *)(lVar3 + 0x10);
          plVar1 = (longlong *)(lVar3 + 0x10);
        } while (*(longlong *)(lVar3 + 0x10) != 0);
        if (lVar3 != 0) {
          *(longlong *)(lVar3 + 8) = lVar4;
          *(longlong *)(lVar4 + 8) = lVar3;
          FUN_143dce110(lVar3,param_2);
          if (*(int *)(lVar3 + 0x1a0) != -1) {
            FUN_143dcd890(lVar3,0,9,local_30);
          }
          *plVar5 = *(longlong *)(lVar3 + 0x10);
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
          if ((*(uint *)(lVar3 + 0x70) >> 0x1c & 1) == 0) {
            return 0;
          }
          if ((short)*(uint *)(lVar3 + 0x70) != 0x200) {
            return 0;
          }
          lVar4 = FUN_143dcbab0(lVar3);
          return (lVar4 != 0) - 1;
        }
      }
      FUN_143dce310(lVar6,lVar4);
      *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -1;
      return 0;
    }
    lVar3 = *plVar1;
    if (lVar3 == param_1) {
      *plVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
      goto LAB_143dce00b;
    }
    lVar2 = *(longlong *)(lVar3 + 0x10);
    plVar1 = (longlong *)(lVar3 + 0x10);
  } while( true );
}



// FUNCTION 143dce110 FUN_143dce110 body=271 status=ok
// SIG undefined FUN_143dce110(void)

void FUN_143dce110(longlong param_1,int param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 800),0,0x5f);
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x1c),0,0x2f8);
  *(undefined1 *)(lVar2 + 0x3b3) = 0;
  *(undefined8 *)(lVar2 + 0x3a0) = 0;
  *(undefined2 *)(lVar2 + 0x3b0) = 0;
  *(undefined1 *)(lVar2 + 0x3b8) = 0x60;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
  FUN_143dc5a70(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x244));
  _time64((__time64_t *)(lVar2 + 0x318));
  if (*(int *)(param_1 + 0x1a0) != -1) {
    lVar2 = FUN_143dc6100(param_1 + 0x140,0);
    if ((lVar2 != 0) && (param_2 != 0)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 +
              *(longlong *)
               ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xe8 + *(longlong *)(param_1 + 0x78));
      puVar1 = (ushort *)(lVar2 + 10);
      *puVar1 = *puVar1 | 9;
      Curl_pp_sendf(1,"%s: calling service\n","__lws_header_table_reset");
      FUN_143dcc6f0(*(undefined8 *)(param_1 + 0x78),lVar2,(int)*(char *)(param_1 + 0x1c7));
    }
  }
  return;
}



// FUNCTION 143dce220 FUN_143dce220 body=85 status=ok
// SIG undefined FUN_143dce220(void)

undefined8 FUN_143dce220(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  plVar1 = (longlong *)(lVar5 + 0x120);
  lVar3 = *plVar1;
  while( true ) {
    if (lVar3 == 0) {
      return 0;
    }
    lVar4 = *plVar1;
    if (lVar4 == param_1) break;
    lVar3 = *(longlong *)(lVar4 + 0x10);
    plVar1 = (longlong *)(lVar4 + 0x10);
  }
  *plVar1 = *(longlong *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  piVar2 = (int *)(lVar5 + 0x128);
  *piVar2 = *piVar2 + -1;
  return 1;
}



// FUNCTION 143dce280 FUN_143dce280 body=144 status=ok
// SIG undefined FUN_143dce280(void)

undefined8 * FUN_143dce280(longlong param_1,undefined4 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)FUN_143dd4c00(0x3c0,"ah struct");
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = thunk_FUN_143dd4bc0(0,param_2,"ah data");
    puVar1[2] = lVar2;
    if (lVar2 != 0) {
      *puVar1 = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 **)(param_1 + 0x78) = puVar1;
      *(undefined4 *)(puVar1 + 3) = param_2;
      *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
      return puVar1;
    }
    thunk_FUN_143dd4bc0(puVar1,0,"lws_free");
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143dce310 FUN_143dce310 body=108 status=ok
// SIG undefined FUN_143dce310(void)

undefined8 FUN_143dce310(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  plVar3 = (longlong *)(param_1 + 0x78);
  while( true ) {
    if (lVar1 == 0) {
      return 1;
    }
    plVar2 = (longlong *)*plVar3;
    if (plVar2 == param_2) break;
    lVar1 = *plVar2;
    plVar3 = plVar2;
  }
  *plVar3 = *param_2;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + -1;
  if (param_2[2] != 0) {
    thunk_FUN_143dd4bc0(param_2[2],0,"lws_free");
  }
  thunk_FUN_143dd4bc0(param_2,0,"lws_free");
  return 0;
}



// FUNCTION 143dce380 FUN_143dce380 body=123 status=ok
// SIG undefined FUN_143dce380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dce380(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar2 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  lVar1 = *(longlong *)(lVar2 + 0x120);
  while( true ) {
    if (lVar1 == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(lVar2 + 0x120);
      *(int *)(lVar2 + 0x128) = *(int *)(lVar2 + 0x128) + 1;
      *(longlong *)(lVar2 + 0x120) = param_1;
      FUN_143dcd890(param_1,9,0,local_28);
      return;
    }
    if (lVar1 == param_1) break;
    lVar1 = *(longlong *)(lVar1 + 0x10);
  }
  return;
}



// FUNCTION 143dce400 FUN_143dce400 body=80 status=ok
// SIG undefined FUN_143dce400(void)

void FUN_143dce400(longlong param_1)

{
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 800),0,0x5f);
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x1c),0,0x2f8);
  *(undefined1 *)(param_1 + 0x3b3) = 0;
  *(undefined8 *)(param_1 + 0x3a0) = 0;
  *(undefined2 *)(param_1 + 0x3b0) = 0;
  *(undefined1 *)(param_1 + 0x3b8) = 0x60;
  return;
}



// FUNCTION 143dce450 FUN_143dce450 body=217 status=ok
// SIG undefined FUN_143dce450(void)

undefined8 FUN_143dce450(longlong param_1,char param_2)

{
  int *piVar1;
  short *psVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  iVar4 = FUN_143dcf250();
  if (iVar4 != 0) {
    return 0xffffffff;
  }
  lVar3 = *(longlong *)(param_1 + 8);
  uVar5 = (uint)*(ushort *)(lVar3 + 0x20 + (ulonglong)*(byte *)(lVar3 + 0x3b3) * 8);
  if (*(uint *)(lVar3 + 0x3a8) <= uVar5) {
    if (uVar5 == *(uint *)(lVar3 + 0x3a8)) {
      iVar4 = FUN_143dcf250(param_1);
      if (iVar4 != 0) {
        return 0xffffffff;
      }
      *(undefined1 *)
       ((ulonglong)*(uint *)(*(longlong *)(param_1 + 8) + 0x3a0) +
       *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) = 0;
      piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
      *piVar1 = *piVar1 + 1;
      Curl_pp_sendf(2,"header %i exceeds limit %d\n",
                    *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3b8),
                    *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x3a8));
    }
    return 1;
  }
  *(char *)((ulonglong)*(uint *)(lVar3 + 0x3a0) + *(longlong *)(lVar3 + 0x10)) = param_2;
  piVar1 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
  *piVar1 = *piVar1 + 1;
  if (param_2 != '\0') {
    psVar2 = (short *)(*(longlong *)(param_1 + 8) + 0x20 +
                      (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8);
    *psVar2 = *psVar2 + 1;
  }
  return 0;
}



// FUNCTION 143dce530 FUN_143dce530 body=223 status=ok
// SIG undefined FUN_143dce530(void)

int FUN_143dce530(longlong param_1,char *param_2,int param_3,int param_4)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  lVar3 = *(longlong *)(param_1 + 8);
  iVar5 = 0;
  if (lVar3 != 0) {
    iVar5 = 0;
    for (bVar1 = *(byte *)((longlong)param_4 + 800 + lVar3); bVar1 != 0;
        bVar1 = *(byte *)(lVar3 + 0x22 + (ulonglong)bVar1 * 8)) {
      iVar5 = iVar5 + (uint)*(ushort *)(lVar3 + 0x20 + (ulonglong)bVar1 * 8);
    }
  }
  if ((iVar5 < param_3) && (lVar3 != 0)) {
    bVar1 = *(byte *)((longlong)param_4 + 800 + lVar3);
    if (bVar1 == 0) {
      iVar5 = 0;
    }
    else {
      do {
        uVar4 = (ulonglong)bVar1;
        lVar3 = *(longlong *)(param_1 + 8);
        uVar2 = *(ushort *)(lVar3 + 0x20 + uVar4 * 8);
        if (param_3 <= (int)(uint)uVar2) {
          return -1;
        }
        strncpy(param_2,(char *)((ulonglong)*(uint *)(lVar3 + 0x1c + uVar4 * 8) +
                                *(longlong *)(lVar3 + 0x10)),(ulonglong)uVar2);
        uVar2 = *(ushort *)(*(longlong *)(param_1 + 8) + 0x20 + uVar4 * 8);
        param_2 = param_2 + uVar2;
        param_3 = param_3 - (uint)uVar2;
        bVar1 = *(byte *)(*(longlong *)(param_1 + 8) + 0x22 + uVar4 * 8);
      } while (bVar1 != 0);
      *param_2 = '\0';
    }
  }
  else {
    iVar5 = -1;
  }
  return iVar5;
}



// FUNCTION 143dce610 FUN_143dce610 body=279 status=ok
// SIG undefined FUN_143dce610(void)

undefined8 FUN_143dce610(longlong param_1,int param_2,char *param_3)

{
  char *pcVar1;
  int *piVar2;
  short *psVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pcVar1 = (char *)(*(longlong *)(param_1 + 8) + 0x3b3);
  *pcVar1 = *pcVar1 + '\x01';
  cVar4 = *(char *)(*(longlong *)(param_1 + 8) + 0x3b3);
  if (cVar4 == '_') {
    Curl_pp_sendf(2,"More hdr frags than we can deal with, dropping\n");
    return 0xffffffff;
  }
  *(char *)((longlong)param_2 + 800 + *(longlong *)(param_1 + 8)) = cVar4;
  lVar7 = *(longlong *)(param_1 + 8);
  *(undefined4 *)(lVar7 + 0x1c + (ulonglong)*(byte *)(lVar7 + 0x3b3) * 8) =
       *(undefined4 *)(lVar7 + 0x3a0);
  *(undefined2 *)
   (*(longlong *)(param_1 + 8) + 0x20 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8
   ) = 0;
  *(undefined1 *)
   (*(longlong *)(param_1 + 8) + 0x22 + (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8
   ) = 0;
  do {
    uVar5 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3a0);
    uVar6 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
    if (uVar6 <= uVar5) {
      if (uVar5 == uVar6) {
        Curl_pp_sendf(1,"Ran out of header data space\n");
        return 0xffffffff;
      }
      Curl_pp_sendf(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds",uVar5,uVar6);
      return 0xffffffff;
    }
    *(char *)((ulonglong)uVar5 + *(longlong *)(*(longlong *)(param_1 + 8) + 0x10)) = *param_3;
    piVar2 = (int *)(*(longlong *)(param_1 + 8) + 0x3a0);
    *piVar2 = *piVar2 + 1;
    if (*param_3 != '\0') {
      psVar3 = (short *)(*(longlong *)(param_1 + 8) + 0x20 +
                        (ulonglong)*(byte *)(*(longlong *)(param_1 + 8) + 0x3b3) * 8);
      *psVar3 = *psVar3 + 1;
    }
    cVar4 = *param_3;
    param_3 = param_3 + 1;
  } while (cVar4 != '\0');
  return 0;
}



// FUNCTION 143dce730 FUN_143dce730 body=33 status=ok
// SIG undefined FUN_143dce730(void)

longlong FUN_143dce730(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  bVar1 = *(byte *)((longlong)param_2 + 800 + lVar2);
  if (bVar1 == 0) {
    return 0;
  }
  return (ulonglong)*(uint *)(lVar2 + 0x1c + (ulonglong)bVar1 * 8) + *(longlong *)(lVar2 + 0x10);
}



// FUNCTION 143dce760 FUN_143dce760 body=57 status=ok
// SIG undefined FUN_143dce760(void)

int FUN_143dce760(longlong param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 8);
  iVar3 = 0;
  if ((lVar2 != 0) && (bVar1 = *(byte *)((longlong)param_2 + 800 + lVar2), bVar1 != 0)) {
    do {
      iVar3 = iVar3 + (uint)*(ushort *)(lVar2 + 0x20 + (ulonglong)bVar1 * 8);
      bVar1 = *(byte *)(lVar2 + 0x22 + (ulonglong)bVar1 * 8);
    } while (bVar1 != 0);
    return iVar3;
  }
  return 0;
}



// FUNCTION 143dce7a0 FUN_143dce7a0 body=238 status=ok
// SIG undefined FUN_143dce7a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dce7a0(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar3 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + lVar1;
  if (*(longlong *)(param_1 + 8) == 0) {
    if (*(int *)(lVar3 + 0x130) != *(int *)(lVar1 + 0x4c4)) {
      FUN_143dce220();
      lVar1 = FUN_143dce280(lVar3 + 0xa0,*(undefined4 *)(lVar1 + 0x4c0));
      *(longlong *)(param_1 + 8) = lVar1;
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0x3b2) = 1;
        *(longlong *)(*(longlong *)(param_1 + 8) + 8) = param_1;
        *(int *)(lVar3 + 0x130) = *(int *)(lVar3 + 0x130) + 1;
        FUN_143dcd890(param_1,0,9,local_28);
        goto LAB_143dce844;
      }
    }
    FUN_143dce380();
    uVar2 = 1;
  }
  else {
LAB_143dce844:
    FUN_143dce110(param_1,param_2);
    if ((((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0) &&
        ((short)*(uint *)(param_1 + 0x70) == 0x200)) && (lVar1 = FUN_143dcbab0(param_1), lVar1 == 0)
       ) {
      return 0xffffffff;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143dce890 thunk_FUN_143dcdf90 body=5 status=ok
// SIG undefined thunk_FUN_143dcdf90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int thunk_FUN_143dcdf90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  __time64_t _Stack_38;
  undefined1 auStack_30 [16];
  ulonglong uStack_20;
  
  uStack_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  lVar4 = *(longlong *)(param_1 + 8);
  lVar6 = *(longlong *)(param_1 + 0x78) + 0xa0 + (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  plVar1 = (longlong *)(lVar6 + 0x80);
  lVar2 = *plVar1;
  do {
    if (lVar2 == 0) {
LAB_143dce00b:
      if (lVar4 == 0) {
        return 0;
      }
      _time64(&_Stack_38);
      *(undefined8 *)(lVar4 + 0x318) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
      *(undefined8 *)(lVar4 + 8) = 0;
      lVar2 = *(longlong *)(lVar6 + 0x80);
      plVar1 = (longlong *)(lVar6 + 0x80);
      if (lVar2 != 0) {
        do {
          plVar5 = plVar1;
          lVar3 = lVar2;
          lVar2 = *(longlong *)(lVar3 + 0x10);
          plVar1 = (longlong *)(lVar3 + 0x10);
        } while (*(longlong *)(lVar3 + 0x10) != 0);
        if (lVar3 != 0) {
          *(longlong *)(lVar3 + 8) = lVar4;
          *(longlong *)(lVar4 + 8) = lVar3;
          FUN_143dce110(lVar3,param_2);
          if (*(int *)(lVar3 + 0x1a0) != -1) {
            FUN_143dcd890(lVar3,0,9,auStack_30);
          }
          *plVar5 = *(longlong *)(lVar3 + 0x10);
          *(undefined8 *)(lVar3 + 0x10) = 0;
          *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
          if ((*(uint *)(lVar3 + 0x70) >> 0x1c & 1) == 0) {
            return 0;
          }
          if ((short)*(uint *)(lVar3 + 0x70) != 0x200) {
            return 0;
          }
          lVar4 = FUN_143dcbab0(lVar3);
          return (lVar4 != 0) - 1;
        }
      }
      FUN_143dce310(lVar6,lVar4);
      *(int *)(lVar6 + 0x90) = *(int *)(lVar6 + 0x90) + -1;
      return 0;
    }
    lVar3 = *plVar1;
    if (lVar3 == param_1) {
      *plVar1 = *(longlong *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(int *)(lVar6 + 0x88) = *(int *)(lVar6 + 0x88) + -1;
      goto LAB_143dce00b;
    }
    lVar2 = *(longlong *)(lVar3 + 0x10);
    plVar1 = (longlong *)(lVar3 + 0x10);
  } while( true );
}



// FUNCTION 143dce8a0 thunk_FUN_143dce110 body=5 status=ok
// SIG undefined thunk_FUN_143dce110(void)

void thunk_FUN_143dce110(longlong param_1,int param_2)

{
  ushort *puVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 800),0,0x5f);
  _guard_xfg_dispatch_icall_nop((void *)(lVar2 + 0x1c),0,0x2f8);
  *(undefined1 *)(lVar2 + 0x3b3) = 0;
  *(undefined8 *)(lVar2 + 0x3a0) = 0;
  *(undefined2 *)(lVar2 + 0x3b0) = 0;
  *(undefined1 *)(lVar2 + 0x3b8) = 0x60;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
  FUN_143dc5a70(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x244));
  _time64((__time64_t *)(lVar2 + 0x318));
  if (*(int *)(param_1 + 0x1a0) != -1) {
    lVar2 = FUN_143dc6100(param_1 + 0x140,0);
    if ((lVar2 != 0) && (param_2 != 0)) {
      lVar2 = (longlong)*(int *)(param_1 + 0x1a0) * 0x10 +
              *(longlong *)
               ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xe8 + *(longlong *)(param_1 + 0x78));
      puVar1 = (ushort *)(lVar2 + 10);
      *puVar1 = *puVar1 | 9;
      Curl_pp_sendf(1,"%s: calling service\n","__lws_header_table_reset");
      FUN_143dcc6f0(*(undefined8 *)(param_1 + 0x78),lVar2,(int)*(char *)(param_1 + 0x1c7));
    }
  }
  return;
}



// FUNCTION 143dce8b0 FUN_143dce8b0 body=1480 status=ok
// SIG undefined FUN_143dce8b0(void)

undefined4 FUN_143dce8b0(longlong param_1,byte *param_2,int *param_3)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  byte bVar9;
  longlong lVar10;
  short *psVar11;
  int iVar12;
  uint uVar13;
  ulonglong uVar14;
  byte local_res8 [8];
  
  lVar4 = *(longlong *)(param_1 + 8);
  lVar5 = *(longlong *)(param_1 + 0x78);
  iVar12 = 0;
  do {
    *param_3 = *param_3 + -1;
    local_res8[0] = *param_2;
    param_2 = param_2 + 1;
    bVar9 = *(byte *)(lVar4 + 0x3b8);
    if (bVar9 == 0x60) {
      bVar9 = local_res8[0];
      if ((byte)(local_res8[0] + 0xbf) < 0x1a) {
        bVar9 = local_res8[0] + 0x20;
      }
      uVar14 = (ulonglong)*(short *)(lVar4 + 0x3b0);
      bVar2 = (&DAT_145dbdd20)[uVar14];
      while (iVar7 = (int)uVar14, -1 < (char)bVar2) {
        if (bVar2 == 8) goto LAB_143dceba6;
        if (bVar2 < 8) goto LAB_143dceb69;
        if (bVar2 == bVar9) {
          *(ushort *)(lVar4 + 0x3b0) =
               (ushort)(byte)(&DAT_145dbdd20)[iVar7 + 2] * 0x100 +
               (ushort)(byte)(&DAT_145dbdd20)[iVar7 + 1] + (short)uVar14;
          goto LAB_143dcebae;
        }
        uVar14 = (ulonglong)(iVar7 + 3U);
        bVar2 = (&DAT_145dbdd20)[(int)(iVar7 + 3U)];
      }
      if ((((&DAT_145dbdd20)[iVar7] & 0x7f) == bVar9) &&
         (uVar14 = (ulonglong)(iVar7 + 1U), (&DAT_145dbdd20)[(int)(iVar7 + 1U)] != '\b')) {
LAB_143dceb69:
        *(short *)(lVar4 + 0x3b0) = (short)uVar14;
      }
      else {
LAB_143dceba6:
        *(undefined2 *)(lVar4 + 0x3b0) = 0xffff;
      }
LAB_143dcebae:
      sVar3 = *(short *)(lVar4 + 0x3b0);
      if (sVar3 < 0) {
        if ((*(undefined ***)(param_1 + 0x68) == &PTR_DAT_146838500) &&
           ((*(uint *)(param_1 + 0x70) & 0x20000000) != 0)) {
          uVar6 = 0;
          pbVar8 = &DAT_145dbe1b8;
          do {
            if (*(char *)((ulonglong)*pbVar8 + 800 + lVar4) != '\0') {
              *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
              break;
            }
            uVar6 = uVar6 + 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar6 < 8);
          if (uVar6 == 8) {
            if ((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x22c) & 0x100000) != 0) {
              return 2;
            }
            goto LAB_143dceab4;
          }
        }
        else {
          if (-1 < sVar3) goto LAB_143dcec2b;
LAB_143dcec1f:
          *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
        }
      }
      else {
LAB_143dcec2b:
        if ((byte)(&DAT_145dbdd20)[sVar3] < 8) {
          uVar6 = 0;
          pbVar8 = &DAT_145dbe1b8;
          uVar13 = (uint)CONCAT11((&DAT_145dbdd20)[sVar3],(&DAT_145dbdd20)[sVar3 + 1]);
          uVar14 = (ulonglong)uVar13;
          do {
            if ((uVar13 == *pbVar8) && (*(char *)((ulonglong)*pbVar8 + 800 + lVar4) != '\0')) {
              Curl_pp_sendf(2,"Duplicated method\n");
              return 0xffffffff;
            }
            uVar6 = uVar6 + 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar6 < 8);
          *(undefined1 *)(lVar4 + 0x3b4) = 0;
          if (uVar13 == 0x22) {
            uVar14 = 6;
          }
          *(char *)(lVar4 + 0x3b8) = (char)uVar14;
          lVar10 = *(longlong *)(lVar5 + 0x3a8);
          if (lVar10 == 0) {
            uVar6 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
          }
          else {
            uVar6 = (uint)*(ushort *)(lVar10 + (uVar14 & 0xff) * 2);
          }
          *(uint *)(lVar4 + 0x3a8) = uVar6;
          if ((char)uVar14 == '\b') {
LAB_143dceaa7:
            if (*(char *)(lVar4 + 0x3b5) == '\0') {
              lVar5 = *(longlong *)(param_1 + 8);
              iVar7 = 0;
              if ((lVar5 != 0) && (bVar9 = *(byte *)(lVar5 + 0x325), bVar9 != 0)) {
                do {
                  iVar7 = iVar7 + (uint)*(ushort *)(lVar5 + 0x20 + (ulonglong)bVar9 * 8);
                  bVar9 = *(byte *)(lVar5 + 0x22 + (ulonglong)bVar9 * 8);
                } while (bVar9 != 0);
                if ((iVar7 != 0) &&
                   (bVar9 = *(byte *)(lVar5 + 0x341), uVar14 = (ulonglong)bVar9, bVar9 != 0)) {
                  do {
                    iVar12 = iVar12 + (uint)*(ushort *)(lVar5 + 0x20 + uVar14 * 8);
                    bVar2 = *(byte *)(lVar5 + 0x22 + uVar14 * 8);
                    uVar14 = (ulonglong)bVar2;
                  } while (bVar2 != 0);
                  if (iVar12 != 0) {
                    iVar12 = atoi((char *)((ulonglong)*(uint *)(lVar5 + 0x1c + (ulonglong)bVar9 * 8)
                                          + *(longlong *)(lVar5 + 0x10)));
                    *(char *)(param_1 + 0x1c5) = (char)iVar12;
                  }
                }
              }
              *(undefined1 *)(lVar4 + 0x3b8) = 99;
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
              return 0;
            }
LAB_143dceab4:
            Curl_pp_sendf(4," forbidding on uri sanitation\n");
            FUN_143dd6ab0(param_1,0x193,0);
            return 0xffffffff;
          }
LAB_143dcecc6:
          *(char *)(lVar4 + 0x3b3) = *(char *)(lVar4 + 0x3b3) + '\x01';
LAB_143dceccc:
          if (*(byte *)(lVar4 + 0x3b3) == 0x5f) {
            Curl_pp_sendf(2,"More hdr frags than we can deal with\n");
            return 0xffffffff;
          }
          *(undefined4 *)(lVar4 + 0x1c + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) =
               *(undefined4 *)(lVar4 + 0x3a0);
          *(undefined2 *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 0;
          *(undefined1 *)(lVar4 + 0x22 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 0;
          *(undefined1 *)(lVar4 + 0x23 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) = 2;
          bVar9 = *(byte *)((ulonglong)*(byte *)(lVar4 + 0x3b8) + 800 + lVar4);
          uVar14 = (ulonglong)bVar9;
          if (bVar9 == 0) {
            *(undefined1 *)((ulonglong)*(byte *)(lVar4 + 0x3b8) + 800 + lVar4) =
                 *(undefined1 *)(lVar4 + 0x3b3);
            *(uint *)(lVar4 + 0x3ac) = (uint)*(byte *)(lVar4 + 0x3b8);
          }
          else {
            pbVar8 = (byte *)(lVar4 + 0x22 + uVar14 * 8);
            cVar1 = *(char *)(lVar4 + 0x22 + uVar14 * 8);
            while (cVar1 != '\0') {
              uVar14 = (ulonglong)*pbVar8;
              pbVar8 = (byte *)(lVar4 + 0x22 + uVar14 * 8);
              cVar1 = *(char *)(lVar4 + 0x22 + uVar14 * 8);
            }
            *(undefined1 *)(lVar4 + 0x22 + uVar14 * 8) = *(undefined1 *)(lVar4 + 0x3b3);
            iVar7 = FUN_143dce450(param_1,0x20);
            if (iVar7 < 0) {
              return 0xffffffff;
            }
          }
        }
      }
    }
    else if (bVar9 == 0x61) {
      if (local_res8[0] == 0xd) {
        *(undefined1 *)(lVar4 + 0x3b8) = 0x62;
      }
    }
    else if (bVar9 == 0x62) {
      if (*(char *)(lVar4 + 0x3b5) != '\0') goto LAB_143dceab4;
      if (local_res8[0] != 10) goto LAB_143dcec1f;
      *(undefined1 *)(lVar4 + 0x3b8) = 0x60;
      *(undefined2 *)(lVar4 + 0x3b0) = 0;
    }
    else if ((bVar9 != 99) &&
            ((*(short *)(lVar4 + 0x20 + (ulonglong)*(byte *)((ulonglong)bVar9 + 800 + lVar4) * 8) !=
              0 || (local_res8[0] != 0x20)))) {
      uVar6 = 0;
      pbVar8 = &DAT_145dbe1b8;
      do {
        if (bVar9 == *pbVar8) break;
        uVar6 = uVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 < 8);
      if (uVar6 != 8) {
        if (local_res8[0] == 0x20) {
          if ((*(short *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8) == 0) &&
             (iVar7 = FUN_143dce450(param_1,0x2f), iVar7 < 0)) {
            return 0xffffffff;
          }
          if ((*(char *)(lVar4 + 0x3b4) == '\x03') &&
             (2 < *(ushort *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8))) {
            *(int *)(lVar4 + 0x3a0) = *(int *)(lVar4 + 0x3a0) + -1;
            psVar11 = (short *)(lVar4 + 0x20 + (ulonglong)*(byte *)(lVar4 + 0x3b3) * 8);
            *psVar11 = *psVar11 + -1;
            lVar10 = (ulonglong)*(byte *)(lVar4 + 0x3b3) + 4;
            do {
              psVar11 = (short *)(lVar4 + lVar10 * 8);
              *(int *)(lVar4 + 0x3a0) = *(int *)(lVar4 + 0x3a0) + -1;
              *psVar11 = *psVar11 + -1;
              lVar10 = (ulonglong)*(byte *)(lVar4 + 0x3b3) + 4;
              if (*(ushort *)(lVar4 + lVar10 * 8) < 2) break;
            } while (*(char *)((ulonglong)*(uint *)(lVar4 + 0x3a0) + *(longlong *)(lVar4 + 0x10)) !=
                     '/');
          }
          iVar7 = FUN_143dce450(param_1,0);
          if (iVar7 < 0) {
            return 0xffffffff;
          }
          *(undefined1 *)(lVar4 + 0x3b8) = 0xf;
          goto LAB_143dcecc6;
        }
        iVar7 = FUN_143dcee80(param_1,local_res8);
        if (iVar7 == 0) goto LAB_143dcea5c;
        if (iVar7 == 1) goto LAB_143dcea9a;
        if (iVar7 == 2) goto LAB_143dceab4;
        if (iVar7 != 3) {
          return 0xffffffff;
        }
        goto LAB_143dceccc;
      }
LAB_143dcea5c:
      bVar9 = local_res8[0];
      if ((*(char *)(lVar4 + 0x3b8) != '\b') && (local_res8[0] == 0xd)) {
        if (*(char *)(lVar4 + 0x3b5) != '\0') goto LAB_143dceab4;
        bVar9 = 0;
        *(undefined1 *)(lVar4 + 0x3b8) = 0x62;
      }
      iVar7 = FUN_143dce450(param_1,bVar9);
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      if (iVar7 == 0) {
LAB_143dcea9a:
        if (*(char *)(lVar4 + 0x3b8) == '\b') goto LAB_143dceaa7;
      }
      else {
        *(undefined1 *)(lVar4 + 0x3b8) = 0x61;
      }
    }
    if (*param_3 == 0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 143dcee80 FUN_143dcee80 body=961 status=ok
// SIG undefined FUN_143dcee80(void)

undefined4 FUN_143dcee80(longlong param_1,byte *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  short *psVar8;
  
  lVar1 = *(longlong *)(param_1 + 8);
  bVar4 = *param_2;
  bVar2 = false;
  cVar3 = *(char *)(lVar1 + 0x3b5);
  if (cVar3 == '\0') {
    if (bVar4 == 0x25) {
      *(undefined1 *)(lVar1 + 0x3b5) = 1;
      return 1;
    }
  }
  else {
    if (cVar3 == '\x01') {
      cVar3 = FUN_143dc5c40(bVar4);
      if (cVar3 < '\0') {
        return 2;
      }
      *(byte *)(lVar1 + 0x3b6) = bVar4;
      *(undefined1 *)(lVar1 + 0x3b5) = 2;
      return 1;
    }
    if (cVar3 == '\x02') {
      cVar3 = FUN_143dc5c40(bVar4);
      if (cVar3 < '\0') {
        return 2;
      }
      cVar3 = FUN_143dc5c40(*(undefined1 *)(lVar1 + 0x3b6));
      bVar4 = FUN_143dc5c40(bVar4);
      bVar4 = bVar4 | cVar3 << 4;
      bVar2 = true;
      *param_2 = bVar4;
      *(undefined1 *)(lVar1 + 0x3b5) = 0;
    }
  }
  cVar3 = *(char *)(lVar1 + 0x3b4);
  if (cVar3 == '\0') {
    if (bVar4 == 0) {
      return 0xffffffff;
    }
    if (((bVar4 == 0x26) || (bVar4 == 0x3b)) && (!bVar2)) {
      iVar5 = FUN_143dce450(param_1,0);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      *(byte *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(byte *)(lVar1 + 0x3b3) + 1;
      *(char *)(lVar1 + 0x3b3) = *(char *)(lVar1 + 0x3b3) + '\x01';
      if (0x5e < *(byte *)(lVar1 + 0x3b3)) {
        return 3;
      }
      *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + 1;
      *(undefined1 *)(lVar1 + 0x3b7) = 0;
      *(undefined4 *)(lVar1 + 0x1c + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(undefined4 *)(lVar1 + 0x3a0);
      *(undefined2 *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      return 1;
    }
    if (bVar4 == 0x3d) {
      if (bVar2) {
        if ((*(char *)(lVar1 + 0x36c) != '\0') && (*(char *)(lVar1 + 0x3b7) == '\0')) {
          *param_2 = 0x5f;
        }
      }
      else {
        *(undefined1 *)(lVar1 + 0x3b7) = 1;
      }
    }
    else if (bVar4 == 0x2b) {
      if (!bVar2) {
        *param_2 = 0x20;
      }
    }
    else {
      if (bVar4 != 0x2f) goto LAB_143dcef69;
      if (*(char *)(lVar1 + 0x36c) == '\0') {
        *(undefined1 *)(lVar1 + 0x3b4) = 1;
      }
    }
LAB_143dcf176:
    uVar6 = 0;
  }
  else {
    if (cVar3 == '\x01') {
      if (bVar4 != 0x2f) {
        if (bVar4 == 0x2e) {
          *(undefined1 *)(lVar1 + 0x3b4) = 2;
          return 1;
        }
LAB_143dcef62:
        *(undefined1 *)(lVar1 + 0x3b4) = 0;
        goto LAB_143dcef69;
      }
    }
    else {
      if (cVar3 == '\x02') {
        if (bVar4 == 0x2e) {
          *(undefined1 *)(lVar1 + 0x3b4) = 3;
          return 1;
        }
        if (bVar4 == 0x2f) {
          *(undefined1 *)(lVar1 + 0x3b4) = 1;
          return 1;
        }
        *(undefined1 *)(lVar1 + 0x3b4) = 0;
        iVar5 = FUN_143dce450(param_1,0x2e);
        if (iVar5 < 0) {
          return 0xffffffff;
        }
      }
      else if (cVar3 == '\x03') {
        if ((bVar4 - 0x2f & 0xef) != 0) {
          iVar5 = FUN_143dce450(param_1,0x2e);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          iVar5 = FUN_143dce450(param_1,0x2e);
          if (iVar5 < 0) {
            return 0xffffffff;
          }
          goto LAB_143dcef62;
        }
        if (2 < *(ushort *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8)) {
          *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + -1;
          psVar8 = (short *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8);
          *psVar8 = *psVar8 + -1;
          lVar7 = (ulonglong)*(byte *)(lVar1 + 0x3b3) + 4;
          do {
            psVar8 = (short *)(lVar1 + lVar7 * 8);
            *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + -1;
            *psVar8 = *psVar8 + -1;
            lVar7 = (ulonglong)*(byte *)(lVar1 + 0x3b3) + 4;
            if (*(ushort *)(lVar1 + lVar7 * 8) < 2) break;
          } while (*(char *)((ulonglong)*(uint *)(lVar1 + 0x3a0) + *(longlong *)(lVar1 + 0x10)) !=
                   '/');
        }
        *(undefined1 *)(lVar1 + 0x3b4) = 1;
        if (*(ushort *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) < 2) {
          return 1;
        }
      }
LAB_143dcef69:
      if (((bVar4 != 0x3f) || (bVar2)) || (*(char *)(lVar1 + 0x36c) != '\0')) goto LAB_143dcf176;
      if (*(char *)(lVar1 + 0x3b5) != '\0') {
        return 2;
      }
      iVar5 = FUN_143dce450(param_1,0);
      if (iVar5 < 0) {
        return 0xffffffff;
      }
      *(char *)(lVar1 + 0x3b3) = *(char *)(lVar1 + 0x3b3) + '\x01';
      if (0x5e < *(byte *)(lVar1 + 0x3b3)) {
        return 3;
      }
      *(int *)(lVar1 + 0x3a0) = *(int *)(lVar1 + 0x3a0) + 1;
      *(undefined4 *)(lVar1 + 0x1c + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) =
           *(undefined4 *)(lVar1 + 0x3a0);
      *(undefined2 *)(lVar1 + 0x20 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x22 + (ulonglong)*(byte *)(lVar1 + 0x3b3) * 8) = 0;
      *(undefined1 *)(lVar1 + 0x3b7) = 0;
      *(undefined1 *)(lVar1 + 0x36c) = *(undefined1 *)(lVar1 + 0x3b3);
      *(undefined1 *)(lVar1 + 0x3b4) = 0;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143dcf250 FUN_143dcf250 body=104 status=ok
// SIG undefined FUN_143dcf250(void)

undefined8 FUN_143dcf250(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(*(longlong *)(param_1 + 8) + 0x3a0);
  uVar2 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4c0);
  if (uVar1 < uVar2) {
    return 0;
  }
  if (uVar1 == uVar2) {
    Curl_pp_sendf(1,"Ran out of header data space\n");
    return 1;
  }
  Curl_pp_sendf(1,"%s: pos %d, limit %d\n","lws_pos_in_bounds",uVar1,uVar2);
  return 1;
}



// FUNCTION 143dcf2c0 FUN_143dcf2c0 body=1141 status=ok
// SIG undefined FUN_143dcf2c0(void)

undefined8 FUN_143dcf2c0(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  char *pcVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_res8 [2];
  uint local_res10 [2];
  
  local_res8[0] = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined8 *)(param_2 + 0x168) = *(undefined8 *)(param_1 + 2);
    *(undefined4 *)(param_2 + 0x228) = *param_1;
  }
  iVar7 = *(int *)(param_2 + 0x228);
  if (iVar7 + 2U < 2) {
    return 0;
  }
  for (lVar9 = *(longlong *)(*(longlong *)(param_2 + 0x148) + 0x378); lVar9 != 0;
      lVar9 = *(longlong *)(lVar9 + 0x150)) {
    if (*(int *)(lVar9 + 0x228) == iVar7) {
      pcVar12 = *(char **)(param_2 + 0x168);
      if (pcVar12 == (char *)0x0) {
        if (*(longlong *)(lVar9 + 0x168) == 0) {
LAB_143dcf35b:
          if (*(longlong *)(lVar9 + 0x158) != 0) {
            Curl_pp_sendf(4," using listen skt from vhost %s\n",*(undefined8 *)(lVar9 + 0x160));
            return 0;
          }
        }
      }
      else if (*(longlong *)(lVar9 + 0x168) != 0) {
        lVar10 = *(longlong *)(lVar9 + 0x168) - (longlong)pcVar12;
        do {
          cVar3 = *pcVar12;
          cVar4 = pcVar12[lVar10];
          if (cVar3 != cVar4) break;
          pcVar12 = pcVar12 + 1;
        } while (cVar4 != '\0');
        if (cVar3 == cVar4) goto LAB_143dcf35b;
      }
    }
  }
  iVar13 = 0;
  if (*(longlong *)(param_2 + 0x168) == 0) goto LAB_143dcf3d0;
  iVar7 = FUN_143dc6d30(param_2,0xffffffffffffffff,iVar7);
LAB_143dcf5ad:
  lVar9 = *(longlong *)(param_2 + 0x148);
  plVar2 = (longlong *)(lVar9 + 0x380);
  lVar10 = *(longlong *)(lVar9 + 0x380);
  while (lVar10 != 0) {
    lVar10 = *plVar2;
    if (iVar7 < 0) {
      if (lVar10 == param_2) goto LAB_143dcf60d;
    }
    else if (lVar10 == param_2) {
      *plVar2 = *(longlong *)(param_2 + 0x198);
      *(undefined8 *)(param_2 + 0x198) = 0;
      goto LAB_143dcf60d;
    }
    plVar2 = (longlong *)(lVar10 + 0x198);
    lVar10 = *plVar2;
  }
  if (iVar7 < 0) {
    *(undefined8 *)(param_2 + 0x198) = *(undefined8 *)(lVar9 + 0x380);
    *(longlong *)(lVar9 + 0x380) = param_2;
  }
LAB_143dcf60d:
  if (iVar7 == -2) {
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x228);
    pcVar12 = "VH %s: iface %s port %d NOT USABLE\n";
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    uVar14 = *(undefined8 *)(param_2 + 0x160);
  }
  else {
    iVar13 = 0;
    if (iVar7 != -1) {
LAB_143dcf3d0:
      do {
        if (0 < iVar13) {
          return 0;
        }
        if (((*(byte *)(*(longlong *)(param_2 + 0x148) + 0x4b0) & 0x20) != 0) ||
           (uVar11 = 0x17, (*(byte *)(param_2 + 0x22c) & 0x20) != 0)) {
          uVar11 = 2;
        }
        lVar9 = Ordinal_23(uVar11,1);
        if (lVar9 == -1) {
          Curl_pp_sendf(1,"ERROR opening socket\n");
          return 1;
        }
        uVar11 = 0xfffffffb;
        if ((*(uint *)(param_2 + 0x22c) & 0x800000) != 0) {
          uVar11 = 4;
        }
        iVar7 = Ordinal_21(lVar9,0xffff,uVar11,local_res8,4);
        if (iVar7 < 0) {
          pcVar12 = "reuseaddr failed\n";
LAB_143dcf6fd:
          uVar11 = 1;
LAB_143dcf702:
          Curl_pp_sendf(uVar11,pcVar12);
LAB_143dcf707:
          Ordinal_3(lVar9);
          return 0xffffffff;
        }
        if ((((*(byte *)(*(longlong *)(param_2 + 0x148) + 0x4b0) & 0x20) == 0) &&
            (uVar5 = *(uint *)(param_2 + 0x22c), (uVar5 & 0x20) == 0)) && ((uVar5 >> 0x10 & 1) != 0)
           ) {
          local_res10[0] = uVar5 >> 0x11 & 1;
          iVar7 = Ordinal_21(lVar9,0x29,0x1b,local_res10,4);
          if (iVar7 < 0) goto LAB_143dcf707;
        }
        FUN_143dd31a0(param_2,lVar9);
        iVar7 = FUN_143dc6d30(param_2,lVar9,*(undefined4 *)(param_2 + 0x228),
                              *(undefined8 *)(param_2 + 0x168));
        if (iVar7 < 0) goto LAB_143dcf5a4;
        *(int *)(param_2 + 0x228) = iVar7;
        lVar10 = FUN_143dd4c00(0x1d0,"listen wsi");
        if (lVar10 == 0) {
          pcVar12 = "Out of mem\n";
          goto LAB_143dcf6fd;
        }
        *(undefined8 *)(lVar10 + 0x78) = *(undefined8 *)(param_2 + 0x148);
        *(longlong *)(lVar10 + 0x178) = lVar9;
        FUN_143dc69d0(lVar10,0,0x200,&PTR_s_listen_1468386e0);
        uVar11 = *(undefined8 *)(param_2 + 0x170);
        *(uint *)(lVar10 + 0x1b8) = *(uint *)(lVar10 + 0x1b8) | 0x20;
        *(undefined8 *)(lVar10 + 0xa0) = uVar11;
        *(char *)(lVar10 + 0x1c7) = (char)iVar13;
        *(longlong *)(lVar10 + 0x80) = param_2;
        pcVar6 = *(code **)(*(longlong *)(*(longlong *)(lVar10 + 0x78) + 0x3d0) + 0x20);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(lVar10);
        }
        iVar7 = FUN_143dcd320(*(undefined8 *)(param_2 + 0x148),lVar10);
        if (iVar7 != 0) {
          pcVar12 = "inserting wsi socket into fds failed\n";
          uVar11 = 4;
          goto LAB_143dcf702;
        }
        piVar1 = (int *)(*(longlong *)(param_2 + 0x148) + 0x4a8);
        *piVar1 = *piVar1 + 1;
        *(longlong *)(param_2 + 0x158) = lVar10;
        iVar7 = Ordinal_13(*(undefined8 *)(lVar10 + 0x178),0x7fffffff);
        if (iVar7 < 0) {
          uVar8 = Ordinal_111();
          Curl_pp_sendf(1,"listen failed with error %d\n",uVar8);
          *(undefined8 *)(param_2 + 0x158) = 0;
          piVar1 = (int *)(*(longlong *)(param_2 + 0x148) + 0x4a8);
          *piVar1 = *piVar1 + -1;
          FUN_143dcd650(lVar10);
          Ordinal_3(lVar9);
          return 0xffffffff;
        }
        iVar13 = iVar13 + 1;
      } while( true );
    }
    if (param_1 == (undefined4 *)0x0) {
      return 1;
    }
    uVar8 = *(undefined4 *)(param_2 + 0x228);
    pcVar12 = "VH %s: iface %s port %d DOESN\'T EXIST\n";
    uVar11 = *(undefined8 *)(param_2 + 0x168);
    uVar14 = *(undefined8 *)(param_2 + 0x160);
  }
  Curl_pp_sendf(1,pcVar12,uVar14,uVar11,uVar8);
  return 1;
LAB_143dcf5a4:
  Ordinal_3(lVar9);
  goto LAB_143dcf5ad;
}



// FUNCTION 143dcf740 FUN_143dcf740 body=1005 status=ok
// SIG undefined FUN_143dcf740(void)

longlong FUN_143dcf740(longlong param_1,byte param_2,undefined8 param_3,longlong param_4,
                      longlong param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  byte bVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  
  lVar6 = *(longlong *)(param_1 + 0x148);
  iVar8 = -1;
  bVar2 = false;
  if (param_5 != 0) {
    iVar8 = (int)*(char *)(param_5 + 0x1c7);
  }
  lVar4 = FUN_143dcfbc0(param_1,iVar8);
  if (lVar4 == 0) {
    if ((param_2 & 10) == 2) {
      Ordinal_3(param_3);
    }
    return 0;
  }
  if (param_5 != 0) {
    *(longlong *)(lVar4 + 0x88) = param_5;
    *(undefined8 *)(lVar4 + 0x98) = *(undefined8 *)(param_5 + 0x90);
    *(longlong *)(param_5 + 0x90) = lVar4;
    if ((param_2 & 8) != 0) {
      *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) | 0x800000;
    }
  }
  *(undefined8 *)(lVar4 + 0x178) = param_3;
  if (param_4 != 0) {
    lVar5 = FUN_143dc70b0(*(undefined8 *)(lVar4 + 0x80),param_4);
    *(longlong *)(lVar4 + 0xa0) = lVar5;
    if (lVar5 == 0) {
      Curl_pp_sendf(1,"Protocol %s not enabled on vhost %s\n",param_4,
                    *(undefined8 *)(*(longlong *)(lVar4 + 0x80) + 0x160));
      goto LAB_143dcf8ba;
    }
    iVar8 = FUN_143dc6320(lVar4);
    if (iVar8 == 0) {
      if ((param_2 & 8) == 0) goto LAB_143dcf986;
      *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
      FUN_143dc5c70(lVar4,*(undefined8 *)(lVar4 + 0xa0));
      FUN_143dc69d0(lVar4,0x20000000,0x117,&PTR_DAT_1468382b0);
      lVar6 = FUN_143dd4c00(200,"ws struct");
      *(longlong *)(lVar4 + 0x60) = lVar6;
      if (lVar6 != 0) {
        FUN_143dc8260(lVar4);
        return lVar4;
      }
      pcVar9 = "OOM\n";
    }
    else {
      pcVar9 = "OOM trying to get user_space\n";
    }
    Curl_pp_sendf(4,pcVar9);
LAB_143dcf8ba:
    Curl_pp_sendf(4,"%s: exiting on bail\n","lws_adopt_descriptor_vhost");
    if (param_5 != 0) {
      *(undefined8 *)(param_5 + 0x90) = *(undefined8 *)(lVar4 + 0x98);
    }
    if (*(longlong *)(lVar4 + 0x130) != 0) {
      thunk_FUN_143dd4bc0(*(longlong *)(lVar4 + 0x130),0,"lws_free");
    }
    thunk_FUN_143dd4bc0(lVar4,0,"lws_free");
    Ordinal_3(param_3);
    return 0;
  }
  if ((param_2 & 1) == 0) {
    FUN_143dc5c70(lVar4,(ulonglong)*(byte *)(param_1 + 0x24d) * 0x38 +
                        *(longlong *)(param_1 + 0x170));
    FUN_143dc69d0(lVar4,0,0x117,&PTR_s_raw_skt_1468383a0);
  }
  else {
    *(ulonglong *)(lVar4 + 0xa0) =
         (ulonglong)*(byte *)(param_1 + 0x24c) * 0x38 + *(longlong *)(param_1 + 0x170);
    *(undefined ***)(lVar4 + 0x68) = &PTR_DAT_146838500;
  }
LAB_143dcf986:
  bVar10 = param_2 & 2;
  if (bVar10 != 0) {
    if ((param_2 & 0x10) != 0) {
      uVar7 = thunk_FUN_143dd4bc0(0,0x28,"udp struct");
      *(undefined8 *)(lVar4 + 0xe8) = uVar7;
    }
    if ((param_2 & 1) != 0) {
      FUN_143dc6c40(lVar4,3,*(undefined4 *)(lVar6 + 0x4b8));
    }
  }
  iVar8 = 0x13;
  bVar11 = param_2 & 1;
  if (bVar11 == 0) {
    iVar8 = 0x3f - (uint)(bVar10 != 0);
  }
  if ((*(int *)(*(longlong *)(lVar4 + 0x80) + 0x208) == 0) || ((param_2 & 6) != 6)) {
    if (bVar11 == 0) {
      uVar7 = 0;
      uVar12 = 0x117;
      if (bVar10 == 0) {
        ppuVar13 = &PTR_s_raw_file_146838450;
      }
      else {
        ppuVar13 = &PTR_s_raw_skt_1468383a0;
      }
    }
    else {
      ppuVar13 = &PTR_DAT_146838500;
      uVar7 = 0x20000000;
      uVar12 = 0x15;
    }
    FUN_143dc69d0(lVar4,uVar7,uVar12,ppuVar13);
  }
  else if (bVar11 == 0) {
    FUN_143dc69d0(lVar4,0,0x207,&PTR_s_raw_skt_1468383a0);
    bVar2 = true;
  }
  else {
    FUN_143dc69d0(lVar4,0x20000000,0x207,&PTR_DAT_146838500);
    bVar2 = true;
  }
  pcVar1 = *(code **)(*(longlong *)(lVar6 + 0x3d0) + 0x48);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(lVar4);
  }
  if (bVar2) {
    iVar3 = FUN_143dd6fb0(lVar4,param_3);
    if (iVar3 != 0) goto LAB_143dcfaa7;
  }
  else {
    iVar3 = FUN_143dcd320(lVar6,lVar4);
    if (iVar3 != 0) {
      Curl_pp_sendf(1,"%s: fail inserting socket\n","lws_adopt_descriptor_vhost");
      goto LAB_143dcfaa7;
    }
  }
  iVar8 = (**(code **)(*(longlong *)(lVar4 + 0xa0) + 8))
                    (lVar4,iVar8,*(undefined8 *)(lVar4 + 0x130),0,0);
  if (iVar8 == 0) {
    if (bVar11 != 0) {
      FUN_143dce7a0(lVar4,0);
    }
    thunk_FUN_143dd3150(lVar4);
    return lVar4;
  }
LAB_143dcfaa7:
  if (bVar10 != 0) {
    thunk_FUN_143dc4f60(lVar4,0,"adopt skt fail");
  }
  return 0;
}



// FUNCTION 143dcfb30 FUN_143dcfb30 body=130 status=ok
// SIG undefined FUN_143dcfb30(void)

undefined8 FUN_143dcfb30(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  if ((((*param_1 == 'h') && (param_1[1] == 't')) && (param_1[2] == 't')) && (param_1[3] == 'p')) {
    pcVar3 = param_1 + 5;
    if (param_1[4] != 's') {
      pcVar3 = param_1 + 4;
    }
    param_1 = pcVar3;
    if ((*pcVar3 == ':') && (param_1 = pcVar3 + 1, *param_1 == '/')) {
      param_1 = pcVar3 + 2;
    }
  }
  cVar2 = *param_1;
  while (cVar2 != '\0') {
    if ((cVar2 == '/') && (pcVar3 = param_1, param_1[1] == '/')) {
      do {
        pcVar1 = pcVar3 + 1;
        *pcVar3 = pcVar3[1];
        pcVar3 = pcVar1;
      } while (*pcVar1 != '\0');
    }
    else {
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  }
  return 0;
}



// FUNCTION 143dcfbc0 FUN_143dcfbc0 body=376 status=ok
// SIG undefined FUN_143dcfbc0(void)

longlong FUN_143dcfbc0(longlong param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  uint uVar6;
  
  if (param_2 < 0) {
    lVar4 = *(longlong *)(param_1 + 0x148);
    uVar6 = 0xffffffff;
    param_2 = -1;
    iVar3 = 0;
    if (0 < *(short *)(lVar4 + 0x4dc)) {
      puVar5 = (uint *)(lVar4 + 0x13c);
      do {
        uVar2 = *puVar5;
        if ((uVar2 != *(int *)(lVar4 + 0x4b4) - 1U) && (uVar2 < uVar6)) {
          param_2 = iVar3;
          uVar6 = uVar2;
        }
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 0x2a;
      } while (iVar3 < *(short *)(lVar4 + 0x4dc));
    }
    if (param_2 < 0) {
      Curl_pp_sendf(1,"no space for new conn\n");
      return 0;
    }
  }
  lVar4 = FUN_143dd4c00(0x1d0,"new server wsi");
  if (lVar4 == 0) {
    Curl_pp_sendf(1,"Out of memory for new connection\n");
    return 0;
  }
  *(char *)(lVar4 + 0x1c7) = (char)param_2;
  *(longlong *)(lVar4 + 0x80) = param_1;
  *(undefined8 *)(lVar4 + 0x78) = *(undefined8 *)(param_1 + 0x148);
  *(undefined2 *)(lVar4 + 0x70) = 0x200;
  *(undefined1 *)(lVar4 + 0x1c6) = 0;
  *(uint *)(lVar4 + 0x1b8) = *(uint *)(lVar4 + 0x1b8) & 0xfffffdfe | 0x100;
  *(undefined4 *)(lVar4 + 0x170) = *(undefined4 *)(param_1 + 0x208);
  *(undefined8 *)(lVar4 + 0xa0) = *(undefined8 *)(param_1 + 0x170);
  *(undefined8 *)(lVar4 + 0x130) = 0;
  *(undefined8 *)(lVar4 + 0x178) = 0xffffffffffffffff;
  *(undefined4 *)(lVar4 + 0x1a0) = 0xffffffff;
  piVar1 = (int *)(*(longlong *)(param_1 + 0x148) + 0x4a8);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*(longlong *)(param_1 + 0x170) + 8))(lVar4,0x1d,0,0,0);
  return lVar4;
}



// FUNCTION 143dcfd40 FUN_143dcfd40 body=228 status=ok
// SIG undefined FUN_143dcfd40(void)

undefined8 * FUN_143dcfd40(longlong param_1,char *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x100); puVar1 != (undefined8 *)0x0
      ; puVar1 = (undefined8 *)*puVar1) {
    if (((int)(uint)*(byte *)((longlong)puVar1 + 0x51) <= param_3) &&
       (iVar2 = strncmp(param_2,(char *)puVar1[1],
                        (ulonglong)(uint)*(byte *)((longlong)puVar1 + 0x51)), iVar2 == 0)) {
      puVar3 = (undefined8 *)(ulonglong)*(byte *)((longlong)puVar1 + 0x51);
      if (((*(char *)((longlong)puVar3 + (longlong)param_2) == '\0') ||
          ((*(char *)((longlong)puVar3 + (longlong)param_2) == '/' ||
           (*(byte *)((longlong)puVar1 + 0x51) == 1)))) &&
         ((*(char *)(puVar1 + 10) == '\x06' ||
          (((((*(char *)(puVar1 + 10) == '\x03' || (iVar2 = FUN_143dce760(param_1,0), iVar2 != 0))
             || (((*(byte *)(param_1 + 0x1b8) & 2) != 0 &&
                 (iVar2 = FUN_143dce760(param_1,0x25), iVar2 != 0)))) || (puVar1[4] != 0)) &&
           (puVar3 = (undefined8 *)(ulonglong)*(byte *)((longlong)puVar1 + 0x51),
           (uint)puVar4 < (uint)*(byte *)((longlong)puVar1 + 0x51))))))) {
        puVar4 = puVar3;
        puVar5 = puVar1;
      }
    }
  }
  return puVar5;
}



// FUNCTION 143dcfe30 FUN_143dcfe30 body=280 status=ok
// SIG undefined FUN_143dcfe30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143dcfe30(undefined8 param_1,longlong param_2,int param_3)

{
  int _FileHandle;
  uint uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined1 auStack_e8 [48];
  char local_b8 [128];
  ulonglong local_38;
  ulonglong uVar7;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar3 = 0;
  _FileHandle = FUN_143dc66d0(param_1,0);
  uVar2 = uVar3;
  uVar5 = uVar3;
  uVar7 = uVar3;
  uVar8 = uVar3;
  uVar9 = uVar3;
  if (_FileHandle < 0) {
    Curl_pp_sendf(1,"can\'t open auth file: %s\n",param_1);
    return false;
  }
  do {
    iVar6 = (int)uVar7;
    iVar4 = (int)uVar5;
    if ((int)uVar5 == (int)uVar9) {
      uVar1 = _read(_FileHandle,local_b8,0x80);
      uVar9 = (ulonglong)uVar1;
      uVar2 = uVar3;
      iVar4 = 0;
      if ((int)uVar1 < 1) {
        bVar10 = iVar6 == param_3;
LAB_143dcff0c:
        _close(_FileHandle);
        return bVar10;
      }
    }
    if (uVar8 == (longlong)param_3) {
      if ((local_b8[uVar2] == '\r') || (local_b8[uVar2] == '\n')) {
        bVar10 = true;
        goto LAB_143dcff0c;
      }
      iVar6 = 0;
      uVar8 = uVar3;
    }
    if (local_b8[uVar2] == *(char *)(uVar8 + param_2)) {
      uVar2 = uVar2 + 1;
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar7 = (ulonglong)(iVar6 + 1);
      uVar8 = uVar8 + 1;
    }
    else {
      uVar2 = uVar2 + 1;
      uVar5 = (ulonglong)(iVar4 + 1);
      uVar7 = 0;
      uVar8 = uVar3;
    }
  } while( true );
}



// FUNCTION 143dcff50 FUN_143dcff50 body=931 status=ok
// SIG undefined FUN_143dcff50(void)

char * FUN_143dcff50(longlong param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  
  lVar13 = -1;
  do {
    lVar9 = lVar13;
    lVar13 = lVar9 + 1;
  } while (*(char *)(param_1 + lVar13) != '\0');
  puVar10 = (undefined8 *)0x0;
  puVar11 = puVar10;
  if (param_2 != 0) {
    puVar11 = *(undefined8 **)(param_2 + 0x30);
  }
  if ((int)lVar13 < 5) {
    return (char *)0x0;
  }
  iVar4 = (int)lVar9;
  lVar9 = (iVar4 + -3) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)(puVar7 + 0x28bb7c90)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/x-icon";
    }
  }
  while (puVar7 = (undefined8 *)((longlong)puVar8 + 1),
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x28b6e2e0)) {
    puVar8 = puVar7;
    if (puVar7 == (undefined8 *)0x5) {
      return "image/gif";
    }
  }
  lVar12 = (iVar4 + -2) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)(puVar7 + 0x28bb7c93)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000004) {
      return "text/javascript";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x28bb7c96)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/png";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x145b71714)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/jpeg";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar12 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x145dbe4c4)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000004) {
      return "application/gzip";
    }
  }
  while (puVar8 = (undefined8 *)((longlong)puVar7 + 1),
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x145dbe4dc)) {
    puVar7 = puVar8;
    if (puVar8 == (undefined8 *)0x5) {
      return "image/jpeg";
    }
  }
  lVar12 = (iVar4 + -4) + param_1;
  puVar7 = puVar10;
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x145b7174c)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)&DAT_00000006) {
      return "text/html";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x145dbe4e4)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "text/css";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)((longlong)puVar7 + 0x145b71734)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "text/plain";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)((longlong)puVar8 + 0x145dbe4fc)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "image/svg+xml";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar7 + 1), puVar8 = puVar10,
        *(char *)(lVar9 + (longlong)puVar7) == *(char *)(puVar7 + 0x28bb7ca3)) {
    puVar7 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "application/x-font-ttf";
    }
  }
  while (puVar6 = (undefined8 *)((longlong)puVar8 + 1), puVar7 = puVar10,
        *(char *)(lVar9 + (longlong)puVar8) == *(char *)(puVar8 + 0x28bb7ca7)) {
    puVar8 = puVar6;
    if (puVar6 == (undefined8 *)0x5) {
      return "application/font-woff";
    }
  }
  while (puVar8 = (undefined8 *)((longlong)puVar7 + 1),
        *(char *)(lVar12 + (longlong)puVar7) == *(char *)(puVar7 + 0x28bb7cab)) {
    puVar7 = puVar8;
    if (puVar8 == (undefined8 *)&DAT_00000006) {
      return "application/font-woff";
    }
  }
  while (puVar7 = (undefined8 *)((longlong)puVar10 + 1),
        *(char *)(lVar9 + (longlong)puVar10) == *(char *)((longlong)puVar10 + 0x145b71764)) {
    puVar10 = puVar7;
    if (puVar7 == (undefined8 *)0x5) {
      return "application/xml";
    }
  }
  while( true ) {
    if (puVar11 == (undefined8 *)0x0) {
      return (char *)0x0;
    }
    pcVar3 = (char *)puVar11[2];
    if (*pcVar3 == '*') break;
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar3[lVar9] != '\0');
    pcVar5 = (char *)(((int)lVar13 + param_1) - lVar9);
    lVar9 = (longlong)pcVar3 - (longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      cVar2 = pcVar5[lVar9];
      if (cVar1 != cVar2) break;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) break;
    puVar11 = (undefined8 *)*puVar11;
  }
  return (char *)puVar11[3];
}



// FUNCTION 143dd0300 FUN_143dd0300 body=961 status=ok
// SIG undefined FUN_143dd0300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd0300(longlong param_1,longlong *param_2,ulonglong param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  ulonglong uVar10;
  undefined1 auStack_208 [32];
  ulonglong local_1e8;
  int local_1d8 [4];
  char local_1c8 [383];
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  uVar6 = FUN_1407891a0();
  lVar2 = *param_2;
  if (9999999 < param_3) {
    Curl_pp_sendf(1,"%s: assert: len %ld\n","lws_handshake_server",param_3 & 0xffffffff);
  }
  uVar10 = param_3;
  if (*(longlong *)(param_1 + 8) == 0) {
    Curl_pp_sendf(1,"%s: assert: NULL ah\n","lws_handshake_server");
  }
  do {
    if (uVar10 == 0) {
      return 0;
    }
    if (((*(uint *)(param_1 + 0x70) & 0x20000000) == 0) ||
       (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_146838500)) {
      Curl_pp_sendf(1,"%s: bad wsi role 0x%x\n","lws_handshake_server",
                    *(uint *)(param_1 + 0x70) & 0xffff0000);
      goto LAB_143dd06aa;
    }
    local_1d8[0] = (int)uVar10;
    iVar4 = FUN_143dce8b0(param_1,*param_2,local_1d8);
    *param_2 = *param_2 + (longlong)((int)uVar10 - local_1d8[0]);
    if (iVar4 != 0) {
      if (iVar4 == 2) goto LAB_143dd05d0;
      goto LAB_143dd06aa;
    }
    uVar10 = (longlong)local_1d8[0];
  } while (*(char *)(*(longlong *)(param_1 + 8) + 0x3b8) != 'c');
  iVar4 = FUN_143dce760(param_1,3);
  if (iVar4 != 0) {
    uVar7 = FUN_143dce730(param_1,3);
    lVar8 = FUN_143dd1820(uVar6,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x228),uVar7);
    if (lVar8 != 0) {
      *(longlong *)(param_1 + 0x80) = lVar8;
    }
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 300);
  *piVar1 = *piVar1 + 1;
  if ((*(uint *)(param_1 + 0x1b8) & 0x400) == 0) {
    piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x128);
    *piVar1 = *piVar1 + 1;
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x400;
  }
  puVar3 = *(undefined8 **)(*(longlong *)(param_1 + 0x78) + 0x3b8);
  if ((puVar3 != (undefined8 *)0x0) &&
     (iVar4 = FUN_143dce530(param_1,local_1c8,0x17f,0x45), 0 < iVar4)) {
    local_49 = 0;
    for (; puVar3 != (undefined8 *)0x0; puVar3 = (undefined8 *)*puVar3) {
      pcVar9 = strstr(local_1c8,(char *)puVar3[2]);
      if (pcVar9 != (char *)0x0) {
        pcVar9 = strchr((char *)puVar3[3],0x20);
        if (pcVar9 != (char *)0x0) {
          pcVar9 = pcVar9 + 1;
        }
        iVar4 = atoi((char *)puVar3[3]);
        FUN_143dd6ab0(param_1,iVar4,pcVar9);
        piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x144);
        *piVar1 = *piVar1 + 1;
        goto LAB_143dd06aa;
      }
    }
  }
  iVar4 = FUN_143dce760(param_1,0x51);
  if (iVar4 == 0) {
    *(undefined2 *)(param_1 + 0x70) = 0x209;
    FUN_143dc6c40(param_1,0,0);
    iVar4 = FUN_143dce760(param_1,5);
    if (iVar4 == 0) {
      *(undefined8 *)(param_1 + 0x28) = 0;
      *(undefined2 *)(param_1 + 0x70) = 0x117;
      uVar6 = FUN_143dd06d0(param_1);
      return uVar6;
    }
    pcVar9 = (char *)FUN_143dce730(param_1,5);
    iVar4 = _stricmp(pcVar9,"websocket");
    if (iVar4 == 0) {
      piVar1 = (int *)(*(longlong *)(param_1 + 0x80) + 0x134);
      *piVar1 = *piVar1 + 1;
      iVar4 = FUN_143dd83f0(param_1);
      if (iVar4 == 0) {
        return 0;
      }
    }
  }
  else {
    iVar4 = 0;
LAB_143dd05d0:
    FUN_143dc6c40(param_1,0,0);
    FUN_143dc5c70(param_1,(ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x24d) * 0x38 +
                          *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170));
    local_1e8 = 0;
    iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0x3e,*(undefined8 *)(param_1 + 0x130));
    if (iVar5 == 0) {
      FUN_143dc69d0(param_1,0,0x117,&PTR_s_raw_skt_1468383a0);
      thunk_FUN_143dcdf90(param_1,1);
      if ((iVar4 == 2) &&
         (local_1e8 = param_3,
         iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                           (param_1,0x3b,*(undefined8 *)(param_1 + 0x130),lVar2), iVar4 != 0)) {
        return 1;
      }
      return 0;
    }
  }
LAB_143dd06aa:
  thunk_FUN_143dcdf90(param_1,1);
  return 1;
}



// FUNCTION 143dd06d0 FUN_143dd06d0 body=2154 status=ok
// SIG undefined FUN_143dd06d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd06d0(longlong param_1)

{
  byte bVar1;
  code *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *pcVar12;
  char **ppcVar13;
  longlong lVar14;
  undefined1 auStack_208 [32];
  char **local_1e8;
  char *local_1e0;
  char *local_1d8;
  int local_1d0;
  int local_1c8 [2];
  char *local_1c0;
  int local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined1 local_1a8 [5];
  char local_1a3;
  char local_1a1;
  char local_198 [19];
  undefined1 local_185;
  undefined1 local_180 [40];
  char local_158 [5];
  undefined1 local_153;
  undefined1 local_152 [154];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  lVar14 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  local_1d8 = (char *)0x0;
  local_1c8[0] = 0;
  uVar3 = FUN_143dd0f40(param_1,&local_1d8,local_1c8);
  pcVar8 = local_1d8;
  if (7 < uVar3) goto LAB_143dd0ef9;
  if ((local_1d8 == (char *)0x0) || (*local_1d8 != '/')) {
    uVar6 = 0x193;
LAB_143dd0eee:
    FUN_143dd6ab0(param_1,uVar6,0);
    goto LAB_143dd0ef9;
  }
  if ((*(longlong *)(param_1 + 0x68) != 0) &&
     (pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x10), pcVar2 != (code *)0x0)) {
    iVar4 = (*pcVar2)(param_1);
    if (iVar4 == 6) {
      return 0;
    }
    if (iVar4 == 8) goto LAB_143dd0ef9;
  }
  iVar4 = FUN_143dc6320(param_1);
  if (iVar4 != 0) goto LAB_143dd0ef9;
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar4 = FUN_143dce760(param_1,1);
  if (((iVar4 != 0) || (iVar4 = FUN_143dce760(param_1,0x49), iVar4 != 0)) ||
     (iVar4 = FUN_143dce760(param_1,0x4a), iVar4 != 0)) {
    *(undefined8 *)(param_1 + 0x48) = 0x6400000;
  }
  iVar4 = FUN_143dce760(param_1,0x1b);
  if (iVar4 != 0) {
    FUN_143dce530(param_1,local_180,0x1f);
    uVar6 = atoll(local_180);
    *(undefined8 *)(param_1 + 0x48) = uVar6;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 2) == 0) {
    iVar4 = FUN_143dce760(param_1,0xf);
    uVar10 = 0;
    if (((7 < iVar4) && (FUN_143dce530(param_1,local_1a8,9), uVar10 = 0, local_1a3 == '1')) &&
       (uVar10 = 0, local_1a1 == '1')) {
      uVar10 = 1;
    }
    *(undefined4 *)(param_1 + 0x30) = uVar10;
    iVar4 = FUN_143dce760(param_1,4);
    uVar11 = uVar10;
    if (iVar4 != 0) {
      FUN_143dce530(param_1,local_198,0x13);
      local_185 = 0;
      iVar4 = _stricmp(local_198,"keep-alive");
      uVar11 = 1;
      if ((iVar4 != 0) && (iVar4 = _stricmp(local_198,"close"), uVar11 = uVar10, iVar4 == 0)) {
        uVar11 = 0;
      }
    }
    *(undefined4 *)(param_1 + 0x34) = uVar11;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 2;
  }
  iVar4 = local_1c8[0];
  ppcVar13 = (char **)(longlong)local_1c8[0];
  local_1e8 = ppcVar13;
  iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                    (param_1,0x12,*(undefined8 *)(param_1 + 0x130),pcVar8);
  if (iVar5 != 0) {
    return 1;
  }
  FUN_143dc6c40(param_1,10,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
  if ((*(byte *)(param_1 + 0x174) & 1) == 0) {
    lVar7 = FUN_143dcfd40(param_1,pcVar8,iVar4);
    if (lVar7 == 0) {
      iVar4 = FUN_143dc5c70(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x170));
      if (iVar4 != 0) {
        return 1;
      }
      *(undefined2 *)(param_1 + 0x70) = 0x118;
LAB_143dd09cc:
      local_1e8 = ppcVar13;
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                        (param_1,0xc,*(undefined8 *)(param_1 + 0x130),pcVar8);
    }
    else {
      pcVar12 = pcVar8 + *(byte *)(lVar7 + 0x51);
      if (((1 < *(byte *)(lVar7 + 0x51)) || ((byte)(*(char *)(lVar7 + 0x50) - 4U) < 2)) &&
         (((*pcVar12 != '/' || ((byte)(*(char *)(lVar7 + 0x50) - 4U) < 2)) &&
          ((bVar1 = *(byte *)(lVar7 + 0x50), bVar1 != 3 && (bVar1 != 6)))))) {
        lVar14 = *(longlong *)(lVar14 + 0xa8);
        local_1d8 = (char *)(lVar14 + 0x10);
        pcVar12 = (char *)(lVar14 + 0x210);
        if ((byte)(bVar1 - 4) < 2) {
          local_1e8 = *(char ***)(lVar7 + 0x10);
          iVar4 = FUN_143dc6cb0(pcVar12,0x100,&DAT_145b6b588,(&PTR_DAT_145dbe358)[bVar1 & 1]);
        }
        else {
          iVar4 = FUN_143dce760(param_1,3);
          if (iVar4 == 0) {
            iVar4 = FUN_143dce760(param_1,0x23);
            if (iVar4 == 0) goto LAB_143dd0ef9;
            uVar6 = 0x23;
          }
          else {
            uVar6 = 3;
          }
          uVar6 = FUN_143dce730(param_1,uVar6);
          iVar4 = FUN_143dc66a0(param_1);
          local_1e0 = pcVar8;
          local_1e8 = (char **)uVar6;
          iVar4 = FUN_143dc6cb0(pcVar12,0x100,"%s%s%s/",(&PTR_DAT_145dbe358)[iVar4 != 0]);
        }
        FUN_143dcfb30(pcVar12);
        goto LAB_143dd096c;
      }
      if (*(longlong *)(lVar7 + 0x58) != 0) {
        iVar5 = FUN_143dce760(param_1,0x19);
        if (iVar5 == 0) {
LAB_143dd0cb0:
          uVar6 = FUN_143dd2060(param_1);
          return uVar6;
        }
        iVar5 = FUN_143dce530(param_1,local_158,0xa0,0x19);
        if (iVar5 < 7) {
          pcVar8 = "b64 auth too long\n";
        }
        else {
          local_153 = 0;
          iVar5 = _stricmp(local_158,"Basic");
          if (iVar5 != 0) {
            Curl_pp_sendf(1,"auth missing basic: %s\n",local_158);
            goto LAB_143dd0c6d;
          }
          iVar5 = FUN_143dd36e0(local_152,local_b8,0x78);
          if (-1 < iVar5) {
            iVar5 = FUN_143dcfe30(*(undefined8 *)(lVar7 + 0x58),local_b8,iVar5);
            if (iVar5 == 0) {
              Curl_pp_sendf(1,"basic auth lookup failed\n");
              goto LAB_143dd0cb0;
            }
            goto LAB_143dd0cba;
          }
          pcVar8 = "plain auth too long\n";
        }
        Curl_pp_sendf(1,pcVar8);
LAB_143dd0c6d:
        FUN_143dd6ab0(param_1,0x193,0);
        uVar6 = FUN_143dd1670(param_1);
        return uVar6;
      }
LAB_143dd0cba:
      if ((*(char *)(lVar7 + 0x50) == '\x06') || (*(longlong *)(lVar7 + 0x20) != 0)) {
        lVar14 = *(longlong *)(lVar7 + 0x10);
        if (*(longlong *)(lVar7 + 0x20) != 0) {
          lVar14 = *(longlong *)(lVar7 + 0x20);
        }
        lVar14 = FUN_143dc70b0(*(undefined8 *)(param_1 + 0x80),lVar14);
        if (lVar14 == 0) {
          Curl_pp_sendf(1,"Unable to find plugin \'%s\'\n",*(undefined8 *)(lVar7 + 0x10));
          return 1;
        }
        iVar5 = FUN_143dc5c70(param_1,lVar14);
        if (iVar5 != 0) {
          return 1;
        }
        local_1c0 = pcVar8;
        local_1b8 = iVar4;
        local_1b4 = *(undefined4 *)(lVar7 + 0x48);
        local_1b0 = 0;
        local_1e8 = (char **)0x0;
        iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                          (param_1,0x33,*(undefined8 *)(param_1 + 0x130),&local_1c0);
        if (iVar5 != 0) {
          uVar6 = 0x191;
          goto LAB_143dd0eee;
        }
        if ((int)local_1b0 != 0) {
          return 0;
        }
        if (*(longlong *)(lVar7 + 0x28) != 0) {
          local_1e8 = (char **)0x0;
          iVar5 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                            (param_1,0x38,*(undefined8 *)(param_1 + 0x130));
          if (iVar5 != 0) {
            return 1;
          }
        }
        iVar5 = FUN_143dce760(param_1,1);
        if (iVar5 == 0) goto LAB_143dd0de4;
        local_1e8 = (char **)(longlong)(int)(iVar4 - (uint)*(byte *)(lVar7 + 0x51));
        iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                          (param_1,0xc,*(undefined8 *)(param_1 + 0x130),
                           pcVar8 + *(byte *)(lVar7 + 0x51));
      }
      else {
LAB_143dd0de4:
        lVar14 = -1;
        do {
          lVar14 = lVar14 + 1;
        } while (pcVar12[lVar14] != '\0');
        if ((*pcVar12 == '\0') || (((int)lVar14 == 1 && (*pcVar12 == '/')))) {
          pcVar12 = *(char **)(lVar7 + 0x18);
        }
        *(undefined4 *)(param_1 + 0x1b4) = *(undefined4 *)(lVar7 + 0x44);
        pcVar9 = "index.html";
        if (pcVar12 != (char *)0x0) {
          pcVar9 = pcVar12;
        }
        *(uint *)(param_1 + 0x1b8) =
             *(uint *)(param_1 + 0x1b8) ^
             (*(int *)(lVar7 + 0x4c) << 0xb ^ *(uint *)(param_1 + 0x1b8)) & 0x800;
        uVar3 = (*(int *)(lVar7 + 0x4c) << 0xb ^ *(uint *)(param_1 + 0x1b8)) & 0x1000 ^
                *(uint *)(param_1 + 0x1b8);
        *(uint *)(param_1 + 0x1b8) = uVar3;
        *(uint *)(param_1 + 0x1b8) = (*(int *)(lVar7 + 0x4c) << 0xb ^ uVar3) & 0x2000 ^ uVar3;
        if ((*(char *)(lVar7 + 0x50) == '\x02') &&
           (iVar5 = FUN_143dd1060(param_1,pcVar9,*(undefined8 *)(lVar7 + 0x10),lVar7), iVar5 == 0))
        goto LAB_143dd09f5;
        if (*(longlong *)(lVar7 + 0x20) == 0) goto LAB_143dd09cc;
        lVar14 = FUN_143dc70b0(*(undefined8 *)(param_1 + 0x80));
        iVar5 = FUN_143dc5c70(param_1,lVar14);
        if (iVar5 != 0) {
          return 1;
        }
        local_1e8 = (char **)(longlong)(int)(iVar4 - (uint)*(byte *)(lVar7 + 0x51));
        iVar4 = (**(code **)(lVar14 + 8))
                          (param_1,0xc,*(undefined8 *)(param_1 + 0x130),
                           pcVar8 + *(byte *)(lVar7 + 0x51));
      }
    }
    if (iVar4 != 0) {
      return 1;
    }
LAB_143dd09f5:
    if ((*(short *)(param_1 + 0x70) != 0x14) && (*(longlong *)(param_1 + 0x48) != 0)) {
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x48);
      *(undefined2 *)(param_1 + 0x70) = 0x16;
      local_1d0 = FUN_143dc6100(param_1 + 0x140,&local_1d8);
      while (local_1d0 != 0) {
        Curl_pp_sendf(4,"%s: consuming %d\n","lws_http_action",local_1d0);
        iVar4 = FUN_143dd53f0(param_1,local_1d8,(longlong)local_1d0);
        if ((iVar4 < 0) || (iVar4 = FUN_143dcc1c0(param_1,&local_1d8,iVar4,1), iVar4 != 0)) {
          return 0xffffffff;
        }
        local_1d0 = FUN_143dc6100(param_1 + 0x140,&local_1d8);
      }
    }
    return 0;
  }
  lVar14 = *(longlong *)(lVar14 + 0xa8);
  local_1d8 = (char *)(lVar14 + 0x10);
  pcVar12 = (char *)(lVar14 + 0x210);
  iVar4 = FUN_143dce760(param_1,3);
  if (iVar4 == 0) goto LAB_143dd0ef9;
  uVar6 = FUN_143dce730(param_1,3);
  iVar4 = sprintf(pcVar12,"https://%s/",uVar6);
LAB_143dd096c:
  local_1e8 = &local_1d8;
  local_1e0 = pcVar12;
  iVar4 = FUN_143dd6990(param_1,0x12d,pcVar12,iVar4);
  if (-1 < iVar4) {
    uVar6 = FUN_143dd1670(param_1);
    return uVar6;
  }
LAB_143dd0ef9:
  thunk_FUN_143dcdf90(param_1,1);
  return 1;
}



// FUNCTION 143dd0f40 FUN_143dd0f40 body=277 status=ok
// SIG undefined FUN_143dd0f40(void)

ulonglong FUN_143dd0f40(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar5 = uVar6;
  uVar7 = uVar6;
  do {
    iVar2 = FUN_143dce760(param_1,(&DAT_145dbe350)[uVar5]);
    if (iVar2 != 0) {
      uVar7 = (ulonglong)((int)uVar7 + 1);
    }
    uVar5 = uVar5 + 1;
  } while ((longlong)uVar5 < 8);
  if ((int)uVar7 == 0) {
    Curl_pp_sendf(2,"Missing URI in HTTP request\n");
  }
  else {
    uVar5 = uVar6;
    if (((int)uVar7 == 1) ||
       (((*(byte *)(param_1 + 0x1b8) & 2) != 0 && (iVar2 = FUN_143dce760(param_1,0x25), iVar2 != 0))
       )) {
      do {
        iVar2 = FUN_143dce760(param_1,(&DAT_145dbe350)[uVar6]);
        iVar8 = (int)uVar5;
        if (iVar2 != 0) {
          uVar4 = FUN_143dce730(param_1,(&DAT_145dbe350)[iVar8]);
          uVar1 = (&DAT_145dbe350)[iVar8];
          *param_2 = uVar4;
          uVar3 = FUN_143dce760(param_1,uVar1);
          *param_3 = uVar3;
          return uVar5;
        }
        uVar6 = uVar6 + 1;
        uVar5 = (ulonglong)(iVar8 + 1);
      } while ((longlong)uVar6 < 8);
    }
    else {
      Curl_pp_sendf(2,"multiple methods?\n");
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd1060 FUN_143dd1060 body=1552 status=ok
// SIG undefined FUN_143dd1060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd1060(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_3f8 [32];
  undefined1 **local_3d8;
  ulonglong *local_3d0;
  uint local_3c8 [2];
  undefined1 *local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined1 *local_3a8;
  int local_39c;
  undefined1 local_390 [6];
  ushort local_38a;
  undefined4 local_36c;
  char local_358 [256];
  char local_258 [48];
  undefined1 local_228 [464];
  ulonglong local_58 [3];
  
  local_58[0] = DAT_1468387a8 ^ (ulonglong)auStack_3f8;
  plVar15 = *(longlong **)(param_4 + 0x38);
  local_3c0 = local_228;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xbfffffff;
  local_3c8[0] = 0;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return 0xffffffff;
  }
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x108);
  if (lVar9 != 0) {
    pcVar7 = param_2;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar9 - (longlong)param_2];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x40000000;
    }
  }
  local_3d8 = (undefined1 **)param_2;
  local_3b0 = param_4;
  FUN_143dc6cb0(local_358,0xff,"%s/%s",param_3);
  iVar3 = FUN_143dce760(param_1,0x15);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    pcVar7 = (char *)FUN_143dce730(param_1,0x15);
    pcVar7 = strstr(pcVar7,"gzip");
    uVar5 = 0;
    if (pcVar7 != (char *)0x0) {
      uVar5 = 0x1000000;
    }
  }
  local_3c8[0] = local_3c8[0] | uVar5;
  iVar3 = 0;
  while( true ) {
    iVar6 = iVar3;
    iVar3 = iVar6 + 1;
    puVar8 = (undefined8 *)
             FUN_143dc6fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),local_358,
                           &local_3b8);
    if (*(longlong *)(param_1 + 0x28) != 0) {
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
    }
    lVar9 = (*(code *)*puVar8)(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),local_358,
                               local_3b8,local_3c8);
    *(longlong *)(param_1 + 0x28) = lVar9;
    if (lVar9 == 0) {
      return 0xffffffff;
    }
    if ((local_3c8[0] & 0x8000000) != 0) break;
    iVar4 = _stat32i64(local_358,local_390);
    if (iVar4 != 0) {
      return 0xffffffff;
    }
    *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x2c) = local_36c;
    local_3c8[0] = local_3c8[0] | 0x4000000;
    if ((local_38a & 0xf000) == 0x4000) {
      local_3d8 = (undefined1 **)param_2;
      FUN_143dc6cb0(local_358,0xff,"%s/%s/index.html",param_3);
    }
    if (((local_38a & 0xf000) == 0x8000) || (4 < iVar3)) break;
  }
  if (iVar3 == 5) {
    Curl_pp_sendf(iVar6 + -3,"symlink loop %s \n",local_358);
  }
  uVar5 = FImgMediaPlayer::GetState(*(undefined8 *)(param_1 + 0x28));
  uVar10 = USignificanceManager::GetWorld(*(undefined8 *)(param_1 + 0x28));
  iVar3 = sprintf(local_258,"%08llX%08lX",uVar10,(ulonglong)uVar5);
  iVar6 = FUN_143dce760(param_1,0x37);
  if (iVar6 != 0) {
    lVar9 = FUN_143dce730(param_1,0x37);
    pcVar7 = local_258;
    lVar9 = lVar9 - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar9];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 != cVar2) {
      *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x33e) = 0;
    }
  }
  iVar6 = FUN_143dce760(param_1,0x14);
  if (iVar6 != 0) {
    lVar9 = FUN_143dce730(param_1,0x14);
    pcVar7 = local_258;
    lVar9 = lVar9 - (longlong)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar9];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      iVar6 = FUN_143dd6740(param_1,0x130,&local_3c0,local_58);
      if (iVar6 != 0) {
        return 0xffffffff;
      }
      local_3d0 = local_58;
      local_3d8 = &local_3c0;
      iVar3 = FUN_143dd6620(param_1,0x32,local_258,iVar3);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_143dd6960(param_1,&local_3c0,local_58);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      iVar3 = FUN_143dcd250(param_1,local_228,(longlong)local_3c0 - (longlong)local_228,0x88);
      if ((longlong)iVar3 != (longlong)local_3c0 - (longlong)local_228) {
        Curl_pp_sendf(1,"_write returned %d from %ld\n",iVar3,(int)local_3c0 - (int)local_228);
        return 0xffffffff;
      }
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
      uVar10 = FUN_143dd1670(param_1);
      return uVar10;
    }
  }
  local_3d0 = local_58;
  local_3d8 = &local_3c0;
  iVar3 = FUN_143dd6620(param_1,0x32,local_258);
  lVar9 = local_3b0;
  if (iVar3 == 0) {
    lVar11 = FUN_143dcff50(local_358,local_3b0);
    if (lVar11 == 0) {
      Curl_pp_sendf(1,"unknown mimetype for %s\n",local_358);
    }
    else {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffff7fff;
      uVar5 = *(uint *)(param_1 + 0x1b8);
      if (plVar15 != (longlong *)0x0) {
        lVar13 = -1;
        do {
          lVar14 = lVar13 + 1;
          lVar12 = lVar13 + 1;
          lVar13 = lVar14;
        } while (local_358[lVar12] != '\0');
        do {
          lVar13 = plVar15[2];
          lVar12 = -1;
          do {
            lVar12 = lVar12 + 1;
          } while (*(char *)(lVar13 + lVar12) != '\0');
          iVar3 = (int)lVar14;
          if ((int)lVar12 < iVar3) {
            lVar12 = -1;
            do {
              lVar12 = lVar12 + 1;
            } while (*(char *)(lVar13 + lVar12) != '\0');
            pcVar7 = local_358 + (iVar3 - lVar12);
            lVar13 = lVar13 - (longlong)pcVar7;
            do {
              cVar1 = *pcVar7;
              cVar2 = pcVar7[lVar13];
              if (cVar1 != cVar2) break;
              pcVar7 = pcVar7 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              *(uint *)(param_1 + 0x1b8) = uVar5 | 0x10000;
              if ((uVar5 & 2) == 0) {
                *(uint *)(param_1 + 0x1b8) = uVar5 | 0x18000;
              }
              *(char *)(param_1 + 0x1c8) = (char)plVar15[3];
              *(longlong *)(param_1 + 0xa0) =
                   (longlong)(int)plVar15[3] * 0x38 +
                   *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
              iVar3 = FUN_143dc6320(param_1);
              if (iVar3 != 0) {
                return 0xffffffff;
              }
              break;
            }
          }
          plVar15 = (longlong *)*plVar15;
        } while (plVar15 != (longlong *)0x0);
      }
      if (*(longlong *)(lVar9 + 0x20) != 0) {
        lVar9 = FUN_143dc70b0(*(undefined8 *)(param_1 + 0x80));
        iVar3 = FUN_143dc5c70(param_1,lVar9);
        if (iVar3 != 0) {
          return 1;
        }
        local_39c = (int)local_58 - (int)local_3c0;
        local_3a8 = local_3c0;
        local_3d8 = (undefined1 **)0x0;
        iVar3 = (**(code **)(lVar9 + 8))(param_1,0x35,*(undefined8 *)(param_1 + 0x130),&local_3a8);
        if (iVar3 != 0) {
          return 0xffffffff;
        }
        local_3c0 = local_3a8;
      }
      local_3d8 = (undefined1 **)CONCAT44(local_3d8._4_4_,(int)local_3c0 - (int)local_228);
      iVar3 = FUN_143dd1960(param_1,local_358,lVar11,local_228);
      if ((-1 < iVar3) && ((iVar3 < 1 || (iVar3 = FUN_143dd1670(param_1), iVar3 == 0)))) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd1670 FUN_143dd1670 body=426 status=ok
// SIG undefined FUN_143dd1670(void)

undefined8 FUN_143dd1670(longlong param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x1ac) != 0) {
    Curl_pp_sendf(4,"%s: deferring due to partial\n","lws_http_transaction_completed");
    *(uint *)(param_1 + 0x58) = *(uint *)(param_1 + 0x58) | 1;
    return 0;
  }
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 1) != 0) {
    if ((uVar1 & 2) != 0) {
      return 0;
    }
    if ((uVar1 >> 0x1a & 1) == 0) {
      if (*(int *)(param_1 + 0x34) == 1) {
        iVar2 = FUN_143dc5c70();
        if (iVar2 == 0) {
          *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
          *(undefined2 *)(param_1 + 0x70) = 0x10f;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x40) = 0;
          FUN_143dc6c40(param_1);
          if (*(longlong *)(param_1 + 8) == 0) {
            lVar3 = FUN_143dc6100(param_1 + 0x140);
            if (lVar3 != 0) {
              FUN_143dce7a0(param_1,0);
            }
          }
          else {
            lVar3 = FUN_143dc6100(param_1 + 0x140);
            if (lVar3 == 0) {
              thunk_FUN_143dcdf90(param_1,1);
              if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x208) != 0) {
                iVar2 = *(int *)(*(longlong *)(param_1 + 0x78) + 0x4c8);
                if ((iVar2 != 0) && (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4cc) == iVar2)) {
                  return 1;
                }
              }
            }
            else {
              thunk_FUN_143dce110(param_1,0);
              FUN_143dc6c40(param_1,0x19,*(undefined4 *)(*(longlong *)(param_1 + 0x80) + 0x240));
            }
            if (*(longlong *)(param_1 + 8) != 0) {
              *(undefined1 *)(*(longlong *)(param_1 + 8) + 0x3b5) = 0;
              FUN_143dcdd70(param_1);
              return 0;
            }
          }
          FUN_143dcdd70(param_1);
          return 0;
        }
      }
      else {
        Curl_pp_sendf(4,"%s: %p: close connection\n","lws_http_transaction_completed",param_1);
      }
    }
    return 1;
  }
  Curl_pp_sendf(4,"%s: ignoring, ah parsing incomplete\n","lws_http_transaction_completed");
  return 0;
}



// FUNCTION 143dd1820 FUN_143dd1820 body=310 status=ok
// SIG undefined FUN_143dd1820(void)

longlong FUN_143dd1820(longlong param_1,int param_2,char *param_3)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  uVar6 = 0xffffffffffffffff;
  do {
    uVar6 = uVar6 + 1;
  } while (param_3[uVar6] != '\0');
  pcVar3 = strchr(param_3,0x3a);
  if (pcVar3 != (char *)0x0) {
    uVar6 = (ulonglong)(uint)((int)pcVar3 - (int)param_3);
  }
  iVar5 = (int)uVar6;
  while( true ) {
    if (lVar1 == 0) {
      lVar1 = *(longlong *)(param_1 + 0x378);
      while( true ) {
        if (lVar1 == 0) {
          lVar1 = *(longlong *)(param_1 + 0x378);
          while( true ) {
            if (lVar1 == 0) {
              return 0;
            }
            if (param_2 == *(int *)(lVar1 + 0x228)) break;
            lVar1 = *(longlong *)(lVar1 + 0x150);
          }
          return lVar1;
        }
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while ((*(char **)(lVar1 + 0x160))[lVar4] != '\0');
        if ((((param_2 == *(int *)(lVar1 + 0x228)) && (iVar2 = (int)lVar4, iVar2 <= iVar5 + -2)) &&
            (param_3[(iVar5 - iVar2) + -1] == '.')) &&
           (iVar2 = strncmp(*(char **)(lVar1 + 0x160),param_3 + ((longlong)iVar5 - (longlong)iVar2),
                            (longlong)iVar2), iVar2 == 0)) break;
        lVar1 = *(longlong *)(lVar1 + 0x150);
      }
      return lVar1;
    }
    if ((param_2 == *(int *)(lVar1 + 0x228)) &&
       (iVar2 = strncmp(*(char **)(lVar1 + 0x160),param_3,(longlong)iVar5), iVar2 == 0)) break;
    lVar1 = *(longlong *)(lVar1 + 0x150);
  }
  return lVar1;
}



// FUNCTION 143dd1960 FUN_143dd1960 body=998 status=ok
// SIG undefined FUN_143dd1960(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_143dd1960(longlong param_1,undefined8 param_2,char *param_3,void *param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  uint uVar6;
  void *pvVar7;
  size_t _Size;
  longlong lVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 auStack_e8 [32];
  void **local_c8;
  longlong local_c0;
  void *local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  undefined8 local_a0;
  void *local_98;
  char local_90 [56];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_a8 = param_5;
  local_98 = param_4;
  lVar2 = FUN_1407891a0();
  pcVar10 = "no-store";
  local_ac = 8;
  lVar8 = *(longlong *)(((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + lVar2);
  pvVar7 = (void *)(lVar8 + 0x10);
  local_b0 = 0;
  lVar8 = lVar8 + (ulonglong)*(uint *)(lVar2 + 0x4bc);
  uVar9 = 0x194;
  if ((*(uint *)(param_1 + 0x1b8) & 0x40000000) == 0) {
    uVar9 = 200;
  }
  local_b8 = pvVar7;
  if (*(longlong *)(param_1 + 0x28) == 0) {
    puVar3 = (undefined8 *)
             FUN_143dc6fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),param_2,&local_a0);
    iVar1 = FUN_143dce760(param_1,0x15);
    if (iVar1 == 0) {
      uVar6 = 0;
    }
    else {
      pcVar4 = (char *)FUN_143dce730(param_1,0x15);
      pcVar4 = strstr(pcVar4,"gzip");
      uVar6 = 0;
      if (pcVar4 != (char *)0x0) {
        uVar6 = 0x1000000;
      }
    }
    local_b0 = local_b0 | uVar6;
    lVar2 = (*(code *)*puVar3)(*(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x28),param_2,
                               local_a0,&local_b0);
    *(longlong *)(param_1 + 0x28) = lVar2;
    param_4 = local_98;
    if (lVar2 == 0) {
      iVar1 = FUN_143dd6ab0(param_1,0x194,0);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      return ~(*(uint *)(param_1 + 0x1b8) >> 1) & 1;
    }
  }
  uVar5 = USignificanceManager::GetWorld(*(undefined8 *)(param_1 + 0x28));
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  iVar1 = FUN_143dd6740(param_1,uVar9,&local_b8);
  if (iVar1 == 0) {
    if ((*(uint *)(*(longlong *)(param_1 + 0x28) + 0x28) & 0x3000000) == 0x3000000) {
      local_c8 = &local_b8;
      local_c0 = lVar8;
      iVar1 = FUN_143dd6620(param_1,0x2e,&DAT_145b6ba18);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((param_3 != (char *)0x0) && (*param_3 != '\0')) {
      lVar2 = -1;
      do {
        lVar2 = lVar2 + 1;
      } while (param_3[lVar2] != '\0');
      local_c8 = &local_b8;
      local_c0 = lVar8;
      iVar1 = FUN_143dd6620(param_1,0x1c,param_3);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    if ((*(uint *)(param_1 + 0x1b8) & 2) == 0) {
      if ((*(uint *)(param_1 + 0x1b8) >> 0xf & 1) == 0) {
        iVar1 = FUN_143dd6650(param_1,uVar5,&local_b8,lVar8);
      }
      else {
        local_c8 = &local_b8;
        local_c0 = lVar8;
        iVar1 = FUN_143dd6620(param_1,0x44,"chunked");
      }
      if (iVar1 != 0) {
        return 0xffffffff;
      }
    }
    iVar1 = local_ac;
    if ((*(int *)(param_1 + 0x1b4) != 0) &&
       (uVar6 = *(uint *)(param_1 + 0x1b8), (uVar6 >> 0xb & 1) != 0)) {
      if ((uVar6 >> 0xc & 1) == 0) {
        pcVar10 = "no-cache";
        iVar1 = 8;
      }
      else {
        pcVar10 = local_90;
        iVar1 = sprintf(local_90,"%s max-age: %u",(&PTR_s_private_145dbe368)[uVar6 >> 0xd & 1]);
      }
    }
    local_c8 = &local_b8;
    local_c0 = lVar8;
    iVar1 = FUN_143dd6620(param_1,0x18,pcVar10,iVar1);
    if (iVar1 == 0) {
      if (*(int *)(param_1 + 0x34) == 1) {
        local_c8 = &local_b8;
        local_c0 = lVar8;
        iVar1 = FUN_143dd6620(param_1,4,"keep-alive");
        if (iVar1 != 0) {
          return 0xffffffff;
        }
      }
      if (param_4 != (void *)0x0) {
        _Size = (size_t)local_a8;
        if (lVar8 - (longlong)local_b8 < (longlong)_Size) {
          return 0xffffffff;
        }
        _guard_xfg_dispatch_icall_nop(local_b8,param_4,_Size);
        local_b8 = (void *)((longlong)local_b8 + _Size);
      }
      iVar1 = FUN_143dd6960(param_1,&local_b8,lVar8);
      if (iVar1 == 0) {
        iVar1 = FUN_143dcd250(param_1,pvVar7,(longlong)local_b8 - (longlong)pvVar7,8);
        if ((longlong)iVar1 == (longlong)local_b8 - (longlong)pvVar7) {
          *(undefined8 *)(param_1 + 0x18) = 0;
          *(undefined2 *)(param_1 + 0x70) = 0x14;
          FUN_143dcdd70(param_1);
          return 0;
        }
        Curl_pp_sendf(1,"_write returned %d from %ld\n",iVar1,(int)local_b8 - (int)pvVar7);
        return 0xffffffff;
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd1d50 FUN_143dd1d50 body=739 status=ok
// SIG undefined FUN_143dd1d50(void)

undefined8 FUN_143dd1d50(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong lVar10;
  int local_res8;
  undefined4 uStackX_c;
  longlong local_38;
  int local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  
  lVar6 = *(longlong *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x1ac) == 0) {
    if (*(longlong *)(param_1 + 0x18) != *(longlong *)(param_1 + 0x20)) {
      lVar1 = *(longlong *)((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xa8 + lVar6);
      lVar7 = lVar1 + 9;
      uVar8 = (ulonglong)(*(int *)(lVar6 + 0x4bc) - 9);
      if ((*(longlong *)(param_1 + 0x38) != 0) && (*(ulonglong *)(param_1 + 0x40) < uVar8)) {
        uVar8 = *(ulonglong *)(param_1 + 0x40);
      }
      uVar5 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x30);
      if ((uVar5 != 0) && (uVar5 < uVar8)) {
        uVar8 = uVar5;
      }
      pcVar2 = *(code **)(*(longlong *)(param_1 + 0x68) + 0x60);
      if (pcVar2 != (code *)0x0) {
        uVar5 = (*pcVar2)(param_1);
        if (uVar5 == 0) {
          return 0;
        }
        if (uVar5 < uVar8) {
          uVar8 = uVar5;
        }
      }
      lVar10 = lVar7;
      if ((*(uint *)(param_1 + 0x1b8) & 0x8000) != 0) {
        lVar10 = lVar1 + 0x13;
        uVar8 = uVar8 - 0x8a;
      }
      iVar3 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x18))
                        (*(longlong *)(param_1 + 0x28),&local_res8,lVar10,uVar8);
      if (iVar3 < 0) {
LAB_143dd1f8c:
        (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))(param_1 + 0x28);
        return 0xffffffff;
      }
      iVar3 = local_res8;
      if ((*(uint *)(param_1 + 0x1b8) & 0x8000) == 0) {
        iVar3 = ((int)lVar10 - (int)lVar7) + local_res8;
      }
      if (iVar3 != 0) {
        FUN_143dc6c40(param_1,10,*(undefined4 *)(lVar6 + 0x4b8));
        if ((*(uint *)(param_1 + 0x1b8) >> 0x10 & 1) != 0) {
          local_2c = (int)uVar8 + 0x80;
          local_24 = *(uint *)(param_1 + 0x1b8) >> 0xf & 1;
          local_28 = (uint)((longlong)iVar3 + *(longlong *)(param_1 + 0x18) ==
                           *(longlong *)(param_1 + 0x20));
          local_38 = lVar10;
          local_30 = iVar3;
          iVar4 = FUN_143dc7570(*(undefined8 *)
                                 ((longlong)*(char *)(param_1 + 0x1c8) * 0x38 + 8 +
                                 *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170)),param_1,0x34,
                                *(undefined8 *)(param_1 + 0x130),&local_38,0);
          lVar7 = local_38;
          iVar3 = local_30;
          if (iVar4 < 0) goto LAB_143dd1f8c;
        }
        uVar9 = 3;
        if (CONCAT44(uStackX_c,local_res8) + *(longlong *)(param_1 + 0x18) ==
            *(longlong *)(param_1 + 0x20)) {
          uVar9 = 7;
        }
        iVar4 = FUN_143dcd250(param_1,lVar7,(longlong)iVar3,uVar9);
        if ((iVar4 < 0) ||
           ((*(longlong *)(param_1 + 0x18) =
                  *(longlong *)(param_1 + 0x18) + CONCAT44(uStackX_c,local_res8), iVar4 != iVar3 &&
            (lVar6 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 0x10))
                               (*(longlong *)(param_1 + 0x28),(longlong)(iVar4 - iVar3)),
            lVar6 == -1)))) goto LAB_143dd1f8c;
      }
    }
    if ((*(int *)(param_1 + 0x1ac) == 0) &&
       (*(ulonglong *)(param_1 + 0x20) <= *(ulonglong *)(param_1 + 0x18))) {
      *(undefined2 *)(param_1 + 0x70) = 0x117;
      (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 8) + 8))();
      lVar6 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
      if ((lVar6 != 0) &&
         (iVar3 = FUN_143dc7570(lVar6,param_1,0xf,*(undefined8 *)(param_1 + 0x130),0,0), iVar3 < 0))
      {
        if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
          return 1;
        }
        return 0xffffffff;
      }
      return 1;
    }
  }
  else {
    iVar3 = FUN_143dccd70(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                  *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
    if (iVar3 < 0) goto LAB_143dd1f8c;
  }
  FUN_143dcdd70(param_1);
  return 0;
}



// FUNCTION 143dd2040 FUN_143dd2040 body=26 status=ok
// SIG undefined FUN_143dd2040(void)

void FUN_143dd2040(longlong param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 100) & 4) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dd2052. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    Ordinal_57(param_1 + 0x408,0x7f);
    return;
  }
  return;
}



// FUNCTION 143dd2060 FUN_143dd2060 body=267 status=ok
// SIG undefined FUN_143dd2060(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd2060(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_98 [32];
  longlong *local_78;
  longlong local_70;
  longlong local_68 [2];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)
           (((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + *(longlong *)(param_1 + 0x78));
  lVar5 = lVar1 + 0x10;
  lVar1 = lVar1 + 0x210;
  local_68[0] = lVar5;
  iVar2 = FUN_143dd6740(param_1,0x191,local_68,lVar1);
  if (iVar2 == 0) {
    uVar3 = FUN_143dc6cb0(local_58,0x40,"Basic realm=\"lwsws\"");
    local_78 = local_68;
    local_70 = lVar1;
    iVar2 = FUN_143dd6620(param_1,0x48,local_58,uVar3);
    if (((iVar2 == 0) && (iVar2 = FUN_143dd6960(param_1,local_68,lVar1), iVar2 == 0)) &&
       (iVar2 = FUN_143dcd250(param_1,lVar5,local_68[0] - lVar5,0x88), -1 < iVar2)) {
      uVar4 = FUN_143dd1670(param_1);
      return uVar4;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd2170 FUN_143dd2170 body=54 status=ok
// SIG undefined FUN_143dd2170(void)

undefined8 FUN_143dd2170(undefined8 *param_1)

{
  HANDLE hObject;
  
  hObject = *(HANDLE *)*param_1;
  free((undefined8 *)*param_1);
  *param_1 = 0;
  CloseHandle(hObject);
  return 0;
}



// FUNCTION 143dd21b0 FUN_143dd21b0 body=304 status=ok
// SIG undefined FUN_143dd21b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_143dd21b0(undefined8 param_1,LPCSTR param_2,undefined8 param_3,byte *param_4)

{
  DWORD DVar1;
  BOOL BVar2;
  undefined1 *hFile;
  undefined8 *puVar3;
  bool bVar4;
  undefined1 auStackY_288 [32];
  DWORD dwCreationDisposition;
  LARGE_INTEGER local_248 [2];
  WCHAR local_238 [264];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_288;
  local_248[0].QuadPart = 0;
  MultiByteToWideChar(0xfde9,0,param_2,-1,local_238,0x104);
  bVar4 = (*param_4 & 7) != 0;
  if (bVar4) {
    dwCreationDisposition = 2;
    DVar1 = 0x40000000;
  }
  else {
    dwCreationDisposition = 3;
    DVar1 = 0x80000000;
  }
  hFile = CreateFileW(local_238,DVar1,(uint)!bVar4,(LPSECURITY_ATTRIBUTES)0x0,dwCreationDisposition,
                      0x80,(HANDLE)0x0);
  if ((hFile != &DAT_ffffffffffffffff) && (puVar3 = malloc(0x30), puVar3 != (undefined8 *)0x0)) {
    *(undefined4 *)(puVar3 + 5) = *(undefined4 *)param_4;
    puVar3[1] = param_1;
    *puVar3 = hFile;
    puVar3[2] = 0;
    DVar1 = GetFileSize(hFile,(LPDWORD)0x0);
    puVar3[4] = (ulonglong)DVar1;
    BVar2 = GetFileSizeEx(hFile,local_248);
    if (BVar2 != 0) {
      *(LARGE_INTEGER *)(puVar3 + 4) = local_248[0];
    }
    puVar3[3] = 0;
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 143dd22e0 FUN_143dd22e0 body=102 status=ok
// SIG undefined FUN_143dd22e0(void)

undefined8 FUN_143dd22e0(undefined8 *param_1,ulonglong *param_2,LPVOID param_3,DWORD param_4)

{
  BOOL BVar1;
  uint local_res8 [2];
  
  BVar1 = ReadFile((HANDLE)*param_1,param_3,param_4,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  param_1[3] = param_1[3] + (ulonglong)local_res8[0];
  *param_2 = (ulonglong)local_res8[0];
  return 0;
}



// FUNCTION 143dd2350 FUN_143dd2350 body=29 status=ok
// SIG undefined FUN_143dd2350(void)

longlong FUN_143dd2350(undefined8 *param_1,LARGE_INTEGER param_2)

{
  BOOL BVar1;
  
  BVar1 = SetFilePointerEx((HANDLE)*param_1,param_2,(PLARGE_INTEGER)0x0,1);
  return (longlong)BVar1;
}



// FUNCTION 143dd2370 FUN_143dd2370 body=102 status=ok
// SIG undefined FUN_143dd2370(void)

undefined8 FUN_143dd2370(undefined8 *param_1,ulonglong *param_2,LPCVOID param_3,DWORD param_4)

{
  BOOL BVar1;
  uint local_res8 [2];
  
  BVar1 = WriteFile((HANDLE)*param_1,param_3,param_4,local_res8,(LPOVERLAPPED)0x0);
  if (BVar1 == 0) {
    *param_2 = 0;
    return 1;
  }
  param_1[3] = param_1[3] + (ulonglong)local_res8[0];
  *param_2 = (ulonglong)local_res8[0];
  return 0;
}



// FUNCTION 143dd23e0 FUN_143dd23e0 body=1057 status=ok
// SIG undefined FUN_143dd23e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd23e0(longlong param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  undefined1 auStack_278 [32];
  ulonglong local_258;
  longlong local_248;
  uint local_240;
  undefined8 *local_238;
  undefined1 local_228 [120];
  longlong local_1b0;
  uint local_58 [5];
  int local_44;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_278;
  uVar10 = (ulonglong)(int)param_3;
  local_238 = (undefined8 *)(ulonglong)param_2;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x378) == 0)) {
    return 1;
  }
  uVar7 = 0;
  plVar9 = (longlong *)(param_1 + 0xa0 + uVar10 * 0xa8);
  local_248 = param_1;
  local_240 = param_3;
  if (*(int *)(param_1 + 0x4d8) == 0) {
    _guard_xfg_dispatch_icall_nop(local_228,0,0x1d0);
    local_258 = 0;
    local_1b0 = param_1;
    uVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x378) + 0x170) + 8))
                      (local_228,0x1f,0,0);
    uVar10 = (ulonglong)local_240;
    *(undefined4 *)(param_1 + 0x4d8) = uVar2;
    *(undefined4 *)(param_1 + 0x4d4) = uVar2;
    *(undefined4 *)(param_1 + 0x4d8) = 1;
  }
  iVar3 = 0;
  if ((int)param_2 < 0) {
    iVar3 = FUN_143dcc860(param_1,uVar10 & 0xffffffff);
    lVar6 = local_248;
    if (iVar3 == 0) {
      return 0;
    }
    uVar10 = uVar7;
    if (*(int *)((longlong)plVar9 + 0x9c) < 1) {
      return 0;
    }
    do {
      iVar3 = (int)uVar10;
      if (*(short *)(uVar7 + 10 + plVar9[9]) != 0) {
        iVar4 = FUN_143dcc6f0(lVar6,(longlong)iVar3 * 0x10 + plVar9[9],local_240);
        if (iVar4 < 0) {
          return 0xffffffff;
        }
        if (iVar4 != 0) {
          iVar3 = iVar3 + -1;
          uVar7 = uVar7 - 0x10;
        }
      }
      uVar7 = uVar7 + 0x10;
      uVar10 = (ulonglong)(iVar3 + 1U);
    } while ((int)(iVar3 + 1U) < *(int *)((longlong)plVar9 + 0x9c));
    return 0;
  }
  pcVar1 = *(code **)(*(longlong *)(param_1 + 0x3d0) + 0x58);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,uVar10 & 0xffffffff);
  }
  uVar10 = uVar7;
  if (*(int *)((longlong)plVar9 + 0x9c) != 0) {
    do {
      iVar4 = (int)uVar10;
      puVar8 = (undefined8 *)(uVar10 * 0x10 + plVar9[9]);
      param_1 = local_248;
      if (((((*(byte *)(puVar8 + 1) & 2) != 0) &&
           (lVar6 = FUN_143dd33b0(local_248,*puVar8), param_1 = local_248, lVar6 != 0)) &&
          ((*(byte *)(lVar6 + 0x1b8) & 0x20) == 0)) && ((*(uint *)(lVar6 + 0x1bc) & 0x1000) == 0)) {
        *(undefined2 *)((longlong)puVar8 + 10) = 2;
        iVar5 = FUN_143dcc6e0(local_248,puVar8);
        if (iVar5 < 0) {
          return 0xffffffff;
        }
        local_238 = (undefined8 *)((ulonglong)local_238 & 0xffffffff00000000);
        if (iVar5 != 0) {
          iVar4 = iVar4 + -1;
        }
      }
      uVar10 = (ulonglong)(iVar4 + 1U);
    } while (iVar4 + 1U < *(uint *)((longlong)plVar9 + 0x9c));
  }
  iVar4 = FUN_143dcc660(param_1,1,local_240);
  if (iVar4 == 0) {
    FUN_143dd23e0(param_1,0xffffffff,*(undefined1 *)((longlong)plVar9 + 0xa2));
    iVar4 = FUN_143dcc660(param_1,1,*(undefined1 *)((longlong)plVar9 + 0xa2));
    if (iVar4 == 0) goto LAB_143dd2648;
  }
  iVar3 = (int)local_238;
  if ((iVar3 != 0) &&
     (lVar6 = FUN_143dc5810(plVar9),
     (longlong)iVar3 * 1000 - lVar6 != 0 && lVar6 <= (longlong)iVar3 * 1000)) {
    iVar3 = (int)(lVar6 / 1000);
  }
LAB_143dd2648:
  local_258 = local_258 & 0xffffffff00000000;
  iVar3 = WSAWaitForMultipleEvents(1,plVar9[0xb],0,iVar3);
  local_248 = CONCAT44(local_248._4_4_,iVar3);
  if (iVar3 == 0) {
    WSAResetEvent(*(undefined8 *)plVar9[0xb]);
    if ((*(undefined8 **)(*plVar9 + 0x98) != (undefined8 *)0x0) &&
       (pcVar1 = (code *)**(undefined8 **)(*plVar9 + 0x98), pcVar1 != (code *)0x0)) {
      (*pcVar1)(plVar9);
    }
    if (*(int *)((longlong)plVar9 + 0x9c) != 0) {
      do {
        iVar4 = (int)uVar7;
        local_238 = (undefined8 *)(uVar7 * 0x10);
        iVar3 = WSAEnumNetworkEvents(*(undefined8 *)((longlong)local_238 + plVar9[9]),0,local_58);
        if (iVar3 == -1) {
          uVar2 = Ordinal_111();
          Curl_pp_sendf(1,"WSAEnumNetworkEvents() failed with error %d\n",uVar2);
          return 0xffffffff;
        }
        local_238 = (undefined8 *)((longlong)local_238 + plVar9[9]);
        *(ushort *)((longlong)local_238 + 10) = (ushort)local_58[0];
        if (((((local_58[0] & 0x10) != 0) && (local_44 != 0)) && (2 < local_44 - 0x2733U)) &&
           (local_44 != 0x2726)) {
          *(ushort *)((longlong)local_238 + 10) = (ushort)local_58[0] | 0x20;
        }
        if (((*(byte *)((longlong)local_238 + 10) & 2) != 0) &&
           (lVar6 = FUN_143dd33b0(param_1), lVar6 != 0)) {
          *(uint *)(lVar6 + 0x1bc) = *(uint *)(lVar6 + 0x1bc) & 0xffffefff;
        }
        if ((*(ushort *)((longlong)local_238 + 10) & 0x20) != 0) {
          iVar4 = iVar4 + -1;
        }
        if (*(ushort *)((longlong)local_238 + 10) != 0) {
          Ordinal_16(*local_238,0,0,0);
          FUN_143dcc6f0(param_1,local_238,local_240);
        }
        uVar7 = (ulonglong)(iVar4 + 1U);
      } while (iVar4 + 1U < *(uint *)((longlong)plVar9 + 0x9c));
    }
    iVar3 = (int)local_248;
  }
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  if (iVar3 == 0x102) {
    FUN_143dcc6e0(param_1,0);
  }
  return 0;
}



// FUNCTION 143dd2810 FUN_143dd2810 body=198 status=ok
// SIG undefined FUN_143dd2810(void)

undefined8 FUN_143dd2810(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  int *piVar7;
  
  iVar3 = 0;
  uVar4 = (ulonglong)
          (((uint)((ulonglong)param_2 >> 0x10) ^ (uint)((ulonglong)param_2 >> 8) ^ (uint)param_2) &
          0x1f);
  piVar7 = (int *)((uVar4 + 0x18) * 0x10 + param_1);
  iVar1 = *piVar7;
  if (0 < iVar1) {
    lVar6 = 0;
    param_1 = param_1 + uVar4 * 0x10;
    plVar5 = *(longlong **)(param_1 + 0x178);
    do {
      if (*(longlong *)(*plVar5 + 0x178) == param_2) {
        if (iVar3 < iVar1) {
          lVar6 = lVar6 * 8;
          do {
            lVar2 = *(longlong *)(param_1 + 0x178);
            lVar6 = lVar6 + 8;
            iVar3 = iVar3 + 1;
            *(undefined8 *)(lVar2 + -8 + lVar6) = *(undefined8 *)(lVar2 + lVar6);
          } while (iVar3 < *piVar7);
        }
        *piVar7 = *piVar7 + -1;
        return 0;
      }
      iVar3 = iVar3 + 1;
      lVar6 = lVar6 + 1;
      plVar5 = plVar5 + 1;
    } while (iVar3 < iVar1);
  }
  Curl_pp_sendf(1,"Failed to find fd %d requested for delete in hashtable\n",param_2);
  return 1;
}



// FUNCTION 143dd28e0 FUN_143dd28e0 body=123 status=ok
// SIG undefined FUN_143dd28e0(void)

undefined8 FUN_143dd28e0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)
          (((uint)((ulonglong)*(undefined8 *)(param_2 + 0x178) >> 0x10) ^
            (uint)((ulonglong)*(undefined8 *)(param_2 + 0x178) >> 8) ^ *(uint *)(param_2 + 0x178)) &
          0x1f);
  iVar2 = *(int *)(param_1 + (uVar3 + 0x18) * 0x10);
  if (iVar2 == 29999) {
    Curl_pp_sendf(1,"hash table overflow\n");
    return 1;
  }
  *(longlong *)(*(longlong *)(param_1 + 0x178 + uVar3 * 0x10) + (longlong)iVar2 * 8) = param_2;
  piVar1 = (int *)(param_1 + (uVar3 + 0x18) * 0x10);
  *piVar1 = *piVar1 + 1;
  return 0;
}



// FUNCTION 143dd2960 FUN_143dd2960 body=85 status=ok
// SIG undefined FUN_143dd2960(void)

int FUN_143dd2960(undefined8 param_1,longlong param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (0 < param_3) {
    do {
      iVar1 = rand();
      *(char *)(lVar2 + param_2) = (char)iVar1;
      lVar2 = lVar2 + 1;
    } while (lVar2 < param_3);
    return param_3;
  }
  return 0;
}



// FUNCTION 143dd29c0 FUN_143dd29c0 body=146 status=ok
// SIG undefined FUN_143dd29c0(void)

undefined8 FUN_143dd29c0(int param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    iVar1 = FUN_143dd2e20(0x17,param_2,param_3 + 8);
    if (iVar1 == 1) {
      return 0;
    }
  }
  iVar1 = Ordinal_11(param_2);
  if (iVar1 == -1) {
    lVar2 = Ordinal_52(param_2);
    if ((lVar2 == 0) || (iVar1 = *(int *)**(undefined8 **)(lVar2 + 0x18), iVar1 == -1)) {
      return 0xffffffff;
    }
  }
  *(int *)(param_3 + 4) = iVar1;
  return 0;
}



// FUNCTION 143dd2a60 FUN_143dd2a60 body=128 status=ok
// SIG undefined FUN_143dd2a60(void)

undefined8 FUN_143dd2a60(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = 0x30;
  if ((*(ushort *)(param_3 + 8) & 9) != 0) {
    uVar3 = 0x39;
  }
  if ((*(ushort *)(param_3 + 8) & 2) != 0) {
    uVar3 = uVar3 | 2;
  }
  iVar1 = WSAEventSelect(*(undefined8 *)(param_2 + 0x178),
                         **(undefined8 **)
                           ((longlong)*(char *)(param_2 + 0x1c7) * 0xa8 + param_1 + 0xf8),uVar3);
  if (iVar1 != -1) {
    return 0;
  }
  uVar2 = Ordinal_111();
  Curl_pp_sendf(1,"WSAEventSelect() failed with error %d\n",uVar2);
  return 1;
}



// FUNCTION 143dd2ae0 FUN_143dd2ae0 body=100 status=ok
// SIG undefined FUN_143dd2ae0(void)

undefined8 FUN_143dd2ae0(longlong param_1)

{
  int iVar1;
  undefined4 local_res8 [2];
  int local_res10 [6];
  
  local_res8[0] = 4;
  iVar1 = Ordinal_7(*(undefined8 *)(param_1 + 0x178),0xffff,0x1007,local_res10,local_res8);
  if ((((iVar1 != -1) && (local_res10[0] != 0)) && (2 < local_res10[0] - 0x2733U)) &&
     (local_res10[0] != 0x2726)) {
    return 1;
  }
  return 0;
}



// FUNCTION 143dd2b50 FUN_143dd2b50 body=90 status=ok
// SIG undefined FUN_143dd2b50(void)

void FUN_143dd2b50(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = (int)*(short *)(param_1 + 0x4dc);
  if (*(short *)(param_1 + 0x4dc) != 0) {
    plVar1 = (longlong *)(param_1 + 0xf8);
    do {
      iVar2 = iVar2 + -1;
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        WSACloseEvent(*(undefined8 *)*plVar1);
        thunk_FUN_143dd4bc0(*plVar1,0,"lws_free");
      }
      plVar1 = plVar1 + 0x15;
    } while (iVar2 != 0);
  }
  return;
}



// FUNCTION 143dd2bb0 FUN_143dd2bb0 body=118 status=ok
// SIG undefined FUN_143dd2bb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143dd2bb0(void)

{
  ulonglong uVar1;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  uVar1 = Ordinal_115(0x202,local_1b8);
  if ((int)uVar1 == 0) {
    return uVar1;
  }
  Curl_pp_sendf(1,"WSAStartup failed with error: %d\n",uVar1 & 0xffffffff);
  return 1;
}



// FUNCTION 143dd2c30 FUN_143dd2c30 body=71 status=ok
// SIG undefined FUN_143dd2c30(void)

void FUN_143dd2c30(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)(param_1 + 0x178);
  lVar2 = 0x20;
  do {
    if (*plVar1 != 0) {
      thunk_FUN_143dd4bc0(*plVar1,0,"lws_free");
    }
    plVar1 = plVar1 + 2;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
                    /* WARNING: Could not recover jumptable at 0x000143dd2c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_116();
  return;
}



// FUNCTION 143dd2c80 FUN_143dd2c80 body=55 status=ok
// SIG undefined FUN_143dd2c80(void)

void FUN_143dd2c80(longlong param_1,longlong param_2,int param_3)

{
  param_1 = (longlong)*(char *)(param_2 + 0x1c7) * 0xa8 + param_1;
  *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (longlong)(param_3 + 1) * 8) =
       *(undefined8 *)(*(longlong *)(param_1 + 0xf8) + (ulonglong)*(uint *)(param_1 + 0x13c) * 8);
  *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + -1;
  return;
}



// FUNCTION 143dd2cc0 FUN_143dd2cc0 body=352 status=ok
// SIG undefined FUN_143dd2cc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

LPSTR FUN_143dd2cc0(int param_1,undefined8 *param_2,LPSTR param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  LPSTR pCVar3;
  undefined4 uVar4;
  undefined1 auStackY_a8 [32];
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStackY_a8;
  bVar1 = false;
  lpWideCharStr = (LPCWSTR)thunk_FUN_143dd4bc0(0,param_4 * 2,"inet_ntop");
  if (lpWideCharStr == (LPCWSTR)0x0) {
    Curl_pp_sendf(1,"Out of memory\n");
    return (LPSTR)0x0;
  }
  if (param_1 == 2) {
    uVar4 = 0x10;
    local_58 = 0;
    local_60 = CONCAT44(*(undefined4 *)param_2,2);
LAB_143dd2d75:
    iVar2 = WSAAddressToStringW(&local_60,uVar4,0,lpWideCharStr);
    if (iVar2 == 0) {
      iVar2 = WideCharToMultiByte(0,0,lpWideCharStr,param_4,param_3,param_4,(LPCSTR)0x0,(LPBOOL)0x0)
      ;
      bVar1 = 0 < iVar2;
      goto LAB_143dd2dea;
    }
  }
  else {
    if (param_1 == 0x17) {
      local_58 = *param_2;
      uStack_50 = *(undefined4 *)(param_2 + 1);
      uStack_4c = *(undefined4 *)((longlong)param_2 + 0xc);
      uVar4 = 0x1c;
      local_48 = 0;
      local_60 = 0x17;
      goto LAB_143dd2d75;
    }
    Curl_pp_sendf(1,"Unsupported type\n");
  }
  uVar4 = Ordinal_111();
  Curl_pp_sendf(1,"WSAAddressToString() : %d\n",uVar4);
LAB_143dd2dea:
  thunk_FUN_143dd4bc0(lpWideCharStr,0,"lws_free");
  pCVar3 = (LPSTR)0x0;
  if (bVar1) {
    pCVar3 = param_3;
  }
  return pCVar3;
}



// FUNCTION 143dd2e20 FUN_143dd2e20 body=448 status=ok
// SIG undefined FUN_143dd2e20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143dd2e20(int param_1,LPCSTR param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  LPWSTR lpWideCharStr;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStackY_88 [32];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (param_2[lVar3] != '\0');
  iVar2 = (int)lVar3 + 1;
  iVar4 = 0;
  lpWideCharStr = (LPWSTR)thunk_FUN_143dd4bc0(0,iVar2 * 2,"inet_pton");
  if (lpWideCharStr == (LPWSTR)0x0) {
    Curl_pp_sendf(1,"Out of memory\n");
    return -1;
  }
  iVar2 = MultiByteToWideChar(0,0,param_2,iVar2,lpWideCharStr,iVar2);
  if (iVar2 < 1) {
    Curl_pp_sendf(1,"Failed to convert multi byte to wide char\n");
    thunk_FUN_143dd4bc0(lpWideCharStr,0,"lws_free");
    return -1;
  }
  if (param_1 == 2) {
    local_48 = 0;
    local_50 = 2;
    iVar2 = WSAStringToAddressW(lpWideCharStr,2,0,&local_50);
    if (iVar2 == 0) {
      iVar4 = 1;
      *param_3 = local_50._4_4_;
      goto LAB_143dd2fa7;
    }
  }
  else if (param_1 == 0x17) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_50 = 0x17;
    iVar2 = WSAStringToAddressW(lpWideCharStr,0x17,0,&local_50);
    if (iVar2 == 0) {
      iVar4 = 1;
      *param_3 = (undefined4)local_48;
      param_3[1] = local_48._4_4_;
      param_3[2] = (undefined4)uStack_40;
      param_3[3] = uStack_40._4_4_;
      goto LAB_143dd2fa7;
    }
  }
  else {
    Curl_pp_sendf(1,"Unsupported type\n");
  }
  uVar1 = Ordinal_111();
  Curl_pp_sendf(1,"WSAAddressToString() : %d\n",uVar1);
LAB_143dd2fa7:
  thunk_FUN_143dd4bc0(lpWideCharStr,0,"lws_free");
  return iVar4 * 2 + -1;
}



// FUNCTION 143dd2fe0 FUN_143dd2fe0 body=250 status=ok
// SIG undefined FUN_143dd2fe0(void)

undefined8 FUN_143dd2fe0(longlong param_1)

{
  short sVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  
  sVar1 = *(short *)(param_1 + 0x4dc);
  iVar7 = (int)sVar1;
  plVar6 = (longlong *)(param_1 + 0x178);
  lVar5 = 0;
  do {
    lVar3 = FUN_143dd4c00((longlong)*(int *)(param_1 + 0x490) << 3,"win hashtable");
    *plVar6 = lVar3;
    if (lVar3 == 0) {
      return 0xffffffff;
    }
    lVar5 = lVar5 + 1;
    plVar6 = plVar6 + 2;
  } while (lVar5 < 0x20);
  if (sVar1 != 0) {
    plVar6 = (longlong *)(param_1 + 0xf8);
    do {
      iVar7 = iVar7 + -1;
      lVar5 = thunk_FUN_143dd4bc0(0,(ulonglong)(*(int *)(param_1 + 0x4b4) + 1) << 3,"event table");
      *plVar6 = lVar5;
      if (lVar5 == 0) {
        Curl_pp_sendf(1,"Unable to allocate events array for %d connections\n",
                      *(int *)(param_1 + 0x4b4) + 1);
        return 1;
      }
      *(undefined4 *)((longlong)plVar6 + 0x44) = 0;
      uVar4 = WSACreateEvent();
      puVar2 = (undefined8 *)*plVar6;
      plVar6 = plVar6 + 0x15;
      *puVar2 = uVar4;
    } while (iVar7 != 0);
  }
  *(undefined4 *)(param_1 + 0x4a4) = 0;
  return 0;
}



// FUNCTION 143dd30e0 FUN_143dd30e0 body=101 status=ok
// SIG undefined FUN_143dd30e0(void)

void FUN_143dd30e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  *(undefined2 *)(*(longlong *)(lVar1 + 0x48) + 10 + (ulonglong)*(uint *)(lVar1 + 0x9c) * 0x10) = 0;
  *(int *)(lVar1 + 0x9c) = *(int *)(lVar1 + 0x9c) + 1;
  (*(undefined8 **)(lVar1 + 0x58))[*(uint *)(lVar1 + 0x9c)] = **(undefined8 **)(lVar1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000143dd313e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  WSAEventSelect(*(undefined8 *)(param_2 + 0x178),**(undefined8 **)(lVar1 + 0x58),0x39);
  return;
}



// FUNCTION 143dd3150 FUN_143dd3150 body=50 status=ok
// SIG undefined FUN_143dd3150(void)

undefined8 FUN_143dd3150(longlong param_1)

{
  WSASetEvent(**(undefined8 **)
                ((longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + 0xf8 + *(longlong *)(param_1 + 0x78))
             );
  return 0;
}



// FUNCTION 143dd3190 FUN_143dd3190 body=8 status=ok
// SIG undefined FUN_143dd3190(void)

void FUN_143dd3190(undefined8 param_1,undefined8 param_2)

{
  FUN_143dd23e0(param_1,param_2,0);
  return;
}



// FUNCTION 143dd31a0 FUN_143dd31a0 body=338 status=ok
// SIG undefined FUN_143dd31a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd31a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_34 = 1;
  if (*(int *)(param_1 + 0x234) == 0) {
LAB_143dd3264:
    local_38 = 1;
    lVar4 = Ordinal_53(&DAT_145dbe9f0);
    if (lVar4 == 0) {
      uVar2 = Ordinal_111();
      Curl_pp_sendf(1,"getprotobyname() failed with error %d\n",uVar2);
      iVar1 = 6;
    }
    else {
      iVar1 = (int)*(short *)(lVar4 + 0x10);
    }
    local_68 = CONCAT44(local_68._4_4_,4);
    Ordinal_21(param_2,iVar1,1,&local_38);
    Ordinal_10(param_2,0x8004667e,&local_34);
    uVar3 = 0;
  }
  else {
    local_38 = 1;
    local_68 = CONCAT44(local_68._4_4_,4);
    iVar1 = Ordinal_21(param_2,0xffff,8,&local_38);
    if (-1 < iVar1) {
      local_24 = *(undefined4 *)(param_1 + 0x234);
      local_20 = *(undefined4 *)(param_1 + 0x23c);
      local_48 = 0;
      local_50 = 0;
      local_58 = local_30;
      local_28 = 1;
      local_60 = 0;
      local_68 = 0;
      iVar1 = WSAIoctl(param_2,0x98000004,&local_28,0xc);
      if (iVar1 == 0) goto LAB_143dd3264;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 143dd3300 FUN_143dd3300 body=102 status=ok
// SIG undefined FUN_143dd3300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dd3300(undefined8 *param_1)

{
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 local_238 [2];
  undefined4 local_228 [2];
  undefined8 local_220;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  local_228[0] = 1;
  local_238[0] = 0;
  local_220 = *param_1;
  local_248 = local_238;
  Ordinal_18((int)local_220 + 1,local_228,0,0);
  return;
}



// FUNCTION 143dd3370 FUN_143dd3370 body=55 status=ok
// SIG undefined FUN_143dd3370(void)

longlong FUN_143dd3370(void)

{
  _FILETIME local_res8 [4];
  
  GetSystemTimeAsFileTime(local_res8);
  return (ulonglong)local_res8[0] / 10 + 0xffd6a169b779c000;
}



// FUNCTION 143dd33b0 FUN_143dd33b0 body=103 status=ok
// SIG undefined FUN_143dd33b0(void)

longlong FUN_143dd33b0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  
  uVar3 = 0;
  uVar5 = (ulonglong)
          (((uint)((ulonglong)param_2 >> 0x10) ^ (uint)((ulonglong)param_2 >> 8) ^ (uint)param_2) &
          0x1f);
  iVar1 = *(int *)(param_1 + (uVar5 + 0x18) * 0x10);
  if (0 < iVar1) {
    plVar2 = *(longlong **)(param_1 + 0x178 + uVar5 * 0x10);
    plVar4 = plVar2;
    uVar5 = uVar3;
    do {
      if (*(longlong *)(*plVar4 + 0x178) == param_2) {
        return plVar2[(int)uVar5];
      }
      uVar5 = (ulonglong)((int)uVar5 + 1);
      uVar3 = uVar3 + 1;
      plVar4 = plVar4 + 1;
    } while ((longlong)uVar3 < (longlong)iVar1);
  }
  return 0;
}



// FUNCTION 143dd3420 FUN_143dd3420 body=398 status=ok
// SIG undefined FUN_143dd3420(void)

int FUN_143dd3420(byte *param_1,int param_2,byte *param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  char local_res10 [8];
  
  bVar7 = 0;
  iVar3 = 0;
  while ((param_2 != 0 && (*param_1 != 0))) {
    iVar5 = 0;
    uVar4 = 0;
    do {
      if ((param_2 == 0) || (*param_1 == 0)) break;
      cVar2 = '\0';
      bVar7 = 0;
      do {
        bVar6 = *param_1;
        uVar1 = (uint)bVar6;
        if ((bVar6 == 0) || (cVar2 != '\0')) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        if (bVar6 == 0x2d) {
          uVar1 = 0x2b;
          bVar6 = 0x2b;
LAB_143dd34b1:
          cVar2 = "|$$$}rstuvwxyz{$$$$$$$>?@ABCDEFGHIJKLMNOPQRSTUVW$$$$$$XYZ[\\]^_`abcdefghijklmnopq"
                  [(int)(uVar1 - 0x2b)];
          if (cVar2 != '\0') {
            if (cVar2 == '$') goto LAB_143dd34cc;
            cVar2 = cVar2 + -0x3d;
          }
        }
        else {
          if (bVar6 == 0x5f) {
            uVar1 = 0x2f;
            bVar6 = 0x2f;
            goto LAB_143dd34b1;
          }
          if ((byte)(bVar6 - 0x2b) < 0x50) goto LAB_143dd34b1;
LAB_143dd34cc:
          cVar2 = '\0';
        }
        bVar7 = bVar6;
      } while (param_2 != 0);
      if (bVar7 == 0) {
        if (3 < uVar4) {
                    /* WARNING: Subroutine does not return */
          __report_rangecheckfailure();
        }
        local_res10[uVar4] = '\0';
      }
      else {
        iVar5 = iVar5 + 1;
        if (cVar2 != '\0') {
          local_res10[uVar4] = cVar2 + -1;
        }
      }
      uVar4 = uVar4 + 1;
    } while ((longlong)uVar4 < 4);
    if (param_4 < iVar3 + -1 + iVar5) goto LAB_143dd35a4;
    if (((param_2 == 0) || (*param_1 == 0)) && (bVar7 == 0x3d)) {
      iVar5 = iVar5 + -1;
    }
    if (1 < iVar5) {
      *param_3 = (byte)local_res10[1] >> 4 | local_res10[0] << 2;
      param_3 = param_3 + 1;
    }
    if (2 < iVar5) {
      *param_3 = (byte)local_res10[2] >> 2 | local_res10[1] << 4;
      param_3 = param_3 + 1;
    }
    if (3 < iVar5) {
      *param_3 = local_res10[2] << 6 | local_res10[3];
      param_3 = param_3 + 1;
    }
    iVar3 = iVar3 + -1 + iVar5;
  }
  if (iVar3 + 1 < param_4) {
    *param_3 = 0;
  }
  else {
LAB_143dd35a4:
    iVar3 = -1;
  }
  return iVar3;
}



// FUNCTION 143dd35b0 FUN_143dd35b0 body=294 status=ok
// SIG undefined FUN_143dd35b0(void)

int FUN_143dd35b0(longlong param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5)

{
  byte bVar1;
  undefined1 uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte local_res18 [16];
  
  iVar4 = 0;
  if (param_3 != 0) {
    iVar5 = 4;
    do {
      iVar6 = 0;
      uVar3 = 0;
      do {
        if (param_3 == 0) {
          if (2 < uVar3) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_res18[uVar3] = 0;
        }
        else {
          bVar1 = *param_2;
          iVar6 = iVar6 + 1;
          param_2 = param_2 + 1;
          local_res18[uVar3] = bVar1;
          param_3 = param_3 + -1;
        }
        uVar3 = uVar3 + 1;
      } while ((longlong)uVar3 < 3);
      if (param_5 <= iVar5) goto LAB_143dd36cc;
      *param_4 = *(undefined1 *)((ulonglong)(local_res18[0] >> 2) + param_1);
      param_4[1] = *(undefined1 *)
                    (((ulonglong)(local_res18[1] >> 4) | (ulonglong)(local_res18[0] & 3) << 4) +
                    param_1);
      if (iVar6 < 2) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = *(undefined1 *)
                 (((ulonglong)(local_res18[1] & 0xf) << 2 | (ulonglong)(local_res18[2] >> 6)) +
                 param_1);
      }
      param_4[2] = uVar2;
      if (iVar6 < 3) {
        uVar2 = 0x3d;
      }
      else {
        uVar2 = *(undefined1 *)((ulonglong)(local_res18[2] & 0x3f) + param_1);
      }
      param_4[3] = uVar2;
      iVar4 = iVar4 + 4;
      param_4 = param_4 + 4;
      iVar5 = iVar5 + 4;
    } while (param_3 != 0);
  }
  if (iVar4 + 1 < param_5) {
    *param_4 = 0;
  }
  else {
LAB_143dd36cc:
    iVar4 = -1;
  }
  return iVar4;
}



// FUNCTION 143dd36e0 FUN_143dd36e0 body=14 status=ok
// SIG undefined FUN_143dd36e0(void)

void FUN_143dd36e0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_143dd3420(param_1,0xffffffff,param_2,param_3);
  return;
}



// FUNCTION 143dd36f0 FUN_143dd36f0 body=35 status=ok
// SIG undefined FUN_143dd36f0(void)

void FUN_143dd36f0(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4)

{
  FUN_143dd35b0("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",param_1,param_2,
                param_3,param_4);
  return;
}



// FUNCTION 143dd3730 FUN_143dd3730 body=77 status=ok
// SIG undefined FUN_143dd3730(void)

undefined8 FUN_143dd3730(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_143dc62b0(param_1,param_2,*(undefined8 *)(param_1 + 0x400));
  if ((*(longlong *)(param_1 + 0x400) == 0) || (0x15180 < iVar1)) {
    iVar1 = FUN_143dd46a0(param_1);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x400) = param_2;
    }
  }
  return 0;
}



// FUNCTION 143dd3780 FUN_143dd3780 body=200 status=ok
// SIG undefined FUN_143dd3780(void)

undefined8 FUN_143dd3780(longlong param_1)

{
  int iVar1;
  
  iVar1 = SSL_shutdown(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 0) {
    FUN_143dcd530(param_1,0,9);
    return 0xfffffffc;
  }
  if (iVar1 == 1) {
    Ordinal_22(*(undefined8 *)(param_1 + 0x178),1);
    return 0;
  }
  iVar1 = SSL_get_error(*(undefined8 *)(param_1 + 0x150),iVar1);
  if ((iVar1 - 1U & 0xfffffffb) != 0) {
    iVar1 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150));
    if (iVar1 == 3) {
      FUN_143dcd530(param_1,0,9);
      return 0xfffffffe;
    }
    iVar1 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150));
    if (iVar1 == 2) {
      FUN_143dcd530(param_1,0,2);
      return 0xfffffffd;
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd3850 FUN_143dd3850 body=186 status=ok
// SIG undefined FUN_143dd3850(void)

undefined8 FUN_143dd3850(longlong param_1)

{
  if ((*(uint *)(param_1 + 100) & 0x1000) == 0) {
    Curl_pp_sendf(4,
                  " SSL will not be initialized by libwebsockets: no LWS_SERVER_OPTION_DO_SSL_GLOBAL_INIT\n"
                 );
    DAT_146bcd598 = CRYPTO_get_ex_new_index(0,0,&DAT_145dbecc8,0,0,0);
    DAT_146bcd594 = CRYPTO_get_ex_new_index(1,0,0,0,0,0);
  }
  OPENSSL_init_ssl(0x200000,0);
  DAT_146bcd598 = CRYPTO_get_ex_new_index(0,0,&DAT_145dbecc8,0,0,0);
  DAT_146bcd594 = CRYPTO_get_ex_new_index(1,0,0,0,0,0);
  return 0;
}



// FUNCTION 143dd3910 FUN_143dd3910 body=68 status=ok
// SIG undefined FUN_143dd3910(void)

void FUN_143dd3910(char *param_1,int param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  strncpy(param_1,*(char **)(param_4 + 0x28),(longlong)param_2);
  lVar1 = -1;
  param_1[param_2 + -1] = '\0';
  do {
    lVar1 = lVar1 + 1;
  } while (param_1[lVar1] != '\0');
  return;
}



// FUNCTION 143dd3960 FUN_143dd3960 body=63 status=ok
// SIG undefined FUN_143dd3960(void)

void FUN_143dd3960(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    SSL_CTX_free();
  }
  if (((*(byte *)(param_1 + 0x214) & 1) == 0) && (*(longlong *)(param_1 + 0x1b8) != 0)) {
    SSL_CTX_free();
    return;
  }
  return;
}



// FUNCTION 143dd39a0 FUN_143dd39a0 body=47 status=ok
// SIG undefined FUN_143dd39a0(void)

void FUN_143dd39a0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x28) != 0) {
    FUN_142a4c7e0();
    FUN_1409936e0(param_1,FUN_143dd3910);
    return;
  }
  return;
}



// FUNCTION 143dd39d0 FUN_143dd39d0 body=366 status=ok
// SIG undefined FUN_143dd39d0(void)

ulonglong FUN_143dd39d0(longlong param_1,undefined8 param_2,uint param_3)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  int *piVar6;
  longlong lVar7;
  
  lVar7 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar5 = FUN_143dcd0c0();
    return uVar5;
  }
  piVar6 = _errno();
  *piVar6 = 0;
  uVar3 = SSL_read(*(undefined8 *)(param_1 + 0x150),param_2,param_3);
  if (uVar3 != 0) {
    if (uVar3 == 0xffffffff) {
      piVar6 = _errno();
      if (*piVar6 == 0x7e) goto LAB_143dd3a46;
    }
    else if (-1 < (int)uVar3) {
      if (*(longlong *)(param_1 + 0x80) != 0) {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x80) + 0x118);
        *plVar1 = *plVar1 + (longlong)(int)uVar3;
      }
      if (((uVar3 == param_3) && (*(longlong *)(param_1 + 0x150) != 0)) &&
         (iVar4 = SSL_pending(), iVar4 != 0)) {
        if (((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(param_1 + 0x160) == 0)) &&
           (lVar2 = *(longlong *)(lVar7 + 0xe0), lVar2 != param_1)) {
          if (lVar2 != 0) {
            *(longlong *)(lVar2 + 0x160) = param_1;
          }
          *(undefined8 *)(param_1 + 0x168) = *(undefined8 *)(lVar7 + 0xe0);
          *(undefined8 *)(param_1 + 0x160) = 0;
          *(longlong *)(lVar7 + 0xe0) = param_1;
        }
        return (ulonglong)uVar3;
      }
      thunk_FUN_143dd42f0(param_1);
      return (ulonglong)uVar3;
    }
    if ((*(longlong *)(param_1 + 0x150) != 0) &&
       (iVar4 = SSL_get_error(*(longlong *)(param_1 + 0x150),uVar3), iVar4 - 5U < 2)) {
      return 0xffffffff;
    }
    iVar4 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150));
    if ((iVar4 == 3) ||
       (iVar4 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar4 == 2)) {
      return 0xfffffffc;
    }
  }
LAB_143dd3a46:
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  return 0xffffffff;
}



// FUNCTION 143dd3b40 FUN_143dd3b40 body=250 status=ok
// SIG undefined FUN_143dd3b40(void)

ulonglong FUN_143dd3b40(longlong param_1)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    uVar2 = FUN_143dcd190(param_1);
    return uVar2;
  }
  uVar2 = SSL_write();
  if (0 < (int)uVar2) {
    return uVar2;
  }
  if (*(longlong *)(param_1 + 0x150) == 0) {
    iVar3 = 99;
  }
  else {
    iVar3 = SSL_get_error(*(longlong *)(param_1 + 0x150),uVar2 & 0xffffffff);
    if (iVar3 == 5) goto LAB_143dd3c1d;
    if (iVar3 == 2) goto LAB_143dd3bf5;
  }
  iVar1 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 3) {
LAB_143dd3bf5:
    Curl_pp_sendf(4,"%s: want read\n","lws_ssl_capable_write");
    return 0xfffffffc;
  }
  if ((iVar3 == 3) ||
     (iVar3 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar3 == 2)) {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 0x1000;
    Curl_pp_sendf(4,"%s: want write\n","lws_ssl_capable_write");
    return 0xfffffffc;
  }
LAB_143dd3c1d:
  FUN_143dd3d10();
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
  return 0xffffffff;
}



// FUNCTION 143dd3c40 FUN_143dd3c40 body=193 status=ok
// SIG undefined FUN_143dd3c40(void)

undefined8 FUN_143dd3c40(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
    FUN_140b3ffc0(*(longlong *)(param_1 + 0x150),0);
  }
  iVar2 = SSL_get_fd(*(undefined8 *)(param_1 + 0x150));
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) == 0) {
    SSL_shutdown(*(undefined8 *)(param_1 + 0x150));
  }
  Ordinal_3((longlong)iVar2);
  SSL_free(*(undefined8 *)(param_1 + 0x150));
  lVar1 = *(longlong *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if ((*(int *)(lVar1 + 0x4c8) != 0) &&
     (iVar2 = *(int *)(lVar1 + 0x4cc), *(int *)(lVar1 + 0x4cc) = iVar2 + -1,
     iVar2 == *(int *)(lVar1 + 0x4c8))) {
    FUN_143dd44e0(*(undefined8 *)(param_1 + 0x78),1);
  }
  return 1;
}



// FUNCTION 143dd3d10 FUN_143dd3d10 body=85 status=ok
// SIG undefined FUN_143dd3d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dd3d10(void)

{
  int iVar1;
  undefined1 auStack_138 [32];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  iVar1 = ERR_get_error();
  while (iVar1 != 0) {
    ERR_error_string_n(iVar1,local_118,0x100);
    iVar1 = ERR_get_error();
  }
  return;
}



// FUNCTION 143dd3d70 FUN_143dd3d70 body=21 status=ok
// SIG undefined FUN_143dd3d70(void)

undefined8 FUN_143dd3d70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 99;
  }
  uVar1 = SSL_get_error();
  return uVar1;
}



// FUNCTION 143dd3d90 FUN_143dd3d90 body=197 status=ok
// SIG undefined FUN_143dd3d90(void)

void FUN_143dd3d90(undefined8 param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint local_res20;
  undefined4 local_res24;
  
  uVar2 = FUN_1407caf40();
  lVar3 = SSL_CTX_set_ex_data(uVar2,DAT_146bcd594);
  if (lVar3 != 0) {
    iVar1 = SSL_get_fd(param_1);
    lVar3 = FUN_143dd33b0(lVar3,(longlong)iVar1);
    if ((lVar3 != 0) && ((*(uint *)(*(longlong *)(lVar3 + 0x80) + 0x210) & param_2) != 0)) {
      local_res20 = param_2;
      local_res24 = param_3;
      iVar1 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(lVar3 + 0xa0) + 8),lVar3,0x43,
                            *(undefined8 *)(lVar3 + 0x130),&local_res20,0);
      if (iVar1 != 0) {
        FUN_143dc6c40(lVar3,0x16);
      }
    }
  }
  return;
}



// FUNCTION 143dd3e60 FUN_143dd3e60 body=20 status=ok
// SIG undefined FUN_143dd3e60(void)

undefined8 FUN_143dd3e60(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  uVar1 = SSL_pending();
  return uVar1;
}



// FUNCTION 143dd3e80 FUN_143dd3e80 body=20 status=ok
// SIG undefined FUN_143dd3e80(void)

undefined8 FUN_143dd3e80(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x150) == 0) {
    return 0;
  }
  uVar1 = FUN_1407caf40();
  return uVar1;
}



// FUNCTION 143dd3ea0 FUN_143dd3ea0 body=300 status=ok
// SIG undefined FUN_143dd3ea0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dd3ea0(longlong param_1)

{
  char *pcVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_58 [32];
  tm local_38;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  pcVar1 = *(char **)(param_1 + 8);
  local_38.tm_wday = 0;
  local_38.tm_yday = 0;
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (pcVar1[lVar3] != '\0');
  iVar2 = (int)pcVar1[1];
  if (lVar3 == 0xd) {
    iVar4 = *pcVar1 * 5 + -0xd6;
    lVar3 = 2;
  }
  else {
    iVar4 = iVar2 + *pcVar1 * 10;
    lVar3 = 4;
    iVar2 = (int)pcVar1[3];
    iVar4 = ((int)pcVar1[2] + iVar4 * 10) * 5 + -0x6828;
  }
  local_38.tm_year = iVar2 + iVar4 * 2;
  local_38.tm_mon = pcVar1[lVar3] * 10 + -0x211 + (int)pcVar1[lVar3 + 1];
  local_38.tm_mday = pcVar1[lVar3 + 2] * 10 + -0x211 + (int)pcVar1[lVar3 + 3];
  local_38.tm_hour = (int)pcVar1[lVar3 + 5] + (pcVar1[lVar3 + 4] * 5 + -0x108) * 2;
  local_38.tm_isdst = 0;
  local_38.tm_min = (int)pcVar1[lVar3 + 7] + (pcVar1[lVar3 + 6] * 5 + -0x108) * 2;
  local_38.tm_sec = (int)pcVar1[lVar3 + 9] + (pcVar1[lVar3 + 8] * 5 + -0x108) * 2;
  _mktime64(&local_38);
  return;
}



// FUNCTION 143dd3fd0 FUN_143dd3fd0 body=532 status=ok
// SIG undefined FUN_143dd3fd0(void)

undefined8 FUN_143dd3fd0(longlong param_1,undefined4 param_2,longlong *param_3,ulonglong param_4)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  void *_Src;
  longlong lVar6;
  ulonglong _Size;
  longlong lVar7;
  void *local_res8;
  
  if (param_1 == 0) {
    return 0xffffffffffffffff;
  }
  switch(param_2) {
  case 0:
    uVar5 = UNiagaraSystem::GetEffectType(param_1);
    goto LAB_143dd402d;
  case 1:
    uVar5 = FWmfMediaPlayer::GetSamples(param_1);
LAB_143dd402d:
    lVar4 = FUN_143dd3ea0(uVar5);
    *param_3 = lVar4;
    if (lVar4 != -1) {
      return 0;
    }
    break;
  case 2:
    lVar4 = FBackChannelConnection::GetSocket(param_1);
    if (lVar4 != 0) {
      X509_NAME_oneline(lVar4,(int *)((longlong)param_3 + 4),(int)param_4 + -2);
      pcVar3 = strstr((char *)((longlong)param_3 + 4),"/CN=");
      lVar4 = -1;
      if (pcVar3 != (char *)0x0) {
        lVar4 = -1;
        do {
          lVar7 = lVar4;
          lVar4 = lVar7 + 1;
        } while ((pcVar3 + 4)[lVar4] != '\0');
        memmove((int *)((longlong)param_3 + 4),pcVar3 + 4,lVar7 + 2);
        lVar4 = -1;
      }
      do {
        lVar6 = lVar4 + 1;
        lVar7 = lVar4 + 5;
        lVar4 = lVar6;
      } while (*(char *)((longlong)param_3 + lVar7) != '\0');
      *(int *)param_3 = (int)lVar6;
      return 0;
    }
    break;
  case 3:
    lVar4 = FVoicePacketImpl::GetSampleCounter(param_1);
    if (lVar4 != 0) {
      X509_NAME_oneline(lVar4,(int *)((longlong)param_3 + 4),(int)param_4 + -1);
      lVar4 = -1;
      do {
        lVar6 = lVar4 + 1;
        lVar7 = lVar4 + 5;
        lVar4 = lVar6;
      } while (*(char *)((longlong)param_3 + lVar7) != '\0');
      *(int *)param_3 = (int)lVar6;
      return 0;
    }
    break;
  case 4:
    iVar1 = X509_get_key_usage(param_1);
    *(int *)param_3 = iVar1;
    return 0;
  case 6:
    uVar5 = AAIController::GetPerceptionComponent(param_1);
    iVar1 = i2d_X509_PUBKEY(uVar5,0);
    _Size = (ulonglong)iVar1;
    if (((iVar1 != 0) && (_Size <= param_4)) &&
       (_Src = (void *)CRYPTO_malloc(_Size,
                                     "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                                     ,0x275), _Src != (void *)0x0)) {
      local_res8 = _Src;
      uVar5 = AAIController::GetPerceptionComponent(param_1);
      iVar2 = i2d_X509_PUBKEY(uVar5,&local_res8);
      if (iVar2 == iVar1) {
        if (local_res8 == (void *)0x0) {
          return 0xffffffffffffffff;
        }
        if ((int)local_res8 - (int)_Src == iVar1) {
          *(int *)param_3 = iVar1;
          _guard_xfg_dispatch_icall_nop((int *)((longlong)param_3 + 4),_Src,_Size);
          CRYPTO_free(_Src,
                      "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                      ,0x287);
          return 0;
        }
      }
      if (local_res8 != (void *)0x0) {
        CRYPTO_free(_Src,
                    "D:\\Perforce\\ian.fox-third-party\\3rdParty\\libwebsocket\\source\\3.0\\libwebsockets-3.0-stable\\lib\\tls\\openssl\\ssl.c"
                    ,0x280);
      }
    }
  }
  return 0xffffffffffffffff;
}



// FUNCTION 143dd4200 FUN_143dd4200 body=149 status=ok
// SIG undefined FUN_143dd4200(void)

undefined4 FUN_143dd4200(undefined8 param_1,int param_2,uint *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = 0;
  lVar3 = UWaterWaves::GetWaterWaves();
  lVar4 = SSL_get_peer_certificate(*(undefined8 *)(lVar3 + 0x150));
  if (lVar4 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_2 == 5) {
      iVar2 = FUN_143ca5410(*(undefined8 *)(lVar3 + 0x150));
      *param_3 = (uint)(iVar2 == 0);
    }
    else {
      uVar1 = FUN_143dd3fd0(lVar4,param_2,param_3,param_4);
    }
    X509_free(lVar4);
  }
  return uVar1;
}



// FUNCTION 143dd42a0 FUN_143dd42a0 body=66 status=ok
// SIG undefined FUN_143dd42a0(void)

void FUN_143dd42a0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = SSL_CTX_get0_certificate(*(undefined8 *)(param_1 + 0x1b0));
  FUN_143dd3fd0(uVar1,param_2,param_3,param_4);
  return;
}



// FUNCTION 143dd42f0 FUN_143dd42f0 body=127 status=ok
// SIG undefined FUN_143dd42f0(void)

void FUN_143dd42f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    if ((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(lVar1 + 0xe0) != param_1)) {
      return;
    }
    *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_1 + 0x168);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x168) = *(undefined8 *)(param_1 + 0x168);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x160) = *(undefined8 *)(param_1 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 143dd4370 FUN_143dd4370 body=253 status=ok
// SIG undefined FUN_143dd4370(void)

undefined4 FUN_143dd4370(undefined8 param_1,char *param_2,undefined8 *param_3,size_t *param_4)

{
  int iVar1;
  long lVar2;
  FILE *_File;
  void *_DstBuf;
  size_t sVar3;
  undefined4 uVar4;
  size_t _ElementSize;
  
  uVar4 = 0;
  _File = fopen(param_2,"rb");
  if (_File == (FILE *)0x0) {
    return 1;
  }
  iVar1 = fseek(_File,0,2);
  if (iVar1 != 0) {
    uVar4 = 1;
    goto LAB_143dd444c;
  }
  lVar2 = ftell(_File);
  _ElementSize = (size_t)lVar2;
  if ((_ElementSize != 0xffffffffffffffff) && (iVar1 = fseek(_File,0,0), iVar1 == 0)) {
    _DstBuf = (void *)thunk_FUN_143dd4bc0(0,_ElementSize,"alloc_file");
    *param_3 = _DstBuf;
    if (_DstBuf == (void *)0x0) {
      uVar4 = 2;
      goto LAB_143dd444c;
    }
    sVar3 = fread(_DstBuf,_ElementSize,1,_File);
    if (sVar3 == 1) {
      *param_4 = _ElementSize;
      goto LAB_143dd444c;
    }
    thunk_FUN_143dd4bc0(*param_3,0,"lws_free");
  }
  uVar4 = 1;
LAB_143dd444c:
  fclose(_File);
  return uVar4;
}



// FUNCTION 143dd4470 FUN_143dd4470 body=102 status=ok
// SIG undefined FUN_143dd4470(void)

ulonglong FUN_143dd4470(char *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  
  pcVar3 = (char *)0x0;
  pcVar2 = param_2;
  if (*param_1 != '\0') {
    do {
      if (param_3 < 2) break;
      pcVar1 = pcVar2;
      if (pcVar3 == (char *)0x0) {
        if (*param_1 != ' ') {
          param_3 = param_3 + -1;
          pcVar1 = pcVar2 + 1;
          pcVar3 = pcVar2;
          goto LAB_143dd4499;
        }
      }
      else {
LAB_143dd4499:
        pcVar2 = pcVar1;
        if (*param_1 == ',') {
          *pcVar3 = ((char)pcVar2 - (char)pcVar3) + -1;
          pcVar3 = (char *)0x0;
        }
        else {
          *pcVar2 = *param_1;
          pcVar2 = pcVar2 + 1;
          param_3 = param_3 + -1;
        }
      }
      param_1 = param_1 + 1;
    } while (*param_1 != '\0');
    if (pcVar3 != (char *)0x0) {
      *pcVar3 = ((char)pcVar2 - (char)pcVar3) + -1;
    }
  }
  return (longlong)pcVar2 - (longlong)param_2 & 0xffffffff;
}



// FUNCTION 143dd44e0 FUN_143dd44e0 body=155 status=ok
// SIG undefined FUN_143dd44e0(void)

undefined8 FUN_143dd44e0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x378);
  Curl_pp_sendf(4,"%s: on = %d\n","lws_gate_accepts",param_2);
  for (; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x150)) {
    if ((*(int *)(lVar1 + 0x208) != 0) && (*(longlong *)(lVar1 + 0x158) != 0)) {
      uVar3 = 0;
      if (param_2 == 0) {
        uVar3 = 9;
      }
      iVar2 = thunk_FUN_143dcd530(*(longlong *)(lVar1 + 0x158),uVar3,param_2 * 9);
      if (iVar2 != 0) {
        Curl_pp_sendf(4,"Unable to set accept POLLIN %d\n",param_2);
      }
    }
  }
  return 0;
}



// FUNCTION 143dd4580 thunk_FUN_143dd42f0 body=5 status=ok
// SIG undefined thunk_FUN_143dd42f0(void)

void thunk_FUN_143dd42f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x160) == 0) {
    if ((*(longlong *)(param_1 + 0x168) == 0) && (*(longlong *)(lVar1 + 0xe0) != param_1)) {
      return;
    }
    *(undefined8 *)(lVar1 + 0xe0) = *(undefined8 *)(param_1 + 0x168);
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x160) + 0x168) = *(undefined8 *)(param_1 + 0x168);
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x168) + 0x160) = *(undefined8 *)(param_1 + 0x160);
  }
  *(undefined8 *)(param_1 + 0x160) = 0;
  *(undefined8 *)(param_1 + 0x168) = 0;
  return;
}



// FUNCTION 143dd4590 FUN_143dd4590 body=265 status=ok
// SIG undefined FUN_143dd4590(void)

undefined8
FUN_143dd4590(undefined8 param_1,longlong param_2,char *param_3,ulonglong param_4,
             undefined8 *param_5,longlong *param_6)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  ulonglong local_res10;
  char *local_18 [2];
  
  if ((param_2 != 0) &&
     (uVar2 = FUN_143dd4370(param_1,param_2,local_18,&local_res10), param_4 = local_res10,
     param_3 = local_18[0], (int)uVar2 != 0)) {
    return uVar2;
  }
  pcVar3 = param_3 + param_4;
  iVar1 = strncmp(param_3,"-----",5);
  if (iVar1 == 0) {
    for (pcVar4 = param_3 + 5; (pcVar4 < pcVar3 && (*pcVar4 != '\n')); pcVar4 = pcVar4 + 1) {
      if (*pcVar4 == '-') goto joined_r0x000143dd460d;
    }
    if (*pcVar4 == '-') {
joined_r0x000143dd460d:
      do {
        if (pcVar3 <= pcVar4) break;
        if (*pcVar4 == '\n') {
          if (pcVar4 < pcVar3) {
            pcVar3 = pcVar3 + -2;
            goto joined_r0x000143dd4652;
          }
          break;
        }
        pcVar4 = pcVar4 + 1;
      } while( true );
    }
  }
  goto LAB_143dd461d;
joined_r0x000143dd4652:
  if (pcVar3 <= param_3) goto LAB_143dd4661;
  if (*pcVar3 == '\n') goto LAB_143dd4666;
  pcVar3 = pcVar3 + -1;
  goto joined_r0x000143dd4652;
LAB_143dd4661:
  if (*pcVar3 == '\n') {
LAB_143dd4666:
    *pcVar3 = '\0';
    iVar1 = FUN_143dd36e0(pcVar4 + 1,param_3,param_4 & 0xffffffff);
    *param_6 = (longlong)iVar1;
    *param_5 = param_3;
    return 0;
  }
LAB_143dd461d:
  thunk_FUN_143dd4bc0(param_3,0,"lws_free");
  return 4;
}



// FUNCTION 143dd46a0 FUN_143dd46a0 body=334 status=ok
// SIG undefined FUN_143dd46a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd46a0(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_e8 [32];
  longlong local_c8 [12];
  longlong local_68 [10];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar1 = *(longlong *)(param_1 + 0x378);
  do {
    if (lVar1 == 0) {
      return 0;
    }
    uVar2 = FUN_143dc66b0();
    if ((*(longlong *)(lVar1 + 0x1b0) == 0) || ((*(byte *)(lVar1 + 0x214) & 2) != 0)) {
      Curl_pp_sendf(4,"   vhost %s: no cert\n",*(undefined8 *)(lVar1 + 0x160));
LAB_143dd4780:
      _guard_xfg_dispatch_icall_nop(local_c8,0,0x58);
      local_c8[0] = lVar1;
      FUN_143dc5e80(*(undefined8 *)(lVar1 + 0x148),0x48,local_c8);
    }
    else {
      if ((ulonglong)uVar2 < 0x57442252) {
        return 0xffffffff;
      }
      iVar3 = FUN_143dd42a0(lVar1,1,local_68,0);
      if (iVar3 == 0) {
        Curl_pp_sendf(4,"   vhost %s: cert expiry: %dd\n",*(undefined8 *)(lVar1 + 0x160),
                      (longlong)(local_68[0] - (ulonglong)uVar2) / 0x15180 & 0xffffffff);
        goto LAB_143dd4780;
      }
    }
    lVar1 = *(longlong *)(lVar1 + 0x150);
  } while( true );
}



// FUNCTION 143dd47f0 FUN_143dd47f0 body=121 status=ok
// SIG undefined FUN_143dd47f0(void)

bool FUN_143dd47f0(longlong param_1)

{
  ushort *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ushort uVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x40);
  uVar6 = 0;
  while (lVar4 != 0) {
    piVar2 = (int *)(lVar4 + 0x1a0);
    iVar3 = *piVar2;
    if (iVar3 == -1) break;
    lVar4 = *(longlong *)(lVar4 + 0x168);
    lVar5 = (longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x48);
    puVar1 = (ushort *)(lVar5 + 10);
    *puVar1 = *puVar1 | *(ushort *)(lVar5 + 8) & 9;
    uVar6 = uVar6 | *(ushort *)(*(longlong *)(param_1 + 0x48) + 10 + (longlong)*piVar2 * 0x10) & 9;
  }
  return uVar6 != 0;
}



// FUNCTION 143dd4870 FUN_143dd4870 body=172 status=ok
// SIG undefined FUN_143dd4870(void)

undefined8 FUN_143dd4870(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 == 0) || (param_3 == 0)) {
    return 0;
  }
  iVar1 = FUN_143dd4920(param_2);
  if ((iVar1 != 2) && (iVar2 = FUN_143dd4920(param_3), iVar2 != 2)) {
    if (((iVar1 == 0) || (iVar2 == 0)) && ((*(uint *)(param_1 + 0x22c) & 0x4000000) != 0)) {
      Curl_pp_sendf(4,"Ignoring missing %s or %s\n",param_2,param_3);
      *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) | 2;
      return 0;
    }
    return 1;
  }
  return 2;
}



// FUNCTION 143dd4920 FUN_143dd4920 body=473 status=ok
// SIG undefined FUN_143dd4920(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143dd4920(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_158 [32];
  int local_138;
  undefined1 local_128 [16];
  char local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_143dc6cb0(local_118,0xff,"%s.upd",param_1);
  iVar1 = _open(local_118,0);
  iVar3 = 0;
  if (-1 < iVar1) {
    iVar2 = _read(iVar1,local_128,1);
    _close(iVar1);
    if (iVar2 == 1) {
      iVar1 = _open(param_1,0);
      if (-1 < iVar1) {
        iVar2 = _read(iVar1,local_128,1);
        _close(iVar1);
        if (iVar2 == 1) {
          do {
            local_138 = iVar3;
            FUN_143dc6cb0(local_118,0xff,"%s.old.%d",param_1);
            iVar1 = rename(param_1,local_118);
            if (iVar1 == 0) break;
            iVar3 = iVar3 + 1;
          } while (iVar3 < 0x32);
          if (iVar3 == 0x32) {
            Curl_pp_sendf(4,"unable to rename %s\n",param_1);
            return 2;
          }
          FUN_143dc6cb0(local_118,0xff,"%s.upd",param_1);
        }
      }
      iVar1 = rename(local_118,param_1);
      if (iVar1 != 0) {
        Curl_pp_sendf(4,"unable to rename %s to %s\n",local_118,param_1);
        return 2;
      }
    }
  }
  iVar1 = _open(param_1,0);
  if (-1 < iVar1) {
    iVar3 = _read(iVar1,local_128,1);
    _close(iVar1);
    if (iVar3 == 1) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dd4b00 FUN_143dd4b00 body=192 status=ok
// SIG undefined FUN_143dd4b00(void)

undefined8 FUN_143dd4b00(int *param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  _FILETIME local_res8;
  
  if (param_1 != (int *)0x0) {
    GetSystemTimeAsFileTime(&local_res8);
    uVar4 = (ulonglong)local_res8 / 10 + 0xffd6a169b779c000;
    iVar3 = (int)(uVar4 / 1000000);
    *param_1 = iVar3;
    param_1[1] = (int)uVar4 + iVar3 * -1000000;
  }
  if (param_2 != (int *)0x0) {
    if (DAT_146bcbba4 == 0) {
      _tzset();
      DAT_146bcbba4 = DAT_146bcbba4 + 1;
    }
    plVar1 = __timezone();
    *param_2 = *plVar1 / 0x3c;
    piVar2 = __daylight();
    param_2[1] = *piVar2;
  }
  return 0;
}



// FUNCTION 143dd4bc0 FUN_143dd4bc0 body=38 status=ok
// SIG undefined FUN_143dd4bc0(void)

void * FUN_143dd4bc0(void *param_1,size_t param_2)

{
  void *pvVar1;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000143dd4bcd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar1 = realloc(param_1,param_2);
    return pvVar1;
  }
  if (param_1 != (void *)0x0) {
    free(param_1);
  }
  return (void *)0x0;
}



// FUNCTION 143dd4bf0 thunk_FUN_143dd4bc0 body=7 status=ok
// SIG undefined thunk_FUN_143dd4bc0(void)

void thunk_FUN_143dd4bc0(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143dd4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_146838390)();
  return;
}



// FUNCTION 143dd4c00 FUN_143dd4c00 body=62 status=ok
// SIG undefined FUN_143dd4c00(void)

void * FUN_143dd4c00(size_t param_1,undefined8 param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR_FUN_146838390)(0,param_1,param_2);
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,0,param_1);
  }
  return _Dst;
}



// FUNCTION 143dd4c40 FUN_143dd4c40 body=499 status=ok
// SIG undefined FUN_143dd4c40(void)

undefined8 FUN_143dd4c40(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  ushort uVar3;
  undefined8 local_18;
  int local_10;
  
  if (*(int *)(param_2 + 0x1ac) == 0) {
    uVar3 = *(ushort *)(param_3 + 8) & *(ushort *)(param_3 + 10);
    if ((((uVar3 & 9) == 0) || (*(short *)(param_2 + 0x70) == 0x208)) ||
       (((*(uint *)(param_2 + 0x1b8) & 0x4000) != 0 && ((uVar3 & 2) != 0)))) {
      if (((*(uint *)(param_2 + 0x1b8) >> 0xe & 1) != 0) && ((uVar3 & 2) != 0)) {
        *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) & 0xffffbfff;
      }
    }
    else {
      uVar2 = FUN_143dcc280(param_1,param_2,&local_18);
      if (local_10 != -4) {
        if (local_10 == -1) goto LAB_143dd4e0d;
        if (local_10 == 0) {
          *(uint *)(param_2 + 0x1b8) = *(uint *)(param_2 + 0x1b8) | 0x4000000;
          thunk_FUN_143dcd530(param_2,9);
          goto LAB_143dd4e0d;
        }
        iVar1 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x3b,
                              *(undefined8 *)(param_2 + 0x130),local_18,(longlong)local_10);
        if (iVar1 < 0) goto LAB_143dd4e0d;
        iVar1 = FUN_143dcc1c0(param_2,&local_18,local_10,uVar2);
        if (iVar1 != 0) {
          return 5;
        }
      }
    }
    if ((*(byte *)(param_3 + 10) & 2) != 0) {
      iVar1 = thunk_FUN_143dcd530(param_2,2);
      if (iVar1 == 0) {
        *(uint *)(param_2 + 0x1bc) = *(uint *)(param_2 + 0x1bc) & 0xfffffffe;
        iVar1 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x3d,
                              *(undefined8 *)(param_2 + 0x130),0,0);
        if (-1 < iVar1) {
          return 4;
        }
      }
      else {
        Curl_pp_sendf(4,"%s a\n","rops_handle_POLLIN_raw_skt");
      }
LAB_143dd4e0d:
      thunk_FUN_143dc4f60(param_2,0,"raw svc fail");
      return 3;
    }
  }
  else if (((*(byte *)(param_3 + 10) & 2) != 0) &&
          (iVar1 = FUN_143dccd70(param_2,(ulonglong)*(uint *)(param_2 + 0x1a8) +
                                         *(longlong *)(param_2 + 0x148),*(int *)(param_2 + 0x1ac)),
          iVar1 < 0)) goto LAB_143dd4e0d;
  return 4;
}



// FUNCTION 143dd4e40 FUN_143dd4e40 body=185 status=ok
// SIG undefined FUN_143dd4e40(void)

uint FUN_143dd4e40(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  
  if ((*(byte *)(param_3 + 10) & 2) != 0) {
    iVar1 = FUN_143dcc350(param_2);
    iVar2 = thunk_FUN_143dcd530(param_2,2);
    if (iVar2 != 0) {
      return 3;
    }
    if (iVar1 != 0) {
      return 5;
    }
  }
  if (((*(byte *)(param_3 + 10) & 9) != 0) &&
     (iVar1 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x40,
                            *(undefined8 *)(param_2 + 0x130),0,0), iVar1 != 0)) {
    return 5;
  }
  return (*(byte *)(param_3 + 10) & 0x20 | 0x80) >> 5;
}



// FUNCTION 143dd4f00 FUN_143dd4f00 body=274 status=ok
// SIG undefined FUN_143dd4f00(void)

ulonglong FUN_143dd4f00(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  
  if (*(char *)(param_2 + 0x1ca) != '\0') {
    return 4;
  }
  if ((*(uint *)(param_2 + 0x70) & 0x10000000) == 0) {
    uVar2 = FUN_143dd5130(param_2,param_3);
    if ((int)uVar2 == 4) {
      if (*(short *)(param_2 + 0x70) == 0x207) {
        return 4;
      }
      iVar1 = FUN_143dd6fb0(param_2,0xffffffffffffffff);
      if (iVar1 == 0) {
        return 4;
      }
      return 5;
    }
  }
  else {
    if (((*(ushort *)(param_3 + 10) & 9) != 0) && ((*(uint *)(param_2 + 0x1b8) & 0x40001) == 1)) {
      *(uint *)(param_2 + 0x1bc) = *(uint *)(param_2 + 0x1bc) | 0x10;
      thunk_FUN_143dcd530(param_2,9,0);
      iVar1 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x2e,
                            *(undefined8 *)(param_2 + 0x130),0,0);
      return (ulonglong)((iVar1 != 0) + 4);
    }
    if (((*(ushort *)(param_3 + 10) & 2) != 0) &&
       (iVar1 = FUN_143dcc3a0(param_2,param_3), iVar1 != 0)) {
      return 5;
    }
    iVar1 = FUN_143dd5d90(param_2,param_3,0);
    uVar2 = (ulonglong)(4 - (iVar1 != 0));
  }
  return uVar2;
}



// FUNCTION 143dd5070 FUN_143dd5070 body=181 status=ok
// SIG undefined FUN_143dd5070(void)

undefined8 FUN_143dd5070(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  lVar3 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8 + *(longlong *)(param_1 + 0x78);
  FUN_143dcdf90(param_1,0);
  puVar2 = *(undefined8 **)(lVar3 + 0x118);
  do {
    if (puVar2 == (undefined8 *)0x0) {
LAB_143dd50f9:
      thunk_FUN_143dd4bc0(*(undefined8 *)(param_1 + 0x60),0,&DAT_145dbcdec);
      *(undefined8 *)(param_1 + 0x60) = 0;
      return 0;
    }
    if ((*(char *)((longlong)puVar2 + 0x3b2) != '\0') && (puVar2[1] == param_1)) {
      Curl_pp_sendf(1,"%s: ah leak: wsi %p\n","rops_destroy_role_h1",param_1);
      *(undefined1 *)((longlong)puVar2 + 0x3b2) = 0;
      puVar2[1] = 0;
      piVar1 = (int *)(lVar3 + 0x130);
      *piVar1 = *piVar1 + -1;
      goto LAB_143dd50f9;
    }
    puVar2 = (undefined8 *)*puVar2;
  } while( true );
}



// FUNCTION 143dd5130 FUN_143dd5130 body=695 status=ok
// SIG undefined FUN_143dd5130(void)

undefined8 FUN_143dd5130(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  undefined8 local_18;
  int local_10;
  
  cVar1 = *(char *)(param_1 + 0x1c7);
  lVar2 = *(longlong *)(param_1 + 0x78);
  uVar3 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (uVar3 == 0x10f) {
LAB_143dd519f:
    if ((*(byte *)(param_2 + 10) & 2) != 0) {
      iVar4 = thunk_FUN_143dcd530(param_1,2);
      if (iVar4 != 0) {
        Curl_pp_sendf(4,"%s a\n","lws_h1_server_socket_service");
LAB_143dd53cf:
        thunk_FUN_143dc4f60(param_1,0,"server socket svc fail");
        goto LAB_143dd53e0;
      }
      *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffe;
      if (*(short *)(param_1 + 0x70) == 0x10f) {
        *(undefined2 *)(param_1 + 0x70) = 0x117;
        iVar4 = thunk_FUN_143dcd530(param_1,2);
        if (iVar4 != 0) goto LAB_143dd53cf;
      }
      if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
        if (*(short *)(param_1 + 0x70) == 0x14) {
          iVar4 = FUN_143dd1d50(param_1);
        }
        else if (*(int *)(param_1 + 0x1ac) == 0) {
          iVar4 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x10,
                                *(undefined8 *)(param_1 + 0x130),0,0);
        }
        else {
          iVar4 = FUN_143dccd70(param_1,(ulonglong)*(uint *)(param_1 + 0x1a8) +
                                        *(longlong *)(param_1 + 0x148),*(int *)(param_1 + 0x1ac));
        }
        if (iVar4 < 0) goto LAB_143dd53cf;
      }
    }
LAB_143dd537d:
    uVar6 = 4;
  }
  else {
    uVar8 = *(ushort *)(param_2 + 8) & *(ushort *)(param_2 + 10);
    if ((uVar8 & 9) == 0) goto LAB_143dd519f;
    uVar7 = *(uint *)(param_1 + 0x1b8);
    if (((uVar7 >> 0xe & 1) != 0) && ((uVar8 & 2) != 0)) {
      uVar7 = uVar7 & 0xffffbfff;
LAB_143dd5199:
      *(uint *)(param_1 + 0x1b8) = uVar7;
      goto LAB_143dd519f;
    }
    if (uVar3 == 0x208) goto LAB_143dd537d;
    if ((uVar3 != 0x117) && (2 < uVar3 - 0x14)) {
      if ((*(ushort *)(param_2 + 10) & 2) != 0) {
        uVar7 = uVar7 | 0x4000;
        goto LAB_143dd5199;
      }
      goto LAB_143dd519f;
    }
    if ((*(longlong *)(param_1 + 8) == 0) && (iVar4 = FUN_143dce7a0(param_1,0), iVar4 != 0))
    goto LAB_143dd519f;
    uVar5 = FUN_143dcc280(lVar2 + (longlong)cVar1 * 0xa8 + 0xa0,param_1,&local_18);
    if (local_10 == -4) goto LAB_143dd519f;
    if (local_10 == -1) goto LAB_143dd53cf;
    if (local_10 == 0) {
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x4000000;
      thunk_FUN_143dcd530(param_1,9);
      goto LAB_143dd53cf;
    }
    uVar3 = *(uint *)(param_1 + 0x70) & 0xffff;
    if (uVar3 == 0x11c) {
      Curl_pp_sendf(4,"%s: just ignoring\n","lws_h1_server_socket_service");
      goto LAB_143dd519f;
    }
    if (uVar3 == 0x14) {
      iVar4 = FUN_143dcc1c0(param_1,&local_18,0,uVar5);
      if (iVar4 != 0) {
        return 5;
      }
      goto LAB_143dd519f;
    }
    iVar4 = FUN_143dd53f0(param_1,local_18,(longlong)local_10);
    if (-1 < iVar4) {
      iVar4 = FUN_143dcc1c0(param_1,&local_18,iVar4,uVar5);
      if (iVar4 != 0) {
        return 5;
      }
      if ((*(longlong *)(param_1 + 8) != 0) &&
         (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_146838500)) {
        thunk_FUN_143dcdf90(param_1,0);
      }
      if ((*(byte *)(param_2 + 10) & 2) != 0) {
        *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x4000;
      }
      goto LAB_143dd537d;
    }
LAB_143dd53e0:
    uVar6 = 3;
  }
  return uVar6;
}



// FUNCTION 143dd53f0 FUN_143dd53f0 body=716 status=ok
// SIG undefined FUN_143dd53f0(void)

longlong FUN_143dd53f0(longlong param_1,longlong param_2,ulonglong param_3)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong local_res10;
  
  uVar5 = *(uint *)(param_1 + 0x70) & 0xffff;
  local_res10 = param_2;
  if (uVar5 < 0x1f) {
    if (uVar5 == 0x1e) {
      Curl_pp_sendf(1,"%s: Unhandled state LRS_DEAD_SOCKET\n","lws_read_h1");
      goto LAB_143dd5470;
    }
    if (uVar5 == 0x14) {
      return 0;
    }
    if (uVar5 == 0x15) {
LAB_143dd553b:
      if (*(longlong *)(param_1 + 8) == 0) {
        Curl_pp_sendf(1,"%s: LRS_HEADERS: NULL ah\n","lws_read_h1");
      }
      iVar4 = FUN_143dd7ec0(param_1,&local_res10,param_3);
      lVar3 = local_res10;
      if ((iVar4 != 0) || (iVar4 = FUN_143dd0300(param_1,&local_res10,param_3), iVar4 != 0))
      goto LAB_143dd5470;
      if ((((*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_skt_1468383a0) ||
           ((*(undefined ***)(param_1 + 0x68) == &PTR_s_raw_file_146838450 ||
            (param_3 = param_3 + (lVar3 - local_res10), (*(byte *)(param_1 + 0x1b8) & 1) == 0)))) ||
          (sVar1 = *(short *)(param_1 + 0x70), sVar1 == 0x14)) ||
         ((sVar1 == 0x15 || (sVar1 != 0x16)))) goto LAB_143dd5513;
      *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x48);
      if (*(longlong *)(param_1 + 0x48) != 0) goto LAB_143dd55f4;
    }
    else {
      if (uVar5 != 0x16) {
        if (uVar5 == 0x1d) goto LAB_143dd54db;
        goto LAB_143dd54bb;
      }
LAB_143dd55f4:
      if ((param_3 == 0) || (uVar2 = *(ulonglong *)(param_1 + 0x50), uVar2 == 0))
      goto LAB_143dd5513;
      if (uVar2 < param_3) {
        param_3 = uVar2;
      }
      *(ulonglong *)(param_1 + 0x50) = uVar2 - param_3;
      iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                        (param_1,0xd,*(undefined8 *)(param_1 + 0x130),local_res10,param_3);
      if (iVar4 != 0) goto LAB_143dd5470;
      local_res10 = local_res10 + param_3;
      if (*(longlong *)(param_1 + 0x50) != 0) {
        FUN_143dc6c40(param_1,10,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 0x4b8));
        goto LAB_143dd5513;
      }
    }
    FUN_143dc6c40(param_1,0,0);
    iVar4 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                      (param_1,0xe,*(undefined8 *)(param_1 + 0x130),0,0);
    if (iVar4 == 0) {
      if ((*(byte *)(param_1 + 0x1b8) & 2) != 0) {
        *(undefined2 *)(param_1 + 0x70) = 0x117;
      }
      goto LAB_143dd5513;
    }
    goto LAB_143dd5470;
  }
  if (uVar5 == 0x10f) goto LAB_143dd5513;
  if (uVar5 == 0x117) {
    if (*(undefined ***)(param_1 + 0x68) != &PTR_DAT_1468382b0) {
      if ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0) goto LAB_143dd5513;
      *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
      goto LAB_143dd553b;
    }
LAB_143dd54db:
    iVar4 = FUN_143dd7ec0(param_1,&local_res10);
    if ((iVar4 == 0) &&
       (((*(undefined ***)(param_1 + 0x68) != &PTR_DAT_1468382b0 ||
         ((*(uint *)(param_1 + 0x70) & 0x20000000) == 0)) ||
        (iVar4 = FUN_143dd82d0(param_1,&local_res10,param_3), -1 < iVar4)))) {
LAB_143dd5513:
      return local_res10 - param_2;
    }
  }
  else {
    if (0x118 < uVar5) {
      if (uVar5 < 0x11c) goto LAB_143dd54db;
      if (uVar5 == 0x208) goto LAB_143dd5513;
    }
LAB_143dd54bb:
    Curl_pp_sendf(1,"%s: Unhandled state %d\n","lws_read_h1");
  }
LAB_143dd5470:
  if ((*(byte *)(param_1 + 0x1bc) & 2) == 0) {
    thunk_FUN_143dc4f60(param_1,0,"lws_read_h1 bail");
  }
  return 0xffffffff;
}



// FUNCTION 143dd56c0 FUN_143dd56c0 body=1737 status=ok
// SIG undefined FUN_143dd56c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_143dd56c0(longlong param_1)

{
  longlong lVar1;
  char *******pppppppcVar2;
  int iVar3;
  char *pcVar4;
  longlong lVar5;
  char *******pppppppcVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *******pppppppcVar9;
  uint uVar10;
  longlong lVar11;
  char *******pppppppcVar12;
  bool bVar13;
  undefined1 auStack_1b8 [32];
  char *******local_198;
  undefined8 local_190;
  longlong local_188;
  char *local_180;
  uint local_178 [2];
  undefined8 local_170;
  char *******local_168;
  longlong local_160;
  char local_158;
  char ******local_157 [37];
  undefined1 local_2d [5];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  pppppppcVar9 = (char *******)0x0;
  uVar10 = 0;
  local_178[0] = 0;
  local_170 = 0;
  pppppppcVar12 = (char *******)0x3ea;
  local_180 = (char *)0x0;
  lVar11 = param_1;
  if (((*(byte *)(param_1 + 0x1bc) & 0x40) != 0) &&
     (lVar5 = *(longlong *)(param_1 + 0x118), *(longlong *)(param_1 + 0x118) != 0)) {
    do {
      lVar11 = lVar5;
      lVar5 = *(longlong *)(lVar11 + 8);
    } while (lVar5 != 0);
    lVar11 = lVar11 + -0x120;
  }
  local_188 = param_1;
  FUN_143dcbf50();
  lVar5 = *(longlong *)(local_188 + 8);
  if ((*(byte *)(local_188 + 0x1bc) & 4) == 0) {
    FUN_143dc69d0(local_188,0x10000000,0x117,&PTR_DAT_146838500);
    *(longlong *)(local_188 + 8) = lVar5;
    *(undefined4 *)(lVar5 + 0x3a4) = 0;
  }
  *(undefined4 *)(local_188 + 0x34) = 1;
  if ((*(uint *)(local_188 + 0x1bc) & 0x800) == 0) {
    pcVar4 = (char *)FUN_143dce730(local_188,0xf);
    if ((*(byte *)(local_188 + 0x1bc) & 4) == 0) {
      if (pcVar4 == (char *)0x0) {
        pcVar4 = (char *)FUN_143dce730(local_188,0x4f);
        *(undefined4 *)(local_188 + 0x34) = 0;
        if (pcVar4 == (char *)0x0) {
          local_180 = "HS: URI missing";
          pppppppcVar12 = pppppppcVar9;
          goto LAB_143dd5d19;
        }
      }
    }
    else if (pcVar4 == (char *)0x0) {
      local_180 = "HS: URI missing";
      pppppppcVar12 = pppppppcVar9;
      goto LAB_143dd5d19;
    }
  }
  else {
    pcVar4 = (char *)FUN_143dce730(local_188,0x27);
    if (pcVar4 == (char *)0x0) {
      local_180 = "HS: :status missing";
      pppppppcVar12 = pppppppcVar9;
      goto LAB_143dd5d19;
    }
  }
  iVar3 = atoi(pcVar4);
  if (lVar5 != 0) {
    *(int *)(lVar5 + 0x3a4) = iVar3;
  }
  if ((2 < iVar3 - 0x12dU) && (1 < iVar3 - 0x133U)) {
    uVar10 = *(uint *)(local_188 + 0x1bc);
    if ((uVar10 & 4) == 0) {
      if (((uVar10 & 0xc00) == 0) && (lVar11 == local_188)) {
        if (*(int *)(local_188 + 0x34) == 1) {
          *(uint *)(local_188 + 0x1bc) = uVar10 | 0x80;
        }
        else {
          *(uint *)(local_188 + 0x1bc) = uVar10 | 0x100;
          lVar5 = *(longlong *)(local_188 + 0x118);
          while (lVar5 != 0) {
            lVar1 = *(longlong *)(lVar5 + 8);
            FUN_143dc62f0(lVar5);
            *(uint *)(lVar5 + 0x9c) = *(uint *)(lVar5 + 0x9c) & 0xfffffdff;
            FUN_143dc69d0(lVar5 + -0x120,0x10000000,0x200,&PTR_DAT_146838500);
            *(undefined8 *)(lVar5 + 0x10) = 0;
            lVar5 = lVar1;
          }
        }
      }
      iVar3 = FUN_143dc6320(local_188);
      if (iVar3 == 0) {
        *(uint *)(local_188 + 0x1bc) = *(uint *)(local_188 + 0x1bc) & 0xfffffff7;
        *(undefined4 *)(local_188 + 0x1b0) = 0;
        iVar3 = FUN_143dce760(local_188,0x44);
        if (iVar3 != 0) {
          lVar5 = FUN_143dce730(local_188,0x44);
          pppppppcVar2 = pppppppcVar9;
          do {
            pppppppcVar6 = pppppppcVar2;
            bVar13 = *(char *)((longlong)pppppppcVar6 + lVar5) ==
                     *(char *)(pppppppcVar6 + 0x28b6d66e);
            if (!bVar13) goto LAB_143dd598a;
            pppppppcVar2 = (char *******)((longlong)pppppppcVar6 + 1);
          } while ((char *******)((longlong)pppppppcVar6 + 1) != (char *******)&DAT_00000008);
          bVar13 = *(char *)((longlong)pppppppcVar6 + lVar5) == *(char *)(pppppppcVar6 + 0x28b6d66e)
          ;
LAB_143dd598a:
          *(uint *)(local_188 + 0x1bc) =
               (uint)bVar13 << 3 | *(uint *)(local_188 + 0x1bc) & 0xfffffff7;
          *(undefined1 *)(local_188 + 0x1cb) = 0;
        }
        iVar3 = FUN_143dce760(local_188,0x1b);
        if (iVar3 == 0) {
          if ((*(byte *)(local_188 + 0x1bc) & 8) == 0) {
            *(undefined4 *)(local_188 + 0x34) = 0;
          }
        }
        else {
          uVar7 = FUN_143dce730(local_188,0x1b);
          uVar7 = atoll(uVar7);
          *(undefined8 *)(local_188 + 0x48) = uVar7;
          *(undefined8 *)(local_188 + 0x50) = uVar7;
        }
        local_198 = (char *******)0x0;
        iVar3 = (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))
                          (lVar11,2,*(undefined8 *)(lVar11 + 0x130));
        if (iVar3 == 0) {
          FUN_143dc6c40(local_188,0,0);
          local_198 = (char *******)0x0;
          *(uint *)(local_188 + 0x1b8) = *(uint *)(local_188 + 0x1b8) & 0xfffffdff | 0x100;
          iVar3 = (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))
                            (lVar11,0x2c,*(undefined8 *)(lVar11 + 0x130));
          if (iVar3 == 0) {
            if (lVar11 == local_188) {
              return 0;
            }
            thunk_FUN_143dcdf90(lVar11,0);
            return 0;
          }
          local_180 = "HS: disallowed at ESTABLISHED";
          pppppppcVar12 = pppppppcVar9;
        }
        else {
          local_180 = "HS: disallowed by client filter";
        }
      }
      else {
        Curl_pp_sendf(1,"Problem allocating wsi user mem\n");
        local_180 = "HS: OOM";
      }
    }
    else {
      iVar3 = FUN_143dd7590(local_188,&local_180);
      if ((iVar3 != 2) && (pppppppcVar12 = pppppppcVar9, iVar3 != 3)) {
        return 0;
      }
    }
    goto LAB_143dd5d19;
  }
  pppppppcVar12 = (char *******)FUN_143dce730(local_188,0x3b);
  if (pppppppcVar12 == (char *******)0x0) {
    local_180 = "HS: Redirect code but no Location";
    pppppppcVar12 = pppppppcVar9;
    goto LAB_143dd5d19;
  }
  if (*(char *)pppppppcVar12 == '/') {
    uVar10 = *(uint *)(local_188 + 0x170) & 1;
    local_170 = FUN_143dce730(local_188,0x58);
    local_178[0] = (uint)*(ushort *)(local_188 + 0x1c0);
    pppppppcVar12 = (char *******)((longlong)pppppppcVar12 + 1);
  }
  else {
    pcVar4 = strchr((char *)pppppppcVar12,0x3a);
    if (pcVar4 == (char *)0x0) {
      uVar10 = *(uint *)(local_188 + 0x170) & 1;
      local_170 = FUN_143dce730(local_188,0x58);
      local_178[0] = (uint)*(ushort *)(local_188 + 0x1c0);
      local_168 = local_157;
      uVar7 = FUN_143dce730(local_188,0x59);
      FUN_143dc6f40(&local_158,uVar7,300);
      pcVar4 = strrchr(&local_158,0x2f);
      if (pcVar4 != (char *)0x0) {
        FUN_143dc6f40(pcVar4 + 1,pppppppcVar12,local_2d + -(longlong)pcVar4);
        pppppppcVar12 = local_168;
      }
    }
    else {
      local_198 = (char *******)&local_168;
      iVar3 = FUN_143dc6720(pppppppcVar12,&local_160,&local_170,local_178);
      pppppppcVar2 = pppppppcVar9;
      if (iVar3 != 0) {
        local_180 = "HS: URI did not parse";
        pppppppcVar12 = pppppppcVar9;
        goto LAB_143dd5d19;
      }
      do {
        pppppppcVar6 = pppppppcVar2;
        pppppppcVar2 = pppppppcVar9;
        pppppppcVar12 = local_168;
        if (*(char *)((longlong)pppppppcVar6 + local_160) !=
            *(char *)((longlong)pppppppcVar6 + 0x145dbd06c)) goto LAB_143dd5c00;
        pppppppcVar2 = (char *******)((longlong)pppppppcVar6 + 1);
      } while ((char *******)((longlong)pppppppcVar6 + 1) != (char *******)&DAT_00000004);
      uVar10 = (int)pppppppcVar6 - 2;
    }
  }
  goto LAB_143dd5ca6;
  while (pppppppcVar2 = (char *******)((longlong)pppppppcVar6 + 1),
        (char *******)((longlong)pppppppcVar6 + 1) != (char *******)&DAT_00000006) {
LAB_143dd5c00:
    pppppppcVar6 = pppppppcVar2;
    if (*(char *)((longlong)pppppppcVar6 + local_160) !=
        *(char *)((longlong)pppppppcVar6 + 0x145b67674)) goto LAB_143dd5ca6;
  }
  uVar10 = (int)pppppppcVar6 - 4;
LAB_143dd5ca6:
  local_168 = pppppppcVar12;
  if (((*(byte *)(local_188 + 0x170) & 1) == 0) || (uVar10 != 0)) {
    local_190 = local_170;
    local_198 = local_168;
    lVar5 = FUN_143dcbbd0(&local_188,uVar10,local_170,local_178[0]);
    if (lVar5 != 0) {
      return 0;
    }
    Curl_pp_sendf(1,"Redirect failed\n");
    local_180 = "HS: Redirect failed";
    pppppppcVar12 = pppppppcVar9;
    if (local_188 == 0) {
      return 1;
    }
  }
  else {
    local_180 = "HS: Redirect attempted SSL downgrade";
    pppppppcVar12 = pppppppcVar9;
  }
LAB_143dd5d19:
  if (*(longlong *)(local_188 + 0xa0) != 0) {
    if (local_180 != (char *)0x0) {
      uVar8 = 0xffffffffffffffff;
      do {
        uVar8 = uVar8 + 1;
      } while (local_180[uVar8] != '\0');
      pppppppcVar9 = (char *******)(uVar8 & 0xffffffff);
    }
    local_198 = pppppppcVar9;
    (**(code **)(*(longlong *)(lVar11 + 0xa0) + 8))(lVar11,1,*(undefined8 *)(lVar11 + 0x130));
  }
  *(uint *)(local_188 + 0x1b8) = *(uint *)(local_188 + 0x1b8) | 0x20000;
  thunk_FUN_143dc4f60(local_188,pppppppcVar12,"c hs interp");
  return 1;
}



// FUNCTION 143dd5d90 FUN_143dd5d90 body=1356 status=ok
// SIG undefined FUN_143dd5d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143dd5d90(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  ushort uVar4;
  undefined4 uVar5;
  char *_Str1;
  undefined8 *puVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  char *pcVar13;
  undefined1 auStack_e8 [32];
  char *local_c8;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  char local_a8 [128];
  ulonglong local_28;
  char *pcVar14;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_b0 = param_1[0xf];
  pcVar14 = (char *)0x0;
  pcVar13 = (char *)0x0;
  uVar4 = *(ushort *)((longlong)param_2 + 10);
  lVar12 = (longlong)*(char *)((longlong)param_1 + 0x1c7) * 0xa8 + local_b0;
  _Str1 = *(char **)(lVar12 + 0xa8);
  if ((((uVar4 & 2) != 0) && ((*(byte *)((longlong)param_1 + 0x1bc) & 0x80) != 0)) &&
     (lVar10 = param_1[0x23], param_1[0x23] != 0)) {
    do {
      plVar1 = (longlong *)(lVar10 + 8);
      pcVar13 = (char *)(lVar10 + -0x120);
      if (*(short *)(lVar10 + -0xb0) != 0x12) {
        pcVar13 = pcVar14;
      }
      pcVar14 = pcVar13;
      lVar10 = *plVar1;
    } while (*plVar1 != 0);
    if (pcVar14 == (char *)0x0) {
      return 0;
    }
    FUN_143dd5d90(pcVar14,param_2,param_1);
    FUN_143dcdd70(param_1);
    return 0;
  }
  uVar9 = *(uint *)(param_1 + 0xe) & 0xffff;
  if (uVar9 < 0x202) {
    if (uVar9 == 0x201) {
      lVar12 = FUN_143dcada0(param_1);
      return (ulonglong)((lVar12 != 0) - 1);
    }
    if (uVar9 == 0x11) {
LAB_143dd6077:
      iVar7 = thunk_FUN_143dcd530(param_1,2);
      if (iVar7 != 0) {
        return 0xffffffff;
      }
      if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
LAB_143dd60d9:
        param_1[0x2a] = 0;
        goto LAB_143dd60e0;
      }
      if ((param_1[0x2a] == 0) && (iVar7 = FUN_143dd9860(), iVar7 < 0)) {
        pcVar13 = "bio_create failed";
      }
      else {
        if ((*(byte *)(param_1 + 0x2e) & 1) == 0) goto LAB_143dd60d9;
        iVar7 = FUN_143dd7470();
        if (iVar7 == 0) {
          return 0;
        }
        if (-1 < iVar7) goto LAB_143dd60e0;
        pcVar13 = "lws_ssl_client_connect1 failed";
      }
LAB_143dd610b:
      local_c8 = &DAT_ffffffffffffffff;
      do {
        local_c8 = local_c8 + 1;
      } while (pcVar13[(longlong)local_c8] != '\0');
LAB_143dd6119:
      (**(code **)(param_1[0x14] + 8))(param_1,1,param_1[0x26],pcVar13);
      *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0x20000;
      thunk_FUN_143dc4f60(param_1,0,"cbail3");
      return 0xffffffff;
    }
    if (uVar9 == 0x12) goto LAB_143dd6186;
    if (uVar9 != 0x13) {
      return 0;
    }
    if ((*(byte *)((longlong)param_1 + 0x1bc) & 0x20) != 0) {
      return 0;
    }
  }
  else {
    local_c8 = pcVar14;
    if (uVar9 == 0x202) {
      if ((uVar4 & 0x20) != 0) {
        Curl_pp_sendf(2,"Proxy connection %p (fd=%d) dead\n",param_1,*param_2);
        pcVar13 = pcVar14;
        goto LAB_143dd6119;
      }
      iVar7 = Ordinal_16(param_1[0x2f],_Str1,*(undefined4 *)(local_b0 + 0x4bc),0);
      if (iVar7 < 0) {
        iVar7 = Ordinal_111();
        if (iVar7 == 0x2733) {
          return 0;
        }
        Curl_pp_sendf(1,"ERROR reading from proxy socket\n");
        local_c8 = (char *)0x0;
        pcVar13 = pcVar14;
        goto LAB_143dd6119;
      }
      *(undefined1 *)(*(longlong *)(lVar12 + 0xa8) + 0xd) = 0;
      iVar7 = _guard_xfg_dispatch_icall_nop(_Str1,"HTTP/1.0 200 ");
      if ((iVar7 != 0) && (iVar7 = _guard_xfg_dispatch_icall_nop(_Str1,"HTTP/1.1 200 "), iVar7 != 0)
         ) {
        Curl_pp_sendf(1,"ERROR proxy: %s\n",_Str1);
        local_c8 = (char *)0x0;
        goto LAB_143dd6119;
      }
      FUN_143dc6c40(param_1,0,0);
      goto LAB_143dd6077;
    }
    if (uVar9 != 0x203) {
      if (uVar9 != 0x20a) {
        return 0;
      }
      if (((byte)uVar4 & 0x29) == 0x20) {
        pcVar13 = "Peer hung up";
      }
      else {
        if ((uVar4 & 9) == 0) {
          return 0;
        }
        cVar3 = *(char *)(param_1[1] + 0x3b8);
        while( true ) {
          if (cVar3 == 'c') {
            if (*(char *)(param_1[1] + 0x3b8) != 'c') {
              return 0;
            }
            uVar8 = FUN_143dd56c0(param_1);
            return uVar8;
          }
          uVar8 = (ulonglong)local_b0 >> 0x20;
          local_b0 = CONCAT44((int)uVar8,1);
          iVar7 = FUN_143dd39d0(param_1,local_b8,1);
          if (iVar7 == -4) {
            return 0;
          }
          if (iVar7 + 1U < 2) break;
          iVar7 = FUN_143dce8b0(param_1,local_b8,&local_b0);
          if (iVar7 != 0) {
            Curl_pp_sendf(2,"problems parsing header\n");
            pcVar13 = pcVar14;
            goto LAB_143dd6119;
          }
          cVar3 = *(char *)(param_1[1] + 0x3b8);
        }
        pcVar13 = "read failed";
      }
      goto LAB_143dd610b;
    }
LAB_143dd60e0:
    if ((*(byte *)(param_1 + 0x2e) & 1) == 0) {
      param_1[0x2a] = 0;
    }
    else {
      iVar7 = FUN_143dd74c0(param_1,local_a8,0x80);
      if (iVar7 == 0) {
        return 0;
      }
      if (iVar7 < 0) {
        pcVar13 = local_a8;
        goto LAB_143dd610b;
      }
    }
    *(undefined2 *)(param_1 + 0xe) = 0x12;
    FUN_143dc6c40(param_1,0xb,*(undefined4 *)(local_b0 + 0x4b8));
LAB_143dd6186:
    lVar12 = FUN_143dd62e0(param_1,_Str1);
    if (lVar12 == 0) {
      if ((undefined **)param_1[0xd] == &PTR_s_raw_skt_1468383a0) {
        return 0;
      }
      if ((undefined **)param_1[0xd] == &PTR_s_raw_file_146838450) {
        return 0;
      }
      Curl_pp_sendf(1,"Failed to generate handshake for client\n");
      thunk_FUN_143dc4f60(param_1,0,&DAT_145dbf0d4);
      return 0;
    }
    puVar2 = param_1;
    for (puVar6 = (undefined8 *)param_1[0x24]; puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      puVar2 = puVar6 + -0x22;
    }
    iVar7 = FUN_143dd3b40(puVar2,_Str1,(int)lVar12 - (int)_Str1);
    if (iVar7 == -4) {
      FUN_143dcdd70(param_1);
    }
    else if (iVar7 == -1) {
      thunk_FUN_143dc4f60(param_1,0,&DAT_145dbf0d8);
      return 0;
    }
    if ((*(byte *)((longlong)param_1 + 0x1bc) & 0x20) != 0) {
      uVar11 = 0x12;
      *(undefined2 *)(param_1 + 0xe) = 0x13;
      uVar5 = *(undefined4 *)(local_b0 + 0x4b8);
      goto LAB_143dd5e99;
    }
    *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
    *(undefined2 *)(param_1 + 0xe) = 0x20a;
    if (*(short *)(puVar2 + 0xe) == 0x10) {
      *(uint *)(puVar2 + 0x37) = *(uint *)(puVar2 + 0x37) & 0xfffffffe;
      *(undefined2 *)(puVar2 + 0xe) = 0x20a;
      *(undefined1 *)(puVar2[1] + 0x3b8) = 0x60;
      *(undefined2 *)(puVar2[1] + 0x3b0) = 0;
      *(undefined1 *)(param_1[1] + 0x3b5) = 0;
    }
    FUN_143dc6c40(param_1,4,*(undefined4 *)(param_1[0xf] + 0x4b8));
    FUN_143dcdd70(puVar2);
  }
  uVar11 = 4;
  *(undefined1 *)(param_1[1] + 0x3b8) = 0x60;
  *(undefined2 *)(param_1[1] + 0x3b0) = 0;
  *(undefined2 *)(param_1 + 0xe) = 0x20a;
  uVar5 = *(undefined4 *)(local_b0 + 0x4b8);
LAB_143dd5e99:
  FUN_143dc6c40(param_1,uVar11,uVar5);
  return 0;
}



// FUNCTION 143dd62e0 FUN_143dd62e0 body=649 status=ok
// SIG undefined FUN_143dd62e0(void)

char * FUN_143dd62e0(longlong param_1,char *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *_Format;
  char *local_res10;
  
  local_res10 = param_2;
  lVar2 = FUN_143dce730(param_1,0x57);
  puVar3 = (undefined1 *)FUN_143dce730(param_1);
  if (puVar3 == (undefined1 *)0x0) {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) | 4;
    puVar3 = &DAT_145b250c4;
  }
  else {
    *(uint *)(param_1 + 0x1bc) = *(uint *)(param_1 + 0x1bc) & 0xfffffffb;
  }
  lVar4 = 0;
  do {
    lVar6 = lVar4 + 1;
    if (puVar3[lVar4] != (&DAT_145ba7b90)[lVar4]) {
      uVar5 = FUN_143dce730(param_1,0x59);
      iVar1 = sprintf(local_res10,"%s %s HTTP/1.1\r\n",puVar3,uVar5);
      local_res10 = local_res10 + iVar1;
      iVar1 = sprintf(local_res10,"Pragma: no-cache\r\nCache-Control: no-cache\r\n");
      local_res10 = local_res10 + iVar1;
      uVar5 = FUN_143dce730(param_1,0x5a);
      iVar1 = sprintf(local_res10,"Host: %s\r\n",uVar5);
      local_res10 = local_res10 + iVar1;
      lVar2 = FUN_143dce730(param_1,0x5b);
      if (lVar2 != 0) {
        if ((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x80000) == 0) {
          uVar5 = FUN_143dce730(param_1,0x5b);
          _Format = "Origin: http://%s\r\n";
        }
        else {
          uVar5 = FUN_143dce730(param_1,0x5b);
          _Format = "Origin: %s\r\n";
        }
        iVar1 = sprintf(local_res10,_Format,uVar5);
        local_res10 = local_res10 + iVar1;
      }
      if ((*(byte *)(param_1 + 0x1bc) & 4) != 0) {
        local_res10 = (char *)FUN_143dd7d10(param_1);
      }
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                        (param_1,0x18,*(undefined8 *)(param_1 + 0x130),&local_res10,
                         param_2 + ((ulonglong)*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4bc) -
                                   (longlong)local_res10) + -0xc);
      if (iVar1 != 0) {
        return (char *)0x0;
      }
      iVar1 = sprintf(local_res10,"\r\n");
      return local_res10 + iVar1;
    }
    lVar4 = lVar6;
  } while (lVar6 != 4);
  FUN_143dc6c40(param_1,0,0);
  Curl_pp_sendf(4,"client transition to raw\n");
  if (lVar2 != 0) {
    lVar4 = FUN_143dc70b0(*(undefined8 *)(param_1 + 0x80),lVar2);
    if (lVar4 == 0) {
      Curl_pp_sendf(1,"protocol %s not enabled on vhost\n",lVar2);
      return (char *)0x0;
    }
    FUN_143dc5c70(param_1,lVar4);
  }
  iVar1 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                    (param_1,0x3e,*(undefined8 *)(param_1 + 0x130),0,0);
  if (iVar1 != 0) {
    return (char *)0x0;
  }
  FUN_143dc69d0(param_1,0,0x117,&PTR_s_raw_skt_1468383a0);
  thunk_FUN_143dcdf90(param_1,1);
  return (char *)0x0;
}



// FUNCTION 143dd6570 FUN_143dd6570 body=164 status=ok
// SIG undefined FUN_143dd6570(void)

undefined8
FUN_143dd6570(undefined8 param_1,char *param_2,void *param_3,int param_4,longlong *param_5,
             undefined1 *param_6)

{
  undefined1 *puVar1;
  size_t _Size;
  
  if (param_2 != (char *)0x0) {
    puVar1 = (undefined1 *)*param_5;
    for (; (puVar1 < param_6 && (*param_2 != '\0')); param_2 = param_2 + 1) {
      *(char *)*param_5 = *param_2;
      *param_5 = *param_5 + 1;
      puVar1 = (undefined1 *)*param_5;
    }
    if ((undefined1 *)*param_5 == param_6) {
      return 1;
    }
    *(undefined1 *)*param_5 = 0x20;
    *param_5 = *param_5 + 1;
  }
  _Size = (size_t)param_4;
  if ((undefined1 *)(*param_5 + _Size + 3) < param_6) {
    _guard_xfg_dispatch_icall_nop((void *)*param_5,param_3,_Size);
    *param_5 = *param_5 + _Size;
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    return 0;
  }
  return 1;
}



// FUNCTION 143dd6620 FUN_143dd6620 body=34 status=ok
// SIG undefined FUN_143dd6620(void)

undefined8
FUN_143dd6620(undefined8 param_1,uint param_2,void *param_3,int param_4,longlong *param_5,
             undefined1 *param_6)

{
  undefined1 *puVar1;
  char *pcVar2;
  size_t _Size;
  
  if ((0x57 < param_2) || (pcVar2 = (&PTR_DAT_145dbf330)[(int)param_2], pcVar2 == (char *)0x0)) {
    return 1;
  }
  if (pcVar2 != (char *)0x0) {
    puVar1 = (undefined1 *)*param_5;
    for (; (puVar1 < param_6 && (*pcVar2 != '\0')); pcVar2 = pcVar2 + 1) {
      *(char *)*param_5 = *pcVar2;
      *param_5 = *param_5 + 1;
      puVar1 = (undefined1 *)*param_5;
    }
    if ((undefined1 *)*param_5 == param_6) {
      return 1;
    }
    *(undefined1 *)*param_5 = 0x20;
    *param_5 = *param_5 + 1;
  }
  _Size = (size_t)param_4;
  if ((undefined1 *)(*param_5 + _Size + 3) < param_6) {
    _guard_xfg_dispatch_icall_nop((void *)*param_5,param_3,_Size);
    *param_5 = *param_5 + _Size;
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    return 0;
  }
  return 1;
}



// FUNCTION 143dd6650 FUN_143dd6650 body=239 status=ok
// SIG undefined FUN_143dd6650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143dd6650(longlong param_1,undefined8 param_2,longlong *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  bool bVar4;
  undefined1 auStack_68 [32];
  char local_48 [24];
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar2 = sprintf(local_48,"%llu",param_2);
  _Size = (size_t)iVar2;
  puVar1 = (undefined1 *)*param_3;
  for (pcVar3 = "content-length:"; (puVar1 < param_4 && (*pcVar3 != '\0')); pcVar3 = pcVar3 + 1) {
    *(char *)*param_3 = *pcVar3;
    *param_3 = *param_3 + 1;
    puVar1 = (undefined1 *)*param_3;
  }
  if ((undefined1 *)*param_3 == param_4) {
    bVar4 = true;
  }
  else {
    *(undefined1 *)*param_3 = 0x20;
    *param_3 = *param_3 + 1;
    bVar4 = (undefined1 *)(*param_3 + _Size + 3) < param_4;
    if (bVar4) {
      _guard_xfg_dispatch_icall_nop((void *)*param_3,local_48,_Size);
      *param_3 = *param_3 + _Size;
      *(undefined1 *)*param_3 = 0xd;
      *param_3 = *param_3 + 1;
      *(undefined1 *)*param_3 = 10;
      *param_3 = *param_3 + 1;
    }
    bVar4 = !bVar4;
  }
  if (!bVar4) {
    *(undefined8 *)(param_1 + 0x38) = param_2;
    *(undefined8 *)(param_1 + 0x40) = param_2;
  }
  return bVar4;
}



// FUNCTION 143dd6740 FUN_143dd6740 body=530 status=ok
// SIG undefined FUN_143dd6740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd6740(longlong param_1,uint param_2,longlong *param_3,ulonglong param_4)

{
  undefined8 *puVar1;
  int iVar2;
  size_t _Size;
  char *pcVar3;
  uint uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  ulonglong local_80;
  char local_78 [64];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar4 = param_2 & 0xffff;
  pcVar3 = "";
  if (uVar4 - 400 < 0x12) {
    pcVar3 = (&PTR_s_Bad_Request_145dbf5f0)[uVar4 - 400];
  }
  if (uVar4 - 500 < 6) {
    pcVar3 = (&PTR_s_Internal_Server_Error_145dbf680)[uVar4 - 500];
  }
  if (uVar4 == 100) {
    local_88 = (longlong *)"Continue";
  }
  else if (uVar4 == 200) {
    local_88 = (longlong *)"OK";
  }
  else if (uVar4 == 0x130) {
    local_88 = (longlong *)"Not Modified";
  }
  else {
    local_88 = (longlong *)"Redirect";
    if (99 < uVar4 - 300) {
      local_88 = (longlong *)pcVar3;
    }
  }
  if (*(uint *)(param_1 + 0x30) < 3) {
    pcVar3 = (&PTR_s_HTTP_1_0_145dbf6b0)[(int)*(uint *)(param_1 + 0x30)];
  }
  else {
    pcVar3 = "HTTP/1.0";
  }
  iVar2 = sprintf(local_78,"%s %u %s",pcVar3);
  _Size = (size_t)iVar2;
  if (*param_3 + _Size + 3 < param_4) {
    _guard_xfg_dispatch_icall_nop((void *)*param_3,local_78,_Size);
    *param_3 = *param_3 + _Size;
    *(undefined1 *)*param_3 = 0xd;
    *param_3 = *param_3 + 1;
    *(undefined1 *)*param_3 = 10;
    *param_3 = *param_3 + 1;
    for (puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x80) + 0x188); local_88 = param_3,
        local_80 = param_4, puVar1 != (undefined8 *)0x0; puVar1 = (undefined8 *)*puVar1) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(puVar1[3] + lVar5) != '\0');
      iVar2 = FUN_143dd6570(param_1,puVar1[2]);
      if (iVar2 != 0) {
        return 1;
      }
    }
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x488);
    if ((((lVar5 == 0) || ((param_2 >> 0x1e & 1) != 0)) ||
        (iVar2 = FUN_143dd6570(param_1,"server:",lVar5,
                               (int)*(short *)(*(longlong *)(param_1 + 0x78) + 0x4e2)), iVar2 == 0))
       && (((*(uint *)(*(longlong *)(param_1 + 0x80) + 0x22c) & 0x8000) == 0 ||
           (local_88 = param_3, local_80 = param_4,
           iVar2 = FUN_143dd6570(param_1,"Strict-Transport-Security:",
                                 "max-age=15768000 ; includeSubDomains",0x24), iVar2 == 0)))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143dd6960 FUN_143dd6960 body=36 status=ok
// SIG undefined FUN_143dd6960(void)

undefined8 FUN_143dd6960(undefined8 param_1,longlong *param_2,longlong param_3)

{
  if (param_3 - *param_2 < 3) {
    return 1;
  }
  *(undefined1 *)*param_2 = 0xd;
  *param_2 = *param_2 + 1;
  *(undefined1 *)*param_2 = 10;
  *param_2 = *param_2 + 1;
  return 0;
}



// FUNCTION 143dd6990 FUN_143dd6990 body=287 status=ok
// SIG undefined FUN_143dd6990(void)

undefined8
FUN_143dd6990(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
             longlong *param_5,longlong param_6)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_5;
  iVar2 = FUN_143dd6740(param_1,param_2,param_5,param_6);
  if ((((iVar2 == 0) &&
       (iVar2 = FUN_143dd6570(param_1,"location:",param_3,param_4,param_5,param_6), iVar2 == 0)) &&
      (iVar2 = FUN_143dd6570(param_1,"content-type:","text/html",9,param_5,param_6), iVar2 == 0)) &&
     ((iVar2 = FUN_143dd6570(param_1,"content-length:",&DAT_145b0a5b8,1,param_5,param_6), iVar2 == 0
      && (2 < param_6 - *param_5)))) {
    *(undefined1 *)*param_5 = 0xd;
    *param_5 = *param_5 + 1;
    *(undefined1 *)*param_5 = 10;
    *param_5 = *param_5 + 1;
    uVar3 = FUN_143dcd250(param_1,lVar1,*param_5 - lVar1,0x88);
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



// FUNCTION 143dd6ab0 FUN_143dd6ab0 body=724 status=ok
// SIG undefined FUN_143dd6ab0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143dd6ab0(longlong param_1,uint param_2,undefined1 *param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined1 auStack_98 [32];
  char **local_78;
  char *local_70;
  char *local_68;
  char local_60 [24];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  uVar13 = (ulonglong)param_2;
  lVar4 = FUN_1407891a0();
  lVar9 = *(longlong *)(((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + lVar4);
  pcVar12 = (char *)(lVar9 + 0x10);
  pcVar10 = (char *)(lVar9 + (ulonglong)*(uint *)(lVar4 + 0x4bc));
  local_68 = pcVar12;
  if (*(longlong *)(param_1 + 0x80) == 0) {
    Curl_pp_sendf(1,"%s: wsi not bound to vhost\n","lws_return_http_status");
  }
  else {
    lVar9 = -1;
    if ((((*(uint *)(param_1 + 0x1b8) & 0x40000000) == 0) &&
        (lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x108), lVar4 != 0)) &&
       (param_2 == 0x194)) {
      lVar11 = -1;
      do {
        lVar11 = lVar11 + 1;
      } while (*(char *)(lVar4 + lVar11) != '\0');
      local_78 = &local_68;
      local_70 = pcVar10;
      iVar3 = FUN_143dd6990(param_1,0x12e);
      if (0 < iVar3) {
        return false;
      }
    }
    puVar8 = &DAT_145af3922;
    if (param_3 != (undefined1 *)0x0) {
      puVar8 = param_3;
    }
    local_68 = pcVar12;
    iVar3 = FUN_143dd6740(param_1,uVar13,&local_68,pcVar10);
    if (iVar3 == 0) {
      pcVar6 = local_68;
      if (local_68 < pcVar10) {
        do {
          if (pcVar6[(longlong)"content-type:" - (longlong)local_68] == '\0') break;
          *pcVar6 = pcVar6[(longlong)"content-type:" - (longlong)local_68];
          pcVar6 = pcVar6 + 1;
        } while (pcVar6 < pcVar10);
      }
      bVar2 = false;
      if (pcVar6 == pcVar10) {
        pcVar7 = pcVar6;
        bVar1 = true;
      }
      else {
        *pcVar6 = ' ';
        pcVar7 = pcVar6 + 1;
        if (pcVar6 + 0xd < pcVar10) {
          builtin_strncpy(pcVar6 + 1,"text/html\r\n",0xb);
          pcVar7 = pcVar6 + 0xc;
          bVar1 = bVar2;
        }
        else {
          bVar1 = true;
        }
      }
      if (!bVar1) {
        iVar3 = sprintf(local_60,"%d",uVar13);
        do {
          lVar9 = lVar9 + 1;
        } while (puVar8[lVar9] != '\0');
        iVar3 = sprintf(local_60,"%d",(ulonglong)(uint)(iVar3 + 0x23 + (int)lVar9));
        if (pcVar7 < pcVar10) {
          lVar9 = (longlong)"content-length:" - (longlong)pcVar7;
          do {
            if (pcVar7[lVar9] == '\0') break;
            *pcVar7 = pcVar7[lVar9];
            pcVar7 = pcVar7 + 1;
          } while (pcVar7 < pcVar10);
        }
        if (pcVar7 == pcVar10) {
          bVar2 = true;
        }
        else {
          *pcVar7 = ' ';
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar7 + iVar3;
          if (pcVar6 + 3 < pcVar10) {
            _guard_xfg_dispatch_icall_nop(pcVar7,local_60,(longlong)iVar3);
            pcVar6[0] = '\r';
            pcVar6[1] = '\n';
            pcVar7 = pcVar6 + 2;
          }
          else {
            bVar2 = true;
          }
        }
        if ((!bVar2) && (2 < (longlong)pcVar10 - (longlong)pcVar7)) {
          pcVar7[0] = '\r';
          pcVar7[1] = '\n';
          pcVar7 = pcVar7 + 2;
          local_78 = (char **)puVar8;
          iVar3 = FUN_143dc6cb0(pcVar7,pcVar10 + (-1 - (longlong)pcVar7),
                                "<html><body><h1>%u</h1>%s</body></html>",uVar13);
          iVar5 = ((int)pcVar7 + iVar3) - (int)pcVar12;
          iVar3 = FUN_143dcd250(param_1,pcVar12,(longlong)iVar5,3);
          return iVar3 != iVar5;
        }
      }
    }
  }
  return true;
}



// FUNCTION 143dd6d90 FUN_143dd6d90 body=23 status=ok
// SIG undefined FUN_143dd6d90(void)

undefined * FUN_143dd6d90(uint param_1)

{
  if (0x57 < param_1) {
    return (undefined *)0x0;
  }
  return (&PTR_DAT_145dbf330)[(int)param_1];
}



// FUNCTION 143dd6db0 FUN_143dd6db0 body=67 status=ok
// SIG undefined FUN_143dd6db0(void)

undefined8
FUN_143dd6db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,longlong param_6)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = SSL_select_next_proto
                    (param_2,param_3,param_6,*(undefined1 *)(param_6 + 0x17),param_4,param_5);
  uVar2 = 0;
  if (iVar1 != 1) {
    uVar2 = 3;
  }
  return uVar2;
}



// FUNCTION 143dd6e00 FUN_143dd6e00 body=101 status=ok
// SIG undefined FUN_143dd6e00(void)

void FUN_143dd6e00(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x148) + 0x3f8);
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x1c0);
  }
  uVar1 = FUN_143dd4470(lVar2,param_1 + 0x1f0,0x16);
  *(undefined1 *)(param_1 + 0x207) = uVar1;
  FUN_143ca42f0(*(undefined8 *)(param_1 + 0x1b0),FUN_143dd6db0,param_1 + 0x1f0);
  return;
}



// FUNCTION 143dd6e70 FUN_143dd6e70 body=313 status=ok
// SIG undefined FUN_143dd6e70(void)

undefined8 FUN_143dd6e70(int *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_1d8 [120];
  undefined8 local_160;
  longlong local_158;
  
  uVar2 = *(undefined8 *)(param_2 + 0x148);
  if (*(longlong *)(param_1 + 0xc) != 0) {
    *(uint *)(param_2 + 0x22c) = *(uint *)(param_2 + 0x22c) | 0x1000000;
  }
  if (*param_1 != -1) {
    *(uint *)(param_2 + 0x208) = *(byte *)(param_2 + 0x22f) & 1;
    if (((*(byte *)(param_2 + 0x22f) & 1) != 0) && (*(longlong *)(param_1 + 0x12) != 0)) {
      Curl_pp_sendf(4," SSL ciphers: \'%s\'\n");
    }
    Curl_pp_sendf(4);
  }
  _guard_xfg_dispatch_icall_nop(local_1d8,0,0x1d0);
  if ((param_1[0x19] & 0x1008U) == 0x1008) {
    *(undefined4 *)(param_2 + 0x20c) = 1;
  }
  if (*(int *)(param_2 + 0x208) == 0) {
LAB_143dd6f92:
    uVar2 = 0;
  }
  else {
    local_160 = uVar2;
    local_158 = param_2;
    iVar1 = FUN_143dd9490(param_1,param_2,local_1d8);
    if (iVar1 == 0) {
      FUN_143dd92d0(param_2);
      iVar1 = (**(code **)(*(longlong *)(param_2 + 0x170) + 8))
                        (local_1d8,0x16,*(undefined8 *)(param_2 + 0x1b0),param_2,0);
      if (iVar1 == 0) {
        if (*(int *)(param_2 + 0x208) != 0) {
          FUN_143dd6e00(param_2);
        }
        goto LAB_143dd6f92;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143dd6fb0 FUN_143dd6fb0 body=719 status=ok
// SIG undefined FUN_143dd6fb0(void)

int FUN_143dd6fb0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  int *piVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x78);
  lVar5 = (longlong)*(char *)(param_1 + 0x1c7) * 0xa8;
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x208) == 0) {
LAB_143dd7257:
    iVar2 = 0;
  }
  else {
    if (*(short *)(param_1 + 0x70) == 0x207) {
      if (*(longlong *)(param_1 + 0x150) != 0) {
        Curl_pp_sendf(1,"%s: leaking ssl\n","lws_server_socket_service_ssl");
      }
      if ((*(int *)(lVar1 + 0x4c8) == 0) || (*(int *)(lVar1 + 0x4cc) < *(int *)(lVar1 + 0x4c8))) {
        iVar2 = FUN_143dd9340(param_1,param_2);
        if (iVar2 == 0) {
          if ((*(int *)(lVar1 + 0x4c8) != 0) &&
             (*(int *)(lVar1 + 0x4cc) = *(int *)(lVar1 + 0x4cc) + 1,
             *(int *)(lVar1 + 0x4cc) == *(int *)(lVar1 + 0x4c8))) {
            FUN_143dd44e0(lVar1,0);
          }
          *(undefined2 *)(param_1 + 0x70) = 0x208;
          iVar2 = FUN_143dcd320(lVar1,param_1);
          if (iVar2 == 0) {
            FUN_143dc6c40(param_1,9,*(undefined4 *)(lVar1 + 0x4b8));
            goto LAB_143dd70e9;
          }
          Curl_pp_sendf(1,"%s: failed to insert into fds\n","lws_server_socket_service_ssl");
        }
        else if (param_2 != -1) {
          Ordinal_3(param_2);
        }
      }
      else {
        Curl_pp_sendf(4,"unable to deal with SSL connection\n");
      }
    }
    else {
      if (*(short *)(param_1 + 0x70) != 0x208) {
        return 0;
      }
LAB_143dd70e9:
      iVar2 = thunk_FUN_143dcd530(param_1,2);
      if (iVar2 == 0) {
        if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x20c) == 0) {
LAB_143dd71ce:
          piVar3 = _errno();
          *piVar3 = 0;
          iVar2 = FUN_143dd8d90(param_1);
          if (iVar2 == -1) {
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x80;
            goto LAB_143dd7265;
          }
          if (iVar2 != 0) goto LAB_143dd7257;
        }
        else {
          iVar2 = Ordinal_16(*(undefined8 *)(param_1 + 0x178),*(undefined8 *)(lVar5 + 0xa8 + lVar1),
                             *(undefined4 *)(lVar1 + 0x4bc),2);
          if ((iVar2 < 1) || (**(byte **)(lVar5 + 0xa8 + lVar1) < 0x20)) {
            if (iVar2 == 0) goto LAB_143dd7265;
            if ((iVar2 < 0) &&
               ((iVar2 = Ordinal_111(), iVar2 == 0x2733 || (iVar2 = Ordinal_111(), iVar2 == 0x2733))
               )) {
              iVar2 = thunk_FUN_143dcd530(param_1,0,9);
              return -(uint)(iVar2 != 0);
            }
            goto LAB_143dd71ce;
          }
          *(undefined4 *)(param_1 + 0x170) = 0;
          FUN_143dd8d60(param_1);
          *(undefined8 *)(param_1 + 0x150) = 0;
          if ((*(uint *)(lVar1 + 0x4b0) & 0x1800) == 0x1800) {
            *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) | 1;
          }
        }
        for (lVar5 = *(longlong *)(lVar1 + 0x378); lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x150))
        {
          if ((((*(byte *)(lVar5 + 0x248) & 2) == 0) && (*(longlong *)(param_1 + 0x150) != 0)) &&
             (lVar4 = FUN_143dd3e80(param_1), *(longlong *)(lVar5 + 0x1b0) == lVar4)) {
            *(longlong *)(param_1 + 0x80) = lVar5;
            break;
          }
        }
        FUN_143dc6c40(param_1,3,*(undefined4 *)(lVar1 + 0x4b8));
        *(undefined2 *)(param_1 + 0x70) = 0x117;
        iVar2 = FUN_143dd7280(param_1);
        if (iVar2 == 0) goto LAB_143dd7257;
      }
      else {
        Curl_pp_sendf(1,"%s: lws_change_pollfd failed\n","lws_server_socket_service_ssl");
      }
    }
LAB_143dd7265:
    iVar2 = 1;
  }
  return iVar2;
}



// FUNCTION 143dd7280 FUN_143dd7280 body=181 status=ok
// SIG undefined FUN_143dd7280(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143dd7280(longlong param_1)

{
  ulonglong uVar1;
  undefined1 auStack_58 [32];
  uint local_38 [2];
  void *local_30;
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  local_30 = (void *)0x0;
  SSL_get0_alpn_selected(*(undefined8 *)(param_1 + 0x150),&local_30,local_38);
  if (local_38[0] == 0) {
    return;
  }
  if (9 < local_38[0]) {
    local_38[0] = 9;
  }
  uVar1 = (ulonglong)local_38[0];
  _guard_xfg_dispatch_icall_nop(local_28,local_30,(ulonglong)local_38[0]);
  if (uVar1 < 10) {
    *(uint *)(param_1 + 0x170) = *(uint *)(param_1 + 0x170) | 1;
    local_28[uVar1] = 0;
    FUN_143dca860(param_1,local_28);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_rangecheckfailure();
}



// FUNCTION 143dd7340 FUN_143dd7340 body=293 status=ok
// SIG undefined FUN_143dd7340(void)

undefined8 FUN_143dd7340(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_1d8 [120];
  undefined8 local_160;
  longlong local_158;
  
  if ((*(uint *)(param_2 + 0x22c) & 0x400000) == 0) {
    lVar4 = *(longlong *)(param_1 + 0x48);
    if (*(longlong *)(param_1 + 0x128) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x128);
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    if (*(longlong *)(param_1 + 0x110) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x110);
    }
    lVar5 = *(longlong *)(param_1 + 0x38);
    if (*(longlong *)(param_1 + 0x118) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x118);
    }
    lVar6 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x120) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x120);
    }
    lVar1 = *(longlong *)(param_1 + 0x80);
    if (lVar1 != 0) {
      *(uint *)(param_2 + 0x214) = *(uint *)(param_2 + 0x214) | 1;
      *(longlong *)(param_2 + 0x1b8) = lVar1;
      return 0;
    }
    iVar2 = FUN_143dd9cb0(param_2,param_1,lVar4,lVar6,lVar3,lVar5);
    if (iVar2 != 0) {
      return 1;
    }
    Curl_pp_sendf(4,"created client ssl context for %s\n",*(undefined8 *)(param_2 + 0x160));
    _guard_xfg_dispatch_icall_nop(local_1d8,0,0x1d0);
    local_160 = *(undefined8 *)(param_2 + 0x148);
    local_158 = param_2;
    (**(code **)(*(longlong *)(param_2 + 0x170) + 8))
              (local_1d8,0x15,*(undefined8 *)(param_2 + 0x1b8),0,0);
  }
  return 0;
}



// FUNCTION 143dd7470 FUN_143dd7470 body=78 status=ok
// SIG undefined FUN_143dd7470(void)

undefined8 FUN_143dd7470(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_143dd9b90();
  if (iVar1 == -3) {
    FUN_143dcdd70(param_1);
  }
  else if (iVar1 != -2) {
    if (iVar1 == -1) {
      return 0xffffffff;
    }
    if (iVar1 != 0) {
      return 0;
    }
    return 1;
  }
  *(undefined2 *)(param_1 + 0x70) = 0x203;
  return 0;
}



// FUNCTION 143dd74c0 FUN_143dd74c0 body=156 status=ok
// SIG undefined FUN_143dd74c0(void)

undefined4 FUN_143dd74c0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(short *)(param_1 + 0x70) == 0x203) {
    iVar1 = FUN_143dd9b90();
    if (iVar1 != -4) {
      if (iVar1 == -3) {
        FUN_143dcdd70(param_1);
      }
      else if (iVar1 != -2) {
        if (iVar1 == -1) {
          FUN_143dc6cb0(param_2,(longlong)param_3,"client connect failed");
          return 0xffffffff;
        }
        goto LAB_143dd752a;
      }
      *(undefined2 *)(param_1 + 0x70) = 0x203;
    }
    uVar2 = 0;
  }
  else {
LAB_143dd752a:
    iVar1 = FUN_143dd9ac0(param_1,param_2,param_3);
    uVar2 = 1;
    if (iVar1 != 0) {
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}



// FUNCTION 143dd7560 FUN_143dd7560 body=38 status=ok
// SIG undefined FUN_143dd7560(void)

char FUN_143dd7560(undefined8 param_1,longlong param_2)

{
  int iVar1;
  
  iVar1 = FUN_143dc5e80(*(undefined8 *)(param_2 + 0x78),0x47,0);
  return (iVar1 != 0) + '\x04';
}



// FUNCTION 143dd7590 FUN_143dd7590 body=1783 status=ok
// SIG undefined FUN_143dd7590(void)

undefined4 FUN_143dd7590(longlong param_1,undefined8 *param_2)

{
  char *pcVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int local_res8 [2];
  undefined4 uVar14;
  
  lVar5 = *(longlong *)(param_1 + 0x78);
  bVar6 = false;
  if ((*(uint *)(param_1 + 0x1bc) & 0x800) == 0) {
    iVar7 = *(int *)(*(longlong *)(param_1 + 8) + 0x3a4);
    if (iVar7 == 0x191) {
      Curl_pp_sendf(2,"lws_client_handshake: got bad HTTP response \'%d\'\n");
      *param_2 = "HS: ws upgrade unauthorized";
    }
    else if (iVar7 == 0x65) {
      iVar7 = FUN_143dce760(param_1,0xd);
      if (iVar7 == 0) {
        *param_2 = "HS: ACCEPT missing";
      }
      else {
        pcVar8 = (char *)FUN_143dce730(param_1,5);
        if (pcVar8 == (char *)0x0) {
          *param_2 = "HS: UPGRADE missing";
        }
        else {
          cVar3 = *pcVar8;
          pcVar9 = pcVar8;
          while (cVar3 != '\0') {
            iVar7 = tolower((int)*pcVar9);
            *pcVar9 = (char)iVar7;
            pcVar9 = pcVar9 + 1;
            cVar3 = *pcVar9;
          }
          iVar7 = _guard_xfg_dispatch_icall_nop(pcVar8,"websocket");
          if (iVar7 == 0) {
            pcVar8 = (char *)FUN_143dce730(param_1,4);
            if (pcVar8 == (char *)0x0) {
              *param_2 = "HS: CONNECTION missing";
            }
            else {
              cVar3 = *pcVar8;
              pcVar9 = pcVar8;
              while (cVar3 != '\0') {
                iVar7 = tolower((int)*pcVar9);
                *pcVar9 = (char)iVar7;
                pcVar9 = pcVar9 + 1;
                cVar3 = *pcVar9;
              }
              lVar11 = 0;
              do {
                lVar13 = lVar11;
                if (pcVar8[lVar13] != "upgrade"[lVar13]) {
                  Curl_pp_sendf(2,"lws_client_int_s_hs: bad header %s\n",pcVar8);
                  *param_2 = "HS: UPGRADE malformed";
                  return 3;
                }
                lVar11 = lVar13 + 1;
              } while (lVar13 + 1 != 8);
              pcVar8 = (char *)FUN_143dce730(param_1,(int)lVar13 + 0x50);
              iVar7 = FUN_143dce760(param_1,0xc);
              if (iVar7 == 0) {
                lVar11 = *(longlong *)(param_1 + 0x80);
                local_res8[0] = 0;
                *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(lVar11 + 0x170);
              }
              else {
                pcVar9 = (char *)FUN_143dce730(param_1,0xc);
                lVar11 = -1;
                do {
                  lVar11 = lVar11 + 1;
                } while (pcVar9[lVar11] != '\0');
                if (pcVar8 == (char *)0x0) {
LAB_143dd7c3c:
                  *param_2 = "HS: PROTOCOL malformed";
                  return 2;
                }
LAB_143dd7865:
                if (*pcVar8 != '\0') {
                  if (bVar6) goto LAB_143dd78c9;
                  iVar7 = strncmp(pcVar8,pcVar9,(longlong)(int)lVar11);
                  if ((iVar7 == 0) &&
                     ((pcVar8[(int)lVar11] == ',' || (pcVar8[(int)lVar11] == '\0')))) {
                    bVar6 = true;
                  }
                  else {
                    do {
                      cVar3 = *pcVar8;
                      if (cVar3 == '\0') goto LAB_143dd7865;
                      pcVar8 = pcVar8 + 1;
                    } while (cVar3 != ',');
                    cVar3 = *pcVar8;
                    while ((cVar3 != '\0' && (cVar3 == ' '))) {
                      pcVar1 = pcVar8 + 1;
                      pcVar8 = pcVar8 + 1;
                      cVar3 = *pcVar1;
                    }
                  }
                  goto LAB_143dd7865;
                }
                if (!bVar6) goto LAB_143dd7c3c;
LAB_143dd78c9:
                local_res8[0] = 0;
                uVar12 = *(uint *)(param_1 + 0x70) & 0x10000000;
                if (uVar12 == 0) {
                  *(undefined8 *)(param_1 + 0xa0) = 0;
                }
                lVar11 = *(longlong *)(param_1 + 0x80);
                if (*(longlong *)(*(longlong *)(lVar11 + 0x170) + 8) != 0) {
                  do {
                    if (*(longlong *)(param_1 + 0xa0) == 0) {
                      pcVar8 = pcVar9;
                      do {
                        cVar3 = *pcVar8;
                        cVar4 = pcVar8[*(longlong *)
                                        ((longlong)local_res8[0] * 0x38 +
                                        *(longlong *)(lVar11 + 0x170)) - (longlong)pcVar9];
                        if (cVar3 != cVar4) break;
                        pcVar8 = pcVar8 + 1;
                      } while (cVar4 != '\0');
                      if (cVar3 == cVar4) {
                        *(longlong *)(param_1 + 0xa0) =
                             (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170);
                        break;
                      }
                    }
                    local_res8[0] = local_res8[0] + 1;
                  } while (*(longlong *)
                            ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) !=
                           0);
                }
                if (*(longlong *)
                     ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) == 0) {
                  if (uVar12 == 0) {
                    *param_2 = "HS: Cannot match protocol";
                    return 2;
                  }
                  local_res8[0] = 0;
                  if (*(longlong *)(*(longlong *)(lVar11 + 0x170) + 8) != 0) {
                    do {
                      if (*(undefined8 **)(param_1 + 0xa0) != (undefined8 *)0x0) {
                        pcVar8 = (char *)**(undefined8 **)(param_1 + 0xa0);
                        lVar13 = *(longlong *)
                                  ((longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170)) -
                                 (longlong)pcVar8;
                        do {
                          cVar3 = *pcVar8;
                          cVar4 = pcVar8[lVar13];
                          if (cVar3 != cVar4) break;
                          pcVar8 = pcVar8 + 1;
                        } while (cVar4 != '\0');
                        if (cVar3 == cVar4) {
                          *(longlong *)(param_1 + 0xa0) =
                               (longlong)local_res8[0] * 0x38 + *(longlong *)(lVar11 + 0x170);
                          break;
                        }
                      }
                      local_res8[0] = local_res8[0] + 1;
                    } while (*(longlong *)
                              ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170))
                             != 0);
                  }
                  if (*(longlong *)
                       ((longlong)local_res8[0] * 0x38 + 8 + *(longlong *)(lVar11 + 0x170)) == 0) {
                    if (*(undefined8 **)(param_1 + 0xa0) == (undefined8 *)0x0) {
                      Curl_pp_sendf(1,"No protocol on client\n");
                      return 2;
                    }
                    Curl_pp_sendf(1,"Failed to match protocol %s\n",
                                  **(undefined8 **)(param_1 + 0xa0));
                    return 2;
                  }
                }
              }
              plVar2 = (longlong *)(param_1 + 0xb0);
              lVar13 = (longlong)local_res8[0] * 8;
              *(longlong *)(param_1 + 0xa8) = *(longlong *)(lVar11 + 400) + lVar13;
              *plVar2 = *(longlong *)(lVar13 + *(longlong *)(lVar11 + 400));
              *(longlong *)(lVar13 + *(longlong *)(lVar11 + 400)) = param_1;
              if (*plVar2 != 0) {
                *(longlong **)(*plVar2 + 0xa8) = plVar2;
              }
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 0x20000000;
              pcVar9 = (char *)FUN_143dce730(param_1,0xd);
              pcVar8 = pcVar9;
              do {
                cVar3 = *pcVar8;
                cVar4 = pcVar8[(*(longlong *)(param_1 + 8) + 0x37f) - (longlong)pcVar9];
                if (cVar3 != cVar4) break;
                pcVar8 = pcVar8 + 1;
              } while (cVar4 != '\0');
              if (cVar3 != cVar4) {
                Curl_pp_sendf(2,"lws_client_int_s_hs: accept \'%s\' wrong vs \'%s\'\n",pcVar9);
                *param_2 = "HS: Accept hash wrong";
                return 2;
              }
              iVar7 = FUN_143dc6320(param_1);
              if (iVar7 != 0) {
                Curl_pp_sendf(1,"Problem allocating wsi user mem\n");
                *param_2 = "HS: OOM";
                return 2;
              }
              uVar14 = 0;
              iVar7 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                                (param_1,2,*(undefined8 *)(param_1 + 0x130),0,0);
              if (iVar7 != 0) {
                *param_2 = "HS: Rejected by filter cb";
                return 2;
              }
              FUN_143dc6c40(param_1,0,0);
              thunk_FUN_143dcdf90(param_1,0);
              FUN_143dc69d0(param_1,0x10000000,0x117,&PTR_DAT_1468382b0);
              FUN_143dc8220(param_1);
              *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffdff | 0x100;
              iVar7 = *(int *)(*(longlong *)(param_1 + 0xa0) + 0x18);
              if (iVar7 == 0) {
                iVar7 = *(int *)(lVar5 + 0x4bc);
              }
              local_res8[0] = iVar7 + 0x10;
              uVar10 = thunk_FUN_143dd4bc0(0,(longlong)(iVar7 + 0x14),"client frame buffer");
              **(undefined8 **)(param_1 + 0x60) = uVar10;
              if (**(longlong **)(param_1 + 0x60) == 0) {
                Curl_pp_sendf(1,"Out of Mem allocating rx buffer %d\n",local_res8[0]);
                *param_2 = "HS: OOM";
                return 2;
              }
              *(int *)((longlong)*(longlong **)(param_1 + 0x60) + 0xb4) = local_res8[0];
              iVar7 = Ordinal_21(*(undefined8 *)(param_1 + 0x178),0xffff,0x1001,local_res8,
                                 CONCAT44(uVar14,4));
              if (iVar7 == 0) {
                iVar7 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                                  (param_1,3,*(undefined8 *)(param_1 + 0x130),0,0);
                if (iVar7 == 0) {
                  return 0;
                }
                *param_2 = "HS: Rejected at CLIENT_ESTABLISHED";
              }
              else {
                Curl_pp_sendf(2,"Failed to set SNDBUF to %d",local_res8[0]);
                *param_2 = "HS: SO_SNDBUF failed";
              }
            }
          }
          else {
            Curl_pp_sendf(2,"lws_client_handshake: got bad Upgrade header \'%s\'\n",pcVar8);
            *param_2 = "HS: Upgrade to something other than websocket";
          }
        }
      }
    }
    else {
      Curl_pp_sendf(2,"lws_client_handshake: got bad HTTP response \'%d\'\n");
      *param_2 = "HS: ws upgrade response not 101";
    }
  }
  else {
    Curl_pp_sendf(2,"%s: client ws-over-h2 upgrade not supported yet\n","lws_client_ws_upgrade");
    *param_2 = "HS: h2 / ws upgrade unsupported";
  }
  return 3;
}



// FUNCTION 143dd7c90 FUN_143dd7c90 body=126 status=ok
// SIG undefined FUN_143dd7c90(void)

undefined8 FUN_143dd7c90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = FUN_143dd4c00(200,"client ws struct");
  *(longlong *)(param_2 + 0x60) = lVar1;
  if (lVar1 == 0) {
    Curl_pp_sendf(4,&DAT_145dbd3e4);
    return 1;
  }
  iVar2 = 0xd;
  if (1 < *(int *)(param_1 + 0x38) + 1U) {
    iVar2 = *(int *)(param_1 + 0x38);
  }
  *(char *)(lVar1 + 0xc1) = (char)iVar2;
  return 0;
}



// FUNCTION 143dd7d10 FUN_143dd7d10 body=422 status=ok
// SIG undefined FUN_143dd7d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_143dd7d10(longlong param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [24];
  char local_c0 [39];
  undefined1 local_99;
  char local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  iVar4 = FUN_143dd2960(*(undefined8 *)(param_1 + 0x78),local_d8,0x10);
  if (iVar4 == 0x10) {
    FUN_143dd36f0(local_d8,0x10,local_c0);
    iVar4 = sprintf(param_2,"Upgrade: websocket\r\nConnection: Upgrade\r\nSec-WebSocket-Key: ");
    pcVar9 = local_c0;
    do {
      cVar1 = *pcVar9;
      pcVar9[(longlong)(param_2 + ((longlong)iVar4 - (longlong)local_c0))] = cVar1;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    lVar7 = -1;
    do {
      lVar6 = lVar7 + 1;
      lVar3 = lVar7 + 1;
      lVar7 = lVar6;
    } while (local_c0[lVar3] != '\0');
    iVar5 = sprintf(param_2 + lVar6 + iVar4,"\r\n");
    pcVar9 = param_2 + lVar6 + iVar4 + iVar5;
    lVar7 = FUN_143dce730(param_1,0x57);
    if (lVar7 != 0) {
      uVar8 = FUN_143dce730(param_1,0x57);
      iVar4 = sprintf(pcVar9,"Sec-WebSocket-Protocol: %s\r\n",uVar8);
      pcVar9 = pcVar9 + iVar4;
    }
    bVar2 = *(byte *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (bVar2 != 0) {
      iVar4 = sprintf(pcVar9,"Sec-WebSocket-Version: %d\r\n",(ulonglong)bVar2);
      pcVar9 = pcVar9 + iVar4;
    }
    local_99 = 0;
    iVar4 = sprintf(local_98,"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",local_c0);
    FUN_143dd9f60(local_98,(longlong)iVar4,local_d8);
    FUN_143dd36f0(local_d8,0x14,*(longlong *)(param_1 + 8) + 0x37f,0x1e);
  }
  else {
    Curl_pp_sendf(1,"Unable to read from random dev %s\n","/dev/urandom");
    pcVar9 = (char *)0x0;
  }
  return pcVar9;
}



// FUNCTION 143dd7ec0 FUN_143dd7ec0 body=200 status=ok
// SIG undefined FUN_143dd7ec0(void)

undefined8 FUN_143dd7ec0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = *(uint *)(param_1 + 0x70) & 0xffff;
  if (((((uVar2 == 0x202) || (uVar2 == 0x11)) || (uVar2 == 0x20a)) ||
      ((*(uint *)(param_1 + 0x70) >> 0x1c & 1) != 0)) && (param_3 != 0)) {
    while (*(char *)(param_1 + 0x1ca) == '\0') {
      uVar1 = *(undefined1 *)*param_2;
      *param_2 = (longlong)((undefined1 *)*param_2 + 1);
      uVar3 = FUN_143dda9a0(param_1,uVar1);
      if ((int)uVar3 != 0) {
        Curl_pp_sendf(4,"%s: client_rx_sm exited, DROPPING %d\n","lws_ws_handshake_client",
                      param_3 & 0xffffffff);
        return 0xffffffff;
      }
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return uVar3;
      }
    }
    FUN_143dcc540(param_1,*param_2,0,param_3 & 0xffffffff);
    *param_2 = *param_2 + param_3;
  }
  return 0;
}



// FUNCTION 143dd7f90 FUN_143dd7f90 body=817 status=ok
// SIG undefined FUN_143dd7f90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd7f90(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  char *pcVar11;
  undefined1 auStack_98 [32];
  char **local_78;
  undefined8 local_70;
  char *local_68;
  int local_5c;
  undefined1 local_50 [24];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  lVar10 = param_1 + 0xa0 + (longlong)*(char *)(param_2 + 0x1c7) * 0xa8;
  iVar3 = FUN_143dce760(param_2,3);
  if ((iVar3 != 0) && (iVar3 = FUN_143dce760(param_2,0x20), iVar3 != 0)) {
    iVar3 = FUN_143dce760(param_2,0x20);
    if (iVar3 < 0x80) {
      uVar6 = FUN_143dce730(param_2,0x20);
      iVar3 = sprintf(*(char **)(lVar10 + 8),"%s258EAFA5-E914-47DA-95CA-C5AB0DC85B11",uVar6);
      FUN_143dd9f60(*(undefined8 *)(lVar10 + 8),(longlong)iVar3,local_50);
      iVar3 = FUN_143dd36f0(local_50,0x14,*(undefined8 *)(lVar10 + 8),
                            *(undefined4 *)(param_1 + 0x4bc));
      if (iVar3 < 0) {
        Curl_pp_sendf(2,"Base64 encoded hash too long\n");
      }
      else {
        iVar4 = FUN_143dc6320(param_2);
        if (iVar4 == 0) {
          lVar2 = *(longlong *)(lVar10 + 8);
          pcVar11 = (char *)(lVar2 + 400);
          builtin_strncpy(pcVar11,"HTTP/1.1",8);
          builtin_strncpy((char *)(lVar2 + 0x198)," 101 Swi",8);
          pcVar9 = (char *)(lVar2 + 0x1f1);
          builtin_strncpy((char *)(lVar2 + 0x1a0),"tching P",8);
          builtin_strncpy((char *)(lVar2 + 0x1a8),"rotocols",8);
          builtin_strncpy((char *)(lVar2 + 0x1b0),"\r\nUpgrad",8);
          builtin_strncpy((char *)(lVar2 + 0x1b8),"e: WebSo",8);
          builtin_strncpy((char *)(lVar2 + 0x1c0),"cket\r\nCo",8);
          builtin_strncpy((char *)(lVar2 + 0x1c8),"nnection",8);
          builtin_strncpy((char *)(lVar2 + 0x1d0),": Up",4);
          builtin_strncpy((char *)(lVar2 + 0x1d4),"grad",4);
          builtin_strncpy((char *)(lVar2 + 0x1d8),"e\r\nS",4);
          builtin_strncpy((char *)(lVar2 + 0x1dc),"ec-W",4);
          builtin_strncpy((char *)(lVar2 + 0x1e0),"ebSo",4);
          builtin_strncpy((char *)(lVar2 + 0x1e4),"cket",4);
          builtin_strncpy((char *)(lVar2 + 0x1e8),"-Acc",4);
          builtin_strncpy((char *)(lVar2 + 0x1ec),"ept:",4);
          *(undefined2 *)(lVar2 + 0x1f0) = 0x20;
          pcVar8 = *(char **)(lVar10 + 8);
          pcVar7 = pcVar9;
          do {
            cVar1 = *pcVar8;
            pcVar8 = pcVar8 + 1;
            *pcVar7 = cVar1;
            pcVar7 = pcVar7 + 1;
          } while (cVar1 != '\0');
          pcVar8 = pcVar9 + iVar3;
          iVar4 = FUN_143dce760(param_2,0xc);
          if (((iVar4 != 0) && ((char *)**(undefined8 **)(param_2 + 0xa0) != (char *)0x0)) &&
             (*(char *)**(undefined8 **)(param_2 + 0xa0) != '\0')) {
            builtin_strncpy(pcVar9 + iVar3,"\r\nSec-WebSocket-Protocol: ",0x1b);
            iVar3 = FUN_143dc6cb0(pcVar8 + 0x1a,0x80,&DAT_145afa01c,
                                  **(undefined8 **)(param_2 + 0xa0));
            pcVar8 = pcVar8 + 0x1a + iVar3;
          }
          pcVar8[0] = '\r';
          pcVar8[1] = '\n';
          pcVar8[2] = '\0';
          local_68 = pcVar8 + 2;
          local_5c = (*(int *)(param_1 + 0x4bc) - (int)local_68) + *(int *)(lVar10 + 8);
          local_78 = &local_68;
          local_70 = 0;
          iVar3 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_2 + 0xa0) + 8),param_2,0x35,
                                *(undefined8 *)(param_2 + 0x130));
          if (iVar3 == 0) {
            local_68[0] = '\r';
            local_68[1] = '\n';
            local_68[2] = '\0';
            pcVar9 = local_68 + (2 - (longlong)pcVar11);
            iVar3 = FUN_143dcd250(param_2,pcVar11,pcVar9,8);
            if ((char *)(longlong)iVar3 == pcVar9) {
              *(undefined1 *)(param_2 + 0x1c4) = 0;
              *(undefined2 *)(param_2 + 0x70) = 0x117;
              uVar6 = FUN_143dce730(param_2,0);
              uVar5 = FUN_143dce760(param_2,0);
              lVar10 = FUN_143dcfd40(param_2,uVar6,uVar5);
              if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x28) != 0)) {
                local_78 = (char **)0x0;
                iVar3 = (**(code **)(*(longlong *)(param_2 + 0xa0) + 8))
                                  (param_2,0x38,*(undefined8 *)(param_2 + 0x130));
                if (iVar3 != 0) {
                  return 1;
                }
              }
              return 0;
            }
          }
        }
      }
    }
    else {
      Curl_pp_sendf(2,"Client key too long %d\n");
    }
  }
  return 0xffffffff;
}



// FUNCTION 143dd82d0 FUN_143dd82d0 body=281 status=ok
// SIG undefined FUN_143dd82d0(void)

undefined8 FUN_143dd82d0(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  
  do {
    if (param_3 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x1ca) != '\0') {
      FUN_143dcc540(param_1,*param_2,0,param_3 & 0xffffffff);
      *param_2 = *param_2 + param_3;
      return 1;
    }
    bVar2 = false;
    if (*(char *)(param_1 + 0x1c4) == '\x14') {
      do {
        if ((2 < *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba)) || (param_3 == 0)) {
          if (!bVar2) goto LAB_143dd8385;
LAB_143dd8376:
          iVar3 = FUN_143dc83b0(param_1,3);
          goto LAB_143dd839f;
        }
        lVar1 = *param_2;
        bVar2 = true;
        iVar3 = FUN_143dd8780(param_1);
        param_3 = param_3 - (longlong)((int)*param_2 - (int)lVar1);
        if (iVar3 == 0) goto LAB_143dd8376;
        if (iVar3 < 0) {
          return 0xffffffff;
        }
      } while (*(char *)(param_1 + 0x1c4) == '\x14');
      iVar3 = FUN_143dc83b0(param_1,3);
    }
    else {
LAB_143dd8385:
      *param_2 = *param_2 + 1;
      iVar3 = FUN_143dc83b0(param_1,0);
      param_3 = param_3 - 1;
    }
LAB_143dd839f:
    if (iVar3 < 0) {
      return 0xffffffff;
    }
  } while( true );
}



// FUNCTION 143dd83f0 FUN_143dd83f0 body=901 status=ok
// SIG undefined FUN_143dd83f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd83f0(longlong param_1)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  char *pcVar11;
  longlong lVar12;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  char local_e8 [64];
  char local_a8 [128];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar9 = 0;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    Curl_pp_sendf(1,"NULL protocol at lws_read\n");
  }
  iVar5 = FUN_143dce530(param_1,local_a8,0x7f);
  if (iVar5 < 0) {
    Curl_pp_sendf(1,"protocol list too long");
    return 1;
  }
  iVar5 = FUN_143dce760(param_1);
  if (0x7f < (ulonglong)(longlong)iVar5) {
                    /* WARNING: Subroutine does not return */
    __report_rangecheckfailure();
  }
  pcVar11 = local_a8;
  bVar3 = false;
  local_a8[iVar5] = '\0';
  if (local_a8[0] == '\0') {
LAB_143dd858d:
    lVar8 = FUN_143dce730(param_1,0xc);
    if (lVar8 != 0) {
      Curl_pp_sendf(4,"No protocol from \"%s\" supported\n",local_a8);
      return 1;
    }
    uVar9 = (ulonglong)*(byte *)(*(longlong *)(param_1 + 0x80) + 0x24c);
    *(ulonglong *)(param_1 + 0xa0) =
         uVar9 * 0x38 + *(longlong *)(*(longlong *)(param_1 + 0x80) + 0x170);
  }
  else {
    do {
      if (bVar3) goto LAB_143dd85d7;
      uVar9 = 0;
      bVar4 = false;
      do {
        cVar1 = *pcVar11;
        pcVar6 = pcVar11;
        if ((cVar1 == '\0') || (cVar1 == ',')) break;
        if ((bVar4) || (cVar1 != ' ')) {
          bVar4 = true;
          local_e8[uVar9] = cVar1;
          pcVar11 = pcVar11 + 1;
        }
        uVar9 = uVar9 + 1;
        pcVar6 = pcVar11;
      } while ((longlong)uVar9 < 0x3f);
      if (0x3f < uVar9) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      lVar8 = *(longlong *)(param_1 + 0x80);
      pcVar11 = pcVar6 + 1;
      if (*pcVar6 == '\0') {
        pcVar11 = pcVar6;
      }
      local_e8[uVar9] = '\0';
      uVar9 = 0;
      lVar12 = 0;
      lVar8 = *(longlong *)(lVar8 + 0x170);
      if (*(longlong *)(lVar8 + 8) != 0) {
        lVar7 = 0;
        do {
          pcVar6 = *(char **)(lVar7 + lVar8);
          if (pcVar6 != (char *)0x0) {
            lVar7 = -(longlong)pcVar6;
            do {
              cVar1 = *pcVar6;
              cVar2 = pcVar6[(longlong)(local_e8 + lVar7)];
              if (cVar1 != cVar2) break;
              pcVar6 = pcVar6 + 1;
            } while (cVar2 != '\0');
            if (cVar1 == cVar2) {
              *(longlong *)(param_1 + 0xa0) = (longlong)(int)uVar9 * 0x38 + lVar8;
              bVar3 = true;
              break;
            }
          }
          lVar12 = lVar12 + 1;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          lVar7 = lVar12 * 0x38;
        } while (*(longlong *)(lVar7 + 8 + lVar8) != 0);
      }
    } while (*pcVar11 != '\0');
    if (!bVar3) goto LAB_143dd858d;
  }
LAB_143dd85d7:
  lVar8 = FUN_143dd4c00(200,"ws struct");
  *(longlong *)(param_1 + 0x60) = lVar8;
  if (lVar8 == 0) {
    pcVar11 = "OOM\n";
  }
  else {
    iVar5 = FUN_143dce760(param_1,0x21);
    if (iVar5 != 0) {
      pcVar11 = (char *)FUN_143dce730(param_1,0x21);
      iVar5 = atoi(pcVar11);
      *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1) = (char)iVar5;
    }
    iVar5 = FUN_143dc6320(param_1);
    if (iVar5 == 0) {
      lVar8 = *(longlong *)(param_1 + 0xa0);
      uVar10 = FUN_143dce730(param_1,0xc);
      local_f8 = 0;
      iVar5 = (**(code **)(lVar8 + 8))(param_1,0x14,*(undefined8 *)(param_1 + 0x130),uVar10);
      if (iVar5 != 0) {
        pcVar11 = "User code denied connection\n";
        uVar10 = 2;
        goto LAB_143dd85fd;
      }
      cVar1 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
      if (cVar1 != '\r') {
        Curl_pp_sendf(4,"Unknown client spec version %d\n",cVar1);
        *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xc1) = 0xd;
      }
      iVar5 = FUN_143dd7f90(*(undefined8 *)(param_1 + 0x78),param_1);
      if (iVar5 == 0) {
        FUN_143dcde20(param_1,uVar9);
        uVar10 = 0x21000000;
        if ((*(byte *)(param_1 + 0x1b8) & 8) == 0) {
          uVar10 = 0x20000000;
        }
        FUN_143dc69d0(param_1,uVar10,0x117,&PTR_DAT_1468382b0);
        FUN_143dc8260(param_1);
        thunk_FUN_143dcdf90(param_1,1);
        return 0;
      }
      pcVar11 = "hs0405 has failed the connection\n";
    }
    else {
      pcVar11 = "problem with user space\n";
    }
  }
  uVar10 = 4;
LAB_143dd85fd:
  Curl_pp_sendf(uVar10,pcVar11);
  return 1;
}



// FUNCTION 143dd8780 FUN_143dd8780 body=592 status=ok
// SIG undefined FUN_143dd8780(void)

uint FUN_143dd8780(longlong param_1,longlong *param_2,ulonglong param_3)

{
  longlong *plVar1;
  uint *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  undefined4 uVar12;
  longlong lVar13;
  byte local_res8 [8];
  
  pbVar4 = (byte *)*param_2;
  lVar13 = 0;
  uVar8 = 0;
  if (*(longlong *)(*(longlong *)(param_1 + 0xa0) + 0x18) == 0) {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0x78) + 0x4bc);
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(param_1 + 0xa0) + 0x18);
  }
  lVar5 = *(longlong *)(param_1 + 0x60);
  if (*(ulonglong *)(lVar5 + 0xa8) < (ulonglong)uVar10) {
    uVar10 = *(uint *)(lVar5 + 0xa8);
  }
  if (param_3 < uVar10) {
    uVar10 = (uint)param_3;
  }
  if (uVar10 == 0) {
    return 0;
  }
  if ((*(byte *)(lVar5 + 0xc4) & 4) == 0) {
    uVar8 = (uint)*(byte *)(lVar5 + 0xb9);
    local_res8[0] = *(byte *)((ulonglong)(uVar8 & 3) + 0x95 + lVar5);
    local_res8[1] = *(byte *)((ulonglong)(uVar8 + 1 & 3) + 0x95 + lVar5);
    local_res8[2] = *(byte *)((ulonglong)(uVar8 - 2 & 3) + 0x95 + lVar5);
    local_res8[3] = *(byte *)((ulonglong)(uVar8 - 1 & 3) + 0x95 + lVar5);
    pbVar7 = pbVar4;
    for (uVar8 = uVar10 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *pbVar7 = *pbVar7 ^ local_res8[0];
      pbVar7[1] = pbVar7[1] ^ local_res8[1];
      pbVar7[2] = pbVar7[2] ^ local_res8[2];
      pbVar7[3] = pbVar7[3] ^ local_res8[3];
      pbVar7 = pbVar7 + 4;
    }
    uVar9 = uVar10 & 3;
    uVar8 = 0;
    if (uVar9 != 0) {
      do {
        pbVar3 = local_res8 + lVar13;
        lVar13 = lVar13 + 1;
        *pbVar7 = *pbVar7 ^ *pbVar3;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar9;
      } while (lVar13 < (longlong)(ulonglong)uVar9);
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xb9) =
         *(char *)(*(longlong *)(param_1 + 0x60) + 0xb9) + (char)uVar10 & 3;
  }
  *param_2 = *param_2 + (ulonglong)uVar10;
  plVar1 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
  *plVar1 = *plVar1 - (ulonglong)uVar10;
  if (uVar10 == 0) {
    return 0;
  }
  FUN_140447710(param_1);
  uVar9 = *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
  if (((uVar9 >> 10 & 1) == 0) || ((uVar9 >> 0xb & 1) != 0)) {
LAB_143dd896c:
    lVar13 = *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8);
    if (((lVar13 == 0) || (*(int *)(param_1 + 0x74) != 0)) ||
       (iVar6 = FUN_143dc7570(lVar13,param_1,6,*(undefined8 *)(param_1 + 0x130),pbVar4,
                              (longlong)(int)uVar10), iVar6 == 0)) {
      puVar2 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar2 = *puVar2 & 0xffffbfff;
      return uVar10;
    }
  }
  else {
    iVar6 = FUN_143dc61f0(*(longlong *)(param_1 + 0x60) + 0xbe,pbVar4,(longlong)(int)uVar10);
    if (iVar6 == 0) {
      lVar13 = *(longlong *)(param_1 + 0x60);
      if ((((*(longlong *)(lVar13 + 0xa8) != 0) || ((*(byte *)(lVar13 + 0xc4) & 1) == 0)) ||
          (*(char *)(lVar13 + 0xbe) == '\0')) || (uVar8 != 0)) goto LAB_143dd896c;
      uVar12 = 0xc;
      pcVar11 = "partial utf8";
    }
    else {
      uVar12 = 8;
      pcVar11 = "bad utf8";
    }
    FUN_143dc81b0(param_1,0x3ef,pcVar11,uVar12);
    FUN_143dc7250(8,pbVar4,(longlong)(int)uVar10);
  }
  return 0xffffffff;
}



// FUNCTION 143dd89d0 FUN_143dd89d0 body=509 status=ok
// SIG undefined FUN_143dd89d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd89d0(longlong param_1,longlong param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined4 local_d8 [4];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar1 = *(longlong *)(param_2 + 0x78);
  uVar6 = 6;
  while( true ) {
    if ((*(byte *)((longlong)param_3 + 10) & 0xb) == 0) {
      return 4;
    }
    if ((*(byte *)(param_3 + 2) & 9) == 0) {
      return 4;
    }
    if (((*(int *)(*(longlong *)(param_2 + 0x80) + 0x208) != 0) && (*(int *)(lVar1 + 0x4c8) != 0))
       && (*(int *)(lVar1 + 0x4cc) == *(int *)(lVar1 + 0x4c8))) {
      return 4;
    }
    local_d8[0] = 0x80;
    lVar3 = Ordinal_1((longlong)*param_3,local_c8,local_d8);
    if (lVar3 == -1) {
      iVar2 = Ordinal_111();
      if ((iVar2 != 0x2733) && (iVar2 = Ordinal_111(), iVar2 != 0x2733)) {
        iVar2 = Ordinal_111();
        pcVar5 = strerror(iVar2);
        Curl_pp_sendf(1,"ERROR on accept: %s\n",pcVar5);
      }
      return 4;
    }
    FUN_143dd31a0(*(undefined8 *)(param_2 + 0x80),lVar3);
    local_e8 = 0;
    iVar2 = (**(code **)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x170) + 8))
                      (param_2,0x11,0,lVar3);
    if (iVar2 != 0) break;
    uVar7 = uVar6 | 1;
    local_e8 = 0;
    uVar6 = 2;
    if ((*(uint *)(*(longlong *)(param_2 + 0x80) + 0x22c) & 0x400000) == 0) {
      uVar6 = uVar7;
    }
    lVar4 = FUN_143dcf740(*(longlong *)(param_2 + 0x80),uVar6,lVar3,0);
    if (lVar4 == 0) {
      return 3;
    }
    iVar2 = FUN_143dd6fb0(lVar4,lVar3);
    if (iVar2 != 0) {
      thunk_FUN_143dc4f60(lVar4,0,"listen svc fail");
      return 3;
    }
    if (*(int *)(lVar1 + 0x4b4) - 1U <= *(uint *)(param_1 + 0x9c)) {
      return 4;
    }
    if (*(int *)(param_2 + 0x1a0) == -1) {
      return 4;
    }
    iVar2 = FUN_143dd3300((longlong)*(int *)(param_2 + 0x1a0) * 0x10 + *(longlong *)(param_1 + 0x48)
                         );
    if (iVar2 < 1) {
      return 4;
    }
  }
  Ordinal_3(lVar3);
  return 4;
}



// FUNCTION 143dd8bd0 FUN_143dd8bd0 body=200 status=ok
// SIG undefined FUN_143dd8bd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_143dd8bd0(int param_1,undefined8 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined1 local_78 [80];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  uVar3 = FUN_140c13bb0(param_2);
  uVar1 = SSL_get_ex_data_X509_STORE_CTX_idx();
  uVar4 = SSL_CTX_set_ex_data(param_2,uVar1);
  lVar5 = FUN_143ca5300(uVar4,DAT_146bcd598);
  FUN_143dd3fd0(uVar3,2,local_78);
  local_88 = (longlong)param_1;
  iVar2 = (**(code **)(*(longlong *)(*(longlong *)(lVar5 + 0x80) + 0x170) + 8))
                    (lVar5,0x17,param_2,uVar4);
  return iVar2 == 0;
}



// FUNCTION 143dd8ca0 FUN_143dd8ca0 body=178 status=ok
// SIG undefined FUN_143dd8ca0(void)

undefined4 FUN_143dd8ca0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1 == 0) {
    return 3;
  }
  lVar2 = *(longlong *)(param_3 + 0x378);
  if (lVar2 == 0) {
    return 0;
  }
  while (((*(byte *)(lVar2 + 0x248) & 2) != 0 ||
         (lVar1 = FUN_1407caf40(param_1), *(longlong *)(lVar2 + 0x1b0) != lVar1))) {
    lVar2 = *(longlong *)(lVar2 + 0x150);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar1 = SSL_get_servername(param_1,0);
  if (lVar1 == 0) {
    return 0;
  }
  lVar2 = FUN_143dd1820(param_3,*(undefined4 *)(lVar2 + 0x228),lVar1);
  if (lVar2 == 0) {
    return 0;
  }
  SSL_set_SSL_CTX(param_1,*(undefined8 *)(lVar2 + 0x1b0));
  return 0;
}



// FUNCTION 143dd8d60 FUN_143dd8d60 body=41 status=ok
// SIG undefined FUN_143dd8d60(void)

undefined8 FUN_143dd8d60(longlong param_1)

{
  SSL_shutdown(*(undefined8 *)(param_1 + 0x150));
  SSL_free(*(undefined8 *)(param_1 + 0x150));
  return 0;
}



// FUNCTION 143dd8d90 FUN_143dd8d90 body=264 status=ok
// SIG undefined FUN_143dd8d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143dd8d90(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [76];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar1 = SSL_accept(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 1) {
    iVar1 = FUN_143dd4200(param_1,2,local_68,0x40);
    if (iVar1 == 0) {
      Curl_pp_sendf(4,"%s: client cert CN \'%s\'\n","lws_tls_server_accept",local_64);
    }
    return 0;
  }
  iVar1 = FUN_143dd3d70(param_1,iVar1);
  if ((iVar1 - 1U & 0xfffffffb) != 0) {
    if ((iVar1 == 2) ||
       (iVar2 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar2 == 3)) {
      iVar1 = thunk_FUN_143dcd530(param_1,0,9);
      return (iVar1 != 0) - 2;
    }
    if ((iVar1 == 3) ||
       (iVar1 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar1 == 2)) {
      iVar1 = thunk_FUN_143dcd530(param_1,0,2);
      if (iVar1 == 0) {
        return -3;
      }
      return -1;
    }
  }
  return -1;
}



// FUNCTION 143dd8ea0 FUN_143dd8ea0 body=1059 status=ok
// SIG undefined FUN_143dd8ea0(void)

undefined4
FUN_143dd8ea0(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             longlong param_5,undefined4 param_6,longlong param_7,undefined8 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong local_38;
  undefined4 local_30 [2];
  undefined8 local_28 [2];
  
  local_38 = 0;
  iVar1 = FUN_143dd4870(param_1,param_3,param_4);
  if (iVar1 == 0) {
    if (param_5 == 0) {
      return 0;
    }
    if (param_7 == 0) {
      return 0;
    }
  }
  else if (iVar1 != 2) {
    iVar1 = SSL_CTX_use_certificate_chain_file(*(undefined8 *)(param_1 + 0x1b0),param_3);
    if (iVar1 != 1) {
      uVar2 = ERR_get_error();
      uVar3 = ERR_error_string(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
      Curl_pp_sendf(1,"problem getting cert \'%s\' %lu: %s\n",param_3,uVar2,uVar3);
      return 1;
    }
    if (param_4 == 0) {
      iVar1 = (**(code **)(*(longlong *)(param_1 + 0x170) + 8))
                        (param_2,0x25,*(undefined8 *)(param_1 + 0x1b0),0,0);
      if (iVar1 != 0) {
        Curl_pp_sendf(1,"ssl private key not set\n");
        return 1;
      }
    }
    else {
      iVar1 = SSL_CTX_use_PrivateKey_file(*(undefined8 *)(param_1 + 0x1b0),param_4,1);
      if (iVar1 != 1) {
        uVar2 = ERR_get_error();
        uVar3 = ERR_error_string(uVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
        Curl_pp_sendf(1,"ssl problem getting key \'%s\' %lu: %s\n",param_4,uVar2,uVar3);
        return 1;
      }
    }
    goto LAB_143dd90d5;
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    return 1;
  }
  iVar1 = SSL_CTX_use_certificate_ASN1(*(undefined8 *)(param_1 + 0x1b0),param_6);
  if (iVar1 != 1) {
    Curl_pp_sendf(1,"Problem loading update cert\n");
    return 1;
  }
  iVar1 = FUN_143dd4590(*(undefined8 *)(param_1 + 0x148),0,param_7,param_8,local_28,local_30);
  if (iVar1 != 0) {
    Curl_pp_sendf(4,"unable to convert memory privkey\n");
    return 1;
  }
  iVar1 = SSL_CTX_use_PrivateKey_ASN1(6,*(undefined8 *)(param_1 + 0x1b0),local_28[0],local_30[0]);
  if (iVar1 != 1) {
    Curl_pp_sendf(4,"unable to use memory privkey\n");
    return 1;
  }
LAB_143dd90d5:
  iVar1 = SSL_CTX_check_private_key(*(undefined8 *)(param_1 + 0x1b0));
  if (iVar1 == 0) {
    Curl_pp_sendf(1,"Private SSL key doesn\'t match cert\n");
    return 1;
  }
  pcVar5 = "prime256v1";
  if (*(char *)(param_1 + 0x1e0) != '\0') {
    pcVar5 = (char *)(param_1 + 0x1e0);
  }
  iVar1 = OBJ_sn2nid(pcVar5);
  if (iVar1 == 0) {
    Curl_pp_sendf(1,"SSL: Unknown curve name \'%s\'",pcVar5);
    return 1;
  }
  lVar4 = EC_KEY_new_by_curve_name(iVar1);
  if (lVar4 == 0) {
    Curl_pp_sendf(1,"SSL: Unable to create curve \'%s\'",pcVar5);
    return 1;
  }
  FUN_143ca38a0(*(undefined8 *)(param_1 + 0x1b0),4,0,lVar4);
  EC_KEY_free(lVar4);
  SSL_CTX_set_options(*(undefined8 *)(param_1 + 0x1b0),0);
  Curl_pp_sendf(4," SSL ECDH curve \'%s\'\n",pcVar5);
  if ((*(uint *)(*(longlong *)(param_1 + 0x148) + 0x4b0) & 0x1200) == 0x1200) {
    Curl_pp_sendf(4," Using ECDH certificate support\n");
  }
  FUN_143ca38a0(*(undefined8 *)(param_1 + 0x1b0),0x52,1,&local_38);
  if ((local_38 != 0) && (lVar4 = OPENSSL_sk_value(local_38,0), lVar4 != 0)) {
    lVar4 = X509_get0_pubkey(lVar4);
    if (lVar4 == 0) {
      Curl_pp_sendf(1,"%s: pkey is NULL\n","lws_tls_server_certs_load");
      return 1;
    }
    uVar2 = FRollingHash::GetWindowSize(lVar4);
    iVar1 = EVP_PKEY_type(uVar2);
    if (iVar1 != 0x198) {
      Curl_pp_sendf(4,"Key type is not EC\n");
      return 0;
    }
    lVar4 = EVP_PKEY_get1_EC_KEY(lVar4);
    if (lVar4 == 0) {
      Curl_pp_sendf(1,"%s: ECDH key is NULL \n","lws_tls_server_certs_load");
      return 1;
    }
    FUN_143ca38a0(*(undefined8 *)(param_1 + 0x1b0),4,0,lVar4);
    EC_KEY_free(lVar4);
  }
  *(uint *)(param_1 + 0x214) = *(uint *)(param_1 + 0x214) & 0xfffffffd;
  return 0;
}



// FUNCTION 143dd92d0 FUN_143dd92d0 body=103 status=ok
// SIG undefined FUN_143dd92d0(void)

undefined8 FUN_143dd92d0(longlong param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x22c);
  if ((uVar1 & 0x1002) == 0x1002) {
    SSL_CTX_set_session_id_context
              (*(undefined8 *)(param_1 + 0x1b0),*(undefined8 *)(param_1 + 0x148),8);
    SSL_CTX_set_verify(*(undefined8 *)(param_1 + 0x1b0),~(uVar1 >> 6) & 2 | 1,FUN_143dd8bd0);
  }
  return 0;
}



// FUNCTION 143dd9340 FUN_143dd9340 body=334 status=ok
// SIG undefined FUN_143dd9340(void)

undefined8 FUN_143dd9340(longlong param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  longlong lVar3;
  uchar *puVar4;
  
  piVar2 = _errno();
  *piVar2 = 0;
  lVar3 = SSL_new(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x1b0));
  *(longlong *)(param_1 + 0x150) = lVar3;
  if (lVar3 == 0) {
    piVar2 = _errno();
    uVar1 = FUN_143dd3d70(param_1,0);
    Curl_pp_sendf(1,"SSL_new failed: %d (errno %d)\n",uVar1,*piVar2);
    FUN_143dd3d10();
    return 1;
  }
  FUN_143ca6240(lVar3,DAT_146bcd598,param_1);
  SSL_set_fd(*(undefined8 *)(param_1 + 0x150),param_2);
  FUN_143ca4750(*(undefined8 *)(param_1 + 0x150),0x21,2);
  puVar4 = AK::WriteBytesMem::Bytes(*(WriteBytesMem **)(param_1 + 0x150));
  if (puVar4 == (uchar *)0x0) {
    Curl_pp_sendf(4,"NULL rbio\n");
  }
  else {
    BIO_ctrl(puVar4,0x66,1);
  }
  lVar3 = SSL_get_wbio(*(undefined8 *)(param_1 + 0x150));
  if (lVar3 == 0) {
    Curl_pp_sendf(4,"NULL rbio\n");
  }
  else {
    BIO_ctrl(lVar3,0x66,1);
  }
  if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
    FUN_140b3ffc0(*(undefined8 *)(param_1 + 0x150),FUN_143dd3d90);
  }
  return 0;
}



// FUNCTION 143dd9490 FUN_143dd9490 body=555 status=ok
// SIG undefined FUN_143dd9490(void)

undefined8 FUN_143dd9490(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = FUN_143ca7fa0();
  if (lVar3 == 0) {
    uVar1 = ERR_get_error();
    uVar4 = ERR_error_string(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + 0xa8));
    Curl_pp_sendf(1,"problem creating ssl method %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  lVar3 = SSL_CTX_new(lVar3);
  *(longlong *)(param_2 + 0x1b0) = lVar3;
  if (lVar3 == 0) {
    uVar1 = ERR_get_error();
    uVar4 = ERR_error_string(uVar1,*(undefined8 *)(*(longlong *)(param_2 + 0x148) + 0xa8));
    Curl_pp_sendf(1,"problem creating ssl context %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  SSL_CTX_set_ex_data(lVar3,DAT_146bcd594,*(undefined8 *)(param_2 + 0x148));
  SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x2000000);
  SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x20000);
  SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0);
  SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0),0x400000);
  if (*(longlong *)(param_1 + 0x48) != 0) {
    SSL_CTX_set_cipher_list(*(undefined8 *)(param_2 + 0x1b0));
  }
  SSL_CTX_callback_ctrl(*(undefined8 *)(param_2 + 0x1b0),0x35,FUN_143dd8ca0);
  FUN_143ca38a0(*(undefined8 *)(param_2 + 0x1b0),0x36,0,*(undefined8 *)(param_2 + 0x148));
  if (*(longlong *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_143ca3ed0(*(undefined8 *)(param_2 + 0x1b0),*(longlong *)(param_1 + 0x40),0);
    if (iVar2 == 0) {
      Curl_pp_sendf(1,"%s: SSL_CTX_load_verify_locations unhappy\n",
                    "lws_tls_server_vhost_backend_init");
    }
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    SSL_CTX_set_options(*(undefined8 *)(param_2 + 0x1b0));
  }
  if (*(int *)(param_1 + 0xe4) != 0) {
    SSL_CTX_clear_options(*(undefined8 *)(param_2 + 0x1b0));
  }
  if ((*(int *)(param_2 + 0x208) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
    FUN_143dd39a0(*(undefined8 *)(param_2 + 0x1b0),param_1);
    uVar4 = FUN_143dd8ea0(param_2,param_3,*(undefined8 *)(param_1 + 0x30),
                          *(undefined8 *)(param_1 + 0x38),0,0,0,0);
    return uVar4;
  }
  return 0;
}



// FUNCTION 143dd96c0 FUN_143dd96c0 body=409 status=ok
// SIG undefined FUN_143dd96c0(void)

bool FUN_143dd96c0(int param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  longlong lVar8;
  
  lVar8 = (longlong)param_1;
  if (param_1 != 0) {
LAB_143dd97a4:
    uVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
    uVar5 = SSL_CTX_set_ex_data(param_2,uVar2);
    lVar6 = FUN_143ca5300(uVar5,DAT_146bcd598);
    iVar1 = (**(code **)(*(longlong *)(*(longlong *)(*(longlong *)(lVar6 + 0x78) + 0x378) + 0x170) +
                        8))(lVar6,0x3a,param_2,uVar5,lVar8);
    uVar2 = (undefined4)((ulonglong)lVar8 >> 0x20);
    if (param_1 == 0) {
      iVar3 = UWheeledVehicleMovementComponent::GetAvoidanceGroupMask(param_2);
      if (iVar3 != 0) {
        uVar4 = FUN_141a55bc0(param_2);
        uVar5 = FUN_143d0e200(iVar3);
        Curl_pp_sendf(1,"SSL error: %s (preverify_ok=%d;err=%d;depth=%d)\n",uVar5,0,
                      CONCAT44(uVar2,iVar3),uVar4);
        return false;
      }
    }
    return iVar1 == 0;
  }
  iVar1 = UWheeledVehicleMovementComponent::GetAvoidanceGroupMask(param_2);
  if (iVar1 == 0) goto LAB_143dd97a4;
  uVar2 = SSL_get_ex_data_X509_STORE_CTX_idx();
  uVar5 = SSL_CTX_set_ex_data(param_2,uVar2);
  lVar6 = FUN_143ca5300(uVar5,DAT_146bcd598);
  if ((iVar1 - 0x12U < 2) && ((*(byte *)(lVar6 + 0x170) & 2) != 0)) {
    Curl_pp_sendf(4,"accepting self-signed certificate (verify_callback)\n");
    X509_STORE_CTX_set_error(param_2,0);
    return true;
  }
  if ((1 < iVar1 - 9U) || ((*(byte *)(lVar6 + 0x170) & 8) == 0)) goto LAB_143dd97a4;
  if (iVar1 == 9) {
    pcVar7 = "accepting not yet valid certificate (verify_callback)\n";
  }
  else {
    if (iVar1 != 10) goto LAB_143dd9785;
    pcVar7 = "accepting expired certificate (verify_callback)\n";
  }
  Curl_pp_sendf(4,pcVar7);
LAB_143dd9785:
  X509_STORE_CTX_set_error(param_2,0);
  return true;
}



// FUNCTION 143dd9860 FUN_143dd9860 body=599 status=ok
// SIG undefined FUN_143dd9860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd9860(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_d8 [32];
  char local_b8 [128];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  pcVar6 = *(char **)(*(longlong *)(param_1 + 0x78) + 0x3f8);
  iVar1 = FUN_143dce530(param_1,local_b8,0x80);
  if (iVar1 < 1) {
    Curl_pp_sendf(1,"%s: Unable to get hostname\n","lws_ssl_client_bio_create");
    uVar5 = 0xffffffff;
  }
  else {
    pcVar3 = local_b8;
    while (local_b8[0] != '\0') {
      if (*pcVar3 == ':') {
        *pcVar3 = '\0';
        break;
      }
      pcVar3 = pcVar3 + 1;
      local_b8[0] = *pcVar3;
    }
    lVar4 = SSL_new(*(undefined8 *)(*(longlong *)(param_1 + 0x80) + 0x1b8));
    *(longlong *)(param_1 + 0x150) = lVar4;
    if (lVar4 == 0) {
      uVar2 = FUN_143dd3d70(param_1,0);
      uVar5 = ERR_error_string(uVar2,0);
      Curl_pp_sendf(1,"SSL_new failed: %s\n",uVar5);
      FUN_143dd3d10();
      uVar5 = 0xffffffff;
    }
    else {
      if (*(int *)(*(longlong *)(param_1 + 0x80) + 0x210) != 0) {
        FUN_140b3ffc0(lVar4,FUN_143dd3d90);
      }
      if ((*(byte *)(param_1 + 0x170) & 4) == 0) {
        uVar5 = UMovieSceneSection::GetChannelProxy(*(undefined8 *)(param_1 + 0x150));
        FUN_141540e50(uVar5,4);
        X509_VERIFY_PARAM_set1_host(uVar5,local_b8,0);
      }
      SSL_set_verify(*(undefined8 *)(param_1 + 0x150),1,FUN_143dd96c0);
      FUN_143ca4750(*(undefined8 *)(param_1 + 0x150),0x21,2);
      FUN_143ca4750(*(undefined8 *)(param_1 + 0x150),0x37,0,local_b8);
      uVar5 = BIO_new_socket(*(undefined4 *)(param_1 + 0x178),0);
      *(undefined8 *)(param_1 + 0x158) = uVar5;
      SSL_set_bio(*(undefined8 *)(param_1 + 0x150),uVar5,uVar5);
      BIO_ctrl(*(undefined8 *)(param_1 + 0x158),0x66,1);
      pcVar3 = *(char **)(*(longlong *)(param_1 + 0x80) + 0x1c0);
      if (pcVar3 != (char *)0x0) {
        pcVar6 = pcVar3;
      }
      iVar1 = FUN_143dce530(param_1,local_b8,0x80);
      pcVar3 = local_b8;
      if (iVar1 < 1) {
        pcVar3 = pcVar6;
      }
      uVar2 = FUN_143dd4470(pcVar3,local_38,0x27);
      SSL_set_alpn_protos(*(undefined8 *)(param_1 + 0x150),local_38,uVar2);
      FUN_143ca6240(*(undefined8 *)(param_1 + 0x150),DAT_146bcd598,param_1);
      uVar5 = 0;
    }
  }
  return uVar5;
}



// FUNCTION 143dd9ac0 FUN_143dd9ac0 body=193 status=ok
// SIG undefined FUN_143dd9ac0(void)

undefined8 FUN_143dd9ac0(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)
           (((longlong)*(char *)(param_1 + 0x1c7) + 1) * 0xa8 + *(longlong *)(param_1 + 0x78));
  iVar1 = FUN_143ca5410(*(undefined8 *)(param_1 + 0x150));
  if ((((iVar1 == 0) || ((iVar1 - 0x12U < 2 && ((*(byte *)(param_1 + 0x170) & 2) != 0)))) ||
      ((iVar1 - 9U < 2 && ((*(byte *)(param_1 + 0x170) & 8) != 0)))) || (iVar1 == 9)) {
    uVar2 = 0;
  }
  else {
    uVar2 = ERR_error_string(iVar1,uVar2);
    FUN_143dc6cb0(param_2,(longlong)param_3,
                  "server\'s cert didn\'t look good, X509_V_ERR = %d: %s\n",iVar1,uVar2);
    FUN_143dd3d10();
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



// FUNCTION 143dd9b90 FUN_143dd9b90 body=275 status=ok
// SIG undefined FUN_143dd9b90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143dd9b90(longlong param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined1 auStack_68 [32];
  uint local_48 [2];
  void *local_40;
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  iVar1 = SSL_connect(*(undefined8 *)(param_1 + 0x150));
  if (iVar1 == 1) {
    SSL_get0_alpn_selected(*(undefined8 *)(param_1 + 0x150),&local_40,local_48);
    if (0x1f < local_48[0]) {
      local_48[0] = 0x1f;
    }
    uVar5 = (ulonglong)local_48[0];
    _guard_xfg_dispatch_icall_nop(local_38,local_40,(ulonglong)local_48[0]);
    if (0x1f < uVar5) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_38[uVar5] = 0;
    FUN_143dca860(param_1,local_38);
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_143dd3d70(param_1,iVar1);
    if (iVar2 == 5) {
      uVar4 = 0xffffffff;
    }
    else if ((iVar2 == 2) ||
            (iVar3 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar3 == 3
            )) {
      uVar4 = 0xfffffffe;
    }
    else if ((iVar2 == 3) ||
            (iVar2 = FWmfMediaTextureSample::GetFormat(*(undefined8 *)(param_1 + 0x150)), iVar2 == 2
            )) {
      uVar4 = 0xfffffffd;
    }
    else {
      uVar4 = 0xffffffff;
      if (iVar1 == 0) {
        uVar4 = 0xfffffffc;
      }
    }
  }
  return uVar4;
}



// FUNCTION 143dd9cb0 FUN_143dd9cb0 body=681 status=ok
// SIG undefined FUN_143dd9cb0(void)

undefined8
FUN_143dd9cb0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,longlong param_5,
             longlong param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = TLS_client_method();
  if (lVar3 == 0) {
    uVar1 = ERR_get_error();
    uVar4 = ERR_error_string(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
    Curl_pp_sendf(1,"problem creating ssl method %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  lVar3 = SSL_CTX_new(lVar3);
  *(longlong *)(param_1 + 0x1b8) = lVar3;
  if (lVar3 == 0) {
    uVar1 = ERR_get_error();
    uVar4 = ERR_error_string(uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x148) + 0xa8));
    Curl_pp_sendf(1,"problem creating ssl context %lu: %s\n",uVar1,uVar4);
    return 1;
  }
  SSL_CTX_set_options(lVar3,0x20000);
  SSL_CTX_set_options(*(undefined8 *)(param_1 + 0x1b8),0x400000);
  if (param_3 != 0) {
    SSL_CTX_set_cipher_list(*(undefined8 *)(param_1 + 0x1b8),param_3);
  }
  if ((*(byte *)(param_1 + 0x22c) & 0x40) == 0) {
    FUN_143ca43b0(*(undefined8 *)(param_1 + 0x1b8));
  }
  if (param_4 == 0) {
    iVar2 = FUN_143ca3ed0(*(undefined8 *)(param_1 + 0x1b8),0,"../share");
    if (iVar2 == 0) {
      Curl_pp_sendf(1,
                    "Unable to load SSL Client certs from %s (set by LWS_OPENSSL_CLIENT_CERTS) -- client ssl isn\'t going to work\n"
                    ,"../share");
    }
  }
  else {
    iVar2 = FUN_143ca3ed0(*(undefined8 *)(param_1 + 0x1b8),param_4,0);
    if (iVar2 == 0) {
      Curl_pp_sendf(1,
                    "Unable to load SSL Client certs file from %s -- client ssl isn\'t going to work\n"
                    ,param_4);
      FUN_143dd3d10();
    }
  }
  if (param_5 != 0) {
    iVar2 = FUN_143dd4920(param_5);
    if ((iVar2 != 1) && ((*(uint *)(param_2 + 100) & 0x4000000) != 0)) {
      return 0;
    }
    Curl_pp_sendf(4,"%s: doing cert filepath %s\n","lws_tls_client_create_vhost_context",param_5);
    iVar2 = SSL_CTX_use_certificate_chain_file(*(undefined8 *)(param_1 + 0x1b8),param_5);
    if (iVar2 < 1) {
      Curl_pp_sendf(1,"problem %d getting cert \'%s\'\n",iVar2,param_5);
      FUN_143dd3d10();
      return 1;
    }
    Curl_pp_sendf(4,"Loaded client cert %s\n",param_5);
  }
  if (param_6 != 0) {
    Curl_pp_sendf(4,"%s: doing private key filepath\n","lws_tls_client_create_vhost_context");
    FUN_143dd39a0(*(undefined8 *)(param_1 + 0x1b8),param_2);
    iVar2 = SSL_CTX_use_PrivateKey_file(*(undefined8 *)(param_1 + 0x1b8),param_6,1);
    if (iVar2 != 1) {
      Curl_pp_sendf(1,"use_PrivateKey_file \'%s\'\n",param_6);
      FUN_143dd3d10();
      return 1;
    }
    Curl_pp_sendf(4,"Loaded client cert private key %s\n",param_6);
    iVar2 = SSL_CTX_check_private_key(*(undefined8 *)(param_1 + 0x1b8));
    if (iVar2 == 0) {
      Curl_pp_sendf(1,"Private SSL key doesn\'t match cert\n");
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143dd9f60 FUN_143dd9f60 body=290 status=ok
// SIG undefined FUN_143dd9f60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 * FUN_143dd9f60(undefined8 param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  _guard_xfg_dispatch_icall_nop(&local_98,0,0x68);
  local_98 = 0x67452301;
  local_94 = 0xefcdab89;
  local_90 = 0x98badcfe;
  local_8c = 0x10325476;
  local_88 = 0xc3d2e1f0;
  FUN_143dda090(&local_98,param_1,param_2);
  FUN_143dda140(&local_98);
  *param_3 = local_98._3_1_;
  param_3[1] = local_98._2_1_;
  param_3[2] = local_98._1_1_;
  param_3[3] = (undefined1)local_98;
  param_3[4] = local_94._3_1_;
  param_3[5] = local_94._2_1_;
  param_3[6] = local_94._1_1_;
  param_3[0xd] = local_8c._2_1_;
  param_3[7] = (undefined1)local_94;
  param_3[0xe] = local_8c._1_1_;
  param_3[8] = local_90._3_1_;
  param_3[0xf] = (undefined1)local_8c;
  param_3[9] = local_90._2_1_;
  param_3[0x10] = local_88._3_1_;
  param_3[10] = local_90._1_1_;
  param_3[0x11] = local_88._2_1_;
  param_3[0xb] = (undefined1)local_90;
  param_3[0x12] = local_88._1_1_;
  param_3[0xc] = local_8c._3_1_;
  param_3[0x13] = (undefined1)local_88;
  return param_3;
}



// FUNCTION 143dda090 FUN_143dda090 body=170 status=ok
// SIG undefined FUN_143dda090(void)

void FUN_143dda090(longlong param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong _Size;
  ulonglong uVar3;
  
  if (param_3 != 0) {
    uVar2 = 0;
    do {
      uVar3 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
      uVar1 = 0x40 - uVar3;
      _Size = param_3 - uVar2;
      if (uVar1 < param_3 - uVar2) {
        _Size = uVar1;
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(param_1 + 0x20 + uVar3),(void *)(uVar2 + param_2),_Size);
      *(byte *)(param_1 + 0x60) = *(char *)(param_1 + 0x60) + (char)_Size & 0x3f;
      *(longlong *)(param_1 + 0x18) = *(longlong *)(param_1 + 0x18) + _Size * 8;
      if ((*(byte *)(param_1 + 0x60) & 0x3f) == 0) {
        FUN_143dda320(param_1);
      }
      uVar2 = uVar2 + _Size;
    } while (uVar2 < param_3);
  }
  return;
}



// FUNCTION 143dda140 FUN_143dda140 body=472 status=ok
// SIG undefined FUN_143dda140(void)

void FUN_143dda140(longlong param_1)

{
  byte bVar1;
  ulonglong uVar2;
  ulonglong _Size;
  
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) = 0x80;
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320();
  }
  uVar2 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
  _Size = 0x40 - uVar2;
  if (_Size < 8) {
    _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x20 + uVar2),0,_Size);
    *(byte *)(param_1 + 0x60) = (char)_Size + *(char *)(param_1 + 0x60) & 0x3f;
    FUN_143dda320(param_1);
    uVar2 = (ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f);
    _Size = 0x40 - uVar2;
  }
  _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x20 + uVar2),0,_Size - 8);
  bVar1 = ((char)_Size + *(char *)(param_1 + 0x60)) - 8U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  *(undefined1 *)((ulonglong)bVar1 + 0x20 + param_1) = *(undefined1 *)(param_1 + 0x1f);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1e);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1d);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1c);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1b);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x1a);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x19);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  *(undefined1 *)((ulonglong)(*(byte *)(param_1 + 0x60) & 0x3f) + 0x20 + param_1) =
       *(undefined1 *)(param_1 + 0x18);
  bVar1 = *(char *)(param_1 + 0x60) + 1U & 0x3f;
  *(byte *)(param_1 + 0x60) = bVar1;
  if (bVar1 == 0) {
    FUN_143dda320(param_1);
  }
  return;
}



// FUNCTION 143dda320 FUN_143dda320 body=1650 status=ok
// SIG undefined FUN_143dda320(void)

void FUN_143dda320(uint *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ulonglong uVar32;
  uint uVar33;
  ulonglong uVar34;
  
  uVar31 = param_1[8];
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x21);
  uVar27 = param_1[9];
  uVar2 = *(undefined1 *)((longlong)param_1 + 0x25);
  uVar26 = param_1[10];
  uVar3 = *(undefined1 *)((longlong)param_1 + 0x29);
  uVar33 = param_1[0xb];
  uVar4 = *(undefined1 *)((longlong)param_1 + 0x2d);
  uVar29 = param_1[0xc];
  uVar5 = *(undefined1 *)((longlong)param_1 + 0x31);
  uVar28 = param_1[0xd];
  uVar6 = *(undefined1 *)((longlong)param_1 + 0x35);
  uVar30 = param_1[0xe];
  uVar7 = *(undefined1 *)((longlong)param_1 + 0x39);
  uVar17 = param_1[0xf];
  uVar8 = *(undefined1 *)((longlong)param_1 + 0x3d);
  uVar18 = param_1[0x10];
  uVar9 = *(undefined1 *)((longlong)param_1 + 0x41);
  uVar19 = param_1[0x11];
  uVar10 = *(undefined1 *)((longlong)param_1 + 0x45);
  uVar20 = param_1[0x12];
  uVar11 = *(undefined1 *)((longlong)param_1 + 0x49);
  uVar21 = param_1[0x13];
  uVar12 = *(undefined1 *)((longlong)param_1 + 0x4d);
  uVar22 = param_1[0x14];
  uVar13 = *(undefined1 *)((longlong)param_1 + 0x51);
  uVar23 = param_1[0x15];
  uVar14 = *(undefined1 *)((longlong)param_1 + 0x55);
  uVar24 = param_1[0x16];
  uVar15 = *(undefined1 *)((longlong)param_1 + 0x59);
  uVar25 = param_1[0x17];
  uVar16 = *(undefined1 *)((longlong)param_1 + 0x5d);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)((longlong)param_1 + 0x23);
  *(undefined1 *)((longlong)param_1 + 0x21) = *(undefined1 *)((longlong)param_1 + 0x22);
  *(undefined1 *)((longlong)param_1 + 0x22) = uVar1;
  *(char *)((longlong)param_1 + 0x23) = (char)uVar31;
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)((longlong)param_1 + 0x27);
  *(undefined1 *)((longlong)param_1 + 0x25) = *(undefined1 *)((longlong)param_1 + 0x26);
  *(undefined1 *)((longlong)param_1 + 0x26) = uVar2;
  *(char *)((longlong)param_1 + 0x27) = (char)uVar27;
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)((longlong)param_1 + 0x2b);
  *(undefined1 *)((longlong)param_1 + 0x29) = *(undefined1 *)((longlong)param_1 + 0x2a);
  *(undefined1 *)((longlong)param_1 + 0x2a) = uVar3;
  *(char *)((longlong)param_1 + 0x2b) = (char)uVar26;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)((longlong)param_1 + 0x2f);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_1 + 0x2e);
  *(undefined1 *)((longlong)param_1 + 0x2e) = uVar4;
  *(char *)((longlong)param_1 + 0x2f) = (char)uVar33;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)((longlong)param_1 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x31) = *(undefined1 *)((longlong)param_1 + 0x32);
  *(undefined1 *)((longlong)param_1 + 0x32) = uVar5;
  *(char *)((longlong)param_1 + 0x33) = (char)uVar29;
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((longlong)param_1 + 0x37);
  *(undefined1 *)((longlong)param_1 + 0x35) = *(undefined1 *)((longlong)param_1 + 0x36);
  *(undefined1 *)((longlong)param_1 + 0x36) = uVar6;
  *(char *)((longlong)param_1 + 0x37) = (char)uVar28;
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)((longlong)param_1 + 0x3b);
  *(undefined1 *)((longlong)param_1 + 0x39) = *(undefined1 *)((longlong)param_1 + 0x3a);
  *(undefined1 *)((longlong)param_1 + 0x3a) = uVar7;
  *(char *)((longlong)param_1 + 0x3b) = (char)uVar30;
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((longlong)param_1 + 0x3f);
  *(undefined1 *)((longlong)param_1 + 0x3d) = *(undefined1 *)((longlong)param_1 + 0x3e);
  *(undefined1 *)((longlong)param_1 + 0x3e) = uVar8;
  *(char *)((longlong)param_1 + 0x3f) = (char)uVar17;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)((longlong)param_1 + 0x43);
  *(undefined1 *)((longlong)param_1 + 0x41) = *(undefined1 *)((longlong)param_1 + 0x42);
  *(undefined1 *)((longlong)param_1 + 0x42) = uVar9;
  *(char *)((longlong)param_1 + 0x43) = (char)uVar18;
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)((longlong)param_1 + 0x47);
  *(undefined1 *)((longlong)param_1 + 0x45) = *(undefined1 *)((longlong)param_1 + 0x46);
  *(undefined1 *)((longlong)param_1 + 0x46) = uVar10;
  *(char *)((longlong)param_1 + 0x47) = (char)uVar19;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)((longlong)param_1 + 0x4b);
  *(undefined1 *)((longlong)param_1 + 0x49) = *(undefined1 *)((longlong)param_1 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0x4a) = uVar11;
  *(char *)((longlong)param_1 + 0x4b) = (char)uVar20;
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((longlong)param_1 + 0x4f);
  *(undefined1 *)((longlong)param_1 + 0x4d) = *(undefined1 *)((longlong)param_1 + 0x4e);
  *(undefined1 *)((longlong)param_1 + 0x4e) = uVar12;
  *(char *)((longlong)param_1 + 0x4f) = (char)uVar21;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)((longlong)param_1 + 0x53);
  *(undefined1 *)((longlong)param_1 + 0x51) = *(undefined1 *)((longlong)param_1 + 0x52);
  *(undefined1 *)((longlong)param_1 + 0x52) = uVar13;
  *(char *)((longlong)param_1 + 0x53) = (char)uVar22;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)((longlong)param_1 + 0x57);
  *(undefined1 *)((longlong)param_1 + 0x55) = *(undefined1 *)((longlong)param_1 + 0x56);
  *(undefined1 *)((longlong)param_1 + 0x56) = uVar14;
  *(char *)((longlong)param_1 + 0x57) = (char)uVar23;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)((longlong)param_1 + 0x5b);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)((longlong)param_1 + 0x5a);
  *(undefined1 *)((longlong)param_1 + 0x5a) = uVar15;
  *(char *)((longlong)param_1 + 0x5b) = (char)uVar24;
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((longlong)param_1 + 0x5f);
  *(undefined1 *)((longlong)param_1 + 0x5d) = *(undefined1 *)((longlong)param_1 + 0x5e);
  *(undefined1 *)((longlong)param_1 + 0x5e) = uVar16;
  *(char *)((longlong)param_1 + 0x5f) = (char)uVar25;
  uVar34 = 0;
  uVar31 = *param_1;
  uVar27 = param_1[1];
  uVar26 = param_1[2];
  uVar33 = param_1[3];
  uVar29 = param_1[4];
  do {
    uVar30 = uVar33;
    uVar33 = uVar26;
    uVar28 = uVar31;
    uVar31 = (uint)uVar34 & 0xf;
    if (0xf < uVar34) {
      uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^
               param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8] ^
               param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
      param_1[(ulonglong)uVar31 + 8] = uVar26 << 1 | (uint)((int)uVar26 < 0);
    }
    uVar32 = uVar34 + 1;
    uVar31 = (uVar28 << 5 | uVar28 >> 0x1b) + (~uVar27 & uVar30 | uVar33 & uVar27) +
             (&DAT_145dc0cb8)[uVar34 / 0x14] + param_1[(ulonglong)uVar31 + 8] + uVar29;
    uVar26 = uVar27 >> 2 | uVar27 << 0x1e;
    uVar34 = uVar32;
    uVar27 = uVar28;
    uVar29 = uVar30;
  } while (uVar32 < 0x14);
  uVar34 = 0x14;
  do {
    uVar27 = uVar31;
    uVar29 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    uVar32 = uVar34 / 0x14;
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar34 = uVar34 + 1;
    uVar31 = (uVar29 ^ uVar33 ^ uVar28) +
             (uVar27 << 5 | uVar27 >> 0x1b) + (&DAT_145dc0cb8)[uVar32] + uVar26 + uVar30;
    uVar26 = uVar28 >> 2 | uVar28 << 0x1e;
    uVar28 = uVar27;
    uVar30 = uVar29;
  } while (uVar34 < 0x28);
  uVar34 = 0x28;
  do {
    uVar28 = uVar31;
    uVar30 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar32 = uVar34 + 1;
    uVar31 = (uVar28 << 5 | uVar28 >> 0x1b) + ((uVar33 | uVar27) & uVar30 | uVar33 & uVar27) +
             (&DAT_145dc0cb8)[uVar34 / 0x14] + uVar26 + uVar29;
    uVar26 = uVar27 >> 2 | uVar27 << 0x1e;
    uVar34 = uVar32;
    uVar27 = uVar28;
    uVar29 = uVar30;
  } while (uVar32 < 0x3c);
  uVar34 = 0x3c;
  do {
    uVar27 = uVar31;
    uVar29 = uVar33;
    uVar33 = uVar26;
    uVar31 = (uint)uVar34 & 0xf;
    uVar26 = param_1[(ulonglong)(uVar31 - 8 & 0xf) + 8] ^ param_1[(ulonglong)(uVar31 - 3 & 0xf) + 8]
             ^ param_1[(ulonglong)(uVar31 + 2 & 0xf) + 8] ^ param_1[(ulonglong)uVar31 + 8];
    uVar26 = uVar26 << 1 | (uint)((int)uVar26 < 0);
    uVar32 = uVar34 / 0x14;
    param_1[(ulonglong)uVar31 + 8] = uVar26;
    uVar34 = uVar34 + 1;
    uVar31 = (uVar29 ^ uVar33 ^ uVar28) +
             (uVar27 << 5 | uVar27 >> 0x1b) + (&DAT_145dc0cb8)[uVar32] + uVar26 + uVar30;
    uVar26 = uVar28 >> 2 | uVar28 << 0x1e;
    uVar28 = uVar27;
    uVar30 = uVar29;
  } while (uVar34 < 0x50);
  param_1[1] = param_1[1] + uVar27;
  param_1[3] = param_1[3] + uVar33;
  param_1[4] = param_1[4] + uVar29;
  *param_1 = *param_1 + uVar31;
  param_1[2] = param_1[2] + uVar26;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  return;
}



// FUNCTION 143dda9a0 FUN_143dda9a0 body=2330 status=ok
// SIG undefined FUN_143dda9a0(void)

undefined8 FUN_143dda9a0(longlong param_1,byte param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  longlong *plVar3;
  uint *puVar4;
  char cVar5;
  byte bVar6;
  uint uVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  undefined8 uVar11;
  ushort uVar12;
  longlong lVar13;
  uint uVar14;
  undefined2 *_Src;
  ulonglong uVar15;
  char *pcVar16;
  longlong lVar17;
  int iVar18;
  
  lVar13 = 0;
  uVar15 = (ulonglong)param_2;
  uVar14 = 0;
  iVar18 = 8;
  if ((*(byte *)(param_1 + 0x1b8) & 0x80) != 0) {
    return 0xffffffff;
  }
  switch(*(undefined1 *)(param_1 + 0x1c4)) {
  case 0:
    puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
    *puVar4 = *puVar4 & 0xfffff7ff;
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x60) + 0xc1);
    if (cVar5 != '\r') {
      Curl_pp_sendf(1,"unknown spec version %02d\n",cVar5);
      return 0;
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xba) = param_2 & 0xf;
    lVar13 = *(longlong *)(param_1 + 0x60);
    switch(*(undefined1 *)(lVar13 + 0xba)) {
    case 0:
      if ((*(uint *)(lVar13 + 0xc4) >> 8 & 1) != 0) {
        *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xffffbfff;
        break;
      }
      goto switchD_143ddaa64_caseD_3;
    case 1:
      *(byte *)(lVar13 + 0xbc) = param_2 & 0x70;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x100;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 ^ (*(int *)(*(longlong *)(param_1 + 0x78) + 0x4b0) << 2 ^
                          *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4)) & 0x400;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x4000;
      break;
    case 2:
      *(byte *)(lVar13 + 0xbc) = param_2 & 0x70;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffbff;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x100;
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 | 0x4000;
      break;
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
      goto switchD_143ddaa64_caseD_3;
    case 8:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffbff;
      *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbe) = 0;
      break;
    default:
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | 0x800;
    }
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0xbb) = param_2 & 0x70;
    lVar13 = *(longlong *)(param_1 + 0x60);
    if (*(char *)(lVar13 + 0xbb) == '\0') {
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffffe;
      *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | (uint)(param_2 >> 7);
      lVar13 = *(longlong *)(param_1 + 0x60);
      uVar7 = *(uint *)(lVar13 + 0xc4);
      if (((uVar7 >> 9 & 1) == 0) || (1 < (byte)(*(char *)(lVar13 + 0xba) - 1U))) {
        if (((*(byte *)(lVar13 + 0xba) & 8) == 0) && ((uVar7 & 1) != 0)) {
          *(uint *)(lVar13 + 0xc4) = uVar7 & 0xfffffeff;
          puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
          *puVar4 = *puVar4 & 0xfffffdff;
        }
        lVar13 = *(longlong *)(param_1 + 0x60);
        if (((*(byte *)(lVar13 + 0xba) & 8) == 0) || ((*(byte *)(lVar13 + 0xc4) & 1) != 0)) {
          if ((*(uint *)(lVar13 + 0xc4) & 1) == 0) {
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | 0x200;
          }
          lVar13 = *(longlong *)(param_1 + 0x60);
          if ((byte)(*(char *)(lVar13 + 0xba) - 1U) < 2) {
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) & 0xfffffffd;
            if (*(char *)(lVar13 + 0xba) == '\x02') {
              uVar14 = 2;
            }
            *(uint *)(lVar13 + 0xc4) = *(uint *)(lVar13 + 0xc4) | uVar14;
          }
          *(undefined1 *)(param_1 + 0x1c4) = 5;
          return 0;
        }
      }
    }
switchD_143ddaa64_caseD_3:
    uVar11 = 0xffffffff;
    break;
  default:
    Curl_pp_sendf(1,"client rx illegal state\n");
LAB_143ddb29c:
    uVar11 = 1;
    break;
  case 5:
    *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) =
         param_2 >> 4 & 0xffffff8 | *(uint *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 0xfffffff7;
    lVar17 = *(longlong *)(param_1 + 0x60);
    if ((param_2 & 0x7f) == 0x7e) {
      if ((*(byte *)(lVar17 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 6;
        return 0;
      }
    }
    else {
      if ((param_2 & 0x7f) != 0x7f) {
        *(ulonglong *)(lVar17 + 0xa8) = (ulonglong)(param_2 & 0x7f);
        goto LAB_143ddac60;
      }
      if ((*(byte *)(lVar17 + 0xba) & 8) == 0) {
        *(undefined1 *)(param_1 + 0x1c4) = 8;
        return 0;
      }
    }
    Curl_pp_sendf(2,"Control frame asking for extended length is illegal\n");
    uVar11 = 0xffffffff;
    break;
  case 6:
    *(ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8) = uVar15 << 8;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 7;
    break;
  case 7:
  case 0xf:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15;
LAB_143ddac60:
    if ((*(byte *)(*(longlong *)(param_1 + 0x60) + 0xc4) & 8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x10;
      return 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x14;
      return 0;
    }
LAB_143ddaef2:
    *(undefined1 *)(param_1 + 0x1c4) = 0;
LAB_143ddaf3d:
    plVar3 = *(longlong **)(param_1 + 0x60);
    bVar6 = *(byte *)((longlong)plVar3 + 0xba);
    if (bVar6 < 3) {
LAB_143ddaf93:
      plVar3 = *(longlong **)(param_1 + 0x60);
      lVar13 = *plVar3 + 0x10;
      uVar14 = *(uint *)(plVar3 + 0x16);
      lVar17 = (longlong)(int)uVar14;
      if (((*(uint *)((longlong)plVar3 + 0xc4) >> 10 & 1) == 0) ||
         ((*(uint *)((longlong)plVar3 + 0xc4) >> 0xb & 1) != 0)) {
LAB_143ddb207:
        if (((-1 < (int)uVar14) || (iVar18 == 9)) &&
           ((lVar13 != 0 &&
            (*(undefined1 *)(lVar17 + lVar13) = 0,
            *(longlong *)(*(longlong *)(param_1 + 0xa0) + 8) != 0)))) {
          if (uVar14 == 0) {
            FUN_140447710(param_1);
          }
          else {
            FUN_140447710(param_1);
          }
          if (2 < *(ushort *)(param_1 + 0x70) - 0x119) {
            iVar18 = (**(code **)(*(longlong *)(param_1 + 0xa0) + 8))
                               (param_1,iVar18,*(undefined8 *)(param_1 + 0x130),lVar13,lVar17);
            puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
            *puVar4 = *puVar4 & 0xffffbfff;
            if (iVar18 != 0) goto LAB_143ddb29c;
          }
        }
        *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
        goto LAB_143ddb287;
      }
      iVar10 = FUN_143dc61f0((longlong)plVar3 + 0xbe,lVar13,lVar17);
      if (iVar10 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x60);
        if (((*(longlong *)(lVar8 + 0xa8) != 0) || ((*(byte *)(lVar8 + 0xc4) & 1) == 0)) ||
           (*(char *)(lVar8 + 0xbe) == '\0')) goto LAB_143ddb207;
        uVar11 = 0xc;
        pcVar16 = "partial utf8";
      }
      else {
        uVar11 = 8;
        pcVar16 = "bad utf8";
      }
      FUN_143dc81b0(param_1,0x3ef,pcVar16,uVar11);
    }
    else {
      if (bVar6 != 8) {
        if (bVar6 == 9) {
          if (((*(char *)((longlong)plVar3 + 0xbd) == '\0') &&
              ((*(byte *)((longlong)plVar3 + 0xc4) & 0x80) == 0)) &&
             (*(uint *)(plVar3 + 0x16) < 0x7e)) {
            _guard_xfg_dispatch_icall_nop
                      (plVar3 + 3,(void *)(*plVar3 + 0x10),(ulonglong)*(uint *)(plVar3 + 0x16));
            *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb8) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
            puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
            *puVar4 = *puVar4 | 0x80;
            FUN_143dcdd70(param_1);
          }
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
          return 0;
        }
        if (bVar6 != 10) {
          *(undefined4 *)(plVar3 + 0x16) = 0;
          return 0xffffffff;
        }
        FUN_140447710(*plVar3 + 0x10,(int)plVar3[0x16]);
        if (*(char *)(param_1 + 0x1c6) == '\x11') {
          FUN_143dc6c40(param_1,0,0);
        }
        iVar18 = 9;
        goto LAB_143ddaf93;
      }
      lVar17 = *plVar3;
      _Src = (undefined2 *)(lVar17 + 0x10);
      if ((((*(uint *)(*(longlong *)(param_1 + 0x78) + 0x4b0) & 0x100) == 0) ||
          (*(uint *)(plVar3 + 0x16) < 3)) ||
         (iVar18 = FUN_143dc61f0((longlong)plVar3 + 0xbe,lVar17 + 0x12,*(uint *)(plVar3 + 0x16) - 2)
         , iVar18 == 0)) {
        if (*(short *)(param_1 + 0x70) != 0x11b) {
          if (1 < *(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0)) {
            uVar12 = CONCAT11(*(undefined1 *)_Src,*(undefined1 *)(lVar17 + 0x11));
            uVar9 = uVar12 - 1000;
            if (((0xb < uVar9) || ((0xf8fU >> (uVar9 & 0x1f) & 1) == 0)) && (uVar12 < 3000)) {
              *_Src = 0xea03;
            }
          }
          iVar18 = FUN_143dc7570(*(undefined8 *)(*(longlong *)(param_1 + 0xa0) + 8),param_1,0x26,
                                 *(undefined8 *)(param_1 + 0x130),_Src,
                                 *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0));
          if (iVar18 == 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(param_1 + 0x60) + 0x18),_Src,
                       (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0));
            *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xbd) =
                 *(undefined1 *)(*(longlong *)(param_1 + 0x60) + 0xb0);
            FUN_143dcd530(param_1,9);
            FUN_143dc6c40(param_1,0x18,3);
            *(undefined2 *)(param_1 + 0x70) = 0x119;
            *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xffdfffff | 0x100000;
            FUN_143dcdd70(param_1);
            *(undefined4 *)(*(longlong *)(param_1 + 0x60) + 0xb0) = 0;
            return 0;
          }
        }
        goto switchD_143ddaa64_caseD_3;
      }
    }
    FUN_143dc7250(8,lVar13,(longlong)(int)uVar14);
    goto switchD_143ddaa64_caseD_3;
  case 8:
    if ((char)param_2 < '\0') {
      Curl_pp_sendf(2,"b63 of length must be zero\n");
      uVar11 = 0xffffffff;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0xa8) = 0;
      uVar11 = 0;
      *(undefined1 *)(param_1 + 0x1c4) = 9;
    }
    break;
  case 9:
    *(undefined1 *)(param_1 + 0x1c4) = 10;
    uVar11 = 0;
    break;
  case 10:
    *(undefined1 *)(param_1 + 0x1c4) = 0xb;
    uVar11 = 0;
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x1c4) = 0xc;
    uVar11 = 0;
    break;
  case 0xc:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 0x18;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xd;
    break;
  case 0xd:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 0x10;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xe;
    break;
  case 0xe:
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *puVar1 = *puVar1 | uVar15 << 8;
    uVar11 = 0;
    *(undefined1 *)(param_1 + 0x1c4) = 0xf;
    break;
  case 0x10:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x95) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x11;
    uVar11 = 0;
    break;
  case 0x11:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x96) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x12;
    uVar11 = 0;
    break;
  case 0x12:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x97) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0x13;
    uVar11 = 0;
    break;
  case 0x13:
    *(byte *)(*(longlong *)(param_1 + 0x60) + 0x98) = param_2;
    if (param_2 != 0) {
      puVar4 = (uint *)(*(longlong *)(param_1 + 0x60) + 0xc4);
      *puVar4 = *puVar4 & 0xfffffffb;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8) != 0) {
      *(undefined1 *)(param_1 + 0x1c4) = 0x14;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0;
    goto LAB_143ddaf3d;
  case 0x14:
    lVar17 = *(longlong *)(param_1 + 0x60);
    if (((*(uint *)(lVar17 + 0xc4) & 8) != 0) && ((*(uint *)(lVar17 + 0xc4) & 4) == 0)) {
      param_2 = param_2 ^ *(byte *)((ulonglong)(*(byte *)(lVar17 + 0xb9) & 3) + 0x95 + lVar17);
      *(byte *)(lVar17 + 0xb9) = *(byte *)(lVar17 + 0xb9) + 1;
    }
    *(byte *)((ulonglong)((int)(*(longlong **)(param_1 + 0x60))[0x16] + 0x10) +
             **(longlong **)(param_1 + 0x60)) = param_2;
    piVar2 = (int *)(*(longlong *)(param_1 + 0x60) + 0xb0);
    *piVar2 = *piVar2 + 1;
    plVar3 = (longlong *)(*(longlong *)(param_1 + 0x60) + 0xa8);
    *plVar3 = *plVar3 + -1;
    if (*plVar3 == 0) goto LAB_143ddaef2;
    uVar15 = *(ulonglong *)(*(longlong *)(param_1 + 0xa0) + 0x18);
    if (uVar15 == 0) {
      if (*(int *)(*(longlong *)(param_1 + 0x60) + 0xb0) !=
          *(int *)(*(longlong *)(param_1 + 0x78) + 0x4bc)) goto LAB_143ddb287;
      goto LAB_143ddaf3d;
    }
    if (*(uint *)(*(longlong *)(param_1 + 0x60) + 0xb0) == uVar15) goto LAB_143ddaf3d;
LAB_143ddb287:
    uVar11 = 0;
  }
  return uVar11;
}



// FUNCTION 143ddb350 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(char * param_1)

void __cdecl std::_guard_xfg_dispatch_icall_nop(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb350. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xlength_error(param_1);
  return;
}



// FUNCTION 143ddb356 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Query_perf_counter();
  return;
}



// FUNCTION 143ddb35c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb35c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Query_perf_frequency();
  return;
}



// FUNCTION 143ddb364 __std_reverse_trivially_swappable_4 body=194 status=ok
// SIG undefined __std_reverse_trivially_swappable_4(void)

void __std_reverse_trivially_swappable_4(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined4 uVar1;
  undefined1 auVar2 [32];
  undefined1 auVar3 [32];
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined1 (*pauVar6) [32];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar5) && ((DAT_1468387b4 >> 5 & 1) != 0)) {
    puVar4 = *param_1;
    do {
      auVar2 = vpermq_avx2(*param_1,0x4e);
      param_2 = param_2 + -1;
      auVar2 = vpshufd_avx2(auVar2,0x1b);
      auVar3 = vpermq_avx2(*param_2,0x4e);
      auVar3 = vpshufd_avx2(auVar3,0x1b);
      *param_1 = auVar3;
      param_1 = param_1 + 1;
      *param_2 = auVar2;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar5 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar5 = (longlong)param_2 - (longlong)param_1;
  if (0x1f < uVar5) {
    puVar4 = *param_1;
    pauVar6 = param_2;
    do {
      param_2 = (undefined1 (*) [32])(pauVar6[-1] + 0x10);
      auVar8._4_4_ = *(undefined4 *)(*param_1 + 8);
      auVar8._0_4_ = *(undefined4 *)(*param_1 + 0xc);
      auVar8._8_4_ = *(undefined4 *)(*param_1 + 4);
      auVar8._12_4_ = *(undefined4 *)*param_1;
      auVar7._4_4_ = *(undefined4 *)(pauVar6[-1] + 0x18);
      auVar7._0_4_ = *(undefined4 *)(pauVar6[-1] + 0x1c);
      auVar7._8_4_ = *(undefined4 *)(pauVar6[-1] + 0x14);
      auVar7._12_4_ = *(undefined4 *)*param_2;
      *(undefined1 (*) [16])*param_1 = auVar7;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
      pauVar6 = param_2;
    } while (param_1 != (undefined1 (*) [32])(puVar4 + (uVar5 >> 1 & 0x7ffffffffffffff0)));
  }
  for (; (param_1 != param_2 &&
         (param_2 = (undefined1 (*) [32])(param_2[-1] + 0x1c), param_1 != param_2));
      param_1 = (undefined1 (*) [32])(*param_1 + 4)) {
    uVar1 = *(undefined4 *)*param_1;
    *(undefined4 *)*param_1 = *(undefined4 *)*param_2;
    *(undefined4 *)*param_2 = uVar1;
  }
  return;
}



// FUNCTION 143ddb428 __std_reverse_trivially_swappable_8 body=186 status=ok
// SIG undefined __std_reverse_trivially_swappable_8(void)

void __std_reverse_trivially_swappable_8(undefined1 (*param_1) [32],undefined1 (*param_2) [32])

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 *puVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if ((0x3f < uVar6) && ((DAT_1468387b4 >> 5 & 1) != 0)) {
    puVar5 = *param_1;
    do {
      auVar3 = vpermq_avx2(*param_1,0x1b);
      param_2 = param_2 + -1;
      auVar4 = vpermq_avx2(*param_2,0x1b);
      *param_1 = auVar4;
      param_1 = param_1 + 1;
      *param_2 = auVar3;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7fffffffffffffe0)));
  }
  uVar6 = (longlong)param_2 - (longlong)param_1;
  if (0x1f < uVar6) {
    puVar5 = *param_1;
    do {
      auVar1 = *(undefined1 (*) [16])*param_1;
      param_2 = (undefined1 (*) [32])(param_2[-1] + 0x10);
      auVar8._0_8_ = auVar1._8_8_;
      auVar8._8_4_ = auVar1._0_4_;
      auVar8._12_4_ = auVar1._4_4_;
      auVar1 = *(undefined1 (*) [16])*param_2;
      auVar7._0_8_ = auVar1._8_8_;
      auVar7._8_4_ = auVar1._0_4_;
      auVar7._12_4_ = auVar1._4_4_;
      *(undefined1 (*) [16])*param_1 = auVar7;
      param_1 = (undefined1 (*) [32])(*param_1 + 0x10);
      *(undefined1 (*) [16])*param_2 = auVar8;
    } while (param_1 != (undefined1 (*) [32])(puVar5 + (uVar6 >> 1 & 0x7ffffffffffffff0)));
  }
  for (; (param_1 != param_2 &&
         (param_2 = (undefined1 (*) [32])(param_2[-1] + 0x18), param_1 != param_2));
      param_1 = (undefined1 (*) [32])(*param_1 + 8)) {
    uVar2 = *(undefined8 *)*param_1;
    *(undefined8 *)*param_1 = *(undefined8 *)*param_2;
    *(undefined8 *)*param_2 = uVar2;
  }
  return;
}



// FUNCTION 143ddb4e2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl std::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb4e2. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xbad_alloc();
  return;
}



// FUNCTION 143ddb4e8 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(error_type param_1)

void __cdecl std::_guard_xfg_dispatch_icall_nop(error_type param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb4e8. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xregex_error(param_1);
  return;
}



// FUNCTION 143ddb4ee _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(wchar_t * param_1, wchar_t * param_2, wchar_t * param_3, wchar_t * param_4, _Collvec * param_5)

int __cdecl
_guard_xfg_dispatch_icall_nop
          (wchar_t *param_1,wchar_t *param_2,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb4ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _Wcscoll(param_1,param_2,param_3,param_4,param_5);
  return iVar1;
}



// FUNCTION 143ddb4f4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG size_t _guard_xfg_dispatch_icall_nop(wchar_t * _String1, wchar_t * _End1, wchar_t * param_3, wchar_t * param_4, _Collvec * param_5)

size_t __cdecl
_guard_xfg_dispatch_icall_nop
          (wchar_t *_String1,wchar_t *_End1,wchar_t *param_3,wchar_t *param_4,_Collvec *param_5)

{
  size_t sVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  sVar1 = _Wcsxfrm(_String1,_End1,param_3,param_4,param_5);
  return sVar1;
}



// FUNCTION 143ddb4fc ~_Fac_tidy_reg_t body=103 status=ok
// SIG undefined ~_Fac_tidy_reg_t(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  while (puVar1 = DAT_146bcbbb8, DAT_146bcbbb8 != (undefined8 *)0x0) {
    puVar2 = DAT_146bcbbb8 + 1;
    DAT_146bcbbb8 = (undefined8 *)*DAT_146bcbbb8;
    puVar2 = (undefined8 *)(**(code **)(*(longlong *)*puVar2 + 0x10))();
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1,param_3,param_4,uVar3);
    }
    FMemory::operator_delete(puVar1,0x10);
  }
  return;
}



// FUNCTION 143ddb564 _Facet_Register body=56 status=ok
// SIG undefined _Facet_Register(void)

void std::_Facet_Register(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = DAT_146bcbbb8;
    puVar1[1] = param_1;
  }
  DAT_146bcbbb8 = puVar1;
  return;
}



// FUNCTION 143ddb59c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG _Locimp * _guard_xfg_dispatch_icall_nop(bool param_1)

_Locimp * __cdecl std::locale::_guard_xfg_dispatch_icall_nop(bool param_1)

{
  _Locimp *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _Init(param_1);
  return p_Var1;
}



// FUNCTION 143ddb5a2 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG _Locimp * _guard_xfg_dispatch_icall_nop(void)

_Locimp * __cdecl std::locale::_guard_xfg_dispatch_icall_nop(void)

{
  _Locimp *p_Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  p_Var1 = _Getgloballocale();
  return p_Var1;
}



// FUNCTION 143ddb5b4 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl std::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5b4. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xbad_function_call();
  return;
}



// FUNCTION 143ddb5ba _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG uint _guard_xfg_dispatch_icall_nop(void)

uint __cdecl std::_guard_xfg_dispatch_icall_nop(void)

{
  uint uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = _Random_device();
  return uVar1;
}



// FUNCTION 143ddb5c0 _Lock body=6 status=ok
// SIG void _Lock(basic_streambuf<char,std::char_traits<char>_> * this)

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Lock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Lock(this);
  return;
}



// FUNCTION 143ddb5c6 _Unlock body=6 status=ok
// SIG void _Unlock(basic_streambuf<char,std::char_traits<char>_> * this)

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::_Unlock
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Unlock(this);
  return;
}



// FUNCTION 143ddb5cc imbue body=6 status=ok
// SIG void imbue(basic_streambuf<char,std::char_traits<char>_> * this, locale * param_1)

void __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::imbue
          (basic_streambuf<char,std::char_traits<char>_> *this,locale *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  imbue(this,param_1);
  return;
}



// FUNCTION 143ddb5d2 setbuf body=6 status=ok
// SIG basic_streambuf<char,struct_std::char_traits<char>_> * setbuf(basic_streambuf<char,std::char_traits<char>_> * this, char * param_1, __int64 param_2)

basic_streambuf<char,struct_std::char_traits<char>_> * __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::setbuf
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  basic_streambuf<char,struct_std::char_traits<char>_> *pbVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pbVar1 = setbuf(this,param_1,param_2);
  return pbVar1;
}



// FUNCTION 143ddb5d8 showmanyc body=6 status=ok
// SIG __int64 showmanyc(basic_streambuf<char,std::char_traits<char>_> * this)

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::showmanyc
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = showmanyc(this);
  return _Var1;
}



// FUNCTION 143ddb5de sync body=6 status=ok
// SIG int sync(basic_streambuf<char,std::char_traits<char>_> * this)

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::sync
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = sync(this);
  return iVar1;
}



// FUNCTION 143ddb5e4 uflow body=6 status=ok
// SIG int uflow(basic_streambuf<char,std::char_traits<char>_> * this)

int __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::uflow
          (basic_streambuf<char,std::char_traits<char>_> *this)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = uflow(this);
  return iVar1;
}



// FUNCTION 143ddb5ea xsgetn body=6 status=ok
// SIG __int64 xsgetn(basic_streambuf<char,std::char_traits<char>_> * this, char * param_1, __int64 param_2)

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsgetn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsgetn(this,param_1,param_2);
  return _Var1;
}



// FUNCTION 143ddb5f0 xsputn body=6 status=ok
// SIG __int64 xsputn(basic_streambuf<char,std::char_traits<char>_> * this, char * param_1, __int64 param_2)

__int64 __thiscall
std::basic_streambuf<char,std::char_traits<char>_>::xsputn
          (basic_streambuf<char,std::char_traits<char>_> *this,char *param_1,__int64 param_2)

{
  __int64 _Var1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Var1 = xsputn(this,param_1,param_2);
  return _Var1;
}



// FUNCTION 143ddb5f6 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5f6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_init_in_situ();
  return;
}



// FUNCTION 143ddb5fc _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_destroy_in_situ();
  return;
}



// FUNCTION 143ddb602 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb602. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_lock();
  return;
}



// FUNCTION 143ddb608 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Mtx_unlock();
  return;
}



// FUNCTION 143ddb60e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(int param_1)

void __cdecl std::_guard_xfg_dispatch_icall_nop(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb60e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Throw_C_error(param_1);
  return;
}



// FUNCTION 143ddb614 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(char * param_1)

void __cdecl std::_guard_xfg_dispatch_icall_nop(char *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb614. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _Xout_of_range(param_1);
  return;
}



// FUNCTION 143ddb61a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb61a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _Thrd_id();
  return;
}



// FUNCTION 143ddb620 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb620. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrCreate(param_1);
  return;
}



// FUNCTION 143ddb626 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb626. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrDestroy(param_1);
  return;
}



// FUNCTION 143ddb62c _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1, void * param_2)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrCopy(param_1,param_2);
  return;
}



// FUNCTION 143ddb632 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1, void * param_2)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1,void *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb632. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrAssign(param_1,param_2);
  return;
}



// FUNCTION 143ddb638 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG bool _guard_xfg_dispatch_icall_nop(void * param_1)

bool __cdecl _guard_xfg_dispatch_icall_nop(void *param_1)

{
  bool bVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar1 = __ExceptionPtrToBool(param_1);
  return bVar1;
}



// FUNCTION 143ddb63e _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb63e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrCurrentException(param_1);
  return;
}



// FUNCTION 143ddb644 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void * param_1)

void __cdecl _guard_xfg_dispatch_icall_nop(void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  __ExceptionPtrRethrow(param_1);
  return;
}



// FUNCTION 143ddb64a _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG int _guard_xfg_dispatch_icall_nop(once_flag * param_1, _func_int_void_ptr_void_ptr_void_ptr_ptr * param_2, void * param_3)

int __cdecl
std::_guard_xfg_dispatch_icall_nop
          (once_flag *param_1,_func_int_void_ptr_void_ptr_void_ptr_ptr *param_2,void *param_3)

{
  int iVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000143ddb64a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar1 = _Execute_once(param_1,param_2,param_3);
  return iVar1;
}



// FUNCTION 143ddb650 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG void _guard_xfg_dispatch_icall_nop(void)

void __cdecl std::_guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddb650. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  _XGetLastError();
  return;
}



// FUNCTION 143ddb658 initialize_legacy_wide_specifiers body=29 status=ok
// SIG undefined initialize_legacy_wide_specifiers(void)

undefined8 initialize_legacy_wide_specifiers(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)__local_stdio_printf_options();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)__local_stdio_scanf_options();
  *puVar1 = *puVar1 | 2;
  return 0;
}



// FUNCTION 143ddb678 __scrt_acquire_startup_lock body=57 status=ok
// SIG undefined __scrt_acquire_startup_lock(void)

undefined8 __scrt_acquire_startup_lock(void)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  undefined8 uVar4;
  bool bVar5;
  
  iVar2 = __scrt_is_ucrt_dll_in_use();
  if (iVar2 == 0) {
LAB_143ddb6a6:
    uVar4 = 0;
  }
  else {
    do {
      pvVar3 = (void *)0x0;
      LOCK();
      bVar5 = DAT_146bcbbc8 == (void *)0x0;
      pvVar1 = StackBase;
      if (!bVar5) {
        pvVar3 = DAT_146bcbbc8;
        pvVar1 = DAT_146bcbbc8;
      }
      DAT_146bcbbc8 = pvVar1;
      UNLOCK();
      if (bVar5) goto LAB_143ddb6a6;
    } while (StackBase != pvVar3);
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 143ddb6b4 __scrt_initialize_crt body=73 status=ok
// SIG undefined __scrt_initialize_crt(void)

undefined8 __scrt_initialize_crt(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_146bcbbd0 = 1;
  }
  __isa_available_init();
  cVar1 = BuildSettings::IsPromotedBuild();
  if (cVar1 != '\0') {
    cVar1 = BuildSettings::IsPromotedBuild();
    if (cVar1 != '\0') {
      return 1;
    }
    BuildSettings::IsPromotedBuild(0);
  }
  return 0;
}



// FUNCTION 143ddb700 __scrt_initialize_onexit_tables body=215 status=ok
// SIG undefined __scrt_initialize_onexit_tables(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __scrt_initialize_onexit_tables(uint param_1)

{
  byte bVar1;
  int iVar2;
  
  if (DAT_146bcbbd1 == '\0') {
    if (1 < param_1) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(5);
    }
    iVar2 = __scrt_is_ucrt_dll_in_use();
    if ((iVar2 == 0) || (param_1 != 0)) {
      bVar1 = 0x40 - ((byte)DAT_1468387a8 & 0x3f) & 0x3f;
      _DAT_146bcbbd8 = (0xffffffffffffffffU >> bVar1 | -1L << 0x40 - bVar1) ^ DAT_1468387a8;
      uRam0000000146bcbbe0 = _DAT_146bcbbd8;
      _DAT_146bcbbe8 = _DAT_146bcbbd8;
      _DAT_146bcbbf0 = _DAT_146bcbbd8;
      uRam0000000146bcbbf8 = _DAT_146bcbbd8;
      _DAT_146bcbc00 = _DAT_146bcbbd8;
    }
    else {
      iVar2 = _guard_xfg_dispatch_icall_nop(&DAT_146bcbbd8);
      if ((iVar2 != 0) || (iVar2 = _guard_xfg_dispatch_icall_nop(&DAT_146bcbbf0), iVar2 != 0)) {
        return 0;
      }
    }
    DAT_146bcbbd1 = '\x01';
  }
  return 1;
}



// FUNCTION 143ddb7d8 __scrt_is_nonwritable_in_current_image body=151 status=ok
// SIG undefined __scrt_is_nonwritable_in_current_image(void)

/* WARNING: Removing unreachable block (ram,0x000143ddb866) */
/* WARNING: Enum "SectionFlags": Some values do not have unique names */

ulonglong __scrt_is_nonwritable_in_current_image(longlong param_1)

{
  ulonglong uVar1;
  uint7 uVar2;
  IMAGE_SECTION_HEADER *pIVar3;
  
  uVar1 = 0;
  for (pIVar3 = &IMAGE_SECTION_HEADER_140000318; pIVar3 != (IMAGE_SECTION_HEADER *)&DAT_140000458;
      pIVar3 = pIVar3 + 1) {
    if (((ulonglong)(uint)pIVar3->VirtualAddress <= param_1 - 0x140000000U) &&
       (uVar1 = (ulonglong)((pIVar3->Misc).PhysicalAddress + pIVar3->VirtualAddress),
       param_1 - 0x140000000U < uVar1)) goto LAB_143ddb84f;
  }
  pIVar3 = (IMAGE_SECTION_HEADER *)0x0;
LAB_143ddb84f:
  if (pIVar3 == (IMAGE_SECTION_HEADER *)0x0) {
    uVar1 = uVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = (uint7)(uVar1 >> 8);
    if ((int)pIVar3->Characteristics < 0) {
      uVar1 = (ulonglong)uVar2 << 8;
    }
    else {
      uVar1 = CONCAT71(uVar2,1);
    }
  }
  return uVar1;
}



// FUNCTION 143ddb874 __scrt_release_startup_lock body=36 status=ok
// SIG undefined __scrt_release_startup_lock(void)

void __scrt_release_startup_lock(char param_1)

{
  int iVar1;
  
  iVar1 = __scrt_is_ucrt_dll_in_use();
  if ((iVar1 != 0) && (param_1 == '\0')) {
    LOCK();
    DAT_146bcbbc8 = 0;
    UNLOCK();
  }
  return;
}



// FUNCTION 143ddb898 __scrt_uninitialize_crt body=43 status=ok
// SIG undefined __scrt_uninitialize_crt(void)

undefined1 __scrt_uninitialize_crt(undefined1 param_1,char param_2)

{
  if ((DAT_146bcbbd0 == '\0') || (param_2 == '\0')) {
    BuildSettings::IsPromotedBuild(param_1);
    BuildSettings::IsPromotedBuild(param_1);
  }
  return 1;
}



// FUNCTION 143ddb8c4 _onexit body=79 status=ok
// SIG _onexit_t _onexit(_onexit_t _Func)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

_onexit_t __cdecl _onexit(_onexit_t _Func)

{
  int iVar1;
  byte bVar2;
  _onexit_t p_Var3;
  
  bVar2 = (byte)DAT_1468387a8 & 0x3f;
  if (((DAT_1468387a8 ^ _DAT_146bcbbd8) >> bVar2 | (DAT_1468387a8 ^ _DAT_146bcbbd8) << 0x40 - bVar2)
      == 0xffffffffffffffff) {
    iVar1 = _guard_xfg_dispatch_icall_nop();
  }
  else {
    iVar1 = _guard_xfg_dispatch_icall_nop(&DAT_146bcbbd8,_Func);
  }
  p_Var3 = (_onexit_t)0x0;
  if (iVar1 == 0) {
    p_Var3 = _Func;
  }
  return p_Var3;
}



// FUNCTION 143ddb914 atexit body=23 status=ok
// SIG int atexit(_func_5014 * param_1)

int __cdecl atexit(_func_5014 *param_1)

{
  _onexit_t p_Var1;
  
  p_Var1 = _onexit((_onexit_t)param_1);
  return (p_Var1 != (_onexit_t)0x0) - 1;
}



// FUNCTION 143ddb92c __scrt_initialize_thread_safe_statics body=346 status=ok
// SIG undefined __scrt_initialize_thread_safe_statics(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined8 __scrt_initialize_thread_safe_statics(void)

{
  byte bVar1;
  char cVar2;
  HMODULE hModule;
  FARPROC pFVar3;
  FARPROC pFVar4;
  FARPROC pFVar5;
  byte bVar6;
  
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&DAT_146bcbc08,4000);
  hModule = GetModuleHandleW(L"api-ms-win-core-synch-l1-2-0.dll");
  if ((hModule == (HMODULE)0x0) &&
     (hModule = GetModuleHandleW(L"kernel32.dll"), hModule == (HMODULE)0x0)) {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  pFVar3 = GetProcAddress(hModule,"InitializeConditionVariable");
  pFVar4 = GetProcAddress(hModule,"SleepConditionVariableCS");
  pFVar5 = GetProcAddress(hModule,"WakeAllConditionVariable");
  if (((pFVar3 == (FARPROC)0x0) || (pFVar4 == (FARPROC)0x0)) || (pFVar5 == (FARPROC)0x0)) {
    DAT_146bcbc38 = CreateEventW((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCWSTR)0x0);
    if (DAT_146bcbc38 == (HANDLE)0x0) {
                    /* WARNING: Subroutine does not return */
      __scrt_fastfail(7);
    }
  }
  else {
    DAT_146bcbc38 = (HANDLE)0x0;
    (*pFVar3)(&DAT_146bcbc30);
    bVar6 = 0x40 - ((byte)DAT_1468387a8 & 0x3f);
    bVar1 = bVar6 & 0x3f;
    _DAT_146bcbc40 = DAT_1468387a8 ^ ((ulonglong)pFVar4 >> bVar1 | (longlong)pFVar4 << 0x40 - bVar1)
    ;
    bVar6 = bVar6 & 0x3f;
    _DAT_146bcbc48 = DAT_1468387a8 ^ ((ulonglong)pFVar5 >> bVar6 | (longlong)pFVar5 << 0x40 - bVar6)
    ;
  }
  cVar2 = __scrt_initialize_onexit_tables(0);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  atexit(__scrt_uninitialize_thread_safe_statics);
  return 0;
}



// FUNCTION 143ddba8c __scrt_uninitialize_thread_safe_statics body=40 status=ok
// SIG undefined __scrt_uninitialize_thread_safe_statics(void)

void __scrt_uninitialize_thread_safe_statics(void)

{
  DeleteCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  if (DAT_146bcbc38 != (HANDLE)0x0) {
    CloseHandle(DAT_146bcbc38);
  }
  return;
}



// FUNCTION 143ddbab4 _Init_thread_abort body=48 status=ok
// SIG undefined _Init_thread_abort(void)

void _Init_thread_abort(undefined4 *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  *param_1 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  _Init_thread_notify();
  return;
}



// FUNCTION 143ddbae4 _Init_thread_footer body=96 status=ok
// SIG undefined _Init_thread_footer(void)

/* Library Function - Single Match
    _Init_thread_footer
   
   Library: Visual Studio 2017 Release */

void _Init_thread_footer(int *param_1)

{
  ulonglong uVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  uVar1 = (ulonglong)_tls_index;
  DAT_146838798 = DAT_146838798 + 1;
  *param_1 = DAT_146838798;
  *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) = DAT_146838798;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  _Init_thread_notify();
  return;
}



// FUNCTION 143ddbb44 _Init_thread_header body=103 status=ok
// SIG undefined _Init_thread_header(void)

/* Library Function - Single Match
    _Init_thread_header
   
   Library: Visual Studio 2017 Release */

void _Init_thread_header(int *param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  do {
    if (*param_1 == 0) {
      *param_1 = -1;
LAB_143ddbb98:
                    /* WARNING: Could not recover jumptable at 0x000143ddbba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
      return;
    }
    if (*param_1 != -1) {
      *(undefined4 *)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38) =
           DAT_146838798;
      goto LAB_143ddbb98;
    }
    _Init_thread_wait(100);
  } while( true );
}



// FUNCTION 143ddbbac _Init_thread_notify body=80 status=ok
// SIG undefined _Init_thread_notify(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Init_thread_notify(void)

{
  byte bVar1;
  
  if (DAT_146bcbc38 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_1468387a8 & 0x3f;
    (*(code *)((DAT_1468387a8 ^ _DAT_146bcbc48) >> bVar1 |
              (DAT_1468387a8 ^ _DAT_146bcbc48) << 0x40 - bVar1))(&DAT_146bcbc30);
    return;
  }
  SetEvent(DAT_146bcbc38);
                    /* WARNING: Could not recover jumptable at 0x000143ddbbf5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ResetEvent(DAT_146bcbc38);
  return;
}



// FUNCTION 143ddbbfc _Init_thread_wait body=119 status=ok
// SIG undefined _Init_thread_wait(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _Init_thread_wait(DWORD param_1)

{
  byte bVar1;
  
  if (DAT_146bcbc38 == (HANDLE)0x0) {
    bVar1 = (byte)DAT_1468387a8 & 0x3f;
    (*(code *)((DAT_1468387a8 ^ _DAT_146bcbc40) >> bVar1 |
              (DAT_1468387a8 ^ _DAT_146bcbc40) << 0x40 - bVar1))
              (&DAT_146bcbc30,&DAT_146bcbc08,param_1);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  WaitForSingleObjectEx(DAT_146bcbc38,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x000143ddbc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146bcbc08);
  return;
}



// FUNCTION 143ddbc74 __GSHandlerCheck body=29 status=ok
// SIG undefined __GSHandlerCheck(void)

undefined8
__GSHandlerCheck(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  __GSHandlerCheckCommon(param_2,param_4,*(undefined8 *)(param_4 + 0x38));
  return 1;
}



// FUNCTION 143ddbc94 __GSHandlerCheckCommon body=91 status=ok
// SIG undefined __GSHandlerCheckCommon(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong __GSHandlerCheckCommon(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)*(uint *)(*(longlong *)(param_2 + 0x10) + 8);
  uVar1 = *(ulonglong *)(param_2 + 8);
  if ((*(byte *)(uVar2 + 3 + uVar1) & 0xf) != 0) {
    uVar1 = (ulonglong)(*(byte *)(uVar2 + 3 + uVar1) & 0xfffffff0);
  }
  return uVar1;
}



// FUNCTION 143ddbcf0 __GSHandlerCheck_SEH body=133 status=ok
// SIG undefined __GSHandlerCheck_SEH(void)

void __GSHandlerCheck_SEH
               (_EXCEPTION_RECORD *param_1,void *param_2,_CONTEXT *param_3,
               _DISPATCHER_CONTEXT *param_4)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_4 + 0x38);
  uVar1 = *puVar2;
  __GSHandlerCheckCommon(param_2,param_4,puVar2 + (ulonglong)uVar1 * 4 + 1);
  if ((puVar2[(ulonglong)uVar1 * 4 + 1] & ((param_1->ExceptionFlags & 0x66) != 0) + 1) != 0) {
    _guard_xfg_dispatch_icall_nop(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143ddbd90 __security_check_cookie body=33 status=ok
// SIG void __security_check_cookie(uintptr_t _StackCookie)

/* WARNING: This is an inlined function */

void __cdecl __security_check_cookie(uintptr_t _StackCookie)

{
  if ((_StackCookie == DAT_1468387a8) && ((short)(_StackCookie >> 0x30) == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __report_gsfailure(_StackCookie);
}



// FUNCTION 143ddbdd0 __chkstk body=81 status=ok
// SIG undefined __chkstk(void)

/* WARNING: This is an inlined function */

void __chkstk(void)

{
  undefined1 *in_RAX;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = local_res8 + -(longlong)in_RAX;
  if (local_res8 < in_RAX) {
    puVar1 = (undefined1 *)0x0;
  }
  if (puVar1 < StackLimit) {
    puVar2 = StackLimit;
    do {
      puVar2 = puVar2 + -0x1000;
      *puVar2 = 0;
    } while ((undefined1 *)((ulonglong)puVar1 & 0xfffffffffffff000) != puVar2);
  }
  return;
}



// FUNCTION 143ddbe40 __libm_sse2_sincosf_ body=70 status=ok
// SIG undefined __libm_sse2_sincosf_(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __libm_sse2_sincosf_(uint param_1)

{
  undefined1 auVar1 [16];
  float fVar2;
  
  fVar2 = (float)(param_1 & (uint)DAT_145dc0e70);
  if (0.00012207031 <= fVar2) {
    auVar1._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar1._0_4_ = fVar2 + 1.5707964;
    __sse2_sinf4(param_1,auVar1._0_8_);
    return;
  }
  return;
}



// FUNCTION 143ddbe86 __libm_sse2_sincosf4_ body=16 status=ok
// SIG undefined __libm_sse2_sincosf4_(void)

void __libm_sse2_sincosf4_(float param_1)

{
  __sse2_sinf4(param_1 + 0.0);
  return;
}



// FUNCTION 143ddbe98 FUN_143ddbe98 body=43 status=ok
// SIG undefined FUN_143ddbe98(void)

undefined8 * FUN_143ddbe98(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = type_info::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 143ddbec4 __isa_available_init body=379 status=ok
// SIG undefined __isa_available_init(void)

/* WARNING: Removing unreachable block (ram,0x000143ddbf92) */
/* WARNING: Removing unreachable block (ram,0x000143ddbf10) */
/* WARNING: Removing unreachable block (ram,0x000143ddbeeb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __isa_available_init(void)

{
  int *piVar1;
  uint *puVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  byte in_XCR0;
  
  DAT_1468387b4 = 2;
  DAT_1468387b0 = 1;
  piVar1 = (int *)cpuid_basic_info(0);
  uVar7 = 0;
  puVar2 = (uint *)cpuid_Version_info(1);
  uVar4 = puVar2[3];
  if ((piVar1[1] == 0x756e6547 && piVar1[3] == 0x6c65746e) && piVar1[2] == 0x49656e69) {
    _DAT_1468387b8 = 0xffffffffffffffff;
    uVar6 = *puVar2 & 0xfff3ff0;
    if ((((uVar6 == 0x106c0) || (uVar6 == 0x20660)) || (uVar6 == 0x20670)) ||
       ((uVar6 - 0x30650 < 0x21 &&
        ((0x100010001U >> ((ulonglong)(uVar6 - 0x30650) & 0x3f) & 1) != 0)))) {
      DAT_146bcbc54 = DAT_146bcbc54 | 1;
    }
  }
  if (6 < *piVar1) {
    lVar3 = cpuid_Extended_Feature_Enumeration_info(7);
    uVar7 = *(uint *)(lVar3 + 4);
    if ((uVar7 >> 9 & 1) != 0) {
      DAT_146bcbc54 = DAT_146bcbc54 | 2;
    }
  }
  if ((uVar4 >> 0x14 & 1) != 0) {
    DAT_1468387b0 = 2;
    DAT_1468387b4 = 6;
    if ((((uVar4 >> 0x1b & 1) != 0) && ((uVar4 >> 0x1c & 1) != 0)) &&
       (uVar5 = xinuse(0), (in_XCR0 & (byte)uVar5 & 6) == 6)) {
      DAT_1468387b4 = 0xe;
      DAT_1468387b0 = 3;
      if ((uVar7 & 0x20) != 0) {
        DAT_1468387b0 = 5;
        DAT_1468387b4 = 0x2e;
      }
    }
  }
  return 0;
}



// FUNCTION 143ddc040 __vdecl_sin2 body=5 status=ok
// SIG undefined __vdecl_sin2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __vdecl_sin2(double param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double in_XMM0_Qb;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uStack_58;
  ulonglong uStack_48;
  ulonglong uStack_38;
  
  dVar5 = param_1 * 0.3183098861837907 + 6755399441055744.0;
  dVar6 = dVar5 - 6755399441055744.0;
  uVar11 = -(uint)(0x40ff4000 < (uint)((ulonglong)ABS(param_1) >> 0x20));
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = -(uint)(0 < SUB84(ABS(param_1),0));
  auVar2._8_4_ = -(uint)(0 < SUB84(ABS(in_XMM0_Qb),0));
  auVar2._12_4_ = -(uint)(0x40ff4000 < (uint)((ulonglong)ABS(in_XMM0_Qb) >> 0x20));
  uVar3 = movmskpd(in_EAX,auVar2);
  if (uVar3 != 0) {
    dVar7 = ABS(param_1);
    auVar1._4_4_ = -(uint)((uint)((ulonglong)dVar7 >> 0x20) < 0x41d00000);
    auVar1._0_4_ = -(uint)(SUB84(dVar7,0) < 0);
    auVar1._8_4_ = -(uint)(SUB84(ABS(in_XMM0_Qb),0) < 0);
    auVar1._12_4_ = -(uint)((uint)((ulonglong)ABS(in_XMM0_Qb) >> 0x20) < 0x41d00000);
    iVar4 = movmskpd(param_2,auVar1);
    if (iVar4 == 3) {
      if (uVar3 != 3) {
        uStack_58 = (longlong)dVar5 << 0x3f & (CONCAT44(uVar11,uVar11) ^ 0xffffffffffffffff);
        uStack_48 = (ulonglong)
                    ((((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
                     dVar6 * 1.078060505991553e-14) - dVar6 * 6.564007085747001e-22) &
                    (CONCAT44(uVar11,uVar11) ^ 0xffffffffffffffff);
      }
      uVar10 = CONCAT44((int)(dVar7 * 0.6366197723675814),(int)(dVar7 * 0.6366197723675814) + 1) &
               (ulonglong)DAT_146feb200;
      dVar6 = (double)(uVar10 | 0x4338000000000000) - 6755399441055744.0;
      dVar7 = dVar7 - dVar6 * 1.5707950592041016;
      dVar5 = dVar7 - dVar6 * 1.267590960196685e-06;
      dVar8 = dVar5 - dVar6 * -1.6513982022126061e-13;
      dVar5 = ((dVar7 - dVar5) - dVar6 * 1.267590960196685e-06) +
              ((dVar5 - dVar8) - dVar6 * -1.6513982022126061e-13);
      dVar7 = dVar8 + dVar5;
      dVar9 = dVar7 - dVar6 * -1.3350302175814904e-19;
      dVar9 = dVar9 + ((dVar5 + (dVar8 - dVar7) +
                       ((dVar7 - dVar9) - dVar6 * -1.3350302175814904e-19)) -
                      dVar6 * 1.6446256936324258e-26);
      uVar10 = uVar10 << 0x3e & (ulonglong)DAT_146feb190 ^ (ulonglong)param_1 & 0x8000000000000000;
      if (uVar3 != 3) {
        dVar9 = (double)((ulonglong)dVar9 & CONCAT44(uVar11,uVar11) | uStack_48);
        uVar10 = uVar10 & (ulonglong)uVar11 << 0x20 | uStack_58;
      }
      dVar5 = dVar9 * dVar9;
      dVar6 = dVar5 * dVar5;
      uStack_38 = (ulonglong)
                  ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
                    2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar9 +
                  (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
                   -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar5 * dVar9 + dVar9)
                  ^ uVar10;
    }
    else {
      if (uVar3 != 3) {
        dVar7 = ((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
                dVar6 * 1.078060505991553e-14;
        dVar8 = dVar7 * dVar7;
        dVar7 = dVar7 - dVar6 * 6.564007085747001e-22;
        dVar6 = dVar8 * dVar8;
        uStack_38 = (ulonglong)
                    ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
                      2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar7 +
                    (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
                     -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar8 * dVar7 + dVar7
                    ) ^ (longlong)dVar5 << 0x3f;
      }
      if ((uVar3 & 1) != 0) {
        uStack_38 = __static_scalar_sin(param_1);
      }
      if (((int)uVar3 >> 1 & 1U) != 0) {
        __static_scalar_sin(in_XMM0_Qb);
      }
    }
    return uStack_38;
  }
  dVar7 = ((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
          dVar6 * 1.078060505991553e-14;
  dVar8 = dVar7 * dVar7;
  dVar7 = dVar7 - dVar6 * 6.564007085747001e-22;
  dVar6 = dVar8 * dVar8;
  return (ulonglong)
         ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
           2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar7 +
         (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
          -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar8 * dVar7 + dVar7) ^
         (longlong)dVar5 << 0x3f;
}



// FUNCTION 143ddc050 __libm_sse2_sincos_ body=76 status=ok
// SIG undefined __libm_sse2_sincos_(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __libm_sse2_sincos_(ulonglong param_1)

{
  double dVar1;
  
  dVar1 = (double)(param_1 & (ulonglong)DAT_145dc0ee0);
  if (7.450580596923828e-09 <= dVar1) {
    __sse2_sin2(param_1,dVar1 + 1.5707963267948966);
    return;
  }
  return;
}



// FUNCTION 143ddc0a0 __vdecl_cos2 body=5 status=ok
// SIG undefined __vdecl_cos2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __vdecl_cos2(double param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  double in_XMM0_Qb;
  double dVar5;
  undefined4 uVar6;
  double dVar7;
  ulonglong uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  ulonglong uStack_68;
  ulonglong uStack_58;
  double dStack_38;
  
  param_1 = ABS(param_1);
  dVar5 = ABS(in_XMM0_Qb);
  dVar7 = (param_1 + 1.5707963267948966) * 0.3183098861837907 - -6755399441055744.0;
  uVar6 = (undefined4)(-(ulonglong)(128000.0 < ABS(param_1)) >> 0x20);
  uVar8 = (longlong)dVar7 << 0x3f;
  dVar11 = (dVar7 + -6755399441055744.0) - 0.5;
  auVar1._8_4_ = (int)-(ulonglong)(128000.0 < ABS(dVar5));
  auVar1._0_8_ = -(ulonglong)(128000.0 < ABS(param_1));
  auVar1._12_4_ = (int)(-(ulonglong)(128000.0 < ABS(dVar5)) >> 0x20);
  uVar3 = movmskpd(in_EAX,auVar1);
  dVar10 = dVar11 * 3.141592502593994;
  dVar7 = dVar11 * 1.5099578831723193e-07;
  if (uVar3 != 0) {
    auVar2._4_4_ = -(uint)((uint)((ulonglong)param_1 >> 0x20) < 0x41d00000);
    auVar2._0_4_ = -(uint)(SUB84(param_1,0) < 0);
    auVar2._8_4_ = -(uint)(SUB84(dVar5,0) < 0);
    auVar2._12_4_ = -(uint)((uint)((ulonglong)dVar5 >> 0x20) < 0x41d00000);
    iVar4 = movmskpd(param_2,auVar2);
    if (iVar4 == 3) {
      if (uVar3 != 3) {
        dVar5 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
        uStack_68 = ((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar5) ^ uVar8) &
                    (CONCAT44(uVar6,uVar6) ^ 0xffffffffffffffff);
        uStack_58 = (ulonglong)(dVar5 * dVar5) & (CONCAT44(uVar6,uVar6) ^ 0xffffffffffffffff);
      }
      uVar8 = (ulonglong)(uint)(int)(param_1 * 0.6366197723675814) | (ulonglong)DAT_146febe10;
      dVar9 = (double)(uVar8 | 0x4338000000000000) - 6755399441055744.0;
      param_1 = param_1 - dVar9 * 1.5707950592041016;
      dVar5 = param_1 - dVar9 * 1.267590960196685e-06;
      dVar7 = dVar5 - dVar9 * -1.6513982022126061e-13;
      dVar5 = ((param_1 - dVar5) - dVar9 * 1.267590960196685e-06) +
              ((dVar5 - dVar7) - dVar9 * -1.6513982022126061e-13);
      dVar10 = dVar7 + dVar5;
      dVar11 = dVar10 - dVar9 * -1.3350302175814904e-19;
      dVar11 = dVar11 + ((dVar5 + (dVar7 - dVar10) +
                         ((dVar10 - dVar11) - dVar9 * -1.3350302175814904e-19)) -
                        dVar9 * 1.6446256936324258e-26);
      dVar5 = (double)((uVar8 & 2) << 0x3e ^ (ulonglong)DAT_146febda0 ^ (ulonglong)dVar11);
      dVar11 = dVar11 * dVar11;
      if (uVar3 != 3) {
        dVar5 = (double)((ulonglong)dVar5 & CONCAT44(uVar6,uVar6) | uStack_68);
        dVar11 = (double)((ulonglong)dVar11 & CONCAT44(uVar6,uVar6) | uStack_58);
      }
      dVar7 = dVar11 * dVar11;
      dStack_38 = dVar7 * (((dVar7 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar7 +
                           2.7557319210152756e-06) * dVar7 + 0.008333333333333165) * dVar5 +
                  (((dVar7 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar7 +
                   -0.0001984126984120184) * dVar7 + -0.16666666666666666) * dVar11 * dVar5 + dVar5;
    }
    else {
      if (uVar3 != 3) {
        dVar7 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
        dVar10 = dVar7 * dVar7;
        dVar11 = (double)((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar7) ^ uVar8);
        dVar7 = dVar10 * dVar10;
        dStack_38 = dVar7 * (((dVar7 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar7 +
                             2.7557319210152756e-06) * dVar7 + 0.008333333333333165) * dVar11 +
                    (((dVar7 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar7 +
                     -0.0001984126984120184) * dVar7 + -0.16666666666666666) * dVar10 * dVar11 +
                    dVar11;
      }
      if ((uVar3 & 1) != 0) {
        dStack_38 = (double)__static_scalar_cos(param_1);
      }
      if (((int)uVar3 >> 1 & 1U) != 0) {
        __static_scalar_cos(dVar5);
      }
    }
    return dStack_38;
  }
  dVar5 = ((param_1 - dVar10) - dVar7) - dVar11 * 1.078060505991553e-14;
  dVar7 = dVar5 * dVar5;
  dVar10 = (double)((ulonglong)(dVar11 * -6.564007085747001e-22 + dVar5) ^ uVar8);
  dVar5 = dVar7 * dVar7;
  return dVar5 * (((dVar5 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar5 +
                  2.7557319210152756e-06) * dVar5 + 0.008333333333333165) * dVar10 +
         (((dVar5 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar5 +
          -0.0001984126984120184) * dVar5 + -0.16666666666666666) * dVar7 * dVar10 + dVar10;
}



// FUNCTION 143ddc0a8 FID_conflict:__GSHandlerCheck_EH body=127 status=ok
// SIG undefined FID_conflict:__GSHandlerCheck_EH(void)

/* Library Function - Multiple Matches With Different Base Names
    __GSHandlerCheck_EH
    __GSHandlerCheck_EH4
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void FID_conflict___GSHandlerCheck_EH
               (longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  __GSHandlerCheckCommon(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _guard_xfg_dispatch_icall_nop(param_1,param_2,param_3,param_4);
  }
  return;
}



// FUNCTION 143ddc128 __raise_securityfailure body=52 status=ok
// SIG undefined __raise_securityfailure(void)

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x000143ddc155. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}



// FUNCTION 143ddc15c __report_gsfailure body=209 status=ok
// SIG void __report_gsfailure(uintptr_t _StackCookie)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __report_gsfailure(uintptr_t _StackCookie)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [48];
  
  puVar3 = auStack_38;
  BVar2 = _guard_xfg_dispatch_icall_nop(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(2);
    puVar3 = auStack_30;
  }
  *(undefined8 *)(puVar3 + -8) = 0x143ddc186;
  capture_previous_context(&DAT_146bcbd00);
  _DAT_146bcbc70 = *(undefined8 *)(puVar3 + 0x38);
  _DAT_146bcbd98 = puVar3 + 0x40;
  _DAT_146bcbd80 = *(undefined8 *)(puVar3 + 0x40);
  _DAT_146bcbc60 = 0xc0000409;
  _DAT_146bcbc64 = 1;
  _DAT_146bcbc78 = 1;
  DAT_146bcbc80 = 2;
  *(undefined8 *)(puVar3 + 0x20) = DAT_1468387a8;
  *(undefined8 *)(puVar3 + 0x28) = DAT_1468387a0;
  *(undefined8 *)(puVar3 + -8) = 0x143ddc228;
  DAT_146bcbdf8 = _DAT_146bcbc70;
  __raise_securityfailure(&PTR_DAT_145dc0f30);
  return;
}



// FUNCTION 143ddc230 __report_rangecheckfailure body=19 status=ok
// SIG undefined __report_rangecheckfailure(void)

void __report_rangecheckfailure(void)

{
  __report_securityfailure(8);
  return;
}



// FUNCTION 143ddc244 __report_securityfailure body=155 status=ok
// SIG undefined __report_securityfailure(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __report_securityfailure(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  undefined1 *puVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [32];
  
  puVar3 = auStack_28;
  BVar2 = _guard_xfg_dispatch_icall_nop(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_20;
  }
  *(undefined8 *)(puVar3 + -8) = 0x143ddc26e;
  capture_current_context(&DAT_146bcbd00);
  _DAT_146bcbc70 = *(undefined8 *)(puVar3 + 0x28);
  _DAT_146bcbd98 = puVar3 + 0x30;
  _DAT_146bcbc60 = 0xc0000409;
  _DAT_146bcbc64 = 1;
  _DAT_146bcbc78 = 1;
  DAT_146bcbc80 = (ulonglong)*(uint *)(puVar3 + 0x30);
  *(undefined8 *)(puVar3 + -8) = 0x143ddc2da;
  DAT_146bcbdf8 = _DAT_146bcbc70;
  __raise_securityfailure(&PTR_DAT_145dc0f30);
  return;
}



// FUNCTION 143ddc2e0 capture_current_context body=109 status=ok
// SIG undefined capture_current_context(void)

void capture_current_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18;
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,&local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
  }
  return;
}



// FUNCTION 143ddc350 capture_previous_context body=113 status=ok
// SIG undefined capture_previous_context(void)

void capture_previous_context(PCONTEXT param_1)

{
  DWORD64 ControlPc;
  PRUNTIME_FUNCTION FunctionEntry;
  int iVar1;
  DWORD64 local_res8;
  ulonglong local_res10;
  PVOID local_res18 [2];
  
  RtlCaptureContext();
  ControlPc = param_1->Rip;
  iVar1 = 0;
  do {
    FunctionEntry = RtlLookupFunctionEntry(ControlPc,&local_res8,(PUNWIND_HISTORY_TABLE)0x0);
    if (FunctionEntry == (PRUNTIME_FUNCTION)0x0) {
      return;
    }
    RtlVirtualUnwind(0,local_res8,ControlPc,FunctionEntry,param_1,local_res18,&local_res10,
                     (PKNONVOLATILE_CONTEXT_POINTERS)0x0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



// FUNCTION 143ddc3c4 `eh_vector_constructor_iterator' body=112 status=ok
// SIG undefined `eh_vector_constructor_iterator'(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _eh_vector_constructor_iterator_
               (longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    (*param_4)(param_1,_guard_dispatch_icall);
    param_1 = param_1 + param_2;
  }
  return;
}



// FUNCTION 143ddc434 `eh_vector_destructor_iterator' body=107 status=ok
// SIG undefined `eh_vector_destructor_iterator'(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void _eh_vector_destructor_iterator_
               (longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  param_1 = param_2 * param_3 + param_1;
  while( true ) {
    if (param_3 == 0) break;
    param_1 = param_1 - param_2;
    (*param_4)(param_1,_guard_dispatch_icall);
    param_3 = param_3 + -1;
  }
  return;
}



// FUNCTION 143ddc4a0 __ArrayUnwind body=97 status=ok
// SIG undefined __ArrayUnwind(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void __ArrayUnwind(longlong param_1,longlong param_2,longlong param_3,code *param_4)

{
  longlong lVar1;
  
  for (lVar1 = 0; lVar1 != param_3; lVar1 = lVar1 + 1) {
    param_1 = param_1 - param_2;
    (*param_4)(param_1);
  }
  return;
}



// FUNCTION 143ddc504 pre_c_initialization body=182 status=ok
// SIG undefined pre_c_initialization(void)

void pre_c_initialization(undefined8 param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  AKRESULT AVar3;
  undefined4 *puVar4;
  wchar_t *pwVar5;
  long lVar6;
  
  _guard_xfg_dispatch_icall_nop(2);
  iVar2 = FVorbisAudioInfo::GetStreamBufferSize();
  _guard_xfg_dispatch_icall_nop(iVar2);
  puVar4 = (undefined4 *)_guard_xfg_dispatch_icall_nop();
  pwVar5 = AK::MemoryMgr::GetPoolName(iVar2);
  *puVar4 = (int)pwVar5;
  cVar1 = __scrt_initialize_onexit_tables(1);
  if (cVar1 != '\0') {
    _RTC_Initialize();
    lVar6 = 0x43dde720;
    atexit(_RTC_Initialize);
    AVar3 = AK::MemoryMgr::SetMonitoring(lVar6,(bool)param_2);
    iVar2 = _guard_xfg_dispatch_icall_nop();
    if (iVar2 == 0) {
      __scrt_initialize_type_info();
      iVar2 = __scrt_is_user_matherr_present();
      if (iVar2 != 0) {
        AVar3 = 0x40435d50;
        _guard_xfg_dispatch_icall_nop();
      }
      AK::MemoryMgr::StartProfileThreadUsage(AVar3);
      AK::MemoryMgr::StartProfileThreadUsage(AVar3);
      pwVar5 = AK::MemoryMgr::GetPoolName(AVar3);
      lVar6 = (long)pwVar5;
      _guard_xfg_dispatch_icall_nop(lVar6);
      cVar1 = BuildSettings::IsPromotedBuild();
      if (cVar1 != '\0') {
        _guard_xfg_dispatch_icall_nop();
      }
      AK::MemoryMgr::GetPoolName(lVar6);
      iVar2 = FUN_143ddc944();
      if (iVar2 == 0) {
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  __scrt_fastfail(7);
}



// FUNCTION 143ddc5bc post_pgo_initialization body=16 status=ok
// SIG undefined post_pgo_initialization(void)

undefined8 post_pgo_initialization(void)

{
  __scrt_initialize_default_local_stdio_options();
  return 0;
}



// FUNCTION 143ddc5cc pre_cpp_initialization body=25 status=ok
// SIG undefined pre_cpp_initialization(void)

void pre_cpp_initialization(long param_1)

{
  wchar_t *pwVar1;
  
  __scrt_set_unhandled_exception_filter();
  pwVar1 = AK::MemoryMgr::GetPoolName(param_1);
  _guard_xfg_dispatch_icall_nop((ulonglong)pwVar1 & 0xffffffff);
  return;
}



// FUNCTION 143ddc5e8 __scrt_common_main_seh body=334 status=ok
// SIG undefined __scrt_common_main_seh(void)

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

int __scrt_common_main_seh(void)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  longlong *plVar6;
  undefined8 uVar7;
  
  cVar2 = __scrt_initialize_crt(1);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  bVar1 = false;
  uVar3 = __scrt_acquire_startup_lock();
  if (DAT_146bcbbc0 == 1) {
                    /* WARNING: Subroutine does not return */
    __scrt_fastfail(7);
  }
  if (DAT_146bcbbc0 == 0) {
    DAT_146bcbbc0 = 1;
    iVar5 = _guard_xfg_dispatch_icall_nop(&DAT_143f395c8,&DAT_143f395f0);
    if (iVar5 != 0) {
      return 0xff;
    }
    _guard_xfg_dispatch_icall_nop(&DAT_143ec8f08,&DAT_143f395c0);
    DAT_146bcbbc0 = 2;
  }
  else {
    bVar1 = true;
  }
  __scrt_release_startup_lock(uVar3);
  plVar6 = (longlong *)FUN_143dde6d4();
  if ((*plVar6 != 0) && (cVar2 = __scrt_is_nonwritable_in_current_image(plVar6), cVar2 != '\0')) {
    (*(code *)*plVar6)(0,2);
  }
  plVar6 = (longlong *)FUN_143dde6dc();
  if ((*plVar6 != 0) && (cVar2 = __scrt_is_nonwritable_in_current_image(plVar6), cVar2 != '\0')) {
    _guard_xfg_dispatch_icall_nop(*plVar6);
  }
  uVar4 = __scrt_get_show_window_mode();
  uVar7 = _guard_xfg_dispatch_icall_nop();
  iVar5 = FUN_140445f20(&IMAGE_DOS_HEADER_140000000,0,uVar7,uVar4);
  cVar2 = __scrt_is_managed_app();
  if (cVar2 != '\0') {
    if (!bVar1) {
      _guard_xfg_dispatch_icall_nop();
    }
    __scrt_uninitialize_crt(1,0);
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  _guard_xfg_dispatch_icall_nop(iVar5);
}



// FUNCTION 143ddc75c entry body=18 status=ok
// SIG undefined entry(void)

void entry(void)

{
  __security_init_cookie();
  __scrt_common_main_seh();
  return;
}



// FUNCTION 143ddc770 thunk_FUN_143dde780 body=5 status=ok
// SIG undefined thunk_FUN_143dde780(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_143dde780(double param_1)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined1 auVar4 [12];
  ulonglong uVar5;
  int iVar6;
  undefined1 in_XMM0 [16];
  undefined1 auVar7 [12];
  ulonglong uVar8;
  double in_XMM1_Qb;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar26 [16];
  int iStack_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint uVar18;
  
  auVar7 = in_XMM0._4_12_ & DAT_145dc71b0._4_12_;
  auVar4._4_8_ = auVar7._4_8_;
  auVar4._0_4_ = auVar7._0_4_ + 0x200;
  auVar11._0_8_ = auVar4._0_8_ << 0x20;
  auVar11._8_4_ = auVar7._4_4_;
  auVar11._12_4_ = auVar7._8_4_ + 0x200;
  uVar3 = 0;
  uVar8 = auVar11._8_8_ >> 0x2a;
  uVar5 = (auVar4._0_8_ & 0xffffffff) >> 10;
  dVar15 = *(double *)(&DAT_145dc1190 + uVar5 * 8);
  dVar16 = *(double *)(&DAT_145dc1190 + (uVar8 & 0xffff) * 8);
  lVar1 = (ulonglong)(uint)((int)uVar5 * 2) * 8;
  auVar11 = in_XMM0 & _DAT_145dc0f60 | _DAT_145dc0f80;
  lVar2 = (ulonglong)((uint)(ushort)uVar8 * 2) * 8;
  uVar18 = (int)(in_XMM0._0_8_ + -0x3fe7fe0000000000 >> 0x34) + 0x41380000;
  auVar7._4_8_ = 0;
  auVar7._0_4_ = uVar18;
  auVar17._0_12_ = auVar7 << 0x20;
  auVar17._12_4_ = (int)(in_XMM0._8_8_ + -0x3fe7fe0000000000 >> 0x34) + 0x41380000;
  dVar9 = auVar11._0_8_ * dVar15;
  dVar12 = auVar11._8_8_ * dVar16;
  if (((int)(in_XMM0._6_2_ + 0x7ffffff0) < -0x7fff8020) &&
     ((int)(in_XMM0._14_2_ + 0x7ffffff0) < -0x7fff8020)) {
    dVar14 = ((double)((ulonglong)uVar18 << 0x20) - 1572864.0) + *(double *)(&DAT_145dc31a0 + lVar1)
    ;
    dVar19 = (auVar17._8_8_ - 1572864.0) + *(double *)(&DAT_145dc31a0 + lVar2);
    dVar23 = SUB168(_DAT_145dc0fb0 & auVar11,0);
    dVar24 = SUB168(_DAT_145dc0fb0 & auVar11,8);
    dVar10 = dVar9 + -1.442694902420044;
    dVar13 = dVar12 + -1.442694902420044;
    dVar23 = (dVar23 * dVar15 - dVar9) + (auVar11._0_8_ - dVar23) * dVar15;
    dVar27 = (dVar24 * dVar16 - dVar12) + (auVar11._8_8_ - dVar24) * dVar16;
    dVar15 = dVar14 + dVar10;
    dVar9 = dVar19 + dVar13;
    dVar16 = dVar15 + dVar23;
    dVar12 = dVar9 + dVar27;
    dVar24 = dVar23 + dVar10;
    dVar28 = dVar27 + dVar13;
    dVar25 = dVar24 * dVar24;
    dVar29 = dVar28 * dVar28;
    uStack_74 = (uint)((ulonglong)param_1 >> 0x20);
    if ((((uint)((ulonglong)dVar16 >> 0x20) & 0x7ff00000) + (uStack_74 & 0x7ff00000) < 0x80900001)
       && (uStack_6c = (uint)((ulonglong)in_XMM1_Qb >> 0x20),
          ((uint)((ulonglong)dVar12 >> 0x20) & 0x7ff00000) + (uStack_6c & 0x7ff00000) < 0x80900001))
    {
      iStack_78 = SUB84(param_1,0);
      if ((iStack_78 != 0 || ((ulonglong)param_1 & 0x7fffffff00000000) != 0) &&
         ((uStack_74 & 0x7fffffff) < 0x7ff00000)) {
        iStack_70 = SUB84(in_XMM1_Qb,0);
        if ((iStack_70 != 0 || ((ulonglong)in_XMM1_Qb & 0x7fffffff00000000) != 0) &&
           ((uStack_6c & 0x7fffffff) < 0x7ff00000)) {
          dVar9 = (double)((ulonglong)in_XMM1_Qb & 0xfffffffff8000000) *
                  (double)((ulonglong)
                           (dVar12 + (dVar9 - dVar12) + dVar27 + (dVar19 - dVar9) + dVar13 +
                                     *(double *)(&UNK_145dc31a8 + lVar2) +
                                     (((dVar29 * 0.015843641906397053 + 0.04616704187202374) *
                                       dVar29 + 0.16015105075297303) * dVar29 +
                                     9.597935033233511e-08) * dVar28 +
                                     ((dVar29 * -0.026667131649815552 + -0.08325619496072671) *
                                      dVar29 + -0.3465736568077919) * dVar29) & 0xfffffffff8000000)
                  + 52776558133248.0;
          uVar18 = (uint)SUB82(dVar9,0) | (uint)(((ulonglong)dVar9 >> 0x10 & 0xffff) << 0x10);
          iVar6 = SUB84((double)((ulonglong)param_1 & 0xfffffffff8000000) *
                        (double)((ulonglong)
                                 (dVar16 + (dVar15 - dVar16) + dVar23 + (dVar14 - dVar15) + dVar10 +
                                           *(double *)(&UNK_145dc31a8 + lVar1) +
                                           (((dVar25 * 0.015843641906397053 + 0.04616704187202374) *
                                             dVar25 + 0.16015105075297303) * dVar25 +
                                           9.597935033233511e-08) * dVar24 +
                                           ((dVar25 * -0.026667131649815552 + -0.08325619496072671)
                                            * dVar25 + -0.3465736568077919) * dVar25) &
                                0xfffffffff8000000) + 52776558133248.0,0);
          if ((iVar6 < 0x1ff80) &&
             ((((int)uVar18 < 0x1ff80 && (-0x1e200 < iVar6)) && (-0x1e200 < (int)uVar18)))) {
            return;
          }
        }
      }
    }
  }
  else {
    auVar22._8_8_ = -(ulonglong)(0.0 < in_XMM1_Qb);
    auVar22._0_8_ = -(ulonglong)(0.0 < param_1);
    auVar26._8_8_ = -(ulonglong)(in_XMM1_Qb <= INFINITY);
    auVar26._0_8_ = -(ulonglong)(param_1 <= INFINITY);
    iStack_68 = in_XMM0._0_4_;
    iStack_64 = in_XMM0._4_4_;
    iStack_60 = in_XMM0._8_4_;
    iStack_5c = in_XMM0._12_4_;
    auVar20._0_4_ = -(uint)(iStack_68 == 0);
    auVar20._4_4_ = -(uint)(iStack_64 == 0);
    auVar20._8_4_ = -(uint)(iStack_60 == 0);
    auVar20._12_4_ = -(uint)(SUB124(SUB1612((undefined1  [16])0x0,4),8) == iStack_5c);
    auVar21._4_4_ = auVar20._0_4_;
    auVar21._0_4_ = auVar20._4_4_;
    auVar21._8_4_ = auVar20._12_4_;
    auVar21._12_4_ = auVar20._8_4_;
    auVar21 = auVar20 & auVar22 & auVar26 & auVar21;
    uVar3 = (ushort)(SUB161(auVar21 >> 7,0) & 1) | (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb;
  }
  if ((uVar3 & 0xf) == 0) {
    FUN_143ddec00(in_XMM0._0_8_,param_1);
  }
  if ((uVar3 & 0xf00) == 0) {
    FUN_143ddec00(in_XMM0._8_8_,in_XMM1_Qb);
  }
                    /* WARNING: Read-only address (ram,0x000145dc0f60) is written */
                    /* WARNING: Read-only address (ram,0x000145dc0f80) is written */
                    /* WARNING: Read-only address (ram,0x000145dc0fb0) is written */
                    /* WARNING: Read-only address (ram,0x000145dc71b0) is written */
  return;
}



// FUNCTION 143ddc780 __vdecl_cosf4 body=5 status=ok
// SIG undefined __vdecl_cosf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __vdecl_cosf4(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  int iVar14;
  float fVar15;
  undefined1 auVar9 [16];
  float fVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar26;
  float fVar28;
  float fVar29;
  double dVar27;
  float fVar30;
  double dVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  undefined1 aauStack_d8 [2] [16];
  uint uStack_b8;
  uint uStack_b4;
  undefined1 aauStack_38 [3] [16];
  
  auVar8 = in_XMM0 & _DAT_146fec620;
  fVar26 = auVar8._0_4_;
  fVar28 = auVar8._4_4_;
  fVar11 = auVar8._12_4_;
  fVar6 = auVar8._8_4_;
  fVar5 = (fVar26 + (float)DAT_146fec610) * 0.31830987;
  fVar10 = (fVar28 + DAT_146fec610._4_4_) * 0.31830987;
  fVar16 = (float)DAT_146fec5e0;
  fVar20 = DAT_146fec5e0._4_4_;
  uVar38 = -(uint)(0x461c4000 < (int)fVar26);
  uVar39 = -(uint)(0x461c4000 < (int)fVar28);
  auVar8._0_8_ = CONCAT44(uVar39,uVar38);
  auVar8._8_4_ = -(uint)(0x461c4000 < (int)fVar6);
  auVar8._12_4_ = -(uint)(0x461c4000 < (int)fVar11);
  uVar1 = movmskps(in_EAX,auVar8);
  fVar29 = (float)DAT_146fec5d0;
  fVar30 = DAT_146fec5d0._4_4_;
  if (uVar1 == 0) {
    fVar6 = (float)(int)fVar5 - 0.5;
    fVar11 = (float)(int)fVar10 - 0.5;
    fVar26 = ((fVar26 - fVar16 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
    fVar28 = ((fVar28 - fVar20 * fVar11) - fVar30 * fVar11) - fVar11 * 1.5099067e-07;
    fVar16 = fVar26 - fVar6 * 5.126688e-12;
    fVar20 = fVar28 - fVar11 * 5.126688e-12;
    fVar26 = fVar26 * fVar26;
    fVar28 = fVar28 * fVar28;
    return CONCAT44((((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + 0.008333075) * fVar28 +
                    -0.16666658) * fVar28 * fVar20 + fVar20,
                    (((fVar26 * 2.608e-06 + -0.000198107) * fVar26 + 0.008333075) * fVar26 +
                    -0.16666658) * fVar26 * fVar16 + fVar16) ^
           CONCAT44((int)fVar10 << 0x1f,(int)fVar5 << 0x1f);
  }
  aauStack_d8[0] = in_XMM0 & _DAT_146fec620;
  fVar7 = aauStack_d8[0]._0_4_;
  auVar37._0_4_ = -(uint)(0x4e800000 < (int)fVar7);
  fVar12 = aauStack_d8[0]._4_4_;
  auVar37._4_4_ = -(uint)(0x4e800000 < (int)fVar12);
  auVar37._8_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._8_4_);
  auVar37._12_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._12_4_);
  iVar3 = movmskps(param_2,auVar37);
  if (iVar3 == 0) {
    if (uVar1 == 0xf) {
      auVar34._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar34._4_4_ = 0;
      auVar34._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar34._12_4_ = 0;
      auVar34 = auVar34 | _DAT_146fec6a0;
      dVar27 = SUB168(_DAT_146fec690 | auVar34,0) - 6755399441055744.0;
      dVar31 = SUB168(_DAT_146fec690 | auVar34,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar27 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar31 * 1.5707950592041016;
      dVar18 = dVar17 - dVar27 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar31 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar27 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar31 * -1.6513982022126061e-13;
      auVar35._0_8_ = auVar34._0_8_ << 0x3e;
      auVar35._8_8_ = auVar34._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar27 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar27 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar31 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar31 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar27 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar31 * -1.3350302175814904e-19;
      auVar8 = _DAT_146fec630 & auVar35 ^ _DAT_146fec630;
      fVar16 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar27 * -1.3350302175814904e-19)) -
                       dVar27 * 1.6446256936324258e-26) + dVar22);
      fVar26 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar31 * -1.3350302175814904e-19)) -
                       dVar31 * 1.6446256936324258e-26) + dVar25);
      fVar20 = fVar16 * fVar16;
      fVar5 = fVar26 * fVar26;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar26 + fVar26,
                    (((fVar20 * 2.608e-06 + -0.000198107) * fVar20 + 0.008333075) * fVar20 +
                    -0.16666658) * fVar20 * fVar16 + fVar16) ^ CONCAT44(auVar8._12_4_,auVar8._4_4_);
    }
    else {
      fVar6 = (float)(int)fVar5 - 0.5;
      fVar11 = (float)(int)fVar10 - 0.5;
      fVar26 = ((fVar26 - fVar16 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
      fVar29 = ((fVar28 - fVar20 * fVar11) - fVar30 * fVar11) - fVar11 * 1.5099067e-07;
      uStack_b8 = SUB164(auVar8 ^ _DAT_146fec6c0,0);
      uStack_b4 = SUB164(auVar8 ^ _DAT_146fec6c0,4);
      auVar32._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar32._12_4_ = 0;
      auVar32 = auVar32 | _DAT_146fec6a0;
      dVar27 = SUB168(_DAT_146fec690 | auVar32,0) - 6755399441055744.0;
      dVar31 = SUB168(_DAT_146fec690 | auVar32,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar27 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar31 * 1.5707950592041016;
      dVar18 = dVar17 - dVar27 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar31 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar27 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar31 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar27 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar27 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar31 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar31 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar27 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar31 * -1.3350302175814904e-19;
      auVar37 = _DAT_146fec630 & auVar33 ^ _DAT_146fec630;
      fVar28 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar27 * -1.3350302175814904e-19)) -
                       dVar27 * 1.6446256936324258e-26) + dVar22);
      fVar30 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar31 * -1.3350302175814904e-19)) -
                       dVar31 * 1.6446256936324258e-26) + dVar25);
      fVar16 = (float)((uint)fVar28 & uVar38 | (uint)(fVar26 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar20 = (float)((uint)fVar30 & uVar39 | (uint)(fVar29 - fVar11 * 5.126688e-12) & uStack_b4);
      fVar26 = (float)((uint)(fVar28 * fVar28) & uVar38 | (uint)(fVar26 * fVar26) & uStack_b8);
      fVar28 = (float)((uint)(fVar30 * fVar30) & uVar39 | (uint)(fVar29 * fVar29) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + 0.008333075) * fVar28 +
                    -0.16666658) * fVar28 * fVar20 + fVar20,
                    (((fVar26 * 2.608e-06 + -0.000198107) * fVar26 + 0.008333075) * fVar26 +
                    -0.16666658) * fVar26 * fVar16 + fVar16) ^
           (CONCAT44(auVar37._12_4_,auVar37._4_4_) & auVar8._0_8_ |
           CONCAT44((int)fVar10 << 0x1f & uStack_b4,(int)fVar5 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      iVar3 = (int)((fVar6 + DAT_146fec610._8_4_) * 0.31830987);
      iVar14 = (int)((fVar11 + DAT_146fec610._12_4_) * 0.31830987);
      fVar7 = (float)(int)fVar5 - 0.5;
      fVar12 = (float)(int)fVar10 - 0.5;
      fVar13 = (float)iVar3 - 0.5;
      fVar15 = (float)iVar14 - 0.5;
      auVar36._0_4_ = (int)fVar5 << 0x1f;
      auVar36._4_4_ = (int)fVar10 << 0x1f;
      auVar36._8_4_ = iVar3 << 0x1f;
      auVar36._12_4_ = iVar14 << 0x1f;
      fVar10 = ((fVar26 - fVar16 * fVar7) - fVar29 * fVar7) - fVar7 * 1.5099067e-07;
      fVar28 = ((fVar28 - fVar20 * fVar12) - fVar30 * fVar12) - fVar12 * 1.5099067e-07;
      fVar6 = ((fVar6 - DAT_146fec5e0._8_4_ * fVar13) - DAT_146fec5d0._8_4_ * fVar13) -
              fVar13 * 1.5099067e-07;
      fVar11 = ((fVar11 - DAT_146fec5e0._12_4_ * fVar15) - DAT_146fec5d0._12_4_ * fVar15) -
               fVar15 * 1.5099067e-07;
      fVar16 = fVar10 - fVar7 * 5.126688e-12;
      fVar20 = fVar28 - fVar12 * 5.126688e-12;
      fVar26 = fVar6 - fVar13 * 5.126688e-12;
      fVar5 = fVar11 - fVar15 * 5.126688e-12;
      fVar10 = fVar10 * fVar10;
      fVar28 = fVar28 * fVar28;
      fVar6 = fVar6 * fVar6;
      fVar11 = fVar11 * fVar11;
      auVar9._0_4_ = (((fVar10 * 2.608e-06 + -0.000198107) * fVar10 + (float)DAT_146fec580) * fVar10
                     + -0.16666658) * fVar10 * fVar16 + fVar16;
      auVar9._4_4_ = (((fVar28 * 2.608e-06 + -0.000198107) * fVar28 + DAT_146fec580._4_4_) * fVar28
                     + -0.16666658) * fVar28 * fVar20 + fVar20;
      auVar9._8_4_ = (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + DAT_146fec580._8_4_) * fVar6 +
                     -0.16666658) * fVar6 * fVar26 + fVar26;
      auVar9._12_4_ =
           (((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + DAT_146fec580._12_4_) * fVar11 +
           -0.16666658) * fVar11 * fVar5 + fVar5;
      aauStack_38[0] = auVar9 ^ auVar36;
    }
    lVar4 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar16 = *(float *)(aauStack_d8[0] + lVar4 * 4);
        dVar17 = (double)fVar16;
        if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
          fVar16 = fVar16 - fVar16;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar16) >> 0x17) - 0x8e & 0xfff8);
          dVar18 = (double)(*(ulonglong *)(&DAT_146fec410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar17;
          dVar21 = (double)(*(ulonglong *)(&DAT_146fec410 + uVar2 * 2) << 0x28) * dVar17;
          dVar19 = dVar18 + dVar21;
          iVar3 = SUB84(dVar19 + 6755399441055744.0,0);
          uVar38 = iVar3 * 2;
          uVar39 = (iVar3 << 0x19) >> 0x1f;
          dVar17 = dVar17 * *(double *)(&DAT_146fec418 + uVar2 * 2) + dVar21 + (dVar18 - dVar19) +
                   (dVar19 - ((dVar19 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar38 + uVar39 ^ uVar39) & 0xfe);
          fVar16 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar17 * dVar17) *
                                    *(double *)(&DAT_146fec008 + uVar2 * 8)) ^
                                   (ulonglong)(((uVar38 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&DAT_146fec000 + uVar2 * 8) * dVar17 *
                          (double)((ulonglong)(9960.277636776373 - dVar17 * dVar17) ^
                                  (ulonglong)((uVar38 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar4 * 4) = fVar16;
      }
      lVar4 = lVar4 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar4 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// FUNCTION 143ddc798 __scrt_initialize_type_info body=14 status=ok
// SIG undefined __scrt_initialize_type_info(void)

void __scrt_initialize_type_info(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddc79f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  InitializeSListHead(&DAT_146bcc1d0);
  return;
}



// FUNCTION 143ddc7a8 __scrt_is_ucrt_dll_in_use body=12 status=ok
// SIG undefined __scrt_is_ucrt_dll_in_use(void)

bool __scrt_is_ucrt_dll_in_use(void)

{
  return DAT_1468389d8 != 0;
}



// FUNCTION 143ddc7b4 __crt_debugger_hook body=8 status=ok
// SIG void __crt_debugger_hook(int param_1)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl __crt_debugger_hook(int param_1)

{
  _DAT_146bcc1e0 = 0;
  return;
}



// FUNCTION 143ddc7bc __scrt_fastfail body=330 status=ok
// SIG undefined __scrt_fastfail(void)

void __scrt_fastfail(undefined4 param_1)

{
  code *pcVar1;
  BOOL BVar2;
  LONG LVar3;
  PRUNTIME_FUNCTION FunctionEntry;
  undefined1 *puVar4;
  undefined8 unaff_retaddr;
  DWORD64 local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 local_4d8 [152];
  undefined1 *local_440;
  DWORD64 local_3e0;
  
  puVar4 = auStack_5c8;
  BVar2 = _guard_xfg_dispatch_icall_nop(0x17);
  if (BVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar4 = auStack_5c0;
  }
  *(undefined8 *)(puVar4 + -8) = 0x143ddc7ef;
  __crt_debugger_hook(3);
  *(undefined8 *)(puVar4 + -8) = 0x143ddc800;
  _guard_xfg_dispatch_icall_nop(local_4d8,0,0x4d0);
  *(undefined8 *)(puVar4 + -8) = 0x143ddc80a;
  RtlCaptureContext(local_4d8);
  *(undefined8 *)(puVar4 + -8) = 0x143ddc824;
  FunctionEntry = RtlLookupFunctionEntry(local_3e0,&local_res10,(PUNWIND_HISTORY_TABLE)0x0);
  if (FunctionEntry != (PRUNTIME_FUNCTION)0x0) {
    *(undefined8 *)(puVar4 + 0x38) = 0;
    *(undefined1 **)(puVar4 + 0x30) = local_res18;
    *(undefined1 **)(puVar4 + 0x28) = local_res20;
    *(undefined1 **)(puVar4 + 0x20) = local_4d8;
    *(undefined8 *)(puVar4 + -8) = 0x143ddc865;
    RtlVirtualUnwind(0,local_res10,local_3e0,FunctionEntry,*(PCONTEXT *)(puVar4 + 0x20),
                     *(PVOID **)(puVar4 + 0x28),*(PDWORD64 *)(puVar4 + 0x30),
                     *(PKNONVOLATILE_CONTEXT_POINTERS *)(puVar4 + 0x38));
  }
  local_440 = &stack0x00000008;
  *(undefined8 *)(puVar4 + -8) = 0x143ddc897;
  _guard_xfg_dispatch_icall_nop(puVar4 + 0x50,0,0x98);
  *(undefined8 *)(puVar4 + 0x60) = unaff_retaddr;
  *(undefined4 *)(puVar4 + 0x50) = 0x40000015;
  *(undefined4 *)(puVar4 + 0x54) = 1;
  *(undefined8 *)(puVar4 + -8) = 0x143ddc8b9;
  BVar2 = IsDebuggerPresent();
  *(undefined1 **)(puVar4 + 0x40) = puVar4 + 0x50;
  *(undefined1 **)(puVar4 + 0x48) = local_4d8;
  *(undefined8 *)(puVar4 + -8) = 0x143ddc8da;
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  *(undefined8 *)(puVar4 + -8) = 0x143ddc8e5;
  LVar3 = UnhandledExceptionFilter((_EXCEPTION_POINTERS *)(puVar4 + 0x40));
  if ((LVar3 == 0) && (BVar2 != 1)) {
    *(undefined8 *)(puVar4 + -8) = 0x143ddc8f5;
    __crt_debugger_hook(3);
  }
  return;
}



// FUNCTION 143ddc908 __scrt_get_show_window_mode body=58 status=ok
// SIG undefined __scrt_get_show_window_mode(void)

WORD __scrt_get_show_window_mode(void)

{
  WORD WVar1;
  _STARTUPINFOW local_78;
  
  _guard_xfg_dispatch_icall_nop(&local_78,0,0x68);
  GetStartupInfoW(&local_78);
  WVar1 = 10;
  if (((byte)local_78.dwFlags & 1) != 0) {
    WVar1 = local_78.wShowWindow;
  }
  return WVar1;
}



// FUNCTION 143ddc944 FUN_143ddc944 body=5 status=ok
// SIG undefined FUN_143ddc944(void)

undefined8 FUN_143ddc944(void)

{
  return 0;
}



// FUNCTION 143ddc94c __scrt_is_managed_app body=82 status=ok
// SIG undefined __scrt_is_managed_app(void)

ulonglong __scrt_is_managed_app(void)

{
  HMODULE pHVar1;
  ulonglong uVar2;
  int *piVar3;
  
  pHVar1 = GetModuleHandleW((LPCWSTR)0x0);
  if ((((pHVar1 == (HMODULE)0x0) || ((short)pHVar1->unused != 0x5a4d)) ||
      (piVar3 = (int *)((longlong)&pHVar1->unused + (longlong)pHVar1[0xf].unused), *piVar3 != 0x4550
      )) || (((pHVar1 = (HMODULE)0x20b, (short)piVar3[6] != 0x20b || ((uint)piVar3[0x21] < 0xf)) ||
             (piVar3[0x3e] == 0)))) {
    uVar2 = (ulonglong)pHVar1 & 0xffffffffffffff00;
  }
  else {
    uVar2 = 0x201;
  }
  return uVar2;
}



// FUNCTION 143ddc9a0 __scrt_set_unhandled_exception_filter body=14 status=ok
// SIG undefined __scrt_set_unhandled_exception_filter(void)

void __scrt_set_unhandled_exception_filter(void)

{
                    /* WARNING: Could not recover jumptable at 0x000143ddc9a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
  return;
}



// FUNCTION 143ddc9b0 __scrt_unhandled_exception_filter body=55 status=ok
// SIG undefined __scrt_unhandled_exception_filter(void)

undefined8 __scrt_unhandled_exception_filter(undefined8 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((*piVar1 == -0x1f928c9d) && (piVar1[6] == 4)) {
    if ((piVar1[8] + 0xe66cfae0U < 3) || (piVar1[8] == 0x1994000)) {
                    /* WARNING: Subroutine does not return */
      _guard_xfg_dispatch_icall_nop();
    }
  }
  return 0;
}



// FUNCTION 143ddc9f0 __sse2_sinf4 body=2233 status=ok
// SIG undefined __sse2_sinf4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __sse2_sinf4(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  undefined1 in_XMM0 [16];
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  uint uVar34;
  uint uVar38;
  double dVar35;
  float fVar39;
  undefined1 auVar36 [16];
  double dVar40;
  float local_f8 [8];
  ulonglong local_d8;
  uint local_b8;
  uint uStack_b4;
  undefined1 local_38 [3] [16];
  undefined1 auVar37 [16];
  
  fVar13 = in_XMM0._0_4_;
  fVar14 = in_XMM0._4_4_;
  auVar36 = in_XMM0 & _DAT_146fea600;
  uVar34 = -(uint)(0x461c4000 < auVar36._0_4_);
  uVar38 = -(uint)(0x461c4000 < auVar36._4_4_);
  auVar37._0_8_ = CONCAT44(uVar38,uVar34);
  auVar37._8_4_ = -(uint)(0x461c4000 < auVar36._8_4_);
  auVar37._12_4_ = -(uint)(0x461c4000 < auVar36._12_4_);
  uVar1 = movmskps(in_EAX,auVar37);
  fVar15 = (float)DAT_146fea5d0;
  fVar16 = DAT_146fea5d0._4_4_;
  fVar39 = (float)DAT_146fea5c0;
  fVar17 = DAT_146fea5c0._4_4_;
  if (uVar1 == 0) {
    iVar4 = (int)(fVar13 * 0.31830987);
    iVar7 = (int)(fVar14 * 0.31830987);
    fVar5 = (float)iVar4;
    fVar8 = (float)iVar7;
    fVar15 = ((fVar13 - fVar15 * fVar5) - fVar39 * fVar5) - fVar5 * 1.5099067e-07;
    fVar16 = ((fVar14 - fVar16 * fVar8) - fVar17 * fVar8) - fVar8 * 1.5099067e-07;
    fVar13 = fVar15 - fVar5 * 5.126688e-12;
    fVar14 = fVar16 - fVar8 * 5.126688e-12;
    fVar15 = fVar15 * fVar15;
    fVar16 = fVar16 * fVar16;
    return CONCAT44((((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar14 + fVar14,
                    (((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar13 + fVar13) ^ CONCAT44(iVar7 << 0x1f,iVar4 << 0x1f)
    ;
  }
  local_d8 = (ulonglong)DAT_146fea6d0 & in_XMM0._0_8_;
  iVar7 = (int)(fVar13 * 0.31830987);
  iVar9 = (int)(fVar14 * 0.31830987);
  iVar11 = (int)(in_XMM0._8_4_ * 0.31830987);
  iVar12 = (int)(in_XMM0._12_4_ * 0.31830987);
  auVar36 = in_XMM0 & _DAT_146fea600;
  fVar5 = auVar36._0_4_;
  auVar33._0_4_ = -(uint)(0x4e800000 < (int)fVar5);
  fVar8 = auVar36._4_4_;
  auVar33._4_4_ = -(uint)(0x4e800000 < (int)fVar8);
  auVar33._8_4_ = -(uint)(0x4e800000 < auVar36._8_4_);
  auVar33._12_4_ = -(uint)(0x4e800000 < auVar36._12_4_);
  iVar4 = movmskps(param_2,auVar33);
  if (iVar4 == 0) {
    if (uVar1 == 0xf) {
      auVar31._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar31._4_4_ = 0;
      auVar31._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar31._12_4_ = 0;
      auVar31 = auVar31 & _DAT_146fea680;
      dVar35 = SUB168(_DAT_146fea670 | auVar31,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_146fea670 | auVar31,8) - 6755399441055744.0;
      dVar21 = (double)fVar5 - dVar35 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar35 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar35 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar32._0_8_ = auVar31._0_8_ << 0x3e;
      auVar32._8_8_ = auVar31._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar35 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar35 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar35 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar13 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar35 * -1.3350302175814904e-19)) -
                       dVar35 * 1.6446256936324258e-26) + dVar25);
      fVar15 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar14 = fVar13 * fVar13;
      fVar16 = fVar15 * fVar15;
      local_38[0]._0_8_ =
           CONCAT44((((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar15 + fVar15,
                    (((fVar14 * 2.608e-06 + -0.000198107) * fVar14 + 0.008333075) * fVar14 +
                    -0.16666658) * fVar14 * fVar13 + fVar13) ^
           CONCAT44(SUB164(_DAT_146fea610 & auVar32,0xc),SUB164(_DAT_146fea610 & auVar32,4)) ^
           local_d8;
    }
    else {
      fVar6 = (float)iVar7;
      fVar10 = (float)iVar9;
      fVar13 = ((fVar13 - fVar15 * fVar6) - fVar39 * fVar6) - fVar6 * 1.5099067e-07;
      fVar14 = ((fVar14 - fVar16 * fVar10) - fVar17 * fVar10) - fVar10 * 1.5099067e-07;
      auVar29._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar29._4_4_ = 0;
      auVar29._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar29._12_4_ = 0;
      auVar29 = auVar29 & _DAT_146fea680;
      dVar35 = SUB168(_DAT_146fea670 | auVar29,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_146fea670 | auVar29,8) - 6755399441055744.0;
      local_b8 = SUB164(auVar37 ^ _DAT_146fea6b0,0);
      uStack_b4 = SUB164(auVar37 ^ _DAT_146fea6b0,4);
      dVar21 = (double)fVar5 - dVar35 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar35 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar35 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar30._0_8_ = auVar29._0_8_ << 0x3e;
      auVar30._8_8_ = auVar29._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar35 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar35 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar35 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar15 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar35 * -1.3350302175814904e-19)) -
                       dVar35 * 1.6446256936324258e-26) + dVar25);
      fVar39 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar16 = (float)((uint)(fVar15 * fVar15) & uVar34 | (uint)(fVar13 * fVar13) & local_b8);
      fVar17 = (float)((uint)(fVar39 * fVar39) & uVar38 | (uint)(fVar14 * fVar14) & uStack_b4);
      fVar13 = (float)((uint)fVar15 & uVar34 | (uint)(fVar13 - fVar6 * 5.126688e-12) & local_b8);
      fVar14 = (float)((uint)fVar39 & uVar38 | (uint)(fVar14 - fVar10 * 5.126688e-12) & uStack_b4);
      local_38[0]._0_8_ =
           CONCAT44((((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + 0.008333075) * fVar17 +
                    -0.16666658) * fVar17 * fVar14 + fVar14,
                    (((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar13 + fVar13) ^
           ((CONCAT44(SUB164(_DAT_146fea610 & auVar30,0xc),SUB164(_DAT_146fea610 & auVar30,4)) ^
            local_d8) & auVar37._0_8_ | CONCAT44(iVar9 << 0x1f & uStack_b4,iVar7 << 0x1f & local_b8)
           );
    }
  }
  else {
    if (uVar1 != 0xf) {
      fVar5 = (float)iVar7;
      fVar8 = (float)iVar9;
      fVar6 = (float)iVar11;
      fVar10 = (float)iVar12;
      auVar20._0_4_ = iVar7 << 0x1f;
      auVar20._4_4_ = iVar9 << 0x1f;
      auVar20._8_4_ = iVar11 << 0x1f;
      auVar20._12_4_ = iVar12 << 0x1f;
      fVar39 = ((fVar13 - fVar15 * fVar5) - fVar39 * fVar5) - fVar5 * 1.5099067e-07;
      fVar17 = ((fVar14 - fVar16 * fVar8) - fVar17 * fVar8) - fVar8 * 1.5099067e-07;
      fVar18 = ((in_XMM0._8_4_ - DAT_146fea5d0._8_4_ * fVar6) - DAT_146fea5c0._8_4_ * fVar6) -
               fVar6 * 1.5099067e-07;
      fVar19 = ((in_XMM0._12_4_ - DAT_146fea5d0._12_4_ * fVar10) - DAT_146fea5c0._12_4_ * fVar10) -
               fVar10 * 1.5099067e-07;
      fVar13 = fVar39 - fVar5 * 5.126688e-12;
      fVar14 = fVar17 - fVar8 * 5.126688e-12;
      fVar15 = fVar18 - fVar6 * 5.126688e-12;
      fVar16 = fVar19 - fVar10 * 5.126688e-12;
      fVar39 = fVar39 * fVar39;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      fVar19 = fVar19 * fVar19;
      auVar36._0_4_ =
           (((fVar39 * 2.608e-06 + -0.000198107) * fVar39 + (float)DAT_146fea580) * fVar39 +
           -0.16666658) * fVar39 * fVar13 + fVar13;
      auVar36._4_4_ =
           (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + DAT_146fea580._4_4_) * fVar17 +
           -0.16666658) * fVar17 * fVar14 + fVar14;
      auVar36._8_4_ =
           (((fVar18 * 2.608e-06 + -0.000198107) * fVar18 + DAT_146fea580._8_4_) * fVar18 +
           -0.16666658) * fVar18 * fVar15 + fVar15;
      auVar36._12_4_ =
           (((fVar19 * 2.608e-06 + -0.000198107) * fVar19 + DAT_146fea580._12_4_) * fVar19 +
           -0.16666658) * fVar19 * fVar16 + fVar16;
      local_38[0] = auVar36 ^ auVar20;
    }
    lVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar13 = local_f8[lVar3];
        dVar21 = (double)fVar13;
        if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
          fVar13 = fVar13 - fVar13;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar13) >> 0x17) - 0x8e & 0xfff8);
          dVar22 = (double)(*(ulonglong *)(&DAT_146fea410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar21;
          dVar24 = (double)(*(ulonglong *)(&DAT_146fea410 + uVar2 * 2) << 0x28) * dVar21;
          dVar23 = dVar22 + dVar24;
          iVar4 = SUB84(dVar23 + 6755399441055744.0,0);
          uVar34 = iVar4 * 2;
          uVar38 = (iVar4 << 0x19) >> 0x1f;
          dVar21 = dVar21 * *(double *)(&DAT_146fea418 + uVar2 * 2) + dVar24 + (dVar22 - dVar23) +
                   (dVar23 - ((dVar23 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar34 + uVar38 ^ uVar38) & 0xfe);
          fVar13 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar21 * dVar21) *
                                    *(double *)(&DAT_146fea008 + uVar2 * 8)) ^
                                   (ulonglong)((uVar34 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&DAT_146fea000 + uVar2 * 8) * dVar21 *
                          (double)((ulonglong)(9960.277636776373 - dVar21 * dVar21) ^
                                  (ulonglong)(((uVar34 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(local_38[0] + lVar3 * 4) = fVar13;
      }
      lVar3 = lVar3 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar3 < 4);
  }
  return local_38[0]._0_8_;
}



// FUNCTION 143ddd2b0 __static_scalar_sin body=1264 status=ok
// SIG undefined __static_scalar_sin(void)

double __static_scalar_sin(double param_1)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uVar1 & 0x7ff0) == 0x7ff0) {
    return param_1 - param_1;
  }
  uVar4 = (uVar1 & 0x7ff0) - 0x3f60 >> 7 & 0xfffc;
  uVar16 = (ulonglong)param_1 & 0xffffffff;
  uVar11 = (ulonglong)(((uint)((ulonglong)param_1 >> 0x15) | 0x80000000) >> 0xb);
  uVar15 = *(uint *)(&DAT_146fea7f4 + uVar4) * uVar16;
  uVar17 = (uVar15 & 0xffffffff) + *(uint *)(&DAT_146fea7f8 + uVar4) * uVar11;
  uVar9 = *(uint *)(&DAT_146fea7f0 + uVar4) * uVar16;
  uVar10 = *(uint *)(&DAT_146fea7ec + uVar4) * uVar16;
  uVar13 = *(uint *)(&DAT_146fea7f4 + uVar4) * uVar11 + (uVar15 >> 0x20) + (uVar17 >> 0x20) +
           (uVar9 & 0xffffffff);
  uVar15 = uVar17 & 0xffffffff | uVar13 << 0x20;
  uVar13 = *(uint *)(&DAT_146fea7f0 + uVar4) * uVar11 + (uVar9 >> 0x20) + (uVar13 >> 0x20) +
           (uVar10 & 0xffffffff);
  uVar9 = *(uint *)(&DAT_146fea7e8 + uVar4) * uVar16;
  uVar18 = *(uint *)(&DAT_146fea7ec + uVar4) * uVar11 + (uVar10 >> 0x20) + (uVar13 >> 0x20) +
           (uVar9 & 0xffffffff);
  uVar10 = *(uint *)(&DAT_146fea7e4 + uVar4) * uVar16;
  uVar17 = uVar18 << 0x20 | uVar13 & 0xffffffff;
  uVar8 = *(uint *)(&DAT_146fea7e0 + uVar4);
  uVar13 = *(uint *)(&DAT_146fea7e8 + uVar4) * uVar11 + (uVar9 >> 0x20) + (uVar18 >> 0x20) +
           (uVar10 & 0xffffffff);
  uVar9 = uVar13 & 0xffffffff;
  iVar5 = (((int)(&DAT_146fea7e0 + uVar4) + -0x46fea7e0) * 8 + 0x13) -
          ((uVar1 >> 4 & 0x7ff) - 0x3ff);
  lVar14 = *(uint *)(&DAT_146fea7e4 + uVar4) * uVar11 + (uVar10 >> 0x20) + (uVar13 >> 0x20) +
           uVar16 * uVar8;
  sVar2 = (short)iVar5;
  sVar6 = sVar2 + 0x20;
  if (iVar5 < 1) {
    bVar3 = -(char)iVar5;
    uVar11 = (lVar14 << 0x20 | uVar9) << (bVar3 & 0x3f);
    if ((uVar11 & 0x80000000) == 0) {
      uVar9 = (ulonglong)((uint)uVar11 >> (bVar3 & 0x1f));
      uVar7 = 0;
      uVar4 = (uint)(uVar11 >> 3);
    }
    else {
      bVar19 = uVar15 != 0;
      uVar15 = -uVar15;
      bVar20 = uVar17 != 0;
      uVar9 = -uVar17;
      uVar17 = uVar9 - bVar19;
      uVar9 = ((0x100000000U >> (bVar3 & 0x3f)) - (ulonglong)((uint)uVar11 >> (bVar3 & 0x1f))) -
              (ulonglong)(bVar20 || uVar9 < bVar19);
      uVar7 = 0x8000;
      uVar4 = (int)(uVar11 >> 3) + 0x20000000;
    }
  }
  else {
    bVar3 = 0x1d - (char)iVar5;
    uVar4 = (int)lVar14 << (bVar3 & 0x1f);
    uVar12 = uVar4 & 0x1fffffff;
    if ((uVar4 & 0x10000000) == 0) {
      uVar7 = 0;
      uVar9 = (ulonglong)(uVar12 >> (bVar3 & 0x1f)) << 0x20 | uVar9;
    }
    else {
      uVar4 = uVar4 + 0x20000000;
      bVar19 = uVar15 != 0;
      uVar15 = -uVar15;
      bVar20 = uVar17 != 0;
      uVar11 = -uVar17;
      uVar17 = uVar11 - bVar19;
      uVar9 = (((ulonglong)(0x20000000 >> (bVar3 & 0x1f)) << 0x20) -
              ((ulonglong)(uVar12 >> (bVar3 & 0x1f)) << 0x20 | uVar9)) -
              (ulonglong)(bVar20 || uVar11 < bVar19);
      uVar7 = 0x8000;
    }
  }
  uVar11 = uVar15;
  uVar16 = uVar17;
  if (uVar9 == 0) {
    sVar6 = sVar2 + 0x60;
    uVar11 = 0;
    uVar9 = uVar17;
    uVar16 = uVar15;
    if (uVar17 == 0) {
      sVar6 = sVar2 + 0xa0;
      uVar16 = 0;
      uVar9 = uVar15;
      if (uVar15 == 0) {
        dVar21 = 0.0;
        dVar30 = 0.0;
        goto LAB_143ddd52e;
      }
    }
  }
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  iVar5 = 0x1d - (int)lVar14;
  bVar3 = (byte)iVar5;
  if (iVar5 == 0 || 0x1d < (int)lVar14) {
    uVar15 = uVar9;
    if (iVar5 != 0) {
      uVar15 = uVar9 >> (-bVar3 & 0x3f);
      sVar6 = sVar6 + (short)iVar5;
      uVar16 = uVar16 >> (-bVar3 & 0x3f) | uVar9 << (bVar3 + 0x40 & 0x3f);
    }
  }
  else {
    sVar6 = sVar6 + (short)iVar5;
    uVar15 = uVar16 >> (0x40 - bVar3 & 0x3f);
    uVar16 = uVar16 << (bVar3 & 0x3f) | uVar11 >> (0x40 - bVar3 & 0x3f);
    uVar15 = uVar9 << (bVar3 & 0x3f) | uVar15;
  }
  uVar7 = (sVar6 * -0x10 + 0x3ff0U | uVar1 & 0x8000) ^ uVar7;
  dVar21 = (double)(longlong)uVar15 * (double)((ulonglong)uVar7 << 0x30);
  uVar8 = (int)((uint)(uVar1 & 0x8000) << 0x10) >> 0x1f;
  dVar30 = (double)(uVar16 >> 1) * (double)((ulonglong)(ushort)(uVar7 - 0x3f0) << 0x30);
  dVar22 = dVar21 * 0.7853981256484985;
  uVar8 = (uVar4 >> 0x1d) + uVar8 ^ uVar8;
  dVar30 = (dVar21 + dVar30) * 3.774894977445941e-08 + dVar30 * 0.7853981256484985;
  dVar21 = dVar22 + dVar30;
  dVar30 = dVar30 + (dVar22 - dVar21);
LAB_143ddd52e:
  dVar27 = (dVar21 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
  uVar8 = ((int)ROUND(dVar21 * 10.185916357881302) + 0x1c7600 + uVar8 * 8 & 0x3f) << 5;
  dVar28 = dVar27 * 3.798187816439979e-12;
  dVar22 = dVar21 - dVar27 * 0.09817477042088285;
  dVar21 = dVar21 - dVar27 * 0.09817477042088285;
  dVar33 = dVar21 - dVar28;
  dVar23 = dVar22 - dVar28;
  dVar25 = dVar22 - dVar27 * 3.798187816439979e-12;
  dVar24 = dVar23 * dVar23;
  dVar26 = dVar25 * dVar25;
  dVar29 = *(double *)(&DAT_146fea890 + uVar8) + *(double *)(&DAT_146fea8a8 + uVar8);
  dVar31 = *(double *)(&DAT_146fea8a8 + uVar8) * dVar33;
  dVar34 = dVar33 * *(double *)(&DAT_146fea890 + uVar8);
  dVar32 = dVar31 + *(double *)(&DAT_146fea898 + uVar8);
  dVar35 = dVar34 + dVar32;
  return dVar35 + ((dVar27 * 1.2639164054974691e-22 - ((dVar21 - dVar33) - dVar28)) - dVar30) *
                  (*(double *)(&DAT_146fea898 + uVar8) * dVar33 - dVar29) +
                  *(double *)(&DAT_146fea8a0 + uVar8) +
                  (*(double *)(&DAT_146fea898 + uVar8) - dVar32) + dVar31 +
                  (dVar32 - dVar35) + dVar34 +
                  (dVar24 * 0.008333333333333333 + -0.16666666666666666 +
                  (dVar22 * 2.7557319223985893e-06 * dVar23 + -0.0001984126984126984) *
                  dVar24 * dVar24) * dVar29 * dVar33 * dVar24 +
                  (dVar26 * 0.041666666666666664 + -0.5 +
                  (dVar22 * 2.48015873015873e-05 * dVar25 + -0.001388888888888889) * dVar26 * dVar26
                  ) * *(double *)(&DAT_146fea898 + uVar8) * dVar26;
}



// FUNCTION 143ddd7a0 __sse2_sin2 body=1202 status=ok
// SIG undefined __sse2_sin2(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong __sse2_sin2(double param_1,undefined4 param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  uint uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  double in_XMM0_Qb;
  double dVar7;
  double dVar8;
  double dVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong local_58;
  ulonglong local_48;
  ulonglong local_38;
  
  dVar5 = param_1 * 0.3183098861837907 + 6755399441055744.0;
  dVar6 = dVar5 - 6755399441055744.0;
  uVar11 = -(uint)(0x40ff4000 < (uint)((ulonglong)ABS(param_1) >> 0x20));
  auVar2._4_4_ = uVar11;
  auVar2._0_4_ = -(uint)(0 < SUB84(ABS(param_1),0));
  auVar2._8_4_ = -(uint)(0 < SUB84(ABS(in_XMM0_Qb),0));
  auVar2._12_4_ = -(uint)(0x40ff4000 < (uint)((ulonglong)ABS(in_XMM0_Qb) >> 0x20));
  uVar3 = movmskpd(in_EAX,auVar2);
  if (uVar3 != 0) {
    dVar7 = ABS(param_1);
    auVar1._4_4_ = -(uint)((uint)((ulonglong)dVar7 >> 0x20) < 0x41d00000);
    auVar1._0_4_ = -(uint)(SUB84(dVar7,0) < 0);
    auVar1._8_4_ = -(uint)(SUB84(ABS(in_XMM0_Qb),0) < 0);
    auVar1._12_4_ = -(uint)((uint)((ulonglong)ABS(in_XMM0_Qb) >> 0x20) < 0x41d00000);
    iVar4 = movmskpd(param_2,auVar1);
    if (iVar4 == 3) {
      if (uVar3 != 3) {
        local_58 = (longlong)dVar5 << 0x3f & (CONCAT44(uVar11,uVar11) ^ 0xffffffffffffffff);
        local_48 = (ulonglong)
                   ((((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
                    dVar6 * 1.078060505991553e-14) - dVar6 * 6.564007085747001e-22) &
                   (CONCAT44(uVar11,uVar11) ^ 0xffffffffffffffff);
      }
      uVar10 = CONCAT44((int)(dVar7 * 0.6366197723675814),(int)(dVar7 * 0.6366197723675814) + 1) &
               (ulonglong)DAT_146feb200;
      dVar6 = (double)(uVar10 | 0x4338000000000000) - 6755399441055744.0;
      dVar7 = dVar7 - dVar6 * 1.5707950592041016;
      dVar5 = dVar7 - dVar6 * 1.267590960196685e-06;
      dVar8 = dVar5 - dVar6 * -1.6513982022126061e-13;
      dVar5 = ((dVar7 - dVar5) - dVar6 * 1.267590960196685e-06) +
              ((dVar5 - dVar8) - dVar6 * -1.6513982022126061e-13);
      dVar7 = dVar8 + dVar5;
      dVar9 = dVar7 - dVar6 * -1.3350302175814904e-19;
      dVar9 = dVar9 + ((dVar5 + (dVar8 - dVar7) +
                       ((dVar7 - dVar9) - dVar6 * -1.3350302175814904e-19)) -
                      dVar6 * 1.6446256936324258e-26);
      uVar10 = uVar10 << 0x3e & (ulonglong)DAT_146feb190 ^ (ulonglong)param_1 & 0x8000000000000000;
      if (uVar3 != 3) {
        dVar9 = (double)((ulonglong)dVar9 & CONCAT44(uVar11,uVar11) | local_48);
        uVar10 = uVar10 & (ulonglong)uVar11 << 0x20 | local_58;
      }
      dVar5 = dVar9 * dVar9;
      dVar6 = dVar5 * dVar5;
      local_38 = (ulonglong)
                 ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
                   2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar9 +
                 (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
                  -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar5 * dVar9 + dVar9) ^
                 uVar10;
    }
    else {
      if (uVar3 != 3) {
        dVar7 = ((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
                dVar6 * 1.078060505991553e-14;
        dVar8 = dVar7 * dVar7;
        dVar7 = dVar7 - dVar6 * 6.564007085747001e-22;
        dVar6 = dVar8 * dVar8;
        local_38 = (ulonglong)
                   ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
                     2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar7 +
                   (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
                    -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar8 * dVar7 + dVar7)
                   ^ (longlong)dVar5 << 0x3f;
      }
      if ((uVar3 & 1) != 0) {
        local_38 = __static_scalar_sin(param_1);
      }
      if (((int)uVar3 >> 1 & 1U) != 0) {
        __static_scalar_sin(in_XMM0_Qb);
      }
    }
    return local_38;
  }
  dVar7 = ((param_1 - dVar6 * 3.141592502593994) - dVar6 * 1.5099578831723193e-07) -
          dVar6 * 1.078060505991553e-14;
  dVar8 = dVar7 * dVar7;
  dVar7 = dVar7 - dVar6 * 6.564007085747001e-22;
  dVar6 = dVar8 * dVar8;
  return (ulonglong)
         ((((dVar6 * 2.7204790957888847e-15 + 1.605893649037159e-10) * dVar6 +
           2.7557319210152756e-06) * dVar6 + 0.008333333333333165) * dVar6 * dVar7 +
         (((dVar6 * -7.642917806891047e-13 + -2.5052106798274583e-08) * dVar6 +
          -0.0001984126984120184) * dVar6 + -0.16666666666666666) * dVar8 * dVar7 + dVar7) ^
         (longlong)dVar5 << 0x3f;
}



// FUNCTION 143dddc60 __static_scalar_cos body=1265 status=ok
// SIG undefined __static_scalar_cos(void)

double __static_scalar_cos(double param_1)

{
  ushort uVar1;
  short sVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  bool bVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  
  uVar1 = (ushort)((ulonglong)param_1 >> 0x30);
  if ((uVar1 & 0x7ff0) == 0x7ff0) {
    return param_1 - param_1;
  }
  uVar4 = (uVar1 & 0x7ff0) - 0x3f60 >> 7 & 0xfffc;
  uVar16 = (ulonglong)param_1 & 0xffffffff;
  uVar11 = (ulonglong)(((uint)((ulonglong)param_1 >> 0x15) | 0x80000000) >> 0xb);
  uVar15 = *(uint *)(&DAT_146feb3e4 + uVar4) * uVar16;
  uVar17 = (uVar15 & 0xffffffff) + *(uint *)(&DAT_146feb3e8 + uVar4) * uVar11;
  uVar9 = *(uint *)(&DAT_146feb3e0 + uVar4) * uVar16;
  uVar10 = *(uint *)(&DAT_146feb3dc + uVar4) * uVar16;
  uVar13 = *(uint *)(&DAT_146feb3e4 + uVar4) * uVar11 + (uVar15 >> 0x20) + (uVar17 >> 0x20) +
           (uVar9 & 0xffffffff);
  uVar15 = uVar17 & 0xffffffff | uVar13 << 0x20;
  uVar13 = *(uint *)(&DAT_146feb3e0 + uVar4) * uVar11 + (uVar9 >> 0x20) + (uVar13 >> 0x20) +
           (uVar10 & 0xffffffff);
  uVar9 = *(uint *)(&DAT_146feb3d8 + uVar4) * uVar16;
  uVar18 = *(uint *)(&DAT_146feb3dc + uVar4) * uVar11 + (uVar10 >> 0x20) + (uVar13 >> 0x20) +
           (uVar9 & 0xffffffff);
  uVar10 = *(uint *)(&DAT_146feb3d4 + uVar4) * uVar16;
  uVar17 = uVar18 << 0x20 | uVar13 & 0xffffffff;
  uVar8 = *(uint *)(&DAT_146feb3d0 + uVar4);
  uVar13 = *(uint *)(&DAT_146feb3d8 + uVar4) * uVar11 + (uVar9 >> 0x20) + (uVar18 >> 0x20) +
           (uVar10 & 0xffffffff);
  uVar9 = uVar13 & 0xffffffff;
  iVar5 = (((int)(&DAT_146feb3d0 + uVar4) + -0x46feb3d0) * 8 + 0x13) -
          ((uVar1 >> 4 & 0x7ff) - 0x3ff);
  lVar14 = *(uint *)(&DAT_146feb3d4 + uVar4) * uVar11 + (uVar10 >> 0x20) + (uVar13 >> 0x20) +
           uVar16 * uVar8;
  sVar2 = (short)iVar5;
  sVar6 = sVar2 + 0x20;
  if (iVar5 < 1) {
    bVar3 = -(char)iVar5;
    uVar11 = (lVar14 << 0x20 | uVar9) << (bVar3 & 0x3f);
    if ((uVar11 & 0x80000000) == 0) {
      uVar9 = (ulonglong)((uint)uVar11 >> (bVar3 & 0x1f));
      uVar7 = 0;
      uVar4 = (uint)(uVar11 >> 3);
    }
    else {
      bVar19 = uVar15 != 0;
      uVar15 = -uVar15;
      bVar20 = uVar17 != 0;
      uVar9 = -uVar17;
      uVar17 = uVar9 - bVar19;
      uVar9 = ((0x100000000U >> (bVar3 & 0x3f)) - (ulonglong)((uint)uVar11 >> (bVar3 & 0x1f))) -
              (ulonglong)(bVar20 || uVar9 < bVar19);
      uVar7 = 0x8000;
      uVar4 = (int)(uVar11 >> 3) + 0x20000000;
    }
  }
  else {
    bVar3 = 0x1d - (char)iVar5;
    uVar4 = (int)lVar14 << (bVar3 & 0x1f);
    uVar12 = uVar4 & 0x1fffffff;
    if ((uVar4 & 0x10000000) == 0) {
      uVar7 = 0;
      uVar9 = (ulonglong)(uVar12 >> (bVar3 & 0x1f)) << 0x20 | uVar9;
    }
    else {
      uVar4 = uVar4 + 0x20000000;
      bVar19 = uVar15 != 0;
      uVar15 = -uVar15;
      bVar20 = uVar17 != 0;
      uVar11 = -uVar17;
      uVar17 = uVar11 - bVar19;
      uVar9 = (((ulonglong)(0x20000000 >> (bVar3 & 0x1f)) << 0x20) -
              ((ulonglong)(uVar12 >> (bVar3 & 0x1f)) << 0x20 | uVar9)) -
              (ulonglong)(bVar20 || uVar11 < bVar19);
      uVar7 = 0x8000;
    }
  }
  uVar11 = uVar15;
  uVar16 = uVar17;
  if (uVar9 == 0) {
    sVar6 = sVar2 + 0x60;
    uVar11 = 0;
    uVar9 = uVar17;
    uVar16 = uVar15;
    if (uVar17 == 0) {
      sVar6 = sVar2 + 0xa0;
      uVar16 = 0;
      uVar9 = uVar15;
      if (uVar15 == 0) {
        dVar21 = 0.0;
        dVar30 = 0.0;
        goto LAB_143dddede;
      }
    }
  }
  lVar14 = 0x3f;
  if (uVar9 != 0) {
    for (; uVar9 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  iVar5 = 0x1d - (int)lVar14;
  bVar3 = (byte)iVar5;
  if (iVar5 == 0 || 0x1d < (int)lVar14) {
    uVar15 = uVar9;
    if (iVar5 != 0) {
      uVar15 = uVar9 >> (-bVar3 & 0x3f);
      sVar6 = sVar6 + (short)iVar5;
      uVar16 = uVar16 >> (-bVar3 & 0x3f) | uVar9 << (bVar3 + 0x40 & 0x3f);
    }
  }
  else {
    sVar6 = sVar6 + (short)iVar5;
    uVar15 = uVar16 >> (0x40 - bVar3 & 0x3f);
    uVar16 = uVar16 << (bVar3 & 0x3f) | uVar11 >> (0x40 - bVar3 & 0x3f);
    uVar15 = uVar9 << (bVar3 & 0x3f) | uVar15;
  }
  uVar7 = (sVar6 * -0x10 + 0x3ff0U | uVar1 & 0x8000) ^ uVar7;
  dVar21 = (double)(longlong)uVar15 * (double)((ulonglong)uVar7 << 0x30);
  uVar8 = (int)((uint)(uVar1 & 0x8000) << 0x10) >> 0x1f;
  dVar30 = (double)(uVar16 >> 1) * (double)((ulonglong)(ushort)(uVar7 - 0x3f0) << 0x30);
  dVar22 = dVar21 * 0.7853981256484985;
  uVar8 = (uVar4 >> 0x1d) + uVar8 ^ uVar8;
  dVar30 = (dVar21 + dVar30) * 3.774894977445941e-08 + dVar30 * 0.7853981256484985;
  dVar21 = dVar22 + dVar30;
  dVar30 = dVar30 + (dVar22 - dVar21);
LAB_143dddede:
  dVar27 = (dVar21 * 10.185916357881302 + 6755399441055744.0) - 6755399441055744.0;
  uVar8 = ((int)(longlong)ROUND(dVar21 * 10.185916357881302) + 0x1c7610 + uVar8 * 8 & 0x3f) << 5;
  dVar28 = dVar27 * 3.798187816439979e-12;
  dVar22 = dVar21 - dVar27 * 0.09817477042088285;
  dVar21 = dVar21 - dVar27 * 0.09817477042088285;
  dVar33 = dVar21 - dVar28;
  dVar23 = dVar22 - dVar28;
  dVar25 = dVar22 - dVar27 * 3.798187816439979e-12;
  dVar24 = dVar23 * dVar23;
  dVar26 = dVar25 * dVar25;
  dVar29 = *(double *)(&DAT_146feb480 + uVar8) + *(double *)(&DAT_146feb498 + uVar8);
  dVar31 = *(double *)(&DAT_146feb498 + uVar8) * dVar33;
  dVar34 = dVar33 * *(double *)(&DAT_146feb480 + uVar8);
  dVar32 = dVar31 + *(double *)(&DAT_146feb488 + uVar8);
  dVar35 = dVar34 + dVar32;
  return dVar35 + ((dVar27 * 1.2639164054974691e-22 - ((dVar21 - dVar33) - dVar28)) - dVar30) *
                  (*(double *)(&DAT_146feb488 + uVar8) * dVar33 - dVar29) +
                  *(double *)(&DAT_146feb490 + uVar8) +
                  (*(double *)(&DAT_146feb488 + uVar8) - dVar32) + dVar31 +
                  (dVar32 - dVar35) + dVar34 +
                  (dVar24 * 0.008333333333333333 + -0.16666666666666666 +
                  (dVar22 * 2.7557319223985893e-06 * dVar23 + -0.0001984126984126984) *
                  dVar24 * dVar24) * dVar29 * dVar33 * dVar24 +
                  (dVar26 * 0.041666666666666664 + -0.5 +
                  (dVar22 * 2.48015873015873e-05 * dVar25 + -0.001388888888888889) * dVar26 * dVar26
                  ) * *(double *)(&DAT_146feb488 + uVar8) * dVar26;
}


