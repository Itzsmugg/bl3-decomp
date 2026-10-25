// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142cab860 FUN_142cab860 body=143 status=ok
// SIG undefined FUN_142cab860(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142cab860(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  if (*param_1 == 0) {
    local_18 = local_18 & 0xffffffffffffff00;
  }
  else {
    uVar1 = FUN_142caac20(param_1 + 1,&local_28,param_2);
    uVar2 = FUN_142cc4350(uVar1,0);
    local_28 = param_3;
    uStack_20 = param_4;
    local_18 = FUN_142cab8f0(*param_1,&local_28,uVar2);
  }
  return local_18;
}



// FUNCTION 142cab8f0 FUN_142cab8f0 body=239 status=ok
// SIG undefined FUN_142cab8f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cab8f0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x38) == 0)) {
    uVar1 = 0;
  }
  else {
    local_58 = *param_2;
    uStack_54 = param_2[1];
    uStack_50 = param_2[2];
    uStack_4c = param_2[3];
    FUN_142caa8e0(&local_48,param_1,&local_58);
    uVar3 = 0;
    puVar2 = &local_48;
    if (local_40 != (undefined8 *)0x0) {
      puVar2 = local_40;
    }
    uVar4 = (longlong)local_38 & 0x1fffffffffffffff;
    if (puVar2 + local_38 < puVar2) {
      uVar4 = uVar3;
    }
    if (uVar4 != 0) {
      do {
        (**(code **)(**(longlong **)(param_1 + 0x38) + 0x2a8))
                  (*(longlong **)(param_1 + 0x38),*puVar2,param_3);
        uVar3 = uVar3 + 1;
        puVar2 = puVar2 + 1;
      } while (uVar3 != uVar4);
    }
    if (local_40 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    uVar1 = 1;
  }
  return uVar1;
}



// FUNCTION 142cab9e0 FUN_142cab9e0 body=334 status=ok
// SIG undefined FUN_142cab9e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_142cab9e0(longlong *param_1,longlong param_2,float param_3)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong lStack_50;
  undefined8 local_48;
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x278))();
  uVar3 = 0;
  if (cVar2 != '\0') {
    FUN_142caaab0(param_1,&local_58,param_2);
    if (local_40 == '\0') {
      uVar3 = 0;
    }
    else {
      if ((*(byte *)(local_58 + 0x38) & 0x20) != 0) {
        (**(code **)(*param_1 + 0x2e8))(param_1,local_48);
      }
      lVar4 = UStructProperty::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(local_58 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_58 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((bVar1) && (lStack_50 != 0)) {
        lVar4 = FUN_14294e020();
        if (*(longlong *)(local_58 + 0x70) == lVar4) {
          FUN_14246fd50(lStack_50,param_3);
          return 1;
        }
        lVar4 = FUN_14294e080();
        if (*(longlong *)(local_58 + 0x70) == lVar4) {
          FUN_14246fd70(lStack_50,(int)param_3);
          return 1;
        }
      }
      else {
        lVar4 = FUN_142c8a890(&local_58);
        if (lVar4 != 0) {
          lStack_50 = 0;
          local_58 = param_2;
          uVar3 = FUN_142cab8f0(lVar4,&local_58,param_3);
          return uVar3;
        }
      }
      uVar3 = FUN_142c8b9c0(&local_58,param_3);
    }
  }
  return uVar3;
}



// FUNCTION 142cabb30 FUN_142cabb30 body=72 status=ok
// SIG undefined FUN_142cabb30(void)

void FUN_142cabb30(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  
  uVar1 = UBlackboardKeyType_Object::GetPrivateStaticClass();
  uVar1 = UObjectBaseUtility::GetTypedOuter(param_1,uVar1);
  FUN_142dfe2e0(param_1,uVar1,param_2,param_3);
  return;
}



// FUNCTION 142cabb80 FUN_142cabb80 body=179 status=ok
// SIG undefined FUN_142cabb80(void)

undefined8 FUN_142cabb80(longlong param_1,longlong *param_2,float param_3)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_2 != (longlong *)0x0) {
    lVar2 = FUN_142dfdf30();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        (**(code **)(*param_2 + 0x3f8))(param_2,(int)param_3);
        return 1;
      }
      if (*(char *)(param_1 + 0x28) == '\x01') {
        FUN_142ccf590(param_2);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142cabc40 FUN_142cabc40 body=295 status=ok
// SIG undefined FUN_142cabc40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cabc40(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 uVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 8;
  if (plVar2 != plVar3) {
    do {
      if (*plVar2 != 0) {
        uVar1 = FUN_142caac20(plVar2 + 1,local_48,param_2);
        uVar4 = FUN_142cc4350(uVar1,0);
        switch(local_40) {
        case '\0':
          if (local_40 == '\0') {
            local_40 = -1;
          }
          break;
        case '\x01':
          if (local_40 == '\x01') {
            local_40 = -1;
          }
          break;
        case '\x02':
          if (local_40 == '\x02') {
            local_40 = -1;
          }
          break;
        case '\x03':
        case '\x04':
          if (local_40 == '\x03') {
            local_40 = -1;
          }
          break;
        case '\x05':
          if (local_40 == '\x03') {
            local_40 = -1;
          }
        }
        local_68._0_4_ = (undefined4)param_3;
        local_68._4_4_ = (undefined4)((ulonglong)param_3 >> 0x20);
        uStack_60._0_4_ = (undefined4)param_4;
        uStack_60._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
        local_58 = (undefined4)local_68;
        uStack_54 = local_68._4_4_;
        uStack_50 = (undefined4)uStack_60;
        uStack_4c = uStack_60._4_4_;
        local_68 = param_3;
        uStack_60 = param_4;
        FUN_142cab8f0(*plVar2,&local_58,uVar4);
      }
      plVar2 = plVar2 + 8;
    } while (plVar2 != plVar3);
  }
  return;
}



// FUNCTION 142cabd80 FUN_142cabd80 body=266 status=ok
// SIG undefined FUN_142cabd80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cabd80(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48 [8];
  char local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  puVar2 = (undefined8 *)*param_1;
  puVar3 = puVar2 + (longlong)(int)param_1[1] * 8;
  if (puVar2 != puVar3) {
    do {
      uVar1 = FUN_142caac20(puVar2 + 1,local_48,param_3);
      uVar4 = FUN_142cc4350(uVar1,0);
      switch(local_40) {
      case '\0':
        if (local_40 == '\0') {
          local_40 = -1;
        }
        break;
      case '\x01':
        if (local_40 == '\x01') {
          local_40 = -1;
        }
        break;
      case '\x02':
        if (local_40 == '\x02') {
          local_40 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_40 == '\x03') {
          local_40 = -1;
        }
        break;
      case '\x05':
        if (local_40 == '\x03') {
          local_40 = -1;
        }
      }
      local_58 = *param_2;
      uStack_54 = param_2[1];
      uStack_50 = param_2[2];
      uStack_4c = param_2[3];
      FUN_142cab8f0(*puVar2,&local_58,uVar4);
      puVar2 = puVar2 + 8;
    } while (puVar2 != puVar3);
  }
  return;
}



// FUNCTION 142cabeb0 FUN_142cabeb0 body=282 status=ok
// SIG undefined FUN_142cabeb0(void)

void FUN_142cabeb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined4 local_18;
  
  plVar1 = (longlong *)(param_1 + 0xfb8);
  uVar6 = 0;
  *(longlong *)(param_1 + 0xfb0) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0xfc0) = 0;
    if (*(int *)(param_1 + 0xfc4) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
  }
  else {
    iVar3 = *(int *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0xfc0) = 0;
    if (*(int *)(param_1 + 0xfc4) != iVar3) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
    lVar4 = *(longlong *)(param_1 + 0xfb0);
    uVar7 = uVar6;
    if (0 < *(int *)(lVar4 + 0x58)) {
      do {
        iVar3 = *(int *)(param_1 + 0xfc0);
        uVar2 = *(undefined4 *)(*(longlong *)(lVar4 + 0x50) + 0x20 + uVar7);
        local_18 = CONCAT31(local_18._1_3_,*(undefined1 *)(*(longlong *)(lVar4 + 0x50) + 9 + uVar7))
        ;
        *(int *)(param_1 + 0xfc0) = iVar3 + 1;
        if (*(int *)(param_1 + 0xfc4) < iVar3 + 1) {
          TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        lVar4 = *plVar1;
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
        *(ulonglong *)(lVar4 + (longlong)iVar3 * 0xc) = CONCAT44(0x3f800000,local_18);
        *(undefined4 *)(lVar4 + 8 + (longlong)iVar3 * 0xc) = uVar2;
        lVar4 = *(longlong *)(param_1 + 0xfb0);
        uVar7 = uVar7 + 0x58;
      } while ((int)uVar5 < *(int *)(lVar4 + 0x58));
    }
  }
  if (*(char *)(param_1 + 0xfa8) == '\0') {
    return;
  }
  FUN_142350b20(param_1,1);
  return;
}



// FUNCTION 142cabfd0 FUN_142cabfd0 body=214 status=ok
// SIG undefined FUN_142cabfd0(void)

void FUN_142cabfd0(longlong param_1,longlong param_2,undefined1 param_3,float param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  
  lVar1 = *(longlong *)(param_1 + 0xfb0);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x50);
    for (plVar6 = plVar2; plVar6 != plVar2 + (longlong)*(int *)(lVar1 + 0x58) * 0xb;
        plVar6 = plVar6 + 0xb) {
      if (*plVar6 == param_2) {
        iVar5 = (int)(((longlong)plVar6 - (longlong)plVar2) / 0x58);
        goto LAB_142cac01b;
      }
    }
    iVar5 = -1;
LAB_142cac01b:
    if ((*(int *)(param_1 + 0xfc0) == *(int *)(lVar1 + 0x58)) && (-1 < iVar5)) {
      lVar3 = *(longlong *)(param_1 + 0xfb8);
      lVar4 = (longlong)iVar5;
      if (param_4 < 0.0) {
        param_4 = *(float *)(lVar4 * 0x58 + 0x20 + *(longlong *)(lVar1 + 0x50));
      }
      *(float *)(lVar3 + 8 + lVar4 * 0xc) = param_4;
      *(undefined1 *)(lVar3 + lVar4 * 0xc) = param_3;
      *(undefined4 *)(lVar3 + 4 + lVar4 * 0xc) = 0;
      if (*(char *)(param_1 + 0xfa8) != '\0') {
        FUN_142350b20(param_1,CONCAT71((int7)((ulonglong)(lVar4 * 3) >> 8),1));
      }
    }
  }
  return;
}



// FUNCTION 142cac0b0 FUN_142cac0b0 body=160 status=ok
// SIG undefined FUN_142cac0b0(void)

void FUN_142cac0b0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  if ((longlong *)(param_1 + 0x140) != param_2) {
    FUN_142c88bf0((longlong *)(param_1 + 0x140),*param_2,(int)param_2[1],
                  *(undefined4 *)(param_1 + 0x14c),0);
  }
  if (param_3 != (undefined8 *)(param_1 + 0x160)) {
    if (*(char *)(param_1 + 400) != '\0') {
      *(undefined1 *)(param_1 + 400) = 0;
    }
    if (*(char *)(param_3 + 6) != '\0') {
      uVar4 = param_3[1];
      *(undefined8 *)(param_1 + 0x160) = *param_3;
      *(undefined8 *)(param_1 + 0x168) = uVar4;
      uVar4 = param_3[3];
      *(undefined8 *)(param_1 + 0x170) = param_3[2];
      *(undefined8 *)(param_1 + 0x178) = uVar4;
      uVar1 = *(undefined4 *)((longlong)param_3 + 0x24);
      uVar2 = *(undefined4 *)(param_3 + 5);
      uVar3 = *(undefined4 *)((longlong)param_3 + 0x2c);
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(param_3 + 4);
      *(undefined4 *)(param_1 + 0x184) = uVar1;
      *(undefined4 *)(param_1 + 0x188) = uVar2;
      *(undefined4 *)(param_1 + 0x18c) = uVar3;
      *(undefined1 *)(param_1 + 400) = 1;
    }
  }
  *(undefined1 *)(param_1 + 0x154) = 1;
  if (*param_2 != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_3 + 6) != '\0') {
    *(undefined1 *)(param_3 + 6) = 0;
  }
  return;
}



// FUNCTION 142cac150 FUN_142cac150 body=432 status=ok
// SIG undefined FUN_142cac150(void)

void FUN_142cac150(longlong param_1,longlong *param_2,char param_3)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong lVar8;
  undefined4 *puVar9;
  int iVar10;
  longlong lVar11;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined1 local_18;
  
  if (*(longlong *)(param_1 + 0x13e8) == 0) {
    return;
  }
  lVar11 = *(longlong *)(param_1 + 0xa48);
  if (lVar11 == 0) {
    return;
  }
  lVar8 = AGGameMode::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
  }
  if (!bVar7) {
    return;
  }
  FUN_142c8e330(lVar11);
  iVar10 = (int)param_2[1];
  lVar11 = *param_2;
  local_58 = 0;
  local_50 = iVar10;
  if (param_3 == '\0') {
    local_18 = 0;
    if (iVar10 != 0) {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_58,iVar10,0);
      lVar11 = lVar11 - local_58;
      puVar9 = (undefined4 *)(local_58 + 0x20);
      do {
        puVar2 = (undefined8 *)((longlong)puVar9 + lVar11 + -0x20);
        uVar6 = puVar2[1];
        *(undefined8 *)(puVar9 + -8) = *puVar2;
        *(undefined8 *)(puVar9 + -6) = uVar6;
        puVar2 = (undefined8 *)(lVar11 + -0x10 + (longlong)puVar9);
        uVar6 = puVar2[1];
        *(undefined8 *)(puVar9 + -4) = *puVar2;
        *(undefined8 *)(puVar9 + -2) = uVar6;
        puVar1 = (undefined4 *)(lVar11 + (longlong)puVar9);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = *(undefined4 *)((longlong)puVar9 + lVar11 + 0x10);
        puVar9[5] = *(undefined4 *)((longlong)puVar9 + lVar11 + 0x14);
        puVar9 = puVar9 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      goto LAB_142cac2d0;
    }
  }
  else {
    local_48 = *(undefined8 *)(param_1 + 0x210);
    uStack_40 = *(undefined8 *)(param_1 + 0x218);
    local_38 = *(undefined4 *)(param_1 + 0x220);
    uStack_34 = *(undefined4 *)(param_1 + 0x224);
    uStack_30 = *(undefined4 *)(param_1 + 0x228);
    uStack_2c = *(undefined4 *)(param_1 + 0x22c);
    local_28 = *(undefined4 *)(param_1 + 0x230);
    uStack_24 = *(undefined4 *)(param_1 + 0x234);
    uStack_20 = *(undefined4 *)(param_1 + 0x238);
    uStack_1c = *(undefined4 *)(param_1 + 0x23c);
    local_18 = 1;
    if (iVar10 != 0) {
      TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(&local_58,iVar10,0);
      lVar11 = lVar11 - local_58;
      puVar9 = (undefined4 *)(local_58 + 0x20);
      do {
        puVar2 = (undefined8 *)(lVar11 + -0x20 + (longlong)puVar9);
        uVar6 = puVar2[1];
        *(undefined8 *)(puVar9 + -8) = *puVar2;
        *(undefined8 *)(puVar9 + -6) = uVar6;
        puVar2 = (undefined8 *)(lVar11 + -0x10 + (longlong)puVar9);
        uVar6 = puVar2[1];
        *(undefined8 *)(puVar9 + -4) = *puVar2;
        *(undefined8 *)(puVar9 + -2) = uVar6;
        puVar1 = (undefined4 *)(lVar11 + (longlong)puVar9);
        uVar3 = puVar1[1];
        uVar4 = puVar1[2];
        uVar5 = puVar1[3];
        *puVar9 = *puVar1;
        puVar9[1] = uVar3;
        puVar9[2] = uVar4;
        puVar9[3] = uVar5;
        puVar9[4] = *(undefined4 *)(lVar11 + 0x10 + (longlong)puVar9);
        puVar9[5] = *(undefined4 *)(lVar11 + 0x14 + (longlong)puVar9);
        puVar9 = puVar9 + 0x10;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      goto LAB_142cac2d0;
    }
  }
  local_4c = 0;
LAB_142cac2d0:
  FUN_142cac0b0(*(undefined8 *)(param_1 + 0x13e8),&local_58,&local_48);
  return;
}



// FUNCTION 142cac300 FUN_142cac300 body=118 status=ok
// SIG undefined FUN_142cac300(void)

void FUN_142cac300(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0xa48);
  if (lVar1 != 0) {
    lVar3 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142c8e330(lVar1);
      *(undefined8 *)(param_1 + 0x13e8) = param_2;
    }
  }
  return;
}



// FUNCTION 142cac380 FUN_142cac380 body=156 status=ok
// SIG undefined FUN_142cac380(void)

void FUN_142cac380(longlong param_1,float param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  float fVar4;
  
  if ((*(longlong *)(param_1 + 0x13e8) != 0) && (lVar1 = *(longlong *)(param_1 + 0xa48), lVar1 != 0)
     ) {
    lVar3 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_142c8e330(lVar1);
      fVar4 = 0.0;
      if ((0.0 <= param_2) && (fVar4 = param_2, 1.0 <= param_2)) {
        fVar4 = 1.0;
      }
      *(float *)(*(longlong *)(param_1 + 0x13e8) + 0x150) = fVar4;
    }
  }
  return;
}



// FUNCTION 142cac420 FUN_142cac420 body=179 status=ok
// SIG undefined FUN_142cac420(void)

void FUN_142cac420(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x13e8) != 0) && (lVar1 = *(longlong *)(param_1 + 0xa48), lVar1 != 0)
     ) {
    lVar4 = AGGameMode::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      FUN_142c8e330(lVar1);
      lVar1 = *(longlong *)(param_1 + 0x13e8);
      if (param_2 != (undefined8 *)(lVar1 + 0x160)) {
        if (*(char *)(lVar1 + 400) != '\0') {
          *(undefined1 *)(lVar1 + 400) = 0;
        }
        uVar2 = param_2[1];
        *(undefined8 *)(lVar1 + 0x160) = *param_2;
        *(undefined8 *)(lVar1 + 0x168) = uVar2;
        uVar2 = param_2[3];
        *(undefined8 *)(lVar1 + 0x170) = param_2[2];
        *(undefined8 *)(lVar1 + 0x178) = uVar2;
        uVar2 = param_2[5];
        *(undefined8 *)(lVar1 + 0x180) = param_2[4];
        *(undefined8 *)(lVar1 + 0x188) = uVar2;
        *(undefined1 *)(lVar1 + 400) = 1;
      }
    }
  }
  return;
}



// FUNCTION 142cac4e0 FUN_142cac4e0 body=606 status=ok
// SIG undefined FUN_142cac4e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cac4e0(longlong param_1,char param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((*(char *)(param_1 + 0x1308) != '\0') &&
     ((lVar2 = *(longlong *)(param_1 + 0x120), lVar2 != 0 || (lVar2 = FUN_1423407b0(), lVar2 != 0)))
     ) {
    if (*(longlong *)(lVar2 + 400) == 0) {
      lVar2 = *(longlong *)(lVar2 + 0x3f8);
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)(lVar2 + 400) + 0x90);
    }
    if (lVar2 != 0) {
      if (param_2 == '\0') {
        if (*(longlong *)(param_1 + 0x1350) != 0) {
          FUN_142880530(lVar2,param_1 + 0x1350);
          *(undefined8 *)(param_1 + 0x1350) = 0;
        }
      }
      else {
        *(undefined8 *)(param_1 + 0x1320) = *(undefined8 *)(param_1 + 0x210);
        *(undefined8 *)(param_1 + 0x1328) = *(undefined8 *)(param_1 + 0x218);
        *(undefined4 *)(param_1 + 0x1330) = *(undefined4 *)(param_1 + 0x220);
        *(undefined4 *)(param_1 + 0x1334) = *(undefined4 *)(param_1 + 0x224);
        *(undefined4 *)(param_1 + 0x1338) = *(undefined4 *)(param_1 + 0x228);
        *(undefined4 *)(param_1 + 0x133c) = *(undefined4 *)(param_1 + 0x22c);
        *(undefined4 *)(param_1 + 0x1340) = *(undefined4 *)(param_1 + 0x230);
        *(undefined4 *)(param_1 + 0x1344) = *(undefined4 *)(param_1 + 0x234);
        *(undefined4 *)(param_1 + 0x1348) = *(undefined4 *)(param_1 + 0x238);
        *(undefined4 *)(param_1 + 0x134c) = *(undefined4 *)(param_1 + 0x23c);
        uVar1 = *(undefined4 *)(param_1 + 0x130c);
        local_a8 = FUN_142cae4f0;
        uStack_a0 = 0;
        plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
        if (plVar3 != (longlong *)0x0) {
          *plVar3 = (longlong)&PTR_FUN_143f77b88;
          FWeakObjectPtr::operator=(plVar3 + 1,param_1);
          *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
          *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
          *(undefined4 *)(plVar3 + 3) = uStack_a0;
          *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
          lVar4 = FDelegateHandle::GenerateNewID();
          plVar3[5] = lVar4;
          *plVar3 = (longlong)&PTR_FUN_143f77bd0;
        }
        local_98 = 0;
        local_90 = 0;
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
        }
        FWeakObjectPtr::operator=(local_88,0);
        local_b0 = 0xbf800000;
        local_b8 = 1;
        local_80 = 0;
        local_48 = (longlong *)0x0;
        local_38 = 0;
        local_78 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(lVar2,param_1 + 0x1350,&local_98,uVar1);
        if (local_38 != 0) {
          plVar5 = local_68;
          if (local_48 != (longlong *)0x0) {
            plVar5 = local_48;
          }
          if (plVar5 != (longlong *)0x0) {
            (**(code **)(*plVar5 + 0x10))(plVar5,0);
          }
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,0);
          lVar2 = FMemory::Realloc(plVar3,0,0);
          if (lVar2 != 0) {
            FMemory::Free(lVar2);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 142cac740 FUN_142cac740 body=62 status=ok
// SIG undefined FUN_142cac740(void)

void FUN_142cac740(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    FUN_142350b20(param_1,1);
    *(undefined8 *)(param_1 + 0xf38) = param_2;
    FUN_142c95f90(param_1);
  }
  return;
}



// FUNCTION 142cac780 FUN_142cac780 body=64 status=ok
// SIG undefined FUN_142cac780(void)

void FUN_142cac780(longlong param_1,undefined4 param_2)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0xf68) = param_2;
  iVar1 = FUN_14233f450();
  if ((iVar1 == 3) && (*(longlong *)(param_1 + 0xf38) != 0)) {
    FUN_142350b20(param_1,1);
    FUN_142c95f90(param_1);
    return;
  }
  return;
}



// FUNCTION 142cac7c0 FUN_142cac7c0 body=29 status=ok
// SIG undefined FUN_142cac7c0(void)

void FUN_142cac7c0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  if ((*(char *)(param_1 + 0x13e0) != param_2) &&
     (*(char *)(param_1 + 0x13e0) = param_2, *(longlong *)(param_1 + 0x8f0) != 0)) {
    if (*(longlong *)(param_1 + 0x8f0) != 0) {
      FUN_1423a6750();
      *(undefined8 *)(param_1 + 0x8f0) = 0;
      FUN_142491970(param_1);
      *(undefined8 *)(param_1 + 0xa00) = 0;
    }
    uVar1 = FUN_1423b22b0(param_1);
    *(undefined8 *)(param_1 + 0x8f0) = uVar1;
    uVar1 = FUN_14248a5b0(param_1);
    *(undefined8 *)(param_1 + 0xa00) = uVar1;
    TBaseDelegate<void,FOnlineError_const_&>::ExecuteIfBound
              (param_1 + 0x8e0,*(undefined8 *)(param_1 + 0x8f0));
    return;
  }
  return;
}



// FUNCTION 142cac7e0 FUN_142cac7e0 body=172 status=ok
// SIG undefined FUN_142cac7e0(void)

void FUN_142cac7e0(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  longlong lVar5;
  
  plVar1 = param_1 + 0x1e5;
  lVar5 = FWeakObjectPtr::Get(plVar1);
  if (lVar5 != 0) {
    FTickFunction::RemovePrerequisite(param_1 + 6,lVar5,lVar5 + 0x30);
  }
  FWeakObjectPtr::operator=(plVar1,param_2);
  cVar3 = FWeakObjectPtr::IsValid(plVar1);
  if (cVar3 != '\0') {
    lVar5 = FWeakObjectPtr::Get(plVar1);
    uVar2 = FWeakObjectPtr::Get(plVar1);
    FTickFunction::AddPrerequisite(param_1 + 6,uVar2,lVar5 + 0x30);
    uVar2 = FWeakObjectPtr::Get(plVar1);
    lVar5 = *param_1;
    uVar4 = UActorComponent::IsComponentTickEnabled(uVar2);
    (**(code **)(lVar5 + 0x358))(param_1,uVar4);
  }
  return;
}



// FUNCTION 142cac890 FUN_142cac890 body=42 status=ok
// SIG undefined FUN_142cac890(void)

void FUN_142cac890(undefined8 param_1,undefined1 param_2)

{
  FUN_1427e7f60();
  FUN_142cac4e0(param_1,param_2);
  return;
}



// FUNCTION 142cac8c0 FUN_142cac8c0 body=156 status=ok
// SIG undefined FUN_142cac8c0(void)

void FUN_142cac8c0(longlong param_1,undefined8 *param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != '\0') {
    *(undefined1 *)(param_1 + 0x13e0) = 1;
  }
  plVar1 = (longlong *)(param_1 + 0x1378);
  *(undefined4 *)(param_1 + 0x1380) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x1384)) {
    TArray<float,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  iVar2 = *(int *)(param_2 + 1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x1380);
    if (*(int *)(param_1 + 0x1384) < iVar3 + iVar2) {
      TArray<float,FDefaultAllocator>::ResizeTo(plVar1);
      iVar3 = *(int *)(param_1 + 0x1380);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*plVar1 + (longlong)iVar3 * 4),(void *)*param_2,(longlong)iVar2 << 2);
    *(int *)(param_1 + 0x1380) = *(int *)(param_1 + 0x1380) + iVar2;
  }
  FUN_1423b8380(param_1);
  return;
}



// FUNCTION 142cac960 FUN_142cac960 body=635 status=ok
// SIG undefined FUN_142cac960(void)

void FUN_142cac960(longlong param_1,longlong *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_48 [64];
  
  if (param_1 != 0) {
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b30098,*param_3);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b300a0,param_3[1]);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b300a8,param_3[2]);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b300b0,*param_4);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b300b8,param_4[1]);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar5 = *(undefined4 *)((longlong)puVar9 + 0x24);
    uVar6 = *(undefined4 *)(puVar9 + 5);
    uVar7 = *(undefined4 *)((longlong)puVar9 + 0x2c);
    puVar2 = (undefined4 *)(lVar10 + 0x20 + lVar4);
    *puVar2 = *(undefined4 *)(puVar9 + 4);
    puVar2[1] = uVar5;
    puVar2[2] = uVar6;
    puVar2[3] = uVar7;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
    puVar9 = (undefined8 *)FUN_142c62590(local_48,&DAT_146b300c0,param_4[2]);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar3);
    }
    uVar8 = puVar9[1];
    lVar4 = *param_2;
    lVar10 = (longlong)iVar3 * 0x38;
    *(undefined8 *)(lVar10 + lVar4) = *puVar9;
    ((undefined8 *)(lVar10 + lVar4))[1] = uVar8;
    uVar8 = puVar9[3];
    puVar1 = (undefined8 *)(lVar10 + 0x10 + lVar4);
    *puVar1 = puVar9[2];
    puVar1[1] = uVar8;
    uVar8 = puVar9[5];
    puVar1 = (undefined8 *)(lVar10 + 0x20 + lVar4);
    *puVar1 = puVar9[4];
    puVar1[1] = uVar8;
    *(undefined8 *)(lVar10 + 0x30 + lVar4) = puVar9[6];
  }
  return;
}



// FUNCTION 142cacbe0 FUN_142cacbe0 body=341 status=ok
// SIG undefined FUN_142cacbe0(void)

void FUN_142cacbe0(longlong *param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 local_res10;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38 [2];
  
  if (param_2 != 0) {
    puVar7 = (undefined8 *)param_1[1];
    puVar9 = puVar7 + (longlong)(int)param_1[2] * 4;
    for (; puVar7 != puVar9; puVar7 = puVar7 + 4) {
      plVar6 = (longlong *)puVar7[2];
      puVar4 = (undefined8 *)*puVar7;
      plVar1 = plVar6 + *(int *)(puVar7 + 3);
      for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
        if ((longlong *)*plVar6 != (longlong *)0x0) {
          local_48 = *(longlong *)*plVar6;
          local_res10 = 0;
          puVar8 = *(undefined8 **)(*param_1 + 0x48);
          puVar2 = puVar8 + (longlong)*(int *)(*param_1 + 0x50) * 3;
          for (; puVar8 != puVar2; puVar8 = puVar8 + 3) {
            plVar5 = (longlong *)puVar8[1];
            plVar3 = plVar5 + *(int *)(puVar8 + 2);
            for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
              if (*plVar5 == local_48) {
                local_res10 = *puVar8;
                break;
              }
            }
          }
          local_38[0] = *puVar4;
          local_40 = local_res10;
          (*(code *)*param_3)(param_3[1],local_38,&local_40,&local_48);
        }
      }
      (*(code *)*param_4)(param_4[1],puVar7);
    }
  }
  return;
}



// FUNCTION 142cacd40 FUN_142cacd40 body=85 status=ok
// SIG undefined FUN_142cacd40(void)

undefined1 FUN_142cacd40(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0xf28);
  if ((cVar2 != '\0') &&
     (lVar1 = FWeakObjectPtr::Get(param_1 + 0xf28), *(char *)(lVar1 + 0x3f) != '\0')) {
    return 0;
  }
  cVar2 = FUN_1423bd5a0(param_1);
  if (cVar2 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 142cacda0 FUN_142cacda0 body=43 status=ok
// SIG undefined FUN_142cacda0(void)

undefined1 FUN_142cacda0(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_1427e8360();
  if ((cVar1 != '\0') && ((*(byte *)(param_1 + 200) & 0x20) != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cacdd0 FUN_142cacdd0 body=90 status=ok
// SIG undefined FUN_142cacdd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cacdd0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  ulonglong local_38 [3];
  char local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_58;
  FUN_142caaab0(param_1,local_38,param_2);
  if ((local_20 != '\0') && ((*(byte *)(local_38[0] + 0x38) & 0x20) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142cace30 FUN_142cace30 body=549 status=ok
// SIG undefined FUN_142cace30(void)

void FUN_142cace30(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_38;
  undefined8 local_30;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0xf40);
    plVar9 = (longlong *)*plVar1;
    iVar4 = *(int *)(param_1 + 0xf48);
    plVar2 = plVar9 + iVar4;
    for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
      if (*plVar9 == param_2) {
        return;
      }
    }
    *(int *)(param_1 + 0xf48) = iVar4 + 1;
    if (*(int *)(param_1 + 0xf4c) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
    }
    *(longlong *)((longlong)iVar4 * 8 + *plVar1) = param_2;
    uVar3 = 0;
    lVar5 = FUN_1423af5a0(param_1);
    if (lVar5 != 0) {
      uVar8 = 0;
      local_38 = (longlong *)0x0;
      local_30 = 0;
      if (0 < *(int *)(param_2 + 0x50) + 1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(&local_38);
        uVar8 = local_30 & 0xffffffff;
      }
      lVar7 = *(longlong *)(param_2 + 0x40);
      if (lVar7 != 0) {
        iVar4 = (int)uVar8 + 1;
        local_30 = CONCAT44(local_30._4_4_,iVar4);
        if (local_30._4_4_ < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar8);
          lVar7 = *(longlong *)(param_2 + 0x40);
        }
        local_38[(int)uVar8] = lVar7;
        uVar8 = local_30 & 0xffffffff;
      }
      plVar9 = *(longlong **)(param_2 + 0x48);
      plVar2 = plVar9 + *(int *)(param_2 + 0x50);
      plVar10 = local_38;
      for (; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        if (*plVar9 != 0) {
          iVar4 = (int)uVar8;
          for (plVar6 = plVar10; plVar6 != plVar10 + iVar4; plVar6 = plVar6 + 1) {
            if (*plVar6 == *plVar9) {
              if ((int)((longlong)plVar6 - (longlong)plVar10 >> 3) != -1) goto LAB_142cacfc4;
              break;
            }
          }
          local_30._4_4_ = (int)(local_30 >> 0x20);
          local_30 = CONCAT44(local_30._4_4_,iVar4 + 1);
          if (local_30._4_4_ < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,uVar8);
            plVar10 = local_38;
          }
          plVar10[iVar4] = *plVar9;
          uVar8 = local_30 & 0xffffffff;
          plVar10 = local_38;
        }
LAB_142cacfc4:
      }
      uVar3 = FUN_1426bc6f0(lVar5,&local_38);
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
    }
    if ((((param_3 == '\0') && (*(longlong *)(param_1 + 0xf38) != 0)) &&
        (iVar4 = FUN_14233f450(param_1), iVar4 == 3)) && ((*(byte *)(param_1 + 200) & 0x20) != 0)) {
      FUN_142d57d90(*(undefined8 *)(param_1 + 0xf38),param_1 + 0xf50,plVar1);
    }
    FUN_142c90ea0(param_1,uVar3);
  }
  return;
}



// FUNCTION 142cad060 FUN_142cad060 body=593 status=ok
// SIG undefined FUN_142cad060(void)

void FUN_142cad060(longlong param_1,longlong *param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *local_48;
  undefined8 local_40;
  
  plVar12 = (longlong *)*param_2;
  plVar9 = (longlong *)0x0;
  bVar3 = false;
  local_48 = (longlong *)0x0;
  local_40 = 0;
  plVar1 = plVar12 + (int)param_2[1];
  if (plVar12 != plVar1) {
    do {
      lVar8 = *plVar12;
      if (lVar8 != 0) {
        plVar11 = *(longlong **)(param_1 + 0xf40);
        iVar6 = *(int *)(param_1 + 0xf48);
        plVar2 = plVar11 + iVar6;
        for (; plVar11 != plVar2; plVar11 = plVar11 + 1) {
          if (*plVar11 == lVar8) goto LAB_142cad1fd;
        }
        bVar3 = true;
        *(int *)(param_1 + 0xf48) = iVar6 + 1;
        if (*(int *)(param_1 + 0xf4c) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow();
        }
        *(longlong *)((longlong)iVar6 * 8 + *(longlong *)(param_1 + 0xf40)) = lVar8;
        if (local_40._4_4_ < *(int *)(lVar8 + 0x50) + 1) {
          TArray<void_*,FDefaultAllocator>::ResizeTo();
        }
        uVar4 = local_40;
        if (*(longlong *)(lVar8 + 0x40) != 0) {
          lVar10 = (longlong)(int)local_40;
          iVar6 = (int)local_40 + 1;
          local_40 = CONCAT44(local_40._4_4_,iVar6);
          if (local_40._4_4_ < iVar6) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                      (&local_48,uVar4 & 0xffffffff);
          }
          local_48[lVar10] = *(longlong *)(lVar8 + 0x40);
        }
        plVar11 = *(longlong **)(lVar8 + 0x48);
        plVar2 = plVar11 + *(int *)(lVar8 + 0x50);
        plVar9 = local_48;
        if (plVar11 != plVar2) {
          iVar6 = (int)local_40;
          do {
            if (*plVar11 != 0) {
              for (plVar7 = plVar9; plVar7 != plVar9 + iVar6; plVar7 = plVar7 + 1) {
                if (*plVar7 == *plVar11) {
                  if ((int)((longlong)plVar7 - (longlong)plVar9 >> 3) != -1) goto LAB_142cad1f4;
                  break;
                }
              }
              local_40 = CONCAT44(local_40._4_4_,iVar6 + 1);
              if (local_40._4_4_ < iVar6 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar6);
                plVar9 = local_48;
              }
              plVar9[iVar6] = *plVar11;
              plVar9 = local_48;
              iVar6 = (int)local_40;
            }
LAB_142cad1f4:
            plVar11 = plVar11 + 1;
          } while (plVar11 != plVar2);
        }
      }
LAB_142cad1fd:
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar1);
    if (bVar3) {
      uVar5 = 0;
      lVar8 = FUN_1423af5a0(param_1);
      if (lVar8 != 0) {
        uVar5 = FUN_1426bc6f0(lVar8,&local_48);
      }
      if ((((param_3 == '\0') && (*(longlong *)(param_1 + 0xf38) != 0)) &&
          (iVar6 = FUN_14233f450(param_1), iVar6 == 3)) && ((*(byte *)(param_1 + 200) & 0x20) != 0))
      {
        FUN_142d57d90(*(undefined8 *)(param_1 + 0xf38),param_1 + 0xf50,param_1 + 0xf40);
      }
      FUN_142c90ea0(param_1,uVar5);
      plVar9 = local_48;
    }
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  return;
}



// FUNCTION 142cad2c0 FUN_142cad2c0 body=731 status=ok
// SIG undefined FUN_142cad2c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cad2c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_e8;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined4 local_d0 [2];
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong *local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined1 local_18;
  
  if (param_2 == 0) {
    plVar7 = (longlong *)param_1[1];
  }
  else {
    local_e8 = 0;
    local_e0[0] = 0;
    cVar6 = FUN_142c703a0(*param_1,&DAT_146b30098,&local_e8);
    if (((cVar6 == '\0') ||
        (cVar6 = FUN_142c703a0(*param_1,&DAT_146b300a0,(longlong)&local_e8 + 4), cVar6 == '\0')) ||
       (cVar6 = FUN_142c703a0(*param_1,&DAT_146b300a8,local_e0), cVar6 == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    local_d8 = 0;
    local_d0[0] = 0;
    cVar6 = FUN_142c703a0(*param_1,&DAT_146b300b0,&local_d8);
    if (((cVar6 == '\0') ||
        (cVar6 = FUN_142c703a0(*param_1,&DAT_146b300b8,(longlong)&local_d8 + 4), cVar6 == '\0')) ||
       (cVar6 = FUN_142c703a0(*param_1,&DAT_146b300c0,local_d0), cVar6 == '\0')) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((bVar4) || (bVar5)) {
      local_70 = 0x3f800000;
      local_68 = DAT_1468b5da0;
      local_58 = _DAT_1468b5b70;
      uStack_50 = uRam00000001468b5b78;
      local_48 = _DAT_1468b5b80;
      uStack_40 = uRam00000001468b5b88;
      local_60 = DAT_1468b5da8;
      local_38 = _DAT_1468b5b90;
      uStack_34 = uRam00000001468b5b94;
      uStack_30 = uRam00000001468b5b98;
      uStack_2c = uRam00000001468b5b9c;
      local_24 = _DAT_1468b5d90;
      local_6c = 0;
      local_5c = 0;
      local_28 = 0;
      local_1c = DAT_1468b5d98;
      local_18 = 1;
      plVar7 = (longlong *)FUN_142c6f130(*param_1);
      local_b8 = plVar7;
      lVar8 = UAnimMontage::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      lVar8 = 0;
      local_b0 = lVar8;
      if (bVar4) {
        local_b0 = param_2;
      }
      FRotator::Quaternion(&local_d8,&local_c8);
      local_98._8_4_ = local_e0[0];
      local_98._0_8_ = local_e8;
      local_88._4_4_ = DAT_1464aa788._4_4_;
      local_88._0_4_ = (undefined4)DAT_1464aa788;
      local_88._8_4_ = DAT_1464aa790;
      local_88._12_4_ = 0;
      local_a8 = local_c8;
      uStack_a0 = uStack_c0;
      local_98._12_4_ = 0;
      local_78 = DAT_146b300f0;
      if ((plVar7 != (longlong *)0x0) &&
         (lVar9 = (**(code **)(*plVar7 + 0x678))(plVar7), lVar9 != 0)) {
        lVar10 = AHeoCon::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (bVar4) {
          lVar8 = *(longlong *)(lVar9 + 0xa18);
        }
      }
      if (lVar8 != 0) {
        FUN_142ca44b0(lVar8 + 0x10c8,&local_b8);
      }
    }
    plVar7 = (longlong *)param_1[1];
  }
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar7 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar2 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  return;
}



// FUNCTION 142cad5a0 FUN_142cad5a0 body=368 status=ok
// SIG undefined FUN_142cad5a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cad5a0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  plVar1 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f048;
    plVar1[1] = (longlong)FUN_142ca7cd0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[3] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f090;
  }
  local_98 = 0;
  local_90 = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x30))(plVar1,&local_98);
  }
  FWeakObjectPtr::operator=(local_88,0);
  local_a0 = 0xbf800000;
  local_a8 = 1;
  local_80 = 0;
  local_48 = (longlong *)0x0;
  local_38 = 0;
  local_78 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(param_1,param_2,&local_98,0x3dcccccd);
  if (local_38 != 0) {
    plVar3 = local_68;
    if (local_48 != (longlong *)0x0) {
      plVar3 = local_48;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return;
}



// FUNCTION 142cad710 FUN_142cad710 body=133 status=ok
// SIG undefined FUN_142cad710(void)

void FUN_142cad710(longlong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x678))();
    if (lVar2 != 0) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(lVar2 + 0xa18);
        goto LAB_142cad771;
      }
    }
  }
  lVar2 = 0;
LAB_142cad771:
  if (lVar2 != 0) {
    FUN_142c96040(lVar2 + 0x10c8,param_2);
    return;
  }
  return;
}



// FUNCTION 142cad7a0 FUN_142cad7a0 body=136 status=ok
// SIG undefined FUN_142cad7a0(void)

void FUN_142cad7a0(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((longlong *)*param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*(longlong *)*param_1 + 0x678))();
    if (lVar2 != 0) {
      lVar3 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        lVar2 = *(longlong *)(lVar2 + 0xa18);
        goto LAB_142cad804;
      }
    }
  }
  lVar2 = 0;
LAB_142cad804:
  if (lVar2 != 0) {
    FUN_142ca44b0(lVar2 + 0x10c8,param_1);
    return;
  }
  return;
}



// FUNCTION 142cad830 FUN_142cad830 body=27 status=ok
// SIG undefined FUN_142cad830(void)

void FUN_142cad830(undefined8 param_1,undefined8 *param_2)

{
  FUN_142880530();
  *param_2 = 0;
  return;
}



// FUNCTION 142cad850 FUN_142cad850 body=308 status=ok
// SIG undefined FUN_142cad850(void)

undefined8 FUN_142cad850(longlong *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  DWORD DVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  
  if (0 < *(int *)(param_2 + 0x38)) {
    puVar9 = *(undefined4 **)(param_2 + 0x30);
    puVar1 = puVar9 + *(int *)(param_2 + 0x38);
    for (; puVar9 != puVar1; puVar9 = puVar9 + 1) {
      lVar7 = param_1[4];
      uVar2 = *puVar9;
      if (lVar7 != 0) {
        lVar6 = FUN_142a07000();
        lVar7 = *(longlong *)(lVar7 + 0x10);
        if ((*(int *)(lVar7 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar7 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          cVar4 = FUN_1415ad720(&DAT_1468e2448);
          if ((cVar4 == '\0') && (DAT_1468c21ae != '\0')) {
            DVar5 = GetCurrentThreadId();
            bVar3 = false;
            if (DVar5 == DAT_1468c21c0) goto LAB_142cad8fc;
          }
          else {
LAB_142cad8fc:
            bVar3 = true;
          }
          if (bVar3) {
            FUN_1423b2d70(param_1[4],1);
          }
        }
      }
      lVar7 = param_1[0x72];
      if (lVar7 == 0) {
        lVar7 = (**(code **)(*param_1 + 0x308))(param_1);
        param_1[0x72] = lVar7;
      }
      plVar8 = (longlong *)
               FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar7,uVar2);
      if ((plVar8 != (longlong *)0x0) &&
         (cVar4 = (**(code **)(*plVar8 + 0x130))(plVar8), cVar4 != '\0')) {
        if (param_3 != (undefined4 *)0x0) {
          *param_3 = uVar2;
        }
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 142cad990 FUN_142cad990 body=239 status=ok
// SIG undefined FUN_142cad990(void)

void FUN_142cad990(longlong *param_1,undefined4 param_2)

{
  bool bVar1;
  char cVar2;
  DWORD DVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = param_1[4];
  if (lVar5 == 0) goto LAB_142cada25;
  lVar4 = FUN_142a07000();
  lVar5 = *(longlong *)(lVar5 + 0x10);
  if ((*(int *)(lVar5 + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(lVar5 + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) goto LAB_142cada25;
  cVar2 = FUN_1415ad720(&DAT_1468e2448);
  if ((cVar2 == '\0') && (DAT_1468c21ae != '\0')) {
    DVar3 = GetCurrentThreadId();
    bVar1 = false;
    if (DVar3 == DAT_1468c21c0) goto LAB_142cada0f;
  }
  else {
LAB_142cada0f:
    bVar1 = true;
  }
  if (bVar1) {
    FUN_1423b2d70(param_1[4],1);
  }
LAB_142cada25:
  lVar5 = param_1[0x72];
  if (lVar5 == 0) {
    lVar5 = (**(code **)(*param_1 + 0x308))(param_1);
    param_1[0x72] = lVar5;
  }
  plVar6 = (longlong *)
           FAnimInstanceProxy::GetNodeFromIndex<FAnimNode_AssetPlayerBase>(lVar5,param_2);
  if (plVar6 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cada68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar6 + 0x130))(plVar6);
    return;
  }
  return;
}



// FUNCTION 142cada80 FUN_142cada80 body=256 status=ok
// SIG undefined FUN_142cada80(void)

void FUN_142cada80(float *param_1,float param_2,char *param_3,float param_4,float param_5,
                  float *param_6)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  
  bVar2 = *(byte *)(param_6 + 1) & 0xf5;
  *(byte *)(param_6 + 1) = bVar2;
  if ((*(uint *)(param_3 + 0x1c) & 1) != 0) {
    param_5 = param_2 * param_5;
  }
  fVar1 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  if ((*(uint *)(param_3 + 0x1c) & 2) != 0) {
    fVar3 = param_2;
    if (*(longlong *)(param_3 + 0x10) != 0) {
      fVar3 = (float)UCurveFloat::GetFloatValue();
      bVar2 = *(byte *)(param_6 + 1);
    }
    fVar4 = (fVar4 - fVar1) * fVar3 + fVar1;
  }
  *(byte *)(param_6 + 1) = bVar2 | 4;
  *param_6 = fVar4 * param_4;
  if (*param_3 == '\x01') {
    param_5 = param_5 * param_2;
  }
  else if (*param_3 != '\x02') goto LAB_142cadb3d;
  *param_1 = param_5;
LAB_142cadb3d:
  bVar2 = 0;
  if (1 < (byte)(*param_3 - 3U)) {
    bVar2 = 2;
  }
  *(byte *)(param_6 + 1) = *(byte *)(param_6 + 1) & 0xfd;
  *(byte *)(param_6 + 1) = *(byte *)(param_6 + 1) | bVar2;
  return;
}



// FUNCTION 142cadb80 FUN_142cadb80 body=745 status=ok
// SIG undefined FUN_142cadb80(void)

void FUN_142cadb80(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  bVar6 = 0;
  *(undefined8 *)(param_1 + 0x2fc) = 0;
  uVar5 = *(uint *)(param_1 + 0x344) & 0xfffffff9;
  *(float *)(param_1 + 0x2f8) = *(float *)(param_1 + 0x140);
  if (*(char *)(param_1 + 0x145) == '\0') {
    bVar4 = *(byte *)(param_1 + 0x144);
  }
  else {
    bVar4 = 0.0 < *(float *)(param_1 + 0x140);
    *(byte *)(param_1 + 0x144) = bVar4;
  }
  *(uint *)(param_1 + 0x344) = (bVar4 ^ uVar5) & 1 ^ uVar5;
  if (*(char *)(param_1 + 0x268) != '\0') {
    FUN_142cade70(param_1 + 800,param_1 + 0x278,param_1 + 0x2a8,*(undefined4 *)(param_1 + 0x164),
                  param_1 + 0x278,param_1 + 0x33c);
  }
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    bVar4 = *(byte *)(param_1 + 0x338) & 0xf5;
    fVar1 = *(float *)(param_1 + 0x2f8);
    fVar2 = *(float *)(param_1 + 0x164);
    *(byte *)(param_1 + 0x338) = bVar4;
    fVar11 = (float)*(undefined8 *)(param_1 + 0x1f8);
    fVar10 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x1f8) >> 0x20);
    fVar9 = *(float *)(param_1 + 0x200);
    if ((*(uint *)(param_1 + 0x244) & 1) != 0) {
      fVar11 = fVar11 * fVar1;
      fVar10 = fVar10 * fVar1;
      fVar9 = fVar9 * fVar1;
    }
    fVar3 = *(float *)(param_1 + 0x22c);
    fVar8 = *(float *)(param_1 + 0x230);
    if ((*(uint *)(param_1 + 0x244) & 2) != 0) {
      fVar7 = fVar1;
      if (*(longlong *)(param_1 + 0x238) != 0) {
        fVar7 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_1 + 0x238),fVar1);
        bVar4 = *(byte *)(param_1 + 0x338);
      }
      fVar8 = (fVar8 - fVar3) * fVar7 + fVar3;
    }
    *(byte *)(param_1 + 0x338) = bVar4 | 4;
    *(float *)(param_1 + 0x334) = fVar8 * fVar2;
    if (*(char *)(param_1 + 0x228) == '\x01') {
      *(ulonglong *)(param_1 + 0x314) = CONCAT44(fVar10 * fVar1,fVar1 * fVar11);
      *(float *)(param_1 + 0x31c) = fVar9 * fVar1;
    }
    else if (*(char *)(param_1 + 0x228) == '\x02') {
      *(ulonglong *)(param_1 + 0x314) = CONCAT44(fVar10,fVar11);
      *(float *)(param_1 + 0x31c) = fVar9;
    }
    if (1 < (byte)(*(char *)(param_1 + 0x228) - 3U)) {
      bVar6 = 2;
    }
    *(byte *)(param_1 + 0x338) = *(byte *)(param_1 + 0x338) & 0xfd;
    *(byte *)(param_1 + 0x338) = *(byte *)(param_1 + 0x338) | bVar6;
  }
  if (*(char *)(param_1 + 0x16c) != '\0') {
    FUN_142cade70(param_1 + 0x308,*(undefined4 *)(param_1 + 0x2f8),param_1 + 0x1a8,
                  *(undefined4 *)(param_1 + 0x164),param_1 + 0x17c,param_1 + 0x32c);
  }
  return;
}



// FUNCTION 142cade70 FUN_142cade70 body=437 status=ok
// SIG undefined FUN_142cade70(void)

void FUN_142cade70(undefined8 *param_1,float param_2,char *param_3,float param_4,undefined8 *param_5
                  ,float *param_6)

{
  float fVar1;
  byte bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  bVar2 = *(byte *)(param_6 + 1) & 0xf5;
  *(byte *)(param_6 + 1) = bVar2;
  fVar6 = (float)*param_5;
  fVar7 = (float)((ulonglong)*param_5 >> 0x20);
  fVar5 = *(float *)(param_5 + 1);
  if ((*(uint *)(param_3 + 0x1c) & 1) != 0) {
    fVar6 = fVar6 * param_2;
    fVar7 = fVar7 * param_2;
    fVar5 = fVar5 * param_2;
  }
  fVar1 = *(float *)(param_3 + 4);
  fVar4 = *(float *)(param_3 + 8);
  if ((*(uint *)(param_3 + 0x1c) & 2) != 0) {
    fVar3 = param_2;
    if (*(longlong *)(param_3 + 0x10) != 0) {
      fVar3 = (float)UCurveFloat::GetFloatValue(*(longlong *)(param_3 + 0x10),param_2);
      bVar2 = *(byte *)(param_6 + 1);
    }
    fVar4 = (fVar4 - fVar1) * fVar3 + fVar1;
  }
  *(byte *)(param_6 + 1) = bVar2 | 4;
  *param_6 = fVar4 * param_4;
  if (*param_3 == '\x01') {
    *param_1 = CONCAT44(fVar7 * param_2,fVar6 * param_2);
    *(float *)(param_1 + 1) = fVar5 * param_2;
  }
  else if (*param_3 == '\x02') {
    *param_1 = CONCAT44(fVar7,fVar6);
    *(float *)(param_1 + 1) = fVar5;
  }
  bVar2 = 0;
  if (1 < (byte)(*param_3 - 3U)) {
    bVar2 = 2;
  }
  *(byte *)(param_6 + 1) = *(byte *)(param_6 + 1) & 0xfd;
  *(byte *)(param_6 + 1) = *(byte *)(param_6 + 1) | bVar2;
  return;
}



// FUNCTION 142cae030 FUN_142cae030 body=278 status=ok
// SIG undefined FUN_142cae030(void)

void FUN_142cae030(longlong param_1,float param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  *(int *)(param_1 + 0x1014) = *(int *)(param_1 + 0x1014) + 1;
  iVar6 = *(int *)(param_1 + 0x1014);
  bVar3 = false;
  iVar5 = *(int *)(param_1 + 0x1008) + -1;
  lVar8 = (longlong)iVar5;
  if (-1 < iVar5) {
    lVar7 = lVar8 << 4;
    bVar3 = false;
    do {
      lVar1 = *(longlong *)(param_1 + 0x1000);
      if ((*(int *)(lVar7 + 8 + lVar1) == 0) ||
         (plVar2 = *(longlong **)(lVar7 + lVar1), plVar2 == (longlong *)0x0)) {
LAB_142cae0b0:
        bVar3 = true;
      }
      else {
        cVar4 = (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
        if (cVar4 == '\0') goto LAB_142cae0b0;
      }
      lVar7 = lVar7 + -0x10;
      lVar8 = lVar8 + -1;
    } while (-1 < lVar8);
    iVar6 = *(int *)(param_1 + 0x1014);
  }
  *(int *)(param_1 + 0x1014) = iVar6 + -1;
  if (bVar3) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList((longlong *)(param_1 + 0x1000),0);
  }
  FUN_1423be7f0(param_1,param_2,param_3,param_4);
  if (*(longlong *)(param_1 + 0x10d0) != 0) {
    param_2 = param_2 * *(float *)(*(longlong *)(param_1 + 0x10d0) + 0x94);
  }
  param_2 = param_2 * *(float *)(param_1 + 0x10ec);
  *(float *)(param_1 + 0x10e8) = param_2;
  *(float *)(param_1 + 0x10e4) = param_2 + *(float *)(param_1 + 0x10e4);
  return;
}



// FUNCTION 142cae150 FUN_142cae150 body=676 status=ok
// SIG undefined FUN_142cae150(void)

longlong * FUN_142cae150(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  undefined8 local_res8;
  undefined2 *local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  undefined2 **local_38;
  undefined2 **local_30;
  
  local_38 = &local_48;
  local_30 = &local_58;
  iVar6 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  lVar7 = *(longlong *)(param_1 + 0x50);
  if (*(longlong *)(param_1 + 0x50) == 0) {
    lVar7 = param_1 + 0x30;
  }
  local_58 = (undefined2 *)0x0;
  local_50 = 0;
  lVar8 = (longlong)*(int *)(param_1 + 0x58) * 0x1c + lVar7;
  for (; lVar7 != lVar8; lVar7 = lVar7 + 0x1c) {
    local_res8 = FWeakObjectPtr::Get(lVar7);
    FUN_142c95ad0(&local_38,&local_res8,lVar7 + 8);
  }
  iVar5 = *(int *)(param_1 + 0x58);
  lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
  if (lVar7 == 0) {
    local_68 = (undefined2 *)0x0;
    local_60 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
    FGenericPlatformString::Memcpy(local_68,&DAT_143f3edc8,10);
  }
  else {
    local_res8 = *(undefined8 *)(lVar7 + 0x18);
    FName::ToString(&local_res8,&local_68);
  }
  puVar4 = &DAT_145840098;
  puVar9 = &DAT_143f3eda8;
  if ((int)local_60 != 0) {
    puVar9 = local_68;
  }
  if (iVar5 == 1) {
    puVar4 = &DAT_14583ff74;
  }
  FString::PrintfImpl(param_2,L"Modifier for attribute %s resolved to %d context%s.",puVar9,iVar5,
                      puVar4);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (1 < (int)local_40) {
    puVar9 = &DAT_143f3eda8;
    if ((int)local_40 != 0) {
      puVar9 = local_48;
    }
    FString::PrintfImpl(&local_68,L"  Sucessfully modified: %s.",puVar9);
    puVar9 = local_68;
    iVar5 = iVar6;
    if ((int)local_60 != 0) {
      iVar5 = (int)local_60 + -1;
    }
    if (iVar5 != 0) {
      iVar3 = (int)param_2[1];
      iVar2 = (uint)(iVar3 == 0) + iVar3 + iVar5;
      *(int *)(param_2 + 1) = iVar2;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar3);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar3 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,(longlong)iVar5 * 2);
      *(undefined2 *)((longlong)iVar5 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (1 < (int)local_50) {
    puVar9 = &DAT_143f3eda8;
    if ((int)local_50 != 0) {
      puVar9 = local_58;
    }
    FString::PrintfImpl(&local_68,L"  Failed to modify: %s.",puVar9);
    puVar9 = local_68;
    if ((int)local_60 != 0) {
      iVar6 = (int)local_60 + -1;
    }
    if (iVar6 != 0) {
      iVar5 = (int)param_2[1];
      iVar3 = (uint)(iVar5 == 0) + iVar5 + iVar6;
      *(int *)(param_2 + 1) = iVar3;
      if (*(int *)((longlong)param_2 + 0xc) < iVar3) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar5);
      }
      pvVar1 = (void *)(*param_2 + ((longlong)iVar5 - (ulonglong)(iVar5 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,puVar9,(longlong)iVar6 * 2);
      *(undefined2 *)((longlong)iVar6 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_68 != (undefined2 *)0x0) {
      FMemory::Free(local_68);
    }
  }
  if (local_58 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142cae400 FUN_142cae400 body=228 status=ok
// SIG undefined FUN_142cae400(void)

undefined8 * FUN_142cae400(undefined8 param_1,undefined8 *param_2)

{
  wchar_t *pwVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  int iVar5;
  wchar_t *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  puVar4 = (undefined8 *)FUN_142cae150(param_1,local_28);
  local_38 = (wchar_t *)0x0;
  local_2c = 0;
  iVar5 = *(int *)(puVar4 + 1) + -1;
  if (*(int *)(puVar4 + 1) == 0) {
    iVar5 = 0;
  }
  local_30 = iVar5 + 0x13;
  if (0 < local_30) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  }
  uVar3 = local_2c;
  iVar2 = local_30;
  pwVar1 = local_38;
  builtin_wcsncpy(local_38,L"*Auto Refreshing* ",0x12);
  _guard_xfg_dispatch_icall_nop(local_38 + 0x12,(void *)*puVar4,(longlong)iVar5 * 2);
  pwVar1[(longlong)iVar5 + 0x12] = L'\0';
  *param_2 = pwVar1;
  *(int *)(param_2 + 1) = iVar2;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142cae4f0 FUN_142cae4f0 body=180 status=ok
// SIG undefined FUN_142cae4f0(void)

void FUN_142cae4f0(longlong *param_1)

{
  char cVar1;
  float fVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x828))();
  if (cVar1 != '\0') {
    fVar2 = *(float *)((longlong)param_1 + 0x224) - *(float *)((longlong)param_1 + 0x1334);
    if (fVar2 * fVar2 +
        (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x266)) *
        (*(float *)(param_1 + 0x44) - *(float *)(param_1 + 0x266)) +
        (*(float *)(param_1 + 0x45) - *(float *)(param_1 + 0x267)) *
        (*(float *)(param_1 + 0x45) - *(float *)(param_1 + 0x267)) <
        *(float *)(param_1 + 0x262) * *(float *)(param_1 + 0x262)) {
                    /* WARNING: Could not recover jumptable at 0x000142cae56d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x820))(param_1);
      return;
    }
    param_1[0x264] = param_1[0x42];
    param_1[0x265] = param_1[0x43];
    param_1[0x266] = param_1[0x44];
    param_1[0x267] = param_1[0x45];
    param_1[0x268] = param_1[0x46];
    param_1[0x269] = param_1[0x47];
  }
  return;
}



// FUNCTION 142cae5b0 thunk_FUN_142491880 body=5 status=ok
// SIG undefined thunk_FUN_142491880(void)

void thunk_FUN_142491880(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 != 0) {
    lVar1 = DAT_146532760 + -0x10 + (longlong)*param_1 * 0x20;
    *(undefined4 *)(lVar1 + 8) = 0;
    if (*(int *)(lVar1 + 0xc) != 0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeTo(lVar1,0);
    }
    if (*param_1 != 0) {
      lVar1 = (longlong)*param_1 * 0x20;
      if ((*(int *)(lVar1 + -0x18 + DAT_146532760) == 0) &&
         (*(int *)(lVar1 + -8 + DAT_146532760) < 1)) {
        FUN_142478640(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142cae5c0 thunk_FUN_1424918f0 body=5 status=ok
// SIG undefined thunk_FUN_1424918f0(void)

void thunk_FUN_1424918f0(int *param_1)

{
  longlong lVar1;
  
  if (*param_1 + -1 != -1) {
    lVar1 = (longlong)(*param_1 + -1) * 0x20 + DAT_146532760;
    TMulticastScriptDelegate<FWeakObjectPtr>::RemoveInternal(lVar1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar1 + 0x10);
    if (*param_1 != 0) {
      lVar1 = (longlong)*param_1 * 0x20;
      if ((*(int *)(lVar1 + -0x18 + DAT_146532760) == 0) &&
         (*(int *)(lVar1 + -8 + DAT_146532760) < 1)) {
        FUN_142478640(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142cae5d0 FUN_142cae5d0 body=141 status=ok
// SIG undefined FUN_142cae5d0(void)

void FUN_142cae5d0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res8;
  longlong local_res10;
  longlong *local_18;
  longlong local_10;
  
  local_res8 = FWeakObjectPtr::Get();
  if ((local_res8 != 0) && (*(longlong *)(local_res8 + 0x38) != 0)) {
    local_18 = &local_res8;
    local_10 = param_1 + 8;
    lVar3 = *(longlong *)(param_1 + 0x20);
    if (*(longlong *)(param_1 + 0x20) == 0) {
      lVar3 = param_1 + 0x18;
    }
    lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x28) * 8;
    for (; lVar3 != lVar1; lVar3 = lVar3 + 8) {
      lVar2 = FWeakObjectPtr::Get(lVar3);
      if (lVar2 != 0) {
        local_res10 = lVar2;
        FUN_142c95ab0(&local_18,&local_res10);
      }
    }
  }
  return;
}



// FUNCTION 142cae660 FUN_142cae660 body=343 status=ok
// SIG undefined FUN_142cae660(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cae660(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined1 *_Src;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  longlong local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 local_40 [8];
  longlong local_38;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x290))();
  if (cVar2 != '\0') {
    FUN_142caaab0(param_1,local_40,param_2);
    if (local_28 != '\0') {
      lVar3 = FUN_142c8a970(local_40);
      if (lVar3 == 0) {
        lVar3 = FUN_142c8a890(local_40);
        if (lVar3 != 0) {
          FUN_142cb2580(local_58,param_2);
          if (*(longlong *)(lVar3 + 0x30) != 0) {
            _Src = (undefined1 *)FUN_142ca0820(*(longlong *)(lVar3 + 0x30),local_40,lVar3,param_2);
            if (local_58 != _Src) {
              if (*(longlong *)(_Src + 8) == 0) {
                _guard_xfg_dispatch_icall_nop(local_58,_Src,8);
              }
              if (local_50 != 0) {
                FMemory::Free();
              }
              local_50 = *(longlong *)(_Src + 8);
              *(undefined8 *)(_Src + 8) = 0;
              local_48 = *(undefined4 *)(_Src + 0x10);
              local_44 = *(undefined4 *)(_Src + 0x14);
              *(undefined8 *)(_Src + 0x10) = 0;
            }
            if (local_38 != 0) {
              FMemory::Free();
            }
          }
          if (*(longlong **)(lVar3 + 0x38) != (longlong *)0x0) {
            lVar1 = **(longlong **)(lVar3 + 0x38);
            uVar4 = FUN_142cc1650(local_58);
            (**(code **)(lVar1 + 0x2d8))(*(undefined8 *)(lVar3 + 0x38),uVar4,param_3);
          }
          if (local_50 != 0) {
            FMemory::Free();
          }
        }
      }
      else {
        FUN_1424918f0(lVar3,param_3);
      }
    }
  }
  return;
}



// FUNCTION 142cae7e0 FUN_142cae7e0 body=19 status=ok
// SIG undefined FUN_142cae7e0(void)

void FUN_142cae7e0(longlong param_1)

{
  FUN_1422b5d10(*(longlong *)(param_1 + 0x6c0) + 0x4e0);
  return;
}



// FUNCTION 142cae800 FUN_142cae800 body=2016 status=ok
// SIG undefined FUN_142cae800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cae800(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  int iVar20;
  longlong lVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  int iVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  int local_res8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  
  lVar4 = param_1[0x88];
  if (lVar4 != 0) {
    iVar10 = 0;
    iVar24 = 1;
    if (0 < *(int *)(lVar4 + 0xf90)) {
      lVar13 = 0;
      do {
        lVar12 = *(longlong *)(lVar4 + 0xf88);
        if (*(longlong *)(lVar13 + 0x18 + lVar12) == 0) {
          if (((0.0001 < ABS(*(float *)(lVar13 + 0x24 + lVar12))) ||
              (0.0001 < ABS(*(float *)(lVar13 + 0x28 + lVar12)))) ||
             (0.0001 < ABS(*(float *)(lVar13 + 0x2c + lVar12)))) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if ((!bVar8) || (0.0 < *(float *)(lVar13 + 0x30 + lVar12))) goto LAB_142cae8d2;
          bVar8 = true;
        }
        else {
LAB_142cae8d2:
          bVar8 = false;
        }
        if (bVar8) {
          iVar11 = *(int *)(lVar4 + 0xf90);
          iVar20 = (iVar11 - iVar10) + -1;
          if (0 < iVar20) {
            iVar20 = 1;
          }
          if (iVar20 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar10 * 0xa0 + lVar12),
                       (void *)((longlong)(iVar11 - iVar20) * 0xa0 + lVar12),(longlong)iVar20 * 0xa0
                      );
            iVar11 = *(int *)(lVar4 + 0xf90);
          }
          *(int *)(lVar4 + 0xf90) = iVar11 + -1;
          TArray<FRemnantQuestEntityInfo,FDefaultAllocator>::ResizeShrink
                    ((longlong *)(lVar4 + 0xf88));
        }
        else {
          iVar10 = iVar10 + 1;
          lVar13 = lVar13 + 0xa0;
        }
      } while (iVar10 < *(int *)(lVar4 + 0xf90));
    }
    lVar13 = param_1[4];
    if (lVar13 != 0) {
      lVar12 = FUN_142a07000();
      lVar13 = *(longlong *)(lVar13 + 0x10);
      if ((*(int *)(lVar13 + 0x90) < *(int *)(lVar12 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar13 + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8) !=
          lVar12 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if (bVar8) {
        FUN_1423b2d70(param_1[4],1,1);
      }
    }
    lVar13 = param_1[0x72];
    if (lVar13 == 0) {
      lVar13 = (**(code **)(*param_1 + 0x308))(param_1);
      param_1[0x72] = lVar13;
    }
    plVar1 = (longlong *)(lVar13 + 0x5f0);
    if ((*(int *)(lVar13 + 0x5f8) == 0) || (*(longlong *)(lVar4 + 0xfc8) != *(longlong *)*plVar1)) {
      iVar24 = 0;
    }
    if ((((*(int *)(lVar4 + 0xf98) != *(int *)(lVar4 + 0xf90)) ||
         (*(int *)(lVar4 + 0xf80) != *(int *)(lVar4 + 0xf78))) || (*(char *)(lVar4 + 0xf6d) != '\0')
        ) || (*(int *)(lVar4 + 0xf98) + *(int *)(lVar4 + 0xf80) + iVar24 != *(int *)(lVar13 + 0x5f8)
             )) {
      *(undefined4 *)(lVar4 + 0xf98) = 0;
      *(undefined4 *)(lVar4 + 0xf80) = 0;
      iVar10 = *(int *)(lVar13 + 0x5f8);
      while (iVar24 < iVar10) {
        lVar12 = *plVar1;
        iVar11 = iVar10 + -1;
        plVar22 = *(longlong **)(lVar12 + (longlong)iVar11 * 8);
        iVar20 = (iVar10 - iVar11) + -1;
        if (iVar20 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar12 + (longlong)iVar11 * 8),(void *)(lVar12 + (longlong)iVar10 * 8)
                     ,(longlong)iVar20 << 3);
          iVar10 = *(int *)(lVar13 + 0x5f8);
        }
        *(int *)(lVar13 + 0x5f8) = iVar10 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
        if (plVar22 != (longlong *)0x0) {
          (**(code **)(*plVar22 + 0x78))(plVar22,1);
        }
        iVar10 = *(int *)(lVar13 + 0x5f8);
      }
      lVar12 = *(longlong *)(lVar4 + 0xf70);
      lVar14 = (longlong)*(int *)(lVar4 + 0xf78) * 0xe8 + lVar12;
      for (; lVar12 != lVar14; lVar12 = lVar12 + 0xe8) {
        lVar15 = operator_new(0x198);
        if (lVar15 == 0) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN_141f82870(lVar15,lVar12);
        }
        iVar10 = *(int *)(lVar13 + 0x5f8);
        *(int *)(lVar13 + 0x5f8) = iVar10 + 1;
        if (*(int *)(lVar13 + 0x5fc) < iVar10 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
        }
        *(undefined8 *)(*plVar1 + (longlong)iVar10 * 8) = uVar16;
        FUN_142276670(lVar13,uVar16,0);
        *(int *)(lVar4 + 0xf80) = *(int *)(lVar4 + 0xf80) + 1;
      }
      puVar19 = *(undefined8 **)(lVar4 + 0xf88);
      puVar17 = puVar19 + (longlong)*(int *)(lVar4 + 0xf90) * 0x14;
      if (puVar19 != puVar17) {
        puVar23 = puVar19 + 0x12;
        do {
          puVar18 = (undefined8 *)operator_new(0x2d0);
          if (puVar18 == (undefined8 *)0x0) {
            puVar18 = (undefined8 *)0x0;
          }
          else {
            FUN_141206ee0(puVar18);
            *puVar18 = &PTR_FUN_1458452b0;
            puVar18[0x28] = *puVar19;
            *(undefined4 *)(puVar18 + 0x29) = 0xffffffff;
            *(undefined1 *)((longlong)puVar18 + 0x14c) = 0;
            *(undefined4 *)(puVar18 + 0x2a) = 0xffffffff;
            puVar18[0x2b] = puVar23[-0x11];
            *(undefined4 *)(puVar18 + 0x2c) = 0xffffffff;
            *(undefined1 *)((longlong)puVar18 + 0x164) = 0;
            *(undefined4 *)(puVar18 + 0x2d) = 0xffffffff;
            *(undefined1 *)(puVar18 + 0x2e) = *(undefined1 *)(puVar23 + -0x10);
            *(undefined4 *)((longlong)puVar18 + 0x174) = *(undefined4 *)(puVar23 + -10);
            *(undefined4 *)(puVar18 + 0x2f) = *(undefined4 *)((longlong)puVar23 + -0x4c);
            *(undefined8 *)((longlong)puVar18 + 0x17c) = puVar23[-9];
            *(undefined4 *)((longlong)puVar18 + 0x184) = *(undefined4 *)(puVar23 + -8);
            *(undefined4 *)(puVar18 + 0x31) = *(undefined4 *)((longlong)puVar23 + -0x5c);
            *(undefined4 *)((longlong)puVar18 + 0x18c) = 0;
            *(undefined1 *)(puVar18 + 0x32) = *(undefined1 *)((longlong)puVar23 + -0x3c);
            *(undefined4 *)((longlong)puVar18 + 0x194) = *(undefined4 *)(puVar23 + -0xc);
            *(undefined1 *)(puVar18 + 0x33) = *(undefined1 *)(puVar23 + -0xb);
            *(undefined4 *)((longlong)puVar18 + 0x19c) = *(undefined4 *)((longlong)puVar23 + -0x54);
            *(undefined1 *)(puVar18 + 0x34) = 0;
            puVar18[0x35] = *puVar19;
            *(undefined4 *)(puVar18 + 0x36) = 0xffffffff;
            *(undefined1 *)((longlong)puVar18 + 0x1b4) = 0;
            *(undefined4 *)(puVar18 + 0x37) = 0xffffffff;
            puVar18[0x38] = 0;
            *(undefined4 *)(puVar18 + 0x39) = 0xffffffff;
            *(undefined1 *)((longlong)puVar18 + 0x1cc) = 0;
            *(undefined4 *)(puVar18 + 0x3a) = 0xffffffff;
            puVar18[0x3b] = 0;
            puVar18[0x3c] = *(undefined8 *)((longlong)puVar23 + -0x6c);
            *(undefined4 *)(puVar18 + 0x3d) = *(undefined4 *)((longlong)puVar23 + -100);
            FAxis::FAxis((longlong)puVar18 + 0x1ec,puVar23 + -7);
            FAxis::FAxis((longlong)puVar18 + 0x1fc,(longlong)puVar23 + -0x2c);
            *(undefined1 *)((longlong)puVar18 + 0x20c) = 0;
            FAxis::FAxis(puVar18 + 0x42,&DAT_1466acfc0);
            *(undefined4 *)(puVar18 + 0x44) = 0;
            puVar18[0x45] = 0;
            puVar18[0x46] = _DAT_1468b5d90;
            *(undefined4 *)(puVar18 + 0x47) = DAT_1468b5d98;
            *(undefined4 *)((longlong)puVar18 + 0x254) = 0;
            puVar18[0x4b] = 0xffffffffffffffff;
            uVar25 = uRam0000000146b2ff7c;
            puVar18[0x4e] = 0;
            puVar18[0x4f] = 0;
            *(undefined4 *)(puVar18 + 0x4c) = 0;
            *(undefined4 *)((longlong)puVar18 + 0x264) = 0;
            *(undefined4 *)(puVar18 + 0x4d) = 0;
            *(uint *)((longlong)puVar18 + 0x26c) = uVar25;
            uVar25 = uRam0000000146b2ff74 & uRam0000000146b2ff84;
            uVar26 = uRam0000000146b2ff78 & uRam0000000146b2ff88;
            uVar27 = uRam0000000146b2ff7c & uRam0000000146b2ff8c;
            *(uint *)(puVar18 + 0x50) = _DAT_146b2ff70 & _DAT_146b2ff80;
            *(uint *)((longlong)puVar18 + 0x284) = uVar25;
            *(uint *)(puVar18 + 0x51) = uVar26;
            *(uint *)((longlong)puVar18 + 0x28c) = uVar27;
            uVar16 = puVar23[-3];
            puVar18[0x54] = puVar23[-4];
            puVar18[0x55] = uVar16;
            uVar16 = puVar23[-1];
            puVar18[0x56] = puVar23[-2];
            puVar18[0x57] = uVar16;
            uVar3 = *(undefined4 *)((longlong)puVar23 + 4);
            uVar6 = *(undefined4 *)(puVar23 + 1);
            uVar7 = *(undefined4 *)((longlong)puVar23 + 0xc);
            *(undefined4 *)(puVar18 + 0x58) = *(undefined4 *)puVar23;
            *(undefined4 *)((longlong)puVar18 + 0x2c4) = uVar3;
            *(undefined4 *)(puVar18 + 0x59) = uVar6;
            *(undefined4 *)((longlong)puVar18 + 0x2cc) = uVar7;
          }
          iVar10 = *(int *)(lVar13 + 0x5f8);
          *(int *)(lVar13 + 0x5f8) = iVar10 + 1;
          if (*(int *)(lVar13 + 0x5fc) < iVar10 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
          }
          *(undefined8 **)(*plVar1 + (longlong)iVar10 * 8) = puVar18;
          FUN_142276670(lVar13,puVar18,0);
          *(int *)(lVar4 + 0xf98) = *(int *)(lVar4 + 0xf98) + 1;
          puVar19 = puVar19 + 0x14;
          puVar23 = puVar23 + 0x14;
        } while (puVar19 != puVar17);
      }
      *(byte *)(lVar4 + 0xb1d) = *(byte *)(lVar4 + 0xb1d) & 0xf7;
      *(undefined1 *)(lVar4 + 0xf6d) = 0;
    }
    plVar22 = (longlong *)(lVar4 + 0xf70);
    local_res8 = *(int *)(lVar4 + 0xf80);
    iVar24 = local_res8 + -1;
    iVar10 = *(int *)(lVar13 + 0x5f8) + -1;
    lVar13 = (longlong)iVar10;
    if (-1 < iVar10) {
      lVar12 = (longlong)(*(int *)(lVar4 + 0xf98) + -1);
      lVar14 = lVar12 * 0xa0;
      do {
        if (lVar12 < 0) {
          if (-1 < iVar24) {
            lVar15 = (longlong)iVar24 * 0xe8;
            FUN_1422b5fe0(*plVar22 + lVar15,param_2);
            FUN_141f86720(*(undefined8 *)(*plVar1 + lVar13 * 8),*plVar22 + lVar15);
            cVar9 = FUN_1422b49f0(*plVar22 + lVar15);
            if (cVar9 != '\0') {
              iVar10 = *(int *)(lVar4 + 0xf78);
              iVar11 = (iVar10 - iVar24) + -1;
              if (iVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(*plVar22 + lVar15),
                           (void *)((longlong)local_res8 * 0xe8 + *plVar22),(longlong)iVar11 * 0xe8)
                ;
                iVar10 = *(int *)(lVar4 + 0xf78);
              }
              *(int *)(lVar4 + 0xf78) = iVar10 + -1;
              TArray<FNamedOnlineSession,FDefaultAllocator>::ResizeShrink(plVar22);
            }
            iVar24 = iVar24 + -1;
            local_res8 = local_res8 + -1;
          }
        }
        else {
          lVar21 = *(longlong *)(lVar4 + 0xf88);
          lVar5 = *(longlong *)(lVar21 + 0x18 + lVar14);
          lVar15 = lVar21 + lVar14;
          if ((lVar5 != 0) && (*(char *)(lVar15 + 0x22) != '\0')) {
            lVar21 = *(longlong *)(lVar5 + 0x168);
            if (lVar21 == 0) {
              local_84 = DAT_1468b5d98;
              puVar19 = &local_8c;
              local_8c = _DAT_1468b5d90;
            }
            else {
              puVar19 = (undefined8 *)&local_98;
              local_98 = *(undefined4 *)(lVar21 + 0x220);
              local_90 = *(undefined4 *)(lVar21 + 0x228);
              uStack_94 = *(undefined4 *)(lVar21 + 0x224);
            }
            uVar3 = *(undefined4 *)(puVar19 + 1);
            *(undefined8 *)(lVar15 + 0x24) = *puVar19;
            *(undefined4 *)(lVar15 + 0x2c) = uVar3;
            lVar21 = *(longlong *)(lVar4 + 0xf88);
          }
          lVar12 = lVar12 + -1;
          lVar15 = *(longlong *)(*plVar1 + lVar13 * 8);
          *(undefined8 *)(lVar15 + 0x1e0) = *(undefined8 *)(lVar21 + 0x24 + lVar14);
          *(undefined4 *)(lVar15 + 0x1e8) = *(undefined4 *)(lVar21 + 0x2c + lVar14);
          puVar2 = (undefined1 *)(lVar21 + 0x21 + lVar14);
          lVar14 = lVar14 + -0xa0;
          *(undefined1 *)(lVar15 + 0x1a0) = *puVar2;
        }
        lVar13 = lVar13 + -1;
      } while (-1 < lVar13);
    }
  }
  return;
}



// FUNCTION 142caefe0 FUN_142caefe0 body=1018 status=ok
// SIG undefined FUN_142caefe0(void)

void FUN_142caefe0(longlong *param_1,undefined4 param_2)

{
  longlong **pplVar1;
  bool bVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  uint *puVar17;
  longlong *plVar18;
  undefined4 uVar19;
  ulonglong uVar20;
  undefined *local_res8;
  undefined4 local_res10 [2];
  longlong *local_b8;
  undefined4 *puStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  uint local_88;
  int iStack_84;
  undefined **local_80;
  longlong *plStack_78;
  uint *puStack_70;
  undefined4 uStack_68;
  int iStack_64;
  uint uStack_60;
  int iStack_5c;
  undefined ***local_48;
  
  if (param_1[0x149] != 0) {
    local_res10[0] = param_2;
    lVar7 = UInputDeviceManager::GetInstance();
    uVar10 = 0;
    if ((double)param_1[0x1fa] <= (double)(float)*(double *)(lVar7 + 0x78) &&
        (double)(float)*(double *)(lVar7 + 0x78) != (double)param_1[0x1fa]) {
      local_res8 = *(undefined **)(param_1[0x23] + 0x10);
      plVar8 = (longlong *)
               FUN_142ca0f30(&local_b8,&local_res8,*(undefined8 *)(param_1[0xe3] + 0x48));
      plVar18 = param_1 + 0x1fb;
      if (plVar18 != plVar8) {
        iVar15 = (int)param_1[0x1fc];
        plVar13 = (longlong *)*plVar18;
        if (iVar15 != 0) {
          do {
            if (*plVar13 != 0) {
              FMemory::Free();
            }
            plVar13 = plVar13 + 3;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
          plVar13 = (longlong *)*plVar18;
        }
        if (plVar13 != (longlong *)0x0) {
          FMemory::Free(plVar13);
        }
        *plVar18 = *plVar8;
        *plVar8 = 0;
        *(int *)(param_1 + 0x1fc) = (int)plVar8[1];
        *(undefined4 *)((longlong)param_1 + 0xfe4) = *(undefined4 *)((longlong)plVar8 + 0xc);
        plVar8[1] = 0;
      }
      plVar18 = local_b8;
      for (iVar15 = (uint)puStack_b0; iVar15 != 0; iVar15 = iVar15 + -1) {
        if (*plVar18 != 0) {
          FMemory::Free();
        }
        plVar18 = plVar18 + 3;
      }
      if (local_b8 != (longlong *)0x0) {
        FMemory::Free(local_b8);
      }
    }
    cVar4 = FUN_142ca5260(param_1);
    if (cVar4 != '\0') {
      lVar7 = param_1[0x1fe];
      lVar9 = UInputDeviceManager::GetInstance();
      iVar15 = *(int *)(lVar9 + 0x30);
      iVar6 = *(int *)(lVar9 + 0x5c);
      lVar9 = UInputDeviceManager::GetInstance();
      if (((double)param_1[0x1fa] <= (double)(float)*(double *)(lVar9 + 0x78) &&
           (double)(float)*(double *)(lVar9 + 0x78) != (double)param_1[0x1fa]) ||
         ((int)lVar7 != iVar15 - iVar6)) {
        FUN_142350b20(param_1,1);
        lVar7 = UInputDeviceManager::GetInstance();
        local_b8 = (longlong *)0x0;
        local_80 = (undefined **)(lVar7 + 0x28);
        puStack_b0 = (undefined4 *)0x0;
        uVar14 = uVar10;
        uVar20 = uVar10;
        if (0 < *(int *)(lVar7 + 0x30) - *(int *)(lVar7 + 0x5c)) {
          TArray<void_*,FDefaultAllocator>::ResizeTo(&local_b8);
          uVar20 = (ulonglong)puStack_b0 >> 0x20;
          uVar14 = (ulonglong)puStack_b0 & 0xffffffff;
        }
        uVar19 = (undefined4)uVar20;
        uVar12 = (uint)uVar14;
        iVar15 = *(int *)(lVar7 + 0x50);
        puStack_70 = (uint *)(lVar7 + 0x38);
        local_a8 = (undefined **)0x100000000;
        local_98._4_4_ = 0;
        uStack_90 = 0;
        if (iVar15 != 0) {
          puVar17 = *(uint **)(lVar7 + 0x48);
          if (*(uint **)(lVar7 + 0x48) == (uint *)0x0) {
            puVar17 = puStack_70;
          }
          uVar5 = *puVar17;
          uVar11 = uVar10;
          uVar16 = uVar10;
          while (uVar5 == 0) {
            iVar6 = (int)uVar11;
            uStack_90 = (int)uVar16 + 0x20;
            uVar16 = (ulonglong)uStack_90;
            uVar11 = (ulonglong)(iVar6 + 1U);
            uVar3 = (ulonglong)local_a8 >> 0x20;
            local_a8 = (undefined **)CONCAT44((int)uVar3,iVar6 + 1U);
            if ((int)(iVar15 + -1 + (iVar15 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar6)
            goto LAB_142caf22f;
            uVar5 = puVar17[(longlong)iVar6 + 1];
          }
          uVar5 = -uVar5 & uVar5;
          iVar6 = 0x1f;
          if (uVar5 != 0) {
            for (; uVar5 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          local_a8 = (undefined **)CONCAT44(uVar5,SUB84(local_a8,0));
          if (uVar5 == 0) {
            iVar6 = 0x20;
          }
          else {
            iVar6 = 0x1f - iVar6;
          }
          local_98._4_4_ = (uStack_90 - iVar6) + 0x1f;
          if (iVar15 < local_98._4_4_) {
LAB_142caf22f:
            local_98._4_4_ = iVar15;
          }
        }
        uStack_68 = 0xffffffff;
        iStack_64 = local_98._4_4_;
        uStack_60 = uStack_90;
        iStack_5c = iStack_8c;
        plStack_78 = (longlong *)local_a8;
        uStack_a0 = local_a8;
        local_88 = uStack_90;
        iStack_84 = iStack_8c;
        uStack_90 = 0xffffffff;
        iStack_8c = local_98._4_4_;
        bVar2 = local_98._4_4_ < iVar15;
        plVar18 = local_b8;
        local_a8 = local_80;
        local_98 = puStack_70;
        if (bVar2) {
          do {
            iVar15 = iStack_8c;
            iVar6 = (int)uVar14;
            local_res8 = *local_a8;
            uVar12 = iVar6 + 1;
            puStack_b0 = (undefined4 *)CONCAT44(puStack_b0._4_4_,uVar12);
            if ((int)uVar20 < (int)uVar12) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_b8,uVar14);
              uVar20 = (ulonglong)puStack_b0 >> 0x20;
              plVar18 = local_b8;
              uVar12 = (uint)puStack_b0;
            }
            uVar14 = (ulonglong)uVar12;
            uVar19 = (undefined4)uVar20;
            plVar18[iVar6] = *(longlong *)(local_res8 + (longlong)iVar15 * 0x10);
            uStack_90 = uStack_90 & ~uStack_a0._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
          } while (iStack_8c < (int)local_98[6]);
        }
        pplVar1 = (longlong **)(param_1 + 0x1fd);
        if (pplVar1 == &local_b8) {
          if (plVar18 != (longlong *)0x0) {
            FMemory::Free(plVar18);
          }
        }
        else {
          if (*pplVar1 != (longlong *)0x0) {
            FMemory::Free();
          }
          *pplVar1 = plVar18;
          *(uint *)(param_1 + 0x1fe) = uVar12;
          *(undefined4 *)((longlong)param_1 + 0xff4) = uVar19;
        }
      }
    }
    if ((param_1[0x1f9] == 0) && ((param_1[0x1f6] != 0 || ((int)param_1[0x1fc] != 0)))) {
      lVar7 = operator_new(0x180);
      if (lVar7 != 0) {
        uVar10 = FUN_142c8c380(lVar7);
      }
      param_1[0x1f9] = uVar10;
      FUN_14227c160(param_1[0x149],uVar10,0);
    }
    if (param_1[0x149] != 0) {
      puStack_b0 = local_res10;
      local_80 = &PTR_LAB_145848d58;
      local_48 = &local_80;
      local_b8 = param_1;
      plStack_78 = param_1;
      puStack_70 = puStack_b0;
      FUN_14227bc90(param_1[0x149],&local_80);
    }
  }
  return;
}



// FUNCTION 142caf3e0 FUN_142caf3e0 body=524 status=ok
// SIG undefined FUN_142caf3e0(void)

void FUN_142caf3e0(float param_1,float *param_2,float param_3,char *param_4,undefined4 param_5,
                  float param_6,float *param_7)

{
  char cVar1;
  byte bVar2;
  undefined8 in_RCX;
  float fVar3;
  float fVar4;
  
  fVar4 = param_6;
  if ((param_4[0x1c] & 1U) != 0) {
    fVar4 = param_3 * param_6;
  }
  *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfd;
  FUN_142cb0040(in_RCX,param_2,param_4,param_5,param_7);
  cVar1 = *param_4;
  if (cVar1 == '\x01') {
    fVar4 = fVar4 * param_3;
LAB_142caf5b7:
    *param_2 = fVar4;
    *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xf7 | 2;
  }
  else {
    if (cVar1 == '\x02') {
      if (*param_7 <= 0.0) {
        *param_2 = fVar4;
        *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) | 2;
        bVar2 = *(byte *)(param_7 + 1);
      }
      else {
        fVar3 = (float)FMath::FInterpConstantTo(*param_2,fVar4);
        *param_2 = fVar3;
        if (fVar3 == fVar4) {
          bVar2 = *(byte *)(param_7 + 1) & 0xfd | 2;
          *(byte *)(param_7 + 1) = bVar2;
        }
        else {
          bVar2 = *(byte *)(param_7 + 1) & 0xfd;
          *(byte *)(param_7 + 1) = bVar2;
        }
      }
      if ((bVar2 & 10) != 10) {
        return;
      }
      *(byte *)(param_7 + 1) = bVar2 & 0xf7;
      return;
    }
    if (cVar1 == '\x03') {
      fVar4 = param_1 * *param_7 * param_6 + *param_2;
      *param_2 = fVar4;
      if (0.0 < param_6) {
        if (1e-08 < ABS(param_6)) {
          param_6 = (float)(int)(fVar4 / param_6) * param_6;
          if (ABS(fVar4) < ABS(param_6)) {
            param_6 = fVar4;
          }
          *param_2 = fVar4 - param_6;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage(0);
          *param_2 = 0.0;
        }
      }
    }
    else {
      if (cVar1 != '\x04') goto LAB_142caf5b7;
      if (((uint)param_7[1] & 1) == 0) {
        fVar3 = (float)FMath::FInterpConstantTo(*param_2,fVar4);
        *param_2 = fVar3;
        if (fVar3 == fVar4) {
          *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) | 1;
        }
      }
      else {
        fVar4 = (float)FMath::FInterpConstantTo(*param_2,0);
        *param_2 = fVar4;
        if (fVar4 == 0.0) {
          *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfe;
        }
      }
    }
    if ((*(byte *)(param_7 + 1) & 0xc) == 0xc) {
      *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xf7;
    }
  }
  return;
}



// FUNCTION 142caf5f0 FUN_142caf5f0 body=1330 status=ok
// SIG undefined FUN_142caf5f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142caf5f0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  char cVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 local_28;
  undefined4 local_20;
  
  if (*(char *)(param_1 + 0x146) != '\0') {
    return;
  }
  fVar6 = *(float *)(param_1 + 0x140);
  *(float *)(param_1 + 0x2f8) = fVar6;
  if ((*(uint *)(param_1 + 0x344) & 2) != 0) {
    if ((*(uint *)(param_1 + 0x344) & 4) == 0) {
      fVar6 = *(float *)(param_1 + 0x300);
      if (0.0 < *(float *)(param_1 + 0x2e8)) {
        fVar6 = (float)FMath::FInterpConstantTo(*(undefined4 *)(param_1 + 0x2fc),fVar6);
      }
      *(float *)(param_1 + 0x2fc) = fVar6;
      if (ABS(fVar6 - *(float *)(param_1 + 0x300)) <= 1e-08) {
        *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | 4;
        *(undefined4 *)(param_1 + 0x304) = *(undefined4 *)(param_1 + 0x2f0);
      }
    }
    else {
      fVar6 = *(float *)(param_1 + 0x304);
      fVar8 = *(float *)(param_2 + 0x10);
      fVar5 = fVar6;
      if (0.0 < fVar6) {
        fVar5 = fVar6 - *(float *)(param_2 + 0x10);
        *(float *)(param_1 + 0x304) = fVar5;
        fVar8 = fVar6;
        if (0.0 < fVar5) goto LAB_142caf70b;
      }
      if (fVar5 <= 0.0) {
        fVar6 = (float)FMath::FInterpConstantTo
                                 (*(undefined4 *)(param_1 + 0x2fc),0,fVar8,
                                  *(undefined4 *)(param_1 + 0x2f4));
        *(float *)(param_1 + 0x2fc) = fVar6;
        if (ABS(fVar6) <= 1e-08) {
          *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) & 0xfffffff9;
          *(undefined4 *)(param_1 + 0x2fc) = 0;
        }
      }
    }
LAB_142caf70b:
    fVar6 = *(float *)(param_1 + 0x2fc) + *(float *)(param_1 + 0x2f8);
    *(float *)(param_1 + 0x2f8) = fVar6;
  }
  if (*(char *)(param_1 + 0x145) == '\0') {
    cVar3 = *(char *)(param_1 + 0x144);
  }
  else {
    cVar3 = 0.0 < fVar6;
    *(char *)(param_1 + 0x144) = cVar3;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  if (*(char *)(param_1 + 0x268) != '\0') {
    if (cVar3 == '\0') {
      if ((*(byte *)(param_1 + 0x344) & 1) == 0) goto LAB_142caf7b5;
      if (*(char *)(param_1 + 0x2c8) == '\0') {
        if ((*(char *)(param_1 + 0x2a8) != '\x04') && (*(char *)(param_1 + 0x2a8) != '\x03')) {
          *(undefined8 *)(param_1 + 800) = DAT_1466acfa0;
          *(undefined4 *)(param_1 + 0x328) = DAT_1466acfa8;
        }
        goto LAB_142caf7b5;
      }
      *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) | 8;
LAB_142caf7d8:
      pcVar4 = (char *)(param_1 + 0x2c8);
      if ((*(byte *)(param_1 + 0x340) & 8) == 0) {
        pcVar4 = (char *)(param_1 + 0x288);
        if (*pcVar4 == '\0') goto LAB_142caf873;
        uVar7 = *(undefined4 *)(param_1 + 0x160);
        puVar2 = (undefined8 *)(param_1 + 0x26c);
      }
      else {
        puVar2 = &DAT_1466acfa0;
        if (*(char *)(param_1 + 0x1c8) != '\x02') {
          puVar2 = (undefined8 *)(param_1 + 0x17c);
        }
        local_28 = *puVar2;
        local_20 = *(undefined4 *)(puVar2 + 1);
        puVar2 = &local_28;
        uVar7 = *(undefined4 *)(param_1 + 0x168);
      }
    }
    else {
      *(byte *)(param_1 + 0x340) = *(byte *)(param_1 + 0x340) & 0xf7;
LAB_142caf7b5:
      if (cVar3 == '\0') goto LAB_142caf7d8;
      uVar7 = *(undefined4 *)(param_1 + 0x164);
      puVar2 = (undefined8 *)(param_1 + 0x278);
      pcVar4 = (char *)(param_1 + 0x2a8);
    }
    FUN_142cb0130(uVar1,param_1 + 800,fVar6,pcVar4,uVar7,puVar2,param_1 + 0x33c);
  }
LAB_142caf873:
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    if (*(char *)(param_1 + 0x144) == '\0') {
      if ((*(byte *)(param_1 + 0x344) & 1) != 0) {
        if (*(char *)(param_1 + 0x248) == '\0') {
          if (1 < (byte)(*(char *)(param_1 + 0x228) - 3U)) {
            *(undefined8 *)(param_1 + 0x314) = DAT_1468b5da0;
            *(undefined4 *)(param_1 + 0x31c) = DAT_1468b5da8;
          }
        }
        else {
          *(byte *)(param_1 + 0x338) = *(byte *)(param_1 + 0x338) | 8;
        }
      }
      if ((*(byte *)(param_1 + 0x338) & 8) == 0) {
        pcVar4 = (char *)(param_1 + 0x208);
        if (*pcVar4 == '\0') goto LAB_142caf998;
        uVar7 = *(undefined4 *)(param_1 + 0x160);
        puVar2 = (undefined8 *)(param_1 + 0x1ec);
        goto LAB_142caf965;
      }
      pcVar4 = (char *)(param_1 + 0x248);
      puVar2 = &DAT_1468b5da0;
      if (*pcVar4 != '\x02') {
        puVar2 = (undefined8 *)(param_1 + 0x1f8);
      }
      local_28 = *puVar2;
      local_20 = *(undefined4 *)(puVar2 + 1);
      puVar2 = &local_28;
      uVar7 = *(undefined4 *)(param_1 + 0x168);
      uVar9 = 1;
    }
    else {
      *(byte *)(param_1 + 0x338) = *(byte *)(param_1 + 0x338) & 0xf7;
      puVar2 = (undefined8 *)(param_1 + 0x1f8);
      uVar7 = *(undefined4 *)(param_1 + 0x164);
      pcVar4 = (char *)(param_1 + 0x228);
LAB_142caf965:
      uVar9 = 0;
    }
    FUN_142cafb80(uVar1,param_1 + 0x314,*(undefined4 *)(param_1 + 0x2f8),pcVar4,uVar7,puVar2,uVar9,
                  param_1 + 0x334);
  }
LAB_142caf998:
  if (*(char *)(param_1 + 0x16c) != '\0') {
    if (*(char *)(param_1 + 0x144) == '\0') {
      if ((*(byte *)(param_1 + 0x344) & 1) != 0) {
        if (*(char *)(param_1 + 0x1c8) == '\0') {
          if (1 < (byte)(*(char *)(param_1 + 0x1a8) - 3U)) {
            *(undefined8 *)(param_1 + 0x308) = _DAT_1468b5d90;
            *(undefined4 *)(param_1 + 0x310) = DAT_1468b5d98;
          }
        }
        else {
          *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) | 8;
        }
      }
      if ((*(byte *)(param_1 + 0x330) & 8) == 0) {
        pcVar4 = (char *)(param_1 + 0x188);
        if (*pcVar4 == '\0') goto LAB_142cafaca;
        uVar7 = *(undefined4 *)(param_1 + 0x160);
        puVar2 = (undefined8 *)(param_1 + 0x170);
      }
      else {
        pcVar4 = (char *)(param_1 + 0x1c8);
        puVar2 = (undefined8 *)&DAT_1468b5d90;
        if (*pcVar4 != '\x02') {
          puVar2 = (undefined8 *)(param_1 + 0x17c);
        }
        local_28 = *puVar2;
        local_20 = *(undefined4 *)(puVar2 + 1);
        puVar2 = &local_28;
        uVar7 = *(undefined4 *)(param_1 + 0x168);
      }
    }
    else {
      uVar7 = *(undefined4 *)(param_1 + 0x164);
      *(byte *)(param_1 + 0x330) = *(byte *)(param_1 + 0x330) & 0xf7;
      puVar2 = (undefined8 *)(param_1 + 0x17c);
      pcVar4 = (char *)(param_1 + 0x1a8);
    }
    FUN_142cb0130(uVar1,param_1 + 0x308,*(undefined4 *)(param_1 + 0x2f8),pcVar4,uVar7,puVar2,
                  param_1 + 0x32c);
  }
LAB_142cafaca:
  *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) & 0xfffffffe;
  *(uint *)(param_1 + 0x344) = *(uint *)(param_1 + 0x344) | *(byte *)(param_1 + 0x144) & 1;
  if ((((*(char *)(param_1 + 0x147) != '\0') && (*(byte *)(param_1 + 0x144) == 0)) &&
      ((*(byte *)(param_1 + 0x330) & 8) == 0)) &&
     (((*(byte *)(param_1 + 0x338) & 8) == 0 && ((*(byte *)(param_1 + 0x340) & 8) == 0)))) {
    *(undefined1 *)(param_1 + 0x144) = 1;
  }
  return;
}



// FUNCTION 142cafb30 FUN_142cafb30 body=73 status=ok
// SIG undefined FUN_142cafb30(void)

void FUN_142cafb30(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  fVar2 = *(float *)(param_2 + 0x10) + *(float *)(param_1 + 0x254);
  fVar1 = 0.0;
  if ((0.0 <= fVar2) && (fVar1 = *(float *)(param_1 + 0x228), fVar2 <= *(float *)(param_1 + 0x228)))
  {
    fVar1 = fVar2;
  }
  *(float *)(param_1 + 0x254) = fVar1;
  return;
}



// FUNCTION 142cafb80 FUN_142cafb80 body=1208 status=ok
// SIG undefined FUN_142cafb80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cafb80(float param_1,undefined1 (*param_2) [12],undefined8 param_3,char *param_4,
                  undefined4 param_5,undefined8 *param_6,char param_7,float *param_8)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 in_RCX;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_68;
  float local_60;
  undefined1 local_58 [80];
  
  fVar11 = (float)param_3;
  local_68 = *param_6;
  local_60 = *(float *)(param_6 + 1);
  if ((param_4[0x1c] & 1U) != 0) {
    local_68._4_4_ = (float)((ulonglong)local_68 >> 0x20);
    local_60 = local_60 * fVar11;
    local_68 = CONCAT44(local_68._4_4_ * fVar11,(float)local_68 * fVar11);
  }
  *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xfd;
  FUN_142cb0040(in_RCX,param_3,param_4,param_5,param_8);
  cVar1 = *param_4;
  fVar18 = (float)local_68;
  fVar17 = local_68._4_4_;
  if (cVar1 == '\x01') {
    local_60 = local_60 * fVar11;
    *(ulonglong *)*param_2 = CONCAT44(local_68._4_4_ * fVar11,(float)local_68 * fVar11);
LAB_142cb0008:
    *(float *)(*param_2 + 8) = local_60;
    *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xf7 | 2;
  }
  else {
    if (cVar1 == '\x02') {
      if (param_7 == '\0') {
        if ((param_1 == 0.0) ||
           (((*(float *)*param_2 == (float)local_68 && (local_68._4_4_ == *(float *)(*param_2 + 4)))
            && (local_60 == *(float *)(*param_2 + 8))))) {
          local_68 = *(undefined8 *)*param_2;
          fVar11 = *(float *)(*param_2 + 8);
        }
        else {
          fVar11 = local_60;
          if (0.0 < *param_8) {
            fVar13 = local_68._4_4_ - *(float *)(*param_2 + 4);
            fVar14 = local_60 - *(float *)(*param_2 + 8);
            local_68._0_4_ = (float)local_68 - *(float *)*param_2;
            param_1 = *param_8 * param_1;
            fVar12 = -param_1;
            fVar11 = fVar12;
            if ((fVar12 <= (float)local_68) && (fVar11 = param_1, (float)local_68 <= param_1)) {
              fVar11 = (float)local_68;
            }
            local_68._0_4_ = (float)*(undefined8 *)*param_2;
            local_68._4_4_ = (float)((ulonglong)*(undefined8 *)*param_2 >> 0x20);
            fVar15 = fVar12;
            if ((fVar12 <= fVar13) && (fVar15 = fVar13, param_1 <= fVar13)) {
              fVar15 = param_1;
            }
            local_68 = CONCAT44(local_68._4_4_ + fVar15,(float)local_68 + fVar11);
            if ((fVar12 <= fVar14) && (fVar12 = fVar14, param_1 <= fVar14)) {
              fVar12 = param_1;
            }
            fVar11 = *(float *)(*param_2 + 8) + fVar12;
          }
        }
        *(undefined8 *)*param_2 = local_68;
      }
      else {
        puVar7 = (undefined8 *)FMath::RInterpConstantTo(local_58,param_2,&local_68);
        *(undefined8 *)*param_2 = *puVar7;
        fVar11 = *(float *)(puVar7 + 1);
        fVar17 = local_68._4_4_;
        fVar18 = (float)local_68;
      }
      *(float *)(*param_2 + 8) = fVar11;
      if (((fVar18 == *(float *)*param_2) && (fVar17 == *(float *)(*param_2 + 4))) &&
         (local_60 == *(float *)(*param_2 + 8))) {
        bVar5 = 2;
      }
      else {
        bVar5 = 0;
      }
      bVar2 = *(byte *)(param_8 + 1);
      *(byte *)(param_8 + 1) = bVar2 & 0xfd | bVar5;
      if ((bVar2 & 8 | bVar5) != 10) {
        return;
      }
      *(byte *)(param_8 + 1) = bVar2 & 0xf5 | bVar5;
      return;
    }
    if (cVar1 == '\x03') {
      param_1 = *param_8 * 0.0027777778 * param_1;
      fVar13 = (float)local_68 * param_1 + *(float *)*param_2;
      fVar12 = local_68._4_4_ * param_1 + *(float *)(*param_2 + 4);
      *(float *)(*param_2 + 8) = local_60 * param_1 + *(float *)(*param_2 + 8);
      *(ulonglong *)*param_2 = CONCAT44(fVar12,fVar13);
      fVar11 = (float)DAT_146b2ff40;
      fVar18 = DAT_146b2ff40._4_4_;
      fVar17 = DAT_146b2ff40._8_4_;
      auVar9._4_4_ = fVar12;
      auVar9._0_4_ = fVar13;
      auVar9._8_4_ = *(float *)(*param_2 + 8);
      auVar9._12_4_ = 0;
      auVar9 = divps(auVar9,_DAT_146b2ff40);
      fVar13 = fVar13 - (float)(int)auVar9._0_4_ * fVar11;
      fVar12 = fVar12 - (float)(int)auVar9._4_4_ * fVar18;
      fVar14 = *(float *)(*param_2 + 8) - (float)(int)auVar9._8_4_ * fVar17;
      fVar13 = (float)(((uint)(fVar13 + fVar11) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                      (uint)(fVar13 + fVar11));
      fVar12 = (float)(((uint)(fVar12 + fVar18) ^ (uint)fVar12) & -(uint)(0.0 <= fVar12) ^
                      (uint)(fVar12 + fVar18));
      fVar14 = (float)(((uint)(fVar14 + fVar17) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                      (uint)(fVar14 + fVar17));
      bVar4 = fRam0000000146b2ff38 < fVar14;
      *(ulonglong *)*param_2 =
           CONCAT44(((uint)(fVar12 - fVar18) ^ (uint)fVar12) &
                    -(uint)(fRam0000000146b2ff34 < fVar12) ^ (uint)fVar12,
                    ((uint)(fVar13 - fVar11) ^ (uint)fVar13) & -(uint)(_DAT_146b2ff30 < fVar13) ^
                    (uint)fVar13);
      *(uint *)(*param_2 + 8) =
           ((uint)(fVar14 - fVar17) ^ (uint)fVar14) & -(uint)bVar4 ^ (uint)fVar14;
    }
    else {
      if (cVar1 != '\x04') {
        *(undefined8 *)*param_2 = local_68;
        goto LAB_142cb0008;
      }
      if (((uint)param_8[1] & 1) == 0) {
        puVar7 = (undefined8 *)FMath::RInterpConstantTo(local_58,param_2,&local_68);
        *(undefined8 *)*param_2 = *puVar7;
        *(undefined4 *)(*param_2 + 8) = *(undefined4 *)(puVar7 + 1);
        if ((((float)local_68 == *(float *)*param_2) && (local_68._4_4_ == *(float *)(*param_2 + 4))
            ) && (local_60 == *(float *)(*param_2 + 8))) {
          *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) | 1;
        }
      }
      else {
        puVar7 = (undefined8 *)FMath::RInterpConstantTo(local_58,param_2,&DAT_1468b5da0);
        *(undefined8 *)*param_2 = *puVar7;
        uVar3 = *(undefined4 *)(puVar7 + 1);
        *(undefined4 *)(*param_2 + 8) = uVar3;
        fVar11 = (float)DAT_146b2ff40;
        fVar18 = DAT_146b2ff40._4_4_;
        fVar17 = DAT_146b2ff40._8_4_;
        fVar12 = DAT_146b2ff40._12_4_;
        auVar8._12_4_ = 0;
        auVar8._0_12_ = *param_2;
        auVar9 = divps(auVar8,_DAT_146b2ff40);
        fVar13 = *(float *)*param_2 - (float)(int)auVar9._0_4_ * fVar11;
        fVar14 = *(float *)(*param_2 + 4) - (float)(int)auVar9._4_4_ * fVar18;
        fVar15 = *(float *)(*param_2 + 8) - (float)(int)auVar9._8_4_ * fVar17;
        fVar16 = 0.0 - (float)(int)auVar9._12_4_ * fVar12;
        fVar13 = (float)(((uint)(fVar13 + fVar11) ^ (uint)fVar13) & -(uint)(0.0 <= fVar13) ^
                        (uint)(fVar13 + fVar11));
        fVar14 = (float)(((uint)(fVar14 + fVar18) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar18));
        fVar15 = (float)(((uint)(fVar15 + fVar17) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar17));
        fVar16 = (float)(((uint)(fVar16 + fVar12) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                        (uint)(fVar16 + fVar12));
        auVar10._4_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar14 - fVar18) ^ (uint)fVar14) &
                                       -(uint)(fRam0000000146b2ff34 < fVar14) ^ (uint)fVar14) &
                                     uRam0000000146b30014));
        auVar10._0_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar13 - fVar11) ^ (uint)fVar13) &
                                       -(uint)(_DAT_146b2ff30 < fVar13) ^ (uint)fVar13) &
                                     _DAT_146b30010));
        auVar10._8_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar15 - fVar17) ^ (uint)fVar15) &
                                       -(uint)(fRam0000000146b2ff38 < fVar15) ^ (uint)fVar15) &
                                     uRam0000000146b30018));
        auVar10._12_4_ =
             -(uint)(0.0001 < (float)((((uint)(fVar16 - fVar12) ^ (uint)fVar16) &
                                       -(uint)(fRam0000000146b2ff3c < fVar16) ^ (uint)fVar16) &
                                     uRam0000000146b3001c));
        iVar6 = movmskps(uVar3,auVar10);
        if (iVar6 == 0) {
          *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xfe;
        }
      }
    }
    if ((*(byte *)(param_8 + 1) & 0xc) == 0xc) {
      *(byte *)(param_8 + 1) = *(byte *)(param_8 + 1) & 0xf7;
    }
  }
  return;
}



// FUNCTION 142cb0040 FUN_142cb0040 body=235 status=ok
// SIG undefined FUN_142cb0040(void)

void FUN_142cb0040(undefined4 param_1,float param_2,longlong param_3,float param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_3 + 8);
  fVar1 = *(float *)(param_3 + 4);
  *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) & 0xfb;
  if ((*(byte *)(param_3 + 0x1c) & 2) != 0) {
    fVar2 = param_2;
    if (*(longlong *)(param_3 + 0x10) != 0) {
      fVar2 = (float)UCurveFloat::GetFloatValue();
    }
    fVar4 = (fVar4 - fVar1) * fVar2 + fVar1;
  }
  fVar4 = fVar4 * param_4;
  if (*param_5 != fVar4) {
    fVar2 = *(float *)(param_3 + 0x18);
    fVar3 = fVar2;
    if ((*(byte *)(param_3 + 0x1c) & 4) != 0) {
      fVar3 = fVar2 * param_2;
    }
    if (fVar2 == 0.0) {
      *param_5 = fVar4;
    }
    else {
      fVar2 = (float)FMath::FInterpConstantTo(*param_5,fVar4,param_1,fVar3);
      if (fVar2 <= fVar1) {
        fVar2 = fVar1;
      }
      *param_5 = fVar2;
      if (fVar2 != fVar4) {
        return;
      }
    }
  }
  *(byte *)(param_5 + 1) = *(byte *)(param_5 + 1) | 4;
  return;
}



// FUNCTION 142cb0130 FUN_142cb0130 body=592 status=ok
// SIG undefined FUN_142cb0130(void)

void FUN_142cb0130(undefined8 param_1,float *param_2,undefined8 param_3,char *param_4,
                  undefined4 param_5,undefined8 *param_6,undefined4 *param_7)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined1 local_38 [48];
  
  fVar6 = (float)param_3;
  uVar5 = (undefined4)param_1;
  local_58 = *param_6;
  local_50 = *(float *)(param_6 + 1);
  if ((param_4[0x1c] & 1U) != 0) {
    local_58._4_4_ = (float)((ulonglong)local_58 >> 0x20);
    local_50 = local_50 * fVar6;
    local_58 = CONCAT44(local_58._4_4_ * fVar6,(float)local_58 * fVar6);
  }
  *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfd;
  FUN_142cb0040(param_1,param_3,param_4,param_5,param_7);
  cVar1 = *param_4;
  if (cVar1 == '\x01') {
    local_50 = local_50 * fVar6;
    *(ulonglong *)param_2 = CONCAT44(local_58._4_4_ * fVar6,(float)local_58 * fVar6);
  }
  else {
    if (cVar1 == '\x02') {
      local_48 = *(undefined8 *)param_2;
      local_40 = param_2[2];
      puVar4 = (undefined8 *)FMath::VInterpConstantTo(local_38,&local_48,&local_58,uVar5,*param_7);
      *(undefined8 *)param_2 = *puVar4;
      param_2[2] = *(float *)(puVar4 + 1);
      if ((((float)local_58 == *param_2) && (local_58._4_4_ == param_2[1])) &&
         (local_50 == param_2[2])) {
        bVar3 = 2;
      }
      else {
        bVar3 = 0;
      }
      bVar2 = *(byte *)(param_7 + 1);
      *(byte *)(param_7 + 1) = bVar2 & 0xfd | bVar3;
      if ((bVar2 & 8 | bVar3) != 10) {
        return;
      }
      *(byte *)(param_7 + 1) = bVar2 & 0xf5 | bVar3;
      return;
    }
    if ((byte)(cVar1 - 3U) < 2) {
      local_48 = *(undefined8 *)param_2;
      local_40 = param_2[2];
      if ((*(byte *)(param_7 + 1) & 1) == 0) {
        puVar4 = (undefined8 *)FMath::VInterpConstantTo(local_38,&local_48,&local_58,uVar5,*param_7)
        ;
        *(undefined8 *)param_2 = *puVar4;
        param_2[2] = *(float *)(puVar4 + 1);
        if ((((float)local_58 == *param_2) && (local_58._4_4_ == param_2[1])) &&
           (local_50 == param_2[2])) {
          *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) | 1;
        }
      }
      else {
        puVar4 = (undefined8 *)
                 FMath::VInterpConstantTo(local_38,&local_48,&DAT_1468b5d90,uVar5,*param_7);
        *(undefined8 *)param_2 = *puVar4;
        param_2[2] = *(float *)(puVar4 + 1);
        if (((*param_2 == 0.0) && (param_2[1] == 0.0)) && (param_2[2] == 0.0)) {
          *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xfe;
        }
      }
      if ((*(byte *)(param_7 + 1) & 0xc) != 0xc) {
        return;
      }
      *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xf7;
      return;
    }
    *(undefined8 *)param_2 = local_58;
  }
  param_2[2] = local_50;
  *(byte *)(param_7 + 1) = *(byte *)(param_7 + 1) & 0xf7 | 2;
  return;
}



// FUNCTION 142cb0380 FUN_142cb0380 body=17 status=ok
// SIG undefined FUN_142cb0380(void)

undefined8 FUN_142cb0380(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),0 < *(int *)(lVar1 + 0x20));
  }
  return 0;
}



// FUNCTION 142cb03a0 FUN_142cb03a0 body=22 status=ok
// SIG undefined FUN_142cb03a0(void)

undefined8 * FUN_142cb03a0(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_145848c68;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// FUNCTION 142cb0440 FUN_142cb0440 body=22 status=ok
// SIG undefined FUN_142cb0440(void)

undefined8 * FUN_142cb0440(longlong param_1,undefined8 *param_2)

{
  *param_2 = &PTR_FUN_145848c38;
  param_2[1] = *(undefined8 *)(param_1 + 8);
  return param_2;
}



// FUNCTION 142cb04f0 FUN_142cb04f0 body=61 status=ok
// SIG undefined FUN_142cb04f0(void)

void FUN_142cb04f0(longlong param_1)

{
  (**(code **)(**(longlong **)(**(longlong **)(param_1 + 8) + 0xa0) + 0x148))();
                    /* WARNING: Could not recover jumptable at 0x000142cb0526. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(**(longlong **)(param_1 + 8) + 0xa0) + 0x148))();
  return;
}



// FUNCTION 142cb0550 FUN_142cb0550 body=596 status=ok
// SIG undefined FUN_142cb0550(void)

void FUN_142cb0550(longlong param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined **local_78;
  longlong local_70;
  undefined ***local_40;
  
  lVar12 = *(longlong *)(param_1 + 8);
  if (*(longlong *)(lVar12 + 0xfc8) != 0) {
    if (*(longlong *)(lVar12 + 0xfb0) != *(longlong *)(*(longlong *)(lVar12 + 0xfc8) + 0x140)) {
      uVar9 = FUN_1422743b0(*(undefined8 *)(lVar12 + 0xa48));
      FUN_142c90890(*(undefined8 *)(lVar12 + 0xfc8),*(undefined8 *)(lVar12 + 0xfb0),0,uVar9);
      lVar12 = *(longlong *)(param_1 + 8);
    }
    lVar10 = UInputDeviceManager::GetInstance();
    uVar14 = 0;
    if (*(double *)(lVar12 + 0xfd0) <= (double)(float)*(double *)(lVar10 + 0x78) &&
        (double)(float)*(double *)(lVar10 + 0x78) != *(double *)(lVar12 + 0xfd0)) {
      lVar12 = *(longlong *)(param_1 + 8);
      iVar4 = *(int *)(lVar12 + 0xc);
      uVar11 = uVar14;
      if (iVar4 < (int)DAT_1469e91c4) {
        uVar13 = iVar4 >> 0x1f & 0xffff;
        uVar8 = iVar4 + uVar13;
        uVar11 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar8 >> 0x10) * 8) +
                 (longlong)(int)((uVar8 & 0xffff) - uVar13) * 0x18;
      }
      if ((*(uint *)(uVar11 + 8) & 0x30000000) == 0) {
        local_78 = &PTR_LAB_145848c98;
        local_40 = &local_78;
        local_70 = lVar12;
        FUN_14227bc90(*(undefined8 *)(lVar12 + 0xa48),&local_78);
      }
    }
    lVar12 = *(longlong *)(param_1 + 8);
    if ((*(longlong *)(lVar12 + 0xfb0) != 0) &&
       (uVar11 = uVar14, uVar16 = uVar14, uVar17 = uVar14, 0 < *(int *)(lVar12 + 0xfc0))) {
      do {
        if (*(int *)(*(longlong *)(lVar12 + 0xfb0) + 0x58) <= (int)uVar14) {
          return;
        }
        lVar10 = *(longlong *)(lVar12 + 0xfb8);
        lVar5 = *(longlong *)(*(longlong *)(lVar12 + 0xfb0) + 0x50);
        puVar15 = (undefined8 *)(*(longlong *)(*(longlong *)(lVar12 + 0xfc8) + 0x148) + uVar16);
        puVar1 = (undefined8 *)(lVar5 + 0x10 + uVar17);
        uVar9 = puVar1[1];
        uVar3 = *(undefined4 *)(puVar15 + 4);
        *puVar15 = *puVar1;
        puVar15[1] = uVar9;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + uVar17);
        uVar9 = puVar1[1];
        puVar15[2] = *puVar1;
        puVar15[3] = uVar9;
        puVar2 = (undefined4 *)(lVar5 + 0x30 + uVar17);
        uVar18 = puVar2[1];
        uVar6 = puVar2[2];
        uVar7 = puVar2[3];
        *(undefined4 *)(puVar15 + 4) = *puVar2;
        *(undefined4 *)((longlong)puVar15 + 0x24) = uVar18;
        *(undefined4 *)(puVar15 + 5) = uVar6;
        *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar7;
        puVar15[6] = *(undefined8 *)(lVar5 + 0x40 + uVar17);
        FAlphaBlend::SetBlendTime(puVar15,*(undefined4 *)(lVar10 + 8 + uVar11));
        if (*(char *)(lVar10 + uVar11) == '\0') {
          uVar18 = 0;
        }
        else {
          uVar18 = 0x3f800000;
        }
        FAlphaBlend::SetValueRange(puVar15,uVar3,uVar18);
        FAlphaBlend::SetAlpha(puVar15,*(undefined4 *)(lVar10 + 4 + uVar11));
        FAlphaBlend::Update(puVar15,**(undefined4 **)(param_1 + 0x10));
        uVar8 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar8;
        *(undefined4 *)(lVar10 + 4 + uVar11) = *(undefined4 *)((longlong)puVar15 + 0x14);
        lVar12 = *(longlong *)(param_1 + 8);
        uVar11 = uVar11 + 0xc;
        uVar16 = uVar16 + 0x38;
        uVar17 = uVar17 + 0x58;
      } while ((int)uVar8 < *(int *)(lVar12 + 0xfc0));
    }
  }
  return;
}



// FUNCTION 142cb07c0 FUN_142cb07c0 body=91 status=ok
// SIG undefined FUN_142cb07c0(void)

void FUN_142cb07c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  local_38 = *puVar1;
  uStack_30 = puVar1[1];
  local_28 = *(undefined4 *)(puVar1 + 2);
  uStack_24 = *(undefined4 *)((longlong)puVar1 + 0x14);
  uStack_20 = *(undefined4 *)(puVar1 + 3);
  uStack_1c = *(undefined4 *)((longlong)puVar1 + 0x1c);
  local_18 = *(undefined4 *)(puVar1 + 4);
  uStack_14 = *(undefined4 *)((longlong)puVar1 + 0x24);
  uStack_10 = *(undefined4 *)(puVar1 + 5);
  uStack_c = *(undefined4 *)((longlong)puVar1 + 0x2c);
  FUN_142ca1830(*(undefined8 *)(param_1 + 8),local_48,&local_38,*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000142cb0814. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(**(longlong **)(param_1 + 0x18) + 0xa0) + 0x148))();
  return;
}



// FUNCTION 142cb08f0 FUN_142cb08f0 body=825 status=ok
// SIG undefined FUN_142cb08f0(void)

int * FUN_142cb08f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  longlong *plVar12;
  int iVar13;
  longlong lVar14;
  int iVar15;
  undefined1 *_Src;
  uint uVar16;
  int iVar17;
  bool bVar18;
  
  iVar13 = 1;
  iVar17 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar15 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<92,4>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar15);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar15 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)((longlong)iVar15 * 0x5c + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)((longlong)iVar9 * 0x5c + *param_1) = 0xffffffff;
    }
  }
  plVar12 = (longlong *)param_1[4];
  *param_2 = iVar15;
  if (plVar12 == (longlong *)0x0) {
    plVar12 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar12 +
                   (longlong)((int)(iVar15 + (iVar15 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  puVar2 = (undefined1 *)*param_3;
  puVar11 = (undefined4 *)param_3[1];
  bVar18 = false;
  _Src = (undefined1 *)((longlong)iVar15 * 0x5c + *param_1);
  *_Src = *puVar2;
  *(undefined4 *)(_Src + 4) = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(_Src + 8) = *(undefined4 *)(puVar2 + 8);
  *(undefined4 *)(_Src + 0xc) = *(undefined4 *)(puVar2 + 0xc);
  *(undefined4 *)(_Src + 0x10) = *(undefined4 *)(puVar2 + 0x10);
  *(undefined8 *)(_Src + 0x14) = *(undefined8 *)(puVar2 + 0x14);
  *(undefined4 *)(_Src + 0x1c) = *(undefined4 *)(puVar2 + 0x1c);
  *(undefined8 *)(_Src + 0x20) = *(undefined8 *)(puVar2 + 0x20);
  *(undefined4 *)(_Src + 0x28) = *(undefined4 *)(puVar2 + 0x28);
  *(undefined8 *)(_Src + 0x2c) = *(undefined8 *)(puVar2 + 0x2c);
  *(undefined4 *)(_Src + 0x34) = *(undefined4 *)(puVar2 + 0x34);
  _Src[0x38] = puVar2[0x38];
  uVar4 = puVar11[1];
  uVar5 = puVar11[2];
  uVar6 = puVar11[3];
  *(undefined4 *)(_Src + 0x3c) = *puVar11;
  *(undefined4 *)(_Src + 0x40) = uVar4;
  *(undefined4 *)(_Src + 0x44) = uVar5;
  *(undefined4 *)(_Src + 0x48) = uVar6;
  *(undefined8 *)(_Src + 0x4c) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(_Src + 0x54) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar15 = iVar17;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar9 = FUN_142cc3020(_Src);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      iVar9 = *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar9) * 4);
      if (iVar9 != -1) {
        lVar14 = *param_1;
        do {
          cVar7 = FUN_142cb4150(lVar14 + (longlong)iVar9 * 0x5c,_Src);
          iVar15 = iVar9;
          if (cVar7 != '\0') break;
          lVar14 = *param_1;
          iVar9 = *(int *)((longlong)iVar9 * 0x5c + 0x54 + lVar14);
          iVar15 = iVar17;
        } while (iVar9 != -1);
      }
    }
    bVar18 = iVar15 != -1;
    if (bVar18) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar15 * 0x5c + *param_1),_Src,0x54);
      iVar13 = *param_2;
      bVar3 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x5c + *param_1) = iVar13;
      }
      puVar11 = (undefined4 *)((longlong)iVar13 * 0x5c + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar17 = (int)param_1[6];
      }
      puVar11[1] = iVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar12 = (longlong *)param_1[4];
      *param_2 = iVar15;
      if (plVar12 == (longlong *)0x0) {
        plVar12 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar12 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_142cb0bfc;
    }
  }
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar16) {
    uVar10 = (uVar16 >> 1) + 8;
    iVar17 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar7 = '\0';
    if (uVar10 != 0) {
      iVar13 = 0x1f - iVar17;
    }
    uVar10 = (uVar16 >> 1) + 7;
    iVar17 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar17 == 0; iVar17 = iVar17 + -1) {
      }
    }
    if (uVar10 != 0) {
      cVar7 = '\x1f' - (char)iVar17;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar7 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    iVar17 = *param_2;
    uVar16 = FUN_142cc3020(_Src);
    uVar16 = (int)param_1[9] - 1U & uVar16;
    *(uint *)(_Src + 0x58) = uVar16;
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 0x54) =
         *(undefined4 *)
          ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar12 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar12 = param_1 + 7;
    }
    *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar17;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    FUN_142ccc7b0(param_1);
  }
LAB_142cb0bfc:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar18;
  }
  return param_2;
}



// FUNCTION 142cb0c30 GetGameState<APVPGameState> body=89 status=ok
// SIG undefined GetGameState<APVPGameState>(void)

longlong UWorld::GetGameState<APVPGameState>(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x148);
  if (lVar1 != 0) {
    lVar3 = FUN_142e4e3f0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 142cb0c90 FUN_142cb0c90 body=69 status=ok
// SIG undefined FUN_142cb0c90(void)

ulonglong FUN_142cb0c90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = AHeoCon::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142cb0ce0 IsA<UClassProperty> body=69 status=ok
// SIG undefined IsA<UClassProperty>(void)

ulonglong UObjectBaseUtility::IsA<UClassProperty>(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UClassProperty::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142cb0d30 FUN_142cb0d30 body=72 status=ok
// SIG undefined FUN_142cb0d30(void)

void FUN_142cb0d30(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  switch(cVar1) {
  case '\0':
    bVar2 = cVar1 == '\0';
    break;
  case '\x01':
    bVar2 = cVar1 == '\x01';
    break;
  case '\x02':
    bVar2 = cVar1 == '\x02';
    break;
  case '\x03':
  case '\x04':
  case '\x05':
    bVar2 = cVar1 == '\x03';
    break;
  default:
    goto switchD_142cb0d4d_default;
  }
  if (bVar2) {
    *(undefined1 *)(param_1 + 1) = 0xff;
  }
switchD_142cb0d4d_default:
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



// FUNCTION 142cb0d90 FUN_142cb0d90 body=932 status=ok
// SIG undefined FUN_142cb0d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cb0d90(longlong param_1,byte param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  char cVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 *puVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  uint local_108 [2];
  undefined1 local_100 [192];
  undefined1 *local_40;
  int local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar7 = FUN_142bbd600();
  if (((lVar7 == 0) || (*(longlong *)(lVar7 + 8) == 0)) ||
     (lVar9 = *(longlong *)(*(longlong *)(lVar7 + 8) + 0x10), lVar8 = FUN_142dfd690(),
     lVar9 != lVar8)) {
    return 0;
  }
  lVar8 = 0;
  lVar9 = lVar8;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar9 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)(*(byte *)(*(longlong *)(lVar7 + 8) + 0x2b) >> 1 & 1) * 4;
  puVar1 = (undefined8 *)(lVar2 + lVar9);
  if (puVar1 == (undefined8 *)0x0) {
    return 0;
  }
  uVar3 = *(undefined4 *)(param_3 + 1);
  *puVar1 = *param_3;
  *(undefined4 *)(puVar1 + 1) = uVar3;
  FUN_142bc3660(param_1,param_2);
  if (((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0) ||
     (cVar4 = FUN_142bc1e70(param_1,param_2), cVar4 == '\0')) {
    return 1;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), lVar9 != 0)) &&
     (lVar9 = *(longlong *)(lVar9 + 0x150), lVar9 != 0)) {
    lVar10 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142cb0ef0;
  }
  lVar9 = lVar8;
LAB_142cb0ef0:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar9,local_108,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar13 = (ulonglong)local_108[0];
    do {
      iVar12 = (int)uVar13;
      if (iVar12 < local_38) {
        puVar11 = local_100;
        if (local_40 != (undefined1 *)0x0) {
          puVar11 = local_40;
        }
        if (*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) == -1) goto LAB_142cb0f3c;
        bVar5 = true;
      }
      else {
LAB_142cb0f3c:
        bVar5 = false;
      }
      if (!bVar5) {
        if (local_40 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_40);
        return 1;
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = FWeakObjectPtr::Get(**(longlong **)(puVar11 + (longlong)iVar12 * 0x18) +
                                  ((longlong)*(int *)(puVar11 + (longlong)iVar12 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar9 != 0) && (cVar4 = FUN_142bcaf00(param_1,lVar9), cVar4 != '\0')) {
        lVar10 = FUN_142bbbf70(lVar9);
        if (lVar10 == 0) {
          bVar6 = 0xff;
        }
        else {
          bVar6 = UBlackboardData::GetKeyID(lVar10,lVar7);
        }
        if (bVar6 != 0xff) {
          lVar10 = lVar8;
          if ((*(int *)(lVar9 + 400) != 0) && ((int)(uint)bVar6 < *(int *)(lVar9 + 0x1a0))) {
            lVar10 = (ulonglong)*(ushort *)(*(longlong *)(lVar9 + 0x198) + (ulonglong)bVar6 * 2) +
                     *(longlong *)(lVar9 + 0x188);
          }
          uVar3 = *(undefined4 *)(param_3 + 1);
          *(undefined8 *)(lVar10 + lVar2) = *param_3;
          *(undefined4 *)(lVar10 + 8 + lVar2) = uVar3;
          FUN_142bc3660(lVar9);
        }
      }
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
      lVar9 = (longlong)(int)local_108[0];
      iVar12 = *(int *)(puVar11 + lVar9 * 0x18 + 0x14);
      *(int *)(puVar11 + lVar9 * 0x18 + 0x10) = iVar12;
      puVar1 = (undefined8 *)(puVar11 + lVar9 * 0x18);
      while (iVar12 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar12 * 0x18);
        lVar9 = *(longlong *)*puVar1;
        local_110 = *(undefined4 *)(lVar9 + (longlong)iVar12 * 0x18);
        local_10c = *(undefined4 *)(lVar9 + 4 + (longlong)iVar12 * 0x18);
        local_118 = *(undefined4 *)(puVar1 + 1);
        local_114 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar4 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_110,&local_118);
        if (cVar4 != '\0') break;
        iVar12 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar12;
      }
      uVar13 = (ulonglong)(int)local_108[0];
      puVar11 = local_100;
      if (local_40 != (undefined1 *)0x0) {
        puVar11 = local_40;
      }
    } while ((*(int *)(puVar11 + uVar13 * 0x18 + 0x10) != -1) ||
            (local_38 + -1 <= (int)local_108[0]));
    local_108[0] = local_108[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_108);
  } while( true );
}



// FUNCTION 142cb1140 FUN_142cb1140 body=906 status=ok
// SIG undefined FUN_142cb1140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cb1140(longlong param_1,byte param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  ulonglong uVar12;
  undefined1 auStack_148 [32];
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint local_118 [2];
  undefined1 local_110 [192];
  undefined1 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  lVar6 = FUN_142bbd600();
  if (((lVar6 == 0) || (*(longlong *)(lVar6 + 8) == 0)) ||
     (lVar8 = *(longlong *)(*(longlong *)(lVar6 + 8) + 0x10), lVar7 = FUN_142dfd5b0(),
     lVar8 != lVar7)) {
    return 0;
  }
  lVar7 = 0;
  lVar8 = lVar7;
  if ((*(int *)(param_1 + 400) != 0) && ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar8 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
  }
  lVar2 = (ulonglong)(*(byte *)(*(longlong *)(lVar6 + 8) + 0x2b) >> 1 & 1) * 4;
  lVar8 = lVar2 + lVar8;
  if (lVar8 == 0) {
    return 0;
  }
  FUN_142cb3d70(lVar8,param_3);
  FUN_142bc3660(param_1,param_2);
  if (((*(byte *)(*(longlong *)(param_1 + 0x180) + 0x48) & 1) == 0) ||
     (cVar3 = FUN_142bc1e70(param_1,param_2), cVar3 == '\0')) {
    return 1;
  }
  lVar8 = *(longlong *)(param_1 + 0x120);
  if (((lVar8 != 0) || (lVar8 = FUN_1423407b0(param_1), lVar8 != 0)) &&
     (lVar8 = *(longlong *)(lVar8 + 0x150), lVar8 != 0)) {
    lVar9 = FUN_142c32730();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_142cb1292;
  }
  lVar8 = lVar7;
LAB_142cb1292:
  UAISystem::CreateBlackboardDataToComponentsIterator
            (lVar8,local_118,*(undefined8 *)(param_1 + 0x180));
  do {
    uVar12 = (ulonglong)local_118[0];
    do {
      iVar11 = (int)uVar12;
      if (iVar11 < local_48) {
        puVar10 = local_110;
        if (local_50 != (undefined1 *)0x0) {
          puVar10 = local_50;
        }
        if (*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) == -1) goto LAB_142cb12de;
        bVar4 = true;
      }
      else {
LAB_142cb12de:
        bVar4 = false;
      }
      if (!bVar4) {
        if (local_50 == (undefined1 *)0x0) {
          return 1;
        }
        FMemory::Free(local_50);
        return 1;
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar8 = FWeakObjectPtr::Get(**(longlong **)(puVar10 + (longlong)iVar11 * 0x18) +
                                  ((longlong)*(int *)(puVar10 + (longlong)iVar11 * 0x18 + 0x10) * 3
                                  + 1) * 8);
      if ((lVar8 != 0) && (cVar3 = FUN_142bcaf00(param_1,lVar8), cVar3 != '\0')) {
        lVar9 = FUN_142bbbf70(lVar8);
        if (lVar9 == 0) {
          bVar5 = 0xff;
        }
        else {
          bVar5 = UBlackboardData::GetKeyID(lVar9,lVar6);
        }
        if (bVar5 != 0xff) {
          lVar9 = lVar7;
          if ((*(int *)(lVar8 + 400) != 0) && ((int)(uint)bVar5 < *(int *)(lVar8 + 0x1a0))) {
            lVar9 = (ulonglong)*(ushort *)(*(longlong *)(lVar8 + 0x198) + (ulonglong)bVar5 * 2) +
                    *(longlong *)(lVar8 + 0x188);
          }
          FUN_142cb3d70(lVar9 + lVar2,param_3);
          FUN_142bc3660(lVar8,bVar5);
        }
      }
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
      lVar8 = (longlong)(int)local_118[0];
      iVar11 = *(int *)(puVar10 + lVar8 * 0x18 + 0x14);
      *(int *)(puVar10 + lVar8 * 0x18 + 0x10) = iVar11;
      puVar1 = (undefined8 *)(puVar10 + lVar8 * 0x18);
      while (iVar11 != -1) {
        *(undefined4 *)((longlong)puVar1 + 0x14) =
             *(undefined4 *)(*(longlong *)*puVar1 + 0x10 + (longlong)iVar11 * 0x18);
        lVar8 = *(longlong *)*puVar1;
        local_120 = *(undefined4 *)(lVar8 + (longlong)iVar11 * 0x18);
        local_11c = *(undefined4 *)(lVar8 + 4 + (longlong)iVar11 * 0x18);
        local_128 = *(undefined4 *)(puVar1 + 1);
        local_124 = *(undefined4 *)((longlong)puVar1 + 0xc);
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_120,&local_128);
        if (cVar3 != '\0') break;
        iVar11 = *(int *)((longlong)puVar1 + 0x14);
        *(int *)(puVar1 + 2) = iVar11;
      }
      uVar12 = (ulonglong)(int)local_118[0];
      puVar10 = local_110;
      if (local_50 != (undefined1 *)0x0) {
        puVar10 = local_50;
      }
    } while ((*(int *)(puVar10 + uVar12 * 0x18 + 0x10) != -1) ||
            (local_48 + -1 <= (int)local_118[0]));
    local_118[0] = local_118[0] + 1;
    UAISystem::FBlackboardDataToComponentsIterator::TryMoveIteratorToParentBlackboard(local_118);
  } while( true );
}



// FUNCTION 142cb14d0 FUN_142cb14d0 body=709 status=ok
// SIG undefined FUN_142cb14d0(void)

void FUN_142cb14d0(undefined8 *param_1,uint param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  int local_74;
  int local_70;
  undefined8 local_60;
  undefined8 *local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  iVar9 = 0;
  uVar8 = (ulonglong)(int)param_2;
  local_58 = param_1;
  if (0 < (int)param_2) {
    do {
      if (iVar9 + 1 < (int)param_2) {
        puVar12 = param_1 + 1;
        iVar3 = FName::Compare(puVar12);
        if ((iVar3 < 0) && (param_1 != puVar12)) {
          uVar18 = *param_1;
          *param_1 = *puVar12;
          *puVar12 = uVar18;
        }
      }
      iVar9 = iVar9 + 2;
      param_1 = param_1 + 2;
    } while (iVar9 < (int)param_2);
  }
  local_70 = 2;
  uVar10 = uVar8;
  puVar12 = local_58;
  local_40 = uVar8;
  if (2 < (int)param_2) {
    do {
      local_74 = 0;
      lVar5 = (longlong)local_70 * 2;
      local_50 = 0;
      iVar9 = local_70 * 2;
      local_48 = lVar5;
      do {
        lVar2 = local_50;
        iVar3 = (int)uVar10 - local_74;
        if (iVar9 <= iVar3) {
          iVar3 = iVar9;
        }
        iVar17 = 0;
        iVar16 = local_70;
        if (0 < local_70) {
          do {
            if (iVar3 <= iVar16) break;
            lVar5 = 0;
            if (iVar16 - iVar17 != 0) {
              uVar8 = (longlong)(iVar16 - iVar17);
              do {
                uVar10 = uVar8 >> 1;
                iVar4 = FName::Compare(puVar12 + lVar2 + iVar16,
                                       puVar12 + lVar2 + uVar10 + lVar5 + (longlong)iVar17);
                if (-1 < iVar4) {
                  lVar5 = (ulonglong)((uint)uVar8 & 1) + uVar10 + lVar5;
                }
                uVar8 = uVar10;
              } while (uVar10 != 0);
            }
            iVar17 = iVar17 + (int)lVar5;
            if (iVar16 <= iVar17) break;
            uVar8 = 0;
            if (iVar3 - iVar16 != 0) {
              uVar10 = (longlong)(iVar3 - iVar16);
              do {
                uVar11 = uVar10 >> 1;
                iVar4 = FName::Compare(puVar12 + lVar2 + uVar11 + uVar8 + (longlong)iVar16,
                                       puVar12 + lVar2 + iVar17);
                if (iVar4 < 0) {
                  uVar8 = (ulonglong)((uint)uVar10 & 1) + uVar11 + uVar8;
                }
                uVar10 = uVar11;
              } while (uVar11 != 0);
            }
            iVar4 = (int)uVar8;
            if (iVar4 != 0) {
              uVar8 = uVar8 & 0xffffffff;
              iVar15 = (iVar4 - iVar17) + iVar16;
              iVar13 = iVar15;
              do {
                iVar6 = (int)uVar8;
                uVar7 = iVar13 % iVar6;
                uVar8 = (ulonglong)uVar7;
                iVar13 = iVar6;
              } while (uVar7 != 0);
              uVar8 = 0;
              if (0 < iVar6) {
                puVar14 = puVar12 + lVar2 + iVar17;
                do {
                  local_60 = *puVar14;
                  iVar13 = (int)uVar8;
                  uVar10 = (longlong)iVar15 / (longlong)iVar6 & 0xffffffff;
                  uVar18 = local_60;
                  if (0 < (int)((longlong)iVar15 / (longlong)iVar6)) {
                    do {
                      uVar11 = (longlong)((int)uVar8 + iVar4) % (longlong)iVar15;
                      uVar8 = uVar11 & 0xffffffff;
                      puVar1 = puVar12 + lVar2 + ((int)uVar11 + iVar17);
                      uVar19 = uVar18;
                      if (puVar1 != &local_60) {
                        uVar19 = *puVar1;
                        *puVar1 = uVar18;
                      }
                      uVar10 = uVar10 - 1;
                      uVar18 = uVar19;
                    } while (uVar10 != 0);
                  }
                  uVar7 = iVar13 + 1;
                  uVar8 = (ulonglong)uVar7;
                  puVar14 = puVar14 + 1;
                } while ((int)uVar7 < iVar6);
              }
            }
            iVar17 = iVar17 + 1 + iVar4;
            iVar16 = iVar16 + iVar4;
          } while (iVar17 < iVar16);
          uVar10 = (ulonglong)param_2;
          lVar5 = local_48;
          uVar8 = local_40;
          puVar12 = local_58;
        }
        local_74 = local_74 + local_70 * 2;
        local_50 = local_50 + lVar5;
      } while (local_50 < (longlong)uVar8);
      local_70 = iVar9;
    } while (iVar9 < (int)uVar10);
  }
  return;
}



// FUNCTION 142cb17a0 FUN_142cb17a0 body=274 status=ok
// SIG undefined FUN_142cb17a0(void)

undefined8 * FUN_142cb17a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_143fde4c8;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RootComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"Arms",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142e5c1e0();
  lVar4 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = lVar4;
  *(uint *)(lVar4 + 0x398) = *(uint *)(lVar4 + 0x398) | 1;
  *(byte *)(param_1[0x8c] + 0x2f3) = *(byte *)(param_1[0x8c] + 0x2f3) | 8;
  FUN_142398e60(param_1[0x8c],0,0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8c],param_1[0x2d],0);
  (**(code **)(*(longlong *)param_1[0x8c] + 0x638))((longlong *)param_1[0x8c],0);
  *(undefined1 *)(param_1 + 0x8b) = 1;
  return param_1;
}



// FUNCTION 142cb18c0 FUN_142cb18c0 body=2023 status=ok
// SIG undefined FUN_142cb18c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cb18c0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  wchar_t *pwVar12;
  undefined8 local_res8;
  longlong local_res10;
  undefined8 local_48;
  longlong local_40;
  undefined2 *local_38;
  undefined8 local_30;
  
  local_res8 = DAT_146aefaf8;
  lVar7 = FName::GetComparisonNameEntry(&local_res8);
  if (lVar7 == 0) {
    local_48 = (undefined2 *)0x0;
    local_40 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    FGenericPlatformString::Memcpy(local_48,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar7,&local_48);
  }
  puVar11 = &DAT_143f3eda8;
  if ((int)local_40 != 0) {
    puVar11 = local_48;
  }
  FUN_141784790(param_2,puVar11);
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar8 = FUN_142e39920();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res8,uVar8,param_2);
  local_res10 = DAT_146aefaf0;
  lVar7 = FName::GetComparisonNameEntry(&local_res10);
  if (lVar7 == 0) {
    local_38 = (undefined2 *)0x0;
    local_30 = 10;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
    FGenericPlatformString::Memcpy(local_38,L"*INVALID*",0x14);
  }
  else {
    FNameEntry::GetPlainNameString(lVar7,&local_38);
  }
  puVar11 = &DAT_143f3eda8;
  if ((int)local_30 != 0) {
    puVar11 = local_38;
  }
  FUN_141784790(param_2,puVar11);
  if (local_38 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  uVar8 = FUN_142e5c1e0();
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,local_res10,uVar8,param_2);
  FUN_1422ff290(param_1);
  *param_1 = &PTR_FUN_1458529e8;
  plVar1 = param_1 + 0x136;
  param_1[0x8b] = &PTR_LAB_145853468;
  param_1[0x116] = &PTR_LAB_1458534c0;
  param_1[0x117] = &PTR_LAB_1458534e8;
  param_1[0x118] = &PTR_LAB_145853540;
  param_1[0x119] = &PTR_LAB_145853578;
  param_1[0x11a] = &PTR_LAB_145853590;
  param_1[0x11b] = &PTR_LAB_1458535d8;
  param_1[0x11c] = &PTR_LAB_145853600;
  param_1[0x11d] = &PTR_LAB_145853628;
  param_1[0x11e] = &PTR_LAB_145853670;
  param_1[0x11f] = &PTR_LAB_145853688;
  param_1[0x132] = 0;
  param_1[0x133] = 0;
  param_1[0x134] = 0;
  param_1[0x135] = 0;
  *plVar1 = 0;
  param_1[0x137] = 0;
  param_1[0x13b] = 0;
  param_1[0x13c] = 0;
  FUN_141f84110(param_1 + 0x13d);
  FUN_142c62aa0(param_1 + 0x140);
  param_1[0x145] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x149) = 0;
  *(undefined4 *)((longlong)param_1 + 0xab4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x157) = 0;
  *(undefined4 *)((longlong)param_1 + 0xabc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)((longlong)param_1 + 0xac4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x159) = 0;
  param_1[0x15a] = 0;
  param_1[0x15b] = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x14a,0,0x90);
  *(undefined4 *)((longlong)param_1 + 0xa5c) = 0x3f800000;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x148,0,0xa8);
  param_1[0x15d] = 0;
  *(undefined1 *)(param_1 + 0x15e) = 0;
  *(undefined2 *)((longlong)param_1 + 0xaf2) = 0;
  param_1[0x15f] = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  *(undefined2 *)((longlong)param_1 + 0xb02) = 0;
  param_1[0x161] = 0;
  *(undefined1 *)(param_1 + 0x163) = 0;
  param_1[0x174] = 0;
  param_1[0x175] = 0;
  param_1[0x179] = 0;
  param_1[0x17c] = 0;
  param_1[0x17d] = 0;
  param_1[0x180] = 0;
  param_1[0x181] = 0;
  *(undefined4 *)(param_1 + 0x182) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc14) = 0;
  param_1[0x184] = 0;
  *(undefined4 *)(param_1 + 0x185) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc34) = 0;
  *(undefined4 *)(param_1 + 0x187) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc3c) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xc44) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc54) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc5c) = 0;
  param_1[0x18c] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18d) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0xc6c) = 0;
  *(undefined1 *)(param_1 + 0x18e) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc74) = 0xffffffff;
  *(undefined4 *)(param_1 + 399) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc7c) = 0xffffffff;
  param_1[400] = 0;
  param_1[0x191] = 0;
  param_1[0x192] = 0;
  *(undefined4 *)(param_1 + 0x193) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc9c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0xca4) = DAT_1468b5d98;
  *(undefined1 *)(param_1 + 0x195) = 0;
  *(undefined1 *)((longlong)param_1 + 0xcac) = 0;
  *(undefined4 *)(param_1 + 0x196) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcb4) = 0;
  *(undefined4 *)(param_1 + 0x197) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0xcbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xcc4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xccc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xcd4) = 0;
  param_1[0x19b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x19c) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0xce4) = 0;
  *(undefined4 *)((longlong)param_1 + 0xce9) = 0;
  *(undefined2 *)((longlong)param_1 + 0xced) = 0;
  *(undefined1 *)((longlong)param_1 + 0xc34) = 7;
  *(undefined1 *)(param_1 + 0x18e) = 8;
  *(undefined1 *)((longlong)param_1 + 0xcac) = 0;
  param_1[0x19f] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a5] = 0;
  param_1[0x1a6] = 0;
  param_1[0x1a7] = 0;
  param_1[0x1a9] = 0;
  param_1[0x1aa] = 0;
  param_1[0x120] = param_1[0x99];
  *(undefined1 *)(param_1 + 0x1ae) = 1;
  uVar8 = DAT_146b31348;
  uVar9 = FUN_142e79d90();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x121] = uVar8;
  uVar8 = DAT_146b31370;
  uVar9 = UScrollBox::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x122] = uVar8;
  uVar8 = DAT_146b31378;
  uVar9 = FUN_142e0a580();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x123] = uVar8;
  uVar8 = DAT_146b31380;
  uVar9 = UThrobber::GetPrivateStaticClass();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x125] = uVar8;
  uVar8 = DAT_146b31390;
  uVar9 = FUN_142e0ffb0();
  uVar8 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x126] = uVar8;
  uVar8 = DAT_146b31388;
  uVar9 = FUN_142e27720();
  lVar7 = FUN_141752410(param_1,uVar8,uVar9,uVar9,0,0,0);
  param_1[0x124] = lVar7;
  if (lVar7 != 0) {
    *(undefined1 *)(lVar7 + 0x14c) = 1;
  }
  pwVar10 = _guard_xfg_dispatch_icall_nop(L"&AGbxCharacter::OnLandingDataTriggered",L"::");
  pwVar12 = (wchar_t *)0x0;
  while (pwVar6 = pwVar10, pwVar6 != (wchar_t *)0x0) {
    pwVar10 = _guard_xfg_dispatch_icall_nop(pwVar6 + 1,L"::");
    pwVar12 = pwVar6;
  }
  FName::FName(&local_res10,pwVar12 + 2,1);
  lVar7 = local_res10;
  FWeakObjectPtr::operator=(&local_48,0);
  local_40 = 0;
  FWeakObjectPtr::operator=(&local_48,param_1);
  local_40 = lVar7;
  local_res8 = 0;
  if ((lVar7 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_40);
  }
  TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar1);
  iVar3 = *(int *)(param_1 + 0x137);
  lVar7 = (longlong)iVar3;
  *(int *)(param_1 + 0x137) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x9bc) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar3);
  }
  lVar4 = *plVar1;
  *(undefined4 *)(lVar4 + lVar7 * 0x10) = (undefined4)local_48;
  *(undefined4 *)(lVar4 + 4 + lVar7 * 0x10) = local_48._4_4_;
  *(longlong *)(lVar4 + 8 + lVar7 * 0x10) = local_40;
  *(uint *)(param_1 + 0x8c) = *(uint *)(param_1 + 0x8c) & 0xffffffdf;
  *(undefined1 *)((longlong)param_1 + 0xbb4) = 0;
  *(float *)(param_1 + 0x176) = *(float *)((longlong)param_1 + 0x464) * 0.5;
  *(undefined4 *)((longlong)param_1 + 0xbc4) = 0x3f000000;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(float *)((longlong)param_1 + 0xbbc) = *(float *)(param_1 + 0xad) * 0.5;
  if (param_1[0x122] != 0) {
    FUN_142350b20(param_1[0x122],CONCAT71((int7)((ulonglong)lVar4 >> 8),1));
  }
  pwVar12 = (wchar_t *)param_1[0x98];
  if (pwVar12 != (wchar_t *)0x0) {
    lVar7 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_142cb204a;
  }
  pwVar12 = (wchar_t *)0x0;
LAB_142cb204a:
  param_1[0x143] = pwVar12;
  if (pwVar12 != (wchar_t *)0x0) {
    *(undefined1 *)((longlong)pwVar12 + 0xeaf) = 1;
    *(undefined1 *)(param_1[0x143] + 0x878) = 2;
  }
  *(undefined1 *)((longlong)param_1 + 0x469) = 0;
  param_1[0x8e] = 0;
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  if (param_1[0x9a] != 0) {
    pbVar2 = (byte *)(param_1[0x9a] + 0x2ef);
    *pbVar2 = *pbVar2 | 0x10;
  }
  return param_1;
}



// FUNCTION 142cb20b0 FUN_142cb20b0 body=137 status=ok
// SIG undefined FUN_142cb20b0(void)

undefined4 * FUN_142cb20b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  FUN_140729f20(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = param_2[0x2a];
  param_1[0x2b] = param_2[0x2b];
  *(undefined8 *)(param_1 + 0x2c) = *(undefined8 *)(param_2 + 0x2c);
  return param_1;
}



// FUNCTION 142cb2290 FUN_142cb2290 body=36 status=ok
// SIG undefined FUN_142cb2290(void)

undefined4 * FUN_142cb2290(undefined4 *param_1,longlong param_2)

{
  undefined4 uVar1;
  
  *param_1 = *(undefined4 *)(param_2 + 4);
  uVar1 = FUN_14247f5a0(param_2);
  param_1[1] = uVar1;
  return param_1;
}



// FUNCTION 142cb22c0 CVSToolsListBox body=52 status=ok
// SIG undefined CVSToolsListBox(CVSToolsListBox * this, CMFCToolBarsToolsPropertyPage * param_1)

/* Library Function - Single Match
    public: __cdecl CVSToolsListBox::CVSToolsListBox(class CMFCToolBarsToolsPropertyPage * __ptr64)
   __ptr64
   
   Libraries: Visual Studio 2012 Release, Visual Studio 2015 Release */

CVSToolsListBox * __thiscall
CVSToolsListBox::CVSToolsListBox(CVSToolsListBox *this,CMFCToolBarsToolsPropertyPage *param_1)

{
  FUN_142c8c300();
  *(CMFCToolBarsToolsPropertyPage **)(this + 0x6c8) = param_1;
  *(undefined ***)this = &PTR__scalar_deleting_destructor__145853af0;
  return this;
}



// FUNCTION 142cb2300 FUN_142cb2300 body=44 status=ok
// SIG undefined FUN_142cb2300(void)

undefined8 * FUN_142cb2300(undefined8 *param_1)

{
  FUN_142c8c340();
  param_1[0xd9] = 0;
  *param_1 = &PTR__scalar_deleting_destructor__145853af0;
  return param_1;
}



// FUNCTION 142cb2330 FUN_142cb2330 body=279 status=ok
// SIG undefined FUN_142cb2330(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_142cb2330(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0xc) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x10) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x18) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x1c) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x24) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x28) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x30) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x34) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x3c) = DAT_1468b5d98;
  *(undefined8 *)(param_1 + 0x40) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x48) = DAT_1468b5d98;
  FUN_142cb2450(param_1 + 0x4c);
  param_1[0x88] = param_1[0x88] & 0xfe;
  param_1[0x8c] = 0;
  FUN_142cb2450(param_1 + 0x90);
  FUN_142cb2450(param_1 + 0xcc);
  FUN_142cb2450(param_1 + 0x108);
  param_1[0x144] = 0;
  param_1[0x148] = 0;
  FUN_142cb2450(param_1 + 0x14c);
  FUN_142cb2450(param_1 + 0x188);
  FUN_142cb2450(param_1 + 0x1c4);
  *(undefined4 *)(param_1 + 0x200) = 0xffffffff;
  param_1[0x204] = 0;
  return param_1;
}



// FUNCTION 142cb2450 FUN_142cb2450 body=120 status=ok
// SIG undefined FUN_142cb2450(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cb2450(undefined8 *param_1)

{
  *param_1 = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 1) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
  param_1[3] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 4) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  FWeakObjectPtr::operator=(param_1 + 6,0);
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) & 0xfe;
  return param_1;
}



// FUNCTION 142cb24d0 FUN_142cb24d0 body=162 status=ok
// SIG undefined FUN_142cb24d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cb24d0(undefined8 *param_1)

{
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xf8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)((longlong)param_1 + 0x24) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x2c) = DAT_1468b5d98;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_142cb2330((longlong)param_1 + 0x44);
  FUN_142cb2330((longlong)param_1 + 0x24c);
  param_1[0x8c] = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 0x8e,0,0x68);
  FUN_142cb2330(param_1 + 0x9b);
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return param_1;
}



// FUNCTION 142cb2580 FUN_142cb2580 body=86 status=ok
// SIG undefined FUN_142cb2580(void)

longlong * FUN_142cb2580(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 2) = 1;
    FUN_1407eebb0(param_1,0);
    plVar1 = (longlong *)param_1[1];
    if ((longlong *)param_1[1] == (longlong *)0x0) {
      plVar1 = param_1;
    }
    *plVar1 = param_2;
  }
  return param_1;
}



// FUNCTION 142cb25e0 FUN_142cb25e0 body=197 status=ok
// SIG undefined FUN_142cb25e0(void)

undefined8 * FUN_142cb25e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_146b30f40;
  iVar2 = DAT_146b30f68;
  lVar4 = (longlong)DAT_146b30f68;
  if (0 < DAT_146b30f68) {
    plVar3 = DAT_146b30f60;
    if (DAT_146b30f60 == (longlong *)0x0) {
      plVar3 = (longlong *)&DAT_146b30f40;
    }
    plVar1 = plVar3 + lVar4;
    if (plVar3 != plVar1) {
      do {
        if (*plVar3 == *param_2) {
          *(undefined1 *)(param_1 + 1) = 1;
          return param_1;
        }
        plVar3 = plVar3 + 1;
      } while (plVar3 != plVar1);
    }
  }
  DAT_146b30f68 = DAT_146b30f68 + 1;
  if (DAT_146b30f6c < DAT_146b30f68) {
    TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
              (&DAT_146b30f40,iVar2);
  }
  plVar3 = DAT_146b30f60;
  if (DAT_146b30f60 == (longlong *)0x0) {
    plVar3 = (longlong *)&DAT_146b30f40;
  }
  plVar3[lVar4] = *param_2;
  return param_1;
}



// FUNCTION 142cb26b0 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_145852458;
  return param_1;
}



// FUNCTION 142cb26e0 FUN_142cb26e0 body=161 status=ok
// SIG undefined FUN_142cb26e0(void)

undefined8 * FUN_142cb26e0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14584fce8;
  param_1[5] = &PTR_LAB_145850140;
  param_1[0x2f] = &PTR_LAB_145850170;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(undefined2 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 1;
  *(undefined4 *)(param_1 + 0x35) = 1;
  return param_1;
}



// FUNCTION 142cb2790 FUN_142cb2790 body=57 status=ok
// SIG undefined FUN_142cb2790(void)

undefined8 * FUN_142cb2790(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlackboardKeyType::UBlackboardKeyType(param_1,uVar1);
  *param_1 = &PTR_FUN_145850188;
  *(undefined2 *)(param_1 + 5) = 0xc;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142cb27d0 FUN_142cb27d0 body=65 status=ok
// SIG undefined FUN_142cb27d0(void)

undefined8 * FUN_142cb27d0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlackboardKeyType::UBlackboardKeyType(param_1,uVar1);
  *param_1 = &PTR_FUN_1458504a8;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 142cb2820 FUN_142cb2820 body=57 status=ok
// SIG undefined FUN_142cb2820(void)

undefined8 * FUN_142cb2820(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UBlackboardKeyType::UBlackboardKeyType(param_1,uVar1);
  *param_1 = &PTR_FUN_1458507c8;
  *(undefined2 *)(param_1 + 5) = 0x390;
  *(undefined1 *)((longlong)param_1 + 0x2a) = 0;
  return param_1;
}



// FUNCTION 142cb2860 FUN_142cb2860 body=187 status=ok
// SIG undefined FUN_142cb2860(void)

undefined8 * FUN_142cb2860(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_142d7a730(param_1,uVar1);
  *param_1 = &PTR_FUN_145850ae8;
  param_1[5] = &PTR_LAB_145851408;
  param_1[0x5a] = &PTR_LAB_145851438;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  param_1[0xec] = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x77c) = 1;
  return param_1;
}



// FUNCTION 142cb2920 FUN_142cb2920 body=220 status=ok
// SIG undefined FUN_142cb2920(void)

undefined8 * FUN_142cb2920(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_14178c940();
  uVar1 = FUN_14178c940();
  FUN_142d7a730(param_1,uVar1);
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x76c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x774) = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *param_1 = &PTR_FUN_145851490;
  param_1[5] = &PTR_LAB_145851db0;
  param_1[0x5a] = &PTR_LAB_145851de0;
  param_1[0xec] = 0x1010101;
  *(undefined1 *)((longlong)param_1 + 0x77c) = 1;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  return param_1;
}



// FUNCTION 142cb2a00 FUN_142cb2a00 body=1303 status=ok
// SIG undefined FUN_142cb2a00(void)

undefined8 * FUN_142cb2a00(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR_FUN_145852710;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x15);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x25);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x34);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x43);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x53);
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 99);
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  *(undefined4 *)(param_1 + 0x79) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  *(undefined4 *)(param_1 + 0x80) = 0x3f800000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x82);
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0x3f800000;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0x3f800000;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xaf) = 0x3f800000;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0x3f800000;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined4 *)(param_1 + 0xbd) = 0x3f800000;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc5) = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0x3f800000;
  param_1[0xcd] = 0;
  param_1[0xce] = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  *(undefined4 *)(param_1 + 0xd2) = 0x3f800000;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  *(undefined4 *)(param_1 + 0xd9) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  param_1[0xdc] = 0;
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  *(undefined4 *)(param_1 + 0xe1) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  param_1[0xe8] = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  *(undefined4 *)(param_1 + 0xeb) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xee) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  *(undefined4 *)(param_1 + 0x103) = 0x3f800000;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  *(undefined4 *)(param_1 + 0x10a) = 0x3f800000;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x111) = 0x3f800000;
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) | 0x1000080c;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(uint *)((longlong)param_1 + 0x2c) = *(uint *)((longlong)param_1 + 0x2c) & 0xffffdfff | 0x401;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined4 *)((longlong)param_1 + 0x394) = 0x42c80000;
  *(undefined4 *)((longlong)param_1 + 0x4cc) = 0x42c80000;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined4 *)(param_1 + 0xd3) = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined4 *)(param_1 + 0x91) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x9b) = 0xc1f00000;
  *(undefined4 *)(param_1 + 0xa2) = 0x41f00000;
  *(undefined4 *)(param_1 + 0xa9) = 0x425c0000;
  *(undefined4 *)(param_1 + 0xb0) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb7) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xbe) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xcc) = 0x42700000;
  *(undefined4 *)(param_1 + 0x104) = 0x43dc0000;
  *(undefined4 *)(param_1 + 0x10b) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xfb) = 0x42b40000;
  *(undefined4 *)(param_1 + 0x112) = 0x42b40000;
  *(undefined1 *)(param_1 + 0xfc) = 3;
  return param_1;
}



// FUNCTION 142cb2f20 FUN_142cb2f20 body=1084 status=ok
// SIG undefined FUN_142cb2f20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cb2f20(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  
  FUN_142326e40();
  uVar9 = uRam0000000146b30eac;
  uVar6 = uRam0000000146b30ea8;
  uVar4 = uRam0000000146b30ea4;
  uVar7 = _DAT_146b30ea0;
  *param_1 = &PTR_FUN_1458536a0;
  param_1[5] = &PTR_LAB_145853ac0;
  param_1[0x2f] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  uVar3 = uRam0000000146b30e9c;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(uint *)((longlong)param_1 + 0x1bc) = uVar3;
  uVar3 = uRam0000000146b30e94 & uVar4;
  uVar5 = uRam0000000146b30e98 & uVar6;
  uVar8 = uRam0000000146b30e9c & uVar9;
  *(uint *)(param_1 + 0x3a) = _DAT_146b30e90 & uVar7;
  *(uint *)((longlong)param_1 + 0x1d4) = uVar3;
  *(uint *)(param_1 + 0x3b) = uVar5;
  *(uint *)((longlong)param_1 + 0x1dc) = uVar8;
  uVar3 = uRam0000000146b30e9c;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(uint *)((longlong)param_1 + 0x1ec) = uVar3;
  uVar3 = uRam0000000146b30e94 & uVar4;
  uVar5 = uRam0000000146b30e98 & uVar6;
  uVar8 = uRam0000000146b30e9c & uVar9;
  *(uint *)(param_1 + 0x40) = _DAT_146b30e90 & uVar7;
  *(uint *)((longlong)param_1 + 0x204) = uVar3;
  *(uint *)(param_1 + 0x41) = uVar5;
  *(uint *)((longlong)param_1 + 0x20c) = uVar8;
  uVar3 = uRam0000000146b30e9c;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(uint *)((longlong)param_1 + 0x21c) = uVar3;
  uVar4 = uRam0000000146b30e94 & uVar4;
  uVar6 = uRam0000000146b30e98 & uVar6;
  uVar9 = uRam0000000146b30e9c & uVar9;
  *(uint *)(param_1 + 0x46) = _DAT_146b30e90 & uVar7;
  *(uint *)((longlong)param_1 + 0x234) = uVar4;
  *(uint *)(param_1 + 0x47) = uVar6;
  *(uint *)((longlong)param_1 + 0x23c) = uVar9;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0xbe800000;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0xbe800000;
  *(undefined4 *)(param_1 + 0x50) = 0xbe800000;
  *(undefined4 *)((longlong)param_1 + 0x284) = 0x40000000;
  *(undefined4 *)(param_1 + 0x51) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x28c) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x52) = 0x40c00000;
  *(undefined4 *)((longlong)param_1 + 0x294) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x53) = 0xc0c00000;
  *(undefined4 *)((longlong)param_1 + 0x29c) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x54) = 0xc0c00000;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  *(undefined4 *)(param_1 + 0x57) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 700) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x58) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2d4) = 0x40000000;
  *(undefined4 *)(param_1 + 0x5b) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x40400000;
  *(undefined4 *)(param_1 + 0x5c) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x40400000;
  *(undefined4 *)(param_1 + 0x5d) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x2ec) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x5e) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x5f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x2fc) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x62) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x40800000;
  *(undefined4 *)(param_1 + 99) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0x40400000;
  *(undefined4 *)(param_1 + 100) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x324) = 0xc0400000;
  *(undefined4 *)(param_1 + 0x65) = 0xc0400000;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0xc0400000;
  FName::FName(param_1 + 0x66,L"Muzzle",1);
  param_1[0x6c] = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x3dcccccd;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x6e) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x374) = 0x3f4ccccd;
  *(undefined4 *)(param_1 + 0x6f) = 0x3f800000;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  uVar3 = uRam0000000146b30e9c;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3d4) = 0;
  *(undefined4 *)(param_1 + 0x7b) = 0;
  *(uint *)((longlong)param_1 + 0x3dc) = uVar3;
  uVar3 = uRam0000000146b30e94 & uRam0000000146b30ea4;
  uVar7 = uRam0000000146b30e98 & uRam0000000146b30ea8;
  uVar4 = uRam0000000146b30e9c & uRam0000000146b30eac;
  *(uint *)(param_1 + 0x7e) = _DAT_146b30e90 & _DAT_146b30ea0;
  *(uint *)((longlong)param_1 + 0x3f4) = uVar3;
  *(uint *)(param_1 + 0x7f) = uVar7;
  *(uint *)((longlong)param_1 + 0x3fc) = uVar4;
  *(undefined1 *)(param_1 + 0x85) = 0;
  *(undefined1 *)(param_1 + 0x87) = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  *(undefined1 *)(param_1 + 0x97) = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"SpineEnd",1);
  param_1[0x32] = *puVar2;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"Camera",1);
  param_1[0x33] = *puVar2;
  puVar2 = (undefined8 *)FName::FName(local_res8,L"R_Hand_Weapon",1);
  uVar1 = *puVar2;
  param_1[0x68] = 0x40a0000040a00000;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfb | 2;
  *(undefined4 *)(param_1 + 0x69) = 0x40a00000;
  *(undefined8 *)((longlong)param_1 + 0x34c) = 0x40a0000040a00000;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0x40a00000;
  param_1[0x34] = uVar1;
  *(undefined4 *)(param_1 + 0x48) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x3ac) = 0x3f800000;
  return param_1;
}



// FUNCTION 142cb3360 FUN_142cb3360 body=54 status=ok
// SIG undefined FUN_142cb3360(void)

undefined8 * FUN_142cb3360(undefined8 *param_1)

{
  UChannel::UChannel();
  *param_1 = &PTR_FUN_145851e38;
  *(undefined4 *)(param_1 + 0xd) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 7;
  return param_1;
}



// FUNCTION 142cb33a0 FUN_142cb33a0 body=1134 status=ok
// SIG undefined FUN_142cb33a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142cb33a0(undefined8 *param_1)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_1c;
  
  FUN_1422552b0();
  *param_1 = &PTR__scalar_deleting_destructor__1441ebe18;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x49c) = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x97));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x97),4000);
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  uVar13 = uRam0000000146b30eac;
  uVar11 = uRam0000000146b30ea8;
  uVar9 = uRam0000000146b30ea4;
  uVar6 = _DAT_146b30ea0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xa4] = 0;
  *(undefined4 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *param_1 = &PTR_FUN_145853b68;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined2 *)(param_1 + 0xc6) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x632) = 1;
  *(undefined1 *)((longlong)param_1 + 0x644) = 0;
  uVar8 = uRam0000000146b30e9c;
  param_1[0xcc] = 0;
  param_1[0xcd] = 0;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((longlong)param_1 + 0x654) = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  *(uint *)((longlong)param_1 + 0x65c) = uVar8;
  uVar8 = uRam0000000146b30e94 & uVar9;
  uVar10 = uRam0000000146b30e98 & uVar11;
  uVar12 = uRam0000000146b30e9c & uVar13;
  *(uint *)(param_1 + 0xce) = _DAT_146b30e90 & uVar6;
  *(uint *)((longlong)param_1 + 0x674) = uVar8;
  *(uint *)(param_1 + 0xcf) = uVar10;
  *(uint *)((longlong)param_1 + 0x67c) = uVar12;
  uVar8 = uRam0000000146b30e9c;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined4 *)((longlong)param_1 + 0x684) = 0;
  *(undefined4 *)(param_1 + 0xd1) = 0;
  *(uint *)((longlong)param_1 + 0x68c) = uVar8;
  uVar8 = uRam0000000146b30e94 & uVar9;
  uVar10 = uRam0000000146b30e98 & uVar11;
  uVar12 = uRam0000000146b30e9c & uVar13;
  *(uint *)(param_1 + 0xd4) = _DAT_146b30e90 & uVar6;
  *(uint *)((longlong)param_1 + 0x6a4) = uVar8;
  *(uint *)(param_1 + 0xd5) = uVar10;
  *(uint *)((longlong)param_1 + 0x6ac) = uVar12;
  uVar8 = uRam0000000146b30e9c;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6b4) = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  *(uint *)((longlong)param_1 + 0x6bc) = uVar8;
  uVar8 = uRam0000000146b30e94 & uVar9;
  uVar10 = uRam0000000146b30e98 & uVar11;
  uVar12 = uRam0000000146b30e9c & uVar13;
  *(uint *)(param_1 + 0xda) = _DAT_146b30e90 & uVar6;
  *(uint *)((longlong)param_1 + 0x6d4) = uVar8;
  *(uint *)(param_1 + 0xdb) = uVar10;
  *(uint *)((longlong)param_1 + 0x6dc) = uVar12;
  *(undefined1 *)((longlong)param_1 + 0x6e1) = 0;
  param_1[0xdd] = 0;
  uVar8 = uRam0000000146b30e9c;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined4 *)(param_1 + 0xde) = 0;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0;
  *(undefined4 *)(param_1 + 0xdf) = 0;
  *(uint *)((longlong)param_1 + 0x6fc) = uVar8;
  uVar9 = uRam0000000146b30e94 & uVar9;
  uVar11 = uRam0000000146b30e98 & uVar11;
  uVar13 = uRam0000000146b30e9c & uVar13;
  *(uint *)(param_1 + 0xe2) = _DAT_146b30e90 & uVar6;
  *(uint *)((longlong)param_1 + 0x714) = uVar9;
  *(uint *)(param_1 + 0xe3) = uVar11;
  *(uint *)((longlong)param_1 + 0x71c) = uVar13;
  *(undefined1 *)((longlong)param_1 + 0x721) = 0;
  param_1[0xe5] = 0;
  FUN_142c62900(param_1 + 0xf0);
  FUN_142c626b0(param_1 + 0x104);
  *(undefined4 *)((longlong)param_1 + 0x83c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x108) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x856) = 1;
  *(undefined4 *)(param_1 + 0x10b) = 0x3f800000;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0;
  param_1[0x114] = 0;
  *(undefined4 *)(param_1 + 0x115) = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0x3dcccccd;
  FName::FName(&local_res8,&DAT_14525c540,1);
  plVar1 = param_1 + 0x121;
  param_1[0x11e] = local_res8;
  *(undefined4 *)(param_1 + 0x11f) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x8fc) = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *plVar1 = 0;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0x3f733333;
  *(undefined4 *)((longlong)param_1 + 0x91c) = 0x3e99999a;
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"L_Foot_to_Root",1);
  FName::FName(local_res18,L"L_Foot",1);
  uVar4 = *puVar7;
  iVar3 = *(int *)(param_1 + 0x122);
  uVar8 = uStack_2c >> 8;
  uStack_2c = uVar8 << 8;
  *(int *)(param_1 + 0x122) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x914) < iVar3 + 1) {
    FUN_142937a60(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  local_38 = (undefined4)uVar4;
  uStack_34 = (undefined4)((ulonglong)uVar4 >> 0x20);
  puVar2 = (undefined4 *)((longlong)iVar3 * 0x20 + lVar5);
  *puVar2 = local_38;
  puVar2[1] = uStack_34;
  puVar2[2] = 0xffffffff;
  puVar2[3] = uStack_2c;
  puVar2 = (undefined4 *)((longlong)iVar3 * 0x20 + 0x10 + lVar5);
  *puVar2 = 0xffffffff;
  puVar2[1] = uStack_24;
  puVar2[2] = 0xbf800000;
  puVar2[3] = uStack_1c;
  puVar7 = (undefined8 *)FName::FName(&local_res8,L"R_Foot_to_Root",1);
  FName::FName(local_res18,L"R_Foot",1);
  uVar4 = *puVar7;
  iVar3 = *(int *)(param_1 + 0x122);
  uStack_2c = uVar8 << 8;
  *(int *)(param_1 + 0x122) = iVar3 + 1;
  if (*(int *)((longlong)param_1 + 0x914) < iVar3 + 1) {
    FUN_142937a60(plVar1,iVar3);
  }
  lVar5 = *plVar1;
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x20 + lVar5);
  *puVar7 = uVar4;
  puVar7[1] = CONCAT44(uStack_2c,0xffffffff);
  puVar7 = (undefined8 *)((longlong)iVar3 * 0x20 + 0x10 + lVar5);
  *puVar7 = CONCAT44(uStack_24,0xffffffff);
  puVar7[1] = CONCAT44(uStack_1c,0xbf800000);
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0x40800000;
  *(undefined4 *)((longlong)param_1 + 0x92c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x126) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x934) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x127) = 2;
  *(undefined4 *)((longlong)param_1 + 0x93c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x128) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x944) = 0x40800000;
  *(undefined4 *)(param_1 + 0x129) = 0x3fc00000;
  return param_1;
}



// FUNCTION 142cb3810 UBlueprintFunctionLibrary body=33 status=ok
// SIG undefined UBlueprintFunctionLibrary(void)

undefined8 * UBlueprintFunctionLibrary::UBlueprintFunctionLibrary(undefined8 *param_1)

{
  UHoudiniLandscapePtr::UHoudiniLandscapePtr();
  *param_1 = &PTR_FUN_14584f4a8;
  return param_1;
}



// FUNCTION 142cb3840 FUN_142cb3840 body=260 status=ok
// SIG undefined FUN_142cb3840(void)

undefined8 * FUN_142cb3840(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_14584f728;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(undefined4 *)(param_1 + 0x21) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x22) = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  return param_1;
}



// FUNCTION 142cb3950 FUN_142cb3950 body=75 status=ok
// SIG undefined FUN_142cb3950(void)

undefined8 * FUN_142cb3950(undefined8 *param_1)

{
  UChannel::UChannel();
  *param_1 = &PTR__scalar_deleting_destructor__145852138;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) & 0xfffffff0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((longlong)param_1 + 0x44) = 5;
  return param_1;
}



// FUNCTION 142cb39a0 FUN_142cb39a0 body=119 status=ok
// SIG undefined FUN_142cb39a0(void)

undefined8 * FUN_142cb39a0(undefined8 *param_1)

{
  FUN_142c8d050();
  *param_1 = &PTR_FUN_14584fa08;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0x3f800000;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0x3f800000;
  *(undefined4 *)(param_1 + 5) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xd) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xc) = 2;
  return param_1;
}



// FUNCTION 142cb3a20 FUN_142cb3a20 body=158 status=ok
// SIG undefined FUN_142cb3a20(void)

void FUN_142cb3a20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x7b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x790) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x780) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x738) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x720) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x710) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  return;
}



// FUNCTION 142cb3ac0 FUN_142cb3ac0 body=343 status=ok
// SIG undefined FUN_142cb3ac0(void)

undefined1 * FUN_142cb3ac0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x34) = *(undefined8 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  param_1[0x84] = param_1[0x84] ^ (param_2[0x84] ^ param_1[0x84]) & 1;
  param_1[0x88] = param_1[0x88] ^ (param_2[0x88] ^ param_1[0x88]) & 1;
  FUN_142cb3c20(param_1 + 0x8c,param_2 + 0x8c);
  param_1[0x144] = param_2[0x144];
  FUN_142cb3c20(param_1 + 0x148,param_2 + 0x148);
  *(undefined8 *)(param_1 + 0x200) = *(undefined8 *)(param_2 + 0x200);
  return param_1;
}



// FUNCTION 142cb3c20 FUN_142cb3c20 body=336 status=ok
// SIG undefined FUN_142cb3c20(void)

undefined1 * FUN_142cb3c20(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x1c) = *(undefined8 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  param_1[0x3c] = param_1[0x3c] ^ (param_2[0x3c] ^ param_1[0x3c]) & 1;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x4c) = *(undefined8 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 100) = *(undefined8 *)(param_2 + 100);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0x74);
  param_1[0x78] = param_1[0x78] ^ (param_2[0x78] ^ param_1[0x78]) & 1;
  *(undefined8 *)(param_1 + 0x7c) = *(undefined8 *)(param_2 + 0x7c);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_2 + 0x90);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_2 + 0x9c);
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_2 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_2 + 0xac);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_2 + 0xb0);
  param_1[0xb4] = param_1[0xb4] ^ (param_2[0xb4] ^ param_1[0xb4]) & 1;
  return param_1;
}



// FUNCTION 142cb3d70 FUN_142cb3d70 body=991 status=ok
// SIG undefined FUN_142cb3d70(void)

undefined4 * FUN_142cb3d70(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  puVar4 = (undefined8 *)(param_1 + 0x16);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  lVar5 = (longlong)param_2 - (longlong)param_1;
  param_1[2] = param_2[2];
  lVar3 = 4;
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  do {
    *(undefined4 *)(puVar4 + -7) = *(undefined4 *)((longlong)puVar4 + lVar5 + -0x38);
    *(undefined4 *)((longlong)puVar4 + -0x34) = *(undefined4 *)(lVar5 + -0x34 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + -6) = *(undefined4 *)(lVar5 + -0x30 + (longlong)puVar4);
    *(undefined8 *)((longlong)puVar4 + -0x2c) = *(undefined8 *)(lVar5 + -0x2c + (longlong)puVar4);
    *(undefined4 *)((longlong)puVar4 + -0x24) = *(undefined4 *)(lVar5 + -0x24 + (longlong)puVar4);
    puVar4[-4] = *(undefined8 *)(lVar5 + -0x20 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + -3) = *(undefined4 *)(lVar5 + -0x18 + (longlong)puVar4);
    puVar4[-2] = *(undefined8 *)((longlong)puVar4 + lVar5 + -0x10);
    *(undefined1 *)(puVar4 + -1) = *(undefined1 *)((longlong)puVar4 + lVar5 + -8);
    *puVar4 = *(undefined8 *)(lVar5 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + 1) = *(undefined4 *)((longlong)puVar4 + lVar5 + 8);
    *(uint *)((longlong)puVar4 + 0xc) =
         *(uint *)((longlong)puVar4 + 0xc) ^
         (*(uint *)((longlong)puVar4 + 0xc) ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 1;
    uVar2 = (*(uint *)((longlong)puVar4 + 0xc) ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 2 ^
            *(uint *)((longlong)puVar4 + 0xc);
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 4 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 8 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x10 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x20 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x40 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x80 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x100 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0xc) = uVar2;
    *(uint *)((longlong)puVar4 + 0xc) =
         (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0xc)) & 0x200 ^ uVar2;
    puVar4[2] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x10);
    *(undefined4 *)(puVar4 + 3) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x18);
    *(undefined4 *)((longlong)puVar4 + 0x1c) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x1c);
    puVar4[4] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x20);
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x28);
    *(undefined4 *)(puVar4 + 6) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x30);
    *(undefined4 *)((longlong)puVar4 + 0x34) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x34);
    *(undefined4 *)(puVar4 + 7) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x38);
    *(undefined8 *)((longlong)puVar4 + 0x3c) = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x3c);
    *(undefined4 *)((longlong)puVar4 + 0x44) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x44);
    puVar4[9] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x48);
    *(undefined4 *)(puVar4 + 10) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x50);
    puVar4[0xb] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x58);
    *(undefined1 *)(puVar4 + 0xc) = *(undefined1 *)((longlong)puVar4 + lVar5 + 0x60);
    puVar4[0xd] = *(undefined8 *)(lVar5 + 0x68 + (longlong)puVar4);
    *(undefined4 *)(puVar4 + 0xe) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x70);
    *(uint *)((longlong)puVar4 + 0x74) =
         *(uint *)((longlong)puVar4 + 0x74) ^
         (*(uint *)((longlong)puVar4 + 0x74) ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 1;
    uVar2 = (*(uint *)((longlong)puVar4 + 0x74) ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 2 ^
            *(uint *)((longlong)puVar4 + 0x74);
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 4 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 8 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x10 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x20 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x40 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x80 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    uVar2 = (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x100 ^ uVar2;
    *(uint *)((longlong)puVar4 + 0x74) = uVar2;
    *(uint *)((longlong)puVar4 + 0x74) =
         (uVar2 ^ *(uint *)((longlong)puVar4 + lVar5 + 0x74)) & 0x200 ^ uVar2;
    puVar4[0xf] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x78);
    *(undefined4 *)(puVar4 + 0x10) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x80);
    *(undefined4 *)((longlong)puVar4 + 0x84) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x84);
    puVar4[0x11] = *(undefined8 *)((longlong)puVar4 + lVar5 + 0x88);
    *(undefined4 *)(puVar4 + 0x12) = *(undefined4 *)((longlong)puVar4 + lVar5 + 0x90);
    puVar4 = puVar4 + 0x1a;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  param_1[0xd8] = param_2[0xd8];
  *(undefined1 *)(param_1 + 0xda) = *(undefined1 *)(param_2 + 0xda);
  *(undefined8 *)(param_1 + 0xdc) = *(undefined8 *)(param_2 + 0xdc);
  *(undefined1 *)(param_1 + 0xde) = *(undefined1 *)(param_2 + 0xde);
  param_1[0xdf] = param_2[0xdf];
  *(undefined1 *)(param_1 + 0xe0) = *(undefined1 *)(param_2 + 0xe0);
  *(undefined1 *)((longlong)param_1 + 0x381) = *(undefined1 *)((longlong)param_2 + 0x381);
  param_1[0xe1] = param_2[0xe1];
  param_1[0xe2] = param_2[0xe2];
  *(byte *)(param_1 + 0xe3) =
       *(byte *)(param_1 + 0xe3) ^ (*(byte *)(param_1 + 0xe3) ^ *(byte *)(param_2 + 0xe3)) & 1;
  bVar1 = (*(byte *)(param_2 + 0xe3) ^ *(byte *)(param_1 + 0xe3)) & 2 ^ *(byte *)(param_1 + 0xe3);
  *(byte *)(param_1 + 0xe3) = bVar1;
  *(byte *)(param_1 + 0xe3) = (bVar1 ^ *(byte *)(param_2 + 0xe3)) & 4 ^ bVar1;
  return param_1;
}



// FUNCTION 142cb4150 FUN_142cb4150 body=199 status=ok
// SIG undefined FUN_142cb4150(void)

ulonglong FUN_142cb4150(char *param_1,char *param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (*param_1 == *param_2) {
    uVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 4,param_2 + 4);
    if ((char)uVar1 != '\0') {
      uVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(param_1 + 0xc,param_2 + 0xc);
      if (((((((char)uVar1 != '\0') && (*(float *)(param_2 + 0x14) == *(float *)(param_1 + 0x14)))
            && (*(float *)(param_2 + 0x18) == *(float *)(param_1 + 0x18))) &&
           ((*(float *)(param_2 + 0x1c) == *(float *)(param_1 + 0x1c) &&
            (*(float *)(param_2 + 0x20) == *(float *)(param_1 + 0x20))))) &&
          ((*(float *)(param_2 + 0x24) == *(float *)(param_1 + 0x24) &&
           ((*(float *)(param_2 + 0x28) == *(float *)(param_1 + 0x28) &&
            (*(float *)(param_2 + 0x2c) == *(float *)(param_1 + 0x2c))))))) &&
         ((*(float *)(param_2 + 0x30) == *(float *)(param_1 + 0x30) &&
          ((*(float *)(param_2 + 0x34) == *(float *)(param_1 + 0x34) &&
           (uVar1 = 0, param_1[0x38] == param_2[0x38])))))) {
        return 1;
      }
    }
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 142cb4220 FUN_142cb4220 body=19 status=ok
// SIG undefined FUN_142cb4220(void)

bool FUN_142cb4220(void)

{
  char cVar1;
  
  cVar1 = FUN_142cb4150();
  return cVar1 == '\0';
}



// FUNCTION 142cb4240 FUN_142cb4240 body=278 status=ok
// SIG undefined FUN_142cb4240(void)

undefined4 * FUN_142cb4240(longlong *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  plVar2 = (longlong *)FRuntimeFloatCurve::GetRichCurve(*(longlong *)(*param_1 + 8) + 0x218);
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  uVar5 = 0;
  if (iVar1 < 1) {
    uVar3 = 0;
  }
  else {
    uVar3 = FRichCurve::Eval(plVar2,param_3,0);
  }
  plVar2 = (longlong *)FRuntimeFloatCurve::GetRichCurve(*(longlong *)(*param_1 + 8) + 0x1a0);
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (iVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = FRichCurve::Eval(plVar2,param_3,0);
  }
  plVar2 = (longlong *)FRuntimeFloatCurve::GetRichCurve(*(longlong *)(*param_1 + 8) + 0x128);
  iVar1 = (**(code **)(*plVar2 + 8))(plVar2);
  if (0 < iVar1) {
    uVar5 = FRichCurve::Eval(plVar2,param_3,0);
  }
  *param_2 = uVar5;
  param_2[1] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



// FUNCTION 142cb4360 FUN_142cb4360 body=913 status=ok
// SIG undefined FUN_142cb4360(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cb4360(longlong *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  float fVar12;
  undefined1 auStack_568 [32];
  undefined8 local_548;
  float local_540;
  longlong *local_538;
  longlong *local_530;
  undefined1 local_528 [16];
  float local_518;
  float fStack_514;
  float fStack_510;
  undefined4 uStack_50c;
  float local_508;
  float fStack_504;
  float fStack_500;
  undefined4 uStack_4fc;
  undefined1 local_4f8 [16];
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  undefined4 uStack_4dc;
  undefined1 local_4c8 [16];
  float local_4b8;
  float fStack_4b4;
  float fStack_4b0;
  undefined4 uStack_4ac;
  undefined1 local_498 [1136];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_568;
  plVar9 = (longlong *)*param_1;
  lVar11 = plVar9[1];
  if (((lVar11 != 0) && (local_548 = 0, *(longlong *)(lVar11 + 0x40) != 0)) &&
     (*(longlong *)(*plVar9 + 0x11f8) != 0)) {
    FUN_142c848a0(*(longlong *)(*plVar9 + 0x11f8),*(undefined8 *)(lVar11 + 0x40));
    plVar9 = (longlong *)*param_1;
  }
  FUN_142cfaa20(*plVar9,&local_538,*(undefined8 *)(*(longlong *)param_1[1] + 8));
  if (local_538 == (longlong *)0x0) goto LAB_142cb4690;
  lVar11 = local_538[2];
  if (lVar11 == 0) {
LAB_142cb443d:
    lVar11 = 0;
  }
  else {
    lVar6 = UThrobber::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142cb443d;
  }
  plVar9 = local_538;
  if (local_538 == (longlong *)0x0) goto LAB_142cb4690;
  lVar6 = local_538[1];
  lVar7 = FUN_142e219b0();
  for (; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
    if (lVar6 == lVar7) {
      bVar3 = true;
      goto LAB_142cb4474;
    }
  }
  bVar3 = false;
LAB_142cb4474:
  plVar10 = (longlong *)0x0;
  if (bVar3) {
    plVar10 = plVar9;
  }
  lVar6 = FUN_142c6f640(plVar10,1);
  fVar12 = (float)(**(code **)(*local_538 + 0x58))();
  fVar12 = fVar12 * *(float *)(*(longlong *)param_1[1] + 0x108);
  *(float *)(*param_1 + 0x3c) = fVar12;
  *(undefined4 *)param_1[2] = *(undefined4 *)(*(longlong *)param_1[1] + 0x14);
  if (lVar6 == 0) {
LAB_142cb4500:
    lVar6 = 0;
  }
  else {
    lVar7 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_142cb4500;
  }
  *(longlong *)param_1[3] = lVar6;
  if ((*(longlong *)param_1[3] != 0) &&
     (cVar4 = UBlockablePlayerInputComponent::GetIsGrapplingPressed(), cVar4 != '\0')) {
    FUN_142295fa0(*(undefined8 *)param_1[3],local_498);
    iVar5 = FUN_142269cc0(local_498);
    if (0 < iVar5) {
      FTransformCurve::Evaluate
                (local_498,local_4f8,*(undefined4 *)(*(longlong *)param_1[1] + 0x14),0x3f800000);
      FTransformCurve::Evaluate(local_498,local_4c8,fVar12,0x3f800000);
      puVar2 = (undefined8 *)param_1[4];
      local_508 = local_4b8;
      fStack_504 = fStack_4b4;
      fStack_500 = fStack_4b0;
      uStack_4fc = uStack_4ac;
      local_518 = local_4e8;
      fStack_514 = fStack_4e4;
      fStack_510 = fStack_4e0;
      uStack_50c = uStack_4dc;
      local_540 = fStack_4b0 - fStack_4e0;
      *puVar2 = CONCAT44(fStack_4b4 - fStack_4e4,local_4b8 - local_4e8);
      *(float *)(puVar2 + 1) = local_540;
      *(undefined1 *)param_1[5] = 1;
    }
    FUN_142255920(local_498);
  }
  if ((*(char *)param_1[5] == '\0') && (lVar11 != 0)) {
    local_548 = *(undefined8 *)(lVar11 + 0x10);
    puVar8 = (undefined8 *)
             FUN_142c6e860(local_528,local_548,*(undefined8 *)(*(longlong *)*param_1 + 0xfd8),0);
    puVar2 = (undefined8 *)param_1[4];
    *puVar2 = *puVar8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(puVar8 + 1);
  }
  iVar5 = FUN_14233f450(*(undefined8 *)*param_1);
  if (iVar5 == 3) {
    (**(code **)(**(longlong **)*param_1 + 0x260))();
    *(int *)(*(longlong *)*param_1 + 0x203c) = (int)((longlong *)*param_1)[4];
    *(char *)(*(longlong *)*param_1 + 0x2038) = *(char *)(*(longlong *)*param_1 + 0x2038) + '\x01';
  }
LAB_142cb4690:
  if (local_530 != (longlong *)0x0) {
    LOCK();
    plVar9 = local_530 + 1;
    lVar11 = *plVar9;
    *(int *)plVar9 = (int)*plVar9 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_530)(local_530);
      LOCK();
      piVar1 = (int *)((longlong)local_530 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_530 + 8))(local_530,1);
      }
    }
  }
  return;
}



// FUNCTION 142cb4700 FUN_142cb4700 body=144 status=ok
// SIG undefined FUN_142cb4700(void)

float FUN_142cb4700(longlong *param_1,float param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  float fVar4;
  
  plVar3 = (longlong *)FRuntimeFloatCurve::GetRichCurve(*(longlong *)(*param_1 + 8) + 0xa8);
  iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
  if (0 < iVar2) {
    lVar1 = *param_1;
    if (((*(byte *)(*(longlong *)(lVar1 + 8) + 0x28) & 1) == 0) || (*(float *)(lVar1 + 0x4c) <= 0.0)
       ) {
      fVar4 = *(float *)(lVar1 + 0x50);
    }
    else {
      fVar4 = *(float *)(lVar1 + 0x50) / *(float *)(lVar1 + 0x4c);
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    fVar4 = (float)FRichCurve::Eval(plVar3,fVar4,0x3f800000);
    param_2 = param_2 * fVar4;
  }
  return param_2;
}



// FUNCTION 142cb4790 FUN_142cb4790 body=604 status=ok
// SIG undefined FUN_142cb4790(void)

void FUN_142cb4790(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = param_1[1];
  if (*(char *)*param_1 == '\0') {
    if (((*(uint *)(lVar4 + 0x15c) & 0x800) == 0) &&
       (lVar4 = *(longlong *)(lVar4 + 8), *(longlong *)(lVar4 + 2000) != 0)) {
      lVar6 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 2000);
      for (lVar7 = lVar4; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if (lVar4 != 0) {
            *(uint *)(param_1[1] + 0x15c) = *(uint *)(param_1[1] + 0x15c) | 0x800;
            FUN_142c7bae0(*(undefined8 *)param_1[2],local_28,
                          *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 2000));
            goto LAB_142cb49ae;
          }
          break;
        }
      }
    }
    lVar4 = *(longlong *)(param_1[1] + 8);
    if (*(longlong *)(lVar4 + 0x7c0) != 0) {
      lVar6 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 0x7c0);
      lVar7 = lVar4;
      if (lVar4 != 0) {
        while (lVar7 != lVar6) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 == 0) {
            return;
          }
        }
        if (lVar4 != 0) {
          FUN_142c7bc00(*(undefined8 *)param_1[2],local_18,
                        *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7c0),
                        (*(uint *)(*(longlong *)(param_1[1] + 8) + 0x2c) >> 0xc & 0xffffff01) * 2);
          local_20 = local_10;
LAB_142cb49ae:
          if (local_20 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_20 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_20)(local_20);
              LOCK();
              piVar2 = (int *)((longlong)local_20 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_20 + 8))(local_20,1);
              }
            }
          }
        }
      }
    }
  }
  else {
    lVar4 = *(longlong *)(lVar4 + 8);
    if (*(longlong *)(lVar4 + 0x7b8) != 0) {
      lVar6 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 0x7b8);
      for (lVar7 = lVar4; lVar7 != 0; lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == lVar6) {
          if ((lVar4 != 0) &&
             (cVar5 = FUN_142c736c0(*(undefined8 *)param_1[2],
                                    *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7b8)),
             cVar5 != '\0')) {
            FUN_142c84570(*(undefined8 *)param_1[2],
                          *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7b8));
          }
          break;
        }
      }
    }
    lVar4 = *(longlong *)(param_1[1] + 8);
    if (*(longlong *)(lVar4 + 0x7c8) != 0) {
      lVar6 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 0x7c8);
      lVar7 = lVar4;
      if (lVar4 != 0) {
        while (lVar7 != lVar6) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 == 0) {
            return;
          }
        }
        if ((lVar4 != 0) &&
           (cVar5 = FUN_142c736c0(*(undefined8 *)param_1[2],
                                  *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7c8)),
           cVar5 != '\0')) {
          FUN_142c84570(*(undefined8 *)param_1[2],
                        *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7c8));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142cb49f0 FUN_142cb49f0 body=231 status=ok
// SIG undefined FUN_142cb49f0(void)

void FUN_142cb49f0(undefined8 *param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = 0.0;
  fVar3 = *param_2 - param_4;
  fVar5 = *(float *)*param_1;
  fVar4 = fVar3;
  while (0.0 < fVar5) {
    fVar1 = fVar5;
    if (0.03 <= fVar5) {
      fVar1 = 0.03;
    }
    fVar5 = fVar5 - fVar1;
    fVar4 = fVar4 + fVar4 * -2.0 * fVar1 * param_3;
    if (0.0 < fVar3 * fVar4) {
      fVar2 = fVar2 + (fVar1 * fVar4) / *(float *)*param_1;
    }
  }
  if ((fVar2 * fVar3 < 0.0) || (fVar2 < 100.0)) {
    fVar2 = 0.0;
  }
  *param_2 = fVar2 + param_4;
  return;
}



// FUNCTION 142cb4ae0 FUN_142cb4ae0 body=305 status=ok
// SIG undefined FUN_142cb4ae0(void)

void FUN_142cb4ae0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_res8 [32];
  
  if ((char)(*(longlong **)*param_1)[0x25] == '\x03') {
    (**(code **)(**(longlong **)*param_1 + 0x600))();
    FUN_142e077e0(*(undefined8 *)param_1[1],*(undefined1 *)param_1[2]);
  }
  FUN_142e07870(*(undefined8 *)param_1[1],*(undefined1 *)param_1[2]);
  *(undefined8 *)(*(longlong *)param_1[1] + 0x898) = 0;
  (**(code **)(**(longlong **)param_1[3] + 0xc38))
            (*(longlong **)param_1[3],*(undefined8 *)(*(longlong *)param_1[1] + 0x10),param_1[4]);
  lVar1 = (**(code **)(**(longlong **)*param_1 + 0x148))();
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(local_res8,*(undefined8 *)param_1[1]);
    lVar1 = (**(code **)(**(longlong **)*param_1 + 0x148))();
    if (*(longlong *)(lVar1 + 400) == 0) {
      lVar1 = lVar1 + 0x400;
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
    }
    FUN_142534fa0(lVar1,local_res8);
    lVar1 = (**(code **)(**(longlong **)*param_1 + 0x148))();
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    if (*(longlong *)param_1[1] != 0) {
      FUN_1428800b0(uVar2);
    }
  }
  FUN_14248cf90(DAT_146b17150 + 0xcf8,*(undefined8 *)param_1[1]);
  return;
}



// FUNCTION 142cb4c20 FUN_142cb4c20 body=1059 status=ok
// SIG undefined FUN_142cb4c20(void)

undefined8 * FUN_142cb4c20(undefined8 *param_1,undefined8 *param_2,char *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined8 local_res10 [3];
  undefined8 local_58;
  float local_50;
  undefined8 local_4c;
  float local_44;
  
  fVar9 = DAT_1468b5d98;
  plVar2 = (longlong *)*param_1;
  uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  *param_2 = uVar4;
  lVar6 = *plVar2;
  *(float *)(param_2 + 1) = fVar9;
  uVar5 = *(uint *)(lVar6 + 0x28) & 0x100000;
  if (*param_3 != '\x0e') {
    if ((uVar5 != 0) && (*(longlong *)(param_1[3] + 0x88) != 0)) {
      local_res10[0] = 0;
      puVar7 = (undefined8 *)
               FUN_142da9940(param_3,&local_4c,param_1[4],*(longlong *)(param_1[3] + 0x88),
                             local_res10,0);
      uVar1 = *(undefined4 *)(puVar7 + 1);
      *param_2 = *puVar7;
      *(undefined4 *)(param_2 + 1) = uVar1;
      return param_2;
    }
    local_res10[0] = 0;
    puVar7 = (undefined8 *)
             FUN_142da9940(param_3,&local_4c,param_1[4],*(undefined8 *)param_1[2],local_res10,0);
    uVar1 = *(undefined4 *)(puVar7 + 1);
    *param_2 = *puVar7;
    *(undefined4 *)(param_2 + 1) = uVar1;
    return param_2;
  }
  lVar6 = param_1[1];
  lVar3 = *(longlong *)(lVar6 + 0x10);
  local_4c = uVar4;
  if (uVar5 == 0) {
    if (lVar3 == 0) {
      if ((((float)*(undefined8 *)(lVar6 + 0x18) == 0.0) &&
          (local_4c._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20),
          local_4c._4_4_ == 0.0)) && (*(float *)(lVar6 + 0x20) == 0.0)) {
        return param_2;
      }
      lVar3 = *(longlong *)(*(longlong *)param_1[2] + 0x168);
      if (lVar3 == 0) {
        local_44 = fVar9;
      }
      else {
        local_44 = *(float *)(lVar3 + 0x228);
        local_4c = *(undefined8 *)(lVar3 + 0x220);
      }
      local_58._0_4_ = (float)*(undefined8 *)(lVar6 + 0x18) - (float)local_4c;
      local_50 = local_44;
      local_58._4_4_ =
           (float)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20) -
           (float)((ulonglong)local_4c >> 0x20);
      local_44 = *(float *)(lVar6 + 0x20);
      goto LAB_142cb4e77;
    }
    lVar6 = *(longlong *)(*(longlong *)param_1[2] + 0x168);
    if (lVar6 == 0) {
      local_44 = fVar9;
    }
    else {
      local_44 = *(float *)(lVar6 + 0x228);
      local_4c = *(undefined8 *)(lVar6 + 0x220);
    }
    local_50 = local_44;
    lVar6 = *(longlong *)(lVar3 + 0x168);
    uVar8 = local_4c;
  }
  else {
    if (lVar3 == 0) {
      if ((((float)*(undefined8 *)(lVar6 + 0x18) == 0.0) &&
          (local_4c._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x18) >> 0x20),
          local_4c._4_4_ == 0.0)) && (*(float *)(lVar6 + 0x20) == 0.0)) {
        return param_2;
      }
      uVar8 = *(undefined8 *)(lVar6 + 0x18);
      local_50 = *(float *)(lVar6 + 0x20);
    }
    else {
      lVar6 = *(longlong *)(lVar3 + 0x168);
      uVar8 = uVar4;
      local_50 = fVar9;
      if (lVar6 != 0) {
        uVar8 = *(undefined8 *)(lVar6 + 0x220);
        local_50 = *(float *)(lVar6 + 0x228);
      }
    }
    lVar6 = *(longlong *)(*(longlong *)param_1[2] + 0x168);
  }
  if (lVar6 == 0) {
    local_44 = fVar9;
    local_4c = uVar4;
  }
  else {
    local_44 = *(float *)(lVar6 + 0x228);
    local_4c = *(undefined8 *)(lVar6 + 0x220);
  }
  local_58._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
  local_58._4_4_ = (float)((ulonglong)local_4c >> 0x20) - local_58._4_4_;
  local_58._0_4_ = (float)uVar8;
  local_58._0_4_ = (float)local_4c - (float)local_58;
LAB_142cb4e77:
  local_50 = local_44 - local_50;
  fVar9 = local_58._4_4_ * local_58._4_4_ + (float)local_58 * (float)local_58 + local_50 * local_50;
  if (fVar9 == 1.0) {
  }
  else {
    if (1e-08 <= fVar9) {
      auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
      fVar10 = auVar11._0_4_;
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
      local_58._0_4_ = fVar10 * (float)local_58;
      local_50 = fVar10 * local_50;
      fVar10 = fVar10 * local_58._4_4_;
    }
    else {
      local_50 = DAT_1468b5d98;
      fVar10 = DAT_1468b5d94;
      local_58._0_4_ = DAT_1468b5d90;
    }
    local_58 = CONCAT44(fVar10,(float)local_58);
  }
  *param_2 = local_58;
  *(float *)(param_2 + 1) = local_50;
  return param_2;
}



// FUNCTION 142cb5050 FUN_142cb5050 body=238 status=ok
// SIG undefined FUN_142cb5050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

float FUN_142cb5050(void)

{
  int iVar1;
  ulonglong uVar2;
  float *pfVar3;
  undefined1 *puVar4;
  char in_R9B;
  float fVar5;
  undefined4 in_stack_00000028;
  float in_stack_00000030;
  undefined1 auStack_48 [32];
  float *local_28;
  float afStack_20 [2];
  ulonglong local_18;
  
  puVar4 = auStack_48;
  local_18 = DAT_1468387a8 ^ (ulonglong)&local_28;
  iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b31578);
  if (((longlong)iVar1 & 0x3fffffffffffffffU) == 0) {
    pfVar3 = (float *)0x0;
  }
  else {
    iVar1 = TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b31578);
    uVar2 = (longlong)iVar1 * 4 + 0x1e;
    if (uVar2 <= (longlong)iVar1 * 4 + 0xfU) {
      uVar2 = 0xffffffffffffff0;
    }
    puVar4 = auStack_48 + -(uVar2 & 0xfffffffffffffff0);
    pfVar3 = (float *)((longlong)afStack_20 + -(uVar2 & 0xfffffffffffffff0));
  }
  local_28 = pfVar3;
  *(undefined8 *)(puVar4 + -8) = 0x142cb50e4;
  afStack_20[0] = (float)TResourceArray<unsigned_char,0>::GetResourceDataSize(DAT_146b31578);
  *(undefined8 *)(puVar4 + -8) = 0x142cb5108;
  FUN_1415ada30(DAT_146b31578,in_stack_00000028,&local_28,1);
  fVar5 = *pfVar3;
  if ((in_R9B == '\0') && (0.7 <= in_stack_00000030)) {
    fVar5 = fVar5 + pfVar3[1];
  }
  *(undefined8 *)(puVar4 + -8) = 0x142cb5130;
  return fVar5;
}



// FUNCTION 142cb5140 FUN_142cb5140 body=343 status=ok
// SIG undefined FUN_142cb5140(void)

void FUN_142cb5140(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 local_18 [8];
  longlong *local_10;
  
  lVar4 = *(longlong *)(param_1[1] + 8);
  if (*(char *)*param_1 == '\0') {
    if (*(longlong *)(lVar4 + 0x7c0) != 0) {
      lVar6 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 0x7c0);
      lVar7 = lVar4;
      if (lVar4 != 0) {
        while (lVar7 != lVar6) {
          lVar7 = *(longlong *)(lVar7 + 0x30);
          if (lVar7 == 0) {
            return;
          }
        }
        if (lVar4 != 0) {
          FUN_142c7bc00(*(undefined8 *)param_1[2],local_18,
                        *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7c0),2);
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_10 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar2 = (int *)((longlong)local_10 + 0xc);
              iVar3 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
        }
      }
    }
  }
  else if (*(longlong *)(lVar4 + 0x7b8) != 0) {
    lVar6 = FUN_142e20fc0();
    lVar4 = *(longlong *)(lVar4 + 0x7b8);
    lVar7 = lVar4;
    if (lVar4 != 0) {
      while (lVar7 != lVar6) {
        lVar7 = *(longlong *)(lVar7 + 0x30);
        if (lVar7 == 0) {
          return;
        }
      }
      if (lVar4 != 0) {
        cVar5 = FUN_142c736c0(*(undefined8 *)param_1[2],
                              *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7b8));
        if (cVar5 != '\0') {
          FUN_142c84570(*(undefined8 *)param_1[2],
                        *(undefined8 *)(*(longlong *)(param_1[1] + 8) + 0x7b8));
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 142cb52a0 FUN_142cb52a0 body=122 status=ok
// SIG undefined FUN_142cb52a0(void)

void FUN_142cb52a0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined1 local_18 [8];
  longlong *local_10;
  
  FUN_142c7bc00(*(undefined8 *)param_1[1],local_18,
                *(undefined8 *)(*(longlong *)(*param_1 + 8) + 0x7b8),
                (*(uint *)(*(longlong *)(*param_1 + 8) + 0x2c) >> 0xc & 0xffffff01) * 2);
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)local_10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_10 + 8))(local_10,1);
      }
    }
  }
  return;
}



// FUNCTION 142cb5320 FUN_142cb5320 body=471 status=ok
// SIG undefined FUN_142cb5320(void)

void FUN_142cb5320(undefined8 *param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if ((char)(*(longlong **)*param_1)[0x25] == '\x03') {
    (**(code **)(**(longlong **)*param_1 + 0x600))();
    lVar6 = param_1[1];
    FUN_142e07790(*(undefined8 *)(lVar6 + 8),*(undefined4 *)(lVar6 + 0x4c),
                  *(undefined8 *)(param_1[2] + 0x10),*(undefined8 *)(lVar6 + 0x10));
  }
  if ((*(longlong *)(param_1[1] + 8) != 0) &&
     (lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 8) + 0x10), lVar6 != 0)) {
    lVar3 = FUN_142e07420();
    lVar5 = lVar6;
    do {
      if (lVar5 == lVar3) goto LAB_142cb5396;
      lVar5 = *(longlong *)(lVar5 + 0x30);
    } while (lVar5 != 0);
  }
  lVar6 = 0;
LAB_142cb5396:
  plVar2 = (longlong *)param_1[3];
  if (*plVar2 != 0) {
    lVar4 = FUN_142e07420();
    lVar5 = *plVar2;
    for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar4) goto LAB_142cb53c0;
    }
  }
  lVar5 = 0;
LAB_142cb53c0:
  if (lVar6 == lVar5) {
    (**(code **)(**(longlong **)param_1[1] + 0xc30))();
    if ((*(longlong *)(param_1[1] + 8) != 0) &&
       (lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 8) + 0x10), lVar6 != 0)) {
      lVar3 = FUN_142e07420();
      lVar5 = lVar6;
      do {
        if (lVar5 == lVar3) goto LAB_142cb5420;
        lVar5 = *(longlong *)(lVar5 + 0x30);
      } while (lVar5 != 0);
    }
    lVar6 = 0;
LAB_142cb5420:
    plVar2 = (longlong *)param_1[3];
    if (*plVar2 != 0) {
      lVar4 = FUN_142e07420();
      lVar5 = *plVar2;
      for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
        if (lVar3 == lVar4) goto LAB_142cb5450;
      }
    }
    lVar5 = 0;
LAB_142cb5450:
    if (lVar6 == lVar5) {
      FUN_142e07820(*(undefined8 *)(param_1[1] + 8),*(undefined4 *)(param_1[1] + 0x4c),
                    *(undefined8 *)(param_1[2] + 0x10));
      if ((*(longlong *)(param_1[1] + 8) != 0) &&
         (lVar6 = *(longlong *)(*(longlong *)(param_1[1] + 8) + 0x10), lVar6 != 0)) {
        lVar3 = FUN_142e07420();
        lVar5 = lVar6;
        do {
          if (lVar5 == lVar3) goto LAB_142cb54a1;
          lVar5 = *(longlong *)(lVar5 + 0x30);
        } while (lVar5 != 0);
      }
      lVar6 = 0;
LAB_142cb54a1:
      plVar2 = (longlong *)param_1[3];
      if (*plVar2 != 0) {
        lVar4 = FUN_142e07420();
        lVar5 = *plVar2;
        for (lVar3 = lVar5; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
          if (lVar3 == lVar4) goto LAB_142cb54d0;
        }
      }
      lVar5 = 0;
LAB_142cb54d0:
      if (lVar6 == lVar5) {
        return;
      }
    }
    *(uint *)(param_1[1] + 0x15c) = *(uint *)(param_1[1] + 0x15c) & 0xfffffffe;
  }
  else {
    puVar1 = (uint *)((longlong)param_1[1] + 0x15c);
    *puVar1 = *puVar1 & 0xfffffffe;
  }
  *(undefined1 *)param_1[4] = 1;
  return;
}



// FUNCTION 142cb5500 FUN_142cb5500 body=331 status=ok
// SIG undefined FUN_142cb5500(void)

float * FUN_142cb5500(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 local_res8;
  
  cVar2 = *(char *)(param_2 + 2);
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x01') {
    if (cVar2 != '\x01') {
      fVar4 = 0.0;
      if (cVar1 == '\0') {
        fVar5 = *param_1;
      }
      else if (cVar1 == '\x02') {
        fVar5 = *param_1;
      }
      else {
        fVar5 = 0.0;
      }
      if ((cVar2 == '\0') || (cVar2 == '\x02')) {
        fVar4 = *param_2;
      }
      *param_1 = fVar4 * fVar5;
      *(undefined1 *)(param_1 + 2) = 0;
      return param_1;
    }
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      fVar4 = *param_1;
    }
    else {
      fVar4 = 0.0;
    }
    local_res8 = *(undefined8 *)param_2;
    FUN_142c485b0(&local_res8,fVar4);
    *param_1 = (float)local_res8;
    param_1[1] = local_res8._4_4_;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\0') {
      fVar4 = *param_2;
    }
    else if (cVar2 == '\x02') {
      fVar4 = *param_2;
    }
    else {
      fVar4 = 0.0;
    }
    local_res8 = *(undefined8 *)param_1;
    FUN_142c485b0(&local_res8,fVar4);
    cVar2 = *(char *)(param_1 + 2);
    switch(cVar2) {
    case '\0':
switchD_142cb554c_caseD_0:
      bVar3 = cVar2 == '\0';
      break;
    case '\x01':
switchD_142cb554c_caseD_1:
      bVar3 = cVar2 == '\x01';
      break;
    case '\x02':
switchD_142cb554c_caseD_2:
      bVar3 = cVar2 == '\x02';
      break;
    case '\x03':
    case '\x04':
    case '\x05':
switchD_142cb554c_caseD_3:
      bVar3 = cVar2 == '\x03';
      break;
    default:
      goto switchD_142cb554c_default;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 2) = 0xff;
    }
switchD_142cb554c_default:
    *(undefined8 *)param_1 = local_res8;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  local_res8 = *(undefined8 *)param_1;
  FUN_142c48560(&local_res8);
  cVar2 = *(char *)(param_1 + 2);
  switch(cVar2) {
  case '\0':
    goto switchD_142cb554c_caseD_0;
  case '\x01':
    goto switchD_142cb554c_caseD_1;
  case '\x02':
    goto switchD_142cb554c_caseD_2;
  case '\x03':
  case '\x04':
  case '\x05':
    goto switchD_142cb554c_caseD_3;
  default:
    goto switchD_142cb554c_default;
  }
}



// FUNCTION 142cb5680 FUN_142cb5680 body=331 status=ok
// SIG undefined FUN_142cb5680(void)

float * FUN_142cb5680(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 local_res8;
  
  cVar2 = *(char *)(param_2 + 2);
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x01') {
    if (cVar2 != '\x01') {
      fVar4 = 0.0;
      if (cVar1 == '\0') {
        fVar5 = *param_1;
      }
      else if (cVar1 == '\x02') {
        fVar5 = *param_1;
      }
      else {
        fVar5 = 0.0;
      }
      if ((cVar2 == '\0') || (cVar2 == '\x02')) {
        fVar4 = *param_2;
      }
      *param_1 = fVar4 + fVar5;
      *(undefined1 *)(param_1 + 2) = 0;
      return param_1;
    }
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      fVar4 = *param_1;
    }
    else {
      fVar4 = 0.0;
    }
    local_res8 = *(undefined8 *)param_2;
    FUN_142c48640(&local_res8,fVar4);
    *param_1 = (float)local_res8;
    param_1[1] = local_res8._4_4_;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\0') {
      fVar4 = *param_2;
    }
    else if (cVar2 == '\x02') {
      fVar4 = *param_2;
    }
    else {
      fVar4 = 0.0;
    }
    local_res8 = *(undefined8 *)param_1;
    FUN_142c48640(&local_res8,fVar4);
    cVar2 = *(char *)(param_1 + 2);
    switch(cVar2) {
    case '\0':
switchD_142cb56cc_caseD_0:
      bVar3 = cVar2 == '\0';
      break;
    case '\x01':
switchD_142cb56cc_caseD_1:
      bVar3 = cVar2 == '\x01';
      break;
    case '\x02':
switchD_142cb56cc_caseD_2:
      bVar3 = cVar2 == '\x02';
      break;
    case '\x03':
    case '\x04':
    case '\x05':
switchD_142cb56cc_caseD_3:
      bVar3 = cVar2 == '\x03';
      break;
    default:
      goto switchD_142cb56cc_default;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 2) = 0xff;
    }
switchD_142cb56cc_default:
    *(undefined8 *)param_1 = local_res8;
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  local_res8 = *(undefined8 *)param_1;
  FUN_142c485f0(&local_res8);
  cVar2 = *(char *)(param_1 + 2);
  switch(cVar2) {
  case '\0':
    goto switchD_142cb56cc_caseD_0;
  case '\x01':
    goto switchD_142cb56cc_caseD_1;
  case '\x02':
    goto switchD_142cb56cc_caseD_2;
  case '\x03':
  case '\x04':
  case '\x05':
    goto switchD_142cb56cc_caseD_3;
  default:
    goto switchD_142cb56cc_default;
  }
}



// FUNCTION 142cb5800 FUN_142cb5800 body=341 status=ok
// SIG undefined FUN_142cb5800(void)

float * FUN_142cb5800(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  undefined8 local_res8 [4];
  
  cVar2 = *(char *)(param_2 + 2);
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x01') {
    if (cVar2 != '\x01') {
      fVar5 = 0.0;
      if (cVar1 == '\0') {
        fVar4 = *param_1;
      }
      else if (cVar1 == '\x02') {
        fVar4 = *param_1;
      }
      else {
        fVar4 = 0.0;
      }
      if ((cVar2 == '\0') || (cVar2 == '\x02')) {
        fVar5 = *param_2;
      }
      *param_1 = fVar4 - fVar5;
      *(undefined1 *)(param_1 + 2) = 0;
      return param_1;
    }
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      fVar5 = *param_1;
    }
    else {
      fVar5 = 0.0;
    }
    FUN_142c48df0(local_res8,fVar5 - (param_2[1] + *param_2),fVar5 - (*param_2 - param_2[1]));
    *(undefined8 *)param_1 = local_res8[0];
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\0') {
      fVar5 = *param_2;
    }
    else if (cVar2 == '\x02') {
      fVar5 = *param_2;
    }
    else {
      fVar5 = 0.0;
    }
    local_res8[0] = *(undefined8 *)param_1;
    FUN_142c486d0(local_res8,fVar5);
    cVar2 = *(char *)(param_1 + 2);
    switch(cVar2) {
    case '\0':
switchD_142cb584c_caseD_0:
      bVar3 = cVar2 == '\0';
      break;
    case '\x01':
switchD_142cb584c_caseD_1:
      bVar3 = cVar2 == '\x01';
      break;
    case '\x02':
switchD_142cb584c_caseD_2:
      bVar3 = cVar2 == '\x02';
      break;
    case '\x03':
    case '\x04':
    case '\x05':
switchD_142cb584c_caseD_3:
      bVar3 = cVar2 == '\x03';
      break;
    default:
      goto switchD_142cb584c_default;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 2) = 0xff;
    }
switchD_142cb584c_default:
    *(undefined8 *)param_1 = local_res8[0];
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  local_res8[0] = *(undefined8 *)param_1;
  FUN_142c48680(local_res8);
  cVar2 = *(char *)(param_1 + 2);
  switch(cVar2) {
  case '\0':
    goto switchD_142cb584c_caseD_0;
  case '\x01':
    goto switchD_142cb584c_caseD_1;
  case '\x02':
    goto switchD_142cb584c_caseD_2;
  case '\x03':
  case '\x04':
  case '\x05':
    goto switchD_142cb584c_caseD_3;
  default:
    goto switchD_142cb584c_default;
  }
}



// FUNCTION 142cb5990 FUN_142cb5990 body=427 status=ok
// SIG undefined FUN_142cb5990(void)

float * FUN_142cb5990(float *param_1,float *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 local_res8 [4];
  
  cVar2 = *(char *)(param_2 + 2);
  cVar1 = *(char *)(param_1 + 2);
  if (cVar1 != '\x01') {
    fVar4 = 0.0;
    if (cVar2 != '\x01') {
      if (cVar2 == '\0') {
        fVar5 = *param_2;
      }
      else if (cVar2 == '\x02') {
        fVar5 = *param_2;
      }
      else {
        fVar5 = 0.0;
      }
      if (1e-08 < ABS(fVar5)) {
        if ((cVar1 == '\0') || (cVar1 == '\x02')) {
          fVar4 = *param_1;
        }
        *param_1 = fVar4 / fVar5;
        *(undefined1 *)(param_1 + 2) = 0;
      }
      return param_1;
    }
    if ((cVar1 == '\0') || (cVar1 == '\x02')) {
      fVar4 = *param_1;
    }
    fVar6 = *param_2 - param_2[1];
    fVar5 = param_2[1] + *param_2;
    if ((1e-08 < ABS(fVar6)) && (1e-08 < ABS(fVar5))) {
      FUN_142c48df0(local_res8,fVar4 / fVar5,fVar4 / fVar6);
      FUN_142cb0d30(param_1,local_res8);
      return param_1;
    }
    local_res8[0] = 0;
    FUN_142cb0d30(param_1,local_res8);
    return param_1;
  }
  if (cVar2 != '\x01') {
    if (cVar2 == '\0') {
      fVar4 = *param_2;
    }
    else if (cVar2 == '\x02') {
      fVar4 = *param_2;
    }
    else {
      fVar4 = 0.0;
    }
    local_res8[0] = *(undefined8 *)param_1;
    FUN_142c48780(local_res8,fVar4);
    cVar2 = *(char *)(param_1 + 2);
    switch(cVar2) {
    case '\0':
switchD_142cb59dc_caseD_0:
      bVar3 = cVar2 == '\0';
      break;
    case '\x01':
switchD_142cb59dc_caseD_1:
      bVar3 = cVar2 == '\x01';
      break;
    case '\x02':
switchD_142cb59dc_caseD_2:
      bVar3 = cVar2 == '\x02';
      break;
    case '\x03':
    case '\x04':
    case '\x05':
switchD_142cb59dc_caseD_3:
      bVar3 = cVar2 == '\x03';
      break;
    default:
      goto switchD_142cb59dc_default;
    }
    if (bVar3) {
      *(undefined1 *)(param_1 + 2) = 0xff;
    }
switchD_142cb59dc_default:
    *(undefined8 *)param_1 = local_res8[0];
    *(undefined1 *)(param_1 + 2) = 1;
    return param_1;
  }
  local_res8[0] = *(undefined8 *)param_1;
  FUN_142c48710(local_res8);
  cVar2 = *(char *)(param_1 + 2);
  switch(cVar2) {
  case '\0':
    goto switchD_142cb59dc_caseD_0;
  case '\x01':
    goto switchD_142cb59dc_caseD_1;
  case '\x02':
    goto switchD_142cb59dc_caseD_2;
  case '\x03':
  case '\x04':
  case '\x05':
    goto switchD_142cb59dc_caseD_3;
  default:
    goto switchD_142cb59dc_default;
  }
}



// FUNCTION 142cb5c50 FUN_142cb5c50 body=43 status=ok
// SIG undefined FUN_142cb5c50(void)

undefined8 * FUN_142cb5c50(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = IDelegateInstance::vftable;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 142cb5c80 FUN_142cb5c80 body=381 status=ok
// SIG undefined FUN_142cb5c80(void)

longlong FUN_142cb5c80(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd20) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0xc28) = 0;
  if (*(longlong *)(param_1 + 0xc20) != 0) {
    FMemory::Free();
  }
  FUN_1409c4730(param_1 + 0xbe0);
  if (*(longlong *)(param_1 + 0xba0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9d8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x9a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x990) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x8f8) = &PTR_FUN_14407f7d8;
  *(undefined ***)(param_1 + 0x8f0) = &PTR_FUN_144055c50;
  *(undefined ***)(param_1 + 0x8e8) = &PTR_FUN_144080410;
  *(undefined ***)(param_1 + 0x8e0) = &PTR_FUN_1441b4a50;
  *(undefined ***)(param_1 + 0x8d8) = &PTR_FUN_1441b39d0;
  *(undefined ***)(param_1 + 0x8d0) = &PTR_FUN_144055190;
  *(undefined ***)(param_1 + 0x8c8) = &PTR_FUN_143fe0658;
  *(undefined ***)(param_1 + 0x8c0) = &PTR_FUN_14407f730;
  *(undefined ***)(param_1 + 0x8b8) = &PTR_FUN_1441b49f8;
  *(undefined ***)(param_1 + 0x8b0) = &PTR_FUN_14407f310;
  FUN_14080d0a0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd80);
  }
  return param_1;
}



// FUNCTION 142cb5e00 FUN_142cb5e00 body=104 status=ok
// SIG undefined FUN_142cb5e00(void)

longlong FUN_142cb5e00(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x1c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 142cb5e70 FUN_142cb5e70 body=52 status=ok
// SIG undefined FUN_142cb5e70(void)

undefined8 FUN_142cb5e70(undefined8 param_1,ulonglong param_2)

{
  FUN_142cb3a20();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,2000);
  }
  return param_1;
}



// FUNCTION 142cb5eb0 FUN_142cb5eb0 body=90 status=ok
// SIG undefined FUN_142cb5eb0(void)

longlong FUN_142cb5eb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x7e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x7d8) != 0) {
    FMemory::Free();
  }
  FUN_142cb3a20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x800);
  }
  return param_1;
}



// FUNCTION 142cb5f10 FUN_142cb5f10 body=150 status=ok
// SIG undefined FUN_142cb5f10(void)

longlong FUN_142cb5f10(longlong param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve(param_1 + 0x410);
  FRichCurve::~FRichCurve(param_1 + 0x318);
  FRichCurve::~FRichCurve(param_1 + 0x298);
  FRichCurve::~FRichCurve(param_1 + 0x218);
  FRichCurve::~FRichCurve(param_1 + 0x1a0);
  FRichCurve::~FRichCurve(param_1 + 0x128);
  FRichCurve::~FRichCurve(param_1 + 0xa8);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x8a0);
  }
  return param_1;
}



// FUNCTION 142cb5fb0 FUN_142cb5fb0 body=241 status=ok
// SIG undefined FUN_142cb5fb0(void)

longlong FUN_142cb5fb0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x540) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x448) != 0) {
    FMemory::Free();
  }
  if (*(char *)(param_1 + 0x438) != '\0') {
    *(undefined1 *)(param_1 + 0x438) = 0;
  }
  if (*(char *)(param_1 + 0x428) != '\0') {
    *(undefined1 *)(param_1 + 0x428) = 0;
  }
  if (*(longlong *)(param_1 + 0x3c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x3b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x268) != 0) {
    FMemory::Free();
  }
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x560);
  }
  return param_1;
}



// FUNCTION 142cb60b0 FUN_142cb60b0 body=139 status=ok
// SIG undefined FUN_142cb60b0(void)

longlong FUN_142cb60b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x8a8) = 0;
  if (*(longlong *)(param_1 + 0x8a0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x860);
  FUN_140a29500(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x950);
  }
  return param_1;
}



// FUNCTION 142cb6140 FUN_142cb6140 body=52 status=ok
// SIG undefined FUN_142cb6140(void)

undefined8 FUN_142cb6140(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x148);
  }
  return param_1;
}



// FUNCTION 142cb6180 FUN_142cb6180 body=84 status=ok
// SIG undefined FUN_142cb6180(void)

void FUN_142cb6180(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    *(int *)(param_1 + 0x10) = iVar1 + 1;
    if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
      FUN_1407eebb0(param_1,iVar1);
    }
    lVar2 = *(longlong *)(param_1 + 8);
    if (*(longlong *)(param_1 + 8) == 0) {
      lVar2 = param_1;
    }
    *(longlong *)(lVar2 + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 142cb61e0 FUN_142cb61e0 body=753 status=ok
// SIG undefined FUN_142cb61e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cb61e0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  float *pfVar2;
  longlong *plVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 auVar14 [16];
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 in_stack_ffffffffffffff78;
  ulonglong uVar19;
  longlong local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [16];
  
  uVar15 = (uint)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  iVar8 = FUN_142340f30();
  if (iVar8 != 3) {
    plVar1 = (longlong *)(param_1 + 0x7e8);
    plVar13 = (longlong *)*plVar1;
    plVar3 = plVar13 + *(int *)(param_1 + 0x7f0);
    for (; plVar13 != plVar3; plVar13 = plVar13 + 1) {
      if ((*plVar13 != 0) && (*(longlong *)(*plVar13 + 0x118) == param_2)) {
        return;
      }
    }
    lVar9 = 0;
    if (param_2 != 0) {
      lVar9 = *(longlong *)(param_2 + 0x168);
    }
    if (lVar9 != 0) {
      local_58 = 0;
      if (param_3 != 0) {
        lVar10 = FUN_142e017e0();
        lVar11 = param_3;
        do {
          if (lVar11 == lVar10) goto LAB_142cb62a7;
          lVar11 = *(longlong *)(lVar11 + 0x30);
        } while (lVar11 != 0);
      }
      param_3 = 0;
LAB_142cb62a7:
      lVar11 = local_58;
      local_48 = 0;
      if (local_58 == 0) {
        FUN_1417846f0(param_2,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
      }
      uVar19 = 0;
      lVar11 = FUN_1417985e0(param_3,param_2,lVar11,0,(ulonglong)uVar15 << 0x20,0,0,0,0);
      if (lVar11 != 0) {
        *(longlong *)(lVar11 + 0x7c8) = param_1;
        *(undefined8 *)(lVar11 + 0x750) = *(undefined8 *)(param_1 + 0x750);
        *(undefined8 *)(lVar11 + 0x758) = *(undefined8 *)(param_1 + 0x758);
        local_48 = 0;
        local_58 = CONCAT44(local_58._4_4_,0x1000002);
        FUN_142382f60(lVar11,lVar9,&local_58,0);
        local_58 = *param_4;
        pfVar2 = (float *)(lVar11 + 0x280);
        local_50 = (undefined4)param_4[1];
        if (((*(float *)(lVar11 + 0x1f8) != *pfVar2) ||
            (*(float *)(lVar11 + 0x1fc) != *(float *)(lVar11 + 0x284))) ||
           (*(float *)(lVar11 + 0x200) != *(float *)(lVar11 + 0x288))) {
          local_48 = *(undefined8 *)*(undefined1 (*) [12])(lVar11 + 0x1f8);
          auVar14._12_4_ = 0;
          auVar14._0_12_ = *(undefined1 (*) [12])(lVar11 + 0x1f8);
          fVar4 = (float)DAT_146b30e60;
          fVar5 = DAT_146b30e60._4_4_;
          fVar6 = DAT_146b30e60._8_4_;
          auVar14 = divps(auVar14,_DAT_146b30e60);
          fVar16 = (float)local_48 - (float)(int)auVar14._0_4_ * fVar4;
          fVar17 = (float)((ulonglong)local_48 >> 0x20) - (float)(int)auVar14._4_4_ * fVar5;
          fVar18 = *(float *)(lVar11 + 0x200) - (float)(int)auVar14._8_4_ * fVar6;
          fVar16 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                          (uint)(fVar16 + fVar4));
          fVar17 = (float)(((uint)(fVar17 + fVar5) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                          (uint)(fVar17 + fVar5));
          fVar18 = (float)(((uint)(fVar18 + fVar6) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                          (uint)(fVar18 + fVar6));
          uVar15 = ((uint)(fVar18 - fVar6) ^ (uint)fVar18) & -(uint)(fRam0000000146b30e58 < fVar18)
                   ^ (uint)fVar18;
          uStack_40 = CONCAT44(uStack_40._4_4_,uVar15);
          *(ulonglong *)pfVar2 =
               CONCAT44(((uint)(fVar17 - fVar5) ^ (uint)fVar17) &
                        -(uint)(fRam0000000146b30e54 < fVar17) ^ (uint)fVar17,
                        ((uint)(fVar16 - fVar4) ^ (uint)fVar16) & -(uint)(_DAT_146b30e50 < fVar16) ^
                        (uint)fVar16);
          *(uint *)(lVar11 + 0x288) = uVar15;
          puVar12 = (undefined8 *)FRotator::Quaternion(pfVar2,local_38);
          uVar7 = puVar12[1];
          *(undefined8 *)(lVar11 + 0x270) = *puVar12;
          *(undefined8 *)(lVar11 + 0x278) = uVar7;
        }
        local_48 = *(undefined8 *)(lVar11 + 0x270);
        uStack_40 = *(undefined8 *)(lVar11 + 0x278);
        FUN_142397be0(lVar11,&local_58,&local_48,0,0,uVar19 & 0xffffffffffffff00);
        FUN_14234b150(lVar11);
        iVar8 = *(int *)(param_1 + 0x7f0);
        *(int *)(param_1 + 0x7f0) = iVar8 + 1;
        if (*(int *)(param_1 + 0x7f4) < iVar8 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar8);
        }
        *(longlong *)(*plVar1 + (longlong)iVar8 * 8) = lVar11;
        if (*(char *)(param_1 + 2000) != '\0') {
          FUN_142ccfee0(param_1,0);
        }
      }
    }
  }
  return;
}



// FUNCTION 142cb64e0 FUN_142cb64e0 body=644 status=ok
// SIG undefined FUN_142cb64e0(void)

void FUN_142cb64e0(longlong *param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined4 uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined4 uVar12;
  float local_78;
  
  if (((param_1[0x30] != 0) && (lVar6 = FUN_1423ac7e0(), lVar6 != 0)) && (param_1[0x6c] != 0)) {
    plVar3 = (longlong *)param_1[0x23];
    if (plVar3 != (longlong *)0x0) {
      lVar7 = AHeoCon::GetPrivateStaticClass(0);
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (cVar5 = (**(code **)(*plVar3 + 0xa60))(plVar3), cVar5 != '\0')) {
        fVar8 = (float)(**(code **)(*param_1 + 0x418))(param_1);
        param_3 = param_3 * fVar8;
      }
    }
    fVar8 = param_2[1];
    fVar1 = *param_2;
    fVar9 = fVar1 * fVar1 + fVar8 * fVar8;
    if (fVar9 == 1.0) {
      fVar10 = fVar8;
      local_78 = fVar1;
      if (param_2[2] == 0.0) {
        local_78 = (float)*(undefined8 *)param_2;
        fVar10 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
      }
    }
    else {
      fVar10 = DAT_1468b5d94;
      local_78 = DAT_1468b5d90;
      if (1e-08 <= fVar9) {
        auVar11 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
        fVar10 = auVar11._0_4_;
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        fVar10 = fVar10 + fVar10 * (0.5 - fVar9 * 0.5 * fVar10 * fVar10);
        local_78 = fVar1 * fVar10;
        fVar10 = fVar8 * fVar10;
      }
    }
    uVar2 = *(undefined4 *)((longlong)param_1 + 0x36c);
    uVar12 = (undefined4)param_1[0x6d];
    lVar7 = FUN_14225eb80(lVar6,param_1[0x6b],param_1 + 0x6c);
    if ((lVar7 != 0) &&
       (*(float *)(lVar7 + 100) <= *(float *)((longlong)param_1 + 0x374) &&
        *(float *)((longlong)param_1 + 0x374) != *(float *)(lVar7 + 100))) {
      uVar12 = (undefined4)param_1[0x6e];
    }
    FUN_142258610(lVar6,param_1 + 0x6c,param_1[0x6b],local_78 * param_3,fVar10 * param_3,0x3f800000,
                  uVar12,uVar2,0,0);
  }
  return;
}



// FUNCTION 142cb6770 FUN_142cb6770 body=375 status=ok
// SIG undefined FUN_142cb6770(void)

void FUN_142cb6770(longlong param_1,float *param_2)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    lVar5 = FUN_1429d7ab0();
    if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      cVar4 = (**(code **)(*plVar2 + 0x778))();
      if ((cVar4 != '\0') && (0.0 < *param_2)) {
        plVar2 = (longlong *)(param_1 + 0x480);
        iVar1 = *(int *)(param_1 + 0x488);
        *(int *)(param_1 + 0x488) = iVar1 + 1;
        if (*(int *)(param_1 + 0x48c) < iVar1 + 1) {
          FUN_141a09b60(plVar2,iVar1);
        }
        lVar5 = *plVar2;
        lVar6 = (longlong)iVar1 * 0x3c;
        *(undefined8 *)(lVar6 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 8 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 0x10 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 0x18 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 0x20 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 0x28 + lVar5) = 0;
        *(undefined8 *)(lVar6 + 0x30 + lVar5) = 0;
        *(undefined4 *)(lVar6 + 0x38 + lVar5) = 0;
        lVar5 = *plVar2;
        *(float *)(lVar5 + 4 + lVar6) = *param_2;
        *(undefined1 *)(lVar5 + 8 + lVar6) = *(undefined1 *)(param_2 + 1);
        *(float *)(lVar5 + 0xc + lVar6) = param_2[2];
        *(float *)(lVar5 + 0x10 + lVar6) = param_2[3];
        *(float *)(lVar5 + 0x14 + lVar6) = param_2[4];
        *(undefined1 *)(lVar5 + 0x18 + lVar6) = *(undefined1 *)(param_2 + 5);
        *(float *)(lVar5 + 0x1c + lVar6) = param_2[6];
        *(float *)(lVar5 + 0x20 + lVar6) = param_2[7];
        *(undefined8 *)(lVar5 + 0x24 + lVar6) = *(undefined8 *)(param_2 + 8);
        *(float *)(lVar5 + 0x2c + lVar6) = param_2[10];
        *(undefined8 *)(lVar5 + 0x30 + lVar6) = *(undefined8 *)(param_2 + 0xb);
        *(float *)(lVar5 + 0x38 + lVar6) = param_2[0xd];
        lVar5 = *(longlong *)(param_1 + 0x120);
        if (lVar5 == 0) {
          lVar5 = FUN_1423407b0(param_1);
        }
        *(undefined4 *)(lVar6 + *plVar2) = *(undefined4 *)(lVar5 + 0x790);
      }
    }
  }
  return;
}



// FUNCTION 142cb68f0 FUN_142cb68f0 body=870 status=ok
// SIG undefined FUN_142cb68f0(void)

void FUN_142cb68f0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  
  lVar2 = param_1[1];
  uVar1 = *(uint *)(lVar2 + 0x28);
  if ((uVar1 >> 0x10 & 1) == 0) {
    if ((((uVar1 & 2) != 0) && ((uVar1 >> 0x17 & 1) == 0)) &&
       ((*(float *)((longlong)param_1 + 0xb4) != 0.0 ||
        ((*(float *)(param_1 + 0x17) != 0.0 || (*(float *)((longlong)param_1 + 0xbc) != 0.0)))))) {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 8;
      lVar2 = *param_1;
      *(float *)((longlong)param_1 + 0x1c) =
           *(float *)(param_1 + 0x17) * *(float *)(lVar2 + 400) +
           *(float *)((longlong)param_1 + 0xb4) * *(float *)(lVar2 + 0x18c) +
           *(float *)((longlong)param_1 + 0xbc) * *(float *)(lVar2 + 0x194);
    }
  }
  else {
    if (*(char *)(lVar2 + 0x4d0) == '\x02') {
      lVar3 = *param_1;
      fVar5 = *(float *)(param_1 + 0x17) * *(float *)(lVar3 + 400) +
              *(float *)((longlong)param_1 + 0xb4) * *(float *)(lVar3 + 0x18c) +
              *(float *)((longlong)param_1 + 0xbc) * *(float *)(lVar3 + 0x194);
      *(float *)((longlong)param_1 + 0x1c) = fVar5;
      if ((*(byte *)(lVar2 + 0x28) & 2) == 0) {
        fVar4 = *(float *)(param_1 + 6);
        if ((*(float *)(param_1 + 6) <= fVar5) &&
           (fVar4 = *(float *)((longlong)param_1 + 0x2c),
           fVar5 <= *(float *)((longlong)param_1 + 0x2c))) {
          fVar4 = fVar5;
        }
        *(float *)((longlong)param_1 + 0x1c) = fVar4;
      }
    }
    else if ((uVar1 & 2) != 0) {
      *(uint *)((longlong)param_1 + 0x15c) = *(uint *)((longlong)param_1 + 0x15c) | 8;
      lVar3 = *param_1;
      *(float *)((longlong)param_1 + 0x1c) =
           *(float *)(param_1 + 0x17) * *(float *)(lVar3 + 400) +
           *(float *)((longlong)param_1 + 0xb4) * *(float *)(lVar3 + 0x18c) +
           *(float *)((longlong)param_1 + 0xbc) * *(float *)(lVar3 + 0x194);
    }
    fVar5 = *(float *)((longlong)param_1 + 0x1c);
    *(ulonglong *)((longlong)param_1 + 0xe4) =
         CONCAT44(fVar5 * *(float *)(param_1 + 0x17),fVar5 * *(float *)((longlong)param_1 + 0xb4));
    *(float *)((longlong)param_1 + 0xec) = fVar5 * *(float *)((longlong)param_1 + 0xbc);
    if (*(char *)(lVar2 + 0x4d1) == '\x02') {
      fVar10 = *(float *)((longlong)param_1 + 0xbc) * DAT_1464aa798._4_4_ -
               *(float *)(param_1 + 0x17) * DAT_1464aa7a0;
      fVar9 = *(float *)(param_1 + 0x17) * (float)DAT_1464aa798 -
              *(float *)((longlong)param_1 + 0xb4) * DAT_1464aa798._4_4_;
      fVar11 = *(float *)((longlong)param_1 + 0xb4) * DAT_1464aa7a0 -
               *(float *)((longlong)param_1 + 0xbc) * (float)DAT_1464aa798;
      fVar6 = fVar10 * fVar10 + fVar11 * fVar11 + fVar9 * fVar9;
      fVar5 = fVar9;
      fVar4 = fVar10;
      fVar7 = fVar11;
      if ((fVar6 != 1.0) &&
         (fVar5 = DAT_1468b5d98, fVar4 = DAT_1468b5d90, fVar7 = DAT_1468b5d94, 1e-08 <= fVar6)) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar5 = fVar7 * fVar9;
        fVar4 = fVar10 * fVar7;
        fVar7 = fVar7 * fVar11;
      }
      lVar3 = *param_1;
      fVar9 = fVar7 * *(float *)(lVar3 + 400) + fVar4 * *(float *)(lVar3 + 0x18c) +
              fVar5 * *(float *)(lVar3 + 0x194);
      *(float *)(param_1 + 4) = fVar9;
      fVar6 = fVar9;
      if ((*(byte *)(lVar2 + 0x28) & 2) == 0) {
        fVar10 = *(float *)(param_1 + 5);
        fVar6 = -fVar10;
        if ((fVar6 <= fVar9) && (fVar6 = fVar9, fVar10 <= fVar9)) {
          fVar6 = fVar10;
        }
        *(float *)(param_1 + 4) = fVar6;
      }
      *(float *)((longlong)param_1 + 0xe4) = fVar4 * fVar6 + *(float *)((longlong)param_1 + 0xe4);
      *(float *)(param_1 + 0x1d) = fVar7 * fVar6 + *(float *)(param_1 + 0x1d);
      *(float *)((longlong)param_1 + 0xec) = fVar5 * fVar6 + *(float *)((longlong)param_1 + 0xec);
      return;
    }
  }
  return;
}



// FUNCTION 142cb6c60 FUN_142cb6c60 body=320 status=ok
// SIG undefined FUN_142cb6c60(void)

float FUN_142cb6c60(longlong *param_1,float param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 auVar5 [16];
  float fVar6;
  float fStack_44;
  
  lVar1 = *param_1;
  if (((byte)*(undefined4 *)(lVar1 + 0x410) & 3) != 3) {
    return param_2;
  }
  fVar6 = (float)*(undefined8 *)((longlong)param_1 + 0xb4);
  fStack_44 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0xb4) >> 0x20);
  fVar3 = fVar6 * fVar6 + fStack_44 * fStack_44;
  if (1e-08 < fVar3) {
    auVar5 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
    fVar4 = auVar5._0_4_;
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar4 = fVar4 + fVar4 * (0.5 - fVar3 * 0.5 * fVar4 * fVar4);
    fVar6 = fVar6 * fVar4;
    fStack_44 = fStack_44 * fVar4;
  }
  if ((0.0001 < ABS(fVar6)) || (0.0001 < ABS(fStack_44))) {
    fVar3 = fStack_44 * *(float *)(lVar1 + 0x45c) + fVar6 * *(float *)(lVar1 + 0x458);
  }
  else {
    fVar3 = 0.0;
  }
  uVar2 = FRuntimeFloatCurve::GetRichCurve(param_1[1] + 0x318);
  fVar3 = (float)FRichCurve::Eval(uVar2,fVar3,0x3f800000);
  return fVar3 * param_2;
}



// FUNCTION 142cb6da0 FUN_142cb6da0 body=344 status=ok
// SIG undefined FUN_142cb6da0(void)

void FUN_142cb6da0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 local_58;
  longlong *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar10 = *param_1;
  lVar9 = (longlong)(int)param_1[1] * 0x50 + lVar10;
  uVar4 = param_4;
  for (; lVar10 != lVar9; lVar10 = lVar10 + 0x50) {
    uVar7 = param_3;
    if (*(char *)(lVar10 + 0x48) != '\0') {
      uVar7 = 0;
    }
    local_48._0_4_ = (undefined4)uVar4;
    local_48._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
    uStack_40._0_4_ = (undefined4)uVar7;
    uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar11 = param_3;
    if (*(char *)(lVar10 + 0x49) != '\x01') {
      uVar11 = param_4;
    }
    local_38 = (undefined4)local_48;
    uStack_34 = local_48._4_4_;
    uStack_30 = (undefined4)uStack_40;
    uStack_2c = uStack_40._4_4_;
    local_48 = uVar4;
    uStack_40 = uVar7;
    FUN_142c901e0(lVar10,&local_58,uVar11,&local_38,param_5,param_6);
    iVar3 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar3 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar3 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_2,iVar3);
    }
    plVar6 = local_50;
    puVar8 = (undefined8 *)((longlong)iVar3 * 0x10 + *param_2);
    *puVar8 = local_58;
    puVar8[1] = local_50;
    if (local_50 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
      UNLOCK();
      if (local_50 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_50 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*local_50)(local_50);
          LOCK();
          piVar2 = (int *)((longlong)plVar6 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plVar6 + 8))(plVar6,1);
          }
        }
      }
    }
    uVar4 = local_48;
  }
  return;
}



// FUNCTION 142cb6f00 FUN_142cb6f00 body=62 status=ok
// SIG undefined FUN_142cb6f00(void)

void FUN_142cb6f00(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_1422363e0();
    FUN_142cdb0d0(param_1);
  }
  return;
}



// FUNCTION 142cb6f40 FUN_142cb6f40 body=62 status=ok
// SIG undefined FUN_142cb6f40(void)

void FUN_142cb6f40(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    AActor::K2_AttachToComponent();
    FUN_142cdb0d0(param_1);
  }
  return;
}



// FUNCTION 142cb6f80 FUN_142cb6f80 body=134 status=ok
// SIG undefined FUN_142cb6f80(void)

undefined8 FUN_142cb6f80(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = FUN_142cdae30();
  if (cVar1 != '\0') {
    FUN_142cd2850(param_1);
    if (((*(byte *)(param_1 + 3) & 2) != 0) && (*param_1 != 0)) {
      iVar2 = FUN_14233f450();
      if (iVar2 == 2) {
        local_28 = 0;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x10,local_48);
        if (puVar3 != (undefined8 *)0x0) {
          puVar3[1] = param_1;
          *puVar3 = &PTR_FUN_143f77b70;
        }
        local_58[0] = FUN_142cbb560;
        FUN_14234b4d0(*param_1,local_58);
      }
    }
    return 1;
  }
  return 0;
}



// FUNCTION 142cb7010 FUN_142cb7010 body=457 status=ok
// SIG undefined FUN_142cb7010(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cb7010(longlong param_1,float param_2)

{
  int iVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  byte bVar7;
  float fStack_64;
  float fStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_38;
  undefined8 uStack_30;
  
  plVar3 = *(longlong **)(param_1 + 0x220);
  if ((((char)plVar3[0x25] == '\x03') && (*(char *)((longlong)plVar3 + 0x95) == '\x02')) &&
     (cVar5 = (**(code **)(*plVar3 + 0x778))(), cVar5 == '\0')) {
    lVar6 = FUN_142cefa30(param_1);
    if ((0.0 < *(float *)(lVar6 + 0x88)) && (*(float *)(lVar6 + 0x88) <= param_2)) {
      iVar1 = *(int *)(lVar6 + 0x8c);
      fVar2 = *(float *)(lVar6 + 0x98);
      fStack_64 = (float)*(undefined8 *)(lVar6 + 0x90);
      fStack_60 = (float)((ulonglong)*(undefined8 *)(lVar6 + 0x90) >> 0x20);
      local_58 = FWeakObjectPtr::Get();
      uStack_30 = 0;
      if ((*(byte *)(param_1 + 0x1968) & 1) == 0) {
        local_38._0_4_ = (undefined4)local_58;
        local_38._4_4_ = (undefined4)((ulonglong)local_58 >> 0x20);
        *(int *)(param_1 + 0x1970) = iVar1;
        *(float *)(param_1 + 0x1974) = fStack_64;
        *(float *)(param_1 + 0x1978) = fStack_60;
        *(float *)(param_1 + 0x197c) = fVar2;
        *(undefined4 *)(param_1 + 0x1980) = (undefined4)local_38;
        *(undefined4 *)(param_1 + 0x1984) = local_38._4_4_;
        *(undefined4 *)(param_1 + 0x1988) = 0;
        *(undefined4 *)(param_1 + 0x198c) = 0;
        if ((((fStack_64 == 0.0) && (fStack_60 == 0.0)) && (fVar2 == 0.0)) || (iVar1 == -1)) {
          bVar7 = 0;
        }
        else {
          bVar7 = 2;
        }
        *(byte *)(param_1 + 0x1968) = *(byte *)(param_1 + 0x1968) & 0xfd | bVar7;
      }
      local_38 = local_58;
      FUN_142cb6f80(param_1 + 0x1950);
      uVar4 = _DAT_1468b5d90;
      local_58._0_4_ = DAT_1468b5d98;
      FWeakObjectPtr::operator=((longlong)&local_58 + 4,0);
      *(undefined4 *)(lVar6 + 0x8c) = 0xffffffff;
      *(undefined4 *)(lVar6 + 0x88) = 0xbf800000;
      *(undefined8 *)(lVar6 + 0x90) = uVar4;
      *(undefined4 *)(lVar6 + 0x98) = (undefined4)local_58;
      *(undefined4 *)(lVar6 + 0x9c) = local_58._4_4_;
      *(undefined4 *)(lVar6 + 0xa0) = local_50;
    }
  }
  return;
}



// FUNCTION 142cb71e0 FUN_142cb71e0 body=406 status=ok
// SIG undefined FUN_142cb71e0(void)

void FUN_142cb71e0(longlong *param_1)

{
  bool bVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  undefined8 in_RAX;
  undefined8 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 local_28;
  float fStack_20;
  float fStack_1c;
  undefined8 local_18;
  undefined4 local_10;
  
  if ((param_1[0x120] != 0) && (lVar7 = *(longlong *)(param_1[0x120] + 0x118), lVar7 != 0)) {
    bVar1 = *(byte *)(lVar7 + 0x128) < 2;
    *(bool *)(param_1 + 0x19d) = bVar1;
    if (!bVar1) {
      lVar7 = *(longlong *)(lVar7 + 0x168);
      if (lVar7 == 0) {
        uVar8 = (undefined4)DAT_1468b5da0;
        uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
        fStack_20 = (float)DAT_1468b5da8;
      }
      else {
        fVar3 = *(float *)(lVar7 + 0x210);
        local_28 = *(undefined8 *)(lVar7 + 0x210);
        fStack_20 = *(float *)(lVar7 + 0x218);
        fStack_1c = *(float *)(lVar7 + 0x21c);
        auVar2._4_4_ = -(uint)(*(float *)(lVar7 + 0x254) != *(float *)(lVar7 + 0x214));
        auVar2._0_4_ = -(uint)(*(float *)(lVar7 + 0x250) != fVar3);
        auVar2._8_4_ = -(uint)(*(float *)(lVar7 + 600) != fStack_20);
        auVar2._12_4_ = -(uint)(*(float *)(lVar7 + 0x25c) != fStack_1c);
        iVar4 = movmskps((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1),auVar2);
        if (iVar4 != 0) {
          *(float *)(lVar7 + 0x250) = fVar3;
          *(float *)(lVar7 + 0x254) = *(float *)(lVar7 + 0x214);
          *(float *)(lVar7 + 600) = fStack_20;
          *(float *)(lVar7 + 0x25c) = fStack_1c;
          puVar5 = (undefined8 *)FQuat::Rotator(&local_28,&local_18);
          *(undefined8 *)(lVar7 + 0x260) = *puVar5;
          *(undefined4 *)(lVar7 + 0x268) = *(undefined4 *)(puVar5 + 1);
        }
        uVar8 = (undefined4)*(undefined8 *)(lVar7 + 0x260);
        uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar7 + 0x260) >> 0x20);
        fStack_20 = (float)*(undefined4 *)(lVar7 + 0x268);
      }
      local_28 = CONCAT44(uVar9,uVar8);
      local_18 = local_28;
      local_10 = fStack_20;
      for (lVar7 = (longlong)param_1 + 0xce9; lVar7 != (longlong)param_1 + 0xcef; lVar7 = lVar7 + 2)
      {
        FUN_142ccee70(lVar7,&local_18);
      }
    }
  }
  thunk_FUN_142223710(param_1);
  uVar6 = UEnvQueryTest_Cover::StaticClass();
  lVar7 = (**(code **)(*param_1 + 0x628))(param_1,uVar6);
  param_1[0x1a2] = lVar7;
  FUN_142cc6870(param_1);
  lVar7 = FUN_142cbf640(param_1,param_1[0x145]);
  param_1[0x146] = lVar7;
  lVar7 = FUN_142cbf640(param_1,param_1[0x179]);
  param_1[0x17a] = lVar7;
  lVar7 = param_1[0x98];
  if (lVar7 != 0) {
    param_1[0x12a] = *(longlong *)(lVar7 + 0x1ec);
    *(undefined4 *)(param_1 + 299) = *(undefined4 *)(lVar7 + 500);
  }
  return;
}



// FUNCTION 142cb7380 FUN_142cb7380 body=51 status=ok
// SIG undefined FUN_142cb7380(void)

void FUN_142cb7380(longlong *param_1)

{
  int iVar1;
  
  FUN_142330a70();
  iVar1 = FUN_14233f450(param_1);
  if (iVar1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x000142cb73a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x420))(param_1);
    return;
  }
  return;
}



// FUNCTION 142cb73c0 FUN_142cb73c0 body=546 status=ok
// SIG undefined FUN_142cb73c0(void)

void FUN_142cb73c0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int *piVar3;
  
  FUN_142d7d8c0();
  FUN_142ccc380(param_1);
  if (param_1[0x32] != 0) {
    if (param_1[0x24] == 0) {
      lVar2 = FUN_1423407b0(param_1);
      if (lVar2 == 0) goto LAB_142cb7436;
    }
    lVar2 = param_1[0x24];
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x540), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x6f8))(plVar1,param_1);
    }
  }
LAB_142cb7436:
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if (*piVar3 < DAT_146b314d0) {
    _Init_thread_header(&DAT_146b314d0);
    if (DAT_146b314d0 == -1) {
      FName::FName(&DAT_146b314c8,L"BP_CrewChallengeComponent_Hunt_Spawner",1);
      _Init_thread_footer(&DAT_146b314d0);
    }
  }
  if (*piVar3 < DAT_146b314e0) {
    _Init_thread_header(&DAT_146b314e0);
    if (DAT_146b314e0 == -1) {
      FName::FName(&DAT_146b314d8,L"BP_CrewChallengeComponent_KillTarget_Spawner",1);
      _Init_thread_footer(&DAT_146b314e0);
    }
  }
  if (*piVar3 < DAT_146b314f0) {
    _Init_thread_header(&DAT_146b314f0);
    if (DAT_146b314f0 == -1) {
      FName::FName(&DAT_146b314e8,L"BP_CrewChallengeComponent_CollectionDeadDrop",1);
      _Init_thread_footer(&DAT_146b314f0);
    }
  }
  if (*piVar3 < DAT_146b31500) {
    _Init_thread_header(&DAT_146b31500);
    if (DAT_146b31500 == -1) {
      FName::FName(&DAT_146b314f8,L"Setup_Challenge",1);
      _Init_thread_footer(&DAT_146b31500);
    }
  }
  lVar2 = param_1[3];
  if (((lVar2 == DAT_146b314c8) || (lVar2 == DAT_146b314d8)) || (lVar2 == DAT_146b314e8)) {
    lVar2 = UObject::FindFunction(param_1,DAT_146b314f8);
    if (lVar2 != 0) {
      (**(code **)(*param_1 + 0x208))(param_1,lVar2,0);
    }
  }
  return;
}



// FUNCTION 142cb75f0 FUN_142cb75f0 body=118 status=ok
// SIG undefined FUN_142cb75f0(void)

void FUN_142cb75f0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  FUN_142cb73c0();
  if (*(longlong *)(param_1 + 400) != 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar2 = FUN_1423407b0(param_1), lVar2 == 0)) {
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (lVar2 == 0) {
      lVar2 = FUN_1423407b0(param_1);
    }
    lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
    if ((lVar2 != 0) && (plVar1 = *(longlong **)(lVar2 + 0x540), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000142cb7659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x6f8))(plVar1,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142cb7670 FUN_142cb7670 body=113 status=ok
// SIG undefined FUN_142cb7670(void)

float FUN_142cb7670(byte param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)param_1 * 1.4117647;
  fVar2 = (float)(int)(fVar1 * 0.0027777778) * 360.0;
  if (ABS(fVar1) < ABS(fVar2)) {
    fVar2 = fVar1;
  }
  fVar1 = fVar1 - fVar2;
  if (fVar1 < 0.0) {
    fVar1 = fVar1 + 360.0;
  }
  if (180.0 < fVar1) {
    fVar1 = fVar1 - 360.0;
  }
  return fVar1;
}



// FUNCTION 142cb76f0 FUN_142cb76f0 body=590 status=ok
// SIG undefined FUN_142cb76f0(void)

void FUN_142cb76f0(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined8 local_68;
  undefined4 local_60;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  undefined1 local_48 [4];
  float local_44;
  undefined1 local_38 [48];
  
  plVar1 = *(longlong **)(*param_1 + 0xfd8);
  plVar2 = (longlong *)plVar1[0x92];
  if (((plVar2 == (longlong *)0x0) || ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) == 0)) ||
     (cVar3 = (**(code **)(*plVar2 + 0x768))(), cVar3 == '\0')) {
    *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  }
  else {
    local_50 = 0;
    local_58 = (float)*(undefined8 *)(*param_1 + 0x2650);
    local_68._4_4_ = (float)((ulonglong)*(undefined8 *)(*param_1 + 0x2650) >> 0x20);
    fVar5 = local_58 * local_58 + local_68._4_4_ * local_68._4_4_;
    if (fVar5 <= 1.0) {
      fStack_54 = local_68._4_4_;
    }
    else {
      auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
      fVar6 = auVar7._0_4_;
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
      fStack_54 = fVar6 * local_68._4_4_;
      local_58 = fVar6 * local_58;
    }
    local_68 = CONCAT44(fStack_54,local_58);
    local_60 = 0;
    if (((*(uint *)(param_1[1] + 0x28) & 0x40000) != 0) &&
       (((*(float *)((longlong)param_1 + 0xb4) != 0.0 || (*(float *)(param_1 + 0x17) != 0.0)) ||
        (*(float *)((longlong)param_1 + 0xbc) != 0.0)))) {
      (**(code **)(*plVar1 + 0x738))(plVar1,local_48);
      FVector::Rotation((longlong)param_1 + 0xb4,&local_58);
      local_44 = fStack_54 - local_44;
      fVar5 = (float)(int)(local_44 * 0.0027777778) * 360.0;
      if (ABS(local_44) < ABS(fVar5)) {
        fVar5 = local_44;
      }
      local_44 = local_44 - fVar5;
      if (local_44 < 0.0) {
        local_44 = local_44 + 360.0;
      }
      if (180.0 < local_44) {
        local_44 = local_44 - 360.0;
      }
      puVar4 = (undefined8 *)FVector::RotateAngleAxis(&local_68,local_38,local_44,&DAT_1464aa798);
      local_68 = *puVar4;
    }
    *(float *)((longlong)param_1 + 0x13c) = local_68._4_4_;
    *(undefined4 *)(param_1 + 0x28) = (undefined4)local_68;
  }
  return;
}



// FUNCTION 142cb7940 FUN_142cb7940 body=66 status=ok
// SIG undefined FUN_142cb7940(void)

void FUN_142cb7940(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  *param_1 = param_2;
  lVar1 = *(longlong *)(param_2 + 0x1948);
  param_1[1] = lVar1;
  if (lVar1 != 0) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    param_1[2] = *(longlong *)(DAT_146b33f38 + 0x58);
  }
  return;
}



// FUNCTION 142cb7990 FUN_142cb7990 body=1379 status=ok
// SIG undefined FUN_142cb7990(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_142cb7990(longlong param_1,undefined8 *param_2,undefined1 *param_3,longlong param_4)

{
  ulonglong uVar1;
  bool bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float *pfVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [12];
  undefined1 local_6c [12];
  undefined1 local_60 [16];
  undefined1 local_50 [56];
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *param_2 = CONCAT44(DAT_1466ad120._4_4_,(float)DAT_1466ad120);
  *(float *)(param_2 + 1) = DAT_1466ad128;
  *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(DAT_1466ad100._4_4_,(undefined4)DAT_1466ad100);
  *(undefined4 *)((longlong)param_2 + 0x14) = DAT_1466ad108;
  fVar12 = DAT_1466ad128;
  fVar13 = DAT_1466ad120._4_4_;
  fVar17 = (float)DAT_1466ad120;
  uVar10 = DAT_1466ad108;
  uVar19 = DAT_1466ad100._4_4_;
  uVar18 = (undefined4)DAT_1466ad100;
  switch(*param_3) {
  case 1:
    plVar7 = *(longlong **)(param_4 + 0x220);
    if ((plVar7 != (longlong *)0x0) &&
       (plVar3 = (longlong *)FWeakObjectPtr::Get(param_3 + 4), plVar3 != (longlong *)0x0)) {
      if ((*(char *)(param_4 + 0x147d) == '\0') &&
         (plVar7 = (longlong *)(**(code **)(*plVar7 + 0x668))(plVar7), plVar7 != (longlong *)0x0)) {
        lVar6 = FUN_142c2de20();
        if ((*(int *)(plVar7[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar7[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x8a0))(plVar7,local_78,plVar3);
          fVar17 = (float)*puVar9;
          fVar13 = (float)((ulonglong)*puVar9 >> 0x20);
          fVar12 = *(float *)(puVar9 + 1);
          goto LAB_142cb7b7a;
        }
      }
      lVar6 = FUN_142dddd00(plVar3);
      if (lVar6 == 0) {
        pfVar5 = (float *)(**(code **)(*plVar3 + 0x560))(plVar3,local_50,0);
        fVar17 = (*pfVar5 + pfVar5[3]) * 0.5;
        fVar12 = (pfVar5[5] + pfVar5[2]) * 0.5;
        fVar13 = (pfVar5[4] + pfVar5[1]) * 0.5;
      }
      else {
        uVar4 = FUN_142ced280(param_4,local_6c,param_3[0x38]);
        FRotator::Vector(uVar4,&local_98);
        FUN_142ced180(param_4,local_88,param_3[0x38]);
        puVar9 = (undefined8 *)FUN_142dce5a0(lVar6,local_60,local_88,&local_98);
        fVar17 = (float)*puVar9;
        fVar13 = (float)((ulonglong)*puVar9 >> 0x20);
        fVar12 = *(float *)(puVar9 + 1);
      }
    }
LAB_142cb7b7a:
    *param_2 = CONCAT44(fVar13,fVar17);
    *(float *)(param_2 + 1) = fVar12;
    break;
  case 2:
    local_98 = CONCAT44(DAT_1466ad120._4_4_,(float)DAT_1466ad120);
    local_90 = DAT_1466ad128;
    plVar7 = (longlong *)FWeakObjectPtr::Get(param_3 + 4);
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x610))(plVar7,&local_98,local_60);
    }
    *param_2 = local_98;
    *(float *)(param_2 + 1) = local_90;
    break;
  case 3:
    lVar6 = FWeakObjectPtr::Get(param_3 + 0xc);
    if (lVar6 != 0) {
      fVar17 = *(float *)(lVar6 + 0x220);
      fVar13 = *(float *)(lVar6 + 0x224);
      fVar12 = *(float *)(lVar6 + 0x228);
    }
    *param_2 = CONCAT44(fVar13,fVar17);
    *(float *)(param_2 + 1) = fVar12;
    break;
  case 4:
    *param_2 = *(undefined8 *)(param_3 + 0x14);
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 0x1c);
    break;
  case 5:
    puVar9 = (undefined8 *)FVector::Rotation(param_3 + 0x14,local_60);
    *(undefined8 *)((longlong)param_2 + 0xc) = *puVar9;
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(puVar9 + 1);
    break;
  case 6:
    *(undefined8 *)((longlong)param_2 + 0xc) = *(undefined8 *)(param_3 + 0x20);
    *(undefined4 *)((longlong)param_2 + 0x14) = *(undefined4 *)(param_3 + 0x28);
    break;
  case 7:
    if ((*(longlong **)(param_4 + 0x220) != (longlong *)0x0) &&
       (plVar7 = (longlong *)(**(code **)(**(longlong **)(param_4 + 0x220) + 0x668))(),
       plVar7 != (longlong *)0x0)) {
      puVar9 = (undefined8 *)(**(code **)(*plVar7 + 0x760))(plVar7,local_60);
LAB_142cb7ec1:
      uVar18 = (undefined4)*puVar9;
      uVar19 = (undefined4)((ulonglong)*puVar9 >> 0x20);
      uVar10 = *(undefined4 *)(puVar9 + 1);
    }
    goto LAB_142cb7ec8;
  case 8:
    local_90 = (float)DAT_1466ad108;
    local_98 = CONCAT44(DAT_1466ad100._4_4_,(undefined4)DAT_1466ad100);
    if (*(longlong **)(param_4 + 0x220) == (longlong *)0x0) {
      *(undefined8 *)((longlong)param_2 + 0xc) = local_98;
      *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
    }
    else {
      plVar7 = (longlong *)(**(code **)(**(longlong **)(param_4 + 0x220) + 0x668))();
      if (plVar7 == (longlong *)0x0) {
        puVar9 = (undefined8 *)FUN_142cc2ec0(param_1 + 0x10b,local_6c);
        uVar10 = *(undefined4 *)(puVar9 + 1);
        *(undefined8 *)((longlong)param_2 + 0xc) = *puVar9;
        *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
      }
      else {
        puVar8 = (ulonglong *)(**(code **)(*plVar7 + 0x720))(plVar7,local_60);
        fVar12 = (float)DAT_146b30e60;
        fVar17 = DAT_146b30e60._4_4_;
        fVar13 = DAT_146b30e60._8_4_;
        uVar1 = *puVar8;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar1;
        auVar11 = divps(auVar11,_DAT_146b30e60);
        fVar14 = (float)uVar1 - (float)(int)auVar11._0_4_ * fVar12;
        fVar15 = (float)(uVar1 >> 0x20) - (float)(int)auVar11._4_4_ * fVar17;
        fVar16 = 0.0 - (float)(int)auVar11._8_4_ * fVar13;
        fVar14 = (float)(((uint)(fVar14 + fVar12) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                        (uint)(fVar14 + fVar12));
        fVar15 = (float)(((uint)(fVar15 + fVar17) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                        (uint)(fVar15 + fVar17));
        fVar16 = (float)(((uint)(fVar16 + fVar13) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                        (uint)(fVar16 + fVar13));
        bVar2 = fRam0000000146b30e58 < fVar16;
        *(ulonglong *)((longlong)param_2 + 0xc) =
             CONCAT44(((uint)(fVar15 - fVar17) ^ (uint)fVar15) &
                      -(uint)(fRam0000000146b30e54 < fVar15) ^ (uint)fVar15,
                      ((uint)(fVar14 - fVar12) ^ (uint)fVar14) & -(uint)(_DAT_146b30e50 < fVar14) ^
                      (uint)fVar14);
        *(uint *)((longlong)param_2 + 0x14) =
             ((uint)(fVar16 - fVar13) ^ (uint)fVar16) & -(uint)bVar2 ^ (uint)fVar16;
      }
    }
    break;
  case 9:
    plVar7 = *(longlong **)(param_4 + 0x20f8);
    if (plVar7 == (longlong *)0x0) goto LAB_142cb7ec8;
    (**(code **)(*plVar7 + 0x400))(plVar7,&local_98);
    if ((((((float)local_98 <= -(float)DAT_1466ad120) || ((float)DAT_1466ad120 <= (float)local_98))
         || (local_98._4_4_ <= -DAT_1466ad120._4_4_)) ||
        ((DAT_1466ad120._4_4_ <= local_98._4_4_ || (local_90 <= -DAT_1466ad128)))) ||
       (DAT_1466ad128 <= local_90)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((((float)local_98 != 0.0) || (local_98._4_4_ != 0.0)) || (local_90 != 0.0)) {
        bVar2 = false;
      }
      if (bVar2) goto LAB_142cb7eae;
      bVar2 = true;
    }
    else {
LAB_142cb7eae:
      bVar2 = false;
    }
    if (bVar2) {
      puVar9 = (undefined8 *)FVector::Rotation(&local_98,local_60);
      goto LAB_142cb7ec1;
    }
LAB_142cb7ec8:
    *(ulonglong *)((longlong)param_2 + 0xc) = CONCAT44(uVar19,uVar18);
    *(undefined4 *)((longlong)param_2 + 0x14) = uVar10;
  }
  return param_2;
}



// FUNCTION 142cb7f20 FUN_142cb7f20 body=9477 status=ok
// SIG undefined FUN_142cb7f20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142cb7f20(longlong param_1,float *param_2,float *param_3)

{
  undefined1 (*pauVar1) [12];
  longlong lVar2;
  longlong lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 uVar11;
  undefined1 auVar12 [16];
  char cVar13;
  int iVar14;
  undefined4 uVar15;
  float *pfVar16;
  longlong *plVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  undefined1 auStack_868 [32];
  undefined4 local_848;
  undefined1 local_838 [8];
  float fStack_830;
  float fStack_82c;
  float local_828;
  float fStack_824;
  float fStack_820;
  float fStack_81c;
  float local_818;
  float fStack_814;
  float fStack_810;
  float fStack_80c;
  float local_808;
  float fStack_804;
  float fStack_800;
  float fStack_7fc;
  float local_7f8;
  float fStack_7f4;
  float fStack_7f0;
  float fStack_7ec;
  float local_7e8;
  float fStack_7e4;
  float fStack_7e0;
  float fStack_7dc;
  float local_7d8;
  float fStack_7d4;
  float fStack_7d0;
  float fStack_7cc;
  float local_7c8;
  float fStack_7c4;
  float fStack_7c0;
  float fStack_7bc;
  float local_7b8;
  float fStack_7b4;
  float fStack_7b0;
  float fStack_7ac;
  float local_7a8;
  float fStack_7a4;
  float fStack_7a0;
  float fStack_79c;
  float local_798;
  float fStack_794;
  float fStack_790;
  float fStack_78c;
  float local_788;
  float fStack_784;
  float fStack_780;
  float fStack_77c;
  float local_778;
  float fStack_774;
  float fStack_770;
  float fStack_76c;
  float local_768;
  float fStack_764;
  float fStack_760;
  float fStack_75c;
  float local_758;
  float fStack_754;
  float fStack_750;
  float fStack_74c;
  float local_748;
  float fStack_744;
  float fStack_740;
  float fStack_73c;
  float local_738;
  float fStack_734;
  float fStack_730;
  float fStack_72c;
  float local_728;
  float fStack_724;
  float fStack_720;
  float fStack_71c;
  float local_718;
  float fStack_714;
  float fStack_710;
  float fStack_70c;
  float local_708;
  float fStack_704;
  float fStack_700;
  float fStack_6fc;
  float local_6f8;
  float fStack_6f4;
  float fStack_6f0;
  float fStack_6ec;
  float local_6e8;
  float fStack_6e4;
  float fStack_6e0;
  float fStack_6dc;
  float local_6d8;
  float fStack_6d4;
  float fStack_6d0;
  float fStack_6cc;
  float local_6c8;
  float fStack_6c4;
  float fStack_6c0;
  float fStack_6bc;
  float local_6b8;
  float fStack_6b4;
  float fStack_6b0;
  float fStack_6ac;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  float local_698;
  float fStack_694;
  float fStack_690;
  float fStack_68c;
  float local_688;
  float fStack_684;
  float fStack_680;
  float fStack_67c;
  undefined4 local_678;
  undefined4 local_674;
  undefined4 local_670;
  undefined4 local_668;
  undefined4 local_664;
  undefined4 local_660;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  float local_648;
  float fStack_644;
  float fStack_640;
  float fStack_63c;
  undefined1 local_638 [8];
  float fStack_630;
  float fStack_62c;
  float local_628;
  float fStack_624;
  float fStack_620;
  float fStack_61c;
  float local_618;
  float fStack_614;
  float fStack_610;
  float fStack_60c;
  undefined8 local_608;
  undefined8 uStack_600;
  float local_5f8;
  float fStack_5f4;
  float fStack_5f0;
  float fStack_5ec;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined8 local_5d8;
  undefined8 uStack_5d0;
  undefined1 local_5c8 [16];
  float local_5b8;
  float fStack_5b4;
  float fStack_5b0;
  float fStack_5ac;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  float local_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float local_588;
  float fStack_584;
  float fStack_580;
  float fStack_57c;
  undefined8 local_578;
  undefined8 uStack_570;
  float local_568;
  float fStack_564;
  float fStack_560;
  float fStack_55c;
  float local_558;
  float fStack_554;
  float fStack_550;
  float fStack_54c;
  undefined8 local_548;
  undefined8 uStack_540;
  float local_538;
  float fStack_534;
  float fStack_530;
  float fStack_52c;
  float local_528;
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  undefined8 local_518;
  undefined8 uStack_510;
  float local_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float local_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float local_4e8;
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float local_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  float fStack_4bc;
  undefined1 local_4b8 [16];
  float local_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float local_498;
  float fStack_494;
  float fStack_490;
  float fStack_48c;
  undefined8 local_488;
  undefined8 uStack_480;
  float local_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float local_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  undefined1 local_438 [16];
  float local_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float local_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float local_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float local_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float local_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float local_3d8;
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float local_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float fStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  float fStack_3ac;
  float local_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float local_398;
  float fStack_394;
  float fStack_390;
  float fStack_38c;
  float local_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  float fStack_36c;
  float local_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float local_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float local_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float local_338;
  float fStack_334;
  float fStack_330;
  float fStack_32c;
  float local_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float local_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float local_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float local_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float local_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float local_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float local_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float local_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float local_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float local_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  float fStack_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  ulonglong local_c8;
  
  fVar53 = fRam0000000146b30e98;
  fVar51 = fRam0000000146b30e94;
  fVar47 = _DAT_146b30e90;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_868;
  if ((*(longlong *)(param_1 + 0x180) == 0) || (*(longlong *)(param_1 + 0x118) == 0)) {
    uVar11 = CONCAT44(fRam00000001468b5b7c,fRam00000001468b5b78);
    *(ulonglong *)param_2 = CONCAT44(fRam00000001468b5b74,_DAT_1468b5b70);
    *(undefined8 *)(param_2 + 2) = uVar11;
    uVar11 = CONCAT44(fRam00000001468b5b8c,fRam00000001468b5b88);
    *(ulonglong *)(param_2 + 4) = CONCAT44(fRam00000001468b5b84,_DAT_1468b5b80);
    *(undefined8 *)(param_2 + 6) = uVar11;
    uVar11 = CONCAT44(fRam00000001468b5b9c,fRam00000001468b5b98);
    *(ulonglong *)(param_2 + 8) = CONCAT44(fRam00000001468b5b94,_DAT_1468b5b90);
    *(undefined8 *)(param_2 + 10) = uVar11;
  }
  else {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
    if (lVar2 == 0) {
      local_458 = 0.0;
      fStack_454 = 0.0;
      fStack_450 = 0.0;
      fStack_44c = 0.0;
      local_468 = 0.0;
      fStack_464 = 0.0;
      fStack_460 = 0.0;
      fVar54 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
      fVar55 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
      fVar56 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
      fVar57 = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
      local_128 = 0;
      uStack_124 = 0;
      uStack_120 = 0;
      fStack_11c = fRam0000000146b30e9c;
      local_118 = 0;
      uStack_110 = 0;
      fStack_45c = fRam0000000146b30e9c;
      local_108 = fVar54;
      fStack_104 = fVar55;
      fStack_100 = fVar56;
      fStack_fc = fVar57;
    }
    else {
      local_468 = *(float *)(lVar2 + 0x210);
      fStack_464 = *(float *)(lVar2 + 0x214);
      fStack_460 = *(float *)(lVar2 + 0x218);
      fStack_ec = *(float *)(lVar2 + 0x21c);
      local_458 = *(float *)(lVar2 + 0x220);
      fStack_454 = *(float *)(lVar2 + 0x224);
      fStack_450 = *(float *)(lVar2 + 0x228);
      fStack_44c = *(float *)(lVar2 + 0x22c);
      fVar54 = *(float *)(lVar2 + 0x230);
      fVar55 = *(float *)(lVar2 + 0x234);
      fVar56 = *(float *)(lVar2 + 0x238);
      fVar57 = *(float *)(lVar2 + 0x23c);
      fStack_45c = fStack_ec;
      local_f8 = local_468;
      fStack_f4 = fStack_464;
      fStack_f0 = fStack_460;
      local_e8 = local_458;
      fStack_e4 = fStack_454;
      fStack_e0 = fStack_450;
      fStack_dc = fStack_44c;
      local_d8 = fVar54;
      fStack_d4 = fVar55;
      fStack_d0 = fVar56;
      fStack_cc = fVar57;
    }
    fVar58 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
    fVar59 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
    fVar60 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
    fVar61 = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
    local_4c8 = 0;
    uStack_4c4 = 0;
    uStack_4c0 = 0;
    fStack_4bc = fRam0000000146b30e9c;
    fVar42 = *(float *)(param_1 + 0x498);
    pauVar1 = (undefined1 (*) [12])(param_1 + 0x490);
    fVar48 = *(float *)*pauVar1;
    fVar52 = *(float *)(param_1 + 0x494);
    auVar18._4_4_ = fVar59;
    auVar18._0_4_ = fVar58;
    auVar18._8_4_ = fVar60;
    auVar18._12_4_ = fVar61;
    auVar19._4_4_ = fVar55;
    auVar19._0_4_ = fVar54;
    auVar19._8_4_ = fVar56;
    auVar19._12_4_ = fVar57;
    auVar19 = minps(auVar18,auVar19);
    auVar20._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b30ef4);
    auVar20._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b30ef0);
    auVar20._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b30ef8);
    auVar20._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b30efc);
    iVar14 = movmskps((int)lVar2,auVar20);
    local_4b8._12_4_ = 0;
    local_4b8._0_12_ = *pauVar1;
    local_648 = 0.0;
    fStack_644 = 0.0;
    fStack_640 = 0.0;
    fStack_63c = fRam0000000146b30e9c;
    _local_638 = ZEXT816(0);
    local_4a8 = fVar58;
    fStack_4a4 = fVar59;
    fStack_4a0 = fVar60;
    fStack_49c = fVar61;
    local_448 = fVar54;
    fStack_444 = fVar55;
    fStack_440 = fVar56;
    fStack_43c = fVar57;
    if (iVar14 == 0) {
      fVar48 = fVar48 * fVar54;
      fVar52 = fVar52 * fVar55;
      fVar42 = fVar42 * fVar56;
      fVar40 = fVar57 * 0.0;
      local_828 = fRam0000000146b30e9c * local_468 * _DAT_146b30ed0 + fStack_45c * 0.0 +
                  fStack_464 * 0.0 * _DAT_146b30ec0 + fStack_460 * 0.0 * _DAT_146b30eb0;
      fStack_824 = local_468 * 0.0 * fRam0000000146b30ed4 + fStack_45c * 0.0 +
                   fRam0000000146b30e9c * fStack_464 * fRam0000000146b30ec4 +
                   fStack_460 * 0.0 * fRam0000000146b30eb4;
      fStack_640 = local_468 * 0.0 * fRam0000000146b30ed8 + fStack_45c * 0.0 +
                   fStack_464 * 0.0 * fRam0000000146b30ec8 +
                   fRam0000000146b30e9c * fStack_460 * fRam0000000146b30eb8;
      fStack_81c = local_468 * 0.0 * fRam0000000146b30edc + fStack_45c * fRam0000000146b30e9c +
                   fStack_464 * 0.0 * fRam0000000146b30ecc + fStack_460 * 0.0 * fRam0000000146b30ebc
      ;
      fVar47 = fVar42 * fStack_464 - fVar52 * fStack_460;
      fVar51 = fVar48 * fStack_460 - fVar42 * local_468;
      fVar53 = fVar52 * local_468 - fVar48 * fStack_464;
      fVar39 = fVar40 * fStack_45c - fVar40 * fStack_45c;
      fVar47 = fVar47 + fVar47;
      fVar51 = fVar51 + fVar51;
      fVar53 = fVar53 + fVar53;
      fVar39 = fVar39 + fVar39;
      local_638._4_4_ =
           (fVar47 * fStack_460 - fVar53 * local_468) + fVar51 * fStack_45c + fVar52 + fStack_454;
      local_638._0_4_ =
           (fVar53 * fStack_464 - fVar51 * fStack_460) + fVar47 * fStack_45c + fVar48 + local_458;
      fStack_630 = (fVar51 * local_468 - fVar47 * fStack_464) + fVar53 * fStack_45c + fVar42 +
                   fStack_450;
      fStack_62c = (fVar39 * fStack_45c - fVar39 * fStack_45c) + fVar39 * fStack_45c + fVar40 +
                   fStack_44c;
    }
    else {
      fVar39 = fStack_464 + fStack_464;
      fVar41 = fStack_460 + fStack_460;
      fVar43 = local_468 * (local_468 + local_468);
      fVar40 = (local_468 + local_468) * fStack_45c;
      fStack_424 = (fVar41 * fStack_45c + fVar39 * local_468) * fVar54;
      fStack_410 = (fVar40 + fVar41 * fStack_464) * fVar55;
      local_408 = (fVar39 * fStack_45c + fVar41 * local_468) * fVar56;
      local_418 = fVar55 * (fVar39 * local_468 - fVar41 * fStack_45c);
      fStack_404 = fVar56 * (fVar41 * fStack_464 - fVar40);
      fStack_420 = fVar54 * (fVar41 * local_468 - fVar39 * fStack_45c);
      local_428 = (float)((uint)((_DAT_146b30e90 - (fStack_460 * fVar41 + fStack_464 * fVar39)) *
                                fVar54) & _DAT_146b30ea0);
      fStack_414 = (float)((uint)((fRam0000000146b30e94 - (fStack_460 * fVar41 + fVar43)) * fVar55)
                          & uRam0000000146b30ea4);
      fStack_400 = (float)((uint)((fRam0000000146b30e98 - (fStack_464 * fVar39 + fVar43)) * fVar56)
                          & uRam0000000146b30ea8);
      fStack_41c = (float)((uint)((fRam0000000146b30e9c - (fVar43 + fVar43)) * fVar57) &
                          uRam0000000146b30eac);
      fStack_3ec = fRam0000000146b30e9c;
      fStack_3e4 = (fRam0000000146b30e9c * 0.0 + 0.0) * fVar58;
      fStack_3d0 = (fRam0000000146b30e9c * 0.0 + 0.0) * fVar59;
      local_3c8 = (fRam0000000146b30e9c * 0.0 + 0.0) * fVar60;
      local_3d8 = fVar59 * (0.0 - fRam0000000146b30e9c * 0.0);
      fStack_3c4 = fVar60 * (0.0 - fRam0000000146b30e9c * 0.0);
      fStack_3e0 = fVar58 * (0.0 - fRam0000000146b30e9c * 0.0);
      local_3e8 = (float)((uint)((_DAT_146b30e90 - 0.0) * fVar58) & _DAT_146b30ea0);
      fStack_3d4 = (float)((uint)((fRam0000000146b30e94 - 0.0) * fVar59) & uRam0000000146b30ea4);
      fStack_3c0 = (float)((uint)((fRam0000000146b30e98 - 0.0) * fVar60) & uRam0000000146b30ea8);
      fStack_3dc = (float)((uint)((fRam0000000146b30e9c - 0.0) * fVar61) & uRam0000000146b30eac);
      local_708 = fStack_3e4 * local_418 + local_3e8 * local_428 + fStack_3e0 * local_408 +
                  fStack_3dc * local_458;
      fStack_704 = fStack_3e4 * fStack_414 + local_3e8 * fStack_424 + fStack_3e0 * fStack_404 +
                   fStack_3dc * fStack_454;
      fStack_700 = fStack_3e4 * fStack_410 + local_3e8 * fStack_420 + fStack_3e0 * fStack_400 +
                   fStack_3dc * fStack_450;
      fStack_6fc = fStack_3e4 * fStack_41c + local_3e8 * fStack_41c + fStack_3e0 * fStack_41c +
                   fStack_3dc * fRam0000000146b30e9c;
      fStack_3ac = fRam0000000146b30e9c;
      local_6f8 = fStack_3d4 * local_418 + local_3d8 * local_428 + fStack_3d0 * local_408 +
                  fStack_3dc * local_458;
      fStack_6f4 = fStack_3d4 * fStack_414 + local_3d8 * fStack_424 + fStack_3d0 * fStack_404 +
                   fStack_3dc * fStack_454;
      fStack_6f0 = fStack_3d4 * fStack_410 + local_3d8 * fStack_420 + fStack_3d0 * fStack_400 +
                   fStack_3dc * fStack_450;
      fStack_6ec = fStack_3d4 * fStack_41c + local_3d8 * fStack_41c + fStack_3d0 * fStack_41c +
                   fStack_3dc * fRam0000000146b30e9c;
      local_6e8 = fStack_3c4 * local_418 + local_3c8 * local_428 + fStack_3c0 * local_408 +
                  fStack_3dc * local_458;
      fStack_6e4 = fStack_3c4 * fStack_414 + local_3c8 * fStack_424 + fStack_3c0 * fStack_404 +
                   fStack_3dc * fStack_454;
      fStack_6e0 = fStack_3c4 * fStack_410 + local_3c8 * fStack_420 + fStack_3c0 * fStack_400 +
                   fStack_3dc * fStack_450;
      fStack_6dc = fStack_3c4 * fStack_41c + local_3c8 * fStack_41c + fStack_3c0 * fStack_41c +
                   fStack_3dc * fRam0000000146b30e9c;
      local_6d8 = fVar52 * local_418 + fVar48 * local_428 + fVar42 * local_408 +
                  fRam0000000146b30e9c * local_458;
      fStack_6d4 = fVar52 * fStack_414 + fVar48 * fStack_424 + fVar42 * fStack_404 +
                   fRam0000000146b30e9c * fStack_454;
      fStack_6d0 = fVar52 * fStack_410 + fVar48 * fStack_420 + fVar42 * fStack_400 +
                   fRam0000000146b30e9c * fStack_450;
      fStack_6cc = fVar52 * fStack_41c + fVar48 * fStack_41c + fVar42 * fStack_41c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      local_628 = fVar58;
      fStack_624 = fVar59;
      fStack_620 = fVar60;
      fStack_61c = fVar61;
      fStack_40c = fStack_41c;
      fStack_3fc = fStack_41c;
      local_3f8 = local_458;
      fStack_3f4 = fStack_454;
      fStack_3f0 = fStack_450;
      fStack_3cc = fStack_3dc;
      fStack_3bc = fStack_3dc;
      local_3b8 = *(undefined4 *)*pauVar1;
      uStack_3b4 = *(undefined4 *)(param_1 + 0x494);
      uStack_3b0 = *(undefined4 *)(param_1 + 0x498);
      FMatrix::RemoveScaling(&local_708);
      fVar47 = (float)(-(uint)(_DAT_146b30ef0 <= fVar58 * fVar54) & (_DAT_146b30ee0 ^ (uint)fVar47)
                      ^ _DAT_146b30ee0);
      fVar51 = (float)(-(uint)(fRam0000000146b30ef4 <= fVar59 * fVar55) &
                       (uRam0000000146b30ee4 ^ (uint)fVar51) ^ uRam0000000146b30ee4);
      fVar53 = (float)(-(uint)(fRam0000000146b30ef8 <= fVar60 * fVar56) &
                       (uRam0000000146b30ee8 ^ (uint)fVar53) ^ uRam0000000146b30ee8);
      local_708 = local_708 * fVar47;
      fStack_704 = fStack_704 * fVar47;
      fStack_700 = fStack_700 * fVar47;
      fStack_6f4 = fStack_6f4 * fVar51;
      fStack_6f0 = fStack_6f0 * fVar51;
      local_6f8 = local_6f8 * fVar51;
      fStack_6e4 = fStack_6e4 * fVar53;
      fStack_6e0 = fStack_6e0 * fVar53;
      local_6e8 = local_6e8 * fVar53;
      FQuat::FQuat(local_838,&local_708);
      local_848 = 0x322bcc77;
      auVar32._0_4_ = (float)local_838._0_4_ * (float)local_838._0_4_ + fStack_830 * fStack_830;
      auVar32._4_4_ = (float)local_838._4_4_ * (float)local_838._4_4_ + fStack_82c * fStack_82c;
      auVar32._8_4_ = fStack_830 * fStack_830 + (float)local_838._0_4_ * (float)local_838._0_4_;
      auVar32._12_4_ = fStack_82c * fStack_82c + (float)local_838._4_4_ * (float)local_838._4_4_;
      fVar48 = auVar32._4_4_ + auVar32._0_4_;
      fVar52 = auVar32._8_4_ + auVar32._4_4_;
      fVar39 = auVar32._12_4_ + auVar32._8_4_;
      fVar40 = auVar32._0_4_ + auVar32._12_4_;
      auVar4._4_4_ = fVar52;
      auVar4._0_4_ = fVar48;
      auVar4._8_4_ = fVar39;
      auVar4._12_4_ = fVar40;
      auVar19 = rsqrtps(auVar32,auVar4);
      fVar47 = auVar19._0_4_;
      fVar51 = auVar19._4_4_;
      fVar53 = auVar19._8_4_;
      fVar42 = auVar19._12_4_;
      fVar47 = (_DAT_146b30e80 - fVar47 * fVar47 * fVar48 * _DAT_146b30e80) * fVar47 + fVar47;
      fVar51 = (fRam0000000146b30e84 - fVar51 * fVar51 * fVar52 * fRam0000000146b30e84) * fVar51 +
               fVar51;
      fVar53 = (fRam0000000146b30e88 - fVar53 * fVar53 * fVar39 * fRam0000000146b30e88) * fVar53 +
               fVar53;
      fVar42 = (fRam0000000146b30e8c - fVar42 * fVar42 * fVar40 * fRam0000000146b30e8c) * fVar42 +
               fVar42;
      local_638._4_4_ = fStack_6d4;
      local_638._0_4_ = local_6d8;
      fStack_630 = fStack_6d0;
      local_828 = (float)(((uint)(((_DAT_146b30e80 - fVar47 * fVar47 * fVar48 * _DAT_146b30e80) *
                                   fVar47 + fVar47) * (float)local_838._0_4_) ^ _DAT_146b30e70) &
                          -(uint)(1e-08 <= fVar48) ^ _DAT_146b30e70);
      fStack_824 = (float)(((uint)(((fRam0000000146b30e84 -
                                    fVar51 * fVar51 * fVar52 * fRam0000000146b30e84) * fVar51 +
                                   fVar51) * (float)local_838._4_4_) ^ uRam0000000146b30e74) &
                           -(uint)(1e-08 <= fVar52) ^ uRam0000000146b30e74);
      fStack_640 = (float)(((uint)(((fRam0000000146b30e88 -
                                    fVar53 * fVar53 * fVar39 * fRam0000000146b30e88) * fVar53 +
                                   fVar53) * fStack_830) ^ uRam0000000146b30e78) &
                           -(uint)(1e-08 <= fVar39) ^ uRam0000000146b30e78);
      fStack_81c = (float)(((uint)(((fRam0000000146b30e8c -
                                    fVar42 * fVar42 * fVar40 * fRam0000000146b30e8c) * fVar42 +
                                   fVar42) * fStack_82c) ^ uRam0000000146b30e7c) &
                           -(uint)(1e-08 <= fVar40) ^ uRam0000000146b30e7c);
      fStack_62c = 0.0;
    }
    fStack_61c = fVar61 * fVar57;
    fStack_620 = fVar60 * fVar56;
    fStack_624 = fVar59 * fVar55;
    local_628 = fVar58 * fVar54;
    fVar55 = -fStack_824;
    fVar56 = -fStack_640;
    fVar57 = -local_828;
    local_648 = local_828;
    fStack_644 = fStack_824;
    fStack_63c = fStack_81c;
    pfVar16 = (float *)FRotator::Quaternion(param_3 + 3,local_438);
    fVar47 = *pfVar16;
    fVar51 = pfVar16[1];
    fVar53 = pfVar16[2];
    fVar54 = pfVar16[3];
    local_828 = -local_828;
    fStack_824 = -fStack_824;
    local_528 = fVar54 * fVar57 * _DAT_146b30ed0 + fStack_81c * fVar47 +
                fVar53 * fVar55 * _DAT_146b30ec0 + fVar51 * fVar56 * _DAT_146b30eb0;
    fStack_524 = fVar53 * fVar57 * fRam0000000146b30ed4 + fStack_81c * fVar51 +
                 fVar54 * fVar55 * fRam0000000146b30ec4 + fVar47 * fVar56 * fRam0000000146b30eb4;
    fStack_520 = fVar51 * fVar57 * fRam0000000146b30ed8 + fStack_81c * fVar53 +
                 fVar47 * fVar55 * fRam0000000146b30ec8 + fVar54 * fVar56 * fRam0000000146b30eb8;
    fStack_51c = fVar47 * fVar57 * fRam0000000146b30edc + fStack_81c * fVar54 +
                 fVar51 * fVar55 * fRam0000000146b30ecc + fVar53 * fVar56 * fRam0000000146b30ebc;
    fStack_820 = fVar56;
    FQuat::Rotator(&local_528,&local_678);
    local_658 = local_678;
    local_664 = local_674;
    local_650 = local_670;
    local_654 = 0;
    local_668 = 0;
    local_660 = 0;
    FRotator::Quaternion(&local_668,&local_518);
    auVar33._0_4_ = (uint)_DAT_146b30e90 & _DAT_146b30ea0;
    auVar33._4_4_ = (uint)fRam0000000146b30e94 & uRam0000000146b30ea4;
    auVar33._8_4_ = (uint)fRam0000000146b30e98 & uRam0000000146b30ea8;
    auVar33._12_4_ = (uint)fRam0000000146b30e9c & uRam0000000146b30eac;
    local_5e8 = local_518;
    uStack_5e0 = uStack_510;
    local_5d8 = 0;
    uStack_5d0 = 0;
    local_5c8 = auVar33;
    uVar15 = FRotator::Quaternion(&local_658,&local_4d8);
    fVar61 = fRam0000000146b30ef8;
    fVar60 = fRam0000000146b30ef4;
    fVar59 = _DAT_146b30ef0;
    fVar58 = fRam0000000146b30e98;
    fVar52 = fRam0000000146b30e94;
    fVar48 = _DAT_146b30e90;
    fVar42 = fRam0000000146b30e8c;
    fVar57 = fRam0000000146b30e88;
    fVar56 = fRam0000000146b30e84;
    fVar55 = _DAT_146b30e80;
    local_598 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
    fStack_594 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
    fStack_590 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
    fStack_58c = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
    local_498 = local_4d8;
    fStack_494 = fStack_4d4;
    fStack_490 = fStack_4d0;
    fStack_48c = fStack_4cc;
    local_488 = 0;
    uStack_480 = 0;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0x1d0);
    fVar47 = auVar19._0_4_;
    fVar51 = auVar19._4_4_;
    fVar53 = auVar19._8_4_;
    fVar54 = auVar19._12_4_;
    auVar21._4_4_ = -(uint)(fRam0000000146b31354 < (float)((uint)fVar51 & uRam0000000146b30f34));
    auVar21._0_4_ = -(uint)(_DAT_146b31350 < (float)((uint)fVar47 & _DAT_146b30f30));
    auVar21._8_4_ = -(uint)(fRam0000000146b31358 < (float)((uint)fVar53 & uRam0000000146b30f38));
    auVar21._12_4_ = -(uint)(fRam0000000146b3135c < (float)((uint)fVar54 & uRam0000000146b30f3c));
    iVar14 = movmskps(uVar15,auVar21);
    local_508 = _DAT_1468b5b70;
    fStack_504 = fRam00000001468b5b74;
    fStack_500 = fRam00000001468b5b78;
    fStack_4fc = fRam00000001468b5b7c;
    local_4e8 = _DAT_1468b5b90;
    fStack_4e4 = fRam00000001468b5b94;
    fStack_4e0 = fRam00000001468b5b98;
    fStack_4dc = fRam00000001468b5b9c;
    local_4f8 = _DAT_1468b5b80;
    fStack_4f4 = fRam00000001468b5b84;
    fStack_4f0 = fRam00000001468b5b88;
    fStack_4ec = fRam00000001468b5b8c;
    if (iVar14 != 0) {
      local_508 = *(float *)(param_1 + 0x1b0) * _DAT_146b31360;
      fStack_504 = *(float *)(param_1 + 0x1b4) * fRam0000000146b31364;
      fStack_500 = *(float *)(param_1 + 0x1b8) * fRam0000000146b31368;
      fStack_4fc = *(float *)(param_1 + 0x1bc) * fRam0000000146b3136c;
      auVar19 = rcpps(auVar33,auVar19);
      fVar39 = auVar19._0_4_;
      fVar40 = auVar19._4_4_;
      fVar41 = auVar19._8_4_;
      fVar43 = auVar19._12_4_;
      fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar47;
      fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar51;
      fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar53;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar54;
      fVar39 = (fVar39 + fVar39) - fVar39 * fVar39 * fVar47;
      fVar40 = (fVar40 + fVar40) - fVar40 * fVar40 * fVar51;
      fVar41 = (fVar41 + fVar41) - fVar41 * fVar41 * fVar53;
      fVar43 = (fVar43 + fVar43) - fVar43 * fVar43 * fVar54;
      local_4e8 = (float)((-(uint)((float)((uint)fVar47 & _DAT_146b30f30) <= _DAT_146b31350) &
                           (uint)fVar39 ^ (uint)fVar39) & _DAT_146b30ea0);
      fStack_4e4 = (float)((-(uint)((float)((uint)fVar51 & uRam0000000146b30f34) <=
                                   fRam0000000146b31354) & (uint)fVar40 ^ (uint)fVar40) &
                          uRam0000000146b30ea4);
      fStack_4e0 = (float)((-(uint)((float)((uint)fVar53 & uRam0000000146b30f38) <=
                                   fRam0000000146b31358) & (uint)fVar41 ^ (uint)fVar41) &
                          uRam0000000146b30ea8);
      fStack_4dc = (float)((-(uint)((float)((uint)fVar54 & uRam0000000146b30f3c) <=
                                   fRam0000000146b3135c) & (uint)fVar43 ^ (uint)fVar43) &
                          uRam0000000146b30eac);
      fVar39 = *(float *)(param_1 + 0x1c0) * local_4e8;
      fVar40 = *(float *)(param_1 + 0x1c4) * fStack_4e4;
      fVar41 = *(float *)(param_1 + 0x1c8) * fStack_4e0;
      fVar43 = *(float *)(param_1 + 0x1cc) * fStack_4dc;
      fVar47 = fVar41 * fStack_504 - fVar40 * fStack_500;
      fVar51 = fVar39 * fStack_500 - fVar41 * local_508;
      fVar53 = fVar40 * local_508 - fVar39 * fStack_504;
      fVar54 = fVar43 * fStack_4fc - fVar43 * fStack_4fc;
      fVar47 = fVar47 + fVar47;
      fVar51 = fVar51 + fVar51;
      fVar53 = fVar53 + fVar53;
      fVar54 = fVar54 + fVar54;
      local_4f8 = (float)((uint)(0.0 - ((fVar53 * fStack_504 - fVar51 * fStack_500) +
                                       fStack_4fc * fVar47 + fVar39)) & _DAT_146b30ea0);
      fStack_4f4 = (float)((uint)(0.0 - ((fVar47 * fStack_500 - fVar53 * local_508) +
                                        fStack_4fc * fVar51 + fVar40)) & uRam0000000146b30ea4);
      fStack_4f0 = (float)((uint)(0.0 - ((fVar51 * local_508 - fVar47 * fStack_504) +
                                        fStack_4fc * fVar53 + fVar41)) & uRam0000000146b30ea8);
      fStack_4ec = (float)((uint)(0.0 - ((fVar54 * fStack_4fc - fVar54 * fStack_4fc) +
                                        fStack_4fc * fVar54 + fVar43)) & uRam0000000146b30eac);
    }
    auVar22._4_4_ = fStack_4e4;
    auVar22._0_4_ = local_4e8;
    auVar22._8_4_ = fStack_4e0;
    auVar22._12_4_ = fStack_4dc;
    auVar10._4_4_ = fStack_594;
    auVar10._0_4_ = local_598;
    auVar10._8_4_ = fStack_590;
    auVar10._12_4_ = fStack_58c;
    auVar19 = minps(auVar22,auVar10);
    auVar23._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b30ef4);
    auVar23._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b30ef0);
    auVar23._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b30ef8);
    auVar23._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b30efc);
    iVar14 = movmskps(iVar14,auVar23);
    _local_838 = ZEXT812(0);
    fStack_82c = fRam0000000146b30e9c;
    local_5b8 = 0.0;
    fStack_5b4 = 0.0;
    fStack_5b0 = 0.0;
    fStack_5ac = fRam0000000146b30e9c;
    local_5a8 = 0;
    uStack_5a0 = 0;
    local_818 = _DAT_146b30ef0;
    fStack_814 = fRam0000000146b30ef4;
    fStack_810 = fRam0000000146b30ef8;
    fStack_80c = fRam0000000146b30efc;
    local_478 = local_598;
    fStack_474 = fStack_594;
    fStack_470 = fStack_590;
    fStack_46c = fStack_58c;
    if (iVar14 == 0) {
      fVar48 = local_4f8 * local_598;
      fVar52 = fStack_4f4 * fStack_594;
      fVar39 = fStack_4f0 * fStack_590;
      fVar40 = fStack_4ec * fStack_58c;
      fVar47 = local_4e8 * local_598;
      fVar51 = fStack_4e4 * fStack_594;
      fVar53 = fStack_4e0 * fStack_590;
      fVar54 = fStack_4dc * fStack_58c;
      local_5b8 = local_4d8 * fStack_4fc * _DAT_146b30ed0 + local_508 * fStack_4cc +
                  fStack_4d4 * fStack_500 * _DAT_146b30ec0 +
                  fStack_4d0 * fStack_504 * _DAT_146b30eb0;
      fStack_5b4 = local_4d8 * fStack_500 * fRam0000000146b30ed4 + fStack_504 * fStack_4cc +
                   fStack_4d4 * fStack_4fc * fRam0000000146b30ec4 +
                   fStack_4d0 * local_508 * fRam0000000146b30eb4;
      fStack_5b0 = local_4d8 * fStack_504 * fRam0000000146b30ed8 + fStack_500 * fStack_4cc +
                   fStack_4d4 * local_508 * fRam0000000146b30ec8 +
                   fStack_4d0 * fStack_4fc * fRam0000000146b30eb8;
      fStack_5ac = local_4d8 * local_508 * fRam0000000146b30edc + fStack_4fc * fStack_4cc +
                   fStack_4d4 * fStack_504 * fRam0000000146b30ecc +
                   fStack_4d0 * fStack_500 * fRam0000000146b30ebc;
      fVar58 = fVar39 * fStack_4d4 - fVar52 * fStack_4d0;
      fVar59 = fVar48 * fStack_4d0 - fVar39 * local_4d8;
      fVar60 = fVar52 * local_4d8 - fVar48 * fStack_4d4;
      fVar61 = fVar40 * fStack_4cc - fVar40 * fStack_4cc;
      fVar58 = fVar58 + fVar58;
      fVar59 = fVar59 + fVar59;
      fVar60 = fVar60 + fVar60;
      fVar61 = fVar61 + fVar61;
      fVar48 = (fVar60 * fStack_4d4 - fVar59 * fStack_4d0) + fVar58 * fStack_4cc + fVar48;
      fVar52 = (fVar58 * fStack_4d0 - fVar60 * local_4d8) + fVar59 * fStack_4cc + fVar52;
      fVar58 = (fVar59 * local_4d8 - fVar58 * fStack_4d4) + fVar60 * fStack_4cc + fVar39;
      fVar59 = (fVar61 * fStack_4cc - fVar61 * fStack_4cc) + fVar61 * fStack_4cc + fVar40;
      uVar15 = 0;
      local_828 = fVar47;
      fStack_824 = fVar51;
      fStack_820 = fVar53;
      fStack_81c = fVar54;
    }
    else {
      local_378 = 0;
      uStack_374 = 0;
      uStack_370 = 0;
      fStack_36c = fRam0000000146b30e9c;
      fVar47 = fStack_4d4 + fStack_4d4;
      fVar54 = fStack_4d0 + fStack_4d0;
      local_828 = local_4e8 * local_598;
      fStack_824 = fStack_4e4 * fStack_594;
      fStack_820 = fStack_4e0 * fStack_590;
      fStack_81c = fStack_4dc * fStack_58c;
      fVar40 = local_4d8 * (local_4d8 + local_4d8);
      fVar51 = (local_4d8 + local_4d8) * fStack_4cc;
      fVar53 = fStack_504 + fStack_504;
      fVar39 = fStack_500 + fStack_500;
      fStack_3a4 = (fVar54 * fStack_4cc + fVar47 * local_4d8) * local_598;
      fStack_390 = (fVar51 + fVar54 * fStack_4d4) * fStack_594;
      local_388 = (fVar47 * fStack_4cc + fVar54 * local_4d8) * fStack_590;
      local_398 = fStack_594 * (fVar47 * local_4d8 - fVar54 * fStack_4cc);
      fStack_384 = fStack_590 * (fVar54 * fStack_4d4 - fVar51);
      fStack_3a0 = local_598 * (fVar54 * local_4d8 - fVar47 * fStack_4cc);
      fVar51 = local_508 * (local_508 + local_508);
      local_3a8 = (float)((uint)((_DAT_146b30e90 - (fStack_4d0 * fVar54 + fStack_4d4 * fVar47)) *
                                local_598) & _DAT_146b30ea0);
      fStack_394 = (float)((uint)((fRam0000000146b30e94 - (fStack_4d0 * fVar54 + fVar40)) *
                                 fStack_594) & uRam0000000146b30ea4);
      fStack_380 = (float)((uint)((fRam0000000146b30e98 - (fStack_4d4 * fVar47 + fVar40)) *
                                 fStack_590) & uRam0000000146b30ea8);
      fStack_39c = (float)((uint)((fRam0000000146b30e9c - (fVar40 + fVar40)) * fStack_58c) &
                          uRam0000000146b30eac);
      fVar47 = (local_508 + local_508) * fStack_4fc;
      fStack_364 = (fVar39 * fStack_4fc + fVar53 * local_508) * local_4e8;
      fStack_350 = (fVar47 + fVar39 * fStack_504) * fStack_4e4;
      local_348 = (fVar53 * fStack_4fc + fVar39 * local_508) * fStack_4e0;
      local_358 = fStack_4e4 * (fVar53 * local_508 - fVar39 * fStack_4fc);
      fStack_344 = fStack_4e0 * (fVar39 * fStack_504 - fVar47);
      fStack_360 = local_4e8 * (fVar39 * local_508 - fVar53 * fStack_4fc);
      local_368 = (float)((uint)((_DAT_146b30e90 - (fStack_500 * fVar39 + fStack_504 * fVar53)) *
                                local_4e8) & _DAT_146b30ea0);
      fStack_354 = (float)((uint)((fRam0000000146b30e94 - (fStack_500 * fVar39 + fVar51)) *
                                 fStack_4e4) & uRam0000000146b30ea4);
      fStack_340 = (float)((uint)((fRam0000000146b30e98 - (fStack_504 * fVar53 + fVar51)) *
                                 fStack_4e0) & uRam0000000146b30ea8);
      fStack_35c = (float)((uint)((fRam0000000146b30e9c - (fVar51 + fVar51)) * fStack_4dc) &
                          uRam0000000146b30eac);
      local_808 = fStack_364 * local_398 + local_368 * local_3a8 + fStack_360 * local_388 +
                  fStack_35c * 0.0;
      fStack_804 = fStack_364 * fStack_394 + local_368 * fStack_3a4 + fStack_360 * fStack_384 +
                   fStack_35c * 0.0;
      fStack_800 = fStack_364 * fStack_390 + local_368 * fStack_3a0 + fStack_360 * fStack_380 +
                   fStack_35c * 0.0;
      fStack_7fc = fStack_364 * fStack_39c + local_368 * fStack_39c + fStack_360 * fStack_39c +
                   fStack_35c * fRam0000000146b30e9c;
      fStack_32c = fRam0000000146b30e9c;
      local_7f8 = fStack_354 * local_398 + local_358 * local_3a8 + fStack_350 * local_388 +
                  fStack_35c * 0.0;
      fStack_7f4 = fStack_354 * fStack_394 + local_358 * fStack_3a4 + fStack_350 * fStack_384 +
                   fStack_35c * 0.0;
      fStack_7f0 = fStack_354 * fStack_390 + local_358 * fStack_3a0 + fStack_350 * fStack_380 +
                   fStack_35c * 0.0;
      fStack_7ec = fStack_354 * fStack_39c + local_358 * fStack_39c + fStack_350 * fStack_39c +
                   fStack_35c * fRam0000000146b30e9c;
      local_7e8 = fStack_344 * local_398 + local_348 * local_3a8 + fStack_340 * local_388 +
                  fStack_35c * 0.0;
      fStack_7e4 = fStack_344 * fStack_394 + local_348 * fStack_3a4 + fStack_340 * fStack_384 +
                   fStack_35c * 0.0;
      fStack_7e0 = fStack_344 * fStack_390 + local_348 * fStack_3a0 + fStack_340 * fStack_380 +
                   fStack_35c * 0.0;
      fStack_7dc = fStack_344 * fStack_39c + local_348 * fStack_39c + fStack_340 * fStack_39c +
                   fStack_35c * fRam0000000146b30e9c;
      local_7d8 = fStack_4f4 * local_398 + local_4f8 * local_3a8 + fStack_4f0 * local_388 +
                  fRam0000000146b30e9c * 0.0;
      fStack_7d4 = fStack_4f4 * fStack_394 + local_4f8 * fStack_3a4 + fStack_4f0 * fStack_384 +
                   fRam0000000146b30e9c * 0.0;
      fStack_7d0 = fStack_4f4 * fStack_390 + local_4f8 * fStack_3a0 + fStack_4f0 * fStack_380 +
                   fRam0000000146b30e9c * 0.0;
      fStack_7cc = fStack_4f4 * fStack_39c + local_4f8 * fStack_39c + fStack_4f0 * fStack_39c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      fStack_38c = fStack_39c;
      fStack_37c = fStack_39c;
      fStack_34c = fStack_35c;
      fStack_33c = fStack_35c;
      local_338 = local_4f8;
      fStack_334 = fStack_4f4;
      fStack_330 = fStack_4f0;
      FMatrix::RemoveScaling(&local_808);
      fVar54 = fStack_81c;
      fVar53 = fStack_820;
      fVar51 = fStack_824;
      fVar47 = local_828;
      fVar48 = (float)(-(uint)(fVar59 <= local_828) & (_DAT_146b30ee0 ^ (uint)fVar48) ^
                      _DAT_146b30ee0);
      fVar52 = (float)(-(uint)(fVar60 <= fStack_824) & (uRam0000000146b30ee4 ^ (uint)fVar52) ^
                      uRam0000000146b30ee4);
      fVar58 = (float)(-(uint)(fVar61 <= fStack_820) & (uRam0000000146b30ee8 ^ (uint)fVar58) ^
                      uRam0000000146b30ee8);
      local_808 = local_808 * fVar48;
      fStack_804 = fStack_804 * fVar48;
      fStack_800 = fStack_800 * fVar48;
      fStack_7f4 = fStack_7f4 * fVar52;
      fStack_7f0 = fStack_7f0 * fVar52;
      local_7f8 = local_7f8 * fVar52;
      fStack_7e4 = fStack_7e4 * fVar58;
      fStack_7e0 = fStack_7e0 * fVar58;
      local_7e8 = local_7e8 * fVar58;
      uVar15 = FQuat::FQuat(local_838,&local_808);
      local_848 = 0x322bcc77;
      auVar34._0_4_ = (float)local_838._0_4_ * (float)local_838._0_4_ + fStack_830 * fStack_830;
      auVar34._4_4_ = (float)local_838._4_4_ * (float)local_838._4_4_ + fStack_82c * fStack_82c;
      auVar34._8_4_ = fStack_830 * fStack_830 + (float)local_838._0_4_ * (float)local_838._0_4_;
      auVar34._12_4_ = fStack_82c * fStack_82c + (float)local_838._4_4_ * (float)local_838._4_4_;
      fVar61 = auVar34._4_4_ + auVar34._0_4_;
      fVar39 = auVar34._8_4_ + auVar34._4_4_;
      fVar40 = auVar34._12_4_ + auVar34._8_4_;
      fVar41 = auVar34._0_4_ + auVar34._12_4_;
      auVar5._4_4_ = fVar39;
      auVar5._0_4_ = fVar61;
      auVar5._8_4_ = fVar40;
      auVar5._12_4_ = fVar41;
      auVar19 = rsqrtps(auVar34,auVar5);
      fVar48 = auVar19._0_4_;
      fVar52 = auVar19._4_4_;
      fVar58 = auVar19._8_4_;
      fVar60 = auVar19._12_4_;
      fVar48 = (fVar55 - fVar48 * fVar48 * fVar61 * fVar55) * fVar48 + fVar48;
      fVar52 = (fVar56 - fVar52 * fVar52 * fVar39 * fVar56) * fVar52 + fVar52;
      fVar58 = (fVar57 - fVar58 * fVar58 * fVar40 * fVar57) * fVar58 + fVar58;
      fVar60 = (fVar42 - fVar60 * fVar60 * fVar41 * fVar42) * fVar60 + fVar60;
      fVar59 = 0.0;
      local_5b8 = (float)(((uint)(((fVar55 - fVar48 * fVar48 * fVar61 * fVar55) * fVar48 + fVar48) *
                                 (float)local_838._0_4_) ^ _DAT_146b30e70) &
                          -(uint)(1e-08 <= fVar61) ^ _DAT_146b30e70);
      fStack_5b4 = (float)(((uint)(((fVar56 - fVar52 * fVar52 * fVar39 * fVar56) * fVar52 + fVar52)
                                  * (float)local_838._4_4_) ^ uRam0000000146b30e74) &
                           -(uint)(1e-08 <= fVar39) ^ uRam0000000146b30e74);
      fStack_5b0 = (float)(((uint)(((fVar57 - fVar58 * fVar58 * fVar40 * fVar57) * fVar58 + fVar58)
                                  * fStack_830) ^ uRam0000000146b30e78) & -(uint)(1e-08 <= fVar40) ^
                          uRam0000000146b30e78);
      fStack_5ac = (float)(((uint)(((fVar42 - fVar60 * fVar60 * fVar41 * fVar42) * fVar60 + fVar60)
                                  * fStack_82c) ^ uRam0000000146b30e7c) & -(uint)(1e-08 <= fVar41) ^
                          uRam0000000146b30e7c);
      fVar48 = local_7d8;
      fVar52 = fStack_7d4;
      fVar58 = fStack_7d0;
    }
    fVar44 = fRam0000000146b30e98;
    fVar43 = fRam0000000146b30e94;
    fVar41 = _DAT_146b30e90;
    local_5a8 = CONCAT44(fVar52,fVar48);
    uStack_5a0 = CONCAT44(fVar59,fVar58);
    local_588 = 0.0;
    fStack_584 = 0.0;
    fStack_580 = 0.0;
    fStack_57c = fRam0000000146b30e9c;
    local_568 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
    fStack_564 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
    fStack_560 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
    fStack_55c = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
    auVar24._4_4_ = fVar51;
    auVar24._0_4_ = fVar47;
    auVar24._8_4_ = fVar53;
    auVar24._12_4_ = fVar54;
    local_578 = 0;
    uStack_570 = 0;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0x1d0);
    fVar60 = auVar19._0_4_;
    fVar61 = auVar19._4_4_;
    fVar39 = auVar19._8_4_;
    fVar40 = auVar19._12_4_;
    auVar19 = minps(auVar24,auVar19);
    auVar25._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b30ef4);
    auVar25._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b30ef0);
    auVar25._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b30ef8);
    auVar25._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b30efc);
    iVar14 = movmskps(uVar15,auVar25);
    local_598 = fVar47;
    fStack_594 = fVar51;
    fStack_590 = fVar53;
    fStack_58c = fVar54;
    local_818 = _DAT_146b30ef0;
    fStack_814 = fRam0000000146b30ef4;
    fStack_810 = fRam0000000146b30ef8;
    fStack_80c = fRam0000000146b30efc;
    if (iVar14 == 0) {
      fVar47 = *(float *)(param_1 + 0x1b0);
      fVar51 = *(float *)(param_1 + 0x1b4);
      fVar53 = *(float *)(param_1 + 0x1b8);
      fVar54 = *(float *)(param_1 + 0x1bc);
      fVar45 = fVar60 * local_828;
      fVar50 = fVar61 * fStack_824;
      fVar62 = fVar39 * fStack_820;
      fVar49 = fVar40 * fStack_81c;
      fVar60 = fVar60 * fVar48;
      fVar61 = fVar61 * fVar52;
      fVar39 = fVar39 * fVar58;
      fVar40 = fVar40 * fVar59;
      local_588 = fVar47 * fStack_5ac * _DAT_146b30ed0 + local_5b8 * fVar54 +
                  fVar51 * fStack_5b0 * _DAT_146b30ec0 + fVar53 * fStack_5b4 * _DAT_146b30eb0;
      fStack_584 = fVar47 * fStack_5b0 * fRam0000000146b30ed4 + fStack_5b4 * fVar54 +
                   fVar51 * fStack_5ac * fRam0000000146b30ec4 +
                   fVar53 * local_5b8 * fRam0000000146b30eb4;
      fStack_580 = fVar47 * fStack_5b4 * fRam0000000146b30ed8 + fStack_5b0 * fVar54 +
                   fVar51 * local_5b8 * fRam0000000146b30ec8 +
                   fVar53 * fStack_5ac * fRam0000000146b30eb8;
      fStack_57c = fVar47 * local_5b8 * fRam0000000146b30edc + fStack_5ac * fVar54 +
                   fVar51 * fStack_5b4 * fRam0000000146b30ecc +
                   fVar53 * fStack_5b0 * fRam0000000146b30ebc;
      fVar52 = fVar39 * fVar51 - fVar61 * fVar53;
      fVar58 = fVar60 * fVar53 - fVar39 * fVar47;
      fVar59 = fVar61 * fVar47 - fVar60 * fVar51;
      fVar41 = fVar40 * fVar54 - fVar40 * fVar54;
      fVar52 = fVar52 + fVar52;
      fVar58 = fVar58 + fVar58;
      fVar59 = fVar59 + fVar59;
      fVar41 = fVar41 + fVar41;
      fVar48 = (fVar59 * fVar51 - fVar58 * fVar53) + fVar54 * fVar52 + fVar60 +
               *(float *)(param_1 + 0x1c0);
      fVar53 = (fVar52 * fVar53 - fVar59 * fVar47) + fVar54 * fVar58 + fVar61 +
               *(float *)(param_1 + 0x1c4);
      fVar47 = (fVar58 * fVar47 - fVar52 * fVar51) + fVar54 * fVar59 + fVar39 +
               *(float *)(param_1 + 0x1c8);
      fVar51 = (fVar41 * fVar54 - fVar41 * fVar54) + fVar54 * fVar41 + fVar40 +
               *(float *)(param_1 + 0x1cc);
      uVar15 = 0;
      local_688 = fVar45;
      fStack_684 = fVar50;
      fStack_680 = fVar62;
      fStack_67c = fVar49;
    }
    else {
      fVar59 = *(float *)(param_1 + 0x1b0);
      fVar45 = *(float *)(param_1 + 0x1b4);
      fVar50 = *(float *)(param_1 + 0x1b8);
      fVar62 = *(float *)(param_1 + 0x1bc);
      local_688 = fVar47 * fVar60;
      fStack_684 = fVar51 * fVar61;
      fStack_680 = fVar53 * fVar39;
      fStack_67c = fVar54 * fVar40;
      fVar47 = fVar45 + fVar45;
      fVar51 = fVar50 + fVar50;
      fVar49 = (fVar59 + fVar59) * fVar59;
      fVar53 = fVar62 * (fVar59 + fVar59);
      fStack_324 = (fVar62 * fVar51 + fVar59 * fVar47) * fVar60;
      fStack_310 = (fVar53 + fVar45 * fVar51) * fVar61;
      local_308 = (fVar62 * fVar47 + fVar59 * fVar51) * fVar39;
      local_318 = fVar61 * (fVar59 * fVar47 - fVar62 * fVar51);
      fStack_304 = fVar39 * (fVar45 * fVar51 - fVar53);
      fStack_320 = fVar60 * (fVar59 * fVar51 - fVar62 * fVar47);
      fVar53 = fStack_5b4 + fStack_5b4;
      fVar54 = fStack_5b0 + fStack_5b0;
      local_328 = (float)((uint)((_DAT_146b30e90 - (fVar51 * fVar50 + fVar47 * fVar45)) * fVar60) &
                         _DAT_146b30ea0);
      fStack_314 = (float)((uint)((fRam0000000146b30e94 - (fVar51 * fVar50 + fVar49)) * fVar61) &
                          uRam0000000146b30ea4);
      fStack_300 = (float)((uint)((fRam0000000146b30e98 - (fVar47 * fVar45 + fVar49)) * fVar39) &
                          uRam0000000146b30ea8);
      fStack_31c = (float)((uint)((fRam0000000146b30e9c - (fVar49 + fVar49)) * fVar40) &
                          uRam0000000146b30eac);
      fVar51 = (local_5b8 + local_5b8) * local_5b8;
      local_2f8 = *(float *)(param_1 + 0x1c0);
      fStack_2f4 = *(float *)(param_1 + 0x1c4);
      fStack_2f0 = *(float *)(param_1 + 0x1c8);
      fVar47 = (local_5b8 + local_5b8) * fStack_5ac;
      fStack_2ec = fRam0000000146b30e9c;
      fStack_2e4 = (fVar54 * fStack_5ac + fVar53 * local_5b8) * local_828;
      fStack_2d0 = (fVar47 + fVar54 * fStack_5b4) * fStack_824;
      local_2c8 = (fVar53 * fStack_5ac + fVar54 * local_5b8) * fStack_820;
      local_2d8 = fStack_824 * (fVar53 * local_5b8 - fVar54 * fStack_5ac);
      fStack_2c4 = fStack_820 * (fVar54 * fStack_5b4 - fVar47);
      fStack_2e0 = local_828 * (fVar54 * local_5b8 - fVar53 * fStack_5ac);
      local_2e8 = (float)((uint)((_DAT_146b30e90 - (fVar54 * fStack_5b0 + fVar53 * fStack_5b4)) *
                                local_828) & _DAT_146b30ea0);
      fStack_2d4 = (float)((uint)((fRam0000000146b30e94 - (fVar54 * fStack_5b0 + fVar51)) *
                                 fStack_824) & uRam0000000146b30ea4);
      fStack_2c0 = (float)((uint)((fRam0000000146b30e98 - (fVar53 * fStack_5b4 + fVar51)) *
                                 fStack_820) & uRam0000000146b30ea8);
      fStack_2dc = (float)((uint)((fRam0000000146b30e9c - (fVar51 + fVar51)) * fStack_81c) &
                          uRam0000000146b30eac);
      local_7c8 = fStack_2e4 * local_318 + local_2e8 * local_328 + fStack_2e0 * local_308 +
                  fStack_2dc * local_2f8;
      fStack_7c4 = fStack_2e4 * fStack_314 + local_2e8 * fStack_324 + fStack_2e0 * fStack_304 +
                   fStack_2dc * fStack_2f4;
      fStack_7c0 = fStack_2e4 * fStack_310 + local_2e8 * fStack_320 + fStack_2e0 * fStack_300 +
                   fStack_2dc * fStack_2f0;
      fStack_7bc = fStack_2e4 * fStack_31c + local_2e8 * fStack_31c + fStack_2e0 * fStack_31c +
                   fStack_2dc * fRam0000000146b30e9c;
      fStack_2ac = fRam0000000146b30e9c;
      local_7b8 = fStack_2d4 * local_318 + local_2d8 * local_328 + fStack_2d0 * local_308 +
                  fStack_2dc * local_2f8;
      fStack_7b4 = fStack_2d4 * fStack_314 + local_2d8 * fStack_324 + fStack_2d0 * fStack_304 +
                   fStack_2dc * fStack_2f4;
      fStack_7b0 = fStack_2d4 * fStack_310 + local_2d8 * fStack_320 + fStack_2d0 * fStack_300 +
                   fStack_2dc * fStack_2f0;
      fStack_7ac = fStack_2d4 * fStack_31c + local_2d8 * fStack_31c + fStack_2d0 * fStack_31c +
                   fStack_2dc * fRam0000000146b30e9c;
      local_7a8 = fStack_2c4 * local_318 + local_2c8 * local_328 + fStack_2c0 * local_308 +
                  fStack_2dc * local_2f8;
      fStack_7a4 = fStack_2c4 * fStack_314 + local_2c8 * fStack_324 + fStack_2c0 * fStack_304 +
                   fStack_2dc * fStack_2f4;
      fStack_7a0 = fStack_2c4 * fStack_310 + local_2c8 * fStack_320 + fStack_2c0 * fStack_300 +
                   fStack_2dc * fStack_2f0;
      fStack_79c = fStack_2c4 * fStack_31c + local_2c8 * fStack_31c + fStack_2c0 * fStack_31c +
                   fStack_2dc * fRam0000000146b30e9c;
      local_798 = fVar52 * local_318 + fVar48 * local_328 + fVar58 * local_308 +
                  fRam0000000146b30e9c * local_2f8;
      fStack_794 = fVar52 * fStack_314 + fVar48 * fStack_324 + fVar58 * fStack_304 +
                   fRam0000000146b30e9c * fStack_2f4;
      fStack_790 = fVar52 * fStack_310 + fVar48 * fStack_320 + fVar58 * fStack_300 +
                   fRam0000000146b30e9c * fStack_2f0;
      fStack_78c = fVar52 * fStack_31c + fVar48 * fStack_31c + fVar58 * fStack_31c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      fStack_30c = fStack_31c;
      fStack_2fc = fStack_31c;
      fStack_2cc = fStack_2dc;
      fStack_2bc = fStack_2dc;
      local_2b8 = fVar48;
      fStack_2b4 = fVar52;
      fStack_2b0 = fVar58;
      FMatrix::RemoveScaling(&local_7c8);
      fVar49 = fStack_67c;
      fVar62 = fStack_680;
      fVar50 = fStack_684;
      fVar45 = local_688;
      fVar47 = (float)(-(uint)(local_818 <= local_688) & (_DAT_146b30ee0 ^ (uint)fVar41) ^
                      _DAT_146b30ee0);
      fVar51 = (float)(-(uint)(fStack_814 <= fStack_684) & (uRam0000000146b30ee4 ^ (uint)fVar43) ^
                      uRam0000000146b30ee4);
      fVar53 = (float)(-(uint)(fStack_810 <= fStack_680) & (uRam0000000146b30ee8 ^ (uint)fVar44) ^
                      uRam0000000146b30ee8);
      local_7c8 = local_7c8 * fVar47;
      fStack_7c4 = fStack_7c4 * fVar47;
      fStack_7c0 = fStack_7c0 * fVar47;
      fStack_7b4 = fStack_7b4 * fVar51;
      fStack_7b0 = fStack_7b0 * fVar51;
      local_7b8 = local_7b8 * fVar51;
      fStack_7a4 = fStack_7a4 * fVar53;
      fStack_7a0 = fStack_7a0 * fVar53;
      local_7a8 = local_7a8 * fVar53;
      uVar15 = FQuat::FQuat(local_838,&local_7c8);
      local_848 = 0x322bcc77;
      auVar35._0_4_ = (float)local_838._0_4_ * (float)local_838._0_4_ + fStack_830 * fStack_830;
      auVar35._4_4_ = (float)local_838._4_4_ * (float)local_838._4_4_ + fStack_82c * fStack_82c;
      auVar35._8_4_ = fStack_830 * fStack_830 + (float)local_838._0_4_ * (float)local_838._0_4_;
      auVar35._12_4_ = fStack_82c * fStack_82c + (float)local_838._4_4_ * (float)local_838._4_4_;
      fVar52 = auVar35._4_4_ + auVar35._0_4_;
      fVar58 = auVar35._8_4_ + auVar35._4_4_;
      fVar59 = auVar35._12_4_ + auVar35._8_4_;
      fVar60 = auVar35._0_4_ + auVar35._12_4_;
      auVar6._4_4_ = fVar58;
      auVar6._0_4_ = fVar52;
      auVar6._8_4_ = fVar59;
      auVar6._12_4_ = fVar60;
      auVar19 = rsqrtps(auVar35,auVar6);
      fVar47 = auVar19._0_4_;
      fVar53 = auVar19._4_4_;
      fVar54 = auVar19._8_4_;
      fVar48 = auVar19._12_4_;
      fVar47 = (fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47;
      fVar53 = (fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53;
      fVar54 = (fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54;
      fVar48 = (fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48;
      fVar51 = 0.0;
      local_588 = (float)(((uint)(((fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47) *
                                 (float)local_838._0_4_) ^ _DAT_146b30e70) &
                          -(uint)(1e-08 <= fVar52) ^ _DAT_146b30e70);
      fStack_584 = (float)(((uint)(((fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53)
                                  * (float)local_838._4_4_) ^ uRam0000000146b30e74) &
                           -(uint)(1e-08 <= fVar58) ^ uRam0000000146b30e74);
      fStack_580 = (float)(((uint)(((fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54)
                                  * fStack_830) ^ uRam0000000146b30e78) & -(uint)(1e-08 <= fVar59) ^
                          uRam0000000146b30e78);
      fStack_57c = (float)(((uint)(((fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48)
                                  * fStack_82c) ^ uRam0000000146b30e7c) & -(uint)(1e-08 <= fVar60) ^
                          uRam0000000146b30e7c);
      local_818 = _DAT_146b30ef0;
      fStack_814 = fRam0000000146b30ef4;
      fStack_810 = fRam0000000146b30ef8;
      fStack_80c = fRam0000000146b30efc;
      fVar48 = local_798;
      fVar53 = fStack_794;
      fVar47 = fStack_790;
    }
    fVar39 = fRam0000000146b30e98;
    fVar61 = fRam0000000146b30e94;
    fVar60 = _DAT_146b30e90;
    local_578 = CONCAT44(fVar53,fVar48);
    uStack_570 = CONCAT44(fVar51,fVar47);
    local_558 = 0.0;
    fStack_554 = 0.0;
    fStack_550 = 0.0;
    local_538 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
    fStack_534 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
    fStack_530 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
    fStack_52c = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
    auVar26._4_4_ = fVar50;
    auVar26._0_4_ = fVar45;
    auVar26._8_4_ = fVar62;
    auVar26._12_4_ = fVar49;
    local_548 = 0;
    uStack_540 = 0;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0x200);
    fVar54 = auVar19._0_4_;
    fVar52 = auVar19._4_4_;
    fVar58 = auVar19._8_4_;
    fVar59 = auVar19._12_4_;
    auVar19 = minps(auVar26,auVar19);
    auVar27._4_4_ = -(uint)(auVar19._4_4_ < fStack_814);
    auVar27._0_4_ = -(uint)(auVar19._0_4_ < local_818);
    auVar27._8_4_ = -(uint)(auVar19._8_4_ < fStack_810);
    auVar27._12_4_ = -(uint)(auVar19._12_4_ < fStack_80c);
    iVar14 = movmskps(uVar15,auVar27);
    local_568 = fVar45;
    fStack_564 = fVar50;
    fStack_560 = fVar62;
    fStack_55c = fVar49;
    if (iVar14 == 0) {
      fVar60 = *(float *)(param_1 + 0x1e0);
      fVar61 = *(float *)(param_1 + 0x1e4);
      fVar39 = *(float *)(param_1 + 0x1e8);
      fVar40 = *(float *)(param_1 + 0x1ec);
      fVar48 = fVar48 * fVar54;
      fVar53 = fVar53 * fVar52;
      fVar47 = fVar47 * fVar58;
      fVar51 = fVar51 * fVar59;
      local_558 = fVar60 * fStack_57c * _DAT_146b30ed0 + fVar40 * local_588 +
                  fVar61 * fStack_580 * _DAT_146b30ec0 + fVar39 * fStack_584 * _DAT_146b30eb0;
      fStack_554 = fVar60 * fStack_580 * fRam0000000146b30ed4 + fVar40 * fStack_584 +
                   fVar61 * fStack_57c * fRam0000000146b30ec4 +
                   fVar39 * local_588 * fRam0000000146b30eb4;
      fStack_550 = fVar60 * fStack_584 * fRam0000000146b30ed8 + fVar40 * fStack_580 +
                   fVar61 * local_588 * fRam0000000146b30ec8 +
                   fVar39 * fStack_57c * fRam0000000146b30eb8;
      fStack_54c = fVar60 * local_588 * fRam0000000146b30edc + fVar40 * fStack_57c +
                   fVar61 * fStack_584 * fRam0000000146b30ecc +
                   fVar39 * fStack_580 * fRam0000000146b30ebc;
      fVar41 = fVar47 * fVar61 - fVar53 * fVar39;
      fVar43 = fVar48 * fVar39 - fVar47 * fVar60;
      fVar44 = fVar53 * fVar60 - fVar48 * fVar61;
      fVar46 = fVar51 * fVar40 - fVar51 * fVar40;
      fVar41 = fVar41 + fVar41;
      fVar43 = fVar43 + fVar43;
      fVar44 = fVar44 + fVar44;
      fVar46 = fVar46 + fVar46;
      fVar45 = fVar45 * fVar54;
      fVar50 = fVar50 * fVar52;
      fVar62 = fVar62 * fVar58;
      fVar49 = fVar49 * fVar59;
      local_838._4_4_ = fVar50;
      local_838._0_4_ = fVar45;
      fStack_830 = fVar62;
      fStack_82c = fVar49;
      fVar54 = (fVar44 * fVar61 - fVar43 * fVar39) + fVar40 * fVar41 + fVar48 +
               *(float *)(param_1 + 0x1f0);
      fVar53 = (fVar41 * fVar39 - fVar44 * fVar60) + fVar40 * fVar43 + fVar53 +
               *(float *)(param_1 + 500);
      fVar47 = (fVar43 * fVar60 - fVar41 * fVar61) + fVar40 * fVar44 + fVar47 +
               *(float *)(param_1 + 0x1f8);
      fVar51 = (fVar46 * fVar40 - fVar46 * fVar40) + fVar40 * fVar46 + fVar51 +
               *(float *)(param_1 + 0x1fc);
      uVar15 = 0;
    }
    else {
      fVar51 = *(float *)(param_1 + 0x1e0);
      fVar40 = *(float *)(param_1 + 0x1e4);
      fVar41 = *(float *)(param_1 + 0x1e8);
      fVar43 = *(float *)(param_1 + 0x1ec);
      fVar44 = fVar40 + fVar40;
      fVar46 = fVar41 + fVar41;
      local_838._4_4_ = fVar50 * fVar52;
      local_838._0_4_ = fVar45 * fVar54;
      fStack_830 = fVar62 * fVar58;
      fStack_82c = fVar49 * fVar59;
      fVar50 = fVar51 * (fVar51 + fVar51);
      fVar45 = (fVar51 + fVar51) * fVar43;
      fStack_2a4 = (fVar46 * fVar43 + fVar44 * fVar51) * fVar54;
      fStack_290 = (fVar45 + fVar46 * fVar40) * fVar52;
      local_288 = (fVar44 * fVar43 + fVar46 * fVar51) * fVar58;
      local_298 = fVar52 * (fVar44 * fVar51 - fVar46 * fVar43);
      fStack_284 = fVar58 * (fVar46 * fVar40 - fVar45);
      fStack_2a0 = fVar54 * (fVar46 * fVar51 - fVar44 * fVar43);
      local_2a8 = (float)((uint)((_DAT_146b30e90 - (fVar41 * fVar46 + fVar40 * fVar44)) * fVar54) &
                         _DAT_146b30ea0);
      fStack_294 = (float)((uint)((fRam0000000146b30e94 - (fVar41 * fVar46 + fVar50)) * fVar52) &
                          uRam0000000146b30ea4);
      fStack_280 = (float)((uint)((fRam0000000146b30e98 - (fVar40 * fVar44 + fVar50)) * fVar58) &
                          uRam0000000146b30ea8);
      fStack_29c = (float)((uint)((fRam0000000146b30e9c - (fVar50 + fVar50)) * fVar59) &
                          uRam0000000146b30eac);
      fVar51 = fStack_584 + fStack_584;
      fVar54 = fStack_580 + fStack_580;
      local_278 = *(float *)(param_1 + 0x1f0);
      fStack_274 = *(float *)(param_1 + 500);
      fStack_270 = *(float *)(param_1 + 0x1f8);
      fVar52 = local_588 * (local_588 + local_588);
      fVar58 = fStack_57c * (local_588 + local_588);
      fStack_26c = fRam0000000146b30e9c;
      fStack_264 = (fStack_57c * fVar54 + local_588 * fVar51) * local_688;
      fStack_250 = (fVar58 + fStack_584 * fVar54) * fStack_684;
      local_248 = (fStack_57c * fVar51 + local_588 * fVar54) * fStack_680;
      local_258 = fStack_684 * (local_588 * fVar51 - fStack_57c * fVar54);
      fStack_244 = fStack_680 * (fStack_584 * fVar54 - fVar58);
      fStack_260 = local_688 * (local_588 * fVar54 - fStack_57c * fVar51);
      local_268 = (float)((uint)((_DAT_146b30e90 - (fStack_580 * fVar54 + fStack_584 * fVar51)) *
                                local_688) & _DAT_146b30ea0);
      fStack_254 = (float)((uint)((fRam0000000146b30e94 - (fStack_580 * fVar54 + fVar52)) *
                                 fStack_684) & uRam0000000146b30ea4);
      fStack_240 = (float)((uint)((fRam0000000146b30e98 - (fStack_584 * fVar51 + fVar52)) *
                                 fStack_680) & uRam0000000146b30ea8);
      fStack_25c = (float)((uint)((fRam0000000146b30e9c - (fVar52 + fVar52)) * fStack_67c) &
                          uRam0000000146b30eac);
      local_6c8 = fStack_264 * local_298 + local_268 * local_2a8 + fStack_260 * local_288 +
                  fStack_25c * local_278;
      fStack_6c4 = fStack_264 * fStack_294 + local_268 * fStack_2a4 + fStack_260 * fStack_284 +
                   fStack_25c * fStack_274;
      fStack_6c0 = fStack_264 * fStack_290 + local_268 * fStack_2a0 + fStack_260 * fStack_280 +
                   fStack_25c * fStack_270;
      fStack_6bc = fStack_264 * fStack_29c + local_268 * fStack_29c + fStack_260 * fStack_29c +
                   fStack_25c * fRam0000000146b30e9c;
      fStack_22c = fRam0000000146b30e9c;
      local_6b8 = fStack_254 * local_298 + local_258 * local_2a8 + fStack_250 * local_288 +
                  fStack_25c * local_278;
      fStack_6b4 = fStack_254 * fStack_294 + local_258 * fStack_2a4 + fStack_250 * fStack_284 +
                   fStack_25c * fStack_274;
      fStack_6b0 = fStack_254 * fStack_290 + local_258 * fStack_2a0 + fStack_250 * fStack_280 +
                   fStack_25c * fStack_270;
      fStack_6ac = fStack_254 * fStack_29c + local_258 * fStack_29c + fStack_250 * fStack_29c +
                   fStack_25c * fRam0000000146b30e9c;
      local_6a8 = fStack_244 * local_298 + local_248 * local_2a8 + fStack_240 * local_288 +
                  fStack_25c * local_278;
      fStack_6a4 = fStack_244 * fStack_294 + local_248 * fStack_2a4 + fStack_240 * fStack_284 +
                   fStack_25c * fStack_274;
      fStack_6a0 = fStack_244 * fStack_290 + local_248 * fStack_2a0 + fStack_240 * fStack_280 +
                   fStack_25c * fStack_270;
      fStack_69c = fStack_244 * fStack_29c + local_248 * fStack_29c + fStack_240 * fStack_29c +
                   fStack_25c * fRam0000000146b30e9c;
      local_698 = fVar53 * local_298 + fVar48 * local_2a8 + fVar47 * local_288 +
                  fRam0000000146b30e9c * local_278;
      fStack_694 = fVar53 * fStack_294 + fVar48 * fStack_2a4 + fVar47 * fStack_284 +
                   fRam0000000146b30e9c * fStack_274;
      fStack_690 = fVar53 * fStack_290 + fVar48 * fStack_2a0 + fVar47 * fStack_280 +
                   fRam0000000146b30e9c * fStack_270;
      fStack_68c = fVar53 * fStack_29c + fVar48 * fStack_29c + fVar47 * fStack_29c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      _DAT_146b30ef0 = local_818;
      fRam0000000146b30ef4 = fStack_814;
      fRam0000000146b30ef8 = fStack_810;
      fRam0000000146b30efc = fStack_80c;
      fStack_54c = fRam0000000146b30e9c;
      fStack_28c = fStack_29c;
      fStack_27c = fStack_29c;
      fStack_24c = fStack_25c;
      fStack_23c = fStack_25c;
      local_238 = fVar48;
      fStack_234 = fVar53;
      fStack_230 = fVar47;
      FMatrix::RemoveScaling(&local_6c8);
      fVar45 = (float)local_838._0_4_;
      fVar50 = (float)local_838._4_4_;
      fVar62 = fStack_830;
      fVar49 = fStack_82c;
      fVar47 = (float)(-(uint)(local_818 <= (float)local_838._0_4_) &
                       (_DAT_146b30ee0 ^ (uint)fVar60) ^ _DAT_146b30ee0);
      fVar51 = (float)(-(uint)(fStack_814 <= (float)local_838._4_4_) &
                       (uRam0000000146b30ee4 ^ (uint)fVar61) ^ uRam0000000146b30ee4);
      fVar53 = (float)(-(uint)(fStack_810 <= fStack_830) & (uRam0000000146b30ee8 ^ (uint)fVar39) ^
                      uRam0000000146b30ee8);
      local_6c8 = local_6c8 * fVar47;
      fStack_6c4 = fStack_6c4 * fVar47;
      fStack_6c0 = fStack_6c0 * fVar47;
      fStack_6b4 = fStack_6b4 * fVar51;
      fStack_6b0 = fStack_6b0 * fVar51;
      local_6b8 = local_6b8 * fVar51;
      fStack_6a4 = fStack_6a4 * fVar53;
      fStack_6a0 = fStack_6a0 * fVar53;
      local_6a8 = local_6a8 * fVar53;
      uVar15 = FQuat::FQuat(&local_688,&local_6c8);
      local_848 = 0x322bcc77;
      auVar36._0_4_ = local_688 * local_688 + fStack_680 * fStack_680;
      auVar36._4_4_ = fStack_684 * fStack_684 + fStack_67c * fStack_67c;
      auVar36._8_4_ = fStack_680 * fStack_680 + local_688 * local_688;
      auVar36._12_4_ = fStack_67c * fStack_67c + fStack_684 * fStack_684;
      fVar52 = auVar36._4_4_ + auVar36._0_4_;
      fVar58 = auVar36._8_4_ + auVar36._4_4_;
      fVar59 = auVar36._12_4_ + auVar36._8_4_;
      fVar60 = auVar36._0_4_ + auVar36._12_4_;
      auVar7._4_4_ = fVar58;
      auVar7._0_4_ = fVar52;
      auVar7._8_4_ = fVar59;
      auVar7._12_4_ = fVar60;
      auVar19 = rsqrtps(auVar36,auVar7);
      fVar47 = auVar19._0_4_;
      fVar53 = auVar19._4_4_;
      fVar54 = auVar19._8_4_;
      fVar48 = auVar19._12_4_;
      fVar47 = (fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47;
      fVar53 = (fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53;
      fVar54 = (fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54;
      fVar48 = (fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48;
      fVar51 = 0.0;
      local_558 = (float)(((uint)(((fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47) *
                                 local_688) ^ _DAT_146b30e70) & -(uint)(1e-08 <= fVar52) ^
                         _DAT_146b30e70);
      fStack_554 = (float)(((uint)(((fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53)
                                  * fStack_684) ^ uRam0000000146b30e74) & -(uint)(1e-08 <= fVar58) ^
                          uRam0000000146b30e74);
      fStack_550 = (float)(((uint)(((fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54)
                                  * fStack_680) ^ uRam0000000146b30e78) & -(uint)(1e-08 <= fVar59) ^
                          uRam0000000146b30e78);
      fStack_54c = (float)(((uint)(((fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48)
                                  * fStack_67c) ^ uRam0000000146b30e7c) & -(uint)(1e-08 <= fVar60) ^
                          uRam0000000146b30e7c);
      fStack_810 = fRam0000000146b30ef8;
      fStack_80c = fRam0000000146b30efc;
      local_818 = _DAT_146b30ef0;
      fStack_814 = fRam0000000146b30ef4;
      fVar54 = local_698;
      fVar53 = fStack_694;
      fVar47 = fStack_690;
    }
    fVar43 = fStack_810;
    fVar41 = fStack_814;
    fVar40 = local_818;
    fVar39 = fRam0000000146b30e98;
    fVar61 = fRam0000000146b30e94;
    fVar60 = _DAT_146b30e90;
    fVar48 = local_5c8._0_4_;
    fVar52 = local_5c8._4_4_;
    fVar58 = local_5c8._8_4_;
    fVar59 = local_5c8._12_4_;
    local_608 = 0;
    uStack_600 = 0;
    local_618 = 0.0;
    fStack_614 = 0.0;
    fStack_610 = 0.0;
    local_5f8 = (float)((uint)_DAT_146b30e90 & _DAT_146b30ea0);
    fStack_5f4 = (float)((uint)fRam0000000146b30e94 & uRam0000000146b30ea4);
    fStack_5f0 = (float)((uint)fRam0000000146b30e98 & uRam0000000146b30ea8);
    fStack_5ec = (float)((uint)fRam0000000146b30e9c & uRam0000000146b30eac);
    auVar28._4_4_ = fVar50;
    auVar28._0_4_ = fVar45;
    auVar28._8_4_ = fVar62;
    auVar28._12_4_ = fVar49;
    auVar19 = minps(auVar28,local_5c8);
    local_548 = CONCAT44(fVar53,fVar54);
    uStack_540 = CONCAT44(fVar51,fVar47);
    auVar29._4_4_ = -(uint)(auVar19._4_4_ < fStack_814);
    auVar29._0_4_ = -(uint)(auVar19._0_4_ < local_818);
    auVar29._8_4_ = -(uint)(auVar19._8_4_ < fStack_810);
    auVar29._12_4_ = -(uint)(auVar19._12_4_ < fStack_80c);
    iVar14 = movmskps(uVar15,auVar29);
    _DAT_146b30ef0 = local_818;
    fRam0000000146b30ef4 = fStack_814;
    fRam0000000146b30ef8 = fStack_810;
    fRam0000000146b30efc = fStack_80c;
    local_538 = fVar45;
    fStack_534 = fVar50;
    fStack_530 = fVar62;
    fStack_52c = fVar49;
    if (iVar14 == 0) {
      fVar54 = fVar54 * fVar48;
      fVar53 = fVar53 * fVar52;
      fVar47 = fVar47 * fVar58;
      fVar51 = fVar51 * fVar59;
      local_828 = fVar45 * fVar48;
      fStack_824 = fVar50 * fVar52;
      fStack_820 = fVar62 * fVar58;
      fStack_81c = fVar49 * fVar59;
      local_618 = fStack_54c * (float)local_5e8 * _DAT_146b30ed0 + uStack_5e0._4_4_ * local_558 +
                  fStack_550 * local_5e8._4_4_ * _DAT_146b30ec0 +
                  fStack_554 * (float)uStack_5e0 * _DAT_146b30eb0;
      fStack_614 = fStack_550 * (float)local_5e8 * fRam0000000146b30ed4 +
                   uStack_5e0._4_4_ * fStack_554 +
                   fStack_54c * local_5e8._4_4_ * fRam0000000146b30ec4 +
                   local_558 * (float)uStack_5e0 * fRam0000000146b30eb4;
      fStack_610 = fStack_554 * (float)local_5e8 * fRam0000000146b30ed8 +
                   uStack_5e0._4_4_ * fStack_550 +
                   local_558 * local_5e8._4_4_ * fRam0000000146b30ec8 +
                   fStack_54c * (float)uStack_5e0 * fRam0000000146b30eb8;
      fStack_60c = local_558 * (float)local_5e8 * fRam0000000146b30edc +
                   uStack_5e0._4_4_ * fStack_54c +
                   fStack_554 * local_5e8._4_4_ * fRam0000000146b30ecc +
                   fStack_550 * (float)uStack_5e0 * fRam0000000146b30ebc;
      fVar48 = fVar47 * local_5e8._4_4_ - fVar53 * (float)uStack_5e0;
      fVar52 = fVar54 * (float)uStack_5e0 - fVar47 * (float)local_5e8;
      fVar58 = fVar53 * (float)local_5e8 - fVar54 * local_5e8._4_4_;
      fVar59 = fVar51 * uStack_5e0._4_4_ - fVar51 * uStack_5e0._4_4_;
      fVar48 = fVar48 + fVar48;
      fVar52 = fVar52 + fVar52;
      fVar58 = fVar58 + fVar58;
      fVar59 = fVar59 + fVar59;
      fVar54 = (fVar58 * local_5e8._4_4_ - fVar52 * (float)uStack_5e0) +
               uStack_5e0._4_4_ * fVar48 + fVar54 + (float)local_5d8;
      fVar53 = (fVar48 * (float)uStack_5e0 - fVar58 * (float)local_5e8) +
               uStack_5e0._4_4_ * fVar52 + fVar53 + local_5d8._4_4_;
      fVar47 = (fVar52 * (float)local_5e8 - fVar48 * local_5e8._4_4_) +
               uStack_5e0._4_4_ * fVar58 + fVar47 + (float)uStack_5d0;
      fVar51 = (fVar59 * uStack_5e0._4_4_ - fVar59 * uStack_5e0._4_4_) +
               uStack_5e0._4_4_ * fVar59 + fVar51 + uStack_5d0._4_4_;
      uVar15 = 0;
    }
    else {
      fVar51 = local_5e8._4_4_ + local_5e8._4_4_;
      fVar46 = (float)uStack_5e0 + (float)uStack_5e0;
      local_828 = fVar45 * fVar48;
      fStack_824 = fVar50 * fVar52;
      fStack_820 = fVar62 * fVar58;
      fStack_81c = fVar49 * fVar59;
      fVar49 = (float)local_5e8 * ((float)local_5e8 + (float)local_5e8);
      fVar44 = ((float)local_5e8 + (float)local_5e8) * uStack_5e0._4_4_;
      fStack_224 = (fVar46 * uStack_5e0._4_4_ + fVar51 * (float)local_5e8) * fVar48;
      fStack_210 = (fVar44 + fVar46 * local_5e8._4_4_) * fVar52;
      local_208 = (fVar51 * uStack_5e0._4_4_ + fVar46 * (float)local_5e8) * fVar58;
      local_218 = fVar52 * (fVar51 * (float)local_5e8 - fVar46 * uStack_5e0._4_4_);
      fStack_204 = fVar58 * (fVar46 * local_5e8._4_4_ - fVar44);
      fStack_220 = fVar48 * (fVar46 * (float)local_5e8 - fVar51 * uStack_5e0._4_4_);
      local_228 = (float)((uint)((_DAT_146b30e90 -
                                 ((float)uStack_5e0 * fVar46 + local_5e8._4_4_ * fVar51)) * fVar48)
                         & _DAT_146b30ea0);
      fStack_214 = (float)((uint)((fRam0000000146b30e94 - ((float)uStack_5e0 * fVar46 + fVar49)) *
                                 fVar52) & uRam0000000146b30ea4);
      fStack_200 = (float)((uint)((fRam0000000146b30e98 - (local_5e8._4_4_ * fVar51 + fVar49)) *
                                 fVar58) & uRam0000000146b30ea8);
      fStack_21c = (float)((uint)((fRam0000000146b30e9c - (fVar49 + fVar49)) * fVar59) &
                          uRam0000000146b30eac);
      fVar51 = fStack_554 + fStack_554;
      fVar48 = fStack_550 + fStack_550;
      local_1f8 = (float)local_5d8;
      fStack_1f4 = local_5d8._4_4_;
      fStack_1f0 = (float)uStack_5d0;
      fVar52 = local_558 * (local_558 + local_558);
      fVar58 = fStack_54c * (local_558 + local_558);
      fStack_1e4 = (fStack_54c * fVar48 + local_558 * fVar51) * fVar45;
      fStack_1d0 = (fVar58 + fStack_554 * fVar48) * fVar50;
      local_1c8 = (fStack_54c * fVar51 + local_558 * fVar48) * fVar62;
      local_1d8 = fVar50 * (local_558 * fVar51 - fStack_54c * fVar48);
      fStack_1c4 = fVar62 * (fStack_554 * fVar48 - fVar58);
      fStack_1e0 = fVar45 * (local_558 * fVar48 - fStack_54c * fVar51);
      local_1e8 = (float)((uint)((_DAT_146b30e90 - (fStack_550 * fVar48 + fStack_554 * fVar51)) *
                                (float)local_838._0_4_) & _DAT_146b30ea0);
      fStack_1d4 = (float)((uint)((fRam0000000146b30e94 - (fStack_550 * fVar48 + fVar52)) *
                                 (float)local_838._4_4_) & uRam0000000146b30ea4);
      fStack_1c0 = (float)((uint)((fRam0000000146b30e98 - (fStack_554 * fVar51 + fVar52)) *
                                 fStack_830) & uRam0000000146b30ea8);
      fStack_1dc = (float)((uint)((fRam0000000146b30e9c - (fVar52 + fVar52)) * fStack_82c) &
                          uRam0000000146b30eac);
      local_748 = fStack_1e4 * local_218 + local_1e8 * local_228 + fStack_1e0 * local_208 +
                  fStack_1dc * (float)local_5d8;
      fStack_744 = fStack_1e4 * fStack_214 + local_1e8 * fStack_224 + fStack_1e0 * fStack_204 +
                   fStack_1dc * local_5d8._4_4_;
      fStack_740 = fStack_1e4 * fStack_210 + local_1e8 * fStack_220 + fStack_1e0 * fStack_200 +
                   fStack_1dc * (float)uStack_5d0;
      fStack_73c = fStack_1e4 * fStack_21c + local_1e8 * fStack_21c + fStack_1e0 * fStack_21c +
                   fStack_1dc * fRam0000000146b30e9c;
      fStack_1ac = fRam0000000146b30e9c;
      local_738 = fStack_1d4 * local_218 + local_1d8 * local_228 + fStack_1d0 * local_208 +
                  fStack_1dc * (float)local_5d8;
      fStack_734 = fStack_1d4 * fStack_214 + local_1d8 * fStack_224 + fStack_1d0 * fStack_204 +
                   fStack_1dc * local_5d8._4_4_;
      fStack_730 = fStack_1d4 * fStack_210 + local_1d8 * fStack_220 + fStack_1d0 * fStack_200 +
                   fStack_1dc * (float)uStack_5d0;
      fStack_72c = fStack_1d4 * fStack_21c + local_1d8 * fStack_21c + fStack_1d0 * fStack_21c +
                   fStack_1dc * fRam0000000146b30e9c;
      local_728 = fStack_1c4 * local_218 + local_1c8 * local_228 + fStack_1c0 * local_208 +
                  fStack_1dc * (float)local_5d8;
      fStack_724 = fStack_1c4 * fStack_214 + local_1c8 * fStack_224 + fStack_1c0 * fStack_204 +
                   fStack_1dc * local_5d8._4_4_;
      fStack_720 = fStack_1c4 * fStack_210 + local_1c8 * fStack_220 + fStack_1c0 * fStack_200 +
                   fStack_1dc * (float)uStack_5d0;
      fStack_71c = fStack_1c4 * fStack_21c + local_1c8 * fStack_21c + fStack_1c0 * fStack_21c +
                   fStack_1dc * fRam0000000146b30e9c;
      local_718 = fVar53 * local_218 + fVar54 * local_228 + fVar47 * local_208 +
                  fRam0000000146b30e9c * (float)local_5d8;
      fStack_714 = fVar53 * fStack_214 + fVar54 * fStack_224 + fVar47 * fStack_204 +
                   fRam0000000146b30e9c * local_5d8._4_4_;
      fStack_710 = fVar53 * fStack_210 + fVar54 * fStack_220 + fVar47 * fStack_200 +
                   fRam0000000146b30e9c * (float)uStack_5d0;
      fStack_70c = fVar53 * fStack_21c + fVar54 * fStack_21c + fVar47 * fStack_21c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      fStack_60c = fRam0000000146b30e9c;
      fStack_20c = fStack_21c;
      fStack_1fc = fStack_21c;
      fStack_1ec = fRam0000000146b30e9c;
      fStack_1cc = fStack_1dc;
      fStack_1bc = fStack_1dc;
      local_1b8 = fVar54;
      fStack_1b4 = fVar53;
      fStack_1b0 = fVar47;
      FMatrix::RemoveScaling(&local_748);
      fVar47 = (float)(-(uint)(fVar40 <= local_828) & (_DAT_146b30ee0 ^ (uint)fVar60) ^
                      _DAT_146b30ee0);
      fVar51 = (float)(-(uint)(fVar41 <= fStack_824) & (uRam0000000146b30ee4 ^ (uint)fVar61) ^
                      uRam0000000146b30ee4);
      fVar53 = (float)(-(uint)(fVar43 <= fStack_820) & (uRam0000000146b30ee8 ^ (uint)fVar39) ^
                      uRam0000000146b30ee8);
      local_748 = local_748 * fVar47;
      fStack_744 = fStack_744 * fVar47;
      fStack_740 = fStack_740 * fVar47;
      fStack_734 = fStack_734 * fVar51;
      fStack_730 = fStack_730 * fVar51;
      local_738 = local_738 * fVar51;
      fStack_724 = fStack_724 * fVar53;
      fStack_720 = fStack_720 * fVar53;
      local_728 = local_728 * fVar53;
      uVar15 = FQuat::FQuat(local_838,&local_748);
      local_848 = 0x322bcc77;
      auVar37._0_4_ = (float)local_838._0_4_ * (float)local_838._0_4_ + fStack_830 * fStack_830;
      auVar37._4_4_ = (float)local_838._4_4_ * (float)local_838._4_4_ + fStack_82c * fStack_82c;
      auVar37._8_4_ = fStack_830 * fStack_830 + (float)local_838._0_4_ * (float)local_838._0_4_;
      auVar37._12_4_ = fStack_82c * fStack_82c + (float)local_838._4_4_ * (float)local_838._4_4_;
      fVar52 = auVar37._4_4_ + auVar37._0_4_;
      fVar58 = auVar37._8_4_ + auVar37._4_4_;
      fVar59 = auVar37._12_4_ + auVar37._8_4_;
      fVar60 = auVar37._0_4_ + auVar37._12_4_;
      auVar8._4_4_ = fVar58;
      auVar8._0_4_ = fVar52;
      auVar8._8_4_ = fVar59;
      auVar8._12_4_ = fVar60;
      auVar19 = rsqrtps(auVar37,auVar8);
      fVar47 = auVar19._0_4_;
      fVar53 = auVar19._4_4_;
      fVar54 = auVar19._8_4_;
      fVar48 = auVar19._12_4_;
      fVar47 = (fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47;
      fVar53 = (fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53;
      fVar54 = (fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54;
      fVar48 = (fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48;
      fVar51 = 0.0;
      local_618 = (float)(((uint)(((fVar55 - fVar47 * fVar47 * fVar52 * fVar55) * fVar47 + fVar47) *
                                 (float)local_838._0_4_) ^ _DAT_146b30e70) &
                          -(uint)(1e-08 <= fVar52) ^ _DAT_146b30e70);
      fStack_614 = (float)(((uint)(((fVar56 - fVar53 * fVar53 * fVar58 * fVar56) * fVar53 + fVar53)
                                  * (float)local_838._4_4_) ^ uRam0000000146b30e74) &
                           -(uint)(1e-08 <= fVar58) ^ uRam0000000146b30e74);
      fStack_610 = (float)(((uint)(((fVar57 - fVar54 * fVar54 * fVar59 * fVar57) * fVar54 + fVar54)
                                  * fStack_830) ^ uRam0000000146b30e78) & -(uint)(1e-08 <= fVar59) ^
                          uRam0000000146b30e78);
      fStack_60c = (float)(((uint)(((fVar42 - fVar48 * fVar48 * fVar60 * fVar42) * fVar48 + fVar48)
                                  * fStack_82c) ^ uRam0000000146b30e7c) & -(uint)(1e-08 <= fVar60) ^
                          uRam0000000146b30e7c);
      fVar54 = local_718;
      fVar53 = fStack_714;
      fVar47 = fStack_710;
    }
    fVar61 = fRam0000000146b30ef8;
    fVar60 = fRam0000000146b30ef4;
    fVar59 = _DAT_146b30ef0;
    fVar58 = fRam0000000146b30e98;
    fVar52 = fRam0000000146b30e94;
    fVar48 = _DAT_146b30e90;
    auVar12._4_4_ = fStack_624;
    auVar12._0_4_ = local_628;
    auVar12._8_4_ = fStack_620;
    auVar12._12_4_ = fStack_61c;
    auVar30._4_4_ = fStack_824;
    auVar30._0_4_ = local_828;
    auVar30._8_4_ = fStack_820;
    auVar30._12_4_ = fStack_81c;
    auVar19 = minps(auVar30,auVar12);
    auVar31._4_4_ = -(uint)(auVar19._4_4_ < fRam0000000146b30ef4);
    auVar31._0_4_ = -(uint)(auVar19._0_4_ < _DAT_146b30ef0);
    auVar31._8_4_ = -(uint)(auVar19._8_4_ < fRam0000000146b30ef8);
    auVar31._12_4_ = -(uint)(auVar19._12_4_ < fRam0000000146b30efc);
    iVar14 = movmskps(uVar15,auVar31);
    local_608 = CONCAT44(fVar53,fVar54);
    uStack_600 = CONCAT44(fVar51,fVar47);
    local_5f8 = local_828;
    fStack_5f4 = fStack_824;
    fStack_5f0 = fStack_820;
    fStack_5ec = fStack_81c;
    if (iVar14 == 0) {
      fVar54 = fVar54 * local_628;
      fVar53 = fVar53 * fStack_624;
      fVar47 = fVar47 * fStack_620;
      fVar51 = fVar51 * fStack_61c;
      fVar48 = fStack_60c * local_648 * _DAT_146b30ed0 + local_618 * fStack_63c +
               fStack_610 * fStack_644 * _DAT_146b30ec0 + fStack_614 * fStack_640 * _DAT_146b30eb0;
      fVar52 = fStack_610 * local_648 * fRam0000000146b30ed4 + fStack_614 * fStack_63c +
               fStack_60c * fStack_644 * fRam0000000146b30ec4 +
               local_618 * fStack_640 * fRam0000000146b30eb4;
      fVar58 = fStack_614 * local_648 * fRam0000000146b30ed8 + fStack_610 * fStack_63c +
               local_618 * fStack_644 * fRam0000000146b30ec8 +
               fStack_60c * fStack_640 * fRam0000000146b30eb8;
      fVar59 = local_618 * local_648 * fRam0000000146b30edc + fStack_60c * fStack_63c +
               fStack_614 * fStack_644 * fRam0000000146b30ecc +
               fStack_610 * fStack_640 * fRam0000000146b30ebc;
      fVar39 = local_828 * local_628;
      fVar40 = fStack_824 * fStack_624;
      fVar41 = fStack_820 * fStack_620;
      fVar43 = fStack_81c * fStack_61c;
      fVar55 = fVar47 * fStack_644 - fVar53 * fStack_640;
      fVar56 = fVar54 * fStack_640 - fVar47 * local_648;
      fVar57 = fVar53 * local_648 - fVar54 * fStack_644;
      fVar42 = fVar51 * fStack_63c - fVar51 * fStack_63c;
      fVar55 = fVar55 + fVar55;
      fVar56 = fVar56 + fVar56;
      fVar57 = fVar57 + fVar57;
      fVar42 = fVar42 + fVar42;
      fVar54 = (fVar57 * fStack_644 - fVar56 * fStack_640) + fVar55 * fStack_63c + fVar54 +
               (float)local_638._0_4_;
      fVar53 = (fVar55 * fStack_640 - fVar57 * local_648) + fVar56 * fStack_63c + fVar53 +
               (float)local_638._4_4_;
      fVar47 = (fVar56 * local_648 - fVar55 * fStack_644) + fVar57 * fStack_63c + fVar47 +
               fStack_630;
      fVar51 = (fVar42 * fStack_63c - fVar42 * fStack_63c) + fVar42 * fStack_63c + fVar51 +
               fStack_62c;
    }
    else {
      fVar51 = fStack_644 + fStack_644;
      fVar39 = fStack_640 + fStack_640;
      fVar41 = local_648 * (local_648 + local_648);
      local_838._4_4_ = fStack_824 * fStack_624;
      local_838._0_4_ = local_828 * local_628;
      fStack_830 = fStack_820 * fStack_620;
      fStack_82c = fStack_81c * fStack_61c;
      fVar40 = fStack_63c * (local_648 + local_648);
      fStack_1a4 = (fStack_63c * fVar39 + local_648 * fVar51) * local_628;
      fStack_190 = (fVar40 + fStack_644 * fVar39) * fStack_624;
      local_188 = (fStack_63c * fVar51 + local_648 * fVar39) * fStack_620;
      local_198 = fStack_624 * (local_648 * fVar51 - fStack_63c * fVar39);
      fStack_184 = fStack_620 * (fStack_644 * fVar39 - fVar40);
      fStack_1a0 = local_628 * (local_648 * fVar39 - fStack_63c * fVar51);
      local_1a8 = (float)((uint)((_DAT_146b30e90 - (fStack_640 * fVar39 + fStack_644 * fVar51)) *
                                local_628) & _DAT_146b30ea0);
      fStack_194 = (float)((uint)((fRam0000000146b30e94 - (fStack_640 * fVar39 + fVar41)) *
                                 fStack_624) & uRam0000000146b30ea4);
      fStack_180 = (float)((uint)((fRam0000000146b30e98 - (fStack_644 * fVar51 + fVar41)) *
                                 fStack_620) & uRam0000000146b30ea8);
      fStack_19c = (float)((uint)((fRam0000000146b30e9c - (fVar41 + fVar41)) * fStack_61c) &
                          uRam0000000146b30eac);
      fVar51 = fStack_614 + fStack_614;
      fVar39 = fStack_610 + fStack_610;
      local_178 = (float)local_638._0_4_;
      fStack_174 = (float)local_638._4_4_;
      fStack_170 = fStack_630;
      fVar40 = local_618 * (local_618 + local_618);
      fVar41 = fStack_60c * (local_618 + local_618);
      fStack_164 = (fStack_60c * fVar39 + fVar51 * local_618) * local_828;
      fStack_150 = (fVar41 + fVar39 * fStack_614) * fStack_824;
      local_148 = (fStack_60c * fVar51 + fVar39 * local_618) * fStack_820;
      local_158 = fStack_824 * (fVar51 * local_618 - fStack_60c * fVar39);
      fStack_144 = fStack_820 * (fVar39 * fStack_614 - fVar41);
      fStack_160 = local_828 * (fVar39 * local_618 - fStack_60c * fVar51);
      local_168 = (float)((uint)((_DAT_146b30e90 - (fStack_610 * fVar39 + fStack_614 * fVar51)) *
                                local_828) & _DAT_146b30ea0);
      fStack_154 = (float)((uint)((fRam0000000146b30e94 - (fStack_610 * fVar39 + fVar40)) *
                                 fStack_824) & uRam0000000146b30ea4);
      fStack_140 = (float)((uint)((fRam0000000146b30e98 - (fStack_614 * fVar51 + fVar40)) *
                                 fStack_820) & uRam0000000146b30ea8);
      fStack_15c = (float)((uint)((fRam0000000146b30e9c - (fVar40 + fVar40)) * fStack_81c) &
                          uRam0000000146b30eac);
      fStack_12c = fRam0000000146b30e9c;
      local_788 = fStack_164 * local_198 + local_168 * local_1a8 + fStack_160 * local_188 +
                  fStack_15c * (float)local_638._0_4_;
      fStack_784 = fStack_164 * fStack_194 + local_168 * fStack_1a4 + fStack_160 * fStack_184 +
                   fStack_15c * (float)local_638._4_4_;
      fStack_780 = fStack_164 * fStack_190 + local_168 * fStack_1a0 + fStack_160 * fStack_180 +
                   fStack_15c * fStack_630;
      fStack_77c = fStack_164 * fStack_19c + local_168 * fStack_19c + fStack_160 * fStack_19c +
                   fStack_15c * fRam0000000146b30e9c;
      local_778 = fStack_154 * local_198 + local_158 * local_1a8 + fStack_150 * local_188 +
                  fStack_15c * (float)local_638._0_4_;
      fStack_774 = fStack_154 * fStack_194 + local_158 * fStack_1a4 + fStack_150 * fStack_184 +
                   fStack_15c * (float)local_638._4_4_;
      fStack_770 = fStack_154 * fStack_190 + local_158 * fStack_1a0 + fStack_150 * fStack_180 +
                   fStack_15c * fStack_630;
      fStack_76c = fStack_154 * fStack_19c + local_158 * fStack_19c + fStack_150 * fStack_19c +
                   fStack_15c * fRam0000000146b30e9c;
      local_768 = fStack_144 * local_198 + local_148 * local_1a8 + fStack_140 * local_188 +
                  fStack_15c * (float)local_638._0_4_;
      fStack_764 = fStack_144 * fStack_194 + local_148 * fStack_1a4 + fStack_140 * fStack_184 +
                   fStack_15c * (float)local_638._4_4_;
      fStack_760 = fStack_144 * fStack_190 + local_148 * fStack_1a0 + fStack_140 * fStack_180 +
                   fStack_15c * fStack_630;
      fStack_75c = fStack_144 * fStack_19c + local_148 * fStack_19c + fStack_140 * fStack_19c +
                   fStack_15c * fRam0000000146b30e9c;
      local_758 = fVar53 * local_198 + fVar54 * local_1a8 + fVar47 * local_188 +
                  fRam0000000146b30e9c * (float)local_638._0_4_;
      fStack_754 = fVar53 * fStack_194 + fVar54 * fStack_1a4 + fVar47 * fStack_184 +
                   fRam0000000146b30e9c * (float)local_638._4_4_;
      fStack_750 = fVar53 * fStack_190 + fVar54 * fStack_1a0 + fVar47 * fStack_180 +
                   fRam0000000146b30e9c * fStack_630;
      fStack_74c = fVar53 * fStack_19c + fVar54 * fStack_19c + fVar47 * fStack_19c +
                   fRam0000000146b30e9c * fRam0000000146b30e9c;
      fStack_18c = fStack_19c;
      fStack_17c = fStack_19c;
      fStack_16c = fRam0000000146b30e9c;
      fStack_14c = fStack_15c;
      fStack_13c = fStack_15c;
      local_138 = fVar54;
      fStack_134 = fVar53;
      fStack_130 = fVar47;
      FMatrix::RemoveScaling(&local_788);
      fVar39 = (float)local_838._0_4_;
      fVar40 = (float)local_838._4_4_;
      fVar41 = fStack_830;
      fVar43 = fStack_82c;
      fVar47 = (float)((_DAT_146b30ee0 ^ (uint)fVar48) & -(uint)(fVar59 <= (float)local_838._0_4_) ^
                      _DAT_146b30ee0);
      fVar51 = (float)((uRam0000000146b30ee4 ^ (uint)fVar52) &
                       -(uint)(fVar60 <= (float)local_838._4_4_) ^ uRam0000000146b30ee4);
      fVar53 = (float)((uRam0000000146b30ee8 ^ (uint)fVar58) & -(uint)(fVar61 <= fStack_830) ^
                      uRam0000000146b30ee8);
      local_788 = local_788 * fVar47;
      fStack_784 = fStack_784 * fVar47;
      fStack_780 = fStack_780 * fVar47;
      fStack_774 = fStack_774 * fVar51;
      fStack_770 = fStack_770 * fVar51;
      local_778 = local_778 * fVar51;
      fStack_764 = fStack_764 * fVar53;
      fStack_760 = fStack_760 * fVar53;
      local_768 = local_768 * fVar53;
      FQuat::FQuat(local_838,&local_788);
      local_848 = 0x322bcc77;
      auVar38._0_4_ = (float)local_838._0_4_ * (float)local_838._0_4_ + fStack_830 * fStack_830;
      auVar38._4_4_ = (float)local_838._4_4_ * (float)local_838._4_4_ + fStack_82c * fStack_82c;
      auVar38._8_4_ = fStack_830 * fStack_830 + (float)local_838._0_4_ * (float)local_838._0_4_;
      auVar38._12_4_ = fStack_82c * fStack_82c + (float)local_838._4_4_ * (float)local_838._4_4_;
      fVar48 = auVar38._4_4_ + auVar38._0_4_;
      fVar52 = auVar38._8_4_ + auVar38._4_4_;
      fVar58 = auVar38._12_4_ + auVar38._8_4_;
      fVar60 = auVar38._0_4_ + auVar38._12_4_;
      auVar9._4_4_ = fVar52;
      auVar9._0_4_ = fVar48;
      auVar9._8_4_ = fVar58;
      auVar9._12_4_ = fVar60;
      auVar19 = rsqrtps(auVar38,auVar9);
      fVar47 = auVar19._0_4_;
      fVar53 = auVar19._4_4_;
      fVar54 = auVar19._8_4_;
      fVar59 = auVar19._12_4_;
      fVar47 = (fVar55 - fVar47 * fVar47 * fVar48 * fVar55) * fVar47 + fVar47;
      fVar53 = (fVar56 - fVar53 * fVar53 * fVar52 * fVar56) * fVar53 + fVar53;
      fVar54 = (fVar57 - fVar54 * fVar54 * fVar58 * fVar57) * fVar54 + fVar54;
      fVar59 = (fVar42 - fVar59 * fVar59 * fVar60 * fVar42) * fVar59 + fVar59;
      fVar51 = 0.0;
      fVar48 = (float)(((uint)(((fVar55 - fVar47 * fVar47 * fVar48 * fVar55) * fVar47 + fVar47) *
                              (float)local_838._0_4_) ^ _DAT_146b30e70) & -(uint)(1e-08 <= fVar48) ^
                      _DAT_146b30e70);
      fVar52 = (float)(((uint)(((fVar56 - fVar53 * fVar53 * fVar52 * fVar56) * fVar53 + fVar53) *
                              (float)local_838._4_4_) ^ uRam0000000146b30e74) &
                       -(uint)(1e-08 <= fVar52) ^ uRam0000000146b30e74);
      fVar58 = (float)(((uint)(((fVar57 - fVar54 * fVar54 * fVar58 * fVar57) * fVar54 + fVar54) *
                              fStack_830) ^ uRam0000000146b30e78) & -(uint)(1e-08 <= fVar58) ^
                      uRam0000000146b30e78);
      fVar59 = (float)(((uint)(((fVar42 - fVar59 * fVar59 * fVar60 * fVar42) * fVar59 + fVar59) *
                              fStack_82c) ^ uRam0000000146b30e7c) & -(uint)(1e-08 <= fVar60) ^
                      uRam0000000146b30e7c);
      fVar54 = local_758;
      fVar53 = fStack_754;
      fVar47 = fStack_750;
    }
    lVar2 = *(longlong *)(param_1 + 0x180);
    lVar3 = *(longlong *)(param_1 + 0x118);
    fVar56 = *param_3 - *(float *)(lVar2 + 0x220);
    fVar57 = param_3[1] - *(float *)(lVar2 + 0x224);
    fVar55 = (param_3[2] - *(float *)(lVar2 + 0x228)) + *(float *)(param_1 + 0x254);
    if ((lVar3 == 0) || (cVar13 = FUN_142cb0c90(), cVar13 == '\0')) {
      plVar17 = (longlong *)0x0;
    }
    else {
      plVar17 = *(longlong **)(lVar3 + 0x900);
    }
    if (((plVar17 == (longlong *)0x0) ||
        (cVar13 = (**(code **)(*plVar17 + 0xbf0))(), cVar13 == '\0')) &&
       (lVar2 = *(longlong *)(param_1 + 0x550), lVar2 != 0)) {
      fVar56 = fVar56 + *(float *)(lVar2 + 0x7f8);
      fVar57 = fVar57 + *(float *)(lVar2 + 0x7fc);
      fVar55 = fVar55 + *(float *)(lVar2 + 0x800);
    }
    *param_2 = fVar48;
    param_2[1] = fVar52;
    param_2[2] = fVar58;
    param_2[3] = fVar59;
    param_2[4] = fVar54 + fVar56;
    param_2[5] = fVar53 + fVar57;
    param_2[6] = fVar47 + fVar55;
    param_2[7] = fVar51 + 0.0;
    param_2[8] = fVar39;
    param_2[9] = fVar40;
    param_2[10] = fVar41;
    param_2[0xb] = fVar43;
  }
  return param_2;
}



// FUNCTION 142cba430 FUN_142cba430 body=1800 status=ok
// SIG undefined FUN_142cba430(void)

void FUN_142cba430(undefined4 *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  char *pcVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  char *pcVar12;
  char *pcVar13;
  uint uVar14;
  char *pcVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  float local_res18 [2];
  int local_res20;
  uint uStackX_24;
  undefined8 local_138;
  float local_130;
  undefined8 local_128;
  float local_120;
  undefined4 local_118 [4];
  undefined1 local_108 [12];
  undefined4 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined1 local_94 [84];
  
  fVar3 = (float)param_1[4];
  fVar16 = (float)param_1[3];
  local_138 = *(undefined8 *)(param_1 + 3);
  fVar17 = fVar16 * fVar16 + fVar3 * fVar3;
  if (fVar17 == 1.0) {
    if ((float)param_1[5] == 0.0) {
      local_138 = *(undefined8 *)(param_1 + 3);
      local_130 = (float)param_1[5];
    }
    else {
LAB_142cba563:
      local_130 = 0.0;
    }
  }
  else {
    if (1e-08 <= fVar17) {
      auVar18 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
      local_res18[0] = auVar18._0_4_;
      local_res18[0] =
           local_res18[0] + local_res18[0] * (0.5 - fVar17 * 0.5 * local_res18[0] * local_res18[0]);
      local_res18[0] =
           local_res18[0] + local_res18[0] * (0.5 - fVar17 * 0.5 * local_res18[0] * local_res18[0]);
      local_138 = CONCAT44(local_res18[0] * fVar3,local_res18[0] * fVar16);
      goto LAB_142cba563;
    }
    local_130 = DAT_1468b5d98;
    local_138 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  *(undefined8 *)(param_2 + 4) = local_138;
  *(float *)(param_2 + 0xc) = local_130;
  cVar4 = FUN_142cbc420();
  pcVar12 = (char *)0x0;
  if (cVar4 != '\0') {
    puVar1 = (undefined8 *)(param_2 + 0x10);
    fVar16 = (float)param_1[0xb];
    lVar9 = *(longlong *)(param_1 + 0x16);
    fVar3 = *(float *)(lVar9 + 400);
    *puVar1 = *(undefined8 *)(param_1 + 9);
    *(float *)(param_2 + 0x18) = fVar16 + fVar3;
    local_128 = CONCAT44(*(float *)(*(longlong *)(param_1 + 0x14) + 0x50) * *(float *)(param_2 + 8)
                         + *(float *)(param_2 + 0x2c),
                         *(float *)(*(longlong *)(param_1 + 0x14) + 0x50) * *(float *)(param_2 + 4)
                         + *(float *)(param_2 + 0x28));
    local_120 = *(float *)(param_2 + 0x18);
    _guard_xfg_dispatch_icall_nop(local_108,0,0x90);
    local_fc = 0x3f800000;
    local_118[0] = 0;
    FUN_142cc7880(local_108,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                  *(undefined1 *)(param_1 + 0x10),puVar1,&local_128,local_118,0);
    lVar8 = FWeakObjectPtr::Get(local_94);
    if (lVar8 == 0) {
      local_138 = *puVar1;
      local_130 = *(float *)(param_2 + 0x18) - *(float *)(lVar9 + 400);
      local_118[0] = 0;
      FUN_142cc7880(local_108,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                    *(undefined1 *)(param_1 + 0x10),puVar1,&local_138,local_118,0);
      lVar9 = FWeakObjectPtr::Get(local_94);
      if (lVar9 == 0) {
        cVar4 = FUN_142cbbe50(param_1,param_2,0);
        if (cVar4 != '\0') {
          cVar5 = FUN_142cf12a0(*(undefined8 *)(param_1 + 0x14));
          if (cVar5 != '\0') {
            cVar4 = FUN_142cbbe50(param_1,param_2,1);
          }
          if (cVar4 != '\0') {
            param_2[0x144] = 0x18;
            param_2[0x8c] = 1;
          }
        }
      }
      else {
        param_2[0x144] = 5;
      }
    }
    else {
      param_2[0x144] = 4;
    }
  }
  cVar4 = FUN_142cf12e0(*(undefined8 *)(param_1 + 0x14));
  if ((((cVar4 != '\0') && (param_2[0x144] != '\x18')) &&
      ((*(float *)(param_2 + 0x28) != 0.0 ||
       ((*(float *)(param_2 + 0x2c) != 0.0 || (*(float *)(param_2 + 0x30) != 0.0)))))) &&
     (cVar4 = FUN_142cbc730(param_1), cVar4 != '\0')) {
    local_128 = *(undefined8 *)(param_1 + 9);
    puVar1 = (undefined8 *)(param_2 + 0x14c);
    local_120 = (float)param_1[0xb];
    fVar3 = *(float *)(param_2 + 0x60);
    lVar9 = *(longlong *)(param_1 + 0x16);
    fVar16 = (float)param_1[1];
    fVar17 = *(float *)(*(longlong *)(param_1 + 0x14) + 0x60);
    *puVar1 = CONCAT44(fVar17 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x2c),
                       fVar17 * *(float *)(param_2 + 4) + *(float *)(param_2 + 0x28));
    *(float *)(param_2 + 0x154) = fVar17 * *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x30);
    *(float *)(param_2 + 0x154) =
         local_120 + *(float *)(lVar9 + 400) + (float)param_1[1] + (float)param_1[1];
    local_138 = *puVar1;
    local_130 = (fVar3 + fVar16) - *(float *)(*(longlong *)(param_1 + 0x14) + 0x58);
    _guard_xfg_dispatch_icall_nop(local_108,0,0x90);
    local_120 = (float)*param_1;
    local_fc = 0x3f800000;
    local_128 = CONCAT44(local_120,3);
    cVar4 = FUN_142cc7880(local_108,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                          *(undefined1 *)(param_1 + 0x10),puVar1,&local_138,&local_128,0);
    if (cVar4 == '\0') {
      *(undefined8 *)(param_2 + 0x158) = local_138;
      *(float *)(param_2 + 0x160) = local_130;
    }
    else {
      *(undefined8 *)(param_2 + 0x170) = local_d0;
      *(undefined8 *)(param_2 + 0x158) = local_f4;
      *(undefined4 *)(param_2 + 0x178) = local_c8;
      *(undefined4 *)(param_2 + 0x160) = local_ec;
      *(undefined8 *)(param_2 + 0x164) = local_e8;
      *(undefined4 *)(param_2 + 0x16c) = local_e0;
      uVar10 = FWeakObjectPtr::Get(local_94);
      FWeakObjectPtr::operator=(param_2 + 0x17c,uVar10);
      local_res18[0] = (float)CONCAT13(local_res18[0]._3_1_,0x101);
      iVar7 = FUN_142cbc9f0(param_1,puVar1,local_res18);
      if ((iVar7 == 0) &&
         (*(float *)(*(longlong *)(param_1 + 0x14) + 0x5c) <=
          (fVar3 + fVar16) - *(float *)(param_2 + 0x160))) {
        *param_2 = 1;
        param_2[0x184] = param_2[0x184] | 1;
      }
    }
  }
  if ((param_2[0x8c] == '\0') && (param_2[0x148] == '\0')) {
    return;
  }
  fVar3 = (float)param_1[8];
  local_res18[0] = (float)CONCAT31(local_res18[0]._1_3_,*(undefined1 *)(param_1 + 0x1a));
  lVar9 = *(longlong *)(param_1 + 0x14);
  local_res20 = -1;
  uStackX_24 = uStackX_24 & 0xffffff00;
  pcVar13 = pcVar12;
  pcVar15 = pcVar12;
  local_120 = fVar3;
  if (*(int *)(lVar9 + 0x38) < 1) {
LAB_142cbaad4:
    uVar6 = 1;
  }
  else {
    do {
      pcVar2 = pcVar12 + *(longlong *)(lVar9 + 0x30);
      if (*(longlong *)(pcVar12 + *(longlong *)(lVar9 + 0x30) + 8) != 0) {
        lVar11 = FUN_142e20fc0();
        for (lVar8 = *(longlong *)(pcVar2 + 8); lVar8 != 0; lVar8 = *(longlong *)(lVar8 + 0x30)) {
          if (lVar8 == lVar11) {
            if ((*(longlong *)(pcVar2 + 8) != 0) &&
               (((pcVar13 == (char *)0x0 ||
                 (*(float *)(pcVar13 + 0x10) <= *(float *)(pcVar2 + 0x10) &&
                  *(float *)(pcVar2 + 0x10) != *(float *)(pcVar13 + 0x10))) &&
                (*pcVar2 == local_res18[0]._0_1_)))) {
              cVar4 = *(char *)(param_1 + 0x1a);
              if ((pcVar2[0x10c] & 1U) == 0) {
                lVar8 = 0x90;
                if (cVar4 != '\0') {
                  lVar8 = 0x14c;
                }
              }
              else {
                lVar8 = 0xcc;
                if (cVar4 != '\0') {
                  lVar8 = 0x188;
                }
              }
              if (((*(byte *)((longlong)param_1 + lVar8 + 0xa0) & 1) != 0) &&
                 ((fVar16 = *(float *)((longlong)param_1 + lVar8 + 0x7c) - fVar3,
                  *(float *)(pcVar2 + 0x10) <= fVar16 && fVar16 != *(float *)(pcVar2 + 0x10) ||
                  (local_res18[0]._0_1_ == '\x01')))) {
                pcVar13 = pcVar2;
                local_res20 = (int)pcVar15;
              }
            }
            break;
          }
        }
      }
      uVar14 = (int)pcVar15 + 1;
      pcVar12 = pcVar12 + 0x110;
      pcVar15 = (char *)(ulonglong)uVar14;
    } while ((int)uVar14 < *(int *)(lVar9 + 0x38));
    if (pcVar13 == (char *)0x0) goto LAB_142cbaad4;
    cVar4 = FUN_142cc9880(param_1,param_1 + 0x1a,pcVar13,&uStackX_24);
    if (cVar4 == '\0') {
      local_res20 = -1;
      goto LAB_142cbaaea;
    }
    uVar6 = (undefined1)uStackX_24;
  }
  if (local_res20 != -1) {
    uVar6 = 4;
  }
  uStackX_24 = CONCAT31(uStackX_24._1_3_,uVar6);
LAB_142cbaaea:
  *(ulonglong *)(param_2 + 0x200) = CONCAT44(uStackX_24,local_res20);
  if (local_res20 == -1) {
    param_2[0x8c] = 0;
    param_2[0x148] = 0;
  }
  return;
}



// FUNCTION 142cbab40 FUN_142cbab40 body=866 status=ok
// SIG undefined FUN_142cbab40(void)

float * FUN_142cbab40(longlong param_1,float *param_2,longlong param_3,undefined8 param_4)

{
  float fVar1;
  int iVar2;
  undefined8 *puVar3;
  float *pfVar4;
  char *pcVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  
  param_2[0] = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  if (*(char *)(param_1 + 0x108) == '\0') {
    pfVar4 = (float *)FUN_142cb7990(param_1,&local_68);
    fVar8 = pfVar4[1];
    fVar9 = pfVar4[2];
    fVar1 = pfVar4[3];
    *param_2 = *pfVar4;
    param_2[1] = fVar8;
    param_2[2] = fVar9;
    param_2[3] = fVar1;
    uVar7 = *(undefined8 *)(pfVar4 + 4);
  }
  else {
    local_68 = CONCAT44(DAT_1466ad120._4_4_,(float)DAT_1466ad120);
    fStack_60 = DAT_1466ad128;
    fStack_54 = DAT_1466ad108;
    fStack_5c = (float)DAT_1466ad100;
    fStack_58 = DAT_1466ad100._4_4_;
    param_1 = param_1 + (ulonglong)*(byte *)(param_3 + 0x38) * 2;
    pcVar5 = (char *)(param_1 + 0x109);
    if ((*pcVar5 != -1) || (*(char *)(param_1 + 0x10a) != -1)) {
      puVar3 = (undefined8 *)FUN_142cc2ec0(pcVar5,&local_88);
      fStack_54 = *(float *)(puVar3 + 1);
      fStack_5c = (float)*puVar3;
      fStack_58 = (float)((ulonglong)*puVar3 >> 0x20);
    }
    uVar7 = CONCAT44(fStack_54,fStack_58);
    *param_2 = (float)local_68;
    param_2[1] = local_68._4_4_;
    param_2[2] = fStack_60;
    param_2[3] = fStack_5c;
  }
  *(undefined8 *)(param_2 + 4) = uVar7;
  FUN_142ced180(param_4,&local_78,*(undefined1 *)(param_3 + 0x38));
  local_88 = *param_2;
  if (((((local_88 <= -(float)DAT_1466ad120) || ((float)DAT_1466ad120 <= local_88)) ||
       (local_84 = param_2[1], local_84 <= -DAT_1466ad120._4_4_)) ||
      ((DAT_1466ad120._4_4_ <= local_84 || (local_80 = param_2[2], local_80 <= -DAT_1466ad128)))) ||
     (DAT_1466ad128 <= local_80)) {
    if ((((float)DAT_1466ad100 == param_2[3]) && (DAT_1466ad100._4_4_ == param_2[4])) &&
       (DAT_1466ad108 == param_2[5])) {
      iVar2 = *(byte *)(param_3 + 0x38) - 1;
      uVar6 = (char)iVar2;
      if (iVar2 < 1) {
        uVar6 = 0;
      }
      puVar3 = (undefined8 *)FUN_142ced030(param_4,&local_68,uVar6);
      *(undefined8 *)param_2 = *puVar3;
      param_2[2] = *(float *)(puVar3 + 1);
      puVar3 = (undefined8 *)FUN_142ced280(param_4,&local_68,uVar6);
      *(undefined8 *)(param_2 + 3) = *puVar3;
      param_2[5] = *(float *)(puVar3 + 1);
    }
    else {
      pfVar4 = (float *)FRotator::Vector(param_2 + 3,&local_68);
      fVar8 = pfVar4[2];
      *(ulonglong *)param_2 = CONCAT44(pfVar4[1] * 10000.0 + local_74,*pfVar4 * 10000.0 + local_78);
      param_2[2] = fVar8 * 10000.0 + local_70;
    }
  }
  else {
    local_88 = local_88 - local_78;
    local_84 = local_84 - local_74;
    local_80 = local_80 - local_70;
    fVar8 = local_84 * local_84 + local_88 * local_88 + local_80 * local_80;
    if (fVar8 != 1.0) {
      if (1e-08 <= fVar8) {
        auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar10._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        local_88 = local_88 * fVar9;
        local_84 = local_84 * fVar9;
        local_80 = local_80 * fVar9;
      }
      else {
        local_88 = DAT_1468b5d90;
        local_80 = DAT_1468b5d98;
        local_84 = DAT_1468b5d94;
      }
    }
    puVar3 = (undefined8 *)FVector::Rotation(&local_88,&local_68);
    *(undefined8 *)(param_2 + 3) = *puVar3;
    param_2[5] = *(float *)(puVar3 + 1);
  }
  return param_2;
}



// FUNCTION 142cbaeb0 FUN_142cbaeb0 body=1396 status=ok
// SIG undefined FUN_142cbaeb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbaeb0(longlong *param_1,float param_2,longlong *param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  float *pfVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  longlong *local_res8;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float fStack_c0;
  float fStack_bc;
  undefined8 local_b8;
  float local_b0;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x15c);
  lVar6 = *(longlong *)(*param_1 + 0xfd8);
  *(uint *)((longlong)param_1 + 0x15c) = uVar1 & 0xffffff7f;
  if ((uVar1 & 0x40) != 0) {
    return;
  }
  lVar7 = param_1[1];
  if (((*(uint *)(lVar7 + 0x28) >> 0xb & 1) == 0) && (*(char *)(*param_1 + 0x248) == '\x03')) {
    return;
  }
  fVar15 = 1.0;
  local_d8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  local_d0 = DAT_1468b5d98;
  if ((uVar1 >> 9 & 1) == 0) {
    local_d8 = param_1[0x1e];
    local_d0 = *(float *)(param_1 + 0x1f);
LAB_142cbb0b5:
    fVar14 = (float)((ulonglong)local_d8 >> 0x20);
    fVar16 = (float)local_d8;
  }
  else {
    fVar16 = DAT_1468b5d90;
    fVar14 = DAT_1468b5d94;
    if (1 < *(byte *)(lVar6 + 0x128)) {
      if ((*(float *)((longlong)param_1 + 0x4c) <= *(float *)(param_1 + 10) &&
           *(float *)(param_1 + 10) != *(float *)((longlong)param_1 + 0x4c)) || (param_2 <= 0.0)) {
        if ((*(uint *)(lVar7 + 0x28) >> 0xc & 1) != 0) {
          local_d8 = *param_3;
          local_d0 = *(float *)(param_3 + 1);
          goto LAB_142cbb0b5;
        }
      }
      else {
        *(uint *)((longlong)param_1 + 0x15c) = uVar1 & 0xffffff7f | 0x80;
        FUN_1424be5e0(param_1 + 0xd,&local_b8);
        lVar6 = *(longlong *)(lVar6 + 0x168);
        if (lVar6 == 0) {
          local_c8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          fStack_c0 = DAT_1468b5d98;
        }
        else {
          local_c8 = *(undefined8 *)(lVar6 + 0x220);
          fStack_c0 = *(float *)(lVar6 + 0x228);
        }
        fVar10 = (float)local_b8 - (float)local_c8;
        lVar7 = param_1[1];
        fVar9 = local_b8._4_4_ - (float)((ulonglong)local_c8 >> 0x20);
        local_b0 = local_b0 - fStack_c0;
        fVar14 = 1.0 / param_2;
        fVar16 = fVar14 * fVar10;
        local_d0 = fVar14 * local_b0;
        fVar14 = fVar14 * fVar9;
        *(ulonglong *)((longlong)param_1 + 0x5c) = CONCAT44(fVar9,fVar10);
        local_d8 = CONCAT44(fVar14,fVar16);
        *(float *)((longlong)param_1 + 100) = local_b0;
      }
    }
  }
  fVar9 = *(float *)(param_1 + 10);
  fVar10 = fVar9 - param_2;
  if (fVar10 <= 0.0) {
    fVar10 = 0.0;
  }
  if (((*(uint *)(lVar7 + 0x28) & 0x200) != 0) && (0.0 < *(float *)((longlong)param_1 + 0x4c))) {
    fVar8 = 1.0 / *(float *)((longlong)param_1 + 0x4c);
    fVar9 = fVar8 * fVar9;
    fVar10 = fVar8 * fVar10;
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  local_res8 = param_1;
  if (fVar9 == 0.0) {
    plVar3 = (longlong *)FUN_142cb4240(&local_res8,&local_b8,fVar9);
    local_b8 = *plVar3;
    fVar9 = *(float *)(plVar3 + 1);
    fVar8 = (float)((ulonglong)local_b8 >> 0x20);
    fVar10 = (float)local_b8;
    local_b0 = fVar9;
  }
  else {
    if (fVar9 == fVar10) goto LAB_142cbb2d4;
    pfVar4 = (float *)FUN_142cb4240(&local_res8,&local_b8);
    pfVar5 = (float *)FUN_142cb4240(&local_res8,&local_c8,fVar9);
    fVar8 = pfVar5[1] - pfVar4[1];
    fVar10 = *pfVar5 - *pfVar4;
    fVar9 = pfVar5[2] - pfVar4[2];
  }
  if (((fVar10 != DAT_1468b5d90) || (fVar8 != DAT_1468b5d94)) || (fVar9 != DAT_1468b5d98)) {
    lVar6 = (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x788))
                      (*(longlong **)(*param_1 + 0xfd8),&local_c8);
    local_b8 = (ulonglong)*(uint *)(lVar6 + 4) << 0x20;
    local_b0 = 0.0;
    FRotator::Quaternion(&local_b8,&local_c8);
    fVar10 = fVar10 * (float)(_DAT_146b30e90 & _DAT_146b30ea0);
    fVar8 = fVar8 * (float)(uRam0000000146b30e94 & uRam0000000146b30ea4);
    fVar9 = fVar9 * (float)(uRam0000000146b30e98 & uRam0000000146b30ea8);
    fVar11 = fVar9 * local_c8._4_4_ - fVar8 * fStack_c0;
    fVar12 = fVar10 * fStack_c0 - fVar9 * (float)local_c8;
    fVar13 = fVar8 * (float)local_c8 - fVar10 * local_c8._4_4_;
    fVar11 = fVar11 + fVar11;
    fVar12 = fVar12 + fVar12;
    fVar13 = fVar13 + fVar13;
    param_2 = 1.0 / param_2;
    fVar16 = fVar16 + ((fVar13 * local_c8._4_4_ - fVar12 * fStack_c0) + fStack_bc * fVar11 + fVar10)
                      * param_2;
    fVar14 = fVar14 + ((fVar11 * fStack_c0 - fVar13 * (float)local_c8) + fStack_bc * fVar12 + fVar8)
                      * param_2;
    local_d0 = local_d0 +
               ((fVar12 * (float)local_c8 - fVar11 * local_c8._4_4_) + fStack_bc * fVar13 + fVar9) *
               param_2;
    local_d8 = CONCAT44(fVar14,fVar16);
  }
LAB_142cbb2d4:
  if (*(int *)(param_1[1] + 0x290) != 0) {
    plVar3 = (longlong *)FRuntimeFloatCurve::GetRichCurve(param_1[1] + 0x298);
    iVar2 = (**(code **)(*plVar3 + 8))(plVar3);
    if (0 < iVar2) {
      if (((*(uint *)(param_1[1] + 0x28) & 0x400) == 0) ||
         (*(float *)((longlong)param_1 + 0x4c) <= 0.0)) {
        fVar15 = *(float *)(param_1 + 10);
      }
      else {
        fVar15 = *(float *)(param_1 + 10) / *(float *)((longlong)param_1 + 0x4c);
        if (1.0 <= fVar15) {
          fVar15 = 1.0;
        }
      }
      fVar15 = (float)FRichCurve::Eval(plVar3,fVar15,0x3f800000);
    }
    local_d0 = local_d0 + fVar15 * *(float *)((longlong)param_1 + 0x11c);
    local_d8 = CONCAT44(fVar14 + fVar15 * *(float *)(param_1 + 0x23),
                        fVar16 + fVar15 * *(float *)((longlong)param_1 + 0x114));
  }
  if ((*(char *)(*param_1 + 0x248) == '\x03') && (*(char *)(param_1[1] + 0x68) == '\0')) {
    local_d0 = local_d0 + *(float *)(param_3 + 1);
  }
  *param_3 = local_d8;
  *(float *)(param_3 + 1) = local_d0;
  param_1[0x24] = local_d8;
  *(float *)(param_1 + 0x25) = local_d0;
  return;
}



// FUNCTION 142cbb460 FUN_142cbb460 body=92 status=ok
// SIG undefined FUN_142cbb460(void)

void FUN_142cbb460(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  bool bVar3;
  longlong lVar4;
  
  lVar2 = *param_2;
  uVar1 = *param_4;
  if (lVar2 != 0) {
    lVar4 = AHeoCon::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      *(undefined4 *)(lVar2 + 0xb10) = uVar1;
    }
  }
  return;
}



// FUNCTION 142cbb560 FUN_142cbb560 body=67 status=ok
// SIG undefined FUN_142cbb560(void)

void FUN_142cbb560(longlong *param_1)

{
  longlong lVar1;
  
  if (((*(byte *)((longlong *)*param_1 + 3) & 2) != 0) && (*(longlong *)*param_1 != 0)) {
    lVar1 = FUN_14233f840();
    if (lVar1 != 0) {
      FUN_142e3d1c0(*(undefined8 *)*param_1,(undefined8 *)*param_1 + 4,*(undefined4 *)(lVar1 + 0xc))
      ;
      return;
    }
  }
  return;
}



// FUNCTION 142cbb640 FUN_142cbb640 body=96 status=ok
// SIG undefined FUN_142cbb640(void)

void FUN_142cbb640(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)param_1[1];
  if (*plVar1 != 0) {
    lVar3 = FUN_142e07420();
    lVar5 = *plVar1;
    for (lVar2 = lVar5; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
      if (lVar2 == lVar3) goto LAB_142cbb678;
    }
  }
  lVar5 = 0;
LAB_142cbb678:
  uVar4 = FUN_14247f5b0(DAT_146b17150 + 0xcf8,lVar5);
  *(undefined8 *)(*param_1 + 8) = uVar4;
  return;
}



// FUNCTION 142cbb6b0 FUN_142cbb6b0 body=43 status=ok
// SIG undefined FUN_142cbb6b0(void)

undefined8 FUN_142cbb6b0(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x988))();
  if (cVar1 != '\0') {
    return 1;
  }
  uVar2 = FUN_1423072f0(param_1);
  return uVar2;
}



// FUNCTION 142cbb730 FUN_142cbb730 body=420 status=ok
// SIG undefined FUN_142cbb730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142cbb730(longlong param_1,char *param_2)

{
  ulonglong uVar1;
  undefined1 (*pauVar2) [12];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint local_38;
  float fStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined1 local_28 [4];
  float local_24;
  
  uVar1 = 0x104;
  if (*param_2 != '\0') {
    uVar1 = 0x1c0;
  }
  if ((param_2[uVar1] & 1U) == 0) {
    return uVar1 & 0xffffffffffffff00;
  }
  pauVar2 = (undefined1 (*) [12])FVector::Rotation(param_2 + 0x34,&local_38);
  fVar4 = DAT_146b30e60._12_4_;
  auVar3._12_4_ = 0;
  auVar3._0_12_ = *pauVar2;
  auVar3 = divps(auVar3,_DAT_146b30e60);
  fVar5 = (float)DAT_146b30e60;
  fVar6 = DAT_146b30e60._4_4_;
  fVar7 = DAT_146b30e60._8_4_;
  fVar8 = (float)*(undefined8 *)*pauVar2 - (float)(int)auVar3._0_4_ * fVar5;
  fVar9 = (float)((ulonglong)*(undefined8 *)*pauVar2 >> 0x20) - (float)(int)auVar3._4_4_ * fVar6;
  fVar10 = *(float *)(*pauVar2 + 8) - (float)(int)auVar3._8_4_ * fVar7;
  fVar11 = 0.0 - (float)(int)auVar3._12_4_ * fVar4;
  fVar8 = (float)(((uint)(fVar5 + fVar8) ^ (uint)fVar8) & -(uint)(0.0 <= fVar8) ^
                 (uint)(fVar5 + fVar8));
  fStack_34 = (float)(((uint)(fVar6 + fVar9) ^ (uint)fVar9) & -(uint)(0.0 <= fVar9) ^
                     (uint)(fVar6 + fVar9));
  fVar9 = (float)(((uint)(fVar7 + fVar10) ^ (uint)fVar10) & -(uint)(0.0 <= fVar10) ^
                 (uint)(fVar7 + fVar10));
  fVar10 = (float)(((uint)(fVar4 + fVar11) ^ (uint)fVar11) & -(uint)(0.0 <= fVar11) ^
                  (uint)(fVar4 + fVar11));
  local_38 = ((uint)(fVar8 - fVar5) ^ (uint)fVar8) & -(uint)(_DAT_146b30e50 < fVar8) ^ (uint)fVar8;
  fStack_34 = (float)(((uint)(fStack_34 - fVar6) ^ (uint)fStack_34) &
                      -(uint)(fRam0000000146b30e54 < fStack_34) ^ (uint)fStack_34);
  uStack_30 = ((uint)(fVar9 - fVar7) ^ (uint)fVar9) & -(uint)(fRam0000000146b30e58 < fVar9) ^
              (uint)fVar9;
  uStack_2c = ((uint)(fVar10 - fVar4) ^ (uint)fVar10) & -(uint)(fRam0000000146b30e5c < fVar10) ^
              (uint)fVar10;
  FVector::Rotation(param_1 + 0xc,local_28);
  local_24 = local_24 + 180.0;
  fVar4 = (float)(int)(local_24 * 0.0027777778) * 360.0;
  if (ABS(local_24) < ABS(fVar4)) {
    fVar4 = local_24;
  }
  local_24 = local_24 - fVar4;
  if (local_24 < 0.0) {
    local_24 = local_24 + 360.0;
  }
  if (180.0 < local_24) {
    local_24 = local_24 - 360.0;
  }
  fStack_34 = fStack_34 - local_24;
  fVar4 = (float)(int)(fStack_34 * 0.0027777778) * 360.0;
  if (ABS(fStack_34) < ABS(fVar4)) {
    fVar4 = fStack_34;
  }
  fStack_34 = fStack_34 - fVar4;
  if (fStack_34 < 0.0) {
    fStack_34 = fStack_34 + 360.0;
  }
  if (180.0 < fStack_34) {
    fStack_34 = fStack_34 - 360.0;
  }
  return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 0x50) >> 8),
                  ABS(fStack_34) < *(float *)(*(longlong *)(param_1 + 0x50) + 0x48));
}



// FUNCTION 142cbb8e0 FUN_142cbb8e0 body=532 status=ok
// SIG undefined FUN_142cbb8e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142cbb8e0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char *pcVar4;
  char *pcVar5;
  float fVar6;
  undefined8 uStack_44;
  float fStack_3c;
  
  lVar1 = *param_1;
  if (((((((lVar1 != 0) && (*(longlong **)(lVar1 + 0xfd8) != (longlong *)0x0)) &&
         (cVar3 = (**(code **)(**(longlong **)(lVar1 + 0xfd8) + 0x9d0))(), cVar3 != '\0')) &&
        (*(char *)(lVar1 + 0x10b8) == '\0')) &&
       (((*(longlong *)(lVar1 + 0x1778) == 0 || ((*(byte *)(lVar1 + 0x18cc) & 2) != 0)) ||
        (*(longlong *)(lVar1 + 0x178) == 0)))) &&
      ((*(char *)(lVar1 + 0x248) != '\x06' || (*(char *)(lVar1 + 0x249) != '\x02')))) &&
     ((*(char *)(lVar1 + 0x248) != '\0' &&
      (((cVar3 = FUN_1407c3030(lVar1 + 0xcd8), cVar3 == '\0' &&
        (cVar3 = FUN_1407c3030(lVar1 + 0x8b0), cVar3 == '\0')) &&
       ((*(byte *)(param_1 + 3) & 1) == 0)))))) {
    if ((*(byte *)(param_1 + 3) & 2) == 0) {
      uStack_44 = _DAT_1468b5d90;
      fStack_3c = DAT_1468b5d98;
    }
    else {
      uStack_44 = *(undefined8 *)((longlong)param_1 + 0x24);
      fStack_3c = *(float *)((longlong)param_1 + 0x2c);
    }
    if (((((float)uStack_44 != 0.0) || (uStack_44._4_4_ != 0.0)) || (fStack_3c != 0.0)) &&
       ((lVar1 = param_1[2], lVar1 != 0 &&
        (cVar3 = FUN_142cf3ad0(lVar1 + 0x188,param_1[6]), cVar3 != '\0')))) {
      cVar3 = FUN_142cf3980(*param_1);
      if ((cVar3 == '\0') || ((char)param_1[0x8d] != '\0')) {
        return 1;
      }
      pcVar4 = *(char **)(lVar1 + 0x1e0);
      lVar2 = *param_1;
      pcVar5 = pcVar4 + *(int *)(lVar1 + 0x1e8);
      if (pcVar4 != pcVar5) {
        while (*pcVar4 != *(char *)(lVar2 + 0x248)) {
          pcVar4 = pcVar4 + 1;
          if (pcVar4 == pcVar5) {
            return 0;
          }
        }
        fVar6 = *(float *)(lVar2 + 0x194);
        if ((-*(float *)(lVar1 + 500) <= fVar6) &&
           (fVar6 < *(float *)(lVar1 + 0x1f0) || fVar6 == *(float *)(lVar1 + 0x1f0))) {
          lVar2 = *(longlong *)(lVar2 + 0x178);
          if (lVar2 == 0) {
            return 1;
          }
          fVar6 = (*(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4)) +
                  *(float *)(lVar1 + 0x1f8);
          if (fVar6 < *(float *)((longlong)param_1 + 0x2ac) ||
              fVar6 == *(float *)((longlong)param_1 + 0x2ac)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 142cbbb00 FUN_142cbbb00 body=359 status=ok
// SIG undefined FUN_142cbbb00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142cbbb00(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong in_RAX;
  longlong lVar3;
  float fVar4;
  float local_60;
  undefined1 local_5c [12];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((param_1[2] != 0) && (*param_1 != 0)) {
    in_RAX = FUN_142cbb8e0();
    if ((char)in_RAX != '\0') {
      lVar1 = param_1[2];
      if ((*(byte *)(param_1 + 3) & 2) == 0) {
        uStack_4c = (undefined4)_DAT_1468b5d90;
        uStack_48 = (undefined4)((ulonglong)_DAT_1468b5d90 >> 0x20);
        local_50 = 0xffffffff;
        uStack_44 = DAT_1468b5d98;
        local_40 = 0;
        uStack_38 = 0;
      }
      else {
        local_40 = param_1[6];
        uStack_38 = param_1[7];
        local_50 = (undefined4)param_1[4];
        uStack_4c = (undefined4)((ulonglong)param_1[4] >> 0x20);
        uStack_48 = (undefined4)param_1[5];
        uStack_44 = (undefined4)((ulonglong)param_1[5] >> 0x20);
      }
      local_30 = local_50;
      uStack_2c = uStack_4c;
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      local_20 = (undefined4)local_40;
      uStack_1c = local_40._4_4_;
      uStack_18 = (undefined4)uStack_38;
      uStack_14 = uStack_38._4_4_;
      lVar3 = FUN_142cc5660(&local_30,local_5c);
      lVar2 = *(longlong *)(*param_1 + 0x178);
      if (lVar2 == 0) {
        local_60 = 3.4028235e+38;
      }
      else {
        local_60 = *(float *)(lVar2 + 0x228);
      }
      in_RAX = (ulonglong)(uint)local_60;
      if (*(float *)(*param_1 + 0x2654) <= 0.707) {
        fVar4 = *(float *)(lVar1 + 0x208);
      }
      else {
        fVar4 = *(float *)(lVar1 + 0x20c);
      }
      if ((fVar4 <= *(float *)(lVar3 + 8) - local_60) ||
         (fVar4 <= *(float *)(lVar3 + 8) - *(float *)((longlong)param_1 + 0x45c))) {
        return CONCAT71((uint7)(uint3)((uint)local_60 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142cbbc90 FUN_142cbbc90 body=105 status=ok
// SIG undefined FUN_142cbbc90(void)

undefined8 FUN_142cbbc90(longlong *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x988))();
  if ((((cVar2 == '\0') && ((*(byte *)((longlong)param_1 + 0x56c) & 1) != 0)) &&
      (param_1[0x120] != 0)) &&
     (((*(byte *)(param_1[0x120] + 0x1c0) & 1) != 0 &&
      (plVar1 = (longlong *)param_1[0x2d], plVar1 != (longlong *)0x0)))) {
    cVar2 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
    if (cVar2 == '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cbbd00 FUN_142cbbd00 body=129 status=ok
// SIG undefined FUN_142cbbd00(void)

void FUN_142cbbd00(longlong param_1)

{
  ulonglong *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(longlong *)(param_1 + 0x908) != 0) {
    puVar1 = (ulonglong *)FUN_142dd0650();
    uVar4 = 0;
    plVar2 = (longlong *)*puVar1;
    uVar3 = (longlong)(int)puVar1[1] & 0x1fffffffffffffff;
    if (plVar2 + (int)puVar1[1] < plVar2) {
      uVar3 = uVar4;
    }
    if (uVar3 != 0) {
      do {
        if (*plVar2 != 0) {
          FUN_142dcc290(*plVar2,param_1);
        }
        plVar2 = plVar2 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
  }
  return;
}



// FUNCTION 142cbbd90 FUN_142cbbd90 body=91 status=ok
// SIG undefined FUN_142cbbd90(void)

void FUN_142cbbd90(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x780,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  plVar2 = (longlong *)FUN_142dcdcd0(lVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cbbdde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x700))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 142cbbdf0 FUN_142cbbdf0 body=91 status=ok
// SIG undefined FUN_142cbbdf0(void)

void FUN_142cbbdf0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 local_res8 [4];
  
  local_res8[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x790,local_res8);
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
  }
  plVar2 = (longlong *)FUN_142dcdcd0(lVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142cbbe3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x700))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 142cbbe50 FUN_142cbbe50 body=1473 status=ok
// SIG undefined FUN_142cbbe50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142cbbe50(float *param_1,longlong param_2,char param_3)

{
  ulonglong *puVar1;
  char cVar2;
  undefined1 uVar3;
  ulonglong *puVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auStack_2a8 [32];
  ulonglong *local_288;
  ulonglong *local_280;
  undefined8 *local_278;
  undefined8 *local_270;
  undefined *local_268;
  undefined8 local_258;
  float local_250;
  undefined4 local_24c;
  ulonglong local_248;
  float local_240;
  undefined4 local_238;
  ulonglong local_230;
  float local_228;
  undefined4 local_220 [6];
  byte local_208 [12];
  undefined4 local_1fc;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  ulonglong local_1e8;
  undefined4 local_1e0;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined1 local_194 [28];
  byte local_178 [12];
  float local_16c;
  undefined1 local_104 [28];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined1 local_d4;
  undefined2 local_d3;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  longlong local_a0;
  undefined8 local_98;
  longlong local_80;
  undefined8 local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_2a8;
  local_230 = *(ulonglong *)(param_1 + 6);
  local_228 = param_1[8];
  lVar7 = *(longlong *)(param_1 + 0x16);
  if (param_3 == '\0') {
    lVar8 = 0x90;
    local_250 = (float)*(undefined4 *)(param_2 + 0xc);
    puVar4 = &local_258;
    local_258 = *(ulonglong *)(param_2 + 4);
    goto LAB_142cbbffd;
  }
  fVar9 = *(float *)(param_2 + 0x34);
  fVar13 = *(float *)(param_2 + 0x38);
  fVar10 = fVar9 * fVar9 + fVar13 * fVar13;
  if (fVar10 == 1.0) {
    if (*(float *)(param_2 + 0x3c) == 0.0) {
      local_248._0_4_ = (float)*(undefined8 *)(param_2 + 0x34);
      fVar11 = (float)((ulonglong)*(undefined8 *)(param_2 + 0x34) >> 0x20);
      uVar12 = *(uint *)(param_2 + 0x3c);
    }
    else {
LAB_142cbbfa7:
      fVar11 = fVar13;
      uVar12 = 0;
      local_248._0_4_ = fVar9;
    }
  }
  else {
    fVar11 = DAT_1468b5d94;
    uVar12 = DAT_1468b5d98;
    local_248._0_4_ = DAT_1468b5d90;
    if (1e-08 <= fVar10) {
      auVar14 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      local_238 = auVar14._0_4_;
      local_238 = local_238 + local_238 * (0.5 - fVar10 * 0.5 * local_238 * local_238);
      local_238 = local_238 + local_238 * (0.5 - fVar10 * 0.5 * local_238 * local_238);
      fVar9 = local_238 * fVar9;
      fVar13 = local_238 * fVar13;
      goto LAB_142cbbfa7;
    }
  }
  puVar4 = &local_248;
  local_248 = CONCAT44(fVar11,(float)local_248) ^ 0x8000000080000000;
  local_240 = (float)(uVar12 ^ 0x80000000);
  lVar8 = 0xcc;
LAB_142cbbffd:
  local_258 = *puVar4;
  puVar1 = (ulonglong *)(param_2 + lVar8);
  fVar9 = *(float *)(*(longlong *)(param_1 + 0x14) + 0x50);
  local_250 = *(float *)(puVar4 + 1) * fVar9 + *(float *)(param_2 + 0x30);
  *puVar1 = CONCAT44((float)(local_258 >> 0x20) * fVar9 + *(float *)(param_2 + 0x2c),
                     (float)local_258 * fVar9 + *(float *)(param_2 + 0x28));
  *(float *)(puVar1 + 1) = local_250;
  local_240 = param_1[1] + param_1[1] + *(float *)(param_2 + 0x60);
  *(float *)(puVar1 + 1) = local_240;
  local_248 = *puVar1;
  fVar9 = *param_1;
  local_240 = local_240 - param_1[1] * 3.0;
  _guard_xfg_dispatch_icall_nop(local_208,0,0x90);
  local_278 = &local_258;
  local_270 = (undefined8 *)((ulonglong)local_270 & 0xffffffffffffff00);
  local_280 = &local_248;
  local_1fc = 0x3f800000;
  local_258 = CONCAT44(fVar9 * 0.5,1);
  local_24c = 0x3f800000;
  local_288 = puVar1;
  local_250 = fVar9 * 0.5;
  cVar2 = FUN_142cc7880(local_208,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                        *(undefined1 *)(param_1 + 0x10));
  if (cVar2 == '\0') {
    *(ulonglong *)((longlong)puVar1 + 0xc) = local_248;
    *(float *)((longlong)puVar1 + 0x14) = local_240;
    if ((local_208[0] & 2) != 0) {
      uVar3 = 7;
      if (param_3 != '\0') {
        uVar3 = 0x10;
      }
      *(undefined1 *)(param_2 + 0x144) = uVar3;
      return 0;
    }
    uVar3 = 6;
    if (param_3 != '\0') {
      uVar3 = 0xf;
    }
    *(undefined1 *)(param_2 + 0x144) = uVar3;
    return 0;
  }
  *(undefined8 *)((longlong)puVar1 + 0x24) = local_1d0;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = local_1c8;
  local_250 = local_1ec + param_1[1];
  *(ulonglong *)((longlong)puVar1 + 0xc) = CONCAT44(local_1f0,local_1f4);
  *(float *)((longlong)puVar1 + 0x14) = local_250;
  puVar1[3] = local_1e8;
  *(undefined4 *)(puVar1 + 4) = local_1e0;
  uVar5 = FWeakObjectPtr::Get(local_194);
  FWeakObjectPtr::operator=(puVar1 + 6,uVar5);
  uVar5 = FWeakObjectPtr::Get(puVar1 + 6);
  uVar6 = FUN_142cf3ad0(lVar7 + 0x188,uVar5);
  if ((char)uVar6 != '\0') {
    FUN_142cce550(param_1,&local_238,puVar1,param_3);
    if (local_238._1_1_ != '\0') {
      *(undefined1 *)(param_2 + 0x144) = (undefined1)local_238;
      return 0;
    }
    local_250 = local_228 + param_1[1];
    local_258 = local_230;
    local_228 = param_1[1] + *(float *)((longlong)puVar1 + 0x14);
    local_230 = *(ulonglong *)((longlong)puVar1 + 0xc);
    _guard_xfg_dispatch_icall_nop(local_178,0,0x90);
    uVar3 = *(undefined1 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x12);
    local_220[0] = 0;
    local_e0 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_d0 = 0;
    local_cc = 0;
    local_d3 = 0;
    local_c8 = 0;
    local_d4 = 0;
    local_e8 = DAT_146b31420;
    local_16c = 1.0;
    local_d8 = 0x10000;
    local_c4 = 0x101;
    FCollisionQueryParams::AddIgnoredActor(&local_e8,*(undefined8 *)(param_1 + 0x18));
    local_268 = &DAT_146aefe68;
    local_270 = &local_e8;
    local_278 = (undefined8 *)local_220;
    local_280 = (ulonglong *)CONCAT44(local_280._4_4_,2);
    local_288 = (ulonglong *)&DAT_1464aa810;
    local_cc = uVar3;
    cVar2 = UWorld::SweepSingleByChannel(uVar5,local_178,&local_258,&local_230);
    if ((((cVar2 != '\0') && ((local_178[0] & 1) != 0)) && (0.0 < local_16c)) && (local_16c <= 1.0))
    {
      FWeakObjectPtr::Get(local_104);
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
    if (local_a0 != 0) {
      FMemory::Free();
    }
    lVar7 = FWeakObjectPtr::Get(local_104);
    if (lVar7 == 0) {
      *(byte *)(puVar1 + 7) = (byte)puVar1[7] | 1;
      return 1;
    }
    uVar6 = 0xe;
    if (param_3 != '\0') {
      uVar6 = 0x17;
    }
    *(char *)(param_2 + 0x144) = (char)uVar6;
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142cbc420 FUN_142cbc420 body=773 status=ok
// SIG undefined FUN_142cbc420(void)

undefined1 FUN_142cbc420(float *param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 *puVar2;
  float fVar3;
  longlong lVar4;
  char cVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float local_178;
  float fStack_174;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined4 local_158;
  float local_154;
  float local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  undefined1 local_138 [12];
  undefined4 local_12c;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  float local_104;
  undefined1 local_c4 [28];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_70;
  undefined4 local_68;
  
  lVar4 = *(longlong *)(param_1 + 0x16);
  pfVar1 = (float *)(param_2 + 0x1c);
  fVar3 = param_1[8];
  local_168 = *(undefined8 *)(param_1 + 9);
  local_160 = param_1[0xb];
  fVar8 = param_1[1];
  fVar7 = local_160 + *(float *)(lVar4 + 0x18c);
  *(undefined8 *)pfVar1 = *(undefined8 *)(param_1 + 6);
  *(float *)(param_2 + 0x24) = fVar3;
  local_140 = ((fVar3 + fVar8) - fVar7) * 0.5;
  *(float *)(param_2 + 0x24) = local_140 + fVar7;
  fVar8 = (float)*(int *)(lVar4 + 0x188);
  local_148 = 3;
  local_144 = 0x3f800000;
  local_178 = fVar8 * *(float *)(param_2 + 4) + *pfVar1;
  fStack_174 = fVar8 * *(float *)(param_2 + 8) + *(float *)(param_2 + 0x20);
  local_170 = fVar8 * *(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x24);
  _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
  local_12c = 0x3f800000;
  cVar5 = FUN_142cc7880(local_138,*(undefined8 *)(param_1 + 0x12),*(undefined8 *)(param_1 + 0x18),
                        *(undefined1 *)(param_1 + 0x10),pfVar1,&local_178,&local_148,0);
  if (cVar5 == '\0') {
    *(ulonglong *)(param_2 + 0x28) = CONCAT44(fStack_174,local_178);
    *(float *)(param_2 + 0x30) = local_170;
    uVar6 = 0;
    *(undefined1 *)(param_2 + 0x144) = 1;
  }
  else {
    *(undefined8 *)(param_2 + 0x34) = local_10c;
    *(undefined8 *)(param_2 + 0x28) = local_118;
    *(float *)(param_2 + 0x3c) = local_104;
    *(undefined4 *)(param_2 + 0x30) = local_110;
    fVar8 = _guard_xfg_dispatch_icall_nop(*(float *)(lVar4 + 0x194) * 0.017453292);
    if (local_104 < fVar8) {
      FWeakObjectPtr::Get(local_c4);
      cVar5 = FUN_142cf3ad0(lVar4 + 0x188);
      if (cVar5 == '\0') {
        *(undefined1 *)(param_2 + 0x144) = 3;
        *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) & 0xfe;
        uVar6 = 0;
      }
      else {
        puVar2 = (undefined8 *)(param_2 + 0x4c);
        *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) | 1;
        lVar4 = *(longlong *)(param_1 + 0x16);
        *puVar2 = *(undefined8 *)(param_2 + 0x28);
        *(undefined4 *)(param_2 + 0x54) = *(undefined4 *)(param_2 + 0x30);
        local_160 = *(float *)(lVar4 + 400) + param_1[0xb];
        *(float *)(param_2 + 0x54) = local_160;
        local_168 = *puVar2;
        fVar8 = *param_1;
        local_160 = local_160 - param_1[1] * 6.0;
        _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
        local_9c = 0x3f800000;
        local_158 = 1;
        local_14c = 0x3f800000;
        local_154 = fVar8 * 0.1;
        local_150 = fVar8 * 0.1;
        cVar5 = FUN_142cc7880(local_a8,*(undefined8 *)(param_1 + 0x12),
                              *(undefined8 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x10),puVar2
                              ,&local_168,&local_158,0);
        if (cVar5 != '\0') {
          *(undefined8 *)(param_2 + 0x70) = local_70;
          *(undefined4 *)(param_2 + 0x78) = local_68;
          *(undefined8 *)(param_2 + 0x58) = local_94;
          *(undefined4 *)(param_2 + 0x60) = local_8c;
        }
        uVar6 = 1;
      }
    }
    else {
      *(byte *)(param_2 + 0x88) = *(byte *)(param_2 + 0x88) & 0xfe;
      uVar6 = 0;
      *(undefined1 *)(param_2 + 0x144) = 2;
    }
  }
  return uVar6;
}



// FUNCTION 142cbc730 FUN_142cbc730 body=556 status=ok
// SIG undefined FUN_142cbc730(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_142cbc730(undefined4 *param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  char cVar5;
  ulonglong uVar6;
  undefined1 auStack_1b8 [32];
  undefined4 *local_198;
  undefined4 local_190;
  undefined4 *local_188;
  undefined8 *local_180;
  undefined *local_178;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  undefined4 local_148;
  undefined4 local_144;
  float local_140;
  byte local_138 [12];
  float local_12c;
  undefined1 local_c4 [28];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined2 local_93;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  longlong local_60;
  undefined8 local_58;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  uVar6 = *(ulonglong *)(param_1 + 0x14);
  if (*(float *)(param_2 + 0x60) - (float)param_1[0xb] <= *(float *)(uVar6 + 0x54)) {
    local_158 = (float)param_1[9];
    local_154 = (float)param_1[10];
    fVar1 = (float)param_1[1];
    local_150 = *(float *)(uVar6 + 0x54) + fVar1 + (float)param_1[0xb];
    fVar2 = *(float *)(uVar6 + 0x60);
    local_168 = fVar2 * *(float *)(param_2 + 4) * 0.5 + local_158;
    local_164 = fVar2 * *(float *)(param_2 + 8) * 0.5 + local_154;
    local_160 = fVar2 * *(float *)(param_2 + 0xc) * 0.5 + local_150;
    _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
    local_144 = *param_1;
    uVar3 = *(undefined1 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x12);
    local_a0 = 0;
    local_60 = 0;
    local_58 = 0;
    local_40 = 0;
    local_38 = 0;
    local_90 = 0;
    local_8c = 0;
    local_93 = 0;
    local_88 = 0;
    local_94 = 0;
    local_a8 = DAT_146b31420;
    local_12c = 1.0;
    local_148 = 3;
    local_98 = 0x10000;
    local_84 = 0x101;
    local_140 = fVar1;
    FCollisionQueryParams::AddIgnoredActor(&local_a8,*(undefined8 *)(param_1 + 0x18));
    local_178 = &DAT_146aefe68;
    local_180 = &local_a8;
    local_188 = &local_148;
    local_190 = 2;
    local_198 = &DAT_1464aa810;
    local_8c = uVar3;
    cVar5 = UWorld::SweepSingleByChannel(uVar4,local_138,&local_158,&local_168);
    if ((((cVar5 != '\0') && ((local_138[0] & 1) != 0)) && (0.0 < local_12c)) && (local_12c <= 1.0))
    {
      FWeakObjectPtr::Get(local_c4);
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_60 != 0) {
      FMemory::Free();
    }
    uVar6 = FWeakObjectPtr::Get(local_c4);
    if (uVar6 == 0) {
      return 1;
    }
  }
  return uVar6 & 0xffffffffffffff00;
}



// FUNCTION 142cbc960 FUN_142cbc960 body=130 status=ok
// SIG undefined FUN_142cbc960(void)

void FUN_142cbc960(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((longlong *)param_1[0x120] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x120] + 0xb50))();
  }
  if (((((byte)*(undefined4 *)((longlong)param_1 + 0x56c) & 5) == 5) && (param_1[0x99] != 0)) &&
     ((*(uint *)(param_1[0x99] + 0x4b4) & 0x800) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x988))(param_1);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)param_1[0x99] + 0x770))((longlong *)param_1[0x99],0);
    }
  }
  FUN_142307a50(param_1,param_2);
  return;
}



// FUNCTION 142cbc9f0 FUN_142cbc9f0 body=351 status=ok
// SIG undefined FUN_142cbc9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cbc9f0(longlong param_1,longlong param_2,char *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_d0;
  undefined *local_c8;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined2 local_94;
  longlong local_70;
  undefined8 local_68;
  longlong local_50;
  undefined8 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (param_3[1] != '\0') {
    uVar1 = *(undefined1 *)(param_1 + 0x40);
    local_b0 = 0;
    local_70 = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_a0 = 0;
    local_a4 = 0;
    local_9c = 0;
    local_a2 = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    local_b8 = DAT_146b31420;
    local_98 = 0;
    local_a8 = 0x10000;
    local_94 = 0x101;
    FCollisionQueryParams::AddIgnoredActor(&local_b8,*(undefined8 *)(param_1 + 0x60));
    local_c8 = &DAT_146aefe68;
    local_d8 = param_1 + 0x30;
    local_d0 = &local_b8;
    local_9c = uVar1;
    cVar3 = UWorld::OverlapAnyTestByChannel(uVar4,param_2 + 0xc,&DAT_1464aa810,2);
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_70 != 0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      return 1;
    }
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  uVar4 = FWeakObjectPtr::Get(param_2 + 0x30);
  cVar3 = FUN_142cf3ad0(lVar2 + 0x188,uVar4);
  if (cVar3 == '\0') {
    uVar4 = 2;
  }
  else if ((*param_3 == '\0') ||
          (*(float *)(param_1 + 8) < *(float *)(param_2 + 0x2c) ||
           *(float *)(param_1 + 8) == *(float *)(param_2 + 0x2c))) {
    uVar4 = 0;
  }
  else {
    uVar4 = 3;
  }
  return uVar4;
}



// FUNCTION 142cbcb70 FUN_142cbcb70 body=38 status=ok
// SIG undefined FUN_142cbcb70(void)

void FUN_142cbcb70(undefined8 param_1,undefined8 param_2,void *param_3)

{
  _guard_xfg_dispatch_icall_nop(param_3,0,0x390);
  FUN_142dc1ad0(param_3);
  return;
}



// FUNCTION 142cbcba0 FUN_142cbcba0 body=50 status=ok
// SIG undefined FUN_142cbcba0(void)

void FUN_142cbcba0(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  if (*(int *)(param_1 + 0xd54) < 8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd48,8);
    return;
  }
  return;
}



// FUNCTION 142cbcbe0 FUN_142cbcbe0 body=131 status=ok
// SIG undefined FUN_142cbcbe0(void)

void FUN_142cbcbe0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = FUN_142340f30();
  if (iVar2 != 3) {
    iVar2 = (int)param_1[0xfe] + -1;
    lVar3 = (longlong)iVar2;
    if (-1 < iVar2) {
      do {
        plVar1 = *(longlong **)(param_1[0xfd] + lVar3 * 8);
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x418))(plVar1,&DAT_146532190);
          plVar1 = *(longlong **)(param_1[0xfd] + lVar3 * 8);
          (**(code **)(*plVar1 + 0x3b0))(plVar1,0);
        }
        lVar3 = lVar3 + -1;
      } while (-1 < lVar3);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
  }
  return;
}



// FUNCTION 142cbcc70 FUN_142cbcc70 body=17 status=ok
// SIG undefined FUN_142cbcc70(void)

void FUN_142cbcc70(longlong *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xbdc) = 0;
                    /* WARNING: Could not recover jumptable at 0x000142cbcc7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x768))();
  return;
}



// FUNCTION 142cbcc90 FUN_142cbcc90 body=68 status=ok
// SIG undefined FUN_142cbcc90(void)

undefined1 FUN_142cbcc90(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (param_2 != 0) {
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      FUN_142bb5c50(param_2,*(undefined1 *)(param_1 + 9));
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cbcce0 FUN_142cbcce0 body=308 status=ok
// SIG undefined FUN_142cbcce0(void)

void FUN_142cbcce0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((int)param_1[7] != 0) {
    local_res10 = param_2;
    local_res18[0] = param_3;
    FUN_1423e4ec0(&local_118,param_1,0);
    local_30 = local_30 | 0x20;
    (**(code **)(local_118 + 0x30))(&local_118,&local_res10);
    if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
      if ((local_ef & 0x10) != 0) {
        FArchive::ByteSwap(&local_118,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(undefined4 *)*local_110;
      *local_110 = *local_110 + 4;
    }
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,&DAT_146b30e40,1);
    }
    else {
      DAT_146b30e40 = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 142cbce20 FUN_142cbce20 body=222 status=ok
// SIG undefined FUN_142cbce20(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbce20(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined1 param_4)

{
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  if (*(longlong *)(param_1 + 0x900) != 0) {
    local_68 = 0;
    local_60 = 0;
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
    local_34 = 0x41200000;
    local_30 = 0xbf800000;
    local_2c = 0;
    local_20 = 0x40000000;
    local_38 = 0;
    local_1c = 2;
    local_40 = param_2 != &local_4c;
    if ((bool)local_40) {
      local_4c = *param_2;
      local_44 = *(undefined4 *)(param_2 + 1);
    }
    local_28 = 1;
    local_3c = param_3;
    local_24 = param_4;
    FUN_142d00b40(*(longlong *)(param_1 + 0x900),&local_68);
  }
  return;
}



// FUNCTION 142cbcf00 FUN_142cbcf00 body=308 status=ok
// SIG undefined FUN_142cbcf00(void)

void FUN_142cbcf00(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined4 local_res18 [2];
  longlong local_118;
  longlong *local_110;
  byte local_ef;
  longlong local_88;
  byte local_30;
  longlong local_28;
  longlong local_18;
  
  if ((int)param_1[7] != 0) {
    local_res10 = param_2;
    local_res18[0] = param_3;
    FUN_1423e4ec0(&local_118,param_1,0);
    local_30 = local_30 | 0x20;
    (**(code **)(local_118 + 0x30))(&local_118,&local_res10);
    if ((undefined4 *)local_110[1] < (undefined4 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,local_res18,4);
      if ((local_ef & 0x10) != 0) {
        FArchive::ByteSwap(&local_118,local_res18,4);
      }
    }
    else {
      local_res18[0] = *(undefined4 *)*local_110;
      *local_110 = *local_110 + 4;
    }
    if ((undefined1 *)local_110[1] < (undefined1 *)*local_110 + 1) {
      (**(code **)(local_118 + 0x50))(&local_118,&DAT_1466ad050,1);
    }
    else {
      DAT_1466ad050 = *(undefined1 *)*local_110;
      *local_110 = *local_110 + 1;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,local_res8,&local_118,0);
    if (local_18 != 0) {
      FMemory::Free();
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
    if (local_88 != 0) {
      FMemory::Free();
    }
    FArchive::~FArchive(&local_118);
  }
  return;
}



// FUNCTION 142cbd060 FUN_142cbd060 body=37 status=ok
// SIG undefined FUN_142cbd060(void)

bool FUN_142cbd060(undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4,
                  void *param_5)

{
  int iVar1;
  
  iVar1 = _guard_xfg_dispatch_icall_nop(param_3,param_5,0x390);
  return iVar1 != 0;
}



// FUNCTION 142cbd090 FUN_142cbd090 body=73 status=ok
// SIG undefined FUN_142cbd090(void)

uint FUN_142cbd090(float *param_1)

{
  return ((int)ROUND(param_1[1] * 182.04445 + param_1[1] * 182.04445 + 0.5) >> 1) << 0x10 |
         (int)ROUND(*param_1 * 182.04445 + *param_1 * 182.04445 + 0.5) >> 1 & 0xffffU;
}



// FUNCTION 142cbd0e0 FUN_142cbd0e0 body=200 status=ok
// SIG undefined FUN_142cbd0e0(void)

void FUN_142cbd0e0(longlong param_1,char *param_2,longlong param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  float local_28;
  float local_24;
  float local_20;
  undefined1 local_18 [16];
  
  if ((*(byte *)((longlong)*(int *)(param_1 + 0x20) * 0x110 + 0x10c +
                *(longlong *)(*(longlong *)(param_1 + 8) + 0x30)) & 1) == 0) {
    lVar4 = 0x90;
    lVar2 = 0x14c;
  }
  else {
    lVar4 = 0xcc;
    lVar2 = 0x188;
  }
  if (*param_2 != '\0') {
    lVar4 = lVar2;
  }
  *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + lVar4 + 0xc);
  *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_2 + lVar4 + 0x14);
  uVar3 = FWeakObjectPtr::Get(param_2 + lVar4 + 0x30);
  *(undefined8 *)(param_3 + 0x10) = uVar3;
  cVar1 = FUN_142314560(uVar3);
  if (cVar1 != '\0') {
    FUN_142311f90(*(undefined8 *)(param_3 + 0x10),0,&local_28,local_18);
    *(float *)(param_3 + 4) = *(float *)(param_3 + 4) - local_28;
    *(float *)(param_3 + 8) = *(float *)(param_3 + 8) - local_24;
    *(float *)(param_3 + 0xc) = *(float *)(param_3 + 0xc) - local_20;
  }
  return;
}



// FUNCTION 142cbd1b0 FUN_142cbd1b0 body=827 status=ok
// SIG undefined FUN_142cbd1b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142cbd1b0(longlong *param_1,float *param_2)

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_78;
  float fStack_74;
  float local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c [20];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  fVar3 = DAT_1468b5d98;
  *(undefined8 *)param_2 = _DAT_1468b5d90;
  param_2[2] = fVar3;
  if (*(int *)(param_1[1] + 0x290) == 0) {
    return param_2;
  }
  (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x308))
            (*(longlong **)(*param_1 + 0xfd8),&local_78);
  lVar2 = param_1[1];
  if (*(uint *)(lVar2 + 0x290) == 0x3f) {
    *(ulonglong *)param_2 = CONCAT44(fStack_74,local_78);
    param_2[2] = local_70;
    return param_2;
  }
  if ((*(uint *)(lVar2 + 0x290) & 0xf) == 0) goto LAB_142cbd493;
  lVar2 = (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x788))
                    (*(longlong **)(*param_1 + 0xfd8),local_5c);
  local_64 = *(undefined4 *)(lVar2 + 4);
  local_68 = 0;
  local_60 = 0;
  FRotator::Quaternion(&local_68,&local_48);
  lVar2 = param_1[1];
  uVar1 = *(uint *)(lVar2 + 0x290);
  if ((uVar1 & 3) != 0) {
    fVar3 = DAT_1464aa7b0 * fStack_44 - DAT_1464aa7a8._4_4_ * fStack_40;
    fVar4 = (float)DAT_1464aa7a8 * fStack_40 - DAT_1464aa7b0 * local_48;
    fVar5 = DAT_1464aa7a8._4_4_ * local_48 - (float)DAT_1464aa7a8 * fStack_44;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    fVar5 = fVar5 + fVar5;
    fVar6 = (fVar5 * fStack_44 - fVar4 * fStack_40) + fStack_3c * fVar3 + (float)DAT_1464aa7a8;
    fVar7 = (fVar3 * fStack_40 - fVar5 * local_48) + fStack_3c * fVar4 + DAT_1464aa7a8._4_4_;
    fVar4 = (fVar4 * local_48 - fVar3 * fStack_44) + fStack_3c * fVar5 + DAT_1464aa7b0;
    fVar3 = fVar6 * local_78 + fVar7 * fStack_74 + fVar4 * local_70;
    if ((uVar1 & 1) == 0) {
      if (0.0 < fVar3) {
LAB_142cbd36f:
        fVar3 = 0.0;
      }
    }
    else if (((uVar1 & 2) == 0) && (fVar3 < 0.0)) goto LAB_142cbd36f;
    *param_2 = fVar6 * fVar3 + *param_2;
    param_2[1] = fVar7 * fVar3 + param_2[1];
    param_2[2] = fVar4 * fVar3 + param_2[2];
  }
  if ((uVar1 & 0xc) == 0) goto LAB_142cbd493;
  fVar3 = DAT_1464aa7c0 * fStack_44 - DAT_1464aa7b8._4_4_ * fStack_40;
  fVar4 = (float)DAT_1464aa7b8 * fStack_40 - DAT_1464aa7c0 * local_48;
  fVar5 = DAT_1464aa7b8._4_4_ * local_48 - (float)DAT_1464aa7b8 * fStack_44;
  fVar3 = fVar3 + fVar3;
  fVar4 = fVar4 + fVar4;
  fVar5 = fVar5 + fVar5;
  fVar6 = (fVar5 * fStack_44 - fVar4 * fStack_40) + fStack_3c * fVar3 + (float)DAT_1464aa7b8;
  fVar7 = (fVar3 * fStack_40 - fVar5 * local_48) + fStack_3c * fVar4 + DAT_1464aa7b8._4_4_;
  fVar4 = (fVar4 * local_48 - fVar3 * fStack_44) + fStack_3c * fVar5 + DAT_1464aa7c0;
  fVar3 = fVar6 * local_78 + fVar7 * fStack_74 + fVar4 * local_70;
  if ((uVar1 & 4) == 0) {
    if (0.0 < fVar3) {
LAB_142cbd460:
      fVar3 = 0.0;
    }
  }
  else if (((uVar1 & 8) == 0) && (fVar3 < 0.0)) goto LAB_142cbd460;
  *param_2 = fVar6 * fVar3 + *param_2;
  param_2[1] = fVar7 * fVar3 + param_2[1];
  param_2[2] = fVar4 * fVar3 + param_2[2];
LAB_142cbd493:
  uVar1 = *(uint *)(lVar2 + 0x290);
  if ((uVar1 & 0x30) != 0) {
    param_2[2] = local_70;
    if ((uVar1 & 0x10) == 0) {
      if (0.0 <= local_70) {
        local_70 = 0.0;
      }
      param_2[2] = local_70;
    }
    else if ((uVar1 & 0x20) == 0) {
      if (local_70 <= 0.0) {
        local_70 = 0.0;
      }
      param_2[2] = local_70;
    }
  }
  return param_2;
}



// FUNCTION 142cbd4f0 FUN_142cbd4f0 body=957 status=ok
// SIG undefined FUN_142cbd4f0(void)

undefined8 *
FUN_142cbd4f0(longlong *param_1,undefined8 *param_2,longlong *param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  longlong local_res18;
  undefined8 local_d8;
  float fStack_d0;
  float fStack_cc;
  longlong *local_c8;
  float local_c0;
  ulonglong local_b8;
  float local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined8 local_80;
  longlong **local_78;
  longlong *local_70;
  undefined1 *local_68;
  undefined1 local_60 [72];
  
  if (param_3 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_142e07420();
    plVar7 = param_3;
    do {
      if (plVar7 == plVar4) {
        local_c8 = *(longlong **)(*param_1 + 0xfd8);
        lVar1 = *(longlong *)(*param_1 + 0xfd8);
        plVar7 = *(longlong **)(lVar1 + 0x490);
        if (plVar7 == (longlong *)0x0) {
          lVar1 = *(longlong *)(lVar1 + 0x168);
          if (lVar1 == 0) {
            uVar8 = (undefined4)DAT_1468b5da0;
            uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
            fStack_d0 = DAT_1468b5da8;
          }
          else {
            fVar15 = *(float *)(lVar1 + 0x210);
            local_d8 = *(ulonglong *)(lVar1 + 0x210);
            fStack_d0 = *(float *)(lVar1 + 0x218);
            fStack_cc = *(float *)(lVar1 + 0x21c);
            auVar13._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
            auVar13._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar15);
            auVar13._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_d0);
            auVar13._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_cc);
            iVar3 = movmskps((int)local_c8,auVar13);
            if (iVar3 != 0) {
              *(float *)(lVar1 + 0x250) = fVar15;
              *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
              *(float *)(lVar1 + 600) = fStack_d0;
              *(float *)(lVar1 + 0x25c) = fStack_cc;
              puVar6 = (undefined8 *)FQuat::Rotator(&local_d8,&local_b8);
              *(undefined8 *)(lVar1 + 0x260) = *puVar6;
              *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
            }
            uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
            uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
            fStack_d0 = *(float *)(lVar1 + 0x268);
          }
          local_d8 = CONCAT44(uVar9,uVar8);
          local_b0 = fStack_d0;
          puVar5 = &local_b8;
          local_b8 = local_d8;
        }
        else {
          puVar5 = (ulonglong *)(**(code **)(*plVar7 + 0x720))(plVar7,local_98);
        }
        local_a8 = *puVar5;
        local_a0 = (undefined4)puVar5[1];
        local_a8 = *puVar5 & 0xffffffff00000000;
        FRotator::Vector(&local_a8,local_60);
        plVar4 = (longlong *)FUN_142e07420();
        plVar7 = param_3;
        goto LAB_142cbd662;
      }
      plVar7 = (longlong *)plVar7[6];
    } while (plVar7 != (longlong *)0x0);
  }
  *param_2 = 0x3f800000;
  *(undefined4 *)(param_2 + 1) = 0;
  return param_2;
  while (plVar7 = (longlong *)plVar7[6], plVar7 != (longlong *)0x0) {
LAB_142cbd662:
    if (plVar7 == plVar4) goto LAB_142cbd672;
  }
  param_3 = (longlong *)0x0;
LAB_142cbd672:
  local_res18 = param_3[0x1f];
  if (local_res18 == 0) {
    (**(code **)(*param_3 + 0x368))(param_3);
    local_res18 = param_3[0x1f];
  }
  local_88 = &local_res18;
  local_78 = &local_c8;
  local_68 = local_60;
  local_80 = param_4;
  local_70 = param_1;
  if ((*(uint *)(local_res18 + 0x28) & 0x80000) == 0) {
LAB_142cbd77d:
    puVar6 = (undefined8 *)FUN_142cb4c20(&local_88,local_98,local_res18 + 0x6d0);
    fVar15 = (float)*puVar6;
    fVar14 = (float)((ulonglong)*puVar6 >> 0x20);
    local_c0 = *(float *)(puVar6 + 1);
  }
  else {
    cVar2 = (**(code **)(*local_c8 + 0x780))();
    lVar1 = *param_1;
    if (cVar2 == '\0') {
      local_b0 = *(float *)(lVar1 + 0x194);
      puVar5 = &local_b8;
      local_b8 = *(ulonglong *)(lVar1 + 0x18c);
    }
    else {
      puVar5 = (ulonglong *)AMAU_BehaviorPlayer::GetVelocityAnimation(lVar1,local_98);
    }
    local_d8 = *puVar5;
    fStack_d0 = *(float *)(puVar5 + 1);
    if ((((float)local_d8 == 0.0) &&
        (local_d8._4_4_ = (float)(local_d8 >> 0x20), local_d8._4_4_ == 0.0)) && (fStack_d0 == 0.0))
    goto LAB_142cbd77d;
    puVar5 = (ulonglong *)FUN_142cb4c20(&local_88,local_98,local_res18 + 0x720);
    local_d8 = *puVar5;
    fVar15 = (float)local_d8;
    fVar14 = (float)(local_d8 >> 0x20);
    local_c0 = *(float *)(puVar5 + 1);
    if (((fVar15 == 0.0) && (fVar14 == 0.0)) && (fStack_d0 = local_c0, local_c0 == 0.0))
    goto LAB_142cbd77d;
  }
  fVar12 = fVar15;
  fVar11 = fVar14;
  if (*(char *)(local_res18 + 0x68) == '\0') {
    fVar10 = fVar14 * fVar14 + fVar15 * fVar15;
    if (fVar10 != 1.0) {
      fVar12 = DAT_1468b5d90;
      fVar11 = DAT_1468b5d94;
      local_c0 = DAT_1468b5d98;
      if (fVar10 < 1e-08) goto LAB_142cbd890;
      auVar13 = rsqrtss(ZEXT416((uint)fVar10),ZEXT416((uint)fVar10));
      fVar12 = auVar13._0_4_;
      fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      fVar12 = fVar12 + fVar12 * (0.5 - fVar10 * 0.5 * fVar12 * fVar12);
      fVar15 = fVar15 * fVar12;
      fVar14 = fVar14 * fVar12;
    }
    local_c0 = 0.0;
    fVar12 = fVar15;
    fVar11 = fVar14;
  }
LAB_142cbd890:
  *param_2 = CONCAT44(fVar11,fVar12);
  *(float *)(param_2 + 1) = local_c0;
  return param_2;
}



// FUNCTION 142cbd8b0 FUN_142cbd8b0 body=52 status=ok
// SIG undefined FUN_142cbd8b0(void)

undefined8 FUN_142cbd8b0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)param_1[1];
  if ((longlong *)param_1[1] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  plVar1 = plVar2 + (int)param_1[2];
  while( true ) {
    if (plVar2 == plVar1) {
      return 0;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 1;
  }
  return 1;
}



// FUNCTION 142cbd8f0 FUN_142cbd8f0 body=121 status=ok
// SIG undefined FUN_142cbd8f0(void)

undefined8 FUN_142cbd8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_4 != 0) {
    lVar1 = UEnvQueryItemType::GetPrivateStaticClass();
    lVar2 = param_4;
    do {
      if (lVar2 == lVar1) goto LAB_142cbd928;
      lVar2 = *(longlong *)(lVar2 + 0x30);
    } while (lVar2 != 0);
  }
  param_4 = 0;
LAB_142cbd928:
  lVar2 = FUN_142e107c0();
  if (param_4 == lVar2) {
    uVar3 = FArchive::operator<<(param_3);
    FUN_142cb3d70(param_2,uVar3);
    return 1;
  }
  return 0;
}



// FUNCTION 142cbd970 FUN_142cbd970 body=176 status=ok
// SIG undefined FUN_142cbd970(void)

undefined8 FUN_142cbd970(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_142e107c0();
  *param_3 = uVar2;
  *(undefined4 *)(param_3 + 1) = 1;
  iVar1 = *(int *)(param_3 + 3);
  if (iVar1 < 0x390) {
    *(undefined4 *)(param_3 + 3) = 0x390;
    if (*(int *)((longlong)param_3 + 0x1c) < 0x390) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_3 + 2);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar1 + param_3[2]),0,(longlong)(0x390 - iVar1));
  }
  else if ((0x390 < iVar1) && (iVar1 + -0x390 != 0)) {
    *(int *)(param_3 + 3) = iVar1 - (iVar1 + -0x390);
    TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_3 + 2);
  }
  FUN_142dc1ad0(param_3[2]);
  thunk_FUN_142cb3d70(param_3[2],param_2);
  return 1;
}



// FUNCTION 142cbda20 FUN_142cbda20 body=1065 status=ok
// SIG undefined FUN_142cbda20(void)

void FUN_142cbda20(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  char cVar5;
  longlong lVar6;
  undefined4 uVar7;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined8 *)(param_1 + 0x5d0) = *(undefined8 *)(param_2 + 0x5d0);
  *(undefined4 *)(param_1 + 0x5d8) = *(undefined4 *)(param_2 + 0x5d8);
  *(undefined4 *)(param_1 + 0x5b8) = *(undefined4 *)(param_2 + 0x5b8);
  *(undefined8 *)(param_1 + 0x5e8) = *(undefined8 *)(param_2 + 0x5e8);
  *(undefined4 *)(param_1 + 0x5f0) = *(undefined4 *)(param_2 + 0x5f0);
  *(undefined4 *)(param_1 + 0x5bc) = *(undefined4 *)(param_2 + 0x5bc);
  *(undefined4 *)(param_1 + 0x5c0) = *(undefined4 *)(param_2 + 0x5c0);
  *(undefined1 *)(param_1 + 0x604) = *(undefined1 *)(param_2 + 0x604);
  *(undefined1 *)(param_1 + 0x60c) = *(undefined1 *)(param_2 + 0x60c);
  *(undefined4 *)(param_1 + 0x608) = *(undefined4 *)(param_2 + 0x608);
  *(undefined4 *)(param_1 + 0x610) = *(undefined4 *)(param_2 + 0x610);
  *(undefined4 *)(param_1 + 0x614) = *(undefined4 *)(param_2 + 0x614);
  *(undefined4 *)(param_1 + 0x618) = *(undefined4 *)(param_2 + 0x618);
  *(undefined4 *)(param_1 + 0x61c) = *(undefined4 *)(param_2 + 0x61c);
  *(undefined4 *)(param_1 + 0x620) = *(undefined4 *)(param_2 + 0x620);
  *(undefined8 *)(param_1 + 0x624) = *(undefined8 *)(param_2 + 0x624);
  *(undefined4 *)(param_1 + 0x62c) = *(undefined4 *)(param_2 + 0x62c);
  *(undefined4 *)(param_1 + 0x5dc) = *(undefined4 *)(param_2 + 0x5dc);
  *(undefined4 *)(param_1 + 0x5cc) = *(undefined4 *)(param_2 + 0x5cc);
  *(undefined4 *)(param_1 + 0x5e4) = *(undefined4 *)(param_2 + 0x5e4);
  *(undefined4 *)(param_1 + 0x5c4) = *(undefined4 *)(param_2 + 0x5c4);
  *(undefined4 *)(param_1 + 0x5c8) = *(undefined4 *)(param_2 + 0x5c8);
  *(undefined4 *)(param_1 + 0x5e0) = *(undefined4 *)(param_2 + 0x5e0);
  *(undefined4 *)(param_1 + 0x600) = *(undefined4 *)(param_2 + 0x600);
  uVar1 = *(undefined8 *)(param_2 + 0x5f4);
  *(undefined8 *)(param_1 + 0x5f4) = uVar1;
  *(undefined4 *)(param_1 + 0x5fc) = *(undefined4 *)(param_2 + 0x5fc);
  *(undefined1 *)(param_1 + 0x5a2) = *(undefined1 *)(param_2 + 0x5a2);
  *(undefined1 *)(param_1 + 0x5a3) = *(undefined1 *)(param_2 + 0x5a3);
  *(undefined1 *)(param_1 + 0x5a4) = *(undefined1 *)(param_2 + 0x5a4);
  *(undefined1 *)(param_1 + 0x5a5) = *(undefined1 *)(param_2 + 0x5a5);
  *(undefined1 *)(param_1 + 0x5a6) = *(undefined1 *)(param_2 + 0x5a6);
  *(undefined1 *)(param_1 + 0x5a7) = *(undefined1 *)(param_2 + 0x5a7);
  *(undefined1 *)(param_1 + 0x5a8) = *(undefined1 *)(param_2 + 0x5a8);
  *(undefined8 *)(param_1 + 0x598) = *(undefined8 *)(param_2 + 0x598);
  FUN_142cd02e0((int)uVar1,*(undefined8 *)(param_2 + 0x588),*(undefined8 *)(param_2 + 0x590));
  *(undefined4 *)(param_1 + 0x5ac) = *(undefined4 *)(param_2 + 0x5ac);
  *(undefined4 *)(param_1 + 0x5b4) = *(undefined4 *)(param_2 + 0x5b4);
  lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x538) + 0x900);
  uVar7 = FUN_142cee1f0(lVar6,param_1 + 0x540,param_1 + 0x54c,param_1 + 0x558);
  *(undefined4 *)(param_1 + 0x55c) = uVar7;
  lVar6 = lVar6 + 0x2110;
  *(undefined1 *)(param_1 + 0x560) = *(undefined1 *)(param_2 + 0x560);
  *(undefined1 *)(param_1 + 0x561) = *(undefined1 *)(param_2 + 0x561);
  uVar1 = *(undefined8 *)(param_2 + 0x788);
  *(undefined8 *)(param_1 + 0x780) = *(undefined8 *)(param_2 + 0x780);
  *(undefined8 *)(param_1 + 0x788) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x798);
  *(undefined8 *)(param_1 + 0x790) = *(undefined8 *)(param_2 + 0x790);
  *(undefined8 *)(param_1 + 0x798) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7a8);
  *(undefined8 *)(param_1 + 0x7a0) = *(undefined8 *)(param_2 + 0x7a0);
  *(undefined8 *)(param_1 + 0x7a8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7b8);
  *(undefined8 *)(param_1 + 0x7b0) = *(undefined8 *)(param_2 + 0x7b0);
  *(undefined8 *)(param_1 + 0x7b8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7c8);
  *(undefined8 *)(param_1 + 0x7c0) = *(undefined8 *)(param_2 + 0x7c0);
  *(undefined8 *)(param_1 + 0x7c8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7d8);
  *(undefined8 *)(param_1 + 2000) = *(undefined8 *)(param_2 + 2000);
  *(undefined8 *)(param_1 + 0x7d8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7e8);
  *(undefined8 *)(param_1 + 0x7e0) = *(undefined8 *)(param_2 + 0x7e0);
  *(undefined8 *)(param_1 + 0x7e8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x7f8);
  *(undefined8 *)(param_1 + 0x7f0) = *(undefined8 *)(param_2 + 0x7f0);
  *(undefined8 *)(param_1 + 0x7f8) = uVar1;
  uVar7 = *(undefined4 *)(param_2 + 0x804);
  uVar2 = *(undefined4 *)(param_2 + 0x808);
  uVar3 = *(undefined4 *)(param_2 + 0x80c);
  *(undefined4 *)(param_1 + 0x800) = *(undefined4 *)(param_2 + 0x800);
  *(undefined4 *)(param_1 + 0x804) = uVar7;
  *(undefined4 *)(param_1 + 0x808) = uVar2;
  *(undefined4 *)(param_1 + 0x80c) = uVar3;
  uVar7 = *(undefined4 *)(param_2 + 0x814);
  uVar2 = *(undefined4 *)(param_2 + 0x818);
  uVar3 = *(undefined4 *)(param_2 + 0x81c);
  *(undefined4 *)(param_1 + 0x810) = *(undefined4 *)(param_2 + 0x810);
  *(undefined4 *)(param_1 + 0x814) = uVar7;
  *(undefined4 *)(param_1 + 0x818) = uVar2;
  *(undefined4 *)(param_1 + 0x81c) = uVar3;
  *(undefined4 *)(param_1 + 0x764) = *(undefined4 *)(param_2 + 0x764);
  *(undefined1 *)(param_1 + 0x84a) = *(undefined1 *)(param_2 + 0x84a);
  *(undefined1 *)(param_1 + 0x84b) = *(undefined1 *)(param_2 + 0x84b);
  *(undefined1 *)(param_1 + 0x84e) = *(undefined1 *)(param_2 + 0x84e);
  *(undefined1 *)(param_1 + 0x84f) = *(undefined1 *)(param_2 + 0x84f);
  *(undefined1 *)(param_1 + 0x84c) = *(undefined1 *)(param_2 + 0x84c);
  *(undefined1 *)(param_1 + 0x84d) = *(undefined1 *)(param_2 + 0x84d);
  uVar4 = FUN_142c6a420(lVar6,1);
  *(undefined1 *)(param_1 + 0x844) = uVar4;
  uVar4 = FUN_142c6a420(lVar6,4);
  *(undefined1 *)(param_1 + 0x845) = uVar4;
  uVar4 = FUN_142c6a420(lVar6,3);
  *(undefined1 *)(param_1 + 0x846) = uVar4;
  uVar4 = FUN_142c6a420(lVar6,5);
  *(undefined1 *)(param_1 + 0x847) = uVar4;
  cVar5 = FUN_142c6a420(lVar6,6);
  if (cVar5 == '\0') {
    cVar5 = FUN_142c6a420(lVar6,8);
    if (cVar5 == '\0') {
      cVar5 = FUN_142c6a420(lVar6,7);
      uVar4 = 0;
      if (cVar5 == '\0') goto LAB_142cbdd9e;
    }
  }
  uVar4 = 1;
LAB_142cbdd9e:
  *(undefined1 *)(param_1 + 0x848) = uVar4;
  *(undefined4 *)(param_1 + 0x8b0) = *(undefined4 *)(param_2 + 0x8b0);
  *(undefined4 *)(param_1 + 0x8b4) = *(undefined4 *)(param_2 + 0x8b4);
  *(undefined4 *)(param_1 + 0x8b8) = *(undefined4 *)(param_2 + 0x8b8);
  *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(param_2 + 0x8c8);
  *(undefined8 *)(param_1 + 0x8c0) = *(undefined8 *)(param_2 + 0x8c0);
  *(undefined4 *)(param_1 + 0x934) = *(undefined4 *)(param_2 + 0x934);
  *(undefined4 *)(param_1 + 0x940) = *(undefined4 *)(param_2 + 0x940);
  *(undefined1 *)(param_1 + 0x938) = *(undefined1 *)(param_2 + 0x938);
  *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_2 + 0x93c);
  *(undefined4 *)(param_1 + 0x930) = *(undefined4 *)(param_2 + 0x930);
  *(undefined4 *)(param_1 + 0x920) = *(undefined4 *)(param_2 + 0x920);
  *(undefined4 *)(param_1 + 0x92c) = *(undefined4 *)(param_2 + 0x92c);
  return;
}



// FUNCTION 142cbde50 FUN_142cbde50 body=151 status=ok
// SIG undefined FUN_142cbde50(void)

void FUN_142cbde50(longlong *param_1,undefined8 param_2,undefined8 *param_3,longlong param_4,
                  undefined8 *param_5)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = FUN_142dfd690();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = *param_5;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_5 + 1);
      return;
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142cbdef0 FUN_142cbdef0 body=145 status=ok
// SIG undefined FUN_142cbdef0(void)

void FUN_142cbdef0(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  bool bVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = FUN_142dfd5b0();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8
         ) != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      FUN_142cb3d70(param_3,param_5);
      return;
    }
  }
  (**(code **)(*param_1 + 0x2d0))(param_1,param_2,param_3);
  return;
}



// FUNCTION 142cbdf90 FUN_142cbdf90 body=84 status=ok
// SIG undefined FUN_142cbdf90(void)

undefined8 * FUN_142cbdf90(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x6d0);
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8c300(puVar1,param_1);
    puVar1[0xd9] = param_1;
    *puVar1 = &PTR__scalar_deleting_destructor__145853af0;
    return puVar1;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 142cbdff0 FUN_142cbdff0 body=129 status=ok
// SIG undefined FUN_142cbdff0(void)

void FUN_142cbdff0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145853ed0;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_1 + 0x20);
    FUN_142cb20b0(puVar1 + 5,param_1 + 0x28);
    puVar1[0x1d] = *(undefined8 *)(param_1 + 0xe8);
    *puVar1 = &PTR_GetPoolName_145853f18;
  }
  return;
}



// FUNCTION 142cbe080 FUN_142cbe080 body=240 status=ok
// SIG undefined FUN_142cbe080(void)

void FUN_142cbe080(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0xcf8) != 0) {
    lVar2 = FUN_142956f50();
    lVar1 = *(longlong *)(param_1 + 0xcf8);
    for (lVar3 = lVar1; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) {
        if (lVar1 != 0) {
          lVar3 = 0;
          if (lVar1 != 0) {
            lVar2 = FUN_142956f50();
            for (lVar1 = *(longlong *)(param_1 + 0xcf8);
                (lVar3 = 0, lVar1 != 0 && (lVar3 = *(longlong *)(param_1 + 0xcf8), lVar1 != lVar2));
                lVar1 = *(longlong *)(lVar1 + 0x30)) {
            }
          }
          FUN_1417846f0(param_1,
                        L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                       );
          FUN_1417985e0(lVar3,param_1,0,0,0,0,0,0,0);
          return;
        }
        break;
      }
    }
  }
  FUN_142690d70(param_1);
  return;
}



// FUNCTION 142cbe170 FUN_142cbe170 body=94 status=ok
// SIG undefined FUN_142cbe170(void)

int FUN_142cbe170(float param_1)

{
  float fVar1;
  
  fVar1 = (float)(int)(param_1 * 0.0027777778) * 360.0;
  if (ABS(param_1) < ABS(fVar1)) {
    fVar1 = param_1;
  }
  param_1 = param_1 - fVar1;
  if (param_1 < 0.0) {
    param_1 = param_1 + 360.0;
  }
  return (int)(param_1 * 0.7083333);
}



// FUNCTION 142cbe1d0 FUN_142cbe1d0 body=168 status=ok
// SIG undefined FUN_142cbe1d0(void)

undefined8 * FUN_142cbe1d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,byte *param_4)

{
  char cVar1;
  wchar_t *pwVar2;
  
  if (param_4 != (byte *)0x0) {
    cVar1 = USequencerScriptingRangeExtensions::HasEnd(param_4);
    if (cVar1 != '\0') {
      pwVar2 = L"false";
      if ((*param_4 & 1) != 0) {
        pwVar2 = L"true";
      }
      FString::PrintfImpl(param_2,L"%s (set: %f duration: %f)",pwVar2,
                          (double)*(float *)(param_4 + 4),(double)*(float *)(param_4 + 8));
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"invalid",0x10);
  return param_2;
}



// FUNCTION 142cbe280 FUN_142cbe280 body=386 status=ok
// SIG undefined FUN_142cbe280(void)

longlong * FUN_142cbe280(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  bool bVar9;
  ulonglong local_res8;
  longlong local_48 [5];
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18 [2];
  
  local_res8 = local_res8 & 0xffffffff00000000;
  cVar5 = (**(code **)(*param_1 + 0x2d8))(param_1,param_3,param_4);
  if (cVar5 == '\0') {
    bVar9 = param_1[6] == 0;
    if (bVar9) {
      local_48[0] = 0;
      local_48[1] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48,0);
      FGenericPlatformString::Memcpy(local_48[0],L"(unknown type)",0x1e);
      plVar6 = local_48;
    }
    else {
      local_res8 = *(ulonglong *)(param_1[6] + 0x18);
      FName::ToString(&local_res8,local_18);
      plVar6 = local_18;
    }
    bVar3 = false;
    bVar2 = !bVar9;
    bVar1 = true;
    lVar8 = *plVar6;
    *plVar6 = 0;
    local_20 = (int)plVar6[1];
    plVar6[1] = 0;
    plVar7 = local_48 + 4;
    local_1c = *(undefined4 *)((longlong)plVar6 + 0xc);
  }
  else {
    local_48[2] = 0;
    local_48[3] = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_48 + 2,0);
    lVar8 = local_48[2];
    FGenericPlatformString::Memcpy(local_48[2],L"(unset)",0x10);
    plVar7 = local_48 + 2;
    bVar3 = true;
    bVar2 = false;
    bVar9 = false;
    bVar1 = false;
  }
  *plVar7 = 0;
  lVar4 = plVar7[1];
  *param_2 = lVar8;
  *(int *)(param_2 + 1) = (int)lVar4;
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar7 + 0xc);
  plVar7[1] = 0;
  if (bVar1) {
    if (local_48[4] != 0) {
      FMemory::Free();
    }
  }
  if (bVar9) {
    if (local_48[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar2) {
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_48[2] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142cbe410 FUN_142cbe410 body=104 status=ok
// SIG undefined FUN_142cbe410(void)

undefined8 *
FUN_142cbe410(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 local_res10 [3];
  
  lVar1 = FUN_142dd0030(param_4);
  if (lVar1 == 0) {
    *param_2 = 0;
    param_2[1] = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  local_res10[0] = *(undefined8 *)(lVar1 + 0x18);
  FName::ToString(local_res10,param_2);
  return param_2;
}



// FUNCTION 142cbe480 FUN_142cbe480 body=82 status=ok
// SIG undefined FUN_142cbe480(void)

void FUN_142cbe480(longlong param_1)

{
  FUN_142692640();
  FUN_142cd8330(param_1);
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd68) = 0;
  *(undefined4 *)(param_1 + 0xd50) = 0;
  if (*(int *)(param_1 + 0xd54) < 8) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xd48,8);
    return;
  }
  return;
}



// FUNCTION 142cbe4e0 FUN_142cbe4e0 body=264 status=ok
// SIG undefined FUN_142cbe4e0(void)

void FUN_142cbe4e0(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_1422364e0(param_1,param_2,param_2 & 0xff,0);
  if (*(longlong *)(param_1 + 0x900) != 0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x38) < DAT_146b315a0) {
      _Init_thread_header(&DAT_146b315a0);
      if (DAT_146b315a0 == -1) {
        FName::FName(&DAT_146b31598,L"Attached",1);
        _Init_thread_footer(&DAT_146b315a0);
      }
    }
    (**(code **)(**(longlong **)(param_1 + 0x900) + 0x5a0))(*(longlong **)(param_1 + 0x900),0,0);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x900) + 0x8b0,&DAT_146b31598);
    FUN_142dbb5d0(*(longlong *)(param_1 + 0x900) + 0x948,&DAT_146b31598);
    plVar1 = *(longlong **)(param_1 + 0x900);
    cVar2 = (char)plVar1[0x96];
    if ((byte)(cVar2 - 1U) < 2) {
      cVar2 = '\x03';
    }
                    /* WARNING: Could not recover jumptable at 0x000142cbe598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x5a0))(plVar1,cVar2,0);
    return;
  }
  return;
}



// FUNCTION 142cbe5f0 FUN_142cbe5f0 body=72 status=ok
// SIG undefined FUN_142cbe5f0(void)

void FUN_142cbe5f0(longlong *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x8c);
  FUN_1426930e0();
  if ((((byte)(uVar1 >> 6) & 1) != ((byte)(*(uint *)(param_1 + 0x8c) >> 6) & 1)) &&
     ((*(uint *)(param_1 + 0x8c) >> 6 & 1) == 0)) {
    (**(code **)(*param_1 + 0xa70))(param_1);
  }
  return;
}



// FUNCTION 142cbe640 FUN_142cbe640 body=260 status=ok
// SIG undefined FUN_142cbe640(void)

void FUN_142cbe640(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  FUN_14230b570();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b315b0) && (_Init_thread_header(&DAT_146b315b0), DAT_146b315b0 == -1))
  {
    FName::FName(&DAT_146b315a8,L"GbxInput",1);
    _Init_thread_footer(&DAT_146b315b0);
  }
  plVar2 = *(longlong **)(param_1 + 0x130);
  if (plVar2 != (longlong *)0x0) {
    plVar3 = (longlong *)*param_3;
    plVar1 = plVar3 + (int)param_3[1];
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      if (*plVar3 == DAT_146b315a8) {
        (**(code **)(*plVar2 + 0x408))(plVar2,param_2,param_3,param_4,param_5);
        return;
      }
    }
  }
  return;
}



// FUNCTION 142cbe750 FUN_142cbe750 body=721 status=ok
// SIG undefined FUN_142cbe750(void)

void FUN_142cbe750(longlong *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  float *pfVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  undefined4 local_res18 [2];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [8];
  
  plVar7 = (longlong *)*param_3;
  plVar1 = plVar7 + (int)param_3[1];
  if (plVar7 != plVar1) {
    while (*plVar7 != DAT_146b30f28) {
      plVar7 = plVar7 + 1;
      if (plVar7 == plVar1) {
        return;
      }
    }
    plVar1 = (longlong *)(param_2 + 0x98);
    local_78 = CONCAT44((float)DAT_1464aa730._1_1_ * 0.003921569,
                        (float)DAT_1464aa730._2_1_ * 0.003921569);
    local_70 = CONCAT44((float)DAT_1464aa730._3_1_ * 0.003921569,
                        (float)(byte)DAT_1464aa730 * 0.003921569);
    (**(code **)(*plVar1 + 0x20))(plVar1,&local_78);
    local_res18[0] = 0;
    local_78 = 0;
    local_70 = 0x11;
    fVar8 = 0.0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"<<<< BALANCE >>>",0x22);
    FUN_1428a6fb0(plVar1,&local_78,local_res18);
    if (local_78 != 0) {
      FMemory::Free();
    }
    local_68 = 0;
    local_60 = 0;
    (**(code **)(*param_1 + 0x438))(param_1,&local_68);
    lVar6 = (longlong)(int)local_60 * 0x20 + local_68;
    lVar5 = local_68;
    if (local_68 != lVar6) {
      do {
        FString::FString(local_58,lVar5);
        FString::FString(local_48,lVar5 + 0x10);
        pfVar4 = (float *)FUN_1428adeb0(plVar1,local_res18,local_58);
        fVar2 = *pfVar4;
        if (*pfVar4 <= fVar8) {
          fVar2 = fVar8;
        }
        fVar8 = fVar2;
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        lVar5 = lVar5 + 0x20;
      } while (lVar5 != lVar6);
    }
    lVar6 = (longlong)(int)local_60 * 0x20 + local_68;
    for (lVar5 = local_68; lVar5 != lVar6; lVar5 = lVar5 + 0x20) {
      FString::FString(local_58,lVar5);
      FString::FString(local_48,lVar5 + 0x10);
      fVar2 = *(float *)(param_2 + 0x240);
      uVar3 = *(undefined4 *)(param_2 + 0x244);
      FUN_1428adeb0(plVar1,&local_78,local_58);
      local_res18[0] = 0;
      FUN_1428a6fb0(plVar1,local_58,local_res18);
      *(undefined4 *)(param_2 + 0x244) = uVar3;
      local_res18[0] = 0;
      *(float *)(param_2 + 0x240) = fVar2 + fVar8;
      FUN_1428a6fb0(plVar1,local_48,local_res18);
      *(float *)(param_2 + 0x240) = fVar2;
      if (local_48[0] != 0) {
        FMemory::Free();
      }
      if (local_58[0] != 0) {
        FMemory::Free();
      }
    }
    TArray<FSaveGameUserSetting,FDefaultAllocator>::~TArray<FSaveGameUserSetting,FDefaultAllocator>
              (&local_68);
  }
  return;
}



// FUNCTION 142cbea30 FUN_142cbea30 body=295 status=ok
// SIG undefined FUN_142cbea30(void)

void FUN_142cbea30(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong local_28 [4];
  
  local_28[1] = 0xb;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Game Stage",0x16);
  uVar1 = (**(code **)(*param_1 + 0x400))(param_1);
  FString::PrintfImpl(local_28 + 2,&DAT_14584a994,uVar1);
  FUN_140c334b0(param_2,local_28,local_28 + 2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  local_28[0] = 0;
  local_28[1] = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Level",0xc);
  uVar1 = (**(code **)(*param_1 + 0x408))(param_1);
  FString::PrintfImpl(local_28 + 2,&DAT_14584b3b4,uVar1);
  FUN_140c334b0(param_2,local_28,local_28 + 2);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142cbeb60 FUN_142cbeb60 body=321 status=ok
// SIG undefined FUN_142cbeb60(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_142cbeb60(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  code *pcVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 *puVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_68 [48];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)&local_38;
  lVar10 = 0;
  bVar11 = false;
  local_38 = (longlong *)0x0;
  puVar9 = auStack_68;
  if (param_2 != 0) {
    cVar5 = FUN_142ccd9e0();
    puVar9 = auStack_68;
    if (cVar5 != '\0') {
      lVar7 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),&local_38);
      plVar4 = local_38;
      puVar9 = auStack_68;
      if ((lVar7 != 0) && (puVar9 = auStack_68, local_38 != (longlong *)0x0)) {
        uVar1 = *(ushort *)(local_38 + 5);
        puVar9 = auStack_68;
        if (uVar1 != 0) {
          uVar8 = (ulonglong)uVar1 + 0x1e;
          if (uVar8 <= (ulonglong)uVar1 + 0xf) {
            uVar8 = 0xffffffffffffff0;
          }
          puVar9 = auStack_68 + -(uVar8 & 0xfffffffffffffff0);
          lVar10 = (longlong)&local_30 + -(uVar8 & 0xfffffffffffffff0);
        }
        *(undefined8 *)(puVar9 + -8) = 0x142cbec30;
        FUN_142bcedd0(plVar4,param_2,lVar10);
        pcVar2 = *(code **)(*plVar4 + 0x318);
        *(undefined8 *)(puVar9 + -8) = 0x142cbec45;
        cVar5 = (*pcVar2)(plVar4,lVar10,param_4,param_3);
        if (cVar5 != '\0') {
          lVar3 = *plVar4;
          *(longlong *)(puVar9 + 0x20) = lVar7;
          pcVar2 = *(code **)(lVar3 + 0x2a0);
          *(undefined8 *)(puVar9 + -8) = 0x142cbec63;
          iVar6 = (*pcVar2)(plVar4,param_2,lVar10,plVar4);
          bVar11 = iVar6 == 0;
        }
        *(undefined8 *)(puVar9 + -8) = 0x142cbec77;
        FUN_142bced50(plVar4,param_2,lVar10);
      }
    }
  }
  *(undefined8 *)(puVar9 + -8) = 0x142cbec87;
  return bVar11;
}



// FUNCTION 142cbecb0 FUN_142cbecb0 body=149 status=ok
// SIG undefined FUN_142cbecb0(void)

void FUN_142cbecb0(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 == 0) {
    return;
  }
  if ((param_2 < 2) &&
     (FUN_1405cd7d0(lVar1,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                    *(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4)), param_2 == 0))
  {
    uVar2 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_142cc9aa0(lVar1,param_1 + 0x18,uVar2,param_1 + 0x28);
  }
  else if ((param_2 & 0xfffffffd) != 0) {
    return;
  }
  FUN_1405c53e0(lVar1);
  return;
}



// FUNCTION 142cbed50 FUN_142cbed50 body=151 status=ok
// SIG undefined FUN_142cbed50(void)

undefined1 FUN_142cbed50(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar2 == 0) {
    return 1;
  }
  if ((param_2 < 2) &&
     (FUN_1405cd7d0(lVar2,*(undefined4 *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),
                    *(undefined8 *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xd4)), param_2 == 0))
  {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
    FUN_142cc9aa0(lVar2,param_1 + 0x18,uVar1,param_1 + 0x28);
  }
  else if ((param_2 & 0xfffffffd) != 0) {
    return 1;
  }
  FUN_1405c53e0(lVar2);
  return 1;
}



// FUNCTION 142cbedf0 FUN_142cbedf0 body=1383 status=ok
// SIG undefined FUN_142cbedf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cbedf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  char *pcVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  int *piVar16;
  longlong *plVar17;
  uint uVar18;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined4 local_c0;
  undefined4 local_b8;
  longlong local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  local_98 = param_5;
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38);
  if ((*piVar16 < DAT_146b31520) && (_Init_thread_header(&DAT_146b31520), DAT_146b31520 == -1)) {
    FName::FName(&DAT_146b31518,L"Arms",1);
    _Init_thread_footer(&DAT_146b31520);
  }
  if ((*piVar16 < DAT_146b31530) && (_Init_thread_header(&DAT_146b31530), DAT_146b31530 == -1)) {
    FName::FName(&DAT_146b31528,L"Legs",1);
    _Init_thread_footer(&DAT_146b31530);
  }
  pcVar9 = (char *)FUN_14274dfb0(param_2,param_5);
  lVar11 = *(longlong *)(param_2 + 0xf8);
  local_a8 = lVar11;
  uVar10 = UObject::GetPrivateStaticClass();
  plVar17 = (longlong *)0x0;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = (longlong *)((ulonglong)local_c8 & 0xffffffffffffff00);
  lVar11 = FUN_141799680(uVar10,param_3,lVar11,0);
  if (lVar11 != 0) {
    local_a8 = 0;
  }
  if ((pcVar9 == (char *)0x0) || (*pcVar9 == '\0')) {
    lVar11 = FUN_14274de40(param_2,param_5,local_a8);
    if (lVar11 == 0) {
      return;
    }
    plVar12 = (longlong *)FUN_142227070(param_3,lVar11,local_a8);
    if (plVar12 == (longlong *)0x0) {
      return;
    }
    lVar11 = FUN_1429ff160();
    if ((*(int *)(lVar11 + 0x90) <= *(int *)(plVar12[2] + 0x90)) &&
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) ==
        lVar11 + 0x88)) {
      bVar8 = true;
      goto LAB_142cbef6e;
    }
  }
  else {
    plVar12 = (longlong *)FUN_142227140(param_3,pcVar9);
    if (plVar12 == (longlong *)0x0) {
      return;
    }
    lVar11 = FUN_1429ff160();
    if ((*(int *)(lVar11 + 0x90) <= *(int *)(plVar12[2] + 0x90)) &&
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) ==
        lVar11 + 0x88)) {
      bVar8 = true;
      goto LAB_142cbef6e;
    }
  }
  bVar8 = false;
LAB_142cbef6e:
  if ((bVar8) && (plVar12 != (longlong *)0x0)) {
    if (*(longlong *)(param_2 + 0x98) == DAT_146b31518) {
      lVar11 = *(longlong *)(param_1 + 0x180);
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x448);
      plVar1 = plVar15 + *(int *)(param_1 + 0x450);
      for (; (lVar11 = param_4, plVar15 != plVar1 &&
             ((lVar11 = *plVar15, lVar11 == 0 ||
              (*(longlong *)(lVar11 + 0x18) != *(longlong *)(param_2 + 0x98)))));
          plVar15 = plVar15 + 1) {
      }
    }
    lVar13 = FUN_1429f11d0();
    if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar13 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar13 + 0x90) * 8) !=
        lVar13 + 0x88)) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      (**(code **)(*plVar12 + 0x638))(plVar12,0);
    }
    FUN_142399e30(plVar12,lVar11,*(undefined8 *)(param_2 + 0x90));
    FUN_14234b150(plVar12);
    iVar4 = *(int *)(param_1 + 0x450);
    *(int *)(param_1 + 0x450) = iVar4 + 1;
    if (*(int *)(param_1 + 0x454) < iVar4 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x448,iVar4);
    }
    *(longlong **)(*(longlong *)(param_1 + 0x448) + (longlong)iVar4 * 8) = plVar12;
    if (lVar11 == *(longlong *)(param_3 + 0x168)) {
      (**(code **)(*plVar12 + 0x3d0))(plVar12,param_1);
      puVar14 = (undefined8 *)FUN_14238d0c0(plVar12,&local_88);
      iVar4 = *(int *)(param_1 + 0x468);
      *(int *)(param_1 + 0x468) = iVar4 + 1;
      if (*(int *)(param_1 + 0x46c) < iVar4 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
        ResizeGrow(param_1 + 0x460,iVar4);
      }
      lVar11 = *(longlong *)(param_1 + 0x460);
      lVar13 = (longlong)iVar4 * 0x40;
      *(longlong **)(lVar13 + lVar11) = plVar12;
      uVar10 = puVar14[1];
      puVar2 = (undefined8 *)(lVar13 + 0x10 + lVar11);
      *puVar2 = *puVar14;
      puVar2[1] = uVar10;
      uVar10 = puVar14[3];
      puVar2 = (undefined8 *)(lVar13 + 0x20 + lVar11);
      *puVar2 = puVar14[2];
      puVar2[1] = uVar10;
      uVar5 = *(undefined4 *)((longlong)puVar14 + 0x24);
      uVar6 = *(undefined4 *)(puVar14 + 5);
      uVar7 = *(undefined4 *)((longlong)puVar14 + 0x2c);
      puVar3 = (undefined4 *)(lVar13 + 0x30 + lVar11);
      *puVar3 = *(undefined4 *)(puVar14 + 4);
      puVar3[1] = uVar5;
      puVar3[2] = uVar6;
      puVar3[3] = uVar7;
    }
    plVar1 = local_98;
    local_a0 = 0;
    if (local_a8 != 0) {
      lVar11 = local_98[0x1f];
      if (lVar11 == 0) {
        (**(code **)(*local_98 + 0x368))(local_98);
        lVar11 = plVar1[0x1f];
      }
      lVar13 = local_a8;
      if (*(char *)(lVar11 + 0x458) != '\0') {
        lVar11 = *(longlong *)(param_3 + 0x10);
        if (((int)local_a8 == 0) && ((int)((ulonglong)local_a8 >> 0x20) == 0)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (!bVar8) {
          if (lVar11 == 0) {
            local_80 = (longlong *)0x0;
          }
          else {
            local_80 = *(longlong **)(lVar11 + 0x38);
          }
          local_78 = 0xffffffff;
          local_74 = 0x101;
          local_72 = 0;
          local_88 = lVar11;
          FUN_140cbbe70(&local_88);
          while (local_80 != (longlong *)0x0) {
            if (local_80[3] == lVar13) {
              if (local_80[0xe] != 0) {
                lVar11 = plVar12[2];
                goto joined_r0x000142cbf1c7;
              }
              break;
            }
            local_80 = (longlong *)local_80[5];
            FUN_140cbbe70(&local_88);
          }
        }
      }
    }
LAB_142cbf1f3:
    if (plVar12[3] == DAT_146b31528) {
      lVar11 = FUN_142e5c1e0();
      if ((*(int *)(plVar12[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar12[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      plVar15 = plVar12;
      if (!bVar8) {
        plVar15 = plVar17;
      }
      *(longlong **)(param_1 + 0x188) = plVar15;
      if (plVar15 != (longlong *)0x0) {
        FUN_142cac7e0(plVar15,*(undefined8 *)(param_3 + 0x4c0));
        FUN_142ca58c0(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_3 + 0x4c0));
      }
    }
    plVar15 = plVar17;
    if (0 < *(int *)(param_2 + 0xb8)) {
      do {
        local_c8 = plVar1;
        FUN_142cbedf0(param_1,*(undefined8 *)((longlong)plVar17 + *(longlong *)(param_2 + 0xb0)),
                      param_3,plVar12);
        uVar18 = (int)plVar15 + 1;
        plVar17 = plVar17 + 1;
        plVar15 = (longlong *)(ulonglong)uVar18;
      } while ((int)uVar18 < *(int *)(param_2 + 0xb8));
    }
  }
  return;
joined_r0x000142cbf1c7:
  if (lVar11 == 0) goto LAB_142cbf1f3;
  if (lVar11 == local_80[0xe]) {
    (**(code **)(*local_80 + 0x380))(local_80,*(int *)((longlong)local_80 + 0x44) + param_3,plVar12)
    ;
    goto LAB_142cbf1f3;
  }
  lVar11 = *(longlong *)(lVar11 + 0x30);
  goto joined_r0x000142cbf1c7;
}



// FUNCTION 142cbf360 FUN_142cbf360 body=102 status=ok
// SIG undefined FUN_142cbf360(void)

void FUN_142cbf360(longlong param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  
  if (((*(longlong *)(param_1 + 8) == 0) || ((*(byte *)(param_1 + 0x15c) & 2) != 0)) ||
     ((*(uint *)(*(longlong *)(param_1 + 8) + 0x28) & 0x10000) == 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *param_2 = uVar1;
  *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_1 + 0xb4);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 0xe4);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0xec);
  *(undefined8 *)(param_2 + 0x1c) = *(undefined8 *)(param_1 + 0xf0);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0xf8);
  return;
}



// FUNCTION 142cbf3d0 FUN_142cbf3d0 body=399 status=ok
// SIG undefined FUN_142cbf3d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cbf3d0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 local_28;
  float local_20;
  undefined1 local_1c [20];
  
  (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x578))
            (*(longlong **)(*param_1 + 0xfd8),param_2,param_2 + 4);
  uVar5 = (**(code **)(**(longlong **)(*param_1 + 0xfd8) + 0x788))
                    (*(longlong **)(*param_1 + 0xfd8),&local_28);
  puVar6 = (undefined8 *)FRotator::Vector(uVar5,local_1c);
  *(undefined8 *)(param_2 + 0xc) = *puVar6;
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(puVar6 + 1);
  lVar8 = *(longlong *)(*(longlong *)(*param_1 + 0xfd8) + 0x168);
  if (lVar8 == 0) {
    local_28 = _DAT_1468b5d90;
    local_20 = (float)DAT_1468b5d98;
  }
  else {
    local_28 = *(undefined8 *)(lVar8 + 0x220);
    local_20 = *(float *)(lVar8 + 0x228);
  }
  *(undefined8 *)(param_2 + 0x18) = local_28;
  *(float *)(param_2 + 0x20) = local_20;
  local_20 = *(float *)(param_2 + 0x20) - *(float *)(param_2 + 4);
  *(undefined8 *)(param_2 + 0x24) = *(undefined8 *)(param_2 + 0x18);
  *(float *)(param_2 + 0x2c) = local_20;
  puVar7 = (undefined4 *)
           (**(code **)(**(longlong **)(*param_1 + 0x180) + 0x748))
                     (*(longlong **)(*param_1 + 0x180),local_1c,0xbf800000);
  uVar1 = puVar7[1];
  uVar2 = puVar7[2];
  uVar3 = puVar7[3];
  *(undefined4 *)(param_2 + 0x30) = *puVar7;
  *(undefined4 *)(param_2 + 0x34) = uVar1;
  *(undefined4 *)(param_2 + 0x38) = uVar2;
  *(undefined4 *)(param_2 + 0x3c) = uVar3;
  if (*(char *)(param_1[2] + 0x210) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined1 *)(*(longlong *)(*param_1 + 0x180) + 0x302);
  }
  *(undefined1 *)(param_2 + 0x40) = uVar4;
  lVar8 = *(longlong *)(*param_1 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0();
  }
  *(longlong *)(param_2 + 0x48) = lVar8;
  *(longlong *)(param_2 + 0x58) = param_1[2];
  *(longlong *)(param_2 + 0x50) = param_1[1];
  *(undefined8 *)(param_2 + 0x60) = *(undefined8 *)(*param_1 + 0xfd8);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*param_1 + 0x244);
  return;
}



// FUNCTION 142cbf560 FUN_142cbf560 body=35 status=ok
// SIG undefined FUN_142cbf560(void)

void FUN_142cbf560(longlong *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_142e1b450();
                    /* WARNING: Could not recover jumptable at 0x000142cbf57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  return;
}



// FUNCTION 142cbf590 FUN_142cbf590 body=173 status=ok
// SIG undefined FUN_142cbf590(void)

int * FUN_142cbf590(longlong *param_1,int *param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_142cc3020(param_3);
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar2) * 4);
    if (iVar2 != -1) {
      lVar4 = *param_1;
      do {
        cVar1 = FUN_142cb4150((longlong)iVar2 * 0x5c + lVar4,param_3);
        if (cVar1 != '\0') {
          *param_2 = iVar2;
          return param_2;
        }
        lVar4 = *param_1;
        iVar2 = *(int *)((longlong)iVar2 * 0x5c + 0x54 + lVar4);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142cbf640 FUN_142cbf640 body=308 status=ok
// SIG undefined FUN_142cbf640(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142cbf640(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_118 [32];
  longlong local_f8 [24];
  ulonglong local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  if (((int)param_2 == 0) && ((int)((ulonglong)param_2 >> 0x20) == 0)) {
    plVar3 = (longlong *)0x0;
  }
  else {
    local_2c = 0;
    local_38 = 0;
    local_30 = 0;
    if (param_1 != 0) {
      FUN_140749cd0(param_1,local_f8,0);
    }
    plVar4 = local_f8;
    if (local_38 != 0) {
      plVar4 = (longlong *)0x0;
    }
    plVar4 = (longlong *)((ulonglong)plVar4 | local_38);
    plVar1 = plVar4 + local_30;
    while ((plVar3 = (longlong *)0x0, plVar4 != plVar1 &&
           ((plVar3 = (longlong *)*plVar4, plVar3 == (longlong *)0x0 ||
            (cVar2 = (**(code **)(*plVar3 + 0x440))(plVar3,param_2), cVar2 == '\0'))))) {
      plVar4 = plVar4 + 1;
    }
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
  return plVar3;
}



// FUNCTION 142cbf780 FUN_142cbf780 body=735 status=ok
// SIG undefined FUN_142cbf780(void)

longlong FUN_142cbf780(longlong param_1,longlong param_2,ulonglong param_3)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint *puVar13;
  uint local_88;
  uint uStack_84;
  uint uStack_74;
  uint uStack_70;
  undefined4 uStack_6c;
  uint uStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if ((param_2 != 0) && (lVar7 = FUN_142cc2b80(param_2), lVar7 != 0)) {
    return lVar7;
  }
  uVar9 = 0;
  if (param_3 == 0) {
    param_3 = uVar9;
    if (*(longlong *)(param_1 + 0x4d8) != 0) {
      param_3 = *(ulonglong *)(*(longlong *)(param_1 + 0x4d8) + 0x118);
    }
    if (param_3 == 0) goto LAB_142cbfa36;
  }
  plVar2 = (longlong *)(param_3 + 0x2b0);
  uVar3 = *(uint *)(param_3 + 0x2d8);
  puVar1 = (uint *)(param_3 + 0x2c0);
  uStack_84 = 1;
  local_88 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  if (uVar3 != 0) {
    puVar13 = *(uint **)(param_3 + 0x2d0);
    if (*(uint **)(param_3 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar4 = *puVar13;
    uVar11 = uVar9;
    while (uVar4 == 0) {
      iVar6 = (int)uVar9;
      uStack_70 = (int)uVar11 + 0x20;
      uVar11 = (ulonglong)uStack_70;
      local_88 = iVar6 + 1;
      uVar9 = (ulonglong)local_88;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142cbf89d;
      uVar4 = puVar13[(longlong)iVar6 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar6 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uStack_70 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142cbf89d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_3 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,uStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar12 = uVar4 & 0xffffffe0;
  uStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar13 = *(uint **)(param_3 + 0x2d0);
    if (*(uint **)(param_3 + 0x2d0) == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar10 = puVar13[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar6 = (int)uVar4 >> 5;
    while (uVar10 == 0) {
      uVar12 = uVar12 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_142cbf975;
      uVar10 = puVar13[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar10 = uVar10 - 1 & uVar10 ^ uVar10;
    iVar6 = 0x1f;
    if (uVar10 != 0) {
      for (; uVar10 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar10 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar12 - iVar6) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142cbf975:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar5 = true;
    }
    else {
      bVar5 = false;
    }
    if (bVar5) break;
    lVar7 = *(longlong *)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (lVar7 != 0) {
      lVar8 = FUN_1429f11d0();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
           ) != lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (((bVar5) && (lVar7 = FUN_142cc2b80(lVar7), lVar7 != 0)) &&
         (lVar7 != *(longlong *)(DAT_146b17150 + 0x6c8))) {
        return lVar7;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
  }
LAB_142cbfa36:
  return *(longlong *)(DAT_146b17150 + 0x6c8);
}



// FUNCTION 142cbfa60 FUN_142cbfa60 body=62 status=ok
// SIG undefined FUN_142cbfa60(void)

void FUN_142cbfa60(longlong *param_1)

{
  char cVar1;
  
  if (((param_1[1] != 0) && ((*(byte *)(param_1 + 3) & 1) != 0)) &&
     ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x5c0))();
    if (cVar1 != '\0') {
      FUN_142cc9130(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 142cbfaa0 FUN_142cbfaa0 body=656 status=ok
// SIG undefined FUN_142cbfaa0(void)

void FUN_142cbfaa0(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  uint *puVar11;
  int local_88;
  uint uStack_84;
  uint uStack_74;
  int iStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  uint uStack_5c;
  uint *local_58;
  uint uStack_50;
  uint uStack_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 uStack_38;
  uint *puStack_30;
  uint uStack_28;
  uint uStack_24;
  undefined8 uStack_20;
  
  if (*(longlong **)(param_1 + 0x130) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x130) + 0x400))();
  }
  uStack_84 = 1;
  plVar2 = (longlong *)(param_1 + 0x2b0);
  uVar3 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar3 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar4 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar4 == 0) {
      lVar9 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar7 = local_88 + 1;
      bVar6 = (int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar7;
      if (bVar6) goto LAB_142cbfb8d;
      uVar4 = puVar11[lVar9 + 1];
    }
    uStack_84 = uVar4 - 1 & uVar4 ^ uVar4;
    iVar7 = 0x1f;
    if (uStack_84 != 0) {
      for (; uStack_84 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_84 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (iStack_70 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142cbfb8d:
      uStack_74 = uVar3;
    }
  }
  uVar4 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar4 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar2;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar4;
  if (uVar4 != uVar3) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar8 = puVar11[(int)uVar4 >> 5] & -1 << ((byte)uVar4 & 0x1f);
    iVar7 = (int)uVar4 >> 5;
    while (uVar8 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7) goto LAB_142cbfc65;
      uVar8 = puVar11[(longlong)iVar7 + 1];
      iVar7 = iVar7 + 1;
    }
    uVar8 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar7 = 0x1f;
    if (uVar8 != 0) {
      for (; uVar8 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uVar8 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    uStack_74 = (uVar10 - iVar7) + 0x1f;
    if ((int)uVar3 < (int)uStack_74) {
LAB_142cbfc65:
      uStack_74 = uVar3;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar6 = true;
    }
    else {
      bVar6 = false;
    }
    if (bVar6) break;
    plVar5 = *(longlong **)(*plVar2 + (longlong)(int)uStack_4c * 0x10);
    if (plVar5 != (longlong *)0x0) {
      lVar9 = FUN_142956f50();
      if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      if ((bVar6) && (plVar5 != *(longlong **)(param_1 + 0x130))) {
        (**(code **)(*plVar5 + 0x400))(plVar5);
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 142cbfd90 FUN_142cbfd90 body=2794 status=ok
// SIG undefined FUN_142cbfd90(void)

longlong * FUN_142cbfd90(longlong param_1,longlong *param_2)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  wchar_t *pwVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  undefined2 *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  
  pwVar12 = L"false";
  *param_2 = 0;
  param_2[1] = 0;
  pwVar8 = L"false";
  local_48 = (undefined2 *)0x0;
  if (*(char *)(param_1 + 0x604) != '\0') {
    pwVar8 = L"true";
  }
  local_40 = 0;
  lVar13 = -1;
  lVar7 = lVar13;
  puVar9 = (undefined2 *)0x0;
  if (*pwVar8 == L'\0') {
LAB_142cbfe4b:
    puVar10 = &DAT_143f3eda8;
  }
  else {
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
    uVar5 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar5;
    uVar11 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = (uint)local_40;
    }
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar8,(longlong)(int)uVar5 * 2);
    puVar9 = puVar10;
    if (uVar11 == 0) goto LAB_142cbfe4b;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"WantsToTurn",puVar10);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x608));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"TurnAmount",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5b8));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"Speed2D",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5c0));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"VelocityZ",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5c4));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"ForwardDirection",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5c8));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"RightDirection",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5dc));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"Direction",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x5e4));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"ReverseDirection",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x618));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"Pitch",puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  FString::PrintfImpl(&local_48,&DAT_144114f48,(double)*(float *)(param_1 + 0x61c));
  puVar9 = &DAT_143f3eda8;
  if ((uint)local_40 != 0) {
    puVar9 = local_48;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",&DAT_14584ecd0,puVar9);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_48 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  pwVar8 = L"false";
  if (*(char *)(param_1 + 0x5a2) != '\0') {
    pwVar8 = L"true";
  }
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  lVar7 = lVar13;
  puVar9 = (undefined2 *)0x0;
  if (*pwVar8 == L'\0') {
LAB_142cc06a2:
    puVar10 = &DAT_143f3eda8;
  }
  else {
    do {
      lVar7 = lVar7 + 1;
    } while (pwVar8[lVar7] != L'\0');
    uVar5 = (int)lVar7 + 1;
    local_40 = (ulonglong)uVar5;
    uVar11 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = (uint)local_40;
    }
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar8,(longlong)(int)uVar5 * 2);
    puVar9 = puVar10;
    if (uVar11 == 0) goto LAB_142cc06a2;
  }
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"IsInAir",puVar10);
  pvVar3 = local_38;
  if (local_30 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  if (*(char *)(param_1 + 0x5a3) != '\0') {
    pwVar12 = L"true";
  }
  iVar6 = 0;
  local_48 = (undefined2 *)0x0;
  local_40 = 0;
  puVar9 = (undefined2 *)0x0;
  if (*pwVar12 != L'\0') {
    do {
      lVar13 = lVar13 + 1;
    } while (pwVar12[lVar13] != L'\0');
    uVar5 = (int)lVar13 + 1;
    local_40 = (ulonglong)uVar5;
    uVar11 = uVar5;
    if (0 < (int)uVar5) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      uVar11 = (uint)local_40;
    }
    puVar10 = local_48;
    FGenericPlatformString::Memcpy(local_48,pwVar12,(longlong)(int)uVar5 * 2);
    puVar9 = puVar10;
    if (uVar11 != 0) goto LAB_142cc07ba;
  }
  puVar10 = &DAT_143f3eda8;
LAB_142cc07ba:
  FString::PrintfImpl(&local_38,L"%s: %s\n",L"IsCrouching",puVar10);
  pvVar3 = local_38;
  if (local_30 != 0) {
    iVar6 = local_30 + -1;
  }
  if (iVar6 != 0) {
    iVar2 = (int)param_2[1];
    iVar4 = (uint)(iVar2 == 0) + iVar6 + iVar2;
    *(int *)(param_2 + 1) = iVar4;
    if (*(int *)((longlong)param_2 + 0xc) < iVar4) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
    }
    pvVar1 = (void *)(*param_2 + ((longlong)iVar2 - (ulonglong)(iVar2 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar3,(longlong)iVar6 * 2);
    *(undefined2 *)((longlong)pvVar1 + (longlong)iVar6 * 2) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (puVar9 != (undefined2 *)0x0) {
    FMemory::Free(puVar9);
  }
  return param_2;
}



// FUNCTION 142cc0880 FUN_142cc0880 body=108 status=ok
// SIG undefined FUN_142cc0880(void)

undefined * FUN_142cc0880(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b31470) {
    _Init_thread_header(&DAT_146b31470);
    if (DAT_146b31470 == -1) {
      atexit(FUN_143ebfef0);
      _Init_thread_footer(&DAT_146b31470);
      return &DAT_146b31450;
    }
  }
  return &DAT_146b31450;
}



// FUNCTION 142cc08f0 FUN_142cc08f0 body=196 status=ok
// SIG undefined FUN_142cc08f0(void)

void FUN_142cc08f0(longlong *param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_18 [16];
  
  plVar1 = (longlong *)param_1[0x92];
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x830))(plVar1,param_2,param_3);
      return;
    }
  }
  puVar4 = (undefined8 *)FUN_142cc0b00(param_1,local_18);
  *param_2 = *puVar4;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar4 + 1);
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 0x798))(param_1,local_18);
  *param_3 = *puVar4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 142cc09c0 FUN_142cc09c0 body=216 status=ok
// SIG undefined FUN_142cc09c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc09c0(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  plVar1 = *(longlong **)(param_1 + 0xa30);
  if ((plVar1 == (longlong *)0x0) ||
     ((*(int *)(param_1 + 0xa28) == 0 && (*(int *)(param_1 + 0xa2c) == 0)))) {
    FUN_1426958b0();
  }
  else {
    (**(code **)(*plVar1 + 0x420))(plVar1,&local_48,*(undefined8 *)(param_1 + 0xa28),0);
    local_60 = uStack_30;
    *param_2 = local_38;
    param_2[1] = uStack_34;
    local_58 = local_48;
    uStack_54 = uStack_44;
    uStack_50 = uStack_40;
    uStack_4c = uStack_3c;
    param_2[2] = uStack_30;
    FQuat::Rotator(&local_58,&local_68);
    *param_3 = local_68;
    *(undefined4 *)(param_3 + 1) = local_60;
  }
  return;
}



// FUNCTION 142cc0aa0 FUN_142cc0aa0 body=85 status=ok
// SIG undefined FUN_142cc0aa0(void)

undefined8 * FUN_142cc0aa0(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  if (*(longlong *)(param_1 + 0x900) == 0) {
    local_10 = DAT_1468b5da8;
    puVar2 = &local_18;
    local_18 = DAT_1468b5da0;
  }
  else {
    puVar2 = (undefined8 *)FUN_142cec500(*(longlong *)(param_1 + 0x900),&local_18);
  }
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *param_2 = *puVar2;
  *(undefined4 *)(param_2 + 1) = uVar1;
  return param_2;
}



// FUNCTION 142cc0b00 FUN_142cc0b00 body=612 status=ok
// SIG undefined FUN_142cc0b00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_142cc0b00(longlong param_1,float *param_2)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_78;
  float fStack_74;
  float local_70;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [12];
  undefined1 local_2c [20];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  plVar1 = *(longlong **)(param_1 + 0xbd0);
  if (plVar1 != (longlong *)0x0) {
    if ((*(int *)(param_1 + 0xbc8) == 0) && (*(int *)(param_1 + 0xbcc) == 0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      (**(code **)(*plVar1 + 0x428))(plVar1,param_2,*(undefined8 *)(param_1 + 0xbc8));
      return param_2;
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x490);
  if (plVar1 != (longlong *)0x0) {
    lVar5 = FUN_1429e18b0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
        lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      (**(code **)(*plVar1 + 0x830))(plVar1,&local_78,&local_48);
      *(ulonglong *)param_2 = CONCAT44(fStack_74,local_78);
      param_2[2] = local_70;
      return param_2;
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x168);
  if (lVar5 == 0) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar5 + 0x220);
    local_50 = *(float *)(lVar5 + 0x228);
  }
  local_68 = 0;
  local_78 = (float)local_58;
  fStack_74 = (float)((ulonglong)local_58 >> 0x20);
  local_60 = *(float *)(param_1 + 0xbb0);
  local_70 = local_50;
  lVar5 = FUN_14222e2a0(param_1);
  if (lVar5 != 0) {
    lVar6 = FUN_14222e2a0(param_1);
    lVar5 = *(longlong *)(lVar6 + 0x168);
    if (lVar5 == 0) {
      uVar8 = (undefined4)DAT_1468b5da0;
      uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      local_50 = (float)DAT_1468b5da8;
    }
    else {
      local_18 = *(float *)(lVar5 + 0x210);
      fStack_14 = *(float *)(lVar5 + 0x214);
      fStack_10 = *(float *)(lVar5 + 0x218);
      fStack_c = *(float *)(lVar5 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_14);
      auVar2._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_18);
      auVar2._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_10);
      auVar2._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_c);
      iVar4 = movmskps((int)lVar6,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar5 + 0x250) = local_18;
        *(float *)(lVar5 + 0x254) = fStack_14;
        *(float *)(lVar5 + 600) = fStack_10;
        *(float *)(lVar5 + 0x25c) = fStack_c;
        puVar7 = (undefined8 *)FQuat::Rotator(&local_18,local_38);
        *(undefined8 *)(lVar5 + 0x260) = *puVar7;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar7 + 1);
      }
      uVar8 = (undefined4)*(undefined8 *)(lVar5 + 0x260);
      uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x260) >> 0x20);
      local_50 = (float)*(undefined4 *)(lVar5 + 0x268);
    }
    local_58 = CONCAT44(uVar9,uVar8);
    local_48 = local_58;
    local_40 = local_50;
    puVar7 = (undefined8 *)FRotator::RotateVector(&local_48,local_2c,&local_68);
    local_68 = *puVar7;
    local_60 = *(float *)(puVar7 + 1);
  }
  *param_2 = local_78 + (float)local_68;
  param_2[1] = fStack_74 + local_68._4_4_;
  param_2[2] = local_70 + local_60;
  return param_2;
}



// FUNCTION 142cc0d70 FUN_142cc0d70 body=32 status=ok
// SIG undefined FUN_142cc0d70(void)

longlong FUN_142cc0d70(longlong param_1)

{
  longlong lVar1;
  
  if ((*(longlong *)(param_1 + 400) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x118), lVar1 == 0)) {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  return lVar1;
}



// FUNCTION 142cc0d90 FUN_142cc0d90 body=208 status=ok
// SIG undefined FUN_142cc0d90(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142cc0d90(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x440))();
    if (cVar1 != '\0') {
      FUN_14238d6f0(param_1,param_2,param_3,local_68);
      return 1;
    }
    iVar2 = FUN_1423ac950(param_1,param_2);
    if (iVar2 != -1) {
      puVar3 = (undefined8 *)FUN_1423acae0(param_1,local_88,param_2,0);
      *param_3 = *puVar3;
      *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar3 + 1);
      puVar4 = (undefined4 *)FUN_1423acfd0(param_1,local_58,iVar2);
      local_78 = *puVar4;
      uStack_74 = puVar4[1];
      uStack_70 = puVar4[2];
      uStack_6c = puVar4[3];
      FQuat::Rotator(&local_78,local_88);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142cc0e60 FUN_142cc0e60 body=431 status=ok
// SIG undefined FUN_142cc0e60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142cc0e60(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined1 *puVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118 [8];
  undefined1 *local_110;
  int local_108;
  undefined1 local_100 [192];
  ulonglong local_40;
  int local_38;
  undefined4 local_34;
  ulonglong local_30;
  undefined1 *puVar5;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_34 = 0;
  local_40 = 0;
  local_38 = 0;
  if (param_1 != 0) {
    FUN_140749cd0(param_1,local_100,0);
  }
  puVar5 = local_100;
  if (local_40 != 0) {
    puVar5 = (undefined1 *)0x0;
  }
  plVar4 = (longlong *)((ulonglong)puVar5 | local_40);
  plVar1 = plVar4 + local_38;
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    if (*plVar4 != 0) {
      FUN_14238b220(*plVar4,&local_110);
      if (*(int *)((longlong)param_2 + 0xc) < *(int *)(param_2 + 1) + local_108) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
      }
      puVar5 = local_110 + (longlong)local_108 * 8;
      for (puVar3 = local_110; puVar3 != puVar5; puVar3 = puVar3 + 8) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,puVar3);
      }
      if (local_110 != (undefined1 *)0x0) {
        FMemory::Free(local_110);
      }
    }
  }
  local_110 = local_118;
  FUN_142cb14d0(*param_2,*(undefined4 *)(param_2 + 1),&local_110);
  iVar2 = *(int *)(param_2 + 1);
  local_110 = (undefined1 *)0x0;
  *(int *)(param_2 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
  }
  _guard_xfg_dispatch_icall_nop
            ((void *)((longlong)*param_2 + 8),(void *)*param_2,(longlong)iVar2 << 3);
  *(undefined1 **)*param_2 = local_110;
  if (local_40 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142cc1010 FUN_142cc1010 body=177 status=ok
// SIG undefined FUN_142cc1010(void)

longlong FUN_142cc1010(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  plVar2 = (longlong *)FUN_140a63ba0(plVar1);
  plVar5 = (longlong *)plVar1[0x23];
  if (*(char *)(param_1 + 0x1d1) == '\x01') {
    plVar5 = plVar2;
    plVar2 = (longlong *)plVar1[0x23];
  }
  if ((plVar2 != (longlong *)0x0) && (plVar2 != plVar1)) {
    uVar3 = FUN_142dfdf30();
    lVar4 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  if ((plVar5 == (longlong *)0x0) || (plVar5 == plVar1)) {
    lVar4 = 0;
  }
  else {
    uVar3 = FUN_142dfdf30();
    lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar3);
  }
  return lVar4;
}



// FUNCTION 142cc10e0 FUN_142cc10e0 body=299 status=ok
// SIG undefined FUN_142cc10e0(void)

undefined8 * FUN_142cc10e0(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  if ((param_1[0x92] == 0) || (in_EAX = (**(code **)(*param_1 + 0x780))(), (char)in_EAX == '\0')) {
    if (param_1[0x120] != 0) {
      FUN_142ced280(param_1[0x120],param_2,1);
      return param_2;
    }
  }
  else {
    in_EAX = (**(code **)(*param_1 + 0xa20))(param_1);
    if ((char)in_EAX != '\0') {
      (**(code **)(*(longlong *)param_1[0x92] + 0x830))((longlong *)param_1[0x92],local_28,local_38)
      ;
      uVar5 = local_38._0_4_;
      uVar6 = local_38._4_4_;
      goto LAB_142cc11f6;
    }
  }
  lVar1 = param_1[0x2d];
  if (lVar1 == 0) {
    uVar5 = (undefined4)DAT_1468b5da0;
    uVar6 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_30 = DAT_1468b5da8;
  }
  else {
    local_18 = *(float *)(lVar1 + 0x210);
    fStack_14 = *(float *)(lVar1 + 0x214);
    fStack_10 = *(float *)(lVar1 + 0x218);
    fStack_c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_14);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_18);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_10);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_c);
    iVar3 = movmskps(in_EAX,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar4;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
    }
    uVar5 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar6 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_30 = *(undefined4 *)(lVar1 + 0x268);
  }
LAB_142cc11f6:
  *param_2 = CONCAT44(uVar6,uVar5);
  *(undefined4 *)(param_2 + 1) = local_30;
  return param_2;
}



// FUNCTION 142cc1210 FUN_142cc1210 body=35 status=ok
// SIG undefined FUN_142cc1210(void)

void FUN_142cc1210(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(*param_1 + 0xa48))();
  if (lVar1 != 0) {
    FUN_142bbbf70(lVar1);
    return;
  }
  return;
}



// FUNCTION 142cc1270 FUN_142cc1270 body=53 status=ok
// SIG undefined FUN_142cc1270(void)

undefined8 * FUN_142cc1270(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FUN_142dd0600();
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 142cc12b0 FUN_142cc12b0 body=21 status=ok
// SIG undefined FUN_142cc12b0(void)

undefined8 FUN_142cc12b0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x908) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x908) + 0x270);
  }
  return 0;
}



// FUNCTION 142cc12d0 FUN_142cc12d0 body=126 status=ok
// SIG undefined FUN_142cc12d0(void)

undefined4 FUN_142cc12d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && ((*(byte *)(lVar1 + 0x56c) & 1) != 0)) {
      return *(undefined4 *)(param_1 + 0x25c);
    }
  }
  return *(undefined4 *)(param_1 + 0x260);
}



// FUNCTION 142cc1350 FUN_142cc1350 body=76 status=ok
// SIG undefined FUN_142cc1350(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142cc1350(longlong *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((int)param_1[1] != 0) && ((longlong *)*param_1 != (longlong *)0x0)) {
    cVar1 = (**(code **)(*(longlong *)*param_1 + 0x18))();
    if (cVar1 != '\0') {
      if ((int)param_1[1] != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc1382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*(longlong *)*param_1 + 0x38))();
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142cc1390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142cc13a0 FUN_142cc13a0 body=266 status=ok
// SIG undefined FUN_142cc13a0(void)

float FUN_142cc13a0(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x118);
  if (lVar4 != 0) {
    lVar3 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && ((*(byte *)(lVar4 + 0x56c) & 1) != 0)) &&
       (lVar4 = *(longlong *)(param_1 + 0x118), lVar4 != 0)) {
      lVar3 = APostProcessVolume::GetPrivateStaticClass();
      plVar1 = *(longlong **)(lVar4 + 0x10);
      if (((int)plVar1[0x12] < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)(plVar1[0x11] + (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        lVar4 = plVar1[0x1f];
        if (lVar4 == 0) {
          (**(code **)(*plVar1 + 0x368))(plVar1);
          lVar4 = plVar1[0x1f];
        }
        if ((*(longlong *)(lVar4 + 0x4d0) != 0) && (*(longlong *)(lVar4 + 0x4c8) != 0)) {
          return *(float *)(*(longlong *)(lVar4 + 0x4d0) + 0x710) -
                 *(float *)(*(longlong *)(lVar4 + 0x4c8) + 0x2e4);
        }
      }
    }
  }
  return 0.0;
}



// FUNCTION 142cc14b0 FUN_142cc14b0 body=147 status=ok
// SIG undefined FUN_142cc14b0(void)

void FUN_142cc14b0(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  if (((*(longlong *)(param_1 + 0x4d0) == 0) || (lVar2 == 0)) ||
     (lVar2 = *(longlong *)(lVar2 + 0x4d0), lVar2 == 0)) {
    FUN_142312560(param_1,param_2,param_3);
  }
  else {
    *param_2 = *(undefined4 *)(lVar2 + 0x714);
    *param_3 = *(undefined4 *)(lVar2 + 0x710);
  }
  return;
}



// FUNCTION 142cc1550 FUN_142cc1550 body=104 status=ok
// SIG undefined FUN_142cc1550(void)

undefined8 * FUN_142cc1550(longlong param_1,undefined8 *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_3 != '\0') {
    uVar6 = *(undefined8 *)(param_1 + 0x218);
    uVar7 = *(undefined8 *)(param_1 + 0x220);
    uVar8 = *(undefined8 *)(param_1 + 0x228);
    *param_2 = *(undefined8 *)(param_1 + 0x210);
    param_2[1] = uVar6;
    uVar6 = *(undefined8 *)(param_1 + 0x238);
    param_2[4] = *(undefined8 *)(param_1 + 0x230);
    param_2[5] = uVar6;
    param_2[2] = uVar7;
    param_2[3] = uVar8;
    return param_2;
  }
  fVar1 = *(float *)(param_1 + 600);
  fVar2 = *(float *)(param_1 + 0x220);
  fVar3 = *(float *)(param_1 + 0x224);
  fVar4 = *(float *)(param_1 + 0x228);
  fVar5 = *(float *)(param_1 + 0x22c);
  uVar6 = *(undefined8 *)(param_1 + 0x218);
  uVar7 = *(undefined8 *)(param_1 + 0x230);
  uVar8 = *(undefined8 *)(param_1 + 0x238);
  *param_2 = *(undefined8 *)(param_1 + 0x210);
  param_2[1] = uVar6;
  param_2[4] = uVar7;
  param_2[5] = uVar8;
  *(float *)(param_2 + 2) = fVar2 + 0.0;
  *(float *)((longlong)param_2 + 0x14) = fVar3 + 0.0;
  *(float *)(param_2 + 3) = fVar4 + -fVar1;
  *(float *)((longlong)param_2 + 0x1c) = fVar5 + 0.0;
  return param_2;
}



// FUNCTION 142cc15c0 FUN_142cc15c0 body=122 status=ok
// SIG undefined FUN_142cc15c0(void)

undefined1 * FUN_142cc15c0(longlong param_1,undefined1 *param_2,byte param_3)

{
  longlong lVar1;
  
  lVar1 = (ulonglong)param_3 * 0x3c;
  *param_2 = *(undefined1 *)(lVar1 + 0x54 + param_1);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(lVar1 + 0x58 + param_1);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(lVar1 + 0x5c + param_1);
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(lVar1 + 0x60 + param_1);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 100 + param_1);
  *(undefined8 *)(param_2 + 0x14) = *(undefined8 *)(lVar1 + 0x68 + param_1);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(lVar1 + 0x70 + param_1);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(lVar1 + 0x74 + param_1);
  *(undefined4 *)(param_2 + 0x28) = *(undefined4 *)(lVar1 + 0x7c + param_1);
  *(undefined8 *)(param_2 + 0x2c) = *(undefined8 *)(lVar1 + 0x80 + param_1);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(lVar1 + 0x88 + param_1);
  param_2[0x38] = param_3;
  return param_2;
}



// FUNCTION 142cc1640 FUN_142cc1640 body=13 status=ok
// SIG undefined FUN_142cc1640(void)

undefined1 FUN_142cc1640(longlong param_1,byte param_2)

{
  return *(undefined1 *)((ulonglong)param_2 * 0x3c + 0x54 + param_1);
}



// FUNCTION 142cc1650 FUN_142cc1650 body=25 status=ok
// SIG undefined FUN_142cc1650(void)

undefined8 FUN_142cc1650(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = 0;
  if (0 < *(int *)(param_1 + 2)) {
    puVar2 = (undefined8 *)param_1[1];
    if ((undefined8 *)param_1[1] == (undefined8 *)0x0) {
      puVar2 = param_1;
    }
    uVar1 = *puVar2;
  }
  return uVar1;
}



// FUNCTION 142cc1670 FUN_142cc1670 body=8 status=ok
// SIG undefined FUN_142cc1670(void)

undefined8 FUN_142cc1670(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x948);
}



// FUNCTION 142cc1680 FUN_142cc1680 body=50 status=ok
// SIG undefined FUN_142cc1680(void)

longlong FUN_142cc1680(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)(param_1 + 0x448);
  plVar1 = plVar3 + *(int *)(param_1 + 0x450);
  while( true ) {
    if (plVar3 == plVar1) {
      return 0;
    }
    lVar2 = *plVar3;
    if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x18) == param_2)) break;
    plVar3 = plVar3 + 1;
  }
  return lVar2;
}



// FUNCTION 142cc16e0 FUN_142cc16e0 body=9 status=ok
// SIG undefined FUN_142cc16e0(void)

undefined4 FUN_142cc16e0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x378);
}



// FUNCTION 142cc1710 FUN_142cc1710 body=73 status=ok
// SIG undefined FUN_142cc1710(void)

void FUN_142cc1710(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_1 + 0x450) == 0) {
    uVar1 = UUGHUDGearBarUW::GetPrivateStaticClass();
    uVar1 = (**(code **)(*(longlong *)(param_1 + -0x8b8) + 0x628))(param_1 + -0x8b8,uVar1);
    *(undefined8 *)(param_1 + 0x450) = uVar1;
  }
  return;
}



// FUNCTION 142cc1760 FUN_142cc1760 body=81 status=ok
// SIG undefined FUN_142cc1760(void)

longlong FUN_142cc1760(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = *(longlong *)(param_1 + 0x30);
  if (lVar3 == 0) {
    plVar1 = *(longlong **)(param_1 + -0x60);
    if (plVar1 != (longlong *)0x0) {
      uVar2 = UUGHUDGearBarUW::GetPrivateStaticClass();
      lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
      *(longlong *)(param_1 + 0x30) = lVar3;
      return lVar3;
    }
    lVar3 = 0;
  }
  return lVar3;
}



// FUNCTION 142cc17c0 FUN_142cc17c0 body=286 status=ok
// SIG undefined FUN_142cc17c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc17c0(longlong *param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong *plVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  ulonglong local_res8;
  undefined8 local_18;
  undefined4 local_10;
  
  lVar1 = param_1[-0xea];
  if (lVar1 == 0) {
    local_18 = _DAT_1468b5d90;
    local_10 = DAT_1468b5d98;
  }
  else {
    local_18 = *(undefined8 *)(lVar1 + 0x220);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
  }
  *param_3 = local_18;
  *(undefined4 *)(param_3 + 1) = local_10;
  *param_4 = 0;
  lVar1 = param_1[-0x7d];
  uVar6 = *(uint *)(lVar1 + 0x230) & _DAT_146b30f30;
  uVar7 = *(uint *)(lVar1 + 0x234) & uRam0000000146b30f34;
  uVar8 = *(uint *)(lVar1 + 0x238) & uRam0000000146b30f38;
  uVar9 = *(uint *)(lVar1 + 0x23c) & uRam0000000146b30f3c;
  auVar10._4_4_ = uVar7;
  auVar10._0_4_ = uVar6;
  auVar10._8_4_ = uVar8;
  auVar10._12_4_ = uVar9;
  auVar11._4_4_ = uVar8;
  auVar11._0_4_ = uVar7;
  auVar11._8_4_ = uVar6;
  auVar11._12_4_ = uVar9;
  auVar11 = minps(auVar10,auVar11);
  auVar3._4_4_ = uVar6;
  auVar3._0_4_ = uVar8;
  auVar3._8_4_ = uVar7;
  auVar3._12_4_ = uVar9;
  auVar11 = minps(auVar11,auVar3);
  local_res8 = (ulonglong)(uint)auVar11._0_4_;
  fVar5 = *(float *)(param_3 + 1) - auVar11._0_4_ * *(float *)(lVar1 + 0x710) * 0.98;
  *(float *)(param_3 + 1) = fVar5;
  lVar1 = param_1[-0x7f];
  if (lVar1 != 0) {
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x38))(fVar5,&local_res8,param_2);
    lVar2 = *plVar4;
    *param_4 = lVar2;
    local_res8 = 0;
    if (lVar2 != 0) {
      FUN_142cc0d90(lVar1,lVar2,param_3);
    }
  }
  return;
}



// FUNCTION 142cc18e0 FUN_142cc18e0 body=332 status=ok
// SIG undefined FUN_142cc18e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142cc18e0(longlong *param_1,undefined4 param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong local_res8;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (param_1[3] != 0) {
    (**(code **)(*param_1 + 0x38))(param_1,&local_res8,param_2);
    local_28 = 0;
    if (local_res8 != 0) {
      cVar2 = (**(code **)(*(longlong *)param_1[3] + 0x440))();
      if (cVar2 != '\0') {
        *param_4 = local_res8;
        FUN_14238d6f0(param_1[3],local_res8,param_3,&local_18);
        return;
      }
      iVar3 = FUN_1423ac950(param_1[3]);
      if (iVar3 != -1) {
        *param_4 = local_res8;
        puVar4 = (undefined8 *)FUN_1423acae0(param_1[3],&local_18,local_res8,0);
        goto LAB_142cc1a0e;
      }
    }
  }
  if (param_1[-0xc] == 0) {
    puVar4 = &local_28;
  }
  else {
    lVar1 = *(longlong *)(param_1[-0xc] + 0x168);
    if (lVar1 == 0) {
      local_28 = _DAT_1468b5d90;
      local_20 = DAT_1468b5d98;
    }
    else {
      local_28 = *(undefined8 *)(lVar1 + 0x220);
      local_20 = *(undefined4 *)(lVar1 + 0x228);
    }
    local_10 = local_20;
    puVar4 = &local_18;
    local_18 = local_28;
  }
LAB_142cc1a0e:
  *param_3 = *puVar4;
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(puVar4 + 1);
  return;
}



// FUNCTION 142cc1b70 FUN_142cc1b70 body=318 status=ok
// SIG undefined FUN_142cc1b70(void)

undefined8 * FUN_142cc1b70(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  void *_Src;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  void **ppvVar10;
  void *local_48;
  int local_40;
  undefined4 uStack_3c;
  longlong local_38 [2];
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (*(longlong *)(param_1 + 0x908) == 0) {
    ppvVar10 = (void **)FUN_142696f50(param_1,local_38);
    bVar6 = false;
    bVar5 = false;
    bVar4 = true;
  }
  else {
    uVar8 = FUN_142dd0500(*(longlong *)(param_1 + 0x908),local_28);
    puVar9 = (undefined8 *)FText::ToString(uVar8);
    local_48 = (void *)0x0;
    iVar3 = *(int *)(puVar9 + 1);
    _Src = (void *)*puVar9;
    local_40 = iVar3;
    if (iVar3 == 0) {
      uStack_3c = 0;
      ppvVar10 = &local_48;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,iVar3,0);
      _guard_xfg_dispatch_icall_nop(local_48,_Src,(longlong)iVar3 * 2);
      ppvVar10 = &local_48;
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
    }
  }
  *param_2 = 0;
  *param_2 = *ppvVar10;
  *ppvVar10 = (void *)0x0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppvVar10 + 1);
  *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)ppvVar10 + 0xc);
  ppvVar10[1] = (void *)0x0;
  if (bVar4) {
    if (local_38[0] != 0) {
      FMemory::Free();
    }
  }
  if (bVar5) {
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar6) && (local_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar2 = (int *)((longlong)local_20 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142cc1cb0 FUN_142cc1cb0 body=14 status=ok
// SIG undefined FUN_142cc1cb0(void)

undefined8 * FUN_142cc1cb0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x198);
  *param_2 = *(undefined8 *)(param_1 + 400);
  param_2[1] = uVar1;
  return param_2;
}



// FUNCTION 142cc1cc0 FUN_142cc1cc0 body=256 status=ok
// SIG undefined FUN_142cc1cc0(void)

longlong * FUN_142cc1cc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_28 [2];
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_1404a9920();
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  plVar5 = local_10;
  *param_2 = (longlong)local_18;
  param_2[1] = (longlong)local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
  }
  local_28[1] = 10;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"GameStage",0x14);
  FUN_1416b32b0(*param_2,local_28,(double)*(int *)(param_1 + 0x1a4));
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142cc1dc0 FUN_142cc1dc0 body=86 status=ok
// SIG undefined FUN_142cc1dc0(void)

undefined8 FUN_142cc1dc0(longlong param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  if (param_2 != 0) {
    cVar1 = FUN_142ccd9e0();
    if (cVar1 != '\0') {
      uVar2 = FUN_142cc1e20(param_2,*(undefined1 *)(param_1 + 9),param_3);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 142cc1e20 FUN_142cc1e20 body=153 status=ok
// SIG undefined FUN_142cc1e20(void)

longlong FUN_142cc1e20(longlong param_1,byte param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_142bbd600();
  if (((lVar1 != 0) && (*(int *)(param_1 + 400) != 0)) &&
     ((int)(uint)param_2 < *(int *)(param_1 + 0x1a0))) {
    lVar2 = (ulonglong)*(ushort *)(*(longlong *)(param_1 + 0x198) + (ulonglong)param_2 * 2) +
            *(longlong *)(param_1 + 0x188);
    if (lVar2 != 0) {
      lVar1 = *(longlong *)(lVar1 + 8);
      *param_3 = lVar1;
      if (lVar1 == 0) {
        return lVar2;
      }
      if ((*(byte *)(lVar1 + 0x2b) & 1) == 0) {
        return lVar2;
      }
      *param_3 = *(longlong *)(*(longlong *)(param_1 + 0x1a8) + (ulonglong)param_2 * 8);
      return lVar2 + 4;
    }
  }
  return 0;
}



// FUNCTION 142cc1ec0 FUN_142cc1ec0 body=609 status=ok
// SIG undefined FUN_142cc1ec0(void)

void FUN_142cc1ec0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142311790();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b31540) && (_Init_thread_header(&DAT_146b31540), DAT_146b31540 == -1)) {
    uVar1 = AHeoCon::GetPrivateStaticClass();
    AHeoCon::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPawnAttachState",1);
    DAT_146b31538 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31540);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31538 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31538 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31538 + 0x30));
  }
  if ((*piVar5 < DAT_146b31550) && (_Init_thread_header(&DAT_146b31550), DAT_146b31550 == -1)) {
    uVar1 = AHeoCon::GetPrivateStaticClass();
    AHeoCon::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ClientTurnDelta",1);
    DAT_146b31548 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31550);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31548 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31548 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31548 + 0x30));
  }
  if ((*piVar5 < DAT_146b31560) && (_Init_thread_header(&DAT_146b31560), DAT_146b31560 == -1)) {
    uVar1 = AHeoCon::GetPrivateStaticClass();
    AHeoCon::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FacingController",1);
    DAT_146b31558 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31560);
  }
  if (0 < *(int *)(DAT_146b31558 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31558 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b31558 + 0x30));
  }
  return;
}



// FUNCTION 142cc2130 FUN_142cc2130 body=433 status=ok
// SIG undefined FUN_142cc2130(void)

void FUN_142cc2130(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14233e8d0();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b31438) && (_Init_thread_header(&DAT_146b31438), DAT_146b31438 == -1)) {
    uVar1 = FUN_142dfdf30();
    FUN_142dfdf30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"GameStage",1);
    DAT_146b31430 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31438);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31430 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31430 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31430 + 0x30));
  }
  if ((*piVar5 < DAT_146b31448) && (_Init_thread_header(&DAT_146b31448), DAT_146b31448 == -1)) {
    uVar1 = FUN_142dfdf30();
    FUN_142dfdf30();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ExperienceLevel",1);
    DAT_146b31440 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31448);
  }
  if (0 < *(int *)(DAT_146b31440 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31440 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b31440 + 0x30));
  }
  return;
}



// FUNCTION 142cc22f0 FUN_142cc22f0 body=609 status=ok
// SIG undefined FUN_142cc22f0(void)

void FUN_142cc22f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_14238b980();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b314a0) && (_Init_thread_header(&DAT_146b314a0), DAT_146b314a0 == -1)) {
    uVar1 = FUN_142e017e0();
    FUN_142e017e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bInWorldIconEnabled",1);
    DAT_146b31498 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b314a0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b31498 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31498 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31498 + 0x30));
  }
  if ((*piVar5 < DAT_146b314b0) && (_Init_thread_header(&DAT_146b314b0), DAT_146b314b0 == -1)) {
    uVar1 = FUN_142e017e0();
    FUN_142e017e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsStationary",1);
    DAT_146b314a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b314b0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b314a8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b314a8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b314a8 + 0x30));
  }
  if ((*piVar5 < DAT_146b314c0) && (_Init_thread_header(&DAT_146b314c0), DAT_146b314c0 == -1)) {
    uVar1 = FUN_142e017e0();
    FUN_142e017e0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ChallengeReference",1);
    DAT_146b314b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b314c0);
  }
  if (0 < *(int *)(DAT_146b314b8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b314b8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b314b8 + 0x30));
  }
  return;
}



// FUNCTION 142cc2560 FUN_142cc2560 body=232 status=ok
// SIG undefined FUN_142cc2560(void)

void FUN_142cc2560(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142cc22f0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b31510) && (_Init_thread_header(&DAT_146b31510), DAT_146b31510 == -1))
  {
    uVar1 = UGNavigationHeaderItem::GetPrivateStaticClass();
    UGNavigationHeaderItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AssociatedActors",1);
    DAT_146b31508 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b31510);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146b31508 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b31508 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b31508 + 0x30));
  }
  return;
}



// FUNCTION 142cc2650 FUN_142cc2650 body=50 status=ok
// SIG undefined FUN_142cc2650(void)

undefined8
FUN_142cc2650(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  puVar2 = (undefined8 *)FUN_142dcd4d0(param_3,local_18,0,0);
  *param_4 = *puVar2;
  uVar1 = *(undefined4 *)(puVar2 + 1);
  *(undefined4 *)(param_4 + 1) = uVar1;
  return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
}



// FUNCTION 142cc2690 FUN_142cc2690 body=71 status=ok
// SIG undefined FUN_142cc2690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_142cc2690(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float *pfVar4;
  undefined8 uStack_78;
  float fStack_70;
  undefined1 auStack_68 [24];
  undefined8 auStack_50 [9];
  
  lVar2 = *(longlong *)(param_1 + 0x900);
  if (lVar2 != 0) {
    uStack_78 = _DAT_1468b5d90;
    fStack_70 = DAT_1468b5d98;
    if (*(longlong *)(lVar2 + 0xfd8) != 0) {
      FUN_142cc15c0(*(longlong *)(lVar2 + 0xfd8) + 0xbe0,auStack_50,2);
      uStack_78 = _DAT_1468b5d90;
      fStack_70 = DAT_1468b5d98;
      if (*(longlong *)(lVar2 + 0xfd8) != 0) {
        puVar3 = (undefined8 *)
                 FUN_142cc2d20(*(longlong *)(lVar2 + 0xfd8) + 0xbe0,auStack_68,auStack_50,lVar2);
        uStack_78 = *puVar3;
        fStack_70 = *(float *)(puVar3 + 1);
      }
    }
    *param_3 = uStack_78;
    *(float *)(param_3 + 1) = fStack_70;
    FUN_142d08040(lVar2 + 0x13dc,&uStack_78);
    pfVar4 = (float *)FUN_142ced180(lVar2,auStack_68,2);
    fVar1 = pfVar4[2];
    *param_2 = CONCAT44(uStack_78._4_4_ + pfVar4[1],(float)uStack_78 + *pfVar4);
    *(float *)(param_2 + 1) = fStack_70 + fVar1;
    *param_4 = *(undefined4 *)(lVar2 + 0x1400);
    return *(undefined4 *)(lVar2 + 0x13ec);
  }
  *param_2 = DAT_1466ad120;
  *(undefined4 *)(param_2 + 1) = DAT_1466ad128;
  *param_3 = DAT_1466ad120;
  *(undefined4 *)(param_3 + 1) = DAT_1466ad128;
  *param_4 = 0;
  return 0;
}



// FUNCTION 142cc26e0 FUN_142cc26e0 body=65 status=ok
// SIG undefined FUN_142cc26e0(void)

undefined8 * FUN_142cc26e0(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_142ced400();
    return param_2;
  }
  *param_2 = DAT_1466ad120;
  *(undefined4 *)(param_2 + 1) = DAT_1466ad128;
  return param_2;
}



// FUNCTION 142cc2730 FUN_142cc2730 body=78 status=ok
// SIG undefined FUN_142cc2730(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142cc2730(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if ((*(int *)(param_1 + 0x18) != 0) && (*(longlong **)(param_1 + 0x10) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x18))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000142cc2764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x38))();
        return uVar2;
      }
                    /* WARNING: Could not recover jumptable at 0x000142cc2772. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(_DAT_00000000 + 0x38))();
      return uVar2;
    }
  }
  return 0;
}


