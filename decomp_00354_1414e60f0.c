// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1414e60f0 FUN_1414e60f0 body=55 status=ok
// SIG undefined FUN_1414e60f0(void)

void FUN_1414e60f0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2248 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2248 = GetStaticEnum(FUN_1414e6ed0,uVar1,L"EVendingMachineInteractionMode");
  }
  return;
}



// FUNCTION 1414e6130 FUN_1414e6130 body=55 status=ok
// SIG undefined FUN_1414e6130(void)

void FUN_1414e6130(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2250 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2250 = GetStaticEnum(FUN_1414e6f00,uVar1,L"EVendingMachineScrollDirection");
  }
  return;
}



// FUNCTION 1414e6170 FUN_1414e6170 body=55 status=ok
// SIG undefined FUN_1414e6170(void)

void FUN_1414e6170(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2280 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2280 = GetStaticEnum(FUN_1414e6f30,uVar1,L"EVendingMachineTilesMode");
  }
  return;
}



// FUNCTION 1414e61b0 FUN_1414e61b0 body=55 status=ok
// SIG undefined FUN_1414e61b0(void)

void FUN_1414e61b0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2270 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2270 = GetStaticEnum(FUN_1414e6f60,uVar1,L"EVendingMachineTrayTileType");
  }
  return;
}



// FUNCTION 1414e61f0 FUN_1414e61f0 body=55 status=ok
// SIG undefined FUN_1414e61f0(void)

void FUN_1414e61f0(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2260 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2260 = GetStaticEnum(FUN_1414e6f90,uVar1,L"EVendingMachineType");
  }
  return;
}



// FUNCTION 1414e6230 Empty body=406 status=ok
// SIG undefined Empty(void)

void TSparseArray<TSetElement<TTuple<FMovieSceneSequenceID,FMovieSceneSequenceHierarchyNode>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::Empty(longlong *param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint *puVar7;
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
  
  iVar2 = (int)param_1[5];
  puVar1 = (uint *)(param_1 + 2);
  uStack_54 = 1;
  local_58 = 0;
  iStack_44 = 0;
  iStack_40 = 0;
  if (iVar2 != 0) {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = puVar1;
    }
    uVar4 = *puVar7;
    iStack_40 = 0;
    local_58 = 0;
    while (uVar4 == 0) {
      lVar5 = (longlong)local_58;
      iStack_40 = iStack_40 + 0x20;
      iVar6 = local_58 + 1;
      bVar3 = (int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
      local_58 = iVar6;
      if (bVar3) goto LAB_1414e6301;
      uVar4 = puVar7[lVar5 + 1];
    }
    uStack_54 = -uVar4 & uVar4;
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
    iStack_44 = (iStack_40 - iVar6) + 0x1f;
    if (iVar2 < iStack_44) {
LAB_1414e6301:
      iStack_44 = iVar2;
    }
  }
  local_30 = local_58;
  uStack_2c = uStack_54;
  local_20 = 0xffffffff;
  iStack_1c = iStack_44;
  iStack_18 = iStack_40;
  puStack_28 = puVar1;
  if (iStack_44 < iVar2) {
    do {
      if (*(longlong *)(*param_1 + 0x10 + (longlong)iStack_1c * 0x28) != 0) {
        FMemory::Free();
      }
      local_20 = local_20 & ~uStack_2c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
    } while (iStack_1c < (int)puStack_28[6]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<40,8>_>,FDefaultAllocator>::ResizeTo
              (param_1,param_2);
  }
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  uVar4 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)((longlong)param_1 + 0x2c) != uVar4) {
    *(uint *)((longlong)param_1 + 0x2c) = uVar4;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(puVar1,0);
  }
  return;
}



// FUNCTION 1414e63d0 FUN_1414e63d0 body=6 status=ok
// SIG undefined FUN_1414e63d0(void)

undefined8 FUN_1414e63d0(void)

{
  return 0x3bc48750;
}



// FUNCTION 1414e63e0 FUN_1414e63e0 body=6 status=ok
// SIG undefined FUN_1414e63e0(void)

undefined8 FUN_1414e63e0(void)

{
  return 0x1d364814;
}



// FUNCTION 1414e63f0 FUN_1414e63f0 body=6 status=ok
// SIG undefined FUN_1414e63f0(void)

undefined8 FUN_1414e63f0(void)

{
  return 0x7aa12508;
}



// FUNCTION 1414e6400 FUN_1414e6400 body=6 status=ok
// SIG undefined FUN_1414e6400(void)

undefined8 FUN_1414e6400(void)

{
  return 0xb201fcb;
}



// FUNCTION 1414e6410 FUN_1414e6410 body=6 status=ok
// SIG undefined FUN_1414e6410(void)

undefined8 FUN_1414e6410(void)

{
  return 0xd13a0598;
}



// FUNCTION 1414e6420 FUN_1414e6420 body=6 status=ok
// SIG undefined FUN_1414e6420(void)

undefined8 FUN_1414e6420(void)

{
  return 0x51f363d;
}



// FUNCTION 1414e6430 FUN_1414e6430 body=6 status=ok
// SIG undefined FUN_1414e6430(void)

undefined8 FUN_1414e6430(void)

{
  return 0x7444b7fc;
}



// FUNCTION 1414e6440 FUN_1414e6440 body=6 status=ok
// SIG undefined FUN_1414e6440(void)

undefined8 FUN_1414e6440(void)

{
  return 0x6c847947;
}



// FUNCTION 1414e6450 FUN_1414e6450 body=6 status=ok
// SIG undefined FUN_1414e6450(void)

undefined8 FUN_1414e6450(void)

{
  return 0xc2f3b0a2;
}



// FUNCTION 1414e6460 FUN_1414e6460 body=6 status=ok
// SIG undefined FUN_1414e6460(void)

undefined8 FUN_1414e6460(void)

{
  return 0xc48443e8;
}



// FUNCTION 1414e6470 FUN_1414e6470 body=6 status=ok
// SIG undefined FUN_1414e6470(void)

undefined8 FUN_1414e6470(void)

{
  return 0x1bda8c16;
}



// FUNCTION 1414e6480 FUN_1414e6480 body=65 status=ok
// SIG undefined FUN_1414e6480(void)

void FUN_1414e6480(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2388);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 1414e64d0 FUN_1414e64d0 body=65 status=ok
// SIG undefined FUN_1414e64d0(void)

void FUN_1414e64d0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a26f8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 1414e6520 FUN_1414e6520 body=57 status=ok
// SIG undefined FUN_1414e6520(void)

void FUN_1414e6520(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2700);
                    /* WARNING: Could not recover jumptable at 0x0001414e6556. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414e6560 FUN_1414e6560 body=65 status=ok
// SIG undefined FUN_1414e6560(void)

void FUN_1414e6560(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a23b0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 1414e65b0 FUN_1414e65b0 body=65 status=ok
// SIG undefined FUN_1414e65b0(void)

void FUN_1414e65b0(longlong *param_1,undefined1 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined1 local_18 [8];
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18[0] = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2718);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_18);
  return;
}



// FUNCTION 1414e6600 FUN_1414e6600 body=57 status=ok
// SIG undefined FUN_1414e6600(void)

void FUN_1414e6600(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a23b8);
                    /* WARNING: Could not recover jumptable at 0x0001414e6636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414e6640 FUN_1414e6640 body=57 status=ok
// SIG undefined FUN_1414e6640(void)

void FUN_1414e6640(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2720);
                    /* WARNING: Could not recover jumptable at 0x0001414e6676. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414e6680 FUN_1414e6680 body=61 status=ok
// SIG undefined FUN_1414e6680(void)

void FUN_1414e6680(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a23c0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414e66c0 FUN_1414e66c0 body=61 status=ok
// SIG undefined FUN_1414e66c0(void)

void FUN_1414e66c0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2728);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 1414e6740 FUN_1414e6740 body=57 status=ok
// SIG undefined FUN_1414e6740(void)

void FUN_1414e6740(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2730);
                    /* WARNING: Could not recover jumptable at 0x0001414e6776. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414e6780 FUN_1414e6780 body=57 status=ok
// SIG undefined FUN_1414e6780(void)

void FUN_1414e6780(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2738);
                    /* WARNING: Could not recover jumptable at 0x0001414e67b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414e67c0 thunk_FUN_142f38260 body=5 status=ok
// SIG undefined thunk_FUN_142f38260(void)

void thunk_FUN_142f38260(void)

{
  FUN_142f38260();
  return;
}



// FUNCTION 1414e67d0 FUN_1414e67d0 body=34 status=ok
// SIG undefined FUN_1414e67d0(void)

void FUN_1414e67d0(void)

{
  undefined8 uVar1;
  
  uVar1 = UFocusButtonWidget::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_OnPlayerEnteredItemOfTheDayArea_144c15610,3);
  return;
}



// FUNCTION 1414e6800 FUN_1414e6800 body=34 status=ok
// SIG undefined FUN_1414e6800(void)

void FUN_1414e6800(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e47c0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCurrentSocketTransform_144c168e0,7);
  return;
}



// FUNCTION 1414e6830 FUN_1414e6830 body=34 status=ok
// SIG undefined FUN_1414e6830(void)

void FUN_1414e6830(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e48b0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnFeaturedItemClicked_144c15f98,2);
  return;
}



// FUNCTION 1414e6860 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneParticleSectionTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2760 == 0) {
    uVar1 = FUN_1414e63d0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2760 = GetStaticStruct(FUN_1414e6ff0,uVar2,L"ExtraWadingData",0xb8,uVar1);
  }
  return;
}



// FUNCTION 1414e68c0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2790 == 0) {
    uVar1 = FUN_1414e63e0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2790 = GetStaticStruct(FUN_1414e7020,uVar2,L"TrailVectorParam",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414e6920 FUN_1414e6920 body=82 status=ok
// SIG undefined FUN_1414e6920(void)

void FUN_1414e6920(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2780 == 0) {
    uVar1 = FUN_1414e63f0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2780 = GetStaticStruct(FUN_1414e7050,uVar2,L"VehicleTrailData",0x50,uVar1);
  }
  return;
}



// FUNCTION 1414e6980 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2770 == 0) {
    uVar1 = FUN_1414e6400();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2770 =
         GetStaticStruct(FUN_1414e7080,uVar2,L"VehicleTrailParticleSystemData",0x18,uVar1);
  }
  return;
}



// FUNCTION 1414e69e0 FUN_1414e69e0 body=82 status=ok
// SIG undefined FUN_1414e69e0(void)

void FUN_1414e69e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a28c8 == 0) {
    uVar1 = FUN_1414e6410();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a28c8 =
         GetStaticStruct(FUN_1414e70b0,uVar2,L"VendingMachineInteractSequence",0x90,uVar1);
  }
  return;
}



// FUNCTION 1414e6a40 FUN_1414e6a40 body=82 status=ok
// SIG undefined FUN_1414e6a40(void)

void FUN_1414e6a40(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a28f8 == 0) {
    uVar1 = FUN_1414e6420();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a28f8 = GetStaticStruct(FUN_1414e70e0,uVar2,L"VendingMachineItemRarityData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1414e6aa0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a28e8 == 0) {
    uVar1 = FUN_1414e6430();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a28e8 =
         GetStaticStruct(FUN_1414e7110,uVar2,L"VendingMachineLastSelectionData",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414e6b00 FUN_1414e6b00 body=82 status=ok
// SIG undefined FUN_1414e6b00(void)

void FUN_1414e6b00(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2860 == 0) {
    uVar1 = FUN_1414e6440();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2860 = GetStaticStruct(FUN_1414e7140,uVar2,L"VendingMachineMenuFilter",0x20,uVar1);
  }
  return;
}



// FUNCTION 1414e6b60 FUN_1414e6b60 body=82 status=ok
// SIG undefined FUN_1414e6b60(void)

void FUN_1414e6b60(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2918 == 0) {
    uVar1 = FUN_1414e6450();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2918 = GetStaticStruct(FUN_1414e7170,uVar2,L"VendingMachinePhysicalShelf",0x30,uVar1);
  }
  return;
}



// FUNCTION 1414e6bc0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a28d8 == 0) {
    uVar1 = FUN_1414e6460();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a28d8 =
         GetStaticStruct(FUN_1414e71a0,uVar2,L"VendingMachineSequenceTimedEvent",0x10,uVar1);
  }
  return;
}



// FUNCTION 1414e6c20 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2908 == 0) {
    uVar1 = FUN_1414e6470();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2908 = GetStaticStruct(FUN_1414e71d0,uVar2,L"VendingMachineTrayTile",0x40,uVar1);
  }
  return;
}



// FUNCTION 1414e6c80 FUN_1414e6c80 body=55 status=ok
// SIG undefined FUN_1414e6c80(void)

void FUN_1414e6c80(void)

{
  undefined8 uVar1;
  
  if (DAT_1468a2278 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2278 = GetStaticEnum(FUN_1414e6fc0,uVar1,L"VendingMachineDisplayMode");
  }
  return;
}



// FUNCTION 1414e6cc0 FUN_1414e6cc0 body=47 status=ok
// SIG undefined FUN_1414e6cc0(void)

longlong FUN_1414e6cc0(void)

{
  if (DAT_1468a2740 == 0) {
    FUN_141786440(&DAT_1468a2740,&PTR_FUN_144c11390);
  }
  return DAT_1468a2740;
}



// FUNCTION 1414e6cf0 FUN_1414e6cf0 body=47 status=ok
// SIG undefined FUN_1414e6cf0(void)

longlong FUN_1414e6cf0(void)

{
  if (DAT_1468a27b8 == 0) {
    FUN_141786440(&DAT_1468a27b8,&PTR_FUN_144c0e250);
  }
  return DAT_1468a27b8;
}



// FUNCTION 1414e6d20 FUN_1414e6d20 body=47 status=ok
// SIG undefined FUN_1414e6d20(void)

longlong FUN_1414e6d20(void)

{
  if (DAT_1468a2750 == 0) {
    FUN_141786440(&DAT_1468a2750,&PTR_FUN_144c12a70);
  }
  return DAT_1468a2750;
}



// FUNCTION 1414e6d50 FUN_1414e6d50 body=47 status=ok
// SIG undefined FUN_1414e6d50(void)

longlong FUN_1414e6d50(void)

{
  if (DAT_1468a27a0 == 0) {
    FUN_141786440(&DAT_1468a27a0,&PTR_FUN_144c11ce0);
  }
  return DAT_1468a27a0;
}



// FUNCTION 1414e6d80 FUN_1414e6d80 body=47 status=ok
// SIG undefined FUN_1414e6d80(void)

longlong FUN_1414e6d80(void)

{
  if (DAT_1468a2870 == 0) {
    FUN_141786440(&DAT_1468a2870,&PTR_FUN_144c143f0);
  }
  return DAT_1468a2870;
}



// FUNCTION 1414e6db0 FUN_1414e6db0 body=47 status=ok
// SIG undefined FUN_1414e6db0(void)

longlong FUN_1414e6db0(void)

{
  if (DAT_1468a27c8 == 0) {
    FUN_141786440(&DAT_1468a27c8,&PTR_FUN_144c0e940);
  }
  return DAT_1468a27c8;
}



// FUNCTION 1414e6de0 FUN_1414e6de0 body=47 status=ok
// SIG undefined FUN_1414e6de0(void)

longlong FUN_1414e6de0(void)

{
  if (DAT_1468a2880 == 0) {
    FUN_141786a30(&DAT_1468a2880,&PTR_Z_Construct_UPackage__Script_MechWarrior_146484f60);
  }
  return DAT_1468a2880;
}



// FUNCTION 1414e6e10 FUN_1414e6e10 body=47 status=ok
// SIG undefined FUN_1414e6e10(void)

longlong FUN_1414e6e10(void)

{
  if (DAT_1468a2890 == 0) {
    FUN_141786a30(&DAT_1468a2890,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485120);
  }
  return DAT_1468a2890;
}



// FUNCTION 1414e6e40 FUN_1414e6e40 body=47 status=ok
// SIG undefined FUN_1414e6e40(void)

longlong FUN_1414e6e40(void)

{
  if (DAT_1468a2888 == 0) {
    FUN_141786a30(&DAT_1468a2888,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485020);
  }
  return DAT_1468a2888;
}



// FUNCTION 1414e6e70 FUN_1414e6e70 body=47 status=ok
// SIG undefined FUN_1414e6e70(void)

longlong FUN_1414e6e70(void)

{
  if (DAT_1468a28b0 == 0) {
    FUN_1417866a0(&DAT_1468a28b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146487830);
  }
  return DAT_1468a28b0;
}



// FUNCTION 1414e6ea0 FUN_1414e6ea0 body=47 status=ok
// SIG undefined FUN_1414e6ea0(void)

longlong FUN_1414e6ea0(void)

{
  if (DAT_1468a28b8 == 0) {
    FUN_1417866a0(&DAT_1468a28b8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146487880);
  }
  return DAT_1468a28b8;
}



// FUNCTION 1414e6ed0 FUN_1414e6ed0 body=47 status=ok
// SIG undefined FUN_1414e6ed0(void)

longlong FUN_1414e6ed0(void)

{
  if (DAT_1468a28a0 == 0) {
    FUN_1417866a0(&DAT_1468a28a0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146487790);
  }
  return DAT_1468a28a0;
}



// FUNCTION 1414e6f00 FUN_1414e6f00 body=47 status=ok
// SIG undefined FUN_1414e6f00(void)

longlong FUN_1414e6f00(void)

{
  if (DAT_1468a28a8 == 0) {
    FUN_1417866a0(&DAT_1468a28a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464877e0);
  }
  return DAT_1468a28a8;
}



// FUNCTION 1414e6f30 FUN_1414e6f30 body=47 status=ok
// SIG undefined FUN_1414e6f30(void)

longlong FUN_1414e6f30(void)

{
  if (DAT_1468a2898 == 0) {
    FUN_1417866a0(&DAT_1468a2898,&PTR_Z_Construct_UPackage__Script_MechWarrior_146487740);
  }
  return DAT_1468a2898;
}



// FUNCTION 1414e6f60 FUN_1414e6f60 body=47 status=ok
// SIG undefined FUN_1414e6f60(void)

longlong FUN_1414e6f60(void)

{
  if (DAT_1468a28c0 == 0) {
    FUN_1417866a0(&DAT_1468a28c0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464878d0);
  }
  return DAT_1468a28c0;
}



// FUNCTION 1414e6f90 FUN_1414e6f90 body=47 status=ok
// SIG undefined FUN_1414e6f90(void)

longlong FUN_1414e6f90(void)

{
  if (DAT_1468a27b0 == 0) {
    FUN_1417866a0(&DAT_1468a27b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464876a0);
  }
  return DAT_1468a27b0;
}



// FUNCTION 1414e6fc0 FUN_1414e6fc0 body=47 status=ok
// SIG undefined FUN_1414e6fc0(void)

longlong FUN_1414e6fc0(void)

{
  if (DAT_1468a2830 == 0) {
    FUN_1417866a0(&DAT_1468a2830,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464876f0);
  }
  return DAT_1468a2830;
}



// FUNCTION 1414e6ff0 FUN_1414e6ff0 body=47 status=ok
// SIG undefined FUN_1414e6ff0(void)

longlong FUN_1414e6ff0(void)

{
  if (DAT_1468a2768 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2768,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483530);
  }
  return DAT_1468a2768;
}



// FUNCTION 1414e7020 FUN_1414e7020 body=47 status=ok
// SIG undefined FUN_1414e7020(void)

longlong FUN_1414e7020(void)

{
  if (DAT_1468a2798 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2798,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483920);
  }
  return DAT_1468a2798;
}



// FUNCTION 1414e7050 FUN_1414e7050 body=47 status=ok
// SIG undefined FUN_1414e7050(void)

longlong FUN_1414e7050(void)

{
  if (DAT_1468a2788 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2788,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483860);
  }
  return DAT_1468a2788;
}



// FUNCTION 1414e7080 FUN_1414e7080 body=47 status=ok
// SIG undefined FUN_1414e7080(void)

longlong FUN_1414e7080(void)

{
  if (DAT_1468a2778 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2778,&PTR_Z_Construct_UPackage__Script_MechWarrior_146483630);
  }
  return DAT_1468a2778;
}



// FUNCTION 1414e70b0 FUN_1414e70b0 body=47 status=ok
// SIG undefined FUN_1414e70b0(void)

longlong FUN_1414e70b0(void)

{
  if (DAT_1468a28d0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a28d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485260);
  }
  return DAT_1468a28d0;
}



// FUNCTION 1414e70e0 FUN_1414e70e0 body=47 status=ok
// SIG undefined FUN_1414e70e0(void)

longlong FUN_1414e70e0(void)

{
  if (DAT_1468a2900 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2900,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464854f0);
  }
  return DAT_1468a2900;
}



// FUNCTION 1414e7110 FUN_1414e7110 body=47 status=ok
// SIG undefined FUN_1414e7110(void)

longlong FUN_1414e7110(void)

{
  if (DAT_1468a28f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a28f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464853b0);
  }
  return DAT_1468a28f0;
}



// FUNCTION 1414e7140 FUN_1414e7140 body=47 status=ok
// SIG undefined FUN_1414e7140(void)

longlong FUN_1414e7140(void)

{
  if (DAT_1468a2868 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2868,&PTR_Z_Construct_UPackage__Script_MechWarrior_146484de0);
  }
  return DAT_1468a2868;
}



// FUNCTION 1414e7170 FUN_1414e7170 body=47 status=ok
// SIG undefined FUN_1414e7170(void)

longlong FUN_1414e7170(void)

{
  if (DAT_1468a2920 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2920,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485790);
  }
  return DAT_1468a2920;
}



// FUNCTION 1414e71a0 FUN_1414e71a0 body=47 status=ok
// SIG undefined FUN_1414e71a0(void)

longlong FUN_1414e71a0(void)

{
  if (DAT_1468a28e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a28e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485320);
  }
  return DAT_1468a28e0;
}



// FUNCTION 1414e71d0 FUN_1414e71d0 body=47 status=ok
// SIG undefined FUN_1414e71d0(void)

longlong FUN_1414e71d0(void)

{
  if (DAT_1468a2910 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2910,&PTR_Z_Construct_UPackage__Script_MechWarrior_146485600);
  }
  return DAT_1468a2910;
}



// FUNCTION 1414e7200 FUN_1414e7200 body=318 status=ok
// SIG undefined FUN_1414e7200(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1414e7200(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined1 local_68 [4];
  undefined4 local_64;
  undefined8 local_60;
  undefined1 local_58 [48];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_68[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_78 = local_64;
  puVar2 = (undefined8 *)FUN_140b5c200(param_1,local_58,local_60,local_68[0]);
  uVar1 = puVar2[1];
  *param_3 = *puVar2;
  param_3[1] = uVar1;
  uVar1 = puVar2[3];
  param_3[2] = puVar2[2];
  param_3[3] = uVar1;
  uVar1 = puVar2[5];
  param_3[4] = puVar2[4];
  param_3[5] = uVar1;
  return;
}



// FUNCTION 1414e7340 FUN_1414e7340 body=334 status=ok
// SIG undefined FUN_1414e7340(void)

void FUN_1414e7340(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined8 local_res10;
  undefined1 local_38 [8];
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_28 [8];
  undefined8 local_20;
  longlong *plStack_18;
  undefined1 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  FName::FName(local_38,&DAT_143f3eda8,1);
  local_2c = 0;
  local_30 = 0xffffffff;
  FName::FName(local_28,&DAT_143f3eda8,1);
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_20 = 0;
  plStack_18 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar6 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar6 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141231630(param_1,local_res10,puVar6);
  plVar5 = plStack_18;
  if (plStack_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_18 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_18)(plStack_18);
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
  return;
}



// FUNCTION 1414e7490 FUN_1414e7490 body=128 status=ok
// SIG undefined FUN_1414e7490(void)

void FUN_1414e7490(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b652e0(param_1,local_res10);
  return;
}



// FUNCTION 1414e7510 FUN_1414e7510 body=128 status=ok
// SIG undefined FUN_1414e7510(void)

void FUN_1414e7510(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b653b0(param_1,local_res10);
  return;
}



// FUNCTION 1414e7590 FUN_1414e7590 body=128 status=ok
// SIG undefined FUN_1414e7590(void)

void FUN_1414e7590(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141236290(param_1,local_res10);
  return;
}



// FUNCTION 1414e7610 execTestServerLevelVisibilityChange body=191 status=ok
// SIG undefined execTestServerLevelVisibilityChange(void)

void APlayerController::execTestServerLevelVisibilityChange(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b6f400(param_1,local_res20,local_res10);
  return;
}



// FUNCTION 1414e76d0 FUN_1414e76d0 body=263 status=ok
// SIG undefined FUN_1414e76d0(void)

void FUN_1414e76d0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b70c00(param_1,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1414e77e0 FUN_1414e77e0 body=263 status=ok
// SIG undefined FUN_1414e77e0(void)

void FUN_1414e77e0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_28 [4];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar1 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b70cf0(param_1,local_28[0],bVar1,local_res20[0] != 0);
  return;
}



// FUNCTION 1414e78f0 FUN_1414e78f0 body=130 status=ok
// SIG undefined FUN_1414e78f0(void)

void FUN_1414e78f0(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b71270(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414e79e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneAudioSection::GetPrivateStaticClass(void)

{
  if (DAT_1468a2d50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponCOVHeatComponent",&DAT_1468a2d50,
                  StaticRegisterNativesUMovieSceneAudioSection,0x290,0x10000000,0,L"Engine",
                  &LAB_1414e9510,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414ea430,&LAB_140447700,0);
  }
  return DAT_1468a2d50;
}



// FUNCTION 1414e7a90 FUN_1414e7a90 body=162 status=ok
// SIG undefined FUN_1414e7a90(void)

longlong FUN_1414e7a90(void)

{
  if (DAT_1468a2db8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponFireLootComponent",&DAT_1468a2db8,FUN_140447710,0x968,
                  0x10000000,0,L"Engine",&LAB_1414e9590,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bf300,&LAB_140447700,0);
  }
  return DAT_1468a2db8;
}



// FUNCTION 1414e7b50 FUN_1414e7b50 body=47 status=ok
// SIG undefined FUN_1414e7b50(void)

longlong FUN_1414e7b50(void)

{
  if (DAT_1468a2d48 == 0) {
    FUN_141786440(&DAT_1468a2d48,&PTR_GetPrivateStaticClass_144c17bd0);
  }
  return DAT_1468a2d48;
}



// FUNCTION 1414e7b80 FUN_1414e7b80 body=47 status=ok
// SIG undefined FUN_1414e7b80(void)

longlong FUN_1414e7b80(void)

{
  if (DAT_1468a2d28 == 0) {
    FUN_141786a30(&DAT_1468a2d28,&PTR_FUN_14648aa30);
  }
  return DAT_1468a2d28;
}



// FUNCTION 1414e7bb0 FUN_1414e7bb0 body=47 status=ok
// SIG undefined FUN_1414e7bb0(void)

longlong FUN_1414e7bb0(void)

{
  if (DAT_1468a2d30 == 0) {
    FUN_141786a30(&DAT_1468a2d30,&PTR_FUN_14648aac0);
  }
  return DAT_1468a2d30;
}



// FUNCTION 1414e7be0 FUN_1414e7be0 body=47 status=ok
// SIG undefined FUN_1414e7be0(void)

longlong FUN_1414e7be0(void)

{
  if (DAT_1468a2d38 == 0) {
    FUN_141786a30(&DAT_1468a2d38,&PTR_FUN_14648ab00);
  }
  return DAT_1468a2d38;
}



// FUNCTION 1414e7c10 FUN_1414e7c10 body=47 status=ok
// SIG undefined FUN_1414e7c10(void)

longlong FUN_1414e7c10(void)

{
  if (DAT_1468a2d40 == 0) {
    FUN_141786a30(&DAT_1468a2d40,&PTR_FUN_14648ab40);
  }
  return DAT_1468a2d40;
}



// FUNCTION 1414e7c40 FUN_1414e7c40 body=53 status=ok
// SIG undefined FUN_1414e7c40(void)

void FUN_1414e7c40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144c1c2e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e7c80 FUN_1414e7c80 body=47 status=ok
// SIG undefined FUN_1414e7c80(void)

longlong FUN_1414e7c80(void)

{
  if (DAT_1468a2b48 == 0) {
    FUN_141786440(&DAT_1468a2b48,&PTR_GetPrivateStaticClass_144c179d0);
  }
  return DAT_1468a2b48;
}



// FUNCTION 1414e7cb0 FUN_1414e7cb0 body=47 status=ok
// SIG undefined FUN_1414e7cb0(void)

longlong FUN_1414e7cb0(void)

{
  if (DAT_1468a2b38 == 0) {
    FUN_141786a30(&DAT_1468a2b38,&PTR_FUN_146487b70);
  }
  return DAT_1468a2b38;
}



// FUNCTION 1414e7ce0 FUN_1414e7ce0 body=47 status=ok
// SIG undefined FUN_1414e7ce0(void)

longlong FUN_1414e7ce0(void)

{
  if (DAT_1468a2b40 == 0) {
    FUN_141786a30(&DAT_1468a2b40,&PTR_FUN_146487c30);
  }
  return DAT_1468a2b40;
}



// FUNCTION 1414e7d30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_1468a2dc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponFoleyAspectData",&DAT_1468a2dc8,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1414e95a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2dc8;
}



// FUNCTION 1414e7df0 FUN_1414e7df0 body=162 status=ok
// SIG undefined FUN_1414e7df0(void)

longlong FUN_1414e7df0(void)

{
  if (DAT_1468a2d78 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponCOVRepairComponent",&DAT_1468a2d78,FUN_1414ea5b0,0x208,
                  0x10000000,0,L"Engine",&LAB_1414e9520,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UAnimMontage::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468a2d78;
}



// FUNCTION 1414e7ea0 FUN_1414e7ea0 body=47 status=ok
// SIG undefined FUN_1414e7ea0(void)

longlong FUN_1414e7ea0(void)

{
  if (DAT_1468a2dd8 == 0) {
    FUN_141786440(&DAT_1468a2dd8,&PTR_GetPrivateStaticClass_144c18120);
  }
  return DAT_1468a2dd8;
}



// FUNCTION 1414e7ed0 FUN_1414e7ed0 body=47 status=ok
// SIG undefined FUN_1414e7ed0(void)

longlong FUN_1414e7ed0(void)

{
  if (DAT_1468a2dd0 == 0) {
    FUN_141786a30(&DAT_1468a2dd0,&PTR_FUN_14648b530);
  }
  return DAT_1468a2dd0;
}



// FUNCTION 1414e7f10 FUN_1414e7f10 body=162 status=ok
// SIG undefined FUN_1414e7f10(void)

longlong FUN_1414e7f10(void)

{
  if (DAT_1468a2c18 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponAudioAspectData",&DAT_1468a2c18,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_1414e9390,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2c18;
}



// FUNCTION 1414e7fd0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UAESHelper::GetPrivateStaticClass(void)

{
  if (DAT_1468a2c28 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponAudioStreamingAspectData",&DAT_1468a2c28,FUN_140447710,
                  0x48,0x10000000,0,L"Engine",&LAB_1414e93b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2c28;
}



// FUNCTION 1414e8080 FUN_1414e8080 body=47 status=ok
// SIG undefined FUN_1414e8080(void)

longlong FUN_1414e8080(void)

{
  if (DAT_1468a2d70 == 0) {
    FUN_141786440(&DAT_1468a2d70,&PTR_FUN_144c18980);
  }
  return DAT_1468a2d70;
}



// FUNCTION 1414e80b0 FUN_1414e80b0 body=47 status=ok
// SIG undefined FUN_1414e80b0(void)

longlong FUN_1414e80b0(void)

{
  if (DAT_1468a2d68 == 0) {
    FUN_141786a30(&DAT_1468a2d68,&PTR_FUN_14648b020);
  }
  return DAT_1468a2d68;
}



// FUNCTION 1414e80e0 FUN_1414e80e0 body=53 status=ok
// SIG undefined FUN_1414e80e0(void)

void FUN_1414e80e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144c1c440;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e8130 FUN_1414e8130 body=162 status=ok
// SIG undefined FUN_1414e8130(void)

longlong FUN_1414e8130(void)

{
  if (DAT_1468a2d98 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponEffectBaseAspectData",&DAT_1468a2d98,FUN_140447710,0x58
                  ,0x10000001,0,L"Engine",&LAB_1414e9550,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2d98;
}



// FUNCTION 1414e81e0 FUN_1414e81e0 body=47 status=ok
// SIG undefined FUN_1414e81e0(void)

longlong FUN_1414e81e0(void)

{
  if (DAT_1468a2c60 == 0) {
    FUN_141786440(&DAT_1468a2c60,&PTR_GetPrivateStaticClass_144c18e00);
  }
  return DAT_1468a2c60;
}



// FUNCTION 1414e8210 FUN_1414e8210 body=47 status=ok
// SIG undefined FUN_1414e8210(void)

longlong FUN_1414e8210(void)

{
  if (DAT_1468a2c40 == 0) {
    FUN_141786a30(&DAT_1468a2c40,&PTR_FUN_146489410);
  }
  return DAT_1468a2c40;
}



// FUNCTION 1414e8240 FUN_1414e8240 body=47 status=ok
// SIG undefined FUN_1414e8240(void)

longlong FUN_1414e8240(void)

{
  if (DAT_1468a2c48 == 0) {
    FUN_141786a30(&DAT_1468a2c48,&PTR_FUN_146489450);
  }
  return DAT_1468a2c48;
}



// FUNCTION 1414e8270 FUN_1414e8270 body=47 status=ok
// SIG undefined FUN_1414e8270(void)

longlong FUN_1414e8270(void)

{
  if (DAT_1468a2c50 == 0) {
    FUN_141786a30(&DAT_1468a2c50,&PTR_FUN_146489490);
  }
  return DAT_1468a2c50;
}



// FUNCTION 1414e82a0 FUN_1414e82a0 body=47 status=ok
// SIG undefined FUN_1414e82a0(void)

longlong FUN_1414e82a0(void)

{
  if (DAT_1468a2c58 == 0) {
    FUN_141786a30(&DAT_1468a2c58,&PTR_FUN_1464894d0);
  }
  return DAT_1468a2c58;
}



// FUNCTION 1414e82e0 FUN_1414e82e0 body=53 status=ok
// SIG undefined FUN_1414e82e0(void)

void FUN_1414e82e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144c1b4e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e8330 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UCheckBoxWidgetStyle::StaticClass(void)

{
  if (DAT_1468a2b90 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WantedPoster",&DAT_1468a2b90,FUN_1414ea460,0x5b0,0x10000000,0
                  ,L"Engine",&LAB_1414e9200,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_1412d9cf0,&LAB_140447700,0);
  }
  return DAT_1468a2b90;
}



// FUNCTION 1414e83e0 StaticClass body=162 status=ok
// SIG undefined StaticClass(void)

longlong UPawnAction_Sequence::StaticClass(void)

{
  if (DAT_1468a2bf8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponAttachmentEffectAspectData",&DAT_1468a2bf8,
                  FUN_140447710,0xc0,0x10000000,0,L"Engine",&LAB_1414e9350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414e8130,&LAB_140447700,0);
  }
  return DAT_1468a2bf8;
}



// FUNCTION 1414e8490 FUN_1414e8490 body=47 status=ok
// SIG undefined FUN_1414e8490(void)

longlong FUN_1414e8490(void)

{
  if (DAT_1468a2b88 == 0) {
    FUN_141786440(&DAT_1468a2b88,&PTR_StaticClass_144c19610);
  }
  return DAT_1468a2b88;
}



// FUNCTION 1414e84c0 FUN_1414e84c0 body=47 status=ok
// SIG undefined FUN_1414e84c0(void)

longlong FUN_1414e84c0(void)

{
  if (DAT_1468a2b58 == 0) {
    FUN_141786a30(&DAT_1468a2b58,&PTR_FUN_146487ff0);
  }
  return DAT_1468a2b58;
}



// FUNCTION 1414e84f0 FUN_1414e84f0 body=47 status=ok
// SIG undefined FUN_1414e84f0(void)

longlong FUN_1414e84f0(void)

{
  if (DAT_1468a2b60 == 0) {
    FUN_141786a30(&DAT_1468a2b60,&PTR_FUN_146488070);
  }
  return DAT_1468a2b60;
}



// FUNCTION 1414e8520 FUN_1414e8520 body=47 status=ok
// SIG undefined FUN_1414e8520(void)

longlong FUN_1414e8520(void)

{
  if (DAT_1468a2b68 == 0) {
    FUN_141786a30(&DAT_1468a2b68,&PTR_FUN_1464880b0);
  }
  return DAT_1468a2b68;
}



// FUNCTION 1414e8550 FUN_1414e8550 body=47 status=ok
// SIG undefined FUN_1414e8550(void)

longlong FUN_1414e8550(void)

{
  if (DAT_1468a2b70 == 0) {
    FUN_141786a30(&DAT_1468a2b70,&PTR_FUN_146488270);
  }
  return DAT_1468a2b70;
}



// FUNCTION 1414e8580 FUN_1414e8580 body=47 status=ok
// SIG undefined FUN_1414e8580(void)

longlong FUN_1414e8580(void)

{
  if (DAT_1468a2b78 == 0) {
    FUN_141786a30(&DAT_1468a2b78,&PTR_FUN_1464883b0);
  }
  return DAT_1468a2b78;
}



// FUNCTION 1414e85b0 FUN_1414e85b0 body=47 status=ok
// SIG undefined FUN_1414e85b0(void)

longlong FUN_1414e85b0(void)

{
  if (DAT_1468a2b80 == 0) {
    FUN_141786a30(&DAT_1468a2b80,&PTR_FUN_1464883f0);
  }
  return DAT_1468a2b80;
}



// FUNCTION 1414e85e0 FUN_1414e85e0 body=47 status=ok
// SIG undefined FUN_1414e85e0(void)

longlong FUN_1414e85e0(void)

{
  if (DAT_1468a2d90 == 0) {
    FUN_141786440(&DAT_1468a2d90,&PTR_FUN_144c19ac0);
  }
  return DAT_1468a2d90;
}



// FUNCTION 1414e8620 FUN_1414e8620 body=162 status=ok
// SIG undefined FUN_1414e8620(void)

longlong FUN_1414e8620(void)

{
  if (DAT_1468a2cb8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponBonusCollectionData",&DAT_1468a2cb8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",FUN_1414e9440,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a2cb8;
}



// FUNCTION 1414e86d0 FUN_1414e86d0 body=162 status=ok
// SIG undefined FUN_1414e86d0(void)

longlong FUN_1414e86d0(void)

{
  if (DAT_1468a2d88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponDamageTypeAspectData",&DAT_1468a2d88,FUN_140447710,0x58
                  ,0x10000000,0,L"Engine",&LAB_1414e9530,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2d88;
}



// FUNCTION 1414e87a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UARTrackedObject::GetPrivateStaticClass(void)

{
  if (DAT_1468a2cc8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponBonusDataTableAttributeValueResolver",&DAT_1468a2cc8,
                  FUN_140447710,0xd0,0x10000000,0,L"Engine",FUN_1414e9480,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  GetPrivateStaticClass,FUN_1414e8910,0);
  }
  return DAT_1468a2cc8;
}



// FUNCTION 1414e8850 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWidget::GetPrivateStaticClass(void)

{
  if (DAT_1468a2ba0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WantedPosterDefinition",&DAT_1468a2ba0,FUN_140447710,0x100,
                  0x10000001,0,L"Engine",FUN_1414e9250,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a2ba0;
}



// FUNCTION 1414e8910 FUN_1414e8910 body=162 status=ok
// SIG undefined FUN_1414e8910(void)

longlong FUN_1414e8910(void)

{
  if (DAT_1468a2ce0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponBonusDataTableData",&DAT_1468a2ce0,FUN_1414ea550,0x58,
                  0x10000000,0,L"Engine",InternalConstructor<UMTMeshCommand_UpdateUVChannel>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_142c4ba60,&LAB_140447700,0);
  }
  return DAT_1468a2ce0;
}



// FUNCTION 1414e89c0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_1468a2c08 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponAttributeEffectsAspectData",&DAT_1468a2c08,
                  FUN_140447710,0x80,0x10000000,0,L"Engine",&LAB_1414e9370,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f790,&LAB_140447700,0);
  }
  return DAT_1468a2c08;
}



// FUNCTION 1414e8a80 FUN_1414e8a80 body=162 status=ok
// SIG undefined FUN_1414e8a80(void)

longlong FUN_1414e8a80(void)

{
  if (DAT_1468a2da8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponElementColorizationEvaluator",&DAT_1468a2da8,
                  FUN_140447710,0x30,0x10000000,0,L"Engine",&LAB_1414e9570,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1429d2720,&LAB_140447700,0);
  }
  return DAT_1468a2da8;
}



// FUNCTION 1414e8b30 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UBlueprintGeneratedClass::GetPrivateStaticClass(void)

{
  if (DAT_1468a2b30 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"ViewAttachmentComponent",&DAT_1468a2b30,FUN_140447710,0x2e0,
                  0x10000000,0,L"Engine",&LAB_1414e9220,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_1468a2b30;
}



// FUNCTION 1414e8c10 FUN_1414e8c10 body=162 status=ok
// SIG undefined FUN_1414e8c10(void)

longlong FUN_1414e8c10(void)

{
  if (DAT_1468a2be8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponAmmoCurrencyComponent",&DAT_1468a2be8,FUN_1414ea4c0,
                  0x208,0x10000000,0,L"Engine",&LAB_1414e9340,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bc880,&LAB_140447700,0);
  }
  return DAT_1468a2be8;
}



// FUNCTION 1414e8cc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UXSkinAnimationProfile::GetPrivateStaticClass(void)

{
  if (DAT_1468a2d10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponBonusAspectData",&DAT_1468a2d10,
                  StaticRegisterNativesUXSkinAnimationProfile,0x80,0x10000000,0,L"Engine",
                  InternalConstructor<UMultiTaskProLoop1D>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2d10;
}



// FUNCTION 1414e8d70 FUN_1414e8d70 body=47 status=ok
// SIG undefined FUN_1414e8d70(void)

longlong FUN_1414e8d70(void)

{
  if (DAT_1468a2be0 == 0) {
    FUN_141786440(&DAT_1468a2be0,&PTR_FUN_144c1a560);
  }
  return DAT_1468a2be0;
}



// FUNCTION 1414e8da0 FUN_1414e8da0 body=47 status=ok
// SIG undefined FUN_1414e8da0(void)

longlong FUN_1414e8da0(void)

{
  if (DAT_1468a2ba8 == 0) {
    FUN_141786a30(&DAT_1468a2ba8,&PTR_FUN_1464889c0);
  }
  return DAT_1468a2ba8;
}



// FUNCTION 1414e8dd0 FUN_1414e8dd0 body=47 status=ok
// SIG undefined FUN_1414e8dd0(void)

longlong FUN_1414e8dd0(void)

{
  if (DAT_1468a2bb0 == 0) {
    FUN_141786a30(&DAT_1468a2bb0,&PTR_FUN_146488a40);
  }
  return DAT_1468a2bb0;
}



// FUNCTION 1414e8e00 FUN_1414e8e00 body=47 status=ok
// SIG undefined FUN_1414e8e00(void)

longlong FUN_1414e8e00(void)

{
  if (DAT_1468a2bb8 == 0) {
    FUN_141786a30(&DAT_1468a2bb8,&PTR_FUN_146488a80);
  }
  return DAT_1468a2bb8;
}



// FUNCTION 1414e8e30 FUN_1414e8e30 body=47 status=ok
// SIG undefined FUN_1414e8e30(void)

longlong FUN_1414e8e30(void)

{
  if (DAT_1468a2bc0 == 0) {
    FUN_141786a30(&DAT_1468a2bc0,&PTR_FUN_146488b30);
  }
  return DAT_1468a2bc0;
}



// FUNCTION 1414e8e60 FUN_1414e8e60 body=47 status=ok
// SIG undefined FUN_1414e8e60(void)

longlong FUN_1414e8e60(void)

{
  if (DAT_1468a2bc8 == 0) {
    FUN_141786a30(&DAT_1468a2bc8,&PTR_FUN_146488b70);
  }
  return DAT_1468a2bc8;
}



// FUNCTION 1414e8e90 FUN_1414e8e90 body=47 status=ok
// SIG undefined FUN_1414e8e90(void)

longlong FUN_1414e8e90(void)

{
  if (DAT_1468a2bd0 == 0) {
    FUN_141786a30(&DAT_1468a2bd0,&PTR_FUN_146488bb0);
  }
  return DAT_1468a2bd0;
}



// FUNCTION 1414e8ec0 FUN_1414e8ec0 body=47 status=ok
// SIG undefined FUN_1414e8ec0(void)

longlong FUN_1414e8ec0(void)

{
  if (DAT_1468a2bd8 == 0) {
    FUN_141786a30(&DAT_1468a2bd8,&PTR_FUN_146488bf0);
  }
  return DAT_1468a2bd8;
}



// FUNCTION 1414e8f00 FUN_1414e8f00 body=47 status=ok
// SIG undefined FUN_1414e8f00(void)

longlong FUN_1414e8f00(void)

{
  if (DAT_1468a2cd8 == 0) {
    FUN_141786440(&DAT_1468a2cd8,&PTR_FUN_144c16eb0);
  }
  return DAT_1468a2cd8;
}



// FUNCTION 1414e8f30 FUN_1414e8f30 body=47 status=ok
// SIG undefined FUN_1414e8f30(void)

longlong FUN_1414e8f30(void)

{
  if (DAT_1468a2cd0 == 0) {
    FUN_141786a30(&DAT_1468a2cd0,&PTR_FUN_14648a0a0);
  }
  return DAT_1468a2cd0;
}



// FUNCTION 1414e8f60 FUN_1414e8f60 body=47 status=ok
// SIG undefined FUN_1414e8f60(void)

longlong FUN_1414e8f60(void)

{
  if (DAT_1468a2d08 == 0) {
    FUN_141786440(&DAT_1468a2d08,&PTR_GetPrivateStaticClass_144c172b0);
  }
  return DAT_1468a2d08;
}



// FUNCTION 1414e8f90 FUN_1414e8f90 body=47 status=ok
// SIG undefined FUN_1414e8f90(void)

longlong FUN_1414e8f90(void)

{
  if (DAT_1468a2ce8 == 0) {
    FUN_141786a30(&DAT_1468a2ce8,&PTR_FUN_14648a2c0);
  }
  return DAT_1468a2ce8;
}



// FUNCTION 1414e8fc0 FUN_1414e8fc0 body=47 status=ok
// SIG undefined FUN_1414e8fc0(void)

longlong FUN_1414e8fc0(void)

{
  if (DAT_1468a2cf0 == 0) {
    FUN_141786a30(&DAT_1468a2cf0,&PTR_FUN_14648a3b0);
  }
  return DAT_1468a2cf0;
}



// FUNCTION 1414e8ff0 FUN_1414e8ff0 body=47 status=ok
// SIG undefined FUN_1414e8ff0(void)

longlong FUN_1414e8ff0(void)

{
  if (DAT_1468a2cf8 == 0) {
    FUN_141786a30(&DAT_1468a2cf8,&PTR_FUN_14648a4a0);
  }
  return DAT_1468a2cf8;
}



// FUNCTION 1414e9020 FUN_1414e9020 body=47 status=ok
// SIG undefined FUN_1414e9020(void)

longlong FUN_1414e9020(void)

{
  if (DAT_1468a2d00 == 0) {
    FUN_141786a30(&DAT_1468a2d00,&PTR_FUN_14648a590);
  }
  return DAT_1468a2d00;
}



// FUNCTION 1414e9050 FUN_1414e9050 body=53 status=ok
// SIG undefined FUN_1414e9050(void)

void FUN_1414e9050(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x48;
    *puVar1 = &PTR_FUN_144c1be28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e9090 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStreamInteractConnectionUW::GetPrivateStaticClass(void)

{
  if (DAT_1468a2b50 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WadingEffectsComponent",&DAT_1468a2b50,
                  StaticRegisterNativesUUGStreamInteractConnectionUW,0x248,0x10000000,0,L"Engine",
                  &LAB_1414e9240,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1428e7a40,&LAB_140447700,0);
  }
  return DAT_1468a2b50;
}



// FUNCTION 1414e9140 FUN_1414e9140 body=53 status=ok
// SIG undefined FUN_1414e9140(void)

void FUN_1414e9140(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144c1bf40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e9180 FUN_1414e9180 body=53 status=ok
// SIG undefined FUN_1414e9180(void)

void FUN_1414e9180(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c1c058;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e91c0 FUN_1414e91c0 body=53 status=ok
// SIG undefined FUN_1414e91c0(void)

void FUN_1414e91c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144c1c170;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414e9250 FUN_1414e9250 body=233 status=ok
// SIG undefined FUN_1414e9250(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1414e9250(longlong *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c1b1a0;
    uVar2 = uRam00000001468a29fc;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
    *(undefined4 *)((longlong)puVar1 + 0x44) = 0;
    *(undefined4 *)(puVar1 + 9) = 0;
    *(uint *)((longlong)puVar1 + 0x4c) = uVar2;
    uVar2 = uRam00000001468a29f4 & uRam00000001468a2a04;
    uVar3 = uRam00000001468a29f8 & uRam00000001468a2a08;
    uVar4 = uRam00000001468a29fc & uRam00000001468a2a0c;
    *(uint *)(puVar1 + 0xc) = _DAT_1468a29f0 & _DAT_1468a2a00;
    *(uint *)((longlong)puVar1 + 100) = uVar2;
    *(uint *)(puVar1 + 0xd) = uVar3;
    *(uint *)((longlong)puVar1 + 0x6c) = uVar4;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    *(undefined4 *)(puVar1 + 0x12) = 0xffffffff;
    *(undefined4 *)((longlong)puVar1 + 0x94) = 0;
    puVar1[0x14] = 0;
    *(undefined4 *)(puVar1 + 0x16) = 0;
    if (0x7fffffff < *(uint *)((longlong)puVar1 + 0xb4)) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar1 + 0x15,0);
    }
    if ((undefined2 *)puVar1[0x15] != (undefined2 *)0x0) {
      *(undefined2 *)puVar1[0x15] = 0;
    }
    *(undefined4 *)(puVar1 + 0x13) = 0;
    FUN_140c631a0(puVar1 + 0x17);
  }
  return;
}



// FUNCTION 1414e93f0 InternalConstructor<UMultiTaskProLoop1D> body=78 status=ok
// SIG undefined InternalConstructor<UMultiTaskProLoop1D>(void)

void InternalConstructor<UMultiTaskProLoop1D>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c1bb40;
    puVar1[7] = &PTR_LAB_144c1be10;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
  }
  return;
}



// FUNCTION 1414e9440 FUN_1414e9440 body=51 status=ok
// SIG undefined FUN_1414e9440(void)

void FUN_1414e9440(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR_FUN_144c1b640;
    puVar1[6] = 0;
    puVar1[7] = 0;
  }
  return;
}



// FUNCTION 1414e9480 FUN_1414e9480 body=71 status=ok
// SIG undefined FUN_1414e9480(void)

void FUN_1414e9480(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_142c8cfb0(puVar1,param_1);
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *puVar1 = &PTR__scalar_deleting_destructor__144a747a8;
  }
  return;
}



// FUNCTION 1414e94d0 InternalConstructor<UMTMeshCommand_UpdateUVChannel> body=59 status=ok
// SIG undefined InternalConstructor<UMTMeshCommand_UpdateUVChannel>(void)

void InternalConstructor<UMTMeshCommand_UpdateUVChannel>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    UFontFaceInterface::UFontFaceInterface(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144c1b8c0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1414e95d0 ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator> body=104 status=ok
// SIG undefined ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(void)

void TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>::
     ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      if (*(longlong *)(lVar1 + 0x10) != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x28;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414e9640 ~TArray<FSpriteGeometryShape,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FSpriteGeometryShape,FDefaultAllocator>(void)

void TArray<FSpriteGeometryShape,FDefaultAllocator>::~TArray<FSpriteGeometryShape,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 6;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414e96a0 ~TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_> body=166 status=ok
// SIG undefined ~TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_>(void)

void TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_>::
     ~TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 8);
    do {
      if (puVar4[2] != 0) {
        FMemory::Free();
      }
      iVar5 = *(int *)(puVar4 + 1);
      plVar2 = (longlong *)*puVar4;
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)*puVar4;
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      puVar4 = puVar4 + 5;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414e9750 FUN_1414e9750 body=181 status=ok
// SIG undefined FUN_1414e9750(void)

void FUN_1414e9750(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar4 = (longlong *)(lVar1 + 0x38);
    do {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      if (plVar4[-2] != 0) {
        FMemory::Free();
      }
      iVar5 = (int)plVar4[-3];
      plVar2 = (longlong *)plVar4[-4];
      if (iVar5 != 0) {
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 2;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        plVar2 = (longlong *)plVar4[-4];
      }
      if (plVar2 != (longlong *)0x0) {
        FMemory::Free(plVar2);
      }
      plVar4 = plVar4 + 9;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1414e9810 FUN_1414e9810 body=103 status=ok
// SIG undefined FUN_1414e9810(void)

void FUN_1414e9810(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x10);
  plVar1 = *(longlong **)(param_1 + 8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1414e9880 FUN_1414e9880 body=119 status=ok
// SIG undefined FUN_1414e9880(void)

void FUN_1414e9880(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x20);
  plVar1 = *(longlong **)(param_1 + 0x18);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 2;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x18);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1414e9910 FUN_1414e9910 body=43 status=ok
// SIG undefined FUN_1414e9910(void)

undefined8 * FUN_1414e9910(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144c1b4d0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1414e9940 FUN_1414e9940 body=107 status=ok
// SIG undefined FUN_1414e9940(void)

longlong FUN_1414e9940(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x100);
  }
  return param_1;
}



// FUNCTION 1414e99b0 FUN_1414e99b0 body=104 status=ok
// SIG undefined FUN_1414e99b0(void)

longlong FUN_1414e99b0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  FUN_1414e9750(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x38) = &PTR_FUN_144c1b4d0;
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 1414e9a20 FUN_1414e9a20 body=64 status=ok
// SIG undefined FUN_1414e9a20(void)

longlong FUN_1414e9a20(longlong param_1,ulonglong param_2)

{
  TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>::
  ~TArray<FVulkanShaderHeader::FUniformBufferInfo,FDefaultAllocator>(param_1 + 0x30);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1414e9a60 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UViewportStatsSubsystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_>::
  ~TArray<FTaggedActorStruct,TSizedDefaultAllocator<32>_>(param_1 + 0x48);
  TArray<FSpriteGeometryShape,FDefaultAllocator>::~TArray<FSpriteGeometryShape,FDefaultAllocator>
            (param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1414e9ab0 FUN_1414e9ab0 body=60 status=ok
// SIG undefined FUN_1414e9ab0(void)

void FUN_1414e9ab0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2af0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 1414e9c30 FUN_1414e9c30 body=431 status=ok
// SIG undefined FUN_1414e9c30(void)

undefined8 FUN_1414e9c30(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  
  if (param_4 != 0) {
    plVar9 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar9[-1];
      if (plVar1 != plVar9) {
        iVar7 = (int)param_2[2];
        if (iVar7 != 0) {
          plVar5 = (longlong *)(*plVar1 + 8);
          do {
            if (*plVar5 != 0) {
              FMemory::Free();
            }
            plVar5 = plVar5 + 3;
            iVar7 = iVar7 + -1;
          } while (iVar7 != 0);
        }
        iVar7 = (int)plVar9[1];
        lVar3 = *plVar9;
        *(int *)(param_2 + 2) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
          puVar6 = (undefined1 *)*plVar1;
          if (iVar7 != 0) {
            puVar8 = (undefined4 *)(lVar3 + 4);
            do {
              *puVar6 = *(undefined1 *)(puVar8 + -1);
              *(undefined4 *)(puVar6 + 4) = *puVar8;
              *(undefined8 *)(puVar6 + 8) = 0;
              iVar2 = puVar8[3];
              pvVar4 = *(void **)(puVar8 + 1);
              *(int *)(puVar6 + 0x10) = iVar2;
              if (iVar2 == 0) {
                *(undefined4 *)(puVar6 + 0x14) = 0;
              }
              else {
                TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy
                          (puVar6 + 8,iVar2,0);
                _guard_xfg_dispatch_icall_nop(*(void **)(puVar6 + 8),pvVar4,(longlong)iVar2 * 0x48);
              }
              puVar6 = puVar6 + 0x18;
              puVar8 = puVar8 + 6;
              iVar7 = iVar7 + -1;
            } while (iVar7 != 0);
          }
        }
      }
      plVar1 = param_2 + 3;
      if (plVar1 != plVar9 + 2) {
        iVar7 = (int)plVar9[3];
        pvVar4 = (void *)plVar9[2];
        *(int *)(param_2 + 4) = iVar7;
        if ((iVar7 == 0) && (*(int *)((longlong)param_2 + 0x24) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x24) = 0;
        }
        else {
          TArray<FDeferredWindowsDragDropOperation,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
          _guard_xfg_dispatch_icall_nop((void *)*plVar1,pvVar4,(longlong)iVar7 * 0x48);
        }
      }
      plVar9 = plVar9 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e9de0 FUN_1414e9de0 body=108 status=ok
// SIG undefined FUN_1414e9de0(void)

undefined8 FUN_1414e9de0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined8 *)(param_2 + 0x18);
    do {
      *(undefined1 *)(puVar1 + -3) = *(undefined1 *)(param_3 + -0x18 + (longlong)puVar1);
      FString::operator=(puVar1 + -2,param_3 + -0x10 + (longlong)puVar1);
      *puVar1 = *(undefined8 *)(param_3 + (longlong)puVar1);
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[2] = *(undefined8 *)(param_3 + 0x10 + (longlong)puVar1);
      puVar1 = puVar1 + 6;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e9e50 Copy body=112 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FUser2FaBackupCode>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x18;
    do {
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18 + param_2);
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=
                (param_2 + -0x10,param_3 + -0x10 + param_2);
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2,param_3 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e9ec0 FUN_1414e9ec0 body=242 status=ok
// SIG undefined FUN_1414e9ec0(void)

undefined8 FUN_1414e9ec0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined4 *)(puVar3 + -1);
      *(undefined8 *)(param_2 + 2) = *puVar3;
      *(undefined8 *)(param_2 + 4) = puVar3[1];
      TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2 + 6,puVar3 + 2);
      puVar1 = (undefined8 *)(param_2 + 10);
      if (puVar1 != puVar3 + 4) {
        iVar2 = *(int *)(puVar3 + 5);
        _Src = (void *)puVar3[4];
        param_2[0xc] = iVar2;
        if ((iVar2 == 0) && (param_2[0xd] == 0)) {
          param_2[0xd] = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      TArray<FCompactPoseBoneIndex,FDefaultAllocator>::operator=(param_2 + 0xe,puVar3 + 6);
      puVar3 = puVar3 + 9;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x12;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414e9fc0 FUN_1414e9fc0 body=227 status=ok
// SIG undefined FUN_1414e9fc0(void)

undefined8 FUN_1414e9fc0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 8);
    do {
      puVar1 = param_2 + 1;
      *param_2 = puVar3[-1];
      if (puVar1 != puVar3) {
        iVar2 = *(int *)(puVar3 + 1);
        _Src = (void *)*puVar3;
        *(int *)(param_2 + 2) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 << 3);
        }
      }
      param_2[3] = puVar3[2];
      param_2[4] = puVar3[3];
      param_2[5] = puVar3[4];
      puVar1 = puVar3 + 5;
      puVar3 = puVar3 + 7;
      param_2[6] = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 7;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1414ea0d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayArea::GetPrivateStaticClass(void)

{
  if (DAT_1468a2c68 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponBalanceStateComponent",&DAT_1468a2c68,
                  StaticRegisterNativesAPlayArea,0x450,0x10000000,0,L"Engine",&LAB_1414e93d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14142bde0,&LAB_140447700,0);
  }
  return DAT_1468a2c68;
}



// FUNCTION 1414ea180 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass(void)

{
  if (DAT_1468a2de0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponGenericUseComponent",&DAT_1468a2de0,FUN_1414ea5e0,0x230
                  ,0x10000000,0,L"Engine",&LAB_1414e95c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1414ea450,&LAB_140447700,0);
  }
  return DAT_1468a2de0;
}



// FUNCTION 1414ea230 FUN_1414ea230 body=6 status=ok
// SIG undefined FUN_1414ea230(void)

undefined8 FUN_1414ea230(void)

{
  return 0x5bbcf850;
}



// FUNCTION 1414ea240 FUN_1414ea240 body=6 status=ok
// SIG undefined FUN_1414ea240(void)

undefined8 FUN_1414ea240(void)

{
  return 0xe566bbd3;
}



// FUNCTION 1414ea250 FUN_1414ea250 body=6 status=ok
// SIG undefined FUN_1414ea250(void)

undefined8 FUN_1414ea250(void)

{
  return 0x7204a563;
}



// FUNCTION 1414ea260 FUN_1414ea260 body=6 status=ok
// SIG undefined FUN_1414ea260(void)

undefined8 FUN_1414ea260(void)

{
  return 0xa5fd87f7;
}



// FUNCTION 1414ea270 FUN_1414ea270 body=6 status=ok
// SIG undefined FUN_1414ea270(void)

undefined8 FUN_1414ea270(void)

{
  return 0x1ea18e67;
}



// FUNCTION 1414ea280 FUN_1414ea280 body=6 status=ok
// SIG undefined FUN_1414ea280(void)

undefined8 FUN_1414ea280(void)

{
  return 0x8923750b;
}



// FUNCTION 1414ea290 FUN_1414ea290 body=6 status=ok
// SIG undefined FUN_1414ea290(void)

undefined8 FUN_1414ea290(void)

{
  return 0x56c1c34e;
}



// FUNCTION 1414ea2f0 FUN_1414ea2f0 body=57 status=ok
// SIG undefined FUN_1414ea2f0(void)

void FUN_1414ea2f0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2b10);
                    /* WARNING: Could not recover jumptable at 0x0001414ea326. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414ea330 FUN_1414ea330 body=57 status=ok
// SIG undefined FUN_1414ea330(void)

void FUN_1414ea330(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2ae0);
                    /* WARNING: Could not recover jumptable at 0x0001414ea366. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414ea370 FUN_1414ea370 body=57 status=ok
// SIG undefined FUN_1414ea370(void)

void FUN_1414ea370(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2b18);
                    /* WARNING: Could not recover jumptable at 0x0001414ea3a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414ea3b0 FUN_1414ea3b0 body=57 status=ok
// SIG undefined FUN_1414ea3b0(void)

void FUN_1414ea3b0(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_1468a2af8);
                    /* WARNING: Could not recover jumptable at 0x0001414ea3e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 1414ea3f0 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UARTrackedObject::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414ea400 thunk_FUN_14301f790 body=5 status=ok
// SIG undefined thunk_FUN_14301f790(void)

void thunk_FUN_14301f790(void)

{
  FUN_14301f790();
  return;
}



// FUNCTION 1414ea410 thunk_FUN_1429d2720 body=5 status=ok
// SIG undefined thunk_FUN_1429d2720(void)

void thunk_FUN_1429d2720(void)

{
  FUN_1429d2720();
  return;
}



// FUNCTION 1414ea420 thunk_FUN_1430bc880 body=5 status=ok
// SIG undefined thunk_FUN_1430bc880(void)

void thunk_FUN_1430bc880(void)

{
  FUN_1430bc880();
  return;
}



// FUNCTION 1414ea440 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UAnimMontage::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1414ea460 FUN_1414ea460 body=34 status=ok
// SIG undefined FUN_1414ea460(void)

void FUN_1414ea460(void)

{
  undefined8 uVar1;
  
  uVar1 = UCheckBoxWidgetStyle::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetWantedPosterMission_144c1b150,5);
  return;
}



// FUNCTION 1414ea490 StaticRegisterNativesUUGStreamInteractConnectionUW body=34 status=ok
// SIG undefined StaticRegisterNativesUUGStreamInteractConnectionUW(void)

void UUGStreamInteractConnectionUW::StaticRegisterNativesUUGStreamInteractConnectionUW(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyBeginRiverOverlap_144c1b128,2);
  return;
}



// FUNCTION 1414ea4c0 FUN_1414ea4c0 body=34 status=ok
// SIG undefined FUN_1414ea4c0(void)

void FUN_1414ea4c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e8c10();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClientConsumeAmmo_144c1b460,7);
  return;
}



// FUNCTION 1414ea4f0 StaticRegisterNativesAPlayArea body=34 status=ok
// SIG undefined StaticRegisterNativesAPlayArea(void)

void APlayArea::StaticRegisterNativesAPlayArea(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_NotifyFirstPersonCreated_144c1b600,4);
  return;
}



// FUNCTION 1414ea520 StaticRegisterNativesUXSkinAnimationProfile body=34 status=ok
// SIG undefined StaticRegisterNativesUXSkinAnimationProfile(void)

void UXSkinAnimationProfile::StaticRegisterNativesUXSkinAnimationProfile(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_EnumerateBonuses_144c1c2a0,4);
  return;
}



// FUNCTION 1414ea550 FUN_1414ea550 body=34 status=ok
// SIG undefined FUN_1414ea550(void)

void FUN_1414ea550(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e8910();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_EnumerateDataTableColumnNames_144c1c288,1);
  return;
}



// FUNCTION 1414ea580 StaticRegisterNativesUMovieSceneAudioSection body=34 status=ok
// SIG undefined StaticRegisterNativesUMovieSceneAudioSection(void)

void UMovieSceneAudioSection::StaticRegisterNativesUMovieSceneAudioSection(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnBroken_144c1c400,4);
  return;
}



// FUNCTION 1414ea5b0 FUN_1414ea5b0 body=34 status=ok
// SIG undefined FUN_1414ea5b0(void)

void FUN_1414ea5b0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1414e7df0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_ClientRepairState_144c1c558,1);
  return;
}



// FUNCTION 1414ea5e0 FUN_1414ea5e0 body=34 status=ok
// SIG undefined FUN_1414ea5e0(void)

void FUN_1414ea5e0(void)

{
  undefined8 uVar1;
  
  uVar1 = UUGStreamInteractSpawnedActorUW::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnRep_bIsUsing_144c1c568,1);
  return;
}



// FUNCTION 1414ea610 FUN_1414ea610 body=82 status=ok
// SIG undefined FUN_1414ea610(void)

void FUN_1414ea610(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2d18 == 0) {
    uVar1 = FUN_1414ea230();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2d18 = GetStaticStruct(FUN_1414eaaf0,uVar2,L"COVBrokenEffectData",0x20,uVar1);
  }
  return;
}



// FUNCTION 1414ea670 FUN_1414ea670 body=82 status=ok
// SIG undefined FUN_1414ea670(void)

void FUN_1414ea670(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2d58 == 0) {
    uVar1 = FUN_1414ea240();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2d58 = GetStaticStruct(FUN_1414eab20,uVar2,L"COVRepairType",0x48,uVar1);
  }
  return;
}



// FUNCTION 1414ea6d0 FUN_1414ea6d0 body=82 status=ok
// SIG undefined FUN_1414ea6d0(void)

void FUN_1414ea6d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2ca0 == 0) {
    uVar1 = FUN_1414ea280();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2ca0 = GetStaticStruct(FUN_1414eab50,uVar2,L"WeaponBonusData",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414ea730 FUN_1414ea730 body=82 status=ok
// SIG undefined FUN_1414ea730(void)

void FUN_1414ea730(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2c90 == 0) {
    uVar1 = FUN_1414ea250();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2c90 =
         GetStaticStruct(FUN_1414eab80,uVar2,L"WeaponBonusDataTableAttributeMappingData",0x30,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414ea790 FUN_1414ea790 body=82 status=ok
// SIG undefined FUN_1414ea790(void)

void FUN_1414ea790(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2c80 == 0) {
    uVar1 = FUN_1414ea260();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2c80 =
         GetStaticStruct(FUN_1414eabb0,uVar2,L"WeaponBonusDataTableColumnCollectionData",0x28,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414ea7f0 FUN_1414ea7f0 body=82 status=ok
// SIG undefined FUN_1414ea7f0(void)

void FUN_1414ea7f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2c70 == 0) {
    uVar1 = FUN_1414ea270();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2c70 =
         GetStaticStruct(FUN_1414eabe0,uVar2,L"WeaponBonusDataTableSelectionData",0x48,uVar1);
  }
  return;
}



// FUNCTION 1414ea850 FUN_1414ea850 body=82 status=ok
// SIG undefined FUN_1414ea850(void)

void FUN_1414ea850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468a2c30 == 0) {
    uVar1 = FUN_1414ea290();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468a2c30 = GetStaticStruct(FUN_1414eac10,uVar2,L"WeaponUseModeAspectSetData",0x38,uVar1);
  }
  return;
}



// FUNCTION 1414ea8b0 FUN_1414ea8b0 body=47 status=ok
// SIG undefined FUN_1414ea8b0(void)

longlong FUN_1414ea8b0(void)

{
  if (DAT_1468a2b28 == 0) {
    FUN_141786440(&DAT_1468a2b28,&PTR_GetPrivateStaticClass_144c1a060);
  }
  return DAT_1468a2b28;
}



// FUNCTION 1414ea8e0 FUN_1414ea8e0 body=47 status=ok
// SIG undefined FUN_1414ea8e0(void)

longlong FUN_1414ea8e0(void)

{
  if (DAT_1468a2b98 == 0) {
    FUN_141786440(&DAT_1468a2b98,&PTR_GetPrivateStaticClass_144c19bb0);
  }
  return DAT_1468a2b98;
}



// FUNCTION 1414ea910 FUN_1414ea910 body=47 status=ok
// SIG undefined FUN_1414ea910(void)

longlong FUN_1414ea910(void)

{
  if (DAT_1468a2bf0 == 0) {
    FUN_141786440(&DAT_1468a2bf0,&PTR_StaticClass_144c191e0);
  }
  return DAT_1468a2bf0;
}



// FUNCTION 1414ea940 FUN_1414ea940 body=47 status=ok
// SIG undefined FUN_1414ea940(void)

longlong FUN_1414ea940(void)

{
  if (DAT_1468a2c00 == 0) {
    FUN_141786440(&DAT_1468a2c00,&PTR_GetPrivateStaticClass_144c19d30);
  }
  return DAT_1468a2c00;
}



// FUNCTION 1414ea970 FUN_1414ea970 body=47 status=ok
// SIG undefined FUN_1414ea970(void)

longlong FUN_1414ea970(void)

{
  if (DAT_1468a2c10 == 0) {
    FUN_141786440(&DAT_1468a2c10,&PTR_FUN_144c18470);
  }
  return DAT_1468a2c10;
}



// FUNCTION 1414ea9a0 FUN_1414ea9a0 body=47 status=ok
// SIG undefined FUN_1414ea9a0(void)

longlong FUN_1414ea9a0(void)

{
  if (DAT_1468a2c20 == 0) {
    FUN_141786440(&DAT_1468a2c20,&PTR_GetPrivateStaticClass_144c18650);
  }
  return DAT_1468a2c20;
}



// FUNCTION 1414ea9d0 FUN_1414ea9d0 body=47 status=ok
// SIG undefined FUN_1414ea9d0(void)

longlong FUN_1414ea9d0(void)

{
  if (DAT_1468a2cb0 == 0) {
    FUN_141786440(&DAT_1468a2cb0,&PTR_FUN_144c1adc0);
  }
  return DAT_1468a2cb0;
}



// FUNCTION 1414eaa00 FUN_1414eaa00 body=47 status=ok
// SIG undefined FUN_1414eaa00(void)

longlong FUN_1414eaa00(void)

{
  if (DAT_1468a2cc0 == 0) {
    FUN_141786440(&DAT_1468a2cc0,&PTR_GetPrivateStaticClass_144c16a60);
  }
  return DAT_1468a2cc0;
}



// FUNCTION 1414eaa30 FUN_1414eaa30 body=47 status=ok
// SIG undefined FUN_1414eaa30(void)

longlong FUN_1414eaa30(void)

{
  if (DAT_1468a2d80 == 0) {
    FUN_141786440(&DAT_1468a2d80,&PTR_FUN_144c198a0);
  }
  return DAT_1468a2d80;
}



// FUNCTION 1414eaa60 FUN_1414eaa60 body=47 status=ok
// SIG undefined FUN_1414eaa60(void)

longlong FUN_1414eaa60(void)

{
  if (DAT_1468a2da0 == 0) {
    FUN_141786440(&DAT_1468a2da0,&PTR_FUN_144c19ee0);
  }
  return DAT_1468a2da0;
}



// FUNCTION 1414eaa90 FUN_1414eaa90 body=47 status=ok
// SIG undefined FUN_1414eaa90(void)

longlong FUN_1414eaa90(void)

{
  if (DAT_1468a2db0 == 0) {
    FUN_141786440(&DAT_1468a2db0,&PTR_FUN_144c174e0);
  }
  return DAT_1468a2db0;
}



// FUNCTION 1414eaac0 FUN_1414eaac0 body=47 status=ok
// SIG undefined FUN_1414eaac0(void)

longlong FUN_1414eaac0(void)

{
  if (DAT_1468a2dc0 == 0) {
    FUN_141786440(&DAT_1468a2dc0,&PTR_GetPrivateStaticClass_144c17f80);
  }
  return DAT_1468a2dc0;
}



// FUNCTION 1414eaaf0 FUN_1414eaaf0 body=47 status=ok
// SIG undefined FUN_1414eaaf0(void)

longlong FUN_1414eaaf0(void)

{
  if (DAT_1468a2d20 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2d20,&PTR_Z_Construct_UPackage__Script_MechWarrior_14648a9e0);
  }
  return DAT_1468a2d20;
}



// FUNCTION 1414eab20 FUN_1414eab20 body=47 status=ok
// SIG undefined FUN_1414eab20(void)

longlong FUN_1414eab20(void)

{
  if (DAT_1468a2d60 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2d60,&PTR_Z_Construct_UPackage__Script_MechWarrior_14648afd0);
  }
  return DAT_1468a2d60;
}



// FUNCTION 1414eab50 FUN_1414eab50 body=47 status=ok
// SIG undefined FUN_1414eab50(void)

longlong FUN_1414eab50(void)

{
  if (DAT_1468a2ca8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2ca8,&PTR_Z_Construct_UPackage__Script_MechWarrior_146489f20);
  }
  return DAT_1468a2ca8;
}



// FUNCTION 1414eab80 FUN_1414eab80 body=47 status=ok
// SIG undefined FUN_1414eab80(void)

longlong FUN_1414eab80(void)

{
  if (DAT_1468a2c98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2c98,&PTR_Z_Construct_UPackage__Script_MechWarrior_146489da0);
  }
  return DAT_1468a2c98;
}



// FUNCTION 1414eabb0 FUN_1414eabb0 body=47 status=ok
// SIG undefined FUN_1414eabb0(void)

longlong FUN_1414eabb0(void)

{
  if (DAT_1468a2c88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2c88,&PTR_Z_Construct_UPackage__Script_MechWarrior_146489bc0);
  }
  return DAT_1468a2c88;
}



// FUNCTION 1414eabe0 FUN_1414eabe0 body=47 status=ok
// SIG undefined FUN_1414eabe0(void)

longlong FUN_1414eabe0(void)

{
  if (DAT_1468a2c78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2c78,&PTR_Z_Construct_UPackage__Script_MechWarrior_146489ad0);
  }
  return DAT_1468a2c78;
}



// FUNCTION 1414eac10 FUN_1414eac10 body=47 status=ok
// SIG undefined FUN_1414eac10(void)

longlong FUN_1414eac10(void)

{
  if (DAT_1468a2c38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468a2c38,&PTR_Z_Construct_UPackage__Script_MechWarrior_1464893c0);
  }
  return DAT_1468a2c38;
}



// FUNCTION 1414eac50 FUN_1414eac50 body=130 status=ok
// SIG undefined FUN_1414eac50(void)

void FUN_1414eac50(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x4f8))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414eace0 FUN_1414eace0 body=130 status=ok
// SIG undefined FUN_1414eace0(void)

void FUN_1414eace0(longlong *param_1,longlong param_2)

{
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x4f0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 1414ead70 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(long param_1,longlong param_2)

{
  undefined8 local_res10;
  longlong local_18 [2];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18[0] = 0;
  local_18[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414eae60 FUN_1414eae60 body=264 status=ok
// SIG undefined FUN_1414eae60(void)

void FUN_1414eae60(long param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 local_res10;
  longlong *local_18;
  undefined8 local_10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1414eaf70 execGetProxies body=201 status=ok
// SIG undefined execGetProxies(void)

void UImgMediaSource::execGetProxies(long param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 1414eb040 FUN_1414eb040 body=52 status=ok
// SIG undefined FUN_1414eb040(void)

void FUN_1414eb040(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  puVar1 = (undefined8 *)FUN_140afedb0(param_1,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 1414eb080 FUN_1414eb080 body=128 status=ok
// SIG undefined FUN_1414eb080(void)

void FUN_1414eb080(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140aff360(param_1,local_res10);
  return;
}



// FUNCTION 1414eb100 FUN_1414eb100 body=175 status=ok
// SIG undefined FUN_1414eb100(void)

void FUN_1414eb100(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140a66c00(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414eb1b0 FUN_1414eb1b0 body=175 status=ok
// SIG undefined FUN_1414eb1b0(void)

void FUN_1414eb1b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [2];
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140a690c0(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414eb320 FUN_1414eb320 body=190 status=ok
// SIG undefined FUN_1414eb320(void)

void FUN_1414eb320(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  UCS_DeliverableReceiverComponent::ResetDelivery(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1414eb3e0 FUN_1414eb3e0 body=493 status=ok
// SIG undefined FUN_1414eb3e0(void)

void FUN_1414eb3e0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined1 local_a8 [12];
  undefined4 local_9c;
  
  local_b8[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_b8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_b8);
  }
  local_c0 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  _guard_xfg_dispatch_icall_nop(local_a8,0,0x90);
  local_9c = 0x3f800000;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_a8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_a8);
  }
  puVar1 = local_a8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b07d10(param_1,local_b8[0],local_c0,local_c8,local_res20[0],bVar2,puVar1);
  return;
}



// FUNCTION 1414eb5d0 execOnProjectileOverlapEnd body=319 status=ok
// SIG undefined execOnProjectileOverlapEnd(void)

void AUGProjectile::execOnProjectileOverlapEnd(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_10);
  }
  local_18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140b07d80(param_1,local_10,local_18,local_res20,local_res10[0]);
  return;
}



// FUNCTION 1414eb710 FUN_1414eb710 body=130 status=ok
// SIG undefined FUN_1414eb710(void)

void FUN_1414eb710(undefined8 param_1,longlong param_2)

{
  int local_res10 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1412a4dc0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 1414eb860 FUN_1414eb860 body=78 status=ok
// SIG undefined FUN_1414eb860(void)

void FUN_1414eb860(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x4e0))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"ServerSendAmmoState_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001414eb8a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x4e8))(param_1);
  return;
}



// FUNCTION 1414eb8c0 FUN_1414eb8c0 body=162 status=ok
// SIG undefined FUN_1414eb8c0(void)

longlong FUN_1414eb8c0(void)

{
  if (DAT_1468a2fe8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponPlayerMeleeOverrideAspectData",&DAT_1468a2fe8,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",&LAB_1414ed0e0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14301f6e0,&LAB_140447700,0);
  }
  return DAT_1468a2fe8;
}



// FUNCTION 1414eb9a0 FUN_1414eb9a0 body=162 status=ok
// SIG undefined FUN_1414eb9a0(void)

longlong FUN_1414eb9a0(void)

{
  if (DAT_1468a3120 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponSkeletalControlAspectData",&DAT_1468a3120,FUN_140447710
                  ,0x68,0x10000000,0,L"Engine",&LAB_1414ed140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414e8130,&LAB_140447700,0);
  }
  return DAT_1468a3120;
}



// FUNCTION 1414eba50 FUN_1414eba50 body=162 status=ok
// SIG undefined FUN_1414eba50(void)

longlong FUN_1414eba50(void)

{
  if (DAT_1468a3160 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponSkinPartData",&DAT_1468a3160,FUN_140447710,0x1a8,
                  0x10000001,0,L"Engine",&LAB_1414ed160,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14142e810,&LAB_140447700,0);
  }
  return DAT_1468a3160;
}



// FUNCTION 1414ebb00 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AGVersusPlayerState::GetPrivateStaticClass(void)

{
  if (DAT_1468a2f88 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponJAKFireProjectileComponent",&DAT_1468a2f88,
                  StaticRegisterNativesAGVersusPlayerState,0x980,0x10000000,0,L"Engine",
                  &LAB_1414ed010,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430bf300,&LAB_140447700,0);
  }
  return DAT_1468a2f88;
}



// FUNCTION 1414ebbb0 FUN_1414ebbb0 body=47 status=ok
// SIG undefined FUN_1414ebbb0(void)

longlong FUN_1414ebbb0(void)

{
  if (DAT_1468a2f80 == 0) {
    FUN_141786440(&DAT_1468a2f80,&PTR_GetPrivateStaticClass_144c1daa0);
  }
  return DAT_1468a2f80;
}



// FUNCTION 1414ebbe0 FUN_1414ebbe0 body=47 status=ok
// SIG undefined FUN_1414ebbe0(void)

longlong FUN_1414ebbe0(void)

{
  if (DAT_1468a2f78 == 0) {
    FUN_141786a30(&DAT_1468a2f78,&PTR_FUN_14648b640);
  }
  return DAT_1468a2f78;
}



// FUNCTION 1414ebc30 FUN_1414ebc30 body=53 status=ok
// SIG undefined FUN_1414ebc30(void)

void FUN_1414ebc30(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144c210a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ebc70 FUN_1414ebc70 body=162 status=ok
// SIG undefined FUN_1414ebc70(void)

longlong FUN_1414ebc70(void)

{
  if (DAT_1468a3110 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponSightComponent",&DAT_1468a3110,FUN_140447710,0x360,
                  0x10000000,0,L"Engine",&LAB_1414ed130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_1430c20f0,&LAB_140447700,0);
  }
  return DAT_1468a3110;
}



// FUNCTION 1414ebd20 FUN_1414ebd20 body=53 status=ok
// SIG undefined FUN_1414ebd20(void)

void FUN_1414ebd20(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144c211b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ebd60 FUN_1414ebd60 body=162 status=ok
// SIG undefined FUN_1414ebd60(void)

longlong FUN_1414ebd60(void)

{
  if (DAT_1468a2ff8 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponRedDotComponent",&DAT_1468a2ff8,FUN_140447710,0x3e0,
                  0x10000000,0,L"Engine",&LAB_1414ed100,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414ebc70,&LAB_140447700,0);
  }
  return DAT_1468a2ff8;
}



// FUNCTION 1414ebe10 FUN_1414ebe10 body=53 status=ok
// SIG undefined FUN_1414ebe10(void)

void FUN_1414ebe10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144c212d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1414ebe50 FUN_1414ebe50 body=47 status=ok
// SIG undefined FUN_1414ebe50(void)

longlong FUN_1414ebe50(void)

{
  if (DAT_1468a3108 == 0) {
    FUN_141786440(&DAT_1468a3108,&PTR_FUN_144c1d710);
  }
  return DAT_1468a3108;
}



// FUNCTION 1414ebea0 FUN_1414ebea0 body=162 status=ok
// SIG undefined FUN_1414ebea0(void)

longlong FUN_1414ebea0(void)

{
  if (DAT_1468a3020 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"WeaponScopeComponent",&DAT_1468a3020,FUN_1414edda0,0x3f0,
                  0x10000000,0,L"Engine",&LAB_1414ed110,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1414ebc70,&LAB_140447700,0);
  }
  return DAT_1468a3020;
}


