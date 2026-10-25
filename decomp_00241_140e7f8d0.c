// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e7f8d0 FUN_140e7f8d0 body=66 status=ok
// SIG undefined FUN_140e7f8d0(void)

longlong FUN_140e7f8d0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (((*(longlong *)(lVar1 + 0x10) != 0) && (*(longlong *)(lVar1 + 0x20) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x70) == param_2)) break;
    lVar1 = lVar1 + 0x40;
  }
  return *(longlong *)(lVar1 + 0x10);
}



// FUNCTION 140e7f920 FUN_140e7f920 body=76 status=ok
// SIG undefined FUN_140e7f920(void)

undefined8 FUN_140e7f920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xb0);
  lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar2;
  do {
    if (lVar2 == lVar3) {
      return 0;
    }
    if (*(longlong *)(lVar2 + 0x10) != 0) {
      for (lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x20) + 0x10); lVar1 != 0;
          lVar1 = *(longlong *)(lVar1 + 0x30)) {
        if (lVar1 == param_2) {
          return *(undefined8 *)(lVar2 + 0x10);
        }
      }
    }
    lVar2 = lVar2 + 0x40;
  } while( true );
}



// FUNCTION 140e7f970 FUN_140e7f970 body=55 status=ok
// SIG undefined FUN_140e7f970(void)

undefined8 FUN_140e7f970(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x20) == param_2) break;
    lVar1 = lVar1 + 0x40;
  }
  return *(undefined8 *)(lVar1 + 0x28);
}



// FUNCTION 140e7f9b0 FUN_140e7f9b0 body=55 status=ok
// SIG undefined FUN_140e7f9b0(void)

ulonglong FUN_140e7f9b0(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  
  if (((*(char *)(param_1 + 0x10b9) != '\0') && (*(longlong *)(param_1 + 0x468) != 0)) &&
     (plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x468) + 0x528), plVar1 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140e7f9d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar1 + 0x778))(plVar1);
    return uVar2;
  }
  return (ulonglong)*(uint *)(param_1 + 0x1708);
}



// FUNCTION 140e7f9f0 FUN_140e7f9f0 body=8 status=ok
// SIG undefined FUN_140e7f9f0(void)

undefined1 FUN_140e7f9f0(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x170c);
}



// FUNCTION 140e7fa00 FUN_140e7fa00 body=7 status=ok
// SIG undefined FUN_140e7fa00(void)

undefined4 FUN_140e7fa00(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1710);
}



// FUNCTION 140e7fa10 FUN_140e7fa10 body=9 status=ok
// SIG undefined FUN_140e7fa10(void)

undefined4 FUN_140e7fa10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1714);
}



// FUNCTION 140e7fa20 FUN_140e7fa20 body=9 status=ok
// SIG undefined FUN_140e7fa20(void)

undefined4 FUN_140e7fa20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1718);
}



// FUNCTION 140e7fa30 FUN_140e7fa30 body=9 status=ok
// SIG undefined FUN_140e7fa30(void)

undefined4 FUN_140e7fa30(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x171c);
}



// FUNCTION 140e7fa40 FUN_140e7fa40 body=35 status=ok
// SIG undefined FUN_140e7fa40(void)

byte FUN_140e7fa40(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(byte *)((ulonglong)param_2 * 0xf8 + 0x38 + *param_1) >> 3 & 1;
  }
  return 0;
}



// FUNCTION 140e7fa70 FUN_140e7fa70 body=9 status=ok
// SIG undefined FUN_140e7fa70(void)

undefined4 FUN_140e7fa70(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1720);
}



// FUNCTION 140e7fa80 FUN_140e7fa80 body=9 status=ok
// SIG undefined FUN_140e7fa80(void)

undefined4 FUN_140e7fa80(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1724);
}



// FUNCTION 140e7fa90 FUN_140e7fa90 body=8 status=ok
// SIG undefined FUN_140e7fa90(void)

undefined1 FUN_140e7fa90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10f2);
}



// FUNCTION 140e7fad0 FUN_140e7fad0 body=9 status=ok
// SIG undefined FUN_140e7fad0(void)

undefined4 FUN_140e7fad0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1728);
}



// FUNCTION 140e7fae0 FUN_140e7fae0 body=9 status=ok
// SIG undefined FUN_140e7fae0(void)

undefined4 FUN_140e7fae0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x172c);
}



// FUNCTION 140e7faf0 FUN_140e7faf0 body=43 status=ok
// SIG undefined FUN_140e7faf0(void)

undefined8 * FUN_140e7faf0(longlong param_1,undefined8 *param_2,longlong param_3)

{
  *param_2 = 0;
  if (param_3 == *(longlong *)(param_1 + 0x18)) {
    FUN_1409baf50(param_2,*(undefined4 *)(param_1 + 0xa4));
  }
  return param_2;
}



// FUNCTION 140e7fb20 FUN_140e7fb20 body=8 status=ok
// SIG undefined FUN_140e7fb20(void)

undefined1 FUN_140e7fb20(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10f1);
}



// FUNCTION 140e7fb30 FUN_140e7fb30 body=8 status=ok
// SIG undefined FUN_140e7fb30(void)

undefined1 FUN_140e7fb30(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x175d);
}



// FUNCTION 140e7fb40 GetDefeatState body=8 status=ok
// SIG undefined GetDefeatState(void)

undefined1 ASBZPlayerCharacter::GetDefeatState(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1730);
}



// FUNCTION 140e7fb50 FUN_140e7fb50 body=529 status=ok
// SIG undefined FUN_140e7fb50(void)

uint FUN_140e7fb50(undefined8 param_1,longlong *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  ushort *puVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ushort *puVar9;
  ulonglong uVar10;
  undefined8 local_res10;
  ushort *local_28;
  int local_20;
  
  uVar8 = 0;
  if (param_2 == (longlong *)0x0) {
    return 0;
  }
  uVar4 = FUN_14301f8f0();
  lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
  if (lVar5 != 0) {
    local_res10 = *(undefined8 *)(*(longlong *)(lVar5 + 0x208) + 0x18);
    FName::ToString(&local_res10,&local_28);
    puVar9 = local_28;
    puVar6 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar6 = local_28;
    }
    uVar2 = FCrc::StrCrc32<wchar_t>(puVar6,0);
    if (puVar9 != (ushort *)0x0) {
      FMemory::Free(puVar9);
    }
    local_res10 = *(undefined8 *)(*(longlong *)(lVar5 + 0x210) + 0x18);
    FName::ToString(&local_res10,&local_28);
    puVar9 = local_28;
    puVar6 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar6 = local_28;
    }
    uVar3 = FCrc::StrCrc32<wchar_t>(puVar6,uVar2);
    if (puVar9 != (ushort *)0x0) {
      FMemory::Free(puVar9);
    }
    plVar7 = *(longlong **)(lVar5 + 0x220);
    uVar10 = (longlong)*(int *)(lVar5 + 0x228) & 0x1fffffffffffffff;
    if (plVar7 + *(int *)(lVar5 + 0x228) < plVar7) {
      uVar10 = uVar8;
    }
    if (uVar10 != 0) {
      do {
        local_res10 = *(undefined8 *)(*plVar7 + 0x18);
        FName::ToString(&local_res10,&local_28);
        uVar3 = ~uVar3;
        puVar9 = &DAT_143f3eda8;
        if (local_20 != 0) {
          puVar9 = local_28;
        }
        uVar1 = *puVar9;
        while (uVar1 != 0) {
          puVar9 = puVar9 + 1;
          uVar3 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(byte)((byte)uVar3 ^ (byte)uVar1) * 4) ^
                  uVar3 >> 8;
          uVar3 = *(uint *)(&DAT_1464aaab0 + (ulonglong)((uVar1 >> 8 ^ uVar3) & 0xff) * 4) ^
                  uVar3 >> 8;
          uVar3 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar3 >> 8;
          uVar3 = *(uint *)(&DAT_1464aaab0 + (ulonglong)(uVar3 & 0xff) * 4) ^ uVar3 >> 8;
          uVar1 = *puVar9;
        }
        uVar3 = ~uVar3;
        if (local_28 != (ushort *)0x0) {
          FMemory::Free(local_28);
        }
        plVar7 = plVar7 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar10);
    }
    return uVar3;
  }
  return 0;
}



// FUNCTION 140e7fd70 FUN_140e7fd70 body=55 status=ok
// SIG undefined FUN_140e7fd70(void)

undefined8 FUN_140e7fd70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x20) == param_2) break;
    lVar1 = lVar1 + 0x40;
  }
  return *(undefined8 *)(lVar1 + 0x10);
}



// FUNCTION 140e7fdb0 FUN_140e7fdb0 body=174 status=ok
// SIG undefined FUN_140e7fdb0(void)

void FUN_140e7fdb0(longlong param_1,longlong param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *(longlong *)(param_1 + 0xb0);
  lVar4 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar3;
  do {
    if (lVar3 == lVar4) {
      return;
    }
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      for (lVar2 = *(longlong *)(*(longlong *)(lVar3 + 0x20) + 0x10); lVar2 != 0;
          lVar2 = *(longlong *)(lVar2 + 0x30)) {
        if (lVar2 == param_2) {
          iVar1 = (int)param_3[1];
          *(int *)(param_3 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_3 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_3,iVar1);
          }
          *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar3 + 0x10);
          break;
        }
      }
    }
    lVar3 = lVar3 + 0x40;
  } while( true );
}



// FUNCTION 140e7fe60 FUN_140e7fe60 body=122 status=ok
// SIG undefined FUN_140e7fe60(void)

undefined8 FUN_140e7fe60(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x848);
  if (lVar1 != 0) {
    lVar3 = FUN_1413f82e0();
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
                    /* WARNING: Could not recover jumptable at 0x000140e7fec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*(longlong *)(lVar1 + 0xd80) + 0x18))();
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140e7fee0 FUN_140e7fee0 body=8 status=ok
// SIG undefined FUN_140e7fee0(void)

undefined8 FUN_140e7fee0(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x2a8);
}



// FUNCTION 140e7fef0 FUN_140e7fef0 body=210 status=ok
// SIG undefined FUN_140e7fef0(void)

ulonglong FUN_140e7fef0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *local_18;
  undefined8 local_10;
  
  lVar3 = UCableComponent::GetAttachedActor();
  uVar4 = 0;
  if (lVar3 != 0) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1407c7b00(lVar3,&local_18,0,0);
    uVar4 = (ulonglong)(int)local_10;
    plVar1 = local_18 + uVar4;
    for (plVar7 = local_18; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      lVar3 = *plVar7;
      if (lVar3 != 0) {
        uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar5);
        uVar4 = 0;
        if (plVar6 != (longlong *)0x0) {
          bVar2 = (**(code **)(*plVar6 + 0x10))(plVar6,param_2);
          if (local_18 != (longlong *)0x0) {
            FMemory::Free();
          }
          return (ulonglong)bVar2;
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      uVar4 = FMemory::Free(local_18);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 140e7ffd0 FUN_140e7ffd0 body=951 status=ok
// SIG undefined FUN_140e7ffd0(void)

void FUN_140e7ffd0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_1468713b0) && (_Init_thread_header(&DAT_1468713b0), DAT_1468713b0 == -1)) {
    uVar1 = FUN_1414b4770();
    FUN_1414b4770();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"Status",1);
    DAT_1468713a8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468713b0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468713a8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468713a8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468713a8 + 0x30));
  }
  if ((*piVar5 < DAT_1468713c0) && (_Init_thread_header(&DAT_1468713c0), DAT_1468713c0 == -1)) {
    uVar1 = FUN_1414b4770();
    FUN_1414b4770();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PartnerCharacter",1);
    DAT_1468713b8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468713c0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468713b8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468713b8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468713b8 + 0x30));
  }
  if ((*piVar5 < DAT_1468713d0) && (_Init_thread_header(&DAT_1468713d0), DAT_1468713d0 == -1)) {
    uVar1 = FUN_1414b4770();
    FUN_1414b4770();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PartnerStance",1);
    DAT_1468713c8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468713d0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468713c8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468713c8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468713c8 + 0x30));
  }
  if ((*piVar5 < DAT_1468713e0) && (_Init_thread_header(&DAT_1468713e0), DAT_1468713e0 == -1)) {
    uVar1 = FUN_1414b4770();
    FUN_1414b4770();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PartnerInvOffered",1);
    DAT_1468713d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468713e0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468713d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468713d8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468713d8 + 0x30));
  }
  if ((*piVar5 < DAT_1468713f0) && (_Init_thread_header(&DAT_1468713f0), DAT_1468713f0 == -1)) {
    uVar1 = FUN_1414b4770();
    FUN_1414b4770();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PartnerCashOffered",1);
    DAT_1468713e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468713f0);
  }
  if (0 < *(int *)(DAT_1468713e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468713e8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468713e8 + 0x30));
  }
  return;
}



// FUNCTION 140e80390 FUN_140e80390 body=232 status=ok
// SIG undefined FUN_140e80390(void)

void FUN_140e80390(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140cb77e0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146871650) && (_Init_thread_header(&DAT_146871650), DAT_146871650 == -1))
  {
    uVar1 = FUN_1414bbaa0();
    FUN_1414bbaa0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumSpectatablePlayers",1);
    DAT_146871648 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871650);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146871648 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146871648 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146871648 + 0x30));
  }
  return;
}



// FUNCTION 140e80480 FUN_140e80480 body=232 status=ok
// SIG undefined FUN_140e80480(void)

void FUN_140e80480(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_140e4f2c0();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146871400) && (_Init_thread_header(&DAT_146871400), DAT_146871400 == -1))
  {
    uVar1 = FUN_1414c1900();
    FUN_1414c1900();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ArmAppearanceState",1);
    DAT_1468713f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146871400);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_1468713f8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_1468713f8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468713f8 + 0x30));
  }
  return;
}



// FUNCTION 140e80570 FUN_140e80570 body=109 status=ok
// SIG undefined FUN_140e80570(void)

undefined8 FUN_140e80570(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = (**(code **)(*param_1 + 0x148))();
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 400), lVar2 != 0)) {
    lVar3 = FUN_14141f270();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = FUN_14244f490(lVar2,0);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140e80600 FUN_140e80600 body=72 status=ok
// SIG undefined FUN_140e80600(void)

float FUN_140e80600(longlong *param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  
  lVar3 = *param_1;
  lVar2 = (longlong)(int)param_1[1] * 0xf8 + lVar3;
  fVar1 = -1.0;
  for (; lVar3 != lVar2; lVar3 = lVar3 + 0xf8) {
    fVar4 = fVar1;
    if ((*(longlong *)(lVar3 + 8) != 0) &&
       (fVar4 = *(float *)(*(longlong *)(lVar3 + 8) + 0x580), fVar4 <= fVar1)) {
      fVar4 = fVar1;
    }
    fVar1 = fVar4;
  }
  return fVar1;
}



// FUNCTION 140e80650 FUN_140e80650 body=461 status=ok
// SIG undefined FUN_140e80650(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_140e80650(longlong *param_1,float *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  float local_58;
  longlong local_50;
  longlong *local_48;
  undefined8 local_40;
  longlong *local_38;
  undefined8 local_30;
  
  fVar10 = 3.4028235e+38;
  lVar7 = 0;
  local_50 = (**(code **)(*param_1 + 0x148))();
  if (((local_50 == 0) && (param_3 != 0)) &&
     (local_50 = *(longlong *)(param_3 + 0x120), local_50 == 0)) {
    local_50 = FUN_1423407b0(param_3);
  }
  local_48 = &local_50;
  local_40 = FUN_14073d760(&local_50,DAT_146871270);
  plVar3 = local_48;
  local_38 = &local_50;
  local_30 = 0;
  puVar4 = (undefined8 *)FUN_14073d760(local_48,local_40);
  puVar5 = (undefined8 *)FUN_14073d760(local_38,local_30);
  for (; puVar4 != puVar5; puVar4 = (undefined8 *)FUN_14073d760(plVar3,*puVar4)) {
    lVar1 = puVar4[2];
    if (((lVar1 != param_3) && (*(longlong *)(lVar1 + 0x1e8) != 0)) &&
       (*(longlong *)(lVar1 + 0x118) != 0)) {
      lVar2 = *(longlong *)(*(longlong *)(lVar1 + 0x118) + 0x168);
      if (lVar2 == 0) {
        local_64 = DAT_1468b5d98;
        puVar6 = &local_6c;
        local_6c = _DAT_1468b5d90;
      }
      else {
        puVar6 = (undefined8 *)&local_78;
        local_78 = *(undefined4 *)(lVar2 + 0x220);
        local_70 = *(undefined4 *)(lVar2 + 0x228);
        uStack_74 = *(undefined4 *)(lVar2 + 0x224);
      }
      fVar8 = *param_2 - (float)*puVar6;
      local_58 = *(float *)(puVar6 + 1);
      fVar9 = param_2[1] - (float)((ulonglong)*puVar6 >> 0x20);
      fVar8 = fVar9 * fVar9 + fVar8 * fVar8 + (param_2[2] - local_58) * (param_2[2] - local_58);
      if (fVar8 < fVar10) {
        lVar7 = *(longlong *)(lVar1 + 0x1e8);
        fVar10 = fVar8;
      }
    }
  }
  return lVar7;
}



// FUNCTION 140e80820 FUN_140e80820 body=39 status=ok
// SIG undefined FUN_140e80820(void)

void FUN_140e80820(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_140e80650(param_1,param_2,0);
  FUN_140e818f0(param_1,uVar1,1,0);
  return;
}



// FUNCTION 140e80850 FUN_140e80850 body=8 status=ok
// SIG undefined FUN_140e80850(void)

void FUN_140e80850(undefined8 param_1,undefined8 param_2)

{
  FUN_140e80860(param_1,param_2,0);
  return;
}



// FUNCTION 140e80860 FUN_140e80860 body=608 status=ok
// SIG undefined FUN_140e80860(void)

void FUN_140e80860(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  byte bVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  ulonglong uVar13;
  int iVar14;
  longlong *plVar15;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong local_60;
  char local_50;
  
  uVar8 = 0;
  plVar5 = (longlong *)FUN_140e7ebd0();
  plVar15 = (longlong *)*plVar5;
  plVar5 = plVar15 + (int)plVar5[1];
  uVar13 = uVar8;
  for (; plVar15 != plVar5; plVar15 = plVar15 + 1) {
    lVar6 = *plVar15;
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x38) == '\x01')) && (*(longlong *)(lVar6 + 0x50) != 0))
    {
      local_a8 = 0;
      local_b8 = *(undefined4 *)(lVar6 + 0x40);
      uVar13 = 1;
      local_b4 = *(undefined4 *)(lVar6 + 0x44);
      local_b0 = *(undefined4 *)(lVar6 + 0x48);
      local_90 = *(undefined8 *)(lVar6 + 0x50);
      local_a0 = 0;
      local_98 = 0;
      FString::FString(local_88,lVar6 + 0x58);
      FSoftObjectPath::operator=(&local_a8,&local_90);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_78,&local_b8);
      local_50 = '\x01';
      if (local_a0 != 0) {
        FMemory::Free();
      }
      lVar1 = *(longlong *)(param_1 + 0x188);
      iVar10 = *(int *)(param_1 + 400);
      for (lVar7 = lVar1; lVar7 != (longlong)iVar10 * 0x30 + lVar1; lVar7 = lVar7 + 0x30) {
        cVar3 = FSoftObjectPath::operator==(local_68,lVar7 + 0x10);
        if ((cVar3 != '\0') && (local_50 == *(char *)(lVar7 + 0x28))) {
          if ((int)((lVar7 - lVar1) / 0x30) != -1) {
            bVar2 = true;
            goto LAB_140e80986;
          }
          break;
        }
      }
    }
    bVar2 = false;
LAB_140e80986:
    if ((uVar13 != 0) && (uVar13 = 0, local_60 != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar6 + 0x30);
    }
  }
  lVar6 = (longlong)(int)param_2[1];
  if ((int)param_2[1] != 0) {
    uVar13 = uVar8;
    if ((*(longlong *)*param_2 == 0) || (*(char *)(*(longlong *)*param_2 + 0x30) == param_3)) {
      bVar9 = 1;
      uVar11 = uVar8;
    }
    else {
      bVar9 = 0;
      uVar11 = uVar8;
    }
    do {
      iVar10 = (int)uVar11;
      uVar8 = uVar8 + 1;
      uVar11 = (ulonglong)(iVar10 + 1);
      if ((longlong)uVar8 < lVar6) {
        plVar5 = (longlong *)(*param_2 + uVar8 * 8);
        do {
          if ((*plVar5 == 0) || (*(char *)(*plVar5 + 0x30) == param_3)) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
          if (bVar9 != bVar4) break;
          uVar11 = (ulonglong)((int)uVar11 + 1);
          uVar8 = uVar8 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar8 < lVar6);
      }
      iVar14 = (int)uVar11 - iVar10;
      if (bVar9 != 0) {
        iVar12 = (int)uVar13;
        if (iVar12 != iVar10) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar12 * 8),
                     (void *)(*param_2 + (longlong)iVar10 * 8),(longlong)iVar14 << 3);
        }
        uVar13 = (ulonglong)(uint)(iVar12 + iVar14);
      }
      bVar9 = bVar9 ^ 1;
    } while ((longlong)uVar8 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar13;
  }
  return;
}



// FUNCTION 140e80ac0 FUN_140e80ac0 body=15 status=ok
// SIG undefined FUN_140e80ac0(void)

void FUN_140e80ac0(longlong param_1)

{
  *(int *)(param_1 + 0x5b0) = *(int *)(param_1 + 0x5b0) + 1;
  return;
}



// FUNCTION 140e80ad0 FUN_140e80ad0 body=279 status=ok
// SIG undefined FUN_140e80ad0(void)

longlong FUN_140e80ad0(longlong param_1,longlong param_2,longlong param_3,longlong *param_4,
                      longlong *param_5)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar8 = *(longlong *)(param_1 + 0xb0);
  lVar5 = 0;
  bVar2 = false;
  lVar6 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar8;
  lVar3 = lVar5;
  lVar4 = lVar5;
  lVar7 = lVar8;
  if (lVar8 == lVar6) {
LAB_140e80bb8:
    if (param_4 != (longlong *)0x0) {
      *param_4 = lVar4;
    }
    if (param_5 != (longlong *)0x0) {
      *param_5 = lVar3;
    }
    return lVar5;
  }
  do {
    if (bVar2) {
      if ((*(longlong *)(lVar7 + 0x10) != 0) && (*(char *)(lVar7 + 0x18) != '\0')) {
        lVar3 = *(longlong *)(lVar7 + 0x20);
        for (lVar1 = *(longlong *)(lVar3 + 0x10); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
          if (lVar1 == param_2) {
            lVar5 = *(longlong *)(lVar7 + 0x10);
            if (lVar5 == 0) goto joined_r0x000140e80b67;
            goto LAB_140e80bb8;
          }
        }
      }
    }
    else if (*(longlong *)(lVar7 + 0x10) == param_3) {
      lVar4 = *(longlong *)(lVar7 + 0x20);
      bVar2 = true;
    }
    lVar7 = lVar7 + 0x40;
    lVar3 = lVar5;
  } while (lVar7 != lVar6);
joined_r0x000140e80b67:
  do {
    if (lVar8 == lVar6) goto LAB_140e80bb8;
    if (*(longlong *)(lVar8 + 0x10) == param_3) {
      lVar4 = *(longlong *)(lVar8 + 0x20);
      goto LAB_140e80bb8;
    }
    if ((*(longlong *)(lVar8 + 0x10) != 0) && (*(char *)(lVar8 + 0x18) != '\0')) {
      for (lVar7 = *(longlong *)(*(longlong *)(lVar8 + 0x20) + 0x10); lVar7 != 0;
          lVar7 = *(longlong *)(lVar7 + 0x30)) {
        if (lVar7 == param_2) {
          lVar5 = *(longlong *)(lVar8 + 0x10);
          lVar3 = *(longlong *)(lVar8 + 0x20);
          goto LAB_140e80bb8;
        }
      }
    }
    lVar8 = lVar8 + 0x40;
  } while( true );
}



// FUNCTION 140e80bf0 FUN_140e80bf0 body=210 status=ok
// SIG undefined FUN_140e80bf0(void)

int FUN_140e80bf0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong local_18;
  int local_10;
  
  iVar6 = 0;
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  do {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      return iVar6;
    }
    lVar4 = FWeakObjectPtr::Get();
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_140cfdb70();
        if (cVar2 == '\0') {
          if (*(longlong **)(lVar4 + 0x990) != (longlong *)0x0) {
            cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x990) + 0x950))();
            if (cVar2 != '\0') goto LAB_140e80ca4;
          }
        }
        else {
LAB_140e80ca4:
          iVar6 = iVar6 + 1;
        }
      }
    }
    local_10 = local_10 + 1;
  } while( true );
}



// FUNCTION 140e80cd0 FUN_140e80cd0 body=210 status=ok
// SIG undefined FUN_140e80cd0(void)

int FUN_140e80cd0(longlong *param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong local_18;
  int local_10;
  
  iVar6 = 0;
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  while( true ) {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar4 = FWeakObjectPtr::Get();
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = FUN_140cfdb70();
        if ((cVar2 == '\0') && (*(longlong **)(lVar4 + 0x990) != (longlong *)0x0)) {
          cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x990) + 0x950))();
          if (cVar2 == '\0') {
            iVar6 = iVar6 + 1;
          }
        }
      }
    }
    local_10 = local_10 + 1;
  }
  return iVar6;
}



// FUNCTION 140e80db0 FUN_140e80db0 body=49 status=ok
// SIG undefined FUN_140e80db0(void)

int FUN_140e80db0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = *(longlong *)(param_1 + 0xd0);
  iVar3 = 0;
  lVar1 = (longlong)*(int *)(param_1 + 0xd8) * 0x58 + lVar2;
  for (; lVar2 != lVar1; lVar2 = lVar2 + 0x58) {
    iVar3 = iVar3 + *(int *)(lVar2 + 0x30);
  }
  return iVar3;
}



// FUNCTION 140e80df0 FUN_140e80df0 body=12 status=ok
// SIG undefined FUN_140e80df0(void)

void FUN_140e80df0(longlong param_1)

{
  FUN_142ceeb40(*(undefined8 *)(param_1 + 0x4d8));
  return;
}



// FUNCTION 140e80e00 FUN_140e80e00 body=62 status=ok
// SIG undefined FUN_140e80e00(void)

longlong FUN_140e80e00(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (((*(longlong *)(lVar1 + 0x10) == 0) && (*(char *)(lVar1 + 0x18) != '\0')) &&
       (param_2 == *(longlong *)(*(longlong *)(lVar1 + 0x20) + 0x70))) break;
    lVar1 = lVar1 + 0x40;
  }
  return *(longlong *)(lVar1 + 0x20);
}



// FUNCTION 140e80e40 FUN_140e80e40 body=8 status=ok
// SIG undefined FUN_140e80e40(void)

undefined1 FUN_140e80e40(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x175e);
}



// FUNCTION 140e80e50 FUN_140e80e50 body=93 status=ok
// SIG undefined FUN_140e80e50(void)

undefined8 FUN_140e80e50(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_141404840();
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
      return *(undefined8 *)(lVar1 + 0x2388);
    }
  }
  return 0;
}



// FUNCTION 140e80eb0 FUN_140e80eb0 body=89 status=ok
// SIG undefined FUN_140e80eb0(void)

longlong FUN_140e80eb0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_141404840();
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



// FUNCTION 140e80f10 FUN_140e80f10 body=301 status=ok
// SIG undefined FUN_140e80f10(void)

undefined1 FUN_140e80f10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 uVar3;
  undefined4 local_88;
  undefined8 local_84;
  undefined8 local_78;
  longlong local_70 [2];
  undefined4 local_60;
  undefined4 local_5c;
  int local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  undefined1 local_20 [24];
  
  local_5c = 0;
  local_70[0] = 0;
  local_58 = 0;
  local_78 = 0;
  local_70[1] = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  if (param_2 == 0) {
    local_78 = 0;
    local_84 = 0;
  }
  else {
    uVar1 = FSoftObjectPath::FSoftObjectPath(local_20);
    FSoftObjectPath::operator=(&local_78,uVar1);
    FWeakObjectPtr::operator=(&local_88,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_84 = CONCAT44(DAT_1464b56f4,(undefined4)local_84);
    local_58 = DAT_1464b56f4;
    local_5c = (undefined4)local_84;
  }
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_60 = local_88;
  local_38 = local_78;
  FString::FString(local_30,local_70);
  FSoftObjectPath::operator=(&local_50,&local_38);
  uVar1 = FUN_140e7ebd0();
  plVar2 = (longlong *)FUN_140e67e70(uVar1,&local_60);
  if (plVar2 == (longlong *)0x0) {
    if (local_48 != 0) {
      FMemory::Free();
    }
    uVar3 = 8;
  }
  else {
    uVar3 = *(undefined1 *)(*plVar2 + 0x38);
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 140e81040 FUN_140e81040 body=89 status=ok
// SIG undefined FUN_140e81040(void)

undefined1 FUN_140e81040(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  uVar2 = FUN_140e7ebd0();
  plVar3 = (longlong *)FUN_140e67e70(uVar2,param_2);
  if (plVar3 != (longlong *)0x0) {
    uVar1 = *(undefined1 *)(*plVar3 + 0x38);
    if (*(longlong *)(param_2 + 0x18) != 0) {
      FMemory::Free();
    }
    return uVar1;
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return 8;
}



// FUNCTION 140e810a0 FUN_140e810a0 body=30 status=ok
// SIG undefined FUN_140e810a0(void)

undefined8 FUN_140e810a0(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(undefined8 *)((ulonglong)param_2 * 0xf8 + 0x10 + *param_1);
  }
  return 0;
}



// FUNCTION 140e810c0 FUN_140e810c0 body=431 status=ok
// SIG undefined FUN_140e810c0(void)

void FUN_140e810c0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  bool bVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_28;
  int local_20;
  
  plVar5 = (longlong *)0x0;
  *param_2 = 0;
  *param_3 = 0;
  *param_4 = 0;
  plVar8 = plVar5;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0x2388);
  }
  plVar7 = plVar5;
  if (plVar8 != (longlong *)0x0) {
    uVar3 = AGFireballProjectile::GetPrivateStaticClass();
    lVar4 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar3);
    if (lVar4 != 0) {
      plVar7 = *(longlong **)(lVar4 + 0x3b0);
    }
  }
  plVar8 = plVar5;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar8 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0x2388);
  }
  if (plVar8 != (longlong *)0x0) {
    uVar3 = AGFireballProjectile::GetPrivateStaticClass();
    plVar5 = (longlong *)(**(code **)(*plVar8 + 0x628))(plVar8,uVar3);
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  if (plVar5 == (longlong *)0x0) {
    return;
  }
  FUN_1409a7860(plVar7,&local_28);
  if ((0 < local_20) && (plVar8 = (longlong *)*local_28, plVar8 != (longlong *)0x0)) {
    lVar4 = plVar8[0x1f];
    if (lVar4 == 0) {
      (**(code **)(*plVar8 + 0x368))(plVar8);
      lVar4 = plVar8[0x1f];
      if (lVar4 == 0) goto LAB_140e81241;
    }
    lVar6 = UUGPickMutatorsScreenUW::GetPrivateStaticClass();
    lVar1 = *(longlong *)(lVar4 + 0x10);
    if ((*(int *)(lVar1 + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar1 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      uVar3 = FUN_1409a72d0(plVar5,lVar1,*(undefined8 *)(lVar4 + 0x260));
      *param_2 = uVar3;
      uVar3 = FUN_1409a72d0(plVar5,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x270));
      *param_3 = uVar3;
      uVar3 = FUN_1409a72d0(plVar5,*(undefined8 *)(lVar4 + 0x10),*(undefined8 *)(lVar4 + 0x268));
      *param_4 = uVar3;
    }
  }
LAB_140e81241:
  if (local_28 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140e81270 FUN_140e81270 body=416 status=ok
// SIG undefined FUN_140e81270(void)

undefined1 * FUN_140e81270(longlong param_1,undefined1 *param_2)

{
  *param_2 = *(undefined1 *)(param_1 + 0x10f0);
  param_2[1] = *(undefined1 *)(param_1 + 0x10f1);
  param_2[2] = *(undefined1 *)(param_1 + 0x10f2);
  param_2[3] = *(undefined1 *)(param_1 + 0x10f3);
  FUN_140a25aa0(param_2 + 0x10,param_1 + 0x1100);
  *(undefined4 *)(param_2 + 0x610) = *(undefined4 *)(param_1 + 0x1700);
  *(undefined4 *)(param_2 + 0x614) = *(undefined4 *)(param_1 + 0x1704);
  *(undefined4 *)(param_2 + 0x618) = *(undefined4 *)(param_1 + 0x1708);
  param_2[0x61c] = *(undefined1 *)(param_1 + 0x170c);
  *(undefined4 *)(param_2 + 0x620) = *(undefined4 *)(param_1 + 0x1710);
  *(undefined4 *)(param_2 + 0x624) = *(undefined4 *)(param_1 + 0x1714);
  *(undefined4 *)(param_2 + 0x628) = *(undefined4 *)(param_1 + 0x1718);
  *(undefined4 *)(param_2 + 0x62c) = *(undefined4 *)(param_1 + 0x171c);
  *(undefined4 *)(param_2 + 0x630) = *(undefined4 *)(param_1 + 0x1720);
  *(undefined4 *)(param_2 + 0x634) = *(undefined4 *)(param_1 + 0x1724);
  *(undefined4 *)(param_2 + 0x638) = *(undefined4 *)(param_1 + 0x1728);
  *(undefined4 *)(param_2 + 0x63c) = *(undefined4 *)(param_1 + 0x172c);
  param_2[0x640] = *(undefined1 *)(param_1 + 0x1730);
  *(undefined4 *)(param_2 + 0x644) = *(undefined4 *)(param_1 + 0x1734);
  *(undefined4 *)(param_2 + 0x648) = *(undefined4 *)(param_1 + 0x1738);
  *(undefined4 *)(param_2 + 0x64c) = *(undefined4 *)(param_1 + 0x173c);
  *(undefined4 *)(param_2 + 0x650) = *(undefined4 *)(param_1 + 0x1740);
  param_2[0x654] = *(undefined1 *)(param_1 + 0x1744);
  *(undefined4 *)(param_2 + 0x658) = *(undefined4 *)(param_1 + 0x1748);
  *(undefined4 *)(param_2 + 0x65c) = *(undefined4 *)(param_1 + 0x174c);
  *(undefined4 *)(param_2 + 0x660) = *(undefined4 *)(param_1 + 0x1750);
  *(undefined4 *)(param_2 + 0x664) = *(undefined4 *)(param_1 + 0x1754);
  *(undefined4 *)(param_2 + 0x668) = *(undefined4 *)(param_1 + 0x1758);
  param_2[0x66c] = *(undefined1 *)(param_1 + 0x175c);
  param_2[0x66d] = *(undefined1 *)(param_1 + 0x175d);
  param_2[0x66e] = *(undefined1 *)(param_1 + 0x175e);
  param_2[0x66f] = *(undefined1 *)(param_1 + 0x175f);
  return param_2;
}



// FUNCTION 140e81410 FUN_140e81410 body=8 status=ok
// SIG undefined FUN_140e81410(void)

undefined1 FUN_140e81410(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10f0);
}



// FUNCTION 140e81420 FUN_140e81420 body=154 status=ok
// SIG undefined FUN_140e81420(void)

int FUN_140e81420(longlong param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  lVar4 = *(longlong *)(param_1 + 0x70);
  if (lVar4 == 0) {
    lVar4 = FUN_1405ec200(param_1 + 0x48);
    if (lVar4 == 0) {
LAB_140e8147d:
      lVar4 = 0;
    }
    else {
      lVar5 = UAESHelper::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e8147d;
    }
    *(longlong *)(param_1 + 0x70) = lVar4;
    iVar6 = 0;
    if (lVar4 == 0) goto LAB_140e8148b;
  }
  iVar6 = *(int *)(lVar4 + 0x38);
LAB_140e8148b:
  iVar3 = FUN_140c12c00(param_1);
  iVar3 = iVar3 + -1;
  if (iVar3 < 0) {
    return 0;
  }
  iVar1 = iVar6 + -1;
  if (iVar3 < iVar6 + -1) {
    iVar1 = iVar3;
  }
  return iVar1;
}



// FUNCTION 140e814c0 FUN_140e814c0 body=64 status=ok
// SIG undefined FUN_140e814c0(void)

undefined8 FUN_140e814c0(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0x2388);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar1 = AGFireballProjectile::GetPrivateStaticClass();
                    /* WARNING: Could not recover jumptable at 0x000140e814f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140e81500 FUN_140e81500 body=77 status=ok
// SIG undefined FUN_140e81500(void)

undefined8 FUN_140e81500(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0x2388);
  }
  if (plVar3 != (longlong *)0x0) {
    uVar1 = AGFireballProjectile::GetPrivateStaticClass();
    lVar2 = (**(code **)(*plVar3 + 0x628))(plVar3,uVar1);
    if (lVar2 != 0) {
      return *(undefined8 *)(lVar2 + 0x3b0);
    }
  }
  return 0;
}



// FUNCTION 140e81550 FUN_140e81550 body=64 status=ok
// SIG undefined FUN_140e81550(void)

undefined8 FUN_140e81550(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x218) != 0) {
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x218) + 0x2388);
  }
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1414add30();
                    /* WARNING: Could not recover jumptable at 0x000140e81581. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar1);
    return uVar1;
  }
  return 0;
}



// FUNCTION 140e81590 FUN_140e81590 body=387 status=ok
// SIG undefined FUN_140e81590(void)

longlong FUN_140e81590(longlong param_1,longlong param_2,longlong param_3,undefined8 *param_4,
                      longlong *param_5)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  longlong lVar5;
  char *pcVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  
  lVar12 = 0;
  bVar4 = false;
  lVar5 = 0;
  iVar9 = *(int *)(param_1 + 0xb8) + -1;
  uVar11 = (ulonglong)iVar9;
  if (-1 < iVar9) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    plVar7 = (longlong *)(lVar1 + 0x10 + uVar11 * 0x40);
    uVar10 = uVar11;
    do {
      if (bVar4) {
        if ((*plVar7 != 0) && ((char)plVar7[1] != '\0')) {
          for (lVar8 = *(longlong *)(plVar7[2] + 0x10); lVar8 != 0;
              lVar8 = *(longlong *)(lVar8 + 0x30)) {
            if (lVar8 == param_2) {
              lVar5 = (longlong)(int)uVar11 * 0x40;
              lVar12 = *(longlong *)(lVar5 + 0x10 + lVar1);
              lVar5 = *(longlong *)(lVar5 + 0x20 + lVar1);
              if (lVar12 != 0) goto LAB_140e816d0;
              goto LAB_140e81654;
            }
          }
        }
      }
      else if (*plVar7 == param_3) {
        lVar5 = plVar7[2];
        bVar4 = true;
      }
      uVar11 = (ulonglong)((int)uVar11 - 1);
      plVar7 = plVar7 + -8;
      bVar3 = 0 < (longlong)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar3);
  }
LAB_140e81654:
  if (-1 < iVar9) {
    lVar1 = *(longlong *)(param_1 + 0xb0);
    pcVar6 = (char *)(lVar1 + 0x18 + (longlong)iVar9 * 0x40);
    lVar8 = (longlong)iVar9;
    do {
      if (*(longlong *)(pcVar6 + -8) == param_3) {
        lVar5 = *(longlong *)((longlong)iVar9 * 0x40 + 0x20 + lVar1);
        break;
      }
      if ((*(longlong *)(pcVar6 + -8) != 0) && (*pcVar6 != '\0')) {
        for (lVar2 = *(longlong *)(*(longlong *)(pcVar6 + 8) + 0x10); lVar2 != 0;
            lVar2 = *(longlong *)(lVar2 + 0x30)) {
          if (lVar2 == param_2) {
            lVar5 = *(longlong *)((longlong)iVar9 * 0x40 + 0x20 + lVar1);
            lVar12 = *(longlong *)((longlong)iVar9 * 0x40 + 0x10 + lVar1);
            goto LAB_140e816d0;
          }
        }
      }
      iVar9 = iVar9 + -1;
      pcVar6 = pcVar6 + -0x40;
      bVar4 = 0 < lVar8;
      lVar8 = lVar8 + -1;
    } while (bVar4);
  }
LAB_140e816d0:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (longlong *)0x0) {
    *param_5 = lVar5;
  }
  return lVar12;
}



// FUNCTION 140e81720 FUN_140e81720 body=9 status=ok
// SIG undefined FUN_140e81720(void)

undefined4 FUN_140e81720(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1734);
}



// FUNCTION 140e81730 GetRenderProxy body=8 status=ok
// SIG undefined GetRenderProxy(void)

undefined8 UMaterial::GetRenderProxy(longlong param_1)

{
  return *(undefined8 *)(param_1 + 0x1e8);
}



// FUNCTION 140e81740 FUN_140e81740 body=326 status=ok
// SIG undefined FUN_140e81740(void)

longlong FUN_140e81740(longlong *param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  
  lVar2 = FUN_140e81c30();
  if ((((param_2 == 0) || (lVar2 == 0)) || (param_3 < 0)) || (*(int *)(lVar2 + 0x38) <= param_3)) {
    return 0;
  }
  lVar5 = *(longlong *)((longlong)param_3 * 0x58 + 0x40 + *(longlong *)(lVar2 + 0x30));
  lVar2 = lVar5 + (longlong)*(int *)((longlong)param_3 * 0x58 + 0x48 + *(longlong *)(lVar2 + 0x30))
                  * 0x28;
  for (; lVar5 != lVar2; lVar5 = lVar5 + 0x28) {
    if (*(longlong *)(lVar5 + 0x10) == param_2) goto LAB_140e817b1;
  }
  lVar5 = 0;
LAB_140e817b1:
  if ((lVar5 != 0) && ((*(uint *)(param_1 + 1) >> 4 & 1) == 0)) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar2 = FUN_142f6c9f0(uVar3);
    if (lVar2 != 0) {
      lVar7 = *(longlong *)(lVar5 + 0x18);
      lVar1 = lVar7 + (longlong)*(int *)(lVar5 + 0x20) * 0x18;
      if (lVar7 != lVar1) {
        puVar6 = (undefined8 *)(lVar7 + 0x10);
        while ((lVar4 = FUN_142f5c680(lVar2,*puVar6), lVar4 == 0 ||
               (*(char *)(lVar4 + 0x10) != '\x02'))) {
          lVar7 = lVar7 + 0x18;
          puVar6 = puVar6 + 3;
          if (lVar7 == lVar1) {
            return lVar5;
          }
        }
        if (lVar7 != 0) {
          lVar5 = lVar7;
        }
      }
    }
  }
  return lVar5;
}



// FUNCTION 140e81890 FUN_140e81890 body=86 status=ok
// SIG undefined FUN_140e81890(void)

longlong FUN_140e81890(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = AIndianaUI::GetArmorComponent();
  if (lVar2 != 0) {
    lVar3 = FUN_1414ba0d0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar2;
    }
  }
  return 0;
}



// FUNCTION 140e818f0 FUN_140e818f0 body=822 status=ok
// SIG undefined FUN_140e818f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140e818f0(longlong *param_1,longlong param_2,undefined8 param_3,char param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  int *piVar9;
  longlong *plVar10;
  longlong *plVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_88 [32];
  char local_68;
  longlong local_60;
  undefined1 local_58 [16];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  lVar7 = (**(code **)(*param_1 + 0x148))();
  iVar13 = DAT_14629cd00;
  iVar3 = FUN_140c12c00(lVar7);
  iVar3 = iVar3 + -1;
  local_60 = FUN_140e81c30(param_1,param_2);
  if (local_60 == 0) {
    return iVar13;
  }
  if ((iVar3 < 0) || (*(int *)(local_60 + 0x38) <= iVar3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return iVar13;
  }
  lVar14 = (longlong)iVar3 * 0x58 + *(longlong *)(local_60 + 0x30);
  if (lVar14 == 0) {
    return iVar13;
  }
  if (param_4 == '\0') {
    if ((lVar7 == 0) || (lVar7 = UWorld::GetGameState<APVPGameState>(), lVar7 == 0)) {
      cVar2 = '\0';
    }
    else {
      cVar2 = FUN_1407c3030();
    }
    if ((*(char *)(lVar14 + 0x50) != '\0') || (bVar1 = false, cVar2 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e819bf;
    cVar2 = '\0';
  }
  else {
LAB_140e819bf:
    cVar2 = '\x01';
  }
  iVar12 = 0;
  plVar15 = param_1;
  if ((*(uint *)(param_1 + 1) >> 4 & 1) != 0) {
    plVar15 = (longlong *)0x0;
  }
  local_68 = cVar2;
  if (plVar15 != (longlong *)0x0) {
    FUN_140e705f0();
  }
  if (cVar2 == '\0') {
    plVar10 = (longlong *)param_1[0xf];
    plVar11 = plVar10 + (longlong)(int)param_1[0x10] * 2;
    for (; plVar10 != plVar11; plVar10 = plVar10 + 2) {
      if ((*plVar10 == param_2) && (*(int *)((longlong)plVar10 + 0xc) == iVar3)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        if ((plVar10 != (longlong *)0x0) && ((int)plVar10[1] != -1)) {
          return (int)plVar10[1];
        }
        break;
      }
    }
  }
  uVar8 = FUN_142cc0880();
  iVar4 = FUN_142cc1350(uVar8);
  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(local_60 + 0x40));
  iVar5 = iVar13;
  if (*(char *)(lVar14 + 4) != '\0') {
    uVar8 = FUN_142caac20(lVar14 + 8,local_58,param_1);
    iVar5 = FUN_142cc45a0(uVar8,0);
    if (iVar5 <= iVar13) {
      iVar5 = iVar13;
    }
  }
  piVar9 = (int *)FUN_140e81740(param_1,param_2,iVar3);
  if (piVar9 == (int *)0x0) {
LAB_140e81ab5:
    iVar13 = (int)local_60;
  }
  else {
    iVar13 = *piVar9;
    if (*piVar9 <= iVar5) {
      iVar13 = iVar5;
    }
    iVar5 = iVar13;
    iVar13 = iVar4;
    if ((local_68 == '\0') && (iVar13 = piVar9[1], iVar4 <= piVar9[1])) {
      iVar13 = iVar4;
    }
    iVar4 = iVar13;
    if ((char)piVar9[3] == '\0') goto LAB_140e81ab5;
    iVar13 = piVar9[2];
  }
  lVar7 = FUN_140e80570(param_1);
  if (lVar7 != 0) {
    lVar14 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar14 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar14 + 0x90) * 8)
        != lVar14 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar10 = *(longlong **)(lVar7 + 0x848);
      goto LAB_140e81b08;
    }
  }
  plVar10 = (longlong *)0x0;
LAB_140e81b08:
  iVar6 = DAT_14629cd00;
  if (plVar10 != (longlong *)0x0) {
    uVar8 = FUN_142dfdf30();
    plVar10 = (longlong *)(**(code **)(*plVar10 + 0x628))(plVar10,uVar8);
    iVar6 = DAT_14629cd00;
    if (plVar10 != (longlong *)0x0) {
      iVar6 = (**(code **)(*plVar10 + 0x400))(plVar10);
    }
  }
  iVar6 = iVar6 + iVar13;
  if ((iVar5 <= iVar6) && (iVar5 = iVar4, iVar6 < iVar4)) {
    iVar5 = iVar6;
  }
  if (((local_68 == '\0') && (plVar15 != (longlong *)0x0)) && (param_2 != 0)) {
    if (0 < (int)plVar15[0x10]) {
      lVar7 = 0;
      plVar10 = (longlong *)plVar15[0xf];
      do {
        if ((*plVar10 == param_2) && (*(int *)((longlong)plVar10 + 0xc) == iVar3)) {
          *(int *)((longlong *)plVar15[0xf] + (longlong)iVar12 * 2 + 1) = iVar5;
          return iVar5;
        }
        iVar12 = iVar12 + 1;
        lVar7 = lVar7 + 1;
        plVar10 = plVar10 + 2;
      } while (lVar7 < (int)plVar15[0x10]);
    }
    iVar13 = (int)plVar15[0x10];
    lVar7 = (longlong)iVar13;
    *(int *)(plVar15 + 0x10) = iVar13 + 1;
    if (*(int *)((longlong)plVar15 + 0x84) < iVar13 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15 + 0xf,iVar13);
    }
    lVar14 = plVar15[0xf];
    *(undefined8 *)(lVar14 + lVar7 * 0x10) = 0;
    *(undefined8 *)(lVar14 + 8 + lVar7 * 0x10) = 0;
    lVar14 = plVar15[0xf];
    *(longlong *)(lVar14 + lVar7 * 0x10) = param_2;
    *(int *)(lVar14 + 8 + lVar7 * 0x10) = iVar5;
    *(int *)(lVar14 + 0xc + lVar7 * 0x10) = iVar3;
  }
  return iVar5;
}



// FUNCTION 140e81c30 FUN_140e81c30 body=158 status=ok
// SIG undefined FUN_140e81c30(void)

longlong FUN_140e81c30(longlong param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 != 0) {
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 0xe8), lVar2 != 0)) {
      return lVar2;
    }
    if ((*(longlong *)(param_2 + 0x38) != 0) &&
       (lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x30), lVar2 != 0)) {
      return lVar2;
    }
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    return *(longlong *)(param_1 + 0x70);
  }
  lVar2 = FUN_1405ec200(param_1 + 0x48);
  if (lVar2 != 0) {
    lVar3 = UAESHelper::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e81cbc;
  }
  lVar2 = 0;
LAB_140e81cbc:
  *(longlong *)(param_1 + 0x70) = lVar2;
  return lVar2;
}



// FUNCTION 140e81cd0 FUN_140e81cd0 body=9 status=ok
// SIG undefined FUN_140e81cd0(void)

undefined4 FUN_140e81cd0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1738);
}



// FUNCTION 140e81ce0 FUN_140e81ce0 body=408 status=ok
// SIG undefined FUN_140e81ce0(void)

undefined8 * FUN_140e81ce0(undefined8 *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined8 local_28;
  longlong *plStack_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146852c60) {
    _Init_thread_header(&DAT_146852c60);
    if (DAT_146852c60 == -1) {
      FName::FName(&DAT_146852c58,L"OnlineSubsystem",1);
      _Init_thread_footer(&DAT_146852c60);
    }
  }
  uVar8 = DAT_146852c58;
  uVar5 = FUN_14168dc80();
  plVar6 = (longlong *)FModuleManager::GetModule(uVar5,uVar8);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x50))(plVar6,param_2);
  bVar9 = plVar6 != (longlong *)0x0;
  if (bVar9) {
    puVar7 = (undefined8 *)(**(code **)(*plVar6 + 0xb0))(plVar6,local_18);
    uVar8 = *puVar7;
  }
  else {
    puVar7 = &local_28;
    local_28 = 0;
    plStack_20 = (longlong *)0x0;
    uVar8 = 0;
  }
  *param_1 = uVar8;
  param_1[1] = puVar7[1];
  puVar7[1] = 0;
  *puVar7 = 0;
  if (bVar9) {
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_10 + 1;
      lVar4 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  plVar6 = plStack_20;
  if ((!bVar9) && (plStack_20 != (longlong *)0x0)) {
    LOCK();
    plVar2 = plStack_20 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_20)(plStack_20);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plStack_20 + 8))(plStack_20,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 140e81e80 FUN_140e81e80 body=24 status=ok
// SIG undefined FUN_140e81e80(void)

longlong FUN_140e81e80(longlong param_1)

{
  FUN_140e705f0();
  return param_1 + 0x78;
}



// FUNCTION 140e81eb0 FUN_140e81eb0 body=81 status=ok
// SIG undefined FUN_140e81eb0(void)

undefined1 FUN_140e81eb0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FUN_1409dc150(param_1 + 0x2c0);
  if (cVar2 != '\0') {
    return 1;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x3c0);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x3c0);
    cVar2 = FOpenXRHMD::IsStereoEnabled(uVar1);
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e81f10 FUN_140e81f10 body=9 status=ok
// SIG undefined FUN_140e81f10(void)

undefined4 FUN_140e81f10(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x173c);
}



// FUNCTION 140e81f20 FUN_140e81f20 body=9 status=ok
// SIG undefined FUN_140e81f20(void)

undefined4 FUN_140e81f20(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1740);
}



// FUNCTION 140e81f30 FUN_140e81f30 body=55 status=ok
// SIG undefined FUN_140e81f30(void)

undefined8 FUN_140e81f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xb0);
  lVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar1;
  while( true ) {
    if (lVar1 == lVar2) {
      return 0;
    }
    if (*(longlong *)(lVar1 + 0x10) == param_2) break;
    lVar1 = lVar1 + 0x40;
  }
  return *(undefined8 *)(lVar1 + 0x20);
}



// FUNCTION 140e81f70 FUN_140e81f70 body=26 status=ok
// SIG undefined FUN_140e81f70(void)

longlong FUN_140e81f70(longlong param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = 4;
  if (param_2 < 4) {
    uVar1 = (uint)param_2;
  }
  return param_1 + (ulonglong)uVar1 * 0x18 + 0x80;
}



// FUNCTION 140e81f90 FUN_140e81f90 body=8 status=ok
// SIG undefined FUN_140e81f90(void)

undefined1 FUN_140e81f90(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1744);
}



// FUNCTION 140e81fa0 FUN_140e81fa0 body=9 status=ok
// SIG undefined FUN_140e81fa0(void)

undefined4 FUN_140e81fa0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1758);
}



// FUNCTION 140e81fb0 FUN_140e81fb0 body=9 status=ok
// SIG undefined FUN_140e81fb0(void)

undefined4 FUN_140e81fb0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1748);
}



// FUNCTION 140e81fc0 FUN_140e81fc0 body=120 status=ok
// SIG undefined FUN_140e81fc0(void)

ulonglong FUN_140e81fc0(undefined8 param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar3 = 0;
  puVar2 = (ulonglong *)FUN_140e7ebd0();
  plVar4 = (longlong *)*puVar2;
  uVar6 = (longlong)(int)puVar2[1] & 0x1fffffffffffffff;
  if (plVar4 + (int)puVar2[1] < plVar4) {
    uVar6 = uVar3;
  }
  uVar5 = uVar3;
  if (uVar6 != 0) {
    do {
      lVar1 = *plVar4;
      if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) == param_2)) &&
         (*(char *)(lVar1 + 0x38) == param_3)) {
        uVar3 = uVar3 + 1;
      }
      plVar4 = plVar4 + 1;
      uVar5 = uVar5 + 1;
    } while (uVar5 != uVar6);
  }
  return uVar3 & 0xffffffff;
}



// FUNCTION 140e82040 FUN_140e82040 body=312 status=ok
// SIG undefined FUN_140e82040(void)

int FUN_140e82040(undefined8 param_1,char param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *local_48;
  int local_40;
  int local_3c;
  
  plVar8 = (longlong *)0x0;
  iVar6 = 0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  iVar5 = 0;
  puVar2 = (ulonglong *)FUN_140e7ebd0();
  uVar4 = 0;
  plVar9 = (longlong *)*puVar2;
  uVar7 = (longlong)(int)puVar2[1] & 0x1fffffffffffffff;
  if (plVar9 + (int)puVar2[1] < plVar9) {
    uVar7 = uVar4;
  }
  if (uVar7 != 0) {
    do {
      lVar1 = *plVar9;
      if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x38) == '\x01')) &&
          (*(longlong *)(lVar1 + 0x50) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x30) == param_2)) {
        for (plVar3 = plVar8; plVar3 != plVar8 + iVar5; plVar3 = plVar3 + 1) {
          if (*plVar3 == *(longlong *)(lVar1 + 0x30)) {
            if ((int)((longlong)plVar3 - (longlong)plVar8 >> 3) != -1) goto LAB_140e82144;
            break;
          }
        }
        local_40 = iVar5 + 1;
        if (iVar6 < local_40) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,iVar5);
          plVar8 = local_48;
          iVar6 = local_3c;
        }
        plVar8[iVar5] = *(longlong *)(lVar1 + 0x30);
        iVar5 = local_40;
      }
LAB_140e82144:
      plVar9 = plVar9 + 1;
      uVar4 = uVar4 + 1;
    } while (uVar4 != uVar7);
    if (plVar8 != (longlong *)0x0) {
      FMemory::Free(plVar8);
    }
  }
  return iVar5;
}



// FUNCTION 140e82180 FUN_140e82180 body=302 status=ok
// SIG undefined FUN_140e82180(void)

longlong * FUN_140e82180(void)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_38;
  uint local_30;
  uint local_2c;
  
  plVar4 = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_2c = 0;
  puVar2 = (ulonglong *)FUN_140e7ebd0();
  plVar10 = (longlong *)*puVar2;
  plVar8 = (longlong *)((longlong)(int)puVar2[1] & 0x1fffffffffffffff);
  if (plVar10 + (int)puVar2[1] < plVar10) {
    plVar8 = plVar4;
  }
  plVar6 = plVar4;
  plVar7 = plVar4;
  plVar9 = plVar4;
  if (plVar8 != (longlong *)0x0) {
    do {
      lVar1 = *plVar10;
      if ((((lVar1 != 0) && (*(char *)(lVar1 + 0x38) == '\x01')) &&
          (*(longlong *)(lVar1 + 0x50) != 0)) &&
         (*(char *)(*(longlong *)(lVar1 + 0x30) + 0x30) == '\0')) {
        iVar5 = (int)plVar6;
        for (plVar3 = plVar9; plVar3 != plVar9 + iVar5; plVar3 = plVar3 + 1) {
          if (*plVar3 == *(longlong *)(lVar1 + 0x30)) {
            if ((int)((longlong)plVar3 - (longlong)plVar9 >> 3) != -1) goto LAB_140e82272;
            break;
          }
        }
        local_30 = iVar5 + 1;
        if ((int)plVar7 < (int)local_30) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_38,plVar6);
          plVar7 = (longlong *)(ulonglong)local_2c;
          plVar9 = local_38;
        }
        plVar6 = (longlong *)(ulonglong)local_30;
        plVar9[iVar5] = *(longlong *)(lVar1 + 0x30);
      }
LAB_140e82272:
      plVar10 = plVar10 + 1;
      plVar4 = (longlong *)((longlong)plVar4 + 1);
    } while (plVar4 != plVar8);
    if (plVar9 != (longlong *)0x0) {
      FMemory::Free(plVar9);
    }
  }
  return plVar6;
}



// FUNCTION 140e822b0 FUN_140e822b0 body=49 status=ok
// SIG undefined FUN_140e822b0(void)

longlong FUN_140e822b0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x248);
  if ((cVar1 == '\0') || (lVar2 = *(longlong *)(param_1 + 0x250), *(char *)(lVar2 + 0xf8) == '\0'))
  {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 140e822f0 FUN_140e822f0 body=119 status=ok
// SIG undefined FUN_140e822f0(void)

longlong FUN_140e822f0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar2 != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 200);
    }
    plVar3 = *(longlong **)(lVar2 + 0x1118);
    plVar1 = plVar3 + *(int *)(lVar2 + 0x1120);
    for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
      lVar2 = *plVar3;
      if ((lVar2 != 0) && (*(int *)(lVar2 + 0xa0) == param_2)) {
        return lVar2;
      }
    }
  }
  return 0;
}



// FUNCTION 140e82370 FUN_140e82370 body=61 status=ok
// SIG undefined FUN_140e82370(void)

int FUN_140e82370(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 200);
  }
  piVar1 = *(int **)(param_1 + 0xd0);
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
  while( true ) {
    if (piVar1 == piVar2) {
      return 0;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 0x16;
  }
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  return piVar1[5];
}



// FUNCTION 140e823b0 FUN_140e823b0 body=896 status=ok
// SIG undefined FUN_140e823b0(void)

longlong FUN_140e823b0(longlong param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong *plVar10;
  undefined1 local_res10 [8];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58 [2];
  longlong local_48 [2];
  
  lVar6 = *(longlong *)(param_1 + 0x118);
  if (lVar6 == 0) {
    puVar2 = (undefined8 *)FName::FName(local_res10,L"AssetRegistry",1);
    uVar7 = *puVar2;
    uVar3 = FUN_14168dc80();
    plVar4 = (longlong *)FUN_141690010(uVar3,uVar7);
    local_68 = (longlong *)0x0;
    local_60 = 0;
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    lVar6 = FUN_1414a12b0();
    (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined8 *)(lVar6 + 0x18),&local_68,1);
    plVar10 = local_68 + (longlong)(int)local_60 * 0xb;
    for (plVar5 = local_68; plVar5 != plVar10; plVar5 = plVar5 + 0xb) {
      if (*plVar5 != 0) {
        puVar2 = (undefined8 *)FName::ToString(plVar5,local_58);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar2;
        }
        uVar7 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799410(uVar7,0,puVar9,0);
        if (local_58[0] != 0) {
          FMemory::Free();
        }
        if (lVar6 == 0) {
          puVar2 = (undefined8 *)FName::ToString(plVar5,local_48);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*puVar2;
          }
          uVar7 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799c90(uVar7,0,puVar9,0,0,0,1);
          if (local_48[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 == 0) goto LAB_140e8256d;
        }
        lVar8 = FUN_1414a12b0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (lVar6 = *(longlong *)(lVar6 + 0x358), lVar6 != 0)) &&
           ((*(longlong *)(param_1 + 0x118) == 0 ||
            (*(uint *)(*(longlong *)(param_1 + 0x118) + 0x78) < *(uint *)(lVar6 + 0x78))))) {
          *(longlong *)(param_1 + 0x118) = lVar6;
        }
      }
LAB_140e8256d:
    }
    local_78 = (longlong *)0x0;
    local_70 = 0;
    plVar5 = (longlong *)(**(code **)(*plVar4 + 0x48))(plVar4);
    lVar6 = FUN_141304350();
    (**(code **)(*plVar5 + 0x28))(plVar5,*(undefined8 *)(lVar6 + 0x18),&local_78,1);
    plVar4 = local_78 + (longlong)(int)local_70 * 0xb;
    for (plVar5 = local_78; plVar5 != plVar4; plVar5 = plVar5 + 0xb) {
      if (*plVar5 != 0) {
        puVar2 = (undefined8 *)FName::ToString(plVar5,local_48);
        if (*(int *)(puVar2 + 1) == 0) {
          puVar9 = &DAT_143f3eda8;
        }
        else {
          puVar9 = (undefined2 *)*puVar2;
        }
        uVar7 = UObject::GetPrivateStaticClass();
        lVar6 = FUN_141799410(uVar7,0,puVar9,0);
        if (local_48[0] != 0) {
          FMemory::Free();
        }
        if (lVar6 == 0) {
          puVar2 = (undefined8 *)FName::ToString(plVar5,local_58);
          if (*(int *)(puVar2 + 1) == 0) {
            puVar9 = &DAT_143f3eda8;
          }
          else {
            puVar9 = (undefined2 *)*puVar2;
          }
          uVar7 = UObject::GetPrivateStaticClass();
          lVar6 = FUN_141799c90(uVar7,0,puVar9,0,0,0,1);
          if (local_58[0] != 0) {
            FMemory::Free();
          }
          if (lVar6 == 0) goto LAB_140e826d7;
        }
        lVar8 = FUN_141304350();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (((bVar1) && (lVar6 = *(longlong *)(lVar6 + 800), lVar6 != 0)) &&
           ((*(longlong *)(param_1 + 0x118) == 0 ||
            (*(uint *)(*(longlong *)(param_1 + 0x118) + 0x78) < *(uint *)(lVar6 + 0x78))))) {
          *(longlong *)(param_1 + 0x118) = lVar6;
        }
      }
LAB_140e826d7:
    }
    FUN_1404be960(&local_78);
    FUN_1404be960(&local_68);
    lVar6 = *(longlong *)(param_1 + 0x118);
  }
  return lVar6;
}



// FUNCTION 140e82730 FUN_140e82730 body=177 status=ok
// SIG undefined FUN_140e82730(void)

undefined8 FUN_140e82730(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    if (param_2 == 0) {
      param_2 = *(int *)(param_1 + 200);
    }
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar2 = *(longlong *)(DAT_146b33f38 + 0x58);
    if (lVar2 != 0) {
      if (param_2 == 0) {
        param_2 = *(int *)(param_1 + 200);
      }
      plVar4 = *(longlong **)(lVar2 + 0x1118);
      plVar1 = plVar4 + *(int *)(lVar2 + 0x1120);
      for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
        lVar2 = *plVar4;
        if ((lVar2 != 0) && (*(int *)(lVar2 + 0xa0) == param_2)) {
          if (lVar2 == 0) {
            return 0;
          }
          uVar3 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,
                                *(undefined8 *)(lVar2 + 0x68));
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140e827f0 FUN_140e827f0 body=64 status=ok
// SIG undefined FUN_140e827f0(void)

int FUN_140e827f0(longlong param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    param_2 = *(int *)(param_1 + 200);
  }
  piVar1 = *(int **)(param_1 + 0xd0);
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
  while( true ) {
    if (piVar1 == piVar2) {
      return 1;
    }
    if (*piVar1 == param_2) break;
    piVar1 = piVar1 + 0x16;
  }
  if (piVar1 == (int *)0x0) {
    return 1;
  }
  return piVar1[4];
}



// FUNCTION 140e82830 FUN_140e82830 body=194 status=ok
// SIG undefined FUN_140e82830(void)

int * FUN_140e82830(longlong param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  int *piVar5;
  
  plVar1 = (longlong *)(param_1 + 0xd0);
  piVar4 = (int *)*plVar1;
  piVar5 = piVar4 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
  for (; piVar4 != piVar5; piVar4 = piVar4 + 0x16) {
    if (*piVar4 == param_2) {
      return piVar4;
    }
  }
  lVar3 = FUN_140e822f0();
  if (lVar3 == 0) {
    return (int *)0x0;
  }
  iVar2 = *(int *)(param_1 + 0xd8);
  *(int *)(param_1 + 0xd8) = iVar2 + 1;
  if (*(int *)(param_1 + 0xdc) < iVar2 + 1) {
    TArray<FCloudFileHeader,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
  }
  piVar4 = (int *)((longlong)iVar2 * 0x58 + *plVar1);
  piVar4[2] = 0;
  piVar4[3] = 0;
  piVar4[6] = 0;
  piVar4[7] = 0;
  piVar4[8] = 0;
  *piVar4 = param_2;
  piVar4[4] = 1;
  piVar4[5] = 0;
  piVar4[10] = 0;
  piVar4[0xb] = 0;
  piVar4[0xc] = 0;
  piVar4[0xd] = 0;
  piVar4[0xe] = 0;
  piVar4[0xf] = 0;
  piVar4[0x10] = 0;
  piVar4[0x11] = 0;
  piVar4[0x12] = 0;
  piVar4[0x13] = 0;
  piVar4[0x14] = 0;
  piVar4[0x15] = 0;
  return piVar4;
}



// FUNCTION 140e82900 FUN_140e82900 body=59 status=ok
// SIG undefined FUN_140e82900(void)

undefined1 FUN_140e82900(longlong param_1,int param_2,undefined8 param_3)

{
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1c0))) {
    FUN_140e6bf90(param_3,(longlong)*(int *)(param_1 + 0x1c8) * 0x188 +
                          *(longlong *)(param_1 + 0x1b8));
    return 1;
  }
  return 0;
}



// FUNCTION 140e82940 FUN_140e82940 body=908 status=ok
// SIG undefined FUN_140e82940(void)

longlong FUN_140e82940(longlong param_1,char param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong *local_res8;
  char local_res10;
  undefined8 local_res18;
  longlong *local_res20;
  undefined4 local_d8;
  undefined8 local_d4;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  longlong local_b0;
  int local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  if (param_1 == 0) {
    return 0;
  }
  local_res10 = param_2;
  if (param_2 != '\x01') {
    FUN_140e6da20(&local_res8,&local_b0,param_1 + 0x540);
    plVar6 = (longlong *)FUN_140e7ebd0();
    uVar10 = (ulonglong)local_a8;
    local_res20 = (longlong *)*plVar6;
    plVar6 = local_res20 + (int)plVar6[1];
    local_res8 = plVar6;
    if (local_res20 != plVar6) {
      do {
        lVar4 = *local_res20;
        if ((*(char *)(lVar4 + 0x38) == param_2) &&
           (lVar5 = uVar10 * 0x28 + local_b0, plVar6 = local_res8, local_b0 != lVar5)) {
          local_res18 = 0;
          lVar8 = local_b0;
          do {
            local_a0 = *(undefined4 *)(lVar4 + 0x90);
            local_9c = *(undefined4 *)(lVar4 + 0x94);
            local_98 = *(undefined4 *)(lVar4 + 0x98);
            local_78 = *(undefined8 *)(lVar4 + 0xa0);
            local_88 = 0;
            local_80 = 0;
            local_90 = 0;
            FString::FString(local_70,lVar4 + 0xa8);
            FSoftObjectPath::operator=(&local_90,&local_78);
            cVar2 = FSoftObjectPath::operator==(lVar8 + 0x10,&local_90);
            if (local_88 != 0) {
              FMemory::Free();
            }
            plVar6 = local_res8;
            param_2 = local_res10;
            if (cVar2 != '\0') {
              if ((int)((lVar8 - local_b0) / 0x28) != -1) {
                if (local_a8 != 0) {
                  plVar6 = (longlong *)(local_b0 + 0x18);
                  do {
                    if (*plVar6 != 0) {
                      FMemory::Free();
                    }
                    plVar6 = plVar6 + 5;
                    uVar9 = (int)uVar10 - 1;
                    uVar10 = (ulonglong)uVar9;
                  } while (uVar9 != 0);
                }
                if (local_b0 != 0) {
                  FMemory::Free(local_b0);
                  return lVar4;
                }
                return lVar4;
              }
              break;
            }
            lVar8 = lVar8 + 0x28;
          } while (lVar8 != lVar5);
        }
        local_res20 = local_res20 + 1;
      } while (local_res20 != plVar6);
    }
    if (local_a8 != 0) {
      plVar6 = (longlong *)(local_b0 + 0x18);
      do {
        if (*plVar6 != 0) {
          FMemory::Free();
        }
        plVar6 = plVar6 + 5;
        uVar9 = (int)uVar10 - 1;
        uVar10 = (ulonglong)uVar9;
      } while (uVar9 != 0);
    }
    goto joined_r0x000140e82c7a;
  }
  if (*(longlong *)(param_1 + 0xce0) == 0) {
    return 0;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xce0) + 0x208);
  local_c0 = 0;
  local_c8 = 0;
  local_b8 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_res8 = (longlong *)0x0;
  if (lVar4 == 0) {
    local_res8 = (longlong *)0x0;
    local_c8 = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_60,lVar4);
    FSoftObjectPath::operator=(&local_c8,uVar3);
    FWeakObjectPtr::operator=(&local_d8,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_d4 = CONCAT44(DAT_1464b56f4,(undefined4)local_d4);
  }
  lVar4 = FWeakObjectPtr::Get(&local_d8);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_b0 = local_c0;
    if ((DAT_1464b56f4 == local_d4._4_4_) || (local_res18 = 0, local_c8 == 0))
    goto joined_r0x000140e82c7a;
    lVar4 = FUN_141796df0(&local_c8);
    FWeakObjectPtr::operator=(&local_d8,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      local_d4 = CONCAT44(DAT_1464b56f4,(undefined4)local_d4);
    }
    lVar4 = FWeakObjectPtr::Get(&local_d8);
    local_b0 = local_c0;
    if (lVar4 == 0) goto joined_r0x000140e82c7a;
  }
  lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  local_b0 = local_c0;
  if (bVar1) {
    plVar6 = (longlong *)FUN_140e7ebd0();
    plVar7 = (longlong *)*plVar6;
    plVar6 = plVar7 + (int)plVar6[1];
    for (; local_b0 = local_c0, plVar7 != plVar6; plVar7 = plVar7 + 1) {
      lVar4 = *plVar7;
      cVar2 = FSoftObjectPath::operator==(&local_c8,lVar4 + 0x50);
      if (cVar2 != '\0') {
        if (local_c0 != 0) {
          FMemory::Free();
          return lVar4;
        }
        return lVar4;
      }
    }
  }
joined_r0x000140e82c7a:
  if (local_b0 != 0) {
    FMemory::Free(local_b0);
  }
  return 0;
}



// FUNCTION 140e82cd0 FUN_140e82cd0 body=710 status=ok
// SIG undefined FUN_140e82cd0(void)

void FUN_140e82cd0(longlong param_1,longlong param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  bool bVar8;
  longlong *plVar9;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90 [16];
  longlong local_80;
  undefined1 local_70;
  undefined1 local_68 [24];
  longlong local_50;
  undefined1 local_40;
  
  bVar3 = false;
  bVar8 = false;
  if (param_3 == '\x01') {
    plVar5 = (longlong *)FUN_140e7ebd0();
    plVar9 = (longlong *)*plVar5;
    plVar5 = plVar9 + (int)plVar5[1];
    for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
      lVar1 = *plVar9;
      if (((*(longlong *)(lVar1 + 0x30) == param_2) && (*(char *)(lVar1 + 0x38) == '\x01')) &&
         (*(longlong *)(lVar1 + 0x50) != 0)) {
        bVar8 = true;
        lVar6 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_c0,lVar1 + 0x40);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(&local_98,lVar6);
        local_70 = 0;
        if (*(longlong *)(lVar6 + 0x18) != 0) {
          FMemory::Free();
        }
        iVar4 = FUN_140e68240(param_1 + 0x188,&local_98);
        if (iVar4 == -1) goto LAB_140e82d97;
        bVar3 = true;
      }
      else {
LAB_140e82d97:
        bVar3 = false;
      }
      if ((bVar8) && (bVar8 = false, local_80 != 0)) {
        FMemory::Free();
      }
      if (bVar3) {
        plVar2 = (longlong *)*param_4;
        iVar4 = (int)param_4[1];
        for (plVar7 = plVar2; plVar7 != plVar2 + iVar4; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar1) {
            if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) goto LAB_140e82e0a;
            break;
          }
        }
        *(int *)(param_4 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
        }
        *(longlong *)((longlong)iVar4 * 8 + *param_4) = lVar1;
      }
LAB_140e82e0a:
    }
  }
  else {
    plVar5 = (longlong *)FUN_140e7ebd0();
    plVar9 = (longlong *)*plVar5;
    plVar5 = plVar9 + (int)plVar5[1];
    for (; plVar9 != plVar5; plVar9 = plVar9 + 1) {
      lVar1 = *plVar9;
      if ((*(longlong *)(lVar1 + 0x30) == param_2) && (*(char *)(lVar1 + 0x38) == param_3)) {
        local_a8 = 0;
        local_c0 = *(undefined4 *)(lVar1 + 0x90);
        bVar3 = true;
        local_bc = *(undefined4 *)(lVar1 + 0x94);
        local_b8 = *(undefined4 *)(lVar1 + 0x98);
        local_98 = *(undefined8 *)(lVar1 + 0xa0);
        local_a0 = 0;
        local_b0 = 0;
        FString::FString(local_90,lVar1 + 0xa8);
        FSoftObjectPath::operator=(&local_b0,&local_98);
        TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68,&local_c0);
        local_40 = 0;
        if (local_a8 != 0) {
          FMemory::Free();
        }
        iVar4 = FUN_140e68240(param_1 + 0x1a8,local_68);
        if (iVar4 == -1) goto LAB_140e82eef;
        bVar8 = true;
      }
      else {
LAB_140e82eef:
        bVar8 = false;
      }
      if ((bVar3) && (bVar3 = false, local_50 != 0)) {
        FMemory::Free();
      }
      if (bVar8) {
        plVar2 = (longlong *)*param_4;
        iVar4 = (int)param_4[1];
        for (plVar7 = plVar2; plVar7 != plVar2 + iVar4; plVar7 = plVar7 + 1) {
          if (*plVar7 == lVar1) {
            if ((int)((longlong)plVar7 - (longlong)plVar2 >> 3) != -1) goto LAB_140e82f6a;
            break;
          }
        }
        *(int *)(param_4 + 1) = iVar4 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_4,iVar4);
        }
        *(longlong *)((longlong)iVar4 * 8 + *param_4) = lVar1;
      }
LAB_140e82f6a:
    }
  }
  return;
}



// FUNCTION 140e82fa0 FUN_140e82fa0 body=460 status=ok
// SIG undefined FUN_140e82fa0(void)

undefined8 FUN_140e82fa0(longlong param_1)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined4 local_3c;
  int iStack_38;
  longlong local_30;
  longlong local_28;
  undefined8 local_20;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0xce0) == 0)) {
    return 0;
  }
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0xce0) + 0x208);
  uVar8 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  iStack_38 = 0;
  if (lVar4 == 0) {
    local_30 = 0;
  }
  else {
    uVar3 = FSoftObjectPath::FSoftObjectPath(local_58,lVar4);
    FSoftObjectPath::operator=(&local_30,uVar3);
    FWeakObjectPtr::operator=(&local_40,lVar4);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    iStack_38 = DAT_1464b56f4;
  }
  lVar4 = FWeakObjectPtr::Get(&local_40);
  uVar3 = uVar8;
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == iStack_38) || (local_30 == 0)) goto LAB_140e83140;
    lVar4 = FUN_141796df0(&local_30);
    FWeakObjectPtr::operator=(&local_40,lVar4);
    if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      iStack_38 = DAT_1464b56f4;
    }
    lVar4 = FWeakObjectPtr::Get(&local_40);
    if (lVar4 == 0) goto LAB_140e83140;
  }
  lVar5 = UUGStartScreenUW::GetPrivateStaticClass();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  uVar3 = 0;
  if (bVar1) {
    plVar6 = (longlong *)FUN_140e7ebd0();
    plVar7 = (longlong *)*plVar6;
    plVar6 = plVar7 + (int)plVar6[1];
    for (; uVar3 = uVar8, plVar7 != plVar6; plVar7 = plVar7 + 1) {
      lVar4 = *plVar7;
      cVar2 = FSoftObjectPath::operator==(&local_30,lVar4 + 0x50);
      if (cVar2 != '\0') {
        uVar3 = *(undefined8 *)(lVar4 + 0x30);
        break;
      }
    }
  }
LAB_140e83140:
  if (local_28 != 0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 140e83170 FUN_140e83170 body=8 status=ok
// SIG undefined FUN_140e83170(void)

void FUN_140e83170(undefined8 param_1,undefined8 param_2)

{
  FUN_140e83180(param_1,param_2,0);
  return;
}



// FUNCTION 140e83180 FUN_140e83180 body=669 status=ok
// SIG undefined FUN_140e83180(void)

void FUN_140e83180(longlong param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  int iVar15;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [8];
  longlong local_60;
  undefined1 local_50;
  
  uVar8 = 0;
  plVar5 = (longlong *)FUN_140e7ebd0();
  plVar14 = (longlong *)*plVar5;
  plVar5 = plVar14 + (int)plVar5[1];
  uVar13 = uVar8;
  for (; plVar14 != plVar5; plVar14 = plVar14 + 1) {
    lVar6 = *plVar14;
    if (((lVar6 != 0) && (*(char *)(lVar6 + 0x38) == '\x01')) && (*(longlong *)(lVar6 + 0x50) != 0))
    {
      local_a8 = 0;
      local_b8 = *(undefined4 *)(lVar6 + 0x40);
      uVar13 = 1;
      local_b4 = *(undefined4 *)(lVar6 + 0x44);
      local_b0 = *(undefined4 *)(lVar6 + 0x48);
      local_90 = *(undefined8 *)(lVar6 + 0x50);
      local_a0 = 0;
      local_98 = 0;
      FString::FString(local_88,lVar6 + 0x58);
      FSoftObjectPath::operator=(&local_a8,&local_90);
      TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_78,&local_b8);
      local_50 = 0;
      if (local_a0 != 0) {
        FMemory::Free();
      }
      lVar1 = *(longlong *)(param_1 + 0x188);
      iVar11 = *(int *)(param_1 + 400);
      for (lVar7 = lVar1; lVar7 != (longlong)iVar11 * 0x30 + lVar1; lVar7 = lVar7 + 0x30) {
        cVar3 = FSoftObjectPath::operator==(local_68,lVar7 + 0x10);
        if (cVar3 != '\0') {
          if ((int)((lVar7 - lVar1) / 0x30) != -1) {
            bVar2 = true;
            goto LAB_140e832d4;
          }
          break;
        }
      }
    }
    bVar2 = false;
LAB_140e832d4:
    if ((uVar13 != 0) && (uVar13 = 0, local_60 != 0)) {
      FMemory::Free();
    }
    if (bVar2) {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_2,lVar6 + 0x30);
    }
  }
  lVar6 = (longlong)(int)param_2[1];
  if ((int)param_2[1] != 0) {
    uVar13 = uVar8;
    if ((*(longlong *)*param_2 == 0) || (*(char *)(*(longlong *)*param_2 + 0x30) == param_3)) {
      bVar10 = 1;
      uVar12 = uVar8;
    }
    else {
      bVar10 = 0;
      uVar12 = uVar8;
    }
    do {
      iVar11 = (int)uVar12;
      uVar8 = uVar8 + 1;
      uVar12 = (ulonglong)(iVar11 + 1);
      if ((longlong)uVar8 < lVar6) {
        plVar5 = (longlong *)(*param_2 + uVar8 * 8);
        do {
          if ((*plVar5 == 0) || (*(char *)(*plVar5 + 0x30) == param_3)) {
            bVar4 = 1;
          }
          else {
            bVar4 = 0;
          }
          if (bVar10 != bVar4) break;
          uVar12 = (ulonglong)((int)uVar12 + 1);
          uVar8 = uVar8 + 1;
          plVar5 = plVar5 + 1;
        } while ((longlong)uVar8 < lVar6);
      }
      iVar9 = (int)uVar12 - iVar11;
      if (bVar10 != 0) {
        iVar15 = (int)uVar13;
        if (iVar15 != iVar11) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*param_2 + (longlong)iVar15 * 8),
                     (void *)(*param_2 + (longlong)iVar11 * 8),(longlong)iVar9 << 3);
        }
        uVar13 = (ulonglong)(uint)(iVar15 + iVar9);
      }
      bVar10 = bVar10 ^ 1;
    } while ((longlong)uVar8 < lVar6);
    *(int *)(param_2 + 1) = (int)uVar13;
  }
  return;
}



// FUNCTION 140e83420 FUN_140e83420 body=9 status=ok
// SIG undefined FUN_140e83420(void)

undefined4 FUN_140e83420(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x174c);
}



// FUNCTION 140e83430 get_OuterItemThrowDistanceOnDeath body=9 status=ok
// SIG undefined get_OuterItemThrowDistanceOnDeath(void)

undefined4 uhx::glues::AGCharacter_Glue_obj::get_OuterItemThrowDistanceOnDeath(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1754);
}



// FUNCTION 140e83440 get_InnerItemThrowDistanceOnDeath body=9 status=ok
// SIG undefined get_InnerItemThrowDistanceOnDeath(void)

undefined4 uhx::glues::AGCharacter_Glue_obj::get_InnerItemThrowDistanceOnDeath(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x1750);
}



// FUNCTION 140e83450 FUN_140e83450 body=34 status=ok
// SIG undefined FUN_140e83450(void)

byte FUN_140e83450(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(byte *)((ulonglong)param_2 * 0xf8 + 0x38 + *param_1) >> 1 & 1;
  }
  return 0;
}



// FUNCTION 140e834a0 FUN_140e834a0 body=70 status=ok
// SIG undefined FUN_140e834a0(void)

undefined8 * FUN_140e834a0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    puVar1 = (undefined8 *)FUN_141270d40(*(longlong *)(param_1 + 0x20),local_res8);
    *param_2 = *puVar1;
    return param_2;
  }
  *param_2 = 0;
  return param_2;
}



// FUNCTION 140e83500 FUN_140e83500 body=30 status=ok
// SIG undefined FUN_140e83500(void)

undefined8 FUN_140e83500(longlong *param_1,byte param_2)

{
  if ((int)(uint)param_2 < (int)param_1[1]) {
    return *(undefined8 *)((ulonglong)param_2 * 0xf8 + 8 + *param_1);
  }
  return 0;
}



// FUNCTION 140e83520 FUN_140e83520 body=46 status=ok
// SIG undefined FUN_140e83520(void)

longlong FUN_140e83520(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 0x1f;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 0x1f;
  }
  return plVar1[1];
}



// FUNCTION 140e83570 FUN_140e83570 body=95 status=ok
// SIG undefined FUN_140e83570(void)

undefined8 FUN_140e83570(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x20);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1414778f0();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x000140e835c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(*plVar1 + 0x148))(plVar1);
      return uVar4;
    }
  }
  return 0;
}



// FUNCTION 140e835d0 FUN_140e835d0 body=30 status=ok
// SIG undefined FUN_140e835d0(void)

void FUN_140e835d0(undefined8 param_1,longlong param_2,int param_3,int param_4)

{
  if (((param_2 != 0) && (0 < param_3)) && (-1 < param_4)) {
    FUN_14145e270(param_2,param_1);
    return;
  }
  return;
}



// FUNCTION 140e835f0 FUN_140e835f0 body=8 status=ok
// SIG undefined FUN_140e835f0(void)

void FUN_140e835f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1414c40b0(param_1,param_3);
  return;
}



// FUNCTION 140e83600 OnAbilityUsed body=9 status=ok
// SIG undefined OnAbilityUsed(void)

void UAbilityOverviewWidget::OnAbilityUsed(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_1414c3fe0(param_1,param_3);
  return;
}



// FUNCTION 140e83610 FUN_140e83610 body=142 status=ok
// SIG undefined FUN_140e83610(void)

void FUN_140e83610(longlong param_1,char param_2,char param_3)

{
  if ((((param_2 - 1U & 0xfd) == 0) != ((param_3 - 1U & 0xfd) == 0)) &&
     (*(longlong *)(param_1 + 0x2a0) != 0)) {
    FUN_142397540(*(longlong *)(param_1 + 0x2a0),(param_3 - 1U & 0xfd) != 0,1);
  }
  if ((byte)(param_2 - 2U) < 2 != (byte)(param_3 - 2U) < 2) {
    FUN_1414c4060(param_1,(byte)(param_3 - 2U) < 2,0 < *(int *)(param_1 + 0x310));
  }
  return;
}



// FUNCTION 140e836a0 OnAbilityUsed body=9 status=ok
// SIG undefined OnAbilityUsed(void)

void UAbilityOverviewWidget::OnAbilityUsed(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_1414c40f0(param_1,param_3);
  return;
}



// FUNCTION 140e836b0 FUN_140e836b0 body=341 status=ok
// SIG undefined FUN_140e836b0(void)

void FUN_140e836b0(longlong param_1,undefined8 *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  plVar6 = *(longlong **)(param_1 + 0x118);
  plVar5 = (longlong *)0x0;
  plVar4 = plVar5;
  plVar3 = plVar5;
  if (plVar6 != (longlong *)0x0) {
    lVar2 = FUN_1413f82e0();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      plVar3 = (longlong *)(**(code **)(*plVar6 + 0x680))(plVar6);
      plVar4 = plVar6;
    }
  }
  plVar6 = (longlong *)*param_2;
  if (plVar6 != (longlong *)0x0) {
    lVar2 = FUN_14145f370();
    if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
        lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e83769;
  }
  plVar6 = plVar5;
LAB_140e83769:
  if ((((plVar3 != (longlong *)0x0) && (plVar4 != (longlong *)0x0)) &&
      (*(byte *)(plVar4 + 0x1d8) < 3)) &&
     ((plVar6 != (longlong *)0x0 && (*(char *)((longlong)param_2 + 0x11) != '\0')))) {
    if (*(char *)(param_2 + 2) == '\0') {
      lVar2 = UInputKeySelector::GetPrivateStaticClass();
      if ((*(int *)(plVar3[2] + 0x90) < *(int *)(lVar2 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar3[2] + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
          lVar2 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) {
        plVar3 = plVar5;
      }
      FUN_141460a30(plVar6,plVar3);
    }
    else if (*(char *)(param_2 + 2) == '\x01') {
      FUN_14145e650(plVar6,plVar3);
    }
  }
  return;
}



// FUNCTION 140e83810 FUN_140e83810 body=44 status=ok
// SIG undefined FUN_140e83810(void)

ulonglong FUN_140e83810(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 0x1f;
  while( true ) {
    if (plVar1 == plVar2) {
      return (ulonglong)plVar1 & 0xffffffffffffff00;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 0x1f;
  }
  return CONCAT71((int7)((ulonglong)plVar1 >> 8),1);
}



// FUNCTION 140e83840 FUN_140e83840 body=129 status=ok
// SIG undefined FUN_140e83840(void)

void FUN_140e83840(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar2 = FUN_1407c3030(param_1 + 0xa3);
  FUN_142dafbc0(param_1 + 0xa3,&local_res10);
  if (cVar2 == '\0') {
    lVar3 = *param_1;
    lVar4 = (longlong)(int)param_1[1] * 0xf8 + lVar3;
    for (; lVar3 != lVar4; lVar3 = lVar3 + 0xf8) {
      plVar1 = *(longlong **)(lVar3 + 8);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x9a8))(plVar1,0);
      }
    }
  }
  return;
}



// FUNCTION 140e838e0 FUN_140e838e0 body=109 status=ok
// SIG undefined FUN_140e838e0(void)

void FUN_140e838e0(longlong *param_1,byte param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 local_res18 [2];
  
  if (((param_1[2] != 0) && (*(char *)(param_1[2] + 0x128) == '\x03')) &&
     ((int)(uint)param_2 < (int)param_1[1])) {
    local_res18[0] = param_3;
    FUN_142dafbc0(*param_1 + 0x40 + (ulonglong)param_2 * 0xf8,local_res18);
    plVar1 = *(longlong **)((ulonglong)param_2 * 0xf8 + 8 + *param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x310))(plVar1,1);
    }
  }
  return;
}



// FUNCTION 140e83960 FUN_140e83960 body=125 status=ok
// SIG undefined FUN_140e83960(void)

void FUN_140e83960(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x7d);
  FUN_142dafbc0(param_1 + 0x7d,&local_res10);
  if (cVar1 == '\0') {
    lVar2 = *param_1;
    lVar3 = (longlong)(int)param_1[1] * 0xf8 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0xf8) {
      if (*(longlong *)(lVar2 + 8) != 0) {
        FUN_14308b750(*(longlong *)(lVar2 + 8),0);
      }
    }
  }
  return;
}



// FUNCTION 140e839f0 FUN_140e839f0 body=284 status=ok
// SIG undefined FUN_140e839f0(void)

void FUN_140e839f0(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 local_res10;
  
  local_res10 = param_2;
  if (param_3 == '\0') {
    cVar2 = FUN_1407c3030(param_1 + 0x6a);
    FUN_142dafbc0(param_1 + 0x6a,&local_res10);
    if (cVar2 == '\0') {
      lVar3 = *param_1;
      lVar4 = (longlong)(int)param_1[1] * 0xf8 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0xf8) {
        if (*(longlong *)(lVar3 + 8) != 0) {
          FUN_14308b9e0(*(longlong *)(lVar3 + 8),1);
        }
      }
    }
  }
  else if ((param_1[2] != 0) && (*(char *)(param_1[2] + 0x128) == '\x03')) {
    cVar2 = FUN_1407c3030(param_1 + 0x57);
    FUN_142dafbc0(param_1 + 0x57,&local_res10);
    if (cVar2 == '\0') {
      lVar3 = *param_1;
      lVar4 = (longlong)(int)param_1[1] * 0xf8 + lVar3;
      if (lVar3 != lVar4) {
        do {
          plVar1 = *(longlong **)(lVar3 + 8);
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x310))(plVar1,1);
          }
          lVar3 = lVar3 + 0xf8;
        } while (lVar3 != lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e83b10 FUN_140e83b10 body=366 status=ok
// SIG undefined FUN_140e83b10(void)

void FUN_140e83b10(longlong *param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = lVar3 + 0xcb8;
  lVar2 = FWeakObjectPtr::Get(lVar5);
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(lVar3 + 0xcc0)) {
      return;
    }
    if (*(longlong *)(lVar3 + 0xcc8) == 0) {
      return;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar5,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar3 + 0xcc0) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(lVar5);
    if (lVar2 == 0) {
      return;
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
  if (bVar1) {
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = UWorld::GetAuthGameMode<ABaseGameMode>(uVar4);
    if ((lVar3 != 0) && (lVar3 = FUN_142d84360(lVar3), lVar3 != 0)) {
      lVar5 = FUN_140cb9640(param_1);
      if (lVar5 != 0) {
        FUN_142dd18b0(lVar3,lVar5,lVar2,1);
      }
      if (param_1[0x8d] != 0) {
        FUN_142dd18b0(lVar3,param_1[0x8d],lVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 140e83c80 FUN_140e83c80 body=471 status=ok
// SIG undefined FUN_140e83c80(void)

void FUN_140e83c80(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *local_78;
  longlong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
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
  
  lVar1 = param_1[0x2f];
  if ((((lVar1 != 0) && (*(longlong *)(lVar1 + 0x30) != 0)) && (*(longlong *)(lVar1 + 0x38) != 0))
     && ((*(longlong *)(lVar1 + 0xe0) != 0 && (*(longlong *)(lVar1 + 0xe8) != 0)))) {
    param_1[0x39] = param_2;
    local_68 = *(undefined8 *)(lVar1 + 0xb0);
    uStack_60 = *(undefined8 *)(lVar1 + 0xb8);
    local_58 = *(undefined8 *)(lVar1 + 0xc0);
    uStack_50 = *(undefined8 *)(lVar1 + 200);
    local_48 = *(undefined8 *)(lVar1 + 0xd0);
    uStack_40 = *(undefined8 *)(lVar1 + 0xd8);
    local_38 = *(undefined8 *)(lVar1 + 0x50);
    uStack_30 = *(undefined8 *)(lVar1 + 0x58);
    local_28 = *(undefined4 *)(lVar1 + 0x60);
    uStack_24 = *(undefined4 *)(lVar1 + 100);
    uStack_20 = *(undefined4 *)(lVar1 + 0x68);
    uStack_1c = *(undefined4 *)(lVar1 + 0x6c);
    local_18 = *(undefined4 *)(lVar1 + 0x70);
    uStack_14 = *(undefined4 *)(lVar1 + 0x74);
    uStack_10 = *(undefined4 *)(lVar1 + 0x78);
    uStack_c = *(undefined4 *)(lVar1 + 0x7c);
    FUN_140b7de90(&local_78,local_18,0,*(undefined8 *)(lVar1 + 0x30),DAT_146871268,&local_38,
                  &local_68);
    param_1[0x31] = (longlong)local_78;
    if (local_78 != (longlong *)0x0) {
      (**(code **)(*local_78 + 0x638))(local_78,1);
      (**(code **)(*(longlong *)param_1[0x31] + 0x568))
                ((longlong *)param_1[0x31],0,*(undefined8 *)(param_1[0x2f] + 0x38));
      lVar1 = FUN_1405ab470(param_1[0x39],*(undefined8 *)(param_1[0x2f] + 0x80),0,0);
      param_1[0x32] = lVar1;
      if (lVar1 != 0) {
        FUN_1405a9fb0(lVar1,param_1[0x2f] + 0x88,2,1);
      }
      param_1[0x30] = local_70;
      if (local_70 != 0) {
        FUN_142382f60(local_70,param_1[0x31],&DAT_14629cd44,0);
        *(undefined8 *)(param_1[0x30] + 0x6f0) = *(undefined8 *)(param_1[0x2f] + 0xa8);
        *(byte *)(param_1[0x30] + 0xba) = *(byte *)(param_1[0x30] + 0xba) & 0xfd;
      }
      if (*(char *)(param_1[0x2f] + 0x158) != '\0') {
        (**(code **)(*param_1 + 0x3f8))(param_1);
      }
    }
    *(undefined1 *)((longlong)param_1 + 0x1d2) = 1;
  }
  return;
}



// FUNCTION 140e83e60 FUN_140e83e60 body=111 status=ok
// SIG undefined FUN_140e83e60(void)

void FUN_140e83e60(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *local_18;
  undefined8 local_10;
  
  if ((*(uint *)(param_1 + 1) >> 4 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x148))();
    lVar2 = FUN_142f6c9f0(uVar1);
    if (lVar2 != 0) {
      local_10 = 0;
      local_18 = param_1;
      uVar1 = FUN_142f768a0();
      local_10 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar1);
      FUN_142f690f0(lVar2,&local_18,1);
    }
  }
  return;
}



// FUNCTION 140e83ed0 FUN_140e83ed0 body=59 status=ok
// SIG undefined FUN_140e83ed0(void)

void FUN_140e83ed0(longlong param_1)

{
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  FUN_140e810c0(param_1,&local_res8,local_res18,local_res10);
  *(undefined8 *)(param_1 + 0x288) = local_res8;
  FUN_140e94600(param_1,1,0);
  return;
}



// FUNCTION 140e83f10 FUN_140e83f10 body=319 status=ok
// SIG undefined FUN_140e83f10(void)

void FUN_140e83f10(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined1 local_res8 [8];
  
  FUN_140c17ac0();
  FUN_1414bbde0(param_1);
  if (*(longlong *)(param_1 + 0x4b8) != 0) {
    if (*(char *)(param_1 + 0x5f1) == '\0') {
      FUN_140ccaee0();
    }
    else {
      FUN_140ccf520(*(longlong *)(param_1 + 0x4b8),4);
    }
  }
  lVar7 = *(longlong *)(param_1 + 0x4b8);
  if (lVar7 != 0) {
    lVar4 = FUN_1414bbaa0();
    if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_140e83f94;
  }
  lVar7 = 0;
LAB_140e83f94:
  *(longlong *)(param_1 + 0x5f8) = lVar7;
  if (lVar7 != 0) {
    plVar1 = (longlong *)(lVar7 + 0x5e0);
    plVar5 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar5 != (longlong *)0x0) {
      *plVar5 = (longlong)&PTR_FUN_1442e7fd8;
      FWeakObjectPtr::operator=(plVar5 + 1,param_1);
      plVar5[2] = (longlong)FUN_140e88da0;
      lVar4 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar4;
      *plVar5 = (longlong)&PTR_FUN_1442e8020;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar1,1);
      (**(code **)(*plVar5 + 0x20))(plVar5,local_res8);
      iVar2 = *(int *)(lVar7 + 0x5e8);
      *(int *)(lVar7 + 0x5e8) = iVar2 + 1;
      if (*(int *)(lVar7 + 0x5ec) < iVar2 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar1,iVar2);
      }
      puVar6 = (undefined8 *)((longlong)iVar2 * 0x10 + *plVar1);
      *puVar6 = plVar5;
      *(undefined4 *)(puVar6 + 1) = 3;
    }
  }
  return;
}



// FUNCTION 140e84050 FUN_140e84050 body=124 status=ok
// SIG undefined FUN_140e84050(void)

void FUN_140e84050(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_140c17ac0();
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if (lVar1 != 0) {
    lVar3 = FUN_1414c2510();
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
      *(longlong *)(param_1 + 0x5f0) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x5f0) = 0;
  return;
}



// FUNCTION 140e840d0 FUN_140e840d0 body=578 status=ok
// SIG undefined FUN_140e840d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e840d0(longlong *param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  float fVar5;
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
  if (param_2 == '\0') {
    (**(code **)(*param_1 + 0x408))(param_1,0);
  }
  else if (param_2 == '\x01') {
    (**(code **)(*param_1 + 0x408))(param_1,1);
  }
  else if (((param_2 == '\x02') && ((**(code **)(*param_1 + 0x408))(param_1,1), param_1[0x43] != 0))
          && (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    fVar5 = *(float *)(param_1 + 0x36);
    if (fVar5 <= 0.01) {
      fVar5 = 0.01;
    }
    local_a8 = FUN_140e8b670;
    uStack_a0 = 0;
    lVar2 = FUN_1422312c0(param_1[0x43]);
    uVar1 = *(undefined8 *)(lVar2 + 0xa0);
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_a8;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_a8._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_a0;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_9c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
    }
    local_98 = 0;
    local_90 = 0;
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x30))(plVar3,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0x40,&local_98,fVar5);
    if (local_38 != 0) {
      plVar4 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar4 = local_48;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
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
  return;
}



// FUNCTION 140e84320 FUN_140e84320 body=169 status=ok
// SIG undefined FUN_140e84320(void)

void FUN_140e84320(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  lVar1 = param_1 + 0x48;
  iVar2 = *(int *)(param_1 + 0x2b0);
  iVar5 = (int)param_2;
  if (iVar2 < iVar5) {
    iVar6 = iVar5 - iVar2;
    *(int *)(param_1 + 0x2b0) = iVar5;
    if (*(int *)(param_1 + 0x2b4) < iVar5) {
      FUN_140e8f630(lVar1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar3 = lVar1;
    }
    puVar4 = (undefined1 *)(lVar3 + (longlong)iVar2 * 0x98);
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar4 = 0;
      *(undefined8 *)(puVar4 + 0x88) = 0;
      *(undefined8 *)(puVar4 + 0x90) = 0;
      puVar4 = puVar4 + 0x98;
    }
  }
  else if (iVar5 < iVar2) {
    FUN_140e8e710(lVar1,param_2,iVar2 - iVar5,1);
    return;
  }
  return;
}



// FUNCTION 140e843d0 FUN_140e843d0 body=93 status=ok
// SIG undefined FUN_140e843d0(void)

void FUN_140e843d0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_140e7e640();
  if (puVar2 != param_1) {
    if (*(char *)(param_1 + 0xe) != '\0') {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    uVar1 = puVar2[3];
    param_1[2] = puVar2[2];
    param_1[3] = uVar1;
    uVar1 = puVar2[5];
    param_1[4] = puVar2[4];
    param_1[5] = uVar1;
    uVar1 = puVar2[7];
    param_1[6] = puVar2[6];
    param_1[7] = uVar1;
    uVar1 = puVar2[9];
    param_1[8] = puVar2[8];
    param_1[9] = uVar1;
    uVar1 = puVar2[0xb];
    param_1[10] = puVar2[10];
    param_1[0xb] = uVar1;
    uVar1 = puVar2[0xd];
    param_1[0xc] = puVar2[0xc];
    param_1[0xd] = uVar1;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  return;
}



// FUNCTION 140e84430 FUN_140e84430 body=178 status=ok
// SIG undefined FUN_140e84430(void)

void FUN_140e84430(longlong *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  (**(code **)(*param_1 + 0x448))();
  param_1[0x8c] = *(longlong *)(param_3 + 0x1470);
  param_1[0x8d] = param_3;
  lVar3 = *(longlong *)(param_3 + 0x848);
  if (lVar3 != 0) {
    lVar2 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e844b4;
  }
  lVar3 = 0;
LAB_140e844b4:
  param_1[0x8e] = lVar3;
  if ((char)param_1[0x8b] != '\x01') {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)(param_1 + 0x8b) = 1;
  }
  return;
}



// FUNCTION 140e844f0 FUN_140e844f0 body=90 status=ok
// SIG undefined FUN_140e844f0(void)

void FUN_140e844f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_142340f20();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    if (lVar1 == 0) goto LAB_140e84539;
  }
  lVar1 = FUN_140c12480(lVar1);
  if (lVar1 != 0) {
    uVar2 = AAIController::GetPerceptionComponent(lVar1);
    *(undefined8 *)(param_1 + 0x1e0) = uVar2;
    return;
  }
LAB_140e84539:
  *(undefined8 *)(param_1 + 0x1e0) = 0;
  return;
}



// FUNCTION 140e84550 FUN_140e84550 body=2677 status=ok
// SIG undefined FUN_140e84550(void)

void FUN_140e84550(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  uint *puVar17;
  wchar_t *pwVar18;
  uint *local_res10;
  uint local_a8;
  uint uStack_a4;
  uint *puStack_a0;
  uint local_98;
  uint uStack_94;
  uint uStack_90;
  undefined4 uStack_8c;
  longlong *local_88;
  uint uStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  FUN_142340f20();
  FMemFileOut::seekp(param_1 + 0x2c0,param_1);
  lVar9 = *(longlong *)(param_1 + 0x118);
  if (lVar9 != 0) {
    pwVar18 = (wchar_t *)0x0;
    plVar15 = (longlong *)(lVar9 + 0x2b0);
    uVar1 = *(uint *)(lVar9 + 0x2d8);
    puVar14 = (uint *)(lVar9 + 0x2c0);
    local_a8 = 0;
    uStack_a4 = 1;
    uStack_94 = 0;
    uStack_90 = 0;
    if (uVar1 != 0) {
      puVar17 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar14;
      }
      uVar2 = *puVar17;
      pwVar12 = pwVar18;
      pwVar11 = pwVar18;
      while (uVar2 == 0) {
        iVar6 = (int)pwVar12;
        uStack_90 = (int)pwVar11 + 0x20;
        pwVar11 = (wchar_t *)(ulonglong)uStack_90;
        local_a8 = iVar6 + 1;
        pwVar12 = (wchar_t *)(ulonglong)local_a8;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140e8466d;
        uVar2 = puVar17[(longlong)iVar6 + 1];
      }
      uStack_a4 = uVar2 - 1 & uVar2 ^ uVar2;
      iVar6 = 0x1f;
      if (uStack_a4 != 0) {
        for (; uStack_a4 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uStack_a4 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_94 = (uStack_90 - iVar6) + 0x1f;
      if ((int)uVar1 < (int)uStack_94) {
LAB_140e8466d:
        uStack_94 = uVar1;
      }
    }
    uVar2 = *(uint *)(lVar9 + 0x2d8);
    uStack_70 = 0xffffffff;
    uStack_6c = uStack_94;
    local_68 = CONCAT44(uStack_8c,uStack_90);
    uStack_58 = CONCAT44(uStack_a4,local_a8);
    local_98 = -1 << ((byte)uVar2 & 0x1f);
    uVar16 = uVar2 & 0xffffffe0;
    uStack_80 = local_a8;
    uStack_7c = uStack_a4;
    puStack_a0 = puVar14;
    uStack_94 = uVar2;
    local_78 = puVar14;
    local_60 = plVar15;
    puStack_50 = puVar14;
    uStack_40 = local_68;
    local_88 = plVar15;
    uStack_48 = uStack_70;
    uStack_44 = uStack_6c;
    if (uVar2 != uVar1) {
      puVar17 = *(uint **)(lVar9 + 0x2d0);
      if (*(uint **)(lVar9 + 0x2d0) == (uint *)0x0) {
        puVar17 = puVar14;
      }
      uVar13 = puVar17[(int)uVar2 >> 5] & local_98;
      iVar6 = (int)uVar2 >> 5;
      while (uVar13 == 0) {
        uVar16 = uVar16 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6)
        goto LAB_140e84745;
        uVar13 = puVar17[(longlong)iVar6 + 1];
        local_98 = 0xffffffff;
        iVar6 = iVar6 + 1;
      }
      uVar13 = uVar13 - 1 & uVar13 ^ uVar13;
      iVar6 = 0x1f;
      if (uVar13 != 0) {
        for (; uVar13 >> iVar6 == 0; iVar6 = iVar6 + -1) {
        }
      }
      if (uVar13 == 0) {
        iVar6 = 0x20;
      }
      else {
        iVar6 = 0x1f - iVar6;
      }
      uStack_94 = (uVar16 - iVar6) + 0x1f;
      uVar2 = uStack_94;
      if ((int)uVar1 < (int)uStack_94) {
LAB_140e84745:
        uStack_94 = uVar1;
        uVar2 = uVar1;
      }
    }
    while( true ) {
      if ((uStack_6c == uVar2) && (local_78 == puVar14)) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      if ((bVar3) && (local_88 == plVar15)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      lVar9 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
      if (lVar9 != 0) {
        lVar7 = FUN_142e5c1e0();
        if ((*(int *)(*(longlong *)(lVar9 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar9 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar7 = *(longlong *)(lVar9 + 0x18);
          if (lVar7 == *(longlong *)(param_1 + 0x280)) {
            *(longlong *)(param_1 + 0x2a0) = lVar9;
            lVar7 = *(longlong *)(lVar9 + 0x18);
          }
          if (lVar7 == *(longlong *)(param_1 + 0x288)) {
            *(longlong *)(param_1 + 0x2a8) = lVar9;
          }
        }
      }
      uStack_70 = uStack_70 & ~uStack_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_80);
    }
    iVar6 = FUN_14233f450(param_1);
    if (iVar6 == 3) {
      plVar15 = *(longlong **)(param_1 + 0x118);
      uVar8 = AGFireballProjectile::GetPrivateStaticClass();
      lVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar8);
      if (lVar9 != 0) {
        lVar7 = *(longlong *)(lVar9 + 0x3b8);
        if (lVar7 != 0) {
          lVar10 = UARGetCandidateObjectAsyncTaskBlueprintProxy::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPhaseTranceComboChanged",L"::");
            pwVar12 = pwVar18;
            while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
              pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
              pwVar12 = pwVar4;
            }
            FName::FName(&local_res10,pwVar12 + 2,1);
            puVar14 = local_res10;
            FWeakObjectPtr::operator=(&local_a8,0);
            puStack_a0 = (uint *)0x0;
            FWeakObjectPtr::operator=(&local_a8,param_1);
            puStack_a0 = puVar14;
            if (puVar14 != (uint *)0x0) {
              lVar10 = FWeakObjectPtr::Get(&local_a8);
              if (lVar10 != 0) {
                UObject::FindFunction(lVar10,puStack_a0);
              }
            }
            puVar14 = *(uint **)(lVar7 + 0x48);
            iVar6 = *(int *)(lVar7 + 0x50);
            for (puVar17 = puVar14; puVar17 != puVar14 + (longlong)iVar6 * 4; puVar17 = puVar17 + 4)
            {
              if ((*puVar17 == local_a8) && (puVar17[1] == uStack_a4)) {
LAB_140e84958:
                bVar3 = true;
              }
              else {
                cVar5 = FWeakObjectPtr::IsValid(puVar17);
                if (cVar5 == '\0') {
                  cVar5 = FWeakObjectPtr::IsValid(&local_a8);
                  if (cVar5 == '\0') goto LAB_140e84958;
                }
                bVar3 = false;
              }
              if ((bVar3) && (*(uint **)(puVar17 + 2) == puStack_a0)) {
                bVar3 = true;
              }
              else {
                bVar3 = false;
              }
              if (bVar3) {
                if ((int)((longlong)puVar17 - (longlong)puVar14 >> 4) != -1) goto LAB_140e849c7;
                break;
              }
            }
            iVar6 = *(int *)(lVar7 + 0x50);
            *(int *)(lVar7 + 0x50) = iVar6 + 1;
            if (*(int *)(lVar7 + 0x54) < iVar6 + 1) {
              TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(lVar7 + 0x48,iVar6);
            }
            puVar14 = (uint *)((longlong)iVar6 * 0x10 + *(longlong *)(lVar7 + 0x48));
            *puVar14 = local_a8;
            puVar14[1] = uStack_a4;
            *(uint **)(puVar14 + 2) = puStack_a0;
LAB_140e849c7:
            TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(lVar7 + 0x48);
          }
        }
        pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ThisClass::OnPhaseTranceActivated",L"::");
        pwVar12 = pwVar18;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar12 = pwVar4;
        }
        FName::FName(&local_res10,pwVar12 + 2,1);
        puVar14 = local_res10;
        plVar15 = (longlong *)(lVar9 + 0x278);
        FWeakObjectPtr::operator=(&local_a8,0);
        puStack_a0 = (uint *)0x0;
        FWeakObjectPtr::operator=(&local_a8,param_1);
        puStack_a0 = puVar14;
        if (puVar14 != (uint *)0x0) {
          lVar7 = FWeakObjectPtr::Get(&local_a8);
          if (lVar7 != 0) {
            UObject::FindFunction(lVar7,puStack_a0);
          }
        }
        puVar14 = (uint *)*plVar15;
        iVar6 = *(int *)(lVar9 + 0x280);
        for (puVar17 = puVar14; puVar17 != puVar14 + (longlong)iVar6 * 4; puVar17 = puVar17 + 4) {
          if ((*puVar17 == local_a8) && (puVar17[1] == uStack_a4)) {
LAB_140e84aa8:
            bVar3 = true;
          }
          else {
            cVar5 = FWeakObjectPtr::IsValid(puVar17);
            if (cVar5 == '\0') {
              cVar5 = FWeakObjectPtr::IsValid(&local_a8);
              if (cVar5 == '\0') goto LAB_140e84aa8;
            }
            bVar3 = false;
          }
          if ((bVar3) && (*(uint **)(puVar17 + 2) == puStack_a0)) {
            bVar3 = true;
          }
          else {
            bVar3 = false;
          }
          if (bVar3) {
            if ((int)((longlong)puVar17 - (longlong)puVar14 >> 4) != -1) goto LAB_140e84b15;
            break;
          }
        }
        iVar6 = *(int *)(lVar9 + 0x280);
        *(int *)(lVar9 + 0x280) = iVar6 + 1;
        if (*(int *)(lVar9 + 0x284) < iVar6 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar6);
        }
        puVar14 = (uint *)((longlong)iVar6 * 0x10 + *plVar15);
        *puVar14 = local_a8;
        puVar14[1] = uStack_a4;
        *(uint **)(puVar14 + 2) = puStack_a0;
LAB_140e84b15:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
      }
    }
    plVar15 = *(longlong **)(param_1 + 0x118);
    uVar8 = FUN_142e1b450();
    lVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar8);
    *(longlong *)(param_1 + 0x298) = lVar9;
    if (lVar9 != 0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&USirenCharacterComponent::OnFirstPersonCreated",L"::");
      pwVar12 = pwVar18;
      while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      puVar14 = local_res10;
      lVar9 = *(longlong *)(param_1 + 0x298);
      plVar15 = (longlong *)(lVar9 + 0x380);
      FWeakObjectPtr::operator=(&local_a8,0);
      puStack_a0 = (uint *)0x0;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      puStack_a0 = puVar14;
      if (puVar14 != (uint *)0x0) {
        lVar7 = FWeakObjectPtr::Get(&local_a8);
        if (lVar7 != 0) {
          UObject::FindFunction(lVar7,puStack_a0);
        }
      }
      puVar14 = (uint *)*plVar15;
      iVar6 = *(int *)(lVar9 + 0x388);
      for (puVar17 = puVar14; puVar17 != puVar14 + (longlong)iVar6 * 4; puVar17 = puVar17 + 4) {
        if ((*puVar17 == local_a8) && (puVar17[1] == uStack_a4)) {
LAB_140e84c2d:
          bVar3 = true;
        }
        else {
          cVar5 = FWeakObjectPtr::IsValid(puVar17);
          if (cVar5 == '\0') {
            cVar5 = FWeakObjectPtr::IsValid(&local_a8);
            if (cVar5 == '\0') goto LAB_140e84c2d;
          }
          bVar3 = false;
        }
        if ((bVar3) && (*(uint **)(puVar17 + 2) == puStack_a0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)puVar17 - (longlong)puVar14 >> 4) != -1) goto LAB_140e84c98;
          break;
        }
      }
      iVar6 = *(int *)(lVar9 + 0x388);
      *(int *)(lVar9 + 0x388) = iVar6 + 1;
      if (*(int *)(lVar9 + 0x38c) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar6);
      }
      puVar14 = (uint *)((longlong)iVar6 * 0x10 + *plVar15);
      *puVar14 = local_a8;
      puVar14[1] = uStack_a4;
      *(uint **)(puVar14 + 2) = puStack_a0;
LAB_140e84c98:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    }
    plVar15 = *(longlong **)(param_1 + 0x118);
    uVar8 = FUN_142dfdf30();
    lVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar8);
    if (lVar9 != 0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(L"&USirenCharacterComponent::OnLevelChanged",L"::");
      pwVar12 = pwVar18;
      while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar12 = pwVar4;
      }
      FName::FName(&local_res10,pwVar12 + 2,1);
      puVar14 = local_res10;
      plVar15 = (longlong *)(lVar9 + 0x1b0);
      FWeakObjectPtr::operator=(&local_a8,0);
      puStack_a0 = (uint *)0x0;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      puStack_a0 = puVar14;
      if (puVar14 != (uint *)0x0) {
        lVar7 = FWeakObjectPtr::Get(&local_a8);
        if (lVar7 != 0) {
          UObject::FindFunction(lVar7,puStack_a0);
        }
      }
      puVar14 = (uint *)*plVar15;
      iVar6 = *(int *)(lVar9 + 0x1b8);
      for (puVar17 = puVar14; puVar17 != puVar14 + (longlong)iVar6 * 4; puVar17 = puVar17 + 4) {
        if ((*puVar17 == local_a8) && (puVar17[1] == uStack_a4)) {
LAB_140e84da8:
          bVar3 = true;
        }
        else {
          cVar5 = FWeakObjectPtr::IsValid(puVar17);
          if (cVar5 == '\0') {
            cVar5 = FWeakObjectPtr::IsValid(&local_a8);
            if (cVar5 == '\0') goto LAB_140e84da8;
          }
          bVar3 = false;
        }
        if ((bVar3) && (*(uint **)(puVar17 + 2) == puStack_a0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)puVar17 - (longlong)puVar14 >> 4) != -1) goto LAB_140e84e15;
          break;
        }
      }
      iVar6 = *(int *)(lVar9 + 0x1b8);
      *(int *)(lVar9 + 0x1b8) = iVar6 + 1;
      if (*(int *)(lVar9 + 0x1bc) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar6);
      }
      puVar14 = (uint *)((longlong)iVar6 * 0x10 + *plVar15);
      *puVar14 = local_a8;
      puVar14[1] = uStack_a4;
      *(uint **)(puVar14 + 2) = puStack_a0;
LAB_140e84e15:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    }
    plVar15 = *(longlong **)(param_1 + 0x118);
    uVar8 = FUN_142e43690();
    lVar9 = (**(code **)(*plVar15 + 0x628))(plVar15,uVar8);
    if (lVar9 != 0) {
      pwVar12 = _guard_xfg_dispatch_icall_nop
                          (L"&USirenCharacterComponent::OnCustomizationApplied",L"::");
      while (pwVar11 = pwVar12, pwVar11 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar11 + 1,L"::");
        pwVar18 = pwVar11;
      }
      FName::FName(&local_res10,pwVar18 + 2,1);
      plVar15 = (longlong *)(lVar9 + 800);
      FWeakObjectPtr::operator=(&local_a8,0);
      puStack_a0 = (uint *)0x0;
      FWeakObjectPtr::operator=(&local_a8,param_1);
      puStack_a0 = local_res10;
      if (local_res10 != (uint *)0x0) {
        lVar7 = FWeakObjectPtr::Get(&local_a8);
        if (lVar7 != 0) {
          UObject::FindFunction(lVar7,puStack_a0);
        }
      }
      puVar14 = (uint *)*plVar15;
      iVar6 = *(int *)(lVar9 + 0x328);
      for (puVar17 = puVar14; puVar17 != puVar14 + (longlong)iVar6 * 4; puVar17 = puVar17 + 4) {
        if ((*puVar17 == local_a8) && (puVar17[1] == uStack_a4)) {
LAB_140e84f28:
          bVar3 = true;
        }
        else {
          cVar5 = FWeakObjectPtr::IsValid(puVar17);
          if (cVar5 == '\0') {
            cVar5 = FWeakObjectPtr::IsValid(&local_a8);
            if (cVar5 == '\0') goto LAB_140e84f28;
          }
          bVar3 = false;
        }
        if ((bVar3) && (*(uint **)(puVar17 + 2) == puStack_a0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)puVar17 - (longlong)puVar14 >> 4) != -1) goto LAB_140e84f93;
          break;
        }
      }
      iVar6 = *(int *)(lVar9 + 0x328);
      *(int *)(lVar9 + 0x328) = iVar6 + 1;
      if (*(int *)(lVar9 + 0x32c) < iVar6 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar15,iVar6);
      }
      puVar14 = (uint *)((longlong)iVar6 * 0x10 + *plVar15);
      *puVar14 = local_a8;
      puVar14[1] = uStack_a4;
      *(uint **)(puVar14 + 2) = puStack_a0;
LAB_140e84f93:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar15);
    }
  }
  return;
}



// FUNCTION 140e84fd0 FUN_140e84fd0 body=794 status=ok
// SIG undefined FUN_140e84fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e84fd0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 local_res8 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_48;
  undefined4 local_40;
  uint *local_38 [2];
  char local_24;
  
  lVar6 = (**(code **)(*param_1 + 0x148))();
  lVar10 = 0;
  if (param_1[0x8d] != 0) {
    lVar10 = *(longlong *)(param_1[0x8d] + 0x488);
  }
  if ((lVar6 != 0) && (lVar10 != 0)) {
    *(uint *)(param_1[0x8b] + 0x8ec) = *(uint *)(param_1[0x8b] + 0x8ec) & 0xfffffffe;
    iVar4 = *(int *)(lVar6 + 0x728) + -1;
    lVar11 = (longlong)iVar4;
    if (-1 < iVar4) {
      do {
        plVar9 = *(longlong **)(*(longlong *)(lVar6 + 0x720) + lVar11 * 8);
        local_res8[0] = 0;
        if (plVar9 != (longlong *)0x0) {
          lVar1 = *(longlong *)(lVar10 + 0x168);
          if (lVar1 == 0) {
            local_54 = DAT_1468b5d98;
            puVar7 = &local_5c;
            local_5c = _DAT_1468b5d90;
          }
          else {
            puVar7 = (undefined8 *)&local_68;
            local_68 = *(undefined4 *)(lVar1 + 0x220);
            local_60 = *(undefined4 *)(lVar1 + 0x228);
            uStack_64 = *(undefined4 *)(lVar1 + 0x224);
          }
          local_48 = *puVar7;
          local_40 = *(undefined4 *)(puVar7 + 1);
          cVar2 = (**(code **)(*plVar9 + 0x10))(plVar9,&local_48,0,local_res8);
          if ((cVar2 != '\0') && ((**(code **)(*plVar9 + 0x18))(plVar9,local_38), local_24 != '\0'))
          {
            if (local_38[0] != (uint *)0x0) goto LAB_140e85120;
            break;
          }
        }
        lVar11 = lVar11 + -1;
      } while (-1 < lVar11);
    }
    local_38[0] = (uint *)(param_1[0x8b] + 0x2e0);
    if (local_38[0] == (uint *)0x0) {
      uVar3 = 0;
    }
    else {
LAB_140e85120:
      uVar5 = *local_38[0];
      if ((uVar5 & 4) != 0) {
        *(float *)(param_1 + 0x2e7) =
             ((float)local_38[0][0xd] + (float)local_38[0][0xc] + (float)local_38[0][0xe]) *
             0.33333334;
        uVar5 = *local_38[0];
      }
      if ((uVar5 & 8) != 0) {
        *(float *)(param_1 + 0x2e0) =
             ((float)local_38[0][0x11] + (float)local_38[0][0x10] + (float)local_38[0][0x12]) *
             0.33333334;
        uVar5 = *local_38[0];
      }
      if ((uVar5 & 0x10) != 0) {
        *(float *)(param_1 + 0x2e5) =
             ((float)local_38[0][0x15] + (float)local_38[0][0x14] + (float)local_38[0][0x16]) *
             0.33333334;
        uVar5 = *local_38[0];
      }
      if ((uVar5 & 0x20) != 0) {
        *(float *)((longlong)param_1 + 0x1724) =
             ((float)local_38[0][0x19] + (float)local_38[0][0x18] + (float)local_38[0][0x1a]) *
             0.33333334;
      }
      *(uint *)(param_1 + 0x2e4) = local_38[0][0x87];
      *(uint *)((longlong)param_1 + 0x172c) = local_38[0][0x107];
      *(uint *)(param_1 + 0x2ea) = local_38[0][0x104];
      *(uint *)((longlong)param_1 + 0x1754) = local_38[0][0x105];
      if (((*(char *)((longlong)param_1 + 0x10b9) == '\0') || (param_1[0x8d] == 0)) ||
         (plVar9 = *(longlong **)(param_1[0x8d] + 0x528), plVar9 == (longlong *)0x0)) {
        uVar12 = (undefined4)param_1[0x2e1];
      }
      else {
        uVar12 = (**(code **)(*plVar9 + 0x778))();
      }
      *(undefined4 *)(param_1 + 0x2eb) = *(undefined4 *)((longlong)param_1 + 0x494);
      uVar3 = 1;
      *(undefined4 *)(param_1 + 0x2e1) = uVar12;
    }
    *(undefined1 *)((longlong)param_1 + 0x175f) = uVar3;
    *(uint *)(param_1[0x8b] + 0x8ec) = *(uint *)(param_1[0x8b] + 0x8ec) | 1;
    FUN_140e776b0(param_1);
    if (param_1[0x8b] != 0) {
      FUN_140a296b0(param_1[0x8b] + 0x2e0,param_1 + 0x156);
      FUN_1423424e0(param_1[0x8b]);
      FUN_1423424c0(param_1[0x8b]);
    }
    iVar4 = FUN_142235230(param_1);
    if ((iVar4 != 3) && ((char)param_1[0x217] != '\0')) {
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      plVar9 = (longlong *)FUN_142d5ecc0(uVar8);
      if ((plVar9 != (longlong *)0x0) &&
         (plVar9 = (longlong *)(**(code **)(*plVar9 + 0x2b8))(plVar9), plVar9 != (longlong *)0x0)) {
        (**(code **)(*plVar9 + 0x10))(plVar9,*(undefined4 *)((longlong)param_1 + 0x494),1);
      }
    }
  }
  return;
}



// FUNCTION 140e852f0 FUN_140e852f0 body=608 status=ok
// SIG undefined FUN_140e852f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e852f0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  float fVar4;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  lVar2 = FUN_1422312c0();
  if (lVar2 != 0) {
    fVar4 = *(float *)(param_1 + 0x578);
    if (fVar4 <= 0.01) {
      fVar4 = 0.01;
    }
    FWeakObjectPtr::operator=(&local_b8,param_1);
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x20,0);
    if (plVar3 == (longlong *)0x0) {
      if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
         ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
    }
    else {
      *plVar3 = (longlong)&PTR_GetPoolName_1445cb8a0;
      *(undefined4 *)(plVar3 + 1) = local_b8;
      *(undefined4 *)((longlong)plVar3 + 0xc) = local_b4;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[3] = lVar2;
      *plVar3 = (longlong)&PTR_GetPoolName_1445cb8e8;
      TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(void),<lambda_5521a09fc95c915e3818e28ac1870c50>_>
      ::CreateCopy(plVar3,&local_c8);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    local_b0 = 0;
    lVar2 = FUN_1422312c0(param_1);
    local_a8 = 0;
    local_a0 = 0;
    uVar1 = *(undefined8 *)(lVar2 + 0xa0);
    if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
      (**(code **)(*local_c8 + 0x30))(local_c8,&local_a8);
    }
    FWeakObjectPtr::operator=(local_98,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_90 = 0;
    local_58 = (longlong *)0x0;
    local_48 = 0;
    local_88 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,&local_b0,&local_a8,fVar4);
    if (local_48 != 0) {
      plVar3 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar3 = local_58;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
}



// FUNCTION 140e85550 FUN_140e85550 body=91 status=ok
// SIG undefined FUN_140e85550(void)

void FUN_140e85550(longlong param_1)

{
  longlong *plVar1;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (*(char *)(param_1 + 0x459) != '\0')) {
    FUN_1414b61d0(param_1,*(undefined4 *)(param_1 + 0x45c));
    *(undefined1 *)(param_1 + 0x459) = 0;
    plVar1 = *(longlong **)(param_1 + 0x460);
    if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x8f] != '\0')) {
      (**(code **)(*plVar1 + 0x600))(plVar1);
      *(undefined1 *)(plVar1 + 0x8f) = 0;
    }
  }
  return;
}



// FUNCTION 140e855b0 FUN_140e855b0 body=526 status=ok
// SIG undefined FUN_140e855b0(void)

undefined8 FUN_140e855b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar3 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar3 != 0) {
    plVar11 = *(longlong **)(lVar3 + 0x1118);
    plVar1 = plVar11 + *(int *)(lVar3 + 0x1120);
    if (plVar11 != plVar1) {
      do {
        lVar3 = *plVar11;
        if (lVar3 != 0) {
          plVar10 = *(longlong **)(lVar3 + 0x90);
          plVar2 = plVar10 + *(int *)(lVar3 + 0x98);
          for (; plVar10 != plVar2; plVar10 = plVar10 + 1) {
            lVar3 = *plVar10;
            if (lVar3 != 0) {
              lVar9 = 0;
              if (param_2 != 0) {
                lVar5 = FUN_142dfdfe0();
                lVar8 = param_2;
                do {
                  lVar9 = param_2;
                  if (lVar8 == lVar5) break;
                  lVar8 = *(longlong *)(lVar8 + 0x30);
                  lVar9 = 0;
                } while (lVar8 != 0);
              }
              local_48 = 0;
              local_50 = 0;
              local_40 = 0;
              local_60 = 0xffffffff;
              local_5c = 0;
              if (lVar9 == 0) {
                local_50 = 0;
              }
              else {
                uVar6 = FSoftObjectPath::FSoftObjectPath(local_78,lVar9);
                FSoftObjectPath::operator=(&local_50,uVar6);
                FWeakObjectPtr::operator=(&local_60,lVar9);
                LOCK();
                if (DAT_1464b56f4 == 0) {
                  DAT_1464b56f4 = 0;
                }
                UNLOCK();
                local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
              }
              plVar7 = (longlong *)UListView::OnItemSelectionChanged(lVar3);
              lVar9 = *plVar7;
              lVar3 = lVar9 + (longlong)(int)plVar7[1] * 0x28;
              for (; lVar9 != lVar3; lVar9 = lVar9 + 0x28) {
                cVar4 = FSoftObjectPath::operator==(lVar9 + 0x10,&local_50);
                if (cVar4 != '\0') {
                  if (local_48 != 0) {
                    FMemory::Free();
                  }
                  return 1;
                }
              }
              if (local_48 != 0) {
                FMemory::Free();
              }
            }
          }
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 != plVar1);
    }
  }
  return 0;
}



// FUNCTION 140e857c0 FUN_140e857c0 body=101 status=ok
// SIG undefined FUN_140e857c0(void)

undefined8 FUN_140e857c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  lVar3 = *(longlong *)(param_1 + 0x100);
  lVar1 = lVar3 + (longlong)*(int *)(param_1 + 0x108) * 0x48;
  local_res8 = param_2;
  while( true ) {
    if (lVar3 == lVar1) {
      return 0;
    }
    cVar2 = FUN_140e67c10(lVar3 + 8,&local_res8);
    if (cVar2 != '\0') break;
    lVar3 = lVar3 + 0x48;
  }
  return 1;
}



// FUNCTION 140e85830 FUN_140e85830 body=225 status=ok
// SIG undefined FUN_140e85830(void)

ulonglong FUN_140e85830(longlong param_1,longlong param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  uVar2 = FUN_142dee6e0();
  if ((char)uVar2 == '\0') goto LAB_140e85899;
  uVar4 = *(ulonglong *)(param_1 + 0x118);
  if (uVar4 == 0) {
LAB_140e858a6:
    uVar4 = 0;
  }
  else {
    lVar3 = FUN_1413f82e0();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar2 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < iVar1) ||
       (uVar2 = *(ulonglong *)(*(longlong *)(uVar4 + 0x10) + 0x88),
       *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
    if ((char)uVar2 == '\0') goto LAB_140e858a6;
    bVar5 = *(byte *)(uVar4 + 0xec0) < 3;
    uVar2 = CONCAT71((int7)(uVar2 >> 8),bVar5);
    if (!bVar5) goto LAB_140e85899;
  }
  if (param_2 != 0) {
    lVar3 = FUN_14145f370();
    iVar1 = *(int *)(lVar3 + 0x90);
    uVar2 = (longlong)iVar1;
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < iVar1) ||
       (uVar2 = *(ulonglong *)(*(longlong *)(param_2 + 0x10) + 0x88),
       *(longlong *)(uVar2 + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
      uVar2 = uVar2 & 0xffffffffffffff00;
    }
    else {
      uVar2 = CONCAT71((int7)(uVar2 >> 8),1);
    }
    if ((char)uVar2 != '\0') {
      uVar2 = FUN_1407c3030(param_2 + 0x15f8);
      if ((((char)uVar2 == '\0') && (uVar2 = *(ulonglong *)(param_2 + 0x990), uVar4 != uVar2)) &&
         (uVar2 != 0)) {
        return CONCAT71((int7)(uVar2 >> 8),1);
      }
    }
  }
LAB_140e85899:
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140e85920 FUN_140e85920 body=614 status=ok
// SIG undefined FUN_140e85920(void)

undefined8 FUN_140e85920(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  bool bVar9;
  longlong *local_78;
  int local_70;
  longlong local_68 [2];
  undefined1 local_58 [24];
  undefined4 local_40;
  undefined8 local_3c;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  param_1 = param_1 + 0x2d8;
  lVar5 = FWeakObjectPtr::Get(param_1);
  bVar9 = false;
  if (lVar5 != 0) {
    lVar6 = FUN_14143cfe0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    bVar9 = false;
    if (bVar3) {
      local_28 = 0;
      local_30 = 0;
      bVar9 = true;
      local_20 = 0;
      local_40 = 0xffffffff;
      local_3c = 0;
      if (param_2 == 0) {
        local_30 = 0;
      }
      else {
        uVar7 = FSoftObjectPath::FSoftObjectPath(local_58,param_2);
        FSoftObjectPath::operator=(&local_30,uVar7);
        FWeakObjectPtr::operator=(&local_40,param_2);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_3c = CONCAT44(DAT_1464b56f4,(undefined4)local_3c);
      }
      lVar6 = *(longlong *)(lVar5 + 0x800);
      lVar5 = lVar6 + (longlong)*(int *)(lVar5 + 0x808) * 0x28;
      for (; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
        cVar4 = FSoftObjectPath::operator==(lVar6 + 0x10,&local_30);
        if (cVar4 != '\0') {
          bVar3 = true;
          goto LAB_140e85a40;
        }
      }
    }
  }
  bVar3 = false;
LAB_140e85a40:
  if ((bVar9) && (local_28 != 0)) {
    FMemory::Free();
  }
  if (bVar3) {
    uVar7 = FWeakObjectPtr::Get(param_1);
    lVar5 = UCableComponent::GetAttachedActor(uVar7);
    if (lVar5 != 0) {
      uVar7 = FWeakObjectPtr::Get(param_1);
      uVar7 = UCableComponent::GetAttachedActor(uVar7);
      uVar7 = FUN_1407c7930(uVar7,local_68);
      lVar5 = FUN_140e67de0(uVar7,0);
      if (local_68[0] != 0) {
        FMemory::Free();
      }
      if (lVar5 != 0) {
        uVar7 = FWeakObjectPtr::Get(param_1);
        uVar7 = UCableComponent::GetAttachedActor(uVar7);
        FUN_1407c7930(uVar7,&local_78);
        plVar1 = local_78 + local_70;
        for (plVar8 = local_78; plVar8 != plVar1; plVar8 = plVar8 + 1) {
          plVar2 = (longlong *)*plVar8;
          if (plVar2 != (longlong *)0x0) {
            lVar5 = FUN_14148cad0();
            if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
                lVar5 + 0x88)) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            if ((bVar9) && (cVar4 = (**(code **)(*plVar2 + 0x780))(plVar2), cVar4 != '\0')) {
              if (local_78 != (longlong *)0x0) {
                FMemory::Free();
              }
              goto LAB_140e85b67;
            }
          }
        }
        if (local_78 != (longlong *)0x0) {
          FMemory::Free(local_78);
        }
      }
    }
    uVar7 = 1;
  }
  else {
LAB_140e85b67:
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 140e85b90 FUN_140e85b90 body=12 status=ok
// SIG undefined FUN_140e85b90(void)

void FUN_140e85b90(longlong param_1)

{
  FUN_142cf39b0(*(undefined8 *)(param_1 + 0x4d8));
  return;
}



// FUNCTION 140e85ba0 FUN_140e85ba0 body=145 status=ok
// SIG undefined FUN_140e85ba0(void)

bool FUN_140e85ba0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  undefined1 local_18;
  
  lVar2 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_40,lVar2);
  local_18 = 0;
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    FMemory::Free();
  }
  iVar1 = FUN_140e68240(param_1 + 0x1a8,local_40);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return iVar1 != -1;
}



// FUNCTION 140e85c40 IsPlaying body=8 status=ok
// SIG undefined IsPlaying(void)

undefined1 UGeometryCacheComponent::IsPlaying(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x490);
}



// FUNCTION 140e85c60 FUN_140e85c60 body=8 status=ok
// SIG undefined FUN_140e85c60(void)

bool FUN_140e85c60(longlong param_1,longlong param_2)

{
  return param_2 == *(longlong *)(param_1 + 0x70);
}



// FUNCTION 140e85c70 FUN_140e85c70 body=8 status=ok
// SIG undefined FUN_140e85c70(void)

undefined1 FUN_140e85c70(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x1d1);
}



// FUNCTION 140e85c90 FUN_140e85c90 body=55 status=ok
// SIG undefined FUN_140e85c90(void)

ulonglong FUN_140e85c90(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0xb0);
  uVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if ((*(longlong *)(uVar1 + 0x20) != 0) &&
       (param_2 == *(longlong *)(*(longlong *)(uVar1 + 0x20) + 0x70))) break;
    uVar1 = uVar1 + 0x40;
  }
  return (ulonglong)*(byte *)(uVar1 + 0x18);
}



// FUNCTION 140e85cd0 FUN_140e85cd0 body=55 status=ok
// SIG undefined FUN_140e85cd0(void)

ulonglong FUN_140e85cd0(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar1 = *(ulonglong *)(param_1 + 0xb0);
  uVar2 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + uVar1;
  while( true ) {
    if (uVar1 == uVar2) {
      return uVar1 & 0xffffffffffffff00;
    }
    if (*(longlong *)(uVar1 + 0x20) == param_2) break;
    uVar1 = uVar1 + 0x40;
  }
  return (ulonglong)*(byte *)(uVar1 + 0x18);
}



// FUNCTION 140e85d10 FUN_140e85d10 body=8 status=ok
// SIG undefined FUN_140e85d10(void)

undefined1 FUN_140e85d10(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x10b8);
}



// FUNCTION 140e85d30 FUN_140e85d30 body=383 status=ok
// SIG undefined FUN_140e85d30(void)

ulonglong FUN_140e85d30(undefined8 param_1,longlong *param_2,undefined1 param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint7 uVar5;
  wchar_t *pwVar3;
  ulonglong uVar4;
  int iVar6;
  
  lVar1 = AIndianaUI::GetArmorComponent();
  pwVar3 = (wchar_t *)0x0;
  if (lVar1 != 0) {
    lVar2 = FUN_1414ba0d0();
    uVar5 = (uint7)((ulonglong)(lVar2 + 0x88) >> 8);
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      pwVar3 = (wchar_t *)((ulonglong)uVar5 << 8);
    }
    else {
      pwVar3 = (wchar_t *)CONCAT71(uVar5,1);
    }
    if ((char)pwVar3 != '\0') {
      if (*(longlong *)(lVar1 + 0x1e8) != 0) {
        uVar4 = FUN_1407cdf70(param_1,param_2,param_3);
        return uVar4;
      }
      if ((param_2 != (longlong *)0x0) &&
         (pwVar3 = L"No Region Set on Region Component",
         (wchar_t *)*param_2 != L"No Region Set on Region Component")) {
        iVar6 = 0;
        *(undefined4 *)(param_2 + 1) = 0;
        if (*(int *)((longlong)param_2 + 0xc) != 0x22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x22);
          iVar6 = (int)param_2[1];
        }
        *(int *)(param_2 + 1) = iVar6 + 0x22;
        if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x22) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
        }
        builtin_wcsncpy((wchar_t *)*param_2,L"No Region Set on Region Component",0x22);
        pwVar3 = (wchar_t *)0x0;
      }
      goto LAB_140e85e98;
    }
  }
  if ((param_2 != (longlong *)0x0) &&
     (pwVar3 = L"No Region Component", (wchar_t *)*param_2 != L"No Region Component")) {
    iVar6 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    if (*(int *)((longlong)param_2 + 0xc) != 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2,0x14);
      iVar6 = (int)param_2[1];
    }
    *(int *)(param_2 + 1) = iVar6 + 0x14;
    if (*(int *)((longlong)param_2 + 0xc) < iVar6 + 0x14) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2);
    }
    pwVar3 = (wchar_t *)*param_2;
    builtin_wcsncpy(pwVar3,L"No Region Component",0x14);
  }
LAB_140e85e98:
  return (ulonglong)pwVar3 & 0xffffffffffffff00;
}



// FUNCTION 140e85eb0 FUN_140e85eb0 body=119 status=ok
// SIG undefined FUN_140e85eb0(void)

ulonglong FUN_140e85eb0(longlong param_1,int param_2,int param_3)

{
  ulonglong in_RAX;
  int *piVar1;
  int *piVar2;
  
  if (param_3 == 0) {
    param_3 = *(int *)(param_1 + 200);
  }
  if (param_3 != 0) {
    piVar2 = *(int **)(param_1 + 0xd0);
    in_RAX = (ulonglong)*(int *)(param_1 + 0xd8);
    piVar1 = piVar2 + in_RAX * 0x16;
    for (; piVar2 != piVar1; piVar2 = piVar2 + 0x16) {
      if (*piVar2 == param_3) {
        if (piVar2 != (int *)0x0) {
          piVar1 = *(int **)(piVar2 + 0x12);
          piVar2 = piVar1 + (longlong)piVar2[0x14] * 2;
          goto joined_r0x000140e85f0b;
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
joined_r0x000140e85f0b:
  if (piVar1 == piVar2) {
    piVar1 = (int *)0x0;
LAB_140e85f20:
    return CONCAT71((int7)((ulonglong)piVar1 >> 8),piVar1 != (int *)0x0);
  }
  if (*piVar1 == param_2) goto LAB_140e85f20;
  piVar1 = piVar1 + 2;
  goto joined_r0x000140e85f0b;
}



// FUNCTION 140e85f30 FUN_140e85f30 body=129 status=ok
// SIG undefined FUN_140e85f30(void)

ulonglong FUN_140e85f30(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  int *piVar1;
  int *piVar2;
  
  if (param_4 != 0) {
    piVar2 = *(int **)(param_1 + 0xd0);
    in_RAX = (ulonglong)*(int *)(param_1 + 0xd8);
    piVar1 = piVar2 + in_RAX * 0x16;
    for (; piVar2 != piVar1; piVar2 = piVar2 + 0x16) {
      if (*piVar2 == param_4) {
        if (piVar2 != (int *)0x0) {
          piVar1 = *(int **)(piVar2 + 0xe);
          piVar2 = piVar1 + (longlong)piVar2[0x10] * 2;
          goto joined_r0x000140e85f88;
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
joined_r0x000140e85f88:
  if (piVar1 == piVar2) {
    piVar1 = (int *)0x0;
LAB_140e85fa6:
    return CONCAT71((int7)((ulonglong)piVar1 >> 8),piVar1 != (int *)0x0);
  }
  if ((*piVar1 == param_2) && (piVar1[1] == param_3)) goto LAB_140e85fa6;
  piVar1 = piVar1 + 2;
  goto joined_r0x000140e85f88;
}



// FUNCTION 140e85fc0 FUN_140e85fc0 body=145 status=ok
// SIG undefined FUN_140e85fc0(void)

ulonglong FUN_140e85fc0(longlong param_1,int param_2,int param_3,int param_4)

{
  ulonglong in_RAX;
  int *piVar1;
  int *piVar2;
  
  if (param_4 == 0) {
    param_4 = *(int *)(param_1 + 200);
  }
  if (param_4 != 0) {
    piVar2 = *(int **)(param_1 + 0xd0);
    in_RAX = (ulonglong)*(int *)(param_1 + 0xd8);
    piVar1 = piVar2 + in_RAX * 0x16;
    for (; piVar2 != piVar1; piVar2 = piVar2 + 0x16) {
      if (*piVar2 == param_4) {
        if (piVar2 != (int *)0x0) {
          piVar1 = *(int **)(piVar2 + 10);
          piVar2 = piVar1 + (longlong)piVar2[0xc] * 2;
          goto joined_r0x000140e86027;
        }
        break;
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
joined_r0x000140e86027:
  if (piVar1 == piVar2) {
    piVar1 = (int *)0x0;
LAB_140e86046:
    return CONCAT71((int7)((ulonglong)piVar1 >> 8),piVar1 != (int *)0x0);
  }
  if ((*piVar1 == param_2) && (piVar1[1] == param_3)) goto LAB_140e86046;
  piVar1 = piVar1 + 2;
  goto joined_r0x000140e86027;
}



// FUNCTION 140e86060 FUN_140e86060 body=145 status=ok
// SIG undefined FUN_140e86060(void)

bool FUN_140e86060(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 local_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  undefined1 local_18;
  
  lVar2 = TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_68);
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_40,lVar2);
  local_18 = 0;
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    FMemory::Free();
  }
  iVar1 = FUN_140e682d0(param_1 + 0x188,local_40);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x18) != 0) {
    FMemory::Free();
  }
  return iVar1 != -1;
}



// FUNCTION 140e86100 FUN_140e86100 body=103 status=ok
// SIG undefined FUN_140e86100(void)

undefined8 FUN_140e86100(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x57);
  if (cVar1 != '\0') {
    return 1;
  }
  if ((int)(uint)param_2 < (int)param_1[1]) {
    uVar2 = FUN_1407c3030((ulonglong)param_2 * 0xf8 + *param_1 + 0x40);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140e86180 FUN_140e86180 body=119 status=ok
// SIG undefined FUN_140e86180(void)

undefined8 FUN_140e86180(longlong *param_1,byte param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_1407c3030(param_1 + 0x57);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x6a);
    if (cVar1 == '\0') {
      if ((int)(uint)param_2 < (int)param_1[1]) {
        uVar2 = FUN_1407c3030((ulonglong)param_2 * 0xf8 + *param_1 + 0x40);
        return uVar2;
      }
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140e86200 HasTexture body=36 status=ok
// SIG undefined HasTexture(void)

undefined1 FHMDLayerDesc::HasTexture(longlong param_1)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x20) != 0) {
    cVar1 = FUN_141274520();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140e86260 FUN_140e86260 body=410 status=ok
// SIG undefined FUN_140e86260(void)

void FUN_140e86260(longlong param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  plVar5 = (longlong *)operator_new();
  local_10 = (longlong *)0x0;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_1445cb870;
    plVar5[2] = (longlong)&PTR_FUN_1445c8f30;
    plVar5[3] = 0;
    *(undefined4 *)(plVar5 + 4) = 0;
    plVar5[5] = *param_2;
    lVar4 = param_2[1];
    plVar5[6] = lVar4;
    if (lVar4 != 0) {
      LOCK();
      *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
      UNLOCK();
    }
    plVar5[2] = (longlong)&PTR_FUN_1445c8f70;
    plVar5[8] = 0;
    plVar5[9] = 0;
    plVar5[10] = 0;
    local_10 = plVar5;
  }
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  FUN_1404b8b20(local_18 + 1,param_1,FUN_140e88b00);
  plVar2 = local_10;
  plVar5 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar3 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar3 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar3 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar3);
  }
  puVar6 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 0x70));
  *puVar6 = plVar5;
  puVar6[1] = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
    UNLOCK();
  }
  FUN_140e8c5f0(param_1);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar2 + 1;
    lVar4 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
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
  plVar5 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_10 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*local_10)(local_10);
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
  return;
}



// FUNCTION 140e86430 FUN_140e86430 body=101 status=ok
// SIG undefined FUN_140e86430(void)

void FUN_140e86430(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_res10;
  
  local_res10 = param_2;
  cVar1 = FUN_1407c3030(param_1 + 0x328);
  FUN_142dafbc0(param_1 + 0x328,&local_res10);
  if (cVar1 == '\0') {
    cVar1 = FUN_1407c3030(param_1 + 0x328);
    if (cVar1 != '\0') {
      FUN_1414c4020(param_1,1);
    }
  }
  return;
}



// FUNCTION 140e864a0 FUN_140e864a0 body=77 status=ok
// SIG undefined FUN_140e864a0(void)

void FUN_140e864a0(longlong param_1,byte param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 local_res18 [2];
  
  if ((0 < *(int *)(param_1 + 8)) && ((int)(uint)param_2 < *(int *)(param_1 + 0x2b0))) {
    lVar1 = *(longlong *)(param_1 + 0x2a8);
    if (*(longlong *)(param_1 + 0x2a8) == 0) {
      lVar1 = param_1 + 0x48;
    }
    local_res18[0] = param_3;
    FUN_142dafbc0(lVar1 + (ulonglong)param_2 * 0x98,local_res18);
  }
  return;
}



// FUNCTION 140e864f0 FUN_140e864f0 body=222 status=ok
// SIG undefined FUN_140e864f0(void)

void FUN_140e864f0(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  
  if (((*(longlong *)(param_1 + 0x478) != 0) && (0.0 < ABS(param_2))) &&
     ((*(longlong *)(param_1 + 0x480) == 0 ||
      ((*(longlong *)(param_1 + 0x488) == 0 ||
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x120))(), cVar3 == '\0')))))) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x478) + 0xc0);
    if (((0.0 <= param_2) || (-fVar1 < param_2)) && ((param_2 <= 0.0 || (param_2 < fVar1)))) {
      param_2 = 0.0;
    }
    plVar2 = *(longlong **)(param_1 + 0x468);
    if ((((param_2 != 0.0) && (plVar2 != (longlong *)0x0)) &&
        ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) != 0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar3 != '\0')) {
      (**(code **)(*plVar2 + 0xca0))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140e865d0 FUN_140e865d0 body=222 status=ok
// SIG undefined FUN_140e865d0(void)

void FUN_140e865d0(longlong param_1,float param_2)

{
  float fVar1;
  longlong *plVar2;
  char cVar3;
  
  if (((*(longlong *)(param_1 + 0x478) != 0) && (0.0 < ABS(param_2))) &&
     ((*(longlong *)(param_1 + 0x480) == 0 ||
      ((*(longlong *)(param_1 + 0x488) == 0 ||
       (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x488) + 0x120))(), cVar3 == '\0')))))) {
    fVar1 = *(float *)(*(longlong *)(param_1 + 0x478) + 0xc0);
    if (((0.0 <= param_2) || (-fVar1 < param_2)) && ((param_2 <= 0.0 || (param_2 < fVar1)))) {
      param_2 = 0.0;
    }
    plVar2 = *(longlong **)(param_1 + 0x468);
    if ((((param_2 != 0.0) && (plVar2 != (longlong *)0x0)) &&
        ((*(uint *)((longlong)plVar2 + 0x4cc) >> 1 & 1) != 0)) &&
       (cVar3 = (**(code **)(*plVar2 + 0x768))(plVar2), cVar3 != '\0')) {
      (**(code **)(*plVar2 + 0xc98))(plVar2,param_2);
    }
  }
  return;
}



// FUNCTION 140e866b0 FUN_140e866b0 body=77 status=ok
// SIG undefined FUN_140e866b0(void)

void FUN_140e866b0(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x468) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x468) + 0xfd8))();
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x2b) != '\0')) goto LAB_140e866e8;
  }
  param_2 = param_2 ^ 0x80000000;
LAB_140e866e8:
  FUN_140e865d0(param_1,param_2);
  return;
}



// FUNCTION 140e86700 FUN_140e86700 body=77 status=ok
// SIG undefined FUN_140e86700(void)

void FUN_140e86700(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x468) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x468) + 0xfd8))();
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0x35) != '\0')) goto LAB_140e86738;
  }
  param_2 = param_2 ^ 0x80000000;
LAB_140e86738:
  FUN_140e865d0(param_1,param_2);
  return;
}



// FUNCTION 140e86750 FUN_140e86750 body=24 status=ok
// SIG undefined FUN_140e86750(void)

void FUN_140e86750(longlong param_1,undefined8 param_2,char param_3)

{
  if (param_3 != '\0') {
    FCollisionQueryParams::AddIgnoredActor(param_2,param_1 + -0x4c8);
    return;
  }
  return;
}



// FUNCTION 140e86770 FUN_140e86770 body=242 status=ok
// SIG undefined FUN_140e86770(void)

void FUN_140e86770(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 local_78 [24];
  undefined4 local_60;
  undefined8 local_5c;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined1 local_38 [24];
  longlong local_20;
  undefined1 local_10;
  
  local_60 = 0xffffffff;
  local_48 = 0;
  local_50 = 0;
  local_40 = 0;
  local_5c = 0;
  if (param_2 == 0) {
    local_50 = 0;
  }
  else {
    uVar2 = FSoftObjectPath::FSoftObjectPath(local_78);
    FSoftObjectPath::operator=(&local_50,uVar2);
    FWeakObjectPtr::operator=(&local_60,param_2);
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    local_5c = CONCAT44(DAT_1464b56f4,(undefined4)local_5c);
  }
  TSoftClassPtr<AItem>::TSoftClassPtr<AItem>(local_38,&local_60);
  local_10 = 1;
  if (local_48 != 0) {
    FMemory::Free();
  }
  iVar1 = FUN_140e68190(param_1 + 0x188,local_38);
  if (local_20 != 0) {
    FMemory::Free();
  }
  if (iVar1 != -1) {
    *(undefined1 *)(*(longlong *)(param_1 + 0x188) + 0x28 + (longlong)iVar1 * 0x30) = 0;
  }
  return;
}



// FUNCTION 140e86870 FUN_140e86870 body=143 status=ok
// SIG undefined FUN_140e86870(void)

void FUN_140e86870(longlong param_1,int param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0x48);
  iVar3 = *(int *)(param_1 + 0x50);
  lVar2 = (longlong)iVar3 * 8;
  piVar1 = piVar5 + (longlong)iVar3 * 2;
  while( true ) {
    if (piVar5 == piVar1) {
      *(int *)(param_1 + 0x50) = iVar3 + 1;
      if (*(int *)(param_1 + 0x54) < iVar3 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                  ((longlong *)(param_1 + 0x48),iVar3);
      }
      lVar4 = *(longlong *)(param_1 + 0x48);
      *(int *)(lVar2 + lVar4) = param_2;
      *(uint *)(lVar2 + 4 + lVar4) = param_3;
      return;
    }
    if (*piVar5 == param_2) break;
    piVar5 = piVar5 + 2;
  }
  if (param_3 <= (uint)piVar5[1]) {
    param_3 = piVar5[1];
  }
  piVar5[1] = param_3;
  return;
}



// FUNCTION 140e86900 FUN_140e86900 body=485 status=ok
// SIG undefined FUN_140e86900(void)

void FUN_140e86900(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 local_res8;
  
  if (*(longlong *)(param_1 + 0x48) == 0) {
    lVar5 = FUN_1405ec200(param_1 + 0x20);
    if (lVar5 == 0) {
LAB_140e86965:
      lVar5 = 0;
    }
    else {
      lVar6 = UAESHelper::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8
           ) != lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) goto LAB_140e86965;
    }
    *(longlong *)(param_1 + 0x48) = lVar5;
    if (lVar5 == 0) {
      return;
    }
  }
  if (param_3 != '\x04') {
    return;
  }
  iVar4 = FUN_140e81420(param_1 + -0x28);
  lVar5 = *(longlong *)(param_1 + 0x48);
  if (lVar5 != 0) goto LAB_140e869e5;
  lVar5 = FUN_1405ec200(param_1 + 0x20);
  if (lVar5 == 0) {
LAB_140e869d6:
    lVar5 = 0;
  }
  else {
    lVar6 = UAESHelper::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140e869d6;
  }
  *(longlong *)(param_1 + 0x48) = lVar5;
  if (lVar5 == 0) {
    return;
  }
LAB_140e869e5:
  if ((iVar4 < 0) || (*(int *)(lVar5 + 0x38) <= iVar4)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    lVar6 = *(longlong *)((longlong)iVar4 * 0x58 + 0x40 + *(longlong *)(lVar5 + 0x30));
    lVar5 = lVar6 + (longlong)*(int *)((longlong)iVar4 * 0x58 + 0x48 + *(longlong *)(lVar5 + 0x30))
                    * 0x28;
    for (; lVar6 != lVar5; lVar6 = lVar6 + 0x28) {
      plVar2 = *(longlong **)(lVar6 + 0x18);
      iVar4 = *(int *)(lVar6 + 0x20);
      if (plVar2 != plVar2 + (longlong)iVar4 * 3) {
        plVar11 = plVar2 + 2;
        do {
          if (*plVar11 != 0) {
            lVar7 = FUN_142f71d80();
            lVar10 = *plVar11;
            for (lVar9 = lVar10; lVar9 != 0; lVar9 = *(longlong *)(lVar9 + 0x30)) {
              if (lVar9 == lVar7) goto LAB_140e86a76;
            }
          }
          lVar10 = 0;
LAB_140e86a76:
          if (param_2 != 0) {
            lVar7 = FUN_142f71d80();
            lVar9 = param_2;
            do {
              lVar8 = param_2;
              if (lVar9 == lVar7) goto LAB_140e86a93;
              lVar9 = *(longlong *)(lVar9 + 0x30);
            } while (lVar9 != 0);
          }
          lVar8 = 0;
LAB_140e86a93:
          if (lVar10 == lVar8) {
            local_res8 = *(undefined8 *)(lVar6 + 0x10);
            TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
            AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x60,&local_res8);
            break;
          }
          plVar1 = plVar11 + 1;
          plVar11 = plVar11 + 3;
        } while (plVar1 != plVar2 + (longlong)iVar4 * 3);
      }
    }
  }
  return;
}



// FUNCTION 140e86c70 FUN_140e86c70 body=67 status=ok
// SIG undefined FUN_140e86c70(void)

void FUN_140e86c70(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x2c8);
  if (cVar2 != '\0') {
    lVar1 = FWeakObjectPtr::Get(param_1 + 0x2c8);
    FUN_1407665e0(lVar1 + 0x1418,param_1);
  }
  return;
}



// FUNCTION 140e86cc0 FUN_140e86cc0 body=190 status=ok
// SIG undefined FUN_140e86cc0(void)

void FUN_140e86cc0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  FUN_142ca61c0();
  lVar2 = FUN_142269f40(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_141404840();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e86d16;
  }
  lVar2 = 0;
LAB_140e86d16:
  *(longlong *)(param_1 + 0x538) = lVar2;
  if (lVar2 == 0) {
    lVar2 = FUN_142269f40(param_1);
    if (lVar2 != 0) {
      lVar3 = FUN_1414ca080();
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
        uVar4 = FUN_140e80eb0(lVar2);
        *(undefined8 *)(param_1 + 0x538) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 140e86d80 FUN_140e86d80 body=56 status=ok
// SIG undefined FUN_140e86d80(void)

void FUN_140e86d80(longlong param_1)

{
  undefined1 uVar1;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (*(longlong *)(param_1 + 0x538) != 0) {
    uVar1 = FUN_140e539d0();
    *(undefined1 *)(param_1 + 0x540) = uVar1;
    return;
  }
  *(undefined1 *)(param_1 + 0x540) = 1;
  return;
}



// FUNCTION 140e86dc0 FUN_140e86dc0 body=257 status=ok
// SIG undefined FUN_140e86dc0(void)

byte FUN_140e86dc0(longlong param_1,longlong *param_2,longlong *param_3,undefined1 *param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x18);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x19);
  local_res8 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = FUN_1428dfc70();
  bVar1 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,&local_res8,0);
  *(undefined8 *)(param_1 + 0x10) = local_res8;
  local_res8 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = FUN_1413c0f50();
  bVar2 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,&local_res8,0);
  *(undefined8 *)(param_1 + 0x20) = local_res8;
  local_res8 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = FUN_1414ecd30();
  bVar3 = (**(code **)(*param_3 + 0x280))(param_3,param_2,uVar4,&local_res8,0);
  *(undefined8 *)(param_1 + 0x28) = local_res8;
  *param_4 = 1;
  return bVar3 & bVar1 & 1 & bVar2;
}



// FUNCTION 140e86ed0 FUN_140e86ed0 body=255 status=ok
// SIG undefined FUN_140e86ed0(void)

void FUN_140e86ed0(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))();
  }
  plVar1 = (longlong *)param_1[0x23];
  if (plVar1 != (longlong *)0x0) {
    lVar6 = FUN_14145f370();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x768))(plVar1);
      if ((cVar3 != '\0') && (*(char *)((longlong)param_1 + 0x459) != '\0')) {
        iVar4 = FUN_140e73e10(param_1);
        if (*(int *)((longlong)param_1 + 0x45c) != iVar4) {
          uVar5 = FUN_140e73e10(param_1);
          *(undefined4 *)((longlong)param_1 + 0x45c) = uVar5;
          if ((char)param_1[0x25] != '\x03') {
            plVar1 = (longlong *)param_1[0x8c];
            *(undefined1 *)((longlong)param_1 + 0x459) = 0;
            if ((plVar1 != (longlong *)0x0) && ((char)plVar1[0x8f] != '\0')) {
              (**(code **)(*plVar1 + 0x600))(plVar1);
              *(undefined1 *)(plVar1 + 0x8f) = 0;
            }
          }
          FUN_1414b7340(param_1,0,*(undefined4 *)((longlong)param_1 + 0x45c));
        }
      }
    }
  }
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x99);
  return;
}



// FUNCTION 140e86fd0 FUN_140e86fd0 body=278 status=ok
// SIG undefined FUN_140e86fd0(void)

void FUN_140e86fd0(longlong param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  if ((*(int *)(param_1 + 0x180) != 0) && (*(longlong **)(param_1 + 0x178) != (longlong *)0x0)) {
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x178) + 0x18))();
    if (cVar3 != '\0') {
      bVar2 = true;
      goto LAB_140e87015;
    }
  }
  bVar2 = false;
LAB_140e87015:
  if (bVar2) {
    if (*(int *)(param_1 + 0x180) == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(param_1 + 0x178);
    }
    (**(code **)(*plVar6 + 0x40))(plVar6,0);
  }
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar4 = FUN_14145f370();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_14145eb20(lVar1,param_2,param_3,param_4);
      if (param_4 != 0) {
        *(undefined8 *)(param_4 + 0x8e0) = param_3;
        *(longlong *)(param_4 + 0x8e8) = param_2;
        FUN_141242620(param_4,lVar1);
        if (param_2 != 0) {
          uVar5 = UGameplayTagAssetInterface::GetPrivateStaticClass();
          plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar5);
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x58))(plVar6,lVar1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e870f0 FUN_140e870f0 body=481 status=ok
// SIG undefined FUN_140e870f0(void)

void FUN_140e870f0(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res10 [8];
  longlong *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  cVar3 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar3 == '\0') {
    return;
  }
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar8 = (undefined2 *)*param_3;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
  if (iVar4 != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0x49) = 1;
  FUN_140e81ce0(&local_38,0);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0xe8))(local_38,param_1 + 0x60);
  }
  if (param_4 != 1) {
    if ((*(char *)(param_1 + 0x48) == '\0') || (param_4 != 4)) {
      if (param_4 != 6) {
        *(undefined4 *)(param_1 + 0x28) = 5;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x28) = 4;
    }
    TBaseDelegate<void>::ExecuteIfBound(param_1 + 8);
    goto LAB_140e8727b;
  }
  local_48 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_40 = 3;
  local_48 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_1445cb7c0;
    plVar5[2] = (longlong)FUN_140e89360;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_1445cb808;
  }
  puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x18))(local_38,local_res10,&local_48);
  *(undefined8 *)(param_1 + 0x58) = *puVar7;
  if (local_40 == 0) {
LAB_140e87236:
    if (local_48 != (longlong *)0x0) {
      FMemory::Free(local_48);
    }
  }
  else if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x28))(local_48,0);
    if (local_48 != (longlong *)0x0) {
      local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
    }
    local_40 = 0;
    goto LAB_140e87236;
  }
  (**(code **)(*local_38 + 0x10))(local_38,param_1 + 0x18,param_1 + 0x30);
LAB_140e8727b:
  plVar5 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140e87300 FUN_140e87300 body=560 status=ok
// SIG undefined FUN_140e87300(void)

void FUN_140e87300(longlong param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 local_res8 [8];
  undefined1 local_28 [8];
  longlong *local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  plVar9 = *(longlong **)(param_1 + 0x228);
  plVar2 = plVar9 + *(int *)(param_1 + 0x230);
  do {
    if (plVar9 == plVar2) {
LAB_140e87389:
      if ((param_2 != 0) && (param_2 == *(longlong *)(param_1 + 0x280))) {
        *(undefined8 *)(param_1 + 0x280) = 0;
        cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x248);
        if ((cVar5 != '\0') &&
           ((((lVar6 = *(longlong *)(param_1 + 0x250), *(char *)(lVar6 + 0xf8) != '\0' &&
              (lVar6 != 0)) && (*(longlong *)(param_1 + 0x218) != 0)) &&
            ((*(byte *)(*(longlong *)(param_1 + 0x218) + 0x80) & 1) != 0)))) {
          FUN_1411fa890(lVar6,0,DAT_146870fa0);
          cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x248);
          if ((cVar5 == '\0') ||
             (lVar6 = *(longlong *)(param_1 + 0x250),
             *(char *)(*(longlong *)(param_1 + 0x250) + 0xf8) == '\0')) {
            lVar6 = 0;
          }
          local_res8[0] = FUN_142dcfc60(*(undefined8 *)(lVar6 + 0x40));
          FUN_1411f1980(local_18,*(undefined8 *)(param_1 + 0x218),1,local_res8,0);
          if (local_10 != (longlong *)0x0) {
            LOCK();
            plVar2 = local_10 + 1;
            lVar6 = *plVar2;
            *(int *)plVar2 = (int)*plVar2 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_10)(local_10);
              LOCK();
              piVar1 = (int *)((longlong)local_10 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_10 + 8))(local_10,1);
              }
            }
          }
          if (*(longlong *)(param_1 + 0x268) != 0) {
            lVar7 = FUN_142e20fc0();
            lVar6 = *(longlong *)(param_1 + 0x268);
            lVar8 = lVar6;
            if (lVar6 != 0) {
              while (lVar8 != lVar7) {
                lVar8 = *(longlong *)(lVar8 + 0x30);
                if (lVar8 == 0) {
                  return;
                }
              }
              if ((lVar6 != 0) &&
                 (FUN_140e8b4b0(param_1,local_28,lVar6,0), plVar2 = local_20,
                 local_20 != (longlong *)0x0)) {
                LOCK();
                plVar9 = local_20 + 1;
                lVar6 = *plVar9;
                *(int *)plVar9 = (int)*plVar9 + -1;
                UNLOCK();
                if ((int)lVar6 == 1) {
                  (**(code **)*local_20)(local_20);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar2 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
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
      return;
    }
    if (*plVar9 == param_2) {
      if (param_2 == 0) {
LAB_140e8737e:
        lVar6 = 0;
      }
      else {
        lVar6 = FUN_1414ca080();
        if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        lVar6 = param_2;
        if (!bVar4) goto LAB_140e8737e;
      }
      FUN_140e8e810(param_1,lVar6);
      goto LAB_140e87389;
    }
    plVar9 = plVar9 + 1;
  } while( true );
}



// FUNCTION 140e87530 FUN_140e87530 body=147 status=ok
// SIG undefined FUN_140e87530(void)

void FUN_140e87530(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar3 = *(longlong **)(param_1 + 0x228);
  plVar1 = plVar3 + *(int *)(param_1 + 0x230);
  if (plVar3 == plVar1) {
    return;
  }
  while (*plVar3 != param_2) {
    plVar3 = plVar3 + 1;
    if (plVar3 == plVar1) {
      return;
    }
  }
  if (param_2 != 0) {
    lVar4 = FUN_1414ca080();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140e875ad;
  }
  param_2 = 0;
LAB_140e875ad:
  FUN_140e8e810(param_1,param_2);
  return;
}



// FUNCTION 140e875d0 FUN_140e875d0 body=791 status=ok
// SIG undefined FUN_140e875d0(void)

void FUN_140e875d0(longlong param_1,longlong *param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  int *piVar13;
  longlong **pplVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *local_res10;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  piVar13 = *(int **)(param_1 + 0x100);
  plVar15 = (longlong *)0x0;
  iVar4 = *(int *)(param_1 + 200);
  iVar5 = 0;
  local_48 = (longlong *)0x0;
  local_3c = 0;
  piVar1 = piVar13 + (longlong)*(int *)(param_1 + 0x108) * 0x12;
  plVar16 = plVar15;
  local_res10 = param_2;
  if (piVar13 != piVar1) {
    pplVar14 = (longlong **)(piVar13 + 2);
    plVar11 = plVar15;
    plVar9 = plVar15;
    do {
      if ((*piVar13 == iVar4) && (&local_48 != pplVar14)) {
        local_40 = *(uint *)(pplVar14 + 1);
        lVar12 = (longlong)(int)local_40;
        plVar11 = *pplVar14;
        if ((local_40 == 0) && ((int)plVar9 == 0)) {
          local_3c = 0;
          plVar11 = (longlong *)0x0;
          plVar9 = plVar15;
          plVar16 = local_48;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_48,local_40);
          plVar16 = local_48;
          _guard_xfg_dispatch_icall_nop(local_48,plVar11,lVar12 << 3);
          plVar9 = (longlong *)(ulonglong)local_3c;
          plVar11 = (longlong *)(ulonglong)local_40;
        }
      }
      iVar5 = (int)plVar11;
      piVar13 = piVar13 + 0x12;
      pplVar14 = pplVar14 + 9;
    } while (piVar13 != piVar1);
  }
  for (plVar11 = plVar16; plVar11 != plVar16 + iVar5; plVar11 = plVar11 + 1) {
    plVar9 = plVar15;
    if (*plVar11 != 0) {
      plVar6 = (longlong *)FUN_142dfdfe0();
      for (plVar8 = (longlong *)*plVar11;
          (plVar9 = plVar15, plVar8 != (longlong *)0x0 &&
          (plVar9 = (longlong *)*plVar11, plVar8 != plVar6)); plVar8 = (longlong *)plVar8[6]) {
      }
    }
    plVar8 = plVar15;
    if (param_2 != (longlong *)0x0) {
      plVar7 = (longlong *)FUN_142dfdfe0();
      plVar6 = param_2;
      do {
        plVar8 = param_2;
        if (plVar6 == plVar7) break;
        plVar6 = (longlong *)plVar6[6];
        plVar8 = plVar15;
      } while (plVar6 != (longlong *)0x0);
    }
    if (plVar9 == plVar8) {
      plVar11 = plVar15;
      if (*(longlong *)(param_1 + 0x110) != 0) {
        plVar11 = *(longlong **)(*(longlong *)(param_1 + 0x110) + 0xc98);
      }
      if (plVar11 != (longlong *)0x0) {
        plVar9 = plVar15;
        if (param_2 == (longlong *)0x0) goto LAB_140e87751;
        plVar6 = (longlong *)FUN_142dfdfe0();
        plVar8 = param_2;
        goto LAB_140e87740;
      }
      break;
    }
  }
  goto LAB_140e878c2;
  while (plVar8 = (longlong *)plVar8[6], plVar9 = plVar15, plVar8 != (longlong *)0x0) {
LAB_140e87740:
    plVar9 = param_2;
    if (plVar8 == plVar6) break;
  }
LAB_140e87751:
  cVar3 = FUN_142dd3360(plVar11,plVar9);
  if ((cVar3 != '\0') && (param_2 != (longlong *)0x0)) {
    plVar9 = (longlong *)FUN_142dfdfe0();
    plVar11 = param_2;
    do {
      if (plVar11 == plVar9) {
        plVar9 = (longlong *)FUN_142dfdfe0();
        plVar11 = param_2;
        goto LAB_140e87792;
      }
      plVar11 = (longlong *)plVar11[6];
    } while (plVar11 != (longlong *)0x0);
  }
  goto LAB_140e878c2;
  while (plVar11 = (longlong *)plVar11[6], plVar8 = plVar15, plVar11 != (longlong *)0x0) {
LAB_140e87792:
    plVar8 = param_2;
    if (plVar11 == plVar9) break;
  }
  lVar12 = plVar8[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar12 = plVar8[0x1f];
    if (lVar12 == 0) goto LAB_140e878c2;
  }
  lVar10 = FUN_1413f2350();
  if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8)
      != lVar10 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (bVar2) {
    iVar4 = FUN_140e68100(param_1 + 0x100,&local_res10);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x108) <= iVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = FUN_140e67c10(*(longlong *)(param_1 + 0x100) + 0x18 + (longlong)iVar4 * 0x48,
                            &local_res10);
      if (cVar3 == '\0') {
        if ((*(longlong *)(param_1 + 0x110) != 0) && (iVar5 = FUN_142235230(), iVar5 != 3)) {
          FUN_140e79210(param_1,*(undefined4 *)(param_1 + 200),lVar12);
        }
        lVar12 = *(longlong *)(param_1 + 0x100) + (longlong)iVar4 * 0x48;
        iVar4 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                          (lVar12 + 0x18,&local_res10);
        if (iVar4 == -1) {
          iVar4 = *(int *)(lVar12 + 0x20);
          *(int *)(lVar12 + 0x20) = iVar4 + 1;
          if (*(int *)(lVar12 + 0x24) < iVar4 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar12 + 0x18,iVar4);
          }
          *(longlong **)(*(longlong *)(lVar12 + 0x18) + (longlong)iVar4 * 8) = param_2;
        }
      }
    }
  }
LAB_140e878c2:
  if (plVar16 != (longlong *)0x0) {
    FMemory::Free(plVar16);
  }
  return;
}



// FUNCTION 140e878f0 FUN_140e878f0 body=189 status=ok
// SIG undefined FUN_140e878f0(void)

void FUN_140e878f0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = 1.0;
    if (lVar2 != 0) {
      fVar3 = (*(float *)(lVar2 + 0x74) - *(float *)(lVar2 + 0x70)) * param_2 +
              *(float *)(lVar2 + 0x70);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1700)) {
      *(float *)(lVar1 + 0x1700) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      *(float *)(lVar1 + 0xaf0) = fVar3;
      *(float *)(lVar1 + 0xaf4) = fVar3;
      *(float *)(lVar1 + 0xaf8) = fVar3;
      *(undefined4 *)(lVar1 + 0xafc) = 0x3f800000;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e879c0 FUN_140e879c0 body=34 status=ok
// SIG undefined FUN_140e879c0(void)

void FUN_140e879c0(longlong param_1)

{
  FUN_140e8d010();
  FUN_1414c3fe0(param_1,*(undefined1 *)(param_1 + 0x2f1));
  return;
}



// FUNCTION 140e879f0 thunk_FUN_140e8d170 body=5 status=ok
// SIG undefined thunk_FUN_140e8d170(void)

void thunk_FUN_140e8d170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x2388) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x2388) + 0x2ad0), plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x408))();
      lVar2 = *(longlong *)(param_1 + 0x218);
    }
    if (*(longlong *)(lVar2 + 0x4c0) != 0) {
      FUN_142378260(*(longlong *)(lVar2 + 0x4c0),DAT_146870f98);
      return;
    }
  }
  return;
}



// FUNCTION 140e87a00 FUN_140e87a00 body=155 status=ok
// SIG undefined FUN_140e87a00(void)

void FUN_140e87a00(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (*(float *)(lVar2 + 0x5c) - *(float *)(lVar2 + 0x58)) * param_2 +
              *(float *)(lVar2 + 0x58);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1704)) {
      *(float *)(lVar1 + 0x1704) = fVar3;
      *(float *)(lVar1 + 0xfa8) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e87aa0 FUN_140e87aa0 body=213 status=ok
// SIG undefined FUN_140e87aa0(void)

void FUN_140e87aa0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *local_18;
  longlong *local_10;
  
  cVar6 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar6 != '\0') {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 0x30);
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    uVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if ((int)uVar7 == 0) {
      FUN_140e81ce0(&local_18,uVar7);
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x70))(local_18,param_1 + 0x40);
      }
      *(undefined4 *)(param_1 + 0x28) = param_4;
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 8);
      plVar5 = local_10;
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
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e87b80 FUN_140e87b80 body=332 status=ok
// SIG undefined FUN_140e87b80(void)

void FUN_140e87b80(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_28;
  longlong *local_20;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *plVar1;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)();
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  local_20 = (longlong *)0x0;
  if (plVar1 != &local_28) {
    *plVar1 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_20);
    plVar1 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  uVar8 = FUN_140e942b0(*(undefined4 *)(lVar6 + 0x28));
  FUN_1404ed3e0(param_1 + 0x48,lVar6 + 0x18,lVar6 + 0x30,uVar8);
  FUN_140e8c5f0(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140e87ce0 FUN_140e87ce0 body=44 status=ok
// SIG undefined FUN_140e87ce0(void)

void FUN_140e87ce0(longlong param_1)

{
  if (*(char *)(param_1 + 0x1d1) == '\0') {
    FUN_140e94310(param_1,1);
    FUN_1414b70c0(param_1);
    return;
  }
  return;
}



// FUNCTION 140e87d10 FUN_140e87d10 body=44 status=ok
// SIG undefined FUN_140e87d10(void)

void FUN_140e87d10(longlong param_1)

{
  if (*(char *)(param_1 + 0x1d1) == '\0') {
    FUN_140e94310(param_1,0);
    FUN_1414b6fc0(param_1);
    return;
  }
  return;
}



// FUNCTION 140e87d40 FUN_140e87d40 body=671 status=ok
// SIG undefined FUN_140e87d40(void)

void FUN_140e87d40(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res10 [8];
  undefined1 local_68 [8];
  longlong *local_60;
  int local_58;
  longlong *local_50;
  int local_48;
  longlong *local_40;
  longlong *local_38;
  
  cVar3 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar3 == '\0') {
    return;
  }
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar8 = (undefined2 *)*param_3;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
  if (iVar4 != 0) {
    return;
  }
  FUN_140e81ce0(&local_40,0);
  if (local_40 == (longlong *)0x0) goto LAB_140e87f88;
  (**(code **)(*local_40 + 0xc0))(local_40,param_1 + 0x50);
  if (param_4 != 1) {
    if (param_4 != 4) {
      *(int *)(param_1 + 0x28) = param_4;
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 8);
      goto LAB_140e87f88;
    }
    *(undefined1 *)(param_1 + 0x48) = 1;
    local_50 = (longlong *)0x0;
    plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
    local_48 = 3;
    local_50 = plVar5;
    if (plVar5 != (longlong *)0x0) {
      plVar5[1] = param_1;
      *plVar5 = (longlong)&DAT_143f3ed00;
      plVar5[2] = (longlong)FUN_140e870f0;
      lVar6 = FDelegateHandle::GenerateNewID();
      plVar5[4] = lVar6;
      *plVar5 = (longlong)&PTR_GetPoolName_143f3ed48;
    }
    puVar7 = (undefined8 *)(**(code **)(*local_40 + 0xe0))(local_40,local_68,&local_50);
    *(undefined8 *)(param_1 + 0x60) = *puVar7;
    if (local_48 == 0) {
LAB_140e87f59:
      if (local_50 != (longlong *)0x0) {
        FMemory::Free(local_50);
      }
    }
    else if (local_50 != (longlong *)0x0) {
      (**(code **)(*local_50 + 0x28))(local_50,0);
      if (local_50 != (longlong *)0x0) {
        local_50 = (longlong *)FMemory::Realloc(local_50,0,0);
      }
      local_48 = 0;
      goto LAB_140e87f59;
    }
    (**(code **)(*local_40 + 0xd8))(local_40,param_1 + 0x18,param_1 + 0x30);
    goto LAB_140e87f88;
  }
  local_60 = (longlong *)0x0;
  plVar5 = (longlong *)FMemory::Realloc(0,0x30,0);
  local_58 = 3;
  local_60 = plVar5;
  if (plVar5 != (longlong *)0x0) {
    plVar5[1] = param_1;
    *plVar5 = (longlong)&PTR_GetPoolName_1445cb7c0;
    plVar5[2] = (longlong)FUN_140e89360;
    lVar6 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar6;
    *plVar5 = (longlong)&PTR_GetPoolName_1445cb808;
  }
  puVar7 = (undefined8 *)(**(code **)(*local_40 + 0x18))(local_40,local_res10,&local_60);
  *(undefined8 *)(param_1 + 0x58) = *puVar7;
  if (local_58 == 0) {
LAB_140e87e83:
    if (local_60 != (longlong *)0x0) {
      FMemory::Free(local_60);
    }
  }
  else if (local_60 != (longlong *)0x0) {
    (**(code **)(*local_60 + 0x28))(local_60,0);
    if (local_60 != (longlong *)0x0) {
      local_60 = (longlong *)FMemory::Realloc(local_60,0,0);
    }
    local_58 = 0;
    goto LAB_140e87e83;
  }
  (**(code **)(*local_40 + 0x10))(local_40,param_1 + 0x18,param_1 + 0x30);
LAB_140e87f88:
  plVar5 = local_38;
  if (local_38 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_38 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*local_38)(local_38);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_38 + 8))(local_38,1);
      }
    }
  }
  return;
}



// FUNCTION 140e88000 FUN_140e88000 body=190 status=ok
// SIG undefined FUN_140e88000(void)

void FUN_140e88000(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 local_28 [32];
  
  lVar1 = param_1[0x2f];
  if (lVar1 != 0) {
    lVar3 = UMovieSceneIntegerSection::GetPrivateStaticClass();
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
      if (*(char *)(lVar1 + 0x160) != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000140e8806c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x400))(param_1);
        return;
      }
      *(undefined1 *)(param_1 + 0x3d) = 0;
      if (param_1[0x32] != 0) {
        FUN_1405a3150(param_1[0x32],local_28,*(undefined8 *)(param_1[0x2f] + 0xa0),0);
        FUN_140591060(local_28);
      }
      FUN_1414b7100(param_1);
    }
  }
  return;
}



// FUNCTION 140e88150 FUN_140e88150 body=284 status=ok
// SIG undefined FUN_140e88150(void)

void FUN_140e88150(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x170c) != param_2)) {
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    *(char *)(lVar1 + 0x170c) = param_2;
    if (*(longlong *)(lVar1 + 0x468) != 0) {
      FString::PrintfImpl(&local_28,L"r.Tonemapper.Film %d",param_2);
      psVar4 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar4 = local_28;
      }
      local_38 = 0;
      local_30 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar4[lVar3] != 0);
        uVar2 = (int)lVar3 + 1;
        local_30 = (ulonglong)uVar2;
        if (0 < (int)uVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar4,(longlong)(int)uVar2 * 2);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x468) + 0xd28))
                (*(longlong **)(lVar1 + 0x468),local_18,&local_38,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_28 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e88270 FUN_140e88270 body=220 status=ok
// SIG undefined FUN_140e88270(void)

void FUN_140e88270(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x1710) != param_2)) {
    lVar2 = *(longlong *)(lVar1 + 0x478);
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    *(int *)(lVar1 + 0x1710) = param_2;
    if ((lVar2 != 0) && ((-1 < param_2 && (param_2 < *(int *)(lVar2 + 0xe0))))) {
      *(undefined8 *)(lVar1 + 0xf70) =
           *(undefined8 *)(*(longlong *)(lVar2 + 0xd8) + (longlong)param_2 * 8);
    }
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
    }
    if (((*(longlong *)(lVar1 + 0x1760) != 0) && (*(longlong *)(lVar1 + 0x468) != 0)) &&
       (*(longlong *)(*(longlong *)(lVar1 + 0x468) + 0xc58) != 0)) {
      iVar3 = FUN_142dcff80();
      if (iVar3 < 1) {
        FUN_141460200(*(undefined8 *)(lVar1 + 0x468),*(undefined8 *)(lVar1 + 0x1760));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e88350 FUN_140e88350 body=113 status=ok
// SIG undefined FUN_140e88350(void)

void FUN_140e88350(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x1714))) {
    *(float *)(lVar1 + 0x1714) = param_2;
    *(float *)(lVar1 + 0xf6c) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e883d0 FUN_140e883d0 body=116 status=ok
// SIG undefined FUN_140e883d0(void)

void FUN_140e883d0(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x298) == 0) {
    return;
  }
  lVar2 = FUN_142cc1680(*(longlong *)(param_1 + 0x298),*(undefined8 *)(param_1 + 0x280));
  if (lVar2 != 0) {
    lVar3 = FUN_142e5c1e0();
    if ((*(int *)(*(longlong *)(lVar2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e88432;
  }
  lVar2 = 0;
LAB_140e88432:
  *(longlong *)(param_1 + 0x2a0) = lVar2;
  return;
}



// FUNCTION 140e88450 FUN_140e88450 body=155 status=ok
// SIG undefined FUN_140e88450(void)

void FUN_140e88450(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (*(float *)(lVar2 + 100) - *(float *)(lVar2 + 0x60)) * param_2 +
              *(float *)(lVar2 + 0x60);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1718)) {
      *(float *)(lVar1 + 0x1718) = fVar3;
      *(float *)(lVar1 + 0xf90) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e884f0 FUN_140e884f0 body=155 status=ok
// SIG undefined FUN_140e884f0(void)

void FUN_140e884f0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (*(float *)(lVar2 + 0x6c) - *(float *)(lVar2 + 0x68)) * param_2 +
              *(float *)(lVar2 + 0x68);
    }
    if (fVar3 != *(float *)(lVar1 + 0x171c)) {
      *(float *)(lVar1 + 0x171c) = fVar3;
      *(float *)(lVar1 + 0xf9c) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e88590 FUN_140e88590 body=164 status=ok
// SIG undefined FUN_140e88590(void)

void FUN_140e88590(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (*(float *)(lVar2 + 0xd0) - *(float *)(lVar2 + 0xcc)) * param_2 +
              *(float *)(lVar2 + 0xcc);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1720)) {
      *(float *)(lVar1 + 0x1720) = fVar3;
      *(float *)(lVar1 + 0xccc) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e88640 FUN_140e88640 body=198 status=ok
// SIG undefined FUN_140e88640(void)

void FUN_140e88640(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = 1.0;
    if (lVar2 != 0) {
      fVar3 = (*(float *)(lVar2 + 0x8c) - *(float *)(lVar2 + 0x88)) * param_2 +
              *(float *)(lVar2 + 0x88);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1724)) {
      *(float *)(lVar1 + 0x1724) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      *(float *)(lVar1 + 0xb10) = fVar3;
      *(float *)(lVar1 + 0xb14) = fVar3;
      *(float *)(lVar1 + 0xb18) = fVar3;
      *(undefined4 *)(lVar1 + 0xb1c) = 0x3f800000;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e88710 FUN_140e88710 body=83 status=ok
// SIG undefined FUN_140e88710(void)

void FUN_140e88710(longlong param_1,char param_2)

{
  int iVar1;
  
  if (0 < *(int *)(param_1 + 0x2c0)) {
    *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2d0) + 1;
    iVar1 = *(int *)(param_1 + 0x2d0);
    if (*(int *)(param_1 + 0x2c0) <= iVar1) {
      iVar1 = 0;
      *(undefined4 *)(param_1 + 0x2d0) = 0;
    }
    if (*(longlong *)(*(longlong *)(param_1 + 0x2b8) + (longlong)iVar1 * 8) != 0) {
      if (param_2 == '\x01') {
        FUN_1411ec3e0();
        return;
      }
      if (param_2 == '\x02') {
        FUN_1411ec420();
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e887a0 FUN_140e887a0 body=198 status=ok
// SIG undefined FUN_140e887a0(void)

void FUN_140e887a0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = 1.0;
    if (lVar2 != 0) {
      fVar3 = (*(float *)(lVar2 + 0x84) - *(float *)(lVar2 + 0x80)) * param_2 +
              *(float *)(lVar2 + 0x80);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1728)) {
      *(float *)(lVar1 + 0x1728) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      *(float *)(lVar1 + 0xb00) = fVar3;
      *(float *)(lVar1 + 0xb04) = fVar3;
      *(float *)(lVar1 + 0xb08) = fVar3;
      *(undefined4 *)(lVar1 + 0xb0c) = 0x3f800000;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e88870 FUN_140e88870 body=113 status=ok
// SIG undefined FUN_140e88870(void)

void FUN_140e88870(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x172c))) {
    *(float *)(lVar1 + 0x172c) = param_2;
    *(float *)(lVar1 + 0xecc) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e88930 FUN_140e88930 body=83 status=ok
// SIG undefined FUN_140e88930(void)

void FUN_140e88930(longlong param_1,longlong *param_2)

{
  if ((*(longlong *)(*(longlong *)(param_1 + 0x178) + 0xe0) == *param_2) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x178) + 0xe8) == param_2[1])) {
    FUN_1414b7040(param_1);
    if (*(char *)(param_1 + 0x1d1) != '\0') {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x1b0);
      *(undefined1 *)(param_1 + 0x1d1) = 0;
    }
  }
  return;
}



// FUNCTION 140e88990 FUN_140e88990 body=37 status=ok
// SIG undefined FUN_140e88990(void)

void FUN_140e88990(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((*(longlong *)(param_1[0x2f] + 0xe0) == *param_2) &&
     (*(longlong *)(param_1[0x2f] + 0xe8) == param_2[1])) {
    lVar1 = *param_1;
    uVar2 = FUN_14178ac60(param_1,DAT_14689e258);
                    /* WARNING: Could not recover jumptable at 0x0001414b7036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
    return;
  }
  return;
}



// FUNCTION 140e88a00 MulticastChangeSkinAndColor_Implementation body=5 status=ok
// SIG undefined MulticastChangeSkinAndColor_Implementation(void)

void ABattleHomePlayer::MulticastChangeSkinAndColor_Implementation(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((longlong *)plVar1[0x55a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[0x55a] + 0x408))();
      }
      lVar3 = (**(code **)(*plVar1 + 0xa58))(plVar1);
      if (lVar3 != 0) {
        FUN_142378260(lVar3,DAT_146870f98);
      }
      if (plVar1[0x98] != 0) {
        FUN_142378260(plVar1[0x98],DAT_146870f98);
      }
    }
  }
  return;
}



// FUNCTION 140e88a10 FUN_140e88a10 body=232 status=ok
// SIG undefined FUN_140e88a10(void)

void FUN_140e88a10(longlong param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong *plVar6;
  longlong *local_18;
  longlong *local_10;
  
  cVar5 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar5 != '\0') {
    plVar6 = (longlong *)0x0;
    FUN_140e81ce0(&local_18,0);
    if (local_18 != (longlong *)0x0) {
      (**(code **)(*local_18 + 0x98))(local_18,param_1 + 0x40);
    }
    *(undefined4 *)(param_1 + 0x28) = param_3;
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_1 + 0x30,param_4);
    if (((*(int *)(param_1 + 0x10) != 0) && (*(longlong **)(param_1 + 8) != (longlong *)0x0)) &&
       (cVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar5 != '\0')) {
      if (*(int *)(param_1 + 0x10) != 0) {
        plVar6 = *(longlong **)(param_1 + 8);
      }
      (**(code **)(*plVar6 + 0x40))(plVar6);
    }
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_10 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e88b00 FUN_140e88b00 body=460 status=ok
// SIG undefined FUN_140e88b00(void)

void FUN_140e88b00(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong local_48;
  longlong *local_40;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *plVar1;
  plVar2 = plVar5 + 1;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)plVar2 = (int)*plVar2 + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)plVar2 = (int)*plVar2 + 1;
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar13 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar5)();
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  local_40 = (longlong *)0x0;
  if (plVar1 != &local_48) {
    *plVar1 = 0;
    local_48 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_40);
    plVar1 = local_40;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_40 + 1;
      lVar13 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar13 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar10 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar10 == 1) {
          (**(code **)(*local_40 + 8))(local_40,1);
        }
      }
    }
  }
  uVar9 = FUN_140e942b0(*(undefined4 *)(lVar6 + 0x28));
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  bVar7 = false;
  iVar11 = *(int *)(param_1 + 0x38) + -1;
  iVar10 = *(int *)(param_1 + 0x44);
  lVar13 = (longlong)iVar11;
  if (-1 < iVar11) {
    lVar12 = lVar13 << 4;
    bVar7 = false;
    do {
      if ((*(int *)(lVar12 + 8 + *(longlong *)(param_1 + 0x30)) == 0) ||
         (plVar1 = *(longlong **)(lVar12 + *(longlong *)(param_1 + 0x30)), plVar1 == (longlong *)0x0
         )) {
LAB_140e88c49:
        bVar7 = true;
      }
      else {
        cVar8 = (**(code **)(*plVar1 + 0x40))(plVar1,lVar6 + 0x18,uVar9,lVar6 + 0x30);
        if (cVar8 == '\0') goto LAB_140e88c49;
      }
      lVar12 = lVar12 + -0x10;
      lVar13 = lVar13 + -1;
    } while (-1 < lVar13);
    iVar10 = *(int *)(param_1 + 0x44);
  }
  *(int *)(param_1 + 0x44) = iVar10 + -1;
  if (bVar7) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(param_1 + 0x30,0);
  }
  FUN_140e8c5f0(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar6 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar10 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140e88cd0 FUN_140e88cd0 body=197 status=ok
// SIG undefined FUN_140e88cd0(void)

void FUN_140e88cd0(longlong *param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  
  bVar3 = param_2 == 1;
  *(bool *)(param_1 + 0x217) = bVar3;
  *(bool *)((longlong)param_1 + 0x175c) = bVar3;
  if (bVar3) {
    FUN_142235230();
  }
  else {
    iVar1 = FUN_142235230();
    if (((iVar1 != 3) && ((char)param_1[0x92] != '\0')) &&
       (*(char *)((longlong)param_1 + 0x10f2) != '\0')) {
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((lVar2 != 0) && (param_1[0x8d] != 0)) {
        FUN_140d12500(param_1[0x8d],0);
      }
      FUN_140e77bf0(param_1);
      FUN_140e8f510(param_1);
    }
  }
  if (*(char *)((longlong)param_1 + 0x10f2) != *(char *)((longlong)param_1 + 0x175c)) {
    *(char *)((longlong)param_1 + 0x10f2) = *(char *)((longlong)param_1 + 0x175c);
    FUN_140e6ff10(param_1);
  }
  if ((param_1[0x90] != 0) && (param_1[0x91] != 0)) {
                    /* WARNING: Could not recover jumptable at 0x000140e88d8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)param_1[0x91] + 0x28))((longlong *)param_1[0x91],(char)param_1[0x217])
    ;
    return;
  }
  return;
}



// FUNCTION 140e88da0 FUN_140e88da0 body=49 status=ok
// SIG undefined FUN_140e88da0(void)

void FUN_140e88da0(longlong *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0xa40))();
  iVar1 = FUN_140e80cd0(param_1);
  if (iVar1 == 0) {
    FUN_140e8fd30(param_1);
    return;
  }
  return;
}



// FUNCTION 140e88de0 FUN_140e88de0 body=156 status=ok
// SIG undefined FUN_140e88de0(void)

void FUN_140e88de0(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(byte *)(lVar1 + 0x175e) != param_2)) {
    *(uint *)(lVar1 + 0xac0) = *(uint *)(lVar1 + 0xac0) & 0xff7fffff;
    *(uint *)(lVar1 + 0xac4) = *(uint *)(lVar1 + 0xac4) & 0xfffffffd;
    *(byte *)(lVar1 + 0x175e) = param_2;
    *(uint *)(lVar1 + 0xac4) = *(uint *)(lVar1 + 0xac4) | (uint)param_2 * 2;
    *(uint *)(lVar1 + 0xac0) =
         ((uint)param_2 << 0x17 | *(uint *)(lVar1 + 0xac0)) & 0xbfffffff | (uint)param_2 << 0x1e;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e88e80 FUN_140e88e80 body=45 status=ok
// SIG undefined FUN_140e88e80(void)

void FUN_140e88e80(longlong *param_1,longlong param_2)

{
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(param_1 + 0x78);
    (**(code **)(*param_1 + 0x358))(param_1,1);
  }
  return;
}



// FUNCTION 140e88eb0 FUN_140e88eb0 body=37 status=ok
// SIG undefined FUN_140e88eb0(void)

void FUN_140e88eb0(longlong param_1,longlong param_2)

{
  if ((param_2 != 0) && (*(longlong *)(param_2 + 0x2c0) != 0)) {
    FUN_1409e4d50(param_1 + 0x2c0,*(undefined1 *)(*(longlong *)(param_2 + 0x2c0) + 0xa0));
    return;
  }
  return;
}



// FUNCTION 140e88f00 FUN_140e88f00 body=146 status=ok
// SIG undefined FUN_140e88f00(void)

void FUN_140e88f00(longlong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return;
  }
  FUN_1414bbcf0();
  if (param_1[0xbf] == 0) goto LAB_140e88f7b;
  lVar3 = *(longlong *)(param_2 + 0x460);
  if (lVar3 == 0) {
LAB_140e88f6a:
    lVar3 = 0;
  }
  else {
    lVar2 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_140e88f6a;
  }
  FUN_1414bb1d0(param_1[0xbf],lVar3);
LAB_140e88f7b:
  (**(code **)(*param_1 + 0xa40))(param_1);
  return;
}



// FUNCTION 140e88fa0 FUN_140e88fa0 body=365 status=ok
// SIG undefined FUN_140e88fa0(void)

void FUN_140e88fa0(longlong *param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong local_18;
  int local_10;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1[0xbe] == 0) {
    return;
  }
  iVar6 = 0;
  uVar3 = (**(code **)(*param_1 + 0x148))();
  UWorld::GetPlayerControllerIterator(uVar3,&local_18);
  while( true ) {
    if ((local_10 < 0) || (*(int *)(local_18 + 8) <= local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    lVar4 = FWeakObjectPtr::Get();
    if (lVar4 != 0) {
      lVar5 = FUN_14145f370();
      if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if ((((bVar1) && (cVar2 = FUN_140cfdb70(), cVar2 == '\0')) &&
          (*(longlong **)(lVar4 + 0x990) != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar4 + 0x990) + 0x950))(), cVar2 == '\0')) {
        iVar6 = iVar6 + 1;
      }
    }
    local_10 = local_10 + 1;
  }
  if (iVar6 == 0) {
    FUN_1414c3900(param_1[0xbe]);
    return;
  }
  lVar4 = *(longlong *)(param_2 + 0x460);
  if (lVar4 != 0) {
    lVar5 = UInputKeySelector::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_140e890ee;
  }
  lVar4 = 0;
LAB_140e890ee:
  FUN_1414c3a10(param_1[0xbe],lVar4);
  return;
}



// FUNCTION 140e89110 FUN_140e89110 body=118 status=ok
// SIG undefined FUN_140e89110(void)

void FUN_140e89110(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if ((*(longlong *)(param_1 + 0x508) != 0) && (*(longlong *)(param_1 + 0x510) != 0)) {
    cVar1 = FUN_1411ea830(param_2);
    if (cVar1 != '\0') {
      FUN_142398770(*(undefined8 *)(param_1 + 0x508),param_1 + 0x520,0,0,0);
      FUN_142382f60(*(undefined8 *)(param_1 + 0x508),*(undefined8 *)(param_1 + 0x510),&DAT_146af29ec
                    ,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e89190 FUN_140e89190 body=115 status=ok
// SIG undefined FUN_140e89190(void)

void FUN_140e89190(longlong param_1,undefined8 param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x508) != 0) {
    cVar1 = FUN_1411ea830(param_2);
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x508) + 0x418))
                (*(longlong **)(param_1 + 0x508),&DAT_14653218c);
      FUN_142398770(*(undefined8 *)(param_1 + 0x508),&DAT_1468b5b70,0,0,0);
      FUN_140942fb0(*(undefined8 *)(param_1 + 0x508),8,1);
      return;
    }
  }
  return;
}



// FUNCTION 140e89210 FUN_140e89210 body=65 status=ok
// SIG undefined FUN_140e89210(void)

void FUN_140e89210(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UComboBoxWidgetStyle::StaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_14127ef80(lVar3,0);
      return;
    }
  }
  return;
}



// FUNCTION 140e89260 FUN_140e89260 body=65 status=ok
// SIG undefined FUN_140e89260(void)

void FUN_140e89260(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x1c8);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = UComboBoxWidgetStyle::StaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_14127ef80(lVar3,1);
      return;
    }
  }
  return;
}



// FUNCTION 140e892b0 FUN_140e892b0 body=164 status=ok
// SIG undefined FUN_140e892b0(void)

void FUN_140e892b0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (lVar2 == 0) {
      fVar3 = 1.0;
    }
    else {
      fVar3 = (*(float *)(lVar2 + 0x94) - *(float *)(lVar2 + 0x90)) * param_2 +
              *(float *)(lVar2 + 0x90);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1734)) {
      *(float *)(lVar1 + 0x1734) = fVar3;
      *(float *)(lVar1 + 0x1078) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e89360 FUN_140e89360 body=496 status=ok
// SIG undefined FUN_140e89360(void)

void FUN_140e89360(longlong param_1,undefined8 *param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined1 local_res10 [8];
  longlong *local_48;
  int local_40;
  longlong *local_38;
  longlong *local_30;
  
  cVar3 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar3 == '\0') {
    return;
  }
  puVar8 = &DAT_143f3eda8;
  if (*(int *)(param_1 + 0x38) == 0) {
    puVar9 = &DAT_143f3eda8;
  }
  else {
    puVar9 = *(undefined2 **)(param_1 + 0x30);
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar8 = (undefined2 *)*param_3;
  }
  iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
  if (iVar4 != 0) {
    return;
  }
  FUN_140e81ce0(&local_38,0);
  if (local_38 != (longlong *)0x0) {
    (**(code **)(*local_38 + 0x20))(local_38,param_1 + 0x58);
  }
  if (param_4 == 1) {
    lVar5 = FUN_140e7d550(param_5);
    *(longlong *)(param_1 + 0x40) = lVar5;
    if (lVar5 == 0) {
      if (*(char *)(param_1 + 0x49) == '\0') {
        local_48 = (longlong *)0x0;
        plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
        local_40 = 3;
        local_48 = plVar6;
        if (plVar6 != (longlong *)0x0) {
          plVar6[1] = param_1;
          *plVar6 = (longlong)&DAT_143f3ed00;
          plVar6[2] = (longlong)FUN_140e870f0;
          lVar5 = FDelegateHandle::GenerateNewID();
          plVar6[4] = lVar5;
          *plVar6 = (longlong)&PTR_GetPoolName_143f3ed48;
        }
        puVar7 = (undefined8 *)(**(code **)(*local_38 + 0xe0))(local_38,local_res10,&local_48);
        *(undefined8 *)(param_1 + 0x60) = *puVar7;
        if (local_40 == 0) {
LAB_140e894c6:
          if (local_48 != (longlong *)0x0) {
            FMemory::Free(local_48);
          }
        }
        else if (local_48 != (longlong *)0x0) {
          (**(code **)(*local_48 + 0x28))(local_48,0);
          if (local_48 != (longlong *)0x0) {
            local_48 = (longlong *)FMemory::Realloc(local_48,0,0);
          }
          local_40 = 0;
          goto LAB_140e894c6;
        }
        (**(code **)(*local_38 + 0xd8))(local_38,param_1 + 0x18,param_1 + 0x30);
        goto LAB_140e894fa;
      }
      param_4 = 5;
    }
  }
  *(int *)(param_1 + 0x28) = param_4;
  TBaseDelegate<void>::ExecuteIfBound(param_1 + 8);
LAB_140e894fa:
  plVar6 = local_30;
  if (local_30 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_30 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_30 + 8))(local_30,1);
      }
    }
  }
  return;
}



// FUNCTION 140e89550 FUN_140e89550 body=365 status=ok
// SIG undefined FUN_140e89550(void)

void FUN_140e89550(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong local_38;
  longlong *local_30;
  
  plVar4 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar5 = *plVar1;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
  }
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar4 + 1;
    lVar8 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  lVar8 = 0;
  local_30 = (longlong *)0x0;
  if (plVar1 != &local_38) {
    *plVar1 = 0;
    local_38 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_30);
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_30 + 1;
      lVar6 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar7 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_30 + 8))(local_30,1);
        }
      }
    }
  }
  iVar7 = FUN_140e942b0(*(undefined4 *)(lVar5 + 0x28));
  if (iVar7 == 1) {
    lVar8 = FUN_140e7d550(lVar5 + 0x50);
    if (lVar8 == 0) {
      iVar7 = 5;
    }
  }
  FUN_140e723d0(param_1,lVar5 + 0x18,lVar5 + 0x30,iVar7,lVar8);
  FUN_140e8c5f0(param_1);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 140e896c0 FUN_140e896c0 body=340 status=ok
// SIG undefined FUN_140e896c0(void)

void FUN_140e896c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_28;
  longlong *local_20;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *plVar1;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)();
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  local_20 = (longlong *)0x0;
  if (plVar1 != &local_28) {
    *plVar1 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_20);
    plVar1 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  uVar8 = FUN_140e942b0(*(undefined4 *)(lVar6 + 0x28));
  FUN_140e723d0(param_1,lVar6 + 0x18,lVar6 + 0x30,uVar8,*(undefined8 *)(lVar6 + 0x40));
  FUN_140e8c5f0(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140e89820 FUN_140e89820 body=305 status=ok
// SIG undefined FUN_140e89820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e89820(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 local_1c;
  undefined4 local_14;
  
  FUN_14073ed80();
  if ((*(longlong *)(param_1 + 0x1e8) == 0) &&
     (cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar2 == '\0')) {
    lVar3 = *(longlong *)(param_1 + 0x120);
    lVar1 = *(longlong *)(param_1 + 0x118);
    if ((((lVar3 != 0) || (lVar3 = FUN_1423407b0(param_1), lVar3 != 0)) &&
        ((lVar1 != 0 && (*(longlong *)(lVar1 + 0x168) != 0)))) &&
       ((cVar2 = UWorld::IsGameWorld(lVar3), cVar2 == '\0' ||
        ((*(uint *)(lVar1 + 8) >> 0x13 & 1) == 0)))) {
      lVar3 = *(longlong *)(param_1 + 0x120);
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      lVar3 = FUN_140e7e6f0(lVar3);
      if (lVar3 != 0) {
        lVar1 = *(longlong *)(lVar1 + 0x168);
        local_1c = _DAT_1468b5d90;
        local_14 = DAT_1468b5d98;
        if (lVar1 != 0) {
          local_1c = *(undefined8 *)(lVar1 + 0x220);
          local_14 = *(undefined4 *)(lVar1 + 0x228);
        }
        uVar4 = FUN_140e80650(lVar3,&local_1c,param_1,lVar3,local_1c,local_14);
        *(undefined8 *)(param_1 + 0x1e8) = uVar4;
      }
    }
  }
  return;
}



// FUNCTION 140e89970 FUN_140e89970 body=62 status=ok
// SIG undefined FUN_140e89970(void)

void FUN_140e89970(longlong *param_1)

{
  undefined1 uVar1;
  
  FUN_1426a2e70();
  if (param_1[0x9d] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    FUN_14127dd10(param_1[0x9d],uVar1);
    return;
  }
  return;
}



// FUNCTION 140e899b0 FUN_140e899b0 body=36 status=ok
// SIG undefined FUN_140e899b0(void)

void FUN_140e899b0(longlong param_1)

{
  undefined4 local_res8 [8];
  
  local_res8[0] = *(undefined4 *)(param_1 + 0xba4);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0xb90,local_res8);
  return;
}



// FUNCTION 140e899f0 FUN_140e899f0 body=189 status=ok
// SIG undefined FUN_140e899f0(void)

void FUN_140e899f0(longlong param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = 1.0;
    if (lVar2 != 0) {
      fVar3 = (*(float *)(lVar2 + 0x7c) - *(float *)(lVar2 + 0x78)) * param_2 +
              *(float *)(lVar2 + 0x78);
    }
    if (fVar3 != *(float *)(lVar1 + 0x1738)) {
      *(float *)(lVar1 + 0x1738) = fVar3;
      *(undefined1 *)(lVar1 + 0x175f) = 0;
      *(float *)(lVar1 + 0xae0) = fVar3;
      *(float *)(lVar1 + 0xae4) = fVar3;
      *(float *)(lVar1 + 0xae8) = fVar3;
      *(undefined4 *)(lVar1 + 0xaec) = 0x3f800000;
      if (*(longlong *)(lVar1 + 0x458) != 0) {
        FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
        FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
        FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e89ab0 FUN_140e89ab0 body=65 status=ok
// SIG undefined FUN_140e89ab0(void)

void FUN_140e89ab0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x180);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x280))(plVar1,1);
  }
  FUN_1414b6f80(param_1);
  TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x198);
  *(undefined1 *)(param_1 + 0x1d1) = 1;
  return;
}



// FUNCTION 140e89b00 thunk_FUN_1414b7080 body=5 status=ok
// SIG undefined thunk_FUN_1414b7080(void)

void thunk_FUN_1414b7080(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e268);
                    /* WARNING: Could not recover jumptable at 0x0001414b70b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 140e89b10 FUN_140e89b10 body=113 status=ok
// SIG undefined FUN_140e89b10(void)

void FUN_140e89b10(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x173c))) {
    *(float *)(lVar1 + 0x173c) = param_2;
    *(float *)(lVar1 + 0xc44) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e89b90 FUN_140e89b90 body=8 status=ok
// SIG undefined FUN_140e89b90(void)

void FUN_140e89b90(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x238) = param_2;
  return;
}



// FUNCTION 140e89ba0 FUN_140e89ba0 body=589 status=ok
// SIG undefined FUN_140e89ba0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e89ba0(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  int local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined1 local_78 [8];
  undefined8 local_70;
  code *local_68;
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if (((*(char *)(param_1 + 0x240) == '\0') && (*(longlong *)(param_1 + 0x218) != 0)) &&
     (lVar2 = FUN_1422312c0(), lVar2 != 0)) {
    local_98 = &LAB_140e6e3b4;
    local_a8 = (longlong *)0x0;
    local_a0 = 0;
    uStack_90 = 0;
    plVar3 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar3 == (longlong *)0x0) {
      if (((local_a0 != 0) && (local_a8 != (longlong *)0x0)) &&
         ((**(code **)(*local_a8 + 0x28))(local_a8,0), local_a8 != (longlong *)0x0)) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
    }
    else {
      *plVar3 = (longlong)&PTR_FUN_143f77b88;
      FWeakObjectPtr::operator=(plVar3 + 1,param_1);
      *(undefined4 *)(plVar3 + 2) = (undefined4)local_98;
      *(undefined4 *)((longlong)plVar3 + 0x14) = local_98._4_4_;
      *(undefined4 *)(plVar3 + 3) = uStack_90;
      *(undefined4 *)((longlong)plVar3 + 0x1c) = uStack_8c;
      lVar2 = FDelegateHandle::GenerateNewID();
      plVar3[5] = lVar2;
      *plVar3 = (longlong)&PTR_FUN_143f77bd0;
      FUN_1404c8680(plVar3,&local_a8);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3,0);
      lVar2 = FMemory::Realloc(plVar3,0,0);
      if (lVar2 != 0) {
        FMemory::Free(lVar2);
      }
    }
    lVar2 = FUN_1422312c0(*(undefined8 *)(param_1 + 0x218));
    local_88 = 0;
    local_80 = 0;
    uVar1 = *(undefined8 *)(lVar2 + 0xa0);
    if ((local_a0 != 0) && (local_a8 != (longlong *)0x0)) {
      (**(code **)(*local_a8 + 0x30))(local_a8,&local_88);
    }
    FWeakObjectPtr::operator=(local_78,0);
    local_b0 = 0xbf800000;
    local_b8 = 0;
    local_70 = 0;
    local_38 = (longlong *)0x0;
    local_28 = 0;
    local_68 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar1,param_1 + 0x210,&local_88,0x800000);
    if (local_28 != 0) {
      plVar3 = local_58;
      if (local_38 != (longlong *)0x0) {
        plVar3 = local_38;
      }
      if (plVar3 != (longlong *)0x0) {
        (**(code **)(*plVar3 + 0x10))(plVar3,0);
      }
    }
    if (local_38 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_88);
    if (local_a0 != 0) {
      if (local_a8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_a8 + 0x28))(local_a8,0);
      if (local_a8 != (longlong *)0x0) {
        local_a8 = (longlong *)FMemory::Realloc(local_a8,0,0);
      }
      local_a0 = 0;
    }
    if (local_a8 != (longlong *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return;
}



// FUNCTION 140e89df0 FUN_140e89df0 body=158 status=ok
// SIG undefined FUN_140e89df0(void)

void FUN_140e89df0(longlong param_1)

{
  undefined8 uVar1;
  longlong local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  
  FUN_140e810c0(param_1,&local_res8,local_res18,local_res10);
  if (*(longlong *)(param_1 + 0x288) != local_res8) {
    *(longlong *)(param_1 + 0x288) = local_res8;
    if (*(longlong *)(param_1 + 0x280) != 0) {
      FUN_142227350(*(longlong *)(param_1 + 0x280),0,1);
      *(undefined8 *)(param_1 + 0x280) = 0;
    }
    if ((*(longlong *)(param_1 + 0x218) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x218) + 0x920) != 0)) {
      uVar1 = UThrobber::GetPrivateStaticClass();
      FUN_142c84570(*(undefined8 *)(*(longlong *)(param_1 + 0x218) + 0x920),uVar1);
    }
    FUN_140e94600(param_1,1);
    return;
  }
  return;
}



// FUNCTION 140e89e90 FUN_140e89e90 body=113 status=ok
// SIG undefined FUN_140e89e90(void)

void FUN_140e89e90(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x1740))) {
    *(float *)(lVar1 + 0x1740) = param_2;
    *(float *)(lVar1 + 0xc3c) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e89f10 FUN_140e89f10 body=284 status=ok
// SIG undefined FUN_140e89f10(void)

void FUN_140e89f10(longlong param_1,char param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  short *psVar4;
  longlong local_38;
  ulonglong local_30;
  short *local_28;
  int local_20;
  longlong local_18 [2];
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x1744) != param_2)) {
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    *(char *)(lVar1 + 0x1744) = param_2;
    if (*(longlong *)(lVar1 + 0x468) != 0) {
      FString::PrintfImpl(&local_28,L"r.Tonemapper.Sharpen %d",param_2);
      psVar4 = &DAT_143f3eda8;
      if (local_20 != 0) {
        psVar4 = local_28;
      }
      local_38 = 0;
      local_30 = 0;
      if ((psVar4 != (short *)0x0) && (*psVar4 != 0)) {
        lVar3 = -1;
        do {
          lVar3 = lVar3 + 1;
        } while (psVar4[lVar3] != 0);
        uVar2 = (int)lVar3 + 1;
        local_30 = (ulonglong)uVar2;
        if (0 < (int)uVar2) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
        }
        FGenericPlatformString::Memcpy(local_38,psVar4,(longlong)(int)uVar2 * 2);
      }
      (**(code **)(**(longlong **)(lVar1 + 0x468) + 0xd28))
                (*(longlong **)(lVar1 + 0x468),local_18,&local_38,1);
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      if (local_38 != 0) {
        FMemory::Free();
      }
      if (local_28 != (short *)0x0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 140e8a030 FUN_140e8a030 body=399 status=ok
// SIG undefined FUN_140e8a030(void)

void FUN_140e8a030(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 *param_8)

{
  int iVar1;
  longlong *_Src;
  longlong *plVar2;
  undefined1 local_88 [4];
  undefined8 local_84;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  
  _Src = *(longlong **)(param_8 + 0x30);
  iVar1 = *(int *)(param_8 + 0x38);
  plVar2 = _Src;
  do {
    if (plVar2 == _Src + (longlong)iVar1 * 2) {
LAB_140e8a18f:
      if (*(longlong *)(param_8 + 0x30) != 0) {
        FMemory::Free();
      }
      return;
    }
    if ((*plVar2 != 0) && (*(longlong *)(*(longlong *)(param_1 + 0x178) + 0xe0) == *plVar2)) {
      local_88[0] = *param_8;
      local_84 = *(undefined8 *)(param_8 + 4);
      local_7c = *(undefined4 *)(param_8 + 0xc);
      local_70 = *(undefined4 *)(param_8 + 0x18);
      local_68 = *(undefined8 *)(param_8 + 0x20);
      local_60 = *(undefined8 *)(param_8 + 0x28);
      local_78 = *(undefined8 *)(param_8 + 0x10);
      local_58 = (void *)0x0;
      local_50 = iVar1;
      if (iVar1 == 0) {
        local_4c = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,iVar1,0);
        _guard_xfg_dispatch_icall_nop(local_58,_Src,(longlong)iVar1 << 4);
      }
      local_40 = *(undefined4 *)(param_8 + 0x48);
      local_48 = *(undefined8 *)(param_8 + 0x40);
      local_38 = param_8[0x50];
      local_3c = *(undefined4 *)(param_8 + 0x4c);
      FUN_1414b7140(param_1,param_2,param_3,param_4,param_5,param_6,param_7,local_88);
      goto LAB_140e8a18f;
    }
    plVar2 = plVar2 + 2;
  } while( true );
}



// FUNCTION 140e8a1c0 FUN_140e8a1c0 body=168 status=ok
// SIG undefined FUN_140e8a1c0(void)

void FUN_140e8a1c0(longlong param_1,float param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  plVar1 = *(longlong **)(param_1 + 8);
  if (plVar1 != (longlong *)0x0) {
    iVar2 = FUN_142235230(plVar1);
    if (((iVar2 != 3) && ((char)plVar1[0x217] != '\0')) && (param_2 != *(float *)(plVar1 + 0x2eb)))
    {
      *(float *)(plVar1 + 0x2eb) = param_2;
      *(undefined1 *)((longlong)plVar1 + 0x175f) = 0;
      iVar2 = FUN_142235230(plVar1);
      if ((iVar2 != 3) && ((char)plVar1[0x217] != '\0')) {
        uVar3 = (**(code **)(*plVar1 + 0x148))(plVar1);
        plVar4 = (longlong *)FUN_142d5ecc0(uVar3);
        if (plVar4 != (longlong *)0x0) {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x2b8))(plVar4);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x10))(plVar4,(int)plVar1[0x2eb],1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e8a270 FUN_140e8a270 body=113 status=ok
// SIG undefined FUN_140e8a270(void)

void FUN_140e8a270(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x1748))) {
    *(float *)(lVar1 + 0x1748) = param_2;
    *(float *)(lVar1 + 0xc40) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e8a2f0 FUN_140e8a2f0 body=14 status=ok
// SIG undefined FUN_140e8a2f0(void)

void FUN_140e8a2f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if ((char)param_1[0x8b] != '\x01') {
    return;
  }
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_14689e218);
                    /* WARNING: Could not recover jumptable at 0x0001414b72a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 140e8a370 FUN_140e8a370 body=106 status=ok
// SIG undefined FUN_140e8a370(void)

void FUN_140e8a370(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x1754))) {
    *(float *)(lVar1 + 0x1754) = param_2;
    *(float *)(lVar1 + 0xec4) = param_2;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e8a3e0 FUN_140e8a3e0 body=113 status=ok
// SIG undefined FUN_140e8a3e0(void)

void FUN_140e8a3e0(longlong param_1,float param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 != 0) && (param_2 != *(float *)(lVar1 + 0x1750))) {
    *(float *)(lVar1 + 0x1750) = param_2;
    *(float *)(lVar1 + 0xec0) = param_2;
    *(undefined1 *)(lVar1 + 0x175f) = 0;
    if (*(longlong *)(lVar1 + 0x458) != 0) {
      FUN_140a296b0(*(longlong *)(lVar1 + 0x458) + 0x2e0,lVar1 + 0xab0);
      FUN_1423424e0(*(undefined8 *)(lVar1 + 0x458));
      FUN_1423424c0(*(undefined8 *)(lVar1 + 0x458));
      return;
    }
  }
  return;
}



// FUNCTION 140e8a460 FUN_140e8a460 body=213 status=ok
// SIG undefined FUN_140e8a460(void)

void FUN_140e8a460(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong *local_18;
  longlong *local_10;
  
  cVar6 = (**(code **)**(undefined8 **)(param_1 + 0x18))(*(undefined8 **)(param_1 + 0x18),*param_2);
  if (cVar6 != '\0') {
    puVar8 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 0x38) == 0) {
      puVar9 = &DAT_143f3eda8;
    }
    else {
      puVar9 = *(undefined2 **)(param_1 + 0x30);
    }
    if (*(int *)(param_3 + 1) != 0) {
      puVar8 = (undefined2 *)*param_3;
    }
    uVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar8,puVar9);
    if ((int)uVar7 == 0) {
      FUN_140e81ce0(&local_18,uVar7);
      if (local_18 != (longlong *)0x0) {
        (**(code **)(*local_18 + 0x48))(local_18,param_1 + 0x50);
      }
      *(undefined4 *)(param_1 + 0x28) = param_4;
      TBaseDelegate<void>::ExecuteIfBound(param_1 + 8);
      plVar5 = local_10;
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
            (**(code **)(*local_10 + 8))(local_10,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e8a540 FUN_140e8a540 body=332 status=ok
// SIG undefined FUN_140e8a540(void)

void FUN_140e8a540(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 uVar8;
  longlong local_28;
  longlong *local_20;
  
  plVar5 = *(longlong **)(param_1 + 0x68);
  plVar1 = (longlong *)(param_1 + 0x60);
  lVar6 = *plVar1;
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar5 + 1;
    lVar7 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plVar5)();
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  local_20 = (longlong *)0x0;
  if (plVar1 != &local_28) {
    *plVar1 = 0;
    local_28 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_20);
    plVar1 = local_20;
    if (local_20 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_20 + 1;
      lVar7 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar7 == 1) {
        (**(code **)*local_20)(local_20);
        LOCK();
        piVar3 = (int *)((longlong)plVar1 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_20 + 8))(local_20,1);
        }
      }
    }
  }
  uVar8 = FUN_140e942b0(*(undefined4 *)(lVar6 + 0x28));
  FUN_1404ed3e0(param_1 + 0x18,lVar6 + 0x18,lVar6 + 0x30,uVar8);
  FUN_140e8c5f0(param_1);
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar6 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar6 == 1) {
      (**(code **)*plVar5)(plVar5);
      LOCK();
      piVar3 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar5 + 8))(plVar5,1);
      }
    }
  }
  return;
}



// FUNCTION 140e8a690 FUN_140e8a690 body=52 status=ok
// SIG undefined FUN_140e8a690(void)

undefined1 FUN_140e8a690(longlong param_1)

{
  char cVar1;
  
  cVar1 = FUN_140e8a6d0();
  if (cVar1 != '\0') {
    return 1;
  }
  TBaseMulticastDelegate<void,enum_EWmfMediaSamplerClockEvent>::Broadcast
            (param_1 + 0xa8,*(undefined4 *)(param_1 + 200));
  return 0;
}



// FUNCTION 140e8a6d0 FUN_140e8a6d0 body=3246 status=ok
// SIG undefined FUN_140e8a6d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140e8a6d0(longlong param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  int iVar14;
  longlong **pplVar15;
  longlong *plVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_318 [32];
  ulonglong local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined1 local_2e0;
  undefined1 local_2d8 [8];
  undefined1 local_2d0 [8];
  ulonglong local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined4 local_2a8 [2];
  undefined4 local_2a0 [2];
  undefined4 local_298 [2];
  undefined4 local_290 [2];
  undefined4 local_288 [2];
  undefined4 local_280 [2];
  undefined4 local_278 [2];
  undefined4 local_270 [2];
  undefined4 local_268 [2];
  undefined8 local_260;
  longlong local_258;
  longlong *plStack_250;
  longlong local_248;
  longlong *plStack_240;
  longlong *local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined8 local_228;
  undefined8 local_220;
  longlong *local_218;
  undefined8 local_210;
  longlong *local_208 [2];
  longlong local_1f8;
  longlong *plStack_1f0;
  longlong *local_1e8 [2];
  longlong local_1d8;
  longlong *plStack_1d0;
  longlong *local_1c8;
  undefined8 local_1c0 [4];
  longlong *local_1a0;
  undefined8 local_198 [4];
  undefined8 local_178 [4];
  undefined8 local_158 [4];
  undefined8 local_138 [4];
  undefined8 local_118 [4];
  undefined8 local_f8;
  undefined1 local_f0 [32];
  undefined1 local_d0 [32];
  undefined1 local_b0 [96];
  undefined4 local_50;
  char local_4c;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  pplVar15 = &local_218;
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_318;
  plVar12 = (longlong *)0x0;
  local_2c8 = local_2c8 & 0xffffffff00000000;
  uVar6 = local_38;
  if (*(longlong *)(param_1 + 0x110) == 0) {
LAB_140e8b356:
    return uVar6 & 0xffffffffffffff00;
  }
  lVar4 = FUN_140e822f0(param_1,*(undefined4 *)(param_1 + 200));
  uVar6 = 0;
  if (lVar4 == 0) goto LAB_140e8b356;
  plVar5 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar4);
  uVar6 = 0;
  if (((((plVar5 == (longlong *)0x0) ||
        (uVar6 = (**(code **)(*plVar5 + 0x280))(plVar5,*(undefined8 *)(param_1 + 0x110)),
        (char)uVar6 == '\0')) ||
       (uVar7 = FUN_140e82830(param_1,*(undefined4 *)(param_1 + 200)), uVar6 = uVar7, uVar7 == 0))
      || ((*(int *)(uVar7 + 0x14) == 0 ||
          (uVar8 = FUN_140e822f0(param_1,*(undefined4 *)(param_1 + 200)), uVar6 = uVar8, uVar8 == 0)
          ))) || (*(longlong *)(uVar8 + 0x60) == 0)) goto LAB_140e8b356;
  lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x110) + 0x848);
  plVar5 = plVar12;
  if (lVar4 != 0) {
    lVar9 = FUN_1413ffe00();
    iVar17 = *(int *)(lVar9 + 0x90);
    uVar6 = (longlong)iVar17;
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < iVar17) ||
       (uVar6 = *(ulonglong *)(*(longlong *)(lVar4 + 0x10) + 0x88),
       *(longlong *)(uVar6 + (longlong)iVar17 * 8) != lVar9 + 0x88)) {
      uVar6 = uVar6 & 0xffffffffffffff00;
    }
    else {
      uVar6 = CONCAT71((int7)(uVar6 >> 8),1);
    }
    if ((char)uVar6 != '\0') {
      plVar5 = *(longlong **)(lVar4 + 0x2ad0);
    }
  }
  if (plVar5 == (longlong *)0x0) goto LAB_140e8b356;
  uVar3 = (**(code **)(*plVar5 + 0x408))();
  FUN_142ff7db0(&local_50,*(undefined8 *)(uVar8 + 0x60),*(undefined8 *)(param_1 + 0x110),uVar3);
  if (local_4c == '\0') {
    return 0;
  }
  local_2e0 = 0;
  local_2e8 = 0;
  local_2f0 = 0;
  local_2f8 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_f8 = 0;
  FUN_143013fe0(&local_2b8,*(undefined8 *)(uVar8 + 0x60),local_50,*(undefined8 *)(param_1 + 0x110));
  if ((int)local_2b0 < 1) {
    FUN_1409f5880(&local_2b8);
    return 0;
  }
  lVar4 = *(longlong *)(local_2b8 + 8);
  if (lVar4 != 0) {
    lVar9 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar18 = false;
    }
    else {
      bVar18 = true;
    }
    if (bVar18) {
      local_2f8 = CONCAT44(local_2f8._4_4_,*(undefined4 *)(param_1 + 200));
      cVar2 = FUN_140e74aa0(param_1,*(undefined4 *)(lVar4 + 0x128),*(undefined4 *)(lVar4 + 300),0);
      if (cVar2 == '\0') {
        if (*(longlong *)(uVar8 + 0x68) == 0) {
LAB_140e8b2ba:
          uVar6 = 0;
          goto LAB_140e8b2f0;
        }
        uVar10 = FUN_142caac20(lVar4 + 0x130,local_48,*(undefined8 *)(param_1 + 0x110));
        uVar3 = FUN_142cc45a0(uVar10,0);
        FUN_140aa27c0(*(longlong *)(param_1 + 0x110) + 0x1a68,*(undefined8 *)(uVar8 + 0x68),uVar3);
        FUN_140e72580(param_1 + 0x90,*(undefined4 *)(param_1 + 200),*(undefined8 *)(uVar8 + 0x68),
                      uVar3);
        local_228 = *(undefined8 *)(*(longlong *)(uVar8 + 0x68) + 0x18);
        FName::ToString(&local_228,local_1e8);
        local_2d8[0] = 1;
        local_290[0] = 0xffffffff;
        local_298[0] = 0xffffffff;
        local_2a0[0] = 1;
        local_288[0] = uVar3;
        uVar10 = FTextInspector::GetSourceString(*(longlong *)(uVar8 + 0x68) + 0x40);
        local_2a8[0] = *(undefined4 *)(param_1 + 200);
        local_2c0 = DAT_146871010;
        if ((DAT_146871118 == '\0') &&
           (puVar11 = (undefined8 *)FUN_140e7e2d0(), puVar11 != &DAT_1468710c0)) {
          DAT_1468710c0 = *puVar11;
          _DAT_1468710c8 = puVar11[1];
          _DAT_1468710d0 = puVar11[2];
          DAT_1468710d8 = (longlong *)puVar11[3];
          _DAT_1468710e0 = puVar11[4];
          _DAT_1468710e8 = puVar11[5];
          _DAT_1468710f0 = puVar11[6];
          _DAT_1468710f8 = puVar11[7];
          _DAT_146871100 = puVar11[8];
          _DAT_146871108 = puVar11[9];
          _DAT_146871110 = puVar11[10];
          DAT_146871118 = '\x01';
        }
        cVar2 = FUN_142190080(DAT_1468710c0);
        if ((cVar2 != '\0') && (cVar2 = FUN_142194620(DAT_1468710c0), cVar2 != '\0')) {
          FUN_142190c10(&local_258,DAT_1468710c0);
          lVar4 = *(longlong *)(local_258 + 0xc0);
          if (*(longlong *)(local_258 + 0xc0) == 0) {
            lVar4 = local_258 + 0x20;
          }
          plVar12 = (longlong *)FUN_140aa2bd0(lVar4);
          FUN_14217e740(local_118);
          local_2f8 = local_2f8 & 0xffffffffffffff00;
          FUN_142194380(local_118,0x28,0,0);
          local_118[0] = *(undefined8 *)(param_1 + 0x110);
          FUN_1421923f0(local_f0,DAT_146870fd0,local_118);
          FUN_140bfb300(plVar12,&DAT_1468710c8,local_f0);
          FUN_14217f430(local_f0);
          FUN_14217f430(local_118);
          FUN_140bfadf0(plVar12,&DAT_1468710d0,local_2a8);
          local_2c8 = 0;
          if ((*DAT_1468710d8 == 0) || (cVar2 = FUN_1407ce010(DAT_1468710d8 + 1), cVar2 == '\0')) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          if (bVar18) {
            plVar16 = (longlong *)*plVar12;
            plVar5 = plVar16 + (longlong)(int)plVar12[1] * 5;
            if (plVar16 != plVar5) {
              do {
                if ((*(longlong *)*plVar16 == *DAT_1468710d8) &&
                   (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                    *(longlong *)(DAT_1468710d8[1] + 0x28))) {
                  bVar18 = true;
                }
                else {
                  bVar18 = false;
                }
                if (bVar18) {
                  FUN_14217e740(local_178);
                  local_2f8 = local_2f8 & 0xffffffffffffff00;
                  FUN_142194380(local_178,0x13,0,0);
                  local_178[0] = local_2c0;
                  FUN_14217f450(plVar16 + 1,local_178);
                  puVar11 = local_178;
                  goto LAB_140e8abff;
                }
                plVar16 = plVar16 + 5;
              } while (plVar16 != plVar5);
            }
            local_1a0 = DAT_1468710d8;
            FUN_14217e740(local_198);
            local_2f8 = local_2f8 & 0xffffffffffffff00;
            FUN_142194380(local_198,0x13,0,0);
            iVar17 = (int)plVar12[1];
            local_198[0] = local_2c0;
            *(int *)(plVar12 + 1) = iVar17 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < iVar17 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar12,iVar17);
            }
            puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar17 * 0x28);
            *puVar11 = local_1a0;
            FUN_14217e5b0(puVar11 + 1,local_198);
            puVar11 = local_198;
LAB_140e8abff:
            FUN_14217f430(puVar11);
          }
          FUN_140bfb1d0(plVar12,&DAT_1468710e0,uVar10);
          FUN_140bfb1d0(plVar12,&DAT_1468710e8,local_1e8);
          FUN_140bfa9d0(plVar12,&DAT_1468710f0,local_2a0);
          FUN_140bfa9d0(plVar12,&DAT_1468710f8,local_298);
          FUN_140bfa9d0(plVar12,&DAT_146871100,local_290);
          FUN_140bfac90(plVar12,&DAT_146871108,local_2d8);
          FUN_140bfa9d0(plVar12,&DAT_146871110,local_288);
          cVar2 = FUN_14218a740(&local_258,1);
          if (cVar2 != '\0') {
            local_1f8 = local_258;
            plStack_1f0 = plStack_250;
            if (plStack_250 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_250 + 1) = (int)plStack_250[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_1f8);
            plVar12 = plStack_1f0;
            if (plStack_1f0 != (longlong *)0x0) {
              LOCK();
              plVar5 = plStack_1f0 + 1;
              lVar4 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_1f0)(plStack_1f0);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          if (plStack_250 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_250 + 1;
            lVar4 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_250)(plStack_250);
              LOCK();
              piVar1 = (int *)((longlong)plStack_250 + 0xc);
              iVar17 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar17 == 1) {
                (**(code **)(*plStack_250 + 8))(plStack_250,1);
              }
            }
          }
        }
      }
      else {
        lVar9 = FUN_140e51670(*(undefined4 *)(param_1 + 200),*(undefined4 *)(lVar4 + 0x128),
                              *(undefined4 *)(lVar4 + 300));
        if (lVar9 == 0) goto LAB_140e8b2ba;
        lVar13 = FUN_140e50a20(lVar9);
        bVar18 = lVar13 == 0;
        if (bVar18) {
          local_210 = 0;
        }
        else {
          local_220 = *(undefined8 *)(lVar13 + 0x18);
          FName::ToString(&local_220,local_208);
          pplVar15 = local_208;
          plVar12 = local_208[0];
        }
        *pplVar15 = (longlong *)0x0;
        local_230 = *(undefined4 *)(pplVar15 + 1);
        local_22c = *(undefined4 *)((longlong)pplVar15 + 0xc);
        pplVar15[1] = (longlong *)0x0;
        local_238 = plVar12;
        if ((bVar18) && (local_218 != (longlong *)0x0)) {
          FMemory::Free();
        }
        if ((!bVar18) && (local_208[0] != (longlong *)0x0)) {
          FMemory::Free();
        }
        FUN_140e724b0(param_1 + 0x60,*(undefined4 *)(param_1 + 200),*(undefined4 *)(lVar4 + 0x128),
                      *(undefined4 *)(lVar4 + 300));
        local_2f8 = local_2f8 & 0xffffffffffffff00;
        FUN_140e950a0(param_1,*(undefined4 *)(param_1 + 200),*(undefined4 *)(lVar4 + 0x128),
                      *(undefined4 *)(lVar4 + 300));
        local_268[0] = *(undefined4 *)(lVar4 + 300);
        local_270[0] = *(undefined4 *)(lVar4 + 0x128);
        local_2c8 = CONCAT44(local_2c8._4_4_,1);
        local_2d0[0] = 0;
        local_278[0] = 1;
        uVar10 = FTextInspector::GetSourceString(lVar9);
        local_280[0] = *(undefined4 *)(param_1 + 200);
        local_260 = DAT_146871000;
        if ((DAT_146871118 == '\0') &&
           (puVar11 = (undefined8 *)FUN_140e7e2d0(), puVar11 != &DAT_1468710c0)) {
          DAT_1468710c0 = *puVar11;
          _DAT_1468710c8 = puVar11[1];
          _DAT_1468710d0 = puVar11[2];
          DAT_1468710d8 = (longlong *)puVar11[3];
          _DAT_1468710e0 = puVar11[4];
          _DAT_1468710e8 = puVar11[5];
          _DAT_1468710f0 = puVar11[6];
          _DAT_1468710f8 = puVar11[7];
          _DAT_146871100 = puVar11[8];
          _DAT_146871108 = puVar11[9];
          _DAT_146871110 = puVar11[10];
          DAT_146871118 = '\x01';
        }
        cVar2 = FUN_142190080(DAT_1468710c0);
        local_1e8[0] = local_238;
        if ((cVar2 != '\0') &&
           (cVar2 = FUN_142194620(DAT_1468710c0), local_1e8[0] = local_238, cVar2 != '\0')) {
          FUN_142190c10(&local_248,DAT_1468710c0);
          lVar4 = *(longlong *)(local_248 + 0xc0);
          if (*(longlong *)(local_248 + 0xc0) == 0) {
            lVar4 = local_248 + 0x20;
          }
          plVar12 = (longlong *)FUN_140aa2bd0(lVar4);
          FUN_14217e740(local_158);
          local_2f8 = local_2f8 & 0xffffffffffffff00;
          FUN_142194380(local_158,0x28,0,0);
          local_158[0] = *(undefined8 *)(param_1 + 0x110);
          FUN_1421923f0(local_d0,DAT_146870fd0,local_158);
          FUN_140bfb300(plVar12,&DAT_1468710c8,local_d0);
          FUN_14217f430(local_d0);
          FUN_14217f430(local_158);
          FUN_140bfadf0(plVar12,&DAT_1468710d0,local_280);
          local_2c0 = 0;
          if ((*DAT_1468710d8 == 0) || (cVar2 = FUN_1407ce010(DAT_1468710d8 + 1), cVar2 == '\0')) {
            bVar18 = false;
          }
          else {
            bVar18 = true;
          }
          if (bVar18) {
            plVar16 = (longlong *)*plVar12;
            plVar5 = plVar16 + (longlong)(int)plVar12[1] * 5;
            if (plVar16 != plVar5) {
              do {
                if ((*(longlong *)*plVar16 == *DAT_1468710d8) &&
                   (*(longlong *)(((longlong *)*plVar16)[1] + 0x28) ==
                    *(longlong *)(DAT_1468710d8[1] + 0x28))) {
                  bVar18 = true;
                }
                else {
                  bVar18 = false;
                }
                if (bVar18) {
                  FUN_14217e740(local_138);
                  local_2f8 = local_2f8 & 0xffffffffffffff00;
                  FUN_142194380(local_138,0x13,0,0);
                  local_138[0] = local_260;
                  FUN_14217f450(plVar16 + 1,local_138);
                  puVar11 = local_138;
                  goto LAB_140e8b0ee;
                }
                plVar16 = plVar16 + 5;
              } while (plVar16 != plVar5);
            }
            local_1c8 = DAT_1468710d8;
            FUN_14217e740(local_1c0);
            local_2f8 = local_2f8 & 0xffffffffffffff00;
            FUN_142194380(local_1c0,0x13,0,0);
            iVar17 = (int)plVar12[1];
            local_1c0[0] = local_260;
            *(int *)(plVar12 + 1) = iVar17 + 1;
            if (*(int *)((longlong)plVar12 + 0xc) < iVar17 + 1) {
              TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(plVar12,iVar17);
            }
            puVar11 = (undefined8 *)(*plVar12 + (longlong)iVar17 * 0x28);
            *puVar11 = local_1c8;
            FUN_14217e5b0(puVar11 + 1,local_1c0);
            puVar11 = local_1c0;
LAB_140e8b0ee:
            FUN_14217f430(puVar11);
          }
          FUN_140bfb1d0(plVar12,&DAT_1468710e0,uVar10);
          FUN_140bfb1d0(plVar12,&DAT_1468710e8,&local_238);
          FUN_140bfa9d0(plVar12,&DAT_1468710f0,local_278);
          FUN_140bfa9d0(plVar12,&DAT_1468710f8,local_270);
          FUN_140bfa9d0(plVar12,&DAT_146871100,local_268);
          FUN_140bfac90(plVar12,&DAT_146871108,local_2d0);
          FUN_140bfa9d0(plVar12,&DAT_146871110,&local_2c8);
          cVar2 = FUN_14218a740(&local_248,1);
          if (cVar2 != '\0') {
            local_1d8 = local_248;
            plStack_1d0 = plStack_240;
            if (plStack_240 != (longlong *)0x0) {
              LOCK();
              *(int *)(plStack_240 + 1) = (int)plStack_240[1] + 1;
              UNLOCK();
            }
            FUN_142194040(&local_1d8);
            plVar12 = plStack_1d0;
            if (plStack_1d0 != (longlong *)0x0) {
              LOCK();
              plVar5 = plStack_1d0 + 1;
              lVar4 = *plVar5;
              *(int *)plVar5 = (int)*plVar5 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plStack_1d0)(plStack_1d0);
                LOCK();
                piVar1 = (int *)((longlong)plVar12 + 0xc);
                iVar17 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if (iVar17 == 1) {
                  (**(code **)(*plVar12 + 8))(plVar12,1);
                }
              }
            }
          }
          local_1e8[0] = local_238;
          if (plStack_240 != (longlong *)0x0) {
            LOCK();
            plVar12 = plStack_240 + 1;
            lVar4 = *plVar12;
            *(int *)plVar12 = (int)*plVar12 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plStack_240)(plStack_240);
              LOCK();
              piVar1 = (int *)((longlong)plStack_240 + 0xc);
              iVar17 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              local_1e8[0] = local_238;
              if (iVar17 == 1) {
                (**(code **)(*plStack_240 + 8))(plStack_240,1);
                local_1e8[0] = local_238;
              }
            }
          }
        }
      }
      if (local_1e8[0] != (longlong *)0x0) {
        FMemory::Free();
      }
      iVar17 = *(int *)(uVar7 + 0x14);
      if (iVar17 + -1 < iVar17) {
        iVar17 = iVar17 + -1;
      }
      *(int *)(uVar7 + 0x14) = iVar17;
      iVar14 = *(int *)(uVar7 + 0x18) + 1;
      iVar17 = -1;
      if (iVar14 != -1) {
        iVar17 = iVar14;
      }
      *(int *)(uVar7 + 0x18) = iVar17;
      Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
                (*(undefined8 *)(param_1 + 0x110));
      uVar6 = 1;
      goto LAB_140e8b2f0;
    }
  }
  uVar10 = FUN_1409f3dd0(local_b0,local_2b8);
  FUN_141460710(*(undefined8 *)(param_1 + 0x110),*(undefined4 *)(param_1 + 200),uVar10);
  uVar6 = 1;
LAB_140e8b2f0:
  if ((int)local_2b0 != 0) {
    plVar12 = (longlong *)(local_2b8 + 0x38);
    iVar17 = (int)local_2b0;
    do {
      if (plVar12[2] != 0) {
        FMemory::Free();
      }
      if (*plVar12 != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar12 + -3);
      plVar12 = plVar12 + 0xc;
      iVar17 = iVar17 + -1;
    } while (iVar17 != 0);
  }
  if (local_2b8 != 0) {
    FMemory::Free();
    return uVar6;
  }
  return uVar6;
}



// FUNCTION 140e8b380 FUN_140e8b380 body=300 status=ok
// SIG undefined FUN_140e8b380(void)

void FUN_140e8b380(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = param_1[2];
  if (lVar6 != 0) {
    lVar5 = *param_1;
    lVar7 = (longlong)(int)param_1[1] * 0xf8 + lVar5;
    if (lVar5 != lVar7) {
      do {
        if (*(longlong *)(lVar5 + 0x28) != 0) {
          uVar2 = AActor::GetWorldTimerManager(param_1[2]);
          FUN_142880530(uVar2,lVar5 + 0x28);
          *(undefined8 *)(lVar5 + 0x28) = 0;
        }
        lVar5 = lVar5 + 0xf8;
      } while (lVar5 != lVar7);
      lVar6 = param_1[2];
    }
    if (*(char *)(lVar6 + 0x128) == '\x03') {
      lVar6 = *param_1;
      lVar5 = (longlong)(int)param_1[1] * 0xf8 + lVar6;
      for (; lVar6 != lVar5; lVar6 = lVar6 + 0xf8) {
        lVar7 = *(longlong *)(lVar6 + 8);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        *(undefined8 *)(lVar6 + 0x18) = 0;
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0xc);
          lVar3 = 0;
          if ((int)uVar1 < (int)DAT_1469e91c4) {
            uVar4 = uVar1 & 0xffff;
            if ((int)uVar1 < 0) {
              uVar1 = uVar1 + 0xffff;
              uVar4 = uVar4 - 0x10000;
            }
            lVar3 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar1 >> 0x10) * 8) +
                    (longlong)(int)uVar4 * 0x18;
          }
          if ((*(uint *)(lVar3 + 8) >> 0x1d & 1) == 0) {
            FUN_142227350(lVar7,0,1);
          }
          *(undefined8 *)(lVar6 + 8) = 0;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e8b4b0 FUN_140e8b4b0 body=447 status=ok
// SIG undefined FUN_140e8b4b0(void)

undefined8 * FUN_140e8b4b0(longlong param_1,undefined8 *param_2,longlong param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if (param_3 != 0) {
    lVar5 = FUN_142e20fc0();
    lVar8 = param_3;
    do {
      if (lVar8 == lVar5) {
        uVar7 = 0;
        local_48 = 0;
        uStack_40 = 0;
        if ((*(longlong *)(param_1 + 0x218) != 0) &&
           (lVar8 = *(longlong *)(*(longlong *)(param_1 + 0x218) + 0x920), lVar8 != 0)) {
          puVar6 = (undefined8 *)FUN_142c7bc00(lVar8,local_38,param_3,2);
          if (&local_48 != puVar6) {
            local_48 = *puVar6;
            *puVar6 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&uStack_40,puVar6 + 1);
          }
          if (local_30 != (longlong *)0x0) {
            LOCK();
            plVar10 = local_30 + 1;
            lVar8 = *plVar10;
            *(int *)plVar10 = (int)*plVar10 + -1;
            UNLOCK();
            if ((int)lVar8 == 1) {
              (**(code **)*local_30)(local_30);
              LOCK();
              piVar1 = (int *)((longlong)local_30 + 0xc);
              iVar3 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar3 == 1) {
                (**(code **)(*local_30 + 8))(local_30,1);
              }
            }
          }
        }
        if (param_4 != '\0') {
          plVar10 = *(longlong **)(param_1 + 0x228);
          uVar9 = (longlong)*(int *)(param_1 + 0x230) & 0x1fffffffffffffff;
          if (plVar10 + *(int *)(param_1 + 0x230) < plVar10) {
            uVar9 = uVar7;
          }
          if (uVar9 != 0) {
            do {
              if (((*plVar10 != 0) && (lVar8 = *(longlong *)(*plVar10 + 0x458), lVar8 != 0)) &&
                 (FUN_142c7bc00(lVar8,local_28,param_3,2), plVar4 = local_20,
                 local_20 != (longlong *)0x0)) {
                LOCK();
                plVar2 = local_20 + 1;
                lVar8 = *plVar2;
                *(int *)plVar2 = (int)*plVar2 + -1;
                UNLOCK();
                if ((int)lVar8 == 1) {
                  (**(code **)*local_20)(local_20);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar4 + 0xc);
                  iVar3 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar3 == 1) {
                    (**(code **)(*plVar4 + 8))(plVar4,1);
                  }
                }
              }
              plVar10 = plVar10 + 1;
              uVar7 = uVar7 + 1;
            } while (uVar7 != uVar9);
          }
        }
        *param_2 = local_48;
        param_2[1] = uStack_40;
        return param_2;
      }
      lVar8 = *(longlong *)(lVar8 + 0x30);
    } while (lVar8 != 0);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 140e8b670 FUN_140e8b670 body=673 status=ok
// SIG undefined FUN_140e8b670(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140e8b670(longlong param_1)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8 [2];
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [8];
  undefined8 local_80;
  code *local_78;
  longlong local_68 [4];
  longlong *local_48;
  int local_38;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  FUN_140e8b4b0(param_1,&local_b8,*(undefined8 *)(param_1 + 0x1a8),1);
  if (CONCAT44(uStack_ac,uStack_b0) != 0) {
    LOCK();
    piVar1 = (int *)(CONCAT44(uStack_ac,uStack_b0) + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      puVar4 = (undefined8 *)CONCAT44(uStack_ac,uStack_b0);
      (**(code **)*puVar4)(puVar4);
      LOCK();
      piVar1 = (int *)((longlong)puVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)CONCAT44(uStack_ac,uStack_b0) + 8))
                  ((longlong *)CONCAT44(uStack_ac,uStack_b0),1);
      }
    }
  }
  if ((*(longlong *)(param_1 + 0x218) != 0) && (lVar5 = FUN_1422312c0(), lVar5 != 0)) {
    fVar7 = *(float *)(param_1 + 0x1b4);
    if (fVar7 <= 0.01) {
      fVar7 = 0.01;
    }
    local_c8 = (longlong *)0x0;
    local_c0 = 0;
    local_b8 = &LAB_140e6e3a8;
    uStack_b0 = 0;
    plVar6 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar6 == (longlong *)0x0) {
      if (((local_c0 != 0) && (local_c8 != (longlong *)0x0)) &&
         ((**(code **)(*local_c8 + 0x28))(local_c8,0), local_c8 != (longlong *)0x0)) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
    }
    else {
      *plVar6 = (longlong)&PTR_FUN_1444f84e8;
      FWeakObjectPtr::operator=(plVar6 + 1,param_1);
      *(undefined4 *)(plVar6 + 2) = (undefined4)local_b8;
      *(undefined4 *)((longlong)plVar6 + 0x14) = local_b8._4_4_;
      *(undefined4 *)(plVar6 + 3) = uStack_b0;
      *(undefined4 *)((longlong)plVar6 + 0x1c) = uStack_ac;
      *(undefined1 *)(plVar6 + 4) = 0;
      lVar5 = FDelegateHandle::GenerateNewID();
      plVar6[5] = lVar5;
      *plVar6 = (longlong)&PTR_FUN_1444f8530;
      FUN_140cf77f0(plVar6,&local_c8);
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6,0);
      lVar5 = FMemory::Realloc(plVar6,0,0);
      if (lVar5 != 0) {
        FMemory::Free(lVar5);
      }
    }
    local_a8[0] = 0;
    lVar5 = FUN_1422312c0(*(undefined8 *)(param_1 + 0x218));
    local_98 = 0;
    local_90 = 0;
    uVar3 = *(undefined8 *)(lVar5 + 0xa0);
    if ((local_c0 != 0) && (local_c8 != (longlong *)0x0)) {
      (**(code **)(*local_c8 + 0x30))(local_c8,&local_98);
    }
    FWeakObjectPtr::operator=(local_88,0);
    local_d0 = 0xbf800000;
    local_d8 = 0;
    local_80 = 0;
    local_48 = (longlong *)0x0;
    local_38 = 0;
    local_78 = AK::MemoryMgr::StartProfileThreadUsage;
    FUN_142880850(uVar3,local_a8,&local_98,fVar7);
    if (local_38 != 0) {
      plVar6 = local_68;
      if (local_48 != (longlong *)0x0) {
        plVar6 = local_48;
      }
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,0);
      }
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_98);
    if (local_c0 != 0) {
      if (local_c8 == (longlong *)0x0) {
        return;
      }
      (**(code **)(*local_c8 + 0x28))(local_c8,0);
      if (local_c8 != (longlong *)0x0) {
        local_c8 = (longlong *)FMemory::Realloc(local_c8,0,0);
      }
      local_c0 = 0;
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free(local_c8);
    }
  }
  return;
}



// FUNCTION 140e8b920 FUN_140e8b920 body=88 status=ok
// SIG undefined FUN_140e8b920(void)

void FUN_140e8b920(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_140e7ab80(param_2,0);
  FUN_140e6bd40(param_2,param_1 + 0xd0);
  *(undefined4 *)(param_3 + 8) = 0;
  if (*(int *)(param_3 + 0xc) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_3,0);
  }
  return;
}



// FUNCTION 140e8b980 FUN_140e8b980 body=1343 status=ok
// SIG undefined FUN_140e8b980(void)

void FUN_140e8b980(longlong param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  undefined4 *param_5)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined2 *local_118;
  undefined8 local_110;
  void *local_108;
  int local_100;
  int local_fc;
  undefined1 local_f8;
  longlong local_f0 [21];
  undefined4 local_48;
  
  plVar7 = (longlong *)*param_2;
  for (iVar5 = (int)param_2[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 3;
  }
  *(undefined4 *)(param_2 + 1) = 0;
  if (*(int *)((longlong)param_2 + 0xc) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
              (param_2,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x188);
  lVar10 = (longlong)*(int *)(param_1 + 400) * 0x30 + lVar8;
  for (; lVar8 != lVar10; lVar8 = lVar8 + 0x30) {
    FSoftObjectPath::ToString(lVar8 + 0x10,&local_118);
    puVar4 = local_118;
    uVar1 = *(undefined1 *)(lVar8 + 0x28);
    local_108 = (void *)0x0;
    lVar6 = (longlong)(int)local_110;
    local_100 = (int)local_110;
    if ((int)local_110 == 0) {
      local_fc = (int)local_110;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_110 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop(local_108,puVar4,lVar6 * 2);
    }
    local_f8 = uVar1;
    iVar5 = TArray<FPermissionData,TSizedDefaultAllocator<32>_>::Find(param_2,&local_108);
    if (iVar5 == -1) {
      iVar5 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar5 + 1) {
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
        ResizeGrow(param_2,iVar5);
      }
      puVar3 = (undefined8 *)(*param_2 + (longlong)iVar5 * 0x18);
      *puVar3 = local_108;
      *(int *)(puVar3 + 1) = local_100;
      *(int *)((longlong)puVar3 + 0xc) = local_fc;
      *(undefined1 *)(puVar3 + 2) = local_f8;
    }
    else if (local_108 != (void *)0x0) {
      FMemory::Free();
    }
    if (local_118 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  plVar7 = (longlong *)*param_3;
  for (iVar5 = (int)param_3[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  *(undefined4 *)(param_3 + 1) = 0;
  if (*(int *)((longlong)param_3 + 0xc) != 0) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_3,0);
  }
  lVar8 = *(longlong *)(param_1 + 0x1a8);
  lVar10 = (longlong)*(int *)(param_1 + 0x1b0) * 0x30 + lVar8;
  do {
    if (lVar8 == lVar10) {
      plVar7 = (longlong *)*param_4;
      for (iVar5 = (int)param_4[1]; iVar5 != 0; iVar5 = iVar5 + -1) {
        if (plVar7[0x12] != 0) {
          FMemory::Free();
        }
        if (plVar7[0x10] != 0) {
          FMemory::Free();
        }
        if (plVar7[0xe] != 0) {
          FMemory::Free();
        }
        if (plVar7[0xc] != 0) {
          FMemory::Free();
        }
        if (plVar7[10] != 0) {
          FMemory::Free();
        }
        if (plVar7[8] != 0) {
          FMemory::Free();
        }
        if (plVar7[6] != 0) {
          FMemory::Free();
        }
        if (plVar7[4] != 0) {
          FMemory::Free();
        }
        if (plVar7[2] != 0) {
          FMemory::Free();
        }
        if (*plVar7 != 0) {
          FMemory::Free();
        }
        plVar7 = plVar7 + 0x16;
      }
      *(undefined4 *)(param_4 + 1) = 0;
      if (*(int *)((longlong)param_4 + 0xc) != 0) {
        TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(param_4,0);
      }
      lVar8 = *(longlong *)(param_1 + 0x1b8);
      lVar10 = (longlong)*(int *)(param_1 + 0x1c0) * 0x188 + lVar8;
      for (; lVar8 != lVar10; lVar8 = lVar8 + 0x188) {
        local_f0[0] = 0;
        local_f0[2] = 0;
        local_f0[4] = 0;
        local_f0[6] = 0;
        local_f0[8] = 0;
        local_f0[10] = 0;
        local_f0[0xc] = 0;
        local_f0[0xe] = 0;
        local_f0[0x10] = 0;
        local_f0[0x12] = 0;
        local_f0[0x13] = 0;
        local_f0[0x14] = 0xffffffffffffffff;
        local_f0[1] = 0;
        local_f0[3] = 0;
        local_f0[5] = 0;
        local_f0[7] = 0;
        local_f0[9] = 0;
        local_f0[0xb] = 0;
        local_f0[0xd] = 0;
        local_f0[0xf] = 0;
        local_f0[0x11] = 0;
        local_48 = 0xffffffff;
        FUN_1410b4c60(local_f0,lVar8);
        iVar5 = (int)param_4[1];
        *(int *)(param_4 + 1) = iVar5 + 1;
        if (*(int *)((longlong)param_4 + 0xc) < iVar5 + 1) {
          TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(param_4,iVar5);
        }
        FUN_140e6a4d0((longlong)iVar5 * 0xb0 + *param_4,local_f0);
        if (local_f0[0x12] != 0) {
          FMemory::Free();
        }
        if (local_f0[0x10] != 0) {
          FMemory::Free();
        }
        if (local_f0[0xe] != 0) {
          FMemory::Free();
        }
        if (local_f0[0xc] != 0) {
          FMemory::Free();
        }
        if (local_f0[10] != 0) {
          FMemory::Free();
        }
        if (local_f0[8] != 0) {
          FMemory::Free();
        }
        if (local_f0[6] != 0) {
          FMemory::Free();
        }
        if (local_f0[4] != 0) {
          FMemory::Free();
        }
        if (local_f0[2] != 0) {
          FMemory::Free();
        }
        if (local_f0[0] != 0) {
          FMemory::Free();
        }
      }
      *param_5 = *(undefined4 *)(param_1 + 0x1c8);
      return;
    }
    if (*(longlong *)(lVar8 + 0x10) != 0) {
      FSoftObjectPath::ToString(lVar8 + 0x10,&local_118);
      puVar3 = (undefined8 *)*param_3;
      lVar6 = param_3[1];
      for (puVar9 = puVar3; puVar9 != puVar3 + (longlong)(int)lVar6 * 2; puVar9 = puVar9 + 2) {
        puVar4 = &DAT_143f3eda8;
        if ((int)local_110 != 0) {
          puVar4 = local_118;
        }
        if (*(int *)(puVar9 + 1) == 0) {
          puVar2 = &DAT_143f3eda8;
        }
        else {
          puVar2 = (undefined2 *)*puVar9;
        }
        iVar5 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar4);
        if (iVar5 == 0) {
          if ((int)((longlong)puVar9 - (longlong)puVar3 >> 4) != -1) goto LAB_140e8bc1f;
          break;
        }
      }
      iVar5 = (int)param_3[1];
      *(int *)(param_3 + 1) = iVar5 + 1;
      if (*(int *)((longlong)param_3 + 0xc) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_3,iVar5);
      }
      puVar3 = (undefined8 *)((longlong)iVar5 * 0x10 + *param_3);
      *puVar3 = 0;
      *puVar3 = local_118;
      local_118 = (undefined2 *)0x0;
      *(int *)(puVar3 + 1) = (int)local_110;
      *(undefined4 *)((longlong)puVar3 + 0xc) = local_110._4_4_;
      local_110 = 0;
LAB_140e8bc1f:
      if (local_118 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    lVar8 = lVar8 + 0x30;
  } while( true );
}



// FUNCTION 140e8bec0 FUN_140e8bec0 body=36 status=ok
// SIG undefined FUN_140e8bec0(void)

void FUN_140e8bec0(longlong param_1)

{
  FUN_1417931d0();
  *(undefined8 *)(param_1 + 0x2f8) = 0;
  *(undefined8 *)(param_1 + 0x300) = 0;
  return;
}



// FUNCTION 140e8bef0 FUN_140e8bef0 body=76 status=ok
// SIG undefined FUN_140e8bef0(void)

void FUN_140e8bef0(longlong *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_1426a45e0();
  uVar1 = FUN_1412d7930();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x9d] = lVar2;
  uVar1 = FUN_1430a76d0();
  lVar2 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
  param_1[0x9e] = lVar2;
  return;
}



// FUNCTION 140e8bf40 FUN_140e8bf40 body=622 status=ok
// SIG undefined FUN_140e8bf40(void)

void FUN_140e8bf40(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
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
  
  FUN_142238430();
  uStack_84 = 1;
  plVar11 = (longlong *)(param_1 + 0x2b0);
  uVar2 = *(uint *)(param_1 + 0x2d8);
  puVar1 = (uint *)(param_1 + 0x2c0);
  local_88 = 0;
  uStack_74 = 0;
  iStack_70 = 0;
  if (uVar2 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar3 = *puVar10;
    iStack_70 = 0;
    local_88 = 0;
    while (uVar3 == 0) {
      lVar8 = (longlong)local_88;
      iStack_70 = iStack_70 + 0x20;
      iVar6 = local_88 + 1;
      bVar4 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_88;
      local_88 = iVar6;
      if (bVar4) goto LAB_140e8c01d;
      uVar3 = puVar10[lVar8 + 1];
    }
    uStack_84 = uVar3 - 1 & uVar3 ^ uVar3;
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
LAB_140e8c01d:
      uStack_74 = uVar2;
    }
  }
  uVar3 = *(uint *)(param_1 + 0x2d8);
  uStack_50 = 0xffffffff;
  uStack_4c = uStack_74;
  local_48 = CONCAT44(uStack_6c,iStack_70);
  uStack_38 = CONCAT44(uStack_84,local_88);
  uVar9 = uVar3 & 0xffffffe0;
  iStack_60 = local_88;
  uStack_5c = uStack_84;
  local_58 = puVar1;
  local_40 = plVar11;
  puStack_30 = puVar1;
  uStack_20 = local_48;
  uStack_28 = uStack_50;
  uStack_24 = uStack_4c;
  uStack_74 = uVar3;
  if (uVar3 != uVar2) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puVar1;
    }
    uVar7 = puVar10[(int)uVar3 >> 5] & -1 << ((byte)uVar3 & 0x1f);
    iVar6 = (int)uVar3 >> 5;
    while (uVar7 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar6) goto LAB_140e8c0f5;
      uVar7 = puVar10[(longlong)iVar6 + 1];
      iVar6 = iVar6 + 1;
    }
    uVar7 = uVar7 - 1 & uVar7 ^ uVar7;
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
    uStack_74 = (uVar9 - iVar6) + 0x1f;
    if ((int)uVar2 < (int)uStack_74) {
LAB_140e8c0f5:
      uStack_74 = uVar2;
    }
  }
  while( true ) {
    if ((uStack_4c == uStack_74) && (local_58 == puVar1)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) break;
    lVar8 = *(longlong *)(*plVar11 + (longlong)(int)uStack_4c * 0x10);
    if (lVar8 != 0) {
      lVar5 = FUN_142a07000();
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if (bVar4) {
        *(undefined1 *)(lVar8 + 0x878) = 0;
      }
    }
    uStack_50 = uStack_50 & ~uStack_5c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
  }
  return;
}



// FUNCTION 140e8c1b0 FUN_140e8c1b0 body=359 status=ok
// SIG undefined FUN_140e8c1b0(void)

void FUN_140e8c1b0(longlong param_1)

{
  int iVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  FUN_1407d52d0();
  lVar3 = *(longlong *)(param_1 + 0x648);
  if ((lVar3 != 0) || ((*(uint *)(param_1 + 8) >> 4 & 1) != 0)) goto LAB_140e8c249;
  lVar3 = *(longlong *)(param_1 + 0x650);
  if ((lVar3 == 0) || (*(longlong *)(lVar3 + 0x20) != param_1)) {
    lVar3 = FUN_142e7dfd0();
    lVar3 = UObject::GetDefaultSubobjectByName(param_1,*(undefined8 *)(lVar3 + 0x18));
    if (lVar3 == 0) {
LAB_140e8c239:
      lVar3 = 0;
    }
    else {
      lVar4 = FUN_142e7dfd0();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_140e8c239;
    }
    *(longlong *)(param_1 + 0x650) = lVar3;
  }
  *(longlong *)(param_1 + 0x648) = lVar3;
LAB_140e8c249:
  if ((*(uint *)(param_1 + 8) >> 4 & 1) == 0) {
    plVar6 = *(longlong **)(param_1 + 0x640);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_142e7dfd0();
      lVar3 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar5);
      if (lVar3 == 0) {
        lVar3 = *(longlong *)(param_1 + 0x648);
      }
    }
    FUN_140e91900(param_1,lVar3);
  }
  if (*(longlong *)(param_1 + 0x638) != 0) {
    plVar6 = (longlong *)AIndianaUI::GetArmorComponent(param_1);
    if (plVar6 != (longlong *)0x0) {
      lVar3 = FUN_1414ba0d0();
      iVar1 = *(int *)(lVar3 + 0x90);
      if ((*(int *)(plVar6[2] + 0x90) < iVar1) ||
         (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar6[0x3d] = *(longlong *)(*(longlong *)(param_1 + 0x638) + 0x1e8);
        (**(code **)(*plVar6 + 0x70))(plVar6,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
      }
    }
  }
  return;
}



// FUNCTION 140e8c320 FUN_140e8c320 body=117 status=ok
// SIG undefined FUN_140e8c320(void)

void FUN_140e8c320(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    if (*(longlong *)(param_2 + 0xd0) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x10);
      local_10 = *(undefined8 *)(param_1 + 0x20);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 0xd0),&local_18);
    }
    if (*(longlong *)(param_2 + 0xe0) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x28);
      local_10 = *(undefined8 *)(param_1 + 0x20);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 0xe0),&local_18);
    }
  }
  return;
}



// FUNCTION 140e8c3a0 FUN_140e8c3a0 body=464 status=ok
// SIG undefined FUN_140e8c3a0(void)

void FUN_140e8c3a0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    local_18 = *(longlong *)(param_1 + 0x30);
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (local_18 != lVar2) {
      if (local_18 != 0) {
        if (*(longlong *)(param_2 + 0xd0) != 0) {
          local_10 = *(undefined8 *)(param_1 + 0x20);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_2 + 0xd0),&local_18);
          lVar2 = *(longlong *)(param_1 + 0x10);
        }
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      if (((lVar2 != 0) &&
          (uVar1 = *(undefined8 *)(param_1 + 0x20), *(longlong *)(param_2 + 0xc0) != 0)) &&
         (*(longlong *)(param_2 + 200) != 0)) {
        if (*(longlong *)(param_2 + 0xd0) != 0) {
          lVar4 = *(longlong *)(param_2 + 0xb0);
          lVar3 = (longlong)*(int *)(param_2 + 0xb8) * 0x40 + lVar4;
          for (; lVar4 != lVar3; lVar4 = lVar4 + 0x40) {
            local_18 = *(longlong *)(lVar4 + 0x30);
            if ((lVar2 == local_18) && (lVar2 != *(longlong *)(lVar4 + 0x10))) {
              local_10 = *(undefined8 *)(lVar4 + 0x20);
              TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                        (*(longlong *)(param_2 + 0xd0),&local_18);
              *(undefined8 *)(lVar4 + 0x30) = 0;
              break;
            }
          }
        }
        local_18 = lVar2;
        local_10 = uVar1;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (*(undefined8 *)(param_2 + 200),&local_18);
        lVar2 = *(longlong *)(param_1 + 0x10);
      }
      *(longlong *)(param_1 + 0x30) = lVar2;
    }
    local_18 = *(longlong *)(param_1 + 0x38);
    lVar2 = *(longlong *)(param_1 + 0x28);
    if (local_18 != lVar2) {
      if (local_18 != 0) {
        if ((*(longlong *)(param_2 + 0xc0) != 0) && (*(longlong *)(param_2 + 0xe0) != 0)) {
          local_10 = *(undefined8 *)(param_1 + 0x20);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_2 + 0xe0),&local_18);
          lVar2 = *(longlong *)(param_1 + 0x28);
        }
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      if (((lVar2 != 0) && (*(longlong *)(param_2 + 0xc0) != 0)) &&
         (*(longlong *)(param_2 + 0xd8) != 0)) {
        local_10 = *(undefined8 *)(param_1 + 0x20);
        local_18 = lVar2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (*(longlong *)(param_2 + 0xd8),&local_18);
        lVar2 = *(longlong *)(param_1 + 0x28);
      }
      *(longlong *)(param_1 + 0x38) = lVar2;
    }
  }
  return;
}



// FUNCTION 140e8c570 FUN_140e8c570 body=117 status=ok
// SIG undefined FUN_140e8c570(void)

void FUN_140e8c570(longlong param_1,longlong param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    if (*(longlong *)(param_2 + 200) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x10);
      local_10 = *(undefined8 *)(param_1 + 0x20);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 200),&local_18);
    }
    if (*(longlong *)(param_2 + 0xd8) != 0) {
      local_18 = *(undefined8 *)(param_1 + 0x28);
      local_10 = *(undefined8 *)(param_1 + 0x20);
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (*(longlong *)(param_2 + 0xd8),&local_18);
    }
  }
  return;
}



// FUNCTION 140e8c5f0 FUN_140e8c5f0 body=231 status=ok
// SIG undefined FUN_140e8c5f0(void)

void FUN_140e8c5f0(longlong param_1)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 local_18;
  longlong *local_10;
  
  puVar1 = (undefined8 *)(param_1 + 0x60);
  if ((*(longlong *)(param_1 + 0x60) == 0) && (0 < *(int *)(param_1 + 0x78))) {
    local_10 = (longlong *)(*(undefined8 **)(param_1 + 0x70))[1];
    local_18 = **(undefined8 **)(param_1 + 0x70);
    if (local_10 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_10 + 1) = (int)local_10[1] + 1;
      UNLOCK();
    }
    if (puVar1 != &local_18) {
      *puVar1 = local_18;
      local_18 = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x68,&local_10);
    }
    plVar6 = local_10;
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_10 + 1;
      lVar5 = *plVar2;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar3 = (int *)((longlong)plVar6 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
              (param_1 + 0x70,0,1,1);
    (**(code **)(*(longlong *)*puVar1 + 8))();
  }
  return;
}



// FUNCTION 140e8c6f0 FUN_140e8c6f0 body=306 status=ok
// SIG undefined FUN_140e8c6f0(void)

void FUN_140e8c6f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_140e689e0(param_2,param_3);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  FUN_1404b8b20(local_18 + 1,param_1,FUN_140e896c0);
  plVar3 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar4);
  }
  puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x70));
  *puVar6 = plVar1;
  puVar6[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140e8c5f0(param_1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 140e8c830 FUN_140e8c830 body=312 status=ok
// SIG undefined FUN_140e8c830(void)

void FUN_140e8c830(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *local_18;
  longlong *local_10;
  
  local_10 = (longlong *)FUN_140e68910(param_2,param_3,param_4);
  local_18 = local_10 + 2;
  SharedPointerInternals::EnableSharedFromThis(&local_18,local_18,local_18);
  FUN_1404b8b20(local_18 + 1,param_1,FUN_140e89550);
  plVar3 = local_10;
  plVar1 = local_18;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_10 + 1) = (int)local_10[1] + 1;
    UNLOCK();
  }
  iVar4 = *(int *)(param_1 + 0x78);
  *(int *)(param_1 + 0x78) = iVar4 + 1;
  if (*(int *)(param_1 + 0x7c) < iVar4 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x70,iVar4);
  }
  puVar6 = (undefined8 *)((longlong)iVar4 * 0x10 + *(longlong *)(param_1 + 0x70));
  *puVar6 = plVar1;
  puVar6[1] = plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
  }
  FUN_140e8c5f0(param_1);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar1 = local_10;
  if (local_10 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_10 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_10)(local_10);
      LOCK();
      piVar2 = (int *)((longlong)plVar1 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar1 + 8))(plVar1,1);
      }
    }
  }
  return;
}



// FUNCTION 140e8c970 FUN_140e8c970 body=364 status=ok
// SIG undefined FUN_140e8c970(void)

void FUN_140e8c970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *local_28;
  uint local_20;
  uint local_1c;
  
  plVar6 = (longlong *)0x0;
  *(undefined4 *)(param_1 + 0x318) = 0;
  lVar4 = *(longlong *)(param_1 + 0x2b0);
  lVar10 = (longlong)*(int *)(param_1 + 0x2b8) * 0x10 + lVar4;
  local_28 = (longlong *)0x0;
  local_1c = 0;
  plVar7 = plVar6;
  plVar9 = plVar6;
  do {
    if (lVar4 == lVar10) {
      plVar6 = *(longlong **)(param_1 + 0x118);
      if (plVar6 != (longlong *)0x0) {
        uVar3 = AGFireballProjectile::GetPrivateStaticClass();
        lVar4 = (**(code **)(*plVar6 + 0x628))(plVar6,uVar3);
        if ((lVar4 != 0) && (*(longlong *)(param_1 + 0x290) != 0)) {
          if (*(int *)(param_1 + 0x318) < 1) {
            FUN_1409bea90(lVar4,param_1);
          }
          else {
            FUN_1409b6c10();
          }
        }
      }
      iVar5 = *(int *)(param_1 + 0x31c);
      iVar8 = 0;
      if ((-1 < iVar5) && (iVar8 = *(int *)(param_1 + 0x318), iVar5 < *(int *)(param_1 + 0x318))) {
        iVar8 = iVar5;
      }
      *(int *)(param_1 + 0x31c) = iVar8;
      if (plVar9 == (longlong *)0x0) {
        return;
      }
      FMemory::Free(plVar9);
      return;
    }
    lVar1 = *(longlong *)(lVar4 + 8);
    if (lVar1 != 0) {
      iVar5 = (int)plVar6;
      for (plVar2 = plVar9; plVar2 != plVar9 + iVar5; plVar2 = plVar2 + 1) {
        if (*plVar2 == lVar1) goto LAB_140e8ca2f;
      }
      local_20 = iVar5 + 1;
      if ((int)plVar7 < (int)local_20) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_28,plVar6);
        plVar7 = (longlong *)(ulonglong)local_1c;
        plVar9 = local_28;
      }
      plVar6 = (longlong *)(ulonglong)local_20;
      plVar9[iVar5] = lVar1;
      *(int *)(param_1 + 0x318) = *(int *)(param_1 + 0x318) + *(int *)(lVar1 + 0x38);
    }
LAB_140e8ca2f:
    lVar4 = lVar4 + 0x10;
  } while( true );
}



// FUNCTION 140e8cae0 FUN_140e8cae0 body=519 status=ok
// SIG undefined FUN_140e8cae0(void)

void FUN_140e8cae0(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  int *piVar9;
  int *piVar10;
  
  if (*(longlong *)(param_1 + 0x110) != 0) {
    iVar5 = *(int *)(param_1 + 200);
    lVar6 = FUN_140e822f0(param_1,iVar5);
    if ((((lVar6 != 0) &&
         (plVar7 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar6),
         plVar7 != (longlong *)0x0)) &&
        (cVar1 = (**(code **)(*plVar7 + 0x280))(plVar7,*(undefined8 *)(param_1 + 0x110)),
        cVar1 != '\0')) && (lVar6 = FUN_140e822f0(param_1,iVar5), lVar6 != 0)) {
      piVar9 = *(int **)(param_1 + 0xd0);
      piVar10 = piVar9 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
      for (; piVar9 != piVar10; piVar9 = piVar9 + 0x16) {
        if (*piVar9 == iVar5) {
          if (piVar9 != (int *)0x0) {
            iVar5 = piVar9[8];
            goto LAB_140e8cb94;
          }
          break;
        }
      }
      iVar5 = 0;
LAB_140e8cb94:
      iVar3 = FUN_140aabba0(*(longlong *)(param_1 + 0x110) + 0x1a68,*(undefined8 *)(lVar6 + 0x68));
      iVar4 = FUN_140e51650(lVar6,param_2);
      if (((iVar4 <= iVar3 - iVar5) && (lVar6 = FUN_140e82830(param_1,param_2), lVar6 != 0)) &&
         (lVar8 = FUN_140e822f0(param_1,param_2), lVar8 != 0)) {
        iVar5 = FUN_140e51650(lVar8,param_3);
        *(int *)(lVar6 + 0x20) = *(int *)(lVar6 + 0x20) + iVar5;
        uVar2 = FUN_140e85eb0(param_1,param_3,param_2);
        plVar7 = *(longlong **)(param_1 + 0x110);
        if ((char)plVar7[0x25] == '\x03') {
          cVar1 = (**(code **)(*plVar7 + 0x768))();
          if (((cVar1 != '\0') && (*(longlong *)(param_1 + 0x110) != 0)) &&
             ((lVar6 = FUN_140e822f0(param_1,param_2), lVar6 != 0 &&
              ((plVar7 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar6),
               plVar7 != (longlong *)0x0 &&
               (cVar1 = (**(code **)(*plVar7 + 0x280))(plVar7,*(undefined8 *)(param_1 + 0x110)),
               cVar1 != '\0')))))) {
            FUN_140e42f00(*(undefined8 *)(param_1 + 0x110),param_2,param_3,uVar2);
            cVar1 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x768))();
            if (cVar1 == '\0') {
              FUN_14145dee0(*(undefined8 *)(param_1 + 0x110),param_2,param_3);
            }
            else {
              FUN_140e76200(param_1);
            }
          }
        }
        else {
          FUN_141460800(plVar7,param_2,param_3,uVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e8ccf0 FUN_140e8ccf0 body=620 status=ok
// SIG undefined FUN_140e8ccf0(void)

void FUN_140e8ccf0(longlong param_1,int param_2,int param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 uVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  int *piVar11;
  bool bVar12;
  ulonglong local_res8;
  int *local_60;
  undefined4 local_58;
  undefined4 local_54;
  int *local_50;
  undefined8 local_48;
  int *local_40 [3];
  
  piVar5 = (int *)0x0;
  local_res8 = local_res8 & 0xffffffff00000000;
  if ((((*(longlong *)(param_1 + 0x110) != 0) && (lVar2 = FUN_140e822f0(), lVar2 != 0)) &&
      (plVar3 = (longlong *)FUdpMessageTunnel::GetTotalInboundBytes(lVar2),
      plVar3 != (longlong *)0x0)) &&
     (cVar1 = (**(code **)(*plVar3 + 0x280))(plVar3,*(undefined8 *)(param_1 + 0x110)), cVar1 != '\0'
     )) {
    iVar7 = param_2;
    if (param_2 == 0) {
      iVar7 = *(int *)(param_1 + 200);
    }
    if (iVar7 != 0) {
      piVar10 = *(int **)(param_1 + 0xd0);
      piVar11 = piVar10 + (longlong)*(int *)(param_1 + 0xd8) * 0x16;
      if (piVar10 != piVar11) {
        while (*piVar10 != iVar7) {
          piVar10 = piVar10 + 0x16;
          if (piVar10 == piVar11) {
            return;
          }
        }
        if (piVar10 != (int *)0x0) {
          piVar11 = *(int **)(piVar10 + 10);
          local_res8 = CONCAT44(local_res8._4_4_,param_4);
          piVar10 = piVar11 + (longlong)piVar10[0xc] * 2;
          for (; (piVar8 = piVar5, piVar11 != piVar10 &&
                 ((*piVar11 != param_3 || (piVar8 = piVar11, piVar11[1] != param_4))));
              piVar11 = piVar11 + 2) {
          }
          if ((piVar8 != (int *)0x0) && (lVar2 = FUN_140e82830(param_1,param_2), lVar2 != 0)) {
            FUN_140e43380(*(undefined8 *)(param_1 + 0x110),param_2,param_3,param_4);
            cVar1 = FUN_140e6f750(lVar2,param_3,param_4,0);
            if (cVar1 != '\0') {
              lVar2 = FUN_140e51670(param_2,param_3,param_4);
              if (lVar2 != 0) {
                lVar4 = FUN_140e50a20(lVar2);
                bVar12 = lVar4 == 0;
                if (bVar12) {
                  local_48 = 0;
                  ppiVar9 = &local_50;
                }
                else {
                  local_res8 = *(ulonglong *)(lVar4 + 0x18);
                  FName::ToString(&local_res8,local_40);
                  ppiVar9 = local_40;
                  piVar5 = local_40[0];
                }
                *ppiVar9 = (int *)0x0;
                local_58 = *(undefined4 *)(ppiVar9 + 1);
                local_54 = *(undefined4 *)((longlong)ppiVar9 + 0xc);
                ppiVar9[1] = (int *)0x0;
                local_60 = piVar5;
                if ((bVar12) && (local_50 != (int *)0x0)) {
                  FMemory::Free();
                }
                if ((!bVar12) && (local_40[0] != (int *)0x0)) {
                  FMemory::Free();
                }
                uVar6 = FText::ToString(lVar2);
                FUN_140e79d10(param_1,param_2,uVar6,&local_60,param_3,param_4);
                if (local_60 != (int *)0x0) {
                  FMemory::Free();
                }
              }
              Z_Construct_UClass_ACharacterGunfire_Statics::NewProp_bSkipWallChecks_SetBit
                        (*(undefined8 *)(param_1 + 0x110));
              FUN_140e724b0(param_1 + 0x18,param_2,param_3,param_4);
            }
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140e8cf60 FUN_140e8cf60 body=172 status=ok
// SIG undefined FUN_140e8cf60(void)

void FUN_140e8cf60(void)

{
  undefined8 *puVar1;
  int iVar2;
  longlong *plVar3;
  
  iVar2 = DAT_146871250;
  plVar3 = DAT_146871248;
  if (-1 < DAT_146871254) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      plVar3 = plVar3 + 1;
    }
    DAT_146871250 = 0;
    FUN_140e7ebd0();
    return;
  }
  for (; iVar2 != 0; iVar2 = iVar2 + -1) {
    puVar1 = (undefined8 *)*plVar3;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    plVar3 = plVar3 + 1;
  }
  DAT_146871250 = 0;
  if (DAT_146871254 != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(&DAT_146871248,0);
  }
  FUN_140e7ebd0();
  return;
}



// FUNCTION 140e8d010 FUN_140e8d010 body=340 status=ok
// SIG undefined FUN_140e8d010(void)

void FUN_140e8d010(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = FUN_1413ffe00();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if ((longlong *)plVar1[0x55a] != (longlong *)0x0) {
        (**(code **)(*(longlong *)plVar1[0x55a] + 0x408))();
      }
      lVar3 = (**(code **)(*plVar1 + 0xa58))(plVar1);
      if (lVar3 != 0) {
        FUN_142378260(lVar3,DAT_146870f98);
      }
      if (plVar1[0x98] != 0) {
        FUN_142378260(plVar1[0x98],DAT_146870f98);
      }
    }
  }
  return;
}



// FUNCTION 140e8d170 FUN_140e8d170 body=189 status=ok
// SIG undefined FUN_140e8d170(void)

void FUN_140e8d170(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x218);
  if (lVar2 != 0) {
    if ((*(longlong *)(lVar2 + 0x2388) != 0) &&
       (plVar1 = *(longlong **)(*(longlong *)(lVar2 + 0x2388) + 0x2ad0), plVar1 != (longlong *)0x0))
    {
      (**(code **)(*plVar1 + 0x408))();
      lVar2 = *(longlong *)(param_1 + 0x218);
    }
    if (*(longlong *)(lVar2 + 0x4c0) != 0) {
      FUN_142378260(*(longlong *)(lVar2 + 0x4c0),DAT_146870f98);
      return;
    }
  }
  return;
}



// FUNCTION 140e8d230 FUN_140e8d230 body=3561 status=ok
// SIG undefined FUN_140e8d230(void)

void FUN_140e8d230(ulonglong param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  uint uVar13;
  int *piVar14;
  ulonglong *puVar15;
  longlong lVar16;
  int *piVar17;
  longlong lVar18;
  ulonglong *puVar19;
  int iVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  int iVar23;
  longlong lVar24;
  undefined8 *puVar25;
  float fVar26;
  ulonglong *local_res10;
  ulonglong local_res18;
  ulonglong *local_res20;
  longlong local_e8;
  undefined8 local_e0;
  longlong local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  int local_b8;
  int local_b4;
  ulonglong *local_b0;
  int local_a8;
  int local_a4;
  ulonglong *local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong *local_88;
  int local_80;
  undefined8 local_78;
  void *local_70;
  longlong local_68;
  int *local_60;
  longlong local_58;
  int *local_50;
  
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar18 = *(longlong *)(param_1 + 0x110);
  puVar15 = (ulonglong *)0x0;
  lVar16 = *(longlong *)(DAT_146b33f38 + 0x58);
  if (lVar18 == 0) {
    local_58 = 0;
  }
  else {
    local_58 = *(longlong *)(lVar18 + 0xc98);
  }
  local_c8 = 0;
  local_c0 = 0;
  if ((lVar18 == 0) || ((lVar16 != 0 && (cVar4 = FUN_140b7c000(lVar16), cVar4 != '\0')))) {
    if ((lVar16 == 0) || (cVar4 = FUN_140b7c000(lVar16), cVar4 == '\0')) goto LAB_140e8dfa4;
    local_98 = (ulonglong *)0x0;
    local_90 = 0;
    FUN_140b80aa0(lVar16,*(undefined8 *)(param_1 + 0x110),&local_98,0);
    uVar21 = (ulonglong)(int)local_90;
    local_res20 = local_98 + uVar21 * 4;
    if (local_98 != local_res20) {
      puVar15 = local_98 + 2;
      plVar9 = (longlong *)(param_1 + 0x100);
      do {
        uVar21 = 0;
        iVar5 = *(int *)(param_1 + 0x108);
        lVar18 = (longlong)iVar5;
        *(int *)(param_1 + 0x108) = iVar5 + 1;
        local_res10 = puVar15;
        if (*(int *)(param_1 + 0x10c) < iVar5 + 1) {
          TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar9,iVar5);
        }
        lVar16 = *plVar9;
        *(undefined8 *)(lVar16 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 8 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x10 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x18 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x20 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x28 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x30 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x38 + lVar18 * 0x48) = 0;
        *(undefined8 *)(lVar16 + 0x40 + lVar18 * 0x48) = 0;
        if ((iVar5 < 0) || (*(int *)(param_1 + 0x108) <= iVar5)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          *(int *)(*plVar9 + lVar18 * 0x48) = (int)local_res10[-2];
          puVar25 = (undefined8 *)*local_res10;
          local_res18 = (longlong)(int)local_res10[1] & 0x1fffffffffffffff;
          if (puVar25 + (int)local_res10[1] < puVar25) {
            local_res18 = 0;
          }
          if (local_res18 != 0) {
            do {
              iVar5 = *(int *)(*plVar9 + 0x10 + lVar18 * 0x48);
              lVar16 = *plVar9 + lVar18 * 0x48;
              uVar2 = *puVar25;
              *(int *)(lVar16 + 0x10) = iVar5 + 1;
              if (*(int *)(lVar16 + 0x14) < iVar5 + 1) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar16 + 8,iVar5);
              }
              uVar22 = local_c0;
              *(undefined8 *)(*(longlong *)(lVar16 + 8) + (longlong)iVar5 * 8) = uVar2;
              lVar16 = (longlong)(int)local_c0;
              iVar5 = (int)local_c0 + 1;
              local_c0 = CONCAT44(local_c0._4_4_,iVar5);
              if (local_c0._4_4_ < iVar5) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                          (&local_c8,uVar22 & 0xffffffff);
              }
              puVar25 = puVar25 + 1;
              uVar21 = uVar21 + 1;
              *(undefined8 *)(local_c8 + lVar16 * 8) = uVar2;
            } while (uVar21 != local_res18);
          }
        }
        puVar15 = local_res10 + 4;
      } while (local_res10 + 2 != local_res20);
      uVar21 = local_90 & 0xffffffff;
      local_res10 = puVar15;
    }
    puVar15 = local_98;
    if ((int)uVar21 != 0) {
      puVar19 = local_98 + 2;
      do {
        if (*puVar19 != 0) {
          FMemory::Free();
        }
        puVar19 = puVar19 + 4;
        uVar13 = (int)uVar21 - 1;
        uVar21 = (ulonglong)uVar13;
        puVar15 = local_98;
      } while (uVar13 != 0);
    }
  }
  else {
    iVar5 = FUN_140e7d930(param_1,0,0);
    local_b8 = iVar5;
    iVar6 = FUN_140e7da80(param_1,0,0);
    local_b4 = iVar6;
    iVar7 = FUN_140e7d930(param_1,1,1);
    local_a8 = FUN_140e7d930(param_1,0,1);
    local_a8 = iVar7 - local_a8;
    iVar7 = FUN_140e7da80(param_1,7,1);
    local_a4 = FUN_140e7da80(param_1,0,1);
    local_a4 = iVar7 - local_a4;
    if ((*(int *)(param_1 + 0xc0) != 0) && (iVar5 != *(int *)(param_1 + 0xc0))) {
      FUN_140e752a0(param_1);
      *(int *)(param_1 + 0xc0) = iVar5;
    }
    if ((*(int *)(param_1 + 0xc4) != 0) && (iVar6 != *(int *)(param_1 + 0xc4))) {
      FUN_140e756f0(param_1);
      *(int *)(param_1 + 0xc4) = iVar6;
    }
    if (iVar5 == *(int *)(param_1 + 0xf4)) {
      if (*(int *)(param_1 + 0x108) != 0) {
        lVar16 = *(longlong *)(param_1 + 0x100);
        lVar18 = lVar16 + (longlong)*(int *)(param_1 + 0x108) * 0x48;
        uVar21 = local_c0;
        for (; local_c0 = uVar21, lVar16 != lVar18; lVar16 = lVar16 + 0x48) {
          iVar5 = *(int *)(lVar16 + 0x10);
          if (iVar5 != 0) {
            local_c0._0_4_ = (int)uVar21;
            local_c0._4_4_ = (int)(uVar21 >> 0x20);
            bVar3 = local_c0._4_4_ < (int)local_c0 + iVar5;
            if (bVar3) {
              TArray<void_*,FDefaultAllocator>::ResizeTo(&local_c8);
            }
            _guard_xfg_dispatch_icall_nop
                      ((void *)(local_c8 + (longlong)(int)local_c0 * 8),*(void **)(lVar16 + 8),
                       (longlong)iVar5 << 3);
            local_c0 = CONCAT44(local_c0._4_4_,(int)local_c0 + iVar5);
          }
          uVar21 = local_c0;
        }
        goto LAB_140e8dfa4;
      }
    }
    else if (0 < *(int *)(param_1 + 0x108)) {
      lVar24 = *(longlong *)(param_1 + 0x100);
      lVar18 = lVar24 + (longlong)*(int *)(param_1 + 0x108) * 0x48;
      if (lVar24 != lVar18) {
        piVar17 = (int *)(lVar24 + 0x14);
        do {
          piVar17[-1] = 0;
          if (*piVar17 != 0) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(piVar17 + -3,0);
          }
          lVar24 = lVar24 + 0x48;
          piVar17 = piVar17 + 0x12;
        } while (lVar24 != lVar18);
      }
    }
    local_80 = *(int *)(lVar16 + 0x1018);
    lVar18 = (longlong)local_80;
    pvVar1 = *(void **)(lVar16 + 0x1010);
    local_b0 = (ulonglong *)0x0;
    local_88 = (ulonglong *)0x0;
    if (local_80 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_88,local_80,0);
      puVar15 = local_88;
      local_b0 = local_88;
      _guard_xfg_dispatch_icall_nop(local_88,pvVar1,lVar18 << 3);
    }
    local_60 = *(int **)(lVar16 + 0x1028);
    local_50 = local_60 + *(int *)(lVar16 + 0x1030);
    if (local_60 != local_50) {
      puVar19 = puVar15 + local_80;
      local_a0 = puVar19;
LAB_140e8d4d0:
      lVar18 = 0;
      iVar5 = *local_60;
      local_d8 = 0;
      uVar21 = 0;
      local_res20 = (ulonglong *)CONCAT44(local_res20._4_4_,iVar5);
      local_d0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      if (puVar15 != puVar19) {
        local_d0._0_4_ = 0;
        iVar6 = (int)local_d0;
        do {
          plVar9 = (longlong *)*puVar15;
          if (plVar9 != (longlong *)0x0) {
            lVar16 = FUN_1413f2810();
            if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar16 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar16 + 0x90) * 8) !=
                lVar16 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              cVar4 = (**(code **)(*plVar9 + 0x280))(plVar9,*(undefined8 *)(param_1 + 0x110));
              iVar5 = (int)local_res20;
              if ((cVar4 == '\0') || ((int)plVar9[9] != (int)local_res20)) goto LAB_140e8d717;
              plVar9 = (longlong *)UListView::OnItemSelectionChanged(plVar9);
              lVar24 = *plVar9;
              lVar16 = lVar24 + (longlong)(int)plVar9[1] * 0x28;
              for (; lVar24 != lVar16; lVar24 = lVar24 + 0x28) {
                plVar9 = (longlong *)FWeakObjectPtr::Get(lVar24);
                if (plVar9 == (longlong *)0x0) {
                  LOCK();
                  if (DAT_1464b56f4 == 0) {
                    DAT_1464b56f4 = 0;
                  }
                  UNLOCK();
                  if ((DAT_1464b56f4 != *(int *)(lVar24 + 8)) &&
                     (local_78 = 0, *(longlong *)(lVar24 + 0x10) != 0)) {
                    lVar18 = FUN_141796df0();
                    FWeakObjectPtr::operator=(lVar24,lVar18);
                    if ((lVar18 != 0) || (DAT_1469e7e10 == '\0')) {
                      LOCK();
                      if (DAT_1464b56f4 == 0) {
                        DAT_1464b56f4 = 0;
                      }
                      UNLOCK();
                      *(int *)(lVar24 + 8) = DAT_1464b56f4;
                    }
                    plVar9 = (longlong *)FWeakObjectPtr::Get(lVar24);
                    if (plVar9 != (longlong *)0x0) {
                      uVar21 = local_e0 & 0xffffffff;
                      lVar18 = local_d8;
                      iVar6 = (int)local_d0;
                      goto LAB_140e8d613;
                    }
                  }
                  uVar21 = local_e0 & 0xffffffff;
                  lVar18 = local_d8;
                  iVar6 = (int)local_d0;
                }
                else {
LAB_140e8d613:
                  lVar10 = FUN_14171bfe0();
                  if ((*(int *)(plVar9[2] + 0x90) < *(int *)(lVar10 + 0x90)) ||
                     (*(longlong *)
                       (*(longlong *)(plVar9[2] + 0x88) + (longlong)*(int *)(lVar10 + 0x90) * 8) !=
                      lVar10 + 0x88)) {
                    bVar3 = false;
                  }
                  else {
                    bVar3 = true;
                  }
                  if (bVar3) {
                    plVar11 = (longlong *)FUN_142dfdfe0();
                    plVar12 = plVar9;
                    do {
                      if (plVar12 == plVar11) {
                        lVar10 = plVar9[0x1f];
                        if (lVar10 == 0) {
                          (**(code **)(*plVar9 + 0x368))(plVar9);
                          lVar10 = plVar9[0x1f];
                          if (lVar10 == 0) break;
                        }
                        if (*(char *)(lVar10 + 0x25c) == '\0') {
                          iVar5 = iVar6 + 1;
                          local_d0 = CONCAT44(local_d0._4_4_,iVar5);
                          if (local_d0._4_4_ < iVar5) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (&local_d8,iVar6);
                            iVar5 = (int)local_d0;
                          }
                          *(longlong **)(local_d8 + (longlong)iVar6 * 8) = plVar9;
                          lVar18 = local_d8;
                          iVar6 = iVar5;
                        }
                        else {
                          iVar5 = (int)uVar21;
                          uVar13 = iVar5 + 1;
                          local_e0 = CONCAT44(local_e0._4_4_,uVar13);
                          if (local_e0._4_4_ < (int)uVar13) {
                            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                      (&local_e8,uVar21);
                            uVar13 = (uint)local_e0;
                          }
                          uVar21 = (ulonglong)uVar13;
                          *(longlong **)(local_e8 + (longlong)iVar5 * 8) = plVar9;
                          lVar18 = local_d8;
                        }
                        break;
                      }
                      plVar12 = (longlong *)plVar12[6];
                    } while (plVar12 != (longlong *)0x0);
                  }
                }
                puVar15 = local_b0;
              }
            }
            iVar5 = (int)local_res20;
          }
LAB_140e8d717:
          puVar15 = puVar15 + 1;
          local_b0 = puVar15;
        } while (puVar15 != local_a0);
        if ((0 < iVar6) || (0 < (int)(uint)local_e0)) {
          plVar9 = (longlong *)(param_1 + 0x100);
          piVar17 = (int *)*plVar9;
          uVar13 = *(uint *)(param_1 + 0x108);
          lVar16 = (longlong)(int)uVar13;
          for (piVar14 = piVar17; piVar14 != piVar17 + lVar16 * 0x12; piVar14 = piVar14 + 0x12) {
            if (*piVar14 == iVar5) {
              local_b0 = (ulonglong *)(((longlong)piVar14 - (longlong)piVar17) / 0x48);
              if ((int)local_b0 != -1) goto LAB_140e8d817;
              break;
            }
          }
          *(uint *)(param_1 + 0x108) = uVar13 + 1;
          if (*(int *)(param_1 + 0x10c) < (int)(uVar13 + 1)) {
            TArray<FSpriteRenderSection,FDefaultAllocator>::ResizeGrow(plVar9);
          }
          lVar24 = *plVar9;
          *(undefined8 *)(lVar24 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 8 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x10 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x18 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x20 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x28 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x30 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x38 + lVar16 * 0x48) = 0;
          *(undefined8 *)(lVar24 + 0x40 + lVar16 * 0x48) = 0;
          local_b0 = (ulonglong *)(ulonglong)uVar13;
          if (((int)uVar13 < 0) || (*(int *)(param_1 + 0x108) <= (int)uVar13)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            *(int *)(*plVar9 + lVar16 * 0x48) = (int)local_res20;
          }
LAB_140e8d817:
          uVar21 = local_d0;
          if (((int)local_b0 < 0) || (*(int *)(param_1 + 0x108) <= (int)local_b0)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            uVar22 = (ulonglong)(int)local_d0;
            local_res10 = (ulonglong *)((ulonglong)local_res10 & 0xffffffffffffff00);
            FUN_140e68530(lVar18,uVar22,param_1 & 0xff,&local_res10);
            iVar5 = (int)((uVar21 & 0xffffffff) / 3) * local_a8;
            if (iVar5 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = local_b8 % iVar5;
            }
            iVar5 = local_b8 - ((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f));
            local_res18 = CONCAT44(local_res18._4_4_,iVar5);
            lVar18 = local_d8;
            if (iVar5 < local_b8) {
              do {
                FUN_1415b61a0(iVar5);
                lVar16 = 3;
                do {
                  iVar5 = (int)uVar22;
                  if (iVar5 < 1) {
                    iVar6 = 0;
LAB_140e8d8f8:
                    if (iVar5 <= iVar6) goto LAB_140e8d8ca;
                    bVar3 = true;
                  }
                  else {
                    fVar26 = (float)FGenericPlatformMath::SRand();
                    iVar6 = iVar5 + -1;
                    if ((int)(fVar26 * (float)iVar5) <= iVar5 + -1) {
                      iVar6 = (int)(fVar26 * (float)iVar5);
                    }
                    if (-1 < iVar6) goto LAB_140e8d8f8;
LAB_140e8d8ca:
                    bVar3 = false;
                  }
                  if (bVar3) {
                    lVar24 = *(longlong *)(lVar18 + (longlong)iVar6 * 8);
                    if (lVar24 != 0) {
                      lVar10 = FUN_142dfdfe0();
                      do {
                        if (lVar24 == lVar10) {
                          iVar7 = (iVar5 - iVar6) + -1;
                          if (iVar7 != 0) {
                            _guard_xfg_dispatch_icall_nop
                                      ((void *)(lVar18 + (longlong)iVar6 * 8),
                                       (void *)(lVar18 + (longlong)(iVar6 + 1) * 8),
                                       (longlong)iVar7 << 3);
                          }
                          local_d0 = CONCAT44(local_d0._4_4_,iVar5 + -1);
                          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_d8);
                          uVar22 = local_d0 & 0xffffffff;
                          lVar18 = local_d8;
                          break;
                        }
                        lVar24 = *(longlong *)(lVar24 + 0x30);
                      } while (lVar24 != 0);
                    }
                  }
                  lVar16 = lVar16 + -1;
                } while (lVar16 != 0);
                iVar5 = (int)local_res18 + local_a8;
                local_res18 = CONCAT44(local_res18._4_4_,iVar5);
              } while (iVar5 < local_b8);
            }
            iVar5 = (uint)local_e0;
            uVar21 = (ulonglong)(int)(uint)local_e0;
            local_res18 = local_res18 & 0xffffffffffffff00;
            FUN_140e68530(local_e8,uVar21,param_1 & 0xff,&local_res18);
            iVar7 = local_a4;
            iVar6 = local_b4;
            if (iVar5 * local_a4 == 0) {
              uVar13 = 0;
            }
            else {
              uVar13 = local_b4 % (iVar5 * local_a4);
            }
            iVar5 = local_b4 - ((uVar13 ^ (int)uVar13 >> 0x1f) - ((int)uVar13 >> 0x1f));
            if (iVar5 < local_b4) {
              do {
                iVar23 = 0;
                FUN_1415b61a0(iVar5);
                iVar20 = (int)uVar21;
                if (iVar20 < 1) {
LAB_140e8d9e6:
                  if (iVar20 <= iVar23) goto LAB_140e8d9ef;
                  bVar3 = true;
                }
                else {
                  fVar26 = (float)FGenericPlatformMath::SRand();
                  iVar23 = iVar20 + -1;
                  if ((int)(fVar26 * (float)iVar20) <= iVar20 + -1) {
                    iVar23 = (int)(fVar26 * (float)iVar20);
                  }
                  if (-1 < iVar23) goto LAB_140e8d9e6;
LAB_140e8d9ef:
                  bVar3 = false;
                }
                if (bVar3) {
                  lVar18 = *(longlong *)(local_e8 + (longlong)iVar23 * 8);
                  pvVar1 = (void *)(local_e8 + (longlong)iVar23 * 8);
                  if (lVar18 != 0) {
                    lVar16 = FUN_142dfdfe0();
                    do {
                      if (lVar18 == lVar16) {
                        iVar20 = (uint)local_e0;
                        iVar8 = ((uint)local_e0 - iVar23) + -1;
                        if (iVar8 != 0) {
                          _guard_xfg_dispatch_icall_nop
                                    (pvVar1,(void *)(local_e8 + (longlong)(iVar23 + 1) * 8),
                                     (longlong)iVar8 << 3);
                        }
                        local_e0 = CONCAT44(local_e0._4_4_,iVar20 + -1);
                        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_e8);
                        break;
                      }
                      lVar18 = *(longlong *)(lVar18 + 0x30);
                    } while (lVar18 != 0);
                  }
                  uVar21 = local_e0 & 0xffffffff;
                }
                iVar5 = iVar5 + iVar7;
              } while (iVar5 < iVar6);
              uVar22 = local_d0 & 0xffffffff;
            }
            FUN_1415b61a0(local_b8);
            lVar18 = (longlong)(int)local_b0;
            local_68 = 3;
LAB_140e8da90:
            lVar16 = local_68;
            iVar5 = (int)uVar22;
            if (iVar5 < 1) {
              iVar6 = 0;
LAB_140e8db06:
              if ((int)local_d0 <= iVar6) goto LAB_140e8dabd;
              bVar3 = true;
              iVar5 = (int)local_d0;
            }
            else {
              fVar26 = (float)FGenericPlatformMath::SRand();
              iVar6 = iVar5 + -1;
              if ((int)(fVar26 * (float)iVar5) <= iVar5 + -1) {
                iVar6 = (int)(fVar26 * (float)iVar5);
              }
              if (-1 < iVar6) goto LAB_140e8db06;
LAB_140e8dabd:
              bVar3 = false;
              iVar5 = (int)local_d0;
            }
            lVar24 = local_d8;
            if (bVar3) {
              plVar9 = *(longlong **)(local_d8 + (longlong)iVar6 * 8);
              local_70 = (void *)(local_d8 + (longlong)iVar6 * 8);
              if (plVar9 != (longlong *)0x0) {
                plVar11 = (longlong *)FUN_142dfdfe0();
                plVar12 = plVar9;
                do {
                  if (plVar12 == plVar11) {
                    iVar7 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x10 + lVar18 * 0x48);
                    lVar16 = *(longlong *)(param_1 + 0x100) + lVar18 * 0x48;
                    *(int *)(lVar16 + 0x10) = iVar7 + 1;
                    if (*(int *)(lVar16 + 0x14) < iVar7 + 1) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (lVar16 + 8,iVar7);
                    }
                    uVar21 = local_c0;
                    *(longlong **)(*(longlong *)(lVar16 + 8) + (longlong)iVar7 * 8) = plVar9;
                    lVar16 = (longlong)(int)local_c0;
                    iVar7 = (int)local_c0 + 1;
                    local_c0 = CONCAT44(local_c0._4_4_,iVar7);
                    if (local_c0._4_4_ < iVar7) {
                      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                                (&local_c8,uVar21 & 0xffffffff);
                    }
                    *(longlong **)(local_c8 + lVar16 * 8) = plVar9;
                    plVar11 = (longlong *)FUN_142dfdfe0();
                    plVar12 = plVar9;
                    goto LAB_140e8db75;
                  }
                  plVar12 = (longlong *)plVar12[6];
                } while (plVar12 != (longlong *)0x0);
              }
              goto LAB_140e8dbb9;
            }
            goto LAB_140e8dbeb;
          }
        }
        goto LAB_140e8dd70;
      }
      goto LAB_140e8dd9c;
    }
LAB_140e8ddb2:
    *(int *)(param_1 + 0xf4) = local_b8;
    *(int *)(param_1 + 0xf8) = local_b4;
  }
  if (puVar15 != (ulonglong *)0x0) {
    FMemory::Free(puVar15);
  }
LAB_140e8dfa4:
  if ((local_58 != 0) && (0 < (int)local_c0)) {
    FUN_142dd7d40(local_58,&local_c8,1);
    FUN_140e74df0(param_1);
  }
  if (local_c8 != 0) {
    FMemory::Free();
  }
  return;
  while (plVar12 = (longlong *)plVar12[6], plVar12 != (longlong *)0x0) {
LAB_140e8db75:
    if (plVar12 == plVar11) goto LAB_140e8db86;
  }
  plVar9 = (longlong *)0x0;
LAB_140e8db86:
  lVar16 = plVar9[0x1f];
  if (lVar16 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar16 = plVar9[0x1f];
  }
  FUN_140e79480(param_1,(ulonglong)local_res20 & 0xffffffff,lVar16);
  lVar16 = local_68;
LAB_140e8dbb9:
  iVar7 = (iVar5 - iVar6) + -1;
  if (iVar7 != 0) {
    _guard_xfg_dispatch_icall_nop
              (local_70,(void *)(lVar24 + (longlong)(iVar6 + 1) * 8),(longlong)iVar7 << 3);
  }
  local_d0 = CONCAT44(local_d0._4_4_,iVar5 + -1);
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_d8);
LAB_140e8dbeb:
  uVar22 = local_d0 & 0xffffffff;
  local_68 = lVar16 + -1;
  if (local_68 == 0) goto code_r0x000140e8dbfd;
  goto LAB_140e8da90;
code_r0x000140e8dbfd:
  FUN_1415b61a0(local_b4);
  iVar5 = (uint)local_e0;
  if ((int)(uint)local_e0 < 1) {
    iVar6 = 0;
LAB_140e8dc76:
    if (iVar5 <= iVar6) goto LAB_140e8dc34;
    bVar3 = true;
  }
  else {
    fVar26 = (float)FGenericPlatformMath::SRand();
    iVar6 = iVar5 + -1;
    if ((int)(fVar26 * (float)iVar5) <= iVar5 + -1) {
      iVar6 = (int)(fVar26 * (float)iVar5);
    }
    if (-1 < iVar6) goto LAB_140e8dc76;
LAB_140e8dc34:
    bVar3 = false;
  }
  if (!bVar3) goto LAB_140e8dd70;
  plVar9 = *(longlong **)(local_e8 + (longlong)iVar6 * 8);
  pvVar1 = (void *)(local_e8 + (longlong)iVar6 * 8);
  if (plVar9 != (longlong *)0x0) {
    plVar11 = (longlong *)FUN_142dfdfe0();
    plVar12 = plVar9;
    do {
      if (plVar12 == plVar11) {
        iVar5 = *(int *)(*(longlong *)(param_1 + 0x100) + 0x10 + (longlong)(int)local_b0 * 0x48);
        lVar18 = *(longlong *)(param_1 + 0x100) + (longlong)(int)local_b0 * 0x48;
        *(int *)(lVar18 + 0x10) = iVar5 + 1;
        if (*(int *)(lVar18 + 0x14) < iVar5 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar18 + 8,iVar5);
        }
        uVar21 = local_c0;
        *(longlong **)(*(longlong *)(lVar18 + 8) + (longlong)iVar5 * 8) = plVar9;
        lVar18 = (longlong)(int)local_c0;
        iVar5 = (int)local_c0 + 1;
        local_c0 = CONCAT44(local_c0._4_4_,iVar5);
        if (local_c0._4_4_ < iVar5) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                    (&local_c8,uVar21 & 0xffffffff);
        }
        *(longlong **)(local_c8 + lVar18 * 8) = plVar9;
        plVar11 = (longlong *)FUN_142dfdfe0();
        plVar12 = plVar9;
        goto LAB_140e8dcf0;
      }
      plVar12 = (longlong *)plVar12[6];
    } while (plVar12 != (longlong *)0x0);
  }
  goto LAB_140e8dd30;
  while (plVar12 = (longlong *)plVar12[6], plVar12 != (longlong *)0x0) {
LAB_140e8dcf0:
    if (plVar12 == plVar11) goto LAB_140e8dd00;
  }
  plVar9 = (longlong *)0x0;
LAB_140e8dd00:
  lVar18 = plVar9[0x1f];
  if (lVar18 == 0) {
    (**(code **)(*plVar9 + 0x368))(plVar9);
    lVar18 = plVar9[0x1f];
  }
  FUN_140e79480(param_1,(ulonglong)local_res20 & 0xffffffff,lVar18);
  iVar5 = (uint)local_e0;
LAB_140e8dd30:
  iVar7 = (iVar5 - iVar6) + -1;
  if (iVar7 != 0) {
    _guard_xfg_dispatch_icall_nop
              (pvVar1,(void *)(local_e8 + (longlong)(iVar6 + 1) * 8),(longlong)iVar7 << 3);
  }
  local_e0 = CONCAT44(local_e0._4_4_,iVar5 + -1);
  TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_e8);
LAB_140e8dd70:
  puVar19 = local_a0;
  if (local_e8 != 0) {
    FMemory::Free();
  }
  if (local_d8 != 0) {
    FMemory::Free();
  }
  local_b0 = local_88;
  puVar15 = local_88;
LAB_140e8dd9c:
  local_60 = local_60 + 1;
  if (local_60 == local_50) goto LAB_140e8ddb2;
  goto LAB_140e8d4d0;
}



// FUNCTION 140e8e020 FUN_140e8e020 body=1114 status=ok
// SIG undefined FUN_140e8e020(void)

void FUN_140e8e020(longlong param_1)

{
  int iVar1;
  int *piVar2;
  wchar_t *pwVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  wchar_t *pwVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  undefined4 *puVar10;
  int *piVar11;
  wchar_t *pwVar12;
  longlong *plVar13;
  bool bVar14;
  undefined8 local_res8;
  ulonglong local_res10;
  undefined8 local_38;
  ulonglong uStack_30;
  
  plVar13 = *(longlong **)(param_1 + 0x1c8);
  uVar5 = AGFreezeCharacterCue::GetPrivateStaticClass();
  lVar6 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar5);
  pwVar12 = (wchar_t *)0x0;
  if (lVar6 != 0) {
    FUN_140a7f0c0(lVar6,*(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xe0),
                  *(undefined8 *)(*(longlong *)(param_1 + 0x178) + 0xe8),
                  *(undefined4 *)(lVar6 + 0x680));
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140e88990;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnHealthTypeNormal",L"::");
    pwVar9 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(lVar6 + 0x898,param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140e88930;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnHealthTypeLow",L"::");
    pwVar9 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(lVar6 + 0x8a8,param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140e88930;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnHealthTypeVeryLow",L"::");
    pwVar9 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(lVar6 + 0x8b8,param_1,&local_38,local_res8);
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnTakeAnyDamageInternal",L"::");
    pwVar9 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_res10,pwVar9 + 2,1);
    plVar13 = (longlong *)(lVar6 + 0x200);
    FWeakObjectPtr::operator=(&local_38,0);
    uStack_30 = 0;
    FWeakObjectPtr::operator=(&local_38,param_1);
    uStack_30 = local_res10;
    local_res8 = 0;
    if ((local_res10 != 0) && (lVar8 = FWeakObjectPtr::Get(&local_38), lVar8 != 0)) {
      UObject::FindFunction(lVar8,uStack_30);
    }
    piVar2 = (int *)*plVar13;
    iVar1 = *(int *)(lVar6 + 0x208);
    for (piVar11 = piVar2; piVar11 != piVar2 + (longlong)iVar1 * 4; piVar11 = piVar11 + 4) {
      if ((((*piVar11 == (int)local_38) &&
           (local_38._4_4_ = (int)((ulonglong)local_38 >> 0x20),
           bVar14 = piVar11[1] == local_38._4_4_, bVar14)) ||
          ((cVar4 = FWeakObjectPtr::IsValid(piVar11), cVar4 == '\0' &&
           (cVar4 = FWeakObjectPtr::IsValid(&local_38), cVar4 == '\0')))) &&
         (*(ulonglong *)(piVar11 + 2) == uStack_30)) {
        if ((int)((longlong)piVar11 - (longlong)piVar2 >> 4) != -1) goto LAB_140e8e331;
        break;
      }
    }
    iVar1 = *(int *)(lVar6 + 0x208);
    *(int *)(lVar6 + 0x208) = iVar1 + 1;
    if (*(int *)(lVar6 + 0x20c) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13,iVar1);
    }
    puVar10 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar13);
    *puVar10 = (int)local_38;
    puVar10[1] = local_38._4_4_;
    *(ulonglong *)(puVar10 + 2) = uStack_30;
LAB_140e8e331:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar13);
  }
  plVar13 = *(longlong **)(param_1 + 0x1c8);
  uVar5 = FUN_142e1a5a0();
  lVar6 = (**(code **)(*plVar13 + 0x628))(plVar13,uVar5);
  if ((lVar6 != 0) &&
     (lVar6 = FUN_142d62010(lVar6,*(undefined8 *)
                                   (*(longlong *)(*(longlong *)(param_1 + 0x178) + 0xe8) + 0x30)),
     lVar6 != 0)) {
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = FUN_140e89ab0;
    pwVar7 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnShieldDepleted",L"::");
    pwVar9 = pwVar12;
    while (pwVar3 = pwVar7, pwVar3 != (wchar_t *)0x0) {
      pwVar7 = _guard_xfg_dispatch_icall_nop(pwVar3 + 1,L"::");
      pwVar9 = pwVar3;
    }
    FName::FName(&local_res8,pwVar9 + 2,1);
    FUN_1407260e0(lVar6 + 8,param_1,&local_38,local_res8);
    uStack_30 = uStack_30 & 0xffffffff00000000;
    local_38 = thunk_FUN_1414b7080;
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UProjectedShield::OnShieldNotDepletedInternal",L"::");
    while (pwVar7 = pwVar9, pwVar7 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
      pwVar12 = pwVar7;
    }
    FName::FName(&local_res8,pwVar12 + 2,1);
    FUN_1407260e0(lVar6 + 0x18,param_1,&local_38,local_res8);
  }
  return;
}



// FUNCTION 140e8e480 FUN_140e8e480 body=263 status=ok
// SIG undefined FUN_140e8e480(void)

void FUN_140e8e480(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  *(undefined8 *)(param_1 + 0xe0) = param_5;
  *(undefined8 *)(param_1 + 200) = param_2;
  *(undefined8 *)(param_1 + 0xd0) = param_3;
  *(undefined8 *)(param_1 + 0xd8) = param_4;
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    lVar3 = (longlong)*(int *)(param_1 + 0xb8) * 0x40 + lVar2;
    lVar1 = local_28;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x40) {
      local_28 = *(longlong *)(lVar2 + 0x10);
      if (local_28 != 0) {
        if (*(longlong *)(param_1 + 200) != 0) {
          local_20 = *(undefined8 *)(lVar2 + 0x20);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_1 + 200),&local_28);
          lVar1 = local_28;
        }
        local_28 = lVar1;
        lVar1 = local_28;
        if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) != '\x03') {
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(lVar2 + 0x10);
        }
      }
      local_28 = lVar1;
      if (*(longlong *)(lVar2 + 0x28) != 0) {
        if (*(longlong *)(param_1 + 0xd8) != 0) {
          local_10 = *(undefined8 *)(lVar2 + 0x20);
          local_18 = *(longlong *)(lVar2 + 0x28);
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (*(longlong *)(param_1 + 0xd8),&local_18);
        }
        if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x128) != '\x03') {
          *(undefined8 *)(lVar2 + 0x38) = *(undefined8 *)(lVar2 + 0x28);
        }
      }
      lVar1 = local_28;
    }
  }
  return;
}


