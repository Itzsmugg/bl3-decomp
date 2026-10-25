// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436cb8f0 FUN_1436cb8f0 body=238 status=ok
// SIG undefined FUN_1436cb8f0(void)

ulonglong FUN_1436cb8f0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = *param_1;
  iVar1 = *(int *)((longlong)param_1 + 0x7b4);
  if (param_2 - 200U < 100) {
    FUN_1436b58e0(lVar2,"Connect data stream actively\n");
    *(undefined4 *)(param_1 + 0xf8) = 0;
    if (*(int *)(*(longlong *)(*param_1 + 0x198) + 0x18) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x3c3) = 1;
    }
    else {
      FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x7a1) = 1;
    return 0;
  }
  if (iVar1 == 0) {
    FUN_1436b58e0(lVar2,"disabling EPRT usage\n");
    *(undefined1 *)((longlong)param_1 + 0x3cc) = 0;
  }
  if (iVar1 + 1 == 2) {
    FUN_1436b5820(lVar2,"Failed to do PORT");
    return (ulonglong)(iVar1 + 0x1d);
  }
  uVar3 = FUN_1436cc610(param_1,iVar1 + 1);
  return uVar3;
}



// FUNCTION 1436cb9e0 FUN_1436cb9e0 body=260 status=ok
// SIG undefined FUN_1436cb9e0(void)

void FUN_1436cb9e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined *puVar3;
  
  lVar1 = *param_1;
  if (*(int *)(*(longlong *)(lVar1 + 0x198) + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0xd;
    FUN_1436cbb30(param_1,1,0xd);
    return;
  }
  if (*(char *)(lVar1 + 0x446) != '\0') {
    FUN_1436cc610(param_1,0);
    return;
  }
  if (*(char *)(lVar1 + 0x45e) == '\0') {
    FUN_1436cc580(param_1);
    return;
  }
  if (param_1[0xf3] == 0) {
    puVar3 = *(undefined **)(lVar1 + 0x4a8);
    if ((puVar3 == (undefined *)0x0) && (puVar3 = &DAT_145b6d5bc, *(char *)(lVar1 + 0x445) != '\0'))
    {
      puVar3 = &DAT_145b6e7f0;
    }
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,"PRET %s",puVar3);
    if (iVar2 != 0) {
      return;
    }
  }
  else if (*(char *)(lVar1 + 0x450) == '\0') {
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,"PRET RETR %s");
    if (iVar2 != 0) {
      return;
    }
  }
  else {
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,"PRET STOR %s");
    if (iVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xf8) = 0x1d;
  return;
}



// FUNCTION 1436cbaf0 FUN_1436cbaf0 body=55 status=ok
// SIG undefined FUN_1436cbaf0(void)

void FUN_1436cbaf0(longlong param_1)

{
  int iVar1;
  
  iVar1 = Curl_pp_sendf(param_1 + 0x718,&DAT_145afa01c,&DAT_145b6e674);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x7c0) = 9;
  }
  return;
}



// FUNCTION 1436cbb30 FUN_1436cbb30 body=491 status=ok
// SIG undefined FUN_1436cbb30(void)

ulonglong FUN_1436cbb30(longlong *param_1,char param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  char *pcVar7;
  
  plVar1 = param_1 + 0xe3;
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x198);
  if (0xc < param_3) {
    if (param_3 < 0xf) {
      puVar4 = *(undefined8 **)(lVar2 + 0x338);
      goto LAB_1436cbb81;
    }
    if (param_3 == 0xf) {
      puVar4 = *(undefined8 **)(lVar2 + 0x330);
      goto LAB_1436cbb81;
    }
  }
  puVar4 = *(undefined8 **)(lVar2 + 0x328);
LAB_1436cbb81:
  if (param_2 == '\0') {
    *(int *)((longlong)param_1 + 0x7b4) = *(int *)((longlong)param_1 + 0x7b4) + 1;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  }
  if (puVar4 != (undefined8 *)0x0) {
    uVar5 = 0;
    if (0 < *(int *)((longlong)param_1 + 0x7b4)) {
      do {
        if (puVar4 == (undefined8 *)0x0) goto LAB_1436cbc09;
        puVar4 = (undefined8 *)puVar4[1];
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
      } while ((int)uVar6 < *(int *)((longlong)param_1 + 0x7b4));
    }
    if (puVar4 != (undefined8 *)0x0) {
      pcVar7 = (char *)*puVar4;
      if (*pcVar7 == '*') {
        pcVar7 = pcVar7 + 1;
        *(undefined4 *)(param_1 + 0xf7) = 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xf7) = 0;
      }
      uVar5 = Curl_pp_sendf(plVar1,&DAT_145afa01c,pcVar7);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      *(int *)(param_1 + 0xf8) = param_3;
      return uVar5;
    }
  }
LAB_1436cbc09:
  if (param_3 == 0xd) {
    if (*(int *)(lVar3 + 0x18) != 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return 0;
    }
    if (param_1[0xfb] != -1) {
      FUN_1436bed90(lVar2);
      uVar5 = FUN_1436cbe80(param_1,param_1[0xfb]);
      return uVar5;
    }
    if (*(char *)(lVar2 + 0x46f) == '\0') {
      uVar5 = Curl_pp_sendf(plVar1,"SIZE %s",param_1[0xf3]);
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 0x18;
        uVar5 = uVar5 & 0xffffffff;
      }
    }
    else {
      uVar5 = Curl_pp_sendf(plVar1,"RETR %s",param_1[0xf3]);
      if ((int)uVar5 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 0x20;
        return uVar5;
      }
    }
  }
  else {
    if (param_3 == 0xe) {
      uVar5 = FUN_1436cc360(param_1,0);
      return uVar5;
    }
    uVar5 = 0;
    if (param_3 != 0xf) {
      uVar5 = FUN_1436cac40(param_1);
      return uVar5;
    }
  }
  return uVar5;
}



// FUNCTION 1436cbd20 FUN_1436cbd20 body=93 status=ok
// SIG undefined FUN_1436cbd20(void)

void FUN_1436cbd20(longlong *param_1)

{
  int iVar1;
  
  if ((*(int *)(*(longlong *)(*param_1 + 0x198) + 0x18) != 0) && (param_1[0xf3] != 0)) {
    iVar1 = Curl_pp_sendf(param_1 + 0xe3,"REST %d",0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x1a;
      return;
    }
    return;
  }
  FUN_1436cb9e0();
  return;
}



// FUNCTION 1436cbd80 FUN_1436cbd80 body=245 status=ok
// SIG undefined FUN_1436cbd80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436cbd80(undefined8 *param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  char local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (param_3 != 0x1b) {
    if (param_2 == 0x15e) {
      builtin_strncpy(local_28,"Accept-ranges: bytes\r\n",0x17);
      local_28[0x17] = 0;
      uVar1 = Curl_client_write(param_1,3,local_28,0);
      if ((int)uVar1 != 0) {
        return uVar1;
      }
    }
    uVar1 = FUN_1436cb9e0(param_1);
    return uVar1;
  }
  if (param_2 == 0x15e) {
    uVar1 = Curl_pp_sendf(param_1 + 0xe3,"RETR %s",param_1[0xf3]);
    if ((int)uVar1 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x20;
    }
    return uVar1;
  }
  FUN_1436b5820(*param_1,"Couldn\'t use REST");
  return 0x1f;
}



// FUNCTION 1436cbe80 FUN_1436cbe80 body=395 status=ok
// SIG undefined FUN_1436cbe80(void)

undefined8 FUN_1436cbe80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if ((*(longlong *)(lVar1 + 0x420) != 0) && (*(longlong *)(lVar1 + 0x420) < param_2)) {
    FUN_1436b5820(lVar1,"Maximum file size exceeded");
    return 0x3f;
  }
  *(longlong *)(lVar2 + 0x20) = param_2;
  lVar3 = *(longlong *)(lVar1 + 0x89f0);
  if (lVar3 == 0) {
    uVar4 = Curl_pp_sendf(param_1 + 0xe3,"RETR %s",param_1[0xf3]);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0x20;
  }
  else {
    if (param_2 == -1) {
      FUN_1436b58e0(lVar1,"ftp server doesn\'t support SIZE\n");
    }
    else if (lVar3 < 0) {
      if (param_2 < -lVar3) {
LAB_1436cbf06:
        FUN_1436b5820(lVar1,"Offset (%I64d) was beyond file size (%I64d)",lVar3,param_2);
        return 0x24;
      }
      *(longlong *)(lVar2 + 0x20) = -lVar3;
      *(longlong *)(lVar1 + 0x89f0) = param_2 + lVar3;
    }
    else {
      if (param_2 < lVar3) goto LAB_1436cbf06;
      *(longlong *)(lVar2 + 0x20) = param_2 - lVar3;
    }
    if (*(longlong *)(lVar2 + 0x20) == 0) {
      FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      FUN_1436b58e0(lVar1,"File already completely downloaded\n");
      *(undefined4 *)(lVar2 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
    else {
      FUN_1436b58e0(lVar1,"Instructs server to resume from offset %I64d\n",
                    *(undefined8 *)(lVar1 + 0x89f0));
      uVar4 = Curl_pp_sendf(param_1 + 0xe3,"REST %I64d",*(undefined8 *)(lVar1 + 0x89f0));
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      *(undefined4 *)(param_1 + 0xf8) = 0x1b;
    }
  }
  return 0;
}



// FUNCTION 1436cc010 FUN_1436cc010 body=146 status=ok
// SIG undefined FUN_1436cc010(void)

void FUN_1436cc010(longlong *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(*param_1 + 0x198) + 0x18);
  if ((iVar1 == 1) && (param_1[0xf3] != 0)) {
    iVar1 = Curl_pp_sendf(param_1 + 0xe3,"SIZE %s");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x17;
      return;
    }
  }
  else {
    if ((iVar1 == 0) || (param_1[0xf3] == 0)) {
      FUN_1436cb9e0(param_1);
      return;
    }
    iVar1 = Curl_pp_sendf(param_1 + 0xe3,"REST %d",0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x1a;
      return;
    }
  }
  return;
}



// FUNCTION 1436cc0b0 FUN_1436cc0b0 body=234 status=ok
// SIG undefined FUN_1436cc0b0(void)

ulonglong FUN_1436cc0b0(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  if (param_2 == 0xd5) {
    lVar3 = strtoll(lVar1 + 0x7ec,0,0);
  }
  else {
    lVar3 = -1;
  }
  if (param_3 == 0x17) {
    if (lVar3 != -1) {
      curl_msnprintf(lVar1 + 0x7e8,0x4001,"Content-Length: %I64d\r\n",lVar3);
      uVar4 = Curl_client_write(param_1,3,lVar1 + 0x7e8,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
    }
    FUN_1436bed90(lVar1,lVar3);
    uVar2 = FUN_1436cbd20(param_1);
  }
  else if (param_3 == 0x18) {
    FUN_1436bed90(lVar1,lVar3);
    uVar2 = FUN_1436cbe80(param_1,lVar3);
  }
  else {
    if (param_3 != 0x19) {
      return 0;
    }
    *(longlong *)(lVar1 + 0x89f0) = lVar3;
    uVar2 = FUN_1436cc360(param_1,1);
  }
  return (ulonglong)uVar2;
}



// FUNCTION 1436cc1a0 FUN_1436cc1a0 body=165 status=ok
// SIG undefined FUN_1436cc1a0(void)

undefined8 FUN_1436cc1a0(longlong *param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  char local_res10 [24];
  
  lVar1 = *param_1;
  if (399 < param_2) {
    FUN_1436b5820(lVar1,"Failed FTP upload: %0d",param_2);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return 0x19;
  }
  *(undefined4 *)((longlong)param_1 + 0x7c4) = param_3;
  if (*(char *)(lVar1 + 0x446) == '\0') {
    uVar2 = FUN_1436c9c30();
  }
  else {
    *(undefined4 *)(param_1 + 0xf8) = 0;
    uVar2 = AllowServerConnect(param_1,local_res10);
    if ((int)uVar2 == 0) {
      if (local_res10[0] == (char)uVar2) {
        FUN_1436b58e0(lVar1,"Data conn was not available immediately\n");
        *(undefined1 *)((longlong)param_1 + 0x7a4) = 1;
      }
      return 0;
    }
  }
  return uVar2;
}



// FUNCTION 1436cc250 FUN_1436cc250 body=93 status=ok
// SIG undefined FUN_1436cc250(void)

void FUN_1436cc250(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *param_1;
  if ((*(char *)(lVar1 + 0x44f) != '\0') && (param_1[0xf3] != 0)) {
    cVar2 = 'I';
    if (*(char *)(lVar1 + 0x443) != '\0') {
      cVar2 = 'A';
    }
    if ((char)param_1[0xf6] != cVar2) {
      *(undefined4 *)(*(longlong *)(lVar1 + 0x198) + 0x18) = 1;
      FUN_1436ca140(param_1,*(undefined1 *)(lVar1 + 0x443),0x13);
      return;
    }
  }
  FUN_1436cc010();
  return;
}



// FUNCTION 1436cc2b0 ftp_state_type_resp body=171 status=ok
// SIG undefined ftp_state_type_resp(void)

undefined4 ftp_state_type_resp(undefined8 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2 - 200U < 100) {
    if (param_2 != 200) {
      FUN_1436b58e0(*param_1,"Got a %03d response code instead of the assumed 200\n",param_2);
    }
    if (param_3 == 0x13) {
      uVar1 = FUN_1436cc010(param_1);
    }
    else if (param_3 == 0x14) {
      uVar1 = FUN_1436caf10(param_1);
    }
    else if ((param_3 == 0x15) || (param_3 == 0x16)) {
      uVar1 = FUN_1436cbb30(param_1,1,param_3 + -8);
    }
    return uVar1;
  }
  FUN_1436b5820(*param_1,"Couldn\'t set desired mode");
  return 0x11;
}



// FUNCTION 1436cc360 FUN_1436cc360 body=530 status=ok
// SIG undefined FUN_1436cc360(void)

undefined8 FUN_1436cc360(longlong *param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  lVar7 = *(longlong *)(lVar1 + 0x89f0);
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if ((lVar7 != 0) && ((param_2 == '\0' || ((0 < lVar7 && (param_2 != '\0')))))) {
    if (lVar7 < 0) {
      uVar4 = Curl_pp_sendf(param_1 + 0xe3,"SIZE %s",param_1[0xf3]);
      if ((int)uVar4 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 0x19;
        return 0;
      }
      return uVar4;
    }
    *(undefined1 *)(lVar1 + 0x444) = 1;
    if (((code *)param_1[0x9e] != (code *)0x0) &&
       (iVar3 = (*(code *)param_1[0x9e])(param_1[0x9f],lVar7,0), iVar3 != 0)) {
      if (iVar3 != 2) {
        FUN_1436b5820(lVar1,"Could not seek stream");
        return 0x1f;
      }
      lVar7 = 0;
      do {
        if (*(longlong *)(lVar1 + 0x89f0) - lVar7 < 0x4001) {
          uVar8 = UWaterWaves::GetWaterWaves();
        }
        else {
          uVar8 = 0x4000;
        }
        uVar5 = (**(code **)(lVar1 + 0x8a20))(lVar1 + 0x7e8,1,uVar8,*(undefined8 *)(lVar1 + 0x8a28))
        ;
        lVar7 = lVar7 + uVar5;
        if ((uVar5 == 0) || (uVar8 < uVar5)) {
          FUN_1436b5820(lVar1,"Failed to read data");
          return 0x1f;
        }
      } while (lVar7 < *(longlong *)(lVar1 + 0x89f0));
    }
    if ((0 < *(longlong *)(lVar1 + 0x8a08)) &&
       (lVar7 = *(longlong *)(lVar1 + 0x8a08) - *(longlong *)(lVar1 + 0x89f0),
       *(longlong *)(lVar1 + 0x8a08) = lVar7, lVar7 < 1)) {
      FUN_1436b58e0(lVar1,"File already completely uploaded\n");
      FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      *(undefined4 *)(lVar2 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return 0;
    }
  }
  pcVar6 = "STOR %s";
  if (*(char *)(lVar1 + 0x444) != '\0') {
    pcVar6 = "APPE %s";
  }
  uVar4 = Curl_pp_sendf(param_1 + 0xe3,pcVar6,param_1[0xf3]);
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 0x21;
    return 0;
  }
  return uVar4;
}



// FUNCTION 1436cc580 FUN_1436cc580 body=142 status=ok
// SIG undefined FUN_1436cc580(void)

undefined8 FUN_1436cc580(undefined8 *param_1)

{
  undefined8 uVar1;
  bool bVar2;
  
  if ((*(char *)((longlong)param_1 + 0x3cb) == '\0') &&
     (*(char *)((longlong)param_1 + 0x3c2) != '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x3cb) = 1;
  }
  bVar2 = *(char *)((longlong)param_1 + 0x3cb) == '\0';
  uVar1 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6e210 + (ulonglong)bVar2 * 5);
  if ((int)uVar1 == 0) {
    *(uint *)((longlong)param_1 + 0x7b4) = (uint)bVar2;
    *(undefined4 *)(param_1 + 0xf8) = 0x1e;
    FUN_1436b58e0(*param_1,"Connect data stream passively\n");
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436cc610 FUN_1436cc610 body=2069 status=ok
// SIG undefined FUN_1436cc610(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

int FUN_1436cc610(longlong *param_1,int param_2)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  short sVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  ulonglong uVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 auStack_a38 [32];
  undefined8 local_a18;
  uint local_a10;
  char local_a08;
  undefined4 local_a04;
  longlong local_a00;
  longlong local_9f8;
  undefined4 local_9f0;
  longlong *local_9e8 [2];
  short local_9d8;
  undefined2 local_9d6;
  undefined1 local_9d4 [4];
  undefined1 local_9d0 [120];
  char local_958 [256];
  char local_858 [1040];
  char local_448 [1024];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_a38;
  lVar15 = *param_1;
  local_a00 = -1;
  local_9f8 = lVar15;
  _guard_xfg_dispatch_icall_nop(local_958,0,0x100);
  pcVar13 = *(char **)(lVar15 + 0x4d8);
  local_9e8[0] = (longlong *)0x0;
  uVar5 = 0;
  local_9f0 = (uint)local_9f0._2_2_ << 0x10;
  local_a08 = '\x01';
  pcVar11 = (char *)0x0;
  if (*(longlong *)(lVar15 + 0x4d8) == 0) {
LAB_1436cc8a2:
    local_a04 = 0x80;
    iVar9 = Ordinal_6(param_1[0x3a],&local_9d8,&local_a04);
    if (iVar9 != 0) {
      uVar8 = Ordinal_111();
      pcVar13 = (char *)FUN_1436a7be0(param_1,uVar8);
      pcVar12 = "getsockname() failed: %s";
      goto LAB_1436ccde8;
    }
    if (local_9d8 == 0x17) {
      puVar17 = local_9d0;
      sVar6 = 0x17;
    }
    else {
      puVar17 = local_9d4;
      sVar6 = local_9d8;
    }
    FUN_1436c1610(sVar6,puVar17,local_858,0x401);
    pcVar13 = local_858;
    local_a08 = '\0';
  }
  else {
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (*(char *)(*(longlong *)(lVar15 + 0x4d8) + uVar10) != '\0');
    pcVar11 = (char *)0x0;
    if (uVar10 < 2) goto LAB_1436cc8a2;
    uVar10 = 0xffffffffffffffff;
    do {
      uVar10 = uVar10 + 1;
    } while (pcVar13[uVar10] != '\0');
    if (uVar10 < 0x41) {
      lVar15 = 0x41;
    }
    else {
      lVar15 = -1;
      do {
        lVar15 = lVar15 + 1;
      } while (pcVar13[lVar15] != '\0');
    }
    pcVar11 = (char *)(*(code *)PTR_calloc_1467dcc78)(lVar15 + 1,1);
    if (pcVar11 == (char *)0x0) {
      return 0x1b;
    }
    if (*pcVar13 == '[') {
      pcVar12 = strchr(pcVar13,0x5d);
      if (pcVar12 != (char *)0x0) {
        strncpy(pcVar11,pcVar13 + 1,(longlong)pcVar12 - (longlong)(pcVar13 + 1));
      }
LAB_1436cc7ae:
      uVar3 = 0;
      uVar4 = 0;
      if (pcVar12 != (char *)0x0) {
        pcVar13 = strchr(pcVar12,0x3a);
        uVar3 = 0;
        uVar4 = 0;
        if (pcVar13 != (char *)0x0) {
          uVar7 = strtoul(pcVar13 + 1,(char **)0x0,10);
          uVar3 = curlx_sltous(uVar7);
          pcVar13 = strchr(pcVar13,0x2d);
          uVar4 = uVar3;
          if (pcVar13 != (char *)0x0) {
            uVar7 = strtoul(pcVar13 + 1,(char **)0x0,10);
            uVar4 = curlx_sltous(uVar7);
          }
        }
      }
    }
    else {
      pcVar12 = pcVar13;
      if (*pcVar13 == ':') goto LAB_1436cc7ae;
      pcVar12 = strchr(pcVar13,0x3a);
      if (pcVar12 == (char *)0x0) {
        lVar15 = (longlong)pcVar11 - (longlong)pcVar13;
        do {
          cVar2 = *pcVar13;
          pcVar13[lVar15] = cVar2;
          pcVar13 = pcVar13 + 1;
        } while (cVar2 != '\0');
        goto LAB_1436cc7ae;
      }
      iVar9 = Curl_inet_pton(0x17,pcVar13,&local_9d8);
      if (iVar9 != 1) {
        strncpy(pcVar11,pcVar13,(longlong)pcVar12 - (longlong)pcVar13);
        goto LAB_1436cc7ae;
      }
      lVar15 = (longlong)pcVar11 - (longlong)pcVar13;
      do {
        cVar2 = *pcVar13;
        pcVar13[lVar15] = cVar2;
        pcVar13 = pcVar13 + 1;
      } while (cVar2 != '\0');
      uVar3 = 0;
      uVar4 = 0;
    }
    uVar5 = 0;
    if (uVar3 <= uVar4) {
      uVar5 = uVar4;
    }
    local_9f0 = 0;
    if (uVar3 <= uVar4) {
      local_9f0 = (uint)uVar3;
    }
    lVar15 = local_9f8;
    if (*pcVar11 == '\0') goto LAB_1436cc8a2;
    uVar8 = FUN_1436d7b50(*(undefined8 *)(param_1[0xb] + 0x20));
    local_a18 = local_858;
    local_a10 = 0x401;
    iVar9 = TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
            ::GetBoundProgramCounterForTimerManager
                      (*(undefined4 *)(param_1[0xb] + 4),uVar8,(int)param_1[0x14],pcVar11);
    pcVar13 = pcVar11;
    if (iVar9 != 0) {
      if (iVar9 == 1) {
        return 0x1e;
      }
      pcVar13 = (char *)0x0;
      if (iVar9 == 2) {
        pcVar13 = local_858;
      }
    }
    lVar15 = local_9f8;
    if (pcVar13 == (char *)0x0) goto LAB_1436cc8a2;
  }
  iVar9 = Curl_resolv(param_1,pcVar13,0,local_9e8);
  if (iVar9 == 1) {
    FUN_1436abd90(param_1,local_9e8);
  }
  if (local_9e8[0] != (longlong *)0x0) {
    lVar15 = *local_9e8[0];
    Curl_resolv_unlock(local_9f8);
    if (lVar15 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar11);
      uVar8 = 0;
      local_a00 = -1;
      do {
        iVar9 = FUN_1436b6ab0(param_1,lVar15,0,&local_a00);
        if (iVar9 == 0) {
          if (lVar15 != 0) {
            _guard_xfg_dispatch_icall_nop
                      (&local_9d8,*(void **)(lVar15 + 0x20),(longlong)*(int *)(lVar15 + 0x10));
            uVar1 = local_9f0;
            uVar18 = local_9f0 & 0xffff;
            local_a04 = *(undefined4 *)(lVar15 + 0x10);
            uVar3 = (ushort)local_9f0;
            goto joined_r0x0001436cc9fd;
          }
          break;
        }
        uVar8 = Ordinal_111();
        lVar15 = *(longlong *)(lVar15 + 0x28);
      } while (lVar15 != 0);
      uVar14 = FUN_1436a7be0(param_1,uVar8);
      FUN_1436b5820(local_9f8,"socket failure: %s",uVar14);
      return 0x1e;
    }
  }
  pcVar12 = "failed to resolve the address provided to PORT: %s";
  lVar15 = local_9f8;
LAB_1436ccde8:
  FUN_1436b5820(lVar15,pcVar12,pcVar13);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar11);
  return 0x1e;
joined_r0x0001436cc9fd:
  if (uVar5 < uVar3) {
LAB_1436ccaad:
    FUN_1436b5820(local_9f8,"bind() failed, we ran out of ports!");
    FUN_1436b61e0(param_1,local_a00);
    return 0x1e;
  }
  local_9d6 = Ordinal_9(uVar18);
  iVar9 = Ordinal_2(local_a00,&local_9d8,local_a04);
  if (iVar9 == 0) {
    if ((ushort)uVar18 <= uVar5) {
      local_a04 = 0x80;
      iVar9 = Ordinal_6(local_a00,&local_9d8,&local_a04);
      if (iVar9 != 0) {
        uVar8 = Ordinal_111();
        uVar14 = FUN_1436a7be0(param_1,uVar8);
        lVar16 = local_9f8;
LAB_1436ccae3:
        pcVar13 = "getsockname() failed: %s";
LAB_1436ccaea:
        FUN_1436b5820(lVar16,pcVar13,uVar14);
        FUN_1436b61e0(param_1,local_a00);
        return 0x1e;
      }
      iVar9 = Ordinal_13(local_a00,1);
      if (iVar9 != 0) {
        uVar8 = Ordinal_111();
        uVar14 = FUN_1436a7be0(param_1,uVar8);
        pcVar13 = "socket failure: %s";
        lVar16 = local_9f8;
        goto LAB_1436ccaea;
      }
      Curl_printable_address(lVar15,local_958,0x100);
      sVar6 = local_9d8;
      if ((*(char *)((longlong)param_1 + 0x3cc) == '\0') &&
         (*(char *)((longlong)param_1 + 0x3c2) != '\0')) {
        *(undefined1 *)((longlong)param_1 + 0x3cc) = 1;
      }
      goto joined_r0x0001436ccbe0;
    }
    goto LAB_1436ccaad;
  }
  iVar9 = Ordinal_111();
  if ((local_a08 == '\0') || (iVar9 != 0x2741)) {
    if ((iVar9 != 0x2740) && (iVar9 != 0xd)) {
      uVar14 = FUN_1436a7be0(param_1,iVar9);
      FUN_1436b5820(local_9f8,"bind(port=%hu) failed: %s",uVar18,uVar14);
      FUN_1436b61e0(param_1,local_a00);
      return 0x1e;
    }
    uVar18 = (uint)(ushort)((ushort)uVar18 + 1);
  }
  else {
    uVar14 = FUN_1436a7be0(param_1,0x2741);
    lVar16 = local_9f8;
    FUN_1436b58e0(local_9f8,"bind(port=%hu) on non-local address failed: %s\n",uVar18,uVar14);
    local_a04 = 0x80;
    iVar9 = Ordinal_6(param_1[0x3a],&local_9d8,&local_a04);
    if (iVar9 != 0) {
      uVar8 = Ordinal_111();
      uVar14 = FUN_1436a7be0(param_1,uVar8);
      goto LAB_1436ccae3;
    }
    uVar18 = uVar1 & 0xffff;
    local_a08 = '\0';
  }
  uVar3 = (ushort)uVar18;
  goto joined_r0x0001436cc9fd;
joined_r0x0001436ccbe0:
  if (param_2 == 2) goto LAB_1436ccc3e;
  if ((((*(char *)((longlong)param_1 + 0x3cc) != '\0') || (param_2 != 0)) &&
      ((param_2 != 1 || (sVar6 == 2)))) && ((sVar6 == 2 || (sVar6 == 0x17)))) {
    uVar5 = Ordinal_15(local_9d6);
    if (param_2 == 0) {
      local_a10 = (uint)uVar5;
      local_a18 = local_958;
      iVar9 = Curl_pp_sendf(param_1 + 0xe3,"%s |%d|%s|%hu|",&DAT_145b6e428,(local_9d8 != 2) + '\x01'
                           );
      if (iVar9 != 0) {
        uVar14 = FUN_1436a7d00(iVar9);
        FUN_1436b5820(local_9f8,"Failure sending EPRT command: %s",uVar14);
        FUN_1436b61e0(param_1,local_a00);
        *(undefined4 *)((longlong)param_1 + 0x7b4) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 0;
        return iVar9;
      }
      goto LAB_1436ccc3e;
    }
    sVar6 = local_9d8;
    if (param_2 == 1) {
      pcVar11 = local_448;
      pcVar13 = local_958;
      goto LAB_1436ccca1;
    }
  }
  param_2 = param_2 + 1;
  goto joined_r0x0001436ccbe0;
  while( true ) {
    if (cVar2 == '.') {
      cVar2 = ',';
    }
    *pcVar11 = cVar2;
    pcVar11 = pcVar11 + 1;
    pcVar13 = pcVar13 + 1;
    if (pcVar13 == (char *)0x0) break;
LAB_1436ccca1:
    cVar2 = *pcVar13;
    if (cVar2 == '\0') break;
  }
  local_a18 = (char *)(CONCAT44(local_a18._4_4_,(uint)uVar5) & 0xffffffff000000ff);
  *pcVar11 = '\0';
  curl_msnprintf(pcVar11,0x14,",%d,%d",uVar5 >> 8);
  iVar9 = Curl_pp_sendf(param_1 + 0xe3,"%s %s",&DAT_145b6e42d,local_448);
  if (iVar9 != 0) {
    uVar14 = FUN_1436a7d00(iVar9);
    FUN_1436b5820(local_9f8,"Failure sending PORT command: %s",uVar14);
    FUN_1436b61e0(param_1,local_a00);
    *(undefined4 *)(param_1 + 0xf8) = 0;
    return iVar9;
  }
LAB_1436ccc3e:
  *(int *)((longlong)param_1 + 0x7b4) = param_2;
  if (param_1[0x3b] != -1) {
    FUN_1436b61e0(param_1);
    param_1[0x3b] = -1;
  }
  param_1[0x3b] = local_a00;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c5) = 1;
  *(undefined4 *)(param_1 + 0xf8) = 0x1c;
  return 0;
}



// FUNCTION 1436cce30 FUN_1436cce30 body=88 status=ok
// SIG undefined FUN_1436cce30(void)

undefined8 FUN_1436cce30(longlong *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  
  puVar1 = *(undefined1 **)(*(longlong *)(*param_1 + 0x198) + 8);
  puVar3 = &DAT_145af3922;
  if (puVar1 != (undefined1 *)0x0) {
    puVar3 = puVar1;
  }
  uVar2 = Curl_pp_sendf(param_1 + 0xe3,"USER %s",puVar3);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_1 + 0xf8) = 3;
    *(undefined1 *)(*param_1 + 0x89c0) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436cce90 FUN_1436cce90 body=305 status=ok
// SIG undefined FUN_1436cce90(void)

undefined8 FUN_1436cce90(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  
  lVar1 = *param_1;
  if ((param_2 == 0x14b) && ((int)param_1[0xf8] == 3)) {
    puVar2 = *(undefined1 **)(*(longlong *)(lVar1 + 0x198) + 0x10);
    puVar4 = &DAT_145af3922;
    if (puVar2 != (undefined1 *)0x0) {
      puVar4 = puVar2;
    }
    uVar3 = Curl_pp_sendf(param_1 + 0xe3,"PASS %s",puVar4);
    if ((int)uVar3 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 4;
      return uVar3;
    }
  }
  else {
    if (param_2 - 200U < 100) {
      uVar3 = FUN_1436cb070(param_1);
      return uVar3;
    }
    if (param_2 == 0x14c) {
      if (*(longlong *)(lVar1 + 0x4c8) == 0) {
        FUN_1436b5820(lVar1,"ACCT requested but none available");
        return 0x43;
      }
      uVar3 = Curl_pp_sendf(param_1 + 0xe3,"ACCT %s");
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 5;
        return uVar3;
      }
    }
    else if ((*(longlong *)(lVar1 + 0x4d0) == 0) || (*(char *)(lVar1 + 0x89c0) != '\0')) {
      FUN_1436b5820(lVar1,"Access denied: %03d",param_2);
      uVar3 = 0x43;
    }
    else {
      uVar3 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c);
      if ((int)uVar3 == 0) {
        *(undefined1 *)(*param_1 + 0x89c0) = 1;
        *(undefined4 *)(param_1 + 0xf8) = 3;
        return 0;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1436ccfd0 FUN_1436ccfd0 body=2130 status=ok
// SIG undefined FUN_1436ccfd0(void)

ulonglong FUN_1436ccfd0(longlong *param_1)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  byte *pbVar10;
  char *pcVar11;
  ulonglong uVar12;
  byte *pbVar13;
  char *pcVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  char *pcVar18;
  int local_res8 [2];
  longlong local_res10;
  
  lVar3 = *param_1;
  plVar1 = param_1 + 0xe3;
  local_res10 = 0;
  if (param_1[0xe9] != 0) {
    uVar9 = FUN_1436db570(plVar1);
    return uVar9;
  }
  plVar4 = (longlong *)param_1[0xed];
  lVar5 = *plVar4;
  uVar7 = FUN_1436db680(param_1[0x3a],plVar1,local_res8,&local_res10);
  *(int *)(lVar5 + 0x8a78) = local_res8[0];
  if (local_res8[0] == 0x1a5) {
    FUN_1436b58e0(lVar5,"We got a 421 - timeout!\n");
    *(undefined4 *)(plVar4 + 0xf8) = 0;
    return 0x1c;
  }
  if (uVar7 != 0) {
    return (ulonglong)uVar7;
  }
  if (local_res8[0] == 0) {
    return 0;
  }
  switch((int)param_1[0xf8]) {
  case 1:
    if (local_res8[0] == 0xe6) {
      uVar9 = FUN_1436cce90(param_1,0xe6);
      return uVar9;
    }
    if (local_res8[0] != 0xdc) {
      FUN_1436b5820(lVar3,"Got a %03d ftp-server response when 220 was expected",local_res8[0]);
      return 8;
    }
    if ((*(int *)(lVar3 + 0x460) != 0) && ((char)param_1[0x4b] == '\0')) {
      *(undefined4 *)((longlong)param_1 + 0x7bc) = 0;
      iVar8 = *(int *)(lVar3 + 0x464);
      if (-1 < iVar8) {
        if (iVar8 < 2) {
          *(undefined4 *)(param_1 + 0xf7) = 1;
          *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
        }
        else {
          if (iVar8 != 2) goto LAB_1436cd183;
          *(undefined4 *)(param_1 + 0xf7) = 0xffffffff;
          *(undefined4 *)((longlong)param_1 + 0x7b4) = 1;
        }
        uVar9 = Curl_pp_sendf(plVar1,"AUTH %s",
                              &DAT_145b6e420 + (longlong)*(int *)((longlong)param_1 + 0x7b4) * 4);
        if ((int)uVar9 == 0) {
          *(undefined4 *)(param_1 + 0xf8) = 2;
          return uVar9 & 0xffffffff;
        }
        return uVar9;
      }
LAB_1436cd183:
      FUN_1436b5820(lVar3,"unsupported parameter to CURLOPT_FTPSSLAUTH: %d");
      return 0x30;
    }
    uVar12 = FUN_1436cce30(param_1);
    goto LAB_1436cd74f;
  case 2:
    if ((local_res8[0] == 0xea) || (local_res8[0] == 0x14e)) {
      uVar7 = FUN_1436ad3f0(param_1,0);
      if (uVar7 != 0) {
        return (ulonglong)uVar7;
      }
      *(undefined1 *)(param_1 + 0x5a) = 0;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x7bc) < 1) {
        *(int *)((longlong)param_1 + 0x7bc) = *(int *)((longlong)param_1 + 0x7bc) + 1;
        *(int *)((longlong)param_1 + 0x7b4) =
             *(int *)((longlong)param_1 + 0x7b4) + (int)param_1[0xf7];
        uVar7 = Curl_pp_sendf(plVar1,"AUTH %s",
                              &DAT_145b6e420 + (longlong)*(int *)((longlong)param_1 + 0x7b4) * 4);
        return (ulonglong)uVar7;
      }
      if (1 < *(int *)(lVar3 + 0x460)) {
        return 0x40;
      }
    }
    uVar7 = FUN_1436cce30(param_1);
    uVar9 = (ulonglong)uVar7;
    break;
  case 3:
  case 4:
    uVar7 = FUN_1436cce90(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 5:
    if (local_res8[0] == 0xe6) {
      uVar7 = FUN_1436cb070(param_1);
      uVar9 = (ulonglong)uVar7;
    }
    else {
      FUN_1436b5820(*param_1,"ACCT rejected by server: %03d",local_res8[0]);
      uVar9 = 0xb;
    }
    break;
  case 6:
    uVar15 = 0x50;
    if (*(int *)(lVar3 + 0x460) == 2) {
      uVar15 = 0x43;
    }
    uVar12 = Curl_pp_sendf(plVar1,"PROT %c",uVar15);
    uVar9 = uVar12 & 0xffffffff;
    if ((int)uVar12 != 0) {
      return uVar12;
    }
    *(undefined4 *)(param_1 + 0xf8) = 7;
    break;
  case 7:
    if (local_res8[0] / 100 == 2) {
      *(bool *)(param_1 + 0x5a) = *(int *)(lVar3 + 0x460) != 2;
    }
    else if (2 < *(int *)(lVar3 + 0x460)) {
      return 0x40;
    }
    if (*(int *)(lVar3 + 0x468) != 0) {
      uVar9 = Curl_pp_sendf(plVar1,&DAT_145afa01c,&DAT_145b6ee28);
      if ((int)uVar9 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 8;
        return uVar9 & 0xffffffff;
      }
      return uVar9;
    }
    goto LAB_1436cd361;
  case 8:
    if (local_res8[0] < 500) {
      uVar7 = FUN_1436ada10(param_1,0);
      if (uVar7 != 0) {
        FUN_1436b5820(*param_1,"Failed to clear the command channel (CCC)");
        return (ulonglong)uVar7;
      }
    }
LAB_1436cd361:
    uVar12 = FUN_1436cbaf0(param_1);
    goto LAB_1436cd74f;
  case 9:
    if (local_res8[0] == 0x101) {
      pbVar16 = (byte *)(lVar3 + 0x7ec);
      pbVar10 = (byte *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_res10 + 1);
      if (pbVar10 == (byte *)0x0) {
        return 0x1b;
      }
      while ((pbVar16 < (byte *)(lVar3 + 0x47e9U) &&
             ((0x22 < *pbVar16 || ((0x400000401U >> ((longlong)(char)*pbVar16 & 0x3fU) & 1) == 0))))
            ) {
        pbVar16 = pbVar16 + 1;
      }
      if (*pbVar16 == 0x22) {
        bVar2 = pbVar16[1];
        pbVar13 = pbVar10;
        while (bVar2 != 0) {
          pbVar17 = pbVar16 + 1;
          if (bVar2 == 0x22) {
            pbVar17 = pbVar16 + 2;
            if (*pbVar17 != 0x22) {
              *pbVar13 = 0;
              break;
            }
            *pbVar13 = 0x22;
          }
          else {
            *pbVar13 = bVar2;
          }
          pbVar13 = pbVar13 + 1;
          pbVar16 = pbVar17;
          bVar2 = pbVar17[1];
        }
        if ((param_1[0xfa] == 0) && (*pbVar10 != 0x2f)) {
          uVar7 = Curl_pp_sendf(plVar1,&DAT_145afa01c,&DAT_145b6ee5c);
          if (uVar7 != 0) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar10);
            return (ulonglong)uVar7;
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf0]);
          param_1[0xf0] = (longlong)pbVar10;
          FUN_1436b58e0(lVar3,"Entry path is \'%s\'\n",pbVar10);
          *(longlong *)(lVar3 + 0x89b8) = param_1[0xf0];
          *(undefined4 *)(param_1 + 0xf8) = 10;
          return 0;
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf0]);
        param_1[0xf0] = (longlong)pbVar10;
        FUN_1436b58e0(lVar3,"Entry path is \'%s\'\n",pbVar10);
        *(longlong *)(lVar3 + 0x89b8) = param_1[0xf0];
      }
      else {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
        FUN_1436b58e0(lVar3,"Failed to figure out path\n");
      }
    }
  default:
switchD_1436cd0a9_default:
    *(undefined4 *)(param_1 + 0xf8) = 0;
    uVar9 = 0;
    break;
  case 10:
    if (local_res8[0] == 0xd7) {
      pcVar18 = (char *)(lVar3 + 0x7ec);
      pcVar11 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_res10 + 1);
      if (pcVar11 == (char *)0x0) {
        return 0x1b;
      }
      cVar6 = *pcVar18;
      while (cVar6 == ' ') {
        pcVar18 = pcVar18 + 1;
        cVar6 = *pcVar18;
      }
      cVar6 = *pcVar18;
      pcVar14 = pcVar11;
      if (cVar6 != '\0') {
        do {
          if (cVar6 == ' ') break;
          *pcVar14 = cVar6;
          pcVar14 = pcVar14 + 1;
          cVar6 = pcVar14[(longlong)pcVar18 - (longlong)pcVar11];
        } while (cVar6 != '\0');
      }
      *pcVar14 = '\0';
      iVar8 = curl_strequal(pcVar11,"OS/400");
      if (iVar8 != 0) {
        uVar7 = Curl_pp_sendf(plVar1,&DAT_145afa01c,"SITE NAMEFMT 1");
        if (uVar7 != 0) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar11);
          return (ulonglong)uVar7;
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xfa]);
        param_1[0xfa] = (longlong)pcVar11;
        *(undefined4 *)(param_1 + 0xf8) = 0xb;
        return 0;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xfa]);
      param_1[0xfa] = (longlong)pcVar11;
    }
    goto switchD_1436cd0a9_default;
  case 0xb:
    if (local_res8[0] == 0xfa) {
      FUN_1436cbaf0(param_1);
      return 0;
    }
    goto switchD_1436cd0a9_default;
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
    if ((399 < local_res8[0]) && ((int)param_1[0xf7] == 0)) {
      FUN_1436b5820(*param_1,"QUOT command failed with %03d",local_res8[0]);
      return 0x15;
    }
    uVar12 = FUN_1436cbb30(param_1,0);
    goto LAB_1436cd74f;
  case 0x10:
    if (local_res8[0] / 100 != 2) {
      if (((*(int *)(*param_1 + 0x42c) != 0) && (*(int *)((longlong)param_1 + 0x7b4) != 0)) &&
         ((int)param_1[0xf7] == 0)) {
        *(undefined4 *)(param_1 + 0xf7) = 1;
        uVar9 = Curl_pp_sendf(plVar1,"MKD %s",
                              *(undefined8 *)
                               (param_1[0xf1] +
                               (longlong)(*(int *)((longlong)param_1 + 0x7b4) + -1) * 8));
        if ((int)uVar9 == 0) {
          *(undefined4 *)(param_1 + 0xf8) = 0x11;
          return uVar9 & 0xffffffff;
        }
        return uVar9;
      }
      FUN_1436b5820(lVar3,"Server denied you to change to the given directory");
      *(undefined1 *)((longlong)param_1 + 0x7a3) = 1;
      return 9;
    }
    *(int *)((longlong)param_1 + 0x7b4) = *(int *)((longlong)param_1 + 0x7b4) + 1;
    iVar8 = *(int *)((longlong)param_1 + 0x7b4);
    *(undefined4 *)(param_1 + 0xf7) = 0;
    if (iVar8 <= (int)param_1[0xf2]) goto LAB_1436cd735;
    uVar12 = FUN_1436cb0e0(param_1);
    iVar8 = (int)uVar12;
    goto joined_r0x0001436cd6d2;
  case 0x11:
    if ((local_res8[0] / 100 != 2) &&
       (iVar8 = *(int *)((longlong)param_1 + 0x7bc),
       *(int *)((longlong)param_1 + 0x7bc) = iVar8 + -1, iVar8 == 0)) {
      FUN_1436b5820(lVar3,"Failed to MKD dir: %03d",local_res8[0]);
      return 9;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0x10;
    iVar8 = *(int *)((longlong)param_1 + 0x7b4);
LAB_1436cd735:
    uVar12 = Curl_pp_sendf(plVar1,"CWD %s",
                           *(undefined8 *)(param_1[0xf1] + (longlong)(iVar8 + -1) * 8));
LAB_1436cd74f:
    iVar8 = (int)uVar12;
joined_r0x0001436cd6d2:
    uVar9 = uVar12 & 0xffffffff;
    if (iVar8 != 0) {
      return uVar12;
    }
    break;
  case 0x12:
    uVar7 = FUN_1436cb1a0(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
    uVar7 = ftp_state_type_resp(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x17:
  case 0x18:
  case 0x19:
    uVar7 = FUN_1436cc0b0(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x1a:
  case 0x1b:
    uVar7 = FUN_1436cbd80(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x1c:
    uVar7 = FUN_1436cb8f0(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x1d:
    if (local_res8[0] != 200) {
      FUN_1436b5820(lVar3,"PRET command not accepted: %03d",local_res8[0]);
      return 0x54;
    }
    uVar7 = FUN_1436cc580(param_1);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x1e:
    uVar7 = FUN_1436cb460(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x1f:
  case 0x20:
    uVar7 = FUN_1436cad00(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
    break;
  case 0x21:
    uVar7 = FUN_1436cc1a0(param_1,local_res8[0]);
    uVar9 = (ulonglong)uVar7;
  }
  return uVar9;
}



// FUNCTION 1436cd8b0 FUN_1436cd8b0 body=113 status=ok
// SIG undefined FUN_1436cd8b0(void)

int FUN_1436cd8b0(longlong param_1)

{
  int iVar1;
  int iVar2;
  undefined8 local_res8;
  
  iVar2 = 60000;
  if (0 < *(int *)(param_1 + 0x2d0)) {
    iVar2 = *(int *)(param_1 + 0x2d0);
  }
  local_res8 = curlx_tvnow();
  iVar1 = FUN_1436b6c20(param_1,&local_res8,0);
  if ((iVar1 == 0) || (iVar2 <= iVar1)) {
    iVar1 = curlx_tvdiff(local_res8,*(undefined8 *)(param_1 + 0x748));
    iVar1 = iVar2 - iVar1;
    if (iVar1 == 0) {
      return -1;
    }
  }
  return iVar1;
}



// FUNCTION 1436cd930 FUN_1436cd930 body=549 status=ok
// SIG undefined FUN_1436cd930(void)

ulonglong FUN_1436cd930(longlong *param_1)

{
  longlong lVar1;
  char *_Str;
  uint uVar2;
  char *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar1 = *param_1;
  _Str = *(char **)(lVar1 + 0x89d8);
  pcVar3 = strrchr(_Str,0x2f);
  if (pcVar3 == (char *)0x0) {
    if (*_Str == '\0') goto LAB_1436cd96e;
    lVar5 = (*(code *)PTR__strdup_1467dcc70)(_Str);
    *(longlong *)(lVar1 + 0x8a50) = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
    *_Str = '\0';
  }
  else {
    if (pcVar3[1] == '\0') {
LAB_1436cd96e:
      *(undefined4 *)(lVar1 + 0x8a40) = 3;
      uVar4 = FUN_1436ca1d0(param_1);
      return uVar4;
    }
    lVar5 = (*(code *)PTR__strdup_1467dcc70)(pcVar3 + 1);
    *(longlong *)(lVar1 + 0x8a50) = lVar5;
    if (lVar5 == 0) {
      return 0x1b;
    }
    pcVar3[1] = '\0';
  }
  plVar6 = (longlong *)(*(code *)PTR_calloc_1467dcc78)(1);
  if (plVar6 == (longlong *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x8a50));
    *(undefined8 *)(lVar1 + 0x8a50) = 0;
    return 0x1b;
  }
  lVar5 = Curl_ftp_parselist_data_alloc();
  *plVar6 = lVar5;
  if (lVar5 != 0) {
    *(longlong **)(lVar1 + 0x8a60) = plVar6;
    *(code **)(lVar1 + 0x8a68) = wc_data_dtor;
    if (*(int *)(*param_1 + 0x428) == 2) {
      *(undefined4 *)(*param_1 + 0x428) = 1;
    }
    uVar2 = FUN_1436ca1d0(param_1);
    if (uVar2 == 0) {
      lVar5 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(*param_1 + 0x89d8));
      *(longlong *)(lVar1 + 0x8a48) = lVar5;
      if (lVar5 != 0) {
        plVar6[1] = *(longlong *)(*param_1 + 0x220);
        *(code **)(*param_1 + 0x220) = FUN_1436dc850;
        plVar6[2] = *(longlong *)(*param_1 + 0x1c0);
        *(longlong **)(*param_1 + 0x1c0) = param_1;
        FUN_1436b58e0(*param_1,"Wildcard - Parsing started\n");
        return 0;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x8a50));
      *(undefined8 *)(lVar1 + 0x8a50) = 0;
      (**(code **)(lVar1 + 0x8a68))(*(undefined8 *)(lVar1 + 0x8a60));
      *(undefined8 *)(lVar1 + 0x8a68) = 0;
      *(undefined8 *)(lVar1 + 0x8a60) = 0;
      return 0x1b;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x8a50));
    *(undefined8 *)(lVar1 + 0x8a50) = 0;
    (**(code **)(lVar1 + 0x8a68))(*(undefined8 *)(lVar1 + 0x8a60));
    *(undefined8 *)(lVar1 + 0x8a68) = 0;
    *(undefined8 *)(lVar1 + 0x8a60) = 0;
    return (ulonglong)uVar2;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x8a50));
  *(undefined8 *)(lVar1 + 0x8a50) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar6);
  return 0x1b;
}



// FUNCTION 1436cdb60 isBadFtpString body=56 status=ok
// SIG undefined isBadFtpString(void)

undefined1 isBadFtpString(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strchr(param_1,0xd);
  if (pcVar1 == (char *)0x0) {
    pcVar1 = strchr(param_1,10);
    if (pcVar1 == (char *)0x0) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1436cdba0 FUN_1436cdba0 body=346 status=ok
// SIG undefined FUN_1436cdba0(void)

ulonglong FUN_1436cdba0(longlong *param_1,undefined8 param_2,undefined2 param_3,undefined1 *param_4)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 local_a8 [144];
  
  uVar3 = 0;
  lVar1 = *param_1;
  *param_4 = 0;
  switch((int)param_1[0x36]) {
  case 0:
  case 1:
    break;
  default:
    FUN_1436b5820(lVar1);
    uVar3 = 7;
    break;
  case 4:
    uVar4 = 0;
    goto LAB_1436cdc1e;
  case 5:
  case 7:
    uVar2 = FUN_1436d63a0(param_1[0x34],param_1[0x35],param_2,param_3,1,param_1);
    uVar3 = (ulonglong)uVar2;
    *param_4 = 1;
    break;
  case 6:
    uVar4 = 1;
LAB_1436cdc1e:
    uVar2 = FUN_1436d5ee0(param_1[0x34],param_2,param_3,1,param_1,uVar4);
    uVar3 = (ulonglong)uVar2;
    *param_4 = 1;
  }
  if (((char)param_1[0x79] != '\0') && (*(char *)((longlong)param_1 + 0x3be) != '\0')) {
    uVar4 = *(undefined8 *)(lVar1 + 0x198);
    _guard_xfg_dispatch_icall_nop(local_a8,0,0x88);
    *(undefined1 **)(lVar1 + 0x198) = local_a8;
    uVar3 = FUN_1436d6c90(param_1,1,param_2,param_3,1);
    *(undefined8 *)(lVar1 + 0x198) = uVar4;
    if ((int)uVar3 == 0) {
      if (*(int *)((longlong)param_1 + 0x814) == 2) {
        *param_4 = 1;
        uVar3 = uVar3 & 0xffffffff;
      }
      else {
        *(undefined4 *)(param_1 + 0xf8) = 0;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1436cdd20 wc_data_dtor body=34 status=ok
// SIG undefined wc_data_dtor(void)

void wc_data_dtor(longlong param_1)

{
  if (param_1 != 0) {
    Curl_ftp_parselist_data_free();
  }
                    /* WARNING: Could not recover jumptable at 0x0001436cdd3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return;
}



// FUNCTION 1436cdd50 FUN_1436cdd50 body=685 status=ok
// SIG undefined FUN_1436cdd50(void)

ulonglong FUN_1436cdd50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uVar7 = 0;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          lVar1 = *param_1;
          iVar3 = *(int *)(lVar1 + 0x8a40);
          if (iVar3 == 0) {
            uVar4 = FUN_1436cd930(param_1);
            if (*(int *)(lVar1 + 0x8a40) == 3) {
              return (ulonglong)uVar4;
            }
            uVar5 = 1;
            if (uVar4 != 0) {
              uVar5 = 5;
            }
            *(undefined4 *)(lVar1 + 0x8a40) = uVar5;
            return (ulonglong)uVar4;
          }
          if (iVar3 != 1) break;
          puVar2 = *(undefined8 **)(lVar1 + 0x8a60);
          *(undefined8 *)(lVar1 + 0x220) = puVar2[1];
          *(undefined8 *)(*param_1 + 0x1c0) = puVar2[2];
          puVar2[1] = 0;
          puVar2[2] = 0;
          *(undefined4 *)(lVar1 + 0x8a40) = 2;
          iVar3 = IStreamingManager::GetNumWantingResourcesID(*puVar2);
          if (iVar3 == 0) {
            if (*(longlong *)(*(longlong *)(lVar1 + 0x8a58) + 0x18) == 0) {
              *(undefined4 *)(lVar1 + 0x8a40) = 3;
              return 0x4e;
            }
          }
          else {
            *(undefined4 *)(lVar1 + 0x8a40) = 3;
          }
        }
        if (iVar3 == 2) break;
        if (iVar3 == 3) {
          if (*(undefined8 **)(lVar1 + 0x8a60) != (undefined8 *)0x0) {
            uVar4 = IStreamingManager::GetNumWantingResourcesID(**(undefined8 **)(lVar1 + 0x8a60));
            uVar7 = (ulonglong)uVar4;
          }
          *(uint *)(lVar1 + 0x8a40) = 6 - (uint)((int)uVar7 != 0);
          return uVar7;
        }
        if (iVar3 != 4) {
          return 0;
        }
        if (*(code **)(lVar1 + 0x620) != (code *)0x0) {
          (**(code **)(lVar1 + 0x620))(*(undefined8 *)(lVar1 + 0x8a70));
        }
        Curl_llist_remove(*(undefined8 **)(lVar1 + 0x8a58),**(undefined8 **)(lVar1 + 0x8a58),0);
        *(uint *)(lVar1 + 0x8a40) =
             3 - (uint)(*(longlong *)(*(longlong *)(lVar1 + 0x8a58) + 0x18) != 0);
      }
      puVar2 = *(undefined8 **)**(undefined8 **)(lVar1 + 0x8a58);
      lVar6 = curl_maprintf(&DAT_145b6b588,*(undefined8 *)(lVar1 + 0x8a48),*puVar2);
      if (lVar6 == 0) {
        return 0x1b;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(*param_1 + 0x89d0));
      *(undefined8 *)(*param_1 + 0x89d0) = 0;
      *(longlong *)(*param_1 + 0x89d0) = lVar6;
      *(longlong *)(*param_1 + 0x89d8) = lVar6;
      FUN_1436b58e0(*param_1,"Wildcard - START of \"%s\"\n",*puVar2);
      if (*(code **)(*param_1 + 0x618) != (code *)0x0) break;
LAB_1436cdeaa:
      if (*(int *)(puVar2 + 1) == 0) {
        if ((*(byte *)(puVar2 + 0xc) & 0x40) != 0) {
          param_1[0xfb] = puVar2[5];
        }
        uVar7 = FUN_1436ca1d0(param_1);
        if ((int)uVar7 != 0) {
          return uVar7;
        }
        Curl_llist_remove(*(undefined8 **)(lVar1 + 0x8a58),**(undefined8 **)(lVar1 + 0x8a58),0);
        if (*(longlong *)(*(longlong *)(lVar1 + 0x8a58) + 0x18) != 0) {
          return uVar7 & 0xffffffff;
        }
        *(undefined4 *)(lVar1 + 0x8a40) = 3;
        return 0;
      }
      *(undefined4 *)(lVar1 + 0x8a40) = 4;
    }
    iVar3 = (**(code **)(*param_1 + 0x618))
                      (puVar2,*(undefined8 *)(lVar1 + 0x8a70),
                       *(undefined4 *)(*(longlong *)(lVar1 + 0x8a58) + 0x18));
    if (iVar3 == 1) {
      return 0x58;
    }
    if (iVar3 != 2) goto LAB_1436cdeaa;
    FUN_1436b58e0(*param_1,"Wildcard - \"%s\" skipped by user\n",*puVar2);
    *(undefined4 *)(lVar1 + 0x8a40) = 4;
  } while( true );
}



// FUNCTION 1436ce000 FUN_1436ce000 body=1386 status=ok
// SIG undefined FUN_1436ce000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436ce000(longlong *param_1,undefined1 *param_2)

{
  LPVOID lpBuffer;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  DWORD DVar4;
  DWORD DVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  BOOL BVar9;
  ulonglong uVar10;
  HMODULE hModule;
  FARPROC pFVar11;
  FARPROC pFVar12;
  HANDLE pvVar13;
  INT_PTR IVar14;
  HANDLE hFile;
  ulonglong uVar15;
  undefined8 uVar16;
  char *pcVar17;
  undefined1 auStackY_f8 [32];
  DWORD local_b8;
  DWORD local_b4;
  longlong local_b0;
  int *local_a8;
  HANDLE local_a0;
  FARPROC local_98;
  FARPROC local_90;
  longlong local_88;
  HANDLE local_80;
  HANDLE local_78;
  uint local_70;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStackY_f8;
  lVar1 = *param_1;
  bVar3 = true;
  bVar2 = true;
  local_b0 = param_1[0x3a];
  *param_2 = 1;
  lpBuffer = (LPVOID)(lVar1 + 0x7e8);
  uVar10 = FUN_1436ce940();
  if ((int)uVar10 == 0) {
    local_a8 = *(int **)(lVar1 + 0x198);
    uVar10 = FUN_1436ce5d0(param_1);
    if ((int)uVar10 == 0) {
      uVar10 = check_wsock2(lVar1);
      uVar15 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
        hModule = (HMODULE)Curl_load_library("WS2_32.DLL");
        if (hModule == (HMODULE)0x0) {
          DVar4 = GetLastError();
          FUN_1436b5820(lVar1,"failed to load WS2_32.DLL (%d)",DVar4);
          uVar10 = 2;
        }
        else {
          pFVar11 = GetProcAddress(hModule,"WSACreateEvent");
          if (pFVar11 == (FARPROC)0x0) {
            DVar4 = GetLastError();
            pcVar17 = "failed to find WSACreateEvent function (%d)";
          }
          else {
            local_98 = GetProcAddress(hModule,"WSACloseEvent");
            if (local_98 != (FARPROC)0x0) {
              pFVar12 = GetProcAddress(hModule,"WSAEventSelect");
              if (pFVar12 == (FARPROC)0x0) {
                DVar4 = GetLastError();
                pcVar17 = "failed to find WSAEventSelect function (%d)";
              }
              else {
                local_90 = GetProcAddress(hModule,"WSAEnumNetworkEvents");
                if (local_90 == (FARPROC)0x0) {
                  DVar4 = GetLastError();
                  pcVar17 = "failed to find WSAEnumNetworkEvents function (%d)";
                }
                else {
                  pvVar13 = (HANDLE)(*pFVar11)();
                  local_a0 = pvVar13;
                  if (pvVar13 != (HANDLE)0x0) {
                    IVar14 = (*pFVar12)(local_b0,pvVar13);
                    if (IVar14 == -1) {
                      (*local_98)(pvVar13);
                      FreeLibrary(hModule);
                      return 0;
                    }
                    hFile = GetStdHandle(0xfffffff6);
                    local_80 = pvVar13;
                    local_78 = hFile;
                    DVar4 = GetFileType(hFile);
                    if ((DVar4 == 3) || (*(int *)(lVar1 + 0x240) != 0)) {
                      DVar4 = 1;
                      local_b4 = 100;
                    }
                    else {
                      DVar4 = 2;
                      local_b4 = 1000;
                    }
                    do {
                      DVar5 = WaitForMultipleObjects(DVar4,&local_80,0,local_b4);
                      if (DVar5 == 0) {
                        local_70 = 0;
                        IVar14 = (*local_90)(local_b0,local_a0);
                        if (IVar14 == -1) {
                          iVar7 = Ordinal_111();
                          if (iVar7 != 0x2734) {
                            FUN_1436b58e0(lVar1,"WSAEnumNetworkEvents failed (%d)");
                            bVar3 = false;
                            uVar15 = 0x1a;
                            bVar2 = false;
                          }
                        }
                        else if ((local_70 & 1) == 0) {
LAB_1436ce45b:
                          bVar2 = bVar3;
                          if ((local_70 & 0x20) != 0) {
                            bVar3 = false;
                            bVar2 = false;
                          }
                        }
                        else {
                          uVar6 = FUN_1436b5980(param_1,local_b0,lpBuffer,0x3fff);
                          uVar15 = (ulonglong)uVar6;
                          if (uVar6 != 0x51) {
                            if (uVar6 == 0) {
                              if (local_88 < 1) {
                                bVar3 = false;
                                bVar2 = false;
                              }
                              else {
                                uVar6 = FUN_1436cf9d0(param_1,lpBuffer);
                                uVar15 = (ulonglong)uVar6;
                                if (uVar6 == 0) {
                                  if ((*local_a8 != 0) && (local_a8[1] == 0)) {
                                    FUN_1436ce9d0(param_1);
                                    local_a8[1] = 1;
                                  }
                                  goto LAB_1436ce45b;
                                }
                                bVar3 = false;
                                bVar2 = false;
                              }
                            }
                            else {
                              bVar3 = false;
                              bVar2 = false;
                            }
                          }
                        }
                      }
                      else if (DVar5 == 1) {
                        BVar9 = ReadFile(hFile,lpBuffer,0x4001,&local_b8,(LPOVERLAPPED)0x0);
                        if (BVar9 == 0) {
LAB_1436ce354:
                          bVar3 = false;
                          uVar15 = 0x1a;
                          bVar2 = false;
                        }
                        else {
                          uVar6 = FUN_1436cf390(param_1,lpBuffer);
                          uVar15 = (ulonglong)uVar6;
                          if (uVar6 != 0) {
                            bVar3 = false;
                            bVar2 = false;
                          }
                        }
                      }
                      else if (DVar5 == 0x102) {
                        do {
                          if (*(int *)(lVar1 + 0x240) == 0) {
                            BVar9 = PeekNamedPipe(hFile,(LPVOID)0x0,0,(LPDWORD)0x0,&local_b8,
                                                  (LPDWORD)0x0);
                            if (BVar9 == 0) goto LAB_1436ce354;
                            if (local_b8 == 0) goto LAB_1436ce470;
                            BVar9 = ReadFile(hFile,lpBuffer,0x4001,&local_b8,(LPOVERLAPPED)0x0);
                            DVar5 = local_b8;
                            if (BVar9 == 0) goto LAB_1436ce354;
                          }
                          else {
                            uVar15 = (**(code **)(lVar1 + 0x8a20))(lpBuffer,1);
                            DVar5 = (DWORD)uVar15;
                            if (DVar5 == 0x10000000) goto LAB_1436ce354;
                            if ((DVar5 == 0x10000001) || (DVar5 == 0)) goto LAB_1436ce470;
                          }
                          local_b8 = DVar5;
                          uVar10 = FUN_1436cf390(param_1);
                          uVar15 = uVar10 & 0xffffffff;
                        } while ((int)uVar10 == 0);
                        bVar3 = false;
                        bVar2 = false;
                      }
LAB_1436ce470:
                      if (*(int *)(lVar1 + 0x2c8) != 0) {
                        uVar16 = curlx_tvnow();
                        iVar7 = curlx_tvdiff(uVar16,*(undefined8 *)((longlong)param_1 + 0x1c4));
                        if (*(int *)(lVar1 + 0x2c8) <= iVar7) {
                          FUN_1436b5820(lVar1,"Time-out");
                          uVar15 = 0x1c;
                          break;
                        }
                      }
                    } while (bVar2);
                    IVar14 = (*local_98)(local_a0);
                    if (IVar14 == 0) {
                      uVar8 = Ordinal_111();
                      FUN_1436b58e0(lVar1,"WSACloseEvent failed (%d)",uVar8);
                    }
                    BVar9 = FreeLibrary(hModule);
                    if (BVar9 == 0) {
                      DVar4 = GetLastError();
                      FUN_1436b58e0(lVar1,"FreeLibrary(wsock2) failed (%d)",DVar4);
                    }
                    FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0);
                    return uVar15 & 0xffffffff;
                  }
                  DVar4 = Ordinal_111();
                  pcVar17 = "WSACreateEvent failed (%d)";
                }
              }
              FUN_1436b5820(lVar1,pcVar17,DVar4);
              FreeLibrary(hModule);
              return 2;
            }
            DVar4 = GetLastError();
            pcVar17 = "failed to find WSACloseEvent function (%d)";
          }
          FUN_1436b5820(lVar1,pcVar17,DVar4);
          FreeLibrary(hModule);
          uVar10 = 2;
        }
      }
    }
  }
  return uVar10;
}



// FUNCTION 1436ce570 FUN_1436ce570 body=94 status=ok
// SIG undefined FUN_1436ce570(void)

undefined8 FUN_1436ce570(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  if (lVar1 != 0) {
    curl_slist_free_all(*(undefined8 *)(lVar1 + 0x1cb0));
    *(undefined8 *)(lVar1 + 0x1cb0) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(*param_1 + 0x198));
    *(undefined8 *)(*param_1 + 0x198) = 0;
  }
  return 0;
}



// FUNCTION 1436ce5d0 FUN_1436ce5d0 body=730 status=ok
// SIG undefined FUN_1436ce5d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436ce5d0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 auStack_1c8 [32];
  undefined1 local_1a8 [128];
  char local_128 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  _guard_xfg_dispatch_icall_nop(local_1a8,0,0x80);
  _guard_xfg_dispatch_icall_nop(local_128,0,0x100);
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if (*(char *)((longlong)param_1 + 0x3bf) != '\0') {
    curl_msnprintf(local_128,0x100,"USER,%s",param_1[0x30]);
    lVar5 = curl_slist_append(*(undefined8 *)(lVar2 + 0x1cb0),local_128);
    if (lVar5 == 0) {
      curl_slist_free_all(*(undefined8 *)(lVar2 + 0x1cb0));
      *(undefined8 *)(lVar2 + 0x1cb0) = 0;
      return 0x1b;
    }
    *(longlong *)(lVar2 + 0x1cb0) = lVar5;
    *(undefined4 *)(lVar2 + 0x8a4) = 1;
  }
  puVar3 = *(undefined8 **)(lVar1 + 0x358);
  while( true ) {
    if (puVar3 == (undefined8 *)0x0) {
      return 0;
    }
    iVar4 = FUN_143662c40(*puVar3,"%127[^= ]%*[ =]%255s",local_1a8,local_128);
    if (iVar4 != 2) break;
    iVar4 = Curl_strcasecompare(local_1a8,"TTYPE");
    if (iVar4 == 0) {
      iVar4 = Curl_strcasecompare(local_1a8,"XDISPLOC");
      if (iVar4 == 0) {
        iVar4 = Curl_strcasecompare(local_1a8,"NEW_ENV");
        if (iVar4 == 0) {
          iVar4 = Curl_strcasecompare(local_1a8,&DAT_145b6f878);
          if (iVar4 == 0) {
            iVar4 = Curl_strcasecompare(local_1a8,"BINARY");
            if (iVar4 == 0) {
              FUN_1436b5820(lVar1,"Unknown telnet option %s",*puVar3);
              uVar6 = 0x30;
              goto LAB_1436ce86d;
            }
            iVar4 = atoi(local_128);
            if (iVar4 != 1) {
              *(undefined4 *)(lVar2 + 0x808) = 0;
              *(undefined4 *)(lVar2 + 0x1408) = 0;
            }
          }
          else {
            iVar4 = FUN_143662c40(local_128,"%hu%*[xX]%hu",lVar2 + 0x1ca8,lVar2 + 0x1caa);
            if (iVar4 != 2) break;
            *(undefined4 *)(lVar2 + 0x884) = 1;
          }
        }
        else {
          lVar5 = curl_slist_append(*(undefined8 *)(lVar2 + 0x1cb0),local_128);
          if (lVar5 == 0) {
            uVar6 = 0x1b;
            goto LAB_1436ce86d;
          }
          *(longlong *)(lVar2 + 0x1cb0) = lVar5;
          *(undefined4 *)(lVar2 + 0x8a4) = 1;
        }
      }
      else {
        strncpy((char *)(lVar2 + 0x1c28),local_128,0x7f);
        *(undefined1 *)(lVar2 + 0x1ca7) = 0;
        *(undefined4 *)(lVar2 + 0x894) = 1;
      }
    }
    else {
      strncpy((char *)(lVar2 + 0x1c08),local_128,0x1f);
      *(undefined1 *)(lVar2 + 0x1c27) = 0;
      *(undefined4 *)(lVar2 + 0x868) = 1;
    }
    puVar3 = (undefined8 *)puVar3[1];
  }
  FUN_1436b5820(lVar1,"Syntax error in telnet option: %s",*puVar3);
  uVar6 = 0x31;
LAB_1436ce86d:
  curl_slist_free_all(*(undefined8 *)(lVar2 + 0x1cb0));
  *(undefined8 *)(lVar2 + 0x1cb0) = 0;
  return uVar6;
}



// FUNCTION 1436ce8b0 check_wsock2 body=142 status=ok
// SIG undefined check_wsock2(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 check_wsock2(undefined8 param_1)

{
  int iVar1;
  undefined1 auStack_1d8 [32];
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  iVar1 = Ordinal_115(2,local_1b8);
  if (iVar1 == 0) {
    Ordinal_116();
    if (((char)local_1b8._0_2_ == '\x02') && (SUB21(local_1b8._0_2_,1) == '\0')) {
      return 0;
    }
    FUN_1436b5820(param_1,"insufficient winsock version to support telnet");
  }
  else {
    FUN_1436b5820(param_1,"WSAStartup failed (%d)",iVar1);
  }
  return 2;
}



// FUNCTION 1436ce940 FUN_1436ce940 body=144 status=ok
// SIG undefined FUN_1436ce940(void)

undefined4 FUN_1436ce940(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_1467dcc78)(1,0x1ed0);
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(longlong *)(*param_1 + 0x198) = lVar1;
  *(longlong *)(lVar1 + 0x1eb8) = lVar1 + 0x1cb8;
  *(undefined4 *)(lVar1 + 0x1ec8) = 0;
  *(undefined4 *)(lVar1 + 0x814) = 1;
  *(undefined4 *)(lVar1 + 0x1414) = 1;
  *(undefined4 *)(lVar1 + 0x808) = 1;
  *(undefined4 *)(lVar1 + 0x1408) = 1;
  *(undefined4 *)(lVar1 + 0x140c) = 1;
  *(undefined4 *)(lVar1 + 0x1884) = 1;
  return 0;
}



// FUNCTION 1436ce9d0 FUN_1436ce9d0 body=299 status=ok
// SIG undefined FUN_1436ce9d0(void)

void FUN_1436ce9d0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  iVar5 = 0;
  lVar4 = 0x408;
  lVar2 = *(longlong *)(*param_1 + 0x198);
  do {
    if (iVar5 != 1) {
      if (*(int *)(lVar4 + 0x400 + lVar2) == 1) {
        lVar3 = *(longlong *)(*param_1 + 0x198);
        iVar1 = *(int *)(lVar4 + -0x400 + lVar3);
        if (iVar1 == 0) {
          *(undefined4 *)(lVar4 + -0x400 + lVar3) = 2;
          FUN_1436cf300(param_1,0xfb,iVar5);
        }
        else if (iVar1 == 2) {
          if (*(int *)(lVar4 + lVar3) == 1) {
            *(undefined4 *)(lVar4 + lVar3) = 0;
          }
        }
        else if ((iVar1 == 3) && (*(int *)(lVar4 + lVar3) == 0)) {
          *(undefined4 *)(lVar4 + lVar3) = 1;
        }
      }
      if (*(int *)(lVar4 + 0x1000 + lVar2) == 1) {
        lVar3 = *(longlong *)(*param_1 + 0x198);
        iVar1 = *(int *)(lVar4 + 0x800 + lVar3);
        if (iVar1 == 0) {
          *(undefined4 *)(lVar4 + 0x800 + lVar3) = 2;
          FUN_1436cf300(param_1,0xfd,iVar5);
        }
        else if (iVar1 == 2) {
          if (*(int *)(lVar4 + 0xc00 + lVar3) == 1) {
            *(undefined4 *)(lVar4 + 0xc00 + lVar3) = 0;
          }
        }
        else if ((iVar1 == 3) && (*(int *)(lVar4 + 0xc00 + lVar3) == 0)) {
          *(undefined4 *)(lVar4 + 0xc00 + lVar3) = 1;
        }
      }
    }
    iVar5 = iVar5 + 1;
    lVar4 = lVar4 + 4;
  } while (iVar5 < 0x28);
  return;
}



// FUNCTION 1436ceb00 FUN_1436ceb00 body=307 status=ok
// SIG undefined FUN_1436ceb00(void)

void FUN_1436ceb00(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + 0x458) == '\0') {
    return;
  }
  if (param_3 == 0xff) {
    if (0x13 < param_4 - 0xecU) {
      FUN_1436b58e0(param_1,"%s IAC %d\n",param_2,param_4);
      return;
    }
    FUN_1436b58e0(param_1,"%s IAC %s\n",param_2,(&PTR_DAT_145b6f3e0)[param_4 + -0xec]);
    return;
  }
  if (param_3 == 0xfb) {
    puVar2 = &DAT_145b6f684;
  }
  else if (param_3 == 0xfc) {
    puVar2 = &DAT_145b6f68c;
  }
  else if (param_3 == 0xfd) {
    puVar2 = &DAT_145b6f694;
  }
  else {
    puVar2 = (undefined *)0x0;
    if (param_3 == 0xfe) {
      puVar2 = &DAT_145b6f698;
    }
    if (puVar2 == (undefined *)0x0) {
      FUN_1436b58e0(param_1,"%s %d %d\n",param_2,param_3,param_4);
      return;
    }
  }
  if (param_4 < 0x28) {
    pcVar1 = (&PTR_s_BINARY_145b6f2a0)[param_4];
    if (pcVar1 != (char *)0x0) {
LAB_1436cebfe:
      FUN_1436b58e0(param_1,"%s %s %s\n",param_2,puVar2,pcVar1);
      return;
    }
  }
  else if (param_4 == 0xff) {
    pcVar1 = "EXOPL";
    goto LAB_1436cebfe;
  }
  FUN_1436b58e0(param_1,"%s %s %d\n",param_2,puVar2,param_4);
  return;
}



// FUNCTION 1436cec40 FUN_1436cec40 body=875 status=ok
// SIG undefined FUN_1436cec40(void)

void FUN_1436cec40(longlong param_1,int param_2,byte *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  char *pcVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  undefined *puVar6;
  
  uVar5 = 0;
  if (*(char *)(param_1 + 0x458) == '\0') {
    return;
  }
  if (param_2 != 0) {
    puVar6 = &DAT_145b6f764;
    if (param_2 == 0x3c) {
      puVar6 = &DAT_145b6f76c;
    }
    FUN_1436b58e0(param_1,"%s IAC SB ",puVar6);
    if (2 < param_4) {
      bVar1 = param_3[param_4 - 2];
      uVar5 = (ulonglong)bVar1;
      bVar2 = param_3[param_4 - 1];
      if ((bVar1 != 0xff) || (bVar2 != 0xf0)) {
        FUN_1436b58e0(param_1,"(terminated by ");
        if (bVar1 < 0x28) {
          FUN_1436b58e0(param_1,&DAT_145b6b530,(&PTR_s_BINARY_145b6f2a0)[uVar5]);
        }
        else if (bVar1 < 0xec) {
          FUN_1436b58e0(param_1,&DAT_145b6f798,bVar1);
        }
        else {
          FUN_1436b58e0(param_1,&DAT_145b6b530,(&PTR_DAT_145b6f3e0)[bVar1 - 0xec]);
        }
        if (bVar2 < 0x28) {
          FUN_1436b58e0(param_1,&DAT_145afa01c,(&PTR_s_BINARY_145b6f2a0)[bVar2]);
        }
        else if (bVar2 < 0xec) {
          FUN_1436b58e0(param_1,&DAT_145af963c,(ulonglong)bVar2);
        }
        else {
          FUN_1436b58e0(param_1,&DAT_145afa01c,(&PTR_DAT_145b6f3e0)[(int)(bVar2 - 0xec)]);
        }
        FUN_1436b58e0(param_1,", not IAC SE!) ");
      }
    }
    param_4 = param_4 - 2;
  }
  if (param_4 == 0) {
    pcVar3 = "(Empty suboption?)";
    goto LAB_1436cef8b;
  }
  bVar1 = *param_3;
  if (bVar1 < 0x28) {
    if (((bVar1 < 0x24) && ((0x881000000U >> ((ulonglong)bVar1 & 0x3f) & 1) != 0)) ||
       (bVar1 == 0x27)) {
      FUN_1436b58e0(param_1,&DAT_145afa01c,(&PTR_s_BINARY_145b6f2a0)[bVar1]);
    }
    else {
      FUN_1436b58e0(param_1,"%s (unsupported)",(&PTR_s_BINARY_145b6f2a0)[bVar1]);
    }
  }
  else {
    FUN_1436b58e0(param_1,"%d (unknown)",param_3[uVar5]);
  }
  if (*param_3 == 0x1f) {
    if (4 < param_4) {
      FUN_1436b58e0(param_1,"Width: %hu ; Height: %hu",CONCAT11(param_3[1],param_3[2]),
                    CONCAT11(param_3[3],param_3[4]));
    }
  }
  else {
    bVar1 = param_3[1];
    if (bVar1 == 0) {
      pcVar3 = " IS";
LAB_1436cee6d:
      FUN_1436b58e0(param_1,pcVar3);
    }
    else {
      if (bVar1 == 1) {
        pcVar3 = " SEND";
        goto LAB_1436cee6d;
      }
      if (bVar1 == 2) {
        pcVar3 = " INFO/REPLY";
        goto LAB_1436cee6d;
      }
      if (bVar1 == 3) {
        pcVar3 = " NAME";
        goto LAB_1436cee6d;
      }
    }
    bVar1 = *param_3;
    if ((bVar1 == 0x18) || (bVar1 == 0x23)) {
      param_3[param_4] = 0;
      FUN_1436b58e0(param_1," \"%s\"",param_3 + 2);
    }
    else if (bVar1 == 0x27) {
      if (param_3[1] == 0) {
        FUN_1436b58e0(param_1,&DAT_145af3920);
        uVar5 = 3;
        if (3 < param_4) {
          do {
            if (param_3[uVar5] == 0) {
              puVar4 = &DAT_145b036e8;
LAB_1436cef21:
              FUN_1436b58e0(param_1,puVar4);
            }
            else {
              if (param_3[uVar5] == 1) {
                puVar4 = &DAT_145b6f834;
                goto LAB_1436cef21;
              }
              FUN_1436b58e0(param_1,&DAT_145b6f838);
            }
            uVar5 = (ulonglong)((int)uVar5 + 1);
          } while (uVar5 < param_4);
        }
      }
    }
    else {
      uVar5 = 2;
      if (2 < param_4) {
        do {
          FUN_1436b58e0(param_1," %.2x",param_3[uVar5]);
          uVar5 = (ulonglong)((int)uVar5 + 1);
        } while (uVar5 < param_4);
      }
    }
  }
  if (param_2 == 0) {
    return;
  }
  pcVar3 = "\n";
LAB_1436cef8b:
  FUN_1436b58e0(param_1,pcVar3);
  return;
}



// FUNCTION 1436cefb0 FUN_1436cefb0 body=290 status=ok
// SIG undefined FUN_1436cefb0(void)

void FUN_1436cefb0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(*param_1 + 0x198);
  iVar1 = *(int *)(lVar2 + 8 + lVar3 * 4);
  if (iVar1 == 0) {
    if (*(int *)(lVar2 + 0x808 + lVar3 * 4) == 1) {
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 1;
      FUN_1436cf300(param_1,0xfb,param_2);
      goto LAB_1436cf08b;
    }
    if (*(int *)(lVar2 + 0x1808 + lVar3 * 4) == 1) {
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 1;
      FUN_1436cf300(param_1,0xfb,param_2);
      FUN_1436cf4b0(param_1,param_2);
      return;
    }
  }
  else {
    if (iVar1 != 2) {
      if (iVar1 != 3) {
        return;
      }
      iVar1 = *(int *)(lVar2 + 0x408 + lVar3 * 4);
      if (iVar1 != 0) {
        if (iVar1 != 1) {
          return;
        }
        *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 1;
        *(undefined4 *)(lVar2 + 0x408 + lVar3 * 4) = 0;
        return;
      }
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 0;
      return;
    }
    iVar1 = *(int *)(lVar2 + 0x408 + lVar3 * 4);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 1;
LAB_1436cf08b:
      if (*(int *)(lVar2 + 0x1808 + lVar3 * 4) != 1) {
        return;
      }
      FUN_1436cf4b0(param_1,param_2);
      return;
    }
    if (iVar1 != 1) {
      return;
    }
    *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 3;
    *(undefined4 *)(lVar2 + 0x1008 + lVar3 * 4) = 0;
  }
  FUN_1436cf300(param_1,0xfc,param_2);
  return;
}



// FUNCTION 1436cf0e0 FUN_1436cf0e0 body=153 status=ok
// SIG undefined FUN_1436cf0e0(void)

void FUN_1436cf0e0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(*param_1 + 0x198);
  iVar1 = *(int *)(lVar2 + 8 + lVar3 * 4);
  if (iVar1 == 1) {
    *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 0;
    FUN_1436cf300(param_1,0xfc,param_2);
    return;
  }
  if (iVar1 == 2) {
    iVar1 = *(int *)(lVar2 + 0x408 + lVar3 * 4);
    if (iVar1 == 0) {
LAB_1436cf15c:
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 0;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 0;
      *(undefined4 *)(lVar2 + 0x408 + lVar3 * 4) = 0;
      return;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(lVar2 + 0x408 + lVar3 * 4);
    if (iVar1 == 0) goto LAB_1436cf15c;
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 8 + lVar3 * 4) = 2;
      *(undefined4 *)(lVar2 + 0x408 + lVar3 * 4) = 0;
      FUN_1436cf300(param_1,0xfb,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1436cf180 FUN_1436cf180 body=203 status=ok
// SIG undefined FUN_1436cf180(void)

void FUN_1436cf180(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(*param_1 + 0x198);
  iVar1 = *(int *)(lVar2 + 0xc08 + lVar3 * 4);
  if (iVar1 == 0) {
    if (*(int *)(lVar2 + 0x1408 + lVar3 * 4) == 1) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 1;
      FUN_1436cf300(param_1,0xfd,param_2);
      return;
    }
LAB_1436cf20c:
    FUN_1436cf300(param_1,0xfe,param_2);
    return;
  }
  if (iVar1 == 2) {
    iVar1 = *(int *)(lVar2 + 0x1008 + lVar3 * 4);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 1;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 3;
      *(undefined4 *)(lVar2 + 0x1008 + lVar3 * 4) = 0;
      goto LAB_1436cf20c;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(lVar2 + 0x1008 + lVar3 * 4);
    if (iVar1 == 0) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 0;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 1;
      *(undefined4 *)(lVar2 + 0x1008 + lVar3 * 4) = 0;
      return;
    }
  }
  return;
}



// FUNCTION 1436cf250 FUN_1436cf250 body=168 status=ok
// SIG undefined FUN_1436cf250(void)

void FUN_1436cf250(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  lVar2 = *(longlong *)(*param_1 + 0x198);
  iVar1 = *(int *)(lVar2 + 0xc08 + lVar3 * 4);
  if (iVar1 == 1) {
    *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 0;
    FUN_1436cf300(param_1,0xfe,param_2);
    return;
  }
  if (iVar1 == 2) {
    iVar1 = *(int *)(lVar2 + 0x1008 + lVar3 * 4);
    if (iVar1 == 0) {
LAB_1436cf2d5:
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 0;
      return;
    }
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 0;
      *(undefined4 *)(lVar2 + 0x1008 + lVar3 * 4) = 0;
      return;
    }
  }
  else if (iVar1 == 3) {
    iVar1 = *(int *)(lVar2 + 0x1008 + lVar3 * 4);
    if (iVar1 == 0) goto LAB_1436cf2d5;
    if (iVar1 == 1) {
      *(undefined4 *)(lVar2 + 0xc08 + lVar3 * 4) = 2;
      *(undefined4 *)(lVar2 + 0x1008 + lVar3 * 4) = 0;
      FUN_1436cf300(param_1,0xfd,param_2);
      return;
    }
  }
  return;
}



// FUNCTION 1436cf300 FUN_1436cf300 body=137 status=ok
// SIG undefined FUN_1436cf300(void)

void FUN_1436cf300(undefined8 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_res10;
  undefined1 local_res11;
  undefined1 local_res12;
  
  uVar1 = *param_1;
  local_res10 = 0xff;
  local_res11 = (undefined1)param_2;
  local_res12 = (undefined1)param_3;
  iVar2 = Ordinal_19(param_1[0x3a],&local_res10,3);
  if (iVar2 < 0) {
    uVar3 = Ordinal_111();
    FUN_1436b5820(uVar1,"Sending data failed (%d)",uVar3);
  }
  FUN_1436ceb00(*param_1,&DAT_145b6f764,param_2,param_3);
  return;
}



// FUNCTION 1436cf390 FUN_1436cf390 body=274 status=ok
// SIG undefined FUN_1436cf390(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436cf390(longlong param_1,char *param_2,longlong param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  char local_58 [8];
  longlong local_50;
  undefined8 local_48;
  undefined2 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  uVar6 = 0;
  uVar3 = uVar6;
  do {
    lVar7 = param_3 + -1;
    if (param_3 == 0) {
      return uVar3;
    }
    local_58[0] = *param_2;
    uVar5 = 1;
    param_2 = param_2 + 1;
    uVar4 = uVar6;
    if (local_58[0] == -1) {
      uVar5 = 2;
      local_58[1] = 0xff;
    }
    do {
      local_48 = *(undefined8 *)(param_1 + 0x1d0);
      local_40 = 0x10;
      iVar1 = Curl_poll(&local_48,1);
      if (iVar1 + 1U < 2) {
        return 0x37;
      }
      local_68 = &local_50;
      local_50 = 0;
      uVar2 = FUN_1436b5de0(param_1,*(undefined8 *)(param_1 + 0x1d0),local_58 + uVar4,uVar5 - uVar4)
      ;
      uVar4 = uVar4 + local_50;
      uVar3 = uVar2 & 0xffffffff;
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      param_3 = lVar7;
    } while ((longlong)uVar4 < (longlong)(ulonglong)uVar5);
  } while( true );
}



// FUNCTION 1436cf4b0 FUN_1436cf4b0 body=431 status=ok
// SIG undefined FUN_1436cf4b0(void)

void FUN_1436cf4b0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 uStackX_9;
  undefined1 uStackX_11;
  
  if (param_2 == 0x1f) {
    lVar3 = *param_1;
    lVar4 = *(longlong *)(lVar3 + 0x198);
    plVar1 = (longlong *)(lVar4 + 0x1cb8);
    plVar2 = (longlong *)(lVar4 + 0x1eb8);
    *plVar2 = (longlong)plVar1;
    if (plVar1 < plVar2) {
      *(undefined1 *)plVar1 = 0xff;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      *(undefined1 *)*plVar2 = 0xfa;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      *(undefined1 *)*plVar2 = 0x1f;
      *plVar2 = *plVar2 + 1;
    }
    uVar6 = Ordinal_9(*(undefined2 *)(lVar4 + 0x1ca8));
    uVar7 = Ordinal_9(*(undefined2 *)(lVar4 + 0x1caa));
    if ((longlong *)*plVar2 < plVar2) {
      *(char *)*plVar2 = (char)uVar6;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      uStackX_11 = (undefined1)((ushort)uVar6 >> 8);
      *(undefined1 *)*plVar2 = uStackX_11;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      *(char *)*plVar2 = (char)uVar7;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      uStackX_9 = (undefined1)((ushort)uVar7 >> 8);
      *(undefined1 *)*plVar2 = uStackX_9;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      *(undefined1 *)*plVar2 = 0xff;
      *plVar2 = *plVar2 + 1;
    }
    if ((longlong *)*plVar2 < plVar2) {
      *(undefined1 *)*plVar2 = 0xf0;
      *plVar2 = *plVar2 + 1;
    }
    lVar5 = *plVar2;
    *(longlong *)(lVar4 + 0x1ec0) = lVar5;
    *plVar2 = (longlong)plVar1;
    FUN_1436cec40(lVar3,0x3e,lVar4 + 0x1cba,(lVar5 - (longlong)plVar1) + -2);
    iVar8 = Ordinal_19(param_1[0x3a],plVar1,3);
    if (iVar8 < 0) {
      uVar9 = Ordinal_111();
      FUN_1436b5820(lVar3,"Sending data failed (%d)",uVar9);
    }
    FUN_1436cf390(param_1,lVar4 + 0x1cbb,4);
    iVar8 = Ordinal_19(param_1[0x3a],lVar4 + 0x1cbf,2);
    if (iVar8 < 0) {
      uVar9 = Ordinal_111();
      FUN_1436b5820(lVar3,"Sending data failed (%d)",uVar9);
    }
  }
  return;
}



// FUNCTION 1436cf660 FUN_1436cf660 body=873 status=ok
// SIG undefined FUN_1436cf660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436cf660(longlong *param_1)

{
  char *pcVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  undefined4 uVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_988 [32];
  undefined8 local_968;
  uint local_960;
  undefined1 *local_958;
  longlong local_950;
  undefined4 local_948;
  undefined4 local_940;
  undefined1 local_938 [128];
  undefined1 local_8b8 [128];
  undefined1 local_838 [2048];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_988;
  _guard_xfg_dispatch_icall_nop(local_8b8,0,0x80);
  _guard_xfg_dispatch_icall_nop(local_938,0,0x80);
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x198);
  FUN_1436cec40(lVar3,0x3c,lVar4 + 0x1cb8,
                (*(longlong *)(lVar4 + 0x1ec0) - *(longlong *)(lVar4 + 0x1eb8)) + 2);
  bVar2 = **(byte **)(lVar4 + 0x1eb8);
  *(byte **)(lVar4 + 0x1eb8) = *(byte **)(lVar4 + 0x1eb8) + 1;
  if (bVar2 == 0x18) {
    local_950 = lVar4 + 0x1c08;
    lVar8 = -1;
    do {
      pcVar1 = (char *)(lVar4 + 0x1c09 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar1 != '\0');
    local_960 = 0x18;
  }
  else {
    if (bVar2 != 0x23) {
      local_960 = (uint)bVar2;
      if (local_960 != 0x27) {
        return;
      }
      local_958 = (undefined1 *)0x0;
      local_968 = (undefined1 *)CONCAT44(local_968._4_4_,0xfa);
      curl_msnprintf(local_838,0x800,"%c%c%c%c",0xff);
      uVar10 = 4;
      for (plVar5 = *(longlong **)(lVar4 + 0x1cb0); plVar5 != (longlong *)0x0;
          plVar5 = (longlong *)plVar5[1]) {
        lVar4 = -1;
        do {
          lVar8 = lVar4;
          lVar4 = lVar8 + 1;
        } while (*(char *)(*plVar5 + 1 + lVar8) != '\0');
        uVar9 = lVar8 + 2 + uVar10;
        if ((uVar9 < 0x7fa) &&
           (iVar6 = FUN_143662c40(*plVar5,"%127[^,],%127s",local_8b8,local_938), iVar6 != 0)) {
          local_958 = local_938;
          local_968 = local_8b8;
          local_960 = 1;
          curl_msnprintf(local_838 + uVar10,0x800 - uVar10,"%c%s%c%s",0);
          uVar10 = uVar9;
        }
      }
      local_968._4_4_ = (undefined4)((ulonglong)local_968 >> 0x20);
      local_968 = (undefined1 *)CONCAT44(local_968._4_4_,0xf0);
      curl_msnprintf(local_838 + uVar10,0x800 - uVar10,&DAT_145b6f904,0xff);
      iVar6 = Ordinal_19(param_1[0x3a],local_838,(int)uVar10 + 2,0);
      if (iVar6 < 0) {
        uVar7 = Ordinal_111();
        FUN_1436b5820(lVar3,"Sending data failed (%d)",uVar7);
      }
      FUN_1436cec40(lVar3,0x3e,local_838 + 2,uVar10);
      return;
    }
    local_950 = lVar4 + 0x1c28;
    lVar8 = -1;
    do {
      pcVar1 = (char *)(lVar4 + 0x1c29 + lVar8);
      lVar8 = lVar8 + 1;
    } while (*pcVar1 != '\0');
    local_960 = 0x23;
  }
  local_940 = 0xf0;
  local_948 = 0xff;
  local_958 = (undefined1 *)0x0;
  local_968 = (undefined1 *)CONCAT44(local_968._4_4_,0xfa);
  curl_msnprintf(local_838,0x800,"%c%c%c%c%s%c%c",0xff);
  iVar6 = Ordinal_19(param_1[0x3a],local_838,(int)lVar8 + 6,0);
  if (iVar6 < 0) {
    uVar7 = Ordinal_111();
    FUN_1436b5820(lVar3,"Sending data failed (%d)",uVar7);
  }
  FUN_1436cec40(lVar3,0x3e,local_838 + 2,lVar8 + 4);
  return;
}



// FUNCTION 1436cf9d0 FUN_1436cf9d0 body=1379 status=ok
// SIG undefined FUN_1436cf9d0(void)

undefined8 FUN_1436cf9d0(longlong *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  longlong *plVar2;
  byte bVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  byte *pbVar11;
  
  lVar4 = *param_1;
  iVar9 = 0;
  iVar10 = -1;
  puVar5 = *(undefined4 **)(lVar4 + 0x198);
  pbVar11 = param_2;
  if (param_3 != 0) {
    do {
      bVar3 = *pbVar11;
      param_3 = param_3 + -1;
      switch(puVar5[0x7b2]) {
      case 0:
        if (bVar3 == 0xff) {
          puVar5[0x7b2] = 1;
          goto LAB_1436cfa4c;
        }
        if (bVar3 == 0xd) {
          puVar5[0x7b2] = 6;
        }
LAB_1436cfa9a:
        if (iVar10 < 0) {
          iVar10 = iVar9;
        }
        break;
      case 1:
code_r0x0001436cfd97:
        switch(bVar3) {
        case 0xfa:
          puVar5[0x7b2] = 7;
          *(undefined4 **)(puVar5 + 0x7ae) = puVar5 + 0x72e;
          break;
        case 0xfb:
          puVar5[0x7b2] = 2;
          break;
        case 0xfc:
          puVar5[0x7b2] = 3;
          break;
        case 0xfd:
          puVar5[0x7b2] = 4;
          break;
        case 0xfe:
          puVar5[0x7b2] = 5;
          break;
        case 0xff:
          puVar5[0x7b2] = 0;
          if (iVar10 < 0) {
            iVar10 = iVar9;
          }
          break;
        default:
          puVar5[0x7b2] = 0;
          if (*(char *)(lVar4 + 0x458) != '\0') {
            if (bVar3 < 0xec) {
              FUN_1436b58e0(lVar4,"%s IAC %d\n",&DAT_145b6f76c);
            }
            else {
              FUN_1436b58e0(lVar4,"%s IAC %s\n",&DAT_145b6f76c,
                            (&PTR_DAT_145b6f3e0)[(int)(bVar3 - 0xec)]);
            }
          }
        }
        break;
      case 2:
        if (*(char *)(lVar4 + 0x458) != '\0') {
          if (bVar3 < 0x28) {
            pcVar7 = (&PTR_s_BINARY_145b6f2a0)[bVar3];
            if (pcVar7 == (char *)0x0) goto LAB_1436cfac8;
LAB_1436cfb17:
            pcVar8 = "%s %s %s\n";
          }
          else {
            if (bVar3 == 0xff) {
              pcVar7 = "EXOPL";
              goto LAB_1436cfb17;
            }
LAB_1436cfac8:
            pcVar7 = (char *)(ulonglong)bVar3;
            pcVar8 = "%s %s %d\n";
          }
          FUN_1436b58e0(lVar4,pcVar8,&DAT_145b6f76c,&DAT_145b6f684,pcVar7);
        }
        *puVar5 = 1;
        FUN_1436cf180(param_1,(ulonglong)bVar3);
        puVar5[0x7b2] = 0;
        break;
      case 3:
        if (*(char *)(lVar4 + 0x458) != '\0') {
          if (bVar3 < 0x28) {
            pcVar7 = (&PTR_s_BINARY_145b6f2a0)[bVar3];
            if (pcVar7 == (char *)0x0) goto LAB_1436cfb44;
LAB_1436cfb93:
            pcVar8 = "%s %s %s\n";
          }
          else {
            if (bVar3 == 0xff) {
              pcVar7 = "EXOPL";
              goto LAB_1436cfb93;
            }
LAB_1436cfb44:
            pcVar7 = (char *)(ulonglong)bVar3;
            pcVar8 = "%s %s %d\n";
          }
          FUN_1436b58e0(lVar4,pcVar8,&DAT_145b6f76c,&DAT_145b6f68c,pcVar7);
        }
        *puVar5 = 1;
        FUN_1436cf250(param_1,(ulonglong)bVar3);
        puVar5[0x7b2] = 0;
        break;
      case 4:
        if (*(char *)(lVar4 + 0x458) != '\0') {
          if (bVar3 < 0x28) {
            pcVar7 = (&PTR_s_BINARY_145b6f2a0)[bVar3];
            if (pcVar7 == (char *)0x0) goto LAB_1436cfbc0;
LAB_1436cfc0f:
            pcVar8 = "%s %s %s\n";
          }
          else {
            if (bVar3 == 0xff) {
              pcVar7 = "EXOPL";
              goto LAB_1436cfc0f;
            }
LAB_1436cfbc0:
            pcVar7 = (char *)(ulonglong)bVar3;
            pcVar8 = "%s %s %d\n";
          }
          FUN_1436b58e0(lVar4,pcVar8,&DAT_145b6f76c,&DAT_145b6f694,pcVar7);
        }
        *puVar5 = 1;
        FUN_1436cefb0(param_1,(ulonglong)bVar3);
        puVar5[0x7b2] = 0;
        break;
      case 5:
        if (*(char *)(lVar4 + 0x458) != '\0') {
          if (bVar3 < 0x28) {
            pcVar7 = (&PTR_s_BINARY_145b6f2a0)[bVar3];
            if (pcVar7 == (char *)0x0) goto LAB_1436cfc3c;
LAB_1436cfc8b:
            pcVar8 = "%s %s %s\n";
          }
          else {
            if (bVar3 == 0xff) {
              pcVar7 = "EXOPL";
              goto LAB_1436cfc8b;
            }
LAB_1436cfc3c:
            pcVar7 = (char *)(ulonglong)bVar3;
            pcVar8 = "%s %s %d\n";
          }
          FUN_1436b58e0(lVar4,pcVar8,&DAT_145b6f76c,&DAT_145b6f698,pcVar7);
        }
        *puVar5 = 1;
        FUN_1436cf0e0(param_1,(ulonglong)bVar3);
        puVar5[0x7b2] = 0;
        break;
      case 6:
        puVar5[0x7b2] = 0;
        if (bVar3 != 0) goto LAB_1436cfa9a;
LAB_1436cfa4c:
        if ((-1 < iVar10) &&
           (uVar6 = Curl_client_write(param_1,1,param_2 + iVar10,(longlong)(iVar9 - iVar10)),
           (int)uVar6 != 0)) {
          return uVar6;
        }
        iVar10 = -1;
        break;
      case 7:
        if (bVar3 == 0xff) {
          puVar5[0x7b2] = 8;
        }
        else {
          pbVar1 = (byte *)(puVar5 + 0x7ae);
          if (*(byte **)pbVar1 < pbVar1) {
            **(byte **)pbVar1 = bVar3;
            *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
          }
        }
        break;
      case 8:
        if (bVar3 == 0xf0) {
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          if ((longlong *)*plVar2 < plVar2) {
            *(undefined1 *)*plVar2 = 0xff;
            *plVar2 = *plVar2 + 1;
          }
          if ((longlong *)*plVar2 < plVar2) {
            *(undefined1 *)*plVar2 = 0xf0;
            *plVar2 = *plVar2 + 1;
          }
          *(longlong *)(puVar5 + 0x7b0) = *plVar2 + -2;
          *plVar2 = (longlong)(puVar5 + 0x72e);
          FUN_1436cf660(param_1);
          puVar5[0x7b2] = 0;
        }
        else {
          if (bVar3 != 0xff) {
            pbVar1 = (byte *)(puVar5 + 0x7ae);
            if (*(byte **)pbVar1 < pbVar1) {
              **(byte **)pbVar1 = 0xff;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
            }
            if (*(byte **)pbVar1 < pbVar1) {
              **(byte **)pbVar1 = bVar3;
              *(longlong *)pbVar1 = *(longlong *)pbVar1 + 1;
            }
            *(longlong *)(puVar5 + 0x7b0) = *(longlong *)pbVar1 + -2;
            *(undefined4 **)pbVar1 = puVar5 + 0x72e;
            if (*(char *)(lVar4 + 0x458) != '\0') {
              if (bVar3 < 0xec) {
                FUN_1436b58e0(lVar4,"%s IAC %d\n","In SUBOPTION processing, RCVD");
              }
              else {
                FUN_1436b58e0(lVar4,"%s IAC %s\n","In SUBOPTION processing, RCVD",
                              (&PTR_DAT_145b6f3e0)[(int)(bVar3 - 0xec)]);
              }
            }
            FUN_1436cf660(param_1);
            puVar5[0x7b2] = 1;
            goto code_r0x0001436cfd97;
          }
          plVar2 = (longlong *)(puVar5 + 0x7ae);
          if ((longlong *)*plVar2 < plVar2) {
            *(undefined1 *)*plVar2 = 0xff;
            *plVar2 = *plVar2 + 1;
          }
          puVar5[0x7b2] = 7;
        }
      }
      iVar9 = iVar9 + 1;
      pbVar11 = pbVar11 + 1;
    } while (param_3 != 0);
    if ((-1 < iVar10) &&
       (uVar6 = Curl_client_write(param_1,1,param_2 + iVar10,(longlong)(iVar9 - iVar10)),
       (int)uVar6 != 0)) {
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 1436cff70 FUN_1436cff70 body=376 status=ok
// SIG undefined FUN_1436cff70(void)

undefined8 FUN_1436cff70(longlong *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)(*(code *)PTR_calloc_1467dcc78)(1,0x178);
  param_1[0xe3] = (longlong)puVar3;
  if (puVar3 == (undefined4 *)0x0) {
LAB_1436cffaf:
    uVar4 = 0x1b;
  }
  else {
    iVar1 = *(int *)(*param_1 + 0x2d8);
    iVar6 = 0x200;
    if ((iVar1 != 0) && (iVar6 = iVar1, 0xffb0 < iVar1 - 8U)) {
      return 0x47;
    }
    if (*(longlong *)(puVar3 + 0x5a) == 0) {
      lVar5 = (*(code *)PTR_calloc_1467dcc78)(1,(longlong)(iVar6 + 4));
      *(longlong *)(puVar3 + 0x5a) = lVar5;
      if (lVar5 == 0) goto LAB_1436cffaf;
    }
    if (*(longlong *)(puVar3 + 0x5c) == 0) {
      lVar5 = (*(code *)PTR_calloc_1467dcc78)(1,(longlong)(iVar6 + 4));
      *(longlong *)(puVar3 + 0x5c) = lVar5;
      if (lVar5 == 0) goto LAB_1436cffaf;
    }
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    *(longlong **)(puVar3 + 4) = param_1;
    *(longlong *)(puVar3 + 6) = param_1[0x3a];
    *puVar3 = 0;
    puVar3[2] = 0xffffff9c;
    puVar3[0x57] = 0x200;
    puVar3[0x58] = iVar6;
    *(undefined2 *)(puVar3 + 0x14) = *(undefined2 *)(param_1[0xb] + 4);
    FUN_1436d12a0(puVar3);
    if (*(char *)((longlong)param_1 + 0x3d1) == '\0') {
      iVar1 = Ordinal_2(*(undefined8 *)(puVar3 + 6),puVar3 + 0x14,
                        *(undefined4 *)(param_1[0xb] + 0x10));
      if (iVar1 != 0) {
        uVar2 = Ordinal_111();
        uVar4 = FUN_1436a7be0(param_1,uVar2);
        FUN_1436b5820(*param_1,"bind() failed; %s",uVar4);
        return 7;
      }
      *(undefined1 *)((longlong)param_1 + 0x3d1) = 1;
    }
    FUN_1436bee00(*param_1);
    uVar4 = 0;
    *param_2 = 1;
  }
  return uVar4;
}



// FUNCTION 1436d00f0 FUN_1436d00f0 body=83 status=ok
// SIG undefined FUN_1436d00f0(void)

undefined8 FUN_1436d00f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  if (lVar1 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x168));
    *(undefined8 *)(lVar1 + 0x168) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x170));
    *(undefined8 *)(lVar1 + 0x170) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar1);
  }
  return 0;
}



// FUNCTION 1436d0150 FUN_1436d0150 body=137 status=ok
// SIG undefined FUN_1436d0150(void)

undefined8 FUN_1436d0150(longlong param_1,undefined1 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  
  *param_2 = 0;
  if ((*(longlong *)(param_1 + 0x718) != 0) || (uVar2 = FUN_1436cff70(), (int)uVar2 == 0)) {
    piVar1 = *(int **)(param_1 + 0x718);
    if (piVar1 == (int *)0x0) {
      return 0x2c;
    }
    *param_2 = 0;
    uVar2 = tftp_state_machine(piVar1,0);
    if (*piVar1 == 3) {
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    else {
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      FUN_1436d02c0(param_1,param_2);
    }
    uVar2 = FUN_1436d14c0(piVar1[2]);
  }
  return uVar2;
}



// FUNCTION 1436d01e0 FUN_1436d01e0 body=70 status=ok
// SIG undefined FUN_1436d01e0(void)

undefined4 FUN_1436d01e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x718);
  uVar3 = 0;
  iVar2 = FUN_1436bece0();
  if (iVar2 != 0) {
    return 0x2a;
  }
  if (lVar1 != 0) {
    uVar3 = FUN_1436d14c0(*(undefined4 *)(lVar1 + 8));
  }
  return uVar3;
}



// FUNCTION 1436d0230 FUN_1436d0230 body=136 status=ok
// SIG undefined FUN_1436d0230(void)

undefined8 FUN_1436d0230(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  char *pcVar3;
  
  lVar1 = *param_1;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 2;
  pcVar3 = strstr(*(char **)(lVar1 + 0x89d8),";mode=");
  if ((pcVar3 == (char *)0x0) &&
     (pcVar3 = strstr((char *)param_1[0x15],";mode="), pcVar3 == (char *)0x0)) {
    return 0;
  }
  *pcVar3 = '\0';
  cVar2 = Curl_raw_toupper(pcVar3[6]);
  if ((cVar2 != 'A') && (cVar2 != 'N')) {
    *(undefined1 *)(lVar1 + 0x443) = 0;
    return 0;
  }
  *(undefined1 *)(lVar1 + 0x443) = 1;
  return 0;
}



// FUNCTION 1436d02c0 FUN_1436d02c0 body=325 status=ok
// SIG undefined FUN_1436d02c0(void)

undefined8 FUN_1436d02c0(undefined8 *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  uVar6 = *param_1;
  piVar2 = (int *)param_1[0xe3];
  iVar3 = -1;
  _time64(&local_res8);
  if (*(longlong *)(piVar2 + 0xe) < local_res8) {
    piVar2[2] = -99;
    *piVar2 = 3;
    *param_2 = 0;
  }
  else {
    if ((longlong)piVar2[9] + *(longlong *)(piVar2 + 0x10) < local_res8) {
      iVar3 = 7;
      _time64((__time64_t *)(piVar2 + 0x10));
    }
    iVar1 = piVar2[0xe];
    *param_2 = 0;
    if (0 < iVar1 - (int)local_res8) {
      if (iVar3 == -1) {
        iVar3 = FUN_1436b50e0(*(undefined8 *)(piVar2 + 6),0xffffffffffffffff,0xffffffffffffffff,0);
        if (iVar3 == -1) {
          uVar4 = Ordinal_111();
          uVar5 = FUN_1436a7be0(param_1,uVar4);
          FUN_1436b5820(uVar6,&DAT_145afa01c,uVar5);
          piVar2[3] = 5;
          return 0;
        }
        if (iVar3 == 0) {
          return 0;
        }
        uVar6 = FUN_1436d0870(param_1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        iVar3 = piVar2[3];
      }
      uVar6 = tftp_state_machine(piVar2,iVar3);
      if ((int)uVar6 == 0) {
        iVar3 = *piVar2;
        *param_2 = iVar3 == 3;
        if (iVar3 == 3) {
          FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
        }
        return 0;
      }
      return uVar6;
    }
  }
  FUN_1436b5820(uVar6,"TFTP response timeout");
  return 0x1c;
}



// FUNCTION 1436d0410 tftp_doing body=85 status=ok
// SIG undefined tftp_doing(void)

undefined8 tftp_doing(undefined8 *param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_1436d02c0();
  if ((*param_2 == '\0') && ((int)uVar2 == 0)) {
    iVar1 = FUN_1436befa0(param_1);
    if (iVar1 != 0) {
      return 0x2a;
    }
    uVar2 = curlx_tvnow();
    uVar2 = FUN_1436bf8a0(*param_1,uVar2);
  }
  return uVar2;
}



// FUNCTION 1436d0490 tftp_connect_for_rx body=80 status=ok
// SIG undefined tftp_connect_for_rx(void)

void tftp_connect_for_rx(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_1436b58e0(**(undefined8 **)(param_1 + 4),&DAT_145af6478,"Connected for receive");
  *param_1 = 1;
  iVar1 = FUN_1436d12a0(param_1);
  if (iVar1 == 0) {
    tftp_rx(param_1,param_2);
  }
  return;
}



// FUNCTION 1436d04e0 tftp_connect_for_tx body=80 status=ok
// SIG undefined tftp_connect_for_tx(void)

void tftp_connect_for_tx(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  FUN_1436b58e0(**(undefined8 **)(param_1 + 4),&DAT_145af6478,"Connected for transmit");
  *param_1 = 2;
  iVar1 = FUN_1436d12a0(param_1);
  if (iVar1 == 0) {
    FUN_1436d15c0(param_1,param_2);
  }
  return;
}



// FUNCTION 1436d0530 FUN_1436d0530 body=97 status=ok
// SIG undefined FUN_1436d0530(void)

longlong FUN_1436d0530(longlong param_1,longlong param_2,longlong param_3,char *param_4)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (param_4[lVar2] != '\0');
  if ((ulonglong)(longlong)*(int *)(param_1 + 0x15c) < (ulonglong)(param_2 + 1 + lVar2)) {
    return 0;
  }
  pcVar3 = param_4;
  do {
    cVar1 = *pcVar3;
    pcVar3[param_3 - (longlong)param_4] = cVar1;
    pcVar3 = pcVar3 + 1;
    lVar2 = -1;
  } while (cVar1 != '\0');
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (param_4[lVar4 + 1] != '\0');
  return lVar4 + 2;
}



// FUNCTION 1436d05a0 FUN_1436d05a0 body=709 status=ok
// SIG undefined FUN_1436d05a0(void)

undefined8 FUN_1436d05a0(longlong param_1,void *param_2,int param_3)

{
  longlong lVar1;
  void *_Buf;
  int iVar2;
  long lVar3;
  void *pvVar4;
  longlong lVar5;
  ulonglong uVar7;
  size_t _MaxCount;
  ulonglong _MaxCount_00;
  char *_Str;
  longlong lVar6;
  
  lVar1 = **(longlong **)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x15c) = 0x200;
  _Buf = param_2;
  while( true ) {
    if ((void *)((longlong)param_3 + (longlong)param_2) <= _Buf) {
      return 0;
    }
    _MaxCount_00 = ((longlong)param_3 - (longlong)_Buf) + (longlong)param_2;
    pvVar4 = memchr(_Buf,0,_MaxCount_00);
    uVar7 = _MaxCount_00;
    if (pvVar4 != (void *)0x0) {
      uVar7 = (longlong)pvVar4 - (longlong)_Buf;
    }
    uVar7 = uVar7 + 1;
    if (_MaxCount_00 <= uVar7) break;
    _MaxCount = _MaxCount_00 - uVar7;
    pvVar4 = memchr((void *)(uVar7 + (longlong)_Buf),0,_MaxCount);
    if (pvVar4 != (void *)0x0) {
      _MaxCount = (longlong)pvVar4 - (longlong)(uVar7 + (longlong)_Buf);
    }
    uVar7 = _MaxCount + 1 + uVar7;
    if (_MaxCount_00 < uVar7) break;
    lVar5 = -1;
    do {
      lVar6 = lVar5;
      lVar5 = lVar6 + 1;
    } while (*(char *)((longlong)_Buf + lVar5) != '\0');
    _Str = (char *)((longlong)_Buf + lVar6 + 2);
    pvVar4 = (void *)((longlong)_Buf + uVar7);
    if (pvVar4 == (void *)0x0) break;
    FUN_1436b58e0(lVar1,"got option=(%s) value=(%s)\n",_Buf,_Str);
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (*(char *)((longlong)_Buf + lVar5) != '\0');
    iVar2 = Curl_raw_nequal(_Buf,"blksize");
    if (iVar2 == 0) {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)((longlong)_Buf + lVar5) != '\0');
      iVar2 = Curl_raw_nequal(_Buf,"tsize");
      _Buf = pvVar4;
      if (iVar2 != 0) {
        lVar3 = strtol(_Str,(char **)0x0,10);
        FUN_1436b58e0(lVar1,"%s (%ld)\n","tsize parsed from OACK",lVar3);
        if (*(char *)(lVar1 + 0x450) == '\0') {
          if (lVar3 == 0) {
            FUN_1436b5820(lVar1,"invalid tsize -:%s:- value in OACK packet",_Str);
            return 0x47;
          }
          FUN_1436bed90(lVar1,(longlong)lVar3);
        }
      }
    }
    else {
      lVar3 = strtol(_Str,(char **)0x0,10);
      if (lVar3 == 0) {
        FUN_1436b5820(lVar1,"invalid blocksize value in OACK packet");
        return 0x47;
      }
      if (0xffb8 < lVar3) {
        FUN_1436b5820(lVar1,"%s (%d)","blksize is larger than max supported",0xffb8);
        return 0x47;
      }
      if (lVar3 < 8) {
        FUN_1436b5820(lVar1,"%s (%d)","blksize is smaller than min supported",8);
        return 0x47;
      }
      if (*(int *)(param_1 + 0x160) < lVar3) {
        FUN_1436b5820(lVar1,"%s (%ld)","server requested blksize larger than allocated",lVar3);
        return 0x47;
      }
      *(long *)(param_1 + 0x15c) = lVar3;
      FUN_1436b58e0(lVar1,"%s (%d) %s (%d)\n","blksize parsed from OACK",lVar3,"requested",
                    *(int *)(param_1 + 0x160));
      _Buf = pvVar4;
    }
  }
  FUN_1436b5820(lVar1,"Malformed ACK packet, rejecting");
  return 0x47;
}



// FUNCTION 1436d0870 FUN_1436d0870 body=554 status=ok
// SIG undefined FUN_1436d0870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436d0870(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  int *local_b0;
  int local_a8 [4];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  lVar1 = param_1[0xe3];
  local_b0 = local_a8;
  lVar2 = *param_1;
  local_a8[0] = 0x80;
  local_b8 = local_98;
  uVar4 = Ordinal_17(*(undefined8 *)(lVar1 + 0x18),*(undefined8 *)(lVar1 + 0x168),
                     *(int *)(lVar1 + 0x15c) + 4,0);
  *(undefined4 *)(lVar1 + 0x154) = uVar4;
  if (*(int *)(lVar1 + 0x150) == 0) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar1 + 0xd0),local_98,(longlong)local_a8[0]);
    *(int *)(lVar1 + 0x150) = local_a8[0];
  }
  iVar5 = *(int *)(lVar1 + 0x154);
  if (iVar5 < 4) {
    FUN_1436b5820(lVar2,"Received too short packet");
    *(undefined4 *)(lVar1 + 0xc) = 7;
  }
  else {
    puVar3 = *(undefined1 **)(lVar1 + 0x168);
    uVar7 = (uint)CONCAT11(*puVar3,puVar3[1]);
    *(uint *)(lVar1 + 0xc) = uVar7;
    if (uVar7 == 3) {
      if ((4 < iVar5) && ((short)(*(short *)(lVar1 + 0x48) + 1) == CONCAT11(puVar3[2],puVar3[3]))) {
        uVar7 = Curl_client_write(param_1,1,*(longlong *)(lVar1 + 0x168) + 4,(longlong)(iVar5 + -4))
        ;
        if (uVar7 != 0) {
          tftp_state_machine(lVar1,5);
          return (ulonglong)uVar7;
        }
        *(longlong *)(lVar2 + 0xb0) =
             *(longlong *)(lVar2 + 0xb0) + (longlong)(*(int *)(lVar1 + 0x154) + -4);
        FUN_1436bed80(lVar2,*(undefined8 *)(lVar2 + 0xb0));
      }
    }
    else if (uVar7 != 4) {
      if (uVar7 == 5) {
        *(uint *)(lVar1 + 8) = (uint)CONCAT11(puVar3[2],puVar3[3]);
        FUN_1436b58e0(lVar2,&DAT_145af6478,*(longlong *)(lVar1 + 0x168) + 4);
      }
      else if (uVar7 == 6) {
        uVar6 = FUN_1436d05a0(lVar1,puVar3 + 2,iVar5 + -2);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      else {
        FUN_1436b5820(lVar2,&DAT_145afa01c,"Internal error: Unexpected packet");
      }
    }
    iVar5 = FUN_1436befa0(param_1);
    if (iVar5 != 0) {
      tftp_state_machine(lVar1,5);
      return 0x2a;
    }
  }
  return 0;
}



// FUNCTION 1436d0aa0 tftp_rx body=834 status=ok
// SIG undefined tftp_rx(void)

undefined8 tftp_rx(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar2 = **(undefined8 **)(param_1 + 4);
  if (param_2 == 3) {
    sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x5a) + 2),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x5a) + 3));
    if ((short)(*(short *)(param_1 + 0x12) + 1) == sVar3) {
      param_1[8] = 0;
    }
    else {
      if (*(short *)(param_1 + 0x12) != sVar3) {
        FUN_1436b58e0(uVar2,"Received unexpected DATA packet block %d, expecting block %d\n",sVar3);
        return 0;
      }
      FUN_1436b58e0(uVar2,"Received last DATA packet block %d again.\n",sVar3);
    }
    *(short *)(param_1 + 0x12) = sVar3;
    **(undefined1 **)(param_1 + 0x5c) = 0;
    *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 4;
    uVar1 = *(undefined2 *)(param_1 + 0x12);
    *(char *)(*(longlong *)(param_1 + 0x5c) + 2) = (char)((ushort)uVar1 >> 8);
    *(char *)(*(longlong *)(param_1 + 0x5c) + 3) = (char)uVar1;
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),4,0,
                       param_1 + 0x34,param_1[0x54]);
    if (-1 < iVar4) {
      uVar5 = 1;
      if ((longlong)(int)param_1[0x55] < (longlong)(int)param_1[0x57] + 4) {
        uVar5 = 3;
      }
      *param_1 = uVar5;
      _time64((__time64_t *)(param_1 + 0x10));
      return 0;
    }
  }
  else {
    if (param_2 == 5) {
      **(undefined1 **)(param_1 + 0x5c) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 5;
      uVar1 = *(undefined2 *)(param_1 + 0x12);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 2) = (char)((ushort)uVar1 >> 8);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 3) = (char)uVar1;
      Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),4,0,param_1 + 0x34,
                 param_1[0x54]);
      *param_1 = 3;
      return 0;
    }
    if (param_2 == 6) {
      *(undefined2 *)(param_1 + 0x12) = 0;
      param_1[8] = 0;
      **(undefined1 **)(param_1 + 0x5c) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 4;
      uVar1 = *(undefined2 *)(param_1 + 0x12);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 2) = (char)((ushort)uVar1 >> 8);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 3) = (char)uVar1;
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),4,0,
                         param_1 + 0x34,param_1[0x54]);
      if (-1 < iVar4) {
        *param_1 = 1;
        _time64((__time64_t *)(param_1 + 0x10));
        return 0;
      }
    }
    else {
      if (param_2 != 7) {
        FUN_1436b5820(uVar2,&DAT_145afa01c,"tftp_rx: internal error");
        return 0x47;
      }
      param_1[8] = param_1[8] + 1;
      FUN_1436b58e0(uVar2,"Timeout waiting for block %d ACK.  Retries = %d\n",
                    *(short *)(param_1 + 0x12) + 1,param_1[8]);
      if ((int)param_1[10] < (int)param_1[8]) {
        param_1[2] = 0xffffff9d;
        *param_1 = 3;
        return 0;
      }
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),4,0,
                         param_1 + 0x34,param_1[0x54]);
      if (-1 < iVar4) {
        return 0;
      }
    }
  }
  uVar5 = Ordinal_111();
  uVar6 = FUN_1436a7be0(*(undefined8 *)(param_1 + 4),uVar5);
  FUN_1436b5820(uVar2,&DAT_145afa01c,uVar6);
  return 0x37;
}



// FUNCTION 1436d0df0 FUN_1436d0df0 body=1158 status=ok
// SIG undefined FUN_1436d0df0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436d0df0(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  char *pcVar13;
  ulonglong uVar14;
  char *pcVar16;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  char local_78 [64];
  ulonglong local_38;
  ulonglong uVar15;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  pcVar16 = "netascii";
  uVar15 = 0;
  uVar14 = 0;
  lVar2 = **(longlong **)(param_1 + 4);
  if (*(char *)(lVar2 + 0x443) == '\0') {
    pcVar16 = "octet";
  }
  switch(param_2) {
  case 0:
  case 7:
    param_1[8] = param_1[8] + 1;
    if ((int)param_1[10] < (int)param_1[8]) {
      param_1[2] = 0xffffff9e;
      *param_1 = 3;
      uVar14 = 0;
    }
    else {
      uVar14 = uVar15;
      uVar12 = uVar15;
      if (*(char *)(lVar2 + 0x450) == '\0') {
        do {
          *(char *)(uVar12 + *(longlong *)(param_1 + 0x5c)) = (char)uVar14;
          uVar10 = (int)uVar14 + 1;
          uVar14 = (ulonglong)uVar10;
          uVar12 = uVar12 + 1;
        } while ((int)uVar10 < 2);
      }
      else {
        **(undefined1 **)(param_1 + 0x5c) = 0;
        *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 2;
        *(longlong *)(**(longlong **)(param_1 + 4) + 0x188) = *(longlong *)(param_1 + 0x5c) + 4;
        if (*(longlong *)(lVar2 + 0x8a08) != -1) {
          FUN_1436bedd0(lVar2);
        }
      }
      lVar5 = curl_easy_unescape(lVar2,*(longlong *)(**(longlong **)(param_1 + 4) + 0x89d8) + 1,0,0)
      ;
      if (lVar5 == 0) {
        uVar14 = 0x1b;
      }
      else {
        local_88 = 0;
        local_98 = 0;
        local_90 = pcVar16;
        curl_msnprintf(*(longlong *)(param_1 + 0x5c) + 2,(longlong)(int)param_1[0x57],"%s%c%s%c",
                       lVar5);
        lVar11 = -1;
        do {
          lVar11 = lVar11 + 1;
        } while (pcVar16[lVar11] != '\0');
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(char *)(lVar5 + 1 + lVar7) != '\0');
        uVar14 = lVar7 + 5 + lVar11;
        if (*(char *)(lVar2 + 0x2dc) == '\0') {
          if ((*(char *)(lVar2 + 0x450) == '\0') || (*(longlong *)(lVar2 + 0x8a08) == -1)) {
            local_78[0] = '0';
            local_78[1] = '\0';
          }
          else {
            curl_msnprintf(local_78,0x40,"%I64d");
          }
          lVar6 = FUN_1436d0530(param_1,uVar14,*(longlong *)(param_1 + 0x5c) + uVar14,"tsize");
          lVar6 = uVar14 + lVar6;
          lVar11 = -1;
          do {
            lVar7 = lVar11;
            lVar11 = lVar7 + 1;
          } while (local_78[lVar7 + 1] != '\0');
          uVar14 = uVar15;
          if ((ulonglong)(lVar7 + 2 + lVar6) <= (ulonglong)(longlong)(int)param_1[0x57]) {
            pcVar16 = local_78;
            pcVar13 = (char *)(*(longlong *)(param_1 + 0x5c) + lVar6);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar13 = cVar1;
              pcVar13 = pcVar13 + 1;
            } while (cVar1 != '\0');
            lVar11 = -1;
            do {
              lVar7 = lVar11;
              lVar11 = lVar7 + 1;
            } while (local_78[lVar7 + 1] != '\0');
            uVar14 = lVar7 + 2;
          }
          lVar6 = lVar6 + uVar14;
          curl_msnprintf(local_78,0x40,&DAT_145af963c,param_1[0x58]);
          lVar11 = FUN_1436d0530(param_1,lVar6,*(longlong *)(param_1 + 0x5c) + lVar6,"blksize");
          lVar6 = lVar6 + lVar11;
          lVar11 = -1;
          do {
            lVar7 = lVar11;
            lVar11 = lVar7 + 1;
          } while (local_78[lVar7 + 1] != '\0');
          uVar14 = uVar15;
          if ((ulonglong)(lVar7 + 2 + lVar6) <= (ulonglong)(longlong)(int)param_1[0x57]) {
            pcVar16 = local_78;
            pcVar13 = (char *)(*(longlong *)(param_1 + 0x5c) + lVar6);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar13 = cVar1;
              pcVar13 = pcVar13 + 1;
            } while (cVar1 != '\0');
            lVar11 = -1;
            do {
              lVar7 = lVar11;
              lVar11 = lVar7 + 1;
            } while (local_78[lVar7 + 1] != '\0');
            uVar14 = lVar7 + 2;
          }
          lVar6 = lVar6 + uVar14;
          curl_msnprintf(local_78,0x40,&DAT_145af963c,param_1[9]);
          lVar11 = FUN_1436d0530(param_1,lVar6,*(longlong *)(param_1 + 0x5c) + lVar6,"timeout");
          lVar6 = lVar6 + lVar11;
          lVar11 = -1;
          do {
            lVar8 = lVar11 + 1;
            lVar7 = lVar11 + 1;
            lVar11 = lVar8;
          } while (local_78[lVar7] != '\0');
          uVar14 = uVar15;
          if ((ulonglong)(lVar6 + 1 + lVar8) <= (ulonglong)(longlong)(int)param_1[0x57]) {
            pcVar16 = local_78;
            pcVar13 = (char *)(*(longlong *)(param_1 + 0x5c) + lVar6);
            do {
              cVar1 = *pcVar16;
              pcVar16 = pcVar16 + 1;
              *pcVar13 = cVar1;
              pcVar13 = pcVar13 + 1;
              lVar11 = -1;
            } while (cVar1 != '\0');
            do {
              lVar7 = lVar11;
              lVar11 = lVar7 + 1;
            } while (local_78[lVar7 + 1] != '\0');
            uVar14 = lVar7 + 2;
          }
          uVar14 = lVar6 + uVar14;
        }
        local_90 = (char *)CONCAT44(local_90._4_4_,
                                    *(undefined4 *)
                                     (*(longlong *)(*(longlong *)(param_1 + 4) + 0x58) + 0x10));
        local_98 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 4) + 0x58) + 0x20);
        iVar3 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),
                           uVar14 & 0xffffffff,0);
        if ((longlong)iVar3 != uVar14) {
          uVar4 = Ordinal_111();
          uVar9 = FUN_1436a7be0(*(undefined8 *)(param_1 + 4),uVar4);
          FUN_1436b5820(lVar2,&DAT_145afa01c,uVar9);
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
        uVar14 = uVar15;
      }
    }
    break;
  default:
    FUN_1436b5820(lVar2,"tftp_send_first: internal error");
    uVar14 = uVar15;
    break;
  case 3:
    uVar9 = 3;
    goto LAB_1436d1235;
  case 4:
    uVar10 = tftp_connect_for_tx(param_1,4);
    uVar14 = (ulonglong)uVar10;
    break;
  case 5:
    *param_1 = 3;
    break;
  case 6:
    uVar9 = 6;
    if (*(char *)(lVar2 + 0x450) != '\0') {
      uVar10 = tftp_connect_for_tx(param_1,6);
      return (ulonglong)uVar10;
    }
LAB_1436d1235:
    uVar10 = tftp_connect_for_rx(param_1,uVar9);
    uVar14 = (ulonglong)uVar10;
  }
  return uVar14;
}



// FUNCTION 1436d12a0 FUN_1436d12a0 body=403 status=ok
// SIG undefined FUN_1436d12a0(void)

undefined8 FUN_1436d12a0(int *param_1)

{
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  
  iVar2 = *param_1;
  _time64((__time64_t *)(param_1 + 0xc));
  iVar1 = FUN_1436b6c20(**(undefined8 **)(param_1 + 4),0,iVar2 == 0);
  if (iVar1 < 0) {
    FUN_1436b5820(**(undefined8 **)(param_1 + 4),"Connection time-out");
    return 0x1c;
  }
  if (iVar2 == 0) {
    uVar3 = (longlong)(iVar1 + 500) / 1000;
    *(ulonglong *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xc) + uVar3;
    iVar2 = (int)uVar3 / 5;
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    param_1[10] = iVar2;
    iVar2 = (int)((longlong)((ulonglong)(uint)((int)uVar3 >> 0x1f) << 0x20 | uVar3 & 0xffffffff) /
                 (longlong)iVar2);
    param_1[9] = iVar2;
    if (iVar2 < 1) {
      param_1[9] = 1;
    }
  }
  else {
    if (iVar1 < 1) {
      uVar3 = 0xe10;
    }
    else {
      uVar3 = (longlong)(iVar1 + 500) / 1000;
    }
    *(ulonglong *)(param_1 + 0xe) = *(longlong *)(param_1 + 0xc) + uVar3;
    param_1[10] = (int)uVar3 / 5;
  }
  iVar2 = param_1[10];
  if (param_1[10] < 3) {
    iVar2 = 3;
  }
  if (0x32 < iVar2) {
    iVar2 = 0x32;
  }
  param_1[10] = iVar2;
  iVar1 = (int)((longlong)uVar3 / (longlong)iVar2);
  if (iVar1 < 1) {
    iVar1 = 1;
  }
  param_1[9] = iVar1;
  FUN_1436b58e0(**(undefined8 **)(param_1 + 4),
                "set timeouts for state %d; Total %ld, retry %d maxtry %d\n",*param_1,
                param_1[0xe] - param_1[0xc],iVar1,iVar2);
  _time64((__time64_t *)(param_1 + 0x10));
  return 0;
}



// FUNCTION 1436d1440 tftp_state_machine body=122 status=ok
// SIG undefined tftp_state_machine(void)

undefined8 tftp_state_machine(int *param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    uVar2 = FUN_1436d0df0();
    return uVar2;
  }
  if (iVar1 == 1) {
    uVar2 = tftp_rx();
    return uVar2;
  }
  if (iVar1 == 2) {
    uVar2 = FUN_1436d15c0();
    return uVar2;
  }
  if (iVar1 != 3) {
    FUN_1436b5820(**(undefined8 **)(param_1 + 4),&DAT_145afa01c,"Internal state machine error");
    return 0x47;
  }
  FUN_1436b58e0(**(undefined8 **)(param_1 + 4),&DAT_145af6478,"TFTP finished");
  return 0;
}



// FUNCTION 1436d14c0 FUN_1436d14c0 body=106 status=ok
// SIG undefined FUN_1436d14c0(void)

undefined8 FUN_1436d14c0(int param_1)

{
  if (param_1 != -100) {
    switch(param_1) {
    case 0:
    case 4:
      return 0x47;
    case 1:
      return 0x44;
    case 2:
      return 0x45;
    case 3:
      return 0x46;
    case 5:
      return 0x48;
    case 6:
      return 0x49;
    case 7:
      return 0x4a;
    case -99:
      return 0x1c;
    case -0x62:
      return 7;
    default:
      return 0x2a;
    }
  }
  return 0;
}



// FUNCTION 1436d15c0 FUN_1436d15c0 body=898 status=ok
// SIG undefined FUN_1436d15c0(void)

undefined8 FUN_1436d15c0(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  longlong lVar2;
  short sVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = 0;
  lVar2 = **(longlong **)(param_1 + 4);
  if (param_2 != 4) {
    if (param_2 == 5) {
      *param_1 = 3;
      **(undefined1 **)(param_1 + 0x5c) = 0;
      *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 5;
      uVar1 = *(undefined2 *)(param_1 + 0x12);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 2) = (char)((ushort)uVar1 >> 8);
      *(char *)(*(longlong *)(param_1 + 0x5c) + 3) = (char)uVar1;
      Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),4,0,param_1 + 0x34,
                 param_1[0x54]);
      goto LAB_1436d1742;
    }
    if (param_2 != 6) {
      if (param_2 != 7) {
        FUN_1436b5820(lVar2,"tftp_tx: internal error, event: %i",param_2);
        return 0;
      }
      param_1[8] = param_1[8] + 1;
      FUN_1436b58e0(lVar2,"Timeout waiting for block %d ACK.  Retries = %d\n",
                    *(short *)(param_1 + 0x12) + 1,param_1[8]);
      if ((int)param_1[10] < (int)param_1[8]) {
        param_1[2] = 0xffffff9d;
        *param_1 = 3;
        return 0;
      }
      iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),
                         param_1[0x56] + 4,0,param_1 + 0x34,param_1[0x54]);
      if (iVar4 < 0) goto LAB_1436d16a2;
      goto LAB_1436d1921;
    }
  }
  if (param_2 == 4) {
    sVar3 = CONCAT11(*(undefined1 *)(*(longlong *)(param_1 + 0x5a) + 2),
                     *(undefined1 *)(*(longlong *)(param_1 + 0x5a) + 3));
    if ((sVar3 != *(short *)(param_1 + 0x12)) &&
       ((*(short *)(param_1 + 0x12) != 0 || (sVar3 != -1)))) {
      FUN_1436b58e0(lVar2,"Received ACK for block %d, expecting %d\n");
      param_1[8] = param_1[8] + 1;
      if ((int)param_1[8] <= (int)param_1[10]) {
        iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),
                           param_1[0x56] + 4,0,param_1 + 0x34,param_1[0x54]);
        if (iVar4 < 0) {
          uVar5 = Ordinal_111();
          uVar6 = FUN_1436a7be0(*(undefined8 *)(param_1 + 4),uVar5);
          FUN_1436b5820(lVar2,&DAT_145afa01c,uVar6);
          uVar6 = 0x37;
        }
        return uVar6;
      }
      FUN_1436b5820(lVar2,"tftp_tx: giving up waiting for block %d ack",
                    *(undefined2 *)(param_1 + 0x12));
      return 0x37;
    }
    _time64((__time64_t *)(param_1 + 0x10));
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 1;
  }
  else {
    *(undefined2 *)(param_1 + 0x12) = 1;
  }
  param_1[8] = 0;
  **(undefined1 **)(param_1 + 0x5c) = 0;
  *(undefined1 *)(*(longlong *)(param_1 + 0x5c) + 1) = 3;
  uVar1 = *(undefined2 *)(param_1 + 0x12);
  *(char *)(*(longlong *)(param_1 + 0x5c) + 2) = (char)((ushort)uVar1 >> 8);
  *(char *)(*(longlong *)(param_1 + 0x5c) + 3) = (char)uVar1;
  if ((*(ushort *)(param_1 + 0x12) < 2) || ((int)param_1[0x57] <= (int)param_1[0x56])) {
    uVar6 = FUN_1436b81a0(*(undefined8 *)(param_1 + 4),param_1[0x57],param_1 + 0x56);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    iVar4 = Ordinal_20(*(undefined8 *)(param_1 + 6),*(undefined8 *)(param_1 + 0x5c),
                       param_1[0x56] + 4,0,param_1 + 0x34,param_1[0x54]);
    if (iVar4 < 0) {
LAB_1436d16a2:
      uVar5 = Ordinal_111();
      uVar6 = FUN_1436a7be0(*(undefined8 *)(param_1 + 4),uVar5);
      FUN_1436b5820(lVar2,&DAT_145afa01c,uVar6);
      return 0x37;
    }
    *(longlong *)(lVar2 + 0xb8) = *(longlong *)(lVar2 + 0xb8) + (longlong)(int)param_1[0x56];
LAB_1436d1921:
    FUN_1436bedc0(lVar2,*(undefined8 *)(lVar2 + 0xb8));
    return 0;
  }
LAB_1436d1742:
  *param_1 = 3;
  return 0;
}



// FUNCTION 1436d1950 FUN_1436d1950 body=1813 status=ok
// SIG undefined FUN_1436d1950(void)

ulonglong FUN_1436d1950(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar12;
  char *pcVar13;
  uint uVar14;
  longlong *plVar15;
  longlong *local_res8;
  uint local_res10;
  undefined4 local_res18 [2];
  int local_res20;
  ulonglong local_80;
  undefined8 local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong lVar11;
  
  lVar1 = *param_1;
  uVar12 = 0;
  *param_2 = 1;
  local_80 = 0;
  local_68 = 0;
  local_res20 = 0;
  local_res18[0] = 3;
  local_78 = 0;
  local_70 = 0;
  local_res8 = param_1;
  FUN_1436b58e0(lVar1,"LDAP local: LDAP Vendor = %s ; LDAP Version = %d\n","Microsoft Corporation.",
                0x1fe);
  FUN_1436b58e0(lVar1,"LDAP local: %s\n",*(undefined8 *)(lVar1 + 0x670));
  lVar3 = (*(code *)PTR_calloc_1467dcc78)();
  local_58 = 0;
  if (lVar3 == 0) {
    uVar2 = 0x5a;
  }
  else {
    local_res10 = FUN_1436d20f0(param_1,lVar3);
    if (local_res10 != 0) {
      _ldap_free_urldesc(lVar3);
      lVar3 = 0;
    }
    uVar2 = local_res10;
    local_58 = lVar3;
    if (local_res10 == 0) {
      pcVar13 = "cleartext";
      uVar14 = *(uint *)(param_1[0x7e] + 0x78) & 1;
      if (uVar14 != 0) {
        pcVar13 = "encrypted";
      }
      FUN_1436b58e0(lVar1,"LDAP local: trying to establish %s connection\n",pcVar13);
      lVar5 = param_1[0x17];
      param_1 = local_res8;
      uVar2 = local_res10;
      if (lVar5 == 0) {
        uVar9 = 0x1b;
        local_80 = uVar12;
        goto LAB_1436d1f6f;
      }
      uVar9 = uVar12;
      uVar6 = uVar12;
      if (*(char *)((longlong)local_res8 + 0x3bf) != '\0') {
        uVar9 = local_res8[0x30];
        uVar6 = local_res8[0x31];
        if ((uVar9 == 0) || (uVar6 == 0)) {
          uVar9 = 0x1b;
          local_80 = 0;
          goto LAB_1436d1f6f;
        }
      }
      Ordinal_211(0,0x11,local_res18);
      if ((uVar14 == 0) &&
         (local_80 = Ordinal_143(lVar5,(int)local_res8[0x21]), param_1 = local_res8, local_80 == 0))
      {
        FUN_1436b5820(lVar1,"LDAP local: Cannot connect to %s:%ld",local_res8[0x18],
                      (int)local_res8[0x21]);
        uVar9 = 7;
        uVar2 = local_res10;
        goto LAB_1436d1f6f;
      }
      Ordinal_211(local_80,0x11,local_res18);
      uVar2 = Ordinal_60(local_80,uVar9,uVar6);
      if (uVar14 == 0) {
        if (uVar2 != 0) {
          local_res18[0] = 2;
          Ordinal_211(local_80,0x11,local_res18);
          uVar2 = Ordinal_60(local_80,uVar9,uVar6);
          goto LAB_1436d1b85;
        }
      }
      else {
LAB_1436d1b85:
        if (uVar2 != 0) {
          uVar4 = Ordinal_22(uVar2);
          FUN_1436b5820(lVar1,"LDAP local: ldap_simple_bind_s %s",uVar4);
          uVar9 = 0x26;
          param_1 = local_res8;
          goto LAB_1436d1f6f;
        }
      }
      uVar2 = Ordinal_50(local_80,*(undefined8 *)(lVar3 + 0x10),*(undefined4 *)(lVar3 + 0x20),
                         *(undefined8 *)(lVar3 + 0x28),*(undefined8 *)(lVar3 + 0x18),0,&local_68);
      local_res10 = uVar2;
      if ((uVar2 & 0xfffffffb) == 0) {
        local_res20 = 0;
        lVar3 = Ordinal_26(local_80,local_68);
        param_1 = local_res8;
        uVar9 = uVar12;
        local_60 = lVar3;
        if (lVar3 != 0) {
          while( true ) {
            local_res8 = (longlong *)0x0;
            local_60 = lVar3;
            lVar5 = Ordinal_30(local_80,lVar3);
            if (lVar5 == 0) {
              Ordinal_200(0);
              uVar9 = 0x1b;
              uVar2 = local_res10;
              goto LAB_1436d1f6f;
            }
            lVar10 = -1;
            do {
              lVar11 = lVar10;
              lVar10 = lVar11 + 1;
            } while (*(char *)(lVar5 + lVar10) != '\0');
            uVar6 = Curl_client_write(param_1,1,&DAT_145b70190);
            uVar9 = uVar6 & 0xffffffff;
            if ((int)uVar6 != 0) break;
            uVar2 = Curl_client_write(param_1,1,lVar5,lVar10);
            uVar9 = (ulonglong)uVar2;
            if (uVar2 != 0) break;
            uVar2 = Curl_client_write(param_1,1,&DAT_145af0af0);
            uVar9 = (ulonglong)uVar2;
            if (uVar2 != 0) break;
            uVar12 = uVar12 + lVar11 + 6;
            Ordinal_200();
            lVar5 = Ordinal_32(local_80,lVar3,&local_res8);
            while (lVar5 != 0) {
              if (lVar5 == 0) {
                if (local_res8 != (longlong *)0x0) {
                  Ordinal_301(local_res8,0);
                }
                uVar9 = 0x1b;
                uVar2 = local_res10;
                goto LAB_1436d1f6f;
              }
              uVar6 = 0xffffffffffffffff;
              do {
                uVar6 = uVar6 + 1;
              } while (*(char *)(lVar5 + uVar6) != '\0');
              plVar7 = (longlong *)Ordinal_35(local_80,lVar3,lVar5);
              if (plVar7 != (longlong *)0x0) {
                lVar3 = *plVar7;
                plVar15 = plVar7;
                while (lVar3 != 0) {
                  uVar8 = Curl_client_write(param_1,1,&DAT_145b07094);
                  uVar9 = uVar8 & 0xffffffff;
                  if ((int)uVar8 != 0) {
LAB_1436d1f40:
                    Ordinal_79(plVar7);
                    Ordinal_200(lVar5);
joined_r0x0001436d1f59:
                    uVar2 = local_res10;
                    if (local_res8 != (longlong *)0x0) {
                      Ordinal_301(local_res8,0);
                      uVar2 = local_res10;
                    }
                    goto LAB_1436d1f6f;
                  }
                  uVar8 = Curl_client_write(param_1,1,lVar5,uVar6);
                  uVar9 = uVar8 & 0xffffffff;
                  if ((int)uVar8 != 0) goto LAB_1436d1f40;
                  uVar2 = Curl_client_write(param_1,1,&DAT_145b19618,2);
                  uVar9 = (ulonglong)uVar2;
                  if (uVar2 != 0) goto LAB_1436d1f40;
                  lVar3 = uVar12 + 3 + uVar6;
                  if (uVar6 < 8) {
LAB_1436d1e46:
                    uVar2 = Curl_client_write(param_1,1,*(undefined8 *)((undefined4 *)*plVar15 + 2),
                                              *(undefined4 *)*plVar15);
                    uVar9 = (ulonglong)uVar2;
                    if (uVar2 == 0) {
                      lVar3 = lVar3 + (ulonglong)*(uint *)*plVar15;
                      goto LAB_1436d1e6f;
                    }
                    goto LAB_1436d1f40;
                  }
                  lVar10 = 0;
                  do {
                    pcVar13 = ";binary" + lVar10;
                    lVar10 = lVar10 + 1;
                    if (*pcVar13 != *(char *)(uVar6 + lVar5 + -8 + lVar10)) goto LAB_1436d1e46;
                  } while (lVar10 != 8);
                  uVar12 = Curl_base64_encode(lVar1,*(undefined8 *)((undefined4 *)*plVar15 + 2),
                                              *(undefined4 *)*plVar15,&local_78,&local_70);
                  uVar9 = uVar12 & 0xffffffff;
                  if ((int)uVar12 != 0) goto LAB_1436d1f40;
                  if (local_70 != 0) {
                    uVar2 = Curl_client_write(param_1,1,local_78);
                    uVar9 = (ulonglong)uVar2;
                    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_78);
                    if (uVar2 != 0) goto LAB_1436d1f40;
                    lVar3 = lVar3 + local_70;
                  }
LAB_1436d1e6f:
                  uVar2 = Curl_client_write(param_1,1,&DAT_145af0af0);
                  uVar9 = (ulonglong)uVar2;
                  if (uVar2 != 0) {
                    Ordinal_79(plVar7);
                    Ordinal_200(lVar5);
                    goto joined_r0x0001436d1f59;
                  }
                  plVar15 = plVar15 + 1;
                  uVar12 = lVar3 + 1;
                  lVar3 = *plVar15;
                }
                Ordinal_79(plVar7);
              }
              Ordinal_200(lVar5);
              uVar14 = Curl_client_write(param_1,1,&DAT_145af0af0);
              uVar9 = (ulonglong)uVar14;
              uVar2 = local_res10;
              if (uVar14 != 0) goto LAB_1436d1f6f;
              uVar12 = uVar12 + 1;
              FUN_1436bed80(lVar1,uVar12);
              lVar3 = local_60;
              lVar5 = Ordinal_33(local_80,local_60,local_res8);
            }
            if (local_res8 != (longlong *)0x0) {
              Ordinal_301(local_res8,0);
            }
            lVar3 = Ordinal_27(local_80,lVar3);
            local_res20 = local_res20 + 1;
            uVar2 = local_res10;
            local_60 = lVar3;
            if (lVar3 == 0) goto LAB_1436d1f6f;
          }
          Ordinal_200(lVar5);
          uVar2 = local_res10;
        }
      }
      else {
        uVar4 = Ordinal_22(uVar2);
        FUN_1436b5820(lVar1,"LDAP remote: %s",uVar4);
        uVar9 = 0x27;
        param_1 = local_res8;
      }
      goto LAB_1436d1f6f;
    }
  }
  uVar4 = Ordinal_22(uVar2);
  FUN_1436b5820(lVar1,"LDAP local: %s",uVar4);
  uVar9 = 0x3e;
  local_80 = uVar12;
LAB_1436d1f6f:
  if (local_68 != 0) {
    Ordinal_41();
  }
  if (uVar2 == 4) {
    FUN_1436b58e0(lVar1,"There are more than %d entries\n",local_res20);
  }
  if (local_58 != 0) {
    _ldap_free_urldesc(local_58);
  }
  if (local_80 != 0) {
    Ordinal_46(local_80);
  }
  FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  return uVar9;
}



// FUNCTION 1436d2070 _ldap_free_urldesc body=117 status=ok
// SIG undefined _ldap_free_urldesc(void)

void _ldap_free_urldesc(longlong param_1)

{
  ulonglong uVar1;
  
  if (param_1 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x28));
    if (*(longlong *)(param_1 + 0x18) != 0) {
      uVar1 = 0;
      if (*(longlong *)(param_1 + 0x38) != 0) {
        do {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)
                    (*(undefined8 *)(*(longlong *)(param_1 + 0x18) + uVar1 * 8));
          uVar1 = uVar1 + 1;
        } while (uVar1 < *(ulonglong *)(param_1 + 0x38));
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x18));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return;
}



// FUNCTION 1436d20f0 FUN_1436d20f0 body=760 status=ok
// SIG undefined FUN_1436d20f0(void)

ulonglong FUN_1436d20f0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  char *_Str;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined1 local_res8 [8];
  
  uVar8 = 0;
  lVar3 = *param_1;
  if ((((lVar3 == 0) || (*(char **)(lVar3 + 0x89d8) == (char *)0x0)) ||
      (**(char **)(lVar3 + 0x89d8) != '/')) ||
     (iVar1 = Curl_raw_nequal(&DAT_145b69fa8,*(undefined8 *)(lVar3 + 0x670),4), iVar1 == 0)) {
    return 0x15;
  }
  *(undefined4 *)(param_2 + 4) = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)((longlong)param_1 + 0x10c);
  *param_2 = param_1[0x17];
  _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(*(longlong *)(*param_1 + 0x89d8) + 1);
  if (_Str == (char *)0x0) {
    return 0x5a;
  }
  pcVar2 = strchr(_Str,0x3f);
  if (pcVar2 != (char *)0x0) {
    *pcVar2 = '\0';
    pcVar2 = pcVar2 + 1;
  }
  if (*_Str != '\0') {
    lVar3 = curl_easy_unescape(*param_1,_Str,0,0);
    if (lVar3 == 0) {
      uVar8 = 0x5a;
      goto LAB_1436d23ba;
    }
    param_2[2] = lVar3;
  }
  if (pcVar2 == (char *)0x0) goto LAB_1436d23ba;
  pcVar4 = strchr(pcVar2,0x3f);
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
    pcVar4 = pcVar4 + 1;
  }
  if (*pcVar2 == '\0') {
LAB_1436d230f:
    if (pcVar4 == (char *)0x0) goto LAB_1436d23ba;
    pcVar2 = strchr(pcVar4,0x3f);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      pcVar2 = pcVar2 + 1;
    }
    if (*pcVar4 != '\0') {
      iVar1 = str2scope(pcVar4);
      *(int *)(param_2 + 4) = iVar1;
      if (iVar1 == -1) {
        uVar8 = 0x15;
        goto LAB_1436d23ba;
      }
    }
    if (pcVar2 == (char *)0x0) goto LAB_1436d23ba;
    pcVar4 = strchr(pcVar2,0x3f);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
      pcVar4 = pcVar4 + 1;
    }
    if (*pcVar2 != '\0') {
      lVar3 = curl_easy_unescape(*param_1,pcVar2,0,0);
      if (lVar3 == 0) goto LAB_1436d2358;
      param_2[5] = lVar3;
    }
    uVar8 = 0;
    if ((pcVar4 != (char *)0x0) && (uVar8 = 0, *pcVar4 == '\0')) {
      uVar8 = 0x15;
    }
  }
  else {
    uVar7 = 1;
    for (pcVar5 = strchr(pcVar2,0x2c); pcVar5 != (char *)0x0; pcVar5 = strchr(pcVar5 + 1,0x2c)) {
      uVar7 = uVar7 + 1;
    }
    lVar3 = (*(code *)PTR_calloc_1467dcc78)(uVar7,8);
    if (lVar3 != 0) {
      lVar6 = Curl_strtok_r(pcVar2,&DAT_145b0a66c,local_res8);
      for (uVar9 = uVar8; (lVar6 != 0 && (uVar9 < uVar7)); uVar9 = uVar9 + 1) {
        *(longlong *)(lVar3 + uVar9 * 8) = lVar6;
        lVar6 = Curl_strtok_r(0,&DAT_145b0a66c,local_res8);
      }
      lVar6 = (*(code *)PTR_calloc_1467dcc78)(uVar7 + 1,8);
      param_2[3] = lVar6;
      if (lVar6 != 0) {
        uVar9 = uVar8;
        if (uVar7 != 0) {
          do {
            lVar6 = curl_easy_unescape(*param_1,*(undefined8 *)(lVar3 + uVar9 * 8),0,0);
            if ((lVar6 == 0) ||
               (*(longlong *)(param_2[3] + uVar9 * 8) = lVar6,
               *(longlong *)(param_2[3] + uVar9 * 8) == 0)) goto LAB_1436d234f;
            param_2[7] = param_2[7] + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < uVar7);
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
        goto LAB_1436d230f;
      }
LAB_1436d234f:
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
    }
LAB_1436d2358:
    uVar8 = 0x5a;
  }
LAB_1436d23ba:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
  return uVar8;
}



// FUNCTION 1436d23f0 str2scope body=148 status=ok
// SIG undefined str2scope(void)

undefined8 str2scope(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = curl_strequal(param_1,&DAT_145b701c0);
  if (iVar1 == 0) {
    iVar1 = curl_strequal(param_1,"onetree");
    if (iVar1 == 0) {
      iVar1 = curl_strequal(param_1,&DAT_145b014b4);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = curl_strequal(param_1,&DAT_145b701d0);
      if (iVar1 != 0) {
        return 2;
      }
      iVar1 = curl_strequal(param_1,"subtree");
      uVar2 = 0xffffffff;
      if (iVar1 != 0) {
        uVar2 = 2;
      }
      return uVar2;
    }
  }
  return 1;
}



// FUNCTION 1436d2490 FUN_1436d2490 body=988 status=ok
// SIG undefined FUN_1436d2490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436d2490(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined *local_e0;
  int local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c0;
  int local_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined1 local_80 [24];
  ulonglong local_68;
  int local_58;
  undefined4 uStack_54;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  lVar2 = *param_1;
  uVar10 = 0;
  local_b0 = 0;
  bVar3 = false;
  lVar1 = lVar2 + 0x7e8;
  uVar9 = curlx_tvnow();
  *param_2 = 1;
  FUN_1436b4630(lVar2);
  FUN_1436bee00(lVar2);
  if (*(char *)(lVar2 + 0x450) == '\0') {
    local_b8 = *(int *)(*(longlong *)(*param_1 + 0x198) + 0x10);
    iVar6 = _fstat64(local_b8,local_80);
    uVar14 = uVar10;
    if (iVar6 != -1) {
      bVar3 = true;
      *(int *)(lVar2 + 0x8a84) = local_58;
      uVar14 = local_68;
      if (((*(longlong *)(lVar2 + 0x89e8) == 0) && (*(int *)(lVar2 + 0x370) != 0)) &&
         (cVar5 = FUN_1436b8670(lVar2,(longlong)local_58), cVar5 == '\0')) {
        *param_2 = 1;
        return 0;
      }
    }
    if (((*(char *)(lVar2 + 0x44f) == '\0') || (*(char *)(lVar2 + 0x44c) == '\0')) || (!bVar3)) {
      FUN_1436d2a70(param_1);
      if (*(longlong *)(lVar2 + 0x89f0) < 0) {
        if (!bVar3) {
          FUN_1436b5820(lVar2,"Can\'t get the size of file.");
          return 0x1a;
        }
        *(ulonglong *)(lVar2 + 0x89f0) = *(longlong *)(lVar2 + 0x89f0) + local_68;
      }
      if ((longlong)uVar14 < *(longlong *)(lVar2 + 0x89f0)) {
        FUN_1436b5820(lVar2,"failed to resume file:// transfer");
      }
      else {
        lVar15 = uVar14 - *(longlong *)(lVar2 + 0x89f0);
        if (0 < *(longlong *)(lVar2 + 0xa0)) {
          lVar15 = *(longlong *)(lVar2 + 0xa0);
        }
        if ((bVar3) && (lVar15 != 0)) {
          bVar4 = true;
        }
        else {
          bVar4 = false;
        }
        if (bVar3) {
          FUN_1436bed90(lVar2,lVar15);
        }
        iVar6 = local_b8;
        if ((*(longlong *)(lVar2 + 0x89f0) == 0) ||
           (lVar11 = _lseeki64(local_b8,*(longlong *)(lVar2 + 0x89f0),0),
           *(longlong *)(lVar2 + 0x89f0) == lVar11)) {
          FUN_1436bee30(lVar2,7);
          do {
            if ((bVar4) && (lVar15 < 0x3fff)) {
              uVar12 = UWaterWaves::GetWaterWaves(lVar15);
            }
            else {
              uVar12 = 0x3fff;
            }
            lVar11 = FUN_1436a85c0(iVar6,lVar1,uVar12);
            if ((lVar11 < 1) || ((*(undefined1 *)(lVar11 + lVar1) = 0, bVar4 && (lVar15 == 0))))
            break;
            lVar13 = local_b0 + lVar11;
            lVar11 = lVar15 - lVar11;
            if (!bVar4) {
              lVar11 = lVar15;
            }
            local_b0 = lVar13;
            uVar10 = Curl_client_write(param_1,1,lVar1);
            if ((int)uVar10 != 0) {
              return uVar10;
            }
            FUN_1436bed80(lVar2,lVar13);
            iVar8 = FUN_1436befa0(param_1);
            if (iVar8 != 0) {
              FUN_1436befa0(param_1);
              return 0x2a;
            }
            uVar7 = FUN_1436bf8a0(lVar2,uVar9);
            uVar10 = (ulonglong)uVar7;
            lVar15 = lVar11;
          } while (uVar7 == 0);
          iVar6 = FUN_1436befa0(param_1);
          if (iVar6 == 0) {
            return uVar10;
          }
          return 0x2a;
        }
      }
      uVar10 = 0x24;
    }
    else {
      curl_msnprintf(lVar1,0x4001,"Content-Length: %I64d\r\n",uVar14);
      uVar10 = Curl_client_write(param_1,3,lVar1);
      if ((((int)uVar10 == 0) &&
          (uVar10 = Curl_client_write(param_1,3,"Accept-ranges: bytes\r\n",0), (int)uVar10 == 0)) &&
         (uVar10 = Curl_gmtime(CONCAT44(uStack_54,local_58),&local_a8), (int)uVar10 == 0)) {
        iVar6 = local_90 + -1;
        if (local_90 == 0) {
          iVar6 = 6;
        }
        local_d8 = local_94 + 0x76c;
        local_c0 = local_a8;
        local_c8 = local_a4;
        local_d0 = local_a0;
        local_e0 = (&PTR_DAT_145b6c100)[local_98];
        local_e8 = local_9c;
        curl_msnprintf(lVar1,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                       (&PTR_DAT_145b6c090)[iVar6]);
        uVar7 = Curl_client_write(param_1,3,lVar1);
        uVar10 = (ulonglong)uVar7;
        if (uVar7 == 0) {
          FUN_1436bed90(lVar2,uVar14);
        }
      }
    }
  }
  else {
    uVar10 = FUN_1436d2b50(param_1);
  }
  return uVar10;
}



// FUNCTION 1436d2870 FUN_1436d2870 body=69 status=ok
// SIG undefined FUN_1436d2870(void)

undefined8 FUN_1436d2870(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(*param_1 + 0x198);
  if (puVar1 != (undefined8 *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    if (*(int *)(puVar1 + 2) != -1) {
      _close(*(int *)(puVar1 + 2));
    }
    *(undefined4 *)(puVar1 + 2) = 0xffffffff;
  }
  return 0;
}



// FUNCTION 1436d28c0 FUN_1436d28c0 body=357 status=ok
// SIG undefined FUN_1436d28c0(void)

undefined4 FUN_1436d28c0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  char *_Filename;
  int iVar6;
  int local_res8 [2];
  
  lVar1 = *param_1;
  puVar2 = *(undefined8 **)(lVar1 + 0x198);
  pcVar4 = (char *)curl_easy_unescape(lVar1,*(undefined8 *)(lVar1 + 0x89d8),0,local_res8);
  if (pcVar4 == (char *)0x0) {
    uVar3 = 0x1b;
  }
  else {
    _Filename = pcVar4;
    if (((*pcVar4 == '/') && (pcVar4[1] != '\0')) && ((pcVar4[2] == ':' || (pcVar4[2] == '|')))) {
      pcVar4[2] = ':';
      local_res8[0] = local_res8[0] + -1;
      _Filename = pcVar4 + 1;
    }
    iVar6 = 0;
    pcVar5 = _Filename;
    if (0 < local_res8[0]) {
      do {
        if (*pcVar5 == '/') {
          *pcVar5 = '\\';
        }
        else if (*pcVar5 == '\0') {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar4);
          return 3;
        }
        iVar6 = iVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (iVar6 < local_res8[0]);
    }
    iVar6 = _open(_Filename,0x8000);
    *(int *)(puVar2 + 2) = iVar6;
    *puVar2 = _Filename;
    puVar2[1] = pcVar4;
    if ((*(char *)(lVar1 + 0x450) == '\0') && (iVar6 == -1)) {
      FUN_1436b5820(lVar1,"Couldn\'t open file %s",*(undefined8 *)(lVar1 + 0x89d8));
      puVar2 = *(undefined8 **)(*param_1 + 0x198);
      if (puVar2 != (undefined8 *)0x0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2[1]);
        puVar2[1] = 0;
        *puVar2 = 0;
        if (*(int *)(puVar2 + 2) != -1) {
          _close(*(int *)(puVar2 + 2));
        }
        *(undefined4 *)(puVar2 + 2) = 0xffffffff;
      }
      uVar3 = 0x25;
    }
    else {
      *param_2 = 1;
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1436d2a30 FUN_1436d2a30 body=59 status=ok
// SIG undefined FUN_1436d2a30(void)

undefined8 FUN_1436d2a30(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = (*(code *)PTR_calloc_1467dcc78)(1);
  *(undefined8 *)(*param_1 + 0x198) = uVar1;
  uVar1 = 0;
  if (*(longlong *)(*param_1 + 0x198) == 0) {
    uVar1 = 0x1b;
  }
  return uVar1;
}



// FUNCTION 1436d2a70 FUN_1436d2a70 body=220 status=ok
// SIG undefined FUN_1436d2a70(void)

undefined8 FUN_1436d2a70(longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte *local_res8;
  byte *local_res10;
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x89e1) == '\0') || (*(longlong *)(lVar2 + 0x89e8) == 0)) {
    *(undefined8 *)(lVar2 + 0xa0) = 0xffffffffffffffff;
    return 0;
  }
  lVar4 = strtoll(*(longlong *)(lVar2 + 0x89e8),&local_res8,0);
  bVar1 = *local_res8;
  while ((bVar1 != 0 && ((iVar3 = isspace((uint)bVar1), iVar3 != 0 || (*local_res8 == 0x2d))))) {
    local_res8 = local_res8 + 1;
    bVar1 = *local_res8;
  }
  lVar5 = strtoll(local_res8,&local_res10,0);
  if ((local_res8 == local_res10) || (lVar5 == -1)) {
    if (-1 < lVar4) goto LAB_1436d2b25;
LAB_1436d2b18:
    lVar5 = -lVar4;
  }
  else {
    if (lVar4 < 0) goto LAB_1436d2b18;
    lVar5 = (lVar5 - lVar4) + 1;
  }
  *(longlong *)(lVar2 + 0xa0) = lVar5;
LAB_1436d2b25:
  *(longlong *)(lVar2 + 0x89f0) = lVar4;
  return 0;
}



// FUNCTION 1436d2b50 FUN_1436d2b50 body=552 status=ok
// SIG undefined FUN_1436d2b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436d2b50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int _FileHandle;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_98 [32];
  int local_78 [2];
  undefined1 local_70 [24];
  undefined8 local_58;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar2 = *(undefined8 **)(*param_1 + 0x198);
  pcVar6 = strchr((char *)*puVar2,0x5c);
  lVar3 = *param_1;
  lVar1 = lVar3 + 0x7e8;
  uVar7 = curlx_tvnow();
  *(longlong *)(*param_1 + 0x188) = lVar1;
  if ((pcVar6 == (char *)0x0) || (pcVar6[1] == '\0')) {
    iVar4 = 0x25;
  }
  else {
    iVar4 = 0x8109;
    if (*(longlong *)(lVar3 + 0x89f0) == 0) {
      iVar4 = 0x8301;
    }
    _FileHandle = _open((char *)*puVar2,iVar4);
    if (_FileHandle < 0) {
      FUN_1436b5820(lVar3,"Can\'t open %s for writing",*puVar2);
      iVar4 = 0x17;
    }
    else {
      if (*(longlong *)(lVar3 + 0x8a08) != -1) {
        FUN_1436bedd0(lVar3);
      }
      lVar11 = 0;
      if (*(longlong *)(lVar3 + 0x89f0) < 0) {
        iVar4 = _fstat64(_FileHandle,local_70);
        if (iVar4 != 0) {
          _close(_FileHandle);
          FUN_1436b5820(lVar3,"Can\'t get the size of %s",*puVar2);
          return 0x17;
        }
        *(undefined8 *)(lVar3 + 0x89f0) = local_58;
        lVar11 = 0;
      }
      while (iVar4 = FUN_1436b81a0(param_1,0x4000,local_78), iVar4 == 0) {
        lVar8 = (longlong)local_78[0];
        if (local_78[0] < 1) {
          iVar5 = FUN_1436befa0(param_1);
          if (iVar5 != 0) {
            iVar4 = 0x2a;
          }
          break;
        }
        lVar9 = *(longlong *)(lVar3 + 0x89f0);
        lVar10 = lVar1;
        if (lVar9 != 0) {
          if (lVar9 < lVar8) {
            *(undefined8 *)(lVar3 + 0x89f0) = 0;
            lVar10 = lVar9 + lVar1;
            lVar8 = lVar8 - lVar9;
          }
          else {
            *(longlong *)(lVar3 + 0x89f0) = lVar9 - lVar8;
            lVar8 = 0;
          }
        }
        lVar9 = FUN_1436a8630(_FileHandle,lVar10,lVar8);
        if (lVar9 != lVar8) {
          iVar4 = 0x37;
          break;
        }
        lVar11 = lVar11 + lVar8;
        FUN_1436bedc0(lVar3,lVar11);
        iVar4 = FUN_1436befa0(param_1);
        if (iVar4 != 0) {
          iVar4 = 0x2a;
          break;
        }
        iVar4 = FUN_1436bf8a0(lVar3,uVar7);
        if (iVar4 != 0) break;
      }
      _close(_FileHandle);
    }
  }
  return iVar4;
}



// FUNCTION 1436d2d80 FUN_1436d2d80 body=531 status=ok
// SIG undefined FUN_1436d2d80(void)

ulonglong FUN_1436d2d80(longlong *param_1,undefined1 *param_2)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  int local_res8 [2];
  longlong local_res10;
  
  lVar2 = *param_1;
  lVar3 = param_1[0x3a];
  uVar6 = 0xffffffffffffffff;
  lVar7 = *(longlong *)(lVar2 + 0x89d8);
  *param_2 = 1;
  do {
    uVar6 = uVar6 + 1;
  } while (*(char *)(lVar7 + uVar6) != '\0');
  if (uVar6 < 3) {
    puVar8 = &DAT_145af3922;
    local_res8[0] = 0;
    puVar9 = (undefined1 *)0x0;
  }
  else {
    pcVar1 = (char *)(lVar7 + 2);
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
      pcVar4 = pcVar1;
    } while (pcVar1[lVar7] != '\0');
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      if (*pcVar4 == '?') {
        *pcVar4 = '\t';
      }
      pcVar4 = pcVar4 + 1;
    }
    puVar8 = (undefined1 *)curl_easy_unescape(lVar2,pcVar1,0,local_res8);
    puVar9 = puVar8;
    if (puVar8 == (undefined1 *)0x0) {
      return 0x1b;
    }
  }
  lVar7 = curlx_uztosz((longlong)local_res8[0]);
  uVar5 = FUN_1436b5de0(param_1,lVar3,puVar8,lVar7,&local_res10);
  while (uVar5 == 0) {
    uVar5 = Curl_client_write(param_1,2,puVar8,local_res10);
    if (uVar5 != 0) goto LAB_1436d2eea;
    lVar7 = lVar7 - local_res10;
    puVar8 = puVar8 + local_res10;
    if (lVar7 < 1) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar9);
      uVar5 = FUN_1436b5cc0(lVar3,param_1,&DAT_145b5531c);
      if (uVar5 != 0) {
        FUN_1436b5820(lVar2,"Failed sending Gopher request");
        return (ulonglong)uVar5;
      }
      uVar6 = Curl_client_write(param_1,2,&DAT_145b5531c);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      FUN_1436b8d40(param_1,0,0xffffffffffffffff,0,lVar2 + 0xb0,0xffffffff,0);
      return 0;
    }
    FUN_1436b50e0(0xffffffffffffffff,0xffffffffffffffff,lVar3,100);
    uVar5 = FUN_1436b5de0(param_1,lVar3,puVar8,lVar7,&local_res10);
  }
  FUN_1436b5820(lVar2,"Failed sending Gopher request");
LAB_1436d2eea:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar9);
  return (ulonglong)uVar5;
}



// FUNCTION 1436d2fa0 FUN_1436d2fa0 body=542 status=ok
// SIG undefined FUN_1436d2fa0(void)

int FUN_1436d2fa0(longlong param_1,longlong param_2,size_t *param_3,undefined1 *param_4)

{
  int iVar1;
  longlong lVar2;
  void *_Dst;
  size_t *psVar3;
  size_t _Size;
  char *_Src;
  ulonglong uVar4;
  
  if (*(longlong *)(param_2 + 0x718) == 0) {
    _Src = *(char **)(param_1 + 0xf8);
    psVar3 = param_3;
  }
  else {
    psVar3 = (size_t *)(param_2 + 0x720);
    lVar2 = (*(code *)PTR_realloc_1467dcc68)(*(longlong *)(param_2 + 0x718),*psVar3 + *param_3);
    if (lVar2 == 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x718));
      *(undefined8 *)(param_2 + 0x718) = 0;
      *psVar3 = 0;
      return 0x1b;
    }
    *(longlong *)(param_2 + 0x718) = lVar2;
    _guard_xfg_dispatch_icall_nop((void *)(lVar2 + *psVar3),*(void **)(param_1 + 0xf8),*param_3);
    *psVar3 = *psVar3 + *param_3;
    _Src = *(char **)(param_2 + 0x718);
  }
  _Size = *psVar3;
  while( true ) {
    if (((longlong)_Size < 1) || (*_Src != '$')) goto LAB_1436d3109;
    if ((longlong)_Size < 5) break;
    *(uint *)(param_2 + 0x728) = (uint)(byte)_Src[1];
    uVar4 = (ulonglong)(CONCAT11(_Src[2],_Src[3]) + 4);
    if ((longlong)_Size < (longlong)uVar4) break;
    iVar1 = rtp_client_write(param_2,_Src,uVar4);
    if (iVar1 != 0) {
      FUN_1436b5820(param_1,"Got an error writing an RTP packet");
      *param_4 = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x718));
      *(undefined8 *)(param_2 + 0x718) = 0;
      *(undefined8 *)(param_2 + 0x720) = 0;
      return iVar1;
    }
    _Size = _Size - uVar4;
    _Src = _Src + uVar4;
    if (*(int *)(param_1 + 0x60c) == 0xb) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xfffffffe;
    }
  }
  *param_4 = 1;
LAB_1436d3109:
  if ((_Size == 0) || (*_Src != '$')) {
    *(longlong *)(param_1 + 0xf8) = *(longlong *)(param_1 + 0xf8) + (*param_3 - _Size);
    *param_3 = _Size;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x718));
    iVar1 = 0;
    *(undefined8 *)(param_2 + 0x718) = 0;
    *(undefined8 *)(param_2 + 0x720) = 0;
  }
  else {
    _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(_Size);
    if (_Dst == (void *)0x0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x718));
      *(undefined8 *)(param_2 + 0x718) = 0;
      *(undefined8 *)(param_2 + 0x720) = 0;
      iVar1 = 0x1b;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,_Size);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x718));
      iVar1 = 0;
      *(void **)(param_2 + 0x718) = _Dst;
      *(size_t *)(param_2 + 0x720) = _Size;
      *param_3 = 0;
    }
  }
  return iVar1;
}



// FUNCTION 1436d31c0 rtsp_setup_connection body=57 status=ok
// SIG undefined rtsp_setup_connection(void)

undefined8 rtsp_setup_connection(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_1467dcc78)(1,0x90);
  *(longlong *)(*param_1 + 0x198) = lVar1;
  uVar2 = 0;
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  return uVar2;
}



// FUNCTION 1436d3200 FUN_1436d3200 body=2126 status=ok
// SIG undefined FUN_1436d3200(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1436d3200(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  char *pcVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  undefined1 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *local_res8;
  undefined1 *local_res10;
  undefined1 *local_res18;
  longlong *local_res20;
  undefined8 in_stack_ffffffffffffff58;
  undefined4 uVar21;
  
  uVar21 = (undefined4)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  lVar1 = *param_1;
  plVar18 = (longlong *)0x0;
  local_res20 = (longlong *)0x0;
  local_res18 = (undefined1 *)0x0;
  local_res10 = (undefined1 *)0x0;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  uVar4 = *(uint *)(lVar1 + 0x60c);
  *param_2 = 1;
  *(undefined4 *)(lVar2 + 0x88) = *(undefined4 *)(lVar1 + 0x89f8);
  *(undefined4 *)(lVar2 + 0x8c) = 0;
  local_res8 = (undefined1 *)0x0;
  *(undefined1 *)(lVar1 + 0x44f) = 1;
  pcVar13 = "";
  switch(uVar4) {
  case 1:
    pcVar13 = "OPTIONS";
    break;
  case 2:
    pcVar13 = "DESCRIBE";
  case 0xb:
switchD_1436d3297_caseD_b:
    *(undefined1 *)(lVar1 + 0x44f) = 0;
    break;
  case 3:
    pcVar13 = "ANNOUNCE";
    break;
  case 4:
    pcVar13 = "SETUP";
    break;
  case 5:
    pcVar13 = "PLAY";
    break;
  case 6:
    pcVar13 = "PAUSE";
    break;
  case 7:
    pcVar13 = "TEARDOWN";
    break;
  case 8:
    pcVar13 = "GET_PARAMETER";
    goto switchD_1436d3297_caseD_b;
  case 9:
    pcVar13 = "SET_PARAMETER";
    break;
  case 10:
    pcVar13 = "RECORD";
    break;
  case 0xc:
    FUN_1436b5820(lVar1,"Got invalid RTSP request: RTSPREQ_LAST");
    return 0x2b;
  default:
    FUN_1436b5820(lVar1,"Got invalid RTSP request");
    return 0x2b;
  }
  if (uVar4 == 0xb) {
    FUN_1436b8d40(param_1,0,0xffffffffffffffff,1,lVar2 + 0x28,0xffffffff,0);
    return 0;
  }
  lVar10 = *(longlong *)(lVar1 + 0x5a0);
  if ((lVar10 == 0) && ((uVar4 & 0xfffffff8) != 0)) {
    FUN_1436b5820(lVar1,"Refusing to issue an RTSP request [%s] without a session ID.",pcVar13);
    return 0x2b;
  }
  puVar20 = &DAT_145af6c98;
  if (*(undefined1 **)(lVar1 + 0x5a8) != (undefined1 *)0x0) {
    puVar20 = *(undefined1 **)(lVar1 + 0x5a8);
  }
  puVar6 = (undefined1 *)FUN_1436bc690(param_1,"Transport:");
  if (uVar4 == 4) {
    if (puVar6 != (undefined1 *)0x0) goto LAB_1436d34c5;
    if (*(longlong *)(lVar1 + 0x5b0) == 0) {
      FUN_1436b5820(lVar1,"Refusing to issue an RTSP SETUP without a Transport: header.");
      return 0x2b;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x8a]);
    param_1[0x8a] = 0;
    puVar6 = (undefined1 *)curl_maprintf("Transport: %s\r\n",*(undefined8 *)(lVar1 + 0x5b0));
    param_1[0x8a] = (longlong)puVar6;
    puVar16 = puVar6;
  }
  else {
    if (uVar4 != 2) goto LAB_1436d34c5;
    lVar7 = FUN_1436bc690(param_1,"Accept:");
    local_res20 = (longlong *)"Accept: application/sdp\r\n";
    if (lVar7 != 0) {
      local_res20 = plVar18;
    }
    lVar7 = FUN_1436bc690(param_1,"Accept-Encoding:");
    if ((lVar7 != 0) || (*(longlong *)(lVar1 + 0x4c0) == 0)) goto LAB_1436d34c5;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x84]);
    param_1[0x84] = 0;
    local_res18 = (undefined1 *)
                  curl_maprintf("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar1 + 0x4c0));
    param_1[0x84] = (longlong)local_res18;
    puVar16 = local_res18;
  }
  if (puVar16 == (undefined1 *)0x0) {
    return 0x1b;
  }
LAB_1436d34c5:
  lVar7 = FUN_1436bc690(param_1,"User-Agent:");
  if ((lVar7 == 0) || (param_1[0x83] == 0)) {
    lVar7 = FUN_1436bc690(param_1,"User-Agent:");
    if ((lVar7 == 0) && (*(longlong *)(lVar1 + 0x558) != 0)) {
      local_res8 = (undefined1 *)param_1[0x83];
    }
  }
  else {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
    param_1[0x83] = 0;
  }
  uVar8 = FUN_1436bcd40(param_1,pcVar13,puVar20,0);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  puVar16 = (undefined1 *)param_1[0x82];
  puVar19 = (undefined1 *)param_1[0x85];
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x87]);
  param_1[0x87] = 0;
  if ((*(longlong *)(lVar1 + 0x680) == 0) || (lVar7 = FUN_1436bc690(param_1,"Referer:"), lVar7 != 0)
     ) {
    param_1[0x87] = 0;
  }
  else {
    lVar7 = curl_maprintf("Referer: %s\r\n",*(undefined8 *)(lVar1 + 0x680));
    param_1[0x87] = lVar7;
  }
  puVar11 = (undefined1 *)param_1[0x87];
  if ((((*(char *)(lVar1 + 0x89e1) != '\0') && ((uVar4 & 0xf) != 0)) &&
      (lVar7 = FUN_1436bc690(param_1,"Range:"), lVar7 == 0)) && (*(longlong *)(lVar1 + 0x89e8) != 0)
     ) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x86]);
    param_1[0x86] = 0;
    local_res10 = (undefined1 *)curl_maprintf("Range: %s\r\n",*(undefined8 *)(lVar1 + 0x89e8));
    param_1[0x86] = (longlong)local_res10;
  }
  lVar7 = FUN_1436bc690(param_1,"CSeq:");
  if (lVar7 != 0) {
    FUN_1436b5820(lVar1,"CSeq cannot be set as a custom header.");
    return 0x55;
  }
  lVar7 = FUN_1436bc690(param_1,"Session:");
  if (lVar7 != 0) {
    FUN_1436b5820(lVar1,"Session ID cannot be set as a custom header.");
    return 0x2b;
  }
  lVar7 = Curl_add_buffer_init();
  if (lVar7 == 0) {
    return 0x1b;
  }
  uVar8 = Curl_add_bufferf(lVar7,"%s %s RTSP/1.0\r\nCSeq: %ld\r\n",pcVar13,puVar20,
                           CONCAT44(uVar21,*(undefined4 *)(lVar2 + 0x88)));
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if ((lVar10 != 0) && (uVar8 = Curl_add_bufferf(lVar7,"Session: %s\r\n"), (int)uVar8 != 0)) {
    return uVar8;
  }
  puVar20 = &DAT_145af3922;
  if (puVar19 != (undefined1 *)0x0) {
    puVar20 = puVar19;
  }
  puVar19 = &DAT_145af3922;
  if (puVar16 != (undefined1 *)0x0) {
    puVar19 = puVar16;
  }
  puVar16 = &DAT_145af3922;
  if (local_res8 != (undefined1 *)0x0) {
    puVar16 = local_res8;
  }
  puVar12 = &DAT_145af3922;
  if (puVar11 != (undefined1 *)0x0) {
    puVar12 = puVar11;
  }
  puVar11 = &DAT_145af3922;
  if (local_res10 != (undefined1 *)0x0) {
    puVar11 = local_res10;
  }
  puVar9 = &DAT_145af3922;
  if (local_res18 != (undefined1 *)0x0) {
    puVar9 = local_res18;
  }
  plVar15 = (longlong *)&DAT_145af3922;
  if (local_res20 != (longlong *)0x0) {
    plVar15 = local_res20;
  }
  puVar14 = &DAT_145af3922;
  if (puVar6 != (undefined1 *)0x0) {
    puVar14 = puVar6;
  }
  uVar3 = Curl_add_bufferf(lVar7,"%s%s%s%s%s%s%s%s",puVar14,plVar15,puVar9,puVar11,puVar12,puVar16,
                           puVar19,puVar20);
  uVar21 = (undefined4)((ulonglong)puVar11 >> 0x20);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x85]);
  param_1[0x85] = 0;
  if (uVar3 != 0) {
    return (ulonglong)uVar3;
  }
  if (((uVar4 - 2 & 0xfffffffd) == 0) && (uVar8 = FUN_1436bc4b0(lVar1,lVar7), (int)uVar8 != 0)) {
    return uVar8;
  }
  uVar8 = FUN_1436bc260(param_1,0,lVar7);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  plVar15 = plVar18;
  if ((uVar4 == 3) || (uVar4 - 8 < 2)) {
    if (*(char *)(lVar1 + 0x450) == '\0') {
      plVar15 = *(longlong **)(lVar1 + 0x8a08);
      if ((*(longlong **)(lVar1 + 0x8a08) == (longlong *)&DAT_ffffffffffffffff) &&
         (plVar15 = (longlong *)0x0, *(longlong *)(lVar1 + 0x200) != 0)) {
        plVar15 = (longlong *)&DAT_ffffffffffffffff;
        do {
          plVar15 = (longlong *)((longlong)plVar15 + 1);
        } while (*(char *)(*(longlong *)(lVar1 + 0x200) + (longlong)plVar15) != '\0');
      }
      *(undefined4 *)(lVar1 + 0x380) = 2;
      plVar17 = plVar15;
    }
    else {
      *(undefined4 *)(lVar1 + 0x380) = 4;
      plVar18 = *(longlong **)(lVar1 + 0x8a08);
      plVar17 = *(longlong **)(lVar1 + 0x8a08);
    }
    if ((longlong)plVar17 < 1) {
      if (uVar4 == 8) {
        *(undefined4 *)(lVar1 + 0x380) = 5;
        *(undefined1 *)(lVar1 + 0x44f) = 1;
      }
    }
    else {
      lVar10 = FUN_1436bc690(param_1,"Content-Length:");
      if (lVar10 == 0) {
        plVar17 = plVar15;
        if (*(char *)(lVar1 + 0x450) != '\0') {
          plVar17 = plVar18;
        }
        uVar8 = Curl_add_bufferf(lVar7,"Content-Length: %I64d\r\n",plVar17);
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
      if (((uVar4 - 8 < 2) && (lVar10 = FUN_1436bc690(param_1,"Content-Type:"), lVar10 == 0)) &&
         (uVar8 = Curl_add_bufferf(lVar7,"Content-Type: text/parameters\r\n"), (int)uVar8 != 0)) {
        return uVar8;
      }
      if (((uVar4 == 3) && (lVar10 = FUN_1436bc690(param_1,"Content-Type:"), lVar10 == 0)) &&
         (uVar8 = Curl_add_bufferf(lVar7,"Content-Type: application/sdp\r\n"), (int)uVar8 != 0)) {
        return uVar8;
      }
      *(undefined1 *)(lVar1 + 0x89c8) = 0;
    }
  }
  *(undefined1 *)(lVar1 + 0x193) = 1;
  uVar8 = Curl_add_buffer(lVar7,&DAT_145b5531c,2);
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if ((0 < (longlong)plVar15) &&
     (uVar8 = Curl_add_buffer(lVar7,*(undefined8 *)(lVar1 + 0x200),plVar15), (int)uVar8 != 0)) {
    return uVar8;
  }
  uVar4 = FUN_1436bbff0(lVar7,param_1,lVar1 + 0x8a90,0,(ulonglong)puVar9 & 0xffffffff00000000);
  if (uVar4 != 0) {
    FUN_1436b5820(lVar1,"Failed sending RTSP request");
    return (ulonglong)uVar4;
  }
  plVar15 = (longlong *)(lVar2 + 0x30);
  if (plVar18 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  FUN_1436b8d40(param_1,0,0xffffffffffffffff,1,lVar2 + 0x28,
                CONCAT44(uVar21,(plVar18 != (longlong *)0x0) - 1),plVar15);
  *(int *)(lVar1 + 0x89f8) = *(int *)(lVar1 + 0x89f8) + 1;
  if (*(longlong *)(lVar2 + 0x30) == 0) {
    return 0;
  }
  FUN_1436bedc0(lVar1);
  iVar5 = FUN_1436befa0(param_1);
  if (iVar5 == 0) {
    return 0;
  }
  return 0x2a;
}



// FUNCTION 1436d3a80 FUN_1436d3a80 body=175 status=ok
// SIG undefined FUN_1436d3a80(void)

undefined4 FUN_1436d3a80(longlong *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  uVar4 = 1;
  if (*(int *)(lVar1 + 0x60c) != 0xb) {
    uVar4 = param_3;
  }
  uVar3 = FUN_1436bbbe0(param_1,param_2,uVar4);
  if (lVar2 == 0) {
    return uVar3;
  }
  if (*(int *)(lVar1 + 0x60c) != 0xb) {
    if (*(int *)(lVar2 + 0x88) != *(int *)(lVar2 + 0x8c)) {
      FUN_1436b5820(lVar1,"The CSeq of this request %ld did not match the response %ld",
                    *(int *)(lVar2 + 0x88),*(int *)(lVar2 + 0x8c));
      return 0x55;
    }
    if (*(int *)(lVar1 + 0x60c) != 0xb) {
      return uVar3;
    }
  }
  if ((int)param_1[0xe5] == -1) {
    FUN_1436b58e0(lVar1,"Got an RTP Receive with a CSeq of %ld\n");
  }
  return uVar3;
}



// FUNCTION 1436d3b30 FUN_1436d3b30 body=80 status=ok
// SIG undefined FUN_1436d3b30(void)

void FUN_1436d3b30(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  FUN_1436bbd50();
  if (*(int *)(lVar1 + 0x89f8) == 0) {
    *(undefined4 *)(lVar1 + 0x89f8) = 1;
  }
  if (*(int *)(lVar1 + 0x89fc) == 0) {
    *(undefined4 *)(lVar1 + 0x89fc) = 1;
  }
  *(undefined4 *)(param_1 + 0xe5) = 0xffffffff;
  return;
}



// FUNCTION 1436d3b80 FUN_1436d3b80 body=41 status=ok
// SIG undefined FUN_1436d3b80(void)

undefined8 FUN_1436d3b80(longlong param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x718));
  *(undefined8 *)(param_1 + 0x718) = 0;
  return 0;
}



// FUNCTION 1436d3bb0 FUN_1436d3bb0 body=113 status=ok
// SIG undefined FUN_1436d3bb0(void)

bool FUN_1436d3bb0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *local_res8 [4];
  
  local_res8[0] = param_1;
  uVar1 = FUN_1436b50e0(param_1[0x3a],0xffffffffffffffff,0xffffffffffffffff,0);
  if (uVar1 == 0) {
    return false;
  }
  if ((uVar1 & 4) != 0) {
    return true;
  }
  if (((uVar1 & 1) != 0) && (*local_res8[0] != 0)) {
    lVar2 = FUN_1436b63c0(*local_res8[0],local_res8);
    return lVar2 == -1;
  }
  return true;
}



// FUNCTION 1436d3c30 FUN_1436d3c30 body=449 status=ok
// SIG undefined FUN_1436d3c30(void)

undefined8 FUN_1436d3c30(longlong *param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  char *_Str2;
  int iVar3;
  uint uVar4;
  void *_Dst;
  byte *pbVar5;
  byte *_Str1;
  size_t _MaxCount;
  undefined4 local_res8 [2];
  
  lVar2 = *param_1;
  local_res8[0] = 0;
  iVar3 = Curl_raw_nequal("CSeq:",param_2,5);
  if (iVar3 != 0) {
    iVar3 = FUN_143662c40(param_2 + 4,": %ld",local_res8);
    if (iVar3 == 1) {
      *(undefined4 *)(*(longlong *)(lVar2 + 0x198) + 0x8c) = local_res8[0];
      *(undefined4 *)(lVar2 + 0x8a00) = local_res8[0];
      return 0;
    }
    FUN_1436b5820(lVar2,"Unable to read the CSeq header: [%s]",param_2);
    return 0x55;
  }
  iVar3 = Curl_raw_nequal("Session:",param_2);
  if (iVar3 == 0) {
    return 0;
  }
  bVar1 = *(byte *)(param_2 + 8);
  _Str1 = (byte *)(param_2 + 8);
  do {
    if (bVar1 == 0) {
LAB_1436d3cf8:
      FUN_1436b5820(lVar2,"Got a blank Session ID");
      return 0;
    }
    iVar3 = isspace((uint)bVar1);
    if (iVar3 == 0) {
      if (*_Str1 != 0) {
        _Str2 = *(char **)(lVar2 + 0x5a0);
        pbVar5 = _Str1;
        if (_Str2 != (char *)0x0) {
          _MaxCount = 0xffffffffffffffff;
          do {
            _MaxCount = _MaxCount + 1;
          } while (_Str2[_MaxCount] != '\0');
          iVar3 = strncmp((char *)_Str1,_Str2,_MaxCount);
          if (iVar3 == 0) {
            return 0;
          }
          FUN_1436b5820(lVar2,"Got RTSP Session ID Line [%s], but wanted ID [%s]",_Str1,
                        *(undefined8 *)(lVar2 + 0x5a0));
          return 0x56;
        }
        break;
      }
      goto LAB_1436d3cf8;
    }
    bVar1 = _Str1[1];
    _Str1 = _Str1 + 1;
  } while( true );
  do {
    iVar3 = isalnum((uint)*pbVar5);
    if (iVar3 == 0) {
      uVar4 = *pbVar5 - 0x2b;
      if ((0x34 < (byte)uVar4) || ((0x1000000000000dU >> ((ulonglong)uVar4 & 0x3f) & 1) == 0)) {
        if ((*pbVar5 != 0x5c) || (pbVar5[1] != 0x24)) break;
        pbVar5 = pbVar5 + 1;
      }
    }
    pbVar5 = pbVar5 + 1;
  } while (*pbVar5 != 0);
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                           (((longlong)pbVar5 - (longlong)_Str1) + 1);
  *(void **)(lVar2 + 0x5a0) = _Dst;
  if (_Dst != (void *)0x0) {
    _guard_xfg_dispatch_icall_nop(_Dst,_Str1,(longlong)pbVar5 - (longlong)_Str1);
    pbVar5[*(longlong *)(lVar2 + 0x5a0) - (longlong)_Str1] = 0;
    return 0;
  }
  return 0x1b;
}



// FUNCTION 1436d3e00 rtp_client_write body=177 status=ok
// SIG undefined rtp_client_write(void)

undefined4 rtp_client_write(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  
  lVar1 = *param_1;
  if (param_3 == 0) {
    FUN_1436b5820(lVar1,"Cannot write a 0 size RTP packet.");
    return 0x17;
  }
  pcVar2 = *(code **)(lVar1 + 0x230);
  if (pcVar2 == (code *)0x0) {
    pcVar2 = *(code **)(lVar1 + 0x220);
  }
  lVar3 = (*pcVar2)(param_2,1,param_3,*(undefined8 *)(lVar1 + 0x1d8));
  if (lVar3 == 0x10000001) {
    FUN_1436b5820(lVar1,"Cannot pause RTP");
    return 0x17;
  }
  if (lVar3 != param_3) {
    FUN_1436b5820(lVar1,"Failed writing RTP data");
    return 0x17;
  }
  return 0;
}



// FUNCTION 1436d3ec0 smb_setup_connection body=62 status=ok
// SIG undefined smb_setup_connection(void)

undefined8 smb_setup_connection(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (*(code *)PTR_calloc_1467dcc78)(1);
  *(longlong *)(*param_1 + 0x198) = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  uVar2 = FUN_1436d4780(param_1);
  return uVar2;
}



// FUNCTION 1436d3f00 FUN_1436d3f00 body=276 status=ok
// SIG undefined FUN_1436d3f00(void)

undefined8 FUN_1436d3f00(longlong param_1)

{
  longlong lVar1;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x3bf) == '\0') {
    return 0x43;
  }
  _guard_xfg_dispatch_icall_nop((undefined4 *)(param_1 + 0x718),0,0x50);
  *(undefined4 *)(param_1 + 0x718) = 1;
  lVar1 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x9000);
  *(longlong *)(param_1 + 0x740) = lVar1;
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + 0x3b9) = 0;
    pcVar2 = strchr(*(char **)(param_1 + 0x180),0x2f);
    if ((pcVar2 == (char *)0x0) &&
       (pcVar2 = strchr(*(char **)(param_1 + 0x180),0x5c), pcVar2 == (char *)0x0)) {
      *(undefined8 *)(param_1 + 0x720) = *(undefined8 *)(param_1 + 0x180);
      lVar1 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0xb8));
      *(longlong *)(param_1 + 0x728) = lVar1;
      if (lVar1 == 0) {
        return 0x1b;
      }
      return 0;
    }
    *(char **)(param_1 + 0x720) = pcVar2 + 1;
    lVar1 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x180));
    *(longlong *)(param_1 + 0x728) = lVar1;
    if (lVar1 == 0) {
      return 0x1b;
    }
    pcVar2[lVar1 - *(longlong *)(param_1 + 0x180)] = '\0';
    return 0;
  }
  return 0x1b;
}



// FUNCTION 1436d4020 FUN_1436d4020 body=341 status=ok
// SIG undefined FUN_1436d4020(void)

undefined8 FUN_1436d4020(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  char local_res8 [8];
  longlong local_res18 [2];
  
  local_res18[0] = 0;
  if (*(int *)(param_1 + 0x718) == 1) {
    if ((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) {
      uVar1 = FUN_1436ad470(param_1,0,local_res8);
      if (((int)uVar1 != 0) && ((int)uVar1 != 0x51)) {
        return uVar1;
      }
      if (local_res8[0] == '\0') {
        return 0;
      }
    }
    uVar1 = FUN_1436d4b00(param_1,0x72,&DAT_145b70960,0xf);
    if ((int)uVar1 != 0) goto LAB_1436d408e;
    *(undefined4 *)(param_1 + 0x718) = 2;
  }
  uVar1 = FUN_1436d4960(param_1,local_res18);
  if (((int)uVar1 != 0) && ((int)uVar1 != 0x51)) {
LAB_1436d408e:
    *(undefined1 *)(param_1 + 0x3b9) = 1;
    return uVar1;
  }
  if (local_res18[0] != 0) {
    if (*(int *)(param_1 + 0x718) == 2) {
      if (*(int *)(local_res18[0] + 9) != 0) {
        *(undefined1 *)(param_1 + 0x3b9) = 1;
        return 7;
      }
      *(undefined8 *)(param_1 + 0x730) = *(undefined8 *)(local_res18[0] + 0x49);
      *(undefined4 *)(param_1 + 0x738) = *(undefined4 *)(local_res18[0] + 0x34);
      uVar1 = FUN_1436d4e30(param_1);
      if ((int)uVar1 != 0) goto LAB_1436d408e;
      *(undefined4 *)(param_1 + 0x718) = 3;
    }
    else if (*(int *)(param_1 + 0x718) == 3) {
      if (*(int *)(local_res18[0] + 9) != 0) {
        *(undefined1 *)(param_1 + 0x3b9) = 1;
        return 0x43;
      }
      *(undefined2 *)(param_1 + 0x73c) = *(undefined2 *)(local_res18[0] + 0x20);
      *(undefined4 *)(param_1 + 0x718) = 4;
      *param_2 = 1;
    }
    *(undefined8 *)(param_1 + 0x760) = 0;
  }
  return 0;
}



// FUNCTION 1436d4180 FUN_1436d4180 body=890 status=ok
// SIG undefined FUN_1436d4180(void)

ulonglong FUN_1436d4180(longlong *param_1,undefined1 *param_2)

{
  int *piVar1;
  longlong lVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong local_res8;
  
  local_res8 = 0;
  iVar7 = 7;
  piVar1 = *(int **)(*param_1 + 0x198);
  if (*piVar1 == 0) {
    uVar6 = FUN_1436d50e0();
    if ((int)uVar6 != 0) {
      *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
      return uVar6;
    }
    **(undefined4 **)(*param_1 + 0x198) = 1;
  }
  uVar6 = FUN_1436d4960(param_1,&local_res8);
  lVar2 = local_res8;
  uVar5 = (uint)uVar6;
  if ((uVar5 != 0) && (uVar5 != 0x51)) {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    return uVar6;
  }
  if (local_res8 == 0) {
    return 0;
  }
  switch(*piVar1) {
  case 1:
    if (*(int *)(local_res8 + 9) == 0) {
      iVar7 = 2;
      *(undefined2 *)(piVar1 + 6) = *(undefined2 *)(local_res8 + 0x1c);
    }
    else {
      piVar1[7] = 0x4e;
      if (*(int *)(local_res8 + 9) == 0x50001) {
        piVar1[7] = 9;
      }
    }
    break;
  case 2:
    if (*(int *)(local_res8 + 9) != 0) {
      piVar1[7] = 0x4e;
      goto switchD_1436d424e_caseD_5;
    }
    *(undefined2 *)((longlong)piVar1 + 0x1a) = *(undefined2 *)(local_res8 + 0x2a);
    *(undefined8 *)(*param_1 + 0x120) = 0;
    lVar2 = *param_1;
    if (*(char *)(lVar2 + 0x450) == '\0') {
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(local_res8 + 0x5c);
      FUN_1436bed90(*param_1,*(undefined8 *)(*param_1 + 0x90));
      iVar7 = 3;
    }
    else {
      *(undefined8 *)(lVar2 + 0x90) = *(undefined8 *)(lVar2 + 0x8a08);
      FUN_1436bedd0(*param_1,*(undefined8 *)(*param_1 + 0x90));
      iVar7 = 4;
    }
    break;
  case 3:
    if (*(int *)(local_res8 + 9) == 0) {
      uVar4 = Curl_read16_le(local_res8 + 0x2f);
      uVar3 = Curl_read16_le(lVar2 + 0x31);
      if (uVar4 == 0) {
LAB_1436d43ba:
        *(longlong *)(*param_1 + 0xb0) = *(longlong *)(*param_1 + 0xb0) + (ulonglong)uVar4;
        *(longlong *)(*param_1 + 0x120) = *(longlong *)(*param_1 + 0x120) + (ulonglong)uVar4;
        FUN_1436bed80(*param_1,*(undefined8 *)(*param_1 + 0xb0));
        iVar7 = 3;
        if (uVar4 < 0x8000) {
          iVar7 = 5;
        }
      }
      else {
        if ((ulonglong)param_1[0xec] < (ulonglong)uVar3 + 4 + (ulonglong)uVar4) {
          FUN_1436b5820(*param_1,"Invalid input packet");
          uVar5 = 0x38;
        }
        else {
          uVar5 = Curl_client_write(param_1,1,lVar2 + 4 + (ulonglong)uVar3);
          if (uVar5 == 0) goto LAB_1436d43ba;
        }
        piVar1[7] = uVar5;
        iVar7 = 5;
      }
    }
    else {
      piVar1[7] = 0x38;
      iVar7 = 5;
    }
    break;
  case 4:
    if (*(int *)(local_res8 + 9) == 0) {
      uVar4 = Curl_read16_le(local_res8 + 0x29);
      *(longlong *)(*param_1 + 0xb0) = *(longlong *)(*param_1 + 0xb0) + (ulonglong)uVar4;
      *(longlong *)(*param_1 + 0x120) = *(longlong *)(*param_1 + 0x120) + (ulonglong)uVar4;
      FUN_1436bedc0(*param_1,*(undefined8 *)(*param_1 + 0xb0));
      iVar7 = (*(longlong *)(*param_1 + 0x90) <= *(longlong *)(*param_1 + 0xb0)) + 4;
    }
    else {
      piVar1[7] = 0x19;
      iVar7 = 5;
    }
    break;
  case 5:
switchD_1436d424e_caseD_5:
    iVar7 = 6;
    break;
  case 6:
    break;
  default:
    param_1[0xec] = 0;
    goto LAB_1436d44dc;
  }
  param_1[0xec] = 0;
  switch(iVar7) {
  case 2:
    uVar5 = FUN_1436d4ba0(param_1);
    break;
  case 3:
    uVar5 = FUN_1436d4d30(param_1);
    break;
  case 4:
    uVar5 = FUN_1436d5370(param_1);
    break;
  case 5:
    uVar5 = FUN_1436d4a50(param_1);
    break;
  case 6:
    uVar5 = FUN_1436d52e0(param_1);
    break;
  case 7:
    uVar5 = piVar1[7];
    *param_2 = 1;
  }
  if (uVar5 == 0) {
    **(int **)(*param_1 + 0x198) = iVar7;
LAB_1436d44dc:
    uVar6 = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    uVar6 = (ulonglong)uVar5;
  }
  return uVar6;
}



// FUNCTION 1436d4530 FUN_1436d4530 body=96 status=ok
// SIG undefined FUN_1436d4530(void)

undefined4 FUN_1436d4530(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 8));
  *(undefined8 *)(lVar1 + 8) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(*param_1 + 0x198));
  *(undefined8 *)(*param_1 + 0x198) = 0;
  return param_2;
}



// FUNCTION 1436d4590 FUN_1436d4590 body=107 status=ok
// SIG undefined FUN_1436d4590(void)

undefined8 FUN_1436d4590(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xe5]);
  param_1[0xe5] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xe8]);
  param_1[0xe8] = 0;
  if (lVar1 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 8));
    *(undefined8 *)(lVar1 + 8) = 0;
  }
  return 0;
}



// FUNCTION 1436d4640 FUN_1436d4640 body=132 status=ok
// SIG undefined FUN_1436d4640(void)

undefined8 FUN_1436d4640(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  lVar2 = param_1[0xea] - param_1[0xeb];
  if (param_1[0xea] != 0) {
    uVar1 = FUN_1436b5de0(param_1,0,*param_1 + param_1[0xeb] + 0x47e9,lVar2,&local_res8);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if (local_res8 != lVar2) {
      param_1[0xeb] = param_1[0xeb] + local_res8;
      return 0;
    }
    param_1[0xea] = 0;
  }
  return 0;
}



// FUNCTION 1436d46d0 FUN_1436d46d0 body=167 status=ok
// SIG undefined FUN_1436d46d0(void)

void FUN_1436d46d0(longlong *param_1,undefined8 *param_2,undefined1 param_3,int param_4)

{
  longlong lVar1;
  undefined2 uVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  uVar2 = Ordinal_9(param_4 + 0x20);
  *(undefined2 *)((longlong)param_2 + 2) = uVar2;
  *(undefined2 *)((longlong)param_2 + 0xe) = 0x41;
  *(undefined4 *)((longlong)param_2 + 4) = 0x424d53ff;
  *(undefined1 *)(param_2 + 1) = param_3;
  *(undefined1 *)((longlong)param_2 + 0xd) = 0x18;
  *(undefined2 *)(param_2 + 4) = *(undefined2 *)((longlong)param_1 + 0x73c);
  *(undefined2 *)((longlong)param_2 + 0x1c) = *(undefined2 *)(lVar1 + 0x18);
  iVar3 = _getpid();
  *(short *)(param_2 + 2) = (short)((uint)iVar3 >> 0x10);
  *(short *)((longlong)param_2 + 0x1e) = (short)iVar3;
  return;
}



// FUNCTION 1436d4780 FUN_1436d4780 body=227 status=ok
// SIG undefined FUN_1436d4780(void)

undefined8 FUN_1436d4780(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  char *local_res8 [4];
  
  lVar2 = *param_1;
  lVar3 = *(longlong *)(lVar2 + 0x198);
  uVar4 = Curl_urldecode(lVar2,*(undefined8 *)(lVar2 + 0x89d8),0,local_res8,0,1);
  if ((int)uVar4 == 0) {
    if ((*local_res8[0] == '/') || (pcVar5 = local_res8[0], *local_res8[0] == '\\')) {
      pcVar5 = local_res8[0] + 1;
    }
    pcVar5 = (char *)(*(code *)PTR__strdup_1467dcc70)(pcVar5);
    *(char **)(lVar3 + 8) = pcVar5;
    if (pcVar5 == (char *)0x0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8[0]);
      return 0x1b;
    }
    pcVar5 = strchr(pcVar5,0x2f);
    if ((pcVar5 == (char *)0x0) &&
       (pcVar5 = strchr(*(char **)(lVar3 + 8),0x5c), pcVar5 == (char *)0x0)) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8[0]);
      return 3;
    }
    *pcVar5 = '\0';
    pcVar5 = pcVar5 + 1;
    *(char **)(lVar3 + 0x10) = pcVar5;
    cVar1 = *pcVar5;
    while (cVar1 != '\0') {
      if (*pcVar5 == '/') {
        *pcVar5 = '\\';
      }
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8[0]);
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1436d4870 FUN_1436d4870 body=235 status=ok
// SIG undefined FUN_1436d4870(void)

undefined8 FUN_1436d4870(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong local_res8;
  
  lVar2 = *(longlong *)(param_1 + 0x740);
  uVar4 = FUN_1436b5980(param_1,0,*(longlong *)(param_1 + 0x760) + lVar2,
                        0x9000 - *(longlong *)(param_1 + 0x760),&local_res8);
  if ((int)uVar4 == 0) {
    if ((local_res8 == 0) ||
       (*(longlong *)(param_1 + 0x760) = *(longlong *)(param_1 + 0x760) + local_res8,
       *(ulonglong *)(param_1 + 0x760) < 4)) {
      return 0;
    }
    uVar5 = Curl_read16_be(lVar2 + 2);
    uVar5 = (uVar5 & 0xffff) + 4;
    if (uVar5 <= *(ulonglong *)(param_1 + 0x760)) {
      if (0x24 < uVar5) {
        lVar1 = (ulonglong)*(byte *)(lVar2 + 0x24) * 2;
        if ((lVar1 + 0x27U <= uVar5) &&
           (uVar3 = Curl_read16_le(lVar1 + 0x25 + lVar2), uVar5 < lVar1 + 0x27 + (ulonglong)uVar3))
        {
          return 0x1a;
        }
      }
      *param_2 = lVar2;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1436d4960 FUN_1436d4960 body=225 status=ok
// SIG undefined FUN_1436d4960(void)

undefined8 FUN_1436d4960(longlong *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  if ((param_1[0xea] == 0) && (uVar1 = param_1[0xe9], uVar1 != 0)) {
    local_res8[0] = 0x4000;
    if (uVar1 < 0x4001) {
      local_res8[0] = (int)uVar1;
    }
    *(longlong *)(*param_1 + 0x188) = *param_1 + 0x47e9;
    uVar2 = FUN_1436b81a0(param_1,local_res8[0],local_res8);
    if (((int)uVar2 != 0) && ((int)uVar2 != 0x51)) {
      return uVar2;
    }
    if (local_res8[0] == 0) {
      return 0;
    }
    param_1[0xe9] = param_1[0xe9] - (longlong)local_res8[0];
    param_1[0xea] = (longlong)local_res8[0];
    param_1[0xeb] = 0;
  }
  if (param_1[0xea] != 0) {
    uVar2 = FUN_1436d4640(param_1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (param_1[0xea] != 0) {
      return 0x51;
    }
  }
  if (param_1[0xe9] != 0) {
    return 0x51;
  }
  uVar2 = FUN_1436d4870(param_1,param_2);
  return uVar2;
}



// FUNCTION 1436d4a50 FUN_1436d4a50 body=174 status=ok
// SIG undefined FUN_1436d4a50(void)

undefined8 FUN_1436d4a50(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_18 = (ulonglong)CONCAT21(*(undefined2 *)(*(longlong *)(lVar1 + 0x198) + 0x1a),3);
  FUN_1436d46d0(param_1,lVar1 + 0x47e9,CONCAT71((int7)((ulonglong)lVar1 >> 8),4),9);
  lVar1 = *param_1;
  *(ulonglong *)(lVar1 + 0x480d) = local_18;
  *(undefined1 *)(lVar1 + 0x4815) = 0;
  uVar2 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,0x2d,&local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8 != 0x2d) {
      param_1[0xea] = 0x2d;
      param_1[0xeb] = local_res8;
    }
    param_1[0xe9] = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436d4b00 FUN_1436d4b00 body=158 status=ok
// SIG undefined FUN_1436d4b00(void)

undefined8 FUN_1436d4b00(longlong *param_1,undefined1 param_2,void *param_3,size_t param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong local_res8;
  
  FUN_1436d46d0(param_1,*param_1 + 0x47e9,param_2);
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 0x480d),param_3,param_4);
  lVar2 = param_4 + 0x24;
  uVar1 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,lVar2,&local_res8);
  if ((int)uVar1 == 0) {
    if (local_res8 != lVar2) {
      param_1[0xea] = lVar2;
      param_1[0xeb] = local_res8;
    }
    param_1[0xe9] = 0;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436d4ba0 FUN_1436d4ba0 body=386 status=ok
// SIG undefined FUN_1436d4ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436d4ba0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined1 auStack_498 [32];
  longlong *local_478;
  longlong local_468 [2];
  undefined2 local_458 [3];
  undefined2 local_452;
  undefined4 local_448;
  undefined4 local_438;
  undefined4 local_434;
  short local_427;
  char local_425 [1037];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_498;
  lVar2 = *param_1;
  pcVar5 = *(char **)(*(longlong *)(lVar2 + 0x198) + 0x10);
  lVar3 = -1;
  do {
    lVar6 = lVar3;
    lVar3 = lVar6 + 1;
  } while (pcVar5[lVar3] != '\0');
  if (lVar6 + 2U < 0x401) {
    _guard_xfg_dispatch_icall_nop(local_458,0,0x433);
    local_458[0] = 0xff18;
    lVar3 = -1;
    do {
      lVar6 = lVar3;
      lVar3 = lVar6 + 1;
    } while (pcVar5[lVar3] != '\0');
    local_452 = (undefined2)lVar3;
    local_438 = 7;
    if (*(char *)(lVar2 + 0x450) == '\0') {
      local_448 = 0x80000000;
      local_434 = 1;
    }
    else {
      local_448 = 0xc0000000;
      local_434 = 5;
    }
    local_427 = (short)lVar6 + 2;
    lVar3 = -(longlong)pcVar5;
    do {
      cVar1 = *pcVar5;
      pcVar5[(longlong)(local_425 + lVar3)] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    FUN_1436d46d0(param_1,lVar2 + 0x47e9,0xa2,lVar6 + 0x35U);
    _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 0x480d),local_458,lVar6 + 0x35U);
    local_478 = local_468;
    lVar6 = lVar6 + 0x59;
    uVar4 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,lVar6);
    if ((int)uVar4 == 0) {
      if (local_468[0] != lVar6) {
        param_1[0xea] = lVar6;
        param_1[0xeb] = local_468[0];
      }
      uVar4 = 0;
      param_1[0xe9] = 0;
    }
  }
  else {
    uVar4 = 0x3f;
  }
  return uVar4;
}



// FUNCTION 1436d4d30 FUN_1436d4d30 body=244 status=ok
// SIG undefined FUN_1436d4d30(void)

undefined8 FUN_1436d4d30(longlong *param_1)

{
  undefined2 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 uStack_21;
  uint3 uStack_20;
  byte bStack_10;
  
  lVar2 = *param_1;
  uVar3 = *(ulonglong *)(lVar2 + 0x120);
  uVar1 = *(undefined2 *)(*(longlong *)(lVar2 + 0x198) + 0x1a);
  FUN_1436d46d0(param_1,lVar2 + 0x47e9,CONCAT71((int7)((longlong)uVar3 >> 0x28),0x2e),0x1b);
  lVar2 = *param_1;
  uStack_21 = (undefined1)uVar3;
  uStack_20 = (uint3)(uVar3 >> 8);
  bStack_10 = (byte)(uVar3 >> 0x38);
  *(undefined4 *)(lVar2 + 0x480d) = 0xff0c;
  *(uint *)(lVar2 + 0x4811) = (uint)CONCAT12(uStack_21,uVar1) << 8;
  *(uint *)(lVar2 + 0x4815) = (uint)uStack_20;
  *(undefined4 *)(lVar2 + 0x4819) = 0x800080;
  *(ulonglong *)(lVar2 + 0x481d) = (uVar3 >> 0x20) << 0x28;
  *(ushort *)(lVar2 + 0x4825) = (ushort)bStack_10;
  *(undefined1 *)(lVar2 + 0x4827) = 0;
  uVar4 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,0x3f,&local_res8);
  if ((int)uVar4 == 0) {
    if (local_res8 != 0x3f) {
      param_1[0xea] = 0x3f;
      param_1[0xeb] = local_res8;
    }
    param_1[0xe9] = 0;
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1436d4e30 FUN_1436d4e30 body=680 status=ok
// SIG undefined FUN_1436d4e30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436d4e30(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_4d8 [32];
  longlong *local_4b8;
  longlong local_4a8 [2];
  undefined2 local_498 [2];
  undefined4 local_493;
  undefined2 local_48f;
  undefined4 local_48d;
  undefined4 local_489;
  undefined4 local_481;
  short local_47d;
  undefined8 local_47b;
  undefined8 uStack_473;
  undefined8 local_46b;
  undefined8 local_463;
  undefined8 uStack_45b;
  undefined8 local_453;
  char local_44b [8];
  char acStack_443 [4];
  char acStack_43f [4];
  char acStack_43b [4];
  char acStack_437 [4];
  char acStack_433 [30];
  undefined1 auStack_415 [36];
  undefined1 auStack_3f1 [889];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [24];
  undefined1 local_30 [24];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_4d8;
  lVar2 = -1;
  do {
    lVar5 = lVar2;
    lVar2 = lVar5 + 1;
  } while (*(char *)(param_1[0xe5] + lVar2) != '\0');
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1[0xe4] + lVar2) != '\0');
  if ((ulonglong)(lVar5 + 0x48 + lVar2) < 0x401) {
    FUN_1436dd770(*param_1,param_1[0x31],local_48);
    FUN_1436dd710(local_48,param_1 + 0xe6,&local_78);
    FUN_1436dd840(*param_1,param_1[0x31],local_30);
    FUN_1436dd710(local_30,param_1 + 0xe6,&local_60);
    _guard_xfg_dispatch_icall_nop(local_498,0,0x41d);
    pcVar6 = (char *)param_1[0xe4];
    local_48f = 1;
    local_48d = (undefined4)param_1[0xe7];
    local_47b = local_78;
    uStack_473 = uStack_70;
    local_498[0] = 0xff0d;
    local_46b = local_68;
    local_463 = local_60;
    uStack_45b = uStack_58;
    local_493 = 0x19000;
    local_481 = 8;
    local_489 = 0x180018;
    local_453 = local_50;
    pcVar4 = pcVar6;
    do {
      cVar1 = *pcVar4;
      pcVar4[(longlong)(local_44b + -(longlong)pcVar6)] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    lVar2 = -1;
    do {
      lVar5 = lVar2;
      lVar2 = lVar5 + 1;
    } while (pcVar6[lVar5 + 1] != '\0');
    pcVar4 = (char *)param_1[0xe5];
    pcVar8 = local_44b + lVar5 + 2;
    pcVar6 = pcVar8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      *pcVar6 = cVar1;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    lVar2 = -1;
    do {
      lVar7 = lVar2;
      lVar2 = lVar7 + 1;
    } while (*(char *)(param_1[0xe5] + 1 + lVar7) != '\0');
    builtin_strncpy(local_44b + lVar7 + lVar5 + 4,"x86_64-pc-win32",0x10);
    builtin_strncpy(local_44b + lVar7 + lVar5 + 0x14,"curl",5);
    lVar2 = (longlong)(pcVar8 + lVar7 + 0x12) - (longlong)&local_47b;
    local_47d = (short)lVar2 + 5;
    FUN_1436d46d0(param_1,*param_1 + 0x47e9,CONCAT71((int7)((ulonglong)pcVar8 >> 8),0x73),
                  lVar2 + 0x22);
    _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 0x480d),local_498,lVar2 + 0x22);
    local_4b8 = local_4a8;
    lVar2 = lVar2 + 0x46;
    uVar3 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,lVar2);
    if ((int)uVar3 == 0) {
      if (local_4a8[0] != lVar2) {
        param_1[0xea] = lVar2;
        param_1[0xeb] = local_4a8[0];
      }
      uVar3 = 0;
      param_1[0xe9] = 0;
    }
  }
  else {
    uVar3 = 0x3f;
  }
  return uVar3;
}



// FUNCTION 1436d50e0 FUN_1436d50e0 body=500 status=ok
// SIG undefined FUN_1436d50e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1436d50e0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_478 [32];
  longlong *local_458;
  longlong local_448 [2];
  undefined2 local_438 [3];
  undefined2 local_431;
  short local_42f;
  undefined2 local_42d;
  char local_42b;
  undefined2 uStack_42a;
  char acStack_427 [4];
  char acStack_423 [13];
  undefined1 auStack_416 [36];
  undefined1 auStack_3f2 [970];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_478;
  pcVar6 = (char *)param_1[0x17];
  lVar7 = *(longlong *)(*param_1 + 0x198);
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (pcVar6[lVar2] != '\0');
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(*(longlong *)(lVar7 + 8) + lVar2) != '\0');
  if ((ulonglong)(lVar4 + 0xb + lVar2) < 0x401) {
    _guard_xfg_dispatch_icall_nop(local_438,0,0x40b);
    local_42d = 0x5c5c;
    local_42b = '\0';
    local_438[0] = 0xff04;
    local_431 = 0;
    pcVar3 = pcVar6;
    do {
      cVar1 = *pcVar3;
      pcVar3[(longlong)(&local_42b + -(longlong)pcVar6)] = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    lVar2 = -1;
    do {
      lVar4 = lVar2;
      lVar2 = lVar4 + 1;
    } while (pcVar6[lVar4 + 1] != '\0');
    *(undefined2 *)((longlong)&uStack_42a + lVar4) = 0x5c;
    pcVar8 = (char *)((longlong)&uStack_42a + lVar4 + 1U);
    pcVar6 = *(char **)(lVar7 + 8);
    pcVar3 = pcVar8;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      *pcVar3 = cVar1;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    lVar2 = -1;
    do {
      lVar4 = lVar2;
      lVar2 = lVar4 + 1;
    } while (*(char *)(*(longlong *)(lVar7 + 8) + 1 + lVar4) != '\0');
    builtin_strncpy(pcVar8 + lVar4 + 2,"?????",6);
    lVar7 = (longlong)(pcVar8 + lVar4 + 2) - (longlong)&local_42d;
    local_42f = (short)lVar7 + 6;
    FUN_1436d46d0(param_1,*param_1 + 0x47e9,CONCAT71((int7)((ulonglong)pcVar8 >> 8),0x75),
                  lVar7 + 0x11U);
    _guard_xfg_dispatch_icall_nop((void *)(*param_1 + 0x480d),local_438,lVar7 + 0x11U);
    local_458 = local_448;
    lVar7 = lVar7 + 0x35;
    uVar5 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,lVar7);
    if ((int)uVar5 == 0) {
      if (local_448[0] != lVar7) {
        param_1[0xea] = lVar7;
        param_1[0xeb] = local_448[0];
      }
      param_1[0xe9] = 0;
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0x3f;
  }
  return uVar5;
}



// FUNCTION 1436d52e0 FUN_1436d52e0 body=141 status=ok
// SIG undefined FUN_1436d52e0(void)

undefined8 FUN_1436d52e0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res8;
  
  FUN_1436d46d0(param_1,*param_1 + 0x47e9,0x71,3);
  lVar1 = *param_1;
  *(undefined2 *)(lVar1 + 0x480d) = 0;
  *(undefined1 *)(lVar1 + 0x480f) = 0;
  uVar2 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,0x27,&local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8 != 0x27) {
      param_1[0xea] = 0x27;
      param_1[0xeb] = local_res8;
    }
    param_1[0xe9] = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436d5370 FUN_1436d5370 body=245 status=ok
// SIG undefined FUN_1436d5370(void)

undefined8 FUN_1436d5370(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  
  lVar1 = *param_1;
  lVar3 = *(longlong *)(lVar1 + 0x90) - *(longlong *)(lVar1 + 0xb0);
  if (0x7ffe < lVar3) {
    lVar3 = 0x7fff;
  }
  *(undefined8 *)(lVar1 + 0x47e9) = 0;
  *(undefined8 *)(lVar1 + 0x47f1) = 0;
  *(undefined8 *)(lVar1 + 0x47f9) = 0;
  *(undefined8 *)(lVar1 + 0x4801) = 0;
  *(undefined8 *)(lVar1 + 0x4809) = 0;
  *(undefined8 *)(lVar1 + 0x4811) = 0;
  *(undefined8 *)(lVar1 + 0x4819) = 0;
  *(undefined8 *)(lVar1 + 0x4821) = 0;
  *(undefined4 *)(lVar1 + 0x4829) = 0;
  *(undefined2 *)(lVar1 + 0x480d) = 0xff0e;
  *(undefined2 *)(lVar1 + 0x4812) = *(undefined2 *)(*(longlong *)(lVar1 + 0x198) + 0x1a);
  *(int *)(lVar1 + 0x4814) = (int)*(undefined8 *)(lVar1 + 0x120);
  *(undefined2 *)(lVar1 + 0x4824) = 0x40;
  *(int *)(lVar1 + 0x4826) = (int)((ulonglong)*(undefined8 *)(lVar1 + 0x120) >> 0x20);
  *(short *)(lVar1 + 0x482a) = (short)lVar3 + 1;
  *(short *)(lVar1 + 0x4822) = (short)lVar3;
  FUN_1436d46d0(param_1,(undefined8 *)(lVar1 + 0x47e9),
                CONCAT71((int7)((ulonglong)*(longlong *)(lVar1 + 0x198) >> 8),0x2f),lVar3 + 0x20);
  uVar2 = FUN_1436b5de0(param_1,0,*param_1 + 0x47e9,0x44,&local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8 != 0x44) {
      param_1[0xea] = 0x44;
      param_1[0xeb] = local_res8;
    }
    param_1[0xe9] = lVar3;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436d5470 curl_win32_idn_to_ascii body=171 status=ok
// SIG undefined curl_win32_idn_to_ascii(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool curl_win32_idn_to_ascii(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  LPCWSTR lpUnicodeCharStr;
  longlong lVar2;
  bool bVar3;
  undefined1 auStackY_258 [32];
  WCHAR local_228 [256];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStackY_258;
  bVar3 = false;
  lpUnicodeCharStr = (LPCWSTR)Curl_convert_UTF8_to_wchar();
  if (lpUnicodeCharStr != (LPCWSTR)0x0) {
    iVar1 = IdnToAscii(0,lpUnicodeCharStr,-1,local_228,0xff);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lpUnicodeCharStr);
    if (iVar1 != 0) {
      lVar2 = Curl_convert_wchar_to_UTF8(local_228);
      bVar3 = lVar2 != 0;
      *param_2 = lVar2;
    }
  }
  return bVar3;
}



// FUNCTION 1436d5520 GetEnv body=129 status=ok
// SIG undefined GetEnv(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 GetEnv(char *param_1)

{
  char *lpSrc;
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  CHAR local_128 [272];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lpSrc = getenv(param_1);
  local_128[0] = '\0';
  if (lpSrc != (char *)0x0) {
    ExpandEnvironmentStringsA(lpSrc,local_128,0x104);
    if (local_128[0] != '\0') {
      uVar1 = (*(code *)PTR__strdup_1467dcc70)(local_128);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1436d55b0 GetEnv body=5 status=ok
// SIG undefined GetEnv(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 GetEnv(char *param_1)

{
  char *lpSrc;
  undefined8 uVar1;
  undefined1 auStack_148 [32];
  CHAR aCStack_128 [272];
  ulonglong uStack_18;
  
  uStack_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lpSrc = getenv(param_1);
  aCStack_128[0] = '\0';
  if (lpSrc != (char *)0x0) {
    ExpandEnvironmentStringsA(lpSrc,aCStack_128,0x104);
    if (aCStack_128[0] != '\0') {
      uVar1 = (*(code *)PTR__strdup_1467dcc70)(aCStack_128);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1436d55c0 FUN_1436d55c0 body=741 status=ok
// SIG undefined FUN_1436d55c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436d55c0(undefined8 param_1,longlong *param_2,longlong *param_3,char *param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined1 auStack_1a8 [32];
  longlong *local_188;
  FILE *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  char local_158 [256];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  uVar11 = 1;
  if (((char *)*param_2 == (char *)0x0) || (*(char *)*param_2 == '\0')) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  bVar1 = false;
  iVar8 = 0;
  bVar2 = false;
  bVar4 = false;
  iVar6 = 0;
  local_188 = param_3;
  local_178 = param_2;
  local_170 = param_1;
  if (param_4 == (char *)0x0) {
    lVar9 = GetEnv(&DAT_145b13080);
    if (lVar9 == 0) {
      return 1;
    }
    param_4 = (char *)curl_maprintf("%s%s%s",lVar9,&DAT_145b709a8,"_netrc");
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
    if (param_4 == (char *)0x0) {
      return 0xffffffff;
    }
    bVar1 = true;
  }
  local_180 = fopen(param_4,"rt");
  if (bVar1) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_4);
  }
  if (local_180 != (FILE *)0x0) {
LAB_1436d56b0:
    pcVar10 = fgets(local_158,0x100,local_180);
    if (pcVar10 != (char *)0x0) {
      pcVar10 = local_158;
LAB_1436d56d1:
      lVar9 = Curl_strtok_r(pcVar10,&DAT_145b709ac,local_168);
      plVar5 = local_188;
      if (lVar9 == 0) goto LAB_1436d56b0;
      pcVar10 = (char *)*local_178;
      if ((((pcVar10 != (char *)0x0) && (*pcVar10 != '\0')) && ((char *)*local_188 != (char *)0x0))
         && (*(char *)*local_188 != '\0')) goto LAB_1436d5873;
      if (iVar8 == 0) {
        iVar7 = Curl_strcasecompare("machine",lVar9);
        if (iVar7 != 0) {
          iVar8 = 1;
          pcVar10 = (char *)0x0;
          goto LAB_1436d56d1;
        }
        iVar7 = Curl_strcasecompare("default",lVar9);
        if (iVar7 != 0) {
LAB_1436d5857:
          uVar11 = 0;
          iVar8 = 2;
        }
      }
      else {
        if (iVar8 == 1) {
          iVar8 = Curl_strcasecompare(local_170,lVar9);
          if (iVar8 != 0) goto LAB_1436d5857;
          iVar8 = 0;
          pcVar10 = (char *)0x0;
          goto LAB_1436d56d1;
        }
        if (iVar8 == 2) {
          if (bVar2) {
            if (bVar3) {
              iVar6 = Curl_strcasecompare(pcVar10,lVar9);
              bVar2 = false;
              pcVar10 = (char *)0x0;
            }
            else {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
              lVar9 = (*(code *)PTR__strdup_1467dcc70)(lVar9);
              *local_178 = lVar9;
              if (lVar9 == 0) {
LAB_1436d586f:
                uVar11 = 0xffffffff;
                goto LAB_1436d5873;
              }
              bVar2 = false;
              pcVar10 = (char *)0x0;
            }
          }
          else if (bVar4) {
            if ((iVar6 != 0) || (!bVar3)) {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*local_188);
              lVar9 = (*(code *)PTR__strdup_1467dcc70)();
              *plVar5 = lVar9;
              if (lVar9 == 0) goto LAB_1436d586f;
            }
            bVar4 = false;
            pcVar10 = (char *)0x0;
          }
          else {
            iVar7 = Curl_strcasecompare("login",lVar9);
            if (iVar7 == 0) {
              iVar7 = Curl_strcasecompare("password",lVar9);
              if (iVar7 == 0) {
                iVar7 = Curl_strcasecompare("machine",lVar9);
                if (iVar7 == 0) goto LAB_1436d585e;
                iVar6 = 0;
                iVar8 = 1;
                pcVar10 = (char *)0x0;
              }
              else {
                bVar4 = true;
                pcVar10 = (char *)0x0;
              }
            }
            else {
              bVar2 = true;
              pcVar10 = (char *)0x0;
            }
          }
          goto LAB_1436d56d1;
        }
      }
LAB_1436d585e:
      pcVar10 = (char *)0x0;
      goto LAB_1436d56d1;
    }
LAB_1436d5873:
    fclose(local_180);
  }
  return uVar11;
}



// FUNCTION 1436d58b0 FUN_1436d58b0 body=38 status=ok
// SIG undefined FUN_1436d58b0(void)

void FUN_1436d58b0(longlong param_1)

{
  FUN_1436de410(param_1 + 0x8850);
  FUN_1436de410(param_1 + 0x8860);
  return;
}



// FUNCTION 1436d58e0 FUN_1436d58e0 body=132 status=ok
// SIG undefined FUN_1436d58e0(void)

undefined8 FUN_1436d58e0(longlong *param_1,char param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar2 = *param_1;
  lVar4 = 0x8850;
  if (param_2 != '\0') {
    lVar4 = 0x8860;
  }
  iVar3 = Curl_raw_nequal("Digest",param_3,6);
  if (iVar3 != 0) {
    bVar1 = *(byte *)(param_3 + 6);
    param_3 = param_3 + 6;
    while ((bVar1 != 0 && (iVar3 = isspace((uint)bVar1), iVar3 != 0))) {
      bVar1 = *(byte *)(param_3 + 1);
      param_3 = param_3 + 1;
    }
    uVar5 = FUN_1436de3a0(param_3,lVar2 + lVar4);
    return uVar5;
  }
  return 0x3d;
}



// FUNCTION 1436d5970 FUN_1436d5970 body=438 status=ok
// SIG undefined FUN_1436d5970(void)

int FUN_1436d5970(longlong *param_1,char param_2,undefined8 param_3,char *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined1 local_48 [16];
  
  lVar1 = *param_1;
  if (param_2 == '\0') {
    puVar8 = (undefined1 *)param_1[0x30];
    lVar3 = 0x8850;
    puVar7 = (undefined1 *)param_1[0x31];
    lVar9 = 0x428;
    lVar10 = 0x8950;
  }
  else {
    puVar8 = (undefined1 *)param_1[0x34];
    lVar3 = 0x8860;
    puVar7 = (undefined1 *)param_1[0x35];
    lVar9 = 0x410;
    lVar10 = 0x8960;
  }
  param_1 = (longlong *)(lVar9 + (longlong)param_1);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  pcVar6 = "";
  puVar4 = &DAT_145af3922;
  if (puVar8 != (undefined1 *)0x0) {
    puVar4 = puVar8;
  }
  puVar8 = &DAT_145af3922;
  if (puVar7 != (undefined1 *)0x0) {
    puVar8 = puVar7;
  }
  if (*(longlong *)(lVar3 + lVar1) == 0) {
    *(undefined1 *)(lVar10 + 0xc + lVar1) = 0;
LAB_1436d5b0c:
    iVar2 = 0;
  }
  else {
    if ((*(char *)(lVar10 + 0xe + lVar1) == '\0') ||
       (pcVar5 = strchr(param_4,0x3f), pcVar5 == (char *)0x0)) {
      lVar9 = (*(code *)PTR__strdup_1467dcc70)(param_4);
    }
    else {
      lVar9 = curl_maprintf(&DAT_145b709c0,(longlong)pcVar5 - (longlong)param_4,param_4);
    }
    if (lVar9 != 0) {
      iVar2 = FUN_1436ddca0(lVar1,puVar4,puVar8,param_3,lVar9,(longlong *)(lVar3 + lVar1),
                            &local_res8,local_48);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      if (iVar2 != 0) {
        return iVar2;
      }
      if (param_2 != '\0') {
        pcVar6 = "Proxy-";
      }
      lVar3 = curl_maprintf("%sAuthorization: Digest %s\r\n",pcVar6,local_res8);
      *param_1 = lVar3;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
      if (*param_1 != 0) {
        *(undefined1 *)(lVar10 + 0xc + lVar1) = 1;
        goto LAB_1436d5b0c;
      }
    }
    iVar2 = 0x1b;
  }
  return iVar2;
}



// FUNCTION 1436d5b30 FUN_1436d5b30 body=38 status=ok
// SIG undefined FUN_1436d5b30(void)

void FUN_1436d5b30(longlong param_1)

{
  FUN_1436de9e0(param_1 + 0x500);
  FUN_1436de9e0(param_1 + 0x570);
  return;
}



// FUNCTION 1436d5b60 FUN_1436d5b60 body=335 status=ok
// SIG undefined FUN_1436d5b60(void)

undefined8 FUN_1436d5b60(undefined8 *param_1,char param_2,longlong param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  longlong lVar6;
  int *piVar7;
  
  lVar6 = 0x500;
  if (param_2 != '\0') {
    lVar6 = 0x570;
  }
  piVar7 = (int *)(lVar6 + (longlong)param_1);
  iVar3 = Curl_raw_nequal(&DAT_145b6b11c,param_3,4);
  if (iVar3 != 0) {
    pcVar5 = (char *)(param_3 + 4);
    bVar2 = *(byte *)(param_3 + 4);
    while (bVar2 != 0) {
      iVar3 = isspace((uint)bVar2);
      if (iVar3 == 0) {
        if (*pcVar5 != '\0') {
          uVar4 = FUN_1436de950(*param_1,pcVar5,piVar7);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          *piVar7 = 2;
          return uVar4;
        }
        break;
      }
      pbVar1 = (byte *)(pcVar5 + 1);
      pcVar5 = pcVar5 + 1;
      bVar2 = *pbVar1;
    }
    iVar3 = *piVar7;
    if (iVar3 == 4) {
      FUN_1436b58e0(*param_1,"NTLM auth restarted\n");
      FUN_1436de9e0(param_1 + 0xa0);
      FUN_1436de9e0(param_1 + 0xae);
    }
    else {
      if (iVar3 == 3) {
        FUN_1436b58e0(*param_1,"NTLM handshake rejected\n");
        FUN_1436de9e0(param_1 + 0xa0);
        FUN_1436de9e0(param_1 + 0xae);
        *piVar7 = 0;
        return 9;
      }
      if (0 < iVar3) {
        FUN_1436b58e0(*param_1,"NTLM handshake failure (internal error)\n");
        return 9;
      }
    }
    *piVar7 = 1;
  }
  return 0;
}



// FUNCTION 1436d5cb0 FUN_1436d5cb0 body=545 status=ok
// SIG undefined FUN_1436d5cb0(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1436d5cb0(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  undefined1 *puVar11;
  longlong local_res18 [2];
  
  local_res18[0] = 0;
  local_res18[1] = 0;
  if (param_2 == '\0') {
    puVar4 = (undefined1 *)param_1[0x30];
    lVar8 = *param_1 + 0x8950;
    puVar6 = (undefined1 *)param_1[0x31];
    lVar7 = 0x428;
    lVar10 = 0x500;
  }
  else {
    puVar4 = (undefined1 *)param_1[0x34];
    lVar8 = *param_1 + 0x8960;
    puVar6 = (undefined1 *)param_1[0x35];
    lVar7 = 0x410;
    lVar10 = 0x570;
  }
  *(undefined1 *)(lVar8 + 0xc) = 0;
  pcVar9 = "";
  piVar1 = (int *)(lVar10 + (longlong)param_1);
  puVar11 = &DAT_145af3922;
  if (puVar4 != (undefined1 *)0x0) {
    puVar11 = puVar4;
  }
  plVar2 = (longlong *)(lVar7 + (longlong)param_1);
  puVar4 = &DAT_145af3922;
  if (puVar6 != (undefined1 *)0x0) {
    puVar4 = puVar6;
  }
  if ((DAT_146b7b8d8 == 0) && (uVar5 = FUN_1436ab940(), DAT_146b7b8d8 == 0)) {
    return uVar5;
  }
  iVar3 = *piVar1;
  if (iVar3 == 2) {
    uVar5 = FUN_1436de800(*param_1,puVar11,puVar4,piVar1,local_res18,local_res18 + 1);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_res18[0] == 0) {
      return 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar2);
    if (param_2 != '\0') {
      pcVar9 = "Proxy-";
    }
    lVar7 = curl_maprintf("%sAuthorization: NTLM %s\r\n",pcVar9,local_res18[0]);
    *plVar2 = lVar7;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res18[0]);
    if (*plVar2 == 0) {
      return 0x1b;
    }
    *piVar1 = 3;
  }
  else {
    if (iVar3 == 3) {
      *piVar1 = 4;
    }
    else if (iVar3 != 4) {
      uVar5 = FUN_1436de590(puVar11,puVar4,piVar1,local_res18,local_res18 + 1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      if (local_res18[0] == 0) {
        return 0;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar2);
      if (param_2 != '\0') {
        pcVar9 = "Proxy-";
      }
      lVar7 = curl_maprintf("%sAuthorization: NTLM %s\r\n",pcVar9,local_res18[0]);
      *plVar2 = lVar7;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res18[0]);
      if (*plVar2 != 0) {
        return 0;
      }
      return 0x1b;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*plVar2);
    *plVar2 = 0;
  }
  *(undefined1 *)(lVar8 + 0xc) = 1;
  return 0;
}



// FUNCTION 1436d5ee0 FUN_1436d5ee0 body=1208 status=ok
// SIG undefined FUN_1436d5ee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1436d5ee0(void *param_1,char *param_2,undefined4 param_3,int param_4,undefined8 *param_5,
             char param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar14;
  undefined1 auStack_208 [32];
  longlong **local_1e8;
  undefined1 *local_1e0;
  uint local_1d8;
  uint local_1d0;
  char local_1c8;
  longlong *local_1c0;
  undefined1 local_1b8 [5];
  undefined1 uStack_1b3;
  undefined1 uStack_1b2;
  undefined1 uStack_1b1;
  char local_1a8 [4];
  undefined4 local_1a4;
  char local_1a0 [264];
  undefined1 local_98 [64];
  ulonglong local_58;
  ulonglong uVar13;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  local_1c8 = param_6;
  uVar2 = *param_5;
  uVar3 = param_5[(longlong)param_4 + 0x3a];
  iVar5 = FUN_1436b6c20(uVar2,0,1);
  if (iVar5 < 0) {
    FUN_1436b5820(uVar2,"Connection time-out");
    return 0x1c;
  }
  curlx_nonblock(uVar3,0);
  FUN_1436b58e0(uVar2,"SOCKS4 communication to %s:%d\n",param_2,param_3);
  local_1a8[0] = '\x04';
  local_1a8[1] = '\x01';
  local_1a8[2] = (char)((uint)param_3 >> 8);
  local_1a8[3] = (char)param_3;
  if (param_6 == '\0') {
    iVar5 = Curl_resolv(param_5,param_2,param_3,&local_1c0);
    if (iVar5 == -1) {
      return 5;
    }
    if (iVar5 == 1) {
      FUN_1436abd90(param_5,&local_1c0);
    }
    if ((local_1c0 == (longlong *)0x0) || (lVar10 = *local_1c0, lVar10 == 0)) {
LAB_1436d607f:
      FUN_1436b5820(uVar2,"Failed to resolve \"%s\" for SOCKS4 connect.",param_2);
      return 6;
    }
    Curl_printable_address(lVar10,local_98,0x40);
    local_1e0 = &uStack_1b2;
    local_1e8 = (longlong **)(local_1b8 + 4);
    iVar5 = FUN_143662c40(local_98,"%hu.%hu.%hu.%hu",local_1b8,local_1b8 + 2);
    if (iVar5 == 4) {
      local_1a4 = CONCAT13(uStack_1b2,CONCAT12(local_1b8[4],CONCAT11(local_1b8[2],local_1b8[0])));
    }
    else {
      lVar10 = 0;
    }
    FUN_1436b58e0(uVar2,"SOCKS4 connect to %s (locally resolved)\n",local_98);
    Curl_resolv_unlock(uVar2,local_1c0);
    if (lVar10 == 0) goto LAB_1436d607f;
  }
  local_1a0[0] = '\0';
  if (param_1 != (void *)0x0) {
    uVar12 = 0xffffffffffffffff;
    do {
      uVar13 = uVar12;
      uVar12 = uVar13 + 1;
    } while (*(char *)((longlong)param_1 + uVar12) != '\0');
    if (0xfd < uVar12) {
      pcVar7 = "Too long SOCKS proxy name, can\'t use!\n";
      goto LAB_1436d6368;
    }
    _guard_xfg_dispatch_icall_nop(local_1a0,param_1,uVar13 + 2);
  }
  lVar11 = 0;
  lVar10 = -1;
  do {
    lVar8 = lVar10 + 1;
    lVar4 = lVar10 + 1;
    lVar10 = lVar8;
  } while (local_1a0[lVar4] != '\0');
  iVar5 = (int)lVar8 + 9;
  if (param_6 != '\0') {
    local_1a4 = 0x1000000;
    lVar10 = -1;
    do {
      lVar11 = lVar10;
      lVar10 = lVar11 + 1;
    } while (param_2[lVar10] != '\0');
    lVar11 = lVar11 + 2;
    if (iVar5 + lVar11 < 0x107) {
      pcVar7 = param_2;
      do {
        cVar1 = *pcVar7;
        pcVar7[(longlong)(local_1a8 + ((longlong)iVar5 - (longlong)param_2))] = cVar1;
        pcVar7 = pcVar7 + 1;
      } while (cVar1 != '\0');
    }
    else {
      lVar11 = 0;
    }
  }
  local_1e8 = &local_1c0;
  iVar6 = FUN_1436b5e50(param_5,uVar3,local_1a8,(longlong *)(iVar5 + lVar11));
  cVar1 = local_1c8;
  if ((iVar6 == 0) && (local_1c0 == (longlong *)(iVar5 + lVar11))) {
    if ((local_1c8 != '\0') && (lVar10 = -1, lVar11 == 0)) {
      do {
        lVar11 = lVar10;
        lVar10 = lVar11 + 1;
      } while (param_2[lVar10] != '\0');
      local_1e8 = &local_1c0;
      plVar9 = (longlong *)(lVar11 + 2);
      iVar5 = FUN_1436b5e50(param_5,uVar3,param_2,plVar9);
      if ((iVar5 != 0) || (local_1c0 != plVar9)) goto LAB_1436d6361;
    }
    local_1e8 = (longlong **)local_1b8;
    iVar5 = Curl_blockread_all(param_5,uVar3,local_1a8,8);
    if ((iVar5 == 0) &&
       (CONCAT17(uStack_1b1,
                 CONCAT16(uStack_1b2,
                          CONCAT15(uStack_1b3,
                                   CONCAT14(local_1b8[4],
                                            CONCAT13(local_1b8[3],
                                                     CONCAT12(local_1b8[2],
                                                              CONCAT11(local_1b8[1],local_1b8[0]))))
                                  ))) == 8)) {
      if (local_1a8[0] == '\0') {
        local_1d0 = (uint)(byte)local_1a8[1];
        if (local_1a8[1] == 0x5a) {
          puVar14 = &DAT_145af3922;
          if (cVar1 != '\0') {
            puVar14 = &DAT_145b07098;
          }
          FUN_1436b58e0(uVar2,"SOCKS4%s request granted.\n",puVar14);
          curlx_nonblock(uVar3,1);
          return 0;
        }
        if (local_1a8[1] == 0x5b) {
          local_1d8 = (uint)CONCAT11(local_1a0[0],local_1a0[1]);
          local_1d0 = 0x5b;
          local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(uint)local_1a4._3_1_);
          local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,(uint)local_1a4._2_1_);
          FUN_1436b5820(uVar2,
                        "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected or failed."
                        ,(undefined1)local_1a4,local_1a4._1_1_);
          return 7;
        }
        if (local_1a8[1] == 0x5c) {
          local_1d8 = (uint)CONCAT11(local_1a0[0],local_1a0[1]);
          local_1d0 = 0x5c;
          local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(uint)local_1a4._3_1_);
          local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,(uint)local_1a4._2_1_);
          FUN_1436b5820(uVar2,
                        "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because SOCKS server cannot connect to identd on the client."
                        ,(undefined1)local_1a4,local_1a4._1_1_);
          return 7;
        }
        local_1d8 = (uint)CONCAT11(local_1a0[0],local_1a0[1]);
        if (local_1a8[1] != 0x5d) {
          local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(uint)local_1a4._3_1_);
          local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,(uint)local_1a4._2_1_);
          FUN_1436b5820(uVar2,"Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), Unknown.",
                        (undefined1)local_1a4,local_1a4._1_1_);
          return 7;
        }
        local_1d0 = 0x5d;
        local_1e0 = (undefined1 *)CONCAT44(local_1e0._4_4_,(uint)local_1a4._3_1_);
        local_1e8 = (longlong **)CONCAT44(local_1e8._4_4_,(uint)local_1a4._2_1_);
        FUN_1436b5820(uVar2,
                      "Can\'t complete SOCKS4 connection to %d.%d.%d.%d:%d. (%d), request rejected because the client program and identd report different user-ids."
                      ,(undefined1)local_1a4,local_1a4._1_1_);
        return 7;
      }
      pcVar7 = "SOCKS4 reply has wrong version, version should be 4.";
    }
    else {
      pcVar7 = "Failed to receive SOCKS4 connect request ack.";
    }
  }
  else {
LAB_1436d6361:
    pcVar7 = "Failed to send SOCKS4 connect request.";
  }
LAB_1436d6368:
  FUN_1436b5820(uVar2,pcVar7);
  return 7;
}



// FUNCTION 1436d63a0 FUN_1436d63a0 body=2065 status=ok
// SIG undefined FUN_1436d63a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1436d63a0(char *param_1,void *param_2,void *param_3,undefined4 param_4,uint param_5,
             undefined8 *param_6)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  size_t _Size;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  size_t _Size_00;
  longlong lVar12;
  ulonglong uVar13;
  longlong lVar15;
  undefined1 auStack_3a8 [32];
  longlong *local_388;
  uint local_380;
  uint local_378;
  uint local_370;
  uint local_368;
  uint local_360;
  uint local_358;
  uint local_350;
  uint local_348;
  uint local_340;
  uint local_338;
  uint local_330;
  uint local_328;
  uint local_320;
  uint local_318;
  uint local_310;
  bool local_308;
  uint local_300;
  undefined4 uStack_2fc;
  longlong local_2f8;
  undefined4 local_2f0;
  longlong local_2e8;
  void *local_2e0;
  undefined8 local_2d8;
  void *local_2d0;
  undefined8 *local_2c8;
  undefined8 local_2c0;
  char local_2b8 [2];
  undefined2 local_2b6;
  byte local_2b4 [4];
  byte local_2b0;
  byte local_2af;
  byte local_2ae;
  byte local_2ad;
  byte local_2ac;
  byte local_2ab;
  byte local_2aa;
  byte local_2a9;
  byte local_2a8;
  byte local_2a7;
  byte local_2a6;
  byte local_2a5;
  ulonglong local_58;
  ulonglong uVar14;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_3a8;
  local_300 = param_5;
  uVar6 = *param_6;
  uVar5 = param_6[(longlong)(int)param_5 + 0x3a];
  local_308 = *(int *)(param_6 + 0x36) == 5;
  local_2c8 = param_6;
  uVar13 = 0xffffffffffffffff;
  do {
    uVar14 = uVar13;
    uVar13 = uVar14 + 1;
  } while (*(char *)((longlong)param_3 + uVar13) != '\0');
  local_2f0 = param_4;
  local_2e0 = param_3;
  local_2d8 = uVar5;
  local_2d0 = param_2;
  local_2c0 = uVar6;
  if ((*(int *)(param_6 + 0x36) != 5) && (0xff < uVar13)) {
    FUN_1436b58e0(uVar6,
                  "SOCKS5: server resolving disabled for hostnames of length > 255 [actual len=%zu]\n"
                  ,uVar13);
    local_308 = true;
  }
  iVar2 = FUN_1436b6c20(uVar6,0,1);
  if (iVar2 < 0) {
    FUN_1436b5820(uVar6,"Connection time-out");
    return 0x1c;
  }
  curlx_nonblock(uVar5,1);
  uVar3 = FUN_1436b50e0(0xffffffffffffffff,0xffffffffffffffff,uVar5,iVar2);
  if (uVar3 == 0xffffffff) {
    uVar6 = *param_6;
    pcVar7 = "SOCKS5: no connection here";
  }
  else {
    if (uVar3 == 0) {
      FUN_1436b5820(*param_6,"SOCKS5: connection timeout");
      return 0x1c;
    }
    if ((uVar3 & 4) == 0) {
      local_2b6 = 0x100;
      local_2b4[0] = 2;
      local_2b8[1] = (param_1 != (char *)0x0) + '\x02';
      local_2b8[0] = 5;
      curlx_nonblock(uVar5,0);
      local_388 = &local_2e8;
      iVar4 = FUN_1436b5e50(param_6,uVar5,local_2b8,(ulonglong)(byte)local_2b8[1] + 2);
      if ((iVar4 == 0) && (local_2e8 == (ulonglong)(byte)local_2b8[1] + 2)) {
        curlx_nonblock(uVar5,1);
        _Size = 0xffffffffffffffff;
        uVar3 = FUN_1436b50e0(uVar5,0xffffffffffffffff,0xffffffffffffffff,iVar2);
        if (uVar3 == 0xffffffff) {
          uVar6 = *param_6;
          pcVar7 = "SOCKS5 nothing to read";
        }
        else {
          if (uVar3 == 0) {
            FUN_1436b5820(*param_6,"SOCKS5 read timeout");
            return 0x1c;
          }
          if ((uVar3 & 4) != 0) {
            FUN_1436b5820(*param_6,"SOCKS5 read error occurred");
            return 0x38;
          }
          curlx_nonblock(uVar5,0);
          local_388 = &local_2f8;
          iVar2 = Curl_blockread_all(param_6,uVar5,local_2b8,2);
          pvVar11 = local_2d0;
          if ((iVar2 == 0) && (local_2f8 == 2)) {
            if (local_2b8[0] == '\x05') {
              if (local_2b8[1] != '\0') {
                if (local_2b8[1] == '\x01') {
                  iVar2 = FUN_1436dea70(local_300,param_6);
                  if (iVar2 != 0) {
                    pcVar7 = "Unable to negotiate SOCKS5 GSS-API context.";
                    goto LAB_1436d6b84;
                  }
                }
                else {
                  if (local_2b8[1] != '\x02') {
                    if (local_2b8[1] == -1) {
                      if ((param_1 == (char *)0x0) ||
                         (pcVar7 = "No authentication method was acceptable.", *param_1 == '\0')) {
                        pcVar7 = 
                        "No authentication method was acceptable. (It is quite likely that the SOCKS5 server wanted a username/password, since none was supplied to the server on this connection.)"
                        ;
                      }
                    }
                    else {
                      pcVar7 = "Undocumented SOCKS5 mode attempted to be used by server.";
                    }
                    goto LAB_1436d6b84;
                  }
                  if ((param_1 == (char *)0x0) || (local_2d0 == (void *)0x0)) {
                    _Size = 0;
                    _Size_00 = 0;
                  }
                  else {
                    do {
                      _Size = _Size + 1;
                    } while (param_1[_Size] != '\0');
                    _Size_00 = 0xffffffffffffffff;
                    do {
                      _Size_00 = _Size_00 + 1;
                    } while (*(char *)((longlong)local_2d0 + _Size_00) != '\0');
                  }
                  local_2b8[1] = (char)_Size;
                  local_2b8[0] = 1;
                  if ((param_1 != (char *)0x0) && (_Size != 0)) {
                    _guard_xfg_dispatch_icall_nop(&local_2b6,param_1,_Size);
                  }
                  local_2b4[_Size - 2] = (byte)_Size_00;
                  if ((pvVar11 != (void *)0x0) && (_Size_00 != 0)) {
                    _guard_xfg_dispatch_icall_nop(local_2b4 + (_Size - 1),pvVar11,_Size_00);
                  }
                  uVar5 = local_2d8;
                  lVar9 = _Size + 3 + _Size_00;
                  local_388 = &local_2e8;
                  iVar2 = FUN_1436b5e50(param_6,local_2d8,local_2b8,lVar9);
                  if ((iVar2 != 0) || (lVar9 != local_2e8)) {
                    pcVar7 = "Failed to send SOCKS5 sub-negotiation request.";
                    goto LAB_1436d6b84;
                  }
                  local_388 = &local_2f8;
                  iVar2 = Curl_blockread_all(param_6,uVar5,local_2b8,2);
                  if ((iVar2 != 0) || (local_2f8 != 2)) {
                    pcVar7 = "Unable to receive SOCKS5 sub-negotiation response.";
                    goto LAB_1436d6b84;
                  }
                  if (local_2b8[1] != '\0') {
                    FUN_1436b5820(uVar6,"User was rejected by the SOCKS5 server (%d %d).",
                                  local_2b8[0],local_2b8[1]);
                    return 7;
                  }
                }
              }
              pvVar11 = local_2e0;
              lVar9 = 3;
              local_2b8[0] = '\x05';
              local_2b8[1] = '\x01';
              local_2b6 = local_2b6 & 0xff00;
              if (local_308 == false) {
                local_2b6 = 0x300;
                local_2b4[0] = (byte)uVar13;
                _guard_xfg_dispatch_icall_nop(local_2b4 + 1,local_2e0,uVar13);
                lVar9 = uVar14 + 6;
              }
              else {
                iVar2 = Curl_resolv(param_6,local_2e0,local_2f0,&local_300);
                if (iVar2 == -1) {
                  return 6;
                }
                if ((iVar2 == 1) && (uVar5 = FUN_1436abd90(param_6,&local_300), (int)uVar5 != 0)) {
                  return uVar5;
                }
                plVar10 = (longlong *)CONCAT44(uStack_2fc,local_300);
                if ((plVar10 == (longlong *)0x0) || (lVar15 = *plVar10, lVar15 == 0)) {
LAB_1436d6b58:
                  FUN_1436b5820(uVar6,"Failed to resolve \"%s\" for SOCKS5 connect.",pvVar11);
                  return 6;
                }
                if (*(int *)(lVar15 + 4) == 2) {
                  local_2b6 = CONCAT11(1,(undefined1)local_2b6);
                  lVar1 = *(longlong *)(lVar15 + 0x20);
                  lVar12 = 4;
                  lVar8 = 4;
                  do {
                    local_2b8[lVar8] = *(char *)(lVar8 + lVar1);
                    lVar9 = lVar8 + 1;
                    FUN_1436b58e0(uVar6,&DAT_145b7113c,local_2b8[lVar8]);
                    lVar12 = lVar12 + -1;
                    lVar8 = lVar9;
                  } while (lVar12 != 0);
                  plVar10 = (longlong *)CONCAT44(uStack_2fc,local_300);
                  param_6 = local_2c8;
                  pvVar11 = local_2e0;
                }
                else if (*(int *)(lVar15 + 4) == 0x17) {
                  local_2b6 = CONCAT11(4,(undefined1)local_2b6);
                  lVar1 = *(longlong *)(lVar15 + 0x20);
                  lVar9 = 4;
                  lVar8 = 0x10;
                  do {
                    local_2b8[lVar9] = *(char *)(lVar1 + 4 + lVar9);
                    lVar9 = lVar9 + 1;
                    lVar8 = lVar8 + -1;
                  } while (lVar8 != 0);
                }
                else {
                  lVar15 = 0;
                }
                Curl_resolv_unlock(uVar6,plVar10);
                if (lVar15 == 0) goto LAB_1436d6b58;
              }
              uVar5 = local_2d8;
              iVar2 = 0;
              local_2b8[lVar9] = (char)((uint)local_2f0 >> 8);
              local_2b8[lVar9 + 1] = (char)local_2f0;
              if (*(int *)(param_6 + 0xff) == 0) {
                local_388 = &local_2e8;
                iVar2 = FUN_1436b5e50(param_6,local_2d8,local_2b8,lVar9 + 2);
              }
              else {
                FUN_1436b5820(uVar6,"SOCKS5 GSS-API protection not yet implemented.");
                uVar5 = local_2d8;
              }
              if ((iVar2 == 0) && (lVar9 + 2 == local_2e8)) {
                uVar13 = 10;
                if (*(int *)(param_6 + 0xff) == 0) {
                  local_388 = &local_2f8;
                  iVar2 = Curl_blockread_all(param_6,uVar5,local_2b8,10);
                  if ((iVar2 == 0) && (local_2f8 == 10)) {
                    if (local_2b8[0] != '\x05') {
                      pcVar7 = "SOCKS5 reply has wrong version, version should be 5.";
                      goto LAB_1436d6b84;
                    }
                    if (local_2b8[1] != 0) {
                      if (local_2b6._1_1_ == '\x01') {
                        local_370 = (uint)(byte)local_2b8[1];
                        local_378 = (uint)CONCAT11(local_2b0,local_2af);
                        local_380 = (uint)local_2b4[3];
                        local_388 = (longlong *)CONCAT44(local_388._4_4_,(uint)local_2b4[2]);
                        FUN_1436b5820(uVar6,
                                      "Can\'t complete SOCKS5 connection to %d.%d.%d.%d:%d. (%d)",
                                      local_2b4[0],local_2b4[1]);
                        return 7;
                      }
                      if (local_2b6._1_1_ == '\x03') {
                        local_388 = (longlong *)CONCAT44(local_388._4_4_,(uint)(byte)local_2b8[1]);
                        FUN_1436b5820(uVar6,"Can\'t complete SOCKS5 connection to %s:%d. (%d)",
                                      pvVar11,CONCAT11(local_2b0,local_2af));
                        return 7;
                      }
                      if (local_2b6._1_1_ != '\x04') {
                        return 7;
                      }
                      local_310 = (uint)(byte)local_2b8[1];
                      local_318 = (uint)CONCAT11(local_2b0,local_2af);
                      local_320 = (uint)local_2a5;
                      local_328 = (uint)local_2a6;
                      local_330 = (uint)local_2a7;
                      local_338 = (uint)local_2a8;
                      local_340 = (uint)local_2a9;
                      local_348 = (uint)local_2aa;
                      local_350 = (uint)local_2ab;
                      local_358 = (uint)local_2ac;
                      local_360 = (uint)local_2ad;
                      local_368 = (uint)local_2ae;
                      local_370 = (uint)local_2af;
                      local_378 = (uint)local_2b0;
                      local_380 = (uint)local_2b4[3];
                      local_388 = (longlong *)CONCAT44(local_388._4_4_,(uint)local_2b4[2]);
                      local_300 = local_318;
                      FUN_1436b5820(local_2c0,
                                    "Can\'t complete SOCKS5 connection to %02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%02x%02x:%d. (%d)"
                                    ,local_2b4[0],local_2b4[1]);
                      return 7;
                    }
                    if (local_2b6._1_1_ == '\x03') {
                      uVar13 = (ulonglong)local_2b4[0] + 7;
                    }
                    else if (local_2b6._1_1_ == '\x04') {
                      uVar13 = 0x16;
                    }
                    if ((*(int *)(param_6 + 0xff) != 0) || (uVar13 < 0xb)) {
LAB_1436d6b3e:
                      curlx_nonblock(uVar5,1);
                      return 0;
                    }
                    local_388 = &local_2f8;
                    iVar2 = Curl_blockread_all(param_6,uVar5,&local_2ae,uVar13 - 10);
                    if ((iVar2 == 0) && (uVar13 - 10 == local_2f8)) goto LAB_1436d6b3e;
                  }
                  pcVar7 = "Failed to receive SOCKS5 connect request ack.";
                }
                else {
                  FUN_1436b5820(uVar6,"SOCKS5 GSS-API protection not yet implemented.");
                  pcVar7 = "Failed to receive SOCKS5 connect request ack.";
                }
              }
              else {
                pcVar7 = "Failed to send SOCKS5 connect request.";
              }
            }
            else {
              pcVar7 = "Received invalid version in initial SOCKS5 response.";
            }
          }
          else {
            pcVar7 = "Unable to receive initial SOCKS5 response.";
          }
        }
      }
      else {
        pcVar7 = "Unable to send initial SOCKS5 request.";
      }
    }
    else {
      uVar6 = *param_6;
      pcVar7 = "SOCKS5: error occurred during connection";
    }
  }
LAB_1436d6b84:
  FUN_1436b5820(uVar6,pcVar7);
  return 7;
}



// FUNCTION 1436d6bc0 Curl_blockread_all body=201 status=ok
// SIG undefined Curl_blockread_all(void)

undefined8
Curl_blockread_all(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  plVar1 = param_5;
  lVar4 = 0;
  *param_5 = 0;
  iVar2 = FUN_1436b6c20(*param_1,0,1);
  do {
    if (iVar2 < 0) {
      return 0x1c;
    }
    iVar2 = FUN_1436b50e0(param_2,0xffffffffffffffff,0xffffffffffffffff,iVar2);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
    uVar3 = Curl_read_plain(param_2,param_3,param_4,&param_5);
    if ((int)uVar3 != 0x51) {
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      if (param_4 == param_5) {
        *plVar1 = (longlong)param_5 + lVar4;
        return 0;
      }
      if (param_5 == (longlong *)0x0) {
        return 0xffffffff;
      }
      param_4 = (longlong *)((longlong)param_4 - (longlong)param_5);
      param_3 = param_3 + (longlong)param_5;
      lVar4 = lVar4 + (longlong)param_5;
    }
    iVar2 = FUN_1436b6c20(*param_1);
  } while( true );
}



// FUNCTION 1436d6c90 FUN_1436d6c90 body=2783 status=ok
// SIG undefined FUN_1436d6c90(void)

ulonglong FUN_1436d6c90(longlong *param_1,int param_2,char *param_3,ulonglong param_4,char param_5)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  char *pcVar18;
  char *pcVar19;
  longlong *plVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  char cVar23;
  undefined4 uVar24;
  uint local_94;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined4 local_60 [2];
  undefined8 local_58;
  longlong *local_50;
  
  lVar2 = *param_1;
  lVar11 = (longlong)param_2;
  local_60[0] = 0;
  local_80 = 0;
  bVar6 = false;
  local_68 = param_1[lVar11 + 0x3a];
  local_50 = param_1 + lVar11 + 0x3a;
  piVar1 = (int *)((longlong)param_1 + lVar11 * 4 + 0x810);
  bVar5 = false;
  bVar4 = false;
  if (*piVar1 == 2) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x7a) = 0;
  uVar15 = param_4;
  do {
    if (*piVar1 == 0) {
      FUN_1436b58e0(lVar2,"Establish HTTP proxy tunnel to %s:%hu\n",param_3,uVar15);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x178));
      *(undefined8 *)(lVar2 + 0x178) = 0;
      lVar11 = Curl_add_buffer_init();
      if (lVar11 == 0) {
        return 0x1b;
      }
      lVar12 = curl_maprintf("%s:%hu",param_3,(int)param_4);
      if (lVar12 == 0) goto LAB_1436d7614;
      uVar8 = FUN_1436bcd40(param_1,"CONNECT",lVar12,1);
      uVar15 = (ulonglong)uVar8;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar12);
      if (uVar8 == 0) {
        puVar17 = &DAT_145b6b528;
        if ((int)param_1[0x36] == 1) {
          puVar17 = &DAT_145b6b52c;
        }
        pcVar19 = "";
        puVar22 = &DAT_145af3922;
        cVar23 = *(char *)((longlong)param_1 + 0x3c1);
        if (param_3 != (char *)param_1[0x17]) {
          pcVar13 = strchr(param_3,0x3a);
          cVar23 = pcVar13 != (char *)0x0;
        }
        puVar21 = &DAT_145af3922;
        if (cVar23 != '\0') {
          puVar21 = &DAT_145b18618;
        }
        puVar16 = &DAT_145af3922;
        if (cVar23 != '\0') {
          puVar16 = &DAT_145b4dda8;
        }
        lVar12 = curl_maprintf("%s%s%s:%hu",puVar16,param_3,puVar21,param_4 & 0xffffffff);
        if (lVar12 == 0) {
LAB_1436d7614:
          Curl_add_buffer_free(lVar11);
          return 0x1b;
        }
        lVar14 = FUN_1436bc600(param_1,"Host:");
        if ((lVar14 == 0) &&
           (pcVar19 = (char *)curl_maprintf("Host: %s\r\n",lVar12), pcVar19 == (char *)0x0)) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar12);
          goto LAB_1436d7614;
        }
        lVar14 = FUN_1436bc600(param_1,"User-Agent:");
        if ((lVar14 == 0) && (*(longlong *)(lVar2 + 0x558) != 0)) {
          puVar22 = (undefined1 *)param_1[0x83];
        }
        puVar21 = &DAT_145af3922;
        if ((undefined1 *)param_1[0x82] != (undefined1 *)0x0) {
          puVar21 = (undefined1 *)param_1[0x82];
        }
        pcVar13 = pcVar19;
        uVar8 = Curl_add_bufferf(lVar11,"CONNECT %s HTTP/%s\r\n%s%s%s",lVar12,puVar17,pcVar19,
                                 puVar21,puVar22);
        uVar24 = (undefined4)((ulonglong)pcVar13 >> 0x20);
        uVar15 = (ulonglong)uVar8;
        if ((pcVar19 != (char *)0x0) && (*pcVar19 != '\0')) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar19);
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar12);
        if (uVar8 == 0) {
          uVar8 = FUN_1436bc260(param_1,1,lVar11);
          uVar15 = (ulonglong)uVar8;
          if (uVar8 == 0) {
            uVar8 = Curl_add_bufferf(lVar11,&DAT_145b5531c);
            uVar15 = (ulonglong)uVar8;
            if (uVar8 == 0) {
              uVar8 = FUN_1436bbff0(lVar11,param_1,lVar2 + 0x8a90,0,CONCAT44(uVar24,param_2));
              uVar15 = (ulonglong)uVar8;
            }
          }
        }
        lVar11 = 0;
        if ((int)uVar15 != 0) {
          FUN_1436b5820(lVar2,"Failed sending CONNECT to proxy");
        }
      }
      Curl_add_buffer_free(lVar11);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
      *piVar1 = 1;
    }
    lVar11 = local_68;
    iVar9 = FUN_1436b6c20(lVar2,0);
    if (iVar9 < 1) {
LAB_1436d7740:
      FUN_1436b5820(lVar2,"Proxy CONNECT aborted due to timeout");
      return 0x38;
    }
    if ((param_5 == '\0') &&
       (iVar9 = FUN_1436b50e0(lVar11,0xffffffffffffffff,0xffffffffffffffff,0), iVar9 == 0)) {
      return 0;
    }
    uVar8 = 1;
    local_70 = 0;
    iVar9 = 0;
    local_94 = 1;
    lVar11 = 0;
    pcVar13 = (char *)(lVar2 + 0x7e8);
    pcVar19 = (char *)(lVar2 + 0x7e8);
    do {
      if (uVar8 == 0) break;
      if (bVar4) {
        return 0x38;
      }
      iVar10 = FUN_1436b6c20(lVar2,0);
      if (iVar10 < 1) goto LAB_1436d7740;
      iVar3 = 1000;
      if (iVar10 < 1000) {
        iVar3 = iVar10;
      }
      iVar10 = FUN_1436b50e0(local_68,0xffffffffffffffff,0xffffffffffffffff,iVar3);
      if (iVar10 == -1) {
LAB_1436d7525:
        bVar4 = true;
        FUN_1436b5820(lVar2);
LAB_1436d7535:
        iVar10 = FUN_1436befa0(param_1);
        if (iVar10 != 0) {
          return 0x2a;
        }
      }
      else {
        if (iVar10 == 0) goto LAB_1436d7535;
        iVar10 = FUN_1436b5980(param_1,local_68,pcVar13,0x4000 - local_70,&local_78);
        if (iVar10 != 0x51) {
          if (iVar10 == 0) {
            if (local_78 < 1) {
              uVar8 = 0;
              local_94 = 0;
              if ((*(int *)(lVar2 + 0x1e8) == 0) || (*(int *)(lVar2 + 0x8968) == 0))
              goto LAB_1436d7525;
              *(undefined1 *)(param_1 + 0x7a) = 1;
              FUN_1436b58e0(lVar2);
            }
            else {
              local_70 = local_70 + local_78;
              if (uVar8 < 2) {
                iVar10 = 0;
                lVar12 = local_78;
                if (0 < local_78) {
                  do {
                    iVar9 = iVar9 + 1;
                    lVar11 = lVar11 + 1;
                    if (*pcVar13 == '\n') {
                      if (*(char *)(lVar2 + 0x458) != '\0') {
                        FUN_1436b56c0(lVar2,1,pcVar19,(longlong)iVar9,param_1);
                      }
                      uVar15 = Curl_client_write(param_1,(*(char *)(lVar2 + 0x44c) != '\0') + '\x02'
                                                 ,pcVar19,(longlong)iVar9);
                      *(int *)(lVar2 + 0x8a8c) = *(int *)(lVar2 + 0x8a8c) + iVar9;
                      *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + iVar9;
                      if ((int)uVar15 != 0) {
                        return uVar15;
                      }
                      if ((*pcVar19 == '\r') || (*pcVar19 == '\n')) {
                        pcVar13 = (char *)(lVar2 + 0x7e8);
                        local_70 = 0;
                        if ((*(int *)(lVar2 + 0x128) == 0x197) &&
                           (*(char *)(lVar2 + 0x8970) == '\0')) {
                          local_94 = 2;
                          if (local_80 == 0) {
                            if (bVar5) {
                              *(undefined1 *)(lVar2 + 0x16d) = 1;
                              FUN_1436b58e0(lVar2,"%zd bytes of chunk left\n",local_78 - iVar10);
                              if (pcVar19[1] == '\n') {
                                pcVar19 = pcVar19 + 1;
                                iVar10 = iVar10 + 1;
                              }
                              iVar10 = FUN_1436d7c70(param_1,pcVar19 + 1,local_78 - iVar10,&local_78
                                                    );
                              if (iVar10 == -1) {
                                FUN_1436b58e0(lVar2);
                                local_94 = 0;
                                *piVar1 = 2;
                                *piVar1 = 2;
                                uVar8 = 0;
                              }
                              else {
                                FUN_1436b58e0(lVar2,"Read %zd bytes of chunk, continue\n",local_78);
                                *piVar1 = 2;
                                uVar8 = 2;
                              }
                            }
                            else {
                              local_94 = 0;
                              *piVar1 = 2;
                              uVar8 = 0;
                            }
                          }
                          else {
                            FUN_1436b58e0(lVar2);
                            local_94 = 0;
                            local_80 = local_80 + (iVar10 - local_78);
                            if (0 < local_80) {
                              local_94 = 2;
                            }
                            *piVar1 = 2;
                            uVar8 = local_94;
                          }
                        }
                        else {
                          local_94 = 0;
                          if ((*(int *)(lVar2 + 0x8a7c) == 200) && (local_78 != iVar10 + 1)) {
                            FUN_1436b5820(lVar2);
                          }
                          *piVar1 = 2;
                          uVar8 = 0;
                        }
                        break;
                      }
                      pcVar18 = pcVar19 + lVar11;
                      cVar23 = *pcVar18;
                      *pcVar18 = '\0';
                      iVar9 = Curl_raw_nequal("WWW-Authenticate:",pcVar19,0x11);
                      if (((iVar9 == 0) || (iVar9 = *(int *)(lVar2 + 0x128), iVar9 != 0x191)) &&
                         ((iVar9 = Curl_raw_nequal("Proxy-authenticate:",pcVar19,0x13), iVar9 == 0
                          || (iVar9 = *(int *)(lVar2 + 0x128), iVar9 != 0x197)))) {
                        iVar9 = Curl_raw_nequal("Content-Length:",pcVar19,0xf);
                        if (iVar9 == 0) {
                          cVar7 = Curl_compareheader(pcVar19,"Connection:","close");
                          if (cVar7 == '\0') {
                            cVar7 = Curl_compareheader(pcVar19,"Transfer-Encoding:","chunked");
                            if (cVar7 == '\0') {
                              cVar7 = Curl_compareheader(pcVar19,"Proxy-Connection:","close");
                              if (cVar7 == '\0') {
                                iVar9 = FUN_143662c40(pcVar19,"HTTP/1.%d %d",local_60,lVar2 + 0x128)
                                ;
                                if (iVar9 == 2) {
                                  *(undefined4 *)(lVar2 + 0x8a7c) = *(undefined4 *)(lVar2 + 0x128);
                                }
                              }
                              else {
                                bVar6 = true;
                              }
                            }
                            else {
                              FUN_1436b58e0(lVar2);
                              bVar5 = true;
                              Curl_httpchunk_init(param_1);
                            }
                          }
                          else {
                            bVar6 = true;
                          }
                        }
                        else {
                          local_80 = strtoll(pcVar19 + 0xf,0,10);
                        }
                      }
                      else {
                        lVar11 = Curl_copy_header_value(pcVar19);
                        if (lVar11 == 0) {
                          return 0x1b;
                        }
                        uVar8 = FUN_1436bcaf0(param_1,iVar9 == 0x197,lVar11);
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar11);
                        if (uVar8 != 0) {
                          return (ulonglong)uVar8;
                        }
                      }
                      pcVar19 = pcVar13 + 1;
                      iVar9 = 0;
                      *pcVar18 = cVar23;
                      lVar11 = 0;
                      lVar12 = local_78;
                    }
                    iVar10 = iVar10 + 1;
                    pcVar13 = pcVar13 + 1;
                    uVar8 = local_94;
                  } while (iVar10 < lVar12);
                }
              }
              else {
                pcVar13 = (char *)(lVar2 + 0x7e8);
                local_70 = 0;
                if (local_80 == 0) {
                  local_58 = 0;
                  iVar10 = FUN_1436d7c70(param_1,lVar2 + 0x7e8,local_78,&local_58);
                  if (iVar10 == -1) {
                    FUN_1436b58e0(lVar2);
                    local_94 = 0;
                    *piVar1 = 2;
                    uVar8 = 0;
                  }
                  else {
                    FUN_1436b58e0(lVar2,"Read %zd bytes of chunk, continue\n",local_58);
                  }
                }
                else {
                  local_80 = local_80 - local_78;
                  if (local_80 < 1) {
                    local_94 = 0;
                    uVar8 = 0;
                  }
                }
              }
            }
          }
          else {
            local_94 = 0;
            uVar8 = 0;
          }
          goto LAB_1436d7535;
        }
      }
    } while (local_70 < 0x4000);
    if (bVar4) {
      return 0x38;
    }
    if (*(int *)(lVar2 + 0x8a7c) == 200) {
LAB_1436d7596:
      if (bVar6) goto LAB_1436d75a2;
    }
    else {
      uVar15 = FUN_1436bc900(param_1);
      if ((int)uVar15 != 0) {
        return uVar15;
      }
      if (*(char *)((longlong)param_1 + 0x3b9) == (char)uVar15) goto LAB_1436d7596;
      bVar6 = true;
LAB_1436d75a2:
      plVar20 = local_50;
      if (*(longlong *)(lVar2 + 0x178) != 0) {
        FUN_1436b61e0(param_1,*local_50);
        *plVar20 = -1;
LAB_1436d7654:
        if (*(int *)(lVar2 + 0x128) == 200) {
          *piVar1 = 2;
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x82]);
          param_1[0x82] = 0;
          *(undefined1 *)(lVar2 + 0x896c) = 1;
          FUN_1436b58e0(lVar2,"Proxy replied OK to CONNECT request\n");
          *(undefined1 *)(lVar2 + 0x16d) = 0;
          *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
        }
        else {
          if ((bVar6) && (*(longlong *)(lVar2 + 0x178) != 0)) {
            *(undefined1 *)(param_1 + 0x7a) = 1;
            FUN_1436b58e0(lVar2,"Connect me again please\n");
          }
          else {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar2 + 0x178));
            *(undefined8 *)(lVar2 + 0x178) = 0;
            *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
            FUN_1436b61e0(param_1,*plVar20);
            *plVar20 = -1;
          }
          *piVar1 = 0;
          if ((char)param_1[0x7a] == '\0') {
            FUN_1436b5820(lVar2,"Received HTTP code %d from proxy after CONNECT",
                          *(undefined4 *)(lVar2 + 0x128));
            return 0x38;
          }
        }
        return 0;
      }
    }
    plVar20 = local_50;
    if (*(longlong *)(lVar2 + 0x178) == 0) goto LAB_1436d7654;
    if (*piVar1 == 2) {
      *piVar1 = 0;
      FUN_1436b58e0(lVar2,"TUNNEL_STATE switched to: %d\n",0);
    }
    plVar20 = local_50;
    if (*(longlong *)(lVar2 + 0x178) == 0) goto LAB_1436d7654;
    uVar15 = param_4 & 0xffffffff;
  } while( true );
}



// FUNCTION 1436d7770 FUN_1436d7770 body=225 status=ok
// SIG undefined FUN_1436d7770(void)

undefined8 FUN_1436d7770(longlong *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_98 [144];
  
  if (((char)param_1[0x79] != '\0') && (*(char *)((longlong)param_1 + 0x3be) != '\0')) {
    lVar4 = *param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x198);
    _guard_xfg_dispatch_icall_nop(local_98,0,0x88);
    *(undefined1 **)(lVar4 + 0x198) = local_98;
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 0;
    if (*(char *)((longlong)param_1 + 0x3bb) == '\0') {
      lVar4 = param_1[0x17];
    }
    else {
      lVar4 = param_1[0x1b];
    }
    if (*(char *)((longlong)param_1 + 0x3bc) == '\0') {
      uVar1 = *(undefined4 *)((longlong)param_1 + 0x10c);
    }
    else {
      uVar1 = (undefined4)param_1[0x22];
    }
    uVar3 = FUN_1436d6c90(param_1,0,lVar4,uVar1,0);
    *(undefined8 *)(*param_1 + 0x198) = uVar2;
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x82]);
    param_1[0x82] = 0;
  }
  return 0;
}



// FUNCTION 1436d7860 FUN_1436d7860 body=641 status=ok
// SIG undefined FUN_1436d7860(void)

char * FUN_1436d7860(longlong param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *_Str;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  char *_Dst;
  char *_Str2;
  
  lVar5 = -1;
  do {
    lVar6 = lVar5;
    lVar5 = lVar6 + 1;
  } while (*(char *)(param_1 + lVar5) != '\0');
  pcVar3 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar6 + 2);
  if (pcVar3 == (char *)0x0) {
    return (char *)0x0;
  }
  _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(param_1);
  if (_Str == (char *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar3);
    return (char *)0x0;
  }
  if (*_Str == '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar3);
    return _Str;
  }
  pcVar4 = strchr(_Str,0x3f);
  _Dst = pcVar3;
  _Str2 = _Str;
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = '\0';
  }
LAB_1436d7920:
  iVar2 = strncmp("./",_Str2,2);
  if (iVar2 != 0) {
    iVar2 = strncmp("../",_Str2,3);
    if (iVar2 == 0) {
      _Str2 = _Str2 + 3;
      goto LAB_1436d7a89;
    }
    iVar2 = strncmp("/./",_Str2,3);
    if (iVar2 == 0) {
      _Str2 = _Str2 + 2;
      goto LAB_1436d7a89;
    }
    if (((*_Str2 == '/') && (_Str2[1] == '.')) && (_Str2[2] == '\0')) {
      _Str2 = _Str2 + 1;
      *_Str2 = '/';
      goto LAB_1436d7a89;
    }
    iVar2 = strncmp("/../",_Str2,4);
    if (iVar2 == 0) {
      _Str2 = _Str2 + 3;
      do {
        if (_Dst <= pcVar3) break;
        _Dst = _Dst + -1;
      } while (*_Dst != '/');
    }
    else {
      lVar5 = 0;
      do {
        lVar6 = lVar5 + 1;
        if ((&DAT_145b71600)[lVar5] != _Str2[lVar5]) {
          if (((*_Str2 != '.') || (_Str2[1] != '\0')) &&
             ((*_Str2 != '.' || ((_Str2[1] != '.' || (_Str2[2] != '\0')))))) goto LAB_1436d7a70;
          *_Str2 = '\0';
          goto LAB_1436d7a89;
        }
        lVar5 = lVar6;
      } while (lVar6 != 4);
      _Str2 = _Str2 + 2;
      *_Str2 = '/';
      do {
        if (_Dst <= pcVar3) break;
        _Dst = _Dst + -1;
      } while (*_Dst != '/');
    }
    goto LAB_1436d7a86;
  }
  _Str2 = _Str2 + 2;
  goto LAB_1436d7a89;
  while (*_Str2 != '/') {
LAB_1436d7a70:
    cVar1 = *_Str2;
    _Str2 = _Str2 + 1;
    *_Dst = cVar1;
    _Dst = _Dst + 1;
    if (*_Str2 == '\0') break;
  }
LAB_1436d7a86:
  *_Dst = '\0';
LAB_1436d7a89:
  if (*_Str2 == '\0') {
    if (pcVar4 != (char *)0x0) {
      lVar5 = -1;
      do {
        lVar6 = lVar5;
        lVar5 = lVar6 + 1;
      } while ((pcVar4 + (param_1 - (longlong)_Str))[lVar6 + 1] != '\0');
      _guard_xfg_dispatch_icall_nop(_Dst,pcVar4 + (param_1 - (longlong)_Str),lVar6 + 2);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    return pcVar3;
  }
  goto LAB_1436d7920;
}



// FUNCTION 1436d7af0 Curl_memdup body=87 status=ok
// SIG undefined Curl_memdup(void)

void * Curl_memdup(void *param_1,size_t param_2)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(param_2);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,param_1,param_2);
  return _Dst;
}



// FUNCTION 1436d7b47 _guard_xfg_dispatch_icall_nop body=6 status=ok
// SIG undefined _guard_xfg_dispatch_icall_nop(void)

void _guard_xfg_dispatch_icall_nop(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001436d7b47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Ordinal_151();
  return;
}



// FUNCTION 1436d7b50 FUN_1436d7b50 body=112 status=ok
// SIG undefined FUN_1436d7b50(void)

undefined4 FUN_1436d7b50(short *param_1)

{
  ushort uVar1;
  ushort uVar2;
  
  if (*param_1 == 0x17) {
    uVar1 = CONCAT11((char)param_1[4],*(char *)((longlong)param_1 + 9));
    uVar2 = uVar1 & 0xffc0;
    if ((uVar1 & 0xffc0) == 0) {
      if (((((((((((((((char)param_1[0xb] == '\0' && *(char *)((longlong)param_1 + 0x15) == '\0') &&
                     (char)param_1[10] == '\0') && *(char *)((longlong)param_1 + 0x13) == '\0') &&
                   (char)param_1[9] == '\0') && *(char *)((longlong)param_1 + 0x11) == '\0') &&
                 (char)param_1[8] == '\0') && *(char *)((longlong)param_1 + 0xf) == '\0') &&
               (char)param_1[7] == '\0') && *(char *)((longlong)param_1 + 0xd) == '\0') &&
             (char)param_1[6] == '\0') && *(char *)((longlong)param_1 + 0xb) == '\0') &&
           (char)param_1[5] == '\0') && *(char *)((longlong)param_1 + 9) == '\0') &&
         (*(char *)((longlong)param_1 + 0x17) == '\x01')) {
        return 3;
      }
    }
    else {
      if (uVar2 == 0xfe80) {
        return 1;
      }
      if (uVar2 == 0xfec0) {
        return 2;
      }
    }
  }
  return 0;
}



// FUNCTION 1436d7bc0 curlx_nonblock body=36 status=ok
// SIG undefined curlx_nonblock(void)

void curlx_nonblock(undefined8 param_1,int param_2)

{
  uint local_res10 [6];
  
  local_res10[0] = (uint)(param_2 != 0);
  Ordinal_10(param_1,0x8004667e,local_res10);
  return;
}



// FUNCTION 1436d7bf0 FUN_1436d7bf0 body=85 status=ok
// SIG undefined FUN_1436d7bf0(void)

char * FUN_1436d7bf0(undefined4 param_1)

{
  switch(param_1) {
  case 1:
    return "Too long hexadecimal number";
  case 2:
    return "Illegal or missing hexadecimal sequence";
  case 3:
    return "Malformed encoding found";
  case 4:
    return "Write error";
  case 5:
    return "Bad content-encoding found";
  case 6:
    return "Out of memory";
  default:
    return "OK";
  }
}



// FUNCTION 1436d7c60 Curl_httpchunk_init body=11 status=ok
// SIG undefined Curl_httpchunk_init(void)

void Curl_httpchunk_init(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x1c) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  return;
}



// FUNCTION 1436d7c70 FUN_1436d7c70 body=946 status=ok
// SIG undefined FUN_1436d7c70(void)

undefined8 FUN_1436d7c70(longlong *param_1,char *param_2,longlong param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  lVar7 = *param_1;
  *param_4 = 0;
  iVar3 = 0;
  if (((*(char *)(lVar7 + 0x478) != '\0') && (iVar3 = 0, *(char *)(lVar7 + 0x16d) == '\0')) &&
     (iVar3 = Curl_client_write(param_1,1,param_2,param_3), iVar3 != 0)) {
    return 4;
  }
switchD_1436d7cff_default:
  if (param_3 == 0) {
    return 0;
  }
  switch((int)param_1[4]) {
  case 0:
    cVar1 = *param_2;
    if (((9 < (byte)(cVar1 - 0x30U)) && (5 < (byte)(cVar1 + 0xbfU))) && (5 < (byte)(cVar1 + 0x9fU)))
    {
      if (*(int *)((longlong)param_1 + 0x1c) != 0) {
        *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0x1c) + 8 + (longlong)param_1) = 0;
        lVar6 = strtoll(param_1 + 1,local_res8,0x10);
        param_1[5] = lVar6;
        if ((lVar6 != 0x7fffffffffffffff) || (piVar4 = _errno(), *piVar4 != 0x22)) {
          *(undefined4 *)(param_1 + 4) = 1;
          iVar3 = 0;
          goto switchD_1436d7cff_default;
        }
      }
      return 2;
    }
    if (0xf < *(int *)((longlong)param_1 + 0x1c)) {
      return 1;
    }
    param_2 = param_2 + 1;
    *(char *)((longlong)*(int *)((longlong)param_1 + 0x1c) + 8 + (longlong)param_1) = cVar1;
    param_3 = param_3 + -1;
    *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + 1;
    goto switchD_1436d7cff_default;
  case 1:
    if (*param_2 == '\n') {
      if (param_1[5] == 0) {
        *(undefined4 *)(param_1 + 4) = 5;
        *(undefined4 *)((longlong)param_1 + 0x714) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 2;
      }
    }
    break;
  case 2:
    lVar6 = param_1[5];
    if (param_3 <= param_1[5]) {
      lVar6 = param_3;
    }
    lVar6 = UWaterWaves::GetWaterWaves(lVar6);
    if (*(char *)(lVar7 + 0x16d) == '\0') {
      if (*(char *)(lVar7 + 0x478) == '\0') {
        iVar3 = Curl_client_write(param_1,1,param_2,lVar6);
        goto LAB_1436d7e03;
      }
      iVar3 = 0;
    }
    else {
LAB_1436d7e03:
      if (iVar3 != 0) {
        return 4;
      }
    }
    *param_4 = *param_4 + lVar6;
    param_2 = param_2 + lVar6;
    param_1[5] = param_1[5] - lVar6;
    param_3 = param_3 - lVar6;
    if (param_1[5] == 0) {
      *(undefined4 *)(param_1 + 4) = 3;
    }
    goto switchD_1436d7cff_default;
  case 3:
    if (*param_2 == '\n') {
      *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
      param_1[6] = 0;
    }
    else if (*param_2 != '\r') goto LAB_1436d7e58;
    break;
  case 4:
    goto switchD_1436d7cff_caseD_4;
  case 5:
    if ((*param_2 == '\r') || (*param_2 == '\n')) {
      if (*(int *)((longlong)param_1 + 0x714) == 0) {
        *(undefined4 *)(param_1 + 4) = 7;
        goto switchD_1436d7cff_default;
      }
      *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0x714) + param_1[0xe1]) = 0xd;
      *(int *)((longlong)param_1 + 0x714) = *(int *)((longlong)param_1 + 0x714) + 1;
      *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0x714) + param_1[0xe1]) = 10;
      *(int *)((longlong)param_1 + 0x714) = *(int *)((longlong)param_1 + 0x714) + 1;
      *(undefined1 *)((longlong)*(int *)((longlong)param_1 + 0x714) + param_1[0xe1]) = 0;
      if ((*(char *)(lVar7 + 0x478) == '\0') &&
         (iVar3 = Curl_client_write(param_1,2,param_1[0xe1],
                                    (longlong)*(int *)((longlong)param_1 + 0x714)), iVar3 != 0)) {
        return 4;
      }
      iVar3 = 0;
      *(undefined4 *)((longlong)param_1 + 0x714) = 0;
      *(undefined4 *)(param_1 + 4) = 6;
      if (*param_2 == '\n') goto switchD_1436d7cff_default;
    }
    else {
      iVar2 = (int)param_1[0xe2];
      if (iVar2 <= *(int *)((longlong)param_1 + 0x714)) {
        if (iVar2 == 0) {
          *(undefined4 *)(param_1 + 0xe2) = 0x80;
          lVar6 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x83);
        }
        else {
          *(int *)(param_1 + 0xe2) = iVar2 * 2;
          lVar6 = (*(code *)PTR_realloc_1467dcc68)(param_1[0xe1],(longlong)(iVar2 * 2 + 3));
        }
        if (lVar6 == 0) {
          return 6;
        }
        param_1[0xe1] = lVar6;
      }
      *(char *)((longlong)*(int *)((longlong)param_1 + 0x714) + param_1[0xe1]) = *param_2;
      *(int *)((longlong)param_1 + 0x714) = *(int *)((longlong)param_1 + 0x714) + 1;
    }
    break;
  case 6:
    if (*param_2 != '\n') goto LAB_1436d7e58;
    *(undefined4 *)(param_1 + 4) = 7;
    break;
  case 7:
    if (*param_2 == '\r') {
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    }
    else if (*param_2 != '\n') {
      *(undefined4 *)(param_1 + 4) = 5;
      goto switchD_1436d7cff_default;
    }
    *(undefined4 *)(param_1 + 4) = 4;
    goto switchD_1436d7cff_default;
  default:
    goto switchD_1436d7cff_default;
  }
  param_2 = param_2 + 1;
  param_3 = param_3 + -1;
  goto switchD_1436d7cff_default;
switchD_1436d7cff_caseD_4:
  if (*param_2 == '\n') {
    lVar7 = UWaterWaves::GetWaterWaves(param_3 + -1);
    param_1[6] = lVar7;
    uVar5 = 0xffffffff;
  }
  else {
LAB_1436d7e58:
    uVar5 = 3;
  }
  return uVar5;
}



// FUNCTION 1436d8050 FUN_1436d8050 body=306 status=ok
// SIG undefined FUN_1436d8050(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1436d8050(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  void *_Dst;
  size_t _Size;
  undefined8 local_res20;
  undefined1 auStack_1058 [32];
  char local_1038 [4096];
  ulonglong local_38;
  size_t sVar3;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1058;
  local_res20 = param_4;
  curl_mvsnprintf(local_1038,0x1000,param_3,&local_res20);
  if ((param_2 == (longlong *)0x0) || (-1 < *param_2)) {
    puVar2 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 0x1b;
    }
    else {
      *puVar2 = 0;
      _Size = 0xffffffffffffffff;
      do {
        sVar3 = _Size;
        _Size = sVar3 + 1;
      } while (local_1038[sVar3 + 1] != '\0');
      _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(sVar3 + 2);
      puVar2[2] = _Dst;
      if (_Dst == (void *)0x0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
        uVar1 = 0x1b;
      }
      else {
        _guard_xfg_dispatch_icall_nop(_Dst,local_1038,_Size);
        puVar2[3] = _Size;
        *(undefined1 *)(_Size + puVar2[2]) = 0;
        *(undefined4 *)(puVar2 + 1) = 0;
        if ((undefined8 *)*param_1 != (undefined8 *)0x0) {
          *(undefined8 *)*param_1 = puVar2;
        }
        *param_1 = puVar2;
        if (param_2 != (longlong *)0x0) {
          *param_2 = *param_2 + _Size;
        }
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0x2b;
  }
  return uVar1;
}



// FUNCTION 1436d8190 Curl_FormInit body=29 status=ok
// SIG undefined Curl_FormInit(void)

undefined8 Curl_FormInit(longlong *param_1,longlong param_2)

{
  if (param_2 == 0) {
    return 1;
  }
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return 0;
}



// FUNCTION 1436d81b0 FUN_1436d81b0 body=234 status=ok
// SIG undefined FUN_1436d81b0(void)

longlong FUN_1436d81b0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  size_t _Size;
  
  lVar1 = 0;
  param_2 = param_2 * param_3;
  lVar2 = 0;
  if (*param_4 != 0) {
    if (*(int *)(*param_4 + 8) - 2U < 2) {
      lVar1 = readfromfile(param_4,param_1,param_2);
      if (lVar1 != 0) {
        return lVar1;
      }
      lVar1 = 0;
    }
    while( true ) {
      lVar2 = *param_4;
      _Size = *(longlong *)(lVar2 + 0x18) - param_4[1];
      if ((ulonglong)(param_2 - lVar1) < _Size) break;
      _guard_xfg_dispatch_icall_nop
                ((void *)(lVar1 + param_1),(void *)(param_4[1] + *(longlong *)(lVar2 + 0x10)),_Size)
      ;
      lVar1 = lVar1 + (((longlong *)*param_4)[3] - param_4[1]);
      param_4[1] = 0;
      lVar2 = *(longlong *)*param_4;
      *param_4 = lVar2;
      if (lVar2 == 0) {
        return lVar1;
      }
      if (1 < *(int *)(lVar2 + 8)) {
        return lVar1;
      }
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(lVar1 + param_1),(void *)(*(longlong *)(lVar2 + 0x10) + param_4[1]),
               param_2 - lVar1);
    param_4[1] = param_4[1] + (param_2 - lVar1);
    lVar2 = param_2;
  }
  return lVar2;
}



// FUNCTION 1436d82a0 Curl_basename body=120 status=ok
// SIG undefined Curl_basename(void)

char * Curl_basename(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = strrchr(param_1,0x2f);
  pcVar2 = strrchr(param_1,0x5c);
  if (pcVar1 == (char *)0x0) {
    if (pcVar2 != (char *)0x0) {
      return pcVar2 + 1;
    }
    return param_1;
  }
  if (pcVar2 != (char *)0x0) {
    if (pcVar2 < pcVar1) {
      pcVar2 = pcVar1;
    }
    return pcVar2 + 1;
  }
  return pcVar1 + 1;
}



// FUNCTION 1436d8320 Curl_formclean body=87 status=ok
// SIG undefined Curl_formclean(void)

void Curl_formclean(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 != (longlong *)0x0) {
    do {
      plVar1 = (longlong *)*plVar2;
      if ((int)plVar2[1] < 2) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar2[2]);
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar2);
      plVar2 = plVar1;
    } while (plVar1 != (longlong *)0x0);
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1436d8380 Curl_formpostheader body=35 status=ok
// SIG undefined Curl_formpostheader(void)

undefined8 Curl_formpostheader(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  *param_2 = *(undefined8 *)(lVar1 + 0x18);
  *param_1 = *(longlong *)*param_1;
  return uVar2;
}



// FUNCTION 1436d83b0 FUN_1436d83b0 body=2233 status=ok
// SIG undefined FUN_1436d83b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436d83b0(longlong param_1,undefined8 *param_2,longlong *param_3,char *param_4,
                 longlong *param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  void *pvVar8;
  longlong lVar9;
  undefined8 *puVar10;
  FILE *_File;
  FILE *pFVar11;
  void *pvVar12;
  size_t sVar13;
  longlong lVar14;
  size_t sVar15;
  char *pcVar16;
  longlong *plVar17;
  longlong lVar18;
  undefined1 auStack_308 [32];
  longlong local_2e8;
  undefined8 *local_2d8;
  longlong local_2d0;
  undefined8 *local_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 *local_2a8;
  longlong *local_2a0;
  undefined1 local_298 [6];
  ushort local_292;
  longlong local_280;
  char local_258 [512];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_308;
  lVar18 = 0;
  local_2a0 = param_5;
  local_2d8 = (undefined8 *)0x0;
  local_2d0 = 0;
  local_2b8 = 0;
  *param_2 = 0;
  if (param_3 == (longlong *)0x0) {
    return 0;
  }
  local_2c8 = param_2;
  local_2b0 = param_1;
  uVar2 = FUN_1436acf40(param_1);
  uVar3 = FUN_1436acf40(param_1);
  lVar6 = curl_maprintf("------------------------%08x%08x",uVar3,uVar2);
  if (lVar6 == 0) {
    return 0x1b;
  }
  pcVar16 = "Content-Type: multipart/form-data";
  if (param_4 != (char *)0x0) {
    pcVar16 = param_4;
  }
  local_2e8 = lVar6;
  local_2c0 = lVar6;
  iVar4 = FUN_1436d8050(&local_2d8,0,"%s; boundary=%s\r\n",pcVar16);
  if (iVar4 == 0) {
    local_2a8 = local_2d8;
    lVar9 = lVar18;
LAB_1436d84a0:
    if ((((lVar18 == 0) ||
         (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,&DAT_145b5531c), puVar7 = local_2a8,
         iVar4 == 0)) &&
        (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,"--%s\r\n",lVar6), puVar7 = local_2a8,
        iVar4 == 0)) &&
       (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,"Content-Disposition: form-data; name=\""),
       lVar18 = local_2d0, puVar7 = local_2a8, iVar4 == 0)) {
      sVar13 = (size_t)(int)param_3[2];
      pvVar12 = (void *)param_3[1];
      if (((longlong)sVar13 < 0) || (local_2d0 < 0)) {
        iVar4 = 0x2b;
        lVar6 = local_2c0;
      }
      else {
        puVar7 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
        if (puVar7 != (undefined8 *)0x0) {
          *puVar7 = 0;
          if (sVar13 == 0) {
            sVar13 = 0xffffffffffffffff;
            do {
              sVar13 = sVar13 + 1;
            } while (*(char *)((longlong)pvVar12 + sVar13) != '\0');
          }
          pvVar8 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(sVar13 + 1);
          puVar7[2] = pvVar8;
          if (pvVar8 == (void *)0x0) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7);
          }
          else {
            _guard_xfg_dispatch_icall_nop(pvVar8,pvVar12,sVar13);
            puVar7[3] = sVar13;
            *(undefined1 *)(sVar13 + puVar7[2]) = 0;
            *(undefined4 *)(puVar7 + 1) = 0;
            if (local_2d8 != (undefined8 *)0x0) {
              *local_2d8 = puVar7;
            }
            local_2d0 = lVar18 + sVar13;
            local_2d8 = puVar7;
            iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,&DAT_145afa020);
            puVar7 = local_2a8;
            lVar6 = local_2c0;
            if (iVar4 != 0) goto joined_r0x0001436d8c02;
            lVar14 = local_2b0;
            plVar17 = param_3;
            if (param_3[9] == 0) {
LAB_1436d8640:
              do {
                if (param_3[9] == 0) {
                  if ((*(uint *)(param_3 + 10) & 0x51) != 0) {
                    if ((param_3[0xb] != 0) || ((*(uint *)(param_3 + 10) & 1) != 0)) {
                      iVar4 = formdata_add_filename(param_3,&local_2d8,&local_2d0);
                    }
                    goto LAB_1436d86ae;
                  }
                }
                else {
                  iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,
                                        "\r\n--%s\r\nContent-Disposition: attachment",lVar9);
                  puVar7 = local_2a8;
                  lVar6 = local_2c0;
                  if (iVar4 != 0) goto joined_r0x0001436d8c02;
                  iVar4 = formdata_add_filename(plVar17,&local_2d8,&local_2d0);
LAB_1436d86ae:
                  puVar7 = local_2a8;
                  lVar6 = local_2c0;
                  if (iVar4 != 0) goto joined_r0x0001436d8c02;
                }
                if ((plVar17[7] != 0) &&
                   (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,"\r\nContent-Type: %s"),
                   puVar7 = local_2a8, lVar6 = local_2c0, iVar4 != 0)) goto joined_r0x0001436d8c02;
                puVar10 = (undefined8 *)plVar17[8];
                if (puVar10 == (undefined8 *)0x0) {
                  puVar7 = local_2a8;
                  lVar6 = local_2c0;
                  if (iVar4 != 0) goto joined_r0x0001436d8c02;
                }
                else {
                  do {
                    iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,&DAT_145b7186c,*puVar10);
                    puVar7 = local_2a8;
                    lVar6 = local_2c0;
                    if (iVar4 != 0) goto joined_r0x0001436d8c02;
                    puVar10 = (undefined8 *)puVar10[1];
                  } while (puVar10 != (undefined8 *)0x0);
                }
                iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,&DAT_145b71874);
                lVar18 = local_2d0;
                puVar7 = local_2a8;
                lVar6 = local_2c0;
                if (iVar4 != 0) goto joined_r0x0001436d8c02;
                uVar1 = *(uint *)(param_3 + 10);
                if ((uVar1 & 3) == 0) {
                  if ((uVar1 & 0x10) == 0) {
                    if ((uVar1 & 0x40) == 0) {
                      if ((char)uVar1 < '\0') {
                        sVar13 = param_3[0xd];
                      }
                      else {
                        sVar13 = (size_t)(int)param_3[4];
                      }
                      pvVar12 = (void *)param_3[3];
                      if (((longlong)sVar13 < 0) || (local_2d0 < 0)) goto LAB_1436d8a0b;
                      puVar10 = (undefined8 *)
                                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
                      if (puVar10 != (undefined8 *)0x0) {
                        *puVar10 = 0;
                        if (sVar13 == 0) {
                          sVar13 = 0xffffffffffffffff;
                          do {
                            sVar13 = sVar13 + 1;
                          } while (*(char *)((longlong)pvVar12 + sVar13) != '\0');
                        }
                        goto LAB_1436d87a9;
                      }
                    }
                    else {
                      if ((char)uVar1 < '\0') {
                        lVar6 = param_3[0xd];
                      }
                      else {
                        lVar6 = (longlong)(int)param_3[4];
                      }
                      lVar9 = param_3[0xc];
                      if ((lVar6 < 0) || (local_2d0 < 0)) {
LAB_1436d8a0b:
                        iVar4 = 0x2b;
                        goto LAB_1436d87cf;
                      }
                      puVar7 = (undefined8 *)
                               (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
                      if (puVar7 != (undefined8 *)0x0) {
                        *puVar7 = 0;
                        puVar7[2] = lVar9;
                        *(undefined4 *)(puVar7 + 1) = 2;
                        if (local_2d8 != (undefined8 *)0x0) {
                          *local_2d8 = puVar7;
                        }
                        lVar18 = lVar18 + lVar6;
                        iVar4 = 0;
                        local_2d8 = puVar7;
                        local_2d0 = lVar18;
                        goto LAB_1436d87cf;
                      }
                    }
                  }
                  else {
                    sVar13 = (size_t)(int)param_3[6];
                    pvVar12 = (void *)param_3[5];
                    if (((longlong)sVar13 < 0) || (local_2d0 < 0)) goto LAB_1436d8a0b;
                    puVar10 = (undefined8 *)
                              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
                    if (puVar10 != (undefined8 *)0x0) {
                      *puVar10 = 0;
                      if (sVar13 == 0) {
                        sVar13 = 0xffffffffffffffff;
                        do {
                          sVar13 = sVar13 + 1;
                        } while (*(char *)((longlong)pvVar12 + sVar13) != '\0');
                      }
LAB_1436d87a9:
                      pvVar8 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                                 (sVar13 + 1);
                      puVar10[2] = pvVar8;
                      if (pvVar8 != (void *)0x0) {
                        _guard_xfg_dispatch_icall_nop(pvVar8,pvVar12,sVar13);
                        puVar10[3] = sVar13;
                        *(undefined1 *)(sVar13 + puVar10[2]) = 0;
                        *(undefined4 *)(puVar10 + 1) = 1;
                        if (local_2d8 != (undefined8 *)0x0) {
                          *local_2d8 = puVar10;
                        }
                        lVar18 = lVar18 + sVar13;
                        local_2d8 = puVar10;
                        local_2d0 = lVar18;
LAB_1436d882e:
                        iVar4 = 0;
                        goto LAB_1436d87cf;
                      }
LAB_1436d87bf:
                      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar10);
                    }
                  }
LAB_1436d87c5:
                  iVar4 = 0x1b;
                }
                else {
                  iVar5 = curl_strequal(&DAT_145b69768,plVar17[3]);
                  if (iVar5 == 0) {
                    _File = fopen((char *)plVar17[3],"rb");
                  }
                  else {
                    _File = (FILE *)__acrt_iob_func(0);
                  }
                  if (_File == (FILE *)0x0) {
                    if (lVar14 != 0) {
                      FUN_1436b5820(lVar14,"couldn\'t open file \"%s\"",plVar17[3]);
                    }
                    iVar4 = 0x1a;
                    *local_2c8 = 0;
                    lVar18 = local_2d0;
                  }
                  else {
                    pFVar11 = (FILE *)__acrt_iob_func(0);
                    if (_File != pFVar11) {
                      fclose(_File);
                      lVar18 = local_2d0;
                      lVar6 = plVar17[3];
                      if (-1 < local_2d0) {
                        puVar7 = (undefined8 *)
                                 (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
                        if (puVar7 == (undefined8 *)0x0) goto LAB_1436d87c5;
                        *puVar7 = 0;
                        puVar7[2] = lVar6;
                        *(undefined4 *)(puVar7 + 1) = 3;
                        if (local_2d8 != (undefined8 *)0x0) {
                          *local_2d8 = puVar7;
                        }
                        local_2d8 = puVar7;
                        iVar4 = curl_strequal(&DAT_145b69768,puVar7[2]);
                        if (iVar4 != 0) goto LAB_1436d882e;
                        iVar4 = _stat64(puVar7[2],local_298);
                        if ((iVar4 == 0) && ((local_292 & 0xf000) != 0x4000)) {
                          lVar18 = lVar18 + local_280;
                          iVar4 = 0;
                          local_2d0 = lVar18;
                          goto LAB_1436d87cf;
                        }
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7);
                      }
                      goto LAB_1436d8a0b;
                    }
                    sVar13 = fread(local_258,1,0x200,_File);
                    puVar7 = local_2d8;
                    lVar18 = local_2d0;
                    while (sVar13 != 0) {
                      if (((longlong)sVar13 < 0) || (lVar18 < 0)) goto LAB_1436d8a0b;
                      puVar10 = (undefined8 *)
                                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x20);
                      if (puVar10 == (undefined8 *)0x0) goto LAB_1436d87c5;
                      *puVar10 = 0;
                      if (sVar13 == 0) {
                        sVar15 = 0xffffffffffffffff;
                        do {
                          sVar13 = sVar15 + 1;
                          lVar6 = sVar15 + 1;
                          sVar15 = sVar13;
                        } while (local_258[lVar6] != '\0');
                      }
                      pvVar12 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                                  (sVar13 + 1);
                      puVar10[2] = pvVar12;
                      if (pvVar12 == (void *)0x0) goto LAB_1436d87bf;
                      _guard_xfg_dispatch_icall_nop(pvVar12,local_258,sVar13);
                      puVar10[3] = sVar13;
                      *(undefined1 *)(sVar13 + puVar10[2]) = 0;
                      *(undefined4 *)(puVar10 + 1) = 1;
                      if (puVar7 != (undefined8 *)0x0) {
                        *puVar7 = puVar10;
                      }
                      iVar4 = 0;
                      lVar18 = lVar18 + sVar13;
                      local_2d8 = puVar10;
                      local_2d0 = lVar18;
                      sVar13 = fread(local_258,1,0x200,_File);
                      puVar7 = puVar10;
                    }
                  }
                }
LAB_1436d87cf:
                lVar9 = local_2b8;
                puVar10 = local_2c8;
                plVar17 = (longlong *)plVar17[9];
                lVar6 = local_2c0;
                puVar7 = local_2a8;
                if (plVar17 == (longlong *)0x0) goto LAB_1436d8b3a;
                lVar14 = local_2b0;
                if (iVar4 != 0) goto joined_r0x0001436d8c02;
              } while( true );
            }
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
            lVar14 = local_2b0;
            uVar2 = FUN_1436acf40(local_2b0);
            uVar3 = FUN_1436acf40(lVar14);
            lVar9 = curl_maprintf("------------------------%08x%08x",uVar3,uVar2);
            local_2b8 = lVar9;
            if (lVar9 != 0) {
              iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,
                                    "\r\nContent-Type: multipart/mixed; boundary=%s\r\n",lVar9);
              puVar7 = local_2a8;
              lVar6 = local_2c0;
              if (iVar4 == 0) goto LAB_1436d8640;
              goto joined_r0x0001436d8c02;
            }
          }
        }
        iVar4 = 0x1b;
        puVar7 = local_2a8;
        lVar6 = local_2c0;
      }
    }
    goto joined_r0x0001436d8c02;
  }
LAB_1436d8c34:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
  return iVar4;
LAB_1436d8b3a:
  if ((iVar4 != 0) ||
     ((param_3[9] != 0 &&
      (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,"\r\n--%s--",local_2b8), lVar18 = local_2d0,
      puVar7 = local_2a8, lVar6 = local_2c0, iVar4 != 0)))) goto joined_r0x0001436d8c02;
  lVar6 = local_2c0;
  param_3 = (longlong *)*param_3;
  if (param_3 == (longlong *)0x0) goto LAB_1436d8b8d;
  goto LAB_1436d84a0;
LAB_1436d8b8d:
  puVar7 = local_2a8;
  if ((iVar4 == 0) &&
     (iVar4 = FUN_1436d8050(&local_2d8,&local_2d0,"\r\n--%s--\r\n",local_2c0), puVar7 = local_2a8,
     iVar4 == 0)) {
    *local_2a0 = local_2d0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
    *puVar10 = local_2a8;
    return 0;
  }
joined_r0x0001436d8c02:
  while (puVar7 != (undefined8 *)0x0) {
    puVar10 = (undefined8 *)*puVar7;
    if (*(int *)(puVar7 + 1) < 2) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7[2]);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7);
    puVar7 = puVar10;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_2b8);
  goto LAB_1436d8c34;
}



// FUNCTION 1436d8c70 formdata_add_filename body=317 status=ok
// SIG undefined formdata_add_filename(void)

undefined4 formdata_add_filename(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  char *_Str;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  _Str = *(char **)(param_1 + 0x58);
  pcVar9 = (char *)0x0;
  if (_Str == (char *)0x0) {
    lVar4 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(param_1 + 0x18));
    if (lVar4 != 0) {
      uVar5 = Curl_basename(lVar4);
      _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(uVar5);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
      pcVar9 = _Str;
      if (_Str != (char *)0x0) goto LAB_1436d8cd4;
    }
LAB_1436d8d2a:
    uVar3 = 0x1b;
  }
  else {
LAB_1436d8cd4:
    pcVar6 = strchr(_Str,0x5c);
    if ((pcVar6 != (char *)0x0) ||
       (pcVar7 = strchr(_Str,0x22), pcVar6 = _Str, pcVar8 = (char *)0x0, pcVar7 != (char *)0x0)) {
      lVar4 = -1;
      do {
        lVar2 = lVar4 + 1;
        lVar4 = lVar4 + 1;
      } while (_Str[lVar2] != '\0');
      pcVar6 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar4 * 2 + 1);
      if (pcVar6 == (char *)0x0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar9);
        goto LAB_1436d8d2a;
      }
      cVar1 = *_Str;
      pcVar8 = pcVar6;
      while (cVar1 != '\0') {
        if ((*_Str == '\\') || (*_Str == '\"')) {
          *pcVar8 = '\\';
          pcVar8 = pcVar8 + 1;
        }
        cVar1 = *_Str;
        _Str = _Str + 1;
        *pcVar8 = cVar1;
        pcVar8 = pcVar8 + 1;
        cVar1 = *_Str;
      }
      *pcVar8 = '\0';
      pcVar8 = pcVar6;
    }
    uVar3 = FUN_1436d8050(param_2,param_3,"; filename=\"%s\"",pcVar6);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar8);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar9);
  }
  return uVar3;
}



// FUNCTION 1436d8db0 readfromfile body=203 status=ok
// SIG undefined readfromfile(void)

size_t readfromfile(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  size_t sVar2;
  FILE *pFVar3;
  
  lVar1 = *param_1;
  if (*(int *)(lVar1 + 8) == 2) {
    if ((code *)param_1[3] == (code *)0x0) {
      return 0;
    }
    sVar2 = (*(code *)param_1[3])(param_2,1,param_3,*(undefined8 *)(lVar1 + 0x10));
  }
  else {
    if (param_1[2] == 0) {
      pFVar3 = fopen(*(char **)(lVar1 + 0x10),"rb");
      param_1[2] = (longlong)pFVar3;
      if (pFVar3 == (FILE *)0x0) {
        return 0xffffffffffffffff;
      }
    }
    sVar2 = fread(param_2,1,param_3,(FILE *)param_1[2]);
  }
  if (sVar2 == 0) {
    if ((FILE *)param_1[2] != (FILE *)0x0) {
      fclose((FILE *)param_1[2]);
      param_1[2] = 0;
    }
    *param_1 = *(longlong *)*param_1;
  }
  return sVar2;
}



// FUNCTION 1436d8e80 FUN_1436d8e80 body=38 status=ok
// SIG undefined FUN_1436d8e80(void)

void FUN_1436d8e80(longlong param_1)

{
  FUN_1436dfad0(param_1 + 0x8870);
  FUN_1436dfad0(param_1 + 0x88e0);
  return;
}



// FUNCTION 1436d8eb0 FUN_1436d8eb0 body=298 status=ok
// SIG undefined FUN_1436d8eb0(void)

undefined8 FUN_1436d8eb0(longlong *param_1,char param_2,longlong param_3)

{
  byte bVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong lVar11;
  
  lVar2 = *param_1;
  puVar8 = &DAT_145b6b050;
  if (param_2 == '\0') {
    puVar7 = (undefined1 *)param_1[0x30];
    puVar9 = (undefined1 *)param_1[0x31];
    lVar11 = param_1[0x17];
    if (*(undefined **)(lVar2 + 0x5c0) != (undefined *)0x0) {
      puVar8 = *(undefined **)(lVar2 + 0x5c0);
    }
    lVar4 = 0x8870;
  }
  else {
    puVar7 = (undefined1 *)param_1[0x34];
    puVar9 = (undefined1 *)param_1[0x35];
    lVar11 = param_1[0x1f];
    if (*(undefined **)(lVar2 + 0x5b8) != (undefined *)0x0) {
      puVar8 = *(undefined **)(lVar2 + 0x5b8);
    }
    lVar4 = 0x88e0;
  }
  bVar1 = *(byte *)(param_3 + 9);
  puVar10 = &DAT_145af3922;
  if (puVar7 != (undefined1 *)0x0) {
    puVar10 = puVar7;
  }
  puVar7 = &DAT_145af3922;
  if (puVar9 != (undefined1 *)0x0) {
    puVar7 = puVar9;
  }
  param_3 = param_3 + 9;
  while ((bVar1 != 0 && (iVar3 = isspace((uint)bVar1), iVar3 != 0))) {
    bVar1 = *(byte *)(param_3 + 1);
    param_3 = param_3 + 1;
  }
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (*(char *)(param_3 + lVar5) != '\0');
  if ((lVar5 == 0) && (*(longlong *)(lVar4 + lVar2 + 0x10) != 0)) {
    uVar6 = 0x43;
  }
  else {
    uVar6 = FUN_1436df790(lVar2,puVar10,puVar7,puVar8,lVar11,param_3,lVar4 + lVar2);
  }
  return uVar6;
}



// FUNCTION 1436d8fe0 FUN_1436d8fe0 body=196 status=ok
// SIG undefined FUN_1436d8fe0(void)

undefined8 FUN_1436d8fe0(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  undefined8 local_res8;
  undefined8 local_res18 [2];
  
  lVar1 = *param_1;
  lVar3 = lVar1 + 0x88e0;
  if (param_2 == '\0') {
    lVar3 = lVar1 + 0x8870;
  }
  local_res8 = 0;
  local_res18[0] = 0;
  uVar2 = FUN_1436df740(lVar1,lVar3,&local_res8,local_res18);
  if ((int)uVar2 == 0) {
    pcVar4 = "";
    if (param_2 != '\0') {
      pcVar4 = "Proxy-";
    }
    lVar3 = curl_maprintf("%sAuthorization: Negotiate %s\r\n",pcVar4,local_res8);
    if (param_2 == '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x85]);
      param_1[0x85] = lVar3;
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x82]);
      param_1[0x82] = lVar3;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
    uVar2 = 0;
    if (lVar3 == 0) {
      uVar2 = 0x1b;
    }
  }
  return uVar2;
}



// FUNCTION 1436d90b0 FUN_1436d90b0 body=56 status=ok
// SIG undefined FUN_1436d90b0(void)

void * FUN_1436d90b0(void)

{
  void *_Dst;
  
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x80);
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,0,0x80);
  return _Dst;
}



// FUNCTION 1436d90f0 Curl_fileinfo_dtor body=46 status=ok
// SIG undefined Curl_fileinfo_dtor(void)

void Curl_fileinfo_dtor(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_2 + 0x68));
    *(undefined8 *)(param_2 + 0x68) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
  }
  return;
}



// FUNCTION 1436d9120 FUN_1436d9120 body=2963 status=ok
// SIG undefined FUN_1436d9120(void)

/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_1436d9120(longlong *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined1 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint uVar13;
  char *pcVar14;
  undefined1 *puVar15;
  byte *local_res8;
  byte *local_258;
  longlong local_250 [3];
  ulonglong local_238;
  undefined1 local_22f;
  undefined1 local_228 [8];
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_208 [8];
  longlong local_200;
  longlong local_1f8;
  byte *local_1e0;
  byte *local_1d8;
  byte *local_1c0;
  byte *local_1b8;
  undefined1 local_1af;
  char local_1ae;
  undefined8 local_1a0;
  ulonglong local_198;
  byte *local_180;
  byte *local_178;
  undefined1 local_16f;
  char local_16e;
  undefined1 local_168 [40];
  byte *local_140;
  byte *local_138;
  undefined1 local_12f;
  char local_12e;
  byte *local_120;
  byte *local_118;
  undefined1 local_10f;
  char local_10e;
  undefined1 local_108 [72];
  undefined8 local_c0;
  ulonglong local_b8;
  undefined1 local_a8 [128];
  
  lVar2 = *param_1;
  if ((*(char *)(lVar2 + 0x3f1) == '\0') && (param_2 != 0)) {
    return 0;
  }
  FUN_1436d9ee0(local_208,param_3,param_4);
  lVar3 = FUN_1436daa20(0,0,local_108);
  if ((lVar3 < 0) ||
     (lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar3 + 1), lVar4 == 0)) {
    return 0x1b;
  }
  FUN_1436daa20(lVar4,lVar3 + 1,local_108);
  *(undefined1 *)(lVar3 + lVar4) = 0;
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Subject",lVar4);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"%2d Subject: %s\n",0,lVar4);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
  lVar3 = FUN_1436daa20(0,0,local_168);
  if (lVar3 < 0) {
    return 0x1b;
  }
  lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar3 + 1);
  if (lVar4 == 0) {
    return 0x1b;
  }
  FUN_1436daa20(lVar4,lVar3 + 1,local_168);
  *(undefined1 *)(lVar3 + lVar4) = 0;
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Issuer",lVar4);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Issuer: %s\n",lVar4);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
  pbVar12 = (byte *)0x0;
  pbVar5 = local_1d8 + -(longlong)local_1e0;
  if (local_1d8 < local_1e0) {
    pbVar5 = pbVar12;
  }
  pbVar11 = pbVar12;
  if (pbVar5 != (byte *)0x0) {
    lVar3 = -(longlong)local_1e0;
    do {
      bVar1 = *local_1e0;
      local_1e0 = local_1e0 + 1;
      pbVar11 = (byte *)(ulonglong)((int)pbVar11 << 8 | (uint)bVar1);
    } while (local_1e0 + lVar3 < pbVar5);
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    lVar3 = curl_maprintf(&DAT_145b6c294,pbVar11);
    if (lVar3 == 0) {
      return 0x1b;
    }
    Curl_ssl_push_certinfo(lVar2,param_2,"Version",lVar3);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Version: %lu (0x%lx)\n",(int)pbVar11 + 1,pbVar11);
  }
  if (local_1ae != '\0') {
    return 0x1b;
  }
  puVar15 = &DAT_145af3922;
  pcVar14 = "FALSE";
  switch(local_1af) {
  case 1:
    if ((longlong)local_1b8 - (longlong)local_1c0 == 1) {
      pcVar9 = "FALSE";
      if (*local_1c0 != 0) {
        pcVar9 = "TRUE";
      }
      pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(pcVar9);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    break;
  case 2:
  case 10:
    if (local_1b8 == local_1c0) {
      pbVar5 = (byte *)0x0;
    }
    else if ((ulonglong)((longlong)local_1b8 - (longlong)local_1c0) < 5) {
      uVar13 = (-1 < (char)*local_1c0) - 1;
      do {
        bVar1 = *local_1c0;
        local_1c0 = local_1c0 + 1;
        uVar13 = uVar13 << 8 | (uint)bVar1;
      } while (local_1c0 < local_1b8);
      puVar10 = &DAT_145af3922;
      if (9 < uVar13) {
        puVar10 = &DAT_145b1b708;
      }
      pbVar5 = (byte *)curl_maprintf("%s%lx",puVar10);
    }
    else {
      pbVar5 = (byte *)FUN_1436db240();
    }
    break;
  case 3:
    local_1c0 = local_1c0 + 1;
    if (local_1c0 <= local_1b8) goto LAB_1436d943e;
    pbVar5 = (byte *)0x0;
    break;
  case 4:
LAB_1436d943e:
    pbVar5 = (byte *)FUN_1436db240(local_1c0,local_1b8);
    break;
  case 5:
    pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    break;
  case 6:
    pbVar5 = (byte *)FUN_1436da320(local_1c0,local_1b8,"_");
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    lVar3 = FUN_1436db360(&local_258,local_1af,local_1c0,local_1b8);
    pbVar5 = local_258;
    if (lVar3 < 0) {
      pbVar5 = pbVar12;
    }
    break;
  case 0x17:
    pbVar5 = (byte *)FUN_1436da3f0(local_1c0,local_1b8);
    break;
  case 0x18:
    pbVar5 = (byte *)FUN_1436da190(local_1c0,local_1b8);
  }
  if (pbVar5 == (byte *)0x0) {
    return 0x1b;
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Serial Number",pbVar5);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Serial Number: %s\n",pbVar5);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
  uVar6 = FUN_1436d9de0(local_228,local_1a0,local_198);
  local_250[1] = 0;
  local_22f = 0;
  local_238 = local_198;
  local_250[2] = local_198;
  if (uVar6 < local_198) {
    FUN_1436d9de0(local_250 + 1,uVar6,local_198);
  }
  lVar3 = FUN_1436da320(local_220,local_218,1);
  if (lVar3 == 0) {
    return 0x1b;
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Signature Algorithm",lVar3);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Signature Algorithm: %s\n",lVar3);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  if (local_12e != '\0') {
    return 0x1b;
  }
  switch(local_12f) {
  case 1:
    if ((longlong)local_138 - (longlong)local_140 == 1) {
      pcVar9 = "FALSE";
      if (*local_140 != 0) {
        pcVar9 = "TRUE";
      }
      pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(pcVar9);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    break;
  case 2:
  case 10:
    if (local_138 == local_140) {
      pbVar5 = (byte *)0x0;
    }
    else if ((ulonglong)((longlong)local_138 - (longlong)local_140) < 5) {
      uVar13 = (-1 < (char)*local_140) - 1;
      do {
        bVar1 = *local_140;
        local_140 = local_140 + 1;
        uVar13 = uVar13 << 8 | (uint)bVar1;
      } while (local_140 < local_138);
      puVar10 = &DAT_145af3922;
      if (9 < uVar13) {
        puVar10 = &DAT_145b1b708;
      }
      pbVar5 = (byte *)curl_maprintf("%s%lx",puVar10);
    }
    else {
      pbVar5 = (byte *)FUN_1436db240();
    }
    break;
  case 3:
    local_140 = local_140 + 1;
    if (local_140 <= local_138) goto LAB_1436d9688;
    pbVar5 = (byte *)0x0;
    break;
  case 4:
LAB_1436d9688:
    pbVar5 = (byte *)FUN_1436db240(local_140,local_138);
    break;
  case 5:
    pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    break;
  case 6:
    pbVar5 = (byte *)FUN_1436da320(local_140,local_138,1);
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    lVar3 = FUN_1436db360(&local_258,local_12f,local_140,local_138);
    pbVar5 = local_258;
    if (lVar3 < 0) {
      pbVar5 = pbVar12;
    }
    break;
  case 0x17:
    pbVar5 = (byte *)FUN_1436da3f0(local_140,local_138);
    break;
  case 0x18:
    pbVar5 = (byte *)FUN_1436da190(local_140,local_138);
  }
  if (pbVar5 == (byte *)0x0) {
    return 0x1b;
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Start Date",pbVar5);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Start Date: %s\n",pbVar5);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
  if (local_10e != '\0') {
    return 0x1b;
  }
  switch(local_10f) {
  case 1:
    if ((longlong)local_118 - (longlong)local_120 == 1) {
      pcVar9 = "FALSE";
      if (*local_120 != 0) {
        pcVar9 = "TRUE";
      }
      pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(pcVar9);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    break;
  case 2:
  case 10:
    if (local_118 == local_120) {
      pbVar5 = (byte *)0x0;
    }
    else if ((ulonglong)((longlong)local_118 - (longlong)local_120) < 5) {
      uVar13 = (-1 < (char)*local_120) - 1;
      do {
        bVar1 = *local_120;
        local_120 = local_120 + 1;
        uVar13 = uVar13 << 8 | (uint)bVar1;
      } while (local_120 < local_118);
      puVar10 = &DAT_145af3922;
      if (9 < uVar13) {
        puVar10 = &DAT_145b1b708;
      }
      pbVar5 = (byte *)curl_maprintf("%s%lx",puVar10);
    }
    else {
      pbVar5 = (byte *)FUN_1436db240();
    }
    break;
  case 3:
    local_120 = local_120 + 1;
    if (local_120 <= local_118) goto LAB_1436d9838;
    pbVar5 = (byte *)0x0;
    break;
  case 4:
LAB_1436d9838:
    pbVar5 = (byte *)FUN_1436db240(local_120,local_118);
    break;
  case 5:
    pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    break;
  case 6:
    pbVar5 = (byte *)FUN_1436da320(local_120,local_118,1);
    break;
  default:
    return 0x1b;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    lVar3 = FUN_1436db360(&local_258,local_10f,local_120,local_118);
    pbVar5 = local_258;
    if (lVar3 < 0) {
      pbVar5 = pbVar12;
    }
    break;
  case 0x17:
    pbVar5 = (byte *)FUN_1436da3f0(local_120,local_118);
    break;
  case 0x18:
    pbVar5 = (byte *)FUN_1436da190(local_120,local_118);
  }
  if (pbVar5 == (byte *)0x0) {
    return 0x1b;
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Expire Date",pbVar5);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Expire Date: %s\n",pbVar5);
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
  uVar6 = FUN_1436d9de0(local_228,local_c0,local_b8);
  local_250[1] = 0;
  local_22f = 0;
  local_238 = local_b8;
  local_250[2] = local_b8;
  if (uVar6 < local_b8) {
    FUN_1436d9de0(local_250 + 1,uVar6,local_b8);
  }
  lVar3 = FUN_1436da320(local_220,local_218,1);
  if (lVar3 == 0) {
    return 0x1b;
  }
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    Curl_ssl_push_certinfo(lVar2,param_2,"Public Key Algorithm",lVar3);
  }
  if (param_2 == 0) {
    FUN_1436b58e0(lVar2,"   Public Key Algorithm: %s\n",lVar3);
  }
  FUN_1436da560(lVar2,param_2,lVar3,local_250 + 1,local_a8);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  if (local_16e != '\0') {
    return 0x1b;
  }
  switch(local_16f) {
  case 1:
    if ((longlong)local_178 - (longlong)local_180 == 1) {
      if (*local_180 != 0) {
        pcVar14 = "TRUE";
      }
      pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(pcVar14);
    }
    else {
      pbVar5 = (byte *)0x0;
    }
    break;
  case 2:
  case 10:
    if (local_178 == local_180) {
      pbVar5 = (byte *)0x0;
    }
    else if ((ulonglong)((longlong)local_178 - (longlong)local_180) < 5) {
      uVar13 = (-1 < (char)*local_180) - 1;
      do {
        bVar1 = *local_180;
        local_180 = local_180 + 1;
        uVar13 = uVar13 << 8 | (uint)bVar1;
      } while (local_180 < local_178);
      if (9 < uVar13) {
        puVar15 = &DAT_145b1b708;
      }
      pbVar5 = (byte *)curl_maprintf("%s%lx",puVar15);
    }
    else {
      pbVar5 = (byte *)FUN_1436db240();
    }
    break;
  case 3:
    local_180 = local_180 + 1;
    if (local_180 <= local_178) goto LAB_1436d9ab5;
    pbVar5 = (byte *)0x0;
    break;
  case 4:
LAB_1436d9ab5:
    pbVar5 = (byte *)FUN_1436db240(local_180,local_178);
    break;
  case 5:
    pbVar5 = (byte *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    break;
  case 6:
    pbVar5 = (byte *)FUN_1436da320(local_180,local_178,1);
    break;
  default:
    goto switchD_1436d9384_caseD_7;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    lVar3 = FUN_1436db360(&local_258,local_16f,local_180,local_178);
    pbVar5 = local_258;
    if (lVar3 < 0) {
      pbVar5 = pbVar12;
    }
    break;
  case 0x17:
    pbVar5 = (byte *)FUN_1436da3f0(local_180,local_178);
    break;
  case 0x18:
    pbVar5 = (byte *)FUN_1436da190(local_180,local_178);
  }
  if (pbVar5 != (byte *)0x0) {
    if (*(char *)(lVar2 + 0x3f1) != '\0') {
      Curl_ssl_push_certinfo(lVar2,param_2,"Signature",pbVar5);
    }
    if (param_2 == 0) {
      FUN_1436b58e0(lVar2,"   Signature: %s\n",pbVar5);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar5);
    uVar7 = Curl_base64_encode(lVar2,local_200,local_1f8 - local_200,local_250,&local_res8);
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    lVar3 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                      (local_res8 + ((ulonglong)(local_res8 + 0x3f) >> 6) + 0x37);
    if (lVar3 != 0) {
      lVar4 = FUN_1436da4c0(lVar3,"-----BEGIN CERTIFICATE-----");
      if (local_res8 != (byte *)0x0) {
        do {
          lVar8 = FUN_1436da4c0(lVar3 + lVar4,pbVar12 + local_250[0]);
          lVar4 = lVar4 + lVar8;
          pbVar12 = pbVar12 + 0x40;
        } while (pbVar12 < local_res8);
      }
      lVar8 = FUN_1436da4c0(lVar3 + lVar4,"-----END CERTIFICATE-----");
      *(undefined1 *)(lVar8 + lVar3 + lVar4) = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_250[0]);
      if (*(char *)(lVar2 + 0x3f1) != '\0') {
        Curl_ssl_push_certinfo(lVar2,param_2,&DAT_145b72454,lVar3);
      }
      if (param_2 == 0) {
        FUN_1436b58e0(lVar2,&DAT_145af6478,lVar3);
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
      return 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_250[0]);
  }
switchD_1436d9384_caseD_7:
  return 0x1b;
}



// FUNCTION 1436d9de0 FUN_1436d9de0 body=255 status=ok
// SIG undefined FUN_1436d9de0(void)

byte * FUN_1436d9de0(undefined8 *param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  undefined1 local_28 [32];
  
  if ((param_2 < param_3) && (*param_2 != 0)) {
    *param_1 = param_2;
    bVar3 = *param_2;
    bVar1 = bVar3 >> 5 & 1;
    *(byte *)((longlong)param_1 + 0x1a) = bVar1;
    *(byte *)(param_1 + 3) = bVar3 >> 6;
    if (((bVar3 & 0x1f) != 0x1f) &&
       (*(byte *)((longlong)param_1 + 0x19) = bVar3 & 0x1f, param_2 + 1 < param_3)) {
      bVar3 = param_2[1];
      param_2 = param_2 + 2;
      if ((char)bVar3 < '\0') {
        bVar3 = bVar3 & 0x7f;
        if (bVar3 == 0) {
          if (bVar1 == 0) {
            return (byte *)0x0;
          }
          param_1[1] = param_2;
          if (param_3 <= param_2) {
            return (byte *)0x0;
          }
          do {
            if (*param_2 == 0) {
              if (param_3 <= param_2) {
                return (byte *)0x0;
              }
              param_1[2] = param_2;
              return param_2 + 1;
            }
            param_2 = (byte *)FUN_1436d9de0(local_28,param_2,param_3);
            if (param_2 == (byte *)0x0) {
              return (byte *)0x0;
            }
          } while (param_2 < param_3);
          return (byte *)0x0;
        }
        if (param_3 < param_2 + bVar3) {
          return (byte *)0x0;
        }
        uVar2 = 0;
        do {
          if ((uVar2 & 0xff000000) != 0) {
            return (byte *)0x0;
          }
          bVar1 = *param_2;
          param_2 = param_2 + 1;
          uVar2 = uVar2 << 8 | (uint)bVar1;
          bVar3 = bVar3 - 1;
        } while (bVar3 != 0);
      }
      else {
        uVar2 = (uint)bVar3;
      }
      if (uVar2 <= (uint)((int)param_3 - (int)param_2)) {
        param_1[1] = param_2;
        param_1[2] = param_2 + uVar2;
        return param_2 + uVar2;
      }
    }
  }
  return (byte *)0x0;
}



// FUNCTION 1436d9ee0 FUN_1436d9ee0 body=674 status=ok
// SIG undefined FUN_1436d9ee0(void)

void FUN_1436d9ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  char cVar4;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_38 [8];
  undefined8 local_30;
  ulonglong local_28;
  
  param_1[1] = param_2;
  param_1[2] = param_3;
  *param_1 = 0;
  FUN_1436d9de0(&local_58);
  uVar2 = CONCAT44(uStack_44,local_48);
  uVar1 = FUN_1436d9de0(local_38,CONCAT44(uStack_4c,uStack_50),uVar2);
  uVar1 = FUN_1436d9de0(param_1 + 0xc,uVar1,uVar2);
  FUN_1436d9de0(param_1 + 0x10,uVar1,uVar2);
  param_1[5] = &DAT_145b71900;
  param_1[4] = 0;
  param_1[6] = &DAT_145b71901;
  uVar2 = FUN_1436d9de0(&local_58,local_30,local_28);
  if (uStack_40._1_1_ == '\0') {
    FUN_1436d9de0(param_1 + 4,CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_44,local_48));
    uVar2 = FUN_1436d9de0(&local_58,uVar2,local_28);
  }
  *(undefined4 *)(param_1 + 8) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x44) = uStack_54;
  *(undefined4 *)(param_1 + 9) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_4c;
  *(undefined4 *)(param_1 + 10) = local_48;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_44;
  *(undefined4 *)(param_1 + 0xb) = uStack_40;
  *(undefined4 *)((longlong)param_1 + 0x5c) = uStack_3c;
  uVar2 = FUN_1436d9de0(param_1 + 0xc,uVar2,local_28);
  uVar2 = FUN_1436d9de0(param_1 + 0x14,uVar2,local_28);
  uVar2 = FUN_1436d9de0(&local_58,uVar2,local_28);
  uVar1 = FUN_1436d9de0(param_1 + 0x18,CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_44,local_48));
  FUN_1436d9de0(param_1 + 0x1c,uVar1,CONCAT44(uStack_44,local_48));
  uVar2 = FUN_1436d9de0(param_1 + 0x20,uVar2,local_28);
  uVar3 = FUN_1436d9de0(param_1 + 0x24,uVar2,local_28);
  uVar2 = FUN_1436d9de0(param_1 + 0x28,param_1[0x25],param_1[0x26]);
  FUN_1436d9de0(param_1 + 0x2c,uVar2,param_1[0x26]);
  *(undefined1 *)((longlong)param_1 + 0x1b9) = 0;
  param_1[0x32] = &DAT_145af3922;
  param_1[0x31] = &DAT_145af3922;
  param_1[0x36] = &DAT_145af3922;
  param_1[0x35] = &DAT_145af3922;
  param_1[0x3a] = &DAT_145af3922;
  param_1[0x39] = &DAT_145af3922;
  *(undefined1 *)((longlong)param_1 + 0x199) = 0;
  uStack_40._0_2_ = (ushort)(byte)uStack_40;
  *(undefined1 *)((longlong)param_1 + 0x1d9) = 0;
  param_1[0x34] = 0;
  param_1[0x30] = 0;
  param_1[0x38] = 0;
  if (uVar3 < local_28) {
    uVar3 = FUN_1436d9de0(&local_58,uVar3,local_28);
    if (uStack_40._1_1_ == '\x01') {
      *(undefined4 *)(param_1 + 0x30) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x184) = uStack_54;
      *(undefined4 *)(param_1 + 0x31) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x18c) = uStack_4c;
      *(undefined4 *)(param_1 + 0x32) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x194) = uStack_44;
      *(undefined4 *)(param_1 + 0x33) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x19c) = uStack_3c;
      if (local_28 <= uVar3) {
        return;
      }
      uVar3 = FUN_1436d9de0(&local_58,uVar3,local_28);
    }
    cVar4 = uStack_40._1_1_;
    if (uStack_40._1_1_ == '\x02') {
      *(undefined4 *)(param_1 + 0x34) = local_58;
      *(undefined4 *)((longlong)param_1 + 0x1a4) = uStack_54;
      *(undefined4 *)(param_1 + 0x35) = uStack_50;
      *(undefined4 *)((longlong)param_1 + 0x1ac) = uStack_4c;
      *(undefined4 *)(param_1 + 0x36) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x1b4) = uStack_44;
      *(undefined4 *)(param_1 + 0x37) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1bc) = uStack_3c;
      if (local_28 <= uVar3) {
        return;
      }
      FUN_1436d9de0(&local_58,uVar3,local_28);
      cVar4 = uStack_40._1_1_;
    }
    if (cVar4 == '\x03') {
      FUN_1436d9de0(param_1 + 0x38,CONCAT44(uStack_4c,uStack_50),CONCAT44(uStack_44,local_48));
    }
  }
  return;
}



// FUNCTION 1436da190 FUN_1436da190 body=395 status=ok
// SIG undefined FUN_1436da190(void)

undefined8 FUN_1436da190(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  longlong lVar4;
  char cVar5;
  char *pcVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  
  puVar8 = &DAT_145af3922;
  puVar9 = &DAT_145af3922;
  for (pcVar1 = param_1; (pcVar1 < param_2 && ((byte)(*pcVar1 - 0x30U) < 10)); pcVar1 = pcVar1 + 1)
  {
  }
  cVar7 = '0';
  lVar4 = (longlong)pcVar1 - (longlong)param_1;
  if (lVar4 == 0xc) {
    cVar5 = '0';
  }
  else {
    if (lVar4 != 0xd) {
      if (lVar4 != 0xe) {
        return 0;
      }
      cVar7 = pcVar1[-2];
    }
    cVar5 = pcVar1[-1];
  }
  lVar4 = 0;
  pcVar2 = pcVar1;
  if (pcVar1 < param_2) {
    pcVar6 = pcVar1;
    if ((*pcVar1 - 0x2cU & 0xfd) == 0) {
      pcVar2 = pcVar1 + 1;
      do {
        pcVar6 = pcVar6 + 1;
        if ((param_2 <= pcVar6) || (*pcVar6 < '0')) break;
      } while (*pcVar6 < ':');
      lVar4 = (longlong)pcVar6 - (longlong)pcVar2;
      do {
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) break;
      } while (pcVar1[lVar4] == '0');
    }
    pcVar1 = pcVar6;
    if (pcVar1 < param_2) {
      if (*pcVar1 == 'Z') {
        pcVar1 = " GMT";
        param_2 = "";
      }
      else {
        puVar9 = &DAT_145af3920;
        pcVar1 = pcVar1 + 1;
      }
    }
  }
  if (lVar4 != 0) {
    puVar8 = &DAT_145af796c;
  }
  uVar3 = curl_maprintf("%.4s-%.2s-%.2s %.2s:%.2s:%c%c%s%.*s%s%.*s",param_1,param_1 + 4,param_1 + 6,
                        param_1 + 8,param_1 + 10,(int)cVar7,(int)cVar5,puVar8,lVar4,pcVar2,puVar9,
                        (longlong)param_2 - (longlong)pcVar1,pcVar1);
  return uVar3;
}



// FUNCTION 1436da320 FUN_1436da320 body=203 status=ok
// SIG undefined FUN_1436da320(void)

longlong FUN_1436da320(ulonglong param_1,ulonglong param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 < param_2) {
    iVar1 = FUN_1436db060(0,0xffffffff,param_1,param_2);
    if (iVar1 < 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((longlong)(iVar1 + 1));
      if (lVar2 != 0) {
        FUN_1436db060(lVar2,iVar1,param_1,param_2);
        *(undefined1 *)(iVar1 + lVar2) = 0;
        if ((param_3 != '\0') && (lVar3 = FUN_1436db2e0(lVar2), lVar3 != 0)) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
          lVar2 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar3 + 8));
        }
      }
    }
    return lVar2;
  }
  return 0;
}



// FUNCTION 1436da3f0 FUN_1436da3f0 body=207 status=ok
// SIG undefined FUN_1436da3f0(void)

undefined8 FUN_1436da3f0(char *param_1,char *param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  
  for (pcVar1 = param_1; (pcVar1 < param_2 && ((byte)(*pcVar1 - 0x30U) < 10)); pcVar1 = pcVar1 + 1)
  {
  }
  pcVar3 = param_1 + 10;
  if (pcVar1 == pcVar3) {
    pcVar3 = "00";
  }
  else if ((longlong)pcVar1 - (longlong)pcVar3 != 2) {
    return 0;
  }
  if (param_2 <= pcVar1) {
    return 0;
  }
  if (*pcVar1 == 'Z') {
    pcVar1 = "GMT";
    param_2 = "";
  }
  else {
    pcVar1 = pcVar1 + 1;
  }
  uVar2 = curl_maprintf("%u%.2s-%.2s-%.2s %.2s:%.2s:%.2s %.*s",(*param_1 < '5') + '\x13',param_1,
                        param_1 + 2,param_1 + 4,param_1 + 6,param_1 + 8,pcVar3,
                        (longlong)param_2 - (longlong)pcVar1,pcVar1);
  return uVar2;
}



// FUNCTION 1436da4c0 FUN_1436da4c0 body=146 status=ok
// SIG undefined FUN_1436da4c0(void)

longlong FUN_1436da4c0(longlong param_1,char *param_2)

{
  char *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  do {
    uVar3 = uVar2;
    *(char *)(uVar3 + param_1) = *param_2;
    if (*param_2 == '\0') {
LAB_1436da548:
      *(undefined1 *)(uVar3 + param_1) = 10;
      return uVar3 + 1;
    }
    *(char *)(uVar3 + 1 + param_1) = param_2[1];
    if (param_2[1] == '\0') {
      uVar3 = uVar3 + 1;
      goto LAB_1436da548;
    }
    *(char *)(uVar3 + 2 + param_1) = param_2[2];
    if (param_2[2] == '\0') {
      *(undefined1 *)(uVar3 + 2 + param_1) = 10;
      return uVar3 + 3;
    }
    *(char *)(uVar3 + 3 + param_1) = param_2[3];
    pcVar1 = param_2 + 3;
    param_2 = param_2 + 4;
    if (*pcVar1 == '\0') {
      *(undefined1 *)(uVar3 + 3 + param_1) = 10;
      return uVar3 + 4;
    }
    uVar2 = uVar3 + 4;
    if (0x3f < uVar2) {
      *(undefined1 *)(uVar2 + param_1) = 10;
      return uVar3 + 5;
    }
  } while( true );
}



// FUNCTION 1436da560 FUN_1436da560 body=632 status=ok
// SIG undefined FUN_1436da560(void)

void FUN_1436da560(longlong param_1,int param_2,undefined8 param_3,longlong param_4,longlong param_5
                  )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_48 [8];
  char *local_40;
  char *local_38;
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  FUN_1436d9de0(local_28,*(longlong *)(param_5 + 8) + 1,*(undefined8 *)(param_5 + 0x10));
  iVar2 = curl_strequal(param_3,"rsaEncryption");
  if (iVar2 == 0) {
    iVar2 = curl_strequal(param_3,&DAT_145b71c24);
    if (iVar2 == 0) {
      iVar2 = curl_strequal(param_3,"dhpublicnumber");
      if (iVar2 == 0) {
        return;
      }
      FUN_1436d9de0(local_48,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      FUN_1436da7e0(param_1,param_2,"dh(p)",local_48);
      FUN_1436d9de0(local_48,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      FUN_1436da7e0(param_1,param_2,"dh(g)",local_48);
      pcVar5 = "dh(pub_key)";
    }
    else {
      uVar3 = FUN_1436d9de0(local_48,*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
      FUN_1436da7e0(param_1,param_2,"dsa(p)",local_48);
      uVar3 = FUN_1436d9de0(local_48,uVar3,*(undefined8 *)(param_4 + 0x10));
      FUN_1436da7e0(param_1,param_2,"dsa(q)",local_48);
      FUN_1436d9de0(local_48,uVar3,*(undefined8 *)(param_4 + 0x10));
      FUN_1436da7e0(param_1,param_2,"dsa(g)",local_48);
      pcVar5 = "dsa(pub_key)";
    }
    FUN_1436da7e0(param_1,param_2,pcVar5,local_28);
  }
  else {
    uVar3 = FUN_1436d9de0(local_48,local_20,local_18);
    cVar1 = *local_40;
    pcVar5 = local_40;
    while ((cVar1 == '\0' && (pcVar5 < local_38))) {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    uVar6 = (int)local_38 - (int)pcVar5;
    uVar7 = uVar6 * 8;
    if ((uVar6 & 0x1fffffff) != 0) {
      for (cVar1 = *pcVar5; -1 < cVar1; cVar1 = cVar1 * '\x02') {
        uVar7 = uVar7 - 1;
      }
    }
    if (0x20 < uVar7) {
      local_40 = pcVar5;
    }
    if (param_2 == 0) {
      FUN_1436b58e0(param_1,"   RSA Public Key (%lu bits)\n",uVar7);
    }
    if ((*(char *)(param_1 + 0x3f1) != '\0') &&
       (lVar4 = curl_maprintf(&DAT_145b72238,uVar7), lVar4 != 0)) {
      Curl_ssl_push_certinfo(param_1,param_2,"RSA Public Key",lVar4);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    }
    FUN_1436da7e0(param_1,param_2,"rsa(n)",local_48);
    FUN_1436d9de0(local_48,uVar3,local_18);
    FUN_1436da7e0(param_1,param_2,"rsa(e)",local_48);
  }
  return;
}



// FUNCTION 1436da7e0 FUN_1436da7e0 body=504 status=ok
// SIG undefined FUN_1436da7e0(void)

void FUN_1436da7e0(longlong param_1,int param_2,undefined8 param_3,longlong param_4)

{
  byte bVar1;
  byte *pbVar2;
  longlong lVar3;
  longlong lVar4;
  char *pcVar5;
  byte *pbVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong local_res20;
  
  if (*(char *)(param_4 + 0x1a) != '\0') {
    return;
  }
  bVar1 = *(byte *)(param_4 + 0x19);
  if (0x1d < bVar1 - 1) {
    return;
  }
  switch(bVar1) {
  case 1:
    if (*(longlong *)(param_4 + 0x10) - (longlong)*(char **)(param_4 + 8) == 1) {
      pcVar5 = "FALSE";
      if (**(char **)(param_4 + 8) != '\0') {
        pcVar5 = "TRUE";
      }
      lVar3 = (*(code *)PTR__strdup_1467dcc70)(pcVar5);
    }
    else {
      lVar3 = 0;
    }
    break;
  case 2:
  case 10:
    pbVar2 = *(byte **)(param_4 + 0x10);
    pbVar6 = *(byte **)(param_4 + 8);
    if (pbVar2 == pbVar6) {
      lVar3 = 0;
    }
    else if ((ulonglong)((longlong)pbVar2 - (longlong)pbVar6) < 5) {
      uVar10 = (-1 < (char)*pbVar6) - 1;
      do {
        bVar1 = *pbVar6;
        pbVar6 = pbVar6 + 1;
        uVar10 = uVar10 << 8 | (uint)bVar1;
      } while (pbVar6 < pbVar2);
      puVar8 = &DAT_145af3922;
      if (9 < uVar10) {
        puVar8 = &DAT_145b1b708;
      }
      lVar3 = curl_maprintf("%s%lx",puVar8,uVar10);
    }
    else {
      lVar3 = FUN_1436db240();
    }
    break;
  case 3:
    uVar9 = *(ulonglong *)(param_4 + 0x10);
    uVar7 = *(longlong *)(param_4 + 8) + 1;
    if (uVar7 <= uVar9) goto LAB_1436da90b;
    lVar3 = 0;
    break;
  case 4:
    uVar9 = *(ulonglong *)(param_4 + 0x10);
    uVar7 = *(ulonglong *)(param_4 + 8);
LAB_1436da90b:
    lVar3 = FUN_1436db240(uVar7,uVar9);
    break;
  case 5:
    lVar3 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    break;
  case 6:
    lVar3 = FUN_1436da320(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),
                          CONCAT71((int7)((ulonglong)
                                          (IMAGE_DOS_HEADER_140000000.e_magic +
                                          (&switchD_1436da837::switchdataD_1436da9d8)
                                          [(&switchD_1436da837::switchdataD_1436daa00)
                                           [(int)(bVar1 - 1)]]) >> 8),1));
    break;
  default:
    goto switchD_1436da837_caseD_7;
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
  case 0x1c:
  case 0x1e:
    lVar4 = FUN_1436db360(&local_res20,bVar1,*(undefined8 *)(param_4 + 8),
                          *(undefined8 *)(param_4 + 0x10));
    lVar3 = local_res20;
    if (lVar4 < 0) {
      lVar3 = 0;
    }
    break;
  case 0x17:
    lVar3 = FUN_1436da3f0(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
    break;
  case 0x18:
    lVar3 = FUN_1436da190(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
  }
  if (lVar3 != 0) {
    if (*(char *)(param_1 + 0x3f1) != '\0') {
      Curl_ssl_push_certinfo(param_1,param_2,param_3,lVar3);
    }
    if (param_2 == 0) {
      FUN_1436b58e0(param_1,"   %s: %s\n",param_3,lVar3);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  }
switchD_1436da837_caseD_7:
  return;
}



// FUNCTION 1436daa20 FUN_1436daa20 body=1442 status=ok
// SIG undefined FUN_1436daa20(void)

/* WARNING: Type propagation algorithm not settling */

ulonglong FUN_1436daa20(longlong param_1,ulonglong param_2,longlong param_3)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  longlong lVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  char *pcVar16;
  char *local_res20;
  undefined1 local_d8 [8];
  byte *local_d0;
  byte *local_c8;
  undefined1 local_bf;
  char local_be;
  undefined1 local_b8 [8];
  byte *local_b0;
  byte *local_a8;
  undefined1 local_9f;
  char local_9e;
  char *local_98;
  ulonglong local_90;
  ulonglong local_88;
  undefined1 local_80 [8];
  ulonglong local_78;
  ulonglong local_70;
  undefined1 local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  
  uVar5 = *(ulonglong *)(param_3 + 0x10);
  uVar12 = 0;
  uVar11 = *(ulonglong *)(param_3 + 8);
  if (uVar11 < uVar5) {
    do {
      local_88 = FUN_1436d9de0(local_80,uVar11,uVar5);
      uVar11 = local_78;
      uVar5 = local_70;
      if (local_78 < local_70) {
        do {
          pcVar16 = (char *)0x0;
          local_90 = FUN_1436d9de0(local_60,uVar11,uVar5);
          uVar6 = FUN_1436d9de0(local_d8,local_58,local_50);
          FUN_1436d9de0(local_b8,uVar6,local_50);
          if (local_be != '\0') {
            return 0xffffffffffffffff;
          }
          switch(local_bf) {
          case 1:
            if ((longlong)local_c8 - (longlong)local_d0 == 1) {
              pcVar7 = "FALSE";
              if (*local_d0 != 0) {
                pcVar7 = "TRUE";
              }
              pcVar7 = (char *)(*(code *)PTR__strdup_1467dcc70)(pcVar7);
            }
            else {
              pcVar7 = (char *)0x0;
            }
            break;
          case 2:
          case 10:
            if (local_c8 == local_d0) {
              pcVar7 = (char *)0x0;
            }
            else if ((ulonglong)((longlong)local_c8 - (longlong)local_d0) < 5) {
              uVar15 = (-1 < (char)*local_d0) - 1;
              pbVar9 = local_d0;
              do {
                bVar2 = *pbVar9;
                pbVar9 = pbVar9 + 1;
                uVar15 = uVar15 << 8 | (uint)bVar2;
              } while (pbVar9 < local_c8);
              puVar10 = &DAT_145af3922;
              if (9 < uVar15) {
                puVar10 = &DAT_145b1b708;
              }
              pcVar7 = (char *)curl_maprintf("%s%lx",puVar10);
            }
            else {
              pcVar7 = (char *)FUN_1436db240();
            }
            break;
          case 3:
            pbVar9 = local_d0 + 1;
            if (pbVar9 <= local_c8) goto LAB_1436dabd9;
            pcVar7 = (char *)0x0;
            break;
          case 4:
            pbVar9 = local_d0;
LAB_1436dabd9:
            pcVar7 = (char *)FUN_1436db240(pbVar9,local_c8);
            break;
          case 5:
            pcVar7 = (char *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
            break;
          case 6:
            pcVar7 = (char *)FUN_1436da320(local_d0,local_c8,1);
            break;
          default:
            goto switchD_1436dab04_caseD_7;
          case 0xc:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x16:
          case 0x1a:
          case 0x1c:
          case 0x1e:
            lVar8 = FUN_1436db360(&local_res20,local_bf,local_d0,local_c8);
            pcVar7 = local_res20;
            if (lVar8 < 0) {
              pcVar7 = pcVar16;
            }
            break;
          case 0x17:
            pcVar7 = (char *)FUN_1436da3f0(local_d0,local_c8);
            break;
          case 0x18:
            pcVar7 = (char *)FUN_1436da190(local_d0,local_c8);
          }
          if (pcVar7 == (char *)0x0) {
switchD_1436dab04_caseD_7:
            return 0xffffffffffffffff;
          }
          uVar11 = 0;
          if (uVar12 != 0) {
            iVar4 = isupper((int)*pcVar7);
            pcVar13 = pcVar7;
            while (iVar4 != 0) {
              pcVar1 = pcVar13 + 1;
              pcVar13 = pcVar13 + 1;
              iVar4 = isupper((int)*pcVar1);
            }
            uVar11 = uVar12;
            if ((*pcVar13 != '\0') ||
               (puVar10 = &DAT_145b036e8, 2 < (longlong)pcVar13 - (longlong)pcVar7)) {
              puVar10 = &DAT_145b11fc0;
            }
            do {
              if (uVar11 < param_2) {
                *(undefined1 *)(uVar11 + param_1) = puVar10[uVar11 - uVar12];
              }
              uVar11 = uVar11 + 1;
            } while (puVar10[uVar11 - uVar12] != '\0');
          }
          cVar3 = *pcVar7;
          uVar12 = uVar11;
          while (cVar3 != '\0') {
            if (uVar12 < param_2) {
              *(char *)(uVar12 + param_1) = pcVar7[uVar12 - uVar11];
            }
            uVar12 = uVar12 + 1;
            cVar3 = pcVar7[uVar12 - uVar11];
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar7);
          pbVar14 = local_a8;
          pbVar9 = local_b0;
          if (uVar12 < param_2) {
            *(undefined1 *)(uVar12 + param_1) = 0x3d;
          }
          if (local_9e != '\0') {
            return 0xffffffffffffffff;
          }
          switch(local_9f) {
          case 1:
            if ((longlong)local_a8 - (longlong)local_b0 == 1) {
              pcVar16 = "FALSE";
              if (*local_b0 != 0) {
                pcVar16 = "TRUE";
              }
              pcVar16 = (char *)(*(code *)PTR__strdup_1467dcc70)(pcVar16);
            }
            break;
          case 2:
          case 10:
            if (local_a8 != local_b0) {
              if ((ulonglong)((longlong)local_a8 - (longlong)local_b0) < 5) {
                uVar15 = (-1 < (char)*local_b0) - 1;
                do {
                  bVar2 = *pbVar9;
                  pbVar9 = pbVar9 + 1;
                  uVar15 = uVar15 << 8 | (uint)bVar2;
                } while (pbVar9 < local_a8);
                puVar10 = &DAT_145af3922;
                if (9 < uVar15) {
                  puVar10 = &DAT_145b1b708;
                }
                pcVar16 = (char *)curl_maprintf("%s%lx",puVar10);
              }
              else {
                pcVar16 = (char *)FUN_1436db240();
              }
            }
            break;
          case 3:
            if (local_b0 + 1 <= local_a8) {
              pcVar16 = (char *)FUN_1436db240();
            }
            break;
          case 4:
            uVar11 = (longlong)local_a8 - (longlong)local_b0;
            pcVar16 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar11 * 3 + 1)
            ;
            if (pcVar16 != (char *)0x0) {
              if (pbVar14 < pbVar9) {
                uVar11 = 0;
              }
              if (uVar11 != 0) {
                pcVar7 = pcVar16;
                pbVar14 = pbVar9;
                do {
                  curl_msnprintf(pcVar7,4,"%02x:",*pbVar14);
                  pbVar14 = pbVar14 + 1;
                  pcVar7 = pcVar7 + 3;
                  uVar5 = local_70;
                } while ((ulonglong)((longlong)pbVar14 - (longlong)pbVar9) < uVar11);
              }
            }
            break;
          case 5:
            pcVar16 = (char *)(*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
            break;
          case 6:
            if (local_b0 < local_a8) {
              iVar4 = FUN_1436db060(0,0xffffffff,local_b0,local_a8);
              if ((-1 < iVar4) &&
                 (pcVar16 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                              ((longlong)(iVar4 + 1)), pcVar16 != (char *)0x0)) {
                FUN_1436db060(pcVar16,iVar4,pbVar9,pbVar14);
                pcVar16[iVar4] = '\0';
                lVar8 = FUN_1436db2e0(pcVar16);
                if (lVar8 != 0) {
                  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar16);
                  pcVar16 = (char *)(*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar8 + 8));
                }
              }
            }
            break;
          default:
            return 0xffffffffffffffff;
          case 0xc:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x16:
          case 0x1a:
          case 0x1c:
          case 0x1e:
            lVar8 = FUN_1436db360(&local_98,local_9f,local_b0,local_a8);
            pcVar16 = local_98;
            if (lVar8 < 0) {
              pcVar16 = (char *)0x0;
            }
            break;
          case 0x17:
            pcVar16 = (char *)FUN_1436da3f0(local_b0,local_a8);
            break;
          case 0x18:
            pcVar16 = (char *)FUN_1436da190(local_b0,local_a8);
          }
          if (pcVar16 == (char *)0x0) {
            return 0xffffffffffffffff;
          }
          cVar3 = *pcVar16;
          pcVar7 = pcVar16;
          while (uVar12 = uVar12 + 1, cVar3 != '\0') {
            if (uVar12 < param_2) {
              *(char *)(uVar12 + param_1) = *pcVar7;
            }
            pcVar7 = pcVar7 + 1;
            cVar3 = *pcVar7;
          }
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar16);
          uVar11 = local_90;
        } while (local_90 < uVar5);
      }
      uVar5 = *(ulonglong *)(param_3 + 0x10);
      uVar11 = local_88;
    } while (local_88 < uVar5);
  }
  return uVar12;
}



// FUNCTION 1436db060 FUN_1436db060 body=339 status=ok
// SIG undefined FUN_1436db060(void)

int FUN_1436db060(longlong param_1,int param_2,byte *param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  pbVar4 = param_3 + 1;
  iVar2 = FUN_1436db1c0(param_1,param_2,(ulonglong)*param_3 / 0x28);
  if (iVar2 < param_2) {
    *(undefined1 *)(iVar2 + param_1) = 0x2e;
  }
  iVar2 = iVar2 + 1;
  iVar3 = FUN_1436db1c0(iVar2 + param_1,param_2 - iVar2);
  iVar2 = iVar2 + iVar3;
  do {
    if (param_4 <= pbVar4) {
      if (iVar2 < param_2) {
        *(undefined1 *)(iVar2 + param_1) = 0;
      }
      return iVar2;
    }
    if (iVar2 < param_2) {
      *(undefined1 *)(iVar2 + param_1) = 0x2e;
    }
    iVar2 = iVar2 + 1;
    uVar7 = 0;
    do {
      if ((uVar7 & 0xff000000) != 0) {
        return -1;
      }
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      uVar7 = bVar1 & 0x7f | uVar7 << 7;
    } while ((char)bVar1 < '\0');
    lVar5 = iVar2 + param_1;
    iVar6 = param_2 - iVar2;
    uVar8 = uVar7 / 10;
    iVar3 = 0;
    if (uVar8 != 0) {
      iVar3 = FUN_1436db1c0(lVar5,iVar6,uVar8);
      uVar7 = uVar7 + uVar8 * -10;
    }
    if (iVar3 < iVar6) {
      *(char *)(iVar3 + lVar5) = (char)uVar7 + '0';
    }
    iVar3 = iVar3 + 1;
    if (iVar3 < iVar6) {
      *(undefined1 *)(iVar3 + lVar5) = 0;
    }
    iVar2 = iVar2 + iVar3;
  } while( true );
}



// FUNCTION 1436db1c0 FUN_1436db1c0 body=119 status=ok
// SIG undefined FUN_1436db1c0(void)

int FUN_1436db1c0(longlong param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 / 10 != 0) {
    iVar1 = FUN_1436db1c0(param_1,param_2,param_3 / 10);
    param_3 = param_3 % 10;
  }
  if (iVar1 < param_2) {
    *(char *)(iVar1 + param_1) = (char)param_3 + '0';
  }
  iVar1 = iVar1 + 1;
  if (iVar1 < param_2) {
    *(undefined1 *)(iVar1 + param_1) = 0;
  }
  return iVar1;
}



// FUNCTION 1436db240 FUN_1436db240 body=150 status=ok
// SIG undefined FUN_1436db240(void)

longlong FUN_1436db240(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  lVar1 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                    (((longlong)param_2 - (longlong)param_1) * 3 + 1);
  if (lVar1 != 0) {
    uVar3 = 0;
    uVar2 = (longlong)param_2 - (longlong)param_1;
    if (param_2 < param_1) {
      uVar2 = uVar3;
    }
    lVar4 = lVar1;
    if (uVar2 != 0) {
      do {
        curl_msnprintf(lVar4,4,"%02x:",*param_1);
        param_1 = param_1 + 1;
        uVar3 = uVar3 + 1;
        lVar4 = lVar4 + 3;
      } while (uVar3 < uVar2);
    }
  }
  return lVar1;
}



// FUNCTION 1436db2e0 FUN_1436db2e0 body=124 status=ok
// SIG undefined FUN_1436db2e0(void)

undefined ** FUN_1436db2e0(longlong param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined **ppuVar5;
  longlong lVar6;
  
  ppuVar5 = &PTR_s_1_2_840_10040_4_1_145b71920;
  do {
    pcVar4 = *ppuVar5;
    lVar6 = param_1 - (longlong)pcVar4;
    do {
      cVar1 = *pcVar4;
      cVar2 = pcVar4[lVar6];
      if (cVar1 != cVar2) break;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if ((cVar1 == cVar2) || (iVar3 = curl_strequal(ppuVar5[1],param_1), iVar3 != 0)) {
      return ppuVar5;
    }
    ppuVar5 = ppuVar5 + 2;
    if (*ppuVar5 == (undefined *)0x0) {
      return (undefined **)0x0;
    }
  } while( true );
}



// FUNCTION 1436db360 FUN_1436db360 body=430 status=ok
// SIG undefined FUN_1436db360(void)

size_t FUN_1436db360(undefined8 *param_1,int param_2,byte *param_3,byte *param_4)

{
  uint uVar1;
  void *_Dst;
  byte bVar2;
  longlong lVar3;
  size_t _Size;
  ulonglong uVar4;
  
  *param_1 = 0;
  _Size = (longlong)param_4 - (longlong)param_3;
  uVar4 = 1;
  switch(param_2) {
  case 0xc:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x1a:
    break;
  default:
    goto switchD_1436db3ba_caseD_d;
  case 0x1c:
    uVar4 = 4;
    break;
  case 0x1e:
    uVar4 = 2;
  }
  if (_Size % uVar4 == 0) {
    _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((_Size / uVar4) * 4 + 1);
    if (_Dst == (void *)0x0) {
LAB_1436db505:
      _Size = 0xffffffffffffffff;
    }
    else {
      if (param_2 == 0xc) {
        if (_Size != 0) {
          _guard_xfg_dispatch_icall_nop(_Dst,param_3,_Size);
        }
      }
      else {
        _Size = 0;
        while (param_3 < param_4) {
          uVar1 = 0;
          if ((int)uVar4 == 2) {
LAB_1436db466:
            uVar1 = uVar1 << 8 | (uint)*param_3;
            param_3 = param_3 + 1;
          }
          else if ((int)uVar4 == 4) {
            uVar1 = (uint)CONCAT11(*param_3,param_3[1]);
            param_3 = param_3 + 2;
            goto LAB_1436db466;
          }
          bVar2 = *param_3;
          param_3 = param_3 + 1;
          uVar1 = uVar1 << 8 | (uint)bVar2;
          lVar3 = 1;
          if (0x7f < uVar1) {
            lVar3 = 1;
            if (0x7ff < uVar1) {
              if (0xffff < uVar1) {
                if (0x1fffff < uVar1) {
                  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Dst);
                  goto LAB_1436db505;
                }
                lVar3 = 2;
                *(byte *)(_Size + 3 + (longlong)_Dst) = bVar2 & 0x3f | 0x80;
                uVar1 = (uVar1 | 0x400000) >> 6;
              }
              bVar2 = (byte)uVar1;
              uVar1 = (uVar1 | 0x20000) >> 6;
              *(byte *)(_Size + 2 + (longlong)_Dst) = bVar2 & 0x3f | 0x80;
              lVar3 = lVar3 + 1;
            }
            *(byte *)(_Size + 1 + (longlong)_Dst) = (byte)uVar1 & 0x3f | 0x80;
            lVar3 = lVar3 + 1;
            uVar1 = (uVar1 | 0x3000) >> 6;
          }
          *(char *)(_Size + (longlong)_Dst) = (char)uVar1;
          _Size = _Size + lVar3;
        }
      }
      *(undefined1 *)(_Size + (longlong)_Dst) = 0;
      *param_1 = _Dst;
    }
  }
  else {
switchD_1436db3ba_caseD_d:
    _Size = 0xffffffffffffffff;
  }
  return _Size;
}



// FUNCTION 1436db540 Curl_pp_disconnect body=33 status=ok
// SIG undefined Curl_pp_disconnect(void)

undefined8 Curl_pp_disconnect(undefined8 *param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  return 0;
}



// FUNCTION 1436db570 FUN_1436db570 body=124 status=ok
// SIG undefined FUN_1436db570(void)

undefined8 FUN_1436db570(longlong param_1)

{
  undefined8 uVar1;
  longlong local_res8 [4];
  
  uVar1 = FUN_1436b5de0(*(longlong *)(param_1 + 0x50),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x1d0),
                        (*(longlong *)(param_1 + 0x38) - *(longlong *)(param_1 + 0x30)) +
                        *(longlong *)(param_1 + 0x28),*(longlong *)(param_1 + 0x30),local_res8);
  if ((int)uVar1 == 0) {
    if (local_res8[0] != *(longlong *)(param_1 + 0x30)) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) - local_res8[0];
      return 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x28));
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar1 = curlx_tvnow();
    *(undefined8 *)(param_1 + 0x40) = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436db620 FUN_1436db620 body=54 status=ok
// SIG undefined FUN_1436db620(void)

void FUN_1436db620(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar1 = **(longlong **)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(longlong *)(param_1 + 0x18) = lVar1 + 0x7e8;
  uVar2 = curlx_tvnow();
  *(undefined8 *)(param_1 + 0x40) = uVar2;
  return;
}



// FUNCTION 1436db660 Curl_pp_moredata body=29 status=ok
// SIG undefined Curl_pp_moredata(void)

ulonglong Curl_pp_moredata(longlong *param_1)

{
  ulonglong in_RAX;
  
  if (((param_1[6] == 0) && (*param_1 != 0)) &&
     (in_RAX = param_1[1], (ulonglong)param_1[2] < in_RAX)) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1436db680 FUN_1436db680 body=708 status=ok
// SIG undefined FUN_1436db680(void)

ulonglong FUN_1436db680(undefined8 param_1,undefined8 *param_2,undefined4 *param_3,
                       undefined8 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  void *_Dst;
  ulonglong uVar7;
  char *_Dst_00;
  longlong lVar8;
  size_t _Size;
  longlong lVar9;
  ulonglong uVar10;
  longlong local_res10;
  undefined4 *local_res18;
  undefined8 *local_res20;
  
  plVar1 = (longlong *)param_2[10];
  uVar10 = 0;
  bVar3 = true;
  lVar2 = *plVar1;
  *param_3 = 0;
  *param_4 = 0;
  uVar7 = param_2[2];
  _Dst_00 = (char *)(uVar7 + 0x7e8 + lVar2);
  lVar8 = (longlong)_Dst_00 - param_2[3];
  local_res20 = param_4;
  local_res18 = param_3;
  do {
    if (((0x3fff < uVar7) || (uVar7 = 0, !bVar3)) || ((int)uVar10 != 0)) {
      *(undefined1 *)(param_2 + 4) = 0;
      return uVar10;
    }
    if ((void *)*param_2 == (void *)0x0) {
      uVar5 = FUN_1436b5980(plVar1,param_1,_Dst_00,0x4000 - param_2[2],&local_res10);
      uVar10 = (ulonglong)uVar5;
      if (uVar5 == 0x51) {
        return 0;
      }
      if (uVar5 == 0) {
        uVar10 = uVar7;
        if (0 < local_res10) goto LAB_1436db779;
        goto LAB_1436db8e9;
      }
      bVar3 = false;
    }
    else {
      _guard_xfg_dispatch_icall_nop(_Dst_00,(void *)*param_2,param_2[1]);
      local_res10 = param_2[1];
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_2);
      *param_2 = 0;
      param_2[1] = 0;
LAB_1436db779:
      if (local_res10 < 1) {
LAB_1436db8e9:
        bVar3 = false;
        uVar10 = 0x38;
        FUN_1436b5820(lVar2,"response reading failed");
      }
      else {
        *(int *)(lVar2 + 0xc0) = *(int *)(lVar2 + 0xc0) + (int)local_res10;
        param_2[2] = param_2[2] + local_res10;
        lVar9 = local_res10;
        if (0 < local_res10) {
          do {
            lVar8 = lVar8 + 1;
            if (*_Dst_00 == '\n') {
              if (*(char *)(lVar2 + 0x458) != '\0') {
                FUN_1436b56c0(lVar2,1,param_2[3],lVar8,plVar1);
              }
              uVar6 = Curl_client_write(plVar1,2,param_2[3],lVar8);
              uVar10 = uVar6 & 0xffffffff;
              if ((int)uVar6 != 0) {
                return uVar6;
              }
              cVar4 = (*(code *)param_2[0xc])(plVar1,param_2[3],lVar8,local_res18);
              if (cVar4 != '\0') {
                _Size = (longlong)_Dst_00 - (longlong)param_2[3];
                memmove((void *)(lVar2 + 0x7e8),(void *)param_2[3],_Size);
                *(undefined1 *)(_Size + lVar2 + 0x7e8) = 0;
                bVar3 = false;
                param_2[3] = _Dst_00 + 1;
                *local_res20 = param_2[2];
                param_2[2] = 0;
                if (uVar7 + 1 == local_res10) goto LAB_1436db8d1;
                lVar8 = local_res10 - (uVar7 + 1);
                goto LAB_1436db8a7;
              }
              param_2[3] = _Dst_00 + 1;
              lVar8 = 0;
              lVar9 = local_res10;
            }
            _Dst_00 = _Dst_00 + 1;
            uVar7 = uVar7 + 1;
          } while ((longlong)uVar7 < lVar9);
        }
        if ((lVar8 == lVar9) && (0x2000 < lVar9)) {
          FUN_1436b58e0(lVar2,
                        "Excessive server response line length received, %zd bytes. Stripping\n");
          lVar8 = 0x28;
LAB_1436db8ac:
          param_2[1] = lVar8;
          _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar8);
          *param_2 = _Dst;
          if (_Dst == (void *)0x0) {
            return 0x1b;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,(void *)param_2[3],param_2[1]);
        }
        else {
          if ((ulonglong)param_2[2] < 0x2001) goto LAB_1436db90a;
LAB_1436db8a7:
          if (lVar8 != 0) goto LAB_1436db8ac;
        }
LAB_1436db8d1:
        lVar8 = 0;
        _Dst_00 = (char *)(lVar2 + 0x7e8);
        param_2[2] = 0;
        param_2[3] = _Dst_00;
      }
    }
LAB_1436db90a:
    uVar7 = param_2[2];
  } while( true );
}



// FUNCTION 1436db950 Curl_pp_sendf body=34 status=ok
// SIG undefined Curl_pp_sendf(void)

void Curl_pp_sendf(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_1436dbb50(param_1,param_2,&local_res18);
  return;
}



// FUNCTION 1436db980 FUN_1436db980 body=133 status=ok
// SIG undefined FUN_1436db980(void)

int FUN_1436db980(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  lVar2 = *plVar1;
  iVar5 = *(int *)(lVar2 + 0x2d4);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x48);
  }
  uVar4 = curlx_tvnow();
  iVar3 = curlx_tvdiff(uVar4,*(undefined8 *)(param_1 + 0x40));
  iVar5 = iVar5 - iVar3;
  iVar3 = iVar5;
  if (*(int *)(lVar2 + 0x2c8) != 0) {
    uVar4 = curlx_tvnow();
    iVar3 = curlx_tvdiff(uVar4,*(undefined8 *)((longlong)plVar1 + 0x1bc));
    iVar3 = *(int *)(lVar2 + 0x2c8) - iVar3;
    if (iVar5 < iVar3) {
      iVar3 = iVar5;
    }
  }
  return iVar3;
}



// FUNCTION 1436dba10 FUN_1436dba10 body=311 status=ok
// SIG undefined FUN_1436dba10(void)

int FUN_1436dba10(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = (undefined8 *)param_1[10];
  uVar7 = puVar1[0x3a];
  iVar5 = FUN_1436db980();
  uVar2 = *puVar1;
  if (iVar5 < 1) {
    FUN_1436b5820(uVar2,"server response timeout");
    return 0x1c;
  }
  if (param_2 == '\0') {
    iVar6 = 0;
  }
  else {
    iVar6 = 1000;
    if (iVar5 < 1000) {
      iVar6 = iVar5;
    }
  }
  if (param_1[6] == 0) {
    if ((*param_1 != 0) && ((ulonglong)param_1[2] < (ulonglong)param_1[1])) {
      iVar5 = 1;
      goto LAB_1436dbad3;
    }
    cVar4 = thunk_FUN_1436c19f0(puVar1,0);
    if (cVar4 != '\0') {
      iVar5 = 1;
      goto LAB_1436dbad3;
    }
  }
  uVar8 = uVar7;
  uVar3 = 0xffffffffffffffff;
  if (param_1[6] != 0) {
    uVar8 = 0xffffffffffffffff;
    uVar3 = uVar7;
  }
  iVar5 = FUN_1436b50e0(uVar8,0xffffffffffffffff,uVar3,iVar6);
LAB_1436dbad3:
  if (param_2 != '\0') {
    iVar6 = FUN_1436befa0(puVar1);
    if (iVar6 != 0) {
      return 0x2a;
    }
    uVar7 = curlx_tvnow();
    iVar6 = FUN_1436bf8a0(uVar2,uVar7);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  iVar6 = 0;
  if (iVar5 == -1) {
    FUN_1436b5820(uVar2,"select/poll error");
    iVar6 = 0x1b;
  }
  else if (iVar5 != 0) {
    iVar6 = (*(code *)param_1[0xb])(puVar1);
  }
  return iVar6;
}



// FUNCTION 1436dbb50 FUN_1436dbb50 body=324 status=ok
// SIG undefined FUN_1436dbb50(void)

int FUN_1436dbb50(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong local_res8;
  
  plVar1 = *(longlong **)(param_1 + 0x50);
  lVar4 = curl_maprintf(&DAT_145b6b254);
  if (lVar4 != 0) {
    lVar5 = curl_mvaprintf(lVar4,param_3);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    if (lVar5 != 0) {
      local_res8 = 0;
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(lVar5 + lVar4) != '\0');
      *(undefined8 *)(param_1 + 0x10) = 0;
      lVar2 = **(longlong **)(param_1 + 0x50);
      *(undefined1 *)(param_1 + 0x20) = 1;
      *(longlong *)(param_1 + 0x18) = lVar2 + 0x7e8;
      uVar6 = curlx_tvnow();
      *(undefined8 *)(param_1 + 0x40) = uVar6;
      iVar3 = FUN_1436b5de0(plVar1,plVar1[0x3a],lVar5,lVar4,&local_res8);
      if (iVar3 == 0) {
        if (*(char *)(*plVar1 + 0x458) != '\0') {
          FUN_1436b56c0(*plVar1,2,lVar5,local_res8,plVar1);
        }
        if (local_res8 == lVar4) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
          *(undefined8 *)(param_1 + 0x28) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined8 *)(param_1 + 0x30) = 0;
          uVar6 = curlx_tvnow();
          *(undefined8 *)(param_1 + 0x40) = uVar6;
        }
        else {
          *(longlong *)(param_1 + 0x38) = lVar4;
          *(longlong *)(param_1 + 0x30) = lVar4 - local_res8;
          *(longlong *)(param_1 + 0x28) = lVar5;
        }
        iVar3 = 0;
      }
      else {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
      }
      return iVar3;
    }
  }
  return 0x1b;
}



// FUNCTION 1436dbca0 FUN_1436dbca0 body=31 status=ok
// SIG undefined FUN_1436dbca0(void)

byte FUN_1436dbca0(longlong param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3bf) != '\0') {
    return 1;
  }
  return (*(byte *)(param_1 + 0x10) & *(byte *)(param_1 + 0xc)) >> 5 & 1;
}



// FUNCTION 1436dbcc0 FUN_1436dbcc0 body=35 status=ok
// SIG undefined FUN_1436dbcc0(void)

void FUN_1436dbcc0(longlong param_1,int param_2)

{
  if (param_2 == 0x10) {
    FUN_1436e07e0(param_1 + 0x460);
    return;
  }
  if (param_2 == 0x40) {
    FUN_1436de9e0(param_1 + 0x500);
    return;
  }
  return;
}



// FUNCTION 1436dbcf0 FUN_1436dbcf0 body=1251 status=ok
// SIG undefined FUN_1436dbcf0(void)

/* WARNING: Type propagation algorithm not settling */

int FUN_1436dbcf0(longlong *param_1,longlong *param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  longlong local_res8 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 local_40;
  
  lVar2 = *param_2;
  local_res8[0] = 0;
  local_48 = 0;
  uVar7 = 0x10;
  plVar5 = (longlong *)(lVar2 + 0x5c0);
  local_40 = 0;
  if (*plVar5 == 0) {
    plVar5 = (longlong *)*param_1;
  }
  lVar3 = *plVar5;
  iVar4 = 1;
  *param_4 = 1;
  iVar1 = (int)param_1[1];
  local_res8[1] = 0;
  if (iVar1 == 0x10) {
    iVar1 = *(int *)(*param_1 + 0xc);
    *param_4 = 2;
    iVar4 = 0x43;
    if (param_3 == iVar1) {
      iVar4 = 0;
    }
    *(undefined4 *)(param_1 + 1) = 0;
    return iVar4;
  }
  if ((1 < iVar1 - 0xeU) && (param_3 != *(int *)(*param_1 + 8))) {
LAB_1436dbd7f:
    *param_4 = 2;
    *(undefined4 *)(param_1 + 1) = 0;
    return 0x43;
  }
  switch(iVar1) {
  case 0:
    *param_4 = 2;
    return 0;
  case 1:
    iVar4 = FUN_1436dfbf0(lVar2,param_2[0x30],param_2[0x31],local_res8,local_res8 + 1);
    break;
  case 2:
    iVar4 = Curl_auth_create_login_message(lVar2,param_2[0x30],local_res8,local_res8 + 1);
    uVar7 = 3;
    break;
  case 3:
    iVar4 = Curl_auth_create_login_message(lVar2,param_2[0x31],local_res8,local_res8 + 1);
    break;
  case 4:
    iVar4 = Curl_auth_create_external_message(lVar2,param_2[0x30],local_res8,local_res8 + 1);
    break;
  case 5:
    (**(code **)(*param_1 + 0x28))(lVar2 + 0x7e8,&local_res20);
    iVar4 = FUN_1436dff50(local_res20,&local_48,&local_40);
    if (iVar4 == 0) {
      iVar4 = Curl_auth_create_cram_md5_message
                        (lVar2,local_48,param_2[0x30],param_2[0x31],local_res8,local_res8 + 1);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_48);
    break;
  case 6:
    (**(code **)(*param_1 + 0x28))(lVar2 + 0x7e8,&local_res20);
    iVar4 = FUN_1436ddfe0(lVar2,local_res20,param_2[0x30],param_2[0x31],lVar3,local_res8,
                          local_res8 + 1);
    uVar7 = 7;
    break;
  case 7:
    puVar6 = &DAT_145af3922;
    goto LAB_1436dbef9;
  case 8:
    iVar4 = FUN_1436de590(param_2[0x30],param_2[0x31],param_2 + 0xa0,local_res8,local_res8 + 1);
    uVar7 = 9;
    break;
  case 9:
    (**(code **)(*param_1 + 0x28))(lVar2 + 0x7e8,&local_res20);
    iVar4 = FUN_1436de950(lVar2,local_res20,param_2 + 0xa0);
    if (iVar4 == 0) {
      iVar4 = FUN_1436de800(lVar2,param_2[0x30],param_2[0x31],param_2 + 0xa0,local_res8,
                            local_res8 + 1);
      break;
    }
    goto LAB_1436dc152;
  case 10:
    iVar4 = FUN_1436e0450(lVar2,param_2[0x30],param_2[0x31],lVar3,
                          *(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0xb8),
                          *(undefined1 *)((longlong)param_1 + 0x19),0,param_2 + 0x8c,local_res8,
                          local_res8 + 1);
    uVar7 = 0xb;
    break;
  case 0xb:
    (**(code **)(*param_1 + 0x28))(lVar2 + 0x7e8,&local_res20);
    if (*(char *)((longlong)param_1 + 0x19) == '\0') goto LAB_1436dc083;
    iVar4 = FUN_1436e0450(lVar2,0,0,0,0,*(char *)((longlong)param_1 + 0x19),local_res20,
                          param_2 + 0x8c,local_res8,local_res8 + 1);
    uVar7 = 0xc;
    break;
  case 0xc:
    (**(code **)(*param_1 + 0x28))(lVar2 + 0x7e8,&local_res20);
LAB_1436dc083:
    iVar4 = FUN_1436e0040(lVar2,local_res20,param_2 + 0x8c,local_res8,local_res8 + 1);
    break;
  case 0xd:
    if (*(int *)((longlong)param_1 + 0x14) == 0x100) {
      iVar4 = Curl_auth_create_oauth_bearer_message
                        (lVar2,param_2[0x30],param_2[0x17],(int)param_2[0x21],param_2[0x33],
                         local_res8,local_res8 + 1);
      uVar7 = 0xe;
    }
    else {
      iVar4 = Curl_auth_create_oauth_bearer_message
                        (lVar2,param_2[0x30],0,0,param_2[0x33],local_res8,local_res8 + 1);
    }
    break;
  case 0xe:
    if (param_3 == *(int *)(*param_1 + 0xc)) {
      *param_4 = 2;
      *(undefined4 *)(param_1 + 1) = 0;
      return 0;
    }
    if (param_3 != *(int *)(*param_1 + 8)) goto LAB_1436dbd7f;
    puVar6 = &DAT_145b7264c;
LAB_1436dbef9:
    local_res8[0] = (*(code *)PTR__strdup_1467dcc70)(puVar6);
    if (local_res8[0] != 0) goto LAB_1436dc17e;
    iVar4 = 0x1b;
    goto LAB_1436dc1a5;
  case 0xf:
    *(uint *)((longlong)param_1 + 0xc) =
         *(uint *)((longlong)param_1 + 0xc) ^ *(uint *)((longlong)param_1 + 0x14);
    iVar4 = FUN_1436dc3b0(param_1,param_2,*(undefined1 *)((longlong)param_1 + 0x1a),param_4);
    uVar7 = (undefined4)param_1[1];
    break;
  default:
    FUN_1436b5820(lVar2,"Unsupported SASL authentication mechanism");
    goto LAB_1436dc1a5;
  }
  if (iVar4 == 0) {
    if (local_res8[0] != 0) {
LAB_1436dc17e:
      iVar4 = (**(code **)(*param_1 + 0x20))(param_2,local_res8[0]);
    }
  }
  else {
LAB_1436dc152:
    if (iVar4 == 0x3d) {
      iVar4 = (**(code **)(*param_1 + 0x20))(param_2,&DAT_145af6c98);
      uVar7 = 0xf;
    }
    else {
LAB_1436dc1a5:
      uVar7 = 0;
      *param_4 = 2;
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8[0]);
  *(undefined4 *)(param_1 + 1) = uVar7;
  return iVar4;
}



// FUNCTION 1436dc220 Curl_sasl_decode_mech body=222 status=ok
// SIG undefined Curl_sasl_decode_mech(void)

undefined4 Curl_sasl_decode_mech(void *param_1,ulonglong param_2,ulonglong *param_3)

{
  byte bVar1;
  ulonglong _Size;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar3 = 0;
  uVar4 = uVar3;
  do {
    _Size = *(ulonglong *)((longlong)&DAT_145b72508 + uVar3);
    if ((_Size <= param_2) &&
       (iVar2 = _guard_xfg_dispatch_icall_nop
                          (param_1,*(void **)((longlong)&PTR_s_LOGIN_145b72500 + uVar3),_Size),
       iVar2 == 0)) {
      if (param_3 != (ulonglong *)0x0) {
        *param_3 = _Size;
      }
      if (param_2 == *(ulonglong *)((longlong)&DAT_145b72508 + uVar3)) {
LAB_1436dc2f1:
        return (&DAT_145b72510)[uVar4 * 6];
      }
      bVar1 = *(byte *)(*(ulonglong *)((longlong)&DAT_145b72508 + uVar3) + (longlong)param_1);
      iVar2 = isupper((uint)bVar1);
      if ((((iVar2 == 0) && (iVar2 = isdigit((uint)bVar1), iVar2 == 0)) && (bVar1 != 0x2d)) &&
         (bVar1 != 0x5f)) goto LAB_1436dc2f1;
    }
    uVar4 = (ulonglong)((int)uVar4 + 1);
    uVar3 = uVar4 * 0x18;
    if ((&PTR_s_LOGIN_145b72500)[uVar4 * 3] == (undefined *)0x0) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1436dc300 Curl_sasl_init body=29 status=ok
// SIG undefined Curl_sasl_init(void)

void Curl_sasl_init(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a) = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffdf;
  *(undefined2 *)(param_1 + 3) = 1;
  return;
}



// FUNCTION 1436dc320 Curl_sasl_parse_url_auth_option body=140 status=ok
// SIG undefined Curl_sasl_parse_url_auth_option(void)

undefined4 Curl_sasl_parse_url_auth_option(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong local_res18;
  
  uVar3 = 0;
  if (param_3 == 0) {
    uVar3 = 3;
  }
  else {
    if (*(char *)(param_1 + 0x18) != '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    iVar1 = curl_strnequal(param_2,&DAT_145af6c98);
    if (iVar1 == 0) {
      uVar2 = Curl_sasl_decode_mech(param_2,param_3,&local_res18);
      if ((uVar2 == 0) || (local_res18 != param_3)) {
        uVar3 = 3;
      }
      else {
        *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | uVar2;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffdf;
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1436dc3b0 FUN_1436dc3b0 body=1098 status=ok
// SIG undefined FUN_1436dc3b0(void)

int FUN_1436dc3b0(longlong *param_1,longlong *param_2,char param_3,undefined4 *param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  uint uVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 uVar8;
  longlong local_res8;
  longlong local_res10;
  ulonglong in_stack_ffffffffffffffa0;
  undefined4 uVar9;
  
  lVar4 = *param_2;
  local_res10 = 0;
  local_res8 = 0;
  plVar3 = (longlong *)(lVar4 + 0x5c0);
  uVar8 = 0x10;
  uVar9 = 0x10;
  if (*plVar3 == 0) {
    plVar3 = (longlong *)*param_1;
  }
  lVar1 = *plVar3;
  *(char *)((longlong)param_1 + 0x1a) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  uVar5 = *(uint *)(param_1 + 2) & *(uint *)((longlong)param_1 + 0xc);
  *param_4 = 0;
  if (((uVar5 & 0x20) == 0) || (*(char *)param_2[0x31] != '\0')) {
    iVar2 = 0;
    if (*(char *)((longlong)param_2 + 0x3bf) == '\0') goto LAB_1436dc7d3;
    if ((uVar5 & 0x10) == 0) {
      if ((uVar5 & 8) == 0) {
        if ((uVar5 & 4) == 0) {
          if ((uVar5 & 0x40) == 0) {
            if (((uVar5 >> 8 & 1) == 0) || (param_2[0x33] == 0)) {
              if (((char)uVar5 < '\0') && (param_2[0x33] != 0)) {
                *(undefined4 *)((longlong)param_1 + 0x14) = 0x80;
                pcVar7 = "XOAUTH2";
                uVar6 = 0xd;
                if ((param_3 != '\0') || (uVar9 = uVar8, *(char *)(lVar4 + 0x608) != '\0')) {
                  iVar2 = Curl_auth_create_oauth_bearer_message
                                    (lVar4,param_2[0x30],0,0,param_2[0x33],&local_res8,&local_res10)
                  ;
                  goto LAB_1436dc73f;
                }
              }
              else if ((uVar5 & 1) == 0) {
                iVar2 = 0;
                if ((uVar5 & 2) == 0) goto LAB_1436dc7d3;
                *(undefined4 *)((longlong)param_1 + 0x14) = 2;
                pcVar7 = "PLAIN";
                uVar6 = 1;
                if ((param_3 != '\0') || (*(char *)(lVar4 + 0x608) != '\0')) {
                  iVar2 = FUN_1436dfbf0(lVar4,param_2[0x30],param_2[0x31],&local_res8,&local_res10);
                  goto LAB_1436dc73f;
                }
              }
              else {
                *(undefined4 *)((longlong)param_1 + 0x14) = 1;
                uVar6 = 2;
                pcVar7 = "LOGIN";
                uVar9 = 3;
                if ((param_3 != '\0') || (*(char *)(lVar4 + 0x608) != '\0')) {
                  iVar2 = Curl_auth_create_login_message
                                    (lVar4,param_2[0x30],&local_res8,&local_res10);
                  uVar8 = uVar9;
                  goto LAB_1436dc73f;
                }
              }
            }
            else {
              *(undefined4 *)((longlong)param_1 + 0x14) = 0x100;
              uVar6 = 0xd;
              pcVar7 = "OAUTHBEARER";
              if ((param_3 != '\0') || (uVar9 = 0xe, *(char *)(lVar4 + 0x608) != '\0')) {
                iVar2 = Curl_auth_create_oauth_bearer_message
                                  (lVar4,param_2[0x30],param_2[0x17],(int)param_2[0x21],
                                   param_2[0x33],&local_res8,&local_res10);
                uVar8 = 0xe;
                goto LAB_1436dc73f;
              }
            }
          }
          else {
            *(undefined4 *)((longlong)param_1 + 0x14) = 0x40;
            uVar6 = 8;
            pcVar7 = "NTLM";
            if ((param_3 != '\0') || (uVar9 = 9, *(char *)(lVar4 + 0x608) != '\0')) {
              iVar2 = FUN_1436de590(param_2[0x30],param_2[0x31],param_2 + 0xa0,&local_res8,
                                    &local_res10);
              uVar8 = 9;
LAB_1436dc73f:
              if ((iVar2 != 0) || (pcVar7 == (char *)0x0)) goto LAB_1436dc7d3;
              uVar9 = uVar8;
              if ((local_res8 != 0) && (*(ulonglong *)(*param_1 + 0x10) != 0)) {
                lVar4 = -1;
                do {
                  lVar4 = lVar4 + 1;
                } while (pcVar7[lVar4] != '\0');
                if (*(ulonglong *)(*param_1 + 0x10) < (ulonglong)(lVar4 + local_res10)) {
                  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
                  local_res8 = 0;
                }
              }
            }
          }
        }
        else {
          pcVar7 = "CRAM-MD5";
          *(undefined4 *)((longlong)param_1 + 0x14) = 4;
          uVar6 = 5;
          uVar9 = uVar8;
        }
      }
      else {
        pcVar7 = "DIGEST-MD5";
        *(undefined4 *)((longlong)param_1 + 0x14) = 8;
        uVar6 = 6;
        uVar9 = uVar8;
      }
    }
    else {
      *(undefined1 *)((longlong)param_1 + 0x19) = 0;
      uVar6 = 10;
      *(undefined4 *)((longlong)param_1 + 0x14) = 0x10;
      pcVar7 = "GSSAPI";
      if ((param_3 != '\0') || (uVar9 = 0xb, *(char *)(lVar4 + 0x608) != '\0')) {
        iVar2 = FUN_1436e0450(lVar4,param_2[0x30],param_2[0x31],lVar1,
                              *(undefined8 *)(*(longlong *)(lVar4 + 0x10) + 0xb8),
                              in_stack_ffffffffffffffa0 & 0xffffffffffffff00,0,param_2 + 0x8c,
                              &local_res8,&local_res10);
        uVar8 = 0xb;
        goto LAB_1436dc73f;
      }
    }
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0x20;
    pcVar7 = "EXTERNAL";
    uVar6 = 4;
    if ((param_3 != '\0') || (uVar9 = uVar8, *(char *)(lVar4 + 0x608) != '\0')) {
      iVar2 = Curl_auth_create_external_message(lVar4,param_2[0x30],&local_res8,&local_res10);
      goto LAB_1436dc73f;
    }
  }
  iVar2 = (**(code **)(*param_1 + 0x18))(param_2,pcVar7,local_res8);
  if (iVar2 == 0) {
    *param_4 = 1;
    if (local_res8 != 0) {
      uVar6 = uVar9;
    }
    *(undefined4 *)(param_1 + 1) = uVar6;
  }
LAB_1436dc7d3:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
  return iVar2;
}



// FUNCTION 1436dc800 Curl_gethostname body=72 status=ok
// SIG undefined Curl_gethostname(void)

undefined8 Curl_gethostname(char *param_1,int param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  
  *param_1 = '\0';
  uVar1 = Ordinal_57();
  param_1[param_2 + -1] = '\0';
  if ((int)uVar1 == 0) {
    pcVar2 = strchr(param_1,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436dc850 FUN_1436dc850 body=2830 status=ok
// SIG undefined FUN_1436dc850(void)

ulonglong FUN_1436dc850(char *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  int *piVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  byte *pbVar14;
  int iVar15;
  char *local_res10;
  char *local_res18;
  char *local_res20;
  
  uVar13 = param_2 * param_3;
  piVar3 = (int *)**(undefined8 **)(*param_4 + 0x8a60);
  if (piVar3[3] != 0) {
    return uVar13;
  }
  if (*piVar3 == 0) {
    if (uVar13 == 0) {
      return 0;
    }
    *piVar3 = ((byte)(*param_1 - 0x30U) < 10) + 1;
  }
  uVar12 = 0;
  if (uVar13 != 0) {
    do {
      iVar15 = (int)uVar12;
      bVar2 = param_1[uVar12];
      if (*(longlong *)(piVar3 + 4) == 0) {
        lVar7 = FUN_1436d90b0();
        *(longlong *)(piVar3 + 4) = lVar7;
        if (lVar7 == 0) {
          piVar3[3] = 0x1b;
          return uVar13;
        }
        uVar8 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0xa0);
        *(undefined8 *)(*(longlong *)(piVar3 + 4) + 0x68) = uVar8;
        if (*(longlong *)(*(longlong *)(piVar3 + 4) + 0x68) != 0) {
          *(undefined8 *)(*(longlong *)(piVar3 + 4) + 0x70) = 0xa0;
          piVar3[8] = 0;
          piVar3[9] = 0;
          piVar3[6] = 0;
          goto LAB_1436dc921;
        }
LAB_1436dd341:
        iVar4 = 0x1b;
        goto LAB_1436dcb5f;
      }
LAB_1436dc921:
      lVar7 = *(longlong *)(piVar3 + 4);
      *(byte *)(*(longlong *)(lVar7 + 0x68) + *(longlong *)(lVar7 + 0x78)) = bVar2;
      *(longlong *)(lVar7 + 0x78) = *(longlong *)(lVar7 + 0x78) + 1;
      if (*(longlong *)(lVar7 + 0x70) - 1U <= *(ulonglong *)(lVar7 + 0x78)) {
        lVar9 = (*(code *)PTR_realloc_1467dcc68)
                          (*(undefined8 *)(lVar7 + 0x68),*(longlong *)(lVar7 + 0x70) + 0xa0);
        if (lVar9 == 0) {
          Curl_fileinfo_dtor(0,*(undefined8 *)(piVar3 + 4));
          piVar3[4] = 0;
          piVar3[5] = 0;
          piVar3[3] = 0x1b;
          goto LAB_1436dd341;
        }
        *(longlong *)(lVar7 + 0x70) = *(longlong *)(lVar7 + 0x70) + 0xa0;
        *(longlong *)(lVar7 + 0x68) = lVar9;
      }
      if (*piVar3 == 1) {
        switch(piVar3[1]) {
        case 0:
          if (piVar3[2] == 0) {
            if (bVar2 == 0x74) {
              piVar3[6] = piVar3[6] + 1;
              piVar3[2] = 1;
            }
            else {
              piVar3[1] = 1;
              iVar15 = iVar15 + -1;
              *(undefined8 *)(lVar7 + 0x78) = 0;
            }
          }
          else if (piVar3[2] == 1) {
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0xd) {
              piVar3[6] = piVar3[6] + -1;
              *(longlong *)(lVar7 + 0x78) = *(longlong *)(lVar7 + 0x78) + -1;
            }
            else if (bVar2 == 10) {
              *(undefined1 *)((ulonglong)(piVar3[6] - 1) + *(longlong *)(lVar7 + 0x68)) = 0;
              iVar4 = strncmp("total ",*(char **)(lVar7 + 0x68),6);
              if (iVar4 == 0) {
                pbVar14 = (byte *)(*(longlong *)(lVar7 + 0x68) + 6);
                iVar4 = isspace((uint)*pbVar14);
                while (iVar4 != 0) {
                  pbVar1 = pbVar14 + 1;
                  pbVar14 = pbVar14 + 1;
                  iVar4 = isspace((uint)*pbVar1);
                }
                iVar4 = isdigit((uint)*pbVar14);
                while (iVar4 != 0) {
                  pbVar1 = pbVar14 + 1;
                  pbVar14 = pbVar14 + 1;
                  iVar4 = isdigit((uint)*pbVar1);
                }
                if (*pbVar14 == 0) {
                  piVar3[1] = 1;
                  *(undefined8 *)(lVar7 + 0x78) = 0;
                  break;
                }
              }
              goto switchD_1436dcd06_caseD_2e;
            }
          }
          break;
        case 1:
          switch(bVar2) {
          case 0x2d:
            *(undefined4 *)(lVar7 + 8) = 0;
            break;
          default:
            goto switchD_1436dcd06_caseD_2e;
          case 0x44:
            *(undefined4 *)(lVar7 + 8) = 7;
            break;
          case 0x62:
            *(undefined4 *)(lVar7 + 8) = 3;
            break;
          case 99:
            *(undefined4 *)(lVar7 + 8) = 4;
            break;
          case 100:
            *(undefined4 *)(lVar7 + 8) = 1;
            break;
          case 0x6c:
            *(undefined4 *)(lVar7 + 8) = 2;
            break;
          case 0x70:
            *(undefined4 *)(lVar7 + 8) = 5;
            break;
          case 0x73:
            *(undefined4 *)(lVar7 + 8) = 6;
          }
          piVar3[1] = 2;
          piVar3[6] = 0;
          piVar3[8] = 1;
          piVar3[9] = 0;
          break;
        case 2:
          piVar3[6] = piVar3[6] + 1;
          if ((uint)piVar3[6] < 10) {
            pcVar11 = strchr("rwx-tTsS",(int)(char)bVar2);
            goto joined_r0x0001436dcbbd;
          }
          if (piVar3[6] == 10) {
            if (bVar2 == 0x20) {
              *(undefined1 *)(*(longlong *)(lVar7 + 0x68) + 10) = 0;
              uVar5 = FUN_1436dd4b0(*(longlong *)(lVar7 + 0x68) + *(longlong *)(piVar3 + 8));
              if ((uVar5 >> 0x18 & 1) == 0) {
                *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) =
                     *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) | 8;
                *(uint *)(*(longlong *)(piVar3 + 4) + 0x18) = uVar5;
                *(undefined8 *)(piVar3 + 0x12) = *(undefined8 *)(piVar3 + 8);
                piVar3[6] = 0;
                piVar3[1] = 3;
                piVar3[2] = 0;
                break;
              }
            }
            goto switchD_1436dcd06_caseD_2e;
          }
          break;
        case 3:
          if (piVar3[2] == 0) {
LAB_1436dce7c:
            if (bVar2 != 0x20) {
              if ((byte)(bVar2 - 0x30) < 10) goto LAB_1436dd1bb;
switchD_1436dcd06_caseD_2e:
              iVar4 = 0x57;
LAB_1436dcb5f:
              FUN_1436dd470(param_4,iVar4);
              return uVar13;
            }
          }
          else if (piVar3[2] == 1) {
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x20) {
              *(undefined1 *)
               ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
               *(longlong *)(piVar3 + 8)) = 0;
              lVar6 = strtol((char *)(*(longlong *)(lVar7 + 0x68) + *(longlong *)(piVar3 + 8)),
                             &local_res18,10);
              if ((*local_res18 == '\0') && (lVar6 + 0x7fffffffU < 0xfffffffe)) {
                *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) =
                     *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) | 0x80;
                *(long *)(*(longlong *)(piVar3 + 4) + 0x30) = lVar6;
              }
              piVar3[6] = 0;
              piVar3[8] = 0;
              piVar3[9] = 0;
              piVar3[1] = 4;
              piVar3[2] = 0;
            }
            else if (9 < (byte)(bVar2 - 0x30)) goto switchD_1436dcd06_caseD_2e;
          }
          break;
        case 4:
          if (piVar3[2] == 0) {
switchD_1436dd1af_caseD_0:
            if (bVar2 != 0x20) {
LAB_1436dd1bb:
              lVar7 = *(longlong *)(lVar7 + 0x78);
              piVar3[6] = 1;
              *(longlong *)(piVar3 + 8) = lVar7 + -1;
              piVar3[2] = 1;
            }
          }
          else if ((piVar3[2] == 1) && (piVar3[6] = piVar3[6] + 1, bVar2 == 0x20)) {
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            *(undefined8 *)(piVar3 + 0xc) = *(undefined8 *)(piVar3 + 8);
            piVar3[1] = 5;
            piVar3[2] = 0;
            piVar3[8] = 0;
            piVar3[9] = 0;
            piVar3[6] = 0;
          }
          break;
        case 5:
          if (piVar3[2] == 0) goto switchD_1436dd1af_caseD_0;
          if ((piVar3[2] == 1) && (piVar3[6] = piVar3[6] + 1, bVar2 == 0x20)) {
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            *(undefined8 *)(piVar3 + 0xe) = *(undefined8 *)(piVar3 + 8);
            piVar3[1] = 6;
            piVar3[2] = 0;
            piVar3[8] = 0;
            piVar3[9] = 0;
            piVar3[6] = 0;
          }
          break;
        case 6:
          if (piVar3[2] == 0) goto LAB_1436dce7c;
          if (piVar3[2] == 1) {
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x20) {
              *(undefined1 *)
               ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
               *(longlong *)(piVar3 + 8)) = 0;
              lVar7 = strtoll(*(longlong *)(lVar7 + 0x68) + *(longlong *)(piVar3 + 8),&local_res20,
                              10);
              if ((*local_res20 == '\0') && (lVar7 + 0x7fffffffffffffffU < 0xfffffffffffffffe)) {
                *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) =
                     *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) | 0x40;
                *(longlong *)(*(longlong *)(piVar3 + 4) + 0x28) = lVar7;
              }
              piVar3[6] = 0;
              piVar3[8] = 0;
              piVar3[9] = 0;
              piVar3[1] = 7;
              piVar3[2] = 0;
            }
            else {
              iVar4 = isdigit((uint)bVar2);
              if (iVar4 == 0) goto switchD_1436dcd06_caseD_2e;
            }
          }
          break;
        case 7:
          switch(piVar3[2]) {
          case 0:
            if (bVar2 != 0x20) {
              iVar4 = isalnum((uint)bVar2);
              if (iVar4 == 0) goto switchD_1436dcd06_caseD_2e;
              goto LAB_1436dd1bb;
            }
            break;
          case 1:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x20) {
              piVar3[2] = 2;
            }
            else {
LAB_1436dd023:
              iVar4 = isalnum((uint)bVar2);
              if ((iVar4 == 0) && (bVar2 != 0x2e)) goto switchD_1436dcd06_caseD_2e;
            }
            break;
          case 2:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 != 0x20) {
              iVar4 = isalnum((uint)bVar2);
              if (iVar4 == 0) goto switchD_1436dcd06_caseD_2e;
              piVar3[2] = 3;
            }
            break;
          case 3:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 != 0x20) goto LAB_1436dd023;
            piVar3[2] = 4;
            break;
          case 4:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 != 0x20) {
              iVar4 = isalnum((uint)bVar2);
              if (iVar4 == 0) goto switchD_1436dcd06_caseD_2e;
              piVar3[2] = 5;
            }
            break;
          case 5:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x20) {
              *(undefined1 *)
               ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
               *(longlong *)(piVar3 + 8)) = 0;
              *(undefined8 *)(piVar3 + 0x10) = *(undefined8 *)(piVar3 + 8);
              if (*(int *)(lVar7 + 8) == 2) {
                piVar3[1] = 9;
                piVar3[2] = 0;
              }
              else {
                piVar3[1] = 8;
                piVar3[2] = 0;
              }
            }
            else {
              iVar4 = isalnum((uint)bVar2);
              if (((iVar4 == 0) && (bVar2 != 0x2e)) && (bVar2 != 0x3a))
              goto switchD_1436dcd06_caseD_2e;
            }
          }
          break;
        case 8:
          iVar4 = piVar3[2];
          if (iVar4 == 0) goto switchD_1436dd1af_caseD_0;
          if (iVar4 == 1) {
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0xd) {
              piVar3[2] = 2;
            }
            else if (bVar2 == 10) goto LAB_1436dd13e;
          }
          else if (iVar4 == 2) {
            if (bVar2 != 10) goto switchD_1436dcd06_caseD_2e;
LAB_1436dd13e:
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 8);
            piVar3[1] = 1;
            iVar4 = FUN_1436dd5d0(param_4,lVar7);
            if (iVar4 != 0) goto LAB_1436dcb5f;
          }
          break;
        case 9:
          switch(piVar3[2]) {
          case 0:
            goto switchD_1436dd1af_caseD_0;
          case 1:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x20) {
              piVar3[2] = 2;
            }
            else if ((bVar2 == 0xd) || (bVar2 == 10)) goto switchD_1436dcd06_caseD_2e;
            break;
          case 2:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0x2d) {
              piVar3[2] = 3;
            }
            else {
LAB_1436dd21c:
              if ((bVar2 == 0xd) || (bVar2 == 10)) goto switchD_1436dcd06_caseD_2e;
              piVar3[2] = 1;
            }
            break;
          case 3:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 != 0x3e) goto LAB_1436dd21c;
            piVar3[2] = 4;
            break;
          case 4:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 != 0x20) goto LAB_1436dd21c;
            piVar3[2] = 5;
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -4 +
             *(longlong *)(piVar3 + 8)) = 0;
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 8);
            piVar3[6] = 0;
            piVar3[8] = 0;
            piVar3[9] = 0;
            break;
          case 5:
            if ((bVar2 == 0xd) || (bVar2 == 10)) goto switchD_1436dcd06_caseD_2e;
            piVar3[2] = 6;
            lVar7 = *(longlong *)(lVar7 + 0x78);
            piVar3[6] = 1;
            *(longlong *)(piVar3 + 8) = lVar7 + -1;
            break;
          case 6:
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0xd) {
              piVar3[2] = 7;
            }
            else if (bVar2 == 10) goto LAB_1436dd2d9;
            break;
          case 7:
            if (bVar2 != 10) goto switchD_1436dcd06_caseD_2e;
LAB_1436dd2d9:
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            *(undefined8 *)(piVar3 + 0x14) = *(undefined8 *)(piVar3 + 8);
            iVar4 = FUN_1436dd5d0(param_4,lVar7);
            if (iVar4 != 0) goto LAB_1436dcb5f;
            piVar3[1] = 1;
          }
        }
      }
      else {
        if (*piVar3 != 2) {
          return uVar13 + 1;
        }
        iVar4 = piVar3[1];
        if (iVar4 == 0) {
          piVar3[6] = piVar3[6] + 1;
          if ((uint)piVar3[6] < 9) {
            pcVar11 = strchr("0123456789-",(int)(char)bVar2);
joined_r0x0001436dcbbd:
            if (pcVar11 == (char *)0x0) goto switchD_1436dcd06_caseD_2e;
          }
          else {
            if ((piVar3[6] != 9) || (bVar2 != 0x20)) goto switchD_1436dcd06_caseD_2e;
            piVar3[1] = 1;
            piVar3[2] = 0;
          }
        }
        else if (iVar4 == 1) {
          piVar3[6] = piVar3[6] + 1;
          if (piVar3[2] == 0) {
            iVar4 = isspace((uint)bVar2);
            if (iVar4 == 0) {
              piVar3[2] = 1;
            }
          }
          else if (piVar3[2] == 1) {
            if (bVar2 != 0x20) {
              pcVar11 = strchr("APM0123456789:",(int)(char)bVar2);
              goto joined_r0x0001436dcbbd;
            }
            *(longlong *)(piVar3 + 0x10) = *(longlong *)(piVar3 + 8);
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            piVar3[1] = 2;
            piVar3[2] = 0;
            piVar3[6] = 0;
          }
        }
        else if (iVar4 == 2) {
          if (piVar3[2] == 0) goto switchD_1436dd1af_caseD_0;
          if ((piVar3[2] == 1) && (piVar3[6] = piVar3[6] + 1, bVar2 == 0x20)) {
            *(undefined1 *)
             ((ulonglong)(uint)piVar3[6] + *(longlong *)(lVar7 + 0x68) + -1 +
             *(longlong *)(piVar3 + 8)) = 0;
            lVar9 = *(longlong *)(lVar7 + 0x68) + *(longlong *)(piVar3 + 8);
            uVar12 = 0;
            do {
              pcVar11 = &DAT_145b726c8 + uVar12;
              uVar12 = uVar12 + 1;
              if (*pcVar11 != *(char *)(lVar9 + -1 + uVar12)) {
                lVar9 = strtoll(lVar9,&local_res10,10);
                *(longlong *)(lVar7 + 0x28) = lVar9;
                if ((*local_res10 != '\0') ||
                   (((lVar9 + 0x8000000000000001U & 0xfffffffffffffffe) == 0 &&
                    (piVar10 = _errno(), *piVar10 == 0x22)))) goto switchD_1436dcd06_caseD_2e;
                *(undefined4 *)(*(longlong *)(piVar3 + 4) + 8) = 0;
                goto LAB_1436dcae6;
              }
            } while (uVar12 != 6);
            *(undefined4 *)(lVar7 + 8) = 1;
            *(undefined8 *)(lVar7 + 0x28) = 0;
LAB_1436dcae6:
            *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) =
                 *(uint *)(*(longlong *)(piVar3 + 4) + 0x60) | 0x40;
            piVar3[6] = 0;
            piVar3[1] = 3;
            piVar3[2] = 0;
          }
        }
        else if (iVar4 == 3) {
          iVar4 = piVar3[2];
          if (iVar4 == 0) goto switchD_1436dd1af_caseD_0;
          if (iVar4 == 1) {
            piVar3[6] = piVar3[6] + 1;
            if (bVar2 == 0xd) {
              piVar3[2] = 2;
              *(undefined1 *)(*(longlong *)(lVar7 + 0x68) + -1 + *(longlong *)(lVar7 + 0x78)) = 0;
            }
            else if (bVar2 == 10) {
              *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 8);
              *(undefined1 *)(*(longlong *)(lVar7 + 0x68) + -1 + *(longlong *)(lVar7 + 0x78)) = 0;
              goto LAB_1436dc9c9;
            }
          }
          else if (iVar4 == 2) {
            if (bVar2 != 10) {
              iVar4 = 0x57;
              goto LAB_1436dcb5f;
            }
LAB_1436dc9c9:
            *(undefined8 *)(piVar3 + 10) = *(undefined8 *)(piVar3 + 8);
            iVar4 = FUN_1436dd5d0(param_4,lVar7);
            if (iVar4 != 0) goto LAB_1436dcb5f;
            piVar3[1] = 0;
            piVar3[2] = 0;
          }
        }
      }
      uVar12 = (ulonglong)(iVar15 + 1);
    } while (uVar12 < uVar13);
  }
  return uVar13;
}



// FUNCTION 1436dd430 Curl_ftp_parselist_data_alloc body=15 status=ok
// SIG undefined Curl_ftp_parselist_data_alloc(void)

void Curl_ftp_parselist_data_alloc(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001436dd438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_1467dcc78)(1);
  return;
}



// FUNCTION 1436dd440 Curl_ftp_parselist_data_free body=31 status=ok
// SIG undefined Curl_ftp_parselist_data_free(void)

void Curl_ftp_parselist_data_free(undefined8 *param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  return;
}



// FUNCTION 1436dd460 GetNumWantingResourcesID body=4 status=ok
// SIG undefined GetNumWantingResourcesID(void)

undefined4 IStreamingManager::GetNumWantingResourcesID(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}



// FUNCTION 1436dd470 FUN_1436dd470 body=63 status=ok
// SIG undefined FUN_1436dd470(void)

void FUN_1436dd470(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  
  lVar1 = **(longlong **)(*param_1 + 0x8a60);
  if (*(longlong *)(lVar1 + 0x10) != 0) {
    Curl_fileinfo_dtor(0);
  }
  *(undefined4 *)(lVar1 + 0xc) = param_2;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  return;
}



// FUNCTION 1436dd4b0 FUN_1436dd4b0 body=274 status=ok
// SIG undefined FUN_1436dd4b0(void)

uint FUN_1436dd4b0(char *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*param_1 == 'r') {
    uVar2 = 0x100;
  }
  else if (*param_1 != '-') {
    uVar2 = 0x1000000;
  }
  if (param_1[1] == 'w') {
    uVar2 = uVar2 | 0x80;
  }
  else if (param_1[1] != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  cVar1 = param_1[2];
  if (cVar1 == 'x') {
    uVar2 = uVar2 | 0x40;
  }
  else if (cVar1 == 's') {
    uVar2 = uVar2 | 0x840;
  }
  else if (cVar1 == 'S') {
    uVar2 = uVar2 | 0x800;
  }
  else if (cVar1 != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  if (param_1[3] == 'r') {
    uVar2 = uVar2 | 0x20;
  }
  else if (param_1[3] != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  if (param_1[4] == 'w') {
    uVar2 = uVar2 | 0x10;
  }
  else if (param_1[4] != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  cVar1 = param_1[5];
  if (cVar1 == 'x') {
    uVar2 = uVar2 | 8;
  }
  else if (cVar1 == 's') {
    uVar2 = uVar2 | 0x408;
  }
  else if (cVar1 == 'S') {
    uVar2 = uVar2 | 0x400;
  }
  else if (cVar1 != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  if (param_1[6] == 'r') {
    uVar2 = uVar2 | 4;
  }
  else if (param_1[6] != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  if (param_1[7] == 'w') {
    uVar2 = uVar2 | 2;
  }
  else if (param_1[7] != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  cVar1 = param_1[8];
  if (cVar1 == 'x') {
    return uVar2 | 1;
  }
  if (cVar1 == 't') {
    return uVar2 | 0x201;
  }
  if (cVar1 == 'T') {
    return uVar2 | 0x200;
  }
  if (cVar1 != '-') {
    uVar2 = uVar2 | 0x1000000;
  }
  return uVar2;
}



// FUNCTION 1436dd5d0 FUN_1436dd5d0 body=317 status=ok
// SIG undefined FUN_1436dd5d0(void)

undefined8 FUN_1436dd5d0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  code *pcVar7;
  char *pcVar8;
  longlong lVar9;
  
  lVar1 = *param_1;
  lVar9 = param_2[0xd];
  plVar2 = *(longlong **)(lVar1 + 0x8a60);
  lVar3 = *(longlong *)(lVar1 + 0x8a58);
  lVar4 = *plVar2;
  *param_2 = *(longlong *)(lVar4 + 0x28) + lVar9;
  lVar6 = *(longlong *)(lVar4 + 0x38);
  if (lVar6 != 0) {
    lVar6 = lVar6 + lVar9;
  }
  param_2[10] = lVar6;
  lVar6 = *(longlong *)(lVar4 + 0x48);
  if (lVar6 != 0) {
    lVar6 = lVar6 + lVar9;
  }
  param_2[8] = lVar6;
  if (*(longlong *)(lVar4 + 0x50) == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(longlong *)(lVar4 + 0x50) + lVar9;
  }
  param_2[0xb] = lVar6;
  param_2[7] = *(longlong *)(lVar4 + 0x40) + lVar9;
  if (*(longlong *)(lVar4 + 0x30) == 0) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(longlong *)(lVar4 + 0x30) + lVar9;
  }
  param_2[9] = lVar9;
  pcVar7 = *(code **)(*param_1 + 0x628);
  if (pcVar7 == (code *)0x0) {
    pcVar7 = FUN_1436e0870;
  }
  iVar5 = (*pcVar7)(*(undefined8 *)(*param_1 + 0x630),*(undefined8 *)(lVar1 + 0x8a50));
  if (iVar5 == 0) {
    if (((int)param_2[1] == 2) && ((char *)param_2[0xb] != (char *)0x0)) {
      pcVar8 = strstr((char *)param_2[0xb]," -> ");
      if (pcVar8 != (char *)0x0) goto LAB_1436dd6e6;
    }
    iVar5 = FUN_1436b9de0(lVar3,*(undefined8 *)(lVar3 + 8),param_2);
    if (iVar5 == 0) {
      Curl_fileinfo_dtor(0,param_2);
      *(undefined8 *)(*plVar2 + 0x10) = 0;
      return 0x1b;
    }
  }
  else {
LAB_1436dd6e6:
    Curl_fileinfo_dtor(0,param_2);
  }
  *(undefined8 *)(*plVar2 + 0x10) = 0;
  return 0;
}



// FUNCTION 1436dd710 FUN_1436dd710 body=85 status=ok
// SIG undefined FUN_1436dd710(void)

void FUN_1436dd710(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_1436dd970(param_2,param_3,param_1);
  FUN_1436dd970(param_2,param_3 + 8,param_1 + 7);
  FUN_1436dd970(param_2,param_3 + 0x10,param_1 + 0xe);
  return;
}



// FUNCTION 1436dd770 FUN_1436dd770 body=193 status=ok
// SIG undefined FUN_1436dd770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436dd770(undefined8 param_1,longlong param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined1 local_28 [7];
  undefined1 local_21 [9];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar2 = -1;
  uVar1 = 0xffffffffffffffff;
  do {
    uVar1 = uVar1 + 1;
  } while (*(char *)(param_2 + uVar1) != '\0');
  if (uVar1 < 0xe) {
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_2 + lVar2) != '\0');
  }
  else {
    lVar2 = 0xe;
  }
  Curl_strntoupper(local_28,param_2,lVar2);
  _guard_xfg_dispatch_icall_nop(local_28 + lVar2,0,0xe - lVar2);
  FUN_1436dd970("KGS!@#$%DIGEST-MD5 handshake failure (empty challenge message)\n",param_3,local_28)
  ;
  FUN_1436dd970("KGS!@#$%DIGEST-MD5 handshake failure (empty challenge message)\n",param_3 + 8,
                local_21);
  *(undefined4 *)(param_3 + 0x10) = 0;
  *(undefined1 *)(param_3 + 0x14) = 0;
  return;
}



// FUNCTION 1436dd840 FUN_1436dd840 body=295 status=ok
// SIG undefined FUN_1436dd840(void)

undefined4 FUN_1436dd840(undefined8 param_1,longlong param_2,BYTE *param_3)

{
  undefined4 uVar1;
  BOOL BVar2;
  BYTE *pbData;
  ulonglong uVar3;
  ulonglong uVar4;
  DWORD local_res20 [2];
  HCRYPTHASH local_18;
  HCRYPTPROV local_10;
  
  uVar4 = 0xffffffffffffffff;
  do {
    uVar4 = uVar4 + 1;
  } while (*(char *)(param_2 + uVar4) != '\0');
  pbData = (BYTE *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  if (pbData == (BYTE *)0x0) {
    uVar1 = 0x1b;
  }
  else {
    uVar3 = 0;
    if (uVar4 != 0) {
      do {
        pbData[uVar3 * 2] = *(BYTE *)(uVar3 + param_2);
        pbData[uVar3 * 2 + 1] = '\0';
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    BVar2 = CryptAcquireContextA(&local_10,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000000);
    if (BVar2 != 0) {
      BVar2 = CryptCreateHash(local_10,0x8002,0,0,&local_18);
      if (BVar2 != 0) {
        local_res20[0] = 0x10;
        CryptHashData(local_18,pbData,(int)uVar4 * 2,0);
        CryptGetHashParam(local_18,2,param_3,local_res20,0);
        CryptDestroyHash(local_18);
      }
      CryptReleaseContext(local_10,0);
    }
    param_3[0x10] = '\0';
    param_3[0x11] = '\0';
    param_3[0x12] = '\0';
    param_3[0x13] = '\0';
    param_3[0x14] = '\0';
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbData);
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436dd970 FUN_1436dd970 body=426 status=ok
// SIG undefined FUN_1436dd970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436dd970(undefined8 *param_1,BYTE *param_2,char *param_3)

{
  BOOL BVar1;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar2;
  undefined4 extraout_var_01;
  undefined1 auStackY_88 [32];
  DWORD local_48 [2];
  HCRYPTPROV local_40;
  HCRYPTKEY local_38;
  BYTE local_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  byte local_20;
  byte bStack_1f;
  byte bStack_1e;
  char cStack_1d;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStackY_88;
  local_48[0] = 8;
  BVar1 = CryptAcquireContextA(&local_40,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000000);
  uVar2 = CONCAT44(extraout_var,BVar1);
  if (BVar1 != 0) {
    _local_20 = CONCAT13(param_3[6] * '\x02',
                         CONCAT12((byte)param_3[6] >> 6 | param_3[5] << 2,
                                  CONCAT11((byte)param_3[5] >> 5 | param_3[4] << 3,
                                           (byte)param_3[4] >> 4 | param_3[3] << 4)));
    local_30[0] = '\b';
    local_30[1] = '\x02';
    local_30[2] = '\0';
    local_30[3] = '\0';
    local_30[4] = '\x01';
    local_30[5] = 'f';
    local_30[6] = '\0';
    local_30[7] = '\0';
    _local_28 = CONCAT44(CONCAT13((byte)param_3[3] >> 3 | param_3[2] << 5,
                                  CONCAT12((byte)param_3[2] >> 2 | param_3[1] << 6,
                                           CONCAT11((byte)param_3[1] >> 1 | *param_3 << 7,*param_3))
                                 ),8);
    FUN_1436e11d0(&uStack_24,8);
    BVar1 = CryptImportKey(local_40,local_30,0x14,0,0,&local_38);
    if (BVar1 != 0) {
      *(undefined8 *)param_2 = *param_1;
      CryptEncrypt(local_38,0,0,0,param_2,local_48,local_48[0]);
      CryptDestroyKey(local_38);
      BVar1 = CryptReleaseContext(local_40,0);
      return CONCAT71((int7)(CONCAT44(extraout_var_01,BVar1) >> 8),1);
    }
    BVar1 = CryptReleaseContext(local_40,0);
    uVar2 = CONCAT44(extraout_var_00,BVar1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1436ddb20 Curl_read16_be body=15 status=ok
// SIG undefined Curl_read16_be(void)

undefined2 Curl_read16_be(undefined1 *param_1)

{
  return CONCAT11(*param_1,param_1[1]);
}



// FUNCTION 1436ddb30 Curl_read16_le body=15 status=ok
// SIG undefined Curl_read16_le(void)

undefined2 Curl_read16_le(undefined2 *param_1)

{
  return *param_1;
}



// FUNCTION 1436ddb40 Curl_convert_UTF8_to_wchar body=161 status=ok
// SIG undefined Curl_convert_UTF8_to_wchar(void)

LPWSTR Curl_convert_UTF8_to_wchar(LPCSTR param_1)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  
  lpWideCharStr = (LPWSTR)0x0;
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = MultiByteToWideChar(0xfde9,8,param_1,-1,(LPWSTR)0x0,0);
    if (0 < iVar1) {
      lpWideCharStr =
           (LPWSTR)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((longlong)iVar1 * 2);
      if (lpWideCharStr != (LPWSTR)0x0) {
        iVar1 = MultiByteToWideChar(0xfde9,0,param_1,-1,lpWideCharStr,iVar1);
        if (iVar1 == 0) {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lpWideCharStr);
          return (LPWSTR)0x0;
        }
      }
    }
  }
  return lpWideCharStr;
}



// FUNCTION 1436ddbf0 Curl_convert_wchar_to_UTF8 body=174 status=ok
// SIG undefined Curl_convert_wchar_to_UTF8(void)

LPSTR Curl_convert_wchar_to_UTF8(LPCWSTR param_1)

{
  int iVar1;
  LPSTR lpMultiByteStr;
  
  lpMultiByteStr = (LPSTR)0x0;
  if (param_1 != (LPCWSTR)0x0) {
    iVar1 = WideCharToMultiByte(0xfde9,0,param_1,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
    lpMultiByteStr = (LPSTR)0x0;
    if (((0 < iVar1) &&
        (lpMultiByteStr =
              (LPSTR)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((longlong)iVar1 * 2),
        lpMultiByteStr != (LPSTR)0x0)) &&
       (iVar1 = WideCharToMultiByte(0xfde9,0,param_1,-1,lpMultiByteStr,iVar1,(LPCSTR)0x0,(LPBOOL)0x0
                                   ), iVar1 == 0)) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lpMultiByteStr);
      lpMultiByteStr = (LPSTR)0x0;
    }
  }
  return lpMultiByteStr;
}



// FUNCTION 1436ddca0 FUN_1436ddca0 body=818 status=ok
// SIG undefined FUN_1436ddca0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_1436ddca0(undefined8 param_1,char *param_2,undefined8 param_3,longlong param_4,longlong param_5,
             undefined8 *param_6,undefined8 *param_7,ulonglong *param_8)

{
  undefined4 uVar1;
  int iVar2;
  void *pvVar3;
  void *_Dst;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_150;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  uint local_118 [2];
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  uint *local_100;
  undefined1 local_f8 [8];
  longlong local_f0;
  undefined1 local_e8 [8];
  ulonglong *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined1 local_c8 [48];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_e0 = param_8;
  iVar2 = (**(code **)(DAT_146b7b8e0 + 0x88))("WDigest",&local_f0);
  if (iVar2 != 0) {
    return 4;
  }
  uVar1 = *(undefined4 *)(local_f0 + 8);
  (**(code **)(DAT_146b7b8e0 + 0x80))();
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    iVar2 = FUN_1436ab770(param_2,param_3,local_c8);
    if (iVar2 != 0) {
      return 0x1b;
    }
    iVar2 = FUN_1436de440(*param_6,local_c8);
    if (iVar2 != 0) {
      return 0x1b;
    }
    puVar5 = local_c8;
  }
  local_138 = local_e8;
  local_140 = local_98;
  local_148 = (undefined4 *)0x0;
  local_150 = 0;
  local_158 = puVar5;
  iVar2 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,"WDigest",2);
  if (iVar2 != 0) {
    FUN_1436ab8c0(puVar5);
    return 0x43;
  }
  pvVar3 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar1);
  if (pvVar3 == (void *)0x0) {
    (**(code **)(DAT_146b7b8e0 + 0x20))(local_98);
    FUN_1436ab8c0(puVar5);
    return 0x1b;
  }
  local_70 = *param_6;
  local_d8 = 0;
  local_d4 = 3;
  local_74 = 2;
  local_d0 = &local_78;
  local_78 = FUN_1436a85f0();
  lVar4 = -1;
  local_64 = 3;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_4 + lVar4) != '\0');
  local_60 = param_4;
  local_68 = FUN_1436a85f0();
  local_100 = local_118;
  local_54 = 3;
  local_50 = 0;
  local_58 = 0;
  local_108 = 0;
  local_104 = 1;
  local_118[1] = 2;
  local_110 = pvVar3;
  local_118[0] = FUN_1436a85f0(uVar1);
  if (param_5 != 0) {
    local_120 = local_e8;
    local_128 = local_f8;
    local_130 = &local_108;
    local_138 = local_88;
    local_148 = &local_d8;
    local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
    local_150 = local_150 & 0xffffffff00000000;
    local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x30))(local_98,0,param_5,0x1000000);
    if (iVar2 - 0x90313U < 2) {
      (**(code **)(DAT_146b7b8e0 + 0x40))(local_98,&local_108);
    }
    else if ((iVar2 != 0) && (iVar2 != 0x90312)) goto LAB_1436ddf32;
    _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_118[0] + 1);
    if (_Dst != (void *)0x0) {
      _guard_xfg_dispatch_icall_nop(_Dst,local_110,(ulonglong)local_118[0]);
      *(undefined1 *)((ulonglong)local_118[0] + (longlong)_Dst) = 0;
      *param_7 = _Dst;
      *local_e0 = (ulonglong)local_118[0];
      (**(code **)(DAT_146b7b8e0 + 0x48))(local_88);
      (**(code **)(DAT_146b7b8e0 + 0x20))(local_98);
      FUN_1436ab8c0(puVar5);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar3);
      return 0;
    }
    (**(code **)(DAT_146b7b8e0 + 0x48))(local_88);
  }
LAB_1436ddf32:
  (**(code **)(DAT_146b7b8e0 + 0x20))(local_98);
  FUN_1436ab8c0(puVar5);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar3);
  return 0x1b;
}



// FUNCTION 1436ddfe0 FUN_1436ddfe0 body=949 status=ok
// SIG undefined FUN_1436ddfe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436ddfe0(longlong param_1,char *param_2,char *param_3,undefined8 param_4,
                       undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 *puVar7;
  undefined1 auStack_178 [32];
  undefined1 *local_158;
  ulonglong local_150;
  undefined4 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined4 *local_130;
  undefined1 *local_128;
  undefined1 *local_120;
  longlong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong local_f0;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined1 local_d8 [8];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  longlong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 *local_a8;
  undefined1 local_a0 [48];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  local_c8 = param_6;
  local_d0 = param_7;
  local_110 = 0;
  local_118 = 0;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (param_2[lVar4] != '\0');
  if ((lVar4 == 0) || (*param_2 == '=')) {
LAB_1436de37c:
    FUN_1436b58e0(param_1,"DIGEST-MD5 handshake failure (empty challenge message)\n");
    return 0x3d;
  }
  uVar5 = Curl_base64_decode(param_2,&local_118,&local_110);
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if (local_118 == 0) goto LAB_1436de37c;
  iVar2 = (**(code **)(DAT_146b7b8e0 + 0x88))("WDigest",&local_e0);
  if (iVar2 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
    return 4;
  }
  uVar1 = *(undefined4 *)(local_e0 + 8);
  (**(code **)(DAT_146b7b8e0 + 0x80))();
  lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar1);
  if (lVar4 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
    return 0x1b;
  }
  lVar6 = Curl_sasl_build_spn(param_5,*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xb8),0);
  if (lVar6 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
    return 0x1b;
  }
  if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
    puVar7 = (undefined1 *)0x0;
  }
  else {
    uVar3 = FUN_1436ab770(param_3,param_4,local_a0);
    if (uVar3 != 0) goto LAB_1436de358;
    puVar7 = local_a0;
  }
  local_138 = local_d8;
  local_140 = local_70;
  local_148 = (undefined4 *)0x0;
  local_150 = 0;
  local_158 = puVar7;
  iVar2 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,"WDigest",2);
  if (iVar2 != 0) {
    FUN_1436ab8c0(puVar7);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
    return 0x43;
  }
  local_a8 = &local_c0;
  local_b8 = local_118;
  local_b0 = 0;
  local_ac = 1;
  local_bc = 2;
  local_c0 = FUN_1436a85f0(local_110);
  local_100 = &local_f8;
  local_108 = 0;
  local_104 = 1;
  local_f4 = 2;
  local_f0 = lVar4;
  local_f8 = FUN_1436a85f0(uVar1);
  local_120 = local_d8;
  local_128 = local_e8;
  local_130 = &local_108;
  local_138 = local_60;
  local_148 = &local_b0;
  local_140 = (undefined1 *)((ulonglong)local_140 & 0xffffffff00000000);
  local_150 = local_150 & 0xffffffff00000000;
  local_158 = (undefined1 *)((ulonglong)local_158 & 0xffffffff00000000);
  iVar2 = (**(code **)(DAT_146b7b8e0 + 0x30))(local_70,0,lVar6,0);
  if (iVar2 - 0x90313U < 2) {
    (**(code **)(DAT_146b7b8e0 + 0x40))(local_70,&local_108);
  }
  else if ((iVar2 != 0) && (iVar2 != 0x90312)) {
    (**(code **)(DAT_146b7b8e0 + 0x20))(local_70);
    FUN_1436ab8c0(puVar7);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
    return 0x38;
  }
  local_158 = (undefined1 *)local_d0;
  uVar3 = Curl_base64_encode(param_1,lVar4,local_f8,local_c8);
  (**(code **)(DAT_146b7b8e0 + 0x48))(local_60);
  (**(code **)(DAT_146b7b8e0 + 0x20))(local_70);
  FUN_1436ab8c0(puVar7);
LAB_1436de358:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_118);
  return (ulonglong)uVar3;
}



// FUNCTION 1436de3a0 FUN_1436de3a0 body=97 status=ok
// SIG undefined FUN_1436de3a0(void)

undefined8 FUN_1436de3a0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_1 + lVar2) != '\0');
  if (*param_2 != 0) {
    return 0x3d;
  }
  lVar1 = Curl_memdup(param_1,lVar2);
  *param_2 = lVar1;
  if (lVar1 == 0) {
    return 0x1b;
  }
  param_2[1] = lVar2;
  return 0;
}



// FUNCTION 1436de410 FUN_1436de410 body=33 status=ok
// SIG undefined FUN_1436de410(void)

void FUN_1436de410(undefined8 *param_1)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 1436de440 FUN_1436de440 body=321 status=ok
// SIG undefined FUN_1436de440(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436de440(byte *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_548 [32];
  byte *local_528 [2];
  undefined1 local_518 [256];
  undefined1 local_418 [1024];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  local_528[0] = param_1;
  if ((*(longlong *)(param_2 + 0x10) == 0) || (*(int *)(param_2 + 0x18) == 0)) {
    while( true ) {
      bVar1 = *local_528[0];
      while ((bVar1 != 0 && (iVar3 = isspace((uint)bVar1), iVar3 != 0))) {
        local_528[0] = local_528[0] + 1;
        bVar1 = *local_528[0];
      }
      cVar2 = Curl_auth_digest_get_pair(local_528[0],local_518,local_418,local_528);
      if (cVar2 == '\0') break;
      iVar3 = Curl_strcasecompare(local_518,"realm");
      if (iVar3 != 0) {
        lVar5 = (*(code *)PTR__strdup_1467dcc70)(local_418);
        if (lVar5 == 0) {
          return 0x1b;
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
        lVar6 = -1;
        *(longlong *)(param_2 + 0x10) = lVar5;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(lVar5 + lVar6) != '\0');
        uVar4 = FUN_1436a85f0();
        *(undefined4 *)(param_2 + 0x18) = uVar4;
      }
      bVar1 = *local_528[0];
      while ((bVar1 != 0 && (iVar3 = isspace((uint)bVar1), iVar3 != 0))) {
        local_528[0] = local_528[0] + 1;
        bVar1 = *local_528[0];
      }
      if (*local_528[0] == 0x2c) {
        local_528[0] = local_528[0] + 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1436de590 FUN_1436de590 body=610 status=ok
// SIG undefined FUN_1436de590(void)

undefined8
FUN_1436de590(char *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 local_58 [8];
  longlong local_50;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined8 local_28;
  
  FUN_1436de9e0(param_3);
  iVar1 = (**(code **)(DAT_146b7b8e0 + 0x88))(&DAT_145b6b11c,&local_50);
  if (iVar1 == 0) {
    *(ulonglong *)(param_3 + 0x50) = (ulonglong)*(uint *)(local_50 + 8);
    (**(code **)(DAT_146b7b8e0 + 0x80))();
    lVar3 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(*(undefined8 *)(param_3 + 0x50));
    *(longlong *)(param_3 + 0x58) = lVar3;
    if (lVar3 == 0) {
      uVar2 = 0x1b;
    }
    else {
      if ((param_1 == (char *)0x0) || (*param_1 == '\0')) {
        *(undefined8 *)(param_3 + 0x48) = 0;
      }
      else {
        uVar2 = FUN_1436ab770(param_1,param_2,param_3 + 0x18);
        if ((int)uVar2 != 0) {
          return uVar2;
        }
        *(longlong *)(param_3 + 0x48) = param_3 + 0x18;
      }
      puVar4 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
      *(undefined8 **)(param_3 + 8) = puVar4;
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar7 = *(ulonglong *)(param_3 + 8);
        uVar5 = *(ulonglong *)(param_3 + 0x48);
        uVar6 = 0;
        iVar1 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,&DAT_145b6b11c,2,0,uVar5,0,0,uVar7,local_48);
        if (iVar1 != 0) {
          return 0x43;
        }
        puVar4 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
        *(undefined8 **)(param_3 + 0x10) = puVar4;
        if (puVar4 != (undefined8 *)0x0) {
          *puVar4 = 0;
          puVar4[1] = 0;
          local_38 = &local_30;
          local_28 = *(undefined8 *)(param_3 + 0x58);
          local_40 = 0;
          local_3c = 1;
          local_2c = 2;
          local_30 = FUN_1436a85f0(*(undefined8 *)(param_3 + 0x50));
          iVar1 = (**(code **)(DAT_146b7b8e0 + 0x30))
                            (*(undefined8 *)(param_3 + 8),0,&DAT_145af3922,0,
                             uVar5 & 0xffffffff00000000,uVar6 & 0xffffffff00000000,0,
                             uVar7 & 0xffffffff00000000,*(undefined8 *)(param_3 + 0x10),&local_40,
                             local_58,local_48);
          if (iVar1 - 0x90313U < 2) {
            (**(code **)(DAT_146b7b8e0 + 0x40))(*(undefined8 *)(param_3 + 0x10),&local_40);
          }
          else if ((iVar1 != 0) && (iVar1 != 0x90312)) {
            return 0x38;
          }
          uVar2 = Curl_base64_encode(0,*(undefined8 *)(param_3 + 0x58),local_30,param_4,param_5);
          return uVar2;
        }
      }
      uVar2 = 0x1b;
    }
  }
  else {
    uVar2 = 4;
  }
  return uVar2;
}



// FUNCTION 1436de800 FUN_1436de800 body=326 status=ok
// SIG undefined FUN_1436de800(void)

undefined4
FUN_1436de800(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_res20 [8];
  undefined8 in_stack_ffffffffffffff68;
  uint uVar3;
  undefined1 local_58 [8];
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 *local_18;
  
  uVar3 = (uint)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_18 = &local_40;
  local_3c = 2;
  local_38 = *(undefined8 *)(param_4 + 0x60);
  local_20 = 0;
  local_1c = 1;
  local_40 = FUN_1436a85f0(*(undefined8 *)(param_4 + 0x68));
  local_28 = &local_50;
  local_48 = *(undefined8 *)(param_4 + 0x58);
  local_30 = 0;
  local_2c = 1;
  local_4c = 2;
  local_50 = FUN_1436a85f0(*(undefined8 *)(param_4 + 0x50));
  iVar1 = (**(code **)(DAT_146b7b8e0 + 0x30))
                    (*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10),&DAT_145af3922,0,
                     (ulonglong)uVar3 << 0x20,0,&local_20,0,*(undefined8 *)(param_4 + 0x10),
                     &local_30,local_res20,local_58);
  if (iVar1 == 0) {
    uVar2 = Curl_base64_encode(param_1,*(undefined8 *)(param_4 + 0x58),local_50,param_5,param_6);
    FUN_1436de9e0(param_4);
  }
  else {
    FUN_1436b58e0(param_1,"NTLM handshake failure (type-3 message): Status=%x\n",iVar1);
    uVar2 = 0x38;
  }
  return uVar2;
}



// FUNCTION 1436de950 FUN_1436de950 body=143 status=ok
// SIG undefined FUN_1436de950(void)

undefined8 FUN_1436de950(undefined8 param_1,char *param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_res20;
  undefined8 local_18 [2];
  
  local_res20 = 0;
  local_18[0] = 0;
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (param_2[lVar1] != '\0');
  if ((lVar1 != 0) && (*param_2 != '=')) {
    uVar2 = Curl_base64_decode(param_2,&local_res20,local_18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (local_res20 != 0) {
      *(longlong *)(param_3 + 0x60) = local_res20;
      *(undefined8 *)(param_3 + 0x68) = local_18[0];
      return 0;
    }
  }
  FUN_1436b58e0(param_1,"NTLM handshake failure (empty type-2 message)\n");
  return 0x3d;
}



// FUNCTION 1436de9e0 FUN_1436de9e0 body=137 status=ok
// SIG undefined FUN_1436de9e0(void)

void FUN_1436de9e0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x48))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x20))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1436ab8c0(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}



// FUNCTION 1436dea70 FUN_1436dea70 body=3159 status=ok
// SIG undefined FUN_1436dea70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436dea70(int param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined2 uVar13;
  undefined1 *puVar14;
  char *pcVar15;
  longlong lVar16;
  undefined1 auStack_188 [32];
  ulonglong *local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined4 *local_140;
  uint *local_138;
  undefined1 *local_130;
  undefined2 local_128;
  undefined2 local_126;
  uint local_120 [2];
  undefined1 *local_118;
  ulonglong local_110;
  uint local_108 [2];
  longlong local_100;
  ulonglong local_f8;
  uint local_f0 [2];
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  uint *local_d8;
  undefined1 local_d0 [8];
  undefined1 local_c8 [8];
  undefined4 local_c0;
  undefined4 local_bc;
  uint *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  uint *local_a8;
  undefined1 local_a0 [8];
  uint local_98;
  uint local_94;
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 local_78;
  uint local_70 [2];
  undefined1 *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined1 *local_58;
  uint local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_188;
  lVar1 = *param_2;
  puVar14 = (undefined1 *)0x0;
  local_f0[0] = 0;
  lVar2 = param_2[(longlong)param_1 + 0x3a];
  pcVar15 = "rcmd";
  if (*(char **)(lVar1 + 0x5b8) != (char *)0x0) {
    pcVar15 = *(char **)(lVar1 + 0x5b8);
  }
  pcVar8 = strchr(pcVar15,0x2f);
  if (pcVar8 == (char *)0x0) {
    lVar16 = -1;
    lVar9 = -1;
    do {
      lVar10 = lVar9;
      lVar9 = lVar10 + 1;
    } while (*(char *)(param_2[0x1f] + lVar9) != '\0');
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar15[lVar9] != '\0');
    lVar9 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar9 + lVar10 + 3);
    if (lVar9 == 0) {
      return 0x1b;
    }
    local_168 = (ulonglong *)param_2[0x1f];
    lVar10 = -1;
    do {
      lVar11 = lVar10;
      lVar10 = lVar11 + 1;
    } while (*(char *)((longlong)local_168 + 1 + lVar11) != '\0');
    do {
      lVar16 = lVar16 + 1;
    } while (pcVar15[lVar16] != '\0');
    curl_msnprintf(lVar9,lVar11 + 3 + lVar16,"%s/%s",pcVar15);
  }
  else {
    lVar9 = (*(code *)PTR__strdup_1467dcc70)(pcVar15);
    if (lVar9 == 0) {
      return 0x1b;
    }
  }
  local_ac = 1;
  local_a8 = local_108;
  local_b0 = 0;
  local_b8 = local_120;
  local_108[1] = 2;
  local_d8 = local_70;
  local_108[0] = 0;
  local_148 = local_c8;
  local_100 = 0;
  local_150 = &local_80;
  local_bc = 1;
  local_158 = (undefined4 *)0x0;
  local_160 = 0;
  local_c0 = 0;
  local_120[1] = 2;
  local_120[0] = 0;
  local_118 = (undefined1 *)0x0;
  local_dc = 3;
  local_e0 = 0;
  local_80 = 0;
  local_78 = 0;
  local_168 = (ulonglong *)0x0;
  iVar5 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,"Kerberos",2,0);
  if ((iVar5 != 0) && (2 < iVar5 - 0x90312U)) {
    uVar12 = FUN_1436a7420(param_2,iVar5);
    FUN_1436b5820(*param_2,"SSPI error: %s failed: %s","AcquireCredentialsHandle",uVar12);
    FUN_1436b5820(lVar1,"Failed to acquire credentials.");
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
    (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
    return 7;
  }
  do {
    local_130 = local_c8;
    local_138 = local_f0;
    local_140 = &local_c0;
    local_148 = local_90;
    local_158 = &local_b0;
    local_150 = (undefined8 *)((ulonglong)local_150 & 0xffffffff00000000);
    local_160 = CONCAT44(local_160._4_4_,0x10);
    local_168 = (ulonglong *)((ulonglong)local_168 & 0xffffffff00000000);
    iVar5 = (**(code **)(DAT_146b7b8e0 + 0x30))(&local_80,puVar14,lVar9,0x116);
    if (local_100 != 0) {
      (**(code **)(DAT_146b7b8e0 + 0x80))();
      local_108[0] = 0;
      local_100 = 0;
    }
    if ((iVar5 != 0) && (2 < iVar5 - 0x90312U)) {
      uVar12 = FUN_1436a7420(param_2,iVar5);
      FUN_1436b5820(*param_2,"SSPI error: %s failed: %s","InitializeSecurityContext",uVar12);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
      (**(code **)(DAT_146b7b8e0 + 0x48))(local_90);
      if (local_100 != 0) {
        (**(code **)(DAT_146b7b8e0 + 0x80))();
      }
      FUN_1436b5820(lVar1,"Failed to initialise security context.");
      return 7;
    }
    if (local_120[0] != 0) {
      local_128 = 0x101;
      local_126 = Ordinal_9((undefined2)local_120[0]);
      local_168 = &local_110;
      iVar6 = FUN_1436b5e50(param_2,lVar2,&local_128,4);
      if ((iVar6 == 0) && (local_110 == 4)) {
        local_168 = &local_110;
        iVar6 = FUN_1436b5e50(param_2,lVar2,local_118,local_120[0]);
        if ((iVar6 == 0) && (local_120[0] == local_110)) goto LAB_1436dedaf;
        pcVar15 = "Failed to send SSPI authentication token.";
      }
      else {
        pcVar15 = "Failed to send SSPI authentication request.";
      }
      FUN_1436b5820(lVar1,pcVar15);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      if (local_118 != (undefined1 *)0x0) {
        (**(code **)(DAT_146b7b8e0 + 0x80))();
      }
      goto LAB_1436def44;
    }
LAB_1436dedaf:
    if (local_118 != (undefined1 *)0x0) {
      (**(code **)(DAT_146b7b8e0 + 0x80))(local_118);
      local_118 = (undefined1 *)0x0;
    }
    local_120[0] = 0;
    if (local_100 != 0) {
      (**(code **)(DAT_146b7b8e0 + 0x80))();
      local_100 = 0;
    }
    local_108[0] = 0;
    if (iVar5 != 0x90312) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      iVar5 = (**(code **)(DAT_146b7b8e0 + 0x10))(&local_80,1,&local_e8);
      (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
      if ((iVar5 != 0) && (2 < iVar5 - 0x90312U)) {
        uVar12 = FUN_1436a7420(param_2,iVar5);
        FUN_1436b5820(*param_2,"SSPI error: %s failed: %s","QueryCredentialAttributes",uVar12);
        (**(code **)(DAT_146b7b8e0 + 0x48))(local_90);
        (**(code **)(DAT_146b7b8e0 + 0x80))(local_e8);
        FUN_1436b5820(lVar1,"Failed to determine user name.");
        return 7;
      }
      FUN_1436b58e0(lVar1,"SOCKS5 server authencticated user %s with GSS-API.\n",local_e8);
      (**(code **)(DAT_146b7b8e0 + 0x80))(local_e8);
      local_128 = 0x201;
      if ((local_f0[0] & 0x10) == 0) {
        if ((local_f0[0] >> 0x10 & 1) != 0) {
          cVar3 = '\x01';
          goto LAB_1436df0e7;
        }
        pcVar15 = "no";
      }
      else {
        cVar3 = '\x02';
LAB_1436df0e7:
        pcVar15 = "confidentiality";
        if (cVar3 == '\x01') {
          pcVar15 = "integrity";
        }
      }
      FUN_1436b58e0(lVar1,"SOCKS5 server supports GSS-API %s data protection.\n",pcVar15);
      if (*(char *)(lVar1 + 0x5fc) == '\0') {
        uVar7 = (**(code **)(DAT_146b7b8e0 + 0x58))(local_90,0,local_a0);
        iVar5 = check_sspi_err(param_2,uVar7,"QueryContextAttributes");
        if (iVar5 != 0) goto LAB_1436df24c;
        local_70[0] = local_94;
        local_70[1] = 2;
        local_68 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_94);
        if (local_68 == (undefined1 *)0x0) goto LAB_1436defa7;
        local_60 = 1;
        local_58 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(1);
        if (local_58 == (undefined1 *)0x0) {
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
          goto LAB_1436defa7;
        }
        *local_58 = 0;
        local_4c = 9;
        local_50 = local_98;
        local_48 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_98);
        if (local_48 == (undefined1 *)0x0) {
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_58);
          goto LAB_1436defa7;
        }
        uVar7 = (**(code **)(DAT_146b7b8e0 + 200))(local_90,0x80000001,&local_e0,0);
        iVar5 = check_sspi_err(param_2,uVar7,"EncryptMessage");
        if (iVar5 == 0) {
          local_120[0] = local_50 + local_60 + local_70[0];
          local_118 = (undefined1 *)
                      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_120[0]);
          if (local_118 == (undefined1 *)0x0) {
            (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
            (**(code **)(DAT_146b7b8e0 + 0x80))(local_58);
            (**(code **)(DAT_146b7b8e0 + 0x80))(local_48);
            goto LAB_1436defa7;
          }
          _guard_xfg_dispatch_icall_nop(local_118,local_68,(ulonglong)local_70[0]);
          _guard_xfg_dispatch_icall_nop(local_118 + (int)local_70[0],local_58,(ulonglong)local_60);
          _guard_xfg_dispatch_icall_nop
                    (local_118 + (ulonglong)local_70[0] + (ulonglong)local_60,local_48,
                     (ulonglong)local_50);
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
          local_68 = (undefined1 *)0x0;
          local_70[0] = 0;
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_58);
          local_58 = (undefined1 *)0x0;
          local_60 = 0;
          (**(code **)(DAT_146b7b8e0 + 0x80))(local_48);
          local_48 = (undefined1 *)0x0;
          local_50 = 0;
          uVar13 = (undefined2)local_120[0];
          goto LAB_1436df356;
        }
        (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
        (**(code **)(DAT_146b7b8e0 + 0x80))(local_58);
        puVar14 = local_48;
LAB_1436df23f:
        (**(code **)(DAT_146b7b8e0 + 0x80))(puVar14);
LAB_1436df24c:
        (**(code **)(DAT_146b7b8e0 + 0x48))(local_90);
        FUN_1436b5820(lVar1,"Failed to query security context attributes.");
        return 7;
      }
      uVar13 = 1;
LAB_1436df356:
      local_126 = Ordinal_9(uVar13);
      local_168 = &local_110;
      iVar5 = FUN_1436b5e50(param_2,lVar2,&local_128,4);
      if ((iVar5 == 0) && (local_110 == 4)) {
        local_168 = &local_110;
        if (*(char *)(lVar1 + 0x5fc) == '\0') {
          iVar5 = FUN_1436b5e50(param_2,lVar2,local_118,local_120[0]);
          if ((iVar5 != 0) || (local_120[0] != local_110)) {
            pcVar15 = "Failed to send SSPI encryption type.";
            goto LAB_1436df679;
          }
          if (local_118 != (undefined1 *)0x0) {
            (**(code **)(DAT_146b7b8e0 + 0x80))();
          }
        }
        else {
          local_128 = local_128 & 0xff00;
          iVar5 = FUN_1436b5e50(param_2,lVar2,&local_128,1);
          if ((iVar5 != 0) || (local_110 != 1)) {
            FUN_1436b5820(lVar1,"Failed to send SSPI encryption type.");
            goto LAB_1436df698;
          }
        }
        local_168 = &local_f8;
        iVar5 = Curl_blockread_all(param_2,lVar2,&local_128,4);
        if ((iVar5 != 0) || (local_f8 != 4)) {
          FUN_1436b5820(lVar1,"Failed to receive SSPI encryption response.");
          goto LAB_1436df698;
        }
        if (local_128._1_1_ == -1) {
          FUN_1436b5820(lVar1,"User was rejected by the SOCKS5 server (%u %u).",(char)local_128,0xff
                       );
          goto LAB_1436df698;
        }
        if (local_128._1_1_ != '\x02') {
          FUN_1436b5820(lVar1,"Invalid SSPI encryption response type (%u %u).",(char)local_128,
                        local_128._1_1_);
          goto LAB_1436df698;
        }
        uVar4 = Ordinal_15(local_126);
        local_70[0] = (uint)uVar4;
        local_68 = (undefined1 *)
                   (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((ulonglong)uVar4);
        if (local_68 == (undefined1 *)0x0) {
LAB_1436defa7:
          (**(code **)(DAT_146b7b8e0 + 0x48))(local_90);
          return 0x1b;
        }
        local_168 = &local_f8;
        iVar5 = Curl_blockread_all(param_2,lVar2,local_68,local_70[0]);
        if ((iVar5 == 0) && (local_f8 == uVar4)) {
          if (*(char *)(lVar1 + 0x5fc) == '\0') {
            local_dc = 2;
            local_70[1] = 10;
            local_5c = 1;
            local_60 = 0;
            local_58 = (undefined1 *)0x0;
            uVar7 = (**(code **)(DAT_146b7b8e0 + 0xd0))(local_90,&local_e0,0,local_d0);
            iVar5 = check_sspi_err(param_2,uVar7,"DecryptMessage");
            if (iVar5 != 0) {
              if (local_68 != (undefined1 *)0x0) {
                (**(code **)(DAT_146b7b8e0 + 0x80))();
              }
              puVar14 = local_58;
              if (local_58 == (undefined1 *)0x0) goto LAB_1436df24c;
              goto LAB_1436df23f;
            }
            if (local_60 == 1) {
              local_128 = CONCAT11(local_128._1_1_,*local_58);
              (**(code **)(DAT_146b7b8e0 + 0x80))(local_68);
              puVar14 = local_58;
              goto LAB_1436df5fd;
            }
            FUN_1436b5820(lVar1,"Invalid SSPI encryption response length (%lu).");
            puVar14 = local_58;
            if (local_68 != (undefined1 *)0x0) {
              (**(code **)(DAT_146b7b8e0 + 0x80))();
              puVar14 = local_58;
            }
            goto LAB_1436df686;
          }
          if (local_70[0] == 1) {
            local_128 = CONCAT11(local_128._1_1_,*local_68);
            puVar14 = local_68;
LAB_1436df5fd:
            (**(code **)(DAT_146b7b8e0 + 0x80))(puVar14);
            if ((char)local_128 == '\0') {
              pcVar15 = "out GSS-API data";
            }
            else {
              pcVar15 = " GSS-API confidentiality";
              if ((char)local_128 == '\x01') {
                pcVar15 = " GSS-API integrity";
              }
            }
            FUN_1436b58e0(lVar1,"SOCKS5 access with%s protection granted.\n",pcVar15);
            return 0;
          }
          FUN_1436b5820(lVar1,"Invalid SSPI encryption response length (%lu).");
          puVar14 = local_68;
        }
        else {
          FUN_1436b5820(lVar1,"Failed to receive SSPI encryption type.");
          puVar14 = local_68;
        }
      }
      else {
        pcVar15 = "Failed to send SSPI encryption request.";
LAB_1436df679:
        FUN_1436b5820(lVar1,pcVar15);
        puVar14 = local_118;
LAB_1436df686:
        if (puVar14 == (undefined1 *)0x0) goto LAB_1436df698;
      }
      (**(code **)(DAT_146b7b8e0 + 0x80))(puVar14);
      goto LAB_1436df698;
    }
    local_168 = &local_f8;
    iVar5 = Curl_blockread_all(param_2,lVar2,&local_128,4);
    if ((iVar5 != 0) || (local_f8 != 4)) {
      FUN_1436b5820(lVar1,"Failed to receive SSPI authentication response.");
LAB_1436defd8:
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
      goto LAB_1436df698;
    }
    if (local_128._1_1_ == -1) {
      cVar3 = -1;
      pcVar15 = "User was rejected by the SOCKS5 server (%u %u).";
LAB_1436defca:
      FUN_1436b5820(lVar1,pcVar15,(char)local_128,cVar3);
      goto LAB_1436defd8;
    }
    if (local_128._1_1_ != '\x01') {
      pcVar15 = "Invalid SSPI authentication response type (%u %u).";
      cVar3 = local_128._1_1_;
      goto LAB_1436defca;
    }
    uVar4 = Ordinal_15(local_126);
    local_108[0] = (uint)uVar4;
    local_100 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((ulonglong)uVar4);
    if (local_100 == 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
      (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
      goto LAB_1436defa7;
    }
    local_168 = &local_f8;
    iVar5 = Curl_blockread_all(param_2,lVar2,local_100,local_108[0]);
    if ((iVar5 != 0) || (local_f8 != uVar4)) {
      FUN_1436b5820(lVar1,"Failed to receive SSPI authentication token.");
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar9);
LAB_1436def44:
      if (local_100 != 0) {
        (**(code **)(DAT_146b7b8e0 + 0x80))();
      }
      (**(code **)(DAT_146b7b8e0 + 0x20))(&local_80);
LAB_1436df698:
      (**(code **)(DAT_146b7b8e0 + 0x48))(local_90);
      return 7;
    }
    puVar14 = local_90;
  } while( true );
}



// FUNCTION 1436df6e0 check_sspi_err body=86 status=ok
// SIG undefined check_sspi_err(void)

undefined8 check_sspi_err(undefined8 *param_1,int param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (2 < param_2 - 0x90312U)) {
    uVar1 = FUN_1436a7420();
    FUN_1436b5820(*param_1,"SSPI error: %s failed: %s",param_3,uVar1);
    return 1;
  }
  return 0;
}



// FUNCTION 1436df740 FUN_1436df740 body=80 status=ok
// SIG undefined FUN_1436df740(void)

undefined8 FUN_1436df740(undefined8 param_1,longlong param_2,longlong *param_3,longlong *param_4)

{
  undefined8 uVar1;
  
  uVar1 = Curl_base64_encode(param_1,*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x68)
                             ,param_3,param_4);
  if ((int)uVar1 == 0) {
    if ((*param_3 != 0) && (*param_4 != 0)) {
      return uVar1;
    }
    uVar1 = 9;
  }
  return uVar1;
}



// FUNCTION 1436df790 FUN_1436df790 body=818 status=ok
// SIG undefined FUN_1436df790(void)

undefined4 *
FUN_1436df790(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,char *param_6,longlong param_7)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  ulonglong in_stack_ffffffffffffff38;
  undefined8 in_stack_ffffffffffffff40;
  ulonglong in_stack_ffffffffffffff50;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  undefined1 local_70 [8];
  undefined4 local_68;
  undefined4 local_64;
  uint *local_60;
  uint local_58 [2];
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  longlong local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  lVar1 = param_7;
  uVar3 = (undefined4)((ulonglong)in_stack_ffffffffffffff40 >> 0x20);
  puVar9 = (undefined4 *)0x0;
  local_80 = 0;
  local_88 = 0;
  if ((*(longlong *)(param_7 + 0x10) != 0) && (*(int *)(param_7 + 4) == 0)) {
    FUN_1436dfad0(param_7);
    return (undefined4 *)0x43;
  }
  if (*(longlong *)(param_7 + 0x50) == 0) {
    lVar4 = Curl_sasl_build_spn(param_4,param_5,0);
    *(longlong *)(lVar1 + 0x50) = lVar4;
    if (lVar4 == 0) {
      return (undefined4 *)0x1b;
    }
  }
  if (*(longlong *)(lVar1 + 0x60) == 0) {
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x88))("Negotiate",&local_78);
    *(int *)(lVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      return (undefined4 *)&DAT_00000004;
    }
    *(ulonglong *)(lVar1 + 0x58) = (ulonglong)*(uint *)(local_78 + 8);
    (**(code **)(DAT_146b7b8e0 + 0x80))();
    lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(*(undefined8 *)(lVar1 + 0x58));
    *(longlong *)(lVar1 + 0x60) = lVar4;
    if (lVar4 == 0) {
      return (undefined4 *)0x1b;
    }
  }
  puVar5 = puVar9;
  if (*(longlong *)(lVar1 + 8) == 0) {
    if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
      *(undefined8 *)(lVar1 + 0x48) = 0;
    }
    else {
      puVar5 = (undefined4 *)FUN_1436ab770(param_2,param_3,lVar1 + 0x18);
      if ((int)puVar5 != 0) {
        return puVar5;
      }
      *(longlong *)(lVar1 + 0x48) = lVar1 + 0x18;
      puVar5 = (undefined4 *)((ulonglong)puVar5 & 0xffffffff);
    }
    puVar6 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
    *(undefined8 **)(lVar1 + 8) = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined4 *)0x1b;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
    in_stack_ffffffffffffff50 = *(ulonglong *)(lVar1 + 8);
    in_stack_ffffffffffffff38 = *(ulonglong *)(lVar1 + 0x48);
    uVar3 = 0;
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x18))
                      (0,"Negotiate",2,0,in_stack_ffffffffffffff38,0,0,in_stack_ffffffffffffff50,
                       local_70);
    *(int *)(lVar1 + 4) = iVar2;
    if (iVar2 != 0) {
      return (undefined4 *)0x43;
    }
    puVar6 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
    *(undefined8 **)(lVar1 + 0x10) = puVar6;
    if (puVar6 == (undefined8 *)0x0) {
      return (undefined4 *)0x1b;
    }
    *puVar6 = 0;
    puVar6[1] = 0;
  }
  if ((param_6 != (char *)0x0) && (*param_6 != '\0')) {
    if (*param_6 != '=') {
      puVar7 = (undefined4 *)Curl_base64_decode(param_6,&local_88,&local_80);
      puVar5 = (undefined4 *)((ulonglong)puVar7 & 0xffffffff);
      if ((int)puVar7 != 0) {
        return puVar7;
      }
    }
    if (local_88 == 0) {
      FUN_1436b58e0(param_1,"SPNEGO handshake failure (empty challenge message)\n");
      return (undefined4 *)0x3d;
    }
    local_30 = &local_48;
    local_40 = local_88;
    local_38 = 0;
    local_34 = 1;
    local_44 = 2;
    local_48 = FUN_1436a85f0(local_80);
  }
  local_60 = local_58;
  local_50 = *(undefined8 *)(lVar1 + 0x60);
  local_68 = 0;
  local_64 = 1;
  local_58[1] = 2;
  local_58[0] = FUN_1436a85f0(*(undefined8 *)(lVar1 + 0x58));
  puVar7 = puVar9;
  if (local_88 != 0) {
    puVar7 = *(undefined4 **)(lVar1 + 0x10);
  }
  puVar8 = &local_38;
  if (local_88 == 0) {
    puVar8 = puVar9;
  }
  uVar3 = (**(code **)(DAT_146b7b8e0 + 0x30))
                    (*(undefined8 *)(lVar1 + 8),puVar7,*(undefined8 *)(lVar1 + 0x50),0x10,
                     in_stack_ffffffffffffff38 & 0xffffffff00000000,CONCAT44(uVar3,0x10),puVar8,
                     in_stack_ffffffffffffff50 & 0xffffffff00000000,*(undefined8 *)(lVar1 + 0x10),
                     &local_68,&param_7,local_70);
  *(undefined4 *)(lVar1 + 4) = uVar3;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_88);
  if (*(int *)(lVar1 + 4) < 0) {
    return (undefined4 *)0x1b;
  }
  if (*(int *)(lVar1 + 4) - 0x90313U < 2) {
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x40))(*(undefined8 *)(lVar1 + 0x10),&local_68);
    *(int *)(lVar1 + 4) = iVar2;
    if (iVar2 < 0) {
      return (undefined4 *)&DAT_00000038;
    }
  }
  *(ulonglong *)(lVar1 + 0x68) = (ulonglong)local_58[0];
  return puVar5;
}



// FUNCTION 1436dfad0 FUN_1436dfad0 body=140 status=ok
// SIG undefined FUN_1436dfad0(void)

void FUN_1436dfad0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x48))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x20))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 8));
    *(undefined8 *)(param_1 + 8) = 0;
  }
  FUN_1436ab8c0(*(undefined8 *)(param_1 + 0x48));
  *(undefined8 *)(param_1 + 0x48) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x50));
  *(undefined8 *)(param_1 + 0x50) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x60));
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}



// FUNCTION 1436dfb60 Curl_auth_create_external_message body=5 status=ok
// SIG undefined Curl_auth_create_external_message(void)

undefined8
Curl_auth_create_external_message
          (undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  if (lVar2 == 0) {
    lVar2 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b13200);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      *param_4 = 1;
      return 0;
    }
    *param_4 = 0;
    return 0x1b;
  }
  uVar1 = Curl_base64_encode();
  return uVar1;
}



// FUNCTION 1436dfb70 Curl_auth_create_login_message body=123 status=ok
// SIG undefined Curl_auth_create_login_message(void)

undefined8
Curl_auth_create_login_message
          (undefined8 param_1,longlong param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = -1;
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_2 + lVar2) != '\0');
  if (lVar2 == 0) {
    lVar2 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b13200);
    *param_3 = lVar2;
    if (lVar2 != 0) {
      *param_4 = 1;
      return 0;
    }
    *param_4 = 0;
    return 0x1b;
  }
  uVar1 = Curl_base64_encode();
  return uVar1;
}



// FUNCTION 1436dfbf0 FUN_1436dfbf0 body=253 status=ok
// SIG undefined FUN_1436dfbf0(void)

undefined4
FUN_1436dfbf0(undefined8 param_1,void *param_2,void *param_3,undefined8 *param_4,undefined8 *param_5
             )

{
  undefined4 uVar1;
  void *_Dst;
  size_t _Size;
  size_t _Size_00;
  size_t sVar2;
  
  _Size = 0xffffffffffffffff;
  _Size_00 = 0xffffffffffffffff;
  do {
    sVar2 = _Size_00;
    _Size_00 = sVar2 + 1;
  } while (*(char *)((longlong)param_2 + _Size_00) != '\0');
  do {
    _Size = _Size + 1;
  } while (*(char *)(_Size + (longlong)param_3) != '\0');
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  if (_Dst == (void *)0x0) {
    *param_5 = 0;
    uVar1 = 0x1b;
    *param_4 = 0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,param_2,_Size_00);
    *(undefined1 *)((longlong)_Dst + _Size_00) = 0;
    _guard_xfg_dispatch_icall_nop((void *)(sVar2 + 2 + (longlong)_Dst),param_2,_Size_00);
    *(undefined1 *)((longlong)_Dst + _Size_00 * 2 + 1) = 0;
    _guard_xfg_dispatch_icall_nop((void *)((longlong)_Dst + (sVar2 + 2) * 2),param_3,_Size);
    uVar1 = Curl_base64_encode(param_1,_Dst,_Size + _Size_00 * 2 + 2,param_4,param_5);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Dst);
  }
  return uVar1;
}



// FUNCTION 1436dfcf0 Curl_auth_create_cram_md5_message body=602 status=ok
// SIG undefined Curl_auth_create_cram_md5_message(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
Curl_auth_create_cram_md5_message
          (undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
          undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_118 [32];
  undefined8 local_f8;
  uint local_f0;
  uint local_e8;
  uint local_e0;
  uint local_d8;
  uint local_d0;
  uint local_c8;
  uint local_c0;
  uint local_b8;
  uint local_b0;
  uint local_a8;
  uint local_a0;
  uint local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined1 local_67;
  byte local_66;
  byte local_65;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  byte local_59;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  lVar3 = 0;
  local_78 = param_5;
  lVar2 = -1;
  local_80 = param_6;
  if (param_2 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
  }
  do {
    lVar2 = lVar2 + 1;
  } while (*(char *)(param_4 + lVar2) != '\0');
  local_88 = param_3;
  local_70 = param_1;
  uVar1 = FUN_1436a85f0();
  lVar2 = Curl_HMAC_init(&PTR_FUN_145b6d268,param_4,uVar1);
  if (lVar2 != 0) {
    if (lVar3 != 0) {
      uVar1 = FUN_1436a85f0(lVar3);
      Curl_MD5_update(lVar2,param_2,uVar1);
    }
    Curl_HMAC_final(lVar2,&local_68);
    local_90 = (uint)local_59;
    local_98 = (uint)local_5a;
    local_a0 = (uint)local_5b;
    local_a8 = (uint)local_5c;
    local_b0 = (uint)local_5d;
    local_b8 = (uint)local_5e;
    local_c0 = (uint)local_5f;
    local_c8 = (uint)local_60;
    local_d0 = (uint)local_61;
    local_d8 = (uint)local_62;
    local_e0 = (uint)local_63;
    local_e8 = (uint)local_64;
    local_f0 = (uint)local_65;
    local_f8 = CONCAT44(local_f8._4_4_,(uint)local_66);
    lVar2 = curl_maprintf("%s %02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x%02x",
                          local_88,local_68,local_67);
    if (lVar2 != 0) {
      local_f8 = local_80;
      uVar1 = Curl_base64_encode(local_70,lVar2,0,local_78);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
      return uVar1;
    }
  }
  return 0x1b;
}



// FUNCTION 1436dff50 FUN_1436dff50 body=40 status=ok
// SIG undefined FUN_1436dff50(void)

undefined4 FUN_1436dff50(char *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined1 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_1[lVar5] != '\0');
  *param_2 = 0;
  *param_3 = 0;
  if ((lVar5 == 0) || (*param_1 == '=')) {
    return 0;
  }
  uVar7 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar9 = 0xffffffffffffffff;
  do {
    uVar9 = uVar9 + 1;
  } while (param_1[uVar9] != '\0');
  if ((uVar9 != 0) && ((uVar9 & 3) == 0)) {
    cVar1 = *param_1;
    uVar6 = uVar7;
    while ((cVar1 != '=' && (cVar1 != '\0'))) {
      lVar5 = uVar6 + 1;
      uVar6 = uVar6 + 1;
      cVar1 = param_1[lVar5];
    }
    uVar10 = uVar7;
    if ((param_1[uVar6] == '=') && (uVar10 = 1, param_1[uVar6 + 1] == '=')) {
      uVar10 = 2;
    }
    if (uVar10 + uVar6 == uVar9) {
      uVar9 = uVar9 >> 2;
      lVar5 = uVar9 * 3 - uVar10;
      puVar3 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar5 + 1);
      if (puVar3 == (undefined1 *)0x0) {
        uVar2 = 0x1b;
      }
      else {
        puVar8 = puVar3;
        if (uVar9 != 0) {
          do {
            lVar4 = decodeQuantum(puVar8,param_1);
            if (lVar4 == 0) {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
              return 0x3d;
            }
            puVar8 = puVar8 + lVar4;
            param_1 = param_1 + 4;
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar9);
        }
        *puVar8 = 0;
        uVar2 = 0;
        *param_2 = puVar3;
        *param_3 = lVar5;
      }
      return uVar2;
    }
  }
  return 0x3d;
}



// FUNCTION 1436dff80 Curl_auth_create_oauth_bearer_message body=188 status=ok
// SIG undefined Curl_auth_create_oauth_bearer_message(void)

undefined4
Curl_auth_create_oauth_bearer_message
          (undefined8 param_1,undefined8 param_2,longlong param_3,int param_4,undefined8 param_5,
          undefined8 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_3 == 0) && ((param_4 == 0 || (param_4 == 0x50)))) {
    lVar2 = curl_maprintf(&DAT_145b72cb8);
  }
  else if ((param_4 == 0) || (param_4 == 0x50)) {
    lVar2 = curl_maprintf(&DAT_145b72cd8,param_2,param_3,param_5);
  }
  else {
    lVar2 = curl_maprintf(&DAT_145b72d00);
  }
  if (lVar2 == 0) {
    return 0x1b;
  }
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(lVar2 + lVar3) != '\0');
  uVar1 = Curl_base64_encode(param_1,lVar2,lVar3,param_6,param_7);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
  return uVar1;
}



// FUNCTION 1436e0040 FUN_1436e0040 body=1040 status=ok
// SIG undefined FUN_1436e0040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436e0040(undefined8 param_1,char *param_2,undefined8 *param_3,undefined8 param_4,
                       undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint *puVar7;
  void *pvVar8;
  void *_Dst;
  char *pcVar9;
  longlong lVar10;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong local_108;
  undefined4 local_100;
  uint local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  int local_e0;
  undefined4 local_dc;
  uint *local_d8;
  char *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint *local_a0;
  undefined1 local_98 [8];
  uint local_90;
  uint local_8c;
  uint local_88 [2];
  void *local_80;
  uint local_78;
  undefined4 local_74;
  uint *local_70;
  uint local_68;
  undefined4 local_64;
  void *local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_c8 = param_5;
  lVar4 = -1;
  local_f8 = 0;
  local_108 = 0;
  local_100 = 0;
  do {
    lVar4 = lVar4 + 1;
  } while (param_2[lVar4] != '\0');
  local_c0 = param_4;
  if ((lVar4 != 0) && (*param_2 != '=')) {
    uVar5 = Curl_base64_decode(param_2,&local_108,&local_f8);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_108 != 0) {
      iVar2 = (**(code **)(DAT_146b7b8e0 + 0x58))(param_3[1],0,local_98);
      if (iVar2 != 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_108);
        return 0x1b;
      }
      iVar2 = (**(code **)(DAT_146b7b8e0 + 0x10))(*param_3,1,&local_d0);
      if (iVar2 == 0) {
        local_b0 = &local_f0;
        local_e8 = local_108;
        local_b8 = 0;
        local_b4 = 2;
        local_ec = 10;
        local_f0 = FUN_1436a85f0(local_f8);
        local_dc = 1;
        local_d8 = (uint *)0x0;
        local_e0 = 0;
        iVar2 = (**(code **)(DAT_146b7b8e0 + 0xd0))(param_3[1],&local_b8,0,&local_100);
        if (iVar2 == 0) {
          if (local_e0 == 4) {
            uVar3 = *local_d8;
            (**(code **)(DAT_146b7b8e0 + 0x80))();
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_108);
            local_fc = uVar3 & 0xff;
            if ((uVar3 & 1) == 0) {
              FUN_1436b58e0(param_1,"GSSAPI handshake failure (invalid security layer)\n");
              return 0x3d;
            }
            Ordinal_14(uVar3 & 0xffffff00);
            pvVar6 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_8c);
            if (pvVar6 != (void *)0x0) {
              lVar4 = -1;
              if (local_d0 != (char *)0x0) {
                do {
                  lVar10 = lVar4;
                  lVar4 = lVar10 + 1;
                } while (local_d0[lVar10 + 1] != '\0');
                puVar7 = (uint *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar10 + 6);
                if (puVar7 != (uint *)0x0) {
                  uVar3 = Ordinal_8(0);
                  *puVar7 = uVar3 | local_fc;
                  pcVar9 = local_d0;
                  do {
                    cVar1 = *pcVar9;
                    pcVar9[(longlong)puVar7 + (4 - (longlong)local_d0)] = cVar1;
                    pcVar9 = pcVar9 + 1;
                  } while (cVar1 != '\0');
                  pvVar8 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(local_90);
                  if (pvVar8 != (void *)0x0) {
                    local_a0 = local_88;
                    local_a8 = 0;
                    local_88[0] = local_8c;
                    local_a4 = 3;
                    local_88[1] = 2;
                    local_74 = 1;
                    local_80 = pvVar6;
                    local_70 = puVar7;
                    local_78 = FUN_1436a85f0(lVar10 + 6);
                    local_68 = local_90;
                    local_64 = 9;
                    local_60 = pvVar8;
                    iVar2 = (**(code **)(DAT_146b7b8e0 + 200))(param_3[1],0x80000001,&local_a8,0);
                    if (iVar2 == 0) {
                      iVar2 = local_68 + local_78 + local_88[0];
                      _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(iVar2);
                      if (_Dst != (void *)0x0) {
                        _guard_xfg_dispatch_icall_nop(_Dst,local_80,(ulonglong)local_88[0]);
                        uVar5 = (ulonglong)local_88[0];
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)((longlong)_Dst + uVar5),local_70,(ulonglong)local_78);
                        _guard_xfg_dispatch_icall_nop
                                  ((void *)((longlong)_Dst + uVar5 + local_78),local_60,
                                   (ulonglong)local_68);
                        local_118 = local_c8;
                        uVar3 = Curl_base64_encode(param_1,_Dst,iVar2,local_c0);
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Dst);
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar8);
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7);
                        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar6);
                        return (ulonglong)uVar3;
                      }
                    }
                    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar8);
                  }
                  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar7);
                }
                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar6);
                return 0x1b;
              }
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pvVar6);
            }
            return 0x1b;
          }
          pcVar9 = "GSSAPI handshake failure (invalid security data)\n";
        }
        else {
          pcVar9 = "GSSAPI handshake failure (empty security message)\n";
        }
        FUN_1436b58e0(param_1,pcVar9);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_108);
        return 0x3d;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_108);
      return 0x38;
    }
  }
  FUN_1436b58e0(param_1,"GSSAPI handshake failure (empty security message)\n");
  return 0x3d;
}



// FUNCTION 1436e0450 FUN_1436e0450 body=907 status=ok
// SIG undefined FUN_1436e0450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436e0450(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5,char param_6,char *param_7,ulonglong *param_8,
                       longlong *param_9,undefined8 param_10)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_138 [32];
  ulonglong local_118;
  undefined8 local_110;
  undefined4 *local_108;
  ulonglong local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  int local_c0 [2];
  ulonglong local_b8;
  undefined1 local_b0 [8];
  longlong local_a8;
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  uVar7 = 0;
  local_c8 = param_9;
  local_98 = param_10;
  local_d0 = 0;
  local_d8 = 0;
  if (param_8[2] == 0) {
    uVar4 = Curl_sasl_build_spn(param_4,param_5,0);
    param_8[2] = uVar4;
    if (uVar4 == 0) {
      return 0x1b;
    }
  }
  if (param_8[0xb] == 0) {
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x88))("Kerberos",&local_a8);
    if (iVar2 != 0) {
      return 4;
    }
    param_8[10] = (ulonglong)*(uint *)(local_a8 + 8);
    (**(code **)(DAT_146b7b8e0 + 0x80))();
    uVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(param_8[10]);
    param_8[0xb] = uVar4;
    if (uVar4 == 0) {
      return 0x1b;
    }
  }
  if (*param_8 != 0) {
LAB_1436e05f8:
    if ((param_7 != (char *)0x0) && (*param_7 != '\0')) {
      if (*param_7 != '=') {
        uVar4 = Curl_base64_decode(param_7,&local_d8,&local_d0);
        uVar7 = uVar4 & 0xffffffff;
        if ((int)uVar4 != 0) {
          return uVar4;
        }
      }
      if (local_d8 == 0) {
        FUN_1436b58e0(param_1,"GSSAPI handshake failure (empty challenge message)\n");
        return 0x3d;
      }
      local_78 = &local_90;
      local_88 = local_d8;
      local_80 = 0;
      local_7c = 1;
      local_8c = 2;
      local_90 = FUN_1436a85f0(local_d0);
    }
    local_68 = local_c0;
    local_b8 = param_8[0xb];
    local_70 = 0;
    local_6c = 1;
    local_c0[1] = 2;
    local_c0[0] = FUN_1436a85f0(param_8[10]);
    if (local_d8 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = param_8[1];
    }
    local_108 = &local_80;
    if (local_d8 == 0) {
      local_108 = (undefined4 *)0x0;
    }
    local_e0 = local_a0;
    local_e8 = local_b0;
    local_f0 = &local_70;
    local_f8 = &local_60;
    local_100 = local_100 & 0xffffffff00000000;
    local_110 = CONCAT44(local_110._4_4_,0x10);
    local_118 = local_118 & 0xffffffff00000000;
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x30))(*param_8,uVar4,param_8[2],-(param_6 != '\0') & 2);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_d8);
    if ((iVar2 != 0) && (iVar2 != 0x90312)) {
      return 0x38;
    }
    if ((CONCAT44(uStack_5c,local_60) != *(longlong *)param_8[1]) ||
       (CONCAT44(uStack_54,uStack_58) != ((longlong *)param_8[1])[1])) {
      (**(code **)(DAT_146b7b8e0 + 0x48))();
      puVar1 = (undefined4 *)param_8[1];
      *puVar1 = local_60;
      puVar1[1] = uStack_5c;
      puVar1[2] = uStack_58;
      puVar1[3] = uStack_54;
    }
    if (local_c0[0] == 0) {
      if (param_6 == '\0') {
        return uVar7;
      }
      lVar6 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
      *local_c8 = lVar6;
      if (lVar6 == 0) {
        return 0x1b;
      }
      return uVar7;
    }
    local_118 = local_98;
    uVar3 = Curl_base64_encode(param_1,local_b8,local_c0[0],local_c8);
    return (ulonglong)uVar3;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    param_8[9] = 0;
  }
  else {
    uVar4 = FUN_1436ab770(param_2,param_3,param_8 + 3);
    uVar7 = uVar4 & 0xffffffff;
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    param_8[9] = (ulonglong)(param_8 + 3);
  }
  puVar5 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  *param_8 = (ulonglong)puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    local_f8 = (undefined4 *)local_a0;
    local_100 = *param_8;
    local_118 = param_8[9];
    local_108 = (undefined4 *)0x0;
    local_110 = 0;
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,"Kerberos",2,0);
    if (iVar2 != 0) {
      return 0x43;
    }
    puVar5 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
    param_8[1] = (ulonglong)puVar5;
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      goto LAB_1436e05f8;
    }
  }
  return 0x1b;
}



// FUNCTION 1436e07e0 FUN_1436e07e0 body=134 status=ok
// SIG undefined FUN_1436e07e0(void)

void FUN_1436e07e0(longlong *param_1)

{
  if (param_1[1] != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x48))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[1]);
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    (**(code **)(DAT_146b7b8e0 + 0x20))();
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
    *param_1 = 0;
  }
  FUN_1436ab8c0(param_1[9]);
  param_1[9] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[2]);
  param_1[2] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xb]);
  param_1[0xb] = 0;
  param_1[10] = 0;
  return;
}



// FUNCTION 1436e0870 FUN_1436e0870 body=30 status=ok
// SIG undefined FUN_1436e0870(void)

undefined8 FUN_1436e0870(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    uVar1 = loop(param_2,param_3);
    return uVar1;
  }
  return 2;
}



// FUNCTION 1436e0890 loop body=655 status=ok
// SIG undefined loop(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool loop(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  uint _C;
  byte *pbVar7;
  undefined1 auStack_168 [32];
  byte *local_148 [2];
  char local_138 [256];
  char local_38;
  char local_37;
  char local_36;
  char local_35;
  char local_34;
  char local_33;
  char local_32;
  char local_31;
  char local_30;
  char local_2f;
  char local_2e;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  bVar3 = false;
  while( true ) {
    _guard_xfg_dispatch_icall_nop(local_138,0,0x10f);
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (bVar3) {
              iVar5 = isprint((uint)*param_1);
              if (iVar5 == 0) {
                return (bool)2;
              }
              bVar1 = *param_1;
              param_1 = param_1 + 1;
              bVar2 = *param_2;
              param_2 = param_2 + 1;
              bVar3 = false;
              if (bVar1 != bVar2) {
                return true;
              }
            }
            bVar1 = *param_1;
            if (bVar1 != 0x2a) break;
            bVar1 = param_1[1];
            pbVar7 = param_1 + 1;
            while (pbVar4 = pbVar7, bVar1 == 0x2a) {
              pbVar7 = pbVar4 + 1;
              bVar1 = *pbVar7;
              param_1 = pbVar4;
            }
            if (((*param_2 == 0) && (param_1[1] == 0)) ||
               (iVar5 = loop(param_1 + 1,param_2), iVar5 == 0)) {
              return false;
            }
            if (*param_2 == 0) {
              return true;
            }
            param_2 = param_2 + 1;
          }
          if (bVar1 != 0x3f) break;
          iVar5 = isprint((uint)*param_2);
          if (iVar5 == 0) {
            return (bool)((*param_2 != 0) + '\x01');
          }
          param_2 = param_2 + 1;
          param_1 = param_1 + 1;
        }
        if (bVar1 == 0) {
          return *param_2 != 0;
        }
        if (bVar1 != 0x5c) break;
        param_1 = param_1 + 1;
        bVar3 = true;
      }
      if (bVar1 == 0x5b) break;
      bVar2 = *param_2;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (bVar1 != bVar2) {
        return true;
      }
    }
    local_148[0] = param_1 + 1;
    iVar5 = setcharset(local_148);
    if (iVar5 == 0) {
      return (bool)2;
    }
    bVar1 = *param_2;
    uVar6 = 0;
    if (local_138[bVar1] == '\0') {
      if (local_37 == '\0') {
        _C = (uint)bVar1;
        if (local_34 == '\0') {
          if (local_36 == '\0') {
            if (local_35 == '\0') {
              if (local_33 == '\0') {
                if (local_2f == '\0') {
                  if (local_2e == '\0') {
                    if (local_31 == '\0') {
                      if (local_32 == '\0') {
                        if (local_30 != '\0') {
                          uVar6 = isgraph(_C);
                        }
                      }
                      else if ((bVar1 == 0x20) || (uVar6 = 0, bVar1 == 9)) {
                        uVar6 = 1;
                      }
                    }
                    else {
                      uVar6 = islower(_C);
                    }
                  }
                  else {
                    uVar6 = isupper(_C);
                  }
                }
                else {
                  uVar6 = isspace(_C);
                }
              }
              else {
                uVar6 = isprint(_C);
              }
            }
            else {
              uVar6 = isxdigit(_C);
            }
          }
          else {
            uVar6 = isdigit(_C);
          }
        }
        else {
          uVar6 = isalpha(_C);
        }
      }
      else {
        uVar6 = isalnum((uint)bVar1);
      }
    }
    else {
      uVar6 = 1;
    }
    if (local_38 != '\0') {
      uVar6 = (uint)(uVar6 == 0);
    }
    if (uVar6 == 0) break;
    param_1 = local_148[0] + 1;
    param_2 = param_2 + 1;
  }
  return true;
}



// FUNCTION 1436e0b20 parsekeyword body=807 status=ok
// SIG undefined parsekeyword(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int parsekeyword(undefined8 *param_1,longlong param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined1 auStack_78 [32];
  byte local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  pbVar6 = (byte *)*param_1;
  lVar3 = 0;
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  local_58[8] = 0;
  local_58[9] = 0;
  lVar4 = lVar3;
  lVar5 = lVar3;
  do {
    while( true ) {
      bVar1 = *pbVar6;
      pbVar6 = pbVar6 + 1;
      if (9 < lVar5) {
        return 0;
      }
      if ((int)lVar4 == 0) break;
      if ((int)lVar4 == 1) {
        if (bVar1 != 0x5d) {
          return 0;
        }
        *param_1 = pbVar6;
        lVar4 = lVar3;
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "digit"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x102) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "alnum"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x101) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "alpha"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x104) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == (&DAT_145b72e1c)[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 7) {
            *(undefined1 *)(param_2 + 0x103) = 1;
            return (int)lVar5 + -5;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "print"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x105) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "graph"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x108) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "space"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x109) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, lVar4 = lVar3, local_58[lVar5] == "blank"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x106) = 1;
            return (int)lVar5 + -4;
          }
        }
        while (lVar5 = lVar4, local_58[lVar5] == "upper"[lVar5]) {
          lVar4 = lVar5 + 1;
          if (lVar5 + 1 == 6) {
            *(undefined1 *)(param_2 + 0x10a) = 1;
            return (int)lVar5 + -4;
          }
        }
        do {
          lVar4 = lVar3;
          if (local_58[lVar4] != "lower"[lVar4]) {
            return 0;
          }
          lVar3 = lVar4 + 1;
        } while (lVar4 + 1 != 6);
        *(undefined1 *)(param_2 + 0x107) = 1;
        return (int)lVar4 + -4;
      }
LAB_1436e0bfe:
      lVar5 = lVar5 + 1;
    }
    iVar2 = isalpha((uint)bVar1);
    if ((iVar2 == 0) || (iVar2 = islower((uint)bVar1), iVar2 == 0)) {
      if (bVar1 != 0x3a) {
        return 0;
      }
      lVar4 = 1;
      goto LAB_1436e0bfe;
    }
    local_58[lVar5] = bVar1;
    lVar5 = lVar5 + 1;
  } while( true );
}



// FUNCTION 1436e0e50 setcharset body=892 status=ok
// SIG undefined setcharset(void)

bool setcharset(longlong *param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint _C;
  byte bVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  ulonglong uVar7;
  
  iVar10 = 0;
  uVar9 = 0;
  lVar11 = 0;
  bVar3 = false;
  iVar4 = iVar10;
LAB_1436e0e81:
  do {
    while( true ) {
      iVar5 = iVar4;
      bVar2 = *(byte *)*param_1;
      uVar7 = (ulonglong)bVar2;
      iVar4 = iVar5;
      if (iVar5 != 0) break;
      iVar6 = isalnum((uint)bVar2);
      if (iVar6 == 0) {
        if (bVar2 == 0x5d) {
          if (bVar3) {
            return true;
          }
          bVar3 = true;
          *(undefined1 *)(param_2 + 0x5d) = 1;
          *param_1 = *param_1 + 1;
          iVar4 = 3;
        }
        else if (bVar2 == 0x5b) {
          if (*(char *)(*param_1 + 1) == ':') {
            *param_1 = *param_1 + 2;
            iVar4 = parsekeyword(param_1,param_2);
            if (iVar4 == 0) {
              return false;
            }
            bVar3 = true;
            iVar4 = iVar10;
          }
          else {
            *(undefined1 *)(param_2 + 0x5b) = 1;
            bVar3 = true;
            *param_1 = *param_1 + 1;
          }
        }
        else if ((bVar2 == 0x3f) || (bVar2 == 0x2a)) {
          bVar3 = true;
          *(undefined1 *)(uVar7 + param_2) = 1;
          *param_1 = *param_1 + 1;
        }
        else if ((bVar2 == 0x5e) || (bVar2 == 0x21)) {
          if (bVar3) {
LAB_1436e0eb7:
            *(undefined1 *)(uVar7 + param_2) = 1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar5;
          }
          else if (*(char *)(param_2 + 0x100) == '\0') {
            *(undefined1 *)(param_2 + 0x100) = 1;
            *param_1 = *param_1 + 1;
          }
          else {
            bVar3 = true;
            *(undefined1 *)(uVar7 + param_2) = 1;
            *param_1 = *param_1 + 1;
          }
        }
        else if (bVar2 == 0x5c) {
          *param_1 = *param_1 + 1;
          uVar9 = (ulonglong)*(byte *)*param_1;
          iVar4 = isprint((uint)*(byte *)*param_1);
          if (iVar4 == 0) {
            return false;
          }
          bVar3 = true;
          *(undefined1 *)(uVar9 + param_2) = 1;
          *param_1 = *param_1 + 1;
          iVar4 = 1;
        }
        else {
          if (bVar2 == 0) {
            return false;
          }
          bVar3 = true;
          *(undefined1 *)(uVar7 + param_2) = 1;
          *param_1 = *param_1 + 1;
        }
      }
      else {
        bVar3 = true;
        *(undefined1 *)(uVar7 + param_2) = 1;
        *param_1 = *param_1 + 1;
        uVar9 = uVar7;
        iVar4 = 1;
      }
    }
    if (iVar5 == 1) {
      if (bVar2 == 0x2d) {
        *(undefined1 *)(param_2 + 0x2d) = 1;
        *param_1 = *param_1 + 1;
        lVar11 = 0x2d;
        iVar4 = 2;
      }
      else {
        iVar4 = iVar10;
        if (bVar2 != 0x5b) {
          iVar4 = isalnum((uint)bVar2);
          if (iVar4 == 0) {
            if (bVar2 != 0x5c) {
              return bVar2 == 0x5d;
            }
            *param_1 = *param_1 + 1;
            bVar2 = *(byte *)*param_1;
            iVar4 = isprint((uint)bVar2);
            if (iVar4 == 0) {
              return false;
            }
            *(undefined1 *)((ulonglong)bVar2 + param_2) = 1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar5;
          }
          else {
            *(undefined1 *)(uVar7 + param_2) = 1;
            *param_1 = *param_1 + 1;
            iVar4 = iVar5;
          }
        }
      }
      goto LAB_1436e0e81;
    }
    if (iVar5 == 2) {
      if (bVar2 == 0x5c) {
        pbVar1 = (byte *)*param_1 + 1;
        *param_1 = (longlong)pbVar1;
        bVar2 = *pbVar1;
        iVar4 = isprint((uint)bVar2);
        if (iVar4 == 0) {
          return false;
        }
      }
      if (bVar2 == 0x5d) {
        return true;
      }
      if (bVar2 == 0x5c) {
        *param_1 = *param_1 + 1;
        bVar2 = *(byte *)*param_1;
        iVar4 = isprint((uint)bVar2);
        if (iVar4 == 0) {
          return false;
        }
        *(undefined1 *)((ulonglong)bVar2 + param_2) = 1;
        *param_1 = *param_1 + 1;
        iVar5 = iVar10;
      }
      _C = (uint)bVar2;
      iVar4 = iVar5;
      if ((byte)uVar9 <= bVar2) {
        iVar5 = islower(_C);
        iVar4 = (int)uVar9;
        if ((((iVar5 == 0) || (iVar5 = islower(iVar4), iVar5 == 0)) &&
            ((iVar5 = isdigit(_C), iVar5 == 0 || (iVar5 = isdigit(iVar4), iVar5 == 0)))) &&
           ((iVar5 = isupper(_C), iVar5 == 0 || (iVar4 = isupper(iVar4), iVar4 == 0)))) {
          return false;
        }
        bVar8 = (byte)uVar9 + 1;
        *(undefined1 *)(lVar11 + param_2) = 0;
        while (bVar8 <= bVar2) {
          bVar8 = bVar8 + 1;
          *(undefined1 *)((int)(bVar8 - 1) + param_2) = 1;
        }
        uVar9 = (ulonglong)(byte)(bVar8 + 1);
        *param_1 = *param_1 + 1;
        iVar4 = iVar10;
      }
    }
    else if (iVar5 == 3) {
      if (bVar2 == 0x5b) {
        *(undefined1 *)(param_2 + 0x5b) = 1;
        *param_1 = *param_1 + 1;
        iVar4 = 4;
      }
      else {
        if (bVar2 == 0x5d) {
          return true;
        }
        if (bVar2 == 0) {
          return false;
        }
        iVar4 = isprint((uint)bVar2);
        if (iVar4 == 0) {
          return false;
        }
        *(undefined1 *)(uVar7 + param_2) = 1;
        *param_1 = *param_1 + 1;
        iVar4 = iVar10;
      }
    }
    else if (iVar5 == 4) {
      iVar5 = iVar10;
      if (bVar2 == 0x5d) {
        return true;
      }
      goto LAB_1436e0eb7;
    }
  } while( true );
}



// FUNCTION 1436e11d0 FUN_1436e11d0 body=90 status=ok
// SIG undefined FUN_1436e11d0(void)

void FUN_1436e11d0(byte *param_1,longlong param_2)

{
  byte bVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    bVar1 = *param_1;
    if ((((byte)((byte)((byte)((byte)((byte)(~(bVar1 >> 1) ^ bVar1) >> 1 ^ bVar1) >> 1 ^ bVar1) >> 1
                       ^ bVar1) >> 1 ^ bVar1) >> 1 ^ bVar1) & 2) < 2) {
      bVar1 = bVar1 & 0xfe;
    }
    else {
      bVar1 = bVar1 | 1;
    }
    *param_1 = bVar1;
    param_1 = param_1 + 1;
  }
  return;
}



// FUNCTION 1436e1230 Curl_sasl_build_spn body=18 status=ok
// SIG undefined Curl_sasl_build_spn(void)

void Curl_sasl_build_spn(undefined8 param_1,undefined8 param_2)

{
  curl_maprintf("%s/%s",param_1,param_2);
  return;
}



// FUNCTION 1436e1250 Curl_auth_digest_get_pair body=240 status=ok
// SIG undefined Curl_auth_digest_get_pair(void)

undefined8 Curl_auth_digest_get_pair(char *param_1,char *param_2,char *param_3,undefined8 *param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  bool bVar8;
  
  cVar1 = *param_1;
  bVar2 = false;
  iVar3 = 0xff;
  while (((cVar1 != '\0' && (cVar1 != '=')) && (iVar3 != 0))) {
    param_1 = param_1 + 1;
    *param_2 = cVar1;
    param_2 = param_2 + 1;
    cVar1 = *param_1;
    iVar3 = iVar3 + -1;
  }
  *param_2 = '\0';
  pcVar6 = param_1 + 1;
  if (*param_1 != '=') {
    return 0;
  }
  bVar8 = *pcVar6 == '\"';
  if (bVar8) {
    pcVar6 = param_1 + 2;
  }
  cVar1 = *pcVar6;
  uVar4 = 0x3ff;
  do {
    uVar5 = 0;
    if ((cVar1 == '\0') || (uVar7 = (ulonglong)((int)uVar4 - 1), uVar5 = uVar4, (int)uVar4 == 0)) {
      *param_3 = '\0';
      *param_4 = pcVar6;
      return CONCAT71((int7)(uVar5 >> 8),1);
    }
    if ((cVar1 == '\n') || (cVar1 == '\r')) {
LAB_1436e1305:
      uVar7 = 0;
    }
    else {
      if (cVar1 == '\"') {
        if ((!bVar2) && (bVar8)) goto LAB_1436e1305;
      }
      else if (cVar1 == ',') {
        if (!bVar8) goto LAB_1436e1305;
      }
      else if ((cVar1 == '\\') && (!bVar2)) {
        *param_3 = '\\';
        bVar2 = true;
        param_3 = param_3 + 1;
        goto LAB_1436e1307;
      }
      bVar2 = false;
      *param_3 = cVar1;
      param_3 = param_3 + 1;
    }
LAB_1436e1307:
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 1;
    uVar4 = uVar7;
  } while( true );
}



// FUNCTION 1436e1340 Curl_HMAC_final body=97 status=ok
// SIG undefined Curl_HMAC_final(void)

undefined8 Curl_HMAC_final(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    param_2 = (ulonglong)*(uint *)(lVar1 + 0x18) + param_1[2];
  }
  (**(code **)(lVar1 + 0x10))(param_2,param_1[1]);
  (**(code **)(lVar1 + 8))(param_1[2],param_2,*(undefined4 *)(lVar1 + 0x20));
  (**(code **)(lVar1 + 0x10))(param_2,param_1[2]);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return 0;
}



// FUNCTION 1436e13b0 Curl_HMAC_init body=313 status=ok
// SIG undefined Curl_HMAC_init(void)

undefined8 * Curl_HMAC_init(undefined8 *param_1,byte *param_2,uint param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  byte local_res8 [8];
  
  puVar1 = (undefined8 *)
           (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                     ((ulonglong)(uint)(*(int *)(param_1 + 3) * 2) +
                      (ulonglong)*(uint *)(param_1 + 4) + 0x18);
  if (puVar1 == (undefined8 *)0x0) {
    return (undefined8 *)0x0;
  }
  *puVar1 = param_1;
  puVar1[1] = puVar1 + 3;
  puVar1[2] = (ulonglong)*(uint *)(param_1 + 3) + (longlong)(puVar1 + 3);
  if (*(uint *)((longlong)param_1 + 0x1c) < param_3) {
    (*(code *)*param_1)();
    (*(code *)param_1[1])(puVar1[1],param_2,param_3);
    param_2 = (byte *)((ulonglong)*(uint *)(param_1 + 3) + puVar1[2]);
    (*(code *)param_1[2])(param_2,puVar1[1]);
    param_3 = *(uint *)(param_1 + 4);
  }
  (*(code *)*param_1)(puVar1[1]);
  (*(code *)*param_1)(puVar1[2]);
  uVar3 = 0;
  for (uVar2 = (ulonglong)param_3; uVar2 != 0; uVar2 = uVar2 - 1) {
    local_res8[0] = *param_2 ^ 0x36;
    (*(code *)param_1[1])(puVar1[1],local_res8,1);
    local_res8[0] = *param_2 ^ 0x5c;
    param_2 = param_2 + 1;
    (*(code *)param_1[1])(puVar1[2],local_res8,1);
    uVar3 = (ulonglong)param_3;
  }
  if (uVar3 < *(uint *)((longlong)param_1 + 0x1c)) {
    do {
      (*(code *)param_1[1])(puVar1[1],&DAT_145b72e3a,1);
      (*(code *)param_1[1])(puVar1[2],&DAT_145b72e3b,1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < *(uint *)((longlong)param_1 + 0x1c));
  }
  return puVar1;
}



// FUNCTION 1436e1570 FUN_1436e1570 body=31 status=ok
// SIG undefined FUN_1436e1570(void)

void FUN_1436e1570(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x60) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 100) = 1;
  return;
}



// FUNCTION 1436e15a0 FUN_1436e15a0 body=278 status=ok
// SIG undefined FUN_1436e15a0(void)

undefined8 FUN_1436e15a0(undefined8 *param_1,byte *param_2,uint param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  if (4 < param_3) {
    uVar2 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_2 + 1) < 0x1000) {
      uVar2 = 0x1000;
    }
    bVar1 = *param_2;
    if (bVar1 < 0xe1) {
      iVar4 = (int)((ulonglong)bVar1 / 9);
      iVar7 = (uint)bVar1 + iVar4 * -9;
      iVar5 = (int)(((ulonglong)bVar1 / 9) / 5);
      iVar4 = iVar4 + iVar5 * -5;
      uVar6 = (0x300 << ((char)iVar4 + (char)iVar7 & 0x1fU)) + 0x736;
      if ((param_1[2] == 0) || (uVar6 != *(uint *)(param_1 + 0xd))) {
        (*(code *)param_4[1])(param_4);
        param_1[2] = 0;
        lVar3 = (*(code *)*param_4)(param_4,(ulonglong)uVar6 * 2);
        param_1[2] = lVar3;
        *(uint *)(param_1 + 0xd) = uVar6;
        if (lVar3 == 0) {
          return 2;
        }
      }
      *param_1 = CONCAT44(iVar4,iVar7);
      param_1[1] = CONCAT44(uVar2,iVar5);
      return 0;
    }
  }
  return 4;
}



// FUNCTION 1436e16c0 FUN_1436e16c0 body=36 status=ok
// SIG undefined FUN_1436e16c0(void)

void FUN_1436e16c0(longlong param_1,longlong param_2)

{
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



// FUNCTION 1436e16f0 FUN_1436e16f0 body=391 status=ok
// SIG undefined FUN_1436e16f0(void)

undefined8 FUN_1436e16f0(undefined8 *param_1,byte *param_2,uint param_3,undefined8 *param_4)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  
  if (param_3 < 5) {
    return 4;
  }
  uVar2 = *(uint *)(param_2 + 1);
  if (*(uint *)(param_2 + 1) < 0x1000) {
    uVar2 = 0x1000;
  }
  bVar1 = *param_2;
  if (0xe0 < bVar1) {
    return 4;
  }
  iVar5 = (int)((ulonglong)bVar1 / 9);
  iVar10 = (uint)bVar1 + iVar5 * -9;
  iVar7 = (int)(((ulonglong)bVar1 / 9) / 5);
  iVar5 = iVar5 + iVar7 * -5;
  uVar9 = (0x300 << ((char)iVar5 + (char)iVar10 & 0x1fU)) + 0x736;
  if ((param_1[2] == 0) || (uVar9 != *(uint *)(param_1 + 0xd))) {
    (*(code *)param_4[1])(param_4);
    param_1[2] = 0;
    lVar3 = (*(code *)*param_4)(param_4,(ulonglong)uVar9 * 2);
    param_1[2] = lVar3;
    *(uint *)(param_1 + 0xd) = uVar9;
    if (lVar3 != 0) goto LAB_1436e17c2;
LAB_1436e1838:
    uVar4 = 2;
  }
  else {
LAB_1436e17c2:
    uVar8 = 0xfff;
    if (uVar2 < 0x40000000) {
      if (0x3fffff < uVar2) {
        uVar8 = 0xfffff;
      }
    }
    else {
      uVar8 = 0x3fffff;
    }
    uVar6 = uVar2 + uVar8 & ~uVar8;
    uVar8 = (ulonglong)uVar2;
    if (uVar2 <= uVar6) {
      uVar8 = uVar6;
    }
    if ((param_1[3] == 0) || (uVar8 != param_1[7])) {
      (*(code *)param_4[1])(param_4);
      param_1[3] = 0;
      lVar3 = (*(code *)*param_4)(param_4,uVar8);
      param_1[3] = lVar3;
      if (lVar3 == 0) {
        (*(code *)param_4[1])(param_4,param_1[2]);
        param_1[2] = 0;
        goto LAB_1436e1838;
      }
    }
    param_1[7] = uVar8;
    uVar4 = 0;
    *param_1 = CONCAT44(iVar5,iVar10);
    param_1[1] = CONCAT44(uVar2,iVar7);
  }
  return uVar4;
}



// FUNCTION 1436e1880 FUN_1436e1880 body=63 status=ok
// SIG undefined FUN_1436e1880(void)

void FUN_1436e1880(longlong param_1,longlong param_2)

{
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10));
  *(undefined8 *)(param_1 + 0x10) = 0;
  (**(code **)(param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x18));
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1436e18d0 FUN_1436e18d0 body=788 status=ok
// SIG undefined FUN_1436e18d0(void)

bool FUN_1436e18d0(undefined4 *param_1,ulonglong param_2,undefined1 *param_3,ulonglong *param_4,
                  int param_5,undefined4 *param_6)

{
  undefined1 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  undefined2 *puVar10;
  ulonglong _Size;
  bool bVar11;
  
  _Size = *param_4;
  *param_4 = 0;
  FUN_1436e4000();
  *param_6 = 0;
  iVar4 = param_1[0x17];
  do {
    if (iVar4 == 0x112) {
      bVar11 = false;
      if (param_1[0xb] == 0) {
        *param_6 = 1;
        bVar11 = param_1[0xb] == 0;
      }
      return !bVar11;
    }
    if (param_1[0x18] != 0) {
      while ((_Size != 0 && ((uint)param_1[0x1b] < 5))) {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        *(undefined1 *)((ulonglong)(uint)param_1[0x1b] + 0x70 + (longlong)param_1) = uVar1;
        param_1[0x1b] = param_1[0x1b] + 1;
        *param_4 = *param_4 + 1;
        _Size = _Size - 1;
      }
      if ((uint)param_1[0x1b] < 5) goto LAB_1436e1bb7;
      if (*(char *)(param_1 + 0x1c) != '\0') {
        return true;
      }
      param_1[10] = 0xffffffff;
      param_1[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_1 + 0x71),
                                                *(undefined1 *)((longlong)param_1 + 0x72)),
                                       *(undefined1 *)((longlong)param_1 + 0x73)),
                              *(undefined1 *)(param_1 + 0x1d));
      param_1[0x18] = 0;
      param_1[0x1b] = 0;
    }
    bVar11 = false;
    if (param_2 <= *(ulonglong *)(param_1 + 0xc)) {
      if ((param_1[0x17] == 0) && (param_1[0xb] == 0)) {
        *param_6 = 4;
        return false;
      }
      if (param_5 == 0) {
        *param_6 = 2;
        return false;
      }
      if (param_1[0x17] != 0) goto LAB_1436e1b80;
      bVar11 = true;
    }
    if (param_1[0x19] != 0) {
      puVar10 = *(undefined2 **)(param_1 + 4);
      for (uVar6 = (ulonglong)((0x300 << ((char)param_1[1] + (char)*param_1 & 0x1fU)) + 0x736);
          uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar10 = 0x400;
        puVar10 = puVar10 + 1;
      }
      param_1[0x16] = 1;
      param_1[0x15] = 1;
      param_1[0x14] = 1;
      param_1[0x13] = 1;
      param_1[0x12] = 0;
      param_1[0x19] = 0;
    }
    uVar9 = param_1[0x1b];
    uVar6 = (ulonglong)uVar9;
    uVar2 = uVar6;
    uVar3 = 0;
    if (uVar9 == 0) {
      if ((_Size < 0x14) || (bVar11)) {
        iVar4 = FUN_1436e39c0(param_1,param_3,_Size);
        if (iVar4 == 0) {
          _guard_xfg_dispatch_icall_nop(param_1 + 0x1c,param_3,_Size);
          param_1[0x1b] = (int)_Size;
          *param_4 = *param_4 + _Size;
LAB_1436e1bb7:
          *param_6 = 3;
          return false;
        }
        puVar8 = param_3;
        if ((bVar11) && (iVar4 != 2)) goto LAB_1436e1b80;
      }
      else {
        puVar8 = param_3 + (_Size - 0x14);
      }
      *(undefined1 **)(param_1 + 8) = param_3;
      iVar4 = FUN_1436e3890(param_1,param_2,puVar8);
      if (iVar4 != 0) {
        return true;
      }
      puVar8 = *(undefined1 **)(param_1 + 8);
      uVar6 = (longlong)puVar8 - (longlong)param_3;
      *param_4 = *param_4 + uVar6;
    }
    else {
      while ((uVar7 = (uint)uVar3, uVar9 < 0x14 && (uVar9 = (uint)uVar2, uVar3 < _Size))) {
        uVar9 = uVar9 + 1;
        *(undefined1 *)(uVar6 + 0x70 + (longlong)param_1) = param_3[uVar3];
        uVar6 = uVar6 + 1;
        uVar2 = (ulonglong)uVar9;
        uVar3 = (ulonglong)(uVar7 + 1);
      }
      param_1[0x1b] = uVar9;
      if ((uVar9 < 0x14) || (bVar11)) {
        iVar4 = FUN_1436e39c0(param_1,param_1 + 0x1c,uVar9);
        if (iVar4 == 0) {
          *param_4 = *param_4 + uVar3;
          *param_6 = 3;
          return false;
        }
        if ((bVar11) && (iVar4 != 2)) {
LAB_1436e1b80:
          *param_6 = 2;
          return true;
        }
      }
      *(undefined4 **)(param_1 + 8) = param_1 + 0x1c;
      iVar4 = FUN_1436e3890(param_1,param_2);
      if (iVar4 != 0) {
        return true;
      }
      uVar5 = (param_1[8] - (int)param_1) - 0x70;
      if ((uVar9 < uVar5) || (uVar9 = uVar9 - uVar5, uVar7 < uVar9)) {
        return (bool)0xb;
      }
      uVar6 = (ulonglong)(uVar7 - uVar9);
      *param_4 = *param_4 + uVar6;
      puVar8 = param_3 + uVar6;
      param_1[0x1b] = 0;
    }
    _Size = _Size - uVar6;
    iVar4 = param_1[0x17];
    param_3 = puVar8;
  } while( true );
}



// FUNCTION 1436e1bf0 FUN_1436e1bf0 body=1249 status=ok
// SIG undefined FUN_1436e1bf0(void)

char FUN_1436e1bf0(undefined4 *param_1,void *param_2,ulonglong *param_3,undefined1 *param_4,
                  ulonglong *param_5,int param_6,undefined4 *param_7)

{
  undefined1 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  size_t _Size;
  uint uVar12;
  uint uVar13;
  undefined2 *puVar14;
  undefined1 *puVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 *_Src;
  char cVar18;
  ulonglong local_res8;
  void *local_res10;
  undefined1 *local_res20;
  
  uVar8 = *param_3;
  local_res8 = *param_5;
  *param_3 = 0;
  *param_5 = 0;
  local_res10 = param_2;
  local_res20 = param_4;
  do {
    lVar16 = 0;
    uVar9 = *(ulonglong *)(param_1 + 0xe);
    if (*(ulonglong *)(param_1 + 0xc) == uVar9) {
      *(undefined8 *)(param_1 + 0xc) = 0;
    }
    uVar2 = *(ulonglong *)(param_1 + 0xc);
    if (uVar9 - uVar2 < uVar8) {
      uVar17 = uVar9;
      iVar10 = 0;
    }
    else {
      uVar17 = uVar2 + uVar8;
      iVar10 = param_6;
    }
    uVar13 = param_1[0x17];
    uVar6 = (ulonglong)uVar13;
    if (uVar13 - 1 < 0x111) {
      lVar3 = *(longlong *)(param_1 + 6);
      uVar11 = param_1[0x13];
      if (uVar17 - uVar2 < uVar6) {
        uVar6 = uVar17 - uVar2 & 0xffffffff;
      }
      uVar12 = (uint)uVar6;
      if ((param_1[0x11] == 0) && ((uint)(param_1[3] - param_1[0x10]) <= uVar12)) {
        param_1[0x11] = param_1[3];
      }
      param_1[0x10] = param_1[0x10] + uVar12;
      param_1[0x17] = uVar13 - uVar12;
      uVar7 = uVar2;
      while (uVar12 != 0) {
        uVar5 = 0;
        if (uVar7 < uVar11) {
          uVar5 = uVar9;
        }
        *(undefined1 *)(uVar7 + lVar3) = *(undefined1 *)((uVar5 - uVar11) + uVar7 + lVar3);
        uVar7 = uVar7 + 1;
        uVar12 = (int)uVar6 - 1;
        uVar6 = (ulonglong)uVar12;
      }
      *(ulonglong *)(param_1 + 0xc) = uVar7;
    }
    *param_7 = 0;
    iVar4 = param_1[0x17];
    uVar9 = local_res8;
    _Src = local_res20;
    while (iVar4 != 0x112) {
      uVar6 = 0;
      cVar18 = '\0';
      if (param_1[0x18] != 0) {
        while ((uVar9 != 0 && ((uint)param_1[0x1b] < 5))) {
          lVar16 = lVar16 + 1;
          uVar1 = *_Src;
          _Src = _Src + 1;
          *(undefined1 *)((ulonglong)(uint)param_1[0x1b] + 0x70 + (longlong)param_1) = uVar1;
          param_1[0x1b] = param_1[0x1b] + 1;
          uVar9 = uVar9 - 1;
        }
        if ((uint)param_1[0x1b] < 5) {
          *param_7 = 3;
        }
        else {
          if (*(char *)(param_1 + 0x1c) == '\0') {
            param_1[10] = 0xffffffff;
            param_1[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((longlong)param_1 + 0x71),
                                                      *(undefined1 *)((longlong)param_1 + 0x72)),
                                             *(undefined1 *)((longlong)param_1 + 0x73)),
                                    *(undefined1 *)(param_1 + 0x1d));
            param_1[0x18] = 0;
            param_1[0x1b] = 0;
            goto LAB_1436e1d9b;
          }
LAB_1436e1f8f:
          cVar18 = '\x01';
        }
        goto LAB_1436e200f;
      }
LAB_1436e1d9b:
      if (uVar17 <= *(ulonglong *)(param_1 + 0xc)) {
        if ((param_1[0x17] == 0) && (param_1[0xb] == 0)) {
          *param_7 = 4;
        }
        else {
          if (iVar10 != 0) {
            if (param_1[0x17] == 0) {
              cVar18 = '\x01';
              goto LAB_1436e1dc9;
            }
LAB_1436e1f81:
            *param_7 = 2;
            goto LAB_1436e1f8f;
          }
          *param_7 = 2;
        }
        goto LAB_1436e200f;
      }
LAB_1436e1dc9:
      if (param_1[0x19] != 0) {
        puVar14 = *(undefined2 **)(param_1 + 4);
        for (uVar7 = (ulonglong)((0x300 << ((char)param_1[1] + (char)*param_1 & 0x1fU)) + 0x736);
            uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar14 = 0x400;
          puVar14 = puVar14 + 1;
        }
        param_1[0x16] = 1;
        param_1[0x15] = 1;
        param_1[0x14] = 1;
        param_1[0x13] = 1;
        param_1[0x12] = 0;
        param_1[0x19] = 0;
      }
      uVar13 = param_1[0x1b];
      uVar7 = (ulonglong)uVar13;
      uVar5 = uVar7;
      if (uVar13 == 0) {
        if ((uVar9 < 0x14) || (cVar18 != '\0')) {
          iVar4 = FUN_1436e39c0(param_1,_Src,uVar9);
          if (iVar4 == 0) {
            _guard_xfg_dispatch_icall_nop(param_1 + 0x1c,_Src,uVar9);
            param_1[0x1b] = (int)uVar9;
            uVar6 = uVar9;
LAB_1436e1fce:
            lVar16 = lVar16 + uVar6;
            cVar18 = '\0';
            *param_7 = 3;
            goto LAB_1436e200f;
          }
          puVar15 = _Src;
          if ((cVar18 != '\0') && (iVar4 != 2)) goto LAB_1436e1f81;
        }
        else {
          puVar15 = _Src + (uVar9 - 0x14);
        }
        *(undefined1 **)(param_1 + 8) = _Src;
        iVar4 = FUN_1436e3890(param_1,uVar17,puVar15);
        if (iVar4 != 0) goto LAB_1436e1f8f;
        uVar6 = *(longlong *)(param_1 + 8) - (longlong)_Src;
        _Src = *(undefined1 **)(param_1 + 8);
      }
      else {
        while( true ) {
          uVar11 = (uint)uVar6;
          uVar12 = (uint)uVar5;
          if ((0x13 < uVar13) || (uVar9 <= uVar6)) break;
          uVar13 = uVar12 + 1;
          *(undefined1 *)(uVar7 + 0x70 + (longlong)param_1) = _Src[uVar6];
          uVar6 = (ulonglong)(uVar11 + 1);
          uVar7 = uVar7 + 1;
          uVar5 = (ulonglong)uVar13;
        }
        param_1[0x1b] = uVar12;
        if ((uVar12 < 0x14) || (cVar18 != '\0')) {
          iVar4 = FUN_1436e39c0(param_1,param_1 + 0x1c,uVar5);
          if (iVar4 == 0) goto LAB_1436e1fce;
          if ((cVar18 != '\0') && (iVar4 != 2)) goto LAB_1436e1f81;
        }
        *(undefined4 **)(param_1 + 8) = param_1 + 0x1c;
        iVar4 = FUN_1436e3890(param_1,uVar17);
        if (iVar4 != 0) goto LAB_1436e1f8f;
        uVar13 = (param_1[8] - (int)param_1) - 0x70;
        if ((uVar12 < uVar13) || (uVar12 = uVar12 - uVar13, uVar11 < uVar12)) {
          cVar18 = '\v';
          goto LAB_1436e200f;
        }
        uVar11 = uVar11 - uVar12;
        _Src = _Src + uVar11;
        uVar6 = (ulonglong)uVar11;
        param_1[0x1b] = 0;
      }
      uVar9 = uVar9 - uVar6;
      lVar16 = lVar16 + uVar6;
      iVar4 = param_1[0x17];
    }
    if (param_1[0xb] == 0) {
      *param_7 = 1;
    }
    cVar18 = param_1[0xb] != 0;
LAB_1436e200f:
    local_res8 = local_res8 - lVar16;
    local_res20 = local_res20 + lVar16;
    *param_5 = *param_5 + lVar16;
    _Size = *(longlong *)(param_1 + 0xc) - uVar2;
    _guard_xfg_dispatch_icall_nop(local_res10,(void *)(*(longlong *)(param_1 + 6) + uVar2),_Size);
    local_res10 = (void *)((longlong)local_res10 + _Size);
    uVar8 = uVar8 - _Size;
    *param_3 = *param_3 + _Size;
    if (cVar18 != '\0') {
      return cVar18;
    }
    if ((_Size == 0) || (uVar8 == 0)) {
      return '\0';
    }
  } while( true );
}



// FUNCTION 1436e20e0 FUN_1436e20e0 body=315 status=ok
// SIG undefined FUN_1436e20e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436e20e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,ulonglong *param_4
                       ,undefined8 param_5,undefined4 param_6,undefined4 param_7,int *param_8,
                       longlong param_9)

{
  ulonglong uVar1;
  undefined8 uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  int *local_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_7c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  uVar1 = *param_4;
  uVar2 = *param_2;
  *param_4 = 0;
  *param_2 = 0;
  *param_8 = 0;
  if (uVar1 < 5) {
    uVar4 = 6;
  }
  else {
    local_d0 = 0;
    local_d8 = 0;
    uVar4 = FUN_1436e15a0(local_e8,param_5,param_6,param_9);
    if ((int)uVar4 == 0) {
      local_f0 = param_8;
      local_b8 = 0;
      local_8c = 0;
      local_7c = 0;
      local_a8 = 0;
      local_f8 = param_7;
      local_88 = 1;
      local_84 = 1;
      *param_4 = uVar1;
      local_d0 = param_1;
      local_b0 = uVar2;
      uVar3 = FUN_1436e18d0(local_e8,uVar2,param_3,param_4);
      uVar4 = (ulonglong)uVar3;
      *param_2 = local_b8;
      if ((uVar3 == 0) && (*param_8 == 3)) {
        uVar4 = 6;
      }
      (**(code **)(param_9 + 8))(param_9,local_d8);
    }
  }
  return uVar4;
}



// FUNCTION 1436e2260 FUN_1436e2260 body=5658 status=ok
// SIG undefined FUN_1436e2260(void)

undefined8 FUN_1436e2260(undefined4 *param_1,ulonglong param_2,byte *param_3)

{
  ulonglong uVar1;
  short *psVar2;
  undefined1 *puVar3;
  byte bVar4;
  ushort uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  uint uVar24;
  longlong lVar25;
  ulonglong uVar26;
  undefined1 *puVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  bool bVar33;
  uint local_res20;
  uint local_88;
  uint local_84;
  uint local_80;
  
  lVar10 = *(longlong *)(param_1 + 4);
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x16];
  iVar30 = 0;
  local_88 = param_1[0x13];
  uVar6 = *param_1;
  lVar11 = *(longlong *)(param_1 + 6);
  local_res20 = param_1[0x10];
  uVar32 = *(ulonglong *)(param_1 + 0xc);
  pbVar22 = *(byte **)(param_1 + 8);
  uVar28 = param_1[10];
  local_84 = param_1[0x14];
  local_80 = param_1[0x15];
  uVar7 = param_1[2];
  uVar8 = param_1[1];
  uVar12 = *(ulonglong *)(param_1 + 0xe);
  uVar9 = param_1[0x11];
  uVar13 = param_1[0xb];
  do {
    uVar18 = local_res20 & (1 << ((byte)uVar7 & 0x1f)) - 1U;
    lVar31 = (ulonglong)(uVar21 << 4) + (ulonglong)uVar18;
    uVar5 = *(ushort *)(lVar10 + lVar31 * 2);
    if (uVar28 < 0x1000000) {
      uVar13 = uVar13 << 8 | (uint)*pbVar22;
      uVar28 = uVar28 << 8;
      pbVar22 = pbVar22 + 1;
    }
    uVar29 = (uVar28 >> 0xb) * (uint)uVar5;
    if (uVar13 < uVar29) {
      lVar25 = lVar10 + 0xe6c;
      *(ushort *)(lVar10 + lVar31 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
      if ((local_res20 != 0) || (uVar9 != 0)) {
        uVar17 = uVar32;
        if (uVar32 == 0) {
          uVar17 = uVar12;
        }
        lVar25 = lVar25 + (ulonglong)
                          (((uint)(*(byte *)((uVar17 - 1) + lVar11) >> (8 - (byte)uVar6 & 0x1f)) +
                           ((local_res20 & (1 << ((byte)uVar8 & 0x1f)) - 1U) << ((byte)uVar6 & 0x1f)
                           )) * 0x300) * 2;
      }
      local_res20 = local_res20 + 1;
      if (uVar21 < 7) {
        uVar5 = *(ushort *)(lVar25 + 2);
        lVar31 = 3;
        uVar28 = 3;
        if (uVar21 < 4) {
          uVar28 = uVar21;
        }
        uVar21 = uVar21 - uVar28;
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 * 0x100;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          lVar31 = 2;
          *(ushort *)(lVar25 + 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar13 = uVar13 - uVar28;
          *(ushort *)(lVar25 + 2) = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = (int)lVar31 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = (int)lVar31 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = uVar18 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = uVar18 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = uVar18 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = uVar18 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2;
          uVar29 = uVar28;
        }
        else {
          uVar29 = uVar29 - uVar28;
          uVar18 = uVar18 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar25 + (ulonglong)uVar18 * 2);
        psVar2 = (short *)(lVar25 + (ulonglong)uVar18 * 2);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          *(char *)(uVar32 + lVar11) = (char)uVar18 * '\x02';
          uVar32 = uVar32 + 1;
        }
        else {
          uVar13 = uVar13 - uVar28;
          *psVar2 = uVar5 - (uVar5 >> 5);
          *(char *)(uVar32 + lVar11) = (char)uVar18 * '\x02' + '\x01';
          uVar32 = uVar32 + 1;
          uVar28 = uVar29 - uVar28;
        }
      }
      else {
        lVar31 = 3;
        iVar14 = 6;
        if (uVar21 < 10) {
          iVar14 = 3;
        }
        uVar21 = uVar21 - iVar14;
        uVar17 = 0;
        if (uVar32 < local_88) {
          uVar17 = uVar12;
        }
        bVar4 = *(byte *)((uVar17 - local_88) + uVar32 + lVar11);
        uVar18 = (uint)bVar4 + (uint)bVar4;
        uVar23 = uVar18 & 0x100;
        lVar16 = lVar25 + (ulonglong)uVar23 * 2;
        uVar5 = *(ushort *)(lVar16 + 0x202);
        if (uVar29 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar29 = uVar29 * 0x100;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar29 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          lVar31 = 2;
          uVar23 = ~uVar23;
          *(ushort *)(lVar16 + 0x202) = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar29 - uVar15;
          uVar13 = uVar13 - uVar15;
          *(ushort *)(lVar16 + 0x202) = uVar5 - (uVar5 >> 5);
        }
        uVar23 = uVar23 & 0x100;
        uVar29 = uVar23 & uVar18 * 2;
        lVar16 = (ulonglong)uVar29 + (ulonglong)uVar23 + lVar31;
        psVar2 = (short *)(lVar25 + lVar16 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar16 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar29 = ~uVar29;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = (int)lVar31 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar19 = (int)lVar31 * 2 + 1;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar29 = uVar29 & uVar23;
        uVar23 = uVar29 & uVar18 * 4;
        lVar31 = (ulonglong)uVar23 + (ulonglong)uVar29 + (ulonglong)uVar19;
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar23 = ~uVar23;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = uVar19 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar19 = uVar19 * 2 + 1;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar23 = uVar23 & uVar29;
        uVar29 = uVar23 & uVar18 * 8;
        lVar31 = (ulonglong)uVar29 + (ulonglong)uVar23 + (ulonglong)uVar19;
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar29 = ~uVar29;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = uVar19 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar19 = uVar19 * 2 + 1;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar29 = uVar29 & uVar23;
        uVar23 = uVar29 & uVar18 * 0x10;
        lVar31 = (ulonglong)uVar23 + (ulonglong)uVar29 + (ulonglong)uVar19;
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar23 = ~uVar23;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = uVar19 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar19 = uVar19 * 2 + 1;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar23 = uVar23 & uVar29;
        uVar29 = uVar23 & uVar18 * 0x20;
        lVar31 = (ulonglong)uVar29 + (ulonglong)uVar23 + (ulonglong)uVar19;
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar29 = ~uVar29;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = uVar19 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar19 = uVar19 * 2 + 1;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar29 = uVar29 & uVar23;
        uVar23 = uVar29 & uVar18 * 0x40;
        lVar31 = (ulonglong)uVar23 + (ulonglong)uVar29 + (ulonglong)uVar19;
        psVar2 = (short *)(lVar25 + lVar31 * 2);
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar15) {
          uVar23 = ~uVar23;
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar19 = uVar19 * 2;
          uVar28 = uVar15;
        }
        else {
          uVar28 = uVar28 - uVar15;
          uVar13 = uVar13 - uVar15;
          *psVar2 = uVar5 - (uVar5 >> 5);
          uVar19 = uVar19 * 2 + 1;
        }
        lVar31 = (ulonglong)(uVar18 * 0x80 & uVar23 & uVar29) + (ulonglong)(uVar23 & uVar29) +
                 (ulonglong)uVar19;
        uVar5 = *(ushort *)(lVar25 + lVar31 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar18 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar18) {
          *(ushort *)(lVar25 + lVar31 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
          *(char *)(uVar32 + lVar11) = (char)uVar19 * '\x02';
          uVar32 = uVar32 + 1;
          uVar28 = uVar18;
        }
        else {
          uVar28 = uVar28 - uVar18;
          uVar13 = uVar13 - uVar18;
          *(ushort *)(lVar25 + lVar31 * 2) = uVar5 - (uVar5 >> 5);
          *(char *)(uVar32 + lVar11) = (char)uVar19 * '\x02' + '\x01';
          uVar32 = uVar32 + 1;
        }
      }
    }
    else {
      uVar28 = uVar28 - uVar29;
      uVar13 = uVar13 - uVar29;
      uVar17 = (ulonglong)uVar21;
      *(ushort *)(lVar10 + lVar31 * 2) = uVar5 - (uVar5 >> 5);
      uVar5 = *(ushort *)(lVar10 + 0x180 + uVar17 * 2);
      if (uVar28 < 0x1000000) {
        uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
        uVar28 = uVar28 * 0x100;
        pbVar22 = pbVar22 + 1;
      }
      uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
      uVar29 = uVar24;
      if (uVar13 < uVar23) {
        *(ushort *)(lVar10 + 0x180 + uVar17 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
        uVar21 = uVar21 + 0xc;
        lVar31 = 0x664;
      }
      else {
        uVar28 = uVar28 - uVar23;
        uVar13 = uVar13 - uVar23;
        *(ushort *)(lVar10 + 0x180 + uVar17 * 2) = uVar5 - (uVar5 >> 5);
        if ((uVar9 == 0) && (local_res20 == 0)) {
          return 1;
        }
        uVar5 = *(ushort *)(lVar10 + 0x198 + uVar17 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
          uVar28 = uVar28 * 0x100;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *(ushort *)(lVar10 + 0x198 + uVar17 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar5 = *(ushort *)(lVar10 + 0x1e0 + lVar31 * 2);
          if (uVar23 < 0x1000000) {
            uVar13 = uVar13 << 8 | (uint)*pbVar22;
            uVar23 = uVar23 * 0x100;
            pbVar22 = pbVar22 + 1;
          }
          uVar28 = (uVar23 >> 0xb) * (uint)uVar5;
          if (uVar13 < uVar28) {
            *(ushort *)(lVar10 + 0x1e0 + lVar31 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
            uVar17 = 0;
            if (uVar32 < local_88) {
              uVar17 = uVar12;
            }
            local_res20 = local_res20 + 1;
            *(undefined1 *)(uVar32 + lVar11) =
                 *(undefined1 *)((uVar17 - local_88) + uVar32 + lVar11);
            uVar32 = uVar32 + 1;
            bVar33 = uVar21 < 7;
            uVar21 = 0xb;
            if (bVar33) {
              uVar21 = 9;
            }
            goto LAB_1436e3802;
          }
          uVar23 = uVar23 - uVar28;
          uVar13 = uVar13 - uVar28;
          *(ushort *)(lVar10 + 0x1e0 + lVar31 * 2) = uVar5 - (uVar5 >> 5);
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar13 = uVar13 - uVar23;
          *(ushort *)(lVar10 + 0x198 + uVar17 * 2) = uVar5 - (uVar5 >> 5);
          uVar5 = *(ushort *)(lVar10 + 0x1b0 + uVar17 * 2);
          if (uVar28 < 0x1000000) {
            uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
            uVar28 = uVar28 * 0x100;
            pbVar22 = pbVar22 + 1;
          }
          uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
          if (uVar13 < uVar23) {
            *(ushort *)(lVar10 + 0x1b0 + uVar17 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
            uVar24 = local_84;
          }
          else {
            uVar28 = uVar28 - uVar23;
            uVar13 = uVar13 - uVar23;
            *(ushort *)(lVar10 + 0x1b0 + uVar17 * 2) = uVar5 - (uVar5 >> 5);
            uVar5 = *(ushort *)(lVar10 + 0x1c8 + uVar17 * 2);
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
              uVar28 = uVar28 * 0x100;
              pbVar22 = pbVar22 + 1;
            }
            uVar15 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar15) {
              *(ushort *)(lVar10 + 0x1c8 + uVar17 * 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar23 = uVar15;
              uVar24 = local_80;
            }
            else {
              uVar23 = uVar28 - uVar15;
              uVar13 = uVar13 - uVar15;
              *(ushort *)(lVar10 + 0x1c8 + uVar17 * 2) = uVar5 - (uVar5 >> 5);
              uVar29 = local_80;
            }
            local_80 = local_84;
          }
          local_84 = local_88;
          local_88 = uVar24;
        }
        bVar33 = uVar21 < 7;
        uVar21 = 0xb;
        if (bVar33) {
          uVar21 = 8;
        }
        lVar31 = 0xa68;
      }
      uVar19 = local_80;
      uVar15 = local_84;
      uVar5 = *(ushort *)(lVar31 + lVar10);
      psVar2 = (short *)(lVar31 + lVar10);
      if (uVar23 < 0x1000000) {
        uVar13 = uVar13 << 8 | (uint)*pbVar22;
        uVar23 = uVar23 << 8;
        pbVar22 = pbVar22 + 1;
      }
      uVar24 = (uVar23 >> 0xb) * (uint)uVar5;
      if (uVar13 < uVar24) {
        uVar17 = (ulonglong)(uVar18 * 8);
        lVar31 = uVar17 + 2;
        *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
        uVar5 = psVar2[uVar17 + 3];
        if (uVar24 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar24 = uVar24 * 0x100;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar24 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          lVar25 = 2;
          psVar2[uVar17 + 3] = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar24 = uVar28;
        }
        else {
          uVar24 = uVar24 - uVar28;
          uVar13 = uVar13 - uVar28;
          lVar25 = 3;
          psVar2[uVar17 + 3] = uVar5 - (uVar5 >> 5);
        }
        uVar5 = psVar2[lVar31 + lVar25];
        if (uVar24 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar24 = uVar24 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar24 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          psVar2[lVar31 + lVar25] = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = (int)lVar25 * 2;
          uVar24 = uVar28;
        }
        else {
          uVar24 = uVar24 - uVar28;
          uVar18 = (int)lVar25 * 2 + 1;
          uVar13 = uVar13 - uVar28;
          psVar2[lVar31 + lVar25] = uVar5 - (uVar5 >> 5);
        }
        uVar5 = psVar2[lVar31 + (ulonglong)uVar18];
        if (uVar24 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar24 = uVar24 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar28 = (uVar24 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar28) {
          psVar2[lVar31 + (ulonglong)uVar18] = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar18 = uVar18 * 2 - 8;
        }
        else {
          uVar13 = uVar13 - uVar28;
          psVar2[lVar31 + (ulonglong)uVar18] = uVar5 - (uVar5 >> 5);
          uVar18 = uVar18 * 2 - 7;
          uVar28 = uVar24 - uVar28;
        }
      }
      else {
        uVar23 = uVar23 - uVar24;
        uVar13 = uVar13 - uVar24;
        *psVar2 = uVar5 - (uVar5 >> 5);
        uVar5 = psVar2[1];
        if (uVar23 < 0x1000000) {
          uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
          uVar23 = uVar23 * 0x100;
          pbVar22 = pbVar22 + 1;
        }
        uVar24 = (uVar23 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar24) {
          uVar17 = (ulonglong)(uVar18 * 8);
          lVar31 = uVar17 + 0x82;
          psVar2[1] = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar5 = psVar2[uVar17 + 0x83];
          if (uVar24 < 0x1000000) {
            uVar13 = uVar13 << 8 | (uint)*pbVar22;
            uVar24 = uVar24 * 0x100;
            pbVar22 = pbVar22 + 1;
          }
          uVar18 = (uVar24 >> 0xb) * (uint)uVar5;
          if (uVar13 < uVar18) {
            lVar25 = 2;
            psVar2[uVar17 + 0x83] = (short)(0x800 - uVar5 >> 5) + uVar5;
            uVar28 = uVar18;
          }
          else {
            uVar28 = uVar24 - uVar18;
            uVar13 = uVar13 - uVar18;
            lVar25 = 3;
            psVar2[uVar17 + 0x83] = uVar5 - (uVar5 >> 5);
          }
          uVar5 = psVar2[lVar31 + lVar25];
          if (uVar28 < 0x1000000) {
            uVar13 = uVar13 << 8 | (uint)*pbVar22;
            uVar28 = uVar28 << 8;
            pbVar22 = pbVar22 + 1;
          }
          uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
          if (uVar13 < uVar24) {
            psVar2[lVar31 + lVar25] = (short)(0x800 - uVar5 >> 5) + uVar5;
            uVar23 = (int)lVar25 * 2;
            uVar28 = uVar24;
          }
          else {
            uVar28 = uVar28 - uVar24;
            uVar23 = (int)lVar25 * 2 + 1;
            uVar13 = uVar13 - uVar24;
            psVar2[lVar31 + lVar25] = uVar5 - (uVar5 >> 5);
          }
          uVar5 = psVar2[lVar31 + (ulonglong)uVar23];
          if (uVar28 < 0x1000000) {
            uVar13 = uVar13 << 8 | (uint)*pbVar22;
            uVar28 = uVar28 << 8;
            pbVar22 = pbVar22 + 1;
          }
          uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
          if (uVar13 < uVar24) {
            uVar18 = uVar23 * 2;
            psVar2[lVar31 + (ulonglong)uVar23] = (short)(0x800 - uVar5 >> 5) + uVar5;
            uVar28 = uVar24;
          }
          else {
            uVar28 = uVar28 - uVar24;
            uVar18 = uVar23 * 2 + 1;
            uVar13 = uVar13 - uVar24;
            psVar2[lVar31 + (ulonglong)uVar23] = uVar5 - (uVar5 >> 5);
          }
        }
        else {
          uVar28 = uVar23 - uVar24;
          uVar13 = uVar13 - uVar24;
          uVar17 = 1;
          psVar2[1] = uVar5 - (uVar5 >> 5);
          do {
            uVar5 = psVar2[uVar17 + 0x102];
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 << 8 | (uint)*pbVar22;
              uVar28 = uVar28 << 8;
              pbVar22 = pbVar22 + 1;
            }
            uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar24) {
              psVar2[uVar17 + 0x102] = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar18 = (int)uVar17 * 2;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar28 - uVar24;
              uVar18 = (int)uVar17 * 2 + 1;
              uVar13 = uVar13 - uVar24;
              psVar2[uVar17 + 0x102] = uVar5 - (uVar5 >> 5);
            }
            uVar17 = (ulonglong)uVar18;
          } while (uVar18 < 0x100);
          uVar18 = uVar18 - 0xf0;
        }
      }
      uVar24 = uVar29;
      if (0xb < uVar21) {
        uVar24 = 3;
        uVar23 = 3;
        if (uVar18 < 4) {
          uVar23 = uVar18;
        }
        lVar31 = (ulonglong)(uVar23 << 6) + 0x1b0;
        uVar5 = *(ushort *)(lVar10 + 2 + lVar31 * 2);
        lVar31 = lVar10 + lVar31 * 2;
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          uVar24 = 2;
          *(ushort *)(lVar31 + 2) = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar13 = uVar13 - uVar23;
          *(ushort *)(lVar31 + 2) = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar31 + (ulonglong)uVar24 * 2);
        psVar2 = (short *)(lVar31 + (ulonglong)uVar24 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar24 = uVar24 * 2;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar24 = uVar24 * 2 + 1;
          uVar13 = uVar13 - uVar23;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar31 + (ulonglong)uVar24 * 2);
        psVar2 = (short *)(lVar31 + (ulonglong)uVar24 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar24 = uVar24 * 2;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar24 = uVar24 * 2 + 1;
          uVar13 = uVar13 - uVar23;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar31 + (ulonglong)uVar24 * 2);
        psVar2 = (short *)(lVar31 + (ulonglong)uVar24 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar24 = uVar24 * 2;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar24 = uVar24 * 2 + 1;
          uVar13 = uVar13 - uVar23;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar31 + (ulonglong)uVar24 * 2);
        psVar2 = (short *)(lVar31 + (ulonglong)uVar24 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          uVar24 = uVar24 * 2;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          uVar24 = uVar24 * 2 + 1;
          uVar13 = uVar13 - uVar23;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar5 = *(ushort *)(lVar31 + (ulonglong)uVar24 * 2);
        psVar2 = (short *)(lVar31 + (ulonglong)uVar24 * 2);
        if (uVar28 < 0x1000000) {
          uVar13 = uVar13 << 8 | (uint)*pbVar22;
          uVar28 = uVar28 << 8;
          pbVar22 = pbVar22 + 1;
        }
        uVar23 = (uVar28 >> 0xb) * (uint)uVar5;
        if (uVar13 < uVar23) {
          *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
          iVar30 = uVar24 * 2;
          uVar28 = uVar23;
        }
        else {
          uVar28 = uVar28 - uVar23;
          iVar30 = uVar24 * 2 + 1;
          uVar13 = uVar13 - uVar23;
          *psVar2 = uVar5 - (uVar5 >> 5);
        }
        uVar23 = iVar30 - 0x40;
        if (3 < uVar23) {
          uVar17 = (ulonglong)uVar23;
          iVar30 = (uVar23 >> 1) - 1;
          uVar24 = uVar23 & 1 | 2;
          if (uVar23 < 0xe) {
            uVar23 = uVar24 << ((byte)iVar30 & 0x1f);
            lVar31 = lVar10 + ((uVar23 - uVar17) + 0x2af) * 2;
            uVar24 = 1;
            uVar17 = 1;
            do {
              uVar5 = *(ushort *)(lVar31 + uVar17 * 2);
              psVar2 = (short *)(lVar31 + uVar17 * 2);
              if (uVar28 < 0x1000000) {
                uVar13 = uVar13 << 8 | (uint)*pbVar22;
                uVar28 = uVar28 << 8;
                pbVar22 = pbVar22 + 1;
              }
              uVar29 = (uVar28 >> 0xb) * (uint)uVar5;
              if (uVar13 < uVar29) {
                *psVar2 = (short)(0x800 - uVar5 >> 5) + uVar5;
                uVar20 = (int)uVar17 * 2;
                uVar28 = uVar29;
              }
              else {
                uVar28 = uVar28 - uVar29;
                uVar20 = (int)uVar17 * 2 + 1;
                uVar13 = uVar13 - uVar29;
                *psVar2 = uVar5 - (uVar5 >> 5);
                uVar23 = uVar23 | uVar24;
              }
              uVar17 = (ulonglong)uVar20;
              uVar24 = uVar24 * 2;
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
          }
          else {
            iVar30 = (uVar23 >> 1) - 5;
            do {
              if (uVar28 < 0x1000000) {
                uVar13 = uVar13 << 8 | (uint)*pbVar22;
                uVar28 = uVar28 << 8;
                pbVar22 = pbVar22 + 1;
              }
              uVar28 = uVar28 >> 1;
              uVar23 = (int)(uVar13 - uVar28) >> 0x1f;
              uVar24 = uVar24 * 2 + 1 + uVar23;
              uVar13 = (uVar13 - uVar28) + (uVar23 & uVar28);
              iVar30 = iVar30 + -1;
            } while (iVar30 != 0);
            uVar5 = *(ushort *)(lVar10 + 0x646);
            uVar23 = uVar24 * 0x10;
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 * 0x100 | (uint)*pbVar22;
              uVar28 = uVar28 << 8;
              pbVar22 = pbVar22 + 1;
            }
            uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar24) {
              uVar20 = 2;
              *(ushort *)(lVar10 + 0x646) = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar28 - uVar24;
              uVar13 = uVar13 - uVar24;
              uVar20 = 3;
              *(ushort *)(lVar10 + 0x646) = uVar5 - (uVar5 >> 5);
              uVar23 = uVar23 | 1;
            }
            lVar31 = lVar10 + (ulonglong)uVar20 * 2;
            uVar5 = *(ushort *)(lVar31 + 0x644);
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 << 8 | (uint)*pbVar22;
              uVar28 = uVar28 << 8;
              pbVar22 = pbVar22 + 1;
            }
            uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar24) {
              *(ushort *)(lVar31 + 0x644) = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar20 = uVar20 * 2;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar28 - uVar24;
              uVar20 = uVar20 * 2 + 1;
              uVar13 = uVar13 - uVar24;
              *(ushort *)(lVar31 + 0x644) = uVar5 - (uVar5 >> 5);
              uVar23 = uVar23 | 2;
            }
            lVar31 = lVar10 + (ulonglong)uVar20 * 2;
            uVar5 = *(ushort *)(lVar31 + 0x644);
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 << 8 | (uint)*pbVar22;
              uVar28 = uVar28 << 8;
              pbVar22 = pbVar22 + 1;
            }
            uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar24) {
              *(ushort *)(lVar31 + 0x644) = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar20 = uVar20 * 2;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar28 - uVar24;
              uVar20 = uVar20 * 2 + 1;
              uVar13 = uVar13 - uVar24;
              *(ushort *)(lVar31 + 0x644) = uVar5 - (uVar5 >> 5);
              uVar23 = uVar23 | 4;
            }
            lVar31 = lVar10 + (ulonglong)uVar20 * 2;
            uVar5 = *(ushort *)(lVar31 + 0x644);
            if (uVar28 < 0x1000000) {
              uVar13 = uVar13 << 8 | (uint)*pbVar22;
              uVar28 = uVar28 << 8;
              pbVar22 = pbVar22 + 1;
            }
            uVar24 = (uVar28 >> 0xb) * (uint)uVar5;
            if (uVar13 < uVar24) {
              *(ushort *)(lVar31 + 0x644) = (short)(0x800 - uVar5 >> 5) + uVar5;
              uVar28 = uVar24;
            }
            else {
              uVar28 = uVar28 - uVar24;
              uVar13 = uVar13 - uVar24;
              *(ushort *)(lVar31 + 0x644) = uVar5 - (uVar5 >> 5);
              uVar23 = uVar23 | 8;
            }
            if (uVar23 == 0xffffffff) {
              iVar30 = uVar18 + 0x112;
              uVar21 = uVar21 - 0xc;
LAB_1436e3829:
              if (uVar28 < 0x1000000) {
                uVar13 = uVar13 << 8 | (uint)*pbVar22;
                uVar28 = uVar28 << 8;
                pbVar22 = pbVar22 + 1;
              }
              param_1[0xb] = uVar13;
              *(byte **)(param_1 + 8) = pbVar22;
              param_1[10] = uVar28;
              param_1[0x17] = iVar30;
              *(ulonglong *)(param_1 + 0xc) = uVar32;
              param_1[0x10] = local_res20;
              param_1[0x14] = local_84;
              param_1[0x13] = local_88;
              param_1[0x15] = local_80;
              param_1[0x16] = uVar29;
              param_1[0x12] = uVar21;
              return 0;
            }
          }
        }
        local_84 = local_88;
        local_80 = uVar15;
        uVar24 = uVar9;
        if (uVar9 == 0) {
          uVar24 = local_res20;
        }
        if (uVar24 <= uVar23) goto LAB_1436e3706;
        bVar33 = uVar21 < 0x13;
        uVar21 = 10;
        uVar24 = uVar19;
        local_88 = uVar23 + 1;
        if (bVar33) {
          uVar21 = 7;
        }
      }
      uVar18 = uVar18 + 2;
      uVar17 = param_2 - uVar32;
      if (uVar17 == 0) {
LAB_1436e3706:
        *(ulonglong *)(param_1 + 0xc) = uVar32;
        return 1;
      }
      uVar26 = (ulonglong)uVar18;
      if (uVar17 < uVar18) {
        uVar26 = uVar17 & 0xffffffff;
      }
      uVar17 = 0;
      if (uVar32 < local_88) {
        uVar17 = uVar12;
      }
      local_res20 = local_res20 + (int)uVar26;
      uVar17 = (uVar17 - local_88) + uVar32;
      iVar30 = uVar18 - (int)uVar26;
      if (uVar12 - uVar17 < uVar26) {
        do {
          *(undefined1 *)(uVar32 + lVar11) = *(undefined1 *)(uVar17 + lVar11);
          uVar1 = uVar17 + 1;
          uVar32 = uVar32 + 1;
          uVar17 = 0;
          if (uVar1 != uVar12) {
            uVar17 = uVar1;
          }
          uVar18 = (int)uVar26 - 1;
          uVar26 = (ulonglong)uVar18;
        } while (uVar18 != 0);
      }
      else {
        puVar27 = (undefined1 *)(uVar32 + lVar11);
        lVar31 = uVar17 - uVar32;
        puVar3 = puVar27 + uVar26;
        uVar32 = uVar32 + uVar26;
        do {
          *puVar27 = puVar27[lVar31];
          puVar27 = puVar27 + 1;
        } while (puVar27 != puVar3);
      }
    }
LAB_1436e3802:
    uVar29 = uVar24;
    if ((param_2 <= uVar32) || (param_3 <= pbVar22)) goto LAB_1436e3829;
  } while( true );
}



// FUNCTION 1436e3890 FUN_1436e3890 body=293 status=ok
// SIG undefined FUN_1436e3890(void)

undefined8 FUN_1436e3890(longlong param_1,ulonglong param_2,ulonglong param_3)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  
  do {
    uVar7 = param_2;
    if (*(int *)(param_1 + 0x44) == 0) {
      uVar8 = (ulonglong)(uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x40));
      if (uVar8 < param_2 - *(longlong *)(param_1 + 0x30)) {
        uVar7 = uVar8 + *(longlong *)(param_1 + 0x30);
      }
    }
    uVar5 = FUN_1436e2260(param_1,uVar7,param_3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if ((*(int *)(param_1 + 0x44) == 0) && (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 0x40)))
    {
      *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0xc);
    }
    uVar1 = *(uint *)(param_1 + 0x5c);
    uVar7 = (ulonglong)uVar1;
    if (uVar1 - 1 < 0x111) {
      uVar8 = *(ulonglong *)(param_1 + 0x30);
      lVar3 = *(longlong *)(param_1 + 0x18);
      lVar4 = *(longlong *)(param_1 + 0x38);
      uVar2 = *(uint *)(param_1 + 0x4c);
      if (param_2 - uVar8 < uVar7) {
        uVar7 = param_2 - uVar8 & 0xffffffff;
      }
      uVar9 = (uint)uVar7;
      if ((*(int *)(param_1 + 0x44) == 0) &&
         ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x40)) <= uVar9)) {
        *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0xc);
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar9;
      *(uint *)(param_1 + 0x5c) = uVar1 - uVar9;
      while (uVar9 != 0) {
        lVar6 = 0;
        if (uVar8 < uVar2) {
          lVar6 = lVar4;
        }
        *(undefined1 *)(uVar8 + lVar3) = *(undefined1 *)((lVar6 - (ulonglong)uVar2) + uVar8 + lVar3)
        ;
        uVar8 = uVar8 + 1;
        uVar9 = (int)uVar7 - 1;
        uVar7 = (ulonglong)uVar9;
      }
      *(ulonglong *)(param_1 + 0x30) = uVar8;
    }
  } while (((*(ulonglong *)(param_1 + 0x30) < param_2) && (*(ulonglong *)(param_1 + 0x20) < param_3)
           ) && (*(uint *)(param_1 + 0x5c) < 0x112));
  if (0x112 < *(uint *)(param_1 + 0x5c)) {
    *(undefined4 *)(param_1 + 0x5c) = 0x112;
  }
  return 0;
}



// FUNCTION 1436e39c0 FUN_1436e39c0 body=1594 status=ok
// SIG undefined FUN_1436e39c0(void)

undefined4 FUN_1436e39c0(char *param_1,byte *param_2,longlong param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  uint uVar15;
  undefined4 local_res8;
  
  uVar11 = *(uint *)(param_1 + 0x28);
  pbVar1 = param_2 + param_3;
  lVar10 = *(longlong *)(param_1 + 0x10);
  uVar9 = *(uint *)(param_1 + 0x48);
  uVar7 = (ulonglong)uVar9;
  uVar14 = 1;
  uVar5 = *(uint *)(param_1 + 0x40);
  uVar2 = *(uint *)(param_1 + 0x2c);
  uVar4 = 1;
  uVar15 = (1 << ((byte)*(undefined4 *)(param_1 + 8) & 0x1f)) - 1U & uVar5;
  lVar8 = (ulonglong)(uVar9 << 4) + (ulonglong)uVar15;
  if (uVar11 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar2 = uVar2 << 8 | (uint)*param_2;
    uVar11 = uVar11 << 8;
    param_2 = param_2 + 1;
  }
  uVar3 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + lVar8 * 2);
  if (uVar2 < uVar3) {
    lVar10 = lVar10 + 0xe6c;
    if ((*(int *)(param_1 + 0x44) != 0) || (uVar5 != 0)) {
      lVar8 = *(longlong *)(param_1 + 0x30);
      if (lVar8 == 0) {
        lVar8 = *(longlong *)(param_1 + 0x38);
      }
      lVar10 = lVar10 + (ulonglong)
                        (((uint)(*(byte *)(*(longlong *)(param_1 + 0x18) + -1 + lVar8) >>
                                (8U - *param_1 & 0x1f)) +
                         (((1 << ((byte)*(undefined4 *)(param_1 + 4) & 0x1f)) - 1U & uVar5) <<
                         ((byte)*(undefined4 *)param_1 & 0x1f))) * 0x300) * 2;
    }
    if (uVar9 < 7) {
      uVar7 = 1;
      do {
        if (uVar3 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar2 = uVar2 << 8 | (uint)*param_2;
          uVar3 = uVar3 << 8;
          param_2 = param_2 + 1;
        }
        uVar4 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar7 * 2);
        if (uVar2 < uVar4) {
          uVar11 = (int)uVar7 * 2;
          uVar3 = uVar4;
        }
        else {
          uVar3 = uVar3 - uVar4;
          uVar11 = (int)uVar7 * 2 + 1;
          uVar2 = uVar2 - uVar4;
        }
        uVar7 = (ulonglong)uVar11;
      } while (uVar11 < 0x100);
    }
    else {
      if (*(ulonglong *)(param_1 + 0x30) < (ulonglong)*(uint *)(param_1 + 0x4c)) {
        lVar8 = *(longlong *)(param_1 + 0x38);
      }
      else {
        lVar8 = 0;
      }
      uVar7 = 1;
      uVar4 = (uint)*(byte *)((*(longlong *)(param_1 + 0x18) - (ulonglong)*(uint *)(param_1 + 0x4c))
                              + *(ulonglong *)(param_1 + 0x30) + lVar8);
      uVar11 = 0x100;
      while( true ) {
        uVar4 = uVar4 * 2;
        uVar9 = uVar11 & uVar4;
        if (uVar3 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar2 = uVar2 << 8 | (uint)*param_2;
          uVar3 = uVar3 << 8;
          param_2 = param_2 + 1;
        }
        uVar5 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar10 + (uVar9 + uVar7 + (ulonglong)uVar11) * 2)
        ;
        if (uVar2 < uVar5) {
          uVar15 = (int)uVar7 * 2;
          uVar9 = ~uVar9;
          uVar3 = uVar5;
        }
        else {
          uVar3 = uVar3 - uVar5;
          uVar15 = (int)uVar7 * 2 + 1;
          uVar2 = uVar2 - uVar5;
        }
        uVar7 = (ulonglong)uVar15;
        if (0xff < uVar15) break;
        uVar11 = uVar11 & uVar9;
      }
    }
    local_res8 = 1;
    goto LAB_1436e3fd2;
  }
  uVar11 = uVar11 - uVar3;
  uVar2 = uVar2 - uVar3;
  if (uVar11 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar2 = uVar2 * 0x100 | (uint)*param_2;
    uVar11 = uVar11 * 0x100;
    param_2 = param_2 + 1;
  }
  uVar5 = 0;
  uVar9 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + 0x180 + uVar7 * 2);
  if (uVar2 < uVar9) {
    local_res8 = 2;
    lVar8 = 0x664;
    uVar11 = uVar5;
  }
  else {
    uVar11 = uVar11 - uVar9;
    uVar2 = uVar2 - uVar9;
    local_res8 = 3;
    if (uVar11 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar2 = uVar2 * 0x100 | (uint)*param_2;
      uVar11 = uVar11 * 0x100;
      param_2 = param_2 + 1;
    }
    uVar3 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + 0x198 + uVar7 * 2);
    if (uVar2 < uVar3) {
      if (uVar3 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar2 = uVar2 << 8 | (uint)*param_2;
        uVar3 = uVar3 * 0x100;
        param_2 = param_2 + 1;
      }
      uVar11 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar10 + 0x1e0 + lVar8 * 2);
      if (uVar2 < uVar11) {
        if ((uVar11 < 0x1000000) && (pbVar1 <= param_2)) {
          return 0;
        }
        return 3;
      }
LAB_1436e3d3e:
      uVar9 = uVar3 - uVar11;
      uVar2 = uVar2 - uVar11;
    }
    else {
      uVar11 = uVar11 - uVar3;
      uVar2 = uVar2 - uVar3;
      if (uVar11 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar2 = uVar2 * 0x100 | (uint)*param_2;
        uVar11 = uVar11 * 0x100;
        param_2 = param_2 + 1;
      }
      uVar9 = (uVar11 >> 0xb) * (uint)*(ushort *)(lVar10 + 0x1b0 + uVar7 * 2);
      if (uVar9 <= uVar2) {
        uVar3 = uVar11 - uVar9;
        uVar2 = uVar2 - uVar9;
        if (uVar3 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar2 = uVar2 * 0x100 | (uint)*param_2;
          uVar3 = uVar3 * 0x100;
          param_2 = param_2 + 1;
        }
        uVar9 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar10 + 0x1c8 + uVar7 * 2);
        uVar11 = uVar9;
        if (uVar9 <= uVar2) goto LAB_1436e3d3e;
      }
    }
    lVar8 = 0xa68;
    uVar11 = 0xc;
  }
  lVar13 = lVar8 + lVar10;
  if (uVar9 < 0x1000000) {
    if (pbVar1 <= param_2) {
      return 0;
    }
    uVar2 = uVar2 << 8 | (uint)*param_2;
    uVar9 = uVar9 << 8;
    param_2 = param_2 + 1;
  }
  uVar3 = (uVar9 >> 0xb) * (uint)*(ushort *)(lVar8 + lVar10);
  if (uVar2 < uVar3) {
    uVar9 = 8;
    lVar13 = lVar13 + ((ulonglong)(uVar15 * 8) + 2) * 2;
  }
  else {
    uVar9 = uVar9 - uVar3;
    uVar2 = uVar2 - uVar3;
    if (uVar9 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar2 = uVar2 * 0x100 | (uint)*param_2;
      uVar9 = uVar9 * 0x100;
      param_2 = param_2 + 1;
    }
    uVar6 = (uVar9 >> 0xb) * (uint)*(ushort *)(lVar13 + 2);
    if (uVar2 < uVar6) {
      uVar9 = 8;
      lVar13 = lVar13 + ((ulonglong)(uVar15 * 8) + 0x82) * 2;
      uVar5 = 8;
      uVar3 = uVar6;
    }
    else {
      uVar3 = uVar9 - uVar6;
      lVar13 = lVar13 + 0x204;
      uVar2 = uVar2 - uVar6;
      uVar5 = 0x10;
      uVar9 = 0x100;
    }
  }
  do {
    if (uVar3 < 0x1000000) {
      if (pbVar1 <= param_2) {
        return 0;
      }
      uVar2 = uVar2 << 8 | (uint)*param_2;
      uVar3 = uVar3 << 8;
      param_2 = param_2 + 1;
    }
    uVar15 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar13 + (ulonglong)uVar4 * 2);
    if (uVar2 < uVar15) {
      uVar4 = uVar4 * 2;
      uVar3 = uVar15;
    }
    else {
      uVar3 = uVar3 - uVar15;
      uVar4 = uVar4 * 2 + 1;
      uVar2 = uVar2 - uVar15;
    }
  } while (uVar4 < uVar9);
  uVar4 = uVar4 + (uVar5 - uVar9);
  if (uVar11 < 4) {
    uVar7 = 1;
    uVar11 = 3;
    if (uVar4 < 4) {
      uVar11 = uVar4;
    }
    do {
      if (uVar3 < 0x1000000) {
        if (pbVar1 <= param_2) {
          return 0;
        }
        uVar2 = uVar2 << 8 | (uint)*param_2;
        uVar3 = uVar3 << 8;
        param_2 = param_2 + 1;
      }
      uVar4 = (uVar3 >> 0xb) *
              (uint)*(ushort *)((ulonglong)(uVar11 << 6) * 2 + lVar10 + 0x360 + uVar7 * 2);
      if (uVar2 < uVar4) {
        uVar9 = (int)uVar7 * 2;
        uVar3 = uVar4;
      }
      else {
        uVar3 = uVar3 - uVar4;
        uVar9 = (int)uVar7 * 2 + 1;
        uVar2 = uVar2 - uVar4;
      }
      uVar7 = (ulonglong)uVar9;
    } while (uVar9 < 0x40);
    uVar9 = uVar9 - 0x40;
    if (3 < uVar9) {
      iVar12 = (uVar9 >> 1) - 1;
      if (uVar9 < 0xe) {
        lVar10 = lVar10 + 0x55e +
                 ((ulonglong)((uVar9 & 1 | 2) << ((byte)iVar12 & 0x1f)) - (ulonglong)uVar9) * 2;
      }
      else {
        iVar12 = (uVar9 >> 1) - 5;
        do {
          if (uVar3 < 0x1000000) {
            if (pbVar1 <= param_2) {
              return 0;
            }
            uVar2 = uVar2 << 8 | (uint)*param_2;
            uVar3 = uVar3 << 8;
            param_2 = param_2 + 1;
          }
          uVar3 = uVar3 >> 1;
          uVar2 = uVar2 - (0xffffffffU - ((int)(uVar2 - uVar3) >> 0x1f) & uVar3);
          iVar12 = iVar12 + -1;
        } while (iVar12 != 0);
        lVar10 = lVar10 + 0x644;
        iVar12 = 4;
      }
      do {
        if (uVar3 < 0x1000000) {
          if (pbVar1 <= param_2) {
            return 0;
          }
          uVar2 = uVar2 << 8 | (uint)*param_2;
          uVar3 = uVar3 << 8;
          param_2 = param_2 + 1;
        }
        uVar4 = (uVar3 >> 0xb) * (uint)*(ushort *)(lVar10 + uVar14 * 2);
        if (uVar2 < uVar4) {
          uVar11 = (int)uVar14 * 2;
          uVar3 = uVar4;
        }
        else {
          uVar3 = uVar3 - uVar4;
          uVar11 = (int)uVar14 * 2 + 1;
          uVar2 = uVar2 - uVar4;
        }
        uVar14 = (ulonglong)uVar11;
        iVar12 = iVar12 + -1;
      } while (iVar12 != 0);
    }
  }
LAB_1436e3fd2:
  if (0xffffff < uVar3) {
    return local_res8;
  }
  if (pbVar1 <= param_2) {
    return 0;
  }
  return local_res8;
}



// FUNCTION 1436e4000 FUN_1436e4000 body=139 status=ok
// SIG undefined FUN_1436e4000(void)

void FUN_1436e4000(longlong param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  
  uVar1 = *(uint *)(param_1 + 0x5c);
  uVar8 = (ulonglong)uVar1;
  if (uVar1 - 1 < 0x111) {
    uVar5 = *(ulonglong *)(param_1 + 0x30);
    lVar3 = *(longlong *)(param_1 + 0x18);
    uVar2 = *(uint *)(param_1 + 0x4c);
    lVar4 = *(longlong *)(param_1 + 0x38);
    if (param_2 - uVar5 < uVar8) {
      uVar8 = param_2 - uVar5 & 0xffffffff;
    }
    uVar7 = (uint)uVar8;
    if ((*(int *)(param_1 + 0x44) == 0) &&
       ((uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x40)) <= uVar7)) {
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0xc);
    }
    *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + uVar7;
    *(uint *)(param_1 + 0x5c) = uVar1 - uVar7;
    while (uVar7 != 0) {
      lVar6 = 0;
      if (uVar5 < uVar2) {
        lVar6 = lVar4;
      }
      *(undefined1 *)(uVar5 + lVar3) = *(undefined1 *)((lVar6 - (ulonglong)uVar2) + uVar5 + lVar3);
      uVar5 = uVar5 + 1;
      uVar7 = (int)uVar8 - 1;
      uVar8 = (ulonglong)uVar7;
    }
    *(ulonglong *)(param_1 + 0x30) = uVar5;
  }
  return;
}



// FUNCTION 1436e4090 FUN_1436e4090 body=79 status=ok
// SIG undefined FUN_1436e4090(void)

undefined8 * FUN_1436e4090(undefined8 *param_1,longlong param_2)

{
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  *param_1 = hkReflect::Version::Patcher::vftable;
  param_1[3] = param_2;
  if (param_2 != 0) {
    FUN_14370c030(param_2);
  }
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 1436e40e0 FUN_1436e40e0 body=161 status=ok
// SIG undefined FUN_1436e40e0(void)

void FUN_1436e40e0(undefined8 *param_1)

{
  longlong *plVar1;
  LPVOID pvVar2;
  
  plVar1 = (longlong *)param_1[6];
  *param_1 = hkReflect::Version::Patcher::vftable;
  if (plVar1 != (longlong *)0x0) {
    if (plVar1[1] != 0) {
      FUN_14370c150();
    }
    if (*plVar1 != 0) {
      FUN_14370c150();
    }
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),plVar1,0x10);
  }
  if (param_1[5] != 0) {
    FUN_14370c150();
  }
  if (param_1[4] != 0) {
    FUN_14370c150();
  }
  if (param_1[3] != 0) {
    FUN_14370c150();
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436e4190 FUN_1436e4190 body=139 status=ok
// SIG undefined FUN_1436e4190(void)

longlong FUN_1436e4190(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436e40e0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x38;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x38);
    }
  }
  return param_1;
}



// FUNCTION 1436e4220 FUN_1436e4220 body=360 status=ok
// SIG undefined FUN_1436e4220(void)

undefined8 *
FUN_1436e4220(longlong *param_1,undefined8 *param_2,undefined8 param_3,longlong param_4,
             undefined8 param_5)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res20 [8];
  undefined1 local_38 [16];
  
  FUN_14371f300(param_4,local_38);
  if ((*(char *)(param_4 + 0x89) != '\0') && (param_1[1] == 0)) {
    pvVar1 = TlsGetValue(DAT_146b7bf70);
    if (pvVar1 == (LPVOID)0x0) {
      pvVar1 = DAT_146b7bf68;
    }
    lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar1 + 0x58),0x20);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_143723b60(lVar2,*(undefined8 *)(param_4 + 0x60),param_5);
    }
    if (lVar2 != param_1[1]) {
      if (param_1[1] != 0) {
        FUN_14370c150();
      }
      param_1[1] = lVar2;
    }
  }
  if (*(char *)(param_4 + 0x88) != '\0') {
    if (DAT_146b82290 == (code *)0x0) {
      *param_2 = 0;
      return param_2;
    }
    if (*(char *)(param_4 + 0x89) != '\0') {
      param_5 = CAkVPLSrcNode::Stop(param_1[1]);
    }
    if (*param_1 == 0) {
      lVar2 = (*DAT_146b82290)(param_5,param_4);
      if (lVar2 != *param_1) {
        if (*param_1 != 0) {
          FUN_14370c150();
        }
        *param_1 = lVar2;
      }
    }
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)*param_1 + 0x18))
                       ((longlong *)*param_1,local_res20,param_3,param_4);
    param_3 = *puVar3;
  }
  if (*(char *)(param_4 + 0x89) == '\0') {
    *param_2 = param_3;
    return param_2;
  }
  FUN_143727980(param_1[1],param_2,param_3,0);
  return param_2;
}



// FUNCTION 1436e4390 FUN_1436e4390 body=605 status=ok
// SIG undefined FUN_1436e4390(void)

longlong *
FUN_1436e4390(longlong param_1,longlong *param_2,longlong param_3,longlong param_4,
             undefined8 param_5,char param_6)

{
  longlong *plVar1;
  LPVOID pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong lVar6;
  ulonglong in_stack_ffffffffffffffc8;
  longlong local_28;
  longlong lStack_20;
  
  if (param_4 == 0) {
    param_4 = FUN_14371d640();
  }
  lVar6 = CONCAT44(param_5._4_4_,(int)param_5);
  if ((CONCAT44(param_5._4_4_,(int)param_5) == 0) &&
     (lVar6 = DAT_146b82398, *(longlong *)(param_1 + 0x18) != 0)) {
    lVar6 = *(longlong *)(param_1 + 0x18);
  }
  puVar5 = (undefined8 *)0x0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar2 + 0x58),0x48);
    puVar4 = puVar5;
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)FUN_14371d780(lVar3);
    }
    if (puVar4 != *(undefined8 **)(param_1 + 0x20)) {
      if (*(undefined8 **)(param_1 + 0x20) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(param_1 + 0x20) = puVar4;
    }
  }
  if (*(longlong *)(param_1 + 0x28) == 0) {
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    lVar3 = (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                      (*(longlong **)((longlong)pvVar2 + 0x58),0x90);
    puVar4 = puVar5;
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)
               FUN_14371d960(lVar3,lVar6,param_4,*(undefined8 *)(param_1 + 0x20),
                             in_stack_ffffffffffffffc8 & 0xffffffff00000000);
    }
    if (puVar4 != *(undefined8 **)(param_1 + 0x28)) {
      if (*(undefined8 **)(param_1 + 0x28) != (undefined8 *)0x0) {
        FUN_14370c150();
      }
      *(undefined8 **)(param_1 + 0x28) = puVar4;
    }
    local_28 = *(longlong *)(param_3 + 8);
    lStack_20 = local_28 + (longlong)*(int *)(param_3 + 0x10) * 8;
    FUN_14371ea40(*(undefined8 *)(param_1 + 0x28),&param_5,&local_28);
    if (-1 < (int)param_5) goto LAB_1436e44fa;
LAB_1436e44f2:
    *param_2 = 0;
  }
  else {
LAB_1436e44fa:
    if ((*(char *)(*(longlong *)(param_1 + 0x28) + 0x88) != '\0') ||
       (*(char *)(*(longlong *)(param_1 + 0x28) + 0x89) != '\0')) {
      if (param_6 != '\0') goto LAB_1436e44f2;
      plVar1 = *(longlong **)(param_1 + 0x30);
      if (plVar1 != (longlong *)0x0) {
        if (plVar1[1] != 0) {
          FUN_14370c150();
        }
        if (*plVar1 != 0) {
          FUN_14370c150();
        }
        pvVar2 = TlsGetValue(DAT_146b7bf70);
        if (pvVar2 == (LPVOID)0x0) {
          pvVar2 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar2 + 0x58),plVar1,0x10);
      }
      pvVar2 = TlsGetValue(DAT_146b7bf70);
      if (pvVar2 == (LPVOID)0x0) {
        pvVar2 = DAT_146b7bf68;
      }
      puVar4 = (undefined8 *)
               (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 8))
                         (*(longlong **)((longlong)pvVar2 + 0x58),0x10);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar5 = puVar4;
      }
      *(undefined8 **)(param_1 + 0x30) = puVar5;
      FUN_1436e4220(puVar5,&param_5,param_3,*(undefined8 *)(param_1 + 0x28),param_4);
      param_3 = CONCAT44(param_5._4_4_,(int)param_5);
    }
    *param_2 = param_3;
  }
  return param_2;
}



// FUNCTION 1436e45f0 FUN_1436e45f0 body=115 status=ok
// SIG undefined FUN_1436e45f0(void)

undefined8 * FUN_1436e45f0(undefined8 *param_1,undefined8 param_2)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  DAT_146b7b958._0_1_ = 1;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x38);
  if (lVar2 != 0) {
    uVar3 = FUN_1436e4090(lVar2,param_2);
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1436e4670 FUN_1436e4670 body=336 status=ok
// SIG undefined FUN_1436e4670(void)

void FUN_1436e4670(longlong param_1,longlong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  byte local_res10 [8];
  byte local_res18 [16];
  
  if (0 < (int)param_3) {
    uVar7 = (ulonglong)param_3;
    do {
      plVar1 = *(longlong **)(param_1 + 8);
      local_res18[0] = 0xff;
      if (plVar1[1] - *plVar1 < 1) {
        hkIo::ReadBuffer::implRead(plVar1,local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(local_res18);
        *plVar1 = *plVar1 + 1;
      }
      bVar2 = local_res18[0] & 1;
      uVar6 = (ulonglong)(local_res18[0] >> 1) & 0x7fffffffffffffbf;
      iVar5 = (int)uVar6;
      bVar3 = 6;
      bVar4 = local_res18[0];
      while ((char)bVar4 < '\0') {
        plVar1 = *(longlong **)(param_1 + 8);
        local_res10[0] = 0xff;
        if (plVar1[1] - *plVar1 < 1) {
          hkIo::ReadBuffer::implRead(plVar1,local_res10);
        }
        else {
          FGenericPlatformString::Memcpy(local_res10);
          *plVar1 = *plVar1 + 1;
        }
        uVar6 = uVar6 | ((ulonglong)local_res10[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
        iVar5 = (int)uVar6;
        bVar3 = bVar3 + 7;
        bVar4 = local_res10[0];
      }
      if (bVar2 != 0) {
        iVar5 = -iVar5;
      }
      *param_2 = (longlong)iVar5;
      param_2 = (longlong *)((longlong)param_2 + (longlong)param_4);
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return;
}



// FUNCTION 1436e47c0 FUN_1436e47c0 body=333 status=ok
// SIG undefined FUN_1436e47c0(void)

void FUN_1436e47c0(longlong param_1,ulonglong *param_2,uint param_3,int param_4)

{
  longlong *plVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte local_res10 [8];
  byte local_res18 [16];
  
  if (0 < (int)param_3) {
    uVar6 = (ulonglong)param_3;
    do {
      plVar1 = *(longlong **)(param_1 + 8);
      local_res18[0] = 0xff;
      if (plVar1[1] - *plVar1 < 1) {
        hkIo::ReadBuffer::implRead(plVar1,local_res18);
      }
      else {
        FGenericPlatformString::Memcpy(local_res18);
        *plVar1 = *plVar1 + 1;
      }
      bVar2 = local_res18[0] & 1;
      uVar5 = (ulonglong)(local_res18[0] >> 1) & 0x7fffffffffffffbf;
      bVar3 = 6;
      bVar4 = local_res18[0];
      while ((char)bVar4 < '\0') {
        plVar1 = *(longlong **)(param_1 + 8);
        local_res10[0] = 0xff;
        if (plVar1[1] - *plVar1 < 1) {
          hkIo::ReadBuffer::implRead(plVar1,local_res10);
        }
        else {
          FGenericPlatformString::Memcpy(local_res10);
          *plVar1 = *plVar1 + 1;
        }
        uVar5 = uVar5 | ((ulonglong)local_res10[0] & 0xffffffffffffff7f) << (bVar3 & 0x3f);
        bVar3 = bVar3 + 7;
        bVar4 = local_res10[0];
      }
      if (bVar2 != 0) {
        uVar5 = -uVar5;
      }
      *param_2 = uVar5;
      param_2 = (ulonglong *)((longlong)param_2 + (longlong)param_4);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 1436e4910 FUN_1436e4910 body=196 status=ok
// SIG undefined FUN_1436e4910(void)

undefined8 * FUN_1436e4910(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 local_res8 [2];
  undefined8 local_res10;
  
  FUN_1436e4a80();
  *param_1 = oldTagfileProvider::Bundle2014::vftable;
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0x12,uVar1,0x4000);
  *(undefined4 *)((longlong)param_1 + 0xe4) = 0x80000000;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  FUN_143734b10(param_1 + 0x1d);
  local_res8[0] = 0;
  local_res10 = 0;
  FUN_1436e7110(param_1 + 0x1b,&local_res10,local_res8);
  uVar1 = FUN_143703a50();
  if (*(uint *)(param_1 + 2) == (*(uint *)((longlong)param_1 + 0x14) & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 1,8);
  }
  *(undefined8 *)(param_1[1] + (longlong)*(int *)(param_1 + 2) * 8) = 0;
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + 1;
  return param_1;
}



// FUNCTION 1436e49e0 FUN_1436e49e0 body=157 status=ok
// SIG undefined FUN_1436e49e0(void)

longlong FUN_1436e49e0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_1436e4910();
  uVar1 = FUN_143703a50();
  FUN_1437365b0(param_1 + 0xf8,uVar1,0x4000);
  hkReflect::Detail::Impl::Impl(param_1 + 0x140);
  *(longlong *)(param_1 + 0x150) = param_1;
  *(undefined ***)(param_1 + 0x140) = oldTagfileProvider::OldTagfileArrayImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x158);
  *(longlong *)(param_1 + 0x168) = param_1;
  *(undefined ***)(param_1 + 0x158) = oldTagfileProvider::OldTagfilePointerImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0x170);
  *(undefined ***)(param_1 + 0x170) = oldTagfileProvider::OldTagfileHomogenousArrayImpl::vftable;
  *(longlong *)(param_1 + 0x180) = param_1;
  return param_1;
}



// FUNCTION 1436e4a80 FUN_1436e4a80 body=161 status=ok
// SIG undefined FUN_1436e4a80(void)

undefined8 * FUN_1436e4a80(undefined8 *param_1)

{
  FUN_143734d20();
  *param_1 = hkSerialize::Detail::OldIndexedBundle::vftable;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0x80000000;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x80000000;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0x80000000;
  hkReflect::Detail::Impl::Impl(param_1 + 9);
  param_1[9] = hkSerialize::Detail::OldIndexedPointerImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0xc);
  param_1[0xc] = hkSerialize::Detail::OldIndexedArrayImpl::vftable;
  hkReflect::Detail::Impl::Impl(param_1 + 0xf);
  param_1[0xf] = hkSerialize::Detail::OldIndexedStringImpl::vftable;
  param_1[0xb] = param_1;
  param_1[0x11] = param_1;
  param_1[0xe] = param_1;
  return param_1;
}



// FUNCTION 1436e4b30 FUN_1436e4b30 body=433 status=ok
// SIG undefined FUN_1436e4b30(void)

undefined4 *
FUN_1436e4b30(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  
  *param_1 = 0xffffffff;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = param_2;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  param_1[9] = 0x80000000;
  FUN_14373bf20(param_1 + 10,(undefined1)param_6);
  *(undefined8 *)(param_1 + 0x10) = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0x80000000;
  param_1[0x14] = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x80000000;
  *(undefined8 *)(param_1 + 0x1a) = param_3;
  *(undefined8 *)(param_1 + 0x1c) = param_4;
  param_1[0x1e] = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0x80000000;
  *(undefined8 *)(param_1 + 0x24) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x80000000;
  *(undefined8 *)(param_1 + 0x28) = param_6;
  *(undefined8 *)(param_1 + 0x2a) = param_7;
  *(undefined8 *)(param_1 + 0x2c) = param_8;
  *(undefined8 *)(param_1 + 0x2e) = param_5;
  uVar1 = FUN_143703a50();
  if (param_1[8] == (param_1[9] & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 6,8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 6) + (longlong)(int)param_1[8] * 8) = 0;
  param_1[8] = param_1[8] + 1;
  uVar1 = FUN_143703a50();
  if (param_1[0x12] == (param_1[0x13] & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 0x10,8);
  }
  *(undefined1 **)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_1[0x12] * 8) =
       &DAT_145af3922;
  param_1[0x12] = param_1[0x12] + 1;
  uVar1 = FUN_143703a50();
  if (param_1[0x12] == (param_1[0x13] & 0x3fffffff)) {
    FUN_14370c460(uVar1,param_1 + 0x10,8);
  }
  *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)(int)param_1[0x12] * 8) = 0;
  param_1[0x12] = param_1[0x12] + 1;
  param_1[0x14] = 2;
  return param_1;
}



// FUNCTION 1436e4cf0 FUN_1436e4cf0 body=115 status=ok
// SIG undefined FUN_1436e4cf0(void)

undefined8 * FUN_1436e4cf0(undefined8 *param_1)

{
  LPVOID pvVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  param_1[1] = 0;
  *param_1 = hkSerialize::TagfileReadFormat2014::vftable;
  *(undefined4 *)(param_1 + 2) = 0x1ffff;
  pvVar1 = TlsGetValue(DAT_146b7bf70);
  if (pvVar1 == (LPVOID)0x0) {
    pvVar1 = DAT_146b7bf68;
  }
  lVar2 = (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 8))
                    (*(longlong **)((longlong)pvVar1 + 0x58),0x188);
  if (lVar2 != 0) {
    uVar3 = FUN_1436e49e0(lVar2);
    param_1[3] = uVar3;
    return param_1;
  }
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 1436e4d70 FUN_1436e4d70 body=122 status=ok
// SIG undefined FUN_1436e4d70(void)

void FUN_1436e4d70(longlong param_1)

{
  undefined8 uVar1;
  
  thunk_FUN_143734820(param_1 + 0xe8);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0xe4)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0xd8),0x10,*(uint *)(param_1 + 0xe4) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0x80000000;
  FUN_143736600(param_1 + 0x90);
  FUN_1436e4df0(param_1);
  return;
}



// FUNCTION 1436e4df0 FUN_1436e4df0 body=217 status=ok
// SIG undefined FUN_1436e4df0(void)

void FUN_1436e4df0(longlong param_1)

{
  undefined8 uVar1;
  
  FUN_143732980(param_1 + 0x78);
  FUN_143732980(param_1 + 0x60);
  FUN_143732980(param_1 + 0x48);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x40) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x44)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x34)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  FUN_143734f50(param_1);
  return;
}



// FUNCTION 1436e4ed0 FUN_1436e4ed0 body=328 status=ok
// SIG undefined FUN_1436e4ed0(void)

void FUN_1436e4ed0(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x98) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x9c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x90),0x10,*(uint *)(param_1 + 0x9c) & 0x3fffffff)
    ;
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x8c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x80),8,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (-1 < (int)*(uint *)(param_1 + 100)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x58),4,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x4c)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_14373bf70(param_1 + 0x28);
  uVar1 = FUN_143703a50();
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (-1 < (int)*(uint *)(param_1 + 0x24)) {
    FUN_143702e10(uVar1,*(undefined8 *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 1436e5020 FUN_1436e5020 body=168 status=ok
// SIG undefined FUN_1436e5020(void)

void FUN_1436e5020(undefined8 *param_1)

{
  longlong lVar1;
  LPVOID pvVar2;
  
  lVar1 = param_1[3];
  *param_1 = hkSerialize::TagfileReadFormat2014::vftable;
  if (lVar1 != 0) {
    *(undefined ***)(lVar1 + 0x170) = oldTagfileProvider::OldTagfileHomogenousArrayImpl::vftable;
    FUN_143732980();
    FUN_143732980(lVar1 + 0x158);
    *(undefined ***)(lVar1 + 0x140) = oldTagfileProvider::OldTagfileArrayImpl::vftable;
    FUN_143732980();
    FUN_143736600(lVar1 + 0xf8);
    FUN_1436e4d70(lVar1);
    pvVar2 = TlsGetValue(DAT_146b7bf70);
    if (pvVar2 == (LPVOID)0x0) {
      pvVar2 = DAT_146b7bf68;
    }
    (**(code **)(**(longlong **)((longlong)pvVar2 + 0x58) + 0x10))
              (*(longlong **)((longlong)pvVar2 + 0x58),lVar1,0x188);
  }
  FUN_14370c000(param_1);
  return;
}



// FUNCTION 1436e50d0 FUN_1436e50d0 body=120 status=ok
// SIG undefined FUN_1436e50d0(void)

longlong FUN_1436e50d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436e4d70();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0xf8);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0xf8);
    }
  }
  return param_1;
}



// FUNCTION 1436e5150 FUN_1436e5150 body=120 status=ok
// SIG undefined FUN_1436e5150(void)

longlong FUN_1436e5150(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
    }
  }
  return param_1;
}



// FUNCTION 1436e51d0 FUN_1436e51d0 body=120 status=ok
// SIG undefined FUN_1436e51d0(void)

longlong FUN_1436e51d0(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  FUN_1436e4df0();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x90);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x90);
    }
  }
  return param_1;
}



// FUNCTION 1436e5250 FUN_1436e5250 body=125 status=ok
// SIG undefined FUN_1436e5250(void)

undefined8 * FUN_1436e5250(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = oldTagfileProvider::OldTagfileArrayImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1436e52d0 FUN_1436e52d0 body=125 status=ok
// SIG undefined FUN_1436e52d0(void)

undefined8 * FUN_1436e52d0(undefined8 *param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  
  *param_1 = oldTagfileProvider::OldTagfileHomogenousArrayImpl::vftable;
  FUN_143732980();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      pvVar1 = TlsGetValue(DAT_146b7bf70);
      if (pvVar1 == (LPVOID)0x0) {
        pvVar1 = DAT_146b7bf68;
      }
      (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                (*(longlong **)((longlong)pvVar1 + 0x58),param_1,0x18);
      return param_1;
    }
    SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 1436e5350 FUN_1436e5350 body=139 status=ok
// SIG undefined FUN_1436e5350(void)

longlong FUN_1436e5350(longlong param_1,ulonglong param_2)

{
  LPVOID pvVar1;
  short sVar2;
  
  FUN_1436e5020();
  if ((param_2 & 1) != 0) {
    if ((param_2 & 4) == 0) {
      if (param_1 != 0) {
        pvVar1 = TlsGetValue(DAT_146b7bf70);
        if (pvVar1 == (LPVOID)0x0) {
          pvVar1 = DAT_146b7bf68;
        }
        sVar2 = 0x20;
        if (*(short *)(param_1 + 0x10) != -1) {
          sVar2 = *(short *)(param_1 + 0x10);
        }
        (**(code **)(**(longlong **)((longlong)pvVar1 + 0x58) + 0x10))
                  (*(longlong **)((longlong)pvVar1 + 0x58),param_1,sVar2);
        return param_1;
      }
    }
    else {
      SDefaultMovieBorder::~SDefaultMovieBorder(param_1,0x20);
    }
  }
  return param_1;
}



// FUNCTION 1436e53e0 FUN_1436e53e0 body=120 status=ok
// SIG undefined FUN_1436e53e0(void)

longlong FUN_1436e53e0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar1 = *param_2;
  uVar6 = (int)lVar1 * -0x61c8864f;
  iVar3 = (int)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar3 * -0x61c8864f;
  uVar6 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | (int)lVar1 * -0x4f000000
  ;
  uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | iVar3 * -0x4f000000;
  lVar2 = param_1[2];
  uVar4 = (ulonglong)
          ((uVar5 * 0x40 + uVar6 + (uVar6 >> 2) + 0x9e3779b9 ^ uVar5) & *(uint *)(param_1 + 3));
  iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
  if (-1 < iVar3) {
    do {
      if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == lVar1) {
        return lVar2 + uVar4 * 8;
      }
      uVar4 = (ulonglong)((int)uVar4 + 1U & *(uint *)(param_1 + 3));
      iVar3 = *(int *)(lVar2 + 4 + uVar4 * 8);
    } while (-1 < iVar3);
  }
  return 0;
}


