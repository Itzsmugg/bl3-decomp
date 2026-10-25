// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141456550 FUN_141456550 body=302 status=ok
// SIG undefined FUN_141456550(void)

undefined8 FUN_141456550(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 8);
    do {
      plVar1 = param_2 + 1;
      *param_2 = plVar6[-1];
      if (plVar1 != plVar6) {
        iVar4 = (int)param_2[2];
        if (iVar4 != 0) {
          lVar2 = *plVar1 + 0x10;
          do {
            TArray<FNamedInterfaceDef,FDefaultAllocator>::
            ~TArray<FNamedInterfaceDef,FDefaultAllocator>(lVar2);
            lVar2 = lVar2 + 0x20;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        iVar4 = (int)plVar6[1];
        lVar2 = *plVar6;
        *(int *)(param_2 + 2) = iVar4;
        if ((iVar4 == 0) && (*(int *)((longlong)param_2 + 0x14) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x14) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar4);
          puVar5 = (undefined8 *)*plVar1;
          if (iVar4 != 0) {
            puVar3 = (undefined8 *)(lVar2 + 8);
            do {
              *puVar5 = puVar3[-1];
              puVar5[1] = *puVar3;
              puVar5[2] = 0;
              TArray<FSchematicCost,FDefaultAllocator>::CopyToEmpty<FSchematicCost>
                        (puVar5 + 2,puVar3[1],*(undefined4 *)(puVar3 + 2),0,0);
              puVar5 = puVar5 + 4;
              puVar3 = puVar3 + 4;
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
      }
      plVar6 = plVar6 + 3;
      param_4 = param_4 + -1;
      param_2 = param_2 + 3;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141456680 FUN_141456680 body=263 status=ok
// SIG undefined FUN_141456680(void)

undefined8 FUN_141456680(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0xb8);
    do {
      FUN_1414559f0(param_2,plVar6 + -0x17);
      plVar1 = (longlong *)(param_2 + 0xb8);
      *(longlong *)(param_2 + 0xb0) = plVar6[-1];
      if (plVar1 != plVar6) {
        iVar5 = (int)plVar6[1];
        lVar2 = *plVar6;
        *(int *)(param_2 + 0xc0) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0xc4) == 0)) {
          *(undefined4 *)(param_2 + 0xc4) = 0;
        }
        else {
          TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar3 = (undefined8 *)*plVar1;
          if (iVar5 != 0) {
            puVar4 = (undefined8 *)(lVar2 + 0x18);
            do {
              *puVar3 = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 1) = 0xffffffff;
              puVar3[2] = puVar4[-1];
              puVar3[3] = *puVar4;
              puVar3[4] = puVar4[1];
              puVar3 = puVar3 + 5;
              iVar5 = iVar5 + -1;
              puVar4 = puVar4 + 5;
            } while (iVar5 != 0);
          }
        }
      }
      plVar6 = plVar6 + 0x19;
      param_4 = param_4 + -1;
      param_2 = param_2 + 200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141456790 FUN_141456790 body=198 status=ok
// SIG undefined FUN_141456790(void)

undefined8 FUN_141456790(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 0x18);
    do {
      uVar3 = *(undefined4 *)((longlong)puVar6 + -0x14);
      uVar4 = *(undefined4 *)(puVar6 + -2);
      uVar5 = *(undefined4 *)((longlong)puVar6 + -0xc);
      *param_2 = *(undefined4 *)(puVar6 + -3);
      param_2[1] = uVar3;
      param_2[2] = uVar4;
      param_2[3] = uVar5;
      puVar1 = (undefined8 *)(param_2 + 6);
      param_2[4] = *(undefined4 *)(puVar6 + -1);
      if (puVar1 != puVar6) {
        iVar2 = *(int *)(puVar6 + 1);
        _Src = (void *)*puVar6;
        param_2[8] = iVar2;
        if ((iVar2 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          FUN_1405d62d0(puVar1,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x14);
        }
      }
      puVar6 = puVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141456860 Copy body=173 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FGroupRewardPreview>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int iVar1;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar1 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar1;
      if ((iVar1 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar1);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar1 << 3);
      }
    }
    TArray<FName,TSizedDefaultAllocator<32>_>::operator=(param_2 + 2,param_3 + 2);
    param_3 = param_3 + 4;
    param_2 = param_2 + 4;
  }
  return 1;
}



// FUNCTION 141456980 FUN_141456980 body=315 status=ok
// SIG undefined FUN_141456980(void)

undefined8 FUN_141456980(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0xb8);
    do {
      FUN_1414559f0(param_2,plVar6 + -0x17);
      plVar4 = (longlong *)(param_2 + 0xb8);
      *(longlong *)(param_2 + 0xb0) = plVar6[-1];
      if (plVar4 != plVar6) {
        iVar5 = (int)plVar6[1];
        lVar3 = *plVar6;
        *(int *)(param_2 + 0xc0) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0xc4) == 0)) {
          *(undefined4 *)(param_2 + 0xc4) = 0;
        }
        else {
          TArray<FDragonData_FootData,FDefaultAllocator>::ResizeForCopy(plVar4,iVar5);
          puVar7 = (undefined4 *)*plVar4;
          if (iVar5 != 0) {
            plVar4 = (longlong *)(lVar3 + 0x10);
            plVar2 = (longlong *)(puVar7 + 6);
            do {
              *puVar7 = 0xffffffff;
              *(undefined8 *)((longlong)plVar2 + -0x14) = 0xffffffffffffffff;
              plVar2[-1] = 0;
              *plVar2 = 0;
              plVar2[-1] = *plVar4;
              lVar3 = 0;
              if (*plVar4 != 0) {
                lVar3 = plVar4[1];
              }
              *plVar2 = lVar3;
              puVar7 = puVar7 + 0xe;
              plVar2[1] = plVar4[2];
              plVar2[2] = plVar4[3];
              plVar1 = plVar4 + 4;
              plVar4 = plVar4 + 7;
              *(char *)(plVar2 + 3) = (char)*plVar1;
              plVar2 = plVar2 + 7;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      plVar6 = plVar6 + 0x19;
      param_4 = param_4 + -1;
      param_2 = param_2 + 200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141456b10 FUN_141456b10 body=255 status=ok
// SIG undefined FUN_141456b10(void)

undefined8 FUN_141456b10(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0xb8);
    do {
      FUN_1414559f0(param_2,plVar6 + -0x17);
      plVar1 = (longlong *)(param_2 + 0xb8);
      *(longlong *)(param_2 + 0xb0) = plVar6[-1];
      if (plVar1 != plVar6) {
        iVar5 = (int)plVar6[1];
        lVar2 = *plVar6;
        *(int *)(param_2 + 0xc0) = iVar5;
        if ((iVar5 == 0) && (*(int *)(param_2 + 0xc4) == 0)) {
          *(undefined4 *)(param_2 + 0xc4) = 0;
        }
        else {
          TArray<SWaapiPickerRow::KeyValueArgs,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          puVar3 = (undefined8 *)*plVar1;
          if (iVar5 != 0) {
            puVar4 = (undefined8 *)(lVar2 + 0x18);
            do {
              *puVar3 = 0xffffffffffffffff;
              *(undefined4 *)(puVar3 + 1) = 0xffffffff;
              puVar3[2] = puVar4[-1];
              puVar3[3] = *puVar4;
              puVar3 = puVar3 + 4;
              iVar5 = iVar5 + -1;
              puVar4 = puVar4 + 4;
            } while (iVar5 != 0);
          }
        }
      }
      plVar6 = plVar6 + 0x19;
      param_4 = param_4 + -1;
      param_2 = param_2 + 200;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141456c10 FUN_141456c10 body=61 status=ok
// SIG undefined FUN_141456c10(void)

void FUN_141456c10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468960d0);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 141456c50 Destruct body=47 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FVoxelMagicaVoxSceneEntry>::Destruct
               (undefined8 param_1,longlong *param_2)

{
  if (param_2[10] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141456c90 FUN_141456c90 body=92 status=ok
// SIG undefined FUN_141456c90(void)

void FUN_141456c90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0x10);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1);
      lVar1 = lVar1 + 0x20;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_2 + 8);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141456cf0 FUN_141456cf0 body=55 status=ok
// SIG undefined FUN_141456cf0(void)

void FUN_141456cf0(void)

{
  undefined8 uVar1;
  
  if (DAT_146895c60 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895c60 = GetStaticEnum(FUN_141457fd0,uVar1,L"ESkillItemDisplayType");
  }
  return;
}



// FUNCTION 141456d30 FUN_141456d30 body=55 status=ok
// SIG undefined FUN_141456d30(void)

void FUN_141456d30(void)

{
  undefined8 uVar1;
  
  if (DAT_146895c50 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895c50 = GetStaticEnum(FUN_141458000,uVar1,L"ESkillItemLayoutInfo");
  }
  return;
}



// FUNCTION 141456d70 FUN_141456d70 body=55 status=ok
// SIG undefined FUN_141456d70(void)

void FUN_141456d70(void)

{
  undefined8 uVar1;
  
  if (DAT_146895c58 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146895c58 = GetStaticEnum(FUN_141458030,uVar1,L"ESkillItemRealType");
  }
  return;
}



// FUNCTION 141456db0 FUN_141456db0 body=85 status=ok
// SIG undefined FUN_141456db0(void)

undefined8 FUN_141456db0(void)

{
  LowLevelFatalErrorHandler
            ("..\\..\\OakGame\\Source\\OakGame/Public/Abilities/OakPlayerAbilityTreeItemData.h",0x7a
             ,L"Pure virtual not implemented (%s)",
             L"UOakPlayerAbilityTreeItemData_GbxDataAsset::GetDataAsset");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "..\\..\\OakGame\\Source\\OakGame/Public/Abilities/OakPlayerAbilityTreeItemData.h",0x7a
             ,L"Pure virtual not implemented (%s)",
             L"UOakPlayerAbilityTreeItemData_GbxDataAsset::GetDataAsset");
  return 0;
}



// FUNCTION 141456e10 GetDesc body=37 status=ok
// SIG undefined GetDesc(void)

undefined8 UClass::GetDesc(longlong param_1,undefined8 param_2)

{
  undefined8 local_res8 [4];
  
  local_res8[0] = *(undefined8 *)(param_1 + 0x18);
  FName::ToString(local_res8);
  return param_2;
}



// FUNCTION 141456e60 FUN_141456e60 body=6 status=ok
// SIG undefined FUN_141456e60(void)

undefined8 FUN_141456e60(void)

{
  return 0x22751203;
}



// FUNCTION 141456e70 FUN_141456e70 body=6 status=ok
// SIG undefined FUN_141456e70(void)

undefined8 FUN_141456e70(void)

{
  return 0xc2e1dff1;
}



// FUNCTION 141456e80 FUN_141456e80 body=6 status=ok
// SIG undefined FUN_141456e80(void)

undefined8 FUN_141456e80(void)

{
  return 0x7da026b7;
}



// FUNCTION 141456e90 FUN_141456e90 body=6 status=ok
// SIG undefined FUN_141456e90(void)

undefined8 FUN_141456e90(void)

{
  return 0x440fc114;
}



// FUNCTION 141456ea0 FUN_141456ea0 body=6 status=ok
// SIG undefined FUN_141456ea0(void)

undefined8 FUN_141456ea0(void)

{
  return 0xcc7b21d1;
}



// FUNCTION 141456eb0 FUN_141456eb0 body=6 status=ok
// SIG undefined FUN_141456eb0(void)

undefined8 FUN_141456eb0(void)

{
  return 0xda048dfb;
}



// FUNCTION 141456ec0 FUN_141456ec0 body=6 status=ok
// SIG undefined FUN_141456ec0(void)

undefined8 FUN_141456ec0(void)

{
  return 0xcdaff1b3;
}



// FUNCTION 141456ed0 FUN_141456ed0 body=6 status=ok
// SIG undefined FUN_141456ed0(void)

undefined8 FUN_141456ed0(void)

{
  return 0x5981427;
}



// FUNCTION 141456ee0 FUN_141456ee0 body=6 status=ok
// SIG undefined FUN_141456ee0(void)

undefined8 FUN_141456ee0(void)

{
  return 0xef26f1b2;
}



// FUNCTION 141456ef0 FUN_141456ef0 body=6 status=ok
// SIG undefined FUN_141456ef0(void)

undefined8 FUN_141456ef0(void)

{
  return 0xf9ed65ae;
}



// FUNCTION 141456f00 FUN_141456f00 body=6 status=ok
// SIG undefined FUN_141456f00(void)

undefined8 FUN_141456f00(void)

{
  return 0xeb9fcde1;
}



// FUNCTION 141456f10 FUN_141456f10 body=6 status=ok
// SIG undefined FUN_141456f10(void)

undefined8 FUN_141456f10(void)

{
  return 0x40b0174c;
}



// FUNCTION 141456f20 FUN_141456f20 body=6 status=ok
// SIG undefined FUN_141456f20(void)

undefined8 FUN_141456f20(void)

{
  return 0xd48b3acd;
}



// FUNCTION 141456f30 FUN_141456f30 body=6 status=ok
// SIG undefined FUN_141456f30(void)

undefined8 FUN_141456f30(void)

{
  return 0x15a0d3a7;
}



// FUNCTION 141456f40 FUN_141456f40 body=6 status=ok
// SIG undefined FUN_141456f40(void)

undefined8 FUN_141456f40(void)

{
  return 0x6d6596c3;
}



// FUNCTION 141456f50 FUN_141456f50 body=6 status=ok
// SIG undefined FUN_141456f50(void)

undefined8 FUN_141456f50(void)

{
  return 0x507d8b81;
}



// FUNCTION 141456f60 FUN_141456f60 body=6 status=ok
// SIG undefined FUN_141456f60(void)

undefined8 FUN_141456f60(void)

{
  return 0x9b407e09;
}



// FUNCTION 141456f70 FUN_141456f70 body=6 status=ok
// SIG undefined FUN_141456f70(void)

undefined8 FUN_141456f70(void)

{
  return 0xd923719f;
}



// FUNCTION 141456f80 FUN_141456f80 body=6 status=ok
// SIG undefined FUN_141456f80(void)

undefined8 FUN_141456f80(void)

{
  return 0x1ce0b232;
}



// FUNCTION 141456f90 FUN_141456f90 body=60 status=ok
// SIG undefined FUN_141456f90(void)

void FUN_141456f90(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined4 local_res10 [6];
  
  lVar1 = *param_1;
  local_res10[0] = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_1468960d8);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,local_res10);
  return;
}



// FUNCTION 141457010 FUN_141457010 body=57 status=ok
// SIG undefined FUN_141457010(void)

void FUN_141457010(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146896080);
                    /* WARNING: Could not recover jumptable at 0x000141457046. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,0);
  return;
}



// FUNCTION 141457050 RemoveAtSwapImpl body=153 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FAISightQuery,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x28),
                 (void *)(*param_1 + (longlong)(iVar2 - iVar1) * 0x28),(longlong)iVar1 * 0x28);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 1414570f0 RemoveAtSwapImpl body=144 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<Chaos::TPayloadBoundsElement<int,double>,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x38 + *param_1),
                 (void *)((longlong)(iVar2 - iVar1) * 0x38 + *param_1),(longlong)iVar1 * 0x38);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      FUN_1414572d0(param_1);
    }
  }
  return;
}



// FUNCTION 141457180 RemoveAtSwapImpl body=147 status=ok
// SIG undefined RemoveAtSwapImpl(void)

void TArray<FSegmentEntry,FDefaultAllocator>::RemoveAtSwapImpl
               (longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    iVar2 = (int)param_1[1];
    iVar1 = (iVar2 - param_2) - param_3;
    if (param_3 <= iVar1) {
      iVar1 = param_3;
    }
    if (iVar1 != 0) {
      ::_guard_xfg_dispatch_icall_nop
                ((void *)((longlong)param_2 * 0x20 + *param_1),
                 (void *)((longlong)(iVar2 - iVar1) * 0x20 + *param_1),(longlong)iVar1 << 5);
      iVar2 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar2 - param_3;
    if (param_4 != '\0') {
      TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 141457220 ResizeShrink body=168 status=ok
// SIG undefined ResizeShrink(void)

ulonglong TArray<FCapturedPropSegment,FDefaultAllocator>::ResizeShrink(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar5 - iVar4);
  if ((0x3fff < uVar2 * 0x28) || (uVar2 = (ulonglong)(uint)(iVar5 * 2), iVar4 * 3 < iVar5 * 2)) {
    if (0x40 < (uint)(iVar5 - iVar4)) {
      if (0 < iVar4) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar4 * 0x28,0);
        iVar5 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        uVar2 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar1,0);
        iVar4 = (int)(uVar3 / 0x28);
      }
      goto LAB_141457296;
    }
    if (iVar4 == 0) goto LAB_141457296;
  }
  iVar4 = iVar5;
LAB_141457296:
  if (iVar4 != iVar5) {
    *(int *)((longlong)param_1 + 0xc) = iVar4;
    if ((*param_1 != 0) || (iVar4 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x28,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 1414572d0 FUN_1414572d0 body=162 status=ok
// SIG undefined FUN_1414572d0(void)

ulonglong FUN_1414572d0(ulonglong *param_1)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)((longlong)param_1 + 0xc);
  iVar5 = (int)param_1[1];
  uVar2 = (ulonglong)(iVar6 - iVar5);
  if ((0x3fff < uVar2 * 0x38) || (uVar2 = (ulonglong)(uint)(iVar6 * 2), iVar5 * 3 < iVar6 * 2)) {
    if (0x40 < (uint)(iVar6 - iVar5)) {
      if (0 < iVar5) {
        uVar3 = FMemory::QuantizeSize((longlong)iVar5 * 0x38,0);
        iVar6 = *(int *)((longlong)param_1 + 0xc);
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar3;
        lVar4 = SUB168(ZEXT816(0x2492492492492493) * auVar1,8);
        uVar2 = SUB168(ZEXT816(0x2492492492492493) * auVar1,0);
        iVar5 = (int)((uVar3 - lVar4 >> 1) + lVar4 >> 5);
      }
      goto LAB_141457344;
    }
    if (iVar5 == 0) goto LAB_141457344;
  }
  iVar5 = iVar6;
LAB_141457344:
  if (iVar5 != iVar6) {
    *(int *)((longlong)param_1 + 0xc) = iVar5;
    if ((*param_1 != 0) || (iVar5 != 0)) {
      uVar2 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0x38,0);
      *param_1 = uVar2;
    }
  }
  return uVar2;
}



// FUNCTION 141457380 ResizeShrink body=137 status=ok
// SIG undefined ResizeShrink(void)

void TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink(longlong *param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)((longlong)param_1 + 0xc);
  iVar3 = (int)param_1[1];
  if ((0x3fff < (ulonglong)((longlong)(iVar4 - iVar3) << 5)) || (iVar3 * 3 < iVar4 * 2)) {
    if (0x40 < (uint)(iVar4 - iVar3)) {
      if (0 < iVar3) {
        uVar1 = FMemory::QuantizeSize((longlong)iVar3 << 5,0);
        iVar4 = *(int *)((longlong)param_1 + 0xc);
        iVar3 = (int)(uVar1 >> 5);
      }
      goto LAB_1414573dd;
    }
    if (iVar3 == 0) goto LAB_1414573dd;
  }
  iVar3 = iVar4;
LAB_1414573dd:
  if (iVar3 != iVar4) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 << 5,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 141457410 FUN_141457410 body=66 status=ok
// SIG undefined FUN_141457410(void)

void FUN_141457410(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined8 local_10;
  
  lVar1 = *param_1;
  local_18 = param_2;
  local_10 = param_3;
  uVar2 = FUN_14178ac60(param_1,DAT_146896088);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  return;
}



// FUNCTION 141457460 FUN_141457460 body=71 status=ok
// SIG undefined FUN_141457460(void)

void FUN_141457460(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  local_28 = param_2;
  local_20 = param_3;
  local_18 = param_4;
  uVar2 = FUN_14178ac60(param_1,DAT_146896090);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  return;
}



// FUNCTION 1414574c0 FUN_1414574c0 body=34 status=ok
// SIG undefined FUN_1414574c0(void)

void FUN_1414574c0(void)

{
  undefined8 uVar1;
  
  uVar1 = AGFireballProjectile::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanAugmentBeUsed_144ad29b0,0x15);
  return;
}



// FUNCTION 1414574f0 FUN_1414574f0 body=34 status=ok
// SIG undefined FUN_1414574f0(void)

void FUN_1414574f0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14144e580();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_QueryAllies_144ad3820,1);
  return;
}



// FUNCTION 141457520 FUN_141457520 body=34 status=ok
// SIG undefined FUN_141457520(void)

void FUN_141457520(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14144ea90();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddPointToAbilityTreeItem_144ad3b40,6);
  return;
}



// FUNCTION 141457550 FUN_141457550 body=82 status=ok
// SIG undefined FUN_141457550(void)

void FUN_141457550(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896350 == 0) {
    uVar1 = FUN_141456e60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896350 = GetStaticStruct(FUN_141458060,uVar2,L"AbilityTreeBranch",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414575b0 FUN_1414575b0 body=82 status=ok
// SIG undefined FUN_1414575b0(void)

void FUN_1414575b0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896330 == 0) {
    uVar1 = FUN_141456e70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896330 = GetStaticStruct(FUN_141458090,uVar2,L"AbilityTreeItem",0x30,uVar1);
  }
  return;
}



// FUNCTION 141457610 FUN_141457610 body=82 status=ok
// SIG undefined FUN_141457610(void)

void FUN_141457610(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896340 == 0) {
    uVar1 = FUN_141456e80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896340 = GetStaticStruct(FUN_1414580c0,uVar2,L"AbilityTreeTier",0x38,uVar1);
  }
  return;
}



// FUNCTION 141457670 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventRepeaterTemplate::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468963a0 == 0) {
    uVar1 = FUN_141456e90();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468963a0 = GetStaticStruct(FUN_1414580f0,uVar2,L"BranchColorInfo",0x60,uVar1);
  }
  return;
}



// FUNCTION 1414576d0 FUN_1414576d0 body=82 status=ok
// SIG undefined FUN_1414576d0(void)

void FUN_1414576d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468962b8 == 0) {
    uVar1 = FUN_141456ea0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468962b8 = GetStaticStruct(FUN_14144e2c0,uVar2,L"OakAbilitySlot",0x14,uVar1);
  }
  return;
}



// FUNCTION 141457730 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896218 == 0) {
    uVar1 = FUN_141456ec0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896218 =
         GetStaticStruct(FUN_141458120,uVar2,L"OakActionAbilityAugmentConfiguration",0x18,uVar1);
  }
  return;
}



// FUNCTION 141457790 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896228 == 0) {
    uVar1 = FUN_141456eb0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896228 =
         GetStaticStruct(FUN_141458150,uVar2,L"OakActionAbilityAugmentConfigurationSetting",0x10,
                         uVar1);
  }
  return;
}



// FUNCTION 1414577f0 FUN_1414577f0 body=82 status=ok
// SIG undefined FUN_1414577f0(void)

void FUN_1414577f0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896248 == 0) {
    uVar1 = FUN_141456f00();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896248 = GetStaticStruct(FUN_141458180,uVar2,L"OakActionAbilityAugmentSlot",0x28,uVar1);
  }
  return;
}



// FUNCTION 141457850 FUN_141457850 body=82 status=ok
// SIG undefined FUN_141457850(void)

void FUN_141457850(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896208 == 0) {
    uVar1 = FUN_141456ee0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896208 =
         GetStaticStruct(FUN_1414581b0,uVar2,L"OakActionAbilityAugmentSlotConfiguration",0x20,uVar1)
    ;
  }
  return;
}



// FUNCTION 1414578b0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneActorReferenceKey::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468961f8 == 0) {
    uVar1 = FUN_141456ed0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468961f8 =
         GetStaticStruct(FUN_1414581e0,uVar2,L"OakActionAbilityAugmentSlotConfigurationList",0x18,
                         uVar1);
  }
  return;
}



// FUNCTION 141457910 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896238 == 0) {
    uVar1 = FUN_141456ef0();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896238 =
         GetStaticStruct(FUN_141458210,uVar2,L"OakActionAbilityAugmentSlotList",200,uVar1);
  }
  return;
}



// FUNCTION 141457970 FUN_141457970 body=82 status=ok
// SIG undefined FUN_141457970(void)

void FUN_141457970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468962a8 == 0) {
    uVar1 = FUN_141456f10();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468962a8 = GetStaticStruct(FUN_141458240,uVar2,L"OakActionAbilitySlot",0x28,uVar1);
  }
  return;
}



// FUNCTION 1414579d0 FUN_1414579d0 body=82 status=ok
// SIG undefined FUN_1414579d0(void)

void FUN_1414579d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468962d8 == 0) {
    uVar1 = FUN_141456f20();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468962d8 =
         GetStaticStruct(FUN_141458270,uVar2,L"OakPlayerAbilityAllyQueryResult",0x20,uVar1);
  }
  return;
}



// FUNCTION 141457a30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEventPayloadVariable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468962e8 == 0) {
    uVar1 = FUN_141456f30();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_1468962e8 = GetStaticStruct(FUN_1414582a0,uVar2,L"OakPlayerAbilityAllyQuerySpec",0x10,uVar1)
    ;
  }
  return;
}



// FUNCTION 141457a90 FUN_141457a90 body=82 status=ok
// SIG undefined FUN_141457a90(void)

void FUN_141457a90(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896288 == 0) {
    uVar1 = FUN_141456f60();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896288 = GetStaticStruct(FUN_1414582d0,uVar2,L"OakPlayerAbilityHUDItem",0x38,uVar1);
  }
  return;
}



// FUNCTION 141457af0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896278 == 0) {
    uVar1 = FUN_141456f40();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896278 = GetStaticStruct(FUN_141458300,uVar2,L"OakPlayerAbilityHUDItemList",200,uVar1);
  }
  return;
}



// FUNCTION 141457b50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneEvent::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896100 == 0) {
    uVar1 = FUN_141456f50();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896100 = GetStaticStruct(FUN_141458330,uVar2,L"OakPlayerAbilityHUDItemValue",8,uVar1);
  }
  return;
}



// FUNCTION 141457bb0 FUN_141457bb0 body=82 status=ok
// SIG undefined FUN_141457bb0(void)

void FUN_141457bb0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896268 == 0) {
    uVar1 = FUN_141456f80();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896268 = GetStaticStruct(FUN_141458360,uVar2,L"OakPlayerAbilitySlot",0x20,uVar1);
  }
  return;
}



// FUNCTION 141457c10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSkeletalAnimationParams::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146896258 == 0) {
    uVar1 = FUN_141456f70();
    uVar2 = Z_Construct_UPackage__Script_MechWarrior();
    DAT_146896258 = GetStaticStruct(FUN_141458390,uVar2,L"OakPlayerAbilitySlotList",200,uVar1);
  }
  return;
}



// FUNCTION 141457c70 FUN_141457c70 body=47 status=ok
// SIG undefined FUN_141457c70(void)

longlong FUN_141457c70(void)

{
  if (DAT_1468960f0 == 0) {
    FUN_141786440(&DAT_1468960f0,&PTR_GetPrivateStaticClass_144acfd40);
  }
  return DAT_1468960f0;
}



// FUNCTION 141457ca0 FUN_141457ca0 body=47 status=ok
// SIG undefined FUN_141457ca0(void)

longlong FUN_141457ca0(void)

{
  if (DAT_146896110 == 0) {
    FUN_141786440(&DAT_146896110,&PTR_GetPrivateStaticClass_144ad0550);
  }
  return DAT_146896110;
}



// FUNCTION 141457cd0 FUN_141457cd0 body=47 status=ok
// SIG undefined FUN_141457cd0(void)

longlong FUN_141457cd0(void)

{
  if (DAT_146896298 == 0) {
    FUN_141786440(&DAT_146896298,&PTR_GetPrivateStaticClass_144acbd60);
  }
  return DAT_146896298;
}



// FUNCTION 141457d00 FUN_141457d00 body=47 status=ok
// SIG undefined FUN_141457d00(void)

longlong FUN_141457d00(void)

{
  if (DAT_1468962c8 == 0) {
    FUN_141786440(&DAT_1468962c8,&PTR_FUN_144acd640);
  }
  return DAT_1468962c8;
}



// FUNCTION 141457d30 FUN_141457d30 body=47 status=ok
// SIG undefined FUN_141457d30(void)

longlong FUN_141457d30(void)

{
  if (DAT_1468963b0 == 0) {
    FUN_141786440(&DAT_1468963b0,&PTR_FUN_144ad06b0);
  }
  return DAT_1468963b0;
}



// FUNCTION 141457d60 FUN_141457d60 body=47 status=ok
// SIG undefined FUN_141457d60(void)

longlong FUN_141457d60(void)

{
  if (DAT_1468963c0 == 0) {
    FUN_141786440(&DAT_1468963c0,&PTR_FUN_144ad0930);
  }
  return DAT_1468963c0;
}



// FUNCTION 141457d90 FUN_141457d90 body=47 status=ok
// SIG undefined FUN_141457d90(void)

longlong FUN_141457d90(void)

{
  if (DAT_1468963f8 == 0) {
    FUN_141786440(&DAT_1468963f8,&PTR_FUN_144ac46d0);
  }
  return DAT_1468963f8;
}



// FUNCTION 141457dc0 FUN_141457dc0 body=47 status=ok
// SIG undefined FUN_141457dc0(void)

longlong FUN_141457dc0(void)

{
  if (DAT_146896418 == 0) {
    FUN_141786440(&DAT_146896418,&PTR_FUN_144ac4b60);
  }
  return DAT_146896418;
}



// FUNCTION 141457df0 FUN_141457df0 body=47 status=ok
// SIG undefined FUN_141457df0(void)

longlong FUN_141457df0(void)

{
  if (DAT_146896428 == 0) {
    FUN_141786440(&DAT_146896428,&PTR_FUN_144ac4db0);
  }
  return DAT_146896428;
}



// FUNCTION 141457e20 FUN_141457e20 body=47 status=ok
// SIG undefined FUN_141457e20(void)

longlong FUN_141457e20(void)

{
  if (DAT_146896438 == 0) {
    FUN_141786440(&DAT_146896438,&PTR_FUN_144ac5040);
  }
  return DAT_146896438;
}



// FUNCTION 141457e50 FUN_141457e50 body=47 status=ok
// SIG undefined FUN_141457e50(void)

longlong FUN_141457e50(void)

{
  if (DAT_146896320 == 0) {
    FUN_141786a30(&DAT_146896320,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6b80);
  }
  return DAT_146896320;
}



// FUNCTION 141457e80 FUN_141457e80 body=47 status=ok
// SIG undefined FUN_141457e80(void)

longlong FUN_141457e80(void)

{
  if (DAT_146896128 == 0) {
    FUN_141786a30(&DAT_146896128,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f4060);
  }
  return DAT_146896128;
}



// FUNCTION 141457eb0 FUN_141457eb0 body=47 status=ok
// SIG undefined FUN_141457eb0(void)

longlong FUN_141457eb0(void)

{
  if (DAT_146896120 == 0) {
    FUN_141786a30(&DAT_146896120,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f3f90);
  }
  return DAT_146896120;
}



// FUNCTION 141457ee0 FUN_141457ee0 body=47 status=ok
// SIG undefined FUN_141457ee0(void)

longlong FUN_141457ee0(void)

{
  if (DAT_146896328 == 0) {
    FUN_141786a30(&DAT_146896328,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6bc0);
  }
  return DAT_146896328;
}



// FUNCTION 141457f10 FUN_141457f10 body=47 status=ok
// SIG undefined FUN_141457f10(void)

longlong FUN_141457f10(void)

{
  if (DAT_146896138 == 0) {
    FUN_141786a30(&DAT_146896138,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f4160);
  }
  return DAT_146896138;
}



// FUNCTION 141457f40 FUN_141457f40 body=47 status=ok
// SIG undefined FUN_141457f40(void)

longlong FUN_141457f40(void)

{
  if (DAT_146896318 == 0) {
    FUN_141786a30(&DAT_146896318,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6b00);
  }
  return DAT_146896318;
}



// FUNCTION 141457f70 FUN_141457f70 body=47 status=ok
// SIG undefined FUN_141457f70(void)

longlong FUN_141457f70(void)

{
  if (DAT_146896310 == 0) {
    FUN_141786a30(&DAT_146896310,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6a80);
  }
  return DAT_146896310;
}



// FUNCTION 141457fa0 FUN_141457fa0 body=47 status=ok
// SIG undefined FUN_141457fa0(void)

longlong FUN_141457fa0(void)

{
  if (DAT_146896130 == 0) {
    FUN_141786a30(&DAT_146896130,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f40e0);
  }
  return DAT_146896130;
}



// FUNCTION 141457fd0 FUN_141457fd0 body=47 status=ok
// SIG undefined FUN_141457fd0(void)

longlong FUN_141457fd0(void)

{
  if (DAT_1468963d8 == 0) {
    FUN_1417866a0(&DAT_1468963d8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f7fc0);
  }
  return DAT_1468963d8;
}



// FUNCTION 141458000 FUN_141458000 body=47 status=ok
// SIG undefined FUN_141458000(void)

longlong FUN_141458000(void)

{
  if (DAT_1468963e0 == 0) {
    FUN_1417866a0(&DAT_1468963e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f8010);
  }
  return DAT_1468963e0;
}



// FUNCTION 141458030 FUN_141458030 body=47 status=ok
// SIG undefined FUN_141458030(void)

longlong FUN_141458030(void)

{
  if (DAT_1468963d0 == 0) {
    FUN_1417866a0(&DAT_1468963d0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f7f70);
  }
  return DAT_1468963d0;
}



// FUNCTION 141458060 FUN_141458060 body=47 status=ok
// SIG undefined FUN_141458060(void)

longlong FUN_141458060(void)

{
  if (DAT_146896358 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896358,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6e20);
  }
  return DAT_146896358;
}



// FUNCTION 141458090 FUN_141458090 body=47 status=ok
// SIG undefined FUN_141458090(void)

longlong FUN_141458090(void)

{
  if (DAT_146896338 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896338,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6c80);
  }
  return DAT_146896338;
}



// FUNCTION 1414580c0 FUN_1414580c0 body=47 status=ok
// SIG undefined FUN_1414580c0(void)

longlong FUN_1414580c0(void)

{
  if (DAT_146896348 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896348,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6d50);
  }
  return DAT_146896348;
}



// FUNCTION 1414580f0 FUN_1414580f0 body=47 status=ok
// SIG undefined FUN_1414580f0(void)

longlong FUN_1414580f0(void)

{
  if (DAT_1468963a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468963a8,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f7860);
  }
  return DAT_1468963a8;
}



// FUNCTION 141458120 FUN_141458120 body=47 status=ok
// SIG undefined FUN_141458120(void)

longlong FUN_141458120(void)

{
  if (DAT_146896220 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896220,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5ac0);
  }
  return DAT_146896220;
}



// FUNCTION 141458150 FUN_141458150 body=47 status=ok
// SIG undefined FUN_141458150(void)

longlong FUN_141458150(void)

{
  if (DAT_146896230 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896230,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5b90);
  }
  return DAT_146896230;
}



// FUNCTION 141458180 FUN_141458180 body=47 status=ok
// SIG undefined FUN_141458180(void)

longlong FUN_141458180(void)

{
  if (DAT_146896250 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896250,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5db0);
  }
  return DAT_146896250;
}



// FUNCTION 1414581b0 FUN_1414581b0 body=47 status=ok
// SIG undefined FUN_1414581b0(void)

longlong FUN_1414581b0(void)

{
  if (DAT_146896210 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896210,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f59c0);
  }
  return DAT_146896210;
}



// FUNCTION 1414581e0 FUN_1414581e0 body=47 status=ok
// SIG undefined FUN_1414581e0(void)

longlong FUN_1414581e0(void)

{
  if (DAT_146896200 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896200,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5870);
  }
  return DAT_146896200;
}



// FUNCTION 141458210 FUN_141458210 body=47 status=ok
// SIG undefined FUN_141458210(void)

longlong FUN_141458210(void)

{
  if (DAT_146896240 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896240,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5c90);
  }
  return DAT_146896240;
}



// FUNCTION 141458240 FUN_141458240 body=47 status=ok
// SIG undefined FUN_141458240(void)

longlong FUN_141458240(void)

{
  if (DAT_1468962b0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468962b0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6470);
  }
  return DAT_1468962b0;
}



// FUNCTION 141458270 FUN_141458270 body=47 status=ok
// SIG undefined FUN_141458270(void)

longlong FUN_141458270(void)

{
  if (DAT_1468962e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468962e0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f67a0);
  }
  return DAT_1468962e0;
}



// FUNCTION 1414582a0 FUN_1414582a0 body=47 status=ok
// SIG undefined FUN_1414582a0(void)

longlong FUN_1414582a0(void)

{
  if (DAT_1468962f0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468962f0,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f68c0);
  }
  return DAT_1468962f0;
}



// FUNCTION 1414582d0 FUN_1414582d0 body=47 status=ok
// SIG undefined FUN_1414582d0(void)

longlong FUN_1414582d0(void)

{
  if (DAT_146896290 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896290,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f61a0);
  }
  return DAT_146896290;
}



// FUNCTION 141458300 FUN_141458300 body=47 status=ok
// SIG undefined FUN_141458300(void)

longlong FUN_141458300(void)

{
  if (DAT_146896280 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896280,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f6090);
  }
  return DAT_146896280;
}



// FUNCTION 141458330 FUN_141458330 body=47 status=ok
// SIG undefined FUN_141458330(void)

longlong FUN_141458330(void)

{
  if (DAT_146896108 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896108,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f3e00);
  }
  return DAT_146896108;
}



// FUNCTION 141458360 FUN_141458360 body=47 status=ok
// SIG undefined FUN_141458360(void)

longlong FUN_141458360(void)

{
  if (DAT_146896270 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896270,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5f90);
  }
  return DAT_146896270;
}



// FUNCTION 141458390 FUN_141458390 body=47 status=ok
// SIG undefined FUN_141458390(void)

longlong FUN_141458390(void)

{
  if (DAT_146896260 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146896260,&PTR_Z_Construct_UPackage__Script_MechWarrior_1463f5eb0);
  }
  return DAT_146896260;
}



// FUNCTION 1414583c0 FUN_1414583c0 body=181 status=ok
// SIG undefined FUN_1414583c0(void)

void FUN_1414583c0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x2a8))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"AddPointToAbilityTreeItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x2b0))(param_1,local_res8);
  return;
}



// FUNCTION 141458480 FUN_141458480 body=143 status=ok
// SIG undefined FUN_141458480(void)

void FUN_141458480(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1409a1e90(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458510 execOnlyLoadLevel body=132 status=ok
// SIG undefined execOnlyLoadLevel(void)

void UCheatManager::execOnlyLoadLevel(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,local_res8);
  return;
}



// FUNCTION 1414585a0 FUN_1414585a0 body=312 status=ok
// SIG undefined FUN_1414585a0(void)

void FUN_1414585a0(longlong *param_1,longlong param_2)

{
  undefined8 local_res8;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_28 [2];
  
  local_28[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
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
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x418))(param_1,local_28[0],local_res20,local_res10[0],local_res8);
  return;
}



// FUNCTION 141458700 execDebugRemovePlayer body=130 status=ok
// SIG undefined execDebugRemovePlayer(void)

void UGameInstance::execDebugRemovePlayer(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x278))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141458790 FUN_141458790 body=181 status=ok
// SIG undefined FUN_141458790(void)

void FUN_141458790(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x288))(param_1,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"DEBUG_AddPointToAbilityTreeItem_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x290))(param_1,local_res8);
  return;
}



// FUNCTION 141458850 FUN_141458850 body=144 status=ok
// SIG undefined FUN_141458850(void)

void FUN_141458850(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1409a6100(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414588e0 FUN_1414588e0 body=191 status=ok
// SIG undefined FUN_1414588e0(void)

void FUN_1414588e0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_1409a72d0(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1414589a0 FUN_1414589a0 body=144 status=ok
// SIG undefined FUN_1414589a0(void)

void FUN_1414589a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1409a7300(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458a30 FUN_141458a30 body=144 status=ok
// SIG undefined FUN_141458a30(void)

void FUN_141458a30(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1409ab3b0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458ac0 execMontage_GetCurrentSection body=136 status=ok
// SIG undefined execMontage_GetCurrentSection(void)

void UAnimInstance::execMontage_GetCurrentSection
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 local_res10;
  undefined1 local_res18 [16];
  
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
  puVar1 = (undefined8 *)FUN_1409ab480(param_1,local_res18,local_res10);
  *param_3 = *puVar1;
  return;
}



// FUNCTION 141458b50 FUN_141458b50 body=178 status=ok
// SIG undefined FUN_141458b50(void)

void FUN_141458b50(longlong *param_1,longlong param_2)

{
  char cVar1;
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
  cVar1 = (**(code **)(*param_1 + 0x298))(param_1,local_res8[0]);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"GiveAbilityPoints_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x2a0))(param_1,local_res8[0]);
  return;
}



// FUNCTION 141458c10 FUN_141458c10 body=143 status=ok
// SIG undefined FUN_141458c10(void)

void FUN_141458c10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1409acda0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458ca0 FUN_141458ca0 body=253 status=ok
// SIG undefined FUN_141458ca0(void)

void FUN_141458ca0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  
  local_res20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res20);
  }
  local_res18 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res18);
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
  uVar1 = FUN_1409ae0e0(param_1,local_res20,local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458da0 FUN_141458da0 body=190 status=ok
// SIG undefined FUN_141458da0(void)

void FUN_141458da0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 local_res10;
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_1409ae120(param_1,local_res18[0],local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458e60 FUN_141458e60 body=143 status=ok
// SIG undefined FUN_141458e60(void)

void FUN_141458e60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FUN_1409ae3d0(param_1,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 141458ef0 FUN_141458ef0 body=126 status=ok
// SIG undefined FUN_141458ef0(void)

void FUN_141458ef0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_1409b1330(param_1,local_res10[0]);
  return;
}



// FUNCTION 141458f70 FUN_141458f70 body=126 status=ok
// SIG undefined FUN_141458f70(void)

void FUN_141458f70(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  
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
  FUN_1409b1350(param_1,local_res10[0]);
  return;
}



// FUNCTION 141458ff0 FUN_141458ff0 body=188 status=ok
// SIG undefined FUN_141458ff0(void)

void FUN_141458ff0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
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
  FUN_1409b13a0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 1414590f0 FUN_1414590f0 body=78 status=ok
// SIG undefined FUN_1414590f0(void)

void FUN_1414590f0(longlong *param_1,longlong param_2)

{
  char cVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x420))();
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"PurchaseAbilityRespec_Validate");
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141459137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x428))(param_1);
  return;
}



// FUNCTION 141459140 FUN_141459140 body=341 status=ok
// SIG undefined FUN_141459140(void)

void FUN_141459140(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  undefined8 local_res10;
  undefined1 local_38 [9];
  undefined1 local_2f;
  undefined4 local_2c;
  longlong local_28 [2];
  longlong local_18;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_2f = 0;
  local_2c = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar4 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar4 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_1409b53c0(local_28,local_res10,puVar4);
  if (param_3 != plVar1) {
    if (*param_3 != 0) {
      FMemory::Free();
    }
    *param_3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_3 + 1) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_3 + 0xc) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  plVar2 = plVar1 + 2;
  plVar3 = param_3 + 2;
  if (plVar3 != plVar2) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar2;
    *plVar2 = 0;
    *(int *)(param_3 + 3) = (int)plVar1[3];
    *(undefined4 *)((longlong)param_3 + 0x1c) = *(undefined4 *)((longlong)plVar1 + 0x1c);
    plVar1[3] = 0;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1414592a0 FUN_1414592a0 body=249 status=ok
// SIG undefined FUN_1414592a0(void)

void FUN_1414592a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x440))(param_1,local_res10,local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetSlotAbilityClass_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x448))(param_1,local_res10,local_res8);
  return;
}



// FUNCTION 1414593a0 FUN_1414593a0 body=294 status=ok
// SIG undefined FUN_1414593a0(void)

void FUN_1414593a0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 local_res8;
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
  local_res8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  cVar1 = (**(code **)(*param_1 + 0x430))(param_1,local_res20,local_res10[0],local_res8);
  if (cVar1 == '\0') {
    RPC_ValidateFailed(L"SetSlotAugment_Validate");
    return;
  }
  (**(code **)(*param_1 + 0x438))(param_1,local_res20,local_res10[0],local_res8);
  return;
}



// FUNCTION 1414594e0 FUN_1414594e0 body=162 status=ok
// SIG undefined FUN_1414594e0(void)

longlong FUN_1414594e0(void)

{
  if (DAT_146896e10 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakPlayerCameraManager",&DAT_146896e10,FUN_140447710,0x2cf0,
                  0x10000008,0,L"Engine",&LAB_14145d070,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_142fd5420,&LAB_140447700,0);
  }
  return DAT_146896e10;
}



// FUNCTION 141459590 FUN_141459590 body=162 status=ok
// SIG undefined FUN_141459590(void)

longlong FUN_141459590(void)

{
  if (DAT_146896dd0 == 0) {
    FUN_14171ccd0(L"/Script/OakGame",L"OakFirstPersonData",&DAT_146896dd0,FUN_140447710,0xa8,
                  0x10000000,0,L"Engine",FUN_14145d0b0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_1413ae840,0);
  }
  return DAT_146896dd0;
}



// FUNCTION 141459650 FUN_141459650 body=47 status=ok
// SIG undefined FUN_141459650(void)

longlong FUN_141459650(void)

{
  if (DAT_146896df8 == 0) {
    FUN_141786440(&DAT_146896df8,&PTR_LAB_144adf700);
  }
  return DAT_146896df8;
}



// FUNCTION 141459680 FUN_141459680 body=47 status=ok
// SIG undefined FUN_141459680(void)

longlong FUN_141459680(void)

{
  if (DAT_146896dd8 == 0) {
    FUN_141786a30(&DAT_146896dd8,&PTR_FUN_1463f87e0);
  }
  return DAT_146896dd8;
}



// FUNCTION 1414596b0 FUN_1414596b0 body=47 status=ok
// SIG undefined FUN_1414596b0(void)

longlong FUN_1414596b0(void)

{
  if (DAT_146896de0 == 0) {
    FUN_141786a30(&DAT_146896de0,&PTR_FUN_1463f8820);
  }
  return DAT_146896de0;
}



// FUNCTION 1414596e0 FUN_1414596e0 body=47 status=ok
// SIG undefined FUN_1414596e0(void)

longlong FUN_1414596e0(void)

{
  if (DAT_146896de8 == 0) {
    FUN_141786a30(&DAT_146896de8,&PTR_FUN_1463f88f0);
  }
  return DAT_146896de8;
}



// FUNCTION 141459710 FUN_141459710 body=47 status=ok
// SIG undefined FUN_141459710(void)

longlong FUN_141459710(void)

{
  if (DAT_146896df0 == 0) {
    FUN_141786a30(&DAT_146896df0,&PTR_FUN_1463f89c0);
  }
  return DAT_146896df0;
}



// FUNCTION 141459740 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimInstanceProxy_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x6e0;
    *puVar1 = &PTR_FUN_144aed4c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141459780 FUN_141459780 body=53 status=ok
// SIG undefined FUN_141459780(void)

void FUN_141459780(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x68;
    *puVar1 = &PTR_FUN_144aed5d8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 1414597c0 FUN_1414597c0 body=47 status=ok
// SIG undefined FUN_1414597c0(void)

longlong FUN_1414597c0(void)

{
  if (DAT_146896e18 == 0) {
    FUN_141786a30(&DAT_146896e18,&PTR_FUN_1463fb740);
  }
  return DAT_146896e18;
}



// FUNCTION 1414597f0 FUN_1414597f0 body=47 status=ok
// SIG undefined FUN_1414597f0(void)

longlong FUN_1414597f0(void)

{
  if (DAT_146897810 == 0) {
    FUN_141786440(&DAT_146897810,&PTR_thunk_FUN_14145f370_144ae60c0);
  }
  return DAT_146897810;
}



// FUNCTION 141459820 FUN_141459820 body=47 status=ok
// SIG undefined FUN_141459820(void)

longlong FUN_141459820(void)

{
  if (DAT_146896e20 == 0) {
    FUN_141786a30(&DAT_146896e20,&PTR_FUN_1463fb7c0);
  }
  return DAT_146896e20;
}



// FUNCTION 141459850 FUN_141459850 body=47 status=ok
// SIG undefined FUN_141459850(void)

longlong FUN_141459850(void)

{
  if (DAT_146896e28 == 0) {
    FUN_141786a30(&DAT_146896e28,&PTR_FUN_1463fb850);
  }
  return DAT_146896e28;
}



// FUNCTION 141459880 FUN_141459880 body=47 status=ok
// SIG undefined FUN_141459880(void)

longlong FUN_141459880(void)

{
  if (DAT_146896e30 == 0) {
    FUN_141786a30(&DAT_146896e30,&PTR_FUN_1463fb8d0);
  }
  return DAT_146896e30;
}



// FUNCTION 1414598b0 FUN_1414598b0 body=47 status=ok
// SIG undefined FUN_1414598b0(void)

longlong FUN_1414598b0(void)

{
  if (DAT_146896e38 == 0) {
    FUN_141786a30(&DAT_146896e38,&PTR_FUN_1463fb910);
  }
  return DAT_146896e38;
}



// FUNCTION 1414598e0 FUN_1414598e0 body=47 status=ok
// SIG undefined FUN_1414598e0(void)

longlong FUN_1414598e0(void)

{
  if (DAT_146896e40 == 0) {
    FUN_141786a30(&DAT_146896e40,&PTR_FUN_1463fb950);
  }
  return DAT_146896e40;
}



// FUNCTION 141459910 FUN_141459910 body=47 status=ok
// SIG undefined FUN_141459910(void)

longlong FUN_141459910(void)

{
  if (DAT_146896e48 == 0) {
    FUN_141786a30(&DAT_146896e48,&PTR_FUN_1463fb9e0);
  }
  return DAT_146896e48;
}



// FUNCTION 141459940 FUN_141459940 body=47 status=ok
// SIG undefined FUN_141459940(void)

longlong FUN_141459940(void)

{
  if (DAT_146896e50 == 0) {
    FUN_141786a30(&DAT_146896e50,&PTR_FUN_1463fba70);
  }
  return DAT_146896e50;
}



// FUNCTION 141459970 FUN_141459970 body=47 status=ok
// SIG undefined FUN_141459970(void)

longlong FUN_141459970(void)

{
  if (DAT_146896e58 == 0) {
    FUN_141786a30(&DAT_146896e58,&PTR_FUN_1463fbbb0);
  }
  return DAT_146896e58;
}



// FUNCTION 1414599a0 FUN_1414599a0 body=47 status=ok
// SIG undefined FUN_1414599a0(void)

longlong FUN_1414599a0(void)

{
  if (DAT_146896e60 == 0) {
    FUN_141786a30(&DAT_146896e60,&PTR_FUN_1463fbbf0);
  }
  return DAT_146896e60;
}



// FUNCTION 1414599d0 FUN_1414599d0 body=47 status=ok
// SIG undefined FUN_1414599d0(void)

longlong FUN_1414599d0(void)

{
  if (DAT_146896e68 == 0) {
    FUN_141786a30(&DAT_146896e68,&PTR_FUN_1463fbc70);
  }
  return DAT_146896e68;
}



// FUNCTION 141459a00 FUN_141459a00 body=47 status=ok
// SIG undefined FUN_141459a00(void)

longlong FUN_141459a00(void)

{
  if (DAT_146896e70 == 0) {
    FUN_141786a30(&DAT_146896e70,&PTR_FUN_1463fbd30);
  }
  return DAT_146896e70;
}



// FUNCTION 141459a30 FUN_141459a30 body=47 status=ok
// SIG undefined FUN_141459a30(void)

longlong FUN_141459a30(void)

{
  if (DAT_146896e78 == 0) {
    FUN_141786a30(&DAT_146896e78,&PTR_FUN_1463fbdf0);
  }
  return DAT_146896e78;
}



// FUNCTION 141459a60 FUN_141459a60 body=47 status=ok
// SIG undefined FUN_141459a60(void)

longlong FUN_141459a60(void)

{
  if (DAT_146896e80 == 0) {
    FUN_141786a30(&DAT_146896e80,&PTR_FUN_1463fbe70);
  }
  return DAT_146896e80;
}



// FUNCTION 141459a90 FUN_141459a90 body=47 status=ok
// SIG undefined FUN_141459a90(void)

longlong FUN_141459a90(void)

{
  if (DAT_146896e88 == 0) {
    FUN_141786a30(&DAT_146896e88,&PTR_FUN_1463fbef0);
  }
  return DAT_146896e88;
}



// FUNCTION 141459ac0 FUN_141459ac0 body=47 status=ok
// SIG undefined FUN_141459ac0(void)

longlong FUN_141459ac0(void)

{
  if (DAT_146896e90 == 0) {
    FUN_141786a30(&DAT_146896e90,&PTR_FUN_1463fbfb0);
  }
  return DAT_146896e90;
}



// FUNCTION 141459af0 FUN_141459af0 body=47 status=ok
// SIG undefined FUN_141459af0(void)

longlong FUN_141459af0(void)

{
  if (DAT_146896e98 == 0) {
    FUN_141786a30(&DAT_146896e98,&PTR_FUN_1463fc0f0);
  }
  return DAT_146896e98;
}



// FUNCTION 141459b20 FUN_141459b20 body=47 status=ok
// SIG undefined FUN_141459b20(void)

longlong FUN_141459b20(void)

{
  if (DAT_146896f80 == 0) {
    FUN_141786a30(&DAT_146896f80,&PTR_FUN_1463fca90);
  }
  return DAT_146896f80;
}



// FUNCTION 141459b50 FUN_141459b50 body=47 status=ok
// SIG undefined FUN_141459b50(void)

longlong FUN_141459b50(void)

{
  if (DAT_146896f88 == 0) {
    FUN_141786a30(&DAT_146896f88,&PTR_FUN_1463fcb10);
  }
  return DAT_146896f88;
}



// FUNCTION 141459b80 FUN_141459b80 body=47 status=ok
// SIG undefined FUN_141459b80(void)

longlong FUN_141459b80(void)

{
  if (DAT_146896f90 == 0) {
    FUN_141786a30(&DAT_146896f90,&PTR_FUN_1463fcb90);
  }
  return DAT_146896f90;
}



// FUNCTION 141459bb0 FUN_141459bb0 body=47 status=ok
// SIG undefined FUN_141459bb0(void)

longlong FUN_141459bb0(void)

{
  if (DAT_146896f98 == 0) {
    FUN_141786a30(&DAT_146896f98,&PTR_FUN_1463fcc10);
  }
  return DAT_146896f98;
}



// FUNCTION 141459be0 FUN_141459be0 body=47 status=ok
// SIG undefined FUN_141459be0(void)

longlong FUN_141459be0(void)

{
  if (DAT_146896fa0 == 0) {
    FUN_141786a30(&DAT_146896fa0,&PTR_FUN_1463fcc90);
  }
  return DAT_146896fa0;
}



// FUNCTION 141459c10 FUN_141459c10 body=47 status=ok
// SIG undefined FUN_141459c10(void)

longlong FUN_141459c10(void)

{
  if (DAT_146896fa8 == 0) {
    FUN_141786a30(&DAT_146896fa8,&PTR_FUN_1463fcd10);
  }
  return DAT_146896fa8;
}



// FUNCTION 141459c40 FUN_141459c40 body=47 status=ok
// SIG undefined FUN_141459c40(void)

longlong FUN_141459c40(void)

{
  if (DAT_146896fb0 == 0) {
    FUN_141786a30(&DAT_146896fb0,&PTR_FUN_1463fcd90);
  }
  return DAT_146896fb0;
}



// FUNCTION 141459c70 FUN_141459c70 body=47 status=ok
// SIG undefined FUN_141459c70(void)

longlong FUN_141459c70(void)

{
  if (DAT_146896fb8 == 0) {
    FUN_141786a30(&DAT_146896fb8,&PTR_FUN_1463fce50);
  }
  return DAT_146896fb8;
}



// FUNCTION 141459ca0 FUN_141459ca0 body=47 status=ok
// SIG undefined FUN_141459ca0(void)

longlong FUN_141459ca0(void)

{
  if (DAT_146896fc0 == 0) {
    FUN_141786a30(&DAT_146896fc0,&PTR_FUN_1463fcee0);
  }
  return DAT_146896fc0;
}



// FUNCTION 141459cd0 FUN_141459cd0 body=47 status=ok
// SIG undefined FUN_141459cd0(void)

longlong FUN_141459cd0(void)

{
  if (DAT_146896fc8 == 0) {
    FUN_141786a30(&DAT_146896fc8,&PTR_FUN_1463fcf20);
  }
  return DAT_146896fc8;
}



// FUNCTION 141459d00 FUN_141459d00 body=47 status=ok
// SIG undefined FUN_141459d00(void)

longlong FUN_141459d00(void)

{
  if (DAT_146896fd0 == 0) {
    FUN_141786a30(&DAT_146896fd0,&PTR_FUN_1463fcfe0);
  }
  return DAT_146896fd0;
}



// FUNCTION 141459d30 FUN_141459d30 body=47 status=ok
// SIG undefined FUN_141459d30(void)

longlong FUN_141459d30(void)

{
  if (DAT_146896fd8 == 0) {
    FUN_141786a30(&DAT_146896fd8,&PTR_FUN_1463fd0e0);
  }
  return DAT_146896fd8;
}



// FUNCTION 141459d60 FUN_141459d60 body=47 status=ok
// SIG undefined FUN_141459d60(void)

longlong FUN_141459d60(void)

{
  if (DAT_146896fe0 == 0) {
    FUN_141786a30(&DAT_146896fe0,&PTR_FUN_1463fd120);
  }
  return DAT_146896fe0;
}



// FUNCTION 141459d90 FUN_141459d90 body=47 status=ok
// SIG undefined FUN_141459d90(void)

longlong FUN_141459d90(void)

{
  if (DAT_146896fe8 == 0) {
    FUN_141786a30(&DAT_146896fe8,&PTR_FUN_1463fd1b0);
  }
  return DAT_146896fe8;
}



// FUNCTION 141459dc0 FUN_141459dc0 body=47 status=ok
// SIG undefined FUN_141459dc0(void)

longlong FUN_141459dc0(void)

{
  if (DAT_146896ff0 == 0) {
    FUN_141786a30(&DAT_146896ff0,&PTR_FUN_1463fd1f0);
  }
  return DAT_146896ff0;
}



// FUNCTION 141459df0 FUN_141459df0 body=47 status=ok
// SIG undefined FUN_141459df0(void)

longlong FUN_141459df0(void)

{
  if (DAT_146896ff8 == 0) {
    FUN_141786a30(&DAT_146896ff8,&PTR_FUN_1463fd270);
  }
  return DAT_146896ff8;
}



// FUNCTION 141459e20 FUN_141459e20 body=47 status=ok
// SIG undefined FUN_141459e20(void)

longlong FUN_141459e20(void)

{
  if (DAT_146897000 == 0) {
    FUN_141786a30(&DAT_146897000,&PTR_FUN_1463fd2f0);
  }
  return DAT_146897000;
}



// FUNCTION 141459e50 FUN_141459e50 body=47 status=ok
// SIG undefined FUN_141459e50(void)

longlong FUN_141459e50(void)

{
  if (DAT_146897008 == 0) {
    FUN_141786a30(&DAT_146897008,&PTR_FUN_1463fd3b0);
  }
  return DAT_146897008;
}



// FUNCTION 141459e80 FUN_141459e80 body=47 status=ok
// SIG undefined FUN_141459e80(void)

longlong FUN_141459e80(void)

{
  if (DAT_146897010 == 0) {
    FUN_141786a30(&DAT_146897010,&PTR_FUN_1463fd430);
  }
  return DAT_146897010;
}



// FUNCTION 141459eb0 FUN_141459eb0 body=47 status=ok
// SIG undefined FUN_141459eb0(void)

longlong FUN_141459eb0(void)

{
  if (DAT_146897018 == 0) {
    FUN_141786a30(&DAT_146897018,&PTR_FUN_1463fd4b0);
  }
  return DAT_146897018;
}



// FUNCTION 141459ee0 FUN_141459ee0 body=47 status=ok
// SIG undefined FUN_141459ee0(void)

longlong FUN_141459ee0(void)

{
  if (DAT_146897020 == 0) {
    FUN_141786a30(&DAT_146897020,&PTR_FUN_1463fd4f0);
  }
  return DAT_146897020;
}



// FUNCTION 141459f10 FUN_141459f10 body=47 status=ok
// SIG undefined FUN_141459f10(void)

longlong FUN_141459f10(void)

{
  if (DAT_146897028 == 0) {
    FUN_141786a30(&DAT_146897028,&PTR_FUN_1463fd530);
  }
  return DAT_146897028;
}



// FUNCTION 141459f40 FUN_141459f40 body=47 status=ok
// SIG undefined FUN_141459f40(void)

longlong FUN_141459f40(void)

{
  if (DAT_146897030 == 0) {
    FUN_141786a30(&DAT_146897030,&PTR_FUN_1463fd570);
  }
  return DAT_146897030;
}



// FUNCTION 141459f70 FUN_141459f70 body=47 status=ok
// SIG undefined FUN_141459f70(void)

longlong FUN_141459f70(void)

{
  if (DAT_146897038 == 0) {
    FUN_141786a30(&DAT_146897038,&PTR_FUN_1463fd5b0);
  }
  return DAT_146897038;
}



// FUNCTION 141459fa0 FUN_141459fa0 body=47 status=ok
// SIG undefined FUN_141459fa0(void)

longlong FUN_141459fa0(void)

{
  if (DAT_146897040 == 0) {
    FUN_141786a30(&DAT_146897040,&PTR_FUN_1463fd630);
  }
  return DAT_146897040;
}



// FUNCTION 141459fd0 FUN_141459fd0 body=47 status=ok
// SIG undefined FUN_141459fd0(void)

longlong FUN_141459fd0(void)

{
  if (DAT_146897048 == 0) {
    FUN_141786a30(&DAT_146897048,&PTR_FUN_1463fd670);
  }
  return DAT_146897048;
}



// FUNCTION 14145a000 FUN_14145a000 body=47 status=ok
// SIG undefined FUN_14145a000(void)

longlong FUN_14145a000(void)

{
  if (DAT_146897050 == 0) {
    FUN_141786a30(&DAT_146897050,&PTR_FUN_1463fd6b0);
  }
  return DAT_146897050;
}



// FUNCTION 14145a030 FUN_14145a030 body=47 status=ok
// SIG undefined FUN_14145a030(void)

longlong FUN_14145a030(void)

{
  if (DAT_146897058 == 0) {
    FUN_141786a30(&DAT_146897058,&PTR_FUN_1463fd6f0);
  }
  return DAT_146897058;
}



// FUNCTION 14145a060 FUN_14145a060 body=47 status=ok
// SIG undefined FUN_14145a060(void)

longlong FUN_14145a060(void)

{
  if (DAT_146897060 == 0) {
    FUN_141786a30(&DAT_146897060,&PTR_FUN_1463fd770);
  }
  return DAT_146897060;
}



// FUNCTION 14145a090 FUN_14145a090 body=47 status=ok
// SIG undefined FUN_14145a090(void)

longlong FUN_14145a090(void)

{
  if (DAT_146897068 == 0) {
    FUN_141786a30(&DAT_146897068,&PTR_FUN_1463fd870);
  }
  return DAT_146897068;
}



// FUNCTION 14145a0c0 FUN_14145a0c0 body=47 status=ok
// SIG undefined FUN_14145a0c0(void)

longlong FUN_14145a0c0(void)

{
  if (DAT_146897070 == 0) {
    FUN_141786a30(&DAT_146897070,&PTR_FUN_1463fd8f0);
  }
  return DAT_146897070;
}



// FUNCTION 14145a0f0 FUN_14145a0f0 body=47 status=ok
// SIG undefined FUN_14145a0f0(void)

longlong FUN_14145a0f0(void)

{
  if (DAT_146897078 == 0) {
    FUN_141786a30(&DAT_146897078,&PTR_FUN_1463fd970);
  }
  return DAT_146897078;
}



// FUNCTION 14145a120 FUN_14145a120 body=47 status=ok
// SIG undefined FUN_14145a120(void)

longlong FUN_14145a120(void)

{
  if (DAT_146897080 == 0) {
    FUN_141786a30(&DAT_146897080,&PTR_FUN_1463fd9f0);
  }
  return DAT_146897080;
}



// FUNCTION 14145a150 FUN_14145a150 body=47 status=ok
// SIG undefined FUN_14145a150(void)

longlong FUN_14145a150(void)

{
  if (DAT_146897088 == 0) {
    FUN_141786a30(&DAT_146897088,&PTR_FUN_1463fdac0);
  }
  return DAT_146897088;
}



// FUNCTION 14145a180 FUN_14145a180 body=47 status=ok
// SIG undefined FUN_14145a180(void)

longlong FUN_14145a180(void)

{
  if (DAT_146897090 == 0) {
    FUN_141786a30(&DAT_146897090,&PTR_FUN_1463fdbc0);
  }
  return DAT_146897090;
}



// FUNCTION 14145a1c0 FUN_14145a1c0 body=47 status=ok
// SIG undefined FUN_14145a1c0(void)

longlong FUN_14145a1c0(void)

{
  if (DAT_146897098 == 0) {
    FUN_141786a30(&DAT_146897098,&PTR_FUN_1463fdc00);
  }
  return DAT_146897098;
}



// FUNCTION 14145a1f0 FUN_14145a1f0 body=47 status=ok
// SIG undefined FUN_14145a1f0(void)

longlong FUN_14145a1f0(void)

{
  if (DAT_1468970a0 == 0) {
    FUN_141786a30(&DAT_1468970a0,&PTR_FUN_1463fdc80);
  }
  return DAT_1468970a0;
}



// FUNCTION 14145a220 FUN_14145a220 body=47 status=ok
// SIG undefined FUN_14145a220(void)

longlong FUN_14145a220(void)

{
  if (DAT_1468970a8 == 0) {
    FUN_141786a30(&DAT_1468970a8,&PTR_FUN_1463fdcc0);
  }
  return DAT_1468970a8;
}



// FUNCTION 14145a250 FUN_14145a250 body=47 status=ok
// SIG undefined FUN_14145a250(void)

longlong FUN_14145a250(void)

{
  if (DAT_1468970b0 == 0) {
    FUN_141786a30(&DAT_1468970b0,&PTR_FUN_1463fdd40);
  }
  return DAT_1468970b0;
}



// FUNCTION 14145a280 FUN_14145a280 body=47 status=ok
// SIG undefined FUN_14145a280(void)

longlong FUN_14145a280(void)

{
  if (DAT_1468970b8 == 0) {
    FUN_141786a30(&DAT_1468970b8,&PTR_FUN_1463fddc0);
  }
  return DAT_1468970b8;
}



// FUNCTION 14145a2b0 FUN_14145a2b0 body=47 status=ok
// SIG undefined FUN_14145a2b0(void)

longlong FUN_14145a2b0(void)

{
  if (DAT_1468970c0 == 0) {
    FUN_141786a30(&DAT_1468970c0,&PTR_FUN_1463fde40);
  }
  return DAT_1468970c0;
}



// FUNCTION 14145a2e0 FUN_14145a2e0 body=47 status=ok
// SIG undefined FUN_14145a2e0(void)

longlong FUN_14145a2e0(void)

{
  if (DAT_1468970c8 == 0) {
    FUN_141786a30(&DAT_1468970c8,&PTR_FUN_1463fdf00);
  }
  return DAT_1468970c8;
}



// FUNCTION 14145a310 FUN_14145a310 body=47 status=ok
// SIG undefined FUN_14145a310(void)

longlong FUN_14145a310(void)

{
  if (DAT_1468970d0 == 0) {
    FUN_141786a30(&DAT_1468970d0,&PTR_FUN_1463fdf80);
  }
  return DAT_1468970d0;
}



// FUNCTION 14145a340 FUN_14145a340 body=47 status=ok
// SIG undefined FUN_14145a340(void)

longlong FUN_14145a340(void)

{
  if (DAT_1468970d8 == 0) {
    FUN_141786a30(&DAT_1468970d8,&PTR_FUN_1463fdfc0);
  }
  return DAT_1468970d8;
}



// FUNCTION 14145a370 FUN_14145a370 body=47 status=ok
// SIG undefined FUN_14145a370(void)

longlong FUN_14145a370(void)

{
  if (DAT_1468970e0 == 0) {
    FUN_141786a30(&DAT_1468970e0,&PTR_FUN_1463fe040);
  }
  return DAT_1468970e0;
}



// FUNCTION 14145a3a0 FUN_14145a3a0 body=47 status=ok
// SIG undefined FUN_14145a3a0(void)

longlong FUN_14145a3a0(void)

{
  if (DAT_1468970e8 == 0) {
    FUN_141786a30(&DAT_1468970e8,&PTR_FUN_1463fe080);
  }
  return DAT_1468970e8;
}



// FUNCTION 14145a3d0 FUN_14145a3d0 body=47 status=ok
// SIG undefined FUN_14145a3d0(void)

longlong FUN_14145a3d0(void)

{
  if (DAT_1468970f0 == 0) {
    FUN_141786a30(&DAT_1468970f0,&PTR_FUN_1463fe130);
  }
  return DAT_1468970f0;
}



// FUNCTION 14145a400 FUN_14145a400 body=47 status=ok
// SIG undefined FUN_14145a400(void)

longlong FUN_14145a400(void)

{
  if (DAT_1468970f8 == 0) {
    FUN_141786a30(&DAT_1468970f8,&PTR_FUN_1463fe170);
  }
  return DAT_1468970f8;
}



// FUNCTION 14145a430 FUN_14145a430 body=47 status=ok
// SIG undefined FUN_14145a430(void)

longlong FUN_14145a430(void)

{
  if (DAT_146897100 == 0) {
    FUN_141786a30(&DAT_146897100,&PTR_FUN_1463fe230);
  }
  return DAT_146897100;
}



// FUNCTION 14145a460 FUN_14145a460 body=47 status=ok
// SIG undefined FUN_14145a460(void)

longlong FUN_14145a460(void)

{
  if (DAT_146897108 == 0) {
    FUN_141786a30(&DAT_146897108,&PTR_FUN_1463fe2b0);
  }
  return DAT_146897108;
}



// FUNCTION 14145a490 FUN_14145a490 body=47 status=ok
// SIG undefined FUN_14145a490(void)

longlong FUN_14145a490(void)

{
  if (DAT_146897110 == 0) {
    FUN_141786a30(&DAT_146897110,&PTR_FUN_1463fe370);
  }
  return DAT_146897110;
}



// FUNCTION 14145a4c0 FUN_14145a4c0 body=47 status=ok
// SIG undefined FUN_14145a4c0(void)

longlong FUN_14145a4c0(void)

{
  if (DAT_146897118 == 0) {
    FUN_141786a30(&DAT_146897118,&PTR_FUN_1463fe430);
  }
  return DAT_146897118;
}



// FUNCTION 14145a4f0 FUN_14145a4f0 body=47 status=ok
// SIG undefined FUN_14145a4f0(void)

longlong FUN_14145a4f0(void)

{
  if (DAT_146897120 == 0) {
    FUN_141786a30(&DAT_146897120,&PTR_FUN_1463fe4b0);
  }
  return DAT_146897120;
}



// FUNCTION 14145a520 FUN_14145a520 body=47 status=ok
// SIG undefined FUN_14145a520(void)

longlong FUN_14145a520(void)

{
  if (DAT_146897128 == 0) {
    FUN_141786a30(&DAT_146897128,&PTR_FUN_1463fe570);
  }
  return DAT_146897128;
}



// FUNCTION 14145a550 FUN_14145a550 body=47 status=ok
// SIG undefined FUN_14145a550(void)

longlong FUN_14145a550(void)

{
  if (DAT_146897130 == 0) {
    FUN_141786a30(&DAT_146897130,&PTR_FUN_1463fe5f0);
  }
  return DAT_146897130;
}



// FUNCTION 14145a580 FUN_14145a580 body=47 status=ok
// SIG undefined FUN_14145a580(void)

longlong FUN_14145a580(void)

{
  if (DAT_146897138 == 0) {
    FUN_141786a30(&DAT_146897138,&PTR_FUN_1463fe670);
  }
  return DAT_146897138;
}



// FUNCTION 14145a5b0 FUN_14145a5b0 body=47 status=ok
// SIG undefined FUN_14145a5b0(void)

longlong FUN_14145a5b0(void)

{
  if (DAT_146897140 == 0) {
    FUN_141786a30(&DAT_146897140,&PTR_FUN_1463fe760);
  }
  return DAT_146897140;
}



// FUNCTION 14145a5e0 FUN_14145a5e0 body=47 status=ok
// SIG undefined FUN_14145a5e0(void)

longlong FUN_14145a5e0(void)

{
  if (DAT_146897148 == 0) {
    FUN_141786a30(&DAT_146897148,&PTR_FUN_1463fe7e0);
  }
  return DAT_146897148;
}



// FUNCTION 14145a610 FUN_14145a610 body=47 status=ok
// SIG undefined FUN_14145a610(void)

longlong FUN_14145a610(void)

{
  if (DAT_146897150 == 0) {
    FUN_141786a30(&DAT_146897150,&PTR_FUN_1463fe860);
  }
  return DAT_146897150;
}



// FUNCTION 14145a640 FUN_14145a640 body=47 status=ok
// SIG undefined FUN_14145a640(void)

longlong FUN_14145a640(void)

{
  if (DAT_146897158 == 0) {
    FUN_141786a30(&DAT_146897158,&PTR_FUN_1463fe8e0);
  }
  return DAT_146897158;
}



// FUNCTION 14145a670 FUN_14145a670 body=47 status=ok
// SIG undefined FUN_14145a670(void)

longlong FUN_14145a670(void)

{
  if (DAT_146897160 == 0) {
    FUN_141786a30(&DAT_146897160,&PTR_FUN_1463fe9d0);
  }
  return DAT_146897160;
}



// FUNCTION 14145a6a0 FUN_14145a6a0 body=47 status=ok
// SIG undefined FUN_14145a6a0(void)

longlong FUN_14145a6a0(void)

{
  if (DAT_146897168 == 0) {
    FUN_141786a30(&DAT_146897168,&PTR_FUN_1463fea50);
  }
  return DAT_146897168;
}



// FUNCTION 14145a6d0 FUN_14145a6d0 body=47 status=ok
// SIG undefined FUN_14145a6d0(void)

longlong FUN_14145a6d0(void)

{
  if (DAT_146897170 == 0) {
    FUN_141786a30(&DAT_146897170,&PTR_FUN_1463fea90);
  }
  return DAT_146897170;
}



// FUNCTION 14145a700 FUN_14145a700 body=47 status=ok
// SIG undefined FUN_14145a700(void)

longlong FUN_14145a700(void)

{
  if (DAT_146897178 == 0) {
    FUN_141786a30(&DAT_146897178,&PTR_FUN_1463feb20);
  }
  return DAT_146897178;
}



// FUNCTION 14145a730 FUN_14145a730 body=47 status=ok
// SIG undefined FUN_14145a730(void)

longlong FUN_14145a730(void)

{
  if (DAT_146897180 == 0) {
    FUN_141786a30(&DAT_146897180,&PTR_FUN_1463febf0);
  }
  return DAT_146897180;
}



// FUNCTION 14145a760 FUN_14145a760 body=47 status=ok
// SIG undefined FUN_14145a760(void)

longlong FUN_14145a760(void)

{
  if (DAT_146897188 == 0) {
    FUN_141786a30(&DAT_146897188,&PTR_FUN_1463fecb0);
  }
  return DAT_146897188;
}



// FUNCTION 14145a790 FUN_14145a790 body=47 status=ok
// SIG undefined FUN_14145a790(void)

longlong FUN_14145a790(void)

{
  if (DAT_146897190 == 0) {
    FUN_141786a30(&DAT_146897190,&PTR_FUN_1463fed40);
  }
  return DAT_146897190;
}



// FUNCTION 14145a7c0 FUN_14145a7c0 body=47 status=ok
// SIG undefined FUN_14145a7c0(void)

longlong FUN_14145a7c0(void)

{
  if (DAT_146897198 == 0) {
    FUN_141786a30(&DAT_146897198,&PTR_FUN_1463fedd0);
  }
  return DAT_146897198;
}



// FUNCTION 14145a7f0 FUN_14145a7f0 body=47 status=ok
// SIG undefined FUN_14145a7f0(void)

longlong FUN_14145a7f0(void)

{
  if (DAT_1468971a0 == 0) {
    FUN_141786a30(&DAT_1468971a0,&PTR_FUN_1463fef00);
  }
  return DAT_1468971a0;
}



// FUNCTION 14145a820 FUN_14145a820 body=47 status=ok
// SIG undefined FUN_14145a820(void)

longlong FUN_14145a820(void)

{
  if (DAT_1468971a8 == 0) {
    FUN_141786a30(&DAT_1468971a8,&PTR_FUN_1463fef90);
  }
  return DAT_1468971a8;
}



// FUNCTION 14145a850 FUN_14145a850 body=47 status=ok
// SIG undefined FUN_14145a850(void)

longlong FUN_14145a850(void)

{
  if (DAT_1468971b0 == 0) {
    FUN_141786a30(&DAT_1468971b0,&PTR_FUN_1463ff050);
  }
  return DAT_1468971b0;
}



// FUNCTION 14145a880 FUN_14145a880 body=47 status=ok
// SIG undefined FUN_14145a880(void)

longlong FUN_14145a880(void)

{
  if (DAT_1468971b8 == 0) {
    FUN_141786a30(&DAT_1468971b8,&PTR_FUN_1463ff090);
  }
  return DAT_1468971b8;
}



// FUNCTION 14145a8b0 FUN_14145a8b0 body=47 status=ok
// SIG undefined FUN_14145a8b0(void)

longlong FUN_14145a8b0(void)

{
  if (DAT_1468971c0 == 0) {
    FUN_141786a30(&DAT_1468971c0,&PTR_FUN_1463ff110);
  }
  return DAT_1468971c0;
}



// FUNCTION 14145a8e0 FUN_14145a8e0 body=47 status=ok
// SIG undefined FUN_14145a8e0(void)

longlong FUN_14145a8e0(void)

{
  if (DAT_1468971c8 == 0) {
    FUN_141786a30(&DAT_1468971c8,&PTR_FUN_1463ff150);
  }
  return DAT_1468971c8;
}



// FUNCTION 14145a910 FUN_14145a910 body=47 status=ok
// SIG undefined FUN_14145a910(void)

longlong FUN_14145a910(void)

{
  if (DAT_1468971d0 == 0) {
    FUN_141786a30(&DAT_1468971d0,&PTR_FUN_1463ff250);
  }
  return DAT_1468971d0;
}



// FUNCTION 14145a940 FUN_14145a940 body=47 status=ok
// SIG undefined FUN_14145a940(void)

longlong FUN_14145a940(void)

{
  if (DAT_1468971d8 == 0) {
    FUN_141786a30(&DAT_1468971d8,&PTR_FUN_1463ff420);
  }
  return DAT_1468971d8;
}



// FUNCTION 14145a970 FUN_14145a970 body=47 status=ok
// SIG undefined FUN_14145a970(void)

longlong FUN_14145a970(void)

{
  if (DAT_1468971e0 == 0) {
    FUN_141786a30(&DAT_1468971e0,&PTR_FUN_1463ff460);
  }
  return DAT_1468971e0;
}



// FUNCTION 14145a9a0 FUN_14145a9a0 body=47 status=ok
// SIG undefined FUN_14145a9a0(void)

longlong FUN_14145a9a0(void)

{
  if (DAT_1468971e8 == 0) {
    FUN_141786a30(&DAT_1468971e8,&PTR_FUN_1463ff4e0);
  }
  return DAT_1468971e8;
}



// FUNCTION 14145a9d0 FUN_14145a9d0 body=47 status=ok
// SIG undefined FUN_14145a9d0(void)

longlong FUN_14145a9d0(void)

{
  if (DAT_1468971f0 == 0) {
    FUN_141786a30(&DAT_1468971f0,&PTR_FUN_1463ff520);
  }
  return DAT_1468971f0;
}



// FUNCTION 14145aa00 FUN_14145aa00 body=47 status=ok
// SIG undefined FUN_14145aa00(void)

longlong FUN_14145aa00(void)

{
  if (DAT_1468971f8 == 0) {
    FUN_141786a30(&DAT_1468971f8,&PTR_FUN_1463ff560);
  }
  return DAT_1468971f8;
}



// FUNCTION 14145aa30 FUN_14145aa30 body=47 status=ok
// SIG undefined FUN_14145aa30(void)

longlong FUN_14145aa30(void)

{
  if (DAT_146897200 == 0) {
    FUN_141786a30(&DAT_146897200,&PTR_FUN_1463ff5e0);
  }
  return DAT_146897200;
}



// FUNCTION 14145aa60 FUN_14145aa60 body=47 status=ok
// SIG undefined FUN_14145aa60(void)

longlong FUN_14145aa60(void)

{
  if (DAT_146897208 == 0) {
    FUN_141786a30(&DAT_146897208,&PTR_FUN_1463ff660);
  }
  return DAT_146897208;
}



// FUNCTION 14145aa90 FUN_14145aa90 body=47 status=ok
// SIG undefined FUN_14145aa90(void)

longlong FUN_14145aa90(void)

{
  if (DAT_146897210 == 0) {
    FUN_141786a30(&DAT_146897210,&PTR_FUN_1463ff6e0);
  }
  return DAT_146897210;
}



// FUNCTION 14145aac0 FUN_14145aac0 body=47 status=ok
// SIG undefined FUN_14145aac0(void)

longlong FUN_14145aac0(void)

{
  if (DAT_146897218 == 0) {
    FUN_141786a30(&DAT_146897218,&PTR_FUN_1463ff760);
  }
  return DAT_146897218;
}



// FUNCTION 14145aaf0 FUN_14145aaf0 body=47 status=ok
// SIG undefined FUN_14145aaf0(void)

longlong FUN_14145aaf0(void)

{
  if (DAT_146897220 == 0) {
    FUN_141786a30(&DAT_146897220,&PTR_FUN_1463ff7e0);
  }
  return DAT_146897220;
}



// FUNCTION 14145ab20 FUN_14145ab20 body=47 status=ok
// SIG undefined FUN_14145ab20(void)

longlong FUN_14145ab20(void)

{
  if (DAT_146897228 == 0) {
    FUN_141786a30(&DAT_146897228,&PTR_FUN_1463ff870);
  }
  return DAT_146897228;
}



// FUNCTION 14145ab50 FUN_14145ab50 body=47 status=ok
// SIG undefined FUN_14145ab50(void)

longlong FUN_14145ab50(void)

{
  if (DAT_146897230 == 0) {
    FUN_141786a30(&DAT_146897230,&PTR_FUN_1463ff970);
  }
  return DAT_146897230;
}



// FUNCTION 14145ab80 FUN_14145ab80 body=47 status=ok
// SIG undefined FUN_14145ab80(void)

longlong FUN_14145ab80(void)

{
  if (DAT_146897238 == 0) {
    FUN_141786a30(&DAT_146897238,&PTR_FUN_1463ffa70);
  }
  return DAT_146897238;
}



// FUNCTION 14145abb0 FUN_14145abb0 body=47 status=ok
// SIG undefined FUN_14145abb0(void)

longlong FUN_14145abb0(void)

{
  if (DAT_146897240 == 0) {
    FUN_141786a30(&DAT_146897240,&PTR_FUN_1463ffaf0);
  }
  return DAT_146897240;
}



// FUNCTION 14145abe0 FUN_14145abe0 body=47 status=ok
// SIG undefined FUN_14145abe0(void)

longlong FUN_14145abe0(void)

{
  if (DAT_146897248 == 0) {
    FUN_141786a30(&DAT_146897248,&PTR_FUN_1463ffb70);
  }
  return DAT_146897248;
}



// FUNCTION 14145ac10 FUN_14145ac10 body=47 status=ok
// SIG undefined FUN_14145ac10(void)

longlong FUN_14145ac10(void)

{
  if (DAT_146897250 == 0) {
    FUN_141786a30(&DAT_146897250,&PTR_FUN_1463ffc70);
  }
  return DAT_146897250;
}



// FUNCTION 14145ac40 FUN_14145ac40 body=47 status=ok
// SIG undefined FUN_14145ac40(void)

longlong FUN_14145ac40(void)

{
  if (DAT_146897258 == 0) {
    FUN_141786a30(&DAT_146897258,&PTR_FUN_1463ffcf0);
  }
  return DAT_146897258;
}



// FUNCTION 14145ac70 FUN_14145ac70 body=47 status=ok
// SIG undefined FUN_14145ac70(void)

longlong FUN_14145ac70(void)

{
  if (DAT_146897260 == 0) {
    FUN_141786a30(&DAT_146897260,&PTR_FUN_1463ffd30);
  }
  return DAT_146897260;
}



// FUNCTION 14145aca0 FUN_14145aca0 body=47 status=ok
// SIG undefined FUN_14145aca0(void)

longlong FUN_14145aca0(void)

{
  if (DAT_146897268 == 0) {
    FUN_141786a30(&DAT_146897268,&PTR_FUN_1463ffdf0);
  }
  return DAT_146897268;
}



// FUNCTION 14145acd0 FUN_14145acd0 body=47 status=ok
// SIG undefined FUN_14145acd0(void)

longlong FUN_14145acd0(void)

{
  if (DAT_146897270 == 0) {
    FUN_141786a30(&DAT_146897270,&PTR_FUN_1463ffe70);
  }
  return DAT_146897270;
}



// FUNCTION 14145ad00 FUN_14145ad00 body=47 status=ok
// SIG undefined FUN_14145ad00(void)

longlong FUN_14145ad00(void)

{
  if (DAT_146897278 == 0) {
    FUN_141786a30(&DAT_146897278,&PTR_FUN_1463fff60);
  }
  return DAT_146897278;
}


