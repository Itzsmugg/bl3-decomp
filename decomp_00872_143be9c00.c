// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143be9c00 FUN_143be9c00 body=108 status=ok
// SIG undefined FUN_143be9c00(void)

void FUN_143be9c00(longlong param_1,undefined8 param_2,undefined8 *param_3,undefined4 *param_4)

{
  char cVar1;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143c13820(*(undefined8 *)(param_1 + 0x48),param_2,param_4);
    cVar1 = FUN_143a8b0e0(*param_4);
    if (cVar1 != '\0') {
      *param_3 = "application of [suppressContractions [set]] failed";
    }
  }
  return;
}



// FUNCTION 143be9c70 FUN_143be9c70 body=86 status=ok
// SIG undefined FUN_143be9c70(void)

longlong FUN_143be9c70(uint param_1,int param_2)

{
  return ((longlong)(int)(param_1 & 0xfe000) << 0x2b) + 0x4040000006002000 +
         ((longlong)(int)(param_1 & 0x1fc0) << 0x2a) + (longlong)(int)((param_1 & 0x3f) << 0x18) +
         (longlong)(param_2 << 8);
}



// FUNCTION 143be9cd0 FUN_143be9cd0 body=20 status=ok
// SIG undefined FUN_143be9cd0(void)

ulonglong FUN_143be9cd0(ulonglong param_1)

{
  return param_1 >> 0x30;
}



// FUNCTION 143be9cf0 FUN_143be9cf0 body=15 status=ok
// SIG undefined FUN_143be9cf0(void)

longlong FUN_143be9cf0(longlong param_1)

{
  return param_1 >> 0x20;
}



// FUNCTION 143be9d00 FUN_143be9d00 body=99 status=ok
// SIG undefined FUN_143be9d00(void)

undefined8 * FUN_143be9d00(undefined8 *param_1,uint param_2)

{
  undefined8 local_18;
  
  if (param_2 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = FUN_143aa7a40((ulonglong)param_2 << 3);
  }
  *param_1 = local_18;
  *(undefined4 *)(param_1 + 1) = 0;
  *(uint *)((longlong)param_1 + 0xc) = param_2;
  return param_1;
}



// FUNCTION 143be9d70 FUN_143be9d70 body=748 status=ok
// SIG undefined FUN_143be9d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143be9d70(longlong param_1,longlong param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  int local_64;
  int local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  FUN_143a8ac30(param_1);
  FUN_143be9d00(param_1 + 0x28,0);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x5a) = 1;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  for (local_60 = 0; local_60 < 3; local_60 = local_60 + 1) {
    *(undefined8 *)(param_1 + 0x40 + (longlong)local_60 * 8) = 0;
  }
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_58 = param_2 + (longlong)param_3 * 0x28;
    iVar4 = FUN_143a904f0(local_58);
    if (iVar4 == 0) {
      *param_4 = 9;
    }
    else {
      sVar2 = FUN_143a8e4f0(local_58,0);
      if (sVar2 == 0x25) {
        local_64 = FUN_143acddd0(local_58,0x3a);
        if (local_64 == -1) {
          *param_4 = 9;
        }
        else {
          FUN_143a90d20(param_1,local_58,0,local_64);
          do {
            iVar4 = FUN_143a904f0(local_58);
            if (iVar4 <= local_64) break;
            local_64 = local_64 + 1;
            uVar3 = FUN_143a8e4f0(local_58,local_64);
            cVar1 = FUN_143b28380(uVar3);
          } while (cVar1 != '\0');
          FUN_143ace4e0(local_58,0,local_64);
        }
      }
      else {
        local_50 = FUN_143a8d4f0(local_38,1,L"%default",0xffffffff);
        local_48 = local_50;
        FUN_143a8dcd0(param_1,local_50);
        FUN_143a8dc60(local_38);
      }
      iVar4 = FUN_143a904f0(local_58);
      if (iVar4 == 0) {
        *param_4 = 9;
      }
      iVar4 = FUN_143b19dc0(param_1,&DAT_145d1ac2c,2,0);
      local_68 = iVar4 != 0;
      *(undefined1 *)(param_1 + 0x59) = local_68;
      cVar1 = FUN_143bea7b0(param_1,L"@noparse",8);
      if (cVar1 != '\0') {
        *(undefined1 *)(param_1 + 0x5a) = 0;
        iVar4 = FUN_143a904f0(param_1);
        FUN_143a99400(param_1,iVar4 + -8);
      }
    }
  }
  return param_1;
}



// FUNCTION 143bea060 FUN_143bea060 body=144 status=ok
// SIG undefined FUN_143bea060(void)

void FUN_143bea060(longlong *param_1)

{
  longlong lVar1;
  uint local_28;
  
  if (*param_1 != 0) {
    for (local_28 = 0; local_28 < *(uint *)(param_1 + 1); local_28 = local_28 + 1) {
      lVar1 = *(longlong *)(*param_1 + (ulonglong)local_28 * 8);
      if (lVar1 != 0) {
        FUN_143bea490(lVar1,1);
      }
    }
    FUN_143aa79f0(*param_1);
  }
  return;
}



// FUNCTION 143bea0f0 FUN_143bea0f0 body=350 status=ok
// SIG undefined FUN_143bea0f0(void)

void FUN_143bea0f0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_143bea490(*(longlong *)(param_1 + 0x38),1);
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_143bea490(*(longlong *)(param_1 + 0x40),1);
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FUN_143bea490(*(longlong *)(param_1 + 0x48),1);
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_143bea490(*(longlong *)(param_1 + 0x50),1);
  }
  FUN_143bea060(param_1 + 0x28);
  FUN_143a8dc60(param_1);
  return;
}



// FUNCTION 143bea250 FUN_143bea250 body=435 status=ok
// SIG undefined FUN_143bea250(void)

undefined8 FUN_143bea250(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint local_18;
  
  iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x28);
  iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_2 + 0x28);
  if ((iVar2 == iVar3) && (*(char *)(param_1 + 0x58) == *(char *)(param_2 + 0x58))) {
    cVar1 = FUN_143a8dd00(param_1,param_2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143bebd90(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
      if (cVar1 != '\0') {
        cVar1 = FUN_143bebd90(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_2 + 0x40));
        if (cVar1 != '\0') {
          cVar1 = FUN_143bebd90(*(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_2 + 0x48));
          if (cVar1 != '\0') {
            cVar1 = FUN_143bebd90(*(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_2 + 0x50));
            if (cVar1 != '\0') {
              local_18 = 0;
              while( true ) {
                uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                        ::GetIndex(param_1 + 0x28);
                if (uVar4 <= local_18) {
                  return 1;
                }
                uVar5 = FUN_143bea450(param_2 + 0x28,local_18);
                uVar6 = FUN_143bea450(param_1 + 0x28,local_18);
                cVar1 = FUN_143bea410(uVar6,uVar5);
                if (cVar1 != '\0') break;
                local_18 = local_18 + 1;
              }
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143bea410 FUN_143bea410 body=58 status=ok
// SIG undefined FUN_143bea410(void)

bool FUN_143bea410(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = FUN_143c15150(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143bea450 FUN_143bea450 body=63 status=ok
// SIG undefined FUN_143bea450(void)

undefined8 FUN_143bea450(longlong *param_1,uint param_2)

{
  undefined8 local_18;
  
  if (*param_1 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(*param_1 + (ulonglong)param_2 * 8);
  }
  return local_18;
}



// FUNCTION 143bea490 FUN_143bea490 body=54 status=ok
// SIG undefined FUN_143bea490(void)

undefined8 FUN_143bea490(undefined8 param_1,uint param_2)

{
  FUN_143c15090(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bea4d0 FUN_143bea4d0 body=172 status=ok
// SIG undefined FUN_143bea4d0(void)

void FUN_143bea4d0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 10;
    lVar1 = FUN_143aa7aa0(*param_1,(ulonglong)*(uint *)((longlong)param_1 + 0xc) << 3);
    *param_1 = lVar1;
  }
  if (*param_1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  else {
    *(undefined8 *)(*param_1 + (ulonglong)*(uint *)(param_1 + 1) * 8) = param_2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
  }
  return;
}



// FUNCTION 143bea580 FUN_143bea580 body=356 status=ok
// SIG undefined FUN_143bea580(void)

void FUN_143bea580(longlong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  uint local_18;
  uint local_14;
  
  FUN_143a8e070(param_2,param_1);
  FUN_143acc590(param_2,0x3a);
  FUN_143acc590(param_2,10);
  local_14 = 0;
  while( true ) {
    uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x28);
    if (uVar1 <= local_14) break;
    FUN_143b17350(param_2,L"    ",4);
    uVar2 = FUN_143bea450(param_1 + 0x28,local_14);
    FUN_143c15230(uVar2,param_2);
    FUN_143acc590(param_2,10);
    local_14 = local_14 + 1;
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FUN_143b17350(param_2,L"    ",4);
    FUN_143c15230(*(undefined8 *)(param_1 + 0x38),param_2);
    FUN_143acc590(param_2,10);
  }
  for (local_18 = 0; local_18 < 3; local_18 = local_18 + 1) {
    if (*(longlong *)(param_1 + 0x40 + (ulonglong)local_18 * 8) != 0) {
      FUN_143b17350(param_2,L"    ",4);
      FUN_143c15230(*(undefined8 *)(param_1 + 0x40 + (ulonglong)local_18 * 8),param_2);
      FUN_143acc590(param_2,10);
    }
  }
  return;
}



// FUNCTION 143bea6f0 FUN_143bea6f0 body=179 status=ok
// SIG undefined FUN_143bea6f0(void)

void FUN_143bea6f0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int local_38;
  
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    lVar3 = FUN_143beb900(param_1);
    for (local_38 = 0; local_38 < iVar1; local_38 = local_38 + 1) {
      lVar2 = *(longlong *)(lVar3 + (longlong)local_38 * 8);
      if (lVar2 != 0) {
        FUN_143bea490(lVar2,1);
      }
    }
    if (lVar3 != 0) {
      FUN_143aa79f0(lVar3);
    }
  }
  return;
}



// FUNCTION 143bea7b0 FUN_143bea7b0 body=121 status=ok
// SIG undefined FUN_143bea7b0(void)

bool FUN_143bea7b0(undefined8 param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int local_res18;
  
  local_res18 = param_3;
  if (param_3 < 0) {
    local_res18 = FreeLib(param_2);
  }
  iVar2 = FUN_143a904f0(param_1);
  cVar1 = FUN_143a8ebe0(param_1,iVar2 - local_res18,local_res18,param_2,0,local_res18);
  return cVar1 == '\0';
}



// FUNCTION 143bea830 FUN_143bea830 body=323 status=ok
// SIG undefined FUN_143bea830(void)

undefined8 FUN_143bea830(longlong param_1,double param_2)

{
  char cVar1;
  undefined8 uVar2;
  double dVar3;
  double local_res10;
  
  cVar1 = FUN_143beaf60(param_1);
  if (cVar1 != '\0') {
    uVar2 = FUN_143bea980(param_1,param_2);
    return uVar2;
  }
  local_res10 = param_2;
  if (param_2 < 0.0) {
    if (*(longlong *)(param_1 + 0x38) != 0) {
      return *(undefined8 *)(param_1 + 0x38);
    }
    local_res10 = -param_2;
  }
  dVar3 = (double)FUN_143a917b0(local_res10);
  if (local_res10 != dVar3) {
    if ((local_res10 < 1.0) && (*(longlong *)(param_1 + 0x48) != 0)) {
      return *(undefined8 *)(param_1 + 0x48);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      return *(undefined8 *)(param_1 + 0x40);
    }
  }
  if (*(longlong *)(param_1 + 0x50) == 0) {
    uVar2 = FUN_143beb9e0(local_res10 + 0.5);
    uVar2 = FUN_143beac10(param_1,uVar2);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x50);
  }
  return uVar2;
}



// FUNCTION 143bea980 FUN_143bea980 body=649 status=ok
// SIG undefined FUN_143bea980(void)

void FUN_143bea980(longlong param_1,double param_2)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  uint local_58;
  uint local_54;
  uint local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  uVar2 = FUN_143bea450(param_1 + 0x28,0);
  local_48 = FUN_143a8b510(uVar2);
  for (local_50 = 1;
      uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 0x28), local_50 < uVar1; local_50 = local_50 + 1) {
    uVar2 = FUN_143bea450(param_1 + 0x28,local_50);
    uVar2 = FUN_143a8b510(uVar2);
    local_48 = FUN_143bebde0(local_48,uVar2);
  }
  lVar3 = FUN_143beb9e0(param_2 * (double)local_48 + 0.5);
  FUN_143a91ad0();
  local_38 = FUN_143beb9e0();
  local_58 = 0;
  for (local_54 = 0;
      uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(param_1 + 0x28), local_54 < uVar1; local_54 = local_54 + 1) {
    uVar2 = FUN_143bea450(param_1 + 0x28,local_54);
    lVar4 = FUN_143a8b510(uVar2);
    local_40 = (lVar3 * lVar4) % local_48;
    if (local_48 - local_40 < local_40) {
      local_40 = local_48 - local_40;
    }
    if (local_40 < local_38) {
      local_38 = local_40;
      local_58 = local_54;
      if (local_40 == 0) break;
    }
  }
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1 + 0x28);
  if (local_58 + 1 < uVar1) {
    uVar2 = FUN_143bea450(param_1 + 0x28,local_58 + 1);
    lVar3 = FUN_143a8b510(uVar2);
    uVar2 = FUN_143bea450(param_1 + 0x28,local_58);
    lVar4 = FUN_143a8b510(uVar2);
    if (lVar3 == lVar4) {
      uVar2 = FUN_143bea450(param_1 + 0x28,local_58);
      lVar3 = FUN_143a8b510(uVar2);
      if (((double)lVar3 * param_2 < 0.5) || (2.0 <= (double)lVar3 * param_2)) {
        local_58 = local_58 + 1;
      }
    }
  }
  FUN_143bea450(param_1 + 0x28,local_58);
  return;
}



// FUNCTION 143beac10 FUN_143beac10 body=432 status=ok
// SIG undefined FUN_143beac10(void)

undefined8 FUN_143beac10(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res10;
  int local_28;
  int local_20;
  
  if (*(char *)(param_1 + 0x58) == '\0') {
    local_res10 = param_2;
    if (param_2 < 0) {
      if (*(longlong *)(param_1 + 0x38) != 0) {
        return *(undefined8 *)(param_1 + 0x38);
      }
      local_res10 = -param_2;
    }
    iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1 + 0x28);
    if (iVar2 < 1) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
    }
    else {
      local_20 = 0;
      while (local_28 = iVar2, local_20 < local_28) {
        iVar2 = (local_20 + local_28) / 2;
        uVar3 = FUN_143bea450(param_1 + 0x28,iVar2);
        lVar4 = FUN_143a8b510(uVar3);
        if (lVar4 == local_res10) {
          uVar3 = FUN_143bea450(param_1 + 0x28,iVar2);
          return uVar3;
        }
        uVar3 = FUN_143bea450(param_1 + 0x28,iVar2);
        lVar4 = FUN_143a8b510(uVar3);
        if (lVar4 <= local_res10) {
          local_20 = iVar2 + 1;
          iVar2 = local_28;
        }
      }
      if (local_28 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_143bea450(param_1 + 0x28,local_28 + -1);
        cVar1 = FUN_143c17930(uVar3,SUB84((double)local_res10,0));
        if (cVar1 != '\0') {
          if (local_28 == 1) {
            uVar3 = 0;
          }
          else {
            uVar3 = FUN_143bea450(param_1 + 0x28,local_28 + -2);
          }
        }
      }
    }
  }
  else {
    uVar3 = FUN_143bea980(param_1,SUB84((double)param_2,0));
  }
  return uVar3;
}



// FUNCTION 143beadd0 FUN_143beadd0 body=164 status=ok
// SIG undefined FUN_143beadd0(void)

void FUN_143beadd0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_143bea830(param_1,param_2);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    if (iVar1 < 0x32) {
      FUN_143c15690(lVar2,param_2,param_3,param_4);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return;
}



// FUNCTION 143beae80 FUN_143beae80 body=161 status=ok
// SIG undefined FUN_143beae80(void)

void FUN_143beae80(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_143beac10(param_1,param_2);
  if (lVar2 != 0) {
    iVar1 = *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
    if (iVar1 < 0x32) {
      FUN_143c15720(lVar2,param_2,param_3,param_4);
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + -1;
    }
    else {
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  return;
}



// FUNCTION 143beaf30 FUN_143beaf30 body=47 status=ok
// SIG undefined FUN_143beaf30(void)

undefined4 FUN_143beaf30(longlong *param_1)

{
  undefined4 local_18;
  
  if (*param_1 < 1) {
    local_18 = (undefined4)*param_1;
  }
  else {
    local_18 = 0xfffffffb;
  }
  return local_18;
}



// FUNCTION 143beaf60 FUN_143beaf60 body=15 status=ok
// SIG undefined FUN_143beaf60(void)

undefined1 FUN_143beaf60(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x58);
}



// FUNCTION 143beaf70 FUN_143beaf70 body=78 status=ok
// SIG undefined FUN_143beaf70(void)

undefined8 FUN_143beaf70(longlong *param_1)

{
  undefined8 local_18;
  
  if (((int)param_1[1] == 0) || (*param_1 == 0)) {
    local_18 = 0;
  }
  else {
    local_18 = *(undefined8 *)(*param_1 + (ulonglong)((int)param_1[1] - 1) * 8);
  }
  return local_18;
}



// FUNCTION 143beafc0 FUN_143beafc0 body=1037 status=ok
// SIG undefined FUN_143beafc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143beafc0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                       undefined8 param_5)

{
  int iVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  *local_310;
  byte local_308;
  char local_307;
  char local_306;
  char local_305;
  int local_304;
  int local_300;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  int local_2d8;
  int local_2d4;
  int local_2d0;
  int local_2cc;
  longlong local_2c8;
  undefined8 local_2c0;
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_2b8 [224];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_1d8 [224];
  call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
  local_f8 [224];
  ulonglong local_18;
  
  local_2c0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_338;
  FUN_143b69930(param_5,0);
  uVar2 = FUN_143a904f0(param_2);
  if ((int)uVar2 == 0) {
    uVar2 = uVar2 & 0xffffffffffffff00;
  }
  else {
    FUN_143b0fbf0(local_2e8);
    FUN_143b1e470(local_2f8,param_3);
    if (*(longlong *)(param_1 + 0x38) != 0) {
      FUN_143b686d0(local_2b8);
      local_310 = local_2b8;
      local_318 = param_4;
      local_306 = FUN_143c157b0(*(undefined8 *)(param_1 + 0x38),param_2,local_2f8,0);
      if (local_306 != '\0') {
        local_2d0 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                    ::GetIndex(local_2f8);
        iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(local_2e8);
        if (iVar1 < local_2d0) {
          FUN_143b687b0(param_5,local_2b8);
          FUN_143b70590(local_2e8,local_2f8);
        }
      }
      FUN_143b70590(local_2f8,param_3);
      Concurrency::
      call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
      ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                (local_2b8);
    }
    for (local_304 = 0; local_304 < 3; local_304 = local_304 + 1) {
      if (*(longlong *)(param_1 + 0x40 + (longlong)local_304 * 8) != 0) {
        FUN_143b686d0(local_1d8);
        local_310 = local_1d8;
        local_318 = param_4;
        local_305 = FUN_143c157b0(*(undefined8 *)(param_1 + 0x40 + (longlong)local_304 * 8),param_2,
                                  local_2f8,0);
        if (local_305 != '\0') {
          local_2d4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                      ::GetIndex(local_2f8);
          iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_2e8);
          if (iVar1 < local_2d4) {
            FUN_143b687b0(param_5,local_1d8);
            FUN_143b70590(local_2e8,local_2f8);
          }
        }
        FUN_143b70590(local_2f8,param_3);
        Concurrency::
        call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
        ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                  (local_1d8);
      }
    }
    local_2c8 = FUN_143beb9e0(param_4);
    local_300 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1 + 0x28);
LAB_143beb235:
    local_300 = local_300 + -1;
    if (-1 < local_300) {
      local_2d8 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_2e8);
      iVar1 = FUN_143a904f0(param_2);
      if (local_2d8 < iVar1) {
        if (*(char *)(param_1 + 0x58) == '\0') goto code_r0x000143beb281;
        goto LAB_143beb2aa;
      }
    }
    FUN_143b70590(param_3,local_2e8);
    local_308 = 1;
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_2f8);
    UCameraModifier_Climbing::~UCameraModifier_Climbing(local_2e8);
    uVar2 = (ulonglong)local_308;
  }
  return uVar2;
code_r0x000143beb281:
  uVar3 = FUN_143bea450(param_1 + 0x28,local_300);
  lVar4 = FUN_143a8b510(uVar3);
  if (lVar4 < local_2c8) {
LAB_143beb2aa:
    FUN_143b686d0(local_f8);
    uVar3 = FUN_143bea450(param_1 + 0x28,local_300);
    local_310 = local_f8;
    local_318 = param_4;
    local_307 = FUN_143c157b0(uVar3,param_2,local_2f8,*(undefined1 *)(param_1 + 0x58));
    if (local_307 != '\0') {
      local_2cc = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(local_2f8);
      iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(local_2e8);
      if (iVar1 < local_2cc) {
        FUN_143b687b0(param_5,local_f8);
        FUN_143b70590(local_2e8,local_2f8);
      }
    }
    FUN_143b70590(local_2f8,param_3);
    Concurrency::
    call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>::
    ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
              (local_f8);
  }
  goto LAB_143beb235;
}



// FUNCTION 143beb3d0 FUN_143beb3d0 body=1320 status=ok
// SIG undefined FUN_143beb3d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143beb3d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined4 *local_d0;
  uint local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  longlong local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143bea6f0(param_1 + 0x28);
    FUN_143a8ac30(local_38);
    local_c4 = 0;
    while (iVar2 = FUN_143a904f0(param_2), local_c4 < iVar2) {
      local_bc = FUN_143b0bae0(param_2,0x3b,local_c4);
      if (local_bc == -1) {
        local_bc = FUN_143a904f0(param_2);
      }
      FUN_143a90d20(local_38,param_2,local_c4,local_bc - local_c4);
      local_88 = param_1 + 0x28;
      uVar4 = FUN_143beaf70(param_1 + 0x28);
      local_d8 = local_88;
      local_d0 = param_4;
      FUN_143c165b0(local_38,param_1,uVar4,param_3);
      local_c4 = local_bc + 1;
    }
    local_b8 = 0;
    local_c8 = 0;
    while (uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(param_1 + 0x28), local_c8 < uVar3) {
      local_b0 = FUN_143bea450(param_1 + 0x28,local_c8);
      local_c0 = FUN_143beaf30(local_b0);
      if (local_c0 == -4) {
        if (*(longlong *)(param_1 + 0x50) != 0) {
          local_90 = *(longlong *)(param_1 + 0x50);
          local_68 = local_90;
          if (local_90 == 0) {
            local_58 = 0;
          }
          else {
            local_58 = FUN_143bea490(local_90,1);
          }
        }
        uVar4 = FUN_143beb950(param_1 + 0x28,local_c8);
        *(undefined8 *)(param_1 + 0x50) = uVar4;
      }
      else if (local_c0 == -3) {
        if (*(longlong *)(param_1 + 0x48) != 0) {
          local_a0 = *(longlong *)(param_1 + 0x48);
          local_80 = local_a0;
          if (local_a0 == 0) {
            local_78 = 0;
          }
          else {
            local_78 = FUN_143bea490(local_a0,1);
          }
        }
        uVar4 = FUN_143beb950(param_1 + 0x28,local_c8);
        *(undefined8 *)(param_1 + 0x48) = uVar4;
      }
      else if (local_c0 == -2) {
        if (*(longlong *)(param_1 + 0x40) != 0) {
          local_a8 = *(longlong *)(param_1 + 0x40);
          local_50 = local_a8;
          if (local_a8 == 0) {
            local_60 = 0;
          }
          else {
            local_60 = FUN_143bea490(local_a8,1);
          }
        }
        uVar4 = FUN_143beb950(param_1 + 0x28,local_c8);
        *(undefined8 *)(param_1 + 0x40) = uVar4;
      }
      else if (local_c0 == -1) {
        if (*(longlong *)(param_1 + 0x38) != 0) {
          local_98 = *(longlong *)(param_1 + 0x38);
          local_48 = local_98;
          if (local_98 == 0) {
            local_70 = 0;
          }
          else {
            local_70 = FUN_143bea490(local_98,1);
          }
        }
        uVar4 = FUN_143beb950(param_1 + 0x28,local_c8);
        *(undefined8 *)(param_1 + 0x38) = uVar4;
      }
      else if (local_c0 == 0) {
        FUN_143c177f0(local_b0,local_b8,param_4);
        cVar1 = FUN_143beaf60(param_1);
        if (cVar1 == '\0') {
          local_b8 = local_b8 + 1;
        }
        local_c8 = local_c8 + 1;
      }
      else {
        lVar5 = FUN_143a8b510(local_b0);
        if (lVar5 < local_b8) {
          *param_4 = 9;
          FUN_143a8dc60(local_38);
          return;
        }
        local_b8 = FUN_143a8b510(local_b0);
        cVar1 = FUN_143beaf60(param_1);
        if (cVar1 == '\0') {
          local_b8 = local_b8 + 1;
        }
        local_c8 = local_c8 + 1;
      }
    }
    FUN_143a8dc60(local_38);
  }
  return;
}



// FUNCTION 143beb900 FUN_143beb900 body=80 status=ok
// SIG undefined FUN_143beb900(void)

undefined8 FUN_143beb900(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_143bea4d0(param_1,0);
  uVar1 = *param_1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  return uVar1;
}



// FUNCTION 143beb950 FUN_143beb950 body=143 status=ok
// SIG undefined FUN_143beb950(void)

undefined8 FUN_143beb950(longlong *param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_18;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(*param_1 + (ulonglong)param_2 * 8);
    *(int *)(param_1 + 1) = (int)param_1[1] + -1;
    for (local_18 = param_2; local_18 < *(uint *)(param_1 + 1); local_18 = local_18 + 1) {
      *(undefined8 *)(*param_1 + (ulonglong)local_18 * 8) =
           *(undefined8 *)(*param_1 + (ulonglong)(local_18 + 1) * 8);
    }
  }
  return uVar1;
}



// FUNCTION 143beb9e0 FUN_143beb9e0 body=233 status=ok
// SIG undefined FUN_143beb9e0(void)

longlong FUN_143beb9e0(double param_1)

{
  bool bVar1;
  char cVar2;
  double dVar3;
  double local_res8;
  longlong local_18;
  
  local_18 = 0;
  cVar2 = FUN_143a919d0(param_1);
  if (cVar2 == '\0') {
    dVar3 = (double)FUN_143a91ad0();
    if (-dVar3 <= param_1) {
      local_res8 = param_1;
      if (dVar3 < param_1) {
        local_res8 = dVar3;
      }
    }
    else {
      local_res8 = -dVar3;
    }
    bVar1 = local_res8 < 0.0;
    if (bVar1) {
      local_res8 = -local_res8;
    }
    dVar3 = (double)FUN_143a917b0(local_res8);
    local_18 = (longlong)dVar3;
    if (bVar1) {
      local_18 = -local_18;
    }
  }
  return local_18;
}



// FUNCTION 143bebad0 FUN_143bebad0 body=94 status=ok
// SIG undefined FUN_143bebad0(void)

longlong FUN_143bebad0(int param_1,int param_2)

{
  undefined4 local_res10;
  undefined8 local_18;
  
  if (param_1 == 0) {
    local_18 = 0;
  }
  else if (param_2 == 0) {
    local_18 = 1;
  }
  else {
    local_18 = (longlong)param_1;
    local_res10 = param_2;
    while (local_res10 = local_res10 + -1, local_res10 != 0) {
      local_18 = local_18 * param_1;
    }
  }
  return local_18;
}



// FUNCTION 143bebb40 FUN_143bebb40 body=582 status=ok
// SIG undefined FUN_143bebb40(void)

ulonglong FUN_143bebb40(longlong param_1,short *param_2,int param_3,uint param_4,char param_5)

{
  short sVar1;
  longlong lVar2;
  longlong local_res8;
  short *local_res10;
  int local_res18;
  uint local_res20;
  short local_34;
  uint local_2c;
  short *local_28;
  
  if (param_4 < 0x25) {
    local_res20 = param_4;
    if (param_4 < 2) {
      local_res20 = 2;
    }
  }
  else {
    local_res20 = 0x24;
  }
  if ((((param_3 == 0) || (-1 < param_1)) || (local_res20 != 10)) || (param_5 != '\0')) {
    local_res8 = param_1;
    local_res18 = param_3;
    local_28 = param_2;
    if ((param_3 != 0) && (param_1 == 0)) {
      if (param_5 == '\0') {
        local_34 = 0x30;
      }
      else {
        local_34 = 0;
      }
      *param_2 = local_34;
      local_28 = param_2 + 1;
      local_res18 = param_3 + -1;
    }
  }
  else {
    *param_2 = 0x2d;
    local_28 = param_2 + 1;
    local_res18 = param_3 + -1;
    local_res8 = -param_1;
  }
  while ((local_res18 != 0 && (local_res8 != 0))) {
    local_2c = (int)local_res8 - (int)(local_res8 / (longlong)(ulonglong)local_res20) * local_res20;
    if (param_5 == '\0') {
      local_2c = (uint)(byte)"0123456789abcdefghijklmnopqrstuvwxyz"[(int)local_2c];
    }
    *local_28 = (short)local_2c;
    local_28 = local_28 + 1;
    local_res18 = local_res18 + -1;
    local_res8 = local_res8 / (longlong)(ulonglong)local_res20;
  }
  if (local_res18 != 0) {
    *local_28 = 0;
  }
  lVar2 = (longlong)local_28 - (longlong)param_2;
  local_res10 = param_2;
  if (*param_2 == 0x2d) {
    local_res10 = param_2 + 1;
  }
  for (; local_28 = local_28 + -1, local_res10 < local_28; local_res10 = local_res10 + 1) {
    sVar1 = *local_28;
    *local_28 = *local_res10;
    *local_res10 = sVar1;
  }
  return lVar2 >> 1 & 0xffffffff;
}



// FUNCTION 143bebd90 FUN_143bebd90 body=68 status=ok
// SIG undefined FUN_143bebd90(void)

undefined1 FUN_143bebd90(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 1;
    }
  }
  else if (param_2 != 0) {
    uVar1 = FUN_143c15150(param_1,param_2);
    return uVar1;
  }
  return 0;
}



// FUNCTION 143bebde0 FUN_143bebde0 body=280 status=ok
// SIG undefined FUN_143bebde0(void)

longlong FUN_143bebde0(ulonglong param_1,ulonglong param_2)

{
  byte bVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  bVar1 = 0;
  local_28 = param_1;
  for (local_20 = param_2; ((local_28 & 1) == 0 && ((local_20 & 1) == 0));
      local_20 = (longlong)local_20 >> 1) {
    bVar1 = bVar1 + 1;
    local_28 = (longlong)local_28 >> 1;
  }
  if ((local_28 & 1) == 1) {
    local_30 = -local_20;
  }
  else {
    local_30 = local_28;
  }
  while (local_30 != 0) {
    for (; (local_30 & 1) == 0; local_30 = (longlong)local_30 >> 1) {
    }
    if ((longlong)local_30 < 1) {
      local_20 = -local_30;
    }
    else {
      local_28 = local_30;
    }
    local_30 = local_28 - local_20;
  }
  return ((longlong)param_1 / (longlong)(local_28 << (bVar1 & 0x3f))) * param_2;
}



// FUNCTION 143bebf00 FUN_143bebf00 body=384 status=ok
// SIG undefined FUN_143bebf00(void)

undefined4 * FUN_143bebf00(undefined4 *param_1,int param_2)

{
  *param_1 = 9;
  param_1[1] = 999999999;
  param_1[2] = 0xc4653601;
  param_1[3] = 2;
  param_1[4] = 0x22df;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  if (param_2 != 0) {
    if (param_2 == 0x20) {
      *param_1 = 7;
      param_1[1] = 0x60;
      param_1[2] = 0xffffffa1;
      param_1[3] = 3;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else if (param_2 == 0x40) {
      *param_1 = 0x10;
      param_1[1] = 0x180;
      param_1[2] = 0xfffffe81;
      param_1[3] = 3;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else if (param_2 == 0x80) {
      *param_1 = 0x22;
      param_1[1] = 0x1800;
      param_1[2] = 0xffffe801;
      param_1[3] = 3;
      param_1[4] = 0;
      *(undefined1 *)(param_1 + 6) = 1;
    }
    else {
      FUN_143bec0a0(param_1,0x80);
    }
  }
  return param_1;
}



// FUNCTION 143bec080 FUN_143bec080 body=27 status=ok
// SIG undefined FUN_143bec080(void)

longlong FUN_143bec080(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return param_1;
}



// FUNCTION 143bec0a0 FUN_143bec0a0 body=37 status=ok
// SIG undefined FUN_143bec0a0(void)

longlong FUN_143bec0a0(longlong param_1,uint param_2)

{
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x14) | param_2;
  return param_1;
}



// FUNCTION 143bec0d0 FUN_143bec0d0 body=409 status=ok
// SIG undefined FUN_143bec0d0(void)

void FUN_143bec0d0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_48;
  undefined4 local_44;
  
  cVar2 = FUN_143a8b110(*param_3);
  if ((cVar2 != '\0') && (param_2 != (undefined8 *)0x0)) {
    iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_2);
    if (iVar3 % 3 == 0) {
      for (local_48 = 1;
          iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(param_2), local_48 < iVar3; local_48 = local_48 + 3) {
        iVar3 = FUN_143b59890(param_2,local_48);
        iVar4 = FUN_143b59890(param_2,local_48 + 1);
        if (iVar4 <= iVar3) {
          *param_3 = 1;
          break;
        }
      }
    }
    else {
      *param_3 = 1;
    }
  }
  cVar2 = FUN_143a8b110(*param_3);
  if (cVar2 == '\0') {
    if (param_2 != (undefined8 *)0x0) {
      (**(code **)*param_2)(param_2,1);
    }
  }
  else {
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    *(undefined8 **)(param_1 + 8) = param_2;
    if (param_2 == (undefined8 *)0x0) {
      local_44 = 0xffffffff;
    }
    else {
      local_44 = 0;
    }
    *(undefined4 *)(param_1 + 0x10) = local_44;
  }
  return;
}



// FUNCTION 143bec270 FUN_143bec270 body=166 status=ok
// SIG undefined FUN_143bec270(void)

undefined8 * FUN_143bec270(undefined8 *param_1,longlong param_2)

{
  FUN_143a8abc0(param_1,param_2);
  *param_1 = icu_53::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



// FUNCTION 143bec320 FUN_143bec320 body=181 status=ok
// SIG undefined FUN_143bec320(void)

undefined8 *
FUN_143bec320(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             char param_5,undefined4 param_6,undefined4 param_7)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = param_6;
  *(undefined4 *)(param_1 + 4) = param_7;
  if (param_5 == '\0') {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 3;
  }
  else {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 2;
  }
  return param_1;
}



// FUNCTION 143bec3e0 FUN_143bec3e0 body=142 status=ok
// SIG undefined FUN_143bec3e0(void)

undefined8 *
FUN_143bec3e0(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5,undefined4 param_6)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 2) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 4) = param_6;
  return param_1;
}



// FUNCTION 143bec470 FUN_143bec470 body=142 status=ok
// SIG undefined FUN_143bec470(void)

undefined8 *
FUN_143bec470(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::DateTimeRule::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = param_3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 3) = param_4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = param_5;
  return param_1;
}



// FUNCTION 143bec500 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::DateTimeRule::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bec530 FUN_143bec530 body=226 status=ok
// SIG undefined FUN_143bec530(void)

undefined1 FUN_143bec530(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if (((((cVar1 == '\0') || (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) ||
         (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc))) ||
        ((*(int *)(param_1 + 0x10) != *(int *)(param_2 + 0x10) ||
         (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))))) ||
       ((*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18) ||
        ((*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c) ||
         (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20))))))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143bec620 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bec660 FUN_143bec660 body=14 status=ok
// SIG undefined FUN_143bec660(void)

undefined4 FUN_143bec660(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1c);
}



// FUNCTION 143bec670 FUN_143bec670 body=19 status=ok
// SIG undefined FUN_143bec670(void)

void FUN_143bec670(void)

{
  FUN_143bec690();
  return;
}



// FUNCTION 143bec690 FUN_143bec690 body=8 status=ok
// SIG undefined FUN_143bec690(void)

undefined * FUN_143bec690(void)

{
  return &DAT_146bc848b;
}



// FUNCTION 143bec6a0 FUN_143bec6a0 body=14 status=ok
// SIG undefined FUN_143bec6a0(void)

undefined4 FUN_143bec6a0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 143bec6b0 FUN_143bec6b0 body=178 status=ok
// SIG undefined FUN_143bec6b0(void)

undefined8 * FUN_143bec6b0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 local_20;
  
  FUN_143bec990(param_1,param_2);
  *param_1 = icu_53::AnnualTimeZoneRule::vftable;
  lVar1 = FUN_143a8d310(0x28);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143bec270(lVar1,*(undefined8 *)(param_2 + 0x38));
  }
  param_1[7] = local_20;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  return param_1;
}



// FUNCTION 143bec770 FUN_143bec770 body=112 status=ok
// SIG undefined FUN_143bec770(void)

undefined8 *
FUN_143bec770(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_143beca10(param_1,param_2,param_3,param_4);
  *param_1 = icu_53::AnnualTimeZoneRule::vftable;
  param_1[7] = param_5;
  *(undefined4 *)(param_1 + 8) = param_6;
  *(undefined4 *)((longlong)param_1 + 0x44) = param_7;
  return param_1;
}



// FUNCTION 143bec7e0 FUN_143bec7e0 body=54 status=ok
// SIG undefined FUN_143bec7e0(void)

undefined8 * FUN_143bec7e0(undefined8 *param_1,undefined8 param_2)

{
  FUN_143bec990(param_1,param_2);
  *param_1 = icu_53::InitialTimeZoneRule::vftable;
  return param_1;
}



// FUNCTION 143bec820 FUN_143bec820 body=74 status=ok
// SIG undefined FUN_143bec820(void)

undefined8 *
FUN_143bec820(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_143beca10(param_1,param_2,param_3,param_4);
  *param_1 = icu_53::InitialTimeZoneRule::vftable;
  return param_1;
}



// FUNCTION 143bec870 FUN_143bec870 body=135 status=ok
// SIG undefined FUN_143bec870(void)

undefined8 * FUN_143bec870(undefined8 *param_1,longlong param_2)

{
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143bec990(param_1,param_2);
  *param_1 = icu_53::TimeArrayTimeZoneRule::vftable;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  param_1[8] = 0;
  local_18[0] = 0;
  FUN_143bedb70(param_1,*(undefined8 *)(param_2 + 0x40),*(undefined4 *)(param_2 + 0x3c),local_18);
  return param_1;
}



// FUNCTION 143bec900 FUN_143bec900 body=143 status=ok
// SIG undefined FUN_143bec900(void)

undefined8 *
FUN_143bec900(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_18 [2];
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_143beca10(param_1,param_2,param_3,param_4);
  *param_1 = icu_53::TimeArrayTimeZoneRule::vftable;
  *(undefined4 *)(param_1 + 7) = param_7;
  param_1[8] = 0;
  local_18[0] = 0;
  FUN_143bedb70(param_1,param_5,param_6,local_18);
  return param_1;
}



// FUNCTION 143bec990 FUN_143bec990 body=122 status=ok
// SIG undefined FUN_143bec990(void)

undefined8 *
FUN_143bec990(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143a8abc0(param_1,param_2,param_3,param_4,0xfffffffffffffffe);
  *param_1 = icu_53::TimeZoneRule::vftable;
  FUN_143a8d3a0(param_1 + 1,param_2 + 8);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  return param_1;
}



// FUNCTION 143beca10 FUN_143beca10 body=131 status=ok
// SIG undefined FUN_143beca10(void)

undefined8 *
FUN_143beca10(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = param_1;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined1 *)puVar2 = 0;
    puVar2 = (undefined8 *)((longlong)puVar2 + 1);
  }
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::TimeZoneRule::vftable;
  FUN_143a8d3a0(param_1 + 1,param_2);
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined4 *)((longlong)param_1 + 0x34) = param_4;
  return param_1;
}



// FUNCTION 143becaa0 FUN_143becaa0 body=118 status=ok
// SIG undefined FUN_143becaa0(void)

void FUN_143becaa0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::AnnualTimeZoneRule::vftable;
  puVar1 = (undefined8 *)param_1[7];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143becbb0(param_1);
  return;
}



// FUNCTION 143becb20 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::InitialTimeZoneRule::vftable;
  FUN_143becbb0(param_1);
  return;
}



// FUNCTION 143becb50 FUN_143becb50 body=85 status=ok
// SIG undefined FUN_143becb50(void)

void FUN_143becb50(undefined8 *param_1)

{
  *param_1 = icu_53::TimeArrayTimeZoneRule::vftable;
  if ((param_1[8] != 0) && ((undefined8 *)param_1[8] != param_1 + 9)) {
    FUN_143aa79f0(param_1[8]);
  }
  FUN_143becbb0(param_1);
  return;
}



// FUNCTION 143becbb0 FUN_143becbb0 body=56 status=ok
// SIG undefined FUN_143becbb0(void)

void FUN_143becbb0(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneRule::vftable;
  FUN_143a8dc60(param_1 + 1);
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143becbf0 FUN_143becbf0 body=183 status=ok
// SIG undefined FUN_143becbf0(void)

undefined1 FUN_143becbf0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if (cVar1 == '\0') {
      cVar1 = FUN_143bec530(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
      if (((cVar1 == '\0') || (*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40))) ||
         (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44))) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143beccb0 FUN_143beccb0 body=118 status=ok
// SIG undefined FUN_143beccb0(void)

undefined1 FUN_143beccb0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18;
  
  if (param_1 == param_2) {
LAB_143becd17:
    local_18 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143bece40(param_1,param_2);
      if (cVar1 != '\0') goto LAB_143becd17;
    }
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143becd30 FUN_143becd30 body=261 status=ok
// SIG undefined FUN_143becd30(void)

undefined1 FUN_143becd30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  int local_24;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_143bece40(param_1,param_2), cVar1 != '\0')) {
      if ((*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38)) &&
         (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c))) {
        local_28 = 1;
        for (local_24 = 0; local_24 < *(int *)(param_1 + 0x3c); local_24 = local_24 + 1) {
          if (*(double *)(*(longlong *)(param_1 + 0x40) + (longlong)local_24 * 8) !=
              *(double *)(*(longlong *)(param_2 + 0x40) + (longlong)local_24 * 8)) {
            return 0;
          }
        }
      }
      else {
        local_28 = 0;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143bece40 FUN_143bece40 body=165 status=ok
// SIG undefined FUN_143bece40(void)

undefined1 FUN_143bece40(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_18;
  
  if (param_1 == param_2) {
LAB_143beced6:
    local_18 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if (cVar1 != '\0') {
      cVar1 = FUN_143a8dd00(param_1 + 8,param_2 + 8);
      if (((cVar1 != '\0') && (*(int *)(param_1 + 0x30) == *(int *)(param_2 + 0x30))) &&
         (*(int *)(param_1 + 0x34) == *(int *)(param_2 + 0x34))) goto LAB_143beced6;
    }
    local_18 = 0;
  }
  return local_18;
}



// FUNCTION 143becef0 FUN_143becef0 body=64 status=ok
// SIG undefined FUN_143becef0(void)

bool FUN_143becef0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143becf30 FUN_143becf30 body=54 status=ok
// SIG undefined FUN_143becf30(void)

undefined8 FUN_143becf30(undefined8 param_1,uint param_2)

{
  FUN_143becaa0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143becf70 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143becfb0 FUN_143becfb0 body=54 status=ok
// SIG undefined FUN_143becfb0(void)

undefined8 FUN_143becfb0(undefined8 param_1,uint param_2)

{
  FUN_143becb50(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143becff0 FUN_143becff0 body=54 status=ok
// SIG undefined FUN_143becff0(void)

undefined8 FUN_143becff0(undefined8 param_1,uint param_2)

{
  FUN_143becbb0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bed030 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x48);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143bec6b0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143bed090 _New_Locimp body=92 status=ok
// SIG _Locimp * _New_Locimp(_Locimp * param_1)

/* Library Function - Single Match
    private: static class std::locale::_Locimp * __ptr64 __cdecl
   std::locale::_Locimp::_New_Locimp(class std::locale::_Locimp const & __ptr64)
   
   Libraries: Visual Studio 2015 Debug, Visual Studio 2015 Release, Visual Studio 2017 Debug, Visual
   Studio 2017 Release */

_Locimp * __cdecl std::locale::_Locimp::_New_Locimp(_Locimp *param_1)

{
  longlong lVar1;
  undefined8 local_20;
  
  lVar1 = FUN_143a8d310(0x38);
  if (lVar1 == 0) {
    local_20 = (_Locimp *)0x0;
  }
  else {
    local_20 = (_Locimp *)FUN_143bec7e0(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143bed0f0 CreateInternalContext body=92 status=ok
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
  
  lVar1 = FUN_143a8d310(0x148);
  if (lVar1 == 0) {
    local_20 = 0;
  }
  else {
    local_20 = FUN_143bec870(lVar1,param_1);
  }
  return local_20;
}



// FUNCTION 143bed150 GetStackDepth body=14 status=ok
// SIG undefined GetStackDepth(void)

undefined4 FAnalyticsSpan::GetStackDepth(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x34);
}



// FUNCTION 143bed160 FUN_143bed160 body=19 status=ok
// SIG undefined FUN_143bed160(void)

void FUN_143bed160(void)

{
  FUN_143bedad0();
  return;
}



// FUNCTION 143bed180 FUN_143bed180 body=19 status=ok
// SIG undefined FUN_143bed180(void)

void FUN_143bed180(void)

{
  FUN_143bedae0();
  return;
}



// FUNCTION 143bed1a0 FUN_143bed1a0 body=19 status=ok
// SIG undefined FUN_143bed1a0(void)

void FUN_143bed1a0(void)

{
  FUN_143bedaf0();
  return;
}



// FUNCTION 143bed1c0 FUN_143bed1c0 body=14 status=ok
// SIG undefined FUN_143bed1c0(void)

undefined4 FUN_143bed1c0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x44);
}



// FUNCTION 143bed1d0 FUN_143bed1d0 body=84 status=ok
// SIG undefined FUN_143bed1d0(void)

ulonglong FUN_143bed1d0(ulonglong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  if (*(int *)(param_1 + 0x44) == 0x7fffffff) {
    param_1 = param_1 & 0xffffffffffffff00;
  }
  else {
    param_1 = FUN_143bed7a0(param_1,*(undefined4 *)(param_1 + 0x44),param_2,param_3,param_4);
  }
  return param_1;
}



// FUNCTION 143bed230 FUN_143bed230 body=22 status=ok
// SIG undefined FUN_143bed230(void)

undefined1 FUN_143bed230(void)

{
  return 0;
}



// FUNCTION 143bed250 FUN_143bed250 body=112 status=ok
// SIG undefined FUN_143bed250(void)

undefined8 FUN_143bed250(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x3c) < 1) || (*(longlong *)(param_1 + 0x40) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bedb00(param_1,*(undefined8 *)
                                   (*(longlong *)(param_1 + 0x40) +
                                   (longlong)(*(int *)(param_1 + 0x3c) + -1) * 8),param_2,param_3);
    *param_4 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143bed2c0 FUN_143bed2c0 body=66 status=ok
// SIG undefined FUN_143bed2c0(void)

void FUN_143bed2c0(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  FUN_143bed7a0(param_1,*(undefined4 *)(param_1 + 0x40),param_2,param_3,param_4);
  return;
}



// FUNCTION 143bed310 FUN_143bed310 body=109 status=ok
// SIG undefined FUN_143bed310(void)

undefined8 FUN_143bed310(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  if ((*(int *)(param_1 + 0x3c) < 1) || (*(longlong *)(param_1 + 0x40) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_143bedb00(param_1,**(undefined8 **)(param_1 + 0x40),param_2,param_3);
    *param_4 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 143bed380 FUN_143bed380 body=306 status=ok
// SIG undefined FUN_143bed380(void)

undefined8
FUN_143bed380(longlong *param_1,double param_2,undefined4 param_3,undefined4 param_4,char param_5,
             double *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  double local_10 [2];
  
  FUN_143b92450(param_2,&local_28,local_14,local_18,local_1c,local_20,local_24);
  if (local_28 < (int)param_1[8]) {
    uVar2 = (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4,param_6);
  }
  else {
    cVar1 = FUN_143bed7a0(param_1,local_28,param_3,param_4,local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else if ((local_10[0] < param_2) || ((param_5 == '\0' && (local_10[0] == param_2)))) {
      uVar2 = FUN_143bed7a0(param_1,local_28 + 1,param_3,param_4,param_6);
    }
    else {
      *param_6 = local_10[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143bed4c0 FUN_143bed4c0 body=24 status=ok
// SIG undefined FUN_143bed4c0(void)

undefined1 FUN_143bed4c0(void)

{
  return 0;
}



// FUNCTION 143bed4e0 FUN_143bed4e0 body=188 status=ok
// SIG undefined FUN_143bed4e0(void)

longlong FUN_143bed4e0(longlong param_1,double param_2,undefined4 param_3,undefined4 param_4,
                      char param_5,double *param_6)

{
  int iVar1;
  uint7 uVar3;
  longlong lVar2;
  double dVar4;
  int local_18;
  
  local_18 = *(int *)(param_1 + 0x3c);
  while (((local_18 = local_18 + -1, -1 < local_18 &&
          (dVar4 = (double)FUN_143bedb00(param_1,*(undefined8 *)
                                                  (*(longlong *)(param_1 + 0x40) +
                                                  (longlong)local_18 * 8),param_3,param_4),
          param_2 <= dVar4)) && ((param_5 != '\0' || (dVar4 != param_2))))) {
    *param_6 = dVar4;
  }
  iVar1 = *(int *)(param_1 + 0x3c) + -1;
  uVar3 = (uint7)(uint3)((uint)iVar1 >> 8);
  if (local_18 == iVar1) {
    lVar2 = (ulonglong)uVar3 << 8;
  }
  else {
    lVar2 = CONCAT71(uVar3,1);
  }
  return lVar2;
}



// FUNCTION 143bed5a0 FUN_143bed5a0 body=306 status=ok
// SIG undefined FUN_143bed5a0(void)

undefined8
FUN_143bed5a0(longlong *param_1,double param_2,undefined4 param_3,undefined4 param_4,char param_5,
             double *param_6)

{
  char cVar1;
  undefined8 uVar2;
  int local_28;
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  double local_10 [2];
  
  FUN_143b92450(param_2,&local_28,local_14,local_18,local_1c,local_20,local_24);
  if (*(int *)((longlong)param_1 + 0x44) < local_28) {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_3,param_4,param_6);
  }
  else {
    cVar1 = FUN_143bed7a0(param_1,local_28,param_3,param_4,local_10);
    if (cVar1 == '\0') {
      uVar2 = 0;
    }
    else if ((param_2 < local_10[0]) || ((param_5 == '\0' && (local_10[0] == param_2)))) {
      uVar2 = FUN_143bed7a0(param_1,local_28 + -1,param_3,param_4,param_6);
    }
    else {
      *param_6 = local_10[0];
      uVar2 = 1;
    }
  }
  return uVar2;
}



// FUNCTION 143bed6e0 FUN_143bed6e0 body=170 status=ok
// SIG undefined FUN_143bed6e0(void)

undefined8
FUN_143bed6e0(longlong param_1,double param_2,undefined4 param_3,undefined4 param_4,char param_5,
             double *param_6)

{
  int iVar1;
  double dVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  do {
    iVar1 = iVar1 + -1;
    if (iVar1 < 0) {
      return 0;
    }
    dVar2 = (double)FUN_143bedb00(param_1,*(undefined8 *)
                                           (*(longlong *)(param_1 + 0x40) + (longlong)iVar1 * 8),
                                  param_3,param_4);
  } while ((param_2 <= dVar2) && ((param_5 == '\0' || (dVar2 != param_2))));
  *param_6 = dVar2;
  return 1;
}



// FUNCTION 143bed790 FUN_143bed790 body=15 status=ok
// SIG undefined FUN_143bed790(void)

undefined8 FUN_143bed790(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



// FUNCTION 143bed7a0 FUN_143bed7a0 body=809 status=ok
// SIG undefined FUN_143bed7a0(void)

undefined8 FUN_143bed7a0(longlong param_1,int param_2,int param_3,int param_4,double *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  bool local_48;
  int local_44;
  double local_40;
  int local_38;
  int local_2c;
  int local_24;
  
  if ((param_2 < *(int *)(param_1 + 0x40)) || (*(int *)(param_1 + 0x44) < param_2)) {
    uVar6 = 0;
  }
  else {
    iVar2 = FUN_143bec660(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 == 0) {
      uVar3 = FUN_143a93e60(*(undefined8 *)(param_1 + 0x38));
      uVar4 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
              ::GetIndex(*(undefined8 *)(param_1 + 0x38));
      local_40 = (double)FUN_143b91d10(param_2,uVar4,uVar3);
    }
    else {
      local_48 = true;
      if (iVar2 == 1) {
        iVar2 = FUN_143a93e50(*(undefined8 *)(param_1 + 0x38));
        if (iVar2 < 1) {
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(param_1 + 0x38));
          cVar1 = FUN_143b4c990(param_2,uVar3);
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(param_1 + 0x38));
          local_40 = (double)FUN_143b91d10(param_2,uVar3,(int)cVar1);
          local_40 = local_40 + (double)((iVar2 + 1) * 7);
        }
        else {
          uVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                  ::GetIndex(*(undefined8 *)(param_1 + 0x38));
          local_40 = (double)FUN_143b91d10(param_2,uVar3,1);
          local_40 = local_40 + (double)((iVar2 + -1) * 7);
        }
        local_48 = iVar2 >= 1;
      }
      else {
        iVar5 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(*(undefined8 *)(param_1 + 0x38));
        local_38 = FUN_143a93e60(*(undefined8 *)(param_1 + 0x38));
        if ((((iVar2 == 3) && (local_48 = false, iVar5 == 1)) && (local_38 == 0x1d)) &&
           (cVar1 = FUN_143b4c880(param_2), cVar1 == '\0')) {
          local_38 = 0x1c;
        }
        local_40 = (double)FUN_143b91d10(param_2,iVar5,local_38);
      }
      iVar2 = FUN_143b919f0(local_40);
      local_2c = FUN_143a91e00(*(undefined8 *)(param_1 + 0x38));
      local_2c = local_2c - iVar2;
      if (local_48) {
        if (local_2c < 0) {
          local_2c = local_2c + 7;
        }
        local_44 = local_2c;
      }
      else {
        local_24 = local_2c;
        if (0 < local_2c) {
          local_24 = local_2c + -7;
        }
        local_44 = local_24;
      }
      local_40 = local_40 + (double)local_44;
    }
    iVar2 = FUN_143b5e700(*(undefined8 *)(param_1 + 0x38));
    *param_5 = local_40 * 86400000.0 + (double)iVar2;
    iVar2 = FUN_143bec6a0(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 != 2) {
      *param_5 = *param_5 - (double)param_3;
    }
    iVar2 = FUN_143bec6a0(*(undefined8 *)(param_1 + 0x38));
    if (iVar2 == 0) {
      *param_5 = *param_5 - (double)param_4;
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 143bedad0 FUN_143bedad0 body=8 status=ok
// SIG undefined FUN_143bedad0(void)

undefined * FUN_143bedad0(void)

{
  return &DAT_146bc848d;
}



// FUNCTION 143bedae0 FUN_143bedae0 body=8 status=ok
// SIG undefined FUN_143bedae0(void)

undefined * FUN_143bedae0(void)

{
  return &DAT_146bc848c;
}



// FUNCTION 143bedaf0 FUN_143bedaf0 body=8 status=ok
// SIG undefined FUN_143bedaf0(void)

undefined * FUN_143bedaf0(void)

{
  return &DAT_146bc848e;
}



// FUNCTION 143bedb00 FUN_143bedb00 body=100 status=ok
// SIG undefined FUN_143bedb00(void)

double FUN_143bedb00(longlong param_1,double param_2,int param_3,int param_4)

{
  undefined8 local_res10;
  
  local_res10 = param_2;
  if (*(int *)(param_1 + 0x38) != 2) {
    local_res10 = param_2 - (double)param_3;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    local_res10 = local_res10 - (double)param_4;
  }
  return local_res10;
}



// FUNCTION 143bedb70 FUN_143bedb70 body=355 status=ok
// SIG undefined FUN_143bedb70(void)

ulonglong FUN_143bedb70(ulonglong param_1,void *param_2,int param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x40) != param_1 + 0x48)) {
    FUN_143aa79f0(*(undefined8 *)(param_1 + 0x40));
  }
  if (param_3 < 0x21) {
    *(ulonglong *)(param_1 + 0x40) = param_1 + 0x48;
  }
  else {
    uVar2 = FUN_143aa7a40((longlong)param_3 << 3);
    *(undefined8 *)(param_1 + 0x40) = uVar2;
    if (*(longlong *)(param_1 + 0x40) == 0) {
      *param_4 = 7;
      *(undefined4 *)(param_1 + 0x3c) = 0;
      return param_1 & 0xffffffffffffff00;
    }
  }
  _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x40),param_2,(longlong)param_3 << 3);
  *(int *)(param_1 + 0x3c) = param_3;
  FUN_143ac1910(*(undefined8 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x3c),8,FUN_143bedfc0,0,1,
                param_4);
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    param_1 = 1;
  }
  else {
    if ((*(longlong *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x40) != param_1 + 0x48)) {
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x40));
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
    param_1 = param_1 & 0xffffffffffffff00;
  }
  return param_1;
}



// FUNCTION 143bedce0 FUN_143bedce0 body=205 status=ok
// SIG undefined FUN_143bedce0(void)

undefined1 FUN_143bedce0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_143bedf30(param_1,param_2), cVar1 != '\0')) {
      cVar1 = FUN_143bec530(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_2 + 0x38));
      if ((cVar1 == '\0') ||
         ((*(int *)(param_1 + 0x40) != *(int *)(param_2 + 0x40) ||
          (*(int *)(param_1 + 0x44) != *(int *)(param_2 + 0x44))))) {
        local_28 = 0;
      }
      else {
        local_28 = 1;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143beddb0 FUN_143beddb0 body=111 status=ok
// SIG undefined FUN_143beddb0(void)

undefined8 FUN_143beddb0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 == param_2) {
    uVar2 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_143bedf30(param_1,param_2), cVar1 != '\0')) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bede20 FUN_143bede20 body=261 status=ok
// SIG undefined FUN_143bede20(void)

undefined1 FUN_143bede20(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_28;
  int local_24;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143aa5fe0(uVar3,uVar2);
    if ((cVar1 == '\0') && (cVar1 = FUN_143bedf30(param_1,param_2), cVar1 != '\0')) {
      if ((*(int *)(param_1 + 0x38) == *(int *)(param_2 + 0x38)) &&
         (*(int *)(param_1 + 0x3c) == *(int *)(param_2 + 0x3c))) {
        local_28 = 1;
        for (local_24 = 0; local_24 < *(int *)(param_1 + 0x3c); local_24 = local_24 + 1) {
          if (*(double *)(*(longlong *)(param_1 + 0x40) + (longlong)local_24 * 8) !=
              *(double *)(*(longlong *)(param_2 + 0x40) + (longlong)local_24 * 8)) {
            return 0;
          }
        }
      }
      else {
        local_28 = 0;
      }
    }
    else {
      local_28 = 0;
    }
  }
  return local_28;
}



// FUNCTION 143bedf30 FUN_143bedf30 body=132 status=ok
// SIG undefined FUN_143bedf30(void)

undefined1 FUN_143bedf30(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    uVar2 = _guard_xfg_dispatch_icall_nop(param_2);
    uVar3 = _guard_xfg_dispatch_icall_nop(param_1);
    cVar1 = FUN_143ab1e10(uVar3,uVar2);
    if (((cVar1 == '\0') || (*(int *)(param_1 + 0x30) != *(int *)(param_2 + 0x30))) ||
       (*(int *)(param_1 + 0x34) != *(int *)(param_2 + 0x34))) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 143bedfc0 FUN_143bedfc0 body=129 status=ok
// SIG undefined FUN_143bedfc0(void)

uint FUN_143bedfc0(undefined8 param_1,double *param_2,double *param_3)

{
  uint local_28;
  uint local_24;
  
  if (*param_3 <= *param_2) {
    local_28 = (uint)(*param_2 != *param_3);
    local_24 = local_28;
  }
  else {
    local_24 = 0xffffffff;
  }
  return local_24;
}



// FUNCTION 143bee050 FID_conflict:length_error body=54 status=ok
// SIG undefined FID_conflict:length_error(void)

/* Library Function - Multiple Matches With Different Base Names
    public: __cdecl std::ios_base::failure::failure(class std::ios_base::failure const & __ptr64)
   __ptr64
    public: __cdecl std::invalid_argument::invalid_argument(class std::invalid_argument const &
   __ptr64) __ptr64
    public: __cdecl std::length_error::length_error(class std::length_error const & __ptr64) __ptr64
    public: __cdecl std::out_of_range::out_of_range(class std::out_of_range const & __ptr64) __ptr64
   
   Library: Visual Studio 2005 Debug */

undefined8 * FID_conflict_length_error(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4a110(param_1,param_2);
  *param_1 = icu_53::BasicTimeZone::vftable;
  return param_1;
}



// FUNCTION 143bee090 FUN_143bee090 body=54 status=ok
// SIG undefined FUN_143bee090(void)

undefined8 * FUN_143bee090(undefined8 *param_1,undefined8 param_2)

{
  FUN_143b4a170(param_1,param_2);
  *param_1 = icu_53::BasicTimeZone::vftable;
  return param_1;
}



// FUNCTION 143bee0d0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::BasicTimeZone::vftable;
  FUN_143b4a230(param_1);
  return;
}



// FUNCTION 143bee100 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bee140 FUN_143bee140 body=62 status=ok
// SIG undefined FUN_143bee140(void)

void FUN_143bee140(void)

{
  char cVar1;
  undefined4 *in_stack_00000038;
  
  cVar1 = FUN_143a8b0e0(*in_stack_00000038);
  if (cVar1 == '\0') {
    *in_stack_00000038 = 0x10;
  }
  return;
}



// FUNCTION 143bee180 FUN_143bee180 body=3659 status=ok
// SIG undefined FUN_143bee180(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bee180(longlong *param_1,double param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,double *param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  double dVar6;
  undefined1 auStack_268 [32];
  int *local_248;
  double *local_240;
  undefined4 *local_238;
  char local_228;
  uint local_224;
  undefined4 local_220;
  int local_21c;
  int local_218 [2];
  longlong *local_210;
  int local_208;
  undefined4 local_204;
  uint local_200 [2];
  undefined8 *local_1f8;
  undefined4 local_1f0 [2];
  undefined1 local_1e8 [32];
  int *local_1c8;
  double local_1c0;
  double local_1b8;
  undefined4 local_1b0;
  double local_1a8;
  undefined4 local_1a0;
  longlong *local_198;
  longlong *local_190;
  undefined8 *local_188;
  int local_180;
  undefined4 local_17c;
  longlong *local_178;
  longlong local_170;
  int *local_168;
  int *local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  longlong *local_140;
  undefined8 *local_138;
  longlong local_130;
  longlong local_128;
  undefined8 local_120;
  int *local_118;
  longlong local_110;
  int *local_108;
  int *local_100;
  longlong *local_f8;
  double local_f0;
  longlong local_e8;
  int *local_e0;
  longlong *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 *local_b8;
  double local_b0;
  undefined8 local_a8;
  double local_a0;
  undefined8 local_98;
  longlong *local_90;
  longlong *local_88;
  double local_80;
  undefined8 *local_78;
  double local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  *param_3 = 0;
  *param_4 = 0;
  *param_5 = 0;
  cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6);
  if (cVar1 != '\0') {
    return;
  }
  FUN_143a8ac30(local_38);
  local_1f8 = (undefined8 *)0x0;
  local_210 = (longlong *)0x0;
  FUN_143a8ac30(local_60);
  FUN_143b98930(local_1e8);
  local_228 = (**(code **)(*param_1 + 0x68))(param_1,param_2,0,local_1e8);
  if (local_228 == '\0') {
    local_228 = (**(code **)(*param_1 + 0x70))(param_1,param_2,1,local_1e8);
    if (local_228 == '\0') {
      local_240 = param_6;
      local_248 = &local_21c;
      (**(code **)(*param_1 + 0x18))(param_1,param_2,0,&local_224);
      cVar1 = FUN_143a8b0e0(*(undefined4 *)param_6);
      if (cVar1 != '\0') {
        FUN_143b989a0(local_1e8);
        FUN_143a8dc60(local_60);
        FUN_143a8dc60(local_38);
        return;
      }
    }
    else {
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      FUN_143b86160(uVar5,local_38);
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      local_224 = FUN_143ab3100(uVar5);
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      local_21c = FAnalyticsSpan::GetStackDepth(uVar5);
    }
    goto LAB_143beeeb5;
  }
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(local_1e8);
  FUN_143b86160(uVar5,local_38);
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(local_1e8);
  local_224 = FUN_143ab3100(uVar5);
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(local_1e8);
  local_21c = FAnalyticsSpan::GetStackDepth(uVar5);
  local_1b8 = (double)FUN_143b381e0(local_1e8);
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
          ::GetBoundProgramCounterForTimerManager(local_1e8);
  iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
  if (iVar2 == 0) {
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(local_1e8);
    iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
    if (iVar2 == 0) goto LAB_143bee310;
  }
  else {
LAB_143bee310:
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(local_1e8);
    iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
    if (iVar2 == 0) goto LAB_143beeeb5;
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(local_1e8);
    iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
    if (iVar2 != 0) goto LAB_143beeeb5;
  }
  if (param_2 + 31536000000.0 <= local_1b8) goto LAB_143beeeb5;
  local_238 = local_1f0;
  local_240 = &local_1c0;
  local_248 = &local_208;
  FUN_143b92450(local_1b8 + (double)(int)local_224 + (double)local_21c,local_218,&local_220,
                local_200);
  local_204 = FUN_143b91a40(local_218[0],local_220,local_200[0]);
  local_128 = FUN_143a8d310(0x28);
  if (local_128 == 0) {
    local_168 = (int *)0x0;
  }
  else {
    local_240 = (double *)((ulonglong)local_240 & 0xffffffff00000000);
    local_248 = (int *)CONCAT44(local_248._4_4_,local_1f0[0]);
    local_168 = (int *)FUN_143bec3e0(local_128,local_220,local_204,local_208);
  }
  local_e0 = local_168;
  local_1c8 = local_168;
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
          ::GetObjectForTimerManager(local_1e8);
  FUN_143b86160(uVar5,local_60);
  local_110 = FUN_143a8d310(0x48);
  if (local_110 == 0) {
    local_138 = (undefined8 *)0x0;
  }
  else {
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
            ::GetObjectForTimerManager(local_1e8);
    uVar3 = FAnalyticsSpan::GetStackDepth(uVar5);
    local_238 = (undefined4 *)CONCAT44(local_238._4_4_,0x7fffffff);
    local_240 = (double *)CONCAT44(local_240._4_4_,local_218[0]);
    local_248 = local_1c8;
    local_138 = (undefined8 *)FUN_143bec770(local_110,local_60,local_224,uVar3);
  }
  local_78 = local_138;
  local_1f8 = local_138;
  uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
          ::GetObjectForTimerManager(local_1e8);
  uVar4 = FUN_143ab3100(uVar5);
  if ((uVar4 == local_224) &&
     (local_228 = (**(code **)(*param_1 + 0x68))(param_1,local_1b8,0,local_1e8), local_228 != '\0'))
  {
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(local_1e8);
    iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
    if (iVar2 == 0) {
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
      if (iVar2 == 0) goto LAB_143bee59d;
LAB_143bee5d7:
      local_70 = local_1b8 + 31536000000.0;
      dVar6 = (double)FUN_143b381e0(local_1e8);
      if (dVar6 < local_70) {
        local_f0 = (double)FUN_143b381e0(local_1e8);
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_1e8);
        iVar2 = FUN_143ab3100(uVar5);
        local_a0 = local_f0 + (double)iVar2;
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_1e8);
        iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
        local_238 = local_1f0;
        local_240 = &local_1c0;
        local_248 = &local_208;
        FUN_143b92450(local_a0 + (double)iVar2,local_218,&local_220,local_200);
        local_204 = FUN_143b91a40(local_218[0],local_220,local_200[0]);
        local_158 = FUN_143a8d310(0x28);
        if (local_158 == 0) {
          local_118 = (int *)0x0;
        }
        else {
          local_240 = (double *)((ulonglong)local_240 & 0xffffffff00000000);
          local_248 = (int *)CONCAT44(local_248._4_4_,local_1f0[0]);
          local_118 = (int *)FUN_143bec3e0(local_158,local_220,local_204,local_208);
        }
        local_108 = local_118;
        local_1c8 = local_118;
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_1e8);
        FUN_143b86160(uVar5,local_60);
        local_148 = FUN_143a8d310(0x48);
        if (local_148 == 0) {
          local_178 = (longlong *)0x0;
        }
        else {
          local_180 = local_218[0] + -1;
          uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetObjectForTimerManager(local_1e8);
          local_1b0 = FAnalyticsSpan::GetStackDepth(uVar5);
          uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetObjectForTimerManager(local_1e8);
          uVar3 = FUN_143ab3100(uVar5);
          local_238 = (undefined4 *)CONCAT44(local_238._4_4_,0x7fffffff);
          local_240 = (double *)CONCAT44(local_240._4_4_,local_180);
          local_248 = local_1c8;
          local_178 = (longlong *)FUN_143bec770(local_148,local_60,uVar3,local_1b0);
        }
        local_88 = local_178;
        local_210 = local_178;
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_1e8);
        local_17c = FAnalyticsSpan::GetStackDepth(uVar5);
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_1e8);
        uVar3 = FUN_143ab3100(uVar5);
        local_d0 = *local_210;
        local_240 = &local_1a8;
        local_248 = (int *)CONCAT71(local_248._1_7_,1);
        local_228 = (**(code **)(local_d0 + 0x48))(local_210,param_2,uVar3,local_17c);
        if ((local_228 != '\0') && (local_1a8 <= param_2)) {
          uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetObjectForTimerManager(local_1e8);
          uVar4 = FUN_143ab3100(uVar5);
          if (local_224 == uVar4) {
            uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                    ::GetObjectForTimerManager(local_1e8);
            iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
            if (local_21c == iVar2) goto LAB_143bee96f;
          }
        }
        local_90 = local_210;
        local_190 = local_210;
        if (local_210 == (longlong *)0x0) {
          local_c0 = 0;
        }
        else {
          local_c0 = (**(code **)*local_210)(local_210,1);
        }
        local_210 = (longlong *)0x0;
      }
    }
    else {
LAB_143bee59d:
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
      if (iVar2 != 0) {
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_1e8);
        iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
        if (iVar2 == 0) goto LAB_143bee5d7;
      }
    }
  }
LAB_143bee96f:
  if ((local_210 == (longlong *)0x0) &&
     (local_228 = (**(code **)(*param_1 + 0x70))(param_1,param_2,1,local_1e8), local_228 != '\0')) {
    uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
            ::GetBoundProgramCounterForTimerManager(local_1e8);
    iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
    if (iVar2 == 0) {
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
      if (iVar2 == 0) goto LAB_143bee9e8;
LAB_143beea22:
      local_80 = (double)FUN_143b381e0(local_1e8);
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      iVar2 = FUN_143ab3100(uVar5);
      local_b0 = local_80 + (double)iVar2;
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
      local_238 = local_1f0;
      local_240 = &local_1c0;
      local_248 = &local_208;
      FUN_143b92450(local_b0 + (double)iVar2,local_218,&local_220,local_200);
      local_204 = FUN_143b91a40(local_218[0],local_220,local_200[0]);
      local_170 = FUN_143a8d310(0x28);
      if (local_170 == 0) {
        local_160 = (int *)0x0;
      }
      else {
        local_240 = (double *)((ulonglong)local_240 & 0xffffffff00000000);
        local_248 = (int *)CONCAT44(local_248._4_4_,local_1f0[0]);
        local_160 = (int *)FUN_143bec3e0(local_170,local_220,local_204,local_208);
      }
      local_100 = local_160;
      local_1c8 = local_160;
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_1e8);
      FUN_143b86160(uVar5,local_60);
      local_150 = FUN_143a8d310(0x48);
      if (local_150 == 0) {
        local_140 = (longlong *)0x0;
      }
      else {
        iVar2 = FUN_143bc1020(local_1f8);
        local_238 = (undefined4 *)CONCAT44(local_238._4_4_,0x7fffffff);
        local_240 = (double *)CONCAT44(local_240._4_4_,iVar2 + -1);
        local_248 = local_1c8;
        local_140 = (longlong *)FUN_143bec770(local_150,local_60,local_224,local_21c);
      }
      local_f8 = local_140;
      local_210 = local_140;
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      local_1a0 = FAnalyticsSpan::GetStackDepth(uVar5);
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      uVar3 = FUN_143ab3100(uVar5);
      local_e8 = *local_210;
      local_240 = &local_1a8;
      local_248 = (int *)((ulonglong)local_248 & 0xffffffffffffff00);
      local_228 = (**(code **)(local_e8 + 0x40))(local_210,param_2,uVar3,local_1a0);
      if ((local_228 == '\0') || (local_1a8 <= local_1b8)) {
        local_d8 = local_210;
        local_198 = local_210;
        if (local_210 == (longlong *)0x0) {
          local_c8 = 0;
        }
        else {
          local_c8 = (**(code **)*local_210)(local_210,1);
        }
        local_210 = (longlong *)0x0;
      }
    }
    else {
LAB_143bee9e8:
      uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
              ::GetBoundProgramCounterForTimerManager(local_1e8);
      iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
      if (iVar2 != 0) {
        uVar5 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_1e8);
        iVar2 = FAnalyticsSpan::GetStackDepth(uVar5);
        if (iVar2 == 0) goto LAB_143beea22;
      }
    }
  }
  if (local_210 == (longlong *)0x0) {
    local_b8 = local_1f8;
    local_188 = local_1f8;
    if (local_1f8 == (undefined8 *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = (**(code **)*local_1f8)(local_1f8,1);
    }
    local_1f8 = (undefined8 *)0x0;
  }
  else {
    FUN_143b86160(local_1f8,local_38);
    local_224 = FUN_143ab3100(local_1f8);
    local_21c = FAnalyticsSpan::GetStackDepth(local_1f8);
  }
LAB_143beeeb5:
  local_130 = FUN_143a8d310(0x38);
  if (local_130 == 0) {
    local_120 = 0;
  }
  else {
    local_120 = FUN_143bec820(local_130,local_38,local_224,local_21c);
  }
  local_98 = local_120;
  *param_3 = local_120;
  if ((local_1f8 != (undefined8 *)0x0) && (local_210 != (longlong *)0x0)) {
    iVar2 = FAnalyticsSpan::GetStackDepth(local_1f8);
    if (iVar2 == 0) {
      *param_4 = local_1f8;
      *param_5 = local_210;
    }
    else {
      *param_5 = local_1f8;
      *param_4 = local_210;
    }
  }
  FUN_143b989a0(local_1e8);
  FUN_143a8dc60(local_60);
  FUN_143a8dc60(local_38);
  return;
}



// FUNCTION 143beefd0 FUN_143beefd0 body=1856 status=ok
// SIG undefined FUN_143beefd0(void)

ulonglong FUN_143beefd0(longlong *param_1,longlong *param_2,undefined8 param_3,double param_4,
                       char param_5,undefined4 *param_6)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  uint local_ac;
  uint local_a8 [2];
  undefined1 local_a0 [32];
  uint local_80 [2];
  undefined1 local_78 [32];
  uint local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined8 local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  double local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 != '\0') {
    return (ulonglong)(uint3)(cVar3 >> 7) << 8;
  }
  cVar3 = (**(code **)(*param_1 + 0x50))(param_1,param_2);
  if (cVar3 != '\0') {
    return CONCAT71((uint7)(uint3)(cVar3 >> 7),1);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_3,0,local_80,local_a8,param_6);
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 != '\0') {
    return (ulonglong)(uint3)(cVar3 >> 7) << 8;
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_3,0,&local_58,&local_ac,param_6);
  cVar3 = FUN_143a8b0e0(*param_6);
  if (cVar3 != '\0') {
    return (ulonglong)(uint3)(cVar3 >> 7) << 8;
  }
  if (param_5 == '\0') {
    if ((local_80[0] != local_58) || (local_58 = local_ac, local_a8[0] != local_ac)) {
      return (ulonglong)local_58 & 0xffffffffffffff00;
    }
  }
  else if (((local_80[0] + local_a8[0] != local_58 + local_ac) ||
           ((local_a8[0] != 0 && (local_ac == 0)))) || ((local_a8[0] == 0 && (local_ac != 0)))) {
    return (ulonglong)(uint3)(local_80[0] + local_a8[0] >> 8) << 8;
  }
  local_40 = param_3;
  FUN_143b98930(local_a0);
  FUN_143b98930(local_78);
  do {
    cVar3 = (**(code **)(*param_1 + 0x68))(param_1,local_40,0,local_a0);
    cVar4 = (**(code **)(*param_2 + 0x68))(param_2,local_40,0,local_78);
    if (param_5 != '\0') {
      while ((cVar3 != '\0' && (dVar7 = (double)FUN_143b381e0(local_a0), dVar7 <= param_4))) {
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_a0);
        local_54 = FUN_143ab3100(uVar6);
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_a0);
        local_30 = FAnalyticsSpan::GetStackDepth(uVar6);
        local_30 = local_54 + local_30;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_a0);
        local_24 = FUN_143ab3100(uVar6);
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_a0);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (local_30 != local_24 + iVar5) break;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_a0);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 == 0) break;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_a0);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 == 0) break;
        uVar6 = FUN_143b381e0(local_a0);
        (**(code **)(*param_1 + 0x68))(param_1,uVar6,0,local_a0);
      }
      do {
        if ((cVar4 == '\0') || (dVar7 = (double)FUN_143b381e0(local_78), param_4 < dVar7)) break;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_78);
        local_4c = FUN_143ab3100(uVar6);
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_78);
        local_44 = FAnalyticsSpan::GetStackDepth(uVar6);
        local_44 = local_4c + local_44;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_78);
        local_2c = FUN_143ab3100(uVar6);
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_78);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (local_44 != local_2c + iVar5) break;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_78);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 == 0) break;
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_78);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 == 0) break;
        uVar6 = FUN_143b381e0(local_78);
        (**(code **)(*param_2 + 0x68))(param_2,uVar6,0,local_78);
      } while( true );
    }
    if ((cVar3 == '\0') || (dVar7 = (double)FUN_143b381e0(local_a0), param_4 < dVar7)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((cVar4 == '\0') || (dVar7 = (double)FUN_143b381e0(local_78), param_4 < dVar7)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((!bVar1) && (!bVar2)) {
      FUN_143b989a0(local_78);
      FUN_143b989a0(local_a0);
      return 1;
    }
    if ((!bVar1) || (!bVar2)) {
      FUN_143b989a0(local_78);
      FUN_143b989a0(local_a0);
      return 0;
    }
    local_20 = (double)FUN_143b381e0(local_a0);
    dVar7 = (double)FUN_143b381e0(local_78);
    if (local_20 != dVar7) {
      FUN_143b989a0(local_78);
      FUN_143b989a0(local_a0);
      return 0;
    }
    if (param_5 == '\0') {
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      local_50 = FUN_143ab3100(uVar6);
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_78);
      iVar5 = FUN_143ab3100(uVar6);
      if (local_50 != iVar5) {
LAB_143bef6b0:
        FUN_143b989a0(local_78);
        FUN_143b989a0(local_a0);
        return 0;
      }
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      local_48 = FAnalyticsSpan::GetStackDepth(uVar6);
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_78);
      iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
      if (local_48 != iVar5) goto LAB_143bef6b0;
    }
    else {
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      local_28 = FUN_143ab3100(uVar6);
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      local_34 = FAnalyticsSpan::GetStackDepth(uVar6);
      local_34 = local_28 + local_34;
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_78);
      local_38 = FUN_143ab3100(uVar6);
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_78);
      iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
      if (local_34 != local_38 + iVar5) {
LAB_143bef61b:
        FUN_143b989a0(local_78);
        FUN_143b989a0(local_a0);
        return 0;
      }
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
      if (iVar5 != 0) {
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_78);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 == 0) goto LAB_143bef61b;
      }
      uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
              ::GetObjectForTimerManager(local_a0);
      iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
      if (iVar5 == 0) {
        uVar6 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                ::GetObjectForTimerManager(local_78);
        iVar5 = FAnalyticsSpan::GetStackDepth(uVar6);
        if (iVar5 != 0) goto LAB_143bef61b;
      }
    }
    local_40 = FUN_143b381e0(local_a0);
  } while( true );
}



// FUNCTION 143bef710 FUN_143bef710 body=120 status=ok
// SIG undefined FUN_143bef710(void)

undefined8 * FUN_143bef710(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::MetaZoneIDsEnumeration::vftable;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = 0;
  uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
          ::GetIndex(param_1[0xd]);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return param_1;
}



// FUNCTION 143bef790 FUN_143bef790 body=145 status=ok
// SIG undefined FUN_143bef790(void)

undefined8 * FUN_143bef790(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::MetaZoneIDsEnumeration::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = param_2;
  param_1[0xe] = param_2;
  if (param_1[0xd] != 0) {
    uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(param_1[0xd]);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
  }
  return param_1;
}



// FUNCTION 143bef830 FUN_143bef830 body=94 status=ok
// SIG undefined FUN_143bef830(void)

undefined8 * FUN_143bef830(undefined8 *param_1)

{
  FUN_143ab1cf0(param_1);
  *param_1 = icu_53::MetaZoneIDsEnumeration::vftable;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  return param_1;
}



// FUNCTION 143bef890 FUN_143bef890 body=80 status=ok
// SIG undefined FUN_143bef890(void)

undefined8 * FUN_143bef890(undefined8 *param_1,undefined8 param_2)

{
  FUN_143befbb0(param_1,param_2);
  *param_1 = icu_53::TZNames::vftable;
  param_1[2] = 0;
  param_1[3] = 0;
  return param_1;
}



// FUNCTION 143bef8e0 FUN_143bef8e0 body=121 status=ok
// SIG undefined FUN_143bef8e0(void)

undefined8 * FUN_143bef8e0(undefined8 *param_1,undefined1 param_2,undefined8 param_3)

{
  *param_1 = icu_53::TextTrieMap::vftable;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = param_3;
  return param_1;
}



// FUNCTION 143bef960 FUN_143bef960 body=197 status=ok
// SIG undefined FUN_143bef960(void)

undefined8 *
FUN_143bef960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_143b88640(param_1);
  *param_1 = icu_53::TimeZoneNamesImpl::vftable;
  FUN_143a8a610(param_1 + 1,param_2);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  FUN_143bef8e0(param_1 + 0x34,1,FUN_143ab1b70,param_4,uVar1);
  FUN_143bf1f30(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143befa30 FUN_143befa30 body=233 status=ok
// SIG undefined FUN_143befa30(void)

longlong * FUN_143befa30(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong local_20;
  
  *param_1 = 0;
  param_1[1] = 0;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0xfb0);
    if (lVar2 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = FUN_143befb20(lVar2);
    }
    *param_1 = local_20;
    if (*param_1 == 0) {
      *param_2 = 7;
    }
    else {
      lVar2 = FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,FUN_143ab3050,param_2);
      param_1[1] = lVar2;
      FUN_143a8b0e0(*param_2);
    }
  }
  return param_1;
}



// FUNCTION 143befb20 FUN_143befb20 body=35 status=ok
// SIG undefined FUN_143befb20(void)

undefined8 * FUN_143befb20(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  return param_1;
}



// FUNCTION 143befb50 FUN_143befb50 body=85 status=ok
// SIG undefined FUN_143befb50(void)

undefined8 * FUN_143befb50(undefined8 *param_1,undefined4 param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::ZNameSearchHandler::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 143befbb0 FUN_143befbb0 body=45 status=ok
// SIG undefined FUN_143befbb0(void)

undefined8 * FUN_143befbb0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = icu_53::ZNames::vftable;
  param_1[1] = param_2;
  return param_1;
}



// FUNCTION 143befbe0 FUN_143befbe0 body=130 status=ok
// SIG undefined FUN_143befbe0(void)

void FUN_143befbe0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::MetaZoneIDsEnumeration::vftable;
  if ((param_1[0xe] != 0) && (puVar1 = (undefined8 *)param_1[0xe], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143ab1d60(param_1);
  return;
}



// FUNCTION 143befc70 FUN_143befc70 body=65 status=ok
// SIG undefined FUN_143befc70(void)

void FUN_143befc70(undefined8 *param_1)

{
  *param_1 = icu_53::TZNames::vftable;
  if (param_1[3] != 0) {
    FUN_143aa79f0(param_1[3]);
  }
  FUN_143beff90(param_1);
  return;
}



// FUNCTION 143befcc0 FUN_143befcc0 body=301 status=ok
// SIG undefined FUN_143befcc0(void)

void FUN_143befcc0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int local_38;
  int local_34;
  
  *param_1 = icu_53::TextTrieMap::vftable;
  for (local_38 = 0; local_38 < *(int *)((longlong)param_1 + 0x1c); local_38 = local_38 + 1) {
    FUN_143bf0a80((longlong)local_38 * 0x10 + param_1[2],param_1[6]);
  }
  FUN_143aa79f0(param_1[2]);
  if (param_1[4] != 0) {
    for (local_34 = 0;
        iVar2 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                ::GetIndex(param_1[4]), local_34 < iVar2; local_34 = local_34 + 2) {
      if (param_1[6] != 0) {
        uVar3 = FUN_143b09610(param_1[4],local_34 + 1);
        (*(code *)param_1[6])(uVar3);
      }
    }
    puVar1 = (undefined8 *)param_1[4];
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  return;
}



// FUNCTION 143befdf0 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::TextTrieMapSearchResultHandler::vftable;
  return;
}



// FUNCTION 143befe10 ~CMFCControlRenderer body=98 status=ok
// SIG void ~CMFCControlRenderer(CMFCControlRenderer * this)

/* Library Function - Single Match
    public: virtual __cdecl CMFCControlRenderer::~CMFCControlRenderer(void) __ptr64
   
   Library: Visual Studio 2010 Debug */

void __thiscall CMFCControlRenderer::~CMFCControlRenderer(CMFCControlRenderer *this)

{
  *(undefined ***)this = icu_53::TimeZoneNamesImpl::vftable;
  FUN_143bf0600(this);
  FUN_143befcc0(this + 0x1a0);
  FUN_143a8acf0(this + 8);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(this);
  return;
}



// FUNCTION 143befe80 FUN_143befe80 body=118 status=ok
// SIG undefined FUN_143befe80(void)

void FUN_143befe80(longlong *param_1)

{
  longlong lVar1;
  
  if (param_1[1] != 0) {
    FUN_143ab2e80(param_1[1]);
    param_1[1] = 0;
  }
  while (*param_1 != 0) {
    lVar1 = *(longlong *)*param_1;
    FUN_143a8d330(*param_1);
    *param_1 = lVar1;
  }
  return;
}



// FUNCTION 143beff00 FUN_143beff00 body=130 status=ok
// SIG undefined FUN_143beff00(void)

void FUN_143beff00(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::ZNameSearchHandler::vftable;
  if ((param_1[2] != 0) && (puVar1 = (undefined8 *)param_1[2], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143beff90 FUN_143beff90 body=55 status=ok
// SIG undefined FUN_143beff90(void)

void FUN_143beff90(undefined8 *param_1)

{
  *param_1 = icu_53::ZNames::vftable;
  if (param_1[1] != 0) {
    FUN_143aa79f0(param_1[1]);
  }
  return;
}



// FUNCTION 143beffd0 FUN_143beffd0 body=29 status=ok
// SIG undefined FUN_143beffd0(void)

bool FUN_143beffd0(longlong param_1,longlong param_2)

{
  return param_1 == param_2;
}



// FUNCTION 143befff0 FUN_143befff0 body=54 status=ok
// SIG undefined FUN_143befff0(void)

undefined8 FUN_143befff0(undefined8 param_1,uint param_2)

{
  FUN_143befbe0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf0030 FUN_143bf0030 body=54 status=ok
// SIG undefined FUN_143bf0030(void)

undefined8 FUN_143bf0030(undefined8 param_1,uint param_2)

{
  FUN_143befc70(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf0070 FUN_143bf0070 body=54 status=ok
// SIG undefined FUN_143bf0070(void)

undefined8 FUN_143bf0070(undefined8 param_1,uint param_2)

{
  FUN_143befcc0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf00b0 `scalar_deleting_destructor' body=54 status=ok
// SIG void * `scalar_deleting_destructor'(CMFCControlRenderer * this, uint param_1)

/* Library Function - Single Match
    public: virtual void * __ptr64 __cdecl CMFCControlRenderer::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Library: Visual Studio 2010 Debug */

void * __thiscall
CMFCControlRenderer::_scalar_deleting_destructor_(CMFCControlRenderer *this,uint param_1)

{
  ~CMFCControlRenderer(this);
  if ((param_1 & 1) != 0) {
    FUN_143a8d330(this);
  }
  return this;
}



// FUNCTION 143bf00f0 FUN_143bf00f0 body=54 status=ok
// SIG undefined FUN_143bf00f0(void)

undefined8 FUN_143bf00f0(undefined8 param_1,uint param_2)

{
  FUN_143beff00(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf0130 FUN_143bf0130 body=54 status=ok
// SIG undefined FUN_143bf0130(void)

undefined8 FUN_143bf0130(undefined8 param_1,uint param_2)

{
  FUN_143beff90(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf0170 FUN_143bf0170 body=442 status=ok
// SIG undefined FUN_143bf0170(void)

longlong FUN_143bf0170(longlong param_1,longlong param_2,ushort param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong local_res10;
  ushort local_28;
  ushort local_24;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    local_24 = 0;
    local_28 = *(ushort *)(param_2 + 10);
    while (local_28 != 0) {
      lVar2 = (ulonglong)local_28 * 0x10 + *(longlong *)(param_1 + 0x10);
      if (*(ushort *)(lVar2 + 8) == param_3) {
        return lVar2;
      }
      if (param_3 < *(ushort *)(lVar2 + 8)) break;
      local_24 = local_28;
      local_28 = *(ushort *)(lVar2 + 0xc);
    }
    local_res10 = param_2;
    if (*(int *)(param_1 + 0x1c) == *(int *)(param_1 + 0x18)) {
      lVar2 = *(longlong *)(param_1 + 0x10);
      cVar1 = FUN_143bf1bc0(param_1);
      if (cVar1 == '\0') {
        *param_4 = 7;
        return 0;
      }
      local_res10 = (longlong)(int)(param_2 - lVar2 >> 4) * 0x10 + *(longlong *)(param_1 + 0x10);
    }
    lVar2 = (longlong)*(int *)(param_1 + 0x1c) * 0x10 + *(longlong *)(param_1 + 0x10);
    FUN_143bf06a0(lVar2);
    *(ushort *)(lVar2 + 8) = param_3;
    *(ushort *)(lVar2 + 0xc) = local_28;
    if (local_24 == 0) {
      *(undefined2 *)(local_res10 + 10) = *(undefined2 *)(param_1 + 0x1c);
    }
    else {
      *(undefined2 *)(*(longlong *)(param_1 + 0x10) + 0xc + (ulonglong)local_24 * 0x10) =
           *(undefined2 *)(param_1 + 0x1c);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 143bf0330 FUN_143bf0330 body=354 status=ok
// SIG undefined FUN_143bf0330(void)

void FUN_143bf0330(longlong *param_1,longlong param_2,code *param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong local_30;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    if (*param_1 == 0) {
      *param_1 = param_2;
    }
    else {
      if (*(char *)((longlong)param_1 + 0xe) == '\0') {
        lVar2 = FUN_143a8d310(0x28);
        if (lVar2 == 0) {
          local_30 = 0;
        }
        else {
          local_30 = FUN_143b09140(lVar2,param_3,0,1,param_4);
        }
        cVar1 = FUN_143a8b0e0(*param_4);
        if (cVar1 != '\0') {
          if (param_3 == (code *)0x0) {
            return;
          }
          (*param_3)(param_2);
          return;
        }
        FUN_143b09430(local_30,*param_1,param_4);
        *param_1 = local_30;
        *(undefined1 *)((longlong)param_1 + 0xe) = 1;
      }
      FUN_143b09430(*param_1,param_2,param_4);
    }
  }
  else if (param_3 != (code *)0x0) {
    (*param_3)(param_2);
  }
  return;
}



// FUNCTION 143bf04a0 FUN_143bf04a0 body=345 status=ok
// SIG undefined FUN_143bf04a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf04a0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x20) != 0) {
    local_78 = 0;
    while (iVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                   ::GetIndex(*(undefined8 *)(param_1 + 0x20)), local_78 < iVar1) {
      local_58 = FUN_143b09610(*(undefined8 *)(param_1 + 0x20),local_78);
      local_68 = FUN_143b09610(*(undefined8 *)(param_1 + 0x20),local_78 + 1);
      FUN_143a8d4f0(local_40,1,local_58,0xffffffff);
      FUN_143bf2d50(param_1,local_40,local_68,param_2);
      FUN_143a8dc60(local_40);
      local_78 = local_78 + 2;
    }
    local_70 = *(undefined8 **)(param_1 + 0x20);
    if (local_70 != (undefined8 *)0x0) {
      local_50 = local_70;
      (**(code **)*local_70)(local_70,1);
    }
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 143bf0600 FUN_143bf0600 body=158 status=ok
// SIG undefined FUN_143bf0600(void)

void FUN_143bf0600(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FUN_143aa2ef0(*(undefined8 *)(param_1 + 0x180));
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_143ab2e80(*(undefined8 *)(param_1 + 400));
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(longlong *)(param_1 + 0x188) != 0) {
    FUN_143ab2e80(*(undefined8 *)(param_1 + 0x188));
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  return;
}



// FUNCTION 143bf06a0 FUN_143bf06a0 body=32 status=ok
// SIG undefined FUN_143bf06a0(void)

void FUN_143bf06a0(void *param_1)

{
  _guard_xfg_dispatch_icall_nop(param_1,0,0x10);
  return;
}



// FUNCTION 143bf06c0 FUN_143bf06c0 body=112 status=ok
// SIG undefined FUN_143bf06c0(void)

undefined8 FUN_143bf06c0(longlong param_1)

{
  undefined4 local_38 [2];
  longlong local_30;
  undefined8 local_28;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_38[0] = 0;
  local_30 = FUN_143a8d310(0x1d8);
  if (local_30 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_143bef960(local_30,param_1 + 8,local_38);
  }
  return local_28;
}



// FUNCTION 143bf0730 FUN_143bf0730 body=19 status=ok
// SIG undefined FUN_143bf0730(void)

undefined4 FUN_143bf0730(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x60);
}



// FUNCTION 143bf0750 FUN_143bf0750 body=87 status=ok
// SIG undefined FUN_143bf0750(void)

undefined4 FUN_143bf0750(longlong *param_1)

{
  undefined4 local_18;
  undefined4 local_14;
  
  if (*param_1 == 0) {
    local_14 = 0;
  }
  else {
    if (*(char *)((longlong)param_1 + 0xe) == '\0') {
      local_18 = 1;
    }
    else {
      local_18 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                 ::GetIndex(*param_1);
    }
    local_14 = local_18;
  }
  return local_14;
}



// FUNCTION 143bf07b0 FUN_143bf07b0 body=574 status=ok
// SIG undefined FUN_143bf07b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bf07b0(longlong param_1,char *param_2,undefined8 param_3)

{
  undefined1 auStack_b8 [32];
  int local_98;
  undefined4 local_94;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    local_88 = 0;
  }
  else {
    local_58 = FUN_143bf2190(param_1,param_2);
    local_80 = 0;
    local_90 = 0;
    local_94 = 0;
    local_78[0] = 0;
    local_70 = FUN_143aa3350(param_1,param_2,0,&local_94);
    local_80 = FUN_143aa4fe0(local_70,&DAT_145d1b0fc,local_78,&local_94);
    local_94 = 0;
    FUN_143aa2ef0(local_70);
    if (local_80 == 0) {
      FUN_143a8ac30(local_40);
      local_98 = 0;
      FUN_143bf14a0(param_3,local_40);
      local_98 = FUN_143a904f0(local_40);
      if ((0 < local_98) && (local_90 = FUN_143aa7a40((longlong)(local_98 + 1) << 1), local_90 != 0)
         ) {
        FUN_143a8f920(local_40,local_90,local_98 + 1,&local_94);
        local_80 = local_90;
      }
      FUN_143a8dc60(local_40);
    }
    local_88 = 0;
    if ((local_80 != 0) || (local_58 != 0)) {
      local_60 = FUN_143a8d310(0x20);
      if (local_60 == 0) {
        local_68 = 0;
      }
      else {
        local_68 = FUN_143bef890(local_60,local_58);
      }
      local_50 = local_68;
      local_88 = local_68;
      if ((local_68 == 0) && (local_90 != 0)) {
        FUN_143aa79f0(local_90);
      }
      *(longlong *)(local_88 + 0x10) = local_80;
      *(longlong *)(local_88 + 0x18) = local_90;
    }
  }
  return local_88;
}



// FUNCTION 143bf09f0 FUN_143bf09f0 body=129 status=ok
// SIG undefined FUN_143bf09f0(void)

undefined8 FUN_143bf09f0(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_28;
  
  lVar1 = FUN_143bf2190(param_1,param_2);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    lVar2 = FUN_143a8d310(0x10);
    if (lVar2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = FUN_143befbb0(lVar2,lVar1);
    }
  }
  return local_28;
}



// FUNCTION 143bf0a80 FUN_143bf0a80 body=134 status=ok
// SIG undefined FUN_143bf0a80(void)

void FUN_143bf0a80(longlong *param_1,code *param_2)

{
  undefined8 *puVar1;
  
  if (*param_1 != 0) {
    if (*(char *)((longlong)param_1 + 0xe) == '\0') {
      if (param_2 != (code *)0x0) {
        (*param_2)(*param_1);
      }
    }
    else {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 143bf0b10 FUN_143bf0b10 body=876 status=ok
// SIG undefined FUN_143bf0b10(void)

undefined8 *
FUN_143bf0b10(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,undefined4 *param_5
             )

{
  char cVar1;
  int iVar2;
  int local_a8 [2];
  longlong *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  longlong *local_88;
  longlong local_80;
  longlong local_78;
  undefined1 local_70 [24];
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_143befb50(local_70,param_4);
  local_78 = param_1;
  FUN_143ab2410(&DAT_146bc8490);
  FUN_143bf3160(param_1 + 0x1a0,param_2,param_3,local_70,param_5);
  FUN_143ab2470(&DAT_146bc8490);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_a8[0] = 0;
    local_90 = (undefined8 *)FUN_143bf1730(local_70,local_a8);
    if ((local_90 == (undefined8 *)0x0) ||
       ((iVar2 = FUN_143a904f0(param_2), local_a8[0] != iVar2 - param_3 &&
        (*(char *)(param_1 + 0x198) == '\0')))) {
      local_30 = local_90;
      local_98 = local_90;
      if (local_90 == (undefined8 *)0x0) {
        local_40 = 0;
      }
      else {
        local_40 = (**(code **)*local_90)(local_90,1);
      }
      FUN_143ab2410(&DAT_146bc8490);
      if (*(char *)(param_1 + 0x198) == '\0') {
        local_a0 = (longlong *)FUN_143b4aec0(1,0,0,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          while ((local_80 = (**(code **)(*local_a0 + 0x30))(local_a0,param_5), local_80 != 0 &&
                 (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0'))) {
            FUN_143bf2640(local_78,local_80);
          }
        }
        if (local_a0 != (longlong *)0x0) {
          local_20 = local_a0;
          local_88 = local_a0;
          if (local_a0 == (longlong *)0x0) {
            local_50 = 0;
          }
          else {
            local_50 = (**(code **)*local_a0)(local_a0,1);
          }
        }
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          *(undefined1 *)(local_78 + 0x198) = 1;
        }
      }
      FUN_143ab2470(&DAT_146bc8490);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        FUN_143ab2410(&DAT_146bc8490);
        FUN_143bf3160(param_1 + 0x1a0,param_2,param_3,local_70,param_5);
        FUN_143ab2470(&DAT_146bc8490);
        local_38 = (undefined8 *)FUN_143bf1730(local_70,local_a8);
        FUN_143beff00(local_70);
        local_28 = local_38;
      }
      else {
        local_48 = (undefined8 *)0x0;
        FUN_143beff00(local_70);
        local_28 = local_48;
      }
    }
    else {
      local_58 = local_90;
      FUN_143beff00(local_70);
      local_28 = local_58;
    }
  }
  else {
    local_28 = (undefined8 *)0x0;
    FUN_143beff00(local_70);
  }
  return local_28;
}



// FUNCTION 143bf0e80 FUN_143bf0e80 body=62 status=ok
// SIG undefined FUN_143bf0e80(void)

void FUN_143bf0e80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a8ffc0(param_2);
  FUN_143bf0ec0(param_1,uVar1,param_3);
  return;
}



// FUNCTION 143bf0ec0 FUN_143bf0ec0 body=487 status=ok
// SIG undefined FUN_143bf0ec0(void)

wchar_t * FUN_143bf0ec0(longlong *param_1,wchar_t *param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  wchar_t *_Dest;
  longlong lVar4;
  longlong local_30;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    _Dest = (wchar_t *)FUN_143ab32d0(param_1[1],param_2);
    if (_Dest == (wchar_t *)0x0) {
      iVar3 = FreeLib(param_2);
      if (2000 - *(int *)(*param_1 + 8) <= iVar3) {
        if (1999 < iVar3) {
          *param_3 = 5;
          return L"";
        }
        lVar1 = *param_1;
        lVar4 = FUN_143a8d310(0xfb0);
        if (lVar4 == 0) {
          local_30 = 0;
        }
        else {
          local_30 = FUN_143befb20(lVar4);
        }
        *param_1 = local_30;
        if (*param_1 == 0) {
          *param_3 = 7;
          return L"";
        }
        *(longlong *)*param_1 = lVar1;
      }
      _Dest = (wchar_t *)(*param_1 + 0xc + (longlong)*(int *)(*param_1 + 8) * 2);
      wcscpy(_Dest,param_2);
      *(int *)(*param_1 + 8) = iVar3 + 1 + *(int *)(*param_1 + 8);
      FUN_143ab36d0(param_1[1],_Dest,_Dest,param_3);
    }
  }
  else {
    _Dest = L"";
  }
  return _Dest;
}



// FUNCTION 143bf10b0 FUN_143bf10b0 body=207 status=ok
// SIG undefined FUN_143bf10b0(void)

undefined8 FUN_143bf10b0(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_40;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = `FGenericPlatformMisc::GetPlatformChunkInstall'::`2'::
            _dynamic_atexit_destructor_for__Singleton__();
    if (lVar2 == 0) {
      lVar2 = FUN_143a8d310(0x78);
      if (lVar2 == 0) {
        local_40 = 0;
        local_28 = local_40;
      }
      else {
        local_28 = FUN_143bef830(lVar2);
      }
    }
    else {
      lVar3 = FUN_143a8d310(0x78);
      if (lVar3 == 0) {
        local_28 = 0;
      }
      else {
        local_28 = FUN_143bef710(lVar3,lVar2);
      }
    }
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143bf1180 FUN_143bf1180 body=652 status=ok
// SIG undefined FUN_143bf1180(void)

undefined8 FUN_143bf1180(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int local_a8;
  undefined8 local_80;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_50;
  
  cVar2 = FUN_143a8b0e0(*param_3);
  if (cVar2 == '\0') {
    lVar4 = FUN_143b97610(param_2);
    if (lVar4 == 0) {
      lVar4 = FUN_143a8d310(0x78);
      if (lVar4 == 0) {
        local_50 = 0;
        local_80 = local_50;
      }
      else {
        local_80 = FUN_143bef830(lVar4);
      }
    }
    else {
      local_80 = 0;
      lVar5 = FUN_143a8d310(0x28);
      if (lVar5 == 0) {
        local_68 = (undefined8 *)0x0;
      }
      else {
        local_68 = (undefined8 *)FUN_143b090a0(lVar5,0,FUN_143ab3050,param_3);
      }
      if (local_68 == (undefined8 *)0x0) {
        *param_3 = 7;
      }
      cVar2 = FUN_143a8b110(*param_3);
      if (cVar2 != '\0') {
        for (local_a8 = 0;
            (cVar2 = FUN_143a8b110(*param_3), cVar2 != '\0' &&
            (iVar3 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
                     ::GetIndex(lVar4), local_a8 < iVar3)); local_a8 = local_a8 + 1) {
          puVar6 = (undefined8 *)FUN_143b09610(lVar4,local_a8);
          uVar1 = *puVar6;
          cVar2 = FUN_143b0fdf0(local_68,uVar1);
          if (cVar2 == '\0') {
            FUN_143b09430(local_68,uVar1,param_3);
          }
        }
        cVar2 = FUN_143a8b110(*param_3);
        if (cVar2 == '\0') {
          if (local_68 != (undefined8 *)0x0) {
            (**(code **)*local_68)(local_68,1);
          }
        }
        else {
          lVar4 = FUN_143a8d310(0x78);
          if (lVar4 == 0) {
            local_60 = 0;
            local_80 = local_60;
          }
          else {
            local_80 = FUN_143bef790(lVar4,local_68);
          }
        }
      }
    }
  }
  else {
    local_80 = 0;
  }
  return local_80;
}



// FUNCTION 143bf1410 FUN_143bf1410 body=136 status=ok
// SIG undefined FUN_143bf1410(void)

longlong FUN_143bf1410(longlong param_1,longlong param_2,ushort param_3)

{
  longlong lVar1;
  ushort local_18;
  
  local_18 = *(ushort *)(param_2 + 10);
  while( true ) {
    if (local_18 == 0) {
      return 0;
    }
    lVar1 = (ulonglong)local_18 * 0x10 + *(longlong *)(param_1 + 0x10);
    if (*(ushort *)(lVar1 + 8) == param_3) break;
    if (param_3 < *(ushort *)(lVar1 + 8)) {
      return 0;
    }
    local_18 = *(ushort *)(lVar1 + 0xc);
  }
  return lVar1;
}



// FUNCTION 143bf14a0 FUN_143bf14a0 body=436 status=ok
// SIG undefined FUN_143bf14a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_143bf14a0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  int local_98;
  int local_94;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  cVar1 = FUN_143a903a0(param_1);
  if ((((cVar1 == '\0') && (cVar1 = FUN_143b4d510(param_1,L"Etc/SystemV/Riyadh8",4), cVar1 == '\0'))
      && (cVar1 = FUN_143b4d510(param_1,L"SystemV/Riyadh8",8), cVar1 == '\0')) &&
     (iVar2 = FUN_143b19dc0(param_1,L"Riyadh8",7,0), iVar2 < 1)) {
    local_98 = FUN_143b0c690(param_1,0x2f);
    if (0 < local_98) {
      local_94 = local_98 + 1;
      iVar2 = FUN_143a904f0(param_1);
      if (local_94 < iVar2) {
        FUN_143a90ca0(param_2,param_1,local_98 + 1);
        local_90 = FUN_143a8dbd0(local_40,0x20);
        local_80 = local_90;
        local_88 = FUN_143a8dbd0(local_68,0x5f);
        local_78 = local_88;
        FUN_143b37590(param_2,local_88,local_90);
        FUN_143a8dc60(local_68);
        FUN_143a8dc60(local_40);
        return param_2;
      }
    }
    FUN_143a90e90(param_2);
    return param_2;
  }
  FUN_143a90e90(param_2);
  return param_2;
}



// FUNCTION 143bf1660 FUN_143bf1660 body=19 status=ok
// SIG undefined FUN_143bf1660(void)

void FUN_143bf1660(void)

{
  FUN_143bf1ae0();
  return;
}



// FUNCTION 143bf1680 FUN_143bf1680 body=176 status=ok
// SIG undefined FUN_143bf1680(void)

undefined8 FUN_143bf1680(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong local_20;
  
  FUN_143a90e90(param_3);
  local_20 = 0;
  FUN_143ab2410(&DAT_146bc8490);
  plVar1 = (longlong *)FUN_143bf2730(param_1,param_2);
  FUN_143ab2470(&DAT_146bc8490);
  if (plVar1 != (longlong *)0x0) {
    local_20 = (**(code **)(*plVar1 + 8))(plVar1,0x40);
  }
  if (local_20 != 0) {
    FUN_143a90d80(param_3,1,local_20,0xffffffff);
  }
  return param_3;
}



// FUNCTION 143bf1730 FUN_143bf1730 body=76 status=ok
// SIG undefined FUN_143bf1730(void)

undefined8 FUN_143bf1730(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(param_1 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return uVar1;
}



// FUNCTION 143bf1780 FUN_143bf1780 body=198 status=ok
// SIG undefined FUN_143bf1780(void)

undefined8
FUN_143bf1780(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_143a90e90(param_4);
  cVar1 = FUN_143a903a0(param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8490);
    plVar2 = (longlong *)FUN_143bf2300(param_1,param_2);
    FUN_143ab2470(&DAT_146bc8490);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_3);
      if (lVar3 != 0) {
        FUN_143a90d80(param_4,1,lVar3,0xffffffff);
      }
    }
  }
  return param_4;
}



// FUNCTION 143bf1850 FUN_143bf1850 body=56 status=ok
// SIG undefined FUN_143bf1850(void)

undefined8
FUN_143bf1850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_143b97540(param_2,param_3,param_4);
  return param_4;
}



// FUNCTION 143bf1890 FUN_143bf1890 body=50 status=ok
// SIG undefined FUN_143bf1890(void)

undefined8 FUN_143bf1890(longlong param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0x40) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar1 = FUN_143bf18d0(param_1,param_2);
  }
  return uVar1;
}



// FUNCTION 143bf18d0 FUN_143bf18d0 body=293 status=ok
// SIG undefined FUN_143bf18d0(void)

undefined8 FUN_143bf18d0(longlong param_1,undefined4 param_2)

{
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    local_10 = 0;
  }
  else {
    switch(param_2) {
    case 1:
      local_10 = **(undefined8 **)(param_1 + 8);
      break;
    case 2:
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 8);
      break;
    default:
      local_10 = 0;
      break;
    case 4:
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x10);
      break;
    case 8:
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x18);
      break;
    case 0x10:
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x20);
      break;
    case 0x20:
      local_10 = *(undefined8 *)(*(longlong *)(param_1 + 8) + 0x28);
    }
  }
  return local_10;
}



// FUNCTION 143bf1a40 FUN_143bf1a40 body=153 status=ok
// SIG undefined FUN_143bf1a40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143bf1a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  local_58 = FUN_143a8d9f0(local_40,param_3,0xffffffff,0);
  local_50 = local_58;
  FUN_143b97af0(param_2,local_58,param_4);
  FUN_143a8dc60(local_40);
  return param_4;
}



// FUNCTION 143bf1ae0 FUN_143bf1ae0 body=8 status=ok
// SIG undefined FUN_143bf1ae0(void)

undefined * FUN_143bf1ae0(void)

{
  return &DAT_146bc84f0;
}



// FUNCTION 143bf1af0 FUN_143bf1af0 body=198 status=ok
// SIG undefined FUN_143bf1af0(void)

undefined8
FUN_143bf1af0(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  
  FUN_143a90e90(param_4);
  cVar1 = FUN_143a903a0(param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8490);
    plVar2 = (longlong *)FUN_143bf2730(param_1,param_2);
    FUN_143ab2470(&DAT_146bc8490);
    if (plVar2 != (longlong *)0x0) {
      lVar3 = (**(code **)(*plVar2 + 8))(plVar2,param_3);
      if (lVar3 != 0) {
        FUN_143a90d80(param_4,1,lVar3,0xffffffff);
      }
    }
  }
  return param_4;
}



// FUNCTION 143bf1bc0 FUN_143bf1bc0 body=181 status=ok
// SIG undefined FUN_143bf1bc0(void)

undefined8 FUN_143bf1bc0(longlong param_1)

{
  undefined8 uVar1;
  void *_Dst;
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x18) == 0xffff) {
    uVar1 = 0;
  }
  else {
    local_18 = *(int *)(param_1 + 0x18) + 1000;
    if (0xffff < local_18) {
      local_18 = 0xffff;
    }
    _Dst = (void *)FUN_143aa7a40((longlong)local_18 * 0x10);
    if (_Dst == (void *)0x0) {
      uVar1 = 0;
    }
    else {
      _guard_xfg_dispatch_icall_nop
                (_Dst,*(void **)(param_1 + 0x10),(longlong)*(int *)(param_1 + 0x1c) * 0x10);
      FUN_143aa79f0(*(undefined8 *)(param_1 + 0x10));
      *(void **)(param_1 + 0x10) = _Dst;
      *(int *)(param_1 + 0x18) = local_18;
      uVar1 = 1;
    }
  }
  return uVar1;
}



// FUNCTION 143bf1c80 FUN_143bf1c80 body=688 status=ok
// SIG undefined FUN_143bf1c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bf1c80(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 auStack_e8 [32];
  undefined4 *local_c8;
  int local_b8;
  uint *local_b0;
  uint local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [40];
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_68 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b8cca0(param_3);
    uVar3 = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      local_a8 = FUN_143bf0750(param_3);
      for (local_b8 = 0; uVar3 = (ulonglong)local_a8, local_b8 < (int)local_a8;
          local_b8 = local_b8 + 1) {
        local_b0 = (uint *)FUN_143b8cbd0(param_3,local_b8);
        if (local_b0 == (uint *)0x0) {
          uVar3 = 0;
          break;
        }
        if ((*local_b0 & *(uint *)(param_1 + 8)) != 0) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            local_a0 = FUN_143a8d310(0x10);
            if (local_a0 == 0) {
              local_98 = 0;
            }
            else {
              local_98 = FUN_143b88610(local_a0);
            }
            local_80 = local_98;
            *(undefined8 *)(param_1 + 0x10) = local_98;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              *param_4 = 7;
            }
          }
          cVar1 = FUN_143a8b110(*param_4);
          if (cVar1 != '\0') {
            if (*(longlong *)(local_b0 + 2) == 0) {
              local_88 = FUN_143a8db50(local_38,*(undefined8 *)(local_b0 + 4),0xffffffff);
              local_c8 = param_4;
              local_78 = local_88;
              FUN_143b88d00(*(undefined8 *)(param_1 + 0x10),*local_b0,param_2,local_88);
              FUN_143a8dc60(local_38);
            }
            else {
              local_90 = FUN_143a8db50(local_60,*(undefined8 *)(local_b0 + 2),0xffffffff);
              local_c8 = param_4;
              local_70 = local_90;
              FUN_143b88e40(*(undefined8 *)(param_1 + 0x10),*local_b0,param_2,local_90);
              FUN_143a8dc60(local_60);
            }
            cVar1 = FUN_143a8b110(*param_4);
            if ((cVar1 != '\0') && (*(int *)(param_1 + 0xc) < param_2)) {
              *(int *)(param_1 + 0xc) = param_2;
            }
          }
        }
      }
    }
    lVar2 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    lVar2 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return lVar2;
}



// FUNCTION 143bf1f30 FUN_143bf1f30 body=606 status=ok
// SIG undefined FUN_143bf1f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf1f30(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_a8 [32];
  undefined4 local_88 [2];
  undefined8 *local_80;
  longlong local_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    local_88[0] = 0;
    uVar2 = FUN_143a8c200(param_2);
    uVar2 = FUN_143aa5b10("icudt53l-zone",uVar2,local_88);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    uVar2 = FUN_143aa3350(*(undefined8 *)(param_1 + 0x180),"zoneStrings",
                          *(undefined8 *)(param_1 + 0x180),local_88);
    *(undefined8 *)(param_1 + 0x180) = uVar2;
    cVar1 = FUN_143a8b0e0(local_88[0]);
    if (cVar1 == '\0') {
      uVar2 = FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,0,param_3);
      *(undefined8 *)(param_1 + 400) = uVar2;
      uVar2 = FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,0,param_3);
      *(undefined8 *)(param_1 + 0x188) = uVar2;
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        std::ios_base::width(*(ios_base **)(param_1 + 400),0x143bf32c0);
        std::ios_base::width(*(ios_base **)(param_1 + 0x188),0x143bf32c0);
        local_70 = (undefined8 *)FUN_143b4ac10();
        local_78 = FUN_143b96b20(local_70);
        if (local_78 != 0) {
          local_68 = FUN_143a8dad0(local_40,local_78);
          local_58 = local_68;
          FUN_143bf2640(param_1,local_68);
          FUN_143a8dc60(local_40);
        }
        local_50 = local_70;
        local_80 = local_70;
        if (local_70 != (undefined8 *)0x0) {
          (**(code **)*local_70)(local_70,1);
        }
      }
      else {
        FUN_143bf0600(param_1);
      }
    }
    else {
      *param_3 = local_88[0];
      FUN_143bf0600(param_1);
    }
  }
  return;
}



// FUNCTION 143bf2190 FUN_143bf2190 body=365 status=ok
// SIG undefined FUN_143bf2190(void)

longlong FUN_143bf2190(longlong param_1,char *param_2)

{
  bool bVar1;
  char cVar2;
  int local_34;
  undefined4 local_30;
  int local_2c;
  longlong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  if (((param_1 == 0) || (param_2 == (char *)0x0)) || (*param_2 == '\0')) {
    local_28 = 0;
  }
  else {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    local_20 = FUN_143aa3350(param_1,param_2,0,&local_30);
    cVar2 = FUN_143a8b110(local_30);
    if (cVar2 != '\0') {
      local_28 = FUN_143aa7a40(0x30);
      if (local_28 != 0) {
        bVar1 = true;
        for (local_34 = 0; local_34 < 6; local_34 = local_34 + 1) {
          local_30 = 0;
          local_2c = 0;
          local_18 = FUN_143aa4fe0(local_20,(&PTR_DAT_146832b80)[local_34],&local_2c,&local_30);
          cVar2 = FUN_143a8b0e0(local_30);
          if ((cVar2 == '\0') && (local_2c != 0)) {
            *(undefined8 *)(local_28 + (longlong)local_34 * 8) = local_18;
            bVar1 = false;
          }
          else {
            *(undefined8 *)(local_28 + (longlong)local_34 * 8) = 0;
          }
        }
        if (bVar1) {
          FUN_143aa79f0(local_28);
          local_28 = 0;
        }
      }
    }
    FUN_143aa2ef0(local_20);
  }
  return local_28;
}



// FUNCTION 143bf2300 FUN_143bf2300 body=826 status=ok
// SIG undefined FUN_143bf2300(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143bf2300(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_248 [32];
  longlong *local_228;
  int local_220;
  undefined4 local_21c;
  longlong *local_218;
  undefined4 *local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  ulonglong local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1c8;
  undefined1 local_1b8 [144];
  undefined2 local_128 [136];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  iVar2 = FUN_143a904f0(param_2);
  if (iVar2 < 0x7c) {
    local_228 = (longlong *)0x0;
    local_21c = 0;
    FUN_143a8f920(param_2,local_128,0x81,&local_21c);
    iVar2 = FUN_143a904f0(param_2);
    local_1f0 = (longlong)iVar2 * 2;
    if (0x101 < local_1f0) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_128[iVar2] = 0;
    local_218 = (longlong *)FUN_143ab32d0(*(undefined8 *)(param_1 + 400),local_128);
    if (local_218 == (longlong *)0x0) {
      FUN_143bf2b50(param_2,local_1b8);
      local_228 = (longlong *)FUN_143bf09f0(*(undefined8 *)(param_1 + 0x180),local_1b8);
      local_218 = local_228;
      if (local_228 == (longlong *)0x0) {
        local_218 = (longlong *)0x145d1b100;
      }
      local_200 = FUN_143b968a0(param_2);
      if (local_200 == 0) {
        if (local_228 != (longlong *)0x0) {
          local_1d8 = local_228;
          local_1f8 = local_228;
          if (local_228 != (longlong *)0x0) {
            (**(code **)*local_228)(local_228,1);
          }
          local_228 = (longlong *)0x0;
        }
      }
      else {
        FUN_143ab36d0(*(undefined8 *)(param_1 + 400),local_200,local_218,&local_21c);
        cVar1 = FUN_143a8b0e0(local_21c);
        if (cVar1 == '\0') {
          if (local_228 != (longlong *)0x0) {
            local_220 = 0;
            while (*(int *)(&DAT_145d1b108 + (longlong)local_220 * 4) != 0) {
              local_1e0 = *local_228;
              local_1e8 = (**(code **)(local_1e0 + 8))
                                    (local_228,
                                     *(undefined4 *)(&DAT_145d1b108 + (longlong)local_220 * 4));
              if ((local_1e8 != 0) &&
                 (local_210 = (undefined4 *)FUN_143aa7a40(0x18), local_210 != (undefined4 *)0x0)) {
                *local_210 = *(undefined4 *)(&DAT_145d1b108 + (longlong)local_220 * 4);
                *(undefined8 *)(local_210 + 2) = 0;
                *(longlong *)(local_210 + 4) = local_200;
                FUN_143bf2c60(param_1 + 0x1a0,local_1e8,local_210,&local_21c);
              }
              local_220 = local_220 + 1;
            }
          }
        }
        else if (local_228 != (longlong *)0x0) {
          local_1c8 = local_228;
          local_208 = local_228;
          if (local_228 != (longlong *)0x0) {
            (**(code **)*local_228)(local_228,1);
          }
        }
      }
    }
    else if (local_218 != (longlong *)"<empty>") {
      local_228 = local_218;
    }
  }
  else {
    local_228 = (longlong *)0x0;
  }
  return local_228;
}



// FUNCTION 143bf2640 FUN_143bf2640 body=238 status=ok
// SIG undefined FUN_143bf2640(void)

void FUN_143bf2640(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined4 local_38 [2];
  longlong *local_30;
  longlong *local_28;
  longlong local_20;
  longlong *local_18;
  
  FUN_143bf2730(param_1,param_2);
  local_38[0] = 0;
  local_30 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1,param_2,local_38);
  cVar1 = FUN_143a8b110(local_38[0]);
  if ((cVar1 != '\0') && (local_30 != (longlong *)0x0)) {
    while ((local_20 = (**(code **)(*local_30 + 0x30))(local_30,local_38), local_20 != 0 &&
           (cVar1 = FUN_143a8b0e0(local_38[0]), cVar1 == '\0'))) {
      FUN_143bf2300(param_1,local_20);
    }
    local_18 = local_30;
    local_28 = local_30;
    if (local_30 != (longlong *)0x0) {
      (**(code **)*local_30)(local_30,1);
    }
  }
  return;
}



// FUNCTION 143bf2730 FUN_143bf2730 body=1043 status=ok
// SIG undefined FUN_143bf2730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_143bf2730(longlong param_1,undefined8 param_2)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_2a8 [32];
  undefined4 local_288;
  undefined4 local_280;
  longlong *local_278;
  int local_270;
  int local_26c;
  undefined4 local_268 [2];
  longlong *local_260;
  undefined4 *local_258;
  longlong *local_250;
  longlong local_248;
  int local_240;
  longlong *local_238;
  undefined4 local_230 [2];
  ulonglong local_228;
  longlong local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  longlong local_200;
  longlong *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8 [48];
  undefined1 local_1b8 [144];
  undefined2 local_128 [136];
  ulonglong local_18;
  
  local_1f0 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  iVar3 = FUN_143a904f0(param_2);
  if (iVar3 < 0x81) {
    local_278 = (longlong *)0x0;
    local_230[0] = 0;
    local_240 = FUN_143a8f920(param_2,local_128,0x81,local_230);
    local_228 = (longlong)local_240 * 2;
    if (0x101 < local_228) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_128[local_240] = 0;
    local_260 = (longlong *)FUN_143ab32d0(*(undefined8 *)(param_1 + 0x188),local_128);
    if (local_260 == (longlong *)0x0) {
      local_268[0] = 0;
      FUN_143a8d3a0(local_1e8,param_2);
      local_26c = 0;
      while (iVar3 = FUN_143a904f0(local_1e8), local_26c < iVar3) {
        sVar2 = FUN_143a8e4f0(local_1e8);
        if (sVar2 == 0x2f) {
          FUN_143a90bc0(local_1e8,local_26c,0x3a);
        }
        local_26c = local_26c + 1;
      }
      uVar4 = FUN_143a904f0(local_1e8);
      local_280 = 0;
      local_288 = 0x81;
      FUN_143a8f880(local_1e8,0,uVar4,local_1b8);
      local_278 = (longlong *)FUN_143bf07b0(*(undefined8 *)(param_1 + 0x180),local_1b8,param_2);
      local_260 = local_278;
      if (local_278 == (longlong *)0x0) {
        local_260 = (longlong *)0x145d1b100;
      }
      local_248 = FUN_143b968e0(param_2);
      if (local_248 == 0) {
        if (local_278 != (longlong *)0x0) {
          local_208 = local_278;
          local_250 = local_278;
          if (local_278 == (longlong *)0x0) {
            local_210 = 0;
          }
          else {
            local_210 = (**(code **)*local_278)(local_278,1);
          }
          local_278 = (longlong *)0x0;
        }
      }
      else {
        FUN_143ab36d0(*(undefined8 *)(param_1 + 0x188),local_248,local_260,local_268);
        cVar1 = FUN_143a8b0e0(local_268[0]);
        if (cVar1 == '\0') {
          if (local_278 != (longlong *)0x0) {
            local_270 = 0;
            while (*(int *)(&DAT_145d1b108 + (longlong)local_270 * 4) != 0) {
              local_200 = *local_278;
              local_220 = (**(code **)(local_200 + 8))
                                    (local_278,
                                     *(undefined4 *)(&DAT_145d1b108 + (longlong)local_270 * 4));
              if ((local_220 != 0) &&
                 (local_258 = (undefined4 *)FUN_143aa7a40(0x18), local_258 != (undefined4 *)0x0)) {
                *local_258 = *(undefined4 *)(&DAT_145d1b108 + (longlong)local_270 * 4);
                *(longlong *)(local_258 + 2) = local_248;
                *(undefined8 *)(local_258 + 4) = 0;
                FUN_143bf2c60(param_1 + 0x1a0,local_220,local_258,local_268);
              }
              local_270 = local_270 + 1;
            }
          }
        }
        else if (local_278 != (longlong *)0x0) {
          local_1f8 = local_278;
          local_238 = local_278;
          if (local_278 == (longlong *)0x0) {
            local_218 = 0;
          }
          else {
            local_218 = (**(code **)*local_278)(local_278,1);
          }
        }
      }
      FUN_143a8dc60(local_1e8);
    }
    else if (local_260 != (longlong *)"<empty>") {
      local_278 = local_260;
    }
  }
  else {
    local_278 = (longlong *)0x0;
  }
  return local_278;
}



// FUNCTION 143bf2b50 FUN_143bf2b50 body=268 status=ok
// SIG undefined FUN_143bf2b50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf2b50(undefined8 param_1,undefined1 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  int local_b8;
  int local_b4;
  undefined1 local_a8 [144];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  cVar1 = FUN_143a903a0(param_1);
  if (cVar1 == '\0') {
    sVar3 = _guard_xfg_dispatch_icall_nop("meta:");
    local_b8 = (int)sVar3;
    uVar2 = FUN_143a904f0(param_1);
    local_c0 = 0;
    local_c8 = 0x81;
    local_b4 = FUN_143a8f880(param_1,0,uVar2,local_a8);
    _guard_xfg_dispatch_icall_nop(param_2,"meta:",(longlong)local_b8);
    _guard_xfg_dispatch_icall_nop(param_2 + local_b8,local_a8,(longlong)local_b4);
    param_2[local_b4 + local_b8] = 0;
  }
  else {
    *param_2 = 0;
  }
  return;
}



// FUNCTION 143bf2c60 FUN_143bf2c60 body=239 status=ok
// SIG undefined FUN_143bf2c60(void)

void FUN_143bf2c60(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_30;
  
  *(undefined1 *)(param_1 + 0x28) = 0;
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar2 = FUN_143a8d310(0x28);
    if (lVar2 == 0) {
      local_30 = 0;
    }
    else {
      local_30 = FUN_143b08f70(lVar2,param_4);
    }
    *(undefined8 *)(param_1 + 0x20) = local_30;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      *param_4 = 7;
    }
  }
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    FUN_143b09430(*(undefined8 *)(param_1 + 0x20),param_2,param_4);
    FUN_143b09430(*(undefined8 *)(param_1 + 0x20),param_3,param_4);
  }
  return;
}



// FUNCTION 143bf2d50 FUN_143bf2d50 body=441 status=ok
// SIG undefined FUN_143bf2d50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf2d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_78 [32];
  int local_58;
  int local_54;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_40 = 0xfffffffffffffffe;
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0x200;
    uVar1 = FUN_143aa7a40((longlong)*(int *)(param_1 + 0x18) * 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    FUN_143bf06a0(*(undefined8 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  FUN_143a8ac30(local_38);
  if (*(char *)(param_1 + 8) == '\0') {
    local_48 = FUN_143a8fe10(param_2);
    local_54 = FUN_143a904f0(param_2);
  }
  else {
    uVar1 = UDarwinGameplayFunctionLibrary::GetInSameTeam(local_38,param_2);
    FUN_143aba210(uVar1,0);
    local_48 = FUN_143a8fe10(local_38);
    local_54 = FUN_143a904f0(local_38);
  }
  local_50 = *(undefined8 *)(param_1 + 0x10);
  for (local_58 = 0; local_58 < local_54; local_58 = local_58 + 1) {
    local_50 = FUN_143bf0170(param_1,local_50,*(undefined2 *)(local_48 + (longlong)local_58 * 2),
                             param_4);
  }
  FUN_143bf0330(local_50,param_3,*(undefined8 *)(param_1 + 0x30),param_4);
  FUN_143a8dc60(local_38);
  return;
}



// FUNCTION 143bf2f10 FUN_143bf2f10 body=23 status=ok
// SIG undefined FUN_143bf2f10(void)

void FUN_143bf2f10(longlong param_1)

{
  *(undefined4 *)(param_1 + 100) = 0;
  return;
}



// FUNCTION 143bf2f30 FUN_143bf2f30 body=552 status=ok
// SIG undefined FUN_143bf2f30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf2f30(longlong param_1,longlong param_2,undefined8 param_3,int param_4,int param_5,
                  undefined8 *param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  longlong local_res10;
  undefined1 auStack_98 [32];
  int local_78;
  undefined8 *local_70;
  undefined4 *local_68;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  undefined8 local_48;
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_48 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b8cca0(param_2);
    if (cVar1 != '\0') {
      local_50 = (undefined8 *)*param_6;
      cVar1 = (*(code *)*local_50)(param_6,param_5 - param_4,param_2,param_7);
      if (cVar1 == '\0') {
        return;
      }
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 != '\0') {
        return;
      }
    }
    local_54 = FUN_143a8e3e0(param_3,param_5);
    if (*(char *)(param_1 + 8) == '\0') {
      local_res10 = FUN_143bf1410(param_1,param_2,(undefined2)local_54);
    }
    else {
      FUN_143a8d5f0(local_40,local_54);
      FUN_143aba210(local_40,0);
      local_58 = 0;
      local_res10 = param_2;
      while (iVar2 = FUN_143a904f0(local_40), local_58 < iVar2) {
        local_54 = FUN_143a8e3e0(local_40,local_58);
        local_res10 = FUN_143bf1410(param_1,local_res10,(undefined2)local_54);
        if (local_res10 == 0) break;
        local_58 = FUN_143a90530(local_40,local_58,1);
      }
      FUN_143a8dc60(local_40);
    }
    if (local_res10 != 0) {
      local_78 = param_5 + 1;
      local_68 = param_7;
      local_70 = param_6;
      FUN_143bf2f30(param_1,local_res10,param_3,param_4);
    }
  }
  return;
}



// FUNCTION 143bf3160 FUN_143bf3160 body=190 status=ok
// SIG undefined FUN_143bf3160(void)

void FUN_143bf3160(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 local_20 [8];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_143a8ab50(local_20,&DAT_146bc84c0);
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FUN_143bf04a0(param_1,param_5);
  }
  FUN_143a8ad90(local_20);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_143bf2f30(param_1,*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_3,param_4,param_5);
  }
  return;
}



// FUNCTION 143bf3220 FUN_143bf3220 body=152 status=ok
// SIG undefined FUN_143bf3220(void)

longlong FUN_143bf3220(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = FUN_143a8b110(*param_2);
  if (((cVar2 == '\0') || (*(longlong *)(param_1 + 0x68) == 0)) ||
     (*(int *)(param_1 + 0x60) <= *(int *)(param_1 + 100))) {
    param_1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 100);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
    uVar3 = FUN_143b09610(*(undefined8 *)(param_1 + 0x68),uVar1);
    FUN_143ab21b0(param_1 + 8,uVar3,0xffffffff);
    param_1 = param_1 + 8;
  }
  return param_1;
}



// FUNCTION 143bf32c0 FUN_143bf32c0 body=92 status=ok
// SIG undefined FUN_143bf32c0(void)

void FUN_143bf32c0(char *param_1)

{
  if ((param_1 != "<empty>") && (param_1 != (char *)0x0)) {
    (*(code *)**(undefined8 **)param_1)(param_1,1);
  }
  return;
}



// FUNCTION 143bf3320 FUN_143bf3320 body=85 status=ok
// SIG undefined FUN_143bf3320(void)

undefined8 * FUN_143bf3320(undefined8 *param_1,undefined4 param_2)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::GNameSearchHandler::vftable;
  *(undefined4 *)(param_1 + 1) = param_2;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  return param_1;
}



// FUNCTION 143bf3380 FUN_143bf3380 body=259 status=ok
// SIG undefined FUN_143bf3380(void)

undefined8 *
FUN_143bf3380(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = icu_53::TZGNCore::vftable;
  FUN_143a8a610(param_1 + 1,param_2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  FUN_143befa30(param_1 + 0x36,param_3);
  FUN_143bef8e0(param_1 + 0x38,1,FUN_143ab1b70);
  *(undefined1 *)(param_1 + 0x3f) = 0;
  FUN_143bf65f0(param_1,param_2,param_3);
  return param_1;
}



// FUNCTION 143bf3490 FUN_143bf3490 body=39 status=ok
// SIG undefined FUN_143bf3490(void)

undefined8 * FUN_143bf3490(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneGenericNames::vftable;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 143bf34c0 FUN_143bf34c0 body=130 status=ok
// SIG undefined FUN_143bf34c0(void)

void FUN_143bf34c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = icu_53::GNameSearchHandler::vftable;
  if ((param_1[2] != 0) && (puVar1 = (undefined8 *)param_1[2], puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bf3550 FUN_143bf3550 body=107 status=ok
// SIG undefined FUN_143bf3550(void)

void FUN_143bf3550(undefined8 *param_1)

{
  *param_1 = icu_53::TZGNCore::vftable;
  FUN_143bf3800(param_1);
  FUN_143befcc0(param_1 + 0x38);
  FUN_143befe80(param_1 + 0x36);
  FUN_143a8acf0(param_1 + 1);
  return;
}



// FUNCTION 143bf35c0 FUN_143bf35c0 body=102 status=ok
// SIG undefined FUN_143bf35c0(void)

void FUN_143bf35c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((*param_1 != 0) && (puVar1 = (undefined8 *)*param_1, puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  return;
}



// FUNCTION 143bf3630 FUN_143bf3630 body=79 status=ok
// SIG undefined FUN_143bf3630(void)

void FUN_143bf3630(undefined8 *param_1)

{
  *param_1 = icu_53::TimeZoneGenericNames::vftable;
  FUN_143ab2410(&DAT_146bc84f8);
  *(int *)(param_1[1] + 8) = *(int *)(param_1[1] + 8) + -1;
  FUN_143ab2470(&DAT_146bc84f8);
  return;
}



// FUNCTION 143bf3680 FUN_143bf3680 body=53 status=ok
// SIG undefined FUN_143bf3680(void)

bool FUN_143bf3680(longlong param_1,longlong param_2)

{
  return *(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8);
}



// FUNCTION 143bf36c0 FUN_143bf36c0 body=64 status=ok
// SIG undefined FUN_143bf36c0(void)

bool FUN_143bf36c0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))(param_1,param_2);
  return cVar1 == '\0';
}



// FUNCTION 143bf3700 FUN_143bf3700 body=54 status=ok
// SIG undefined FUN_143bf3700(void)

undefined8 FUN_143bf3700(undefined8 param_1,uint param_2)

{
  FUN_143bf34c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf3740 FUN_143bf3740 body=54 status=ok
// SIG undefined FUN_143bf3740(void)

undefined8 FUN_143bf3740(undefined8 param_1,uint param_2)

{
  FUN_143bf3550(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf3780 FUN_143bf3780 body=54 status=ok
// SIG undefined FUN_143bf3780(void)

undefined8 FUN_143bf3780(undefined8 param_1,uint param_2)

{
  FUN_143bf35c0(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf37c0 FUN_143bf37c0 body=54 status=ok
// SIG undefined FUN_143bf37c0(void)

undefined8 FUN_143bf37c0(undefined8 param_1,uint param_2)

{
  FUN_143bf3630(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf3800 FUN_143bf3800 body=428 status=ok
// SIG undefined FUN_143bf3800(void)

void FUN_143bf3800(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong *)(param_1 + 0x198) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x198), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x1a0) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x1a0), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x1a8) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x1a8), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  if ((*(longlong *)(param_1 + 0x180) != 0) &&
     (puVar1 = *(undefined8 **)(param_1 + 0x180), puVar1 != (undefined8 *)0x0)) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_143ab2e80(*(undefined8 *)(param_1 + 0x188));
  FUN_143ab2e80(*(undefined8 *)(param_1 + 400));
  return;
}



// FUNCTION 143bf39b0 FUN_143bf39b0 body=173 status=ok
// SIG undefined FUN_143bf39b0(void)

longlong FUN_143bf39b0(longlong param_1)

{
  longlong lVar1;
  longlong local_28;
  
  lVar1 = FUN_143a8d310(0x10);
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    local_28 = FUN_143bf3490(lVar1);
  }
  if (local_28 != 0) {
    FUN_143ab2410(&DAT_146bc84f8);
    *(int *)(*(longlong *)(param_1 + 8) + 8) = *(int *)(*(longlong *)(param_1 + 8) + 8) + 1;
    *(undefined8 *)(local_28 + 8) = *(undefined8 *)(param_1 + 8);
    FUN_143ab2470(&DAT_146bc84f8);
  }
  return local_28;
}



// FUNCTION 143bf3a60 FUN_143bf3a60 body=26 status=ok
// SIG undefined FUN_143bf3a60(void)

void FUN_143bf3a60(FreeThreadProxyFactory *param_1)

{
  Concurrency::details::FreeThreadProxyFactory::Create(param_1,0);
  return;
}



// FUNCTION 143bf3a80 FUN_143bf3a80 body=1132 status=ok
// SIG undefined FUN_143bf3a80(void)

undefined8 * FUN_143bf3a80(undefined8 param_1,undefined4 *param_2)

{
  char cVar1;
  longlong lVar2;
  char *_Str;
  undefined8 *puVar3;
  size_t sVar4;
  undefined8 uVar5;
  char *local_a0;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined1 local_50 [8];
  undefined8 *local_48;
  undefined8 local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  undefined8 *local_28;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  cVar1 = FUN_143a8b0e0(*param_2);
  if (cVar1 == '\0') {
    lVar2 = FUN_143a8d310(0x10);
    if (lVar2 == 0) {
      local_58 = (undefined8 *)0x0;
    }
    else {
      local_58 = (undefined8 *)FUN_143bf3490(lVar2);
    }
    local_38 = local_58;
    if (local_58 == (undefined8 *)0x0) {
      *param_2 = 7;
      local_48 = (undefined8 *)0x0;
    }
    else {
      uVar5 = 0;
      FUN_143a8ab50(local_50,&DAT_146bc84f8);
      if (DAT_146bc8530 == '\0') {
        DAT_146bc8528 = (ios_base *)FUN_143ab3680(FUN_143ab3350,FUN_143ab2f70,0,param_2,uVar5);
        cVar1 = FUN_143a8b110(*param_2);
        if (cVar1 != '\0') {
          std::ios_base::precision(DAT_146bc8528,0x143aa79f0);
          std::ios_base::width(DAT_146bc8528,0x143b897b0);
          DAT_146bc8530 = '\x01';
          FUN_143b68380(0xb,FUN_143bf7150);
        }
      }
      cVar1 = FUN_143a8b0e0(*param_2);
      if (cVar1 == '\0') {
        _Str = (char *)FUN_143a8c200(param_1);
        puVar3 = (undefined8 *)FUN_143ab32d0(DAT_146bc8528,_Str);
        if (puVar3 == (undefined8 *)0x0) {
          local_a0 = (char *)0x0;
          lVar2 = FUN_143a8d310(0x200);
          if (lVar2 == 0) {
            local_60 = (undefined8 *)0x0;
          }
          else {
            local_60 = (undefined8 *)FUN_143bf3380(lVar2,param_1,param_2);
          }
          local_18 = local_60;
          if (local_60 == (undefined8 *)0x0) {
            *param_2 = 7;
          }
          cVar1 = FUN_143a8b110(*param_2);
          if (cVar1 != '\0') {
            sVar4 = _guard_xfg_dispatch_icall_nop(_Str);
            local_a0 = (char *)FUN_143aa7a40(sVar4 + 1);
            if (local_a0 == (char *)0x0) {
              *param_2 = 7;
            }
            else {
              _guard_xfg_dispatch_icall_nop(local_a0,_Str);
            }
          }
          cVar1 = FUN_143a8b110(*param_2);
          if (cVar1 != '\0') {
            puVar3 = (undefined8 *)FUN_143aa7a40(0x18);
            if (puVar3 == (undefined8 *)0x0) {
              *param_2 = 7;
            }
            else {
              *puVar3 = local_60;
              *(undefined4 *)(puVar3 + 1) = 1;
              uVar5 = FUN_143a91970();
              puVar3[2] = uVar5;
              FUN_143ab36d0(DAT_146bc8528,local_a0,puVar3,param_2);
            }
          }
          cVar1 = FUN_143a8b0e0(*param_2);
          if (cVar1 != '\0') {
            if (local_60 != (undefined8 *)0x0) {
              local_28 = local_60;
              if (local_60 == (undefined8 *)0x0) {
                local_40 = 0;
              }
              else {
                local_40 = (**(code **)*local_60)(local_60,1);
              }
            }
            if (local_a0 != (char *)0x0) {
              FUN_143aa79f0(local_a0);
            }
            if (puVar3 != (undefined8 *)0x0) {
              FUN_143aa79f0(puVar3);
            }
            puVar3 = (undefined8 *)0x0;
          }
        }
        else {
          *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
          uVar5 = FUN_143a91970();
          puVar3[2] = uVar5;
        }
        DAT_146bc8534 = DAT_146bc8534 + 1;
        if (99 < DAT_146bc8534) {
          FUN_143bf6f70();
          DAT_146bc8534 = 0;
        }
        FUN_143a8ad90(local_50);
        if (puVar3 == (undefined8 *)0x0) {
          local_30 = local_58;
          if (local_58 != (undefined8 *)0x0) {
            (**(code **)*local_58)(local_58,1);
          }
          local_48 = (undefined8 *)0x0;
        }
        else {
          local_58[1] = puVar3;
          local_48 = local_58;
        }
      }
      else {
        local_48 = (undefined8 *)0x0;
        FUN_143a8ad90(local_50);
      }
    }
  }
  else {
    local_48 = (undefined8 *)0x0;
  }
  return local_48;
}



// FUNCTION 143bf3ef0 FUN_143bf3ef0 body=1295 status=ok
// SIG undefined FUN_143bf3ef0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_143bf3ef0(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 *param_6,undefined4 *param_7)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_128 [32];
  undefined4 *local_108;
  char local_f8;
  int local_f4;
  int local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  undefined8 *local_e0;
  longlong local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined8 *local_b8;
  int local_b0;
  longlong local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 *local_88;
  longlong local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  *param_6 = 0;
  FUN_143a90e90(param_5);
  cVar1 = FUN_143a8b0e0(*param_7);
  if (cVar1 == '\0') {
    local_108 = param_7;
    local_e0 = (undefined8 *)FUN_143bf4a00(param_1,param_2,param_3,param_4);
    cVar1 = FUN_143a8b0e0(*param_7);
    if (cVar1 == '\0') {
      local_f4 = 0;
      local_ec = 0;
      FUN_143a8ac30(local_68);
      local_f8 = '\0';
      if (local_e0 != (undefined8 *)0x0) {
        FUN_143a8ac30(local_40);
        local_f0 = 0;
        while (iVar2 = FUN_143b896b0(local_e0), local_f0 < iVar2) {
          local_d0 = FUN_143b892e0(local_e0,local_f0);
          if (local_f4 < local_d0) {
            local_f4 = local_d0;
            cVar1 = FUN_143b89510(local_e0,local_f0,local_68);
            if ((cVar1 == '\0') &&
               (cVar1 = FUN_143b893c0(local_e0,local_f0,local_40), cVar1 != '\0')) {
              local_a0 = *(undefined8 *)(param_1 + 0x180);
              local_80 = **(longlong **)(param_1 + 0x180);
              (**(code **)(local_80 + 0x38))(local_a0,local_40,param_1 + 0x1f9,local_68);
            }
            local_bc = FUN_143b89430(local_e0,local_f0);
            cVar1 = FUN_143a8b0e0(*param_7);
            if (cVar1 != '\0') break;
            local_e4 = local_bc;
            if (local_bc == 2) {
LAB_143bf4138:
              local_f8 = '\x01';
              local_ec = 1;
            }
            else {
              if (local_bc != 4) {
                if (local_bc == 0x10) goto LAB_143bf4138;
                if (local_bc != 0x20) {
                  local_ec = 0;
                  goto LAB_143bf3ffc;
                }
              }
              local_ec = 2;
            }
          }
LAB_143bf3ffc:
          local_f0 = local_f0 + 1;
        }
        local_88 = local_e0;
        local_b8 = local_e0;
        if (local_e0 == (undefined8 *)0x0) {
          local_78 = 0;
        }
        else {
          local_78 = (**(code **)*local_e0)(local_e0,1);
        }
        cVar1 = FUN_143a8b0e0(*param_7);
        if (cVar1 != '\0') {
          local_c8 = 0;
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          return local_c8;
        }
        iVar2 = FUN_143a904f0(param_2);
        if ((local_f4 == iVar2 - param_3) && (local_f8 == '\0')) {
          FUN_143a8dcd0(param_5,local_68);
          *param_6 = local_ec;
          local_c0 = local_f4;
          FUN_143a8dc60(local_40);
          FUN_143a8dc60(local_68);
          return local_c0;
        }
        FUN_143a8dc60(local_40);
      }
      local_108 = param_7;
      local_d8 = FUN_143bf4460(param_1,param_2,param_3,param_4);
      cVar1 = FUN_143a8b0e0(*param_7);
      if (cVar1 == '\0') {
        if (local_d8 != 0) {
          local_e8 = 0;
          while (iVar2 = FUN_143bf6f40(local_d8), local_e8 < iVar2) {
            local_b0 = FUN_143bf5ca0(local_d8,local_e8);
            if (local_f4 <= local_b0) {
              local_f4 = FUN_143bf5ca0(local_d8,local_e8);
              local_ec = 0;
              FUN_143bf6360(local_d8,local_e8,local_68);
            }
            local_e8 = local_e8 + 1;
          }
          local_98 = local_d8;
          local_a8 = local_d8;
          if (local_d8 == 0) {
            local_90 = 0;
          }
          else {
            local_90 = FUN_143bf3780(local_d8,1);
          }
        }
        if (0 < local_f4) {
          *param_6 = local_ec;
          FUN_143a8dcd0(param_5,local_68);
        }
        local_cc = local_f4;
        FUN_143a8dc60(local_68);
        local_c4 = local_cc;
      }
      else {
        local_c4 = 0;
        FUN_143a8dc60(local_68);
      }
    }
    else {
      local_c4 = 0;
    }
  }
  else {
    local_c4 = 0;
  }
  return local_c4;
}



// FUNCTION 143bf4400 FUN_143bf4400 body=94 status=ok
// SIG undefined FUN_143bf4400(void)

void FUN_143bf4400(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_143bf3ef0(**(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



// FUNCTION 143bf4460 FUN_143bf4460 body=1433 status=ok
// SIG undefined FUN_143bf4460(void)

longlong FUN_143bf4460(longlong param_1,undefined8 param_2,int param_3,undefined4 param_4,
                      undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int local_120 [2];
  longlong local_118;
  longlong *local_110;
  undefined8 *local_108;
  longlong *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8 [32];
  longlong local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_143bf3320(local_b8,param_4);
  local_e0 = param_1;
  FUN_143ab2410(&DAT_146bc8538);
  FUN_143bf3160(param_1 + 0x1c0,param_2,param_3,local_b8,param_5);
  FUN_143ab2470(&DAT_146bc8538);
  cVar1 = FUN_143a8b0e0(*param_5);
  if (cVar1 == '\0') {
    local_118 = 0;
    local_120[0] = 0;
    puVar3 = (undefined8 *)FUN_143bf5ce0(local_b8,local_120);
    if ((puVar3 == (undefined8 *)0x0) ||
       ((iVar2 = FUN_143a904f0(param_2), local_120[0] != iVar2 - param_3 &&
        (*(char *)(param_1 + 0x1f8) == '\0')))) {
      if (puVar3 != (undefined8 *)0x0) {
        local_f0 = puVar3;
        local_40 = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          local_60 = 0;
        }
        else {
          local_60 = (**(code **)*puVar3)(puVar3,1);
        }
      }
      FUN_143ab2410(&DAT_146bc8538);
      if (*(char *)(param_1 + 0x1f8) == '\0') {
        local_110 = (longlong *)FUN_143b4aec0(1,0,0,param_5);
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          while ((local_d0 = (**(code **)(*local_110 + 0x30))(local_110,param_5), local_d0 != 0 &&
                 (cVar1 = FUN_143a8b0e0(*param_5), cVar1 == '\0'))) {
            FUN_143bf6c60(local_e0,local_d0);
          }
        }
        if (local_110 != (longlong *)0x0) {
          local_20 = local_110;
          local_100 = local_110;
          if (local_110 == (longlong *)0x0) {
            local_90 = 0;
          }
          else {
            local_90 = (**(code **)*local_110)(local_110,1);
          }
        }
        cVar1 = FUN_143a8b110(*param_5);
        if (cVar1 != '\0') {
          *(undefined1 *)(local_e0 + 0x1f8) = 1;
        }
      }
      FUN_143ab2470(&DAT_146bc8538);
      cVar1 = FUN_143a8b0e0(*param_5);
      if (cVar1 == '\0') {
        FUN_143ab2410(&DAT_146bc8538);
        FUN_143bf3160(param_1 + 0x1c0,param_2,param_3,local_b8,param_5);
        FUN_143ab2470(&DAT_146bc8538);
        puVar3 = (undefined8 *)FUN_143bf5ce0(local_b8,local_120);
        if ((puVar3 != (undefined8 *)0x0) && (0 < local_120[0])) {
          local_d8 = FUN_143a8d310(8);
          if (local_d8 == 0) {
            local_c8 = 0;
          }
          else {
            local_c8 = FUN_143b1e610(local_d8,puVar3);
          }
          local_78 = local_c8;
          local_118 = local_c8;
          if (local_c8 == 0) {
            *param_5 = 7;
            local_108 = puVar3;
            local_68 = puVar3;
            if (puVar3 == (undefined8 *)0x0) {
              local_58 = 0;
            }
            else {
              local_58 = (**(code **)*puVar3)(puVar3,1);
            }
            local_48 = 0;
            FUN_143bf34c0(local_b8);
            return local_48;
          }
        }
        local_38 = local_118;
        FUN_143bf34c0(local_b8);
        local_28 = local_38;
      }
      else {
        local_88 = 0;
        FUN_143bf34c0(local_b8);
        local_28 = local_88;
      }
    }
    else {
      local_c0 = FUN_143a8d310(8);
      if (local_c0 == 0) {
        local_e8 = 0;
      }
      else {
        local_e8 = FUN_143b1e610(local_c0,puVar3);
      }
      local_98 = local_e8;
      local_118 = local_e8;
      if (local_e8 == 0) {
        *param_5 = 7;
        local_f8 = puVar3;
        local_50 = puVar3;
        if (puVar3 == (undefined8 *)0x0) {
          local_80 = 0;
        }
        else {
          local_80 = (**(code **)*puVar3)(puVar3,1);
        }
        local_30 = 0;
        FUN_143bf34c0(local_b8);
        local_28 = local_30;
      }
      else {
        local_70 = local_e8;
        FUN_143bf34c0(local_b8);
        local_28 = local_70;
      }
    }
  }
  else {
    local_28 = 0;
    FUN_143bf34c0(local_b8);
  }
  return local_28;
}



// FUNCTION 143bf4a00 FUN_143bf4a00 body=147 status=ok
// SIG undefined FUN_143bf4a00(void)

undefined8
FUN_143bf4a00(longlong param_1,undefined8 param_2,undefined4 param_3,uint param_4,undefined8 param_5
             )

{
  undefined8 uVar1;
  undefined4 local_18;
  
  local_18 = 0;
  if ((param_4 & 2) != 0) {
    local_18 = 3;
  }
  if ((param_4 & 4) != 0) {
    local_18 = local_18 | 0x18;
  }
  if (param_4 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x180) + 0x60))
                      (*(undefined8 *)(param_1 + 0x180),param_2,param_3,local_18,param_5);
  }
  return uVar1;
}



// FUNCTION 143bf4aa0 FUN_143bf4aa0 body=2536 status=ok
// SIG undefined FUN_143bf4aa0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 *
FUN_143bf4aa0(longlong param_1,longlong *param_2,int param_3,double param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_258 [32];
  int *local_238;
  undefined4 *local_230;
  char local_228;
  undefined1 local_227;
  undefined4 local_224;
  int local_220;
  char local_21c;
  char local_21b;
  int local_218;
  longlong *local_210;
  int local_208 [2];
  longlong *local_200;
  undefined4 local_1f8;
  int local_1f4;
  longlong *local_1f0;
  longlong *local_1e8;
  int local_1e0 [2];
  longlong *local_1d8;
  int local_1d0 [2];
  longlong *local_1c8;
  undefined4 local_1c0;
  longlong local_1b8;
  undefined4 *local_1b0;
  undefined8 local_1a8;
  undefined4 *local_1a0;
  longlong *local_198;
  longlong local_190;
  longlong *local_188;
  longlong *local_180;
  undefined4 *local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 *local_158;
  undefined1 local_150 [32];
  undefined1 local_130 [32];
  undefined8 local_110;
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  int local_b8 [10];
  undefined1 local_90 [40];
  int local_68 [10];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_110 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_258;
  FUN_143a90e90(param_5);
  local_1b8 = FUN_143b96b20(param_2);
  if (local_1b8 == 0) {
    return param_5;
  }
  FUN_143a8dad0(local_e0,local_1b8);
  if (param_3 == 2) {
    local_1f4 = 1;
  }
  else {
    local_1f4 = 8;
  }
  local_218 = local_1f4;
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x48))
            (*(undefined8 *)(param_1 + 0x180),local_e0,local_1f4,param_5);
  cVar1 = FUN_143a903a0(param_5);
  if (cVar1 == '\0') {
    local_1b0 = param_5;
    FUN_143a8dc60(local_e0);
    return local_1b0;
  }
  FUN_143a8ac30(local_108);
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x30))
            (*(undefined8 *)(param_1 + 0x180),local_e0,param_4,local_108);
  cVar1 = FUN_143a903a0(local_108);
  if (cVar1 != '\0') goto LAB_143bf543d;
  local_224 = 0;
  local_228 = '\0';
  local_230 = &local_224;
  local_238 = &local_220;
  (**(code **)(*param_2 + 0x18))(param_2,param_4,0,local_208);
  cVar1 = FUN_143a8b0e0(local_224);
  if (cVar1 != '\0') {
    local_178 = param_5;
    FUN_143a8dc60(local_108);
    FUN_143a8dc60(local_e0);
    return local_178;
  }
  if (local_220 == 0) {
    local_228 = '\x01';
    local_210 = (longlong *)(**(code **)(*param_2 + 0x58))(param_2);
    local_200 = (longlong *)0x0;
    local_238 = (int *)((ulonglong)local_238 & 0xffffffff00000000);
    lVar3 = _guard_xfg_dispatch_icall_nop
                      (local_210,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                       &icu_53::OlsonTimeZone::RTTI_Type_Descriptor);
    if (lVar3 == 0) {
      local_238 = (int *)((ulonglong)local_238 & 0xffffffff00000000);
      lVar3 = _guard_xfg_dispatch_icall_nop
                        (local_210,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                         &icu_53::SimpleTimeZone::RTTI_Type_Descriptor);
      if (lVar3 != 0) goto LAB_143bf4d88;
      local_238 = (int *)((ulonglong)local_238 & 0xffffffff00000000);
      lVar3 = _guard_xfg_dispatch_icall_nop
                        (local_210,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                         &icu_53::RuleBasedTimeZone::RTTI_Type_Descriptor);
      if (lVar3 != 0) goto LAB_143bf4d88;
      local_238 = (int *)((ulonglong)local_238 & 0xffffffff00000000);
      lVar3 = _guard_xfg_dispatch_icall_nop
                        (local_210,0,&icu_53::TimeZone::RTTI_Type_Descriptor,
                         &icu_53::VTimeZone::RTTI_Type_Descriptor);
      if (lVar3 != 0) goto LAB_143bf4d88;
    }
    else {
LAB_143bf4d88:
      local_200 = local_210;
    }
    if (local_200 == (longlong *)0x0) {
      local_230 = &local_224;
      local_238 = &local_220;
      (**(code **)(*local_210 + 0x18))(local_210,param_4 - 15897600000.0,0,local_208);
      if (local_220 == 0) {
        local_230 = &local_224;
        local_238 = &local_220;
        (**(code **)(*local_210 + 0x18))(local_210,param_4 + 15897600000.0,0,local_208);
        if (local_220 != 0) {
          local_228 = '\0';
        }
      }
      else {
        local_228 = '\0';
      }
      cVar1 = FUN_143a8b0e0(local_224);
      if (cVar1 != '\0') {
        local_198 = local_210;
        local_1f0 = local_210;
        if (local_210 == (longlong *)0x0) {
          local_168 = 0;
        }
        else {
          local_168 = (**(code **)*local_210)(local_210,1);
        }
        local_158 = param_5;
        FUN_143a8dc60(local_108);
        FUN_143a8dc60(local_e0);
        return local_158;
      }
    }
    else {
      FUN_143b98930(local_150);
      local_21c = (**(code **)(*local_200 + 0x70))(local_200,param_4,1,local_150);
      if ((local_21c == '\0') ||
         (dVar5 = (double)FUN_143b381e0(local_150), 15897600000.0 <= param_4 - dVar5)) {
LAB_143bf4e2b:
        FUN_143b98930(local_130);
        local_21b = (**(code **)(*local_200 + 0x68))(local_200,param_4,0,local_130);
        if ((local_21b != '\0') &&
           (dVar5 = (double)FUN_143b381e0(local_130), dVar5 - param_4 < 15897600000.0)) {
          uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void),FDefaultDelegateUserPolicy>
                  ::GetObjectForTimerManager(local_130);
          iVar2 = FAnalyticsSpan::GetStackDepth(uVar4);
          if (iVar2 != 0) {
            local_228 = '\0';
          }
        }
        FUN_143b989a0(local_130);
      }
      else {
        uVar4 = TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FSoundFieldsModule>,IModuleInterface_*___cdecl(void)>
                ::GetBoundProgramCounterForTimerManager(local_150);
        iVar2 = FAnalyticsSpan::GetStackDepth(uVar4);
        if (iVar2 == 0) goto LAB_143bf4e2b;
        local_228 = '\0';
      }
      FUN_143b989a0(local_150);
    }
    local_180 = local_210;
    local_1e8 = local_210;
    if (local_210 == (longlong *)0x0) {
      local_160 = 0;
    }
    else {
      local_160 = (**(code **)*local_210)(local_210,1);
    }
  }
  if (local_228 != '\0') {
    if (local_218 == 1) {
      local_1f8 = 2;
    }
    else {
      local_1f8 = 0x10;
    }
    local_1c0 = local_1f8;
    FUN_143a8ac30(local_68);
    local_238 = local_68;
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x58))
              (*(undefined8 *)(param_1 + 0x180),local_e0,local_1c0,param_4);
    cVar1 = FUN_143a903a0(local_68);
    if (cVar1 == '\0') {
      FUN_143a8dcd0(param_5,local_68);
      FUN_143a8ac30(local_40);
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))
                (*(undefined8 *)(param_1 + 0x180),local_108,local_218,local_40);
      cVar1 = FUN_143ab9d90(local_68,local_40,0);
      if (cVar1 == '\0') {
        FUN_143a90e90(param_5);
      }
      FUN_143a8dc60(local_40);
    }
    FUN_143a8dc60(local_68);
  }
  cVar1 = FUN_143a903a0(param_5);
  if (cVar1 != '\0') {
    FUN_143a8ac30(local_b8);
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))
              (*(undefined8 *)(param_1 + 0x180),local_108,local_218,local_b8);
    cVar1 = FUN_143a903a0(local_b8);
    if (cVar1 == '\0') {
      FUN_143a8ac30(local_90);
      local_170 = *(undefined8 *)(param_1 + 0x180);
      local_190 = **(longlong **)(param_1 + 0x180);
      (**(code **)(local_190 + 0x38))(local_170,local_108,param_1 + 0x1f9,local_90);
      cVar1 = FUN_143a903a0(local_90);
      if ((cVar1 == '\0') && (cVar1 = FUN_143b0c130(local_90,local_e0), cVar1 != '\0')) {
        local_1d8 = (longlong *)FUN_143b4ae60(local_90);
        local_230 = &local_224;
        local_238 = local_1e0;
        (**(code **)(*local_1d8 + 0x18))
                  (local_1d8,param_4 + (double)local_208[0] + (double)local_220,1,local_1d0);
        local_188 = local_1d8;
        local_1c8 = local_1d8;
        if (local_1d8 == (longlong *)0x0) {
          local_1a8 = 0;
        }
        else {
          local_1a8 = (**(code **)*local_1d8)(local_1d8,1);
        }
        cVar1 = FUN_143a8b110(local_224);
        if (cVar1 != '\0') {
          if ((local_208[0] == local_1d0[0]) && (local_220 == local_1e0[0])) {
            FUN_143a8dcd0(param_5,local_b8);
          }
          else {
            local_227 = local_218 == 1;
            local_230 = param_5;
            local_238 = local_b8;
            FUN_143bf6270(param_1,local_e0,local_108,local_227);
          }
        }
      }
      else {
        FUN_143a8dcd0(param_5,local_b8);
      }
      FUN_143a8dc60(local_90);
    }
    FUN_143a8dc60(local_b8);
  }
LAB_143bf543d:
  local_1a0 = param_5;
  FUN_143a8dc60(local_108);
  FUN_143a8dc60(local_e0);
  return local_1a0;
}



// FUNCTION 143bf5490 FUN_143bf5490 body=405 status=ok
// SIG undefined FUN_143bf5490(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_143bf5490(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
             undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [40];
  undefined1 local_40 [40];
  ulonglong local_18;
  
  local_70 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_143a90e90(param_5);
  local_a8 = param_3;
  if (param_3 == 1) {
    local_a0 = FUN_143b96b20(param_2);
    if (local_a0 != 0) {
      local_90 = FUN_143a8dad0(local_68,local_a0);
      local_78 = local_90;
      FUN_143bf5bb0(param_1,local_90,param_5);
      FUN_143a8dc60(local_68);
    }
  }
  else if ((param_3 == 2) || (param_3 == 4)) {
    local_b8 = param_5;
    FUN_143bf4aa0(param_1,param_2,param_3,param_4);
    cVar1 = FUN_143a903a0(param_5);
    if ((cVar1 != '\0') && (local_98 = FUN_143b96b20(param_2), local_98 != 0)) {
      local_88 = FUN_143a8dad0(local_40,local_98);
      local_80 = local_88;
      FUN_143bf5bb0(param_1,local_88,param_5);
      FUN_143a8dc60(local_40);
    }
  }
  return param_5;
}



// FUNCTION 143bf5630 FUN_143bf5630 body=73 status=ok
// SIG undefined FUN_143bf5630(void)

void FUN_143bf5630(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_143bf5490(**(undefined8 **)(param_1 + 8),param_2,param_3,param_4,param_5);
  return;
}



// FUNCTION 143bf5680 FUN_143bf5680 body=1314 status=ok
// SIG undefined FUN_143bf5680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined * FUN_143bf5680(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_438 [32];
  undefined1 *local_418;
  undefined8 local_410;
  char local_408 [4];
  undefined4 local_404;
  undefined *local_400;
  undefined1 local_3f8 [8];
  undefined4 *local_3f0;
  int local_3e8;
  int local_3e4;
  undefined8 local_3e0;
  undefined *local_3d8;
  ulonglong local_3d0;
  ulonglong local_3c8;
  undefined *local_3c0;
  undefined *local_3b8;
  undefined1 local_3b0 [24];
  undefined8 local_398;
  undefined1 local_390 [40];
  undefined1 local_368 [40];
  undefined1 local_340 [40];
  undefined1 local_318 [48];
  undefined1 local_2e8 [224];
  undefined1 local_208 [224];
  undefined2 local_128 [136];
  ulonglong local_18;
  
  local_398 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_438;
  iVar2 = FUN_143a904f0(param_2);
  if (iVar2 < 0x81) {
    local_404 = 0;
    local_3e8 = FUN_143a8f920(param_2,local_128,0x81,&local_404);
    local_3c8 = (longlong)local_3e8 * 2;
    if (0x101 < local_3c8) {
                    /* WARNING: Subroutine does not return */
      __report_rangecheckfailure();
    }
    local_128[local_3e8] = 0;
    local_3b8 = (undefined *)FUN_143ab32d0(*(undefined8 *)(param_1 + 0x188),local_128);
    if (local_3b8 == (undefined *)0x0) {
      local_400 = local_3b8;
      FUN_143a8ac30(local_368);
      FUN_143a8ac30(local_390);
      local_408[0] = '\0';
      FUN_143b97110(param_2,local_390,local_408);
      cVar1 = FUN_143a903a0(local_390);
      if (cVar1 == '\0') {
        FUN_143baba50(local_3b0);
        if (local_408[0] == '\0') {
          FUN_143a8ac30(local_340);
          (**(code **)(**(longlong **)(param_1 + 0x180) + 0x50))
                    (*(undefined8 *)(param_1 + 0x180),param_2,local_340);
          FUN_143b68520(local_208,local_340);
          local_410 = &local_404;
          local_418 = local_3b0;
          FUN_143c04ef0(*(undefined8 *)(param_1 + 0x198),local_208,1,local_368);
          _eh_vector_destructor_iterator_
                    (local_208,0xd8,1,
                     Concurrency::
                     call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                     ::
                     ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    );
          FUN_143a8dc60(local_340);
        }
        else {
          uVar3 = FUN_143a904f0(local_390);
          local_410 = (undefined4 *)((ulonglong)local_410._4_4_ << 0x20);
          local_418 = (undefined1 *)CONCAT44(local_418._4_4_,4);
          local_3e4 = FUN_143a8f880(local_390,0,uVar3,local_3f8);
          local_3d0 = (ulonglong)local_3e4;
          if (3 < local_3d0) {
                    /* WARNING: Subroutine does not return */
            __report_rangecheckfailure();
          }
          local_3f8[local_3d0] = 0;
          FUN_143a8ac30(local_318);
          (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x50))
                    (*(undefined8 *)(param_1 + 0x1a8),local_3f8,local_318);
          FUN_143b68520(local_2e8,local_318);
          local_410 = &local_404;
          local_418 = local_3b0;
          FUN_143c04ef0(*(undefined8 *)(param_1 + 0x198),local_2e8,1,local_368);
          _eh_vector_destructor_iterator_
                    (local_2e8,0xd8,1,
                     Concurrency::
                     call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                     ::
                     ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                    );
          FUN_143a8dc60(local_318);
        }
        cVar1 = FUN_143a8b0e0(local_404);
        if (cVar1 != '\0') {
          local_3c0 = (undefined *)0x0;
          UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3b0);
          FUN_143a8dc60(local_390);
          FUN_143a8dc60(local_368);
          return local_3c0;
        }
        UCameraModifier_Climbing::~UCameraModifier_Climbing(local_3b0);
      }
      cVar1 = FUN_143a903a0(local_368);
      if (cVar1 == '\0') {
        local_3d8 = (undefined *)FUN_143bf0e80(param_1 + 0x1b0,local_368,&local_404);
      }
      else {
        local_3d8 = (undefined *)0x0;
      }
      local_400 = local_3d8;
      cVar1 = FUN_143a8b110(local_404);
      if (cVar1 != '\0') {
        local_3e0 = FUN_143b968e0(param_2);
        if (local_400 == (undefined *)0x0) {
          FUN_143ab36d0(*(undefined8 *)(param_1 + 0x188),local_3e0,&DAT_145d1b674,&local_404);
        }
        else {
          FUN_143ab36d0(*(undefined8 *)(param_1 + 0x188),local_3e0,local_400,&local_404);
          cVar1 = FUN_143a8b0e0(local_404);
          if (cVar1 == '\0') {
            local_3f0 = (undefined4 *)FUN_143aa7a40(0x10);
            if (local_3f0 != (undefined4 *)0x0) {
              *local_3f0 = 1;
              *(undefined8 *)(local_3f0 + 2) = local_3e0;
              FUN_143bf2c60(param_1 + 0x1c0,local_400,local_3f0,&local_404);
            }
          }
          else {
            local_400 = (undefined *)0x0;
          }
        }
      }
      local_3b8 = local_400;
      FUN_143a8dc60(local_390);
      FUN_143a8dc60(local_368);
    }
    else if (local_3b8 == &DAT_145d1b674) {
      local_3b8 = (undefined *)0x0;
    }
  }
  else {
    local_3b8 = (undefined *)0x0;
  }
  return local_3b8;
}



// FUNCTION 143bf5bb0 FUN_143bf5bb0 body=174 status=ok
// SIG undefined FUN_143bf5bb0(void)

undefined8 FUN_143bf5bb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  cVar1 = FUN_143a903a0(param_2);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8538);
    lVar3 = FUN_143bf5680(param_1,param_2);
    FUN_143ab2470(&DAT_146bc8538);
    if (lVar3 == 0) {
      FUN_143a90e90(param_3);
    }
    else {
      uVar2 = FreeLib(lVar3);
      FUN_143ab21b0(param_3,lVar3,uVar2);
    }
  }
  else {
    FUN_143a90e90(param_3);
  }
  return param_3;
}



// FUNCTION 143bf5c60 FUN_143bf5c60 body=51 status=ok
// SIG undefined FUN_143bf5c60(void)

void FUN_143bf5c60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_143bf5bb0(**(undefined8 **)(param_1 + 8),param_2,param_3);
  return;
}



// FUNCTION 143bf5ca0 FUN_143bf5ca0 body=63 status=ok
// SIG undefined FUN_143bf5ca0(void)

undefined4 FUN_143bf5ca0(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_143b09610(*param_1,param_2);
  if (lVar2 == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(lVar2 + 8);
  }
  return uVar1;
}



// FUNCTION 143bf5ce0 FUN_143bf5ce0 body=76 status=ok
// SIG undefined FUN_143bf5ce0(void)

undefined8 FUN_143bf5ce0(longlong param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *param_2 = *(undefined4 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return uVar1;
}



// FUNCTION 143bf5d30 FUN_143bf5d30 body=1341 status=ok
// SIG undefined FUN_143bf5d30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_143bf5d30(longlong param_1,undefined8 param_2,undefined8 param_3,char param_4,
                      undefined8 param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_318 [32];
  undefined1 *local_2f8;
  undefined4 *local_2f0;
  undefined4 local_2e8;
  undefined1 local_2e4 [4];
  undefined8 *local_2e0;
  longlong local_2d8;
  undefined4 local_2d0;
  undefined4 *local_2c8;
  int local_2c0;
  ulonglong local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  char local_2a0;
  longlong local_298;
  longlong local_290;
  undefined1 local_288 [24];
  undefined8 local_270;
  undefined1 local_268 [40];
  undefined1 local_240 [40];
  undefined1 local_218 [40];
  undefined1 local_1f0 [40];
  undefined1 local_1c8 [216];
  undefined1 local_f0 [216];
  ulonglong local_18;
  
  local_270 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  local_2b0 = FUN_143b968e0(param_2);
  local_2a8 = FUN_143b968a0(param_3);
  local_2a0 = param_4;
  local_298 = FUN_143ab32d0(*(undefined8 *)(param_1 + 400),&local_2b0);
  if (local_298 == 0) {
    local_2d8 = local_298;
    FUN_143a8ac30(local_268);
    FUN_143a8ac30(local_240);
    FUN_143b97110(param_2,local_240,0);
    cVar1 = FUN_143a903a0(local_240);
    if (cVar1 == '\0') {
      uVar2 = FUN_143a904f0(local_240);
      local_2f0 = (undefined4 *)((ulonglong)local_2f0 & 0xffffffff00000000);
      local_2f8 = (undefined1 *)CONCAT44(local_2f8._4_4_,4);
      local_2c0 = FUN_143a8f880(local_240,0,uVar2,local_2e4);
      local_2b8 = (ulonglong)local_2c0;
      if (3 < local_2b8) {
                    /* WARNING: Subroutine does not return */
        __report_rangecheckfailure();
      }
      local_2e4[local_2b8] = 0;
      FUN_143a8ac30(local_1f0);
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x38))
                (*(undefined8 *)(param_1 + 0x180),param_3,local_2e4,local_1f0);
      cVar1 = FUN_143a8dd00(param_2,local_1f0);
      if (cVar1 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x180) + 0x50))
                  (*(undefined8 *)(param_1 + 0x180),param_2,local_268);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x50))
                  (*(undefined8 *)(param_1 + 0x1a8),local_2e4,local_268);
      }
      FUN_143a8dc60(local_1f0);
    }
    else {
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x50))
                (*(undefined8 *)(param_1 + 0x180),param_2,local_268);
      cVar1 = FUN_143a903a0(local_268);
      if (cVar1 != '\0') {
        FUN_143a8dcd0(local_268,param_2);
      }
    }
    local_2e8 = 0;
    FUN_143a8ac30(local_218);
    FUN_143baba50(local_288);
    FUN_143b68520(local_1c8,local_268);
    FUN_143b68520(local_f0,param_5);
    local_2f0 = &local_2e8;
    local_2f8 = local_288;
    FUN_143c04ef0(*(undefined8 *)(param_1 + 0x1a0),local_1c8,2,local_218);
    cVar1 = FUN_143a8b0e0(local_2e8);
    if (cVar1 == '\0') {
      local_2d8 = FUN_143bf0e80(param_1 + 0x1b0,local_218,&local_2e8);
      cVar1 = FUN_143a8b110(local_2e8);
      if ((cVar1 != '\0') &&
         (local_2e0 = (undefined8 *)FUN_143aa7a40(0x18), local_2e0 != (undefined8 *)0x0)) {
        *local_2e0 = local_2b0;
        local_2e0[1] = local_2a8;
        *(char *)(local_2e0 + 2) = local_2a0;
        FUN_143ab36d0(*(undefined8 *)(param_1 + 400),local_2e0,local_2d8,&local_2e8);
        cVar1 = FUN_143a8b0e0(local_2e8);
        if (cVar1 == '\0') {
          local_2c8 = (undefined4 *)FUN_143aa7a40(0x10);
          if (local_2c8 != (undefined4 *)0x0) {
            if (param_4 == '\0') {
              local_2d0 = 4;
            }
            else {
              local_2d0 = 2;
            }
            *local_2c8 = local_2d0;
            *(undefined8 *)(local_2c8 + 2) = local_2b0;
            FUN_143bf2c60(param_1 + 0x1c0,local_2d8,local_2c8,&local_2e8);
          }
        }
        else {
          FUN_143aa79f0(local_2e0);
        }
      }
      local_290 = local_2d8;
      _eh_vector_destructor_iterator_
                (local_1c8,0xd8,2,
                 Concurrency::
                 call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                 ::
                 ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                );
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_288);
      FUN_143a8dc60(local_218);
      FUN_143a8dc60(local_240);
      FUN_143a8dc60(local_268);
      local_298 = local_290;
    }
    else {
      local_298 = 0;
      _eh_vector_destructor_iterator_
                (local_1c8,0xd8,2,
                 Concurrency::
                 call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                 ::
                 ~call<unsigned___int64,std::tr1::function<void___cdecl(unsigned___int64_const&___ptr64)>_>
                );
      UCameraModifier_Climbing::~UCameraModifier_Climbing(local_288);
      FUN_143a8dc60(local_218);
      FUN_143a8dc60(local_240);
      FUN_143a8dc60(local_268);
    }
  }
  return local_298;
}



// FUNCTION 143bf6270 FUN_143bf6270 body=232 status=ok
// SIG undefined FUN_143bf6270(void)

undefined8
FUN_143bf6270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  longlong lVar2;
  
  FUN_143a90e90(param_6);
  cVar1 = FUN_143a903a0(param_2);
  if (((cVar1 == '\0') && (cVar1 = FUN_143a903a0(param_3), cVar1 == '\0')) &&
     (cVar1 = FUN_143a903a0(param_5), cVar1 == '\0')) {
    FUN_143ab2410(&DAT_146bc8538);
    lVar2 = FUN_143bf5d30(param_1,param_2,param_3,param_4,param_5);
    FUN_143ab2470(&DAT_146bc8538);
    if (lVar2 == 0) {
      FUN_143a90e90(param_6);
    }
    else {
      FUN_143a90d80(param_6,1,lVar2,0xffffffff);
    }
  }
  return param_6;
}



// FUNCTION 143bf6360 FUN_143bf6360 body=115 status=ok
// SIG undefined FUN_143bf6360(void)

undefined8 FUN_143bf6360(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_143b09610(*param_1,param_2);
  if ((plVar1 == (longlong *)0x0) || (*(longlong *)(*plVar1 + 8) == 0)) {
    FUN_143a90e90(param_3);
  }
  else {
    FUN_143a90d80(param_3,1,*(undefined8 *)(*plVar1 + 8),0xffffffff);
  }
  return param_3;
}



// FUNCTION 143bf63e0 FUN_143bf63e0 body=526 status=ok
// SIG undefined FUN_143bf63e0(void)

longlong FUN_143bf63e0(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  int local_48;
  undefined8 local_28;
  
  cVar1 = FUN_143a8b0e0(*param_4);
  if (cVar1 == '\0') {
    cVar1 = FUN_143b8cca0(param_3);
    uVar3 = (ulonglong)(uint)(int)cVar1;
    if ((int)cVar1 != 0) {
      uVar2 = FUN_143bf0750(param_3);
      for (local_48 = 0; uVar3 = (ulonglong)uVar2, local_48 < (int)uVar2; local_48 = local_48 + 1) {
        puVar4 = (uint *)FUN_143b8cbd0(param_3,local_48);
        if (puVar4 == (uint *)0x0) {
          uVar3 = 0;
          break;
        }
        if ((*puVar4 & *(uint *)(param_1 + 8)) != 0) {
          if (*(longlong *)(param_1 + 0x10) == 0) {
            lVar5 = FUN_143a8d310(0x28);
            if (lVar5 == 0) {
              local_28 = 0;
            }
            else {
              local_28 = FUN_143b090a0(lVar5,FUN_143aa79f0,0,param_4);
            }
            *(undefined8 *)(param_1 + 0x10) = local_28;
            if (*(longlong *)(param_1 + 0x10) == 0) {
              *param_4 = 7;
            }
          }
          cVar1 = FUN_143a8b110(*param_4);
          if (cVar1 != '\0') {
            puVar6 = (undefined8 *)FUN_143aa7a40(0x10);
            if (puVar6 == (undefined8 *)0x0) {
              *param_4 = 7;
            }
            else {
              *puVar6 = puVar4;
              *(int *)(puVar6 + 1) = param_2;
              *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
              FUN_143b09430(*(undefined8 *)(param_1 + 0x10),puVar6);
              cVar1 = FUN_143a8b0e0(*param_4);
              if (cVar1 == '\0') {
                if (*(int *)(param_1 + 0x18) < param_2) {
                  *(int *)(param_1 + 0x18) = param_2;
                }
              }
              else {
                FUN_143aa79f0(puVar6);
              }
            }
          }
        }
      }
    }
    lVar5 = CONCAT71((int7)(uVar3 >> 8),1);
  }
  else {
    lVar5 = (ulonglong)(uint3)(cVar1 >> 7) << 8;
  }
  return lVar5;
}



// FUNCTION 143bf65f0 FUN_143bf65f0 body=1638 status=ok
// SIG undefined FUN_143bf65f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf65f0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  size_t sVar4;
  undefined1 auStack_1e8 [32];
  undefined4 local_1c8;
  int local_1c4;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  longlong local_198;
  char *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 local_130 [40];
  undefined1 local_108 [40];
  undefined1 local_e0 [40];
  undefined1 local_b8 [160];
  ulonglong local_18;
  
  local_138 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    uVar3 = FUN_143b89030(param_2,param_3);
    *(undefined8 *)(param_1 + 0x180) = uVar3;
    cVar1 = FUN_143a8b0e0(*param_3);
    if (cVar1 == '\0') {
      FUN_143a8d4f0(local_130,1,&DAT_145d1b698,0xffffffff);
      FUN_143a8d4f0(local_108,1,L"{1} ({0})",0xffffffff);
      local_1c8 = 0;
      uVar3 = FUN_143a8c200(param_2);
      local_1c0 = FUN_143aa5b10("icudt53l-zone",uVar3,&local_1c8);
      local_1c0 = FUN_143aa3350(local_1c0,"zoneStrings",local_1c0,&local_1c8);
      cVar1 = FUN_143a8b110(local_1c8);
      if (cVar1 != '\0') {
        local_180 = FUN_143aa4fe0(local_1c0,"regionFormat",0,&local_1c8);
        cVar1 = FUN_143a8b110(local_1c8);
        if ((cVar1 != '\0') && (iVar2 = FreeLib(local_180), 0 < iVar2)) {
          FUN_143ab21b0(local_130,local_180,0xffffffff);
        }
        local_1c8 = 0;
        local_188 = FUN_143aa4fe0(local_1c0,"fallbackFormat",0,&local_1c8);
        cVar1 = FUN_143a8b110(local_1c8);
        if ((cVar1 != '\0') && (iVar2 = FreeLib(local_188), 0 < iVar2)) {
          FUN_143ab21b0(local_108,local_188,0xffffffff);
        }
      }
      FUN_143aa2ef0(local_1c0);
      local_198 = FUN_143a8d310(0x3b0);
      if (local_198 == 0) {
        local_178 = 0;
      }
      else {
        local_178 = FUN_143c01a20(local_198,local_130,param_3);
      }
      local_140 = local_178;
      *(undefined8 *)(param_1 + 0x198) = local_178;
      if (*(longlong *)(param_1 + 0x198) == 0) {
        *param_3 = 7;
      }
      local_1a8 = FUN_143a8d310(0x3b0);
      if (local_1a8 == 0) {
        local_1a0 = 0;
      }
      else {
        local_1a0 = FUN_143c01a20(local_1a8,local_108,param_3);
      }
      local_168 = local_1a0;
      *(undefined8 *)(param_1 + 0x1a0) = local_1a0;
      if (*(longlong *)(param_1 + 0x1a0) == 0) {
        *param_3 = 7;
      }
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 == '\0') {
        uVar3 = FUN_143bf3a60(param_2);
        *(undefined8 *)(param_1 + 0x1a8) = uVar3;
        uVar3 = FUN_143ab3680(FUN_143ab33b0,FUN_143ab3050,0,param_3);
        *(undefined8 *)(param_1 + 0x188) = uVar3;
        cVar1 = FUN_143a8b0e0(*param_3);
        if (cVar1 == '\0') {
          uVar3 = FUN_143ab3680(FUN_143bf7090,FUN_143bf6ff0,0,param_3);
          *(undefined8 *)(param_1 + 400) = uVar3;
          cVar1 = FUN_143a8b0e0(*param_3);
          if (cVar1 == '\0') {
            std::ios_base::precision(*(ios_base **)(param_1 + 400),0x143aa79f0);
            local_190 = (char *)FUN_143b52030(param_1 + 8);
            sVar4 = _guard_xfg_dispatch_icall_nop(local_190);
            local_1c4 = (int)sVar4;
            if (local_1c4 == 0) {
              uVar3 = FUN_143a8c200(param_1 + 8);
              FUN_143e1c720(uVar3,local_b8,0x9d,param_3);
              local_1c4 = FUN_143a96880(local_b8,param_1 + 0x1f9,4,param_3);
              cVar1 = FUN_143a8b110(*param_3);
              if (cVar1 == '\0') {
                FUN_143bf3800(param_1);
                FUN_143a8dc60(local_108);
                FUN_143a8dc60(local_130);
                return;
              }
              *(undefined1 *)(param_1 + 0x1f9 + (longlong)local_1c4) = 0;
            }
            else if (local_1c4 < 4) {
              _guard_xfg_dispatch_icall_nop((char *)(param_1 + 0x1f9),local_190);
            }
            else {
              *(undefined1 *)(param_1 + 0x1f9) = 0;
            }
            local_170 = (undefined8 *)FUN_143b4ac10();
            local_1b0 = FUN_143b96b20(local_170);
            if (local_1b0 != 0) {
              local_158 = FUN_143a8dad0(local_e0,local_1b0);
              local_148 = local_158;
              FUN_143bf6c60(param_1,local_158);
              FUN_143a8dc60(local_e0);
            }
            local_150 = local_170;
            local_1b8 = local_170;
            if (local_170 == (undefined8 *)0x0) {
              local_160 = 0;
            }
            else {
              local_160 = (**(code **)*local_170)(local_170,1);
            }
            FUN_143a8dc60(local_108);
            FUN_143a8dc60(local_130);
          }
          else {
            FUN_143bf3800(param_1);
            FUN_143a8dc60(local_108);
            FUN_143a8dc60(local_130);
          }
        }
        else {
          FUN_143bf3800(param_1);
          FUN_143a8dc60(local_108);
          FUN_143a8dc60(local_130);
        }
      }
      else {
        FUN_143bf3800(param_1);
        FUN_143a8dc60(local_108);
        FUN_143a8dc60(local_130);
      }
    }
  }
  return;
}



// FUNCTION 143bf6c60 FUN_143bf6c60 body=726 status=ok
// SIG undefined FUN_143bf6c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143bf6c60(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_108 [32];
  undefined1 *local_e8;
  undefined1 local_d8;
  int local_d4;
  undefined4 local_d0 [2];
  longlong *local_c8;
  longlong local_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78 [40];
  undefined1 local_50 [40];
  int local_28 [4];
  ulonglong local_18;
  
  local_80 = 0xfffffffffffffffe;
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  FUN_143bf5680(param_1,param_2);
  local_d0[0] = 0;
  FUN_143a8ac30(local_50);
  FUN_143a8ac30(local_78);
  local_28[0] = 1;
  local_28[1] = 8;
  local_28[2] = 0;
  local_c8 = (longlong *)
             (**(code **)(**(longlong **)(param_1 + 0x180) + 0x20))
                       (*(undefined8 *)(param_1 + 0x180),param_2,local_d0);
  while ((local_c0 = (**(code **)(*local_c8 + 0x30))(local_c8,local_d0), local_c0 != 0 &&
         (cVar1 = FUN_143a8b0e0(local_d0[0]), cVar1 == '\0'))) {
    local_a0 = *(undefined8 *)(param_1 + 0x180);
    local_b0 = **(longlong **)(param_1 + 0x180);
    (**(code **)(local_b0 + 0x38))(local_a0,local_c0,param_1 + 0x1f9,local_50);
    cVar1 = FUN_143b0c130(param_2,local_50);
    if (cVar1 != '\0') {
      for (local_d4 = 0; local_28[local_d4] != 0; local_d4 = local_d4 + 1) {
        local_88 = *(undefined8 *)(param_1 + 0x180);
        local_90 = **(longlong **)(param_1 + 0x180);
        (**(code **)(local_90 + 0x40))(local_88,local_c0,local_28[local_d4],local_78);
        cVar1 = FUN_143a903a0(local_78);
        if (cVar1 == '\0') {
          local_d8 = local_28[local_d4] == 1;
          local_e8 = local_78;
          FUN_143bf5d30(param_1,param_2,local_c0,local_d8);
        }
      }
    }
  }
  if (local_c8 != (longlong *)0x0) {
    local_98 = local_c8;
    local_b8 = local_c8;
    if (local_c8 == (longlong *)0x0) {
      local_a8 = 0;
    }
    else {
      local_a8 = (**(code **)*local_c8)(local_c8,1);
    }
  }
  FUN_143a8dc60(local_78);
  FUN_143a8dc60(local_50);
  return;
}



// FUNCTION 143bf6f40 FUN_143bf6f40 body=42 status=ok
// SIG undefined FUN_143bf6f40(void)

undefined8 FUN_143bf6f40(longlong *param_1)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = TIndexedContainerIterator<TArray<FKWStageArrangeItem,FDefaultAllocator>_const_,FKWStageArrangeItem_const_,int>
            ::GetIndex(*param_1);
  }
  return uVar1;
}



// FUNCTION 143bf6f70 FUN_143bf6f70 body=128 status=ok
// SIG undefined FUN_143bf6f70(void)

void FUN_143bf6f70(void)

{
  undefined4 local_28 [2];
  longlong local_20;
  longlong local_18;
  double local_10;
  
  local_28[0] = 0xffffffff;
  local_10 = (double)FUN_143a91970();
  while (local_20 = FUN_143ab3590(DAT_146bc8528,local_28), local_20 != 0) {
    local_18 = *(longlong *)(local_20 + 8);
    if ((*(int *)(local_18 + 8) < 1) && (180000.0 < local_10 - *(double *)(local_18 + 0x10))) {
      FUN_143ab37e0(DAT_146bc8528,local_20);
    }
  }
  return;
}



// FUNCTION 143bf6ff0 FUN_143bf6ff0 body=149 status=ok
// SIG undefined FUN_143bf6ff0(void)

undefined1 FUN_143bf6ff0(longlong *param_1,longlong *param_2)

{
  undefined1 local_28;
  
  if (param_1 == param_2) {
    local_28 = 1;
  }
  else if ((param_1 == (longlong *)0x0) || (param_2 == (longlong *)0x0)) {
    local_28 = 0;
  }
  else if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) &&
          ((char)param_1[2] == (char)param_2[2])) {
    local_28 = 1;
  }
  else {
    local_28 = 0;
  }
  return local_28;
}



// FUNCTION 143bf7090 FUN_143bf7090 body=191 status=ok
// SIG undefined FUN_143bf7090(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 FUN_143bf7090(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 local_44;
  undefined8 *local_40;
  undefined1 local_38 [40];
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  local_40 = param_1;
  FUN_143a8dad0(local_38,*param_1);
  if (*(char *)(local_40 + 2) == '\0') {
    local_48 = 0x53;
  }
  else {
    local_48 = 0x4c;
  }
  uVar1 = FUN_143acc590(local_38,0x26);
  uVar1 = FUN_143b17350(uVar1,local_40[1],0xffffffff);
  uVar1 = FUN_143acc590(uVar1,0x23);
  FUN_143acc590(uVar1,(undefined2)local_48);
  local_44 = FUN_143a90140(local_38);
  FUN_143a8dc60(local_38);
  return local_44;
}



// FUNCTION 143bf7150 FUN_143bf7150 body=51 status=ok
// SIG undefined FUN_143bf7150(void)

undefined1 FUN_143bf7150(void)

{
  if (DAT_146bc8528 != 0) {
    FUN_143ab2e80(DAT_146bc8528);
    DAT_146bc8528 = 0;
  }
  DAT_146bc8530 = 0;
  return 1;
}



// FUNCTION 143bf7190 GetTestRenderTransformPivot body=26 status=ok
// SIG undefined GetTestRenderTransformPivot(void)

undefined8 * GetTestRenderTransformPivot(undefined8 *param_1)

{
  *param_1 = icu_53::CalendarAstronomer::AngleFunc::vftable;
  return param_1;
}



// FUNCTION 143bf71b0 FUN_143bf71b0 body=117 status=ok
// SIG undefined FUN_143bf71b0(void)

undefined8 * FUN_143bf71b0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143b52670();
  *param_1 = uVar1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_143bf7290(param_1 + 0xe,0,0);
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_143bf7540(param_1);
  return param_1;
}



// FUNCTION 143bf7230 FUN_143bf7230 body=89 status=ok
// SIG undefined FUN_143bf7230(void)

undefined8 * FUN_143bf7230(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  *param_1 = icu_53::CalendarCache::vftable;
  uVar1 = FUN_143ab3600(FUN_143ab33a0,FUN_143ab3020,0,param_2,param_3);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 143bf7290 FUN_143bf7290 body=54 status=ok
// SIG undefined FUN_143bf7290(void)

undefined8 * FUN_143bf7290(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  return param_1;
}



// FUNCTION 143bf72d0 FUN_143bf72d0 body=32 status=ok
// SIG undefined FUN_143bf72d0(void)

undefined8 * FUN_143bf72d0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return param_1;
}



// FUNCTION 143bf72f0 FUN_143bf72f0 body=44 status=ok
// SIG undefined FUN_143bf72f0(void)

undefined8 * FUN_143bf72f0(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::MoonTimeAngleFunc::vftable;
  return param_1;
}



// FUNCTION 143bf7320 FUN_143bf7320 body=44 status=ok
// SIG undefined FUN_143bf7320(void)

undefined8 * FUN_143bf7320(undefined8 *param_1)

{
  GetTestRenderTransformPivot(param_1);
  *param_1 = icu_53::SunTimeAngleFunc::vftable;
  return param_1;
}



// FUNCTION 143bf7350 ~RtAudioError body=21 status=ok
// SIG undefined ~RtAudioError(void)

void RtAudioError::~RtAudioError(undefined8 *param_1)

{
  *param_1 = icu_53::CalendarAstronomer::AngleFunc::vftable;
  return;
}



// FUNCTION 143bf7370 FUN_143bf7370 body=55 status=ok
// SIG undefined FUN_143bf7370(void)

void FUN_143bf7370(undefined8 *param_1)

{
  *param_1 = icu_53::CalendarCache::vftable;
  if (param_1[1] != 0) {
    FUN_143ab2e80(param_1[1]);
  }
  return;
}



// FUNCTION 143bf73b0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::MoonTimeAngleFunc::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bf73e0 ~UCameraModifier_Climbing body=39 status=ok
// SIG undefined ~UCameraModifier_Climbing(void)

void UCameraModifier_Climbing::~UCameraModifier_Climbing(undefined8 *param_1)

{
  *param_1 = icu_53::SunTimeAngleFunc::vftable;
  RtAudioError::~RtAudioError(param_1);
  return;
}



// FUNCTION 143bf7410 FUN_143bf7410 body=54 status=ok
// SIG undefined FUN_143bf7410(void)

undefined8 FUN_143bf7410(undefined8 param_1,uint param_2)

{
  RtAudioError::~RtAudioError(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf7450 FUN_143bf7450 body=54 status=ok
// SIG undefined FUN_143bf7450(void)

undefined8 FUN_143bf7450(undefined8 param_1,uint param_2)

{
  FUN_143bf7370(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf7490 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf74d0 `scalar_deleting_destructor' body=54 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 UCameraModifier_Climbing::_scalar_deleting_destructor_(undefined8 param_1,uint param_2)

{
  ~UCameraModifier_Climbing(param_1);
  if ((param_2 & 1) != 0) {
    FUN_143a8d330(param_1);
  }
  return param_1;
}



// FUNCTION 143bf7510 FUN_143bf7510 body=32 status=ok
// SIG undefined FUN_143bf7510(void)

undefined8 FUN_143bf7510(undefined8 param_1)

{
  FUN_143bf72d0(param_1,0);
  return param_1;
}



// FUNCTION 143bf7530 FUN_143bf7530 body=9 status=ok
// SIG undefined FUN_143bf7530(void)

undefined8 FUN_143bf7530(void)

{
  return 0x4012d97c7f3321d2;
}



// FUNCTION 143bf7540 FUN_143bf7540 body=197 status=ok
// SIG undefined FUN_143bf7540(void)

void FUN_143bf7540(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_143a91920();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  *(undefined8 *)(param_1 + 0x60) = uVar1;
  *(undefined1 *)(param_1 + 0x80) = 0;
  return;
}



// FUNCTION 143bf7610 FUN_143bf7610 body=249 status=ok
// SIG undefined FUN_143bf7610(void)

void FUN_143bf7610(longlong *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  char cVar2;
  longlong lVar3;
  longlong local_38;
  
  FUN_143b68380(7,FUN_140493820);
  if (param_1 == (longlong *)0x0) {
    *param_2 = 7;
  }
  else {
    lVar3 = FUN_143a8d310(0x10);
    if (lVar3 == 0) {
      local_38 = 0;
    }
    else {
      local_38 = FUN_143bf7230(lVar3,0x20,param_2);
    }
    *param_1 = local_38;
    cVar2 = FUN_143a8b0e0(*param_2);
    if (cVar2 != '\0') {
      puVar1 = (undefined8 *)*param_1;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      *param_1 = 0;
    }
  }
  return;
}



// FUNCTION 143bf7710 FUN_143bf7710 body=217 status=ok
// SIG undefined FUN_143bf7710(void)

undefined8 FUN_143bf7710(longlong param_1)

{
  char cVar1;
  double dVar2;
  
  cVar1 = FUN_143bf80b0(*(undefined8 *)(param_1 + 0x58));
  if (cVar1 != '\0') {
    dVar2 = (double)FUN_143bf7a10(param_1);
    dVar2 = (dVar2 - 2451545.0) / 36525.0;
    *(double *)(param_1 + 0x58) =
         ((23.439292 - dVar2 * 0.013004166666666666) - dVar2 * 1.6666666666666665e-07 * dVar2) +
         dVar2 * 5.027777777777778e-07 * dVar2 * dVar2;
    *(double *)(param_1 + 0x58) = *(double *)(param_1 + 0x58) * 0.017453292519943295;
  }
  return *(undefined8 *)(param_1 + 0x58);
}



// FUNCTION 143bf77f0 FUN_143bf77f0 body=316 status=ok
// SIG undefined FUN_143bf77f0(void)

undefined8 FUN_143bf77f0(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double _X;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (double)FUN_143bf7710(param_1);
  dVar2 = _guard_xfg_dispatch_icall_nop(dVar1);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar1);
  dVar3 = _guard_xfg_dispatch_icall_nop(param_3);
  _X = _guard_xfg_dispatch_icall_nop(param_3);
  dVar4 = _guard_xfg_dispatch_icall_nop(param_4);
  dVar5 = _guard_xfg_dispatch_icall_nop(param_4);
  dVar6 = _guard_xfg_dispatch_icall_nop(param_4);
  dVar4 = _guard_xfg_dispatch_icall_nop(dVar4 * dVar1 + dVar5 * dVar2 * dVar3);
  dVar1 = _guard_xfg_dispatch_icall_nop(dVar3 * dVar1 - dVar6 * dVar2,_X);
  FUN_143bf8230(param_2,dVar1,dVar4);
  return param_2;
}



// FUNCTION 143bf7930 FUN_143bf7930 body=29 status=ok
// SIG undefined FUN_143bf7930(void)

void FUN_143bf7930(undefined8 param_1,undefined8 param_2)

{
  FUN_143bf7a70(param_2);
  return;
}



// FUNCTION 143bf7950 FUN_143bf7950 body=29 status=ok
// SIG undefined FUN_143bf7950(void)

void FUN_143bf7950(undefined8 param_1,undefined8 param_2)

{
  FUN_143bf7f10(param_2);
  return;
}



// FUNCTION 143bf7970 FUN_143bf7970 body=160 status=ok
// SIG undefined FUN_143bf7970(void)

undefined4 FUN_143bf7970(longlong *param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143a8b0e0(*param_3);
  if (cVar1 == '\0') {
    FUN_143ab2410(&DAT_146bc8568);
    if (*param_1 == 0) {
      FUN_143bf7610(param_1,param_3);
      cVar1 = FUN_143a8b0e0(*param_3);
      if (cVar1 != '\0') {
        FUN_143ab2470(&DAT_146bc8568);
        return 0;
      }
    }
    uVar2 = FUN_143ab3440(*(undefined8 *)(*param_1 + 8),param_2);
    FUN_143ab2470(&DAT_146bc8568);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// FUNCTION 143bf7a10 FUN_143bf7a10 body=81 status=ok
// SIG undefined FUN_143bf7a10(void)

double FUN_143bf7a10(double *param_1)

{
  char cVar1;
  
  cVar1 = FUN_143bf80b0(param_1[4]);
  if (cVar1 != '\0') {
    param_1[4] = (*param_1 - -210866760000000.0) / 86400000.0;
  }
  return param_1[4];
}



// FUNCTION 143bf7a70 FUN_143bf7a70 body=49 status=ok
// SIG undefined FUN_143bf7a70(void)

void FUN_143bf7a70(longlong param_1)

{
  FUN_143bf7ab0(param_1);
  FUN_143bf80d0(*(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30));
  return;
}



// FUNCTION 143bf7ab0 FUN_143bf7ab0 body=918 status=ok
// SIG undefined FUN_143bf7ab0(void)

longlong FUN_143bf7ab0(longlong param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_1 + 0x80) == '\0') {
    FUN_143bf7f10(param_1);
    dVar1 = (double)FUN_143bf7a10(param_1);
    dVar1 = dVar1 - 2447891.5;
    dVar2 = (double)FUN_143bf80d0(dVar1 * 0.22997150421858628 + 5.556284436750021);
    uVar3 = FUN_143bf80d0((dVar2 - dVar1 * 0.001944368345221015) - 0.6342598060246725);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    dVar4 = _guard_xfg_dispatch_icall_nop
                      ((dVar2 - *(double *)(param_1 + 0x30)) * 2.0 - *(double *)(param_1 + 0x50));
    dVar5 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x38));
    dVar6 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x38));
    *(double *)(param_1 + 0x50) =
         *(double *)(param_1 + 0x50) +
         ((dVar4 * 0.022233749341155764 - dVar5 * 0.003242821750205464) -
         dVar6 * 0.00645771823237902);
    dVar6 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x50));
    dVar7 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x50) * 2.0);
    *(double *)(param_1 + 0x40) =
         ((dVar2 + dVar4 * 0.022233749341155764 + dVar6 * 0.10975677534091541) -
         dVar5 * 0.003242821750205464) + dVar7 * 0.0037350045992678655;
    dVar2 = _guard_xfg_dispatch_icall_nop
                      ((*(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x30)) * 2.0);
    *(double *)(param_1 + 0x40) = *(double *)(param_1 + 0x40) + dVar2 * 0.011489502465878671;
    dVar1 = (double)FUN_143bf80d0(5.559050068029439 - dVar1 * 0.0009242199067718253);
    dVar2 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x38));
    dVar1 = dVar1 - dVar2 * 0.0027925268031909274;
    dVar2 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x40) - dVar1);
    dVar4 = _guard_xfg_dispatch_icall_nop(*(double *)(param_1 + 0x40) - dVar1);
    dVar5 = _guard_xfg_dispatch_icall_nop(0.08980357792017056);
    dVar4 = _guard_xfg_dispatch_icall_nop(dVar2 * dVar5,dVar4);
    *(double *)(param_1 + 0x48) = dVar4 + dVar1;
    dVar1 = _guard_xfg_dispatch_icall_nop(0.08980357792017056);
    dVar1 = _guard_xfg_dispatch_icall_nop(dVar2 * dVar1);
    FUN_143bf77f0(param_1,param_1 + 0x70,*(undefined8 *)(param_1 + 0x48),dVar1);
    *(undefined1 *)(param_1 + 0x80) = 1;
  }
  return param_1 + 0x70;
}



// FUNCTION 143bf7e50 FUN_143bf7e50 body=49 status=ok
// SIG undefined FUN_143bf7e50(void)

void FUN_143bf7e50(undefined8 param_1,undefined8 *param_2,undefined1 param_3)

{
  FUN_143bf7e90(param_1,*param_2,param_3);
  return;
}



// FUNCTION 143bf7e90 FUN_143bf7e90 body=119 status=ok
// SIG undefined FUN_143bf7e90(void)

undefined8 FUN_143bf7e90(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_143bf72f0(local_28);
  local_20 = FUN_143bf82a0(param_1,local_28,param_2,0x403d87d4abcb41d5,0x40ed4c0000000000,param_3);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  return local_20;
}



// FUNCTION 143bf7f10 FUN_143bf7f10 body=113 status=ok
// SIG undefined FUN_143bf7f10(void)

undefined8 FUN_143bf7f10(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_143bf80b0(*(undefined8 *)(param_1 + 0x30));
  if (cVar1 != '\0') {
    uVar2 = FUN_143bf7a10(param_1);
    FUN_143bf7f90(param_1,uVar2,param_1 + 0x30,param_1 + 0x38);
  }
  return *(undefined8 *)(param_1 + 0x30);
}



// FUNCTION 143bf7f90 FUN_143bf7f90 body=155 status=ok
// SIG undefined FUN_143bf7f90(void)

void FUN_143bf7f90(undefined8 param_1,double param_2,undefined8 *param_3,undefined8 *param_4)

{
  double dVar1;
  undefined8 uVar2;
  
  dVar1 = (double)FUN_143bf80d0((param_2 - 2447891.5) * 0.017202791632524146);
  uVar2 = FUN_143bf80d0((dVar1 + 4.87650757829735) - 4.935239984568769);
  *param_4 = uVar2;
  dVar1 = (double)FUN_143bf8560(*param_4,0x3f911d3671ac14c6);
  uVar2 = FUN_143bf80d0(dVar1 + 4.935239984568769);
  *param_3 = uVar2;
  return;
}



// FUNCTION 143bf8030 FUN_143bf8030 body=119 status=ok
// SIG undefined FUN_143bf8030(void)

undefined8 FUN_143bf8030(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined1 local_28 [8];
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_143bf7320(local_28);
  local_20 = FUN_143bf82a0(param_1,local_28,param_2,0x4076d3e003ab862b,0x40ed4c0000000000,param_3);
  UCameraModifier_Climbing::~UCameraModifier_Climbing(local_28);
  return local_20;
}



// FUNCTION 143bf80b0 FUN_143bf80b0 body=26 status=ok
// SIG undefined FUN_143bf80b0(void)

void FUN_143bf80b0(undefined8 param_1)

{
  FUN_143a919d0(param_1);
  return;
}



// FUNCTION 143bf80d0 FUN_143bf80d0 body=34 status=ok
// SIG undefined FUN_143bf80d0(void)

void FUN_143bf80d0(undefined8 param_1)

{
  FUN_143bf8140(param_1,0x401921fb54442d18);
  return;
}



// FUNCTION 143bf8100 FUN_143bf8100 body=50 status=ok
// SIG undefined FUN_143bf8100(void)

double FUN_143bf8100(double param_1)

{
  double dVar1;
  
  dVar1 = (double)FUN_143bf8140(param_1 + 3.141592653589793,0x401921fb54442d18);
  return dVar1 - 3.141592653589793;
}



// FUNCTION 143bf8140 FUN_143bf8140 body=64 status=ok
// SIG undefined FUN_143bf8140(void)

double FUN_143bf8140(double param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (double)FUN_143b512a0(param_1,param_2);
  return param_1 - param_2 * dVar1;
}


