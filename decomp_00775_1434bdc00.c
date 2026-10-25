// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1434bdc00 FUN_1434bdc00 body=164 status=ok
// SIG undefined FUN_1434bdc00(void)

void FUN_1434bdc00(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined1 local_res18 [16];
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (*param_3 == 0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    local_20 = 0;
  }
  else {
    pcVar1 = (char *)FUN_143590b70(param_4,local_res18,local_28);
    if (*pcVar1 == '\0') {
      return;
    }
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) != 0) {
        FUN_143592150();
        local_20 = local_28[0];
        goto LAB_1434bdc8f;
      }
      FUN_1435920c0(param_2);
    }
    local_20 = local_28[0];
  }
LAB_1434bdc8f:
  *param_2 = *param_2 & 0xffffffe2;
  *param_2 = *param_2 | 2;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_1c,local_20);
  *(undefined8 *)(param_2 + 6) = uStack_18;
  return;
}



// FUNCTION 1434bdcb0 FUN_1434bdcb0 body=43 status=ok
// SIG undefined FUN_1434bdcb0(void)

undefined8 * FUN_1434bdcb0(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 3;
  *param_1 = &PTR_FUN_145b18ce8;
  return param_1;
}



// FUNCTION 1434bdd00 FUN_1434bdd00 body=335 status=ok
// SIG undefined FUN_1434bdd00(void)

void FUN_1434bdd00(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,(double)*(uint *)(param_3 + 0x10));
  local_188 = 1;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bde60 FUN_1434bde60 body=335 status=ok
// SIG undefined FUN_1434bde60(void)

void FUN_1434bde60(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (0x14 < local_1e8[0]) {
      uVar4 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
      FUN_1435cbdf0(param_2,uVar4);
      piVar1 = (int *)(local_1d8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 != 0) {
        return;
      }
      FUN_14335f920();
      return;
    }
  }
  FUN_143355730(local_1b8,(double)*(uint *)(param_3 + 0x10));
  local_188 = 0;
  local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
  (**(code **)(local_1b8[0] + 0x18))(local_1b8);
  puVar5 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
  lVar2 = *(longlong *)(param_2 + 0x10);
  uVar4 = *puVar5;
  uVar6 = FWmfMediaPlayer::GetSamples(local_1b8);
  local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar4,uVar6);
  *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
  FUN_143590250(param_4,&local_1e0);
  piVar1 = (int *)(local_1e0 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  local_1a0 = &PTR_FUN_145af1858;
  FUN_143353a80(local_1b8);
  return;
}



// FUNCTION 1434bdfc0 FUN_1434bdfc0 body=340 status=ok
// SIG undefined FUN_1434bdfc0(void)

void FUN_1434bdfc0(undefined8 param_1,longlong param_2,longlong param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_1e8 [2];
  longlong local_1e0;
  longlong local_1d8;
  undefined1 local_1d0 [24];
  longlong local_1b8 [3];
  undefined **local_1a0;
  uint local_198;
  undefined4 local_188;
  
  local_1e8[0] = 0;
  if (param_5 != 0) {
    pcVar3 = (char *)FUN_143590eb0(param_6,&param_5,local_1e8);
    if (*pcVar3 == '\0') {
      return;
    }
    if (local_1e8[0] - 1 < 0x15) {
      FUN_143355730(local_1b8,(double)*(uint *)(param_3 + 0x10));
      local_188 = 2;
      local_198 = local_198 ^ (local_198 ^ local_1e8[0]) & 0x1f;
      (**(code **)(local_1b8[0] + 0x18))(local_1b8);
      puVar4 = (undefined8 *)FUN_143355d40(local_1b8,local_1d0);
      lVar2 = *(longlong *)(param_2 + 0x10);
      uVar6 = *puVar4;
      uVar5 = FWmfMediaPlayer::GetSamples(local_1b8);
      local_1e0 = FUN_143360a90(*(undefined8 *)(lVar2 + 0x218),uVar6,uVar5);
      *(int *)(local_1e0 + 0x18) = *(int *)(local_1e0 + 0x18) + 1;
      FUN_143590250(param_4,&local_1e0);
      piVar1 = (int *)(local_1e0 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      local_1a0 = &PTR_FUN_145af1858;
      FUN_143353a80(local_1b8);
      return;
    }
  }
  uVar6 = FUN_1435c8e40(&local_1e0,0x3ea,param_2);
  FUN_1435cbdf0(param_2,uVar6);
  piVar1 = (int *)(local_1d8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434be120 FUN_1434be120 body=347 status=ok
// SIG undefined FUN_1434be120(void)

void FUN_1434be120(undefined8 param_1,longlong param_2,uint *param_3,undefined8 param_4,int param_5,
                  byte *param_6)

{
  int *piVar1;
  undefined8 uVar2;
  char *pcVar3;
  longlong local_res18;
  uint local_98 [2];
  undefined1 local_90 [8];
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_68 [3];
  undefined **local_50;
  byte local_42;
  uint local_38;
  
  if ((*param_3 & 0x1f) - 2 < 2) {
    local_98[0] = 10;
    if ((param_5 != 0) && ((*param_6 & 0x1f) != 0)) {
      pcVar3 = (char *)FUN_143590eb0(param_6,&local_res18,local_98);
      if (*pcVar3 == '\0') {
        return;
      }
      if (0xe < local_98[0] - 2) {
        uVar2 = FUN_1435c8e40(local_90,0x3eb,param_2);
        FUN_1435cbdf0(param_2,uVar2);
        goto LAB_1434be16f;
      }
    }
    FUN_143354b50(local_68,param_3[4]);
    local_42 = local_42 & 0xfe;
    local_38 = local_38 ^ (local_38 ^ local_98[0]) & 0x1f;
    (**(code **)(local_68[0] + 0x18))(local_68);
    FUN_143355620(local_68,&local_80);
    local_res18 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),local_80,
                                local_78);
    *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
    FUN_143590250(param_4,&local_res18);
    piVar1 = (int *)(local_res18 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    local_50 = &PTR_FUN_145af1858;
    FUN_143353a80(local_68);
  }
  else {
    uVar2 = FUN_1435c8e40(local_90,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar2);
LAB_1434be16f:
    piVar1 = (int *)(local_88 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  return;
}



// FUNCTION 1434be290 FUN_1434be290 body=155 status=ok
// SIG undefined FUN_1434be290(void)

void FUN_1434be290(undefined8 param_1,undefined8 param_2,uint *param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined1 local_18 [4];
  undefined4 uStack_14;
  longlong lStack_10;
  
  if ((*param_3 & 0x1f) - 2 < 2) {
    uVar2 = param_3[4];
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe3;
    *param_4 = *param_4 | 3;
    *(ulonglong *)(param_4 + 4) = CONCAT44(uStack_14,uVar2);
    *(longlong *)(param_4 + 6) = lStack_10;
  }
  else {
    uVar3 = FUN_1435c8e40(local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434be340 FUN_1434be340 body=153 status=ok
// SIG undefined FUN_1434be340(void)

void FUN_1434be340(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435cafc0(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar1 == lVar3) {
      FUN_143590250(param_4,*(longlong *)(param_2 + 0x10) + 0x78);
      return;
    }
  }
  FUN_1434be120(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434be3f0 FUN_1434be3f0 body=194 status=ok
// SIG undefined FUN_1434be3f0(void)

void FUN_1434be3f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4,
                  undefined4 param_5,undefined8 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uStack_14;
  undefined8 uStack_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar1 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435cafc0(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar1 == lVar3) {
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      *param_4 = *param_4 & 0xffffffe3;
      *param_4 = *param_4 | 3;
      *(ulonglong *)(param_4 + 4) = (ulonglong)uStack_14 << 0x20;
      *(undefined8 *)(param_4 + 6) = uStack_10;
      return;
    }
  }
  FUN_1434be290(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



// FUNCTION 1434be4c0 FUN_1434be4c0 body=287 status=ok
// SIG undefined FUN_1434be4c0(void)

void FUN_1434be4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590eb0(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe3 | 3;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bdd00(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434be5f0 FUN_1434be5f0 body=287 status=ok
// SIG undefined FUN_1434be5f0(void)

void FUN_1434be5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590eb0(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe3 | 3;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bde60(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434be720 FUN_1434be720 body=287 status=ok
// SIG undefined FUN_1434be720(void)

void FUN_1434be720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int *piVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined1 local_res10 [8];
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint local_40 [2];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_40[0] = 0;
  local_38 = 0;
  pcVar2 = (char *)FUN_143590eb0(param_3,local_res10,local_58);
  if (*pcVar2 == '\0') {
    uVar3 = FUN_1435c8e40(&local_50,0x40a,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(CONCAT44(uStack_44,uStack_48) + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    if (9 < ((byte)local_40[0] & 0x1f)) {
      if ((local_40[0] >> 9 & 1) == 0) {
        FUN_1435920c0(local_40);
      }
      else {
        FUN_143592150();
      }
    }
    local_40[0] = local_40[0] & 0xffffffe3 | 3;
    local_50 = local_58[0];
    local_30 = local_58[0];
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_1434bdfc0(param_1,param_2,local_40,param_4,param_5,param_6);
  }
  if (9 < ((byte)local_40[0] & 0x1f)) {
    if ((local_40[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_40);
  }
  return;
}



// FUNCTION 1434be850 FUN_1434be850 body=43 status=ok
// SIG undefined FUN_1434be850(void)

undefined8 * FUN_1434be850(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 3;
  *param_1 = &PTR_FUN_145b18d60;
  return param_1;
}



// FUNCTION 1434be890 FUN_1434be890 body=261 status=ok
// SIG undefined FUN_1434be890(void)

undefined8 * FUN_1434be890(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15d50);
    *(undefined4 *)(puVar3 + 0x12) = 3;
    *puVar3 = &PTR_FUN_145b18d60;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15d50);
    *(undefined4 *)(puVar3 + 0x12) = 3;
    *puVar3 = &PTR_FUN_145b18ce8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x58);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *(undefined4 *)(puVar3 + 10) = 0;
    *puVar3 = &PTR_ForEachChild_GC_145b18dc0;
    *(undefined4 *)((longlong)puVar3 + 0x54) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1434be9b0 FUN_1434be9b0 body=115 status=ok
// SIG undefined FUN_1434be9b0(void)

undefined8 FUN_1434be9b0(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  char *pcVar1;
  undefined1 local_res20 [8];
  undefined4 local_28 [3];
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  pcVar1 = (char *)FUN_143590eb0(param_2,local_res20,local_28);
  if (*pcVar1 != '\0') {
    if (9 < ((byte)*param_3 & 0x1f)) {
      if ((*param_3 >> 9 & 1) == 0) {
        FUN_1435920c0(param_3);
      }
      else {
        FUN_143592150();
      }
    }
    *param_3 = *param_3 & 0xffffffe3;
    *param_3 = *param_3 | 3;
    *(ulonglong *)(param_3 + 4) = CONCAT44(uStack_1c,local_28[0]);
    *(undefined8 *)(param_3 + 6) = uStack_18;
    return 1;
  }
  return 0;
}



// FUNCTION 1434bea30 FUN_1434bea30 body=47 status=ok
// SIG undefined FUN_1434bea30(void)

undefined8 * FUN_1434bea30(undefined8 *param_1)

{
  FUN_1435b37d0();
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_ForEachChild_GC_145b18dc0;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0xffffffff;
  return param_1;
}



// FUNCTION 1434bea70 FUN_1434bea70 body=116 status=ok
// SIG undefined FUN_1434bea70(void)

void FUN_1434bea70(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_FUN_145b15ac0;
  lVar2 = 6;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434beaf0 FUN_1434beaf0 body=38 status=ok
// SIG undefined FUN_1434beaf0(void)

void FUN_1434beaf0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434beb12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434beb20 FUN_1434beb20 body=164 status=ok
// SIG undefined FUN_1434beb20(void)

void FUN_1434beb20(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined1 local_res18 [16];
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 uStack_18;
  
  if (*param_3 == 0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    local_20 = 0;
  }
  else {
    pcVar1 = (char *)FUN_143590eb0(param_4,local_res18,local_28);
    if (*pcVar1 == '\0') {
      return;
    }
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) != 0) {
        FUN_143592150();
        local_20 = local_28[0];
        goto LAB_1434bebaf;
      }
      FUN_1435920c0(param_2);
    }
    local_20 = local_28[0];
  }
LAB_1434bebaf:
  *param_2 = *param_2 & 0xffffffe3;
  *param_2 = *param_2 | 3;
  *(ulonglong *)(param_2 + 4) = CONCAT44(uStack_1c,local_20);
  *(undefined8 *)(param_2 + 6) = uStack_18;
  return;
}



// FUNCTION 1434bebd0 FUN_1434bebd0 body=43 status=ok
// SIG undefined FUN_1434bebd0(void)

undefined8 * FUN_1434bebd0(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 1;
  *param_1 = &PTR_FUN_145b18e98;
  return param_1;
}



// FUNCTION 1434bec20 FUN_1434bec20 body=110 status=ok
// SIG undefined FUN_1434bec20(void)

void FUN_1434bec20(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 1) {
    lVar3 = 0x28;
    if (*(char *)(param_3 + 4) != '\0') {
      lVar3 = 0x20;
    }
    FUN_143590250(param_4,lVar3 + *(longlong *)(param_2 + 0x10));
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434beca0 FUN_1434beca0 body=91 status=ok
// SIG undefined FUN_1434beca0(void)

void FUN_1434beca0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 1) {
    FUN_143590140(param_4,param_3);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434bed10 FUN_1434bed10 body=193 status=ok
// SIG undefined FUN_1434bed10(void)

void FUN_1434bed10(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar4 = *(longlong *)(param_3 + 4);
    uVar2 = FUN_1435caea0(param_2);
    lVar3 = FUN_1435b3ae0(uVar2);
    if (lVar4 == lVar3) {
      lVar4 = *(longlong *)(param_2 + 0x10) + 0x28;
      goto LAB_1434bedb9;
    }
  }
  if (((byte)*param_3 & 0x1f) != 1) {
    uVar2 = FUN_1435c8e40(local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar2);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 != 0) {
      return;
    }
    FUN_14335f920();
    return;
  }
  lVar4 = 0x28;
  if (*(char *)(param_3 + 4) != '\0') {
    lVar4 = 0x20;
  }
  lVar4 = lVar4 + *(longlong *)(param_2 + 0x10);
LAB_1434bedb9:
  FUN_143590250(param_4,lVar4);
  return;
}



// FUNCTION 1434bede0 FUN_1434bede0 body=235 status=ok
// SIG undefined FUN_1434bede0(void)

void FUN_1434bede0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,uint *param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18;
  uint7 uStack_17;
  longlong lStack_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = FUN_1435caea0(param_2);
    lVar4 = FUN_1435b3ae0(uVar3);
    if (lVar2 == lVar4) {
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      *param_4 = *param_4 & 0xffffffe1;
      *param_4 = *param_4 | 1;
      *(ulonglong *)(param_4 + 4) = (ulonglong)uStack_17 << 8;
      *(longlong *)(param_4 + 6) = lStack_10;
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 1) {
    FUN_143590140(param_4,param_3);
  }
  else {
    uVar3 = FUN_1435c8e40(&local_18,0x3ec,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(lStack_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434beee0 FUN_1434beee0 body=43 status=ok
// SIG undefined FUN_1434beee0(void)

undefined8 * FUN_1434beee0(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 1;
  *param_1 = &PTR_FUN_145b18f10;
  return param_1;
}



// FUNCTION 1434bef20 FUN_1434bef20 body=247 status=ok
// SIG undefined FUN_1434bef20(void)

undefined8 * FUN_1434bef20(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b14fc0);
    *(undefined4 *)(puVar3 + 0x12) = 1;
    *puVar3 = &PTR_FUN_145b18f10;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b14fc0);
    *(undefined4 *)(puVar3 + 0x12) = 1;
    *puVar3 = &PTR_FUN_145b18e98;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b18f70;
  }
  return param_1;
}



// FUNCTION 1434bf020 FUN_1434bf020 body=92 status=ok
// SIG undefined FUN_1434bf020(void)

undefined1 FUN_1434bf020(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  undefined1 uVar1;
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  uVar1 = FUN_1435909c0(param_2);
  if (9 < ((byte)*param_3 & 0x1f)) {
    if ((*param_3 >> 9 & 1) == 0) {
      FUN_1435920c0(param_3);
    }
    else {
      FUN_143592150();
    }
  }
  *param_3 = *param_3 & 0xffffffe1;
  *param_3 = *param_3 | 1;
  *(ulonglong *)(param_3 + 4) = CONCAT71(uStack_17,uVar1);
  *(undefined8 *)(param_3 + 6) = uStack_10;
  return 1;
}



// FUNCTION 1434bf090 FUN_1434bf090 body=33 status=ok
// SIG undefined FUN_1434bf090(void)

undefined8 * FUN_1434bf090(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b18f70;
  return param_1;
}



// FUNCTION 1434bf0c0 FUN_1434bf0c0 body=116 status=ok
// SIG undefined FUN_1434bf0c0(void)

void FUN_1434bf0c0(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  ppuVar1 = &PTR_FUN_145b166d0;
  lVar2 = 2;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434bf140 FUN_1434bf140 body=38 status=ok
// SIG undefined FUN_1434bf140(void)

void FUN_1434bf140(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434bf162. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434bf170 FUN_1434bf170 body=148 status=ok
// SIG undefined FUN_1434bf170(void)

void FUN_1434bf170(undefined8 param_1,uint *param_2,int *param_3,undefined8 param_4)

{
  undefined1 local_18;
  undefined7 uStack_17;
  undefined8 uStack_10;
  
  if (*param_3 == 0) {
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    local_18 = 0;
  }
  else {
    local_18 = FUN_1435909c0(param_4);
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
  }
  *param_2 = *param_2 & 0xffffffe1;
  *param_2 = *param_2 | 1;
  *(ulonglong *)(param_2 + 4) = CONCAT71(uStack_17,local_18);
  *(undefined8 *)(param_2 + 6) = uStack_10;
  return;
}



// FUNCTION 1434bf210 FUN_1434bf210 body=43 status=ok
// SIG undefined FUN_1434bf210(void)

undefined8 * FUN_1434bf210(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 5;
  *param_1 = &PTR_FUN_145b19048;
  return param_1;
}



// FUNCTION 1434bf260 FUN_1434bf260 body=118 status=ok
// SIG undefined FUN_1434bf260(void)

void FUN_1434bf260(undefined8 param_1,undefined8 param_2,longlong param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong local_res18 [2];
  uint uStack_14;
  uint uStack_10;
  uint uStack_c;
  
  local_res18[0] = *(longlong *)(param_3 + 0x10);
  *(int *)(local_res18[0] + 0x18) = *(int *)(local_res18[0] + 0x18) + 1;
  uVar2 = FUN_14335fa60(local_res18);
  if (9 < ((byte)*param_4 & 0x1f)) {
    if ((*param_4 >> 9 & 1) == 0) {
      FUN_1435920c0(param_4);
    }
    else {
      FUN_143592150();
    }
  }
  *param_4 = *param_4 & 0xffffffe2;
  *param_4 = *param_4 | 2;
  param_4[4] = uVar2;
  param_4[5] = uStack_14;
  param_4[6] = uStack_10;
  param_4[7] = uStack_c;
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bf2e0 FUN_1434bf2e0 body=606 status=ok
// SIG undefined FUN_1434bf2e0(void)

void FUN_1434bf2e0(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4,uint param_5
                  ,longlong param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  int local_58 [2];
  longlong local_50;
  longlong local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  uint uStack_28;
  uint uStack_24;
  longlong *local_20;
  undefined8 uStack_18;
  
  uVar5 = param_5;
  if (param_5 == 0) {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    local_20 = (longlong *)CONCAT44(local_20._4_4_,0xffffffff);
    *(longlong **)(param_4 + 4) = local_20;
    *(undefined8 *)(param_4 + 6) = uStack_18;
    return;
  }
  lVar3 = *(longlong *)(param_2 + 0x10);
  lVar4 = *(longlong *)(lVar3 + 0x218);
  local_20 = (longlong *)(lVar4 + 0x48);
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar10 = (char *)FUN_1435911f0(param_3,&param_5,&local_20);
  lVar4 = param_6;
  if (*pcVar10 == '\0') goto LAB_1434bf515;
  lVar3 = *(longlong *)(lVar3 + 0x218);
  local_40 = (longlong *)(lVar3 + 0x48);
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar10 = (char *)FUN_1435911f0(param_6,&param_5,&local_40);
  if (*pcVar10 != '\0') {
    iVar6 = FUN_14335fa60(&local_40);
    if (iVar6 == 0) {
      FUN_1434f0780(param_4,0);
    }
    else {
      local_50 = *local_40;
      local_48 = *local_20;
      local_58[0] = 0;
      if (1 < uVar5) {
        pcVar10 = (char *)FUN_143590b70(lVar4 + 0x20,&param_5,local_58);
        if (*pcVar10 == '\0') goto LAB_1434bf4fe;
      }
      iVar7 = FUN_143307250(&local_50);
      iVar6 = 0;
      if (iVar7 == 0) {
        local_50 = local_50 + -1;
        iVar6 = 0;
      }
      while( true ) {
        iVar8 = FUN_143307250(&local_48);
        if (iVar8 == 0) break;
        if ((local_58[0] <= iVar6) && (iVar8 == iVar7)) {
          local_38 = local_48;
          local_30 = local_50;
          do {
            iVar8 = FUN_143307250(&local_38);
            if (iVar8 == 0) {
              local_38 = local_38 + -1;
            }
            iVar9 = FUN_143307250(&local_30);
            if (iVar9 == 0) {
              local_30 = local_30 + -1;
            }
            if (iVar8 == 0) break;
            if (iVar9 == 0) goto LAB_1434bf499;
          } while (iVar8 == iVar9);
          if (iVar9 == 0) {
LAB_1434bf499:
            if (9 < ((byte)*param_4 & 0x1f)) {
              if ((*param_4 >> 9 & 1) != 0) {
                FUN_143592150();
                local_30 = CONCAT44(local_30._4_4_,iVar6);
                goto LAB_1434bf4f0;
              }
              FUN_1435920c0(param_4);
            }
            local_30 = CONCAT44(local_30._4_4_,iVar6);
            goto LAB_1434bf4f0;
          }
          if (iVar8 == 0) {
            FUN_1434f0780(param_4,0xffffffff);
            goto LAB_1434bf4fe;
          }
        }
        iVar6 = iVar6 + 1;
      }
      local_48 = local_48 + -1;
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      local_30 = CONCAT44(local_30._4_4_,0xffffffff);
LAB_1434bf4f0:
      *param_4 = *param_4 & 0xffffffe2;
      *param_4 = *param_4 | 2;
      param_4[4] = (uint)local_30;
      param_4[5] = local_30._4_4_;
      param_4[6] = uStack_28;
      param_4[7] = uStack_24;
    }
  }
LAB_1434bf4fe:
  plVar2 = local_40 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
LAB_1434bf515:
  plVar2 = local_20 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bf550 FUN_1434bf550 body=693 status=ok
// SIG undefined FUN_1434bf550(void)

void FUN_1434bf550(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4,uint param_5
                  ,longlong param_6)

{
  int *piVar1;
  double *pdVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  double local_58;
  longlong local_50;
  double *local_48;
  longlong *local_40;
  longlong local_38;
  undefined8 local_30;
  uint uStack_28;
  uint uStack_24;
  
  uVar11 = param_5;
  if (param_5 == 0) {
    if (9 < ((byte)*param_4 & 0x1f)) {
      if ((*param_4 >> 9 & 1) == 0) {
        FUN_1435920c0(param_4);
      }
      else {
        FUN_143592150();
      }
    }
    *param_4 = *param_4 & 0xffffffe2;
    *param_4 = *param_4 | 2;
    local_30 = (double)CONCAT44(local_30._4_4_,0xffffffff);
    *(double *)(param_4 + 4) = local_30;
    *(ulonglong *)(param_4 + 6) = CONCAT44(uStack_24,uStack_28);
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x10);
  lVar5 = *(longlong *)(lVar4 + 0x218);
  local_40 = (longlong *)(lVar5 + 0x48);
  piVar1 = (int *)(lVar5 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar9 = (char *)FUN_1435911f0(param_3,&param_5,&local_40);
  lVar5 = param_6;
  if (*pcVar9 == '\0') goto LAB_1434bf7dd;
  lVar4 = *(longlong *)(lVar4 + 0x218);
  local_48 = (double *)(lVar4 + 0x48);
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar9 = (char *)FUN_1435911f0(param_6,&param_5,&local_48);
  if (*pcVar9 != '\0') {
    uVar10 = 0;
    iVar12 = 0x7ffffff;
    local_50 = *local_40;
    local_58 = *local_48;
    if (1 < uVar11) {
      local_30 = 134217727.0;
      pcVar9 = (char *)FUN_143590af0(lVar5 + 0x20,&param_5,&local_30);
      if (*pcVar9 == '\0') goto LAB_1434bf7ce;
      if ((((((ulonglong)local_30 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
           (((ulonglong)local_30 & 0xfffffffffffff) == 0)) && (local_30 != INFINITY)) &&
         (iVar12 = 0, local_30 != -INFINITY)) {
        iVar12 = (int)local_30;
      }
    }
    iVar6 = FUN_14335fa60(&local_48);
    if (iVar6 == 0) {
      if (uVar11 < 2) {
        FUN_1434f0780(param_4,(int)local_40[4]);
      }
      else {
        FUN_1434f0780(param_4,iVar12);
      }
    }
    else {
      iVar6 = FUN_143307250(&local_58);
      if (iVar6 == 0) {
        local_58 = (double)((longlong)local_58 + -1);
      }
      uVar11 = 0xffffffff;
      while (iVar7 = FUN_143307250(&local_50), iVar7 != 0) {
        if (((int)uVar10 <= iVar12) && (iVar7 == iVar6)) {
          local_38 = local_50;
          local_30 = local_58;
          do {
            iVar7 = FUN_143307250(&local_38);
            if (iVar7 == 0) {
              local_38 = local_38 + -1;
            }
            iVar8 = FUN_143307250(&local_30);
            if (iVar8 == 0) {
              local_30 = (double)((longlong)local_30 + -1);
            }
            if (iVar7 == 0) break;
            if (iVar8 == 0) goto LAB_1434bf77b;
          } while (iVar7 == iVar8);
          if (iVar8 == 0) {
LAB_1434bf77b:
            uVar11 = uVar10;
          }
          if (iVar7 == 0) goto LAB_1434bf78a;
        }
        uVar10 = uVar10 + 1;
      }
      local_50 = local_50 + -1;
LAB_1434bf78a:
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      *param_4 = *param_4 & 0xffffffe2;
      *param_4 = *param_4 | 2;
      local_30 = (double)CONCAT44(local_30._4_4_,uVar11);
      param_4[4] = uVar11;
      param_4[5] = local_30._4_4_;
      param_4[6] = uStack_28;
      param_4[7] = uStack_24;
    }
  }
LAB_1434bf7ce:
  pdVar2 = local_48 + 3;
  *(int *)pdVar2 = *(int *)pdVar2 + -1;
  if (*(int *)pdVar2 == 0) {
    FUN_14335f920();
  }
LAB_1434bf7dd:
  plVar3 = local_40 + 3;
  *(int *)plVar3 = (int)*plVar3 + -1;
  if ((int)*plVar3 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bf810 FUN_1434bf810 body=295 status=ok
// SIG undefined FUN_1434bf810(void)

void FUN_1434bf810(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_res10 [8];
  longlong local_28;
  longlong local_20;
  double local_18 [2];
  
  lVar6 = *(longlong *)(param_2 + 0x10);
  lVar2 = *(longlong *)(lVar6 + 0x218);
  local_20 = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_3,local_res10,&local_20);
  if ((*pcVar5 != '\0') &&
     ((local_18[0] = 0.0, param_5 == 0 ||
      (pcVar5 = (char *)FUN_143590af0(param_6,local_res10,local_18), *pcVar5 != '\0')))) {
    lVar6 = *(longlong *)(lVar6 + 0x218);
    local_28 = lVar6 + 0x48;
    uVar7 = (uint)local_18[0];
    piVar1 = (int *)(lVar6 + 0x60);
    *piVar1 = *piVar1 + 1;
    if ((-1 < (int)uVar7) && (uVar3 = FUN_14335fa60(&local_20), uVar7 < uVar3)) {
      uVar4 = FUN_14335fad0(&local_20,uVar7);
      lVar6 = FUN_14335fc20(&local_28,uVar4);
      *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + 2;
      piVar1 = (int *)(local_28 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      piVar1 = (int *)(lVar6 + 0x18);
      *piVar1 = *piVar1 + -1;
      local_28 = lVar6;
      if (*piVar1 == 0) {
        FUN_14335f920(lVar6);
      }
    }
    FUN_143590250(param_4,&local_28);
    piVar1 = (int *)(local_28 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bf940 FUN_1434bf940 body=282 status=ok
// SIG undefined FUN_1434bf940(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1434bf940(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4,int param_5,
                  undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar8;
  undefined8 uVar7;
  undefined1 local_res10 [24];
  longlong local_38 [3];
  uint uStack_20;
  uint uStack_1c;
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_38[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar4 = (char *)FUN_1435911f0(param_3,local_res10,local_38);
  if (*pcVar4 != '\0') {
    uVar6 = 0;
    uVar8 = 0;
    local_38[1] = 0;
    if (param_5 != 0) {
      pcVar4 = (char *)FUN_143590af0(param_6,local_res10,local_38 + 1);
      if (*pcVar4 == '\0') goto LAB_1434bfa40;
      uVar6 = (undefined4)local_38[1];
      uVar8 = (undefined4)((ulonglong)local_38[1] >> 0x20);
    }
    uVar5 = (uint)(double)CONCAT44(uVar8,uVar6);
    if (((int)uVar5 < 0) || (uVar3 = FUN_14335fa60(local_38), uVar3 <= uVar5)) {
      uVar7 = Scaleform::GFx::NumberUtil::NaN();
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      *param_4 = *param_4 & 0xffffffe4;
      *param_4 = *param_4 | 4;
      *(undefined8 *)(param_4 + 4) = uVar7;
      param_4[6] = uStack_20;
      param_4[7] = uStack_1c;
      local_38[2] = uVar7;
    }
    else {
      uVar5 = FUN_14335fad0(local_38,uVar5);
      FUN_1434f06a0(param_4,(double)uVar5);
    }
  }
LAB_1434bfa40:
  piVar1 = (int *)(local_38[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bfa60 FUN_1434bfa60 body=232 status=ok
// SIG undefined FUN_1434bfa60(void)

void FUN_1434bfa60(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res10 [8];
  longlong local_18;
  longlong local_10;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x218);
  local_18 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar4 = (char *)FUN_1435911f0(param_3,local_res10,&local_18);
  if (*pcVar4 != '\0') {
    lVar2 = *(longlong *)(lVar2 + 0x218);
    uVar6 = 0;
    local_10 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    if (param_5 != 0) {
      do {
        pcVar4 = (char *)FUN_1435911f0(uVar6 * 0x20 + param_6,local_res10,&local_10);
        if (*pcVar4 == '\0') goto LAB_1434bfb0f;
        FUN_143360170(&local_18,&local_10);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < param_5);
    }
    FUN_143590250(param_4,&local_18);
LAB_1434bfb0f:
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bfb50 FUN_1434bfb50 body=420 status=ok
// SIG undefined FUN_1434bfb50(void)

void FUN_1434bfb50(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4,uint param_5
                  ,undefined8 param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  undefined8 uVar7;
  double *pdVar8;
  int iVar9;
  double local_res10;
  double local_38;
  uint uStack_30;
  uint uStack_2c;
  double *local_28;
  double *local_20 [3];
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x218);
  local_28 = (double *)(lVar3 + 0x48);
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar6 = (char *)FUN_1435911f0(param_3,&local_res10,&local_28);
  if (*pcVar6 != '\0') {
    if (param_5 == 0) {
      iVar9 = *(int *)(local_28 + 4);
      if (9 < ((byte)*param_4 & 0x1f)) {
        if ((*param_4 >> 9 & 1) == 0) {
          FUN_1435920c0(param_4);
        }
        else {
          FUN_143592150();
        }
      }
      *param_4 = *param_4 & 0xffffffe4;
      *param_4 = *param_4 | 4;
      *(double *)(param_4 + 4) = (double)(iVar9 == 0);
      param_4[6] = uStack_30;
      param_4[7] = uStack_2c;
      local_38 = (double)(iVar9 == 0);
    }
    else {
      if (param_5 < 2) {
        lVar2 = *(longlong *)(lVar2 + 0x218);
        local_20[0] = (double *)(lVar2 + 0x48);
        piVar1 = (int *)(lVar2 + 0x60);
        *piVar1 = *piVar1 + 1;
        pcVar6 = (char *)FUN_1435911f0(param_6,&local_res10,local_20);
        pdVar8 = local_20[0];
        if (*pcVar6 != '\0') {
          iVar9 = 0;
          if (local_20[0] != local_28) {
            local_res10 = *local_20[0];
            local_38 = *local_28;
            do {
              iVar4 = FUN_143307250(&local_res10);
              if (iVar4 == 0) {
                local_res10 = (double)((longlong)local_res10 + -1);
              }
              iVar5 = FUN_143307250(&local_38);
              if (iVar5 == 0) {
                local_38 = (double)((longlong)local_38 + -1);
              }
              if ((iVar4 == 0) || (iVar5 == 0)) {
                if ((iVar4 != iVar5) && (iVar9 = 1, iVar5 == 0)) {
                  iVar9 = -1;
                }
                break;
              }
              iVar9 = iVar5 - iVar4;
            } while (iVar9 == 0);
          }
          FUN_1434f06a0(param_4,(double)iVar9);
          pdVar8 = local_20[0];
        }
      }
      else {
        uVar7 = FUN_1435c8e40(&local_38,0x427,param_2);
        FUN_1435cbef0(param_2,uVar7);
        pdVar8 = (double *)CONCAT44(uStack_2c,uStack_30);
      }
      pdVar8 = pdVar8 + 3;
      *(int *)pdVar8 = *(int *)pdVar8 + -1;
      if (*(int *)pdVar8 == 0) {
        FUN_14335f920();
      }
    }
  }
  pdVar8 = local_28 + 3;
  *(int *)pdVar8 = *(int *)pdVar8 + -1;
  if (*(int *)pdVar8 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434bfd00 FUN_1434bfd00 body=1004 status=ok
// SIG undefined FUN_1434bfd00(void)

void FUN_1434bfd00(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  int param_5,uint *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  char *pcVar7;
  ulonglong *puVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong local_res10;
  ulonglong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  uint *local_48;
  uint local_40 [2];
  undefined8 local_38;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x218);
  local_58 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar7 = (char *)FUN_1435911f0(param_3,&local_res10,&local_58);
  if (((*pcVar7 == '\0') || (param_5 == 0)) || (uVar9 = *param_6 & 0x1f, uVar9 == 0))
  goto LAB_1434bfee2;
  if (uVar9 == 0xc) {
    bVar12 = *(longlong *)(param_6 + 4) == 0;
LAB_1434bfd91:
    if (bVar12) goto LAB_1434bfee2;
  }
  else if (uVar9 == 10) {
    bVar12 = *(longlong *)(param_6 + 4) == *(longlong *)(*(longlong *)(param_6 + 4) + 8) + 0x80;
    goto LAB_1434bfd91;
  }
  local_68 = 0;
  if ((uVar9 == 0xc) &&
     (cVar5 = FUN_1435c8b00(param_2,param_6,"RegExp",*(undefined8 *)(param_2 + 0x1c8)),
     cVar5 != '\0')) {
    uVar4 = *(ulonglong *)(param_6 + 4);
    uVar11 = local_68;
    if (uVar4 != local_68) {
      if (uVar4 != 0) {
        *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
      }
      uVar11 = uVar4;
      if (((local_68 != 0) && ((local_68 & 1) == 0)) && ((*(uint *)(local_68 + 8) & 0x3fffff) != 0))
      {
        *(uint *)(local_68 + 8) = *(uint *)(local_68 + 8) - 1;
        FUN_1434ef880();
      }
    }
LAB_1434bff48:
    local_68 = uVar11;
    if (*(char *)(local_68 + 0x58) == '\0') {
      local_res10 = 0;
      FUN_1434c3020(local_68,&local_res10,&local_58);
      uVar11 = local_res10;
    }
    else {
      puVar8 = (ulonglong *)FUN_1435ca860(param_2,&local_60);
      uVar11 = *puVar8;
      while( true ) {
        local_res10 = 0;
        FUN_1434c3020(local_68,&local_res10,&local_58);
        uVar4 = local_res10;
        if (local_res10 == 0) break;
        local_40[0] = 0;
        local_38 = 0;
        FUN_143590450(local_40,local_res10);
        if (*(longlong *)(uVar11 + 0x40) == *(longlong *)(uVar11 + 0x80)) {
          FUN_1434f0300(uVar11 + 0x78,*(undefined8 *)(uVar11 + 0x90),
                        *(longlong *)(uVar11 + 0x80) + 1);
          puVar10 = (uint *)(*(longlong *)(uVar11 + 0x78) + -0x20 +
                            *(longlong *)(uVar11 + 0x80) * 0x20);
          if (puVar10 != (uint *)0x0) {
            *puVar10 = local_40[0];
            *(undefined8 *)(puVar10 + 2) = local_38;
            puVar10[4] = local_30;
            puVar10[5] = uStack_2c;
            puVar10[6] = uStack_28;
            puVar10[7] = uStack_24;
            if (9 < ((byte)local_40[0] & 0x1f)) {
              if ((local_40[0] >> 9 & 1) == 0) {
                FUN_143592070(local_40);
              }
              else {
                FUN_143592140();
              }
            }
          }
        }
        else {
          *(longlong *)(uVar11 + 0x50) = *(longlong *)(uVar11 + 0x40);
          local_50 = uVar11 + 0x50;
          local_48 = local_40;
          FUN_1434e4980(uVar11 + 0x98,*(undefined8 *)(uVar11 + 0xa0),&local_50);
        }
        *(longlong *)(uVar11 + 0x40) = *(longlong *)(uVar11 + 0x40) + 1;
        if (9 < ((byte)local_40[0] & 0x1f)) {
          if ((local_40[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_40);
          }
          else {
            FUN_143592150();
          }
        }
        if (((uVar4 & 1) == 0) && ((*(uint *)(uVar4 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
          FUN_1434ef880(uVar4);
        }
      }
    }
    FUN_1435903c0(param_4,uVar11);
    if (((uVar11 != 0) && ((uVar11 & 1) == 0)) && ((*(uint *)(uVar11 + 8) & 0x3fffff) != 0)) {
      *(uint *)(uVar11 + 8) = *(uint *)(uVar11 + 8) - 1;
      FUN_1434ef880(uVar11);
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x218);
    local_60 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar7 = (char *)FUN_1435911f0(param_6,&local_res10,&local_60);
    if (*pcVar7 != '\0') {
      Scaleform::GFx::AS3::Value::Value(local_40,&local_60);
      FUN_1435ccdc0(param_2,&local_res10,&local_68,"RegExp",1,local_40);
      bVar6 = (byte)local_40[0] & 0x1f;
      if ((char)local_res10 != '\0') {
        if (9 < bVar6) {
          if ((local_40[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_40);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(local_60 + 0x18);
        *piVar1 = *piVar1 + -1;
        uVar11 = local_68;
        if (*piVar1 == 0) {
          FUN_14335f920();
          uVar11 = local_68;
        }
        goto LAB_1434bff48;
      }
      if (9 < bVar6) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
    }
    piVar1 = (int *)(local_60 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (((local_68 != 0) && ((local_68 & 1) == 0)) && ((*(uint *)(local_68 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_68 + 8) = *(uint *)(local_68 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434bfee2:
  piVar1 = (int *)(local_58 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c0100 FUN_1434c0100 body=1431 status=ok
// SIG undefined FUN_1434c0100(void)

void FUN_1434c0100(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint *param_6)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  bool bVar17;
  ulonglong local_res10;
  longlong *local_78;
  longlong local_70;
  undefined8 *local_68;
  ulonglong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  longlong local_40;
  longlong local_38 [2];
  
  lVar3 = *(longlong *)(param_2 + 0x10);
  local_78 = (longlong *)(*(longlong *)(lVar3 + 0x218) + 0x48);
  piVar1 = (int *)(*(longlong *)(lVar3 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar10 = (char *)FUN_1435911f0(param_3,&local_res10,&local_78);
  if (((*pcVar10 == '\0') || (param_5 == 0)) || (uVar8 = *param_6 & 0x1f, uVar8 == 0))
  goto LAB_1434c066a;
  if (uVar8 == 0xc) {
    bVar17 = *(longlong *)(param_6 + 4) == 0;
LAB_1434c019a:
    if (bVar17) goto LAB_1434c066a;
  }
  else if (uVar8 == 10) {
    bVar17 = *(longlong *)(param_6 + 4) == *(longlong *)(*(longlong *)(param_6 + 4) + 8) + 0x80;
    goto LAB_1434c019a;
  }
  local_68 = (undefined8 *)(*(longlong *)(lVar3 + 0x218) + 0x48);
  uVar15 = 0;
  uVar13 = 0;
  piVar1 = (int *)(*(longlong *)(lVar3 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_6 & 0x1f) == 0xc) &&
     (cVar7 = FUN_1435c8b00(param_2,param_6,"RegExp",*(undefined8 *)(param_2 + 0x1c8)),
     cVar7 != '\0')) {
    uVar4 = *(ulonglong *)(param_6 + 4);
    uVar13 = uVar15;
    if (uVar4 != 0) {
      *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
      uVar13 = uVar4;
    }
LAB_1434c0226:
    local_70 = *(longlong *)(lVar3 + 0x218) + 0x48;
    piVar1 = (int *)(*(longlong *)(lVar3 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    if (((param_5 < 2) ||
        (cVar7 = Scaleform::GFx::AS3::Value::IsNullOrUndefined(param_6 + 8), cVar7 != '\0')) ||
       (pcVar10 = (char *)FUN_1435911f0(param_6 + 8,&local_res10,&local_70), *pcVar10 != '\0')) {
      if (uVar13 == 0) {
        pcVar10 = strstr((char *)*local_78,(char *)*local_68);
        if (pcVar10 == (char *)0x0) {
          FUN_143590250(param_4,&local_78);
        }
        else {
          lVar6 = *local_78;
          uVar8 = FUN_14335fa60(&local_68);
          lVar16 = (ulonglong)uVar8 + ((longlong)pcVar10 - lVar6);
          FUN_1432c3140(&local_60,*local_78,(longlong)pcVar10 - lVar6);
          FUN_1432c3140(&local_58,*local_78 + lVar16,(ulonglong)*(uint *)(local_78 + 4) - lVar16);
          local_50 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                   (longlong)(local_58 & 0xfffffffffffffffc) + 0xc,
                                   *(ulonglong *)(local_58 & 0xfffffffffffffffc) &
                                   0x7fffffffffffffff);
          *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
          local_res10 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                      (longlong)(local_60 & 0xfffffffffffffffc) + 0xc,
                                      *(ulonglong *)(local_60 & 0xfffffffffffffffc) &
                                      0x7fffffffffffffff);
          *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
          uVar11 = Scaleform::GFx::ASString::operator+(&local_res10,&local_40,&local_70);
          puVar12 = (undefined8 *)Scaleform::GFx::ASString::operator+(uVar11,local_38,&local_50);
          plVar5 = (longlong *)*puVar12;
          *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
          plVar2 = local_78 + 3;
          *(int *)plVar2 = (int)*plVar2 + -1;
          if ((int)*plVar2 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_38[0] + 0x18);
          *piVar1 = *piVar1 + -1;
          local_78 = plVar5;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_40 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_res10 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          FUN_143590250(param_4,&local_78);
          uVar15 = local_58 & 0xfffffffffffffffc;
          iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffff);
          if (iVar9 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
          }
          uVar15 = local_60 & 0xfffffffffffffffc;
          iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffff);
          if (iVar9 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
          }
        }
      }
      else {
        while( true ) {
          local_60 = 0;
          FUN_1434c3020(uVar13,&local_60,&local_78);
          if (local_60 == 0) break;
          if (((local_60 & 1) == 0) && ((*(uint *)(local_60 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_60 + 8) = *(uint *)(local_60 + 8) - 1;
            FUN_1434ef880();
          }
          iVar9 = *(int *)(uVar13 + 0x48);
          iVar14 = *(int *)(uVar13 + 0x4c) + iVar9;
          FUN_1432c3140(&local_48,*local_78,(longlong)iVar9);
          FUN_1432c3140(&local_res10,(longlong)iVar14 + *local_78,(int)local_78[4] - iVar14);
          local_50 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                   (longlong)(local_res10 & 0xfffffffffffffffc) + 0xc,
                                   *(ulonglong *)(local_res10 & 0xfffffffffffffffc) &
                                   0x7fffffffffffffff);
          *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
          local_58 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                   (longlong)(local_48 & 0xfffffffffffffffc) + 0xc,
                                   *(ulonglong *)(local_48 & 0xfffffffffffffffc) &
                                   0x7fffffffffffffff);
          *(int *)(local_58 + 0x18) = *(int *)(local_58 + 0x18) + 1;
          uVar11 = Scaleform::GFx::ASString::operator+(&local_58,local_38,&local_70);
          puVar12 = (undefined8 *)Scaleform::GFx::ASString::operator+(uVar11,&local_40,&local_50);
          plVar5 = (longlong *)*puVar12;
          *(int *)(plVar5 + 3) = (int)plVar5[3] + 1;
          plVar2 = local_78 + 3;
          *(int *)plVar2 = (int)*plVar2 + -1;
          if ((int)*plVar2 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_40 + 0x18);
          *piVar1 = *piVar1 + -1;
          local_78 = plVar5;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_38[0] + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_58 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          piVar1 = (int *)(local_50 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          iVar14 = *(int *)(local_70 + 0x20);
          FUN_143590540();
          uVar15 = local_res10 & 0xfffffffffffffffc;
          *(int *)(uVar13 + 0x5c) = iVar14 + iVar9;
          if (*(char *)(uVar13 + 0x58) == '\0') {
            iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffff);
            if (iVar9 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
            }
            iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                              ((local_48 & 0xfffffffffffffffc) + 8,0xffffffff);
            if (iVar9 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_48 & 0xfffffffffffffffc);
            }
            break;
          }
          iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffff);
          if (iVar9 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
          }
          uVar15 = local_48 & 0xfffffffffffffffc;
          iVar9 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar15 + 8,0xffffffff);
          if (iVar9 == 1) {
            (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar15);
          }
        }
        FUN_143590250(param_4,&local_78);
      }
    }
    piVar1 = (int *)(local_70 + 0x18);
    *piVar1 = *piVar1 + -1;
    uVar15 = uVar13;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    pcVar10 = (char *)FUN_1435911f0(param_6,&local_res10,&local_68);
    if (*pcVar10 != '\0') goto LAB_1434c0226;
  }
  piVar1 = (int *)(local_68 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  if (((uVar15 != 0) && ((uVar15 & 1) == 0)) && ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0)) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880(uVar15);
  }
LAB_1434c066a:
  plVar2 = local_78 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c06a0 FUN_1434c06a0 body=743 status=ok
// SIG undefined FUN_1434c06a0(void)

void FUN_1434c06a0(undefined8 param_1,longlong param_2,undefined8 param_3,uint *param_4,int param_5,
                  uint *param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  char *pcVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool bVar12;
  ulonglong local_res10;
  ulonglong local_res20;
  undefined8 local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 *local_48;
  uint local_40 [10];
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  if (9 < ((byte)*param_4 & 0x1f)) {
    if ((*param_4 >> 9 & 1) == 0) {
      FUN_1435920c0(param_4);
    }
    else {
      FUN_143592150();
    }
  }
  *param_4 = *param_4 & 0xffffffe2;
  *param_4 = *param_4 | 2;
  local_58 = CONCAT44(local_58._4_4_,0xffffffff);
  param_4[4] = 0xffffffff;
  param_4[5] = local_58._4_4_;
  param_4[6] = uStack_50;
  param_4[7] = uStack_4c;
  lVar3 = *(longlong *)(lVar2 + 0x218);
  local_48 = (undefined8 *)(lVar3 + 0x48);
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar8 = (char *)FUN_1435911f0(param_3,&local_res10,&local_48);
  if (((*pcVar8 == '\0') || (param_5 == 0)) || (uVar10 = *param_6 & 0x1f, uVar10 == 0))
  goto LAB_1434c0894;
  if (uVar10 == 0xc) {
    bVar12 = *(longlong *)(param_6 + 4) == 0;
LAB_1434c075e:
    if (bVar12) goto LAB_1434c0894;
  }
  else if (uVar10 == 10) {
    bVar12 = *(longlong *)(param_6 + 4) == *(longlong *)(*(longlong *)(param_6 + 4) + 8) + 0x80;
    goto LAB_1434c075e;
  }
  local_res20 = 0;
  if ((uVar10 == 0xc) &&
     (cVar5 = FUN_1435c8b00(param_2,param_6,"RegExp",*(undefined8 *)(param_2 + 0x1c8)),
     cVar5 != '\0')) {
    uVar4 = *(ulonglong *)(param_6 + 4);
    uVar11 = local_res20;
    if (uVar4 != local_res20) {
      if (uVar4 != 0) {
        *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
      }
      uVar11 = uVar4;
      if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
         ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
        FUN_1434ef880();
      }
    }
LAB_1434c08ee:
    local_res20 = uVar11;
    local_res10 = 0;
    FUN_1434c3020(local_res20,&local_res10,&local_48);
    if (local_res10 != 0) {
      if (((local_res10 & 1) == 0) && ((*(uint *)(local_res10 + 8) & 0x3fffff) != 0)) {
        *(uint *)(local_res10 + 8) = *(uint *)(local_res10 + 8) - 1;
        FUN_1434ef880();
      }
      FUN_1432c3140(&local_res10,*local_48,(longlong)*(int *)(local_res20 + 0x48));
      uVar9 = FUN_1432c3580(&local_res10);
      FUN_1434f0780(param_4,uVar9);
      uVar11 = local_res10 & 0xfffffffffffffffc;
      iVar7 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar11 + 8,0xffffffff);
      if (iVar7 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar11);
      }
    }
  }
  else {
    lVar2 = *(longlong *)(lVar2 + 0x218);
    local_58 = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar8 = (char *)FUN_1435911f0(param_6,&local_res10,&local_58);
    if (*pcVar8 != '\0') {
      Scaleform::GFx::AS3::Value::Value(local_40,&local_58);
      FUN_1435ccdc0(param_2,&local_res10,&local_res20,"RegExp",1,local_40);
      bVar6 = (byte)local_40[0] & 0x1f;
      if ((char)local_res10 != '\0') {
        if (9 < bVar6) {
          if ((local_40[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_40);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(local_58 + 0x18);
        *piVar1 = *piVar1 + -1;
        uVar11 = local_res20;
        if (*piVar1 == 0) {
          FUN_14335f920();
          uVar11 = local_res20;
        }
        goto LAB_1434c08ee;
      }
      if (9 < bVar6) {
        if ((local_40[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_40);
        }
        else {
          FUN_143592150();
        }
      }
    }
    piVar1 = (int *)(local_58 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  if (((local_res20 != 0) && ((local_res20 & 1) == 0)) &&
     ((*(uint *)(local_res20 + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res20 + 8) = *(uint *)(local_res20 + 8) - 1;
    FUN_1434ef880();
  }
LAB_1434c0894:
  piVar1 = (int *)(local_48 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c0990 FUN_1434c0990 body=398 status=ok
// SIG undefined FUN_1434c0990(void)

void FUN_1434c0990(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  longlong local_res10;
  longlong local_38;
  double local_30;
  double local_28 [2];
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  lVar3 = *(longlong *)(lVar2 + 0x218);
  local_38 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar6 = (char *)FUN_1435911f0(param_3,&local_res10,&local_38);
  if (*pcVar6 == '\0') goto LAB_1434c0aff;
  if (param_5 == 0) {
    FUN_143590250(param_4,&local_38);
    goto LAB_1434c0aff;
  }
  iVar4 = FUN_14335fa60(&local_38);
  iVar7 = 0;
  iVar8 = 0x7fffffff;
  if (param_5 != 0) {
    pcVar6 = (char *)FUN_143590af0(param_6,&local_res10,&local_30);
    if (*pcVar6 == '\0') goto LAB_1434c0aff;
    iVar7 = iVar4;
    if (local_30 <= (double)iVar4) {
      iVar7 = (int)local_30;
    }
    if (iVar7 < 0) {
      iVar7 = iVar7 + iVar4;
    }
  }
  if (param_5 < 2) {
LAB_1434c0ab7:
    local_res10 = FUN_14335fd10(&local_38,iVar7,iVar8);
  }
  else {
    pcVar6 = (char *)FUN_143590af0(param_6 + 0x20,&local_res10,local_28);
    if (*pcVar6 == '\0') goto LAB_1434c0aff;
    iVar5 = iVar4;
    if (local_28[0] <= (double)iVar4) {
      iVar5 = (int)local_28[0];
    }
    iVar8 = iVar5 + iVar4;
    if (-1 < iVar5) {
      iVar8 = iVar5;
    }
    if (iVar7 <= iVar8) goto LAB_1434c0ab7;
    local_res10 = *(longlong *)(lVar2 + 0x218) + 0x48;
  }
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  FUN_143590250(param_4,&local_res10);
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1434c0aff:
  piVar1 = (int *)(local_38 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c0b30 FUN_1434c0b30 body=1786 status=ok
// SIG undefined FUN_1434c0b30(void)

void FUN_1434c0b30(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,uint *param_6)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  char *pcVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  uint *puVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  ulonglong local_res10 [2];
  undefined8 local_res20;
  double local_c8;
  uint local_c0 [2];
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 *local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  uint *local_68;
  uint local_60 [2];
  undefined8 local_58;
  ulonglong local_50;
  undefined1 local_40 [8];
  
  local_res10[0] = local_res10[0] & 0xffffffff00000000;
  lVar4 = *(longlong *)(param_2 + 0x10);
  local_98 = (longlong *)(*(longlong *)(lVar4 + 0x218) + 0x48);
  piVar1 = (int *)(*(longlong *)(lVar4 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  local_res20 = param_4;
  local_78 = lVar4;
  pcVar9 = (char *)FUN_1435911f0(param_3,local_res10,&local_98);
  if (*pcVar9 == '\0') goto LAB_1434c11ea;
  local_60[0] = 0;
  local_58 = 0;
  if ((param_5 != 0) && (uVar7 = *param_6 & 0x1f, uVar7 != 0)) {
    if (uVar7 == 0xc) {
      bVar18 = *(longlong *)(param_6 + 4) == 0;
LAB_1434c0be0:
      if (bVar18) goto LAB_1434c0bf3;
    }
    else if (uVar7 == 10) {
      bVar18 = *(longlong *)(param_6 + 4) == *(longlong *)(*(longlong *)(param_6 + 4) + 8) + 0x80;
      goto LAB_1434c0be0;
    }
    FUN_143590140(local_60,param_6);
  }
LAB_1434c0bf3:
  local_90 = 0x7fffffff;
  if (param_5 < 2) {
LAB_1434c0c54:
    lVar15 = local_90;
    if (((byte)local_60[0] & 0x1f) == 0xc) {
      cVar6 = FUN_1435c8b00(param_2,local_60,"RegExp",*(undefined8 *)(param_2 + 0x1c8));
      if (cVar6 != '\0') {
        if (local_50 != 0) {
          *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
          *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) & 0x8fffffff;
        }
        *(undefined1 *)(local_50 + 0x58) = 1;
        lVar10 = *(longlong *)
                  (*(longlong *)(*(longlong *)(*(longlong *)(local_50 + 0x28) + 0x98) + 0x10) +
                  0x218);
        local_a0 = lVar10 + 0x48;
        piVar1 = (int *)(lVar10 + 0x60);
        *piVar1 = *piVar1 + 1;
        puVar12 = (ulonglong *)(*(ulonglong *)(local_50 + 0x50) & 0xfffffffffffffffc);
        lVar10 = FUN_143360a90(*(undefined8 *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(local_50 + 0x28) + 0x98) + 0x10) +
                                0x218),(longlong)puVar12 + 0xc,*puVar12 & 0x7fffffffffffffff);
        *(int *)(lVar10 + 0x18) = *(int *)(lVar10 + 0x18) + 2;
        piVar1 = (int *)(local_a0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        piVar1 = (int *)(lVar10 + 0x18);
        *piVar1 = *piVar1 + -1;
        local_a0 = lVar10;
        if (*piVar1 == 0) {
          FUN_14335f920(lVar10);
        }
        if (*(int *)(local_a0 + 0x20) != 0) {
          puVar12 = (ulonglong *)FUN_1435ca860(param_2,local_40);
          uVar7 = 0;
          uVar16 = 0;
          uVar5 = *puVar12;
LAB_1434c0d40:
          local_res10[0] = 0;
          FUN_1434c3020(local_50,local_res10,&local_98);
          uVar17 = uVar16;
          if (local_res10[0] == 0) {
LAB_1434c0d75:
            bVar18 = false;
            uVar16 = uVar17;
          }
          else {
            uVar17 = uVar16 + 1;
            if ((uint)lVar15 <= uVar16) goto LAB_1434c0d75;
            bVar18 = true;
            uVar16 = uVar17;
          }
          if (((local_res10[0] != 0) && ((local_res10[0] & 1) == 0)) &&
             ((*(uint *)(local_res10[0] + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_res10[0] + 8) = *(uint *)(local_res10[0] + 8) - 1;
            FUN_1434ef880();
          }
          if (bVar18) {
            iVar8 = *(int *)(local_50 + 0x48);
            iVar3 = *(int *)(local_50 + 0x4c);
            FUN_1432c3140(&local_c8,(ulonglong)uVar7 + *local_98,iVar8 - uVar7);
            local_80 = FUN_143360a90(*(undefined8 *)(local_78 + 0x218),
                                     (longlong)((ulonglong)local_c8 & 0xfffffffffffffffc) + 0xc,
                                     *(ulonglong *)((ulonglong)local_c8 & 0xfffffffffffffffc) &
                                     0x7fffffffffffffff);
            *(int *)(local_80 + 0x18) = *(int *)(local_80 + 0x18) + 1;
            Scaleform::GFx::AS3::Value::Value(local_c0,&local_80);
            if (*(longlong *)(uVar5 + 0x40) == *(longlong *)(uVar5 + 0x80)) {
              FUN_1434f0300(uVar5 + 0x78,*(undefined8 *)(uVar5 + 0x90),
                            *(longlong *)(uVar5 + 0x80) + 1);
              puVar13 = (uint *)(*(longlong *)(uVar5 + 0x78) + -0x20 +
                                *(longlong *)(uVar5 + 0x80) * 0x20);
              if (puVar13 != (uint *)0x0) {
                *puVar13 = local_c0[0];
                *(undefined8 *)(puVar13 + 2) = local_b8;
                puVar13[4] = local_b0;
                puVar13[5] = uStack_ac;
                puVar13[6] = uStack_a8;
                puVar13[7] = uStack_a4;
                if (9 < ((byte)local_c0[0] & 0x1f)) {
                  if ((local_c0[0] >> 9 & 1) == 0) {
                    FUN_143592070(local_c0);
                  }
                  else {
                    FUN_143592140();
                  }
                }
              }
            }
            else {
              *(longlong *)(uVar5 + 0x50) = *(longlong *)(uVar5 + 0x40);
              local_70 = uVar5 + 0x50;
              local_68 = local_c0;
              FUN_1434e4980(uVar5 + 0x98,*(undefined8 *)(uVar5 + 0xa0),&local_70);
            }
            *(longlong *)(uVar5 + 0x40) = *(longlong *)(uVar5 + 0x40) + 1;
            if (9 < ((byte)local_c0[0] & 0x1f)) {
              if ((local_c0[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_c0);
              }
              else {
                FUN_143592150();
              }
            }
            piVar1 = (int *)(local_80 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            uVar7 = iVar3 + iVar8;
            uVar14 = (ulonglong)local_c8 & 0xfffffffffffffffc;
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar14 + 8,0xffffffff);
            lVar15 = local_90;
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar14);
            }
            goto LAB_1434c0d40;
          }
          if (uVar16 < (uint)lVar15) {
            FUN_1432c3140(&local_c8,(ulonglong)uVar7 + *local_98,(int)local_98[4] - uVar7);
            local_res10[0] =
                 FUN_143360a90(*(undefined8 *)(local_78 + 0x218),
                               (longlong)((ulonglong)local_c8 & 0xfffffffffffffffc) + 0xc,
                               *(ulonglong *)((ulonglong)local_c8 & 0xfffffffffffffffc) &
                               0x7fffffffffffffff);
            *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
            Scaleform::GFx::AS3::Value::Value(local_c0,local_res10);
            if (*(longlong *)(uVar5 + 0x40) == *(longlong *)(uVar5 + 0x80)) {
              FUN_1434f0300(uVar5 + 0x78,*(undefined8 *)(uVar5 + 0x90),
                            *(longlong *)(uVar5 + 0x80) + 1);
              puVar13 = (uint *)(*(longlong *)(uVar5 + 0x78) + -0x20 +
                                *(longlong *)(uVar5 + 0x80) * 0x20);
              if (puVar13 != (uint *)0x0) {
                *puVar13 = local_c0[0];
                *(undefined8 *)(puVar13 + 2) = local_b8;
                puVar13[4] = local_b0;
                puVar13[5] = uStack_ac;
                puVar13[6] = uStack_a8;
                puVar13[7] = uStack_a4;
                if (9 < ((byte)local_c0[0] & 0x1f)) {
                  if ((local_c0[0] >> 9 & 1) == 0) {
                    FUN_143592070(local_c0);
                  }
                  else {
                    FUN_143592140();
                  }
                }
              }
            }
            else {
              *(longlong *)(uVar5 + 0x50) = *(longlong *)(uVar5 + 0x40);
              local_70 = uVar5 + 0x50;
              local_68 = local_c0;
              FUN_1434e4980(uVar5 + 0x98,*(undefined8 *)(uVar5 + 0xa0),&local_70);
            }
            *(longlong *)(uVar5 + 0x40) = *(longlong *)(uVar5 + 0x40) + 1;
            if (9 < ((byte)local_c0[0] & 0x1f)) {
              if ((local_c0[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_c0);
              }
              else {
                FUN_143592150();
              }
            }
            piVar1 = (int *)(local_res10[0] + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                              (((ulonglong)local_c8 & 0xfffffffffffffffc) + 8,0xffffffff);
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))
                        (DAT_146b62f28,(ulonglong)local_c8 & 0xfffffffffffffffc);
            }
          }
          FUN_1435903c0(local_res20,uVar5);
          if (((uVar5 != 0) && ((uVar5 & 1) == 0)) && ((*(uint *)(uVar5 + 8) & 0x3fffff) != 0)) {
            *(uint *)(uVar5 + 8) = *(uint *)(uVar5 + 8) - 1;
            FUN_1434ef880(uVar5);
          }
          piVar1 = (int *)(local_a0 + 0x18);
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FUN_14335f920();
          }
          if (((local_50 & 1) == 0) && ((*(uint *)(local_50 + 8) & 0x3fffff) != 0)) {
            *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
            FUN_1434ef880(local_50);
          }
          goto LAB_1434c11b6;
        }
        FUN_143590250(local_60,&local_a0);
        piVar1 = (int *)(local_a0 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        if (((local_50 & 1) == 0) && ((*(uint *)(local_50 + 8) & 0x3fffff) != 0)) {
          *(uint *)(local_50 + 8) = *(uint *)(local_50 + 8) - 1;
          FUN_1434ef880(local_50);
        }
      }
    }
    local_88 = (undefined8 *)(*(longlong *)(lVar4 + 0x218) + 0x48);
    piVar1 = (int *)(*(longlong *)(lVar4 + 0x218) + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar9 = (char *)FUN_1435911f0(local_60,local_res10,&local_88);
    if (*pcVar9 != '\0') {
      puVar11 = (undefined8 *)FUN_1434c1b70(local_res10,param_2,&local_98,*local_88,(int)lVar15);
      local_c0[0] = 0;
      local_b8 = 0;
      Scaleform::GFx::AS3::Value::PickUnsafe(local_c0,*puVar11);
      FUN_143590140(param_4,local_c0);
      if (9 < ((byte)local_c0[0] & 0x1f)) {
        if ((local_c0[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_c0);
        }
        else {
          FUN_143592150();
        }
      }
    }
    piVar1 = (int *)(local_88 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  else {
    uVar7 = param_6[8] & 0x1f;
    if (uVar7 == 0) goto LAB_1434c0c54;
    if (uVar7 == 0xc) {
      bVar18 = *(longlong *)(param_6 + 0xc) == 0;
LAB_1434c0c2d:
      if (bVar18) goto LAB_1434c0c54;
    }
    else if (uVar7 == 10) {
      bVar18 = *(longlong *)(param_6 + 0xc) ==
               *(longlong *)(*(longlong *)(param_6 + 0xc) + 8) + 0x80;
      goto LAB_1434c0c2d;
    }
    pcVar9 = (char *)FUN_143590af0(param_6 + 8,local_res10,&local_c8);
    if (*pcVar9 != '\0') {
      local_90 = (longlong)local_c8;
      goto LAB_1434c0c54;
    }
  }
LAB_1434c11b6:
  if (9 < ((byte)local_60[0] & 0x1f)) {
    if ((local_60[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_60);
    }
    else {
      FUN_143592150();
    }
  }
LAB_1434c11ea:
  plVar2 = local_98 + 3;
  *(int *)plVar2 = (int)*plVar2 + -1;
  if ((int)*plVar2 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c1230 FUN_1434c1230 body=438 status=ok
// SIG undefined FUN_1434c1230(void)

void FUN_1434c1230(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  longlong local_res10;
  longlong local_48;
  double local_40;
  double local_38 [2];
  
  lVar2 = *(longlong *)(param_2 + 0x10);
  local_48 = *(longlong *)(lVar2 + 0x218) + 0x48;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_3,&local_res10,&local_48);
  if (*pcVar5 != '\0') {
    uVar7 = 0;
    uVar3 = FUN_14335fa60(&local_48);
    if (param_5 != 0) {
      pcVar5 = (char *)FUN_143590af0(param_6,&local_res10,&local_40);
      if (*pcVar5 == '\0') goto LAB_1434c13c7;
      uVar7 = uVar3;
      if (local_40 <= (double)uVar3) {
        uVar7 = (uint)local_40;
      }
      if ((int)uVar7 < 0) {
        uVar7 = uVar7 + uVar3;
      }
    }
    uVar6 = 0xffffffff;
    if (1 < param_5) {
      pcVar5 = (char *)FUN_143590af0(param_6 + 0x20,&local_res10,local_38);
      if (*pcVar5 == '\0') goto LAB_1434c13c7;
      if (local_38[0] <= (double)uVar3) {
        uVar3 = (uint)local_38[0];
      }
      uVar6 = uVar3;
      if ((int)uVar3 < 0) {
        uVar6 = 0;
      }
    }
    if (uVar6 == 0) {
      local_res10 = *(longlong *)(lVar2 + 0x218) + 0x48;
    }
    else {
      uVar3 = 0;
      if (-1 < (int)uVar7) {
        uVar3 = uVar7;
      }
      iVar4 = FUN_14335fa60(&local_48);
      if ((int)uVar3 < iVar4) {
        if (((int)uVar6 < 0) || (iVar4 < (int)(uVar3 + uVar6))) {
          uVar6 = iVar4 - uVar3;
        }
        local_res10 = FUN_14335fd10(&local_48,uVar3,uVar3 + uVar6);
      }
      else {
        local_res10 = *(longlong *)(lVar2 + 0x218) + 0x48;
      }
    }
    *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
    FUN_143590250(param_4,&local_res10);
    piVar1 = (int *)(local_res10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
LAB_1434c13c7:
  piVar1 = (int *)(local_48 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c13f0 FUN_1434c13f0 body=687 status=ok
// SIG undefined FUN_1434c13f0(void)

void FUN_1434c13f0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong param_6)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  double local_res10;
  double local_88;
  double local_80;
  longlong local_78;
  uint local_70 [2];
  undefined8 local_68;
  double local_60;
  uint local_50 [2];
  undefined8 local_48;
  double local_40;
  
  local_res10 = (double)((ulonglong)local_res10 & 0xffffffff00000000);
  lVar2 = *(longlong *)(param_2 + 0x10);
  local_78 = *(longlong *)(lVar2 + 0x218) + 0x48;
  piVar1 = (int *)(*(longlong *)(lVar2 + 0x218) + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar5 = (char *)FUN_1435911f0(param_3,&local_res10,&local_78);
  if (*pcVar5 != '\0') {
    uVar3 = FUN_14335fa60(&local_78);
    local_80 = 0.0;
    local_88 = 2147483647.0;
    if (((param_5 == 0) ||
        (pcVar5 = (char *)FUN_143590af0(param_6,&local_res10,&local_80), *pcVar5 != '\0')) &&
       ((param_5 < 2 ||
        (pcVar5 = (char *)FUN_143590af0(param_6 + 0x20,&local_res10,&local_88), *pcVar5 != '\0'))))
    {
      local_50[0] = 4;
      local_48 = 0;
      local_40 = local_80;
      if ((((ulonglong)local_80 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)local_80 & 0xfffffffffffff) != 0)) {
        local_res10 = local_80;
        local_80 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      local_70[0] = 4;
      local_68 = 0;
      local_res10 = local_88;
      local_60 = local_88;
      if ((((ulonglong)local_88 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
         (((ulonglong)local_88 & 0xfffffffffffff) != 0)) {
        local_88 = (double)Scaleform::GFx::NumberUtil::NaN();
      }
      if (local_88 == local_80) {
        local_res10 = (double)(*(longlong *)(lVar2 + 0x218) + 0x48);
      }
      else {
        uVar6 = uVar3;
        if (local_80 <= (double)uVar3) {
          uVar6 = (uint)local_80;
        }
        if (local_88 <= (double)uVar3) {
          uVar3 = (uint)local_88;
        }
        uVar7 = uVar6;
        if ((int)uVar3 < (int)uVar6) {
          uVar7 = uVar3;
          uVar3 = uVar6;
        }
        uVar6 = 0;
        if (-1 < (int)uVar7) {
          uVar6 = uVar7;
        }
        iVar8 = uVar3 - uVar6;
        if (iVar8 == 0) {
          local_res10 = (double)(*(longlong *)(lVar2 + 0x218) + 0x48);
        }
        else {
          uVar3 = 0;
          if (-1 < (int)uVar6) {
            uVar3 = uVar6;
          }
          iVar4 = FUN_14335fa60(&local_78);
          if ((int)uVar3 < iVar4) {
            if ((iVar8 < 0) || (iVar4 < (int)(uVar3 + iVar8))) {
              iVar8 = iVar4 - uVar3;
            }
            local_res10 = (double)FUN_14335fd10(&local_78,uVar3,uVar3 + iVar8);
          }
          else {
            local_res10 = (double)(*(longlong *)(lVar2 + 0x218) + 0x48);
          }
        }
      }
      *(int *)((longlong)local_res10 + 0x18U) = *(int *)((longlong)local_res10 + 0x18U) + 1;
      FUN_143590250(param_4,&local_res10);
      piVar1 = (int *)((longlong)local_res10 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_70[0] & 0x1f)) {
        if ((local_70[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_70);
        }
        else {
          FUN_143592150();
        }
      }
      if (9 < ((byte)local_50[0] & 0x1f)) {
        if ((local_50[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_50);
        }
        else {
          FUN_143592150();
        }
      }
    }
  }
  piVar1 = (int *)(local_78 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c16b0 FUN_1434c16b0 body=124 status=ok
// SIG undefined FUN_1434c16b0(void)

void FUN_1434c16b0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_res10 [3];
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res10,local_18);
  if (*pcVar3 != '\0') {
    local_res10[0] = Scaleform::GFx::ASConstString::ToLowerNode(local_18);
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    FUN_143590250(param_4,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c1740 FUN_1434c1740 body=124 status=ok
// SIG undefined FUN_1434c1740(void)

void FUN_1434c1740(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_res10 [3];
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res10,local_18);
  if (*pcVar3 != '\0') {
    local_res10[0] = FUN_14335fe70(local_18);
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    FUN_143590250(param_4,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c17d0 FUN_1434c17d0 body=124 status=ok
// SIG undefined FUN_1434c17d0(void)

void FUN_1434c17d0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_res10 [3];
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res10,local_18);
  if (*pcVar3 != '\0') {
    local_res10[0] = Scaleform::GFx::ASConstString::ToLowerNode(local_18);
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    FUN_143590250(param_4,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c1860 FUN_1434c1860 body=124 status=ok
// SIG undefined FUN_1434c1860(void)

void FUN_1434c1860(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  longlong local_res10 [3];
  longlong local_18 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218);
  local_18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res10,local_18);
  if (*pcVar3 != '\0') {
    local_res10[0] = FUN_14335fe70(local_18);
    *(int *)(local_res10[0] + 0x18) = *(int *)(local_res10[0] + 0x18) + 1;
    FUN_143590250(param_4,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
  }
  piVar1 = (int *)(local_18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c18f0 FUN_1434c18f0 body=92 status=ok
// SIG undefined FUN_1434c18f0(void)

void FUN_1434c18f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 10) {
    FUN_143590140(param_4,param_3);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x422,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434c1960 FUN_1434c1960 body=92 status=ok
// SIG undefined FUN_1434c1960(void)

void FUN_1434c1960(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 10) {
    FUN_143590140(param_4,param_3);
    return;
  }
  uVar2 = FUN_1435c8e40(local_18,0x422,param_2);
  FUN_1435cbe70(param_2,uVar2);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    return;
  }
  return;
}



// FUNCTION 1434c19d0 FUN_1434c19d0 body=193 status=ok
// SIG undefined FUN_1434c19d0(void)

void FUN_1434c19d0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = FUN_1435cb020(param_2);
    lVar4 = FUN_1435b3ae0(uVar3);
    if (lVar2 == lVar4) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 10) {
    FUN_143590140(param_4,param_3);
  }
  else {
    uVar3 = FUN_1435c8e40(local_18,0x422,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434c1aa0 FUN_1434c1aa0 body=193 status=ok
// SIG undefined FUN_1434c1aa0(void)

void FUN_1434c1aa0(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong local_10;
  
  if (((byte)*param_3 & 0x1f) == 0xc) {
    lVar2 = *(longlong *)(param_3 + 4);
    uVar3 = FUN_1435cb020(param_2);
    lVar4 = FUN_1435b3ae0(uVar3);
    if (lVar2 == lVar4) {
      FUN_143590250(param_4,*(undefined8 *)(param_2 + 0x10));
      return;
    }
  }
  if (((byte)*param_3 & 0x1f) == 10) {
    FUN_143590140(param_4,param_3);
  }
  else {
    uVar3 = FUN_1435c8e40(local_18,0x422,param_2);
    FUN_1435cbe70(param_2,uVar3);
    piVar1 = (int *)(local_10 + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return;
    }
  }
  return;
}



// FUNCTION 1434c1b70 FUN_1434c1b70 body=1556 status=ok
// SIG undefined FUN_1434c1b70(void)

longlong *
FUN_1434c1b70(longlong *param_1,longlong param_2,undefined8 *param_3,char *param_4,uint param_5)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  longlong **pplVar10;
  ulonglong uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong local_res18;
  char *local_res20;
  longlong *local_b8;
  longlong *local_b0;
  uint *local_a8;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  longlong *local_90;
  longlong **local_88;
  char *local_80;
  longlong local_78;
  uint local_70 [12];
  
  local_res20 = param_4;
  FUN_1435ca860(param_2,param_1);
  plVar18 = *(longlong **)*param_3;
  local_b8 = plVar18;
  if (param_4 == (char *)0x0) {
    lVar2 = *param_1;
    pplVar10 = (longlong **)Scaleform::GFx::AS3::Value::Value(&local_b0,param_3);
    if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar2 + 0x80)) {
      FUN_1434ef7a0(lVar2 + 0x78);
    }
    else {
      local_90 = (longlong *)(lVar2 + 0x50);
      *local_90 = *(longlong *)(lVar2 + 0x40);
      local_88 = pplVar10;
      FUN_1434e4980(lVar2 + 0x98,*(undefined8 *)(lVar2 + 0xa0),&local_90);
    }
    *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
    if (9 < ((byte)(uint)local_b0 & 0x1f)) {
      if (((uint)local_b0 >> 9 & 1) == 0) {
        FUN_1435920c0(&local_b0);
      }
      else {
        FUN_143592150();
      }
    }
  }
  else if (*param_4 == '\0') {
    if ((int)((longlong *)*param_3)[4] == 0) {
      Scaleform::GFx::AS3::Value::Value(&local_b0,param_3);
      lVar2 = *param_1;
      if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar2 + 0x80)) {
        FUN_1434f0300(lVar2 + 0x78,*(undefined8 *)(lVar2 + 0x90),*(longlong *)(lVar2 + 0x80) + 1);
        puVar13 = (uint *)(*(longlong *)(lVar2 + 0x78) + -0x20 + *(longlong *)(lVar2 + 0x80) * 0x20)
        ;
        if (puVar13 != (uint *)0x0) {
          *puVar13 = (uint)local_b0;
          *(uint **)(puVar13 + 2) = local_a8;
          puVar13[4] = local_a0;
          puVar13[5] = uStack_9c;
          puVar13[6] = uStack_98;
          puVar13[7] = uStack_94;
          if (9 < ((byte)(uint)local_b0 & 0x1f)) {
            if (((uint)local_b0 >> 9 & 1) == 0) {
              FUN_143592070(&local_b0);
            }
            else {
              FUN_143592140();
            }
          }
        }
      }
      else {
        *(longlong *)(lVar2 + 0x50) = *(longlong *)(lVar2 + 0x40);
        local_90 = (longlong *)(lVar2 + 0x50);
        local_88 = &local_b0;
        FUN_1434e4980(lVar2 + 0x98,*(undefined8 *)(lVar2 + 0xa0),&local_90);
      }
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      if (9 < ((byte)(uint)local_b0 & 0x1f)) {
        if (((uint)local_b0 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_b0);
        }
        else {
          FUN_143592150();
        }
      }
    }
    else {
      FUN_1432c2f70(&local_res20);
      while (iVar8 = FUN_143307250(&local_b8), iVar8 != 0) {
        FUN_1432c3510(&local_res20);
        FUN_1432c3700(&local_res20,iVar8);
        local_res18 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),
                                    (longlong)((ulonglong)local_res20 & 0xfffffffffffffffc) + 0xc,
                                    *(ulonglong *)((ulonglong)local_res20 & 0xfffffffffffffffc) &
                                    0x7fffffffffffffff);
        *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
        lVar2 = *param_1;
        pplVar10 = (longlong **)Scaleform::GFx::AS3::Value::Value(&local_b0,&local_res18);
        if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar2 + 0x80)) {
          FUN_1434ef7a0(lVar2 + 0x78);
        }
        else {
          local_90 = (longlong *)(lVar2 + 0x50);
          *local_90 = *(longlong *)(lVar2 + 0x40);
          local_88 = pplVar10;
          FUN_1434e4980(lVar2 + 0x98,*(undefined8 *)(lVar2 + 0xa0),&local_90);
        }
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
        if (9 < ((byte)local_b0 & 0x1f)) {
          if (((uint)local_b0 >> 9 & 1) == 0) {
            FUN_1435920c0(&local_b0);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(local_res18 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
      }
      local_b8 = (longlong *)((longlong)local_b8 + -1);
      uVar16 = (ulonglong)local_res20 & 0xfffffffffffffffc;
      iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar16 + 8,0xffffffffffffffff);
      if (iVar8 == 1) {
        (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar16);
      }
    }
  }
  else {
    local_res18 = local_res18 & 0xffffffff00000000;
    uVar16 = 0xffffffffffffffff;
    do {
      local_90 = local_b8;
      plVar17 = (longlong *)0x0;
      local_80 = param_4;
      do {
        plVar6 = local_b8;
        iVar8 = FUN_143307250(&local_b8);
        if (iVar8 == 0) {
          local_b8 = (longlong *)((longlong)local_b8 + -1);
        }
        iVar9 = FUN_143307250(&local_80);
        if (iVar9 == 0) {
          local_80 = local_80 + -1;
        }
        if (plVar17 == (longlong *)0x0) {
          plVar17 = local_b8;
        }
        uVar15 = (uint)local_res18;
        plVar7 = local_b8;
        if (iVar8 == 0) break;
        if (iVar9 == 0) goto LAB_1434c1eef;
        plVar7 = plVar17;
      } while (iVar8 == iVar9);
      local_b8 = plVar7;
      if (iVar9 == 0) {
LAB_1434c1eef:
        if (param_5 <= (uint)local_res18) {
          return param_1;
        }
        if (local_90 == (longlong *)0x0) {
          uVar11 = 0xffffffffffffffff;
          do {
            uVar11 = uVar11 + 1;
          } while (*(char *)((longlong)plVar18 + uVar11) != '\0');
        }
        else {
          uVar11 = (ulonglong)(uint)((int)local_90 - (int)plVar18);
        }
        iVar12 = 0;
        if (-1 < (int)uVar11) {
          iVar12 = (int)uVar11;
        }
        if (iVar12 < 1) {
          local_78 = *(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218) + 0x48;
        }
        else {
          local_78 = FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),plVar18,
                                   (longlong)iVar12);
        }
        *(int *)(local_78 + 0x18) = *(int *)(local_78 + 0x18) + 1;
        lVar2 = *param_1;
        puVar13 = (uint *)Scaleform::GFx::AS3::Value::Value(local_70,&local_78);
        if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar2 + 0x80)) {
          FUN_1434f0300(lVar2 + 0x78,*(undefined8 *)(lVar2 + 0x90),*(longlong *)(lVar2 + 0x80) + 1);
          puVar14 = (uint *)(*(longlong *)(lVar2 + 0x78) + -0x20 +
                            *(longlong *)(lVar2 + 0x80) * 0x20);
          if (puVar14 != (uint *)0x0) {
            *puVar14 = *puVar13;
            *(undefined8 *)(puVar14 + 2) = *(undefined8 *)(puVar13 + 2);
            uVar3 = puVar13[5];
            uVar4 = puVar13[6];
            uVar5 = puVar13[7];
            puVar14[4] = puVar13[4];
            puVar14[5] = uVar3;
            puVar14[6] = uVar4;
            puVar14[7] = uVar5;
            if (9 < ((byte)*puVar13 & 0x1f)) {
              if ((*puVar13 >> 9 & 1) == 0) {
                FUN_143592070(puVar13);
              }
              else {
                FUN_143592140();
              }
            }
          }
        }
        else {
          local_b0 = (longlong *)(lVar2 + 0x50);
          *local_b0 = *(longlong *)(lVar2 + 0x40);
          local_a8 = puVar13;
          FUN_1434e4980(lVar2 + 0x98,*(undefined8 *)(lVar2 + 0xa0),&local_b0);
        }
        *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
        if (9 < ((byte)local_70[0] & 0x1f)) {
          if ((local_70[0] >> 9 & 1) == 0) {
            FUN_1435920c0(local_70);
          }
          else {
            FUN_143592150();
          }
        }
        piVar1 = (int *)(local_78 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_14335f920();
        }
        local_res18 = CONCAT44(local_res18._4_4_,uVar15 + 1);
        plVar18 = plVar6;
        uVar15 = uVar15 + 1;
        local_b8 = plVar6;
      }
      param_4 = local_res20;
    } while (iVar8 != 0);
    if (uVar15 < param_5) {
      if (iVar9 == 0) {
        if (local_90 == (longlong *)0x0) {
          do {
            uVar16 = uVar16 + 1;
          } while (*(char *)((longlong)plVar18 + uVar16) != '\0');
        }
        else {
          uVar16 = (ulonglong)(uint)((int)local_90 - (int)plVar18);
        }
      }
      else {
        do {
          uVar16 = uVar16 + 1;
        } while (*(char *)((longlong)plVar18 + uVar16) != '\0');
      }
      iVar8 = 0;
      if (-1 < (int)uVar16) {
        iVar8 = (int)uVar16;
      }
      if (iVar8 < 1) {
        local_res20 = (char *)(*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x218) + 0x48);
      }
      else {
        local_res20 = (char *)FUN_143360a90(*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x218),
                                            plVar18,(longlong)iVar8);
      }
      *(int *)(local_res20 + 0x18) = *(int *)(local_res20 + 0x18) + 1;
      lVar2 = *param_1;
      puVar13 = (uint *)Scaleform::GFx::AS3::Value::Value(local_70,&local_res20);
      if (*(longlong *)(lVar2 + 0x40) == *(longlong *)(lVar2 + 0x80)) {
        FUN_1434ef7a0(lVar2 + 0x78);
      }
      else {
        local_b0 = (longlong *)(lVar2 + 0x50);
        *local_b0 = *(longlong *)(lVar2 + 0x40);
        local_a8 = puVar13;
        FUN_1434e4980(lVar2 + 0x98,*(undefined8 *)(lVar2 + 0xa0),&local_b0);
      }
      *(longlong *)(lVar2 + 0x40) = *(longlong *)(lVar2 + 0x40) + 1;
      if (9 < ((byte)local_70[0] & 0x1f)) {
        if ((local_70[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_70);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_res20 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
  }
  return param_1;
}



// FUNCTION 1434c2190 FUN_1434c2190 body=160 status=ok
// SIG undefined FUN_1434c2190(void)

longlong *
FUN_1434c2190(longlong *param_1,longlong param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  if (param_5 == 0) {
    lVar2 = *(longlong *)(param_2 + 0x218) + 0x48;
    *param_1 = lVar2;
  }
  else {
    iVar3 = 0;
    if (-1 < param_4) {
      iVar3 = param_4;
    }
    iVar1 = FUN_14335fa60(param_3);
    if (iVar3 < iVar1) {
      if ((param_5 < 0) || (iVar1 < iVar3 + param_5)) {
        param_5 = iVar1 - iVar3;
      }
      lVar2 = FUN_14335fd10(param_3,iVar3,iVar3 + param_5);
    }
    else {
      lVar2 = *(longlong *)(param_2 + 0x218) + 0x48;
    }
    *param_1 = lVar2;
  }
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  return param_1;
}



// FUNCTION 1434c2240 FUN_1434c2240 body=134 status=ok
// SIG undefined FUN_1434c2240(void)

int FUN_1434c2240(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong local_res8;
  longlong local_res10;
  
  if ((longlong *)*param_1 == (longlong *)*param_2) {
    return 0;
  }
  local_res8 = *(longlong *)*param_1;
  local_res10 = *(longlong *)*param_2;
  while( true ) {
    iVar1 = FUN_143307250(&local_res8);
    if (iVar1 == 0) {
      local_res8 = local_res8 + -1;
    }
    iVar2 = FUN_143307250(&local_res10);
    if (iVar2 == 0) {
      local_res10 = local_res10 + -1;
    }
    if ((iVar1 == 0) || (iVar2 == 0)) break;
    if (iVar2 - iVar1 != 0) {
      return iVar2 - iVar1;
    }
  }
  if (iVar1 == iVar2) {
    return 0;
  }
  if (iVar2 != 0) {
    return 1;
  }
  return -1;
}



// FUNCTION 1434c22d0 FUN_1434c22d0 body=43 status=ok
// SIG undefined FUN_1434c22d0(void)

undefined8 * FUN_1434c22d0(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 5;
  *param_1 = &PTR_FUN_145b190c0;
  return param_1;
}



// FUNCTION 1434c2310 FUN_1434c2310 body=247 status=ok
// SIG undefined FUN_1434c2310(void)

undefined8 * FUN_1434c2310(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15020);
    *(undefined4 *)(puVar3 + 0x12) = 5;
    *puVar3 = &PTR_FUN_145b190c0;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15020);
    *(undefined4 *)(puVar3 + 0x12) = 5;
    *puVar3 = &PTR_FUN_145b19048;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b19120;
  }
  return param_1;
}



// FUNCTION 1434c2410 FUN_1434c2410 body=204 status=ok
// SIG undefined FUN_1434c2410(void)

undefined8 FUN_1434c2410(longlong param_1,uint *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  char *pcVar4;
  bool bVar5;
  undefined1 local_res8 [8];
  longlong local_res10 [3];
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x98) + 0x10);
  uVar3 = *param_2 & 0x1f;
  if (uVar3 == 0) {
LAB_1434c24c1:
    FUN_143590310(param_3,*(longlong *)(lVar2 + 0x218) + 0x80);
  }
  else {
    if (uVar3 == 0xc) {
      bVar5 = *(longlong *)(param_2 + 4) == 0;
LAB_1434c2453:
      if (bVar5) goto LAB_1434c24c1;
    }
    else if (uVar3 == 10) {
      bVar5 = *(longlong *)(param_2 + 4) == *(longlong *)(*(longlong *)(param_2 + 4) + 8) + 0x80;
      goto LAB_1434c2453;
    }
    lVar2 = *(longlong *)(lVar2 + 0x218);
    local_res10[0] = lVar2 + 0x48;
    piVar1 = (int *)(lVar2 + 0x60);
    *piVar1 = *piVar1 + 1;
    pcVar4 = (char *)FUN_1435911f0(param_2,local_res8,local_res10);
    if (*pcVar4 == '\0') {
      piVar1 = (int *)(local_res10[0] + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      return 0;
    }
    FUN_143590250(param_3,local_res10);
    piVar1 = (int *)(local_res10[0] + 0x18);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
      return 1;
    }
  }
  return 1;
}



// FUNCTION 1434c24f0 FUN_1434c24f0 body=33 status=ok
// SIG undefined FUN_1434c24f0(void)

undefined8 * FUN_1434c24f0(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b19120;
  return param_1;
}



// FUNCTION 1434c2520 FUN_1434c2520 body=38 status=ok
// SIG undefined FUN_1434c2520(void)

void FUN_1434c2520(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434c2542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434c2550 FUN_1434c2550 body=107 status=ok
// SIG undefined FUN_1434c2550(void)

void FUN_1434c2550(longlong param_1,undefined8 param_2,int *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined1 local_res8 [16];
  longlong local_res18 [2];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res18[0] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  if (*param_3 != 0) {
    pcVar3 = (char *)FUN_1435911f0(param_4,local_res8,local_res18);
    if (*pcVar3 == '\0') goto LAB_1434c25a5;
  }
  FUN_143590250(param_2,local_res18);
LAB_1434c25a5:
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c25d0 FUN_1434c25d0 body=164 status=ok
// SIG undefined FUN_1434c25d0(void)

void FUN_1434c25d0(longlong param_1,undefined8 param_2)

{
  undefined **ppuVar1;
  longlong lVar2;
  code *local_18;
  undefined4 uStack_10;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  local_18 = FUN_1435b40e0;
  uStack_10 = 0;
  FUN_1435b3c10(param_1,param_2,&local_18);
  ppuVar1 = &PTR_FUN_145b15610;
  lVar2 = 2;
  do {
    FUN_1434e7f40(param_2,ppuVar1);
    ppuVar1 = ppuVar1 + 6;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434c2680 FUN_1434c2680 body=225 status=ok
// SIG undefined FUN_1434c2680(void)

void FUN_1434c2680(longlong param_1,undefined8 param_2,uint param_3,longlong param_4)

{
  int *piVar1;
  char *pcVar2;
  undefined1 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res18 [16];
  undefined2 local_58 [4];
  longlong local_50;
  undefined1 *local_48;
  undefined8 local_40;
  
  FUN_1432c5960(&local_48,DAT_146b62f28);
  uVar5 = 0;
  if (param_3 != 0) {
    do {
      pcVar2 = (char *)FUN_143590eb0(uVar5 * 0x20 + param_4,local_res18,local_58);
      if (*pcVar2 == '\0') goto LAB_1434c2742;
      FUN_1432c5df0(&local_48,local_58[0]);
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_3);
  }
  puVar3 = &DAT_145af3922;
  if (local_48 != (undefined1 *)0x0) {
    puVar3 = local_48;
  }
  local_50 = FUN_143360a90(*(undefined8 *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218),
                           puVar3,local_40);
  *(int *)(local_50 + 0x18) = *(int *)(local_50 + 0x18) + 1;
  FUN_143590250(param_2,&local_50);
  piVar1 = (int *)(local_50 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
LAB_1434c2742:
  Scaleform::StringBuffer::~StringBuffer(&local_48);
  return;
}



// FUNCTION 1434c2780 FUN_1434c2780 body=86 status=ok
// SIG undefined FUN_1434c2780(void)

undefined8 * FUN_1434c2780(undefined8 *param_1)

{
  FUN_1435b9d40();
  param_1[8] = 0;
  *param_1 = &PTR_FUN_145b191f8;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  FUN_1432c2f70(param_1 + 10);
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x800;
  *(undefined1 *)((longlong)param_1 + 100) = 0;
  return param_1;
}



// FUNCTION 1434c27f0 FUN_1434c27f0 body=324 status=ok
// SIG undefined FUN_1434c27f0(void)

longlong * FUN_1434c27f0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  longlong lVar3;
  undefined1 *puVar4;
  longlong lVar5;
  
  puVar4 = &DAT_145af3922;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  *param_2 = lVar3 + 0x48;
  puVar2 = &DAT_145af3922;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  if (*(char *)(param_1 + 0x58) != '\0') {
    puVar2 = &DAT_145b122d0;
  }
  lVar3 = -1;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (puVar2[lVar5] != '\0');
  FUN_143360130(param_2);
  puVar2 = &DAT_145af3922;
  lVar5 = -1;
  if ((*(byte *)(param_1 + 0x60) & 1) != 0) {
    puVar2 = &DAT_145b19990;
  }
  do {
    lVar5 = lVar5 + 1;
  } while (puVar2[lVar5] != '\0');
  FUN_143360130(param_2);
  puVar2 = &DAT_145af3922;
  lVar5 = -1;
  if ((*(uint *)(param_1 + 0x60) >> 1 & 1) != 0) {
    puVar2 = &DAT_145b19994;
  }
  do {
    lVar5 = lVar5 + 1;
  } while (puVar2[lVar5] != '\0');
  FUN_143360130(param_2);
  puVar2 = &DAT_145af3922;
  lVar5 = -1;
  if ((*(uint *)(param_1 + 0x60) >> 2 & 1) != 0) {
    puVar2 = &DAT_145b19998;
  }
  do {
    lVar5 = lVar5 + 1;
  } while (puVar2[lVar5] != '\0');
  FUN_143360130(param_2);
  if ((*(uint *)(param_1 + 0x60) >> 3 & 1) != 0) {
    puVar4 = &DAT_145b09ac8;
  }
  do {
    lVar3 = lVar3 + 1;
  } while (puVar4[lVar3] != '\0');
  FUN_143360130(param_2,puVar4,lVar3);
  return param_2;
}



// FUNCTION 1434c2940 FUN_1434c2940 body=405 status=ok
// SIG undefined FUN_1434c2940(void)

undefined8 FUN_1434c2940(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulonglong *puVar6;
  longlong local_res8;
  longlong local_res10;
  longlong local_res18;
  longlong local_res20;
  longlong local_38;
  longlong local_30 [2];
  
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  local_res18 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145b11fc0,1);
  *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
  lVar3 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res8 = lVar3 + 0x48;
  piVar1 = (int *)(lVar3 + 0x60);
  *piVar1 = *piVar1 + 1;
  puVar6 = (ulonglong *)(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(longlong)puVar6 + 0xc,*puVar6 & 0x7fffffffffffffff);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  local_res8 = lVar3;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  local_res10 = FUN_143360950(*(undefined8 *)(lVar2 + 0x218),&DAT_145b11fc0,1);
  *(int *)(local_res10 + 0x18) = *(int *)(local_res10 + 0x18) + 1;
  uVar4 = FUN_1434c27f0(param_1,local_30);
  uVar5 = Scaleform::GFx::ASString::operator+(&local_res10,&local_38,&local_res8);
  uVar5 = Scaleform::GFx::ASString::operator+(uVar5,&local_res20,&local_res18);
  Scaleform::GFx::ASString::operator+(uVar5,param_2,uVar4);
  piVar1 = (int *)(local_res20 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_38 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_res18 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_30[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_2;
}



// FUNCTION 1434c2ae0 FUN_1434c2ae0 body=100 status=ok
// SIG undefined FUN_1434c2ae0(void)

void FUN_1434c2ae0(undefined8 *param_1)

{
  ulonglong uVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_145b191f8;
  (*(code *)PTR__guard_xfg_dispatch_icall_nop_1467dcbe0)(param_1[8]);
  uVar1 = param_1[10];
  param_1[8] = 0;
  iVar2 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                    ((uVar1 & 0xfffffffffffffffc) + 8,0xffffffff);
  if (iVar2 == 1) {
    (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar1 & 0xfffffffffffffffc);
  }
  FUN_1435b9dc0(param_1);
  return;
}



// FUNCTION 1434c2b50 FUN_1434c2b50 body=56 status=ok
// SIG undefined FUN_1434c2b50(void)

void FUN_1434c2b50(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res18 [2];
  
  uVar2 = FUN_1434c2940(*(undefined8 *)(param_3 + 0x10),local_res18);
  FUN_143590250(param_4,uVar2);
  piVar1 = (int *)(local_res18[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c2b90 FUN_1434c2b90 body=888 status=ok
// SIG undefined FUN_1434c2b90(void)

void FUN_1434c2b90(longlong param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  char *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  char cVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong *puVar12;
  char *pcVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined8 *local_58;
  undefined8 *local_50;
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  
  if (param_2 == 0) {
    return;
  }
  uVar8 = *param_3 & 0x1f;
  if (uVar8 == 0) {
    return;
  }
  if (uVar8 == 0xc) {
    bVar15 = *(longlong *)(param_3 + 4) == 0;
LAB_1434c2bd7:
    if (bVar15) {
      return;
    }
  }
  else if (uVar8 == 10) {
    bVar15 = *(longlong *)(param_3 + 4) == *(longlong *)(*(longlong *)(param_3 + 4) + 8) + 0x80;
    goto LAB_1434c2bd7;
  }
  lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  lVar5 = *(longlong *)(lVar4 + 0x218);
  local_58 = (undefined8 *)(lVar5 + 0x48);
  piVar1 = (int *)(lVar5 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar4 = *(longlong *)(lVar4 + 0x218);
  local_50 = (undefined8 *)(lVar4 + 0x48);
  piVar1 = (int *)(lVar4 + 0x60);
  *piVar1 = *piVar1 + 1;
  if ((((byte)*param_3 & 0x1f) == 0xc) &&
     (cVar7 = FUN_1435c8b00(lVar3,param_3,"RegExp",*(undefined8 *)(lVar3 + 0x1c8)), cVar7 != '\0'))
  {
    lVar4 = *(longlong *)(param_3 + 4);
    lVar5 = *(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x98) + 0x10) + 0x218);
    *(int *)(lVar5 + 0x60) = *(int *)(lVar5 + 0x60) + 1;
    puVar12 = (ulonglong *)(*(ulonglong *)(lVar4 + 0x50) & 0xfffffffffffffffc);
    puVar9 = (undefined8 *)
             FUN_143360a90(*(undefined8 *)
                            (*(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x28) + 0x98) + 0x10)
                            + 0x218),(longlong)puVar12 + 0xc,*puVar12 & 0x7fffffffffffffff);
    *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 2;
    piVar1 = (int *)(lVar5 + 0x60);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(lVar5 + 0x48);
    }
    piVar1 = (int *)(puVar9 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar9);
    }
    *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
    piVar1 = (int *)(local_58 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(puVar9 + 3);
    *piVar1 = *piVar1 + -1;
    local_58 = puVar9;
    if (*piVar1 == 0) {
      FUN_14335f920(puVar9);
    }
    puVar9 = (undefined8 *)FUN_1434c27f0(lVar4,&local_48);
    puVar9 = (undefined8 *)*puVar9;
    *(int *)(puVar9 + 3) = *(int *)(puVar9 + 3) + 1;
    piVar1 = (int *)(local_50 + 3);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    piVar1 = (int *)(local_48 + 0x18);
    *piVar1 = *piVar1 + -1;
    local_50 = puVar9;
    if (*piVar1 == 0) {
      FUN_14335f920();
    }
    if ((1 < param_2) &&
       (cVar7 = Scaleform::GFx::AS3::Value::IsNullOrUndefined(param_3 + 8), cVar7 == '\0')) {
      uVar10 = FUN_1435c8e40(&local_48,0x44c,lVar3);
      FUN_1435cbe70(lVar3,uVar10);
      piVar1 = (int *)(local_40 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      goto LAB_1434c2ec9;
    }
  }
  else {
    pcVar13 = (char *)FUN_1435911f0(param_3,local_res10,&local_58);
    if ((*pcVar13 == '\0') ||
       (((1 < param_2 &&
         (cVar7 = Scaleform::GFx::AS3::Value::IsNullOrUndefined(param_3 + 8), cVar7 == '\0')) &&
        (pcVar13 = (char *)FUN_1435911f0(param_3 + 8,local_res10,&local_50), *pcVar13 == '\0'))))
    goto LAB_1434c2ec9;
  }
  pcVar13 = (char *)*local_58;
  pcVar14 = (char *)*local_50;
  Scaleform::String::operator=(param_1 + 0x50);
  cVar7 = *pcVar13;
  iVar6 = 0;
  while (cVar7 != '\0') {
    iVar11 = iVar6;
    if (((cVar7 == '(') && (pcVar13[1] == '?')) && ((pcVar13[2] == 'P' && (pcVar13[3] == '<')))) {
      *(undefined1 *)(param_1 + 100) = 1;
    }
    else if ((((pcVar14 == (char *)0x0) && (cVar7 == '/')) &&
             ((pcVar13 == (char *)*local_58 || (pcVar13[-1] != '\\')))) &&
            (iVar11 = iVar6 + 1, 0 < iVar6)) {
      pcVar14 = pcVar13;
    }
    pcVar2 = pcVar13 + 1;
    pcVar13 = pcVar13 + 1;
    iVar6 = iVar11;
    cVar7 = *pcVar2;
  }
  if (pcVar14 != (char *)0x0) {
    cVar7 = *pcVar14;
    while (cVar7 != '\0') {
      if (cVar7 == 'g') {
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      else if (cVar7 == 'i') {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 1;
      }
      else if (cVar7 == 'm') {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 2;
      }
      else if (cVar7 == 's') {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 4;
      }
      else if (cVar7 == 'x') {
        *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 8;
      }
      pcVar13 = pcVar14 + 1;
      pcVar14 = pcVar14 + 1;
      cVar7 = *pcVar13;
    }
  }
  uVar10 = FUN_14367cd00((*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc) + 0xc,
                         *(undefined4 *)(param_1 + 0x60),local_38,local_res20,0);
  *(undefined8 *)(param_1 + 0x40) = uVar10;
LAB_1434c2ec9:
  piVar1 = (int *)(local_50 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  piVar1 = (int *)(local_58 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c2f10 FUN_1434c2f10 body=117 status=ok
// SIG undefined FUN_1434c2f10(void)

void FUN_1434c2f10(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong *puVar3;
  
  puVar3 = (ulonglong *)(*(ulonglong *)(param_1 + 0x50) & 0xfffffffffffffffc);
  lVar2 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),(longlong)puVar3 + 0xc,*puVar3 & 0x7fffffffffffffff);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 1434c3020 FUN_1434c3020 body=1705 status=ok
// SIG undefined FUN_1434c3020(void)

void FUN_1434c3020(longlong param_1,ulonglong *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  ulonglong *puVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong local_res8;
  ulonglong *local_res10;
  longlong local_res18;
  int local_res20;
  char *local_248;
  longlong local_240;
  longlong local_238;
  longlong *local_230;
  undefined8 local_228;
  undefined4 local_220;
  uint local_210 [8];
  longlong *local_1f0;
  undefined8 local_1e8;
  undefined1 local_1e0 [8];
  int local_1d8 [102];
  
  local_res20 = *(int *)(param_1 + 0x5c);
  uVar15 = 0;
  iVar7 = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  iVar8 = iVar7;
  if (*(char *)(param_1 + 0x58) != '\0') {
    iVar8 = local_res20;
  }
  local_238 = *(longlong *)*param_3;
  iVar2 = (int)((longlong *)*param_3)[4];
  local_res8 = param_1;
  local_res10 = param_2;
  if ((-1 < iVar8) && (iVar8 <= iVar2)) {
    iVar7 = FUN_143687060(*(undefined8 *)(param_1 + 0x40),0,local_238,iVar2,iVar8,0x2000,local_1d8,
                          99);
    if (-1 < iVar7) {
      *(int *)(param_1 + 0x48) = local_1d8[0];
      *(int *)(param_1 + 0x4c) = local_1d8[1] - local_1d8[0];
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98);
      local_240 = *(longlong *)(lVar3 + 0x10);
      puVar9 = (ulonglong *)FUN_1435ca860(lVar3,local_1e0);
      lVar6 = local_238;
      lVar3 = local_240;
      uVar4 = *puVar9;
      uVar13 = uVar15;
      if (0 < (longlong)iVar7) {
        do {
          iVar8 = local_1d8[uVar13 * 2];
          if (iVar8 < 0) {
            uVar10 = FUN_143590540();
            if (*(longlong *)(uVar4 + 0x40) == *(longlong *)(uVar4 + 0x80)) {
              FUN_1434ef7a0(uVar4 + 0x78);
              *(longlong *)(uVar4 + 0x40) = *(longlong *)(uVar4 + 0x40) + 1;
            }
            else {
              local_1f0 = (longlong *)(uVar4 + 0x50);
              *local_1f0 = *(longlong *)(uVar4 + 0x40);
              local_1e8 = uVar10;
              FUN_1434e4980(uVar4 + 0x98,*(undefined8 *)(uVar4 + 0xa0),&local_1f0);
              *(longlong *)(uVar4 + 0x40) = *(longlong *)(uVar4 + 0x40) + 1;
            }
          }
          else {
            FUN_1432c3140(&local_248,lVar6 + iVar8,(longlong)(local_1d8[uVar13 * 2 + 1] - iVar8));
            local_res18 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                        (longlong)((ulonglong)local_248 & 0xfffffffffffffffc) + 0xc,
                                        *(ulonglong *)((ulonglong)local_248 & 0xfffffffffffffffc) &
                                        0x7fffffffffffffff);
            *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
            uVar10 = Scaleform::GFx::AS3::Value::Value(local_210,&local_res18);
            if (*(longlong *)(uVar4 + 0x40) == *(longlong *)(uVar4 + 0x80)) {
              FUN_1434ef7a0(uVar4 + 0x78);
            }
            else {
              local_230 = (longlong *)(uVar4 + 0x50);
              *local_230 = *(longlong *)(uVar4 + 0x40);
              local_228 = uVar10;
              FUN_1434e4980(uVar4 + 0x98,*(undefined8 *)(uVar4 + 0xa0),&local_230);
            }
            *(longlong *)(uVar4 + 0x40) = *(longlong *)(uVar4 + 0x40) + 1;
            if (9 < ((byte)local_210[0] & 0x1f)) {
              if ((local_210[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_210);
              }
              else {
                FUN_143592150();
              }
            }
            piVar1 = (int *)(local_res18 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            uVar11 = (ulonglong)local_248 & 0xfffffffffffffffc;
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar11 + 8,0xffffffff);
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar11);
            }
          }
          uVar13 = uVar13 + 1;
          param_1 = local_res8;
          param_2 = local_res10;
        } while ((longlong)uVar13 < (longlong)iVar7);
      }
      lVar3 = local_240;
      local_220 = *(undefined4 *)(param_1 + 0x48);
      local_230 = (longlong *)CONCAT44(local_230._4_4_,2);
      local_228 = 0;
      local_res8 = FUN_143360a60(*(undefined8 *)(local_240 + 0x218),"index");
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      FUN_1435b12c0(uVar4,&local_res8,&local_230,0);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_230 & 0x1f)) {
        if (((uint)local_230 >> 9 & 1) == 0) {
          FUN_1435920c0(&local_230);
        }
        else {
          FUN_143592150();
        }
      }
      lVar6 = local_238;
      local_res18 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),local_238);
      *(int *)(local_res18 + 0x18) = *(int *)(local_res18 + 0x18) + 1;
      local_res8 = FUN_143360a60(*(undefined8 *)(lVar3 + 0x218),"input");
      *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
      uVar10 = Scaleform::GFx::AS3::Value::Value(local_210,&local_res18);
      FUN_1435b12c0(uVar4,&local_res8,uVar10,0);
      piVar1 = (int *)(local_res8 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (9 < ((byte)local_210[0] & 0x1f)) {
        if ((local_210[0] >> 9 & 1) == 0) {
          FUN_1435920c0(local_210);
        }
        else {
          FUN_143592150();
        }
      }
      piVar1 = (int *)(local_res18 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
      if (*(char *)(param_1 + 100) != '\0') {
        FUN_143687f30(*(undefined8 *)(param_1 + 0x40),0,8,&local_res8);
        FUN_143687f30(*(undefined8 *)(param_1 + 0x40),0,7,&local_res18);
        FUN_143687f30(*(undefined8 *)(param_1 + 0x40),0,9,&local_248);
        if (0 < (int)local_res8) {
          do {
            lVar12 = -1;
            do {
              lVar5 = lVar12 + 3;
              lVar12 = lVar12 + 1;
            } while (local_248[lVar5] != '\0');
            FUN_1432c3140(&local_230);
            iVar8 = (*local_248 * 0x100 + (int)local_248[1]) * 2;
            FUN_1432c3140(&local_1f0,local_1d8[iVar8] + lVar6,
                          (longlong)(local_1d8[iVar8 + 1] - local_1d8[iVar8]));
            local_240 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                      (longlong)((ulonglong)local_1f0 & 0xfffffffffffffffc) + 0xc,
                                      *(ulonglong *)((ulonglong)local_1f0 & 0xfffffffffffffffc) &
                                      0x7fffffffffffffff);
            *(int *)(local_240 + 0x18) = *(int *)(local_240 + 0x18) + 1;
            Scaleform::GFx::AS3::Value::Value(local_210,&local_240);
            local_238 = FUN_143360a90(*(undefined8 *)(lVar3 + 0x218),
                                      (longlong)((ulonglong)local_230 & 0xfffffffffffffffc) + 0xc,
                                      *(ulonglong *)((ulonglong)local_230 & 0xfffffffffffffffc) &
                                      0x7fffffffffffffff);
            *(int *)(local_238 + 0x18) = *(int *)(local_238 + 0x18) + 1;
            FUN_1435b12c0(uVar4,&local_238,local_210,0);
            piVar1 = (int *)(local_238 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            if (9 < ((byte)local_210[0] & 0x1f)) {
              if ((local_210[0] >> 9 & 1) == 0) {
                FUN_1435920c0(local_210);
              }
              else {
                FUN_143592150();
              }
            }
            piVar1 = (int *)(local_240 + 0x18);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_14335f920();
            }
            uVar13 = (ulonglong)local_1f0 & 0xfffffffffffffffc;
            local_248 = local_248 + (int)local_res18;
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
            }
            uVar13 = (ulonglong)local_230 & 0xfffffffffffffffc;
            iVar8 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(uVar13 + 8,0xffffffff);
            if (iVar8 == 1) {
              (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,uVar13);
            }
            uVar14 = (int)uVar15 + 1;
            uVar15 = (ulonglong)uVar14;
            param_2 = local_res10;
          } while ((int)uVar14 < (int)local_res8);
        }
      }
      if (*(char *)(param_1 + 0x58) != '\0') {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x48);
      }
      if (*(int *)(param_1 + 0x5c) == local_res20) {
        *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
      }
      if (uVar4 != *param_2) {
        if (uVar4 != 0) {
          *(uint *)(uVar4 + 8) = *(int *)(uVar4 + 8) + 1U & 0x8fffffff;
        }
        uVar15 = *param_2;
        if (uVar15 != 0) {
          if ((uVar15 & 1) == 0) {
            if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
              *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
              FUN_1434ef880();
            }
          }
          else {
            *param_2 = uVar15 - 1;
          }
        }
        *param_2 = uVar4;
      }
      if (uVar4 == 0) {
        return;
      }
      if ((uVar4 & 1) != 0) {
        return;
      }
      if ((*(uint *)(uVar4 + 8) & 0x3fffff) == 0) {
        return;
      }
      *(uint *)(uVar4 + 8) = *(uint *)(uVar4 + 8) - 1;
      FUN_1434ef880(uVar4);
      return;
    }
  }
  *(int *)(param_1 + 0x48) = iVar7;
  uVar15 = *param_2;
  if (uVar15 == 0) {
    return;
  }
  if ((uVar15 & 1) != 0) {
    *param_2 = uVar15 - 1;
    *param_2 = 0;
    return;
  }
  if ((*(uint *)(uVar15 + 8) & 0x3fffff) != 0) {
    *(uint *)(uVar15 + 8) = *(uint *)(uVar15 + 8) - 1;
    FUN_1434ef880();
  }
  *param_2 = 0;
  return;
}



// FUNCTION 1434c36d0 FUN_1434c36d0 body=82 status=ok
// SIG undefined FUN_1434c36d0(void)

void FUN_1434c36d0(undefined8 param_1,undefined8 param_2)

{
  ulonglong local_res10 [3];
  
  local_res10[0] = 0;
  FUN_1434c3020(param_1,local_res10);
  *(bool *)param_2 = local_res10[0] != 0;
  if (((local_res10[0] != 0) && ((local_res10[0] & 1) == 0)) &&
     ((*(uint *)(local_res10[0] + 8) & 0x3fffff) != 0)) {
    *(uint *)(local_res10[0] + 8) = *(uint *)(local_res10[0] + 8) - 1;
    FUN_1434ef880();
    return;
  }
  return;
}



// FUNCTION 1434c3730 FUN_1434c3730 body=33 status=ok
// SIG undefined FUN_1434c3730(void)

undefined8 * FUN_1434c3730(undefined8 *param_1)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b192b8;
  return param_1;
}



// FUNCTION 1434c3760 FUN_1434c3760 body=210 status=ok
// SIG undefined FUN_1434c3760(void)

void FUN_1434c3760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b9d40(puVar1,param_3);
    *(undefined4 *)(puVar1 + 9) = 0xffffffff;
    puVar1[8] = 0;
    *puVar1 = &PTR_FUN_145b191f8;
    *(undefined4 *)((longlong)puVar1 + 0x4c) = 0;
    FUN_1432c2f70(puVar1 + 10);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x5c) = 0;
    *(undefined4 *)(puVar1 + 0xc) = 0x800;
    *(undefined1 *)((longlong)puVar1 + 100) = 0;
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434c3840 FUN_1434c3840 body=33 status=ok
// SIG undefined FUN_1434c3840(void)

undefined8 * FUN_1434c3840(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c3870 FUN_1434c3870 body=227 status=ok
// SIG undefined FUN_1434c3870(void)

undefined8 * FUN_1434c3870(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b167d8);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b167d8);
    *puVar3 = &PTR_FUN_145b192b8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b19330;
  }
  return param_1;
}



// FUNCTION 1434c3960 FUN_1434c3960 body=33 status=ok
// SIG undefined FUN_1434c3960(void)

undefined8 * FUN_1434c3960(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b19330;
  return param_1;
}



// FUNCTION 1434c3990 FUN_1434c3990 body=91 status=ok
// SIG undefined FUN_1434c3990(void)

void FUN_1434c3990(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  undefined8 uVar2;
  longlong local_res8 [4];
  
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5,param_6,0);
  uVar2 = FUN_1434c2940(*(undefined8 *)(param_3 + 0x10),local_res8);
  FUN_143590250(param_3,uVar2);
  piVar1 = (int *)(local_res8[0] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c3a00 FUN_1434c3a00 body=155 status=ok
// SIG undefined FUN_1434c3a00(void)

undefined8 * FUN_1434c3a00(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar2 = (undefined8 *)FUN_1435b5bc0(uVar1);
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar2,uVar1);
    *(undefined4 *)(puVar2 + 9) = 0xffffffff;
    puVar2[8] = 0;
    *puVar2 = &PTR_FUN_145b191f8;
    *(undefined4 *)((longlong)puVar2 + 0x4c) = 0;
    FUN_1432c2f70(puVar2 + 10);
    *(undefined1 *)(puVar2 + 0xb) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x5c) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0x800;
    *(undefined1 *)((longlong)puVar2 + 100) = 0;
    *param_2 = puVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434c3ab0 FUN_1434c3ab0 body=70 status=ok
// SIG undefined FUN_1434c3ab0(void)

void FUN_1434c3ab0(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1435b3e60(param_1,param_2);
  FUN_1434e7f40(param_2,&PTR_FUN_145b199a0);
  return;
}



// FUNCTION 1434c3b00 FUN_1434c3b00 body=33 status=ok
// SIG undefined FUN_1434c3b00(void)

undefined8 * FUN_1434c3b00(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c3b30 FUN_1434c3b30 body=214 status=ok
// SIG undefined FUN_1434c3b30(void)

undefined8 * FUN_1434c3b30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar2,param_2,&PTR_DAT_145b15140);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar2,param_2,&PTR_DAT_145b15140);
    *puVar2 = &PTR_FUN_145b175d0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (lVar3 != 0) {
    FUN_1435b37d0(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434c3c10 FUN_1434c3c10 body=174 status=ok
// SIG undefined FUN_1434c3c10(void)

undefined8 * FUN_1434c3c10(undefined8 *param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong local_res8;
  
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b19408;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[9] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  *(undefined4 *)(param_1 + 10) = 0;
  plVar3 = (longlong *)(**(code **)(*param_2 + 0x20))(param_2,&local_res8);
  lVar2 = *plVar3;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(param_1[9] + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  param_1[9] = lVar2;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return param_1;
}



// FUNCTION 1434c3cd0 FUN_1434c3cd0 body=129 status=ok
// SIG undefined FUN_1434c3cd0(void)

undefined8 * FUN_1434c3cd0(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b19408;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  lVar2 = FUN_143360950(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(param_1[5] + 0x98) + 0x10) + 0x218),"Error",5)
  ;
  param_1[9] = lVar2;
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  *(undefined4 *)(param_1 + 10) = param_3;
  return param_1;
}



// FUNCTION 1434c3d60 FUN_1434c3d60 body=91 status=ok
// SIG undefined FUN_1434c3d60(void)

void FUN_1434c3d60(longlong param_1,uint param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  
  if (param_2 != 0) {
    FUN_1434e3700(param_1 + 0x40,param_3);
  }
  if (1 < param_2) {
    pcVar1 = (char *)FUN_143590b70(param_3 + 0x20,local_res10,local_res20);
    if (*pcVar1 != '\0') {
      *(undefined4 *)(param_1 + 0x50) = local_res20[0];
    }
  }
  return;
}



// FUNCTION 1434c3de0 FUN_1434c3de0 body=77 status=ok
// SIG undefined FUN_1434c3de0(void)

void FUN_1434c3de0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x10);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
    *param_2 = lVar2;
    return;
  }
  *param_2 = lVar2;
  return;
}



// FUNCTION 1434c3e40 FUN_1434c3e40 body=308 status=ok
// SIG undefined FUN_1434c3e40(void)

void FUN_1434c3e40(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong local_res8;
  ulonglong local_res10;
  ulonglong local_res18 [2];
  
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x78))(param_1,&local_res8);
  lVar6 = *plVar4;
  piVar1 = (int *)(lVar6 + 0x18);
  *piVar1 = *piVar1 + 1;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar6;
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  puVar2 = (undefined8 *)param_1[8];
  if (*(int *)(puVar2 + 4) != 0) {
    FUN_1432c3140(local_res18,*puVar2,*(undefined4 *)(puVar2 + 4));
    uVar5 = FUN_1432c2fb0(&local_res10,&DAT_145b19618);
    FString::TrimQuotes(uVar5,&local_res8);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res10 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res10 & 0xfffffffffffffffc);
    }
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res18[0] & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res18[0] & 0xfffffffffffffffc);
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (*(char *)((local_res8 & 0xfffffffffffffffc) + 0xc + lVar6) != '\0');
    FUN_143360130(param_2);
    iVar3 = Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync
                      ((local_res8 & 0xfffffffffffffffc) + 8,0xffffffff);
    if (iVar3 == 1) {
      (**(code **)(*DAT_146b62f28 + 0x60))(DAT_146b62f28,local_res8 & 0xfffffffffffffffc);
    }
  }
  return;
}



// FUNCTION 1434c3f80 FUN_1434c3f80 body=33 status=ok
// SIG undefined FUN_1434c3f80(void)

undefined8 * FUN_1434c3f80(undefined8 *param_1)

{
  FUN_1435b93d0();
  *param_1 = &PTR_FUN_145b194c8;
  return param_1;
}



// FUNCTION 1434c3fb0 FUN_1434c3fb0 body=141 status=ok
// SIG undefined FUN_1434c3fb0(void)

void FUN_1434c3fb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  uint local_28 [2];
  undefined8 local_20;
  
  lVar1 = FUN_1435b5bc0(param_3);
  uVar2 = 0;
  if (lVar1 != 0) {
    uVar2 = FUN_1434c3c10(lVar1,param_3);
  }
  local_28[0] = 0;
  local_20 = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,uVar2);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434c4050 FUN_1434c4050 body=33 status=ok
// SIG undefined FUN_1434c4050(void)

undefined8 * FUN_1434c4050(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4080 FUN_1434c4080 body=227 status=ok
// SIG undefined FUN_1434c4080(void)

undefined8 * FUN_1434c4080(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15318);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15318);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b19540;
  }
  return param_1;
}



// FUNCTION 1434c4170 FUN_1434c4170 body=33 status=ok
// SIG undefined FUN_1434c4170(void)

undefined8 * FUN_1434c4170(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b19540;
  return param_1;
}



// FUNCTION 1434c41a0 FUN_1434c41a0 body=70 status=ok
// SIG undefined FUN_1434c41a0(void)

void FUN_1434c41a0(longlong param_1,undefined8 param_2)

{
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 200))();
  }
  FUN_1434e7f40(param_2,&PTR_FUN_145b15a90);
  FUN_1435b3fb0(param_1,param_2);
  return;
}



// FUNCTION 1434c41f0 FUN_1434c41f0 body=38 status=ok
// SIG undefined FUN_1434c41f0(void)

void FUN_1434c41f0(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
                    /* WARNING: Could not recover jumptable at 0x0001434c4212. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x68))(param_1,param_3,param_4,param_5);
  return;
}



// FUNCTION 1434c4220 FUN_1434c4220 body=86 status=ok
// SIG undefined FUN_1434c4220(void)

undefined8 * FUN_1434c4220(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  lVar1 = FUN_1435b5bc0(uVar2);
  if (lVar1 != 0) {
    uVar2 = FUN_1434c3c10(lVar1,uVar2);
    *param_2 = uVar2;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434c4280 FUN_1434c4280 body=68 status=ok
// SIG undefined FUN_1434c4280(void)

void FUN_1434c4280(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c42d0 FUN_1434c42d0 body=68 status=ok
// SIG undefined FUN_1434c42d0(void)

void FUN_1434c42d0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x3e9,uVar2);
  FUN_1435cbdb0(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c4320 FUN_1434c4320 body=33 status=ok
// SIG undefined FUN_1434c4320(void)

undefined8 * FUN_1434c4320(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4350 FUN_1434c4350 body=227 status=ok
// SIG undefined FUN_1434c4350(void)

undefined8 * FUN_1434c4350(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b165e0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b165e0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4440 FUN_1434c4440 body=33 status=ok
// SIG undefined FUN_1434c4440(void)

undefined8 * FUN_1434c4440(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4470 FUN_1434c4470 body=227 status=ok
// SIG undefined FUN_1434c4470(void)

undefined8 * FUN_1434c4470(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b16900);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b16900);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4560 FUN_1434c4560 body=33 status=ok
// SIG undefined FUN_1434c4560(void)

undefined8 * FUN_1434c4560(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4590 FUN_1434c4590 body=227 status=ok
// SIG undefined FUN_1434c4590(void)

undefined8 * FUN_1434c4590(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b16bc0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b16bc0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4680 FUN_1434c4680 body=33 status=ok
// SIG undefined FUN_1434c4680(void)

undefined8 * FUN_1434c4680(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c46b0 FUN_1434c46b0 body=227 status=ok
// SIG undefined FUN_1434c46b0(void)

undefined8 * FUN_1434c46b0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b14ea0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b14ea0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c47a0 FUN_1434c47a0 body=33 status=ok
// SIG undefined FUN_1434c47a0(void)

undefined8 * FUN_1434c47a0(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c47d0 FUN_1434c47d0 body=227 status=ok
// SIG undefined FUN_1434c47d0(void)

undefined8 * FUN_1434c47d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b151a0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b151a0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c48c0 FUN_1434c48c0 body=33 status=ok
// SIG undefined FUN_1434c48c0(void)

undefined8 * FUN_1434c48c0(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c48f0 FUN_1434c48f0 body=227 status=ok
// SIG undefined FUN_1434c48f0(void)

undefined8 * FUN_1434c48f0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15428);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15428);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c49e0 FUN_1434c49e0 body=33 status=ok
// SIG undefined FUN_1434c49e0(void)

undefined8 * FUN_1434c49e0(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4a10 FUN_1434c4a10 body=227 status=ok
// SIG undefined FUN_1434c4a10(void)

undefined8 * FUN_1434c4a10(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b155e0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b155e0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4b00 FUN_1434c4b00 body=33 status=ok
// SIG undefined FUN_1434c4b00(void)

undefined8 * FUN_1434c4b00(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4b30 FUN_1434c4b30 body=227 status=ok
// SIG undefined FUN_1434c4b30(void)

undefined8 * FUN_1434c4b30(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b158b0);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b158b0);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4c20 FUN_1434c4c20 body=33 status=ok
// SIG undefined FUN_1434c4c20(void)

undefined8 * FUN_1434c4c20(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4c50 FUN_1434c4c50 body=227 status=ok
// SIG undefined FUN_1434c4c50(void)

undefined8 * FUN_1434c4c50(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15c18);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15c18);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4d40 FUN_1434c4d40 body=33 status=ok
// SIG undefined FUN_1434c4d40(void)

undefined8 * FUN_1434c4d40(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4d70 FUN_1434c4d70 body=227 status=ok
// SIG undefined FUN_1434c4d70(void)

undefined8 * FUN_1434c4d70(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15e40);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15e40);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4e60 FUN_1434c4e60 body=33 status=ok
// SIG undefined FUN_1434c4e60(void)

undefined8 * FUN_1434c4e60(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c4e90 FUN_1434c4e90 body=227 status=ok
// SIG undefined FUN_1434c4e90(void)

undefined8 * FUN_1434c4e90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b15f60);
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b15f60);
    *puVar3 = &PTR_FUN_145b194c8;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b17438;
  }
  return param_1;
}



// FUNCTION 1434c4f80 FUN_1434c4f80 body=43 status=ok
// SIG undefined FUN_1434c4f80(void)

undefined8 * FUN_1434c4f80(undefined8 *param_1)

{
  FUN_1435b9d40();
  *param_1 = &PTR_FUN_145b19620;
  param_1[8] = 0;
  param_1[9] = 0;
  return param_1;
}



// FUNCTION 1434c4fc0 FUN_1434c4fc0 body=55 status=ok
// SIG undefined FUN_1434c4fc0(void)

int FUN_1434c4fc0(double param_1)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = _guard_xfg_dispatch_icall_nop(param_1 / 86400000.0);
  dVar3 = _guard_xfg_dispatch_icall_nop(dVar3 + 4.0,7.0);
  iVar2 = (int)dVar3;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 1434c5060 FUN_1434c5060 body=138 status=ok
// SIG undefined FUN_1434c5060(void)

double FUN_1434c5060(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = _guard_xfg_dispatch_icall_nop((param_1 - 1969.0) * 0.25);
  dVar2 = _guard_xfg_dispatch_icall_nop((param_1 - 1901.0) / 100.0);
  dVar3 = _guard_xfg_dispatch_icall_nop((param_1 - 1601.0) / 400.0);
  return ((dVar1 + (param_1 - 1970.0) * 365.0) - dVar2) + dVar3;
}



// FUNCTION 1434c50f0 FUN_1434c50f0 body=579 status=ok
// SIG undefined FUN_1434c50f0(void)

double FUN_1434c50f0(double param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = _guard_xfg_dispatch_icall_nop(param_1 / 31536000000.0);
  iVar5 = (int)dVar8 + 0x7b2;
  dVar8 = _guard_xfg_dispatch_icall_nop(param_1 / 31622400000.0);
  iVar3 = (int)dVar8 + 0x7b2;
  bVar7 = SBORROW4(iVar5,iVar3);
  iVar1 = iVar5 - iVar3;
  iVar6 = iVar5;
  iVar4 = iVar3;
  if (iVar5 < iVar3) {
    bVar7 = SBORROW4(iVar3,iVar5);
    iVar1 = iVar3 - iVar5;
    iVar6 = iVar3;
    iVar4 = iVar5;
  }
  iVar2 = iVar4;
  if (iVar5 != iVar3 && bVar7 == iVar1 < 0) {
    do {
      iVar2 = (iVar4 + iVar6) / 2;
      dVar11 = (double)iVar2;
      dVar8 = _guard_xfg_dispatch_icall_nop((dVar11 - 1969.0) * 0.25);
      dVar9 = _guard_xfg_dispatch_icall_nop((dVar11 - 1901.0) / 100.0);
      dVar10 = _guard_xfg_dispatch_icall_nop((dVar11 - 1601.0) / 400.0);
      if ((((dVar8 + (dVar11 - 1970.0) * 365.0) - dVar9) + dVar10) * 86400000.0 <= param_1) {
        iVar4 = iVar2 + 1;
        dVar11 = (double)iVar4;
        dVar8 = _guard_xfg_dispatch_icall_nop((dVar11 - 1969.0) * 0.25);
        dVar9 = _guard_xfg_dispatch_icall_nop((dVar11 - 1901.0) / 100.0);
        dVar10 = _guard_xfg_dispatch_icall_nop((dVar11 - 1601.0) / 400.0);
        if (param_1 < (((dVar8 + (dVar11 - 1970.0) * 365.0) - dVar9) + dVar10) * 86400000.0) break;
      }
      else {
        iVar6 = iVar2 + -1;
      }
      iVar2 = iVar4;
    } while (iVar4 < iVar6);
  }
  return (double)iVar2;
}



// FUNCTION 1434c5340 FUN_1434c5340 body=199 status=ok
// SIG undefined FUN_1434c5340(void)

void FUN_1434c5340(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar1 = (double)FUN_1434c50f0();
  dVar2 = _guard_xfg_dispatch_icall_nop(param_1 / 86400000.0);
  dVar3 = _guard_xfg_dispatch_icall_nop((dVar1 - 1969.0) * 0.25);
  dVar4 = _guard_xfg_dispatch_icall_nop((dVar1 - 1901.0) / 100.0);
  dVar5 = _guard_xfg_dispatch_icall_nop((dVar1 - 1601.0) / 400.0);
  FUN_1434c5410((int)dVar1,(int)(dVar2 - (((dVar3 + (dVar1 - 1970.0) * 365.0) - dVar4) + dVar5)));
  return;
}



// FUNCTION 1434c5410 FUN_1434c5410 body=210 status=ok
// SIG undefined FUN_1434c5410(void)

ulonglong FUN_1434c5410(uint param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int *piVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = param_1 & 0x80000003;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
  }
  uVar5 = 0;
  if ((uVar3 == 0) &&
     ((param_1 != ((int)param_1 / 100) * 100 || (param_1 == ((int)param_1 / 400) * 400)))) {
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  piVar4 = (int *)(&DAT_145b151d4 + (ulonglong)bVar2 * 0x30);
  uVar6 = uVar5;
  while( true ) {
    if (param_2 < piVar4[-1]) {
      return uVar6;
    }
    iVar1 = (int)uVar6;
    if (param_2 < *piVar4) {
      return (ulonglong)(iVar1 + 1);
    }
    if (param_2 < piVar4[1]) {
      return (ulonglong)(iVar1 + 2);
    }
    if (param_2 < piVar4[2]) break;
    if (param_2 < piVar4[3]) {
      return (ulonglong)(iVar1 + 4);
    }
    if (param_2 < piVar4[4]) {
      return (ulonglong)(iVar1 + 5);
    }
    uVar5 = uVar5 + 6;
    piVar4 = piVar4 + 6;
    uVar6 = (ulonglong)(iVar1 + 6);
    if (0xb < (longlong)uVar5) {
      return uVar6;
    }
  }
  return (ulonglong)(iVar1 + 3);
}



// FUNCTION 1434c54f0 FUN_1434c54f0 body=353 status=ok
// SIG undefined FUN_1434c54f0(void)

int FUN_1434c54f0(double param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  dVar6 = (double)FUN_1434c50f0();
  dVar7 = _guard_xfg_dispatch_icall_nop(param_1 / 86400000.0);
  dVar8 = _guard_xfg_dispatch_icall_nop((dVar6 - 1969.0) * 0.25);
  dVar9 = _guard_xfg_dispatch_icall_nop((dVar6 - 1901.0) / 100.0);
  dVar10 = _guard_xfg_dispatch_icall_nop((dVar6 - 1601.0) / 400.0);
  uVar5 = (uint)dVar6;
  iVar4 = (int)(dVar7 - (((dVar8 + (dVar6 - 1970.0) * 365.0) - dVar9) + dVar10));
  uVar2 = uVar5 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar2 == 0) && ((uVar5 != ((int)uVar5 / 100) * 100 || (uVar5 == ((int)uVar5 / 400) * 400))))
  {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  iVar3 = FUN_1434c5410(uVar5,iVar4);
  iVar4 = iVar4 + 1;
  if (0 < iVar3) {
    iVar4 = iVar4 - *(int *)(&DAT_145b151d0 + ((longlong)(iVar3 + -1) + (ulonglong)bVar1 * 0xc) * 4)
    ;
  }
  return iVar4;
}



// FUNCTION 1434c5660 FUN_1434c5660 body=357 status=ok
// SIG undefined FUN_1434c5660(void)

double FUN_1434c5660(double param_1,double param_2,double param_3,double param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  double dVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((ulonglong)(param_1 + param_2 + param_3 + param_4) & 0x7ff0000000000000) ==
      0x7ff0000000000000) {
    dVar4 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else {
    if (param_1 <= 0.0) {
      dVar4 = _guard_xfg_dispatch_icall_nop(-param_1);
      uVar1 = SUB84(dVar4,0);
      uVar7 = (uint)((ulonglong)dVar4 >> 0x20) ^ 0x80000000;
    }
    else {
      dVar4 = _guard_xfg_dispatch_icall_nop(param_1);
      uVar1 = SUB84(dVar4,0);
      uVar7 = (uint)((ulonglong)dVar4 >> 0x20);
    }
    if (param_2 <= 0.0) {
      dVar4 = _guard_xfg_dispatch_icall_nop(-param_2);
      uVar2 = SUB84(dVar4,0);
      uVar5 = (uint)((ulonglong)dVar4 >> 0x20) ^ 0x80000000;
    }
    else {
      dVar4 = _guard_xfg_dispatch_icall_nop(param_2);
      uVar2 = SUB84(dVar4,0);
      uVar5 = (uint)((ulonglong)dVar4 >> 0x20);
    }
    if (param_3 <= 0.0) {
      dVar4 = _guard_xfg_dispatch_icall_nop(-param_3);
      uVar3 = SUB84(dVar4,0);
      uVar6 = (uint)((ulonglong)dVar4 >> 0x20) ^ 0x80000000;
    }
    else {
      dVar4 = _guard_xfg_dispatch_icall_nop(param_3);
      uVar3 = SUB84(dVar4,0);
      uVar6 = (uint)((ulonglong)dVar4 >> 0x20);
    }
    if (param_4 <= 0.0) {
      dVar4 = _guard_xfg_dispatch_icall_nop(-param_4);
      dVar4 = -dVar4;
    }
    else {
      dVar4 = _guard_xfg_dispatch_icall_nop(param_4);
    }
    dVar4 = (double)CONCAT44(uVar5,uVar2) * 60000.0 + (double)CONCAT44(uVar7,uVar1) * 3600000.0 +
            (double)CONCAT44(uVar6,uVar3) * 1000.0 + dVar4;
  }
  return dVar4;
}



// FUNCTION 1434c57d0 FUN_1434c57d0 body=489 status=ok
// SIG undefined FUN_1434c57d0(void)

double FUN_1434c57d0(double param_1,double param_2,double param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  if (((ulonglong)(param_1 + param_2 + param_3) & 0x7ff0000000000000) == 0x7ff0000000000000) {
    dVar5 = (double)Scaleform::GFx::NumberUtil::NaN();
    return dVar5;
  }
  dVar6 = _guard_xfg_dispatch_icall_nop((double)(int)param_2 / 12.0);
  dVar6 = dVar6 + (double)(int)param_1;
  dVar5 = _guard_xfg_dispatch_icall_nop((double)(int)param_2,12.0);
  if (dVar5 < 0.0) {
    dVar5 = dVar5 + 12.0;
  }
  dVar7 = _guard_xfg_dispatch_icall_nop((dVar6 - 1969.0) * 0.25);
  dVar8 = _guard_xfg_dispatch_icall_nop((dVar6 - 1901.0) / 100.0);
  dVar9 = _guard_xfg_dispatch_icall_nop((dVar6 - 1601.0) / 400.0);
  dVar7 = _guard_xfg_dispatch_icall_nop(((dVar7 + (dVar6 - 1970.0) * 365.0) - dVar8) + dVar9);
  uVar4 = (uint)dVar6;
  uVar2 = uVar4 & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  iVar3 = 0;
  if ((uVar2 == 0) && ((uVar4 != ((int)uVar4 / 100) * 100 || (uVar4 == ((int)uVar4 / 400) * 400))))
  {
    bVar1 = 1;
  }
  else {
    bVar1 = 0;
  }
  if ((int)dVar5 != 0) {
    iVar3 = *(int *)(&DAT_145b151d0 + ((longlong)((int)dVar5 + -1) + (ulonglong)bVar1 * 0xc) * 4);
  }
  return ((double)iVar3 + dVar7 + (double)(int)param_3) - 1.0;
}



// FUNCTION 1434c59c0 FUN_1434c59c0 body=78 status=ok
// SIG undefined FUN_1434c59c0(void)

void FUN_1434c59c0(double param_1)

{
  if ((((ulonglong)param_1 & 0x7ff0000000000000) != 0x7ff0000000000000) &&
     (ABS(param_1) < 8.64e+15 || ABS(param_1) == 8.64e+15)) {
    if (param_1 <= 0.0) {
      _guard_xfg_dispatch_icall_nop(param_1);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x000143de0bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    floor(param_1);
    return;
  }
  Scaleform::GFx::NumberUtil::NaN();
  return;
}



// FUNCTION 1434c5a20 FUN_1434c5a20 body=52 status=ok
// SIG undefined FUN_1434c5a20(void)

double FUN_1434c5a20(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1 / 3600000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,24.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 24.0;
  }
  return dVar1;
}



// FUNCTION 1434c5a60 FUN_1434c5a60 body=52 status=ok
// SIG undefined FUN_1434c5a60(void)

double FUN_1434c5a60(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1 / 60000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 60.0;
  }
  return dVar1;
}



// FUNCTION 1434c5aa0 FUN_1434c5aa0 body=52 status=ok
// SIG undefined FUN_1434c5aa0(void)

double FUN_1434c5aa0(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1 / 1000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 60.0;
  }
  return dVar1;
}



// FUNCTION 1434c5ae0 FUN_1434c5ae0 body=39 status=ok
// SIG undefined FUN_1434c5ae0(void)

double FUN_1434c5ae0(double param_1)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_1,1000.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 1000.0;
  }
  return dVar1;
}



// FUNCTION 1434c5b10 FUN_1434c5b10 body=524 status=ok
// SIG undefined FUN_1434c5b10(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_1434c5b10(uint param_1,longlong param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined1 local_res10 [8];
  double local_78;
  double local_70;
  double local_68;
  double local_60 [3];
  undefined1 local_48 [48];
  
  pcVar2 = (char *)FUN_143590af0(param_2,local_res10,local_60 + 2);
  if ((*pcVar2 != '\0') &&
     (pcVar2 = (char *)FUN_143590af0(param_2 + 0x20,local_res10,local_48), *pcVar2 != '\0')) {
    local_60[0] = 0.0;
    local_68 = 0.0;
    local_70 = 0.0;
    local_78 = 0.0;
    local_60[1] = 1.0;
    if ((param_1 < 3) ||
       (pcVar2 = (char *)FUN_143590af0(param_2 + 0x40,local_res10,local_60 + 1), *pcVar2 != '\0')) {
      if (3 < param_1) {
        pcVar2 = (char *)FUN_143590af0(param_2 + 0x60,local_res10,local_60);
        if (*pcVar2 == '\0') {
          return;
        }
        local_60[0] = (double)(int)local_60[0];
      }
      if (4 < param_1) {
        pcVar2 = (char *)FUN_143590af0(param_2 + 0x80,local_res10,&local_68);
        if (*pcVar2 == '\0') {
          return;
        }
        local_68 = (double)(int)local_68;
      }
      if (5 < param_1) {
        pcVar2 = (char *)FUN_143590af0(param_2 + 0xa0,local_res10,&local_70);
        if (*pcVar2 == '\0') {
          return;
        }
        local_70 = (double)(int)local_70;
      }
      if (6 < param_1) {
        pcVar2 = (char *)FUN_143590af0(param_2 + 0xc0,local_res10,&local_78);
        if (*pcVar2 == '\0') {
          return;
        }
        local_78 = (double)(int)local_78;
      }
      FUN_1434c5660(local_60[0],local_68,local_70,local_78);
      FUN_1434c57d0();
      if (param_4 != (undefined4 *)0x0) {
        uVar1 = FUN_1434c65b0();
        *param_4 = uVar1;
      }
      FUN_1434c59c0();
    }
  }
  return;
}



// FUNCTION 1434c5d30 FUN_1434c5d30 body=126 status=ok
// SIG undefined FUN_1434c5d30(void)

void FUN_1434c5d30(double *param_1,int *param_2,undefined4 *param_3)

{
  longlong local_18;
  ushort local_10;
  short local_e;
  short local_c;
  
  *param_3 = 0;
  _ftime64(&local_18);
  *param_2 = local_e * -60000;
  if (0 < local_c) {
    *param_3 = 3600000;
  }
  *param_1 = (double)local_18 * 1000.0 + (double)local_10;
  return;
}



// FUNCTION 1434c5dc0 FUN_1434c5dc0 body=374 status=ok
// SIG undefined FUN_1434c5dc0(void)

void FUN_1434c5dc0(longlong param_1,uint *param_2,uint param_3,longlong param_4,int param_5,
                  undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [16];
  undefined8 uStack_70;
  undefined1 local_68 [80];
  
  if (param_3 != 0) {
    FUN_1434c86e0(local_68,*(undefined8 *)(param_1 + 0x48),param_6,param_7);
    if (4U - param_5 < param_3) {
      param_3 = 4U - param_5;
    }
    pcVar2 = (char *)FUN_143590af0(param_4,local_res18,local_68 + (longlong)param_5 * 8);
    if (*pcVar2 == '\0') {
      return;
    }
    if ((1 < param_3) &&
       (pcVar2 = (char *)FUN_143590af0(param_4 + 0x20,local_res18,
                                       local_68 + (longlong)(param_5 + 1) * 8), *pcVar2 == '\0')) {
      return;
    }
    if ((2 < param_3) &&
       (pcVar2 = (char *)FUN_143590af0(param_4 + 0x40,local_res18,
                                       local_68 + (longlong)(param_5 + 2) * 8), *pcVar2 == '\0')) {
      return;
    }
    if ((3 < param_3) &&
       (pcVar2 = (char *)FUN_143590af0(param_4 + 0x60,local_res18,
                                       local_68 + (longlong)(param_5 + 3) * 8), *pcVar2 == '\0')) {
      return;
    }
    uVar1 = FUN_1434c8840(local_68);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe4;
  *param_2 = *param_2 | 4;
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined8 *)(param_2 + 6) = uStack_70;
  return;
}



// FUNCTION 1434c5f40 FUN_1434c5f40 body=321 status=ok
// SIG undefined FUN_1434c5f40(void)

void FUN_1434c5f40(longlong param_1,uint *param_2,uint param_3,longlong param_4,int param_5,
                  undefined4 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined1 local_res18 [16];
  undefined8 uStack_60;
  undefined1 local_58 [64];
  
  if (param_3 != 0) {
    FUN_1434c88f0(local_58,*(undefined8 *)(param_1 + 0x48),param_6,param_7);
    if (3U - param_5 < param_3) {
      param_3 = 3U - param_5;
    }
    pcVar2 = (char *)FUN_143590af0(param_4,local_res18,local_58 + (longlong)param_5 * 8);
    if (*pcVar2 == '\0') {
      return;
    }
    if ((1 < param_3) &&
       (pcVar2 = (char *)FUN_143590af0(param_4 + 0x20,local_res18,
                                       local_58 + (longlong)(param_5 + 1) * 8), *pcVar2 == '\0')) {
      return;
    }
    if ((2 < param_3) &&
       (pcVar2 = (char *)FUN_143590af0(param_4 + 0x40,local_res18,
                                       local_58 + (longlong)(param_5 + 2) * 8), *pcVar2 == '\0')) {
      return;
    }
    uVar1 = FUN_1434c8aa0(local_58);
    *(undefined8 *)(param_1 + 0x48) = uVar1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe4;
  *param_2 = *param_2 | 4;
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined8 *)(param_2 + 6) = uStack_60;
  return;
}



// FUNCTION 1434c6090 FUN_1434c6090 body=90 status=ok
// SIG undefined FUN_1434c6090(void)

void FUN_1434c6090(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 local_58 [10];
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),param_4,param_5);
  local_58[param_2] = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c60f0 FUN_1434c60f0 body=225 status=ok
// SIG undefined FUN_1434c60f0(void)

void FUN_1434c60f0(longlong param_1,int param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5)

{
  double dVar1;
  undefined8 local_48 [3];
  int local_30;
  int *local_28;
  double local_20;
  
  FUN_1434c88f0(local_48,*(undefined8 *)(param_1 + 0x48),param_4,param_5);
  local_48[param_2] = param_3;
  dVar1 = (double)FUN_1434c57d0(local_48[0],local_48[1],local_48[2]);
  local_20 = dVar1 * 86400000.0 + local_20;
  if (local_28 != (int *)0x0) {
    local_20 = local_20 - (double)(*local_28 + local_30);
  }
  if ((((ulonglong)local_20 & 0x7ff0000000000000) == 0x7ff0000000000000) ||
     (8.64e+15 < ABS(local_20))) {
    dVar1 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (local_20 <= 0.0) {
    dVar1 = _guard_xfg_dispatch_icall_nop(local_20);
  }
  else {
    dVar1 = _guard_xfg_dispatch_icall_nop(local_20);
  }
  *(double *)(param_1 + 0x48) = dVar1;
  return;
}



// FUNCTION 1434c61e0 FUN_1434c61e0 body=962 status=ok
// SIG undefined FUN_1434c61e0(void)

longlong FUN_1434c61e0(undefined8 *param_1,longlong param_2,double param_3,int param_4,int param_5,
                      char param_6,char param_7,char param_8)

{
  double dVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  undefined *puVar5;
  int iVar6;
  char *pcVar7;
  double dVar8;
  double local_res18;
  int local_res20;
  int local_4c8;
  int local_4c4;
  int local_4c0 [2];
  undefined4 local_4b8 [2];
  undefined8 *local_4b0;
  longlong local_4a8;
  undefined *local_4a0;
  double local_498;
  double local_490;
  double local_488;
  double local_468;
  double local_460;
  double local_458;
  undefined1 local_428 [16];
  longlong local_418;
  
  if ((((uint)((ulonglong)param_3 >> 0x20) & 0x7ff00000) == 0x7ff00000) &&
     (((ulonglong)param_3 & 0xfffffffffffff) != 0)) {
    *param_1 = 0x2064696c61766e49;
    *(undefined4 *)(param_1 + 1) = 0x65746144;
    *(undefined1 *)((longlong)param_1 + 0xc) = 0;
    lVar4 = 0xc;
  }
  else {
    dVar1 = param_3;
    if (param_8 == '\0') {
      dVar1 = param_3 + (double)(param_5 + param_4);
    }
    lVar4 = 0;
    local_res18 = param_3;
    local_res20 = param_4;
    FUN_1434c88f0(&local_498,dVar1,0,0);
    if (param_6 != '\0') {
      dVar8 = _guard_xfg_dispatch_icall_nop(dVar1 / 86400000.0);
      dVar8 = _guard_xfg_dispatch_icall_nop(dVar8 + 4.0,7.0);
      local_4b8[0] = 2;
      iVar6 = (int)dVar8;
      local_res18 = (double)CONCAT44(local_res18._4_4_,(int)local_488);
      local_4b0 = param_1;
      local_4a8 = param_2;
      FUN_1433561d0(local_428,local_4b8);
      FUN_1433563e0(local_428,"{0} {1} {2} ");
      iVar3 = iVar6 + 7;
      if (-1 < iVar6) {
        iVar3 = iVar6;
      }
      FUN_143386e30(local_428,&PTR_DAT_1467cf998 + iVar3);
      FUN_143386e30(local_428,&PTR_DAT_1467cf9d0 + (int)local_490);
      FUN_1432e0b40(local_428,&local_res18);
      Scaleform::MsgFormat::FinishFormatD(local_428);
      lVar4 = local_418;
      FUN_1433562f0(local_428);
      param_4 = local_res20;
    }
    if (param_7 != '\0') {
      FUN_1434c86e0(&local_468,dVar1,0,0);
      pcVar7 = "{0:02}:{1:02}:{2:02}";
      iVar3 = (param_5 + param_4) / 60000;
      iVar3 = iVar3 + (iVar3 / 0x3c) * 0x28;
      local_res18 = (double)CONCAT44(local_res18._4_4_,iVar3);
      local_4a0 = &DAT_145b19850;
      if ((param_8 == '\0') && (pcVar7 = "{0:02}:{1:02}:{2:02} {3}{4:04}", iVar3 < 0)) {
        local_res18 = (double)CONCAT44(local_res18._4_4_,-iVar3);
        local_4a0 = &DAT_145b19890;
      }
      local_4c0[0] = (int)local_458;
      local_4b8[0] = 2;
      local_4a8 = param_2 - lVar4;
      local_4c4 = (int)local_460;
      local_4c8 = (int)local_468;
      local_4b0 = (undefined8 *)(lVar4 + (longlong)param_1);
      FUN_1433561d0(local_428,local_4b8);
      FUN_1433563e0(local_428,pcVar7);
      FUN_1432e0b40(local_428,&local_4c8);
      FUN_1432e0b40(local_428,&local_4c4);
      FUN_1432e0b40(local_428,local_4c0);
      FUN_143386e30(local_428,&local_4a0);
      FUN_1432e0b40(local_428,&local_res18);
      Scaleform::MsgFormat::FinishFormatD(local_428);
      lVar2 = local_418;
      FUN_1433562f0(local_428);
      lVar4 = lVar4 + lVar2;
    }
    if (param_6 != '\0') {
      local_4a8 = param_2 - lVar4;
      local_4b8[0] = 2;
      local_res18 = (double)CONCAT44(local_res18._4_4_,(int)local_498);
      local_4b0 = (undefined8 *)(lVar4 + (longlong)param_1);
      FUN_1433561d0(local_428,local_4b8);
      puVar5 = &DAT_145b198a0;
      if (param_7 != '\0') {
        puVar5 = &DAT_145b19898;
      }
      FUN_1433563e0(local_428,puVar5);
      FUN_1432e0b40(local_428,&local_res18);
      Scaleform::MsgFormat::FinishFormatD(local_428);
      FUN_1433562f0(local_428);
      lVar4 = lVar4 + local_418;
    }
    if ((param_7 != '\0') && (param_8 != '\0')) {
      *(undefined4 *)(lVar4 + (longlong)param_1) = 0x43545520;
      *(undefined1 *)(lVar4 + 4 + (longlong)param_1) = 0;
      lVar4 = lVar4 + 4;
    }
  }
  return lVar4;
}



// FUNCTION 1434c65b0 FUN_1434c65b0 body=66 status=ok
// SIG undefined FUN_1434c65b0(void)

undefined4 FUN_1434c65b0(double param_1)

{
  errno_t eVar1;
  undefined4 uVar2;
  longlong local_res8 [4];
  tm local_38;
  
  uVar2 = 0;
  local_res8[0] = (longlong)(param_1 / 1000.0);
  eVar1 = _localtime64_s(&local_38,local_res8);
  if ((eVar1 == 0) && (uVar2 = 0, 0 < local_38.tm_isdst)) {
    uVar2 = 3600000;
  }
  return uVar2;
}



// FUNCTION 1434c6600 FUN_1434c6600 body=341 status=ok
// SIG undefined FUN_1434c6600(void)

void FUN_1434c6600(longlong param_1,int param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined1 local_res10 [8];
  uint local_68 [2];
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_48 [48];
  
  puVar1 = (undefined4 *)(param_1 + 0x44);
  puVar2 = (undefined4 *)(param_1 + 0x40);
  puVar3 = (undefined8 *)(param_1 + 0x48);
  FUN_1434c5d30(puVar3,puVar2,puVar1);
  if (param_2 == 0) {
    return;
  }
  if (param_2 != 1) {
    uVar7 = FUN_1434c5b10(param_2,param_3,*puVar2,puVar1);
    *puVar3 = uVar7;
    return;
  }
  local_68[0] = 0;
  local_60 = 0;
  pcVar6 = (char *)FUN_143590760(param_3,local_res10,
                                 *(undefined8 *)
                                  (*(longlong *)
                                    (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) +
                                  0x218),local_68,2);
  if (*pcVar6 != '\0') {
    if (((byte)local_68[0] & 0x1f) == 10) {
      *(int *)(local_58 + 3) = *(int *)(local_58 + 3) + 1;
      FUN_1434c7eb0(local_48,*local_58);
      piVar4 = (int *)(local_58 + 3);
      *piVar4 = *piVar4 + -1;
      if (*piVar4 == 0) {
        FUN_14335f920(local_58);
      }
      uVar7 = FUN_1434c8420(local_48,*puVar2);
    }
    else {
      pcVar6 = (char *)FUN_143590b10(local_68,local_res10);
      if (*pcVar6 == '\0') goto LAB_1434c6712;
      uVar7 = FUN_1434c59c0(local_58);
    }
    *puVar3 = uVar7;
    uVar5 = FUN_1434c65b0();
    *puVar1 = uVar5;
  }
LAB_1434c6712:
  if (9 < ((byte)local_68[0] & 0x1f)) {
    if ((local_68[0] >> 9 & 1) == 0) {
      FUN_1435920c0(local_68);
    }
    else {
      FUN_143592150();
    }
  }
  return;
}



// FUNCTION 1434c6760 FUN_1434c6760 body=8 status=ok
// SIG undefined FUN_1434c6760(void)

void FUN_1434c6760(longlong param_1,undefined8 *param_2)

{
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 1434c6770 FUN_1434c6770 body=184 status=ok
// SIG undefined FUN_1434c6770(void)

void FUN_1434c6770(longlong param_1,undefined8 *param_2,double param_3)

{
  errno_t eVar1;
  undefined4 uVar2;
  double dVar3;
  double local_res8;
  tm local_38;
  
  local_res8 = param_3;
  if ((((uint)((ulonglong)param_3 >> 0x20) & 0x7ff00000) == 0x7ff00000) || (8.64e+15 < ABS(param_3))
     ) {
    dVar3 = (double)Scaleform::GFx::NumberUtil::NaN();
  }
  else if (param_3 <= 0.0) {
    dVar3 = _guard_xfg_dispatch_icall_nop(param_3);
  }
  else {
    dVar3 = _guard_xfg_dispatch_icall_nop(param_3);
  }
  *(double *)(param_1 + 0x48) = dVar3;
  uVar2 = 0;
  local_res8 = (double)(longlong)(dVar3 / 1000.0);
  eVar1 = _localtime64_s(&local_38,(__time64_t *)&local_res8);
  if ((eVar1 == 0) && (uVar2 = 0, 0 < local_38.tm_isdst)) {
    uVar2 = 3600000;
  }
  *(undefined4 *)(param_1 + 0x44) = uVar2;
  *param_2 = *(undefined8 *)(param_1 + 0x48);
  return;
}



// FUNCTION 1434c6830 FUN_1434c6830 body=210 status=ok
// SIG undefined FUN_1434c6830(void)

void FUN_1434c6830(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_108 [256];
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10);
  uVar2 = FUN_1435b4fe0();
  lVar3 = FUN_1435b3ae0(uVar2);
  if (param_1 == lVar3) {
    lVar4 = FUN_143360950(*(undefined8 *)(lVar4 + 0x218),"Invalid Date",0xc);
  }
  else {
    uVar2 = FUN_1434c61e0(local_108,0x100,*(undefined8 *)(param_1 + 0x48),
                          *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1,1,0);
    lVar4 = FUN_143360a90(*(undefined8 *)(lVar4 + 0x218),local_108,uVar2);
  }
  *(int *)(lVar4 + 0x18) = *(int *)(lVar4 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar4;
  piVar1 = (int *)(lVar4 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar4);
  }
  return;
}



// FUNCTION 1434c6910 FUN_1434c6910 body=155 status=ok
// SIG undefined FUN_1434c6910(void)

void FUN_1434c6910(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_108 [256];
  
  uVar2 = FUN_1434c61e0(local_108,0x100,*(undefined8 *)(param_1 + 0x48),
                        *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1,0,0);
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),local_108,uVar2);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 1434c69c0 FUN_1434c69c0 body=566 status=ok
// SIG undefined FUN_1434c69c0(void)

void FUN_1434c69c0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  undefined4 uVar4;
  double local_res8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  undefined *local_578;
  undefined4 local_570;
  undefined4 uStack_56c;
  undefined8 *local_568;
  double local_560;
  undefined8 local_538;
  undefined4 local_530;
  undefined1 local_52c;
  undefined1 local_438 [16];
  undefined8 local_428;
  
  local_res8 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)local_res8 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)local_res8 & 0xfffffffffffff) != 0)) {
    local_428 = 0xc;
    local_530 = 0x65746144;
    local_52c = 0;
    local_538 = 0x2064696c61766e49;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x40) + *(int *)(param_1 + 0x44);
    uVar4 = SUB84(local_res8 + (double)iVar3,0);
    FUN_1434c88f0(&local_570,uVar4,0,0);
    FUN_1434c86e0(&local_570,uVar4,0,0);
    iVar3 = iVar3 / 60000;
    iVar3 = iVar3 + (iVar3 / 0x3c) * 0x28;
    local_578 = &DAT_145b19850;
    if (iVar3 < 0) {
      iVar3 = -iVar3;
      local_578 = &DAT_145b19890;
    }
    local_res8 = (double)CONCAT44(local_res8._4_4_,iVar3);
    local_res20[0] = (int)local_560;
    local_560 = 1.26480805335359e-321;
    local_res18[0] = (int)(double)local_568;
    local_res10[0] = (int)(double)CONCAT44(uStack_56c,local_570);
    local_570 = 2;
    local_568 = &local_538;
    FUN_1433561d0(local_438,&local_570);
    FUN_1433563e0(local_438,"{0:02}:{1:02}:{2:02} {3}{4:04}");
    FUN_1432e0b40(local_438,local_res10);
    FUN_1432e0b40(local_438,local_res18);
    FUN_1432e0b40(local_438,local_res20);
    FUN_143386e30(local_438,&local_578);
    FUN_1432e0b40(local_438,&local_res8);
    Scaleform::MsgFormat::FinishFormatD(local_438);
    FUN_1433562f0(local_438);
  }
  lVar2 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),&local_538,local_428);
  *(int *)(lVar2 + 0x18) = *(int *)(lVar2 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar2;
  piVar1 = (int *)(lVar2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar2);
  }
  return;
}



// FUNCTION 1434c6c30 FUN_1434c6c30 body=155 status=ok
// SIG undefined FUN_1434c6c30(void)

void FUN_1434c6c30(longlong param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_108 [256];
  
  uVar2 = FUN_1434c61e0(local_108,0x100,*(undefined8 *)(param_1 + 0x48),0,0,1,1,1);
  lVar3 = FUN_143360a90(*(undefined8 *)
                         (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10)
                         + 0x218),local_108,uVar2);
  *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 2;
  piVar1 = (int *)(*param_2 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  *param_2 = lVar3;
  piVar1 = (int *)(lVar3 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920(lVar3);
  }
  return;
}



// FUNCTION 1434c6ce0 AS3getUTCFullYear body=76 status=ok
// SIG undefined AS3getUTCFullYear(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCFullYear
               (longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0)) {
    uVar1 = FUN_1434c50f0();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434c6d40 FUN_1434c6d40 body=84 status=ok
// SIG undefined FUN_1434c6d40(void)

void FUN_1434c6d40(longlong param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar2 & 0xfffffffffffff) == 0)) {
    iVar1 = FUN_1434c5340();
    dVar2 = (double)iVar1;
  }
  *param_2 = dVar2;
  return;
}



// FUNCTION 1434c6da0 FUN_1434c6da0 body=84 status=ok
// SIG undefined FUN_1434c6da0(void)

void FUN_1434c6da0(longlong param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar2 & 0xfffffffffffff) == 0)) {
    iVar1 = FUN_1434c54f0();
    dVar2 = (double)iVar1;
  }
  *param_2 = dVar2;
  return;
}



// FUNCTION 1434c6e00 FUN_1434c6e00 body=125 status=ok
// SIG undefined FUN_1434c6e00(void)

void FUN_1434c6e00(longlong param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar3 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar3 & 0xfffffffffffff) == 0)) {
    dVar3 = _guard_xfg_dispatch_icall_nop(dVar3 / 86400000.0);
    dVar3 = _guard_xfg_dispatch_icall_nop(dVar3 + 4.0,7.0);
    iVar2 = (int)dVar3;
    iVar1 = iVar2 + 7;
    if (-1 < iVar2) {
      iVar1 = iVar2;
    }
    dVar3 = (double)iVar1;
  }
  *param_2 = dVar3;
  return;
}



// FUNCTION 1434c6e90 FUN_1434c6e90 body=114 status=ok
// SIG undefined FUN_1434c6e90(void)

void FUN_1434c6e90(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar1 & 0xfffffffffffff) == 0)) {
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 / 3600000.0);
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,24.0);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + 24.0;
    }
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c6f10 FUN_1434c6f10 body=114 status=ok
// SIG undefined FUN_1434c6f10(void)

void FUN_1434c6f10(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar1 & 0xfffffffffffff) == 0)) {
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 / 60000.0);
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + 60.0;
    }
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c6f90 FUN_1434c6f90 body=114 status=ok
// SIG undefined FUN_1434c6f90(void)

void FUN_1434c6f90(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar1 & 0xfffffffffffff) == 0)) {
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1 / 1000.0);
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
    if (dVar1 < 0.0) {
      dVar1 = dVar1 + 60.0;
    }
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c7010 AS3getUTCMilliseconds body=101 status=ok
// SIG undefined AS3getUTCMilliseconds(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCMilliseconds
               (longlong param_1,double *param_2)

{
  double _X;
  
  _X = *(double *)(param_1 + 0x48);
  if ((((ulonglong)_X & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)_X & 0xfffffffffffff) == 0)) {
    _X = ::_guard_xfg_dispatch_icall_nop(_X,1000.0);
    if (_X < 0.0) {
      _X = _X + 1000.0;
    }
  }
  *param_2 = _X;
  return;
}



// FUNCTION 1434c7080 AS3getFullYear body=112 status=ok
// SIG undefined AS3getFullYear(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getFullYear(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  dVar1 = (double)FUN_1434c50f0((double)*(int *)(param_1 + 0x40) + dVar1 +
                                (double)*(int *)(param_1 + 0x44));
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c7100 FUN_1434c7100 body=120 status=ok
// SIG undefined FUN_1434c7100(void)

void FUN_1434c7100(longlong param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  iVar2 = FUN_1434c5340((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44))
  ;
  *param_2 = (double)iVar2;
  return;
}



// FUNCTION 1434c7180 FUN_1434c7180 body=120 status=ok
// SIG undefined FUN_1434c7180(void)

void FUN_1434c7180(longlong param_1,double *param_2)

{
  double dVar1;
  int iVar2;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  iVar2 = FUN_1434c54f0((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44))
  ;
  *param_2 = (double)iVar2;
  return;
}



// FUNCTION 1434c7200 FUN_1434c7200 body=161 status=ok
// SIG undefined FUN_1434c7200(void)

void FUN_1434c7200(longlong param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar3 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar3 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar3;
    return;
  }
  dVar3 = _guard_xfg_dispatch_icall_nop
                    (((double)*(int *)(param_1 + 0x40) + dVar3 + (double)*(int *)(param_1 + 0x44)) /
                     86400000.0);
  dVar3 = _guard_xfg_dispatch_icall_nop(dVar3 + 4.0,7.0);
  iVar2 = (int)dVar3;
  iVar1 = iVar2 + 7;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  *param_2 = (double)iVar1;
  return;
}



// FUNCTION 1434c72b0 FUN_1434c72b0 body=150 status=ok
// SIG undefined FUN_1434c72b0(void)

void FUN_1434c72b0(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44)) /
                     3600000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,24.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 24.0;
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c7350 FUN_1434c7350 body=150 status=ok
// SIG undefined FUN_1434c7350(void)

void FUN_1434c7350(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44)) /
                     60000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 60.0;
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c73f0 FUN_1434c73f0 body=150 status=ok
// SIG undefined FUN_1434c73f0(void)

void FUN_1434c73f0(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop
                    (((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44)) /
                     1000.0);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1,60.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 60.0;
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c7490 AS3getMilliseconds body=137 status=ok
// SIG undefined AS3getMilliseconds(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getMilliseconds(longlong param_1,double *param_2)

{
  double dVar1;
  
  dVar1 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) &&
     (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
    *param_2 = dVar1;
    return;
  }
  dVar1 = ::_guard_xfg_dispatch_icall_nop
                    ((double)*(int *)(param_1 + 0x40) + dVar1 + (double)*(int *)(param_1 + 0x44),
                     1000.0);
  if (dVar1 < 0.0) {
    dVar1 = dVar1 + 1000.0;
  }
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c7590 FUN_1434c7590 body=38 status=ok
// SIG undefined FUN_1434c7590(void)

void FUN_1434c7590(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c75c0 FUN_1434c75c0 body=38 status=ok
// SIG undefined FUN_1434c75c0(void)

void FUN_1434c75c0(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c75f0 FUN_1434c75f0 body=38 status=ok
// SIG undefined FUN_1434c75f0(void)

void FUN_1434c75f0(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c7620 FUN_1434c7620 body=38 status=ok
// SIG undefined FUN_1434c7620(void)

void FUN_1434c7620(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c7650 FUN_1434c7650 body=38 status=ok
// SIG undefined FUN_1434c7650(void)

void FUN_1434c7650(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c7680 FUN_1434c7680 body=38 status=ok
// SIG undefined FUN_1434c7680(void)

void FUN_1434c7680(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c76b0 AS3setMilliseconds body=38 status=ok
// SIG undefined AS3setMilliseconds(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3setMilliseconds(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c76e0 FUN_1434c76e0 body=29 status=ok
// SIG undefined FUN_1434c76e0(void)

void FUN_1434c76e0(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c7710 FUN_1434c7710 body=33 status=ok
// SIG undefined FUN_1434c7710(void)

void FUN_1434c7710(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c7740 FUN_1434c7740 body=33 status=ok
// SIG undefined FUN_1434c7740(void)

void FUN_1434c7740(void)

{
  FUN_1434c5f40();
  return;
}



// FUNCTION 1434c7770 FUN_1434c7770 body=29 status=ok
// SIG undefined FUN_1434c7770(void)

void FUN_1434c7770(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c77a0 FUN_1434c77a0 body=33 status=ok
// SIG undefined FUN_1434c77a0(void)

void FUN_1434c77a0(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c77d0 FUN_1434c77d0 body=33 status=ok
// SIG undefined FUN_1434c77d0(void)

void FUN_1434c77d0(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c7800 AS3setUTCMilliseconds body=33 status=ok
// SIG undefined AS3setUTCMilliseconds(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3setUTCMilliseconds(void)

{
  FUN_1434c5dc0();
  return;
}



// FUNCTION 1434c7840 fullYearSet body=29 status=ok
// SIG undefined fullYearSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::fullYearSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,0,param_3,*(undefined4 *)(param_1 + 0x40),param_1 + 0x44);
  return;
}



// FUNCTION 1434c7880 monthSet body=32 status=ok
// SIG undefined monthSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::monthSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,1,param_3,*(undefined4 *)(param_1 + 0x40),param_1 + 0x44);
  return;
}



// FUNCTION 1434c78c0 dateSet body=32 status=ok
// SIG undefined dateSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::dateSet
               (longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,2,param_3,*(undefined4 *)(param_1 + 0x40),param_1 + 0x44);
  return;
}



// FUNCTION 1434c7900 FUN_1434c7900 body=72 status=ok
// SIG undefined FUN_1434c7900(void)

void FUN_1434c7900(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_58 [10];
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),
                param_1 + 0x44);
  local_58[0] = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7960 FUN_1434c7960 body=72 status=ok
// SIG undefined FUN_1434c7960(void)

void FUN_1434c7960(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [8];
  undefined8 local_50;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),
                param_1 + 0x44);
  local_50 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c79c0 FUN_1434c79c0 body=72 status=ok
// SIG undefined FUN_1434c79c0(void)

void FUN_1434c79c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [16];
  undefined8 local_48;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),
                param_1 + 0x44);
  local_48 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7a20 FUN_1434c7a20 body=72 status=ok
// SIG undefined FUN_1434c7a20(void)

void FUN_1434c7a20(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x40),
                param_1 + 0x44);
  local_40 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7a70 AS3getUTCFullYear body=76 status=ok
// SIG undefined AS3getUTCFullYear(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCFullYear
               (longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_1 + 0x48);
  if (((uVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) || ((uVar1 & 0xfffffffffffff) == 0)) {
    uVar1 = FUN_1434c50f0();
  }
  *param_2 = uVar1;
  return;
}



// FUNCTION 1434c7ad0 FUN_1434c7ad0 body=28 status=ok
// SIG undefined FUN_1434c7ad0(void)

void FUN_1434c7ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,0,param_3,0,0);
  return;
}



// FUNCTION 1434c7b00 FUN_1434c7b00 body=84 status=ok
// SIG undefined FUN_1434c7b00(void)

void FUN_1434c7b00(longlong param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar2 & 0xfffffffffffff) == 0)) {
    iVar1 = FUN_1434c5340();
    dVar2 = (double)iVar1;
  }
  *param_2 = dVar2;
  return;
}



// FUNCTION 1434c7b60 monthUTCSet body=30 status=ok
// SIG undefined monthUTCSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::monthUTCSet
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,1,param_3,0,0);
  return;
}



// FUNCTION 1434c7b90 FUN_1434c7b90 body=84 status=ok
// SIG undefined FUN_1434c7b90(void)

void FUN_1434c7b90(longlong param_1,double *param_2)

{
  int iVar1;
  double dVar2;
  
  dVar2 = *(double *)(param_1 + 0x48);
  if ((((ulonglong)dVar2 & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)dVar2 & 0xfffffffffffff) == 0)) {
    iVar1 = FUN_1434c54f0();
    dVar2 = (double)iVar1;
  }
  *param_2 = dVar2;
  return;
}



// FUNCTION 1434c7bf0 dateUTCSet body=30 status=ok
// SIG undefined dateUTCSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::dateUTCSet
               (undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1434c60f0(param_1,2,param_3,0,0);
  return;
}



// FUNCTION 1434c7c30 FUN_1434c7c30 body=70 status=ok
// SIG undefined FUN_1434c7c30(void)

void FUN_1434c7c30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_58 [10];
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),0,0);
  local_58[0] = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7c90 FUN_1434c7c90 body=70 status=ok
// SIG undefined FUN_1434c7c90(void)

void FUN_1434c7c90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [8];
  undefined8 local_50;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),0,0);
  local_50 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7cf0 FUN_1434c7cf0 body=70 status=ok
// SIG undefined FUN_1434c7cf0(void)

void FUN_1434c7cf0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [16];
  undefined8 local_48;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),0,0);
  local_48 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7d40 AS3getUTCMilliseconds body=101 status=ok
// SIG undefined AS3getUTCMilliseconds(void)

void Scaleform::GFx::AS3::Instances::fl::Date::AS3getUTCMilliseconds
               (longlong param_1,double *param_2)

{
  double _X;
  
  _X = *(double *)(param_1 + 0x48);
  if ((((ulonglong)_X & 0x7ff0000000000000) != 0x7ff0000000000000) ||
     (((ulonglong)_X & 0xfffffffffffff) == 0)) {
    _X = ::_guard_xfg_dispatch_icall_nop(_X,1000.0);
    if (_X < 0.0) {
      _X = _X + 1000.0;
    }
  }
  *param_2 = _X;
  return;
}



// FUNCTION 1434c7db0 FUN_1434c7db0 body=70 status=ok
// SIG undefined FUN_1434c7db0(void)

void FUN_1434c7db0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_58 [24];
  undefined8 local_40;
  
  FUN_1434c86e0(local_58,*(undefined8 *)(param_1 + 0x48),0,0);
  local_40 = param_3;
  uVar1 = FUN_1434c8840(local_58);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return;
}



// FUNCTION 1434c7e10 timeSet body=19 status=ok
// SIG undefined timeSet(void)

void Scaleform::GFx::AS3::Instances::fl::Date::timeSet(undefined8 param_1)

{
  undefined1 local_res20 [8];
  
  FUN_1434c6770(param_1,local_res20);
  return;
}



// FUNCTION 1434c7eb0 FUN_1434c7eb0 body=1343 status=ok
// SIG undefined FUN_1434c7eb0(void)

undefined4 * FUN_1434c7eb0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  char *pcVar6;
  int local_res8;
  
  *param_1 = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined8 *)(param_1 + 2) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
  cVar1 = *param_2;
  if (cVar1 != '\0') {
LAB_1434c7f04:
    do {
      if (((cVar1 < '!') || (cVar1 == ',')) ||
         ((pcVar6 = param_2, cVar1 == '-' && (9 < (byte)(param_2[1] - 0x30U))))) {
        cVar1 = param_2[1];
        param_2 = param_2 + 1;
        pcVar6 = param_2;
        if (cVar1 != '\0') goto LAB_1434c7f04;
      }
      cVar1 = *pcVar6;
      if (cVar1 == '\0') break;
      if (cVar1 == '-') {
        if (*(char *)((longlong)param_1 + 1) != '\0') goto switchD_1434c82c6_caseD_0;
        param_1[4] = 0;
        cVar1 = *pcVar6;
        while (('/' < cVar1 && (cVar1 < ':'))) {
          pcVar6 = pcVar6 + 1;
          param_1[4] = (int)cVar1 + (param_1[4] * 5 + -0x18) * 2;
          cVar1 = *pcVar6;
        }
        *(undefined1 *)((longlong)param_1 + 1) = 1;
        param_1[4] = -param_1[4];
        param_2 = pcVar6 + 1;
      }
      else {
        param_2 = pcVar6;
        if ((byte)(cVar1 - 0x30U) < 10) {
          local_res8 = 0;
          while (('/' < cVar1 && (cVar1 < ':'))) {
            param_2 = param_2 + 1;
            local_res8 = (int)cVar1 + (local_res8 * 5 + -0x18) * 2;
            cVar1 = *param_2;
          }
          cVar1 = *param_2;
          for (; (cVar1 != '\0' &&
                 (((cVar1 < '!' || (cVar1 == ',')) ||
                  ((cVar1 == '-' && (9 < (byte)(param_2[1] - 0x30U))))))); param_2 = param_2 + 1) {
            cVar1 = param_2[1];
          }
          if (*param_2 == ':') {
            if (*(char *)(param_1 + 1) != '\0') goto switchD_1434c82c6_caseD_0;
            param_2 = param_2 + 1;
            *(undefined1 *)(param_1 + 1) = 1;
            param_1[7] = local_res8;
            cVar1 = *param_2;
            for (; (cVar1 != '\0' &&
                   (((cVar1 < '!' || (cVar1 == ',')) ||
                    ((cVar1 == '-' && (9 < (byte)(param_2[1] - 0x30U))))))); param_2 = param_2 + 1)
            {
              cVar1 = param_2[1];
            }
            if ((byte)(*param_2 - 0x30U) < 10) {
              param_1[8] = 0;
              cVar1 = *param_2;
              while (('/' < cVar1 && (cVar1 < ':'))) {
                param_2 = param_2 + 1;
                param_1[8] = (int)cVar1 + (param_1[8] * 5 + -0x18) * 2;
                cVar1 = *param_2;
              }
              if (*param_2 == ':') {
                cVar1 = param_2[1];
                pcVar6 = param_2;
                while ((param_2 = pcVar6 + 1, cVar1 != '\0' &&
                       (((cVar1 < '!' || (cVar1 == ',')) ||
                        ((cVar1 == '-' && (9 < (byte)(pcVar6[2] - 0x30U)))))))) {
                  cVar1 = pcVar6[2];
                  pcVar6 = param_2;
                }
                if ((byte)(*param_2 - 0x30U) < 10) {
                  param_1[9] = 0;
                  cVar1 = *param_2;
                  while (('/' < cVar1 && (cVar1 < ':'))) {
                    param_2 = param_2 + 1;
                    param_1[9] = (int)cVar1 + (param_1[9] * 5 + -0x18) * 2;
                    cVar1 = *param_2;
                  }
                }
              }
            }
          }
          else if (*param_2 == '/') {
            if (*(char *)((longlong)param_1 + 1) != '\0') goto switchD_1434c82c6_caseD_0;
            pcVar6 = param_2 + 1;
            param_1[2] = local_res8 + -1;
            cVar1 = *pcVar6;
            for (; (cVar1 != '\0' &&
                   (((cVar1 < '!' || (cVar1 == ',')) ||
                    ((cVar1 == '-' && (9 < (byte)(pcVar6[1] - 0x30U))))))); pcVar6 = pcVar6 + 1) {
              cVar1 = pcVar6[1];
            }
            if (9 < (byte)(*pcVar6 - 0x30U)) goto switchD_1434c82c6_caseD_0;
            param_1[3] = 0;
            cVar1 = *pcVar6;
            while (('/' < cVar1 && (cVar1 < ':'))) {
              pcVar6 = pcVar6 + 1;
              param_1[3] = (int)cVar1 + (param_1[3] * 5 + -0x18) * 2;
              cVar1 = *pcVar6;
            }
            cVar1 = *pcVar6;
            for (; (cVar1 != '\0' &&
                   (((cVar1 < '!' || (cVar1 == ',')) ||
                    ((cVar1 == '-' && (9 < (byte)(pcVar6[1] - 0x30U))))))); pcVar6 = pcVar6 + 1) {
              cVar1 = pcVar6[1];
            }
            if (*pcVar6 != '/') goto switchD_1434c82c6_caseD_0;
            cVar1 = pcVar6[1];
            while ((param_2 = pcVar6 + 1, cVar1 != '\0' &&
                   (((cVar1 < '!' || (cVar1 == ',')) ||
                    ((cVar1 == '-' && (9 < (byte)(pcVar6[2] - 0x30U)))))))) {
              cVar1 = pcVar6[2];
              pcVar6 = param_2;
            }
            if (9 < (byte)(*param_2 - 0x30U)) goto switchD_1434c82c6_caseD_0;
            param_1[4] = 0;
            cVar1 = *param_2;
            while (('/' < cVar1 && (cVar1 < ':'))) {
              param_2 = param_2 + 1;
              param_1[4] = (int)cVar1 + (param_1[4] * 5 + -0x18) * 2;
              cVar1 = *param_2;
            }
            *(undefined2 *)((longlong)param_1 + 2) = 0x101;
            *(undefined1 *)((longlong)param_1 + 1) = 1;
          }
          else if ((*(char *)((longlong)param_1 + 3) == '\0') && (local_res8 < 0x20)) {
            *(undefined1 *)((longlong)param_1 + 3) = 1;
            param_1[3] = local_res8;
          }
          else {
            if (*(char *)((longlong)param_1 + 1) != '\0') goto switchD_1434c82c6_caseD_0;
            *(undefined1 *)((longlong)param_1 + 1) = 1;
            param_1[4] = local_res8;
          }
        }
        else {
          while ((' ' < cVar1 && (1 < (byte)(cVar1 - 0x2cU)))) {
            cVar1 = param_2[1];
            param_2 = param_2 + 1;
          }
          uVar2 = FUN_1434c85b0(pcVar6,(longlong)param_2 - (longlong)pcVar6);
          switch(uVar2) {
          case 0:
            goto switchD_1434c82c6_caseD_0;
          case 1:
            if (*(char *)((longlong)param_1 + 2) != '\0') goto switchD_1434c82c6_caseD_0;
            param_1[2] = local_res8;
            *(undefined1 *)((longlong)param_1 + 2) = 1;
            break;
          case 2:
            if (param_1[5] != -1) goto switchD_1434c82c6_caseD_0;
            param_1[5] = local_res8;
            break;
          case 3:
            if ((*(char *)((longlong)param_1 + 5) != '\0') ||
               (cVar1 = *param_2, (cVar1 - 0x2bU & 0xfd) != 0)) goto switchD_1434c82c6_caseD_0;
            cVar4 = param_2[1];
            param_2 = param_2 + 1;
            iVar5 = -1;
            if (cVar1 != '-') {
              iVar5 = 1;
            }
            if (9 < (byte)(cVar4 - 0x30U)) goto switchD_1434c82c6_caseD_0;
            local_res8 = 0;
            do {
              if ('9' < cVar4) break;
              param_2 = param_2 + 1;
              iVar3 = (int)cVar4;
              cVar4 = *param_2;
              local_res8 = iVar3 + (local_res8 * 5 + -0x18) * 2;
            } while ('/' < cVar4);
            *(undefined1 *)((longlong)param_1 + 5) = 1;
            param_1[6] = (local_res8 + (local_res8 / 100) * -0x28) * iVar5 * 60000;
            break;
          case 4:
            if (*(char *)((longlong)param_1 + 5) != '\0') goto switchD_1434c82c6_caseD_0;
            *(undefined1 *)((longlong)param_1 + 5) = 1;
            break;
          case 5:
            if ((*(char *)(param_1 + 1) == '\0') || (0xc < (int)param_1[7]))
            goto switchD_1434c82c6_caseD_0;
            if (param_1[7] == 0xc) {
              param_1[7] = 0;
            }
            break;
          case 6:
            if (*(char *)(param_1 + 1) == '\0') goto switchD_1434c82c6_caseD_0;
            iVar5 = param_1[7];
            if (0xc < iVar5) goto switchD_1434c82c6_caseD_0;
            if (iVar5 != 0xc) {
              param_1[7] = iVar5 + 0xc;
            }
          }
        }
      }
      cVar1 = *param_2;
    } while (cVar1 != '\0');
  }
  if (((*(char *)((longlong)param_1 + 1) == '\0') || (*(char *)((longlong)param_1 + 2) == '\0')) ||
     (*(char *)((longlong)param_1 + 3) == '\0')) {
switchD_1434c82c6_caseD_0:
    *(undefined1 *)param_1 = 0;
  }
  return param_1;
}



// FUNCTION 1434c8420 FUN_1434c8420 body=277 status=ok
// SIG undefined FUN_1434c8420(void)

void FUN_1434c8420(char *param_1,int param_2)

{
  double dVar1;
  double dVar2;
  
  if (*param_1 == '\0') {
    Scaleform::GFx::NumberUtil::NaN();
    return;
  }
  if (param_1[5] != '\0') {
    param_2 = *(int *)(param_1 + 0x18);
  }
  dVar1 = (double)FUN_1434c5660((double)*(int *)(param_1 + 0x1c),(double)*(int *)(param_1 + 0x20),
                                (double)*(int *)(param_1 + 0x24),0);
  dVar2 = (double)FUN_1434c57d0((double)*(int *)(param_1 + 0x10),(double)*(int *)(param_1 + 8),
                                (double)*(int *)(param_1 + 0xc));
  dVar1 = (dVar2 * 86400000.0 + dVar1) - (double)param_2;
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) && (ABS(dVar1) <= 8.64e+15)) {
    if (0.0 < dVar1) {
      _guard_xfg_dispatch_icall_nop(dVar1);
      return;
    }
    _guard_xfg_dispatch_icall_nop(dVar1);
    return;
  }
  Scaleform::GFx::NumberUtil::NaN();
  return;
}



// FUNCTION 1434c85b0 FUN_1434c85b0 body=287 status=ok
// SIG undefined FUN_1434c85b0(void)

undefined8 FUN_1434c85b0(short *param_1,longlong param_2,int *param_3)

{
  undefined **ppuVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 2) {
    if (*(char *)((longlong)param_1 + 1) == 'M') {
      if ((char)*param_1 == 'A') {
        return 5;
      }
      if ((char)*param_1 == 'P') {
        return 6;
      }
    }
  }
  else if (param_2 == 3) {
    if ((*param_1 == 0x4d47) && ((char)param_1[1] == 'T')) {
      return 3;
    }
    if ((*param_1 == 0x5455) && ((char)param_1[1] == 'C')) {
      return 4;
    }
    iVar3 = 0;
    iVar2 = 0;
    ppuVar1 = &PTR_DAT_1467cf998;
    while ((*param_1 != *(short *)*ppuVar1 ||
           ((char)param_1[1] != (char)*(short *)((longlong)*ppuVar1 + 2)))) {
      iVar2 = iVar2 + 1;
      ppuVar1 = ppuVar1 + 1;
      if (0x1467cf9cf < (longlong)ppuVar1) {
        ppuVar1 = &PTR_DAT_1467cf9d0;
        while ((*param_1 != *(short *)*ppuVar1 ||
               ((char)param_1[1] != (char)*(short *)((longlong)*ppuVar1 + 2)))) {
          iVar3 = iVar3 + 1;
          ppuVar1 = ppuVar1 + 1;
          if (0x1467cfa2f < (longlong)ppuVar1) {
            return 0;
          }
        }
        *param_3 = iVar3;
        return 1;
      }
    }
    *param_3 = iVar2;
    return 2;
  }
  return 0;
}



// FUNCTION 1434c86e0 FUN_1434c86e0 body=346 status=ok
// SIG undefined FUN_1434c86e0(void)

double * FUN_1434c86e0(double *param_1,double param_2,undefined4 param_3,double param_4)

{
  errno_t eVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  longlong local_res8;
  tm local_68 [2];
  
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[5] = param_4;
  if (param_4 != 0.0) {
    uVar2 = 0;
    local_res8 = (longlong)(param_2 / 1000.0);
    eVar1 = _localtime64_s(local_68,&local_res8);
    if ((eVar1 == 0) && (uVar2 = 0, 0 < local_68[0].tm_isdst)) {
      uVar2 = 3600000;
    }
    *(undefined4 *)param_1[5] = uVar2;
    param_2 = (double)(*(int *)param_1[5] + *(int *)(param_1 + 4)) + param_2;
  }
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2 / 3600000.0);
  dVar3 = _guard_xfg_dispatch_icall_nop(dVar3,24.0);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + 24.0;
  }
  *param_1 = dVar3;
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2 / 60000.0);
  dVar3 = _guard_xfg_dispatch_icall_nop(dVar3,60.0);
  if (dVar3 < 0.0) {
    dVar3 = dVar3 + 60.0;
  }
  param_1[1] = dVar3;
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2 / 1000.0);
  dVar4 = _guard_xfg_dispatch_icall_nop(dVar3,60.0);
  dVar3 = dVar4;
  if (dVar4 < 0.0) {
    dVar3 = dVar4 + 60.0;
  }
  param_1[2] = dVar3;
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + 60.0;
  }
  param_1[3] = dVar4;
  dVar3 = _guard_xfg_dispatch_icall_nop(param_2 / 86400000.0);
  param_1[6] = dVar3;
  return param_1;
}



// FUNCTION 1434c8840 FUN_1434c8840 body=167 status=ok
// SIG undefined FUN_1434c8840(void)

void FUN_1434c8840(undefined8 *param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_1434c5660(*param_1,param_1[1],param_1[2],param_1[3]);
  dVar1 = (double)param_1[6] * 86400000.0 + dVar1;
  if ((int *)param_1[5] != (int *)0x0) {
    dVar1 = dVar1 - (double)(*(int *)(param_1 + 4) + *(int *)param_1[5]);
  }
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) && (ABS(dVar1) <= 8.64e+15)) {
    if (0.0 < dVar1) {
      _guard_xfg_dispatch_icall_nop(dVar1);
      return;
    }
    _guard_xfg_dispatch_icall_nop(dVar1);
    return;
  }
  Scaleform::GFx::NumberUtil::NaN();
  return;
}



// FUNCTION 1434c88f0 FUN_1434c88f0 body=423 status=ok
// SIG undefined FUN_1434c88f0(void)

double * FUN_1434c88f0(double *param_1,double param_2,undefined4 param_3,double param_4)

{
  errno_t eVar1;
  int iVar2;
  undefined4 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  longlong local_res8;
  tm local_78 [3];
  
  *(undefined4 *)(param_1 + 3) = param_3;
  param_1[4] = param_4;
  if (param_4 != 0.0) {
    uVar3 = 0;
    local_res8 = (longlong)(param_2 / 1000.0);
    eVar1 = _localtime64_s(local_78,&local_res8);
    if ((eVar1 == 0) && (uVar3 = 0, 0 < local_78[0].tm_isdst)) {
      uVar3 = 3600000;
    }
    *(undefined4 *)param_1[4] = uVar3;
    param_2 = (double)(*(int *)param_1[4] + *(int *)(param_1 + 3)) + param_2;
  }
  dVar4 = (double)FUN_1434c50f0();
  *param_1 = dVar4;
  dVar5 = _guard_xfg_dispatch_icall_nop(param_2 / 86400000.0);
  dVar6 = _guard_xfg_dispatch_icall_nop((dVar4 - 1969.0) * 0.25);
  dVar7 = _guard_xfg_dispatch_icall_nop((dVar4 - 1901.0) / 100.0);
  dVar8 = _guard_xfg_dispatch_icall_nop((dVar4 - 1601.0) / 400.0);
  iVar2 = FUN_1434c5410((int)dVar4,
                        (int)(dVar5 - (((dVar6 + (dVar4 - 1970.0) * 365.0) - dVar7) + dVar8)));
  param_1[1] = (double)iVar2;
  iVar2 = FUN_1434c54f0();
  param_1[2] = (double)iVar2;
  dVar4 = _guard_xfg_dispatch_icall_nop(param_2,86400000.0);
  if (dVar4 < 0.0) {
    dVar4 = dVar4 + 86400000.0;
  }
  param_1[5] = dVar4;
  return param_1;
}



// FUNCTION 1434c8aa0 FUN_1434c8aa0 body=161 status=ok
// SIG undefined FUN_1434c8aa0(void)

void FUN_1434c8aa0(undefined8 *param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_1434c57d0(*param_1,param_1[1],param_1[2]);
  dVar1 = dVar1 * 86400000.0 + (double)param_1[5];
  if ((int *)param_1[4] != (int *)0x0) {
    dVar1 = dVar1 - (double)(*(int *)(param_1 + 3) + *(int *)param_1[4]);
  }
  if ((((ulonglong)dVar1 & 0x7ff0000000000000) != 0x7ff0000000000000) && (ABS(dVar1) <= 8.64e+15)) {
    if (0.0 < dVar1) {
      _guard_xfg_dispatch_icall_nop(dVar1);
      return;
    }
    _guard_xfg_dispatch_icall_nop(dVar1);
    return;
  }
  Scaleform::GFx::NumberUtil::NaN();
  return;
}



// FUNCTION 1434c8b50 FUN_1434c8b50 body=43 status=ok
// SIG undefined FUN_1434c8b50(void)

undefined8 * FUN_1434c8b50(undefined8 *param_1)

{
  FUN_1435b93d0();
  *(undefined4 *)(param_1 + 0x12) = 9;
  *param_1 = &PTR_FUN_145b196e0;
  return param_1;
}



// FUNCTION 1434c8b90 FUN_1434c8b90 body=176 status=ok
// SIG undefined FUN_1434c8b90(void)

void FUN_1434c8b90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint local_28 [2];
  undefined8 local_20;
  
  puVar1 = (undefined8 *)FUN_1435b5bc0(param_3);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar1,param_3);
    *puVar1 = &PTR_FUN_145b19620;
    puVar1[8] = 0;
    puVar1[9] = 0;
  }
  local_20 = 0;
  local_28[0] = 0;
  Scaleform::GFx::AS3::Value::PickUnsafe(local_28,puVar1);
  FUN_143590140(param_2,local_28);
  if (9 < ((byte)local_28[0] & 0x1f)) {
    if ((local_28[0] >> 9 & 1) != 0) {
      FUN_143592150();
      return;
    }
    FUN_1435920c0(local_28);
  }
  return;
}



// FUNCTION 1434c8c50 FUN_1434c8c50 body=43 status=ok
// SIG undefined FUN_1434c8c50(void)

undefined8 * FUN_1434c8c50(undefined8 *param_1)

{
  FUN_1435b8070();
  *(undefined4 *)(param_1 + 0x12) = 9;
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c8c90 FUN_1434c8c90 body=247 status=ok
// SIG undefined FUN_1434c8c90(void)

undefined8 * FUN_1434c8c90(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar3,param_2,&PTR_DAT_145b16020);
    *(undefined4 *)(puVar3 + 0x12) = 9;
    *puVar3 = &PTR_FUN_145b17648;
  }
  lVar2 = *plVar1;
  *param_1 = puVar3;
  puVar3 = (undefined8 *)(**(code **)(lVar2 + 0x50))(plVar1,0x100,0);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar3,param_2,&PTR_DAT_145b16020);
    *(undefined4 *)(puVar3 + 0x12) = 9;
    *puVar3 = &PTR_FUN_145b196e0;
  }
  FUN_1435b8600(*param_1,puVar3);
  puVar3 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0x50);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1435b37d0(puVar3,*param_1);
    *puVar3 = &PTR_ForEachChild_GC_145b19758;
  }
  return param_1;
}



// FUNCTION 1434c8d90 FUN_1434c8d90 body=33 status=ok
// SIG undefined FUN_1434c8d90(void)

undefined8 * FUN_1434c8d90(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b19758;
  return param_1;
}



// FUNCTION 1434c8dc0 FUN_1434c8dc0 body=233 status=ok
// SIG undefined FUN_1434c8dc0(void)

void FUN_1434c8dc0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong local_res8;
  longlong local_118;
  ushort local_110;
  short local_10e;
  short local_10c;
  undefined1 local_108 [256];
  
  _ftime64(&local_118);
  uVar3 = 0;
  if (0 < local_10c) {
    uVar3 = 3600000;
  }
  uVar2 = FUN_1434c61e0(local_108,0x100,(double)local_118 * 1000.0 + (double)local_110,
                        local_10e * -60000,uVar3,1,1,0);
  local_res8 = FUN_143360a90(*(undefined8 *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218
                              ),local_108,uVar2);
  *(int *)(local_res8 + 0x18) = *(int *)(local_res8 + 0x18) + 1;
  FUN_143590250(param_3,&local_res8);
  piVar1 = (int *)(local_res8 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c8eb0 FUN_1434c8eb0 body=122 status=ok
// SIG undefined FUN_1434c8eb0(void)

undefined8 * FUN_1434c8eb0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xd8);
  puVar2 = (undefined8 *)FUN_1435b5bc0();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1435b9d40(puVar2,uVar1);
    *param_2 = puVar2;
    *puVar2 = &PTR_FUN_145b19620;
    puVar2[8] = 0;
    puVar2[9] = 0;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 1434c8f30 FUN_1434c8f30 body=150 status=ok
// SIG undefined FUN_1434c8f30(void)

void FUN_1434c8f30(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  int *piVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_res8 [24];
  undefined8 *local_res20;
  undefined1 local_48 [10];
  short local_3e;
  undefined1 local_38 [48];
  
  lVar2 = *(longlong *)
           (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x98) + 0x10) + 0x218);
  local_res20 = (undefined8 *)(lVar2 + 0x48);
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  pcVar3 = (char *)FUN_1435911f0(param_3,local_res8,&local_res20);
  if (*pcVar3 != '\0') {
    FUN_1434c7eb0(local_38,*local_res20);
    _ftime64(local_48);
    uVar4 = FUN_1434c8420(local_38,local_3e * -60000);
    *param_2 = uVar4;
  }
  piVar1 = (int *)(local_res20 + 3);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c8fd0 FUN_1434c8fd0 body=103 status=ok
// SIG undefined FUN_1434c8fd0(void)

void FUN_1434c8fd0(undefined8 param_1,uint *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uStack_20;
  
  uVar1 = FUN_1434c5b10(param_3,param_4,0,0);
  if (9 < ((byte)*param_2 & 0x1f)) {
    if ((*param_2 >> 9 & 1) == 0) {
      FUN_1435920c0(param_2);
    }
    else {
      FUN_143592150();
    }
  }
  *param_2 = *param_2 & 0xffffffe4;
  *param_2 = *param_2 | 4;
  *(undefined8 *)(param_2 + 4) = uVar1;
  *(undefined8 *)(param_2 + 6) = uStack_20;
  return;
}



// FUNCTION 1434c9040 FUN_1434c9040 body=33 status=ok
// SIG undefined FUN_1434c9040(void)

undefined8 * FUN_1434c9040(undefined8 *param_1)

{
  FUN_1435b8070();
  *param_1 = &PTR_FUN_145b17648;
  return param_1;
}



// FUNCTION 1434c9070 FUN_1434c9070 body=215 status=ok
// SIG undefined FUN_1434c9070(void)

undefined8 * FUN_1434c9070(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_2 + 0x48);
  puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x50))(plVar1,0xe0,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b8070(puVar2,param_2,&PTR_DAT_145b15fc0);
    *puVar2 = &PTR_FUN_145b17648;
  }
  lVar3 = *plVar1;
  *param_1 = puVar2;
  puVar2 = (undefined8 *)(**(code **)(lVar3 + 0x50))(plVar1,0x100,0);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    FUN_1435b93d0(puVar2,param_2,&PTR_DAT_145b15fc0);
    *puVar2 = &PTR_FUN_145b175d0;
  }
  FUN_1435b8600(*param_1,puVar2);
  lVar3 = (**(code **)(*plVar1 + 0x50))(plVar1,0x90,0);
  if (lVar3 != 0) {
    Scaleform::GFx::AS3::Classes::fl::Math::Math(lVar3,*param_1);
  }
  return param_1;
}



// FUNCTION 1434c9150 Math body=151 status=ok
// SIG undefined Math(void)

undefined8 * Scaleform::GFx::AS3::Classes::fl::Math::Math(undefined8 *param_1)

{
  FUN_1435b37d0();
  *param_1 = &PTR_ForEachChild_GC_145b198b0;
  param_1[10] = 0x40026bb1bbb55516;
  param_1[0xb] = 0x4005bf0a8b145769;
  param_1[0xc] = 0x3fe62e42fefa39ef;
  param_1[0xd] = 0x3fdbcb7b1526e50e;
  param_1[0xe] = 0x3ff71547652b82fe;
  param_1[0xf] = 0x400921fb54442d18;
  param_1[0x10] = 0x3fe6a09e667f3bcd;
  param_1[0x11] = 0x3ff6a09e667f3bcd;
  return param_1;
}



// FUNCTION 1434c91f0 FUN_1434c91f0 body=68 status=ok
// SIG undefined FUN_1434c91f0(void)

void FUN_1434c91f0(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x433,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c9240 FUN_1434c9240 body=68 status=ok
// SIG undefined FUN_1434c9240(void)

void FUN_1434c9240(longlong param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18 [8];
  longlong local_10;
  
  uVar2 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x98);
  uVar3 = FUN_1435c8e40(local_18,0x434,uVar2);
  FUN_1435cbe70(uVar2,uVar3);
  piVar1 = (int *)(local_10 + 0x18);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_14335f920();
  }
  return;
}



// FUNCTION 1434c9290 FUN_1434c9290 body=69 status=ok
// SIG undefined FUN_1434c9290(void)

void FUN_1434c9290(undefined8 param_1,ulonglong *param_2,ulonglong param_3)

{
  char cVar1;
  
  cVar1 = FUN_143364c00((int)param_3);
  if (cVar1 != '\0') {
    *param_2 = 0;
    return;
  }
  *param_2 = param_3 & 0x7fffffffffffffff;
  return;
}



// FUNCTION 1434c92e0 FUN_1434c92e0 body=27 status=ok
// SIG undefined FUN_1434c92e0(void)

void FUN_1434c92e0(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9310 FUN_1434c9310 body=27 status=ok
// SIG undefined FUN_1434c9310(void)

void FUN_1434c9310(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9340 FUN_1434c9340 body=27 status=ok
// SIG undefined FUN_1434c9340(void)

void FUN_1434c9340(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9370 FUN_1434c9370 body=256 status=ok
// SIG undefined FUN_1434c9370(void)

void FUN_1434c9370(longlong param_1,double *param_2,double param_3,double param_4)

{
  double dVar1;
  
  if (param_3 != INFINITY) {
    if (param_3 != -INFINITY) {
      dVar1 = _guard_xfg_dispatch_icall_nop(param_3,param_4);
      *param_2 = dVar1;
      return;
    }
    dVar1 = *(double *)(param_1 + 0x78);
    if (param_4 == INFINITY) {
      *param_2 = dVar1 * -0.25;
      return;
    }
    if (param_4 == -INFINITY) {
      *param_2 = dVar1 * -0.75;
      return;
    }
    *param_2 = dVar1 * -0.5;
    return;
  }
  dVar1 = *(double *)(param_1 + 0x78);
  if (param_4 == INFINITY) {
    *param_2 = dVar1 * 0.25;
    return;
  }
  if (param_4 == -INFINITY) {
    *param_2 = dVar1 * 0.75;
    return;
  }
  *param_2 = dVar1 * 0.5;
  return;
}



// FUNCTION 1434c9480 FUN_1434c9480 body=27 status=ok
// SIG undefined FUN_1434c9480(void)

void FUN_1434c9480(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c94b0 FUN_1434c94b0 body=27 status=ok
// SIG undefined FUN_1434c94b0(void)

void FUN_1434c94b0(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c94e0 FUN_1434c94e0 body=27 status=ok
// SIG undefined FUN_1434c94e0(void)

void FUN_1434c94e0(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9510 FUN_1434c9510 body=27 status=ok
// SIG undefined FUN_1434c9510(void)

void FUN_1434c9510(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9540 FUN_1434c9540 body=27 status=ok
// SIG undefined FUN_1434c9540(void)

void FUN_1434c9540(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9570 FUN_1434c9570 body=74 status=ok
// SIG undefined FUN_1434c9570(void)

void FUN_1434c9570(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  if (((ulonglong)param_3 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    *param_2 = param_3;
    return;
  }
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3 + 0.5);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c95c0 FUN_1434c95c0 body=27 status=ok
// SIG undefined FUN_1434c95c0(void)

void FUN_1434c95c0(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c95f0 FUN_1434c95f0 body=27 status=ok
// SIG undefined FUN_1434c95f0(void)

void FUN_1434c95f0(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9620 FUN_1434c9620 body=27 status=ok
// SIG undefined FUN_1434c9620(void)

void FUN_1434c9620(undefined8 param_1,double *param_2,double param_3)

{
  double dVar1;
  
  dVar1 = _guard_xfg_dispatch_icall_nop(param_3);
  *param_2 = dVar1;
  return;
}



// FUNCTION 1434c9650 pow body=128 status=ok
// SIG double pow(double _X, double _Y)

double __cdecl Scaleform::GFx::AS3::Classes::fl::Math::pow(double _X,double _Y)

{
  double *in_RDX;
  double dVar1;
  undefined4 in_XMM2_Da;
  undefined4 in_XMM2_Db;
  undefined4 in_XMM3_Da;
  uint in_XMM3_Db;
  
  if ((double)CONCAT44(in_XMM3_Db,in_XMM3_Da) == 0.0) {
    *in_RDX = 1.0;
    return 0.0;
  }
  if ((((double)CONCAT44(in_XMM2_Db,in_XMM2_Da) == 1.0) ||
      ((double)CONCAT44(in_XMM2_Db,in_XMM2_Da) == -1.0)) &&
     ((in_XMM3_Db & 0x7ff00000) == 0x7ff00000)) {
    dVar1 = (double)NumberUtil::NaN(0x7ff0000000000000,SUB84(_Y,0));
    *in_RDX = dVar1;
    return dVar1;
  }
  dVar1 = ::_guard_xfg_dispatch_icall_nop
                    ((double)CONCAT44(in_XMM2_Db,in_XMM2_Da),(double)CONCAT44(in_XMM3_Db,in_XMM3_Da)
                    );
  *in_RDX = dVar1;
  return dVar1;
}



// FUNCTION 1434c96e0 FUN_1434c96e0 body=314 status=ok
// SIG undefined FUN_1434c96e0(void)

void FUN_1434c96e0(undefined8 param_1,uint *param_2,uint param_3,longlong param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res18 [16];
  int local_48 [4];
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uVar1 = Scaleform::GFx::NumberUtil::NaN();
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe4;
    *param_2 = *param_2 | 4;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 6) = uStack_38;
    return;
  }
  FUN_143590140(param_2,param_4);
  uVar5 = 1;
  if (1 < param_3) {
    do {
      lVar3 = uVar5 * 0x20 + param_4;
      pcVar2 = (char *)FUN_143593d70(local_res18,local_48,lVar3,param_2);
      if (*pcVar2 == '\0') {
        return;
      }
      if (local_48[0] == 0) {
        uVar1 = Scaleform::GFx::NumberUtil::NaN();
        if (9 < ((byte)*param_2 & 0x1f)) {
          if ((*param_2 >> 9 & 1) == 0) {
            FUN_1435920c0(param_2);
          }
          else {
            FUN_143592150();
          }
        }
        *param_2 = *param_2 & 0xffffffe4;
        *param_2 = *param_2 | 4;
        *(undefined8 *)(param_2 + 4) = uVar1;
        *(undefined8 *)(param_2 + 6) = uStack_38;
        return;
      }
      if (local_48[0] == 2) {
        FUN_143590140(param_2,lVar3);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_3);
  }
  FUN_143590b10(param_2,local_res18);
  return;
}



// FUNCTION 1434c9820 FUN_1434c9820 body=314 status=ok
// SIG undefined FUN_1434c9820(void)

void FUN_1434c9820(undefined8 param_1,uint *param_2,uint param_3,longlong param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined1 local_res18 [16];
  int local_48 [4];
  undefined8 uStack_38;
  
  if (param_3 == 0) {
    uVar1 = Scaleform::GFx::NumberUtil::NaN();
    if (9 < ((byte)*param_2 & 0x1f)) {
      if ((*param_2 >> 9 & 1) == 0) {
        FUN_1435920c0(param_2);
      }
      else {
        FUN_143592150();
      }
    }
    *param_2 = *param_2 & 0xffffffe4;
    *param_2 = *param_2 | 4;
    *(undefined8 *)(param_2 + 4) = uVar1;
    *(undefined8 *)(param_2 + 6) = uStack_38;
    return;
  }
  FUN_143590140(param_2,param_4);
  uVar5 = 1;
  if (1 < param_3) {
    do {
      lVar3 = uVar5 * 0x20 + param_4;
      pcVar2 = (char *)FUN_143593d70(local_res18,local_48,param_2,lVar3);
      if (*pcVar2 == '\0') {
        return;
      }
      if (local_48[0] == 0) {
        uVar1 = Scaleform::GFx::NumberUtil::NaN();
        if (9 < ((byte)*param_2 & 0x1f)) {
          if ((*param_2 >> 9 & 1) == 0) {
            FUN_1435920c0(param_2);
          }
          else {
            FUN_143592150();
          }
        }
        *param_2 = *param_2 & 0xffffffe4;
        *param_2 = *param_2 | 4;
        *(undefined8 *)(param_2 + 4) = uVar1;
        *(undefined8 *)(param_2 + 6) = uStack_38;
        return;
      }
      if (local_48[0] == 2) {
        FUN_143590140(param_2,lVar3);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while (uVar4 < param_3);
  }
  FUN_143590b10(param_2,local_res18);
  return;
}



// FUNCTION 1434c9960 random body=42 status=ok
// SIG undefined random(void)

void Scaleform::GFx::AS3::Classes::fl::Math::random(undefined8 param_1,double *param_2)

{
  uint uVar1;
  
  uVar1 = Alg::Random::NextRandom();
  *param_2 = (double)uVar1 / 4294967295.0;
  return;
}



// FUNCTION 1434c99a0 FUN_1434c99a0 body=192 status=ok
// SIG undefined FUN_1434c99a0(void)

void FUN_1434c99a0(longlong *param_1,ulonglong param_2,char param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong *plVar3;
  
  if (param_3 != '\0') {
    uVar2 = 0;
    if (param_1[1] != 0) {
      plVar3 = (longlong *)*param_1;
      do {
        if ((*(longlong *)(*plVar3 + 0x38) == *(longlong *)(param_2 + 0x38)) &&
           (((*(byte *)(*plVar3 + 0x28) ^ *(byte *)(param_2 + 0x28)) & 0xf) == 0)) {
          return;
        }
        uVar2 = uVar2 + 1;
        plVar3 = plVar3 + 1;
      } while (uVar2 < (ulonglong)param_1[1]);
    }
  }
  if (param_2 != 0) {
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  FUN_1434f0160(param_1,param_1[3],param_1[1] + 1);
  puVar1 = (ulonglong *)(*param_1 + (param_1[1] + -1) * 8);
  if (puVar1 != (ulonglong *)0x0) {
    *puVar1 = param_2;
    if (param_2 == 0) {
      return;
    }
    *(uint *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  if (((param_2 != 0) && ((param_2 & 1) == 0)) && ((*(uint *)(param_2 + 8) & 0x3fffff) != 0)) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) - 1;
    FUN_1434ef880(param_2);
  }
  return;
}



// FUNCTION 1434c9a70 FUN_1434c9a70 body=261 status=ok
// SIG undefined FUN_1434c9a70(void)

void FUN_1434c9a70(longlong *param_1,longlong *param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar2 = param_2[1];
  uVar6 = 0;
  if (uVar2 != 0) {
    do {
      uVar5 = 0;
      uVar3 = *(ulonglong *)(*param_2 + uVar6 * 8);
      if (param_1[1] != 0) {
        plVar4 = (longlong *)*param_1;
        do {
          if ((*(longlong *)(*plVar4 + 0x38) == *(longlong *)(uVar3 + 0x38)) &&
             (((*(byte *)(*plVar4 + 0x28) ^ *(byte *)(uVar3 + 0x28)) & 0xf) == 0))
          goto LAB_1434c9b4e;
          uVar5 = uVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (uVar5 < (ulonglong)param_1[1]);
      }
      if (uVar3 != 0) {
        *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
      }
      FUN_1434f0160(param_1,param_1[3],param_1[1] + 1);
      puVar1 = (ulonglong *)(*param_1 + (param_1[1] + -1) * 8);
      if (puVar1 == (ulonglong *)0x0) {
LAB_1434c9b2d:
        if (((uVar3 != 0) && ((uVar3 & 1) == 0)) && ((*(uint *)(uVar3 + 8) & 0x3fffff) != 0)) {
          *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) - 1;
          FUN_1434ef880(uVar3);
        }
      }
      else {
        *puVar1 = uVar3;
        if (uVar3 != 0) {
          *(uint *)(uVar3 + 8) = *(int *)(uVar3 + 8) + 1U & 0x8fffffff;
          goto LAB_1434c9b2d;
        }
      }
LAB_1434c9b4e:
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar2);
  }
  return;
}



// FUNCTION 1434c9b80 FUN_1434c9b80 body=118 status=ok
// SIG undefined FUN_1434c9b80(void)

undefined8 FUN_1434c9b80(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  char cVar3;
  ulonglong uVar4;
  
  uVar1 = param_1[1];
  uVar4 = 0;
  if (uVar1 != 0) {
    do {
      lVar2 = *(longlong *)(*param_1 + uVar4 * 8);
      if ((*(longlong *)(lVar2 + 0x38) == *(longlong *)(param_2 + 0x38)) &&
         (cVar3 = FUN_1435927d0(lVar2 + 0x48,param_2 + 0x48), cVar3 != '\0')) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}



// FUNCTION 1434c9c00 FUN_1434c9c00 body=173 status=ok
// SIG undefined FUN_1434c9c00(void)

bool FUN_1434c9c00(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  bool bVar6;
  bool bVar7;
  
  uVar2 = param_1[1];
  bVar7 = false;
  uVar5 = 0;
  do {
    if (uVar2 <= uVar5) {
      return bVar7;
    }
    lVar3 = *(longlong *)(*param_1 + uVar5 * 8);
    uVar4 = *(uint *)(lVar3 + 0x48) & 0x1f;
    if (uVar4 != 0) {
      if (uVar4 == 0xc) {
        bVar6 = *(longlong *)(lVar3 + 0x58) == 0;
LAB_1434c9c65:
        if (bVar6) goto LAB_1434c9c86;
      }
      else if (uVar4 == 10) {
        bVar6 = *(longlong *)(lVar3 + 0x58) == *(longlong *)(*(longlong *)(lVar3 + 0x58) + 8) + 0x80
        ;
        goto LAB_1434c9c65;
      }
      lVar3 = *(longlong *)(lVar3 + 0x58);
      *(int *)(lVar3 + 0x18) = *(int *)(lVar3 + 0x18) + 1;
      bVar7 = lVar3 == *param_2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_14335f920();
      }
    }
LAB_1434c9c86:
    uVar5 = uVar5 + 1;
    if (bVar7 != false) {
      return bVar7;
    }
  } while( true );
}



// FUNCTION 1434c9cc0 FUN_1434c9cc0 body=52 status=ok
// SIG undefined FUN_1434c9cc0(void)

ulonglong FUN_1434c9cc0(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = in_RAX & 0xffffffffffffff00;
  uVar3 = 0;
  do {
    if ((ulonglong)param_1[1] <= uVar3) {
      return uVar2;
    }
    lVar1 = *(longlong *)(*(longlong *)(*param_1 + uVar3 * 8) + 0x38);
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 >> 8),lVar1 == *param_2);
    uVar3 = uVar3 + 1;
  } while (lVar1 != *param_2);
  return uVar2;
}



// FUNCTION 1434c9d00 IsNameStartChar body=212 status=ok
// SIG undefined IsNameStartChar(void)

undefined1 * Scaleform::GFx::AS3::IsNameStartChar(undefined1 *param_1,int param_2)

{
  if (((((param_2 != 0x3a) && (param_2 != 0x5f)) && (0x19 < param_2 - 0x41U)) &&
      (((0x19 < param_2 - 0x61U && (0x16 < param_2 - 0xc0U)) &&
       ((0x1e < param_2 - 0xd8U && ((0x207 < param_2 - 0xf8U && (0xd < param_2 - 0x370U)))))))) &&
     ((0x1c80 < param_2 - 0x37fU &&
      (((((1 < param_2 - 0x200cU && (0x11f < param_2 - 0x2070U)) && (0x3ef < param_2 - 0x2c00U)) &&
        ((0xa7fe < param_2 - 0x3001U && (0x4cf < param_2 - 0xf900U)))) &&
       ((0x20d < param_2 - 0xfdf0U && (0xdffff < param_2 - 0x10000U)))))))) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1434c9de0 FUN_1434c9de0 body=110 status=ok
// SIG undefined FUN_1434c9de0(void)

undefined1 * FUN_1434c9de0(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined1 local_res18 [16];
  
  pcVar1 = (char *)Scaleform::GFx::AS3::IsNameStartChar(local_res18);
  if ((((*pcVar1 == '\0') && (1 < param_2 - 0x2dU)) && (9 < param_2 - 0x30U)) &&
     (((param_2 != 0xb7 && (0x6f < param_2 - 0x300U)) && (1 < param_2 - 0x203fU)))) {
    *param_1 = 0;
    return param_1;
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1434c9e60 FUN_1434c9e60 body=123 status=ok
// SIG undefined FUN_1434c9e60(void)

undefined1 * FUN_1434c9e60(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  pcVar1 = (char *)Scaleform::GFx::AS3::IsNameStartChar(local_res8);
  if (((*pcVar1 == '\0') && (1 < param_2 - 0x2dU)) && (9 < param_2 - 0x30U)) {
    if (param_2 == 0xb7) goto LAB_1434c9eb9;
    if ((0x6f < param_2 - 0x300U) && (1 < param_2 - 0x203fU)) goto LAB_1434c9eca;
  }
  if (param_2 == 0x3a) {
LAB_1434c9eca:
    *param_1 = 0;
    return param_1;
  }
LAB_1434c9eb9:
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1434c9ef0 FUN_1434c9ef0 body=77 status=ok
// SIG undefined FUN_1434c9ef0(void)

undefined1 * FUN_1434c9ef0(undefined1 *param_1,int param_2)

{
  char *pcVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  pcVar1 = (char *)Scaleform::GFx::AS3::IsNameStartChar(local_res8);
  if ((*pcVar1 != '\0') && (param_2 != 0x3a)) {
    *param_1 = 1;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1434c9f50 FUN_1434c9f50 body=221 status=ok
// SIG undefined FUN_1434c9f50(void)

undefined1 * FUN_1434c9f50(undefined1 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined1 local_res18 [16];
  
  iVar2 = FUN_14335fa60(param_2);
  if ((iVar2 == 0) ||
     (pcVar4 = (char *)Scaleform::GFx::AS3::IsNameStartChar(local_res18,(int)**(char **)*param_2),
     *pcVar4 == '\0')) {
    *param_1 = 0;
    return param_1;
  }
  uVar3 = FUN_14335fa60(param_2);
  uVar6 = 1;
  if (1 < uVar3) {
    lVar1 = *(longlong *)*param_2;
    do {
      iVar2 = (int)*(char *)(uVar6 + lVar1);
      pcVar4 = (char *)Scaleform::GFx::AS3::IsNameStartChar(local_res18,iVar2);
      if ((((*pcVar4 == '\0') && (1 < iVar2 - 0x2dU)) && (9 < iVar2 - 0x30U)) &&
         (((iVar2 != 0xb7 && (0x6f < iVar2 - 0x300U)) && (1 < iVar2 - 0x203fU)))) {
        *param_1 = 0;
        return param_1;
      }
      uVar5 = (int)uVar6 + 1;
      uVar6 = (ulonglong)uVar5;
    } while (uVar5 < uVar3);
  }
  *param_1 = 1;
  return param_1;
}



// FUNCTION 1434ca040 FUN_1434ca040 body=142 status=ok
// SIG undefined FUN_1434ca040(void)

longlong * FUN_1434ca040(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  FUN_1435cc0e0(*(undefined8 *)(param_2 + 0x30),param_1,0,param_2 + 0x38,param_2 + 0x48);
  if (param_3 != (undefined8 *)0x0) {
    uVar1 = 0;
    if (param_3[1] != 0) {
      plVar2 = (longlong *)*param_3;
      while (*(longlong *)(*plVar2 + 0x38) != *(longlong *)(*param_1 + 0x38)) {
        uVar1 = uVar1 + 1;
        plVar2 = plVar2 + 1;
        if ((ulonglong)param_3[1] <= uVar1) {
          return param_1;
        }
      }
      FUN_143590140(*param_1 + 0x48,*plVar2 + 0x48);
    }
  }
  return param_1;
}



// FUNCTION 1434ca0e0 FUN_1434ca0e0 body=82 status=ok
// SIG undefined FUN_1434ca0e0(void)

undefined8 * FUN_1434ca0e0(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  longlong lVar2;
  
  FUN_1435b9d40();
  *param_1 = &PTR_ForEachChild_GC_145b199d0;
  lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x98) + 0x10) + 0x218);
  param_1[8] = lVar2 + 0x48;
  piVar1 = (int *)(lVar2 + 0x60);
  *piVar1 = *piVar1 + 1;
  param_1[9] = 0;
  return param_1;
}


