// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142fe9680 FUN_142fe9680 body=686 status=ok
// SIG undefined FUN_142fe9680(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe9680(longlong *param_1,char param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  undefined1 auStack_648 [32];
  undefined8 local_628;
  undefined8 uStack_620;
  code *local_618 [2];
  undefined1 local_608 [32];
  undefined8 local_5e8;
  undefined4 local_5d8;
  longlong local_5c8;
  undefined1 local_5c0;
  undefined1 local_5b8 [608];
  undefined8 local_358;
  undefined8 local_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined4 local_30c;
  longlong local_300;
  undefined4 local_2f8;
  undefined8 local_2f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_648;
  local_5c8 = param_1[0x23];
  local_5c0 = 1;
  local_358 = 0;
  local_350 = 0;
  local_348 = 1;
  local_340 = 0;
  local_338 = 0;
  local_320 = 0;
  local_318 = 0;
  local_310 = 0xffffffff;
  local_30c = 0;
  local_300 = 0;
  local_2f8 = 0;
  local_2f0 = 0;
  local_1e8 = 0;
  local_1e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_48 = 0;
  local_40 = 0;
  if (param_2 != '\0') {
    plVar3 = (longlong *)param_1[0x61];
    for (iVar2 = (int)param_1[0x62]; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 3;
    }
    *(undefined4 *)(param_1 + 0x62) = 0;
    if (*(int *)((longlong)param_1 + 0x314) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x61,0);
    }
  }
  FUN_142df0530(&local_5c8,param_1 + 0x61,param_2);
  if (param_2 != '\0') {
    (**(code **)(*param_1 + 0x520))(param_1,&local_5c8);
    local_5e8 = 0;
    local_5d8 = 0;
    puVar1 = (undefined8 *)FUN_140438ef0(0x10,local_608);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &PTR_FUN_143f77b70;
      puVar1[1] = &local_5c8;
    }
    local_618[0] = (code *)&LAB_142fe9a30;
    (**(code **)(*param_1 + 0x528))(param_1,local_618);
  }
  local_628 = &local_5c8;
  local_5e8 = 0;
  local_5d8 = 0;
  uStack_620 = param_1;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_608);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = (undefined4)local_628;
    *(undefined4 *)((longlong)puVar1 + 0xc) = local_628._4_4_;
    *(undefined4 *)(puVar1 + 2) = (undefined4)uStack_620;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_620._4_4_;
  }
  local_618[0] = FUN_142fe9a40;
  (**(code **)(*param_1 + 0x518))(param_1,local_618);
  FUN_142de7fc0(&local_5c8,param_1 + 0x5f);
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  if (local_1e8 != 0) {
    FMemory::Free();
  }
  local_2f8 = 0;
  if (local_300 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_340);
  FUN_14099aac0(local_5b8);
  return;
}



// FUNCTION 142fe9930 FUN_142fe9930 body=65 status=ok
// SIG undefined FUN_142fe9930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fe9930(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined1 local_28 [16];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_48;
  uVar1 = FUN_142caac20(param_1 + 0x10,local_28,param_2);
  FUN_142cc4350(uVar1,0);
  return;
}



// FUNCTION 142fe9980 FUN_142fe9980 body=99 status=ok
// SIG undefined FUN_142fe9980(void)

void FUN_142fe9980(longlong *param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  (**(code **)(*param_1 + 0x260))();
  *(undefined4 *)(param_1 + 0x48) = 0;
  lVar1 = param_1[0x45];
  lVar3 = (longlong)(int)param_1[0x46] * 0x40 + lVar1;
  for (; lVar1 != lVar3; lVar1 = lVar1 + 0x40) {
    if (*(longlong *)(lVar1 + 0x20) != 0) {
      if ((*(byte *)(lVar1 + 0x29) & 8) == 0) {
        bVar2 = *(byte *)(lVar1 + 0x34);
      }
      else {
        bVar2 = 0;
      }
      *(uint *)(param_1 + 0x48) = (int)param_1[0x48] + (uint)bVar2;
    }
  }
  return;
}



// FUNCTION 142fe99f0 thunk_FUN_142fe1c60 body=5 status=ok
// SIG undefined thunk_FUN_142fe1c60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void thunk_FUN_142fe1c60(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_b8 [32];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  longlong *plStack_80;
  undefined1 uStack_78;
  undefined8 uStack_68;
  undefined1 auStack_60 [16];
  ulonglong uStack_50;
  
  uStack_50 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar2 = *param_2;
  uStack_68 = *param_1;
  uVar1 = *(undefined4 *)(param_1 + 1);
  if (lVar2 != 0) {
    uVar3 = param_1[2];
    uVar7 = FUN_142caac20(param_2 + 8,auStack_60,uVar3);
    for (iVar5 = FUN_142cc45a0(uVar7,0); 0 < iVar5; iVar5 = iVar5 + -1) {
      lVar4 = param_2[0x10];
      uVar7 = FUN_142cc0880();
      uVar6 = FUN_142cc1350(uVar7);
      uStack_78 = 0;
      plStack_80 = param_2 + 0xf;
      if ((int)lVar4 == 0) {
        plStack_80 = (longlong *)0x0;
      }
      uStack_88 = 0x3f800000;
      uStack_90 = 0;
      uStack_98 = uVar3;
      FUN_1430141a0(uStack_68,lVar2,uVar1,uVar6);
    }
  }
  return;
}



// FUNCTION 142fe9a40 FUN_142fe9a40 body=67 status=ok
// SIG undefined FUN_142fe9a40(void)

void FUN_142fe9a40(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  FUN_142de5080(*param_1,lVar1,*param_3);
  if (*(longlong *)(lVar1 + 0x50) == DAT_146b45750) {
    *(byte *)(param_1[1] + 0x318) = *(byte *)(param_1[1] + 0x318) | 2;
  }
  return;
}



// FUNCTION 142fe9a90 FUN_142fe9a90 body=466 status=ok
// SIG undefined FUN_142fe9a90(void)

ulonglong FUN_142fe9a90(longlong *param_1,longlong *param_2,undefined1 param_3,undefined1 param_4,
                       char param_5)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong *local_28;
  int local_20;
  
  if ((*(byte *)((longlong)param_1 + 0x4a4) & 1) != 0) {
    if (param_2 == (longlong *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (**(code **)(*param_2 + 0x668))(param_2);
    }
    if (uVar4 != param_1[0x23]) goto LAB_142fe9c51;
  }
  uVar4 = 0;
  if (((*(byte *)(param_1 + 0xb5) & 2) == 0) || ((*(byte *)(param_1 + 0xb5) & 1) != 0)) {
    if (param_5 == '\0') goto LAB_142fe9c51;
    uVar4 = (**(code **)(*param_1 + 0x750))(param_1);
    if ((char)uVar4 != '\0') goto LAB_142fe9c51;
  }
  if (((*(byte *)(param_1 + 0xb5) & 4) != 0) && (param_1[0x8f] == 0)) {
    bVar2 = 0;
    lVar5 = FUN_142dccd00(param_2);
    if ((*(byte *)((longlong)param_1 + 0x4a4) & 4) == 0) {
      bVar2 = (**(code **)(*param_1 + 0x6e8))(param_1,lVar5,param_3,param_4);
    }
    else {
      lVar6 = (**(code **)(*param_1 + 0x148))();
      if (lVar6 != 0) {
        uVar7 = FUN_142df3580(lVar5);
        UWorld::GetPlayerControllerIterator(lVar6,&local_28);
        for (; (-1 < local_20 && (local_20 < (int)local_28[1])); local_20 = local_20 + 1) {
          uVar8 = FWeakObjectPtr::Get(*local_28 + (longlong)local_20 * 8);
          lVar6 = FUN_142dccd00(uVar8);
          if (((*(byte *)((longlong)param_1 + 0x4a4) & 8) == 0) || (lVar6 == lVar5)) {
LAB_142fe9bd5:
            if (lVar6 != 0) {
              cVar1 = (**(code **)(*param_1 + 0x6e8))(param_1,lVar6,0,param_4);
              if (cVar1 != '\0') {
                return 1;
              }
            }
          }
          else {
            uVar8 = FUN_142df3580(lVar6);
            iVar3 = FUN_142df3570(uVar7,uVar8);
            if (iVar3 == 0) goto LAB_142fe9bd5;
          }
        }
      }
    }
    return (ulonglong)bVar2;
  }
LAB_142fe9c51:
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 142fe9c70 FUN_142fe9c70 body=228 status=ok
// SIG undefined FUN_142fe9c70(void)

undefined4 FUN_142fe9c70(longlong param_1,longlong *param_2,undefined1 param_3)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (param_2 != (longlong *)0x0) {
    uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar4 == (longlong *)0x0) {
      uVar1 = FUN_1430255d0();
      lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
    }
    else {
      lVar5 = (**(code **)(*plVar4 + 0x18))(plVar4);
    }
    if ((((lVar5 != 0) && (DAT_146b45384 == '\0')) && (0 < *(int *)(lVar5 + 0x2a8))) &&
       ((*(int *)(lVar5 + 0x2a8) <= *(int *)(lVar5 + 0x240) &&
        (iVar3 = FUN_143017ba0(lVar5,param_1), 0 < iVar3)))) {
      return 0;
    }
    uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
    plVar4 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if ((plVar4 != (longlong *)0x0) &&
       (cVar2 = (**(code **)(*plVar4 + 0x20))
                          (plVar4,*(undefined8 *)(param_1 + 0x568),*(undefined4 *)(param_1 + 0x4a0),
                           param_3,param_1), cVar2 != '\0')) {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fe9d60 FUN_142fe9d60 body=127 status=ok
// SIG undefined FUN_142fe9d60(void)

undefined8 FUN_142fe9d60(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x208);
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0xf0);
    puVar1 = puVar4 + *(int *)(lVar2 + 0xf8);
    for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
      cVar3 = FUN_142c48f90(*puVar4,param_2,0);
      if (cVar3 == '\0') {
        return 0;
      }
    }
  }
  return 1;
}



// FUNCTION 142fe9de0 FUN_142fe9de0 body=8 status=ok
// SIG undefined FUN_142fe9de0(void)

bool FUN_142fe9de0(undefined8 param_1,longlong param_2)

{
  return *(char *)(param_2 + 0x28) == '\0';
}



// FUNCTION 142fe9df0 FUN_142fe9df0 body=46 status=ok
// SIG undefined FUN_142fe9df0(void)

undefined8 FUN_142fe9df0(longlong *param_1)

{
  char cVar1;
  
  if (((*(byte *)(param_1 + 0xb5) & 2) != 0) && ((*(byte *)(param_1 + 0xb5) & 1) == 0)) {
    cVar1 = (**(code **)(*param_1 + 0x740))();
    if (cVar1 != '\x01') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fe9e20 FUN_142fe9e20 body=8 status=ok
// SIG undefined FUN_142fe9e20(void)

undefined1 FUN_142fe9e20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x2a0);
}



// FUNCTION 142fe9e30 FUN_142fe9e30 body=55 status=ok
// SIG undefined FUN_142fe9e30(void)

undefined1 FUN_142fe9e30(longlong param_1,undefined8 param_2,int param_3)

{
  char cVar1;
  
  if (((0.0 < *(float *)(param_1 + 0x48)) && (*(int *)(param_1 + 0x58) <= param_3)) &&
     (param_3 <= *(int *)(param_1 + 0x5c))) {
    cVar1 = FUN_142c48f90(*(undefined8 *)(param_1 + 0x50),param_2,0);
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142fe9e70 FUN_142fe9e70 body=8 status=ok
// SIG undefined FUN_142fe9e70(void)

bool FUN_142fe9e70(undefined8 param_1,longlong param_2)

{
  return *(byte *)(param_2 + 0x28) < 2;
}



// FUNCTION 142fe9e80 ServerVoteSkipCutscene_Validate body=16 status=ok
// SIG undefined ServerVoteSkipCutscene_Validate(void)

undefined1
ACutsceneManager::ServerVoteSkipCutscene_Validate
          (undefined8 param_1,longlong param_2,longlong param_3)

{
  if ((param_2 != 0) && (param_3 != 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 142fe9e90 FUN_142fe9e90 body=95 status=ok
// SIG undefined FUN_142fe9e90(void)

ulonglong FUN_142fe9e90(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_142ffa540();
  uVar3 = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_142ffe220(param_1,lVar2);
    iVar1 = (int)uVar3;
    if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 0x230))) &&
       (uVar3 = *(ulonglong *)(param_1 + 0x228),
       param_3 <= *(int *)((longlong)iVar1 * 0x40 + 0x18 + uVar3))) {
      return CONCAT71((int7)(uVar3 >> 8),1);
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142fe9ef0 FUN_142fe9ef0 body=661 status=ok
// SIG undefined FUN_142fe9ef0(void)

void FUN_142fe9ef0(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  char local_38 [8];
  longlong local_30;
  undefined8 local_28;
  uint local_20;
  
  *(undefined1 *)(param_1 + 0x78) = 0;
  if (0 < *(int *)(param_1 + 8)) {
    local_30 = 0;
    local_28 = 0;
    local_20 = 0;
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_30,param_1);
    if (0 < (int)local_28) {
      local_38[0] = '\x04';
      iVar4 = FUN_143009a20(local_38,0,4);
      lVar1 = local_30;
      if (-1 < iVar4) {
        iVar4 = (int)local_28;
        uVar6 = local_20;
        if (local_38[0] == '\x03') {
          uVar11 = local_20 >> 3;
          iVar10 = local_20 + uVar11 * -8;
          uVar7 = 8 - iVar10;
          if (7 < uVar7) {
            uVar7 = 8;
          }
          if ((int)uVar11 < (int)local_28) {
            uVar6 = local_20 + uVar7;
            uVar12 = 8 - uVar7;
            uVar13 = 0xffffffffU >> (0x20U - (char)uVar7 & 0x1f) & 0xff &
                     (uint)(*(byte *)((ulonglong)uVar11 + local_30) >> ((byte)iVar10 & 0x1f));
            uVar9 = 8;
            if (uVar12 < 9) {
              uVar9 = uVar12;
            }
            while (uVar12 != 0) {
              uVar11 = uVar11 + 1;
              if (((int)uVar11 < 0) || ((int)local_28 <= (int)uVar11)) goto LAB_142fea06e;
              uVar6 = uVar6 + uVar9;
              uVar12 = uVar12 - uVar9;
              uVar8 = uVar7 + uVar9;
              uVar13 = uVar13 | (0xffffffffU >> (0x20U - (char)uVar9 & 0x1f) & 0xff &
                                (uint)*(byte *)((int)uVar11 + local_30)) << ((byte)uVar7 & 0x1f);
              uVar9 = 8;
              uVar7 = uVar8;
              if (uVar12 < 9) {
                uVar9 = uVar12;
              }
            }
            if (DAT_146b45380 == 0) {
              uVar13 = uVar13 & 0x7f;
            }
            if (0 < (int)uVar13) {
              cVar2 = FUN_1404c68e0(uVar13);
              *(bool *)(param_1 + 0x78) = cVar2 == '\0';
            }
          }
        }
LAB_142fea06e:
        if ((*(char *)(param_1 + 0x78) == '\0') && (local_38[0] == '\x03')) {
          uVar11 = uVar6 >> 3;
          iVar10 = uVar6 + uVar11 * -8;
          uVar6 = 8 - iVar10;
          if (6 < uVar6) {
            uVar6 = 7;
          }
          if ((int)uVar11 < iVar4) {
            uVar7 = 7 - uVar6;
            uVar12 = 0xffffffffU >> (0x20U - (char)uVar6 & 0x1f) & 0xff &
                     (uint)(*(byte *)((ulonglong)uVar11 + lVar1) >> ((byte)iVar10 & 0x1f));
            uVar13 = 8;
            if (uVar7 < 9) {
              uVar13 = uVar7;
            }
            while (uVar7 != 0) {
              uVar11 = uVar11 + 1;
              if (((int)uVar11 < 0) || (iVar4 <= (int)uVar11)) goto LAB_142fea154;
              uVar7 = uVar7 - uVar13;
              uVar9 = uVar6 + uVar13;
              uVar12 = uVar12 | (0xffffffffU >> (0x20U - (char)uVar13 & 0x1f) & 0xff &
                                (uint)*(byte *)((int)uVar11 + lVar1)) << ((byte)uVar6 & 0x1f);
              uVar6 = uVar9;
              uVar13 = 8;
              if (uVar7 < 9) {
                uVar13 = uVar7;
              }
            }
            lVar5 = FUN_142ff6920();
            if (((int)uVar12 < 0) || (*(int *)(lVar5 + 0x38) < (int)uVar12)) {
              uVar3 = 1;
            }
            else {
              uVar3 = 0;
            }
            *(undefined1 *)(param_1 + 0x78) = uVar3;
          }
        }
LAB_142fea154:
        if (lVar1 == 0) {
          return;
        }
        FMemory::Free(lVar1);
        return;
      }
      *(undefined1 *)(param_1 + 0x78) = 1;
    }
    if (local_30 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142fea190 FUN_142fea190 body=193 status=ok
// SIG undefined FUN_142fea190(void)

undefined8 FUN_142fea190(longlong param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar5 = 0;
  if (param_2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar2 = iVar1 + uVar6;
      lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
              (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar3 = 0;
    }
    if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
      plVar4 = (longlong *)(**(code **)(*param_2 + 0x678))(param_2);
      if (plVar4 != (longlong *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x780))(plVar4);
        if ((char)uVar5 == '\0') {
          return uVar5;
        }
      }
      if (*(longlong *)(param_1 + 0x4b8) != 0) {
        uVar5 = FUN_142c48f90(*(longlong *)(param_1 + 0x4b8),param_2,0);
        return uVar5;
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}



// FUNCTION 142fea280 FUN_142fea280 body=445 status=ok
// SIG undefined FUN_142fea280(void)

void FUN_142fea280(longlong *param_1)

{
  longlong lVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 local_res10 [8];
  
  uVar4 = (**(code **)(*param_1 + 0x148))();
  lVar5 = FUN_142ff67b0(uVar4);
  if (lVar5 != 0) {
    lVar1 = lVar5 + 0x10;
    cVar3 = (**(code **)(*param_1 + 0x730))(param_1);
    if (cVar3 == '\0') {
      FWeakObjectPtr::operator=(local_res10,param_1);
      lVar8 = *(longlong *)(lVar5 + 0x410);
      if (*(longlong *)(lVar5 + 0x410) == 0) {
        lVar8 = lVar1;
      }
      iVar6 = *(int *)(lVar5 + 0x418);
      for (lVar7 = lVar8; lVar7 != lVar8 + (longlong)iVar6 * 8; lVar7 = lVar7 + 8) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,local_res10);
        if (cVar3 != '\0') {
          iVar6 = (int)(lVar7 - lVar8 >> 3);
          if (iVar6 < 0) {
            return;
          }
          if (*(int *)(lVar5 + 0x418) <= iVar6) {
            return;
          }
          FWeakObjectPtr::operator=(&local_res8,0);
          lVar8 = *(longlong *)(lVar5 + 0x410);
          if (*(longlong *)(lVar5 + 0x410) == 0) {
            lVar8 = lVar1;
          }
          puVar2 = (undefined4 *)(lVar8 + (longlong)iVar6 * 8);
          *puVar2 = local_res8;
          puVar2[1] = local_resc;
          return;
        }
      }
    }
    else {
      FWeakObjectPtr::operator=(&local_res8,param_1);
      lVar8 = *(longlong *)(lVar5 + 0x410);
      if (*(longlong *)(lVar5 + 0x410) == 0) {
        lVar8 = lVar1;
      }
      iVar6 = *(int *)(lVar5 + 0x418);
      for (lVar7 = lVar8; lVar7 != lVar8 + (longlong)iVar6 * 8; lVar7 = lVar7 + 8) {
        cVar3 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar7,&local_res8);
        if (cVar3 != '\0') {
          if ((int)(lVar7 - lVar8 >> 3) != -1) {
            return;
          }
          break;
        }
      }
      iVar6 = *(int *)(lVar5 + 0x418);
      *(int *)(lVar5 + 0x418) = iVar6 + 1;
      if (*(int *)(lVar5 + 0x41c) < iVar6 + 1) {
        TArray<void_*,TInlineAllocator<128,FDefaultAllocator>_>::ResizeGrow(lVar1,iVar6);
      }
      lVar8 = *(longlong *)(lVar5 + 0x410);
      if (*(longlong *)(lVar5 + 0x410) == 0) {
        lVar8 = lVar1;
      }
      puVar2 = (undefined4 *)(lVar8 + (longlong)iVar6 * 8);
      *puVar2 = local_res8;
      puVar2[1] = local_resc;
    }
  }
  return;
}



// FUNCTION 142fea440 FUN_142fea440 body=378 status=ok
// SIG undefined FUN_142fea440(void)

void FUN_142fea440(undefined4 *param_1)

{
  longlong *plVar1;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_27;
  
  _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
  plVar1 = (longlong *)(param_1 + 8);
  *param_1 = local_88[0];
  *(undefined8 *)(param_1 + 2) = local_80;
  *(undefined8 *)(param_1 + 4) = local_78;
  *(undefined8 *)(param_1 + 6) = local_70;
  if (plVar1 != &local_68) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_68;
    param_1[10] = local_60;
    param_1[0xb] = local_5c;
  }
  plVar1 = (longlong *)(param_1 + 0xc);
  if (plVar1 != &local_58) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_58;
    param_1[0xe] = local_50;
    param_1[0xf] = local_4c;
  }
  plVar1 = (longlong *)(param_1 + 0x10);
  if (plVar1 != &local_48) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_48;
    param_1[0x12] = local_40;
    param_1[0x13] = local_3c;
  }
  plVar1 = (longlong *)(param_1 + 0x14);
  if (plVar1 != &local_38) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_38;
    param_1[0x16] = local_30;
    param_1[0x17] = local_2c;
  }
  *(undefined1 *)(param_1 + 0x18) = local_28;
  *(undefined1 *)((longlong)param_1 + 0x61) = local_27;
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  if (local_58 != 0) {
    FMemory::Free(local_58);
  }
  if (local_68 != 0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 142fea5c0 FUN_142fea5c0 body=410 status=ok
// SIG undefined FUN_142fea5c0(void)

void FUN_142fea5c0(longlong *param_1,char param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined1 local_30;
  byte local_2f;
  undefined4 local_2c;
  undefined1 local_28;
  undefined1 local_24;
  undefined4 local_20;
  byte local_1c;
  
  iVar2 = FUN_14233f450();
  if ((iVar2 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) {
    iVar2 = (int)param_1[0x46];
    lVar3 = (longlong)iVar2;
    *(undefined1 *)((longlong)param_1 + 0x369) = 1;
    if (0 < iVar2) {
      lVar5 = lVar3 * 0x40;
      do {
        iVar2 = iVar2 + -1;
        lVar1 = param_1[0x45];
        local_2f = local_2f & 0xf0;
        local_1c = local_1c & 0xfc;
        local_58 = 0xffffffffffffffff;
        local_50 = 0xffffffffffffffff;
        local_48 = 0;
        local_40 = 1;
        local_38 = 0;
        local_30 = 0;
        local_2c = 0;
        local_28 = 0;
        local_24 = 0;
        local_20 = 1;
        for (lVar4 = lVar1; lVar4 != (longlong)(int)param_1[0x46] * 0x40 + lVar1;
            lVar4 = lVar4 + 0x40) {
          if (*(int *)(lVar4 + 0xc) == *(int *)(lVar5 + -0x34 + lVar1)) {
            FUN_1411cb440(&local_58);
            FUN_143011bf0(param_1,lVar1 + 0xc + (longlong)iVar2 * 0x40,local_40,0);
            if ((param_2 != '\0') && (local_38 != 0)) {
              FUN_142227350(local_38,0,1);
            }
            break;
          }
        }
        lVar3 = lVar3 + -1;
        lVar5 = lVar5 + -0x40;
      } while (0 < lVar3);
    }
    (**(code **)(*param_1 + 0x260))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x369) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return;
}



// FUNCTION 142fea760 FUN_142fea760 body=164 status=ok
// SIG undefined FUN_142fea760(void)

void FUN_142fea760(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  int local_res10 [2];
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x248);
    piVar2 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(plVar1,local_res10,param_2);
    if (*piVar2 != -1) {
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res10,param_2);
      lVar4 = 0;
      lVar3 = lVar4;
      if (local_res10[0] != -1) {
        lVar3 = (longlong)local_res10[0] * 0x20 + *plVar1;
      }
      *(undefined4 *)(lVar3 + 8) = 0xffffffff;
      TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
      ::FindId(plVar1,local_res10,param_2);
      if (local_res10[0] != -1) {
        lVar4 = (longlong)local_res10[0] * 0x20 + *plVar1;
      }
      *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
    }
  }
  return;
}



// FUNCTION 142fea810 FUN_142fea810 body=72 status=ok
// SIG undefined FUN_142fea810(void)

/* WARNING: Removing unreachable block (ram,0x000142fea84e) */

void FUN_142fea810(longlong *param_1)

{
  (**(code **)(*param_1 + 0x4e8))();
  return;
}



// FUNCTION 142fea860 FUN_142fea860 body=2242 status=ok
// SIG undefined FUN_142fea860(void)

void FUN_142fea860(longlong param_1,longlong param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  uint *puVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong lVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  longlong *plVar19;
  longlong local_res10;
  undefined8 local_res18;
  undefined1 local_res20 [8];
  undefined8 local_120;
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  undefined4 uStack_104;
  int local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined4 local_ec;
  longlong *local_e8;
  int local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined4 uStack_c0;
  uint uStack_bc;
  uint *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 *local_a0;
  undefined8 *local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  longlong *local_78;
  undefined8 uStack_70;
  uint *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((param_2 != 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    lVar15 = *(longlong *)(param_1 + 0x2b8);
    iVar18 = *(int *)(param_1 + 0x2c0);
    local_d0 = &local_res10;
    plVar19 = (longlong *)0x0;
    local_a0 = local_res20;
    local_98 = &local_res18;
    local_90 = &local_res10;
    local_88 = param_5;
    local_e8 = (longlong *)0x0;
    plVar14 = plVar19;
    local_res10 = param_2;
    local_res18 = param_3;
    local_res20[0] = param_4;
    local_e0 = iVar18;
    local_80 = param_1;
    if (iVar18 != 0) {
      local_100 = iVar18;
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_e8,iVar18,0);
      plVar14 = local_e8;
      lVar15 = lVar15 - (longlong)local_e8;
      plVar8 = local_e8 + 2;
      do {
        plVar8[-2] = *(longlong *)(lVar15 + -0x10 + (longlong)plVar8);
        plVar8[-1] = *(longlong *)(lVar15 + -8 + (longlong)plVar8);
        *plVar8 = 0;
        FUN_140747320(plVar8,*(undefined8 *)(lVar15 + (longlong)plVar8),
                      *(undefined4 *)(lVar15 + 8 + (longlong)plVar8),0,0);
        plVar8 = plVar8 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    plVar8 = plVar14 + (longlong)local_e0 * 4;
    local_100 = local_e0;
    local_d8 = plVar8;
    while (plVar14 != plVar8) {
      lVar15 = *plVar14;
      local_f8 = 0;
      if (lVar15 == 0) {
        plVar14 = plVar14 + 4;
      }
      else {
        do {
          plVar9 = plVar8;
          plVar8 = plVar9 + -4;
          if (plVar14 == plVar8) goto LAB_142feaa79;
        } while (*plVar8 != 0);
        lVar10 = plVar14[1];
        lVar3 = plVar14[2];
        plVar14[2] = 0;
        uStack_108 = *(uint *)(plVar14 + 3);
        uStack_104 = *(undefined4 *)((longlong)plVar14 + 0x1c);
        plVar14[3] = 0;
        local_110 = (uint)lVar3;
        uStack_10c = (uint)((ulonglong)lVar3 >> 0x20);
        local_f0 = uStack_108;
        local_ec = uStack_104;
        FUN_142fe0390(plVar14,plVar8);
        *plVar8 = lVar15;
        puVar1 = (uint *)(plVar9 + -2);
        plVar9[-3] = lVar10;
        if (puVar1 != &local_110) {
          iVar18 = (int)plVar9[-1];
          lVar15 = *(longlong *)puVar1;
          if (iVar18 != 0) {
            plVar11 = (longlong *)(lVar15 + 8);
            do {
              if (*plVar11 != 0) {
                FMemory::Free();
              }
              plVar11 = plVar11 + 3;
              iVar18 = iVar18 + -1;
            } while (iVar18 != 0);
            lVar15 = *(longlong *)puVar1;
          }
          if (lVar15 != 0) {
            FMemory::Free();
          }
          *(longlong *)puVar1 = lVar3;
          *(uint *)(plVar9 + -1) = local_f0;
          *(undefined4 *)((longlong)plVar9 + -4) = local_ec;
          local_110 = 0;
          uStack_10c = 0;
          uStack_108 = 0;
          uStack_104 = 0;
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (&local_110);
        plVar14 = plVar14 + 4;
      }
    }
LAB_142feaa79:
    plVar14 = local_e8;
    if (local_e8 != local_d8) {
      do {
        plVar8 = *(longlong **)(param_1 + 0x118);
        if (*plVar14 != 0) {
          plVar9 = plVar8 + 0x56;
          uVar2 = *(uint *)(plVar8 + 0x5b);
          puVar1 = (uint *)(plVar8 + 0x58);
          local_120 = 0x100000000;
          uStack_10c = 0;
          uStack_108 = 0;
          if (uVar2 != 0) {
            puVar17 = (uint *)plVar8[0x5a];
            if ((uint *)plVar8[0x5a] == (uint *)0x0) {
              puVar17 = puVar1;
            }
            uVar6 = *puVar17;
            plVar11 = plVar19;
            plVar12 = plVar19;
            while (uVar6 == 0) {
              iVar18 = (int)plVar11;
              uStack_108 = (int)plVar12 + 0x20;
              plVar12 = (longlong *)(ulonglong)uStack_108;
              plVar11 = (longlong *)(ulonglong)(iVar18 + 1U);
              uVar5 = (ulonglong)local_120 >> 0x20;
              local_120 = CONCAT44((int)uVar5,iVar18 + 1U);
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar18)
              goto LAB_142feabb5;
              uVar6 = puVar17[(longlong)iVar18 + 1];
            }
            uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
            iVar18 = 0x1f;
            if (uVar6 != 0) {
              for (; uVar6 >> iVar18 == 0; iVar18 = iVar18 + -1) {
              }
            }
            local_120 = CONCAT44(uVar6,(undefined4)local_120);
            if (uVar6 == 0) {
              iVar18 = 0x20;
            }
            else {
              iVar18 = 0x1f - iVar18;
            }
            uStack_10c = (uStack_108 - iVar18) + 0x1f;
            if ((int)uVar2 < (int)uStack_10c) {
LAB_142feabb5:
              uStack_10c = uVar2;
            }
          }
          uVar6 = *(uint *)(plVar8 + 0x5b);
          uStack_b0 = CONCAT44(uStack_10c,0xffffffff);
          local_a8 = CONCAT44(uStack_104,uStack_108);
          uStack_70 = local_120;
          uVar7 = uStack_70;
          local_110 = -1 << ((byte)uVar6 & 0x1f);
          uStack_70._0_4_ = (undefined4)local_120;
          uStack_70._4_4_ = (uint)((ulonglong)local_120 >> 0x20);
          uVar16 = uVar6 & 0xffffffe0;
          uStack_c0 = (undefined4)uStack_70;
          uStack_bc = uStack_70._4_4_;
          uStack_10c = uVar6;
          local_b8 = puVar1;
          local_78 = plVar9;
          uStack_70 = uVar7;
          puStack_68 = puVar1;
          uStack_60 = uStack_b0;
          uStack_58 = local_a8;
          local_c8 = plVar9;
          if (uVar6 != uVar2) {
            puVar17 = (uint *)plVar8[0x5a];
            if ((uint *)plVar8[0x5a] == (uint *)0x0) {
              puVar17 = puVar1;
            }
            uVar13 = puVar17[(int)uVar6 >> 5] & local_110;
            iVar18 = (int)uVar6 >> 5;
            while (uVar13 == 0) {
              uVar16 = uVar16 + 0x20;
              if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar18)
              goto LAB_142feac8e;
              uVar13 = puVar17[(longlong)iVar18 + 1];
              local_110 = 0xffffffff;
              iVar18 = iVar18 + 1;
            }
            uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
            iVar18 = 0x1f;
            if (uVar13 != 0) {
              for (; uVar13 >> iVar18 == 0; iVar18 = iVar18 + -1) {
              }
            }
            if (uVar13 == 0) {
              iVar18 = 0x20;
            }
            else {
              iVar18 = 0x1f - iVar18;
            }
            uStack_10c = (uVar16 - iVar18) + 0x1f;
            uVar6 = uStack_10c;
            if ((int)uVar2 < (int)uStack_10c) {
LAB_142feac8e:
              uStack_10c = uVar2;
              uVar6 = uVar2;
            }
          }
          do {
            if ((uStack_b0._4_4_ == uVar6) && (local_b8 == puVar1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            if ((bVar4) && (local_c8 == plVar9)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (!bVar4) goto LAB_142feafe3;
            plVar8 = *(longlong **)(*local_c8 + (longlong)(int)uStack_b0._4_4_ * 0x10);
            if (plVar8 != (longlong *)0x0) {
              lVar15 = FUN_1429f11d0();
              if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if ((bVar4) && (plVar8[3] == *plVar14)) goto LAB_142feaab9;
            }
            uStack_b0 = CONCAT44(uStack_b0._4_4_,(uint)uStack_b0 & ~uStack_bc);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_c0);
          } while( true );
        }
        uVar7 = FUN_1429bed90();
        plVar8 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar7);
LAB_142feaab9:
        if (plVar8 != (longlong *)0x0) {
          lVar15 = FUN_142a07000();
          plVar9 = (longlong *)plVar8[2];
          if (((int)plVar9[0x12] < *(int *)(lVar15 + 0x90)) ||
             (*(longlong *)(plVar9[0x11] + (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88))
          {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) {
LAB_142feadd9:
            lVar15 = plVar9[0x1f];
            local_f8 = 0;
            if (lVar15 == 0) {
              (**(code **)(*plVar9 + 0x368))(plVar9);
              lVar15 = plVar9[0x1f];
            }
            plVar9 = (longlong *)FUN_142227070(local_res10,lVar15,local_f8);
            lVar15 = FUN_142a07000();
            if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                lVar15 + 0x88)) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) {
              lVar15 = FUN_142a07000();
              if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              plVar11 = plVar8;
              if (!bVar4) {
                plVar11 = plVar19;
              }
              lVar15 = FUN_142a07000();
              if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              plVar12 = plVar19;
              if (bVar4) {
                plVar12 = plVar9;
              }
              (**(code **)(*plVar12 + 0x930))
                        (plVar12,plVar11[0xe3],CONCAT71((int7)((ulonglong)(lVar15 + 0x88) >> 8),1));
              FUN_1425d9a70(plVar12 + 0x11f,plVar11 + 0x11f);
            }
            else {
              lVar15 = FUN_142a232e0();
              if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (bVar4) {
                lVar15 = FUN_142a232e0();
                if ((*(int *)(plVar8[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar8[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                    lVar15 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                plVar11 = plVar8;
                if (!bVar4) {
                  plVar11 = plVar19;
                }
                lVar15 = FUN_142a232e0();
                if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                    lVar15 + 0x88)) {
                  bVar4 = false;
                }
                else {
                  bVar4 = true;
                }
                plVar12 = plVar19;
                if (bVar4) {
                  plVar12 = plVar9;
                }
                (**(code **)(*plVar12 + 0x928))(plVar12,plVar11[0xe5]);
              }
            }
            TArray<FName,FDefaultAllocator>::operator=(plVar9 + 0xde,plVar8 + 0xde);
          }
          else {
            lVar15 = FUN_142a232e0();
            plVar9 = (longlong *)plVar8[2];
            if (((int)plVar9[0x12] < *(int *)(lVar15 + 0x90)) ||
               (*(longlong *)(plVar9[0x11] + (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88
               )) {
              bVar4 = false;
            }
            else {
              bVar4 = true;
            }
            if (bVar4) goto LAB_142feadd9;
            plVar9 = (longlong *)FUN_142227070(local_res10,plVar8,0);
            if (plVar9 == (longlong *)0x0) {
LAB_142feadd1:
              plVar9 = plVar19;
            }
            else {
              lVar15 = FUN_1429f11d0();
              if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar15 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar15 + 0x90) * 8) !=
                  lVar15 + 0x88)) {
                bVar4 = false;
              }
              else {
                bVar4 = true;
              }
              if (!bVar4) goto LAB_142feadd1;
            }
          }
          FUN_142fe24b0(&local_a0,plVar9,plVar8,1);
          FUN_142fe6010(param_1,plVar9,plVar14,1);
        }
LAB_142feafe3:
        plVar14 = plVar14 + 4;
      } while (plVar14 != local_d8);
    }
    if (*(int *)(param_1 + 0x2c0) == 0) {
      plVar14 = *(longlong **)(param_1 + 0x118);
      uVar7 = FUN_1429bed90();
      lVar15 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar7);
      if (lVar15 != 0) {
        lVar10 = FUN_142fe2760(&local_d0,lVar15);
        if (lVar10 != 0) {
          FUN_142fe24b0(&local_a0,lVar10,lVar15,1);
        }
      }
    }
    FUN_142fe5be0(param_1,local_res10);
    lVar15 = local_res10;
    plVar14 = *(longlong **)(param_1 + 0x280);
    uVar7 = *(undefined8 *)(param_1 + 0x118);
    plVar8 = (longlong *)((longlong)*(int *)(param_1 + 0x288) & 0x1fffffffffffffff);
    if (plVar14 + *(int *)(param_1 + 0x288) < plVar14) {
      plVar8 = plVar19;
    }
    if (plVar8 != (longlong *)0x0) {
      do {
        if (*plVar14 != 0) {
          FUN_14301f9f0(*plVar14,lVar15,uVar7,param_1);
        }
        plVar14 = plVar14 + 1;
        plVar19 = (longlong *)((longlong)plVar19 + 1);
      } while (plVar19 != plVar8);
    }
    if (local_100 != 0) {
      plVar14 = local_e8 + 2;
      iVar18 = local_100;
      do {
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar14);
        plVar14 = plVar14 + 4;
        iVar18 = iVar18 + -1;
      } while (iVar18 != 0);
    }
    if (local_e8 != (longlong *)0x0) {
      FMemory::Free(local_e8);
    }
  }
  return;
}



// FUNCTION 142feb130 FUN_142feb130 body=140 status=ok
// SIG undefined FUN_142feb130(void)

void FUN_142feb130(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  plVar2 = *(longlong **)(param_1 + 0x280);
  uVar1 = *(undefined8 *)(param_1 + 0x118);
  uVar3 = (longlong)*(int *)(param_1 + 0x288) & 0x1fffffffffffffff;
  if (plVar2 + *(int *)(param_1 + 0x288) < plVar2) {
    uVar3 = uVar4;
  }
  if (uVar3 != 0) {
    do {
      if (*plVar2 != 0) {
        FUN_14301f9f0(*plVar2,param_2,uVar1,param_1);
      }
      plVar2 = plVar2 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar3);
  }
  return;
}



// FUNCTION 142feb1c0 FUN_142feb1c0 body=280 status=ok
// SIG undefined FUN_142feb1c0(void)

undefined8 FUN_142feb1c0(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_78 [32];
  longlong local_58;
  longlong local_48;
  longlong local_38;
  longlong local_28;
  
  if (param_1 != (longlong *)0x0) {
    lVar2 = (**(code **)(*param_1 + 0x148))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
      iVar1 = FUN_1428cf800(uVar3);
      if (iVar1 != 3) {
        FUN_14301f8f0();
        lVar2 = (**(code **)(*param_1 + 0x628))(param_1);
        if (lVar2 != 0) {
          _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
          FUN_142ff3000(lVar2,local_78);
          uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
          uVar3 = FUN_143019ed0(uVar3,local_78,1,0);
          if (local_28 != 0) {
            FMemory::Free();
          }
          if (local_38 != 0) {
            FMemory::Free();
          }
          if (local_48 != 0) {
            FMemory::Free();
          }
          if (local_58 != 0) {
            FMemory::Free();
          }
          return uVar3;
        }
        return 0;
      }
    }
  }
  return 0;
}



// FUNCTION 142feb2e0 FUN_142feb2e0 body=802 status=ok
// SIG undefined FUN_142feb2e0(void)

longlong * FUN_142feb2e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  longlong *plVar12;
  uint uVar13;
  bool bVar14;
  longlong *local_d8;
  uint local_d0;
  uint local_cc;
  longlong *local_c8;
  undefined4 local_b8 [2];
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  longlong local_98 [2];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong *local_68;
  int local_60;
  undefined1 local_58;
  
  plVar4 = (longlong *)0x0;
  plVar2 = (longlong *)param_1[0x4a];
  local_d8 = (longlong *)0x0;
  local_cc = 0;
  plVar5 = (longlong *)((longlong)(int)param_1[0x4b] & 0x1fffffffffffffff);
  if (plVar2 + (int)param_1[0x4b] < plVar2) {
    plVar5 = plVar4;
  }
  plVar6 = plVar4;
  plVar8 = plVar4;
  plVar9 = plVar4;
  plVar12 = plVar4;
  if (plVar5 != (longlong *)0x0) {
    do {
      lVar1 = *plVar2;
      if ((lVar1 != 0) && (*(char *)(lVar1 + 0x148) != '\0')) {
        iVar7 = (int)plVar8;
        local_d0 = iVar7 + 1;
        if ((int)plVar6 < (int)local_d0) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_d8,plVar8);
          plVar6 = (longlong *)(ulonglong)local_cc;
        }
        plVar8 = (longlong *)(ulonglong)local_d0;
        local_d8[iVar7] = lVar1;
        plVar9 = local_d8;
      }
      plVar2 = plVar2 + 1;
      plVar12 = (longlong *)((longlong)plVar12 + 1);
    } while (plVar12 != plVar5);
    if ((int)plVar8 != 0) {
      _guard_xfg_dispatch_icall_nop(local_b8,0,0x68);
      local_b8[0] = (**(code **)(*param_1 + 0x400))(param_1);
      local_b0 = param_1[0x41];
      local_a8 = param_1[0x42];
      local_a0 = param_1[0x43];
      TArray<FName,FDefaultAllocator>::operator=(local_98,param_1 + 0x44);
      TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(local_88,param_1 + 0x46);
      TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_78,param_1 + 0x48);
      TArray<FName,FDefaultAllocator>::operator=(&local_68,param_1 + 0x4a);
      local_58 = (undefined1)param_1[0x4c];
      local_c8 = (longlong *)0x0;
      plVar2 = (longlong *)
               ((ulonglong)((longlong)(plVar9 + (int)plVar8) + (7 - (longlong)plVar9)) >> 3);
      if (plVar9 + (int)plVar8 < plVar9) {
        plVar2 = plVar4;
      }
      plVar5 = local_68;
      plVar6 = plVar9;
      iVar7 = local_60;
      if (plVar2 != (longlong *)0x0) {
        do {
          lVar1 = *plVar9;
          if (iVar7 != 0) {
            bVar14 = *plVar5 != lVar1;
            plVar6 = plVar4;
            plVar8 = plVar4;
            plVar12 = plVar4;
            do {
              uVar10 = (uint)plVar8;
              uVar11 = uVar10;
              do {
                plVar6 = (longlong *)((longlong)plVar6 + 1);
                uVar11 = uVar11 + 1;
                plVar8 = (longlong *)(ulonglong)uVar11;
                if ((longlong)iVar7 <= (longlong)plVar6) break;
              } while (bVar14 == (plVar5[(longlong)plVar6] != lVar1));
              if (bVar14 != false) {
                uVar13 = (uint)plVar12;
                if (uVar13 != uVar10) {
                  _guard_xfg_dispatch_icall_nop
                            (plVar5 + (int)uVar13,plVar5 + (int)uVar10,
                             (longlong)(int)(uVar11 - uVar10) << 3);
                  plVar5 = local_68;
                }
                plVar12 = (longlong *)(ulonglong)(uVar13 + (uVar11 - uVar10));
              }
              bVar14 = (bool)(bVar14 ^ 1);
            } while ((longlong)plVar6 < (longlong)iVar7);
            iVar7 = (int)plVar12;
            local_60 = iVar7;
          }
          plVar9 = plVar9 + 1;
          local_c8 = (longlong *)((longlong)local_c8 + 1);
          plVar6 = local_d8;
        } while (local_c8 != plVar2);
      }
      lVar1 = param_1[0x24];
      if (lVar1 == 0) {
        lVar1 = FUN_1423407b0(param_1);
      }
      plVar2 = (longlong *)FUN_143019ed0(lVar1,local_b8,1,0);
      if (plVar2 != (longlong *)0x0) {
        uVar3 = FUN_14301f8f0();
        plVar4 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar3);
      }
      if (local_68 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (local_78[0] != 0) {
        FMemory::Free();
      }
      if (local_88[0] != 0) {
        FMemory::Free();
      }
      plVar9 = plVar6;
      param_1 = plVar4;
      if (local_98[0] != 0) {
        FMemory::Free();
      }
    }
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return param_1;
}



// FUNCTION 142feb610 FUN_142feb610 body=161 status=ok
// SIG undefined FUN_142feb610(void)

undefined8 FUN_142feb610(longlong param_1,uint param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 < 4) {
    iVar2 = 1;
  }
  else {
    uVar1 = (param_2 >> 1) + 8;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    iVar3 = 0x20;
    if (uVar1 != 0) {
      iVar3 = 0x1f - iVar2;
    }
    uVar1 = (param_2 >> 1) + 7;
    iVar2 = 0x1f;
    if (uVar1 != 0) {
      for (; uVar1 >> iVar2 == 0; iVar2 = iVar2 + -1) {
      }
    }
    if (uVar1 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = 1 << (~(byte)((iVar3 << 0x1a) >> 0x1f) & 0x20U - ('\x1f' - (char)iVar2) & 0x1f);
    }
  }
  if (0 < (int)param_2) {
    iVar3 = *(int *)(param_1 + 0x48);
    if (((iVar3 == 0) || (iVar3 < iVar2)) || ((iVar2 < iVar3 && (param_3 != '\0')))) {
      *(int *)(param_1 + 0x48) = iVar2;
      FUN_143010f60(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142feb6c0 FUN_142feb6c0 body=348 status=ok
// SIG undefined FUN_142feb6c0(void)

void FUN_142feb6c0(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_res20 [2];
  int local_28 [2];
  longlong *local_20;
  
  iVar3 = FUN_14233f450();
  if (((iVar3 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) &&
     (plVar1 = *(longlong **)(param_2 + 8), plVar1 != param_3)) {
    iVar3 = param_2[3];
    *(longlong **)(param_2 + 8) = param_3;
    if (param_3 != (longlong *)0x0) {
      if ((char)param_3[0x25] == '\x03') {
        FUN_14223ef90(param_3,*(byte *)(param_1 + 0x17) >> 3 & 1);
        FUN_14223ec50(param_3,1);
      }
      cVar2 = (**(code **)(*param_1 + 0x4b0))(param_1,param_3);
      if (cVar2 != '\0') {
        (**(code **)(*param_3 + 0x448))(param_3,param_1[0x23]);
      }
    }
    (**(code **)(*param_1 + 0x260))();
    if (*param_2 == -1) {
      *(int *)(param_1 + 0x39) = (int)param_1[0x39] + 1;
      *param_2 = (int)param_1[0x39];
      iVar4 = (int)param_1[0x39];
      if (iVar4 == -1) {
        iVar4 = 0;
      }
      *(int *)(param_1 + 0x39) = iVar4;
    }
    param_2[1] = param_2[1] + 1;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
              (param_1 + 0x2f);
    *(int *)((longlong)param_1 + 0x1cc) = *(int *)((longlong)param_1 + 0x1cc) + 1;
    if (*(int *)((longlong)param_1 + 0x1cc) == -1) {
      *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
    }
    param_1[0x44] = -1;
    FUN_143003f20(param_1);
    *(undefined1 *)(param_1 + 0x6d) = 1;
    TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x58);
    local_res20[0] = iVar3;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x5f,local_res20);
    local_28[0] = iVar3;
    local_20 = plVar1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x61,local_28);
    FUN_142227350(plVar1,0,1);
  }
  return;
}



// FUNCTION 142feb820 FUN_142feb820 body=2308 status=ok
// SIG undefined FUN_142feb820(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142feb820(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_538 [32];
  longlong local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  longlong local_4f8;
  longlong local_4f0;
  undefined1 local_4e8;
  undefined1 local_4e0;
  longlong local_4d8;
  longlong local_4c8;
  int local_4c0;
  int local_4bc;
  longlong *local_4b8;
  int local_4b0;
  longlong *local_4a8;
  int local_4a0;
  undefined1 local_498;
  undefined1 local_497;
  undefined8 local_490;
  undefined4 local_488;
  undefined4 local_480;
  undefined4 local_478;
  undefined1 local_474;
  undefined8 local_470;
  undefined4 local_468;
  undefined2 local_460 [4];
  undefined8 local_458;
  undefined4 local_450;
  longlong *local_448;
  longlong *local_440;
  undefined1 local_438 [8];
  longlong *local_430;
  undefined1 local_420;
  undefined8 local_418;
  undefined4 local_410;
  longlong *local_408;
  longlong *local_400;
  undefined1 local_3f0 [8];
  longlong *local_3e8;
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_538;
  plVar9 = (longlong *)(param_1 + 0x4f8);
  local_480 = 0;
  if ((longlong *)(param_2 + 0x108) != plVar9) {
    if ((*(int *)(param_2 + 0x110) == 0) ||
       (plVar7 = *(longlong **)(param_2 + 0x108), plVar7 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x500) != 0) &&
         (plVar7 = (longlong *)*plVar9, plVar7 != (longlong *)0x0)) {
        (**(code **)(*plVar7 + 0x28))(plVar7,0);
        if (*plVar9 != 0) {
          lVar11 = FMemory::Realloc(*plVar9,0,0);
          *plVar9 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x500) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x30))(plVar7,plVar9);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x528,param_2 + 0x118);
  plVar7 = (longlong *)(param_1 + 0x538);
  if ((longlong *)(param_2 + 0x138) != plVar7) {
    if ((*(int *)(param_2 + 0x140) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x138), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x540) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x540) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  *(undefined8 *)(param_1 + 0x5a8) = *(undefined8 *)(param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3a8,param_2 + 0x168);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5d8,param_2 + 0x178);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x5e8,param_2 + 0x188);
  plVar7 = (longlong *)(param_1 + 0x5c8);
  if ((longlong *)(param_2 + 0x198) != plVar7) {
    if ((*(int *)(param_2 + 0x1a0) == 0) ||
       (plVar2 = *(longlong **)(param_2 + 0x198), plVar2 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x5d0) != 0) &&
         (plVar2 = (longlong *)*plVar7, plVar2 != (longlong *)0x0)) {
        (**(code **)(*plVar2 + 0x28))(plVar2,0);
        if (*plVar7 != 0) {
          lVar11 = FMemory::Realloc(*plVar7,0,0);
          *plVar7 = lVar11;
        }
        *(undefined4 *)(param_1 + 0x5d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,plVar7);
    }
  }
  TAttribute<enum_ESelectionMode::Type>::operator=(param_1 + 0x3b8,param_2 + 0x1a8);
  *(undefined1 *)(param_1 + 0x610) = *(undefined1 *)(param_2 + 0x1d0);
  *(undefined1 *)(param_1 + 0x418) = *(undefined1 *)(param_2 + 0x201);
  *(undefined1 *)(param_1 + 0x419) = *(undefined1 *)(param_2 + 0x202);
  *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_2 + 0x204);
  *(undefined1 *)(param_1 + 0x611) = *(undefined1 *)(param_2 + 0x208);
  *(undefined1 *)(param_1 + 0x612) = *(undefined1 *)(param_2 + 0x209);
  *(undefined1 *)(param_1 + 0x5f8) = *(undefined1 *)(param_2 + 0x210);
  *(undefined1 *)(param_1 + 0x5f9) = *(undefined1 *)(param_2 + 0x211);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x600,param_2 + 0x218);
  pplVar10 = (longlong **)(param_2 + 0x228);
  if (((*(int *)(param_2 + 0x230) == 0) || (*pplVar10 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**pplVar10 + 0x18))(), cVar5 == '\0')) {
    plVar7 = (longlong *)FMemory::Realloc(0,0x20);
    iVar12 = 2;
    local_4a0 = 2;
    local_4a8 = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_GetPoolName_145a3c120;
      lVar11 = FDelegateHandle::GenerateNewID();
      plVar7[2] = lVar11;
    }
    pplVar10 = &local_4a8;
    bVar4 = false;
    bVar3 = true;
  }
  else {
    local_4b8 = (longlong *)0x0;
    local_4b0 = 0;
    if (((pplVar10 != &local_4b8) && (*(int *)(param_2 + 0x230) != 0)) &&
       (plVar7 = *pplVar10, plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,&local_4b8);
    }
    pplVar10 = &local_4b8;
    bVar4 = true;
    bVar3 = false;
    plVar7 = local_4a8;
    iVar12 = local_4a0;
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x508,pplVar10);
  if (bVar3) {
    if (iVar12 != 0) {
      if (plVar7 == (longlong *)0x0) goto LAB_142febb4e;
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      plVar7 = (longlong *)FMemory::Realloc(plVar7,0,0);
      local_4a8 = plVar7;
    }
    if (plVar7 != (longlong *)0x0) {
      FMemory::Free(plVar7);
    }
  }
LAB_142febb4e:
  if (bVar4) {
    if (local_4b0 != 0) {
      if (local_4b8 == (longlong *)0x0) goto LAB_142febba4;
      (**(code **)(*local_4b8 + 0x28))(local_4b8,0);
      if (local_4b8 != (longlong *)0x0) {
        local_4b8 = (longlong *)FMemory::Realloc(local_4b8,0,0);
      }
      local_4b0 = 0;
    }
    if (local_4b8 != (longlong *)0x0) {
      FMemory::Free(local_4b8);
    }
  }
LAB_142febba4:
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x518,param_2 + 0x238);
  local_4c8 = 0;
  local_4bc = 0;
  local_4c0 = 0;
  iVar12 = 0;
  if (((*(int *)(param_1 + 0x500) == 0) || (iVar12 = 0, (longlong *)*plVar9 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*(longlong *)*plVar9 + 0x18))(), iVar12 = local_4c0, cVar5 == '\0')) {
    local_4c0 = (0x23 - (uint)(iVar12 != 0)) + iVar12;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = (longlong)iVar12 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L"n OnGene",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"rateRow.",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0xa0020;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 0;
  }
  iVar12 = local_4c0;
  if (*(longlong *)(param_1 + 0x5a8) == 0) {
    lVar11 = (longlong)local_4c0;
    local_4c0 = (0x24 - (uint)(local_4c0 != 0)) + local_4c0;
    if (local_4bc < local_4c0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4c8,iVar12);
    }
    lVar11 = lVar11 - (ulonglong)(iVar12 != 0);
    builtin_wcsncpy((wchar_t *)(local_4c8 + lVar11 * 2),L"Please s",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x10 + lVar11 * 2),L"pecify a",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x20 + lVar11 * 2),L" ListIte",8);
    builtin_wcsncpy((wchar_t *)(local_4c8 + 0x30 + lVar11 * 2),L"msSource",8);
    *(undefined4 *)(local_4c8 + 0x40 + lVar11 * 2) = 0x20002e;
    *(undefined2 *)(local_4c8 + 0x44 + lVar11 * 2) = 10;
    *(undefined2 *)(local_4c8 + 0x46 + lVar11 * 2) = 0;
  }
  if ((local_4c0 == 0) || (local_4c0 + -1 < 1)) {
    local_508 = param_2 + 0x128;
    local_460[0] = 0x103;
    local_510 = param_2 + 0x1d8;
    local_518 = param_2 + 0x1c0;
    local_458 = 0;
    local_478 = 0;
    local_450 = 0;
    local_474 = 1;
    local_470 = 0;
    local_468 = 0;
    FUN_1419b0690(param_1,&local_478,param_2 + 0x150,local_460);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_470);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_458);
    if (*(longlong *)(param_1 + 0x310) != 0) {
      SScrollBox::SetConsumeMouseWheel
                (*(longlong *)(param_1 + 0x310),*(undefined1 *)(param_2 + 0x200));
      local_498 = *(undefined1 *)(param_2 + 0x1e8);
      local_497 = *(undefined1 *)(param_2 + 0x1e9);
      local_490 = 0;
      local_488 = 0;
      TBaseDelegate<FSlateBrush_const_*>::operator=(&local_490,param_2 + 0x1f0);
      lVar11 = *(longlong *)(param_1 + 0x310);
      *(undefined1 *)(lVar11 + 0x388) = local_498;
      *(undefined1 *)(lVar11 + 0x389) = local_497;
      TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x390,&local_490);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
    }
  }
  else {
    uVar8 = FText::FromString(local_3f0,&local_4c8);
    FText::FText(local_438,uVar8);
    local_420 = 1;
    local_418 = 0;
    local_410 = 0;
    lVar11 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar11 + 0x108,local_438);
    *(undefined1 *)(lVar11 + 0x120) = local_420;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x128,&local_418);
    plVar9 = (longlong *)operator_new(0x660);
    if (plVar9 == (longlong *)0x0) {
      plVar9 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar9 + 1) = 1;
      *(undefined4 *)((longlong)plVar9 + 0xc) = 1;
      *plVar9 = (longlong)&PTR_FUN_144043520;
      if (plVar9 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar7 = plVar9 + 2;
    local_408 = plVar7;
    local_400 = plVar9;
    FUN_14044f790(&local_408,plVar7);
    local_518 = 0x650;
    SWidget::SetDebugInfo
              (plVar7,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0xc3);
    local_4d8 = lVar11 + 0xf8;
    local_4f0 = lVar11 + 0xe8;
    local_4e0 = *(undefined1 *)(lVar11 + 0xf1);
    local_4f8 = lVar11 + 200;
    local_500 = lVar11 + 0x98;
    local_4e8 = *(undefined1 *)(lVar11 + 0xf0);
    local_510 = lVar11 + 0x78;
    local_518 = lVar11 + 0x60;
    local_508 = CONCAT44(local_508._4_4_,*(undefined4 *)(lVar11 + 0x90));
    SWidget::SWidgetConstruct(plVar7,lVar11,lVar11 + 0x30,lVar11 + 0x40);
    FUN_1419b0120(plVar7,lVar11);
    if (((char)plVar9[5] < '\0') || (cVar5 = (**(code **)(*plVar7 + 0x1e8))(plVar7), cVar5 != '\0'))
    {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar9 + 0x29) = *(byte *)((longlong)plVar9 + 0x29) | bVar6;
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar9 + 1) = (int)plVar9[1] + 1;
      UNLOCK();
    }
    *(undefined4 *)(param_1 + 0x238) = 2;
    *(undefined4 *)(param_1 + 0x23c) = 2;
    local_448 = plVar7;
    local_440 = plVar9;
    TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_448);
    if (plVar9 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
      LOCK();
      plVar7 = plVar9 + 1;
      lVar11 = *plVar7;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*plVar9)(plVar9);
        LOCK();
        piVar1 = (int *)((longlong)plVar9 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_418);
    if (local_430 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_430 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_430)(local_430);
        LOCK();
        piVar1 = (int *)((longlong)local_430 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_430 + 8))(local_430,1);
        }
      }
    }
    if (local_3e8 != (longlong *)0x0) {
      LOCK();
      plVar9 = local_3e8 + 1;
      lVar11 = *plVar9;
      *(int *)plVar9 = (int)*plVar9 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_3e8)(local_3e8);
        LOCK();
        piVar1 = (int *)((longlong)local_3e8 + 0xc);
        iVar12 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (**(code **)(*local_3e8 + 8))(local_3e8,1);
        }
      }
    }
  }
  if (local_4c8 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142fec130 FUN_142fec130 body=6830 status=ok
// SIG undefined FUN_142fec130(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fec130(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong **pplVar18;
  undefined1 auStack_19c8 [32];
  longlong local_19a8;
  longlong local_19a0;
  undefined4 local_1998;
  longlong local_1990;
  longlong local_1988;
  longlong local_1980;
  undefined1 local_1978;
  undefined1 local_1970;
  longlong local_1968;
  longlong local_1958;
  undefined1 local_1950;
  undefined1 local_194f;
  undefined1 local_194e;
  undefined1 local_194d;
  undefined1 local_194c;
  undefined1 local_194b;
  undefined1 local_194a;
  undefined1 local_1949;
  undefined8 local_1948;
  undefined4 uStack_1940;
  undefined4 uStack_193c;
  longlong *local_1938;
  longlong *plStack_1930;
  longlong *local_1928;
  longlong *plStack_1920;
  longlong local_1918;
  longlong *local_1910;
  longlong *local_1908;
  longlong *local_1900;
  longlong *local_18f8;
  undefined8 local_18f0;
  undefined4 local_18e8;
  undefined1 local_18e4;
  undefined8 local_18e0;
  undefined4 local_18d8;
  undefined4 local_18d0;
  undefined1 local_18cc;
  undefined8 local_18c8;
  undefined4 local_18c0;
  undefined4 local_18b8;
  undefined1 local_18b4;
  undefined8 local_18b0;
  undefined4 local_18a8;
  undefined4 local_18a0;
  undefined1 local_189c;
  undefined8 local_1898;
  undefined4 local_1890;
  longlong *local_1888;
  longlong *local_1880;
  undefined1 *local_1878;
  longlong *local_1870;
  longlong *local_1868;
  undefined1 *local_1860;
  longlong *local_1858;
  longlong *local_1850;
  undefined1 *local_1848;
  longlong *local_1840;
  longlong *local_1838;
  undefined1 *local_1830;
  longlong *local_1828;
  longlong *local_1820;
  undefined1 *local_1818;
  longlong *local_1810;
  longlong *local_1808;
  undefined1 *local_1800;
  longlong *local_17f8;
  longlong *local_17f0;
  undefined1 *local_17e8;
  longlong *local_17e0;
  longlong *local_17d8;
  undefined1 *local_17d0;
  longlong *local_17c8;
  longlong *local_17c0;
  longlong *local_17b8;
  longlong *local_17b0;
  longlong *local_17a8;
  longlong *local_17a0;
  longlong *local_1798;
  longlong *local_1790;
  longlong *local_1788;
  longlong *local_1780;
  longlong *local_1778;
  longlong *local_1770;
  longlong *local_1768;
  longlong *local_1760;
  undefined8 local_1758;
  undefined8 local_1750;
  undefined8 local_1748;
  undefined8 uStack_1740;
  undefined4 local_1738;
  undefined4 uStack_1734;
  undefined4 uStack_1730;
  undefined4 uStack_172c;
  undefined8 local_1728;
  longlong local_1720;
  undefined8 local_1718;
  undefined4 local_1710;
  undefined1 local_170c;
  undefined1 local_1708;
  longlong *local_1700;
  int local_16f8;
  undefined8 local_16f0;
  undefined8 local_16e8;
  undefined8 local_16e0;
  undefined8 uStack_16d8;
  undefined4 local_16d0;
  undefined4 uStack_16cc;
  undefined4 uStack_16c8;
  undefined4 uStack_16c4;
  undefined8 local_16c0;
  longlong local_16b8;
  undefined8 local_16b0;
  undefined4 local_16a8;
  undefined1 local_16a4;
  undefined1 local_16a0;
  longlong *local_1698;
  int local_1690;
  undefined8 local_1688;
  undefined8 local_1680;
  undefined8 local_1678;
  undefined8 uStack_1670;
  undefined4 local_1668;
  undefined4 uStack_1664;
  undefined4 uStack_1660;
  undefined4 uStack_165c;
  undefined8 local_1658;
  longlong local_1650;
  undefined8 local_1648;
  undefined4 local_1640;
  undefined1 local_163c;
  undefined1 local_1638;
  longlong *local_1630;
  int local_1628;
  undefined8 local_1620;
  undefined8 uStack_1618;
  undefined1 local_1610;
  undefined8 local_1608;
  undefined4 local_1600;
  undefined8 local_15f8;
  undefined8 uStack_15f0;
  undefined1 local_15e8;
  undefined8 local_15e0;
  undefined4 local_15d8;
  undefined4 local_15c8;
  undefined4 uStack_15c4;
  undefined4 uStack_15c0;
  undefined4 uStack_15bc;
  undefined4 local_15b8;
  undefined4 uStack_15b4;
  undefined4 uStack_15b0;
  undefined4 uStack_15ac;
  undefined4 local_15a8;
  undefined4 uStack_15a4;
  undefined4 uStack_15a0;
  undefined4 uStack_159c;
  longlong *local_1598;
  longlong *local_1590;
  longlong *local_1580;
  longlong *plStack_1578;
  longlong *local_1570;
  longlong *plStack_1568;
  undefined1 local_1558 [264];
  longlong local_1450;
  undefined1 local_1420 [16];
  undefined1 local_1410 [24];
  undefined1 local_13f8 [264];
  longlong local_12f0;
  undefined1 local_12c0 [16];
  undefined1 local_12b0 [24];
  undefined1 local_1298 [264];
  longlong local_1190;
  undefined1 local_1178 [264];
  longlong local_1070;
  undefined1 local_1058 [688];
  undefined1 local_da8 [688];
  undefined1 local_af8 [912];
  undefined1 local_768 [912];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_19c8;
  puVar14 = (undefined8 *)0x0;
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x108);
  local_1948 = FUN_142ff8fc0;
  uStack_1940 = 0;
  local_1918 = param_1;
  puVar6 = (undefined8 *)FUN_142fffd90();
  local_1688 = *puVar6;
  local_1678 = puVar6[2];
  uStack_1670 = puVar6[3];
  local_1680 = puVar6[1];
  local_1668 = *(undefined4 *)(puVar6 + 4);
  uStack_1664 = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_1660 = *(undefined4 *)(puVar6 + 5);
  uStack_165c = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_1658 = puVar6[6];
  local_1650 = puVar6[7];
  if (local_1650 != 0) {
    LOCK();
    *(int *)(local_1650 + 8) = *(int *)(local_1650 + 8) + 1;
    UNLOCK();
  }
  local_1648 = puVar6[8];
  local_1640 = *(undefined4 *)(puVar6 + 9);
  local_163c = *(undefined1 *)((longlong)puVar6 + 0x4c);
  local_1638 = 1;
  local_1630 = (longlong *)0x0;
  local_1628 = 0;
  local_15c8 = (undefined4)local_1948;
  uStack_15c4 = local_1948._4_4_;
  uStack_15c0 = uStack_1940;
  uStack_15bc = uStack_193c;
  lVar7 = STextBlock::FArguments::FArguments(local_3d8);
  FUN_1417f9360(lVar7 + 0x140,&local_1688);
  *(undefined1 *)(lVar7 + 400) = local_1638;
  pplVar18 = (longlong **)(lVar7 + 0x198);
  if (&local_1630 != pplVar18) {
    if ((local_1628 == 0) || (local_1630 == (longlong *)0x0)) {
      if ((*(int *)(lVar7 + 0x1a0) != 0) && (plVar8 = *pplVar18, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar8;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_1630 + 0x30))(local_1630,pplVar18);
    }
  }
  plVar8 = (longlong *)operator_new(0x660);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_18f8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144043520;
    local_18f8 = plVar8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar13 = plVar8 + 2;
  local_17e0 = plVar13;
  local_17d8 = plVar8;
  FUN_14044f790(&local_17e0,plVar13);
  local_17d0 = &local_1950;
  local_19a8 = 0x650;
  SWidget::SetDebugInfo
            (plVar13,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x43);
  lVar7 = FUN_142fdd380(lVar7,param_1,&local_15c8);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar13,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_1768 = plVar13;
  local_1760 = plVar8;
  puVar9 = (undefined8 *)operator_new(0x88);
  puVar6 = puVar14;
  if (puVar9 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar9);
    *puVar9 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar6 = puVar9;
  }
  uVar10 = SVerticalBox::FSlot::AutoHeight(puVar6);
  uVar10 = FUN_1417f9c30(uVar10,&local_1768);
  lVar7 = SCanvas::FArguments::FArguments(local_1178);
  iVar3 = *(int *)(lVar7 + 0x110);
  *(int *)(lVar7 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar7 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x108,iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar3 * 8) = uVar10;
  plVar8 = (longlong *)operator_new(0x248);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_1900 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_144d503e8;
    local_1900 = plVar8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar13 = plVar8 + 2;
  local_17f8 = plVar13;
  local_17f0 = plVar8;
  FUN_14044f790(&local_17f8,plVar13);
  local_17e8 = &local_194f;
  local_19a8 = 0x238;
  SWidget::SetDebugInfo
            (plVar13,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x3f);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SHorizontalBox::Construct(plVar13,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_18a0 = 0x3f4ccccd;
  local_1948 = FUN_142ffac60;
  local_189c = 1;
  local_1898 = 0;
  local_1890 = 0;
  uStack_1940 = 0;
  local_1778 = plVar13;
  local_1770 = plVar8;
  puVar6 = (undefined8 *)FUN_142fffd90();
  local_16f0 = *puVar6;
  local_16e0 = puVar6[2];
  uStack_16d8 = puVar6[3];
  local_16e8 = puVar6[1];
  local_16d0 = *(undefined4 *)(puVar6 + 4);
  uStack_16cc = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_16c8 = *(undefined4 *)(puVar6 + 5);
  uStack_16c4 = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_16c0 = puVar6[6];
  local_16b8 = puVar6[7];
  if (local_16b8 != 0) {
    LOCK();
    *(int *)(local_16b8 + 8) = *(int *)(local_16b8 + 8) + 1;
    UNLOCK();
  }
  local_16b0 = puVar6[8];
  local_16a8 = *(undefined4 *)(puVar6 + 9);
  local_16a4 = *(undefined1 *)((longlong)puVar6 + 0x4c);
  local_16a0 = 1;
  local_1698 = (longlong *)0x0;
  local_1690 = 0;
  local_15a8 = (undefined4)local_1948;
  uStack_15a4 = local_1948._4_4_;
  uStack_15a0 = uStack_1940;
  uStack_159c = uStack_193c;
  lVar7 = STextBlock::FArguments::FArguments(local_768);
  FUN_1417f9360(lVar7 + 0x140,&local_16f0);
  *(undefined1 *)(lVar7 + 400) = local_16a0;
  pplVar18 = (longlong **)(lVar7 + 0x198);
  if (&local_1698 != pplVar18) {
    if ((local_1690 == 0) || (local_1698 == (longlong *)0x0)) {
      if ((*(int *)(lVar7 + 0x1a0) != 0) && (plVar8 = *pplVar18, plVar8 != (longlong *)0x0)) {
        (**(code **)(*plVar8 + 0x28))(plVar8,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar8 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar8;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_1698 + 0x30))(local_1698,pplVar18);
    }
  }
  plVar8 = (longlong *)operator_new(0x660);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
    local_1908 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_FUN_144043520;
    local_1908 = plVar8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar13 = plVar8 + 2;
  local_1810 = plVar13;
  local_1808 = plVar8;
  FUN_14044f790(&local_1810,plVar13);
  local_1800 = &local_194e;
  local_19a8 = 0x650;
  SWidget::SetDebugInfo
            (plVar13,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x37);
  lVar7 = FUN_142fdd380(lVar7,param_1,&local_15a8);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar13,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_17c8 = plVar13;
  local_17c0 = plVar8;
  puVar6 = (undefined8 *)operator_new(0x88);
  if (puVar6 != (undefined8 *)0x0) {
    FUN_1417f13c0(puVar6);
    *puVar6 = &PTR__scalar_deleting_destructor__144042bf8;
    puVar14 = puVar6;
  }
  uVar10 = SVerticalBox::FSlot::AutoHeight(puVar14);
  uVar10 = FUN_1417f9c30(uVar10,&local_17c8);
  lVar7 = SCanvas::FArguments::FArguments(local_1298);
  iVar3 = *(int *)(lVar7 + 0x110);
  *(int *)(lVar7 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar7 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar7 + 0x108,iVar3);
  }
  *(undefined8 *)(*(longlong *)(lVar7 + 0x108) + (longlong)iVar3 * 8) = uVar10;
  plVar8 = (longlong *)operator_new(0x248);
  if (plVar8 == (longlong *)0x0) {
    plVar8 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar8 + 1) = 1;
    *(undefined4 *)((longlong)plVar8 + 0xc) = 1;
    *plVar8 = (longlong)&PTR_DestroyObject_144d503e8;
    if (plVar8 != (longlong *)0xfffffffffffffff0) {
      FUN_1417f4670();
    }
  }
  plVar13 = plVar8 + 2;
  local_1828 = plVar13;
  local_1820 = plVar8;
  FUN_14044f790(&local_1828,plVar13);
  local_1818 = &local_194d;
  local_19a8 = 0x238;
  SWidget::SetDebugInfo
            (plVar13,"SVerticalBox",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x33);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar13,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  SHorizontalBox::Construct(plVar13,lVar7);
  if (((char)plVar8[5] < '\0') || (cVar4 = (**(code **)(*plVar13 + 0x1e8))(plVar13), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar8 + 0x29) = *(byte *)((longlong)plVar8 + 0x29) | bVar5;
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar8 + 1) = (int)plVar8[1] + 1;
    UNLOCK();
  }
  local_18e8 = 0x3dcccccd;
  local_18e4 = 1;
  local_18e0 = 0;
  local_18d8 = 0;
  local_17b8 = plVar13;
  local_17b0 = plVar8;
  lVar7 = SSplitter::Slot();
  *(undefined4 *)(lVar7 + 0x38) = 0x3f4ccccd;
  *(undefined1 *)(lVar7 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x40,&local_1898);
  lVar11 = SSplitter::Slot();
  *(undefined4 *)(lVar11 + 0x38) = 0x3dcccccd;
  *(undefined1 *)(lVar11 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar11 + 0x40,&local_18e0);
  lVar12 = SSplitter::FArguments::FArguments(local_13f8);
  *(undefined4 *)(lVar12 + 0x120) = 0;
  uVar10 = FUN_140801a00(lVar11,&local_17b8);
  plVar13 = (longlong *)(lVar12 + 0x108);
  iVar3 = *(int *)(lVar12 + 0x110);
  *(int *)(lVar12 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar12 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
  }
  *(undefined8 *)(*plVar13 + (longlong)iVar3 * 8) = uVar10;
  uVar10 = FUN_140801a00(lVar7,&local_1778);
  iVar3 = *(int *)(lVar12 + 0x110);
  *(int *)(lVar12 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar12 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar13,iVar3);
  }
  *(undefined8 *)(*plVar13 + (longlong)iVar3 * 8) = uVar10;
  plVar13 = (longlong *)operator_new(0x288);
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)0x0;
    local_1910 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d6a6e0;
    local_1910 = plVar13;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      SSplitter::SSplitter();
    }
  }
  plVar15 = plVar13 + 2;
  local_1840 = plVar15;
  local_1838 = plVar13;
  FUN_14044f790(&local_1840,plVar15);
  local_1830 = &local_194c;
  local_19a8 = 0x278;
  SWidget::SetDebugInfo
            (plVar15,"SSplitter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x2e);
  local_1998 = *(undefined4 *)(lVar12 + 0x90);
  local_1968 = lVar12 + 0xf8;
  local_1980 = lVar12 + 0xe8;
  local_1970 = *(undefined1 *)(lVar12 + 0xf1);
  local_1988 = lVar12 + 200;
  local_1990 = lVar12 + 0x98;
  local_1978 = *(undefined1 *)(lVar12 + 0xf0);
  local_19a0 = lVar12 + 0x78;
  local_19a8 = lVar12 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar12,lVar12 + 0x30,lVar12 + 0x40);
  FUN_141978760(plVar15,lVar12);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_15f8 = 0x4080000040800000;
  uStack_15f0 = 0x4080000040800000;
  local_15e8 = 1;
  local_15e0 = 0;
  local_15d8 = 0;
  lVar7 = FUN_141886d30(local_da8);
  *(undefined1 *)(lVar7 + 0x130) = 1;
  *(undefined8 *)(lVar7 + 0x120) = 0x4080000040800000;
  *(undefined8 *)(lVar7 + 0x128) = 0x4080000040800000;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x138,&local_15e0);
  pplVar18 = (longlong **)(lVar7 + 0x108);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_1938 = plVar15;
  plStack_1930 = plVar13;
  if (&local_1938 != pplVar18) {
    local_1938 = *pplVar18;
    plStack_1930 = *(longlong **)(lVar7 + 0x110);
    *pplVar18 = plVar15;
    *(longlong **)(lVar7 + 0x110) = plVar13;
    local_1570 = plVar15;
    plStack_1568 = plVar13;
  }
  plVar13 = plStack_1930;
  if (plStack_1930 != (longlong *)0x0) {
    LOCK();
    plVar15 = plStack_1930 + 1;
    lVar11 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*plStack_1930)(plStack_1930);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1930 + 8))(plStack_1930,1);
      }
    }
  }
  plVar13 = (longlong *)operator_new(0x398);
  if (plVar13 != (longlong *)0x0) {
    *(undefined4 *)(plVar13 + 1) = 1;
    *(undefined4 *)((longlong)plVar13 + 0xc) = 1;
    *plVar13 = (longlong)&PTR_FUN_144d61068;
    if (plVar13 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar15 = plVar13 + 2;
  local_1858 = plVar15;
  local_1850 = plVar13;
  FUN_14044f790(&local_1858,plVar15);
  local_1848 = &local_194b;
  local_19a8 = 0x388;
  SWidget::SetDebugInfo
            (plVar15,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x29);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar15,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_141971ea0(plVar15,lVar7);
  if (((char)plVar13[5] < '\0') || (cVar4 = (**(code **)(*plVar15 + 0x1e8))(plVar15), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar13 + 0x29) = *(byte *)((longlong)plVar13 + 0x29) | bVar5;
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
  }
  local_18d0 = 0x3f000000;
  local_18c8 = 0;
  local_18c0 = 0;
  local_1948 = FUN_142ffe680;
  uStack_1940 = 0;
  local_18cc = 1;
  local_1798 = plVar15;
  local_1790 = plVar13;
  puVar14 = (undefined8 *)FUN_142ffcac0();
  local_1758 = *puVar14;
  local_1748 = puVar14[2];
  uStack_1740 = puVar14[3];
  local_1750 = puVar14[1];
  local_1738 = *(undefined4 *)(puVar14 + 4);
  uStack_1734 = *(undefined4 *)((longlong)puVar14 + 0x24);
  uStack_1730 = *(undefined4 *)(puVar14 + 5);
  uStack_172c = *(undefined4 *)((longlong)puVar14 + 0x2c);
  local_1728 = puVar14[6];
  local_1720 = puVar14[7];
  if (local_1720 != 0) {
    LOCK();
    *(int *)(local_1720 + 8) = *(int *)(local_1720 + 8) + 1;
    UNLOCK();
  }
  local_1718 = puVar14[8];
  local_1710 = *(undefined4 *)(puVar14 + 9);
  local_170c = *(undefined1 *)((longlong)puVar14 + 0x4c);
  local_1708 = 1;
  local_1700 = (longlong *)0x0;
  local_16f8 = 0;
  local_15b8 = (undefined4)local_1948;
  uStack_15b4 = local_1948._4_4_;
  uStack_15b0 = uStack_1940;
  uStack_15ac = uStack_193c;
  lVar7 = STextBlock::FArguments::FArguments(local_af8);
  FUN_1417f9360(lVar7 + 0x140,&local_1758);
  *(undefined1 *)(lVar7 + 400) = local_1708;
  pplVar18 = (longlong **)(lVar7 + 0x198);
  if (&local_1700 != pplVar18) {
    if ((local_16f8 == 0) || (local_1700 == (longlong *)0x0)) {
      if ((*(int *)(lVar7 + 0x1a0) != 0) && (plVar15 = *pplVar18, plVar15 != (longlong *)0x0)) {
        (**(code **)(*plVar15 + 0x28))(plVar15,0);
        if (*pplVar18 != (longlong *)0x0) {
          plVar15 = (longlong *)FMemory::Realloc(*pplVar18,0,0);
          *pplVar18 = plVar15;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_1700 + 0x30))(local_1700,pplVar18);
    }
  }
  plVar15 = (longlong *)operator_new(0x660);
  if (plVar15 == (longlong *)0x0) {
    plVar15 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar15 + 1) = 1;
    *(undefined4 *)((longlong)plVar15 + 0xc) = 1;
    *plVar15 = (longlong)&PTR_FUN_144043520;
    if (plVar15 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar16 = plVar15 + 2;
  local_1888 = plVar16;
  local_1880 = plVar15;
  FUN_14044f790(&local_1888,plVar16);
  local_1878 = &local_194a;
  local_19a8 = 0x650;
  SWidget::SetDebugInfo
            (plVar16,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x21);
  lVar7 = FUN_142fdd380(lVar7,local_1918,&local_15b8);
  local_1998 = *(undefined4 *)(lVar7 + 0x90);
  local_1968 = lVar7 + 0xf8;
  local_1980 = lVar7 + 0xe8;
  local_1970 = *(undefined1 *)(lVar7 + 0xf1);
  local_1988 = lVar7 + 200;
  local_1990 = lVar7 + 0x98;
  local_1978 = *(undefined1 *)(lVar7 + 0xf0);
  local_19a0 = lVar7 + 0x78;
  local_19a8 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar15 + 2,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar15 + 2,lVar7);
  if (((char)plVar15[5] < '\0') ||
     (cVar4 = (**(code **)(plVar15[2] + 0x1e8))(plVar15 + 2), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar15 + 0x29) = *(byte *)((longlong)plVar15 + 0x29) | bVar5;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1610 = 1;
  local_1620 = 0x4080000040800000;
  uStack_1618 = 0x4080000040800000;
  local_1608 = 0;
  local_1600 = 0;
  lVar7 = FUN_141886d30(local_1058);
  *(undefined1 *)(lVar7 + 0x130) = 1;
  *(undefined8 *)(lVar7 + 0x120) = 0x4080000040800000;
  *(undefined8 *)(lVar7 + 0x128) = 0x4080000040800000;
  local_1958 = lVar7;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x138,&local_1608);
  pplVar18 = (longlong **)(lVar7 + 0x108);
  plVar16 = plVar15 + 2;
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
  }
  local_1928 = plVar16;
  plStack_1920 = plVar15;
  if (&local_1928 != pplVar18) {
    local_1928 = *pplVar18;
    plStack_1920 = *(longlong **)(lVar7 + 0x110);
    *pplVar18 = plVar16;
    *(longlong **)(lVar7 + 0x110) = plVar15;
    local_1580 = plVar16;
    plStack_1578 = plVar15;
  }
  plVar16 = plStack_1920;
  if (plStack_1920 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_1920 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_1920)(plStack_1920);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_1920 + 8))(plStack_1920,1);
      }
    }
  }
  plVar16 = (longlong *)operator_new(0x398);
  if (plVar16 == (longlong *)0x0) {
    plVar16 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar16 + 1) = 1;
    *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
    *plVar16 = (longlong)&PTR_FUN_144d61068;
    if (plVar16 != (longlong *)0xfffffffffffffff0) {
      SBorder::SBorder();
    }
  }
  plVar17 = plVar16 + 2;
  local_1870 = plVar17;
  local_1868 = plVar16;
  FUN_14044f790(&local_1870,plVar17);
  local_1860 = &local_1949;
  local_19a8 = 0x388;
  SWidget::SetDebugInfo
            (plVar17,"SBorder",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x1d);
  local_1968 = local_1958 + 0xf8;
  local_1980 = local_1958 + 0xe8;
  local_1988 = local_1958 + 200;
  local_1990 = local_1958 + 0x98;
  local_19a0 = local_1958 + 0x78;
  local_19a8 = local_1958 + 0x60;
  local_1970 = *(undefined1 *)(local_1958 + 0xf1);
  local_1978 = *(undefined1 *)(local_1958 + 0xf0);
  local_1998 = *(undefined4 *)(local_1958 + 0x90);
  SWidget::SWidgetConstruct(plVar17,local_1958,local_1958 + 0x30,local_1958 + 0x40);
  FUN_141971ea0(plVar17,local_1958);
  if (((char)plVar16[5] < '\0') || (cVar4 = (**(code **)(*plVar17 + 0x1e8))(plVar17), cVar4 != '\0')
     ) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar16 + 0x29) = *(byte *)((longlong)plVar16 + 0x29) | bVar5;
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar16 + 1) = (int)plVar16[1] + 1;
    UNLOCK();
  }
  local_18b8 = 0x3f000000;
  local_18b0 = 0;
  local_18a8 = 0;
  local_18b4 = 1;
  local_17a8 = plVar17;
  local_17a0 = plVar16;
  local_1948 = (code *)SSplitter::Slot();
  *(undefined4 *)((longlong)local_1948 + 0x38) = 0x3f000000;
  *(undefined1 *)((longlong)local_1948 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=((longlong)local_1948 + 0x40,&local_18c8);
  lVar7 = SSplitter::Slot();
  *(undefined4 *)(lVar7 + 0x38) = 0x3f000000;
  *(undefined1 *)(lVar7 + 0x3c) = 1;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x40,&local_18b0);
  lVar11 = SSplitter::FArguments::FArguments(local_1558);
  *(undefined4 *)(lVar11 + 0x120) = 1;
  local_1958 = lVar11;
  local_18f0 = FUN_140801a00(lVar7,&local_17a8);
  plVar17 = (longlong *)(lVar11 + 0x108);
  iVar3 = *(int *)(lVar11 + 0x110);
  *(int *)(lVar11 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar3);
  }
  *(undefined8 *)(*plVar17 + (longlong)iVar3 * 8) = local_18f0;
  local_1948 = (code *)FUN_140801a00(local_1948,&local_1798);
  iVar3 = *(int *)(lVar11 + 0x110);
  *(int *)(lVar11 + 0x110) = iVar3 + 1;
  if (*(int *)(lVar11 + 0x114) < iVar3 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar17,iVar3);
  }
  *(code **)(*plVar17 + (longlong)iVar3 * 8) = local_1948;
  plVar17 = (longlong *)operator_new(0x288);
  if (plVar17 == (longlong *)0x0) {
    plVar17 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar17 + 1) = 1;
    *(undefined4 *)((longlong)plVar17 + 0xc) = 1;
    *plVar17 = (longlong)&PTR_FUN_144d6a6e0;
    if (plVar17 != (longlong *)0xfffffffffffffff0) {
      SSplitter::SSplitter();
    }
  }
  plVar2 = plVar17 + 2;
  local_1598 = plVar2;
  local_1590 = plVar17;
  FUN_14044f790(&local_1598,plVar2);
  local_19a8 = 0x278;
  SWidget::SetDebugInfo
            (plVar2,"SSplitter",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderDetails.cpp"
             ,0x18);
  local_1968 = local_1958 + 0xf8;
  local_1980 = local_1958 + 0xe8;
  local_1988 = local_1958 + 200;
  local_1990 = local_1958 + 0x98;
  local_19a0 = local_1958 + 0x78;
  local_19a8 = local_1958 + 0x60;
  local_1970 = *(undefined1 *)(local_1958 + 0xf1);
  local_1978 = *(undefined1 *)(local_1958 + 0xf0);
  local_1998 = *(undefined4 *)(local_1958 + 0x90);
  SWidget::SWidgetConstruct(plVar17 + 2,local_1958,local_1958 + 0x30,local_1958 + 0x40);
  FUN_141978760(plVar17 + 2,local_1958);
  if (((char)plVar17[5] < '\0') || (cVar4 = (**(code **)(plVar17[2] + 0x1e8))(), cVar4 != '\0')) {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar17 + 0x29) = *(byte *)((longlong)plVar17 + 0x29) | bVar5;
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
    UNLOCK();
  }
  local_1788 = plVar17 + 2;
  *(undefined8 *)(local_1918 + 0x238) = 0;
  local_1780 = plVar17;
  TSlotBase<FSimpleSlot>::operator[](local_1918 + 0x218,&local_1788);
  if (plVar17 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar17 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
    LOCK();
    plVar2 = plVar17 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
    LOCK();
    plVar2 = plVar17 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar17)(plVar17);
      LOCK();
      piVar1 = (int *)((longlong)plVar17 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar17 + 8))(plVar17,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1410);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_1420);
  if (local_1450 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1558);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18b0);
  if (plVar16 != (longlong *)0x0) {
    LOCK();
    plVar17 = plVar16 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
    LOCK();
    plVar17 = plVar16 + 1;
    lVar7 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar16)(plVar16);
      LOCK();
      piVar1 = (int *)((longlong)plVar16 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar16 + 8))(plVar16,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1870);
  FUN_14188af70(local_1058);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1608);
  if (plVar15 != (longlong *)0x0) {
    LOCK();
    plVar16 = plVar15 + 1;
    lVar7 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
    LOCK();
    plVar16 = plVar15 + 1;
    lVar7 = *plVar16;
    *(int *)plVar16 = (int)*plVar16 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar15)(plVar15);
      LOCK();
      piVar1 = (int *)((longlong)plVar15 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar15 + 8))(plVar15,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1888);
  FUN_140691150(local_af8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1700);
  FSlateFontInfo::~FSlateFontInfo(&local_1758);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18c8);
  if (plVar13 != (longlong *)0x0) {
    LOCK();
    plVar15 = plVar13 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar15 = plVar13 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1858);
  FUN_14188af70(local_da8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_15e0);
  plVar13 = local_1910;
  if (local_1910 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_1910 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1910)(local_1910);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    LOCK();
    plVar15 = plVar13 + 1;
    lVar7 = *plVar15;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1840);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_12b0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_12c0);
  if (local_12f0 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_13f8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_18e0);
  if (plVar8 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar8 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar13 = plVar8 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1828);
  if (local_1190 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1298);
  plVar8 = local_1908;
  if (local_1908 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1908 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1908)(local_1908);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_1810);
  FUN_140691150(local_768);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1698);
  FSlateFontInfo::~FSlateFontInfo(&local_16f0);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1898);
  plVar8 = local_1900;
  if (local_1900 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_1900 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_1900)(local_1900);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
    LOCK();
    plVar13 = plVar8 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar8)(plVar8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_17f8);
  if (local_1070 != 0) {
    FMemory::Free();
  }
  FUN_140456c70(local_1178);
  plVar8 = local_18f8;
  if (local_18f8 != (longlong *)0x0) {
    LOCK();
    plVar13 = local_18f8 + 1;
    lVar7 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_18f8)(local_18f8);
      LOCK();
      piVar1 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar8 + 8))(plVar8,1);
      }
    }
  }
  TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_17e0);
  FUN_140691150(local_3d8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1630);
  FSlateFontInfo::~FSlateFontInfo(&local_1688);
  return;
}



// FUNCTION 142fedbe0 FUN_142fedbe0 body=1289 status=ok
// SIG undefined FUN_142fedbe0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fedbe0(longlong param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong *plVar10;
  longlong **pplVar11;
  undefined1 auStack_548 [32];
  longlong local_528;
  longlong local_520;
  undefined4 local_518;
  longlong local_510;
  longlong local_508;
  longlong local_500;
  undefined1 local_4f8;
  undefined1 local_4f0;
  longlong local_4e8;
  longlong *local_4d8;
  int local_4d0;
  undefined4 local_4c8;
  undefined1 local_4c4;
  longlong local_4c0;
  undefined4 local_4b8;
  undefined1 local_4b0 [8];
  longlong *local_4a8;
  undefined1 local_498;
  undefined8 local_490;
  undefined4 local_488;
  undefined8 local_480;
  undefined8 local_478;
  undefined4 local_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined4 uStack_454;
  undefined8 local_450;
  longlong *local_448;
  undefined8 local_440;
  undefined4 local_438;
  undefined1 local_434;
  undefined1 local_430;
  longlong *local_428;
  int local_420;
  undefined8 local_418;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  longlong *local_408;
  longlong *local_400;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong *local_3e8;
  longlong *local_3e0;
  undefined1 local_3c8 [912];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_548;
  *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_2 + 0x108);
  uStack_410 = 0;
  local_418 = FUN_142ff8c60;
  local_4c8 = 1;
  local_4c4 = 1;
  local_4c0 = 0;
  local_4b8 = 0;
  puVar6 = (undefined8 *)FUN_142ffcac0();
  local_480 = *puVar6;
  local_470 = *(undefined4 *)(puVar6 + 2);
  uStack_46c = *(undefined4 *)((longlong)puVar6 + 0x14);
  uStack_468 = *(undefined4 *)(puVar6 + 3);
  uStack_464 = *(undefined4 *)((longlong)puVar6 + 0x1c);
  local_478 = puVar6[1];
  local_460 = *(undefined4 *)(puVar6 + 4);
  uStack_45c = *(undefined4 *)((longlong)puVar6 + 0x24);
  uStack_458 = *(undefined4 *)(puVar6 + 5);
  uStack_454 = *(undefined4 *)((longlong)puVar6 + 0x2c);
  local_450 = puVar6[6];
  local_448 = (longlong *)puVar6[7];
  if (local_448 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_448 + 1) = (int)local_448[1] + 1;
    UNLOCK();
  }
  local_440 = puVar6[8];
  local_438 = *(undefined4 *)(puVar6 + 9);
  local_434 = *(undefined1 *)((longlong)puVar6 + 0x4c);
  local_430 = 1;
  local_428 = (longlong *)0x0;
  local_420 = 0;
  lVar7 = STextBlock::FArguments::FArguments(local_3c8);
  FUN_1417f9360(lVar7 + 0x140,&local_480);
  *(undefined1 *)(lVar7 + 400) = local_430;
  pplVar11 = (longlong **)(lVar7 + 0x198);
  if (&local_428 != pplVar11) {
    if ((local_420 == 0) || (local_428 == (longlong *)0x0)) {
      if ((*(int *)(lVar7 + 0x1a0) != 0) && (plVar10 = *pplVar11, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x28))(plVar10,0);
        if (*pplVar11 != (longlong *)0x0) {
          plVar10 = (longlong *)FMemory::Realloc(*pplVar11,0,0);
          *pplVar11 = plVar10;
        }
        *(undefined4 *)(lVar7 + 0x1a0) = 0;
      }
    }
    else {
      (**(code **)(*local_428 + 0x30))(local_428,pplVar11);
    }
  }
  plVar10 = (longlong *)(lVar7 + 0x338);
  *(undefined4 *)(lVar7 + 0x330) = 1;
  *(undefined1 *)(lVar7 + 0x334) = 1;
  if (((&local_4c0 != plVar10) && (*(int *)(lVar7 + 0x340) != 0)) &&
     (plVar3 = (longlong *)*plVar10, plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,0);
    if (*plVar10 != 0) {
      lVar8 = FMemory::Realloc(*plVar10,0,0);
      *plVar10 = lVar8;
    }
    *(undefined4 *)(lVar7 + 0x340) = 0;
  }
  local_3f8 = (undefined4)local_418;
  uStack_3f4 = local_418._4_4_;
  uStack_3f0 = uStack_410;
  uStack_3ec = uStack_40c;
  uVar9 = FUN_14187ce90(&local_4d8,param_1,&local_3f8);
  FText::FText(local_4b0);
  local_498 = 1;
  local_490 = 0;
  local_488 = 0;
  TBaseDelegate<FSlateBrush_const_*>::operator=(&local_490,uVar9);
  FText::operator=(lVar7 + 0x108,local_4b0);
  *(undefined1 *)(lVar7 + 0x120) = local_498;
  TBaseDelegate<FSlateBrush_const_*>::operator=(lVar7 + 0x128,&local_490);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_490);
  if (local_4a8 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_4a8 + 1;
    lVar8 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_4a8)(local_4a8);
      LOCK();
      piVar1 = (int *)((longlong)local_4a8 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_4a8 + 8))(local_4a8,1);
      }
    }
  }
  if (local_4d0 != 0) {
    if (local_4d8 == (longlong *)0x0) goto LAB_142fede7a;
    (**(code **)(*local_4d8 + 0x28))(local_4d8,0);
    if (local_4d8 != (longlong *)0x0) {
      local_4d8 = (longlong *)FMemory::Realloc(local_4d8,0,0);
    }
    local_4d0 = 0;
  }
  if (local_4d8 != (longlong *)0x0) {
    FMemory::Free(local_4d8);
  }
LAB_142fede7a:
  plVar10 = (longlong *)operator_new(0x660);
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  else {
    *(undefined4 *)(plVar10 + 1) = 1;
    *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
    *plVar10 = (longlong)&PTR_FUN_144043520;
    if (plVar10 != (longlong *)0xfffffffffffffff0) {
      FUN_1419a9150();
    }
  }
  plVar3 = plVar10 + 2;
  local_3e8 = plVar3;
  local_3e0 = plVar10;
  FUN_14044f790(&local_3e8,plVar3);
  local_528 = 0x650;
  SWidget::SetDebugInfo
            (plVar3,"STextBlock",
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Gearbox\\GbxInventory\\Private\\Inventory\\GearBuilder\\SGearBuilderHintBar.cpp"
             ,0x11);
  local_518 = *(undefined4 *)(lVar7 + 0x90);
  local_4e8 = lVar7 + 0xf8;
  local_500 = lVar7 + 0xe8;
  local_4f0 = *(undefined1 *)(lVar7 + 0xf1);
  local_508 = lVar7 + 200;
  local_510 = lVar7 + 0x98;
  local_4f8 = *(undefined1 *)(lVar7 + 0xf0);
  local_520 = lVar7 + 0x78;
  local_528 = lVar7 + 0x60;
  SWidget::SWidgetConstruct(plVar3,lVar7,lVar7 + 0x30,lVar7 + 0x40);
  FUN_1419b0120(plVar3,lVar7);
  if (((char)plVar10[5] < '\0') || (cVar4 = (**(code **)(*plVar3 + 0x1e8))(plVar3), cVar4 != '\0'))
  {
    bVar5 = 1;
  }
  else {
    bVar5 = 0;
  }
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
  *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar5;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  *(undefined8 *)(param_1 + 0x238) = 0;
  local_408 = plVar3;
  local_400 = plVar10;
  TSlotBase<FSimpleSlot>::operator[](param_1 + 0x218,&local_408);
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar10 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar3 = plVar10 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    LOCK();
    plVar3 = plVar10 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
  }
  FUN_140691150(local_3c8);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_428);
  plVar10 = local_448;
  if (local_448 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_448 + 1;
    lVar7 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_448)(local_448);
      LOCK();
      piVar1 = (int *)((longlong)plVar10 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*local_448 + 8))(local_448,1);
      }
    }
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_4c0);
  return;
}



// FUNCTION 142fee0f0 FUN_142fee0f0 body=844 status=ok
// SIG undefined FUN_142fee0f0(void)

void FUN_142fee0f0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_142ff72d0;
  local_88 = 0x42ff72d0;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_142fe0290(param_1 + 0x2b8,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 142fee440 FUN_142fee440 body=844 status=ok
// SIG undefined FUN_142fee440(void)

void FUN_142fee440(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_142ff7540;
  local_88 = 0x42ff7540;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_142fe0290(param_1 + 0x2b8,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 142fee790 FUN_142fee790 body=844 status=ok
// SIG undefined FUN_142fee790(void)

void FUN_142fee790(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_142ff77b0;
  local_88 = 0x42ff77b0;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_142fe0290(param_1 + 0x2b8,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 142feeae0 FUN_142feeae0 body=844 status=ok
// SIG undefined FUN_142feeae0(void)

void FUN_142feeae0(longlong param_1,longlong param_2,longlong *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *local_98;
  undefined4 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  longlong *plStack_38;
  undefined1 local_30;
  undefined1 local_28 [16];
  
  *(undefined1 *)(param_1 + 0x439) = 0;
  *(undefined8 *)(param_1 + 0x3a8) = *(undefined8 *)(param_2 + 0x108);
  *(undefined8 *)(param_1 + 0x3b0) = *(undefined8 *)(param_2 + 0x110);
  uStack_90 = 0;
  local_98 = FUN_142ff7a20;
  local_88 = 0x42ff7a20;
  uStack_84 = 1;
  uStack_80 = 0;
  local_78 = 0;
  local_70 = 1;
  FUN_14068c560(local_68,param_1,&local_88);
  *(undefined8 *)(param_1 + 0x2f8) = local_78;
  *(undefined1 *)(param_1 + 0x300) = local_70;
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x308,local_68);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_68);
  local_58 = 0x3f800000;
  uStack_50 = 0x3f8000003f800000;
  local_48 = 0;
  local_98 = FUN_14069b950;
  uStack_90 = 0;
  local_40 = 0;
  plStack_38 = (longlong *)0x0;
  local_30 = 1;
  FUN_14068c6c0(local_28,param_1,&local_98);
  FUN_142fe0290(param_1 + 0x2b8,&local_58);
  TBaseDelegate<FText>::~TBaseDelegate<FText>(local_28);
  plVar2 = plStack_38;
  if (plStack_38 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_38 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_38)(plStack_38);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_38 + 8))(plStack_38,1);
      }
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3b8);
  if ((longlong *)(param_2 + 0x118) != plVar2) {
    if ((*(int *)(param_2 + 0x120) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x118), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3c0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3c0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  plVar2 = (longlong *)(param_1 + 0x3c8);
  if ((longlong *)(param_2 + 0x128) != plVar2) {
    if ((*(int *)(param_2 + 0x130) == 0) ||
       (plVar6 = *(longlong **)(param_2 + 0x128), plVar6 == (longlong *)0x0)) {
      if ((*(int *)(param_1 + 0x3d0) != 0) &&
         (plVar6 = (longlong *)*plVar2, plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        if (*plVar2 != 0) {
          lVar4 = FMemory::Realloc(*plVar2,0,0);
          *plVar2 = lVar4;
        }
        *(undefined4 *)(param_1 + 0x3d0) = 0;
      }
    }
    else {
      (**(code **)(*plVar6 + 0x30))(plVar6,plVar2);
    }
  }
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3e0,param_2 + 0x138);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x3f0,param_2 + 0x148);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x400,param_2 + 0x158);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1 + 0x410,param_2 + 0x168);
  plVar2 = (longlong *)param_3[1];
  lVar4 = *param_3;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
      UNLOCK();
    }
  }
  lVar5 = lVar4 + 0x420;
  if (lVar4 == 0) {
    lVar5 = 0;
  }
  *(longlong *)(param_1 + 0x390) = lVar5;
  plVar6 = *(longlong **)(param_1 + 0x398);
  if (plVar2 != plVar6) {
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
      UNLOCK();
      plVar6 = *(longlong **)(param_1 + 0x398);
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
    *(longlong **)(param_1 + 0x398) = plVar2;
  }
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar4 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      plVar6 = plVar2 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plVar2)(plVar2);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar2 + 8))(plVar2,1);
        }
      }
    }
  }
  *(undefined1 *)(param_1 + 0x3a4) = *(undefined1 *)(param_2 + 0x1a0);
  return;
}



// FUNCTION 142feee30 FUN_142feee30 body=78 status=ok
// SIG undefined FUN_142feee30(void)

void FUN_142feee30(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a3c060;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_145a3c0a8;
  }
  return;
}



// FUNCTION 142feee80 CreateCopy body=48 status=ok
// SIG undefined CreateCopy(void)

void TBaseFunctorDelegateInstance<FString___cdecl(TSharedPtr<FInterfaceContainer,0>),<lambda_5e27373bf3904ac0086c7d4deb00b610>_>
     ::CreateCopy(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_145a3c120;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  }
  return;
}



// FUNCTION 142feeeb0 FUN_142feeeb0 body=94 status=ok
// SIG undefined FUN_142feeeb0(void)

void FUN_142feeeb0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145a396a8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_145a396f0;
  }
  return;
}



// FUNCTION 142feef10 FUN_142feef10 body=94 status=ok
// SIG undefined FUN_142feef10(void)

void FUN_142feef10(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145a39738;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_GetPoolName_145a39780;
  }
  return;
}



// FUNCTION 142feef70 FUN_142feef70 body=84 status=ok
// SIG undefined FUN_142feef70(void)

void FUN_142feef70(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145a39668;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 142feefd0 FUN_142feefd0 body=84 status=ok
// SIG undefined FUN_142feefd0(void)

void FUN_142feefd0(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_GetPoolName_145a397c8;
    puVar2[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar2[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    puVar2[3] = *(undefined8 *)(param_1 + 0x18);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
  }
  return;
}



// FUNCTION 142fef030 FUN_142fef030 body=387 status=ok
// SIG undefined FUN_142fef030(void)

undefined8 FUN_142fef030(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 local_res8 [4];
  undefined2 *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [2];
  undefined4 local_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_58 = 0;
  local_50 = 0;
  FConfigCacheIni::GetString(DAT_1468b6148,L"GearBuilder",param_2,&local_58,&DAT_1468e2410);
  FString::PrintfImpl(&local_68,L"%lsSize",param_2);
  iVar3 = 0;
  puVar4 = &DAT_143f3eda8;
  if (local_60 != 0) {
    puVar4 = local_68;
  }
  FConfigCacheIni::GetInt(DAT_1468b6148,L"GearBuilder",puVar4,local_res8,&DAT_1468e2410);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  local_38 = 0;
  local_34 = 0;
  local_28 = DAT_1464aa6e0;
  uStack_24 = DAT_1464aa6e4;
  uStack_20 = DAT_1464aa6e8;
  uStack_1c = DAT_1464aa6ec;
  local_30 = 0;
  plVar1 = (longlong *)FPaths::EngineContentDir(local_48);
  if ((int)local_50 != 0) {
    iVar3 = (int)local_50 + -1;
  }
  if (((int)plVar1[1] != 0) || (iVar2 = 2, iVar3 == -1)) {
    iVar2 = 1;
  }
  local_68 = (undefined2 *)*plVar1;
  *plVar1 = 0;
  local_60 = (int)plVar1[1];
  local_5c = *(int *)((longlong)plVar1 + 0xc);
  plVar1[1] = 0;
  if (local_5c < iVar2 + local_60 + iVar3) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_68);
  }
  FString::PathAppend(&local_68,local_58,iVar3);
  FSlateFontInfo::FSlateFontInfo(param_1,&local_68,local_res8[0],0,&local_38);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142fef1c0 FUN_142fef1c0 body=624 status=ok
// SIG undefined FUN_142fef1c0(void)

longlong * FUN_142fef1c0(longlong *param_1,char param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  
  if (param_1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*param_1 + 0x148))();
  }
  plVar4 = (longlong *)0x0;
  lVar9 = 0;
  if ((lVar2 == 0) || (cVar1 = FUN_143003610(param_4), cVar1 == '\0')) {
    plVar4 = (longlong *)0x0;
  }
  else {
    if (((param_2 == '\0') || (*(char *)(*(longlong *)(param_4 + 2) + 0x169) == '\0')) ||
       ((lVar6 = *(longlong *)(*(longlong *)(param_4 + 2) + 0x1d8), lVar6 != 0 &&
        (*(char *)(lVar6 + 0x38) == '\0')))) {
      plVar4 = (longlong *)FUN_143019ed0(lVar2,param_4,1,0);
    }
    else {
      lVar9 = FUN_142d624e0(lVar2);
      if (lVar9 != 0) {
        uVar8 = 0xffffffff;
        if (*(char *)(*(longlong *)(param_4 + 2) + 0x16a) == '\0') {
          uVar10 = 0xffffffff;
        }
        else {
          uVar10 = *param_4;
        }
        lVar6 = *(longlong *)(*(longlong *)(param_4 + 2) + 0x90);
        if (lVar6 != 0) {
          lVar3 = FUN_1428dfc70();
          lVar7 = lVar6;
          do {
            if (lVar7 == lVar3) goto LAB_142fef2a0;
            lVar7 = *(longlong *)(lVar7 + 0x30);
          } while (lVar7 != 0);
        }
        lVar6 = 0;
LAB_142fef2a0:
        plVar4 = (longlong *)FUN_142d62550(lVar9,lVar6,uVar10);
        if ((plVar4 == (longlong *)0x0) &&
           (plVar4 = (longlong *)FUN_143019ed0(lVar2,param_4,1), plVar4 != (longlong *)0x0)) {
          if (*(char *)(*(longlong *)(param_4 + 2) + 0x16a) != '\0') {
            uVar8 = *param_4;
          }
          FUN_142d55a80(lVar9,plVar4,uVar8);
        }
      }
    }
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_14301f8f0();
      lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
      if (((lVar6 != 0) && (param_2 != '\0')) && (lVar7 = *(longlong *)(lVar6 + 0x208), lVar7 != 0))
      {
        if (lVar9 != 0) {
          *(undefined1 *)(lVar6 + 0x340) = 1;
        }
        local_58 = 0;
        local_50 = 0;
        local_4c = 0;
        local_44 = 0;
        if (*(longlong *)(lVar7 + 0x160) != 0) {
          lVar3 = FUN_143025260();
          lVar9 = *(longlong *)(lVar7 + 0x160);
          for (lVar6 = lVar9; lVar6 != 0; lVar6 = *(longlong *)(lVar6 + 0x30)) {
            if (lVar6 == lVar3) goto LAB_142fef3c0;
          }
        }
        lVar9 = 0;
LAB_142fef3c0:
        plVar4 = (longlong *)
                 FUN_142ff1380(lVar2,lVar9,1,plVar4,*(undefined8 *)(lVar7 + 0x1d8),0,&local_4c,
                               param_3,&local_58,0,0);
      }
    }
  }
  return plVar4;
}



// FUNCTION 142fef430 FUN_142fef430 body=334 status=ok
// SIG undefined FUN_142fef430(void)

void FUN_142fef430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  bool bVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined1 local_res8 [8];
  longlong *local_28;
  int local_20;
  
  if (param_1[0xad] != 0) {
    lVar7 = 0;
    uVar5 = FUN_1428e7a40();
    AActor::GetComponentsByClass(param_1[0xad],&local_28,uVar5);
    plVar3 = local_28 + local_20;
    for (plVar8 = local_28; plVar8 != plVar3; plVar8 = plVar8 + 1) {
      lVar1 = *plVar8;
      lVar6 = FUN_1429bed90();
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (lVar7 = FUN_142fef580(param_1,lVar1,local_res8), lVar7 != 0)) break;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
    if (lVar7 == 0) {
      plVar3 = (longlong *)param_1[0x90];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x3b0))(plVar3,1);
        param_1[0x90] = 0;
      }
      plVar3 = (longlong *)param_1[0x91];
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x3b0))(plVar3,1);
        param_1[0x91] = 0;
        return;
      }
    }
    else if ((*(byte *)((longlong)param_1 + 0x4a4) & 0x20) == 0) {
      (**(code **)(*param_1 + 0x708))(param_1,lVar7);
    }
  }
  return;
}



// FUNCTION 142fef580 FUN_142fef580 body=2091 status=ok
// SIG undefined FUN_142fef580(void)

undefined8 FUN_142fef580(longlong param_1,longlong param_2,undefined1 *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint *puVar15;
  longlong *plVar16;
  uint uVar17;
  longlong *plVar18;
  longlong local_res20;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined2 *local_98;
  int local_90;
  undefined8 local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  *param_3 = 0;
  if (param_2 == 0) {
    return 0;
  }
  lVar8 = FUN_142a07000();
  if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
      != lVar8 + 0x88)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if (!bVar5) {
    lVar8 = FUN_142a232e0();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) {
      return 0;
    }
    plVar18 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x480) == 0) {
      plVar10 = (longlong *)(param_1 + 0x2b0);
      uStack_b4 = 1;
      uVar3 = *(uint *)(param_1 + 0x2d8);
      puVar1 = (uint *)(param_1 + 0x2c0);
      local_b8 = 0;
      uStack_a4 = 0;
      uStack_a0 = 0;
      if (uVar3 != 0) {
        puVar15 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar15 = puVar1;
        }
        uVar4 = *puVar15;
        plVar11 = plVar18;
        plVar16 = plVar18;
        while (uVar4 == 0) {
          iVar7 = (int)plVar11;
          uStack_a0 = (int)plVar16 + 0x20;
          plVar16 = (longlong *)(ulonglong)uStack_a0;
          local_b8 = iVar7 + 1;
          plVar11 = (longlong *)(ulonglong)local_b8;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_142fefaae;
          uVar4 = puVar15[(longlong)iVar7 + 1];
        }
        uStack_b4 = uVar4 - 1 & uVar4 ^ uVar4;
        iVar7 = 0x1f;
        if (uStack_b4 != 0) {
          for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uStack_b4 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_a4 = (uStack_a0 - iVar7) + 0x1f;
        if ((int)uVar3 < (int)uStack_a4) {
LAB_142fefaae:
          uStack_a4 = uVar3;
        }
      }
      uVar4 = *(uint *)(param_1 + 0x2d8);
      uStack_70 = CONCAT44(uStack_a4,0xffffffff);
      local_68 = CONCAT44(uStack_9c,uStack_a0);
      uStack_58 = CONCAT44(uStack_b4,local_b8);
      local_a8 = -1 << ((byte)uVar4 & 0x1f);
      uVar17 = uVar4 & 0xffffffe0;
      uStack_80 = local_b8;
      uStack_7c = uStack_b4;
      puStack_b0 = puVar1;
      uStack_a4 = uVar4;
      local_78 = puVar1;
      local_60 = plVar10;
      puStack_50 = puVar1;
      uStack_48 = uStack_70;
      uStack_40 = local_68;
      local_88 = plVar10;
      if (uVar4 != uVar3) {
        puVar15 = *(uint **)(param_1 + 0x2d0);
        if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
          puVar15 = puVar1;
        }
        uVar13 = puVar15[(int)uVar4 >> 5] & local_a8;
        iVar7 = (int)uVar4 >> 5;
        while (uVar13 == 0) {
          uVar17 = uVar17 + 0x20;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
          goto LAB_142fefb86;
          uVar13 = puVar15[(longlong)iVar7 + 1];
          local_a8 = 0xffffffff;
          iVar7 = iVar7 + 1;
        }
        uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
        iVar7 = 0x1f;
        if (uVar13 != 0) {
          for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
          }
        }
        if (uVar13 == 0) {
          iVar7 = 0x20;
        }
        else {
          iVar7 = 0x1f - iVar7;
        }
        uStack_a4 = (uVar17 - iVar7) + 0x1f;
        uVar4 = uStack_a4;
        if ((int)uVar3 < (int)uStack_a4) {
LAB_142fefb86:
          uStack_a4 = uVar3;
          uVar4 = uVar3;
        }
      }
      while( true ) {
        if ((uStack_70._4_4_ == uVar4) && (local_78 == puVar1)) {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
        if ((bVar5) && (local_88 == plVar10)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) break;
        plVar11 = *(longlong **)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x10);
        local_res20 = plVar11[3];
        FName::ToString(&local_res20,&local_98);
        puVar9 = (undefined8 *)FName::ToString(&DAT_146b45820,&local_b8);
        if (*(int *)(puVar9 + 1) == 0) {
          puVar14 = &DAT_143f3eda8;
        }
        else {
          puVar14 = (undefined2 *)*puVar9;
        }
        puVar12 = &DAT_143f3eda8;
        if (local_90 != 0) {
          puVar12 = local_98;
        }
        iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
        if (local_98 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        if (CONCAT44(uStack_b4,local_b8) != 0) {
          FMemory::Free();
        }
        if (iVar7 == 0) {
          lVar8 = FUN_142a232e0();
          if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
              != lVar8 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if (!bVar5) {
            plVar11 = plVar18;
          }
          *(longlong **)(param_1 + 0x480) = plVar11;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
      }
    }
    plVar10 = *(longlong **)(param_1 + 0x480);
    bVar6 = *(byte *)(param_2 + 0x2f0) & 0x40;
    if (plVar10 != (longlong *)0x0) {
      if (bVar6 != 0) {
        return 0;
      }
      if (*(longlong *)(param_2 + 0x728) != plVar10[0xe5]) {
        (**(code **)(*plVar10 + 0x928))();
        plVar10 = *(longlong **)(param_1 + 0x480);
      }
      TArray<FName,FDefaultAllocator>::operator=(plVar10 + 0xde,param_2 + 0x6f0);
      goto LAB_142fefcef;
    }
    if (bVar6 != 0) {
      return 0;
    }
    plVar10 = (longlong *)FUN_142227070(param_1,param_2,DAT_146b45820);
    if (plVar10 == (longlong *)0x0) {
LAB_142fefd64:
      plVar10 = plVar18;
    }
    else {
      lVar8 = FUN_142a232e0();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
          lVar8 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) goto LAB_142fefd64;
    }
    *(longlong **)(param_1 + 0x480) = plVar10;
    if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
      (**(code **)(*plVar10 + 0x5b8))(plVar10,0);
    }
    *param_3 = 1;
LAB_142fefcef:
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x480) + 200);
    *pbVar2 = *pbVar2 | 4;
    pbVar2 = (byte *)(*(longlong *)(param_1 + 0x480) + 0x24c);
    *pbVar2 = *pbVar2 | 0x40;
    return *(undefined8 *)(param_1 + 0x480);
  }
  plVar18 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x488) == 0) {
    plVar10 = (longlong *)(param_1 + 0x2b0);
    uStack_b4 = 1;
    uVar3 = *(uint *)(param_1 + 0x2d8);
    puVar1 = (uint *)(param_1 + 0x2c0);
    local_b8 = 0;
    uStack_a4 = 0;
    uStack_a0 = 0;
    if (uVar3 != 0) {
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar4 = *puVar15;
      plVar11 = plVar18;
      plVar16 = plVar18;
      while (uVar4 == 0) {
        iVar7 = (int)plVar11;
        uStack_a0 = (int)plVar16 + 0x20;
        plVar16 = (longlong *)(ulonglong)uStack_a0;
        local_b8 = iVar7 + 1;
        plVar11 = (longlong *)(ulonglong)local_b8;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142fef6be;
        uVar4 = puVar15[(longlong)iVar7 + 1];
      }
      uStack_b4 = uVar4 - 1 & uVar4 ^ uVar4;
      iVar7 = 0x1f;
      if (uStack_b4 != 0) {
        for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_b4 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_a4 = (uStack_a0 - iVar7) + 0x1f;
      if ((int)uVar3 < (int)uStack_a4) {
LAB_142fef6be:
        uStack_a4 = uVar3;
      }
    }
    uVar4 = *(uint *)(param_1 + 0x2d8);
    uStack_70 = CONCAT44(uStack_a4,0xffffffff);
    local_68 = CONCAT44(uStack_9c,uStack_a0);
    uStack_58 = CONCAT44(uStack_b4,local_b8);
    local_a8 = -1 << ((byte)uVar4 & 0x1f);
    uVar17 = uVar4 & 0xffffffe0;
    uStack_80 = local_b8;
    uStack_7c = uStack_b4;
    puStack_b0 = puVar1;
    uStack_a4 = uVar4;
    local_78 = puVar1;
    local_60 = plVar10;
    puStack_50 = puVar1;
    uStack_48 = uStack_70;
    uStack_40 = local_68;
    local_88 = plVar10;
    if (uVar4 != uVar3) {
      puVar15 = *(uint **)(param_1 + 0x2d0);
      if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
        puVar15 = puVar1;
      }
      uVar13 = puVar15[(int)uVar4 >> 5] & local_a8;
      iVar7 = (int)uVar4 >> 5;
      while (uVar13 == 0) {
        uVar17 = uVar17 + 0x20;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
        goto LAB_142fef796;
        uVar13 = puVar15[(longlong)iVar7 + 1];
        local_a8 = 0xffffffff;
        iVar7 = iVar7 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar7 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      uStack_a4 = (uVar17 - iVar7) + 0x1f;
      uVar4 = uStack_a4;
      if ((int)uVar3 < (int)uStack_a4) {
LAB_142fef796:
        uStack_a4 = uVar3;
        uVar4 = uVar3;
      }
    }
    while( true ) {
      if ((uStack_70._4_4_ == uVar4) && (local_78 == puVar1)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((bVar5) && (local_88 == plVar10)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (!bVar5) break;
      plVar11 = *(longlong **)(*local_88 + (longlong)(int)uStack_70._4_4_ * 0x10);
      local_res20 = plVar11[3];
      FName::ToString(&local_res20,&local_98);
      puVar9 = (undefined8 *)FName::ToString(&DAT_146b45768,&local_b8);
      if (*(int *)(puVar9 + 1) == 0) {
        puVar14 = &DAT_143f3eda8;
      }
      else {
        puVar14 = (undefined2 *)*puVar9;
      }
      puVar12 = &DAT_143f3eda8;
      if (local_90 != 0) {
        puVar12 = local_98;
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar12,puVar14);
      if (local_98 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      if (CONCAT44(uStack_b4,local_b8) != 0) {
        FMemory::Free();
      }
      if (iVar7 == 0) {
        lVar8 = FUN_142a07000();
        if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
            != lVar8 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
          plVar11 = plVar18;
        }
        *(longlong **)(param_1 + 0x488) = plVar11;
      }
      uStack_70 = CONCAT44(uStack_70._4_4_,(uint)uStack_70 & ~uStack_7c);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    }
  }
  plVar10 = *(longlong **)(param_1 + 0x488);
  bVar6 = *(byte *)(param_2 + 0x2f0) & 0x40;
  if (plVar10 != (longlong *)0x0) {
    if (bVar6 != 0) {
      return 0;
    }
    if (*(longlong *)(param_2 + 0x718) != plVar10[0xe3]) {
      (**(code **)(*plVar10 + 0x930))(plVar10,*(longlong *)(param_2 + 0x718),1);
      plVar10 = *(longlong **)(param_1 + 0x488);
    }
    TArray<FName,FDefaultAllocator>::operator=(plVar10 + 0xde,param_2 + 0x6f0);
    goto LAB_142fef902;
  }
  if (bVar6 != 0) {
    return 0;
  }
  plVar10 = (longlong *)FUN_142227070(param_1,param_2,DAT_146b45768);
  if (plVar10 == (longlong *)0x0) {
LAB_142fef98c:
    plVar10 = plVar18;
  }
  else {
    lVar8 = FUN_142a07000();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8) !=
        lVar8 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (!bVar5) goto LAB_142fef98c;
  }
  *(longlong **)(param_1 + 0x488) = plVar10;
  if ((*(byte *)(param_1 + 0x4a4) & 0x20) != 0) {
    (**(code **)(*plVar10 + 0x5b8))(plVar10,0);
  }
  *param_3 = 1;
LAB_142fef902:
  pbVar2 = (byte *)(*(longlong *)(param_1 + 0x488) + 200);
  *pbVar2 = *pbVar2 | 4;
  pbVar2 = (byte *)(*(longlong *)(param_1 + 0x488) + 0x24c);
  *pbVar2 = *pbVar2 | 0x40;
  pbVar2 = (byte *)(*(longlong *)(param_1 + 0x488) + 0x2f0);
  *pbVar2 = *pbVar2 & 0xf7;
  return *(undefined8 *)(param_1 + 0x488);
}



// FUNCTION 142fefdb0 FUN_142fefdb0 body=1048 status=ok
// SIG undefined FUN_142fefdb0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142fefdb0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong *_Src;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  char local_d8;
  longlong local_d0;
  longlong *local_c8;
  uint local_c0;
  uint local_bc;
  longlong *local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong *local_98;
  longlong *local_90;
  int local_88;
  longlong *local_80;
  int local_78;
  undefined1 local_68 [48];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  if (*(longlong *)(param_1 + 0x568) != 0) {
    plVar8 = (longlong *)0x0;
    iVar11 = 0;
    local_c8 = (longlong *)0x0;
    local_bc = 0;
    local_d0 = param_1;
    uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
    AActor::GetComponentsByClass(*(undefined8 *)(param_1 + 0x568),&local_80,uVar4);
    local_98 = local_80;
    plVar7 = local_80 + local_78;
    plVar14 = plVar8;
    _Src = plVar8;
    local_b0 = plVar7;
    if (local_80 != plVar7) {
      do {
        lVar1 = *local_98;
        if (lVar1 != 0) {
          lVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) {
            local_d8 = '\0';
            uVar4 = AGFreezeCharacterCue::GetPrivateStaticClass();
            AActor::GetComponentsByClass(param_1,&local_90,uVar4);
            plVar7 = local_90 + local_88;
            plVar9 = local_90;
            local_b8 = plVar7;
            cVar10 = '\0';
            if (local_90 != plVar7) {
              do {
                lVar5 = *plVar9;
                if (lVar5 != 0) {
                  lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
                  if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                       (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                    bVar2 = false;
                  }
                  else {
                    bVar2 = true;
                  }
                  plVar7 = local_b8;
                  if ((bVar2) && (*(longlong *)(lVar5 + 0x6f0) == *(longlong *)(lVar1 + 0x6f0))) {
                    iVar11 = (int)plVar14;
                    local_d8 = '\x01';
                    local_c0 = iVar11 + 1;
                    if ((int)plVar8 < (int)local_c0) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_c8,plVar14);
                      plVar8 = (longlong *)(ulonglong)local_bc;
                      _Src = local_c8;
                    }
                    plVar14 = (longlong *)(ulonglong)local_c0;
                    _Src[iVar11] = lVar5;
                    plVar7 = local_b8;
                  }
                }
                plVar9 = plVar9 + 1;
                cVar10 = local_d8;
              } while (plVar9 != plVar7);
            }
            if (local_90 != (longlong *)0x0) {
              FMemory::Free(local_90);
            }
            param_1 = local_d0;
            plVar7 = local_b0;
            if (cVar10 == '\0') {
              local_a8 = 0;
              lVar5 = FUN_142227070(local_d0,lVar1,0);
              plVar7 = local_b0;
              if (lVar5 != 0) {
                lVar6 = AGFreezeCharacterCue::GetPrivateStaticClass();
                if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
                  bVar2 = false;
                }
                else {
                  bVar2 = true;
                }
                plVar7 = local_b0;
                if (bVar2) {
                  *(undefined1 *)(lVar5 + 0xca) = 0;
                  lVar6 = *(longlong *)(param_1 + 0x488);
                  if ((lVar6 == 0) && (lVar6 = *(longlong *)(param_1 + 0x480), lVar6 == 0)) {
                    lVar6 = *(longlong *)(param_1 + 0x168);
                  }
                  local_a0 = 0;
                  FUN_142382f60(lVar5,lVar6,&DAT_146532184,0);
                  uVar4 = FUN_14238d0c0(lVar1,local_68);
                  local_e8 = 0;
                  FUN_142398770(lVar5,uVar4,0,0);
                  FUN_1425fcab0(lVar5,0);
                  iVar11 = (int)plVar14;
                  local_c0 = iVar11 + 1;
                  if ((int)plVar8 < (int)local_c0) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (&local_c8,plVar14);
                    plVar8 = (longlong *)(ulonglong)local_bc;
                    _Src = local_c8;
                  }
                  plVar14 = (longlong *)(ulonglong)local_c0;
                  _Src[iVar11] = lVar5;
                  plVar7 = local_b0;
                  param_1 = local_d0;
                }
              }
            }
          }
        }
        iVar11 = (int)plVar14;
        local_98 = local_98 + 1;
      } while (local_98 != plVar7);
    }
    uVar12 = 0;
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
    lVar1 = local_d0;
    if (0 < iVar11) {
      plVar7 = *(longlong **)(param_1 + 0x490);
      uVar13 = (longlong)*(int *)(local_d0 + 0x498) & 0x1fffffffffffffff;
      if (plVar7 + *(int *)(local_d0 + 0x498) < plVar7) {
        uVar13 = 0;
      }
      if (uVar13 != 0) {
        do {
          plVar14 = (longlong *)*plVar7;
          if (_Src != _Src + iVar11) {
            plVar8 = _Src;
            do {
              if (*(longlong *)(*plVar8 + 0x6f0) == plVar14[0xde]) goto LAB_142ff0112;
              plVar8 = plVar8 + 1;
            } while (plVar8 != _Src + iVar11);
          }
          (**(code **)(*plVar14 + 0x3b0))(plVar14,0);
LAB_142ff0112:
          plVar7 = plVar7 + 1;
          uVar12 = uVar12 + 1;
        } while (uVar12 != uVar13);
      }
    }
    plVar7 = (longlong *)(lVar1 + 0x490);
    *(undefined4 *)(lVar1 + 0x498) = 0;
    if (*(int *)(lVar1 + 0x49c) != 0) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7,0);
    }
    if (0 < iVar11) {
      iVar3 = *(int *)(lVar1 + 0x498);
      if (*(int *)(lVar1 + 0x49c) < iVar3 + iVar11) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar7);
        iVar3 = *(int *)(lVar1 + 0x498);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*plVar7 + (longlong)iVar3 * 8),_Src,(longlong)iVar11 << 3);
      *(int *)(lVar1 + 0x498) = *(int *)(lVar1 + 0x498) + iVar11;
    }
    if (_Src != (longlong *)0x0) {
      FMemory::Free(_Src);
    }
  }
  return;
}



// FUNCTION 142ff01f0 FUN_142ff01f0 body=576 status=ok
// SIG undefined FUN_142ff01f0(void)

undefined8 * FUN_142ff01f0(undefined8 *param_1,undefined8 *param_2)

{
  short sVar1;
  short *psVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  short *psVar8;
  longlong lVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  byte *pbVar13;
  uint uVar14;
  short *psVar15;
  byte *local_28;
  int local_20;
  undefined4 local_1c;
  
  uVar14 = 0;
  iVar4 = *(int *)(param_2 + 1) + -1;
  if (*(int *)(param_2 + 1) == 0) {
    iVar4 = 0;
  }
  uVar10 = iVar4 >> 0x1f & 3;
  uVar5 = iVar4 + uVar10;
  if ((uVar5 & 3) != uVar10) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  local_20 = ((int)uVar5 >> 2) * 3 + 1;
  local_28 = (byte *)0x0;
  local_1c = 0;
  if (0 < local_20) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_28,0);
  }
  iVar4 = local_20;
  pbVar11 = local_28;
  puVar7 = (undefined8 *)FUN_142ff7130();
  if (*(int *)(param_2 + 1) == 0) {
    psVar15 = &DAT_143f3eda8;
  }
  else {
    psVar15 = (short *)*param_2;
  }
  sVar1 = *psVar15;
  pbVar13 = pbVar11;
  uVar5 = uVar14;
  do {
    if (sVar1 == 0) {
      iVar12 = iVar4 + -1;
      iVar6 = (iVar4 - iVar12) + -1;
      if (iVar6 != 0) {
        _guard_xfg_dispatch_icall_nop(pbVar11 + iVar12,pbVar11 + iVar4,(longlong)iVar6);
      }
LAB_142ff03f0:
      local_20 = iVar12;
      TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(&local_28);
      pbVar11 = local_28;
      iVar4 = local_20;
LAB_142ff0403:
      *param_1 = pbVar11;
      *(int *)(param_1 + 1) = iVar4;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
      return param_1;
    }
    psVar15 = psVar15 + 1;
    if (sVar1 == 0x3d) {
      uVar14 = uVar14 & 0x80000003;
      if ((int)uVar14 < 0) {
        uVar14 = (uVar14 - 1 | 0xfffffffc) + 1;
      }
      if ((int)uVar14 < 0) goto LAB_142ff0403;
      if ((int)uVar14 < 2) {
LAB_142ff02de:
        *param_1 = 0;
        param_1[1] = 0;
        if (pbVar11 == (byte *)0x0) {
          return param_1;
        }
        FMemory::Free(pbVar11);
        return param_1;
      }
      if ((3 < (int)uVar14) || (iVar6 = iVar4 - uVar5, iVar6 == 0)) goto LAB_142ff0403;
      iVar12 = iVar4 - iVar6;
      if (iVar12 - uVar5 != 0) {
        _guard_xfg_dispatch_icall_nop
                  (pbVar11 + (int)uVar5,pbVar11 + (int)(iVar6 + uVar5),
                   (longlong)(int)(iVar12 - uVar5));
      }
      goto LAB_142ff03f0;
    }
    psVar2 = (short *)*puVar7;
    psVar8 = psVar2;
    while( true ) {
      if (psVar8 == psVar2 + *(int *)(puVar7 + 1)) goto LAB_142ff02de;
      if (*psVar8 == sVar1) break;
      psVar8 = psVar8 + 1;
    }
    lVar9 = (longlong)psVar8 - (longlong)psVar2 >> 1;
    iVar12 = (int)lVar9;
    if (iVar12 == -1) goto LAB_142ff02de;
    uVar10 = uVar14 & 0x80000003;
    if ((int)uVar10 < 0) {
      uVar10 = (uVar10 - 1 | 0xfffffffc) + 1;
    }
    bVar3 = (byte)lVar9;
    if (uVar10 == 0) {
      bVar3 = bVar3 << 2;
LAB_142ff035f:
      *pbVar13 = bVar3;
    }
    else {
      if (uVar10 == 1) {
        uVar5 = uVar5 + 1;
        *pbVar13 = *pbVar13 | (byte)(iVar12 >> 4);
        pbVar13 = pbVar13 + 1;
        bVar3 = bVar3 << 4;
        goto LAB_142ff035f;
      }
      if (uVar10 == 2) {
        uVar5 = uVar5 + 1;
        *pbVar13 = *pbVar13 | (byte)(iVar12 >> 2);
        pbVar13 = pbVar13 + 1;
        bVar3 = bVar3 << 6;
        goto LAB_142ff035f;
      }
      if (uVar10 == 3) {
        *pbVar13 = *pbVar13 | bVar3;
        uVar5 = uVar5 + 1;
        pbVar13 = pbVar13 + 1;
      }
    }
    sVar1 = *psVar15;
    uVar14 = uVar14 + 1;
  } while( true );
}



// FUNCTION 142ff0430 FUN_142ff0430 body=133 status=ok
// SIG undefined FUN_142ff0430(void)

bool FUN_142ff0430(char *param_1)

{
  char cVar1;
  undefined1 local_res8 [8];
  
  if (*param_1 != '\x04') {
    return *param_1 == '\x02';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    *param_1 = '\0';
    return false;
  }
  cVar1 = FUN_142fe0570(local_res8,*(undefined8 *)(param_1 + 8));
  if (cVar1 != '\0') {
    *param_1 = '\x02';
    return true;
  }
  param_1[0x10] = '\0';
  param_1[0x11] = '\0';
  param_1[0x12] = '\0';
  param_1[0x13] = '\0';
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 8,0);
  }
  param_1[0x18] = '\0';
  param_1[0x19] = '\0';
  param_1[0x1a] = '\0';
  param_1[0x1b] = '\0';
  *param_1 = '\0';
  return false;
}



// FUNCTION 142ff04c0 FUN_142ff04c0 body=729 status=ok
// SIG undefined FUN_142ff04c0(void)

void FUN_142ff04c0(longlong *param_1,longlong *param_2,longlong *param_3,longlong *param_4)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int local_res8 [2];
  longlong *local_res10;
  longlong *local_res18;
  longlong *local_res20;
  longlong *local_68;
  int *local_60;
  
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  local_res8[0] = (**(code **)(*param_1 + 0x408))();
  local_60 = local_res8;
  local_68 = param_1;
  lVar3 = FUN_142fe1d80(&local_68,0,param_1[0x41] + 0x58);
  *param_2 = lVar3;
  lVar3 = FUN_142fe1d80(&local_68,0,param_1[0x41] + 0x68);
  *param_3 = lVar3;
  lVar3 = FUN_142fe1d80(&local_68,0,param_1[0x41] + 0x78);
  *param_4 = lVar3;
  plVar7 = (longlong *)param_1[0x44];
  local_68 = plVar7 + (int)param_1[0x45];
  if (plVar7 != local_68) {
    do {
      uVar4 = 0;
      lVar3 = *plVar7;
      lVar5 = *param_2;
      plVar6 = *(longlong **)(lVar3 + 0x178);
      uVar8 = (longlong)*(int *)(lVar3 + 0x180) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar3 + 0x180) < plVar6) {
        uVar8 = uVar4;
      }
      if (uVar8 != 0) {
        do {
          lVar1 = *plVar6;
          if ((((lVar1 != 0) && (0.0 < *(float *)(lVar1 + 0x48))) &&
              (*(int *)(lVar1 + 0x58) <= local_res8[0])) &&
             (((local_res8[0] <= *(int *)(lVar1 + 0x5c) &&
               (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar1 + 0x50),param_1[0x23],0), cVar2 != '\0')
               ) && ((lVar5 == 0 || (*(float *)(lVar5 + 0x48) < *(float *)(lVar1 + 0x48))))))) {
            lVar5 = lVar1;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 + 1;
          param_4 = local_res20;
        } while (uVar4 != uVar8);
      }
      uVar4 = 0;
      *local_res10 = lVar5;
      plVar6 = *(longlong **)(lVar3 + 0x188);
      lVar5 = *local_res18;
      uVar8 = (longlong)*(int *)(lVar3 + 400) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar3 + 400) < plVar6) {
        uVar8 = uVar4;
      }
      if (uVar8 != 0) {
        do {
          lVar1 = *plVar6;
          if ((((lVar1 != 0) && (0.0 < *(float *)(lVar1 + 0x48))) &&
              ((*(int *)(lVar1 + 0x58) <= local_res8[0] &&
               ((local_res8[0] <= *(int *)(lVar1 + 0x5c) &&
                (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar1 + 0x50),param_1[0x23],0), cVar2 != '\0'
                )))))) && ((lVar5 == 0 || (*(float *)(lVar5 + 0x48) < *(float *)(lVar1 + 0x48))))) {
            lVar5 = lVar1;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 + 1;
          param_4 = local_res20;
        } while (uVar4 != uVar8);
      }
      uVar4 = 0;
      *local_res18 = lVar5;
      plVar6 = *(longlong **)(lVar3 + 0x198);
      lVar5 = *param_4;
      uVar8 = (longlong)*(int *)(lVar3 + 0x1a0) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar3 + 0x1a0) < plVar6) {
        uVar8 = uVar4;
      }
      if (uVar8 != 0) {
        do {
          lVar3 = *plVar6;
          if (((((lVar3 != 0) && (0.0 < *(float *)(lVar3 + 0x48))) &&
               (*(int *)(lVar3 + 0x58) <= local_res8[0])) &&
              ((local_res8[0] <= *(int *)(lVar3 + 0x5c) &&
               (cVar2 = FUN_142c48f90(*(undefined8 *)(lVar3 + 0x50),param_1[0x23],0), cVar2 != '\0')
               ))) && ((lVar5 == 0 || (*(float *)(lVar5 + 0x48) < *(float *)(lVar3 + 0x48))))) {
            lVar5 = lVar3;
          }
          plVar6 = plVar6 + 1;
          uVar4 = uVar4 + 1;
          param_4 = local_res20;
        } while (uVar4 != uVar8);
      }
      plVar7 = plVar7 + 1;
      *param_4 = lVar5;
      param_2 = local_res10;
    } while (plVar7 != local_68);
  }
  return;
}



// FUNCTION 142ff07b0 FUN_142ff07b0 body=28 status=ok
// SIG undefined FUN_142ff07b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142ff07b0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 0x10);
  _DAT_146b457ec = _DAT_146b457ec + -1;
  *puVar1 = DAT_146b457e0;
  DAT_146b457e0 = puVar1;
  return;
}



// FUNCTION 142ff07d0 FUN_142ff07d0 body=208 status=ok
// SIG undefined FUN_142ff07d0(void)

void FUN_142ff07d0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  if (((char)param_1[0x25] == '\x03') &&
     (((param_1[0x91] != 0 || (param_1[0x90] != 0)) &&
      (plVar1 = (longlong *)FUN_14238b320(), plVar1 != (longlong *)0x0)))) {
    uVar2 = UUserObjectListEntry::GetPrivateStaticClass();
    lVar3 = UObjectBaseUtility::GetInterfaceAddress(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_14302afd0(plVar1,param_1,param_1[0x8f]);
    }
    uVar2 = FUN_14302d370();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_143011d60(lVar3,param_1);
    }
  }
  (**(code **)(*param_1 + 0x7b8))(param_1);
  if (((*(byte *)(param_1 + 0xb5) & 0x10) == 0) && (param_1[0xad] != 0)) {
    FUN_142227350(param_1[0xad],0,1);
  }
  param_1[0xad] = 0;
  FUN_142227880(param_1);
  return;
}



// FUNCTION 142ff08a0 FUN_142ff08a0 body=73 status=ok
// SIG undefined FUN_142ff08a0(void)

void FUN_142ff08a0(longlong *param_1)

{
  (**(code **)(*param_1 + 0x7b8))();
  if (((*(byte *)(param_1 + 0xb5) & 0x10) == 0) && (param_1[0xad] != 0)) {
    FUN_142227350(param_1[0xad],0,1);
  }
  param_1[0xad] = 0;
  FUN_142227880(param_1);
  return;
}



// FUNCTION 142ff08f0 FUN_142ff08f0 body=416 status=ok
// SIG undefined FUN_142ff08f0(void)

undefined8 * FUN_142ff08f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int *piVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [16];
  undefined4 local_res20;
  undefined4 local_res24;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  *(undefined4 *)(param_2 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  if (*(int *)(param_2 + 1) - *(int *)((longlong)param_2 + 0x34) <
      (int)param_1[1] - *(int *)((longlong)param_1 + 0x34)) {
    FUN_1405effc0(param_2);
  }
  iVar1 = (int)param_1[5];
  puStack_40 = (uint *)(param_1 + 2);
  local_78 = 0;
  uStack_74 = 1;
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar1 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puStack_40;
    }
    uVar2 = *puVar7;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar2 == 0) {
      lVar5 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar6 = local_78 + 1;
      bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar6;
      if (bVar3) goto LAB_142ff09db;
      uVar2 = puVar7[lVar5 + 1];
    }
    uStack_74 = -uVar2 & uVar2;
    iVar6 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_68._4_4_ = (uStack_60 - iVar6) + 0x1f;
    if (iVar1 < local_68._4_4_) {
LAB_142ff09db:
      local_68._4_4_ = iVar1;
    }
  }
  uStack_38 = 0xffffffff;
  iStack_34 = local_68._4_4_;
  iStack_30 = uStack_60;
  uStack_2c = iStack_5c;
  iStack_48 = local_78;
  uStack_44 = uStack_74;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58 = uStack_60;
  uStack_54 = iStack_5c;
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  bVar3 = local_68._4_4_ < iVar1;
  local_50 = param_1;
  local_68 = puStack_40;
  if (bVar3) {
    do {
      lVar5 = (longlong)iStack_5c * 0x10;
      local_res20 = *(undefined4 *)(*param_1 + lVar5);
      local_res24 = *(undefined4 *)(*param_1 + 4 + lVar5);
      piVar4 = (int *)TSet<TWeakObjectPtr<AActor,FWeakObjectPtr>,DefaultKeyFuncs<TWeakObjectPtr<AActor,FWeakObjectPtr>,0>,FDefaultSetAllocator>
                      ::FindId(param_3,local_res8,&local_res20);
      if (*piVar4 == -1) {
        FUN_1425d6f50(param_2,local_res10,*param_1 + lVar5,0);
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
  }
  return param_2;
}



// FUNCTION 142ff0a90 FUN_142ff0a90 body=281 status=ok
// SIG undefined FUN_142ff0a90(void)

void FUN_142ff0a90(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  uVar4 = 0;
  plVar3 = (longlong *)param_1[0x91];
  if ((plVar3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar3 + 0x400))(plVar3,0), cVar1 != '\0')) {
    FUN_142ff0bb0(param_1,param_1[0x91]);
    (**(code **)(*(longlong *)param_1[0x91] + 0x5b8))((longlong *)param_1[0x91],0);
    plVar3 = *(longlong **)(param_1[0x91] + 0xbf0);
    uVar2 = (ulonglong)*(int *)(param_1[0x91] + 0xbf8);
    uVar5 = uVar2 & 0x1fffffffffffffff;
    if (plVar3 + uVar2 < plVar3) {
      uVar5 = uVar4;
    }
    if (uVar5 != 0) {
      do {
        if (*plVar3 != 0) {
          FUN_1426a9140(*plVar3,0,0);
        }
        plVar3 = plVar3 + 1;
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar5);
    }
  }
  plVar3 = (longlong *)param_1[0x90];
  if ((plVar3 != (longlong *)0x0) &&
     (cVar1 = (**(code **)(*plVar3 + 0x400))(plVar3,0), cVar1 != '\0')) {
    FUN_142ff0bb0(param_1,param_1[0x90]);
    (**(code **)(*(longlong *)param_1[0x90] + 0x5b8))((longlong *)param_1[0x90],0);
  }
                    /* WARNING: Could not recover jumptable at 0x000142ff0ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x828))(param_1);
  return;
}



// FUNCTION 142ff0bb0 FUN_142ff0bb0 body=256 status=ok
// SIG undefined FUN_142ff0bb0(void)

void FUN_142ff0bb0(undefined8 param_1,longlong *param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  undefined8 local_res10;
  
  if ((*(byte *)((longlong)param_2 + 0x3c1) & 1) != 0) {
    (**(code **)(*param_2 + 0x8d0))(param_2,0);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ADroppedInventoryItemPickup::OnPhysicsWake",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0xb2,param_1,local_res10);
    pwVar3 = _guard_xfg_dispatch_icall_nop(L"&ADroppedInventoryItemPickup::OnPhysicsSleep",L"::");
    pwVar2 = (wchar_t *)0x0;
    while (pwVar1 = pwVar3, pwVar1 != (wchar_t *)0x0) {
      pwVar3 = _guard_xfg_dispatch_icall_nop(pwVar1 + 1,L"::");
      pwVar2 = pwVar1;
    }
    FName::FName(&local_res10,pwVar2 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(param_2 + 0xb4,param_1,local_res10);
  }
  return;
}



// FUNCTION 142ff0cb0 FUN_142ff0cb0 body=83 status=ok
// SIG undefined FUN_142ff0cb0(void)

void FUN_142ff0cb0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (((*(byte *)(param_1 + 0x318) & 4) != 0) &&
     (plVar1 = *(longlong **)(param_1 + 0x118), plVar1 != (longlong *)0x0)) {
    iVar2 = FUN_14233f450();
    if (iVar2 == 3) {
      (**(code **)(*plVar1 + 0x310))(plVar1,1);
    }
    FUN_14223c460(plVar1,0);
    return;
  }
  return;
}



// FUNCTION 142ff0d10 FUN_142ff0d10 body=161 status=ok
// SIG undefined FUN_142ff0d10(void)

ulonglong FUN_142ff0d10(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x568);
  uVar2 = FUN_142a07000();
  lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
  if (((lVar3 == 0) || (*(longlong *)(param_1 + 0x488) == 0)) ||
     (uVar4 = *(ulonglong *)(lVar3 + 0x718),
     *(ulonglong *)(*(longlong *)(param_1 + 0x488) + 0x718) != uVar4)) {
    plVar1 = *(longlong **)(param_1 + 0x568);
    uVar2 = FUN_142a232e0();
    uVar4 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (((uVar4 == 0) || (*(longlong *)(param_1 + 0x480) == 0)) ||
       (uVar4 = *(ulonglong *)(uVar4 + 0x728),
       *(ulonglong *)(*(longlong *)(param_1 + 0x480) + 0x728) != uVar4)) {
      return uVar4 & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)(uVar4 >> 8),1);
}



// FUNCTION 142ff0dc0 FUN_142ff0dc0 body=1458 status=ok
// SIG undefined FUN_142ff0dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142ff0dc0(longlong *param_1,int *param_2,float *param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_288 [32];
  undefined4 *local_268;
  undefined1 *local_260;
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 local_248;
  undefined1 local_240;
  undefined4 local_238;
  char local_228 [8];
  undefined8 local_220;
  float local_218;
  longlong local_210;
  undefined8 local_208;
  float local_200;
  undefined4 local_1f8;
  undefined1 local_1f4;
  undefined8 local_1f0;
  float local_1e8;
  float local_1e4;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [12];
  undefined4 local_1ac;
  undefined8 local_1a4;
  float local_19c;
  undefined1 local_128 [72];
  longlong local_e0;
  longlong local_c0;
  ulonglong local_a8;
  
  local_a8 = DAT_1468387a8 ^ (ulonglong)auStack_288;
  local_1f0 = param_4;
  iVar4 = FUN_14233f450();
  if ((iVar4 != 3) && ((*(byte *)(param_1 + 0x17) & 8) != 0)) {
    return 0;
  }
  iVar4 = 0;
  while (((-1 < iVar4 && (iVar4 < (int)param_1[0x46])) &&
         (*(int *)((longlong)iVar4 * 0x40 + 0xc + param_1[0x45]) != *param_2))) {
    iVar4 = iVar4 + 1;
  }
  if ((iVar4 < 0) || ((int)param_1[0x46] <= iVar4)) {
    return 0;
  }
  cVar3 = (**(code **)(*param_1 + 0x478))(param_1,param_1[0x45] + (longlong)iVar4 * 0x40);
  if (cVar3 == '\0') {
    return 0;
  }
  lVar6 = param_1[0x24];
  if ((lVar6 == 0) && (lVar6 = FUN_1423407b0(param_1), lVar6 == 0)) {
    return 0;
  }
  lVar16 = param_1[0x45] + (longlong)iVar4 * 0x40;
  local_210 = lVar16;
  FUN_14222da00(param_1[0x23],1,local_1d8,&local_1e8);
  if (local_1e8 <= local_1e4) {
    local_1e8 = local_1e4;
  }
  _guard_xfg_dispatch_icall_nop(local_1b8,0,0x90);
  local_1ac = 0x3f800000;
  local_220 = 0;
  local_268 = (undefined4 *)param_1[0x23];
  FUN_1422ffb20(local_128,0,local_228,1);
  puVar7 = (undefined4 *)FUN_140a05dc0();
  fVar19 = local_1e8 + local_1e8;
  local_1f8 = *puVar7;
  local_1f4 = 0;
  pfVar8 = (float *)FRotator::Vector(param_4,local_1c8);
  local_260 = local_128;
  local_268 = &local_1f8;
  local_220 = CONCAT44(param_3[1] - pfVar8[1] * fVar19,*param_3 - fVar19 * *pfVar8);
  local_218 = param_3[2] - pfVar8[2] * fVar19;
  cVar3 = UWorld::LineTraceSingleByObjectType(lVar6,local_1b8,&local_220,param_3);
  local_208 = *(undefined8 *)param_3;
  local_200 = param_3[2];
  if (cVar3 != '\0') {
    local_208 = local_1a4;
    local_200 = local_19c;
  }
  lVar1 = *(longlong *)(lVar16 + 0x20);
  lVar15 = param_1[0x53];
  local_228[0] = '\0';
  lVar14 = lVar1;
  if (lVar1 == 0) goto LAB_142ff110e;
  (**(code **)(*param_1 + 0x4b8))(param_1,lVar1);
  plVar2 = *(longlong **)(lVar16 + 0x20);
  uVar9 = FUN_14301f8f0();
  lVar10 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar9);
  lVar16 = local_210;
  if (lVar10 == 0) goto LAB_142ff110e;
  lVar16 = *(longlong *)(lVar10 + 0x208);
  if ((lVar16 != 0) && (*(longlong *)(lVar16 + 0x160) != 0)) {
    lVar11 = FUN_143025260();
    for (lVar12 = *(longlong *)(lVar16 + 0x160); lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30))
    {
      if (lVar12 == lVar11) {
        if (*(longlong *)(lVar16 + 0x160) != 0) {
          lVar16 = *(longlong *)(lVar10 + 0x208);
          if (*(longlong *)(lVar16 + 0x160) == 0) goto LAB_142ff10de;
          lVar12 = FUN_143025260();
          lVar15 = *(longlong *)(lVar16 + 0x160);
          lVar16 = lVar15;
          goto joined_r0x000142ff10c9;
        }
        break;
      }
    }
  }
LAB_142ff10e1:
  lVar12 = FUN_142feb2e0(lVar10);
  lVar16 = local_210;
  if ((lVar12 != 0) && (lVar12 != lVar10)) {
    local_228[0] = '\x01';
    lVar14 = *(longlong *)(lVar12 + 0x118);
  }
LAB_142ff110e:
  iVar5 = rand();
  iVar13 = (int)((float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05);
  iVar5 = 1;
  if (iVar13 < 2) {
    iVar5 = iVar13;
  }
  if (iVar5 == 1) {
    iVar5 = rand();
    fVar19 = -50.0 - (float)iVar5 * 0.0015259255;
  }
  else {
    iVar5 = rand();
    fVar19 = (float)iVar5 * 0.0015259255 + 50.0;
  }
  do {
    do {
      iVar5 = rand();
      fVar20 = ((float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05) - 1.0;
      iVar5 = rand();
      fVar21 = ((float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05) - 1.0;
      iVar5 = rand();
      fVar17 = ((float)iVar5 * 3.051851e-05 + (float)iVar5 * 3.051851e-05) - 1.0;
      fVar18 = fVar21 * fVar21 + fVar20 * fVar20 + fVar17 * fVar17;
    } while (1.0 < fVar18);
  } while (fVar18 < 0.0001);
  fVar18 = 1.0 / SQRT(fVar18);
  local_238 = 0;
  local_240 = 0;
  local_248 = local_1f0;
  local_250 = &local_208;
  local_258 = &local_220;
  local_268 = *(undefined4 **)(lVar16 + 0x10);
  local_260 = (undefined1 *)CONCAT44(local_260._4_4_,0x447a0000);
  local_218 = fVar17 * fVar18 * fVar19;
  local_220 = CONCAT44(fVar21 * fVar18 * fVar19,fVar20 * fVar18 * fVar19);
  lVar6 = FUN_142ff1380(lVar6,lVar15,*(undefined4 *)(lVar16 + 0x18),lVar14);
  if (lVar6 != 0) {
    (**(code **)(*param_1 + 0x498))(param_1,lVar16);
    FUN_143011ae0(param_1,iVar4,0);
    *(undefined1 *)(lVar6 + 0x620) = 1;
    if ((local_228[0] != '\0') && (lVar1 != 0)) {
      FUN_142227350(lVar1,0,1);
    }
  }
  if (local_c0 != 0) {
    FMemory::Free();
  }
  if (local_e0 != 0) {
    FMemory::Free();
  }
  return lVar6;
joined_r0x000142ff10c9:
  if (lVar16 == 0) goto LAB_142ff10de;
  if (lVar16 == lVar12) goto LAB_142ff10e1;
  lVar16 = *(longlong *)(lVar16 + 0x30);
  goto joined_r0x000142ff10c9;
LAB_142ff10de:
  lVar15 = 0;
  goto LAB_142ff10e1;
}



// FUNCTION 142ff1380 FUN_142ff1380 body=1849 status=ok
// SIG undefined FUN_142ff1380(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong *
FUN_142ff1380(longlong param_1,longlong param_2,undefined4 param_3,longlong *param_4,
             longlong param_5,undefined4 param_6,undefined8 *param_7,undefined1 (*param_8) [12],
             undefined8 *param_9,char param_10,float param_11)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  uint7 uVar17;
  longlong *plVar16;
  float fVar18;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined4 local_190;
  undefined1 (*local_188 [2]) [12];
  undefined8 *local_178;
  undefined4 local_170;
  longlong local_168;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_120;
  ushort local_11e;
  undefined8 local_118;
  undefined4 local_110;
  undefined1 local_108 [8];
  undefined8 local_100;
  code *local_f8;
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  local_188[0] = param_8;
  local_178 = param_9;
  if (param_1 != 0) {
    lVar15 = 0;
    lVar13 = lVar15;
    lVar9 = lVar15;
    local_168 = param_1;
    if (param_4 != (longlong *)0x0) {
      uVar8 = FUN_14301f8f0();
      lVar9 = (**(code **)(*param_4 + 0x628))(param_4,uVar8);
      if (lVar9 != 0) {
        lVar13 = *(longlong *)(lVar9 + 0x208);
      }
    }
    FRotator::Quaternion(local_178,&local_158);
    local_a8 = local_158;
    uStack_a0 = uStack_150;
    local_98._12_4_ = 0;
    local_98._0_12_ = *local_188[0];
    local_88._4_4_ = DAT_1464aa788._4_4_;
    local_88._0_4_ = (undefined4)DAT_1464aa788;
    local_88._8_4_ = DAT_1464aa790;
    local_88._12_4_ = 0;
    if ((param_2 == 0) && (param_2 = FUN_142ff8700(), param_2 == 0)) {
      param_2 = ALandscapeStreamingProxy::StaticClass();
    }
    FActorSpawnParameters::FActorSpawnParameters(local_148);
    local_11e = local_11e | 4;
    local_120 = 1;
    local_138 = 0;
    uStack_130 = 0;
    if ((param_2 != 0) &&
       (plVar10 = (longlong *)FUN_142550d00(local_168,param_2,&local_a8,local_148),
       plVar10 != (longlong *)0x0)) {
      lVar11 = ALandscapeStreamingProxy::StaticClass();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar11 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8) !=
          lVar11 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        (**(code **)(*plVar10 + 0x600))(plVar10);
        *(undefined4 *)((longlong)plVar10 + 0x60c) = param_3;
        *(undefined4 *)(plVar10 + 0x94) = param_3;
        if (param_5 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(undefined1 *)(param_5 + 0x38);
        }
        *(undefined1 *)(plVar10 + 0xa4) = uVar4;
        if (param_10 != '\0') {
          (**(code **)(*plVar10 + 0x310))(plVar10,1);
        }
        if (param_11 != 0.0) {
          (**(code **)(*plVar10 + 0x768))(plVar10,1);
          (**(code **)(*plVar10 + 0x700))(plVar10,0);
          *(undefined4 *)(plVar10 + 199) = param_6;
          *(undefined8 *)((longlong)plVar10 + 0x63c) = *param_7;
          *(undefined4 *)((longlong)plVar10 + 0x644) = *(undefined4 *)(param_7 + 1);
        }
        if ((param_5 != 0) && (*(char *)(param_5 + 0x3d) != '\0')) {
          (**(code **)(*plVar10 + 0x700))(plVar10,0);
          *(byte *)(plVar10 + 0xb5) = *(byte *)(plVar10 + 0xb5) | 0x40;
        }
        if (param_4 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x6f8))(plVar10,param_4);
        }
        (**(code **)(*plVar10 + 0x600))(plVar10);
        plVar10[0x98] = param_5;
        local_198 = 1;
        FUN_14223c850(plVar10,local_188[0],0,0);
        local_170 = *(undefined4 *)(local_178 + 1);
        local_178 = (undefined8 *)*local_178;
        AActor::SetActorRotation(plVar10,&local_178,1);
        if ((param_11 == 0.0) && ((char)plVar10[0x25] == '\x03')) {
          *(undefined4 *)(plVar10 + 0xbf) = param_6;
          FUN_143015550(plVar10,param_6);
          if ((char)plVar10[0x25] == '\x03') {
            (**(code **)(*plVar10 + 0x600))(plVar10);
            uVar1 = *(undefined4 *)(param_7 + 1);
            *(undefined8 *)((longlong)plVar10 + 0x5fc) = *param_7;
            *(undefined4 *)((longlong)plVar10 + 0x604) = uVar1;
            FUN_1430154c0(plVar10,param_7);
          }
        }
        if (lVar9 != 0) {
          if ((*(longlong *)(lVar9 + 0x210) == 0) ||
             (*(longlong *)(*(longlong *)(lVar9 + 0x210) + 0xb8) == 0)) {
            plVar12 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
            lVar9 = plVar12[0x1f];
            if (lVar9 == 0) {
              (**(code **)(*plVar12 + 0x368))(plVar12);
              lVar9 = plVar12[0x1f];
            }
            fVar18 = *(float *)(lVar9 + 0x30);
          }
          else {
            fVar18 = (float)FUN_142ffe020();
          }
          if (0.0 < fVar18) {
            (**(code **)(*plVar10 + 0x3a0))(plVar10,fVar18);
          }
        }
        if (lVar13 != 0) {
          bVar5 = 0;
          if (*(longlong *)(lVar13 + 0x1d8) != 0) {
            bVar5 = *(byte *)(*(longlong *)(lVar13 + 0x1d8) + 0x3a);
          }
          *(byte *)((longlong)plVar10 + 0x4a4) = *(byte *)((longlong)plVar10 + 0x4a4) & 0xfb;
          *(byte *)((longlong)plVar10 + 0x4a4) =
               *(byte *)((longlong)plVar10 + 0x4a4) | (bVar5 & 1) << 2;
          if (*(longlong *)(lVar13 + 0x1d8) == 0) {
            cVar6 = '\x01';
          }
          else {
            cVar6 = *(char *)(*(longlong *)(lVar13 + 0x1d8) + 0x3b);
          }
          *(byte *)((longlong)plVar10 + 0x4a4) =
               (cVar6 << 3 ^ *(byte *)((longlong)plVar10 + 0x4a4)) & 8 ^
               *(byte *)((longlong)plVar10 + 0x4a4);
        }
        iVar2 = *(int *)((longlong)plVar10 + 0xc);
        lVar13 = lVar15;
        if (iVar2 < (int)DAT_1469e91c4) {
          uVar14 = iVar2 >> 0x1f & 0xffff;
          uVar7 = iVar2 + uVar14;
          lVar13 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                   (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
        }
        uVar17 = (uint7)(uint3)((uint)(int)DAT_1469e91c4 >> 8);
        if ((*(uint *)(lVar13 + 8) >> 0x1d & 1) == 0) {
          FUN_14222b9f0(plVar10,&local_a8,CONCAT71(uVar17,1),0);
          cVar6 = UMaterialInterface::GetCastShadowAsMasked(plVar10);
          if (cVar6 == '\0') {
            if (0.0 < param_11) {
              if (*(longlong *)(local_168 + 400) == 0) {
                uVar8 = *(undefined8 *)(local_168 + 0x3f8);
              }
              else {
                uVar8 = *(undefined8 *)(*(longlong *)(local_168 + 400) + 0x90);
              }
              plVar12 = (longlong *)FMemory::Realloc(0,0x30);
              if (plVar12 != (longlong *)0x0) {
                *plVar12 = (longlong)&PTR_FUN_143f4d170;
                FWeakObjectPtr::operator=(plVar12 + 1,plVar10);
                plVar12[2] = (longlong)&LAB_142406d68;
                lVar13 = FDelegateHandle::GenerateNewID();
                plVar12[4] = lVar13;
                *plVar12 = (longlong)&PTR_FUN_143f4d1b8;
              }
              local_118 = 0;
              local_110 = 0;
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x30))(plVar12,&local_118);
              }
              FWeakObjectPtr::operator=(local_108,0);
              local_190 = 0xbf800000;
              local_198 = 0;
              local_100 = 0;
              local_c8 = (longlong *)0x0;
              local_b8 = 0;
              local_f8 = AK::MemoryMgr::StartProfileThreadUsage;
              FUN_142880850(uVar8,plVar10 + 0xb7,&local_118,param_11);
              if (local_b8 != 0) {
                plVar16 = local_e8;
                if (local_c8 != (longlong *)0x0) {
                  plVar16 = local_c8;
                }
                if (plVar16 != (longlong *)0x0) {
                  (**(code **)(*plVar16 + 0x10))(plVar16,0);
                }
              }
              if (local_c8 != (longlong *)0x0) {
                FMemory::Free();
              }
              TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_118);
              if (plVar12 != (longlong *)0x0) {
                (**(code **)(*plVar12 + 0x28))(plVar12,0);
                lVar13 = FMemory::Realloc(plVar12,0,0);
                if (lVar13 != 0) {
                  FMemory::Free(lVar13);
                }
              }
            }
            if (DAT_146b458d0 == '\0') {
              FUN_143001bd0(&DAT_146b458c8);
            }
            plVar12 = DAT_146b458c8;
            cVar6 = FUN_14218ff80(*(undefined8 *)(*DAT_146b458c8 + 0x30));
            if (cVar6 == '\0') {
              return plVar10;
            }
            if (plVar10[0xac] == 0) {
              return plVar10;
            }
            FUN_1430011b0(plVar12,plVar10[0xac],plVar12[5],0);
            lVar13 = FUN_142ff6570();
            iVar2 = *(int *)((longlong)plVar10 + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar14 = iVar2 >> 0x1f & 0xffff;
              uVar7 = iVar2 + uVar14;
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
            }
            if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) != 0) {
              return plVar10;
            }
            uVar8 = (**(code **)(*plVar10 + 0x148))(plVar10);
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId((longlong *)(lVar13 + 0x18),local_188,uVar8);
            if ((int)local_188[0] == -1) {
              return plVar10;
            }
            lVar15 = (longlong)(int)local_188[0] * 0x20 + *(longlong *)(lVar13 + 0x18);
            if (lVar15 == 0) {
              return plVar10;
            }
            plVar12 = (longlong *)(lVar15 + 8);
            if (plVar12 == (longlong *)0x0) {
              return plVar10;
            }
            iVar2 = *(int *)(lVar15 + 0x10);
            *(int *)(lVar15 + 0x10) = iVar2 + 1;
            if (*(int *)(lVar15 + 0x14) < iVar2 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
              ResizeGrow(plVar12,iVar2);
            }
            lVar13 = *plVar12;
            lVar15 = (longlong)iVar2 * 3 + 2;
            *(undefined1 *)(lVar13 + -4 + lVar15 * 8) = 0;
            FWeakObjectPtr::operator=(lVar13 + lVar15 * 8,plVar10);
            return plVar10;
          }
          FUN_142227350(plVar10,0,1);
        }
        else {
          lVar13 = plVar10[0xad];
          if (lVar13 != 0) {
            iVar2 = *(int *)(lVar13 + 0xc);
            if (iVar2 < (int)DAT_1469e91c4) {
              uVar14 = iVar2 >> 0x1f & 0xffff;
              uVar7 = iVar2 + uVar14;
              lVar15 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
                       (longlong)(int)((uVar7 & 0xffff) - uVar14) * 0x18;
            }
            if ((*(uint *)(lVar15 + 8) >> 0x1d & 1) == 0) {
              if ((*(byte *)(plVar10 + 0xb5) & 0x10) == 0) {
                FUN_142227350(lVar13,0,CONCAT71(uVar17,1));
              }
              (**(code **)(*plVar10 + 0x6f8))(plVar10,0);
            }
          }
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142ff1ac0 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<TSoftClassPtr<UBaseMenuPage>,UBaseMenuPage_*>,TDefaultMapHashableKeyFuncs<TSoftClassPtr<UBaseMenuPage>,UBaseMenuPage_*,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<FNavTestSceneProxy::FNodeDebugData>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,param_2);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar4 = 0;
    uVar5 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar4;
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar2 = param_1 + 0x38;
      }
      uVar4 = uVar4 + 1;
      *(undefined4 *)(lVar2 + uVar3 * 4) = 0xffffffff;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}



// FUNCTION 142ff1b40 FUN_142ff1b40 body=181 status=ok
// SIG undefined FUN_142ff1b40(void)

void FUN_142ff1b40(longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = FUN_142feb610(param_1,param_2,1);
  if ((cVar1 == '\0') && (0 < (int)*(uint *)(param_1 + 0x48))) {
    uVar5 = 0;
    uVar6 = (ulonglong)*(uint *)(param_1 + 0x48);
    do {
      lVar4 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar4 = param_1 + 0x38;
      }
      uVar3 = (longlong)*(int *)(param_1 + 0x48) - 1U & uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(lVar4 + uVar3 * 4) = 0xffffffff;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// FUNCTION 142ff1c00 FUN_142ff1c00 body=447 status=ok
// SIG undefined FUN_142ff1c00(void)

void FUN_142ff1c00(longlong *param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  int local_58;
  uint uStack_54;
  int iStack_44;
  int iStack_40;
  int local_30;
  uint uStack_2c;
  uint *puStack_28;
  uint local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar5 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar5 != 0) {
    puVar9 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar9 = puVar1;
    }
    uVar3 = *puVar9;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar8 = local_58 + 1;
      bVar2 = (int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar8;
      if (bVar2) goto LAB_142ff1cd1;
      uVar3 = puVar9[lVar6 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar8 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    iStack_44 = (iStack_40 - iVar8) + 0x1f;
    if (iVar5 < iStack_44) {
LAB_142ff1cd1:
      iStack_44 = iVar5;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar5) {
    do {
      lVar7 = (longlong)iStack_1c * 0x20 + *param_1;
      iVar5 = *(int *)(lVar7 + 0x10);
      lVar6 = *(longlong *)(lVar7 + 8);
      if (iVar5 != 0) {
        pcVar4 = (char *)(lVar6 + 0xc);
        do {
          if (*pcVar4 != '\0') {
            *pcVar4 = '\0';
          }
          pcVar4 = pcVar4 + 0x18;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        lVar6 = *(longlong *)(lVar7 + 8);
      }
      if (lVar6 != 0) {
        FMemory::Free(lVar6);
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar3 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar3) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar3;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 142ff1dc0 FUN_142ff1dc0 body=551 status=ok
// SIG undefined FUN_142ff1dc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined8 * FUN_142ff1dc0(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined1 *puVar6;
  ulonglong uVar7;
  short *psVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  short *psVar12;
  ulonglong uVar13;
  short *psVar14;
  uint uVar15;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  ulonglong local_30;
  short *psVar16;
  
  puVar6 = auStack_58;
  local_30 = DAT_1468387a8 ^ (ulonglong)&local_38;
  psVar12 = (short *)0x0;
  lVar5 = (longlong)((int)param_2[1] * 4 + 5) * 2;
  uVar15 = 0;
  psVar8 = psVar12;
  if (lVar5 != 0) {
    uVar13 = lVar5 + 0x1e;
    if (uVar13 <= lVar5 + 0xfU) {
      uVar13 = 0xffffffffffffff0;
    }
    puVar6 = auStack_58 + -(uVar13 & 0xfffffffffffffff0);
    psVar8 = (short *)((longlong)&local_30 + -(uVar13 & 0xfffffffffffffff0));
  }
  local_38 = param_1;
  *(undefined8 *)(puVar6 + -8) = 0x142ff1e4d;
  plVar3 = (longlong *)FUN_142ff7130();
  iVar4 = (int)param_2[1];
  if (0 < iVar4) {
    uVar7 = 0;
    uVar13 = uVar7;
    psVar14 = psVar12;
    psVar16 = psVar12;
    do {
      lVar5 = *param_2;
      bVar1 = *(byte *)(lVar5 + (longlong)psVar14);
      iVar11 = (int)psVar12;
      uVar9 = uVar7;
      if (iVar11 < iVar4 + -1) {
        uVar9 = (ulonglong)*(byte *)(lVar5 + 1 + (longlong)psVar14);
      }
      uVar10 = uVar7;
      if (iVar11 < iVar4 + -2) {
        uVar10 = (ulonglong)*(byte *)(lVar5 + 2 + (longlong)psVar14);
      }
      uVar15 = (int)psVar16 + 4;
      psVar16 = (short *)(ulonglong)uVar15;
      psVar12 = (short *)(ulonglong)(iVar11 + 3U);
      psVar14 = (short *)((longlong)psVar14 + 3);
      psVar8[uVar13] = *(short *)(*plVar3 + (ulonglong)(bVar1 >> 2) * 2);
      psVar8[uVar13 + 1] = *(short *)(*plVar3 + ((ulonglong)((bVar1 & 3) << 4) | uVar9 >> 4) * 2);
      psVar8[uVar13 + 2] =
           *(short *)(*plVar3 + ((ulonglong)(((uint)uVar9 & 0xf) << 2) | uVar10 >> 6) * 2);
      psVar8[uVar13 + 3] = *(short *)(*plVar3 + (ulonglong)((uint)uVar10 & 0x3f) * 2);
      uVar13 = uVar13 + 4;
      iVar4 = (int)param_2[1];
      param_1 = local_38;
    } while ((int)(iVar11 + 3U) < iVar4);
  }
  iVar4 = iVar4 + (iVar4 / 3 + (iVar4 >> 0x1f) +
                  (int)(((longlong)iVar4 / 3 + ((longlong)iVar4 >> 0x3f) & 0xffffffffU) >> 0x1f)) *
                  -3;
  if (iVar4 == 1) {
    psVar8[(longlong)(int)uVar15 + -2] = 0x3d;
  }
  else if (iVar4 != 2) goto LAB_142ff1f62;
  psVar8[(longlong)(int)uVar15 + -1] = 0x3d;
LAB_142ff1f62:
  psVar8[(int)uVar15] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar8[lVar5] != 0);
    iVar4 = (int)lVar5 + 1;
    *(int *)(param_1 + 1) = iVar4;
    if (0 < iVar4) {
      *(undefined8 *)(puVar6 + -8) = 0x142ff1fad;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    }
    uVar2 = *param_1;
    *(undefined8 *)(puVar6 + -8) = 0x142ff1fbe;
    FGenericPlatformString::Memcpy(uVar2,psVar8,(longlong)iVar4 * 2);
  }
  *(undefined8 *)(puVar6 + -8) = 0x142ff1fcd;
  return param_1;
}



// FUNCTION 142ff1ff0 FUN_142ff1ff0 body=223 status=ok
// SIG undefined FUN_142ff1ff0(void)

void FUN_142ff1ff0(char *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  byte bVar4;
  longlong lVar5;
  undefined4 uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  byte *pbVar11;
  
  if (*param_1 == '\x02') {
    lVar5 = *(longlong *)(param_1 + 8);
    pbVar11 = (byte *)(lVar5 + 5);
    uVar6 = FCrc::MemCrc32(lVar5,*(undefined4 *)(param_1 + 0x10),0);
    uVar7 = (ushort)((uint)uVar6 >> 0x10) ^ (ushort)uVar6;
    *(char *)(lVar5 + 6) = (char)uVar7;
    *pbVar11 = (byte)(uVar7 >> 8);
    lVar5 = *(longlong *)(param_1 + 8);
    uVar10 = *(int *)(param_1 + 0x10) - 5;
    uVar1 = *(undefined1 *)(lVar5 + 2);
    uVar2 = *(undefined1 *)(lVar5 + 1);
    uVar3 = *(undefined1 *)(lVar5 + 3);
    bVar4 = *(byte *)(lVar5 + 4);
    FUN_143013050(bVar4 & 0x1f,pbVar11,uVar10);
    uVar9 = (ulonglong)(uint)(CONCAT31(CONCAT21(CONCAT11(uVar2,uVar1),uVar3),bVar4) >> 5);
    if (uVar10 != 0) {
      uVar8 = (ulonglong)uVar10;
      do {
        uVar9 = (uVar9 * 0x10a860c1) % 0xfffffffb;
        *pbVar11 = *pbVar11 ^ (byte)uVar9;
        uVar8 = uVar8 - 1;
        pbVar11 = pbVar11 + 1;
      } while (uVar8 != 0);
    }
    *param_1 = '\x04';
  }
  return;
}



// FUNCTION 142ff20d0 FUN_142ff20d0 body=34 status=ok
// SIG undefined FUN_142ff20d0(void)

void FUN_142ff20d0(longlong *param_1)

{
  FUN_14233a670();
                    /* WARNING: Could not recover jumptable at 0x000142ff20eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4a8))(param_1,1);
  return;
}



// FUNCTION 142ff2100 FUN_142ff2100 body=229 status=ok
// SIG undefined FUN_142ff2100(void)

void FUN_142ff2100(longlong param_1,int param_2)

{
  void *_Src;
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *local_18;
  int local_10;
  
  FUN_14233a670();
  if ((param_2 == 0) && (iVar1 = FUN_14233f450(param_1), iVar1 == 3)) {
    plVar2 = (longlong *)0x0;
    local_10 = *(int *)(param_1 + 0x1f8);
    lVar3 = (longlong)local_10;
    _Src = *(void **)(param_1 + 0x1f0);
    local_18 = (longlong *)0x0;
    plVar6 = plVar2;
    if (local_10 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_18,local_10,0);
      plVar6 = local_18;
      _guard_xfg_dispatch_icall_nop(local_18,_Src,lVar3 << 3);
    }
    plVar4 = (longlong *)((ulonglong)((longlong)(plVar6 + local_10) + (7 - (longlong)plVar6)) >> 3);
    if (plVar6 + local_10 < plVar6) {
      plVar4 = plVar2;
    }
    plVar5 = plVar6;
    if (plVar4 != (longlong *)0x0) {
      do {
        if (*plVar5 != 0) {
          FUN_142227350(*plVar5,0,1);
        }
        plVar5 = plVar5 + 1;
        plVar2 = (longlong *)((longlong)plVar2 + 1);
      } while (plVar2 != plVar4);
    }
    if (plVar6 != (longlong *)0x0) {
      FMemory::Free(plVar6);
    }
  }
  return;
}



// FUNCTION 142ff21f0 SetUnavailableChunksCallback body=70 status=ok
// SIG undefined SetUnavailableChunksCallback(void)

void BuildPatchServices::FCloudChunkSource::SetUnavailableChunksCallback
               (undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_2 + 0x40) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if (*(longlong **)(param_2 + 0x30) == (longlong *)0x0) {
      plVar1 = (longlong *)(param_2 + 0x10);
    }
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))(plVar1,0);
    }
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142ff2240 FUN_142ff2240 body=291 status=ok
// SIG undefined FUN_142ff2240(void)

void FUN_142ff2240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_142df0400(param_2,*(longlong *)(param_1 + 0x208) + 0x98);
    FUN_142df0490(param_2,*(longlong *)(param_1 + 0x208) + 0xa8);
  }
  uVar2 = 0;
  plVar3 = *(longlong **)(param_1 + 0x220);
  uVar5 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x228) < plVar3) {
    uVar5 = uVar2;
  }
  uVar4 = uVar2;
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar3;
      FUN_142df0400(param_2,lVar1 + 0x1b0);
      FUN_142df0490(param_2,lVar1 + 0x1c0);
      uVar4 = uVar4 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar4 != uVar5);
  }
  plVar3 = *(longlong **)(param_1 + 0x230);
  uVar5 = (longlong)*(int *)(param_1 + 0x238) & 0x1fffffffffffffff;
  if (plVar3 + *(int *)(param_1 + 0x238) < plVar3) {
    uVar5 = uVar2;
  }
  if (uVar5 != 0) {
    do {
      lVar1 = *plVar3;
      FUN_142df0400(param_2,lVar1 + 0x1b0);
      FUN_142df0490(param_2,lVar1 + 0x1c0);
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 1;
    } while (uVar2 != uVar5);
  }
  return;
}



// FUNCTION 142ff2380 FUN_142ff2380 body=183 status=ok
// SIG undefined FUN_142ff2380(void)

void FUN_142ff2380(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
  lVar4 = plVar3[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar4 = plVar3[0x1f];
  }
  if (0 < *(int *)(lVar4 + 0x50)) {
    iVar1 = (int)param_2[1];
    *(int *)(param_2 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
    }
    *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = 0;
    iVar1 = *(int *)(lVar4 + 0x50);
    if (iVar1 != 0) {
      iVar2 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + iVar1) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
        iVar2 = (int)param_2[1];
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_2 + (longlong)iVar2 * 8),*(void **)(lVar4 + 0x48),
                 (longlong)iVar1 << 3);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
    }
  }
  return;
}



// FUNCTION 142ff2440 FUN_142ff2440 body=799 status=ok
// SIG undefined FUN_142ff2440(void)

void FUN_142ff2440(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  void *_Src;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined4 local_48 [2];
  longlong *local_40;
  int local_38;
  
  lVar1 = *(longlong *)(param_1 + 0x218);
  plVar9 = (longlong *)0x0;
  if (lVar1 != 0) {
    local_38 = *(int *)(lVar1 + 0xe0);
    lVar10 = (longlong)local_38;
    _Src = *(void **)(lVar1 + 0xd8);
    local_40 = (longlong *)0x0;
    plVar3 = plVar9;
    if (local_38 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_40,local_38,0);
      plVar3 = local_40;
      _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar10 << 3);
    }
    plVar5 = (longlong *)((ulonglong)((longlong)(plVar3 + local_38) + (7 - (longlong)plVar3)) >> 3);
    if (plVar3 + local_38 < plVar3) {
      plVar5 = plVar9;
    }
    plVar7 = plVar9;
    plVar6 = plVar3;
    if (plVar5 != (longlong *)0x0) {
      do {
        plVar4 = (longlong *)*plVar6;
        if (plVar4 != (longlong *)0x0) {
          local_48[0] = 0;
          plVar2 = plVar9;
          local_40 = plVar4;
          if (*(int *)(param_2 + 8) != 0) {
            plVar4 = (longlong *)param_2[6];
            if ((longlong *)param_2[6] == (longlong *)0x0) {
              plVar4 = param_2 + 2;
            }
            if (plVar4 != (longlong *)0x0) {
              plVar2 = (longlong *)(**(code **)(*plVar4 + 8))();
            }
          }
          (*(code *)*param_2)(plVar2,&local_40,local_48);
        }
        plVar6 = plVar6 + 1;
        plVar7 = (longlong *)((longlong)plVar7 + 1);
      } while (plVar7 != plVar5);
    }
    if (plVar3 != (longlong *)0x0) {
      FMemory::Free(plVar3);
    }
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 != 0) {
    puVar11 = *(undefined8 **)(lVar1 + 0x108);
    puVar8 = puVar11 + (longlong)*(int *)(lVar1 + 0x110) * 2;
    plVar3 = local_40;
    for (; local_40 = plVar3, puVar11 != puVar8; puVar11 = puVar11 + 2) {
      local_40 = (longlong *)*puVar11;
      if (local_40 != (longlong *)0x0) {
        local_48[0] = *(undefined4 *)(puVar11 + 1);
        plVar3 = plVar9;
        if (*(int *)(param_2 + 8) != 0) {
          plVar5 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar5 = param_2 + 2;
          }
          if (plVar5 != (longlong *)0x0) {
            plVar3 = (longlong *)(**(code **)(*plVar5 + 8))();
          }
        }
        (*(code *)*param_2)(plVar3,&local_40,local_48);
        plVar3 = local_40;
      }
      local_40 = plVar3;
      plVar3 = local_40;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x220);
  plVar3 = plVar5 + *(int *)(param_1 + 0x228);
  plVar7 = local_40;
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    puVar11 = *(undefined8 **)(*plVar5 + 0x1d0);
    puVar8 = puVar11 + (longlong)*(int *)(*plVar5 + 0x1d8) * 2;
    for (; puVar11 != puVar8; puVar11 = puVar11 + 2) {
      local_40 = (longlong *)*puVar11;
      if (local_40 != (longlong *)0x0) {
        local_48[0] = *(undefined4 *)(puVar11 + 1);
        plVar7 = plVar9;
        if (*(int *)(param_2 + 8) != 0) {
          plVar6 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar6 = param_2 + 2;
          }
          if (plVar6 != (longlong *)0x0) {
            plVar7 = (longlong *)(**(code **)(*plVar6 + 8))();
          }
        }
        (*(code *)*param_2)(plVar7,&local_40,local_48);
        plVar7 = local_40;
      }
      local_40 = plVar7;
      plVar7 = local_40;
    }
  }
  plVar5 = *(longlong **)(param_1 + 0x230);
  plVar3 = plVar5 + *(int *)(param_1 + 0x238);
  local_40 = plVar7;
  for (; plVar5 != plVar3; plVar5 = plVar5 + 1) {
    puVar11 = *(undefined8 **)(*plVar5 + 0x1d0);
    puVar8 = puVar11 + (longlong)*(int *)(*plVar5 + 0x1d8) * 2;
    plVar7 = local_40;
    for (; puVar11 != puVar8; puVar11 = puVar11 + 2) {
      local_40 = (longlong *)*puVar11;
      if (local_40 != (longlong *)0x0) {
        local_48[0] = *(undefined4 *)(puVar11 + 1);
        plVar7 = plVar9;
        if (*(int *)(param_2 + 8) != 0) {
          plVar6 = (longlong *)param_2[6];
          if ((longlong *)param_2[6] == (longlong *)0x0) {
            plVar6 = param_2 + 2;
          }
          if (plVar6 != (longlong *)0x0) {
            plVar7 = (longlong *)(**(code **)(*plVar6 + 8))();
          }
        }
        (*(code *)*param_2)(plVar7,&local_40,local_48);
        plVar7 = local_40;
      }
      local_40 = plVar7;
      plVar7 = local_40;
    }
    local_40 = plVar7;
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar9 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar9 = param_2 + 2;
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x10))(plVar9,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142ff2760 FUN_142ff2760 body=513 status=ok
// SIG undefined FUN_142ff2760(void)

ulonglong FUN_142ff2760(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  ulonglong in_RAX;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  
  if ((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x90) == 0))
  goto switchD_142ff28ec_default;
  lVar4 = UPlayFabProfilesAPI::GetPrivateStaticClass();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      lVar4 = FUN_1428e7a40();
      iVar1 = *(int *)(lVar4 + 0x90);
      uVar5 = (longlong)iVar1;
      if ((*(int *)(param_2[2] + 0x90) < iVar1) ||
         (uVar5 = *(ulonglong *)(param_2[2] + 0x88),
         *(longlong *)(uVar5 + (longlong)iVar1 * 8) != lVar4 + 0x88)) {
        in_RAX = uVar5 & 0xffffffffffffff00;
      }
      else {
        in_RAX = CONCAT71((int7)(uVar5 >> 8),1);
      }
      if ((char)in_RAX == '\0') {
        param_2 = (longlong *)0x0;
      }
      else {
        param_2 = (longlong *)param_2[0x23];
      }
      if (param_2 == (longlong *)0x0) goto switchD_142ff28ec_default;
    }
    lVar4 = FUN_143025260();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      in_RAX = param_2[0xac];
    }
    else {
      uVar6 = FUN_14301f8f0();
      in_RAX = (**(code **)(*param_2 + 0x628))(param_2,uVar6);
    }
    if (in_RAX == 0) goto switchD_142ff28ec_default;
    param_2 = (longlong *)0x0;
    if (*(longlong *)(in_RAX + 0x210) != 0) {
      param_2 = *(longlong **)(*(longlong *)(in_RAX + 0x210) + 0xb8);
    }
    if (param_2 == (longlong *)0x0) goto switchD_142ff28ec_default;
  }
  iVar1 = (int)param_2[0x11];
  iVar2 = *(int *)(*(longlong *)(param_1 + 0x90) + 0x88);
  in_RAX = (ulonglong)*(byte *)(param_1 + 0x88);
  switch(in_RAX) {
  case 0:
    return (ulonglong)(iVar1 == iVar2);
  case 1:
    return (ulonglong)(iVar1 != iVar2);
  case 2:
    return (ulonglong)(iVar1 < iVar2);
  case 3:
    return (ulonglong)(iVar1 <= iVar2);
  case 4:
    return (ulonglong)(iVar2 < iVar1);
  case 5:
    return (ulonglong)(iVar2 <= iVar1);
  }
switchD_142ff28ec_default:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 142ff2990 FUN_142ff2990 body=128 status=ok
// SIG undefined FUN_142ff2990(void)

undefined8 * FUN_142ff2990(undefined8 param_1,undefined8 *param_2,undefined4 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_res10;
  undefined4 local_res14;
  
  local_res10 = *param_3;
  local_res14 = param_3[1];
  cVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (cVar1 != '\0') {
    uVar2 = FWeakObjectPtr::Get(&local_res10);
    FString::PrintfImpl(param_2,L"0x%08x",uVar2);
    return param_2;
  }
  *param_2 = 0;
  param_2[1] = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"nullptr",0x10);
  return param_2;
}



// FUNCTION 142ff2a10 FUN_142ff2a10 body=161 status=ok
// SIG undefined FUN_142ff2a10(void)

void FUN_142ff2a10(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_res10 = *param_2;
  local_res14 = param_2[1];
  (**(code **)(param_1 + 0x18))(plVar6,&local_res10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142ff2ac0 FUN_142ff2ac0 body=161 status=ok
// SIG undefined FUN_142ff2ac0(void)

void FUN_142ff2ac0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined4 local_res10;
  undefined4 local_res14;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar6 = (longlong *)0x0;
  plVar5 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar7 = iVar4 == 0;
    if (bVar7) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar5 = plVar6, !bVar7) {
      LOCK();
      bVar7 = iVar4 == (int)plVar2[1];
      if (bVar7) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar7) {
        plVar5 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar6 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_res10 = *param_2;
  local_res14 = param_2[1];
  (**(code **)(param_1 + 0x18))(plVar6,&local_res10);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 142ff2b70 FUN_142ff2b70 body=262 status=ok
// SIG undefined FUN_142ff2b70(void)

undefined8 * FUN_142ff2b70(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  local_res10 = *param_3;
  local_res14 = param_3[1];
  puVar5 = (undefined8 *)(**(code **)(param_1 + 0x18))(plVar7,local_28,&local_res10);
  *param_2 = *puVar5;
  lVar3 = puVar5[1];
  param_2[1] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
    UNLOCK();
  }
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142ff2c80 FUN_142ff2c80 body=242 status=ok
// SIG undefined FUN_142ff2c80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ff2c80(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_108 [48];
  undefined1 local_d8 [192];
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar4 = (int)plVar2[1];
    bVar8 = iVar4 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar4 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar4 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar4 + 1;
      }
      UNLOCK();
      if (bVar8) {
        plVar6 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar7 = *(longlong **)(param_1 + 8);
        }
        break;
      }
      LOCK();
      iVar4 = (int)plVar2[1];
      bVar8 = iVar4 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar4 = 0;
      }
      UNLOCK();
    }
  }
  uVar5 = (**(code **)(param_1 + 0x18))(plVar7,local_d8);
  FReply::FReply(param_2,uVar5);
  FUN_140438c20(local_d8);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar3 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142ff2d80 FUN_142ff2d80 body=20 status=ok
// SIG undefined FUN_142ff2d80(void)

undefined1 FUN_142ff2d80(longlong param_1)

{
  FUN_142fe1a90(param_1 + 8);
  return 1;
}



// FUNCTION 142ff2da0 FUN_142ff2da0 body=296 status=ok
// SIG undefined FUN_142ff2da0(void)

undefined8 FUN_142ff2da0(longlong param_1,undefined4 *param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_res18;
  undefined4 local_res1c;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          local_res18 = *param_2;
          local_res1c = param_2[1];
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_142ff2e75;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000142ff2e51;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_142ff2dea:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000142ff2e51:
  plVar7 = plVar8;
  if (bVar9) goto LAB_142ff2e75;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_142ff2e75;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000142ff2e51;
LAB_142ff2e75:
  (**(code **)(param_1 + 0x18))(plVar8,&local_res18);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_142ff2dea;
}



// FUNCTION 142ff2ed0 FUN_142ff2ed0 body=296 status=ok
// SIG undefined FUN_142ff2ed0(void)

undefined8 FUN_142ff2ed0(longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  bool bVar9;
  undefined4 local_res20;
  undefined4 local_res24;
  
  plVar5 = *(longlong **)(param_1 + 0x10);
  plVar8 = (longlong *)0x0;
  plVar4 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    iVar3 = (int)plVar5[1];
    bVar9 = iVar3 == 0;
    if (bVar9) {
      *(int *)(plVar5 + 1) = 0;
      iVar3 = 0;
    }
    UNLOCK();
    while (plVar4 = plVar8, !bVar9) {
      LOCK();
      bVar9 = iVar3 == (int)plVar5[1];
      if (bVar9) {
        *(int *)(plVar5 + 1) = iVar3 + 1;
      }
      UNLOCK();
      if (bVar9) {
        plVar4 = plVar5;
        if ((plVar5 != (longlong *)0x0) && (*(longlong *)(param_1 + 8) != 0)) {
          plVar4 = *(longlong **)(param_1 + 0x10);
          local_res20 = *param_2;
          local_res24 = param_2[1];
          plVar7 = plVar4;
          if (plVar4 == (longlong *)0x0) goto LAB_142ff2fa2;
          LOCK();
          iVar3 = (int)plVar4[1];
          bVar9 = iVar3 == 0;
          if (bVar9) {
            *(int *)(plVar4 + 1) = 0;
            iVar3 = 0;
          }
          UNLOCK();
          goto joined_r0x000142ff2f7e;
        }
        break;
      }
      LOCK();
      iVar3 = (int)plVar5[1];
      bVar9 = iVar3 == 0;
      if (bVar9) {
        *(int *)(plVar5 + 1) = 0;
        iVar3 = 0;
      }
      UNLOCK();
    }
  }
  uVar6 = 0;
  plVar5 = plVar4;
LAB_142ff2f1a:
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar5 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return uVar6;
joined_r0x000142ff2f7e:
  plVar7 = plVar8;
  if (bVar9) goto LAB_142ff2fa2;
  LOCK();
  bVar9 = iVar3 == (int)plVar4[1];
  if (bVar9) {
    *(int *)(plVar4 + 1) = iVar3 + 1;
  }
  UNLOCK();
  if (bVar9) {
    plVar7 = plVar4;
    if (plVar4 != (longlong *)0x0) {
      plVar8 = *(longlong **)(param_1 + 8);
    }
    goto LAB_142ff2fa2;
  }
  LOCK();
  iVar3 = (int)plVar4[1];
  bVar9 = iVar3 == 0;
  if (bVar9) {
    *(int *)(plVar4 + 1) = 0;
    iVar3 = 0;
  }
  UNLOCK();
  goto joined_r0x000142ff2f7e;
LAB_142ff2fa2:
  (**(code **)(param_1 + 0x18))(plVar8,&local_res20,param_3);
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    plVar8 = plVar7 + 1;
    lVar2 = *plVar8;
    *(int *)plVar8 = (int)*plVar8 + -1;
    UNLOCK();
    if ((int)lVar2 == 1) {
      (**(code **)*plVar7)(plVar7);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar7 + 8))(plVar7,1);
      }
    }
  }
  uVar6 = 1;
  goto LAB_142ff2f1a;
}



// FUNCTION 142ff3000 FUN_142ff3000 body=145 status=ok
// SIG undefined FUN_142ff3000(void)

void FUN_142ff3000(longlong *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x400))();
  *param_2 = uVar1;
  *(longlong *)(param_2 + 2) = param_1[0x41];
  *(longlong *)(param_2 + 4) = param_1[0x42];
  *(longlong *)(param_2 + 6) = param_1[0x43];
  TArray<FName,FDefaultAllocator>::operator=(param_2 + 8,param_1 + 0x44);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_2 + 0xc,param_1 + 0x46);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_2 + 0x10,param_1 + 0x48)
  ;
  TArray<FName,FDefaultAllocator>::operator=(param_2 + 0x14,param_1 + 0x4a);
  *(char *)(param_2 + 0x18) = (char)param_1[0x4c];
  return;
}



// FUNCTION 142ff30a0 FUN_142ff30a0 body=199 status=ok
// SIG undefined FUN_142ff30a0(void)

longlong FUN_142ff30a0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  
  plVar1 = (longlong *)*param_1;
  lVar2 = param_1[1];
  plVar5 = plVar1;
  while( true ) {
    if (plVar5 == plVar1 + (longlong)(int)lVar2 * 0x11) {
      return 0xffffffff;
    }
    if ((((*plVar5 == *param_2) && (cVar3 = FUN_142c8d8f0(plVar5 + 1,param_2 + 1), cVar3 != '\0'))
        && (cVar3 = FUN_142c8d8f0(plVar5 + 8,param_2 + 8), cVar3 != '\0')) &&
       (((int)plVar5[0x10] == (int)param_2[0x10] &&
        (iVar4 = _guard_xfg_dispatch_icall_nop
                           ((void *)plVar5[0xf],(void *)param_2[0xf],
                            (longlong)(int)plVar5[0x10] << 3), iVar4 == 0)))) break;
    plVar5 = plVar5 + 0x11;
  }
  return ((longlong)plVar5 - (longlong)plVar1) / 0x88;
}



// FUNCTION 142ff3170 FUN_142ff3170 body=184 status=ok
// SIG undefined FUN_142ff3170(void)

void FUN_142ff3170(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_1 + 0x568) != 0) && (param_2 != 0)) {
    lVar2 = UInterface::GetPrivateStaticClass();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar2) {
        lVar2 = UUserObjectListEntry::GetPrivateStaticClass();
        lVar3 = UInterface::GetPrivateStaticClass();
        lVar4 = param_2;
        goto LAB_142ff31c5;
      }
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
LAB_142ff320b:
  FUN_14222afa0(param_1,param_2,param_3);
  return;
  while (lVar4 = *(longlong *)(lVar4 + 0x30), lVar4 != 0) {
LAB_142ff31c5:
    lVar1 = param_2;
    if (lVar4 == lVar3) goto joined_r0x000142ff31db;
  }
  lVar1 = 0;
joined_r0x000142ff31db:
  do {
    if (lVar1 == 0) goto LAB_142ff320b;
    if (lVar1 == lVar2) {
      (**(code **)(**(longlong **)(param_1 + 0x568) + 0x660))
                (*(longlong **)(param_1 + 0x568),param_2,param_3);
      goto LAB_142ff320b;
    }
    lVar1 = *(longlong *)(lVar1 + 0x30);
  } while( true );
}



// FUNCTION 142ff3230 FUN_142ff3230 body=220 status=ok
// SIG undefined FUN_142ff3230(void)

int * FUN_142ff3230(longlong *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = FUN_142fffec0(param_3);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar2 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2;
        if ((((*param_3 == *(longlong *)(lVar1 + lVar4 * 0x30)) &&
             (param_3[1] == *(longlong *)(lVar1 + 8 + lVar4 * 0x30))) &&
            ((int)param_3[2] == *(int *)(lVar1 + 0x10 + lVar4 * 0x30))) &&
           (param_3[3] == *(longlong *)(lVar1 + 0x18 + lVar4 * 0x30))) {
          *param_2 = iVar2;
          return param_2;
        }
        iVar2 = *(int *)(lVar1 + 0x28 + lVar4 * 0x30);
      } while (iVar2 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142ff3310 FUN_142ff3310 body=378 status=ok
// SIG undefined FUN_142ff3310(void)

int * FUN_142ff3310(longlong *param_1,int *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_3;
    iVar5 = (int)(uVar1 >> 4);
    uVar8 = 0x9e3779b9U - iVar5 ^ iVar5 << 8;
    uVar7 = -(uVar8 + iVar5) ^ uVar8 >> 0xd;
    uVar6 = (iVar5 - uVar8) - uVar7 ^ uVar7 >> 0xc;
    uVar9 = (uVar8 - uVar6) - uVar7 ^ uVar6 << 0x10;
    uVar8 = (uVar7 - uVar9) - uVar6 ^ uVar9 >> 5;
    uVar7 = (uVar6 - uVar9) - uVar8 ^ uVar8 >> 3;
    uVar9 = (uVar9 - uVar7) - uVar8 ^ uVar7 << 10;
    uVar6 = FUN_142fffec0(param_3 + 1);
    plVar3 = (longlong *)0x0;
    if (param_1[8] == 0) {
      plVar3 = param_1 + 7;
    }
    iVar5 = *(int *)(((ulonglong)plVar3 | param_1[8]) +
                    (((longlong)(int)(uVar6 ^ (uVar8 - uVar9) - uVar7) ^ (ulonglong)(uVar9 >> 0xf))
                    & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar5 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar5 * 0x38;
        if ((((uVar1 == *(ulonglong *)(lVar4 + lVar2)) &&
             (*(ulonglong *)(lVar4 + 8 + lVar2) == param_3[1])) &&
            (*(ulonglong *)(lVar4 + 0x10 + lVar2) == param_3[2])) &&
           ((*(int *)(lVar4 + 0x18 + lVar2) == (int)param_3[3] &&
            (*(ulonglong *)(lVar4 + 0x20 + lVar2) == param_3[4])))) {
          *param_2 = iVar5;
          return param_2;
        }
        iVar5 = *(int *)(lVar4 + 0x30 + lVar2);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 142ff3490 FUN_142ff3490 body=209 status=ok
// SIG undefined FUN_142ff3490(void)

void FUN_142ff3490(longlong *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  (**(code **)(*param_1 + 0x600))();
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  param_1[0x8f] = param_2;
  if (iVar1 < (int)DAT_1469e91c4) {
    uVar5 = iVar1 >> 0x1f & 0xffff;
    uVar3 = iVar1 + uVar5;
    lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
            (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
  }
  else {
    lVar4 = 0;
  }
  if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
    *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0xfd;
    if ((param_1[0x91] != 0) || (param_1[0x90] != 0)) {
      FUN_143017540(param_1);
    }
    *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0xdf;
    (**(code **)(*param_1 + 2000))(param_1);
    (**(code **)(*param_1 + 0x6f8))(param_1,0);
    cVar2 = (**(code **)(*param_1 + 0x7e8))(param_1);
    if (cVar2 != '\0') {
      FUN_142227350(param_1,0,1);
    }
  }
  return;
}



// FUNCTION 142ff3570 FUN_142ff3570 body=296 status=ok
// SIG undefined FUN_142ff3570(void)

void FUN_142ff3570(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int local_48 [2];
  longlong local_40;
  
  uVar4 = 0;
  cVar6 = '\0';
  plVar5 = *(longlong **)(param_1 + 0x220);
  uVar8 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
  if (plVar5 + *(int *)(param_1 + 0x228) < plVar5) {
    uVar8 = uVar4;
  }
  if (uVar8 != 0) {
    uVar2 = uVar4;
    uVar9 = uVar4;
    do {
      local_40 = *plVar5;
      cVar1 = *(char *)(local_40 + 0x38);
      iVar7 = 0;
      if (*(char *)(local_40 + 0x38) == cVar6) {
        iVar7 = (int)uVar2;
        cVar1 = cVar6;
      }
      cVar6 = cVar1;
      uVar2 = uVar4;
      local_48[0] = iVar7;
      if (*(int *)(param_2 + 8) != 0) {
        plVar3 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar3 = param_2 + 2;
        }
        if (plVar3 != (longlong *)0x0) {
          uVar2 = (**(code **)(*plVar3 + 8))();
        }
      }
      (*(code *)*param_2)(uVar2,&local_40,local_48);
      plVar5 = plVar5 + 1;
      uVar2 = (ulonglong)(iVar7 + 1);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar8);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar5 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar5 = param_2 + 2;
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 142ff36a0 FUN_142ff36a0 body=184 status=ok
// SIG undefined FUN_142ff36a0(void)

void FUN_142ff36a0(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  float fVar4;
  
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)(int)param_1[1] * 0x11;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0x11) {
    if (*plVar2 != 0) {
      iVar1 = rand();
      fVar4 = (float)FUN_142c98860(plVar2 + 1,param_2);
      if ((0.0 < fVar4) && ((float)iVar1 * 3.051851e-05 <= fVar4)) {
        (*(code *)*param_3)(param_3[1],plVar2);
      }
    }
  }
  return;
}



// FUNCTION 142ff3760 FUN_142ff3760 body=253 status=ok
// SIG undefined FUN_142ff3760(void)

void FUN_142ff3760(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 local_38 [2];
  
  iVar1 = *(int *)(param_1 + 0x528) + -1;
  lVar6 = (longlong)iVar1;
  if (-1 < iVar1) {
    lVar5 = lVar6 << 4;
    do {
      lVar3 = *(longlong *)(param_1 + 0x520);
      if (*(longlong *)(param_1 + 0x520) == 0) {
        lVar3 = param_1 + 0x420;
      }
      local_38[0] = *(undefined8 *)(lVar3 + lVar5);
      uVar2 = 0;
      if (*(int *)(param_2 + 8) != 0) {
        plVar4 = (longlong *)param_2[6];
        if ((longlong *)param_2[6] == (longlong *)0x0) {
          plVar4 = param_2 + 2;
        }
        if (plVar4 != (longlong *)0x0) {
          uVar2 = (**(code **)(*plVar4 + 8))();
        }
      }
      (*(code *)*param_2)(uVar2,local_38);
      lVar5 = lVar5 + -0x10;
      lVar6 = lVar6 + -1;
    } while (-1 < lVar6);
  }
  if (*(int *)(param_2 + 8) != 0) {
    plVar4 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar4 = param_2 + 2;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (param_2[6] == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 142ff3860 FUN_142ff3860 body=287 status=ok
// SIG undefined FUN_142ff3860(void)

void FUN_142ff3860(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  plVar3 = (longlong *)*param_1;
  fVar6 = 0.0;
  fVar7 = 0.0;
  plVar4 = plVar3 + (longlong)(int)param_1[1] * 0x11;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 0x11) {
    if (*plVar3 != 0) {
      fVar5 = (float)FUN_142c98860(plVar3 + 1,param_2);
      fVar7 = fVar7 + fVar5;
    }
  }
  iVar1 = rand();
  plVar3 = (longlong *)*param_1;
  iVar2 = (int)param_1[1];
  plVar4 = plVar3 + (longlong)iVar2 * 0x11;
  if (plVar3 != plVar4) {
    do {
      if (*plVar3 != 0) {
        fVar5 = (float)FUN_142c98860(plVar3 + 1,param_2);
        fVar6 = fVar5 + fVar6;
        if ((float)iVar1 * 3.051851e-05 * fVar7 <= fVar6) goto LAB_142ff3947;
      }
      plVar3 = plVar3 + 0x11;
    } while (plVar3 != plVar4);
    iVar2 = (int)param_1[1];
    plVar3 = (longlong *)*param_1;
  }
  plVar3 = plVar3 + (longlong)(iVar2 + -1) * 0x11;
LAB_142ff3947:
                    /* WARNING: Could not recover jumptable at 0x000142ff397c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_3)(param_3[1],plVar3);
  return;
}



// FUNCTION 142ff3980 FUN_142ff3980 body=2009 status=ok
// SIG undefined FUN_142ff3980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142ff3980(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined4 *local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  undefined4 local_688;
  undefined4 local_684;
  longlong *local_680;
  undefined8 local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar8);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,local_648);
    *(undefined1 *)(lVar9 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_628);
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar12 = plVar10 + 2;
    local_5f8 = plVar12;
    local_5f0 = plVar10;
    FUN_14044f790(&local_5f8,plVar12);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar12,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar12,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_6a8 = (undefined4 *)FUN_14068ed70(local_598);
    pplVar11 = (longlong **)((longlong)local_6a8 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_698 = plVar12;
    plStack_690 = plVar10;
    if (&local_698 != pplVar11) {
      local_698 = *pplVar11;
      plStack_690 = *(longlong **)((longlong)local_6a8 + 0x1b0);
      *pplVar11 = plVar12;
      *(longlong **)((longlong)local_6a8 + 0x1b0) = plVar10;
      local_5b0 = plVar12;
      plStack_5a8 = plVar10;
    }
    plVar12 = plStack_690;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_690 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    plVar12 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_608);
    local_658 = *plVar12;
    local_650 = (longlong *)plVar12[1];
    if (local_650 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_650 + 1) = (int)local_650[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_600 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_680 = &local_658;
    plVar13 = (longlong *)FUN_142fda290();
    local_5e0 = plVar13 + 2;
    local_5d8 = plVar13;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13 + 3,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6e8 = *(undefined4 *)((longlong)local_6a8 + 0x90);
    local_6b8 = (longlong)local_6a8 + 0xf8;
    local_6d0 = (longlong)local_6a8 + 0xe8;
    local_6c0 = *(undefined1 *)((longlong)local_6a8 + 0xf1);
    local_6d8 = (longlong)local_6a8 + 200;
    local_6e0 = (longlong)local_6a8 + 0x98;
    local_6c8 = *(undefined1 *)((longlong)local_6a8 + 0xf0);
    local_6f0 = (longlong)local_6a8 + 0x78;
    local_6f8 = (longlong)local_6a8 + 0x60;
    SWidget::SWidgetConstruct
              (plVar13 + 3,local_6a8,(longlong)local_6a8 + 0x30,(longlong)local_6a8 + 0x40);
    puVar4 = local_6a8;
    plVar12 = (longlong *)local_680[1];
    local_6a0 = *local_680;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_668 = local_6a0;
    local_660 = plVar12;
    FUN_142fee0f0(plVar13 + 2,local_6a8,&local_668);
    (**(code **)(plVar13[2] + 0x78))
              (plVar13 + 2,*(undefined4 *)(local_6a0 + 0x2f8),(longlong)puVar4 + 0x178,
               (longlong)puVar4 + 0x1a8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (((char)plVar13[6] < '\0') ||
       (cVar5 = (**(code **)(plVar13[3] + 0x1e8))(plVar13 + 3), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) | bVar6;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    plVar12 = local_650;
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_650 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_640 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_5c0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar13 + 2);
    param_2[1] = (longlong)plVar13;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar13 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  local_6a0 = *puVar7;
  plVar10 = (longlong *)puVar7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_610 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar12 = plVar10 + 1;
  local_678 = local_6a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
  }
  local_688 = *local_6a8;
  local_684 = local_6a8[1];
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x4f8);
  }
  local_670 = plVar10;
  (**(code **)(*plVar13 + 0x38))(plVar13,param_2,&local_688,&local_678);
  plVar13 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_670 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar9 = *plVar12;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return param_2;
  }
  (**(code **)*plVar10)(plVar10);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return param_2;
}



// FUNCTION 142ff4160 FUN_142ff4160 body=2009 status=ok
// SIG undefined FUN_142ff4160(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142ff4160(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined4 *local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  undefined4 local_688;
  undefined4 local_684;
  longlong *local_680;
  undefined8 local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar8);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,local_648);
    *(undefined1 *)(lVar9 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_628);
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar12 = plVar10 + 2;
    local_5f8 = plVar12;
    local_5f0 = plVar10;
    FUN_14044f790(&local_5f8,plVar12);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar12,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar12,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_6a8 = (undefined4 *)FUN_14068ed70(local_598);
    pplVar11 = (longlong **)((longlong)local_6a8 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_698 = plVar12;
    plStack_690 = plVar10;
    if (&local_698 != pplVar11) {
      local_698 = *pplVar11;
      plStack_690 = *(longlong **)((longlong)local_6a8 + 0x1b0);
      *pplVar11 = plVar12;
      *(longlong **)((longlong)local_6a8 + 0x1b0) = plVar10;
      local_5b0 = plVar12;
      plStack_5a8 = plVar10;
    }
    plVar12 = plStack_690;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_690 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    plVar12 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_608);
    local_658 = *plVar12;
    local_650 = (longlong *)plVar12[1];
    if (local_650 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_650 + 1) = (int)local_650[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_600 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_680 = &local_658;
    plVar13 = (longlong *)FUN_142fda290();
    local_5e0 = plVar13 + 2;
    local_5d8 = plVar13;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13 + 3,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6e8 = *(undefined4 *)((longlong)local_6a8 + 0x90);
    local_6b8 = (longlong)local_6a8 + 0xf8;
    local_6d0 = (longlong)local_6a8 + 0xe8;
    local_6c0 = *(undefined1 *)((longlong)local_6a8 + 0xf1);
    local_6d8 = (longlong)local_6a8 + 200;
    local_6e0 = (longlong)local_6a8 + 0x98;
    local_6c8 = *(undefined1 *)((longlong)local_6a8 + 0xf0);
    local_6f0 = (longlong)local_6a8 + 0x78;
    local_6f8 = (longlong)local_6a8 + 0x60;
    SWidget::SWidgetConstruct
              (plVar13 + 3,local_6a8,(longlong)local_6a8 + 0x30,(longlong)local_6a8 + 0x40);
    puVar4 = local_6a8;
    plVar12 = (longlong *)local_680[1];
    local_6a0 = *local_680;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_668 = local_6a0;
    local_660 = plVar12;
    FUN_142fee440(plVar13 + 2,local_6a8,&local_668);
    (**(code **)(plVar13[2] + 0x78))
              (plVar13 + 2,*(undefined4 *)(local_6a0 + 0x2f8),(longlong)puVar4 + 0x178,
               (longlong)puVar4 + 0x1a8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (((char)plVar13[6] < '\0') ||
       (cVar5 = (**(code **)(plVar13[3] + 0x1e8))(plVar13 + 3), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) | bVar6;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    plVar12 = local_650;
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_650 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_640 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_5c0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar13 + 2);
    param_2[1] = (longlong)plVar13;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar13 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  local_6a0 = *puVar7;
  plVar10 = (longlong *)puVar7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_610 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar12 = plVar10 + 1;
  local_678 = local_6a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
  }
  local_688 = *local_6a8;
  local_684 = local_6a8[1];
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x4f8);
  }
  local_670 = plVar10;
  (**(code **)(*plVar13 + 0x38))(plVar13,param_2,&local_688,&local_678);
  plVar13 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_670 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar9 = *plVar12;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return param_2;
  }
  (**(code **)*plVar10)(plVar10);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return param_2;
}



// FUNCTION 142ff4940 FUN_142ff4940 body=2009 status=ok
// SIG undefined FUN_142ff4940(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142ff4940(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined4 *local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  undefined4 local_688;
  undefined4 local_684;
  longlong *local_680;
  undefined8 local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar8);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,local_648);
    *(undefined1 *)(lVar9 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_628);
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar12 = plVar10 + 2;
    local_5f8 = plVar12;
    local_5f0 = plVar10;
    FUN_14044f790(&local_5f8,plVar12);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar12,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar12,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_6a8 = (undefined4 *)FUN_14068ed70(local_598);
    pplVar11 = (longlong **)((longlong)local_6a8 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_698 = plVar12;
    plStack_690 = plVar10;
    if (&local_698 != pplVar11) {
      local_698 = *pplVar11;
      plStack_690 = *(longlong **)((longlong)local_6a8 + 0x1b0);
      *pplVar11 = plVar12;
      *(longlong **)((longlong)local_6a8 + 0x1b0) = plVar10;
      local_5b0 = plVar12;
      plStack_5a8 = plVar10;
    }
    plVar12 = plStack_690;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_690 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    plVar12 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_608);
    local_658 = *plVar12;
    local_650 = (longlong *)plVar12[1];
    if (local_650 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_650 + 1) = (int)local_650[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_600 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_680 = &local_658;
    plVar13 = (longlong *)FUN_142fda290();
    local_5e0 = plVar13 + 2;
    local_5d8 = plVar13;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13 + 3,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6e8 = *(undefined4 *)((longlong)local_6a8 + 0x90);
    local_6b8 = (longlong)local_6a8 + 0xf8;
    local_6d0 = (longlong)local_6a8 + 0xe8;
    local_6c0 = *(undefined1 *)((longlong)local_6a8 + 0xf1);
    local_6d8 = (longlong)local_6a8 + 200;
    local_6e0 = (longlong)local_6a8 + 0x98;
    local_6c8 = *(undefined1 *)((longlong)local_6a8 + 0xf0);
    local_6f0 = (longlong)local_6a8 + 0x78;
    local_6f8 = (longlong)local_6a8 + 0x60;
    SWidget::SWidgetConstruct
              (plVar13 + 3,local_6a8,(longlong)local_6a8 + 0x30,(longlong)local_6a8 + 0x40);
    puVar4 = local_6a8;
    plVar12 = (longlong *)local_680[1];
    local_6a0 = *local_680;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_668 = local_6a0;
    local_660 = plVar12;
    FUN_142fee790(plVar13 + 2,local_6a8,&local_668);
    (**(code **)(plVar13[2] + 0x78))
              (plVar13 + 2,*(undefined4 *)(local_6a0 + 0x2f8),(longlong)puVar4 + 0x178,
               (longlong)puVar4 + 0x1a8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (((char)plVar13[6] < '\0') ||
       (cVar5 = (**(code **)(plVar13[3] + 0x1e8))(plVar13 + 3), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) | bVar6;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    plVar12 = local_650;
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_650 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_640 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_5c0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar13 + 2);
    param_2[1] = (longlong)plVar13;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar13 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  local_6a0 = *puVar7;
  plVar10 = (longlong *)puVar7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_610 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar12 = plVar10 + 1;
  local_678 = local_6a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
  }
  local_688 = *local_6a8;
  local_684 = local_6a8[1];
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x4f8);
  }
  local_670 = plVar10;
  (**(code **)(*plVar13 + 0x38))(plVar13,param_2,&local_688,&local_678);
  plVar13 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_670 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar9 = *plVar12;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return param_2;
  }
  (**(code **)*plVar10)(plVar10);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return param_2;
}



// FUNCTION 142ff5120 FUN_142ff5120 body=2009 status=ok
// SIG undefined FUN_142ff5120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong * FUN_142ff5120(longlong param_1,longlong *param_2,undefined4 *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  undefined4 *puVar4;
  char cVar5;
  byte bVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong **pplVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_718 [32];
  longlong local_6f8;
  longlong local_6f0;
  undefined4 local_6e8;
  longlong local_6e0;
  longlong local_6d8;
  longlong local_6d0;
  undefined1 local_6c8;
  undefined1 local_6c0;
  longlong local_6b8;
  undefined4 *local_6a8;
  longlong local_6a0;
  longlong *local_698;
  longlong *plStack_690;
  undefined4 local_688;
  undefined4 local_684;
  longlong *local_680;
  undefined8 local_678;
  longlong *local_670;
  longlong local_668;
  longlong *local_660;
  longlong local_658;
  longlong *local_650;
  undefined1 local_648 [8];
  longlong *local_640;
  undefined1 local_630;
  undefined8 local_628;
  undefined4 local_620;
  undefined1 local_618 [8];
  longlong *local_610;
  undefined1 local_608 [8];
  longlong *local_600;
  longlong *local_5f8;
  longlong *local_5f0;
  longlong *local_5e0;
  longlong *local_5d8;
  undefined1 local_5c8 [8];
  longlong *local_5c0;
  longlong *local_5b0;
  longlong *plStack_5a8;
  undefined1 local_598 [448];
  undefined1 local_3d8 [912];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_718;
  local_6a8 = param_3;
  if (((*(int *)(param_1 + 0x500) == 0) || (*(longlong **)(param_1 + 0x4f8) == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(**(longlong **)(param_1 + 0x4f8) + 0x18))(), cVar5 == '\0')) {
    uVar8 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_5c8,L"OnGenerateWidget() not assigned.",L"SListView",L"BrokenUIMessage"
                      );
    FText::FText(local_648,uVar8);
    local_630 = 1;
    local_628 = 0;
    local_620 = 0;
    lVar9 = STextBlock::FArguments::FArguments(local_3d8);
    FText::operator=(lVar9 + 0x108,local_648);
    *(undefined1 *)(lVar9 + 0x120) = local_630;
    TBaseDelegate<FSlateBrush_const_*>::operator=(lVar9 + 0x128,&local_628);
    plVar10 = (longlong *)operator_new(0x660);
    if (plVar10 == (longlong *)0x0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar10 + 1) = 1;
      *(undefined4 *)((longlong)plVar10 + 0xc) = 1;
      *plVar10 = (longlong)&PTR_FUN_144043520;
      if (plVar10 != (longlong *)0xfffffffffffffff0) {
        FUN_1419a9150();
      }
    }
    plVar12 = plVar10 + 2;
    local_5f8 = plVar12;
    local_5f0 = plVar10;
    FUN_14044f790(&local_5f8,plVar12);
    local_6f8 = 0x650;
    SWidget::SetDebugInfo
              (plVar12,"STextBlock",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42d);
    local_6e8 = *(undefined4 *)(lVar9 + 0x90);
    local_6b8 = lVar9 + 0xf8;
    local_6d0 = lVar9 + 0xe8;
    local_6c0 = *(undefined1 *)(lVar9 + 0xf1);
    local_6d8 = lVar9 + 200;
    local_6e0 = lVar9 + 0x98;
    local_6c8 = *(undefined1 *)(lVar9 + 0xf0);
    local_6f0 = lVar9 + 0x78;
    local_6f8 = lVar9 + 0x60;
    SWidget::SWidgetConstruct(plVar12,lVar9,lVar9 + 0x30,lVar9 + 0x40);
    FUN_1419b0120(plVar12,lVar9);
    if (((char)plVar10[5] < '\0') ||
       (cVar5 = (**(code **)(*plVar12 + 0x1e8))(plVar12), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) & 0xfe;
    *(byte *)((longlong)plVar10 + 0x29) = *(byte *)((longlong)plVar10 + 0x29) | bVar6;
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_6a8 = (undefined4 *)FUN_14068ed70(local_598);
    pplVar11 = (longlong **)((longlong)local_6a8 + 0x1a8);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
      UNLOCK();
    }
    local_698 = plVar12;
    plStack_690 = plVar10;
    if (&local_698 != pplVar11) {
      local_698 = *pplVar11;
      plStack_690 = *(longlong **)((longlong)local_6a8 + 0x1b0);
      *pplVar11 = plVar12;
      *(longlong **)((longlong)local_6a8 + 0x1b0) = plVar10;
      local_5b0 = plVar12;
      plStack_5a8 = plVar10;
    }
    plVar12 = plStack_690;
    if (plStack_690 != (longlong *)0x0) {
      LOCK();
      plVar13 = plStack_690 + 1;
      lVar9 = *plVar13;
      *(int *)plVar13 = (int)*plVar13 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plStack_690)(plStack_690);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_690 + 8))(plStack_690,1);
        }
      }
    }
    plVar12 = (longlong *)
              TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_608);
    local_658 = *plVar12;
    local_650 = (longlong *)plVar12[1];
    if (local_650 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_650 + 1) = (int)local_650[1] + 1;
      UNLOCK();
    }
    if (local_600 != (longlong *)0x0) {
      LOCK();
      plVar12 = local_600 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_600)(local_600);
        LOCK();
        piVar1 = (int *)((longlong)local_600 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_600 + 8))(local_600,1);
        }
      }
    }
    local_680 = &local_658;
    plVar13 = (longlong *)FUN_142fda290();
    local_5e0 = plVar13 + 2;
    local_5d8 = plVar13;
    TSharedRef<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>,1>::
    Init<STableRow<TSharedPtr<SLiveLinkMessageBusSourceFactory::FLiveLinkSource,1>_>_>
              (&local_5e0,local_5e0);
    local_6f8 = 0x440;
    SWidget::SetDebugInfo
              (plVar13 + 3,"STableRow<ItemType>",
               "d:\\oak\\main\\engine\\source\\runtime\\slate\\public\\Widgets/Views/SListView.h",
               0x42a);
    local_6e8 = *(undefined4 *)((longlong)local_6a8 + 0x90);
    local_6b8 = (longlong)local_6a8 + 0xf8;
    local_6d0 = (longlong)local_6a8 + 0xe8;
    local_6c0 = *(undefined1 *)((longlong)local_6a8 + 0xf1);
    local_6d8 = (longlong)local_6a8 + 200;
    local_6e0 = (longlong)local_6a8 + 0x98;
    local_6c8 = *(undefined1 *)((longlong)local_6a8 + 0xf0);
    local_6f0 = (longlong)local_6a8 + 0x78;
    local_6f8 = (longlong)local_6a8 + 0x60;
    SWidget::SWidgetConstruct
              (plVar13 + 3,local_6a8,(longlong)local_6a8 + 0x30,(longlong)local_6a8 + 0x40);
    puVar4 = local_6a8;
    plVar12 = (longlong *)local_680[1];
    local_6a0 = *local_680;
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar12 + 1) = (int)plVar12[1] + 1;
      UNLOCK();
    }
    local_668 = local_6a0;
    local_660 = plVar12;
    FUN_142feeae0(plVar13 + 2,local_6a8,&local_668);
    (**(code **)(plVar13[2] + 0x78))
              (plVar13 + 2,*(undefined4 *)(local_6a0 + 0x2f8),(longlong)puVar4 + 0x178,
               (longlong)puVar4 + 0x1a8);
    if (plVar12 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar12 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar12)(plVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    if (((char)plVar13[6] < '\0') ||
       (cVar5 = (**(code **)(plVar13[3] + 0x1e8))(plVar13 + 3), cVar5 != '\0')) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) & 0xfe;
    *(byte *)((longlong)plVar13 + 0x31) = *(byte *)((longlong)plVar13 + 0x31) | bVar6;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar12 = plVar13 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    plVar12 = local_650;
    if (local_650 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_650 + 1;
      lVar9 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_650)(local_650);
        LOCK();
        piVar1 = (int *)((longlong)plVar12 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar12 + 8))(plVar12,1);
        }
      }
    }
    FUN_140690c40(local_598);
    if (plVar10 != (longlong *)0x0) {
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
      LOCK();
      plVar12 = plVar10 + 1;
      lVar9 = *plVar12;
      *(int *)plVar12 = (int)*plVar12 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*plVar10)(plVar10);
        LOCK();
        piVar1 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar10 + 8))(plVar10,1);
        }
      }
    }
    FUN_140691150(local_3d8);
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_628);
    if (local_640 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_640 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_640)(local_640);
        LOCK();
        piVar1 = (int *)((longlong)local_640 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_640 + 8))(local_640,1);
        }
      }
    }
    if (local_5c0 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_5c0 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_5c0)(local_5c0);
        LOCK();
        piVar1 = (int *)((longlong)local_5c0 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_5c0 + 8))(local_5c0,1);
        }
      }
    }
    *param_2 = (longlong)(plVar13 + 2);
    param_2[1] = (longlong)plVar13;
    LOCK();
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    UNLOCK();
    LOCK();
    plVar10 = plVar13 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar13)(plVar13);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
    return param_2;
  }
  puVar7 = (undefined8 *)TSharedFromThis<FSceneViewExtensionBase,1>::AsShared(param_1 + 8,local_618)
  ;
  local_6a0 = *puVar7;
  plVar10 = (longlong *)puVar7[1];
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
    UNLOCK();
  }
  if (local_610 != (longlong *)0x0) {
    LOCK();
    plVar12 = local_610 + 1;
    lVar9 = *plVar12;
    *(int *)plVar12 = (int)*plVar12 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_610)(local_610);
      LOCK();
      piVar1 = (int *)((longlong)local_610 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_610 + 8))(local_610,1);
      }
    }
  }
  plVar12 = plVar10 + 1;
  local_678 = local_6a0;
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar12 = (int)*plVar12 + 1;
    UNLOCK();
  }
  local_688 = *local_6a8;
  local_684 = local_6a8[1];
  if (*(int *)(param_1 + 0x500) == 0) {
    plVar13 = (longlong *)0x0;
  }
  else {
    plVar13 = *(longlong **)(param_1 + 0x4f8);
  }
  local_670 = plVar10;
  (**(code **)(*plVar13 + 0x38))(plVar13,param_2,&local_688,&local_678);
  plVar13 = local_670;
  if (local_670 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_670 + 1;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_670)(local_670);
      LOCK();
      piVar1 = (int *)((longlong)plVar13 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar13 + 8))(plVar13,1);
      }
    }
  }
  if (plVar10 == (longlong *)0x0) {
    return param_2;
  }
  LOCK();
  lVar9 = *plVar12;
  *(int *)plVar12 = (int)*plVar12 + -1;
  UNLOCK();
  if ((int)lVar9 != 1) {
    return param_2;
  }
  (**(code **)*plVar10)(plVar10);
  LOCK();
  piVar1 = (int *)((longlong)plVar10 + 0xc);
  iVar3 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar3 != 1) {
    return param_2;
  }
  (**(code **)(*plVar10 + 8))(plVar10,1);
  return param_2;
}



// FUNCTION 142ff5900 FUN_142ff5900 body=59 status=ok
// SIG undefined FUN_142ff5900(void)

int FUN_142ff5900(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x228);
  iVar3 = 0;
  lVar4 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar2;
  if (lVar2 != lVar4) {
    do {
      iVar1 = *(int *)(lVar2 + 0x2c);
      if (*(int *)(lVar2 + 0x2c) <= iVar3) {
        iVar1 = iVar3;
      }
      iVar3 = iVar1;
      lVar2 = lVar2 + 0x40;
    } while (lVar2 != lVar4);
    return iVar3 + 1;
  }
  return 1;
}



// FUNCTION 142ff5940 FUN_142ff5940 body=847 status=ok
// SIG undefined FUN_142ff5940(void)

undefined8 FUN_142ff5940(undefined4 *param_1,char *param_2,char param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_38 [8];
  longlong local_30 [2];
  undefined4 local_20;
  
  cVar3 = FUN_143003610();
  lVar12 = 0;
  *param_2 = '\0';
  plVar1 = (longlong *)(param_2 + 8);
  uVar4 = 0;
  if (cVar3 != '\0') {
    if (plVar1 != local_30) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = 0;
      param_2[0x14] = '\0';
      param_2[0x15] = '\0';
      param_2[0x16] = '\0';
      param_2[0x17] = '\0';
    }
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    if (*(int *)(param_2 + 0x14) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    param_2[0x18] = '\0';
    param_2[0x19] = '\0';
    param_2[0x1a] = '\0';
    param_2[0x1b] = '\0';
    *param_2 = '\x01';
    FUN_140ac35b0(param_2,4,7);
    FUN_140ac35b0(param_2,0,1);
    if (param_3 != '\0') {
      uVar4 = rand();
      iVar5 = rand();
      uVar4 = iVar5 << 0x10 | uVar4;
    }
    FUN_140ac35b0(param_2,uVar4,0x20);
    FUN_140ac35b0(param_2,0xffff,0x10);
    cVar3 = FUN_140ac35b0(param_2,0x80,8);
    if (cVar3 != '\0') {
      lVar6 = FUN_142ff6920();
      cVar3 = FUN_140ac35b0(param_2,*(undefined4 *)(lVar6 + 0x38),7);
      if (cVar3 != '\0') {
        uVar7 = FUN_14301f840();
        cVar3 = FUN_140ac3520(param_2,uVar7,*(undefined8 *)(param_1 + 4));
        if (cVar3 != '\0') {
          uVar7 = UUGStartScreenUW::GetPrivateStaticClass();
          cVar3 = FUN_140ac3520(param_2,uVar7,*(undefined8 *)(param_1 + 2));
          if (cVar3 != '\0') {
            uVar7 = FUN_14302d420();
            cVar3 = FUN_140ac3520(param_2,uVar7,*(undefined8 *)(param_1 + 6));
            if ((cVar3 != '\0') && (cVar3 = FUN_140ac35b0(param_2,*param_1,7), cVar3 != '\0')) {
              lVar6 = *(longlong *)(*(longlong *)(param_1 + 4) + 0x38);
              lVar13 = lVar12;
              if (((lVar6 != 0) ||
                  ((*(longlong *)(*(longlong *)(param_1 + 4) + 0x30) != 0 &&
                   (lVar6 = FUN_140cb9700(), lVar6 != 0)))) &&
                 (lVar6 = *(longlong *)(lVar6 + 0x30), lVar6 != 0)) {
                lVar8 = UWidget::GetPrivateStaticClass();
                lVar10 = lVar6;
                do {
                  lVar13 = lVar6;
                  if (lVar10 == lVar8) break;
                  lVar10 = *(longlong *)(lVar10 + 0x30);
                  lVar13 = lVar12;
                } while (lVar10 != 0);
              }
              cVar3 = FUN_140ac35b0(param_2,param_1[10],6);
              if (cVar3 != '\0') {
                puVar11 = *(undefined8 **)(param_1 + 8);
                puVar2 = puVar11 + (int)param_1[10];
                for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
                  cVar3 = FUN_140ac3520(param_2,lVar13,*puVar11);
                  if (cVar3 == '\0') goto LAB_142ff5c49;
                }
                cVar3 = FUN_140ac35b0(param_2,param_1[0xe],4);
                if (cVar3 != '\0') {
                  puVar11 = *(undefined8 **)(param_1 + 0xc);
                  puVar2 = puVar11 + (int)param_1[0xe];
                  for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
                    uVar7 = *puVar11;
                    uVar9 = FUN_143025520();
                    cVar3 = FUN_140ac3520(param_2,uVar9,uVar7);
                    if (cVar3 == '\0') goto LAB_142ff5c49;
                  }
                  cVar3 = FUN_14301dbd0(param_2,param_1 + 0x10);
                  if ((cVar3 != '\0') &&
                     (cVar3 = FUN_140ac35b0(param_2,param_1[0x16],4), cVar3 != '\0')) {
                    puVar11 = *(undefined8 **)(param_1 + 0x14);
                    puVar2 = puVar11 + (int)param_1[0x16];
                    for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
                      uVar7 = *puVar11;
                      uVar9 = ULevelStreaming::GetPrivateStaticClass();
                      cVar3 = FUN_140ac3520(param_2,uVar9,uVar7);
                      if (cVar3 == '\0') goto LAB_142ff5c49;
                    }
                    cVar3 = FUN_140ac35b0(param_2,*(undefined1 *)(param_1 + 0x18),8);
                    if (cVar3 != '\0') {
                      if (*param_2 == '\x01') {
                        *param_2 = '\x02';
                      }
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
LAB_142ff5c49:
        local_38[0] = 0;
        local_30[0] = 0;
        local_30[1] = 0;
        local_20 = 0;
        FUN_140aa0a20(param_2,local_38);
        if (local_30[0] != 0) {
          FMemory::Free();
        }
        return 0;
      }
    }
    *param_2 = '\0';
  }
  if (plVar1 != local_30) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = 0;
    param_2[0x10] = '\0';
    param_2[0x11] = '\0';
    param_2[0x12] = '\0';
    param_2[0x13] = '\0';
    param_2[0x14] = '\0';
    param_2[0x15] = '\0';
    param_2[0x16] = '\0';
    param_2[0x17] = '\0';
  }
  param_2[0x18] = '\0';
  param_2[0x19] = '\0';
  param_2[0x1a] = '\0';
  param_2[0x1b] = '\0';
  return 0;
}



// FUNCTION 142ff5c90 FUN_142ff5c90 body=198 status=ok
// SIG undefined FUN_142ff5c90(void)

longlong FUN_142ff5c90(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong local_38;
  undefined4 local_30;
  undefined4 local_2c;
  char local_28 [8];
  longlong local_20 [2];
  undefined4 local_10;
  
  lVar2 = 0;
  local_28[0] = '\0';
  local_20[0] = 0;
  local_20[1] = 0;
  local_10 = 0;
  cVar1 = FUN_142ff5940(param_1,local_28);
  if (cVar1 != '\0') {
    FUN_142ff1ff0(local_28);
    if (local_28[0] == '\x04') {
      FUN_142ff1dc0(&local_38,local_20);
      uVar4 = local_30;
      uVar3 = local_2c;
    }
    else {
      local_38 = lVar2;
      uVar4 = 0;
      uVar3 = 0;
    }
    if (param_2 == &local_38) {
      if (local_38 != 0) {
        FMemory::Free(local_38);
      }
    }
    else {
      if (*param_2 != 0) {
        FMemory::Free();
      }
      *param_2 = local_38;
      *(undefined4 *)(param_2 + 1) = uVar4;
      *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    }
    lVar2 = 1;
  }
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return lVar2;
}



// FUNCTION 142ff5d60 FUN_142ff5d60 body=213 status=ok
// SIG undefined FUN_142ff5d60(void)

undefined8 * FUN_142ff5d60(longlong *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined2 *puVar5;
  
  if (param_1[0x42] == 0) {
    *param_2 = 0;
    param_2[1] = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"ERROR",0xc);
    return param_2;
  }
  puVar4 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0x4d);
  if (*(int *)(puVar4 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*puVar4;
  }
  uVar1 = FUN_140438070(puVar5);
  uVar2 = (**(code **)(*(longlong *)param_1[0x42] + 0x278))();
  uVar3 = (**(code **)(*param_1 + 0x400))(param_1);
  FString::PrintfImpl(param_2,L"%u%d%u",uVar1,uVar3,uVar2);
  return param_2;
}



// FUNCTION 142ff5e40 FUN_142ff5e40 body=700 status=ok
// SIG undefined FUN_142ff5e40(void)

void FUN_142ff5e40(longlong *param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined1 local_d8 [16];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [8];
  longlong *local_70;
  undefined1 local_68 [3] [16];
  
  FUN_142fffff0(param_1 + 0x85,&local_c8,param_2);
  plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  if (plVar10 == (longlong *)0x0) {
    local_res8 = *param_2;
    local_resc = param_2[1];
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x268))(param_1,local_78,&local_res8);
    local_b0 = (longlong *)puVar8[1];
    uVar4 = *puVar8;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
      UNLOCK();
    }
    local_c8 = (undefined4)uVar4;
    uStack_c4 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_b8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_c0,&local_b0);
    plVar10 = local_b0;
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar10 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_b0 + 8))(local_b0,1);
        }
      }
    }
    if (local_70 != (longlong *)0x0) {
      LOCK();
      plVar10 = local_70 + 1;
      lVar9 = *plVar10;
      *(int *)plVar10 = (int)*plVar10 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (**(code **)*local_70)(local_70);
        LOCK();
        piVar2 = (int *)((longlong)local_70 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_70 + 8))(local_70,1);
        }
      }
    }
    plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  (**(code **)(*plVar10 + 0x10))(plVar10,param_3);
  uVar7 = uStack_bc;
  uStack_90 = uStack_c0;
  uVar6 = uStack_c4;
  uVar5 = local_c8;
  local_68[0]._4_4_ = uStack_c4;
  local_68[0]._0_4_ = local_c8;
  local_68[0]._8_4_ = uStack_c0;
  local_68[0]._12_4_ = uStack_bc;
  lVar9 = 0;
  if (local_68[0]._8_8_ != 0) {
    LOCK();
    piVar2 = (int *)(local_68[0]._8_8_ + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
    plVar10 = (longlong *)CONCAT44(uStack_c4,local_c8);
  }
  local_res10 = *param_2;
  local_res14 = param_2[1];
  FUN_143005e60(param_1 + 0x85,&local_res10,local_68);
  (**(code **)(*plVar10 + 0x50))(plVar10,&local_a8);
  FUN_14185c5d0(local_a8,param_5);
  SWidget::GetDesiredSize(local_a8,local_d8);
  if (param_3 < param_4) {
    uStack_7c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_bc,uStack_c0);
    }
    local_88 = uVar5;
    uStack_84 = uVar6;
    uStack_80 = uStack_90;
    FUN_1419b3c90(param_1,&local_88);
    plVar10 = (longlong *)CONCAT44(uStack_7c,uStack_80);
  }
  else {
    uStack_8c = uVar7;
    if (lVar9 != 0) {
      LOCK();
      *(int *)(lVar9 + 8) = *(int *)(lVar9 + 8) + 1;
      UNLOCK();
      lVar9 = CONCAT44(uStack_bc,uStack_c0);
    }
    local_98 = uVar5;
    uStack_94 = uVar6;
    FUN_1419aa990(param_1,&local_98);
    plVar10 = (longlong *)CONCAT44(uStack_8c,uStack_90);
  }
  if (plVar10 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar10 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar10)(plVar10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar10 + 8))(plVar10,1);
      }
    }
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
  }
  if (local_a0 != (longlong *)0x0) {
    LOCK();
    plVar10 = local_a0 + 1;
    lVar9 = *plVar10;
    *(int *)plVar10 = (int)*plVar10 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_a0)(local_a0);
      LOCK();
      piVar2 = (int *)((longlong)local_a0 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_a0 + 8))(local_a0,1);
      }
    }
    lVar9 = CONCAT44(uStack_bc,uStack_c0);
  }
  if (lVar9 != 0) {
    LOCK();
    piVar2 = (int *)(lVar9 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      puVar8 = (undefined8 *)CONCAT44(uStack_bc,uStack_c0);
      (**(code **)*puVar8)(puVar8);
      LOCK();
      piVar2 = (int *)((longlong)puVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_bc,uStack_c0) + 8))
                  ((longlong *)CONCAT44(uStack_bc,uStack_c0),1);
      }
    }
  }
  return;
}



// FUNCTION 142ff6100 FUN_142ff6100 body=530 status=ok
// SIG undefined FUN_142ff6100(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ff6100(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b45db0) {
    _Init_thread_header(&DAT_146b45db0);
    if (DAT_146b45db0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"Pickups",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"Pickups",&DAT_145a29c1c);
      FUN_14217c110(&DAT_146b45d88,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_146b45d90);
      FUN_14217bd20(&DAT_146b45d98);
      FUN_14217bd20(&DAT_146b45da0);
      FUN_14217bd20(&DAT_146b45da8);
      uVar2 = DAT_146b45d88;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146b45d88;
      _DAT_146b45d90 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_character_guid",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146b45d88;
      _DAT_146b45d98 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"pickup_action",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_146b45d88;
      _DAT_146b45da0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"All_Items",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_146b45da8 = *puVar1;
      _Init_thread_footer(&DAT_146b45db0);
      return &DAT_146b45d88;
    }
  }
  return &DAT_146b45d88;
}



// FUNCTION 142ff6320 FUN_142ff6320 body=192 status=ok
// SIG undefined FUN_142ff6320(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ff6320(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b45950) {
    _Init_thread_header(&DAT_146b45950);
    if (DAT_146b45950 == -1) {
      FGCObject::FGCObject(&DAT_146b45918);
      _DAT_146b45918 = &PTR_FUN_145a37398;
      _DAT_146b45928 = 0;
      _DAT_146b45930 = 0;
      _DAT_146b45938 = 0;
      DAT_146b45940 = 0;
      _DAT_146b45948 = 0;
      atexit(FUN_143ec2ad0);
      _Init_thread_footer(&DAT_146b45950);
    }
  }
  if (DAT_146b45954 == '\0') {
    DAT_146b45954 = '\x01';
    FUN_143001de0(&DAT_146b45918);
  }
  return &DAT_146b45918;
}



// FUNCTION 142ff63e0 FUN_142ff63e0 body=390 status=ok
// SIG undefined FUN_142ff63e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ff63e0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_14686d788) && (_Init_thread_header(&DAT_14686d788), DAT_14686d788 == -1))
  {
    uVar5 = 0;
    _DAT_14686d730 = 0;
    _DAT_14686d738 = 0;
    _DAT_14686d750 = 0;
    _DAT_14686d758 = 0;
    _DAT_14686d760 = 0xffffffff;
    _DAT_14686d764 = 0;
    _DAT_14686d770 = 0;
    _DAT_14686d778 = 0;
    _DAT_14686d780 = 0;
    plVar2 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar2 != (longlong *)0x0) {
      plVar2[1] = (longlong)&DAT_14686d730;
      *plVar2 = (longlong)&DAT_143f3ed00;
      plVar2[2] = (longlong)&LAB_143009a10;
      lVar3 = FDelegateHandle::GenerateNewID();
      plVar2[4] = lVar3;
      *plVar2 = (longlong)&PTR_GetPoolName_143f3ed48;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535868,1);
      puVar4 = (undefined8 *)(**(code **)(*plVar2 + 0x20))(plVar2,local_res8);
      iVar1 = DAT_146535870;
      lVar3 = (longlong)DAT_146535870;
      uVar5 = *puVar4;
      DAT_146535870 = DAT_146535870 + 1;
      if (DAT_146535874 < DAT_146535870) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535868,iVar1);
      }
      puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535868);
      *puVar4 = plVar2;
      *(undefined4 *)(puVar4 + 1) = 3;
    }
    _DAT_14686d780 = uVar5;
    atexit((_func_5014 *)&LAB_143e511d0);
    _Init_thread_footer(&DAT_14686d788);
    return &DAT_14686d730;
  }
  return &DAT_14686d730;
}



// FUNCTION 142ff6570 FUN_142ff6570 body=569 status=ok
// SIG undefined FUN_142ff6570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ff6570(void)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 local_res8 [8];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b45e28) && (_Init_thread_header(&DAT_146b45e28), DAT_146b45e28 == -1))
  {
    uVar2 = FUN_14164ab60();
    FUN_14158c9d0(&DAT_146b45dc0,L"FNearbyPickups",0x40a00000,uVar2);
    _DAT_146b45e08 = 0xffffffff;
    _DAT_146b45dc0 = &PTR_FUN_145a3bd18;
    DAT_146b45dd8 = 0;
    _DAT_146b45de0 = 0;
    DAT_146b45df8 = 0;
    _DAT_146b45e00 = 0;
    _DAT_146b45e0c = 0;
    DAT_146b45e18 = 0;
    _DAT_146b45e20 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = (longlong)&DAT_146b45dc0;
      *plVar3 = (longlong)&PTR_GetPoolName_1446fea78;
      plVar3[2] = (longlong)FUN_143000c80;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_1446feac0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535760,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = DAT_146535768;
      lVar4 = (longlong)DAT_146535768;
      DAT_146535768 = DAT_146535768 + 1;
      if (DAT_14653576c < DAT_146535768) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535760,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_146535760);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    plVar3 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar3 != (longlong *)0x0) {
      plVar3[1] = (longlong)&DAT_146b45dc0;
      *plVar3 = (longlong)&PTR_GetPoolName_1446fea78;
      plVar3[2] = (longlong)&LAB_143000ef0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar3[4] = lVar4;
      *plVar3 = (longlong)&PTR_GetPoolName_1446feac0;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
      (**(code **)(*plVar3 + 0x20))(plVar3,local_res8);
      iVar1 = DAT_1465357b0;
      lVar4 = (longlong)DAT_1465357b0;
      DAT_1465357b0 = DAT_1465357b0 + 1;
      if (DAT_1465357b4 < DAT_1465357b0) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
      }
      puVar5 = (undefined8 *)(lVar4 * 0x10 + DAT_1465357a8);
      *puVar5 = plVar3;
      *(undefined4 *)(puVar5 + 1) = 3;
    }
    atexit(FUN_143ec29b0);
    _Init_thread_footer(&DAT_146b45e28);
    return &DAT_146b45dc0;
  }
  return &DAT_146b45dc0;
}



// FUNCTION 142ff67b0 FUN_142ff67b0 body=361 status=ok
// SIG undefined FUN_142ff67b0(void)

longlong FUN_142ff67b0(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  puVar6 = (undefined8 *)0x0;
  plVar5 = DAT_146b45810;
  if (DAT_146b45810 == (longlong *)0x0) {
    plVar5 = (longlong *)&DAT_146b457f0;
  }
  plVar1 = plVar5 + DAT_146b45818;
  while( true ) {
    if (plVar5 == plVar1) {
      puVar4 = (undefined8 *)operator_new(0x530);
      if (puVar4 != (undefined8 *)0x0) {
        *puVar4 = &PTR__purecall_143f740d8;
        plVar5 = (longlong *)FUN_1404cfca0();
        iVar2 = (int)plVar5[1];
        *(int *)(plVar5 + 1) = iVar2 + 1;
        if (*(int *)((longlong)plVar5 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar5,iVar2);
        }
        *(undefined8 **)(*plVar5 + (longlong)iVar2 * 8) = puVar4;
        *puVar4 = &PTR_FUN_145a3acf0;
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        puVar4[0x82] = 0;
        puVar4[0x83] = 0;
        puVar4[0xa4] = 0;
        puVar4[0xa5] = 0;
        FWeakObjectPtr::operator=(puVar4 + 1,param_1);
        puVar6 = puVar4;
      }
      iVar2 = DAT_146b45818;
      lVar7 = (longlong)DAT_146b45818;
      DAT_146b45818 = DAT_146b45818 + 1;
      if (DAT_146b4581c < DAT_146b45818) {
        TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                  (&DAT_146b457f0,iVar2);
      }
      plVar5 = DAT_146b45810;
      if (DAT_146b45810 == (longlong *)0x0) {
        plVar5 = (longlong *)&DAT_146b457f0;
      }
      plVar5[lVar7] = (longlong)puVar6;
      plVar5 = DAT_146b45810;
      if (DAT_146b45810 == (longlong *)0x0) {
        plVar5 = (longlong *)&DAT_146b457f0;
      }
      return plVar5[DAT_146b45818 + -1];
    }
    lVar7 = *plVar5;
    lVar3 = FWeakObjectPtr::Get(lVar7 + 8);
    if (lVar3 == param_1) break;
    plVar5 = plVar5 + 1;
  }
  return lVar7;
}



// FUNCTION 142ff6920 FUN_142ff6920 body=518 status=ok
// SIG undefined FUN_142ff6920(void)

longlong FUN_142ff6920(void)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined2 *local_res10;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28 [2];
  
  if (DAT_146b45cc0 == 0) {
    uVar4 = GetTransientPackage();
    FUN_1417846f0(uVar4,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    lVar10 = 0;
    local_res8 = 0;
    uVar5 = UInputSettings::GetPrivateStaticClass();
    lVar6 = FUN_1417985e0(uVar5,uVar4,0,0,0,0,0,0,0);
    iVar1 = *(int *)(lVar6 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar8;
      lVar10 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
               (longlong)(int)((uVar3 & 0xffff) - uVar8) * 0x18;
    }
    DAT_146b45cc0 = lVar6;
    *(uint *)(lVar10 + 8) = *(uint *)(lVar10 + 8) | 0x40000000;
    *(undefined4 *)(lVar6 + 0x38) = 0;
    TSet<TTuple<TSoftClassPtr<UBaseMenuPage>,UBaseMenuPage_*>,TDefaultMapHashableKeyFuncs<TSoftClassPtr<UBaseMenuPage>,UBaseMenuPage_*,0>,FDefaultSetAllocator>
    ::Empty(lVar6 + 0x40,0);
    TSet<TTuple<FName,FConfigValue>,TDefaultMapHashableKeyFuncs<FName,FConfigValue,1>,FDefaultSetAllocator>
    ::Empty(lVar6 + 0x90,0);
    local_48 = (undefined2 *)0x0;
    local_40 = 0;
    local_38 = 0;
    local_30 = 0;
    puVar7 = (undefined8 *)FUN_142ff84c0(local_28,1);
    if (*(int *)(puVar7 + 1) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = (undefined2 *)*puVar7;
    }
    cVar2 = FUN_141676460(&local_38,puVar9,0);
    if (local_28[0] != 0) {
      FMemory::Free();
    }
    if (cVar2 == '\0') {
      if (local_38 != 0) {
        FMemory::Free();
      }
    }
    else {
      uVar3 = (int)local_30 - 0x20;
      lVar10 = (ulonglong)uVar3 + local_38;
      FAES::DecryptData(lVar10,0x20);
      FAES::DecryptData(local_38,uVar3,lVar10);
      FFileHelper::BufferToString(&local_48,local_38,uVar3);
      if (local_38 != 0) {
        FMemory::Free();
      }
      local_res8 = CONCAT44(local_res8._4_4_,1);
      local_res10 = &DAT_143f3eda8;
      if ((int)local_40 != 0) {
        local_res10 = local_48;
      }
      cVar2 = FUN_143009f40(lVar6,&local_res10,&local_res8);
      if ((cVar2 != '\0') && ((int)local_res8 == 1)) {
        FUN_143003790(lVar6,&local_res10);
      }
    }
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  return DAT_146b45cc0;
}



// FUNCTION 142ff6b30 FUN_142ff6b30 body=330 status=ok
// SIG undefined FUN_142ff6b30(void)

void FUN_142ff6b30(longlong param_1,undefined8 param_2,ulonglong param_3,longlong *param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  int local_res8;
  
  iVar5 = 0;
  local_res8 = 0;
  uVar9 = param_3;
  lVar3 = param_1;
  while ((lVar3 != 0 && (iVar5 == 0))) {
    plVar8 = *(longlong **)(lVar3 + 0xc0);
    plVar10 = plVar8 + (longlong)*(int *)(lVar3 + 200) * 0x10;
    iVar5 = 0;
    for (; plVar8 != plVar10; plVar8 = plVar8 + 0x10) {
      cVar4 = FUN_1430032c0(plVar8,param_2,uVar9);
      if ((cVar4 != '\0') &&
         ((lVar6 = *(longlong *)(param_1 + 0xb0), lVar6 != 0 ||
          ((*(longlong *)(param_1 + 0x30) != 0 && (lVar6 = FUN_140eac160(), lVar6 != 0)))))) {
        iVar5 = (int)param_4[1];
        lVar1 = plVar8[0xf];
        lVar2 = *plVar8;
        *(int *)(param_4 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(param_4,iVar5);
        }
        plVar7 = (longlong *)((longlong)iVar5 * 0x20 + *param_4);
        local_res8 = local_res8 + 1;
        *plVar7 = lVar6;
        plVar7[1] = lVar2;
        *(int *)(plVar7 + 2) = (int)param_3;
        plVar7[3] = lVar1;
      }
      uVar9 = param_3 & 0xffffffff;
      iVar5 = local_res8;
    }
    lVar3 = *(longlong *)(lVar3 + 0x30);
  }
  return;
}



// FUNCTION 142ff6c80 FUN_142ff6c80 body=214 status=ok
// SIG undefined FUN_142ff6c80(void)

undefined8 FUN_142ff6c80(longlong param_1,int *param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  int local_30;
  undefined8 local_28;
  undefined1 local_20;
  byte local_1f;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  undefined4 local_10;
  byte local_c;
  
  local_1f = local_1f & 0xf0;
  local_c = local_c & 0xfc;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  lVar2 = *(longlong *)(param_1 + 0x228);
  lVar1 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar2;
  local_48 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  local_30 = 1;
  local_10 = 1;
  while( true ) {
    if (lVar2 == lVar1) {
      return 0;
    }
    if (*(int *)(lVar2 + 0xc) == *param_2) break;
    lVar2 = lVar2 + 0x40;
  }
  FUN_1411cb440(&local_48);
  if (local_30 < param_3) {
    return 0;
  }
  FUN_143011bf0(param_1,param_2,param_3,0);
  return local_28;
}



// FUNCTION 142ff6d60 FUN_142ff6d60 body=310 status=ok
// SIG undefined FUN_142ff6d60(void)

undefined8 FUN_142ff6d60(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined4 local_res20 [2];
  
  iVar2 = FUN_142ffe220();
  if ((iVar2 != -1) &&
     (lVar4 = (longlong)iVar2 * 0x40 + param_1[0x45], param_3 <= *(int *)(lVar4 + 0x18))) {
    uVar1 = *(undefined8 *)(lVar4 + 0x20);
    iVar2 = FUN_14233f450(param_1);
    if ((iVar2 == 3) || ((*(byte *)(param_1 + 0x17) & 8) == 0)) {
      iVar2 = FUN_142ffe220(param_1,param_2);
      if ((-1 < iVar2) && (iVar2 < (int)param_1[0x46])) {
        lVar4 = (longlong)iVar2 * 0x40;
        iVar3 = *(int *)(param_1[0x45] + lVar4 + 0x18);
        if (iVar3 < param_3 + 1) {
          (**(code **)(*param_1 + 0x498))(param_1);
          FUN_143011ae0(param_1,iVar2,0);
          return uVar1;
        }
        iVar3 = iVar3 - param_3;
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        *(int *)(param_1[0x45] + lVar4 + 0x18) = iVar3;
        local_res20[0] = *(undefined4 *)(param_1[0x45] + 0xc + lVar4);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (param_1 + 0x5f,local_res20);
        (**(code **)(*param_1 + 0x260))(param_1);
        FFastArraySerializer::MarkItemDirty(param_1 + 0x2f,param_1[0x45] + lVar4);
      }
    }
    return uVar1;
  }
  return 0;
}



// FUNCTION 142ff6ea0 FUN_142ff6ea0 body=298 status=ok
// SIG undefined FUN_142ff6ea0(void)

undefined8 FUN_142ff6ea0(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int local_res8 [2];
  
  plVar8 = (longlong *)0x0;
  lVar1 = *(longlong *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar4 = param_1 + 200;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                             (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x90));
        if (*plVar7 == lVar1) {
          if (iVar3 != -1) goto LAB_142ff6f25;
          break;
        }
        iVar3 = (int)plVar7[5];
      } while (iVar3 != -1);
    }
  }
  plVar7 = plVar8;
LAB_142ff6f25:
  plVar5 = plVar7 + 1;
  if (plVar7 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  if (((plVar5 != (longlong *)0x0) && (param_3 = param_3 + -1, -1 < param_3)) &&
     (param_3 < (int)plVar5[3])) {
    TSet<TTuple<FGuid,FUdpMessageTunnel::FNodeInfo>,TDefaultMapHashableKeyFuncs<FGuid,FUdpMessageTunnel::FNodeInfo,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x40),local_res8,(longlong)param_3 * 0x10 + plVar5[2]);
    plVar7 = plVar8;
    if (local_res8[0] != -1) {
      plVar7 = (longlong *)((longlong)local_res8[0] * 0x38 + *(longlong *)(param_1 + 0x40));
    }
    plVar5 = plVar7 + 2;
    if (plVar7 == (longlong *)0x0) {
      plVar5 = plVar8;
    }
    if (plVar5 != (longlong *)0x0) {
      cVar2 = FWeakObjectPtr::IsValid(plVar5 + 3);
      if (cVar2 == '\0') {
        uVar6 = FSoftObjectPath::TryLoad(plVar5);
        FWeakObjectPtr::operator=(plVar5 + 3,uVar6);
      }
      uVar6 = FWeakObjectPtr::Get(plVar5 + 3);
      return uVar6;
    }
  }
  return 0;
}



// FUNCTION 142ff7010 FUN_142ff7010 body=29 status=ok
// SIG undefined FUN_142ff7010(void)

longlong FUN_142ff7010(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x208);
  if ((lVar1 == 0) || (*(char *)(param_1 + 0x210) != '\0')) {
    lVar1 = *(longlong *)(param_1 + 0x118);
  }
  return lVar1;
}



// FUNCTION 142ff7030 FUN_142ff7030 body=249 status=ok
// SIG undefined FUN_142ff7030(void)

void FUN_142ff7030(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  
  FUN_142fe2980(param_2,param_1 + 0x48);
  plVar10 = *(longlong **)(param_1 + 0xa8);
  plVar1 = plVar10 + *(int *)(param_1 + 0xb0);
  for (; plVar10 != plVar1; plVar10 = plVar10 + 1) {
    lVar3 = *plVar10;
    iVar2 = *(int *)(lVar3 + 0x40);
    if (iVar2 != 0) {
      iVar11 = (int)param_2[1];
      if (*(int *)((longlong)param_2 + 0xc) < iVar11 + iVar2) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<112,8>_>,FDefaultAllocator>::ResizeTo
                  (param_2);
        iVar11 = (int)param_2[1];
      }
      puVar8 = (undefined8 *)((longlong)iVar11 * 0x70 + *param_2);
      puVar9 = *(undefined8 **)(lVar3 + 0x38);
      iVar11 = iVar2;
      do {
        *puVar8 = *puVar9;
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(puVar8 + 1,puVar9 + 1);
        puVar8[6] = puVar9[6];
        uVar7 = puVar9[8];
        puVar8[7] = puVar9[7];
        puVar8[8] = uVar7;
        uVar7 = puVar9[10];
        puVar8[9] = puVar9[9];
        puVar8[10] = uVar7;
        uVar4 = *(undefined4 *)((longlong)puVar9 + 0x5c);
        uVar5 = *(undefined4 *)(puVar9 + 0xc);
        uVar6 = *(undefined4 *)((longlong)puVar9 + 100);
        *(undefined4 *)(puVar8 + 0xb) = *(undefined4 *)(puVar9 + 0xb);
        *(undefined4 *)((longlong)puVar8 + 0x5c) = uVar4;
        *(undefined4 *)(puVar8 + 0xc) = uVar5;
        *(undefined4 *)((longlong)puVar8 + 100) = uVar6;
        puVar8[0xd] = puVar9[0xd];
        iVar11 = iVar11 + -1;
        puVar8 = puVar8 + 0xe;
        puVar9 = puVar9 + 0xe;
      } while (iVar11 != 0);
      *(int *)(param_2 + 1) = (int)param_2[1] + iVar2;
    }
  }
  return;
}



// FUNCTION 142ff7130 FUN_142ff7130 body=150 status=ok
// SIG undefined FUN_142ff7130(void)

undefined8 * FUN_142ff7130(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b45cb8) {
    _Init_thread_header(&DAT_146b45cb8);
    if (DAT_146b45cb8 == -1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_14677bb30,0);
      FGenericPlatformString::Memcpy
                (DAT_14677bb30,L"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/",
                 0x82);
      atexit((_func_5014 *)&LAB_143ec2ab0);
      _Init_thread_footer(&DAT_146b45cb8);
      return &DAT_14677bb30;
    }
  }
  return &DAT_14677bb30;
}



// FUNCTION 142ff71d0 FUN_142ff71d0 body=245 status=ok
// SIG undefined FUN_142ff71d0(void)

longlong * FUN_142ff71d0(longlong param_1,longlong param_2,int param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  int *piVar7;
  longlong *plVar8;
  
  plVar8 = (longlong *)0x0;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
    lVar4 = *(longlong *)(param_1 + 0xd0);
    if (*(longlong *)(param_1 + 0xd0) == 0) {
      lVar4 = param_1 + 200;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                             (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x30 + *(longlong *)(param_1 + 0x90));
        if (*plVar6 == lVar2) {
          if (iVar3 != -1) goto LAB_142ff7265;
          break;
        }
        iVar3 = (int)plVar6[5];
      } while (iVar3 != -1);
    }
  }
  plVar6 = plVar8;
LAB_142ff7265:
  plVar5 = plVar6 + 1;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar8;
  }
  if (plVar5 != (longlong *)0x0) {
    if ((param_3 < 1) || (*(int *)(param_1 + 0x38) <= param_3)) {
      return (longlong *)(ulonglong)*(uint *)(*plVar5 + -4 + (longlong)(int)plVar5[1] * 8);
    }
    piVar7 = (int *)*plVar5;
    piVar1 = piVar7 + (longlong)(int)plVar5[1] * 2;
    for (; (piVar7 != piVar1 && (*piVar7 <= param_3)); piVar7 = piVar7 + 2) {
      plVar8 = (longlong *)(ulonglong)(uint)piVar7[1];
    }
  }
  return plVar8;
}



// FUNCTION 142ff72d0 FUN_142ff72d0 body=623 status=ok
// SIG undefined FUN_142ff72d0(void)

longlong FUN_142ff72d0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b45e68) && (_Init_thread_header(&DAT_146b45e68), DAT_146b45e68 == -1))
  {
    FName::FName(&DAT_146b45e60,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146b45e68);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146b45e60,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 142ff7540 FUN_142ff7540 body=623 status=ok
// SIG undefined FUN_142ff7540(void)

longlong FUN_142ff7540(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b45e58) && (_Init_thread_header(&DAT_146b45e58), DAT_146b45e58 == -1))
  {
    FName::FName(&DAT_146b45e50,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146b45e58);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146b45e50,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 142ff77b0 FUN_142ff77b0 body=623 status=ok
// SIG undefined FUN_142ff77b0(void)

longlong FUN_142ff77b0(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b45e78) && (_Init_thread_header(&DAT_146b45e78), DAT_146b45e78 == -1))
  {
    FName::FName(&DAT_146b45e70,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146b45e78);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146b45e70,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 142ff7a20 FUN_142ff7a20 body=623 status=ok
// SIG undefined FUN_142ff7a20(void)

longlong FUN_142ff7a20(longlong *param_1)

{
  int *piVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 local_28 [8];
  longlong *local_20;
  
  plVar2 = (longlong *)param_1[0x73];
  plVar10 = (longlong *)0x0;
  plVar9 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar12 = iVar5 == 0;
    if (bVar12) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar9 = plVar10, !bVar12) {
      LOCK();
      bVar12 = iVar5 == (int)plVar2[1];
      if (bVar12) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar12) {
        plVar9 = plVar2;
        if (plVar2 != (longlong *)0x0) {
          plVar10 = (longlong *)param_1[0x72];
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar2[1];
      bVar12 = iVar5 == 0;
      if (bVar12) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  puVar6 = (undefined8 *)(**(code **)(*plVar10 + 0xa8))(plVar10,local_28);
  cVar3 = (**(code **)(*(longlong *)*puVar6 + 0x180))();
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_20 + 1;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)*local_20)(local_20);
      LOCK();
      piVar1 = (int *)((longlong)local_20 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*local_20 + 8))(local_20,1);
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146b45e48) && (_Init_thread_header(&DAT_146b45e48), DAT_146b45e48 == -1))
  {
    FName::FName(&DAT_146b45e40,"GenericWhiteBox",1);
    _Init_thread_footer(&DAT_146b45e48);
  }
  (**(code **)(*DAT_1469eb140 + 0x40))(DAT_1469eb140,DAT_146b45e40,0);
  uVar7 = (**(code **)(*plVar10 + 0x38))(plVar10,param_1);
  cVar4 = (**(code **)(*plVar10 + 0x10))(plVar10,uVar7);
  if ((cVar4 == '\0') || (*(char *)((longlong)param_1 + 0x3a4) == '\0')) {
    iVar5 = (**(code **)(*param_1 + 0x70))(param_1);
    if ((*(byte *)(param_1 + 0x74) & 1) == 0) {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x338;
      }
      else {
        lVar11 = param_1[0x75] + 0x2b0;
      }
    }
    else {
      cVar3 = (**(code **)(param_1[1] + 0x1a8))();
      if ((cVar3 == '\0') || (iVar5 == 0)) {
        lVar11 = param_1[0x75] + 0x448;
      }
      else {
        lVar11 = param_1[0x75] + 0x3c0;
      }
    }
  }
  else {
    cVar4 = (**(code **)(param_1[1] + 0x1a8))(param_1 + 1);
    lVar11 = param_1[0x75];
    if (cVar3 == '\0') {
      if (cVar4 == '\0') {
        lVar11 = lVar11 + 0x228;
      }
      else {
        lVar11 = lVar11 + 0x1a0;
      }
    }
    else {
      lVar8 = 0x118;
      if (cVar4 != '\0') {
        lVar8 = 0x90;
      }
      lVar11 = lVar11 + lVar8;
    }
  }
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar9 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar9)(plVar9);
      LOCK();
      piVar1 = (int *)((longlong)plVar9 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar9 + 8))(plVar9,1);
      }
    }
  }
  return lVar11;
}



// FUNCTION 142ff7c90 FUN_142ff7c90 body=70 status=ok
// SIG undefined FUN_142ff7c90(void)

ulonglong FUN_142ff7c90(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = 0;
  if (param_2 != 0) {
    if (*(char *)(param_2 + 0x30) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000142ff7ca2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*param_1 + 0x4c8))();
      return uVar1;
    }
    lVar2 = param_1[0x45];
    lVar3 = (longlong)(int)param_1[0x46] * 0x40 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
      if (*(longlong *)(lVar2 + 0x10) == param_2) {
        uVar1 = (ulonglong)(uint)((int)uVar1 + *(int *)(lVar2 + 0x18));
      }
    }
  }
  return uVar1;
}



// FUNCTION 142ff7ce0 FUN_142ff7ce0 body=202 status=ok
// SIG undefined FUN_142ff7ce0(void)

void FUN_142ff7ce0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (param_2 != 0) {
    uVar4 = FUN_142ffa540();
  }
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      if ((((param_2 == 0) ||
           ((uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x228) + 0x10 + uVar5), uVar2 != 0 &&
            (uVar2 == uVar4)))) &&
          (lVar3 = *(longlong *)(param_1 + 0x228), *(longlong *)(uVar5 + 0x20 + lVar3) == 0)) &&
         ((*(byte *)(uVar5 + 0x29 + lVar3) & 2) != 0)) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(uVar5 + 0xc + lVar3);
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 0x40;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 142ff7db0 FUN_142ff7db0 body=668 status=ok
// SIG undefined FUN_142ff7db0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_142ff7db0(int *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  int local_a0;
  bool local_9c;
  int local_98;
  undefined1 local_94;
  undefined8 local_90;
  longlong *local_88;
  int *local_80;
  uint5 local_78;
  undefined3 uStack_73;
  undefined8 uStack_70;
  undefined1 local_68 [4];
  char local_64;
  int local_60 [2];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_90 = param_3;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else {
    local_80 = param_1;
    if (*(longlong *)(param_2 + 0x98) == 0) {
      iVar10 = 0;
    }
    else {
      uStack_70 = 0;
      _local_78 = param_3;
      fVar13 = (float)FUN_142ca2f00(*(longlong *)(param_2 + 0x98),&local_78,0);
      iVar10 = (int)fVar13;
    }
    if (*(longlong *)(param_2 + 0xa0) == 0) {
      iVar3 = 100;
    }
    else {
      uStack_70 = 0;
      _local_78 = local_90;
      fVar13 = (float)FUN_142ca2f00(*(longlong *)(param_2 + 0xa0),&local_78,0);
      iVar3 = (int)fVar13;
    }
    if ((iVar10 <= param_4) && (iVar10 = iVar3, param_4 < iVar3)) {
      iVar10 = param_4;
    }
    plVar7 = *(longlong **)(param_2 + 0x48);
    bVar2 = false;
    plVar8 = plVar7 + (longlong)*(int *)(param_2 + 0x50) * 0xe;
    iVar3 = local_a8;
    if (plVar7 != plVar8) {
      local_a8 = local_60[0];
      iVar11 = local_60[0];
      iVar3 = local_60[0];
      iVar9 = local_a0;
      local_88 = plVar8;
      do {
        lVar1 = *plVar7;
        bVar12 = false;
        if ((lVar1 == 0) || (*(int *)(lVar1 + 0x50) < 1)) {
          if (plVar7[6] != 0) {
            piVar4 = (int *)FUN_142ff8050(plVar7[6],&local_78,local_90,iVar10);
            if ((piVar4 != local_60) && ((char)piVar4[1] != '\0')) {
              local_a8 = *piVar4;
              bVar12 = true;
            }
            local_78 = (uint5)(uint)local_78;
            plVar8 = local_88;
            local_60[0] = local_a8;
          }
        }
        else {
          piVar4 = (int *)FUN_142ff7db0(local_68,lVar1,local_90,iVar10);
          if ((piVar4 != local_60) && ((char)piVar4[1] != '\0')) {
            local_a8 = *piVar4;
            bVar12 = true;
          }
          plVar8 = local_88;
          local_60[0] = local_a8;
          if (local_64 != '\0') {
            local_64 = '\0';
          }
        }
        local_9c = false;
        if (bVar12) {
          local_a0 = local_60[0];
          local_9c = true;
          iVar9 = local_60[0];
        }
        local_9c = bVar12;
        if (bVar2) {
          local_98 = iVar3;
          local_94 = 1;
          if (bVar12) {
            uVar5 = iVar3 - iVar10 >> 0x1f;
            uVar6 = iVar9 - iVar10 >> 0x1f;
            piVar4 = &local_98;
            if ((int)((iVar9 - iVar10 ^ uVar6) - uVar6) <= (int)((iVar3 - iVar10 ^ uVar5) - uVar5))
            {
              piVar4 = &local_a0;
            }
            if ((char)piVar4[1] != '\0') {
              iVar11 = *piVar4;
            }
            bVar12 = (char)piVar4[1] != '\0';
            local_9c = false;
          }
          else {
            bVar12 = true;
            iVar11 = iVar3;
          }
          bVar2 = false;
          if (bVar12) {
LAB_142ff7fe2:
            bVar2 = true;
            iVar3 = iVar11;
          }
        }
        else if (bVar12) {
          local_9c = false;
          iVar11 = iVar9;
          goto LAB_142ff7fe2;
        }
        local_94 = 0;
        plVar7 = plVar7 + 0xe;
        param_1 = local_80;
      } while (plVar7 != plVar8);
    }
    *(undefined1 *)(param_1 + 1) = 0;
    if (bVar2) {
      *param_1 = iVar3;
      *(undefined1 *)(param_1 + 1) = 1;
    }
  }
  return param_1;
}



// FUNCTION 142ff8050 FUN_142ff8050 body=767 status=ok
// SIG undefined FUN_142ff8050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_142ff8050(longlong param_1,int *param_2,undefined8 param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  longlong *plVar9;
  int iVar10;
  longlong *plVar11;
  bool bVar12;
  float fVar13;
  undefined1 auStack_c8 [32];
  int local_a8;
  char local_a4;
  int local_a0;
  char local_9c;
  undefined8 local_98;
  longlong local_90;
  longlong *local_88;
  undefined1 local_80 [8];
  char local_78;
  undefined1 local_74 [8];
  char local_6c;
  int local_68 [2];
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_98 = param_3;
  *(undefined1 *)(param_2 + 1) = 0;
  local_90 = param_1;
  iVar10 = local_68[0];
  iVar2 = local_a8;
  do {
    if (local_90 == 0) {
      return param_2;
    }
    plVar11 = *(longlong **)(local_90 + 0xc0);
    plVar9 = plVar11 + (longlong)*(int *)(local_90 + 200) * 0x10;
    local_88 = plVar9;
    if (plVar11 != plVar9) {
      do {
        lVar1 = *plVar11;
        if (lVar1 == 0) {
          local_a4 = '\0';
        }
        else {
          fVar13 = (float)FUN_142c98860(lVar1 + 0x38,param_3);
          param_3 = local_98;
          iVar8 = (int)ROUND(fVar13 * 2.0 - 0.5) >> 1;
          fVar13 = (float)FUN_142c98860(lVar1 + 0x70,local_98);
          iVar2 = (int)ROUND(fVar13 * 2.0 - 0.5) >> 1;
          if ((iVar8 <= param_4) && (iVar8 = iVar2, param_4 < iVar2)) {
            iVar8 = param_4;
          }
          uVar4 = FUN_142caac20(plVar11 + 1,local_80,param_3);
          iVar2 = FUN_142cc45a0(uVar4,0);
          switch(local_78) {
          case '\0':
            if (local_78 == '\0') {
              local_78 = -1;
            }
            break;
          case '\x01':
            if (local_78 == '\x01') {
              local_78 = -1;
            }
            break;
          case '\x02':
            if (local_78 == '\x02') {
              local_78 = -1;
            }
            break;
          case '\x03':
          case '\x04':
            if (local_78 == '\x03') {
              local_78 = -1;
            }
            break;
          case '\x05':
            if (local_78 == '\x03') {
              local_78 = -1;
            }
          }
          uVar4 = FUN_142caac20(plVar11 + 8,local_74,param_3);
          iVar3 = FUN_142cc45a0(uVar4,0);
          switch(local_6c) {
          case '\0':
            if (local_6c == '\0') {
              local_6c = -1;
            }
            break;
          case '\x01':
            if (local_6c == '\x01') {
              local_6c = -1;
            }
            break;
          case '\x02':
            if (local_6c == '\x02') {
              local_6c = -1;
            }
            break;
          case '\x03':
          case '\x04':
            if (local_6c == '\x03') {
              local_6c = -1;
            }
            break;
          case '\x05':
            if (local_6c == '\x03') {
              local_6c = -1;
            }
          }
          if ((iVar2 <= iVar8) && (iVar2 = iVar3, iVar8 < iVar3)) {
            iVar2 = iVar8;
          }
          local_a4 = '\x01';
          local_a8 = iVar2;
          plVar9 = local_88;
        }
        local_9c = '\0';
        if ((char)param_2[1] == '\0') {
          bVar12 = false;
          iVar8 = iVar2;
          if (local_a4 != '\0') goto LAB_142ff82be;
        }
        else {
          local_a0 = *param_2;
          local_9c = 1;
          iVar8 = local_a0;
          local_9c = local_a4;
          if (local_a4 == '\0') {
LAB_142ff82be:
            iVar10 = iVar8;
            bVar12 = true;
            local_a4 = local_9c;
          }
          else {
            uVar5 = local_a0 - param_4 >> 0x1f;
            uVar6 = iVar2 - param_4 >> 0x1f;
            piVar7 = &local_a0;
            if ((int)((iVar2 - param_4 ^ uVar6) - uVar6) <=
                (int)((local_a0 - param_4 ^ uVar5) - uVar5)) {
              piVar7 = &local_a8;
            }
            bVar12 = (char)piVar7[1] != '\0';
            if (bVar12) {
              iVar10 = *piVar7;
            }
            local_9c = '\0';
            local_a4 = '\0';
          }
        }
        if (local_68 != param_2) {
          if ((char)param_2[1] != '\0') {
            *(undefined1 *)(param_2 + 1) = 0;
          }
          if (bVar12) {
            *param_2 = iVar10;
            *(undefined1 *)(param_2 + 1) = 1;
          }
        }
        plVar11 = plVar11 + 0x10;
      } while (plVar11 != plVar9);
    }
    local_90 = *(longlong *)(local_90 + 0x30);
  } while( true );
}



// FUNCTION 142ff8380 FUN_142ff8380 body=274 status=ok
// SIG undefined FUN_142ff8380(void)

undefined8 FUN_142ff8380(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_20 [8];
  longlong *local_18;
  
  if (*(longlong *)(param_1 + 0x210) == 0) {
    uVar7 = FUN_1404b03b0();
    puVar8 = (undefined1 *)FText::FText(local_20,uVar7);
    bVar5 = false;
    bVar4 = true;
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x210) + 0x108);
    if (lVar6 == 0) {
      lVar6 = FUN_1404b03b0();
    }
    else {
      lVar6 = lVar6 + 0x48;
    }
    FText::FText(local_38,lVar6);
    puVar8 = local_38;
    bVar5 = true;
    bVar4 = false;
  }
  FText::FText(param_2,puVar8);
  if (bVar4) {
    if (local_18 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_18 + 1;
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_18)(local_18);
        LOCK();
        piVar2 = (int *)((longlong)local_18 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_18 + 8))(local_18,1);
        }
      }
    }
  }
  if ((bVar5) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)local_30 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 142ff84a0 FUN_142ff84a0 body=23 status=ok
// SIG undefined FUN_142ff84a0(void)

undefined8 FUN_142ff84a0(undefined8 param_1,undefined8 param_2)

{
  FUN_14301fa40();
  return param_2;
}



// FUNCTION 142ff84c0 FUN_142ff84c0 body=575 status=ok
// SIG undefined FUN_142ff84c0(void)

longlong * FUN_142ff84c0(longlong *param_1,char param_2)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  longlong local_58;
  int local_50;
  int local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  longlong local_38 [2];
  
  pwVar5 = L"InventorySerialNumberDatabase.txt";
  if (param_2 != '\0') {
    pwVar5 = L"InventorySerialNumberDatabase.dat";
  }
  local_48 = (void *)0x0;
  iVar8 = 0;
  local_3c = 0;
  iVar1 = iVar8;
  if (*pwVar5 != L'\0') {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (pwVar5[lVar4] != L'\0');
    iVar3 = (int)lVar4 + 1;
    local_40 = iVar3;
    if (0 < iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    iVar1 = local_40;
    FGenericPlatformString::Memcpy(local_48,pwVar5,(longlong)iVar3 * 2);
  }
  plVar2 = (longlong *)FPaths::ProjectDir(local_38);
  lVar4 = plVar2[1];
  local_58 = *plVar2;
  *plVar2 = 0;
  local_50 = (int)plVar2[1];
  local_4c = *(int *)((longlong)plVar2 + 0xc);
  plVar2[1] = 0;
  iVar3 = local_50;
  if (local_4c < (int)((9 - (uint)((int)lVar4 != 0)) + local_50)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    iVar3 = local_50;
  }
  local_50 = (9 - (uint)(iVar3 != 0)) + iVar3;
  if (local_4c < local_50) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar3);
  }
  lVar4 = (longlong)iVar3 - (ulonglong)(iVar3 != 0);
  builtin_wcsncpy((wchar_t *)(local_58 + lVar4 * 2),L"Content/",8);
  *(undefined2 *)(local_58 + 0x10 + lVar4 * 2) = 0;
  if (local_50 < 2) {
    *param_1 = (longlong)local_48;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    *(int *)(param_1 + 1) = iVar1;
    pvVar9 = (void *)0x0;
    if (local_58 != 0) {
      FMemory::Free(local_58);
    }
  }
  else {
    iVar3 = iVar8;
    if (iVar1 != 0) {
      iVar3 = iVar1 + -1;
    }
    if ((local_50 != 0) || (iVar1 = 1, iVar3 == 0)) {
      iVar1 = iVar8;
    }
    if (local_4c < iVar1 + local_50 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
    }
    iVar1 = local_50;
    lVar4 = local_58;
    iVar7 = local_4c;
    iVar8 = local_50;
    if (iVar3 != 0) {
      lVar6 = (longlong)local_50;
      local_50 = local_50 + (uint)(local_50 == 0) + iVar3;
      if (local_4c < local_50) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar1);
      }
      iVar7 = local_4c;
      iVar8 = local_50;
      lVar4 = local_58;
      pvVar9 = (void *)(local_58 + (lVar6 - (ulonglong)(iVar1 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar9,local_48,(longlong)iVar3 * 2);
      *(undefined2 *)((longlong)iVar3 * 2 + (longlong)pvVar9) = 0;
    }
    *param_1 = lVar4;
    *(int *)(param_1 + 1) = iVar8;
    *(int *)((longlong)param_1 + 0xc) = iVar7;
    pvVar9 = local_48;
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  return param_1;
}



// FUNCTION 142ff8700 FUN_142ff8700 body=121 status=ok
// SIG undefined FUN_142ff8700(void)

longlong FUN_142ff8700(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
  }
  if (*(longlong *)(lVar4 + 0x28) != 0) {
    lVar3 = ALandscapeStreamingProxy::StaticClass();
    for (lVar1 = *(longlong *)(lVar4 + 0x28); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) {
        return *(longlong *)(lVar4 + 0x28);
      }
    }
  }
  return 0;
}



// FUNCTION 142ff8780 FUN_142ff8780 body=34 status=ok
// SIG undefined FUN_142ff8780(void)

undefined8 * FUN_142ff8780(longlong param_1,undefined8 *param_2)

{
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    *param_2 = *(undefined8 *)(*(longlong *)(param_1 + 0x1a8) + 0x50);
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 142ff87b0 FUN_142ff87b0 body=56 status=ok
// SIG undefined FUN_142ff87b0(void)

undefined4 FUN_142ff87b0(void)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  return *(undefined4 *)(lVar2 + 0x30);
}



// FUNCTION 142ff87f0 FUN_142ff87f0 body=154 status=ok
// SIG undefined FUN_142ff87f0(void)

undefined8 FUN_142ff87f0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8;
  undefined2 *local_28;
  int local_20;
  undefined2 *local_18;
  int local_10;
  
  local_res8 = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(&local_res8,&local_18);
  puVar1 = &DAT_143f3eda8;
  if (local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(&local_28,L"%s%s",PTR_u_InvBal__14677bb28,puVar1);
  puVar1 = &DAT_143f3eda8;
  if (local_20 != 0) {
    puVar1 = local_28;
  }
  FName::FName(param_2,puVar1,1);
  if (local_28 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ff8890 FUN_142ff8890 body=98 status=ok
// SIG undefined FUN_142ff8890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_142ff8890(void)

{
  undefined8 *puVar1;
  
  if (DAT_146b458c0 == '\0') {
    puVar1 = (undefined8 *)FUN_142ff6100();
    if (puVar1 != (undefined8 *)&DAT_146b45898) {
      _DAT_146b45898 = *puVar1;
      uRam0000000146b458a0 = puVar1[1];
      _DAT_146b458a8 = puVar1[2];
      uRam0000000146b458b0 = puVar1[3];
      _DAT_146b458b8 = puVar1[4];
      DAT_146b458c0 = 1;
      return &DAT_146b45898;
    }
  }
  return &DAT_146b45898;
}



// FUNCTION 142ff8900 FUN_142ff8900 body=133 status=ok
// SIG undefined FUN_142ff8900(void)

void FUN_142ff8900(longlong param_1,undefined4 *param_2,undefined8 *param_3,longlong *param_4)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  *param_2 = *(undefined4 *)(param_1 + 0x10);
  *param_3 = *(undefined8 *)(param_1 + 0x14);
  *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_1 + 0x1c);
  lVar1 = *(longlong *)(param_1 + -0x2f0);
  if (lVar1 != 0) {
    lVar3 = FUN_1429bed90();
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
      *param_4 = lVar1;
      return;
    }
  }
  *param_4 = 0;
  return;
}



// FUNCTION 142ff8990 FUN_142ff8990 body=23 status=ok
// SIG undefined FUN_142ff8990(void)

undefined8 FUN_142ff8990(undefined8 param_1,undefined8 param_2)

{
  FUN_14301faa0();
  return param_2;
}



// FUNCTION 142ff89b0 FUN_142ff89b0 body=62 status=ok
// SIG undefined FUN_142ff89b0(void)

undefined8 * FUN_142ff89b0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x3a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"Applies attribute effects to inventory based on priority.",0x74);
  return param_2;
}



// FUNCTION 142ff89f0 FUN_142ff89f0 body=62 status=ok
// SIG undefined FUN_142ff89f0(void)

undefined8 * FUN_142ff89f0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0x3c;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy
            (*param_2,L"Adds a collection of conditional damage modification rules.",0x78);
  return param_2;
}



// FUNCTION 142ff8a30 FUN_142ff8a30 body=157 status=ok
// SIG undefined FUN_142ff8a30(void)

undefined8 FUN_142ff8a30(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_1 + 0x50) == 0) {
    local_10 = 5;
    local_18 = (undefined2 *)0x0;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    UObjectBaseUtility::GetPathName(*(longlong *)(param_1 + 0x50),&local_18,0);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Applies material \'%ls\' to section %d of the inventory mesh.",
                      puVar1,*(undefined4 *)(param_1 + 0x48));
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ff8ad0 FUN_142ff8ad0 body=150 status=ok
// SIG undefined FUN_142ff8ad0(void)

undefined8 FUN_142ff8ad0(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined8 local_res8 [4];
  undefined2 *local_18;
  undefined8 local_10;
  
  puVar1 = *(undefined2 **)(param_1 + 0x38);
  if (puVar1 == (undefined2 *)0x0) {
    local_10 = 5;
    local_18 = puVar1;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,&DAT_143f3edc8,10);
  }
  else {
    local_res8[0] = *(undefined8 *)(puVar1 + 0xc);
    FName::ToString(local_res8,&local_18);
  }
  puVar1 = &DAT_143f3eda8;
  if ((int)local_10 != 0) {
    puVar1 = local_18;
  }
  FString::PrintfImpl(param_2,L"Attaches particle system \'%s\' to the inventory.",puVar1);
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ff8b70 FUN_142ff8b70 body=128 status=ok
// SIG undefined FUN_142ff8b70(void)

undefined8 FUN_142ff8b70(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x208);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_142dfdf30();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) goto LAB_142ff8ba3;
  }
  plVar2 = *(longlong **)(param_1 + 0x118);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_142dfdf30();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
LAB_142ff8ba3:
                    /* WARNING: Could not recover jumptable at 0x000142ff8bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x400))(plVar2);
      return uVar1;
    }
  }
  return 1;
}



// FUNCTION 142ff8bf0 FUN_142ff8bf0 body=104 status=ok
// SIG undefined FUN_142ff8bf0(void)

void FUN_142ff8bf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_60 = (undefined4)param_2;
    uStack_5c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_142fe9a10;
  FUN_142ff3570(param_1,local_58);
  return;
}



// FUNCTION 142ff8c60 FUN_142ff8c60 body=851 status=ok
// SIG undefined FUN_142ff8c60(void)

undefined8 FUN_142ff8c60(longlong param_1,undefined8 param_2)

{
  void *pvVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined *puVar12;
  void *local_48;
  int local_40;
  int iStack_3c;
  void *local_38;
  int local_30;
  int local_2c;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  iStack_3c = 0;
  if (*(longlong **)(param_1 + 0x2f0) == (longlong *)0x0) goto LAB_142ff8f84;
  lVar6 = (**(code **)(**(longlong **)(param_1 + 0x2f0) + 0x2a0))();
  if (lVar6 == 0) {
LAB_142ff8cf0:
    cVar5 = '\0';
  }
  else {
    lVar7 = UCharacterMovementComponentGunfire::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142ff8cf0;
    cVar5 = FUN_142dd3d20(lVar6);
  }
  lVar6 = *(longlong *)(param_1 + 0x2f0);
  if (*(char *)(lVar6 + 0x108) != '\x04') {
    pwVar10 = L"Up / Down";
    if (cVar5 == '\0') {
      pwVar10 = L"Up / Down Arrows";
    }
    FString::PrintfImpl(&local_38,L"%ls : Change Selection -- ",pwVar10);
    if (local_48 != (void *)0x0) {
      FMemory::Free();
    }
    local_48 = local_38;
    local_40 = local_30;
    iStack_3c = local_2c;
    lVar6 = *(longlong *)(param_1 + 0x2f0);
  }
  iVar9 = 0;
  if (*(char *)(lVar6 + 0x108) == '\0') {
    pwVar10 = L"Left / Right Triggers";
    if (cVar5 == '\0') {
      pwVar10 = L"Left / Right Arrows";
    }
    FString::PrintfImpl(&local_38,L"%ls : Adjust Game Stage -- ",pwVar10);
    pvVar4 = local_38;
    iVar3 = local_40;
    iVar8 = iVar9;
    if (local_30 != 0) {
      iVar8 = local_30 + -1;
    }
    if (iVar8 != 0) {
      lVar6 = (longlong)local_40;
      local_40 = (uint)(local_40 == 0) + local_40 + iVar8;
      if (iStack_3c < local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
      }
      pvVar1 = (void *)((longlong)local_48 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar8 * 2);
      *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
    }
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
  }
  pwVar11 = L"A / Y";
  pwVar10 = L"%ls : Spawn Gear -- ";
  if (*(char *)(*(longlong *)(param_1 + 0x2f0) + 0x108) != '\x04') {
    pwVar10 = L"%ls : Accept Selection -- ";
  }
  if (cVar5 == '\0') {
    pwVar11 = L"A / Y / Enter";
  }
  FString::PrintfImpl(&local_38,pwVar10,pwVar11);
  pvVar4 = local_38;
  iVar3 = local_40;
  iVar8 = iVar9;
  if (local_30 != 0) {
    iVar8 = local_30 + -1;
  }
  if (iVar8 != 0) {
    lVar6 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar8;
    if (iStack_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar8 * 2);
    *(undefined2 *)((longlong)iVar8 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  if (cVar5 == '\0') {
    puVar12 = &DAT_145a398f0;
    pwVar10 = L"X / Backspace";
  }
  else {
    puVar12 = &DAT_145a398ec;
    pwVar10 = L"X";
  }
  FString::PrintfImpl(&local_38,L"%ls : Go Back -- %ls : Close Menu",pwVar10,puVar12);
  pvVar4 = local_38;
  iVar3 = local_40;
  if (local_30 != 0) {
    iVar9 = local_30 + -1;
  }
  if (iVar9 != 0) {
    lVar6 = (longlong)local_40;
    local_40 = (uint)(local_40 == 0) + local_40 + iVar9;
    if (iStack_3c < local_40) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,iVar3);
    }
    pvVar1 = (void *)((longlong)local_48 + (lVar6 - (ulonglong)(iVar3 != 0)) * 2);
    _guard_xfg_dispatch_icall_nop(pvVar1,pvVar4,(longlong)iVar9 * 2);
    *(undefined2 *)((longlong)iVar9 * 2 + (longlong)pvVar1) = 0;
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
LAB_142ff8f84:
  FText::FromString(param_2,&local_48);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ff8fc0 FUN_142ff8fc0 body=3631 status=ok
// SIG undefined FUN_142ff8fc0(void)

undefined8 FUN_142ff8fc0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  size_t sVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  void *pvVar18;
  short *psVar19;
  void *pvVar20;
  void *pvVar21;
  int iVar22;
  uint uVar23;
  void *pvVar24;
  char cVar25;
  bool bVar26;
  void *local_res18;
  void *local_res20;
  void *local_1b8;
  int local_1b0;
  int local_1ac;
  void *local_1a8;
  void *local_1a0;
  undefined8 local_198;
  void *local_190;
  int local_188;
  int local_184;
  void *local_180;
  int local_178;
  int local_174;
  void *local_170;
  int local_168;
  int local_164;
  void *local_160;
  uint local_158;
  int local_154;
  void *local_150;
  undefined8 local_148;
  void *local_140;
  uint local_138;
  int local_134;
  void *local_130;
  uint local_128;
  int local_124;
  void *local_120;
  int local_118;
  int local_114;
  void *local_110;
  void **local_108;
  short *local_100;
  undefined8 local_f8;
  void *local_f0;
  undefined8 local_e8;
  ulonglong local_e0 [2];
  void *local_d0;
  undefined8 local_c8;
  void *local_c0;
  undefined8 local_b8;
  ulonglong local_b0 [2];
  void *local_a0;
  int local_98;
  undefined4 local_94;
  void *local_90;
  undefined8 local_88;
  void *local_80;
  undefined8 local_78;
  longlong local_70;
  int local_68;
  undefined1 local_60 [8];
  longlong *local_58;
  
  bVar26 = false;
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    psVar19 = &DAT_143f3edc8;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x2f8) + 0x10);
    if (lVar17 == 0) {
      local_f8 = 5;
      local_100 = (short *)0x0;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_100,0);
      FGenericPlatformString::Memcpy(local_100,&DAT_143f3edc8,10);
    }
    else {
      local_80 = *(void **)(lVar17 + 0x18);
      FName::ToString(&local_80,&local_100);
    }
    bVar26 = true;
    psVar19 = &DAT_143f3eda8;
    if ((int)local_f8 != 0) {
      psVar19 = local_100;
    }
  }
  uVar13 = 0;
  local_1a8 = (void *)0x0;
  local_150 = (void *)0x0;
  local_148 = 0;
  if ((psVar19 != (short *)0x0) && (*psVar19 != 0)) {
    lVar17 = -1;
    do {
      lVar17 = lVar17 + 1;
    } while (psVar19[lVar17] != 0);
    uVar14 = (int)lVar17 + 1;
    local_148 = (ulonglong)uVar14;
    uVar23 = uVar14;
    if (0 < (int)uVar14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_150,0);
      uVar23 = (uint)local_148;
    }
    uVar13 = (ulonglong)uVar23;
    local_1a8 = local_150;
    FGenericPlatformString::Memcpy(local_150,psVar19,(longlong)(int)uVar14 * 2);
  }
  if ((bVar26) && (local_100 != (short *)0x0)) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2f8) == 0) {
    local_b0[0] = 0;
    local_b0[1] = 5;
    bVar7 = false;
    bVar26 = true;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_b0,0);
    FGenericPlatformString::Memcpy(local_b0[0],&DAT_143f3edc8,10);
    puVar11 = local_b0;
  }
  else {
    lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x2f8) + 8);
    bVar7 = true;
    bVar26 = false;
    if (lVar17 == 0) {
      local_e0[0] = 0;
      local_e0[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e0,0);
      FGenericPlatformString::Memcpy(local_e0[0],&DAT_143f3edc8,10);
      puVar11 = local_e0;
    }
    else {
      local_78 = *(undefined8 *)(lVar17 + 0x18);
      FName::ToString(&local_78,local_e0);
      puVar11 = local_e0;
    }
  }
  local_110 = (void *)*puVar11;
  *puVar11 = 0;
  uVar23 = (uint)puVar11[1];
  iVar10 = *(int *)((longlong)puVar11 + 0xc);
  puVar11[1] = 0;
  if ((bVar26) && (local_b0[0] != 0)) {
    FMemory::Free();
  }
  if ((bVar7) && (local_e0[0] != 0)) {
    FMemory::Free();
  }
  if ((*(longlong *)(param_1 + 0x2f8) == 0) ||
     (lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x2f8) + 0x18), lVar17 == 0)) {
    local_90 = (void *)0x0;
    local_88 = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_90,0);
    FGenericPlatformString::Memcpy(local_90,&DAT_143f3edc8,10);
    local_108 = &local_90;
    bVar8 = false;
    bVar7 = false;
    bVar26 = true;
    pvVar24 = local_a0;
  }
  else {
    FText::FText(local_60,lVar17 + 0xa8);
    puVar12 = (undefined8 *)FText::ToString();
    local_a0 = (void *)0x0;
    iVar16 = *(int *)(puVar12 + 1);
    pvVar21 = (void *)*puVar12;
    local_98 = iVar16;
    if (iVar16 == 0) {
      bVar8 = true;
      bVar7 = true;
      bVar26 = false;
      local_94 = 0;
      local_108 = &local_a0;
      pvVar24 = (void *)0x0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_a0,iVar16,0);
      pvVar24 = local_a0;
      _guard_xfg_dispatch_icall_nop(local_a0,pvVar21,(longlong)iVar16 * 2);
      local_108 = &local_a0;
      bVar8 = true;
      bVar7 = true;
      bVar26 = false;
    }
  }
  local_118 = *(int *)(local_108 + 1);
  lVar17 = (longlong)local_118;
  local_res20 = (void *)0x0;
  local_120 = (void *)0x0;
  if (local_118 == 0) {
    local_114 = 0;
    iVar16 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_120,local_118,0);
    local_res20 = local_120;
    _guard_xfg_dispatch_icall_nop(local_120,*local_108,lVar17 * 2);
    iVar16 = local_118;
  }
  if ((bVar26) && (local_90 != (void *)0x0)) {
    FMemory::Free(local_90);
  }
  if ((bVar7) && (pvVar24 != (void *)0x0)) {
    FMemory::Free(pvVar24);
  }
  if ((bVar8) && (local_58 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_58 + 1;
    lVar17 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar17 == 1) {
      (**(code **)*local_58)(local_58);
      LOCK();
      piVar2 = (int *)((longlong)local_58 + 0xc);
      iVar16 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar16 == 1) {
        (**(code **)(*local_58 + 8))(local_58,1);
        uVar13 = local_148 & 0xffffffff;
        local_1a8 = local_150;
        local_res20 = local_120;
        iVar16 = local_118;
        goto LAB_142ff93ab;
      }
    }
    uVar13 = local_148 & 0xffffffff;
    local_1a8 = local_150;
    local_res20 = local_120;
    iVar16 = local_118;
  }
LAB_142ff93ab:
  local_res18 = local_res20;
  FString::PrintfImpl(&local_d0);
  if ((int)local_c8 < 2) {
    local_res20 = (void *)0x0;
    iVar22 = local_114;
    local_178 = iVar16;
  }
  else {
    iVar15 = iVar16 + -1;
    if (iVar16 == 0) {
      iVar15 = 0;
    }
    if (((int)local_c8 != 0) || (iVar16 = 1, iVar15 == 0)) {
      iVar16 = 0;
    }
    iVar22 = local_c8._4_4_;
    iVar16 = iVar16 + (int)local_c8 + iVar15;
    local_190 = local_d0;
    local_d0 = (void *)0x0;
    local_188 = (int)local_c8;
    local_184 = local_c8._4_4_;
    local_c8 = 0;
    if (iVar22 < iVar16) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_190,iVar16);
    }
    iVar16 = local_188;
    iVar22 = local_184;
    local_res18 = local_190;
    local_178 = local_188;
    if (iVar15 != 0) {
      lVar17 = (longlong)local_188;
      local_188 = local_188 + (uint)(local_188 == 0) + iVar15;
      if (local_184 < local_188) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_190,iVar16);
      }
      iVar22 = local_184;
      iVar9 = local_188;
      local_res18 = local_190;
      pvVar24 = (void *)((longlong)local_190 + (lVar17 - (ulonglong)(iVar16 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar24,local_res20,(longlong)iVar15 * 2);
      *(undefined2 *)((longlong)pvVar24 + (longlong)iVar15 * 2) = 0;
      local_178 = iVar9;
    }
  }
  local_180 = local_res18;
  local_174 = iVar22;
  iVar16 = local_178;
  if (iVar22 < (int)((2 - (uint)(local_178 != 0)) + local_178)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_180);
    iVar16 = local_178;
  }
  local_178 = (2 - (uint)(iVar16 != 0)) + iVar16;
  if (local_174 < local_178) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,iVar16);
  }
  pvVar24 = local_110;
  puVar3 = (undefined2 *)((longlong)local_180 + ((longlong)iVar16 - (ulonglong)(iVar16 != 0)) * 2);
  *puVar3 = 10;
  puVar3[1] = 0;
  if (local_178 < 2) {
    local_110 = (void *)0x0;
    local_res18 = local_180;
  }
  else {
    iVar16 = uVar23 + -1;
    if (uVar23 == 0) {
      iVar16 = 0;
    }
    if ((local_178 != 0) || (iVar10 = 1, iVar16 == 0)) {
      iVar10 = 0;
    }
    local_res18 = (void *)0x0;
    local_170 = local_180;
    local_168 = local_178;
    local_164 = local_174;
    if (local_174 < local_178 + iVar16 + iVar10) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_170);
    }
    iVar15 = local_168;
    pvVar24 = local_170;
    uVar23 = local_168;
    iVar10 = local_164;
    if (iVar16 != 0) {
      lVar17 = (longlong)local_168;
      local_168 = iVar16 + (uint)(local_168 == 0) + local_168;
      if (local_164 < local_168) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_170,iVar15,0);
      }
      iVar10 = local_164;
      uVar23 = local_168;
      pvVar24 = local_170;
      pvVar21 = (void *)((longlong)local_170 + (lVar17 - (ulonglong)(iVar15 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar21,local_110,(longlong)iVar16 * 2);
      *(undefined2 *)((longlong)pvVar21 + (longlong)iVar16 * 2) = 0;
    }
  }
  local_160 = pvVar24;
  local_154 = iVar10;
  if (iVar10 < (int)((2 - (uint)(uVar23 != 0)) + uVar23)) {
    local_158 = uVar23;
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_160);
    uVar23 = local_158;
  }
  local_158 = (2 - (uint)(uVar23 != 0)) + uVar23;
  if (local_154 < (int)local_158) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_160,uVar23);
  }
  pvVar24 = (void *)0x0;
  puVar3 = (undefined2 *)
           ((longlong)local_160 + ((longlong)(int)uVar23 - (ulonglong)(uVar23 != 0)) * 2);
  *puVar3 = 10;
  puVar3[1] = 0;
  if ((int)local_158 < 2) {
    pvVar18 = (void *)0x0;
    pvVar20 = local_160;
    pvVar21 = local_1a8;
    iVar16 = local_148._4_4_;
  }
  else {
    iVar10 = (int)uVar13 + -1;
    if ((int)uVar13 == 0) {
      iVar10 = 0;
    }
    if ((local_158 != 0) || (iVar16 = 1, iVar10 == 0)) {
      iVar16 = 0;
    }
    local_140 = local_160;
    local_138 = local_158;
    local_134 = local_154;
    if (local_154 < (int)(iVar16 + iVar10 + local_158)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    }
    uVar23 = local_138;
    uVar13 = (ulonglong)local_138;
    pvVar18 = local_1a8;
    pvVar20 = pvVar24;
    pvVar21 = local_140;
    iVar16 = local_134;
    if (iVar10 != 0) {
      lVar17 = (longlong)(int)local_138;
      local_138 = iVar10 + (uint)(local_138 == 0) + local_138;
      if (local_134 < (int)local_138) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_140,uVar13);
      }
      iVar16 = local_134;
      pvVar21 = local_140;
      uVar13 = (ulonglong)local_138;
      pvVar18 = (void *)((longlong)local_140 + (lVar17 - (ulonglong)(uVar23 != 0)) * 2);
      _guard_xfg_dispatch_icall_nop(pvVar18,local_1a8,(longlong)iVar10 * 2);
      *(undefined2 *)((longlong)pvVar18 + (longlong)iVar10 * 2) = 0;
      pvVar18 = local_1a8;
    }
  }
  local_128 = (uint)uVar13;
  local_130 = pvVar21;
  local_124 = iVar16;
  if (iVar16 < (int)((2 - (uint)(local_128 != 0)) + local_128)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo();
    uVar13 = (ulonglong)local_128;
  }
  iVar10 = (int)uVar13;
  local_128 = (2 - (uint)(iVar10 != 0)) + iVar10;
  if (local_124 < (int)local_128) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_130,uVar13);
  }
  puVar3 = (undefined2 *)((longlong)local_130 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
  *puVar3 = 10;
  puVar3[1] = 0;
  local_1b8 = local_130;
  local_1b0 = local_128;
  local_1ac = local_124;
  if (pvVar20 != (void *)0x0) {
    FMemory::Free(pvVar20);
  }
  if (local_res18 != (void *)0x0) {
    FMemory::Free(local_res18);
  }
  if (local_d0 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_res20 != (void *)0x0) {
    FMemory::Free(local_res20);
  }
  if (local_110 != (void *)0x0) {
    FMemory::Free(local_110);
  }
  if (pvVar18 != (void *)0x0) {
    FMemory::Free(pvVar18);
  }
  lVar17 = *(longlong *)(param_1 + 0x2f8);
  if ((lVar17 == 0) || (lVar6 = *(longlong *)(lVar17 + 0x10), lVar6 == 0)) goto LAB_142ff9db5;
  if (*(longlong *)(lVar6 + 0x38) == 0) {
    if (*(longlong *)(lVar6 + 0x30) == 0) goto LAB_142ff98d8;
    iVar10 = FUN_140b824e0();
  }
  else {
    lVar6 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x38);
    if (lVar6 == 0) {
LAB_142ff98d8:
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(lVar6 + 0x48) + -1;
    }
  }
  iVar16 = local_1b0;
  if (iVar10 != 0) {
    lVar17 = (longlong)local_1b0;
    local_1b0 = (3 - (uint)(local_1b0 != 0)) + local_1b0;
    if (local_1ac < local_1b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar16);
    }
    uVar13 = 0;
    uVar23 = 0;
    puVar4 = (undefined4 *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar16 != 0)) * 2);
    *puVar4 = 0xa000a;
    *(undefined2 *)(puVar4 + 1) = 0;
    do {
      lVar17 = *(longlong *)(param_1 + 0x2f8);
      lVar6 = *(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x38);
      if (lVar6 == 0) {
        if (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) == 0) goto LAB_142ff9976;
        iVar10 = FUN_140b824e0();
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x38);
        if (lVar6 == 0) {
LAB_142ff9976:
          iVar10 = 0;
        }
        else {
          iVar10 = *(int *)(lVar6 + 0x48) + -1;
        }
      }
      if (iVar10 <= (int)uVar23) break;
      cVar25 = '\0';
      while( true ) {
        iVar10 = local_1b0;
        if ((*(int *)(*(longlong *)(param_1 + 0x2f8) + 0x28) <= (int)uVar13) ||
           (lVar17 = *(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x2f8) + 0x20) + uVar13 * 8),
           *(char *)(lVar17 + 0x38) != (char)uVar23)) break;
        local_res20 = *(void **)(lVar17 + 0x18);
        FName::ToString(&local_res20,&local_c0);
        iVar10 = (int)local_b8;
        iVar16 = local_b8._4_4_;
        bVar26 = (int)local_b8 != 0;
        local_1a0 = local_c0;
        local_c0 = (void *)0x0;
        local_198._0_4_ = (int)local_b8;
        local_198._4_4_ = local_b8._4_4_;
        local_b8 = 0;
        if (iVar16 < (int)((2 - (uint)bVar26) + iVar10)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a0);
          iVar10 = (int)local_198;
        }
        iVar16 = (2 - (uint)(iVar10 != 0)) + iVar10;
        local_198 = CONCAT44(local_198._4_4_,iVar16);
        pvVar21 = local_1a0;
        if (local_198._4_4_ < iVar16) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a0,iVar10);
          pvVar21 = local_1a0;
          iVar16 = (int)local_198;
        }
        iVar15 = local_1b0;
        local_1a0 = (void *)0x0;
        local_198 = 0;
        puVar3 = (undefined2 *)
                 ((longlong)pvVar21 + ((longlong)iVar10 - (ulonglong)(iVar10 != 0)) * 2);
        *puVar3 = 0x20;
        puVar3[1] = 0;
        if ((iVar16 != 0) && (iVar16 + -1 != 0)) {
          lVar17 = (longlong)local_1b0;
          local_1b0 = (uint)(local_1b0 == 0) + local_1b0 + iVar16 + -1;
          if (local_1ac < local_1b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar15);
          }
          pvVar18 = (void *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar15 != 0)) * 2);
          sVar5 = (longlong)iVar16 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar18,pvVar21,sVar5);
          *(undefined2 *)(sVar5 + (longlong)pvVar18) = 0;
        }
        if (pvVar21 != (void *)0x0) {
          FMemory::Free(pvVar21);
        }
        if (local_c0 != (void *)0x0) {
          FMemory::Free();
        }
        uVar13 = (ulonglong)(byte)((char)uVar13 + 1);
        cVar25 = cVar25 + '\x01';
      }
      if (cVar25 == '\0') {
        lVar17 = (longlong)local_1b0;
        local_1b0 = (5 - (uint)(local_1b0 != 0)) + local_1b0;
        if (local_1ac < local_1b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar10);
        }
        lVar17 = lVar17 - (ulonglong)(iVar10 != 0);
        builtin_wcsncpy((wchar_t *)((longlong)local_1b8 + lVar17 * 2),L"None",4);
        *(undefined2 *)((longlong)local_1b8 + lVar17 * 2 + 8) = 0;
      }
      iVar10 = local_1b0;
      lVar17 = (longlong)local_1b0;
      local_1b0 = (2 - (uint)(local_1b0 != 0)) + local_1b0;
      if (local_1ac < local_1b0) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar10);
      }
      uVar23 = (uint)(byte)((char)uVar23 + 1);
      puVar3 = (undefined2 *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
      *puVar3 = 10;
      puVar3[1] = 0;
    } while( true );
  }
  iVar10 = local_1b0;
  if (*(int *)(*(longlong *)(lVar17 + 0x10) + 0xe0) != 0) {
    lVar17 = (longlong)local_1b0;
    local_1b0 = (2 - (uint)(local_1b0 != 0)) + local_1b0;
    if (local_1ac < local_1b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar10);
    }
    puVar3 = (undefined2 *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
    *puVar3 = 10;
    puVar3[1] = 0;
    puVar12 = *(undefined8 **)(*(longlong *)(param_1 + 0x2f8) + 0x30);
    uVar13 = (ulonglong)*(int *)(*(longlong *)(param_1 + 0x2f8) + 0x38);
    pvVar21 = (void *)(uVar13 & 0x1fffffffffffffff);
    if (puVar12 + uVar13 < puVar12) {
      pvVar21 = pvVar24;
    }
    if (pvVar21 != (void *)0x0) {
      do {
        FWeakObjectPtr::operator=(&local_108,*puVar12);
        lVar17 = FWeakObjectPtr::Get(&local_108);
        local_1a8 = *(void **)(lVar17 + 0x18);
        FName::ToString(&local_1a8,&local_70);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_f0,&local_70,2 - (uint)(local_68 != 0));
        uVar13 = local_e8;
        iVar16 = (int)local_e8;
        lVar17 = (longlong)(int)local_e8;
        iVar10 = (2 - (uint)((int)local_e8 != 0)) + (int)local_e8;
        local_e8 = CONCAT44(local_e8._4_4_,iVar10);
        if (local_e8._4_4_ < iVar10) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f0,uVar13 & 0xffffffff);
          iVar10 = (int)local_e8;
        }
        pvVar18 = local_f0;
        iVar15 = local_1b0;
        local_f0 = (void *)0x0;
        local_e8 = 0;
        puVar3 = (undefined2 *)((longlong)pvVar18 + (lVar17 - (ulonglong)(iVar16 != 0)) * 2);
        *puVar3 = 0x20;
        puVar3[1] = 0;
        if ((iVar10 != 0) && (iVar10 + -1 != 0)) {
          lVar17 = (longlong)local_1b0;
          local_1b0 = (uint)(local_1b0 == 0) + local_1b0 + iVar10 + -1;
          if (local_1ac < local_1b0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar15);
          }
          pvVar20 = (void *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar15 != 0)) * 2);
          sVar5 = (longlong)iVar10 * 2 - 2;
          _guard_xfg_dispatch_icall_nop(pvVar20,pvVar18,sVar5);
          *(undefined2 *)(sVar5 + (longlong)pvVar20) = 0;
        }
        if (pvVar18 != (void *)0x0) {
          FMemory::Free(pvVar18);
        }
        if (local_70 != 0) {
          FMemory::Free();
        }
        puVar12 = puVar12 + 1;
        pvVar24 = (void *)((longlong)pvVar24 + 1);
      } while (pvVar24 != pvVar21);
    }
    iVar10 = local_1b0;
    lVar17 = (longlong)local_1b0;
    local_1b0 = (2 - (uint)(local_1b0 != 0)) + local_1b0;
    if (local_1ac < local_1b0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1b8,iVar10);
    }
    puVar3 = (undefined2 *)((longlong)local_1b8 + (lVar17 - (ulonglong)(iVar10 != 0)) * 2);
    *puVar3 = 10;
    puVar3[1] = 0;
  }
LAB_142ff9db5:
  FText::FromString(param_2,&local_1b8);
  if (local_1b8 != (void *)0x0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ff9df0 FUN_142ff9df0 body=109 status=ok
// SIG undefined FUN_142ff9df0(void)

void FUN_142ff9df0(longlong param_1,undefined8 param_2)

{
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  if (0 < *(int *)(param_1 + 8)) {
    local_20 = 0;
    local_18 = 0;
    local_10 = 0;
    TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(&local_20,param_1);
    local_28[0] = 0;
    if (0 < (int)local_18) {
      local_28[0] = 4;
    }
    FUN_143001780(param_2,local_28);
    if (local_20 != 0) {
      FMemory::Free();
      return;
    }
  }
  return;
}



// FUNCTION 142ff9e60 FUN_142ff9e60 body=48 status=ok
// SIG undefined FUN_142ff9e60(void)

undefined8 FUN_142ff9e60(longlong *param_1)

{
  undefined8 uVar1;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
                    /* WARNING: Could not recover jumptable at 0x000142ff9e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 142ff9e90 GetActivationShapeComponent body=8 status=ok
// SIG undefined GetActivationShapeComponent(void)

undefined8 ATrap::GetActivationShapeComponent(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x560);
}



// FUNCTION 142ff9ea0 FUN_142ff9ea0 body=21 status=ok
// SIG undefined FUN_142ff9ea0(void)

undefined8 FUN_142ff9ea0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x560) != 0) {
    return *(undefined8 *)(*(longlong *)(param_1 + 0x560) + 0x208);
  }
  return 0;
}



// FUNCTION 142ff9ec0 FUN_142ff9ec0 body=62 status=ok
// SIG undefined FUN_142ff9ec0(void)

undefined8 FUN_142ff9ec0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_14301f8f0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      return *(undefined8 *)(lVar3 + 0x208);
    }
  }
  return 0;
}



// FUNCTION 142ff9f00 FUN_142ff9f00 body=300 status=ok
// SIG undefined FUN_142ff9f00(void)

undefined8 FUN_142ff9f00(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != (longlong *)0x0) {
    local_res18 = FUN_14301f8f0();
    lVar6 = (**(code **)(*param_2 + 0x628))(param_2,local_res18);
    if ((lVar6 != 0) && (*(longlong *)(lVar6 + 0x208) != 0)) {
      FText::FText(local_38,*(longlong *)(lVar6 + 0x208) + 0x40);
      cVar5 = FText::IsEmpty(local_38);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_30 + 1;
        lVar4 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar4 == 1) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar2 = (int *)((longlong)local_30 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*local_30 + 8))(local_30,1);
          }
        }
      }
      if (cVar5 != '\0') {
        local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x208) + 0x18);
        FName::ToString(&local_res10,local_48);
        FText::FromString(param_1,local_48);
        if (local_48[0] == 0) {
          return param_1;
        }
        FMemory::Free();
        return param_1;
      }
      lVar6 = *(longlong *)(lVar6 + 0x208) + 0x40;
      goto LAB_142ffa019;
    }
  }
  lVar6 = FUN_1404b03b0();
LAB_142ffa019:
  FText::FText(param_1,lVar6);
  return param_1;
}



// FUNCTION 142ffa030 FUN_142ffa030 body=45 status=ok
// SIG undefined FUN_142ffa030(void)

undefined1 FUN_142ffa030(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x210);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x54);
  }
  return 0;
}



// FUNCTION 142ffa060 FUN_142ffa060 body=202 status=ok
// SIG undefined FUN_142ffa060(void)

void FUN_142ffa060(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  
  uVar5 = 0;
  uVar4 = uVar5;
  if (param_2 != 0) {
    uVar4 = FUN_142ffa540();
  }
  uVar7 = uVar5;
  if (0 < *(int *)(param_1 + 0x230)) {
    do {
      if ((((param_2 == 0) ||
           ((uVar2 = *(ulonglong *)(*(longlong *)(param_1 + 0x228) + 0x10 + uVar5), uVar2 != 0 &&
            (uVar2 == uVar4)))) &&
          (lVar3 = *(longlong *)(param_1 + 0x228), (*(byte *)(uVar5 + 0x29 + lVar3) & 2) == 0)) &&
         (*(longlong *)(uVar5 + 0x20 + lVar3) != 0)) {
        iVar1 = (int)param_3[1];
        *(int *)(param_3 + 1) = iVar1 + 1;
        if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
        }
        *(undefined4 *)(*param_3 + (longlong)iVar1 * 4) = *(undefined4 *)(uVar5 + 0xc + lVar3);
      }
      uVar6 = (int)uVar7 + 1;
      uVar5 = uVar5 + 0x40;
      uVar7 = (ulonglong)uVar6;
    } while ((int)uVar6 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 142ffa130 GetSelectedOption body=7 status=ok
// SIG undefined GetSelectedOption(void)

undefined4 ASwitchActor::GetSelectedOption(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x240);
}



// FUNCTION 142ffa140 FUN_142ffa140 body=84 status=ok
// SIG undefined FUN_142ffa140(void)

undefined8 FUN_142ffa140(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar1 = UUserObjectListEntry::GetPrivateStaticClass();
  plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142ffa16e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    return uVar1;
  }
  uVar1 = FUN_1430255d0();
                    /* WARNING: Could not recover jumptable at 0x000142ffa185. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(*param_2 + 0x628))(param_2,uVar1);
  return uVar1;
}



// FUNCTION 142ffa1a0 FUN_142ffa1a0 body=360 status=ok
// SIG undefined FUN_142ffa1a0(void)

undefined8 FUN_142ffa1a0(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_res10;
  undefined8 local_res18;
  longlong local_48 [2];
  undefined1 local_38 [8];
  longlong *local_30;
  
  plVar3 = *(longlong **)(param_2 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar7 = FUN_1404b03b0();
    FText::FText(param_1,uVar7);
    return param_1;
  }
  local_res18 = FUN_14301f8f0();
  lVar6 = (**(code **)(*plVar3 + 0x628))(plVar3,local_res18);
  if ((lVar6 == 0) || (*(longlong *)(lVar6 + 0x208) == 0)) {
    uVar7 = FUN_1404b03b0();
    FText::FText(param_1,uVar7);
  }
  else {
    FText::FText(local_38,*(longlong *)(lVar6 + 0x208) + 0x40);
    cVar5 = FText::IsEmpty(local_38);
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      lVar4 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
    if (cVar5 == '\0') {
      FText::FText(param_1,*(longlong *)(lVar6 + 0x208) + 0x40);
      return param_1;
    }
    local_res10 = *(undefined8 *)(*(longlong *)(lVar6 + 0x208) + 0x18);
    FName::ToString(&local_res10,local_48);
    FText::FromString(param_1,local_48);
    if (local_48[0] != 0) {
      FMemory::Free();
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 142ffa310 FUN_142ffa310 body=57 status=ok
// SIG undefined FUN_142ffa310(void)

undefined8 FUN_142ffa310(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1411e3dd0();
    return param_1;
  }
  uVar1 = FUN_1404b03b0();
  FText::FText(param_1,uVar1);
  return param_1;
}



// FUNCTION 142ffa350 FUN_142ffa350 body=106 status=ok
// SIG undefined FUN_142ffa350(void)

undefined8 * FUN_142ffa350(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = DAT_1464aa6c0;
  local_18._4_4_ = DAT_1464aa6c4;
  uStack_10._0_4_ = DAT_1464aa6c8;
  uStack_10._4_4_ = DAT_1464aa6cc;
  if (((*(longlong *)(param_1 + 0x560) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x210), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
    local_18._0_4_ = (undefined4)*(undefined8 *)(lVar1 + 0x30);
    local_18._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x30) >> 0x20);
    uStack_10._0_4_ = (undefined4)*(undefined8 *)(lVar1 + 0x38);
    uStack_10._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x38) >> 0x20);
  }
  *param_2 = local_18;
  param_2[1] = uStack_10;
  return param_2;
}



// FUNCTION 142ffa3c0 FUN_142ffa3c0 body=106 status=ok
// SIG undefined FUN_142ffa3c0(void)

undefined8 * FUN_142ffa3c0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_18._0_4_ = DAT_1464aa6c0;
  local_18._4_4_ = DAT_1464aa6c4;
  uStack_10._0_4_ = DAT_1464aa6c8;
  uStack_10._4_4_ = DAT_1464aa6cc;
  if (((*(longlong *)(param_1 + 0x560) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x210), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
    local_18._0_4_ = (undefined4)*(undefined8 *)(lVar1 + 0x40);
    local_18._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x40) >> 0x20);
    uStack_10._0_4_ = (undefined4)*(undefined8 *)(lVar1 + 0x48);
    uStack_10._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x48) >> 0x20);
  }
  *param_2 = local_18;
  param_2[1] = uStack_10;
  return param_2;
}



// FUNCTION 142ffa430 FUN_142ffa430 body=45 status=ok
// SIG undefined FUN_142ffa430(void)

undefined1 FUN_142ffa430(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x560) == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x210);
  if ((lVar1 != 0) && (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
    return *(undefined1 *)(lVar1 + 0x68);
  }
  return 0;
}



// FUNCTION 142ffa460 FUN_142ffa460 body=47 status=ok
// SIG undefined FUN_142ffa460(void)

undefined8 FUN_142ffa460(longlong param_1)

{
  longlong lVar1;
  
  if (((*(longlong *)(param_1 + 0x560) != 0) &&
      (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x210), lVar1 != 0)) &&
     (lVar1 = *(longlong *)(lVar1 + 0xb8), lVar1 != 0)) {
    return *(undefined8 *)(lVar1 + 0xe0);
  }
  return 0;
}



// FUNCTION 142ffa490 FUN_142ffa490 body=68 status=ok
// SIG undefined FUN_142ffa490(void)

longlong FUN_142ffa490(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x560);
  if (((lVar2 == 0) || (*(longlong *)(lVar2 + 0x210) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x210) + 0xb8), lVar1 == 0)) {
    lVar2 = 0;
  }
  else if (((*(byte *)(lVar2 + 0x318) & 2) == 0) ||
          (lVar2 = *(longlong *)(lVar1 + 0x98), lVar2 == 0)) {
    return *(longlong *)(lVar1 + 0x90);
  }
  return lVar2;
}



// FUNCTION 142ffa4e0 GetMouseY body=7 status=ok
// SIG undefined GetMouseY(void)

undefined4 FSceneViewport::GetMouseY(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x204);
}



// FUNCTION 142ffa4f0 FUN_142ffa4f0 body=76 status=ok
// SIG undefined FUN_142ffa4f0(void)

undefined8 FUN_142ffa4f0(longlong param_1,int *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_3 + 0xc) = 0xffffffff;
  lVar1 = *(longlong *)(param_1 + 0x228);
  lVar2 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xc) == *param_2) break;
    lVar1 = lVar1 + 0x40;
  }
  FUN_1411cb440(param_3);
  return 1;
}



// FUNCTION 142ffa540 FUN_142ffa540 body=420 status=ok
// SIG undefined FUN_142ffa540(void)

longlong FUN_142ffa540(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x248);
  iVar2 = *(int *)(param_1 + 0x270);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 600);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar2 != 0) {
    puVar7 = *(uint **)(param_1 + 0x268);
    if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
      puVar7 = puStack_28;
    }
    uVar3 = *puVar7;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar3 == 0) {
      lVar6 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar5 = local_78 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar5;
      if (bVar4) goto LAB_142ffa60f;
      uVar3 = puVar7[lVar6 + 1];
    }
    uStack_74 = -uVar3 & uVar3;
    iVar5 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    local_68._4_4_ = (uStack_60 - iVar5) + 0x1f;
    if (iVar2 < local_68._4_4_) {
LAB_142ffa60f:
      local_68._4_4_ = iVar2;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar4 = local_68._4_4_ < *(int *)(param_1 + 0x270);
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar4) {
    do {
      if (param_2 == *(longlong *)((longlong)iStack_5c * 0x20 + *plVar1)) {
        param_2 = *(longlong *)((longlong)iStack_5c * 0x20 + *plVar1);
        break;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return param_2;
}



// FUNCTION 142ffa6f0 FUN_142ffa6f0 body=68 status=ok
// SIG undefined FUN_142ffa6f0(void)

undefined4 * FUN_142ffa6f0(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar1 = *(longlong *)(param_1 + 0x228);
    lVar2 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x40) {
      if (((*(byte *)(lVar1 + 0x29) & 4) == 0) && (*(longlong *)(lVar1 + 0x20) == param_3)) {
        *param_2 = *(undefined4 *)(lVar1 + 0xc);
        return param_2;
      }
    }
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142ffa740 FUN_142ffa740 body=133 status=ok
// SIG undefined FUN_142ffa740(void)

void FUN_142ffa740(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  
  FUN_142fd7680(param_2,param_1);
  plVar4 = *(longlong **)(param_1 + 0x10);
  uVar2 = 0;
  uVar3 = (longlong)*(int *)(param_1 + 0x18) & 0x1fffffffffffffff;
  if (plVar4 + *(int *)(param_1 + 0x18) < plVar4) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      plVar1 = (longlong *)*plVar4;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x280))(plVar1,param_2);
      }
      plVar4 = plVar4 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 142ffa7d0 FUN_142ffa7d0 body=87 status=ok
// SIG undefined FUN_142ffa7d0(void)

void FUN_142ffa7d0(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeGrow
              (param_2,iVar1);
  }
  FUN_142fde910((longlong)iVar1 * 0x88 + *param_2,param_1,0x3f800000);
  return;
}



// FUNCTION 142ffa830 FUN_142ffa830 body=407 status=ok
// SIG undefined FUN_142ffa830(void)

void FUN_142ffa830(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  void *_Src;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  ulonglong uVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  int iVar15;
  
  plVar8 = *(longlong **)(param_1 + 0x40);
  uVar12 = 0;
  uVar10 = (longlong)*(int *)(param_1 + 0x48) & 0x1fffffffffffffff;
  if (plVar8 + *(int *)(param_1 + 0x48) < plVar8) {
    uVar10 = uVar12;
  }
  if (uVar10 != 0) {
    do {
      plVar3 = (longlong *)*plVar8;
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x280))(plVar3,param_2);
      }
      plVar8 = plVar8 + 1;
      uVar12 = uVar12 + 1;
    } while (uVar12 != uVar10);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    iVar15 = (int)param_2[1];
    if (*(int *)((longlong)param_2 + 0xc) < iVar15 + iVar1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<136,4>_>,FDefaultAllocator>::ResizeTo
                (param_2);
      iVar15 = (int)param_2[1];
    }
    puVar14 = *(undefined8 **)(param_1 + 0x50);
    puVar13 = puVar14 + 1;
    puVar11 = (undefined8 *)((longlong)iVar15 * 0x88 + *param_2);
    puVar9 = (undefined4 *)((longlong)puVar11 + 0x84);
    iVar15 = iVar1;
    do {
      *puVar11 = *puVar14;
      uVar7 = puVar13[1];
      *(undefined8 *)(puVar9 + -0x1f) = *puVar13;
      *(undefined8 *)(puVar9 + -0x1d) = uVar7;
      uVar7 = puVar13[3];
      *(undefined8 *)(puVar9 + -0x1b) = puVar13[2];
      *(undefined8 *)(puVar9 + -0x19) = uVar7;
      uVar7 = puVar13[5];
      *(undefined8 *)(puVar9 + -0x17) = puVar13[4];
      *(undefined8 *)(puVar9 + -0x15) = uVar7;
      *(undefined8 *)(puVar9 + -0x13) = puVar13[6];
      uVar7 = puVar13[8];
      *(undefined8 *)(puVar9 + -0x11) = puVar13[7];
      *(undefined8 *)(puVar9 + -0xf) = uVar7;
      uVar7 = puVar13[10];
      *(undefined8 *)(puVar9 + -0xd) = puVar13[9];
      *(undefined8 *)(puVar9 + -0xb) = uVar7;
      uVar4 = *(undefined4 *)((longlong)puVar13 + 0x5c);
      uVar5 = *(undefined4 *)(puVar13 + 0xc);
      uVar6 = *(undefined4 *)((longlong)puVar13 + 100);
      puVar9[-9] = *(undefined4 *)(puVar13 + 0xb);
      puVar9[-8] = uVar4;
      puVar9[-7] = uVar5;
      puVar9[-6] = uVar6;
      *(undefined8 *)(puVar9 + -5) = puVar13[0xd];
      *(undefined8 *)(puVar9 + -3) = 0;
      iVar2 = *(int *)(puVar13 + 0xf);
      _Src = (void *)puVar13[0xe];
      puVar9[-1] = iVar2;
      if (iVar2 == 0) {
        *puVar9 = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar9 + -3,iVar2,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(puVar9 + -3),_Src,(longlong)iVar2 << 3);
      }
      puVar11 = puVar11 + 0x11;
      puVar9 = puVar9 + 0x22;
      puVar14 = puVar14 + 0x11;
      puVar13 = puVar13 + 0x11;
      iVar15 = iVar15 + -1;
    } while (iVar15 != 0);
    *(int *)(param_2 + 1) = (int)param_2[1] + iVar1;
  }
  return;
}



// FUNCTION 142ffa9d0 RemoveSection body=83 status=ok
// SIG undefined RemoveSection(void)

void UMovieSceneTrack::RemoveSection(void)

{
  LowLevelFatalErrorHandler
            ("d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxinventory\\public\\ItemPools/ItemPoolListInterface.h"
             ,0x61,L"Pure virtual not implemented (%s)",L"UItemPoolListInterface::GetItemPools");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "d:\\oak\\main\\engine\\source\\runtime\\gearbox\\gbxinventory\\public\\ItemPools/ItemPoolListInterface.h"
             ,0x61,L"Pure virtual not implemented (%s)",L"UItemPoolListInterface::GetItemPools");
  return;
}



// FUNCTION 142ffaa30 FUN_142ffaa30 body=559 status=ok
// SIG undefined FUN_142ffaa30(void)

longlong * FUN_142ffaa30(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong local_c8 [2];
  longlong *local_b8;
  longlong *local_b0;
  longlong local_a8 [2];
  char local_98 [8];
  longlong local_90 [2];
  undefined4 local_80;
  undefined4 local_78 [2];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  longlong local_38 [2];
  longlong local_28 [2];
  undefined1 local_18;
  
  local_b0 = (longlong *)FUN_1404a9920();
  local_b8 = local_b0 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_b8,local_b8,local_b8);
  plVar5 = local_b0;
  *param_2 = (longlong)local_b8;
  param_2[1] = (longlong)local_b0;
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_b0 + 1) = (int)local_b0[1] + 1;
    UNLOCK();
    if (local_b0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_b0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_b0)(local_b0);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
  }
  _guard_xfg_dispatch_icall_nop(local_78,0,0x68);
  local_98[0] = '\0';
  local_90[0] = 0;
  local_90[1] = 0;
  local_80 = 0;
  local_78[0] = (**(code **)(*param_1 + 0x400))(param_1);
  local_70 = param_1[0x41];
  local_68 = param_1[0x42];
  local_60 = param_1[0x43];
  TArray<FName,FDefaultAllocator>::operator=(local_58,param_1 + 0x44);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(local_48,param_1 + 0x46);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_38,param_1 + 0x48);
  TArray<FName,FDefaultAllocator>::operator=(local_28,param_1 + 0x4a);
  local_18 = (undefined1)param_1[0x4c];
  FUN_142ff5940(local_78,local_98,1);
  FUN_142ff1ff0(local_98);
  local_c8[0] = 0;
  local_c8[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_c8,0);
  FGenericPlatformString::Memcpy(local_c8[0],L"SerialNumber",0x1a);
  if (local_98[0] == '\x04') {
    FUN_142ff1dc0(local_a8,local_90);
  }
  else {
    local_a8[0] = 0;
    local_a8[1] = 0;
  }
  FJsonObject::SetStringField(*param_2,local_c8,local_a8);
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  if (local_90[0] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48[0] != 0) {
    FMemory::Free();
  }
  if (local_58[0] != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ffac60 FUN_142ffac60 body=880 status=ok
// SIG undefined FUN_142ffac60(void)

undefined8 FUN_142ffac60(longlong param_1,undefined8 param_2)

{
  void *_Dst;
  size_t _Size;
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  undefined8 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined8 local_50;
  undefined2 *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  
  local_68 = 0;
  local_60 = 0x2a;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"Game Stage:\nManufacturer:\nType:\nBalance:\n",0x54);
  lVar8 = *(longlong *)(param_1 + 0x2f8);
  if ((lVar8 == 0) || (lVar1 = *(longlong *)(lVar8 + 0x10), lVar1 == 0)) goto LAB_142ffaf97;
  if (*(longlong *)(lVar1 + 0x38) == 0) {
    if (*(longlong *)(lVar1 + 0x30) == 0) goto LAB_142ffacf7;
    iVar4 = FUN_140b824e0();
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x38);
    if (lVar1 == 0) {
LAB_142ffacf7:
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(lVar1 + 0x48) + -1;
    }
  }
  uVar3 = local_60;
  if (iVar4 != 0) {
    iVar4 = (int)local_60;
    lVar8 = (longlong)(int)local_60;
    iVar7 = (9 - (uint)((int)local_60 != 0)) + (int)local_60;
    local_60 = CONCAT44(local_60._4_4_,iVar7);
    if (local_60._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
    }
    lVar8 = lVar8 - (ulonglong)(iVar4 != 0);
    uVar10 = 0;
    builtin_wcsncpy((wchar_t *)(local_68 + lVar8 * 2),L"\nParts:\n",8);
    *(undefined2 *)(local_68 + 0x10 + lVar8 * 2) = 0;
    while( true ) {
      iVar4 = 0;
      lVar8 = *(longlong *)(param_1 + 0x2f8);
      lVar1 = *(longlong *)(lVar8 + 0x10);
      if (*(longlong *)(lVar1 + 0x38) == 0) {
        if (*(longlong *)(lVar1 + 0x30) != 0) {
          iVar4 = FUN_140b824e0();
        }
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x38) + 0x38);
        if (lVar2 != 0) {
          iVar4 = *(int *)(lVar2 + 0x48) + -1;
        }
      }
      if (iVar4 <= (int)uVar10) break;
      puVar6 = (undefined8 *)FUN_142d82070(lVar1,local_38,uVar10);
      local_48 = (undefined2 *)0x0;
      iVar4 = *(int *)(puVar6 + 1) + -1;
      if (*(int *)(puVar6 + 1) == 0) {
        iVar4 = 0;
      }
      local_40._0_4_ = iVar4 + 2;
      local_40._4_4_ = 0;
      if (0 < (int)local_40) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
      }
      iVar5 = local_40._4_4_;
      iVar7 = (int)local_40;
      puVar9 = local_48;
      *local_48 = 9;
      _guard_xfg_dispatch_icall_nop(local_48 + 1,(void *)*puVar6,(longlong)iVar4 * 2);
      puVar9[(longlong)iVar4 + 1] = 0;
      local_48 = (undefined2 *)0x0;
      local_40 = 0;
      local_58 = puVar9;
      local_50._4_4_ = iVar5;
      if (iVar5 < (int)((3 - (uint)(iVar7 != 0)) + iVar7)) {
        local_50._0_4_ = iVar7;
        TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_58);
        iVar7 = (int)local_50;
      }
      iVar4 = (3 - (uint)(iVar7 != 0)) + iVar7;
      local_50 = CONCAT44(local_50._4_4_,iVar4);
      puVar9 = local_58;
      if (local_50._4_4_ < iVar4) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,iVar7);
        puVar9 = local_58;
        iVar4 = (int)local_50;
      }
      uVar3 = local_60;
      local_58 = (undefined2 *)0x0;
      local_50 = 0;
      *(undefined4 *)(puVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0))) = 0xa003a;
      *(undefined2 *)((longlong)(puVar9 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0))) + 4) = 0;
      if ((iVar4 != 0) && (iVar4 + -1 != 0)) {
        iVar7 = (int)local_60;
        lVar8 = (longlong)(int)local_60;
        iVar5 = (uint)((int)local_60 == 0) + (int)local_60 + iVar4 + -1;
        local_60 = CONCAT44(local_60._4_4_,iVar5);
        if (local_60._4_4_ < iVar5) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
        }
        _Dst = (void *)(local_68 + (lVar8 - (ulonglong)(iVar7 != 0)) * 2);
        _Size = (longlong)iVar4 * 2 - 2;
        _guard_xfg_dispatch_icall_nop(_Dst,puVar9,_Size);
        *(undefined2 *)(_Size + (longlong)_Dst) = 0;
      }
      if (puVar9 != (undefined2 *)0x0) {
        FMemory::Free(puVar9);
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      uVar10 = (uint)(byte)((char)uVar10 + 1);
    }
  }
  uVar3 = local_60;
  if (*(int *)(*(longlong *)(lVar8 + 0x10) + 0xe0) != 0) {
    iVar4 = (int)local_60;
    lVar8 = (longlong)(int)local_60;
    iVar7 = (0x11 - (uint)((int)local_60 != 0)) + (int)local_60;
    local_60 = CONCAT44(local_60._4_4_,iVar7);
    if (local_60._4_4_ < iVar7) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,uVar3 & 0xffffffff);
    }
    lVar8 = lVar8 - (ulonglong)(iVar4 != 0);
    builtin_wcsncpy((wchar_t *)(local_68 + lVar8 * 2),L"\nGeneric",8);
    builtin_wcsncpy((wchar_t *)(local_68 + 0x10 + lVar8 * 2),L" Parts:\n",8);
    *(undefined2 *)(local_68 + 0x20 + lVar8 * 2) = 0;
  }
LAB_142ffaf97:
  FText::FromString(param_2,&local_68);
  if (local_68 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 142ffafd0 FUN_142ffafd0 body=609 status=ok
// SIG undefined FUN_142ffafd0(void)

void FUN_142ffafd0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [8];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142ffb240();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b458f0) && (_Init_thread_header(&DAT_146b458f0), DAT_146b458f0 == -1)) {
    uVar1 = ALandscapeStreamingProxy::StaticClass();
    ALandscapeStreamingProxy::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DroppedQuantity",1);
    DAT_146b458e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b458f0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b458e8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b458e8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b458e8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45900) && (_Init_thread_header(&DAT_146b45900), DAT_146b45900 == -1)) {
    uVar1 = ALandscapeStreamingProxy::StaticClass();
    ALandscapeStreamingProxy::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ShrinkLifeSpan",1);
    DAT_146b458f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45900);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b458f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b458f8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b458f8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45910) && (_Init_thread_header(&DAT_146b45910), DAT_146b45910 == -1)) {
    uVar1 = ALandscapeStreamingProxy::StaticClass();
    ALandscapeStreamingProxy::StaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bDroppedFromPlayerInventory",1);
    DAT_146b45908 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45910);
  }
  if (0 < *(int *)(DAT_146b45908 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b45908 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b45908 + 0x30));
  }
  return;
}



// FUNCTION 142ffb240 FUN_142ffb240 body=1635 status=ok
// SIG undefined FUN_142ffb240(void)

void FUN_142ffb240(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142231c90();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b45cd0) && (_Init_thread_header(&DAT_146b45cd0), DAT_146b45cd0 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bIsActive",1);
    DAT_146b45cc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45cd0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45cc8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45cc8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45cc8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45ce0) && (_Init_thread_header(&DAT_146b45ce0), DAT_146b45ce0 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bPickupSpawnPaused",1);
    DAT_146b45cd8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45ce0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45cd8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45cd8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45cd8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45cf0) && (_Init_thread_header(&DAT_146b45cf0), DAT_146b45cf0 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PickedUpBy",1);
    DAT_146b45ce8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45cf0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45ce8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45ce8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45ce8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d00) && (_Init_thread_header(&DAT_146b45d00), DAT_146b45d00 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedPickupActor",1);
    DAT_146b45cf8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d00);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45cf8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45cf8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45cf8 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d10) && (_Init_thread_header(&DAT_146b45d10), DAT_146b45d10 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PickupActorClientSpawnData",1);
    DAT_146b45d08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d10);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45d08 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d08 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d20) && (_Init_thread_header(&DAT_146b45d20), DAT_146b45d20 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PickupCategory",1);
    DAT_146b45d18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d20);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45d18 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d18 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d30) && (_Init_thread_header(&DAT_146b45d30), DAT_146b45d30 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"BumpAngularDir",1);
    DAT_146b45d28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d30);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45d28 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d28 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d40) && (_Init_thread_header(&DAT_146b45d40), DAT_146b45d40 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bCanOnlyBePickedUpByOwnerController",1);
    DAT_146b45d38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d40);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45d38 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d38 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d50) && (_Init_thread_header(&DAT_146b45d50), DAT_146b45d50 == -1)) {
    uVar1 = FUN_143025260();
    FUN_143025260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"RepLootSpawnAction",1);
    DAT_146b45d48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d50);
  }
  if (0 < *(int *)(DAT_146b45d48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45d48 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b45d48 + 0x30));
  }
  return;
}



// FUNCTION 142ffb8b0 FUN_142ffb8b0 body=951 status=ok
// SIG undefined FUN_142ffb8b0(void)

void FUN_142ffb8b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_142cc2130();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146b45c70) && (_Init_thread_header(&DAT_146b45c70), DAT_146b45c70 == -1)) {
    uVar1 = FUN_14301f8f0();
    FUN_14301f8f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PackedReplicationData",1);
    DAT_146b45c68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45c70);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45c68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45c68 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45c68 + 0x30));
  }
  if ((*piVar5 < DAT_146b45c80) && (_Init_thread_header(&DAT_146b45c80), DAT_146b45c80 == -1)) {
    uVar1 = FUN_14301f8f0();
    FUN_14301f8f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MonetaryValue",1);
    DAT_146b45c78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45c80);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45c78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45c78 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45c78 + 0x30));
  }
  if ((*piVar5 < DAT_146b45c90) && (_Init_thread_header(&DAT_146b45c90), DAT_146b45c90 == -1)) {
    uVar1 = FUN_14301f8f0();
    FUN_14301f8f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InventoryScoreValue",1);
    DAT_146b45c88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45c90);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45c88 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45c88 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45c88 + 0x30));
  }
  if ((*piVar5 < DAT_146b45ca0) && (_Init_thread_header(&DAT_146b45ca0), DAT_146b45ca0 == -1)) {
    uVar1 = FUN_14301f8f0();
    FUN_14301f8f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedUIStats",1);
    DAT_146b45c98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45ca0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45c98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45c98 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45c98 + 0x30));
  }
  if ((*piVar5 < DAT_146b45cb0) && (_Init_thread_header(&DAT_146b45cb0), DAT_146b45cb0 == -1)) {
    uVar1 = FUN_14301f8f0();
    FUN_14301f8f0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReRollCount",1);
    DAT_146b45ca8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45cb0);
  }
  if (0 < *(int *)(DAT_146b45ca8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146b45ca8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b45ca8 + 0x30));
  }
  return;
}



// FUNCTION 142ffbc70 FUN_142ffbc70 body=609 status=ok
// SIG undefined FUN_142ffbc70(void)

void FUN_142ffbc70(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146b45d60) && (_Init_thread_header(&DAT_146b45d60), DAT_146b45d60 == -1)) {
    uVar1 = FUN_1430255d0();
    FUN_1430255d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InventoryList",1);
    DAT_146b45d58 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d60);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d58 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b45d58 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d58 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d70) && (_Init_thread_header(&DAT_146b45d70), DAT_146b45d70 == -1)) {
    uVar1 = FUN_1430255d0();
    FUN_1430255d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InventoryCapacityUsed",1);
    DAT_146b45d68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d70);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146b45d68 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b45d68 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146b45d68 + 0x30));
  }
  if ((*piVar5 < DAT_146b45d80) && (_Init_thread_header(&DAT_146b45d80), DAT_146b45d80 == -1)) {
    uVar1 = FUN_1430255d0();
    FUN_1430255d0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"MaxInventoryItems",1);
    DAT_146b45d78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146b45d80);
  }
  if (0 < *(int *)(DAT_146b45d78 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146b45d78 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146b45d78 + 0x30));
  }
  return;
}



// FUNCTION 142ffbee0 FUN_142ffbee0 body=140 status=ok
// SIG undefined FUN_142ffbee0(void)

undefined8 * FUN_142ffbee0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  *(byte *)((longlong)param_2 + 0x29) = *(byte *)((longlong)param_2 + 0x29) & 0xf0;
  param_2[2] = 0;
  param_2[4] = 0;
  *(undefined1 *)(param_2 + 5) = 0;
  *param_2 = 0xffffffffffffffff;
  param_2[1] = 0xffffffffffffffff;
  *(undefined4 *)(param_2 + 3) = 1;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
  *(undefined1 *)(param_2 + 6) = 0;
  *(byte *)((longlong)param_2 + 0x3c) = *(byte *)((longlong)param_2 + 0x3c) & 0xfc;
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *(undefined4 *)(param_2 + 7) = 1;
  if (param_3 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x228);
    lVar1 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar2;
    if (lVar2 != lVar1) {
      while (*(longlong *)(lVar2 + 0x20) != param_3) {
        lVar2 = lVar2 + 0x40;
        if (lVar2 == lVar1) {
          return param_2;
        }
      }
      FUN_1411cb440(param_2);
    }
  }
  return param_2;
}



// FUNCTION 142ffbf70 FUN_142ffbf70 body=870 status=ok
// SIG undefined FUN_142ffbf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ffbf70(undefined8 *param_1,longlong *param_2,longlong param_3)

{
  bool bVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_e8;
  undefined8 local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  float local_b0;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined1 *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (param_2 == (longlong *)0x0) {
LAB_142ffc285:
    *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
    uVar2 = DAT_1468b5d98;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
    *param_1 = *(undefined8 *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar2;
    *(undefined1 *)(param_1 + 3) = 0;
    return param_1;
  }
  lVar3 = FUN_142a0cc80();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if ((((!bVar1) || (param_2[0xe3] == 0)) || (*(longlong *)(param_2[0xe3] + 0x348) == 0)) ||
     ((int)param_2[0x121] == 0)) {
    lVar3 = FUN_142a232e0();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (((bVar1) && (param_2[0xe5] != 0)) &&
       (UStaticMesh::GetBounds(param_2[0xe5],&local_e8), 0.0 < local_d0)) {
      *(undefined1 *)(param_1 + 3) = 1;
      *param_1 = CONCAT44(local_e8._4_4_ - local_d8,(float)local_e8 - local_e0._4_4_);
      *(float *)(param_1 + 1) = (float)local_e0 - local_d4;
      *(ulonglong *)((longlong)param_1 + 0xc) =
           CONCAT44(local_e8._4_4_ + local_d8,(float)local_e8 + local_e0._4_4_);
      *(float *)((longlong)param_1 + 0x14) = (float)local_e0 + local_d4;
      return param_1;
    }
    lVar3 = (**(code **)(*param_2 + 0x6b8))(param_2);
    if (lVar3 != 0) {
      FUN_1423036c0(lVar3 + 0x28,param_1,&DAT_1468b5b70,0);
      return param_1;
    }
    goto LAB_142ffc285;
  }
  local_e8 = 0;
  local_e0 = 0;
  if (param_3 != 0) {
    uStack_c0 = &local_e8;
    local_58 = 0;
    local_48 = 0;
    local_c8 = param_3;
    puVar4 = (undefined8 *)FUN_140438ef0(0x18,local_78);
    if (puVar4 != (undefined8 *)0x0) {
      *puVar4 = &PTR_FUN_143f77c18;
      *(undefined4 *)(puVar4 + 1) = (undefined4)local_c8;
      *(undefined4 *)((longlong)puVar4 + 0xc) = local_c8._4_4_;
      *(undefined4 *)(puVar4 + 2) = (undefined4)uStack_c0;
      *(undefined4 *)((longlong)puVar4 + 0x14) = uStack_c0._4_4_;
    }
    local_88[0] = &LAB_142fe9a20;
    FUN_142ff3570(param_3,local_88);
    if ((float)local_e0 != 0.0) {
      FUN_1424a2eb0(*(undefined8 *)(param_2[0xe3] + 0x348),&local_e8,&local_a8);
      fVar5 = local_a0 + local_94;
      fVar8 = local_a8 + local_9c;
      fVar7 = local_a4 + local_98;
      uStack_c0 = (undefined8 *)CONCAT44(uStack_c0._4_4_,fVar5);
      *param_1 = CONCAT44(local_a4 - local_98,local_a8 - local_9c);
      *(float *)(param_1 + 1) = local_a0 - local_94;
      local_b0 = local_a0 - local_94;
      goto LAB_142ffc168;
    }
  }
  fVar5 = *(float *)(param_2 + 0x129) + *(float *)((longlong)param_2 + 0x954);
  fVar6 = *(float *)(param_2 + 0x129) - *(float *)((longlong)param_2 + 0x954);
  fVar8 = *(float *)(param_2 + 0x128) + *(float *)((longlong)param_2 + 0x94c);
  fVar7 = *(float *)((longlong)param_2 + 0x944) + *(float *)(param_2 + 0x12a);
  uStack_c0 = (undefined8 *)CONCAT44(uStack_c0._4_4_,fVar6);
  *param_1 = CONCAT44(*(float *)((longlong)param_2 + 0x944) - *(float *)(param_2 + 0x12a),
                      *(float *)(param_2 + 0x128) - *(float *)((longlong)param_2 + 0x94c));
  *(float *)(param_1 + 1) = fVar6;
  local_b0 = fVar5;
LAB_142ffc168:
  *(undefined1 *)(param_1 + 3) = 1;
  *(ulonglong *)((longlong)param_1 + 0xc) = CONCAT44(fVar7,fVar8);
  *(float *)((longlong)param_1 + 0x14) = fVar5;
  if (local_e8 == 0) {
    return param_1;
  }
  FMemory::Free();
  return param_1;
}



// FUNCTION 142ffc2e0 FUN_142ffc2e0 body=1875 status=ok
// SIG undefined FUN_142ffc2e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_142ffc2e0(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  longlong lVar18;
  longlong *plVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
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
  undefined1 auStack_228 [32];
  undefined1 local_208 [8];
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1e8;
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
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_160;
  float local_154;
  undefined8 local_148;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  undefined4 local_130;
  undefined1 local_118 [48];
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_228;
  if (param_2 == (longlong *)0x0) {
    *(undefined8 *)((longlong)param_1 + 0xc) = _DAT_1468b5d90;
    uVar7 = DAT_1468b5d98;
    *(undefined4 *)((longlong)param_1 + 0x14) = DAT_1468b5d98;
    *param_1 = *(undefined8 *)((longlong)param_1 + 0xc);
    *(undefined4 *)(param_1 + 1) = uVar7;
    *(undefined1 *)(param_1 + 3) = 0;
  }
  else {
    FUN_142ffbf70(local_208);
    plVar19 = (longlong *)param_2[0x34];
    plVar1 = plVar19 + (int)param_2[0x35];
    for (; plVar19 != plVar1; plVar19 = plVar19 + 1) {
      lVar18 = *plVar19;
      if (lVar18 == 0) {
LAB_142ffc3e6:
        lVar18 = 0;
      }
      else {
        lVar15 = FUN_1429bed90();
        if ((*(int *)(*(longlong *)(lVar18 + 0x10) + 0x90) < *(int *)(lVar15 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar18 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar15 + 0x90) * 8) != lVar15 + 0x88)) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        if (!bVar6) goto LAB_142ffc3e6;
      }
      if (lVar18 != 0) {
        FUN_142ffbf70(&local_198,lVar18,0);
        pfVar16 = (float *)(**(code **)(*param_2 + 0x420))
                                     (param_2,&local_148,*(undefined8 *)(lVar18 + 0x198),2);
        pfVar17 = (float *)FUN_14238d0c0(lVar18,local_118);
        fVar13 = fRam0000000146b45438;
        fVar12 = fRam0000000146b45434;
        fVar11 = _DAT_146b45430;
        fVar10 = fRam0000000146b453d8;
        fVar9 = fRam0000000146b453d4;
        fVar8 = _DAT_146b453d0;
        fVar38 = *pfVar16;
        fVar39 = pfVar16[1];
        fVar2 = pfVar16[2];
        fVar22 = pfVar16[3];
        auVar24 = *(undefined1 (*) [16])(pfVar16 + 8);
        fVar50 = auVar24._0_4_;
        fVar52 = auVar24._4_4_;
        fVar34 = auVar24._8_4_;
        auVar23 = *(undefined1 (*) [16])(pfVar17 + 8);
        fVar51 = auVar23._0_4_;
        fVar29 = auVar23._4_4_;
        fVar36 = auVar23._8_4_;
        auVar20 = minps(auVar23,auVar24);
        auVar21._4_4_ = -(uint)(auVar20._4_4_ < fRam0000000146b45434);
        auVar21._0_4_ = -(uint)(auVar20._0_4_ < _DAT_146b45430);
        auVar21._8_4_ = -(uint)(auVar20._8_4_ < fRam0000000146b45438);
        auVar21._12_4_ = -(uint)(auVar20._12_4_ < fRam0000000146b4543c);
        iVar14 = movmskps((int)pfVar17,auVar21);
        if (iVar14 == 0) {
          fVar50 = pfVar17[4] * fVar50;
          fVar52 = pfVar17[5] * fVar52;
          fVar34 = pfVar17[6] * fVar34;
          fVar51 = fVar34 * fVar39 - fVar52 * fVar2;
          fVar29 = fVar50 * fVar2 - fVar34 * fVar38;
          fVar36 = fVar52 * fVar38 - fVar50 * fVar39;
          fVar51 = fVar51 + fVar51;
          fVar29 = fVar29 + fVar29;
          fVar36 = fVar36 + fVar36;
          fVar50 = (fVar36 * fVar39 - fVar29 * fVar2) + fVar22 * fVar51 + fVar50 + pfVar16[4];
          fStack_138 = (fVar51 * fVar2 - fVar36 * fVar38) + fVar22 * fVar29 + fVar52 + pfVar16[5];
          local_154 = (fVar29 * fVar38 - fVar51 * fVar39) + fVar22 * fVar36 + fVar34 + pfVar16[6];
        }
        else {
          fVar25 = fVar39 + fVar39;
          fVar26 = fVar2 + fVar2;
          fVar3 = pfVar16[4];
          fVar4 = pfVar16[5];
          fVar5 = pfVar16[6];
          fVar30 = fVar38 * (fVar38 + fVar38);
          fVar43 = fVar22 * (fVar38 + fVar38);
          fVar47 = (fVar22 * fVar26 + fVar38 * fVar25) * fVar50;
          fVar48 = (fVar43 + fVar39 * fVar26) * fVar52;
          fVar49 = (fVar22 * fVar25 + fVar38 * fVar26) * fVar34;
          fVar32 = fVar52 * (fVar38 * fVar25 - fVar22 * fVar26);
          fVar35 = fVar34 * (fVar39 * fVar26 - fVar43);
          fVar37 = fVar50 * (fVar38 * fVar26 - fVar22 * fVar25);
          fVar43 = (float)((uint)((_DAT_146b453d0 - (fVar2 * fVar26 + fVar39 * fVar25)) * fVar50) &
                          _DAT_146b453e0);
          fVar26 = (float)((uint)((fRam0000000146b453d4 - (fVar2 * fVar26 + fVar30)) * fVar52) &
                          uRam0000000146b453e4);
          fVar27 = (float)((uint)((fRam0000000146b453d8 - (fVar39 * fVar25 + fVar30)) * fVar34) &
                          uRam0000000146b453e8);
          fVar28 = (float)((uint)((fRam0000000146b453dc - (fVar30 + fVar30)) * auVar24._12_4_) &
                          uRam0000000146b453ec);
          fVar38 = *pfVar17;
          fVar39 = pfVar17[1];
          fVar2 = pfVar17[2];
          fVar22 = pfVar17[3];
          fVar30 = fVar39 + fVar39;
          fVar31 = fVar2 + fVar2;
          fVar33 = (fVar38 + fVar38) * fVar38;
          fVar25 = (fVar38 + fVar38) * fVar22;
          fVar44 = (fVar31 * fVar22 + fVar30 * fVar38) * fVar51;
          fVar45 = (fVar25 + fVar31 * fVar39) * fVar29;
          fVar46 = (fVar30 * fVar22 + fVar31 * fVar38) * fVar36;
          fVar40 = fVar29 * (fVar30 * fVar38 - fVar31 * fVar22);
          fVar41 = fVar36 * (fVar31 * fVar39 - fVar25);
          fVar42 = fVar51 * (fVar31 * fVar38 - fVar30 * fVar22);
          fVar22 = (float)((uint)((_DAT_146b453d0 - (fVar31 * fVar2 + fVar30 * fVar39)) * fVar51) &
                          _DAT_146b453e0);
          fVar25 = (float)((uint)((fRam0000000146b453d4 - (fVar31 * fVar2 + fVar33)) * fVar29) &
                          uRam0000000146b453e4);
          fVar30 = (float)((uint)((fRam0000000146b453d8 - (fVar30 * fVar39 + fVar33)) * fVar36) &
                          uRam0000000146b453e8);
          fVar31 = (float)((uint)((fRam0000000146b453dc - (fVar33 + fVar33)) * auVar23._12_4_) &
                          uRam0000000146b453ec);
          fVar38 = pfVar17[4];
          fVar39 = pfVar17[5];
          fVar2 = pfVar17[6];
          local_1d8 = fVar44 * fVar32 + fVar22 * fVar43 + fVar42 * fVar49 + fVar31 * fVar3;
          fStack_1d4 = fVar44 * fVar26 + fVar22 * fVar47 + fVar42 * fVar35 + fVar31 * fVar4;
          fStack_1d0 = fVar44 * fVar48 + fVar22 * fVar37 + fVar42 * fVar27 + fVar31 * fVar5;
          fStack_1cc = fVar44 * fVar28 + fVar22 * fVar28 + fVar42 * fVar28 +
                       fVar31 * fRam0000000146b453dc;
          local_1c8 = fVar25 * fVar32 + fVar40 * fVar43 + fVar45 * fVar49 + fVar31 * fVar3;
          fStack_1c4 = fVar25 * fVar26 + fVar40 * fVar47 + fVar45 * fVar35 + fVar31 * fVar4;
          fStack_1c0 = fVar25 * fVar48 + fVar40 * fVar37 + fVar45 * fVar27 + fVar31 * fVar5;
          fStack_1bc = fVar25 * fVar28 + fVar40 * fVar28 + fVar45 * fVar28 +
                       fVar31 * fRam0000000146b453dc;
          local_1b8 = fVar41 * fVar32 + fVar46 * fVar43 + fVar30 * fVar49 + fVar31 * fVar3;
          fStack_1b4 = fVar41 * fVar26 + fVar46 * fVar47 + fVar30 * fVar35 + fVar31 * fVar4;
          fStack_1b0 = fVar41 * fVar48 + fVar46 * fVar37 + fVar30 * fVar27 + fVar31 * fVar5;
          fStack_1ac = fVar41 * fVar28 + fVar46 * fVar28 + fVar30 * fVar28 +
                       fVar31 * fRam0000000146b453dc;
          local_1a8 = fVar39 * fVar32 + fVar38 * fVar43 + fVar2 * fVar49 +
                      fRam0000000146b453dc * fVar3;
          fStack_1a4 = fVar39 * fVar26 + fVar38 * fVar47 + fVar2 * fVar35 +
                       fRam0000000146b453dc * fVar4;
          fStack_1a0 = fVar39 * fVar48 + fVar38 * fVar37 + fVar2 * fVar27 +
                       fRam0000000146b453dc * fVar5;
          fStack_19c = fVar39 * fVar28 + fVar38 * fVar28 + fVar2 * fVar28 +
                       fRam0000000146b453dc * fRam0000000146b453dc;
          FMatrix::RemoveScaling(&local_1d8);
          fVar50 = (float)(-(uint)(fVar11 <= fVar51 * fVar50) & (_DAT_146b45420 ^ (uint)fVar8) ^
                          _DAT_146b45420);
          fVar51 = (float)(-(uint)(fVar12 <= fVar29 * fVar52) & (uRam0000000146b45424 ^ (uint)fVar9)
                          ^ uRam0000000146b45424);
          fVar52 = (float)(-(uint)(fVar13 <= fVar36 * fVar34) &
                           (uRam0000000146b45428 ^ (uint)fVar10) ^ uRam0000000146b45428);
          local_1d8 = local_1d8 * fVar50;
          fStack_1d4 = fStack_1d4 * fVar50;
          fStack_1d0 = fStack_1d0 * fVar50;
          fStack_1c4 = fStack_1c4 * fVar51;
          fStack_1c0 = fStack_1c0 * fVar51;
          local_1c8 = local_1c8 * fVar51;
          fStack_1b4 = fStack_1b4 * fVar52;
          fStack_1b0 = fStack_1b0 * fVar52;
          local_1b8 = local_1b8 * fVar52;
          FQuat::FQuat(&local_178,&local_1d8);
          local_1e8 = 0x322bcc77;
          auVar23._0_4_ = local_178 * local_178 + fStack_170 * fStack_170;
          auVar23._4_4_ = fStack_174 * fStack_174 + fStack_16c * fStack_16c;
          auVar23._8_4_ = fStack_170 * fStack_170 + local_178 * local_178;
          auVar23._12_4_ = fStack_16c * fStack_16c + fStack_174 * fStack_174;
          fVar34 = auVar23._4_4_ + auVar23._0_4_;
          fVar36 = auVar23._8_4_ + auVar23._4_4_;
          fVar38 = auVar23._12_4_ + auVar23._8_4_;
          fVar39 = auVar23._0_4_ + auVar23._12_4_;
          auVar24._4_4_ = fVar36;
          auVar24._0_4_ = fVar34;
          auVar24._8_4_ = fVar38;
          auVar24._12_4_ = fVar39;
          auVar24 = rsqrtps(auVar23,auVar24);
          fVar50 = auVar24._0_4_;
          fVar51 = auVar24._4_4_;
          fVar52 = auVar24._8_4_;
          fVar29 = auVar24._12_4_;
          fVar50 = (_DAT_146b453c0 - fVar50 * fVar50 * fVar34 * _DAT_146b453c0) * fVar50 + fVar50;
          fVar51 = (fRam0000000146b453c4 - fVar51 * fVar51 * fVar36 * fRam0000000146b453c4) * fVar51
                   + fVar51;
          fVar52 = (fRam0000000146b453c8 - fVar52 * fVar52 * fVar38 * fRam0000000146b453c8) * fVar52
                   + fVar52;
          fVar29 = (fRam0000000146b453cc - fVar29 * fVar29 * fVar39 * fRam0000000146b453cc) * fVar29
                   + fVar29;
          local_178 = (float)(((uint)(((_DAT_146b453c0 - fVar50 * fVar50 * fVar34 * _DAT_146b453c0)
                                       * fVar50 + fVar50) * local_178) ^ _DAT_146b453b0) &
                              -(uint)(1e-08 <= fVar34) ^ _DAT_146b453b0);
          fStack_174 = (float)(((uint)(((fRam0000000146b453c4 -
                                        fVar51 * fVar51 * fVar36 * fRam0000000146b453c4) * fVar51 +
                                       fVar51) * fStack_174) ^ uRam0000000146b453b4) &
                               -(uint)(1e-08 <= fVar36) ^ uRam0000000146b453b4);
          fStack_170 = (float)(((uint)(((fRam0000000146b453c8 -
                                        fVar52 * fVar52 * fVar38 * fRam0000000146b453c8) * fVar52 +
                                       fVar52) * fStack_170) ^ uRam0000000146b453b8) &
                               -(uint)(1e-08 <= fVar38) ^ uRam0000000146b453b8);
          fStack_16c = (float)(((uint)(((fRam0000000146b453cc -
                                        fVar29 * fVar29 * fVar39 * fRam0000000146b453cc) * fVar29 +
                                       fVar29) * fStack_16c) ^ uRam0000000146b453bc) &
                               -(uint)(1e-08 <= fVar39) ^ uRam0000000146b453bc);
          fVar50 = local_1a8;
          fStack_138 = fStack_1a4;
          local_154 = fStack_1a0;
        }
        fStack_13c = fVar50 + local_18c;
        local_130 = CONCAT31(local_130._1_3_,1);
        fVar50 = fVar50 + local_198;
        fVar51 = fStack_138 + local_194;
        fStack_138 = fStack_138 + local_188;
        local_160 = local_154 + local_190;
        local_154 = local_154 + local_184;
        local_148 = CONCAT44(fVar51,fVar50);
        fStack_140 = local_160;
        fStack_134 = local_154;
        if ((char)local_1f0 == '\0') {
          uStack_200._0_4_ = local_160;
          local_208 = (undefined1  [8])local_148;
          uStack_200._4_4_ = fStack_13c;
          local_1f0 = local_130;
          local_1f8 = fStack_138;
          fStack_1f4 = local_154;
        }
        else {
          if (fVar50 < (float)local_208._0_4_) {
            local_208._0_4_ = fVar50;
          }
          if (fVar51 < (float)local_208._4_4_) {
            local_208._4_4_ = fVar51;
          }
          if (local_160 < (float)uStack_200) {
            uStack_200._0_4_ = local_160;
          }
          if (uStack_200._4_4_ < fStack_13c) {
            uStack_200._4_4_ = fStack_13c;
          }
          if (local_1f8 < fStack_138) {
            local_1f8 = fStack_138;
          }
          if (fStack_1f4 < local_154) {
            fStack_1f4 = local_154;
          }
        }
      }
    }
    *param_1 = local_208;
    param_1[1] = uStack_200;
    param_1[2] = CONCAT44(fStack_1f4,local_1f8);
    *(undefined4 *)(param_1 + 3) = local_1f0;
  }
  return param_1;
}



// FUNCTION 142ffca40 FUN_142ffca40 body=77 status=ok
// SIG undefined FUN_142ffca40(void)

longlong FUN_142ffca40(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = *(longlong **)(param_1 + 0x58);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x60) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return *(longlong *)(param_1 + 0x50);
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  return plVar1[1];
}



// FUNCTION 142ffca90 FUN_142ffca90 body=40 status=ok
// SIG undefined FUN_142ffca90(void)

int FUN_142ffca90(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0x70);
  return (int)ROUND(fVar1 * 2.0 - 0.5) >> 1;
}



// FUNCTION 142ffcac0 FUN_142ffcac0 body=130 status=ok
// SIG undefined FUN_142ffcac0(void)

undefined * FUN_142ffcac0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b45a10) {
    _Init_thread_header(&DAT_146b45a10);
    if (DAT_146b45a10 == -1) {
      FUN_142fef030(&DAT_146b459c0,L"MediumFont");
      atexit(FUN_143ec2960);
      _Init_thread_footer(&DAT_146b45a10);
      return &DAT_146b459c0;
    }
  }
  return &DAT_146b459c0;
}



// FUNCTION 142ffcb50 FUN_142ffcb50 body=20 status=ok
// SIG undefined FUN_142ffcb50(void)

longlong FUN_142ffcb50(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x488);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x480);
  }
  return lVar1;
}



// FUNCTION 142ffcb70 FUN_142ffcb70 body=40 status=ok
// SIG undefined FUN_142ffcb70(void)

int FUN_142ffcb70(longlong param_1)

{
  float fVar1;
  
  fVar1 = (float)FUN_142c98860(param_1 + 0x38);
  return (int)ROUND(fVar1 * 2.0 - 0.5) >> 1;
}



// FUNCTION 142ffcba0 FUN_142ffcba0 body=32 status=ok
// SIG undefined FUN_142ffcba0(void)

int FUN_142ffcba0(longlong param_1)

{
  if ((DAT_146b45384 == '\0') && (0 < *(int *)(param_1 + 0x2a8))) {
    return *(int *)(param_1 + 0x2a8) - *(int *)(param_1 + 0x240);
  }
  return 0x7fffffff;
}



// FUNCTION 142ffcbe0 FUN_142ffcbe0 body=55 status=ok
// SIG undefined FUN_142ffcbe0(void)

int FUN_142ffcbe0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x228);
  lVar4 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar3;
  iVar1 = 0;
  for (; lVar3 != lVar4; lVar3 = lVar3 + 0x40) {
    iVar2 = iVar1 + 1;
    if (*(longlong *)(lVar3 + 0x20) == 0) {
      iVar2 = iVar1;
    }
    iVar1 = iVar2;
  }
  return iVar1;
}



// FUNCTION 142ffcc20 FUN_142ffcc20 body=211 status=ok
// SIG undefined FUN_142ffcc20(void)

longlong FUN_142ffcc20(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = param_1 + 0x120;
  lVar2 = FWeakObjectPtr::Get(lVar3);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 0x128)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x130) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar3,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 0x128) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar3);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_142e1f230();
  if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  return lVar2;
}



// FUNCTION 142ffcd00 FUN_142ffcd00 body=1459 status=ok
// SIG undefined FUN_142ffcd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_142ffcd00(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong *plVar17;
  bool bVar18;
  undefined1 auStack_238 [32];
  longlong *local_218;
  longlong local_210 [4];
  undefined8 *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined4 *local_1d8;
  ulonglong *puStack_1d0;
  undefined8 local_1c8;
  longlong local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 local_198 [8];
  longlong *local_190;
  undefined1 local_180 [8];
  longlong *local_178;
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [16];
  undefined1 local_e0 [24];
  undefined1 local_c8 [32];
  undefined4 local_a8 [4];
  undefined1 local_98 [24];
  undefined1 local_80;
  undefined4 local_78;
  undefined1 local_68 [24];
  undefined1 local_50;
  ulonglong local_48 [2];
  
  local_48[0] = DAT_1468387a8 ^ (ulonglong)auStack_238;
  bVar7 = false;
  bVar6 = false;
  bVar18 = false;
  local_218 = (longlong *)((ulonglong)local_218 & 0xffffffff00000000);
  FText::FText(param_2);
  if (*(int *)(param_1 + 0x1f0) == 0) {
    plVar17 = *(longlong **)(param_1 + 0x30);
    bVar18 = plVar17 == (longlong *)0x0;
    if (bVar18) {
      local_210[0] = 0;
      local_210[1] = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_210,0);
      FGenericPlatformString::Memcpy(local_210[0],L"ERROR",0xc);
      uVar10 = FText::FromString(local_120,local_210);
    }
    else {
      uVar10 = (**(code **)(*plVar17 + 0x288))(plVar17,local_108,*(undefined1 *)(param_1 + 0x38));
    }
    FText::operator=(param_2,uVar10);
    if ((bVar18) && (local_118 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_118 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_118)(local_118);
        LOCK();
        piVar1 = (int *)((longlong)local_118 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_118 + 8))(local_118,1);
        }
      }
    }
    if ((bVar18) && (local_210[0] != 0)) {
      FMemory::Free();
    }
    if ((!bVar18) && (local_100 != (longlong *)0x0)) {
      LOCK();
      plVar17 = local_100 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
  }
  else {
    local_210[2] = 0;
    local_210[3] = 0;
    uVar10 = FText::FromString(local_180,local_210 + 2);
    FText::operator=(param_2,uVar10);
    if (local_178 != (longlong *)0x0) {
      LOCK();
      plVar17 = local_178 + 1;
      lVar12 = *plVar17;
      *(int *)plVar17 = (int)*plVar17 + -1;
      UNLOCK();
      if ((int)lVar12 == 1) {
        (**(code **)*local_178)(local_178);
        LOCK();
        piVar1 = (int *)((longlong)local_178 + 0xc);
        iVar5 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*local_178 + 8))(local_178,1);
        }
      }
    }
    if (local_210[2] != 0) {
      FMemory::Free();
    }
    plVar17 = *(longlong **)(param_1 + 0x1e8);
    plVar15 = plVar17 + *(int *)(param_1 + 0x1f0);
    local_218 = plVar15;
    if (plVar17 != plVar15) {
      do {
        lVar12 = *plVar17;
        if (lVar12 != 0) {
          cVar8 = FText::IsEmpty(param_2);
          lVar13 = lVar12 + 0x80;
          cVar9 = FText::IsEmpty(lVar13);
          if (cVar8 == '\0') {
            bVar6 = true;
            bVar18 = true;
            if (cVar9 != '\0') {
              lVar13 = lVar12 + 0x68;
            }
            lVar12 = FText::FText(local_e0,lVar13);
            local_1e0 = lVar12;
            lVar13 = FText::FText(local_c8,param_2);
            local_1e8 = lVar13;
            uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                               (local_150,L"{0} {1}",L"InventoryPart",L"DisplayNameConcat");
            puVar14 = (undefined8 *)FTextFormat::FTextFormat(local_f0,uVar10);
            local_a8[0] = 4;
            local_1f0 = puVar14;
            FText::FText(local_98,lVar13);
            local_80 = 1;
            local_78 = 4;
            FText::FText(local_68,lVar12);
            local_1d8 = local_a8;
            local_50 = 1;
            puStack_1d0 = local_48;
            local_1c8 = *puVar14;
            local_1c0 = puVar14[1];
            if (local_1c0 != 0) {
              LOCK();
              *(int *)(local_1c0 + 8) = *(int *)(local_1c0 + 8) + 1;
              UNLOCK();
            }
            local_1b8 = local_1d8;
            uStack_1b0 = puStack_1d0;
            uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                     TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8,&local_1b8);
            uVar10 = FText::Format(local_168,&local_1c8,uVar10);
            FText::FText(local_198,uVar10);
            plVar15 = local_160;
            if (local_160 != (longlong *)0x0) {
              LOCK();
              plVar2 = local_160 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_160)(local_160);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            TArray<FFormatArgumentValue,FDefaultAllocator>::
            ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_1a8);
            lVar12 = 2;
            pcVar16 = &stack0xffffffffffffffe0;
            do {
              lVar12 = lVar12 + -1;
              pcVar3 = pcVar16 + -0x30;
              if (*pcVar3 != '\0') {
                *pcVar3 = '\0';
                plVar15 = *(longlong **)(pcVar16 + -0x40);
                if (plVar15 != (longlong *)0x0) {
                  LOCK();
                  plVar2 = plVar15 + 1;
                  lVar13 = *plVar2;
                  *(int *)plVar2 = (int)*plVar2 + -1;
                  UNLOCK();
                  if ((int)lVar13 == 1) {
                    (**(code **)*plVar15)(plVar15);
                    LOCK();
                    piVar1 = (int *)((longlong)plVar15 + 0xc);
                    iVar5 = *piVar1;
                    *piVar1 = *piVar1 + -1;
                    UNLOCK();
                    if (iVar5 == 1) {
                      (**(code **)(*plVar15 + 8))(plVar15,1);
                    }
                  }
                }
              }
              pcVar16 = pcVar3;
            } while (lVar12 != 0);
            plVar15 = (longlong *)local_1f0[1];
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar15 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            plVar15 = *(longlong **)(local_1e8 + 8);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar15 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            plVar15 = *(longlong **)(local_1e0 + 8);
            if (plVar15 != (longlong *)0x0) {
              LOCK();
              plVar2 = plVar15 + 1;
              lVar12 = *plVar2;
              *(int *)plVar2 = (int)*plVar2 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*plVar15)(plVar15);
                LOCK();
                piVar1 = (int *)((longlong)plVar15 + 0xc);
                iVar5 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar15 + 8))(plVar15,1);
                }
              }
            }
            puVar11 = local_198;
          }
          else {
            bVar7 = true;
            if (cVar9 != '\0') {
              lVar13 = lVar12 + 0x68;
            }
            puVar11 = (undefined1 *)FText::FText(local_138,lVar13);
          }
          FText::operator=(param_2,puVar11);
          plVar15 = local_190;
          if ((bVar18) && (bVar18 = false, local_190 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_190 + 1;
            lVar12 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_190)(local_190);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar15 = local_148;
          if ((bVar6) && (bVar6 = false, local_148 != (longlong *)0x0)) {
            LOCK();
            plVar2 = local_148 + 1;
            lVar12 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar1 = (int *)((longlong)plVar15 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar15 + 8))(plVar15,1);
              }
            }
          }
          plVar2 = local_130;
          plVar15 = local_218;
          if ((bVar7) && (bVar7 = false, local_130 != (longlong *)0x0)) {
            LOCK();
            plVar4 = local_130 + 1;
            lVar12 = *plVar4;
            *(int *)plVar4 = (int)*plVar4 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_130)(local_130);
              LOCK();
              piVar1 = (int *)((longlong)plVar2 + 0xc);
              iVar5 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar15 = local_218;
              if (iVar5 == 1) {
                (**(code **)(*plVar2 + 8))(plVar2);
                plVar15 = local_218;
              }
            }
          }
        }
        plVar17 = plVar17 + 1;
      } while (plVar17 != plVar15);
    }
  }
  return param_2;
}



// FUNCTION 142ffd2c0 FUN_142ffd2c0 body=115 status=ok
// SIG undefined FUN_142ffd2c0(void)

undefined1 FUN_142ffd2c0(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0x5a8) & 8) != 0) {
    lVar1 = FUN_14222e2a0();
    if (lVar1 != 0) goto LAB_142ffd2e7;
  }
  if ((*(byte *)(param_1 + 0x4a4) & 0x20) == 0) {
    if (((((*(byte *)(param_1 + 0x4a4) & 0x40) != 0) && (*(longlong *)(param_1 + 0x560) != 0)) &&
        (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x560) + 0x208), lVar1 != 0)) &&
       (lVar1 = *(longlong *)(lVar1 + 0x1d8), lVar1 != 0)) {
      return *(undefined1 *)(lVar1 + 0x39);
    }
    return *(undefined1 *)(param_1 + 0x4b4);
  }
LAB_142ffd2e7:
  return *(undefined1 *)(param_1 + 0x4b5);
}



// FUNCTION 142ffd340 FUN_142ffd340 body=602 status=ok
// SIG undefined FUN_142ffd340(void)

ulonglong *
FUN_142ffd340(ulonglong *param_1,longlong param_2,longlong *param_3,char param_4,char param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  undefined4 uVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong uVar18;
  ulonglong local_58;
  uint local_50;
  uint local_4c;
  
  uVar11 = 0;
  local_58 = 0;
  uVar17 = 0;
  local_4c = 0;
  uVar15 = 0;
  if ((param_2 == 0) || (lVar7 = *(longlong *)(param_2 + 0x210), lVar7 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    return param_1;
  }
  plVar12 = *(longlong **)(lVar7 + 0xd8);
  plVar13 = plVar12 + (longlong)*(int *)(lVar7 + 0xe0) * 8;
  uVar16 = uVar11;
  uVar18 = uVar11;
  do {
    if (plVar12 == plVar13) {
      *param_1 = uVar18;
      *(undefined4 *)(param_1 + 1) = uVar17;
      *(undefined4 *)((longlong)param_1 + 0xc) = uVar15;
      return param_1;
    }
    plVar3 = (longlong *)*plVar12;
    if (plVar3 != (longlong *)0x0) {
      lVar7 = FUN_143025520();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
          lVar7 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if ((bVar5) && (cVar6 = (**(code **)(*plVar3 + 0x280))(plVar3), cVar6 == '\0')) {
        if ((int)param_3[1] != 0) {
          plVar14 = (longlong *)*param_3;
          plVar1 = plVar14 + (int)param_3[1];
          if (param_4 == '\0') {
            if (plVar14 != plVar1) {
              plVar4 = (longlong *)plVar3[0x4b];
              do {
                if (plVar4 != plVar4 + (int)plVar3[0x4c]) {
                  plVar8 = plVar4;
                  do {
                    if (*plVar8 == *plVar14) goto LAB_142ffd48c;
                    plVar8 = plVar8 + 1;
                  } while (plVar8 != plVar4 + (int)plVar3[0x4c]);
                }
                plVar14 = plVar14 + 1;
              } while (plVar14 != plVar1);
            }
            goto LAB_142ffd4fb;
          }
          if (plVar14 != plVar1) {
            plVar4 = (longlong *)plVar3[0x4b];
            do {
              if (plVar4 == plVar4 + (int)plVar3[0x4c]) goto LAB_142ffd4fb;
              plVar8 = plVar4;
              while (*plVar8 != *plVar14) {
                plVar8 = plVar8 + 1;
                if (plVar8 == plVar4 + (int)plVar3[0x4c]) goto LAB_142ffd4fb;
              }
              plVar14 = plVar14 + 1;
            } while (plVar14 != plVar1);
          }
        }
LAB_142ffd48c:
        if (param_5 != '\0') {
          puVar9 = *(undefined8 **)(param_2 + 0x230);
          puVar2 = puVar9 + *(int *)(param_2 + 0x238);
          for (; puVar9 != puVar2; puVar9 = puVar9 + 1) {
            if ((longlong *)*puVar9 == plVar3) goto LAB_142ffd4fb;
          }
        }
        iVar10 = (int)uVar11;
        local_50 = iVar10 + 1;
        if ((int)uVar16 < (int)local_50) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,uVar11);
          uVar16 = (ulonglong)local_4c;
          uVar18 = local_58;
        }
        uVar11 = (ulonglong)local_50;
        *(longlong **)(uVar18 + (longlong)iVar10 * 8) = plVar3;
      }
    }
LAB_142ffd4fb:
    uVar15 = (undefined4)uVar16;
    uVar17 = (undefined4)uVar11;
    plVar12 = plVar12 + 8;
  } while( true );
}



// FUNCTION 142ffd5a0 FUN_142ffd5a0 body=89 status=ok
// SIG undefined FUN_142ffd5a0(void)

longlong FUN_142ffd5a0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 != 0) {
    lVar3 = FUN_1429bed90();
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



// FUNCTION 142ffd600 FUN_142ffd600 body=1002 status=ok
// SIG undefined FUN_142ffd600(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ffd600(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 **ppuVar7;
  bool bVar8;
  undefined1 auStack_148 [32];
  undefined8 *local_128;
  undefined8 local_120;
  char local_118 [8];
  longlong local_110 [2];
  undefined4 local_100;
  undefined4 local_f8;
  undefined4 local_e8 [2];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8 [2];
  longlong local_b8 [2];
  longlong local_a8 [2];
  longlong local_98 [2];
  undefined1 local_88;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_148;
  uVar5 = 0;
  local_f8 = 0;
  FUN_142cc2c40();
  _guard_xfg_dispatch_icall_nop(local_e8,0,0x68);
  local_118[0] = '\0';
  local_110[0] = 0;
  local_110[1] = 0;
  local_100 = 0;
  local_e8[0] = (**(code **)(*param_1 + 0x400))(param_1);
  local_e0 = param_1[0x41];
  local_d8 = param_1[0x42];
  local_d0 = param_1[0x43];
  TArray<FName,FDefaultAllocator>::operator=(local_c8,param_1 + 0x44);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(local_b8,param_1 + 0x46);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_a8,param_1 + 0x48);
  TArray<FName,FDefaultAllocator>::operator=(local_98,param_1 + 0x4a);
  local_88 = (undefined1)param_1[0x4c];
  FUN_142ff5940(local_e8,local_118,1);
  FUN_142ff1ff0(local_118);
  uVar6 = param_1[0x23];
  local_50 = *(undefined8 *)(param_2 + 8);
  local_48 = 0;
  local_40 = 0x3000000000000;
  local_58 = &local_48;
  FUN_142deb0b0(param_1 + 0x5f,&local_58,uVar6);
  if (param_1[0x41] == 0) {
    uVar6 = uVar6 & 0xffffffffffffff00;
  }
  else {
    uVar6 = (ulonglong)(*(byte *)(param_1[0x41] + 0x38) & 1);
  }
  FUN_142ab6050(param_2,"DisplayNameIsInventoryDataName",uVar6);
  iVar3 = (int)param_1[0x3e];
  local_78 = &local_68;
  local_70 = *(undefined8 *)(param_2 + 8);
  local_68 = 0;
  local_60 = 0x4000000000000;
  if (0 < iVar3) {
    FUN_142ab5fa0(&local_78,iVar3);
    iVar3 = (int)param_1[0x3e];
  }
  puVar4 = (undefined8 *)param_1[0x3d];
  uVar6 = (longlong)iVar3 & 0x1fffffffffffffff;
  if (puVar4 + iVar3 < puVar4) {
    uVar6 = uVar5;
  }
  if (uVar6 != 0) {
    do {
      uVar1 = (**(code **)(*(longlong *)*puVar4 + 0x278))();
      FUN_142ab4ed0(&local_78,uVar1);
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar5 != uVar6);
  }
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"DisplayNamePartsHashes",&local_78);
  uVar2 = 0;
  uVar1 = uVar2;
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    uVar1 = (**(code **)(*(longlong *)param_1[0x41] + 0x278))();
  }
  FUN_142ab61f0(param_2,"InventoryDataHash",uVar1);
  uVar1 = uVar2;
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    uVar1 = (**(code **)(*(longlong *)param_1[0x42] + 0x278))();
  }
  FUN_142ab61f0(param_2,"BalanceDataHash",uVar1);
  if ((longlong *)param_1[0x43] != (longlong *)0x0) {
    uVar2 = (**(code **)(*(longlong *)param_1[0x43] + 0x278))();
  }
  FUN_142ab61f0(param_2,"ManufacturerDataHash",uVar2);
  FUN_142ab6190(param_2,"MonetaryValue",*(undefined4 *)((longlong)param_1 + 0x1fc));
  FUN_142ab6190(param_2,"InventoryScoreValue",*(undefined4 *)((longlong)param_1 + 0x204));
  FUN_142ab6050(param_2,"HasFoilPart",*(byte *)(param_1 + 99) >> 1 & 1);
  UE4Function_Private::
  TFunctionRefCaller<<lambda_7ba9f5259ce314810519498fe7d9f36b>,void___cdecl(FRHICommandListImmediate_&,FViewportSurfaceReader_*)>
  ::Call(param_2,"Stats",&local_58);
  bVar8 = local_118[0] != '\x04';
  if (bVar8) {
    local_128 = (undefined8 *)0x0;
    local_120 = 0x1c;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
    FGenericPlatformString::Memcpy(local_128,L"ErrorEncryptingSerialNumber",0x38);
    ppuVar7 = &local_128;
  }
  else {
    FUN_142ff1dc0(&local_78,local_110);
    ppuVar7 = &local_78;
  }
  FUN_142ab64b0(param_2,"SerialNumber",ppuVar7);
  if ((bVar8) && (local_128 != (undefined8 *)0x0)) {
    FMemory::Free();
  }
  if ((!bVar8) && (local_78 != (undefined8 *)0x0)) {
    FMemory::Free();
  }
  if (local_110[0] != 0) {
    FMemory::Free();
  }
  if (local_98[0] != 0) {
    FMemory::Free();
  }
  if (local_a8[0] != 0) {
    FMemory::Free();
  }
  if (local_b8[0] != 0) {
    FMemory::Free();
  }
  if (local_c8[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ffd9f0 FUN_142ffd9f0 body=1571 status=ok
// SIG undefined FUN_142ffd9f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142ffd9f0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  undefined2 *puVar2;
  uint uVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  int iVar10;
  undefined2 *puVar11;
  longlong lVar12;
  undefined2 *puVar13;
  undefined1 auStack_1a8 [32];
  undefined2 *local_188;
  int local_180;
  char local_178 [8];
  longlong local_170 [2];
  undefined4 local_160;
  undefined4 local_158 [2];
  longlong local_150;
  longlong local_148;
  longlong local_140;
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  longlong local_108 [2];
  undefined1 local_f8;
  undefined2 local_e8 [64];
  undefined2 *local_68;
  undefined2 *local_60;
  uint local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  FUN_142cc2c60();
  uVar8 = 0;
  _guard_xfg_dispatch_icall_nop(local_158,0,0x68);
  puVar11 = (undefined2 *)0x0;
  local_178[0] = '\0';
  local_170[0] = 0;
  local_170[1] = 0;
  iVar10 = 0;
  local_160 = 0;
  local_158[0] = (**(code **)(*param_1 + 0x400))(param_1);
  local_150 = param_1[0x41];
  local_148 = param_1[0x42];
  local_140 = param_1[0x43];
  TArray<FName,FDefaultAllocator>::operator=(local_138,param_1 + 0x44);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(local_128,param_1 + 0x46);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(local_118,param_1 + 0x48);
  TArray<FName,FDefaultAllocator>::operator=(local_108,param_1 + 0x4a);
  local_f8 = (undefined1)param_1[0x4c];
  uVar9 = CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  FUN_142ff5940(local_158,local_178,uVar9);
  FUN_142ff1ff0(local_178);
  if (param_1[0x41] == 0) {
    uVar9 = uVar9 & 0xffffffffffffff00;
  }
  else {
    uVar9 = (ulonglong)(*(byte *)(param_1[0x41] + 0x38) & 1);
  }
  FUN_140b3fe50(param_2,"DisplayNameIsInventoryDataName",uVar9);
  FUN_142fdab90(param_2,"DisplayNamePartsHashes",param_1 + 0x3d);
  puVar13 = puVar11;
  if ((longlong *)param_1[0x41] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x41] + 0x278))();
    puVar13 = (undefined2 *)(ulonglong)uVar3;
  }
  plVar1 = (longlong *)(param_2 + 0x30);
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"InventoryDataHash",0x11);
  FUN_140a6ec50(plVar1,6);
  lVar4 = *plVar1;
  lVar12 = *(longlong *)(lVar4 + 0x18);
  if (*(ulonglong *)(lVar4 + 0x20) < lVar12 + 10U) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,10);
    lVar12 = *(longlong *)(lVar4 + 0x18);
  }
  *(longlong *)(lVar4 + 0x18) = lVar12 + 10;
  lVar4 = rapidjson::internal::u32toa(puVar13,lVar12);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar4 - lVar12) + -10;
  puVar13 = puVar11;
  if ((longlong *)param_1[0x42] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x42] + 0x278))();
    puVar13 = (undefined2 *)(ulonglong)uVar3;
  }
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"BalanceDataHash",0xf);
  FUN_140a6ec50(plVar1,6);
  lVar4 = *plVar1;
  lVar12 = *(longlong *)(lVar4 + 0x18);
  if (*(ulonglong *)(lVar4 + 0x20) < lVar12 + 10U) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,10);
    lVar12 = *(longlong *)(lVar4 + 0x18);
  }
  *(longlong *)(lVar4 + 0x18) = lVar12 + 10;
  lVar4 = rapidjson::internal::u32toa(puVar13,lVar12);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar4 - lVar12) + -10;
  puVar13 = puVar11;
  if ((longlong *)param_1[0x43] != (longlong *)0x0) {
    uVar3 = (**(code **)(*(longlong *)param_1[0x43] + 0x278))();
    puVar13 = (undefined2 *)(ulonglong)uVar3;
  }
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"ManufacturerDataHash",0x14);
  FUN_140a6ec50(plVar1,6);
  lVar4 = *plVar1;
  lVar12 = *(longlong *)(lVar4 + 0x18);
  if (*(ulonglong *)(lVar4 + 0x20) < lVar12 + 10U) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,10);
    lVar12 = *(longlong *)(lVar4 + 0x18);
  }
  *(longlong *)(lVar4 + 0x18) = lVar12 + 10;
  lVar4 = rapidjson::internal::u32toa(puVar13,lVar12);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar4 - lVar12) + -10;
  uVar3 = *(uint *)((longlong)param_1 + 0x1fc);
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"MonetaryValue",0xd);
  FUN_140a6ec50(plVar1,6);
  lVar4 = *plVar1;
  puVar6 = *(undefined1 **)(lVar4 + 0x18);
  if (*(undefined1 **)(lVar4 + 0x20) < puVar6 + 0xb) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,0xb);
    puVar6 = *(undefined1 **)(lVar4 + 0x18);
  }
  *(undefined1 **)(lVar4 + 0x18) = puVar6 + 0xb;
  puVar7 = puVar6;
  if ((int)uVar3 < 0) {
    *puVar6 = 0x2d;
    uVar3 = ~uVar3 + 1;
    puVar7 = puVar6 + 1;
  }
  lVar4 = rapidjson::internal::u32toa(uVar3,puVar7);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar4 - (longlong)puVar6) + -0xb;
  uVar3 = *(uint *)((longlong)param_1 + 0x204);
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"InventoryScoreValue",0x13);
  FUN_140a6ec50(plVar1,6);
  lVar4 = *plVar1;
  puVar6 = *(undefined1 **)(lVar4 + 0x18);
  if (*(undefined1 **)(lVar4 + 0x20) < puVar6 + 0xb) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,0xb);
    puVar6 = *(undefined1 **)(lVar4 + 0x18);
  }
  *(undefined1 **)(lVar4 + 0x18) = puVar6 + 0xb;
  puVar7 = puVar6;
  if ((int)uVar3 < 0) {
    *puVar6 = 0x2d;
    uVar3 = ~uVar3 + 1;
    puVar7 = puVar6 + 1;
  }
  lVar4 = rapidjson::internal::u32toa(uVar3,puVar7);
  *(longlong *)(*plVar1 + 0x18) = *(longlong *)(*plVar1 + 0x18) + (lVar4 - (longlong)puVar6) + -0xb;
  FUN_140b3fe50(param_2,"HasFoilPart",*(byte *)(param_1 + 99) >> 1 & 1);
  lVar4 = param_1[0x23];
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"Stats",5);
  FUN_140d4d710(plVar1);
  FUN_142deb630(param_1 + 0x5f,param_2,lVar4);
  *(longlong *)(param_2 + 0x50) = *(longlong *)(param_2 + 0x50) + -0x10;
  lVar4 = *plVar1;
  puVar6 = *(undefined1 **)(lVar4 + 0x18);
  if (*(undefined1 **)(lVar4 + 0x20) < puVar6 + 1) {
    rapidjson::internal::Stack<rapidjson::CrtAllocator>::Expand<char>(lVar4,1);
    puVar6 = *(undefined1 **)(lVar4 + 0x18);
  }
  *(undefined1 **)(lVar4 + 0x18) = puVar6 + 1;
  *puVar6 = 0x7d;
  if ((local_178[0] == '\x04') &&
     (FUN_142ff1dc0(&local_188,local_170), puVar11 = local_188, local_180 != 0)) {
    iVar10 = local_180 + -1;
    puVar13 = local_188;
  }
  else {
    puVar13 = &DAT_143f3eda8;
  }
  local_68 = (undefined2 *)0x0;
  if (puVar13 == (undefined2 *)0x0) {
    local_60 = (undefined2 *)0x0;
    local_58 = 0;
  }
  else {
    local_188 = (undefined2 *)((ulonglong)local_188 & 0xffffffff00000000);
    FTCHARToUTF8_Convert::Convert_Impl<UE4StringConv_Private::FCountingOutputIterator>
              (&local_188,iVar10 * 4,puVar13,iVar10);
    puVar2 = local_188;
    local_58 = (uint)local_188;
    puVar5 = (undefined2 *)0x0;
    if ((0x80 < (uint)local_188) && (puVar5 = (undefined2 *)0x0, (uint)local_188 != 0)) {
      puVar5 = (undefined2 *)FMemory::Realloc(0,(longlong)(int)(uint)local_188,0);
      local_68 = puVar5;
    }
    local_188 = local_e8;
    if (puVar5 != (undefined2 *)0x0) {
      local_188 = puVar5;
    }
    local_60 = local_188;
    FTCHARToUTF8_Convert::Convert_Impl<char_*>
              (&local_188,(ulonglong)puVar2 & 0xffffffff,puVar13,iVar10);
  }
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,"SerialNumber",0xc);
  uVar3 = local_58;
  puVar13 = local_60;
  FUN_140a6ec50(plVar1,5);
  FUN_140a78ce0(plVar1,puVar13,uVar3);
  if (local_68 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  if (local_170[0] != 0) {
    FMemory::Free();
  }
  if (local_108[0] != 0) {
    FMemory::Free();
  }
  if (local_118[0] != 0) {
    FMemory::Free();
  }
  if (local_128[0] != 0) {
    FMemory::Free();
  }
  if (local_138[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142ffe020 FUN_142ffe020 body=201 status=ok
// SIG undefined FUN_142ffe020(void)

ulonglong FUN_142ffe020(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  cVar1 = *(char *)(param_1 + 0x68);
  if (cVar1 == '\0') {
    plVar2 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    return (ulonglong)*(uint *)(lVar3 + 0x30);
  }
  if (cVar1 == '\x01') {
    plVar2 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    return (ulonglong)*(uint *)(lVar3 + 0x34);
  }
  if (cVar1 == '\x02') {
    plVar2 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
    lVar3 = plVar2[0x1f];
    if (lVar3 == 0) {
      (**(code **)(*plVar2 + 0x368))(plVar2);
      lVar3 = plVar2[0x1f];
    }
    return (ulonglong)*(uint *)(lVar3 + 0x38);
  }
  if ((byte)(cVar1 - 3U) < 2) {
    return 0;
  }
  uVar4 = FUN_142ff87b0();
  return uVar4;
}



// FUNCTION 142ffe0f0 FUN_142ffe0f0 body=172 status=ok
// SIG undefined FUN_142ffe0f0(void)

void FUN_142ffe0f0(longlong param_1,undefined8 param_2,int *param_3,int *param_4)

{
  int iVar1;
  float fVar2;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (*(longlong *)(param_1 + 0x98) == 0) {
    iVar1 = 0;
  }
  else {
    uStack_10 = 0;
    local_18 = param_2;
    fVar2 = (float)FUN_142ca2f00(*(longlong *)(param_1 + 0x98),&local_18,0);
    iVar1 = (int)fVar2;
  }
  *param_3 = iVar1;
  if (*(longlong *)(param_1 + 0xa0) == 0) {
    *param_4 = 100;
  }
  else {
    uStack_10 = 0;
    local_18 = param_2;
    fVar2 = (float)FUN_142ca2f00(*(longlong *)(param_1 + 0xa0),&local_18,0);
    *param_4 = (int)fVar2;
  }
  return;
}



// FUNCTION 142ffe1a0 FUN_142ffe1a0 body=120 status=ok
// SIG undefined FUN_142ffe1a0(void)

void FUN_142ffe1a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x230)) {
    lVar2 = 0;
    do {
      if (*(longlong *)(lVar2 + 0x20 + *(longlong *)(param_1 + 0x228)) != 0) {
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                  (param_3,*(longlong *)(param_1 + 0x228) + 0x20 + (longlong)iVar1 * 0x40);
      }
      iVar1 = iVar1 + 1;
      lVar2 = lVar2 + 0x40;
    } while (iVar1 < *(int *)(param_1 + 0x230));
  }
  return;
}



// FUNCTION 142ffe220 FUN_142ffe220 body=423 status=ok
// SIG undefined FUN_142ffe220(void)

ulonglong FUN_142ffe220(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  ulonglong uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int local_res8 [2];
  
  plVar1 = (longlong *)(param_1 + 0x248);
  piVar4 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                  ::FindId(plVar1,local_res8,param_2);
  if (*piVar4 == -1) {
    return 0xffffffff;
  }
  TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
  ::FindId(plVar1,local_res8,param_2);
  uVar8 = 0;
  uVar7 = uVar8;
  if (local_res8[0] != -1) {
    uVar7 = (longlong)local_res8[0] * 0x20 + *plVar1;
  }
  uVar2 = *(uint *)(uVar7 + 8);
  if (uVar2 == 0xffffffff) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(plVar1,local_res8,param_2);
    uVar7 = uVar8;
    if (local_res8[0] != -1) {
      uVar7 = (longlong)local_res8[0] * 0x20 + *plVar1;
    }
    if (*(int *)(uVar7 + 0x10) != -1) {
      iVar3 = *(int *)(param_1 + 0x230);
      if (iVar3 < 1) {
        return 0xffffffff;
      }
      plVar6 = (longlong *)(*(longlong *)(param_1 + 0x228) + 0x10);
      uVar7 = uVar8;
      uVar9 = uVar8;
      uVar10 = uVar8;
      do {
        if ((*(byte *)((longlong)plVar6 + 0x19) & 4) == 0) {
          if ((*plVar6 != 0) && (*plVar6 == param_2)) {
            TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
            ::FindId(plVar1,local_res8,param_2);
            uVar5 = uVar8;
            if (local_res8[0] != -1) {
              uVar5 = (longlong)local_res8[0] * 0x20 + *plVar1;
            }
            if (*(int *)(uVar5 + 0x10) == *(int *)((longlong)plVar6 + -4)) {
              TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
              ::FindId(plVar1,local_res8,param_2);
              if (local_res8[0] != -1) {
                uVar8 = (longlong)local_res8[0] * 0x20 + *plVar1;
              }
              *(int *)(uVar8 + 8) = (int)uVar9;
              return uVar10;
            }
          }
          uVar9 = (ulonglong)((int)uVar9 + 1);
        }
        uVar10 = (ulonglong)((int)uVar10 + 1);
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 8;
        if ((longlong)iVar3 <= (longlong)uVar7) {
          return 0xffffffff;
        }
      } while( true );
    }
  }
  return (ulonglong)uVar2;
}



// FUNCTION 142ffe3d0 FUN_142ffe3d0 body=96 status=ok
// SIG undefined FUN_142ffe3d0(void)

undefined4 * FUN_142ffe3d0(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_142ffe220(param_1,param_3);
  if (((0 < *(int *)(param_1 + 0x230)) && (-1 < iVar1)) && (iVar1 < *(int *)(param_1 + 0x230))) {
    *param_2 = *(undefined4 *)((longlong)iVar1 * 0x40 + 0xc + *(longlong *)(param_1 + 0x228));
    return param_2;
  }
  *param_2 = 0xffffffff;
  return param_2;
}



// FUNCTION 142ffe430 FUN_142ffe430 body=141 status=ok
// SIG undefined FUN_142ffe430(void)

void FUN_142ffe430(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined1 local_18 [16];
  
  lVar2 = FUN_142ffa540();
  if (lVar2 != 0) {
    piVar3 = (int *)TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
                    ::FindId(param_1 + 0x248,local_18,lVar2);
    if (*piVar3 != -1) {
      iVar1 = FUN_142ffe220(param_1,lVar2);
      if ((iVar1 != -1) && (iVar1 < *(int *)(param_1 + 0x230))) {
        *param_3 = *(undefined4 *)((longlong)iVar1 * 0x40 + 0x18 + *(longlong *)(param_1 + 0x228));
        *param_4 = 1;
      }
    }
  }
  return;
}



// FUNCTION 142ffe4c0 FUN_142ffe4c0 body=433 status=ok
// SIG undefined FUN_142ffe4c0(void)

int FUN_142ffe4c0(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  undefined4 uStack_34;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  iVar2 = *(int *)(param_1 + 0x550);
  iVar6 = *(int *)(param_1 + 0x57c);
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != iVar2 - iVar6) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_2);
  }
  iVar2 = *(int *)(param_1 + 0x570);
  puStack_20 = (uint *)(param_1 + 0x558);
  local_58 = 0;
  uStack_54 = 1;
  local_48._4_4_ = 0;
  uStack_40 = 0;
  if (iVar2 != 0) {
    puVar8 = *(uint **)(param_1 + 0x568);
    if (*(uint **)(param_1 + 0x568) == (uint *)0x0) {
      puVar8 = puStack_20;
    }
    uVar3 = *puVar8;
    uStack_40 = 0;
    local_58 = 0;
    while (uVar3 == 0) {
      lVar5 = (longlong)local_58;
      uStack_40 = uStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar4 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar4) goto LAB_142ffe59b;
      uVar3 = puVar8[lVar5 + 1];
    }
    uStack_54 = -uVar3 & uVar3;
    iVar6 = 0x1f;
    if (uStack_54 != 0) {
      for (; uStack_54 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uStack_54 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    local_48._4_4_ = (uStack_40 - iVar6) + 0x1f;
    if (iVar2 < local_48._4_4_) {
LAB_142ffe59b:
      local_48._4_4_ = iVar2;
    }
  }
  uStack_18 = 0xffffffff;
  iStack_14 = local_48._4_4_;
  iStack_10 = uStack_40;
  uStack_c = iStack_3c;
  iStack_28 = local_58;
  uStack_24 = uStack_54;
  iStack_50 = local_58;
  uStack_4c = uStack_54;
  local_38 = uStack_40;
  uStack_34 = iStack_3c;
  uStack_40 = 0xffffffff;
  iStack_3c = local_48._4_4_;
  bVar4 = local_48._4_4_ < iVar2;
  local_30 = (longlong *)(param_1 + 0x548);
  local_48 = puStack_20;
  if (bVar4) {
    do {
      iVar2 = (int)param_2[1];
      puVar7 = (undefined4 *)((longlong)iStack_3c * 0x10 + *(longlong *)(param_1 + 0x548));
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      puVar1 = (undefined4 *)(*param_2 + (longlong)iVar2 * 8);
      *puVar1 = *puVar7;
      puVar1[1] = puVar7[1];
      uStack_40 = uStack_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
    } while (iStack_3c < (int)local_48[6]);
  }
  return *(int *)(param_1 + 0x550) - *(int *)(param_1 + 0x57c);
}



// FUNCTION 142ffe680 FUN_142ffe680 body=5410 status=ok
// SIG undefined FUN_142ffe680(void)

undefined8 FUN_142ffe680(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  size_t sVar2;
  longlong *plVar3;
  ulonglong uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong lVar12;
  undefined8 uVar13;
  longlong lVar14;
  int iVar15;
  void *pvVar16;
  void *pvVar17;
  undefined2 *puVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  longlong local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  void *local_268;
  int local_260;
  int local_25c;
  void *local_258;
  int local_250;
  int local_24c;
  void *local_248;
  int local_240;
  int local_23c;
  void *local_238;
  undefined8 local_230;
  undefined2 *local_228;
  undefined8 local_220;
  undefined2 *local_218;
  undefined8 local_210;
  undefined2 *local_208;
  undefined8 local_200;
  void *local_1f8;
  undefined8 local_1f0;
  void *local_1e8;
  undefined8 local_1e0;
  void *local_1d8;
  int local_1d0;
  int local_1cc;
  longlong local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  void *local_1a0;
  int local_198;
  void *local_190;
  int local_188;
  void *local_180;
  int local_178;
  undefined2 *local_170;
  int local_168;
  void *local_160;
  int local_158;
  void *local_150;
  int local_148;
  void *local_140;
  int local_138;
  void *local_130;
  int local_128;
  longlong local_120;
  int local_118;
  void *local_110;
  int local_108;
  void *local_100;
  int local_f8;
  undefined1 local_f0 [24];
  longlong local_d8;
  longlong local_c8;
  longlong local_b8 [2];
  undefined1 local_a8 [8];
  longlong *local_a0;
  undefined1 local_90 [8];
  longlong *local_88;
  undefined1 local_78 [8];
  longlong *local_70;
  
  local_res10 = param_2;
  uVar8 = FUN_1404b03b0();
  FText::FText(param_2,uVar8);
  if ((*(longlong *)(param_1 + 0x2f0) == 0) || (cVar5 = FWeakObjectPtr::IsValid(), cVar5 == '\0')) {
    return param_2;
  }
  local_298 = 0;
  local_290 = 0;
  lVar9 = FWeakObjectPtr::Get(*(undefined8 *)(param_1 + 0x2f0));
  local_1c8 = lVar9;
  if (lVar9 != 0) {
    lVar10 = FUN_14302d420();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar23 = false;
    }
    else {
      bVar23 = true;
    }
    iVar15 = 0;
    if (bVar23) {
      FText::FText(local_a8,lVar9 + 0xa8);
      puVar11 = (undefined8 *)FText::ToString(local_a8);
      local_248 = (void *)0x0;
      local_240 = *(int *)(puVar11 + 1);
      lVar10 = (longlong)local_240;
      pvVar17 = (void *)*puVar11;
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy
                (&local_248,(2 - (uint)(local_240 != 0)) + local_240,0);
      pvVar16 = local_248;
      _guard_xfg_dispatch_icall_nop(local_248,pvVar17,lVar10 * 2);
      iVar21 = local_240;
      lVar10 = (longlong)local_240;
      local_240 = (2 - (uint)(local_240 != 0)) + local_240;
      if (local_23c < local_240) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_248,iVar21);
        pvVar16 = local_248;
      }
      uVar19 = local_290;
      lVar10 = lVar10 - (ulonglong)(iVar21 != 0);
      *(undefined2 *)((longlong)pvVar16 + lVar10 * 2) = 10;
      *(undefined2 *)((longlong)pvVar16 + lVar10 * 2 + 2) = 0;
      if ((local_240 != 0) && (iVar21 = local_240 + -1, iVar21 != 0)) {
        iVar7 = (int)local_290;
        lVar10 = (longlong)(int)local_290;
        iVar6 = (uint)((int)local_290 == 0) + iVar21 + (int)local_290;
        local_290 = CONCAT44(local_290._4_4_,iVar6);
        if (local_290._4_4_ < iVar6) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
        }
        pvVar17 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar17,pvVar16,(longlong)iVar21 * 2);
        *(undefined2 *)((longlong)pvVar17 + (longlong)iVar21 * 2) = 0;
      }
      if (pvVar16 != (void *)0x0) {
        FMemory::Free(pvVar16);
      }
      if (local_a0 != (longlong *)0x0) {
        LOCK();
        plVar22 = local_a0 + 1;
        lVar10 = *plVar22;
        *(int *)plVar22 = (int)*plVar22 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*local_a0)(local_a0);
          LOCK();
          piVar1 = (int *)((longlong)local_a0 + 0xc);
          iVar21 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar21 == 1) {
            (**(code **)(*local_a0 + 8))(local_a0,1);
          }
        }
      }
      fVar24 = (float)FUN_142c98860(lVar9 + 0x70,0);
      fVar25 = (float)((int)ROUND(fVar24 * 2.0 - 0.5) >> 1);
      fVar24 = (float)FUN_142c98860(lVar9 + 0x38,0);
      fVar24 = (float)((int)ROUND(fVar24 * 2.0 - 0.5) >> 1);
      FString::PrintfImpl(&local_1a0,L"Game Stage: %d - %d\n",
                          (int)ROUND((fVar24 + fVar24) - 0.5) >> 1,
                          (int)ROUND((fVar25 + fVar25) - 0.5) >> 1);
      pvVar17 = local_1a0;
      uVar19 = local_290;
      if (local_198 != 0) {
        iVar15 = local_198 + -1;
      }
      if (iVar15 != 0) {
        iVar21 = (int)local_290;
        lVar9 = (longlong)(int)local_290;
        iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
        local_290 = CONCAT44(local_290._4_4_,iVar7);
        if (local_290._4_4_ < iVar7) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
        }
        pvVar16 = (void *)(local_298 + (lVar9 - (ulonglong)(iVar21 != 0)) * 2);
        _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
        *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
      }
      if (local_1a0 != (void *)0x0) {
        FMemory::Free(local_1a0);
      }
    }
    else {
      lVar10 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
        bVar23 = false;
      }
      else {
        bVar23 = true;
      }
      if (bVar23) {
        local_res8 = *(undefined8 *)(lVar9 + 0x18);
        FName::ToString(&local_res8,&local_1f8);
        iVar21 = (int)local_1f0;
        iVar7 = local_1f0._4_4_;
        bVar23 = (int)local_1f0 != 0;
        local_268 = local_1f8;
        local_1f8 = (void *)0x0;
        local_260 = (int)local_1f0;
        local_25c = local_1f0._4_4_;
        local_1f0 = 0;
        if (iVar7 < (int)((2 - (uint)bVar23) + iVar21)) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_268);
          iVar21 = local_260;
        }
        local_260 = (2 - (uint)(iVar21 != 0)) + iVar21;
        if (local_25c < local_260) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_268,iVar21);
        }
        pvVar17 = local_268;
        uVar19 = local_290;
        lVar10 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
        *(undefined2 *)((longlong)local_268 + lVar10 * 2) = 10;
        *(undefined2 *)((longlong)local_268 + lVar10 * 2 + 2) = 0;
        if ((local_260 != 0) && (iVar21 = local_260 + -1, iVar21 != 0)) {
          iVar7 = (int)local_290;
          lVar10 = (longlong)(int)local_290;
          iVar6 = (uint)((int)local_290 == 0) + (int)local_290 + iVar21;
          local_290 = CONCAT44(local_290._4_4_,iVar6);
          if (local_290._4_4_ < iVar6) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
          }
          pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar21 * 2);
          *(undefined2 *)((longlong)pvVar16 + (longlong)iVar21 * 2) = 0;
        }
        if (pvVar17 != (void *)0x0) {
          FMemory::Free(pvVar17);
        }
        if (local_1f8 != (void *)0x0) {
          FMemory::Free();
        }
        if ((*(byte *)(lVar9 + 0x38) & 1) == 0) {
          if (*(longlong *)(lVar9 + 0x88) != 0) {
            local_res18 = *(undefined8 *)(*(longlong *)(lVar9 + 0x88) + 0x18);
            FName::ToString(&local_res18,&local_170);
            puVar18 = &DAT_143f3eda8;
            if (local_168 != 0) {
              puVar18 = local_170;
            }
            FString::PrintfImpl(&local_180,L"Naming Strategy: %ls\n",puVar18);
            pvVar17 = local_180;
            uVar19 = local_290;
            if (local_178 != 0) {
              iVar15 = local_178 + -1;
            }
            if (iVar15 != 0) {
              iVar21 = (int)local_290;
              lVar10 = (longlong)(int)local_290;
              iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
              local_290 = CONCAT44(local_290._4_4_,iVar7);
              if (local_290._4_4_ < iVar7) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
              }
              pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
              _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
              *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
            }
            if (local_180 != (void *)0x0) {
              FMemory::Free(local_180);
            }
            if (local_170 != (undefined2 *)0x0) {
              FMemory::Free();
            }
          }
        }
        else {
          FText::FText(local_90,lVar9 + 0x40);
          puVar11 = (undefined8 *)FText::ToString(local_90);
          if (*(int *)(puVar11 + 1) == 0) {
            puVar18 = &DAT_143f3eda8;
          }
          else {
            puVar18 = (undefined2 *)*puVar11;
          }
          FString::PrintfImpl(&local_190,L"Name: %ls\n",puVar18);
          pvVar17 = local_190;
          uVar19 = local_290;
          if (local_188 != 0) {
            iVar15 = local_188 + -1;
          }
          if (iVar15 != 0) {
            iVar21 = (int)local_290;
            lVar10 = (longlong)(int)local_290;
            iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
            local_290 = CONCAT44(local_290._4_4_,iVar7);
            if (local_290._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
            }
            pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
          }
          if (local_190 != (void *)0x0) {
            FMemory::Free(local_190);
          }
          if (local_88 != (longlong *)0x0) {
            LOCK();
            plVar22 = local_88 + 1;
            lVar10 = *plVar22;
            *(int *)plVar22 = (int)*plVar22 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*local_88)(local_88);
              LOCK();
              piVar1 = (int *)((longlong)local_88 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*local_88 + 8))(local_88,1);
              }
            }
          }
        }
        uVar19 = 0;
        lVar10 = *(longlong *)(lVar9 + 0x90);
        if (lVar10 != 0) {
          lVar12 = FUN_1428dfc70();
          lVar14 = lVar10;
          do {
            if (lVar14 == lVar12) {
              local_res20 = *(undefined8 *)(lVar10 + 0x18);
              FName::ToString(&local_res20,&local_208);
              goto LAB_142ffed8b;
            }
            lVar14 = *(longlong *)(lVar14 + 0x30);
          } while (lVar14 != 0);
        }
        local_208 = (undefined2 *)0x0;
        local_200 = 5;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_208,0);
        FGenericPlatformString::Memcpy(local_208,&DAT_143f3edc8,10);
LAB_142ffed8b:
        puVar18 = &DAT_143f3eda8;
        if ((int)local_200 != 0) {
          puVar18 = local_208;
        }
        FString::PrintfImpl(&local_160,L"Actor Class: %ls\n",puVar18);
        pvVar17 = local_160;
        uVar20 = local_290;
        iVar15 = 0;
        if (local_158 != 0) {
          iVar15 = local_158 + -1;
        }
        if (iVar15 != 0) {
          iVar21 = (int)local_290;
          lVar10 = (longlong)(int)local_290;
          iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
          local_290 = CONCAT44(local_290._4_4_,iVar7);
          if (local_290._4_4_ < iVar7) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar20 & 0xffffffff);
          }
          pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
          _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
          *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
        }
        if (local_160 != (void *)0x0) {
          FMemory::Free(local_160);
        }
        if (local_208 != (undefined2 *)0x0) {
          FMemory::Free();
        }
        uVar20 = local_290;
        iVar15 = (int)local_290;
        lVar10 = (longlong)(int)local_290;
        iVar21 = (2 - (uint)((int)local_290 != 0)) + (int)local_290;
        local_290 = CONCAT44(local_290._4_4_,iVar21);
        if (local_290._4_4_ < iVar21) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar20 & 0xffffffff);
        }
        lVar10 = lVar10 - (ulonglong)(iVar15 != 0);
        *(undefined2 *)(local_298 + lVar10 * 2) = 10;
        *(undefined2 *)(local_298 + 2 + lVar10 * 2) = 0;
        plVar22 = *(longlong **)(lVar9 + 0xb8);
        uVar20 = (longlong)*(int *)(lVar9 + 0xc0) & 0x1fffffffffffffff;
        if (plVar22 + *(int *)(lVar9 + 0xc0) < plVar22) {
          uVar20 = 0;
        }
        if (uVar20 != 0) {
          do {
            if ((longlong *)*plVar22 != (longlong *)0x0) {
              puVar11 = (undefined8 *)(**(code **)(*(longlong *)*plVar22 + 0x2c8))();
              iVar15 = *(int *)(puVar11 + 1);
              local_288 = (void *)*puVar11;
              *puVar11 = 0;
              local_280._0_4_ = *(int *)(puVar11 + 1);
              local_280._4_4_ = *(int *)((longlong)puVar11 + 0xc);
              puVar11[1] = 0;
              iVar21 = (int)local_280;
              if (local_280._4_4_ < (int)((2 - (uint)(iVar15 != 0)) + (int)local_280)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_288);
                iVar21 = (int)local_280;
              }
              iVar15 = (2 - (uint)(iVar21 != 0)) + iVar21;
              local_280 = CONCAT44(local_280._4_4_,iVar15);
              pvVar17 = local_288;
              if (local_280._4_4_ < iVar15) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_288,iVar21);
                pvVar17 = local_288;
                iVar15 = (int)local_280;
              }
              uVar4 = local_290;
              local_288 = (void *)0x0;
              local_280 = 0;
              lVar9 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
              *(undefined2 *)((longlong)pvVar17 + lVar9 * 2) = 10;
              *(undefined2 *)((longlong)pvVar17 + lVar9 * 2 + 2) = 0;
              if ((iVar15 != 0) && (iVar15 + -1 != 0)) {
                iVar21 = (int)local_290;
                lVar9 = (longlong)(int)local_290;
                iVar7 = (uint)((int)local_290 == 0) + (int)local_290 + iVar15 + -1;
                local_290 = CONCAT44(local_290._4_4_,iVar7);
                if (local_290._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar4 & 0xffffffff);
                }
                pvVar16 = (void *)(local_298 + (lVar9 - (ulonglong)(iVar21 != 0)) * 2);
                sVar2 = (longlong)iVar15 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,sVar2);
                *(undefined2 *)((longlong)pvVar16 + sVar2) = 0;
              }
              if (pvVar17 != (void *)0x0) {
                FMemory::Free(pvVar17);
              }
              if (local_d8 != 0) {
                FMemory::Free();
              }
            }
            plVar22 = plVar22 + 1;
            uVar19 = uVar19 + 1;
            lVar9 = local_1c8;
          } while (uVar19 != uVar20);
        }
        uVar20 = 0;
        plVar22 = *(longlong **)(lVar9 + 200);
        uVar19 = (longlong)*(int *)(lVar9 + 0xd0) & 0x1fffffffffffffff;
        if (plVar22 + *(int *)(lVar9 + 0xd0) < plVar22) {
          uVar19 = uVar20;
        }
        if (uVar19 != 0) {
          do {
            if ((longlong *)*plVar22 != (longlong *)0x0) {
              puVar11 = (undefined8 *)(**(code **)(*(longlong *)*plVar22 + 0x2c8))();
              iVar15 = *(int *)(puVar11 + 1);
              local_278 = (void *)*puVar11;
              *puVar11 = 0;
              local_270._0_4_ = *(int *)(puVar11 + 1);
              local_270._4_4_ = *(int *)((longlong)puVar11 + 0xc);
              puVar11[1] = 0;
              iVar21 = (int)local_270;
              if (local_270._4_4_ < (int)((2 - (uint)(iVar15 != 0)) + (int)local_270)) {
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_278);
                iVar21 = (int)local_270;
              }
              iVar15 = (2 - (uint)(iVar21 != 0)) + iVar21;
              local_270 = CONCAT44(local_270._4_4_,iVar15);
              pvVar17 = local_278;
              if (local_270._4_4_ < iVar15) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_278,iVar21);
                pvVar17 = local_278;
                iVar15 = (int)local_270;
              }
              uVar4 = local_290;
              local_278 = (void *)0x0;
              local_270 = 0;
              lVar9 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
              *(undefined2 *)((longlong)pvVar17 + lVar9 * 2) = 10;
              *(undefined2 *)((longlong)pvVar17 + lVar9 * 2 + 2) = 0;
              if ((iVar15 != 0) && (iVar15 + -1 != 0)) {
                iVar21 = (int)local_290;
                lVar9 = (longlong)(int)local_290;
                iVar7 = (uint)((int)local_290 == 0) + iVar15 + -1 + (int)local_290;
                local_290 = CONCAT44(local_290._4_4_,iVar7);
                if (local_290._4_4_ < iVar7) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar4 & 0xffffffff);
                }
                pvVar16 = (void *)(local_298 + (lVar9 - (ulonglong)(iVar21 != 0)) * 2);
                sVar2 = (longlong)iVar15 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,sVar2);
                *(undefined2 *)(sVar2 + (longlong)pvVar16) = 0;
              }
              if (pvVar17 != (void *)0x0) {
                FMemory::Free(pvVar17);
              }
              if (local_c8 != 0) {
                FMemory::Free();
              }
            }
            plVar22 = plVar22 + 1;
            uVar20 = uVar20 + 1;
          } while (uVar20 != uVar19);
        }
      }
      else {
        lVar10 = FUN_14301f840();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
          bVar23 = false;
        }
        else {
          bVar23 = true;
        }
        if (bVar23) {
          local_1c0 = *(undefined8 *)(lVar9 + 0x18);
          FName::ToString(&local_1c0,&local_1e8);
          iVar21 = (int)local_1e0;
          iVar7 = local_1e0._4_4_;
          bVar23 = (int)local_1e0 != 0;
          local_258 = local_1e8;
          local_1e8 = (void *)0x0;
          local_250 = (int)local_1e0;
          local_24c = local_1e0._4_4_;
          local_1e0 = 0;
          if (iVar7 < (int)((2 - (uint)bVar23) + iVar21)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_258);
            iVar21 = local_250;
          }
          local_250 = (2 - (uint)(iVar21 != 0)) + iVar21;
          if (local_24c < local_250) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_258,iVar21);
          }
          pvVar17 = local_258;
          uVar19 = local_290;
          lVar10 = (longlong)iVar21 - (ulonglong)(iVar21 != 0);
          *(undefined2 *)((longlong)local_258 + lVar10 * 2) = 10;
          *(undefined2 *)((longlong)local_258 + lVar10 * 2 + 2) = 0;
          if ((local_250 != 0) && (iVar21 = local_250 + -1, iVar21 != 0)) {
            iVar7 = (int)local_290;
            lVar10 = (longlong)(int)local_290;
            iVar6 = (uint)((int)local_290 == 0) + iVar21 + (int)local_290;
            local_290 = CONCAT44(local_290._4_4_,iVar6);
            if (local_290._4_4_ < iVar6) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
            }
            pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar21 * 2);
            *(undefined2 *)((longlong)iVar21 * 2 + (longlong)pvVar16) = 0;
          }
          if (pvVar17 != (void *)0x0) {
            FMemory::Free(pvVar17);
          }
          if (local_1e8 != (void *)0x0) {
            FMemory::Free();
          }
          if (*(longlong *)(lVar9 + 0xb8) == 0) {
            local_228 = (undefined2 *)0x0;
            local_220 = 5;
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_228,0);
            FGenericPlatformString::Memcpy(local_228,&DAT_143f3edc8,10);
          }
          else {
            local_1b8 = *(undefined8 *)(*(longlong *)(lVar9 + 0xb8) + 0x18);
            FName::ToString(&local_1b8,&local_228);
          }
          puVar18 = &DAT_143f3eda8;
          if ((int)local_220 != 0) {
            puVar18 = local_228;
          }
          FString::PrintfImpl(&local_150,L"Rarity: %ls\n",puVar18);
          pvVar17 = local_150;
          uVar19 = local_290;
          if (local_148 != 0) {
            iVar15 = local_148 + -1;
          }
          if (iVar15 != 0) {
            iVar21 = (int)local_290;
            lVar10 = (longlong)(int)local_290;
            iVar7 = (uint)((int)local_290 == 0) + (int)local_290 + iVar15;
            local_290 = CONCAT44(local_290._4_4_,iVar7);
            if (local_290._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
            }
            pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
          }
          if (local_150 != (void *)0x0) {
            FMemory::Free(local_150);
          }
          if (local_228 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          FString::PrintfImpl(&local_140,L"Num Manufacturers: %d\n",*(undefined4 *)(lVar9 + 200));
          pvVar17 = local_140;
          uVar19 = local_290;
          if (local_138 == 0) {
            iVar15 = 0;
          }
          else {
            iVar15 = local_138 + -1;
          }
          if (iVar15 != 0) {
            iVar21 = (int)local_290;
            lVar10 = (longlong)(int)local_290;
            iVar7 = (uint)((int)local_290 == 0) + (int)local_290 + iVar15;
            local_290 = CONCAT44(local_290._4_4_,iVar7);
            if (local_290._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
            }
            pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
          }
          if (local_140 != (void *)0x0) {
            FMemory::Free(local_140);
          }
          if (*(longlong *)(lVar9 + 0xa0) != 0) {
            lVar14 = FUN_14301f8f0();
            lVar9 = *(longlong *)(lVar9 + 0xa0);
            for (lVar10 = lVar9; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 0x30)) {
              if (lVar10 == lVar14) {
                if (lVar9 != 0) {
                  local_1b0 = *(undefined8 *)(lVar9 + 0x18);
                  FName::ToString(&local_1b0,&local_218);
                  goto LAB_142fff5b1;
                }
                break;
              }
            }
          }
          local_218 = (undefined2 *)0x0;
          local_210 = 5;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_218,0);
          FGenericPlatformString::Memcpy(local_218,&DAT_143f3edc8,10);
LAB_142fff5b1:
          puVar18 = &DAT_143f3eda8;
          if ((int)local_210 != 0) {
            puVar18 = local_218;
          }
          FString::PrintfImpl(&local_130,L"Balance State Class: %ls\n",puVar18);
          pvVar17 = local_130;
          uVar19 = local_290;
          iVar15 = 0;
          if (local_128 != 0) {
            iVar15 = local_128 + -1;
          }
          if (iVar15 != 0) {
            iVar21 = (int)local_290;
            lVar9 = (longlong)(int)local_290;
            iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
            local_290 = CONCAT44(local_290._4_4_,iVar7);
            if (local_290._4_4_ < iVar7) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
            }
            pvVar16 = (void *)(local_298 + (lVar9 - (ulonglong)(iVar21 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
            *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
          }
          if (local_130 != (void *)0x0) {
            FMemory::Free(local_130);
          }
          if (local_218 != (undefined2 *)0x0) {
            FMemory::Free();
          }
        }
        else {
          cVar5 = FUN_142fd9f20(lVar9);
          if (cVar5 != '\0') {
            FUN_14302b1c0();
            lVar10 = UClass::GetDefaultObject<UDamageType>();
            uVar19 = local_290;
            if (lVar9 == lVar10) {
              iVar15 = (int)local_290;
              lVar9 = (longlong)(int)local_290;
              iVar21 = (6 - (uint)((int)local_290 != 0)) + (int)local_290;
              local_290 = CONCAT44(local_290._4_4_,iVar21);
              if (local_290._4_4_ < iVar21) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
              }
              lVar9 = lVar9 - (ulonglong)(iVar15 != 0);
              builtin_wcsncpy((wchar_t *)(local_298 + lVar9 * 2),L"None",4);
              *(undefined2 *)(local_298 + 8 + lVar9 * 2) = 10;
              *(undefined2 *)(local_298 + 10 + lVar9 * 2) = 0;
            }
            else {
              local_1a8 = *(undefined8 *)(lVar9 + 0x18);
              FName::ToString(&local_1a8,&local_120);
              TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                        (&local_1d8,&local_120,2 - (uint)(local_118 != 0));
              iVar21 = local_1d0;
              lVar10 = (longlong)local_1d0;
              local_1d0 = (2 - (uint)(local_1d0 != 0)) + local_1d0;
              if (local_1cc < local_1d0) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1d8,iVar21);
              }
              uVar19 = local_290;
              lVar10 = lVar10 - (ulonglong)(iVar21 != 0);
              *(undefined2 *)((longlong)local_1d8 + lVar10 * 2) = 10;
              *(undefined2 *)((longlong)local_1d8 + lVar10 * 2 + 2) = 0;
              if ((local_1d0 != 0) && (iVar21 = local_1d0 + -1, iVar21 != 0)) {
                iVar7 = (int)local_290;
                lVar10 = (longlong)(int)local_290;
                iVar6 = (uint)((int)local_290 == 0) + (int)local_290 + iVar21;
                local_290 = CONCAT44(local_290._4_4_,iVar6);
                if (local_290._4_4_ < iVar6) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
                }
                pvVar17 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar17,local_1d8,(longlong)iVar21 * 2);
                *(undefined2 *)((longlong)pvVar17 + (longlong)iVar21 * 2) = 0;
              }
              if (local_1d8 != (void *)0x0) {
                FMemory::Free(local_1d8);
              }
              if (local_120 != 0) {
                FMemory::Free();
              }
              fVar24 = (float)FUN_142c98860(lVar9 + 0xa8,0);
              fVar25 = (float)FUN_142c98860(lVar9 + 0x70,0);
              FString::PrintfImpl(&local_110,L"Game Stage: %d - %d\n",
                                  (int)ROUND(((float)(int)fVar25 + (float)(int)fVar25) - 0.5) >> 1,
                                  (int)ROUND(((float)(int)fVar24 + (float)(int)fVar24) - 0.5) >> 1);
              pvVar17 = local_110;
              uVar19 = local_290;
              iVar21 = iVar15;
              if (local_108 != 0) {
                iVar21 = local_108 + -1;
              }
              if (iVar21 != 0) {
                iVar7 = (int)local_290;
                lVar10 = (longlong)(int)local_290;
                iVar6 = (uint)((int)local_290 == 0) + iVar21 + (int)local_290;
                local_290 = CONCAT44(local_290._4_4_,iVar6);
                if (local_290._4_4_ < iVar6) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
                }
                pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar7 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar21 * 2);
                *(undefined2 *)((longlong)pvVar16 + (longlong)iVar21 * 2) = 0;
              }
              if (local_110 != (void *)0x0) {
                FMemory::Free(local_110);
              }
              FText::FromString(local_f0,lVar9 + 0x218);
              cVar5 = FText::IsEmptyOrWhitespace();
              if (cVar5 == '\0') {
                puVar11 = (undefined8 *)FText::ToString(local_f0);
                if (*(int *)(puVar11 + 1) == 0) {
                  puVar18 = &DAT_143f3eda8;
                }
                else {
                  puVar18 = (undefined2 *)*puVar11;
                }
                FString::PrintfImpl(&local_100,L"\n%ls\n",puVar18);
                pvVar17 = local_100;
                uVar19 = local_290;
                if (local_f8 != 0) {
                  iVar15 = local_f8 + -1;
                }
                if (iVar15 != 0) {
                  iVar21 = (int)local_290;
                  lVar10 = (longlong)(int)local_290;
                  iVar7 = (uint)((int)local_290 == 0) + iVar15 + (int)local_290;
                  local_290 = CONCAT44(local_290._4_4_,iVar7);
                  if (local_290._4_4_ < iVar7) {
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
                  }
                  pvVar16 = (void *)(local_298 + (lVar10 - (ulonglong)(iVar21 != 0)) * 2);
                  _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,(longlong)iVar15 * 2);
                  *(undefined2 *)((longlong)pvVar16 + (longlong)iVar15 * 2) = 0;
                }
                if (local_100 != (void *)0x0) {
                  FMemory::Free();
                }
              }
              uVar19 = local_290;
              iVar15 = (int)local_290;
              lVar10 = (longlong)(int)local_290;
              iVar21 = (2 - (uint)((int)local_290 != 0)) + (int)local_290;
              local_290 = CONCAT44(local_290._4_4_,iVar21);
              if (local_290._4_4_ < iVar21) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar19 & 0xffffffff);
              }
              lVar10 = lVar10 - (ulonglong)(iVar15 != 0);
              *(undefined2 *)(local_298 + lVar10 * 2) = 10;
              *(undefined2 *)(local_298 + 2 + lVar10 * 2) = 0;
              uVar20 = 0;
              plVar22 = *(longlong **)(lVar9 + 0x208);
              uVar19 = (longlong)*(int *)(lVar9 + 0x210) & 0x1fffffffffffffff;
              if (plVar22 + *(int *)(lVar9 + 0x210) < plVar22) {
                uVar19 = uVar20;
              }
              if (uVar19 != 0) {
                do {
                  plVar3 = (longlong *)*plVar22;
                  if (plVar3 != (longlong *)0x0) {
                    lVar9 = (**(code **)(*plVar3 + 0x2c8))(plVar3,local_b8);
                    TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                              (&local_238,lVar9,2 - (uint)(*(int *)(lVar9 + 8) != 0));
                    uVar4 = local_230;
                    iVar21 = (int)local_230;
                    lVar9 = (longlong)(int)local_230;
                    iVar15 = (2 - (uint)((int)local_230 != 0)) + (int)local_230;
                    local_230 = CONCAT44(local_230._4_4_,iVar15);
                    if (local_230._4_4_ < iVar15) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_238,uVar4 & 0xffffffff);
                      iVar15 = (int)local_230;
                    }
                    pvVar17 = local_238;
                    uVar4 = local_290;
                    local_238 = (void *)0x0;
                    local_230 = 0;
                    lVar9 = lVar9 - (ulonglong)(iVar21 != 0);
                    *(undefined2 *)((longlong)pvVar17 + lVar9 * 2) = 10;
                    *(undefined2 *)((longlong)pvVar17 + lVar9 * 2 + 2) = 0;
                    if ((iVar15 != 0) && (iVar15 + -1 != 0)) {
                      iVar21 = (int)local_290;
                      lVar9 = (longlong)(int)local_290;
                      iVar7 = (uint)((int)local_290 == 0) + iVar15 + -1 + (int)local_290;
                      local_290 = CONCAT44(local_290._4_4_,iVar7);
                      if (local_290._4_4_ < iVar7) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_298,uVar4 & 0xffffffff)
                        ;
                      }
                      pvVar16 = (void *)(local_298 + (lVar9 - (ulonglong)(iVar21 != 0)) * 2);
                      sVar2 = (longlong)iVar15 * 2 - 2;
                      _guard_xfg_dispatch_icall_nop(pvVar16,pvVar17,sVar2);
                      *(undefined2 *)((longlong)pvVar16 + sVar2) = 0;
                    }
                    if (pvVar17 != (void *)0x0) {
                      FMemory::Free(pvVar17);
                    }
                    if (local_b8[0] != 0) {
                      FMemory::Free();
                    }
                  }
                  plVar22 = plVar22 + 1;
                  uVar20 = uVar20 + 1;
                } while (uVar20 != uVar19);
              }
              TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(local_f0);
            }
          }
        }
      }
    }
  }
  uVar13 = FText::FromString(local_78,&local_298);
  uVar8 = local_res10;
  FText::operator=(local_res10,uVar13);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    plVar22 = local_70 + 1;
    lVar9 = *plVar22;
    *(int *)plVar22 = (int)*plVar22 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*local_70)(local_70);
      LOCK();
      piVar1 = (int *)((longlong)local_70 + 0xc);
      iVar15 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar15 == 1) {
        (**(code **)(*local_70 + 8))(local_70,1);
      }
    }
  }
  if (local_298 != 0) {
    FMemory::Free();
  }
  return uVar8;
}



// FUNCTION 142fffbb0 FUN_142fffbb0 body=452 status=ok
// SIG undefined FUN_142fffbb0(void)

longlong * FUN_142fffbb0(longlong param_1,longlong param_2,longlong param_3)

{
  int *piVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  int *piVar10;
  longlong *plVar11;
  undefined1 local_38 [16];
  
  plVar11 = (longlong *)0x0;
  if (param_3 != 0) {
    uVar2 = FUN_143029920();
    plVar3 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_3,uVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar6 = *(longlong *)(param_2 + 0x18);
      if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
        lVar4 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar4 = param_1 + 200;
        }
        iVar9 = *(int *)(lVar4 + ((longlong)((int)((ulonglong)lVar6 >> 0x20) + (int)lVar6) &
                                 (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
        if (iVar9 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar9 * 0x30 + *(longlong *)(param_1 + 0x90));
            if (*plVar7 == lVar6) {
              if (iVar9 != -1) goto LAB_142fffc75;
              break;
            }
            iVar9 = (int)plVar7[5];
          } while (iVar9 != -1);
        }
      }
      plVar7 = plVar11;
LAB_142fffc75:
      plVar8 = plVar7 + 1;
      if (plVar7 == (longlong *)0x0) {
        plVar8 = plVar11;
      }
      if (plVar8 == (longlong *)0x0) {
        return (longlong *)0x0;
      }
      piVar5 = (int *)(**(code **)(*plVar3 + 0x10))(plVar3,local_38);
      piVar1 = (int *)plVar8[2];
      if (piVar1 != piVar1 + (longlong)(int)plVar8[3] * 4) {
        piVar10 = piVar1;
        do {
          if (((piVar10[1] == piVar5[1] && piVar10[2] == piVar5[2]) && piVar10[3] == piVar5[3]) &&
              *piVar5 == *piVar10) {
            iVar9 = (int)((longlong)piVar10 - (longlong)piVar1 >> 4);
            if (iVar9 < 0) {
              return (longlong *)0x0;
            }
            if ((int)plVar8[3] <= iVar9) {
              return (longlong *)0x0;
            }
            lVar6 = FUN_142ff6ea0(param_1,param_2,iVar9 + 1U);
            if (lVar6 == param_3) {
              return (longlong *)(ulonglong)(iVar9 + 1U);
            }
            return (longlong *)0x0;
          }
          piVar10 = piVar10 + 4;
        } while (piVar10 != piVar1 + (longlong)(int)plVar8[3] * 4);
      }
      return plVar11;
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 142fffd80 FUN_142fffd80 body=14 status=ok
// SIG undefined FUN_142fffd80(void)

ulonglong FUN_142fffd80(longlong param_1)

{
  ulonglong in_RAX;
  
  if ((*(byte *)(param_1 + 0x29) & 8) != 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  return (ulonglong)*(byte *)(param_1 + 0x34);
}



// FUNCTION 142fffd90 FUN_142fffd90 body=130 status=ok
// SIG undefined FUN_142fffd90(void)

undefined * FUN_142fffd90(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b459b0) {
    _Init_thread_header(&DAT_146b459b0);
    if (DAT_146b459b0 == -1) {
      FUN_142fef030(&DAT_146b45960,L"SmallFont");
      atexit(FUN_143ec2a30);
      _Init_thread_footer(&DAT_146b459b0);
      return &DAT_146b45960;
    }
  }
  return &DAT_146b45960;
}



// FUNCTION 142fffe20 FUN_142fffe20 body=145 status=ok
// SIG undefined FUN_142fffe20(void)

undefined8 FUN_142fffe20(longlong param_1,int *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined1 local_20;
  byte local_1f;
  undefined4 local_1c;
  undefined1 local_18;
  undefined1 local_14;
  undefined4 local_10;
  byte local_c;
  
  local_1f = local_1f & 0xf0;
  local_c = local_c & 0xfc;
  local_38 = 0;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  lVar1 = *(longlong *)(param_1 + 0x228);
  lVar2 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + lVar1;
  local_48 = 0xffffffffffffffff;
  local_40 = 0xffffffffffffffff;
  local_30 = 1;
  local_10 = 1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(int *)(lVar1 + 0xc) == *param_2) break;
    lVar1 = lVar1 + 0x40;
  }
  FUN_1411cb440(&local_48);
  return local_28;
}



// FUNCTION 142fffec0 FUN_142fffec0 body=244 status=ok
// SIG undefined FUN_142fffec0(void)

uint FUN_142fffec0(ulonglong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  iVar3 = (int)(param_1[1] >> 4);
  iVar1 = (int)(*param_1 >> 4);
  uVar6 = 0x9e3779b9U - iVar3 ^ iVar3 << 8;
  uVar2 = -(uVar6 + iVar3) ^ uVar6 >> 0xd;
  uVar4 = (iVar3 - uVar6) - uVar2 ^ uVar2 >> 0xc;
  uVar7 = (uVar6 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar6 = (uVar2 - uVar7) - uVar4 ^ uVar7 >> 5;
  uVar5 = (uVar4 - uVar7) - uVar6 ^ uVar6 >> 3;
  uVar7 = (uVar7 - uVar5) - uVar6 ^ uVar5 << 10;
  uVar8 = 0x9e3779b9U - iVar1 ^ iVar1 << 8;
  uVar2 = -(uVar8 + iVar1) ^ uVar8 >> 0xd;
  uVar4 = (iVar1 - uVar8) - uVar2 ^ uVar2 >> 0xc;
  uVar8 = (uVar8 - uVar4) - uVar2 ^ uVar4 << 0x10;
  uVar2 = (uVar2 - uVar8) - uVar4 ^ uVar8 >> 5;
  uVar4 = (uVar4 - uVar8) - uVar2 ^ uVar2 >> 3;
  uVar8 = (uVar8 - uVar4) - uVar2 ^ uVar4 << 10;
  return (uVar2 - uVar8) - uVar4 ^ (uVar6 - uVar7) - uVar5 ^ (uVar8 ^ uVar7) >> 0xf;
}



// FUNCTION 142ffffc0 FUN_142ffffc0 body=47 status=ok
// SIG undefined FUN_142ffffc0(void)

void FUN_142ffffc0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FTextInspector::GetSourceString(param_1 + 0x30);
  if (*(int *)(puVar1 + 1) != 0) {
    FUN_140438070(*puVar1);
    return;
  }
  FUN_140438070(&DAT_143f3eda8);
  return;
}



// FUNCTION 142fffff0 FUN_142fffff0 body=332 status=ok
// SIG undefined FUN_142fffff0(void)

undefined8 * FUN_142fffff0(longlong param_1,undefined8 *param_2,undefined4 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int local_res8 [2];
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  longlong *plStack_20;
  
  puVar11 = (undefined8 *)0x0;
  local_res8[0] = 0;
  local_res10 = *param_3;
  local_res14 = param_3[1];
  TSet<TTuple<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<USceneComponent,FWeakObjectPtr>,TSharedRef<FMotionDelayTarget,1>,0>,FDefaultSetAllocator>
  ::FindId((longlong *)(param_1 + 8),local_res8,&local_res10);
  puVar10 = puVar11;
  if (local_res8[0] != -1) {
    puVar10 = (undefined8 *)((longlong)local_res8[0] * 0x20 + *(longlong *)(param_1 + 8));
  }
  puVar9 = puVar10 + 1;
  if (puVar10 == (undefined8 *)0x0) {
    puVar9 = puVar11;
  }
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    bVar6 = false;
    bVar5 = true;
  }
  else {
    local_30 = (longlong *)puVar9[1];
    puVar11 = (undefined8 *)*puVar9;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_30 + 1) = (int)local_30[1] + 1;
      UNLOCK();
    }
    puVar10 = &local_38;
    bVar6 = true;
    bVar5 = false;
    local_38 = puVar11;
  }
  uVar4 = puVar10[1];
  puVar10[1] = 0;
  *puVar10 = 0;
  plVar8 = plStack_20;
  *param_2 = puVar11;
  param_2[1] = uVar4;
  if ((bVar5) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plStack_20 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  plVar8 = local_30;
  if ((bVar6) && (local_30 != (longlong *)0x0)) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar8 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return param_2;
}



// FUNCTION 143000140 FUN_143000140 body=778 status=ok
// SIG undefined FUN_143000140(void)

longlong FUN_143000140(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *local_38;
  int local_30;
  longlong *local_28;
  int local_20;
  
  puVar2 = (undefined8 *)FUN_142ff8890();
  lVar3 = FUN_14218c3f0(L"Pickups",*puVar2);
  if (*(longlong *)(lVar3 + 0x70) != 0) {
    return lVar3;
  }
  plVar4 = (longlong *)operator_new(0xe8);
  if (plVar4 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    *plVar4 = lVar3;
    *(longlong **)(lVar3 + 0x70) = plVar4;
    FUN_14217bd20(plVar4 + 1);
    FUN_14217bd20(plVar4 + 2);
    FUN_14217bd20(plVar4 + 3);
    FUN_14217bd20(plVar4 + 4);
    FName::FName(plVar4 + 5,L"Dropped",1);
    FName::FName(plVar4 + 6,L"PickedUp",1);
    FName::FName(plVar4 + 7,L"Inspected",1);
    FName::FName(plVar4 + 8,L"Nearby",1);
    FUN_14217bd20(plVar4 + 9);
    puVar2 = (undefined8 *)FUN_142ff8890();
    FUN_14217b960(plVar4 + 10,L"Category_Suppressed",*puVar2);
    puVar2 = (undefined8 *)FUN_142ff8890();
    FUN_14217b960(plVar4 + 0xb,L"Category_Verbose",*puVar2);
    plVar4[0xc] = 0;
    plVar4[0xd] = 0;
    plVar4[0xe] = 2;
    plVar4[0xf] = 0;
    plVar4[0x10] = 0;
    plVar4[0x13] = 0;
    plVar4[0x14] = 0;
    *(undefined4 *)(plVar4 + 0x15) = 0xffffffff;
    *(undefined4 *)((longlong)plVar4 + 0xac) = 0;
    plVar4[0x17] = 0;
    *(undefined4 *)(plVar4 + 0x18) = 0;
    plVar4[0x19] = 0;
    plVar4[0x1a] = 0;
    plVar4[0x1b] = 0;
    FUN_14217c560(plVar4 + 0x1c);
  }
  puVar2 = (undefined8 *)FUN_142ff8890();
  uVar1 = *puVar2;
  local_28 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)IDelegateInstance::vftable;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar5[2] = (longlong)&LAB_143000c30;
    plVar5[1] = (longlong)plVar4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
  }
  local_38 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  local_30 = 3;
  local_38 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)IDelegateInstance::vftable;
    *plVar5 = (longlong)&DAT_143f3ed00;
    plVar5[2] = (longlong)FUN_143000b70;
    plVar5[1] = (longlong)plVar4;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  FUN_1421872f0(L"Pickups",uVar1,&local_38,&local_28);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1430003ef;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1430003ef:
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return lVar3;
    }
    (**(code **)(*local_28 + 0x28))(local_28,0);
    if (local_28 != (longlong *)0x0) {
      local_28 = (longlong *)FMemory::Realloc(local_28,0,0);
    }
    local_20 = 0;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return lVar3;
}



// FUNCTION 143000450 FUN_143000450 body=1035 status=ok
// SIG undefined FUN_143000450(void)

void FUN_143000450(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  byte bVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint uVar15;
  undefined8 local_res20;
  longlong *local_58;
  int local_50;
  
  (**(code **)(*param_1 + 0x600))();
  plVar14 = (longlong *)0x0;
  local_res20 = 0;
  if (param_2 != (longlong *)0x0) {
    lVar7 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      local_res20 = (**(code **)(*param_2 + 0x670))(param_2);
    }
  }
  plVar8 = (longlong *)FUN_142dccd00(param_2);
  if (((*(byte *)(param_1 + 0xb5) & 2) != 0) && (plVar8 != (longlong *)0x0)) {
    iVar6 = *(int *)((longlong)plVar8 + 0xc);
    plVar9 = plVar14;
    if (iVar6 < (int)DAT_1469e91c4) {
      uVar15 = iVar6 >> 0x1f & 0xffff;
      uVar5 = iVar6 + uVar15;
      plVar9 = (longlong *)
               (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
               (longlong)(int)((uVar5 & 0xffff) - uVar15) * 0x18);
    }
    if ((*(uint *)(plVar9 + 1) >> 0x1d & 1) == 0) {
      if ((*(byte *)((longlong)param_1 + 0x4a4) & 4) == 0) {
        uVar10 = UUserObjectListEntry::GetPrivateStaticClass();
        plVar14 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar8,uVar10);
        if (plVar14 != (longlong *)0x0) {
          (**(code **)(*plVar14 + 0x28))
                    (plVar14,param_1[0xad],(int)param_1[0x94],(char)param_1[0xa4]);
        }
        lVar7 = param_1[0xac];
        if (DAT_146b458d0 == '\0') {
          FUN_143001bd0(&DAT_146b458c8);
        }
        FUN_14300bc80(DAT_146b458c8,lVar7,local_res20);
        param_2 = plVar8;
        if ((char)param_1[0xa4] == '\0') {
          lVar7 = FUN_142ffa140(param_1,plVar8);
          if (lVar7 == 0) {
            return;
          }
          (**(code **)(*param_1 + 0x7c0))(param_1,lVar7,param_3,1);
          return;
        }
      }
      else {
        uVar10 = FUN_142df3580(plVar8);
        lVar7 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar7 == 0) {
          return;
        }
        UWorld::GetPlayerControllerIterator(lVar7,&local_58);
        plVar9 = plVar14;
        while( true ) {
          if ((local_50 < 0) || ((int)local_58[1] <= local_50)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (!bVar3) break;
          uVar11 = FWeakObjectPtr::Get(*local_58 + (longlong)local_50 * 8);
          plVar12 = (longlong *)FUN_142dccd00(uVar11);
          if (((*(byte *)((longlong)param_1 + 0x4a4) & 8) == 0) || (plVar12 == plVar8)) {
LAB_1430005ff:
            cVar4 = (**(code **)(*param_1 + 0x6e8))(param_1,plVar12,0,0);
            if (cVar4 != '\0') {
              plVar9 = (longlong *)0x1;
              cVar4 = operator==<USkinnedMeshComponent,USkinnedMeshComponent,FWeakObjectPtr>
                                (local_res20,*local_58 + (longlong)local_50 * 8);
              if ((cVar4 == '\0') && (plVar14 == (longlong *)0x0)) {
                plVar14 = plVar12;
              }
              if (plVar12 != (longlong *)0x0) {
                uVar11 = UUserObjectListEntry::GetPrivateStaticClass();
                plVar13 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(plVar12,uVar11);
                if (plVar13 != (longlong *)0x0) {
                  (**(code **)(*plVar13 + 0x28))(plVar13,param_1[0xad],(int)param_1[0x94]);
                }
              }
              FWeakObjectPtr::Get(*local_58 + (longlong)local_50 * 8);
              lVar7 = param_1[0xac];
              if (DAT_146b458d0 == '\0') {
                FUN_143001bd0(&DAT_146b458c8);
              }
              FUN_14300bc80(DAT_146b458c8,lVar7);
              if ((((char)param_1[0xa4] == '\0') &&
                  (lVar7 = FUN_142ffa140(param_1,plVar12), lVar7 != 0)) &&
                 (cVar4 = FUN_143003060(lVar7,param_1[0x98]), cVar4 != '\0')) {
                (**(code **)(*param_1 + 0x7c0))(param_1,lVar7);
              }
            }
          }
          else {
            uVar11 = FUN_142df3580(plVar12);
            iVar6 = FUN_142df3570(uVar10,uVar11);
            if (iVar6 == 0) goto LAB_1430005ff;
          }
          local_50 = local_50 + 1;
        }
        if ((char)plVar9 == '\0') {
          return;
        }
      }
      lVar7 = 0;
      lVar2 = param_1[0xad];
      bVar1 = *(byte *)(param_1 + 0xb5);
      (**(code **)(*param_1 + 0x7c8))(param_1,param_2);
      if (((bVar1 & 0x10) == 0) && (lVar2 != 0)) {
        iVar6 = *(int *)(lVar2 + 0xc);
        if (iVar6 < (int)DAT_1469e91c4) {
          uVar15 = iVar6 >> 0x1f & 0xffff;
          uVar5 = iVar6 + uVar15;
          lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
                  (longlong)(int)((uVar5 & 0xffff) - uVar15) * 0x18;
        }
        if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) == 0) {
          FUN_142227350(lVar2,0,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143000860 FUN_143000860 body=239 status=ok
// SIG undefined FUN_143000860(void)

void FUN_143000860(longlong *param_1,longlong param_2,byte param_3,char param_4)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_res8 [8];
  
  (**(code **)(*param_1 + 0x600))();
  if (param_2 != 0) {
    iVar3 = -1;
    cVar1 = (**(code **)(*param_1 + 0x728))(param_1,*(undefined8 *)(param_2 + 0x118),param_3);
    if (cVar1 == '\0') {
      piVar2 = (int *)FUN_142fe3dd0(param_2,local_res8,param_1[0x98],param_1[0xad],
                                    (int)param_1[0x94],param_3 | 2,param_4,0,0);
      iVar3 = *piVar2;
    }
    if ((param_4 != '\0') && ((cVar1 != '\0' || (iVar3 != -1)))) {
      (**(code **)(*param_1 + 0x7c8))(param_1,*(undefined8 *)(param_2 + 0x118));
      (**(code **)(*param_1 + 0x6f8))(param_1,0);
    }
  }
  return;
}



// FUNCTION 143000950 FUN_143000950 body=529 status=ok
// SIG undefined FUN_143000950(void)

void FUN_143000950(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
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
  
  AActor::SetActorTickEnabled(param_1,0);
  uStack_84 = 1;
  plVar9 = (longlong *)(param_1 + 0x2b0);
  uVar2 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar3 = *puVar11;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar5 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar5) goto LAB_143000a2d;
      uVar3 = puVar11[lVar8 + 1];
    }
    uStack_84 = -uVar3 & uVar3;
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
    uStack_74 = (iStack_70 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_143000a2d:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar10 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar9;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar11 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar7 = puVar11[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar10 = uVar10 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_143000af3;
      uVar7 = puVar11[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = -uVar7 & uVar7;
    iVar6 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar6 == 0; iVar6 = iVar6 + -1) {
      }
    }
    if (uVar7 == 0) {
      iVar6 = 0x20;
    }
    else {
      iVar6 = 0x1f - iVar6;
    }
    uStack_74 = (uVar10 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_143000af3:
      uStack_74 = uVar2;
    }
  }
  while ((uStack_4c != uStack_74 || (local_58 != puVar1))) {
    plVar4 = *(longlong **)(*plVar9 + (longlong)(int)uStack_4c * 0x10);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x358))(plVar4,0);
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 143000b70 FUN_143000b70 body=184 status=ok
// SIG undefined FUN_143000b70(void)

void FUN_143000b70(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  undefined8 local_28;
  undefined1 local_20 [8];
  undefined4 local_18;
  
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_id");
  param_1[1] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"player_character_guid");
  param_1[2] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"pickup_action");
  param_1[3] = *puVar1;
  puVar1 = (undefined8 *)FUN_14218d9c0(*param_1,local_res8,L"All_Items");
  local_28 = *puVar1;
  param_1[4] = local_28;
  FName::FName(local_20,L"Count",1);
  local_18 = 0;
  FUN_142184c40(*param_1,&local_28);
  FUN_142ff6570();
  FUN_142195000(*param_1);
  return;
}



// FUNCTION 143000c40 FUN_143000c40 body=59 status=ok
// SIG undefined FUN_143000c40(void)

void FUN_143000c40(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 local_res18 [2];
  
  iVar1 = FUN_14233f450();
  if (iVar1 == 3) {
    local_res18[0] = param_2;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x178,local_res18);
  }
  return;
}



// FUNCTION 143000c80 FUN_143000c80 body=110 status=ok
// SIG undefined FUN_143000c80(void)

void FUN_143000c80(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong local_res10 [2];
  int local_res20 [2];
  longlong *local_18 [2];
  
  if ((param_2 != 0) &&
     (local_res10[0] = param_2, cVar1 = UWorld::IsGameWorld(param_2), cVar1 != '\0')) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x18,local_res20,local_res10[0]);
    if ((local_res20[0] == -1) ||
       ((longlong)local_res20[0] * 0x20 + *(longlong *)(param_1 + 0x18) == 0)) {
      local_18[0] = local_res10;
      FUN_142fd7c70(param_1 + 0x18,local_res20,local_18,0);
    }
  }
  return;
}



// FUNCTION 143000cf0 FUN_143000cf0 body=399 status=ok
// SIG undefined FUN_143000cf0(void)

void FUN_143000cf0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  
  if ((param_2 != 0) && (lVar3 = *(longlong *)(param_2 + 0x118), lVar3 != 0)) {
    lVar6 = ALandscapeStreamingProxy::StaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar1 = param_1 + 0x3e;
      plVar4 = (longlong *)*plVar1;
      iVar2 = (int)param_1[0x3f];
      for (plVar7 = plVar4; plVar7 != plVar4 + iVar2; plVar7 = plVar7 + 1) {
        if (*plVar7 == lVar3) {
          if ((int)((longlong)plVar7 - (longlong)plVar4 >> 3) != -1) goto LAB_143000db1;
          break;
        }
      }
      *(int *)(param_1 + 0x3f) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0x1fc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
      }
      *(longlong *)(*plVar1 + (longlong)iVar2 * 8) = lVar3;
LAB_143000db1:
      (**(code **)(*param_1 + 0x410))(param_1,lVar3);
      if (((char)param_1[0x3b] != '\0') && (lVar3 = *(longlong *)(lVar3 + 0x168), lVar3 != 0)) {
        lVar6 = FUN_1429f11d0();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) {
          if (*(float *)(lVar3 + 0x1dc) <= 0.0) {
            fVar8 = 1.0;
          }
          else {
            fVar8 = *(float *)((longlong)param_1 + 0x1cc) / *(float *)(lVar3 + 0x1dc);
          }
          if (*(float *)(lVar3 + 0x1e0) <= 0.0) {
            fVar9 = 1.0;
          }
          else {
            fVar9 = *(float *)(param_1 + 0x3a) / *(float *)(lVar3 + 0x1e0);
          }
          if (fVar8 <= fVar9) {
            fVar9 = fVar8;
          }
          if (fVar9 <= 1.0) {
            fVar9 = 1.0;
          }
          FUN_142397040(lVar3,fVar9);
        }
      }
    }
  }
  return;
}



// FUNCTION 143000e80 FUN_143000e80 body=106 status=ok
// SIG undefined FUN_143000e80(void)

void FUN_143000e80(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((param_2 != 0) && (lVar1 = *(longlong *)(param_2 + 0x118), lVar1 != 0)) {
    lVar3 = ALandscapeStreamingProxy::StaticClass();
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
      FUN_143011d60(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 143000f00 FUN_143000f00 body=53 status=ok
// SIG undefined FUN_143000f00(void)

ulonglong FUN_143000f00(longlong param_1,longlong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  
  if (param_2 != 0) {
    in_RAX = *(ulonglong *)(param_1 + 0x228);
    uVar1 = (longlong)*(int *)(param_1 + 0x230) * 0x40 + in_RAX;
    for (; in_RAX != uVar1; in_RAX = in_RAX + 0x40) {
      if (*(longlong *)(in_RAX + 0x20) == param_2) {
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143000f40 FUN_143000f40 body=576 status=ok
// SIG undefined FUN_143000f40(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_143000f40(longlong param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  char local_80;
  undefined1 local_7c [8];
  char local_74;
  ulonglong local_70;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_70 = uVar3;
  do {
    if (param_1 == 0) {
      return uVar3 & 0xffffffffffffff00;
    }
    plVar5 = *(longlong **)(param_1 + 0xc0);
    plVar6 = plVar5 + (longlong)*(int *)(param_1 + 200) * 0x10;
    for (; plVar5 != plVar6; plVar5 = plVar5 + 0x10) {
      lVar1 = *plVar5;
      if (lVar1 != 0) {
        fVar7 = (float)FUN_142c98860(lVar1 + 0x38,param_2);
        fVar8 = (float)FUN_142c98860(lVar1 + 0x70,param_2);
        uVar2 = (int)ROUND(fVar7 * 2.0 - 0.5) >> 1;
        uVar3 = (ulonglong)uVar2;
        if (((int)uVar2 <= param_3) &&
           (uVar2 = (int)ROUND(fVar8 * 2.0 - 0.5) >> 1, uVar3 = (ulonglong)uVar2,
           param_3 <= (int)uVar2)) {
          uVar4 = FUN_142caac20(plVar5 + 1,local_88,param_2);
          fVar7 = (float)FUN_142cc4350(uVar4,0);
          switch(local_80) {
          case '\0':
            if (local_80 == '\0') {
              local_80 = -1;
            }
            break;
          case '\x01':
            if (local_80 == '\x01') {
              local_80 = -1;
            }
            break;
          case '\x02':
            if (local_80 == '\x02') {
              local_80 = -1;
            }
            break;
          case '\x03':
          case '\x04':
            if (local_80 == '\x03') {
              local_80 = -1;
            }
            break;
          case '\x05':
            if (local_80 == '\x03') {
              local_80 = -1;
            }
          }
          uVar4 = FUN_142caac20(plVar5 + 8,local_7c,param_2);
          fVar8 = (float)FUN_142cc4350(uVar4,0);
          switch(local_74) {
          case '\0':
            if (local_74 == '\0') {
              local_74 = -1;
            }
            break;
          case '\x01':
            if (local_74 == '\x01') {
              local_74 = -1;
            }
            break;
          case '\x02':
            if (local_74 == '\x02') {
              local_74 = -1;
            }
            break;
          case '\x03':
          case '\x04':
            if (local_74 == '\x03') {
              local_74 = -1;
            }
            break;
          case '\x05':
            if (local_74 == '\x03') {
              local_74 = -1;
            }
          }
          uVar3 = 0;
          if ((fVar7 <= (float)param_3) && ((float)param_3 <= fVar8)) {
            return 1;
          }
        }
      }
    }
    param_1 = *(longlong *)(param_1 + 0x30);
  } while( true );
}



// FUNCTION 1430011b0 FUN_1430011b0 body=1477 status=ok
// SIG undefined FUN_1430011b0(void)

void FUN_1430011b0(undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4)

{
  uint *puVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined2 *puVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint *puVar18;
  longlong lVar19;
  longlong local_res10;
  longlong local_res18;
  undefined8 local_res20;
  uint local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 local_90;
  uint uStack_88;
  uint uStack_84;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((param_2 != 0) && (local_res10 = 0, param_3 != 0)) {
    iVar7 = *(int *)(param_1 + 0x1a);
    uVar14 = (ulonglong)iVar7;
    local_res18 = param_3;
    local_res20 = param_4;
    if ((*(longlong *)(param_2 + 0x208) != 0) &&
       (lVar19 = *(longlong *)(*(longlong *)(param_2 + 0x208) + 0x1d8), lVar19 != 0)) {
      lVar15 = param_1[10];
      local_res10 = *(longlong *)(lVar19 + 0x18);
      if (*(int *)(lVar15 + 0x18) != *(int *)(lVar15 + 0x44)) {
        lVar19 = *(longlong *)(lVar15 + 0x50);
        if (*(longlong *)(lVar15 + 0x50) == 0) {
          lVar19 = lVar15 + 0x48;
        }
        iVar6 = *(int *)(lVar19 + ((longlong)
                                   ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                  (longlong)*(int *)(lVar15 + 0x58) - 1U) * 4);
        if (iVar6 != -1) {
          do {
            if (*(longlong *)(*(longlong *)(lVar15 + 0x10) + (longlong)iVar6 * 0x10) == local_res10)
            {
              if (iVar6 != -1) goto LAB_143001382;
              break;
            }
            iVar6 = *(int *)(*(longlong *)(lVar15 + 0x10) + 8 + (longlong)iVar6 * 0x10);
          } while (iVar6 != -1);
        }
      }
      FName::ToString(&local_res10,&local_b8);
      puVar12 = &DAT_143f3eda8;
      if ((int)puStack_b0 != 0) {
        puVar12 = (undefined2 *)CONCAT44(uStack_b4,local_b8);
      }
      local_98 = *(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0x18);
      cVar5 = FUN_1412892a0(param_1,puVar12,&local_98);
      if (cVar5 != '\0') {
        puVar12 = &DAT_143f3eda8;
        if ((int)puStack_b0 != 0) {
          puVar12 = (undefined2 *)CONCAT44(uStack_b4,local_b8);
        }
        puVar8 = (undefined8 *)FName::FName(&local_98,puVar12,1);
        FUN_143010a20(param_1,*puVar8);
        lVar19 = param_1[0xb];
        if (*(int *)(lVar19 + 0x18) != *(int *)(lVar19 + 0x44)) {
          lVar15 = *(longlong *)(lVar19 + 0x50);
          if (*(longlong *)(lVar19 + 0x50) == 0) {
            lVar15 = lVar19 + 0x48;
          }
          iVar6 = *(int *)(lVar15 + ((longlong)
                                     ((int)((ulonglong)local_res10 >> 0x20) + (int)local_res10) &
                                    (longlong)*(int *)(lVar19 + 0x58) - 1U) * 4);
          if (iVar6 != -1) {
            do {
              if (*(longlong *)(*(longlong *)(lVar19 + 0x10) + (longlong)iVar6 * 0x10) ==
                  local_res10) {
                if (iVar6 != -1) {
                  FUN_143010a20(param_1,*(undefined8 *)(*(longlong *)(param_2 + 0x208) + 0x18));
                }
                break;
              }
              iVar6 = *(int *)(*(longlong *)(lVar19 + 0x10) + 8 + (longlong)iVar6 * 0x10);
            } while (iVar6 != -1);
          }
        }
      }
      if (CONCAT44(uStack_b4,local_b8) != 0) {
        FMemory::Free();
      }
    }
LAB_143001382:
    *(int *)((longlong)param_1 + 0x74) = *(int *)((longlong)param_1 + 0x74) + 1;
    bVar4 = false;
    iVar6 = *(int *)((longlong)param_1 + 0x74);
    lVar19 = (longlong)(*(int *)(param_1 + 0xd) + -1);
    if (-1 < *(int *)(param_1 + 0xd) + -1) {
      lVar15 = lVar19 << 4;
      bVar4 = false;
      do {
        if (((*(int *)(lVar15 + 8 + param_1[0xc]) == 0) ||
            (plVar3 = *(longlong **)(lVar15 + param_1[0xc]), plVar3 == (longlong *)0x0)) ||
           (cVar5 = (**(code **)(*plVar3 + 0x40))(plVar3,param_1,param_2), cVar5 == '\0')) {
          bVar4 = true;
        }
        lVar15 = lVar15 + -0x10;
        lVar19 = lVar19 + -1;
      } while (-1 < lVar19);
      iVar6 = *(int *)((longlong)param_1 + 0x74);
    }
    *(int *)((longlong)param_1 + 0x74) = iVar6 + -1;
    if (bVar4) {
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0xc,0);
    }
    if (iVar7 < *(int *)(param_1 + 0x1a)) {
      lVar19 = uVar14 * 0x58;
      do {
        uVar13 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar13;
        *(undefined1 *)(lVar19 + 4 + param_1[0x19]) = 1;
        lVar19 = lVar19 + 0x58;
      } while ((int)uVar13 < *(int *)(param_1 + 0x1a));
    }
    uVar14 = 0;
    local_res10 = 0;
    if ((*(longlong *)param_1[4] != 0) &&
       (cVar5 = FUN_1407ce010((longlong *)param_1[4] + 1), cVar5 != '\0')) {
      FUN_141288240(param_1 + 0xf,&local_res10,param_1 + 4,0);
    }
    if (*(int *)(param_1 + 0x10) != *(int *)((longlong)param_1 + 0xac)) {
      uVar9 = FUN_142fd8f30(*param_1,&local_res18,&local_res20);
      uVar9 = icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_98,uVar9);
      icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_res10,uVar9);
      cVar5 = FUN_1407ce070(&local_res10);
      if (cVar5 != '\0') {
        plVar3 = param_1 + 0xf;
        uStack_b4 = 1;
        uVar13 = *(uint *)(param_1 + 0x14);
        puVar1 = (uint *)(param_1 + 0x11);
        local_b8 = 0;
        uStack_a4 = 0;
        uStack_a0 = 0;
        if (uVar13 != 0) {
          puVar18 = (uint *)param_1[0x13];
          if ((uint *)param_1[0x13] == (uint *)0x0) {
            puVar18 = puVar1;
          }
          uVar2 = *puVar18;
          uVar16 = uVar14;
          uVar10 = uVar14;
          while (uVar2 == 0) {
            iVar7 = (int)uVar16;
            uStack_a0 = (int)uVar10 + 0x20;
            uVar10 = (ulonglong)uStack_a0;
            local_b8 = iVar7 + 1;
            uVar16 = (ulonglong)local_b8;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
            goto LAB_14300154c;
            uVar2 = puVar18[(longlong)iVar7 + 1];
          }
          uStack_b4 = -uVar2 & uVar2;
          iVar7 = 0x1f;
          if (uStack_b4 != 0) {
            for (; uStack_b4 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uStack_b4 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          uStack_a4 = (uStack_a0 - iVar7) + 0x1f;
          if ((int)uVar13 < (int)uStack_a4) {
LAB_14300154c:
            uStack_a4 = uVar13;
          }
        }
        uVar2 = *(uint *)(param_1 + 0x14);
        uStack_78 = CONCAT44(uStack_a4,0xffffffff);
        local_70 = CONCAT44(uStack_9c,uStack_a0);
        uStack_60 = CONCAT44(uStack_b4,local_b8);
        local_a8 = -1 << ((byte)uVar2 & 0x1f);
        uVar17 = uVar2 & 0xffffffe0;
        uStack_88 = local_b8;
        uStack_84 = uStack_b4;
        puStack_b0 = puVar1;
        uStack_a4 = uVar2;
        local_80 = puVar1;
        local_68 = plVar3;
        puStack_58 = puVar1;
        uStack_50 = uStack_78;
        uStack_48 = local_70;
        local_90 = plVar3;
        if (uVar2 != uVar13) {
          puVar18 = (uint *)param_1[0x13];
          if ((uint *)param_1[0x13] == (uint *)0x0) {
            puVar18 = puVar1;
          }
          uVar11 = puVar18[(int)uVar2 >> 5] & local_a8;
          iVar7 = (int)uVar2 >> 5;
          while (uVar11 == 0) {
            uVar17 = uVar17 + 0x20;
            if ((int)((uVar13 - 1) + ((int)(uVar13 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar7)
            goto LAB_143001612;
            uVar11 = puVar18[(longlong)iVar7 + 1];
            local_a8 = 0xffffffff;
            iVar7 = iVar7 + 1;
          }
          uVar11 = -uVar11 & uVar11;
          iVar7 = 0x1f;
          if (uVar11 != 0) {
            for (; uVar11 >> iVar7 == 0; iVar7 = iVar7 + -1) {
            }
          }
          if (uVar11 == 0) {
            iVar7 = 0x20;
          }
          else {
            iVar7 = 0x1f - iVar7;
          }
          uStack_a4 = (uVar17 - iVar7) + 0x1f;
          uVar2 = uStack_a4;
          if ((int)uVar13 < (int)uStack_a4) {
LAB_143001612:
            uStack_a4 = uVar13;
            uVar2 = uVar13;
          }
        }
        while( true ) {
          lVar19 = (longlong)(int)uStack_78._4_4_;
          if (((uStack_78._4_4_ == uVar2) && (local_80 == puVar1)) && (local_90 == plVar3)) break;
          lVar15 = *local_90;
          icu_53::EnumSet<enum_UDateFormatBooleanAttribute,0,4>::operator=(&local_98,&local_res10);
          FUN_142182e90(*param_1,&local_98,lVar19 * 0x10 + lVar15);
          uStack_78 = CONCAT44(uStack_78._4_4_,(uint)uStack_78 & ~uStack_84);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_88);
        }
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      if (0x7fffffff < *(uint *)((longlong)param_1 + 0x84)) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1 + 0xf,0);
      }
      *(undefined4 *)(param_1 + 0x15) = 0xffffffff;
      *(undefined4 *)((longlong)param_1 + 0xac) = 0;
      puVar8 = (undefined8 *)param_1[0x13];
      if ((undefined8 *)param_1[0x13] == (undefined8 *)0x0) {
        puVar8 = param_1 + 0x11;
      }
      _guard_xfg_dispatch_icall_nop
                (puVar8,0,(longlong)
                          ((int)(*(int *)(param_1 + 0x14) + 0x1f +
                                (*(int *)(param_1 + 0x14) + 0x1f >> 0x1f & 0x1fU)) >> 5) << 2);
      *(undefined4 *)(param_1 + 0x14) = 0;
      if (0 < (int)*(uint *)(param_1 + 0x18)) {
        uVar16 = (ulonglong)*(uint *)(param_1 + 0x18);
        do {
          puVar8 = (undefined8 *)param_1[0x17];
          if ((undefined8 *)param_1[0x17] == (undefined8 *)0x0) {
            puVar8 = param_1 + 0x16;
          }
          uVar10 = (longlong)*(int *)(param_1 + 0x18) - 1U & uVar14;
          uVar14 = uVar14 + 1;
          *(undefined4 *)((longlong)puVar8 + uVar10 * 4) = 0xffffffff;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
    }
    param_1[0x1b] = 0;
    FUN_142193af0(param_1 + 0x1c);
  }
  return;
}



// FUNCTION 143001780 FUN_143001780 body=1091 status=ok
// SIG undefined FUN_143001780(void)

ulonglong FUN_143001780(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong in_RAX;
  undefined8 uVar5;
  undefined8 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined1 *puVar14;
  int iVar15;
  size_t _Size;
  undefined1 *puVar16;
  uint local_res10 [2];
  int local_res18 [4];
  
  if (*param_2 == '\0') goto LAB_143001bb2;
  in_RAX = FUN_143009a20(param_2,0,4);
  iVar2 = (int)in_RAX;
  if (iVar2 < 0) goto LAB_143001bb2;
  uVar10 = 0;
  local_res18[0] = 0;
  local_res10[0] = 0;
  in_RAX = FUN_140ab8370(param_2,local_res18,8);
  if (((char)in_RAX == '\0') ||
     (in_RAX = FUN_140ab8370(param_2,local_res10,7), (char)in_RAX == '\0')) goto LAB_143001bb2;
  uVar5 = FUN_14301f840();
  iVar15 = 0;
  local_res18[0] = 0;
  uVar6 = FUN_142ff6920();
  uVar4 = local_res10[0];
  uVar3 = FUN_142ff71d0(uVar6,uVar5,local_res10[0]);
  in_RAX = FUN_140ab8370(param_2,local_res18,uVar3);
  if ((char)in_RAX == '\0') goto LAB_143001bb2;
  uVar6 = FUN_142ff6920();
  in_RAX = FUN_142ff6ea0(uVar6,uVar5,local_res18[0]);
  if (in_RAX == 0) goto LAB_143001bb2;
  uVar8 = in_RAX;
  if (in_RAX == 0) {
LAB_143001886:
    uVar13 = uVar10;
  }
  else {
    lVar7 = FUN_14301f840();
    iVar1 = *(int *)(lVar7 + 0x90);
    uVar8 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(in_RAX + 0x10) + 0x90) < iVar1) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(in_RAX + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
      uVar8 = uVar8 & 0xffffffffffffff00;
    }
    else {
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    uVar13 = in_RAX;
    if ((char)uVar8 == '\0') goto LAB_143001886;
  }
  in_RAX = uVar8;
  *(ulonglong *)(param_1 + 0x10) = uVar13;
  if (uVar13 == 0) goto LAB_143001bb2;
  uVar5 = UUGStartScreenUW::GetPrivateStaticClass();
  local_res18[0] = 0;
  uVar6 = FUN_142ff6920();
  uVar3 = FUN_142ff71d0(uVar6,uVar5,uVar4);
  in_RAX = FUN_140ab8370(param_2,local_res18,uVar3);
  if ((char)in_RAX == '\0') goto LAB_143001bb2;
  uVar6 = FUN_142ff6920();
  in_RAX = FUN_142ff6ea0(uVar6,uVar5,local_res18[0]);
  if (in_RAX == 0) goto LAB_143001bb2;
  uVar8 = in_RAX;
  if (in_RAX == 0) {
LAB_143001926:
    uVar13 = uVar10;
  }
  else {
    lVar7 = UUGStartScreenUW::GetPrivateStaticClass();
    iVar1 = *(int *)(lVar7 + 0x90);
    uVar8 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(in_RAX + 0x10) + 0x90) < iVar1) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(in_RAX + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
      uVar8 = uVar8 & 0xffffffffffffff00;
    }
    else {
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    uVar13 = in_RAX;
    if ((char)uVar8 == '\0') goto LAB_143001926;
  }
  in_RAX = uVar8;
  *(ulonglong *)(param_1 + 8) = uVar13;
  if (uVar13 == 0) goto LAB_143001bb2;
  uVar5 = FUN_14302d420();
  local_res18[0] = 0;
  uVar6 = FUN_142ff6920();
  uVar3 = FUN_142ff71d0(uVar6,uVar5,uVar4);
  in_RAX = FUN_140ab8370(param_2,local_res18,uVar3);
  if ((char)in_RAX == '\0') goto LAB_143001bb2;
  uVar6 = FUN_142ff6920();
  in_RAX = FUN_142ff6ea0(uVar6,uVar5,local_res18[0]);
  if (in_RAX == 0) goto LAB_143001bb2;
  uVar8 = in_RAX;
  if (in_RAX == 0) {
LAB_1430019c6:
    uVar13 = uVar10;
  }
  else {
    lVar7 = FUN_14302d420();
    iVar1 = *(int *)(lVar7 + 0x90);
    uVar8 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(in_RAX + 0x10) + 0x90) < iVar1) ||
       (uVar8 = *(ulonglong *)(*(longlong *)(in_RAX + 0x10) + 0x88),
       *(longlong *)(uVar8 + (longlong)iVar1 * 8) != lVar7 + 0x88)) {
      uVar8 = uVar8 & 0xffffffffffffff00;
    }
    else {
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    uVar13 = in_RAX;
    if ((char)uVar8 == '\0') goto LAB_1430019c6;
  }
  in_RAX = uVar8;
  *(ulonglong *)(param_1 + 0x18) = uVar13;
  if ((uVar13 != 0) &&
     (((local_res18[0] = 0, 1 < iVar2 ||
       (in_RAX = FUN_140ab8370(param_2,local_res18,7), (char)in_RAX != '\0')) &&
      (in_RAX = FUN_140ab8370(param_2,param_1,7), (char)in_RAX != '\0')))) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x38);
    uVar8 = uVar10;
    if (((lVar7 != 0) ||
        ((*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) != 0 &&
         (lVar7 = FUN_140cb9700(), lVar7 != 0)))) &&
       (uVar13 = *(ulonglong *)(lVar7 + 0x30), uVar13 != 0)) {
      uVar9 = UWidget::GetPrivateStaticClass();
      uVar12 = uVar13;
      do {
        uVar8 = uVar13;
        if (uVar12 == uVar9) break;
        uVar12 = *(ulonglong *)(uVar12 + 0x30);
        uVar8 = uVar10;
      } while (uVar12 != 0);
    }
    in_RAX = FUN_14300de90(param_2,uVar8,param_1 + 0x20,uVar4);
    if (((char)in_RAX != '\0') &&
       ((iVar2 < 3 || (in_RAX = FUN_14300dd20(param_2,param_1 + 0x30,uVar4), (char)in_RAX != '\0')))
       ) {
      local_res18[0] = 0;
      in_RAX = FUN_140ab8370(param_2,local_res18,8);
      iVar1 = local_res18[0];
      if ((char)in_RAX != '\0') {
        iVar11 = *(int *)(param_1 + 0x4c);
        _Size = (size_t)local_res18[0];
        *(undefined4 *)(param_1 + 0x48) = 0;
        if (iVar11 != local_res18[0]) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1 + 0x40);
          iVar11 = *(int *)(param_1 + 0x4c);
          iVar15 = *(int *)(param_1 + 0x48);
        }
        *(int *)(param_1 + 0x48) = iVar15 + iVar1;
        if (iVar11 < iVar15 + iVar1) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1 + 0x40);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar15 + *(longlong *)(param_1 + 0x40)),0,_Size);
        puVar14 = *(undefined1 **)(param_1 + 0x40);
        puVar16 = puVar14 + *(int *)(param_1 + 0x48);
        local_res18[0] = 0;
        for (; puVar14 != puVar16; puVar14 = puVar14 + 1) {
          in_RAX = FUN_140ab8370(param_2,local_res18,8);
          if ((char)in_RAX == '\0') goto LAB_143001bb2;
          *puVar14 = (undefined1)local_res18[0];
        }
        if ((iVar2 < 1) ||
           (in_RAX = FUN_14300dbb0(param_2,param_1 + 0x50,local_res10[0]), (char)in_RAX != '\0')) {
          if (3 < iVar2) {
            local_res10[0] = 0;
            in_RAX = FUN_140ab8370(param_2,local_res10,8);
            if ((char)in_RAX == '\0') goto LAB_143001bb2;
            if (-1 < (int)local_res10[0]) {
              uVar4 = 0xff;
              if ((int)local_res10[0] < 0xff) {
                uVar4 = local_res10[0];
              }
              uVar10 = (ulonglong)uVar4;
            }
            *(char *)(param_1 + 0x60) = (char)uVar10;
          }
          if (*param_2 == '\x03') {
            *param_2 = '\x02';
          }
          uVar10 = FUN_143003610(param_1);
          return uVar10;
        }
      }
    }
  }
LAB_143001bb2:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 143001bd0 FUN_143001bd0 body=125 status=ok
// SIG undefined FUN_143001bd0(void)

void FUN_143001bd0(undefined8 *param_1)

{
  undefined8 local_res8 [4];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146b45e38) {
    _Init_thread_header(&DAT_146b45e38);
    if (DAT_146b45e38 == -1) {
      DAT_146b45e30 = FUN_143000140();
      _Init_thread_footer(&DAT_146b45e38);
    }
  }
  if (local_res8 != param_1) {
    *param_1 = *(undefined8 *)(DAT_146b45e30 + 0x70);
    *(undefined1 *)(param_1 + 1) = 1;
  }
  return;
}



// FUNCTION 143001c50 FUN_143001c50 body=183 status=ok
// SIG undefined FUN_143001c50(void)

void FUN_143001c50(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_142ff5940(param_2,local_28,1);
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    if (param_1 == &local_20) {
      iVar2 = local_18._4_4_;
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_20;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_18;
      *(int *)((longlong)param_1 + 0xc) = local_18._4_4_;
      local_18 = 0;
      local_20 = 0;
      iVar2 = 0;
    }
    local_18 = local_18 & 0xffffffff00000000;
    if (iVar2 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_20,0);
    }
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143001d10 FUN_143001d10 body=193 status=ok
// SIG undefined FUN_143001d10(void)

void FUN_143001d10(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [8];
  longlong local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  local_28[0] = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  cVar1 = FUN_142ff5940(param_2,local_28,1);
  if (cVar1 != '\0') {
    FUN_142ff1ff0(local_28);
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_1,0);
    }
    if (param_1 == &local_20) {
      iVar2 = local_18._4_4_;
    }
    else {
      if (*param_1 != 0) {
        FMemory::Free();
      }
      *param_1 = local_20;
      *(undefined4 *)(param_1 + 1) = (undefined4)local_18;
      *(int *)((longlong)param_1 + 0xc) = local_18._4_4_;
      local_18 = 0;
      local_20 = 0;
      iVar2 = 0;
    }
    local_18 = local_18 & 0xffffffff00000000;
    if (iVar2 != 0) {
      TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_20,0);
    }
  }
  if (local_20 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 143001de0 FUN_143001de0 body=1216 status=ok
// SIG undefined FUN_143001de0(void)

void FUN_143001de0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined2 *puVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong local_res20;
  longlong *local_d8;
  ulonglong local_d0;
  longlong *local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  longlong *local_b0;
  longlong *local_a8;
  longlong *local_a0;
  undefined1 local_98 [8];
  undefined1 local_90 [8];
  longlong local_88 [2];
  longlong local_78 [2];
  longlong local_68 [2];
  longlong local_58 [3];
  
  puVar4 = (undefined8 *)FName::FName(local_98,L"AssetRegistry",1);
  uVar11 = *puVar4;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FUN_141690010(uVar5,uVar11);
  local_a8 = plVar6;
  if (DAT_14677bb24 == '\0') {
    plVar7 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
    (**(code **)(*plVar7 + 0xf8))(plVar7,1);
    DAT_14677bb24 = '\x01';
  }
  iVar14 = *(int *)(param_1 + 0x20);
  if (iVar14 != 0) {
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x18) + 0x20);
    do {
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      TArray<FEdgeToCreate,FDefaultAllocator>::~TArray<FEdgeToCreate,FDefaultAllocator>(plVar7 + -3)
      ;
      plVar7 = plVar7 + 6;
      iVar14 = iVar14 + -1;
    } while (iVar14 != 0);
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_1 + 0x18,0);
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x28,0);
  }
  puVar4 = &DAT_1468e2410;
  local_c8 = (longlong *)0x0;
  local_c0 = 0;
  FConfigCacheIni::GetArray(DAT_1468b6148,L"GearBuilder",L"Paths",&local_c8,&DAT_1468e2410);
  uVar13 = (ulonglong)(int)local_c0;
  local_b0 = local_c8;
  plVar18 = local_c8 + uVar13 * 2;
  plVar7 = local_c8;
  local_a0 = plVar18;
  if (local_c8 != plVar18) {
    do {
      local_d8 = (longlong *)0x0;
      local_d0 = 0;
      local_b0 = plVar7;
      plVar8 = (longlong *)(**(code **)(*plVar6 + 0x48))(plVar6);
      if ((int)plVar7[1] == 0) {
        puVar16 = &DAT_143f3eda8;
      }
      else {
        puVar16 = (undefined2 *)*plVar7;
      }
      lVar10 = *plVar8;
      puVar9 = (undefined8 *)FName::FName(local_90,puVar16,1);
      puVar4 = (undefined8 *)((ulonglong)puVar4 & 0xffffffffffffff00);
      (**(code **)(lVar10 + 0x20))(plVar8,*puVar9,&local_d8,1,puVar4);
      uVar13 = (ulonglong)(int)local_d0;
      plVar17 = local_d8 + uVar13 * 0xb;
      plVar8 = local_d8;
      if (local_d8 != plVar17) {
        do {
          lVar10 = FUN_14301f840();
          if (*plVar8 != 0) {
            puVar9 = (undefined8 *)FName::ToString(plVar8 + 4,local_88);
            if (*(int *)(puVar9 + 1) == 0) {
              puVar16 = &DAT_143f3eda8;
            }
            else {
              puVar16 = (undefined2 *)*puVar9;
            }
            uVar11 = FUN_14171bfe0();
            lVar12 = FUN_141799410(uVar11,0xffffffffffffffff,puVar16);
            if (local_88[0] != 0) {
              FMemory::Free();
            }
            if ((lVar12 == 0) &&
               (FLinkerLoad::FindNewNameForClass(&local_res20,plVar8[4],0), local_res20 != 0)) {
              puVar9 = (undefined8 *)FName::ToString(&local_res20,local_78);
              if (*(int *)(puVar9 + 1) == 0) {
                puVar16 = &DAT_143f3eda8;
              }
              else {
                puVar16 = (undefined2 *)*puVar9;
              }
              uVar11 = FUN_14171bfe0();
              lVar12 = FUN_141799410(uVar11,0xffffffffffffffff,puVar16);
              if (local_78[0] != 0) {
                FMemory::Free();
              }
            }
            for (; lVar12 != 0; lVar12 = *(longlong *)(lVar12 + 0x30)) {
              if (lVar12 == lVar10) {
                local_b8 = 0;
                if (*plVar8 == 0) break;
                puVar9 = (undefined8 *)FName::ToString(plVar8,local_68);
                if (*(int *)(puVar9 + 1) == 0) {
                  puVar16 = &DAT_143f3eda8;
                }
                else {
                  puVar16 = (undefined2 *)*puVar9;
                }
                uVar11 = UObject::GetPrivateStaticClass();
                lVar10 = FUN_141799410(uVar11,0,puVar16);
                if (local_68[0] != 0) {
                  FMemory::Free();
                }
                if (lVar10 == 0) {
                  puVar9 = (undefined8 *)FName::ToString(plVar8,local_58);
                  if (*(int *)(puVar9 + 1) == 0) {
                    puVar16 = &DAT_143f3eda8;
                  }
                  else {
                    puVar16 = (undefined2 *)*puVar9;
                  }
                  uVar11 = UObject::GetPrivateStaticClass();
                  puVar4 = (undefined8 *)((ulonglong)puVar4 & 0xffffffff00000000);
                  lVar10 = FUN_141799c90(uVar11,0,puVar16,0,puVar4,0,1);
                  if (local_58[0] != 0) {
                    FMemory::Free();
                  }
                  if (lVar10 == 0) break;
                }
                lVar12 = FUN_14301f840();
                if ((*(int *)(*(longlong *)(lVar10 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar12 + 0x90) * 8) != lVar12 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if ((bVar3) && ((*(byte *)(lVar10 + 0xf0) & 1) != 0)) {
                  FUN_1430108b0(param_1,lVar10);
                }
                break;
              }
            }
          }
          plVar8 = plVar8 + 0xb;
        } while (plVar8 != plVar17);
        uVar13 = local_d0 & 0xffffffff;
        plVar7 = local_b0;
        plVar18 = local_a0;
        plVar6 = local_a8;
      }
      if ((int)uVar13 != 0) {
        plVar8 = local_d8 + 6;
        do {
          if (plVar8[1] != 0) {
            FMemory::Free();
          }
          plVar17 = (longlong *)*plVar8;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar1 = plVar17 + 1;
            lVar10 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar10 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar2 = (int *)((longlong)plVar17 + 0xc);
              iVar14 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar14 == 1) {
                (**(code **)(*plVar17 + 8))(plVar17,1);
              }
            }
          }
          plVar8 = plVar8 + 0xb;
          uVar15 = (int)uVar13 - 1;
          uVar13 = (ulonglong)uVar15;
        } while (uVar15 != 0);
      }
      if (local_d8 != (longlong *)0x0) {
        FMemory::Free(local_d8);
      }
      local_b0 = plVar7 + 2;
      plVar7 = local_b0;
    } while (local_b0 != plVar18);
    uVar13 = local_c0 & 0xffffffff;
  }
  uVar15 = (uint)uVar13;
  plVar6 = local_c8;
  while (uVar15 != 0) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
    uVar15 = (int)uVar13 - 1;
    uVar13 = (ulonglong)uVar15;
  }
  if (local_c8 != (longlong *)0x0) {
    FMemory::Free(local_c8);
  }
  return;
}



// FUNCTION 1430022a0 FUN_1430022a0 body=360 status=ok
// SIG undefined FUN_1430022a0(void)

void FUN_1430022a0(longlong *param_1,int *param_2,int param_3,byte param_4)

{
  longlong *plVar1;
  int iVar2;
  
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) & 0xfe;
  *(byte *)(param_1 + 99) = *(byte *)(param_1 + 99) | param_4;
  (**(code **)(*param_1 + 0x3f8))(param_1,*param_2);
  if (param_3 < 1) {
    param_3 = *param_2;
  }
  FUN_142ccf590(param_1,param_3);
  param_1[0x42] = *(longlong *)(param_2 + 4);
  param_1[0x41] = *(longlong *)(param_2 + 2);
  param_1[0x43] = *(longlong *)(param_2 + 6);
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x44,param_2 + 8);
  TArray<AActor_*,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x46,param_2 + 0xc);
  TArray<FGridSpatialConstraintCellData,FDefaultAllocator>::operator=(param_1 + 0x48,param_2 + 0x10)
  ;
  TArray<FName,FDefaultAllocator>::operator=(param_1 + 0x4a,param_2 + 0x14);
  *(char *)(param_1 + 0x4c) = (char)param_2[0x18];
  (**(code **)(*param_1 + 0x260))(param_1);
  FUN_143001c50(param_1 + 0x3b,param_2);
  (**(code **)(*param_1 + 0x488))(param_1);
  (**(code **)(*param_1 + 0x490))(param_1);
  *(undefined1 *)(param_1 + 0x34) = 1;
  (**(code **)(*param_1 + 0x498))(param_1);
  (**(code **)(*param_1 + 0x4c0))(param_1);
  *(byte *)(param_1 + 99) =
       *(byte *)(param_1 + 99) ^
       (*(char *)(param_1[0x42] + 0x124) << 2 ^ *(byte *)(param_1 + 99)) & 4;
  if (((*(byte *)(param_1 + 99) & 4) != 0) &&
     (plVar1 = (longlong *)param_1[0x23], plVar1 != (longlong *)0x0)) {
    iVar2 = FUN_14233f450(param_1);
    if (iVar2 == 3) {
      (**(code **)(*plVar1 + 0x310))(plVar1,1);
    }
    FUN_14223c460(plVar1,0);
  }
  return;
}



// FUNCTION 143002410 FUN_143002410 body=363 status=ok
// SIG undefined FUN_143002410(void)

void FUN_143002410(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  char cVar5;
  wchar_t *pwVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong *plVar10;
  longlong local_res10;
  int local_28;
  int local_24;
  longlong local_20;
  
  FUN_142340f20();
  pwVar6 = _guard_xfg_dispatch_icall_nop(L"&UInventoryBalanceStateComponent::PostBeginPlay",L"::");
  pwVar4 = (wchar_t *)0x0;
  while (pwVar3 = pwVar6, pwVar3 != (wchar_t *)0x0) {
    pwVar6 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
    pwVar4 = pwVar3;
  }
  FName::FName(&local_res10,pwVar4 + 2,1);
  lVar2 = *(longlong *)(param_1 + 0x118);
  plVar10 = (longlong *)(lVar2 + 0x408);
  FWeakObjectPtr::operator=(&local_28,0);
  local_20 = 0;
  FWeakObjectPtr::operator=(&local_28,param_1);
  local_20 = local_res10;
  if ((local_res10 != 0) && (lVar7 = FWeakObjectPtr::Get(&local_28), lVar7 != 0)) {
    UObject::FindFunction(lVar7,local_20);
  }
  piVar8 = (int *)*plVar10;
  iVar1 = *(int *)(lVar2 + 0x410);
  piVar9 = piVar8;
  do {
    if (piVar9 == piVar8 + (longlong)iVar1 * 4) {
LAB_14300252d:
      iVar1 = *(int *)(lVar2 + 0x410);
      *(int *)(lVar2 + 0x410) = iVar1 + 1;
      if (*(int *)(lVar2 + 0x414) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar10,iVar1);
      }
      piVar8 = (int *)((longlong)iVar1 * 0x10 + *plVar10);
      *piVar8 = local_28;
      piVar8[1] = local_24;
      *(longlong *)(piVar8 + 2) = local_20;
LAB_143002566:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar10);
      return;
    }
    if ((((*piVar9 == local_28) && (piVar9[1] == local_24)) ||
        ((cVar5 = FWeakObjectPtr::IsValid(piVar9), cVar5 == '\0' &&
         (cVar5 = FWeakObjectPtr::IsValid(&local_28), cVar5 == '\0')))) &&
       (*(longlong *)(piVar9 + 2) == local_20)) {
      if ((int)((longlong)piVar9 - (longlong)piVar8 >> 4) != -1) goto LAB_143002566;
      goto LAB_14300252d;
    }
    piVar9 = piVar9 + 4;
  } while( true );
}



// FUNCTION 143002580 FUN_143002580 body=1224 status=ok
// SIG undefined FUN_143002580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_143002580(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  int iVar15;
  char *pcVar16;
  undefined1 auStack_1e8 [32];
  int local_1c8;
  longlong local_1c0;
  longlong local_1b8;
  undefined4 *local_1a8;
  ulonglong *puStack_1a0;
  undefined8 local_198;
  longlong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined1 local_168 [8];
  longlong *local_160;
  undefined1 local_150 [8];
  longlong *local_148;
  undefined1 local_138 [8];
  longlong *local_130;
  undefined1 local_120 [8];
  longlong *local_118;
  undefined1 local_108 [8];
  longlong *local_100;
  undefined1 local_f0 [8];
  longlong *local_e8;
  undefined1 local_d8 [8];
  longlong *local_d0;
  undefined1 local_c0 [16];
  undefined1 local_b0 [24];
  undefined4 local_98 [4];
  undefined1 local_88 [24];
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_58 [24];
  undefined1 local_40;
  ulonglong local_38 [2];
  
  local_38[0] = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  local_1c8 = 0;
  if ((*(byte *)(*(longlong *)(param_1 + 0x208) + 0x38) & 1) == 0) {
    uVar10 = FText::FText(local_108);
    FText::operator=(param_1 + 0x268,uVar10);
    if (local_100 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_100 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_100)(local_100);
        LOCK();
        piVar1 = (int *)((longlong)local_100 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_100 + 8))(local_100,1);
        }
      }
    }
    if ((*(int *)(param_1 + 0x1f0) != 0) && (local_1c8 = 0, 0 < *(int *)(param_1 + 0x1f0))) {
      local_1c0 = 0;
      do {
        lVar11 = local_1c0;
        iVar15 = local_1c8;
        cVar9 = FText::IsEmpty(param_1 + 0x268);
        lVar13 = *(longlong *)(*(longlong *)(param_1 + 0x1e8) + lVar11) + 0x30;
        if (cVar9 == '\0') {
          bVar7 = true;
          bVar6 = true;
          FText::FText(local_150,lVar13);
          lVar11 = FText::FText(local_b0,param_1 + 0x268);
          local_1b8 = lVar11;
          uVar10 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                             (local_d8,L"{0} {1}",L"InventoryBalance",L"DisplayNameConcat");
          puVar12 = (undefined8 *)FTextFormat::FTextFormat(local_c0,uVar10);
          local_98[0] = 4;
          FText::FText(local_88,lVar11);
          local_70 = 1;
          local_68 = 4;
          FText::FText(local_58,local_150);
          local_1a8 = local_98;
          local_40 = 1;
          puStack_1a0 = local_38;
          local_198 = *puVar12;
          local_190 = puVar12[1];
          if (local_190 != 0) {
            LOCK();
            *(int *)(local_190 + 8) = *(int *)(local_190 + 8) + 1;
            UNLOCK();
          }
          local_188 = local_1a8;
          uStack_180 = puStack_1a0;
          uVar10 = TArray<FFormatArgumentValue,FDefaultAllocator>::
                   TArray<FFormatArgumentValue,FDefaultAllocator>(local_178,&local_188);
          uVar10 = FText::Format(local_f0,&local_198,uVar10);
          FText::FText(local_138,uVar10);
          plVar5 = local_e8;
          if (local_e8 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_e8 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_e8)(local_e8);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          TArray<FFormatArgumentValue,FDefaultAllocator>::
          ~TArray<FFormatArgumentValue,FDefaultAllocator>(local_178);
          lVar11 = 2;
          pcVar16 = &stack0xfffffffffffffff0;
          do {
            lVar11 = lVar11 + -1;
            pcVar3 = pcVar16 + -0x30;
            if (*pcVar3 != '\0') {
              *pcVar3 = '\0';
              plVar5 = *(longlong **)(pcVar16 + -0x40);
              if (plVar5 != (longlong *)0x0) {
                LOCK();
                plVar2 = plVar5 + 1;
                lVar13 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar13 == 1) {
                  (**(code **)*plVar5)(plVar5);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar5 + 0xc);
                  iVar15 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar15 == 1) {
                    (**(code **)(*plVar5 + 8))(plVar5,1);
                  }
                }
              }
            }
            pcVar16 = pcVar3;
          } while (lVar11 != 0);
          plVar5 = (longlong *)puVar12[1];
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar5 = *(longlong **)(local_1b8 + 8);
          if (plVar5 != (longlong *)0x0) {
            LOCK();
            plVar2 = plVar5 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*plVar5)(plVar5);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          plVar5 = local_148;
          if (local_148 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_148 + 1;
            lVar11 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar11 == 1) {
              (**(code **)*local_148)(local_148);
              LOCK();
              piVar1 = (int *)((longlong)plVar5 + 0xc);
              iVar15 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar15 == 1) {
                (**(code **)(*plVar5 + 8))(plVar5,1);
              }
            }
          }
          puVar14 = local_138;
          lVar11 = local_1c0;
          iVar15 = local_1c8;
        }
        else {
          bVar8 = true;
          FText::FText(local_120,lVar13);
          puVar14 = local_120;
        }
        FText::operator=(param_1 + 0x268,puVar14);
        plVar5 = local_130;
        if ((bVar6) && (bVar6 = false, local_130 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_130 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_130)(local_130);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = local_d0;
        if ((bVar7) && (bVar7 = false, local_d0 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_d0 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_d0)(local_d0);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        plVar5 = local_118;
        if ((bVar8) && (bVar8 = false, local_118 != (longlong *)0x0)) {
          LOCK();
          plVar2 = local_118 + 1;
          lVar13 = *plVar2;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)lVar13 == 1) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)plVar5 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar5 + 8))(plVar5,1);
            }
          }
        }
        local_1c8 = iVar15 + 1;
        local_1c0 = lVar11 + 8;
      } while (local_1c8 < *(int *)(param_1 + 0x1f0));
    }
  }
  else {
    FText::FText(local_168,*(longlong *)(param_1 + 0x208) + 0x40);
    FText::operator=(param_1 + 0x268,local_168);
    if (local_160 != (longlong *)0x0) {
      LOCK();
      plVar5 = local_160 + 1;
      lVar11 = *plVar5;
      *(int *)plVar5 = (int)*plVar5 + -1;
      UNLOCK();
      if ((int)lVar11 == 1) {
        (**(code **)*local_160)(local_160);
        LOCK();
        piVar1 = (int *)((longlong)local_160 + 0xc);
        iVar15 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar15 == 1) {
          (**(code **)(*local_160 + 8))(local_160,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 143002a50 FUN_143002a50 body=659 status=ok
// SIG undefined FUN_143002a50(void)

void FUN_143002a50(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  byte *pbVar19;
  ulonglong uVar20;
  longlong local_48;
  longlong local_40;
  
  lVar7 = *(longlong *)(*(longlong *)(param_3 + 8) + 0x38);
  if ((lVar7 != 0) ||
     ((*(longlong *)(*(longlong *)(param_3 + 8) + 0x30) != 0 &&
      (lVar7 = FUN_140cb9700(), lVar7 != 0)))) {
    local_48 = param_3;
    local_40 = lVar7;
    if (param_1 != (longlong *)0x0) {
      plVar18 = (longlong *)*param_1;
      plVar1 = plVar18 + (int)param_1[1];
      for (; plVar18 != plVar1; plVar18 = plVar18 + 1) {
        lVar15 = *plVar18;
        if (lVar15 != 0) {
          lVar5 = *(longlong *)(lVar15 + 0x30);
          lVar14 = 0;
          if (lVar5 != 0) {
            lVar8 = FUN_14302b270();
            lVar10 = lVar5;
            do {
              lVar14 = lVar5;
              if (lVar10 == lVar8) break;
              lVar10 = *(longlong *)(lVar10 + 0x30);
              lVar14 = 0;
            } while (lVar10 != 0);
          }
          if (lVar14 == *(longlong *)(lVar7 + 0x10)) {
            pbVar19 = *(byte **)(lVar15 + 0x40);
            pbVar2 = pbVar19 + (longlong)*(int *)(lVar15 + 0x48) * 0x18;
            for (; pbVar19 != pbVar2; pbVar19 = pbVar19 + 0x18) {
              bVar3 = *pbVar19;
              if (*(int *)(param_3 + 0x28) <= (int)(uint)bVar3) {
                iVar4 = *(int *)(param_3 + 0x28);
                iVar11 = bVar3 + 1;
                if (iVar4 < iVar11) {
                  *(int *)(param_3 + 0x28) = iVar11;
                  iVar13 = iVar11 - iVar4;
                  if (*(int *)(param_3 + 0x2c) < iVar11) {
                    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>
                    ::ResizeGrow(param_3 + 0x20,iVar4);
                  }
                  puVar12 = (undefined1 *)(*(longlong *)(param_3 + 0x20) + (longlong)iVar4 * 0x18);
                  if (iVar13 != 0) {
                    puVar9 = puVar12 + 0x14;
                    do {
                      *puVar12 = 0;
                      puVar12 = puVar12 + 0x18;
                      *(undefined8 *)(puVar9 + -0xc) = 0;
                      *(undefined8 *)(puVar9 + -4) = 0;
                      puVar9 = puVar9 + 0x18;
                      iVar13 = iVar13 + -1;
                    } while (iVar13 != 0);
                  }
                }
                else if (iVar11 < iVar4) {
                  TArray<FVertexAndAttributes,FDefaultAllocator>::RemoveAtImpl
                            (param_3 + 0x20,iVar11,iVar4 - iVar11,1);
                }
              }
              uVar16 = 0;
              puVar17 = *(undefined8 **)(pbVar19 + 8);
              uVar20 = (longlong)*(int *)(pbVar19 + 0x10) & 0x1fffffffffffffff;
              if (puVar17 + *(int *)(pbVar19 + 0x10) < puVar17) {
                uVar20 = uVar16;
              }
              if (uVar20 != 0) {
                do {
                  uVar6 = *puVar17;
                  lVar15 = *(longlong *)(param_3 + 0x20) + (ulonglong)(uint)bVar3 * 0x18;
                  iVar4 = *(int *)(lVar15 + 0x10);
                  *(int *)(lVar15 + 0x10) = iVar4 + 1;
                  if (*(int *)(lVar15 + 0x14) < iVar4 + 1) {
                    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                              (lVar15 + 8,iVar4);
                  }
                  puVar17 = puVar17 + 1;
                  uVar16 = uVar16 + 1;
                  *(undefined8 *)(*(longlong *)(lVar15 + 8) + (longlong)iVar4 * 8) = uVar6;
                } while (uVar16 != uVar20);
              }
            }
          }
        }
      }
    }
    if (param_2 != 0) {
      FUN_142fe13d0(&local_48,param_2);
    }
  }
  return;
}



// FUNCTION 143002cf0 FUN_143002cf0 body=218 status=ok
// SIG undefined FUN_143002cf0(void)

void FUN_143002cf0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong *plVar4;
  int iVar5;
  ulonglong uVar6;
  
  plVar1 = (longlong *)(param_1 + 0x1e0);
  *(undefined8 *)(param_1 + 0x1a8) = param_2;
  iVar5 = *(int *)(param_1 + 0x1e8);
  if (iVar5 != 0) {
    lVar2 = *plVar1 + 0x48;
    do {
      TArray<FMovieSceneSegment,FDefaultAllocator>::~TArray<FMovieSceneSegment,FDefaultAllocator>
                (lVar2);
      lVar2 = lVar2 + 0x58;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x1e8) = 0;
  if (*(int *)(param_1 + 0x1ec) != 0) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  if (*(longlong *)(param_1 + 0x1a8) != 0) {
    FUN_142ff8b70(param_1);
    lVar2 = *(longlong *)(param_1 + 0x1a8);
    FUN_142fd77d0(plVar1,lVar2 + 0x30);
    plVar4 = *(longlong **)(lVar2 + 0x40);
    uVar6 = (longlong)*(int *)(lVar2 + 0x48) & 0x1fffffffffffffff;
    if (plVar4 + *(int *)(lVar2 + 0x48) < plVar4) {
      uVar6 = uVar3;
    }
    if (uVar6 != 0) {
      do {
        if (*plVar4 != 0) {
          FUN_142fd77d0(plVar1,*plVar4 + 0x30);
        }
        plVar4 = plVar4 + 1;
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar6);
    }
  }
  return;
}



// FUNCTION 143002dd0 FUN_143002dd0 body=644 status=ok
// SIG undefined FUN_143002dd0(void)

void FUN_143002dd0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  char *pcVar13;
  
  FUN_142d852a0();
  lVar8 = *(longlong *)(param_1 + 0x38);
  if ((lVar8 == 0) &&
     ((*(longlong *)(param_1 + 0x30) == 0 || (lVar8 = FUN_140cb9700(), lVar8 == 0)))) {
LAB_143002e4c:
    lVar8 = 0;
LAB_143002e4e:
    bVar3 = true;
  }
  else {
    lVar9 = FUN_14302b270();
    if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_143002e4c;
    if (*(char *)(lVar8 + 0x40) == '\0') goto LAB_143002e4e;
    bVar3 = false;
  }
  lVar9 = *(longlong *)(param_1 + 0x30);
  pcVar13 = (char *)0x0;
  if (lVar9 == 0) {
LAB_143002f4c:
    bVar4 = false;
  }
  else {
    lVar10 = FUN_14301f840();
    if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
        != lVar10 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (!bVar4) goto LAB_143002f4c;
    if (lVar8 != 0) {
      lVar10 = *(longlong *)(lVar9 + 0x38);
      if ((lVar10 == 0) &&
         ((*(longlong *)(lVar9 + 0x30) == 0 || (lVar10 = FUN_140cb9700(), lVar10 == 0)))) {
LAB_143002f29:
        bVar4 = false;
      }
      else {
        if (*(longlong *)(lVar8 + 0x30) != 0) {
          lVar11 = UWidget::GetPrivateStaticClass();
          lVar12 = *(longlong *)(lVar8 + 0x30);
          for (lVar2 = lVar12; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar11) goto LAB_143002ef4;
          }
        }
        lVar12 = 0;
LAB_143002ef4:
        if (*(longlong *)(lVar10 + 0x30) != 0) {
          lVar11 = UWidget::GetPrivateStaticClass();
          lVar10 = *(longlong *)(lVar10 + 0x30);
          for (lVar2 = lVar10; lVar2 != 0; lVar2 = *(longlong *)(lVar2 + 0x30)) {
            if (lVar2 == lVar11) goto LAB_143002f20;
          }
        }
        lVar10 = 0;
LAB_143002f20:
        if (lVar12 != lVar10) goto LAB_143002f29;
        bVar4 = true;
      }
      if ((!bVar4) || (pcVar13 = (char *)0x0, *(char *)(lVar8 + 0x40) == '\x02'))
      goto LAB_143002f4c;
    }
    pcVar13 = (char *)(lVar9 + 0xd0);
    if ((pcVar13 == (char *)0x0) || (*pcVar13 == '\0')) goto LAB_143002f4c;
    bVar4 = true;
  }
  if ((lVar8 == 0) || (*(char *)(lVar8 + 0x8c) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((bVar4) || (bVar5)) {
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  *(undefined1 *)(param_1 + 0xd0) = uVar6;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xe4)) {
    TArray<FBoneTransform,FDefaultAllocator>::ResizeTo(param_1 + 0xd8,0);
  }
  if (bVar4) {
    if ((!bVar3) && (bVar5)) goto LAB_143002fed;
    iVar1 = *(int *)(pcVar13 + 0x10);
    if (iVar1 != 0) {
      iVar7 = *(int *)(param_1 + 0xe0);
      if (*(int *)(param_1 + 0xe4) < iVar7 + iVar1) {
        TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0xd8));
        iVar7 = *(int *)(param_1 + 0xe0);
      }
      _guard_xfg_dispatch_icall_nop
                ((void *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0xd8)),
                 *(void **)(pcVar13 + 8),(longlong)iVar1 << 6);
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + iVar1;
    }
  }
  if (!bVar5) {
    return;
  }
LAB_143002fed:
  iVar1 = *(int *)(lVar8 + 0x98);
  if (iVar1 != 0) {
    iVar7 = *(int *)(param_1 + 0xe0);
    if (*(int *)(param_1 + 0xe4) < iVar7 + iVar1) {
      TArray<FBoneTransform,FDefaultAllocator>::ResizeTo((longlong *)(param_1 + 0xd8));
      iVar7 = *(int *)(param_1 + 0xe0);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)((longlong)iVar7 * 0x40 + *(longlong *)(param_1 + 0xd8)),
               *(void **)(lVar8 + 0x90),(longlong)iVar1 << 6);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + iVar1;
  }
  return;
}



// FUNCTION 143003060 FUN_143003060 body=453 status=ok
// SIG undefined FUN_143003060(void)

ulonglong FUN_143003060(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  uint *puVar6;
  int iVar7;
  longlong lVar8;
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  undefined1 local_58 [16];
  longlong *local_48;
  undefined2 local_40;
  longlong *local_38;
  int iStack_30;
  uint uStack_2c;
  uint *puStack_28;
  undefined1 auStack_20 [16];
  undefined8 local_10;
  
  plVar1 = (longlong *)(param_1 + 0x248);
  iVar3 = *(int *)(param_1 + 0x270);
  local_78 = 0;
  uStack_74 = 1;
  puStack_28 = (uint *)(param_1 + 600);
  local_68._4_4_ = 0;
  uStack_60 = 0;
  if (iVar3 != 0) {
    puVar6 = *(uint **)(param_1 + 0x268);
    if (*(uint **)(param_1 + 0x268) == (uint *)0x0) {
      puVar6 = puStack_28;
    }
    uVar4 = *puVar6;
    uStack_60 = 0;
    local_78 = 0;
    while (uVar4 == 0) {
      lVar8 = (longlong)local_78;
      uStack_60 = uStack_60 + 0x20;
      iVar7 = local_78 + 1;
      bVar5 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar7;
      if (bVar5) goto LAB_14300312f;
      uVar4 = puVar6[lVar8 + 1];
    }
    uStack_74 = -uVar4 & uVar4;
    iVar7 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar7 == 0; iVar7 = iVar7 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar7 = 0x20;
    }
    else {
      iVar7 = 0x1f - iVar7;
    }
    local_68._4_4_ = (uStack_60 - iVar7) + 0x1f;
    if (iVar3 < local_68._4_4_) {
LAB_14300312f:
      local_68._4_4_ = iVar3;
    }
  }
  auStack_20._4_4_ = local_68._4_4_;
  auStack_20._0_4_ = 0xffffffff;
  auStack_20._8_4_ = uStack_60;
  auStack_20._12_4_ = iStack_5c;
  iStack_30 = local_78;
  uStack_2c = uStack_74;
  local_40 = 0;
  local_10._0_4_ = SUB84(plVar1,0);
  local_10._4_4_ = (undefined4)((ulonglong)plVar1 >> 0x20);
  uStack_60 = 0xffffffff;
  iStack_5c = local_68._4_4_;
  iStack_70 = local_78;
  uStack_6c = uStack_74;
  local_58._8_4_ = (undefined4)local_10;
  local_58._0_8_ = auStack_20._8_8_;
  local_58._12_4_ = local_10._4_4_;
  bVar5 = local_68._4_4_ < *(int *)(param_1 + 0x270);
  puVar6 = puStack_28;
  local_48 = plVar1;
  local_38 = plVar1;
  local_10 = plVar1;
  local_68 = puStack_28;
  if (bVar5) {
    do {
      if (param_2 == *(longlong *)((longlong)iStack_5c * 0x20 + *plVar1)) {
        bVar2 = *(byte *)((longlong)iStack_5c * 0x20 + 0xc + *plVar1);
        if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
          TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(local_48,(int)local_48[1] - *(int *)((longlong)local_48 + 0x34),
                              CONCAT71((int7)((ulonglong)plVar1 >> 8),1));
        }
        return (ulonglong)bVar2;
      }
      uStack_60 = uStack_60 & ~uStack_6c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
    } while (iStack_5c < (int)local_68[6]);
    puVar6 = local_68;
    if (((char)local_40 != '\0') && (local_40._1_1_ != '\0')) {
      puVar6 = (uint *)TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
                       ::ConditionalRehash(local_48,(int)local_48[1] -
                                                    *(int *)((longlong)local_48 + 0x34),1);
    }
  }
  return (ulonglong)puVar6 & 0xffffffffffffff00;
}



// FUNCTION 143003230 FUN_143003230 body=42 status=ok
// SIG undefined FUN_143003230(void)

bool FUN_143003230(longlong param_1)

{
  char cVar1;
  
  if (*(longlong **)(param_1 + 0x108) != (longlong *)0x0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x280))();
    return cVar1 == '\0';
  }
  return false;
}



// FUNCTION 143003260 FUN_143003260 body=54 status=ok
// SIG undefined FUN_143003260(void)

bool FUN_143003260(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  
  if ((*(longlong *)(param_1 + 0x210) != 0) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x210) + 0x108), plVar1 != (longlong *)0x0)) {
    cVar2 = (**(code **)(*plVar1 + 0x280))();
    return cVar2 == '\0';
  }
  return false;
}



// FUNCTION 1430032a0 FUN_1430032a0 body=18 status=ok
// SIG undefined FUN_1430032a0(void)

undefined1 FUN_1430032a0(longlong param_1)

{
  if ((*(int *)(param_1 + 8) == 0) && (*(int *)(param_1 + 0x18) == 0)) {
    return 1;
  }
  return 0;
}



// FUNCTION 1430032c0 FUN_1430032c0 body=376 status=ok
// SIG undefined FUN_1430032c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1430032c0(longlong *param_1,undefined8 param_2,int param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float extraout_XMM0_Da;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  char local_50;
  undefined1 local_4c [12];
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_78;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    fVar3 = (float)FUN_142c98860(lVar1 + 0x38);
    fVar4 = (float)FUN_142c98860(lVar1 + 0x70,param_2);
    if (((int)ROUND(fVar3 * 2.0 - 0.5) >> 1 <= param_3) &&
       (param_3 <= (int)ROUND(fVar4 * 2.0 - 0.5) >> 1)) {
      uVar2 = FUN_142caac20(param_1 + 1,local_58,param_2);
      fVar3 = (float)FUN_142cc4350(uVar2);
      switch(local_50) {
      case '\0':
        if (local_50 == '\0') {
          local_50 = -1;
        }
        break;
      case '\x01':
        if (local_50 == '\x01') {
          local_50 = -1;
        }
        break;
      case '\x02':
        if (local_50 == '\x02') {
          local_50 = -1;
        }
        break;
      case '\x03':
      case '\x04':
        if (local_50 == '\x03') {
          local_50 = -1;
        }
        break;
      case '\x05':
        if (local_50 == '\x03') {
          local_50 = -1;
        }
      }
      uVar2 = FUN_142caac20(param_1 + 8,local_4c,param_2);
      FUN_142cc4350(uVar2);
      if ((fVar3 <= (float)param_3) && ((float)param_3 <= extraout_XMM0_Da)) {
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 143003450 FUN_143003450 body=303 status=ok
// SIG undefined FUN_143003450(void)

undefined8 FUN_143003450(longlong param_1,int param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  float fVar7;
  undefined8 local_18;
  undefined8 uStack_10;
  
  if (param_1 != 0) {
    if (*(longlong *)(param_1 + 0x98) == 0) {
      iVar4 = 0;
    }
    else {
      uStack_10 = 0;
      local_18 = param_4;
      fVar7 = (float)FUN_142ca2f00(*(longlong *)(param_1 + 0x98),&local_18,0);
      iVar4 = (int)fVar7;
    }
    if (*(longlong *)(param_1 + 0xa0) == 0) {
      iVar3 = 100;
    }
    else {
      uStack_10 = 0;
      local_18 = param_4;
      fVar7 = (float)FUN_142ca2f00(*(longlong *)(param_1 + 0xa0),&local_18,0);
      iVar3 = (int)fVar7;
    }
    if (((iVar4 == 0) || ((iVar4 <= param_2 && ((param_3 == 0 || (iVar4 <= param_3)))))) &&
       ((iVar3 == 0 || (param_2 <= iVar3)))) {
      plVar5 = *(longlong **)(param_1 + 0x48);
      plVar6 = plVar5 + (longlong)*(int *)(param_1 + 0x50) * 0xe;
      for (; plVar5 != plVar6; plVar5 = plVar5 + 0xe) {
        lVar1 = *plVar5;
        if ((lVar1 == 0) || (*(int *)(lVar1 + 0x50) < 1)) {
          if (plVar5[6] != 0) {
            cVar2 = FUN_143000f40(plVar5[6],param_4,param_2);
            goto LAB_143003551;
          }
        }
        else {
          cVar2 = FUN_143003450(lVar1,param_2,param_3,param_4);
LAB_143003551:
          if (cVar2 != '\0') {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 143003580 FUN_143003580 body=33 status=ok
// SIG undefined FUN_143003580(void)

ulonglong FUN_143003580(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (DAT_146b45384 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x2a8);
    in_RAX = (ulonglong)uVar1;
    if ((0 < (int)uVar1) && ((int)uVar1 <= *(int *)(param_1 + 0x240))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430035b0 FUN_1430035b0 body=29 status=ok
// SIG undefined FUN_1430035b0(void)

ulonglong FUN_1430035b0(longlong param_1)

{
  ulonglong in_RAX;
  
  if (((param_1 != 0) && (in_RAX = *(ulonglong *)(param_1 + 0x1d8), in_RAX != 0)) &&
     (*(char *)(in_RAX + 0x38) == '\0')) {
    return CONCAT71((int7)(in_RAX >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430035d0 FUN_1430035d0 body=8 status=ok
// SIG undefined FUN_1430035d0(void)

undefined1 FUN_1430035d0(void)

{
  return DAT_146b45384;
}



// FUNCTION 1430035e0 FUN_1430035e0 body=13 status=ok
// SIG undefined FUN_1430035e0(void)

byte FUN_1430035e0(longlong param_1)

{
  return *(byte *)(param_1 + 0x5a8) >> 2 & 1;
}



// FUNCTION 143003610 FUN_143003610 body=133 status=ok
// SIG undefined FUN_143003610(void)

ulonglong FUN_143003610(int *param_1)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  if ((((0 < *param_1) && (*(longlong *)(param_1 + 4) != 0)) && (*(longlong *)(param_1 + 6) != 0))
     && (*(longlong *)(param_1 + 2) != 0)) {
    plVar2 = *(longlong **)(param_1 + 8);
    in_RAX = (ulonglong)param_1[10];
    plVar1 = plVar2 + in_RAX;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == 0) goto LAB_143003692;
    }
    plVar2 = *(longlong **)(param_1 + 0xc);
    in_RAX = (ulonglong)param_1[0xe];
    plVar1 = plVar2 + in_RAX;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == 0) goto LAB_143003692;
    }
    plVar2 = *(longlong **)(param_1 + 0x14);
    in_RAX = (ulonglong)param_1[0x16];
    plVar1 = plVar2 + in_RAX;
    while( true ) {
      if (plVar2 == plVar1) {
        return CONCAT71((int7)(int3)((uint)param_1[0x16] >> 8),1);
      }
      if (*plVar2 == 0) break;
      plVar2 = plVar2 + 1;
    }
  }
LAB_143003692:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1430036a0 FUN_1430036a0 body=58 status=ok
// SIG undefined FUN_1430036a0(void)

undefined8 FUN_1430036a0(char *param_1)

{
  int iVar1;
  
  if ((*param_1 - 2U & 0xfd) == 0) {
    iVar1 = FUN_143009a20(param_1,0,4);
    if (iVar1 != -1) {
      if (*param_1 == '\x03') {
        *param_1 = '\x02';
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1430036e0 FUN_1430036e0 body=32 status=ok
// SIG undefined FUN_1430036e0(void)

undefined1 FUN_1430036e0(longlong *param_1)

{
  if ((((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) && (0 < (int)param_1[3])) {
    return 1;
  }
  return 0;
}



// FUNCTION 143003700 FUN_143003700 body=129 status=ok
// SIG undefined FUN_143003700(void)

void FUN_143003700(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  (**(code **)(*param_1 + 0x600))();
  plVar1 = (longlong *)UImageSetSettings::GetPrivateStaticClass();
  lVar2 = plVar1[0x1f];
  if (lVar2 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar2 = plVar1[0x1f];
  }
  *(undefined4 *)(param_1 + 0xc2) = *(undefined4 *)(lVar2 + 0x3c);
  FUN_142fea280(param_1);
  if (0.0 < *(float *)(param_1 + 0xc2)) {
    *(undefined4 *)((longlong)param_1 + 0x61c) = 0;
    return;
  }
  FUN_140a5e5a0(param_1);
  return;
}



// FUNCTION 143003790 FUN_143003790 body=1931 status=ok
// SIG undefined FUN_143003790(void)

undefined8 FUN_143003790(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  uint uVar15;
  wchar_t *pwVar16;
  void *pvVar17;
  uint uVar18;
  undefined2 *puVar19;
  int local_res18 [2];
  int local_res20 [2];
  undefined2 *local_158;
  undefined8 local_150;
  wchar_t *local_148;
  undefined8 local_140;
  longlong local_138;
  void *local_130;
  undefined8 local_128;
  undefined4 local_120 [2];
  wchar_t *local_118;
  int local_110;
  undefined4 local_10c;
  wchar_t *local_108;
  int local_100;
  undefined4 local_fc;
  wchar_t *local_f8;
  int local_f0;
  undefined4 local_ec;
  wchar_t *local_e8;
  uint local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 local_c0 [8];
  wchar_t *local_b8;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70 [8];
  longlong local_68;
  longlong *local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 *local_48;
  undefined8 *local_40;
  
  plVar7 = (longlong *)0x0;
  local_158 = (undefined2 *)0x0;
  local_150 = 0;
  cVar4 = FParse::Line(param_2,&local_158,0);
  do {
    if (cVar4 == '\0') {
      if (local_158 != (undefined2 *)0x0) {
        FMemory::Free();
      }
      return 1;
    }
    FString::TrimStartInline(&local_158);
    cVar4 = FString::StartsWith(&local_158,L"Class=",1);
    uVar9 = 0;
    if (cVar4 == '\0') {
      cVar4 = FString::StartsWith(&local_158,L"Version=",1);
      if (cVar4 == '\0') {
        cVar4 = FString::StartsWith(&local_158,L"Asset=",1);
        if (cVar4 != '\0') {
          local_d8 = 0;
          uStack_d0 = 0;
          local_b8 = (wchar_t *)0x0;
          local_b0 = 0;
          uVar15 = (int)local_150 - 1;
          if ((int)local_150 == 0) {
            uVar15 = uVar9;
          }
          if (6 < uVar15) {
            uVar15 = 6;
          }
          uVar8 = (int)local_150 - 1;
          if ((int)local_150 == 0) {
            uVar8 = uVar9;
          }
          uVar9 = uVar15;
          if ((uVar15 < 0x80000006) && (uVar9 = uVar8, 0x80000005 < uVar8)) {
            uVar9 = 0x80000005;
          }
          puVar19 = &DAT_143f3eda8;
          if ((int)local_150 != 0) {
            puVar19 = local_158;
          }
          iVar12 = uVar9 - uVar15;
          local_108 = (wchar_t *)0x0;
          local_fc = 0;
          local_100 = iVar12 + 1;
          if (iVar12 == 0) {
            local_100 = 0;
          }
          if ((0 < local_100) &&
             (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_108,0), pwVar14 = local_108,
             0 < local_100)) {
            wcsncpy(local_108,puVar19 + (int)uVar15,(longlong)iVar12);
            pwVar14[iVar12] = L'\0';
          }
          pvVar17 = (void *)0x0;
          cVar4 = FUN_143009b40(param_1,&local_108,&local_d8,&local_b8);
          if (local_108 != (wchar_t *)0x0) {
            FMemory::Free();
          }
          pwVar14 = local_b8;
          if (cVar4 != '\0') {
            lVar5 = (longlong)(int)local_b0;
            local_90 = 0;
            local_88 = 0;
            local_130 = (void *)0x0;
            local_128._0_4_ = (int)local_b0;
            local_80 = 0;
            uStack_78 = 0xffffffff;
            if ((int)local_b0 == 0) {
              local_50 = (int)local_b0;
              local_4c = 0;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_130,local_b0 & 0xffffffff,0);
              pvVar17 = local_130;
              _guard_xfg_dispatch_icall_nop(local_130,pwVar14,lVar5 * 2);
              local_50 = (int)local_128;
              local_4c = local_128._4_4_;
            }
            local_a8 = 0;
            local_a0 = 0;
            local_98 = 0;
            local_130 = (void *)0x0;
            local_128 = 0;
            local_58 = pvVar17;
            FUN_1417978e0(&local_a8,&local_58);
            FSoftObjectPath::operator=(&local_90,&local_a8);
            FWeakObjectPtr::operator=(local_c0,0);
            local_48 = &local_d8;
            local_40 = &local_90;
            FUN_142fd8770(param_1 + 0x40,local_70,&local_48,0);
            if (local_88 != 0) {
              FMemory::Free();
            }
            if (plVar7 != (longlong *)0x0) {
              iVar12 = (int)plVar7[3];
              *(int *)(plVar7 + 3) = iVar12 + 1;
              if (*(int *)((longlong)plVar7 + 0x1c) < iVar12 + 1) {
                TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar7 + 2,iVar12);
              }
              puVar2 = (undefined8 *)(plVar7[2] + (longlong)iVar12 * 0x10);
              *puVar2 = local_d8;
              puVar2[1] = uStack_d0;
            }
          }
          goto LAB_143003e9a;
        }
      }
      else {
        uVar15 = (int)local_150 - 1;
        if ((int)local_150 == 0) {
          uVar15 = uVar9;
        }
        if (8 < uVar15) {
          uVar15 = 8;
        }
        uVar8 = (int)local_150 - 1;
        if ((int)local_150 == 0) {
          uVar8 = uVar9;
        }
        uVar9 = uVar15;
        if ((uVar15 < 0x80000008) && (uVar9 = uVar8, 0x80000007 < uVar8)) {
          uVar9 = 0x80000007;
        }
        puVar19 = &DAT_143f3eda8;
        if ((int)local_150 != 0) {
          puVar19 = local_158;
        }
        iVar12 = uVar9 - uVar15;
        local_118 = (wchar_t *)0x0;
        local_10c = 0;
        local_110 = iVar12 + 1;
        if (iVar12 == 0) {
          local_110 = 0;
        }
        if ((0 < local_110) &&
           (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0), pwVar14 = local_118,
           0 < local_110)) {
          wcsncpy(local_118,puVar19 + (int)uVar15,(longlong)iVar12);
          pwVar14[iVar12] = L'\0';
        }
        cVar4 = FUN_143009d40(param_1,&local_118,local_res20,local_120);
        if (local_118 != (wchar_t *)0x0) {
          FMemory::Free();
        }
        iVar12 = local_res20[0];
        if (cVar4 != '\0') {
          if (*(int *)(param_1 + 0x38) < local_res20[0]) {
            *(int *)(param_1 + 0x38) = local_res20[0];
          }
          if (plVar7 != (longlong *)0x0) {
            iVar10 = (int)plVar7[1];
            *(int *)(plVar7 + 1) = iVar10 + 1;
            if (*(int *)((longlong)plVar7 + 0xc) < iVar10 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar7,iVar10);
            }
            lVar5 = *plVar7;
            *(int *)(lVar5 + (longlong)iVar10 * 8) = iVar12;
            *(undefined4 *)(lVar5 + (longlong)iVar10 * 8 + 4) = local_120[0];
          }
        }
      }
    }
    else {
      uVar15 = (int)local_150 - 1;
      if ((int)local_150 == 0) {
        uVar15 = uVar9;
      }
      if (6 < uVar15) {
        uVar15 = 6;
      }
      uVar8 = (int)local_150 - 1;
      if ((int)local_150 == 0) {
        uVar8 = uVar9;
      }
      uVar9 = uVar15;
      if ((uVar15 < 0x80000006) && (uVar9 = uVar8, 0x80000005 < uVar8)) {
        uVar9 = 0x80000005;
      }
      puVar19 = &DAT_143f3eda8;
      if ((int)local_150 != 0) {
        puVar19 = local_158;
      }
      iVar10 = uVar9 - uVar15;
      local_f8 = (wchar_t *)0x0;
      local_ec = 0;
      iVar12 = iVar10 + 1;
      if (iVar10 == 0) {
        iVar12 = 0;
      }
      pwVar14 = local_f8;
      local_f0 = iVar12;
      if ((0 < iVar12) &&
         (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_f8,0), iVar12 = local_f0,
         pwVar14 = local_f8, 0 < local_f0)) {
        wcsncpy(local_f8,puVar19 + (int)uVar15,(longlong)iVar10);
        pwVar14[iVar10] = L'\0';
      }
      pwVar6 = (wchar_t *)0x0;
      local_e8 = (wchar_t *)0x0;
      local_dc = 0;
      pwVar13 = L"";
      if (iVar12 != 0) {
        pwVar13 = pwVar14;
      }
      pwVar16 = pwVar6;
      if ((pwVar13 != (wchar_t *)0x0) && (pwVar16 = (wchar_t *)0x0, *pwVar13 != L'\0')) {
        lVar5 = -1;
        do {
          lVar3 = lVar5 + 1;
          lVar5 = lVar5 + 1;
        } while (pwVar13[lVar3] != L'\0');
        local_e0 = (int)lVar5 + 1;
        lVar5 = (longlong)(int)local_e0;
        if (0 < (int)local_e0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_e8,0);
        }
        pwVar6 = local_e8;
        pwVar16 = (wchar_t *)(ulonglong)local_e0;
        FGenericPlatformString::Memcpy(local_e8,pwVar13,lVar5 * 2);
      }
      uVar9 = (uint)pwVar16;
      if (pwVar14 != (wchar_t *)0x0) {
        FMemory::Free(pwVar14);
      }
      pwVar13 = pwVar6 + (int)uVar9;
      do {
        pwVar14 = pwVar6;
        if (pwVar13 == pwVar6) goto LAB_143003a44;
        pwVar13 = pwVar13 + -1;
      } while (*pwVar13 != L'.');
      iVar12 = (int)((longlong)pwVar13 - (longlong)pwVar6 >> 1);
      if (-1 < iVar12) {
        uVar8 = 0;
        uVar15 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar15 = uVar8;
        }
        if (iVar12 < (int)uVar15) {
          uVar15 = iVar12 + 0x80000000;
          uVar18 = uVar9 - 1;
          if (uVar9 == 0) {
            uVar18 = uVar8;
          }
          if (iVar12 + 1U < uVar18) {
            uVar18 = iVar12 + 1U;
          }
          uVar11 = uVar9 - 1;
          if (uVar9 == 0) {
            uVar11 = uVar8;
          }
          uVar8 = uVar18;
          if ((uVar18 <= uVar15) && (uVar8 = uVar11, uVar15 < uVar11)) {
            uVar8 = uVar15;
          }
          local_148 = (wchar_t *)0x0;
          pwVar13 = L"";
          if (uVar9 != 0) {
            pwVar13 = pwVar6;
          }
          iVar12 = uVar8 - uVar18;
          uVar9 = iVar12 + 1;
          if (iVar12 == 0) {
            uVar9 = 0;
          }
          local_140 = (ulonglong)uVar9;
          pwVar14 = (wchar_t *)0x0;
          if (0 < (int)uVar9) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
            pwVar14 = local_148;
            uVar9 = (uint)local_140;
            if (0 < (int)(uint)local_140) {
              wcsncpy(local_148,pwVar13 + (int)uVar18,(longlong)iVar12);
              pwVar14[iVar12] = L'\0';
            }
          }
          if (pwVar6 != (wchar_t *)0x0) {
            FMemory::Free(pwVar6);
          }
          local_dc = local_140._4_4_;
          local_148 = (wchar_t *)0x0;
          local_140 = 0;
        }
      }
LAB_143003a44:
      pwVar6 = L"";
      if (uVar9 != 0) {
        pwVar6 = pwVar14;
      }
      FName::FName(&local_138,pwVar6,1);
      FLinkerLoad::FindNewNameForClass(&local_68,local_138,0);
      plVar1 = (longlong *)(param_1 + 0x90);
      local_c8 = 0;
      if (local_68 != 0) {
        local_138 = local_68;
      }
      if (*(int *)(param_1 + 0x98) != *(int *)(param_1 + 0xc4)) {
        lVar5 = *(longlong *)(param_1 + 0xd0);
        if (*(longlong *)(param_1 + 0xd0) == 0) {
          lVar5 = param_1 + 200;
        }
        iVar12 = *(int *)(lVar5 + ((longlong)((int)((ulonglong)local_138 >> 0x20) + (int)local_138)
                                  & (longlong)*(int *)(param_1 + 0xd8) - 1U) * 4);
        if (iVar12 != -1) {
          do {
            plVar7 = (longlong *)((longlong)iVar12 * 0x30 + *plVar1);
            if (*plVar7 == local_138) {
              if ((iVar12 != -1) && (plVar7 != (longlong *)0x0)) goto LAB_143003b38;
              break;
            }
            iVar12 = (int)plVar7[5];
          } while (iVar12 != -1);
        }
      }
      local_60 = &local_138;
      FUN_142fd7f40(plVar1,local_res18,&local_60,0);
      plVar7 = (longlong *)((longlong)local_res18[0] * 0x30 + *plVar1);
LAB_143003b38:
      plVar7 = plVar7 + 1;
LAB_143003e9a:
      if (pwVar14 != (wchar_t *)0x0) {
        FMemory::Free(pwVar14);
      }
    }
    cVar4 = FParse::Line(param_2,&local_158,0);
  } while( true );
}



// FUNCTION 143003f20 FUN_143003f20 body=90 status=ok
// SIG undefined FUN_143003f20(void)

void FUN_143003f20(longlong *param_1)

{
  if ((longlong *)param_1[0x23] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x23] + 0x600))();
  }
  (**(code **)(*param_1 + 0x260))(param_1);
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::Reset
            (param_1 + 0x2f);
  *(int *)((longlong)param_1 + 0x1cc) = *(int *)((longlong)param_1 + 0x1cc) + 1;
  param_1[0x44] = -1;
  if (*(int *)((longlong)param_1 + 0x1cc) == -1) {
    *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  }
  return;
}



// FUNCTION 143003f80 FUN_143003f80 body=243 status=ok
// SIG undefined FUN_143003f80(void)

ulonglong FUN_143003f80(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  
  plVar3 = *(longlong **)(param_2 + 0x10);
  if (*(longlong **)(param_1 + 0x10) == *(longlong **)(param_2 + 0x10)) {
    if (*(int *)(param_1 + 0x40) == 0) {
      iVar1 = *(int *)(param_1 + 0x68);
      plVar4 = (longlong *)(longlong)iVar1;
      plVar3 = plVar4;
      if (iVar1 != *(int *)(param_2 + 0x68)) goto LAB_14300406c;
      if (0 < iVar1) {
        puVar6 = *(undefined8 **)(param_2 + 0x60);
        lVar7 = 0;
        lVar9 = *(longlong *)(param_1 + 0x60) - (longlong)puVar6;
        do {
          plVar3 = (longlong *)*puVar6;
          if (*(longlong **)(lVar9 + (longlong)puVar6) != plVar3) goto LAB_14300406c;
          lVar7 = lVar7 + 1;
          puVar6 = puVar6 + 9;
        } while (lVar7 < (longlong)plVar4);
      }
    }
    else {
      plVar3 = (longlong *)(longlong)*(int *)(param_1 + 0x40);
      if (*(int *)(param_1 + 0x40) != 0) {
        plVar8 = *(longlong **)(param_1 + 0x38);
        plVar4 = plVar8 + (longlong)plVar3;
        if (plVar8 != plVar4) {
          plVar2 = *(longlong **)(param_2 + 0x38);
          do {
            if (plVar2 != plVar2 + *(int *)(param_2 + 0x40)) {
              plVar3 = plVar2;
              do {
                if (*plVar3 == *plVar8) goto LAB_14300401b;
                plVar3 = plVar3 + 1;
              } while (plVar3 != plVar2 + *(int *)(param_2 + 0x40));
            }
            puVar5 = *(undefined8 **)(param_2 + 0x48);
            plVar3 = (longlong *)(longlong)*(int *)(param_2 + 0x50);
            puVar6 = puVar5 + (longlong)plVar3;
            if (puVar5 == puVar6) {
LAB_143004010:
              return (ulonglong)plVar3 & 0xffffffffffffff00;
            }
            plVar3 = (longlong *)*plVar8;
            while ((longlong *)*puVar5 != plVar3) {
              puVar5 = puVar5 + 1;
              if (puVar5 == puVar6) goto LAB_143004010;
            }
LAB_14300401b:
            plVar8 = plVar8 + 1;
          } while (plVar8 != plVar4);
        }
        return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
      }
    }
    return CONCAT71((int7)((ulonglong)plVar3 >> 8),1);
  }
LAB_14300406c:
  return (ulonglong)plVar3 & 0xffffffffffffff00;
}



// FUNCTION 143004080 FUN_143004080 body=137 status=ok
// SIG undefined FUN_143004080(void)

void FUN_143004080(undefined1 *param_1,longlong *param_2)

{
  longlong *plVar1;
  
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(param_2,0);
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (param_2 != plVar1) {
    if (*param_2 != 0) {
      FMemory::Free();
    }
    *param_2 = *plVar1;
    *plVar1 = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    TArray<unsigned_char,FDefaultAllocator>::ResizeTo(plVar1,0);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 143004110 FUN_143004110 body=132 status=ok
// SIG undefined FUN_143004110(void)

void FUN_143004110(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  
  FUN_142ef74b0();
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  if (lVar1 != 0) {
    *(longlong *)(lVar1 + 0x100) = param_1;
    plVar4 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0x2c8) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x2c8) + 0x488);
    }
    if (plVar4 != (longlong *)0x0) {
      uVar2 = FUN_142dfdf30();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x628))(plVar4,uVar2);
      if (plVar4 != (longlong *)0x0) {
        uVar3 = (**(code **)(*plVar4 + 0x400))(plVar4);
        *(undefined4 *)(lVar1 + 0x128) = uVar3;
      }
    }
    FUN_14301c1c0(lVar1);
    FUN_14301cfb0(lVar1);
  }
  return;
}



// FUNCTION 1430041a0 FUN_1430041a0 body=908 status=ok
// SIG undefined FUN_1430041a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_1430041a0(longlong param_1,char *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined1 auStack_2e8 [32];
  longlong *local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  longlong local_2a8;
  char local_298 [8];
  undefined8 local_290;
  undefined8 local_288;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 local_1e8;
  uint local_1e4;
  undefined1 local_1d8 [8];
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined1 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  uint local_124;
  undefined1 local_118 [192];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_2e8;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  plVar5 = *(longlong **)(param_4 + 0x28);
  lVar9 = *(longlong *)(param_4 + 0x18);
  local_2c0 = 0;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  bVar6 = false;
  plVar11 = param_3;
  if (lVar9 != DAT_1469e9958) {
    plVar11 = *(longlong **)(param_4 + 0x28);
    lVar9 = *(longlong *)(param_4 + 0x18);
    if (plVar11 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
      UNLOCK();
    }
    bVar6 = true;
    if (lVar9 != DAT_1469ea510) {
      bVar7 = false;
      goto LAB_1430042af;
    }
  }
  bVar7 = true;
LAB_1430042af:
  local_2c8 = param_3;
  if ((bVar6) && (plVar11 != (longlong *)0x0)) {
    LOCK();
    plVar1 = plVar11 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar11)(plVar11);
      LOCK();
      piVar2 = (int *)((longlong)plVar11 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar11 + 8))(plVar11,1);
      }
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar11 = plVar5 + 1;
    lVar9 = *plVar11;
    *(int *)plVar11 = (int)*plVar11 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar5)(plVar5);
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
  if (bVar7) {
    FUN_142ef6530(param_1);
    local_1e4 = local_1e4 & 0xffffff00;
    local_298[0] = '\x01';
    local_290 = 0;
    local_268 = 0;
    uStack_260 = 0;
    local_258 = 0;
    uStack_250 = 0;
    local_248 = 0;
    uStack_240 = 0;
    local_238 = 0;
    uStack_230 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_208 = 0;
    uStack_200 = 0;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_288 = 0;
    local_278 = 0;
    local_270 = 0;
    local_218 = 0;
    local_210 = 0;
    local_1e8 = 0x20702;
    FUN_140439160(param_2,local_298);
    FUN_140438c20(local_298);
  }
  else if (*(longlong *)(param_1 + 0x2f8) != 0) {
    uVar10 = FUN_1430068e0(*(longlong *)(param_1 + 0x2f8),local_118,local_2c8,param_4);
    FUN_140439160(param_2,uVar10);
    FUN_140438c20(local_118);
  }
  if (((*param_2 == '\0') && (*(longlong *)(param_1 + 0x2d0) != 0)) &&
     (lVar9 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2d0) + 0x38), lVar9 != 0)) {
    FUN_142f0b330(*(undefined8 *)(param_1 + 0x2d0),1);
    local_2b8 = *(undefined8 *)(param_4 + 0x18);
    uVar4 = *(undefined4 *)(param_4 + 0xc);
    local_2b0 = *(undefined8 *)(param_4 + 0x20);
    local_2a8 = *(longlong *)(param_4 + 0x28);
    if (local_2a8 != 0) {
      LOCK();
      *(int *)(local_2a8 + 8) = *(int *)(local_2a8 + 8) + 1;
      UNLOCK();
    }
    uVar10 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2d0) + 0x38);
    cVar8 = FUN_142ef09f0(uVar10,&local_2b8,0,uVar4);
    if (cVar8 != '\0') {
      local_124 = local_124 & 0xffffff00;
      local_1d8[0] = 1;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = 0;
      uStack_190 = 0;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = 0;
      uStack_170 = 0;
      local_168 = 0;
      uStack_160 = 0;
      local_148 = 0;
      uStack_140 = 0;
      local_138 = 0;
      uStack_130 = 0;
      local_1d0 = 0;
      local_1c8 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_158 = 0;
      local_150 = 0;
      local_128 = 0x20702;
      FUN_140439160(param_2,local_1d8);
      FUN_140438c20(local_1d8);
    }
    FUN_142f0b330(*(undefined8 *)(param_1 + 0x2d0),0);
  }
  return param_2;
}



// FUNCTION 143004530 FUN_143004530 body=393 status=ok
// SIG undefined FUN_143004530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

char * FUN_143004530(longlong param_1,char *param_2,undefined8 param_3,longlong param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined1 local_f8 [192];
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  *param_2 = '\0';
  param_2[8] = '\0';
  param_2[9] = '\0';
  param_2[10] = '\0';
  param_2[0xb] = '\0';
  param_2[0xc] = '\0';
  param_2[0xd] = '\0';
  param_2[0xe] = '\0';
  param_2[0xf] = '\0';
  param_2[0x10] = '\0';
  param_2[0x11] = '\0';
  param_2[0x12] = '\0';
  param_2[0x13] = '\0';
  param_2[0x14] = '\0';
  param_2[0x15] = '\0';
  param_2[0x16] = '\0';
  param_2[0x17] = '\0';
  param_2[0x20] = '\0';
  param_2[0x28] = '\0';
  param_2[0x29] = '\0';
  param_2[0x2a] = '\0';
  param_2[0x2b] = '\0';
  param_2[0x2c] = '\0';
  param_2[0x2d] = '\0';
  param_2[0x2e] = '\0';
  param_2[0x2f] = '\0';
  param_2[0x30] = '\0';
  param_2[0x31] = '\0';
  param_2[0x32] = '\0';
  param_2[0x33] = '\0';
  param_2[0x34] = '\0';
  param_2[0x35] = '\0';
  param_2[0x36] = '\0';
  param_2[0x37] = '\0';
  param_2[0x38] = '\0';
  param_2[0x39] = '\0';
  param_2[0x3a] = '\0';
  param_2[0x3b] = '\0';
  param_2[0x3c] = '\0';
  param_2[0x3d] = '\0';
  param_2[0x3e] = '\0';
  param_2[0x3f] = '\0';
  param_2[0x40] = '\0';
  param_2[0x41] = '\0';
  param_2[0x42] = '\0';
  param_2[0x43] = '\0';
  param_2[0x44] = '\0';
  param_2[0x45] = '\0';
  param_2[0x46] = '\0';
  param_2[0x47] = '\0';
  param_2[0x48] = '\0';
  param_2[0x49] = '\0';
  param_2[0x4a] = '\0';
  param_2[0x4b] = '\0';
  param_2[0x4c] = '\0';
  param_2[0x4d] = '\0';
  param_2[0x4e] = '\0';
  param_2[0x4f] = '\0';
  param_2[0x50] = '\0';
  param_2[0x51] = '\0';
  param_2[0x52] = '\0';
  param_2[0x53] = '\0';
  param_2[0x54] = '\0';
  param_2[0x55] = '\0';
  param_2[0x56] = '\0';
  param_2[0x57] = '\0';
  param_2[0x58] = '\0';
  param_2[0x59] = '\0';
  param_2[0x5a] = '\0';
  param_2[0x5b] = '\0';
  param_2[0x5c] = '\0';
  param_2[0x5d] = '\0';
  param_2[0x5e] = '\0';
  param_2[0x5f] = '\0';
  param_2[0x60] = '\0';
  param_2[0x61] = '\0';
  param_2[0x62] = '\0';
  param_2[99] = '\0';
  param_2[100] = '\0';
  param_2[0x65] = '\0';
  param_2[0x66] = '\0';
  param_2[0x67] = '\0';
  param_2[0x68] = '\0';
  param_2[0x69] = '\0';
  param_2[0x6a] = '\0';
  param_2[0x6b] = '\0';
  param_2[0x6c] = '\0';
  param_2[0x6d] = '\0';
  param_2[0x6e] = '\0';
  param_2[0x6f] = '\0';
  param_2[0x70] = '\0';
  param_2[0x71] = '\0';
  param_2[0x72] = '\0';
  param_2[0x73] = '\0';
  param_2[0x74] = '\0';
  param_2[0x75] = '\0';
  param_2[0x76] = '\0';
  param_2[0x77] = '\0';
  param_2[0x78] = '\0';
  param_2[0x79] = '\0';
  param_2[0x7a] = '\0';
  param_2[0x7b] = '\0';
  param_2[0x7c] = '\0';
  param_2[0x7d] = '\0';
  param_2[0x7e] = '\0';
  param_2[0x7f] = '\0';
  param_2[0x80] = '\0';
  param_2[0x81] = '\0';
  param_2[0x82] = '\0';
  param_2[0x83] = '\0';
  param_2[0x84] = '\0';
  param_2[0x85] = '\0';
  param_2[0x86] = '\0';
  param_2[0x87] = '\0';
  param_2[0x88] = '\0';
  param_2[0x89] = '\0';
  param_2[0x8a] = '\0';
  param_2[0x8b] = '\0';
  param_2[0x8c] = '\0';
  param_2[0x8d] = '\0';
  param_2[0x8e] = '\0';
  param_2[0x8f] = '\0';
  param_2[0x90] = '\0';
  param_2[0x91] = '\0';
  param_2[0x92] = '\0';
  param_2[0x93] = '\0';
  param_2[0x94] = '\0';
  param_2[0x95] = '\0';
  param_2[0x96] = '\0';
  param_2[0x97] = '\0';
  param_2[0x98] = '\0';
  param_2[0x99] = '\0';
  param_2[0x9a] = '\0';
  param_2[0x9b] = '\0';
  param_2[0x9c] = '\0';
  param_2[0x9d] = '\0';
  param_2[0x9e] = '\0';
  param_2[0x9f] = '\0';
  param_2[0xa0] = '\0';
  param_2[0xa1] = '\0';
  param_2[0xa2] = '\0';
  param_2[0xa3] = '\0';
  param_2[0xa4] = '\0';
  param_2[0xa5] = '\0';
  param_2[0xa6] = '\0';
  param_2[0xa7] = '\0';
  param_2[0xa8] = '\0';
  param_2[0xa9] = '\0';
  param_2[0xaa] = '\0';
  param_2[0xab] = '\0';
  param_2[0xac] = '\0';
  param_2[0xad] = '\0';
  param_2[0xae] = '\0';
  param_2[0xaf] = '\0';
  *(uint *)(param_2 + 0xb4) = *(uint *)(param_2 + 0xb4) & 0xffffff00;
  param_2[0xb0] = '\x02';
  param_2[0xb1] = '\a';
  param_2[0xb2] = '\x02';
  param_2[0xb3] = '\0';
  if (*(longlong *)(param_1 + 0x2f8) != 0) {
    uVar2 = FUN_143006b40(*(longlong *)(param_1 + 0x2f8),local_f8);
    FUN_140439160(param_2,uVar2);
    FUN_140438c20(local_f8);
  }
  if ((*param_2 == '\0') && (*(longlong *)(param_1 + 0x2d0) != 0)) {
    lVar3 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2d0) + 0x38);
    if (lVar3 != 0) {
      FUN_142f0b330(*(undefined8 *)(param_1 + 0x2d0),1);
      local_118 = *(undefined8 *)(param_4 + 0x18);
      uVar1 = *(undefined4 *)(param_4 + 0xc);
      local_110 = *(undefined8 *)(param_4 + 0x20);
      local_108 = *(longlong *)(param_4 + 0x28);
      if (local_108 != 0) {
        LOCK();
        *(int *)(local_108 + 8) = *(int *)(local_108 + 8) + 1;
        UNLOCK();
      }
      uVar2 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x2d0) + 0x38);
      FUN_142ef09f0(uVar2,&local_118,1,uVar1);
      FUN_142f0b330(*(undefined8 *)(param_1 + 0x2d0),0);
    }
  }
  return param_2;
}



// FUNCTION 1430046c0 FUN_1430046c0 body=70 status=ok
// SIG undefined FUN_1430046c0(void)

void FUN_1430046c0(longlong param_1)

{
  char cVar1;
  
  UUserWidget::NativeTick();
  cVar1 = FUN_142ef5430(param_1);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x2f8) != 0)) {
    cVar1 = FUN_142103f00();
    if (cVar1 == '\0') {
      FUN_14301cfb0(*(undefined8 *)(param_1 + 0x2f8));
      return;
    }
  }
  return;
}



// FUNCTION 143004710 FUN_143004710 body=395 status=ok
// SIG undefined FUN_143004710(void)

void FUN_143004710(longlong param_1,undefined4 *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  char cVar7;
  undefined4 uVar8;
  ushort uVar9;
  longlong *plVar10;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (((*(int *)(param_1 + 0x3c8) != 0) && (*(longlong **)(param_1 + 0x3c0) != (longlong *)0x0)) &&
     (cVar7 = (**(code **)(**(longlong **)(param_1 + 0x3c0) + 0x18))(), cVar7 != '\0')) {
    if (*(int *)(param_1 + 0x3c8) == 0) {
      plVar10 = (longlong *)0x0;
    }
    else {
      plVar10 = *(longlong **)(param_1 + 0x3c0);
    }
    uVar8 = (**(code **)(*plVar10 + 0x38))();
    *(undefined4 *)(param_1 + 0x3b8) = uVar8;
  }
  if (*(int *)(param_1 + 0x3b8) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x598) = *param_2;
  *(undefined4 *)(param_1 + 0x59c) = param_2[1];
  if (*(int *)(param_1 + 0x3b8) == 3) {
    uVar9 = *(ushort *)(param_3 + 8) & 0xc;
    if ((*(ushort *)(param_3 + 8) & 3) == 0) {
      if (uVar9 == 0) goto LAB_1430047a7;
    }
    else {
      if (uVar9 == 0) {
        (**(code **)(*(longlong *)(param_1 + 0x420) + 0x20))();
      }
      local_res8 = *param_2;
      local_resc = param_2[1];
      (**(code **)(*(longlong *)(param_1 + 0x420) + 0x28))
                ((longlong *)(param_1 + 0x420),&local_res8);
    }
    (**(code **)(*(longlong *)(param_1 + 0x420) + 0x30))((longlong *)(param_1 + 0x420),1);
  }
  else {
LAB_1430047a7:
    local_res20 = *param_2;
    local_res24 = param_2[1];
    FUN_143016330(param_1,&local_res20,1);
  }
  FUN_142fffff0(param_1 + 0x428,local_18,param_2);
  uVar8 = param_2[1];
  uVar4 = *(undefined4 *)(param_3 + 0xc);
  uVar5 = *param_2;
  *(undefined1 *)(param_1 + 0x613) = 1;
  *(undefined4 *)(param_1 + 0x5b4) = uVar8;
  *(undefined4 *)(param_1 + 0x5b0) = uVar5;
  *(undefined4 *)(param_1 + 0x5b8) = uVar4;
  FUN_1419bb590(param_1);
  plVar10 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_10 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar10 + 0xc);
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



// FUNCTION 1430048a0 FUN_1430048a0 body=814 status=ok
// SIG undefined FUN_1430048a0(void)

byte FUN_1430048a0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  undefined8 uVar8;
  bool bVar9;
  byte local_res8 [8];
  longlong local_res10;
  
  bVar9 = *(longlong *)(param_1 + 0x20) != 0;
  local_res8[0] = 0;
  if ((*(byte *)(param_2 + 5) & 2) == 0) {
    plVar1 = (longlong *)param_2[1];
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) & 0xf4;
    bVar9 = (bool)(local_res8[0] >> 3 & 1);
    *(byte *)(param_1 + 0x29) =
         *(byte *)(param_1 + 0x29) |
         ((local_res8[0] & 2) * '\x02' | local_res8[0] & 1) * '\x02' | local_res8[0] >> 2 & 1;
    *(byte *)(param_1 + 0x28) = local_res8[0] >> 4;
  }
  else {
    bVar6 = *(byte *)(param_1 + 0x29);
    bVar5 = bVar6 >> 1 & 1;
    bVar7 = bVar5 | 2;
    if ((bVar6 & 8) == 0) {
      bVar7 = bVar5;
    }
    bVar5 = bVar7 | 4;
    if ((bVar6 & 1) == 0) {
      bVar5 = bVar7;
    }
    local_res8[0] = bVar5 | 8;
    if (*(longlong *)(param_1 + 0x20) == 0) {
      local_res8[0] = bVar5;
    }
    local_res8[0] = local_res8[0] | *(char *)(param_1 + 0x28) << 4;
    plVar1 = (longlong *)param_2[1];
    if ((byte *)plVar1[1] < (byte *)*plVar1 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res8,1);
    }
    else {
      local_res8[0] = *(byte *)*plVar1;
      *plVar1 = *plVar1 + 1;
    }
  }
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0xc,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1 + 0xc,4);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 0x34,1);
  }
  else {
    *(undefined1 *)(param_1 + 0x34) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  puVar2 = (undefined4 *)(param_1 + 0x2c);
  puVar4 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,puVar2,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,puVar2,4);
    }
  }
  else {
    *puVar2 = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar3 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x30),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x30) = *puVar3;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  if ((*(byte *)(param_1 + 0x29) & 2) == 0) {
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      *(undefined4 *)(param_1 + 0x18) = 1;
    }
  }
  else {
    puVar2 = (undefined4 *)(param_1 + 0x18);
    puVar4 = *(undefined4 **)param_2[1];
    if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,puVar2,4);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,puVar2,4);
      }
    }
    else {
      *puVar2 = *puVar4;
      *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    }
  }
  local_res10 = *(longlong *)(param_1 + 0x20);
  uVar8 = FUN_1428dfc70();
  bVar6 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar8,&local_res10,0);
  *(longlong *)(param_1 + 0x20) = local_res10;
  if ((((*(byte *)(param_2 + 5) & 1) == 0) || (bVar9 == false)) || (local_res10 != 0)) {
    bVar7 = 0;
  }
  else {
    bVar7 = 1;
  }
  local_res10 = *(longlong *)(param_1 + 0x10);
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | bVar7;
  uVar8 = FUN_1430228e0();
  bVar7 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar8,&local_res10,0);
  *(longlong *)(param_1 + 0x10) = local_res10;
  return bVar7 & bVar6 & 1;
}



// FUNCTION 143004bd0 FUN_143004bd0 body=167 status=ok
// SIG undefined FUN_143004bd0(void)

void FUN_143004bd0(undefined4 *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
    if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_2,param_1,4);
    }
  }
  else {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar2 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    (**(code **)(*param_2 + 0x50))(param_2,param_1 + 1,1);
  }
  else {
    *(undefined1 *)(param_1 + 1) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
  *param_4 = 1;
  return;
}



// FUNCTION 143004c80 FUN_143004c80 body=277 status=ok
// SIG undefined FUN_143004c80(void)

void FUN_143004c80(longlong *param_1,longlong *param_2,undefined8 param_3,undefined1 *param_4)

{
  uint uVar1;
  longlong *plVar2;
  uint uVar3;
  uint uVar4;
  char local_res8 [8];
  ushort local_res10 [12];
  
  local_res8[0] = 0 < (int)param_1[1];
  (**(code **)(*param_2 + 0x58))(param_2,local_res8,1);
  if (local_res8[0] != '\0') {
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      local_res10[0] = *(ushort *)(param_1 + 1);
    }
    else {
      local_res10[0] = 0;
    }
    plVar2 = (longlong *)param_2[1];
    if ((ushort *)plVar2[1] < (ushort *)*plVar2 + 1) {
      (**(code **)(*param_2 + 0x50))(param_2,local_res10,2);
      if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
        FArchive::ByteSwap(param_2,local_res10,2);
      }
    }
    else {
      local_res10[0] = *(ushort *)*plVar2;
      *plVar2 = *plVar2 + 2;
    }
    if ((*(byte *)(param_2 + 5) & 1) != 0) {
      uVar1 = *(uint *)(param_1 + 1);
      uVar3 = (uint)local_res10[0];
      uVar4 = (uint)local_res10[0];
      if ((int)uVar1 < (int)uVar3) {
        *(uint *)(param_1 + 1) = (uint)local_res10[0];
        if (*(int *)((longlong)param_1 + 0xc) < (int)(uint)local_res10[0]) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(param_1);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)(int)uVar1 + *param_1),0,(longlong)(int)(uVar4 - uVar1));
      }
      else if (((int)uVar3 < (int)uVar1) && (uVar3 != uVar1)) {
        *(uint *)(param_1 + 1) = uVar4;
        TArray<unsigned_char,FDefaultAllocator>::ResizeShrink(param_1);
      }
    }
    (**(code **)(*param_2 + 0x50))(param_2,*param_1,(longlong)(int)param_1[1]);
  }
  *param_4 = 1;
  return;
}


