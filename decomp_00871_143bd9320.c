// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143bd9320 FUN_143bd9320 body=39 status=ok
// SIG undefined FUN_143bd9320(void)

void FUN_143bd9320(longlong param_1,undefined4 param_2)

{
  FUN_143a8e0c0(param_1 + 0x28,param_2);
  return;
}



// FUNCTION 143bd9350 FUN_143bd9350 body=29 status=ok
// SIG undefined FUN_143bd9350(void)

void FUN_143bd9350(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143c09850(param_1);
  FUN_143bd8420(uVar1);
  return;
}



// FUNCTION 143bd9370 FUN_143bd9370 body=53 status=ok
// SIG undefined FUN_143bd9370(void)

longlong FUN_143bd9370(longlong param_1)

{
  FUN_143aa03b0(param_1);
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  return param_1;
}



// FUNCTION 143bd93b0 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::CollationKeys::LevelCallback::vftable;
  return;
}



// FUNCTION 143bd93d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::SortKeyByteSink::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bd9400 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a8ac70(param_1);
  return;
}



// FUNCTION 143bd9420 FUN_143bd9420 body=39 status=ok
// SIG undefined FUN_143bd9420(void)

undefined1 FUN_143bd9420(undefined8 param_1,int param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)param_2);
  return *puVar1;
}



// FUNCTION 143bd9450 FUN_143bd9450 body=292 status=ok
// SIG undefined FUN_143bd9450(void)

void FUN_143bd9450(longlong *param_1,void *param_2,int param_3)

{
  int iVar1;
  void *local_res10;
  int local_res18;
  
  if ((0 < param_3) && (param_2 != (void *)0x0)) {
    local_res10 = param_2;
    local_res18 = param_3;
    if (0 < (int)param_1[3]) {
      param_3 = (int)param_1[3] - param_3;
      if (-1 < param_3) {
        *(int *)(param_1 + 3) = param_3;
        return;
      }
      local_res10 = (void *)((longlong)param_2 + (longlong)(int)param_1[3]);
      local_res18 = -param_3;
      *(undefined4 *)(param_1 + 3) = 0;
    }
    iVar1 = *(int *)((longlong)param_1 + 0x14);
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + local_res18;
    if ((void *)((longlong)iVar1 + param_1[1]) != local_res10) {
      if ((int)param_1[2] - iVar1 < local_res18) {
        (**(code **)(*param_1 + 0x20))(param_1,local_res10,local_res18,iVar1);
      }
      else {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar1 + param_1[1]),local_res10,(longlong)local_res18);
      }
    }
  }
  return;
}



// FUNCTION 143bd9580 FUN_143bd9580 body=255 status=ok
// SIG undefined FUN_143bd9580(void)

longlong FUN_143bd9580(longlong *param_1,int param_2,undefined4 param_3,longlong param_4,int param_5
                      ,int *param_6)

{
  char cVar1;
  int iVar2;
  
  if ((param_2 < 1) || (param_5 < param_2)) {
    *param_6 = 0;
    param_4 = 0;
  }
  else if ((int)param_1[3] < 1) {
    iVar2 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x14);
    if (iVar2 < param_2) {
      cVar1 = (**(code **)(*param_1 + 0x28))
                        (param_1,param_3,*(undefined4 *)((longlong)param_1 + 0x14));
      if (cVar1 == '\0') {
        *param_6 = param_5;
      }
      else {
        *param_6 = (int)param_1[2] - *(int *)((longlong)param_1 + 0x14);
        param_4 = (longlong)*(int *)((longlong)param_1 + 0x14) + param_1[1];
      }
    }
    else {
      *param_6 = iVar2;
      param_4 = (longlong)*(int *)((longlong)param_1 + 0x14) + param_1[1];
    }
  }
  else {
    *param_6 = param_5;
  }
  return param_4;
}



// FUNCTION 143bd9690 FUN_143bd9690 body=40 status=ok
// SIG undefined FUN_143bd9690(void)

bool FUN_143bd9690(longlong param_1)

{
  return *(longlong *)(param_1 + 8) != 0;
}



// FUNCTION 143bd96c0 FUN_143bd96c0 body=120 status=ok
// SIG undefined FUN_143bd96c0(void)

void FUN_143bd96c0(longlong param_1,undefined1 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  if ((iVar2 <= *(int *)(param_1 + 0x38)) && (cVar1 = FUN_143bd9c10(param_1,1), cVar1 == '\0')) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar3 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)iVar2);
  *puVar3 = param_2;
  return;
}



// FUNCTION 143bd9740 FUN_143bd9740 body=280 status=ok
// SIG undefined FUN_143bd9740(void)

void FUN_143bd9740(longlong param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  char local_res10;
  int local_24;
  
  uVar2 = (undefined1)((uint)param_2 >> 8);
  local_res10 = (char)param_2;
  if (local_res10 == '\0') {
    local_24 = 1;
  }
  else {
    local_24 = 2;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  if ((iVar4 < iVar1 + local_24) && (cVar3 = FUN_143bd9c10(param_1,local_24), cVar3 == '\0')) {
    return;
  }
  if (local_res10 == '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    puVar5 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)iVar1);
    *puVar5 = uVar2;
  }
  else {
    pcVar6 = (char *)FUN_143a8afe0(param_1,(longlong)*(int *)(param_1 + 0x38));
    *pcVar6 = local_res10;
    puVar5 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)(*(int *)(param_1 + 0x38) + 1));
    *puVar5 = uVar2;
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 2;
  }
  return;
}



// FUNCTION 143bd9860 FUN_143bd9860 body=79 status=ok
// SIG undefined FUN_143bd9860(void)

void FUN_143bd9860(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x38);
  uVar2 = FUN_143a8b510(param_1);
  (**(code **)(*param_2 + 8))(param_2,uVar2,iVar1 + -1);
  return;
}



// FUNCTION 143bd98b0 FUN_143bd98b0 body=251 status=ok
// SIG undefined FUN_143bd98b0(void)

void FUN_143bd98b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  undefined1 *puVar4;
  char *pcVar5;
  char local_res10;
  int local_24;
  
  local_res10 = (char)param_2;
  if (local_res10 == '\0') {
    local_24 = 1;
  }
  else {
    local_24 = 2;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  if ((iVar3 < iVar1 + local_24) && (cVar2 = FUN_143bd9c10(param_1,local_24), cVar2 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar4 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)iVar1);
  *puVar4 = (char)((uint)param_2 >> 8);
  if (local_res10 != '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    pcVar5 = (char *)FUN_143a8afe0(param_1,(longlong)iVar1);
    *pcVar5 = local_res10;
  }
  return;
}



// FUNCTION 143bd99b0 FUN_143bd99b0 body=561 status=ok
// SIG undefined FUN_143bd99b0(void)

void FUN_143bd99b0(longlong param_1,undefined4 param_2)

{
  int iVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  char local_res10;
  int local_40;
  int local_3c;
  int local_38;
  
  cVar2 = (char)((uint)param_2 >> 0x10);
  cVar3 = (char)((uint)param_2 >> 8);
  local_res10 = (char)param_2;
  if (cVar2 == '\0') {
    local_40 = 1;
  }
  else {
    if (cVar3 == '\0') {
      local_3c = 2;
    }
    else {
      if (local_res10 == '\0') {
        local_38 = 3;
      }
      else {
        local_38 = 4;
      }
      local_3c = local_38;
    }
    local_40 = local_3c;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1);
  if ((iVar5 < iVar1 + local_40) && (cVar4 = FUN_143bd9c10(param_1,local_40), cVar4 == '\0')) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
  puVar6 = (undefined1 *)FUN_143a8afe0(param_1,(longlong)iVar1);
  *puVar6 = (char)((uint)param_2 >> 0x18);
  if (cVar2 != '\0') {
    iVar1 = *(int *)(param_1 + 0x38);
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    pcVar7 = (char *)FUN_143a8afe0(param_1,(longlong)iVar1);
    *pcVar7 = cVar2;
    if (cVar3 != '\0') {
      iVar1 = *(int *)(param_1 + 0x38);
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
      pcVar7 = (char *)FUN_143a8afe0(param_1,(longlong)iVar1);
      *pcVar7 = cVar3;
      if (local_res10 != '\0') {
        iVar1 = *(int *)(param_1 + 0x38);
        *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
        pcVar7 = (char *)FUN_143a8afe0(param_1,(longlong)iVar1);
        *pcVar7 = local_res10;
      }
    }
  }
  return;
}



// FUNCTION 143bd9bf0 ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs> body=27 status=ok
// SIG undefined ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(void)

void TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
     ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(undefined8 param_1)

{
  FUN_143a8b510(param_1);
  return;
}



// FUNCTION 143bd9c10 FUN_143bd9c10 body=155 status=ok
// SIG undefined FUN_143bd9c10(void)

undefined8 FUN_143bd9c10(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  int local_18;
  
  if (*(char *)(param_1 + 0x3c) == '\0') {
    uVar3 = 0;
  }
  else {
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1);
    iVar1 = *(int *)(param_1 + 0x38) + param_2 * 2;
    local_18 = iVar2 << 1;
    if (iVar2 << 1 < iVar1) {
      local_18 = iVar1;
    }
    if (local_18 < 200) {
      local_18 = 200;
    }
    lVar4 = FUN_143a8cec0(param_1,local_18,*(undefined4 *)(param_1 + 0x38));
    if (lVar4 == 0) {
      *(undefined1 *)(param_1 + 0x3c) = 0;
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



// FUNCTION 143bd9cb0 FUN_143bd9cb0 body=39 status=ok
// SIG undefined FUN_143bd9cb0(void)

bool FUN_143bd9cb0(longlong param_1)

{
  return *(int *)(param_1 + 0x38) == 0;
}



// FUNCTION 143bd9ce0 FUN_143bd9ce0 body=15 status=ok
// SIG undefined FUN_143bd9ce0(void)

undefined1 FUN_143bd9ce0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x3c);
}



// FUNCTION 143bd9cf0 FUN_143bd9cf0 body=4812 status=ok
// SIG undefined FUN_143bd9cf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bd9cf0(undefined8 param_1,longlong param_2,longlong param_3,longlong *param_4,
                  byte param_5,longlong *param_6,char param_7,undefined4 *param_8)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  undefined1 auStack_218 [32];
  byte local_1f8;
  byte local_1f7;
  int local_1f4;
  uint local_1f0;
  int local_1ec;
  int local_1e8;
  byte local_1e4;
  int local_1e0;
  uint local_1dc;
  uint local_1d8;
  char local_1d4;
  char local_1d3;
  uint local_1d0;
  uint local_1cc;
  uint local_1c8;
  int local_1c4;
  uint local_1c0;
  uint local_1bc;
  char local_1b8;
  char local_1b7;
  char local_1b6;
  undefined1 local_1b4;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  int local_1a0;
  int local_19c;
  uint local_198;
  longlong local_190;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  undefined4 local_178;
  uint local_174;
  int local_170;
  uint local_16c;
  int local_168;
  uint local_164;
  uint local_160;
  int local_15c;
  uint local_158;
  int local_154;
  undefined4 local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  longlong local_130;
  undefined4 local_128;
  int local_124;
  undefined8 local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_120 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_218;
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    local_1cc = *(uint *)(param_3 + 0x10);
    iVar3 = FUN_143b64b50(local_1cc);
    local_1d8 = *(uint *)(&DAT_145d19ed0 + (longlong)iVar3 * 4);
    if ((local_1cc & 0x400) != 0) {
      local_1d8 = local_1d8 | 8;
    }
    local_128 = 1;
    local_1d8 = local_1d8 & ~((1 << (param_5 & 0x1f)) - 1U);
    if (local_1d8 != 0) {
      if ((local_1cc & 0xc) == 0) {
        local_198 = 0;
      }
      else {
        local_198 = *(int *)(param_3 + 0x14) + 1;
      }
      local_130 = *(longlong *)(param_3 + 0x18);
      local_164 = FUN_143bd32d0(local_1cc);
      FUN_143bd9370(local_58);
      FUN_143bd9370(local_98);
      FUN_143bd9370(local_d8);
      FUN_143bd9370(local_118);
      local_1ac = 0;
      local_1e8 = 0;
      local_1ec = 0;
      local_1f4 = 0;
      local_1e0 = 0;
      local_160 = 0;
      local_1d3 = '\0';
      do {
        do {
          FUN_143bd1710(param_1);
          local_138 = FUN_143b65f60(param_1,param_8);
          local_1dc = (uint)((ulonglong)local_138 >> 0x20);
          if ((local_1dc < local_198) && (0x2000000 < local_1dc)) {
            if (local_1e0 != 0) {
              for (local_1e0 = local_1e0 + -1; 0x70 < local_1e0; local_1e0 = local_1e0 + -0x71) {
                FUN_143bd96c0(local_118,0x8c);
              }
              FUN_143bd96c0(local_118,local_1e0 + 0x1c);
              local_1e0 = 0;
            }
            do {
              if ((local_1d8 & 0x20) != 0) {
                local_1a4 = local_1dc >> 0x18;
                if (local_130 != 0) {
                  local_1a4 = (uint)*(byte *)(local_130 + (ulonglong)local_1a4);
                }
                if (0x1a < local_1a4) {
                  FUN_143bd96c0(local_118,0x1b);
                }
                FUN_143bd99b0(local_118,local_1a4 << 0x18 | local_1dc & 0xffffff);
              }
              do {
                local_138 = FUN_143b65f60(param_1,param_8);
                local_1dc = (uint)((ulonglong)local_138 >> 0x20);
              } while (local_1dc == 0);
            } while ((local_1dc < local_198) && (0x2000000 < local_1dc));
          }
          if ((1 < local_1dc) && ((local_1d8 & 2) != 0)) {
            local_1b0 = local_1dc >> 0x18;
            if (local_130 != 0) {
              local_1b0 = (uint)*(byte *)(local_130 + (ulonglong)local_1b0);
            }
            if (local_1b0 != local_1ac) {
              if (local_1ac != 0) {
                if (local_1b0 < local_1ac) {
                  if (2 < local_1b0) {
                    FUN_143b61d90(param_4,3);
                  }
                }
                else {
                  FUN_143b61d90(param_4,0xff);
                }
              }
              FUN_143b61d90(param_4,local_1b0);
              if (*(char *)(param_2 + (ulonglong)(local_1dc >> 0x18)) == '\0') {
                local_1ac = 0;
              }
              else {
                local_1ac = local_1b0;
              }
            }
            local_1d4 = (char)(local_1dc >> 0x10);
            if (local_1d4 != '\0') {
              local_1b7 = (char)(local_1dc >> 8);
              local_1b6 = (char)local_1dc;
              if (local_1b7 == '\0') {
                local_150 = 1;
              }
              else {
                if ((char)local_1dc == '\0') {
                  local_178 = 2;
                }
                else {
                  local_178 = 3;
                }
                local_150 = local_178;
              }
              local_1b8 = local_1d4;
              (**(code **)(*param_4 + 8))(param_4,&local_1b8,local_150);
            }
            if ((param_7 == '\0') && (cVar1 = FUN_143b61f30(param_4), cVar1 != '\0')) {
              cVar1 = FUN_143a8b110(*param_8);
              if ((cVar1 != '\0') && (cVar1 = FUN_143bd9690(param_4), cVar1 == '\0')) {
                *param_8 = 7;
              }
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
              TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
              ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
              return;
            }
          }
          local_1bc = (uint)local_138;
        } while ((uint)local_138 == 0);
        if (((local_1d8 & 4) != 0) && (local_1c0 = (uint)local_138 >> 0x10, local_1c0 != 0)) {
          if (local_1c0 == 0x500) {
            local_1ec = local_1ec + 1;
          }
          else if ((local_1cc & 0x800) == 0) {
            if (local_1ec != 0) {
              for (local_1ec = local_1ec + -1; 0x20 < local_1ec; local_1ec = local_1ec + -0x21) {
                FUN_143bd96c0(local_98,0x25);
              }
              if (local_1c0 < 0x500) {
                local_180 = local_1ec + 5;
              }
              else {
                local_180 = 0x45 - local_1ec;
              }
              FUN_143bd96c0(local_98,local_180);
              local_1ec = 0;
            }
            FUN_143bd98b0(local_98,local_1c0);
          }
          else {
            if (local_1ec != 0) {
              local_1ec = local_1ec + -1;
              local_19c = local_1ec % 0x21;
              if (local_160 < 0x500) {
                local_168 = local_19c + 5;
              }
              else {
                local_168 = 0x45 - local_19c;
              }
              FUN_143bd96c0(local_98,local_168);
              for (local_1ec = local_1ec - local_19c; 0 < local_1ec; local_1ec = local_1ec + -0x21)
              {
                FUN_143bd96c0(local_98,0x25);
              }
            }
            if (local_1c0 < 0x201) {
              if (local_1c0 == 0x200) {
                local_1d3 = '\x01';
              }
              FUN_143bd96c0(local_98,(local_1c0 >> 8) - 1);
            }
            else {
              FUN_143bd9740(local_98,local_1c0);
            }
            local_160 = local_1c0;
          }
        }
        if ((local_1d8 & 8) != 0) {
          iVar3 = FUN_143b64b50(local_1cc);
          if (iVar3 == 0) {
            local_174 = (uint)(local_1dc == 0);
            local_16c = local_174;
          }
          else {
            local_158 = (uint)(local_1bc < 0x10000);
            local_16c = local_158;
          }
          if (local_16c == 0) {
            local_1c8 = local_1bc >> 8 & 0xff;
            if (((local_1bc >> 8 & 0xc0) == 0) && (2 < local_1c8)) {
              local_1e8 = local_1e8 + 1;
            }
            else {
              if ((local_1cc & 0x100) == 0) {
                if (local_1e8 != 0) {
                  for (local_1e8 = local_1e8 + -1; 6 < local_1e8; local_1e8 = local_1e8 + -7) {
                    FUN_143bd96c0(local_58,0x70);
                  }
                  if (local_1c8 < 3) {
                    local_154 = local_1e8 + 1;
                  }
                  else {
                    local_154 = 0xd - local_1e8;
                  }
                  FUN_143bd96c0(local_58,local_154 << 4);
                  local_1e8 = 0;
                }
                if (2 < local_1c8) {
                  local_1c8 = ((local_1c8 >> 6) + 0xd) * 0x10;
                }
              }
              else {
                if (local_1e8 != 0) {
                  for (local_1e8 = local_1e8 + -1; 0xc < local_1e8; local_1e8 = local_1e8 + -0xd) {
                    FUN_143bd96c0(local_58,0x30);
                  }
                  FUN_143bd96c0(local_58,(local_1e8 + 3) * 0x10);
                  local_1e8 = 0;
                }
                if (2 < local_1c8) {
                  local_1c8 = (3 - (local_1c8 >> 6)) * 0x10;
                }
              }
              FUN_143bd96c0(local_58,local_1c8);
            }
          }
        }
        if ((local_1d8 & 0x10) != 0) {
          local_1f0 = local_1bc & local_164;
          if (local_1f0 == 0x500) {
            local_1f4 = local_1f4 + 1;
          }
          else if ((local_164 & 0x8000) == 0) {
            if (local_1f4 != 0) {
              for (local_1f4 = local_1f4 + -1; 0x60 < local_1f4; local_1f4 = local_1f4 + -0x61) {
                FUN_143bd96c0(local_d8,0x65);
              }
              if (local_1f0 < 0x500) {
                local_15c = local_1f4 + 5;
              }
              else {
                local_15c = 0xc5 - local_1f4;
              }
              FUN_143bd96c0(local_d8,local_15c);
              local_1f4 = 0;
            }
            if (0x500 < local_1f0) {
              local_1f0 = local_1f0 + 0xc000;
            }
            FUN_143bd98b0(local_d8,local_1f0);
          }
          else if ((local_1cc & 0x100) == 0) {
            if (local_1f4 != 0) {
              for (local_1f4 = local_1f4 + -1; 0x20 < local_1f4; local_1f4 = local_1f4 + -0x21) {
                FUN_143bd96c0(local_d8,0x25);
              }
              if (local_1f0 < 0x500) {
                local_17c = local_1f4 + 5;
              }
              else {
                local_17c = 0x45 - local_1f4;
              }
              FUN_143bd96c0(local_d8,local_17c);
              local_1f4 = 0;
            }
            if (0x500 < local_1f0) {
              local_1f0 = local_1f0 + 0x4000;
            }
            FUN_143bd98b0(local_d8,local_1f0);
          }
          else {
            if (0x200 < local_1f0) {
              if (local_1bc < 0x10000) {
                local_1f0 = local_1f0 + 0x4000;
              }
              else {
                local_1f0 = local_1f0 ^ 0xc000;
                if (local_1f0 < 0xc500) {
                  local_1f0 = local_1f0 - 0x4000;
                }
              }
            }
            if (local_1f4 != 0) {
              for (local_1f4 = local_1f4 + -1; 0x20 < local_1f4; local_1f4 = local_1f4 + -0x21) {
                FUN_143bd96c0(local_d8,0xa5);
              }
              if (local_1f0 < 0x8500) {
                local_188 = local_1f4 + 0x85;
              }
              else {
                local_188 = 0xc5 - local_1f4;
              }
              FUN_143bd96c0(local_d8,local_188);
              local_1f4 = 0;
            }
            FUN_143bd98b0(local_d8,local_1f0);
          }
        }
        if ((local_1d8 & 0x20) != 0) {
          local_1d0 = local_1bc & 0xffff;
          if (((local_1bc & 0xc0) == 0) && (0x200 < local_1d0)) {
            local_1e0 = local_1e0 + 1;
          }
          else if ((local_1d0 < 0x201) && ((local_1cc & 0xc) == 0)) {
            cVar1 = FUN_143bd9cb0(local_118);
            if (cVar1 == '\0') {
              iVar3 = FUN_143ac4740(local_118);
              cVar1 = FUN_143bd9420(local_118,iVar3 + -1);
              if (cVar1 != '\x02') goto LAB_143bda908;
            }
            FUN_143bd96c0(local_118,local_1d0 >> 8);
          }
          else {
LAB_143bda908:
            if (local_1d0 < 0x201) {
              local_1d0 = local_1d0 >> 8;
            }
            else {
              local_1d0 = (local_1d0 >> 6 & 3) + 0xfc;
            }
            if (local_1e0 != 0) {
              for (local_1e0 = local_1e0 + -1; 0x70 < local_1e0; local_1e0 = local_1e0 + -0x71) {
                FUN_143bd96c0(local_118,0x8c);
              }
              if (local_1d0 < 0x1c) {
                local_170 = local_1e0 + 0x1c;
              }
              else {
                local_170 = 0xfc - local_1e0;
              }
              FUN_143bd96c0(local_118,local_170);
              local_1e0 = 0;
            }
            FUN_143bd96c0(local_118,local_1d0);
          }
        }
      } while (local_1bc >> 0x18 != 1);
      cVar1 = FUN_143a8b0e0(*param_8);
      if (cVar1 == '\0') {
        local_1f7 = 1;
        if ((local_1d8 & 4) != 0) {
          cVar1 = (**(code **)(*param_6 + 8))(param_6,2);
          if (cVar1 == '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
            return;
          }
          bVar2 = FUN_143bd9ce0(local_98);
          local_1f7 = local_1f7 & bVar2;
          FUN_143b61d90(param_4,1);
          local_190 = TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
                      ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
          local_184 = FUN_143ac4740(local_98);
          local_184 = local_184 + -1;
          if ((local_1cc & 0x800) != 0) {
            local_1a8 = 0;
            while( true ) {
              local_1c4 = local_184;
              if (local_1d3 != '\0') {
                for (local_1c4 = local_1a8; 1 < *(byte *)(local_190 + local_1c4);
                    local_1c4 = local_1c4 + 1) {
                }
              }
              if (local_1a8 < local_1c4) {
                local_140 = (undefined1 *)(local_190 + local_1a8);
                for (local_148 = (undefined1 *)(local_190 + -1 + (longlong)local_1c4);
                    local_140 < local_148; local_148 = local_148 + -1) {
                  local_1b4 = *local_140;
                  *local_140 = *local_148;
                  local_140 = local_140 + 1;
                  *local_148 = local_1b4;
                }
              }
              if (*(char *)(local_190 + local_1c4) == '\0') break;
              *(undefined1 *)(local_190 + local_1c4) = 2;
              local_1a8 = local_1c4 + 1;
            }
          }
          (**(code **)(*param_4 + 8))(param_4,local_190,local_184);
        }
        if ((local_1d8 & 8) != 0) {
          cVar1 = (**(code **)(*param_6 + 8))(param_6,3);
          if (cVar1 == '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
            return;
          }
          bVar2 = FUN_143bd9ce0(local_58);
          local_1f7 = local_1f7 & bVar2;
          FUN_143b61d90(param_4,1);
          local_124 = FUN_143ac4740(local_58);
          local_124 = local_124 + -1;
          local_1f8 = 0;
          for (local_1a0 = 0; local_1a0 < local_124; local_1a0 = local_1a0 + 1) {
            local_1e4 = FUN_143bd9420(local_58,local_1a0);
            if (local_1e4 < 3) {
              if (local_1f8 != 0) {
                FUN_143b61d90(param_4,local_1f8);
                local_1f8 = 0;
              }
              FUN_143b61d90(param_4,local_1e4);
              bVar2 = local_1f8;
            }
            else {
              bVar2 = local_1e4;
              if (local_1f8 != 0) {
                FUN_143b61d90(param_4,(uint)local_1f8 | (int)(uint)local_1e4 >> 4);
                local_1f8 = 0;
                bVar2 = local_1f8;
              }
            }
            local_1f8 = bVar2;
          }
          if (local_1f8 != 0) {
            FUN_143b61d90(param_4,local_1f8);
          }
        }
        if ((local_1d8 & 0x10) != 0) {
          cVar1 = (**(code **)(*param_6 + 8))(param_6,4);
          if (cVar1 == '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
            return;
          }
          bVar2 = FUN_143bd9ce0(local_d8);
          local_1f7 = local_1f7 & bVar2;
          FUN_143b61d90(param_4,1);
          FUN_143bd9860(local_d8,param_4);
        }
        if ((local_1d8 & 0x20) != 0) {
          cVar1 = (**(code **)(*param_6 + 8))(param_6,5);
          if (cVar1 == '\0') {
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
            TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
            ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
            return;
          }
          bVar2 = FUN_143bd9ce0(local_118);
          local_1f7 = local_1f7 & bVar2;
          FUN_143b61d90(param_4,1);
          FUN_143bd9860(local_118,param_4);
        }
        if ((local_1f7 == 0) || (cVar1 = FUN_143bd9690(param_4), cVar1 == '\0')) {
          *param_8 = 7;
        }
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      }
      else {
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_118);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_d8);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_98);
        TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>::
        ~TDecl<SColorSpectrum,RequiredArgs::T0RequiredArgs>(local_58);
      }
    }
  }
  return;
}



// FUNCTION 143bdafc0 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::ContractionsAndExpansions::CESink::vftable;
  return;
}



// FUNCTION 143bdafe0 FUN_143bdafe0 body=209 status=ok
// SIG undefined FUN_143bdafe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdafe0(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  cVar1 = FUN_143a903a0(param_1 + 0x18);
  if ((cVar1 == '\0') || (*(longlong *)(param_1 + 0x40) != 0)) {
    FUN_143a8d3a0(local_40,param_1 + 0x18);
    FUN_143a8e0c0(local_40,param_2);
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_143a8e070(local_40,*(undefined8 *)(param_1 + 0x40));
    }
    FUN_143b134e0(*(undefined8 *)(param_1 + 0x10),local_40);
    FUN_143a8dc60(local_40);
  }
  else {
    FUN_143b13590(*(undefined8 *)(param_1 + 0x10),param_2);
  }
  return;
}



// FUNCTION 143bdb0c0 FUN_143bdb0c0 body=186 status=ok
// SIG undefined FUN_143bdb0c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb0c0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  FUN_143e22eb0(local_78,param_3,0,param_1 + 0x48);
  while( true ) {
    cVar1 = FUN_143e23230(local_78,param_1 + 0x48);
    if (cVar1 == '\0') break;
    uVar2 = FPlugin::GetDescriptor(local_78);
    FUN_143bdb510(param_1,param_2,uVar2);
  }
  FUN_143e22fe0(local_78);
  return;
}



// FUNCTION 143bdb180 FUN_143bdb180 body=139 status=ok
// SIG undefined FUN_143bdb180(void)

void FUN_143bdb180(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a903a0(param_1 + 0xd8);
  if ((cVar1 == '\0') || (*(longlong *)(param_1 + 0x100) != 0)) {
    FUN_143bdb420(param_1,param_2,param_3,*(undefined8 *)(param_1 + 0x10));
  }
  else if (*(longlong *)(param_1 + 0x10) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x10) + 0x68))
              (*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  }
  return;
}



// FUNCTION 143bdb210 FUN_143bdb210 body=301 status=ok
// SIG undefined FUN_143bdb210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb210(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  FUN_143bdd430(param_1,param_3);
  uVar2 = FUN_143b679b0(param_2,param_5);
  cVar1 = FUN_143bdd2a0(uVar2);
  if (cVar1 != '\0') {
    iVar3 = FUN_143b67bd0(uVar2);
    local_50 = *(longlong *)(param_2 + 0x18) + (longlong)iVar3 * 2;
    FUN_143bdb0c0(param_1,param_4,local_50 + 4);
  }
  local_58 = FUN_143a8d3a0(local_38,param_1 + 0x18);
  local_48 = local_58;
  uVar4 = FUN_143a8e0c0(local_58,param_4);
  FUN_143b134e0(*(undefined8 *)(param_1 + 0x10),uVar4);
  FUN_143a8dc60(local_38);
  FMovieSceneSegment::~FMovieSceneSegment(param_1);
  return;
}



// FUNCTION 143bdb340 FUN_143bdb340 body=223 status=ok
// SIG undefined FUN_143bdb340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb340(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_88;
  undefined8 local_80;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_80 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  FUN_143e22eb0(local_78,param_4,0,param_1 + 0x48);
  while( true ) {
    cVar1 = FUN_143e23230(local_78,param_1 + 0x48);
    if (cVar1 == '\0') break;
    local_88 = FUN_143b1dc50(local_78);
    uVar2 = FPlugin::GetDescriptor(local_78);
    local_98 = local_88;
    FUN_143bdb210(param_1,param_2,uVar2,param_3);
  }
  FUN_143e22fe0(local_78);
  return;
}



// FUNCTION 143bdb420 FUN_143bdb420 body=239 status=ok
// SIG undefined FUN_143bdb420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb420(longlong param_1,int param_2,int param_3,longlong param_4)

{
  undefined4 uVar1;
  int local_res10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  if (param_4 != 0) {
    FUN_143a8d3a0(local_40,param_1 + 0xd8);
    local_res10 = param_2;
    do {
      FUN_143a8e0c0(local_40,local_res10);
      if (*(longlong *)(param_1 + 0x100) != 0) {
        FUN_143a8e070(local_40,*(undefined8 *)(param_1 + 0x100));
      }
      FUN_143b134e0(param_4,local_40);
      uVar1 = FUN_143a904f0(param_1 + 0xd8);
      FUN_143a99400(local_40,uVar1);
      local_res10 = local_res10 + 1;
    } while (local_res10 <= param_3);
    FUN_143a8dc60(local_40);
  }
  return;
}



// FUNCTION 143bdb510 FUN_143bdb510 body=164 status=ok
// SIG undefined FUN_143bdb510(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb510(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143a8d3a0(local_40,param_1 + 0x18);
  local_50 = local_58;
  uVar1 = FUN_143a8e0c0(local_58,param_2);
  uVar1 = FUN_143a8e070(uVar1,param_3);
  FUN_143b134e0(*(undefined8 *)(param_1 + 0x10),uVar1);
  FUN_143a8dc60(local_40);
  return;
}



// FUNCTION 143bdb5c0 FUN_143bdb5c0 body=2314 status=ok
// SIG undefined FUN_143bdb5c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdb5c0(longlong *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_res18;
  uint local_res20;
  undefined1 auStack_148 [32];
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  int local_110;
  longlong local_108;
  int local_100;
  longlong local_f8;
  int local_f0;
  int local_ec;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  undefined2 local_18;
  undefined2 uStack_16;
  undefined2 uStack_14;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  cVar1 = FUN_143bdd2e0(param_3);
  local_res20 = param_4;
  if (cVar1 == '\0') {
    cVar1 = FUN_143bdd2e0(param_4);
    local_res18 = param_3;
    if (cVar1 != '\0') {
      local_c8 = param_1[1];
      iVar2 = FUN_143b67bd0(param_4);
      local_d8 = *(longlong *)(local_c8 + 0x18) + (longlong)iVar2 * 2;
      uVar3 = FUN_143bd8fd0(local_d8);
      local_res20 = FUN_143b679b0(param_1[1],uVar3);
      FUN_143bdb340(param_1,param_1[1],param_2,local_d8 + 4);
    }
  }
  else {
    local_28 = *param_1;
    iVar2 = FUN_143b67bd0(param_3);
    local_f8 = *(longlong *)(local_28 + 0x18) + (longlong)iVar2 * 2;
    uVar3 = FUN_143bd8fd0(local_f8);
    local_res18 = FUN_143b679b0(*param_1,uVar3);
    cVar1 = FUN_143bdd2e0(param_4);
    if (cVar1 == '\0') {
      FUN_143bdb340(param_1,*param_1,param_2,local_f8 + 4);
    }
    else {
      local_b0 = param_1[1];
      iVar2 = FUN_143b67bd0(param_4);
      local_e8 = *(longlong *)(local_b0 + 0x18) + (longlong)iVar2 * 2;
      uVar3 = FUN_143bd8fd0(local_e8);
      local_res20 = FUN_143b679b0(param_1[1],uVar3);
      FUN_143bdc150(param_1,param_2,local_f8 + 4,local_e8 + 4);
    }
  }
  cVar1 = FUN_143bdd2a0(local_res18);
  if (cVar1 == '\0') {
    cVar1 = FUN_143bdd2a0(local_res20);
    if (cVar1 != '\0') {
      local_90 = param_1[1];
      iVar2 = FUN_143b67bd0(local_res20);
      local_d0 = *(longlong *)(local_90 + 0x18) + (longlong)iVar2 * 2;
      uVar3 = FUN_143bd8fd0(local_d0);
      local_res20 = FUN_143b679b0(param_1[1],uVar3);
      FUN_143bdb0c0(param_1,param_2,local_d0 + 4);
    }
  }
  else {
    local_a0 = *param_1;
    iVar2 = FUN_143b67bd0(local_res18);
    local_108 = *(longlong *)(local_a0 + 0x18) + (longlong)iVar2 * 2;
    if ((local_res18 & 0x100) == 0) {
      uVar3 = FUN_143bd8fd0(local_108);
      local_res18 = FUN_143b679b0(*param_1,uVar3);
    }
    else {
      local_res18 = 1;
    }
    cVar1 = FUN_143bdd2a0(local_res20);
    if (cVar1 == '\0') {
      FUN_143bdb0c0(param_1,param_2,local_108 + 4);
    }
    else {
      local_60 = param_1[1];
      iVar2 = FUN_143b67bd0(local_res20);
      local_e0 = *(longlong *)(local_60 + 0x18) + (longlong)iVar2 * 2;
      if ((local_res20 & 0x100) == 0) {
        uVar3 = FUN_143bd8fd0(local_e0);
        local_res20 = FUN_143b679b0(param_1[1],uVar3);
      }
      else {
        local_res20 = 1;
      }
      FUN_143bdbed0(param_1,param_2,local_108 + 4,local_e0 + 4);
    }
  }
  cVar1 = FUN_143b65e30(local_res18);
  if (cVar1 == '\0') {
    local_128 = -1;
  }
  else {
    local_128 = FUN_143b67480(local_res18);
  }
  cVar1 = FUN_143b65e30(local_res20);
  if (cVar1 == '\0') {
    local_11c = -1;
  }
  else {
    local_11c = FUN_143b67480(local_res20);
  }
  if (local_11c == 0xe) {
    cVar1 = FUN_143bdd2c0(local_res18);
    if (cVar1 == '\0') {
      FUN_143bdafe0(param_1,param_2);
      return;
    }
    local_38 = param_1[1];
    iVar2 = FUN_143b67bd0(local_res20);
    local_80 = *(undefined8 *)(*(longlong *)(local_38 + 0x10) + (longlong)iVar2 * 8);
    local_100 = FUN_143c09600(param_2,local_80);
    iVar2 = FUN_143bdd360(local_res18);
    if (iVar2 != local_100) {
      FUN_143bdafe0(param_1,param_2);
      return;
    }
  }
  if (local_128 == local_11c) {
    if (local_128 == 5) {
      local_48 = *param_1;
      iVar2 = FUN_143b67bd0(local_res18);
      local_c0 = *(longlong *)(local_48 + 8) + (longlong)iVar2 * 4;
      local_118 = FUN_143bd8410(local_res18);
      local_70 = param_1[1];
      iVar2 = FUN_143b67bd0(local_res20);
      local_b8 = *(longlong *)(local_70 + 8) + (longlong)iVar2 * 4;
      local_110 = FUN_143bd8410(local_res20);
      if (local_118 == local_110) {
        for (local_120 = 0; local_120 < local_118; local_120 = local_120 + 1) {
          if (*(int *)(local_c0 + (longlong)local_120 * 4) !=
              *(int *)(local_b8 + (longlong)local_120 * 4)) {
            FUN_143bdafe0(param_1,param_2);
            return;
          }
        }
      }
      else {
        FUN_143bdafe0(param_1,param_2);
      }
    }
    else if (local_128 == 6) {
      local_a8 = *param_1;
      iVar2 = FUN_143b67bd0(local_res18);
      local_88 = *(longlong *)(local_a8 + 0x10) + (longlong)iVar2 * 8;
      local_114 = FUN_143bd8410(local_res18);
      local_98 = param_1[1];
      iVar2 = FUN_143b67bd0(local_res20);
      local_78 = *(longlong *)(local_98 + 0x10) + (longlong)iVar2 * 8;
      local_ec = FUN_143bd8410(local_res20);
      if (local_114 == local_ec) {
        for (local_124 = 0; local_124 < local_114; local_124 = local_124 + 1) {
          if (*(longlong *)(local_88 + (longlong)local_124 * 8) !=
              *(longlong *)(local_78 + (longlong)local_124 * 8)) {
            FUN_143bdafe0(param_1,param_2);
            return;
          }
        }
      }
      else {
        FUN_143bdafe0(param_1,param_2);
      }
    }
    else if (local_128 == 0xc) {
      local_f0 = FUN_143b230c0(param_2,&local_18);
      local_68 = param_1[2];
      local_50 = *(longlong *)param_1[2];
      cVar1 = (**(code **)(local_50 + 0x30))(local_68,local_18);
      if (cVar1 == '\0') {
        local_40 = param_1[2];
        local_30 = *(longlong *)param_1[2];
        cVar1 = (**(code **)(local_30 + 0x30))(local_40,uStack_16);
        if (cVar1 == '\0') {
          if (local_f0 != 3) {
            return;
          }
          local_20 = param_1[2];
          local_58 = *(longlong *)param_1[2];
          cVar1 = (**(code **)(local_58 + 0x30))(local_20,uStack_14);
          if (cVar1 == '\0') {
            return;
          }
        }
      }
      FUN_143bdafe0(param_1,param_2);
    }
    else if (local_res18 != local_res20) {
      FUN_143bdafe0(param_1,param_2);
    }
  }
  else {
    FUN_143bdafe0(param_1,param_2);
  }
  return;
}



// FUNCTION 143bdbed0 FUN_143bdbed0 body=629 status=ok
// SIG undefined FUN_143bdbed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdbed0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_148 [32];
  undefined1 *local_128;
  undefined1 *local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined1 local_108 [48];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_110 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  FUN_143e22eb0(local_78,param_3,0,param_1 + 0x48);
  FUN_143e22eb0(local_d8,param_4,0,param_1 + 0x48);
  local_128 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  FUN_143a8dbd0(local_108,0xffff);
  FUN_143acc590(local_108,0xffff);
  while( true ) {
    if (local_128 == (undefined1 *)0x0) {
      cVar1 = FUN_143e23230(local_78,param_1 + 0x48);
      if (cVar1 == '\0') {
        local_128 = local_108;
      }
      else {
        local_128 = (undefined1 *)FPlugin::GetDescriptor(local_78);
      }
    }
    if (local_120 == (undefined1 *)0x0) {
      cVar1 = FUN_143e23230(local_d8,param_1 + 0x48);
      if (cVar1 == '\0') {
        local_120 = local_108;
      }
      else {
        local_120 = (undefined1 *)FPlugin::GetDescriptor(local_d8);
      }
    }
    if ((local_128 == local_108) && (local_120 == local_108)) break;
    cVar1 = FUN_143b0fd00(local_128,local_120);
    local_118 = (int)cVar1;
    if (local_118 < 0) {
      FUN_143bdb510(param_1,param_2,local_128);
      local_128 = (undefined1 *)0x0;
    }
    else if (local_118 < 1) {
      *(undefined1 **)(param_1 + 0x40) = local_128;
      local_114 = FUN_143b1dc50(local_d8);
      uVar2 = FUN_143b1dc50(local_78);
      FUN_143bdb5c0(param_1,param_2,uVar2,local_114);
      *(undefined8 *)(param_1 + 0x40) = 0;
      local_128 = (undefined1 *)0x0;
      local_120 = (undefined1 *)0x0;
    }
    else {
      FUN_143bdb510(param_1,param_2,local_120);
      local_120 = (undefined1 *)0x0;
    }
  }
  FUN_143a8dc60(local_108);
  FUN_143e22fe0(local_d8);
  FUN_143e22fe0(local_78);
  return;
}



// FUNCTION 143bdc150 FUN_143bdc150 body=687 status=ok
// SIG undefined FUN_143bdc150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdc150(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined1 *local_128;
  undefined1 *local_120;
  int local_118;
  undefined4 local_114;
  undefined8 local_110;
  undefined1 local_108 [48];
  undefined1 local_d8 [96];
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_110 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  FUN_143e22eb0(local_78,param_3,0,param_1 + 9);
  FUN_143e22eb0(local_d8,param_4,0,param_1 + 9);
  local_128 = (undefined1 *)0x0;
  local_120 = (undefined1 *)0x0;
  FUN_143a8dbd0(local_108,0xffff);
  while( true ) {
    if (local_128 == (undefined1 *)0x0) {
      cVar1 = FUN_143e23230(local_78,param_1 + 9);
      if (cVar1 == '\0') {
        local_128 = local_108;
      }
      else {
        local_128 = (undefined1 *)FPlugin::GetDescriptor(local_78);
      }
    }
    if (local_120 == (undefined1 *)0x0) {
      cVar1 = FUN_143e23230(local_d8,param_1 + 9);
      if (cVar1 == '\0') {
        local_120 = local_108;
      }
      else {
        local_120 = (undefined1 *)FPlugin::GetDescriptor(local_d8);
      }
    }
    if ((local_128 == local_108) && (local_120 == local_108)) break;
    cVar1 = FUN_143b0fd00(local_128,local_120);
    local_118 = (int)cVar1;
    if (local_118 < 0) {
      local_138 = FUN_143b1dc50(local_78);
      FUN_143bdb210(param_1,*param_1,local_128,param_2);
      local_128 = (undefined1 *)0x0;
    }
    else if (local_118 < 1) {
      FUN_143bdd430(param_1,local_128);
      local_114 = FUN_143b1dc50(local_d8);
      uVar2 = FUN_143b1dc50(local_78);
      FUN_143bdb5c0(param_1,param_2,uVar2,local_114);
      FMovieSceneSegment::~FMovieSceneSegment(param_1);
      local_128 = (undefined1 *)0x0;
      local_120 = (undefined1 *)0x0;
    }
    else {
      local_138 = FUN_143b1dc50(local_d8);
      FUN_143bdb210(param_1,param_1[1],local_120,param_2);
      local_120 = (undefined1 *)0x0;
    }
  }
  FUN_143a8dc60(local_108);
  FUN_143e22fe0(local_d8);
  FUN_143e22fe0(local_78);
  return;
}



// FUNCTION 143bdc400 FUN_143bdc400 body=66 status=ok
// SIG undefined FUN_143bdc400(void)

bool FUN_143bdc400(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143b14510(param_1,param_2,param_3);
  return cVar1 == '\0';
}



// FUNCTION 143bdc450 FUN_143bdc450 body=276 status=ok
// SIG undefined FUN_143bdc450(void)

void FUN_143bdc450(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x40) = *param_3;
    if (*(longlong *)(param_2 + 0x20) != 0) {
      *(undefined1 *)((longlong)param_1 + 0x21) = 0xff;
    }
    *param_1 = param_2;
    FUN_143ac2b60(*(undefined8 *)*param_1,0,FUN_143bdd4d0,param_1);
    if ((*(longlong *)(param_2 + 0x20) == 0) ||
       (cVar1 = FUN_143a8b0e0((int)param_1[0x40]), cVar1 != '\0')) {
      *param_3 = (int)param_1[0x40];
    }
    else {
      FUN_143b149a0(param_1 + 5);
      *(undefined1 *)((longlong)param_1 + 0x21) = 1;
      *param_1 = *(longlong *)(param_2 + 0x20);
      FUN_143ac2b60(*(undefined8 *)*param_1,0,FUN_143bdd4d0,param_1);
      *param_3 = (int)param_1[0x40];
    }
  }
  return;
}



// FUNCTION 143bdc570 FUN_143bdc570 body=136 status=ok
// SIG undefined FUN_143bdc570(void)

void FUN_143bdc570(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 9) = *param_3;
    *param_1 = param_2;
    param_1[1] = *(longlong *)(param_2 + 0x20);
    FUN_143ac2b60(*(undefined8 *)*param_1,0,FUN_143bdd740,param_1);
    *param_3 = (int)param_1[9];
  }
  return;
}



// FUNCTION 143bdc600 FUN_143bdc600 body=31 status=ok
// SIG undefined FUN_143bdc600(void)

void FUN_143bdc600(longlong param_1)

{
  FUN_143a8b510(param_1 + 8);
  return;
}



// FUNCTION 143bdc620 ~FMovieSceneSegment body=31 status=ok
// SIG undefined ~FMovieSceneSegment(void)

void FMovieSceneSegment::~FMovieSceneSegment(longlong param_1)

{
  FUN_143bdc600(param_1 + 0x18);
  return;
}



// FUNCTION 143bdc640 GetDescriptor body=15 status=ok
// SIG undefined GetDescriptor(void)

longlong FPlugin::GetDescriptor(longlong param_1)

{
  return param_1 + 0x28;
}



// FUNCTION 143bdc650 FUN_143bdc650 body=1868 status=ok
// SIG undefined FUN_143bdc650(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdc650(longlong *param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint local_res20;
  undefined1 auStack_2a8 [32];
  undefined8 local_288;
  undefined8 local_280;
  undefined2 local_278;
  undefined1 local_276 [2];
  int local_274;
  int local_270;
  int local_26c;
  undefined4 local_268;
  undefined4 local_264;
  int local_260;
  int local_25c;
  undefined4 local_258;
  undefined4 *local_250;
  longlong local_248;
  longlong local_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_1c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_res20 = param_4;
  do {
    if ((local_res20 & 0xff) < 0xc0) {
      if (param_1[3] == 0) {
        return;
      }
      uVar3 = FUN_143bd7e20(local_res20);
      local_220 = param_1[3];
      local_1c8 = *(longlong *)param_1[3];
      (**(code **)(local_1c8 + 8))(local_220,uVar3);
      return;
    }
    local_268 = FUN_143b67480(local_res20);
    switch(local_268) {
    case 0:
      return;
    case 1:
      if (param_1[3] == 0) {
        return;
      }
      uVar3 = FUN_143bd7df0(local_res20);
      local_230 = param_1[3];
      local_1f0 = *(longlong *)param_1[3];
      (**(code **)(local_1f0 + 8))(local_230,uVar3);
      return;
    case 2:
      if (param_1[3] == 0) {
        return;
      }
      uVar3 = FUN_143bd7e10(local_res20);
      local_248 = param_1[3];
      local_1d0 = *(longlong *)param_1[3];
      (**(code **)(local_1d0 + 8))(local_248,uVar3);
      return;
    case 3:
    case 7:
    case 0xd:
      cVar1 = FUN_143a8b110((int)param_1[0x40]);
      if (cVar1 == '\0') {
        return;
      }
      *(undefined4 *)(param_1 + 0x40) = 5;
      return;
    case 4:
      if (param_1[3] != 0) {
        lVar4 = FUN_143bd83c0(local_res20);
        param_1[0x21] = lVar4;
        lVar4 = FUN_143bd83f0(local_res20);
        param_1[0x22] = lVar4;
        local_210 = param_1[3];
        local_1e0 = *(longlong *)param_1[3];
        (**(code **)(local_1e0 + 0x10))(local_210,param_1 + 0x21,2);
      }
      cVar1 = FUN_143a903a0(param_1 + 0x1b);
      if (cVar1 == '\0') {
        return;
      }
      FUN_143bdb180(param_1,param_2,param_3);
      return;
    case 5:
      if (param_1[3] != 0) {
        local_200 = *param_1;
        iVar2 = FUN_143b67bd0(local_res20);
        local_250 = (undefined4 *)(*(longlong *)(local_200 + 8) + (longlong)iVar2 * 4);
        local_26c = FUN_143bd8410(local_res20);
        for (local_274 = 0; local_274 < local_26c; local_274 = local_274 + 1) {
          local_258 = *local_250;
          lVar4 = FUN_143bd7d60(local_258);
          param_1[(longlong)local_274 + 0x21] = lVar4;
          local_250 = local_250 + 1;
        }
        local_240 = param_1[3];
        local_238 = *(longlong *)param_1[3];
        (**(code **)(local_238 + 0x10))(local_240,param_1 + 0x21,local_26c);
      }
      cVar1 = FUN_143a903a0(param_1 + 0x1b);
      if (cVar1 == '\0') {
        return;
      }
      FUN_143bdb180(param_1,param_2,param_3);
      return;
    case 6:
      if (param_1[3] != 0) {
        local_264 = FUN_143bd8410(local_res20);
        local_228 = *param_1;
        iVar2 = FUN_143b67bd0(local_res20);
        local_218 = param_1[3];
        local_208 = *(longlong *)param_1[3];
        (**(code **)(local_208 + 0x10))
                  (local_218,*(longlong *)(local_228 + 0x10) + (longlong)iVar2 * 8,local_264);
      }
      cVar1 = FUN_143a903a0(param_1 + 0x1b);
      if (cVar1 == '\0') {
        return;
      }
      FUN_143bdb180(param_1,param_2,param_3);
      return;
    case 8:
      FUN_143bdd0d0(param_1,param_2,param_3,local_res20);
      return;
    case 9:
      FUN_143bdcee0(param_1,param_2,param_3,local_res20);
      return;
    case 10:
      local_1f8 = *param_1;
      iVar2 = FUN_143b67bd0(local_res20);
      local_res20 = *(uint *)(*(longlong *)(local_1f8 + 8) + (longlong)iVar2 * 4);
      break;
    case 0xb:
      local_res20 = **(uint **)(*param_1 + 8);
      break;
    case 0xc:
      if (param_1[3] != 0) {
        local_280 = 0;
        local_288 = 0;
        FUN_143b611c0(local_1b8,*param_1,0,0);
        local_278 = 0;
        for (local_270 = param_2; local_270 <= param_3; local_270 = local_270 + 1) {
          local_278 = (undefined2)local_270;
          FUN_143bdd470(local_1b8,&local_278,local_276);
          local_260 = FUN_143bd7f70(local_1b8,param_1 + 0x40);
          cVar1 = FUN_143a8b0e0((int)param_1[0x40]);
          if (cVar1 != '\0') {
            UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b8);
            return;
          }
          local_25c = local_260 + -1;
          uVar3 = FMovieSceneSegment::~FMovieSceneSegment(local_1b8);
          local_1e8 = param_1[3];
          local_1d8 = *(longlong *)param_1[3];
          (**(code **)(local_1d8 + 0x10))(local_1e8,uVar3,local_25c);
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b8);
      }
      cVar1 = FUN_143a903a0(param_1 + 0x1b);
      if (cVar1 != '\0') {
        FUN_143bdb180(param_1,param_2,param_3);
      }
      return;
    case 0xe:
      return;
    case 0xf:
      return;
    }
  } while( true );
}



// FUNCTION 143bdcde0 FUN_143bdcde0 body=254 status=ok
// SIG undefined FUN_143bdcde0(void)

void FUN_143bdcde0(undefined8 *param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_res10;
  int local_res20;
  
  cVar1 = FUN_143b65e30(param_4);
  local_res10 = param_2;
  local_res20 = param_4;
  if ((cVar1 == '\0') || (local_res20 = FUN_143b67af0(*param_1,param_4), local_res20 != 0xc0)) {
    do {
      uVar2 = FUN_143b64340(param_1[1],local_res10);
      iVar3 = FUN_143b679b0(param_1[1],uVar2);
      cVar1 = FUN_143bdd300(local_res20);
      if ((cVar1 == '\0') || (cVar1 = FUN_143bdd300(iVar3), cVar1 == '\0')) {
        FUN_143bdb5c0(param_1,local_res10,local_res20,iVar3);
      }
      else if (local_res20 != iVar3) {
        FUN_143b13590(param_1[2],local_res10);
      }
      local_res10 = local_res10 + 1;
    } while (local_res10 <= param_3);
    FUN_143a8b110(*(undefined4 *)(param_1 + 9));
  }
  else {
    FUN_143a8b110(*(undefined4 *)(param_1 + 9));
  }
  return;
}



// FUNCTION 143bdcee0 FUN_143bdcee0 body=486 status=ok
// SIG undefined FUN_143bdcee0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdcee0(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = *param_1;
  iVar2 = FUN_143b67bd0(param_4);
  local_98 = *(longlong *)(local_90 + 0x18) + (longlong)iVar2 * 2;
  if ((param_4 & 0x100) == 0) {
    uVar3 = FUN_143bd8fd0(local_98);
    FUN_143bdc650(param_1,param_2,param_3,uVar3);
  }
  FUN_143e22eb0(local_78,local_98 + 4,0,param_1 + 0x40);
  while (cVar1 = FUN_143e23230(local_78,param_1 + 0x40), cVar1 != '\0') {
    lVar4 = FPlugin::GetDescriptor(local_78);
    param_1[0x20] = lVar4;
    FUN_143bdb420(param_1,param_2,param_3,param_1[1]);
    cVar1 = FUN_143a903a0(param_1 + 0x1b);
    if (cVar1 == '\0') {
      FUN_143bdb420(param_1,param_2,param_3,param_1[2]);
    }
    uVar3 = FUN_143b1dc50(local_78);
    FUN_143bdc650(param_1,param_2,param_3,uVar3);
  }
  param_1[0x20] = 0;
  FUN_143e22fe0(local_78);
  return;
}



// FUNCTION 143bdd0d0 FUN_143bdd0d0 body=456 status=ok
// SIG undefined FUN_143bdd0d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bdd0d0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined1 local_78 [96];
  ulonglong local_18;
  
  local_88 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_90 = *param_1;
  iVar2 = FUN_143b67bd0(param_4);
  local_98 = *(longlong *)(local_90 + 0x18) + (longlong)iVar2 * 2;
  uVar3 = FUN_143bd8fd0(local_98);
  FUN_143bdc650(param_1,param_2,param_3,uVar3);
  if ((char)param_1[4] != '\0') {
    FUN_143e22eb0(local_78,local_98 + 4,0,param_1 + 0x40);
    while (cVar1 = FUN_143e23230(local_78,param_1 + 0x40), cVar1 != '\0') {
      uVar4 = FPlugin::GetDescriptor(local_78);
      FUN_143bdd3f0(param_1,uVar4);
      FUN_143bdb420(param_1,param_2,param_3,param_1[1]);
      FUN_143bdb420(param_1,param_2,param_3,param_1[2]);
      uVar3 = FUN_143b1dc50(local_78);
      FUN_143bdc650(param_1,param_2,param_3,uVar3);
    }
    FUN_143bdd370(param_1);
    FUN_143e22fe0(local_78);
  }
  return;
}



// FUNCTION 143bdd2a0 FUN_143bdd2a0 body=27 status=ok
// SIG undefined FUN_143bdd2a0(void)

void FUN_143bdd2a0(undefined4 param_1)

{
  FUN_143b64d60(param_1,9);
  return;
}



// FUNCTION 143bdd2c0 FUN_143bdd2c0 body=27 status=ok
// SIG undefined FUN_143bdd2c0(void)

void FUN_143bdd2c0(undefined4 param_1)

{
  FUN_143b64d60(param_1,1);
  return;
}



// FUNCTION 143bdd2e0 FUN_143bdd2e0 body=27 status=ok
// SIG undefined FUN_143bdd2e0(void)

void FUN_143bdd2e0(undefined4 param_1)

{
  FUN_143b64d60(param_1,8);
  return;
}



// FUNCTION 143bdd300 FUN_143bdd300 body=88 status=ok
// SIG undefined FUN_143bdd300(void)

undefined1 FUN_143bdd300(undefined4 param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_143b65e30(param_1);
  if ((((cVar1 != '\0') && (iVar2 = FUN_143b67480(param_1), iVar2 != 1)) &&
      (iVar2 = FUN_143b67480(param_1), iVar2 != 2)) && (iVar2 = FUN_143b67480(param_1), iVar2 != 4))
  {
    return 0;
  }
  return 1;
}



// FUNCTION 143bdd360 FUN_143bdd360 body=14 status=ok
// SIG undefined FUN_143bdd360(void)

uint FUN_143bdd360(uint param_1)

{
  return param_1 & 0xffffff00;
}



// FUNCTION 143bdd370 FUN_143bdd370 body=33 status=ok
// SIG undefined FUN_143bdd370(void)

void FUN_143bdd370(longlong param_1)

{
  FUN_143a90910(param_1 + 0xd8);
  return;
}



// FUNCTION 143bdd3a0 ~FMovieSceneSegment body=31 status=ok
// SIG undefined ~FMovieSceneSegment(void)

void FMovieSceneSegment::~FMovieSceneSegment(longlong param_1)

{
  FUN_143a90910(param_1 + 0x18);
  return;
}



// FUNCTION 143bdd3c0 FUN_143bdd3c0 body=39 status=ok
// SIG undefined FUN_143bdd3c0(void)

void FUN_143bdd3c0(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143a904f0(param_1);
  FUN_143a8f600(param_1,0,uVar1);
  return;
}



// FUNCTION 143bdd3f0 FUN_143bdd3f0 body=62 status=ok
// SIG undefined FUN_143bdd3f0(void)

void FUN_143bdd3f0(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_1 + 0xd8,param_2);
  FUN_143bdd3c0(param_1 + 0xd8);
  return;
}



// FUNCTION 143bdd430 FUN_143bdd430 body=58 status=ok
// SIG undefined FUN_143bdd430(void)

void FUN_143bdd430(longlong param_1,undefined8 param_2)

{
  FUN_143a8dcd0(param_1 + 0x18,param_2);
  FUN_143bdd3c0(param_1 + 0x18);
  return;
}



// FUNCTION 143bdd470 FUN_143bdd470 body=85 status=ok
// SIG undefined FUN_143bdd470(void)

void FUN_143bdd470(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143bd9080(param_1);
  *(undefined8 *)(param_1 + 400) = param_2;
  *(undefined8 *)(param_1 + 0x188) = param_2;
  *(undefined8 *)(param_1 + 0x198) = param_3;
  return;
}



// FUNCTION 143bdd4d0 FUN_143bdd4d0 body=615 status=ok
// SIG undefined FUN_143bdd4d0(void)

undefined8 FUN_143bdd4d0(longlong param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int local_50;
  
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(char *)(param_1 + 0x21) < '\0') {
      if (param_4 == 0xc0) {
        return CONCAT71((uint7)(uint3)(*(char *)(param_1 + 0x21) >> 7),1);
      }
      (**(code **)(*(longlong *)(param_1 + 0x28) + 0x68))(param_1 + 0x28,param_2,param_3);
    }
    else if (param_2 == param_3) {
      cVar1 = (**(code **)(*(longlong *)(param_1 + 0x28) + 0x30))(param_1 + 0x28,param_2);
      if (cVar1 != '\0') {
        return CONCAT71((uint7)(uint3)(cVar1 >> 7),1);
      }
    }
    else {
      cVar1 = FUN_143bdc400(param_1 + 0x28,param_2,param_3);
      if (cVar1 != '\0') {
        plVar5 = (longlong *)FUN_143b15dd0(param_1 + 0x80,param_2,param_3);
        (**(code **)(*plVar5 + 0x88))(plVar5,param_1 + 0x28);
        iVar2 = (**(code **)(*(longlong *)(param_1 + 0x80) + 0xc0))(param_1 + 0x80);
        for (local_50 = 0; local_50 < iVar2; local_50 = local_50 + 1) {
          uVar3 = (**(code **)(*(longlong *)(param_1 + 0x80) + 0xd0))(param_1 + 0x80,local_50);
          uVar4 = (**(code **)(*(longlong *)(param_1 + 0x80) + 200))(param_1 + 0x80,local_50);
          FUN_143bdc650(param_1,uVar4,uVar3,param_4);
        }
        uVar6 = FUN_143a8b110(*(undefined4 *)(param_1 + 0x200));
        return uVar6;
      }
    }
  }
  FUN_143bdc650(param_1,param_2,param_3,param_4);
  uVar6 = FUN_143a8b110(*(undefined4 *)(param_1 + 0x200));
  return uVar6;
}



// FUNCTION 143bdd740 FUN_143bdd740 body=76 status=ok
// SIG undefined FUN_143bdd740(void)

undefined8 FUN_143bdd740(undefined8 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined8 uVar1;
  
  if (param_4 == 0xc0) {
    uVar1 = 1;
  }
  else {
    uVar1 = FUN_143bdcde0(param_1,param_2,param_3,param_4);
  }
  return uVar1;
}



// FUNCTION 143bdd790 FUN_143bdd790 body=306 status=ok
// SIG undefined FUN_143bdd790(void)

undefined8 * FUN_143bdd790(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  FUN_143bdd8d0(param_1,param_2);
  *param_1 = icu_53::CollationSettings::vftable;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x28);
  if (iVar1 != 0) {
    if (*(int *)(param_2 + 0x2c) == 0) {
      FUN_143bdda00(param_1,*(undefined8 *)(param_2 + 0x20),iVar1,*(undefined8 *)(param_2 + 0x18));
    }
    else {
      FUN_143bdde30(param_1,*(undefined8 *)(param_2 + 0x20),iVar1,*(undefined8 *)(param_2 + 0x18),
                    iVar1,uVar2);
    }
  }
  if (-1 < *(int *)(param_1 + 6)) {
    _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0x34),(void *)(param_2 + 0x34),0x300)
    ;
  }
  return param_1;
}



// FUNCTION 143bdd8d0 FUN_143bdd8d0 body=61 status=ok
// SIG undefined FUN_143bdd8d0(void)

undefined8 * FUN_143bdd8d0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::SharedObject::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 143bdd910 ~ctype<> body=64 status=ok
// SIG undefined ~ctype<>(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __cdecl std::ctype<unsigned short>::~ctype<unsigned short>(void) __ptr64
    protected: virtual __cdecl std::ctype<wchar_t>::~ctype<wchar_t>(void) __ptr64
   
   Libraries: Visual Studio 2005 Debug, Visual Studio 2010 Debug, Visual Studio 2010 Release */

void ~ctype<>(undefined8 *param_1)

{
  *param_1 = icu_53::CollationSettings::vftable;
  if (*(int *)((longlong)param_1 + 0x2c) != 0) {
    FUN_143aa79f0(param_1[4]);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143bdd950 FUN_143bdd950 body=176 status=ok
// SIG undefined FUN_143bdd950(void)

ulonglong FUN_143bdd950(ulonglong param_1,longlong param_2)

{
  int local_18;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    if (((*(uint *)(param_1 + 0x10) & 0xc) == 0) ||
       (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14))) {
      if (*(int *)(param_1 + 0x28) == *(int *)(param_2 + 0x28)) {
        for (local_18 = 0; local_18 < *(int *)(param_1 + 0x28); local_18 = local_18 + 1) {
          if (*(int *)(*(longlong *)(param_1 + 0x20) + (longlong)local_18 * 4) !=
              *(int *)(*(longlong *)(param_2 + 0x20) + (longlong)local_18 * 4)) {
            return (ulonglong)(uint7)(int7)(int3)((uint)local_18 >> 8) << 8;
          }
        }
        param_1 = CONCAT71((uint7)(uint3)((uint)*(int *)(param_1 + 0x28) >> 8),1);
      }
      else {
        param_1 = param_1 & 0xffffffffffffff00;
      }
    }
    else {
      param_1 = param_1 & 0xffffffffffffff00;
    }
  }
  else {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  return param_1;
}



// FUNCTION 143bdda00 FUN_143bdda00 body=125 status=ok
// SIG undefined FUN_143bdda00(void)

void FUN_143bdda00(longlong param_1,undefined8 param_2,int param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    FUN_143bddb30(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x2c) != 0) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x20));
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    *(undefined8 *)(param_1 + 0x18) = param_4;
    *(undefined8 *)(param_1 + 0x20) = param_2;
    *(int *)(param_1 + 0x28) = param_3;
  }
  return;
}



// FUNCTION 143bdda80 FUN_143bdda80 body=164 status=ok
// SIG undefined FUN_143bdda80(void)

uint FUN_143bdda80(longlong param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = *(int *)(param_1 + 0x10) << 8;
  if ((*(uint *)(param_1 + 0x10) & 0xc) != 0) {
    local_18 = local_18 ^ *(uint *)(param_1 + 0x14);
  }
  local_18 = local_18 ^ *(uint *)(param_1 + 0x28);
  for (local_14 = 0; local_14 < *(int *)(param_1 + 0x28); local_14 = local_14 + 1) {
    local_18 = local_18 ^
               *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)local_14 * 4) <<
               ((byte)local_14 & 0x1f);
  }
  return local_18;
}



// FUNCTION 143bddb30 FUN_143bddb30 body=31 status=ok
// SIG undefined FUN_143bddb30(void)

void FUN_143bddb30(longlong param_1)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return;
}



// FUNCTION 143bddb50 FUN_143bddb50 body=162 status=ok
// SIG undefined FUN_143bddb50(void)

void FUN_143bddb50(longlong param_1,int param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10) & 0xfffffff3;
    if (param_2 == -1) {
      *(uint *)(param_1 + 0x10) = uVar2 | param_3 & 0xc;
    }
    else if (param_2 == 0x14) {
      *(uint *)(param_1 + 0x10) = uVar2 | 4;
    }
    else if (param_2 == 0x15) {
      *(uint *)(param_1 + 0x10) = uVar2;
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 143bddc00 FUN_143bddc00 body=196 status=ok
// SIG undefined FUN_143bddc00(void)

void FUN_143bddc00(longlong param_1,int param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10) & 0xfffffcff;
    if (param_2 == -1) {
      *(uint *)(param_1 + 0x10) = uVar2 | param_3 & 0x300;
    }
    else if (param_2 == 0x10) {
      *(uint *)(param_1 + 0x10) = uVar2;
    }
    else if (param_2 == 0x18) {
      *(uint *)(param_1 + 0x10) = uVar2 | 0x200;
    }
    else if (param_2 == 0x19) {
      *(uint *)(param_1 + 0x10) = uVar2 | 0x300;
    }
    else {
      *param_4 = 1;
    }
  }
  return;
}



// FUNCTION 143bddcd0 FUN_143bddcd0 body=188 status=ok
// SIG undefined FUN_143bddcd0(void)

void FUN_143bddcd0(longlong param_1,uint param_2,int param_3,uint param_4,undefined4 *param_5)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 == -1) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2 | param_4 & param_2;
    }
    else if (param_3 == 0x10) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & ~param_2;
    }
    else if (param_3 == 0x11) {
      *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | param_2;
    }
    else {
      *param_5 = 1;
    }
  }
  return;
}



// FUNCTION 143bddd90 FUN_143bddd90 body=156 status=ok
// SIG undefined FUN_143bddd90(void)

void FUN_143bddd90(longlong param_1,int param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10) & 0xffffff8f;
    if (param_2 == -1) {
      *(uint *)(param_1 + 0x10) = uVar2 | param_3 & 0x70;
    }
    else if ((param_2 < 0) || (3 < param_2)) {
      *param_4 = 1;
    }
    else {
      *(uint *)(param_1 + 0x10) = uVar2 | param_2 << 4;
    }
  }
  return;
}



// FUNCTION 143bdde30 FUN_143bdde30 body=315 status=ok
// SIG undefined FUN_143bdde30(void)

undefined8 FUN_143bdde30(longlong param_1,void *param_2,int param_3,void *param_4)

{
  uint uVar1;
  void *local_18;
  void *local_10;
  
  if (param_3 == 0) {
    FUN_143bddb30(param_1);
  }
  else {
    if (*(int *)(param_1 + 0x2c) < param_3) {
      uVar1 = param_3 + 3U & 0xfffffffc;
      local_10 = (void *)FUN_143aa7a40((longlong)(int)(uVar1 * 4 + 0x100));
      if (local_10 == (void *)0x0) {
        return 0;
      }
      if (*(int *)(param_1 + 0x2c) != 0) {
        FUN_143aa79f0(*(undefined8 *)(param_1 + 0x20));
      }
      local_18 = (void *)((longlong)local_10 + (longlong)(int)(uVar1 << 2));
      *(void **)(param_1 + 0x18) = local_18;
      *(void **)(param_1 + 0x20) = local_10;
      *(uint *)(param_1 + 0x2c) = uVar1;
    }
    else {
      local_18 = *(void **)(param_1 + 0x18);
      local_10 = *(void **)(param_1 + 0x20);
    }
    _guard_xfg_dispatch_icall_nop(local_18,param_4,0x100);
    _guard_xfg_dispatch_icall_nop(local_10,param_2,(longlong)(param_3 << 2));
    *(int *)(param_1 + 0x28) = param_3;
  }
  return 1;
}



// FUNCTION 143bddf70 FUN_143bddf70 body=167 status=ok
// SIG undefined FUN_143bddf70(void)

void FUN_143bddf70(longlong param_1,int param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = *(uint *)(param_1 + 0x10) & 0xffff0fff;
    if (param_2 == -1) {
      *(uint *)(param_1 + 0x10) = uVar2 | param_3 & 0xf000;
    }
    else if ((param_2 < 0) || ((3 < param_2 && (param_2 != 0xf)))) {
      *param_4 = 1;
    }
    else {
      *(uint *)(param_1 + 0x10) = uVar2 | param_2 << 0xc;
    }
  }
  return;
}



// FUNCTION 143bde020 ~CMFCRibbonRichEditCtrl body=58 status=ok
// SIG void ~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl * this)

/* Library Function - Single Match
    public: virtual __cdecl CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl *this)

{
  *(undefined ***)this = icu_53::FCDUIterCollationIterator::vftable;
  FUN_143a8dc60(this + 0x1a8);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(this);
  return;
}



// FUNCTION 143bde060 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UIterCollationIterator::vftable;
  FUN_143bd6570(param_1);
  return;
}



// FUNCTION 143bde090 FUN_143bde090 body=61 status=ok
// SIG undefined FUN_143bde090(void)

void FUN_143bde090(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143bdee40(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bde0d0 FUN_143bde0d0 body=63 status=ok
// SIG undefined FUN_143bde0d0(void)

void FUN_143bde0d0(longlong param_1,int param_2)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bde110 FUN_143bde110 body=61 status=ok
// SIG undefined FUN_143bde110(void)

void FUN_143bde110(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143bde800(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bde150 FUN_143bde150 body=63 status=ok
// SIG undefined FUN_143bde150(void)

void FUN_143bde150(longlong param_1,int param_2)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bde190 FUN_143bde190 body=127 status=ok
// SIG undefined FUN_143bde190(void)

ulonglong FUN_143bde190(longlong param_1)

{
  ulonglong uVar1;
  
  if (*(int *)(param_1 + 400) < 2) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1)
    ;
  }
  else if (*(int *)(param_1 + 400) == 2) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x198);
  }
  else if (*(int *)(param_1 + 0x198) == 0) {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x194);
  }
  else {
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x19c);
  }
  return uVar1;
}



// FUNCTION 143bde220 FUN_143bde220 body=46 status=ok
// SIG undefined FUN_143bde220(void)

void FUN_143bde220(longlong param_1)

{
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1);
  return;
}



// FUNCTION 143bde250 FUN_143bde250 body=241 status=ok
// SIG undefined FUN_143bde250(void)

ushort FUN_143bde250(longlong param_1)

{
  uint uVar1;
  undefined2 local_14;
  
  if (*(int *)(param_1 + 400) < 3) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
    if ((uVar1 & 0xfffffc00) == 0xdc00) {
      if (*(int *)(param_1 + 400) == 2) {
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
      }
    }
    else if (-1 < (int)uVar1) {
      (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188));
    }
    local_14 = (ushort)uVar1;
  }
  else {
    local_14 = FUN_143a8e4f0(param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x198));
    if ((local_14 & 0xfc00) == 0xdc00) {
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    }
  }
  return local_14;
}



// FUNCTION 143bde350 FUN_143bde350 body=100 status=ok
// SIG undefined FUN_143bde350(void)

undefined2 FUN_143bde350(longlong param_1)

{
  uint uVar1;
  undefined2 local_18;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
  if (((uVar1 & 0xfffffc00) != 0xdc00) && (-1 < (int)uVar1)) {
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188));
  }
  local_18 = (undefined2)uVar1;
  return local_18;
}



// FUNCTION 143bde3c0 FUN_143bde3c0 body=556 status=ok
// SIG undefined FUN_143bde3c0(void)

undefined4 FUN_143bde3c0(longlong param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  
LAB_143bde3d3:
  while (*(int *)(param_1 + 400) == 0) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
    *param_2 = uVar3;
    if ((int)*param_2 < 0) {
      return 0xc0;
    }
    cVar1 = FUN_143bde710(*param_2);
    if (cVar1 == '\0') goto LAB_143bde5b6;
    cVar1 = FUN_143bde7d0(*param_2);
    if (cVar1 == '\0') {
      uVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x40))(*(undefined8 *)(param_1 + 0x188))
      ;
      cVar1 = FUN_143bde690(uVar4);
      if (cVar1 == '\0') goto LAB_143bde5b6;
    }
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188));
    cVar1 = FUN_143bdeac0(param_1,param_3);
    if (cVar1 == '\0') {
      *param_2 = 0xffffffff;
      return 0xc0;
    }
  }
  if ((*(int *)(param_1 + 400) == 2) && (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x19c))) {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
    *param_2 = uVar3;
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
  }
  else {
    if ((*(int *)(param_1 + 400) < 3) ||
       (iVar5 = FUN_143a904f0(param_1 + 0x1a8), *(int *)(param_1 + 0x198) == iVar5)) {
      FUN_143bdf660(param_1);
      goto LAB_143bde3d3;
    }
    uVar4 = *(undefined4 *)(param_1 + 0x198);
    *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + 1;
    uVar2 = FUN_143a8e4f0(param_1 + 0x1a8,uVar4);
    *param_2 = (uint)uVar2;
  }
LAB_143bde5b6:
  return *(undefined4 *)
          (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
          (longlong)
          (int)((*param_2 & 0x1f) +
               (uint)*(ushort *)(**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2)
               * 4) * 4);
}



// FUNCTION 143bde600 FUN_143bde600 body=136 status=ok
// SIG undefined FUN_143bde600(void)

undefined4 FUN_143bde600(longlong param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
  *param_2 = uVar1;
  if ((int)*param_2 < 0) {
    uVar2 = 0xc0;
  }
  else {
    uVar2 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
             (longlong)
             (int)((*param_2 & 0x1f) +
                  (uint)*(ushort *)
                         (**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) * 4) *
             4);
  }
  return uVar2;
}



// FUNCTION 143bde690 FUN_143bde690 body=122 status=ok
// SIG undefined FUN_143bde690(void)

undefined1 FUN_143bde690(int param_1)

{
  undefined1 local_18;
  
  if (((param_1 < 0x300) || ((byte)(&DAT_145d1d0b0)[param_1 >> 5] == 0)) ||
     ((*(uint *)(&DAT_145d1e0b0 + (longlong)(int)(uint)(byte)(&DAT_145d1d0b0)[param_1 >> 5] * 4) &
      1 << ((byte)param_1 & 0x1f)) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143bde710 FUN_143bde710 body=122 status=ok
// SIG undefined FUN_143bde710(void)

undefined1 FUN_143bde710(int param_1)

{
  undefined1 local_18;
  
  if (((param_1 < 0xc0) || ((byte)(&DAT_145d1d8b0)[param_1 >> 5] == 0)) ||
     ((*(uint *)(&DAT_145d1e1c0 + (longlong)(int)(uint)(byte)(&DAT_145d1d8b0)[param_1 >> 5] * 4) &
      1 << ((byte)param_1 & 0x1f)) == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143bde790 FUN_143bde790 body=52 status=ok
// SIG undefined FUN_143bde790(void)

undefined1 FUN_143bde790(short param_1)

{
  undefined1 local_18;
  
  if ((param_1 == -0x7e7e) || (param_1 == -0x7e7c)) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143bde7d0 FUN_143bde7d0 body=43 status=ok
// SIG undefined FUN_143bde7d0(void)

bool FUN_143bde7d0(uint param_1)

{
  return (param_1 & 0x1fff01) == 0xf01;
}



// FUNCTION 143bde800 FUN_143bde800 body=631 status=ok
// SIG undefined FUN_143bde800(void)

uint FUN_143bde800(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int local_10;
  int local_c;
  
  while( true ) {
    while (*(int *)(param_1 + 400) != 0) {
      if ((*(int *)(param_1 + 400) == 2) && (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x19c))
         ) {
        uVar2 = FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
        if (uVar2 < 0x10000) {
          local_10 = 1;
        }
        else {
          local_10 = 2;
        }
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + local_10;
        return uVar2;
      }
      if ((2 < *(int *)(param_1 + 400)) &&
         (iVar5 = FUN_143a904f0(param_1 + 0x1a8), *(int *)(param_1 + 0x198) != iVar5)) {
        uVar2 = FUN_143a8e3e0(param_1 + 0x1a8,*(undefined4 *)(param_1 + 0x198));
        if (uVar2 < 0x10000) {
          local_c = 1;
        }
        else {
          local_c = 2;
        }
        *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) + local_c;
        return uVar2;
      }
      FUN_143bdf660(param_1);
    }
    uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    cVar1 = FUN_143bde710(uVar2);
    if (cVar1 == '\0') break;
    cVar1 = FUN_143bde7d0(uVar2);
    if (cVar1 == '\0') {
      uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x40))(*(undefined8 *)(param_1 + 0x188))
      ;
      cVar1 = FUN_143bde690(uVar3);
      if (cVar1 == '\0') break;
    }
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188));
    cVar1 = FUN_143bdeac0(param_1,param_2);
    if (cVar1 == '\0') {
      return 0xffffffff;
    }
  }
  if ((uVar2 & 0xfffffc00) != 0xd800) {
    return uVar2;
  }
  uVar4 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
  if ((uVar4 & 0xfffffc00) != 0xdc00) {
    if ((int)uVar4 < 0) {
      return uVar2;
    }
    (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188));
    return uVar2;
  }
  return uVar2 * 0x400 + -0x35fdc00 + uVar4;
}



// FUNCTION 143bdea90 FUN_143bdea90 body=36 status=ok
// SIG undefined FUN_143bdea90(void)

void FUN_143bdea90(longlong param_1)

{
  FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
  return;
}



// FUNCTION 143bdeac0 FUN_143bdeac0 body=803 status=ok
// SIG undefined FUN_143bdeac0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143bdeac0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined1 auStack_88 [32];
  byte local_68;
  byte local_67;
  byte local_66;
  int local_64;
  byte local_60;
  undefined2 local_5c;
  byte local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    uVar3 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1)
    ;
    *(undefined4 *)(param_1 + 0x198) = uVar3;
    FUN_143a8ac30(local_40);
    local_67 = 0;
    do {
      local_64 = FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
      if (local_64 < 0) break;
      local_5c = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a0),local_64);
      local_68 = (byte)((ushort)local_5c >> 8);
      if ((local_68 == 0) && (cVar1 = FUN_143a903a0(local_40), cVar1 == '\0')) {
        FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
        break;
      }
      FUN_143a8e0c0(local_40,local_64);
      if ((local_68 != 0) &&
         ((local_68 < local_67 || (cVar1 = FUN_143bde790(local_5c), cVar1 != '\0'))))
      goto LAB_143bdec08;
      local_67 = (byte)local_5c;
    } while ((byte)local_5c != 0);
    iVar4 = FUN_143a904f0(local_40);
    *(int *)(param_1 + 0x19c) = iVar4 + *(int *)(param_1 + 0x198);
    iVar4 = FUN_143a904f0(local_40);
    local_50 = *(longlong *)(param_1 + 0x188);
    (**(code **)(local_50 + 0x28))(*(undefined8 *)(param_1 + 0x188),-iVar4,1);
    *(undefined4 *)(param_1 + 400) = 2;
    local_66 = 1;
    FUN_143a8dc60(local_40);
    uVar5 = (ulonglong)local_66;
  }
  else {
    uVar5 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar5;
LAB_143bdec08:
  local_64 = FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
  if (local_64 < 0) {
LAB_143bdec71:
    cVar1 = FUN_143bdedf0(param_1,local_40,param_2);
    if (cVar1 == '\0') {
      local_58 = 0;
      FUN_143a8dc60(local_40);
      return (ulonglong)local_58;
    }
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x198);
    iVar4 = FUN_143a904f0(local_40);
    *(int *)(param_1 + 0x19c) = iVar4 + *(int *)(param_1 + 0x198);
    *(undefined4 *)(param_1 + 400) = 3;
    *(undefined4 *)(param_1 + 0x198) = 0;
    local_60 = 1;
    FUN_143a8dc60(local_40);
    return (ulonglong)local_60;
  }
  uVar2 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a0),local_64);
  if (uVar2 < 0x100) {
    FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
    goto LAB_143bdec71;
  }
  FUN_143a8e0c0(local_40,local_64);
  goto LAB_143bdec08;
}



// FUNCTION 143bdedf0 FUN_143bdedf0 body=77 status=ok
// SIG undefined FUN_143bdedf0(void)

void FUN_143bdedf0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_143b23350(*(undefined8 *)(param_1 + 0x1a0),param_2,param_1 + 0x1a8,param_3);
  FUN_143a8b110(*param_3);
  return;
}



// FUNCTION 143bdee40 FUN_143bdee40 body=720 status=ok
// SIG undefined FUN_143bdee40(void)

uint FUN_143bdee40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  uint local_14;
  int local_10;
  int local_c;
  
  while( true ) {
    while (*(int *)(param_1 + 400) == 1) {
      uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))(*(undefined8 *)(param_1 + 0x188))
      ;
      if ((int)uVar2 < 0) {
        *(undefined4 *)(param_1 + 0x198) = 0;
        *(undefined4 *)(param_1 + 0x194) = 0;
        *(undefined4 *)(param_1 + 400) = 2;
        return 0xffffffff;
      }
      cVar1 = FUN_143bde690(uVar2);
      if (cVar1 == '\0') {
        return uVar2;
      }
      local_14 = 0xffffffff;
      cVar1 = FUN_143bde7d0(uVar2);
      if (cVar1 == '\0') {
        local_14 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))
                             (*(undefined8 *)(param_1 + 0x188));
        cVar1 = FUN_143bde710(local_14);
        if (cVar1 == '\0') {
          if ((uVar2 & 0xfffffc00) == 0xdc00) {
            if ((int)local_14 < 0) {
              local_14 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x50))
                                   (*(undefined8 *)(param_1 + 0x188));
            }
            if ((local_14 & 0xfffffc00) == 0xd800) {
              return local_14 * 0x400 + -0x35fdc00 + uVar2;
            }
          }
          if ((int)local_14 < 0) {
            return uVar2;
          }
          (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
          return uVar2;
        }
      }
      (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
      if (-1 < (int)local_14) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x48))(*(undefined8 *)(param_1 + 0x188));
      }
      cVar1 = FUN_143bdf150(param_1,param_2);
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
    }
    if ((*(int *)(param_1 + 400) == 2) && (*(int *)(param_1 + 0x198) != *(int *)(param_1 + 0x194)))
    {
      uVar2 = FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
      if (uVar2 < 0x10000) {
        local_10 = 1;
      }
      else {
        local_10 = 2;
      }
      *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) - local_10;
      return uVar2;
    }
    if ((2 < *(int *)(param_1 + 400)) && (*(int *)(param_1 + 0x198) != 0)) break;
    FUN_143bdf530(param_1);
  }
  uVar2 = FUN_143a8e3e0(param_1 + 0x1a8,*(int *)(param_1 + 0x198) + -1);
  if (uVar2 < 0x10000) {
    local_c = 1;
  }
  else {
    local_c = 2;
  }
  *(int *)(param_1 + 0x198) = *(int *)(param_1 + 0x198) - local_c;
  return uVar2;
}



// FUNCTION 143bdf120 FUN_143bdf120 body=36 status=ok
// SIG undefined FUN_143bdf120(void)

void FUN_143bdf120(longlong param_1)

{
  FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
  return;
}



// FUNCTION 143bdf150 FUN_143bdf150 body=862 status=ok
// SIG undefined FUN_143bdf150(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143bdf150(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  byte local_68;
  byte local_67;
  ushort local_64;
  byte local_60;
  int local_5c;
  byte local_58;
  byte local_57;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  uVar2 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1);
  *(undefined4 *)(param_1 + 0x198) = uVar2;
  FUN_143a8ac30(local_40);
  local_68 = 0;
  do {
    local_5c = FUN_143a93f20(*(undefined8 *)(param_1 + 0x188));
    if (local_5c < 0) break;
    local_64 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a0),local_5c);
    local_67 = (byte)local_64;
    if (((byte)local_64 == 0) && (cVar1 = FUN_143a903a0(local_40), cVar1 == '\0')) {
      FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
      break;
    }
    FUN_143a8e0c0(local_40,local_5c);
    if ((local_67 != 0) &&
       (((local_68 != 0 && (local_68 < local_67)) ||
        (cVar1 = FUN_143bde790(local_64), cVar1 != '\0')))) goto LAB_143bdf29e;
    local_68 = (byte)(local_64 >> 8);
  } while (local_68 != 0);
  iVar3 = FUN_143a904f0(local_40);
  *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198) - iVar3;
  uVar2 = FUN_143a904f0(local_40);
  local_50 = *(longlong *)(param_1 + 0x188);
  (**(code **)(local_50 + 0x28))(*(undefined8 *)(param_1 + 0x188),uVar2,1);
  *(undefined4 *)(param_1 + 400) = 2;
  local_60 = 1;
  FUN_143a8dc60(local_40);
  return (ulonglong)local_60;
LAB_143bdf29e:
  if ((local_64 < 0x100) ||
     (local_5c = FUN_143a93f20(*(undefined8 *)(param_1 + 0x188)), local_5c < 0)) goto LAB_143bdf317;
  local_64 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a0),local_5c);
  if (local_64 == 0) {
    FUN_143a93e90(*(undefined8 *)(param_1 + 0x188));
LAB_143bdf317:
    FUN_143bdd3c0(local_40);
    cVar1 = FUN_143bdedf0(param_1,local_40,param_2);
    if (cVar1 == '\0') {
      local_57 = 0;
      FUN_143a8dc60(local_40);
    }
    else {
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x198);
      iVar3 = FUN_143a904f0(local_40);
      *(int *)(param_1 + 0x194) = *(int *)(param_1 + 0x198) - iVar3;
      *(undefined4 *)(param_1 + 400) = 4;
      uVar2 = FUN_143a904f0(param_1 + 0x1a8);
      *(undefined4 *)(param_1 + 0x198) = uVar2;
      local_58 = 1;
      FUN_143a8dc60(local_40);
      local_57 = local_58;
    }
    return (ulonglong)local_57;
  }
  FUN_143a8e0c0(local_40,local_5c);
  goto LAB_143bdf29e;
}



// FUNCTION 143bdf4b0 FUN_143bdf4b0 body=62 status=ok
// SIG undefined FUN_143bdf4b0(void)

void FUN_143bdf4b0(longlong param_1,undefined4 param_2)

{
  FUN_143bdf4f0(param_1,param_2);
  *(undefined4 *)(param_1 + 0x194) = param_2;
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}



// FUNCTION 143bdf4f0 FUN_143bdf4f0 body=62 status=ok
// SIG undefined FUN_143bdf4f0(void)

void FUN_143bdf4f0(longlong param_1,undefined4 param_2)

{
  FUN_143bd9080(param_1);
  (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))(*(undefined8 *)(param_1 + 0x188),param_2,0);
  return;
}



// FUNCTION 143bdf530 FUN_143bdf530 body=291 status=ok
// SIG undefined FUN_143bdf530(void)

void FUN_143bdf530(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 400) == 0) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1)
    ;
    *(undefined4 *)(param_1 + 0x198) = uVar1;
    *(undefined4 *)(param_1 + 0x19c) = uVar1;
    if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x194)) {
      *(undefined4 *)(param_1 + 400) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 400) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 400) != 2) {
      if (*(int *)(param_1 + 400) == 3) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))
                  (*(undefined8 *)(param_1 + 0x188),
                   *(int *)(param_1 + 0x194) - *(int *)(param_1 + 0x19c),1);
      }
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 0x194);
    }
    *(undefined4 *)(param_1 + 400) = 1;
  }
  return;
}



// FUNCTION 143bdf660 FUN_143bdf660 body=291 status=ok
// SIG undefined FUN_143bdf660(void)

void FUN_143bdf660(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 400) == 1) {
    uVar1 = (**(code **)(*(longlong *)(param_1 + 0x188) + 0x20))(*(undefined8 *)(param_1 + 0x188),1)
    ;
    *(undefined4 *)(param_1 + 0x198) = uVar1;
    *(undefined4 *)(param_1 + 0x194) = uVar1;
    if (*(int *)(param_1 + 0x198) == *(int *)(param_1 + 0x19c)) {
      *(undefined4 *)(param_1 + 400) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 400) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 400) != 2) {
      if (*(int *)(param_1 + 400) == 4) {
        (**(code **)(*(longlong *)(param_1 + 0x188) + 0x28))
                  (*(undefined8 *)(param_1 + 0x188),
                   *(int *)(param_1 + 0x19c) - *(int *)(param_1 + 0x194),1);
      }
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x19c);
    }
    *(undefined4 *)(param_1 + 400) = 0;
  }
  return;
}



// FUNCTION 143bdf790 ~CMFCRibbonRichEditCtrl body=58 status=ok
// SIG void ~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl * this)

/* Library Function - Single Match
    public: virtual __cdecl CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl *this)

{
  *(undefined ***)this = icu_53::FCDUTF16CollationIterator::vftable;
  FUN_143a8dc60(this + 0x1c8);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(this);
  return;
}



// FUNCTION 143bdf7d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UTF16CollationIterator::vftable;
  FUN_143bd6570(param_1);
  return;
}



// FUNCTION 143bdf800 FUN_143bdf800 body=490 status=ok
// SIG undefined FUN_143bdf800(void)

ulonglong FUN_143bdf800(longlong param_1,longlong param_2)

{
  char cVar1;
  ulonglong uVar2;
  byte local_27;
  
  cVar1 = FUN_143bd6620(param_1,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else if (*(char *)(param_1 + 0x1f0) == *(char *)(param_2 + 0x1f0)) {
    if ((*(char *)(param_1 + 0x1f0) == '\0') &&
       ((*(longlong *)(param_1 + 0x188) == *(longlong *)(param_1 + 0x1a8)) !=
        (*(longlong *)(param_2 + 0x188) == *(longlong *)(param_2 + 0x1a8)))) {
      uVar2 = 0;
    }
    else if ((*(char *)(param_1 + 0x1f0) == '\0') &&
            (*(longlong *)(param_1 + 0x188) != *(longlong *)(param_1 + 0x1a8))) {
      if ((*(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1a0) >> 1 ==
           *(longlong *)(param_2 + 0x1a8) - *(longlong *)(param_2 + 0x1a0) >> 1) &&
         (*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 1 ==
          *(longlong *)(param_2 + 400) - *(longlong *)(param_2 + 0x188) >> 1)) {
        local_27 = 1;
      }
      else {
        local_27 = 0;
      }
      uVar2 = (ulonglong)local_27;
    }
    else {
      uVar2 = (ulonglong)
              (*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x1a0) >> 1 ==
              *(longlong *)(param_2 + 400) - *(longlong *)(param_2 + 0x1a0) >> 1);
    }
  }
  else {
    uVar2 = (ulonglong)(uint3)(*(char *)(param_1 + 0x1f0) >> 7) << 8;
  }
  return uVar2;
}



// FUNCTION 143bdf9f0 FUN_143bdf9f0 body=137 status=ok
// SIG undefined FUN_143bdf9f0(void)

bool FUN_143bdf9f0(longlong param_1,longlong param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_143bd6620(param_1,param_2);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    bVar2 = *(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 1 ==
            *(longlong *)(param_2 + 400) - *(longlong *)(param_2 + 0x188) >> 1;
  }
  return bVar2;
}



// FUNCTION 143bdfa80 FUN_143bdfa80 body=61 status=ok
// SIG undefined FUN_143bdfa80(void)

void FUN_143bdfa80(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143be08b0(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bdfac0 FUN_143bdfac0 body=225 status=ok
// SIG undefined FUN_143bdfac0(void)

void FUN_143bdfac0(longlong param_1,int param_2)

{
  ushort *puVar1;
  int local_res10;
  
  local_res10 = param_2;
  while ((0 < local_res10 && (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188)))) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
    *(ushort **)(param_1 + 400) = puVar1;
    local_res10 = local_res10 + -1;
    if (((*puVar1 & 0xfc00) == 0xdc00) &&
       ((*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188) &&
        ((*(ushort *)(*(longlong *)(param_1 + 400) + -2) & 0xfc00) == 0xd800)))) {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + -2;
    }
  }
  return;
}



// FUNCTION 143bdfbb0 FUN_143bdfbb0 body=61 status=ok
// SIG undefined FUN_143bdfbb0(void)

void FUN_143bdfbb0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143be01f0(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143bdfbf0 FUN_143bdfbf0 body=271 status=ok
// SIG undefined FUN_143bdfbf0(void)

void FUN_143bdfbf0(longlong param_1,int param_2)

{
  ushort uVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) break;
    uVar1 = **(ushort **)(param_1 + 400);
    if ((uVar1 == 0) && (*(longlong *)(param_1 + 0x198) == 0)) {
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 400);
      return;
    }
    *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
    local_res10 = local_res10 + -1;
    if ((((uVar1 & 0xfc00) == 0xd800) &&
        (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198))) &&
       ((**(ushort **)(param_1 + 400) & 0xfc00) == 0xdc00)) {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
    }
  }
  return;
}



// FUNCTION 143bdfd00 FUN_143bdfd00 body=103 status=ok
// SIG undefined FUN_143bdfd00(void)

bool FUN_143bdfd00(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = *(longlong *)(param_1 + 0x198) == 0;
  if (bVar2) {
    lVar1 = *(longlong *)(param_1 + 400) + -2;
    *(longlong *)(param_1 + 400) = lVar1;
    *(longlong *)(param_1 + 0x1b8) = lVar1;
    *(longlong *)(param_1 + 0x198) = lVar1;
  }
  return bVar2;
}



// FUNCTION 143bdfd70 FUN_143bdfd70 body=87 status=ok
// SIG undefined FUN_143bdfd70(void)

bool FUN_143bdfd70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  bVar2 = *(longlong *)(param_1 + 0x198) == 0;
  if (bVar2) {
    lVar1 = *(longlong *)(param_1 + 400) + -2;
    *(longlong *)(param_1 + 400) = lVar1;
    *(longlong *)(param_1 + 0x198) = lVar1;
  }
  return bVar2;
}



// FUNCTION 143bdfdd0 FUN_143bdfdd0 body=168 status=ok
// SIG undefined FUN_143bdfdd0(void)

longlong FUN_143bdfdd0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(char *)(param_1 + 0x1f0) == '\0') &&
     (*(longlong *)(param_1 + 0x188) != *(longlong *)(param_1 + 0x1a8))) {
    if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x188)) {
      lVar1 = *(longlong *)(param_1 + 0x1a8) - *(longlong *)(param_1 + 0x1a0) >> 1;
    }
    else {
      lVar1 = *(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a0) >> 1;
    }
  }
  else {
    lVar1 = *(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x1a0) >> 1;
  }
  return lVar1;
}



// FUNCTION 143bdfe80 FUN_143bdfe80 body=36 status=ok
// SIG undefined FUN_143bdfe80(void)

longlong FUN_143bdfe80(longlong param_1)

{
  return *(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 1;
}



// FUNCTION 143bdfeb0 FUN_143bdfeb0 body=111 status=ok
// SIG undefined FUN_143bdfeb0(void)

ushort FUN_143bdfeb0(longlong param_1)

{
  ushort uVar1;
  
  if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) {
    uVar1 = 0;
  }
  else {
    uVar1 = **(ushort **)(param_1 + 400);
    if ((uVar1 & 0xfc00) == 0xdc00) {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
    }
  }
  return uVar1;
}



// FUNCTION 143bdff20 FUN_143bdff20 body=535 status=ok
// SIG undefined FUN_143bdff20(void)

undefined4 FUN_143bdff20(longlong param_1,uint *param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  do {
    if ('\0' < *(char *)(param_1 + 0x1f0)) {
      if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) {
        *param_2 = 0xffffffff;
        uVar2 = 0xc0;
      }
      else {
        *param_2 = (uint)**(ushort **)(param_1 + 400);
        *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
        cVar1 = FUN_143bde710(*param_2);
        if ((cVar1 != '\0') &&
           ((cVar1 = FUN_143bde7d0(*param_2), cVar1 != '\0' ||
            ((*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198) &&
             (cVar1 = FUN_143bde690(**(undefined2 **)(param_1 + 400)), cVar1 != '\0')))))) {
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + -2;
          cVar1 = FUN_143be05d0(param_1,param_3);
          if (cVar1 == '\0') {
            *param_2 = 0xffffffff;
            return 0xc0;
          }
          *param_2 = (uint)**(ushort **)(param_1 + 400);
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
        }
LAB_143be00f9:
        uVar2 = *(undefined4 *)
                 (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                 (longlong)
                 (int)((*param_2 & 0x1f) +
                      (uint)*(ushort *)
                             (**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) * 4
                      ) * 4);
      }
      return uVar2;
    }
    if ((*(char *)(param_1 + 0x1f0) == '\0') &&
       (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198))) {
      *param_2 = (uint)**(ushort **)(param_1 + 400);
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
      goto LAB_143be00f9;
    }
    FUN_143be0ff0(param_1);
  } while( true );
}



// FUNCTION 143be0140 FUN_143be0140 body=171 status=ok
// SIG undefined FUN_143be0140(void)

undefined4 FUN_143be0140(longlong param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) {
    *param_2 = 0xffffffff;
    uVar1 = 0xc0;
  }
  else {
    *param_2 = (uint)**(ushort **)(param_1 + 400);
    *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
    uVar1 = *(undefined4 *)
             (*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
             (longlong)
             (int)((*param_2 & 0x1f) +
                  (uint)*(ushort *)
                         (**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) * 4) *
             4);
  }
  return uVar1;
}



// FUNCTION 143be01f0 FUN_143be01f0 body=670 status=ok
// SIG undefined FUN_143be01f0(void)

uint FUN_143be01f0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  longlong lVar3;
  uint local_14;
  
  do {
    if ('\0' < *(char *)(param_1 + 0x1f0)) {
      if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) {
        local_14 = 0xffffffff;
      }
      else {
        local_14 = (uint)**(ushort **)(param_1 + 400);
        *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
        cVar2 = FUN_143bde710(local_14);
        if (cVar2 == '\0') {
          if ((local_14 == 0) && (*(longlong *)(param_1 + 0x198) == 0)) {
            lVar3 = *(longlong *)(param_1 + 400) + -2;
            *(longlong *)(param_1 + 400) = lVar3;
            *(longlong *)(param_1 + 0x1b8) = lVar3;
            *(longlong *)(param_1 + 0x198) = lVar3;
            return 0xffffffff;
          }
        }
        else {
          cVar2 = FUN_143bde7d0(local_14);
          if ((cVar2 != '\0') ||
             ((*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198) &&
              (cVar2 = FUN_143bde690(**(undefined2 **)(param_1 + 400)), cVar2 != '\0')))) {
            *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + -2;
            cVar2 = FUN_143be05d0(param_1,param_2);
            if (cVar2 == '\0') {
              return 0xffffffff;
            }
            local_14 = (uint)**(ushort **)(param_1 + 400);
            *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
          }
        }
LAB_143be0409:
        if ((((local_14 & 0xfffffc00) == 0xd800) &&
            (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198))) &&
           (uVar1 = **(ushort **)(param_1 + 400), (uVar1 & 0xfc00) == 0xdc00)) {
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
          local_14 = local_14 * 0x400 + -0x35fdc00 + (uint)uVar1;
        }
      }
      return local_14;
    }
    if ((*(char *)(param_1 + 0x1f0) == '\0') &&
       (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198))) {
      local_14 = (uint)**(ushort **)(param_1 + 400);
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
      goto LAB_143be0409;
    }
    FUN_143be0ff0(param_1);
  } while( true );
}



// FUNCTION 143be04a0 FUN_143be04a0 body=287 status=ok
// SIG undefined FUN_143be04a0(void)

uint FUN_143be04a0(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  
  if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x198)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)**(ushort **)(param_1 + 400);
    if ((uVar2 == 0) && (*(longlong *)(param_1 + 0x198) == 0)) {
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 400);
      uVar2 = 0xffffffff;
    }
    else {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
      if (((uVar2 & 0xfffffc00) == 0xd800) &&
         ((*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x198) &&
          (uVar1 = **(ushort **)(param_1 + 400), (uVar1 & 0xfc00) == 0xdc00)))) {
        *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
        uVar2 = uVar2 * 0x400 + -0x35fdc00 + (uint)uVar1;
      }
    }
  }
  return uVar2;
}



// FUNCTION 143be05d0 FUN_143be05d0 body=477 status=ok
// SIG undefined FUN_143be05d0(void)

undefined8 FUN_143be05d0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  byte bVar2;
  undefined2 uVar3;
  ushort uVar4;
  byte local_27;
  byte local_24;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return 0;
  }
  local_20 = *(longlong *)(param_1 + 400);
  local_27 = 0;
  do {
    local_18 = local_20;
    uVar3 = FUN_143b26430(*(undefined8 *)(param_1 + 0x1c0),&local_20,
                          *(undefined8 *)(param_1 + 0x1b8));
    bVar2 = (byte)((ushort)uVar3 >> 8);
    if ((bVar2 == 0) && (local_18 != *(longlong *)(param_1 + 400))) {
      *(longlong *)(param_1 + 0x1b0) = local_18;
      *(longlong *)(param_1 + 0x198) = local_18;
      goto LAB_143be079a;
    }
    if ((bVar2 != 0) && ((bVar2 < local_27 || (cVar1 = FUN_143bde790(uVar3), cVar1 != '\0'))))
    goto LAB_143be06be;
    local_24 = (byte)uVar3;
    local_27 = local_24;
  } while ((local_20 != *(longlong *)(param_1 + 0x1b8)) && (local_24 != 0));
  *(longlong *)(param_1 + 0x1b0) = local_20;
  *(longlong *)(param_1 + 0x198) = local_20;
  goto LAB_143be079a;
  while (uVar4 = FUN_143b26430(*(undefined8 *)(param_1 + 0x1c0),&local_20,
                               *(undefined8 *)(param_1 + 0x1b8)), 0xff < uVar4) {
LAB_143be06be:
    local_18 = local_20;
    if (local_20 == *(longlong *)(param_1 + 0x1b8)) break;
  }
  cVar1 = FUN_143be07b0(param_1,*(undefined8 *)(param_1 + 400),local_18,param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x188);
LAB_143be079a:
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  return 1;
}



// FUNCTION 143be07b0 FUN_143be07b0 body=243 status=ok
// SIG undefined FUN_143be07b0(void)

longlong FUN_143be07b0(longlong param_1,longlong param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_143b237f0(*(undefined8 *)(param_1 + 0x1c0),param_2,param_3,param_1 + 0x1c8,
                (int)(param_3 - param_2 >> 1),param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    *(longlong *)(param_1 + 0x1a8) = param_2;
    *(longlong *)(param_1 + 0x1b0) = param_3;
    uVar4 = FUN_143a8fe10(param_1 + 0x1c8);
    *(undefined8 *)(param_1 + 0x188) = uVar4;
    iVar2 = FUN_143a904f0(param_1 + 0x1c8);
    lVar3 = *(longlong *)(param_1 + 0x188) + (longlong)iVar2 * 2;
    *(longlong *)(param_1 + 0x198) = lVar3;
    lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
  }
  else {
    lVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return lVar3;
}



// FUNCTION 143be08b0 FUN_143be08b0 body=575 status=ok
// SIG undefined FUN_143be08b0(void)

uint FUN_143be08b0(longlong param_1,undefined8 param_2)

{
  ushort uVar1;
  char cVar2;
  ushort *puVar3;
  uint local_24;
  
  do {
    if (*(char *)(param_1 + 0x1f0) < '\0') {
      if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x188)) {
        local_24 = 0xffffffff;
      }
      else {
        puVar3 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
        *(ushort **)(param_1 + 400) = puVar3;
        local_24 = (uint)*puVar3;
        cVar2 = FUN_143bde690(local_24);
        if ((cVar2 != '\0') &&
           ((cVar2 = FUN_143bde7d0(local_24), cVar2 != '\0' ||
            ((*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188) &&
             (cVar2 = FUN_143bde710(*(undefined2 *)(*(longlong *)(param_1 + 400) + -2)),
             cVar2 != '\0')))))) {
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + 2;
          cVar2 = FUN_143be0bf0(param_1,param_2);
          if (cVar2 == '\0') {
            return 0xffffffff;
          }
          puVar3 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
          *(ushort **)(param_1 + 400) = puVar3;
          local_24 = (uint)*puVar3;
        }
LAB_143be0a69:
        if ((((local_24 & 0xfffffc00) == 0xdc00) &&
            (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188))) &&
           (uVar1 = *(ushort *)(*(longlong *)(param_1 + 400) + -2), (uVar1 & 0xfc00) == 0xd800)) {
          *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + -2;
          local_24 = (uint)uVar1 * 0x400 + -0x35fdc00 + local_24;
        }
      }
      return local_24;
    }
    if ((*(char *)(param_1 + 0x1f0) == '\0') &&
       (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188))) {
      puVar3 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
      *(ushort **)(param_1 + 400) = puVar3;
      local_24 = (uint)*puVar3;
      goto LAB_143be0a69;
    }
    FUN_143be0ec0(param_1);
  } while( true );
}



// FUNCTION 143be0b00 FUN_143be0b00 body=235 status=ok
// SIG undefined FUN_143be0b00(void)

uint FUN_143be0b00(longlong param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  
  if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x188)) {
    uVar2 = 0xffffffff;
  }
  else {
    puVar3 = (ushort *)(*(longlong *)(param_1 + 400) + -2);
    *(ushort **)(param_1 + 400) = puVar3;
    uVar2 = (uint)*puVar3;
    if ((((uVar2 & 0xfffffc00) == 0xdc00) &&
        (*(longlong *)(param_1 + 400) != *(longlong *)(param_1 + 0x188))) &&
       (uVar1 = *(ushort *)(*(longlong *)(param_1 + 400) + -2), (uVar1 & 0xfc00) == 0xd800)) {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 400) + -2;
      uVar2 = (uint)uVar1 * 0x400 + -0x35fdc00 + uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 143be0bf0 FUN_143be0bf0 body=502 status=ok
// SIG undefined FUN_143be0bf0(void)

undefined8 FUN_143be0bf0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  byte local_28;
  ushort local_24;
  longlong local_20;
  longlong local_18;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return 0;
  }
  local_20 = *(longlong *)(param_1 + 400);
  local_28 = 0;
  do {
    local_18 = local_20;
    local_24 = FUN_143b26630(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1a0),
                             &local_20);
    if (((byte)local_24 == 0) && (local_18 != *(longlong *)(param_1 + 400))) {
      *(longlong *)(param_1 + 0x1a8) = local_18;
      *(longlong *)(param_1 + 0x188) = local_18;
      goto LAB_143be0dd3;
    }
    if (((byte)local_24 != 0) &&
       (((local_28 != 0 && (local_28 < (byte)local_24)) ||
        (cVar1 = FUN_143bde790(local_24), cVar1 != '\0')))) goto LAB_143be0ce4;
    local_28 = (byte)(local_24 >> 8);
  } while ((local_20 != *(longlong *)(param_1 + 0x1a0)) && (local_28 != 0));
  *(longlong *)(param_1 + 0x1a8) = local_20;
  *(longlong *)(param_1 + 0x188) = local_20;
  goto LAB_143be0dd3;
  while (local_24 = FUN_143b26630(*(undefined8 *)(param_1 + 0x1c0),*(undefined8 *)(param_1 + 0x1a0),
                                  &local_20), local_24 != 0) {
LAB_143be0ce4:
    local_18 = local_20;
    if ((local_24 < 0x100) || (local_20 == *(longlong *)(param_1 + 0x1a0))) break;
  }
  cVar1 = FUN_143be07b0(param_1,local_18,*(undefined8 *)(param_1 + 400),param_2);
  if (cVar1 == '\0') {
    return 0;
  }
  *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x198);
LAB_143be0dd3:
  *(undefined1 *)(param_1 + 0x1f0) = 0;
  return 1;
}



// FUNCTION 143be0df0 FUN_143be0df0 body=143 status=ok
// SIG undefined FUN_143be0df0(void)

void FUN_143be0df0(longlong param_1,int param_2)

{
  longlong lVar1;
  
  FUN_143bd9080(param_1);
  lVar1 = *(longlong *)(param_1 + 0x1a0) + (longlong)param_2 * 2;
  *(longlong *)(param_1 + 400) = lVar1;
  *(longlong *)(param_1 + 0x1a8) = lVar1;
  *(longlong *)(param_1 + 0x188) = lVar1;
  *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b8);
  *(undefined1 *)(param_1 + 0x1f0) = 1;
  return;
}



// FUNCTION 143be0e80 FUN_143be0e80 body=61 status=ok
// SIG undefined FUN_143be0e80(void)

void FUN_143be0e80(longlong param_1,int param_2)

{
  FUN_143bd9080(param_1);
  *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 0x188) + (longlong)param_2 * 2;
  return;
}



// FUNCTION 143be0ec0 FUN_143be0ec0 body=291 status=ok
// SIG undefined FUN_143be0ec0(void)

void FUN_143be0ec0(longlong param_1)

{
  if (*(char *)(param_1 + 0x1f0) < '\x01') {
    if (*(longlong *)(param_1 + 0x188) != *(longlong *)(param_1 + 0x1a8)) {
      *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x198);
    }
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1a0);
    *(undefined1 *)(param_1 + 0x1f0) = 0xff;
  }
  else {
    *(undefined8 *)(param_1 + 0x1b0) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b0);
    if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x1a8)) {
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1a0);
      *(undefined1 *)(param_1 + 0x1f0) = 0xff;
    }
    else {
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
  }
  return;
}



// FUNCTION 143be0ff0 FUN_143be0ff0 body=291 status=ok
// SIG undefined FUN_143be0ff0(void)

void FUN_143be0ff0(longlong param_1)

{
  if (*(char *)(param_1 + 0x1f0) < '\0') {
    *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 400);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1a8);
    if (*(longlong *)(param_1 + 400) == *(longlong *)(param_1 + 0x1b0)) {
      *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b8);
      *(undefined1 *)(param_1 + 0x1f0) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x1f0) = 0;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x188) != *(longlong *)(param_1 + 0x1a8)) {
      *(undefined8 *)(param_1 + 0x1a8) = *(undefined8 *)(param_1 + 0x1b0);
      *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_1 + 0x1a8);
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x188);
    }
    *(undefined8 *)(param_1 + 0x198) = *(undefined8 *)(param_1 + 0x1b8);
    *(undefined1 *)(param_1 + 0x1f0) = 1;
  }
  return;
}



// FUNCTION 143be1120 ~CMFCRibbonRichEditCtrl body=58 status=ok
// SIG void ~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl * this)

/* Library Function - Single Match
    public: virtual __cdecl CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCRibbonRichEditCtrl::~CMFCRibbonRichEditCtrl(CMFCRibbonRichEditCtrl *this)

{
  *(undefined ***)this = icu_53::FCDUTF8CollationIterator::vftable;
  FUN_143a8dc60(this + 0x1b0);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(this);
  return;
}



// FUNCTION 143be1160 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::UTF8CollationIterator::vftable;
  FUN_143bd6570(param_1);
  return;
}



// FUNCTION 143be1190 FUN_143be1190 body=61 status=ok
// SIG undefined FUN_143be1190(void)

void FUN_143be1190(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143be3270(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143be11d0 FUN_143be11d0 body=178 status=ok
// SIG undefined FUN_143be11d0(void)

void FUN_143be11d0(longlong param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  local_18 = param_2;
  while ((0 < local_18 && (0 < *(int *)(param_1 + 400)))) {
    iVar1 = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = iVar1;
    if ((*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1) & 0xc0) == 0x80) {
      uVar2 = FUN_143ab9560(*(undefined8 *)(param_1 + 0x188),0,*(undefined4 *)(param_1 + 400));
      *(undefined4 *)(param_1 + 400) = uVar2;
    }
    local_18 = local_18 + -1;
  }
  return;
}



// FUNCTION 143be1290 FUN_143be1290 body=61 status=ok
// SIG undefined FUN_143be1290(void)

void FUN_143be1290(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int local_res10;
  
  local_res10 = param_2;
  while( true ) {
    if (local_res10 < 1) {
      return;
    }
    iVar1 = FUN_143be1f50(param_1,param_3);
    if (iVar1 < 0) break;
    local_res10 = local_res10 + -1;
  }
  return;
}



// FUNCTION 143be12d0 FUN_143be12d0 body=567 status=ok
// SIG undefined FUN_143be12d0(void)

void FUN_143be12d0(longlong param_1,int param_2)

{
  byte bVar1;
  byte local_27;
  int local_24;
  byte local_14;
  byte local_c;
  
  local_24 = param_2;
  while ((0 < local_24 &&
         ((*(int *)(param_1 + 400) < *(int *)(param_1 + 0x194) ||
          ((*(int *)(param_1 + 0x194) < 0 &&
           (*(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) != '\0')))
          )))) {
    bVar1 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    if ((byte)(bVar1 + 0x40) < 0x3e) {
      if (bVar1 < 0xf0) {
        local_c = (0xbf < bVar1) + (0xdf < bVar1);
      }
      else {
        if (bVar1 < 0xfe) {
          local_14 = (0xf7 < bVar1) + '\x03' + (0xfb < bVar1);
        }
        else {
          local_14 = 0;
        }
        local_c = local_14;
      }
      local_27 = local_c;
      if ((*(int *)(param_1 + 0x194) < (int)((uint)local_c + *(int *)(param_1 + 400))) &&
         (-1 < *(int *)(param_1 + 0x194))) {
        local_27 = (char)*(undefined4 *)(param_1 + 0x194) - (char)*(undefined4 *)(param_1 + 400);
      }
      while ((local_27 != 0 &&
             ((*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) & 0xc0)
              == 0x80))) {
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
        local_27 = local_27 - 1;
      }
    }
    local_24 = local_24 + -1;
  }
  return;
}



// FUNCTION 143be1510 FUN_143be1510 body=92 status=ok
// SIG undefined FUN_143be1510(void)

undefined8 FUN_143be1510(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x198) == 0) && (*(int *)(param_1 + 0x194) < 0)) {
    iVar1 = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = iVar1;
    *(int *)(param_1 + 0x194) = iVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143be1570 FUN_143be1570 body=78 status=ok
// SIG undefined FUN_143be1570(void)

bool FUN_143be1570(longlong param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = *(int *)(param_1 + 0x194) < 0;
  if (bVar2) {
    iVar1 = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = iVar1;
    *(int *)(param_1 + 0x194) = iVar1;
  }
  return bVar2;
}



// FUNCTION 143be15c0 FUN_143be15c0 body=71 status=ok
// SIG undefined FUN_143be15c0(void)

undefined4 FUN_143be15c0(longlong param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x198) == 3) {
    if (*(int *)(param_1 + 400) == 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x19c);
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x1a0);
    }
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 400);
  }
  return uVar1;
}



// FUNCTION 143be1610 FUN_143be1610 body=17 status=ok
// SIG undefined FUN_143be1610(void)

undefined4 FUN_143be1610(longlong param_1)

{
  return *(undefined4 *)(param_1 + 400);
}



// FUNCTION 143be1630 FUN_143be1630 body=113 status=ok
// SIG undefined FUN_143be1630(void)

ushort FUN_143be1630(longlong param_1)

{
  ushort uVar1;
  
  if (*(int *)(param_1 + 0x198) == 3) {
    uVar1 = FUN_143a8e4f0(param_1 + 0x1b0,*(undefined4 *)(param_1 + 400));
    if ((uVar1 & 0xfc00) == 0xdc00) {
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 143be16b0 FUN_143be16b0 body=1388 status=ok
// SIG undefined FUN_143be16b0(void)

ulonglong FUN_143be16b0(longlong param_1,uint *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  
  while( true ) {
    while (*(int *)(param_1 + 0x198) == 0) {
      if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) {
        *param_2 = 0xffffffff;
        return 0xc0;
      }
      *param_2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400))
      ;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      if ((int)*param_2 < 0xc0) {
        return (ulonglong)
               *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                        (longlong)(int)*param_2 * 4);
      }
      if ((((int)*param_2 < 0xe0) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
         (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                  0x80, bVar2 < 0x40)) {
        uVar6 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                         (longlong)
                         (int)((uint)*(ushort *)
                                      (**(longlong **)(param_1 + 8) +
                                      (longlong)(int)(*param_2 + 0x760) * 2) + (uint)bVar2) * 4);
        *param_2 = (*param_2 & 0x1f) << 6 | (uint)bVar2;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
        cVar3 = FUN_143bde710(*param_2);
        if (((cVar3 == '\0') || (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194))) ||
           (cVar3 = FUN_143be28a0(param_1), cVar3 == '\0')) {
          return (ulonglong)uVar6;
        }
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -2;
      }
      else if (((((int)*param_2 < 0xf0) &&
                ((*(int *)(param_1 + 400) + 1 < *(int *)(param_1 + 0x194) ||
                 (*(int *)(param_1 + 0x194) < 0)))) &&
               (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)
                                 ) + 0x80, bVar2 < 0x40)) &&
              (((*param_2 != 0xe0 || (0x1f < bVar2)) &&
               (bVar4 = *(char *)(*(longlong *)(param_1 + 0x188) +
                                 (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, bVar4 < 0x40)))) {
        *param_2 = (*param_2 & 0xf) << 0xc | (uint)bVar2 << 6 | (uint)bVar4;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
        cVar3 = FUN_143bde710(*param_2);
        if ((cVar3 == '\0') ||
           ((cVar3 = FUN_143bde7d0(*param_2), cVar3 == '\0' &&
            ((*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194) ||
             (cVar3 = FUN_143be28a0(param_1), cVar3 == '\0')))))) goto LAB_143be1be8;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -3;
      }
      else {
        uVar6 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                              *(undefined4 *)(param_1 + 0x194),*param_2,0xfd);
        *param_2 = uVar6;
        if (*param_2 == 0xfffd) {
          return 0xfffd0505;
        }
        cVar3 = FUN_143bde710(((int)*param_2 >> 10) + 0xd7c0U & 0xffff);
        if (((cVar3 == '\0') || (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194))) ||
           (cVar3 = FUN_143be28a0(param_1), cVar3 == '\0')) {
          uVar8 = FUN_143bd8140(*(undefined8 *)(param_1 + 0x10),*param_2);
          return uVar8;
        }
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -4;
      }
      cVar3 = FUN_143be2ad0(param_1,param_3);
      if (cVar3 == '\0') {
        *param_2 = 0xffffffff;
        return 0xc0;
      }
    }
    if ((*(int *)(param_1 + 0x198) == 2) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0)))
    {
      uVar8 = FUN_143be1c30(param_1,param_2,param_3);
      return uVar8;
    }
    if ((*(int *)(param_1 + 0x198) == 3) &&
       (iVar7 = FUN_143a904f0(param_1 + 0x1b0), *(int *)(param_1 + 400) != iVar7)) break;
    FUN_143be3ca0(param_1);
  }
  uVar1 = *(undefined4 *)(param_1 + 400);
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  uVar5 = FUN_143a8e4f0(param_1 + 0x1b0,uVar1);
  *param_2 = (uint)uVar5;
LAB_143be1be8:
  return (ulonglong)
         *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                  (longlong)
                  (int)((*param_2 & 0x1f) +
                       (uint)*(ushort *)
                              (**(longlong **)(param_1 + 8) + (longlong)((int)*param_2 >> 5) * 2) *
                       4) * 4);
}



// FUNCTION 143be1c30 FUN_143be1c30 body=782 status=ok
// SIG undefined FUN_143be1c30(void)

ulonglong FUN_143be1c30(longlong param_1,uint *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) {
    *param_2 = 0xffffffff;
    uVar4 = 0xc0;
  }
  else {
    *param_2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    if ((int)*param_2 < 0xc0) {
      uVar4 = (ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                       (longlong)(int)*param_2 * 4);
    }
    else if ((((int)*param_2 < 0xe0) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
            (bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                     0x80, bVar1 < 0x40)) {
      uVar3 = *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                       (longlong)
                       (int)((uint)*(ushort *)
                                    (**(longlong **)(param_1 + 8) +
                                    (longlong)(int)(*param_2 + 0x760) * 2) + (uint)bVar1) * 4);
      *param_2 = (*param_2 & 0x1f) << 6 | (uint)bVar1;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      uVar4 = (ulonglong)uVar3;
    }
    else if ((((int)*param_2 < 0xf0) &&
             ((*(int *)(param_1 + 400) + 1 < *(int *)(param_1 + 0x194) ||
              (*(int *)(param_1 + 0x194) < 0)))) &&
            ((bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400))
                      + 0x80, bVar1 < 0x40 &&
             (((*param_2 != 0xe0 || (0x1f < bVar1)) &&
              (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) +
                                (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, bVar2 < 0x40))))))
    {
      *param_2 = (*param_2 & 0xf) << 0xc | (uint)bVar1 << 6 | (uint)bVar2;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
      uVar4 = (ulonglong)
              *(uint *)(*(longlong *)(*(longlong *)(param_1 + 8) + 0x10) +
                       (longlong)
                       (int)((*param_2 & 0x1f) +
                            (uint)*(ushort *)
                                   (**(longlong **)(param_1 + 8) +
                                   (longlong)((int)*param_2 >> 5) * 2) * 4) * 4);
    }
    else {
      uVar3 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                            *(undefined4 *)(param_1 + 0x194),*param_2,0xfd);
      *param_2 = uVar3;
      uVar4 = FUN_143b64340(*(undefined8 *)(param_1 + 0x10),*param_2);
    }
  }
  return uVar4;
}



// FUNCTION 143be1f50 FUN_143be1f50 body=1727 status=ok
// SIG undefined FUN_143be1f50(void)

uint FUN_143be1f50(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint local_38;
  uint local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  while( true ) {
    while (*(int *)(param_1 + 0x198) != 0) {
      if ((*(int *)(param_1 + 0x198) == 2) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1a0))
         ) {
        uVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
        if (uVar4 < 0x80) {
          return uVar4;
        }
        if ((((0xe0 < uVar4) && (uVar4 < 0xed)) &&
            ((*(int *)(param_1 + 400) + 1 < *(int *)(param_1 + 0x194) ||
             (*(int *)(param_1 + 0x194) < 0)))) &&
           ((bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                     0x80, bVar1 < 0x40 &&
            (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) +
                              (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, bVar2 < 0x40)))) {
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
          return (uVar4 & 0xf) << 0xc | (uint)bVar1 << 6 | (uint)bVar2;
        }
        if ((uVar4 < 0xe0) &&
           (((0xc1 < uVar4 && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
            (bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                     0x80, bVar1 < 0x40)))) {
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
          return (uVar4 & 0x1f) << 6 | (uint)bVar1;
        }
        uVar4 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                              *(undefined4 *)(param_1 + 0x194),uVar4,0xfd);
        return uVar4;
      }
      if ((*(int *)(param_1 + 0x198) == 3) &&
         (iVar5 = FUN_143a904f0(param_1 + 0x1b0), *(int *)(param_1 + 400) != iVar5)) {
        uVar4 = FUN_143a8e3e0(param_1 + 0x1b0,*(undefined4 *)(param_1 + 400));
        if (uVar4 < 0x10000) {
          local_18 = 1;
        }
        else {
          local_18 = 2;
        }
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + local_18;
        return uVar4;
      }
      FUN_143be3ca0(param_1);
    }
    if ((*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) ||
       ((uVar4 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400))
        , uVar4 == 0 && (*(int *)(param_1 + 0x194) < 0)))) {
      return 0xffffffff;
    }
    if (uVar4 < 0x80) {
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      return uVar4;
    }
    local_38 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    if (0x7f < local_38) {
      if ((((local_38 < 0xe1) || (0xec < local_38)) ||
          ((*(int *)(param_1 + 0x194) <= *(int *)(param_1 + 400) + 1 &&
           (-1 < *(int *)(param_1 + 0x194))))) ||
         ((bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                   0x80, 0x3f < bVar1 ||
          (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) +
                            (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, 0x3f < bVar2)))) {
        if ((local_38 < 0xe0) &&
           (((0xc1 < local_38 && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
            (bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                     0x80, bVar1 < 0x40)))) {
          local_38 = (local_38 & 0x1f) << 6 | (uint)bVar1;
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
        }
        else {
          local_38 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                                   *(undefined4 *)(param_1 + 0x194),local_38,0xfd);
        }
      }
      else {
        local_38 = (local_38 & 0xf) << 0xc | (uint)bVar1 << 6 | (uint)bVar2;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
      }
    }
    if ((int)local_38 < 0x10000) {
      local_30 = local_38;
    }
    else {
      local_30 = ((int)local_38 >> 10) + 0xd7c0U & 0xffff;
    }
    cVar3 = FUN_143bde710(local_30);
    if (cVar3 == '\0') break;
    cVar3 = FUN_143bde7d0(local_38);
    if (cVar3 == '\0') {
      if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) {
        return local_38;
      }
      cVar3 = FUN_143be28a0(param_1);
      if (cVar3 == '\0') {
        return local_38;
      }
    }
    if (local_38 < 0x80) {
      local_20 = 1;
    }
    else {
      if (local_38 < 0x800) {
        local_28 = 2;
      }
      else {
        if (local_38 < 0xd800) {
          local_2c = 3;
        }
        else {
          if ((local_38 < 0xe000) || (0x10ffff < local_38)) {
            local_24 = 0;
          }
          else {
            if (local_38 < 0x10000) {
              local_1c = 3;
            }
            else {
              local_1c = 4;
            }
            local_24 = local_1c;
          }
          local_2c = local_24;
        }
        local_28 = local_2c;
      }
      local_20 = local_28;
    }
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) - local_20;
    cVar3 = FUN_143be2ad0(param_1,param_2);
    if (cVar3 == '\0') {
      return 0xffffffff;
    }
  }
  return local_38;
}



// FUNCTION 143be2620 FUN_143be2620 body=634 status=ok
// SIG undefined FUN_143be2620(void)

uint FUN_143be2620(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) {
    uVar3 = 0xffffffff;
  }
  else if ((*(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) == '\0')
          && (*(int *)(param_1 + 0x194) < 0)) {
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 400);
    uVar3 = 0xffffffff;
  }
  else {
    uVar3 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
    *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
    if (0x7f < uVar3) {
      if ((((uVar3 < 0xe1) || (0xec < uVar3)) ||
          ((*(int *)(param_1 + 0x194) <= *(int *)(param_1 + 400) + 1 &&
           (-1 < *(int *)(param_1 + 0x194))))) ||
         ((bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                   0x80, 0x3f < bVar1 ||
          (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) +
                            (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, 0x3f < bVar2)))) {
        if ((uVar3 < 0xe0) &&
           (((0xc1 < uVar3 && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
            (bVar1 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                     0x80, bVar1 < 0x40)))) {
          uVar3 = (uVar3 & 0x1f) << 6 | (uint)bVar1;
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
        }
        else {
          uVar3 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                                *(undefined4 *)(param_1 + 0x194),uVar3,0xfd);
        }
      }
      else {
        uVar3 = (uVar3 & 0xf) << 0xc | (uint)bVar1 << 6 | (uint)bVar2;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
      }
    }
  }
  return uVar3;
}



// FUNCTION 143be28a0 FUN_143be28a0 body=548 status=ok
// SIG undefined FUN_143be28a0(void)

undefined8 FUN_143be28a0(longlong param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  uint local_14;
  int local_10 [4];
  
  bVar2 = *(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
  if ((bVar2 < 0xcc) || (((0xe3 < bVar2 && (bVar2 < 0xee)) && (bVar2 != 0xea)))) {
    uVar4 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 400);
    local_14 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1);
    local_10[0] = iVar1 + 1;
    if (0x7f < local_14) {
      if ((((local_14 < 0xe1) || (0xec < local_14)) ||
          ((*(int *)(param_1 + 0x194) <= iVar1 + 2 && (-1 < *(int *)(param_1 + 0x194))))) ||
         ((bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)local_10[0]) + 0x80,
          0x3f < bVar2 ||
          (bVar3 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)(iVar1 + 2)) + 0x80,
          0x3f < bVar3)))) {
        if ((local_14 < 0xe0) &&
           (((0xc1 < local_14 && (local_10[0] != *(int *)(param_1 + 0x194))) &&
            (bVar2 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)local_10[0]) + 0x80,
            bVar2 < 0x40)))) {
          local_14 = (local_14 & 0x1f) << 6 | (uint)bVar2;
          local_10[0] = iVar1 + 2;
        }
        else {
          local_14 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),local_10,
                                   *(undefined4 *)(param_1 + 0x194),local_14,0xfd);
        }
      }
      else {
        local_14 = (local_14 & 0xf) << 0xc | (uint)bVar2 << 6 | (uint)bVar3;
        local_10[0] = iVar1 + 3;
      }
    }
    if (0xffff < (int)local_14) {
      local_14 = ((int)local_14 >> 10) + 0xd7c0U & 0xffff;
    }
    uVar4 = FUN_143bde690(local_14);
  }
  return uVar4;
}



// FUNCTION 143be2ad0 FUN_143be2ad0 body=1861 status=ok
// SIG undefined FUN_143be2ad0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143be2ad0(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  uint local_68;
  byte local_64;
  byte local_63;
  byte local_62;
  byte local_61;
  byte local_60;
  byte local_5f;
  byte local_5e;
  undefined2 local_5c;
  byte local_58;
  byte local_57;
  int local_54;
  int local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_50 = *(int *)(param_1 + 400);
    FUN_143a8ac30(local_40);
    local_62 = 0;
    while( true ) {
      local_54 = *(int *)(param_1 + 400);
      local_68 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400))
      ;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      if (0x7f < local_68) {
        if ((((local_68 < 0xe1) || (0xec < local_68)) ||
            ((*(int *)(param_1 + 0x194) <= *(int *)(param_1 + 400) + 1 &&
             (-1 < *(int *)(param_1 + 0x194))))) ||
           ((local_63 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)
                                 ) + 0x80, 0x3f < local_63 ||
            (local_5f = *(char *)(*(longlong *)(param_1 + 0x188) +
                                 (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, 0x3f < local_5f)))
           ) {
          if ((local_68 < 0xe0) &&
             (((0xc1 < local_68 && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
              (local_63 = *(char *)(*(longlong *)(param_1 + 0x188) +
                                   (longlong)*(int *)(param_1 + 400)) + 0x80, local_63 < 0x40)))) {
            local_68 = (local_68 & 0x1f) << 6 | (uint)local_63;
            *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
          }
          else {
            local_78 = 0xfd;
            local_68 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                                     *(undefined4 *)(param_1 + 0x194),local_68);
          }
        }
        else {
          local_68 = (local_68 & 0xf) << 0xc | (uint)local_63 << 6 | (uint)local_5f;
          *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
        }
      }
      local_5c = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a8),local_68);
      local_61 = (byte)((ushort)local_5c >> 8);
      if ((local_61 == 0) && (local_54 != local_50)) break;
      FUN_143a8e0c0(local_40,local_68);
      if ((local_61 != 0) &&
         ((local_61 < local_62 || (cVar1 = FUN_143bde790(local_5c), cVar1 != '\0'))))
      goto LAB_143be2e17;
      local_62 = (byte)local_5c;
      if ((*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) || ((byte)local_5c == 0))
      goto LAB_143be31a9;
    }
    *(int *)(param_1 + 400) = local_54;
LAB_143be31a9:
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
    *(int *)(param_1 + 400) = local_50;
    *(undefined4 *)(param_1 + 0x198) = 2;
    local_58 = 1;
    FUN_143a8dc60(local_40);
    uVar3 = (ulonglong)local_58;
  }
  else {
    uVar3 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return uVar3;
LAB_143be2e17:
  if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x194)) {
LAB_143be30cd:
    cVar1 = FUN_143be3220(param_1,local_40,param_2);
    if (cVar1 == '\0') {
      local_57 = 0;
      FUN_143a8dc60(local_40);
      return (ulonglong)local_57;
    }
    *(int *)(param_1 + 0x19c) = local_50;
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
    *(undefined4 *)(param_1 + 0x198) = 3;
    *(undefined4 *)(param_1 + 400) = 0;
    local_5e = 1;
    FUN_143a8dc60(local_40);
    return (ulonglong)local_5e;
  }
  local_54 = *(int *)(param_1 + 400);
  local_68 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400));
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
  if (0x7f < local_68) {
    if ((((local_68 < 0xe1) || (0xec < local_68)) ||
        ((*(int *)(param_1 + 0x194) <= *(int *)(param_1 + 400) + 1 &&
         (-1 < *(int *)(param_1 + 0x194))))) ||
       ((local_64 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400)) +
                    0x80, 0x3f < local_64 ||
        (local_60 = *(char *)(*(longlong *)(param_1 + 0x188) +
                             (longlong)(*(int *)(param_1 + 400) + 1)) + 0x80, 0x3f < local_60)))) {
      if ((local_68 < 0xe0) &&
         (((0xc1 < local_68 && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x194))) &&
          (local_64 = *(char *)(*(longlong *)(param_1 + 0x188) + (longlong)*(int *)(param_1 + 400))
                      + 0x80, local_64 < 0x40)))) {
        local_68 = (local_68 & 0x1f) << 6 | (uint)local_64;
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      }
      else {
        local_78 = 0xfd;
        local_68 = FUN_143ab96e0(*(undefined8 *)(param_1 + 0x188),param_1 + 400,
                                 *(undefined4 *)(param_1 + 0x194),local_68);
      }
    }
    else {
      local_68 = (local_68 & 0xf) << 0xc | (uint)local_64 << 6 | (uint)local_60;
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 2;
    }
  }
  uVar2 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a8),local_68);
  if (uVar2 < 0x100) {
    *(int *)(param_1 + 400) = local_54;
    goto LAB_143be30cd;
  }
  FUN_143a8e0c0(local_40,local_68);
  goto LAB_143be2e17;
}



// FUNCTION 143be3220 FUN_143be3220 body=77 status=ok
// SIG undefined FUN_143be3220(void)

void FUN_143be3220(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  FUN_143b23350(*(undefined8 *)(param_1 + 0x1a8),param_2,param_1 + 0x1b0,param_3);
  FUN_143a8b110(*param_3);
  return;
}



// FUNCTION 143be3270 FUN_143be3270 body=899 status=ok
// SIG undefined FUN_143be3270(void)

uint FUN_143be3270(longlong param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  int local_14;
  
  while( true ) {
    while (*(int *)(param_1 + 0x198) == 1) {
      if (*(int *)(param_1 + 400) == 0) {
        return 0xffffffff;
      }
      uVar3 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) +
                             (longlong)(*(int *)(param_1 + 400) + -1));
      if (uVar3 < 0x80) {
        *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + -1;
        return uVar3;
      }
      iVar2 = *(int *)(param_1 + 400) + -1;
      *(int *)(param_1 + 400) = iVar2;
      local_38 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2);
      if (0x7f < local_38) {
        local_38 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,param_1 + 400,local_38,0xfd);
      }
      if ((int)local_38 < 0x10000) {
        local_20 = local_38;
      }
      else {
        local_20 = ((int)local_38 >> 10) + 0xd7c0U & 0xffff;
      }
      cVar1 = FUN_143bde690(local_20);
      if (cVar1 == '\0') {
        return local_38;
      }
      cVar1 = FUN_143bde7d0(local_38);
      if (cVar1 == '\0') {
        if (*(int *)(param_1 + 400) == 0) {
          return local_38;
        }
        cVar1 = FUN_143be36a0(param_1);
        if (cVar1 == '\0') {
          return local_38;
        }
      }
      if (local_38 < 0x80) {
        local_24 = 1;
      }
      else {
        if (local_38 < 0x800) {
          local_2c = 2;
        }
        else {
          if (local_38 < 0xd800) {
            local_30 = 3;
          }
          else {
            if ((local_38 < 0xe000) || (0x10ffff < local_38)) {
              local_34 = 0;
            }
            else {
              if (local_38 < 0x10000) {
                local_28 = 3;
              }
              else {
                local_28 = 4;
              }
              local_34 = local_28;
            }
            local_30 = local_34;
          }
          local_2c = local_30;
        }
        local_24 = local_2c;
      }
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + local_24;
      cVar1 = FUN_143be3770(param_1);
      if (cVar1 == '\0') {
        return 0xffffffff;
      }
    }
    if ((*(int *)(param_1 + 0x198) == 2) && (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x19c)))
    {
      iVar2 = *(int *)(param_1 + 400) + -1;
      *(int *)(param_1 + 400) = iVar2;
      uVar3 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar2);
      if (uVar3 < 0x80) {
        return uVar3;
      }
      uVar3 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,param_1 + 400,uVar3,0xfd);
      return uVar3;
    }
    if ((2 < *(int *)(param_1 + 0x198)) && (*(int *)(param_1 + 400) != 0)) break;
    FUN_143be3bf0(param_1);
  }
  uVar3 = FUN_143a8e3e0(param_1 + 0x1b0,*(int *)(param_1 + 400) + -1);
  if (uVar3 < 0x10000) {
    local_14 = 1;
  }
  else {
    local_14 = 2;
  }
  *(int *)(param_1 + 400) = *(int *)(param_1 + 400) - local_14;
  return uVar3;
}



// FUNCTION 143be3600 FUN_143be3600 body=158 status=ok
// SIG undefined FUN_143be3600(void)

uint FUN_143be3600(longlong param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 400) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = iVar1;
    uVar2 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)iVar1);
    if (0x7f < uVar2) {
      uVar2 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,param_1 + 400,uVar2,0xfd);
    }
  }
  return uVar2;
}



// FUNCTION 143be36a0 FUN_143be36a0 body=202 status=ok
// SIG undefined FUN_143be36a0(void)

undefined8 FUN_143be36a0(longlong param_1)

{
  undefined8 uVar1;
  uint local_18;
  int local_14 [5];
  
  if (*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)(*(int *)(param_1 + 400) + -1)) < 0x80) {
    uVar1 = 0;
  }
  else {
    local_14[0] = *(int *)(param_1 + 400) + -1;
    local_18 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)local_14[0]);
    if (0x7f < local_18) {
      local_18 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,local_14,local_18,0xfd);
    }
    if (0xffff < (int)local_18) {
      local_18 = ((int)local_18 >> 10) + 0xd7c0U & 0xffff;
    }
    uVar1 = FUN_143bde710(local_18);
  }
  return uVar1;
}



// FUNCTION 143be3770 FUN_143be3770 body=1012 status=ok
// SIG undefined FUN_143be3770(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143be3770(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  byte local_68;
  byte local_67;
  ushort local_64;
  uint local_60;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 != '\0') {
    return (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  local_54 = *(int *)(param_1 + 400);
  FUN_143a8ac30(local_40);
  local_68 = 0;
  while( true ) {
    local_58 = *(int *)(param_1 + 400);
    local_4c = *(int *)(param_1 + 400) + -1;
    *(int *)(param_1 + 400) = local_4c;
    local_60 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)local_4c);
    if (0x7f < local_60) {
      local_78 = 0xfd;
      local_60 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,param_1 + 400,local_60);
    }
    local_64 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a8),local_60);
    local_67 = (byte)local_64;
    if (((byte)local_64 == 0) && (local_58 != local_54)) break;
    FUN_143a8e0c0(local_40);
    if ((local_67 != 0) &&
       (((local_68 != 0 && (local_68 < local_67)) ||
        (cVar1 = FUN_143bde790(local_64), cVar1 != '\0')))) goto LAB_143be3905;
    local_68 = (byte)(local_64 >> 8);
    if ((*(int *)(param_1 + 400) == 0) || (local_68 == 0)) goto LAB_143be3af8;
  }
  *(int *)(param_1 + 400) = local_58;
LAB_143be3af8:
  *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 400);
  *(int *)(param_1 + 400) = local_54;
  *(undefined4 *)(param_1 + 0x198) = 2;
  local_5a = 1;
  FUN_143a8dc60(local_40);
  return (ulonglong)local_5a;
LAB_143be3905:
  if ((local_64 < 0x100) || (*(int *)(param_1 + 400) == 0)) goto LAB_143be3a0a;
  local_58 = *(int *)(param_1 + 400);
  local_50 = *(int *)(param_1 + 400) + -1;
  *(int *)(param_1 + 400) = local_50;
  local_60 = (uint)*(byte *)(*(longlong *)(param_1 + 0x188) + (longlong)local_50);
  if (0x7f < local_60) {
    local_78 = 0xfd;
    local_60 = FUN_143ab9a30(*(undefined8 *)(param_1 + 0x188),0,param_1 + 400,local_60);
  }
  local_64 = FUN_143b1f030(*(undefined8 *)(param_1 + 0x1a8),local_60);
  if (local_64 == 0) {
    *(int *)(param_1 + 400) = local_58;
LAB_143be3a0a:
    FUN_143bdd3c0(local_40);
    cVar1 = FUN_143be3220(param_1,local_40,param_2);
    if (cVar1 == '\0') {
      local_5c = 0;
      FUN_143a8dc60(local_40);
    }
    else {
      *(int *)(param_1 + 0x1a0) = local_54;
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 400);
      *(undefined4 *)(param_1 + 0x198) = 3;
      uVar2 = FUN_143a904f0(param_1 + 0x1b0);
      *(undefined4 *)(param_1 + 400) = uVar2;
      local_5b = 1;
      FUN_143a8dc60(local_40);
      local_5c = local_5b;
    }
    return (ulonglong)local_5c;
  }
  FUN_143a8e0c0(local_40);
  goto LAB_143be3905;
}



// FUNCTION 143be3b70 FUN_143be3b70 body=73 status=ok
// SIG undefined FUN_143be3b70(void)

void FUN_143be3b70(longlong param_1,undefined4 param_2)

{
  FUN_143bd9080(param_1);
  *(undefined4 *)(param_1 + 400) = param_2;
  *(undefined4 *)(param_1 + 0x19c) = param_2;
  *(undefined4 *)(param_1 + 0x198) = 0;
  return;
}



// FUNCTION 143be3bc0 FUN_143be3bc0 body=43 status=ok
// SIG undefined FUN_143be3bc0(void)

void FUN_143be3bc0(longlong param_1,undefined4 param_2)

{
  FUN_143bd9080(param_1);
  *(undefined4 *)(param_1 + 400) = param_2;
  return;
}



// FUNCTION 143be3bf0 FUN_143be3bf0 body=175 status=ok
// SIG undefined FUN_143be3bf0(void)

void FUN_143be3bf0(longlong param_1)

{
  if (*(int *)(param_1 + 0x198) == 0) {
    *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
    if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x19c)) {
      *(undefined4 *)(param_1 + 0x198) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x198) != 2) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x19c);
      *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(param_1 + 400);
    }
    *(undefined4 *)(param_1 + 0x198) = 1;
  }
  return;
}



// FUNCTION 143be3ca0 FUN_143be3ca0 body=175 status=ok
// SIG undefined FUN_143be3ca0(void)

void FUN_143be3ca0(longlong param_1)

{
  if (*(int *)(param_1 + 0x198) == 1) {
    *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 400);
    if (*(int *)(param_1 + 400) == *(int *)(param_1 + 0x1a0)) {
      *(undefined4 *)(param_1 + 0x198) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x198) = 2;
    }
  }
  else {
    if (*(int *)(param_1 + 0x198) != 2) {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(param_1 + 0x1a0);
      *(undefined4 *)(param_1 + 0x19c) = *(undefined4 *)(param_1 + 400);
    }
    *(undefined4 *)(param_1 + 0x198) = 0;
  }
  return;
}



// FUNCTION 143be3d50 FUN_143be3d50 body=114 status=ok
// SIG undefined FUN_143be3d50(void)

undefined8 *
FUN_143be3d50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::Measure::vftable;
  FUN_143b686d0(param_1 + 1);
  param_1[0x1c] = 0;
  FUN_143be3f10(param_1,param_2);
  return param_1;
}



// FUNCTION 143be3dd0 FUN_143be3dd0 body=171 status=ok
// SIG undefined FUN_143be3dd0(void)

undefined8 *
FUN_143be3dd0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined4 *param_4)

{
  char cVar1;
  
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::Measure::vftable;
  FUN_143b684b0(param_1 + 1,param_2);
  param_1[0x1c] = param_3;
  cVar1 = FUN_143a8b110(*param_4);
  if (cVar1 != '\0') {
    cVar1 = FUN_143b69680(param_1 + 1);
    if ((cVar1 == '\0') || (param_3 == 0)) {
      *param_4 = 1;
    }
  }
  return param_1;
}



// FUNCTION 143be3e80 FUN_143be3e80 body=139 status=ok
// SIG undefined FUN_143be3e80(void)

void FUN_143be3e80(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::Measure::vftable;
  puVar1 = (undefined8 *)param_1[0x1c];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  Concurrency::
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
  ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
            ((call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              *)(param_1 + 1));
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143be3f10 FUN_143be3f10 body=179 status=ok
// SIG undefined FUN_143be3f10(void)

longlong FUN_143be3f10(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    puVar1 = *(undefined8 **)(param_1 + 0xe0);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    FUN_143b687b0(param_1 + 8,param_2 + 8);
    uVar2 = (**(code **)(**(longlong **)(param_2 + 0xe0) + 0x10))(*(undefined8 *)(param_2 + 0xe0));
    *(undefined8 *)(param_1 + 0xe0) = uVar2;
  }
  return param_1;
}



// FUNCTION 143be3fd0 FUN_143be3fd0 body=54 status=ok
// SIG undefined FUN_143be3fd0(void)

undefined8 FUN_143be3fd0(undefined8 param_1,uint param_2)

{
  FUN_143be3e80(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be4010 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0xe8);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143be3d50(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143be4070 FUN_143be4070 body=19 status=ok
// SIG undefined FUN_143be4070(void)

void FUN_143be4070(void)

{
  FUN_143be4090();
  return;
}



// FUNCTION 143be4090 FUN_143be4090 body=8 status=ok
// SIG undefined FUN_143be4090(void)

undefined * FUN_143be4090(void)

{
  return &DAT_146bc8489;
}



// FUNCTION 143be40a0 FUN_143be40a0 body=80 status=ok
// SIG undefined FUN_143be40a0(void)

undefined8 * FUN_143be40a0(undefined8 *param_1,longlong param_2)

{
  FUN_143c098f0(param_1,param_2);
  *param_1 = icu_53::CurrencyUnit::vftable;
  wcscpy((wchar_t *)(param_1 + 3),(wchar_t *)(param_2 + 0x18));
  return param_1;
}



// FUNCTION 143be40f0 FUN_143be40f0 body=205 status=ok
// SIG undefined FUN_143be40f0(void)

undefined8 * FUN_143be40f0(undefined8 *param_1,wchar_t *param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143be41c0(param_1);
  *param_1 = icu_53::CurrencyUnit::vftable;
  *(undefined2 *)(param_1 + 3) = 0;
  cVar1 = FUN_143a8b110(*param_3);
  if (cVar1 != '\0') {
    if ((param_2 != (wchar_t *)0x0) && (iVar2 = FreeLib(param_2), iVar2 == 3)) {
      wcscpy((wchar_t *)(param_1 + 3),param_2);
      FUN_143ab5770(param_1 + 3,local_18,4);
      FUN_143c09b70(param_1,local_18);
      return param_1;
    }
    *param_3 = 1;
  }
  return param_1;
}



// FUNCTION 143be41c0 FUN_143be41c0 body=87 status=ok
// SIG undefined FUN_143be41c0(void)

undefined8 * FUN_143be41c0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::MeasureUnit::vftable;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 143be4220 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CurrencyUnit::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143be4250 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be4290 CreateInternalContext body=92 status=ok
// SIG undefined CreateInternalContext(void)

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::ThreadScheduler::CreateInternalContext(void) __ptr64
    protected: virtual class Concurrency::details::InternalContextBase * __ptr64 __cdecl
   Concurrency::details::UMSThreadScheduler::CreateInternalContext(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

undefined8 CreateInternalContext(undefined8 param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x20);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143be40a0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143be42f0 FUN_143be42f0 body=19 status=ok
// SIG undefined FUN_143be42f0(void)

void FUN_143be42f0(void)

{
  FUN_143be4310();
  return;
}



// FUNCTION 143be4310 FUN_143be4310 body=8 status=ok
// SIG undefined FUN_143be4310(void)

undefined * FUN_143be4310(void)

{
  return &DAT_146bc848a;
}



// FUNCTION 143be4320 FUN_143be4320 body=57 status=ok
// SIG undefined FUN_143be4320(void)

undefined8 * FUN_143be4320(undefined8 *param_1)

{
  FUN_143be4600(param_1);
  *param_1 = icu_53::_anon_4DA61DBC::BundleImporter::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143be4360 SchedulerResourceManagement body=63 status=ok
// SIG undefined SchedulerResourceManagement(SchedulerResourceManagement * this, SchedulerBase * param_1)

/* Library Function - Single Match
    public: __cdecl
   Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement(class
   Concurrency::details::SchedulerBase * __ptr64) __ptr64
   
   Library: Visual Studio 2010 Debug */

SchedulerResourceManagement * __thiscall
Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement
          (SchedulerResourceManagement *this,SchedulerBase *param_1)

{
  FUN_143be43a0(this);
  *(undefined ***)this = icu_53::CEFinalizer::vftable;
  *(SchedulerBase **)(this + 8) = param_1;
  return this;
}



// FUNCTION 143be43a0 FUN_143be43a0 body=44 status=ok
// SIG undefined FUN_143be43a0(void)

undefined8 * FUN_143be43a0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationDataBuilder::CEModifier::vftable;
  return param_1;
}



// FUNCTION 143be43d0 FUN_143be43d0 body=557 status=ok
// SIG undefined FUN_143be43d0(void)

undefined8 * FUN_143be43d0(undefined8 *param_1,longlong param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_30;
  
  FUN_143be4720(param_1);
  *param_1 = icu_53::CollationBuilder::vftable;
  uVar2 = FUN_143b1f2a0(param_3);
  param_1[1] = uVar2;
  uVar2 = FUN_143b1f0a0(param_3);
  param_1[2] = uVar2;
  uVar2 = FUN_143b1f1c0(param_3);
  param_1[3] = uVar2;
  param_1[4] = param_2;
  param_1[5] = *(undefined8 *)(param_2 + 0x10);
  FUN_143a94320(param_1 + 6,*(undefined8 *)(*(longlong *)(param_2 + 0x10) + 0x78),
                *(undefined4 *)(*(longlong *)(param_2 + 0x10) + 0x80));
  *(undefined4 *)(param_1 + 8) = 0;
  lVar3 = FUN_143a8d310(0x180);
  if (lVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = FUN_143c0e990(lVar3,param_3);
  }
  param_1[9] = local_30;
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_143b11ea0(param_1 + 0xb);
  param_1[0x16] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  FUN_143e1c860(param_1 + 0x37,param_3);
  FUN_143e1ce70(param_1 + 0x3b,param_3);
  FUN_143b23c50(param_1[3],param_3);
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    if (param_1[9] == 0) {
      *param_3 = 7;
    }
    else {
      FUN_143c12f90(param_1[9],param_1[5],param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        param_1[0x16] = "CollationBuilder initialization failed";
      }
    }
  }
  else {
    param_1[0x16] = "CollationBuilder fields initialization failed";
  }
  return param_1;
}



// FUNCTION 143be4600 FUN_143be4600 body=44 status=ok
// SIG undefined FUN_143be4600(void)

undefined8 * FUN_143be4600(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationRuleParser::Importer::vftable;
  return param_1;
}



// FUNCTION 143be4630 FUN_143be4630 body=226 status=ok
// SIG undefined FUN_143be4630(void)

undefined8 * FUN_143be4630(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143b35650(param_1);
  *param_1 = icu_53::RuleBasedCollator::vftable;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143a8a690(param_1 + 4,&DAT_145af3922,0,0,0);
  *(undefined4 *)(param_1 + 0x33) = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  FUN_143be7fc0(param_1,param_2,0xffffffff,0xffffffff,0,0,param_3);
  return param_1;
}



// FUNCTION 143be4720 FUN_143be4720 body=44 status=ok
// SIG undefined FUN_143be4720(void)

undefined8 * FUN_143be4720(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::CollationRuleParser::Sink::vftable;
  return param_1;
}



// FUNCTION 143be4750 FUN_143be4750 body=118 status=ok
// SIG undefined FUN_143be4750(void)

void FUN_143be4750(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::_anon_4DA61DBC::BundleImporter::vftable;
  puVar1 = (undefined8 *)param_1[1];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143be47d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::CEFinalizer::vftable;
  ~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143be4800 FUN_143be4800 body=176 status=ok
// SIG undefined FUN_143be4800(void)

void FUN_143be4800(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::CollationBuilder::vftable;
  puVar1 = (undefined8 *)param_1[9];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143e1cf00(param_1 + 0x3b);
  FUN_143e1c980(param_1 + 0x37);
  FUN_143b11ff0(param_1 + 0xb);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(param_1);
  return;
}



// FUNCTION 143be48b0 FUN_143be48b0 body=54 status=ok
// SIG undefined FUN_143be48b0(void)

undefined8 FUN_143be48b0(undefined8 param_1,uint param_2)

{
  FUN_143be4750(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be48f0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be4930 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be4970 FUN_143be4970 body=54 status=ok
// SIG undefined FUN_143be4970(void)

undefined8 FUN_143be4970(undefined8 param_1,uint param_2)

{
  FUN_143be4800(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be49b0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be49f0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143be4a30 FUN_143be4a30 body=322 status=ok
// SIG undefined FUN_143be4a30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143be4a30(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,int param_6,undefined4 *param_7)

{
  char cVar1;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  undefined4 local_128;
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_158;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    local_138 = (undefined4 *)((ulonglong)local_138._4_4_ << 0x20);
    local_128 = FUN_143c12ae0(*(undefined8 *)(param_1 + 0x48),param_2,param_3,local_118);
    cVar1 = FUN_143be97e0(param_4,param_5,local_118,local_128);
    if (cVar1 == '\0') {
      if (param_6 == -1) {
        param_6 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))
                            (*(undefined8 *)(param_1 + 0x48),param_4,param_5,param_7);
      }
      local_138 = param_7;
      FUN_143c0eff0(*(undefined8 *)(param_1 + 0x48),param_2,param_3,param_6);
    }
  }
  return param_6;
}



// FUNCTION 143be4b80 FUN_143be4b80 body=1232 status=ok
// SIG undefined FUN_143be4b80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4
FUN_143be4b80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  char cVar1;
  undefined1 auStack_2f8 [32];
  undefined4 local_2d8;
  undefined4 local_2d0;
  undefined4 *local_2c8;
  char local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined1 local_298 [40];
  undefined1 local_270 [40];
  undefined1 local_248 [40];
  undefined1 local_220 [40];
  CSettingsStore local_1f8 [160];
  CSettingsStore local_158 [160];
  CSettingsStore local_b8 [160];
  ulonglong local_18;
  
  local_2a0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  cVar1 = FUN_143a8b0e0(*param_7);
  local_2a8 = param_6;
  if (cVar1 == '\0') {
    cVar1 = FUN_143a903a0(param_2);
    if (cVar1 == '\0') {
      FUN_143e23620(local_b8,param_2,param_7);
      FUN_143e23620(local_1f8,param_3,param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 == '\0') {
        while( true ) {
          FUN_143e24b10(local_b8,local_248);
          cVar1 = FUN_143a90330(local_248);
          if (cVar1 != '\0') break;
          cVar1 = FUN_143be7c00(param_1,local_248,param_7);
          if (cVar1 == '\0') {
            local_2b8 = FUN_143a8dd00(local_248,param_2);
            while( true ) {
              FUN_143e24b10(local_1f8,local_270);
              cVar1 = FUN_143a90330(local_270);
              if (cVar1 != '\0') break;
              cVar1 = FUN_143be7c50(param_1,local_270,param_7);
              if ((cVar1 == '\0') &&
                 ((local_2b8 == '\0' || (cVar1 = FUN_143a8dd00(local_270,param_3), cVar1 == '\0'))))
              {
                local_2c8 = param_7;
                local_2d0 = param_6;
                local_2d8 = param_5;
                param_6 = FUN_143be4a30(param_1,local_248,local_270,param_4);
                cVar1 = FUN_143a8b0e0(*param_7);
                if (cVar1 != '\0') {
                  local_2ac = param_6;
                  FUN_143a8dc60(local_270);
                  FUN_143a8dc60(local_248);
                  CSettingsStore::~CSettingsStore(local_1f8);
                  CSettingsStore::~CSettingsStore(local_b8);
                  return local_2ac;
                }
                FUN_143a8dc60(local_270);
              }
              else {
                FUN_143a8dc60(local_270);
              }
            }
            FUN_143a8dc60(local_270);
            FUN_143e250e0(local_1f8);
            FUN_143a8dc60(local_248);
          }
          else {
            FUN_143a8dc60(local_248);
          }
        }
        FUN_143a8dc60(local_248);
        CSettingsStore::~CSettingsStore(local_1f8);
        CSettingsStore::~CSettingsStore(local_b8);
        local_2a8 = param_6;
      }
      else {
        local_2b0 = param_6;
        CSettingsStore::~CSettingsStore(local_1f8);
        CSettingsStore::~CSettingsStore(local_b8);
        local_2a8 = local_2b0;
      }
    }
    else {
      FUN_143e23620(local_158,param_3,param_7);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 == '\0') {
        FUN_143a8ac30(local_220);
        while( true ) {
          FUN_143e24b10(local_158,local_298);
          cVar1 = FUN_143a90330(local_298);
          if (cVar1 != '\0') break;
          cVar1 = FUN_143be7c50(param_1,local_298,param_7);
          if ((cVar1 == '\0') && (cVar1 = FUN_143a8dd00(local_298,param_3), cVar1 == '\0')) {
            local_2c8 = param_7;
            local_2d0 = param_6;
            local_2d8 = param_5;
            param_6 = FUN_143be4a30(param_1,local_220,local_298,param_4);
            cVar1 = FUN_143a8b0e0(*param_7);
            if (cVar1 != '\0') {
              local_2b4 = param_6;
              FUN_143a8dc60(local_298);
              FUN_143a8dc60(local_220);
              CSettingsStore::~CSettingsStore(local_158);
              return local_2b4;
            }
            FUN_143a8dc60(local_298);
          }
          else {
            FUN_143a8dc60(local_298);
          }
        }
        FUN_143a8dc60(local_298);
        FUN_143a8dc60(local_220);
        CSettingsStore::~CSettingsStore(local_158);
        local_2a8 = param_6;
      }
      else {
        CSettingsStore::~CSettingsStore(local_158);
      }
    }
  }
  return local_2a8;
}



// FUNCTION 143be5050 FUN_143be5050 body=1966 status=ok
// SIG undefined FUN_143be5050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be5050(longlong param_1,int param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined4 *param_7)

{
  char cVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 *local_c8;
  undefined2 local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  int local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_90 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 != '\0') {
    return;
  }
  FUN_143a8ac30(local_60);
  cVar1 = FUN_143a903a0(param_3);
  if (cVar1 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 8) + 0x10))
              (*(undefined8 *)(param_1 + 8),param_3,local_60,param_7);
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 != '\0') {
      *param_6 = "normalizing the relation prefix";
      FUN_143a8dc60(local_60);
      return;
    }
  }
  FUN_143b10ba0(*(undefined8 *)(param_1 + 8),local_88,param_4,param_7);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 != '\0') {
    *param_6 = "normalizing the relation string";
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    return;
  }
  local_a8 = FUN_143a904f0(local_88);
  if (1 < local_a8) {
    local_b8 = FUN_143a8e4f0(local_88,0);
    cVar1 = FUN_143be84c0(local_b8);
    if ((cVar1 != '\0') || (cVar1 = FUN_143be84f0(local_b8), cVar1 != '\0')) {
      *param_7 = 0x10;
      *param_6 = "contractions starting with conjoining Jamo L or V not supported";
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    local_b8 = FUN_143a8e4f0(local_88,local_a8 + -1);
    cVar1 = FUN_143be84c0(local_b8);
    if (cVar1 != '\0') {
LAB_143be528c:
      *param_7 = 0x10;
      *param_6 = "contractions ending with conjoining Jamo L or L+V not supported";
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    cVar1 = FUN_143be84f0(local_b8);
    if (cVar1 != '\0') {
      uVar2 = FUN_143a8e4f0(local_88,local_a8 + -2);
      cVar1 = FUN_143be84c0(uVar2);
      if (cVar1 != '\0') goto LAB_143be528c;
    }
  }
  if (param_2 != 0xf) {
    local_b0 = FUN_143be6d40(param_1,param_2,param_6,param_7);
    local_a0 = *(longlong *)(param_1 + 0xb8 + (longlong)(*(int *)(param_1 + 0x1b0) + -1) * 8);
    if (((param_2 == 0) && (cVar1 = FUN_143be85a0(local_a0), cVar1 == '\0')) &&
       ((int)((ulonglong)local_a0 >> 0x20) == 0)) {
      *param_7 = 0x10;
      *param_6 = "tailoring primary after ignorables not supported";
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    if ((param_2 == 3) && (local_a0 == 0)) {
      *param_7 = 0x10;
      *param_6 = "tailoring quaternary after tertiary ignorables not supported";
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    local_b0 = FUN_143be7ea0(param_1,local_b0,param_2,param_7);
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 != '\0') {
      *param_6 = "modifying collation elements";
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    local_b4 = FUN_143be6610(local_a0);
    if (param_2 < local_b4) {
      local_b4 = param_2;
    }
    uVar4 = FUN_143be9c70(local_b0,local_b4);
    *(undefined8 *)(param_1 + 0xb8 + (longlong)(*(int *)(param_1 + 0x1b0) + -1) * 8) = uVar4;
  }
  FUN_143be9850(param_1,local_88,param_6,param_7);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 != '\0') {
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    return;
  }
  local_98 = *(undefined4 *)(param_1 + 0x1b0);
  cVar1 = FUN_143a903a0(param_5);
  if (cVar1 == '\0') {
    FUN_143b10ba0(*(undefined8 *)(param_1 + 8),local_38,param_5,param_7);
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 != '\0') {
      *param_6 = "normalizing the relation extension";
      FUN_143a8dc60(local_38);
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    uVar3 = _aligned_malloc_dbg(*(undefined8 *)(param_1 + 0x48),local_38,param_1 + 0xb8,
                                *(undefined4 *)(param_1 + 0x1b0));
    *(undefined4 *)(param_1 + 0x1b0) = uVar3;
    if (0x1f < *(int *)(param_1 + 0x1b0)) {
      *param_7 = 1;
      *param_6 = "extension string adds too many collation elements (more than 31 total)";
      FUN_143a8dc60(local_38);
      FUN_143a8dc60(local_88);
      FUN_143a8dc60(local_60);
      return;
    }
    FUN_143a8dc60(local_38);
  }
  local_ac = 0xffffffff;
  cVar1 = FUN_143b0c130(param_3,local_60);
  if (((cVar1 != '\0') || (cVar1 = FUN_143b0c130(param_4,local_88), cVar1 != '\0')) &&
     ((cVar1 = FUN_143be7c00(param_1,param_3,param_7), cVar1 == '\0' &&
      (cVar1 = FUN_143be7c50(param_1,param_4,param_7), cVar1 == '\0')))) {
    local_c8 = param_7;
    local_d0 = local_ac;
    local_d8 = *(undefined4 *)(param_1 + 0x1b0);
    local_ac = FUN_143be4a30(param_1,param_3,param_4,param_1 + 0xb8);
  }
  local_c8 = param_7;
  local_d0 = local_ac;
  local_d8 = *(undefined4 *)(param_1 + 0x1b0);
  FUN_143be6480(param_1,local_60,local_88,param_1 + 0xb8);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    *(undefined4 *)(param_1 + 0x1b0) = local_98;
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
  }
  else {
    *param_6 = "writing collation elements";
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
  }
  return;
}



// FUNCTION 143be5800 FUN_143be5800 body=2322 status=ok
// SIG undefined FUN_143be5800(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be5800(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_res10;
  undefined1 auStack_c8 [32];
  undefined4 *local_a8;
  ulonglong local_98;
  int local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  ulonglong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 != '\0') {
    return;
  }
  sVar3 = FUN_143a8e4f0(param_3,0);
  if (sVar3 == -2) {
    uVar7 = FUN_143be7430(param_1,param_3,param_4,param_5);
    *(undefined8 *)(param_1 + 0xb8) = uVar7;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 != '\0') {
      return;
    }
  }
  else {
    FUN_143b10ba0(*(undefined8 *)(param_1 + 8),local_38,param_3,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 != '\0') {
      *param_4 = "normalizing the reset position";
      FUN_143a8dc60(local_38);
      return;
    }
    uVar4 = _aligned_malloc_dbg(*(undefined8 *)(param_1 + 0x48),local_38,param_1 + 0xb8,0);
    *(undefined4 *)(param_1 + 0x1b0) = uVar4;
    if (0x1f < *(int *)(param_1 + 0x1b0)) {
      *param_5 = 1;
      *param_4 = "reset position maps to too many collation elements (more than 31)";
      FUN_143a8dc60(local_38);
      return;
    }
    FUN_143a8dc60(local_38);
  }
  if (param_2 != 0xf) {
    local_90 = FUN_143be6d40(param_1,param_2,param_4,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      local_98 = FUN_143bca400(param_1 + 0x1d8,local_90);
      while (iVar5 = FUN_143be9be0(local_98), param_2 < iVar5) {
        local_90 = FUN_143be97c0(local_98);
        local_98 = FUN_143bca400(param_1 + 0x1d8,local_90);
      }
      iVar5 = FUN_143be9be0(local_98);
      local_res10 = param_2;
      if ((iVar5 == param_2) && (cVar1 = FUN_143be8520(local_98), cVar1 != '\0')) {
        local_90 = FUN_143be97c0(local_98);
      }
      else if (param_2 == 0) {
        local_84 = FUN_143be9cf0(local_98);
        if (local_84 == 0) {
          *param_5 = 0x10;
          *param_4 = "reset primary-before ignorable not possible";
          return;
        }
        uVar6 = FUN_143be71f0(param_1 + 0x30);
        if (local_84 <= uVar6) {
          *param_5 = 0x10;
          *param_4 = "reset primary-before first non-ignorable not supported";
          return;
        }
        if (local_84 == 0xff020200) {
          *param_5 = 0x10;
          *param_4 = "reset primary-before [first trailing] not supported";
          return;
        }
        uVar2 = FUN_143be83f0(*(undefined8 *)(param_1 + 0x28),local_84);
        local_84 = FUN_143c0a4a0(param_1 + 0x30,local_84,uVar2);
        iVar5 = FUN_143be6e80(param_1,local_84,param_5);
        do {
          local_90 = iVar5;
          local_98 = FUN_143bca400(param_1 + 0x1d8,local_90);
          local_6c = FUN_143be90a0(local_98);
          iVar5 = local_6c;
        } while (local_6c != 0);
        local_6c = 0;
      }
      else {
        local_90 = FUN_143be6c00(param_1,local_90,1);
        if (1 < param_2) {
          local_90 = FUN_143be6c00(param_1,local_90,2);
        }
        local_98 = FUN_143bca400(param_1 + 0x1d8,local_90);
        iVar5 = FUN_143be9be0(local_98);
        if (iVar5 == param_2) {
          local_88 = FUN_143be9cd0(local_98);
          if (local_88 == 0) {
            *param_5 = 0x10;
            if (param_2 == 1) {
              *param_4 = "reset secondary-before secondary ignorable not possible";
              return;
            }
            *param_4 = "reset tertiary-before completely ignorable not possible";
            return;
          }
          local_7c = FUN_143be97c0(local_98);
          iVar5 = local_7c;
          if (local_88 != 0x500) {
            local_78 = 0;
            local_80 = -1;
            local_8c = local_90;
            if (param_2 == 1) {
              do {
                local_8c = FUN_143be97c0(local_98);
                local_98 = FUN_143bca400(param_1 + 0x1d8,local_8c);
                iVar5 = FUN_143be9be0(local_98);
                if (((iVar5 == 1) && (cVar1 = FUN_143be8520(local_98), cVar1 == '\0')) &&
                   (local_80 < 0)) {
                  local_80 = local_8c;
                  local_78 = FUN_143be9cd0(local_98);
                }
                iVar5 = FUN_143be9be0(local_98);
              } while (0 < iVar5);
              local_68 = FUN_143be9cf0(local_98);
              local_88 = FUN_143c0a640(param_1 + 0x30,local_68,local_88);
            }
            else {
              do {
                local_8c = FUN_143be97c0(local_98);
                local_98 = FUN_143bca400(param_1 + 0x1d8,local_8c);
                iVar5 = FUN_143be9be0(local_98);
                if (((iVar5 == 2) && (cVar1 = FUN_143be8520(local_98), cVar1 == '\0')) &&
                   (local_80 < 0)) {
                  local_80 = local_8c;
                  local_78 = FUN_143be9cd0(local_98);
                }
                iVar5 = FUN_143be9be0(local_98);
              } while (1 < iVar5);
              iVar5 = FUN_143be9be0(local_98);
              if (iVar5 == 1) {
                local_70 = FUN_143be9cd0(local_98);
                do {
                  local_8c = FUN_143be97c0(local_98);
                  local_98 = FUN_143bca400(param_1 + 0x1d8,local_8c);
                  iVar5 = FUN_143be9be0(local_98);
                } while (0 < iVar5);
              }
              else {
                local_70 = 0x500;
              }
              local_64 = FUN_143be9cf0(local_98);
              local_88 = FUN_143c0a800(param_1 + 0x30,local_64,local_70,local_88);
            }
            if ((local_80 < 0) || (local_88 != local_78)) {
              local_50 = FUN_143be90f0(local_88);
              local_98 = FUN_143be90e0(param_2);
              local_98 = local_50 | local_98;
              local_a8 = param_5;
              iVar5 = FUN_143be7d50(param_1,local_7c,local_90,local_98);
            }
            else {
              local_90 = local_7c;
              iVar5 = local_90;
            }
          }
        }
        else {
          local_60 = 0;
          if (param_2 == 1) {
            local_60 = local_98 & 0x20;
            local_98 = local_98 & 0xffffffffffffffdf | 0x40;
          }
          else {
            local_98 = local_98 | 0x20;
          }
          FUN_143e1d330(param_1 + 0x1d8,local_98,local_90);
          local_74 = FUN_143be90a0(local_98);
          local_48 = FUN_143be90f0(0x200);
          local_98 = FUN_143be90e0(param_2);
          local_98 = local_48 | local_98;
          local_a8 = param_5;
          local_90 = FUN_143be7d50(param_1,local_90,local_74,local_98);
          local_58 = FUN_143be90f0(0x500);
          local_58 = local_58 | local_60;
          local_98 = FUN_143be90e0(param_2);
          local_98 = local_58 | local_98;
          local_a8 = param_5;
          FUN_143be7d50(param_1,local_90,local_74,local_98);
          iVar5 = local_90;
        }
        local_90 = iVar5;
        local_res10 = FUN_143be6610(*(undefined8 *)
                                     (param_1 + 0xb8 +
                                     (longlong)(*(int *)(param_1 + 0x1b0) + -1) * 8));
      }
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        uVar7 = FUN_143be9c70(local_90,local_res10);
        *(undefined8 *)(param_1 + 0xb8 + (longlong)(*(int *)(param_1 + 0x1b0) + -1) * 8) = uVar7;
      }
      else {
        *param_4 = "inserting reset position for &[before n]";
      }
    }
  }
  return;
}



// FUNCTION 143be6120 FUN_143be6120 body=849 status=ok
// SIG undefined FUN_143be6120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be6120(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined1 auStack_298 [32];
  undefined1 *local_278;
  undefined1 *local_270;
  undefined4 *local_268;
  undefined4 *local_260;
  int local_258;
  uint local_254;
  int local_250;
  undefined4 local_24c;
  int local_248;
  int local_244;
  undefined8 local_240;
  undefined1 local_238 [64];
  undefined1 local_1f8 [96];
  undefined1 local_198 [40];
  undefined1 local_170 [40];
  undefined4 local_148 [12];
  undefined1 local_118 [256];
  ulonglong local_18;
  
  local_240 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    for (local_258 = FUN_143a904f0(param_3); local_258 != 0; local_258 = local_258 - local_248) {
      local_254 = FUN_143a8e3e0(param_3,local_258 + -1);
      cVar1 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                        (*(undefined8 *)(param_1 + 8),local_254);
      if (cVar1 == '\0') {
        cVar1 = FUN_143be84c0(local_254);
        if (cVar1 != '\0') {
          return;
        }
        FUN_143b11ea0(local_1f8);
        cVar1 = FUN_143b23f10(*(undefined8 *)(param_1 + 0x18),local_254,local_1f8);
        if (cVar1 == '\0') {
          FUN_143b11ff0(local_1f8);
          return;
        }
        FUN_143a8ac30(local_170);
        FUN_143a8ac30(local_198);
        FUN_143a8ac30(local_148);
        FUN_143e1d760(local_238,local_1f8);
        while (cVar1 = FUN_143e1d9e0(local_238), cVar1 != '\0') {
          local_24c = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_238);
          (**(code **)(**(longlong **)(param_1 + 8) + 0x28))
                    (*(undefined8 *)(param_1 + 8),local_24c,local_170);
          local_268 = local_148;
          local_270 = local_198;
          local_278 = local_170;
          local_260 = param_4;
          cVar1 = FUN_143be8c90(param_1,param_3,local_258,local_24c);
          if (cVar1 != '\0') {
            local_278 = (undefined1 *)((ulonglong)local_278 & 0xffffffff00000000);
            local_250 = FUN_143c12ae0(*(undefined8 *)(param_1 + 0x48),param_2,local_198,local_118);
            if (local_250 < 0x20) {
              local_270 = (undefined1 *)CONCAT44(local_270._4_4_,0xffffffff);
              local_278 = (undefined1 *)CONCAT44(local_278._4_4_,local_250);
              local_268 = param_4;
              local_244 = FUN_143be4a30(param_1,param_2,local_148,local_118);
              if (local_244 != -1) {
                local_270 = (undefined1 *)CONCAT44(local_270._4_4_,local_244);
                local_278 = (undefined1 *)CONCAT44(local_278._4_4_,local_250);
                local_268 = param_4;
                FUN_143be4b80(param_1,param_2,local_198,local_118);
              }
            }
          }
        }
        FUN_143e1d7c0(local_238);
        FUN_143a8dc60(local_148);
        FUN_143a8dc60(local_198);
        FUN_143a8dc60(local_170);
        FUN_143b11ff0(local_1f8);
        return;
      }
      if (local_254 < 0x10000) {
        local_248 = 1;
      }
      else {
        local_248 = 2;
      }
    }
  }
  return;
}



// FUNCTION 143be6480 FUN_143be6480 body=177 status=ok
// SIG undefined FUN_143be6480(void)

undefined4
FUN_143be6480(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143be4a30(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  uVar1 = FUN_143be4b80(param_1,param_2,param_3,param_4,param_5,uVar1,param_7);
  FUN_143be6120(param_1,param_2,param_3,param_7);
  return uVar1;
}



// FUNCTION 143be6540 FUN_143be6540 body=203 status=ok
// SIG undefined FUN_143be6540(void)

uint FUN_143be6540(longlong param_1,uint param_2,longlong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint local_24;
  uint local_1c;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    local_24 = 0;
    uVar2 = local_24;
    local_1c = param_2;
    do {
      while( true ) {
        local_24 = uVar2;
        uVar1 = (int)(local_24 + local_1c) / 2;
        uVar2 = (uint)((ulonglong)
                       *(undefined8 *)
                        (param_3 + (longlong)*(int *)(param_1 + (longlong)(int)uVar1 * 4) * 8) >>
                      0x20);
        if (param_4 == uVar2) {
          return uVar1;
        }
        if (uVar2 <= param_4) break;
        uVar2 = local_24;
        local_1c = uVar1;
        if (uVar1 == local_24) {
          return ~local_24;
        }
      }
      uVar2 = uVar1;
    } while (uVar1 != local_24);
    uVar2 = ~(local_24 + 1);
  }
  return uVar2;
}



// FUNCTION 143be6610 FUN_143be6610 body=160 status=ok
// SIG undefined FUN_143be6610(void)

undefined4 FUN_143be6610(ulonglong param_1)

{
  char cVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  cVar1 = FUN_143be85a0(param_1);
  if (cVar1 == '\0') {
    if ((param_1 & 0xff00000000000000) == 0) {
      if ((param_1 & 0xff000000) == 0) {
        if (param_1 == 0) {
          local_18 = 0xf;
        }
        else {
          local_18 = 2;
        }
        local_14 = local_18;
      }
      else {
        local_14 = 1;
      }
      local_10 = local_14;
    }
    else {
      local_10 = 0;
    }
    local_c = local_10;
  }
  else {
    local_c = FUN_143be9bf0(param_1);
  }
  return local_c;
}



// FUNCTION 143be66b0 FUN_143be66b0 body=54 status=ok
// SIG undefined FUN_143be66b0(void)

ulonglong FUN_143be66b0(ulonglong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143be90c0(param_2);
  return param_1 & 0xfffffffff00000ff | uVar1;
}



// FUNCTION 143be66f0 FUN_143be66f0 body=64 status=ok
// SIG undefined FUN_143be66f0(void)

ulonglong FUN_143be66f0(ulonglong param_1,undefined4 param_2)

{
  ulonglong uVar1;
  
  uVar1 = FUN_143be90d0(param_2);
  return param_1 & 0xffff00000fffffff | uVar1;
}



// FUNCTION 143be6730 FUN_143be6730 body=591 status=ok
// SIG undefined FUN_143be6730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be6730(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 *local_168;
  undefined8 local_158;
  undefined8 local_150;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined1 local_128 [64];
  undefined1 local_e8 [96];
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_130 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  local_150 = FUN_143a8d4f0(local_38,1,L"[:NFD_QC=N:]",0xffffffff);
  local_140 = local_150;
  FUN_143b16d40(local_e8,local_150,param_2);
  FUN_143a8dc60(local_38);
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143b15610(local_e8,0xac00,0xd7a3);
    FUN_143a8ac30(local_60);
    FUN_143a8ac30(local_88);
    FUN_143e1d760(local_128,local_e8);
    while (cVar1 = FUN_143e1d9e0(local_128), cVar1 != '\0') {
      uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_128);
      local_158 = *(undefined8 *)(param_1 + 8);
      local_148 = **(longlong **)(param_1 + 8);
      (**(code **)(local_148 + 0x28))(local_158,uVar2,local_88);
      uVar2 = _aligned_malloc_dbg(*(undefined8 *)(param_1 + 0x48),local_88,param_1 + 0xb8,0);
      *(undefined4 *)(param_1 + 0x1b0) = uVar2;
      if (*(int *)(param_1 + 0x1b0) < 0x20) {
        local_138 = FUN_143e1d8b0(local_128);
        local_170 = 0xffffffff;
        local_178 = *(undefined4 *)(param_1 + 0x1b0);
        local_168 = param_2;
        FUN_143be4a30(param_1,local_60,local_138);
      }
    }
    FUN_143e1d7c0(local_128);
    FUN_143a8dc60(local_88);
    FUN_143a8dc60(local_60);
    FUN_143b11ff0(local_e8);
  }
  else {
    FUN_143b11ff0(local_e8);
  }
  return;
}



// FUNCTION 143be6980 FUN_143be6980 body=144 status=ok
// SIG undefined FUN_143be6980(void)

int FUN_143be6980(longlong param_1,int param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int local_res10;
  int local_18;
  
  local_18 = 0;
  local_res10 = param_2;
  while( true ) {
    if (local_res10 == 0) {
      return local_18;
    }
    uVar1 = *(undefined8 *)(param_1 + (longlong)local_res10 * 8);
    iVar3 = FUN_143be9be0(uVar1);
    if (iVar3 < param_3) break;
    iVar3 = FUN_143be9be0(uVar1);
    if (iVar3 == param_3) {
      cVar2 = FUN_143be8520(uVar1);
      if (cVar2 == '\0') {
        return local_18;
      }
      local_18 = local_18 + 1;
    }
    local_res10 = FUN_143be90a0(uVar1);
  }
  return local_18;
}



// FUNCTION 143be6a10 FUN_143be6a10 body=18 status=ok
// SIG undefined FUN_143be6a10(void)

void FUN_143be6a10(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x169) = 1;
  return;
}



// FUNCTION 143be6a30 FUN_143be6a30 body=460 status=ok
// SIG undefined FUN_143be6a30(void)

void FUN_143be6a30(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  SchedulerBase *pSVar3;
  undefined1 local_58 [8];
  undefined8 *local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  SchedulerResourceManagement local_28 [16];
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    local_48 = FUN_143a8d310(0x180);
    if (local_48 == 0) {
      local_40 = 0;
    }
    else {
      local_40 = FUN_143c0e990(local_48,param_2);
    }
    local_38 = local_40;
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
              (local_58,local_40);
    cVar1 = FUN_143b1fd90(local_58);
    if (cVar1 == '\0') {
      uVar2 = FUN_143a8b510(local_58);
      FUN_143c12f90(uVar2,*(undefined8 *)(param_1 + 0x28),param_2);
      pSVar3 = (SchedulerBase *)
               TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
               ::GetObjectForTimerManager(param_1 + 0x1d8);
      Concurrency::details::SchedulerResourceManagement::SchedulerResourceManagement
                (local_28,pSVar3);
      uVar2 = FUN_143a8b510(local_58);
      FUN_143c113e0(uVar2,*(undefined8 *)(param_1 + 0x48),local_28,param_2);
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        local_50 = *(undefined8 **)(param_1 + 0x48);
        local_18 = local_50;
        if (local_50 == (undefined8 *)0x0) {
          local_30 = 0;
        }
        else {
          local_30 = (**(code **)*local_50)(local_50,1);
        }
        uVar2 = FUN_143b20430(local_58);
        *(undefined8 *)(param_1 + 0x48) = uVar2;
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
        FUN_143b36bb0(local_58);
      }
      else {
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
        FUN_143b36bb0(local_58);
      }
    }
    else {
      *param_2 = 7;
      FUN_143b36bb0(local_58);
    }
  }
  return;
}



// FUNCTION 143be6c00 FUN_143be6c00 body=305 status=ok
// SIG undefined FUN_143be6c00(void)

undefined4 FUN_143be6c00(longlong param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 local_18;
  
  uVar4 = FUN_143bca400(param_1 + 0x1d8,param_2);
  iVar2 = FUN_143be9be0(uVar4);
  if (iVar2 < param_3) {
    if (param_3 == 1) {
      cVar1 = FUN_143be9140(uVar4);
    }
    else {
      cVar1 = FUN_143be9170(uVar4);
    }
    if (cVar1 != '\0') {
      uVar3 = FUN_143be90a0(uVar4);
      local_18 = FUN_143bca400(param_1 + 0x1d8,uVar3);
      do {
        do {
          param_2 = FUN_143be90a0(local_18);
          local_18 = FUN_143bca400(param_1 + 0x1d8,param_2);
          cVar1 = FUN_143be8520(local_18);
        } while (cVar1 != '\0');
        iVar2 = FUN_143be9be0(local_18);
      } while (param_3 < iVar2);
    }
  }
  return param_2;
}



// FUNCTION 143be6d40 FUN_143be6d40 body=305 status=ok
// SIG undefined FUN_143be6d40(void)

undefined8 FUN_143be6d40(longlong param_1,int param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    while (*(int *)(param_1 + 0x1b0) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0xb8 + (longlong)(*(int *)(param_1 + 0x1b0) + -1) * 8);
      iVar2 = FUN_143be6610(local_18);
      if (iVar2 <= param_2) goto LAB_143be6e07;
      *(int *)(param_1 + 0x1b0) = *(int *)(param_1 + 0x1b0) + -1;
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    local_18 = 0;
    *(undefined4 *)(param_1 + 0x1b0) = 1;
LAB_143be6e07:
    cVar1 = FUN_143be85a0(local_18);
    if (cVar1 == '\0') {
      if ((char)((ulonglong)local_18 >> 0x38) == -2) {
        *param_4 = 0x10;
        *param_3 = "tailoring relative to an unassigned code point not supported";
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_143be6f90(param_1,local_18,param_2,param_4);
      }
    }
    else {
      uVar3 = FUN_143be7d00(local_18);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



// FUNCTION 143be6e80 FUN_143be6e80 body=270 status=ok
// SIG undefined FUN_143be6e80(void)

ulonglong FUN_143be6e80(longlong param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(param_1 + 0x1d8);
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x1b8);
    uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(param_1 + 0x1b8);
    uVar3 = FUN_143be6540(uVar6,uVar2,uVar5,param_2);
    if ((int)uVar3 < 0) {
      uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 0x1d8);
      uVar5 = FUN_143be9100(param_2);
      FUN_143b62060(param_1 + 0x1d8,uVar5,param_3);
      FUN_143e1ccc0(param_1 + 0x1b8,uVar4,~uVar3,param_3);
      uVar7 = (ulonglong)uVar4;
    }
    else {
      uVar7 = FUN_143b59890(param_1 + 0x1b8,uVar3);
    }
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 143be6f90 FUN_143be6f90 body=201 status=ok
// SIG undefined FUN_143be6f90(void)

undefined4 FUN_143be6f90(undefined8 param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_res10;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    uVar2 = FUN_143be6e80(param_1,param_2 >> 0x20 & 0xffffffff,param_4);
    if (0 < param_3) {
      local_res10 = (uint)param_2;
      uVar2 = FUN_143be7060(param_1,uVar2,local_res10 >> 0x10,1,param_4);
      if (1 < param_3) {
        uVar2 = FUN_143be7060(param_1,uVar2,local_res10 & 0x3f3f,2,param_4);
      }
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143be7060 FUN_143be7060 body=356 status=ok
// SIG undefined FUN_143be7060(void)

ulonglong FUN_143be7060(longlong param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint local_res10;
  undefined8 local_18;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    if (param_3 == 0x500) {
      uVar5 = FUN_143be6c00(param_1,param_2,param_4);
    }
    else {
      local_18 = FUN_143bca400(param_1 + 0x1d8,param_2);
      uVar2 = param_2;
      do {
        do {
          do {
            local_res10 = uVar2;
            uVar2 = FUN_143be90a0(local_18);
            if (uVar2 == 0) goto LAB_143be7173;
            local_18 = FUN_143bca400(param_1 + 0x1d8,uVar2);
            iVar3 = FUN_143be9be0(local_18);
          } while (param_4 < iVar3);
          if (iVar3 < param_4) goto LAB_143be7173;
          cVar1 = FUN_143be8520(local_18);
        } while (cVar1 != '\0');
        uVar4 = FUN_143be9cd0(local_18);
        if (uVar4 == param_3) {
          return (ulonglong)uVar2;
        }
      } while (uVar4 <= param_3);
LAB_143be7173:
      uVar5 = FUN_143be90f0(param_3);
      uVar6 = FUN_143be90e0(param_4);
      uVar5 = FUN_143be7d50(param_1,local_res10,uVar2,uVar5 | uVar6,param_5);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143be71d0 FUN_143be71d0 body=18 status=ok
// SIG undefined FUN_143be71d0(void)

undefined8 FUN_143be71d0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



// FUNCTION 143be71f0 FUN_143be71f0 body=37 status=ok
// SIG undefined FUN_143be71f0(void)

undefined4 FUN_143be71f0(longlong *param_1)

{
  return *(undefined4 *)(*param_1 + (ulonglong)*(uint *)(*param_1 + 8) * 4);
}



// FUNCTION 143be7220 FUN_143be7220 body=31 status=ok
// SIG undefined FUN_143be7220(void)

void FUN_143be7220(undefined8 param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_143be71f0(param_1);
  FUN_143bd8420(uVar1);
  return;
}



// FUNCTION 143be7240 FUN_143be7240 body=41 status=ok
// SIG undefined FUN_143be7240(void)

uint FUN_143be7240(longlong *param_1)

{
  return *(uint *)(*param_1 + (ulonglong)*(uint *)(*param_1 + 4) * 4) & 0xffffff7f;
}



// FUNCTION 143be7270 FUN_143be7270 body=41 status=ok
// SIG undefined FUN_143be7270(void)

uint FUN_143be7270(longlong *param_1)

{
  return *(uint *)(*param_1 + (ulonglong)*(uint *)*param_1 * 4) & 0xffffff7f;
}



// FUNCTION 143be72a0 FUN_143be72a0 body=55 status=ok
// SIG undefined FUN_143be72a0(void)

undefined4 FUN_143be72a0(longlong param_1,uint param_2)

{
  undefined4 local_18;
  
  if ((*(uint *)(param_1 + 0x10) & param_2) == 0) {
    local_18 = 0x10;
  }
  else {
    local_18 = 0x11;
  }
  return local_18;
}



// FUNCTION 143be72e0 FUN_143be72e0 body=34 status=ok
// SIG undefined FUN_143be72e0(void)

uint FUN_143be72e0(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x10) >> 0x10 & 0xff00;
}



// FUNCTION 143be7310 FUN_143be7310 body=45 status=ok
// SIG undefined FUN_143be7310(void)

uint FUN_143be7310(longlong *param_1)

{
  return *(uint *)(*param_1 + (ulonglong)(*(int *)(*param_1 + 8) - 1) * 4) & 0xffffff7f;
}



// FUNCTION 143be7340 FUN_143be7340 body=45 status=ok
// SIG undefined FUN_143be7340(void)

uint FUN_143be7340(longlong *param_1)

{
  return *(uint *)(*param_1 + (ulonglong)(*(int *)(*param_1 + 4) - 1) * 4) & 0xffffff7f;
}



// FUNCTION 143be7370 FUN_143be7370 body=141 status=ok
// SIG undefined FUN_143be7370(void)

undefined8
FUN_143be7370(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  uVar2 = FUN_143b5f3d0(param_2,param_3,param_5);
  *(undefined8 *)(param_1 + 8) = uVar2;
  return uVar2;
}



// FUNCTION 143be7400 FUN_143be7400 body=34 status=ok
// SIG undefined FUN_143be7400(void)

uint FUN_143be7400(longlong *param_1)

{
  return *(uint *)(*param_1 + 0x10) >> 8 & 0xff00;
}



// FUNCTION 143be7430 FUN_143be7430 body=1860 status=ok
// SIG undefined FUN_143be7430(void)

ulonglong FUN_143be7430(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  ushort uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  int local_64;
  int local_60;
  ulonglong local_58;
  int local_4c;
  undefined8 local_48;
  undefined8 local_30;
  
  local_60 = 0;
  bVar1 = false;
  uVar4 = FUN_143a8e4f0(param_2,1);
  switch(uVar4 - 0x2800) {
  case 0:
    return 0;
  case 1:
    return 0;
  case 2:
    uVar7 = FUN_143be6f90(param_1,0,2,param_4);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 != '\0') {
      return 0;
    }
    uVar11 = FUN_143bca400(param_1 + 0x1d8,uVar7);
    iVar8 = FUN_143be90a0(uVar11);
    if (iVar8 != 0) {
      uVar11 = FUN_143bca400(param_1 + 0x1d8,iVar8);
      cVar2 = FUN_143be8520(uVar11);
      if ((cVar2 != '\0') && (iVar9 = FUN_143be9be0(uVar11), iVar9 == 2)) {
        uVar10 = FUN_143be9c70(iVar8,2);
        return uVar10;
      }
    }
    uVar5 = FUN_143be7270(param_1 + 0x30);
    return (ulonglong)uVar5;
  case 3:
    uVar5 = FUN_143be7340(param_1 + 0x30);
    local_58 = (ulonglong)uVar5;
    local_60 = 2;
    break;
  case 4:
    uVar7 = FUN_143be6f90(param_1,0,1,param_4);
    cVar2 = FUN_143a8b0e0(*param_4);
    if (cVar2 != '\0') {
      return 0;
    }
    local_30 = FUN_143bca400(param_1 + 0x1d8,uVar7);
    do {
      local_4c = FUN_143be90a0(local_30);
      if (local_4c == 0) goto LAB_143be76d3;
      local_30 = FUN_143bca400(param_1 + 0x1d8,local_4c);
      iVar8 = FUN_143be9be0(local_30);
      if (iVar8 < 1) goto LAB_143be76d3;
    } while (iVar8 != 1);
    cVar2 = FUN_143be8520(local_30);
    if (cVar2 != '\0') {
      cVar2 = FUN_143be9170(local_30);
      if (cVar2 != '\0') {
        uVar7 = FUN_143be90a0(local_30);
        uVar11 = FUN_143bca400(param_1 + 0x1d8,uVar7);
        local_4c = FUN_143be90a0(uVar11);
      }
      uVar10 = FUN_143be9c70(local_4c,1);
      return uVar10;
    }
LAB_143be76d3:
    uVar5 = FUN_143be7240(param_1 + 0x30);
    local_58 = (ulonglong)uVar5;
    local_60 = 1;
    break;
  case 5:
    uVar5 = FUN_143be7310(param_1 + 0x30);
    local_58 = (ulonglong)uVar5;
    local_60 = 1;
    break;
  case 6:
    local_58 = FUN_143be7220(param_1 + 0x30);
    bVar1 = true;
    break;
  case 7:
    local_58 = FUN_143c0a910(param_1 + 0x30,*(int *)(param_1 + 0x40) + 1);
    break;
  case 8:
    local_58 = FUN_143c0a340(param_1 + 0x30,*(int *)(param_1 + 0x40) + 1);
    bVar1 = true;
    break;
  case 9:
    uVar7 = FUN_143b679f0(*(undefined8 *)(param_1 + 0x28),0x11);
    local_58 = FUN_143c0a340(param_1 + 0x30,uVar7);
    break;
  case 10:
    uVar7 = FUN_143b64340(*(undefined8 *)(param_1 + 0x28),0x4e00);
    local_58 = FUN_143bd81d0(*(undefined8 *)(param_1 + 0x28),0x4e00,uVar7);
    break;
  case 0xb:
    *param_4 = 0x10;
    *param_3 = "reset to [last implicit] not supported";
    return 0;
  case 0xc:
    local_58 = FUN_143bd8420(0xff020200);
    bVar1 = true;
    break;
  case 0xd:
    *param_4 = 1;
    *param_3 = "LDML forbids tailoring to U+FFFF";
    return 0;
  default:
    return 0;
  }
  local_64 = FUN_143be6f90(param_1,local_58,local_60,param_4);
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    local_48 = FUN_143bca400(param_1 + 0x1d8,local_64);
    iVar8 = local_64;
    uVar11 = local_48;
    if ((uVar4 - 0x2800 & 1) == 0) {
      cVar2 = FUN_143be9110(local_48);
      if ((cVar2 == '\0') && (bVar1)) {
        local_64 = FUN_143be90a0(local_48);
        if (local_64 == 0) {
          uVar7 = (undefined4)(local_58 >> 0x20);
          uVar6 = FUN_143c0a310(param_1 + 0x30,uVar7);
          uVar3 = FUN_143be83f0(*(undefined8 *)(param_1 + 0x28),uVar7);
          uVar7 = FUN_143c0a3d0(param_1 + 0x30,uVar7,uVar6,uVar3);
          local_58 = FUN_143bd8420(uVar7);
          local_64 = FUN_143be6f90(param_1,local_58,0,param_4);
          cVar2 = FUN_143a8b0e0(*param_4);
          if (cVar2 != '\0') {
            return 0;
          }
          local_48 = FUN_143bca400(param_1 + 0x1d8,local_64);
        }
        else {
          local_48 = FUN_143bca400(param_1 + 0x1d8,local_64);
          local_58 = FUN_143be9c70(local_64,local_60);
        }
      }
      cVar2 = FUN_143be9110(local_48);
      if (cVar2 != '\0') {
        cVar2 = FUN_143be9140(local_48);
        if (cVar2 != '\0') {
          uVar7 = FUN_143be90a0(local_48);
          uVar11 = FUN_143bca400(param_1 + 0x1d8,uVar7);
          local_64 = FUN_143be90a0(uVar11);
          local_48 = FUN_143bca400(param_1 + 0x1d8,local_64);
        }
        cVar2 = FUN_143be9170(local_48);
        if (cVar2 != '\0') {
          uVar7 = FUN_143be90a0(local_48);
          uVar11 = FUN_143bca400(param_1 + 0x1d8,uVar7);
          local_64 = FUN_143be90a0(uVar11);
        }
        local_58 = FUN_143be9c70(local_64,local_60);
      }
    }
    else {
      do {
        local_48 = uVar11;
        local_64 = iVar8;
        iVar8 = FUN_143be90a0(local_48);
        if (iVar8 == 0) break;
        uVar11 = FUN_143bca400(param_1 + 0x1d8,iVar8);
        iVar9 = FUN_143be9be0(uVar11);
      } while (local_60 <= iVar9);
      cVar2 = FUN_143be8520(local_48);
      if (cVar2 != '\0') {
        local_58 = FUN_143be9c70(local_64,local_60);
      }
    }
  }
  else {
    local_58 = 0;
  }
  return local_58;
}



// FUNCTION 143be7bb0 FUN_143be7bb0 body=34 status=ok
// SIG undefined FUN_143be7bb0(void)

int FUN_143be7bb0(longlong *param_1)

{
  return (*(uint *)(*param_1 + 0x10) & 0xff) << 8;
}



// FUNCTION 143be7be0 FUN_143be7be0 body=18 status=ok
// SIG undefined FUN_143be7be0(void)

undefined1 FUN_143be7be0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x168);
}



// FUNCTION 143be7c00 FUN_143be7c00 body=68 status=ok
// SIG undefined FUN_143be7c00(void)

bool FUN_143be7c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  
  cVar1 = FUN_143be8420(param_1,param_2,param_3);
  return cVar1 == '\0';
}



// FUNCTION 143be7c50 FUN_143be7c50 body=97 status=ok
// SIG undefined FUN_143be7c50(void)

undefined1 FUN_143be7c50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined2 uVar2;
  
  cVar1 = FUN_143be8420(param_1,param_2,param_3);
  if (cVar1 != '\0') {
    uVar2 = FUN_143a8e4f0(param_2,0);
    cVar1 = FUN_143be8490(uVar2);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143be7cc0 FUN_143be7cc0 body=57 status=ok
// SIG undefined FUN_143be7cc0(void)

uint FUN_143be7cc0(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 + 0xbfbff9e0;
  return uVar1 >> 0xb & 0xfe000 | uVar1 >> 10 & 0x1fc0 | uVar1 >> 8 & 0x3f;
}



// FUNCTION 143be7d00 FUN_143be7d00 body=77 status=ok
// SIG undefined FUN_143be7d00(void)

uint FUN_143be7d00(longlong param_1)

{
  int iVar1;
  
  iVar1 = (int)((ulonglong)(param_1 + -0x4040000006002000) >> 0x20);
  return iVar1 >> 0xb & 0xfe000U | iVar1 >> 10 & 0x1fc0U |
         (uint)((ulonglong)(param_1 + -0x4040000006002000) >> 0x18) & 0x3f;
}



// FUNCTION 143be7d50 FUN_143be7d50 body=327 status=ok
// SIG undefined FUN_143be7d50(void)

undefined4
FUN_143be7d50(longlong param_1,undefined4 param_2,int param_3,ulonglong param_4,undefined4 *param_5)

{
  char cVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    uVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x1d8);
    uVar3 = FUN_143be90d0(param_2);
    uVar4 = FUN_143be90c0(param_3);
    FUN_143b62060(param_1 + 0x1d8,param_4 | uVar3 | uVar4,param_5);
    cVar1 = FUN_143a8b0e0(*param_5);
    if (cVar1 == '\0') {
      uVar5 = FUN_143bca400(param_1 + 0x1d8,param_2);
      uVar5 = FUN_143be66b0(uVar5,uVar2);
      FUN_143e1d330(param_1 + 0x1d8,uVar5,param_2);
      if (param_3 != 0) {
        uVar5 = FUN_143bca400(param_1 + 0x1d8,param_3);
        uVar5 = FUN_143be66f0(uVar5,uVar2);
        FUN_143e1d330(param_1 + 0x1d8,uVar5,param_3);
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143be7ea0 FUN_143be7ea0 body=273 status=ok
// SIG undefined FUN_143be7ea0(void)

undefined8 FUN_143be7ea0(longlong param_1,int param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  int local_res10;
  undefined8 local_10;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_res10 = param_2;
    if ((0 < param_3) && (local_res10 = FUN_143be6c00(param_1,param_2,1), 1 < param_3)) {
      local_res10 = FUN_143be6c00(param_1,local_res10,2);
    }
    local_10 = FUN_143bca400(param_1 + 0x1d8,local_res10);
    iVar2 = local_res10;
    do {
      local_res10 = iVar2;
      iVar2 = FUN_143be90a0(local_10);
      if (iVar2 == 0) break;
      local_10 = FUN_143bca400(param_1 + 0x1d8,iVar2);
      iVar3 = FUN_143be9be0(local_10);
    } while (param_3 < iVar3);
    uVar4 = FUN_143be90e0(param_3);
    uVar5 = FUN_143be7d50(param_1,local_res10,iVar2,uVar4 | 8,param_4);
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}



// FUNCTION 143be7fc0 FUN_143be7fc0 body=1036 status=ok
// SIG undefined FUN_143be7fc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be7fc0(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 *param_5
                  ,longlong param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_5d8 [32];
  undefined4 *local_5b8;
  undefined4 *local_5b0;
  undefined1 local_5a8 [8];
  undefined1 local_5a0;
  undefined1 local_59f;
  undefined1 local_59e;
  undefined1 local_59d;
  longlong local_598;
  longlong local_590;
  int local_588;
  longlong local_580;
  undefined1 local_578 [16];
  undefined8 local_568;
  undefined8 local_560;
  undefined8 local_558;
  longlong local_550;
  undefined8 local_548;
  undefined1 local_540 [40];
  undefined1 local_518 [512];
  undefined1 local_318 [768];
  ulonglong local_18;
  
  local_548 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_5d8;
  local_560 = FUN_143b68090(param_7);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    if (param_6 != 0) {
      FUN_143a90910(param_6);
    }
    FUN_143be43d0(local_518,local_560,param_7);
    local_5a0 = 0;
    local_59f = 0;
    local_59e = 0;
    local_59d = 0;
    FUN_143be4320(local_578);
    local_5b0 = param_7;
    local_5b8 = param_5;
    uVar4 = FUN_143be9200(local_518,param_2,&local_5a0,local_578);
    UE4Tuple_Private::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
    ::TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>(local_5a8,uVar4)
    ;
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 == '\0') {
      lVar5 = FUN_143a8b510(local_5a8);
      local_590 = *(longlong *)(lVar5 + 0x18);
      lVar5 = FUN_143a8b510(local_5a8);
      local_588 = FUN_143bd5890(*(undefined8 *)(lVar5 + 0x10),local_590,local_318,0x180);
      if (((((param_3 != -1) && (iVar2 = FUN_143b64b30(local_590), param_3 != iVar2)) ||
           ((param_4 != -1 && (iVar2 = FUN_143be72a0(local_590,1), param_4 != iVar2)))) ||
          (local_588 != *(int *)(local_590 + 0x30))) ||
         ((-1 < local_588 &&
          (iVar2 = _guard_xfg_dispatch_icall_nop(local_318,(void *)(local_590 + 0x34),0x300),
          iVar2 != 0)))) {
        lVar5 = FUN_143a8b510(local_5a8);
        local_598 = FUN_143b60540(lVar5 + 0x18);
        if (local_598 == 0) {
          *param_7 = 7;
          FUN_143b36bb0(local_5a8);
          FUN_143be4750(local_578);
          FUN_143be4800(local_518);
          return;
        }
        if (param_3 != -1) {
          FUN_143bddf70(local_598,param_3,0,param_7);
        }
        if (param_4 != -1) {
          local_5b8 = param_7;
          FUN_143bddcd0(local_598,1,param_4,0);
        }
        local_550 = local_598 + 0x34;
        lVar5 = FUN_143a8b510(local_5a8);
        uVar3 = FUN_143bd5890(*(undefined8 *)(lVar5 + 0x10),local_598,local_550,0x180);
        *(undefined4 *)(local_598 + 0x30) = uVar3;
      }
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 == '\0') {
        lVar5 = FUN_143a8b510(local_5a8);
        FUN_143a8d000(lVar5 + 0x48);
        uVar4 = FUN_143b20430(local_5a8);
        FUN_143b620d0(param_1,uVar4);
        FUN_143b36bb0(local_5a8);
        FUN_143be4750(local_578);
        FUN_143be4800(local_518);
      }
      else {
        FUN_143b36bb0(local_5a8);
        FUN_143be4750(local_578);
        FUN_143be4800(local_518);
      }
    }
    else {
      local_580 = FUN_143be71d0(local_518);
      if ((local_580 != 0) && (param_6 != 0)) {
        local_568 = FUN_143a8d9f0(local_540,local_580,0xffffffff,0);
        local_558 = local_568;
        FUN_143a8dcd0(param_6,local_568);
        FUN_143a8dc60(local_540);
      }
      FUN_143b36bb0(local_5a8);
      FUN_143be4750(local_578);
      FUN_143be4800(local_518);
    }
  }
  return;
}



// FUNCTION 143be83d0 FUN_143be83d0 body=27 status=ok
// SIG undefined FUN_143be83d0(void)

undefined1 FUN_143be83d0(longlong param_1,uint param_2)

{
  return *(undefined1 *)(*(longlong *)(param_1 + 0x48) + (ulonglong)param_2);
}



// FUNCTION 143be83f0 FUN_143be83f0 body=37 status=ok
// SIG undefined FUN_143be83f0(void)

void FUN_143be83f0(undefined8 param_1,uint param_2)

{
  FUN_143be83d0(param_1,param_2 >> 0x18);
  return;
}



// FUNCTION 143be8420 FUN_143be8420 body=101 status=ok
// SIG undefined FUN_143be8420(void)

undefined1 FUN_143be8420(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  
  cVar1 = FUN_143a8b110(*param_3);
  if ((cVar1 != '\0') &&
     (cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x48))
                        (*(undefined8 *)(param_1 + 0x10),param_2,param_3), cVar1 != '\0')) {
    return 1;
  }
  return 0;
}



// FUNCTION 143be8490 FUN_143be8490 body=47 status=ok
// SIG undefined FUN_143be8490(void)

undefined1 FUN_143be8490(int param_1)

{
  undefined1 local_18;
  
  if ((param_1 < 0xac00) || (0xd7a3 < param_1)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143be84c0 FUN_143be84c0 body=41 status=ok
// SIG undefined FUN_143be84c0(void)

bool FUN_143be84c0(int param_1)

{
  return param_1 - 0x1100U < 0x13;
}



// FUNCTION 143be84f0 FUN_143be84f0 body=41 status=ok
// SIG undefined FUN_143be84f0(void)

bool FUN_143be84f0(int param_1)

{
  return param_1 - 0x1161U < 0x15;
}



// FUNCTION 143be8520 FUN_143be8520 body=42 status=ok
// SIG undefined FUN_143be8520(void)

bool FUN_143be8520(ulonglong param_1)

{
  return (param_1 & 8) != 0;
}



// FUNCTION 143be8550 FUN_143be8550 body=75 status=ok
// SIG undefined FUN_143be8550(void)

undefined1 FUN_143be8550(uint param_1)

{
  undefined1 local_18;
  
  if ((((param_1 & 0xff) < 2) || ((param_1 >> 8 & 0xff) < 6)) || (0x45 < (param_1 >> 8 & 0xff))) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143be85a0 FUN_143be85a0 body=53 status=ok
// SIG undefined FUN_143be85a0(void)

undefined1 FUN_143be85a0(uint param_1)

{
  undefined1 local_18;
  
  if ((param_1 >> 0x18 < 6) || (0x45 < param_1 >> 0x18)) {
    local_18 = 0;
  }
  else {
    local_18 = 1;
  }
  return local_18;
}



// FUNCTION 143be85e0 FUN_143be85e0 body=58 status=ok
// SIG undefined FUN_143be85e0(void)

ulonglong FUN_143be85e0(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  return CONCAT44(param_1,param_2 << 0x10) | (ulonglong)param_3 | (ulonglong)(uint)(param_4 << 6);
}



// FUNCTION 143be8620 FUN_143be8620 body=1648 status=ok
// SIG undefined FUN_143be8620(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be8620(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 auStack_2b8 [32];
  char local_298;
  char local_297;
  char local_296;
  int local_294;
  undefined1 local_290;
  int local_28c;
  int local_288;
  int local_284;
  int local_280;
  undefined8 local_278;
  uint local_270;
  int local_26c;
  uint local_268;
  int local_264;
  int local_260;
  undefined4 local_25c;
  longlong local_258;
  int local_250;
  int local_24c;
  undefined4 local_248;
  int local_244;
  int local_240;
  int local_23c;
  undefined4 local_238;
  undefined1 local_228 [176];
  undefined1 local_178 [176];
  undefined1 local_c8 [176];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2b8;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    FUN_143c13b40(local_c8);
    FUN_143c13b40(local_178);
    FUN_143c13b40(local_228);
    local_258 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(param_1 + 0x1d8);
    local_264 = 0;
    while (iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(param_1 + 0x1b8), local_264 < iVar2) {
      local_26c = FUN_143b59890(param_1 + 0x1b8,local_264);
      local_278 = *(undefined8 *)(local_258 + (longlong)local_26c * 8);
      local_288 = FUN_143be9cf0(local_278);
      if (local_288 == 0) {
        local_24c = 0;
      }
      else {
        local_24c = 0x500;
      }
      local_294 = local_24c;
      local_28c = local_24c;
      local_280 = 0;
      local_296 = '\0';
      local_298 = '\0';
      local_297 = '\0';
      if (local_288 == 0) {
        local_248 = 0;
      }
      else {
        local_248 = FUN_143c0a310(param_1 + 0x30,local_288);
      }
      local_25c = local_248;
      local_284 = FUN_143be90a0(local_278);
      while (local_284 != 0) {
        local_26c = local_284;
        local_278 = *(undefined8 *)(local_258 + (longlong)local_284 * 8);
        local_284 = FUN_143be90a0(local_278);
        local_260 = FUN_143be9be0(local_278);
        if (local_260 == 3) {
          if (local_280 == 3) {
            *param_2 = 0xf;
            *(char **)(param_1 + 0xb0) = "quaternary tailoring gap too small";
            return;
          }
          local_280 = local_280 + 1;
        }
        else {
          if (local_260 == 2) {
            cVar1 = FUN_143be8520(local_278);
            if (cVar1 == '\0') {
              local_28c = FUN_143be9cd0(local_278);
              local_297 = '\0';
            }
            else {
              if (local_297 == '\0') {
                local_240 = FUN_143be6980(local_258,local_284,2);
                local_240 = local_240 + 1;
                if (local_28c == 0) {
                  local_28c = FUN_143be7bb0(param_1 + 0x30);
                  local_28c = local_28c + -0x100;
                  local_270 = FUN_143be7270(param_1 + 0x30);
                  local_270 = local_270 & 0x3f3f;
                }
                else if (local_28c == 0x200) {
                  local_270 = 0x500;
                }
                else if ((local_296 == '\0') && (local_298 == '\0')) {
                  local_270 = FUN_143c0a700(param_1 + 0x30,local_25c,local_294,local_28c);
                }
                else {
                  local_270 = FUN_143be7bb0(param_1 + 0x30);
                }
                FUN_143c14c70(local_228);
                cVar1 = FUN_143c13bc0(local_228,local_28c,local_270,local_240);
                if (cVar1 == '\0') {
                  *param_2 = 0xf;
                  *(char **)(param_1 + 0xb0) = "tertiary tailoring gap too small";
                  return;
                }
                local_297 = '\x01';
              }
              local_28c = FUN_143c14e30(local_228);
            }
          }
          else {
            if (local_260 == 1) {
              cVar1 = FUN_143be8520(local_278);
              if (cVar1 == '\0') {
                local_294 = FUN_143be9cd0(local_278);
                local_298 = '\0';
              }
              else {
                if (local_298 == '\0') {
                  local_23c = FUN_143be6980(local_258,local_284,1);
                  local_23c = local_23c + 1;
                  if (local_294 == 0) {
                    local_294 = FUN_143be7400(param_1 + 0x30);
                    local_294 = local_294 + -0x100;
                    local_268 = FUN_143be7240(param_1 + 0x30);
                    local_268 = local_268 >> 0x10;
                  }
                  else if (local_294 == 0x200) {
                    local_268 = 0x500;
                  }
                  else if (local_296 == '\0') {
                    local_268 = FUN_143c0a590(param_1 + 0x30,local_25c,local_294);
                  }
                  else {
                    local_268 = FUN_143be7400(param_1 + 0x30);
                  }
                  if (local_294 == 0x500) {
                    local_294 = FUN_143be72e0(param_1 + 0x30);
                  }
                  FUN_143c14ba0(local_178);
                  cVar1 = FUN_143c13bc0(local_178,local_294,local_268,local_23c);
                  if (cVar1 == '\0') {
                    *param_2 = 0xf;
                    *(char **)(param_1 + 0xb0) = "secondary tailoring gap too small";
                    return;
                  }
                  local_298 = '\x01';
                }
                local_294 = FUN_143c14e30(local_178);
              }
            }
            else {
              if (local_296 == '\0') {
                local_244 = FUN_143be6980(local_258,local_284,0);
                local_244 = local_244 + 1;
                local_290 = FUN_143be83f0(*(undefined8 *)(param_1 + 0x28),local_288);
                local_238 = FUN_143c0a3d0(param_1 + 0x30,local_288,local_25c,local_290);
                FUN_143c14aa0(local_c8,local_290);
                cVar1 = FUN_143c13bc0(local_c8,local_288,local_238,local_244);
                if (cVar1 == '\0') {
                  *param_2 = 0xf;
                  *(char **)(param_1 + 0xb0) = "primary tailoring gap too small";
                  return;
                }
                local_296 = '\x01';
              }
              local_288 = FUN_143c14e30(local_c8);
              local_294 = 0x500;
              local_298 = '\0';
            }
            if (local_294 == 0) {
              local_250 = 0;
            }
            else {
              local_250 = 0x500;
            }
            local_28c = local_250;
            local_297 = '\0';
          }
          local_280 = 0;
        }
        cVar1 = FUN_143be8520(local_278);
        if (cVar1 != '\0') {
          uVar3 = FUN_143be85e0(local_288,local_294,local_28c,local_280);
          *(undefined8 *)(local_258 + (longlong)local_26c * 8) = uVar3;
        }
      }
      local_264 = local_264 + 1;
    }
  }
  return;
}



// FUNCTION 143be8c90 FUN_143be8c90 body=835 status=ok
// SIG undefined FUN_143be8c90(void)

undefined8
FUN_143be8c90(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined4 *param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  byte local_38;
  byte local_37;
  int local_34;
  uint local_2c;
  int local_28;
  int local_20;
  int local_1c;
  int local_18;
  
  cVar1 = FUN_143a8b0e0(*param_8);
  if (cVar1 == '\0') {
    local_34 = FUN_143a90530(param_5,0,1);
    iVar2 = FUN_143a904f0(param_5);
    if ((local_34 != iVar2) &&
       (cVar1 = FUN_143b3e630(param_2,param_3,0x7fffffff,param_5,local_34,0x7fffffff), cVar1 != '\0'
       )) {
      FUN_143a90d20(param_6,param_2,0,param_3);
      uVar4 = FUN_143a90d20(param_7,param_2,0,param_3 - local_34);
      FUN_143a8e0c0(uVar4,param_4);
      local_2c = 0xffffffff;
      local_37 = 0;
      local_38 = 0;
      local_28 = param_3;
      while( true ) {
        if ((int)local_2c < 0) {
          iVar2 = FUN_143a904f0(param_2);
          if (iVar2 <= local_28) break;
          local_2c = FUN_143a8e3e0(param_2,local_28);
          local_37 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                               (*(undefined8 *)(param_1 + 8),local_2c);
        }
        iVar2 = FUN_143a904f0(param_5);
        if (iVar2 <= local_34) break;
        uVar3 = FUN_143a8e3e0(param_5,local_34);
        local_38 = (**(code **)(**(longlong **)(param_1 + 8) + 0x40))
                             (*(undefined8 *)(param_1 + 8),uVar3);
        if (local_38 == 0) {
          return 0;
        }
        if (local_37 < local_38) {
          return 0;
        }
        if (local_38 < local_37) {
          FUN_143a8e0c0(param_6,uVar3);
          if (uVar3 < 0x10000) {
            local_20 = 1;
          }
          else {
            local_20 = 2;
          }
        }
        else {
          if (uVar3 != local_2c) {
            return 0;
          }
          FUN_143a8e0c0(param_6,uVar3);
          if (uVar3 < 0x10000) {
            local_1c = 1;
            local_18 = 1;
            local_20 = local_1c;
          }
          else {
            local_1c = 2;
            local_18 = 2;
            local_20 = local_1c;
          }
          local_28 = local_28 + local_18;
          local_2c = 0xffffffff;
        }
        local_34 = local_34 + local_20;
      }
      if ((int)local_2c < 0) {
        iVar2 = FUN_143a904f0(param_5);
        if (local_34 < iVar2) {
          FUN_143acc540(param_6,param_5,local_34,0x7fffffff);
        }
      }
      else {
        if (local_37 < local_38) {
          return 0;
        }
        FUN_143acc540(param_6,param_2,local_28,0x7fffffff);
        FUN_143acc540(param_7,param_2,local_28,0x7fffffff);
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 143be8fe0 FUN_143be8fe0 body=88 status=ok
// SIG undefined FUN_143be8fe0(void)

ulonglong FUN_143be8fe0(longlong param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_143be8550(param_2);
  if (cVar1 == '\0') {
    uVar3 = 0x101000100;
  }
  else {
    iVar2 = FUN_143be7cc0(param_2);
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) |
            (ulonglong)((param_2 & 0xc0) << 8);
  }
  return uVar3;
}



// FUNCTION 143be9040 FUN_143be9040 body=88 status=ok
// SIG undefined FUN_143be9040(void)

ulonglong FUN_143be9040(longlong param_1,ulonglong param_2)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  
  cVar1 = FUN_143be85a0(param_2);
  if (cVar1 == '\0') {
    uVar3 = 0x101000100;
  }
  else {
    iVar2 = FUN_143be7d00(param_2);
    uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 8) + (longlong)iVar2 * 8) | param_2 & 0xc000;
  }
  return uVar3;
}



// FUNCTION 143be90a0 FUN_143be90a0 body=18 status=ok
// SIG undefined FUN_143be90a0(void)

uint FUN_143be90a0(int param_1)

{
  return param_1 >> 8 & 0xfffff;
}



// FUNCTION 143be90c0 FUN_143be90c0 body=14 status=ok
// SIG undefined FUN_143be90c0(void)

longlong FUN_143be90c0(int param_1)

{
  return (longlong)(param_1 << 8);
}



// FUNCTION 143be90d0 FUN_143be90d0 body=14 status=ok
// SIG undefined FUN_143be90d0(void)

longlong FUN_143be90d0(int param_1)

{
  return (longlong)param_1 << 0x1c;
}



// FUNCTION 143be90e0 FUN_143be90e0 body=10 status=ok
// SIG undefined FUN_143be90e0(void)

longlong FUN_143be90e0(int param_1)

{
  return (longlong)param_1;
}



// FUNCTION 143be90f0 FUN_143be90f0 body=13 status=ok
// SIG undefined FUN_143be90f0(void)

longlong FUN_143be90f0(uint param_1)

{
  return (ulonglong)param_1 << 0x30;
}



// FUNCTION 143be9100 FUN_143be9100 body=13 status=ok
// SIG undefined FUN_143be9100(void)

longlong FUN_143be9100(uint param_1)

{
  return (ulonglong)param_1 << 0x20;
}



// FUNCTION 143be9110 FUN_143be9110 body=42 status=ok
// SIG undefined FUN_143be9110(void)

bool FUN_143be9110(ulonglong param_1)

{
  return (param_1 & 0x60) != 0;
}



// FUNCTION 143be9140 FUN_143be9140 body=42 status=ok
// SIG undefined FUN_143be9140(void)

bool FUN_143be9140(ulonglong param_1)

{
  return (param_1 & 0x40) != 0;
}



// FUNCTION 143be9170 FUN_143be9170 body=42 status=ok
// SIG undefined FUN_143be9170(void)

bool FUN_143be9170(ulonglong param_1)

{
  return (param_1 & 0x20) != 0;
}



// FUNCTION 143be91a0 FUN_143be91a0 body=89 status=ok
// SIG undefined FUN_143be91a0(void)

void FUN_143be91a0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    (**(code **)(*(longlong *)(param_1 + 0x58) + 0x70))(param_1 + 0x58,param_2);
  }
  return;
}



// FUNCTION 143be9200 FUN_143be9200 body=1458 status=ok
// SIG undefined FUN_143be9200(void)

undefined8
FUN_143be9200(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 *param_6)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 local_e8 [8];
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_58 [88];
  
  local_68 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_6);
  if (cVar1 == '\0') {
    if (*(longlong *)(*(longlong *)(param_1 + 0x28) + 0x78) == 0) {
      *param_6 = 2;
      *(char **)(param_1 + 0xb0) = "missing root elements data, tailoring not supported";
      local_78 = 0;
    }
    else {
      local_e0 = FUN_143a8d310(0x208);
      if (local_e0 == 0) {
        local_d8 = 0;
      }
      else {
        local_d8 = FUN_143bd0ca0(local_e0,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18));
      }
      local_70 = local_d8;
      UE4Tuple_Private::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>::
      TTupleImpl<TIntegerSequence<unsigned_int,0,1>,FString,TSharedRef<FPlugin,0>_>
                (local_e8,local_d8);
      cVar1 = FUN_143b1fd90(local_e8);
      if (cVar1 == '\0') {
        uVar2 = FUN_143a8b510(local_e8);
        cVar1 = FUN_143b5f3a0(uVar2);
        if (cVar1 == '\0') {
          FUN_143c0aa50(local_58,*(undefined8 *)(param_1 + 0x28),param_6);
          cVar1 = FUN_143a8b0e0(*param_6);
          if (cVar1 != '\0') {
            local_b8 = 0;
            FUN_143b1b790(local_58);
            FUN_143b36bb0(local_e8);
            return local_b8;
          }
          *(undefined4 *)(param_1 + 0x40) =
               *(undefined4 *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x18) + 0x14);
          FUN_143be9bc0(local_58,param_1);
          FUN_143be9ba0(local_58,param_4);
          lVar3 = FUN_143a8b510(local_e8);
          uVar2 = FUN_143b60540(lVar3 + 0x18);
          FUN_143c0af60(local_58,param_2,uVar2,param_5,param_6);
          uVar2 = FUN_143ac06b0(local_58);
          *(undefined8 *)(param_1 + 0xb0) = uVar2;
          cVar1 = FUN_143a8b0e0(*param_6);
          if (cVar1 != '\0') {
            local_88 = 0;
            FUN_143b1b790(local_58);
            FUN_143b36bb0(local_e8);
            return local_88;
          }
          cVar1 = FUN_143be7be0(*(undefined8 *)(param_1 + 0x48));
          if (cVar1 == '\0') {
            lVar3 = FUN_143a8b510(local_e8);
            *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(param_1 + 0x28);
          }
          else {
            FUN_143be8620(param_1,param_6);
            FUN_143be6730(param_1,param_6);
            FUN_143be6a30(param_1,param_6);
            local_a8 = *(longlong *)(param_1 + 0x58);
            (**(code **)(local_a8 + 0x68))(param_1 + 0x58,0,0x7f);
            local_d0 = *(longlong *)(param_1 + 0x58);
            (**(code **)(local_d0 + 0x68))(param_1 + 0x58,0xc0,0xff);
            local_98 = *(longlong *)(param_1 + 0x58);
            (**(code **)(local_98 + 0x98))(param_1 + 0x58,0xac00,0xd7a3);
            FUN_143c13320(*(undefined8 *)(param_1 + 0x48),param_1 + 0x58,param_6);
            uVar2 = FUN_143a8b510(local_e8);
            FUN_143bd1090(uVar2,param_6);
            cVar1 = FUN_143a8b0e0(*param_6);
            if (cVar1 != '\0') {
              local_c8 = 0;
              FUN_143b1b790(local_58);
              FUN_143b36bb0(local_e8);
              return local_c8;
            }
            if (*(char *)(param_1 + 0x50) != '\0') {
              FUN_143be6a10(*(undefined8 *)(param_1 + 0x48));
            }
            lVar3 = FUN_143a8b510(local_e8);
            local_c0 = *(undefined8 *)(param_1 + 0x48);
            local_b0 = **(longlong **)(param_1 + 0x48);
            (**(code **)(local_b0 + 0x20))(local_c0,*(undefined8 *)(lVar3 + 0x1c8),param_6);
            lVar3 = FUN_143a8b510(local_e8);
            *(undefined8 *)(lVar3 + 0x1d0) = *(undefined8 *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x48) = 0;
          }
          cVar1 = FUN_143a8b0e0(*param_6);
          if (cVar1 != '\0') {
            local_a0 = 0;
            FUN_143b1b790(local_58);
            FUN_143b36bb0(local_e8);
            return local_a0;
          }
          lVar3 = FUN_143a8b510(local_e8);
          FUN_143a8dcd0(lVar3 + 0x20,param_2);
          lVar3 = FUN_143a8b510(local_e8);
          FUN_143a8ffc0(lVar3 + 0x20);
          local_90 = *(longlong *)(param_1 + 0x20) + 0x1c0;
          uVar2 = FUN_143a8b510(local_e8);
          FUN_143bd11d0(uVar2,local_90,param_3);
          local_80 = FUN_143b20430(local_e8);
          FUN_143b1b790(local_58);
          FUN_143b36bb0(local_e8);
          return local_80;
        }
      }
      *param_6 = 7;
      local_78 = 0;
      FUN_143b36bb0(local_e8);
    }
  }
  else {
    local_78 = 0;
  }
  return local_78;
}



// FUNCTION 143be97c0 FUN_143be97c0 body=20 status=ok
// SIG undefined FUN_143be97c0(void)

uint FUN_143be97c0(longlong param_1)

{
  return (uint)(param_1 >> 0x1c) & 0xfffff;
}



// FUNCTION 143be97e0 FUN_143be97e0 body=104 status=ok
// SIG undefined FUN_143be97e0(void)

longlong FUN_143be97e0(longlong param_1,int param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int local_18;
  
  if (param_2 == param_4) {
    for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
      if (*(longlong *)(param_1 + (longlong)local_18 * 8) !=
          *(longlong *)(param_3 + (longlong)local_18 * 8)) {
        return (ulonglong)(uint7)(int7)(int3)((uint)local_18 >> 8) << 8;
      }
    }
    lVar1 = CONCAT71((uint7)(uint3)((uint)param_2 >> 8),1);
  }
  else {
    lVar1 = (ulonglong)(uint3)((uint)param_4 >> 8) << 8;
  }
  return lVar1;
}



// FUNCTION 143be9850 FUN_143be9850 body=838 status=ok
// SIG undefined FUN_143be9850(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143be9850(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_238 [32];
  longlong local_218;
  longlong local_210;
  int local_208;
  int local_204;
  int local_200;
  int local_1fc;
  int local_1f8;
  uint local_1f4;
  uint local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  int local_1d8;
  int local_1d4;
  longlong local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined1 local_1b8 [416];
  ulonglong local_18;
  
  local_1c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_238;
  cVar2 = FUN_143a8b0e0(*param_4);
  if (cVar2 == '\0') {
    local_208 = 0;
    for (local_1f8 = 0; local_1f8 < *(int *)(param_1 + 0x1b0); local_1f8 = local_1f8 + 1) {
      iVar3 = FUN_143be6610(*(undefined8 *)(param_1 + 0xb8 + (longlong)local_1f8 * 8));
      if (iVar3 == 0) {
        local_208 = local_208 + 1;
      }
    }
    local_1e8 = 0;
    if (0 < local_208) {
      local_1d0 = FUN_143a8fe10(param_2);
      iVar3 = FUN_143a904f0(param_2);
      local_210 = local_1d0 + (longlong)iVar3 * 2;
      local_218 = local_1d0;
      FUN_143b611c0(local_1b8,*(undefined8 *)(param_1 + 0x28),0,local_1d0);
      local_1d4 = FUN_143bd7f70(local_1b8,param_4);
      local_1d4 = local_1d4 + -1;
      cVar2 = FUN_143a8b0e0(*param_4);
      if (cVar2 != '\0') {
        *param_3 = "fetching root CEs for tailored string";
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b8);
        return;
      }
      local_1f4 = 0;
      local_204 = 0;
      for (local_1fc = 0; local_1fc < local_1d4; local_1fc = local_1fc + 1) {
        local_1c8 = FUN_143bd32a0(local_1b8,local_1fc);
        uVar1 = local_1f4;
        if (local_1c8 >> 0x20 != 0) {
          local_204 = local_204 + 1;
          local_1f0 = (uint)local_1c8 >> 0xe & 3;
          if (local_204 < local_208) {
            local_1e8 = local_1e8 | (ulonglong)local_1f0 << ((char)local_204 * '\x02' - 2U & 0x3f);
          }
          else {
            uVar1 = local_1f0;
            if ((local_204 != local_208) && (uVar1 = local_1f4, local_1f0 != local_1f4)) {
              local_1f4 = 1;
              break;
            }
          }
        }
        local_1f4 = uVar1;
      }
      if (local_208 <= local_204) {
        local_1e8 = local_1e8 | (ulonglong)local_1f4 << ((char)local_208 * '\x02' - 2U & 0x3f);
      }
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_1b8);
    }
    for (local_200 = 0; local_200 < *(int *)(param_1 + 0x1b0); local_200 = local_200 + 1) {
      local_1e0 = *(ulonglong *)(param_1 + 0xb8 + (longlong)local_200 * 8) & 0xffffffffffff3fff;
      local_1d8 = FUN_143be6610(local_1e0);
      if (local_1d8 == 0) {
        local_1e0 = local_1e0 | (local_1e8 & 3) << 0xe;
        local_1e8 = (longlong)local_1e8 >> 2;
      }
      else if (local_1d8 == 2) {
        local_1e0 = local_1e0 | 0x8000;
      }
      *(ulonglong *)(param_1 + 0xb8 + (longlong)local_200 * 8) = local_1e0;
    }
  }
  return;
}



// FUNCTION 143be9ba0 FUN_143be9ba0 body=25 status=ok
// SIG undefined FUN_143be9ba0(void)

void FUN_143be9ba0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x40) = param_2;
  return;
}



// FUNCTION 143be9bc0 FUN_143be9bc0 body=25 status=ok
// SIG undefined FUN_143be9bc0(void)

void FUN_143be9bc0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 143be9be0 FUN_143be9be0 body=13 status=ok
// SIG undefined FUN_143be9be0(void)

uint FUN_143be9be0(uint param_1)

{
  return param_1 & 3;
}



// FUNCTION 143be9bf0 FUN_143be9bf0 body=16 status=ok
// SIG undefined FUN_143be9bf0(void)

uint FUN_143be9bf0(int param_1)

{
  return param_1 >> 8 & 3;
}


