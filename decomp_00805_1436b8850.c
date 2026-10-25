// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1436b8850 FUN_1436b8850 body=292 status=ok
// SIG undefined FUN_1436b8850(void)

undefined8 FUN_1436b8850(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
  *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) & 0xfffffffd;
  if ((*(longlong *)(lVar1 + 0x200) == 0) && (*(int *)(lVar1 + 0x380) != 3)) {
    if (*(code **)(lVar1 + 0x208) == (code *)0x0) {
      if (*(code **)(lVar1 + 0x260) == (code *)0x0) {
        if ((*(code **)(lVar1 + 0x8a20) == fread_exref) &&
           (iVar2 = fseek(*(FILE **)(lVar1 + 0x8a28),0,0), iVar2 != -1)) {
          return 0;
        }
        FUN_1436b5820(lVar1,"necessary data rewind wasn\'t possible");
        return 0x41;
      }
      iVar2 = (**(code **)(lVar1 + 0x260))(lVar1,1,*(undefined8 *)(lVar1 + 0x2c0));
      FUN_1436b58e0(lVar1,"the ioctl callback returned %d\n",iVar2);
      if (iVar2 != 0) {
        FUN_1436b5820(lVar1,"ioctl callback returned error %d",iVar2);
        return 0x41;
      }
    }
    else {
      iVar2 = (**(code **)(lVar1 + 0x208))(*(undefined8 *)(lVar1 + 0x298),0,0);
      if (iVar2 != 0) {
        FUN_1436b5820(lVar1,"seek callback returned error %d",iVar2);
        return 0x41;
      }
    }
  }
  return 0;
}



// FUNCTION 1436b8980 FUN_1436b8980 body=702 status=ok
// SIG undefined FUN_1436b8980(void)

undefined8 FUN_1436b8980(longlong *param_1,longlong param_2,char *param_3)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  int local_res8 [2];
  
  uVar6 = *(uint *)(param_1 + 0xfe);
  plVar1 = (longlong *)(param_2 + 0x90);
  *(undefined4 *)(param_1 + 0xfe) = 0;
  local_res8[0] = 0;
  bVar2 = (byte)*(undefined4 *)(param_2 + 0x168);
  if ((bVar2 & 0x15) == 1) {
    lVar8 = param_1[0x80];
  }
  else {
    lVar8 = -1;
  }
  if ((bVar2 & 0x2a) == 2) {
    lVar7 = param_1[0x81];
  }
  else {
    lVar7 = -1;
  }
  if (*(longlong *)(*param_1 + 0x8a10) != 0) {
    uVar6 = uVar6 | 1;
  }
  if (uVar6 == 0) {
    uVar6 = FUN_1436b50e0(lVar8,0xffffffffffffffff,lVar7,0);
  }
  if (uVar6 == 4) {
    FUN_1436b5820(param_2,"select/poll returned error");
    return 0x37;
  }
  if (((*(byte *)(param_2 + 0x168) & 1) != 0) &&
     (((uVar6 & 1) != 0 || (*(char *)((longlong)param_1 + 0x3cf) != '\0')))) {
    uVar5 = FUN_1436b9190(param_2,param_1,plVar1,local_res8,param_3);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*param_3 != '\0') {
      return uVar5;
    }
  }
  if (((uVar6 & *(uint *)(param_2 + 0x168) & 2) != 0) &&
     (uVar5 = FUN_1436b98e0(param_2,param_1,plVar1,local_res8), (int)uVar5 != 0)) {
    return uVar5;
  }
  uVar5 = curlx_tvnow();
  *(undefined8 *)(param_2 + 0xd0) = uVar5;
  if (local_res8[0] == 0) {
    if ((*(int *)(param_2 + 0x134) == 1) &&
       (iVar3 = curlx_tvdiff(uVar5,*(undefined8 *)(param_2 + 300)),
       *(int *)(param_2 + 0x65c) <= iVar3)) {
      *(uint *)(param_2 + 0x168) = *(uint *)(param_2 + 0x168) | 2;
      *(undefined4 *)(param_2 + 0x134) = 0;
      FUN_1436b58e0(param_2,"Done waiting for 100-continue\n");
    }
  }
  else {
    if (*(undefined8 **)(param_2 + 0x98) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x98) = *(undefined8 *)(param_2 + 0xb0);
    }
    if (*(undefined8 **)(param_2 + 0xa8) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0xa8) = *(undefined8 *)(param_2 + 0xb8);
    }
  }
  iVar3 = FUN_1436befa0(param_1);
  if (iVar3 == 0) {
    uVar5 = FUN_1436bf8a0(param_2,*(undefined8 *)(param_2 + 0xd0));
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (*(int *)(param_2 + 0x168) == 0) {
      if (*(char *)(param_2 + 0x44f) == '\0') {
        lVar8 = *plVar1;
        if (((lVar8 != -1) && (*(longlong *)(param_2 + 0xb0) != lVar8)) &&
           (*(longlong *)(param_2 + 0x178) == 0)) {
          FUN_1436b5820(param_2,"transfer closed with %I64d bytes remaining to read",
                        lVar8 - *(longlong *)(param_2 + 0xb0));
          return 0x12;
        }
        if ((*(char *)(param_2 + 400) != '\0') && ((int)param_1[4] != 4)) {
          FUN_1436b5820(param_2,"transfer closed with outstanding read data remaining");
          return 0x12;
        }
      }
      iVar3 = FUN_1436befa0(param_1);
      if (iVar3 != 0) goto LAB_1436b8c0b;
    }
    else {
      iVar3 = FUN_1436b6c20(param_2,param_2 + 0xd0,0);
      if (iVar3 < 0) {
        lVar8 = *plVar1;
        uVar4 = curlx_tvdiff(*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(param_2 + 0x738));
        if (lVar8 != -1) {
          FUN_1436b5820(param_2,
                        "Operation timed out after %ld milliseconds with %I64d out of %I64d bytes received"
                        ,uVar4,*(undefined8 *)(param_2 + 0xb0),lVar8);
          return 0x1c;
        }
        FUN_1436b5820(param_2,"Operation timed out after %ld milliseconds with %I64d bytes received"
                      ,uVar4,*(undefined8 *)(param_2 + 0xb0));
        return 0x1c;
      }
    }
    *param_3 = (*(uint *)(param_2 + 0x168) & 0x33) == 0;
    uVar5 = 0;
  }
  else {
LAB_1436b8c0b:
    uVar5 = 0x2a;
  }
  return uVar5;
}



// FUNCTION 1436b8c40 FUN_1436b8c40 body=255 status=ok
// SIG undefined FUN_1436b8c40(void)

undefined8 FUN_1436b8c40(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  *param_2 = 0;
  if (((((*(char *)(lVar1 + 0x450) == '\0') || ((*(uint *)(param_1[0x7d] + 0x74) & 0x40003) != 0))
       && ((longlong)*(int *)(lVar1 + 0xc0) + *(longlong *)(lVar1 + 0xb0) == 0)) &&
      ((*(char *)((longlong)param_1 + 0x3ba) != '\0' && (*(char *)(lVar1 + 0x44f) == '\0')))) &&
     (*(int *)(lVar1 + 0x60c) != 0xb)) {
    FUN_1436b58e0(*param_1,"Connection died, retrying a fresh connect\n");
    lVar2 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(*param_1 + 0x670));
    *param_2 = lVar2;
    if (lVar2 == 0) {
      return 0x1b;
    }
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    *(undefined1 *)((longlong)param_1 + 0x3c7) = 1;
    if (((*(byte *)(param_1[0x7d] + 0x74) & 3) != 0) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x198) + 0x30) != 0)) {
      uVar3 = FUN_1436b8850(param_1);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1436b8d40 FUN_1436b8d40 body=302 status=ok
// SIG undefined FUN_1436b8d40(void)

void FUN_1436b8d40(longlong *param_1,int param_2,longlong param_3,char param_4,undefined8 param_5,
                  int param_6,undefined8 param_7)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar4 = -1;
  if (param_2 == -1) {
    lVar2 = -1;
  }
  else {
    lVar2 = param_1[(longlong)param_2 + 0x3a];
  }
  param_1[0x80] = lVar2;
  if (param_6 != -1) {
    lVar4 = param_1[(longlong)param_6 + 0x3a];
  }
  param_1[0x81] = lVar4;
  *(undefined8 *)(lVar1 + 0x98) = param_5;
  *(undefined8 *)(lVar1 + 0xa8) = param_7;
  *(char *)(lVar1 + 0x192) = param_4;
  *(longlong *)(lVar1 + 0x90) = param_3;
  if ((param_4 == '\0') && (*(undefined1 *)(lVar1 + 0xd8) = 0, 0 < param_3)) {
    FUN_1436bed90(lVar1,param_3);
  }
  if ((*(char *)(lVar1 + 0x192) != '\0') || (*(char *)(lVar1 + 0x44f) == '\0')) {
    if (param_1[0x80] != -1) {
      *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 1;
    }
    if (param_1[0x81] != -1) {
      if (*(char *)(lVar1 + 0x89c8) != '\0') {
        if (((*(byte *)(param_1[0x7d] + 0x74) & 3) != 0) &&
           (*(int *)(*(longlong *)(lVar1 + 0x198) + 0x78) == 2)) {
          *(undefined4 *)(lVar1 + 0x134) = 1;
          uVar3 = curlx_tvnow();
          *(undefined8 *)(lVar1 + 300) = uVar3;
          FUN_1436a4500(lVar1,*(undefined4 *)(lVar1 + 0x65c));
          return;
        }
        if (*(char *)(lVar1 + 0x89c8) != '\0') {
          *(undefined4 *)(lVar1 + 0x134) = 2;
        }
      }
      *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) | 2;
    }
  }
  return;
}



// FUNCTION 1436b8e70 FUN_1436b8e70 body=125 status=ok
// SIG undefined FUN_1436b8e70(void)

ulonglong FUN_1436b8e70(longlong *param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  
  bVar5 = false;
  lVar1 = *param_1;
  if (*(code **)(param_1[0x7d] + 0x58) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001436b8e89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_1[0x7d] + 0x58))();
    return uVar2;
  }
  if (param_3 < 2) {
    return 0;
  }
  bVar4 = ((byte)*(undefined4 *)(lVar1 + 0x168) & 0x15) == 1;
  if (bVar4) {
    *param_2 = param_1[0x80];
  }
  uVar2 = (ulonglong)bVar4;
  if (((byte)*(undefined4 *)(lVar1 + 0x168) & 0x2a) == 2) {
    uVar3 = (uint)bVar4;
    if ((param_1[0x80] != param_1[0x81]) || (uVar3 == 0)) {
      bVar5 = uVar3 != 0;
      param_2[bVar5] = param_1[0x81];
    }
    uVar2 = (ulonglong)(uVar3 | 1 << bVar5 + 0x10);
  }
  return uVar2;
}



// FUNCTION 1436b8ef0 FUN_1436b8ef0 body=100 status=ok
// SIG undefined FUN_1436b8ef0(void)

longlong FUN_1436b8ef0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_1 == 0) {
    return 0;
  }
  if ((param_1 >> 10) + param_1 < param_2) {
    lVar1 = 1;
    param_1 = param_1 - (param_1 >> 6);
  }
  else if (param_2 < param_1 - (param_1 >> 10)) {
    param_1 = param_1 + (param_1 >> 6);
  }
  param_1 = (longlong)(param_3 * 1000) / param_1;
  if (param_1 < lVar1) {
    param_1 = lVar1;
  }
  if (0x7fffffff < param_1) {
    param_1 = 0x7fffffff;
  }
  return param_1;
}



// FUNCTION 1436b8f60 FUN_1436b8f60 body=558 status=ok
// SIG undefined FUN_1436b8f60(void)

void * FUN_1436b8f60(undefined8 param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char *_Str;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  void *_Dst;
  char *_Str_00;
  uint uVar7;
  size_t _Size;
  byte *pbVar9;
  size_t sVar8;
  
  _Str = (char *)(*(code *)PTR__strdup_1467dcc70)();
  if (_Str == (char *)0x0) {
    return (void *)0x0;
  }
  pcVar3 = strstr(_Str,"//");
  _Str_00 = pcVar3 + 2;
  if (pcVar3 == (char *)0x0) {
    _Str_00 = _Str;
  }
  pcVar3 = (char *)0x0;
  if (*param_2 == 0x2f) {
    if (param_2[1] == 0x2f) {
      *_Str_00 = '\0';
      param_2 = param_2 + 2;
    }
    else {
      pcVar4 = strchr(_Str_00,0x2f);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = strchr(_Str_00,0x3f);
        if (pcVar4 != (char *)0x0) {
          *pcVar4 = '\0';
        }
      }
      else {
        pcVar5 = strchr(_Str_00,0x3f);
        if ((pcVar5 != (char *)0x0) && (pcVar5 < pcVar4)) {
          pcVar4 = pcVar5;
        }
        *pcVar4 = '\0';
      }
    }
  }
  else {
    pcVar4 = strchr(_Str_00,0x3f);
    if (pcVar4 != (char *)0x0) {
      *pcVar4 = '\0';
    }
    if ((*param_2 != 0x3f) && (pcVar4 = strrchr(_Str_00,0x2f), pcVar4 != (char *)0x0)) {
      *pcVar4 = '\0';
    }
    pcVar4 = strchr(_Str_00,0x2f);
    _Str_00 = pcVar4 + 1;
    if (pcVar4 == (char *)0x0) {
      _Str_00 = pcVar3;
    }
    pcVar4 = pcVar3;
    if (*param_2 == 0x2e) {
      if (param_2[1] == 0x2f) {
        param_2 = param_2 + 2;
      }
      bVar2 = *param_2;
      pcVar4 = (char *)0x0;
      while (((bVar2 == 0x2e && (param_2[1] == 0x2e)) && (param_2[2] == 0x2f))) {
        param_2 = param_2 + 3;
        pcVar4 = (char *)(ulonglong)((int)pcVar4 + 1);
        bVar2 = *param_2;
      }
    }
    if (_Str_00 != (char *)0x0) {
      uVar7 = (uint)pcVar4;
      while (uVar7 != 0) {
        uVar7 = (int)pcVar4 - 1;
        pcVar4 = (char *)(ulonglong)uVar7;
        pcVar5 = strrchr(_Str_00,0x2f);
        if (pcVar5 == (char *)0x0) {
          *_Str_00 = '\0';
          break;
        }
        *pcVar5 = '\0';
      }
    }
  }
  pcVar4 = (char *)0x1;
  bVar2 = *param_2;
  pbVar9 = param_2;
  pcVar5 = pcVar3;
  while (bVar2 != 0) {
    if (bVar2 == 0x20) {
      pcVar6 = pcVar5 + 3;
      pcVar5 = pcVar5 + 1;
      if ((char)pcVar4 != '\0') {
        pcVar5 = pcVar6;
      }
    }
    else {
      if (bVar2 == 0x3f) {
        pcVar4 = pcVar3;
      }
      pcVar6 = pcVar5 + 2;
      if (bVar2 < 0x80) {
        pcVar6 = pcVar5;
      }
      pcVar5 = pcVar6 + 1;
    }
    pbVar1 = pbVar9 + 1;
    pbVar9 = pbVar9 + 1;
    bVar2 = *pbVar1;
  }
  _Size = 0xffffffffffffffff;
  do {
    sVar8 = _Size;
    _Size = sVar8 + 1;
  } while (_Str[_Size] != '\0');
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(pcVar5 + sVar8 + 3);
  if (_Dst == (void *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    _Dst = (void *)0x0;
  }
  else {
    _guard_xfg_dispatch_icall_nop(_Dst,_Str,_Size);
    if (((*param_2 != 0x2f) && ((_Str_00 == (char *)0x0 || (*_Str_00 != '\0')))) &&
       (*param_2 != 0x3f)) {
      *(undefined1 *)((longlong)_Dst + _Size) = 0x2f;
      _Size = sVar8 + 2;
    }
    FUN_1436b9c00((longlong)_Dst + _Size,param_2);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
  }
  return _Dst;
}



// FUNCTION 1436b9190 FUN_1436b9190 body=1870 status=ok
// SIG undefined FUN_1436b9190(void)

ulonglong FUN_1436b9190(longlong param_1,longlong *param_2,longlong *param_3,uint *param_4,
                       undefined1 *param_5)

{
  uint *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  bool bVar11;
  char local_res8 [8];
  char local_res18 [8];
  uint *local_res20;
  int local_48;
  ulonglong local_40;
  
  uVar10 = 0;
  local_res8[0] = '\0';
  local_48 = 100;
  *param_5 = 0;
  uVar8 = uVar10;
  local_res20 = param_4;
  do {
    puVar1 = local_res20;
    iVar3 = 0x4000;
    if (*(int *)(param_1 + 0x400) != 0) {
      iVar3 = *(int *)(param_1 + 0x400);
    }
    lVar9 = (longlong)iVar3;
    if (((*param_3 != -1) && ((char)param_3[9] == '\0')) &&
       (lVar5 = *param_3 - param_3[4], lVar5 < lVar9)) {
      lVar9 = lVar5;
    }
    if (lVar9 == 0) {
      local_40 = 0;
    }
    else {
      uVar6 = FUN_1436b5980(param_2,param_2[0x80],param_3[0x18],lVar9,&local_40);
      uVar8 = uVar6 & 0xffffffff;
      if ((int)uVar6 == 0x51) goto LAB_1436b92a3;
      if (0 < (int)uVar6) {
        return uVar6;
      }
    }
    if (((param_3[4] == 0) && (param_3[5] == 0)) &&
       (FUN_1436bee30(param_1), 0 < *(int *)((longlong)param_3 + 0xa4))) {
      uVar7 = curlx_tvnow();
      *(undefined8 *)((longlong)param_3 + 0x9c) = uVar7;
    }
    *puVar1 = *puVar1 | 1;
    if ((local_40 == 0) && ((int)param_3[0x17] == 0)) {
      bVar11 = true;
    }
    else {
      bVar11 = false;
      if ((longlong)local_40 < 1) {
        *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffe;
        goto LAB_1436b92a3;
      }
    }
    *(undefined1 *)(local_40 + param_3[0x18]) = 0;
    param_3[0xd] = param_3[0x18];
    if (*(code **)(param_2[0x7d] + 0x68) != (code *)0x0) {
      uVar6 = (**(code **)(param_2[0x7d] + 0x68))(param_1,param_2,&local_40,local_res8);
      uVar8 = uVar6 & 0xffffffff;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (local_res8[0] != (char)uVar6) goto LAB_1436b92a3;
    }
    if ((char)param_3[9] != '\0') {
      local_res18[0] = '\0';
      uVar6 = FUN_1436bce60(param_1,param_2,&local_40,local_res18);
      uVar8 = uVar6 & 0xffffffff;
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      if (((*(code **)(param_2[0x7d] + 0x68) != (code *)0x0) && (param_3[2] < 1)) &&
         (0 < (longlong)local_40)) {
        uVar6 = (**(code **)(param_2[0x7d] + 0x68))(param_1,param_2,&local_40,local_res8);
        uVar8 = uVar6 & 0xffffffff;
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if (local_res8[0] != (char)uVar6) goto LAB_1436b92a3;
      }
      if (local_res18[0] != '\0') {
        if (0 < (longlong)local_40) {
          cVar2 = FUN_1436a4ab0(*(undefined8 *)(*param_2 + 0x78),1);
          if (cVar2 == '\0') {
            FUN_1436b58e0(param_1,
                          "Excess found in a non pipelined read: excess = %zd url = %s (zero-length body)\n"
                          ,local_40,*(undefined8 *)(param_1 + 0x89d8));
          }
          else {
            FUN_1436b58e0(param_1,"Rewinding stream by : %zd bytes on url %s (zero-length body)\n",
                          local_40,*(undefined8 *)(param_1 + 0x89d8));
            param_2[0x9c] = param_2[0x9c] - local_40;
            *(undefined1 *)((longlong)param_2 + 0x3cf) = 1;
          }
        }
        goto LAB_1436b92a3;
      }
    }
    if (((param_3[0xd] != 0) && ((char)param_3[9] == '\0')) &&
       ((0 < (longlong)local_40 || (bVar11)))) {
      if ((((int)param_3[0x17] == 0) && (!bVar11)) &&
         ((*(uint *)(param_2[0x7d] + 0x74) & 0x40003) != 0)) {
        if (*(longlong *)(param_1 + 0x178) != 0) {
          if (*(char *)((longlong)param_2 + 0x3b9) != '\0') goto LAB_1436b97ff;
          *(undefined1 *)((longlong)param_3 + 0xdd) = 1;
          FUN_1436b58e0(param_1,"Ignoring the response-body\n");
        }
        if ((((*(longlong *)(param_1 + 0x89f0) != 0) && ((char)param_3[0x11] == '\0')) &&
            (*(int *)(param_1 + 0x380) == 1)) && (*(char *)((longlong)param_3 + 0xdd) == '\0')) {
          if (*param_3 != *(longlong *)(param_1 + 0x89f0)) {
            FUN_1436b5820(param_1,"HTTP server doesn\'t seem to support byte ranges. Cannot resume."
                         );
            return 0x21;
          }
          FUN_1436b58e0(param_1,"The entire document is already downloaded");
          *(undefined1 *)((longlong)param_2 + 0x3b9) = 1;
LAB_1436b97ff:
          *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffe;
          *param_5 = 1;
          return 0;
        }
        if (((*(int *)(param_1 + 0x370) != 0) && (*(longlong *)(param_1 + 0x89e8) == 0)) &&
           (cVar2 = FUN_1436b8670(param_1,param_3[0x16]), cVar2 == '\0')) {
          *param_5 = 1;
          *(undefined4 *)(param_1 + 0x8a78) = 0x130;
          FUN_1436b58e0(param_1,"Simulate a HTTP 304 response!\n");
          *(undefined1 *)((longlong)param_2 + 0x3b9) = 1;
          return 0;
        }
      }
      *(int *)(param_3 + 0x17) = (int)param_3[0x17] + 1;
      if ((*(char *)(param_1 + 0x458) != '\0') &&
         ((*(int *)((longlong)param_3 + 0x4c) == 0 ||
          (FUN_1436b56c0(param_1,3,*(undefined8 *)(param_1 + 0x7d8),param_3[0xc],param_2),
          *(int *)((longlong)param_3 + 0x4c) == 1)))) {
        FUN_1436b56c0(param_1,3,param_3[0xd],local_40,param_2);
      }
      if ((char)param_3[0x20] != '\0') {
        iVar3 = FUN_1436d7c70(param_2,param_3[0xd],local_40,&local_40);
        if (0 < iVar3) {
          if (iVar3 != 4) {
            uVar7 = FUN_1436d7bf0(iVar3);
            FUN_1436b5820(param_1,"%s in chunked-encoding",uVar7);
            return 0x38;
          }
          FUN_1436b5820(param_1,"Failed writing data");
          return 0x17;
        }
        if (iVar3 == -1) {
          *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffe;
          lVar9 = param_2[6];
          if (lVar9 != 0) {
            FUN_1436b58e0(*param_2,"Leftovers after chunking: %zu bytes\n",lVar9);
            cVar2 = FUN_1436a4ab0(*(undefined8 *)(*param_2 + 0x78),1);
            if (cVar2 != '\0') {
              FUN_1436b58e0(*param_2,"Rewinding %zu bytes\n",lVar9);
              param_2[0x9c] = param_2[0x9c] - lVar9;
              *(undefined1 *)((longlong)param_2 + 0x3cf) = 1;
            }
          }
        }
      }
      if ((*(int *)((longlong)param_3 + 0x4c) != 0) && (*(char *)((longlong)param_3 + 0xdd) == '\0')
         ) {
        param_3[4] = param_3[4] + param_3[0xc];
      }
      lVar9 = param_3[2];
      if ((lVar9 != -1) && (lVar9 <= (longlong)(param_3[4] + local_40))) {
        uVar10 = (param_3[4] - lVar9) + local_40;
        if ((uVar10 != 0) && (*(char *)((longlong)param_3 + 0xdd) == '\0')) {
          cVar2 = FUN_1436a4ab0(*(undefined8 *)(*param_2 + 0x78),1);
          if (cVar2 == '\0') {
            FUN_1436b58e0(param_1,
                          "Excess found in a non pipelined read: excess = %zu, size = %I64d, maxdownload = %I64d, bytecount = %I64d\n"
                          ,uVar10,*param_3,param_3[2],param_3[4]);
          }
          else {
            FUN_1436b58e0(param_1,
                          "Rewinding stream by : %zu bytes on url %s (size = %I64d, maxdownload = %I64d, bytecount = %I64d, nread = %zd)\n"
                          ,uVar10,*(undefined8 *)(param_1 + 0x89d8),*param_3,param_3[2],param_3[4],
                          local_40);
            param_2[0x9c] = param_2[0x9c] - uVar10;
            *(undefined1 *)((longlong)param_2 + 0x3cf) = 1;
          }
        }
        local_40 = param_3[2] - param_3[4];
        if ((longlong)local_40 < 0) {
          local_40 = 0;
        }
        *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffe;
      }
      param_3[4] = param_3[4] + local_40;
      FUN_1436bed80(param_1);
      if ((char)param_3[0x20] == '\0') {
        if (local_40 == 0) {
          if (*(int *)((longlong)param_3 + 0x4c) == 0) {
            if (!bVar11) goto LAB_1436b9713;
            goto LAB_1436b967d;
          }
LAB_1436b9683:
          if (*(char *)((longlong)param_3 + 0xdd) == '\0') {
            lVar9 = param_3[2];
            if ((lVar9 == -1) || (param_3[0xc] <= lVar9)) {
              lVar9 = param_3[0xc];
            }
            uVar4 = Curl_client_write(param_2,1,*(undefined8 *)(param_1 + 0x7d8),lVar9);
            uVar8 = (ulonglong)uVar4;
            if (uVar4 != 0) {
              return uVar8;
            }
          }
        }
        else {
LAB_1436b967d:
          if (*(int *)((longlong)param_3 + 0x4c) != 0) goto LAB_1436b9683;
        }
        if ((*(int *)((longlong)param_3 + 0x4c) < 2) &&
           (*(char *)((longlong)param_3 + 0xdd) == '\0')) {
          if ((*(uint *)(param_2[0x7d] + 0x74) & 0xc000) == 0) {
            uVar8 = Curl_client_write(param_2,1,param_3[0xd],local_40);
          }
          else {
            uVar8 = FUN_1436c62b0(param_2,param_3[0xd],local_40);
          }
          uVar8 = uVar8 & 0xffffffff;
        }
        *(undefined4 *)((longlong)param_3 + 0x4c) = 0;
        if ((int)uVar8 != 0) {
          return uVar8;
        }
      }
    }
LAB_1436b9713:
    if (((*(longlong *)(param_2[0x7d] + 0x68) != 0) && (uVar10 != 0)) &&
       (*(char *)((longlong)param_2 + 0x3cf) == '\0')) {
      param_3[0xd] = param_3[0xd] + local_40;
      local_40 = uVar10;
      uVar8 = (**(code **)(param_2[0x7d] + 0x68))(param_1,param_2,&local_40,local_res8);
      if ((int)uVar8 != 0) {
        return uVar8;
      }
      if (local_res8[0] != (char)uVar8) {
        *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) | 1;
      }
LAB_1436b92a3:
      if ((((byte)(int)param_3[0x1b] & 3) == 2) && (*(char *)((longlong)param_2 + 0x3b9) != '\0')) {
        FUN_1436b58e0(param_1,"we are done reading and this is set to close, stop send\n");
        *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffd;
      }
      return 0;
    }
    if (bVar11) {
      *(uint *)(param_3 + 0x1b) = *(uint *)(param_3 + 0x1b) & 0xfffffffe;
    }
    if ((((*(byte *)(param_2[0x7d] + 0x74) & 0x30) == 0) &&
        (cVar2 = thunk_FUN_1436c19f0(param_2), cVar2 == '\0')) ||
       (bVar11 = local_48 == 0, local_48 = local_48 + -1, bVar11)) goto LAB_1436b92a3;
  } while( true );
}



// FUNCTION 1436b98e0 FUN_1436b98e0 body=793 status=ok
// SIG undefined FUN_1436b98e0(void)

undefined8 FUN_1436b98e0(longlong param_1,longlong param_2,longlong param_3,uint *param_4)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  int local_res8 [2];
  longlong local_res18;
  
  bVar6 = false;
  if ((*(longlong *)(param_3 + 0x20) == 0) && (*(longlong *)(param_3 + 0x28) == 0)) {
    FUN_1436bee30(param_1,7);
  }
  *param_4 = *param_4 | 2;
  if (*(longlong *)(param_1 + 0x180) != 0) {
LAB_1436b9ad0:
    uVar2 = FUN_1436b5de0(param_2,*(undefined8 *)(param_2 + 0x408),*(undefined8 *)(param_1 + 0x188),
                          *(undefined8 *)(param_1 + 0x180),&local_res18);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    if (*(char *)(param_1 + 0x458) != (char)uVar2) {
      FUN_1436b56c0(param_1,4,*(undefined8 *)(param_1 + 0x188),local_res18,param_2);
    }
    *(longlong *)(param_3 + 0x28) = *(longlong *)(param_3 + 0x28) + local_res18;
    if (*(longlong *)(param_3 + 0x28) == *(longlong *)(param_1 + 0x8a08)) {
      *(undefined1 *)(param_3 + 0xdc) = 1;
      FUN_1436b58e0(param_1,"We are completely uploaded and fine\n");
    }
    if (*(longlong *)(param_1 + 0x180) == local_res18) {
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_3 + 200);
      *(undefined8 *)(param_1 + 0x180) = 0;
      if (((*(char *)(param_3 + 0xdc) != '\0') &&
          (*(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) & 0xfffffffd,
          *(char *)(param_2 + 0x3ca) != '\0')) && (uVar2 = FUN_1436b8850(param_2), (int)uVar2 != 0))
      {
        return uVar2;
      }
    }
    else {
      *(longlong *)(param_1 + 0x188) = *(longlong *)(param_1 + 0x188) + local_res18;
      *(longlong *)(param_1 + 0x180) = *(longlong *)(param_1 + 0x180) - local_res18;
    }
    FUN_1436bedc0(param_1,*(undefined8 *)(param_3 + 0x28));
    return 0;
  }
  *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_3 + 200);
  if (*(char *)(param_3 + 0xdc) == '\0') {
    if ((*(int *)(param_3 + 0xa4) == 2) && (*(int *)(*(longlong *)(param_1 + 0x198) + 0x78) == 2)) {
      *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) & 0xfffffffd;
      *(undefined4 *)(param_3 + 0xa4) = 1;
      uVar2 = curlx_tvnow();
      *(undefined8 *)(param_3 + 0x9c) = uVar2;
      *param_4 = *param_4 & 0xfffffffd;
      FUN_1436a4500(param_1,*(undefined4 *)(param_1 + 0x65c));
      return 0;
    }
    if ((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40003) != 0) {
      bVar6 = *(int *)(*(longlong *)(param_1 + 0x198) + 0x78) == 1;
    }
    uVar2 = FUN_1436b81a0(param_2,0x4000,local_res8);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
    lVar5 = (longlong)local_res8[0];
    if (lVar5 != 0) {
      if (0 < lVar5) {
        *(longlong *)(param_1 + 0x180) = lVar5;
        if ((!bVar6) && (*(char *)(param_1 + 0x322) != '\0')) {
          if (*(longlong *)(param_1 + 0x8838) == 0) {
            lVar3 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
            *(longlong *)(param_1 + 0x8838) = lVar3;
            if (lVar3 == 0) {
              FUN_1436b5820(param_1,"Failed to alloc scratch buffer!");
              return 0x1b;
            }
          }
          lVar3 = 0;
          lVar4 = 0;
          if (0 < lVar5) {
            do {
              cVar1 = *(char *)(lVar4 + *(longlong *)(param_1 + 0x188));
              if (cVar1 == '\n') {
                *(undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x8838)) = 0xd;
                lVar3 = lVar3 + 1;
                *(undefined1 *)(lVar3 + *(longlong *)(param_1 + 0x8838)) = 10;
                if ((*(char *)(param_1 + 0x322) == '\0') && (*(longlong *)(param_1 + 0x8a08) != -1))
                {
                  *(longlong *)(param_1 + 0x8a08) = *(longlong *)(param_1 + 0x8a08) + 1;
                }
              }
              else {
                *(char *)(lVar3 + *(longlong *)(param_1 + 0x8838)) = cVar1;
              }
              lVar4 = lVar4 + 1;
              lVar3 = lVar3 + 1;
            } while (lVar4 < lVar5);
          }
          if (lVar3 != lVar5) {
            *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x8838);
            *(longlong *)(param_1 + 0x180) = lVar3;
            lVar5 = lVar3;
          }
        }
        if (((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x30000) != 0) &&
           (uVar2 = FUN_1436c76c0(param_2,lVar5), (int)uVar2 != 0)) {
          return uVar2;
        }
        goto LAB_1436b9ad0;
      }
      goto LAB_1436b9b7c;
    }
  }
  if ((*(byte *)(param_3 + 0xd8) & 0x20) != 0) {
    return 0;
  }
LAB_1436b9b7c:
  *(uint *)(param_3 + 0xd8) = *(uint *)(param_3 + 0xd8) & 0xfffffffd;
  if ((*(char *)(param_2 + 0x3ca) != '\0') && (uVar2 = FUN_1436b8850(param_2), (int)uVar2 != 0)) {
    return uVar2;
  }
  return 0;
}



// FUNCTION 1436b9c00 FUN_1436b9c00 body=194 status=ok
// SIG undefined FUN_1436b9c00(void)

void FUN_1436b9c00(byte *param_1,byte *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = true;
  bVar2 = true;
  if (*param_2 == 0) {
    *param_1 = 0;
    return;
  }
  do {
    bVar1 = *param_2;
    if (bVar1 == 0x20) {
      if (bVar2) {
        param_1[0] = 0x25;
        param_1[1] = 0x32;
        param_1[2] = 0x30;
        param_1 = param_1 + 3;
      }
      else {
        *param_1 = 0x2b;
        param_1 = param_1 + 1;
      }
    }
    else {
      bVar2 = bVar3;
      if (bVar1 == 0x3f) {
        bVar2 = false;
      }
      bVar3 = bVar2;
      if (bVar1 < 0x80) {
        *param_1 = bVar1;
        param_1 = param_1 + 1;
      }
      else {
        curl_msnprintf(param_1,4,"%%%02x",bVar1);
        param_1 = param_1 + 3;
      }
    }
    param_2 = param_2 + 1;
  } while (*param_2 != 0);
  *param_1 = 0;
  return;
}



// FUNCTION 1436b9cd0 Curl_llist_alloc body=54 status=ok
// SIG undefined Curl_llist_alloc(void)

void Curl_llist_alloc(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  puVar1[2] = param_1;
  puVar1[3] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  return;
}



// FUNCTION 1436b9d10 Curl_llist_destroy body=200 status=ok
// SIG undefined Curl_llist_destroy(void)

void Curl_llist_destroy(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = param_1[3];
    while (lVar1 != 0) {
      puVar2 = (undefined8 *)param_1[1];
      if ((puVar2 != (undefined8 *)0x0) && (lVar1 != 0)) {
        lVar1 = puVar2[2];
        if (puVar2 == (undefined8 *)*param_1) {
          *param_1 = lVar1;
          if (lVar1 == 0) {
            param_1[1] = 0;
          }
          else {
            *(undefined8 *)(puVar2[2] + 8) = 0;
          }
        }
        else {
          *(longlong *)(puVar2[1] + 0x10) = lVar1;
          if (puVar2[2] == 0) {
            param_1[1] = puVar2[1];
          }
          else {
            *(undefined8 *)(puVar2[2] + 8) = puVar2[1];
          }
        }
        (*(code *)param_1[2])(param_2,*puVar2);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
        param_1[3] = param_1[3] + -1;
      }
      lVar1 = param_1[3];
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return;
}



// FUNCTION 1436b9de0 FUN_1436b9de0 body=179 status=ok
// SIG undefined FUN_1436b9de0(void)

undefined8 FUN_1436b9de0(longlong *param_1,longlong param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  
  puVar1 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  *puVar1 = param_3;
  if (param_1[3] == 0) {
    *param_1 = (longlong)puVar1;
    puVar1[1] = 0;
    *(undefined8 *)(*param_1 + 0x10) = 0;
    param_1[1] = (longlong)puVar1;
  }
  else {
    plVar2 = (longlong *)(param_2 + 0x10);
    if (param_2 == 0) {
      plVar2 = param_1;
    }
    puVar1[2] = *plVar2;
    puVar1[1] = param_2;
    if (param_2 == 0) {
      *(undefined8 **)(*param_1 + 8) = puVar1;
      *param_1 = (longlong)puVar1;
    }
    else {
      if (*(longlong *)(param_2 + 0x10) == 0) {
        param_1[1] = (longlong)puVar1;
      }
      else {
        *(undefined8 **)(*(longlong *)(param_2 + 0x10) + 8) = puVar1;
      }
      *(undefined8 **)(param_2 + 0x10) = puVar1;
    }
  }
  param_1[3] = param_1[3] + 1;
  return 1;
}



// FUNCTION 1436b9ea0 Curl_llist_move body=188 status=ok
// SIG undefined Curl_llist_move(void)

undefined8 Curl_llist_move(longlong *param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong lVar1;
  
  if ((param_2 == 0) || (param_1[3] == 0)) {
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x10);
  if (param_2 == *param_1) {
    *param_1 = lVar1;
    if (lVar1 == 0) {
      param_1[1] = 0;
    }
    else {
      *(undefined8 *)(*(longlong *)(param_2 + 0x10) + 8) = 0;
    }
  }
  else {
    *(longlong *)(*(longlong *)(param_2 + 8) + 0x10) = lVar1;
    if (*(longlong *)(param_2 + 0x10) == 0) {
      param_1[1] = *(longlong *)(param_2 + 8);
    }
    else {
      *(longlong *)(*(longlong *)(param_2 + 0x10) + 8) = *(longlong *)(param_2 + 8);
    }
  }
  param_1[3] = param_1[3] + -1;
  if (param_3[3] == 0) {
    *param_3 = param_2;
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(*param_3 + 0x10) = 0;
    param_3[3] = param_3[3] + 1;
    param_3[1] = param_2;
    return 1;
  }
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_4 + 0x10);
  *(longlong *)(param_2 + 8) = param_4;
  if (*(longlong *)(param_4 + 0x10) != 0) {
    *(longlong *)(*(longlong *)(param_4 + 0x10) + 8) = param_2;
    *(longlong *)(param_4 + 0x10) = param_2;
    param_3[3] = param_3[3] + 1;
    return 1;
  }
  param_3[1] = param_2;
  *(longlong *)(param_4 + 0x10) = param_2;
  param_3[3] = param_3[3] + 1;
  return 1;
}



// FUNCTION 1436b9f60 Curl_llist_remove body=153 status=ok
// SIG undefined Curl_llist_remove(void)

undefined8 Curl_llist_remove(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  longlong lVar1;
  
  if ((param_2 != (undefined8 *)0x0) && (param_1[3] != 0)) {
    lVar1 = param_2[2];
    if (param_2 == (undefined8 *)*param_1) {
      *param_1 = lVar1;
      if (lVar1 == 0) {
        param_1[1] = 0;
      }
      else {
        *(undefined8 *)(param_2[2] + 8) = 0;
      }
    }
    else {
      *(longlong *)(param_2[1] + 0x10) = lVar1;
      if (param_2[2] == 0) {
        param_1[1] = param_2[1];
      }
      else {
        *(undefined8 *)(param_2[2] + 8) = param_2[1];
      }
    }
    (*(code *)param_1[2])(param_3,*param_2);
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
    param_1[3] = param_1[3] + -1;
  }
  return 1;
}



// FUNCTION 1436ba000 FUN_1436ba000 body=195 status=ok
// SIG undefined FUN_1436ba000(void)

longlong FUN_1436ba000(longlong *param_1,int param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = 0;
  *(int *)((longlong)param_1 + 0x6fc) = param_2;
  lVar2 = lVar3;
  if (param_2 == 0) {
    if (param_3 == 0) {
      lVar3 = 0x1b;
      lVar2 = 0;
    }
    else {
      lVar1 = *param_1;
      if (*(longlong *)(lVar1 + 0x88) != 0) {
        Curl_share_lock(lVar1,3,2);
      }
      lVar2 = Curl_cache_addr(lVar1,param_3,param_1[0xdc],(int)param_1[0xdd]);
      if (lVar2 == 0) {
        Curl_freeaddrinfo(param_3);
        lVar3 = 0x1b;
      }
      if (*(longlong *)(lVar1 + 0x88) != 0) {
        Curl_share_unlock(lVar1,3);
      }
    }
  }
  param_1[0xde] = lVar2;
  *(undefined1 *)(param_1 + 0xdf) = 1;
  return lVar3;
}



// FUNCTION 1436ba0d0 FUN_1436ba0d0 body=74 status=ok
// SIG undefined FUN_1436ba0d0(void)

ulonglong FUN_1436ba0d0(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x6f0);
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  uVar1 = FUN_1436b0cf0();
  if ((int)uVar1 != 0) {
    FUN_1436ae720(param_1,0);
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}



// FUNCTION 1436ba120 Curl_getaddrinfo body=5 status=ok
// SIG undefined Curl_getaddrinfo(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
Curl_getaddrinfo(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  DWORD DVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auStack_d8 [32];
  undefined8 uStack_b8;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  longlong lStack_98;
  ulonglong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [16];
  undefined1 auStack_58 [16];
  ulonglong uStack_48;
  
  uStack_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar6 = 0;
  *param_4 = 0;
  iVar2 = Curl_inet_pton(2,param_2,auStack_a8);
  if (iVar2 < 1) {
    iVar2 = Curl_inet_pton(0x17,param_2,auStack_68);
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
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      uStack_70 = 0;
      uStack_90 = (ulonglong)*(uint *)((longlong)param_1 + 0xa4);
      lStack_98 = (ulonglong)uVar6 << 0x20;
      curl_msnprintf(auStack_58,0xc,&DAT_145af963c,param_3);
      cVar1 = FUN_1436ac070(param_1,param_2,param_3,&lStack_98);
      if (cVar1 == '\0') {
        DVar3 = GetLastError();
        uVar5 = FUN_1436a7be0(param_1,DVar3);
        FUN_1436b58e0(*param_1,"init_resolve_thread() failed for %s; %s\n",param_2,uVar5);
        iVar2 = Curl_getaddrinfo_ex(param_2,auStack_58,&lStack_98,&uStack_a0);
        if (iVar2 != 0) {
          uVar4 = Ordinal_111();
          uStack_b8 = FUN_1436a7be0(param_1,uVar4);
          FUN_1436b58e0(*param_1,"getaddrinfo() failed for %s:%d; %s\n",param_2,param_3);
          uStack_a0 = 0;
        }
      }
      else {
        *param_4 = 1;
        uStack_a0 = 0;
      }
    }
    else {
      uStack_a0 = Curl_ip2addr(0x17,auStack_68,param_2,param_3);
    }
  }
  else {
    uStack_a0 = Curl_ip2addr(2,auStack_a8,param_2,param_3);
  }
  return uStack_a0;
}



// FUNCTION 1436ba130 Curl_splay body=300 status=ok
// SIG undefined Curl_splay(void)

longlong * Curl_splay(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iStackX_c;
  longlong local_38;
  longlong local_30;
  
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  local_30 = 0;
  local_38 = 0;
  plVar4 = &local_38;
  plVar6 = &local_38;
  do {
    while( true ) {
      iStackX_c = (int)((ulonglong)param_1 >> 0x20);
      iVar1 = (int)param_1;
      if (iVar1 < (int)param_2[3]) break;
      if (iVar1 <= (int)param_2[3]) {
        if (iStackX_c < *(int *)((longlong)param_2 + 0x1c)) break;
        if (iStackX_c <= *(int *)((longlong)param_2 + 0x1c)) goto LAB_1436ba231;
      }
      plVar3 = (longlong *)param_2[1];
      plVar5 = param_2 + 1;
      if (plVar3 == (longlong *)0x0) goto LAB_1436ba231;
      plVar2 = param_2;
      if (((int)plVar3[3] <= iVar1) &&
         (((int)plVar3[3] < iVar1 ||
          ((*(int *)((longlong)plVar3 + 0x1c) <= iStackX_c &&
           (*(int *)((longlong)plVar3 + 0x1c) < iStackX_c)))))) {
        *plVar5 = *plVar3;
        plVar5 = plVar3 + 1;
        *plVar3 = (longlong)param_2;
        param_2 = plVar3;
        plVar2 = plVar3;
        if (*plVar5 == 0) goto LAB_1436ba231;
      }
      plVar4[1] = (longlong)plVar2;
      param_2 = (longlong *)*plVar5;
      plVar4 = plVar2;
    }
    plVar5 = (longlong *)*param_2;
    if (plVar5 == (longlong *)0x0) {
LAB_1436ba231:
      plVar4[1] = *param_2;
      *plVar6 = param_2[1];
      *param_2 = local_30;
      param_2[1] = local_38;
      return param_2;
    }
    if ((iVar1 < (int)plVar5[3]) ||
       ((plVar3 = param_2, iVar1 <= (int)plVar5[3] &&
        (iStackX_c < *(int *)((longlong)plVar5 + 0x1c))))) {
      *param_2 = plVar5[1];
      plVar5[1] = (longlong)param_2;
      param_2 = plVar5;
      plVar3 = plVar5;
      if (*plVar5 == 0) goto LAB_1436ba231;
    }
    *plVar6 = (longlong)plVar3;
    param_2 = (longlong *)*plVar3;
    plVar6 = plVar3;
  } while( true );
}



// FUNCTION 1436ba260 Curl_splaygetbest body=266 status=ok
// SIG undefined Curl_splaygetbest(void)

longlong * Curl_splaygetbest(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  int iStackX_c;
  
  if (param_2 == 0) {
    *param_3 = 0;
    return (longlong *)0x0;
  }
  plVar1 = (longlong *)Curl_splay();
  iVar3 = (int)param_1;
  iStackX_c = (int)((ulonglong)param_1 >> 0x20);
  if ((iVar3 < (int)plVar1[3]) ||
     ((iVar3 <= (int)plVar1[3] && (iStackX_c < *(int *)((longlong)plVar1 + 0x1c))))) {
    if (*plVar1 == 0) goto LAB_1436ba355;
    plVar1 = (longlong *)Curl_splay(*(undefined8 *)(*plVar1 + 0x18),plVar1);
  }
  if (((int)plVar1[3] <= iVar3) &&
     (((int)plVar1[3] < iVar3 || (*(int *)((longlong)plVar1 + 0x1c) <= iStackX_c)))) {
    plVar2 = (longlong *)plVar1[2];
    if (plVar2 != (longlong *)0x0) {
      plVar2[3] = plVar1[3];
      plVar2[1] = plVar1[1];
      *plVar2 = *plVar1;
      *param_3 = plVar1;
      return plVar2;
    }
    if (*plVar1 != 0) {
      plVar2 = (longlong *)Curl_splay();
      plVar2[1] = plVar1[1];
      *param_3 = plVar1;
      return plVar2;
    }
    plVar2 = (longlong *)plVar1[1];
    *param_3 = plVar1;
    return plVar2;
  }
LAB_1436ba355:
  *param_3 = 0;
  return plVar1;
}



// FUNCTION 1436ba370 Curl_splayinsert body=260 status=ok
// SIG undefined Curl_splayinsert(void)

undefined8 * Curl_splayinsert(undefined8 param_1,undefined8 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  int iVar3;
  int iStackX_c;
  
  if (param_3 == (undefined8 *)0x0) {
    return param_2;
  }
  if (param_2 == (undefined8 *)0x0) {
    param_3[3] = param_1;
    param_3[1] = 0;
    *param_3 = 0;
    param_3[2] = 0;
    return param_3;
  }
  puVar2 = (undefined8 *)Curl_splay();
  iStackX_c = (int)((ulonglong)param_1 >> 0x20);
  iVar1 = *(int *)(puVar2 + 3);
  iVar3 = (int)param_1;
  if (iVar1 <= iVar3) {
    if (iVar3 <= iVar1) {
      if ((*(int *)((longlong)puVar2 + 0x1c) <= iStackX_c) &&
         (iStackX_c <= *(int *)((longlong)puVar2 + 0x1c))) {
        param_3[2] = puVar2;
        param_3[3] = param_1;
        *param_3 = *puVar2;
        param_3[1] = puVar2[1];
        puVar2[3] = 0xffffffffffffffff;
        *puVar2 = param_3;
        return param_3;
      }
      if ((iVar3 < iVar1) || ((iVar3 <= iVar1 && (iStackX_c < *(int *)((longlong)puVar2 + 0x1c)))))
      goto LAB_1436ba436;
    }
    param_3[1] = puVar2[1];
    *param_3 = puVar2;
    puVar2[1] = 0;
    param_3[3] = param_1;
    param_3[2] = 0;
    return param_3;
  }
LAB_1436ba436:
  *param_3 = *puVar2;
  param_3[1] = puVar2;
  *puVar2 = 0;
  param_3[3] = param_1;
  param_3[2] = 0;
  return param_3;
}



// FUNCTION 1436ba480 Curl_splayremovebyaddr body=316 status=ok
// SIG undefined Curl_splayremovebyaddr(void)

undefined4 Curl_splayremovebyaddr(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((param_1 == 0) || (param_2 == (longlong *)0x0)) {
    return 1;
  }
  if ((((int)param_2[3] == -1) && (0x7fffffff < *(uint *)((longlong)param_2 + 0x1c))) &&
     (-2 < (int)*(uint *)((longlong)param_2 + 0x1c))) {
    if (*param_2 == 0) {
      return 3;
    }
    *(longlong *)(*param_2 + 0x10) = param_2[2];
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      *(longlong *)param_2[2] = *param_2;
    }
    *param_2 = 0;
    *param_3 = param_1;
    return 0;
  }
  plVar2 = (longlong *)Curl_splay(param_2[3],param_1);
  if (plVar2 != param_2) {
    return 2;
  }
  plVar1 = (longlong *)plVar2[2];
  if (plVar1 != (longlong *)0x0) {
    plVar1[3] = plVar2[3];
    plVar1[1] = plVar2[1];
    *plVar1 = *plVar2;
    *param_3 = (longlong)plVar1;
    return 0;
  }
  if (*plVar2 == 0) {
    *param_3 = plVar2[1];
    return 0;
  }
  lVar3 = Curl_splay(param_2[3]);
  *(longlong *)(lVar3 + 8) = plVar2[1];
  *param_3 = lVar3;
  return 0;
}



// FUNCTION 1436ba5c0 FUN_1436ba5c0 body=5652 status=ok
// SIG undefined FUN_1436ba5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

longlong * FUN_1436ba5c0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  char *pcVar8;
  void *_Dst;
  char *pcVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined1 *puVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 *puVar19;
  longlong lVar20;
  undefined4 uVar21;
  size_t _Size;
  undefined8 uVar22;
  undefined *puVar23;
  size_t sVar24;
  int iVar25;
  bool bVar26;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  char *local_c0;
  longlong *local_b8;
  uint local_b0;
  int local_ac;
  char *local_a8;
  undefined1 *local_a0;
  char *local_98;
  longlong *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  char *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_50;
  undefined8 local_4f;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *param_1;
  plVar18 = (longlong *)0x0;
  local_b0 = local_b0 & 0xffffff00;
  local_98 = "";
  pcVar8 = *(char **)(lVar1 + 0x89d8);
  local_4f = 0;
  local_80 = param_1[0x17];
  local_50 = 0;
  iVar25 = *(int *)(lVar1 + 0x380);
  *param_2 = 1;
  local_78 = 0;
  local_b8 = (longlong *)0x0;
  local_58 = (longlong *)0x0;
  if (0x13 < *(int *)((longlong)param_1 + 0x1b4)) {
    return (longlong *)0x1;
  }
  if ((int)param_1[0x104] == 3) {
    *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x14;
    return (longlong *)0x1;
  }
  plVar7 = *(longlong **)(lVar1 + 0x198);
  local_ac = iVar25;
  local_a8 = pcVar8;
  local_90 = plVar7;
  local_60 = param_1;
  if (*(char *)(lVar1 + 0x87f8) == '\0') {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x8800));
    lVar6 = (*(code *)PTR__strdup_1467dcc70)(param_1[0x17]);
    *(longlong *)(lVar1 + 0x8800) = lVar6;
    if (lVar6 == 0) {
      return (longlong *)0x1b;
    }
    *(undefined4 *)(lVar1 + 0x8808) = *(undefined4 *)((longlong)param_1 + 0x10c);
  }
  local_70 = plVar7 + 5;
  plVar7[6] = 0;
  *local_70 = 0;
  local_88 = plVar7 + 6;
  if (((*(byte *)(param_1[0x7d] + 0x74) & 7) != 0) &&
     (local_ac = iVar25, *(char *)(lVar1 + 0x450) != '\0')) {
    iVar25 = 4;
    local_ac = iVar25;
  }
  puVar19 = *(undefined1 **)(lVar1 + 0x4a8);
  if (puVar19 == (undefined1 *)0x0) {
    if (*(char *)(lVar1 + 0x44f) == '\0') {
      if (iVar25 < 2) {
LAB_1436ba771:
        puVar19 = &DAT_145b250c4;
      }
      else if (iVar25 < 4) {
        puVar19 = &DAT_145b250c8;
      }
      else if (iVar25 == 4) {
        puVar19 = &DAT_145b250d0;
      }
      else {
        if (iVar25 != 5) goto LAB_1436ba771;
        puVar19 = &DAT_145b377dc;
      }
    }
    else {
      puVar19 = &DAT_145b377dc;
    }
  }
  local_a0 = puVar19;
  for (plVar7 = *(longlong **)(*param_1 + 0x308); plVar7 != (longlong *)0x0;
      plVar7 = (longlong *)plVar7[1]) {
    iVar4 = Curl_raw_nequal(*plVar7,"User-Agent:",0xb);
    if (iVar4 != 0) {
      if (*plVar7 != 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x83]);
        param_1[0x83] = 0;
      }
      break;
    }
  }
  plVar7 = (longlong *)FUN_1436bcd40(param_1,puVar19,pcVar8,0);
  if ((int)plVar7 != 0) {
    return plVar7;
  }
  if (((*(char *)(lVar1 + 0x895d) == '\0') && (*(char *)(lVar1 + 0x896d) == '\0')) ||
     ((iVar25 - 1U & 0xfffffffb) == 0)) {
    *(undefined1 *)((longlong)param_1 + 0x3c9) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x3c9) = 1;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x87]);
  param_1[0x87] = 0;
  if ((*(longlong *)(lVar1 + 0x680) == 0) || (lVar6 = FUN_1436bc690(param_1,"Referer:"), lVar6 != 0)
     ) {
    param_1[0x87] = 0;
  }
  else {
    lVar6 = curl_maprintf("Referer: %s\r\n",*(undefined8 *)(lVar1 + 0x680));
    param_1[0x87] = lVar6;
    if (lVar6 == 0) {
      return (longlong *)0x1b;
    }
  }
  if ((*(longlong *)(lVar1 + 0x498) != 0) && (lVar6 = FUN_1436bc690(param_1,"Cookie:"), lVar6 == 0))
  {
    local_78 = *(longlong *)(lVar1 + 0x498);
  }
  lVar6 = FUN_1436bc690(param_1,"Accept-Encoding:");
  if ((lVar6 == 0) && (*(longlong *)(lVar1 + 0x4c0) != 0)) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x84]);
    param_1[0x84] = 0;
    lVar6 = curl_maprintf("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar1 + 0x4c0));
    param_1[0x84] = lVar6;
    if (lVar6 == 0) {
      return (longlong *)0x1b;
    }
  }
  else {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x84]);
    param_1[0x84] = 0;
  }
  if (*(int *)((longlong)param_1 + 0x1b4) != 0x14) {
    lVar6 = FUN_1436bc690(param_1,"Transfer-Encoding:");
    if (lVar6 == 0) {
      if ((((*(byte *)(param_1[0x7d] + 0x74) & 3) == 0) || (*(char *)(lVar1 + 0x450) == '\0')) ||
         (*(longlong *)(lVar1 + 0x8a08) != -1)) {
        *(undefined1 *)(lVar1 + 0x191) = 0;
      }
      else if (*(char *)((longlong)param_1 + 0x3c9) == '\0') {
        cVar3 = FUN_1436be760(lVar1,param_1);
        if (cVar3 == '\0') {
          FUN_1436b5820();
          return (longlong *)0x19;
        }
        *(undefined1 *)(lVar1 + 0x191) = 1;
      }
      local_98 = "Transfer-Encoding: chunked\r\n";
      if (*(char *)(lVar1 + 0x191) == '\0') {
        local_98 = "";
      }
    }
    else {
      uVar2 = Curl_compareheader(lVar6,"Transfer-Encoding:");
      *(undefined1 *)(lVar1 + 0x191) = uVar2;
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x88]);
  param_1[0x88] = 0;
  lVar6 = FUN_1436bc690(param_1,"Host:");
  if ((lVar6 == 0) ||
     ((*(char *)(lVar1 + 0x87f8) != '\0' &&
      (iVar4 = Curl_strcasecompare(*(undefined8 *)(lVar1 + 0x8800),param_1[0x17]), iVar4 == 0)))) {
    if ((((*(uint *)(param_1[0x7e] + 0x74) & 2) == 0) ||
        (*(int *)((longlong)param_1 + 0x10c) != 0x1bb)) &&
       (((*(uint *)(param_1[0x7e] + 0x74) & 1) == 0 || (*(int *)((longlong)param_1 + 0x10c) != 0x50)
        ))) {
      bVar26 = *(char *)((longlong)param_1 + 0x3c1) != '\0';
      puVar19 = &DAT_145af3922;
      if (bVar26) {
        puVar19 = &DAT_145b18618;
      }
      local_108 = (longlong *)CONCAT44(local_108._4_4_,*(undefined4 *)((longlong)param_1 + 0x10c));
      puVar16 = &DAT_145af3922;
      if (bVar26) {
        puVar16 = &DAT_145b4dda8;
      }
      lVar6 = curl_maprintf("Host: %s%s%s:%hu\r\n",puVar16,local_80,puVar19);
    }
    else {
      puVar19 = &DAT_145af3922;
      puVar16 = &DAT_145af3922;
      if (*(char *)((longlong)param_1 + 0x3c1) != '\0') {
        puVar19 = &DAT_145b18618;
        puVar16 = &DAT_145b4dda8;
      }
      lVar6 = curl_maprintf("Host: %s%s%s\r\n",puVar16,local_80,puVar19);
    }
    param_1[0x88] = lVar6;
joined_r0x0001436bab9a:
    if (lVar6 == 0) {
      return (longlong *)0x1b;
    }
  }
  else {
    pcVar8 = (char *)Curl_copy_header_value(lVar6);
    if (pcVar8 == (char *)0x0) {
      return (longlong *)0x1b;
    }
    if (*pcVar8 == '\0') {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar8);
    }
    else {
      if (*pcVar8 == '[') {
        sVar24 = 0xffffffffffffffff;
        do {
          _Size = sVar24;
          sVar24 = _Size + 1;
        } while (pcVar8[sVar24] != '\0');
        memmove(pcVar8,pcVar8 + 1,_Size);
        iVar4 = 0x5d;
      }
      else {
        iVar4 = 0x3a;
      }
      pcVar9 = strchr(pcVar8,iVar4);
      if (pcVar9 != (char *)0x0) {
        *pcVar9 = '\0';
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x89]);
      param_1[0x89] = (longlong)pcVar8;
    }
    lVar20 = 0;
    do {
      lVar14 = lVar20 + 1;
      if ("Host:"[lVar20] != *(char *)(lVar20 + lVar6)) {
        lVar6 = curl_maprintf(&DAT_145b6b254,lVar6);
        param_1[0x88] = lVar6;
        goto joined_r0x0001436bab9a;
      }
      lVar20 = lVar14;
    } while (lVar14 != 6);
    param_1[0x88] = 0;
  }
  if ((*(char *)((longlong)param_1 + 0x3be) != '\0') && ((char)param_1[0x79] == '\0')) {
    if ((char *)param_1[0x18] != (char *)param_1[0x17]) {
      pcVar8 = *(char **)(lVar1 + 0x670);
      local_68 = pcVar8;
      local_a8 = strstr(pcVar8,(char *)param_1[0x18]);
      if (local_a8 != (char *)0x0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(param_1[0x18] + lVar6) != '\0');
        sVar24 = 0xffffffffffffffff;
        do {
          sVar24 = sVar24 + 1;
        } while (*(char *)(param_1[0x17] + sVar24) != '\0');
        lVar20 = -1;
        do {
          lVar20 = lVar20 + 1;
        } while (pcVar8[lVar20] != '\0');
        _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                 ((lVar20 - lVar6) + 1 + sVar24);
        if (_Dst == (void *)0x0) {
          return (longlong *)0x1b;
        }
        _guard_xfg_dispatch_icall_nop(_Dst,pcVar8,(longlong)local_a8 - (longlong)pcVar8);
        lVar14 = (longlong)_Dst - (longlong)local_68;
        _guard_xfg_dispatch_icall_nop(local_a8 + lVar14,(void *)param_1[0x17],sVar24);
        _guard_xfg_dispatch_icall_nop
                  (local_a8 + lVar14 + sVar24,local_a8 + lVar6,
                   (size_t)(local_68 + ((lVar20 - lVar6) - (longlong)local_a8) + 1));
        if (*(char *)(lVar1 + 0x678) != '\0') {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x670));
          *(undefined8 *)(lVar1 + 0x670) = 0;
          *(undefined1 *)(lVar1 + 0x678) = 0;
        }
        *(void **)(lVar1 + 0x670) = _Dst;
        *(undefined1 *)(lVar1 + 0x678) = 1;
        iVar25 = local_ac;
      }
    }
    pcVar8 = *(char **)(lVar1 + 0x670);
    local_a8 = pcVar8;
    iVar4 = Curl_raw_nequal("ftp://",pcVar8,6);
    if (iVar4 != 0) {
      if (*(char *)(lVar1 + 0x484) != '\0') {
        pcVar9 = strstr(pcVar8,";type=");
        if (pcVar9 == (char *)0x0) {
LAB_1436bad76:
          puVar15 = (undefined8 *)&local_50;
          if (**(char **)(lVar1 + 0x89d8) == '\0') {
            lVar6 = -1;
            do {
              lVar20 = lVar6;
              lVar6 = lVar20 + 1;
            } while (pcVar8[lVar20 + 1] != '\0');
            if (pcVar8[lVar20] != '/') {
              local_50 = 0x2f;
              puVar15 = &local_4f;
            }
          }
          uVar22 = 0x69;
          if (*(char *)(lVar1 + 0x443) != '\0') {
            uVar22 = 0x61;
          }
          curl_msnprintf(puVar15,8,";type=%c",uVar22);
        }
        else if ((pcVar9[6] != '\0') && (pcVar9[7] == '\0')) {
          cVar3 = Curl_raw_toupper();
          if ((8 < (byte)(cVar3 + 0xbfU)) || ((0x109U >> ((byte)(cVar3 + 0xbfU) & 0x1f) & 1) == 0))
          goto LAB_1436bad76;
        }
      }
      if ((*(char *)((longlong)param_1 + 0x3bf) != '\0') &&
         (local_b0 = local_b0 & 0xff, *(char *)((longlong)param_1 + 0x3ce) == '\0')) {
        local_b0 = 1;
      }
    }
  }
  plVar7 = local_90;
  pcVar8 = (char *)0x0;
  if (iVar25 == 3) {
    plVar10 = local_90 + 1;
    uVar22 = FUN_1436bc690(param_1,"Content-Type:");
    local_108 = plVar10;
    plVar10 = (longlong *)FUN_1436d83b0(lVar1,plVar7,*(undefined8 *)(lVar1 + 0x318),uVar22);
    if ((int)plVar10 != 0) {
      return plVar10;
    }
  }
  lVar6 = FUN_1436bc690(param_1,"Accept:");
  pcVar9 = "Accept: */*\r\n";
  if (lVar6 != 0) {
    pcVar9 = pcVar8;
  }
  plVar7[4] = (longlong)pcVar9;
  if ((iVar25 - 2U < 3) && (*(longlong *)(lVar1 + 0x89f0) != 0)) {
    if (*(longlong *)(lVar1 + 0x89f0) < 0) {
      *(undefined8 *)(lVar1 + 0x89f0) = 0;
    }
    if ((*(longlong *)(lVar1 + 0x89f0) != 0) && (*(char *)(lVar1 + 0x87f8) == '\0')) {
      if (((code *)param_1[0x9e] != (code *)0x0) &&
         (iVar4 = (*(code *)param_1[0x9e])(param_1[0x9f],*(longlong *)(lVar1 + 0x89f0),0),
         iVar4 != 0)) {
        if (iVar4 != 2) {
          FUN_1436b5820(lVar1,"Could not seek stream");
          return (longlong *)0x1a;
        }
        do {
          if (*(longlong *)(lVar1 + 0x89f0) - (longlong)pcVar8 < 0x4001) {
            uVar17 = UWaterWaves::GetWaterWaves();
          }
          else {
            uVar17 = 0x4000;
          }
          uVar11 = (**(code **)(lVar1 + 0x8a20))
                             (lVar1 + 0x7e8,1,uVar17,*(undefined8 *)(lVar1 + 0x8a28));
          pcVar8 = pcVar8 + uVar11;
          if ((uVar11 == 0) || (uVar17 < uVar11)) {
            FUN_1436b5820(lVar1,"Could only read %I64d bytes from the input",pcVar8);
            return (longlong *)0x1a;
          }
          plVar7 = local_90;
        } while ((longlong)pcVar8 < *(longlong *)(lVar1 + 0x89f0));
      }
      if ((0 < *(longlong *)(lVar1 + 0x8a08)) &&
         (lVar6 = *(longlong *)(lVar1 + 0x8a08) - *(longlong *)(lVar1 + 0x89f0),
         *(longlong *)(lVar1 + 0x8a08) = lVar6, lVar6 < 1)) {
        FUN_1436b5820(lVar1,"File already completely uploaded");
        return (longlong *)0x12;
      }
    }
  }
  if (*(char *)(lVar1 + 0x89e1) != '\0') {
    if (((iVar25 - 1U & 0xfffffffb) == 0) && (lVar6 = FUN_1436bc690(param_1,"Range:"), lVar6 == 0))
    {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x86]);
      lVar6 = curl_maprintf("Range: bytes=%s\r\n",*(undefined8 *)(lVar1 + 0x89e8));
      param_1[0x86] = lVar6;
    }
    else if ((iVar25 != 1) && (lVar6 = FUN_1436bc690(param_1,"Content-Range:"), lVar6 == 0)) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x86]);
      if (*(longlong *)(lVar1 + 0x300) < 0) {
        lVar20 = *(longlong *)(lVar1 + 0x8a08);
        pcVar8 = "Content-Range: bytes 0-%I64d/%I64d\r\n";
        lVar6 = lVar20 + -1;
LAB_1436bb06d:
        lVar6 = curl_maprintf(pcVar8,lVar6,lVar20);
      }
      else {
        lVar6 = *(longlong *)(lVar1 + 0x89e8);
        if (*(longlong *)(lVar1 + 0x89f0) == 0) {
          lVar20 = *(longlong *)(lVar1 + 0x8a08);
          pcVar8 = "Content-Range: bytes %s/%I64d\r\n";
          goto LAB_1436bb06d;
        }
        lVar6 = curl_maprintf("Content-Range: bytes %s%I64d/%I64d\r\n",lVar6,
                              *(longlong *)(lVar1 + 0x8a08) + *(longlong *)(lVar1 + 0x89f0) + -1);
      }
      param_1[0x86] = lVar6;
      if (lVar6 == 0) {
        return (longlong *)0x1b;
      }
    }
  }
  cVar3 = FUN_1436be760(lVar1,param_1);
  puVar23 = &DAT_145b6b52c;
  if (cVar3 != '\0') {
    puVar23 = &DAT_145b6b528;
  }
  lVar6 = (*(code *)PTR_calloc_1467dcc78)(1,0x18);
  if (lVar6 == 0) {
    return (longlong *)0x1b;
  }
  plVar10 = (longlong *)Curl_add_bufferf(lVar6,&DAT_145b6b530);
  if ((int)plVar10 != 0) {
    return plVar10;
  }
  if ((char)local_b0 == '\0') {
    lVar20 = -1;
    do {
      lVar20 = lVar20 + 1;
    } while (local_a8[lVar20] != '\0');
    plVar10 = (longlong *)Curl_add_buffer(lVar6);
  }
  else {
    local_108 = (longlong *)(local_a8 + 6);
    plVar10 = (longlong *)Curl_add_bufferf(lVar6,"ftp://%s:%s@%s",param_1[0x30],param_1[0x31]);
  }
  if ((int)plVar10 != 0) {
    return plVar10;
  }
  if ((*(longlong *)(lVar1 + 0x680) == 0) ||
     (local_c8 = (undefined1 *)param_1[0x87], local_c8 == (undefined1 *)0x0)) {
    local_c8 = &DAT_145af3922;
  }
  if (((*(char **)(lVar1 + 0x4c0) == (char *)0x0) || (**(char **)(lVar1 + 0x4c0) == '\0')) ||
     (local_d0 = (undefined1 *)param_1[0x84], local_d0 == (undefined1 *)0x0)) {
    local_d0 = &DAT_145af3922;
  }
  local_d8 = &DAT_145af3922;
  if ((undefined1 *)param_1[0x8b] != (undefined1 *)0x0) {
    local_d8 = (undefined1 *)param_1[0x8b];
  }
  local_e0 = &DAT_145af3922;
  if ((undefined1 *)plVar7[4] != (undefined1 *)0x0) {
    local_e0 = (undefined1 *)plVar7[4];
  }
  if (((*(char **)(lVar1 + 0x558) == (char *)0x0) || (**(char **)(lVar1 + 0x558) == '\0')) ||
     (local_e8 = (undefined1 *)param_1[0x83], local_e8 == (undefined1 *)0x0)) {
    local_e8 = &DAT_145af3922;
  }
  if ((*(char *)(lVar1 + 0x89e1) == '\0') ||
     (local_f0 = (undefined1 *)param_1[0x86], local_f0 == (undefined1 *)0x0)) {
    local_f0 = &DAT_145af3922;
  }
  local_f8 = (longlong *)&DAT_145af3922;
  if ((undefined1 *)param_1[0x85] != (undefined1 *)0x0) {
    local_f8 = (longlong *)param_1[0x85];
  }
  local_100 = &DAT_145af3922;
  if ((undefined1 *)param_1[0x82] != (undefined1 *)0x0) {
    local_100 = (undefined1 *)param_1[0x82];
  }
  local_108 = (longlong *)&DAT_145af3922;
  if ((undefined1 *)param_1[0x88] != (undefined1 *)0x0) {
    local_108 = (longlong *)param_1[0x88];
  }
  local_c0 = local_98;
  uVar5 = Curl_add_bufferf(lVar6,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s",&local_50,puVar23);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x85]);
  iVar25 = 0;
  param_1[0x85] = 0;
  if ((*(uint *)(lVar1 + 0x8964) < 0x21) &&
     ((0x100000110U >> ((ulonglong)*(uint *)(lVar1 + 0x8964) & 0x3f) & 1) != 0)) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0x82]);
    param_1[0x82] = 0;
  }
  if (uVar5 != 0) {
    return (longlong *)(ulonglong)uVar5;
  }
  if ((((*(byte *)(param_1[0x7d] + 0x78) & 1) == 0) && (*(int *)((longlong)param_1 + 0x1b4) != 0x14)
      ) && (*(int *)(lVar1 + 900) == 3)) {
    return (longlong *)0x1;
  }
  if ((*(longlong *)(lVar1 + 0x6a0) != 0) || (local_78 != 0)) {
    plVar7 = (longlong *)0x0;
    iVar4 = 0;
    if (*(longlong *)(lVar1 + 0x6a0) != 0) {
      Curl_share_lock(lVar1,2,2);
      lVar20 = local_80;
      if (param_1[0x89] != 0) {
        lVar20 = param_1[0x89];
      }
      plVar12 = (longlong *)
                FUN_1436aa880(*(undefined8 *)(lVar1 + 0x6a0),lVar20,*(undefined8 *)(lVar1 + 0x89d8),
                              CONCAT31((uint3)(*(uint *)(param_1[0x7d] + 0x74) >> 9),
                                       (char)(*(uint *)(param_1[0x7d] + 0x74) >> 1)) & 0xffffff01);
      Curl_share_unlock(lVar1,2);
      plVar18 = (longlong *)0x0;
      plVar10 = plVar12;
      iVar4 = 0;
      if (plVar12 != (longlong *)0x0) {
        do {
          if (plVar10[2] != 0) {
            iVar4 = iVar25;
            if (iVar25 == 0) {
              uVar5 = Curl_add_bufferf(lVar6,"Cookie: ");
              plVar7 = (longlong *)(ulonglong)uVar5;
              if (uVar5 != 0) break;
            }
            local_108 = (longlong *)plVar10[2];
            puVar19 = &DAT_145af3922;
            if (iVar25 != 0) {
              puVar19 = &DAT_145b6b57c;
            }
            uVar5 = Curl_add_bufferf(lVar6,"%s%s=%s",puVar19,plVar10[1]);
            plVar7 = (longlong *)(ulonglong)uVar5;
            if (uVar5 != 0) break;
            iVar25 = iVar25 + 1;
          }
          plVar10 = (longlong *)*plVar10;
          iVar4 = iVar25;
        } while (plVar10 != (longlong *)0x0);
        Curl_cookie_freelist(plVar12,0);
        param_1 = local_60;
        plVar18 = local_58;
      }
    }
    lVar20 = local_78;
    if ((local_78 != 0) && ((int)plVar7 == 0)) {
      if (iVar4 == 0) {
        uVar5 = Curl_add_bufferf(lVar6,"Cookie: ");
        if (uVar5 != 0) {
          return (longlong *)(ulonglong)uVar5;
        }
      }
      puVar19 = &DAT_145af3922;
      if (iVar4 != 0) {
        puVar19 = &DAT_145b6b57c;
      }
      uVar5 = Curl_add_bufferf(lVar6,&DAT_145b6b588,puVar19,lVar20);
      plVar7 = (longlong *)(ulonglong)uVar5;
      iVar4 = iVar4 + 1;
    }
    if (iVar4 != 0) {
      if ((int)plVar7 != 0) {
        return plVar7;
      }
      uVar5 = Curl_add_buffer(lVar6,&DAT_145b5531c,2);
      plVar7 = (longlong *)(ulonglong)uVar5;
    }
    if ((int)plVar7 != 0) {
      return plVar7;
    }
  }
  plVar7 = (longlong *)0x0;
  plVar10 = (longlong *)FUN_1436bc4b0(lVar1,lVar6);
  if ((int)plVar10 != 0) {
    return plVar10;
  }
  plVar12 = (longlong *)FUN_1436bc260(param_1,0,lVar6);
  plVar10 = local_90;
  if ((int)plVar12 != 0) {
    return plVar12;
  }
  plVar12 = local_90 + 2;
  *plVar12 = 0;
  FUN_1436bedd0(lVar1,0xffffffffffffffff);
  if (local_ac == 2) {
    plVar18 = plVar7;
    if ((*(char *)((longlong)param_1 + 0x3c9) == '\0') &&
       (plVar18 = *(longlong **)(lVar1 + 0x8a08), plVar18 == (longlong *)&DAT_ffffffffffffffff)) {
      plVar13 = (longlong *)&DAT_ffffffffffffffff;
      if (*(longlong *)(lVar1 + 0x200) != 0) {
        do {
          plVar13 = (longlong *)((longlong)plVar13 + 1);
        } while (*(char *)(*(longlong *)(lVar1 + 0x200) + (longlong)plVar13) != '\0');
        plVar18 = plVar13;
        if (plVar13 != (longlong *)&DAT_ffffffffffffffff) goto LAB_1436bb862;
      }
    }
    else {
LAB_1436bb862:
      if (((*(char *)(lVar1 + 0x191) == '\0') &&
          (lVar20 = FUN_1436bc690(param_1,"Content-Length:"), lVar20 == 0)) &&
         (plVar13 = (longlong *)Curl_add_bufferf(lVar6,"Content-Length: %I64d\r\n",plVar18),
         (int)plVar13 != 0)) {
        return plVar13;
      }
    }
    lVar20 = FUN_1436bc690(param_1,"Content-Type:");
    if ((lVar20 == 0) &&
       (plVar13 = (longlong *)
                  Curl_add_bufferf(lVar6,"Content-Type: application/x-www-form-urlencoded\r\n"),
       (int)plVar13 != 0)) {
      return plVar13;
    }
    lVar20 = FUN_1436bc690(param_1,"Expect:");
    if (lVar20 == 0) {
      if (plVar18 < (longlong *)0x401) {
        *(undefined1 *)(lVar1 + 0x89c8) = 0;
      }
      else {
        plVar13 = (longlong *)FUN_1436bde90(lVar1,param_1,lVar6);
        if ((int)plVar13 != 0) {
          return plVar13;
        }
      }
    }
    else {
      uVar2 = Curl_compareheader(lVar20,"Expect:","100-continue");
      *(undefined1 *)(lVar1 + 0x89c8) = uVar2;
    }
    if (*(longlong *)(lVar1 + 0x200) == 0) {
      plVar13 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
      if ((int)plVar13 != 0) {
        return plVar13;
      }
      if ((*(char *)(lVar1 + 0x191) == (char)plVar13) ||
         (*(char *)((longlong)param_1 + 0x3c9) == (char)plVar13)) {
        plVar13 = local_b8;
        if (*(longlong *)(lVar1 + 0x8a08) != 0) {
          plVar13 = (longlong *)&DAT_ffffffffffffffff;
          if (plVar18 != (longlong *)0x0) {
            plVar13 = plVar18;
          }
          FUN_1436bedd0(lVar1,plVar13);
          plVar13 = local_b8;
          if (*(char *)((longlong)param_1 + 0x3c9) == '\0') {
            *plVar12 = (longlong)plVar12;
            plVar10[1] = (longlong)plVar18;
          }
        }
      }
      else {
        uVar21 = 5;
        pcVar8 = "0\r\n\r\n";
LAB_1436bba94:
        plVar10 = (longlong *)Curl_add_buffer(lVar6,pcVar8,uVar21);
        plVar13 = local_b8;
        if ((int)plVar10 != 0) {
          return plVar10;
        }
      }
    }
    else {
      if (((*(int *)((longlong)param_1 + 0x1b4) == 0x14) || (*(char *)(lVar1 + 0x89c8) != '\0')) ||
         (0xffff < (longlong)plVar18)) {
        plVar10[1] = (longlong)plVar18;
        *plVar12 = *(longlong *)(lVar1 + 0x200);
        *(undefined4 *)(plVar10 + 0xf) = 2;
        *(code **)(lVar1 + 0x8a20) = FUN_1436be670;
        *(longlong **)(lVar1 + 0x8a28) = param_1;
        FUN_1436bedd0(lVar1,plVar10[1]);
        uVar21 = 2;
        pcVar8 = "\r\n";
        goto LAB_1436bba94;
      }
      plVar10 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
      if ((int)plVar10 != 0) {
        return plVar10;
      }
      if (*(char *)(lVar1 + 0x191) == (char)plVar10) {
        plVar10 = (longlong *)Curl_add_buffer(lVar6,*(undefined8 *)(lVar1 + 0x200),plVar18);
        plVar13 = plVar18;
      }
      else {
        if (plVar18 == (longlong *)0x0) {
LAB_1436bb9e0:
          plVar10 = (longlong *)Curl_add_buffer(lVar6,"0\r\n\r\n",5);
        }
        else {
          plVar10 = (longlong *)
                    Curl_add_bufferf(lVar6,&DAT_145b6b68c,(ulonglong)plVar18 & 0xffffffff);
          if ((int)plVar10 == 0) {
            plVar10 = (longlong *)Curl_add_buffer(lVar6,*(undefined8 *)(lVar1 + 0x200),plVar18);
            if ((int)plVar10 == 0) {
              plVar10 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
            }
            local_b8 = (longlong *)((longlong)plVar18 + 2);
            if ((int)plVar10 == 0) goto LAB_1436bb9e0;
          }
        }
        plVar13 = (longlong *)((longlong)local_b8 + 5);
      }
      if ((int)plVar10 != 0) {
        return plVar10;
      }
      FUN_1436bedd0(lVar1,plVar18);
    }
    local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
    uVar5 = FUN_1436bbff0(lVar6,param_1,lVar1 + 0x8a90,plVar13);
    plVar10 = (longlong *)(ulonglong)uVar5;
    if (uVar5 != 0) {
      FUN_1436b5820(lVar1,"Failed sending HTTP POST request");
      return plVar10;
    }
LAB_1436bbb11:
    local_f8 = local_88;
    if (*plVar12 == 0) {
      local_f8 = plVar7;
    }
    local_100 = (undefined1 *)CONCAT44(local_100._4_4_,(*plVar12 != 0) - 1);
    plVar7 = plVar10;
  }
  else {
    if (local_ac == 3) {
      if ((*plVar10 == 0) || (*(char *)((longlong)param_1 + 0x3c9) != '\0')) {
        plVar7 = (longlong *)Curl_add_bufferf(lVar6,"Content-Length: 0\r\n\r\n");
        if ((int)plVar7 != 0) {
          return plVar7;
        }
        local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
        uVar5 = FUN_1436bbff0(lVar6,param_1,lVar1 + 0x8a90,0);
        if (uVar5 != 0) {
          FUN_1436b5820(lVar1,"Failed sending POST request");
          return (longlong *)(ulonglong)uVar5;
        }
        local_f8 = (longlong *)0x0;
        local_108 = plVar10 + 5;
        local_100 = (undefined1 *)CONCAT44(local_100._4_4_,0xffffffff);
        FUN_1436b8d40(param_1,0,0xffffffffffffffff,1);
        plVar7 = (longlong *)0x0;
        plVar10 = local_88;
      }
      else {
        plVar12 = plVar10 + 7;
        iVar25 = Curl_FormInit(plVar12);
        if (iVar25 != 0) {
          FUN_1436b5820(lVar1,"Internal HTTP POST error!");
          return (longlong *)0x22;
        }
        plVar10[10] = *(longlong *)(lVar1 + 0x8a20);
        *(code **)(lVar1 + 0x8a20) = FUN_1436d81b0;
        *(longlong **)(lVar1 + 0x8a28) = plVar12;
        *(undefined4 *)(plVar10 + 0xf) = 2;
        if (((*(char *)(lVar1 + 0x191) == '\0') &&
            (lVar20 = FUN_1436bc690(param_1,"Content-Length:"), lVar20 == 0)) &&
           (plVar13 = (longlong *)Curl_add_bufferf(lVar6,"Content-Length: %I64d\r\n",plVar10[1]),
           (int)plVar13 != 0)) {
          return plVar13;
        }
        plVar13 = (longlong *)FUN_1436bde90(lVar1,param_1,lVar6);
        if ((int)plVar13 != 0) {
          return plVar13;
        }
        local_98 = (char *)0x0;
        lVar20 = Curl_formpostheader(plVar12,&local_98);
        if (lVar20 == 0) {
          FUN_1436b5820(lVar1,"Could not get Content-Type header line!");
          return (longlong *)0x22;
        }
        plVar12 = (longlong *)Curl_add_buffer(lVar6,lVar20,local_98);
        if ((int)plVar12 != 0) {
          return plVar12;
        }
        plVar12 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
        if ((int)plVar12 != 0) {
          return plVar12;
        }
        FUN_1436bedd0(lVar1,plVar10[1]);
        local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
        uVar5 = FUN_1436bbff0(lVar6,param_1,lVar1 + 0x8a90,0);
        if (uVar5 != 0) {
          FUN_1436b5820(lVar1,"Failed sending POST request");
          Curl_formclean(plVar10);
          return (longlong *)(ulonglong)uVar5;
        }
        local_108 = plVar10 + 5;
        local_100 = (undefined1 *)((ulonglong)local_100 & 0xffffffff00000000);
        local_f8 = plVar10 + 6;
        FUN_1436b8d40(param_1,0,0xffffffffffffffff,1);
        plVar10 = plVar10 + 6;
      }
      goto LAB_1436bbb56;
    }
    if (local_ac != 4) {
      plVar10 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
      if ((int)plVar10 != 0) {
        return plVar10;
      }
      local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
      uVar5 = FUN_1436bbff0(lVar6,param_1,lVar1 + 0x8a90,0);
      plVar10 = (longlong *)(ulonglong)uVar5;
      if (uVar5 != 0) {
        FUN_1436b5820(lVar1,"Failed sending HTTP request");
        return plVar10;
      }
      goto LAB_1436bbb11;
    }
    plVar18 = plVar7;
    if (((*(char *)((longlong)param_1 + 0x3c9) != '\0') ||
        (plVar18 = *(longlong **)(lVar1 + 0x8a08), plVar18 != (longlong *)&DAT_ffffffffffffffff)) &&
       ((*(char *)(lVar1 + 0x191) == '\0' &&
        ((lVar20 = FUN_1436bc690(param_1,"Content-Length:"), lVar20 == 0 &&
         (plVar10 = (longlong *)Curl_add_bufferf(lVar6,"Content-Length: %I64d\r\n",plVar18),
         (int)plVar10 != 0)))))) {
      return plVar10;
    }
    if ((plVar18 != (longlong *)0x0) &&
       (plVar10 = (longlong *)FUN_1436bde90(lVar1,param_1,lVar6), (int)plVar10 != 0)) {
      return plVar10;
    }
    plVar10 = (longlong *)Curl_add_buffer(lVar6,&DAT_145b5531c,2);
    if ((int)plVar10 != 0) {
      return plVar10;
    }
    FUN_1436bedd0(lVar1,plVar18);
    local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
    uVar5 = FUN_1436bbff0(lVar6,param_1,lVar1 + 0x8a90,0);
    if (uVar5 != 0) {
      FUN_1436b5820(lVar1,"Failed sending PUT request");
      return (longlong *)(ulonglong)uVar5;
    }
    local_f8 = plVar7;
    if (plVar18 != (longlong *)0x0) {
      local_f8 = local_88;
    }
    local_100 = (undefined1 *)CONCAT44(local_100._4_4_,(plVar18 != (longlong *)0x0) - 1);
    plVar7 = (longlong *)0x0;
  }
  plVar10 = local_88;
  local_108 = local_70;
  FUN_1436b8d40(param_1,0,0xffffffffffffffff,1);
LAB_1436bbb56:
  if (*plVar10 == 0) {
    return plVar7;
  }
  FUN_1436bedc0(lVar1);
  iVar25 = FUN_1436befa0(param_1);
  if (iVar25 != 0) {
    plVar7 = (longlong *)0x2a;
  }
  if ((longlong)plVar18 <= *plVar10) {
    FUN_1436b58e0(lVar1,"upload completely sent off: %I64d out of %I64d bytes\n",*plVar10,plVar18);
    *(uint *)(lVar1 + 0x168) = *(uint *)(lVar1 + 0x168) & 0xfffffffd;
    *(undefined1 *)(lVar1 + 0x16c) = 1;
    *(undefined4 *)(lVar1 + 0x134) = 0;
    return plVar7;
  }
  return plVar7;
}



// FUNCTION 1436bbbe0 FUN_1436bbbe0 body=366 status=ok
// SIG undefined FUN_1436bbbe0(void)

int FUN_1436bbbe0(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if ((*(int *)(lVar1 + 0x88e0) == 2) || (*(int *)(lVar1 + 0x8870) == 2)) {
    if ((*(int *)(lVar1 + 0x128) != 0x191) &&
       ((*(int *)(lVar1 + 0x128) != 0x197 && (*(char *)(lVar1 + 0x471) == '\0')))) {
      *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    }
    FUN_1436d8e80(lVar1);
  }
  param_1[0x9e] = *(longlong *)(lVar1 + 0x208);
  param_1[0x9f] = *(longlong *)(lVar1 + 0x298);
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 0x80);
    if (puVar3 != (undefined8 *)0x0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*puVar3);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
      *(undefined8 *)(lVar2 + 0x80) = 0;
    }
    if (*(int *)(lVar1 + 0x380) == 3) {
      *(longlong *)(lVar1 + 0xb0) = *(longlong *)(lVar2 + 0x30) + *(longlong *)(lVar2 + 0x28);
      Curl_formclean(lVar2);
      if (*(FILE **)(lVar2 + 0x48) != (FILE *)0x0) {
        fclose(*(FILE **)(lVar2 + 0x48));
        *(undefined8 *)(lVar2 + 0x48) = 0;
      }
    }
    else if (*(int *)(lVar1 + 0x380) == 4) {
      *(longlong *)(lVar1 + 0xb0) = *(longlong *)(lVar2 + 0x30) + *(longlong *)(lVar2 + 0x28);
    }
    if (param_2 != 0) {
      return param_2;
    }
    if ((((param_3 == '\0') && (*(char *)((longlong)param_1 + 0x3c7) == '\0')) &&
        (*(char *)(lVar1 + 0x471) == '\0')) &&
       (((longlong)*(int *)(lVar1 + 0xc0) - (longlong)*(int *)(lVar1 + 0xc4)) +
        *(longlong *)(lVar2 + 0x28) < 1)) {
      FUN_1436b5820(lVar1,"Empty reply from server");
      return 0x34;
    }
  }
  return 0;
}



// FUNCTION 1436bbd50 FUN_1436bbd50 body=105 status=ok
// SIG undefined FUN_1436bbd50(void)

undefined8 FUN_1436bbd50(longlong param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  uVar1 = FUN_1436d7770();
  if ((int)uVar1 == 0) {
    if (*(int *)(param_1 + 0x810) != 1) {
      if ((*(byte *)(*(longlong *)(param_1 + 0x3f0) + 0x78) & 1) == 0) {
        *param_2 = 1;
      }
      else {
        uVar1 = FUN_1436ad470(param_1,0,param_2);
        if ((int)uVar1 != 0) {
          *(undefined1 *)(param_1 + 0x3b9) = 1;
          return uVar1;
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 1436bbdc0 FUN_1436bbdc0 body=60 status=ok
// SIG undefined FUN_1436bbdc0(void)

undefined4 FUN_1436bbdc0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (*(code *)PTR_calloc_1467dcc78)(1,0x88);
  if (lVar1 == 0) {
    return 0x1b;
  }
  *(longlong *)(*param_1 + 0x198) = lVar1;
  return 0;
}



// FUNCTION 1436bbe10 FUN_1436bbe10 body=36 status=ok
// SIG undefined FUN_1436bbe10(void)

void FUN_1436bbe10(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_1436ad470(param_1,0,param_2);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x3b9) = 1;
  }
  return;
}



// FUNCTION 1436bbe90 Curl_add_buffer body=280 status=ok
// SIG undefined Curl_add_buffer(void)

undefined8 Curl_add_buffer(longlong *param_1,void *param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = param_1[2];
  if (~param_3 < uVar1) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
    *param_1 = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    return 0x1b;
  }
  lVar2 = *param_1;
  if ((lVar2 == 0) || (param_1[1] - 1U < uVar1 + param_3)) {
    if ((param_3 < 0x8000000000000000) &&
       ((uVar1 < 0x8000000000000000 && (uVar1 * 2 <= ~(param_3 * 2))))) {
      lVar3 = (uVar1 + param_3) * 2;
    }
    else {
      lVar3 = -1;
    }
    if (lVar2 == 0) {
      lVar2 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar3);
    }
    else {
      lVar2 = (*(code *)PTR_realloc_1467dcc68)(lVar2,lVar3);
    }
    if (lVar2 == 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
      *param_1 = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
      return 0x1b;
    }
    *param_1 = lVar2;
    param_1[1] = lVar3;
  }
  _guard_xfg_dispatch_icall_nop((void *)(*param_1 + param_1[2]),param_2,param_3);
  param_1[2] = param_1[2] + param_3;
  return 0;
}



// FUNCTION 1436bbfb0 Curl_add_buffer_free body=38 status=ok
// SIG undefined Curl_add_buffer_free(void)

void Curl_add_buffer_free(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001436bbfcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return;
}



// FUNCTION 1436bbfe0 Curl_add_buffer_init body=15 status=ok
// SIG undefined Curl_add_buffer_init(void)

void Curl_add_buffer_init(void)

{
                    /* WARNING: Could not recover jumptable at 0x0001436bbfe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_calloc_1467dcc78)(1);
  return;
}



// FUNCTION 1436bbff0 FUN_1436bbff0 body=485 status=ok
// SIG undefined FUN_1436bbff0(void)

int FUN_1436bbff0(longlong *param_1,longlong *param_2,int *param_3,longlong param_4,int param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  size_t _Size;
  longlong lVar5;
  void *_Src;
  ulonglong uVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  int *local_res18;
  
  lVar5 = param_2[(longlong)param_5 + 0x3a];
  uVar1 = param_1[2];
  lVar2 = *(longlong *)(*param_2 + 0x198);
  _Src = (void *)*param_1;
  local_res10 = uVar1 - param_4;
  _Size = uVar1;
  local_res18 = param_3;
  if (((*(byte *)(param_2[0x7d] + 0x78) & 1) != 0) && (*(int *)((longlong)param_2 + 0x1b4) != 0x14))
  {
    if (0x4000 < uVar1) {
      _Size = 0x4000;
    }
    _guard_xfg_dispatch_icall_nop((void *)(*param_2 + 0x47e9),_Src,_Size);
    _Src = (void *)(*param_2 + 0x47e9);
  }
  iVar4 = FUN_1436b5de0(param_2,lVar5,_Src,_Size,&local_res8);
  if (iVar4 == 0) {
    uVar6 = local_res8;
    if (local_res10 < local_res8) {
      uVar6 = local_res10;
    }
    lVar5 = local_res8 - uVar6;
    if ((*(char *)(*param_2 + 0x458) != '\0') &&
       (FUN_1436b56c0(*param_2,2,_Src,uVar6,param_2), lVar5 != 0)) {
      FUN_1436b56c0(*param_2,4,uVar6 + (longlong)_Src,lVar5,param_2);
    }
    *local_res18 = *local_res18 + (int)local_res8;
    if (lVar2 == 0) {
      if (local_res8 != uVar1) {
        return 0x37;
      }
      FUN_1436bfaf0(param_2);
    }
    else {
      *(longlong *)(lVar2 + 0x30) = *(longlong *)(lVar2 + 0x30) + lVar5;
      if (local_res8 != uVar1) {
        lVar5 = *param_1;
        *(undefined8 *)(lVar2 + 0x58) = *(undefined8 *)(*param_2 + 0x8a20);
        uVar3 = *(undefined8 *)(*param_2 + 0x8a28);
        *(undefined8 *)(lVar2 + 0x68) = *(undefined8 *)(lVar2 + 0x10);
        *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 8);
        *(undefined8 *)(lVar2 + 0x60) = uVar3;
        *(code **)(*param_2 + 0x8a20) = FUN_1436be670;
        *(longlong **)(*param_2 + 0x8a28) = param_2;
        *(ulonglong *)(lVar2 + 0x10) = lVar5 + local_res8;
        *(ulonglong *)(lVar2 + 8) = uVar1 - local_res8;
        *(longlong **)(lVar2 + 0x80) = param_1;
        *(undefined4 *)(lVar2 + 0x78) = 1;
        return 0;
      }
      *(undefined4 *)(lVar2 + 0x78) = 2;
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return iVar4;
}



// FUNCTION 1436bc1e0 Curl_add_bufferf body=123 status=ok
// SIG undefined Curl_add_bufferf(void)

undefined4
Curl_add_bufferf(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res18 = param_3;
  local_res20 = param_4;
  lVar2 = curl_mvaprintf(param_2,&local_res18);
  if (lVar2 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar2 + lVar3) != '\0');
    uVar1 = Curl_add_buffer(param_1,lVar2);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
    return uVar1;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return 0x1b;
}



// FUNCTION 1436bc260 FUN_1436bc260 body=585 status=ok
// SIG undefined FUN_1436bc260(void)

undefined8 FUN_1436bc260(longlong *param_1,char param_2,undefined8 param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined8 local_28 [2];
  
  lVar2 = *param_1;
  lVar6 = 0;
  iVar7 = 1;
  lVar8 = 1;
  if (param_2 == '\0') {
    if ((*(char *)((longlong)param_1 + 0x3be) == '\0') || ((char)param_1[0x79] != '\0')) {
      iVar7 = 0;
    }
  }
  else {
    iVar7 = 2;
  }
  if (iVar7 == 0) {
LAB_1436bc2fb:
    local_28[0] = *(undefined8 *)(lVar2 + 0x308);
  }
  else {
    if (iVar7 == 1) {
      local_28[0] = *(undefined8 *)(lVar2 + 0x308);
      if (*(char *)(lVar2 + 800) != '\0') {
        lVar8 = 2;
        local_28[1] = *(undefined8 *)(lVar2 + 0x310);
        lVar6 = 0;
      }
      goto LAB_1436bc310;
    }
    if (iVar7 != 2) goto LAB_1436bc310;
    if (*(char *)(lVar2 + 800) == '\0') goto LAB_1436bc2fb;
    local_28[0] = *(undefined8 *)(lVar2 + 0x310);
  }
LAB_1436bc310:
  do {
    for (puVar3 = (undefined8 *)local_28[lVar6]; puVar3 != (undefined8 *)0x0;
        puVar3 = (undefined8 *)puVar3[1]) {
      pcVar4 = strchr((char *)*puVar3,0x3a);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = strchr((char *)*puVar3,0x3b);
        if (pcVar4 != (char *)0x0) {
          bVar1 = pcVar4[1];
          while (pcVar4 = pcVar4 + 1, bVar1 != 0) {
            iVar7 = isspace((uint)bVar1);
            if (iVar7 == 0) {
              if (*pcVar4 != '\0') goto LAB_1436bc46f;
              break;
            }
            bVar1 = pcVar4[1];
          }
          if (pcVar4[-1] == ';') {
            pcVar4[-1] = ':';
LAB_1436bc459:
            uVar5 = Curl_add_bufferf(param_3,&DAT_145b6b254,*puVar3);
            if ((int)uVar5 != 0) {
              return uVar5;
            }
          }
        }
      }
      else {
        bVar1 = pcVar4[1];
        while (bVar1 != 0) {
          iVar7 = isspace((uint)bVar1);
          if (iVar7 == 0) {
            if ((((pcVar4[1] != '\0') &&
                 ((param_1[0x88] == 0 || (iVar7 = Curl_raw_nequal("Host:",*puVar3,5), iVar7 == 0))))
                && ((*(int *)(lVar2 + 0x380) != 3 ||
                    (iVar7 = Curl_raw_nequal("Content-Type:",*puVar3,0xd), iVar7 == 0)))) &&
               (((*(char *)((longlong)param_1 + 0x3c9) == '\0' ||
                 (iVar7 = Curl_raw_nequal("Content-Length",*puVar3,0xe), iVar7 == 0)) &&
                ((param_1[0x8b] == 0 ||
                 (iVar7 = Curl_raw_nequal("Connection",*puVar3,10), iVar7 == 0))))))
            goto LAB_1436bc459;
            break;
          }
          bVar1 = pcVar4[2];
          pcVar4 = pcVar4 + 1;
        }
      }
LAB_1436bc46f:
    }
    lVar6 = lVar6 + 1;
    if (lVar8 <= lVar6) {
      return 0;
    }
  } while( true );
}



// FUNCTION 1436bc4b0 FUN_1436bc4b0 body=321 status=ok
// SIG undefined FUN_1436bc4b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436bc4b0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(int *)(param_1 + 0x370) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = Curl_gmtime(*(undefined8 *)(param_1 + 0x378),&local_48);
    if (iVar1 == 0) {
      iVar1 = local_30 + -1;
      if (local_30 == 0) {
        iVar1 = 6;
      }
      local_50 = local_48;
      local_68 = local_34 + 0x76c;
      local_58 = local_44;
      local_60 = local_40;
      local_70 = (&PTR_DAT_145b6c100)[local_38];
      local_78 = local_3c;
      curl_msnprintf(param_1 + 0x7e8,0x3fff,"%s, %02d %s %4d %02d:%02d:%02d GMT",
                     (&PTR_DAT_145b6c090)[iVar1]);
      iVar1 = *(int *)(param_1 + 0x370);
      if (iVar1 == 1) {
        pcVar2 = "If-Modified-Since: %s\r\n";
      }
      else if (iVar1 == 2) {
        pcVar2 = "If-Unmodified-Since: %s\r\n";
      }
      else {
        if (iVar1 != 3) {
          return 0;
        }
        pcVar2 = "Last-Modified: %s\r\n";
      }
      iVar1 = Curl_add_bufferf(param_2,pcVar2,param_1 + 0x7e8);
    }
    else {
      FUN_1436b5820(param_1,"Invalid TIMEVALUE");
    }
  }
  return iVar1;
}



// FUNCTION 1436bc600 FUN_1436bc600 body=144 status=ok
// SIG undefined FUN_1436bc600(void)

undefined8 FUN_1436bc600(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  lVar1 = *param_1;
  if ((*(char *)((longlong)param_1 + 0x3bd) == '\0') || (*(char *)(lVar1 + 800) == '\0')) {
    puVar2 = *(undefined8 **)(lVar1 + 0x308);
  }
  else {
    puVar2 = *(undefined8 **)(lVar1 + 0x310);
  }
  while( true ) {
    if (puVar2 == (undefined8 *)0x0) {
      return 0;
    }
    iVar3 = Curl_raw_nequal(*puVar2,param_2,lVar4);
    if (iVar3 != 0) break;
    puVar2 = (undefined8 *)puVar2[1];
  }
  return *puVar2;
}



// FUNCTION 1436bc690 FUN_1436bc690 body=112 status=ok
// SIG undefined FUN_1436bc690(void)

undefined8 FUN_1436bc690(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = -1;
  do {
    lVar3 = lVar3 + 1;
  } while (*(char *)(param_2 + lVar3) != '\0');
  puVar1 = *(undefined8 **)(*param_1 + 0x308);
  while( true ) {
    if (puVar1 == (undefined8 *)0x0) {
      return 0;
    }
    iVar2 = Curl_raw_nequal(*puVar1,param_2,lVar3);
    if (iVar2 != 0) break;
    puVar1 = (undefined8 *)puVar1[1];
  }
  return *puVar1;
}



// FUNCTION 1436bc700 Curl_compareheader body=232 status=ok
// SIG undefined Curl_compareheader(void)

undefined8 Curl_compareheader(longlong param_1,longlong param_2,longlong param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  longlong lVar4;
  byte *_Str;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = 0xffffffffffffffff;
  lVar4 = -1;
  do {
    lVar4 = lVar4 + 1;
  } while (*(char *)(param_2 + lVar4) != '\0');
  iVar2 = Curl_raw_nequal(param_1,param_2,lVar4);
  if (iVar2 != 0) {
    _Str = (byte *)(lVar4 + param_1);
    bVar1 = *_Str;
    while ((bVar1 != 0 && (iVar2 = isspace((uint)bVar1), iVar2 != 0))) {
      bVar1 = _Str[1];
      _Str = _Str + 1;
    }
    pcVar3 = strchr((char *)_Str,0xd);
    if ((pcVar3 == (char *)0x0) && (pcVar3 = strchr((char *)_Str,10), pcVar3 == (char *)0x0)) {
      pcVar3 = strchr((char *)_Str,0);
    }
    uVar6 = (longlong)pcVar3 - (longlong)_Str;
    do {
      uVar5 = uVar5 + 1;
    } while (*(char *)(uVar5 + param_3) != '\0');
    for (; uVar5 <= uVar6; uVar6 = uVar6 - 1) {
      iVar2 = Curl_raw_nequal(_Str,param_3,uVar5);
      if (iVar2 != 0) {
        return 1;
      }
      _Str = _Str + 1;
    }
  }
  return 0;
}



// FUNCTION 1436bc7f0 Curl_copy_header_value body=257 status=ok
// SIG undefined Curl_copy_header_value(void)

void * Curl_copy_header_value(byte *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  void *_Dst;
  byte *pbVar4;
  
  bVar1 = *param_1;
  while ((bVar1 != 0 && (bVar1 != 0x3a))) {
    pbVar4 = param_1 + 1;
    param_1 = param_1 + 1;
    bVar1 = *pbVar4;
  }
  pbVar4 = param_1 + 1;
  if (*param_1 == 0) {
    pbVar4 = param_1;
  }
  bVar1 = *pbVar4;
  while ((bVar1 != 0 && (iVar2 = isspace((uint)bVar1), iVar2 != 0))) {
    bVar1 = pbVar4[1];
    pbVar4 = pbVar4 + 1;
  }
  pbVar3 = (byte *)strchr((char *)pbVar4,0xd);
  if (((pbVar3 == (byte *)0x0) &&
      (pbVar3 = (byte *)strchr((char *)pbVar4,10), pbVar3 == (byte *)0x0)) &&
     (pbVar3 = (byte *)strchr((char *)pbVar4,0), pbVar3 == (byte *)0x0)) {
    return (void *)0x0;
  }
  while ((pbVar4 < pbVar3 && (iVar2 = isspace((uint)*pbVar3), iVar2 != 0))) {
    pbVar3 = pbVar3 + -1;
  }
  _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                           (pbVar3 + (2 - (longlong)pbVar4));
  if (_Dst == (void *)0x0) {
    return (void *)0x0;
  }
  _guard_xfg_dispatch_icall_nop(_Dst,pbVar4,(size_t)(pbVar3 + (1 - (longlong)pbVar4)));
  pbVar3[(longlong)_Dst + (1 - (longlong)pbVar4)] = 0;
  return _Dst;
}



// FUNCTION 1436bc900 FUN_1436bc900 body=494 status=ok
// SIG undefined FUN_1436bc900(void)

ulonglong FUN_1436bc900(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar1 = *param_1;
  cVar2 = '\0';
  cVar3 = '\0';
  uVar7 = 0;
  uVar6 = 0;
  iVar4 = *(int *)(lVar1 + 0x128);
  if (iVar4 - 100U < 100) {
    return 0;
  }
  if (*(char *)(lVar1 + 0x8970) == '\0') {
    if (((*(char *)((longlong)param_1 + 0x3bf) != '\0') &&
        ((iVar4 == 0x191 || ((*(char *)((longlong)param_1 + 0x3c9) != '\0' && (iVar4 < 300)))))) &&
       (cVar3 = '\0', cVar2 = pickoneauth(lVar1 + 0x8950), cVar2 == '\0')) {
      *(undefined1 *)(lVar1 + 0x8970) = 1;
    }
    if ((((char)param_1[0x78] != '\0') &&
        ((*(int *)(lVar1 + 0x128) == 0x197 ||
         ((*(char *)((longlong)param_1 + 0x3c9) != '\0' && (*(int *)(lVar1 + 0x128) < 300)))))) &&
       (cVar3 = pickoneauth(lVar1 + 0x8960), cVar3 == '\0')) {
      *(undefined1 *)(lVar1 + 0x8970) = 1;
    }
    if ((cVar2 == '\0') && (cVar3 == '\0')) {
      if ((((*(int *)(lVar1 + 0x128) < 300) && (*(char *)(lVar1 + 0x895c) == '\0')) &&
          (*(char *)((longlong)param_1 + 0x3c9) != '\0')) &&
         (uVar7 = uVar6, (*(int *)(lVar1 + 0x380) - 1U & 0xfffffffb) != 0)) {
        lVar5 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar1 + 0x670));
        *(longlong *)(lVar1 + 0x178) = lVar5;
        if (lVar5 == 0) {
          return 0x1b;
        }
        *(undefined1 *)(lVar1 + 0x895c) = 1;
      }
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar1 + 0x178));
      *(undefined8 *)(lVar1 + 0x178) = 0;
      lVar5 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar1 + 0x670));
      *(longlong *)(lVar1 + 0x178) = lVar5;
      if (lVar5 == 0) {
        return 0x1b;
      }
      uVar7 = uVar6;
      if (((*(int *)(lVar1 + 0x380) - 1U & 0xfffffffb) != 0) &&
         (*(char *)((longlong)param_1 + 0x3ca) == '\0')) {
        uVar6 = FUN_1436be190(param_1);
        uVar7 = uVar6 & 0xffffffff;
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
    }
    iVar4 = FUN_1436be310(param_1);
    if (iVar4 != 0) {
      FUN_1436b5820(lVar1,"The requested URL returned error: %d",*(undefined4 *)(lVar1 + 0x128));
      uVar7 = 0x16;
    }
    return uVar7;
  }
  return (ulonglong)(-(uint)(*(char *)(lVar1 + 0x448) != '\0') & 0x16);
}



// FUNCTION 1436bcaf0 FUN_1436bcaf0 body=583 status=ok
// SIG undefined FUN_1436bcaf0(void)

undefined8 FUN_1436bcaf0(longlong *param_1,char param_2,byte *param_3)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  byte *pbVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar4 = *param_1;
  lVar9 = 0x8870;
  if (param_2 == '\0') {
    lVar6 = 0x8a98;
    lVar8 = 0x8950;
  }
  else {
    lVar9 = 0x88e0;
    lVar6 = 0x8a94;
    lVar8 = 0x8960;
  }
  bVar3 = *param_3;
  lVar8 = lVar8 + lVar4;
  puVar2 = (uint *)(lVar6 + lVar4);
  do {
    if (bVar3 == 0) {
      return 0;
    }
    iVar5 = Curl_raw_nequal("Negotiate",param_3,9);
    if (iVar5 == 0) {
      iVar5 = Curl_raw_nequal(&DAT_145b6b11c,param_3,4);
      if (iVar5 == 0) {
        iVar5 = Curl_raw_nequal("Digest",param_3,6);
        if (iVar5 == 0) {
          iVar5 = Curl_raw_nequal("Basic",param_3,5);
          if (iVar5 != 0) {
            *puVar2 = *puVar2 | 1;
            *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 1;
            if (*(int *)(lVar8 + 4) == 1) {
              *(undefined4 *)(lVar8 + 8) = 0;
              goto LAB_1436bccae;
            }
          }
        }
        else if ((*(byte *)(lVar8 + 8) & 2) == 0) {
          *puVar2 = *puVar2 | 2;
          *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 2;
          iVar5 = FUN_1436d58e0(param_1,param_2,param_3);
          if (iVar5 != 0) {
LAB_1436bccae:
            FUN_1436b58e0(lVar4,"Authentication problem. Ignoring this.\n");
            goto LAB_1436bccbd;
          }
        }
        else {
          FUN_1436b58e0(lVar4,"Ignoring duplicate digest auth header.\n");
        }
      }
      else {
        *puVar2 = *puVar2 | 8;
        *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 8;
        if ((*(int *)(lVar8 + 4) == 8) || (*(int *)(lVar8 + 4) == 0x20)) {
          iVar5 = FUN_1436d5b60(param_1,param_2,param_3);
          if (iVar5 != 0) goto LAB_1436bccae;
          *(undefined1 *)(lVar4 + 0x8970) = 0;
        }
      }
    }
    else {
      *puVar2 = *puVar2 | 4;
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 4;
      if ((*(int *)(lVar8 + 4) == 4) && ((*(uint *)(lVar9 + lVar4) & 0xfffffffd) == 0)) {
        iVar5 = FUN_1436d8eb0(param_1,param_2,param_3);
        if (iVar5 == 0) {
          lVar6 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar4 + 0x670));
          *(longlong *)(lVar4 + 0x178) = lVar6;
          if (lVar6 == 0) {
            return 0x1b;
          }
          *(undefined1 *)(lVar4 + 0x8970) = 0;
          *(undefined4 *)(lVar9 + lVar4) = 1;
        }
        else {
LAB_1436bccbd:
          *(undefined1 *)(lVar4 + 0x8970) = 1;
        }
      }
    }
    bVar3 = *param_3;
    pbVar7 = param_3;
    while ((bVar3 != 0 && (bVar3 != 0x2c))) {
      pbVar1 = pbVar7 + 1;
      pbVar7 = pbVar7 + 1;
      bVar3 = *pbVar1;
    }
    param_3 = pbVar7 + 1;
    if (*pbVar7 != 0x2c) {
      param_3 = pbVar7;
    }
    if (*param_3 != 0) {
      while (iVar5 = isspace((uint)*param_3), iVar5 != 0) {
        param_3 = param_3 + 1;
        if (*param_3 == 0) {
          return 0;
        }
      }
    }
    bVar3 = *param_3;
  } while( true );
}



// FUNCTION 1436bcd40 FUN_1436bcd40 body=287 status=ok
// SIG undefined FUN_1436bcd40(void)

undefined8 FUN_1436bcd40(longlong *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (((*(char *)((longlong)param_1 + 0x3be) == '\0') || ((char)param_1[0x78] == '\0')) &&
     (*(char *)((longlong)param_1 + 0x3bf) == '\0')) {
    *(undefined1 *)(lVar1 + 0x895c) = 1;
    *(undefined1 *)(lVar1 + 0x896c) = 1;
    uVar3 = 0;
  }
  else {
    iVar2 = *(int *)(lVar1 + 0x8950);
    if ((iVar2 != 0) && (*(int *)(lVar1 + 0x8954) == 0)) {
      *(int *)(lVar1 + 0x8954) = iVar2;
    }
    iVar2 = *(int *)(lVar1 + 0x8960);
    if ((iVar2 != 0) && (*(int *)(lVar1 + 0x8964) == 0)) {
      *(int *)(lVar1 + 0x8964) = iVar2;
    }
    if ((*(char *)((longlong)param_1 + 0x3be) == '\0') || ((char)param_1[0x79] != param_4)) {
      *(undefined1 *)(lVar1 + 0x896c) = 1;
    }
    else {
      uVar3 = FUN_1436be360(param_1,(int *)(lVar1 + 0x8960),param_2,param_3,1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    if ((((*(char *)(lVar1 + 0x87f8) == '\0') || (*(char *)((longlong)param_1 + 0x3cd) != '\0')) ||
        (*(longlong *)(lVar1 + 0x8800) == 0)) ||
       ((*(char *)(lVar1 + 1099) != '\0' ||
        (iVar2 = Curl_strcasecompare(*(longlong *)(lVar1 + 0x8800),param_1[0x17]), iVar2 != 0)))) {
      uVar3 = FUN_1436be360(param_1,(int *)(lVar1 + 0x8950),param_2,param_3,0);
    }
    else {
      *(undefined1 *)(lVar1 + 0x895c) = 1;
      uVar3 = 0;
    }
  }
  return uVar3;
}



// FUNCTION 1436bce60 FUN_1436bce60 body=3970 status=ok
// SIG undefined FUN_1436bce60(void)

ulonglong FUN_1436bce60(longlong param_1,longlong param_2,size_t *param_3,char *param_4)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  ulonglong uVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  size_t sVar11;
  int *piVar12;
  byte *pbVar13;
  int *piVar14;
  longlong lVar15;
  char cVar16;
  int local_res8 [2];
  int local_38 [2];
  __time64_t local_30;
  
  puVar1 = (ulonglong *)(param_1 + 0x90);
  do {
    *(void **)(param_1 + 0x100) = *(void **)(param_1 + 0xf8);
    pvVar6 = memchr(*(void **)(param_1 + 0xf8),10,*param_3);
    *(void **)(param_1 + 0x108) = pvVar6;
    if (pvVar6 == (void *)0x0) {
      uVar7 = FUN_1436bdf80(param_1,puVar1,*param_3);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (*(int *)(param_1 + 0xe0) != 0) {
        return 0;
      }
      if (*(ulonglong *)(param_1 + 0xf0) < 6) {
        return 0;
      }
      if ((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40000) == 0) {
        cVar16 = FUN_1436bddf0(param_1,*(undefined8 *)(param_1 + 0x7d8));
      }
      else {
        iVar4 = Curl_raw_nequal("RTSP/",*(undefined8 *)(param_1 + 0x7d8),5);
        cVar16 = iVar4 != 0;
      }
      if (cVar16 != '\0') {
        return 0;
      }
      *(undefined4 *)(param_1 + 0xdc) = 2;
      goto LAB_1436bddbd;
    }
    sVar11 = (longlong)pvVar6 + (1 - *(longlong *)(param_1 + 0xf8));
    *param_3 = *param_3 - sVar11;
    lVar15 = *(longlong *)(param_1 + 0x108) + 1;
    *(longlong *)(param_1 + 0xf8) = lVar15;
    uVar7 = FUN_1436bdf80(param_1,puVar1,lVar15 - *(longlong *)(param_1 + 0x100));
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    *(undefined8 *)(param_1 + 0x108) = *(undefined8 *)(param_1 + 0xe8);
    *(undefined8 *)(param_1 + 0x110) = *(undefined8 *)(param_1 + 0x7d8);
    if ((*(int *)(param_1 + 0xe0) == 0) && (5 < *(ulonglong *)(param_1 + 0xf0))) {
      if ((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40000) == 0) {
        cVar16 = FUN_1436bddf0(param_1,*(undefined8 *)(param_1 + 0x7d8));
      }
      else {
        iVar4 = Curl_raw_nequal("RTSP/",*(undefined8 *)(param_1 + 0x7d8),5);
        cVar16 = iVar4 != 0;
      }
      if (cVar16 == '\0') {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if (*param_3 != 0) {
          *(undefined4 *)(param_1 + 0xdc) = 1;
          return 0;
        }
        *(undefined4 *)(param_1 + 0xdc) = 2;
        *param_3 = sVar11;
        return 0;
      }
    }
    pcVar8 = *(char **)(param_1 + 0x110);
    if (*pcVar8 == '\n') {
LAB_1436bd9e9:
      if (**(char **)(param_1 + 0x110) == '\n') {
        *(char **)(param_1 + 0x110) = *(char **)(param_1 + 0x110) + 1;
      }
      iVar4 = *(int *)(param_1 + 0x128);
      if (iVar4 - 100U < 100) {
        *(undefined1 *)(param_1 + 0xd8) = 1;
        *(undefined4 *)(param_1 + 0xe0) = 0;
        if (iVar4 == 100) {
          if (0 < *(int *)(param_1 + 0x134)) {
            *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
            *(undefined4 *)(param_1 + 0x134) = 0;
          }
        }
        else if ((iVar4 == 0x65) && (*(int *)(param_1 + 0x138) == 1)) {
          FUN_1436b58e0(param_1,"Received 101\n");
          *(undefined4 *)(param_1 + 0x138) = 2;
          return 1;
        }
LAB_1436bdac1:
        if (*(char *)(param_2 + 0x3b9) != '\0') goto LAB_1436bdaca;
      }
      else {
        *(undefined1 *)(param_1 + 0xd8) = 0;
        if ((*puVar1 != 0xffffffffffffffff) || (*(char *)(param_1 + 400) != '\0'))
        goto LAB_1436bdac1;
        if (*(char *)(param_2 + 0x3b9) == '\0') {
          if (((*(int *)(param_2 + 0x1b4) == 0xb) &&
              ((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40000) == 0)) &&
             (*(int *)(param_1 + 0x380) != 5)) {
            FUN_1436b58e0(param_1,"no chunk, no close, no size. Assume close to signal end\n");
            *(undefined1 *)(param_2 + 0x3b9) = 1;
          }
          goto LAB_1436bdac1;
        }
LAB_1436bdaca:
        if (((*(int *)(param_1 + 0x128) == 0x191) && (*(int *)(param_2 + 0x500) == 2)) ||
           ((*(int *)(param_1 + 0x128) == 0x197 && (*(int *)(param_2 + 0x570) == 2)))) {
          FUN_1436b58e0(param_1,"Connection closure while negotiating auth (HTTP 1.0?)\n");
          *(undefined1 *)(param_1 + 0x8970) = 1;
        }
      }
      iVar4 = FUN_1436be310(param_2);
      if (iVar4 != 0) {
        FUN_1436b5820(param_1,"The requested URL returned error: %d",
                      *(undefined4 *)(param_1 + 0x128));
        return 0x16;
      }
      lVar15 = *(longlong *)(param_1 + 0x110) - *(longlong *)(param_1 + 0x7d8);
      uVar7 = Curl_client_write();
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      iVar4 = (int)lVar15;
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + iVar4;
      *(int *)(param_1 + 0x8a8c) = *(int *)(param_1 + 0x8a8c) + iVar4;
      uVar10 = 0;
      if (*(int *)(param_1 + 0x128) - 100U < 100) {
        uVar10 = *(undefined4 *)(param_1 + 0xc0);
      }
      *(undefined4 *)(param_1 + 0xc4) = uVar10;
      uVar7 = FUN_1436bc900(param_2);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      if (299 < *(int *)(param_1 + 0x128)) {
        if ((*(char *)(param_2 + 0x3c9) == '\0') && (*(char *)(param_2 + 0x3b9) == '\0')) {
          if (*(char *)(param_2 + 0x3ca) == '\0') {
            if ((*(int *)(param_1 + 0x380) - 2U < 3) && (*(char *)(param_1 + 0x16c) == '\0')) {
              FUN_1436b58e0(param_1,"HTTP error before end of send, stop sending\n");
              *(undefined1 *)(param_2 + 0x3b9) = 1;
              *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xfffffffd;
              *(undefined1 *)(param_1 + 0x16c) = 1;
              if (*(char *)(param_1 + 0x89c8) != '\0') {
                *(undefined4 *)(param_1 + 0x134) = 3;
              }
            }
            goto LAB_1436bdbfa;
          }
        }
        else {
LAB_1436bdbfa:
          if (*(char *)(param_2 + 0x3ca) == '\0') goto LAB_1436bdc19;
        }
        FUN_1436b58e0(param_1,"Keep sending data to get tossed away!\n");
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
      }
LAB_1436bdc19:
      if (*(char *)(param_1 + 0xd8) == '\0') {
        if (*(char *)(param_1 + 0x44f) == '\0') {
          if ((((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40000) == 0) ||
              (*(int *)(param_1 + 0x60c) != 2)) || (*puVar1 < 0x8000000000000000)) {
            if (*(char *)(param_1 + 400) != '\0') {
              *puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(param_1 + 0xa0) = 0xffffffffffffffff;
            }
          }
          else {
            *param_4 = '\x01';
          }
        }
        else {
          *param_4 = '\x01';
        }
        if (*puVar1 != 0xffffffffffffffff) {
          FUN_1436bed90(param_1);
          *(ulonglong *)(param_1 + 0xa0) = *puVar1;
        }
        if (*(longlong *)(param_1 + 0xa0) == 0) {
          *param_4 = '\x01';
        }
        else if (*param_4 == '\0') goto LAB_1436bdd19;
        *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) & 0xfffffffe;
LAB_1436bdd19:
        if (*(char *)(param_1 + 0x458) == '\0') {
          return 0;
        }
        FUN_1436b56c0(param_1,1,*(undefined8 *)(param_1 + 0x100),lVar15,param_2);
        return 0;
      }
    }
    else {
      if (*pcVar8 == '\r') {
        *(char **)(param_1 + 0x110) = pcVar8 + 1;
        goto LAB_1436bd9e9;
      }
      iVar4 = *(int *)(param_1 + 0xe0);
      *(int *)(param_1 + 0xe0) = iVar4 + 1;
      if (iVar4 == 0) {
        uVar5 = *(uint *)(*(longlong *)(param_2 + 1000) + 0x74);
        if ((uVar5 & 3) == 0) {
          if (((uVar5 >> 0x12 & 1) == 0) ||
             (iVar4 = FUN_143662c40(pcVar8," RTSP/%d.%d %3d",local_38,param_2 + 0x1b8,
                                    param_1 + 0x128), iVar4 != 3)) goto LAB_1436bddbd;
          *(undefined4 *)(param_2 + 0x1b4) = 0xb;
          *(int *)(param_2 + 0x1b8) = *(int *)(param_2 + 0x1b8) + local_38[0] * 10;
        }
        else {
          piVar12 = (int *)(param_2 + 0x1b4);
          puVar2 = (undefined4 *)(param_1 + 0x128);
          iVar4 = FUN_143662c40(pcVar8," HTTP/%d.%d %d",local_res8,piVar12,puVar2);
          if (iVar4 == 1) {
            if ((local_res8[0] == 2) &&
               (iVar4 = FUN_143662c40(*(undefined8 *)(param_1 + 0x110)," HTTP/2 %d",puVar2),
               iVar4 == 1)) {
              *piVar12 = 0;
LAB_1436bcfef:
              *piVar12 = *piVar12 + local_res8[0] * 10;
              if ((*(int *)(param_1 + 0x138) == 2) && (*piVar12 != 0x14)) {
                FUN_1436b58e0(param_1,"Lying server, not serving HTTP/2\n");
              }
              goto LAB_1436bd0c0;
            }
          }
          else if (iVar4 == 3) goto LAB_1436bcfef;
          iVar4 = FUN_143662c40(*(undefined8 *)(param_1 + 0x110)," HTTP %3d",puVar2);
          *piVar12 = 10;
          if (iVar4 == 0) {
            cVar16 = FUN_1436bddf0(param_1,*(undefined8 *)(param_1 + 0x110));
            if (cVar16 == '\0') {
LAB_1436bddbd:
              *(undefined1 *)(param_1 + 0xd8) = 0;
              return 0;
            }
            *puVar2 = 200;
            *piVar12 = 10;
          }
        }
LAB_1436bd0c0:
        piVar14 = (int *)(param_1 + 0x128);
        piVar12 = (int *)(param_2 + 0x1b4);
        *(int *)(param_1 + 0x8a78) = *piVar14;
        *(int *)(param_1 + 0x8a80) = *piVar12;
        if ((*(int *)(param_1 + 0x89c4) == 0) || (*piVar12 < *(int *)(param_1 + 0x89c4))) {
          *(int *)(param_1 + 0x89c4) = *piVar12;
        }
        if (((((*(char *)(param_1 + 0x448) != '\0') && (iVar4 = *piVar14, 399 < iVar4)) &&
             ((iVar4 != 0x191 || (*(char *)(param_2 + 0x3bf) == '\0')))) &&
            ((iVar4 != 0x197 || (*(char *)(param_2 + 0x3c0) == '\0')))) &&
           ((*(longlong *)(param_1 + 0x89f0) == 0 ||
            ((*(int *)(param_1 + 0x380) != 1 || (iVar4 != 0x1a0)))))) {
          print_http_error(param_1);
          return 0x16;
        }
        iVar4 = *piVar12;
        if (iVar4 == 10) {
          FUN_1436b58e0(param_1,"HTTP 1.0, assume close after body\n");
          *(undefined1 *)(param_2 + 0x3b9) = 1;
        }
        else if ((iVar4 == 0x14) || ((*(int *)(param_1 + 0x138) == 1 && (*piVar14 == 0x65)))) {
          **(undefined4 **)(param_2 + 0x818) = 2;
        }
        else if ((((10 < iVar4) && (*(char *)(param_2 + 0x3b9) == '\0')) &&
                 (*(longlong *)(param_2 + 0x818) != 0)) &&
                (cVar16 = FUN_1436bfec0(param_1,param_2), cVar16 == '\0')) {
          **(undefined4 **)(param_2 + 0x818) = 1;
        }
        if ((*piVar14 == 0xcc) || (*piVar14 == 0x130)) {
          if (*(int *)(param_1 + 0x370) != 0) {
            *(undefined1 *)(param_1 + 0x8a88) = 1;
          }
          *puVar1 = 0;
          *(undefined8 *)(param_1 + 0xa0) = 0;
          *(undefined1 *)(param_1 + 0x16e) = 1;
        }
      }
      if (((*(char *)(param_1 + 0x16e) == '\0') && (*(char *)(param_1 + 0x46f) == '\0')) &&
         (iVar4 = Curl_raw_nequal("Content-Length:",*(undefined8 *)(param_1 + 0x110),0xf),
         iVar4 != 0)) {
        uVar7 = strtoll(*(longlong *)(param_1 + 0x110) + 0xf,0,10);
        if ((*(longlong *)(param_1 + 0x420) != 0) &&
           (*(longlong *)(param_1 + 0x420) < (longlong)uVar7)) {
          FUN_1436b5820(param_1,"Maximum file size exceeded");
          return 0x3f;
        }
        if ((longlong)uVar7 < 0) {
          *(undefined1 *)(param_2 + 0x3b9) = 1;
          FUN_1436b58e0(param_1,"Negative content-length: %I64d, closing after transfer\n",uVar7);
        }
        else {
          *puVar1 = uVar7;
          *(ulonglong *)(param_1 + 0xa0) = uVar7;
          FUN_1436bed90(param_1,uVar7);
        }
      }
      else {
        iVar4 = Curl_raw_nequal("Content-Type:",*(undefined8 *)(param_1 + 0x110),0xd);
        if (iVar4 == 0) {
          iVar4 = Curl_raw_nequal("Server:",*(undefined8 *)(param_1 + 0x110),7);
          if (iVar4 == 0) {
            if (((*(int *)(param_2 + 0x1b4) == 10) && (*(char *)(param_2 + 0x3be) != '\0')) &&
               (cVar16 = Curl_compareheader(*(undefined8 *)(param_1 + 0x110),"Proxy-Connection:",
                                            "keep-alive"), cVar16 != '\0')) {
              *(undefined1 *)(param_2 + 0x3b9) = 0;
              FUN_1436b58e0(param_1,"HTTP/1.0 proxy connection set to keep alive!\n");
            }
            else if (((*(int *)(param_2 + 0x1b4) == 0xb) && (*(char *)(param_2 + 0x3be) != '\0')) &&
                    (cVar16 = Curl_compareheader(*(undefined8 *)(param_1 + 0x110),
                                                 "Proxy-Connection:","close"), cVar16 != '\0')) {
              *(undefined1 *)(param_2 + 0x3b9) = 1;
              FUN_1436b58e0(param_1,"HTTP/1.1 proxy connection set close!\n");
            }
            else if ((*(int *)(param_2 + 0x1b4) == 10) &&
                    (cVar16 = Curl_compareheader(*(undefined8 *)(param_1 + 0x110),"Connection:",
                                                 "keep-alive"), cVar16 != '\0')) {
              *(undefined1 *)(param_2 + 0x3b9) = 0;
              FUN_1436b58e0(param_1,"HTTP/1.0 connection set to keep alive!\n");
            }
            else {
              cVar16 = Curl_compareheader(*(undefined8 *)(param_1 + 0x110),"Connection:","close");
              if (cVar16 == '\0') {
                iVar4 = Curl_raw_nequal("Transfer-Encoding:",*(undefined8 *)(param_1 + 0x110),0x12);
                if (iVar4 == 0) {
                  iVar4 = Curl_raw_nequal("Content-Encoding:",*(undefined8 *)(param_1 + 0x110),0x11)
                  ;
                  if ((iVar4 == 0) || (*(longlong *)(param_1 + 0x4c0) == 0)) {
                    iVar4 = Curl_raw_nequal("Content-Range:",*(undefined8 *)(param_1 + 0x110),0xe);
                    if (iVar4 == 0) {
                      if ((*(longlong *)(param_1 + 0x6a0) == 0) ||
                         (iVar4 = Curl_raw_nequal("Set-Cookie:",*(undefined8 *)(param_1 + 0x110),0xb
                                                 ), iVar4 == 0)) {
                        iVar4 = Curl_raw_nequal("Last-Modified:",*(undefined8 *)(param_1 + 0x110),
                                                0xe);
                        if ((iVar4 == 0) ||
                           ((*(int *)(param_1 + 0x370) == 0 && (*(char *)(param_1 + 0x441) == '\0'))
                           )) {
                          iVar4 = Curl_raw_nequal("WWW-Authenticate:",
                                                  *(undefined8 *)(param_1 + 0x110),0x11);
                          if (((iVar4 == 0) || (iVar4 = *(int *)(param_1 + 0x128), iVar4 != 0x191))
                             && ((iVar4 = Curl_raw_nequal("Proxy-authenticate:",
                                                          *(undefined8 *)(param_1 + 0x110),0x13),
                                 iVar4 == 0 || (iVar4 = *(int *)(param_1 + 0x128), iVar4 != 0x197)))
                             ) {
                            if (((*(int *)(param_1 + 0x128) - 300U < 100) &&
                                (iVar4 = Curl_raw_nequal("Location:",
                                                         *(undefined8 *)(param_1 + 0x110),9),
                                iVar4 != 0)) && (*(longlong *)(param_1 + 0x170) == 0)) {
                              pcVar8 = (char *)Curl_copy_header_value
                                                         (*(undefined8 *)(param_1 + 0x110));
                              if (pcVar8 == (char *)0x0) {
                                return 0x1b;
                              }
                              if (*pcVar8 == '\0') {
                                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar8);
                              }
                              else {
                                *(char **)(param_1 + 0x170) = pcVar8;
                                if (*(char *)(param_1 + 0x449) != '\0') {
                                  lVar15 = (*(code *)PTR__strdup_1467dcc70)(pcVar8);
                                  *(longlong *)(param_1 + 0x178) = lVar15;
                                  if (lVar15 == 0) {
                                    return 0x1b;
                                  }
                                  uVar7 = FUN_1436be190(param_2);
                                  goto LAB_1436bd96b;
                                }
                              }
                            }
                            else if ((*(uint *)(*(longlong *)(param_2 + 1000) + 0x74) & 0x40000) !=
                                     0) {
                              uVar7 = FUN_1436d3c30(param_2,*(undefined8 *)(param_1 + 0x110));
LAB_1436bd96b:
                              uVar5 = (uint)uVar7;
                              goto joined_r0x0001436bd96d;
                            }
                          }
                          else {
                            lVar15 = Curl_copy_header_value(*(undefined8 *)(param_1 + 0x110));
                            if (lVar15 == 0) {
                              return 0x1b;
                            }
                            uVar5 = FUN_1436bcaf0(param_2,iVar4 == 0x197,lVar15);
                            uVar7 = (ulonglong)uVar5;
                            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar15);
joined_r0x0001436bd96d:
                            if (uVar5 != 0) {
                              return uVar7;
                            }
                          }
                        }
                        else {
                          local_30 = _time64((__time64_t *)0x0);
                          uVar9 = curl_getdate(*(longlong *)(param_1 + 0x110) + 0xe,&local_30);
                          *(undefined8 *)(param_1 + 0x140) = uVar9;
                          if (*(char *)(param_1 + 0x441) != '\0') {
                            *(int *)(param_1 + 0x8a84) = (int)uVar9;
                          }
                        }
                      }
                      else {
                        Curl_share_lock(param_1,2,2);
                        lVar15 = *(longlong *)(param_2 + 0x448);
                        if (lVar15 == 0) {
                          lVar15 = *(longlong *)(param_2 + 0xb8);
                        }
                        FUN_1436a9b70(param_1,*(undefined8 *)(param_1 + 0x6a0),1,
                                      *(longlong *)(param_1 + 0x110) + 0xb,lVar15,
                                      *(undefined8 *)(param_1 + 0x89d8));
                        Curl_share_unlock(param_1,2);
                      }
                    }
                    else {
                      pbVar13 = (byte *)(*(longlong *)(param_1 + 0x110) + 0xe);
                      bVar3 = *pbVar13;
                      for (; ((bVar3 != 0 && (iVar4 = isdigit((uint)bVar3), iVar4 == 0)) &&
                             (*pbVar13 != 0x2a)); pbVar13 = pbVar13 + 1) {
                        bVar3 = pbVar13[1];
                      }
                      iVar4 = isdigit((uint)*pbVar13);
                      if (iVar4 == 0) {
                        *(undefined8 *)(param_1 + 0x89f0) = 0;
                      }
                      else {
                        lVar15 = strtoll(pbVar13,0,10);
                        *(longlong *)(param_1 + 0x120) = lVar15;
                        if (*(longlong *)(param_1 + 0x89f0) == lVar15) {
                          *(undefined1 *)(param_1 + 0x118) = 1;
                        }
                      }
                    }
                  }
                  else {
                    pbVar13 = (byte *)(*(longlong *)(param_1 + 0x110) + 0x11);
                    bVar3 = *pbVar13;
                    while ((bVar3 != 0 && (iVar4 = isspace((uint)bVar3), iVar4 != 0))) {
                      bVar3 = pbVar13[1];
                      pbVar13 = pbVar13 + 1;
                    }
                    iVar4 = Curl_raw_nequal("identity",pbVar13,8);
                    if (iVar4 == 0) {
                      iVar4 = Curl_raw_nequal("deflate",pbVar13,7);
                      if (iVar4 == 0) {
                        iVar4 = Curl_raw_nequal(&DAT_145b6ba18,pbVar13,4);
                        if ((iVar4 != 0) ||
                           (iVar4 = Curl_raw_nequal("x-gzip",pbVar13,6), iVar4 != 0)) {
                          *(undefined4 *)(param_1 + 0x13c) = 2;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x13c) = 1;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x13c) = 0;
                    }
                  }
                }
                else {
                  pbVar13 = (byte *)(*(longlong *)(param_1 + 0x110) + 0x12);
                  while( true ) {
                    bVar3 = *pbVar13;
                    for (; (bVar3 != 0 &&
                           ((iVar4 = isspace((uint)bVar3), iVar4 != 0 || (*pbVar13 == 0x2c))));
                        pbVar13 = pbVar13 + 1) {
                      bVar3 = pbVar13[1];
                    }
                    iVar4 = Curl_raw_nequal("chunked",pbVar13,7);
                    if (iVar4 != 0) {
                      *(undefined1 *)(param_1 + 400) = 1;
                      Curl_httpchunk_init(param_2);
                      pbVar13 = pbVar13 + 7;
                    }
                    if (*(int *)(param_1 + 0x13c) != 0) break;
                    iVar4 = Curl_raw_nequal("identity",pbVar13,8);
                    if (iVar4 == 0) {
                      iVar4 = Curl_raw_nequal("deflate",pbVar13,7);
                      if (iVar4 == 0) {
                        iVar4 = Curl_raw_nequal(&DAT_145b6ba18,pbVar13,4);
                        if (iVar4 == 0) {
                          iVar4 = Curl_raw_nequal("x-gzip",pbVar13,6);
                          if (iVar4 == 0) break;
                          *(undefined4 *)(param_1 + 0x13c) = 2;
                          pbVar13 = pbVar13 + 6;
                        }
                        else {
                          *(undefined4 *)(param_1 + 0x13c) = 2;
                          pbVar13 = pbVar13 + 4;
                        }
                      }
                      else {
                        *(undefined4 *)(param_1 + 0x13c) = 1;
                        pbVar13 = pbVar13 + 7;
                      }
                    }
                    else {
                      *(undefined4 *)(param_1 + 0x13c) = 0;
                      pbVar13 = pbVar13 + 8;
                    }
                  }
                }
              }
              else {
                *(undefined1 *)(param_2 + 0x3b9) = 1;
              }
            }
          }
          else if (*(int *)(param_2 + 0x1b4) < 0x14) {
            uVar9 = Curl_copy_header_value(*(undefined8 *)(param_1 + 0x110));
            if (((*(int **)(param_2 + 0x818) != (int *)0x0) && (**(int **)(param_2 + 0x818) == 1))
               && (cVar16 = Curl_pipeline_server_blacklisted(param_1,uVar9), cVar16 != '\0')) {
              **(undefined4 **)(param_2 + 0x818) = 0xffffffff;
            }
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(uVar9);
          }
        }
        else {
          pcVar8 = (char *)Curl_copy_header_value(*(undefined8 *)(param_1 + 0x110));
          if (pcVar8 == (char *)0x0) {
            return 0x1b;
          }
          if (*pcVar8 == '\0') {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pcVar8);
          }
          else {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)
                      (*(undefined8 *)(param_1 + 0x8aa0));
            *(char **)(param_1 + 0x8aa0) = pcVar8;
          }
        }
      }
      cVar16 = *(char *)(param_1 + 0x44c);
      if (*(char *)(param_1 + 0x458) != '\0') {
        FUN_1436b56c0(param_1,1,*(undefined8 *)(param_1 + 0x110),*(undefined8 *)(param_1 + 0xf0),
                      param_2);
      }
      uVar7 = Curl_client_write(param_2,(cVar16 != '\0') + '\x02',*(undefined8 *)(param_1 + 0x110),
                                *(undefined8 *)(param_1 + 0xf0));
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      *(int *)(param_1 + 0x8a8c) = *(int *)(param_1 + 0x8a8c) + *(int *)(param_1 + 0xf0);
      *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + *(int *)(param_1 + 0xf0);
    }
    *(undefined8 *)(param_1 + 0xe8) = *(undefined8 *)(param_1 + 0x7d8);
    *(undefined8 *)(param_1 + 0xf0) = 0;
    if (**(char **)(param_1 + 0xf8) == '\0') {
      return 0;
    }
  } while( true );
}



// FUNCTION 1436bddf0 FUN_1436bddf0 body=151 status=ok
// SIG undefined FUN_1436bddf0(void)

bool FUN_1436bddf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x410);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      iVar2 = Curl_raw_nequal("HTTP/",param_2,5);
      return iVar2 != 0;
    }
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(*plVar1 + lVar3) != '\0');
    iVar2 = Curl_raw_nequal(*plVar1,param_2);
    if (iVar2 != 0) break;
    plVar1 = (longlong *)plVar1[1];
  }
  return true;
}



// FUNCTION 1436bde90 FUN_1436bde90 body=232 status=ok
// SIG undefined FUN_1436bde90(void)

int FUN_1436bde90(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = 0;
  iVar6 = 0;
  *(undefined1 *)(param_1 + 0x89c8) = 0;
  if ((((*(int *)(param_1 + 0x89c4) != 10) &&
       (iVar1 = *(int *)((longlong)param_2 + 0x1b4), iVar1 != 10)) &&
      ((iVar2 = *(int *)(param_1 + 900), iVar2 != 1 || (10 < iVar1)))) &&
     (((iVar5 = iVar6, -1 < iVar2 && (iVar2 != 1)) && (iVar1 != 0x14)))) {
    for (plVar3 = *(longlong **)(*param_2 + 0x308); plVar3 != (longlong *)0x0;
        plVar3 = (longlong *)plVar3[1]) {
      iVar5 = Curl_raw_nequal(*plVar3,"Expect:",7);
      if (iVar5 != 0) {
        if (*plVar3 != 0) {
          uVar4 = Curl_compareheader(*plVar3,"Expect:","100-continue");
          *(undefined1 *)(param_1 + 0x89c8) = uVar4;
          return 0;
        }
        break;
      }
    }
    iVar5 = Curl_add_bufferf(param_3,"Expect: 100-continue\r\n");
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0x89c8) = 1;
    }
  }
  return iVar5;
}



// FUNCTION 1436bdf80 FUN_1436bdf80 body=239 status=ok
// SIG undefined FUN_1436bdf80(void)

undefined8 FUN_1436bdf80(longlong param_1,longlong param_2,size_t param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = *(longlong *)(param_2 + 0x60) + param_3;
  if (*(ulonglong *)(param_1 + 0x7e0) <= uVar4) {
    if (0x19000 < uVar4) {
      FUN_1436b5820(param_1,"Avoided giant realloc for header (max is %d)!",0x19000);
      return 0x1b;
    }
    lVar1 = *(longlong *)(param_2 + 0x58);
    lVar2 = *(longlong *)(param_1 + 0x7d8);
    uVar5 = *(ulonglong *)(param_1 + 0x7e0) * 2;
    uVar4 = uVar4 * 3 >> 1;
    if (uVar5 < uVar4) {
      uVar5 = uVar4;
    }
    lVar3 = (*(code *)PTR_realloc_1467dcc68)(lVar2,uVar5);
    if (lVar3 == 0) {
      FUN_1436b5820(param_1,"Failed to alloc memory for big header!");
      return 0x1b;
    }
    *(longlong *)(param_1 + 0x7d8) = lVar3;
    *(ulonglong *)(param_1 + 0x7e0) = uVar5;
    *(longlong *)(param_2 + 0x58) = lVar3 + (lVar1 - lVar2);
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x58),*(void **)(param_2 + 0x70),param_3);
  *(longlong *)(param_2 + 0x58) = *(longlong *)(param_2 + 0x58) + param_3;
  *(longlong *)(param_2 + 0x60) = *(longlong *)(param_2 + 0x60) + param_3;
  **(undefined1 **)(param_2 + 0x58) = 0;
  return 0;
}



// FUNCTION 1436be070 FUN_1436be070 body=282 status=ok
// SIG undefined FUN_1436be070(void)

undefined8 FUN_1436be070(longlong *param_1,char param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong local_res8;
  undefined8 local_res18;
  
  lVar3 = *param_1;
  local_res18 = 0;
  local_res8 = 0;
  if (param_2 == '\0') {
    lVar6 = param_1[0x30];
    lVar5 = 0x428;
    lVar1 = param_1[0x31];
  }
  else {
    lVar6 = param_1[0x34];
    lVar5 = 0x410;
    lVar1 = param_1[0x35];
  }
  param_1 = (longlong *)(lVar5 + (longlong)param_1);
  curl_msnprintf(lVar3 + 0x7e8,0x4001,"%s:%s",lVar6,lVar1);
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(lVar3 + 0x7e8 + lVar6) != '\0');
  uVar2 = Curl_base64_encode(lVar3,lVar3 + 0x7e8,lVar6,&local_res8,&local_res18);
  if ((int)uVar2 == 0) {
    if (local_res8 == 0) {
      uVar2 = 9;
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_1);
      pcVar4 = "";
      if (param_2 != '\0') {
        pcVar4 = "Proxy-";
      }
      lVar3 = curl_maprintf("%sAuthorization: Basic %s\r\n",pcVar4,local_res8);
      *param_1 = lVar3;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
      uVar2 = 0;
      if (*param_1 == 0) {
        uVar2 = 0x1b;
      }
    }
  }
  return uVar2;
}



// FUNCTION 1436be190 FUN_1436be190 body=380 status=ok
// SIG undefined FUN_1436be190(void)

undefined8 FUN_1436be190(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar2 = *param_1;
  lVar6 = -1;
  lVar3 = *(longlong *)(lVar2 + 0x198);
  if (((lVar3 == 0) || (iVar1 = *(int *)(lVar2 + 0x380), iVar1 == 1)) || (iVar1 == 5)) {
    return 0;
  }
  lVar4 = *(longlong *)(lVar3 + 0x30);
  if (*(char *)((longlong)param_1 + 0x3c9) == '\0') {
    if (*(char *)((longlong)param_1 + 0x3c6) == '\0') {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6;
      if (iVar1 == 2) {
        lVar7 = *(longlong *)(lVar2 + 0x8a08);
        if ((lVar7 == -1) && (lVar7 = lVar6, *(longlong *)(lVar2 + 0x200) != 0)) {
          do {
            lVar7 = lVar6 + 1;
            lVar6 = lVar7;
          } while (*(char *)(*(longlong *)(lVar2 + 0x200) + lVar7) != '\0');
        }
      }
      else if (iVar1 == 3) {
        lVar7 = *(longlong *)(lVar3 + 8);
      }
      else if ((iVar1 == 4) && (*(longlong *)(lVar2 + 0x8a08) != -1)) {
        lVar7 = *(longlong *)(lVar2 + 0x8a08);
      }
    }
  }
  else {
    lVar7 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x3ca) = 0;
  if ((lVar7 == -1) || (lVar4 < lVar7)) {
    if ((*(int *)(lVar2 + 0x8964) == 8) ||
       (((*(int *)(lVar2 + 0x8954) == 8 || (*(int *)(lVar2 + 0x8964) == 0x20)) ||
        (*(int *)(lVar2 + 0x8954) == 0x20)))) {
      if (((lVar7 - lVar4 < 2000) || ((int)param_1[0xa0] != 0)) || ((int)param_1[0xae] != 0)) {
        if (*(char *)((longlong)param_1 + 0x3c9) != '\0') {
          return 0;
        }
        *(undefined1 *)((longlong)param_1 + 0x3ca) = 1;
        FUN_1436b58e0(lVar2,"Rewind stream after send\n");
        return 0;
      }
      if (*(char *)((longlong)param_1 + 0x3b9) != '\0') {
        return 0;
      }
      FUN_1436b58e0(lVar2,"NTLM send, close instead of sending %I64d bytes\n");
    }
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    *(undefined8 *)(lVar2 + 0x90) = 0;
  }
  if (lVar4 == 0) {
    return 0;
  }
  uVar5 = FUN_1436b8850(param_1);
  return uVar5;
}



// FUNCTION 1436be310 FUN_1436be310 body=79 status=ok
// SIG undefined FUN_1436be310(void)

undefined1 FUN_1436be310(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  iVar1 = *(int *)(lVar2 + 0x128);
  if ((*(char *)(lVar2 + 0x448) == '\0') || (iVar1 < 400)) {
    return 0;
  }
  if (iVar1 == 0x191) {
    if (*(char *)((longlong)param_1 + 0x3bf) == '\0') {
      return 1;
    }
  }
  else if ((iVar1 != 0x197) || ((char)param_1[0x78] == '\0')) {
    return 1;
  }
  return *(undefined1 *)(lVar2 + 0x8970);
}



// FUNCTION 1436be360 FUN_1436be360 body=425 status=ok
// SIG undefined FUN_1436be360(void)

undefined8
FUN_1436be360(longlong *param_1,longlong param_2,undefined8 param_3,undefined8 param_4,char param_5)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char *pcVar7;
  longlong lVar8;
  undefined4 *puVar9;
  
  lVar1 = *param_1;
  pcVar6 = (char *)0x0;
  lVar8 = 0x8870;
  if (param_5 != '\0') {
    lVar8 = 0x88e0;
  }
  puVar9 = (undefined4 *)(lVar8 + lVar1);
  *puVar9 = 0;
  iVar2 = *(int *)(param_2 + 4);
  if (((iVar2 == 4) && (*(longlong *)(puVar9 + 4) != 0)) && (-1 < (int)puVar9[1])) {
    pcVar6 = "Negotiate";
    uVar3 = FUN_1436d8fe0(param_1,param_5);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    *(undefined1 *)(param_2 + 0xc) = 1;
    *puVar9 = 2;
    goto LAB_1436be48f;
  }
  if (iVar2 == 8) {
    pcVar6 = "NTLM";
    uVar3 = FUN_1436d5cb0(param_1,param_5);
    iVar2 = (int)uVar3;
  }
  else {
    if (iVar2 != 2) {
      if (iVar2 != 1) goto LAB_1436be4ea;
      if (param_5 == '\0') {
        if (*(char *)((longlong)param_1 + 0x3bf) != '\0') {
          lVar8 = FUN_1436bc690(param_1,"Authorization:");
          goto joined_r0x0001436be46d;
        }
      }
      else if ((char)param_1[0x78] != '\0') {
        lVar8 = FUN_1436bc600(param_1,"Proxy-authorization:");
joined_r0x0001436be46d:
        pcVar6 = (char *)0x0;
        if (lVar8 == 0) {
          pcVar6 = "Basic";
          uVar3 = FUN_1436be070(param_1,param_5);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
      }
      *(undefined1 *)(param_2 + 0xc) = 1;
      if (pcVar6 == (char *)0x0) {
LAB_1436be4ea:
        *(undefined1 *)(param_2 + 0xd) = 0;
        return 0;
      }
      goto LAB_1436be48f;
    }
    pcVar6 = "Digest";
    uVar3 = FUN_1436d5970(param_1,param_5);
    iVar2 = (int)uVar3;
  }
  if (iVar2 != 0) {
    return uVar3;
  }
LAB_1436be48f:
  if (param_5 == '\0') {
    puVar4 = (undefined1 *)param_1[0x30];
  }
  else {
    puVar4 = (undefined1 *)param_1[0x34];
  }
  pcVar7 = "Server";
  puVar5 = &DAT_145af3922;
  if (puVar4 != (undefined1 *)0x0) {
    puVar5 = puVar4;
  }
  if (param_5 != '\0') {
    pcVar7 = "Proxy";
  }
  FUN_1436b58e0(lVar1,"%s auth using %s with user \'%s\'\n",pcVar7,pcVar6,puVar5);
  *(bool *)(param_2 + 0xd) = *(char *)(param_2 + 0xc) == '\0';
  return 0;
}



// FUNCTION 1436be510 pickoneauth body=137 status=ok
// SIG undefined pickoneauth(void)

undefined8 pickoneauth(uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 & param_1[2];
  if ((uVar1 & 4) != 0) {
    param_1[1] = 4;
    param_1[2] = 0;
    return 1;
  }
  if ((uVar1 & 2) != 0) {
    param_1[1] = 2;
    param_1[2] = 0;
    return 1;
  }
  if ((uVar1 & 8) != 0) {
    param_1[1] = 8;
    param_1[2] = 0;
    return 1;
  }
  if ((uVar1 & 0x20) != 0) {
    param_1[1] = 0x20;
    param_1[2] = 0;
    return 1;
  }
  if ((uVar1 & 1) != 0) {
    param_1[1] = 1;
    param_1[2] = 0;
    return 1;
  }
  param_1[1] = 0x40000000;
  param_1[2] = 0;
  return 0;
}



// FUNCTION 1436be5a0 print_http_error body=201 status=ok
// SIG undefined print_http_error(void)

void print_http_error(longlong param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  
  pcVar2 = *(char **)(param_1 + 0x110);
  iVar1 = strncmp(pcVar2,"HTTP",4);
  if (((iVar1 == 0) && (pcVar2 = strchr(pcVar2,0x20), pcVar2 != (char *)0x0)) &&
     (pcVar2 = pcVar2 + 1, *pcVar2 != '\0')) {
    cVar4 = '\r';
    pcVar3 = strchr(pcVar2,0xd);
    if (pcVar3 == (char *)0x0) {
      cVar4 = '\n';
      pcVar3 = strchr(pcVar2,10);
      if (pcVar3 == (char *)0x0) goto LAB_1436be63e;
    }
    *pcVar3 = '\0';
    FUN_1436b5820(param_1,"The requested URL returned error: %s",pcVar2);
    *pcVar3 = cVar4;
    return;
  }
LAB_1436be63e:
  FUN_1436b5820(param_1,"The requested URL returned error: %d",*(undefined4 *)(param_1 + 0x128));
  return;
}



// FUNCTION 1436be670 FUN_1436be670 body=236 status=ok
// SIG undefined FUN_1436be670(void)

size_t FUN_1436be670(void *param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  size_t sVar2;
  
  sVar2 = param_2 * param_3;
  lVar1 = *(longlong *)(*param_4 + 0x198);
  if (*(longlong *)(lVar1 + 8) == 0) {
    return 0;
  }
  *(bool *)(*param_4 + 0x193) = *(int *)(lVar1 + 0x78) == 1;
  if ((longlong)*(size_t *)(lVar1 + 8) <= (longlong)sVar2) {
    _guard_xfg_dispatch_icall_nop(param_1,*(void **)(lVar1 + 0x10),*(size_t *)(lVar1 + 8));
    sVar2 = *(size_t *)(lVar1 + 8);
    if (*(longlong *)(lVar1 + 0x70) != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x68);
      *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 0x70);
      *(undefined8 *)(*param_4 + 0x8a20) = *(undefined8 *)(lVar1 + 0x58);
      *(undefined8 *)(*param_4 + 0x8a28) = *(undefined8 *)(lVar1 + 0x60);
      *(int *)(lVar1 + 0x78) = *(int *)(lVar1 + 0x78) + 1;
      *(undefined8 *)(lVar1 + 0x70) = 0;
      return sVar2;
    }
    *(undefined8 *)(lVar1 + 8) = 0;
    return sVar2;
  }
  _guard_xfg_dispatch_icall_nop(param_1,*(void **)(lVar1 + 0x10),sVar2);
  *(longlong *)(lVar1 + 0x10) = *(longlong *)(lVar1 + 0x10) + sVar2;
  *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) - sVar2;
  return sVar2;
}



// FUNCTION 1436be760 FUN_1436be760 body=57 status=ok
// SIG undefined FUN_1436be760(void)

ulonglong FUN_1436be760(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong in_RAX;
  
  if ((*(int *)(param_1 + 0x89c4) != 10) && (*(int *)(param_2 + 0x1b4) != 10)) {
    iVar1 = *(int *)(param_1 + 900);
    if ((iVar1 != 1) || (in_RAX = 0, 10 < *(int *)(param_2 + 0x1b4))) {
      if ((-1 < iVar1) && (iVar1 != 1)) {
        return 1;
      }
      return 0;
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1436be7a0 Curl_wildcard_dtor body=108 status=ok
// SIG undefined Curl_wildcard_dtor(void)

void Curl_wildcard_dtor(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    if (*(code **)(param_1 + 10) != (code *)0x0) {
      (**(code **)(param_1 + 10))(*(undefined8 *)(param_1 + 8));
      *(undefined8 *)(param_1 + 10) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    if (*(longlong *)(param_1 + 6) != 0) {
      Curl_llist_destroy(*(longlong *)(param_1 + 6),0);
      *(undefined8 *)(param_1 + 6) = 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 2));
    *(undefined8 *)(param_1 + 2) = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 4));
    *(undefined8 *)(param_1 + 4) = 0;
    *(undefined8 *)(param_1 + 0xc) = 0;
    *param_1 = 0;
  }
  return;
}



// FUNCTION 1436be810 Curl_wildcard_init body=46 status=ok
// SIG undefined Curl_wildcard_init(void)

undefined8 Curl_wildcard_init(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = Curl_llist_alloc(Curl_fileinfo_dtor);
  uVar2 = 0;
  *(longlong *)(param_1 + 0x18) = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0x1b;
  }
  return uVar2;
}



// FUNCTION 1436be840 FUN_1436be840 body=382 status=ok
// SIG undefined FUN_1436be840(void)

undefined8 FUN_1436be840(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 *puVar3;
  longlong lVar4;
  undefined4 *puVar5;
  longlong lVar6;
  
  lVar1 = *param_2;
  puVar3 = (undefined4 *)FUN_1436be9d0(param_2,*(undefined8 *)(lVar1 + 0x7b8));
  puVar5 = (undefined4 *)0x0;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x18);
    if (puVar3 == (undefined4 *)0x0) {
      return 0x1b;
    }
    *(undefined8 *)(puVar3 + 2) = 0;
    *puVar3 = 0;
    lVar4 = Curl_llist_alloc(&LAB_1436bec60);
    *(longlong *)(puVar3 + 4) = lVar4;
    if (lVar4 != 0) {
      if (*(char *)((longlong)param_2 + 0x3bd) == '\0') {
        if (*(char *)((longlong)param_2 + 0x3bb) == '\0') {
          lVar4 = param_2[0x17];
        }
        else {
          lVar4 = param_2[0x1b];
        }
      }
      else {
        lVar4 = param_2[0x1f];
      }
      lVar4 = curl_maprintf("%s:%d",lVar4);
      if (lVar4 != 0) {
        lVar6 = -1;
        do {
          lVar6 = lVar6 + 1;
        } while (*(char *)(lVar6 + lVar4) != '\0');
        lVar6 = FUN_1436b7af0(*(undefined8 *)(lVar1 + 0x7b8),lVar4,lVar6,puVar3);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
        puVar5 = puVar3;
        if (lVar6 == 0) {
          FUN_1436bec20(puVar3);
          return 0x1b;
        }
        goto LAB_1436be95a;
      }
      if (*(longlong *)(puVar3 + 4) != 0) {
        Curl_llist_destroy(*(longlong *)(puVar3 + 4),0);
        *(undefined8 *)(puVar3 + 4) = 0;
      }
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
  }
  else {
LAB_1436be95a:
    iVar2 = FUN_1436b9de0(*(longlong *)(puVar3 + 4),*(undefined8 *)(*(longlong *)(puVar3 + 4) + 8),
                          param_2);
    if (iVar2 != 0) {
      param_2[0x103] = (longlong)puVar3;
      *(longlong *)(puVar3 + 2) = *(longlong *)(puVar3 + 2) + 1;
      *(undefined4 *)((longlong)param_2 + 0x4c) = *(undefined4 *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + 1;
      return 0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      conncache_remove_bundle(*(undefined8 *)(lVar1 + 0x7b8),puVar5);
    }
  }
  return 0x1b;
}



// FUNCTION 1436be9c0 FUN_1436be9c0 body=10 status=ok
// SIG undefined FUN_1436be9c0(void)

void FUN_1436be9c0(longlong *param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_1 != (longlong *)0x0) {
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
  return;
}



// FUNCTION 1436be9d0 FUN_1436be9d0 body=163 status=ok
// SIG undefined FUN_1436be9d0(void)

undefined8 FUN_1436be9d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x3bd) == '\0') {
    if (*(char *)(param_1 + 0x3bb) == '\0') {
      uVar2 = *(undefined8 *)(param_1 + 0xb8);
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + 0xd8);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0xf8);
  }
  lVar1 = curl_maprintf("%s:%d",uVar2);
  if (lVar1 != 0) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(lVar1 + lVar3) != '\0');
    uVar2 = FUN_1436b8020(param_2,lVar1);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar1);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1436bea80 Curl_conncache_find_first_connection body=77 status=ok
// SIG undefined Curl_conncache_find_first_connection(void)

undefined8 Curl_conncache_find_first_connection(undefined8 param_1)

{
  longlong *plVar1;
  undefined1 local_28 [40];
  
  Curl_hash_start_iterate(param_1,local_28);
  plVar1 = (longlong *)Curl_hash_next_element(local_28);
  while( true ) {
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    if ((undefined8 *)**(longlong **)(*plVar1 + 0x10) != (undefined8 *)0x0) break;
    plVar1 = (longlong *)Curl_hash_next_element(local_28);
  }
  return *(undefined8 *)**(longlong **)(*plVar1 + 0x10);
}



// FUNCTION 1436bead0 Curl_conncache_foreach body=144 status=ok
// SIG undefined Curl_conncache_foreach(void)

void Curl_conncache_foreach(longlong param_1,undefined8 param_2,code *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  undefined1 local_28 [32];
  
  if (param_1 != 0) {
    Curl_hash_start_iterate(param_1,local_28);
    plVar5 = (longlong *)Curl_hash_next_element(local_28);
    while (plVar5 != (longlong *)0x0) {
      lVar1 = *plVar5;
      plVar5 = (longlong *)Curl_hash_next_element(local_28);
      puVar2 = (undefined8 *)**(undefined8 **)(lVar1 + 0x10);
      while (puVar2 != (undefined8 *)0x0) {
        uVar3 = *puVar2;
        puVar2 = (undefined8 *)puVar2[2];
        iVar4 = (*param_3)(uVar3,param_2);
        if (iVar4 == 1) {
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1436beb60 Curl_conncache_init body=40 status=ok
// SIG undefined Curl_conncache_init(void)

void Curl_conncache_init(undefined8 param_1,undefined8 param_2)

{
  Curl_hash_init(param_1,param_2,&LAB_1436b80d0,Curl_str_key_compare,FUN_1436bec20);
  return;
}



// FUNCTION 1436beb90 FUN_1436beb90 body=130 status=ok
// SIG undefined FUN_1436beb90(void)

void FUN_1436beb90(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x818);
  if (lVar1 != 0) {
    for (plVar2 = (longlong *)**(undefined8 **)(lVar1 + 0x10); plVar2 != (longlong *)0x0;
        plVar2 = (longlong *)plVar2[2]) {
      if (*plVar2 == param_2) {
        Curl_llist_remove(*(undefined8 **)(lVar1 + 0x10),plVar2,0);
        *(longlong *)(lVar1 + 8) = *(longlong *)(lVar1 + 8) + -1;
        *(undefined8 *)(param_2 + 0x818) = 0;
        break;
      }
    }
    if (*(longlong *)(lVar1 + 8) == 0) {
      conncache_remove_bundle(param_1,lVar1);
    }
    if (param_1 != 0) {
      *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -1;
    }
  }
  return;
}



// FUNCTION 1436bec20 FUN_1436bec20 body=52 status=ok
// SIG undefined FUN_1436bec20(void)

void FUN_1436bec20(longlong param_1)

{
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x10) != 0) {
      Curl_llist_destroy(*(longlong *)(param_1 + 0x10),0);
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  }
  return;
}



// FUNCTION 1436bec70 conncache_remove_bundle body=106 status=ok
// SIG undefined conncache_remove_bundle(void)

void conncache_remove_bundle(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined1 local_28 [32];
  
  if (param_1 != 0) {
    Curl_hash_start_iterate(param_1,local_28);
    plVar1 = (longlong *)Curl_hash_next_element(local_28);
    if (plVar1 != (longlong *)0x0) {
      while (*plVar1 != param_2) {
        plVar1 = (longlong *)Curl_hash_next_element(local_28);
        if (plVar1 == (longlong *)0x0) {
          return;
        }
      }
      FUN_1436b7d50(param_1,plVar1[1],plVar1[2]);
    }
  }
  return;
}



// FUNCTION 1436bece0 FUN_1436bece0 body=82 status=ok
// SIG undefined FUN_1436bece0(void)

undefined8 FUN_1436bece0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(lVar1 + 0x6a8) = 0;
  uVar2 = FUN_1436befa0();
  if ((int)uVar2 == 0) {
    if (((*(byte *)(lVar1 + 0x6e0) & 0x10) == 0) && (*(char *)(lVar1 + 0x6d8) == (char)uVar2)) {
      curl_mfprintf(*(undefined8 *)(lVar1 + 0x1a0),&DAT_145af0af0);
    }
    *(undefined4 *)(lVar1 + 0x7b0) = 0;
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436bed40 FUN_1436bed40 body=52 status=ok
// SIG undefined FUN_1436bed40(void)

void FUN_1436bed40(longlong param_1)

{
  *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) & 0xffffff9f;
  *(undefined8 *)(param_1 + 0x700) = 0;
  *(undefined8 *)(param_1 + 0x708) = 0;
  *(undefined8 *)(param_1 + 0x718) = 0;
  *(undefined8 *)(param_1 + 0x720) = 0;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  return;
}



// FUNCTION 1436bed80 FUN_1436bed80 body=8 status=ok
// SIG undefined FUN_1436bed80(void)

void FUN_1436bed80(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x6c0) = param_2;
  return;
}



// FUNCTION 1436bed90 FUN_1436bed90 body=39 status=ok
// SIG undefined FUN_1436bed90(void)

void FUN_1436bed90(longlong param_1,longlong param_2)

{
  if (-1 < param_2) {
    *(longlong *)(param_1 + 0x6b0) = param_2;
    *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) | 0x40;
    return;
  }
  *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) & 0xffffffbf;
  *(undefined8 *)(param_1 + 0x6b0) = 0;
  return;
}



// FUNCTION 1436bedc0 FUN_1436bedc0 body=8 status=ok
// SIG undefined FUN_1436bedc0(void)

void FUN_1436bedc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x6c8) = param_2;
  return;
}



// FUNCTION 1436bedd0 FUN_1436bedd0 body=39 status=ok
// SIG undefined FUN_1436bedd0(void)

void FUN_1436bedd0(longlong param_1,longlong param_2)

{
  if (-1 < param_2) {
    *(longlong *)(param_1 + 0x6b8) = param_2;
    *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) | 0x20;
    return;
  }
  *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) & 0xffffffdf;
  *(undefined8 *)(param_1 + 0x6b8) = 0;
  return;
}



// FUNCTION 1436bee00 FUN_1436bee00 body=47 status=ok
// SIG undefined FUN_1436bee00(void)

void FUN_1436bee00(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 0x7b0) = 0;
  uVar1 = curlx_tvnow();
  *(uint *)(param_1 + 0x6e0) = *(uint *)(param_1 + 0x6e0) & 0x90;
  *(undefined8 *)(param_1 + 0x730) = uVar1;
  return;
}



// FUNCTION 1436bee30 FUN_1436bee30 body=317 status=ok
// SIG undefined FUN_1436bee30(void)

void FUN_1436bee30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = curlx_tvnow();
  switch(param_2) {
  case 1:
    *(undefined8 *)(param_1 + 0x740) = uVar1;
    return;
  case 2:
    *(undefined8 *)(param_1 + 0x738) = uVar1;
    return;
  case 3:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x700) = uVar1;
    return;
  case 4:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x708) = uVar1;
    return;
  case 5:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x710) = uVar1;
    return;
  case 6:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x718) = uVar1;
    return;
  case 7:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x738));
    *(undefined8 *)(param_1 + 0x720) = uVar1;
    return;
  case 9:
    uVar1 = curlx_tvnow();
    *(undefined8 *)(param_1 + 0x748) = uVar1;
    return;
  case 10:
    uVar1 = FUN_1436aba00(uVar1,*(undefined8 *)(param_1 + 0x730));
    *(undefined8 *)(param_1 + 0x728) = uVar1;
  }
  return;
}



// FUNCTION 1436befa0 FUN_1436befa0 body=1542 status=ok
// SIG undefined FUN_1436befa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436befa0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  int iVar16;
  longlong lVar17;
  double dVar18;
  double dVar19;
  undefined1 auStack_128 [32];
  double local_108;
  undefined8 local_100;
  longlong local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [10];
  undefined1 local_6e [10];
  undefined1 local_64 [10];
  undefined1 local_5a [10];
  undefined1 local_50 [10];
  undefined1 local_46 [14];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar1 = *param_1;
  uVar8 = 0;
  local_b0 = 0;
  local_b8 = 0;
  bVar2 = false;
  iVar3 = *(int *)(lVar1 + 0x7b0);
  uVar4 = curlx_tvnow();
  iVar16 = (int)uVar4;
  dVar18 = (double)((int)((ulonglong)uVar4 >> 0x20) - *(int *)(lVar1 + 0x734)) / 1000000.0 +
           (double)(iVar16 - *(int *)(lVar1 + 0x730));
  *(double *)(lVar1 + 0x6e8) = dVar18;
  lVar17 = (longlong)dVar18;
  dVar19 = dVar18;
  if (dVar18 <= 0.0) {
    dVar19 = 1.0;
  }
  lVar5 = *(longlong *)(lVar1 + 0x6c0);
  *(longlong *)(lVar1 + 0x6f0) = (longlong)((double)lVar5 / dVar19);
  if (dVar18 <= 0.0) {
    dVar18 = 1.0;
  }
  lVar14 = *(longlong *)(lVar1 + 0x6c8);
  *(longlong *)(lVar1 + 0x6f8) = (longlong)((double)lVar14 / dVar18);
  if (*(int *)(lVar1 + 0x6a8) != iVar16) {
    lVar15 = (longlong)
             (iVar3 + (iVar3 / 6 + (iVar3 >> 0x1f) +
                      (int)(((longlong)iVar3 / 6 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >> 0x1f)
                      ) * -6);
    *(int *)(lVar1 + 0x6a8) = iVar16;
    bVar2 = true;
    if (lVar14 < lVar5) {
      lVar14 = lVar5;
    }
    *(longlong *)(lVar1 + 0x750 + lVar15 * 8) = lVar14;
    *(undefined8 *)(lVar1 + 0x780 + lVar15 * 8) = uVar4;
    iVar16 = *(int *)(lVar1 + 0x7b0) + 1;
    *(int *)(lVar1 + 0x7b0) = iVar16;
    iVar3 = iVar16;
    if (5 < iVar16) {
      iVar3 = 6;
    }
    if (iVar3 == 1) {
      lVar5 = *(longlong *)(lVar1 + 0x6f0);
      if (*(longlong *)(lVar1 + 0x6f0) < *(longlong *)(lVar1 + 0x6f8)) {
        lVar5 = *(longlong *)(lVar1 + 0x6f8);
      }
      *(longlong *)(lVar1 + 0x6d0) = lVar5;
    }
    else {
      uVar6 = uVar8;
      if (5 < iVar16) {
        uVar6 = (ulonglong)
                (uint)(iVar16 + (iVar16 / 6 + (iVar16 >> 0x1f) +
                                (int)(((longlong)iVar16 / 6 + ((longlong)iVar16 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -6);
      }
      iVar3 = curlx_tvdiff(uVar4,*(undefined8 *)(lVar1 + 0x780 + (longlong)(int)uVar6 * 8));
      if (iVar3 == 0) {
        iVar3 = 1;
      }
      lVar5 = *(longlong *)(lVar1 + 0x750 + lVar15 * 8) -
              *(longlong *)(lVar1 + 0x750 + (longlong)(int)uVar6 * 8);
      if (lVar5 < 0x418938) {
        *(longlong *)(lVar1 + 0x6d0) = (lVar5 * 1000) / (longlong)iVar3;
      }
      else {
        *(longlong *)(lVar1 + 0x6d0) = (longlong)((double)lVar5 / ((double)iVar3 / 1000.0));
      }
    }
  }
  if ((*(uint *)(lVar1 + 0x6e0) & 0x10) == 0) {
    if (*(code **)(lVar1 + 0x250) != (code *)0x0) {
      local_108 = *(double *)(lVar1 + 0x6c8);
      iVar3 = (**(code **)(lVar1 + 0x250))
                        (*(undefined8 *)(lVar1 + 0x2b8),*(undefined8 *)(lVar1 + 0x6b0),
                         *(undefined8 *)(lVar1 + 0x6c0),*(undefined8 *)(lVar1 + 0x6b8));
      if (iVar3 == 0) {
        return 0;
      }
      FUN_1436b5820(lVar1,"Callback aborted");
      return iVar3;
    }
    if (*(code **)(lVar1 + 0x248) != (code *)0x0) {
      local_108 = (double)*(longlong *)(lVar1 + 0x6c8);
      iVar3 = (**(code **)(lVar1 + 0x248))
                        (*(undefined8 *)(lVar1 + 0x2b8),(double)*(longlong *)(lVar1 + 0x6b0),
                         (double)*(longlong *)(lVar1 + 0x6c0),(double)*(longlong *)(lVar1 + 0x6b8));
      if (iVar3 == 0) {
        return 0;
      }
      FUN_1436b5820(lVar1,"Callback aborted");
      return iVar3;
    }
    if (bVar2) {
      if (-1 < (char)*(uint *)(lVar1 + 0x6e0)) {
        if (*(longlong *)(lVar1 + 0x89f0) != 0) {
          curl_mfprintf(*(undefined8 *)(lVar1 + 0x1a0),
                        "** Resuming transfer from byte position %I64d\n");
        }
        curl_mfprintf(*(undefined8 *)(lVar1 + 0x1a0),
                      "  %% Total    %% Received %% Xferd  Average Speed   Time    Time     Time  Current\n                                 Dload  Upload   Total   Spent    Left  Speed\n"
                     );
        *(uint *)(lVar1 + 0x6e0) = *(uint *)(lVar1 + 0x6e0) | 0x80;
      }
      uVar6 = uVar8;
      if (((*(uint *)(lVar1 + 0x6e0) & 0x20) != 0) && (uVar6 = 0, 0 < *(longlong *)(lVar1 + 0x6f8)))
      {
        lVar5 = *(longlong *)(lVar1 + 0x6b8);
        uVar6 = lVar5 / *(longlong *)(lVar1 + 0x6f8);
        if (lVar5 < 0x2711) {
          if (0 < lVar5) {
            local_b8 = (*(longlong *)(lVar1 + 0x6c8) * 100) / lVar5;
          }
        }
        else {
          lVar5 = lVar5 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8);
          local_b8 = *(longlong *)(lVar1 + 0x6c8) / ((lVar5 >> 6) - (lVar5 >> 0x3f));
        }
      }
      uVar7 = uVar8;
      if (((*(uint *)(lVar1 + 0x6e0) & 0x40) != 0) && (uVar7 = 0, 0 < *(longlong *)(lVar1 + 0x6f0)))
      {
        lVar5 = *(longlong *)(lVar1 + 0x6b0);
        uVar7 = lVar5 / *(longlong *)(lVar1 + 0x6f0);
        if (lVar5 < 0x2711) {
          if (0 < lVar5) {
            local_b0 = (*(longlong *)(lVar1 + 0x6c0) * 100) / lVar5;
          }
        }
        else {
          lVar5 = lVar5 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8);
          local_b0 = *(longlong *)(lVar1 + 0x6c0) / ((lVar5 >> 6) - (lVar5 >> 0x3f));
        }
      }
      if ((longlong)uVar7 < (longlong)uVar6) {
        uVar7 = uVar6;
      }
      uVar6 = uVar7 - lVar17;
      if ((longlong)uVar7 < 1) {
        uVar6 = uVar8;
      }
      time2str(local_a8,uVar6);
      time2str(local_88,uVar7);
      time2str(local_98,lVar17);
      if ((*(uint *)(lVar1 + 0x6e0) & 0x20) == 0) {
        lVar17 = *(longlong *)(lVar1 + 0x6c8);
      }
      else {
        lVar17 = *(longlong *)(lVar1 + 0x6b8);
      }
      if ((*(uint *)(lVar1 + 0x6e0) & 0x40) == 0) {
        lVar5 = *(longlong *)(lVar1 + 0x6c0);
      }
      else {
        lVar5 = *(longlong *)(lVar1 + 0x6b0);
      }
      lVar5 = lVar5 + lVar17;
      lVar17 = *(longlong *)(lVar1 + 0x6c0) + *(longlong *)(lVar1 + 0x6c8);
      if (lVar5 < 0x2711) {
        if (0 < lVar5) {
          uVar8 = (lVar17 * 100) / lVar5;
        }
      }
      else {
        lVar14 = lVar5 + SUB168(SEXT816(-0x5c28f5c28f5c28f5) * SEXT816(lVar5),8);
        uVar8 = lVar17 / ((lVar14 >> 6) - (lVar14 >> 0x3f));
      }
      uVar4 = max5data(*(undefined8 *)(lVar1 + 0x6d0),local_46);
      uVar9 = max5data(*(undefined8 *)(lVar1 + 0x6f8),local_50);
      uVar10 = max5data(*(undefined8 *)(lVar1 + 0x6f0),local_5a);
      uVar11 = max5data(*(undefined8 *)(lVar1 + 0x6c8),local_6e);
      uVar12 = max5data(*(undefined8 *)(lVar1 + 0x6c0),local_78);
      uVar13 = max5data(lVar5,local_64);
      local_c8 = local_a8;
      local_d0 = local_98;
      local_d8 = local_88;
      local_f8 = local_b8;
      local_108 = (double)local_b0;
      local_100 = uVar12;
      local_f0 = uVar11;
      local_e8 = uVar10;
      local_e0 = uVar9;
      local_c0 = uVar4;
      curl_mfprintf(*(undefined8 *)(lVar1 + 0x1a0),
                    "\r%3I64d %s  %3I64d %s  %3I64d %s  %s  %s %s %s %s %s",uVar8,uVar13);
      fflush(*(FILE **)(lVar1 + 0x1a0));
    }
  }
  return 0;
}



// FUNCTION 1436bf5b0 max5data body=444 status=ok
// SIG undefined max5data(void)

undefined8 max5data(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  uint uVar2;
  char *pcVar3;
  
  if (param_1 < 100000) {
    pcVar3 = "%5I64d";
  }
  else {
    uVar2 = (uint)(param_1 >> 0x3f);
    if (param_1 < 0x9c4000) {
      pcVar3 = "%4I64dk";
      param_1 = (longlong)((ulonglong)(uVar2 & 0x3ff) + param_1) >> 10;
    }
    else {
      if (param_1 < 0x6400000) {
        pcVar3 = "%2I64d.%0I64dM";
        param_1 = param_1 + (ulonglong)(uVar2 & 0xfffff);
        lVar1 = (ulonglong)((uint)param_1 & 0xfffff) - (ulonglong)(uVar2 & 0xfffff);
        param_1 = param_1 >> 0x14;
        lVar1 = SUB168(SEXT816(-0x5fffc3ffe97ff78f) * SEXT816(lVar1),8) + lVar1 >> 0x10;
LAB_1436bf63d:
        curl_msnprintf(param_2,6,pcVar3,param_1,lVar1 - (lVar1 >> 0x3f));
        return param_2;
      }
      if (param_1 < 0x271000000) {
        pcVar3 = "%4I64dM";
        param_1 = (longlong)((ulonglong)(uVar2 & 0xfffff) + param_1) >> 0x14;
      }
      else {
        if (param_1 < 0x1900000000) {
          pcVar3 = "%2I64d.%0I64dG";
          param_1 = param_1 + (ulonglong)(uVar2 & 0x3fffffff);
          lVar1 = (ulonglong)((uint)param_1 & 0x3fffffff) - (ulonglong)(uVar2 & 0x3fffffff);
          param_1 = param_1 >> 0x1e;
          lVar1 = SUB168(SEXT816(-0x5ffffff5ffffff5f) * SEXT816(lVar1),8) + lVar1 >> 0x1a;
          goto LAB_1436bf63d;
        }
        if (param_1 < 0x9c400000000) {
          pcVar3 = "%4I64dG";
          param_1 = (longlong)((ulonglong)(uVar2 & 0x3fffffff) + param_1) >> 0x1e;
        }
        else if (param_1 < 0x27100000000000) {
          pcVar3 = "%4I64dT";
          param_1 = (longlong)((param_1 >> 0x3f & 0xffffffffffU) + param_1) >> 0x28;
        }
        else {
          pcVar3 = "%4I64dP";
          param_1 = (longlong)((param_1 >> 0x3f & 0x3ffffffffffffU) + param_1) >> 0x32;
        }
      }
    }
  }
  curl_msnprintf(param_2,6,pcVar3,param_1);
  return param_2;
}



// FUNCTION 1436bf770 time2str body=296 status=ok
// SIG undefined time2str(void)

void time2str(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 < 1) {
    *param_1 = 0x2d2d3a2d2d3a2d2d;
    *(undefined1 *)(param_1 + 1) = 0;
    return;
  }
  lVar1 = param_2 / 0xe10;
  if (lVar1 < 100) {
    lVar2 = SUB168(SEXT816(-0x7777777777777777) * SEXT816(param_2 % 0xe10),8) + param_2 % 0xe10;
    lVar2 = (lVar2 >> 5) - (lVar2 >> 0x3f);
    curl_msnprintf(param_1,9,"%2I64d:%02I64d:%02I64d",lVar1,lVar2,
                   param_2 + (lVar1 * 0x3c + lVar2) * -0x3c);
    return;
  }
  if (param_2 / 0x15180 < 1000) {
    curl_msnprintf(param_1,9,"%3I64dd %02I64dh",param_2 / 0x15180,(param_2 % 0x15180) / 0xe10);
    return;
  }
  curl_msnprintf(param_1,9,"%7I64dd");
  return;
}



// FUNCTION 1436bf8a0 FUN_1436bf8a0 body=181 status=ok
// SIG undefined FUN_1436bf8a0(void)

undefined8 FUN_1436bf8a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if ((((*(longlong *)(param_1 + 0x6d0) < 0) || (*(int *)(param_1 + 0x2ec) == 0)) ||
      (iVar1 = FUN_1436a85f0(*(undefined8 *)(param_1 + 0x7c4)), iVar1 == 0)) ||
     ((longlong)*(int *)(param_1 + 0x2e8) <= *(longlong *)(param_1 + 0x6d0))) {
    *(undefined8 *)(param_1 + 0x7c4) = param_2;
    if (*(int *)(param_1 + 0x2e8) == 0) {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x2ec) * 1000;
  }
  else {
    iVar1 = curlx_tvdiff(param_2,*(undefined8 *)(param_1 + 0x7c4));
    iVar1 = *(int *)(param_1 + 0x2ec) * 1000 - iVar1;
    if (iVar1 < 1) {
      FUN_1436b5820(param_1,
                    "Operation too slow. Less than %ld bytes/sec transferred the last %ld seconds",
                    *(undefined4 *)(param_1 + 0x2e8));
      return 0x1c;
    }
  }
  FUN_1436a46a0(param_1,iVar1);
  return 0;
}



// FUNCTION 1436bf960 FUN_1436bf960 body=10 status=ok
// SIG undefined FUN_1436bf960(void)

void FUN_1436bf960(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x7c4) = 0;
  return;
}



// FUNCTION 1436bf970 FUN_1436bf970 body=123 status=ok
// SIG undefined FUN_1436bf970(void)

undefined4 FUN_1436bf970(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  undefined4 uVar5;
  
  plVar1 = *(longlong **)(param_2 + 0x4c8);
  lVar2 = *plVar1;
  iVar4 = FUN_1436b9de0(plVar1,plVar1[1],param_1);
  uVar5 = 0;
  if (iVar4 == 0) {
    uVar5 = 0x1b;
  }
  plVar3 = *(longlong **)(param_2 + 0x4c8);
  if ((plVar1 == plVar3) && (lVar2 != *plVar3)) {
    *(undefined1 *)(param_2 + 0x4c1) = 0;
    FUN_1436a4500(*(undefined8 *)*plVar3,1);
  }
  return uVar5;
}



// FUNCTION 1436bf9f0 FUN_1436bf9f0 body=110 status=ok
// SIG undefined FUN_1436bf9f0(void)

void FUN_1436bf9f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)**(longlong **)(param_2 + 0x4c8);
  if (plVar1 != (longlong *)0x0) {
    while (*plVar1 != param_1) {
      plVar1 = (longlong *)plVar1[2];
      if (plVar1 == (longlong *)0x0) {
        return;
      }
    }
    Curl_llist_move(*(longlong **)(param_2 + 0x4c8),plVar1,*(longlong *)(param_2 + 0x4d0),
                    *(undefined8 *)(*(longlong *)(param_2 + 0x4d0) + 8));
    if (**(longlong **)(param_2 + 0x4c8) != 0) {
      *(undefined1 *)(param_2 + 0x4c1) = 0;
      FUN_1436a4500(*(undefined8 *)**(longlong **)(param_2 + 0x4c8),1);
      return;
    }
  }
  return;
}



// FUNCTION 1436bfa60 FUN_1436bfa60 body=64 status=ok
// SIG undefined FUN_1436bfa60(void)

undefined8 FUN_1436bfa60(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x3d3) == '\0') {
    if ((((*(char *)(param_2 + 0x4c0) != '\0') ||
         (*(longlong **)(param_2 + 0x4d0) == (longlong *)0x0)) ||
        (plVar1 = (longlong *)**(longlong **)(param_2 + 0x4d0), plVar1 == (longlong *)0x0)) ||
       (*plVar1 != param_1)) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0x4c0) = 1;
  }
  return 1;
}



// FUNCTION 1436bfaa0 FUN_1436bfaa0 body=64 status=ok
// SIG undefined FUN_1436bfaa0(void)

undefined8 FUN_1436bfaa0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x3d3) == '\0') {
    if ((((*(char *)(param_2 + 0x4c1) != '\0') ||
         (*(longlong **)(param_2 + 0x4c8) == (longlong *)0x0)) ||
        (plVar1 = (longlong *)**(longlong **)(param_2 + 0x4c8), plVar1 == (longlong *)0x0)) ||
       (*plVar1 != param_1)) {
      return 0;
    }
    *(undefined1 *)(param_2 + 0x4c1) = 1;
  }
  return 1;
}



// FUNCTION 1436bfae0 FUN_1436bfae0 body=8 status=ok
// SIG undefined FUN_1436bfae0(void)

void FUN_1436bfae0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x4c0) = 0;
  return;
}



// FUNCTION 1436bfaf0 FUN_1436bfaf0 body=8 status=ok
// SIG undefined FUN_1436bfaf0(void)

void FUN_1436bfaf0(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  return;
}



// FUNCTION 1436bfb00 FUN_1436bfb00 body=228 status=ok
// SIG undefined FUN_1436bfb00(void)

ulonglong FUN_1436bfb00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  byte bVar6;
  
  if (param_1 != 0) {
    bVar6 = 0;
    lVar2 = Curl_multi_content_length_penalty_size(*(undefined8 *)(param_1 + 0x78));
    lVar3 = Curl_multi_chunk_length_penalty_size(*(undefined8 *)(param_1 + 0x78));
    lVar5 = -2;
    if ((((*(longlong **)(param_2 + 0x4d0) != (longlong *)0x0) &&
         (plVar1 = (longlong *)**(longlong **)(param_2 + 0x4d0), plVar1 != (longlong *)0x0)) &&
        (lVar5 = *(longlong *)(*plVar1 + 0x90), 0 < lVar2)) && (lVar2 < lVar5)) {
      bVar6 = 1;
    }
    if ((0 < lVar3) && (lVar3 < *(longlong *)(param_2 + 0x28))) {
      bVar6 = 1;
    }
    pcVar4 = "FALSE";
    if (bVar6 != 0) {
      pcVar4 = "TRUE";
    }
    FUN_1436b58e0(param_1,"Conn: %ld (%p) Receive pipe weight: (%I64d/%zu), penalized: %s\n",
                  *(undefined4 *)(param_2 + 0x4c),param_2,lVar5,*(undefined8 *)(param_2 + 0x28),
                  pcVar4);
    return (ulonglong)bVar6;
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1436bfbf0 Curl_pipeline_server_blacklisted body=165 status=ok
// SIG undefined Curl_pipeline_server_blacklisted(void)

undefined4 Curl_pipeline_server_blacklisted(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  
  if (((*(longlong *)(param_1 + 0x78) != 0) && (param_2 != 0)) &&
     (puVar3 = (undefined8 *)Curl_multi_pipelining_server_bl(), puVar3 != (undefined8 *)0x0)) {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*plVar1 + lVar4) != '\0');
      iVar2 = Curl_raw_nequal(*plVar1,param_2);
      if (iVar2 != 0) {
        FUN_1436b58e0(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1436bfca0 FUN_1436bfca0 body=216 status=ok
// SIG undefined FUN_1436bfca0(void)

undefined8 FUN_1436bfca0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar2 = *param_2;
  lVar4 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar4 = Curl_llist_alloc(&LAB_1436a5970);
    if (lVar4 == 0) {
      return 3;
    }
    lVar5 = *param_1;
    while (lVar5 != 0) {
      lVar5 = (*(code *)PTR__strdup_1467dcc70)(lVar5);
      if (lVar5 == 0) {
        Curl_llist_destroy(lVar4,0);
        return 3;
      }
      iVar3 = FUN_1436b9de0(lVar4,*(undefined8 *)(lVar4 + 8),lVar5);
      if (iVar3 == 0) {
        Curl_llist_destroy(lVar4,0);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
        return 3;
      }
      plVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      lVar5 = *plVar1;
    }
  }
  if (lVar2 != 0) {
    Curl_llist_destroy(lVar2,0);
  }
  *param_2 = lVar4;
  return 0;
}



// FUNCTION 1436bfd80 Curl_pipeline_set_site_blacklist body=317 status=ok
// SIG undefined Curl_pipeline_set_site_blacklist(void)

undefined8 Curl_pipeline_set_site_blacklist(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  long lVar4;
  int iVar5;
  longlong lVar6;
  char *_Str;
  char *pcVar7;
  char *pcVar8;
  
  lVar2 = *param_2;
  lVar6 = 0;
  if (param_1 != (longlong *)0x0) {
    lVar6 = Curl_llist_alloc(site_blacklist_llist_dtor);
    if (lVar6 == 0) {
      return 3;
    }
    lVar3 = *param_1;
    while (lVar3 != 0) {
      _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(lVar3);
      if (_Str == (char *)0x0) goto LAB_1436bfeac;
      pcVar7 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x10);
      if (pcVar7 == (char *)0x0) {
LAB_1436bfea6:
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
LAB_1436bfeac:
        Curl_llist_destroy(lVar6,0);
        return 3;
      }
      pcVar8 = strchr(_Str,0x3a);
      if (pcVar8 == (char *)0x0) {
        pcVar7[8] = 'P';
        pcVar7[9] = '\0';
      }
      else {
        *pcVar8 = '\0';
        lVar4 = strtol(pcVar8 + 1,(char **)0x0,10);
        *(short *)(pcVar7 + 8) = (short)lVar4;
      }
      *(char **)pcVar7 = _Str;
      iVar5 = FUN_1436b9de0(lVar6,*(undefined8 *)(lVar6 + 8),pcVar7);
      if (iVar5 == 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)pcVar7);
        pcVar7[0] = '\0';
        pcVar7[1] = '\0';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        pcVar7[5] = '\0';
        pcVar7[6] = '\0';
        pcVar7[7] = '\0';
        _Str = pcVar7;
        goto LAB_1436bfea6;
      }
      plVar1 = param_1 + 1;
      param_1 = param_1 + 1;
      lVar3 = *plVar1;
    }
  }
  if (lVar2 != 0) {
    Curl_llist_destroy(lVar2,0);
  }
  *param_2 = lVar6;
  return 0;
}



// FUNCTION 1436bfec0 FUN_1436bfec0 body=163 status=ok
// SIG undefined FUN_1436bfec0(void)

undefined8 FUN_1436bfec0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (puVar3 = (undefined8 *)FUdpMessageTunnel::GetTotalInboundBytes(), puVar3 != (undefined8 *)0x0)
     ) {
    for (plVar1 = (longlong *)*puVar3; plVar1 != (longlong *)0x0; plVar1 = (longlong *)plVar1[2]) {
      puVar3 = (undefined8 *)*plVar1;
      iVar2 = Curl_strcasecompare(*puVar3,*(undefined8 *)(param_2 + 0xb8));
      if ((iVar2 != 0) && ((uint)*(ushort *)(puVar3 + 1) == *(uint *)(param_2 + 0x10c))) {
        FUN_1436b58e0(param_1,"Site %s:%d is pipeline blacklisted\n",*(undefined8 *)(param_2 + 0xb8)
                      ,*(undefined4 *)(param_2 + 0x10c));
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 1436bff70 FUN_1436bff70 body=30 status=ok
// SIG undefined FUN_1436bff70(void)

undefined8 FUN_1436bff70(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(longlong **)(param_2 + 0x4d0) != (longlong *)0x0) &&
     (plVar1 = (longlong *)**(longlong **)(param_2 + 0x4d0), plVar1 != (longlong *)0x0)) {
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),*plVar1 == param_1);
  }
  return 0;
}



// FUNCTION 1436bff90 FUN_1436bff90 body=30 status=ok
// SIG undefined FUN_1436bff90(void)

undefined8 FUN_1436bff90(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(longlong **)(param_2 + 0x4c8) != (longlong *)0x0) &&
     (plVar1 = (longlong *)**(longlong **)(param_2 + 0x4c8), plVar1 != (longlong *)0x0)) {
    return CONCAT71((int7)((ulonglong)plVar1 >> 8),*plVar1 == param_1);
  }
  return 0;
}



// FUNCTION 1436bffb0 site_blacklist_llist_dtor body=40 status=ok
// SIG undefined site_blacklist_llist_dtor(void)

void site_blacklist_llist_dtor(undefined8 param_1,undefined8 *param_2)

{
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*param_2);
  *param_2 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001436bffd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_2);
  return;
}



// FUNCTION 1436bffe0 curl_strequal body=24 status=ok
// SIG undefined curl_strequal(void)

bool curl_strequal(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = _stricmp(param_1,param_2);
  return iVar1 == 0;
}



// FUNCTION 1436c0000 curl_strnequal body=24 status=ok
// SIG undefined curl_strnequal(void)

bool curl_strnequal(char *param_1,char *param_2,size_t param_3)

{
  int iVar1;
  
  iVar1 = _strnicmp(param_1,param_2,param_3);
  return iVar1 == 0;
}



// FUNCTION 1436c0020 Curl_gmtime body=68 status=ok
// SIG undefined Curl_gmtime(void)

undefined8 Curl_gmtime(__time64_t param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  tm *ptVar2;
  __time64_t local_res8 [4];
  
  local_res8[0] = param_1;
  ptVar2 = _gmtime64(local_res8);
  if (ptVar2 != (tm *)0x0) {
    uVar1 = *(undefined8 *)&ptVar2->tm_hour;
    *param_2 = *(undefined8 *)ptVar2;
    param_2[1] = uVar1;
    uVar1 = *(undefined8 *)&ptVar2->tm_wday;
    param_2[2] = *(undefined8 *)&ptVar2->tm_mon;
    param_2[3] = uVar1;
    *(int *)(param_2 + 4) = ptVar2->tm_isdst;
    return 0;
  }
  return 0x2b;
}



// FUNCTION 1436c0070 curl_getdate body=43 status=ok
// SIG undefined curl_getdate(void)

undefined8 curl_getdate(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0xffffffffffffffff;
  uVar1 = parsedate(param_1,local_res18);
  uVar2 = 0xffffffffffffffff;
  if (uVar1 < 3) {
    uVar2 = local_res18[0];
  }
  return uVar2;
}



// FUNCTION 1436c00a0 my_timegm body=296 status=ok
// SIG undefined my_timegm(void)

longlong my_timegm(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1[5] < 0x46) {
    return -1;
  }
  iVar1 = param_1[4];
  iVar3 = param_1[5] + 0x76c;
  if (iVar1 < 0) {
    iVar3 = iVar3 + (0xb - iVar1) / 0xc;
    iVar2 = 0xb - (0xb - iVar1) % 0xc;
  }
  else {
    iVar2 = iVar1;
    if (0xb < iVar1) {
      iVar3 = iVar3 - iVar1 / 0xc;
      iVar2 = iVar1 % 0xc;
    }
  }
  iVar1 = iVar3 - (uint)(iVar1 < 2);
  return (((longlong)param_1[2] +
          ((longlong)
           (((int)((iVar1 >> 0x1f & 3U) + iVar1) >> 2) + -0x1dd + (iVar1 / 400 - iVar1 / 100)) +
           (longlong)*(int *)(&DAT_145b6c060 + (longlong)iVar2 * 4) +
           (longlong)(iVar3 + -0x7b2) * 0x16d + (longlong)param_1[3] + -1) * 0x18) * 0x3c +
         (longlong)param_1[1]) * 0x3c + (longlong)*param_1;
}



// FUNCTION 1436c01d0 parsedate body=1339 status=ok
// SIG undefined parsedate(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 parsedate(byte *param_1,longlong *param_2)

{
  bool bVar1;
  longlong *plVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  DWORD dwErrCode;
  long lVar6;
  DWORD DVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  int iVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined1 auStack_d8 [32];
  int *local_b8;
  int local_a8;
  int local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  uint local_8c;
  uint local_88;
  longlong *local_80;
  byte *local_78;
  byte *local_70;
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  uint uStack_58;
  int iStack_54;
  undefined1 uStack_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar9 = 0xffffffff;
  uVar16 = 0;
  local_94 = -1;
  local_90 = -1;
  local_9c = -1;
  iVar11 = -1;
  iVar14 = -1;
  local_8c = 0xffffffff;
  bVar4 = *param_1;
  iVar15 = 0;
  local_a0 = 0xffffffff;
  local_a8 = -1;
  local_a4 = -1;
  local_98 = 0;
  local_88 = 0;
  uVar17 = uVar16;
  local_80 = param_2;
  local_70 = param_1;
  if (bVar4 != 0) {
    do {
      if (5 < (int)uVar17) break;
      bVar1 = false;
      do {
        iVar5 = isalnum((uint)bVar4);
        if (iVar5 != 0) break;
        bVar4 = param_1[1];
        param_1 = param_1 + 1;
      } while (bVar4 != 0);
      iVar5 = isalpha((uint)*param_1);
      if (iVar5 == 0) {
        iVar5 = isdigit((uint)*param_1);
        if (iVar5 != 0) {
          if (local_9c == -1) {
            local_b8 = &local_9c;
            iVar5 = FUN_143662c40(param_1,"%02d:%02d:%02d",&local_94,&local_90);
            if (iVar5 == 3) {
              param_1 = param_1 + 8;
            }
            else {
              if ((local_9c != -1) ||
                 (iVar5 = FUN_143662c40(param_1,"%02d:%02d",&local_94,&local_90), iVar5 != 2))
              goto LAB_1436c0477;
              param_1 = param_1 + 5;
              local_9c = 0;
            }
          }
          else {
LAB_1436c0477:
            dwErrCode = GetLastError();
            SetLastError(0);
            lVar6 = strtol((char *)param_1,(char **)&local_78,10);
            DVar7 = GetLastError();
            if (DVar7 != dwErrCode) {
              SetLastError(dwErrCode);
            }
            if (DVar7 != 0) {
              return 0xffffffff;
            }
            iVar5 = curlx_sltosi(lVar6);
            if ((((iVar14 == -1) && ((longlong)local_78 - (longlong)param_1 == 4)) &&
                (iVar5 < 0x579)) && ((local_70 < param_1 && ((param_1[-1] - 0x2b & 0xfd) == 0)))) {
              bVar1 = true;
              iVar11 = iVar5 + (iVar5 / 100) * -0x28;
              iVar14 = iVar11 * 0x3c;
              if (param_1[-1] == 0x2b) {
                iVar14 = iVar11 * -0x3c;
              }
            }
            if ((((longlong)local_78 - (longlong)param_1 == 8) && (local_a4 == -1)) &&
               ((local_a0 == 0xffffffff && (local_a8 == -1)))) {
              local_a4 = iVar5 / 10000;
              local_a0 = (iVar5 % 10000) / 100 - 1;
              local_a8 = iVar5 % 100;
              param_1 = local_78;
              uVar9 = local_a0;
              iVar11 = local_a4;
            }
            else {
              param_1 = local_78;
              uVar9 = local_a0;
              iVar11 = local_a4;
              if (!bVar1) {
                if (local_98 == 0) {
                  if (local_a8 != -1) {
                    return 0xffffffff;
                  }
                  bVar1 = iVar5 - 1U < 0x1f;
                  if (bVar1) {
                    local_a8 = iVar5;
                  }
                  local_98 = 1;
                  iVar3 = 1;
                  if (bVar1) goto LAB_1436c03de;
                }
                else {
                  iVar3 = local_98;
                  if (local_98 != 1) {
                    return 0xffffffff;
                  }
                }
                local_98 = iVar3;
                if (local_a4 != -1) {
                  return 0xffffffff;
                }
                local_a4 = iVar5;
                if ((iVar5 < 0x76c) && (local_a4 = iVar5 + 0x76c, iVar5 < 0x47)) {
                  local_a4 = iVar5 + 2000;
                }
                iVar11 = local_a4;
                if (local_a8 == -1) {
                  local_98 = 0;
                }
              }
            }
          }
        }
      }
      else {
        local_68 = 0;
        iStack_64 = 0;
        iStack_60 = 0;
        iStack_5c = 0;
        uStack_58 = 0;
        iStack_54 = 0;
        uStack_50 = 0;
        local_4f = 0;
        local_4b = 0;
        local_49 = 0;
        iVar11 = FUN_143662c40(param_1,"%31[ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz]",
                               &local_68);
        uVar17 = uVar16;
        if (iVar11 != 0) {
          uVar10 = 0xffffffffffffffff;
          do {
            uVar17 = uVar10 + 1;
            lVar8 = uVar10 + 1;
            uVar10 = uVar17;
          } while (*(char *)((longlong)&local_68 + lVar8) != '\0');
        }
        if (local_8c == 0xffffffff) {
          bVar1 = false;
          ppuVar12 = &PTR_s_Monday_145b6c0c8;
          uVar10 = uVar16;
          if (uVar17 < 4) {
            ppuVar12 = &PTR_DAT_145b6c090;
          }
          do {
            uVar9 = (uint)uVar10;
            iVar11 = Curl_strcasecompare(&local_68,*ppuVar12);
            if (iVar11 != 0) {
              bVar1 = true;
              break;
            }
            ppuVar12 = ppuVar12 + 1;
            uVar9 = uVar9 + 1;
            uVar10 = (ulonglong)uVar9;
          } while ((int)uVar9 < 7);
          local_8c = 0xffffffff;
          if (bVar1) {
            local_8c = uVar9;
          }
          uVar9 = local_a0;
          if (local_8c == 0xffffffff) goto LAB_1436c0328;
        }
        else {
LAB_1436c0328:
          if (uVar9 == 0xffffffff) {
            bVar1 = false;
            ppuVar12 = &PTR_DAT_145b6c100;
            uVar10 = uVar16;
            do {
              uVar9 = (uint)uVar10;
              iVar11 = Curl_strcasecompare(&local_68,*ppuVar12);
              if (iVar11 != 0) {
                bVar1 = true;
                break;
              }
              ppuVar12 = ppuVar12 + 1;
              uVar9 = uVar9 + 1;
              uVar10 = (ulonglong)uVar9;
            } while ((int)uVar9 < 0xc);
            local_a0 = 0xffffffff;
            if (bVar1) {
              local_a0 = uVar9;
            }
            if (local_a0 != 0xffffffff) goto LAB_1436c03d4;
          }
          if (iVar14 != -1) {
            return 0xffffffff;
          }
          puVar13 = &DAT_145b6bd30;
          uVar10 = uVar16;
          while (iVar11 = Curl_strcasecompare(&local_68,puVar13), iVar11 == 0) {
            puVar13 = puVar13 + 0xc;
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
            if (0x43 < uVar9) {
              return 0xffffffff;
            }
          }
          iVar14 = *(int *)(puVar13 + 8) * 0x3c;
          if (iVar14 == -1) {
            return 0xffffffff;
          }
        }
LAB_1436c03d4:
        param_1 = param_1 + uVar17;
        uVar9 = local_a0;
        iVar11 = local_a4;
      }
LAB_1436c03de:
      bVar4 = *param_1;
      local_88 = local_88 + 1;
      uVar17 = (ulonglong)local_88;
    } while (bVar4 != 0);
    iStack_60 = local_94;
    iStack_64 = local_90;
    if (local_9c != -1) goto LAB_1436c0641;
  }
  local_9c = 0;
  iStack_60 = iVar15;
  iStack_64 = iVar15;
LAB_1436c0641:
  plVar2 = local_80;
  if (((local_a8 != -1) && (uVar9 != 0xffffffff)) && (iVar11 != -1)) {
    if (iVar11 < 0x7b2) {
      *local_80 = 0;
      return 2;
    }
    if (((local_a8 < 0x20) && ((int)uVar9 < 0xc)) &&
       ((iStack_60 < 0x18 && ((iStack_64 < 0x3c && (local_9c < 0x3d)))))) {
      iStack_54 = iVar11 + -0x76c;
      local_68 = local_9c;
      iStack_5c = local_a8;
      uStack_58 = uVar9;
      lVar8 = my_timegm(&local_68);
      if ((int)lVar8 != -1) {
        if (iVar14 != -1) {
          iVar15 = iVar14;
        }
        if ((0 < iVar15) && (0x7fffffff - iVar15 < lVar8)) {
          *plVar2 = 0x7fffffff;
          return 1;
        }
        lVar8 = lVar8 + iVar15;
      }
      *plVar2 = lVar8;
      return 0;
    }
  }
  return 0xffffffff;
}



// FUNCTION 1436c0710 Curl_strtok_r body=176 status=ok
// SIG undefined Curl_strtok_r(void)

char * Curl_strtok_r(char *param_1,char *param_2,longlong *param_3)

{
  char cVar1;
  char *pcVar2;
  
  if (param_1 == (char *)0x0) {
    param_1 = (char *)*param_3;
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return (char *)0x0;
    }
    pcVar2 = strchr(param_2,(int)cVar1);
    if (pcVar2 == (char *)0x0) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  if (*param_1 == '\0') {
    return (char *)0x0;
  }
  *param_3 = (longlong)(param_1 + 1);
  cVar1 = param_1[1];
  while ((cVar1 != '\0' && (pcVar2 = strchr(param_2,(int)*(char *)*param_3), pcVar2 == (char *)0x0))
        ) {
    *param_3 = *param_3 + 1;
    cVar1 = *(char *)*param_3;
  }
  if (*(char *)*param_3 != '\0') {
    *(char *)*param_3 = '\0';
    *param_3 = *param_3 + 1;
  }
  return param_1;
}



// FUNCTION 1436c07c0 Curl_strcasecompare body=108 status=ok
// SIG undefined Curl_strcasecompare(void)

bool Curl_strcasecompare(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (cVar2 = *param_2, cVar2 != '\0')); param_2 = param_2 + 1) {
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      cVar1 = cVar1 + -0x20;
    }
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if (cVar1 != cVar2) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
  }
  cVar1 = *param_1;
  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    cVar1 = cVar1 + -0x20;
  }
  cVar2 = *param_2;
  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    cVar2 = cVar2 + -0x20;
  }
  return cVar1 == cVar2;
}



// FUNCTION 1436c0830 Curl_raw_nequal body=127 status=ok
// SIG undefined Curl_raw_nequal(void)

bool Curl_raw_nequal(char *param_1,char *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *param_1;
  for (; (cVar1 != '\0' && (cVar2 = *param_2, cVar2 != '\0')); param_2 = param_2 + 1) {
    if (param_3 == 0) {
      return true;
    }
    if ((byte)(cVar1 + 0x9fU) < 0x1a) {
      cVar1 = cVar1 + -0x20;
    }
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if (cVar1 != cVar2) break;
    cVar1 = param_1[1];
    param_1 = param_1 + 1;
    param_3 = param_3 + -1;
  }
  if (param_3 == 0) {
    return true;
  }
  cVar1 = *param_1;
  if ((byte)(cVar1 + 0x9fU) < 0x1a) {
    cVar1 = cVar1 + -0x20;
  }
  cVar2 = *param_2;
  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    cVar2 = cVar2 + -0x20;
  }
  return cVar1 == cVar2;
}



// FUNCTION 1436c08b0 Curl_raw_toupper body=15 status=ok
// SIG undefined Curl_raw_toupper(void)

uint Curl_raw_toupper(uint param_1)

{
  if ((byte)((char)param_1 + 0x9fU) < 0x1a) {
    return param_1 - 0x20;
  }
  return param_1 & 0xff;
}



// FUNCTION 1436c08c0 Curl_strntoupper body=51 status=ok
// SIG undefined Curl_strntoupper(void)

void Curl_strntoupper(longlong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  
  if (param_3 != 0) {
    param_1 = param_1 - (longlong)param_2;
    do {
      cVar1 = *param_2;
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      param_2[param_1] = cVar1;
      cVar1 = *param_2;
      param_2 = param_2 + 1;
    } while ((cVar1 != '\0') && (param_3 = param_3 + -1, param_3 != 0));
  }
  return;
}



// FUNCTION 1436c0900 Curl_memrchr body=31 status=ok
// SIG undefined Curl_memrchr(void)

char * Curl_memrchr(char *param_1,char param_2,longlong param_3)

{
  char *pcVar1;
  
  pcVar1 = param_1 + param_3 + -1;
  while( true ) {
    if (pcVar1 < param_1) {
      return (char *)0x0;
    }
    if (*pcVar1 == param_2) break;
    pcVar1 = pcVar1 + -1;
  }
  return pcVar1;
}



// FUNCTION 1436c0920 Curl_inet_pton body=66 status=ok
// SIG undefined Curl_inet_pton(void)

undefined8 Curl_inet_pton(int param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = inet_pton4(param_2,param_3);
    return uVar1;
  }
  if (param_1 != 0x17) {
    SetLastError(0x273f);
    return 0xffffffff;
  }
  uVar1 = inet_pton6(param_2,param_3);
  return uVar1;
}



// FUNCTION 1436c0970 inet_pton4 body=210 status=ok
// SIG undefined inet_pton4(void)

undefined4 inet_pton4(char *param_1,uint *param_2)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  byte *pbVar7;
  undefined4 local_res8;
  
  cVar1 = *param_1;
  pbVar7 = (byte *)&local_res8;
  bVar3 = false;
  iVar6 = 0;
  local_res8 = local_res8 & 0xffffff00;
  if (cVar1 != '\0') {
    do {
      param_1 = param_1 + 1;
      pcVar5 = strchr("0123456789",(int)cVar1);
      if (pcVar5 == (char *)0x0) {
        if (cVar1 != 0x2e) {
          return 0;
        }
        if (!bVar3) {
          return 0;
        }
        if (iVar6 == 4) {
          return 0;
        }
        pbVar7 = pbVar7 + 1;
        bVar3 = false;
        *pbVar7 = 0;
      }
      else {
        bVar2 = *pbVar7;
        uVar4 = ((uint)bVar2 + (uint)bVar2 * 4) * 2 + -0x45b6c210 + (int)pcVar5;
        if ((bVar3) && (bVar2 == 0)) {
          return 0;
        }
        if (0xff < uVar4) {
          return 0;
        }
        *pbVar7 = (byte)uVar4;
        if (!bVar3) {
          iVar6 = iVar6 + 1;
          if (4 < iVar6) {
            return 0;
          }
          bVar3 = true;
        }
      }
      cVar1 = *param_1;
    } while (cVar1 != '\0');
    if (3 < iVar6) {
      *param_2 = local_res8;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436c0a50 inet_pton6 body=540 status=ok
// SIG undefined inet_pton6(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 inet_pton6(char *param_1,ulonglong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong *puVar9;
  ulonglong uVar10;
  int _Val;
  ulonglong *puVar11;
  char *pcVar12;
  ulonglong *puVar13;
  bool bVar14;
  undefined1 auStack_88 [32];
  char *local_68;
  ulonglong *local_60;
  undefined1 local_58 [8];
  ulonglong uStack_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_88;
  local_58 = (undefined1  [8])0x0;
  uStack_50 = 0;
  puVar11 = (ulonglong *)0x0;
  cVar2 = *param_1;
  if (cVar2 == ':') {
    cVar2 = param_1[1];
    param_1 = param_1 + 1;
    if (cVar2 != ':') {
      return 0;
    }
  }
  uVar10 = 0;
  iVar3 = 0;
  if (cVar2 == '\0') {
LAB_1436c0c38:
    uVar5 = 0;
  }
  else {
    puVar13 = (ulonglong *)(local_58 + 2);
    puVar8 = (ulonglong *)local_58;
    local_68 = param_1;
    local_60 = param_2;
    do {
      _Val = (int)cVar2;
      param_1 = param_1 + 1;
      pcVar12 = "0123456789abcdef";
      pcVar4 = strchr("0123456789abcdef",_Val);
      puVar9 = puVar8;
      if (pcVar4 == (char *)0x0) {
        pcVar12 = "0123456789ABCDEF";
        pcVar4 = strchr("0123456789ABCDEF",_Val);
        if (pcVar4 != (char *)0x0) goto LAB_1436c0b5d;
        if (_Val != 0x3a) {
          if (((_Val != 0x2e) || (puVar9 = (ulonglong *)((longlong)puVar8 + 4), local_48 < puVar9))
             || (iVar3 = inet_pton4(local_68,puVar8), iVar3 < 1)) goto LAB_1436c0c38;
          goto LAB_1436c0bad;
        }
        local_68 = param_1;
        if (iVar3 == 0) {
          bVar14 = puVar11 != (ulonglong *)0x0;
          puVar11 = puVar8;
          if (bVar14) goto LAB_1436c0c38;
        }
        else {
          if (local_48 < puVar13) goto LAB_1436c0c38;
          puVar13 = (ulonglong *)((longlong)puVar13 + 2);
          iVar3 = 0;
          *(char *)puVar8 = (char)(uVar10 >> 8);
          *(char *)((longlong)puVar8 + 1) = (char)uVar10;
          uVar10 = 0;
          puVar9 = (ulonglong *)((longlong)puVar8 + 2);
        }
      }
      else {
LAB_1436c0b5d:
        uVar10 = (longlong)pcVar4 - (longlong)pcVar12 | uVar10 << 4;
        iVar3 = iVar3 + 1;
        if (4 < iVar3) goto LAB_1436c0c38;
      }
      cVar2 = *param_1;
      puVar8 = puVar9;
    } while (cVar2 != '\0');
    if (iVar3 != 0) {
      if (local_48 < (ulonglong *)((longlong)puVar9 + 2U)) goto LAB_1436c0c38;
      *(char *)puVar9 = (char)(uVar10 >> 8);
      *(char *)((longlong)puVar9 + 1) = (char)uVar10;
      puVar9 = (ulonglong *)((longlong)puVar9 + 2);
    }
LAB_1436c0bad:
    if (puVar11 == (ulonglong *)0x0) {
      if (puVar9 != local_48) goto LAB_1436c0c38;
    }
    else {
      lVar7 = (longlong)puVar9 - (longlong)puVar11;
      if (puVar9 == local_48) goto LAB_1436c0c38;
      if (0 < lVar7) {
        puVar6 = (undefined1 *)((longlong)puVar11 + lVar7 + -1);
        lVar1 = -(longlong)puVar11 - lVar7;
        do {
          puVar6[(longlong)local_48 + lVar1] = *puVar6;
          *puVar6 = 0;
          puVar6 = puVar6 + -1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
    }
    *local_60 = (ulonglong)local_58;
    local_60[1] = uStack_50;
    uVar5 = 1;
  }
  return uVar5;
}



// FUNCTION 1436c0c70 Curl_load_library body=413 status=ok
// SIG undefined Curl_load_library(void)

HMODULE Curl_load_library(char *param_1)

{
  char cVar1;
  longlong lVar2;
  UINT UVar3;
  HMODULE pHVar4;
  FARPROC pFVar5;
  char *pcVar6;
  FARPROC pFVar7;
  LPSTR lpBuffer;
  HMODULE pHVar8;
  longlong lVar9;
  longlong lVar10;
  
  pHVar8 = (HMODULE)0x0;
  pHVar4 = GetModuleHandleA("kernel32");
  if (pHVar4 == (HMODULE)0x0) {
    return (HMODULE)0x0;
  }
  pFVar5 = GetProcAddress(pHVar4,"LoadLibraryExA");
  pcVar6 = strpbrk(param_1,"\\/");
  if (pcVar6 == (char *)0x0) {
    if ((pFVar5 != (FARPROC)0x0) &&
       (pFVar7 = GetProcAddress(pHVar4,"AddDllDirectory"), pFVar7 != (FARPROC)0x0)) {
      pHVar4 = (HMODULE)(*pFVar5)(param_1,0,0x800);
      return pHVar4;
    }
    UVar3 = GetSystemDirectoryA((LPSTR)0x0,0);
    if (UVar3 != 0) {
      lVar10 = -1;
      lVar9 = -1;
      do {
        lVar9 = lVar9 + 1;
      } while (param_1[lVar9] != '\0');
      lpBuffer = (LPSTR)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                  ((ulonglong)(UVar3 + 1) + lVar9);
      if ((lpBuffer != (LPSTR)0x0) && (UVar3 = GetSystemDirectoryA(lpBuffer,UVar3), UVar3 != 0)) {
        lVar9 = -1;
        do {
          lVar2 = lVar9 + 1;
          lVar9 = lVar9 + 1;
        } while (lpBuffer[lVar2] != '\0');
        (lpBuffer + lVar9)[0] = '\\';
        (lpBuffer + lVar9)[1] = '\0';
        do {
          lVar9 = lVar10 + 1;
          lVar10 = lVar10 + 1;
        } while (lpBuffer[lVar9] != '\0');
        lVar10 = lVar10 - (longlong)param_1;
        do {
          cVar1 = *param_1;
          param_1[(longlong)(lpBuffer + lVar10)] = cVar1;
          param_1 = param_1 + 1;
        } while (cVar1 != '\0');
        if (pFVar5 == (FARPROC)0x0) {
          pHVar8 = LoadLibraryA(lpBuffer);
        }
        else {
          pHVar8 = (HMODULE)(*pFVar5)(lpBuffer,0,8);
        }
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lpBuffer);
    }
    return pHVar8;
  }
  if (pFVar5 == (FARPROC)0x0) {
    pHVar4 = LoadLibraryA(param_1);
    return pHVar4;
  }
  pHVar4 = (HMODULE)(*pFVar5)(param_1,0,8);
  return pHVar4;
}



// FUNCTION 1436c0e10 Curl_verify_windows_version body=340 status=ok
// SIG undefined Curl_verify_windows_version(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong Curl_verify_windows_version(DWORD param_1,DWORD param_2,int param_3,int param_4)

{
  BOOL BVar1;
  undefined8 uVar2;
  DWORDLONG dwlConditionMask;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 auStack_f8 [32];
  _OSVERSIONINFOEXA local_d8;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_4 == 0) {
    uVar3 = 4;
    uVar4 = 5;
  }
  else if (param_4 == 1) {
    uVar3 = 5;
    uVar4 = 5;
  }
  else if (param_4 == 2) {
    uVar3 = 1;
    uVar4 = 3;
  }
  else if (param_4 == 3) {
    uVar3 = 3;
    uVar4 = 3;
  }
  else {
    if (param_4 != 4) {
      return local_38 & 0xffffffffffffff00;
    }
    uVar3 = 2;
    uVar4 = 3;
  }
  _guard_xfg_dispatch_icall_nop(&local_d8,0,0x9c);
  local_d8.dwOSVersionInfoSize = 0x9c;
  if (param_3 == 1) {
    local_d8.dwPlatformId = 1;
  }
  else if (param_3 == 2) {
    local_d8.dwPlatformId = 2;
  }
  local_d8.dwMajorVersion = param_1;
  local_d8.dwMinorVersion = param_2;
  uVar2 = VerSetConditionMask(0,2,uVar3);
  uVar2 = VerSetConditionMask(uVar2,1,uVar3);
  uVar2 = VerSetConditionMask(uVar2,0x20,uVar4);
  dwlConditionMask = VerSetConditionMask(uVar2,0x10,uVar4);
  if (param_3 != 0) {
    dwlConditionMask = VerSetConditionMask(dwlConditionMask,8,1);
  }
  BVar1 = VerifyVersionInfoA(&local_d8,0x33,dwlConditionMask);
  return (ulonglong)(BVar1 != 0);
}



// FUNCTION 1436c0f70 Curl_freeaddrinfo body=70 status=ok
// SIG undefined Curl_freeaddrinfo(void)

void Curl_freeaddrinfo(longlong param_1)

{
  longlong lVar1;
  
  while (param_1 != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x20));
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x18));
    lVar1 = *(longlong *)(param_1 + 0x28);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    param_1 = lVar1;
  }
  return;
}



// FUNCTION 1436c0fc0 Curl_getaddrinfo_ex body=466 status=ok
// SIG undefined Curl_getaddrinfo_ex(void)

ulonglong Curl_getaddrinfo_ex(void)

{
  uint uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  void *_Dst;
  longlong lVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *in_R9;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined4 *local_res20;
  
  puVar7 = (undefined4 *)0x0;
  *in_R9 = 0;
  uVar3 = getaddrinfo();
  uVar9 = uVar3 & 0xffffffff;
  if ((int)uVar3 != 0) {
    return uVar3;
  }
  puVar6 = puVar7;
  puVar8 = local_res20;
  puVar10 = puVar7;
  if (local_res20 != (undefined4 *)0x0) {
    do {
      puVar4 = puVar10;
      if (puVar8[1] == 2) {
        uVar1 = 0x10;
LAB_1436c1029:
        uVar3 = (ulonglong)uVar1;
        if (((*(longlong *)(puVar8 + 8) != 0) && (*(ulonglong *)(puVar8 + 4) != 0)) &&
           (uVar3 <= *(ulonglong *)(puVar8 + 4))) {
          puVar4 = (undefined4 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x30);
          if (puVar4 == (undefined4 *)0x0) {
            uVar9 = 8;
            break;
          }
          *puVar4 = *puVar8;
          puVar4[1] = puVar8[1];
          puVar4[2] = puVar8[2];
          puVar4[3] = puVar8[3];
          puVar4[4] = uVar1;
          *(undefined8 *)(puVar4 + 8) = 0;
          *(undefined8 *)(puVar4 + 6) = 0;
          *(undefined8 *)(puVar4 + 10) = 0;
          _Dst = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(uVar3);
          *(void **)(puVar4 + 8) = _Dst;
          if (_Dst == (void *)0x0) {
            uVar9 = 8;
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar4);
            break;
          }
          _guard_xfg_dispatch_icall_nop(_Dst,*(void **)(puVar8 + 8),uVar3);
          if (*(longlong *)(puVar8 + 6) != 0) {
            lVar5 = (*(code *)PTR__strdup_1467dcc70)();
            *(longlong *)(puVar4 + 6) = lVar5;
            if (lVar5 == 0) {
              uVar9 = 8;
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar4 + 8));
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar4);
              break;
            }
          }
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = puVar4;
          }
          if (puVar10 != (undefined4 *)0x0) {
            *(undefined4 **)(puVar10 + 10) = puVar4;
          }
        }
      }
      else if (puVar8[1] == 0x17) {
        uVar1 = 0x1c;
        goto LAB_1436c1029;
      }
      puVar2 = (undefined8 *)(puVar8 + 10);
      puVar8 = (undefined4 *)*puVar2;
      puVar10 = puVar4;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
    if (local_res20 != (undefined4 *)0x0) {
      freeaddrinfo();
    }
    if ((int)uVar9 != 0) {
      while (puVar6 != (undefined4 *)0x0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar6 + 8));
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar6 + 6));
        puVar8 = *(undefined4 **)(puVar6 + 10);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar6);
        puVar6 = puVar8;
      }
      goto LAB_1436c1173;
    }
    puVar7 = puVar6;
    if (puVar6 != (undefined4 *)0x0) goto LAB_1436c1173;
  }
  uVar9 = 0x2af9;
  Ordinal_112(0x2af9);
LAB_1436c1173:
  *in_R9 = puVar7;
  return uVar9;
}



// FUNCTION 1436c11a0 Curl_he2ai body=413 status=ok
// SIG undefined Curl_he2ai(void)

longlong Curl_he2ai(undefined8 *param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined2 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  
  lVar7 = 0;
  if (param_1 == (undefined8 *)0x0) {
    return 0;
  }
  puVar12 = *(undefined4 **)param_1[3];
  if (puVar12 != (undefined4 *)0x0) {
    lVar11 = 0;
    lVar8 = 0;
    while( true ) {
      uVar9 = 0x10;
      if (*(short *)(param_1 + 2) == 0x17) {
        uVar9 = 0x1c;
      }
      lVar5 = (*(code *)PTR_calloc_1467dcc78)(1);
      if (lVar5 == 0) goto joined_r0x0001436c12e5;
      lVar6 = (*(code *)PTR__strdup_1467dcc70)(*param_1);
      *(longlong *)(lVar5 + 0x18) = lVar6;
      if (lVar6 == 0) break;
      lVar6 = (*(code *)PTR_calloc_1467dcc78)(1,uVar9);
      *(longlong *)(lVar5 + 0x20) = lVar6;
      if (lVar6 == 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar5 + 0x18));
        break;
      }
      if (lVar7 == 0) {
        lVar7 = lVar5;
      }
      if (lVar8 != 0) {
        *(longlong *)(lVar8 + 0x28) = lVar5;
      }
      iVar4 = (int)*(short *)(param_1 + 2);
      *(int *)(lVar5 + 4) = iVar4;
      *(undefined4 *)(lVar5 + 8) = 1;
      *(undefined4 *)(lVar5 + 0x10) = uVar9;
      if (iVar4 == 2) {
        puVar10 = *(undefined2 **)(lVar5 + 0x20);
        *(undefined4 *)(puVar10 + 2) = *puVar12;
LAB_1436c129a:
        *puVar10 = *(undefined2 *)(param_1 + 2);
        uVar3 = Ordinal_9(param_2);
        puVar10[1] = uVar3;
      }
      else if (iVar4 == 0x17) {
        puVar10 = *(undefined2 **)(lVar5 + 0x20);
        uVar9 = puVar12[1];
        uVar1 = puVar12[2];
        uVar2 = puVar12[3];
        *(undefined4 *)(puVar10 + 4) = *puVar12;
        *(undefined4 *)(puVar10 + 6) = uVar9;
        *(undefined4 *)(puVar10 + 8) = uVar1;
        *(undefined4 *)(puVar10 + 10) = uVar2;
        goto LAB_1436c129a;
      }
      lVar11 = lVar11 + 8;
      puVar12 = *(undefined4 **)(lVar11 + param_1[3]);
      lVar8 = lVar5;
      if (puVar12 == (undefined4 *)0x0) {
        return lVar7;
      }
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
joined_r0x0001436c12e5:
    while (lVar7 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar7 + 0x20));
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(lVar7 + 0x18));
      lVar8 = *(longlong *)(lVar7 + 0x28);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar7);
      lVar7 = lVar8;
    }
  }
  return 0;
}



// FUNCTION 1436c1340 Curl_ip2addr body=235 status=ok
// SIG undefined Curl_ip2addr(void)

undefined8 Curl_ip2addr(int param_1,undefined4 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  
  plVar4 = (longlong *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x40);
  if (plVar4 != (longlong *)0x0) {
    lVar5 = (*(code *)PTR__strdup_1467dcc70)(param_3);
    if (lVar5 != 0) {
      if (param_1 == 2) {
        *(undefined4 *)(plVar4 + 4) = *param_2;
        uVar7 = 4;
LAB_1436c13c9:
        *(undefined2 *)((longlong)plVar4 + 0x12) = uVar7;
        plVar4[3] = (longlong)(plVar4 + 6);
        plVar4[1] = 0;
        *plVar4 = lVar5;
        *(short *)(plVar4 + 2) = (short)param_1;
        plVar4[6] = (longlong)(plVar4 + 4);
        *(undefined8 *)(plVar4[3] + 8) = 0;
        uVar6 = Curl_he2ai(plVar4,param_4);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar4);
        return uVar6;
      }
      if (param_1 == 0x17) {
        uVar1 = param_2[1];
        uVar2 = param_2[2];
        uVar3 = param_2[3];
        uVar7 = 0x10;
        *(undefined4 *)(plVar4 + 4) = *param_2;
        *(undefined4 *)((longlong)plVar4 + 0x24) = uVar1;
        *(undefined4 *)(plVar4 + 5) = uVar2;
        *(undefined4 *)((longlong)plVar4 + 0x2c) = uVar3;
        goto LAB_1436c13c9;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar4);
  }
  return 0;
}



// FUNCTION 1436c1430 Curl_str2addr body=323 status=ok
// SIG undefined Curl_str2addr(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 Curl_str2addr(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 auStack_58 [32];
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  iVar1 = Curl_inet_pton(2,param_1,local_38);
  if (iVar1 < 1) {
    iVar1 = Curl_inet_pton(0x17,param_1,&local_30);
    if (iVar1 < 1) {
      return 0;
    }
    plVar2 = (longlong *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x40);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = (*(code *)PTR__strdup_1467dcc70)(param_1);
    if (lVar3 != 0) {
      plVar5 = plVar2 + 4;
      *(undefined4 *)plVar5 = local_30;
      *(undefined4 *)((longlong)plVar2 + 0x24) = uStack_2c;
      *(undefined4 *)(plVar2 + 5) = uStack_28;
      *(undefined4 *)((longlong)plVar2 + 0x2c) = uStack_24;
      *(undefined4 *)(plVar2 + 2) = 0x100017;
      goto LAB_1436c14b7;
    }
  }
  else {
    plVar2 = (longlong *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x40);
    if (plVar2 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = (*(code *)PTR__strdup_1467dcc70)(param_1);
    if (lVar3 != 0) {
      plVar5 = plVar2 + 4;
      *(undefined4 *)plVar5 = local_38[0];
      *(undefined4 *)(plVar2 + 2) = 0x40002;
LAB_1436c14b7:
      plVar2[1] = 0;
      *plVar2 = lVar3;
      plVar2[3] = (longlong)(plVar2 + 6);
      plVar2[6] = (longlong)plVar5;
      *(undefined8 *)(plVar2[3] + 8) = 0;
      uVar4 = Curl_he2ai(plVar2,param_2);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar2);
      return uVar4;
    }
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(plVar2);
  return 0;
}



// FUNCTION 1436c1580 Curl_thread_create body=54 status=ok
// SIG undefined Curl_thread_create(void)

uintptr_t Curl_thread_create(_StartAddress *param_1,void *param_2)

{
  uintptr_t uVar1;
  uintptr_t uVar2;
  
  uVar1 = _beginthreadex((void *)0x0,0,param_1,param_2,0,(uint *)0x0);
  uVar2 = 0;
  if (uVar1 - 1 < 0xfffffffffffffffe) {
    uVar2 = uVar1;
  }
  return uVar2;
}



// FUNCTION 1436c15c0 Curl_thread_destroy body=7 status=ok
// SIG BOOL Curl_thread_destroy(HANDLE hObject)

BOOL __stdcall Curl_thread_destroy(HANDLE hObject)

{
  BOOL BVar1;
  
                    /* WARNING: Could not recover jumptable at 0x0001436c15c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  BVar1 = CloseHandle(hObject);
  return BVar1;
}



// FUNCTION 1436c15d0 Curl_thread_join body=64 status=ok
// SIG undefined Curl_thread_join(void)

bool Curl_thread_join(undefined8 *param_1)

{
  DWORD DVar1;
  
  DVar1 = WaitForSingleObjectEx((HANDLE)*param_1,0xffffffff,0);
  CloseHandle((HANDLE)*param_1);
  *param_1 = 0;
  return DVar1 == 0;
}



// FUNCTION 1436c1610 FUN_1436c1610 body=74 status=ok
// SIG undefined FUN_1436c1610(void)

undefined8 FUN_1436c1610(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  if (param_1 == 2) {
    uVar1 = inet_ntop4(param_2,param_3,param_4);
    return uVar1;
  }
  if (param_1 != 0x17) {
    SetLastError(0x273f);
    return 0;
  }
  uVar1 = FUN_1436c1730(param_2,param_3,param_4);
  return uVar1;
}



// FUNCTION 1436c1660 inet_ntop4 body=204 status=ok
// SIG undefined inet_ntop4(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong inet_ntop4(undefined1 *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  char *pcVar5;
  undefined1 auStack_68 [32];
  uint local_48;
  uint local_40;
  uint local_38;
  char local_28 [16];
  ulonglong local_18;
  ulonglong uVar4;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_38 = (uint)(byte)param_1[3];
  local_40 = (uint)(byte)param_1[2];
  local_28[0] = '\0';
  local_48 = (uint)(byte)param_1[1];
  curl_msnprintf(local_28,0x10,"%d.%d.%d.%d",*param_1);
  uVar4 = 0xffffffffffffffff;
  do {
    uVar3 = uVar4 + 1;
    lVar2 = uVar4 + 1;
    uVar4 = uVar3;
  } while (local_28[lVar2] != '\0');
  if ((uVar3 == 0) || (param_3 <= uVar3)) {
    SetLastError(0x1c);
    param_2 = 0;
  }
  else {
    pcVar5 = local_28;
    do {
      cVar1 = *pcVar5;
      pcVar5[param_2 - (longlong)local_28] = cVar1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
  }
  return param_2;
}



// FUNCTION 1436c1730 FUN_1436c1730 body=595 status=ok
// SIG undefined FUN_1436c1730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1436c1730(byte *param_1,longlong param_2,char *param_3)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  ulonglong uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  int iVar14;
  longlong lVar15;
  uint uVar16;
  undefined1 auStack_d8 [32];
  int local_b8;
  uint uStack_b4;
  undefined8 local_b0;
  byte *local_a8;
  char *local_a0;
  longlong local_98;
  uint local_90 [8];
  char local_70 [46];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  uVar9 = 0;
  uVar16 = 0;
  local_90[0] = 0;
  local_90[1] = 0;
  local_90[2] = 0;
  local_90[3] = 0;
  local_90[4] = 0;
  local_90[5] = 0;
  local_90[6] = 0;
  local_90[7] = 0;
  uVar7 = uVar9;
  pbVar13 = param_1;
  do {
    bVar1 = *pbVar13;
    uVar11 = (uint)uVar7;
    pbVar13 = pbVar13 + 1;
    uVar5 = uVar7 >> 1;
    uVar12 = uVar11 + 1;
    uVar7 = (ulonglong)uVar12;
    local_90[uVar5] = local_90[uVar5] | (uint)bVar1 << (8U - (char)((uVar11 & 1) << 3) & 0x1f);
    uVar11 = local_90[5];
  } while ((int)uVar12 < 0x10);
  lVar15 = -1;
  puVar10 = local_90;
  iVar14 = -1;
  iVar3 = -1;
  local_b8 = -1;
  uStack_b4 = 0;
  uVar7 = uVar9;
  uVar5 = uVar9;
  do {
    iVar4 = (int)uVar5;
    if (*puVar10 == 0) {
      if (iVar3 == -1) {
        uVar7 = 1;
        uStack_b4 = 1;
        iVar3 = iVar4;
        local_b8 = iVar4;
      }
      else {
        uStack_b4 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uStack_b4;
      }
    }
    else if (iVar3 != -1) {
      if ((iVar14 == -1) || ((int)uVar16 < (int)uVar7)) {
        local_b0 = CONCAT44(uStack_b4,local_b8);
        iVar14 = local_b8;
        uVar16 = uStack_b4;
      }
      iVar3 = -1;
      local_b8 = -1;
    }
    uVar5 = (ulonglong)(iVar4 + 1U);
    puVar10 = puVar10 + 1;
  } while ((int)(iVar4 + 1U) < 8);
  if ((iVar3 != -1) && ((iVar14 == -1 || ((int)uVar16 < (int)uVar7)))) {
    local_b0 = CONCAT44(uStack_b4,local_b8);
    iVar14 = local_b8;
    uVar16 = uStack_b4;
  }
  if ((iVar14 != -1) && ((int)uVar16 < 2)) {
    iVar14 = -1;
  }
  pcVar8 = local_70;
  uVar7 = uVar9;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_2;
LAB_1436c1858:
  iVar3 = (int)uVar7;
  if (((iVar14 != -1) && (iVar14 <= iVar3)) && (iVar3 < (int)(uVar16 + iVar14))) {
    if (iVar3 == iVar14) {
      *pcVar8 = ':';
      pcVar8 = pcVar8 + 1;
    }
LAB_1436c18c8:
    uVar7 = (ulonglong)(iVar3 + 1);
    uVar9 = uVar9 + 1;
    if (7 < (longlong)uVar9) goto code_r0x0001436c18d4;
    goto LAB_1436c1858;
  }
  if (uVar9 != 0) {
    *pcVar8 = ':';
    pcVar8 = pcVar8 + 1;
  }
  if (((uVar9 != 6) || (iVar14 != 0)) || ((uVar16 != 6 && ((uVar16 != 5 || (uVar11 != 0xffff)))))) {
    iVar4 = curl_msnprintf(pcVar8,5,&DAT_145b6c294,local_90[uVar9]);
    pcVar8 = pcVar8 + iVar4;
    goto LAB_1436c18c8;
  }
  lVar6 = inet_ntop4(local_a8 + 0xc,pcVar8,local_42 + -(longlong)pcVar8);
  if (lVar6 == 0) goto LAB_1436c1962;
  do {
    lVar15 = lVar15 + 1;
  } while (pcVar8[lVar15] != '\0');
  pcVar8 = pcVar8 + lVar15;
LAB_1436c18d9:
  if (uVar16 + iVar14 == 8) {
    *pcVar8 = ':';
    pcVar8 = pcVar8 + 1;
  }
LAB_1436c18e8:
  *pcVar8 = '\0';
  if (local_a0 < pcVar8 + (1 - (longlong)local_70)) {
LAB_1436c1962:
    SetLastError(0x1c);
    local_98 = 0;
  }
  else {
    pcVar8 = local_70;
    do {
      cVar2 = *pcVar8;
      pcVar8[local_98 - (longlong)local_70] = cVar2;
      pcVar8 = pcVar8 + 1;
    } while (cVar2 != '\0');
  }
  return local_98;
code_r0x0001436c18d4:
  if (iVar14 == -1) goto LAB_1436c18e8;
  goto LAB_1436c18d9;
}



// FUNCTION 1436c1990 Curl_schannel_cleanup body=5 status=ok
// SIG undefined Curl_schannel_cleanup(void)

void Curl_schannel_cleanup(void)

{
  if (DAT_146b7b8d8 != (HMODULE)0x0) {
    FreeLibrary(DAT_146b7b8d8);
    DAT_146b7b8d8 = (HMODULE)0x0;
    DAT_146b7b8e0 = 0;
  }
  return;
}



// FUNCTION 1436c19a0 FUN_1436c19a0 body=22 status=ok
// SIG undefined FUN_1436c19a0(void)

longlong FUN_1436c19a0(longlong param_1,int param_2)

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



// FUNCTION 1436c19c0 Curl_ossl_connect body=22 status=ok
// SIG undefined Curl_ossl_connect(void)

void Curl_ossl_connect(undefined8 param_1,undefined8 param_2)

{
  undefined1 local_res18 [16];
  
  FUN_1436c1d80(param_1,param_2,0,local_res18);
  return;
}



// FUNCTION 1436c19e0 Curl_ossl_connect_nonblocking body=11 status=ok
// SIG undefined Curl_ossl_connect_nonblocking(void)

void Curl_ossl_connect_nonblocking(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1436c1d80(param_1,param_2,1,param_3);
  return;
}



// FUNCTION 1436c19f0 FUN_1436c19f0 body=45 status=ok
// SIG undefined FUN_1436c19f0(void)

ulonglong FUN_1436c19f0(longlong param_1,int param_2)

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



// FUNCTION 1436c1a20 FUN_1436c1a20 body=23 status=ok
// SIG undefined FUN_1436c1a20(void)

bool FUN_1436c1a20(void)

{
  int iVar1;
  
  iVar1 = FUN_1436ab940();
  return iVar1 == 0;
}



// FUNCTION 1436c1a40 FUN_1436c1a40 body=127 status=ok
// SIG undefined FUN_1436c1a40(void)

undefined8 FUN_1436c1a40(BYTE *param_1,DWORD param_2)

{
  BOOL BVar1;
  HCRYPTPROV local_res18 [2];
  
  local_res18[0] = 0;
  BVar1 = CryptAcquireContextA(local_res18,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000040);
  if (BVar1 != 0) {
    BVar1 = CryptGenRandom(local_res18[0],param_2,param_1);
    if (BVar1 != 0) {
      CryptReleaseContext(local_res18[0],0);
      return 0;
    }
    CryptReleaseContext(local_res18[0],0);
  }
  return 1;
}



// FUNCTION 1436c1ac0 FUN_1436c1ac0 body=46 status=ok
// SIG undefined FUN_1436c1ac0(void)

void FUN_1436c1ac0(longlong param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(DAT_146b7b8e0 + 0x20))();
                    /* WARNING: Could not recover jumptable at 0x0001436c1ae1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
    return;
  }
  return;
}



// FUNCTION 1436c1af0 FUN_1436c1af0 body=609 status=ok
// SIG undefined FUN_1436c1af0(void)

undefined4 FUN_1436c1af0(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined8 uVar6;
  ulonglong local_res8;
  undefined4 local_res10 [2];
  undefined8 in_stack_ffffffffffffff58;
  uint uVar7;
  ulonglong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong *local_30;
  
  uVar7 = (uint)((ulonglong)in_stack_ffffffffffffff58 >> 0x20);
  uVar3 = *param_1;
  lVar1 = (longlong)param_2 + 5;
  FUN_1436b58e0(uVar3,"schannel: shutting down SSL/TLS connection with %s port %hu\n",param_1[0x17],
                *(undefined4 *)((longlong)param_1 + 0x10c));
  if ((param_1[lVar1 * 0xf + 2] != 0) && (param_1[lVar1 * 0xf + 3] != 0)) {
    local_50 = local_res10;
    local_res10[0] = 1;
    local_40 = &local_58;
    local_58 = 4;
    local_54 = 2;
    local_48 = 0;
    local_44 = 1;
    iVar5 = (**(code **)(DAT_146b7b8e0 + 0x50))(param_1[lVar1 * 0xf + 3],&local_48);
    if (iVar5 != 0) {
      uVar6 = FUN_1436a7420(param_1,iVar5);
      FUN_1436b5820(uVar3,"schannel: ApplyControlToken failure: %s",uVar6);
    }
    if (param_1[0x17] == 0) {
      return 0x1b;
    }
    lVar4 = param_1[lVar1 * 0xf + 3];
    local_30 = &local_68;
    local_68 = 0;
    local_60 = 0;
    local_38 = 0;
    local_34 = 1;
    iVar5 = (**(code **)(DAT_146b7b8e0 + 0x30))
                      (param_1[lVar1 * 0xf + 2],lVar4,param_1[0x17],
                       *(undefined4 *)(param_1 + lVar1 * 0xf + 0xd),(ulonglong)uVar7 << 0x20,0,0,0,
                       lVar4,&local_38,(longlong)param_1 + lVar1 * 0x78 + 0x6c,lVar4 + 0x10);
    if ((iVar5 == 0) || (iVar5 == 0x90317)) {
      iVar5 = FUN_1436b5e50(param_1,param_1[(longlong)param_2 + 0x3a],local_60,local_68 & 0xffffffff
                            ,&local_res8);
      (**(code **)(DAT_146b7b8e0 + 0x80))(local_60);
      if ((iVar5 != 0) || ((local_68 & 0xffffffff) != local_res8)) {
        uVar6 = FUN_1436a7d00(iVar5);
        FUN_1436b58e0(uVar3,"schannel: failed to send close msg: %s (bytes written: %zd)\n",uVar6,
                      local_res8);
      }
    }
  }
  if (param_1[lVar1 * 0xf + 3] != 0) {
    FUN_1436b58e0(uVar3,"schannel: clear security context handle\n");
    (**(code **)(DAT_146b7b8e0 + 0x48))(param_1[lVar1 * 0xf + 3]);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[lVar1 * 0xf + 3]);
    param_1[lVar1 * 0xf + 3] = 0;
  }
  if (param_1[lVar1 * 0xf + 2] != 0) {
    FUN_1436ad9c0(param_1);
    lVar4 = param_1[lVar1 * 0xf + 2];
    piVar2 = (int *)(lVar4 + 0x18);
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      (**(code **)(DAT_146b7b8e0 + 0x20))(lVar4);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    }
    FUN_1436ad9f0(param_1);
    param_1[lVar1 * 0xf + 2] = 0;
  }
  if (param_1[lVar1 * 0xf + 0xb] != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
    param_1[lVar1 * 0xf + 0xb] = 0;
    param_1[lVar1 * 0xf + 7] = 0;
    param_1[lVar1 * 0xf + 9] = 0;
  }
  if (param_1[lVar1 * 0xf + 0xc] != 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
    param_1[lVar1 * 0xf + 0xc] = 0;
    param_1[lVar1 * 0xf + 8] = 0;
    param_1[lVar1 * 0xf + 10] = 0;
  }
  return 0;
}



// FUNCTION 1436c1d60 Curl_schannel_version body=23 status=ok
// SIG undefined Curl_schannel_version(void)

longlong Curl_schannel_version(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = curl_msnprintf(param_1,param_2,"WinSSL");
  return (longlong)iVar1;
}



// FUNCTION 1436c1d80 FUN_1436c1d80 body=448 status=ok
// SIG undefined FUN_1436c1d80(void)

undefined8 FUN_1436c1d80(undefined8 *param_1,int param_2,char param_3,undefined1 *param_4)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  
  uVar7 = *param_1;
  lVar9 = (longlong)param_2;
  uVar3 = param_1[lVar9 + 0x3a];
  lVar1 = lVar9 + 5;
  if (*(int *)((longlong)param_1 + lVar1 * 0x78 + 4) == 2) {
    *param_4 = 1;
    uVar6 = 0;
  }
  else {
    if (*(int *)(param_1 + lVar1 * 0xf + 1) != 0) {
LAB_1436c1e20:
      do {
        if (2 < *(int *)(param_1 + lVar1 * 0xf + 1) - 1U) {
          if ((*(int *)(param_1 + lVar1 * 0xf + 1) == 4) &&
             (uVar7 = FUN_1436c2970(param_1,param_2), (int)uVar7 != 0)) {
            return uVar7;
          }
          if (*(int *)(param_1 + lVar1 * 0xf + 1) == 5) {
            *(undefined4 *)((longlong)param_1 + lVar1 * 0x78 + 4) = 2;
            param_1[lVar9 + 0x3f] = FUN_1436c2c70;
            param_1[lVar9 + 0x41] = FUN_1436c3360;
            *param_4 = 1;
          }
          else {
            *param_4 = 0;
          }
          *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 0;
          return 0;
        }
        iVar4 = FUN_1436b6c20(uVar7,0,1);
        if (iVar4 < 0) goto LAB_1436c1de7;
        iVar2 = *(int *)(param_1 + lVar1 * 0xf + 1);
        if (iVar2 - 2U < 2) {
          uVar6 = 0xffffffffffffffff;
          if (iVar2 == 3) {
            uVar6 = uVar3;
          }
          uVar8 = 0xffffffffffffffff;
          if (iVar2 == 2) {
            uVar8 = uVar3;
          }
          if (param_3 != '\0') {
            iVar4 = 0;
          }
          iVar4 = FUN_1436b50e0(uVar8,0xffffffffffffffff,uVar6,iVar4);
          if (iVar4 < 0) {
            uVar5 = Ordinal_111();
            FUN_1436b5820(uVar7,"select/poll on SSL/TLS socket, errno: %d",uVar5);
            return 0x23;
          }
          if (iVar4 == 0) {
            if (param_3 != '\0') {
              *param_4 = 0;
              return 0;
            }
            goto LAB_1436c1de7;
          }
        }
        uVar6 = FUN_1436c2460(param_1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
        if ((param_3 != '\0') && (*(int *)(param_1 + lVar1 * 0xf + 1) - 1U < 3)) {
          return uVar6;
        }
      } while( true );
    }
    iVar4 = FUN_1436b6c20(uVar7,0,1);
    if (iVar4 < 0) {
LAB_1436c1de7:
      FUN_1436b5820(uVar7,"SSL/TLS connection timeout");
      uVar6 = 0x1c;
    }
    else {
      uVar6 = FUN_1436c1f40(param_1,param_2);
      if ((int)uVar6 == 0) goto LAB_1436c1e20;
    }
  }
  return uVar6;
}



// FUNCTION 1436c1f40 FUN_1436c1f40 body=1300 status=ok
// SIG undefined FUN_1436c1f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436c1f40(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined1 auStack_1d8 [32];
  ulonglong *local_1b8;
  ulonglong local_1b0;
  undefined4 *local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  undefined4 *local_190;
  longlong local_188;
  longlong local_180;
  ulonglong local_178;
  undefined8 local_170;
  undefined8 local_168;
  int *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 *local_150;
  longlong local_148;
  ulonglong local_140;
  undefined1 local_138 [8];
  undefined4 local_130;
  undefined4 local_12c;
  ulonglong *local_128;
  undefined4 local_118 [14];
  undefined4 local_e0;
  uint local_d0;
  undefined1 local_c8 [16];
  int local_b8 [2];
  ushort local_b0;
  undefined1 local_ae;
  undefined8 local_ad;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1d8;
  lVar2 = *param_1;
  local_140 = 0xffffffffffffffff;
  local_148 = 0;
  lVar1 = (longlong)param_2 + 5;
  FUN_1436b58e0(lVar2,"schannel: SSL/TLS connection with %s port %hu (step 1/3)\n",param_1[0x17],
                *(undefined4 *)((longlong)param_1 + 0x10c));
  param_1[lVar1 * 0xf + 2] = 0;
  if ((char)param_1[0x76] != '\0') {
    FUN_1436ad9c0(param_1);
    cVar3 = FUN_1436ad620(param_1,&local_148,0);
    if (cVar3 == '\0') {
      param_1[lVar1 * 0xf + 2] = local_148;
      FUN_1436b58e0(lVar2,"schannel: re-using existing credential handle\n");
      *(int *)(param_1[lVar1 * 0xf + 2] + 0x18) = *(int *)(param_1[lVar1 * 0xf + 2] + 0x18) + 1;
      FUN_1436b58e0(lVar2,"schannel: incremented credential handle refcount = %d\n",
                    *(undefined4 *)(param_1[lVar1 * 0xf + 2] + 0x18));
    }
    FUN_1436ad9f0(param_1);
  }
  if (param_1[lVar1 * 0xf + 2] == 0) {
    _guard_xfg_dispatch_icall_nop(local_118,0,0x50);
    local_118[0] = 4;
    if (*(char *)(lVar2 + 0x390) == '\0') {
      local_d0 = 0x1808;
LAB_1436c2077:
      pcVar7 = "schannel: disabled server certificate revocation checks\n";
    }
    else {
      local_d0 = 0x220;
      if (*(char *)(lVar2 + 0x473) != '\0') {
        local_d0 = 0x1820;
      }
      if (*(char *)(lVar2 + 0x473) != '\0') goto LAB_1436c2077;
      pcVar7 = "schannel: checking server certificate revocation\n";
    }
    FUN_1436b58e0(lVar2,pcVar7);
    if (*(char *)(lVar2 + 0x391) == '\0') {
      local_d0 = local_d0 | 4;
      FUN_1436b58e0(lVar2,
                    "schannel: verifyhost setting prevents Schannel from comparing the supplied target name with the subject names in server certificates. Also disables SNI.\n"
                   );
    }
    iVar4 = *(int *)(lVar2 + 0x388);
    if (iVar4 == 2) {
      local_e0 = 8;
    }
    else if (iVar4 == 3) {
      local_e0 = 0x20;
    }
    else if (iVar4 == 4) {
      local_e0 = 0x80;
    }
    else if (iVar4 == 5) {
      local_e0 = 0x200;
    }
    else if (iVar4 == 6) {
      local_e0 = 0x800;
    }
    else {
      local_e0 = 0xa80;
    }
    puVar5 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
    param_1[lVar1 * 0xf + 2] = (longlong)puVar5;
    if (puVar5 == (undefined8 *)0x0) goto LAB_1436c2106;
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined4 *)(param_1[lVar1 * 0xf + 2] + 0x18) = 1;
    local_1a0 = param_1[lVar1 * 0xf + 2];
    local_198 = local_1a0 + 0x10;
    local_1b8 = (ulonglong *)local_118;
    local_1a8 = (undefined4 *)0x0;
    local_1b0 = 0;
    iVar4 = (**(code **)(DAT_146b7b8e0 + 0x18))(0,"Microsoft Unified Security Protocol Provider",2);
    if (iVar4 != 0) {
      if (iVar4 == -0x7ff6fcde) {
        uVar6 = FUN_1436a7420(param_1,0x80090322);
        pcVar7 = "schannel: SNI or certificate check failed: %s";
      }
      else {
        uVar6 = FUN_1436a7420(param_1,iVar4);
        pcVar7 = "schannel: AcquireCredentialsHandle failed: %s";
      }
      FUN_1436b5820(lVar2,pcVar7,uVar6);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[lVar1 * 0xf + 2]);
      param_1[lVar1 * 0xf + 2] = 0;
      return 0x23;
    }
  }
  iVar4 = Curl_inet_pton(2,param_1[0x17],local_138);
  if ((iVar4 != 0) || (iVar4 = Curl_inet_pton(0x17,param_1[0x17],local_c8), iVar4 != 0)) {
    FUN_1436b58e0(lVar2,"schannel: using IP address, SNI is not supported by OS.\n");
  }
  if ((*(char *)((longlong)param_1 + 0x3d6) == '\0') ||
     (cVar3 = Curl_verify_windows_version(6,3,2,3), cVar3 == '\0')) {
    local_168 = 0;
    local_160 = (int *)0x0;
  }
  else {
    local_b8[1] = 2;
    local_ad = 0x312e312f70747468;
    local_ae = 8;
    FUN_1436b58e0(lVar2,"schannel: ALPN, offering %s\n","http/1.1");
    local_b0 = curlx_sltous(9);
    local_b8[0] = local_b0 + 6;
    local_160 = local_b8;
    local_168 = 0x1200000013;
  }
  local_150 = &local_168;
  local_154 = 1;
  local_128 = &local_178;
  local_158 = 0;
  local_178 = 0;
  local_170 = 0;
  local_130 = 0;
  local_12c = 1;
  *(undefined4 *)(param_1 + lVar1 * 0xf + 0xd) = 0x811c;
  puVar5 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)();
  param_1[lVar1 * 0xf + 3] = (longlong)puVar5;
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    if (param_1[0x17] == 0) {
      return 0x1b;
    }
    local_198 = param_1[lVar1 * 0xf + 3];
    local_188 = (longlong)param_1 + lVar1 * 0x78 + 0x6c;
    local_180 = local_198 + 0x10;
    local_190 = &local_130;
    local_1a8 = &local_158;
    local_1a0 = local_1a0 & 0xffffffff00000000;
    local_1b0 = local_1b0 & 0xffffffff00000000;
    local_1b8 = (ulonglong *)((ulonglong)local_1b8 & 0xffffffff00000000);
    iVar4 = (**(code **)(DAT_146b7b8e0 + 0x30))
                      (param_1[lVar1 * 0xf + 2],0,param_1[0x17],(int)param_1[lVar1 * 0xf + 0xd]);
    if (iVar4 == 0x90312) {
      FUN_1436b58e0(lVar2,"schannel: sending initial handshake data: sending %lu bytes...\n",
                    local_178 & 0xffffffff);
      local_1b8 = &local_140;
      iVar4 = FUN_1436b5e50(param_1,param_1[(longlong)param_2 + 0x3a],local_170,
                            local_178 & 0xffffffff);
      (**(code **)(DAT_146b7b8e0 + 0x80))(local_170);
      if ((iVar4 == 0) && ((local_178 & 0xffffffff) == local_140)) {
        FUN_1436b58e0(lVar2,"schannel: sent initial handshake data: sent %zd bytes\n");
        *(undefined4 *)(param_1 + lVar1 * 0xf + 0xe) = 0;
        *(undefined2 *)((longlong)param_1 + lVar1 * 0x78 + 0x74) = 0;
        *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 1;
        return 0;
      }
      FUN_1436b5820(lVar2,"schannel: failed to send initial handshake data: sent %zd of %lu bytes");
    }
    else {
      if (iVar4 == -0x7ff6fcde) {
        uVar6 = FUN_1436a7420(param_1,0x80090322);
        pcVar7 = "schannel: SNI or certificate check failed: %s";
      }
      else {
        uVar6 = FUN_1436a7420(param_1,iVar4);
        pcVar7 = "schannel: initial InitializeSecurityContext failed: %s";
      }
      FUN_1436b5820(lVar2,pcVar7,uVar6);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[lVar1 * 0xf + 3]);
      param_1[lVar1 * 0xf + 3] = 0;
    }
    return 0x23;
  }
LAB_1436c2106:
  FUN_1436b5820(lVar2,"schannel: unable to allocate memory");
  return 0x1b;
}



// FUNCTION 1436c2460 FUN_1436c2460 body=1286 status=ok
// SIG undefined FUN_1436c2460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436c2460(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  uint *puVar10;
  int iVar11;
  ulonglong _Size;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_128 [32];
  ulonglong *local_108;
  undefined4 local_100;
  undefined4 *local_f8;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined4 *local_e0;
  longlong local_d8;
  longlong local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  ulonglong local_a0;
  undefined4 local_98;
  undefined4 local_94;
  uint *local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 *local_80;
  uint local_78 [2];
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  uVar6 = *param_1;
  lVar12 = (longlong)param_2;
  local_a8 = -1;
  local_a0 = 0xffffffffffffffff;
  lVar1 = lVar12 + 5;
  bVar13 = *(int *)(param_1 + lVar1 * 0xf + 1) != 3;
  FUN_1436b58e0(uVar6,"schannel: SSL/TLS connection with %s port %hu (step 2/3)\n",param_1[0x17],
                *(undefined4 *)((longlong)param_1 + 0x10c));
  if ((param_1[lVar1 * 0xf + 2] == 0) || (param_1[lVar1 * 0xf + 3] == 0)) {
    return 0x23;
  }
  if (param_1[lVar1 * 0xf + 0xc] == 0) {
    param_1[lVar1 * 0xf + 10] = 0;
    param_1[lVar1 * 0xf + 8] = 0x1000;
    lVar5 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x1000);
    param_1[lVar1 * 0xf + 0xc] = lVar5;
    if (lVar5 != 0) goto LAB_1436c2512;
LAB_1436c2538:
    FUN_1436b5820(uVar6,"schannel: unable to allocate memory");
    uVar6 = 0x1b;
  }
  else {
LAB_1436c2512:
    if (param_1[lVar1 * 0xf + 0xb] == 0) {
      param_1[lVar1 * 0xf + 9] = 0;
      param_1[lVar1 * 0xf + 7] = 0x1000;
      lVar5 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x1000);
      param_1[lVar1 * 0xf + 0xb] = lVar5;
      if (lVar5 == 0) goto LAB_1436c2538;
    }
    if ((ulonglong)(param_1[lVar1 * 0xf + 7] - param_1[lVar1 * 0xf + 9]) < 0x400) {
      lVar5 = param_1[lVar1 * 0xf + 9] + 0x400;
      lVar7 = (*(code *)PTR_realloc_1467dcc68)(param_1[lVar1 * 0xf + 0xb],lVar5);
      if (lVar7 == 0) {
        FUN_1436b5820(uVar6,"schannel: unable to re-allocate memory");
        return 0x1b;
      }
      param_1[lVar1 * 0xf + 7] = lVar5;
      param_1[lVar1 * 0xf + 0xb] = lVar7;
    }
LAB_1436c25a8:
    iVar11 = 0;
    if (bVar13) {
      iVar2 = Curl_read_plain(param_1[lVar12 + 0x3a],
                              param_1[lVar1 * 0xf + 0xb] + param_1[lVar1 * 0xf + 9],
                              param_1[lVar1 * 0xf + 7] - param_1[lVar1 * 0xf + 9],&local_a8);
      if (iVar2 == 0x51) {
        if (*(int *)(param_1 + lVar1 * 0xf + 1) != 3) {
          *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 2;
        }
        pcVar9 = "schannel: failed to receive handshake, need more data\n";
        goto LAB_1436c283a;
      }
      if ((iVar2 != 0) || (local_a8 == 0)) {
        FUN_1436b5820(uVar6,"schannel: failed to receive handshake, SSL/TLS connection failed");
        return 0x23;
      }
      param_1[lVar1 * 0xf + 9] = param_1[lVar1 * 0xf + 9] + local_a8;
    }
    FUN_1436b58e0(uVar6,"schannel: encrypted data buffer: offset %zu length %zu\n",
                  param_1[lVar1 * 0xf + 9],param_1[lVar1 * 0xf + 7]);
    uVar3 = FUN_1436a85f0(param_1[lVar1 * 0xf + 9]);
    local_c0 = (void *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                                 (param_1[lVar1 * 0xf + 9]);
    local_80 = &local_c8;
    local_90 = local_78;
    local_c4 = 2;
    local_b8 = 0;
    local_b0 = 0;
    local_88 = 0;
    local_84 = 2;
    local_78[0] = 0;
    local_78[1] = 2;
    local_70 = 0;
    local_68 = 0;
    local_64 = 0x11;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_98 = 0;
    local_94 = 3;
    local_c8 = uVar3;
    if (local_c0 == (void *)0x0) {
      FUN_1436b5820(uVar6,"schannel: unable to allocate memory");
      return 0x1b;
    }
    _guard_xfg_dispatch_icall_nop
              (local_c0,(void *)param_1[lVar1 * 0xf + 0xb],param_1[lVar1 * 0xf + 9]);
    if (param_1[0x17] == 0) {
      return 0x1b;
    }
    local_d8 = (longlong)param_1 + lVar1 * 0x78 + 0x6c;
    local_d0 = param_1[lVar1 * 0xf + 3] + 0x10;
    local_e0 = &local_98;
    local_f8 = &local_88;
    local_e8 = 0;
    local_f0 = 0;
    local_100 = 0;
    local_108 = (ulonglong *)((ulonglong)local_108 & 0xffffffff00000000);
    iVar2 = (**(code **)(DAT_146b7b8e0 + 0x30))
                      (param_1[lVar1 * 0xf + 2],param_1[lVar1 * 0xf + 3],param_1[0x17],
                       *(undefined4 *)(param_1 + lVar1 * 0xf + 0xd));
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_c0);
    local_c0 = (void *)0x0;
    if (iVar2 == -0x7ff6fce8) {
      *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 2;
      pcVar9 = "schannel: received incomplete message, need more data\n";
      goto LAB_1436c283a;
    }
    if (iVar2 == 0x90320) {
      if ((char)*(uint *)(param_1 + lVar1 * 0xf + 0xd) < '\0') {
LAB_1436c28ef:
        uVar8 = FUN_1436a7420(param_1,iVar2);
        pcVar9 = "schannel: next InitializeSecurityContext failed: %s";
LAB_1436c2901:
        FUN_1436b5820(uVar6,pcVar9,uVar8);
        return 0x23;
      }
      *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 3;
      *(uint *)(param_1 + lVar1 * 0xf + 0xd) = *(uint *)(param_1 + lVar1 * 0xf + 0xd) | 0x80;
      pcVar9 = "schannel: a client certificate has been requested\n";
      goto LAB_1436c283a;
    }
    if ((iVar2 != 0x90312) && (iVar2 != 0)) {
      if (iVar2 == -0x7ff6fcde) {
        uVar8 = FUN_1436a7420(param_1,0x80090322);
        pcVar9 = "schannel: SNI or certificate check failed: %s";
        goto LAB_1436c2901;
      }
      goto LAB_1436c28ef;
    }
    puVar10 = local_78;
    do {
      if ((puVar10[1] == 2) && (*puVar10 != 0)) {
        FUN_1436b58e0(uVar6,"schannel: sending next handshake data: sending %lu bytes...\n");
        local_108 = &local_a0;
        iVar4 = FUN_1436b5e50(param_1,param_1[lVar12 + 0x3a],*(undefined8 *)(puVar10 + 2),*puVar10);
        if ((iVar4 != 0) || (*puVar10 != local_a0)) {
          FUN_1436b5820(uVar6,"schannel: failed to send next handshake data: sent %zd of %lu bytes",
                        local_a0,local_78[(longlong)iVar11 * 4]);
          return 0x23;
        }
      }
      if (*(longlong *)(puVar10 + 2) != 0) {
        (**(code **)(DAT_146b7b8e0 + 0x80))();
      }
      iVar11 = iVar11 + 1;
      puVar10 = puVar10 + 4;
    } while (iVar11 < 3);
    if ((local_b8._4_4_ == 5) && ((int)local_b8 != 0)) {
      FUN_1436b58e0(uVar6,"schannel: encrypted data length: %lu\n");
      _Size = local_b8 & 0xffffffff;
      if ((ulonglong)param_1[lVar1 * 0xf + 9] <= _Size) goto LAB_1436c28b7;
      memmove((void *)param_1[lVar1 * 0xf + 0xb],
              (void *)((param_1[lVar1 * 0xf + 9] - _Size) + (longlong)param_1[lVar1 * 0xf + 0xb]),
              _Size);
      param_1[lVar1 * 0xf + 9] = local_b8 & 0xffffffff;
      if (iVar2 != 0x90312) goto LAB_1436c28cc;
      bVar13 = false;
      goto LAB_1436c25a8;
    }
    param_1[lVar1 * 0xf + 9] = 0;
LAB_1436c28b7:
    if (iVar2 == 0x90312) {
      *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 2;
      goto LAB_1436c2842;
    }
LAB_1436c28cc:
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + lVar1 * 0xf + 1) = 4;
      pcVar9 = "schannel: SSL/TLS handshake complete\n";
LAB_1436c283a:
      FUN_1436b58e0(uVar6,pcVar9);
    }
LAB_1436c2842:
    uVar6 = 0;
  }
  return uVar6;
}



// FUNCTION 1436c2970 FUN_1436c2970 body=753 status=ok
// SIG undefined FUN_1436c2970(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_1436c2970(longlong *param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_168 [32];
  PCCERT_CONTEXT local_148;
  longlong local_140;
  int local_138 [2];
  char local_130;
  longlong local_12f [32];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  lVar2 = *param_1;
  lVar5 = (longlong)param_2 + 5;
  local_148 = (PCCERT_CONTEXT)0x0;
  FUN_1436b58e0(lVar2,"schannel: SSL/TLS connection with %s port %hu (step 3/3)\n",param_1[0x17],
                *(undefined4 *)((longlong)param_1 + 0x10c));
  if (param_1[lVar5 * 0xf + 2] == 0) {
    return 0x23;
  }
  uVar1 = *(uint *)((longlong)param_1 + lVar5 * 0x78 + 0x6c);
  if (uVar1 != *(uint *)(param_1 + lVar5 * 0xf + 0xd)) {
    if ((uVar1 & 8) == 0) {
      FUN_1436b5820(lVar2,"schannel: failed to setup sequence detection");
    }
    if ((*(byte *)((longlong)param_1 + lVar5 * 0x78 + 0x6c) & 4) == 0) {
      FUN_1436b5820(lVar2,"schannel: failed to setup replay detection");
    }
    if ((*(byte *)((longlong)param_1 + lVar5 * 0x78 + 0x6c) & 0x10) == 0) {
      FUN_1436b5820(lVar2,"schannel: failed to setup confidentiality");
    }
    if ((*(uint *)((longlong)param_1 + lVar5 * 0x78 + 0x6c) & 0x100) == 0) {
      FUN_1436b5820(lVar2,"schannel: failed to setup memory allocation");
    }
    if ((*(uint *)((longlong)param_1 + lVar5 * 0x78 + 0x6c) & 0x8000) != 0) {
      return 0x23;
    }
    FUN_1436b5820(lVar2,"schannel: failed to setup stream orientation");
    return 0x23;
  }
  if ((*(char *)((longlong)param_1 + 0x3d6) != '\0') &&
     (cVar3 = Curl_verify_windows_version(6,3,2,3), cVar3 != '\0')) {
    iVar4 = (**(code **)(DAT_146b7b8e0 + 0x58))(param_1[lVar5 * 0xf + 3],0x23,local_138);
    if (iVar4 != 0) {
      FUN_1436b5820(lVar2,"schannel: failed to retrieve ALPN result");
      return 0x23;
    }
    if (local_138[0] == 1) {
      FUN_1436b58e0(lVar2,"schannel: ALPN, server accepted to use %.*s\n",local_130,local_12f);
      if ((local_130 == '\b') && (local_12f[0] == 0x312e312f70747468)) {
        *(undefined4 *)(param_1 + 0x104) = 2;
      }
    }
    else {
      FUN_1436b58e0(lVar2,"ALPN, server did not agree to a protocol\n");
    }
  }
  if ((char)param_1[0x76] == '\0') goto LAB_1436c2ba5;
  local_140 = 0;
  FUN_1436ad9c0(param_1);
  cVar3 = FUN_1436ad620(param_1,&local_140,0);
  if (cVar3 == '\0') {
    if (local_140 != param_1[lVar5 * 0xf + 2]) {
      FUN_1436b58e0(lVar2,"schannel: old credential handle is stale, removing\n");
      FUN_1436ad500(param_1,local_140);
      goto LAB_1436c2b51;
    }
  }
  else {
LAB_1436c2b51:
    iVar4 = FUN_1436acfe0(param_1,param_1[lVar5 * 0xf + 2],0x20);
    if (iVar4 != 0) {
      FUN_1436ad9f0(param_1);
      FUN_1436b5820(lVar2,"schannel: failed to store credential handle");
      return iVar4;
    }
    *(int *)(param_1[lVar5 * 0xf + 2] + 0x18) = *(int *)(param_1[lVar5 * 0xf + 2] + 0x18) + 1;
    FUN_1436b58e0(lVar2,"schannel: stored credential handle in session cache\n");
  }
  FUN_1436ad9f0(param_1);
LAB_1436c2ba5:
  if (*(char *)(lVar2 + 0x3f1) != '\0') {
    iVar4 = (**(code **)(DAT_146b7b8e0 + 0x58))(param_1[lVar5 * 0xf + 3],0x53,&local_148);
    if ((iVar4 != 0) || (local_148 == (PCCERT_CONTEXT)0x0)) {
      FUN_1436b5820(lVar2,"schannel: failed to retrieve remote cert context");
      return 0x23;
    }
    iVar4 = FUN_1436ad7c0(lVar2,1);
    if (((iVar4 == 0) && ((local_148->dwCertEncodingType & 1) != 0)) &&
       (local_148->cbCertEncoded != 0)) {
      iVar4 = FUN_1436d9120(param_1,0,local_148->pbCertEncoded,
                            local_148->pbCertEncoded + local_148->cbCertEncoded);
    }
    CertFreeCertificateContext(local_148);
    if (iVar4 != 0) {
      return iVar4;
    }
  }
  *(undefined4 *)(param_1 + lVar5 * 0xf + 1) = 5;
  return 0;
}



// FUNCTION 1436c2c70 FUN_1436c2c70 body=1769 status=ok
// SIG undefined FUN_1436c2c70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

size_t FUN_1436c2c70(undefined8 *param_1,int param_2,void *param_3,ulonglong param_4,int *param_5)

{
  undefined8 uVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  size_t _Size;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  ulonglong local_d0;
  longlong local_c0;
  undefined8 *local_b8;
  void *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar1 = *param_1;
  iVar5 = 0;
  iVar4 = 0;
  lVar6 = (longlong)param_2 + 5;
  local_c0 = -1;
  local_d8 = 0;
  local_d0 = param_4;
  local_b8 = param_1;
  local_b0 = param_3;
  FUN_1436b58e0(uVar1,"schannel: client wants to read %zu bytes\n",param_4);
  *param_5 = 0;
  if ((param_4 == 0) || ((ulonglong)param_1[lVar6 * 0xf + 10] < param_4)) {
    if (*(int *)(param_1 + lVar6 * 0xf + 0xe) == 0) {
      if (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x74) == '\0') {
        uVar11 = param_4;
        puVar12 = local_b8;
        if ((param_4 != 0) &&
           (uVar11 = param_4, *(char *)((longlong)param_1 + lVar6 * 0x78 + 0x75) == '\0')) {
          uVar11 = param_1[lVar6 * 0xf + 9];
          uVar10 = param_1[lVar6 * 0xf + 7] - uVar11;
          if ((uVar10 < 0x400) || ((ulonglong)param_1[lVar6 * 0xf + 7] < param_4 + 0x400)) {
            uVar10 = local_d0;
            if (param_4 + 0x400 <= uVar11 + 0x400) {
              uVar10 = uVar11;
            }
            lVar8 = uVar10 + 0x400;
            lVar7 = (*(code *)PTR_realloc_1467dcc68)(param_1[lVar6 * 0xf + 0xb],lVar8);
            if (lVar7 == 0) {
              *param_5 = 0x1b;
              FUN_1436b5820(uVar1,"schannel: unable to re-allocate memory");
              goto LAB_1436c3146;
            }
            param_1[lVar6 * 0xf + 0xb] = lVar7;
            uVar10 = lVar8 - param_1[lVar6 * 0xf + 9];
            param_1[lVar6 * 0xf + 7] = lVar8;
            FUN_1436b58e0(uVar1,"schannel: encdata_buffer resized %zu\n",lVar8);
          }
          FUN_1436b58e0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
                        param_1[lVar6 * 0xf + 9],param_1[lVar6 * 0xf + 7]);
          puVar12 = local_b8;
          iVar4 = Curl_read_plain(local_b8[(longlong)param_2 + 0x3a],
                                  param_1[lVar6 * 0xf + 0xb] + param_1[lVar6 * 0xf + 9],uVar10,
                                  &local_c0);
          *param_5 = iVar4;
          if (iVar4 == 0) {
            if (local_c0 == 0) {
              *(undefined1 *)((longlong)param_1 + lVar6 * 0x78 + 0x75) = 1;
              FUN_1436b58e0(uVar1,"schannel: server closed the connection\n");
              uVar11 = local_d0;
            }
            else {
              uVar11 = local_d0;
              if (0 < local_c0) {
                param_1[lVar6 * 0xf + 9] = param_1[lVar6 * 0xf + 9] + local_c0;
                FUN_1436b58e0(uVar1,"schannel: encrypted data got %zd\n");
                uVar11 = local_d0;
              }
            }
          }
          else {
            local_c0 = -1;
            if (iVar4 == 0x51) {
              FUN_1436b58e0(uVar1,"schannel: Curl_read_plain returned CURLE_AGAIN\n");
              uVar11 = local_d0;
            }
            else if (iVar4 == 0x38) {
              FUN_1436b58e0(uVar1,"schannel: Curl_read_plain returned CURLE_RECV_ERROR\n");
              uVar11 = local_d0;
            }
            else {
              FUN_1436b58e0(uVar1,"schannel: Curl_read_plain returned error %d\n",iVar4);
              uVar11 = local_d0;
            }
          }
        }
        FUN_1436b58e0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
                      param_1[lVar6 * 0xf + 9],param_1[lVar6 * 0xf + 7]);
        lVar8 = param_1[lVar6 * 0xf + 9];
        iVar4 = iVar5;
        while (((lVar8 != 0 && (iVar4 == 0)) &&
               ((uVar11 == 0 ||
                (((ulonglong)param_1[lVar6 * 0xf + 10] < uVar11 ||
                 (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x75) != '\0'))))))) {
          local_98 = FUN_1436a85f0(param_1[lVar6 * 0xf + 9]);
          local_90 = param_1[lVar6 * 0xf + 0xb];
          local_88 = 0;
          local_80 = (void *)0x0;
          local_78 = 0;
          local_70 = 0;
          local_68 = 0;
          local_60 = 0;
          local_a8 = 0;
          local_a0 = &local_98;
          local_94 = 1;
          local_a4 = 4;
          iVar4 = (**(code **)(DAT_146b7b8e0 + 0xd0))(param_1[lVar6 * 0xf + 3],&local_a8,0,0);
          if ((iVar4 != 0) && ((iVar4 != 0x90321 && (iVar4 != 0x90317)))) {
            if (iVar4 == -0x7ff6fce8) {
              if (*param_5 == 0) {
                *param_5 = 0x51;
              }
              FUN_1436b58e0(uVar1,"schannel: failed to decrypt data, need more data\n");
            }
            else {
              *param_5 = 0x38;
              uVar9 = FUN_1436a7420(puVar12,iVar4);
              FUN_1436b58e0(uVar1,"schannel: failed to read data from server: %s\n",uVar9);
            }
            goto LAB_1436c3146;
          }
          if (local_88._4_4_ == 1) {
            FUN_1436b58e0(uVar1,"schannel: decrypted data length: %lu\n",local_88 & 0xffffffff);
            uVar2 = 0x400;
            if (0x400 < (uint)local_88) {
              uVar2 = (uint)local_88;
            }
            if (((ulonglong)(param_1[lVar6 * 0xf + 8] - param_1[lVar6 * 0xf + 10]) <
                 (ulonglong)uVar2) || ((ulonglong)param_1[lVar6 * 0xf + 8] < uVar11)) {
              uVar10 = param_1[lVar6 * 0xf + 10] + (ulonglong)uVar2;
              if (local_d0 <= uVar10) {
                uVar11 = uVar10;
              }
              lVar8 = (*(code *)PTR_realloc_1467dcc68)(param_1[lVar6 * 0xf + 0xc],uVar11);
              if (lVar8 == 0) {
                *param_5 = 0x1b;
                FUN_1436b5820(uVar1,"schannel: unable to re-allocate memory");
                goto LAB_1436c3146;
              }
              param_1[lVar6 * 0xf + 0xc] = lVar8;
              param_1[lVar6 * 0xf + 8] = uVar11;
            }
            uVar11 = (ulonglong)(uint)local_88;
            if ((uint)local_88 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[lVar6 * 0xf + 0xc] + param_1[lVar6 * 0xf + 10]),local_80,
                         (ulonglong)(uint)local_88);
              param_1[lVar6 * 0xf + 10] = param_1[lVar6 * 0xf + 10] + uVar11;
            }
            FUN_1436b58e0(uVar1,"schannel: decrypted data added: %zu\n",uVar11);
            FUN_1436b58e0(uVar1,"schannel: decrypted data cached: offset %zu length %zu\n");
            uVar11 = local_d0;
          }
          if ((local_68._4_4_ == 5) && ((int)local_68 != 0)) {
            FUN_1436b58e0(uVar1,"schannel: encrypted data length: %lu\n");
            uVar10 = local_68 & 0xffffffff;
            if (uVar10 < (ulonglong)param_1[lVar6 * 0xf + 9]) {
              memmove((void *)param_1[lVar6 * 0xf + 0xb],
                      (void *)((longlong)param_1[lVar6 * 0xf + 0xb] +
                              (param_1[lVar6 * 0xf + 9] - uVar10)),uVar10);
              param_1[lVar6 * 0xf + 9] = local_68 & 0xffffffff;
            }
            FUN_1436b58e0(uVar1,"schannel: encrypted data cached: offset %zu length %zu\n");
          }
          else {
            param_1[lVar6 * 0xf + 9] = 0;
          }
          if (iVar4 == 0x90321) {
            FUN_1436b58e0(uVar1,"schannel: remote party requests renegotiation\n");
            if ((*param_5 != 0) && (*param_5 != 0x51)) {
              FUN_1436b58e0(uVar1,"schannel: can\'t renogotiate, an error is pending\n");
              goto LAB_1436c3146;
            }
            if (param_1[lVar6 * 0xf + 9] != 0) {
              *param_5 = 0x38;
              FUN_1436b58e0(uVar1,"schannel: can\'t renogotiate, encrypted data available\n");
              goto LAB_1436c3146;
            }
            FUN_1436b58e0(uVar1,"schannel: renegotiating SSL/TLS connection\n");
            *(undefined4 *)((longlong)param_1 + lVar6 * 0x78 + 4) = 1;
            *(undefined4 *)(param_1 + lVar6 * 0xf + 1) = 3;
            iVar5 = FUN_1436c1d80(puVar12,param_2);
            *param_5 = iVar5;
            if (iVar5 != 0) {
              FUN_1436b58e0(uVar1,"schannel: renegotiation failed\n");
              goto LAB_1436c3146;
            }
            iVar4 = 0;
            FUN_1436b58e0(uVar1,"schannel: SSL/TLS connection renegotiated\n");
          }
          else if (iVar4 == 0x90317) {
            *(undefined1 *)((longlong)param_1 + lVar6 * 0x78 + 0x74) = 1;
            if (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x75) == '\0') {
              *(undefined1 *)((longlong)param_1 + lVar6 * 0x78 + 0x75) = 1;
              FUN_1436b58e0(uVar1,"schannel: server closed the connection\n");
            }
            goto LAB_1436c3146;
          }
          lVar8 = param_1[lVar6 * 0xf + 9];
        }
        FUN_1436b58e0(uVar1,"schannel: encrypted data buffer: offset %zu length %zu\n",
                      param_1[lVar6 * 0xf + 9],param_1[lVar6 * 0xf + 7]);
        FUN_1436b58e0(uVar1,"schannel: decrypted data buffer: offset %zu length %zu\n",
                      param_1[lVar6 * 0xf + 10],param_1[lVar6 * 0xf + 8]);
      }
      else {
        FUN_1436b58e0(uVar1,"schannel: server indicated shutdown in a prior call\n");
        iVar4 = iVar5;
      }
    }
    else {
      *param_5 = *(int *)(param_1 + lVar6 * 0xf + 0xe);
      FUN_1436b58e0(uVar1,"schannel: an unrecoverable error occurred in a prior call\n");
      iVar4 = iVar5;
    }
  }
  else {
    FUN_1436b58e0(uVar1,"schannel: enough decrypted data is already available\n");
    iVar4 = iVar5;
  }
LAB_1436c3146:
  FUN_1436b58e0(uVar1,"schannel: schannel_recv cleanup\n");
  if ((((local_d0 != 0) && (param_1[lVar6 * 0xf + 10] == 0)) &&
      (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x75) != '\0')) &&
     (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x74) == '\0')) {
    cVar3 = Curl_verify_windows_version(5,0,2);
    if ((cVar3 == '\0') || (iVar4 != 0)) {
      *param_5 = 0x38;
      FUN_1436b58e0(uVar1,"schannel: server closed abruptly (missing close_notify)\n");
    }
    else {
      *(undefined1 *)((longlong)param_1 + lVar6 * 0x78 + 0x74) = 1;
    }
  }
  iVar4 = *param_5;
  if ((iVar4 != 0) && (iVar4 != 0x51)) {
    *(int *)(param_1 + lVar6 * 0xf + 0xe) = iVar4;
  }
  _Size = param_1[lVar6 * 0xf + 10];
  if (local_d0 < (ulonglong)param_1[lVar6 * 0xf + 10]) {
    _Size = local_d0;
  }
  if (_Size == 0) {
    if ((*param_5 == 0) && (*(char *)((longlong)param_1 + lVar6 * 0x78 + 0x75) == '\0')) {
      *param_5 = 0x51;
    }
    if (local_d0 == 0) {
      *param_5 = 0;
    }
    _Size = -(ulonglong)(*param_5 != 0);
  }
  else {
    _guard_xfg_dispatch_icall_nop(local_b0,(void *)param_1[lVar6 * 0xf + 0xc],_Size);
    memmove((void *)param_1[lVar6 * 0xf + 0xc],
            (void *)((longlong)param_1[lVar6 * 0xf + 0xc] + _Size),param_1[lVar6 * 0xf + 10] - _Size
           );
    param_1[lVar6 * 0xf + 10] = param_1[lVar6 * 0xf + 10] - _Size;
    FUN_1436b58e0(uVar1,"schannel: decrypted data returned %zu\n",_Size);
    FUN_1436b58e0(uVar1,"schannel: decrypted data buffer: offset %zu length %zu\n",
                  param_1[lVar6 * 0xf + 10],param_1[lVar6 * 0xf + 8]);
    *param_5 = 0;
  }
  return _Size;
}



// FUNCTION 1436c3360 FUN_1436c3360 body=618 status=ok
// SIG undefined FUN_1436c3360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436c3360(undefined8 *param_1,int param_2,void *param_3,ulonglong param_4,int *param_5
                       )

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_e8 [32];
  void **local_c8;
  void *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  int *local_a8;
  int local_98 [2];
  longlong local_90;
  uint local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  lVar8 = (longlong)param_2;
  lVar1 = lVar8 + 5;
  local_b8 = param_3;
  if (((*(int *)(param_1 + lVar1 * 0xf + 5) == 0) &&
      (iVar2 = (**(code **)(DAT_146b7b8e0 + 0x58))
                         (param_1[lVar1 * 0xf + 3],4,param_1 + lVar1 * 0xf + 4), iVar2 != 0)) ||
     (*(uint *)(param_1 + lVar1 * 0xf + 5) < param_4)) {
    uVar4 = 0xffffffffffffffff;
    *param_5 = 0x37;
  }
  else {
    lVar5 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                      ((ulonglong)*(uint *)(param_1 + lVar1 * 0xf + 4) +
                       *(uint *)((longlong)param_1 + lVar1 * 0x78 + 0x24) + param_4);
    if (lVar5 == 0) {
      *param_5 = 0x1b;
      uVar4 = 0xffffffffffffffff;
    }
    else {
      local_98[0] = *(int *)(param_1 + lVar1 * 0xf + 4);
      local_98[1] = 7;
      local_90 = lVar5;
      local_88 = FUN_1436a85f0(param_4);
      local_78 = *(int *)((longlong)param_1 + lVar1 * 0x78 + 0x24);
      local_80 = (void *)((ulonglong)*(uint *)(param_1 + lVar1 * 0xf + 4) + lVar5);
      local_84 = 1;
      local_70 = *(uint *)(param_1 + lVar1 * 0xf + 4) + param_4 + lVar5;
      local_74 = 6;
      local_68 = 0;
      local_60 = 0;
      local_b0 = 0;
      local_a8 = local_98;
      local_ac = 4;
      _guard_xfg_dispatch_icall_nop(local_80,local_b8,param_4);
      iVar2 = (**(code **)(DAT_146b7b8e0 + 200))(param_1[lVar1 * 0xf + 3],0,&local_b0,0);
      if (iVar2 == 0) {
        uVar4 = 0;
        uVar7 = local_98[0] + local_88 + local_78;
        param_4 = (ulonglong)uVar7;
        if (uVar7 != 0) {
          do {
            local_b8 = (void *)0x0;
            iVar2 = FUN_1436b6c20(*param_1,0,0);
            if (iVar2 < 0) {
LAB_1436c355b:
              FUN_1436b5820(*param_1,"schannel: timed out sending data (bytes sent: %zd)",uVar4);
              uVar4 = 0xffffffffffffffff;
              *param_5 = 0x1c;
              break;
            }
            iVar2 = FUN_1436b50e0(0xffffffffffffffff,0xffffffffffffffff,param_1[lVar8 + 0x3a],iVar2)
            ;
            if (iVar2 < 0) {
              uVar3 = Ordinal_111();
              FUN_1436b5820(*param_1,"select/poll on SSL socket, errno: %d",uVar3);
              iVar6 = 0x37;
              goto LAB_1436c358d;
            }
            if (iVar2 == 0) goto LAB_1436c355b;
            local_c8 = &local_b8;
            iVar2 = FUN_1436b5e50(param_1,param_1[lVar8 + 0x3a],lVar5 + uVar4,param_4 - uVar4);
            if (iVar2 != 0x51) {
              if (iVar2 != 0) {
                *param_5 = iVar2;
                uVar4 = 0xffffffffffffffff;
                break;
              }
              uVar4 = uVar4 + (longlong)local_b8;
            }
          } while (uVar4 < param_4);
        }
      }
      else {
        iVar6 = 0x37;
        if (iVar2 == -0x7ff6fd00) {
          iVar6 = 0x1b;
        }
LAB_1436c358d:
        uVar4 = 0xffffffffffffffff;
        *param_5 = iVar6;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
      if (param_4 == uVar4) {
        uVar4 = (ulonglong)local_88;
      }
    }
  }
  return uVar4;
}



// FUNCTION 1436c35d0 FUN_1436c35d0 body=73 status=ok
// SIG undefined FUN_1436c35d0(void)

void FUN_1436c35d0(HCRYPTPROV *param_1)

{
  BOOL BVar1;
  
  BVar1 = CryptAcquireContextA(param_1,(LPCSTR)0x0,(LPCSTR)0x0,1,0xf0000000);
  if (BVar1 != 0) {
    CryptCreateHash(*param_1,0x8003,0,0,param_1 + 1);
  }
  return;
}



// FUNCTION 1436c3630 FUN_1436c3630 body=134 status=ok
// SIG undefined FUN_1436c3630(void)

void FUN_1436c3630(BYTE *param_1,HCRYPTPROV *param_2)

{
  DWORD local_res10 [6];
  
  local_res10[0] = 0;
  CryptGetHashParam(param_2[1],2,(BYTE *)0x0,local_res10,0);
  if (local_res10[0] == 0x10) {
    CryptGetHashParam(param_2[1],2,param_1,local_res10,0);
  }
  if (param_2[1] != 0) {
    CryptDestroyHash(param_2[1]);
  }
  if (*param_2 != 0) {
    CryptReleaseContext(*param_2,0);
  }
  return;
}



// FUNCTION 1436c36c0 Curl_MD5_final body=52 status=ok
// SIG undefined Curl_MD5_final(void)

undefined8 Curl_MD5_final(longlong *param_1,undefined8 param_2)

{
  (**(code **)(*param_1 + 0x10))(param_2,param_1[1]);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[1]);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1);
  return 0;
}



// FUNCTION 1436c3700 Curl_MD5_init body=94 status=ok
// SIG undefined Curl_MD5_init(void)

undefined8 * Curl_MD5_init(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  puVar1 = (undefined8 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    lVar2 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(*(undefined4 *)(param_1 + 3));
    puVar1[1] = lVar2;
    if (lVar2 != 0) {
      *puVar1 = param_1;
      (*(code *)*param_1)(lVar2);
      return puVar1;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar1);
  }
  return (undefined8 *)0x0;
}



// FUNCTION 1436c3760 Curl_MD5_update body=21 status=ok
// SIG undefined Curl_MD5_update(void)

undefined8 Curl_MD5_update(longlong *param_1)

{
  (**(code **)(*param_1 + 8))(param_1[1]);
  return 0;
}



// FUNCTION 1436c3780 Curl_base64_decode body=279 status=ok
// SIG undefined Curl_base64_decode(void)

undefined4 Curl_base64_decode(char *param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  uVar6 = 0;
  *param_2 = 0;
  *param_3 = 0;
  uVar8 = 0xffffffffffffffff;
  do {
    uVar8 = uVar8 + 1;
  } while (param_1[uVar8] != '\0');
  if ((uVar8 != 0) && ((uVar8 & 3) == 0)) {
    cVar1 = *param_1;
    uVar5 = uVar6;
    while ((cVar1 != '=' && (cVar1 != '\0'))) {
      lVar10 = uVar5 + 1;
      uVar5 = uVar5 + 1;
      cVar1 = param_1[lVar10];
    }
    uVar9 = uVar6;
    if ((param_1[uVar5] == '=') && (uVar9 = 1, param_1[uVar5 + 1] == '=')) {
      uVar9 = 2;
    }
    if (uVar9 + uVar5 == uVar8) {
      uVar8 = uVar8 >> 2;
      lVar10 = uVar8 * 3 - uVar9;
      puVar3 = (undefined1 *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar10 + 1);
      if (puVar3 == (undefined1 *)0x0) {
        uVar2 = 0x1b;
      }
      else {
        puVar7 = puVar3;
        if (uVar8 != 0) {
          do {
            lVar4 = decodeQuantum(puVar7,param_1);
            if (lVar4 == 0) {
              (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
              return 0x3d;
            }
            puVar7 = puVar7 + lVar4;
            param_1 = param_1 + 4;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
        }
        *puVar7 = 0;
        uVar2 = 0;
        *param_2 = puVar3;
        *param_3 = lVar10;
      }
      return uVar2;
    }
  }
  return 0x3d;
}



// FUNCTION 1436c38a0 Curl_base64_encode body=45 status=ok
// SIG undefined Curl_base64_encode(void)

void Curl_base64_encode(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  base64_encode("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",param_1,param_2,
                param_3,param_4,param_5);
  return;
}



// FUNCTION 1436c38d0 base64_encode body=549 status=ok
// SIG undefined base64_encode(void)

undefined4
base64_encode(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong param_4,
             undefined8 *param_5,longlong *param_6)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  byte bVar11;
  byte bVar12;
  
  plVar4 = param_6;
  puVar3 = param_5;
  lVar10 = -1;
  *param_5 = 0;
  *param_6 = 0;
  if (param_4 == 0) {
    param_4 = -1;
    do {
      param_4 = param_4 + 1;
    } while (param_3[param_4] != '\0');
  }
  puVar6 = (undefined1 *)
           (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)((ulonglong)(param_4 * 4) / 3 + 4);
  puVar2 = puVar6;
  if (puVar6 == (undefined1 *)0x0) {
    uVar5 = 0x1b;
  }
  else {
    while (param_4 != 0) {
      iVar9 = 0;
      uVar7 = 0;
      do {
        if (param_4 == 0) {
          if (2 < uVar7) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          *(undefined1 *)((longlong)&param_5 + uVar7) = 0;
        }
        else {
          uVar1 = *param_3;
          iVar9 = iVar9 + 1;
          param_3 = param_3 + 1;
          *(undefined1 *)((longlong)&param_5 + uVar7) = uVar1;
          param_4 = param_4 + -1;
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)uVar7 < 3);
      bVar8 = ((byte)param_5 & 3) << 4 | param_5._1_1_ >> 4;
      bVar12 = (byte)param_5 >> 2;
      bVar11 = (param_5._1_1_ & 0xf) << 2 | param_5._2_1_ >> 6;
      if (iVar9 == 1) {
        curl_msnprintf(puVar2,5,"%c%c==",(int)*(char *)((ulonglong)bVar12 + param_1),
                       (int)*(char *)((ulonglong)bVar8 + param_1));
      }
      else if (iVar9 == 2) {
        curl_msnprintf(puVar2,5,"%c%c%c=",(int)*(char *)((ulonglong)bVar12 + param_1),
                       (int)*(char *)((ulonglong)bVar8 + param_1),
                       (int)*(char *)((ulonglong)bVar11 + param_1));
      }
      else {
        curl_msnprintf(puVar2,5,"%c%c%c%c",(int)*(char *)((ulonglong)bVar12 + param_1),
                       (int)*(char *)((ulonglong)bVar8 + param_1),
                       (int)*(char *)((ulonglong)bVar11 + param_1),
                       (int)*(char *)((ulonglong)(param_5._2_1_ & 0x3f) + param_1));
      }
      puVar2 = puVar2 + 4;
    }
    *puVar2 = 0;
    *puVar3 = puVar6;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(0);
    do {
      lVar10 = lVar10 + 1;
    } while (puVar6[lVar10] != '\0');
    *plVar4 = lVar10;
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 1436c3b00 decodeQuantum body=198 status=ok
// SIG undefined decodeQuantum(void)

longlong decodeQuantum(undefined1 *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  
  uVar6 = 0;
  uVar5 = 0;
  uVar8 = 0;
  do {
    cVar1 = *param_2;
    iVar7 = 0;
    if (cVar1 == '=') {
      uVar5 = uVar5 << 6;
      uVar6 = uVar6 + 1;
    }
    else {
      pcVar4 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
      cVar2 = 'A';
      do {
        if (cVar2 == cVar1) break;
        cVar2 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
        iVar7 = iVar7 + 1;
      } while (cVar2 != '\0');
      if (*pcVar4 != cVar1) {
        return 0;
      }
      uVar5 = uVar5 * 0x40 + iVar7;
    }
    uVar8 = uVar8 + 1;
    param_2 = param_2 + 1;
    if (3 < uVar8) {
      if (uVar6 == 0) {
        uVar3 = curlx_ultouc(uVar5 & 0xff);
        param_1[2] = uVar3;
      }
      if (uVar6 < 2) {
        uVar3 = curlx_ultouc(uVar5 >> 8 & 0xff);
        param_1[1] = uVar3;
      }
      uVar3 = curlx_ultouc(uVar5 >> 0x10 & 0xff);
      *param_1 = uVar3;
      return 3 - uVar6;
    }
  } while( true );
}



// FUNCTION 1436c3bd0 imap_do body=62 status=ok
// SIG undefined imap_do(void)

void imap_do(undefined8 param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  iVar1 = FUN_1436c4a20();
  if (iVar1 == 0) {
    iVar1 = FUN_1436c4870(param_1);
    if (iVar1 == 0) {
      FUN_1436c5470(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1436c3c10 FUN_1436c3c10 body=332 status=ok
// SIG undefined FUN_1436c3c10(void)

int FUN_1436c3c10(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  lVar2 = *param_1;
  puVar3 = *(undefined4 **)(lVar2 + 0x198);
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0;
    if (((*(char *)(lVar2 + 0x471) == '\0') && (param_2 = 0, *(longlong *)(puVar3 + 0xe) == 0)) &&
       ((*(longlong *)(puVar3 + 6) != 0 || (*(char *)(lVar2 + 0x450) != '\0')))) {
      if (*(char *)(lVar2 + 0x450) == '\0') {
        *(undefined4 *)(param_1 + 0xf0) = 10;
      }
      else {
        param_2 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145af3922);
        if (param_2 != 0) goto LAB_1436c3cd3;
        *(undefined4 *)(param_1 + 0xf0) = 0xc;
      }
      param_2 = 0;
      iVar1 = (int)param_1[0xf0];
      while ((iVar1 != 0 && (param_2 == 0))) {
        param_2 = FUN_1436dba10(param_1 + 0xe3,1);
        iVar1 = (int)param_1[0xf0];
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  }
LAB_1436c3cd3:
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 2));
  *(undefined8 *)(puVar3 + 2) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 4));
  *(undefined8 *)(puVar3 + 4) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 6));
  *(undefined8 *)(puVar3 + 6) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 8));
  *(undefined8 *)(puVar3 + 8) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 10));
  *(undefined8 *)(puVar3 + 10) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 0xc));
  *(undefined8 *)(puVar3 + 0xc) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 0xe));
  *(undefined8 *)(puVar3 + 0xe) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar3 + 0x10));
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = 0;
  return param_2;
}



// FUNCTION 1436c3d60 FUN_1436c3d60 body=235 status=ok
// SIG undefined FUN_1436c3d60(void)

ulonglong FUN_1436c3d60(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  *(code **)(param_1 + 0x770) = FUN_1436c5c20;
  *(longlong *)(param_1 + 0x768) = param_1;
  *(code **)(param_1 + 0x778) = FUN_1436c4300;
  *(undefined4 *)(param_1 + 0x760) = 1800000;
  *(undefined4 *)(param_1 + 0x7a8) = 0xffffffff;
  Curl_sasl_init(param_1 + 0x788,&PTR_DAT_145b6d550);
  FUN_1436db620(param_1 + 0x718);
  uVar2 = FUN_1436c4930(param_1);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x780) = 1;
    *(undefined2 *)(param_1 + 0x7b0) = 0x2a;
    if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) &&
       (*(char *)(param_1 + 0x784) == '\0')) {
      uVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
      if (uVar1 != 0) {
        return (ulonglong)uVar1;
      }
      if (*(char *)(param_1 + 0x784) == '\0') {
        return 0;
      }
    }
    uVar1 = FUN_1436dba10(param_1 + 0x718,0);
    uVar2 = (ulonglong)uVar1;
    *param_2 = *(int *)(param_1 + 0x780) == 0;
  }
  return uVar2;
}



// FUNCTION 1436c3e50 FUN_1436c3e50 body=175 status=ok
// SIG undefined FUN_1436c3e50(void)

undefined8 FUN_1436c3e50(longlong param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  if (((param_2 == '\0') && (*(longlong *)(param_1 + 0x768) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x768) + 0x3c6) != '\0')) {
    iVar1 = FUN_1436c5520(param_1,"LOGOUT");
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x780) = 0xe;
      iVar1 = *(int *)(param_1 + 0x780);
      iVar2 = 0;
      while ((iVar1 != 0 && (iVar2 == 0))) {
        iVar2 = FUN_1436dba10(param_1 + 0x718,1);
        iVar1 = *(int *)(param_1 + 0x780);
      }
    }
  }
  Curl_pp_disconnect(param_1 + 0x718);
  FUN_1436dbcc0(param_1,*(undefined4 *)(param_1 + 0x79c));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x7b8));
  *(undefined8 *)(param_1 + 0x7b8) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x7c0));
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  return 0;
}



// FUNCTION 1436c3f00 FUN_1436c3f00 body=99 status=ok
// SIG undefined FUN_1436c3f00(void)

void FUN_1436c3f00(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) &&
     (*(char *)(param_1 + 0x784) == '\0')) {
    iVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
    if (iVar1 != 0) {
      return;
    }
    if (*(char *)(param_1 + 0x784) == '\0') {
      return;
    }
  }
  FUN_1436dba10(param_1 + 0x718,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x780) == 0;
  return;
}



// FUNCTION 1436c3f80 FUN_1436c3f80 body=193 status=ok
// SIG undefined FUN_1436c3f80(void)

ulonglong FUN_1436c3f80(longlong *param_1,char *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(param_1[0x7d] + 0x78) & 1) != 0) && (*(char *)((longlong)param_1 + 0x784) == '\0')
     ) {
    uVar2 = FUN_1436ad470(param_1,0,(longlong)param_1 + 0x784);
    uVar1 = (uint)uVar2;
    if ((uVar1 != 0) || (*(char *)((longlong)param_1 + 0x784) == (char)uVar2)) goto LAB_1436c3fec;
  }
  uVar1 = FUN_1436dba10(param_1 + 0xe3,0);
  uVar2 = (ulonglong)uVar1;
  *param_2 = (int)param_1[0xf0] == 0;
LAB_1436c3fec:
  if (((uVar1 == 0) && (*param_2 != '\0')) && (uVar2 = 0, **(int **)(*param_1 + 0x198) != 0)) {
    FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return uVar2;
}



// FUNCTION 1436c4050 FUN_1436c4050 body=159 status=ok
// SIG undefined FUN_1436c4050(void)

undefined8 FUN_1436c4050(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = (*(code *)PTR_calloc_1467dcc78)(0x48);
  *(longlong *)(lVar1 + 0x198) = lVar2;
  if (lVar2 == 0) {
    return 0x1b;
  }
  *(undefined1 *)(param_1 + 0x77) = 0;
  if ((*(char *)((longlong)param_1 + 0x3be) != '\0') && (*(char *)(lVar1 + 0x442) == '\0')) {
    ppuVar3 = &PTR_DAT_145b6d450;
    if ((undefined **)param_1[0x7d] != &PTR_DAT_145b6d350) {
      ppuVar3 = &PTR_s_IMAPS_145b6d4d0;
    }
    param_1[0x7d] = (longlong)ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x0001436c40d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)ppuVar3[1])(param_1);
    return uVar4;
  }
  *(longlong *)(lVar1 + 0x89d8) = *(longlong *)(lVar1 + 0x89d8) + 1;
  return 0;
}



// FUNCTION 1436c41b0 imap_atom body=332 status=ok
// SIG undefined imap_atom(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * imap_atom(char *param_1,char param_2)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  char *pcVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_38 [32];
  char local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_38;
  lVar7 = 0;
  bVar2 = false;
  builtin_strncpy(local_18,"(){ %*]",8);
  if (param_1 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    cVar1 = *param_1;
    pcVar4 = param_1;
    lVar8 = lVar7;
    if (cVar1 != '\0') {
      do {
        if (cVar1 == '\\') {
          lVar7 = lVar7 + 1;
        }
        else if (cVar1 == '\"') {
          lVar8 = lVar8 + 1;
        }
        else if (param_2 == '\0') {
          pcVar6 = local_18;
          do {
            if (bVar2) break;
            if (cVar1 == *pcVar6) {
              bVar2 = true;
            }
            pcVar6 = pcVar6 + 1;
          } while (*pcVar6 != '\0');
        }
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      if (((lVar7 != 0) || (lVar8 != 0)) || (bVar2)) {
        lVar5 = -1;
        do {
          lVar3 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (param_1[lVar3] != '\0');
        lVar7 = (ulonglong)(-(uint)bVar2 & 2) + lVar8 + lVar5 + lVar7;
        pcVar4 = (char *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(lVar7 + 1);
        if (pcVar4 == (char *)0x0) {
          return (char *)0x0;
        }
        pcVar6 = pcVar4;
        if (bVar2) {
          *pcVar4 = '\"';
          pcVar6 = pcVar4 + 1;
          pcVar4[lVar7 + -1] = '\"';
        }
        cVar1 = *param_1;
        while (cVar1 != '\0') {
          if ((*param_1 == '\\') || (*param_1 == '\"')) {
            *pcVar6 = '\\';
            pcVar6 = pcVar6 + 1;
          }
          cVar1 = *param_1;
          param_1 = param_1 + 1;
          *pcVar6 = cVar1;
          pcVar6 = pcVar6 + 1;
          cVar1 = *param_1;
        }
        pcVar4[lVar7] = '\0';
        return pcVar4;
      }
    }
    pcVar4 = (char *)(*(code *)PTR__strdup_1467dcc70)(param_1);
  }
  return pcVar4;
}



// FUNCTION 1436c4300 FUN_1436c4300 body=1038 status=ok
// SIG undefined FUN_1436c4300(void)

undefined8 FUN_1436c4300(longlong *param_1,short *param_2,ulonglong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  size_t _Size;
  longlong lVar8;
  char *pcVar9;
  size_t sVar7;
  
  lVar3 = *param_1;
  lVar6 = *(longlong *)(lVar3 + 0x198);
  _Size = 0xffffffffffffffff;
  do {
    sVar7 = _Size;
    _Size = sVar7 + 1;
  } while (*(char *)((longlong)(param_1 + 0xf6) + _Size) != '\0');
  if (((sVar7 + 2 <= param_3) &&
      (iVar2 = _guard_xfg_dispatch_icall_nop(param_1 + 0xf6,param_2,_Size), iVar2 == 0)) &&
     (*(char *)(_Size + (longlong)param_2) == ' ')) {
    param_3 = param_3 + (-1 - _Size);
    if (1 < param_3) {
      if (*(short *)((longlong)param_2 + sVar7 + 2) == 0x4b4f) {
        *param_4 = 0x4f;
        return 0x4b01;
      }
      if (*(short *)((longlong)param_2 + sVar7 + 2) == 0x4f4e) {
        *param_4 = 0x4e;
        return 0x4f01;
      }
    }
    if (((2 < param_3) && (*(short *)((longlong)param_2 + sVar7 + 2) == 0x4142)) &&
       (*(char *)((longlong)param_2 + sVar7 + 4) == 'D')) {
      *param_4 = 0x42;
      return 1;
    }
    FUN_1436b5820(lVar3,"Bad tagged response");
    *param_4 = 0xffffffff;
    return 1;
  }
  if ((param_3 < 2) || (*param_2 != 0x202a)) {
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x38) == 0)) {
      if (param_3 == 3) {
        if ((char)*param_2 == '+') goto LAB_1436c46d0;
      }
      else if (param_3 < 2) {
        return 0;
      }
      if (*param_2 == 0x202b) {
LAB_1436c46d0:
        if (((int)param_1[0xf0] != 5) && ((int)param_1[0xf0] != 0xb)) {
          FUN_1436b5820(lVar3,"Unexpected continuation response");
          *param_4 = 0xffffffff;
          return 1;
        }
        *param_4 = 0x2b;
        return 1;
      }
    }
  }
  else {
    iVar2 = (int)param_1[0xf0];
    if (iVar2 == 2) {
      cVar1 = imap_matchresp(param_2,param_3,"CAPABILITY");
    }
    else {
      if (iVar2 == 7) {
        if ((*(longlong *)(lVar6 + 0x38) == 0) &&
           (cVar1 = imap_matchresp(param_2,param_3,&DAT_145b6d5bc), cVar1 == '\0')) {
          return 0;
        }
        if ((*(longlong *)(lVar6 + 0x38) != 0) &&
           (cVar1 = imap_matchresp(param_2,param_3), cVar1 == '\0')) {
          lVar8 = 0;
          lVar3 = lVar8;
          do {
            lVar4 = lVar3 + 1;
            if (*(char *)(*(longlong *)(lVar6 + 0x38) + lVar3) != "STORE"[lVar3])
            goto LAB_1436c450e;
            lVar3 = lVar4;
          } while (lVar4 != 6);
          cVar1 = imap_matchresp(param_2,param_3,"FETCH");
          if (cVar1 == '\0') {
LAB_1436c450e:
            lVar3 = *(longlong *)(lVar6 + 0x38);
            lVar6 = lVar8;
            while (lVar5 = lVar6 + 1, lVar4 = lVar8, *(char *)(lVar3 + lVar6) == "SELECT"[lVar6]) {
              lVar6 = lVar5;
              if (lVar5 == 7) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            while (lVar5 = lVar4 + 1, lVar6 = lVar8, *(char *)(lVar3 + lVar4) == "EXAMINE"[lVar4]) {
              lVar4 = lVar5;
              if (lVar5 == 8) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            while (lVar5 = lVar6 + 1, lVar4 = lVar8, *(char *)(lVar3 + lVar6) == "SEARCH"[lVar6]) {
              lVar6 = lVar5;
              if (lVar5 == 7) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            while (lVar5 = lVar4 + 1, lVar6 = lVar8, *(char *)(lVar3 + lVar4) == "EXPUNGE"[lVar4]) {
              lVar4 = lVar5;
              if (lVar5 == 8) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            while (lVar5 = lVar6 + 1, lVar4 = lVar8,
                  *(char *)(lVar3 + lVar6) == (&DAT_145b6d5f0)[lVar6]) {
              lVar6 = lVar5;
              if (lVar5 == 5) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            while (lVar6 = lVar4 + 1, *(char *)(lVar3 + lVar4) == (&DAT_145b6d5f8)[lVar4]) {
              lVar4 = lVar6;
              if (lVar6 == 4) {
                *param_4 = 0x2a;
                return 1;
              }
            }
            do {
              lVar6 = lVar8 + 1;
              if (*(char *)(lVar3 + lVar8) != (&DAT_145b6d5fc)[lVar8]) {
                return 0;
              }
              lVar8 = lVar6;
            } while (lVar6 != 5);
            *param_4 = 0x2a;
            return 1;
          }
        }
        goto LAB_1436c4680;
      }
      if (iVar2 == 8) goto LAB_1436c4680;
      if (iVar2 == 9) {
        pcVar9 = "FETCH";
      }
      else {
        if (iVar2 != 0xd) {
          return 0;
        }
        pcVar9 = "SEARCH";
      }
      cVar1 = imap_matchresp(param_2,param_3,pcVar9);
    }
    if (cVar1 != '\0') {
LAB_1436c4680:
      *param_4 = 0x2a;
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1436c4710 FUN_1436c4710 body=46 status=ok
// SIG undefined FUN_1436c4710(void)

undefined4 FUN_1436c4710(char param_1)

{
  switch(param_1 + -0x21) {
  case 0:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
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
  case 0x1c:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3e:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5d:
    return 1;
  default:
    return 0;
  }
}



// FUNCTION 1436c47b0 imap_matchresp body=185 status=ok
// SIG undefined imap_matchresp(void)

undefined8 imap_matchresp(longlong param_1,longlong param_2,longlong param_3)

{
  byte *pbVar1;
  int iVar2;
  undefined8 uVar3;
  byte *pbVar4;
  byte *pbVar5;
  longlong lVar6;
  
  pbVar1 = (byte *)(param_1 + param_2);
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (*(char *)(param_3 + lVar6) != '\0');
  pbVar4 = (byte *)(param_1 + 2);
  if ((pbVar4 < pbVar1) && (iVar2 = isdigit((uint)*pbVar4), iVar2 != 0)) {
    do {
      pbVar5 = pbVar4;
      pbVar4 = pbVar5 + 1;
      if (pbVar1 <= pbVar4) break;
      iVar2 = isdigit((uint)*pbVar4);
    } while (iVar2 != 0);
    if ((pbVar4 == pbVar1) || (*pbVar4 != 0x20)) {
      return 0;
    }
    pbVar4 = pbVar5 + 2;
  }
  pbVar5 = pbVar4 + lVar6;
  if (((pbVar1 < pbVar5) || (iVar2 = Curl_raw_nequal(pbVar4,param_3,lVar6), iVar2 == 0)) ||
     ((*pbVar5 != 0x20 && (pbVar5 + 2 != pbVar1)))) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1436c4870 FUN_1436c4870 body=178 status=ok
// SIG undefined FUN_1436c4870(void)

ulonglong FUN_1436c4870(longlong *param_1)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  char *pcVar7;
  ulonglong uVar8;
  
  lVar3 = *param_1;
  lVar4 = *(longlong *)(lVar3 + 0x198);
  if (*(longlong *)(lVar3 + 0x4a8) == 0) {
    return 0;
  }
  uVar5 = Curl_urldecode(lVar3,*(longlong *)(lVar3 + 0x4a8),0,lVar4 + 0x38,0,1);
  uVar8 = uVar5 & 0xffffffff;
  if ((int)uVar5 == 0) {
    pcVar7 = *(char **)(lVar4 + 0x38);
    cVar2 = *pcVar7;
    while (uVar5 = uVar8, cVar2 != '\0') {
      if (cVar2 == ' ') {
        if (*pcVar7 == '\0') {
          return uVar8;
        }
        uVar6 = (*(code *)PTR__strdup_1467dcc70)(pcVar7);
        *(undefined8 *)(lVar4 + 0x40) = uVar6;
        *pcVar7 = '\0';
        if (*(longlong *)(lVar4 + 0x40) == 0) {
          uVar8 = 0x1b;
        }
        return uVar8;
      }
      pcVar1 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar2 = *pcVar1;
    }
  }
  return uVar5;
}



// FUNCTION 1436c4930 FUN_1436c4930 body=237 status=ok
// SIG undefined FUN_1436c4930(void)

int FUN_1436c4930(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar6 = *(char **)(param_1 + 400);
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x7a0) = 1;
  do {
    if ((pcVar6 == (char *)0x0) || (cVar3 = *pcVar6, pcVar7 = pcVar6, cVar3 == '\0')) break;
    do {
      if (cVar3 == '=') break;
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    } while (cVar3 != '\0');
    pcVar1 = pcVar7 + 1;
    cVar3 = *pcVar7;
    while ((cVar3 != '\0' && (cVar3 != ';'))) {
      pcVar2 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar3 = *pcVar2;
    }
    iVar4 = curl_strnequal(pcVar6,&DAT_145b6d840,5);
    if (iVar4 == 0) {
      iVar4 = 3;
    }
    else {
      iVar4 = Curl_sasl_parse_url_auth_option
                        (param_1 + 0x788,pcVar1,(longlong)pcVar7 - (longlong)pcVar1);
    }
    pcVar6 = pcVar7 + 1;
    if (*pcVar7 != ';') {
      pcVar6 = pcVar7;
    }
  } while (iVar4 == 0);
  if (*(int *)(param_1 + 0x798) != 0) {
    uVar5 = 0xffffffff;
    if (*(int *)(param_1 + 0x798) != -0x21) {
      uVar5 = 2;
    }
    *(undefined4 *)(param_1 + 0x7a8) = uVar5;
    return iVar4;
  }
  *(undefined4 *)(param_1 + 0x7a8) = 0;
  return iVar4;
}



// FUNCTION 1436c4a20 FUN_1436c4a20 body=805 status=ok
// SIG undefined FUN_1436c4a20(void)

ulonglong FUN_1436c4a20(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  longlong local_res8;
  undefined8 local_res10;
  longlong local_res18 [2];
  
  lVar1 = *param_1;
  pcVar7 = *(char **)(lVar1 + 0x89d8);
  lVar2 = *(longlong *)(lVar1 + 0x198);
  pcVar8 = pcVar7;
  cVar3 = FUN_1436c4710(*pcVar7);
  if (cVar3 != '\0') {
    do {
      pcVar10 = pcVar7;
      pcVar7 = pcVar10 + 1;
      cVar3 = FUN_1436c4710(pcVar10[1]);
    } while (cVar3 != '\0');
    if (pcVar7 != pcVar8) {
      pcVar9 = pcVar7;
      if ((pcVar8 < pcVar7) && (*pcVar10 == '/')) {
        pcVar9 = pcVar10;
      }
      uVar6 = Curl_urldecode(lVar1,pcVar8,(longlong)pcVar9 - (longlong)pcVar8,lVar2 + 8,0,1);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
      goto LAB_1436c4ab7;
    }
  }
  *(undefined8 *)(lVar2 + 8) = 0;
LAB_1436c4ab7:
  cVar3 = *pcVar7;
  while( true ) {
    if (cVar3 != ';') {
      if (((*(longlong *)(lVar2 + 8) != 0) && (*(longlong *)(lVar2 + 0x18) == 0)) &&
         (*pcVar7 == '?')) {
        pcVar8 = pcVar7 + 1;
        pcVar7 = pcVar7 + 1;
        pcVar10 = pcVar7;
        cVar3 = FUN_1436c4710(*pcVar8);
        while (cVar3 != '\0') {
          pcVar8 = pcVar7 + 1;
          pcVar7 = pcVar7 + 1;
          cVar3 = FUN_1436c4710(*pcVar8);
        }
        uVar6 = Curl_urldecode(lVar1,pcVar10,(longlong)pcVar7 - (longlong)pcVar10,lVar2 + 0x30,0,1);
        if ((int)uVar6 != 0) {
          return uVar6;
        }
      }
      return (ulonglong)(-(uint)(*pcVar7 != '\0') & 3);
    }
    cVar3 = pcVar7[1];
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar7;
    if (cVar3 == '\0') {
      return 3;
    }
    while (cVar3 != '=') {
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
      if (cVar3 == '\0') {
        return 3;
      }
    }
    if (*pcVar8 == '\0') break;
    uVar6 = Curl_urldecode(lVar1,pcVar7,(longlong)pcVar8 - (longlong)pcVar7,&local_res10,0,1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    pcVar7 = pcVar8 + 1;
    pcVar10 = pcVar7;
    cVar3 = FUN_1436c4710(pcVar8[1]);
    while (cVar3 != '\0') {
      pcVar8 = pcVar7 + 1;
      pcVar7 = pcVar7 + 1;
      cVar3 = FUN_1436c4710(*pcVar8);
    }
    uVar4 = Curl_urldecode(lVar1,pcVar10,(longlong)pcVar7 - (longlong)pcVar10,&local_res8,
                           local_res18,1);
    if (uVar4 != 0) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res10);
      return (ulonglong)uVar4;
    }
    iVar5 = Curl_strcasecompare(local_res10,"UIDVALIDITY");
    if ((iVar5 == 0) || (*(longlong *)(lVar2 + 0x10) != 0)) {
      iVar5 = Curl_strcasecompare(local_res10,&DAT_145b6d5f8);
      if ((iVar5 == 0) || (*(longlong *)(lVar2 + 0x18) != 0)) {
        iVar5 = Curl_strcasecompare(local_res10,"SECTION");
        if ((iVar5 == 0) || (*(longlong *)(lVar2 + 0x20) != 0)) {
          iVar5 = Curl_strcasecompare(local_res10,"PARTIAL");
          if ((iVar5 == 0) || (*(longlong *)(lVar2 + 0x28) != 0)) {
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res10);
            (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
            return 3;
          }
          if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
            *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
          }
          *(longlong *)(lVar2 + 0x28) = local_res8;
        }
        else {
          if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
            *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
          }
          *(longlong *)(lVar2 + 0x20) = local_res8;
        }
      }
      else {
        if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
          *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
        }
        *(longlong *)(lVar2 + 0x18) = local_res8;
      }
    }
    else {
      if ((local_res18[0] != 0) && (*(char *)(local_res8 + -1 + local_res18[0]) == '/')) {
        *(undefined1 *)(local_res8 + -1 + local_res18[0]) = 0;
      }
      *(longlong *)(lVar2 + 0x10) = local_res8;
    }
    local_res8 = 0;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res10);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
    cVar3 = *pcVar7;
  }
  return 3;
}



// FUNCTION 1436c4d50 FUN_1436c4d50 body=423 status=ok
// SIG undefined FUN_1436c4d50(void)

ulonglong FUN_1436c4d50(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  char cVar1;
  char cVar2;
  undefined4 *puVar3;
  char *pcVar4;
  bool bVar5;
  uint uVar6;
  char *pcVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  bVar5 = false;
  puVar3 = *(undefined4 **)(*param_1 + 0x198);
  if (*(char *)(*param_1 + 0x44f) != '\0') {
    *puVar3 = 1;
  }
  *param_3 = 0;
  pcVar4 = *(char **)(puVar3 + 2);
  if ((pcVar4 != (char *)0x0) && (param_1[0xf7] != 0)) {
    pcVar7 = pcVar4;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[param_1[0xf7] - (longlong)pcVar4];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) {
      pcVar7 = *(char **)(puVar3 + 4);
      if ((pcVar7 != (char *)0x0) && (param_1[0xf8] != 0)) {
        lVar9 = param_1[0xf8] - (longlong)pcVar7;
        do {
          cVar1 = *pcVar7;
          cVar2 = pcVar7[lVar9];
          if (cVar1 != cVar2) break;
          pcVar7 = pcVar7 + 1;
        } while (cVar2 != '\0');
        if (cVar1 != cVar2) goto LAB_1436c4dfa;
      }
      bVar5 = true;
    }
  }
LAB_1436c4dfa:
  if (*(char *)(*param_1 + 0x450) == '\0') {
    lVar9 = *(longlong *)(puVar3 + 0xe);
    if (lVar9 == 0) {
LAB_1436c4e28:
      if ((bVar5) && (*(longlong *)(puVar3 + 6) != 0)) {
        uVar8 = FUN_1436c5090(param_1);
      }
      else {
        if ((lVar9 != 0) || ((!bVar5 || (*(longlong *)(puVar3 + 0xc) == 0)))) goto LAB_1436c4e58;
        uVar8 = FUN_1436c52b0(param_1);
      }
    }
    else {
      if ((!bVar5) && (pcVar4 != (char *)0x0)) {
        if (lVar9 == 0) goto LAB_1436c4e28;
LAB_1436c4e58:
        if (((pcVar4 != (char *)0x0) && (!bVar5)) &&
           ((lVar9 != 0 || ((*(longlong *)(puVar3 + 6) != 0 || (*(longlong *)(puVar3 + 0xc) != 0))))
           )) {
          uVar8 = FUN_1436c5310(param_1);
          goto LAB_1436c4e85;
        }
      }
      uVar8 = FUN_1436c5120(param_1);
    }
  }
  else {
    uVar8 = FUN_1436c4f00(param_1);
  }
LAB_1436c4e85:
  if ((int)uVar8 != 0) {
    return uVar8;
  }
  if (((*(byte *)(param_1[0x7d] + 0x78) & 1) != 0) && (*(char *)((longlong)param_1 + 0x784) == '\0')
     ) {
    uVar6 = FUN_1436ad470(param_1,0,(longlong)param_1 + 0x784);
    uVar8 = (ulonglong)uVar6;
    if ((uVar6 != 0) || (*(char *)((longlong)param_1 + 0x784) == '\0')) goto LAB_1436c4ed0;
  }
  uVar6 = FUN_1436dba10(param_1 + 0xe3,0);
  uVar8 = (ulonglong)uVar6;
  *param_3 = (int)param_1[0xf0] == 0;
LAB_1436c4ed0:
  *param_2 = *(undefined1 *)((longlong)param_1 + 0x3c4);
  return uVar8;
}



// FUNCTION 1436c4f00 FUN_1436c4f00 body=197 status=ok
// SIG undefined FUN_1436c4f00(void)

int FUN_1436c4f00(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  
  lVar3 = *param_1;
  lVar1 = *(longlong *)(*(longlong *)(lVar3 + 0x198) + 8);
  if (lVar1 == 0) {
    FUN_1436b5820(lVar3,"Cannot APPEND without a mailbox.");
    return 3;
  }
  if (*(longlong *)(lVar3 + 0x8a08) < 0) {
    FUN_1436b5820(lVar3,"Cannot APPEND with unknown input file size\n");
    return 0x19;
  }
  lVar3 = imap_atom(lVar1,0);
  if (lVar3 == 0) {
    return 0x1b;
  }
  iVar2 = FUN_1436c5520(param_1,"APPEND %s (\\Seen) {%I64d}",lVar3,
                        *(undefined8 *)(*param_1 + 0x8a08));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0xb;
  }
  return iVar2;
}



// FUNCTION 1436c4fd0 FUN_1436c4fd0 body=183 status=ok
// SIG undefined FUN_1436c4fd0(void)

undefined8 FUN_1436c4fd0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  cVar1 = FUN_1436dbca0(param_1 + 0xf1,param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return 0;
  }
  uVar2 = FUN_1436dc3b0(param_1 + 0xf1,param_1,*(undefined1 *)((longlong)param_1 + 0x7b7),local_res8
                       );
  if ((int)uVar2 == 0) {
    if (local_res8[0] == 1) {
      *(undefined4 *)(param_1 + 0xf0) = 5;
      return uVar2;
    }
    if ((*(char *)((longlong)param_1 + 0x7b6) == '\0') && ((*(byte *)(param_1 + 0xf5) & 1) != 0)) {
      uVar2 = FUN_1436c51f0(param_1);
      return uVar2;
    }
    FUN_1436b58e0(*param_1,"No known authentication mechanisms supported!\n");
    uVar2 = 0x43;
  }
  return uVar2;
}



// FUNCTION 1436c5090 FUN_1436c5090 body=142 status=ok
// SIG undefined FUN_1436c5090(void)

undefined8 FUN_1436c5090(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  lVar2 = *(longlong *)(lVar1 + 0x18);
  if (lVar2 == 0) {
    FUN_1436b5820(*param_1,"Cannot FETCH without a UID.");
    return 3;
  }
  puVar3 = *(undefined1 **)(lVar1 + 0x20);
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    puVar5 = &DAT_145af3922;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    uVar4 = FUN_1436c5520(param_1,"FETCH %s BODY[%s]",lVar2,puVar5);
  }
  else {
    puVar5 = &DAT_145af3922;
    if (puVar3 != (undefined1 *)0x0) {
      puVar5 = puVar3;
    }
    uVar4 = FUN_1436c5520(param_1,"FETCH %s BODY[%s]<%s>",lVar2,puVar5,*(longlong *)(lVar1 + 0x28));
  }
  if ((int)uVar4 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 9;
  }
  return uVar4;
}



// FUNCTION 1436c5120 FUN_1436c5120 body=193 status=ok
// SIG undefined FUN_1436c5120(void)

int FUN_1436c5120(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 *puVar3;
  
  lVar2 = *(longlong *)(*param_1 + 0x198);
  if (*(longlong *)(lVar2 + 0x38) == 0) {
    if (*(longlong *)(lVar2 + 8) == 0) {
      lVar2 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
    }
    else {
      lVar2 = imap_atom(*(longlong *)(lVar2 + 8),1);
    }
    if (lVar2 == 0) {
      return 0x1b;
    }
    iVar1 = FUN_1436c5520(param_1,"LIST \"%s\" *",lVar2);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
  }
  else {
    puVar3 = &DAT_145af3922;
    if (*(undefined1 **)(lVar2 + 0x40) != (undefined1 *)0x0) {
      puVar3 = *(undefined1 **)(lVar2 + 0x40);
    }
    iVar1 = FUN_1436c5520(param_1,&DAT_145b6b588,*(longlong *)(lVar2 + 0x38),puVar3);
  }
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 7;
  }
  return iVar1;
}



// FUNCTION 1436c51f0 FUN_1436c51f0 body=181 status=ok
// SIG undefined FUN_1436c51f0(void)

int FUN_1436c51f0(longlong param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  if (*(char *)(param_1 + 0x3bf) == '\0') {
    *(undefined4 *)(param_1 + 0x780) = 0;
    return 0;
  }
  puVar2 = (undefined1 *)imap_atom(*(undefined8 *)(param_1 + 0x180),0);
  puVar3 = (undefined1 *)imap_atom(*(undefined8 *)(param_1 + 0x188),0);
  puVar5 = &DAT_145af3922;
  if (puVar3 != (undefined1 *)0x0) {
    puVar5 = puVar3;
  }
  puVar4 = &DAT_145af3922;
  if (puVar2 != (undefined1 *)0x0) {
    puVar4 = puVar2;
  }
  iVar1 = FUN_1436c5520(param_1,"LOGIN %s %s",puVar4,puVar5);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar2);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(puVar3);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x780) = 6;
  }
  return iVar1;
}



// FUNCTION 1436c52b0 FUN_1436c52b0 body=86 status=ok
// SIG undefined FUN_1436c52b0(void)

undefined8 FUN_1436c52b0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(*(longlong *)(*param_1 + 0x198) + 0x30) == 0) {
    FUN_1436b5820(*param_1,"Cannot SEARCH without a query string.");
    return 3;
  }
  uVar1 = FUN_1436c5520(param_1,"SEARCH %s");
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 0xd;
  }
  return uVar1;
}



// FUNCTION 1436c5310 FUN_1436c5310 body=208 status=ok
// SIG undefined FUN_1436c5310(void)

int FUN_1436c5310(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*param_1 + 0x198);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf7]);
  param_1[0xf7] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf8]);
  param_1[0xf8] = 0;
  lVar2 = *(longlong *)(lVar2 + 8);
  if (lVar2 == 0) {
    FUN_1436b5820(*param_1,"Cannot SELECT without a mailbox.");
    return 3;
  }
  lVar2 = imap_atom(lVar2,0);
  if (lVar2 == 0) {
    return 0x1b;
  }
  iVar1 = FUN_1436c5520(param_1,"SELECT %s",lVar2);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 8;
  }
  return iVar1;
}



// FUNCTION 1436c53e0 FUN_1436c53e0 body=140 status=ok
// SIG undefined FUN_1436c53e0(void)

void FUN_1436c53e0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x780) != 4) {
      *(undefined4 *)(param_1 + 0x780) = 4;
    }
    if (*(char *)(param_1 + 0x784) != '\0') {
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      *(undefined ***)(param_1 + 1000) = &PTR_s_IMAPS_145b6d3d0;
      *(undefined4 *)(param_1 + 0x794) = 0;
      *(undefined4 *)(param_1 + 0x79c) = 0;
      *(undefined1 *)(param_1 + 0x7b5) = 0;
      iVar1 = FUN_1436c5520(param_1,"CAPABILITY");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x780) = 2;
      }
    }
  }
  return;
}



// FUNCTION 1436c5470 FUN_1436c5470 body=173 status=ok
// SIG undefined FUN_1436c5470(void)

undefined8 FUN_1436c5470(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x90) = 0xffffffffffffffff;
  FUN_1436bedc0(lVar1,0);
  FUN_1436bed80(lVar1,0);
  FUN_1436bedd0(lVar1,0xffffffffffffffff);
  FUN_1436bed90(lVar1,0xffffffffffffffff);
  uVar2 = FUN_1436c4d50(param_1,local_res8,param_2);
  if ((((int)uVar2 == 0) && (*param_2 != (char)uVar2)) &&
     (uVar2 = 0, **(int **)(*param_1 + 0x198) != 0)) {
    FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return uVar2;
}



// FUNCTION 1436c5520 FUN_1436c5520 body=210 status=ok
// SIG undefined FUN_1436c5520(void)

undefined4 FUN_1436c5520(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_res18;
  undefined8 local_res20;
  
  iVar4 = (*(int *)(param_1 + 0x7ac) + 1) % 1000;
  *(int *)(param_1 + 0x7ac) = iVar4;
  local_res18 = param_3;
  local_res20 = param_4;
  iVar1 = curlx_sltosi(*(int *)(param_1 + 0x4c) % 0x1a);
  curl_msnprintf(param_1 + 0x7b0,5,"%c%03d",iVar1 + 0x41,iVar4);
  lVar3 = curl_maprintf("%s %s",param_1 + 0x7b0,param_2);
  if (lVar3 == 0) {
    return 0x1b;
  }
  uVar2 = FUN_1436dbb50(param_1 + 0x718,lVar3,&local_res18);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
  return uVar2;
}



// FUNCTION 1436c5600 FUN_1436c5600 body=141 status=ok
// SIG undefined FUN_1436c5600(void)

undefined8 FUN_1436c5600(undefined8 *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  uVar2 = *param_1;
  uVar1 = FUN_1436dbcf0(param_1 + 0xf1,param_1,param_2,local_res8);
  if ((int)uVar1 == 0) {
    if (local_res8[0] == 0) {
      if ((*(char *)((longlong)param_1 + 0x7b6) == '\0') && ((*(byte *)(param_1 + 0xf5) & 1) != 0))
      {
        uVar2 = FUN_1436c51f0(param_1);
        return uVar2;
      }
      FUN_1436b5820(uVar2,"Authentication cancelled");
      uVar1 = 0x43;
    }
    else if (local_res8[0] == 2) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      return uVar1;
    }
  }
  return uVar1;
}



// FUNCTION 1436c5690 FUN_1436c5690 body=493 status=ok
// SIG undefined FUN_1436c5690(void)

undefined8 FUN_1436c5690(longlong *param_1,int param_2)

{
  byte bVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  byte *pbVar5;
  ulonglong uVar6;
  ulonglong local_res8;
  
  lVar2 = *param_1;
  if (param_2 != 0x2a) {
    if (((param_2 == 0x4f) && (*(int *)(lVar2 + 0x460) != 0)) && ((char)param_1[0x4b] == '\0')) {
      if (*(char *)((longlong)param_1 + 0x7b5) != '\0') {
        uVar4 = FUN_1436c5520(param_1,"STARTTLS");
        if ((int)uVar4 == 0) {
          *(undefined4 *)(param_1 + 0xf0) = 3;
          return uVar4;
        }
        return uVar4;
      }
      if (*(int *)(lVar2 + 0x460) != 1) {
        FUN_1436b5820(lVar2,"STARTTLS not supported.");
        return 0x40;
      }
    }
    uVar4 = FUN_1436c4fd0(param_1);
    return uVar4;
  }
  pbVar5 = (byte *)(lVar2 + 0x7ea);
LAB_1436c56c5:
  do {
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return 0;
    }
    while ((bVar1 < 0x21 && ((0x100002600U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0))) {
      bVar1 = pbVar5[1];
      pbVar5 = pbVar5 + 1;
      if (bVar1 == 0) {
        return 0;
      }
    }
    bVar1 = *pbVar5;
    if (bVar1 == 0) {
      return 0;
    }
    uVar6 = 0;
    do {
      if ((bVar1 < 0x21) && ((0x100002600U >> ((longlong)(char)bVar1 & 0x3fU) & 1) != 0)) break;
      bVar1 = pbVar5[uVar6 + 1];
      uVar6 = uVar6 + 1;
    } while (bVar1 != 0);
    if (uVar6 == 8) {
      if (*(longlong *)pbVar5 == 0x534c545452415453) {
        *(undefined1 *)((longlong)param_1 + 0x7b5) = 1;
        pbVar5 = pbVar5 + 8;
      }
      else {
LAB_1436c57c5:
        if ((*(int *)pbVar5 == 0x48545541) && (pbVar5[4] == 0x3d)) {
          pbVar5 = pbVar5 + 5;
          uVar6 = uVar6 - 5;
          uVar3 = Curl_sasl_decode_mech(pbVar5,uVar6,&local_res8);
          if ((uVar3 != 0) && (local_res8 == uVar6)) {
            *(uint *)((longlong)param_1 + 0x794) = *(uint *)((longlong)param_1 + 0x794) | uVar3;
          }
        }
LAB_1436c5804:
        pbVar5 = pbVar5 + uVar6;
      }
      goto LAB_1436c56c5;
    }
    if (uVar6 == 0xd) {
      if (((*(longlong *)pbVar5 != 0x5349444e49474f4c) || (*(int *)(pbVar5 + 8) != 0x454c4241)) ||
         (pbVar5[0xc] != 'D')) goto LAB_1436c57c5;
      *(undefined1 *)((longlong)param_1 + 0x7b6) = 1;
      pbVar5 = pbVar5 + 0xd;
    }
    else {
      if (uVar6 != 7) {
        if (5 < uVar6) goto LAB_1436c57c5;
        goto LAB_1436c5804;
      }
      if (((*(int *)pbVar5 != 0x4c534153) || (*(short *)(pbVar5 + 4) != 0x492d)) ||
         (pbVar5[6] != 0x52)) goto LAB_1436c57c5;
      *(undefined1 *)((longlong)param_1 + 0x7b7) = 1;
      pbVar5 = pbVar5 + 7;
    }
  } while( true );
}



// FUNCTION 1436c5880 FUN_1436c5880 body=488 status=ok
// SIG undefined FUN_1436c5880(void)

ulonglong FUN_1436c5880(longlong *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  char *pcVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *local_res8;
  
  lVar3 = *param_1;
  uVar8 = 0;
  pcVar6 = (char *)(lVar3 + 0x7e8);
  if (param_2 != 0x2a) {
    FUN_1436bed90(lVar3,0xffffffffffffffff);
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return 0x4e;
  }
  cVar2 = *pcVar6;
  while (cVar2 != '\0') {
    if (cVar2 == '{') goto LAB_1436c58eb;
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar6 == '{') {
LAB_1436c58eb:
    uVar4 = strtoll(pcVar6 + 1,&local_res8,10);
    if ((((1 < (longlong)local_res8 - (longlong)pcVar6) && (*local_res8 == '}')) &&
        (local_res8[1] == '\r')) && (local_res8[2] == '\0')) {
      FUN_1436b58e0(lVar3,"Found %I64u bytes to download\n",uVar4);
      FUN_1436bed90(lVar3,uVar4);
      if (param_1[0xe3] != 0) {
        uVar7 = param_1[0xe4];
        if (uVar4 < (ulonglong)param_1[0xe4]) {
          uVar7 = uVar4;
        }
        uVar5 = Curl_client_write(param_1,1,param_1[0xe3],uVar7);
        uVar8 = uVar5 & 0xffffffff;
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(longlong *)(lVar3 + 0xb0) = *(longlong *)(lVar3 + 0xb0) + uVar7;
        FUN_1436b58e0(lVar3,"Written %I64u bytes, %I64u bytes are left for transfer\n",uVar7,
                      uVar4 - uVar7);
        if (uVar7 < (ulonglong)param_1[0xe4]) {
          memmove((void *)param_1[0xe3],(void *)(param_1[0xe3] + uVar7),param_1[0xe4] - uVar7);
          param_1[0xe4] = param_1[0xe4] - uVar7;
        }
        else {
          (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)();
          param_1[0xe3] = 0;
          param_1[0xe4] = 0;
        }
      }
      if (*(ulonglong *)(lVar3 + 0xb0) == uVar4) {
        FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
      }
      else {
        *(ulonglong *)(lVar3 + 0xa0) = uVar4;
        FUN_1436b8d40(param_1,0,uVar4,0,0,0xffffffff,0);
      }
      goto LAB_1436c5a45;
    }
  }
  FUN_1436b5820(*(undefined8 *)param_1[0xed],"Failed to parse FETCH response.");
  uVar8 = 8;
LAB_1436c5a45:
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return uVar8;
}



// FUNCTION 1436c5a70 FUN_1436c5a70 body=128 status=ok
// SIG undefined FUN_1436c5a70(void)

undefined8 FUN_1436c5a70(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = -1;
  do {
    lVar4 = lVar2;
    lVar2 = lVar4 + 1;
  } while (*(char *)(lVar1 + 0x7e9 + lVar4) != '\0');
  if (param_2 == 0x2a) {
    *(undefined1 *)(lVar4 + 0x7e9 + lVar1) = 10;
    uVar3 = Curl_client_write(param_1,1,lVar1 + 0x7e8,lVar4 + 2);
    *(undefined1 *)(lVar4 + 0x7e9 + lVar1) = 0;
    return uVar3;
  }
  if (param_2 != 0x4f) {
    return 0x15;
  }
  *(undefined4 *)(param_1 + 0xf0) = 0;
  return 0;
}



// FUNCTION 1436c5af0 FUN_1436c5af0 body=304 status=ok
// SIG undefined FUN_1436c5af0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436c5af0(longlong *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  char *pcVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined1 auStack_48 [32];
  undefined1 local_28 [24];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  lVar5 = *param_1;
  lVar3 = *(longlong *)(lVar5 + 0x198);
  if (param_2 == 0x2a) {
    iVar4 = FUN_143662c40(lVar5 + 0x7ea,"OK [UIDVALIDITY %19[0123456789]]",local_28);
    if (iVar4 == 1) {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf8]);
      param_1[0xf8] = 0;
      lVar5 = (*(code *)PTR__strdup_1467dcc70)(local_28);
      param_1[0xf8] = lVar5;
    }
    uVar7 = 0;
  }
  else if (param_2 == 0x4f) {
    pcVar6 = *(char **)(lVar3 + 0x10);
    if ((pcVar6 != (char *)0x0) && (param_1[0xf8] != 0)) {
      lVar8 = param_1[0xf8] - (longlong)pcVar6;
      do {
        cVar1 = *pcVar6;
        cVar2 = pcVar6[lVar8];
        if (cVar1 != cVar2) break;
        pcVar6 = pcVar6 + 1;
      } while (cVar2 != '\0');
      if (cVar1 != cVar2) {
        FUN_1436b5820(lVar5,"Mailbox UIDVALIDITY has changed");
        return 0x4e;
      }
    }
    lVar5 = (*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar3 + 8));
    param_1[0xf7] = lVar5;
    if (*(longlong *)(lVar3 + 0x38) == 0) {
      if (*(longlong *)(lVar3 + 0x30) == 0) {
        uVar7 = FUN_1436c5090(param_1);
      }
      else {
        uVar7 = FUN_1436c52b0();
      }
    }
    else {
      uVar7 = FUN_1436c5120();
    }
  }
  else {
    FUN_1436b5820(lVar5,"Select failed");
    uVar7 = 0x43;
  }
  return uVar7;
}



// FUNCTION 1436c5c20 FUN_1436c5c20 body=613 status=ok
// SIG undefined FUN_1436c5c20(void)

ulonglong FUN_1436c5c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int local_res8 [2];
  undefined8 local_res10;
  
  lVar2 = param_1[0x3a];
  plVar1 = param_1 + 0xe3;
  local_res10 = 0;
  if ((int)param_1[0xf0] == 4) {
    uVar5 = FUN_1436c53e0();
    return uVar5;
  }
  if (param_1[0xe9] != 0) {
    uVar5 = FUN_1436db570(plVar1);
    return uVar5;
  }
  do {
    uVar5 = FUN_1436db680(lVar2,plVar1,local_res8,&local_res10);
    uVar6 = uVar5 & 0xffffffff;
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    if (local_res8[0] == -1) {
      return 8;
    }
    if (local_res8[0] == 0) {
      return uVar6;
    }
    switch((int)param_1[0xf0]) {
    case 1:
      if (local_res8[0] == 0x4f) {
        *(undefined4 *)((longlong)param_1 + 0x794) = 0;
        *(undefined4 *)((longlong)param_1 + 0x79c) = 0;
        *(undefined1 *)((longlong)param_1 + 0x7b5) = 0;
        uVar4 = FUN_1436c5520(param_1,"CAPABILITY");
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0xf0) = 2;
        }
      }
      else {
        FUN_1436b5820(*param_1,"Got unexpected imap-server response");
        uVar6 = 8;
      }
      goto LAB_1436c5e42;
    case 2:
      uVar4 = FUN_1436c5690(param_1);
      break;
    case 3:
      if (local_res8[0] == 0x4f) {
        uVar4 = FUN_1436c53e0(param_1);
      }
      else {
        if (*(int *)(*param_1 + 0x460) != 1) {
          FUN_1436b5820(*param_1,"STARTTLS denied. %c",local_res8[0]);
          uVar6 = 0x40;
          goto LAB_1436c5e42;
        }
        uVar4 = FUN_1436c4fd0(param_1);
      }
      break;
    default:
      *(undefined4 *)(param_1 + 0xf0) = 0;
      goto LAB_1436c5e4f;
    case 5:
      uVar4 = FUN_1436c5600(param_1);
      break;
    case 6:
      if (local_res8[0] == 0x4f) {
LAB_1436c5e20:
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0xf0) = 0;
      }
      else {
        FUN_1436b5820(*param_1,"Access denied. %c",local_res8[0]);
        uVar6 = 0x43;
      }
      goto LAB_1436c5e42;
    case 7:
    case 0xd:
      uVar4 = FUN_1436c5a70(param_1);
      break;
    case 8:
      uVar4 = FUN_1436c5af0(param_1);
      break;
    case 9:
      uVar4 = FUN_1436c5880(param_1);
      break;
    case 10:
      if (local_res8[0] == 0x4f) goto LAB_1436c5e20;
      uVar6 = 8;
      goto LAB_1436c5e42;
    case 0xb:
      if (local_res8[0] == 0x2b) {
        FUN_1436bedd0(*param_1,*(undefined8 *)(*param_1 + 0x8a08));
        FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
        goto LAB_1436c5e20;
      }
      uVar6 = 0x19;
      goto LAB_1436c5e42;
    case 0xc:
      if (local_res8[0] == 0x4f) goto LAB_1436c5e20;
      uVar6 = 0x19;
      goto LAB_1436c5e42;
    }
    uVar6 = (ulonglong)uVar4;
LAB_1436c5e42:
    if ((int)uVar6 != 0) {
      return uVar6;
    }
LAB_1436c5e4f:
    if ((int)param_1[0xf0] == 0) {
      return uVar6;
    }
    cVar3 = Curl_pp_moredata(plVar1);
    if (cVar3 == '\0') {
      return uVar6;
    }
  } while( true );
}



// FUNCTION 1436c5ec0 FUN_1436c5ec0 body=140 status=ok
// SIG undefined FUN_1436c5ec0(void)

void FUN_1436c5ec0(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  lVar1 = *param_1;
  iVar2 = Curl_urldecode(lVar1,*(undefined8 *)(lVar1 + 0x89d8),0,*(longlong *)(lVar1 + 0x198) + 8,0,
                         1);
  if (iVar2 == 0) {
    lVar1 = *param_1;
    if ((*(longlong *)(lVar1 + 0x4a8) != 0) &&
       (iVar2 = Curl_urldecode(lVar1,*(longlong *)(lVar1 + 0x4a8),0,
                               *(longlong *)(lVar1 + 0x198) + 0x10,0,1), iVar2 != 0)) {
      return;
    }
    pop3_regular_transfer(param_1,param_2);
  }
  return;
}



// FUNCTION 1436c5f50 FUN_1436c5f50 body=108 status=ok
// SIG undefined FUN_1436c5f50(void)

int FUN_1436c5f50(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(*param_1 + 0x198);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    iVar2 = param_2;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar1 + 2));
  *(undefined8 *)(puVar1 + 2) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar1 + 4));
  *(undefined8 *)(puVar1 + 4) = 0;
  *puVar1 = 0;
  return iVar2;
}



// FUNCTION 1436c5fc0 FUN_1436c5fc0 body=226 status=ok
// SIG undefined FUN_1436c5fc0(void)

ulonglong FUN_1436c5fc0(longlong param_1,undefined1 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  *(code **)(param_1 + 0x770) = FUN_1436c7070;
  *(longlong *)(param_1 + 0x768) = param_1;
  *(undefined1 **)(param_1 + 0x778) = &LAB_1436c64a0;
  *(undefined4 *)(param_1 + 0x760) = 1800000;
  *(undefined4 *)(param_1 + 0x7bc) = 0xffffffff;
  Curl_sasl_init(param_1 + 0x798,&PTR_DAT_145b6dbb0);
  FUN_1436db620(param_1 + 0x718);
  uVar2 = FUN_1436c6530(param_1);
  if ((int)uVar2 == 0) {
    *(undefined4 *)(param_1 + 0x780) = 1;
    if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) &&
       (*(char *)(param_1 + 0x784) == '\0')) {
      uVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
      if (uVar1 != 0) {
        return (ulonglong)uVar1;
      }
      if (*(char *)(param_1 + 0x784) == '\0') {
        return 0;
      }
    }
    uVar1 = FUN_1436dba10(param_1 + 0x718,0);
    uVar2 = (ulonglong)uVar1;
    *param_2 = *(int *)(param_1 + 0x780) == 0;
  }
  return uVar2;
}



// FUNCTION 1436c60b0 FUN_1436c60b0 body=161 status=ok
// SIG undefined FUN_1436c60b0(void)

undefined8 FUN_1436c60b0(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1 + 0x718;
  if (((param_2 == '\0') && (*(longlong *)(param_1 + 0x768) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x768) + 0x3c6) != '\0')) {
    iVar2 = Curl_pp_sendf(lVar1,&DAT_145afa01c,&DAT_145b6dc50);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x780) = 10;
      iVar2 = *(int *)(param_1 + 0x780);
      iVar3 = 0;
      while ((iVar2 != 0 && (iVar3 == 0))) {
        iVar3 = FUN_1436dba10(lVar1,1);
        iVar2 = *(int *)(param_1 + 0x780);
      }
    }
  }
  Curl_pp_disconnect(lVar1);
  FUN_1436dbcc0(param_1,*(undefined4 *)(param_1 + 0x7ac));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x7c0));
  *(undefined8 *)(param_1 + 0x7c0) = 0;
  return 0;
}



// FUNCTION 1436c6160 FUN_1436c6160 body=115 status=ok
// SIG undefined FUN_1436c6160(void)

ulonglong FUN_1436c6160(longlong param_1,char *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) &&
     (*(char *)(param_1 + 0x784) == '\0')) {
    uVar2 = FUN_1436ad470(param_1,0,param_1 + 0x784);
    uVar1 = (uint)uVar2;
    if ((uVar1 != 0) || (*(char *)(param_1 + 0x784) == (char)uVar2)) goto LAB_1436c61ba;
  }
  uVar1 = FUN_1436dba10(param_1 + 0x718,0);
  uVar2 = (ulonglong)uVar1;
  *param_2 = *(int *)(param_1 + 0x780) == 0;
LAB_1436c61ba:
  if ((uVar1 == 0) && (uVar2 = uVar2 & 0xffffffff, *param_2 != '\0')) {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 1436c61e0 FUN_1436c61e0 body=159 status=ok
// SIG undefined FUN_1436c61e0(void)

undefined8 FUN_1436c61e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  
  lVar1 = *param_1;
  lVar2 = (*(code *)PTR_calloc_1467dcc78)(0x18);
  *(longlong *)(lVar1 + 0x198) = lVar2;
  if (lVar2 == 0) {
    return 0x1b;
  }
  *(undefined1 *)(param_1 + 0x77) = 0;
  if ((*(char *)((longlong)param_1 + 0x3be) != '\0') && (*(char *)(lVar1 + 0x442) == '\0')) {
    ppuVar3 = &PTR_DAT_145b6dab0;
    if ((undefined **)param_1[0x7d] != &PTR_DAT_145b6d9b0) {
      ppuVar3 = &PTR_s_POP3S_145b6db30;
    }
    param_1[0x7d] = (longlong)ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x0001436c6267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)ppuVar3[1])(param_1);
    return uVar4;
  }
  *(longlong *)(lVar1 + 0x89d8) = *(longlong *)(lVar1 + 0x89d8) + 1;
  return 0;
}



// FUNCTION 1436c62b0 FUN_1436c62b0 body=483 status=ok
// SIG undefined FUN_1436c62b0(void)

ulonglong FUN_1436c62b0(longlong *param_1,longlong param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  bVar3 = false;
  lVar2 = *param_1;
  uVar10 = uVar8;
  uVar7 = uVar8;
  if (param_3 != 0) {
    do {
      cVar1 = *(char *)(uVar10 + param_2);
      uVar9 = param_1[0xf1];
      if (cVar1 == '\n') {
        if ((uVar9 == 1) || (uVar9 == 4)) {
          lVar6 = uVar9 + 1;
LAB_1436c63a3:
          param_1[0xf1] = lVar6;
        }
        else {
          param_1[0xf1] = 0;
        }
      }
      else if (cVar1 == '\r') {
        if (uVar9 != 0) {
          lVar6 = 1;
          if (uVar9 == 3) {
            lVar6 = 4;
          }
          goto LAB_1436c63a3;
        }
        param_1[0xf1] = 1;
        if (uVar10 != 0) {
          uVar5 = Curl_client_write(param_1,1,uVar7 + param_2,uVar10 - uVar7);
          uVar8 = uVar5 & 0xffffffff;
          uVar7 = uVar10;
          if ((int)uVar5 != 0) {
            return uVar5;
          }
        }
      }
      else if (cVar1 == '.') {
        if (uVar9 == 2) {
          param_1[0xf1] = 3;
        }
        else {
          param_1[0xf1] = 0;
          if (uVar9 == 3) {
            bVar3 = true;
          }
        }
      }
      else {
        param_1[0xf1] = 0;
      }
      if ((uVar9 != 0) && ((ulonglong)param_1[0xf1] <= uVar9)) {
        do {
          if (param_1[0xf2] == 0) {
            if (uVar9 != 0) {
              if (bVar3) {
                uVar9 = uVar9 - 1;
              }
              uVar7 = Curl_client_write(param_1,1,&DAT_145b6dcd8,uVar9);
              uVar8 = uVar7 & 0xffffffff;
              if ((int)uVar7 != 0) {
                return uVar7;
              }
              bVar3 = false;
              uVar7 = uVar10;
            }
            break;
          }
          param_1[0xf2] = param_1[0xf2] + -1;
          uVar9 = uVar9 - 1;
        } while (uVar9 != 0);
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < param_3);
  }
  if (param_1[0xf1] == 5) {
    uVar8 = Curl_client_write(param_1,1,&DAT_145b6dcd8,2);
    *(uint *)(lVar2 + 0x168) = *(uint *)(lVar2 + 0x168) & 0xfffffffe;
    param_1[0xf1] = 0;
  }
  else if (param_1[0xf1] == 0) {
    if (param_3 - uVar7 != 0) {
      uVar4 = Curl_client_write(param_1,1,uVar7 + param_2,param_3 - uVar7);
      uVar8 = (ulonglong)uVar4;
    }
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



// FUNCTION 1436c6530 FUN_1436c6530 body=318 status=ok
// SIG undefined FUN_1436c6530(void)

int FUN_1436c6530(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar7 = *(char **)(param_1 + 400);
  iVar4 = 0;
  *(undefined1 *)(param_1 + 0x7b0) = 1;
  do {
    if ((pcVar7 == (char *)0x0) || (cVar3 = *pcVar7, pcVar8 = pcVar7, cVar3 == '\0')) break;
    do {
      if (cVar3 == '=') break;
      cVar3 = pcVar8[1];
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    pcVar1 = pcVar8 + 1;
    cVar3 = *pcVar8;
    while ((cVar3 != '\0' && (cVar3 != ';'))) {
      pcVar2 = pcVar8 + 1;
      pcVar8 = pcVar8 + 1;
      cVar3 = *pcVar2;
    }
    iVar4 = curl_strnequal(pcVar7,&DAT_145b6d840,5);
    if (iVar4 == 0) {
      iVar4 = 3;
    }
    else {
      iVar4 = Curl_sasl_parse_url_auth_option
                        (param_1 + 0x798,pcVar1,(longlong)pcVar8 - (longlong)pcVar1);
      if ((iVar4 != 0) &&
         (iVar5 = curl_strnequal(pcVar1,"+APOP",(longlong)pcVar8 - (longlong)pcVar1), iVar5 != 0)) {
        *(undefined4 *)(param_1 + 0x7bc) = 2;
        iVar4 = 0;
        *(undefined4 *)(param_1 + 0x7a8) = 0;
      }
    }
    pcVar7 = pcVar8 + 1;
    if (*pcVar8 != ';') {
      pcVar7 = pcVar8;
    }
  } while (iVar4 == 0);
  if (*(int *)(param_1 + 0x7bc) != 2) {
    if (*(int *)(param_1 + 0x7a8) != 0) {
      uVar6 = 0xffffffff;
      if (*(int *)(param_1 + 0x7a8) != -0x21) {
        uVar6 = 4;
      }
      *(undefined4 *)(param_1 + 0x7bc) = uVar6;
      return iVar4;
    }
    *(undefined4 *)(param_1 + 0x7bc) = 0;
  }
  return iVar4;
}



// FUNCTION 1436c6670 FUN_1436c6670 body=194 status=ok
// SIG undefined FUN_1436c6670(void)

ulonglong FUN_1436c6670(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(char *)(*param_1 + 0x44f) != '\0') {
    **(undefined4 **)(*param_1 + 0x198) = 1;
  }
  *param_3 = 0;
  uVar2 = FUN_1436c69a0();
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (((*(byte *)(param_1[0x7d] + 0x78) & 1) != 0) && (*(char *)((longlong)param_1 + 0x784) == '\0')
     ) {
    uVar1 = FUN_1436ad470(param_1,0,(longlong)param_1 + 0x784);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) || (*(char *)((longlong)param_1 + 0x784) == '\0')) goto LAB_1436c670b;
  }
  uVar1 = FUN_1436dba10(param_1 + 0xe3,0);
  uVar2 = (ulonglong)uVar1;
  *param_3 = (int)param_1[0xf0] == 0;
LAB_1436c670b:
  *param_2 = *(undefined1 *)((longlong)param_1 + 0x3c4);
  return uVar2;
}



// FUNCTION 1436c6740 FUN_1436c6740 body=328 status=ok
// SIG undefined FUN_1436c6740(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1436c6740(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (*(char *)(param_1 + 0x3bf) == '\0') {
    *(undefined4 *)(param_1 + 0x780) = 0;
    uVar3 = 0;
  }
  else {
    lVar2 = Curl_MD5_init(&PTR_FUN_145b6d248);
    if (lVar2 == 0) {
      uVar3 = 0x1b;
    }
    else {
      lVar5 = -1;
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x7c0) + lVar4) != '\0');
      uVar1 = FUN_1436a85f0();
      Curl_MD5_update(lVar2,*(undefined8 *)(param_1 + 0x7c0),uVar1);
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(*(longlong *)(param_1 + 0x188) + lVar5) != '\0');
      uVar1 = FUN_1436a85f0(lVar5);
      Curl_MD5_update(lVar2,*(undefined8 *)(param_1 + 0x188),uVar1);
      Curl_MD5_final(lVar2,local_48);
      uVar6 = 0;
      puVar7 = local_38;
      do {
        curl_msnprintf(puVar7,3,&DAT_145b6dc18,local_48[uVar6]);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      } while (uVar6 < 0x10);
      uVar3 = Curl_pp_sendf(param_1 + 0x718,"APOP %s %s",*(undefined8 *)(param_1 + 0x180),local_38);
      if ((int)uVar3 == 0) {
        *(undefined4 *)(param_1 + 0x780) = 6;
      }
    }
  }
  return uVar3;
}



// FUNCTION 1436c6890 FUN_1436c6890 body=271 status=ok
// SIG undefined FUN_1436c6890(void)

ulonglong FUN_1436c6890(undefined8 *param_1)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int local_res8 [2];
  
  uVar2 = 0;
  local_res8[0] = 0;
  cVar1 = FUN_1436dbca0(param_1 + 0xf3,param_1);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return 0;
  }
  if ((*(uint *)(param_1 + 0xf7) & *(uint *)((longlong)param_1 + 0x7bc) & 4) != 0) {
    uVar2 = FUN_1436dc3b0(param_1 + 0xf3,param_1,0,local_res8);
    if (uVar2 != 0) goto LAB_1436c698d;
    if (local_res8[0] == 1) {
      *(undefined4 *)(param_1 + 0xf0) = 5;
      return 0;
    }
  }
  if (local_res8[0] == 0) {
    uVar2 = *(uint *)(param_1 + 0xf7) & *(uint *)((longlong)param_1 + 0x7bc);
    if ((uVar2 & 2) != 0) {
      uVar3 = FUN_1436c6740(param_1);
      return uVar3;
    }
    if ((uVar2 & 1) != 0) {
      uVar3 = FUN_1436c6af0(param_1);
      return uVar3;
    }
    FUN_1436b58e0(*param_1,"No known authentication mechanisms supported!\n");
    uVar2 = 0x43;
  }
LAB_1436c698d:
  return (ulonglong)uVar2;
}



// FUNCTION 1436c69a0 FUN_1436c69a0 body=165 status=ok
// SIG undefined FUN_1436c69a0(void)

void FUN_1436c69a0(longlong *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  puVar2 = *(undefined4 **)(*param_1 + 0x198);
  cVar1 = **(char **)(puVar2 + 2);
  if ((cVar1 == '\0') || (*(char *)(*param_1 + 0x445) != '\0')) {
    pcVar4 = "LIST";
    if (cVar1 != '\0') {
      *puVar2 = 1;
    }
  }
  else {
    pcVar4 = "RETR";
  }
  pcVar5 = *(char **)(puVar2 + 4);
  if (**(char **)(puVar2 + 2) == '\0') {
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      pcVar5 = pcVar4;
    }
    iVar3 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,pcVar5);
  }
  else {
    if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
      pcVar5 = pcVar4;
    }
    iVar3 = Curl_pp_sendf(param_1 + 0xe3,"%s %s",pcVar5);
  }
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 9;
  }
  return;
}



// FUNCTION 1436c6a50 FUN_1436c6a50 body=155 status=ok
// SIG undefined FUN_1436c6a50(void)

void FUN_1436c6a50(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x780) != 4) {
      *(undefined4 *)(param_1 + 0x780) = 4;
    }
    if (*(char *)(param_1 + 0x784) != '\0') {
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      *(undefined ***)(param_1 + 1000) = &PTR_s_POP3S_145b6da30;
      *(undefined4 *)(param_1 + 0x7a4) = 0;
      *(undefined4 *)(param_1 + 0x7ac) = 0;
      *(undefined1 *)(param_1 + 0x7c8) = 0;
      iVar1 = Curl_pp_sendf(param_1 + 0x718,&DAT_145afa01c,&DAT_145b6dbfc);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0x780) = 2;
      }
    }
  }
  return;
}



// FUNCTION 1436c6af0 FUN_1436c6af0 body=96 status=ok
// SIG undefined FUN_1436c6af0(void)

undefined8 FUN_1436c6af0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  
  if (*(char *)(param_1 + 0x3bf) == '\0') {
    *(undefined4 *)(param_1 + 0x780) = 0;
    return 0;
  }
  puVar2 = &DAT_145af3922;
  if (*(undefined1 **)(param_1 + 0x180) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_1 + 0x180);
  }
  uVar1 = Curl_pp_sendf(param_1 + 0x718,"USER %s",puVar2);
  if ((int)uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x780) = 7;
  }
  return uVar1;
}



// FUNCTION 1436c6b50 pop3_regular_transfer body=122 status=ok
// SIG undefined pop3_regular_transfer(void)

ulonglong pop3_regular_transfer(longlong *param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x90) = 0xffffffffffffffff;
  FUN_1436bedc0(lVar1,0);
  FUN_1436bed80(lVar1,0);
  FUN_1436bedd0(lVar1,0xffffffffffffffff);
  FUN_1436bed90(lVar1,0xffffffffffffffff);
  uVar2 = FUN_1436c6670(param_1,local_res8,param_2);
  if ((int)uVar2 == 0) {
    uVar2 = uVar2 & 0xffffffff;
    if (*param_2 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2;
}



// FUNCTION 1436c6bd0 FUN_1436c6bd0 body=162 status=ok
// SIG undefined FUN_1436c6bd0(void)

undefined8 FUN_1436c6bd0(undefined8 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_res8 [2];
  
  uVar3 = *param_1;
  uVar2 = FUN_1436dbcf0(param_1 + 0xf3,param_1,param_2,local_res8);
  if ((int)uVar2 == 0) {
    if (local_res8[0] == 0) {
      uVar1 = *(uint *)((longlong)param_1 + 0x7bc) & *(uint *)(param_1 + 0xf7);
      if ((uVar1 & 2) != 0) {
        uVar3 = FUN_1436c6740(param_1);
        return uVar3;
      }
      if ((uVar1 & 1) != 0) {
        uVar3 = FUN_1436c6af0(param_1);
        return uVar3;
      }
      FUN_1436b5820(uVar3,"Authentication cancelled");
      uVar2 = 0x43;
    }
    else if (local_res8[0] == 2) {
      *(undefined4 *)(param_1 + 0xf0) = 0;
      return uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1436c6c80 FUN_1436c6c80 body=455 status=ok
// SIG undefined FUN_1436c6c80(void)

int FUN_1436c6c80(longlong *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  byte *pbVar7;
  ulonglong local_res8;
  
  lVar2 = *param_1;
  piVar1 = (int *)(lVar2 + 0x7e8);
  uVar5 = 0xffffffffffffffff;
  do {
    uVar6 = uVar5;
    uVar5 = uVar6 + 1;
  } while (*(char *)((longlong)piVar1 + uVar5) != '\0');
  if (param_2 != 0x2a) {
    if (param_2 == 0x2b) {
      if ((*(int *)(lVar2 + 0x460) != 0) && ((char)param_1[0x4b] == '\0')) {
        if ((char)param_1[0xf9] != '\0') {
          iVar4 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6dc04);
          if (iVar4 != 0) {
            return iVar4;
          }
          *(undefined4 *)(param_1 + 0xf0) = 3;
          return 0;
        }
        if (*(int *)(lVar2 + 0x460) != 1) {
          FUN_1436b5820(lVar2,"STLS not supported.");
          return 0x40;
        }
      }
    }
    else {
      *(uint *)(param_1 + 0xf7) = *(uint *)(param_1 + 0xf7) | 1;
    }
    iVar4 = FUN_1436c6890(param_1);
    return iVar4;
  }
  if (3 < uVar5) {
    if (*piVar1 == 0x534c5453) {
      *(undefined1 *)(param_1 + 0xf9) = 1;
      return 0;
    }
    if (*piVar1 == 0x52455355) {
      *(uint *)(param_1 + 0xf7) = *(uint *)(param_1 + 0xf7) | 1;
      return 0;
    }
  }
  if (uVar5 < 5) {
    return 0;
  }
  if (*piVar1 != 0x4c534153) {
    return 0;
  }
  if (*(char *)(lVar2 + 0x7ec) != ' ') {
    return 0;
  }
  *(uint *)(param_1 + 0xf7) = *(uint *)(param_1 + 0xf7) | 4;
  pbVar7 = (byte *)(lVar2 + 0x7ed);
  uVar6 = uVar6 - 4;
  do {
    if (uVar6 == 0) {
      return 0;
    }
    while ((*pbVar7 < 0x21 && ((0x100002600U >> ((longlong)(char)*pbVar7 & 0x3fU) & 1) != 0))) {
      pbVar7 = pbVar7 + 1;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) {
        return 0;
      }
    }
    uVar5 = 0;
    if (uVar6 != 0) {
      do {
        if ((pbVar7[uVar5] < 0x21) &&
           ((0x100002600U >> ((longlong)(char)pbVar7[uVar5] & 0x3fU) & 1) != 0)) break;
        uVar5 = uVar5 + 1;
      } while (uVar5 < uVar6);
    }
    uVar3 = Curl_sasl_decode_mech(pbVar7,uVar5,&local_res8);
    if ((uVar3 != 0) && (local_res8 == uVar5)) {
      *(uint *)((longlong)param_1 + 0x7a4) = *(uint *)((longlong)param_1 + 0x7a4) | uVar3;
    }
    pbVar7 = pbVar7 + uVar5;
    uVar6 = uVar6 - uVar5;
  } while( true );
}



// FUNCTION 1436c6e50 FUN_1436c6e50 body=212 status=ok
// SIG undefined FUN_1436c6e50(void)

ulonglong FUN_1436c6e50(longlong *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  uVar4 = 0;
  piVar2 = *(int **)(lVar1 + 0x198);
  if (param_2 == 0x2b) {
    param_1[0xf1] = 2;
    param_1[0xf2] = 2;
    uVar3 = uVar4;
    if (*piVar2 == 0) {
      FUN_1436b8d40(param_1,0,0xffffffffffffffff,0,0,0xffffffff,0);
      uVar3 = 0;
      if (param_1[0xe3] != 0) {
        if (*(char *)(lVar1 + 0x44f) == '\0') {
          uVar3 = FUN_1436c62b0(param_1,param_1[0xe3],param_1[0xe4]);
          uVar4 = uVar3 & 0xffffffff;
          if ((int)uVar3 != 0) {
            return uVar3;
          }
        }
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xe3]);
        param_1[0xe3] = 0;
        param_1[0xe4] = 0;
        uVar3 = uVar4;
      }
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    uVar3 = 0x38;
  }
  return uVar3;
}



// FUNCTION 1436c6f30 FUN_1436c6f30 body=309 status=ok
// SIG undefined FUN_1436c6f30(void)

undefined8 FUN_1436c6f30(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  void *_Dst;
  ulonglong uVar3;
  ulonglong uVar4;
  size_t _Size;
  ulonglong uVar5;
  
  lVar1 = *param_1;
  uVar4 = 0xffffffffffffffff;
  do {
    uVar5 = uVar4;
    uVar4 = uVar5 + 1;
  } while (*(char *)(uVar5 + 0x7e9 + lVar1) != '\0');
  if (param_2 == 0x2b) {
    if ((3 < uVar4) && (*(char *)(uVar5 + 0x7e7 + lVar1) == '>')) {
      uVar3 = 3;
      if (3 < uVar5 - 1) {
        do {
          if (*(char *)(uVar3 + 0x7e8 + lVar1) == '<') {
            _Size = (uVar4 - uVar3) - 1;
            if (_Size != 0) {
              _Dst = (void *)(*(code *)PTR_calloc_1467dcc78)(1,uVar4 - uVar3);
              param_1[0xf8] = (longlong)_Dst;
              if (_Dst != (void *)0x0) {
                _guard_xfg_dispatch_icall_nop(_Dst,(void *)(lVar1 + 0x7e8 + uVar3),_Size);
                *(undefined1 *)(_Size + param_1[0xf8]) = 0;
                *(uint *)(param_1 + 0xf7) = *(uint *)(param_1 + 0xf7) | 2;
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (uVar3 < uVar5 - 1);
      }
    }
    *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
    *(undefined4 *)((longlong)param_1 + 0x7ac) = 0;
    *(undefined1 *)(param_1 + 0xf9) = 0;
    uVar2 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6dbfc);
    if ((int)uVar2 == 0) {
      *(undefined4 *)(param_1 + 0xf0) = 2;
    }
  }
  else {
    FUN_1436b5820(lVar1,"Got unexpected pop3-server response");
    uVar2 = 8;
  }
  return uVar2;
}



// FUNCTION 1436c7070 FUN_1436c7070 body=498 status=ok
// SIG undefined FUN_1436c7070(void)

ulonglong FUN_1436c7070(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined1 *puVar7;
  int local_res8 [2];
  undefined8 local_res10;
  
  lVar2 = param_1[0x3a];
  plVar1 = param_1 + 0xe3;
  local_res10 = 0;
  if ((int)param_1[0xf0] == 4) {
    uVar5 = FUN_1436c6a50();
    return uVar5;
  }
  if (param_1[0xe9] != 0) {
    uVar5 = FUN_1436db570(plVar1);
    return uVar5;
  }
  do {
    uVar5 = FUN_1436db680(lVar2,plVar1,local_res8,&local_res10);
    uVar6 = uVar5 & 0xffffffff;
    if (((int)uVar5 != 0) || (uVar5 = uVar6, local_res8[0] == 0)) {
      return uVar5;
    }
    switch((int)param_1[0xf0]) {
    case 1:
      uVar4 = FUN_1436c6f30(param_1);
      break;
    case 2:
      uVar4 = FUN_1436c6c80(param_1);
      break;
    case 3:
      if (local_res8[0] == 0x2b) {
        uVar4 = FUN_1436c6a50(param_1);
      }
      else {
        if (*(int *)(*param_1 + 0x460) != 1) {
          FUN_1436b5820(*param_1,"STARTTLS denied. %c",local_res8[0]);
          uVar6 = 0x40;
          goto LAB_1436c7229;
        }
        uVar4 = FUN_1436c6890(param_1);
      }
      break;
    default:
      *(undefined4 *)(param_1 + 0xf0) = 0;
      goto LAB_1436c7236;
    case 5:
      uVar4 = FUN_1436c6bd0(param_1);
      break;
    case 6:
      if (local_res8[0] == 0x2b) goto LAB_1436c71b8;
      FUN_1436b5820(*param_1,"Authentication failed: %d",local_res8[0]);
      uVar6 = 0x43;
      goto LAB_1436c7229;
    case 7:
      if (local_res8[0] == 0x2b) {
        puVar7 = &DAT_145af3922;
        if ((undefined1 *)param_1[0x31] != (undefined1 *)0x0) {
          puVar7 = (undefined1 *)param_1[0x31];
        }
        uVar4 = Curl_pp_sendf(plVar1,"PASS %s",puVar7);
        uVar6 = (ulonglong)uVar4;
        if (uVar4 == 0) {
          *(undefined4 *)(param_1 + 0xf0) = 8;
        }
      }
      else {
LAB_1436c71c6:
        FUN_1436b5820(*param_1,"Access denied. %c",local_res8[0]);
        uVar6 = 0x43;
      }
      goto LAB_1436c7229;
    case 8:
      if (local_res8[0] != 0x2b) goto LAB_1436c71c6;
LAB_1436c71b8:
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0;
      goto LAB_1436c7229;
    case 9:
      uVar4 = FUN_1436c6e50(param_1);
    }
    uVar6 = (ulonglong)uVar4;
LAB_1436c7229:
    if ((int)uVar6 != 0) {
      return uVar6;
    }
LAB_1436c7236:
    if ((int)param_1[0xf0] == 0) {
      return uVar6;
    }
    cVar3 = Curl_pp_moredata(plVar1);
    if (cVar3 == '\0') {
      return uVar6;
    }
  } while( true );
}



// FUNCTION 1436c7290 FUN_1436c7290 body=93 status=ok
// SIG undefined FUN_1436c7290(void)

void FUN_1436c7290(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  int iVar2;
  
  *param_2 = 0;
  lVar1 = *param_1;
  if ((*(longlong *)(lVar1 + 0x4a8) != 0) &&
     (iVar2 = Curl_urldecode(lVar1,*(longlong *)(lVar1 + 0x4a8),0,*(longlong *)(lVar1 + 0x198) + 8,0
                             ,1), iVar2 != 0)) {
    return;
  }
  FUN_1436c7fd0(param_1,param_2);
  return;
}



// FUNCTION 1436c72f0 FUN_1436c72f0 body=393 status=ok
// SIG undefined FUN_1436c72f0(void)

int FUN_1436c72f0(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_res8;
  
  lVar3 = *param_1;
  puVar1 = *(undefined4 **)(lVar3 + 0x198);
  if ((puVar1 == (undefined4 *)0x0) || (param_1[0xed] == 0)) {
    return 0;
  }
  if (param_2 == 0) {
    param_2 = 0;
    if (((*(char *)(lVar3 + 0x471) == '\0') && (*(char *)(lVar3 + 0x450) != '\0')) &&
       (param_2 = 0, *(longlong *)(lVar3 + 0x600) != 0)) {
      if ((*(char *)(puVar1 + 8) == '\0') && (*(longlong *)(lVar3 + 0x8a08) != 0)) {
        lVar3 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b6dcd8);
        lVar4 = 5;
      }
      else {
        lVar3 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b6dcda);
        lVar4 = 3;
      }
      if (lVar3 == 0) {
        return 0x1b;
      }
      iVar2 = FUN_1436b5de0(param_1,param_1[0x81],lVar3,lVar4,&local_res8);
      if (iVar2 != 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
        return iVar2;
      }
      if (local_res8 == lVar4) {
        lVar4 = curlx_tvnow();
        param_1[0xeb] = lVar4;
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar3);
      }
      else {
        param_1[0xea] = lVar4;
        param_1[0xe9] = lVar4 - local_res8;
        param_1[0xe8] = lVar3;
      }
      param_2 = 0;
      *(undefined4 *)(param_1 + 0xf0) = 0xb;
      iVar2 = (int)param_1[0xf0];
      while ((iVar2 != 0 && (param_2 == 0))) {
        param_2 = FUN_1436dba10(param_1 + 0xe3,1);
        iVar2 = (int)param_1[0xf0];
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(puVar1 + 2));
  *(undefined8 *)(puVar1 + 2) = 0;
  *puVar1 = 0;
  return param_2;
}



// FUNCTION 1436c7480 FUN_1436c7480 body=156 status=ok
// SIG undefined FUN_1436c7480(void)

void FUN_1436c7480(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  *(code **)(param_1 + 0x770) = FUN_1436c84b0;
  *(longlong *)(param_1 + 0x768) = param_1;
  *(code **)(param_1 + 0x778) = FUN_1436c78d0;
  *(undefined4 *)(param_1 + 0x760) = 1800000;
  Curl_sasl_init(param_1 + 0x790,&PTR_DAT_145b6dee0);
  FUN_1436db620(param_1 + 0x718);
  iVar1 = FUN_1436c79b0(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_1436c7a70(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x780) = 1;
      FUN_1436c3f00(param_1,param_2);
    }
  }
  return;
}



// FUNCTION 1436c7520 FUN_1436c7520 body=155 status=ok
// SIG undefined FUN_1436c7520(void)

undefined8 FUN_1436c7520(longlong param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  lVar1 = param_1 + 0x718;
  if (((param_2 == '\0') && (*(longlong *)(param_1 + 0x768) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x768) + 0x3c6) != '\0')) {
    iVar2 = Curl_pp_sendf(lVar1,&DAT_145afa01c,&DAT_145b6dc50);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x780) = 0xc;
      iVar2 = *(int *)(param_1 + 0x780);
      iVar3 = 0;
      while ((iVar2 != 0 && (iVar3 == 0))) {
        iVar3 = FUN_1436dba10(lVar1,1);
        iVar2 = *(int *)(param_1 + 0x780);
      }
    }
  }
  Curl_pp_disconnect(lVar1);
  FUN_1436dbcc0(param_1,*(undefined4 *)(param_1 + 0x7a4));
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x788));
  *(undefined8 *)(param_1 + 0x788) = 0;
  return 0;
}



// FUNCTION 1436c75c0 FUN_1436c75c0 body=134 status=ok
// SIG undefined FUN_1436c75c0(void)

undefined8 FUN_1436c75c0(longlong *param_1)

{
  longlong lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  *(undefined1 *)(param_1 + 0x77) = 0;
  if ((*(char *)((longlong)param_1 + 0x3be) != '\0') && (*(char *)(lVar1 + 0x442) == '\0')) {
    ppuVar2 = &PTR_DAT_145b6dde0;
    if ((undefined **)param_1[0x7d] != &PTR_DAT_145b6dce0) {
      ppuVar2 = &PTR_s_SMTPS_145b6de60;
    }
    param_1[0x7d] = (longlong)ppuVar2;
                    /* WARNING: Could not recover jumptable at 0x0001436c760e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*(code *)ppuVar2[1])();
    return uVar3;
  }
  lVar4 = (*(code *)PTR_calloc_1467dcc78)(0x28);
  *(longlong *)(lVar1 + 0x198) = lVar4;
  if (lVar4 == 0) {
    return 0x1b;
  }
  *(longlong *)(lVar1 + 0x89d8) = *(longlong *)(lVar1 + 0x89d8) + 1;
  return 0;
}



// FUNCTION 1436c76c0 FUN_1436c76c0 body=521 status=ok
// SIG undefined FUN_1436c76c0(void)

undefined4 FUN_1436c76c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  size_t _Size;
  longlong lVar8;
  longlong local_res8;
  longlong local_res18;
  
  lVar2 = *param_1;
  local_res8 = 0;
  local_res18 = 0;
  lVar8 = *(longlong *)(lVar2 + 0x8838);
  lVar3 = *(longlong *)(lVar2 + 0x198);
  if (((lVar8 == 0) || (lVar4 = lVar8, *(char *)(lVar2 + 0x322) != '\0')) &&
     (lVar4 = (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x8000), local_res8 = lVar4,
     local_res18 = lVar8, lVar4 == 0)) {
    FUN_1436b5820(lVar2,"Failed to alloc scratch buffer!");
    return 0x1b;
  }
  lVar5 = 0;
  lVar6 = 0;
  lVar8 = *(longlong *)(lVar3 + 0x18);
  if (0 < param_2) {
    do {
      lVar7 = *(longlong *)(lVar3 + 0x18);
      if ((&DAT_145b6dcd8)[lVar7] == *(char *)(lVar5 + *(longlong *)(lVar2 + 0x188))) {
        lVar7 = lVar7 + 1;
        *(longlong *)(lVar3 + 0x18) = lVar7;
        if ((lVar7 == 2) || (lVar7 == 5)) {
          *(undefined1 *)(lVar3 + 0x20) = 1;
        }
        else {
          *(undefined1 *)(lVar3 + 0x20) = 0;
        }
      }
      else if (lVar7 != 0) {
        _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar4),&DAT_145b6dcd8 + lVar8,lVar7 - lVar8);
        lVar6 = lVar6 + (*(longlong *)(lVar3 + 0x18) - lVar8);
        cVar1 = *(char *)(lVar5 + *(longlong *)(lVar2 + 0x188));
        lVar8 = 0;
        *(undefined1 *)(lVar3 + 0x20) = 0;
        *(ulonglong *)(lVar3 + 0x18) = (ulonglong)(cVar1 == '\r');
      }
      if (*(longlong *)(lVar3 + 0x18) == 3) {
        _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar4),&DAT_145b6e07c + lVar8,4 - lVar8);
        *(undefined8 *)(lVar3 + 0x18) = 0;
        lVar6 = lVar6 + (4 - lVar8);
        lVar8 = 0;
      }
      else if (*(longlong *)(lVar3 + 0x18) == 0) {
        *(undefined1 *)(lVar6 + lVar4) = *(undefined1 *)(lVar5 + *(longlong *)(lVar2 + 0x188));
        lVar6 = lVar6 + 1;
      }
      lVar5 = lVar5 + 1;
    } while (lVar5 < param_2);
  }
  _Size = *(longlong *)(lVar3 + 0x18) - lVar8;
  if (_Size != 0) {
    _guard_xfg_dispatch_icall_nop((void *)(lVar6 + lVar4),&DAT_145b6dcd8 + lVar8,_Size);
    lVar6 = lVar6 + (*(longlong *)(lVar3 + 0x18) - lVar8);
  }
  if (lVar6 == param_2) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res8);
  }
  else {
    *(longlong *)(lVar2 + 0x188) = lVar4;
    *(longlong *)(lVar2 + 0x8838) = lVar4;
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(local_res18);
    *(longlong *)(lVar2 + 0x180) = lVar6;
  }
  return 0;
}



// FUNCTION 1436c78d0 FUN_1436c78d0 body=212 status=ok
// SIG undefined FUN_1436c78d0(void)

ulonglong FUN_1436c78d0(longlong param_1,byte *param_2,ulonglong param_3,int *param_4)

{
  int iVar1;
  ulonglong in_RAX;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  
  if (3 < param_3) {
    iVar1 = isdigit((uint)*param_2);
    in_RAX = CONCAT44(extraout_var,iVar1);
    if (iVar1 != 0) {
      iVar1 = isdigit((uint)param_2[1]);
      in_RAX = CONCAT44(extraout_var_00,iVar1);
      if (iVar1 != 0) {
        iVar1 = isdigit((uint)param_2[2]);
        in_RAX = CONCAT44(extraout_var_01,iVar1);
        if (iVar1 != 0) {
          if ((param_2[3] == 0x20) || (param_3 == 5)) {
            strtol((char *)param_2,(char **)0x0,10);
            iVar1 = curlx_sltosi();
            if (iVar1 == 1) {
              iVar1 = 0;
            }
            *param_4 = iVar1;
            return 1;
          }
          if (param_2[3] != 0x2d) {
            return 0;
          }
          if ((*(int *)(param_1 + 0x780) != 2) && (*(int *)(param_1 + 0x780) != 7)) {
            return 0;
          }
          *param_4 = 1;
          return 1;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1436c79b0 FUN_1436c79b0 body=187 status=ok
// SIG undefined FUN_1436c79b0(void)

int FUN_1436c79b0(longlong param_1)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  
  pcVar5 = *(char **)(param_1 + 400);
  *(undefined1 *)(param_1 + 0x7a8) = 1;
  do {
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
    cVar3 = *pcVar5;
    pcVar6 = pcVar5;
    if (cVar3 == '\0') {
      return 0;
    }
    do {
      if (cVar3 == '=') break;
      cVar3 = pcVar6[1];
      pcVar6 = pcVar6 + 1;
    } while (cVar3 != '\0');
    pcVar1 = pcVar6 + 1;
    cVar3 = *pcVar6;
    while ((cVar3 != '\0' && (cVar3 != ';'))) {
      pcVar2 = pcVar6 + 1;
      pcVar6 = pcVar6 + 1;
      cVar3 = *pcVar2;
    }
    iVar4 = curl_strnequal(pcVar5,&DAT_145b6d840,5);
    if (iVar4 == 0) {
      iVar4 = 3;
    }
    else {
      iVar4 = Curl_sasl_parse_url_auth_option
                        (param_1 + 0x790,pcVar1,(longlong)pcVar6 - (longlong)pcVar1);
    }
    pcVar5 = pcVar6 + 1;
    if (*pcVar6 != ';') {
      pcVar5 = pcVar6;
    }
    if (iVar4 != 0) {
      return iVar4;
    }
  } while( true );
}



// FUNCTION 1436c7a70 FUN_1436c7a70 body=135 status=ok
// SIG undefined FUN_1436c7a70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1436c7a70(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined1 auStack_458 [32];
  undefined8 local_438;
  undefined1 local_430;
  char local_428 [1040];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_458;
  pcVar2 = *(char **)(*param_1 + 0x89d8);
  if (*pcVar2 == '\0') {
    iVar1 = Curl_gethostname(local_428,0x401);
    pcVar2 = local_428;
    if (iVar1 != 0) {
      pcVar2 = "localhost";
    }
  }
  local_430 = 1;
  local_438 = 0;
  Curl_urldecode(*param_1,pcVar2,0,param_1 + 0xf1);
  return;
}



// FUNCTION 1436c7b00 FUN_1436c7b00 body=238 status=ok
// SIG undefined FUN_1436c7b00(void)

ulonglong FUN_1436c7b00(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  longlong lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  lVar1 = *param_1;
  puVar2 = *(undefined4 **)(lVar1 + 0x198);
  if (*(char *)(lVar1 + 0x44f) != '\0') {
    *puVar2 = 1;
  }
  *param_3 = 0;
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(lVar1 + 0x600);
  if ((*(char *)(lVar1 + 0x450) == '\0') || (*(longlong *)(lVar1 + 0x600) == 0)) {
    uVar4 = FUN_1436c7c90(param_1);
  }
  else {
    uVar4 = FUN_1436c7d70(param_1);
  }
  if ((int)uVar4 != 0) {
    return uVar4;
  }
  if (((*(byte *)(param_1[0x7d] + 0x78) & 1) != 0) && (*(char *)((longlong)param_1 + 0x784) == '\0')
     ) {
    uVar3 = FUN_1436ad470(param_1,0,(longlong)param_1 + 0x784);
    uVar4 = (ulonglong)uVar3;
    if ((uVar3 != 0) || (*(char *)((longlong)param_1 + 0x784) == '\0')) goto LAB_1436c7bc7;
  }
  uVar3 = FUN_1436dba10(param_1 + 0xe3,0);
  uVar4 = (ulonglong)uVar3;
  *param_3 = (int)param_1[0xf0] == 0;
LAB_1436c7bc7:
  *param_2 = *(undefined1 *)((longlong)param_1 + 0x3c4);
  return uVar4;
}



// FUNCTION 1436c7bf0 FUN_1436c7bf0 body=150 status=ok
// SIG undefined FUN_1436c7bf0(void)

undefined8 FUN_1436c7bf0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int local_res8 [2];
  
  if ((*(char *)((longlong)param_1 + 0x7b2) == '\0') ||
     (cVar1 = FUN_1436dbca0(param_1 + 0xf2,param_1), cVar1 == '\0')) {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return 0;
  }
  uVar2 = FUN_1436dc3b0(param_1 + 0xf2,param_1,0,local_res8);
  if ((int)uVar2 != 0) {
    return uVar2;
  }
  if (local_res8[0] != 1) {
    FUN_1436b58e0(*param_1,"No known authentication mechanisms supported!\n");
    return 0x43;
  }
  *(undefined4 *)(param_1 + 0xf0) = 6;
  return uVar2;
}



// FUNCTION 1436c7c90 FUN_1436c7c90 body=131 status=ok
// SIG undefined FUN_1436c7c90(void)

void FUN_1436c7c90(longlong *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  char *pcVar3;
  
  puVar1 = *(undefined8 **)(*(longlong *)(*param_1 + 0x198) + 0x10);
  pcVar3 = *(char **)(*(longlong *)(*param_1 + 0x198) + 8);
  if (puVar1 == (undefined8 *)0x0) {
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      pcVar3 = "HELP";
    }
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,pcVar3);
  }
  else {
    if ((pcVar3 == (char *)0x0) || (*pcVar3 == '\0')) {
      pcVar3 = "VRFY";
    }
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,"%s %s",pcVar3,*puVar1);
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 7;
  }
  return;
}



// FUNCTION 1436c7d20 FUN_1436c7d20 body=78 status=ok
// SIG undefined FUN_1436c7d20(void)

void FUN_1436c7d20(longlong param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x79c) = 0;
  *(undefined4 *)(param_1 + 0x7a4) = 0;
  *(undefined1 *)(param_1 + 0x7b0) = 0;
  *(undefined1 *)(param_1 + 0x7b2) = 0;
  iVar1 = Curl_pp_sendf(param_1 + 0x718,"EHLO %s",*(undefined8 *)(param_1 + 0x788));
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x780) = 2;
  }
  return;
}



// FUNCTION 1436c7d70 FUN_1436c7d70 body=413 status=ok
// SIG undefined FUN_1436c7d70(void)

int FUN_1436c7d70(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  
  lVar2 = *param_1;
  lVar6 = 0;
  if (*(char **)(lVar2 + 0x5c8) == (char *)0x0) {
    lVar4 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b6df40);
  }
  else {
    puVar7 = &DAT_145afa01c;
    if (**(char **)(lVar2 + 0x5c8) != '<') {
      puVar7 = &DAT_145b6df44;
    }
    lVar4 = curl_maprintf(puVar7);
  }
  if (lVar4 == 0) {
LAB_1436c7e14:
    iVar3 = 0x1b;
  }
  else {
    lVar5 = lVar6;
    if ((*(char **)(lVar2 + 0x5d0) != (char *)0x0) && (*(int *)((longlong)param_1 + 0x7a4) != 0)) {
      if (**(char **)(lVar2 + 0x5d0) == '\0') {
        lVar5 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b6df40);
      }
      else {
        lVar5 = curl_maprintf(&DAT_145afa01c);
      }
      if (lVar5 == 0) {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
        goto LAB_1436c7e14;
      }
    }
    if (((*(char *)((longlong)param_1 + 0x7b1) == '\0') ||
        (lVar6 = 0, *(longlong *)(*param_1 + 0x8a08) < 1)) ||
       (lVar6 = curl_maprintf("%I64d",*(undefined8 *)(lVar2 + 0x8a08)), lVar6 != 0)) {
      plVar1 = param_1 + 0xe3;
      if (lVar5 == 0) {
        if (lVar6 == 0) {
          iVar3 = Curl_pp_sendf(plVar1,"MAIL FROM:%s",lVar4);
        }
        else {
          iVar3 = Curl_pp_sendf(plVar1,"MAIL FROM:%s SIZE=%s",lVar4,lVar6);
        }
      }
      else if (lVar6 == 0) {
        iVar3 = Curl_pp_sendf(plVar1,"MAIL FROM:%s AUTH=%s",lVar4,lVar5);
      }
      else {
        iVar3 = Curl_pp_sendf(plVar1,"MAIL FROM:%s AUTH=%s SIZE=%s",lVar4,lVar5,lVar6);
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
      if (iVar3 == 0) {
        *(undefined4 *)(param_1 + 0xf0) = 8;
      }
    }
    else {
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
      iVar3 = 0x1b;
    }
  }
  return iVar3;
}



// FUNCTION 1436c7f10 FUN_1436c7f10 body=78 status=ok
// SIG undefined FUN_1436c7f10(void)

void FUN_1436c7f10(longlong *param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = "RCPT TO:%s";
  if (*(char *)**(undefined8 **)(*(longlong *)(*param_1 + 0x198) + 0x10) != '<') {
    pcVar2 = "RCPT TO:<%s>";
  }
  iVar1 = Curl_pp_sendf(param_1 + 0xe3,pcVar2);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 9;
  }
  return;
}



// FUNCTION 1436c7f60 FUN_1436c7f60 body=99 status=ok
// SIG undefined FUN_1436c7f60(void)

void FUN_1436c7f60(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1436ad470(param_1,0,param_1 + 0x784);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 0x780) != 5) {
      *(undefined4 *)(param_1 + 0x780) = 5;
    }
    if (*(char *)(param_1 + 0x784) != '\0') {
      *(undefined1 *)(param_1 + 0x3b8) = 1;
      *(undefined ***)(param_1 + 1000) = &PTR_s_SMTPS_145b6dd60;
      FUN_1436c7d20(param_1);
    }
  }
  return;
}



// FUNCTION 1436c7fd0 FUN_1436c7fd0 body=173 status=ok
// SIG undefined FUN_1436c7fd0(void)

undefined8 FUN_1436c7fd0(longlong *param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  *(undefined8 *)(lVar1 + 0x90) = 0xffffffffffffffff;
  FUN_1436bedc0(lVar1,0);
  FUN_1436bed80(lVar1,0);
  FUN_1436bedd0(lVar1,0xffffffffffffffff);
  FUN_1436bed90(lVar1,0xffffffffffffffff);
  uVar2 = FUN_1436c7b00(param_1,local_res8,param_2);
  if ((((int)uVar2 == 0) && (*param_2 != (char)uVar2)) &&
     (uVar2 = 0, **(int **)(*param_1 + 0x198) != 0)) {
    FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  return uVar2;
}



// FUNCTION 1436c8080 FUN_1436c8080 body=254 status=ok
// SIG undefined FUN_1436c8080(void)

ulonglong FUN_1436c8080(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  lVar3 = *param_1;
  uVar6 = 0;
  lVar4 = *(longlong *)(lVar3 + 0x198);
  lVar2 = lVar3 + 0x7e8;
  lVar1 = -1;
  do {
    lVar7 = lVar1;
    lVar1 = lVar7 + 1;
  } while (*(char *)(lVar7 + 1 + lVar2) != '\0');
  if (*(longlong *)(lVar4 + 0x10) != 0) {
    if (((99 < param_2 - 200U) && (param_2 != 0x229)) && (param_2 != 1)) goto LAB_1436c80f6;
    if (*(longlong *)(lVar4 + 0x10) != 0) goto LAB_1436c810c;
  }
  if ((param_2 - 200U < 100) || (param_2 == 1)) {
LAB_1436c810c:
    if (*(char *)(lVar3 + 0x44f) == '\0') {
      *(undefined1 *)(lVar1 + lVar2) = 10;
      uVar5 = Curl_client_write(param_1,1,lVar2,lVar7 + 2);
      uVar6 = (ulonglong)uVar5;
      *(undefined1 *)(lVar1 + lVar2) = 0;
    }
    if (param_2 == 1) {
      return uVar6;
    }
    if ((*(longlong *)(lVar4 + 0x10) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 8), *(longlong *)(lVar4 + 0x10) = lVar1,
       lVar1 != 0)) {
      uVar6 = FUN_1436c7c90(param_1);
      return uVar6;
    }
    *(undefined4 *)(param_1 + 0xf0) = 0;
    return uVar6;
  }
LAB_1436c80f6:
  FUN_1436b5820(lVar3,"Command failed: %d",param_2);
  return 0x38;
}



// FUNCTION 1436c8180 FUN_1436c8180 body=661 status=ok
// SIG undefined FUN_1436c8180(void)

undefined8 FUN_1436c8180(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  byte *pbVar8;
  ulonglong local_res8;
  
  lVar1 = *param_1;
  lVar2 = -1;
  do {
    lVar6 = lVar2;
    lVar2 = lVar6 + 1;
  } while (*(char *)(lVar1 + 0x7e8 + lVar6 + 1) != '\0');
  if ((param_2 - 200U < 100) || (param_2 == 1)) {
    uVar7 = lVar6 - 3;
    if ((uVar7 < 8) || (*(longlong *)(lVar1 + 0x7ec) != 0x534c545452415453)) {
      if ((uVar7 < 4) || (*(int *)(lVar1 + 0x7ec) != 0x455a4953)) {
        if ((4 < uVar7) &&
           ((*(int *)(lVar1 + 0x7ec) == 0x48545541 && (*(char *)(lVar1 + 0x7f0) == ' ')))) {
          pbVar8 = (byte *)(lVar1 + 0x7f1);
          *(undefined1 *)((longlong)param_1 + 0x7b2) = 1;
          for (uVar7 = lVar6 - 8; uVar7 != 0; uVar7 = uVar7 - uVar5) {
            while ((*pbVar8 < 0x21 && ((0x100002600U >> ((longlong)(char)*pbVar8 & 0x3fU) & 1) != 0)
                   )) {
              pbVar8 = pbVar8 + 1;
              uVar7 = uVar7 - 1;
              if (uVar7 == 0) goto LAB_1436c8301;
            }
            uVar5 = 0;
            if (uVar7 != 0) {
              do {
                if ((pbVar8[uVar5] < 0x21) &&
                   ((0x100002600U >> ((longlong)(char)pbVar8[uVar5] & 0x3fU) & 1) != 0)) break;
                uVar5 = uVar5 + 1;
              } while (uVar5 < uVar7);
            }
            uVar3 = Curl_sasl_decode_mech(pbVar8,uVar5,&local_res8);
            if ((uVar3 != 0) && (local_res8 == uVar5)) {
              *(uint *)((longlong)param_1 + 0x79c) = *(uint *)((longlong)param_1 + 0x79c) | uVar3;
            }
            pbVar8 = pbVar8 + uVar5;
          }
        }
      }
      else {
        *(undefined1 *)((longlong)param_1 + 0x7b1) = 1;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0xf6) = 1;
    }
LAB_1436c8301:
    if (param_2 != 1) {
      if ((*(int *)(lVar1 + 0x460) != 0) && ((char)param_1[0x4b] == '\0')) {
        if ((char)param_1[0xf6] != '\0') {
          uVar4 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,"STARTTLS");
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          *(undefined4 *)(param_1 + 0xf0) = 4;
          return uVar4;
        }
        if (*(int *)(lVar1 + 0x460) != 1) {
          FUN_1436b5820(lVar1,"STARTTLS not supported.");
          return 0x40;
        }
      }
      uVar4 = FUN_1436c7bf0(param_1);
      return uVar4;
    }
    uVar4 = 0;
  }
  else {
    if ((1 < *(int *)(lVar1 + 0x460)) && ((char)param_1[0x4b] == '\0')) {
      FUN_1436b5820(lVar1,"Remote access denied: %d",param_2);
      return 9;
    }
    *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
    uVar4 = Curl_pp_sendf(param_1 + 0xe3,"HELO %s",param_1[0xf1]);
    if ((int)uVar4 == 0) {
      *(undefined4 *)(param_1 + 0xf0) = 3;
      return uVar4;
    }
  }
  return uVar4;
}



// FUNCTION 1436c8420 FUN_1436c8420 body=132 status=ok
// SIG undefined FUN_1436c8420(void)

undefined8 FUN_1436c8420(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  if (99 < param_2 - 200U) {
    FUN_1436b5820(*param_1,"RCPT failed: %d",param_2);
    return 0x37;
  }
  lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x10) + 8);
  *(longlong *)(lVar1 + 0x10) = lVar2;
  if (lVar2 != 0) {
    uVar3 = FUN_1436c7f10(param_1);
    return uVar3;
  }
  uVar3 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b2b288);
  if ((int)uVar3 == 0) {
    *(undefined4 *)(param_1 + 0xf0) = 10;
  }
  return uVar3;
}



// FUNCTION 1436c84b0 FUN_1436c84b0 body=883 status=ok
// SIG undefined FUN_1436c84b0(void)

ulonglong FUN_1436c84b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  
  lVar2 = param_1[0x3a];
  plVar1 = param_1 + 0xe3;
  lVar3 = *param_1;
  local_res18 = 0;
  if ((int)param_1[0xf0] == 5) {
    uVar7 = FUN_1436c7f60();
    return uVar7;
  }
  if (param_1[0xe9] != 0) {
    uVar7 = FUN_1436db570(plVar1);
    return uVar7;
  }
  do {
    uVar8 = FUN_1436db680(lVar2,plVar1,local_res8,&local_res18);
    uVar7 = uVar8 & 0xffffffff;
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    if (((int)param_1[0xf0] != 0xc) && (local_res8[0] != 1)) {
      *(int *)(lVar3 + 0x8a78) = local_res8[0];
    }
    if (local_res8[0] == 0) {
      return uVar7;
    }
    switch((int)param_1[0xf0]) {
    case 1:
      if (local_res8[0] - 200U < 100) {
        *(undefined4 *)((longlong)param_1 + 0x79c) = 0;
        *(undefined4 *)((longlong)param_1 + 0x7a4) = 0;
        *(undefined1 *)(param_1 + 0xf6) = 0;
        *(undefined1 *)((longlong)param_1 + 0x7b2) = 0;
        uVar6 = Curl_pp_sendf(plVar1,"EHLO %s",param_1[0xf1]);
        uVar7 = (ulonglong)uVar6;
        if (uVar6 == 0) {
          *(undefined4 *)(param_1 + 0xf0) = 2;
        }
      }
      else {
        FUN_1436b5820(*param_1,"Got unexpected smtp-server response: %d",local_res8[0]);
        uVar7 = 8;
      }
      break;
    case 2:
      uVar6 = FUN_1436c8180(param_1);
      uVar7 = (ulonglong)uVar6;
      break;
    case 3:
      uVar7 = 0;
      if (local_res8[0] - 200U < 100) goto LAB_1436c87d8;
      FUN_1436b5820(*param_1,"Remote access denied: %d",local_res8[0]);
      uVar7 = 9;
      break;
    case 4:
      if (local_res8[0] == 0xdc) {
        uVar6 = FUN_1436c7f60(param_1);
        uVar7 = (ulonglong)uVar6;
      }
      else if (*(int *)(*param_1 + 0x460) == 1) {
        uVar6 = FUN_1436c7bf0(param_1);
        uVar7 = (ulonglong)uVar6;
      }
      else {
        FUN_1436b5820(*param_1,"STARTTLS denied. %c",local_res8[0]);
        uVar7 = 0x40;
      }
      break;
    default:
      *(undefined4 *)(param_1 + 0xf0) = 0;
      goto LAB_1436c87ec;
    case 6:
      lVar4 = *param_1;
      uVar6 = FUN_1436dbcf0(param_1 + 0xf2,param_1,local_res8[0],local_res10);
      uVar7 = (ulonglong)uVar6;
      if (uVar6 == 0) {
        if (local_res10[0] == 0) {
          FUN_1436b5820(lVar4,"Authentication cancelled");
          uVar7 = 0x43;
        }
        else if (local_res10[0] == 2) {
          *(undefined4 *)(param_1 + 0xf0) = 0;
        }
      }
      break;
    case 7:
      uVar6 = FUN_1436c8080(param_1);
      uVar7 = (ulonglong)uVar6;
      break;
    case 8:
      if (local_res8[0] - 200U < 100) {
        pcVar9 = "RCPT TO:%s";
        if (*(char *)**(undefined8 **)(*(longlong *)(*param_1 + 0x198) + 0x10) != '<') {
          pcVar9 = "RCPT TO:<%s>";
        }
        uVar6 = Curl_pp_sendf(plVar1,pcVar9);
        if (uVar6 != 0) {
          return (ulonglong)uVar6;
        }
        *(undefined4 *)(param_1 + 0xf0) = 9;
        uVar7 = 0;
      }
      else {
        FUN_1436b5820(*param_1,"MAIL failed: %d",local_res8[0]);
        uVar7 = 0x37;
      }
      break;
    case 9:
      uVar6 = FUN_1436c8420(param_1);
      uVar7 = (ulonglong)uVar6;
      break;
    case 10:
      lVar4 = *param_1;
      uVar7 = 0;
      if (local_res8[0] == 0x162) {
        FUN_1436bedd0(lVar4,*(undefined8 *)(lVar4 + 0x8a08));
        FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0,0);
        goto LAB_1436c87d8;
      }
      FUN_1436b5820(lVar4,"DATA failed: %d",local_res8[0]);
      uVar7 = 0x37;
      break;
    case 0xb:
      uVar7 = 0;
      if (local_res8[0] != 0xfa) {
        uVar7 = 0x38;
      }
LAB_1436c87d8:
      *(undefined4 *)(param_1 + 0xf0) = 0;
    }
    if ((int)uVar7 != 0) {
      return uVar7;
    }
LAB_1436c87ec:
    if ((int)param_1[0xf0] == 0) {
      return uVar7;
    }
    cVar5 = Curl_pp_moredata(plVar1);
    if (cVar5 == '\0') {
      return uVar7;
    }
  } while( true );
}



// FUNCTION 1436c8850 FUN_1436c8850 body=835 status=ok
// SIG undefined FUN_1436c8850(void)

int FUN_1436c8850(longlong *param_1,undefined1 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  char *pcVar7;
  char *pcVar8;
  undefined8 in_stack_ffffffffffffffd0;
  longlong lVar9;
  undefined4 uVar10;
  
  uVar10 = (undefined4)((ulonglong)in_stack_ffffffffffffffd0 >> 0x20);
  lVar1 = *param_1;
  lVar2 = param_1[0x3a];
  pcVar8 = (char *)0x0;
  pcVar5 = (char *)0x0;
  pcVar4 = *(char **)(lVar1 + 0x89d8);
  *param_2 = 1;
  iVar3 = Curl_raw_nequal(pcVar4,"/MATCH:",7);
  if (((iVar3 == 0) && (iVar3 = Curl_raw_nequal(pcVar4,&DAT_145b6e118,3), iVar3 == 0)) &&
     (iVar3 = Curl_raw_nequal(pcVar4,"/FIND:",6), iVar3 == 0)) {
    iVar3 = Curl_raw_nequal(pcVar4,"/DEFINE:",8);
    if (((iVar3 == 0) && (iVar3 = Curl_raw_nequal(pcVar4,&DAT_145b6e1a4,3), iVar3 == 0)) &&
       (iVar3 = Curl_raw_nequal(pcVar4,"/LOOKUP:",8), iVar3 == 0)) {
      pcVar4 = strchr(pcVar4,0x2f);
      if (pcVar4 == (char *)0x0) {
        return 0;
      }
      if (pcVar4[1] != '\0') {
        pcVar8 = pcVar4 + 1;
        do {
          if (*pcVar8 == ':') {
            *pcVar8 = ' ';
          }
          pcVar8 = pcVar8 + 1;
        } while (*pcVar8 != '\0');
      }
      iVar3 = FUN_1436b5cc0(lVar2,param_1,"CLIENT libcurl 7.50.1\r\n%s\r\nQUIT\r\n",pcVar4 + 1);
      goto joined_r0x0001436c8b45;
    }
    pcVar4 = strchr(pcVar4,0x3a);
    if (pcVar4 == (char *)0x0) {
LAB_1436c89d5:
      FUN_1436b58e0(lVar1,"lookup word is missing\n");
      pcVar4 = "default";
    }
    else {
      pcVar4 = pcVar4 + 1;
      pcVar5 = strchr(pcVar4,0x3a);
      pcVar8 = pcVar5;
      if (pcVar5 != (char *)0x0) {
        pcVar8 = pcVar5 + 1;
        *pcVar5 = '\0';
        pcVar5 = strchr(pcVar8,0x3a);
        if (pcVar5 != (char *)0x0) {
          *pcVar5 = '\0';
        }
      }
      if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_1436c89d5;
    }
    if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
      pcVar8 = "!";
    }
    lVar6 = unescape_word(lVar1,pcVar4);
    if (lVar6 == 0) {
      return 0x1b;
    }
    iVar3 = FUN_1436b5cc0(lVar2,param_1,"CLIENT libcurl 7.50.1\r\nDEFINE %s %s\r\nQUIT\r\n",pcVar8,
                          lVar6);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
    goto joined_r0x0001436c8b45;
  }
  pcVar4 = strchr(pcVar4,0x3a);
  if (pcVar4 == (char *)0x0) {
LAB_1436c8ac7:
    FUN_1436b58e0(lVar1,"lookup word is missing\n");
    pcVar4 = "default";
  }
  else {
    pcVar4 = pcVar4 + 1;
    pcVar7 = strchr(pcVar4,0x3a);
    pcVar8 = pcVar7;
    if (pcVar7 != (char *)0x0) {
      pcVar8 = pcVar7 + 1;
      *pcVar7 = '\0';
      pcVar7 = strchr(pcVar8,0x3a);
      pcVar5 = pcVar7;
      if (pcVar7 != (char *)0x0) {
        pcVar5 = pcVar7 + 1;
        *pcVar7 = '\0';
        pcVar7 = strchr(pcVar5,0x3a);
        if (pcVar7 != (char *)0x0) {
          *pcVar7 = '\0';
        }
      }
    }
    if ((pcVar4 == (char *)0x0) || (*pcVar4 == '\0')) goto LAB_1436c8ac7;
  }
  if ((pcVar8 == (char *)0x0) || (*pcVar8 == '\0')) {
    pcVar8 = "!";
  }
  if ((pcVar5 == (char *)0x0) || (*pcVar5 == '\0')) {
    pcVar5 = ".";
  }
  lVar6 = unescape_word(lVar1,pcVar4);
  if (lVar6 == 0) {
    return 0x1b;
  }
  lVar9 = lVar6;
  iVar3 = FUN_1436b5cc0(lVar2,param_1,"CLIENT libcurl 7.50.1\r\nMATCH %s %s %s\r\nQUIT\r\n",pcVar8,
                        pcVar5,lVar6);
  uVar10 = (undefined4)((ulonglong)lVar9 >> 0x20);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar6);
joined_r0x0001436c8b45:
  if (iVar3 == 0) {
    FUN_1436b8d40(param_1,0,0xffffffffffffffff,0,lVar1 + 0xb0,CONCAT44(uVar10,0xffffffff),0);
    return 0;
  }
  FUN_1436b5820(lVar1,"Failed sending DICT request");
  return iVar3;
}



// FUNCTION 1436c8ba0 unescape_word body=183 status=ok
// SIG undefined unescape_word(void)

byte * unescape_word(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int local_res18 [4];
  
  iVar5 = 0;
  pbVar2 = (byte *)curl_easy_unescape(param_1,param_2,0,local_res18);
  if (pbVar2 == (byte *)0x0) {
    return (byte *)0x0;
  }
  pbVar3 = (byte *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)
                             ((longlong)local_res18[0] * 2 + 1);
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar6 = pbVar2;
    pbVar4 = pbVar3;
    while (bVar1 != 0) {
      if (((0x3a < (byte)(bVar1 - 0x21)) ||
          ((0x7ffffffffffffbdU >> ((ulonglong)(bVar1 - 0x21) & 0x3f) & 1) == 0)) &&
         (0x21 < (byte)(bVar1 + 0xa3))) {
        iVar5 = iVar5 + 1;
        *pbVar4 = 0x5c;
        pbVar4 = pbVar4 + 1;
      }
      pbVar6 = pbVar6 + 1;
      *pbVar4 = bVar1;
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar6;
    }
    pbVar3[iVar5] = 0;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(pbVar2);
  return pbVar3;
}



// FUNCTION 1436c8c60 FUN_1436c8c60 body=125 status=ok
// SIG undefined FUN_1436c8c60(void)

undefined8 FUN_1436c8c60(longlong *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_2 = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a4) = 0;
  if (*(char *)(*param_1 + 0x614) == '\0') {
    uVar1 = FUN_1436ca1d0();
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  else {
    uVar1 = FUN_1436cdd50();
    if ((*(int *)(*param_1 + 0x8a40) - 4U & 0xfffffffd) == 0) {
      return 0;
    }
    if ((int)uVar1 != 0) {
      return uVar1;
    }
  }
  uVar1 = FUN_1436ca950(param_1,param_2);
  return uVar1;
}



// FUNCTION 1436c8ce0 FUN_1436c8ce0 body=1100 status=ok
// SIG undefined FUN_1436c8ce0(void)

int FUN_1436c8ce0(longlong *param_1,int param_2,char param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  int local_res8 [2];
  int local_res10;
  longlong local_res20;
  
  lVar1 = *param_1;
  iVar3 = 0;
  puVar2 = *(undefined8 **)(lVar1 + 0x198);
  uVar6 = *(undefined8 *)(lVar1 + 0x89d8);
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  switch(param_2) {
  case 0:
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x17:
  case 0x19:
  case 0x1e:
  case 0x24:
  case 0x3f:
  case 0x4e:
    if (param_3 != '\0') goto switchD_1436c8d53_caseD_1;
    break;
  default:
switchD_1436c8d53_caseD_1:
    *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
    *(undefined1 *)((longlong)param_1 + 0x7a3) = 1;
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    iVar3 = param_2;
  }
  local_res10 = param_2;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf5]);
  lVar7 = -1;
  if (*(char *)(lVar1 + 0x614) != '\0') {
    if ((*(code **)(lVar1 + 0x620) != (code *)0x0) && (param_1[0xf3] != 0)) {
      (**(code **)(lVar1 + 0x620))(*(undefined8 *)(lVar1 + 0x8a70));
    }
    param_1[0xfb] = -1;
  }
  lVar4 = curl_easy_unescape(lVar1,uVar6,0,0);
  if (lVar4 == 0) {
    *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
    *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    if (iVar3 == 0) {
      iVar3 = 0x1b;
    }
    param_1[0xf5] = 0;
  }
  else {
    if (param_1[0xf3] == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = -1;
      do {
        lVar5 = lVar5 + 1;
      } while (*(char *)(param_1[0xf3] + lVar5) != '\0');
    }
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(lVar4 + lVar7) != '\0');
    if (*(char *)((longlong)param_1 + 0x7a3) == '\0') {
      if ((lVar7 - lVar5 == 0) || (*(int *)(lVar1 + 0x428) == 2)) {
        lVar7 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145af3922);
        param_1[0xf5] = lVar7;
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
      }
      else {
        param_1[0xf5] = lVar4;
        if (lVar5 != 0) {
          *(undefined1 *)((lVar7 - lVar5) + lVar4) = 0;
        }
      }
      if (param_1[0xf5] != 0) {
        FUN_1436b58e0(lVar1,"Remembering we are in dir \"%s\"\n");
      }
    }
    else {
      param_1[0xf5] = 0;
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar4);
    }
  }
  freedirs(param_1 + 0xe3);
  if (param_1[0x3b] != -1) {
    if ((((iVar3 == 0) && ((char)param_1[0xf4] != '\0')) && (0 < *(longlong *)(lVar1 + 0xa0))) &&
       (iVar3 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6ef70), iVar3 != 0)) {
      uVar6 = FUN_1436a7d00(iVar3);
      FUN_1436b5820(lVar1,"Failure sending ABOR command: %s",uVar6);
      *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
      *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
    }
    if ((char)param_1[0x5a] != '\0') {
      thunk_FUN_1436c19a0(param_1,1);
    }
    FUN_1436c9ea0(param_1);
  }
  if (iVar3 != 0) goto LAB_1436c90df;
  if (((*(int *)(puVar2 + 3) == 0) && (*(char *)((longlong)param_1 + 0x7a1) != '\0')) &&
     ((char)param_1[0xe7] != '\0')) {
    if (param_3 != '\0') goto LAB_1436c90df;
    lVar7 = param_1[0xec];
    *(undefined4 *)(param_1 + 0xec) = 60000;
    lVar4 = curlx_tvnow();
    param_1[0xeb] = lVar4;
    iVar3 = FUN_1436c9a70(&local_res20,param_1,local_res8);
    *(int *)(param_1 + 0xec) = (int)lVar7;
    if ((local_res20 == 0) && (iVar3 == 0x1c)) {
      FUN_1436b5820(lVar1,"control connection looks dead");
      *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
      *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
      return 0x1c;
    }
    if (iVar3 != 0) {
      return iVar3;
    }
    iVar3 = 0;
    if ((char)param_1[0xf4] != '\0') {
      if (0 < *(longlong *)(lVar1 + 0xa0)) {
        FUN_1436b58e0(lVar1,"partial download completed, closing connection\n");
        *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
        return 0;
      }
      if ((char)param_1[0xf4] != '\0') goto LAB_1436c9026;
    }
    if ((local_res8[0] != 0xe2) && (local_res8[0] != 0xfa)) {
      FUN_1436b5820(lVar1,"server did not report OK, got %d");
      iVar3 = 0x12;
      goto LAB_1436c90df;
    }
  }
  else if (param_3 != '\0') goto LAB_1436c90df;
LAB_1436c9026:
  if (*(char *)(lVar1 + 0x450) == '\0') {
    lVar7 = *(longlong *)(lVar1 + 0x90);
    if (((lVar7 == -1) || (lVar7 == *(longlong *)*puVar2)) ||
       (*(longlong *)(lVar1 + 0xa0) == *(longlong *)*puVar2)) {
      if ((((char)param_1[0xf4] == '\0') && (*(longlong *)*puVar2 == 0)) && (0 < lVar7)) {
        FUN_1436b5820(lVar1,"No data was received!");
        iVar3 = 0x13;
      }
    }
    else {
      FUN_1436b5820(lVar1,"Received only partial file: %I64d bytes");
      iVar3 = 0x12;
    }
  }
  else if (((*(longlong *)(lVar1 + 0x8a08) != -1) &&
           (*(longlong *)(lVar1 + 0x8a08) != *(longlong *)*puVar2)) &&
          ((*(char *)(lVar1 + 0x322) == '\0' && (*(int *)(puVar2 + 3) == 0)))) {
    FUN_1436b5820(lVar1,"Uploaded unaligned file size (%I64d out of %I64d bytes)");
    iVar3 = 0x12;
  }
LAB_1436c90df:
  *(undefined4 *)(puVar2 + 3) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  if ((((local_res10 == 0) && (iVar3 == 0)) && (param_3 == '\0')) &&
     (*(longlong *)(lVar1 + 0x330) != 0)) {
    iVar3 = FUN_1436caa10(param_1);
  }
  return iVar3;
}



// FUNCTION 1436c9190 FUN_1436c9190 body=151 status=ok
// SIG undefined FUN_1436c9190(void)

void FUN_1436c9190(longlong param_1,undefined1 *param_2)

{
  int iVar1;
  
  *param_2 = 0;
  *(undefined1 *)(param_1 + 0x3b9) = 0;
  *(code **)(param_1 + 0x770) = FUN_1436ccfd0;
  *(undefined4 *)(param_1 + 0x760) = 1800000;
  *(code **)(param_1 + 0x778) = ftp_endofresp;
  *(longlong *)(param_1 + 0x768) = param_1;
  if (((*(byte *)(*(longlong *)(param_1 + 1000) + 0x78) & 1) != 0) &&
     (iVar1 = FUN_1436ad3f0(param_1,0), iVar1 != 0)) {
    return;
  }
  FUN_1436db620(param_1 + 0x718);
  *(undefined4 *)(param_1 + 0x7c0) = 1;
  FUN_1436dba10(param_1 + 0x718,0);
  *param_2 = *(int *)(param_1 + 0x7c0) == 0;
  return;
}



// FUNCTION 1436c9230 FUN_1436c9230 body=159 status=ok
// SIG undefined FUN_1436c9230(void)

undefined8 FUN_1436c9230(longlong *param_1,char param_2)

{
  if (param_2 != '\0') {
    *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
  }
  FUN_1436ca790();
  if (param_1[0xf0] != 0) {
    if (*(longlong *)(*param_1 + 0x89b8) == param_1[0xf0]) {
      *(undefined8 *)(*param_1 + 0x89b8) = 0;
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf0]);
    param_1[0xf0] = 0;
  }
  freedirs(param_1 + 0xe3);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xf5]);
  param_1[0xf5] = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xfa]);
  param_1[0xfa] = 0;
  Curl_pp_disconnect(param_1 + 0xe3);
  return 0;
}



// FUNCTION 1436c92d0 FUN_1436c92d0 body=654 status=ok
// SIG undefined FUN_1436c92d0(void)

ulonglong FUN_1436c92d0(longlong *param_1,uint *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  char local_res8 [8];
  char local_res18 [8];
  ulonglong in_stack_ffffffffffffffb8;
  
  lVar2 = *param_1;
  plVar1 = param_1 + 0xe3;
  uVar6 = 0;
  uVar8 = 0;
  local_res8[0] = '\0';
  lVar3 = *(longlong *)(lVar2 + 0x198);
  if (*(char *)((longlong)param_1 + 0x3c5) == '\0') {
    if (*(int *)((longlong)param_1 + 0x814) == 1) {
      uVar6 = FUN_1436d6c90(param_1,1,0,0,in_stack_ffffffffffffffb8 & 0xffffffffffffff00);
      return uVar6;
    }
    uVar7 = FUN_1436b64a0(param_1,1,local_res8);
    uVar6 = uVar7 & 0xffffffff;
    if (local_res8[0] == '\0') {
      if ((int)uVar7 == 0) {
        return uVar7;
      }
      if (*(int *)((longlong)param_1 + 0x7b4) != 0) {
        return uVar7;
      }
      *param_2 = 0xffffffff;
      uVar6 = FUN_1436ca0c0(param_1);
      return uVar6;
    }
    if (*(char *)((longlong)param_1 + 0x3bd) != '\0') {
      FUN_1436b58e0(lVar2,"Connection to proxy confirmed\n");
      uVar4 = FUN_1436cdba0(param_1,param_1[0xfc],(short)param_1[0xfd],local_res8);
      uVar6 = (ulonglong)uVar4;
    }
  }
  if ((int)param_1[0xf8] != 0) {
    uVar4 = FUN_1436dba10(plVar1,0);
    *param_2 = (uint)((int)param_1[0xf8] == 0);
    if (uVar4 != 0) {
      return (ulonglong)uVar4;
    }
    if (*(char *)((longlong)param_1 + 0x7a4) != '\x01') {
      return 0;
    }
    *param_2 = 0;
    uVar6 = 0;
  }
  if (1 < *(int *)(lVar3 + 0x18)) {
    if (((int)uVar6 == 0) && (*(int *)(lVar3 + 0x18) != 0)) {
      FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    if (*(char *)((longlong)param_1 + 0x7a4) != '\0') {
      return uVar6;
    }
    *param_2 = 1;
    return uVar6;
  }
  if (*(char *)((longlong)param_1 + 0x7a4) == '\x01') {
    uVar6 = FUN_1436c9d20(param_1,local_res18);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    if (local_res18[0] == '\0') {
      return uVar6;
    }
    uVar6 = FUN_1436c9870(param_1);
    *(undefined1 *)((longlong)param_1 + 0x7a4) = 0;
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1436c9c30(param_1);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    *param_2 = 1;
    return uVar6;
  }
  if (*(char *)(lVar2 + 0x450) != '\0') {
    uVar6 = FUN_1436ca140(param_1,*(undefined1 *)(lVar2 + 0x443),0x16);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar6 = FUN_1436dba10(plVar1,0);
    if (*(char *)((longlong)param_1 + 0x7a4) == '\0') {
      *param_2 = (uint)((int)param_1[0xf8] == 0);
      return uVar6;
    }
    goto LAB_1436c9501;
  }
  *(undefined8 *)(lVar3 + 0x20) = 0xffffffffffffffff;
  iVar5 = FUN_1436ca860(param_1);
  if (iVar5 == 0) {
    if ((*(char *)(lVar2 + 0x445) == '\0') && (param_1[0xf3] != 0)) {
      uVar6 = FUN_1436ca140(param_1,*(undefined1 *)(lVar2 + 0x443),0x15);
      iVar5 = (int)uVar6;
    }
    else {
      if (*(int *)(lVar3 + 0x18) != 0) goto LAB_1436c94ed;
      uVar6 = FUN_1436ca140(param_1,1,0x14);
      iVar5 = (int)uVar6;
    }
    if (iVar5 != 0) {
      return uVar6;
    }
  }
LAB_1436c94ed:
  uVar6 = FUN_1436dba10(plVar1,0);
  uVar8 = (uint)((int)param_1[0xf8] == 0);
LAB_1436c9501:
  *param_2 = uVar8;
  return uVar6;
}



// FUNCTION 1436c9560 FUN_1436c9560 body=53 status=ok
// SIG undefined FUN_1436c9560(void)

void FUN_1436c9560(longlong param_1,undefined8 param_2)

{
  FUN_1436dba10(param_1 + 0x718,0);
  *(bool *)param_2 = *(int *)(param_1 + 0x7c0) == 0;
  return;
}



// FUNCTION 1436c9630 FUN_1436c9630 body=142 status=ok
// SIG undefined FUN_1436c9630(void)

undefined8 FUN_1436c9630(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  
  uVar1 = FUN_1436dba10(param_1 + 0xe3,0);
  bVar2 = (int)param_1[0xf8] == 0;
  *(bool *)param_2 = bVar2;
  if (((int)uVar1 == 0) && (bVar2)) {
    uVar1 = 0;
    if (*(int *)(*(longlong *)(*param_1 + 0x198) + 0x18) == 0) {
      *(undefined1 *)((longlong)param_1 + 0x3c3) = 1;
    }
    else {
      FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
    }
    *(undefined1 *)((longlong)param_1 + 0x7a1) = 1;
  }
  return uVar1;
}



// FUNCTION 1436c96c0 FUN_1436c96c0 body=424 status=ok
// SIG undefined FUN_1436c96c0(void)

undefined8 FUN_1436c96c0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  longlong *plVar5;
  char *pcVar6;
  char *pcVar7;
  
  lVar1 = *param_1;
  if ((*(char *)((longlong)param_1 + 0x3be) != '\0') && (*(char *)(lVar1 + 0x442) == '\0')) {
    ppuVar3 = &PTR_DAT_145b6e320;
    if ((undefined **)param_1[0x7d] != &PTR_DAT_145b6e220) {
      ppuVar3 = &PTR_DAT_145b6e3a0;
    }
    param_1[0x7d] = (longlong)ppuVar3;
                    /* WARNING: Could not recover jumptable at 0x0001436c9716. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar4 = (*(code *)ppuVar3[1])(param_1);
    return uVar4;
  }
  plVar5 = (longlong *)(*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc58)(0x28);
  *(longlong **)(*param_1 + 0x198) = plVar5;
  if (plVar5 == (longlong *)0x0) {
    return 0x1b;
  }
  *(longlong *)(lVar1 + 0x89d8) = *(longlong *)(lVar1 + 0x89d8) + 1;
  *(undefined1 *)(lVar1 + 0x89e0) = 1;
  pcVar6 = strstr(*(char **)(lVar1 + 0x89d8),";type=");
  if (pcVar6 == (char *)0x0) {
    pcVar6 = strstr((char *)param_1[0x15],";type=");
    if (pcVar6 == (char *)0x0) goto LAB_1436c97c3;
  }
  *pcVar6 = '\0';
  cVar2 = Curl_raw_toupper(pcVar6[6]);
  *(undefined1 *)((longlong)param_1 + 0x3d2) = 1;
  if (cVar2 == 'A') {
    *(undefined1 *)(lVar1 + 0x443) = 1;
  }
  else if (cVar2 == 'D') {
    *(undefined1 *)(lVar1 + 0x445) = 1;
  }
  else {
    *(undefined1 *)(lVar1 + 0x443) = 0;
  }
LAB_1436c97c3:
  *plVar5 = *param_1 + 0xb0;
  *(undefined4 *)(plVar5 + 3) = 0;
  plVar5[4] = 0;
  pcVar6 = (char *)param_1[0x30];
  plVar5[1] = (longlong)pcVar6;
  plVar5[2] = param_1[0x31];
  pcVar7 = strchr(pcVar6,0xd);
  if (pcVar7 == (char *)0x0) {
    pcVar6 = strchr(pcVar6,10);
    if (pcVar6 == (char *)0x0) {
      pcVar6 = (char *)plVar5[2];
      pcVar7 = strchr(pcVar6,0xd);
      if (pcVar7 == (char *)0x0) {
        pcVar6 = strchr(pcVar6,10);
        if (pcVar6 == (char *)0x0) {
          param_1[0xfb] = -1;
          return 0;
        }
      }
    }
  }
  return 3;
}



// FUNCTION 1436c9870 FUN_1436c9870 body=294 status=ok
// SIG undefined FUN_1436c9870(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_1436c9870(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  lVar1 = param_1[0x3b];
  lVar2 = *param_1;
  local_a8[0] = 0x80;
  lVar5 = -1;
  iVar3 = Ordinal_6(lVar1,local_98,local_a8);
  if (iVar3 == 0) {
    local_a8[0] = 0x80;
    lVar5 = Ordinal_1(lVar1,local_98,local_a8);
  }
  FUN_1436b61e0(param_1,lVar1);
  if (lVar5 == -1) {
    FUN_1436b5820(lVar2,"Error accept()ing server connect");
    uVar4 = 0x1e;
  }
  else {
    FUN_1436b58e0(lVar2,"Connection accepted from server\n");
    *(undefined1 *)((longlong)param_1 + 0x3c3) = 0;
    param_1[0x3b] = lVar5;
    curlx_nonblock(lVar5,1);
    *(undefined1 *)((longlong)param_1 + 0x1f1) = 1;
    if ((*(code **)(lVar2 + 0x268) != (code *)0x0) &&
       (iVar3 = (**(code **)(lVar2 + 0x268))(*(undefined8 *)(lVar2 + 0x270),lVar5,1), iVar3 != 0)) {
      FUN_1436c9ea0(param_1);
      return 0x2a;
    }
    uVar4 = 0;
  }
  return uVar4;
}



// FUNCTION 1436c99a0 AllowServerConnect body=203 status=ok
// SIG undefined AllowServerConnect(void)

undefined8 AllowServerConnect(longlong *param_1,char *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  *param_2 = '\0';
  FUN_1436b58e0(lVar1,"Preparing for accepting server on data port\n");
  FUN_1436bee30(lVar1,9);
  iVar2 = FUN_1436cd8b0(lVar1);
  if (iVar2 < 0) {
    FUN_1436b5820(lVar1,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  uVar3 = FUN_1436c9d20(param_1,param_2);
  if ((int)uVar3 == 0) {
    if (*param_2 == (char)uVar3) {
      iVar2 = *(int *)(lVar1 + 0x2d0);
      if (iVar2 < 1) {
        iVar2 = 60000;
      }
      FUN_1436a4500(lVar1,iVar2);
    }
    else {
      uVar3 = FUN_1436c9870(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      uVar3 = FUN_1436c9c30(param_1);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 1436c9a70 FUN_1436c9a70 body=442 status=ok
// SIG undefined FUN_1436c9a70(void)

int FUN_1436c9a70(longlong *param_1,undefined8 *param_2,int *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined8 uVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_58 [3];
  
  uVar10 = param_2[0x3a];
  plVar1 = param_2 + 0xe3;
  iVar8 = 0;
  local_res18 = uVar10;
  local_res20 = *param_2;
  local_res10[0] = 0;
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  *param_1 = 0;
  piVar9 = local_res10;
  if (param_3 != (int *)0x0) {
    piVar9 = param_3;
  }
  iVar5 = *piVar9;
  iVar6 = iVar8;
  do {
    if (iVar5 != 0) {
LAB_1436c9bac:
      *(undefined1 *)(param_2 + 0xe7) = 0;
      return iVar6;
    }
    iVar5 = FUN_1436db980(plVar1);
    if (iVar5 < 1) {
      FUN_1436b5820(local_res20,"FTP response timeout");
      return 0x1c;
    }
    iVar4 = 1000;
    if (iVar5 < 1000) {
      iVar4 = iVar5;
    }
    if ((*plVar1 == 0) || (1 < iVar8)) {
      iVar5 = FUN_1436b50e0(uVar10,0xffffffffffffffff,0xffffffffffffffff,iVar4);
      if (iVar5 == -1) {
        uVar7 = Ordinal_111();
        FUN_1436b5820(local_res20,"FTP response aborted due to select/poll error: %d",uVar7);
        return 0x38;
      }
      if (iVar5 != 0) goto LAB_1436c9b1b;
      iVar5 = FUN_1436befa0(param_2);
      if (iVar5 != 0) {
        return 0x2a;
      }
    }
    else {
LAB_1436c9b1b:
      plVar2 = (longlong *)param_2[0xed];
      lVar3 = *plVar2;
      iVar6 = FUN_1436db680(local_res18,plVar1,local_res8,local_58);
      *(int *)(lVar3 + 0x8a78) = local_res8[0];
      if (piVar9 != (int *)0x0) {
        *piVar9 = local_res8[0];
      }
      if (local_res8[0] == 0x1a5) {
        FUN_1436b58e0(lVar3,"We got a 421 - timeout!\n");
        *(undefined4 *)(plVar2 + 0xf8) = 0;
        iVar6 = 0x1c;
        goto LAB_1436c9bac;
      }
      if (iVar6 != 0) goto LAB_1436c9bac;
      uVar10 = local_res18;
      if ((local_58[0] == 0) && (*plVar1 != 0)) {
        iVar8 = iVar8 + 1;
        *param_1 = *param_1;
      }
      else {
        iVar8 = 0;
        *param_1 = *param_1 + local_58[0];
      }
    }
    iVar5 = *piVar9;
  } while( true );
}



// FUNCTION 1436c9c30 FUN_1436c9c30 body=235 status=ok
// SIG undefined FUN_1436c9c30(void)

undefined8 FUN_1436c9c30(longlong *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  
  lVar4 = *param_1;
  puVar1 = *(undefined8 **)(lVar4 + 0x198);
  if ((char)param_1[0x5a] != '\0') {
    FUN_1436b58e0(lVar4,"Doing the SSL/TLS handshake on the data stream\n");
    uVar2 = FUN_1436ad3f0(param_1,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  puVar5 = (undefined8 *)*puVar1;
  if (*(int *)((longlong)param_1 + 0x7c4) == 0x21) {
    *puVar5 = 0;
    FUN_1436bedd0(lVar4,*(undefined8 *)(lVar4 + 0x8a08));
    Curl_sndbufset(param_1[0x3b]);
    uVar2 = *puVar1;
    lVar4 = -1;
    uVar3 = 0xffffffff;
    uVar6 = 1;
    puVar5 = (undefined8 *)0x0;
  }
  else {
    lVar4 = param_1[0xf9];
    uVar3 = 1;
    uVar2 = 0;
    uVar6 = 0xffffffff;
  }
  FUN_1436b8d40(param_1,uVar3,lVar4,0,puVar5,uVar6,uVar2);
  *(undefined1 *)(param_1 + 0xe7) = 1;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  return 0;
}



// FUNCTION 1436c9d20 FUN_1436c9d20 body=372 status=ok
// SIG undefined FUN_1436c9d20(void)

undefined8 FUN_1436c9d20(undefined8 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  int local_res8 [2];
  undefined1 local_res10 [8];
  
  uVar5 = *param_1;
  uVar1 = param_1[0x3a];
  uVar2 = param_1[0x3b];
  *param_2 = 0;
  iVar3 = FUN_1436cd8b0(uVar5);
  FUN_1436b58e0(uVar5,"Checking for server connect\n");
  if (iVar3 < 0) {
    FUN_1436b5820(uVar5,"Accept timeout occurred while waiting server connect");
    return 0xc;
  }
  if (((param_1[0xe4] == 0) || ((char *)param_1[0xe3] == (char *)0x0)) ||
     (*(char *)param_1[0xe3] < '4')) {
    uVar4 = FUN_1436b50e0(uVar1,uVar2,0xffffffffffffffff,0);
    if (uVar4 != 0xffffffff) {
      if (uVar4 != 0) {
        if ((uVar4 & 8) == 0) {
          if ((uVar4 & 1) != 0) {
            FUN_1436b58e0(uVar5,"Ctrl conn has data while waiting for data conn\n");
            FUN_1436c9a70(local_res10,param_1,local_res8);
            uVar5 = 8;
            if (3 < local_res8[0] / 100) {
              uVar5 = 10;
            }
            return uVar5;
          }
        }
        else {
          FUN_1436b58e0(uVar5,"Ready to accept data connection from server\n");
          *param_2 = 1;
        }
      }
      return 0;
    }
    FUN_1436b5820(uVar5,"Error while waiting for server connect");
  }
  else {
    FUN_1436b58e0(uVar5,"There is negative response in cache while serv connect\n");
    FUN_1436c9a70(local_res10,param_1,local_res8);
  }
  return 10;
}



// FUNCTION 1436c9ea0 FUN_1436c9ea0 body=84 status=ok
// SIG undefined FUN_1436c9ea0(void)

void FUN_1436c9ea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x1d8) != -1) {
    FUN_1436b61e0();
    *(undefined8 *)(param_1 + 0x1d8) = 0xffffffffffffffff;
    *(undefined1 *)(param_1 + 0x3c5) = 0;
    *(undefined4 *)(param_1 + 0x814) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x3c5) = 0;
  *(undefined4 *)(param_1 + 0x814) = 0;
  return;
}



// FUNCTION 1436c9f00 freedirs body=160 status=ok
// SIG undefined freedirs(void)

void freedirs(longlong param_1)

{
  ulonglong uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar1 = 0;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    uVar3 = uVar1;
    if (0 < *(int *)(param_1 + 0x78)) {
      do {
        (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)
                  (*(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0x70)));
        uVar2 = (int)uVar1 + 1;
        uVar1 = (ulonglong)uVar2;
        *(undefined8 *)(uVar3 + *(longlong *)(param_1 + 0x70)) = 0;
        uVar3 = uVar3 + 8;
      } while ((int)uVar2 < *(int *)(param_1 + 0x78));
    }
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 0x80));
  *(undefined8 *)(param_1 + 0x80) = 0;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(*(undefined8 *)(param_1 + 200));
  *(undefined8 *)(param_1 + 200) = 0;
  return;
}



// FUNCTION 1436c9fa0 FUN_1436c9fa0 body=156 status=ok
// SIG undefined FUN_1436c9fa0(void)

int FUN_1436c9fa0(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 local_res10 [8];
  
  lVar1 = *(longlong *)(*param_1 + 0x198);
  if (param_2 != '\0') {
    iVar2 = FUN_1436c92d0(param_1,local_res10);
    if (iVar2 != 0) {
      FUN_1436c9ea0(param_1);
      return iVar2;
    }
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
    if (param_2 == '\0') {
      *(undefined1 *)((longlong)param_1 + 0x3c3) = 1;
    }
  }
  else {
    FUN_1436b8d40(param_1,0xffffffff,0xffffffffffffffff,0,0,0xffffffff,0);
  }
  *(undefined1 *)((longlong)param_1 + 0x7a1) = 1;
  return 0;
}



// FUNCTION 1436ca040 ftp_endofresp body=119 status=ok
// SIG undefined ftp_endofresp(void)

undefined4 ftp_endofresp(undefined8 param_1,byte *param_2,ulonglong param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  
  if (3 < param_3) {
    iVar1 = isdigit((uint)*param_2);
    if (iVar1 != 0) {
      iVar1 = isdigit((uint)param_2[1]);
      if (iVar1 != 0) {
        iVar1 = isdigit((uint)param_2[2]);
        if ((iVar1 != 0) && (param_2[3] == 0x20)) {
          lVar2 = strtol((char *)param_2,(char **)0x0,10);
          uVar3 = curlx_sltosi(lVar2);
          *param_4 = uVar3;
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1436ca0c0 FUN_1436ca0c0 body=125 status=ok
// SIG undefined FUN_1436ca0c0(void)

undefined8 FUN_1436ca0c0(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*(char *)((longlong)param_1 + 0x3c2) != '\0') {
    FUN_1436b5820(*param_1,"Failed EPSV attempt, exiting\n");
    return 8;
  }
  FUN_1436b58e0(*param_1,"Failed EPSV attempt. Disabling EPSV\n");
  *(undefined1 *)((longlong)param_1 + 0x3cb) = 0;
  *(undefined1 *)(*param_1 + 0x8840) = 0;
  uVar1 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6e8d8);
  if ((int)uVar1 == 0) {
    *(int *)((longlong)param_1 + 0x7b4) = *(int *)((longlong)param_1 + 0x7b4) + 1;
    *(undefined4 *)(param_1 + 0xf8) = 0x1e;
  }
  return uVar1;
}



// FUNCTION 1436ca140 FUN_1436ca140 body=130 status=ok
// SIG undefined FUN_1436ca140(void)

void FUN_1436ca140(longlong param_1,char param_2,undefined4 param_3)

{
  int iVar1;
  char cVar2;
  
  cVar2 = 'I';
  if (param_2 != '\0') {
    cVar2 = 'A';
  }
  if (*(char *)(param_1 + 0x7b0) == cVar2) {
    *(undefined4 *)(param_1 + 0x7c0) = param_3;
    ftp_state_type_resp(param_1,200);
  }
  else {
    iVar1 = Curl_pp_sendf(param_1 + 0x718,"TYPE %c",cVar2);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c0) = param_3;
      *(char *)(param_1 + 0x7b0) = cVar2;
    }
  }
  return;
}



// FUNCTION 1436ca1d0 FUN_1436ca1d0 body=1206 status=ok
// SIG undefined FUN_1436ca1d0(void)

undefined8 FUN_1436ca1d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  longlong *plVar15;
  longlong *local_res8;
  longlong local_res10;
  
  lVar2 = *param_1;
  plVar1 = param_1 + 0xe3;
  lVar13 = -1;
  lVar7 = *(longlong *)(lVar2 + 0x198);
  pcVar14 = *(char **)(lVar2 + 0x89d8);
  *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7a3) = 0;
  iVar6 = 0;
  plVar15 = param_1;
  local_res8 = param_1;
  local_res10 = lVar7;
  if (*(int *)(lVar2 + 0x428) == 2) {
    if (*pcVar14 != '\0') {
      lVar12 = -1;
      do {
        lVar11 = lVar12;
        lVar12 = lVar11 + 1;
      } while (pcVar14[lVar11 + 1] != '\0');
      if (pcVar14[lVar11] != '/') goto LAB_1436ca546;
    }
LAB_1436ca433:
    param_1[0xf3] = 0;
LAB_1436ca43a:
    if (((*(char *)(lVar2 + 0x450) != '\0') && (param_1[0xf3] == 0)) &&
       (*(int *)(lVar7 + 0x18) == 0)) {
      FUN_1436b5820(lVar2,"Uploading to a URL without a file name!");
      return 3;
    }
    *(undefined1 *)((longlong)param_1 + 0x7a2) = 0;
    if (param_1[0xf5] != 0) {
      lVar7 = curl_easy_unescape(*plVar15,*(undefined8 *)(lVar2 + 0x89d8),0,&local_res8);
      if (lVar7 == 0) goto LAB_1436ca418;
      if (param_1[0xf3] != 0) {
        lVar12 = -1;
        do {
          lVar12 = lVar12 + 1;
        } while (*(char *)(param_1[0xf3] + lVar12) != '\0');
        iVar6 = curlx_sltosi();
      }
      local_res8 = (longlong *)CONCAT44(local_res8._4_4_,(int)local_res8 - iVar6);
      do {
        lVar13 = lVar13 + 1;
      } while (*(char *)(param_1[0xf5] + lVar13) != '\0');
      iVar6 = curlx_sltosi(lVar13);
      if (((int)local_res8 == iVar6) &&
         (iVar6 = curl_strnequal(lVar7,param_1[0xf5],(longlong)(int)local_res8), iVar6 != 0)) {
        FUN_1436b58e0(lVar2,"Request has same path as previous transfer\n");
        *(undefined1 *)((longlong)param_1 + 0x7a2) = 1;
      }
      (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar7);
    }
    uVar8 = 0;
  }
  else {
    if (*(int *)(lVar2 + 0x428) == 3) {
      if (*pcVar14 == '\0') {
        *(undefined4 *)(param_1 + 0xf2) = 0;
        goto LAB_1436ca433;
      }
      pcVar9 = strrchr(pcVar14,0x2f);
      if ((pcVar9 == (char *)0x0) && (*pcVar14 != '\0')) {
LAB_1436ca546:
        if ((pcVar14 == (char *)0x0) || (*pcVar14 == '\0')) goto LAB_1436ca433;
        lVar12 = curl_easy_unescape(*plVar15,pcVar14,0,0);
        param_1[0xf3] = lVar12;
        if (lVar12 == 0) {
          freedirs(plVar1);
          FUN_1436b5820(lVar2,"no memory");
          return 0x1b;
        }
        cVar3 = isBadFtpString(lVar12);
        if (cVar3 != '\0') {
          freedirs(plVar1);
          return 3;
        }
        goto LAB_1436ca43a;
      }
      lVar12 = (*(code *)PTR_calloc_1467dcc78)(1);
      param_1[0xf1] = lVar12;
      if (lVar12 == 0) goto LAB_1436ca420;
      if (pcVar9 == (char *)0x0) {
        uVar5 = 1;
      }
      else {
        lVar12 = 1;
        if ((longlong)pcVar9 - (longlong)pcVar14 != 0) {
          lVar12 = (longlong)pcVar9 - (longlong)pcVar14;
        }
        uVar5 = curlx_sltosi(lVar12);
      }
      plVar15 = local_res8;
      pcVar10 = "/";
      if (pcVar9 != (char *)0x0) {
        pcVar10 = pcVar14;
      }
      uVar8 = curl_easy_unescape(*local_res8,pcVar10,uVar5,0);
      *(undefined8 *)param_1[0xf1] = uVar8;
      if (*(longlong *)param_1[0xf1] != 0) {
        *(undefined4 *)(param_1 + 0xf2) = 1;
        if (pcVar9 != (char *)0x0) {
          pcVar14 = pcVar9 + 1;
        }
        goto LAB_1436ca546;
      }
LAB_1436ca418:
      freedirs(plVar1);
    }
    else {
      *(undefined4 *)(param_1 + 0xf2) = 0;
      *(undefined4 *)((longlong)param_1 + 0x794) = 5;
      lVar7 = (*(code *)PTR_calloc_1467dcc78)(5,8);
      param_1[0xf1] = lVar7;
      if (lVar7 != 0) {
        iVar4 = curl_strequal(pcVar14,&DAT_145b11fc0);
        if (iVar4 == 0) {
          pcVar9 = strchr(pcVar14,0x2f);
          lVar7 = local_res10;
          while (local_res10 = lVar7, pcVar9 != (char *)0x0) {
            if ((pcVar14 == *(char **)(lVar2 + 0x89d8) ||
                 (longlong)pcVar14 - (longlong)*(char **)(lVar2 + 0x89d8) < 0) ||
               (lVar7 = 1, (int)param_1[0xf2] != 0)) {
              lVar7 = 0;
            }
            if (pcVar9 == pcVar14) {
              if ((int)param_1[0xf2] == 0) {
                uVar8 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
                *(undefined8 *)(param_1[0xf1] + (longlong)(int)param_1[0xf2] * 8) = uVar8;
                lVar7 = *(longlong *)(param_1[0xf1] + (longlong)(int)param_1[0xf2] * 8);
                *(int *)(param_1 + 0xf2) = (int)param_1[0xf2] + 1;
                if (lVar7 == 0) goto LAB_1436ca409;
              }
            }
            else {
              uVar5 = curlx_sltosi(pcVar9 + (lVar7 - (longlong)pcVar14));
              uVar8 = curl_easy_unescape(*local_res8,(longlong)pcVar14 - lVar7,uVar5,0);
              *(undefined8 *)(param_1[0xf1] + (longlong)(int)param_1[0xf2] * 8) = uVar8;
              pcVar14 = *(char **)(param_1[0xf1] + (longlong)(int)param_1[0xf2] * 8);
              if (pcVar14 == (char *)0x0) {
LAB_1436ca409:
                FUN_1436b5820(lVar2,"no memory");
                goto LAB_1436ca418;
              }
              pcVar10 = strchr(pcVar14,0xd);
              if ((pcVar10 != (char *)0x0) || (pcVar14 = strchr(pcVar14,10), pcVar14 != (char *)0x0)
                 ) {
                (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)
                          (*(undefined8 *)(param_1[0xf1] + (longlong)(int)param_1[0xf2] * 8));
                freedirs(plVar1);
                return 3;
              }
              *(int *)(param_1 + 0xf2) = (int)param_1[0xf2] + 1;
              if (*(int *)((longlong)param_1 + 0x794) <= (int)param_1[0xf2]) {
                iVar4 = *(int *)((longlong)param_1 + 0x794) * 2;
                *(int *)((longlong)param_1 + 0x794) = iVar4;
                lVar7 = (*(code *)PTR_realloc_1467dcc68)(param_1[0xf1],(longlong)iVar4 << 3);
                if (lVar7 == 0) goto LAB_1436ca418;
                param_1[0xf1] = lVar7;
              }
            }
            pcVar14 = pcVar9 + 1;
            pcVar9 = strchr(pcVar14,0x2f);
            plVar15 = local_res8;
            lVar7 = local_res10;
          }
        }
        else {
          pcVar14 = pcVar14 + 1;
          uVar8 = (*(code *)PTR__strdup_1467dcc70)(&DAT_145b11fc0);
          *(undefined8 *)param_1[0xf1] = uVar8;
          *(int *)(param_1 + 0xf2) = (int)param_1[0xf2] + 1;
          lVar7 = local_res10;
        }
        goto LAB_1436ca546;
      }
    }
LAB_1436ca420:
    uVar8 = 0x1b;
  }
  return uVar8;
}



// FUNCTION 1436ca690 FUN_1436ca690 body=247 status=ok
// SIG undefined FUN_1436ca690(void)

ulonglong FUN_1436ca690(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  ulonglong uVar4;
  char *pcVar5;
  
  if (*(char *)(*param_1 + 0x44f) != '\0') {
    *(undefined4 *)(*(longlong *)(*param_1 + 0x198) + 0x18) = 1;
  }
  *param_3 = 0;
  puVar2 = *(undefined8 **)(*param_1 + 0x328);
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = FUN_1436cac40();
    if ((int)uVar4 != 0) {
      return uVar4;
    }
  }
  else {
    pcVar5 = (char *)*puVar2;
    if (*pcVar5 == '*') {
      pcVar5 = pcVar5 + 1;
      *(undefined4 *)(param_1 + 0xf7) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xf7) = 0;
    }
    uVar4 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,pcVar5);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(undefined4 *)(param_1 + 0xf8) = 0xc;
  }
  uVar3 = FUN_1436dba10(param_1 + 0xe3,0);
  *param_3 = (int)param_1[0xf8] == 0;
  uVar1 = *(undefined1 *)((longlong)param_1 + 0x3c5);
  *param_2 = uVar1;
  FUN_1436b58e0(*param_1,"ftp_perform ends with SECONDARY: %d\n",uVar1);
  return (ulonglong)uVar3;
}



// FUNCTION 1436ca790 FUN_1436ca790 body=195 status=ok
// SIG undefined FUN_1436ca790(void)

int FUN_1436ca790(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = 0;
  if (*(char *)((longlong)param_1 + 0x7a1) != '\0') {
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,&DAT_145b6dc50);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x22;
      iVar1 = *(int *)(param_1 + 0xf8);
      iVar2 = 0;
      while ((iVar1 != 0 && (iVar2 = FUN_1436dba10(param_1 + 0xe3,1), iVar2 == 0))) {
        iVar1 = *(int *)(param_1 + 0xf8);
      }
    }
    else {
      uVar3 = FUN_1436a7d00(iVar2);
      FUN_1436b5820(*param_1,"Failure sending QUIT command: %s",uVar3);
      *(undefined1 *)((longlong)param_1 + 0x7a1) = 0;
      *(undefined1 *)((longlong)param_1 + 0x3b9) = 1;
      *(undefined4 *)(param_1 + 0xf8) = 0;
    }
  }
  return iVar2;
}



// FUNCTION 1436ca860 FUN_1436ca860 body=237 status=ok
// SIG undefined FUN_1436ca860(void)

undefined8 FUN_1436ca860(longlong *param_1)

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
    if (-1 < lVar4) goto LAB_1436ca915;
LAB_1436ca908:
    lVar5 = -lVar4;
  }
  else {
    if (lVar4 < 0) goto LAB_1436ca908;
    lVar5 = (lVar5 - lVar4) + 1;
  }
  *(longlong *)(lVar2 + 0xa0) = lVar5;
LAB_1436ca915:
  *(longlong *)(lVar2 + 0x89f0) = lVar4;
  *(undefined1 *)(param_1 + 0xf4) = 1;
  return 0;
}



// FUNCTION 1436ca950 FUN_1436ca950 body=178 status=ok
// SIG undefined FUN_1436ca950(void)

ulonglong FUN_1436ca950(longlong *param_1,char *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 local_res8 [8];
  
  lVar1 = *param_1;
  local_res8[0] = 0;
  *(undefined8 *)(lVar1 + 0x90) = 0xffffffffffffffff;
  FUN_1436bedc0(lVar1,0);
  FUN_1436bed80(lVar1,0);
  FUN_1436bedd0(lVar1,0xffffffffffffffff);
  FUN_1436bed90(lVar1,0xffffffffffffffff);
  *(undefined1 *)((longlong)param_1 + 0x7a1) = 1;
  uVar2 = FUN_1436ca690(param_1,local_res8,param_2);
  if ((int)uVar2 == 0) {
    if (*param_2 == (char)uVar2) {
      return uVar2;
    }
    uVar2 = FUN_1436c9fa0(param_1,local_res8[0]);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
  else {
    freedirs(param_1 + 0xe3);
  }
  return uVar2 & 0xffffffff;
}



// FUNCTION 1436caa10 FUN_1436caa10 body=549 status=ok
// SIG undefined FUN_1436caa10(void)

ulonglong FUN_1436caa10(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  int iVar11;
  char *pcVar12;
  int local_res10 [2];
  undefined8 *local_res18;
  undefined8 local_res20;
  longlong local_58 [3];
  
  local_res18 = param_2;
  do {
    if (local_res18 == (undefined8 *)0x0) {
      return 0;
    }
    pcVar12 = (char *)*local_res18;
    if (pcVar12 != (char *)0x0) {
      cVar2 = *pcVar12;
      if (cVar2 == '*') {
        pcVar12 = pcVar12 + 1;
      }
      plVar1 = param_1 + 0xe3;
      uVar9 = Curl_pp_sendf(plVar1,&DAT_145afa01c,pcVar12);
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      uVar10 = curlx_tvnow();
      param_1[0xeb] = uVar10;
      iVar11 = 0;
      local_res20 = *param_1;
      uVar10 = param_1[0x3a];
LAB_1436caab0:
      do {
        iVar6 = FUN_1436db980(plVar1);
        if (iVar6 < 1) {
          FUN_1436b5820(local_res20,"FTP response timeout");
          return 0x1c;
        }
        iVar5 = 1000;
        if (iVar6 < 1000) {
          iVar5 = iVar6;
        }
        if ((*plVar1 == 0) || (1 < iVar11)) {
          iVar6 = FUN_1436b50e0(uVar10,0xffffffffffffffff,0xffffffffffffffff,iVar5);
          if (iVar6 == -1) {
            uVar8 = Ordinal_111();
            FUN_1436b5820(local_res20,"FTP response aborted due to select/poll error: %d",uVar8);
            return 0x38;
          }
          if (iVar6 == 0) {
            iVar6 = FUN_1436befa0(param_1);
            if (iVar6 != 0) {
              return 0x2a;
            }
            goto LAB_1436caab0;
          }
        }
        plVar3 = (longlong *)param_1[0xed];
        lVar4 = *plVar3;
        uVar7 = FUN_1436db680(uVar10,plVar1,local_res10,local_58);
        iVar6 = local_res10[0];
        uVar9 = (ulonglong)uVar7;
        *(int *)(lVar4 + 0x8a78) = local_res10[0];
        if (local_res10[0] == 0x1a5) {
          FUN_1436b58e0(lVar4,"We got a 421 - timeout!\n");
          uVar9 = 0x1c;
          *(undefined4 *)(plVar3 + 0xf8) = 0;
          break;
        }
        if (uVar7 != 0) break;
        if ((local_58[0] == 0) && (*plVar1 != 0)) {
          iVar11 = iVar11 + 1;
        }
        else {
          iVar11 = 0;
        }
      } while (local_res10[0] == 0);
      *(undefined1 *)(param_1 + 0xe7) = 0;
      if ((int)uVar9 != 0) {
        return uVar9;
      }
      if (((cVar2 == '*') == (bool)(char)uVar9) && (399 < iVar6)) {
        FUN_1436b5820(*param_1,"QUOT string not accepted: %s",pcVar12);
        return 0x15;
      }
    }
    local_res18 = (undefined8 *)local_res18[1];
  } while( true );
}



// FUNCTION 1436cac40 FUN_1436cac40 body=192 status=ok
// SIG undefined FUN_1436cac40(void)

void FUN_1436cac40(longlong *param_1)

{
  int iVar1;
  
  if (*(char *)((longlong)param_1 + 0x7a2) == '\0') {
    *(undefined4 *)(param_1 + 0xf7) = 0;
    *(uint *)((longlong)param_1 + 0x7bc) = (uint)(*(int *)(*param_1 + 0x42c) == 2);
    if ((*(char *)((longlong)param_1 + 0x3ba) == '\0') || (param_1[0xf0] == 0)) {
      if ((int)param_1[0xf2] == 0) goto LAB_1436caced;
      *(undefined4 *)((longlong)param_1 + 0x7b4) = 1;
      iVar1 = Curl_pp_sendf(param_1 + 0xe3,"CWD %s",*(undefined8 *)param_1[0xf1]);
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 0x10;
        return;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x7b4) = 0;
      iVar1 = Curl_pp_sendf(param_1 + 0xe3,"CWD %s");
      if (iVar1 == 0) {
        *(undefined4 *)(param_1 + 0xf8) = 0x10;
        return;
      }
    }
    return;
  }
LAB_1436caced:
  FUN_1436cb0e0(param_1);
  return;
}



// FUNCTION 1436cad00 FUN_1436cad00 body=518 status=ok
// SIG undefined FUN_1436cad00(void)

undefined8 FUN_1436cad00(longlong *param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  byte *pbVar6;
  longlong lVar7;
  int iVar8;
  char local_res10 [8];
  
  lVar1 = *param_1;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if ((param_2 == 0x96) || (param_2 == 0x7d)) {
    lVar7 = -1;
    if ((param_3 == 0x1f) ||
       ((*(char *)(lVar1 + 0x443) != '\0' || (0 < *(longlong *)(lVar2 + 0x20))))) {
      if (-1 < *(longlong *)(lVar2 + 0x20)) {
        lVar7 = *(longlong *)(lVar2 + 0x20);
      }
    }
    else {
      pcVar4 = strstr((char *)(lVar1 + 0x7e8)," bytes");
      pbVar6 = (byte *)(pcVar4 + -1);
      if (pcVar4 != (char *)0x0) {
        iVar8 = (int)pbVar6 - (int)(char *)(lVar1 + 0x7e8);
        for (; (iVar8 = iVar8 + -1, iVar8 != 0 && (*pbVar6 != 0x28)); pbVar6 = pbVar6 + -1) {
          iVar3 = isdigit((uint)*pbVar6);
          if (iVar3 == 0) goto LAB_1436cae31;
        }
        if (pbVar6 != (byte *)0x0) {
          lVar7 = strtoll(pbVar6 + 1,0,0);
        }
      }
    }
LAB_1436cae31:
    lVar2 = *(longlong *)(lVar1 + 0xa0);
    if ((lVar2 < lVar7) && (0 < lVar2)) {
      *(longlong *)(lVar1 + 0x90) = lVar2;
      lVar7 = lVar2;
    }
    else if ((param_3 != 0x1f) && (*(char *)(lVar1 + 0x443) != '\0')) {
      lVar7 = -1;
    }
    FUN_1436b58e0(lVar1,"Maxdownload = %I64d\n");
    if (param_3 != 0x1f) {
      FUN_1436b58e0(lVar1,"Getting file with size: %I64d\n",lVar7);
    }
    param_1[0xf9] = lVar7;
    *(int *)((longlong)param_1 + 0x7c4) = param_3;
    if (*(char *)(lVar1 + 0x446) == '\0') {
      uVar5 = FUN_1436c9c30(param_1);
    }
    else {
      uVar5 = AllowServerConnect(param_1,local_res10);
      if ((int)uVar5 == 0) {
        if (local_res10[0] == (char)uVar5) {
          FUN_1436b58e0(lVar1,"Data conn was not available immediately\n");
          *(undefined4 *)(param_1 + 0xf8) = 0;
          *(undefined1 *)((longlong)param_1 + 0x7a4) = 1;
        }
        return 0;
      }
    }
  }
  else {
    if ((param_3 == 0x1f) && (param_2 == 0x1c2)) {
      *(undefined4 *)(lVar2 + 0x18) = 2;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return 0;
    }
    FUN_1436b5820(lVar1,"RETR response: %03d",param_2);
    if ((param_3 != 0x20) || (uVar5 = 0x4e, param_2 != 0x226)) {
      return 0x13;
    }
  }
  return uVar5;
}



// FUNCTION 1436caf10 FUN_1436caf10 body=340 status=ok
// SIG undefined FUN_1436caf10(void)

int FUN_1436caf10(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  char *pcVar3;
  char *_Str;
  longlong lVar4;
  longlong lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  lVar5 = *param_1;
  _Str = (char *)0x0;
  if ((((*(int *)(lVar5 + 0x428) == 2) &&
       (pcVar3 = *(char **)(lVar5 + 0x89d8), pcVar3 != (char *)0x0)) && (*pcVar3 != '\0')) &&
     (pcVar3 = strchr(pcVar3,0x2f), _Str = (char *)0x0, pcVar3 != (char *)0x0)) {
    _Str = (char *)(*(code *)PTR__strdup_1467dcc70)(*(undefined8 *)(lVar5 + 0x89d8));
    if (_Str == (char *)0x0) {
      return 0x1b;
    }
    lVar1 = -1;
    do {
      lVar4 = lVar1;
      lVar1 = lVar4 + 1;
    } while (_Str[lVar4 + 1] != '\0');
    if ((_Str[lVar4] != '/') && (pcVar3 = strrchr(_Str,0x2f), pcVar3 != (char *)0x0)) {
      pcVar3[1] = '\0';
    }
  }
  puVar6 = *(undefined **)(lVar5 + 0x4a8);
  if ((puVar6 == (undefined *)0x0) && (puVar6 = &DAT_145b6d5bc, *(char *)(lVar5 + 0x445) != '\0')) {
    puVar6 = &DAT_145b6e7f0;
  }
  puVar7 = &DAT_145af3922;
  pcVar3 = "";
  if (_Str != (char *)0x0) {
    puVar7 = &DAT_145af3920;
    pcVar3 = _Str;
  }
  lVar5 = curl_maprintf("%s%s%s",puVar6,puVar7,pcVar3);
  if (lVar5 == 0) {
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    iVar2 = 0x1b;
  }
  else {
    iVar2 = Curl_pp_sendf(param_1 + 0xe3,&DAT_145afa01c,lVar5);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(_Str);
    (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(lVar5);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x1f;
      iVar2 = 0;
    }
  }
  return iVar2;
}



// FUNCTION 1436cb070 FUN_1436cb070 body=106 status=ok
// SIG undefined FUN_1436cb070(void)

void FUN_1436cb070(longlong param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 600) == '\0') {
    iVar1 = Curl_pp_sendf(param_1 + 0x718,&DAT_145afa01c,&DAT_145b6e674);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c0) = 9;
    }
  }
  else {
    iVar1 = Curl_pp_sendf(param_1 + 0x718,"PBSZ %d",0);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x7c0) = 6;
      return;
    }
  }
  return;
}



// FUNCTION 1436cb0e0 FUN_1436cb0e0 body=192 status=ok
// SIG undefined FUN_1436cb0e0(void)

void FUN_1436cb0e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *param_1;
  if (((*(char *)(lVar1 + 0x441) != '\0') || (*(int *)(lVar1 + 0x370) != 0)) && (param_1[0xf3] != 0)
     ) {
    iVar3 = Curl_pp_sendf(param_1 + 0xe3,"MDTM %s");
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0xf8) = 0x12;
      return;
    }
    return;
  }
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
  FUN_1436cc010(param_1);
  return;
}



// FUNCTION 1436cb1a0 FUN_1436cb1a0 body=704 status=ok
// SIG undefined FUN_1436cb1a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436cb1a0(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  char *pcVar9;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined4 *local_90;
  undefined4 *local_88;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  __time64_t local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar1 = *param_1;
  uVar7 = 0;
  lVar2 = *(longlong *)(lVar1 + 0x198);
  if (param_2 == 0xd5) {
    local_80 = &local_68;
    local_88 = &local_64;
    local_90 = &local_60;
    local_98 = &local_5c;
    iVar4 = FUN_143662c40(lVar1 + 0x7ec,"%04d%02d%02d%02d%02d%02d",&local_54,&local_58);
    if (iVar4 == 6) {
      local_50 = _time64((__time64_t *)0x0);
      local_78 = local_68;
      local_80 = (undefined4 *)CONCAT44(local_80._4_4_,local_64);
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,local_60);
      local_90 = (undefined4 *)CONCAT44(local_90._4_4_,local_5c);
      local_98 = (undefined4 *)CONCAT44(local_98._4_4_,local_58);
      curl_msnprintf(lVar1 + 0x7e8,0x4001,"%04d%02d%02d %02d:%02d:%02d GMT",local_54);
      uVar5 = curl_getdate(lVar1 + 0x7e8,&local_50);
      *(undefined4 *)(lVar1 + 0x8a84) = uVar5;
    }
    if ((((*(char *)(lVar1 + 0x44f) != '\0') && (param_1[0xf3] != 0)) &&
        (uVar7 = 0, *(char *)(lVar1 + 0x441) != '\0')) && (-1 < *(int *)(lVar1 + 0x8a84))) {
      uVar7 = Curl_gmtime((longlong)*(int *)(lVar1 + 0x8a84),&local_48);
      if ((int)uVar7 != 0) {
        return uVar7;
      }
      iVar4 = local_30 + -1;
      if (local_30 == 0) {
        iVar4 = 6;
      }
      local_70 = local_48;
      local_78 = local_44;
      local_80 = (undefined4 *)CONCAT44(local_80._4_4_,local_40);
      local_90 = (undefined4 *)(&PTR_DAT_145b6c100)[local_38];
      local_88 = (undefined4 *)CONCAT44(local_88._4_4_,local_34 + 0x76c);
      local_98 = (undefined4 *)CONCAT44(local_98._4_4_,local_3c);
      curl_msnprintf(lVar1 + 0x7e8,0x3fff,"Last-Modified: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                     (&PTR_DAT_145b6c090)[iVar4]);
      uVar8 = Curl_client_write(param_1,3,lVar1 + 0x7e8);
      uVar7 = uVar8 & 0xffffffff;
      if ((int)uVar8 != 0) {
        return uVar8;
      }
    }
  }
  else if (param_2 == 0x226) {
    FUN_1436b5820(lVar1,"Given file does not exist");
    uVar7 = 0x13;
  }
  else {
    FUN_1436b58e0(lVar1,"unsupported MDTM reply format\n");
  }
  if (*(int *)(lVar1 + 0x370) != 0) {
    iVar4 = *(int *)(lVar1 + 0x8a84);
    if ((iVar4 < 1) || (lVar3 = *(longlong *)(lVar1 + 0x378), lVar3 < 1)) {
      FUN_1436b58e0(lVar1,"Skipping time comparison\n");
    }
    else if (*(int *)(lVar1 + 0x370) == 2) {
      if (lVar3 < iVar4) {
        pcVar9 = "The requested document is not old enough\n";
        goto LAB_1436cb3e6;
      }
    }
    else if (iVar4 <= lVar3) {
      pcVar9 = "The requested document is not new enough\n";
LAB_1436cb3e6:
      FUN_1436b58e0(lVar1,pcVar9);
      *(undefined4 *)(lVar2 + 0x18) = 2;
      *(undefined1 *)(lVar1 + 0x8a88) = 1;
      *(undefined4 *)(param_1 + 0xf8) = 0;
      return 0;
    }
  }
  if ((int)uVar7 == 0) {
    uVar6 = FUN_1436cc250(param_1);
    uVar7 = (ulonglong)uVar6;
  }
  return uVar7;
}



// FUNCTION 1436cb460 FUN_1436cb460 body=1165 status=ok
// SIG undefined FUN_1436cb460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1436cb460(longlong *param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong *plVar8;
  ushort uVar9;
  undefined1 auStack_1a8 [32];
  char *local_188;
  uint *local_180;
  uint *local_178;
  short *local_170;
  char local_168 [3];
  uint uStack_165;
  undefined8 *local_160;
  uint local_158;
  short local_154 [2];
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  uint local_144 [3];
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  lVar2 = *param_1;
  local_160 = (undefined8 *)0x0;
  pcVar5 = (char *)(lVar2 + 0x7ec);
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcc60)(param_1[0xfc]);
  iVar3 = *(int *)((longlong)param_1 + 0x7b4);
  param_1[0xfc] = 0;
  if ((iVar3 != 0) || (param_2 != 0xe5)) {
    if ((iVar3 != 1) || (param_2 != 0xe3)) {
      if (iVar3 != 0) {
        FUN_1436b5820(lVar2,"Bad PASV/EPSV response: %03d",param_2);
        return 0xd;
      }
      uVar6 = FUN_1436ca0c0(param_1);
      return uVar6;
    }
    cVar1 = *pcVar5;
    do {
      if (cVar1 == '\0') {
LAB_1436cb64e:
        FUN_1436b5820(lVar2,"Couldn\'t interpret the 227-response");
        return 0xe;
      }
      local_170 = local_154;
      local_178 = &local_158;
      local_180 = local_144;
      local_188 = (char *)&local_148;
      iVar3 = FUN_143662c40(pcVar5,"%d,%d,%d,%d,%d,%d",&local_150,&local_14c);
      if (iVar3 == 6) {
        if (*pcVar5 != '\0') {
          if (*(char *)(lVar2 + 0x470) == '\0') {
            local_188 = (char *)CONCAT44(local_188._4_4_,local_144[0]);
            lVar7 = curl_maprintf("%d.%d.%d.%d",local_150,local_14c,local_148);
          }
          else {
            local_178 = (uint *)param_1[0x17];
            local_180 = (uint *)CONCAT44(local_180._4_4_,local_144[0]);
            local_188 = (char *)CONCAT44(local_188._4_4_,local_148);
            FUN_1436b58e0(lVar2,"Skip %d.%d.%d.%d for data connection, re-use %s instead\n",
                          local_150,local_14c);
            if (((char)param_1[0x79] != '\0') ||
               (plVar8 = param_1 + 0xe, (int)param_1[0x36] - 4U < 4)) {
              plVar8 = (longlong *)param_1[0x17];
            }
            lVar7 = (*(code *)PTR__strdup_1467dcc70)(plVar8);
          }
          param_1[0xfc] = lVar7;
          if (lVar7 == 0) {
            return 0x1b;
          }
          *(short *)(param_1 + 0xfd) = (short)local_158 * 0x100 + local_154[0];
          goto LAB_1436cb71e;
        }
        goto LAB_1436cb64e;
      }
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    } while( true );
  }
  pcVar5 = strchr(pcVar5,0x28);
  if (pcVar5 != (char *)0x0) {
    local_178 = (uint *)(local_168 + 3);
    pcVar5 = pcVar5 + 1;
    local_180 = &local_158;
    local_188 = local_168 + 2;
    iVar3 = FUN_143662c40(pcVar5,"%c%c%c%u%c",local_168,local_168 + 1);
    if (iVar3 == 5) {
      lVar7 = 1;
      do {
        if (local_168[lVar7] != local_168[0]) {
          pcVar5 = (char *)0x0;
          break;
        }
        lVar7 = lVar7 + 1;
      } while (lVar7 < 4);
      if (0xffff < local_158) {
        FUN_1436b5820(lVar2,"Illegal port number in EPSV reply");
        return 0xd;
      }
      if (pcVar5 != (char *)0x0) {
        *(short *)(param_1 + 0xfd) = (short)local_158;
        if (((char)param_1[0x79] != '\0') || (plVar8 = param_1 + 0xe, (int)param_1[0x36] - 4U < 4))
        {
          plVar8 = (longlong *)param_1[0x17];
        }
        lVar7 = (*(code *)PTR__strdup_1467dcc70)(plVar8);
        param_1[0xfc] = lVar7;
        if (lVar7 == 0) {
          return 0x1b;
        }
LAB_1436cb71e:
        if (*(char *)((longlong)param_1 + 0x3bd) == '\0') {
          iVar3 = Curl_resolv(param_1,param_1[0xfc],(short)param_1[0xfd],&local_160);
          if (iVar3 == 1) {
            FUN_1436abd90(param_1,&local_160);
          }
          uVar9 = *(ushort *)(param_1 + 0xfd);
          if (local_160 != (undefined8 *)0x0) goto LAB_1436cb80f;
          lVar7 = param_1[0xfc];
          pcVar5 = "Can\'t resolve new host %s:%hu";
        }
        else {
          iVar3 = Curl_resolv(param_1,param_1[0x1f],(int)param_1[0x21],&local_160);
          if (iVar3 == 1) {
            FUN_1436abd90(param_1,&local_160);
          }
          uVar9 = *(ushort *)(param_1 + 0x21);
          if (local_160 != (undefined8 *)0x0) {
LAB_1436cb80f:
            *(undefined1 *)((longlong)param_1 + 0x3c5) = 0;
            uVar4 = FUN_1436b6250(param_1);
            if (uVar4 == 0) {
              if (*(char *)(lVar2 + 0x458) != '\0') {
                lVar7 = param_1[0xfc];
                Curl_printable_address(*local_160,local_138,0x100);
                local_188 = (char *)CONCAT44(local_188._4_4_,(uint)uVar9);
                FUN_1436b58e0(*param_1,"Connecting to %s (%s) port %d\n",lVar7,local_138);
              }
              Curl_resolv_unlock(lVar2,local_160);
              *(undefined1 *)((longlong)param_1 + 0x3c3) = 1;
              *(undefined4 *)(param_1 + 0xf8) = 0;
              return 0;
            }
            Curl_resolv_unlock(lVar2,local_160);
            if (*(int *)((longlong)param_1 + 0x7b4) == 0) {
              if (param_2 == 0xe5) {
                uVar6 = FUN_1436ca0c0(param_1);
                return uVar6;
              }
              return (ulonglong)uVar4;
            }
            return (ulonglong)uVar4;
          }
          lVar7 = param_1[0x1f];
          pcVar5 = "Can\'t resolve proxy host %s:%hu";
        }
        FUN_1436b5820(lVar2,pcVar5,lVar7,uVar9);
        return 0xf;
      }
    }
  }
  FUN_1436b5820(lVar2,"Weirdly formatted EPSV reply");
  return 0xd;
}


