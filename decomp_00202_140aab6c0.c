// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140aab6c0 FUN_140aab6c0 body=388 status=ok
// SIG undefined FUN_140aab6c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140aab6c0(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  longlong local_38 [2];
  longlong local_28;
  longlong local_18;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468679d0) {
    _Init_thread_header(&DAT_1468679d0);
    if (DAT_1468679d0 == -1) {
      puVar1 = (undefined8 *)FName::FName(local_res8,L"DiamondKeyUsed",1);
      uVar2 = FUN_14217c7e0(local_38,L"gbxtelemetry",L"DiamondKeyUsed",&DAT_14423396c);
      FUN_14217c110(&DAT_1468679b8,*puVar1,uVar2);
      if (local_18 != 0) {
        FMemory::Free();
      }
      if (local_28 != 0) {
        FMemory::Free();
      }
      if (local_38[0] != 0) {
        FMemory::Free();
      }
      FUN_14217bd20(&DAT_1468679c0);
      FUN_14217bd20(&DAT_1468679c8);
      uVar2 = DAT_1468679b8;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"player_id",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      uVar2 = DAT_1468679b8;
      _DAT_1468679c0 = *puVar1;
      puVar1 = (undefined8 *)FName::FName(local_res8,L"diamond_keys_used_amount",1);
      puVar1 = (undefined8 *)FUN_14218dc00(uVar2,local_res10,*puVar1,0);
      _DAT_1468679c8 = *puVar1;
      _Init_thread_footer(&DAT_1468679d0);
      return &DAT_1468679b8;
    }
  }
  return &DAT_1468679b8;
}



// FUNCTION 140aab850 IsTrackerValid body=33 status=ok
// SIG undefined IsTrackerValid(void)

void UMagicLeapARPinFunctionLibrary::IsTrackerValid(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_140aabc80();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140aab868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1);
    return;
  }
  return;
}



// FUNCTION 140aab880 FUN_140aab880 body=54 status=ok
// SIG undefined FUN_140aab880(void)

undefined8 FUN_140aab880(void)

{
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    return *(undefined8 *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
  }
  return 0;
}



// FUNCTION 140aab8c0 FUN_140aab8c0 body=40 status=ok
// SIG undefined FUN_140aab8c0(void)

undefined8 FUN_140aab8c0(void)

{
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  return *(undefined8 *)(DAT_146b33f38 + 0x108);
}



// FUNCTION 140aab8f0 FUN_140aab8f0 body=91 status=ok
// SIG undefined FUN_140aab8f0(void)

longlong FUN_140aab8f0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  plVar5 = *(longlong **)(param_1 + 0x458);
  plVar1 = plVar5 + *(int *)(param_1 + 0x460);
  do {
    if (plVar5 == plVar1) {
      return 0;
    }
    lVar2 = *plVar5;
    if ((lVar2 != 0) && (param_2 != 0)) {
      plVar3 = *(longlong **)(lVar2 + 0x460);
      plVar4 = plVar3 + (longlong)*(int *)(lVar2 + 0x468) * 2;
      for (; plVar3 != plVar4; plVar3 = plVar3 + 2) {
        if (*plVar3 == param_2) {
          return lVar2;
        }
      }
    }
    plVar5 = plVar5 + 1;
  } while( true );
}



// FUNCTION 140aab950 GetNavAgentPropertiesRef body=8 status=ok
// SIG undefined GetNavAgentPropertiesRef(void)

longlong AEQSTestingPawn::GetNavAgentPropertiesRef(longlong param_1)

{
  return param_1 + 0x458;
}



// FUNCTION 140aab960 FUN_140aab960 body=104 status=ok
// SIG undefined FUN_140aab960(void)

longlong * FUN_140aab960(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  
  if (param_2 != 0) {
    for (plVar5 = (longlong *)(param_1 + 0x468); plVar5 != (longlong *)(param_1 + 0x508);
        plVar5 = plVar5 + 10) {
      lVar4 = *plVar5;
      lVar1 = lVar4 + (longlong)(int)plVar5[1] * 0x18;
      for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
        plVar2 = *(longlong **)(lVar4 + 8);
        plVar3 = plVar2 + (longlong)*(int *)(lVar4 + 0x10) * 4;
        for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
          if (*plVar2 == param_2) {
            return plVar5;
          }
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140aab9d0 FUN_140aab9d0 body=34 status=ok
// SIG undefined FUN_140aab9d0(void)

longlong FUN_140aab9d0(longlong param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    return param_1 + 0x468 + (longlong)(int)param_2 * 0x50;
  }
  return 0;
}



// FUNCTION 140aaba00 FUN_140aaba00 body=171 status=ok
// SIG undefined FUN_140aaba00(void)

longlong * FUN_140aaba00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  
  *param_2 = 0;
  param_2[1] = 0;
  lVar5 = *param_1;
  lVar1 = lVar5 + (longlong)(int)param_1[1] * 0x18;
  for (; lVar5 != lVar1; lVar5 = lVar5 + 0x18) {
    plVar3 = *(longlong **)(lVar5 + 8);
    plVar4 = plVar3 + (longlong)*(int *)(lVar5 + 0x10) * 4;
    for (; plVar3 != plVar4; plVar3 = plVar3 + 4) {
      if (*plVar3 != 0) {
        iVar2 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar2 + 1;
        if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = *plVar3;
      }
    }
  }
  return param_2;
}



// FUNCTION 140aabab0 ToString body=27 status=ok
// SIG undefined ToString(void)

undefined8 FMorSoftSpawnableAssetPtr::ToString(longlong param_1,undefined8 param_2)

{
  FSoftObjectPath::ToString(param_1 + 0x10);
  return param_2;
}



// FUNCTION 140aabae0 FUN_140aabae0 body=183 status=ok
// SIG undefined FUN_140aabae0(void)

int FUN_140aabae0(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar1 = FWeakObjectPtr::Get(param_2);
  lVar6 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0x38 + lVar6;
  while( true ) {
    if (lVar6 == lVar5) {
      return 0;
    }
    lVar2 = UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(lVar6);
    if (lVar2 == lVar1) break;
    lVar6 = lVar6 + 0x38;
  }
  if (lVar6 == 0) {
    return 0;
  }
  piVar3 = *(int **)(lVar6 + 0x28);
  piVar4 = piVar3 + (longlong)*(int *)(lVar6 + 0x30) * 4;
  if (piVar3 == piVar4) {
    return 0;
  }
  while (*piVar3 != *(int *)(param_2 + 8)) {
    piVar3 = piVar3 + 4;
    if (piVar3 == piVar4) {
      return 0;
    }
  }
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  return piVar3[2];
}



// FUNCTION 140aabba0 FUN_140aabba0 body=50 status=ok
// SIG undefined FUN_140aabba0(void)

undefined4 FUN_140aabba0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = plVar1 + (longlong)(int)param_1[1] * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == param_2) break;
    plVar1 = plVar1 + 2;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  return (int)plVar1[1];
}



// FUNCTION 140aabbe0 FUN_140aabbe0 body=40 status=ok
// SIG undefined FUN_140aabbe0(void)

undefined8 FUN_140aabbe0(longlong param_1)

{
  if (0 < *(int *)(param_1 + 0xb0)) {
    return *(undefined8 *)
            ((longlong)*(int *)(param_1 + 0xb0) * 0x60 + -0x58 + *(longlong *)(param_1 + 0xa8));
  }
  return 0;
}



// FUNCTION 140aabc10 FUN_140aabc10 body=112 status=ok
// SIG undefined FUN_140aabc10(void)

longlong FUN_140aabc10(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_2 + 0x230);
  if (lVar1 != 0) {
    lVar3 = FUN_14142e810();
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



// FUNCTION 140aabc80 FUN_140aabc80 body=130 status=ok
// SIG undefined FUN_140aabc80(void)

undefined8 FUN_140aabc80(void)

{
  longlong lVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_1468679a0) {
    _Init_thread_header(&DAT_1468679a0);
    if (DAT_1468679a0 == -1) {
      FName::FName(&DAT_146867998,L"OnlineSubsystemUtils",1);
      _Init_thread_footer(&DAT_1468679a0);
    }
  }
  lVar1 = FModuleManager::GetModulePtr_Internal(DAT_146867998);
  if (lVar1 != 0) {
    return *(undefined8 *)(lVar1 + 0x28);
  }
  return 0;
}



// FUNCTION 140aabd10 FUN_140aabd10 body=348 status=ok
// SIG undefined FUN_140aabd10(void)

longlong FUN_140aabd10(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x238);
  if (lVar5 == 0) {
    return 0;
  }
  if (*(longlong *)(lVar5 + 0x40) != 0) {
    lVar2 = FUN_142e49950();
    lVar4 = *(longlong *)(lVar5 + 0x40);
    for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
      if (lVar3 == lVar2) goto LAB_140aabd60;
    }
  }
  lVar4 = 0;
LAB_140aabd60:
  lVar3 = 0x40;
  if (lVar4 == 0) {
    lVar3 = 0x38;
  }
  lVar5 = *(longlong *)(lVar3 + lVar5);
  if (lVar5 != 0) {
    lVar3 = FUN_142e49950();
    lVar4 = lVar5;
    do {
      if (lVar4 == lVar3) goto LAB_140aabd96;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  lVar5 = 0;
LAB_140aabd96:
  lVar4 = *(longlong *)(param_1 + 0x238);
  if (lVar5 != *(longlong *)(param_2 + 0x10)) {
    plVar6 = *(longlong **)(lVar4 + 0x90);
    plVar1 = plVar6 + (longlong)*(int *)(lVar4 + 0x98) * 3;
    for (; plVar6 != plVar1; plVar6 = plVar6 + 3) {
      lVar5 = *plVar6;
      if (lVar5 != 0) {
        if (*(longlong *)(lVar5 + 0x40) != 0) {
          lVar2 = FUN_142e49950();
          lVar4 = *(longlong *)(lVar5 + 0x40);
          for (lVar3 = lVar4; lVar3 != 0; lVar3 = *(longlong *)(lVar3 + 0x30)) {
            if (lVar3 == lVar2) goto LAB_140aabe03;
          }
        }
        lVar4 = 0;
LAB_140aabe03:
        lVar3 = 0x40;
        if (lVar4 == 0) {
          lVar3 = 0x38;
        }
        lVar4 = *(longlong *)(lVar3 + lVar5);
        if (lVar4 != 0) {
          lVar2 = FUN_142e49950();
          lVar3 = lVar4;
          do {
            if (lVar3 == lVar2) goto LAB_140aabe33;
            lVar3 = *(longlong *)(lVar3 + 0x30);
          } while (lVar3 != 0);
        }
        lVar4 = 0;
LAB_140aabe33:
        if (lVar4 == *(longlong *)(param_2 + 0x10)) {
          return lVar5;
        }
      }
    }
    lVar4 = 0;
  }
  return lVar4;
}



// FUNCTION 140aabe70 FUN_140aabe70 body=358 status=ok
// SIG undefined FUN_140aabe70(void)

void FUN_140aabe70(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  byte bVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  
  uVar6 = FUN_142c98860(*(longlong *)(param_1 + 0x238) + 0x48,*(undefined8 *)(param_1 + 0x118));
  lVar1 = *(longlong *)(param_1 + 0x238);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 4) = uVar6;
  uVar6 = FUN_142c98860(lVar1 + 0xa0,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x238);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 8) = uVar6;
  uVar6 = FUN_142c98860(lVar1 + 0xd8,uVar2);
  lVar1 = *(longlong *)(param_1 + 0x238);
  uVar2 = *(undefined8 *)(param_1 + 0x118);
  *(undefined4 *)(param_2 + 0xc) = uVar6;
  uVar6 = FUN_142c98860(lVar1 + 0x110,uVar2);
  *(undefined4 *)(param_2 + 0x10) = uVar6;
  plVar5 = *(longlong **)(param_1 + 400);
  plVar4 = plVar5 + (longlong)*(int *)(param_1 + 0x198) * 0x1f;
  if (plVar5 != plVar4) {
    while (*plVar5 != *(longlong *)(param_1 + 0x238)) {
      plVar5 = plVar5 + 0x1f;
      if (plVar5 == plVar4) {
        return;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      bVar3 = *(byte *)((longlong)plVar5 + 0x14);
      if ((bVar3 & 1) != 0) {
        uVar6 = FUN_142c98860(plVar5 + 3,*(undefined8 *)(param_1 + 0x118));
        *(undefined4 *)(param_2 + 4) = uVar6;
        bVar3 = *(byte *)((longlong)plVar5 + 0x14);
      }
      if ((bVar3 & 2) != 0) {
        uVar6 = FUN_142c98860(plVar5 + 10,*(undefined8 *)(param_1 + 0x118));
        *(undefined4 *)(param_2 + 8) = uVar6;
        bVar3 = *(byte *)((longlong)plVar5 + 0x14);
      }
      if ((bVar3 & 4) != 0) {
        uVar6 = FUN_142c98860(plVar5 + 0x11,*(undefined8 *)(param_1 + 0x118));
        *(undefined4 *)(param_2 + 0xc) = uVar6;
        bVar3 = *(byte *)((longlong)plVar5 + 0x14);
      }
      if ((bVar3 & 8) != 0) {
        uVar6 = FUN_142c98860(plVar5 + 0x18,*(undefined8 *)(param_1 + 0x118));
        *(undefined4 *)(param_2 + 0x10) = uVar6;
      }
    }
  }
  return;
}



// FUNCTION 140aabfe0 FUN_140aabfe0 body=180 status=ok
// SIG undefined FUN_140aabfe0(void)

undefined8 FUN_140aabfe0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468679b0) && (_Init_thread_header(&DAT_1468679b0), DAT_1468679b0 == -1))
  {
    FName::FName(&DAT_1468679a8,L"diamondkey",1);
    _Init_thread_footer(&DAT_1468679b0);
  }
  plVar1 = *(longlong **)(param_1 + 0x30);
  plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x38) * 2;
  while( true ) {
    if (plVar1 == plVar2) {
      return 0;
    }
    if (*plVar1 == DAT_1468679a8) break;
    plVar1 = plVar1 + 2;
  }
  if (plVar1 == (longlong *)0x0) {
    return 0;
  }
  if (plVar1[1] == 0) {
    return 0;
  }
  return *(undefined8 *)(plVar1[1] + 0x48);
}



// FUNCTION 140aac0a0 FUN_140aac0a0 body=68 status=ok
// SIG undefined FUN_140aac0a0(void)

undefined4 FUN_140aac0a0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x592) == '\0') {
      lVar1 = lVar1 + 0x90;
      goto LAB_140aac0d0;
    }
    if (*(char *)(param_1 + 0x592) == '\x01') {
      lVar1 = lVar1 + 0xc0;
      goto LAB_140aac0d0;
    }
  }
  lVar1 = 0;
LAB_140aac0d0:
  if (lVar1 != 0) {
    return *(undefined4 *)(lVar1 + 4);
  }
  return 0x3f800000;
}



// FUNCTION 140aac0f0 FUN_140aac0f0 body=47 status=ok
// SIG undefined FUN_140aac0f0(void)

longlong FUN_140aac0f0(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x592) == '\0') {
      return lVar1 + 0x90;
    }
    if (*(char *)(param_1 + 0x592) == '\x01') {
      return lVar1 + 0xc0;
    }
  }
  return 0;
}



// FUNCTION 140aac120 FUN_140aac120 body=80 status=ok
// SIG undefined FUN_140aac120(void)

undefined4 FUN_140aac120(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x598);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x592) == '\0') {
      lVar1 = lVar1 + 0x90;
      goto LAB_140aac150;
    }
    if (*(char *)(param_1 + 0x592) == '\x01') {
      lVar1 = lVar1 + 0xc0;
      goto LAB_140aac150;
    }
  }
  lVar1 = 0;
LAB_140aac150:
  if (lVar1 == 0) {
    return 0x3f800000;
  }
  if (*(char *)(lVar1 + 8) != '\0') {
    return *(undefined4 *)(lVar1 + 0xc);
  }
  return *(undefined4 *)(lVar1 + 4);
}



// FUNCTION 140aac170 GetAtmosphereSunLightIndex body=8 status=ok
// SIG undefined GetAtmosphereSunLightIndex(void)

undefined1 UDirectionalLightComponent::GetAtmosphereSunLightIndex(longlong param_1)

{
  return *(undefined1 *)(param_1 + 0x484);
}



// FUNCTION 140aac180 FUN_140aac180 body=18 status=ok
// SIG undefined FUN_140aac180(void)

undefined1 FUN_140aac180(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    return *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0x484);
  }
  return 0;
}



// FUNCTION 140aac1a0 FUN_140aac1a0 body=108 status=ok
// SIG undefined FUN_140aac1a0(void)

undefined8 FUN_140aac1a0(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((longlong)param_1 + 0x484) == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140aaddd0(param_1);
        uVar3 = FUN_140cb9ac0(lVar1,(int)param_1[0x91],uVar2);
        return uVar3;
      }
    }
  }
  return 0xbf800000;
}



// FUNCTION 140aac210 GetNavAgentPropertiesRef body=8 status=ok
// SIG undefined GetNavAgentPropertiesRef(void)

longlong AEQSTestingPawn::GetNavAgentPropertiesRef(longlong param_1)

{
  return param_1 + 0x460;
}



// FUNCTION 140aac220 FUN_140aac220 body=3 status=ok
// SIG undefined FUN_140aac220(void)

undefined1 FUN_140aac220(void)

{
  return 5;
}



// FUNCTION 140aac230 FUN_140aac230 body=450 status=ok
// SIG undefined FUN_140aac230(void)

longlong FUN_140aac230(longlong param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
  int local_58;
  uint uStack_54;
  int iStack_50;
  uint uStack_4c;
  undefined8 local_48;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  longlong *local_30;
  int iStack_28;
  uint uStack_24;
  uint *puStack_20;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  
  if (*(int *)(param_1 + 0x600) != DAT_1468674c0) {
    *(int *)(param_1 + 0x600) = DAT_1468674c0;
    lVar5 = *(longlong *)(param_1 + 0x238);
    if (((lVar5 != 0) && (*(char *)(lVar5 + 0x30) != '\x02')) &&
       (*(char *)(param_1 + 0x184) != '\x02')) {
      if (*(char *)(param_1 + 0x240) != '\0') {
        return lVar5;
      }
      iVar1 = *(int *)(param_1 + 0x360);
      puStack_20 = (uint *)(param_1 + 0x348);
      local_58 = 0;
      uStack_54 = 1;
      local_48._4_4_ = 0;
      uStack_40 = 0;
      if (iVar1 != 0) {
        puVar6 = *(uint **)(param_1 + 0x358);
        if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
          puVar6 = puStack_20;
        }
        uVar2 = *puVar6;
        uStack_40 = 0;
        local_58 = 0;
        while (uVar2 == 0) {
          lVar5 = (longlong)local_58;
          uStack_40 = uStack_40 + 0x20;
          iVar4 = local_58 + 1;
          bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
          local_58 = iVar4;
          if (bVar3) goto LAB_140aac33f;
          uVar2 = puVar6[lVar5 + 1];
        }
        uStack_54 = -uVar2 & uVar2;
        iVar4 = 0x1f;
        if (uStack_54 != 0) {
          for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
          }
        }
        if (uStack_54 == 0) {
          iVar4 = 0x20;
        }
        else {
          iVar4 = 0x1f - iVar4;
        }
        local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
        if (iVar1 < local_48._4_4_) {
LAB_140aac33f:
          local_48._4_4_ = iVar1;
        }
      }
      iStack_28 = local_58;
      uStack_24 = uStack_54;
      uStack_18 = 0xffffffff;
      iStack_14 = local_48._4_4_;
      iStack_10 = uStack_40;
      iStack_50 = local_58;
      uStack_4c = uStack_54;
      local_38 = uStack_40;
      uStack_40 = 0xffffffff;
      iStack_3c = local_48._4_4_;
      bVar3 = local_48._4_4_ < iVar1;
      local_30 = (longlong *)(param_1 + 0x338);
      local_48 = puStack_20;
      if (bVar3) {
        do {
          if (*(longlong *)
               (*(longlong *)(*(longlong *)(param_1 + 0x338) + (longlong)iStack_3c * 0x18) + 0x238)
              == *(longlong *)(param_1 + 0x238)) {
            lVar5 = FUN_140aac230();
            if ((lVar5 != 0) && (lVar5 == *(longlong *)(param_1 + 0x238))) {
              return lVar5;
            }
          }
          uStack_40 = uStack_40 & ~uStack_4c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
        } while (iStack_3c < (int)local_48[6]);
      }
    }
  }
  return 0;
}



// FUNCTION 140aac400 FUN_140aac400 body=35 status=ok
// SIG undefined FUN_140aac400(void)

longlong FUN_140aac400(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (*(longlong *)(lVar1 + 0x238) == *(longlong *)(lVar1 + 0x188)) {
    return *(longlong *)(lVar1 + 0x248);
  }
  return *(longlong *)(lVar1 + 0x238);
}



// FUNCTION 140aac430 FUN_140aac430 body=123 status=ok
// SIG undefined FUN_140aac430(void)

longlong FUN_140aac430(longlong param_1,int *param_2)

{
  longlong lVar1;
  int *piVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar1;
  if (lVar1 != lVar3) {
    piVar2 = (int *)(lVar1 + 0x40);
    do {
      if (((piVar2[-2] == *param_2 && piVar2[-1] == param_2[1]) && piVar2[1] == param_2[3]) &&
          *piVar2 == param_2[2]) {
        return lVar1;
      }
      lVar1 = lVar1 + 0x50;
      piVar2 = piVar2 + 0x14;
    } while (lVar1 != lVar3);
  }
  return 0;
}



// FUNCTION 140aac4b0 FUN_140aac4b0 body=117 status=ok
// SIG undefined FUN_140aac4b0(void)

longlong FUN_140aac4b0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  lVar3 = (longlong)*(int *)(param_1 + 0x20) * 0x50 + lVar2;
  while( true ) {
    if (lVar2 == lVar3) {
      return 0;
    }
    cVar1 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar2,param_2);
    if ((cVar1 != '\0') && (*(int *)(lVar2 + 8) == *(int *)(param_2 + 8))) break;
    lVar2 = lVar2 + 0x50;
  }
  return lVar2;
}



// FUNCTION 140aac530 FUN_140aac530 body=429 status=ok
// SIG undefined FUN_140aac530(void)

ulonglong FUN_140aac530(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\x01') {
    if ((param_2 != 0) && (lVar6 = *(longlong *)(param_2 + 0x848), lVar6 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (plVar2 = *(longlong **)(lVar6 + 0x10d8), plVar2 != (longlong *)0x0)) {
        lVar6 = FUN_1414aa4c0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar4 = (**(code **)(*plVar2 + 0x408))(plVar2);
          return (ulonglong)(uint)(iVar4 + *(int *)(param_1 + 0x14));
        }
      }
    }
  }
  else {
    if (cVar1 == '\x02') {
      return (ulonglong)*(uint *)(param_1 + 0x14);
    }
    if (((cVar1 == '\x03') && (param_2 != 0)) &&
       (lVar6 = *(longlong *)(param_2 + 0x848), lVar6 != 0)) {
      lVar5 = FUN_1413f82e0();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8
           ) != lVar5 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if ((bVar3) && (plVar2 = *(longlong **)(lVar6 + 0x10d8), plVar2 != (longlong *)0x0)) {
        lVar6 = FUN_1414aa4c0();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
                    /* WARNING: Could not recover jumptable at 0x000140aac60d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar7 = (**(code **)(*plVar2 + 0x408))(plVar2);
          return uVar7;
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140aac6e0 FUN_140aac6e0 body=955 status=ok
// SIG undefined FUN_140aac6e0(void)

void FUN_140aac6e0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_1468679e0) && (_Init_thread_header(&DAT_1468679e0), DAT_1468679e0 == -1)) {
    uVar1 = AItem::GetPrivateStaticClass();
    AItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DuelingPlayers",1);
    DAT_1468679d8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468679e0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468679d8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468679d8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468679d8 + 0x30));
  }
  if ((*piVar5 < DAT_1468679f0) && (_Init_thread_header(&DAT_1468679f0), DAT_1468679f0 == -1)) {
    uVar1 = AItem::GetPrivateStaticClass();
    AItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimerStartTime",1);
    DAT_1468679e8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468679f0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468679e8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468679e8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468679e8 + 0x30));
  }
  if ((*piVar5 < DAT_146867a00) && (_Init_thread_header(&DAT_146867a00), DAT_146867a00 == -1)) {
    uVar1 = AItem::GetPrivateStaticClass();
    AItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DuelStatus",1);
    DAT_1468679f8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a00);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468679f8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468679f8 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468679f8 + 0x30));
  }
  if ((*piVar5 < DAT_146867a10) && (_Init_thread_header(&DAT_146867a10), DAT_146867a10 == -1)) {
    uVar1 = AItem::GetPrivateStaticClass();
    AItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DuelMode",1);
    DAT_146867a08 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a10);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a08 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a08 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a08 + 0x30));
  }
  if ((*piVar5 < DAT_146867a20) && (_Init_thread_header(&DAT_146867a20), DAT_146867a20 == -1)) {
    uVar1 = AItem::GetPrivateStaticClass();
    AItem::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumParticipants",1);
    DAT_146867a18 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a20);
  }
  if (0 < *(int *)(DAT_146867a18 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a18 + 0x40) + (short)iVar4;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146867a18 + 0x30));
  }
  return;
}



// FUNCTION 140aacaa0 FUN_140aacaa0 body=232 status=ok
// SIG undefined FUN_140aacaa0(void)

void FUN_140aacaa0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 local_res18 [16];
  short local_18 [2];
  undefined8 local_14;
  
  FUN_142231c90();
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_146867a30) && (_Init_thread_header(&DAT_146867a30), DAT_146867a30 == -1))
  {
    uVar1 = FUN_141308020();
    FUN_141308020();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ActiveDuelArenas",1);
    DAT_146867a28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a30);
  }
  iVar3 = 0;
  if (0 < *(int *)(DAT_146867a28 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867a28 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a28 + 0x30));
  }
  return;
}



// FUNCTION 140aacb90 FUN_140aacb90 body=1301 status=ok
// SIG undefined FUN_140aacb90(void)

void FUN_140aacb90(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_140afc270();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146867a40) && (_Init_thread_header(&DAT_146867a40), DAT_146867a40 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PlayerInstigator",1);
    DAT_146867a38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a40);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a38 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a38 + 0x30));
  }
  if ((*piVar5 < DAT_146867a50) && (_Init_thread_header(&DAT_146867a50), DAT_146867a50 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"NumParticipants",1);
    DAT_146867a48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a50);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a48 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a48 + 0x30));
  }
  if ((*piVar5 < DAT_146867a60) && (_Init_thread_header(&DAT_146867a60), DAT_146867a60 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"AcceptedPlayers",1);
    DAT_146867a58 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a60);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a58 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a58 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a58 + 0x30));
  }
  if ((*piVar5 < DAT_146867a70) && (_Init_thread_header(&DAT_146867a70), DAT_146867a70 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimerStartTime",1);
    DAT_146867a68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a70);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a68 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a68 + 0x30));
  }
  if ((*piVar5 < DAT_146867a80) && (_Init_thread_header(&DAT_146867a80), DAT_146867a80 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DuelState",1);
    DAT_146867a78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a80);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a78 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a78 + 0x30));
  }
  if ((*piVar5 < DAT_146867a90) && (_Init_thread_header(&DAT_146867a90), DAT_146867a90 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DuelMode",1);
    DAT_146867a88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867a90);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867a88 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a88 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867a88 + 0x30));
  }
  if ((*piVar5 < DAT_146867aa0) && (_Init_thread_header(&DAT_146867aa0), DAT_146867aa0 == -1)) {
    uVar1 = UNukerSkills001Widget::GetPrivateStaticClass();
    UNukerSkills001Widget::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"DestroyReason",1);
    DAT_146867a98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867aa0);
  }
  if (0 < *(int *)(DAT_146867a98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867a98 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146867a98 + 0x30));
  }
  return;
}



// FUNCTION 140aad0b0 FUN_140aad0b0 body=2176 status=ok
// SIG undefined FUN_140aad0b0(void)

void FUN_140aad0b0(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146867b30) && (_Init_thread_header(&DAT_146867b30), DAT_146867b30 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ElementalPuddleConfiguration",1);
    DAT_146867b28 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b30);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b28 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b28 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b28 + 0x30));
  }
  if ((*piVar5 < DAT_146867b40) && (_Init_thread_header(&DAT_146867b40), DAT_146867b40 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PuddleState",1);
    DAT_146867b38 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b40);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b38 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b38 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b38 + 0x30));
  }
  if ((*piVar5 < DAT_146867b50) && (_Init_thread_header(&DAT_146867b50), DAT_146867b50 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bWasSpawned",1);
    DAT_146867b48 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b50);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b48 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b48 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b48 + 0x30));
  }
  if ((*piVar5 < DAT_146867b60) && (_Init_thread_header(&DAT_146867b60), DAT_146867b60 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"OverrideTraceDistance",1);
    DAT_146867b58 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b60);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b58 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b58 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b58 + 0x30));
  }
  if ((*piVar5 < DAT_146867b70) && (_Init_thread_header(&DAT_146867b70), DAT_146867b70 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"SpawnTransitionTime",1);
    DAT_146867b68 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b70);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b68 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b68 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b68 + 0x30));
  }
  if ((*piVar5 < DAT_146867b80) && (_Init_thread_header(&DAT_146867b80), DAT_146867b80 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InitialOpacity",1);
    DAT_146867b78 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b80);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b78 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b78 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b78 + 0x30));
  }
  if ((*piVar5 < DAT_146867b90) && (_Init_thread_header(&DAT_146867b90), DAT_146867b90 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"InitialScale",1);
    DAT_146867b88 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867b90);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b88 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b88 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b88 + 0x30));
  }
  if ((*piVar5 < DAT_146867ba0) && (_Init_thread_header(&DAT_146867ba0), DAT_146867ba0 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FullSizeOpacity",1);
    DAT_146867b98 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867ba0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867b98 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867b98 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867b98 + 0x30));
  }
  if ((*piVar5 < DAT_146867bb0) && (_Init_thread_header(&DAT_146867bb0), DAT_146867bb0 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"FullSizeScale",1);
    DAT_146867ba8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867bb0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867ba8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867ba8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867ba8 + 0x30));
  }
  if ((*piVar5 < DAT_146867bc0) && (_Init_thread_header(&DAT_146867bc0), DAT_146867bc0 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CleanUpOpacity",1);
    DAT_146867bb8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867bc0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867bb8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867bb8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867bb8 + 0x30));
  }
  if ((*piVar5 < DAT_146867bd0) && (_Init_thread_header(&DAT_146867bd0), DAT_146867bd0 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CleanUpScale",1);
    DAT_146867bc8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867bd0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867bc8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867bc8 + 0x40) + (short)iVar3;
      local_24 = 1;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867bc8 + 0x30));
  }
  if ((*piVar5 < DAT_146867be0) && (_Init_thread_header(&DAT_146867be0), DAT_146867be0 == -1)) {
    uVar1 = FUN_14130d4b0();
    FUN_14130d4b0();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"ReplicatedCleanUpDuration",1);
    DAT_146867bd8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867be0);
  }
  if (0 < *(int *)(DAT_146867bd8 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146867bd8 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146867bd8 + 0x30));
  }
  return;
}



// FUNCTION 140aad930 FUN_140aad930 body=785 status=ok
// SIG undefined FUN_140aad930(void)

void FUN_140aad930(undefined8 param_1,undefined8 param_2)

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
  if ((*piVar5 < DAT_146867ab0) && (_Init_thread_header(&DAT_146867ab0), DAT_146867ab0 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentState",1);
    DAT_146867aa8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867ab0);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867aa8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867aa8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867aa8 + 0x30));
  }
  if ((*piVar5 < DAT_146867ac0) && (_Init_thread_header(&DAT_146867ac0), DAT_146867ac0 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PendingState",1);
    DAT_146867ab8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867ac0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867ab8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867ab8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867ab8 + 0x30));
  }
  if ((*piVar5 < DAT_146867ad0) && (_Init_thread_header(&DAT_146867ad0), DAT_146867ad0 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"PendingStateHitLocation",1);
    DAT_146867ac8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867ad0);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146867ac8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867ac8 + 0x40) + (short)iVar3;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146867ac8 + 0x30));
  }
  if ((*piVar5 < DAT_146867ae0) && (_Init_thread_header(&DAT_146867ae0), DAT_146867ae0 == -1)) {
    uVar1 = UInputKeySelector::GetPrivateStaticClass();
    UInputKeySelector::GetPrivateStaticClass();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TransitionPercent",1);
    DAT_146867ad8 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146867ae0);
  }
  if (0 < *(int *)(DAT_146867ad8 + 0x30)) {
    do {
      local_18[0] = *(short *)(DAT_146867ad8 + 0x40) + (short)iVar4;
      local_14 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_18);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_146867ad8 + 0x30));
  }
  return;
}



// FUNCTION 140aadc50 GetLongPackageName body=194 status=ok
// SIG undefined GetLongPackageName(void)

undefined8 * FSoftObjectPath::GetLongPackageName(longlong *param_1,undefined8 *param_2)

{
  longlong local_28 [4];
  
  local_28[1] = 2;
  *param_2 = 0;
  param_2[1] = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],&DAT_143f73c90,4);
  if (*param_1 == 0) {
    local_28[2] = 0;
    local_28[3] = 0;
  }
  else {
    FName::ToString(param_1,local_28 + 2);
  }
  FUN_1404e14f0(local_28 + 2,local_28,param_2,0,0,0);
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  if (local_28[0] != 0) {
    FMemory::Free(local_28[0]);
  }
  return param_2;
}



// FUNCTION 140aadd20 FUN_140aadd20 body=49 status=ok
// SIG undefined FUN_140aadd20(void)

longlong * FUN_140aadd20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    plVar1 = *(longlong **)(param_1 + 0x30);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x38) * 4;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 4) {
      if (*plVar1 == param_2) {
        return plVar1;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140aadd60 FUN_140aadd60 body=111 status=ok
// SIG undefined FUN_140aadd60(void)

undefined4 FUN_140aadd60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x470) != 0) {
    iVar3 = *(int *)(param_1 + 0x48c) + -2;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    if (*(char *)(param_1 + 0x490) == '\0') {
      lVar1 = 0x90;
    }
    else {
      if (*(char *)(param_1 + 0x490) != '\x01') goto LAB_140aaddbb;
      lVar1 = 0xc0;
    }
    lVar1 = *(longlong *)(param_1 + 0x470) + lVar1;
    if (((lVar1 != 0) && (lVar2 = 0, -1 < iVar3)) && (iVar3 < *(int *)(lVar1 + 0x18))) {
      lVar2 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0xc;
    }
  }
LAB_140aaddbb:
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 4);
  }
  return 0x3f800000;
}



// FUNCTION 140aaddd0 FUN_140aaddd0 body=111 status=ok
// SIG undefined FUN_140aaddd0(void)

undefined4 FUN_140aaddd0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0;
  if (*(longlong *)(param_1 + 0x470) != 0) {
    iVar3 = *(int *)(param_1 + 0x48c) + -2;
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    if (*(char *)(param_1 + 0x490) == '\0') {
      lVar1 = 0x90;
    }
    else {
      if (*(char *)(param_1 + 0x490) != '\x01') goto LAB_140aade2b;
      lVar1 = 0xc0;
    }
    lVar1 = *(longlong *)(param_1 + 0x470) + lVar1;
    if (((lVar1 != 0) && (lVar2 = 0, -1 < iVar3)) && (iVar3 < *(int *)(lVar1 + 0x18))) {
      lVar2 = *(longlong *)(lVar1 + 0x10) + (longlong)iVar3 * 0xc;
    }
  }
LAB_140aade2b:
  if (lVar2 != 0) {
    return *(undefined4 *)(lVar2 + 8);
  }
  return 0x3f800000;
}



// FUNCTION 140aade40 FUN_140aade40 body=213 status=ok
// SIG undefined FUN_140aade40(void)

void FUN_140aade40(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  
  cVar1 = FUN_142f5f6a0(param_1 + 8);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)(**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8,local_res8);
    iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                      (param_2,puVar3);
    if (iVar2 == -1) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *puVar3;
    }
  }
  cVar1 = FUN_142f5f6a0(param_1 + 0x38);
  if (cVar1 != '\0') {
    puVar3 = (undefined8 *)
             (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(param_1 + 0x38,local_res8);
    iVar2 = TArray<TSubclassOf<AEmitterCameraLensEffectBase>,FDefaultAllocator>::Find
                      (param_2,puVar3);
    if (iVar2 == -1) {
      iVar2 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *puVar3;
    }
  }
  return;
}



// FUNCTION 140aadf20 FUN_140aadf20 body=64 status=ok
// SIG undefined FUN_140aadf20(void)

longlong FUN_140aadf20(longlong param_1,char param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x500);
  if (lVar1 == 0) {
    if (param_2 != '\0') {
      lVar1 = FUN_14059b7e0(param_1,1);
      *(longlong *)(param_1 + 0x500) = lVar1;
      *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 0x40;
      return *(longlong *)(param_1 + 0x500);
    }
    lVar1 = 0;
  }
  return lVar1;
}



// FUNCTION 140aadf60 FUN_140aadf60 body=341 status=ok
// SIG undefined FUN_140aadf60(void)

longlong FUN_140aadf60(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 local_28 [16];
  
  lVar8 = *(longlong *)(param_1 + 0x710);
  if (lVar8 == 0) {
    lVar8 = 0;
    cVar3 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    FUN_1417846f0(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar5 = FUN_142909590();
    plVar6 = (longlong *)FUN_1417985e0(uVar5,param_1,0,cVar3 != '\0',0,0,0,0,0);
    *(longlong **)(param_1 + 0x710) = plVar6;
    if (*(int *)(param_1 + 0xc) <= DAT_1469e91a4) {
      iVar2 = *(int *)((longlong)plVar6 + 0xc);
      if (iVar2 < (int)DAT_1469e91c4) {
        uVar9 = iVar2 >> 0x1f & 0xffff;
        uVar4 = iVar2 + uVar9;
        lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                (longlong)(int)((uVar4 & 0xffff) - uVar9) * 0x18;
      }
      *(uint *)(lVar8 + 8) = *(uint *)(lVar8 + 8) | 0x40000000;
      plVar6 = *(longlong **)(param_1 + 0x710);
    }
    (**(code **)(*plVar6 + 0x38))(plVar6,param_1,0);
    puVar7 = (undefined8 *)FGuid::NewGuid(local_28);
    lVar8 = *(longlong *)(param_1 + 0x710);
    uVar5 = puVar7[1];
    *(undefined8 *)(lVar8 + 0xf0) = *puVar7;
    *(undefined8 *)(lVar8 + 0xf8) = uVar5;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x710) + 0x9a);
    *pbVar1 = *pbVar1 | 4;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x710) + 0x99);
    *pbVar1 = *pbVar1 & 0xbf;
    *(undefined1 *)(*(longlong *)(param_1 + 0x710) + 0x9c) = 2;
    lVar8 = *(longlong *)(param_1 + 0x710);
  }
  return lVar8;
}



// FUNCTION 140aae0c0 FUN_140aae0c0 body=117 status=ok
// SIG undefined FUN_140aae0c0(void)

void FUN_140aae0c0(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  iVar1 = (int)param_1[1];
  plVar2 = (longlong *)*param_1;
  plVar3 = plVar2 + (longlong)iVar1 * 2;
  while( true ) {
    if (plVar2 == plVar3) {
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar1);
      }
      plVar3 = (longlong *)(*param_1 + (longlong)iVar1 * 0x10);
      *plVar3 = param_2;
      *(undefined4 *)(plVar3 + 1) = 0;
      return;
    }
    if (*plVar2 == param_2) break;
    plVar2 = plVar2 + 2;
  }
  return;
}



// FUNCTION 140aae140 FUN_140aae140 body=71 status=ok
// SIG undefined FUN_140aae140(void)

longlong * FUN_140aae140(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (param_2 != 0) {
    lVar4 = *param_1;
    lVar1 = lVar4 + (longlong)(int)param_1[1] * 0x18;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
      plVar2 = *(longlong **)(lVar4 + 8);
      plVar3 = plVar2 + (longlong)*(int *)(lVar4 + 0x10) * 4;
      for (; plVar2 != plVar3; plVar2 = plVar2 + 4) {
        if (*plVar2 == param_2) {
          return plVar2;
        }
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140aae190 FUN_140aae190 body=338 status=ok
// SIG undefined FUN_140aae190(void)

longlong * FUN_140aae190(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  
  plVar7 = (longlong *)0x0;
  *param_2 = 0;
  param_2[1] = 0;
  plVar3 = (longlong *)FUN_140aab960(param_1,param_3);
  plVar4 = plVar7;
  if ((plVar3 != (longlong *)0x0) && (param_3 != 0)) {
    lVar8 = *plVar3;
    lVar1 = lVar8 + (longlong)(int)plVar3[1] * 0x18;
    for (; plVar4 = plVar7, lVar8 != lVar1; lVar8 = lVar8 + 0x18) {
      plVar4 = *(longlong **)(lVar8 + 8);
      plVar6 = plVar4 + (longlong)*(int *)(lVar8 + 0x10) * 4;
      for (; plVar4 != plVar6; plVar4 = plVar4 + 4) {
        if (*plVar4 == param_3) goto LAB_140aae20e;
      }
    }
  }
LAB_140aae20e:
  if (plVar4 != (longlong *)0x0) {
    plVar6 = plVar7;
    if ((plVar3 != (longlong *)0x0) && (plVar4[2] != 0)) {
      plVar5 = (longlong *)*plVar3;
      plVar3 = plVar5 + (longlong)(int)plVar3[1] * 3;
      for (; (plVar6 = plVar7, plVar5 != plVar3 && (plVar6 = plVar5, *plVar5 != plVar4[2]));
          plVar5 = plVar5 + 3) {
      }
    }
    if (plVar6 != (longlong *)0x0) {
      plVar4 = (longlong *)plVar6[1];
      plVar3 = plVar4 + (longlong)(int)plVar6[2] * 4;
      for (; plVar4 != plVar3; plVar4 = plVar4 + 4) {
        if ((*plVar4 != 0) && (*plVar4 != param_3)) {
          iVar2 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar2 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar2);
          }
          *(longlong *)(*param_2 + (longlong)iVar2 * 8) = *plVar4;
        }
      }
      return param_2;
    }
  }
  return param_2;
}



// FUNCTION 140aae2f0 FUN_140aae2f0 body=148 status=ok
// SIG undefined FUN_140aae2f0(void)

undefined4 FUN_140aae2f0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if ((param_1 != 0) && (lVar2 = FUN_1405e8ff0(), lVar2 != 0)) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    if ((*(longlong *)(DAT_146b33f38 + 0xd8) != 0) &&
       (lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x128), lVar1 != 0)) {
      lVar3 = *(longlong *)(lVar2 + 0x30);
      lVar2 = (longlong)*(int *)(lVar2 + 0x38) * 0x2c0 + lVar3;
      for (; lVar3 != lVar2; lVar3 = lVar3 + 0x2c0) {
        if ((*(longlong *)(lVar3 + 0x230) != 0) &&
           (*(longlong *)(*(longlong *)(lVar3 + 0x230) + 0xb0) == lVar1)) {
          return *(undefined4 *)(lVar3 + 600);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140aae390 FUN_140aae390 body=168 status=ok
// SIG undefined FUN_140aae390(void)

undefined8 FUN_140aae390(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong local_res8 [4];
  
  if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar1 = FUN_1423407b0(), lVar1 == 0)) {
    return 0xbf800000;
  }
  if (*(char *)(param_1 + 0x240) == '\0') {
    return 0xbf800000;
  }
  local_res8[0] = *(longlong *)(param_1 + 800);
  if (local_res8[0] == 0) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    local_res8[0] = *(longlong *)(param_1 + 800);
  }
  if (*(longlong *)(lVar1 + 400) == 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
  }
  else {
    uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
  }
  uVar2 = FTimerManager::FindTimer(uVar3,local_res8,0);
  uVar3 = FTimerManager::InternalGetTimerRemaining(uVar3,uVar2);
  return uVar3;
}



// FUNCTION 140aae440 FUN_140aae440 body=387 status=ok
// SIG undefined FUN_140aae440(void)

undefined1 * FUN_140aae440(longlong param_1,undefined1 *param_2,float param_3)

{
  void *_Src;
  int iVar1;
  float fVar2;
  
  *param_2 = *(undefined1 *)(param_1 + 0x468);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x46c);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x470);
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x478);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x47c);
  param_2[0x18] = *(undefined1 *)(param_1 + 0x480);
  param_2[0x19] = *(undefined1 *)(param_1 + 0x481);
  param_2[0x1a] = *(undefined1 *)(param_1 + 0x482);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x484);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(param_1 + 0x488);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(param_1 + 0x48c);
  param_2[0x28] = *(undefined1 *)(param_1 + 0x490);
  *(undefined8 *)(param_2 + 0x30) = 0;
  iVar1 = *(int *)(param_1 + 0x4a0);
  _Src = *(void **)(param_1 + 0x498);
  *(int *)(param_2 + 0x38) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)(param_2 + 0x3c) = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2 + 0x30,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_2 + 0x30),_Src,(longlong)iVar1 << 3);
  }
  param_2[0x40] = *(undefined1 *)(param_1 + 0x4a8);
  param_2[0x41] = *(undefined1 *)(param_1 + 0x4a9);
  *(float *)(param_2 + 4) = param_3 * *(float *)(param_1 + 0x46c);
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(param_1 + 0x518);
  fVar2 = (float)*(int *)(param_1 + 0x478) * param_3;
  iVar1 = (int)ROUND(fVar2 + fVar2 + 0.5) >> 1;
  if (iVar1 < 7) {
    iVar1 = 6;
  }
  *(int *)(param_2 + 0x10) = iVar1;
  param_3 = (float)*(int *)(param_1 + 0x47c) * param_3;
  *(int *)(param_2 + 0x14) = (int)ROUND(param_3 + param_3 + 0.5) >> 1;
  return param_2;
}



// FUNCTION 140aae5d0 Conv_SoftObjectReferenceToObject body=204 status=ok
// SIG undefined Conv_SoftObjectReferenceToObject(void)

longlong UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(longlong param_1)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar2 = FWeakObjectPtr::Get();
  if (lVar2 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if (DAT_1464b56f4 == *(int *)(param_1 + 8)) {
      return 0;
    }
    if (*(longlong *)(param_1 + 0x10) == 0) {
      return 0;
    }
    lVar2 = FUN_141796df0();
    FWeakObjectPtr::operator=(param_1,lVar2);
    if ((lVar2 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(param_1 + 8) = DAT_1464b56f4;
    }
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (lVar2 == 0) {
      return 0;
    }
  }
  lVar3 = FUN_141304730();
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



// FUNCTION 140aae6a0 FUN_140aae6a0 body=122 status=ok
// SIG undefined FUN_140aae6a0(void)

longlong FUN_140aae6a0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  if (param_1 != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    if (cVar1 == '\x02') {
      lVar2 = FUN_140cff230(param_1);
      if (lVar2 != 0) {
        return lVar2 + 0x4c0;
      }
    }
    else {
      cVar1 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
      if (cVar1 == '\x01') {
        lVar2 = FUN_140cfbfb0(param_1);
        if (lVar2 != 0) {
          return lVar2 + 0x340;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140aae720 FUN_140aae720 body=88 status=ok
// SIG undefined FUN_140aae720(void)

undefined8 FUN_140aae720(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*(char *)((longlong)param_1 + 0x484) == '\0') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140cb9ac0(lVar1,(int)param_1[0x91],(int)param_1[0x8b]);
        return uVar2;
      }
    }
  }
  return 0xbf800000;
}



// FUNCTION 140aae780 FUN_140aae780 body=118 status=ok
// SIG undefined FUN_140aae780(void)

undefined8 FUN_140aae780(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((longlong)param_1 + 0x591) == '\x02') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if ((lVar1 != 0) && (param_1[0xb3] != 0)) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140aac120(param_1);
        uVar3 = FUN_140cb9ac0(lVar1,(int)param_1[0xb0],uVar2);
        return uVar3;
      }
    }
  }
  return 0xbf800000;
}



// FUNCTION 140aae800 FUN_140aae800 body=118 status=ok
// SIG undefined FUN_140aae800(void)

undefined8 FUN_140aae800(longlong *param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)((longlong)param_1 + 0x591) == '\x01') {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if ((lVar1 != 0) && (param_1[0xb3] != 0)) {
      lVar1 = UWorld::GetGameState<APVPGameState>(lVar1);
      if (lVar1 != 0) {
        uVar2 = FUN_140aac0a0(param_1);
        uVar3 = FUN_140cb9ac0(lVar1,(int)param_1[0xb0],uVar2);
        return uVar3;
      }
    }
  }
  return 0xbf800000;
}



// FUNCTION 140aae880 FUN_140aae880 body=189 status=ok
// SIG undefined FUN_140aae880(void)

uint FUN_140aae880(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  uint uVar7;
  longlong *plVar8;
  
  plVar8 = *(longlong **)(param_1 + 0x48);
  uVar7 = 0;
  plVar1 = plVar8 + *(int *)(param_1 + 0x50);
  for (; plVar8 != plVar1; plVar8 = plVar8 + 1) {
    plVar2 = (longlong *)*plVar8;
    if (plVar2 != (longlong *)0x0) {
      lVar6 = FUN_141304350();
      if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (((bVar3) && (cVar4 = (**(code **)(*plVar2 + 0x280))(plVar2,0), cVar4 != '\0')) &&
         (cVar4 = (**(code **)(*plVar2 + 0x288))(plVar2), cVar4 != '\0')) {
        iVar5 = FUN_1404cfc20(plVar2);
        uVar7 = uVar7 | 1 << (iVar5 - 1U & 0x1f);
      }
    }
  }
  return uVar7;
}



// FUNCTION 140aae940 FUN_140aae940 body=281 status=ok
// SIG undefined FUN_140aae940(void)

uint FUN_140aae940(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_1[2];
  uVar4 = param_1[1] ^ *param_1;
  uVar2 = uVar4 >> 0xd ^ -uVar4;
  uVar1 = (-0x61c88647 - uVar2) - uVar4 ^ uVar2 << 8;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 0x10;
  uVar4 = (uVar4 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar4 ^ uVar4 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar4 ^ uVar2 << 10;
  uVar2 = ((uVar4 - uVar1) - uVar2 ^ uVar1 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
  uVar1 = (-0x61c88647 - uVar2) - uVar3 ^ uVar2 << 8;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xd;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar3 >> 0xc;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 0x10;
  uVar3 = (uVar3 - uVar1) - uVar2 ^ uVar1 >> 5;
  uVar2 = (uVar2 - uVar1) - uVar3 ^ uVar3 >> 3;
  uVar1 = (uVar1 - uVar2) - uVar3 ^ uVar2 << 10;
  return (uVar3 - uVar1) - uVar2 ^ uVar1 >> 0xf;
}



// FUNCTION 140aaea60 FUN_140aaea60 body=8 status=ok
// SIG undefined FUN_140aaea60(void)

longlong FUN_140aaea60(longlong param_1)

{
  return param_1 + 0x138;
}



// FUNCTION 140aaea70 FUN_140aaea70 body=187 status=ok
// SIG undefined FUN_140aaea70(void)

longlong * FUN_140aaea70(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_2 = 0;
  param_2[1] = 0;
  if (param_1[5] != 0) {
    plVar2 = (longlong *)*param_1;
    plVar3 = plVar2 + (longlong)(int)param_1[1] * 3;
    if (plVar2 != plVar3) {
      while (*plVar2 != param_1[5]) {
        plVar2 = plVar2 + 3;
        if (plVar2 == plVar3) {
          return param_2;
        }
      }
      plVar3 = (longlong *)plVar2[1];
      plVar2 = plVar3 + (longlong)(int)plVar2[2] * 4;
      for (; plVar3 != plVar2; plVar3 = plVar3 + 4) {
        if (*plVar3 != 0) {
          iVar1 = (int)param_2[1];
          *(int *)(param_2 + 1) = iVar1 + 1;
          if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
          }
          *(longlong *)(*param_2 + (longlong)iVar1 * 8) = *plVar3;
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 140aaeb30 FUN_140aaeb30 body=502 status=ok
// SIG undefined FUN_140aaeb30(void)

void FUN_140aaeb30(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  ulonglong *puVar12;
  
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  lVar7 = (**(code **)(*param_1 + 0x148))();
  if (lVar7 == 0) {
    return;
  }
  if (param_1[0xb3] == 0) {
    return;
  }
  uVar8 = FUN_142dccd00(*param_2);
  uVar10 = 0;
  if (uVar8 != 0) {
    lVar7 = FUN_1413ffe00();
    if ((*(int *)(*(longlong *)(uVar8 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar8 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) goto LAB_140aaebbd;
  }
  uVar8 = uVar10;
LAB_140aaebbd:
  if (uVar8 == param_1[0xac]) {
    if (*(char *)((longlong)param_1 + 0x591) == '\x01') {
      uVar9 = (**(code **)(*param_1 + 0x148))(param_1);
      lVar7 = FUN_140aab5e0(uVar9);
      if (((lVar7 != 0) && (lVar3 = param_1[0xac], *(char *)(lVar7 + 0x128) == '\x03')) &&
         (lVar3 != 0)) {
        if (0 < *(int *)(lVar7 + 0x510)) {
          uVar8 = uVar10;
          do {
            lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x508) + uVar10 * 8);
            if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x560) == lVar3)) {
              lVar4 = *(longlong *)(*(longlong *)(lVar7 + 0x508) + (longlong)(int)uVar8 * 8);
              if (*(char *)(lVar4 + 0x591) == '\x01') {
                FUN_140ab4430(lVar4,CONCAT71((int7)((ulonglong)lVar3 >> 8),2));
              }
              break;
            }
            uVar8 = (ulonglong)((int)uVar8 + 1);
            uVar10 = uVar10 + 1;
          } while ((longlong)uVar10 < (longlong)*(int *)(lVar7 + 0x510));
        }
        if ((longlong *)(lVar7 + 0x468) != (longlong *)(lVar7 + 0x508)) {
          plVar11 = (longlong *)(lVar7 + 0x478);
          do {
            if ((*plVar11 != 0) && (*(char *)(*plVar11 + 0x484) != '\x02')) {
              return;
            }
            plVar1 = plVar11 + 8;
            plVar11 = plVar11 + 10;
          } while (plVar1 != (longlong *)(lVar7 + 0x508));
        }
        FUN_14223e980(lVar7,2);
        return;
      }
    }
  }
  else {
    puVar12 = (ulonglong *)param_1[0xae];
    puVar2 = puVar12 + (int)param_1[0xaf];
    for (; puVar12 != puVar2; puVar12 = puVar12 + 1) {
      if (*puVar12 == uVar8) {
        FUN_140ab65c0(param_1,uVar8);
        return;
      }
    }
    cVar6 = FUN_140aa4f20(param_1,uVar8);
    if (cVar6 != '\0') {
      FUN_140ab6290(param_1,uVar8);
    }
  }
  return;
}



// FUNCTION 140aaed30 FUN_140aaed30 body=97 status=ok
// SIG undefined FUN_140aaed30(void)

bool FUN_140aaed30(undefined8 param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  
  if (param_2 == 0) {
    return false;
  }
  iVar1 = FUN_142235230();
  if (iVar1 != 3) {
    lVar2 = FUN_140aab960(param_1,param_2);
    return lVar2 != 0;
  }
  lVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
  return lVar2 != 0;
}



// FUNCTION 140aaedb0 FUN_140aaedb0 body=1169 status=ok
// SIG undefined FUN_140aaedb0(void)

void FUN_140aaedb0(longlong *param_1)

{
  undefined8 uVar1;
  int *piVar2;
  void *_Src;
  longlong *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined2 *puVar11;
  int iVar12;
  wchar_t *pwVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  int *piVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  wchar_t *_Source;
  wchar_t *local_58;
  uint local_50;
  int local_4c;
  wchar_t *local_48;
  uint local_40;
  int local_3c;
  longlong local_38 [2];
  
  FUN_1405ead90();
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar8 = *(longlong *)(DAT_146b33f38 + 0xd8);
  if (lVar8 == 0) {
    return;
  }
  uVar20 = 0;
  puVar7 = *(undefined8 **)(lVar8 + 0x118);
  uVar19 = (longlong)*(int *)(lVar8 + 0x120) & 0x1fffffffffffffff;
  if (puVar7 + *(int *)(lVar8 + 0x120) < puVar7) {
    uVar19 = uVar20;
  }
  if (uVar19 != 0) {
    do {
      iVar12 = (int)param_1[0x54c];
      uVar1 = *puVar7;
      *(int *)(param_1 + 0x54c) = iVar12 + 1;
      if (*(int *)((longlong)param_1 + 0x2a64) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x54b,iVar12);
      }
      lVar17 = (longlong)iVar12 * 0x10 + param_1[0x54b];
      FWeakObjectPtr::operator=(lVar17,0);
      *(undefined8 *)(lVar17 + 8) = 0;
      FUN_1405f0e70(lVar17,param_1,uVar1);
      puVar7 = puVar7 + 1;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar19);
  }
  lVar17 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar17 == 0) {
    return;
  }
  if (*(longlong *)(lVar17 + 0x30) == 0) {
    return;
  }
  lVar9 = *(longlong *)(*(longlong *)(lVar17 + 0x30) + 0xc0);
  if (lVar9 == 0) {
    return;
  }
  FUN_1428cc750(lVar9,&local_58);
  uVar19 = (ulonglong)(int)local_50;
  pwVar13 = local_58 + uVar19;
  do {
    if (pwVar13 == local_58) goto LAB_140aaef13;
    pwVar13 = pwVar13 + -1;
  } while (*pwVar13 != L'/');
  iVar12 = (int)((longlong)pwVar13 - (longlong)local_58 >> 1);
  if (iVar12 == -1) goto LAB_140aaef13;
  pwVar13 = (wchar_t *)0x0;
  uVar15 = 0;
  uVar5 = iVar12 + 1;
  uVar16 = 0;
  if (local_50 == 0) {
    _Source = L"";
    uVar14 = uVar16;
  }
  else {
    _Source = local_58;
    uVar14 = local_50 - 1;
  }
  local_48 = (wchar_t *)0x0;
  local_3c = 0;
  if ((int)uVar5 < 0) {
LAB_140aaefaa:
    uVar5 = uVar16;
  }
  else {
    uVar15 = uVar14;
    if ((int)uVar5 < (int)uVar14) {
      uVar15 = uVar5;
    }
    uVar5 = uVar15 + 1;
    if (uVar15 == 0) goto LAB_140aaefaa;
  }
  local_40 = uVar5;
  if ((0 < (int)uVar5) &&
     (TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0), uVar5 = local_40,
     pwVar13 = local_48, 0 < (int)local_40)) {
    wcsncpy(local_48,_Source,(longlong)(int)uVar15);
    pwVar13[(int)uVar15] = L'\0';
  }
  if (local_58 != (wchar_t *)0x0) {
    FMemory::Free();
  }
  local_4c = local_3c;
  local_58 = pwVar13;
  local_50 = uVar5;
  puVar7 = (undefined8 *)UGameplayStatics::GetCurrentLevelName(local_38,param_1,1);
  uVar15 = local_50;
  if (*(int *)(puVar7 + 1) != 0) {
    uVar16 = *(int *)(puVar7 + 1) - 1;
  }
  _Src = (void *)*puVar7;
  if (uVar16 != 0) {
    lVar9 = (longlong)(int)local_50;
    local_50 = (local_50 == 0) + local_50 + uVar16;
    if (local_4c < (int)local_50) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,uVar15);
    }
    pwVar13 = local_58 + (lVar9 - (ulonglong)(uVar15 != 0));
    _guard_xfg_dispatch_icall_nop(pwVar13,_Src,(longlong)(int)uVar16 * 2);
    pwVar13[(int)uVar16] = L'\0';
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  uVar19 = (ulonglong)local_50;
LAB_140aaef13:
  piVar2 = *(int **)(lVar8 + 0x180);
  iVar12 = *(int *)(lVar8 + 0x188);
  if (piVar2 == piVar2 + (longlong)iVar12 * 0xe) {
LAB_140aaf208:
    if (local_58 != (wchar_t *)0x0) {
      FMemory::Free();
    }
    return;
  }
  piVar18 = piVar2 + 6;
  do {
    pwVar13 = L"";
    if ((int)uVar19 != 0) {
      pwVar13 = local_58;
    }
    if (piVar18[-4] == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = *(undefined2 **)(piVar18 + -6);
    }
    iVar6 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar11,pwVar13);
    if (iVar6 == 0) {
      lVar8 = FWeakObjectPtr::Get(piVar18 + -2);
      if (lVar8 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != *piVar18) && (*(longlong *)(piVar18 + 2) != 0)) {
          lVar8 = FUN_141796df0();
          FWeakObjectPtr::operator=(piVar18 + -2,lVar8);
          if ((lVar8 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            *piVar18 = DAT_1464b56f4;
          }
          lVar8 = FWeakObjectPtr::Get(piVar18 + -2);
          if (lVar8 != 0) goto LAB_140aaf118;
        }
LAB_140aaf14e:
        lVar8 = FUN_1405ec200(piVar18 + -2);
        if (lVar8 != 0) {
          lVar9 = FUN_140600840();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar4 = false;
          }
          else {
            bVar4 = true;
          }
          if (bVar4) goto LAB_140aaf199;
        }
      }
      else {
LAB_140aaf118:
        lVar9 = FUN_140600840();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
        if (!bVar4) goto LAB_140aaf14e;
LAB_140aaf199:
        plVar3 = *(longlong **)(lVar17 + 0x68);
        iVar6 = *(int *)(lVar17 + 0x70);
        for (plVar10 = plVar3; plVar10 != plVar3 + iVar6; plVar10 = plVar10 + 1) {
          if (*plVar10 == lVar8) {
            if ((int)((longlong)plVar10 - (longlong)plVar3 >> 3) != -1) goto LAB_140aaf1ee;
            break;
          }
        }
        *(int *)(lVar17 + 0x70) = iVar6 + 1;
        if (*(int *)(lVar17 + 0x74) < iVar6 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar17 + 0x68,iVar6);
        }
        *(longlong *)(*(longlong *)(lVar17 + 0x68) + (longlong)iVar6 * 8) = lVar8;
      }
    }
LAB_140aaf1ee:
    if (piVar18 + 8 == piVar2 + (longlong)iVar12 * 0xe) goto LAB_140aaf208;
    uVar19 = (ulonglong)local_50;
    piVar18 = piVar18 + 0xe;
  } while( true );
}



// FUNCTION 140aaf250 FUN_140aaf250 body=235 status=ok
// SIG undefined FUN_140aaf250(void)

void FUN_140aaf250(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  cVar1 = FUN_142f5f6a0(param_1 + 8);
  if ((cVar1 == '\0') && (cVar1 = FUN_142f5f6a0(param_1 + 0x38), cVar1 == '\0')) {
    return;
  }
  iVar2 = FUN_142f5de00(param_2,param_1 + 8,0,0);
  uVar3 = FUN_142f5de00(param_2,param_1 + 0x38,0,0);
  if ((iVar2 - 1U & 0xfffffffd) == 0) {
    if ((uVar3 & 0xfffffffb) != 0) goto LAB_140aaf2fa;
    cVar1 = (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x2a0))(param_1 + -0x2c8);
    if (cVar1 == '\0') {
      (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x280))(param_1 + -0x2c8,0);
      return;
    }
  }
  if ((uVar3 & 0xfffffffb) == 0) {
    return;
  }
LAB_140aaf2fa:
  cVar1 = (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x2a0))(param_1 + -0x2c8);
  if (cVar1 != '\0') {
    (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x288))(param_1 + -0x2c8);
  }
  return;
}



// FUNCTION 140aaf340 FUN_140aaf340 body=1190 status=ok
// SIG undefined FUN_140aaf340(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140aaf340(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined1 local_108;
  longlong *local_f8;
  float fStack_f0;
  float fStack_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  uint uStack_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar13 = *param_2;
  lVar10 = lVar13 + (longlong)(int)param_2[1] * 0x18;
  for (; local_108 = param_3, local_f8 = param_2, lVar13 != lVar10; lVar13 = lVar13 + 0x18) {
    puVar6 = *(undefined8 **)(lVar13 + 8);
    puVar12 = puVar6 + (longlong)*(int *)(lVar13 + 0x10) * 4;
    for (; puVar6 != puVar12; puVar6 = puVar6 + 4) {
      local_e8 = (longlong *)*puVar6;
      iVar5 = (int)param_1[0x8d];
      uStack_e0 = 0xbf800000;
      uStack_dc = uStack_dc & 0xffffff00;
      *(int *)(param_1 + 0x8d) = iVar5 + 1;
      if (*(int *)((longlong)param_1 + 0x46c) < iVar5 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x8c,iVar5);
      }
      puVar1 = (undefined4 *)(param_1[0x8c] + (longlong)iVar5 * 0x10);
      *puVar1 = (undefined4)local_e8;
      puVar1[1] = local_e8._4_4_;
      puVar1[2] = uStack_e0;
      puVar1[3] = uStack_dc;
    }
    param_2 = local_f8;
    param_3 = local_108;
  }
  if (param_2[3] != 0) {
    lVar10 = *(longlong *)(param_2[3] + 0x168);
    local_f8 = _DAT_1468b5d90;
    fStack_f0 = (float)DAT_1468b5d98;
    if (lVar10 != 0) {
      local_f8 = *(longlong **)(lVar10 + 0x220);
      fStack_f0 = *(float *)(lVar10 + 0x228);
    }
    local_118 = 0;
    local_e8 = local_f8;
    uStack_e0 = fStack_f0;
    FUN_14223c850(param_1,&local_e8,0,0);
    lVar10 = *(longlong *)(param_2[3] + 0x168);
    if (lVar10 == 0) {
      uVar14 = (undefined4)DAT_1468b5da0;
      uVar15 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
      fStack_f0 = (float)DAT_1468b5da8;
    }
    else {
      fVar3 = *(float *)(lVar10 + 0x210);
      local_f8 = *(longlong **)(lVar10 + 0x210);
      fStack_f0 = *(float *)(lVar10 + 0x218);
      fStack_ec = *(float *)(lVar10 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar10 + 0x214) != *(float *)(lVar10 + 0x254));
      auVar2._0_4_ = -(uint)(fVar3 != *(float *)(lVar10 + 0x250));
      auVar2._8_4_ = -(uint)(fStack_f0 != *(float *)(lVar10 + 600));
      auVar2._12_4_ = -(uint)(fStack_ec != *(float *)(lVar10 + 0x25c));
      iVar5 = movmskps((int)param_2[3],auVar2);
      if (iVar5 != 0) {
        *(float *)(lVar10 + 0x250) = fVar3;
        *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
        *(float *)(lVar10 + 600) = fStack_f0;
        *(float *)(lVar10 + 0x25c) = fStack_ec;
        puVar6 = (undefined8 *)FQuat::Rotator(&local_f8,&local_e8);
        *(undefined8 *)(lVar10 + 0x260) = *puVar6;
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar6 + 1);
      }
      uVar14 = (undefined4)*(undefined8 *)(lVar10 + 0x260);
      uVar15 = (undefined4)((ulonglong)*(undefined8 *)(lVar10 + 0x260) >> 0x20);
      fStack_f0 = (float)*(undefined4 *)(lVar10 + 0x268);
    }
    local_f8 = (longlong *)CONCAT44(uVar15,uVar14);
    local_e8 = local_f8;
    uStack_e0 = fStack_f0;
    AActor::SetActorRotation(param_1,&local_f8,0);
  }
  *(int *)(param_1 + 0x90) = (int)param_2[9];
  *(int *)((longlong)param_1 + 0x48c) = (int)param_1[0x8d];
  *(undefined1 *)(param_1 + 0x92) = param_3;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar10 = 0;
  lVar13 = lVar10;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar13 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
  }
  param_1[0x8e] = lVar13;
  lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((lVar13 != 0) && (lVar13 = *(longlong *)(lVar13 + 0x148), lVar13 != 0)) {
    lVar7 = FUN_141424d10();
    if ((*(int *)(*(longlong *)(lVar13 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8)
        != lVar7 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) {
      lVar10 = *(longlong *)(lVar13 + 0x5a8);
    }
  }
  param_1[0x8f] = lVar10;
  FUN_141306370(param_1);
  lVar13 = (**(code **)(*param_1 + 0x148))(param_1);
  lVar10 = param_1[0x8b];
  *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(lVar13 + 0x790);
  uVar8 = AActor::GetWorldTimerManager(param_1);
  plVar9 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar9 != (longlong *)0x0) {
    *plVar9 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar9 + 1,param_1);
    plVar9[2] = (longlong)FUN_140ab5430;
    lVar13 = FDelegateHandle::GenerateNewID();
    plVar9[4] = lVar13;
    *plVar9 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_d8 = 0;
  local_d0 = 0;
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x30))(plVar9,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_110 = 0xbf800000;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_118 = 0;
  FUN_142880850(uVar8,param_1 + 0x93,&local_d8,(int)lVar10);
  if (local_78 != 0) {
    plVar11 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar11 = local_88;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  if (plVar9 != (longlong *)0x0) {
    (**(code **)(*plVar9 + 0x28))(plVar9,0);
    lVar10 = FMemory::Realloc(plVar9,0,0);
    if (lVar10 != 0) {
      FMemory::Free(lVar10);
    }
  }
  return;
}



// FUNCTION 140aaf7f0 FUN_140aaf7f0 body=980 status=ok
// SIG undefined FUN_140aaf7f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140aaf7f0(longlong *param_1,longlong *param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined8 local_108;
  float local_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  if (DAT_146b33f38 == 0) {
    FUN_142d7ebe0();
  }
  lVar1 = 0;
  if (*(longlong *)(DAT_146b33f38 + 0x58) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(DAT_146b33f38 + 0x58) + 0x508);
  }
  param_1[0xb3] = lVar1;
  if (param_2 == (longlong *)0x0) {
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar1 == 0) {
    return;
  }
  if (param_1[0xb3] == 0) {
    return;
  }
  param_1[0xac] = (longlong)param_2;
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar1 + 0x790);
  *(undefined1 *)((longlong)param_1 + 0x592) = param_3;
  uVar2 = (**(code **)(*param_2 + 0x798))(param_2,&local_e8);
  pfVar3 = (float *)FRotator::Vector(uVar2,&local_f8);
  fVar12 = pfVar3[1];
  fVar11 = *pfVar3;
  fVar8 = fVar11 * fVar11 + fVar12 * fVar12;
  if (fVar8 == 1.0) {
    if (pfVar3[2] == 0.0) {
      local_108 = *(undefined8 *)pfVar3;
      local_100 = pfVar3[2];
      goto LAB_140aaf9ce;
    }
  }
  else {
    if (fVar8 < 1e-08) {
      local_100 = DAT_1468b5d98;
      local_108 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      goto LAB_140aaf9ce;
    }
    auVar10 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
    fVar9 = auVar10._0_4_;
    fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
    fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
    fVar11 = fVar11 * fVar9;
    fVar12 = fVar12 * fVar9;
  }
  local_100 = 0.0;
  local_108 = CONCAT44(fVar12,fVar11);
LAB_140aaf9ce:
  uVar2 = FUN_140aaa2b0(param_1,&local_f8,param_4);
  local_118 = 0;
  FUN_14223c850(param_1,uVar2,0,0);
  puVar4 = (undefined8 *)FVector::Rotation(&local_108,&local_f8);
  local_e8 = *puVar4;
  local_e0 = *(undefined4 *)(puVar4 + 1);
  AActor::SetActorRotation(param_1,&local_e8,0);
  if (*(char *)((longlong)param_1 + 0x591) != '\x01') {
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x591) = 1;
    FUN_14130a0f0(param_1,1);
  }
  FUN_14130a070(param_1);
  uStack_f0 = 0;
  local_f8 = FUN_140ab5cb0;
  uVar7 = FUN_140aac0a0(param_1);
  uVar2 = AActor::GetWorldTimerManager(param_1);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    *(undefined4 *)(plVar5 + 2) = (undefined4)local_f8;
    *(undefined4 *)((longlong)plVar5 + 0x14) = local_f8._4_4_;
    *(undefined4 *)(plVar5 + 3) = uStack_f0;
    *(undefined4 *)((longlong)plVar5 + 0x1c) = uStack_ec;
    lVar1 = FDelegateHandle::GenerateNewID();
    plVar5[5] = lVar1;
    *plVar5 = (longlong)&PTR_FUN_143f77bd0;
  }
  local_c8 = 0;
  local_c0 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_c8);
  }
  FWeakObjectPtr::operator=(local_b8,0);
  local_110 = 0xbf800000;
  local_118 = 0;
  local_b0 = 0;
  local_78 = (longlong *)0x0;
  local_68 = 0;
  local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar2,param_1 + 0xb1,&local_c8,uVar7);
  if (local_68 != 0) {
    plVar6 = local_98;
    if (local_78 != (longlong *)0x0) {
      plVar6 = local_78;
    }
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x10))(plVar6,0);
    }
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar1 = FMemory::Realloc(plVar5,0,0);
    if (lVar1 != 0) {
      FMemory::Free(lVar1);
    }
  }
  return;
}



// FUNCTION 140aafbd0 FUN_140aafbd0 body=2924 status=ok
// SIG undefined FUN_140aafbd0(void)

void FUN_140aafbd0(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  int iVar12;
  longlong *plVar13;
  longlong *plVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  wchar_t *pwVar21;
  bool bVar22;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  int local_118;
  int local_114;
  longlong local_110;
  int local_108;
  int local_104;
  longlong *local_100;
  int local_f8;
  int local_f4;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  uint local_d0;
  uint uStack_cc;
  undefined8 uStack_c8;
  int local_c0;
  uint uStack_bc;
  uint *puStack_b8;
  undefined4 local_b0;
  uint uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong local_a0;
  longlong *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  int iStack_68;
  uint uStack_64;
  uint *local_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 local_50;
  
  plVar14 = *(longlong **)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x180) = 1;
  uVar7 = UScrollBox::GetPrivateStaticClass();
  lVar8 = (**(code **)(*plVar14 + 0x628))(plVar14,uVar7);
  if (lVar8 != 0) {
    uStack_e0._0_4_ = 0;
    local_e8 = FUN_140ab6b90;
    plVar14 = (longlong *)(lVar8 + 0x1e8);
    plVar9 = (longlong *)FMemory::Realloc(0,0x30);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_143fcfec0;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(int *)(plVar9 + 2) = (int)local_e8;
      *(int *)((longlong)plVar9 + 0x14) = local_e8._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_e0;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_e0._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
      *plVar9 = (longlong)&PTR_FUN_143fcff08;
      FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(plVar14,1);
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_res8);
      iVar12 = *(int *)(lVar8 + 0x1f0);
      lVar10 = (longlong)iVar12;
      *(int *)(lVar8 + 0x1f0) = iVar12 + 1;
      if (*(int *)(lVar8 + 500) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar12);
      }
      lVar8 = *plVar14;
      *(undefined8 *)(lVar8 + lVar10 * 0x10) = 0;
      *(longlong **)(lVar8 + lVar10 * 0x10) = plVar9;
      *(undefined4 *)(lVar8 + 8 + lVar10 * 0x10) = 3;
    }
  }
  lVar8 = *(longlong *)(param_1 + 0x118);
  local_e8 = (code *)(lVar8 + 0x2b0);
  local_c0 = 0;
  uVar1 = *(uint *)(lVar8 + 0x2d8);
  puStack_b8 = (uint *)(lVar8 + 0x2c0);
  uStack_bc = 1;
  uStack_ac = 0;
  iStack_a8 = 0;
  if (uVar1 != 0) {
    puVar20 = *(uint **)(lVar8 + 0x2d0);
    if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
      puVar20 = puStack_b8;
    }
    uVar2 = *puVar20;
    iStack_a8 = 0;
    local_c0 = 0;
    while (uVar2 == 0) {
      lVar10 = (longlong)local_c0;
      iStack_a8 = iStack_a8 + 0x20;
      iVar12 = local_c0 + 1;
      bVar22 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c0;
      local_c0 = iVar12;
      if (bVar22) goto LAB_140aafd7d;
      uVar2 = puVar20[lVar10 + 1];
    }
    uStack_bc = uVar2 - 1 & uVar2 ^ uVar2;
    iVar12 = 0x1f;
    if (uStack_bc != 0) {
      for (; uStack_bc >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uStack_bc == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    uStack_ac = (iStack_a8 - iVar12) + 0x1f;
    if ((int)uVar1 < (int)uStack_ac) {
LAB_140aafd7d:
      uStack_ac = uVar1;
    }
  }
  local_b0 = 0xffffffff;
  uVar2 = *(uint *)(lVar8 + 0x2d8);
  uStack_e0 = CONCAT44(uStack_bc,local_c0);
  uStack_58 = 0xffffffff;
  uStack_54 = uStack_ac;
  uStack_c8 = CONCAT44(uStack_a4,iStack_a8);
  uVar18 = -1 << ((byte)uVar2 & 0x1f);
  uVar19 = uVar2 & 0xffffffe0;
  local_d8 = CONCAT44(uVar2,uVar18);
  iStack_68 = local_c0;
  uStack_64 = uStack_bc;
  if (uVar2 != uVar1) {
    puVar20 = *(uint **)(lVar8 + 0x2d0);
    if (*(uint **)(lVar8 + 0x2d0) == (uint *)0x0) {
      puVar20 = puStack_b8;
    }
    uVar18 = puVar20[(int)uVar2 >> 5] & uVar18;
    iVar12 = (int)uVar2 >> 5;
    while (uVar18 == 0) {
      uVar19 = uVar19 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar12)
      goto LAB_140aafe54;
      uVar18 = puVar20[(longlong)iVar12 + 1];
      local_d8 = 0xffffffff;
      iVar12 = iVar12 + 1;
    }
    uVar18 = uVar18 - 1 & uVar18 ^ uVar18;
    iVar12 = 0x1f;
    if (uVar18 != 0) {
      for (; uVar18 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar18 == 0) {
      iVar12 = 0x20;
    }
    else {
      iVar12 = 0x1f - iVar12;
    }
    iVar12 = (uVar19 - iVar12) + 0x1f;
    local_d8 = CONCAT44(iVar12,(undefined4)local_d8);
    if ((int)uVar1 < iVar12) {
LAB_140aafe54:
      local_d8 = CONCAT44(uVar1,(undefined4)local_d8);
    }
  }
  local_80 = local_d8 >> 0x20;
  local_78 = (longlong *)local_e8;
  local_60 = puStack_b8;
  local_50 = uStack_c8;
  local_70 = (longlong *)local_e8;
  local_d0 = uStack_58;
  uStack_cc = uStack_54;
  do {
    plVar14 = (longlong *)(longlong)(int)uStack_54;
    if ((uStack_54 == (uint)local_80) && (local_60 == puStack_b8)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    if ((bVar22) && (local_70 == local_78)) {
      bVar22 = false;
    }
    else {
      bVar22 = true;
    }
    if (!bVar22) {
      uVar7 = FUN_14059b7e0(*(undefined8 *)(param_1 + 0x118),0);
      *(undefined8 *)(param_1 + 0x628) = uVar7;
      if (*(char *)(param_1 + 0x640) == '\0') {
        FUN_140aa5b40(param_1,0,0x3f800000);
      }
      if (*(longlong *)(param_1 + 0x188) != 0) {
        plVar14 = (longlong *)(param_1 + 400);
        plVar13 = (longlong *)*plVar14;
        iVar12 = *(int *)(param_1 + 0x198);
        plVar9 = plVar13 + (longlong)iVar12 * 0x1f;
        for (; plVar13 != plVar9; plVar13 = plVar13 + 0x1f) {
          if (*plVar13 == *(longlong *)(param_1 + 0x188)) {
            return;
          }
        }
        *(int *)(param_1 + 0x198) = iVar12 + 1;
        if (*(int *)(param_1 + 0x19c) < iVar12 + 1) {
          TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(plVar14);
        }
        FUN_140a9f320(*plVar14 + (longlong)iVar12 * 0xf8,*(undefined8 *)(param_1 + 0x188),0x3f800000
                      ,0x3f800000,0xbf800000);
      }
      return;
    }
    pwVar3 = *(wchar_t **)(*local_70 + (longlong)plVar14 * 0x10);
    if (*(char *)(param_1 + 0x268) == '\0') {
LAB_140aaff03:
      pwVar21 = (wchar_t *)0x0;
      if (pwVar3 != (wchar_t *)0x0) {
        lVar8 = FUN_1429f11d0();
        plVar14 = *(longlong **)(pwVar3 + 8);
        if (((int)plVar14[0x12] < *(int *)(lVar8 + 0x90)) ||
           (*(longlong *)(plVar14[0x11] + (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
          bVar22 = false;
        }
        else {
          bVar22 = true;
        }
        pwVar21 = (wchar_t *)0x0;
        if (bVar22) {
          pwVar21 = pwVar3;
        }
      }
      if (pwVar21 != (wchar_t *)0x0) {
        FUN_1423974f0(pwVar21,CONCAT71((int7)((ulonglong)plVar14 >> 8),1));
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnBeginDamageOverlap",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_a0,pwVar5 + 2,1);
        lVar8 = local_a0;
        pwVar5 = pwVar21 + 0x2b8;
        FWeakObjectPtr::operator=(&local_118,0);
        local_110 = 0;
        FWeakObjectPtr::operator=(&local_118,param_1);
        local_110 = lVar8;
        local_res8 = 0;
        if (lVar8 != 0) {
          lVar8 = FWeakObjectPtr::Get(&local_118);
          if (lVar8 != 0) {
            UObject::FindFunction(lVar8,local_110);
          }
        }
        piVar15 = *(int **)pwVar5;
        iVar12 = *(int *)(pwVar21 + 700);
        for (piVar17 = piVar15; piVar17 != piVar15 + (longlong)iVar12 * 4; piVar17 = piVar17 + 4) {
          if ((*piVar17 == local_118) && (piVar17[1] == local_114)) {
LAB_140ab002f:
            bVar22 = true;
          }
          else {
            cVar6 = FWeakObjectPtr::IsValid(piVar17);
            if (cVar6 == '\0') {
              cVar6 = FWeakObjectPtr::IsValid(&local_118);
              if (cVar6 == '\0') goto LAB_140ab002f;
            }
            bVar22 = false;
          }
          if ((bVar22) && (*(longlong *)(piVar17 + 2) == local_110)) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if (bVar22) {
            if ((int)((longlong)piVar17 - (longlong)piVar15 >> 4) != -1) goto LAB_140ab00a2;
            break;
          }
        }
        iVar12 = *(int *)(pwVar21 + 700);
        lVar8 = (longlong)iVar12;
        *(int *)(pwVar21 + 700) = iVar12 + 1;
        if (*(int *)(pwVar21 + 0x2be) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar5,iVar12);
        }
        lVar10 = *(longlong *)pwVar5;
        *(int *)(lVar10 + lVar8 * 0x10) = local_118;
        *(int *)(lVar10 + 4 + lVar8 * 0x10) = local_114;
        *(longlong *)(lVar10 + 8 + lVar8 * 0x10) = local_110;
LAB_140ab00a2:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar5);
        pwVar11 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnEndDamageOverlap",L"::");
        pwVar5 = (wchar_t *)0x0;
        while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
          pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
          pwVar5 = pwVar4;
        }
        FName::FName(&local_98,pwVar5 + 2,1);
        plVar14 = local_98;
        pwVar5 = pwVar21 + 0x2c0;
        FWeakObjectPtr::operator=(&local_108,0);
        local_100 = (longlong *)0x0;
        FWeakObjectPtr::operator=(&local_108,param_1);
        local_100 = plVar14;
        local_res10 = 0;
        if (plVar14 != (longlong *)0x0) {
          lVar8 = FWeakObjectPtr::Get(&local_108);
          if (lVar8 != 0) {
            UObject::FindFunction(lVar8,local_100);
          }
        }
        piVar15 = *(int **)pwVar5;
        iVar12 = *(int *)(pwVar21 + 0x2c4);
        for (piVar17 = piVar15; piVar17 != piVar15 + (longlong)iVar12 * 4; piVar17 = piVar17 + 4) {
          if ((*piVar17 == local_108) && (piVar17[1] == local_104)) {
LAB_140ab018f:
            bVar22 = true;
          }
          else {
            cVar6 = FWeakObjectPtr::IsValid(piVar17);
            if (cVar6 == '\0') {
              cVar6 = FWeakObjectPtr::IsValid(&local_108);
              if (cVar6 == '\0') goto LAB_140ab018f;
            }
            bVar22 = false;
          }
          if ((bVar22) && (*(longlong **)(piVar17 + 2) == local_100)) {
            bVar22 = true;
          }
          else {
            bVar22 = false;
          }
          if (bVar22) {
            if ((int)((longlong)piVar17 - (longlong)piVar15 >> 4) != -1) goto LAB_140ab0202;
            break;
          }
        }
        iVar12 = *(int *)(pwVar21 + 0x2c4);
        lVar8 = (longlong)iVar12;
        *(int *)(pwVar21 + 0x2c4) = iVar12 + 1;
        if (*(int *)(pwVar21 + 0x2c6) < iVar12 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar5,iVar12);
        }
        lVar10 = *(longlong *)pwVar5;
        *(int *)(lVar10 + lVar8 * 0x10) = local_108;
        *(int *)(lVar10 + 4 + lVar8 * 0x10) = local_104;
        *(longlong **)(lVar10 + 8 + lVar8 * 0x10) = local_100;
LAB_140ab0202:
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar5);
        iVar12 = *(int *)(param_1 + 0x288);
        *(int *)(param_1 + 0x288) = iVar12 + 1;
        if (*(int *)(param_1 + 0x28c) < iVar12 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x280,iVar12);
        }
        *(wchar_t **)(*(longlong *)(param_1 + 0x280) + (longlong)iVar12 * 8) = pwVar21;
      }
    }
    else {
      plVar14 = *(longlong **)(param_1 + 0x270);
      plVar9 = plVar14 + *(int *)(param_1 + 0x278);
      for (; pwVar21 = (wchar_t *)0x0, plVar14 != plVar9; plVar14 = plVar14 + 1) {
        if (*plVar14 == *(longlong *)(pwVar3 + 0xc)) goto LAB_140aaff03;
      }
    }
    if (*(char *)(param_1 + 0x290) == '\0') {
LAB_140ab0283:
      if (pwVar21 == (wchar_t *)0x0) {
        if (pwVar3 == (wchar_t *)0x0) {
LAB_140ab02c7:
          pwVar21 = (wchar_t *)0x0;
        }
        else {
          lVar8 = FUN_1429f11d0();
          if ((*(int *)(*(longlong *)(pwVar3 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(pwVar3 + 8) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar22 = false;
          }
          else {
            bVar22 = true;
          }
          pwVar21 = pwVar3;
          if (!bVar22) goto LAB_140ab02c7;
        }
        if (pwVar21 == (wchar_t *)0x0) goto LAB_140ab05c9;
      }
      FUN_1423974f0(pwVar21,1);
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&UElementalInteractionComponent::OnBeginInteractionOverlap",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_90,pwVar5 + 2,1);
      lVar8 = local_90;
      pwVar5 = pwVar21 + 0x2b8;
      FWeakObjectPtr::operator=(&local_f8,0);
      local_f0 = 0;
      FWeakObjectPtr::operator=(&local_f8,param_1);
      local_res18 = 0;
      local_f0 = lVar8;
      if (lVar8 != 0) {
        lVar8 = FWeakObjectPtr::Get(&local_f8);
        if (lVar8 != 0) {
          UObject::FindFunction(lVar8,local_f0);
        }
      }
      piVar15 = *(int **)pwVar5;
      iVar12 = *(int *)(pwVar21 + 700);
      for (piVar17 = piVar15; piVar17 != piVar15 + (longlong)iVar12 * 4; piVar17 = piVar17 + 4) {
        if ((*piVar17 == local_f8) && (piVar17[1] == local_f4)) {
LAB_140ab03cb:
          bVar22 = true;
        }
        else {
          cVar6 = FWeakObjectPtr::IsValid(piVar17);
          if (cVar6 == '\0') {
            cVar6 = FWeakObjectPtr::IsValid(&local_f8);
            if (cVar6 == '\0') goto LAB_140ab03cb;
          }
          bVar22 = false;
        }
        if ((bVar22) && (*(longlong *)(piVar17 + 2) == local_f0)) {
          bVar22 = true;
        }
        else {
          bVar22 = false;
        }
        if (bVar22) {
          if ((int)((longlong)piVar17 - (longlong)piVar15 >> 4) != -1) goto LAB_140ab043a;
          break;
        }
      }
      iVar12 = *(int *)(pwVar21 + 700);
      *(int *)(pwVar21 + 700) = iVar12 + 1;
      if (*(int *)(pwVar21 + 0x2be) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar5,iVar12);
      }
      piVar15 = (int *)((longlong)iVar12 * 0x10 + *(longlong *)pwVar5);
      *piVar15 = local_f8;
      piVar15[1] = local_f4;
      *(longlong *)(piVar15 + 2) = local_f0;
LAB_140ab043a:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar5);
      pwVar11 = _guard_xfg_dispatch_icall_nop
                          (L"&UElementalInteractionComponent::OnEndInteractionOverlap",L"::");
      pwVar5 = (wchar_t *)0x0;
      while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
        pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
        pwVar5 = pwVar4;
      }
      FName::FName(&local_88,pwVar5 + 2,1);
      lVar8 = local_88;
      pwVar5 = pwVar21 + 0x2c0;
      FWeakObjectPtr::operator=(&local_e8,0);
      uStack_e0 = 0;
      FWeakObjectPtr::operator=(&local_e8,param_1);
      uStack_e0 = lVar8;
      local_res20 = 0;
      if (lVar8 != 0) {
        lVar8 = FWeakObjectPtr::Get(&local_e8);
        if (lVar8 != 0) {
          UObject::FindFunction(lVar8,uStack_e0);
        }
      }
      piVar15 = *(int **)pwVar5;
      iVar12 = *(int *)(pwVar21 + 0x2c4);
      plVar14 = (longlong *)local_e8;
      for (piVar17 = piVar15; local_e8 = (code *)plVar14, piVar17 != piVar15 + (longlong)iVar12 * 4;
          piVar17 = piVar17 + 4) {
        local_e8._0_4_ = (int)plVar14;
        if ((*piVar17 == (int)local_e8) &&
           (local_e8._4_4_ = (int)((ulonglong)plVar14 >> 0x20),
           bVar22 = piVar17[1] == local_e8._4_4_, bVar22)) {
LAB_140ab051f:
          bVar22 = true;
        }
        else {
          cVar6 = FWeakObjectPtr::IsValid(piVar17);
          if (cVar6 == '\0') {
            cVar6 = FWeakObjectPtr::IsValid(&local_e8);
            if (cVar6 == '\0') goto LAB_140ab051f;
          }
          bVar22 = false;
        }
        if ((bVar22) && (*(longlong *)(piVar17 + 2) == uStack_e0)) {
          bVar22 = true;
        }
        else {
          bVar22 = false;
        }
        if (bVar22) {
          if ((int)((longlong)piVar17 - (longlong)piVar15 >> 4) != -1) goto LAB_140ab058e;
          break;
        }
        plVar14 = (longlong *)local_e8;
      }
      iVar12 = *(int *)(pwVar21 + 0x2c4);
      *(int *)(pwVar21 + 0x2c4) = iVar12 + 1;
      if (*(int *)(pwVar21 + 0x2c6) < iVar12 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(pwVar5,iVar12);
      }
      puVar16 = (undefined4 *)((longlong)iVar12 * 0x10 + *(longlong *)pwVar5);
      *puVar16 = (int)local_e8;
      puVar16[1] = local_e8._4_4_;
      *(longlong *)(puVar16 + 2) = uStack_e0;
LAB_140ab058e:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(pwVar5);
      iVar12 = *(int *)(param_1 + 0x2b0);
      *(int *)(param_1 + 0x2b0) = iVar12 + 1;
      if (*(int *)(param_1 + 0x2b4) < iVar12 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x2a8,iVar12);
      }
      *(wchar_t **)(*(longlong *)(param_1 + 0x2a8) + (longlong)iVar12 * 8) = pwVar21;
    }
    else {
      plVar9 = *(longlong **)(param_1 + 0x298);
      plVar14 = plVar9 + *(int *)(param_1 + 0x2a0);
      for (; plVar9 != plVar14; plVar9 = plVar9 + 1) {
        if (*plVar9 == *(longlong *)(pwVar3 + 0xc)) goto LAB_140ab0283;
      }
    }
LAB_140ab05c9:
    plVar9 = *(longlong **)(param_1 + 0x608);
    plVar14 = plVar9 + *(int *)(param_1 + 0x610);
    for (; plVar9 != plVar14; plVar9 = plVar9 + 1) {
      if (*plVar9 == *(longlong *)(pwVar3 + 0xc)) {
        if (pwVar21 == (wchar_t *)0x0) {
          cVar6 = FUN_140a9e330(pwVar3);
          if (cVar6 != '\0') {
            pwVar21 = pwVar3;
          }
          if (pwVar21 == (wchar_t *)0x0) break;
        }
        iVar12 = *(int *)(param_1 + 0x620);
        *(int *)(param_1 + 0x620) = iVar12 + 1;
        if (*(int *)(param_1 + 0x624) < iVar12 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x618,iVar12);
        }
        *(wchar_t **)(*(longlong *)(param_1 + 0x618) + (longlong)iVar12 * 8) = pwVar21;
        break;
      }
    }
    uStack_58 = uStack_58 & ~uStack_64;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_68);
  } while( true );
}



// FUNCTION 140ab0740 FUN_140ab0740 body=832 status=ok
// SIG undefined FUN_140ab0740(void)

void FUN_140ab0740(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int *piVar3;
  undefined8 uVar4;
  int *piVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  int local_res8 [2];
  int local_res10 [2];
  longlong local_res18;
  undefined8 local_res20;
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x181) = 1;
  puVar10 = *(undefined8 **)(param_1 + 0x280);
  puVar1 = puVar10 + *(int *)(param_1 + 0x288);
  for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
    uVar11 = 0;
    local_80 = (longlong *)0x0;
    local_78 = 0;
    FUN_14238c7d0(*puVar10,&local_80);
    uVar7 = (ulonglong)((longlong)(local_80 + (int)local_78) + (7 - (longlong)local_80)) >> 3;
    if (local_80 + (int)local_78 < local_80) {
      uVar7 = uVar11;
    }
    if (uVar7 != 0) {
      plVar8 = local_80;
      do {
        local_res18 = *(longlong *)(*plVar8 + 0x118);
        if ((local_res18 != 0) && (local_res18 != *(longlong *)(param_1 + 0x118))) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x2d0,local_res8);
          piVar5 = (int *)0x0;
          if (local_res8[0] != -1) {
            piVar5 = (int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)local_res8[0] * 0x18);
          }
          piVar3 = piVar5 + 2;
          if (piVar5 == (int *)0x0) {
            piVar3 = (int *)0x0;
          }
          if (piVar3 == (int *)0x0) {
            local_70 = &local_res18;
            local_res20 = 0;
            local_68 = &local_res20;
            FUN_140a9d130(param_1 + 0x2d0,local_res10,&local_70,0);
            *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + 8 + (longlong)local_res10[0] * 0x18) =
                 1;
            if (*(longlong *)(param_1 + 0x238) != 0) {
              FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),local_res18,param_1,0,
                            *(longlong *)(param_1 + 0x238));
            }
          }
          else {
            *piVar3 = *piVar3 + 1;
          }
        }
        plVar8 = plVar8 + 1;
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar7);
    }
    if (local_80 != (longlong *)0x0) {
      FMemory::Free(local_80);
    }
  }
  plVar12 = *(longlong **)(param_1 + 0x2a8);
  plVar8 = plVar12 + *(int *)(param_1 + 0x2b0);
  local_80 = plVar8;
  if (plVar12 != plVar8) {
    do {
      uVar7 = 0;
      local_70 = (longlong *)0x0;
      local_68 = (undefined8 *)0x0;
      FUN_14238c7d0(*plVar12,&local_70);
      uVar11 = (ulonglong)((longlong)(local_70 + (int)local_68) + (7 - (longlong)local_70)) >> 3;
      if (local_70 + (int)local_68 < local_70) {
        uVar11 = 0;
      }
      plVar9 = local_70;
      if (uVar11 != 0) {
        do {
          lVar6 = *plVar9;
          plVar8 = *(longlong **)(lVar6 + 0x118);
          if ((plVar8 != *(longlong **)(param_1 + 0x118)) &&
             ((*(byte *)((longlong)*(longlong **)(param_1 + 0x118) + 0x94) & 2) == 0)) {
            uVar4 = UInputKeySelector::GetPrivateStaticClass();
            uVar4 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar4);
            local_res20 = uVar4;
            cVar2 = FUN_140abcb20(param_1,uVar4,lVar6);
            if (cVar2 != '\0') {
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(param_1 + 0x338,local_res8,uVar4);
              if (local_res8[0] == -1) {
                lVar6 = 0;
              }
              else {
                lVar6 = *(longlong *)(param_1 + 0x338) + (longlong)local_res8[0] * 0x18;
              }
              piVar5 = (int *)(lVar6 + 8);
              if (lVar6 == 0) {
                piVar5 = (int *)0x0;
              }
              if (piVar5 == (int *)0x0) {
                local_60 = &local_res20;
                local_res10[0] = 1;
                local_58 = local_res10;
                FUN_140a9d380(param_1 + 0x338,&local_res18,&local_60,0);
                FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
                TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast
                          (param_1 + 0x1b0,local_res20);
              }
              else {
                *piVar5 = *piVar5 + 1;
              }
            }
          }
          plVar9 = plVar9 + 1;
          uVar7 = uVar7 + 1;
          plVar8 = local_80;
        } while (uVar7 != uVar11);
      }
      if (local_70 != (longlong *)0x0) {
        FMemory::Free(local_70);
      }
      plVar12 = plVar12 + 1;
    } while (plVar12 != plVar8);
  }
  return;
}



// FUNCTION 140ab0a80 FUN_140ab0a80 body=303 status=ok
// SIG undefined FUN_140ab0a80(void)

void FUN_140ab0a80(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  if (param_1[0x9e] != 0) {
    FUN_140ad8510(param_1[0x9e],param_1);
    lVar2 = param_1[0x9b];
    lVar4 = *(longlong *)(lVar2 + 0x238);
    if (lVar4 == *(longlong *)(lVar2 + 0x188)) {
      lVar4 = *(longlong *)(lVar2 + 0x248);
    }
    FUN_140ada310(param_1[0x9e],param_1,lVar4);
  }
  lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar1 = UWorld::IsGameWorld(uVar3);
    if ((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x55c) != '\0')) {
      if (0.0 < *(float *)(param_1 + 0xac)) {
        *(float *)(param_1 + 0x91) = *(float *)(param_1 + 0xac);
        *(undefined4 *)((longlong)param_1 + 0x484) = 0;
      }
      if ((char)param_1[0x25] == '\x03') {
        if (*(float *)((longlong)param_1 + 0x564) <= 0.0) {
          FUN_140abc5c0(param_1,1);
        }
        else {
          FUN_140abc5c0(param_1,0);
          FUN_140ab8bf0(param_1,1);
        }
      }
      else {
        FUN_140abc5c0(param_1,(char)param_1[0x9f]);
        FUN_140ab8bf0(param_1,(*(byte *)(param_1 + 0x9f) & 0xfd) == 0);
      }
      goto LAB_140ab0b8e;
    }
  }
  FUN_140abc270(param_1,(int)param_1[0xa2],*(undefined4 *)((longlong)param_1 + 0x514),1);
LAB_140ab0b8e:
  if ((char)param_1[0x25] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140ab0ba2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x600))(param_1);
    return;
  }
  return;
}



// FUNCTION 140ab0bb0 FUN_140ab0bb0 body=422 status=ok
// SIG undefined FUN_140ab0bb0(void)

void FUN_140ab0bb0(longlong *param_1)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (param_1[0x9e] != 0) {
    FUN_140ad8510(param_1[0x9e],param_1);
    lVar4 = param_1[0x9b];
    lVar6 = *(longlong *)(lVar4 + 0x238);
    if (lVar6 == *(longlong *)(lVar4 + 0x188)) {
      lVar6 = *(longlong *)(lVar4 + 0x248);
    }
    FUN_140ada310(param_1[0x9e],param_1,lVar6);
  }
  lVar4 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar4 != 0) {
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar2 = UWorld::IsGameWorld(uVar5);
    if ((cVar2 != '\0') && (*(char *)((longlong)param_1 + 0x55c) != '\0')) {
      if (0.0 < *(float *)(param_1 + 0xac)) {
        *(float *)(param_1 + 0x91) = *(float *)(param_1 + 0xac);
        *(undefined4 *)((longlong)param_1 + 0x484) = 0;
      }
      if ((char)param_1[0x25] == '\x03') {
        if (*(float *)((longlong)param_1 + 0x564) <= 0.0) {
          FUN_140abc5c0(param_1,1);
        }
        else {
          FUN_140abc5c0(param_1,0);
          FUN_140ab8bf0(param_1,1);
        }
      }
      else {
        FUN_140abc5c0(param_1,(char)param_1[0x9f]);
        FUN_140ab8bf0(param_1,(*(byte *)(param_1 + 0x9f) & 0xfd) == 0);
      }
      goto LAB_140ab0cbe;
    }
  }
  FUN_140abc270(param_1,(int)param_1[0xa2],*(undefined4 *)((longlong)param_1 + 0x514),1);
LAB_140ab0cbe:
  if ((char)param_1[0x25] == '\x03') {
    (**(code **)(*param_1 + 0x600))(param_1);
  }
  pbVar1 = (byte *)(param_1[0xc3] + 0x2ee);
  *pbVar1 = *pbVar1 ^ (*(byte *)((longlong)param_1 + 0x55c) ^ *(byte *)(param_1[0xc3] + 0x2ee)) & 1;
  if (param_1[0x9e] != 0) {
    iVar3 = rand();
    lVar4 = param_1[0x9b];
    *(float *)(param_1 + 0xc4) = (float)iVar3 * 0.015625477 - 256.0;
    lVar6 = *(longlong *)(lVar4 + 0x238);
    if (lVar6 == *(longlong *)(lVar4 + 0x188)) {
      lVar6 = *(longlong *)(lVar4 + 0x248);
    }
    FUN_140ad9c10(param_1[0x9e],param_1,lVar6);
    return;
  }
  return;
}



// FUNCTION 140ab0d60 FUN_140ab0d60 body=2838 status=ok
// SIG undefined FUN_140ab0d60(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ab0d60(longlong *param_1,undefined1 param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar23;
  undefined1 auVar22 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
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
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  longlong *local_2d0;
  longlong *local_2c8;
  longlong *local_2c0;
  longlong *local_2b8;
  longlong *local_2b0;
  longlong *local_2a8;
  undefined1 local_2a0;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  longlong local_288 [2];
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
  longlong local_238 [2];
  undefined8 local_228;
  undefined8 uStack_220;
  longlong local_218 [17];
  undefined4 local_190;
  undefined1 local_188 [48];
  longlong *local_158;
  int local_150;
  int local_14c;
  undefined1 local_147;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  undefined1 local_f8 [8];
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_2f8;
  lVar11 = param_1[0x96];
  local_228 = *(undefined8 *)(lVar11 + 0x220);
  uStack_220 = *(undefined8 *)(lVar11 + 0x228);
  local_138 = *(float *)(lVar11 + 0x210);
  fStack_134 = *(float *)(lVar11 + 0x214);
  fStack_130 = *(float *)(lVar11 + 0x218);
  fStack_12c = *(float *)(lVar11 + 0x21c);
  auVar18._4_4_ = -(uint)(fStack_134 != *(float *)(lVar11 + 0x254));
  auVar18._0_4_ = -(uint)(local_138 != *(float *)(lVar11 + 0x250));
  auVar18._8_4_ = -(uint)(fStack_130 != *(float *)(lVar11 + 600));
  auVar18._12_4_ = -(uint)(fStack_12c != *(float *)(lVar11 + 0x25c));
  iVar8 = movmskps((int)local_d8,auVar18);
  if (iVar8 != 0) {
    *(float *)(lVar11 + 0x250) = local_138;
    *(float *)(lVar11 + 0x254) = fStack_134;
    *(float *)(lVar11 + 600) = fStack_130;
    *(float *)(lVar11 + 0x25c) = fStack_12c;
    puVar10 = (undefined8 *)FQuat::Rotator(&local_138,local_288);
    *(undefined8 *)(lVar11 + 0x260) = *puVar10;
    *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar10 + 1);
  }
  local_218[0x10] = *(undefined8 *)(lVar11 + 0x260);
  local_190 = *(undefined4 *)(lVar11 + 0x268);
  FRotator::Quaternion(local_218 + 0x10,&local_128);
  fVar4 = DAT_1464aa790;
  fVar3 = DAT_1464aa788._4_4_;
  fVar16 = (float)DAT_1464aa788;
  fVar6 = (float)uStack_220;
  fVar5 = local_228._4_4_;
  fVar40 = (float)local_228;
  local_298 = 0xc2b40000;
  uStack_294 = 0;
  uStack_290 = 0;
  uVar9 = FRotator::Quaternion(&local_298,&local_228);
  fVar39 = fRam0000000146867518;
  fVar38 = fRam0000000146867514;
  fVar37 = _DAT_146867510;
  local_e8 = (float)((uint)_DAT_146867510 & _DAT_146867520);
  fStack_e4 = (float)((uint)fRam0000000146867514 & uRam0000000146867524);
  fStack_e0 = (float)((uint)fRam0000000146867518 & uRam0000000146867528);
  fStack_dc = (float)((uint)fRam000000014686751c & uRam000000014686752c);
  auVar17._4_4_ = fStack_e4;
  auVar17._0_4_ = local_e8;
  auVar17._8_4_ = fStack_e0;
  auVar17._12_4_ = fStack_dc;
  auVar1._4_4_ = fVar3;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar4;
  auVar1._12_4_ = 0;
  auVar18 = minps(auVar17,auVar1);
  auVar19._4_4_ = -(uint)(auVar18._4_4_ < fRam0000000146867574);
  auVar19._0_4_ = -(uint)(auVar18._0_4_ < _DAT_146867570);
  auVar19._8_4_ = -(uint)(auVar18._8_4_ < fRam0000000146867578);
  auVar19._12_4_ = -(uint)(auVar18._12_4_ < fRam000000014686757c);
  iVar8 = movmskps(uVar9,auVar19);
  if (iVar8 == 0) {
    fVar24 = fVar16 * 0.0;
    fVar25 = fVar3 * 0.0;
    fVar27 = fVar4 * 0.0;
    local_108 = local_228._4_4_ * fStack_120 * _DAT_146867530 +
                (float)local_228 * fStack_11c + uStack_220._4_4_ * local_128 * _DAT_146867550 +
                (float)uStack_220 * fStack_124 * _DAT_146867540;
    fStack_104 = (float)local_228 * fStack_120 * fRam0000000146867534 +
                 local_228._4_4_ * fStack_11c + (float)uStack_220 * local_128 * fRam0000000146867554
                 + uStack_220._4_4_ * fStack_124 * fRam0000000146867544;
    fStack_100 = uStack_220._4_4_ * fStack_120 * fRam0000000146867538 +
                 (float)uStack_220 * fStack_11c + local_228._4_4_ * local_128 * fRam0000000146867558
                 + (float)local_228 * fStack_124 * fRam0000000146867548;
    fStack_fc = (float)uStack_220 * fStack_120 * fRam000000014686753c +
                uStack_220._4_4_ * fStack_11c + (float)local_228 * local_128 * fRam000000014686755c
                + local_228._4_4_ * fStack_124 * fRam000000014686754c;
    fVar37 = fVar27 * fStack_124 - fVar25 * fStack_120;
    fVar38 = fVar24 * fStack_120 - fVar27 * local_128;
    fVar39 = fVar25 * local_128 - fVar24 * fStack_124;
    fVar21 = fStack_11c * 0.0 - fStack_11c * 0.0;
    fVar37 = fVar37 + fVar37;
    fVar38 = fVar38 + fVar38;
    fVar39 = fVar39 + fVar39;
    fVar21 = fVar21 + fVar21;
    local_f8._4_4_ =
         (fVar37 * fStack_120 - fVar39 * local_128) + fVar38 * fStack_11c + fVar25 + fVar5;
    local_f8._0_4_ =
         (fVar39 * fStack_124 - fVar38 * fStack_120) + fVar37 * fStack_11c + fVar24 + fVar40;
    fStack_f0 = (fVar38 * local_128 - fVar37 * fStack_124) + fVar39 * fStack_11c + fVar27 + fVar6;
    fStack_ec = (fVar21 * fStack_11c - fVar21 * fStack_11c) + fVar21 * fStack_11c + 0.0 + 0.0;
  }
  else {
    fVar24 = fStack_124 + fStack_124;
    fVar27 = fStack_120 + fStack_120;
    fVar21 = (local_128 + local_128) * local_128;
    fVar25 = (local_128 + local_128) * fStack_11c;
    fVar29 = (float)((uint)((_DAT_146867510 - (fVar27 * fStack_120 + fVar24 * fStack_124)) * fVar16)
                    & _DAT_146867520);
    fVar31 = (float)((uint)((fRam0000000146867514 - (fVar27 * fStack_120 + fVar21)) * fVar3) &
                    uRam0000000146867524);
    fVar33 = (float)((uint)((fRam0000000146867518 - (fVar24 * fStack_124 + fVar21)) * fVar4) &
                    uRam0000000146867528);
    fVar35 = (float)((uint)((fRam000000014686751c - (fVar21 + fVar21)) * 0.0) & uRam000000014686752c
                    );
    fVar26 = local_228._4_4_ + local_228._4_4_;
    fVar28 = (float)uStack_220 + (float)uStack_220;
    fVar44 = (fVar27 * fStack_11c + fVar24 * local_128) * fVar16;
    fVar45 = (fVar25 + fVar27 * fStack_124) * fVar3;
    fVar46 = (fVar24 * fStack_11c + fVar27 * local_128) * fVar4;
    fVar21 = (fVar24 * local_128 - fVar27 * fStack_11c) * fVar3;
    fVar25 = (fVar27 * fStack_124 - fVar25) * fVar4;
    fVar23 = (fVar27 * local_128 - fVar24 * fStack_11c) * fVar16;
    fVar24 = ((float)local_228 + (float)local_228) * (float)local_228;
    fVar27 = ((float)local_228 + (float)local_228) * uStack_220._4_4_;
    fVar30 = (float)((uint)((_DAT_146867510 -
                            (fVar28 * (float)uStack_220 + fVar26 * local_228._4_4_)) * local_e8) &
                    _DAT_146867520);
    fVar32 = (float)((uint)((fRam0000000146867514 - (fVar28 * (float)uStack_220 + fVar24)) *
                           fStack_e4) & uRam0000000146867524);
    fVar34 = (float)((uint)((fRam0000000146867518 - (fVar26 * local_228._4_4_ + fVar24)) * fStack_e0
                           ) & uRam0000000146867528);
    fVar36 = (float)((uint)((fRam000000014686751c - (fVar24 + fVar24)) * fStack_dc) &
                    uRam000000014686752c);
    fVar41 = (fVar28 * uStack_220._4_4_ + fVar26 * (float)local_228) * local_e8;
    fVar42 = (fVar27 + fVar28 * local_228._4_4_) * fStack_e4;
    fVar43 = (fVar26 * uStack_220._4_4_ + fVar28 * (float)local_228) * fStack_e0;
    fVar24 = (fVar26 * (float)local_228 - fVar28 * uStack_220._4_4_) * fStack_e4;
    fVar27 = (fVar28 * local_228._4_4_ - fVar27) * fStack_e0;
    fVar26 = (fVar28 * (float)local_228 - fVar26 * uStack_220._4_4_) * local_e8;
    local_278 = fVar30 * fVar29 + fVar41 * fVar21 + fVar26 * fVar46 + fVar36 * fVar40;
    fStack_274 = fVar30 * fVar44 + fVar41 * fVar31 + fVar26 * fVar25 + fVar36 * fVar5;
    fStack_270 = fVar30 * fVar23 + fVar41 * fVar45 + fVar26 * fVar33 + fVar36 * fVar6;
    fStack_26c = fVar30 * fVar35 + fVar41 * fVar35 + fVar26 * fVar35 + fVar36 * fRam000000014686751c
    ;
    local_268 = fVar24 * fVar29 + fVar32 * fVar21 + fVar42 * fVar46 + fVar36 * fVar40;
    fStack_264 = fVar24 * fVar44 + fVar32 * fVar31 + fVar42 * fVar25 + fVar36 * fVar5;
    fStack_260 = fVar24 * fVar23 + fVar32 * fVar45 + fVar42 * fVar33 + fVar36 * fVar6;
    fStack_25c = fVar24 * fVar35 + fVar32 * fVar35 + fVar42 * fVar35 + fVar36 * fRam000000014686751c
    ;
    local_258 = fVar43 * fVar29 + fVar27 * fVar21 + fVar34 * fVar46 + fVar36 * fVar40;
    fStack_254 = fVar43 * fVar44 + fVar27 * fVar31 + fVar34 * fVar25 + fVar36 * fVar5;
    fStack_250 = fVar43 * fVar23 + fVar27 * fVar45 + fVar34 * fVar33 + fVar36 * fVar6;
    fStack_24c = fVar43 * fVar35 + fVar27 * fVar35 + fVar34 * fVar35 + fVar36 * fRam000000014686751c
    ;
    local_248 = fRam000000014686751c * fVar40 + fVar29 * 0.0 + fVar21 * 0.0 + fVar46 * 0.0;
    fStack_244 = fRam000000014686751c * fVar5 + fVar44 * 0.0 + fVar31 * 0.0 + fVar25 * 0.0;
    fStack_240 = fRam000000014686751c * fVar6 + fVar23 * 0.0 + fVar45 * 0.0 + fVar33 * 0.0;
    fStack_23c = fRam000000014686751c * fRam000000014686751c +
                 fVar35 * 0.0 + fVar35 * 0.0 + fVar35 * 0.0;
    FMatrix::RemoveScaling(&local_278);
    fVar37 = (float)((_DAT_146867560 ^ (uint)fVar37) & -(uint)(_DAT_146867570 <= local_e8 * fVar16)
                    ^ _DAT_146867560);
    fVar38 = (float)((uRam0000000146867564 ^ (uint)fVar38) &
                     -(uint)(fRam0000000146867574 <= fStack_e4 * fVar3) ^ uRam0000000146867564);
    fVar39 = (float)((uRam0000000146867568 ^ (uint)fVar39) &
                     -(uint)(fRam0000000146867578 <= fStack_e0 * fVar4) ^ uRam0000000146867568);
    fStack_270 = fStack_270 * fVar37;
    fStack_274 = fStack_274 * fVar37;
    local_278 = local_278 * fVar37;
    fStack_264 = fStack_264 * fVar38;
    local_268 = local_268 * fVar38;
    fStack_260 = fStack_260 * fVar38;
    fStack_254 = fStack_254 * fVar39;
    local_258 = local_258 * fVar39;
    fStack_250 = fStack_250 * fVar39;
    FQuat::FQuat(&local_118,&local_278);
    local_298 = 0x322bcc77;
    auVar22._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
    auVar22._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
    auVar22._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
    auVar22._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
    auVar20._0_4_ = auVar22._4_4_ + auVar22._0_4_;
    auVar20._4_4_ = auVar22._8_4_ + auVar22._4_4_;
    auVar20._8_4_ = auVar22._12_4_ + auVar22._8_4_;
    auVar20._12_4_ = auVar22._0_4_ + auVar22._12_4_;
    auVar18 = rsqrtps(auVar22,auVar20);
    fVar37 = auVar18._0_4_;
    fVar38 = auVar18._4_4_;
    fVar39 = auVar18._8_4_;
    fVar40 = auVar18._12_4_;
    fVar37 = (_DAT_146867500 - fVar37 * fVar37 * auVar20._0_4_ * _DAT_146867500) * fVar37 + fVar37;
    fVar38 = (fRam0000000146867504 - fVar38 * fVar38 * auVar20._4_4_ * fRam0000000146867504) *
             fVar38 + fVar38;
    fVar39 = (fRam0000000146867508 - fVar39 * fVar39 * auVar20._8_4_ * fRam0000000146867508) *
             fVar39 + fVar39;
    fVar40 = (fRam000000014686750c - fVar40 * fVar40 * auVar20._12_4_ * fRam000000014686750c) *
             fVar40 + fVar40;
    local_f8._4_4_ = fStack_244;
    local_f8._0_4_ = local_248;
    fStack_f0 = fStack_240;
    fStack_ec = 0.0;
    local_108 = (float)(((uint)((fVar37 + (_DAT_146867500 -
                                          fVar37 * fVar37 * auVar20._0_4_ * _DAT_146867500) * fVar37
                                ) * local_118) ^ _DAT_1468674f0) & -(uint)(1e-08 <= auVar20._0_4_) ^
                       _DAT_1468674f0);
    fStack_104 = (float)(((uint)((fVar38 + (fRam0000000146867504 -
                                           fVar38 * fVar38 * auVar20._4_4_ * fRam0000000146867504) *
                                           fVar38) * fStack_114) ^ uRam00000001468674f4) &
                         -(uint)(1e-08 <= auVar20._4_4_) ^ uRam00000001468674f4);
    fStack_100 = (float)(((uint)((fVar39 + (fRam0000000146867508 -
                                           fVar39 * fVar39 * auVar20._8_4_ * fRam0000000146867508) *
                                           fVar39) * fStack_110) ^ uRam00000001468674f8) &
                         -(uint)(1e-08 <= auVar20._8_4_) ^ uRam00000001468674f8);
    fStack_fc = (float)(((uint)((fVar40 + (fRam000000014686750c -
                                          fVar40 * fVar40 * auVar20._12_4_ * fRam000000014686750c) *
                                          fVar40) * fStack_10c) ^ uRam00000001468674fc) &
                        -(uint)(1e-08 <= auVar20._12_4_) ^ uRam00000001468674fc);
  }
  fStack_dc = fStack_dc * 0.0;
  fStack_e0 = fStack_e0 * fVar4;
  fStack_e4 = fStack_e4 * fVar3;
  local_e8 = local_e8 * fVar16;
  local_218[8] = 0;
  local_218[9] = 0;
  local_218[10] = 0;
  local_218[0xb] = 0;
  local_218[0xc] = 0;
  local_218[0xd] = 0;
  local_218[0xe] = 0;
  local_218[0xf] = 0;
  local_238[0] = 0;
  local_238[1] = 0;
  if (((*(char *)((longlong)param_1 + 0x55c) == '\0') || ((char)param_1[0x98] != '\0')) ||
     (fVar16 = *(float *)((longlong)param_1 + 0x574),
     fVar16 == *(float *)((longlong)param_1 + 0x514))) {
    fVar16 = *(float *)((longlong)param_1 + 0x514);
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  (**(code **)(*param_1 + 0x6f0))(param_1,local_188,fVar16);
  iVar8 = local_150;
  lVar15 = (longlong)local_150;
  lVar11 = param_1[0x23];
  for (plVar13 = local_158; plVar13 != local_158 + lVar15; plVar13 = plVar13 + 1) {
    if (*plVar13 == lVar11) {
      if ((int)((longlong)plVar13 - (longlong)local_158 >> 3) != -1) goto LAB_140ab149e;
      break;
    }
  }
  local_150 = local_150 + 1;
  if (local_14c < local_150) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_158,iVar8);
  }
  local_158[lVar15] = lVar11;
LAB_140ab149e:
  local_2d0 = local_238;
  local_2d8 = local_218 + 8;
  local_147 = param_2;
  FUN_140c10df0(param_1,&local_108,param_1[0x96] + 0x210,local_188);
  local_2a8 = local_218;
  local_2a0 = 1;
  local_2b0 = local_218 + 2;
  local_218[6] = 0;
  local_2b8 = local_288;
  local_218[7] = 0;
  local_2c0 = local_288;
  local_2c8 = local_288;
  local_2d0 = local_218 + 6;
  local_218[4] = 0;
  local_218[5] = 0;
  local_218[2] = 0;
  local_218[3] = 0;
  local_218[0] = 0;
  local_218[1] = 0;
  local_288[0] = 0;
  local_288[1] = 0;
  local_2d8 = local_218 + 4;
  UProceduralMeshComponent::CreateMeshSection_LinearColor
            (param_1[0x96],0,local_218 + 8,local_218 + 10);
  if (local_288[0] != 0) {
    FMemory::Free();
  }
  if ((char)param_1[0x98] != '\0') {
    lVar11 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar11 == 0) goto LAB_140ab1661;
    uVar12 = (**(code **)(*param_1 + 0x148))(param_1);
    cVar7 = UWorld::IsGameWorld(uVar12);
    if (cVar7 != '\0') goto LAB_140ab1661;
  }
  lVar11 = FActiveSound::GetNewBusSends(param_1[0x96]);
  uVar9 = *(undefined4 *)(lVar11 + 0x14);
  lVar11 = FActiveSound::GetNewBusSends(param_1[0x96]);
  local_298 = *(undefined4 *)(lVar11 + 8);
  if ((longlong *)&local_298 != param_1 + 0x97) {
    param_1[0x97] = CONCAT44(uVar9,local_298);
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  lVar11 = param_1[0x8c];
  uStack_294 = uVar9;
  if (lVar11 != 0) {
    puVar14 = *(undefined8 **)(lVar11 + 0x548);
    puVar10 = puVar14 + *(int *)(lVar11 + 0x550);
    for (; puVar14 != puVar10; puVar14 = puVar14 + 1) {
      if ((longlong *)*puVar14 == param_1) goto LAB_140ab1661;
    }
  }
  FUN_140abc270(param_1);
LAB_140ab1661:
  if (bVar2) {
    FUN_140972a40(param_1[0x96],0);
  }
  else {
    local_2d8 = (longlong *)CONCAT44(local_2d8._4_4_,(int)param_1[0x99]);
    FUN_140ab1880(param_1[0x9a],param_1[0x96] + 0x210,local_218 + 8,local_238);
    (**(code **)(*(longlong *)param_1[0x96] + 0x488))((longlong *)param_1[0x96],0,1,0);
    if (param_1[0x9e] == 0) {
      uVar9 = 0x3f800000;
    }
    else {
      uVar9 = FUN_140ad4b80();
    }
    FUN_140aa5b40(param_1[0x9b],1,uVar9);
    FUN_140ac2bf0(param_1);
    uVar9 = FUN_140972a90(param_1[0x96],0);
    *(undefined4 *)((longlong)param_1 + 0x4c4) = uVar9;
    if (param_1[0x9e] != 0) {
      fVar16 = (float)FUN_140ad5fe0();
      *(float *)((longlong)param_1 + 0x4c4) = fVar16 * *(float *)((longlong)param_1 + 0x4c4);
    }
    if (param_1[0xc2] != 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x38) < DAT_146867bf0) &&
         (_Init_thread_header(&DAT_146867bf0), DAT_146867bf0 == -1)) {
        FName::FName(&DAT_146867be8,L"SurfaceArea",1);
        _Init_thread_footer(&DAT_146867bf0);
      }
      FUN_14260f0c0(param_1[0xc2],DAT_146867be8,*(undefined4 *)((longlong)param_1 + 0x4c4));
    }
  }
  if (local_218[0] != 0) {
    FMemory::Free();
  }
  if (local_218[2] != 0) {
    FMemory::Free();
  }
  if (local_218[4] != 0) {
    FMemory::Free();
  }
  if (local_218[6] != 0) {
    FMemory::Free();
  }
  if (local_158 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_238[0] != 0) {
    FMemory::Free();
  }
  if (local_218[0xe] != 0) {
    FMemory::Free();
  }
  if (local_218[0xc] != 0) {
    FMemory::Free();
  }
  if (local_218[10] != 0) {
    FMemory::Free();
  }
  if (local_218[8] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140ab1880 FUN_140ab1880 body=1038 status=ok
// SIG undefined FUN_140ab1880(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ab1880(longlong *param_1,undefined1 (*param_2) [16],longlong *param_3,
                  undefined8 *param_4,undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  int iVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float local_68;
  float fStack_64;
  float local_60;
  
  plVar1 = param_1 + 0xdf;
  uVar16 = 0;
  iVar17 = *(int *)(param_4 + 1);
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)((longlong)param_1 + 0x704) != iVar17) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>,FDefaultAllocator>::ResizeTo
              (plVar1);
  }
  piVar18 = (int *)*param_4;
  uVar21 = (longlong)*(int *)(param_4 + 1) & 0x3fffffffffffffff;
  if (piVar18 + *(int *)(param_4 + 1) < piVar18) {
    uVar21 = uVar16;
  }
  if (uVar21 != 0) {
    do {
      auVar30 = *param_2;
      fVar23 = auVar30._0_4_;
      fVar25 = auVar30._4_4_;
      fVar27 = auVar30._8_4_;
      fVar28 = auVar30._12_4_;
      lVar12 = (longlong)*piVar18;
      auVar29._0_8_ = auVar30._4_8_;
      auVar29._8_4_ = fVar23;
      auVar29._12_4_ = fVar28;
      lVar2 = *param_3;
      fVar31 = *(float *)(lVar2 + lVar12 * 0xc) * *(float *)param_2[2];
      fVar33 = *(float *)(lVar2 + 4 + lVar12 * 0xc) * *(float *)(param_2[2] + 4);
      fVar35 = *(float *)(lVar2 + 8 + lVar12 * 0xc) * *(float *)(param_2[2] + 8);
      fVar22 = fVar35 * fVar25 - fVar33 * fVar27;
      fVar24 = fVar31 * fVar27 - fVar35 * fVar23;
      fVar26 = fVar33 * fVar23 - fVar31 * fVar25;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar32 = *(float *)(param_1 + 0x42) * _DAT_146867860;
      fVar34 = *(float *)((longlong)param_1 + 0x214) * fRam0000000146867864;
      fVar36 = *(float *)(param_1 + 0x43) * fRam0000000146867868;
      fVar37 = *(float *)((longlong)param_1 + 0x21c) * fRam000000014686786c;
      auVar30 = *(undefined1 (*) [16])(param_1 + 0x46);
      fVar6 = auVar30._0_4_;
      fVar7 = auVar30._4_4_;
      fVar8 = auVar30._8_4_;
      auVar30 = rcpps(auVar29,auVar30);
      fVar31 = (float)((uint)(((fVar26 * fVar25 - fVar24 * fVar27) + fVar28 * fVar22 + fVar31 +
                              *(float *)param_2[1]) - *(float *)(param_1 + 0x44)) & _DAT_146867520);
      fVar33 = (float)((uint)(((fVar22 * fVar27 - fVar26 * fVar23) + fVar28 * fVar24 + fVar33 +
                              *(float *)(param_2[1] + 4)) - *(float *)((longlong)param_1 + 0x224)) &
                      uRam0000000146867524);
      fVar26 = (float)((uint)(((fVar24 * fVar23 - fVar22 * fVar25) + fVar28 * fVar26 + fVar35 +
                              *(float *)(param_2[1] + 8)) - *(float *)(param_1 + 0x45)) &
                      uRam0000000146867528);
      fVar23 = fVar26 * fVar34 - fVar33 * fVar36;
      fVar25 = fVar31 * fVar36 - fVar26 * fVar32;
      fVar27 = fVar33 * fVar32 - fVar31 * fVar34;
      fVar28 = auVar30._0_4_;
      fVar22 = auVar30._4_4_;
      fVar24 = auVar30._8_4_;
      fVar23 = fVar23 + fVar23;
      fVar25 = fVar25 + fVar25;
      fVar27 = fVar27 + fVar27;
      fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar6;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar7;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar8;
      fVar28 = (fVar28 + fVar28) - fVar28 * fVar28 * fVar6;
      fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * fVar7;
      fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * fVar8;
      bVar3 = (float)((uint)fVar6 & _DAT_146867820) <= _DAT_146867850;
      bVar4 = (float)((uint)fVar7 & uRam0000000146867824) <= fRam0000000146867854;
      bVar5 = (float)((uint)fVar8 & uRam0000000146867828) <= fRam0000000146867858;
      iVar17 = (int)param_1[0xe0];
      *(int *)(param_1 + 0xe0) = iVar17 + 1;
      local_68 = ((fVar27 * fVar34 - fVar25 * fVar36) + fVar37 * fVar23 + fVar31) *
                 (float)(-(uint)bVar3 & (uint)fVar28 ^ (uint)fVar28);
      fStack_64 = ((fVar23 * fVar36 - fVar27 * fVar32) + fVar37 * fVar25 + fVar33) *
                  (float)(-(uint)bVar4 & (uint)fVar22 ^ (uint)fVar22);
      local_60 = ((fVar25 * fVar32 - fVar23 * fVar34) + fVar37 * fVar27 + fVar26) *
                 (float)(-(uint)bVar5 & (uint)fVar24 ^ (uint)fVar24);
      if (*(int *)((longlong)param_1 + 0x704) < iVar17 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(plVar1,iVar17);
      }
      lVar2 = *plVar1;
      piVar18 = piVar18 + 1;
      uVar16 = uVar16 + 1;
      *(ulonglong *)(lVar2 + (longlong)iVar17 * 0xc) = CONCAT44(fStack_64,local_68);
      *(float *)(lVar2 + 8 + (longlong)iVar17 * 0xc) = local_60;
    } while (uVar16 != uVar21);
  }
  *(undefined4 *)(param_1 + 0xe1) = param_5;
  (**(code **)(*param_1 + 0x4b8))(param_1);
  plVar13 = (longlong *)FUN_140aadf60(param_1);
  lVar2 = param_1[0xe0];
  puVar19 = (undefined8 *)plVar13[5];
  for (iVar17 = (int)plVar13[6]; iVar17 != 0; iVar17 = iVar17 + -1) {
    *puVar19 = &PTR__scalar_deleting_destructor__1440fbd58;
    if (puVar19[10] != 0) {
      FMemory::Free();
    }
    puVar19 = puVar19 + 0x16;
  }
  *(undefined4 *)(plVar13 + 6) = 0;
  if (*(int *)((longlong)plVar13 + 0x34) != (int)lVar2) {
    TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(plVar13 + 5,(int)lVar2);
  }
  puVar20 = (undefined8 *)*plVar1;
  puVar19 = (undefined8 *)((longlong)puVar20 + (longlong)(int)param_1[0xe0] * 0xc);
  for (; puVar20 != puVar19; puVar20 = (undefined8 *)((longlong)puVar20 + 0xc)) {
    iVar17 = (int)plVar13[6];
    *(int *)(plVar13 + 6) = iVar17 + 1;
    if (*(int *)((longlong)plVar13 + 0x34) < iVar17 + 1) {
      TArray<FMovieSceneExecutionTokens::FEntry,FDefaultAllocator>::ResizeGrow(plVar13 + 5,iVar17);
    }
    lVar2 = param_1[0xe1];
    puVar15 = (undefined8 *)((longlong)iVar17 * 0xb0 + plVar13[5]);
    *(undefined4 *)(puVar15 + 1) = 0;
    puVar15[2] = 0;
    *(byte *)((longlong)puVar15 + 0x1c) = *(byte *)((longlong)puVar15 + 0x1c) | 1;
    *(undefined4 *)(puVar15 + 3) = 0;
    *(undefined4 *)(puVar15 + 4) = 6;
    puVar15[5] = puVar15;
    *(undefined1 *)(puVar15 + 6) = 3;
    puVar15[7] = 0;
    puVar15[9] = 0;
    puVar15[10] = 0;
    puVar15[0xb] = 0;
    *puVar15 = &PTR_FUN_1440fbd88;
    puVar15[0x14] = _DAT_1468b5d90;
    uVar9 = DAT_1468b5d98;
    *(int *)((longlong)puVar15 + 0xac) = (int)lVar2;
    *(undefined4 *)(puVar15 + 0x15) = uVar9;
    lVar2 = plVar13[5];
    lVar12 = (longlong)(int)plVar13[6] * 0xb0;
    *(undefined8 *)(lVar12 + -0x10 + lVar2) = *puVar20;
    *(undefined4 *)(lVar12 + -8 + lVar2) = *(undefined4 *)(puVar20 + 1);
  }
  puVar14 = (undefined4 *)FGuid::NewGuid(&local_68);
  uVar9 = puVar14[1];
  uVar10 = puVar14[2];
  uVar11 = puVar14[3];
  *(undefined4 *)(plVar13 + 0x1e) = *puVar14;
  *(undefined4 *)((longlong)plVar13 + 0xf4) = uVar9;
  *(undefined4 *)(plVar13 + 0x1f) = uVar10;
  *(undefined4 *)((longlong)plVar13 + 0xfc) = uVar11;
  (**(code **)(*plVar13 + 0x290))(plVar13);
  FUN_14234b040(param_1);
                    /* WARNING: Could not recover jumptable at 0x000140ab1c87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
  return;
}



// FUNCTION 140ab1c90 FUN_140ab1c90 body=71 status=ok
// SIG undefined FUN_140ab1c90(void)

undefined1 FUN_140ab1c90(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\x01') {
    cVar1 = FUN_140ac35b0(param_2,(int)param_1[1],8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140ab1ce0 FUN_140ab1ce0 body=108 status=ok
// SIG undefined FUN_140ab1ce0(void)

undefined8 FUN_140ab1ce0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 == '\x01') && (cVar1 = FUN_140ac35b0(param_2,(int)param_1[1],8), cVar1 == '\0')) {
    return 0;
  }
  uVar2 = FWeakObjectPtr::Get(param_1 + 2);
  uVar3 = UXPrimaryDataAsset::GetPrivateStaticClass();
  cVar1 = FUN_140ac3520(param_2,uVar3,uVar2);
  if (cVar1 == '\0') {
    return 0;
  }
  return 1;
}



// FUNCTION 140ab1d50 FUN_140ab1d50 body=181 status=ok
// SIG undefined FUN_140ab1d50(void)

undefined8 FUN_140ab1d50(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (((cVar2 == '\x01') && (cVar2 = FUN_140ac35b0(param_2,(int)param_1[1],8), cVar2 == '\0')) ||
     (cVar2 = FUN_140ac35b0(param_2,(int)param_1[3],4), cVar2 == '\0')) {
LAB_140ab1dee:
    uVar3 = 0;
  }
  else {
    puVar5 = (undefined4 *)param_1[2];
    puVar1 = puVar5 + (longlong)(int)param_1[3] * 2;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 2) {
      local_res8 = *puVar5;
      local_resc = puVar5[1];
      uVar3 = FWeakObjectPtr::Get(&local_res8);
      uVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      cVar2 = FUN_140ac3520(param_2,uVar4,uVar3);
      if (cVar2 == '\0') goto LAB_140ab1dee;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140ab1e10 FUN_140ab1e10 body=166 status=ok
// SIG undefined FUN_140ab1e10(void)

undefined8 FUN_140ab1e10(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (((cVar2 == '\x01') && (cVar2 = FUN_140ac35b0(param_2,(int)param_1[1],8), cVar2 == '\0')) ||
     (cVar2 = FUN_140ac35b0(param_2,(int)param_1[3],4), cVar2 == '\0')) {
LAB_140ab1e9f:
    uVar3 = 0;
  }
  else {
    lVar5 = param_1[2];
    lVar1 = lVar5 + (longlong)(int)param_1[3] * 8;
    for (; lVar5 != lVar1; lVar5 = lVar5 + 8) {
      uVar3 = FWeakObjectPtr::Get(lVar5);
      uVar4 = FUN_1414187e0();
      cVar2 = FUN_140ac3520(param_2,uVar4,uVar3);
      if (cVar2 == '\0') goto LAB_140ab1e9f;
    }
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 140ab1ec0 FUN_140ab1ec0 body=165 status=ok
// SIG undefined FUN_140ab1ec0(void)

undefined8 FUN_140ab1ec0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 != '\x01') || (cVar1 = FUN_140ac35b0(param_2,(int)param_1[1],8), cVar1 != '\0')) {
    puVar2 = (undefined8 *)
             UE4Function_Private::TFunction_OwnedObject<<lambda_6ee2cf6eb29fb3eaf224d7c8f92aa15b>,0>
             ::GetAddress(param_1 + 2);
    cVar1 = FUN_140ac35b0(param_2,*(undefined4 *)(puVar2 + 1),7);
    if (cVar1 != '\0') {
      puVar3 = (undefined1 *)*puVar2;
      puVar4 = puVar3 + *(int *)(puVar2 + 1);
      while( true ) {
        if (puVar3 == puVar4) {
          return 1;
        }
        cVar1 = FUN_140ac35b0(param_2,*puVar3,8);
        if (cVar1 == '\0') break;
        puVar3 = puVar3 + 1;
      }
    }
  }
  return 0;
}



// FUNCTION 140ab1f70 FUN_140ab1f70 body=339 status=ok
// SIG undefined FUN_140ab1f70(void)

undefined8 FUN_140ab1f70(longlong *param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((((cVar2 != '\x01') || (cVar2 = FUN_140ac35b0(param_2,(int)param_1[1],8), cVar2 != '\0')) &&
      (cVar2 = FUN_140ac35b0(param_2,(char)param_1[2],4), cVar2 != '\0')) &&
     ((cVar2 = FUN_140ac35b0(param_2,*(undefined4 *)((longlong)param_1 + 0x14),7), cVar2 != '\0' &&
      (cVar2 = FUN_140ac35b0(param_2,(int)param_1[4],4), cVar2 != '\0')))) {
    puVar5 = (undefined4 *)param_1[3];
    puVar1 = puVar5 + (longlong)(int)param_1[4] * 2;
    for (; puVar5 != puVar1; puVar5 = puVar5 + 2) {
      local_res8 = *puVar5;
      local_resc = puVar5[1];
      uVar3 = FWeakObjectPtr::Get(&local_res8);
      uVar4 = FUN_14302b3d0();
      cVar2 = FUN_140ac3520(param_2,uVar4,uVar3);
      if (cVar2 == '\0') {
        return 0;
      }
    }
    cVar2 = FUN_140ac35b0(param_2,(int)param_1[6],4);
    if (cVar2 != '\0') {
      puVar5 = (undefined4 *)param_1[5];
      puVar1 = puVar5 + (longlong)(int)param_1[6] * 2;
      while( true ) {
        if (puVar5 == puVar1) {
          return 1;
        }
        local_res8 = *puVar5;
        local_resc = puVar5[1];
        uVar3 = FWeakObjectPtr::Get(&local_res8);
        uVar4 = FUN_14301f840();
        cVar2 = FUN_140ac3520(param_2,uVar4,uVar3);
        if (cVar2 == '\0') break;
        puVar5 = puVar5 + 2;
      }
    }
  }
  return 0;
}



// FUNCTION 140ab20d0 FUN_140ab20d0 body=160 status=ok
// SIG undefined FUN_140ab20d0(void)

bool FUN_140ab20d0(longlong *param_1,undefined8 *param_2)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  longlong local_18 [2];
  
  bVar3 = false;
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if (cVar2 == '\x01') {
    local_18[0] = 0;
    local_18[1] = 0x11;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
    FGenericPlatformString::Memcpy(local_18[0],L"ConsumableAmount",0x22);
    bVar3 = true;
    cVar2 = FUN_1416b3b00(*param_2,local_18,param_1 + 1);
    if (cVar2 == '\0') {
      bVar1 = true;
      goto LAB_140ab2146;
    }
  }
  bVar1 = false;
LAB_140ab2146:
  if ((bVar3) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return !bVar1;
}



// FUNCTION 140ab2170 FUN_140ab2170 body=332 status=ok
// SIG undefined FUN_140ab2170(void)

undefined8 FUN_140ab2170(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  longlong local_28 [2];
  undefined2 *local_18;
  undefined8 local_10;
  
  uVar3 = FUN_140ab20d0();
  if ((char)uVar3 == '\0') {
    return uVar3;
  }
  lVar8 = 0;
  local_28[1] = 0xd;
  local_18 = (undefined2 *)0x0;
  local_10 = 0;
  local_28[0] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"CurrencyType",0x1a);
  cVar2 = FUN_1416b40a0(*param_2,local_28,local_28 + 2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (cVar2 != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0x108);
    if (lVar1 != 0) {
      puVar6 = &DAT_143f3eda8;
      if ((int)local_10 != 0) {
        puVar6 = local_18;
      }
      plVar4 = (longlong *)FName::FName(local_res18,puVar6,1);
      plVar5 = *(longlong **)(lVar1 + 0x30);
      plVar7 = plVar5 + (longlong)*(int *)(lVar1 + 0x38) * 2;
      if (plVar5 != plVar7) {
        do {
          if (*plVar5 == *plVar4) {
            lVar8 = 0;
            if (plVar5 != (longlong *)0x0) {
              lVar8 = plVar5[1];
            }
            break;
          }
          plVar5 = plVar5 + 2;
        } while (plVar5 != plVar7);
      }
    }
    FWeakObjectPtr::operator=(param_1 + 0x10,lVar8);
    cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x10);
    if (cVar2 != '\0') {
      uVar3 = 1;
      goto LAB_140ab229a;
    }
  }
  uVar3 = 0;
LAB_140ab229a:
  if (local_18 != (undefined2 *)0x0) {
    FMemory::Free();
  }
  return uVar3;
}



// FUNCTION 140ab22c0 FUN_140ab22c0 body=599 status=ok
// SIG undefined FUN_140ab22c0(void)

undefined8 FUN_140ab22c0(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  void *pvVar5;
  longlong lVar6;
  longlong *plVar7;
  void *pvVar8;
  int iVar9;
  longlong *plVar10;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar4 = FUN_140ab20d0();
  if ((char)uVar4 == '\0') {
    return uVar4;
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  local_68 = (void *)0x0;
  local_60 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"Customizations",0x1e);
  cVar3 = FUN_1416b3f10(*param_2,&local_68,&local_78);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (cVar3 == '\0') {
LAB_140ab24ac:
    uVar4 = 0;
  }
  else {
    plVar10 = local_78 + (longlong)(int)local_70 * 2;
    for (plVar7 = local_78; plVar7 != plVar10; plVar7 = plVar7 + 2) {
      iVar9 = (int)plVar7[1];
      pvVar5 = (void *)*plVar7;
      local_68 = (void *)0x0;
      local_60._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
      if (iVar9 == 0) {
        pvVar8 = (void *)0x0;
        local_50 = iVar9;
        local_4c = 0;
      }
      else {
        local_60._0_4_ = iVar9;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar9,0);
        pvVar8 = local_68;
        _guard_xfg_dispatch_icall_nop(local_68,pvVar5,(longlong)iVar9 * 2);
        local_50 = (int)local_60;
        local_4c = local_60._4_4_;
      }
      local_48 = 0;
      local_40 = 0;
      local_38 = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      local_58 = pvVar8;
      FUN_1417978e0(&local_48,&local_58);
      pvVar5 = (void *)FSoftObjectPath::TryLoad(&local_48);
      if (pvVar5 == (void *)0x0) {
LAB_140ab2445:
        pvVar5 = (void *)0x0;
      }
      else {
        lVar6 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)((longlong)pvVar5 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar6 + 0x90) * 8) != lVar6 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140ab2445;
      }
      if (local_40 != 0) {
        FMemory::Free();
      }
      if (pvVar5 == (void *)0x0) goto LAB_140ab24ac;
      FWeakObjectPtr::operator=(&local_res18,pvVar5);
      iVar9 = *(int *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar9 + 1;
      if (*(int *)(param_1 + 0x1c) < iVar9 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar9);
      }
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar9 * 8);
      *puVar1 = local_res18;
      puVar1[1] = local_res1c;
    }
    uVar4 = 1;
  }
  plVar7 = local_78;
  for (iVar9 = (int)local_70; iVar9 != 0; iVar9 = iVar9 + -1) {
    if (*plVar7 != 0) {
      FMemory::Free();
    }
    plVar7 = plVar7 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return uVar4;
}



// FUNCTION 140ab2520 FUN_140ab2520 body=795 status=ok
// SIG undefined FUN_140ab2520(void)

undefined8 FUN_140ab2520(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar6 = FUN_140ab20d0();
  if ((char)uVar6 == '\0') {
    return uVar6;
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  local_88 = (longlong *)0x0;
  local_80 = 0;
  local_78 = (void *)0x0;
  local_70 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"License",0x10);
  cVar3 = FUN_1416b40a0(*param_2,&local_78,&local_68);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  uVar12 = local_80;
  if (cVar3 == '\0') {
    local_78 = (void *)0x0;
    local_70 = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"Licenses",0x12);
    FUN_1416b3f10(*param_2,&local_78,&local_88);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
  }
  else {
    lVar8 = (longlong)(int)local_80;
    iVar4 = (int)local_80 + 1;
    local_80 = CONCAT44(local_80._4_4_,iVar4);
    if (local_80._4_4_ < iVar4) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_88,uVar12 & 0xffffffff);
    }
    pvVar7 = local_68;
    plVar9 = local_88 + lVar8 * 2;
    *plVar9 = 0;
    lVar8 = (longlong)(int)local_60;
    *(int *)(plVar9 + 1) = (int)local_60;
    if ((int)local_60 == 0) {
      *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar9,local_60 & 0xffffffff,0);
      _guard_xfg_dispatch_icall_nop((void *)*plVar9,pvVar7,lVar8 * 2);
    }
  }
  uVar12 = (ulonglong)(int)local_80;
  if ((int)local_80 == 0) {
LAB_140ab27c3:
    uVar6 = 0;
  }
  else {
    plVar13 = local_88 + uVar12 * 2;
    plVar9 = local_88;
    if (local_88 != plVar13) {
      do {
        iVar4 = (int)plVar9[1];
        pvVar7 = (void *)*plVar9;
        local_78 = (void *)0x0;
        pvVar10 = (void *)0x0;
        uVar5 = 0;
        if (iVar4 != 0) {
          local_70._0_4_ = iVar4;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,iVar4,0);
          pvVar10 = local_78;
          _guard_xfg_dispatch_icall_nop(local_78,pvVar7,(longlong)iVar4 * 2);
          iVar4 = (int)local_70;
          uVar5 = local_70._4_4_;
        }
        local_48 = 0;
        local_40 = 0;
        local_38 = 0;
        local_78 = (void *)0x0;
        local_70 = 0;
        local_58 = pvVar10;
        local_50 = iVar4;
        local_4c = uVar5;
        FUN_1417978e0(&local_48,&local_58);
        pvVar7 = (void *)FSoftObjectPath::TryLoad(&local_48);
        if (pvVar7 == (void *)0x0) {
LAB_140ab2756:
          pvVar7 = (void *)0x0;
        }
        else {
          lVar8 = FUN_1414187e0();
          if ((*(int *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140ab2756;
        }
        if (local_40 != 0) {
          FMemory::Free();
        }
        if (pvVar7 == (void *)0x0) {
          uVar12 = local_80 & 0xffffffff;
          goto LAB_140ab27c3;
        }
        FWeakObjectPtr::operator=(&local_res18,pvVar7);
        iVar4 = *(int *)(param_1 + 0x18);
        *(int *)(param_1 + 0x18) = iVar4 + 1;
        if (*(int *)(param_1 + 0x1c) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0x10,iVar4);
        }
        plVar9 = plVar9 + 2;
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 8);
        *puVar1 = local_res18;
        puVar1[1] = local_res1c;
      } while (plVar9 != plVar13);
      uVar12 = local_80 & 0xffffffff;
    }
    uVar6 = 1;
  }
  uVar11 = (uint)uVar12;
  plVar9 = local_88;
  while (uVar11 != 0) {
    if (*plVar9 != 0) {
      FMemory::Free();
    }
    plVar9 = plVar9 + 2;
    uVar11 = (int)uVar12 - 1;
    uVar12 = (ulonglong)uVar11;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  return uVar6;
}



// FUNCTION 140ab2840 FUN_140ab2840 body=241 status=ok
// SIG undefined FUN_140ab2840(void)

undefined8 FUN_140ab2840(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong local_38;
  longlong local_30;
  longlong local_18 [2];
  
  uVar2 = FUN_140ab20d0();
  if ((char)uVar2 == '\0') {
    return uVar2;
  }
  local_30 = 0xd;
  local_18[0] = 0;
  local_18[1] = 0;
  local_38 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
  FGenericPlatformString::Memcpy(local_38,L"SerialNumber",0x1a);
  cVar1 = FUN_1416b40a0(*param_2,&local_38,local_18);
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (cVar1 != '\0') {
    param_1 = param_1 + 0x10;
    uVar2 = FUN_142fde710(&local_38,local_18);
    FUN_140aa0a20(param_1,uVar2);
    if (local_30 != 0) {
      FMemory::Free();
    }
    cVar1 = FUN_1430036a0(param_1);
    if (cVar1 != '\0') {
      FUN_142ff1ff0(param_1);
      uVar2 = 1;
      goto LAB_140ab2914;
    }
  }
  uVar2 = 0;
LAB_140ab2914:
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return uVar2;
}



// FUNCTION 140ab2940 FUN_140ab2940 body=1391 status=ok
// SIG undefined FUN_140ab2940(void)

undefined8 FUN_140ab2940(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  void *pvVar7;
  longlong lVar8;
  longlong *plVar9;
  void *pvVar10;
  undefined8 uVar11;
  int iVar12;
  void *pvVar13;
  longlong *plVar14;
  undefined8 local_res18;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  void *local_78;
  undefined8 local_70;
  void *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  uVar5 = FUN_140ab20d0();
  if ((char)uVar5 == '\0') {
    return uVar5;
  }
  pvVar13 = (void *)0x0;
  local_58 = 0;
  local_50 = 0;
  local_78 = (void *)0x0;
  local_70 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
  FGenericPlatformString::Memcpy(local_78,L"GameStageStrategy",0x24);
  cVar3 = FUN_1416b40a0(*param_2,&local_78,&local_58);
  if (local_78 != (void *)0x0) {
    FMemory::Free();
  }
  if (cVar3 != '\0') {
    local_78 = (void *)0x0;
    local_70 = 0xf;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    FGenericPlatformString::Memcpy(local_78,L"GameStageValue",0x1e);
    cVar3 = FUN_1416b3b00(*param_2,&local_78,param_1 + 0x14);
    if (local_78 != (void *)0x0) {
      FMemory::Free();
    }
    if (cVar3 != '\0') {
      cVar3 = FUN_140abe300(param_1,&local_58);
      *(char *)(param_1 + 0x10) = cVar3;
      if (cVar3 != '\0') {
        local_88 = (longlong *)0x0;
        local_80 = 0;
        local_78 = (void *)0x0;
        local_70 = 10;
        local_res18 = param_2;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        pvVar7 = local_78;
        FGenericPlatformString::Memcpy(local_78,L"ItemPools",0x14);
        local_68 = (void *)0x0;
        local_60 = 9;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        pvVar10 = local_68;
        FGenericPlatformString::Memcpy(local_68,L"ItemPool",0x12);
        FUN_140aa1000(&local_res18,&local_88,&local_68,&local_78);
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        local_98 = (longlong *)0x0;
        local_90 = 0;
        local_68 = (void *)0x0;
        local_60 = 0x12;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
        pvVar10 = local_68;
        FGenericPlatformString::Memcpy(local_68,L"InventoryBalances",0x24);
        local_78 = (void *)0x0;
        local_70 = 0x11;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
        pvVar7 = local_78;
        FGenericPlatformString::Memcpy(local_78,L"InventoryBalance",0x22);
        FUN_140aa1000(&local_res18,&local_98,&local_78,&local_68);
        if (pvVar7 != (void *)0x0) {
          FMemory::Free(pvVar7);
        }
        if (pvVar10 != (void *)0x0) {
          FMemory::Free(pvVar10);
        }
        if (((int)local_80 == 0) && ((int)local_90 == 0)) {
LAB_140ab2e6d:
          uVar11 = 0;
        }
        else {
          plVar14 = local_88 + (longlong)(int)local_80 * 2;
          for (plVar9 = local_88; plVar9 != plVar14; plVar9 = plVar9 + 2) {
            plVar6 = (longlong *)FString::FString(&local_78,plVar9);
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_68 = (void *)*plVar6;
            *plVar6 = 0;
            local_60 = plVar6[1];
            plVar6[1] = 0;
            FUN_1417978e0(&local_48,&local_68);
            if (*plVar6 != 0) {
              FMemory::Free();
            }
            pvVar7 = (void *)FSoftObjectPath::TryLoad(&local_48);
            if (pvVar7 == (void *)0x0) {
LAB_140ab2c5a:
              pvVar7 = pvVar13;
            }
            else {
              lVar8 = FUN_14302b3d0();
              if ((*(int *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x88) +
                      (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_140ab2c5a;
            }
            if (local_40 != 0) {
              FMemory::Free();
            }
            if (pvVar7 == (void *)0x0) goto LAB_140ab2e6d;
            FWeakObjectPtr::operator=(&local_res18,pvVar7);
            iVar12 = *(int *)(param_1 + 0x20);
            *(int *)(param_1 + 0x20) = iVar12 + 1;
            if (*(int *)(param_1 + 0x24) < iVar12 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x18,iVar12);
            }
            lVar8 = *(longlong *)(param_1 + 0x18);
            *(undefined4 *)(lVar8 + (longlong)iVar12 * 8) = (undefined4)local_res18;
            *(undefined4 *)(lVar8 + 4 + (longlong)iVar12 * 8) = local_res18._4_4_;
          }
          plVar14 = local_98 + (longlong)(int)local_90 * 2;
          uVar5 = local_70;
          for (plVar9 = local_98; plVar9 != plVar14; plVar9 = plVar9 + 2) {
            local_70._0_4_ = (int)plVar9[1];
            lVar8 = (longlong)(int)local_70;
            pvVar7 = (void *)*plVar9;
            local_78 = (void *)0x0;
            local_70._4_4_ = (undefined4)((ulonglong)uVar5 >> 0x20);
            pvVar10 = pvVar13;
            uVar4 = 0;
            if ((int)local_70 != 0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_78,(int)local_70,0);
              pvVar10 = local_78;
              _guard_xfg_dispatch_icall_nop(local_78,pvVar7,lVar8 * 2);
              uVar4 = local_70._4_4_;
            }
            local_48 = 0;
            local_40 = 0;
            local_38 = 0;
            local_78 = (void *)0x0;
            local_60 = CONCAT44(uVar4,(int)local_70);
            local_70 = 0;
            local_68 = pvVar10;
            FUN_1417978e0(&local_48,&local_68);
            pvVar7 = (void *)FSoftObjectPath::TryLoad(&local_48);
            if (pvVar7 == (void *)0x0) {
LAB_140ab2d95:
              pvVar7 = pvVar13;
            }
            else {
              lVar8 = FUN_14301f840();
              if ((*(int *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90))
                 || (*(longlong *)
                      (*(longlong *)(*(longlong *)((longlong)pvVar7 + 0x10) + 0x88) +
                      (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) goto LAB_140ab2d95;
            }
            if (local_40 != 0) {
              FMemory::Free();
            }
            if (pvVar7 == (void *)0x0) goto LAB_140ab2e6d;
            FWeakObjectPtr::operator=(&local_res18,pvVar7);
            iVar12 = *(int *)(param_1 + 0x30);
            *(int *)(param_1 + 0x30) = iVar12 + 1;
            if (*(int *)(param_1 + 0x34) < iVar12 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (param_1 + 0x28,iVar12);
            }
            puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar12 * 8);
            *puVar1 = (undefined4)local_res18;
            puVar1[1] = local_res18._4_4_;
            uVar5 = local_70;
          }
          uVar11 = 1;
          local_70 = uVar5;
        }
        plVar9 = local_98;
        for (iVar12 = (int)local_90; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_98 != (longlong *)0x0) {
          FMemory::Free(local_98);
        }
        plVar9 = local_88;
        for (iVar12 = (int)local_80; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 2;
        }
        if (local_88 != (longlong *)0x0) {
          FMemory::Free();
        }
        goto LAB_140ab2e79;
      }
    }
  }
  uVar11 = 0;
LAB_140ab2e79:
  if (local_58 != 0) {
    FMemory::Free();
  }
  return uVar11;
}



// FUNCTION 140ab2eb0 FUN_140ab2eb0 body=72 status=ok
// SIG undefined FUN_140ab2eb0(void)

undefined1 FUN_140ab2eb0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if (cVar1 == '\x01') {
    cVar1 = FUN_140ab8370(param_2,param_1 + 1,8);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 140ab2f00 FUN_140ab2f00 body=247 status=ok
// SIG undefined FUN_140ab2f00(void)

undefined8 FUN_140ab2f00(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined4 local_res8 [2];
  
  cVar1 = (**(code **)(*param_1 + 0x10))();
  if ((cVar1 != '\x01') || (cVar1 = FUN_140ab8370(param_2,param_1 + 1,8), cVar1 != '\0')) {
    uVar4 = UXPrimaryDataAsset::GetPrivateStaticClass();
    local_res8[0] = 0;
    uVar5 = FUN_142ff6920();
    uVar3 = FUN_142ff71d0(uVar5,uVar4,param_3);
    cVar1 = FUN_140ab8370(param_2,local_res8,uVar3);
    if (cVar1 != '\0') {
      uVar5 = FUN_142ff6920();
      lVar6 = FUN_142ff6ea0(uVar5,uVar4,local_res8[0]);
      if ((lVar6 != 0) && (lVar6 != 0)) {
        lVar7 = FUN_141304630();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          FWeakObjectPtr::operator=(param_1 + 2,lVar6);
          return 1;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ab3000 FUN_140ab3000 body=469 status=ok
// SIG undefined FUN_140ab3000(void)

undefined8 FUN_140ab3000(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res8 [2];
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 != '\x01') || (cVar2 = FUN_140ab8370(param_2,param_1 + 1,8), cVar2 != '\0')) {
    local_res8[0] = 0;
    cVar2 = FUN_140ab8370(param_2,local_res8,4);
    if ((cVar2 != '\0') && (local_res8[0] != 0)) {
      iVar10 = (int)param_1[3];
      if (iVar10 < local_res8[0]) {
        iVar11 = local_res8[0] - iVar10;
        iVar4 = iVar10 + iVar11;
        *(int *)(param_1 + 3) = iVar4;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1[2] + (longlong)iVar10 * 8),0,(longlong)iVar11 << 3);
      }
      else if ((local_res8[0] < iVar10) && (iVar4 = iVar10 - local_res8[0], iVar4 != 0)) {
        iVar11 = (iVar10 - iVar4) - local_res8[0];
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[2] + (longlong)local_res8[0] * 8),
                     (void *)(param_1[2] + (longlong)(iVar4 + local_res8[0]) * 8),
                     (longlong)iVar11 << 3);
          iVar10 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar10 - iVar4;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 2);
      }
      lVar12 = param_1[2];
      lVar1 = lVar12 + (longlong)(int)param_1[3] * 8;
      while( true ) {
        if (lVar12 == lVar1) {
          return 1;
        }
        uVar6 = UUGStartScreenUW::GetPrivateStaticClass();
        local_res8[0] = 0;
        uVar7 = FUN_142ff6920();
        uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
        cVar2 = FUN_140ab8370(param_2,local_res8,uVar5);
        if (cVar2 == '\0') break;
        uVar7 = FUN_142ff6920();
        lVar8 = FUN_142ff6ea0(uVar7,uVar6,local_res8[0]);
        if (lVar8 == 0) {
          return 0;
        }
        if (lVar8 == 0) {
          return 0;
        }
        lVar9 = UUGStartScreenUW::GetPrivateStaticClass();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return 0;
        }
        FWeakObjectPtr::operator=(lVar12,lVar8);
        lVar12 = lVar12 + 8;
      }
    }
  }
  return 0;
}



// FUNCTION 140ab31e0 FUN_140ab31e0 body=469 status=ok
// SIG undefined FUN_140ab31e0(void)

undefined8 FUN_140ab31e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res8 [2];
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 != '\x01') || (cVar2 = FUN_140ab8370(param_2,param_1 + 1,8), cVar2 != '\0')) {
    local_res8[0] = 0;
    cVar2 = FUN_140ab8370(param_2,local_res8,4);
    if ((cVar2 != '\0') && (local_res8[0] != 0)) {
      iVar10 = (int)param_1[3];
      if (iVar10 < local_res8[0]) {
        iVar11 = local_res8[0] - iVar10;
        iVar4 = iVar10 + iVar11;
        *(int *)(param_1 + 3) = iVar4;
        if (*(int *)((longlong)param_1 + 0x1c) < iVar4) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 2);
        }
        _guard_xfg_dispatch_icall_nop
                  ((void *)(param_1[2] + (longlong)iVar10 * 8),0,(longlong)iVar11 << 3);
      }
      else if ((local_res8[0] < iVar10) && (iVar4 = iVar10 - local_res8[0], iVar4 != 0)) {
        iVar11 = (iVar10 - iVar4) - local_res8[0];
        if (iVar11 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(param_1[2] + (longlong)local_res8[0] * 8),
                     (void *)(param_1[2] + (longlong)(iVar4 + local_res8[0]) * 8),
                     (longlong)iVar11 << 3);
          iVar10 = (int)param_1[3];
        }
        *(int *)(param_1 + 3) = iVar10 - iVar4;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 2);
      }
      lVar12 = param_1[2];
      lVar1 = lVar12 + (longlong)(int)param_1[3] * 8;
      while( true ) {
        if (lVar12 == lVar1) {
          return 1;
        }
        uVar6 = FUN_1414187e0();
        local_res8[0] = 0;
        uVar7 = FUN_142ff6920();
        uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
        cVar2 = FUN_140ab8370(param_2,local_res8,uVar5);
        if (cVar2 == '\0') break;
        uVar7 = FUN_142ff6920();
        lVar8 = FUN_142ff6ea0(uVar7,uVar6,local_res8[0]);
        if (lVar8 == 0) {
          return 0;
        }
        if (lVar8 == 0) {
          return 0;
        }
        lVar9 = FUN_1414187e0();
        if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
          return 0;
        }
        FWeakObjectPtr::operator=(lVar12,lVar8);
        lVar12 = lVar12 + 8;
      }
    }
  }
  return 0;
}



// FUNCTION 140ab33c0 FUN_140ab33c0 body=349 status=ok
// SIG undefined FUN_140ab33c0(void)

ulonglong FUN_140ab33c0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  size_t _Size;
  uint uVar6;
  int local_res8 [2];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined1 local_38 [8];
  longlong local_30;
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 != '\x01') || (uVar3 = FUN_140ab8370(param_2,param_1 + 1,8), (char)uVar3 != '\0')) {
    uVar5 = 0;
    local_res8[0] = 0;
    uVar3 = FUN_140ab8370(param_2,local_res8,7);
    iVar1 = local_res8[0];
    if ((char)uVar3 != '\0') {
      _Size = (size_t)local_res8[0];
      local_48 = (void *)0x0;
      local_3c = 0;
      local_40 = local_res8[0];
      if (0 < local_res8[0]) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeGrow(&local_48);
      }
      _guard_xfg_dispatch_icall_nop(local_48,0,_Size);
      uVar3 = uVar5;
      if (0 < iVar1) {
        do {
          local_res8[0] = 0;
          cVar2 = FUN_140ab8370(param_2,local_res8,8);
          if (cVar2 == '\0') goto LAB_140ab34de;
          uVar6 = (int)uVar3 + 1;
          *(undefined1 *)((longlong)local_48 + uVar5) = (undefined1)local_res8[0];
          uVar5 = uVar5 + 1;
          uVar3 = (ulonglong)uVar6;
        } while ((int)uVar6 < iVar1);
      }
      param_1 = param_1 + 2;
      uVar4 = FUN_142fde6b0(local_38,&local_48,1);
      FUN_140aa0a20(param_1,uVar4);
      if (local_30 != 0) {
        FMemory::Free();
      }
      cVar2 = FUN_1430036a0(param_1);
      if (cVar2 == '\0') {
LAB_140ab34de:
        uVar3 = 0;
      }
      else {
        FUN_142ff1ff0(param_1);
        uVar3 = 1;
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free();
      }
      return uVar3;
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 140ab3520 FUN_140ab3520 body=925 status=ok
// SIG undefined FUN_140ab3520(void)

undefined8 FUN_140ab3520(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res8 [2];
  
  cVar2 = (**(code **)(*param_1 + 0x10))();
  if ((cVar2 != '\x01') || (cVar2 = FUN_140ab8370(param_2,param_1 + 1,8), cVar2 != '\0')) {
    local_res8[0] = 0;
    cVar2 = FUN_140ab8370(param_2,local_res8,4);
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 2) = (undefined1)local_res8[0];
      cVar2 = FUN_140ab8370(param_2,(longlong)param_1 + 0x14,7);
      if (cVar2 != '\0') {
        local_res8[0] = 0;
        cVar2 = FUN_140ab8370(param_2,local_res8,4);
        if (cVar2 != '\0') {
          if (0 < local_res8[0]) {
            iVar10 = (int)param_1[4];
            if (iVar10 < local_res8[0]) {
              iVar11 = local_res8[0] - iVar10;
              iVar4 = iVar10 + iVar11;
              *(int *)(param_1 + 4) = iVar4;
              if (*(int *)((longlong)param_1 + 0x24) < iVar4) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 3);
              }
              _guard_xfg_dispatch_icall_nop
                        ((void *)(param_1[3] + (longlong)iVar10 * 8),0,(longlong)iVar11 << 3);
            }
            else if ((local_res8[0] < iVar10) && (iVar4 = iVar10 - local_res8[0], iVar4 != 0)) {
              iVar11 = (iVar10 - iVar4) - local_res8[0];
              if (iVar11 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[3] + (longlong)local_res8[0] * 8),
                           (void *)(param_1[3] + (longlong)(iVar4 + local_res8[0]) * 8),
                           (longlong)iVar11 << 3);
                iVar10 = (int)param_1[4];
              }
              *(int *)(param_1 + 4) = iVar10 - iVar4;
              TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 3);
            }
            lVar12 = param_1[3];
            lVar1 = lVar12 + (longlong)(int)param_1[4] * 8;
            for (; lVar12 != lVar1; lVar12 = lVar12 + 8) {
              uVar6 = FUN_14302b3d0();
              local_res8[0] = 0;
              uVar7 = FUN_142ff6920();
              uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
              cVar2 = FUN_140ab8370(param_2,local_res8,uVar5);
              if (cVar2 == '\0') {
                return 0;
              }
              uVar7 = FUN_142ff6920();
              lVar8 = FUN_142ff6ea0(uVar7,uVar6,local_res8[0]);
              if (lVar8 == 0) {
                return 0;
              }
              if (lVar8 == 0) {
                return 0;
              }
              lVar9 = FUN_14302b3d0();
              if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                bVar3 = false;
              }
              else {
                bVar3 = true;
              }
              if (!bVar3) {
                return 0;
              }
              FWeakObjectPtr::operator=(lVar12,lVar8);
            }
          }
          local_res8[0] = 0;
          cVar2 = FUN_140ab8370(param_2,local_res8,4);
          if (cVar2 != '\0') {
            if (0 < local_res8[0]) {
              iVar10 = (int)param_1[6];
              if (iVar10 < local_res8[0]) {
                iVar11 = local_res8[0] - iVar10;
                iVar4 = iVar10 + iVar11;
                *(int *)(param_1 + 6) = iVar4;
                if (*(int *)((longlong)param_1 + 0x34) < iVar4) {
                  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 5);
                }
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[5] + (longlong)iVar10 * 8),0,(longlong)iVar11 << 3);
              }
              else if ((local_res8[0] < iVar10) && (iVar4 = iVar10 - local_res8[0], iVar4 != 0)) {
                iVar11 = (iVar10 - iVar4) - local_res8[0];
                if (iVar11 != 0) {
                  _guard_xfg_dispatch_icall_nop
                            ((void *)(param_1[5] + (longlong)local_res8[0] * 8),
                             (void *)(param_1[5] + (longlong)(iVar4 + local_res8[0]) * 8),
                             (longlong)iVar11 << 3);
                  iVar10 = (int)param_1[6];
                }
                *(int *)(param_1 + 6) = iVar10 - iVar4;
                TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 5);
              }
              lVar12 = param_1[5];
              lVar1 = lVar12 + (longlong)(int)param_1[6] * 8;
              for (; lVar12 != lVar1; lVar12 = lVar12 + 8) {
                uVar6 = FUN_14301f840();
                local_res8[0] = 0;
                uVar7 = FUN_142ff6920();
                uVar5 = FUN_142ff71d0(uVar7,uVar6,param_3);
                cVar2 = FUN_140ab8370(param_2,local_res8,uVar5);
                if (cVar2 == '\0') {
                  return 0;
                }
                uVar7 = FUN_142ff6920();
                lVar8 = FUN_142ff6ea0(uVar7,uVar6,local_res8[0]);
                if (lVar8 == 0) {
                  return 0;
                }
                if (lVar8 == 0) {
                  return 0;
                }
                lVar9 = FUN_14301f840();
                if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x88) +
                     (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
                  bVar3 = false;
                }
                else {
                  bVar3 = true;
                }
                if (!bVar3) {
                  return 0;
                }
                FWeakObjectPtr::operator=(lVar12,lVar8);
              }
            }
            if (((int)param_1[4] != 0) || ((int)param_1[6] != 0)) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ab38c0 FUN_140ab38c0 body=100 status=ok
// SIG undefined FUN_140ab38c0(void)

void FUN_140ab38c0(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1404d4770();
  lVar2 = *param_2;
  if (*(char *)(lVar2 + 0x48) != '\0') {
    lVar1 = *(longlong *)(lVar2 + 0x38);
    lVar2 = (longlong)*(int *)(lVar2 + 0x40) * 0x10 + lVar1;
    for (; lVar1 != lVar2; lVar1 = lVar1 + 0x10) {
      FUN_140ab7f40(param_1,lVar1);
    }
  }
  return;
}



// FUNCTION 140ab3930 FUN_140ab3930 body=296 status=ok
// SIG undefined FUN_140ab3930(void)

undefined8 FUN_140ab3930(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(longlong *)(param_2 + 0xb0) == 0) {
    return 1;
  }
  if (*(char *)(*(longlong *)(param_2 + 0xb0) + 0x50) == '\0') {
    return 1;
  }
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x780))(plVar1);
      if (cVar3 == '\0') {
        return 1;
      }
      lVar4 = *(longlong *)(param_1 + 0x120);
      if ((lVar4 == 0) && (lVar4 = FUN_1423407b0(), lVar4 == 0)) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(longlong *)(lVar4 + 400);
      }
      if ((lVar4 != 0) && (lVar4 = FUN_14244f490(lVar4,0), lVar4 != 0)) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (((bVar2) && (lVar4 = FUN_140cff230(lVar4), lVar4 != 0)) &&
           (*(char *)(lVar4 + 0x188) == '\0')) {
          return 0;
        }
      }
      return 1;
    }
    return 1;
  }
  return 1;
}



// FUNCTION 140ab3a60 FUN_140ab3a60 body=81 status=ok
// SIG undefined FUN_140ab3a60(void)

undefined1 FUN_140ab3a60(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  longlong lVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_14301f8f0();
    lVar3 = (**(code **)(*param_1 + 0x628))(param_1,uVar1);
    if (lVar3 != 0) {
      uVar2 = FUN_143003260(lVar3,param_2);
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140ab3ac0 FUN_140ab3ac0 body=36 status=ok
// SIG undefined FUN_140ab3ac0(void)

undefined8 FUN_140ab3ac0(longlong *param_1)

{
  char cVar1;
  
  if (param_1 != (longlong *)0x0) {
    cVar1 = (**(code **)(*param_1 + 0x2a8))();
    if (cVar1 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 140ab3af0 FUN_140ab3af0 body=728 status=ok
// SIG undefined FUN_140ab3af0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_140ab3af0(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,int param_5)

{
  float fVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  float *pfVar8;
  undefined8 uVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined8 local_5c;
  undefined4 local_54;
  float local_48;
  undefined1 local_44 [12];
  longlong local_38;
  int local_30;
  
  if (param_5 == 1) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar10 = *(longlong *)(DAT_146b33f38 + 0xd8);
    lVar5 = *(longlong *)(param_2 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0(param_2);
      if (lVar5 == 0) goto LAB_140ab3da7;
    }
    UWorld::GetPlayerControllerIterator(lVar5,&local_38);
    while( true ) {
      if ((local_30 < 0) || (*(int *)(local_38 + 8) <= local_30)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (!bVar3) break;
      plVar6 = (longlong *)FWeakObjectPtr::Get();
      if (plVar6 != (longlong *)0x0) {
        lVar5 = FUN_14145f370();
        if ((*(int *)(plVar6[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar6[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if ((bVar3) && (plVar2 = (longlong *)plVar6[0x132], plVar2 != (longlong *)0x0)) {
          lVar5 = FUN_1413ffe00();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if (bVar3) {
            cVar4 = FUN_1405ebb60(param_3);
            if (cVar4 == '\0') {
              lVar5 = plVar2[0x2d];
              if (lVar5 == 0) {
                local_54 = DAT_1468b5d98;
                puVar7 = &local_5c;
                local_5c = _DAT_1468b5d90;
              }
              else {
                puVar7 = (undefined8 *)&local_68;
                local_68 = *(undefined4 *)(lVar5 + 0x220);
                local_60 = *(undefined4 *)(lVar5 + 0x228);
                uStack_64 = *(undefined4 *)(lVar5 + 0x224);
              }
              uVar9 = *puVar7;
              local_48 = *(float *)(puVar7 + 1);
              pfVar8 = (float *)FUN_1405ea480(param_2,local_44);
              fVar11 = *pfVar8 - (float)uVar9;
              fVar12 = pfVar8[1] - (float)((ulonglong)uVar9 >> 0x20);
              fVar1 = *(float *)(lVar10 + 0x88);
              if (fVar1 * fVar1 <=
                  fVar12 * fVar12 + fVar11 * fVar11 +
                  (pfVar8[2] - local_48) * (pfVar8[2] - local_48)) goto LAB_140ab3d43;
            }
            lVar5 = (**(code **)(*plVar6 + 0xfa8))(plVar6);
            if ((lVar5 != 0) && (*(int *)(lVar5 + 0x48) != 0)) goto LAB_140ab3da3;
            cVar4 = FUN_1406589c0(plVar2 + 0x4de);
            if (cVar4 != '\0') goto LAB_140ab3da3;
            uVar9 = FUN_142e79d90();
            lVar5 = (**(code **)(*plVar2 + 0x628))(plVar2,uVar9);
            if (lVar5 != 0) {
              lVar5 = FUN_142dd0650();
              if (*(int *)(lVar5 + 8) != 0) goto LAB_140ab3da3;
            }
          }
        }
      }
LAB_140ab3d43:
      local_30 = local_30 + 1;
    }
    if (param_4 == 0) goto LAB_140ab3da7;
    lVar10 = UMaterialInterface::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar10 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar10 + 0x90) * 8) != lVar10 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_140ab3da7;
    cVar4 = FUN_142c48f60(param_4,*(undefined8 *)(param_2 + 0x118),0);
    if (cVar4 != '\0') goto LAB_140ab3da7;
LAB_140ab3da3:
    uVar9 = 0;
  }
  else {
LAB_140ab3da7:
    uVar9 = 1;
  }
  return uVar9;
}



// FUNCTION 140ab3dd0 FUN_140ab3dd0 body=169 status=ok
// SIG undefined FUN_140ab3dd0(void)

undefined8 FUN_140ab3dd0(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(byte *)(param_1 + 0x591) < 3) && (*(char *)(param_1 + 0x590) == '\0')) {
    lVar3 = FUN_142dccd00(param_2);
    if (lVar3 != 0) {
      lVar4 = FUN_1413ffe00();
      if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        cVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(lVar3);
        if (cVar2 == '\0') {
          cVar2 = FUN_140e1ace0(lVar3);
          if ((cVar2 != '\0') &&
             ((lVar3 != *(longlong *)(param_1 + 0x560) || (*(char *)(param_1 + 0x591) == '\x01'))))
          {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140ab3e80 FUN_140ab3e80 body=119 status=ok
// SIG undefined FUN_140ab3e80(void)

undefined8 FUN_140ab3e80(undefined8 param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
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
      cVar2 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
      if (cVar2 == '\0') {
        cVar2 = FUN_140e1ace0(param_2);
        if (cVar2 != '\0') {
          return 0;
        }
      }
    }
  }
  return 1;
}



// FUNCTION 140ab3f00 FUN_140ab3f00 body=184 status=ok
// SIG undefined FUN_140ab3f00(void)

ulonglong FUN_140ab3f00(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int *piVar3;
  int *piVar4;
  longlong lVar5;
  longlong lVar6;
  
  uVar1 = FWeakObjectPtr::Get(param_2);
  lVar6 = *param_1;
  uVar2 = (ulonglong)(int)param_1[1];
  lVar5 = uVar2 * 0x38 + lVar6;
  do {
    if (lVar6 == lVar5) {
LAB_140ab3f4d:
      return uVar2 & 0xffffffffffffff00;
    }
    uVar2 = UKismetSystemLibrary::Conv_SoftObjectReferenceToObject(lVar6);
    if (uVar2 == uVar1) {
      if (lVar6 != 0) {
        piVar3 = *(int **)(lVar6 + 0x28);
        piVar4 = piVar3 + (longlong)*(int *)(lVar6 + 0x30) * 4;
        while( true ) {
          if (piVar3 == piVar4) {
            return 0;
          }
          if (*piVar3 == *(int *)(param_2 + 8)) break;
          piVar3 = piVar3 + 4;
        }
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        return (ulonglong)*(byte *)(piVar3 + 1);
      }
      goto LAB_140ab3f4d;
    }
    lVar6 = lVar6 + 0x38;
  } while( true );
}



// FUNCTION 140ab4020 FUN_140ab4020 body=41 status=ok
// SIG undefined FUN_140ab4020(void)

undefined1 FUN_140ab4020(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x10);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + 0x48);
  }
  if (lVar2 != 0) {
    return *(undefined1 *)(lVar2 + 0x30);
  }
  return 0;
}



// FUNCTION 140ab4050 FUN_140ab4050 body=20 status=ok
// SIG undefined FUN_140ab4050(void)

bool FUN_140ab4050(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  return cVar1 != '\0';
}



// FUNCTION 140ab4070 FUN_140ab4070 body=41 status=ok
// SIG undefined FUN_140ab4070(void)

void FUN_140ab4070(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if (cVar1 == '\0') {
    return;
  }
  FUN_14044af00(param_1 + 2,0);
  return;
}



// FUNCTION 140ab40a0 FUN_140ab40a0 body=195 status=ok
// SIG undefined FUN_140ab40a0(void)

undefined8 FUN_140ab40a0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 == '\0') {
LAB_140ab414b:
    uVar6 = 0;
  }
  else {
    lVar7 = param_1[2];
    lVar1 = lVar7 + (longlong)(int)param_1[3] * 8;
    for (; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      lVar4 = FWeakObjectPtr::Get(lVar7);
      if ((lVar4 == 0) || (lVar4 = *(longlong *)(lVar4 + 0x230), lVar4 == 0)) {
LAB_140ab4126:
        uVar6 = FWeakObjectPtr::Get(lVar7);
        lVar4 = FUN_140aabc10(param_1,uVar6);
        if (lVar4 == 0) goto LAB_140ab414b;
      }
      else {
        lVar5 = UParticleModuleTypeDataBeam2::GetPrivateStaticClass();
        lVar4 = *(longlong *)(lVar4 + 0x10);
        if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) goto LAB_140ab4126;
      }
    }
    uVar6 = 1;
  }
  return uVar6;
}



// FUNCTION 140ab4170 FUN_140ab4170 body=87 status=ok
// SIG undefined FUN_140ab4170(void)

undefined8 FUN_140ab4170(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (cVar2 != '\0') {
    lVar3 = param_1[2];
    lVar1 = lVar3 + (longlong)(int)param_1[3] * 8;
    while( true ) {
      if (lVar3 == lVar1) {
        return 1;
      }
      cVar2 = FWeakObjectPtr::IsValid(lVar3);
      if (cVar2 == '\0') break;
      lVar3 = lVar3 + 8;
    }
  }
  return 0;
}



// FUNCTION 140ab41d0 FUN_140ab41d0 body=41 status=ok
// SIG undefined FUN_140ab41d0(void)

undefined8 FUN_140ab41d0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 8))();
  if ((cVar1 != '\0') && ((char)param_1[2] == '\x04')) {
    return 1;
  }
  return 0;
}



// FUNCTION 140ab4200 FUN_140ab4200 body=161 status=ok
// SIG undefined FUN_140ab4200(void)

undefined8 FUN_140ab4200(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  cVar2 = (**(code **)(*param_1 + 8))();
  if (((cVar2 != '\0') && ((char)param_1[2] != '\0')) &&
     (((int)param_1[4] != 0 || ((int)param_1[6] != 0)))) {
    lVar4 = param_1[3];
    lVar1 = lVar4 + (longlong)(int)param_1[4] * 8;
    for (; lVar4 != lVar1; lVar4 = lVar4 + 8) {
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 == 0) {
        return 0;
      }
    }
    lVar4 = param_1[5];
    lVar1 = lVar4 + (longlong)(int)param_1[6] * 8;
    while( true ) {
      if (lVar4 == lVar1) {
        return 1;
      }
      lVar3 = FWeakObjectPtr::Get(lVar4);
      if (lVar3 == 0) break;
      lVar4 = lVar4 + 8;
    }
  }
  return 0;
}



// FUNCTION 140ab42d0 FUN_140ab42d0 body=273 status=ok
// SIG undefined FUN_140ab42d0(void)

void FUN_140ab42d0(longlong param_1,longlong param_2,char param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 0x220) == 0) {
    if ((*(longlong *)(param_1 + 0x120) == 0) && (lVar3 = FUN_1423407b0(param_1), lVar3 == 0)) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    cVar1 = UWorld::IsGameWorld(lVar3);
    if (cVar1 != '\0') {
      *(undefined8 *)(param_1 + 0x228) = param_5;
      lVar3 = *(longlong *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0x1ac) = param_4;
      *(longlong *)(param_1 + 0x1a0) = param_2;
      *(char *)(param_1 + 0x1a8) = param_3;
      if (lVar3 == 0) {
        lVar3 = FUN_1423407b0(param_1);
      }
      *(undefined4 *)(param_1 + 0x230) = *(undefined4 *)(lVar3 + 0x790);
    }
  }
  else {
    iVar2 = FUN_142235230();
    if ((iVar2 != 3) && (param_2 != 0)) {
      if ((param_3 == '\0') || (*(char *)(param_2 + 0x30) == '\x02')) {
        param_4 = 0xbf800000;
      }
      FUN_140aa3670(param_1,param_2,param_4,0,param_5,0);
    }
  }
  return;
}



// FUNCTION 140ab43f0 FUN_140ab43f0 body=49 status=ok
// SIG undefined FUN_140ab43f0(void)

void FUN_140ab43f0(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_142235230();
  if (iVar1 != 3) {
    FUN_140aa5710(param_1,param_2);
  }
  return;
}



// FUNCTION 140ab4430 FUN_140ab4430 body=123 status=ok
// SIG undefined FUN_140ab4430(void)

void FUN_140ab4430(longlong *param_1,undefined1 param_2)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = FUN_142235230();
  if ((iVar1 != 3) && ((char)param_1[0xb2] == '\0')) {
    lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    if (lVar2 != 0) {
      lVar2 = UWorld::GetGameState<APVPGameState>(lVar2);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x5a8) != 0)) {
        FUN_140ab4ee0(*(longlong *)(lVar2 + 0x5a8),param_1);
      }
    }
    (**(code **)(*param_1 + 0x600))(param_1);
    *(undefined1 *)(param_1 + 0xb2) = param_2;
    FUN_140ab7100(param_1);
  }
  return;
}



// FUNCTION 140ab44b0 FUN_140ab44b0 body=242 status=ok
// SIG undefined FUN_140ab44b0(void)

void FUN_140ab44b0(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 local_res8 [8];
  
  if (param_2 != 0) {
    lVar1 = FUN_142f71d80();
    lVar4 = param_2;
    do {
      if (lVar4 == lVar1) goto LAB_140ab44f0;
      lVar4 = *(longlong *)(lVar4 + 0x30);
    } while (lVar4 != 0);
  }
  param_2 = 0;
LAB_140ab44f0:
  plVar2 = (longlong *)(**(code **)(*(longlong *)(param_1 + 8) + 0x18))(param_1 + 8);
  if (*plVar2 != 0) {
    lVar3 = FUN_142f71d80();
    lVar4 = *plVar2;
    for (lVar1 = lVar4; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x30)) {
      if (lVar1 == lVar3) goto LAB_140ab4530;
    }
  }
  lVar4 = 0;
LAB_140ab4530:
  if ((param_2 == lVar4) && ((byte)(param_3 - 4U) < 2)) {
    plVar2 = (longlong *)
             (**(code **)(*(longlong *)(param_1 + 0x38) + 0x18))(param_1 + 0x38,local_res8);
    if (*plVar2 != 0) {
      lVar1 = FUN_142f71d80();
      for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(longlong *)(lVar4 + 0x30)) {
        if (lVar4 == lVar1) {
          if (*plVar2 != 0) {
            return;
          }
          break;
        }
      }
    }
    (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x288))();
  }
  return;
}



// FUNCTION 140ab45b0 FUN_140ab45b0 body=127 status=ok
// SIG undefined FUN_140ab45b0(void)

void FUN_140ab45b0(longlong param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  
  cVar1 = FUN_142f4ff30(param_2,param_1 + 8);
  if ((cVar1 != '\0') && ((param_3 == '\x04' || (param_3 == '\x01')))) {
    (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x280))((longlong *)(param_1 + -0x2c8),0);
  }
  cVar1 = FUN_142f4ff30(param_2,param_1 + 0x38);
  if ((cVar1 != '\0') && ((param_3 == '\x04' || (param_3 == '\x01')))) {
    (**(code **)(*(longlong *)(param_1 + -0x2c8) + 0x288))();
  }
  return;
}



// FUNCTION 140ab4630 FUN_140ab4630 body=59 status=ok
// SIG undefined FUN_140ab4630(void)

void FUN_140ab4630(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    FUN_140e2a440(param_2,param_3);
  }
  if (param_3 != 0) {
    FUN_140e2d110(param_3,param_2);
  }
  return;
}



// FUNCTION 140ab46d0 FUN_140ab46d0 body=93 status=ok
// SIG undefined FUN_140ab46d0(void)

void FUN_140ab46d0(undefined8 param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140e2e5e0();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ab4730 FUN_140ab4730 body=93 status=ok
// SIG undefined FUN_140ab4730(void)

void FUN_140ab4730(undefined8 param_1,ulonglong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140e2e5d0();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ab47a0 FUN_140ab47a0 body=114 status=ok
// SIG undefined FUN_140ab47a0(void)

void FUN_140ab47a0(undefined8 param_1,ulonglong *param_2,undefined1 param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  plVar1 = (longlong *)*param_2;
  uVar2 = (longlong)(int)param_2[1] & 0x1fffffffffffffff;
  if (plVar1 + (int)param_2[1] < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FUN_140e2bc00(*plVar1,param_3);
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 140ab4820 FUN_140ab4820 body=59 status=ok
// SIG undefined FUN_140ab4820(void)

void FUN_140ab4820(undefined8 param_1,longlong param_2,longlong param_3)

{
  if (param_2 != 0) {
    FUN_140e2ea30(param_2,param_3);
  }
  if (param_3 != 0) {
    FUN_140e2d130(param_3,param_2);
  }
  return;
}



// FUNCTION 140ab4860 FUN_140ab4860 body=143 status=ok
// SIG undefined FUN_140ab4860(void)

undefined8 FUN_140ab4860(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)param_2[1];
  if (iVar1 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = rand();
    iVar3 = (int)((float)iVar2 * 3.051851e-05 * (float)iVar1);
    iVar2 = iVar1 + -1;
    if (iVar3 <= iVar1 + -1) {
      iVar2 = iVar3;
    }
    if (iVar2 < 0) {
      return 0;
    }
  }
  if ((int)param_2[1] <= iVar2) {
    return 0;
  }
  FUN_140aa0aa0(param_3,(longlong)iVar2 * 0x60 + *param_2);
  return 1;
}



// FUNCTION 140ab48f0 FUN_140ab48f0 body=1507 status=ok
// SIG undefined FUN_140ab48f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_140ab48f0(longlong param_1,longlong *param_2,longlong *param_3,longlong param_4,
                  longlong param_5)

{
  int *piVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  bool bVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined1 auStack_1c8 [32];
  int local_1a8 [2];
  longlong *local_1a0;
  longlong *local_198;
  longlong **local_190;
  longlong *local_188;
  longlong *local_180;
  longlong *local_178;
  undefined8 local_170;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  longlong local_158 [4];
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined4 local_124;
  longlong local_118;
  undefined4 local_110;
  undefined1 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  longlong local_c8 [4];
  longlong local_a8;
  undefined4 local_98;
  undefined4 local_94;
  longlong local_88;
  undefined4 local_80;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_198 = param_3;
  local_180 = param_2;
  uVar2 = UInputKeySelector::GetPrivateStaticClass();
  lVar3 = (**(code **)(*param_2 + 0x628))(param_2,uVar2);
  plVar9 = local_180;
  if ((lVar3 == 0) || (lVar3 == *(longlong *)(param_1 + 0x578))) {
    plVar12 = (longlong *)0x0;
    plVar11 = plVar12;
    if (param_5 != 0) {
      plVar11 = *(longlong **)(param_5 + 0x38);
    }
    plVar7 = plVar12;
    if (param_4 != 0) {
      plVar7 = *(longlong **)(param_4 + 0x38);
    }
    local_1a0 = plVar11;
    local_178 = plVar7;
    TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x4c8,local_1a8,local_180);
    plVar8 = plVar12;
    if (local_1a8[0] != -1) {
      plVar8 = (longlong *)((longlong)local_1a8[0] * 0x68 + *(longlong *)(param_1 + 0x4c8));
    }
    plVar13 = plVar8 + 1;
    if (plVar8 == (longlong *)0x0) {
      plVar13 = plVar12;
    }
    plVar8 = plVar12;
    if (plVar11 != (longlong *)0x0) {
      plVar4 = (longlong *)FUN_142e49950();
      for (plVar6 = local_1a0;
          (plVar11 = local_1a0, plVar8 = plVar12, plVar6 != (longlong *)0x0 &&
          (plVar8 = local_1a0, plVar6 != plVar4)); plVar6 = (longlong *)plVar6[6]) {
      }
    }
    plVar6 = plVar12;
    if (plVar7 != (longlong *)0x0) {
      plVar5 = (longlong *)FUN_142e49950();
      plVar4 = plVar7;
      do {
        plVar6 = plVar7;
        plVar11 = local_1a0;
        if (plVar4 == plVar5) break;
        plVar4 = (longlong *)plVar4[6];
        plVar6 = plVar12;
      } while (plVar4 != (longlong *)0x0);
    }
    if (plVar8 == plVar6) {
      if (plVar11 != (longlong *)0x0) {
        plVar7 = (longlong *)FUN_142e49950();
        for (plVar11 = local_1a0; plVar11 != (longlong *)0x0; plVar11 = (longlong *)plVar11[6]) {
          if (plVar11 == plVar7) {
            FUN_140aa9f10(plVar13,local_1a8,&local_1a0);
            plVar11 = local_198;
            plVar7 = plVar12;
            if (local_1a8[0] != -1) {
              plVar7 = (longlong *)((longlong)local_1a8[0] * 0x98 + *plVar13);
            }
            plVar8 = plVar7 + 1;
            if (plVar7 == (longlong *)0x0) {
              plVar8 = plVar12;
            }
            TSet<TTuple<UObject_*,FTraceRouteRecord>,TDefaultMapHashableKeyFuncs<UObject_*,FTraceRouteRecord,0>,FDefaultSetAllocator>
            ::FindId(plVar8,local_1a8,local_198);
            if (local_1a8[0] != -1) {
              plVar12 = (longlong *)(*plVar8 + (longlong)local_1a8[0] * 0x28);
            }
            FUN_140aabe70(plVar11,plVar12 + 1);
            FUN_140ac2870(plVar8,plVar9);
            if (*(float *)(plVar8 + 0xe) < 0.0) {
              *(int *)(plVar8 + 0xe) = (int)plVar8[0xd];
              return;
            }
            if (*(float *)(plVar8 + 0xe) <= *(float *)((longlong)plVar8 + 0x6c)) {
              return;
            }
            *(float *)(plVar8 + 0xe) = *(float *)((longlong)plVar8 + 0x6c);
            return;
          }
        }
      }
    }
    else {
      plVar9 = plVar12;
      if (plVar11 != (longlong *)0x0) {
        plVar8 = (longlong *)FUN_142e49950();
        for (plVar11 = local_1a0;
            (plVar9 = plVar12, plVar11 != (longlong *)0x0 && (plVar9 = local_1a0, plVar11 != plVar8)
            ); plVar11 = (longlong *)plVar11[6]) {
        }
      }
      if (plVar9 != (longlong *)0x0) {
        if (plVar13 == (longlong *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_c8,0,0x58);
          local_190 = &local_180;
          local_98 = 0xffffffff;
          local_94 = 0;
          local_88 = 0;
          local_80 = 0;
          local_188 = local_c8;
          FUN_140a9ce90((longlong *)(param_1 + 0x4c8),local_1a8,&local_190,0);
          local_80 = 0;
          plVar13 = (longlong *)(*(longlong *)(param_1 + 0x4c8) + (longlong)local_1a8[0] * 0x68 + 8)
          ;
          if (local_88 != 0) {
            FMemory::Free();
          }
          FUN_140aa83f0(local_c8,0);
          if (local_a8 != 0) {
            FMemory::Free();
          }
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
        }
        FUN_140aa9f10(plVar13,local_1a8,&local_1a0);
        plVar9 = plVar12;
        if (local_1a8[0] != -1) {
          plVar9 = (longlong *)((longlong)local_1a8[0] * 0x98 + *plVar13);
        }
        plVar11 = plVar9 + 1;
        if (plVar9 == (longlong *)0x0) {
          plVar11 = plVar12;
        }
        if (plVar11 == (longlong *)0x0) {
          local_190 = &local_1a0;
          local_158[0] = 0;
          local_188 = local_158;
          local_158[1] = 0;
          local_138 = 0;
          local_130 = 0;
          local_128 = 0xffffffff;
          local_124 = 0;
          local_118 = 0;
          local_110 = 0;
          local_108 = 0;
          local_104 = 0;
          local_100 = 0xbf800000;
          local_fc = 0xbf800000;
          local_f8 = 0xbf800000;
          local_f4 = 0;
          local_ec = 0;
          local_e8 = 0xbf800000;
          local_e0 = 0;
          local_d8 = 1;
          FUN_140a9db30(plVar13,local_1a8,&local_190,0);
          local_110 = 0;
          plVar11 = (longlong *)(*plVar13 + (longlong)local_1a8[0] * 0x98 + 8);
          if (local_118 != 0) {
            FMemory::Free();
          }
          TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                    (local_158);
        }
        *(int *)((longlong)plVar11 + 100) = *(int *)((longlong)plVar11 + 100) + 1;
        if (*(int *)((longlong)plVar11 + 100) == 1) {
          *(int *)(plVar13 + 10) = (int)plVar13[10] + 1;
        }
        local_170._4_4_ = 0;
        uStack_168 = 0xbf800000;
        uStack_164 = 0xbf800000;
        uStack_160 = 0xbf800000;
        local_170._0_1_ = 0;
        FUN_140aabe70(local_198,&local_170);
        local_190 = &local_198;
        local_188 = &local_170;
        FUN_140a9d5d0(plVar11,local_1a8,&local_190,0);
        FUN_140ac2870(plVar11);
        if (0.0 <= *(float *)(plVar11 + 0xe)) {
          if (*(float *)((longlong)plVar11 + 0x6c) < *(float *)(plVar11 + 0xe)) {
            *(float *)(plVar11 + 0xe) = *(float *)((longlong)plVar11 + 0x6c);
          }
        }
        else {
          *(int *)(plVar11 + 0xe) = (int)plVar11[0xd];
        }
      }
      if (plVar7 != (longlong *)0x0) {
        plVar9 = (longlong *)FUN_142e49950();
        do {
          if (plVar7 == plVar9) {
            FUN_140aa9f10(plVar13,local_1a8,&local_178);
            plVar9 = plVar12;
            if (local_1a8[0] != -1) {
              plVar9 = (longlong *)((longlong)local_1a8[0] * 0x98 + *plVar13);
            }
            plVar11 = plVar9 + 1;
            if (plVar9 == (longlong *)0x0) {
              plVar11 = plVar12;
            }
            piVar1 = (int *)((longlong)plVar11 + 100);
            *piVar1 = *piVar1 + -1;
            if (*piVar1 == 0) {
              FUN_140ab9c20(plVar13);
              plVar13 = plVar13 + 10;
              *(int *)plVar13 = (int)*plVar13 + -1;
              if ((int)*plVar13 == 0) {
                FUN_140ab9900(param_1 + 0x4c8);
              }
            }
            else {
              TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
              ::Remove(plVar11,local_198);
              FUN_140ac2870(plVar11);
              if (0.0 <= *(float *)(plVar11 + 0xe)) {
                if (*(float *)((longlong)plVar11 + 0x6c) < *(float *)(plVar11 + 0xe)) {
                  *(float *)(plVar11 + 0xe) = *(float *)((longlong)plVar11 + 0x6c);
                }
              }
              else {
                *(int *)(plVar11 + 0xe) = (int)plVar11[0xd];
              }
            }
            break;
          }
          plVar7 = (longlong *)plVar7[6];
        } while (plVar7 != (longlong *)0x0);
      }
      if ((((*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4fc)) &&
           (*(int *)(param_1 + 0x520) == 0)) && (*(int *)(param_1 + 0x530) == 0)) &&
         ((*(int *)(param_1 + 0x550) == 0 && (*(int *)(param_1 + 0x570) == 0)))) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
      }
      if (bVar10 != (*(char *)(param_1 + 0x37) != '\0')) {
        FUN_14288e3d0(param_1 + 0x28);
      }
    }
  }
  return;
}



// FUNCTION 140ab4ee0 FUN_140ab4ee0 body=149 status=ok
// SIG undefined FUN_140ab4ee0(void)

void FUN_140ab4ee0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  
  if (param_2 != 0) {
    uVar4 = 0;
    if (0 < *(int *)(param_1 + 0x510)) {
      lVar2 = *(longlong *)(param_1 + 0x508);
      uVar6 = uVar4;
      do {
        iVar5 = (int)uVar6;
        if (*(longlong *)(lVar2 + uVar4 * 8) == param_2) {
          iVar1 = *(int *)(param_1 + 0x510);
          iVar3 = (iVar1 - iVar5) + -1;
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar5 * 8),
                       (void *)(lVar2 + (longlong)(iVar5 + 1) * 8),(longlong)iVar3 << 3);
            iVar1 = *(int *)(param_1 + 0x510);
          }
          *(int *)(param_1 + 0x510) = iVar1 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink((longlong *)(param_1 + 0x508));
          return;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar4 = uVar4 + 1;
      } while ((longlong)uVar4 < (longlong)*(int *)(param_1 + 0x510));
      return;
    }
  }
  return;
}



// FUNCTION 140ab4f80 FUN_140ab4f80 body=196 status=ok
// SIG undefined FUN_140ab4f80(void)

void FUN_140ab4f80(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 0x70);
  if (param_3 == iVar1) {
    FUN_140abe130(param_1 + -0x28);
  }
  piVar2 = *(int **)(param_1 + 0x80);
  piVar4 = piVar2;
  if (piVar2 != piVar2 + (longlong)*(int *)(param_1 + 0x88) * 0x18) {
    while (*piVar4 != param_3) {
      piVar4 = piVar4 + 0x18;
      if (piVar4 == piVar2 + (longlong)*(int *)(param_1 + 0x88) * 0x18) {
        return;
      }
    }
    lVar3 = ((longlong)piVar4 - (longlong)piVar2) / 0x60;
    if ((int)lVar3 != -1) {
      FUN_140ab9e60(param_1 + 0x80,lVar3,1,1);
      if ((param_3 == iVar1) && (*(int *)(param_1 + 0x88) != 0)) {
        FUN_140ab6d10(param_1 + -0x28,0);
      }
    }
  }
  return;
}



// FUNCTION 140ab5050 FUN_140ab5050 body=490 status=ok
// SIG undefined FUN_140ab5050(void)

void FUN_140ab5050(longlong param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined1 param_7,longlong param_8,
                  undefined4 param_9,undefined1 param_10)

{
  int iVar1;
  void *pvVar2;
  bool bVar3;
  longlong lVar4;
  undefined4 local_78 [2];
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_1f;
  
  local_78[0] = param_9;
  local_70 = param_2;
  if (param_3 == 0) {
LAB_140ab50c3:
    local_68 = 0;
  }
  else {
    lVar4 = FUN_1412f58e0();
    if ((*(int *)(*(longlong *)(param_3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_3 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_68 = param_3;
    if (!bVar3) goto LAB_140ab50c3;
  }
  if (param_4 != 0) {
    lVar4 = FUN_1414a0a00();
    if ((*(int *)(*(longlong *)(param_4 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_4 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
         ) != lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    local_60 = param_4;
    if (bVar3) goto LAB_140ab510a;
  }
  local_60 = 0;
LAB_140ab510a:
  FUN_14058f8f0(local_58,param_8);
  local_48 = *(undefined4 *)(param_8 + 0x10);
  local_40 = (void *)0x0;
  local_38 = *(int *)(param_5 + 1);
  lVar4 = (longlong)local_38;
  pvVar2 = (void *)*param_5;
  if (local_38 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_38,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar2,lVar4 * 2);
  }
  local_30 = (void *)0x0;
  local_28 = *(int *)(param_6 + 1);
  lVar4 = (longlong)local_28;
  pvVar2 = (void *)*param_6;
  if (local_28 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_28,0);
    _guard_xfg_dispatch_icall_nop(local_30,pvVar2,lVar4 * 2);
  }
  iVar1 = *(int *)(param_1 + 0x88);
  local_20 = param_7;
  local_1f = param_10;
  *(int *)(param_1 + 0x88) = iVar1 + 1;
  if (*(int *)(param_1 + 0x8c) < iVar1 + 1) {
    TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1 + 0x80,iVar1);
  }
  FUN_140a9f0c0((longlong)iVar1 * 0x60 + *(longlong *)(param_1 + 0x80),local_78);
  if (local_30 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_40 != (void *)0x0) {
    FMemory::Free();
  }
  FUN_140591060(local_58);
  FUN_140ab6d10(param_1 + -0x28,1);
  FUN_140591060(param_8);
  return;
}



// FUNCTION 140ab5240 FUN_140ab5240 body=92 status=ok
// SIG undefined FUN_140ab5240(void)

void FUN_140ab5240(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140aa59c0();
    lVar1 = FUN_140aab960(param_1,param_2);
    if ((lVar1 != 0) &&
       ((*(longlong *)(lVar1 + 0x10) == 0 ||
        (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x484) != '\x02')))) {
      FUN_140abbd10(param_1,lVar1,param_2,2);
    }
  }
  return;
}



// FUNCTION 140ab52a0 FUN_140ab52a0 body=97 status=ok
// SIG undefined FUN_140ab52a0(void)

void FUN_140ab52a0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x128) == '\x03') {
    FUN_140aa5360();
    lVar1 = FUN_140aab960(param_1,param_2);
    if ((((param_2 != 0) && (lVar1 != 0)) && (*(longlong *)(lVar1 + 0x10) != 0)) &&
       (*(char *)(*(longlong *)(lVar1 + 0x10) + 0x484) == '\x01')) {
      FUN_140abbd10(param_1,lVar1,param_2,1);
    }
  }
  return;
}



// FUNCTION 140ab5310 FUN_140ab5310 body=61 status=ok
// SIG undefined FUN_140ab5310(void)

void FUN_140ab5310(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  puVar2 = puVar1 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(code **)(*(longlong *)*puVar1 + 0x20))();
  }
  return;
}



// FUNCTION 140ab5350 FUN_140ab5350 body=152 status=ok
// SIG undefined FUN_140ab5350(void)

void FUN_140ab5350(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (((*(longlong *)(param_1 + 0x120) != 0) || (lVar1 = FUN_1423407b0(), lVar1 != 0)) &&
     (*(longlong *)(param_1 + 800) != 0)) {
    lVar1 = *(longlong *)(param_1 + 0x120);
    if (lVar1 == 0) {
      lVar1 = FUN_1423407b0(param_1);
    }
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar2 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar2,param_1 + 800);
    *(undefined8 *)(param_1 + 800) = 0;
  }
  *(undefined1 *)(param_1 + 0x240) = 0;
  FUN_140ab60f0(param_1,*(undefined8 *)(param_1 + 0x238),1);
  return;
}



// FUNCTION 140ab5400 FUN_140ab5400 body=44 status=ok
// SIG undefined FUN_140ab5400(void)

void FUN_140ab5400(undefined8 param_1,char param_2)

{
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if (param_2 != '\0') {
    FUN_140aa5140(param_1);
  }
  return;
}



// FUNCTION 140ab5430 FUN_140ab5430 body=901 status=ok
// SIG undefined FUN_140ab5430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab5430(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  code *local_98;
  longlong local_88 [4];
  longlong *local_68;
  int local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  uVar9 = 0;
  lVar3 = param_1[0x8f];
  if ((lVar3 != 0) && (*(char *)(lVar3 + 0x128) == '\x03')) {
    for (plVar5 = (longlong *)(lVar3 + 0x468); plVar5 != (longlong *)(lVar3 + 0x508);
        plVar5 = plVar5 + 10) {
      plVar11 = (longlong *)plVar5[2];
      if (plVar11 == param_1) {
        if ((plVar11 != (longlong *)0x0) && ((char)plVar11[0x25] == '\x03')) {
          *(undefined1 *)((longlong)plVar11 + 0x484) = 1;
          (**(code **)(*plVar11 + 0x600))();
        }
        plVar10 = (longlong *)*plVar5;
        plVar11 = plVar10 + (longlong)(int)plVar5[1] * 3;
        for (; plVar10 != plVar11; plVar10 = plVar10 + 3) {
          plVar6 = (longlong *)plVar10[1];
          plVar8 = plVar6 + (longlong)(int)plVar10[2] * 4;
          for (; plVar6 != plVar8; plVar6 = plVar6 + 4) {
            if (((*plVar6 != 0) && (*plVar10 != 0)) && (*(longlong *)(*plVar6 + 0x908) != 0)) {
              FUN_142df2ca0();
            }
          }
        }
        FUN_140aaba00(plVar5,&local_c8);
        uVar7 = (ulonglong)((longlong)(local_c8 + local_c0) + (7 - (longlong)local_c8)) >> 3;
        if (local_c8 + local_c0 < local_c8) {
          uVar7 = uVar9;
        }
        plVar5 = local_c8;
        if (uVar7 != 0) {
          do {
            lVar1 = *plVar5;
            if (lVar1 != 0) {
              lVar2 = FUN_142ceefa0(lVar1);
              if (lVar2 != 0) {
                uVar4 = FUN_142ceefa0(lVar1);
                FUN_142ce94c0(uVar4);
              }
              thunk_FUN_141400bb0(lVar1);
            }
            plVar5 = plVar5 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 != uVar7);
        }
        FUN_141309db0(lVar3,&local_c8);
        if (local_c8 != (longlong *)0x0) {
          FMemory::Free();
        }
        break;
      }
    }
  }
  fVar12 = (float)FUN_140aaddd0(param_1);
  if (fVar12 <= 0.1) {
    fVar12 = 0.1;
  }
  lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
  *(undefined4 *)(param_1 + 0x91) = *(undefined4 *)(lVar3 + 0x790);
  uVar4 = AActor::GetWorldTimerManager(param_1);
  FUN_142880530(uVar4,param_1 + 0x93);
  param_1[0x93] = 0;
  uVar4 = AActor::GetWorldTimerManager(param_1);
  plVar5 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar5 != (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_FUN_143f4d170;
    FWeakObjectPtr::operator=(plVar5 + 1,param_1);
    plVar5[2] = (longlong)FUN_140ab5c40;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar5[4] = lVar3;
    *plVar5 = (longlong)&PTR_FUN_143f4d1b8;
  }
  local_b8 = 0;
  local_b0 = 0;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x30))(plVar5,&local_b8);
  }
  FWeakObjectPtr::operator=(local_a8,0);
  local_d0 = 0xbf800000;
  local_d8 = 0;
  local_a0 = 0;
  local_68 = (longlong *)0x0;
  local_58 = 0;
  local_98 = AK::MemoryMgr::StartProfileThreadUsage;
  FUN_142880850(uVar4,param_1 + 0x94,&local_b8,fVar12);
  if (local_58 != 0) {
    plVar11 = local_88;
    if (local_68 != (longlong *)0x0) {
      plVar11 = local_68;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_b8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    lVar3 = FMemory::Realloc(plVar5,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 140ab57c0 FUN_140ab57c0 body=195 status=ok
// SIG undefined FUN_140ab57c0(void)

void FUN_140ab57c0(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar1 = *(longlong *)(param_1 + 0x478);
  if ((lVar1 != 0) && (*(char *)(lVar1 + 0x128) == '\x03')) {
    lVar2 = lVar1 + 0x468;
    if (lVar2 != lVar1 + 0x508) {
      while (*(longlong *)(lVar2 + 0x10) != param_1) {
        lVar2 = lVar2 + 0x50;
        if (lVar2 == lVar1 + 0x508) {
          return;
        }
      }
      puVar3 = *(undefined8 **)(lVar2 + 0x30);
      puVar4 = puVar3 + (longlong)*(int *)(lVar2 + 0x38) * 4;
      for (; puVar3 != puVar4; puVar3 = puVar3 + 4) {
        FUN_140ababd0(lVar1,*puVar3);
      }
      FUN_142227350(param_1,0,1);
      FUN_140aa58c0(lVar2);
    }
  }
  return;
}



// FUNCTION 140ab5890 FUN_140ab5890 body=244 status=ok
// SIG undefined FUN_140ab5890(void)

void FUN_140ab5890(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  longlong local_res18 [2];
  int local_28;
  undefined8 local_24;
  longlong *local_18;
  undefined8 *local_10;
  
  if ((param_3 != 0) && (param_3 != *(longlong *)(param_1 + 0x118))) {
    local_res18[0] = param_3;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2d0,&local_28);
    piVar2 = (int *)0x0;
    if (local_28 != -1) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)local_28 * 0x18);
    }
    piVar1 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    if (piVar1 != (int *)0x0) {
      *piVar1 = *piVar1 + 1;
      return;
    }
    local_18 = local_res18;
    local_24 = 0;
    local_10 = &local_24;
    FUN_140a9d130(param_1 + 0x2d0,&local_28,&local_18,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + 8 + (longlong)local_28 * 0x18) = 1;
    if (*(longlong *)(param_1 + 0x238) != 0) {
      FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),local_res18[0],param_1,0,
                    *(longlong *)(param_1 + 0x238));
    }
  }
  return;
}



// FUNCTION 140ab5990 FUN_140ab5990 body=284 status=ok
// SIG undefined FUN_140ab5990(void)

void FUN_140ab5990(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  undefined1 local_res18 [16];
  undefined8 local_38;
  undefined8 *local_30;
  int *local_28;
  
  if ((param_3 != *(longlong **)(param_1 + 0x118)) &&
     ((*(byte *)((longlong)*(longlong **)(param_1 + 0x118) + 0x94) & 2) == 0)) {
    uVar2 = UInputKeySelector::GetPrivateStaticClass();
    local_38 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
    cVar1 = FUN_140abcb20(param_1,local_38,param_4);
    if (cVar1 != '\0') {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x338,local_res8);
      piVar4 = (int *)0x0;
      if (local_res8[0] != -1) {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x338) + (longlong)local_res8[0] * 0x18);
      }
      piVar3 = piVar4 + 2;
      if (piVar4 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      if (piVar3 != (int *)0x0) {
        *piVar3 = *piVar3 + 1;
        return;
      }
      local_30 = &local_38;
      local_res8[0] = 1;
      local_28 = local_res8;
      FUN_140a9d380(param_1 + 0x338,local_res18,&local_30,0);
      FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
      TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x1b0,local_38);
    }
  }
  return;
}



// FUNCTION 140ab5ab0 FUN_140ab5ab0 body=255 status=ok
// SIG undefined FUN_140ab5ab0(void)

void FUN_140ab5ab0(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_res10;
  int local_res18 [2];
  undefined8 local_res20;
  longlong *local_18;
  undefined8 *local_10;
  
  if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x118))) {
    local_res10 = param_2;
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2d0,local_res18,param_2);
    lVar3 = 0;
    if (local_res18[0] != -1) {
      lVar3 = *(longlong *)(param_1 + 0x2d0) + (longlong)local_res18[0] * 0x18;
    }
    lVar2 = lVar3 + 8;
    if (lVar3 == 0) {
      lVar2 = 0;
    }
    if (lVar2 == 0) {
      local_18 = &local_res10;
      local_res20 = 0;
      local_10 = &local_res20;
      FUN_140a9d130(param_1 + 0x2d0,local_res18,&local_18,0);
      *(undefined4 *)(*(longlong *)(param_1 + 0x2d0) + 0xc + (longlong)local_res18[0] * 0x18) = 1;
    }
    else {
      iVar1 = *(int *)(lVar2 + 4) + 1;
      *(int *)(lVar2 + 4) = iVar1;
      if ((*(longlong *)(param_1 + 0x238) != 0) && (iVar1 == 1)) {
        FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),local_res10,param_1,
                      *(longlong *)(param_1 + 0x238),0);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ab5bb0 FUN_140ab5bb0 body=134 status=ok
// SIG undefined FUN_140ab5bb0(void)

void FUN_140ab5bb0(longlong param_1,longlong param_2,char param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  lVar2 = FUN_140c12480(uVar1);
  if ((lVar2 != 0) && (lVar2 = FHdrImageWrapper::GetHeight(lVar2), lVar2 != 0)) {
    FUN_1411f9b70(lVar2,param_3);
  }
  if (param_3 == '\0') {
    lVar2 = *(longlong *)(param_2 + 0x30);
    lVar3 = (longlong)*(int *)(param_2 + 0x38) * 0x2c0 + lVar2;
    for (; lVar2 != lVar3; lVar2 = lVar2 + 0x2c0) {
      if (*(char *)(lVar2 + 0x280) != '\0') {
        *(undefined1 *)(lVar2 + 0x280) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140ab5c40 FUN_140ab5c40 body=107 status=ok
// SIG undefined FUN_140ab5c40(void)

void FUN_140ab5c40(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    uVar2 = AActor::GetWorldTimerManager(param_1);
    FUN_142880530(uVar2,param_1 + 0x94);
    param_1[0x94] = 0;
  }
  if (param_1[0x8f] != 0) {
    FUN_140aa85e0(param_1[0x8f],(int)param_1[0x90],0,0);
    return;
  }
  return;
}



// FUNCTION 140ab5cb0 FUN_140ab5cb0 body=268 status=ok
// SIG undefined FUN_140ab5cb0(void)

void FUN_140ab5cb0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    FUN_142880530(uVar3,param_1 + 0xb1);
    param_1[0xb1] = 0;
  }
  if (0 < (int)param_1[0xaf]) {
    FUN_140ab6e20();
    return;
  }
  lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  if ((((lVar1 != 0) && (lVar1 = UWorld::GetGameState<APVPGameState>(lVar1), lVar1 != 0)) &&
      (lVar1 = *(longlong *)(lVar1 + 0x5a8), lVar1 != 0)) && (*(char *)(lVar1 + 0x128) == '\x03')) {
    for (lVar2 = lVar1 + 0x468; lVar2 != lVar1 + 0x508; lVar2 = lVar2 + 0x50) {
      if ((*(longlong *)(lVar2 + 0x10) != 0) &&
         (*(char *)(*(longlong *)(lVar2 + 0x10) + 0x484) != '\x02')) goto LAB_140ab5d98;
    }
    FUN_14223e980(lVar1,2);
LAB_140ab5d98:
    FUN_141309e50(lVar1,param_1[0xac]);
    FUN_140ab4430(param_1,1);
  }
  return;
}



// FUNCTION 140ab5dc0 FUN_140ab5dc0 body=147 status=ok
// SIG undefined FUN_140ab5dc0(void)

void FUN_140ab5dc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_1[0x9e] != 0) {
    lVar1 = param_1[0x9b];
    lVar2 = *(longlong *)(lVar1 + 0x238);
    if (lVar2 == *(longlong *)(lVar1 + 0x188)) {
      lVar2 = *(longlong *)(lVar1 + 0x248);
    }
    FUN_140ad9c10(param_1[0x9e],param_1,lVar2);
    lVar1 = param_1[0x9b];
    lVar2 = *(longlong *)(lVar1 + 0x238);
    if (lVar2 == *(longlong *)(lVar1 + 0x188)) {
      lVar2 = *(longlong *)(lVar1 + 0x248);
    }
    FUN_140ad99e0(param_1[0x9e],param_1,lVar2,1);
    if ((char)param_1[0x25] == '\x03') {
      (**(code **)(*param_1 + 0x600))(param_1);
    }
    FUN_140ac2bf0(param_1);
    return;
  }
  return;
}



// FUNCTION 140ab5e60 FUN_140ab5e60 body=190 status=ok
// SIG undefined FUN_140ab5e60(void)

void FUN_140ab5e60(longlong param_1,undefined8 param_2,longlong param_3)

{
  int *piVar1;
  int *piVar2;
  int local_res18 [2];
  
  if ((param_3 != 0) && (param_3 != *(longlong *)(param_1 + 0x118))) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2d0,local_res18);
    piVar2 = (int *)0x0;
    if (local_res18[0] != -1) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)local_res18[0] * 0x18);
    }
    piVar1 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      piVar1 = (int *)0x0;
    }
    *piVar1 = *piVar1 + -1;
    if ((*piVar1 < 1) && (piVar1[1] < 1)) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x2d0,param_3);
      if (*(longlong *)(param_1 + 0x238) != 0) {
        FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),param_3,param_1,
                      *(longlong *)(param_1 + 0x238),0);
      }
    }
  }
  return;
}



// FUNCTION 140ab5f20 FUN_140ab5f20 body=235 status=ok
// SIG undefined FUN_140ab5f20(void)

void FUN_140ab5f20(longlong param_1,undefined8 param_2,longlong *param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int local_res8 [2];
  
  if ((param_3 != *(longlong **)(param_1 + 0x118)) &&
     ((*(byte *)((longlong)*(longlong **)(param_1 + 0x118) + 0x94) & 2) == 0)) {
    uVar2 = UInputKeySelector::GetPrivateStaticClass();
    uVar2 = (**(code **)(*param_3 + 0x628))(param_3,uVar2);
    cVar1 = FUN_140abcb20(param_1,uVar2,param_4);
    if (cVar1 != '\0') {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(param_1 + 0x338,local_res8);
      piVar4 = (int *)0x0;
      if (local_res8[0] != -1) {
        piVar4 = (int *)(*(longlong *)(param_1 + 0x338) + (longlong)local_res8[0] * 0x18);
      }
      piVar3 = piVar4 + 2;
      if (piVar4 == (int *)0x0) {
        piVar3 = (int *)0x0;
      }
      *piVar3 = *piVar3 + -1;
      if (*piVar3 == 0) {
        TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
        ::Remove(param_1 + 0x338,uVar2);
        FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
        TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(param_1 + 0x1c8,uVar2);
      }
    }
  }
  return;
}



// FUNCTION 140ab6010 FUN_140ab6010 body=212 status=ok
// SIG undefined FUN_140ab6010(void)

void FUN_140ab6010(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int local_res10 [2];
  
  if ((param_2 != 0) && (param_2 != *(longlong *)(param_1 + 0x118))) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1 + 0x2d0,local_res10);
    piVar2 = (int *)0x0;
    if (local_res10[0] != -1) {
      piVar2 = (int *)(*(longlong *)(param_1 + 0x2d0) + (longlong)local_res10[0] * 0x18);
    }
    piVar3 = piVar2 + 2;
    if (piVar2 == (int *)0x0) {
      piVar3 = (int *)0x0;
    }
    iVar1 = piVar3[1] + -1;
    piVar3[1] = iVar1;
    if ((*piVar3 < 1) && (iVar1 < 1)) {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(param_1 + 0x2d0,param_2);
      return;
    }
    if ((*(longlong *)(param_1 + 0x238) != 0) && (iVar1 == 0)) {
      FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),param_2,param_1,0,
                    *(longlong *)(param_1 + 0x238));
    }
  }
  return;
}



// FUNCTION 140ab60f0 FUN_140ab60f0 body=409 status=ok
// SIG undefined FUN_140ab60f0(void)

void FUN_140ab60f0(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
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
  
  if (((*(byte *)(*(longlong *)(param_1 + 0x118) + 0x94) & 2) == 0) &&
     ((param_2 != *(longlong *)(param_1 + 0x238) || (param_3 != *(char *)(param_1 + 0x240))))) {
    FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
    local_58 = 0;
    uStack_54 = 1;
    iVar1 = *(int *)(param_1 + 0x360);
    puStack_20 = (uint *)(param_1 + 0x348);
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar1 != 0) {
      puVar6 = *(uint **)(param_1 + 0x358);
      if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar2 = *puVar6;
      uStack_40 = 0;
      local_58 = 0;
      while (uVar2 == 0) {
        lVar5 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar4 = local_58 + 1;
        bVar3 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar4;
        if (bVar3) goto LAB_140ab61ef;
        uVar2 = puVar6[lVar5 + 1];
      }
      uStack_54 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar1 < local_48._4_4_) {
LAB_140ab61ef:
        local_48._4_4_ = iVar1;
      }
    }
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    uStack_40 = 0xffffffff;
    iStack_3c = local_48._4_4_;
    bVar3 = local_48._4_4_ < iVar1;
    local_30 = (longlong *)(param_1 + 0x338);
    local_48 = puStack_20;
    if (bVar3) {
      do {
        FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)iStack_3c * 0x18));
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return;
}



// FUNCTION 140ab6290 FUN_140ab6290 body=742 status=ok
// SIG undefined FUN_140ab6290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab6290(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  if (param_2 != 0) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
    if (*(char *)((longlong)param_1 + 0x591) != '\x03') {
      local_c8 = param_2;
      if (*(char *)((longlong)param_1 + 0x591) == '\x01') {
        (**(code **)(*param_1 + 0x600))();
        *(undefined1 *)((longlong)param_1 + 0x591) = 2;
        FUN_14130a0f0(param_1,2);
        lVar1 = param_1[0xb3];
        lVar2 = 0;
        if (lVar1 != 0) {
          if (*(char *)((longlong)param_1 + 0x592) == '\0') {
            lVar2 = lVar1 + 0x90;
          }
          else if (*(char *)((longlong)param_1 + 0x592) == '\x01') {
            lVar2 = lVar1 + 0xc0;
          }
        }
        if ((lVar2 != 0) && (*(char *)(lVar2 + 8) != '\0')) {
          lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
          uStack_b8 = 0;
          *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar2 + 0x790);
          local_c0 = FUN_140ab5cb0;
          uVar6 = FUN_140aac120(param_1);
          uVar3 = AActor::GetWorldTimerManager(param_1);
          plVar4 = (longlong *)FMemory::Realloc(0,0x30);
          if (plVar4 != (longlong *)0x0) {
            *plVar4 = (longlong)&PTR_FUN_143f77b88;
            FWeakObjectPtr::operator=(plVar4 + 1,param_1);
            *(undefined4 *)(plVar4 + 2) = (undefined4)local_c0;
            *(undefined4 *)((longlong)plVar4 + 0x14) = local_c0._4_4_;
            *(undefined4 *)(plVar4 + 3) = uStack_b8;
            *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_b4;
            lVar2 = FDelegateHandle::GenerateNewID();
            plVar4[5] = lVar2;
            *plVar4 = (longlong)&PTR_FUN_143f77bd0;
          }
          local_a8 = 0;
          local_a0 = 0;
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x30))(plVar4,&local_a8);
          }
          FWeakObjectPtr::operator=(local_98,0);
          local_d0 = 0xbf800000;
          local_d8 = 0;
          local_90 = 0;
          local_58 = (longlong *)0x0;
          local_48 = 0;
          local_88 = AK::MemoryMgr::StartProfileThreadUsage;
          FUN_142880850(uVar3,param_1 + 0xb1,&local_a8,uVar6);
          if (local_48 != 0) {
            plVar5 = local_78;
            if (local_58 != (longlong *)0x0) {
              plVar5 = local_58;
            }
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,0);
            }
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
          if (plVar4 != (longlong *)0x0) {
            (**(code **)(*plVar4 + 0x28))(plVar4,0);
            lVar2 = FMemory::Realloc(plVar4,0,0);
            if (lVar2 != 0) {
              FMemory::Free(lVar2);
            }
          }
        }
      }
      lVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      if ((((lVar2 != 0) && (lVar2 = UWorld::GetGameState<APVPGameState>(lVar2), lVar2 != 0)) &&
          (lVar2 = *(longlong *)(lVar2 + 0x5a8), lVar2 != 0)) &&
         (lVar1 = param_1[0xac], param_2 != 0)) {
        FUN_140aa59c0(lVar2,param_2);
        FUN_141309be0(lVar2,param_2,lVar1);
      }
      (**(code **)(*param_1 + 0x600))(param_1);
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0xae,&local_c8);
      FUN_14130a070(param_1);
      FUN_140ac2d40(param_1);
    }
  }
  return;
}



// FUNCTION 140ab6580 FUN_140ab6580 body=62 status=ok
// SIG undefined FUN_140ab6580(void)

void FUN_140ab6580(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar1 = FUN_140cff230(lVar1);
    if (lVar1 != 0) {
      FUN_140aaaa30(param_1,*(undefined8 *)(lVar1 + 0x528));
      return;
    }
  }
  return;
}



// FUNCTION 140ab65c0 FUN_140ab65c0 body=956 status=ok
// SIG undefined FUN_140ab65c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab65c0(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined1 auStack_108 [32];
  undefined1 local_e8;
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined1 local_b8 [8];
  undefined8 local_b0;
  code *local_a8;
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  ulonglong local_58;
  
  if (((param_2 != 0) &&
      (local_58 = DAT_1468387a8 ^ (ulonglong)auStack_108, param_2 != param_1[0xac])) &&
     (*(char *)((longlong)param_1 + 0x591) != '\x03')) {
    plVar7 = (longlong *)param_1[0xae];
    plVar2 = plVar7 + (int)param_1[0xaf];
    for (; plVar7 != plVar2; plVar7 = plVar7 + 1) {
      if (*plVar7 == param_2) {
        (**(code **)(*param_1 + 0x600))(param_1);
        lVar3 = (longlong)(int)param_1[0xaf];
        uVar4 = 0;
        if ((int)param_1[0xaf] != 0) {
          bVar11 = *(longlong *)param_1[0xae] != param_2;
          uVar6 = uVar4;
          uVar9 = uVar4;
          do {
            iVar5 = (int)uVar6;
            uVar4 = uVar4 + 1;
            uVar6 = (ulonglong)(iVar5 + 1);
            if ((longlong)uVar4 < lVar3) {
              plVar2 = (longlong *)(param_1[0xae] + uVar4 * 8);
              do {
                if (bVar11 != (*plVar2 != param_2)) break;
                uVar6 = (ulonglong)((int)uVar6 + 1);
                uVar4 = uVar4 + 1;
                plVar2 = plVar2 + 1;
              } while ((longlong)uVar4 < lVar3);
            }
            iVar10 = (int)uVar6 - iVar5;
            if (bVar11 != false) {
              iVar8 = (int)uVar9;
              if (iVar8 != iVar5) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)(param_1[0xae] + (longlong)iVar8 * 8),
                           (void *)(param_1[0xae] + (longlong)iVar5 * 8),(longlong)iVar10 << 3);
              }
              uVar9 = (ulonglong)(uint)(iVar8 + iVar10);
            }
            bVar11 = (bool)(bVar11 ^ 1);
          } while ((longlong)uVar4 < lVar3);
          *(int *)(param_1 + 0xaf) = (int)uVar9;
        }
        FUN_14130a070(param_1);
        FUN_140ac2d40(param_1);
        if ((*(char *)((longlong)param_1 + 0x591) == '\x02') && ((int)param_1[0xaf] == 0)) {
          FUN_140ac1950(param_1,1);
          lVar3 = FUN_140aac0f0(param_1);
          if ((lVar3 != 0) && (*(char *)(lVar3 + 8) != '\0')) {
            lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
            uStack_d0 = 0;
            *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(lVar3 + 0x790);
            local_d8 = FUN_140ab5cb0;
            uVar12 = FUN_140aac0a0(param_1);
            uVar1 = AActor::GetWorldTimerManager(param_1);
            plVar2 = (longlong *)FMemory::Realloc(0,0x30);
            if (plVar2 != (longlong *)0x0) {
              *plVar2 = (longlong)&PTR_FUN_143f77b88;
              FWeakObjectPtr::operator=(plVar2 + 1,param_1);
              *(undefined4 *)(plVar2 + 2) = (undefined4)local_d8;
              *(undefined4 *)((longlong)plVar2 + 0x14) = local_d8._4_4_;
              *(undefined4 *)(plVar2 + 3) = uStack_d0;
              *(undefined4 *)((longlong)plVar2 + 0x1c) = uStack_cc;
              lVar3 = FDelegateHandle::GenerateNewID();
              plVar2[5] = lVar3;
              *plVar2 = (longlong)&PTR_FUN_143f77bd0;
            }
            local_c8 = 0;
            local_c0 = 0;
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x30))(plVar2,&local_c8);
            }
            FWeakObjectPtr::operator=(local_b8,0);
            local_e0 = 0xbf800000;
            local_e8 = 0;
            local_b0 = 0;
            local_78 = (longlong *)0x0;
            local_68 = 0;
            local_a8 = AK::MemoryMgr::StartProfileThreadUsage;
            FUN_142880850(uVar1,param_1 + 0xb1,&local_c8,uVar12);
            if (local_68 != 0) {
              plVar7 = local_98;
              if (local_78 != (longlong *)0x0) {
                plVar7 = local_78;
              }
              if (plVar7 != (longlong *)0x0) {
                (**(code **)(*plVar7 + 0x10))(plVar7,0);
              }
            }
            if (local_78 != (longlong *)0x0) {
              FMemory::Free();
            }
            TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_c8);
            if (plVar2 != (longlong *)0x0) {
              (**(code **)(*plVar2 + 0x28))(plVar2,0);
              lVar3 = FMemory::Realloc(plVar2,0,0);
              if (lVar3 != 0) {
                FMemory::Free(lVar3);
              }
            }
          }
        }
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (lVar3 == 0) {
          return;
        }
        lVar3 = UWorld::GetGameState<APVPGameState>(lVar3);
        if (lVar3 == 0) {
          return;
        }
        if (*(longlong *)(lVar3 + 0x5a8) == 0) {
          return;
        }
        if (param_2 == 0) {
          return;
        }
        FUN_141309f50(*(longlong *)(lVar3 + 0x5a8),param_2,param_1[0xac]);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ab6980 FUN_140ab6980 body=296 status=ok
// SIG undefined FUN_140ab6980(void)

void FUN_140ab6980(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(char *)(param_1 + 0x183) == '\0') {
    FUN_140abcbc0();
  }
  uVar3 = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
  *(undefined8 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x280,0);
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2a8,0);
  }
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x2d0,0);
  *(undefined8 *)(param_1 + 800) = 0;
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x338,0);
  FUN_140aa8230(param_1 + 0x3b0,0);
  if (0 < (int)*(uint *)(param_1 + 0x5f8)) {
    uVar4 = (ulonglong)*(uint *)(param_1 + 0x5f8);
    do {
      lVar2 = *(longlong *)(param_1 + 0x5f0);
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        lVar2 = param_1 + 0x5e0;
      }
      uVar1 = (longlong)*(int *)(param_1 + 0x5f8) - 1U & uVar3;
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar2 + uVar1 * 4) = 0xffffffff;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)(param_1 + 0x620) = 0;
  if (*(int *)(param_1 + 0x624) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x618,0);
  }
  *(undefined4 *)(param_1 + 0x670) = 0;
  if (*(int *)(param_1 + 0x674) != 0) {
    TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
    ResizeTo(param_1 + 0x648,0);
  }
  return;
}



// FUNCTION 140ab6ae0 FUN_140ab6ae0 body=78 status=ok
// SIG undefined FUN_140ab6ae0(void)

void FUN_140ab6ae0(longlong param_1)

{
  undefined8 local_18;
  undefined1 local_10;
  
  if (0 < *(int *)(param_1 + 0x200)) {
    local_18 = *(undefined8 *)(param_1 + 0x238);
    local_10 = 0;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (param_1 + 0x1f8,&local_18);
  }
  *(undefined1 *)(param_1 + 0x606) = *(undefined1 *)(param_1 + 0x604);
  *(undefined1 *)(param_1 + 0x605) = 1;
  return;
}



// FUNCTION 140ab6b90 FUN_140ab6b90 body=369 status=ok
// SIG undefined FUN_140ab6b90(void)

void FUN_140ab6b90(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (((((*(byte *)(*(longlong *)(param_1 + 0x118) + 0x94) & 2) == 0) &&
       (*(char *)(param_1 + 0x185) == '\0')) && (*(char *)(param_1 + 0x184) != '\x01')) &&
     (((*(longlong *)(param_1 + 0x388) == 0 && (param_2 != 0)) &&
      ((plVar2 = *(longlong **)(param_2 + 0x58), plVar2 != (longlong *)0x0 &&
       ((plVar2[0x1f] != 0 || ((**(code **)(*plVar2 + 0x368))(plVar2), plVar2[0x1f] != 0)))))))) {
    plVar2 = *(longlong **)(param_2 + 0x58);
    if (plVar2 == (longlong *)0x0) {
      lVar5 = 0;
    }
    else {
      lVar5 = plVar2[0x1f];
      if (lVar5 == 0) {
        (**(code **)(*plVar2 + 0x368))(plVar2);
        lVar5 = plVar2[0x1f];
      }
    }
    lVar5 = FUN_140aabd10(param_1,lVar5);
    if ((lVar5 != 0) &&
       ((((*(byte *)(param_2 + 0x100) & 4) != 0 || ((byte)(*(char *)(param_2 + 0x2f0) - 1U) < 2)) ||
        (iVar4 = rand(),
        (float)iVar4 * 3.051851e-05 < *(float *)(lVar5 + 0x88) ||
        (float)iVar4 * 3.051851e-05 == *(float *)(lVar5 + 0x88))))) {
      uVar1 = *(undefined4 *)(param_2 + 0x118);
      uVar3 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x110);
      *(undefined4 *)(param_1 + 0x398) = uVar1;
      lVar6 = *(longlong *)(param_1 + 0x120);
      *(longlong *)(param_1 + 0x388) = lVar5;
      *(undefined8 *)(param_1 + 0x3a0) = uVar3;
      if (lVar6 == 0) {
        lVar6 = FUN_1423407b0(param_1);
      }
      *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(lVar6 + 0x790);
      FUN_140aa26f0(*(undefined8 *)(param_1 + 0x220),param_1);
    }
  }
  return;
}



// FUNCTION 140ab6d10 FUN_140ab6d10 body=264 status=ok
// SIG undefined FUN_140ab6d10(void)

void FUN_140ab6d10(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(int *)(param_1 + 0x98) != 0) &&
     (*(int *)(param_1 + 0x98) !=
      *(int *)((longlong)*(int *)(param_1 + 0xb0) * 0x60 + -0x60 + *(longlong *)(param_1 + 0xa8))))
  {
    FUN_140abe130(param_1,0);
  }
  if (0 < *(int *)(param_1 + 0xb0)) {
    lVar4 = (longlong)*(int *)(param_1 + 0xb0) * 0x60 + *(longlong *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(lVar4 + -0x60);
    cVar1 = FUN_14059ee90(lVar4 + -0x40);
    *(bool *)(param_1 + 0xa6) = cVar1 == '\0';
    FUN_140ac1990(param_1,1,param_2);
    plVar2 = *(longlong **)(param_1 + 0x38);
    plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x40) * 2;
    if (plVar2 != plVar3) {
      while (((int)plVar2[1] == 0 || (*plVar2 == 0))) {
        plVar2 = plVar2 + 2;
        if (plVar2 == plVar3) {
          return;
        }
      }
      FUN_140aa4890(param_1 + 0x38,*(undefined8 *)(lVar4 + -0x50),*(undefined8 *)(lVar4 + -0x48),
                    lVar4 + -0x28,lVar4 + -0x18,*(undefined1 *)(lVar4 + -8),param_2);
    }
  }
  return;
}



// FUNCTION 140ab6e20 FUN_140ab6e20 body=456 status=ok
// SIG undefined FUN_140ab6e20(void)

void FUN_140ab6e20(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int *piVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *local_18;
  undefined8 local_10;
  
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if (((lVar3 != 0) && (lVar3 = UWorld::GetGameState<APVPGameState>(lVar3), lVar3 != 0)) &&
     (lVar3 = *(longlong *)(lVar3 + 0x5a8), lVar3 != 0)) {
    if (*(char *)((longlong)param_1 + 0x591) != '\x03') {
      (**(code **)(*param_1 + 0x600))(param_1);
      *(undefined1 *)((longlong)param_1 + 0x591) = 3;
      FUN_14130a0f0(param_1,3);
    }
    if (*(char *)(lVar3 + 0x128) == '\x03') {
      iVar11 = *(int *)((longlong)param_1 + 0xc);
      uVar8 = 0;
      uVar4 = uVar8;
      if (iVar11 < (int)DAT_1469e91c4) {
        uVar6 = iVar11 >> 0x1f & 0xffff;
        uVar2 = iVar11 + uVar6;
        uVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
      }
      if ((*(uint *)(uVar4 + 8) >> 0x1d & 1) == 0) {
        piVar5 = (int *)(lVar3 + 0x4b0);
        while (iVar11 = (int)uVar8, *piVar5 != -1) {
          uVar8 = (ulonglong)(iVar11 + 1U);
          piVar5 = piVar5 + 0x14;
          if (1 < iVar11 + 1U) {
            return;
          }
        }
        if (iVar11 != -1) {
          local_18 = (longlong *)0x0;
          local_10 = 0;
          cVar1 = FUN_140ac2eb0(lVar3,param_1,&local_18);
          if (cVar1 == '\0') {
            FUN_140ab4430(param_1,2);
            plVar10 = local_18;
            plVar9 = local_18;
            for (iVar11 = (int)local_10; iVar11 != 0; iVar11 = iVar11 + -1) {
              if (*plVar9 != 0) {
                FMemory::Free();
              }
              plVar9 = plVar9 + 2;
            }
          }
          else {
            lVar7 = (longlong)iVar11 * 0x50 + 0x468 + lVar3;
            *(int *)(lVar7 + 0x48) = iVar11;
            *(longlong *)(lVar7 + 0x20) = param_1[0xac];
            *(longlong **)(lVar7 + 0x18) = param_1;
            FUN_140abd5e0(lVar3,lVar7,&local_18,*(undefined1 *)((longlong)param_1 + 0x592));
            plVar10 = local_18;
            plVar9 = local_18;
            for (iVar11 = (int)local_10; iVar11 != 0; iVar11 = iVar11 + -1) {
              if (*plVar9 != 0) {
                FMemory::Free();
              }
              plVar9 = plVar9 + 2;
            }
          }
          if (plVar10 != (longlong *)0x0) {
            FMemory::Free(plVar10);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ab6ff0 FUN_140ab6ff0 body=201 status=ok
// SIG undefined FUN_140ab6ff0(void)

int FUN_140ab6ff0(char *param_1,int param_2,int param_3)

{
  undefined4 local_res8 [2];
  int local_res20 [2];
  
  FUN_140aa7660();
  if (*param_1 == '\x02') {
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    *param_1 = '\x03';
    FUN_140ab8370(param_1,local_res20,7);
    if ((param_2 <= local_res20[0]) && (local_res20[0] <= param_3)) {
      if (param_1[0x1c] != '\0') {
        local_res8[0] = 0;
        FUN_140ab8370(param_1,local_res8,1);
        FUN_140ab8370(param_1,local_res8,0x20);
        FUN_140ab8370(param_1,local_res8,0x10);
      }
      return local_res20[0];
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
  }
  return -1;
}



// FUNCTION 140ab70c0 FUN_140ab70c0 body=59 status=ok
// SIG undefined FUN_140ab70c0(void)

void FUN_140ab70c0(longlong param_1,int param_2,undefined8 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = *(int **)(param_1 + 0x80);
  piVar2 = piVar1 + (longlong)*(int *)(param_1 + 0x88) * 0xc;
  if (piVar1 == piVar2) {
    return;
  }
  do {
    if (*piVar1 == param_2) {
      FString::operator=(piVar1 + 8,param_3);
      return;
    }
    piVar1 = piVar1 + 0xc;
  } while (piVar1 != piVar2);
  return;
}



// FUNCTION 140ab7100 FUN_140ab7100 body=474 status=ok
// SIG undefined FUN_140ab7100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab7100(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  code *local_f8 [2];
  longlong local_e8 [4];
  longlong *local_c8;
  int local_b8;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  undefined1 local_88 [16];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  lVar1 = (**(code **)(*param_1 + 0x148))();
  if (lVar1 != 0) {
    FWeakObjectPtr::operator=(&local_108,param_1);
    local_100 = 0;
    local_c8 = (longlong *)0x0;
    local_b8 = 0;
    puVar2 = (undefined8 *)FUN_140438ef0(0x10,local_e8);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_CopyToEmptyStorage_143fcfe50;
      *(undefined4 *)(puVar2 + 1) = local_108;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_104;
    }
    local_f8[0] = AActor::GetWorldSettings;
    lVar1 = (**(code **)(*param_1 + 0x148))(param_1);
    if (*(longlong *)(lVar1 + 400) == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x3f8);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(lVar1 + 400) + 0x90);
    }
    lVar1 = param_1[0xaa];
    local_a8 = 0;
    local_a0 = 0;
    FWeakObjectPtr::operator=(local_98,0);
    local_90 = 0;
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_88,local_f8);
    local_110 = 0xbf800000;
    local_118 = 0;
    FUN_142880850(uVar3,&local_100,&local_a8,(int)lVar1);
    if (local_48 != 0) {
      plVar4 = local_78;
      if (local_58 != (longlong *)0x0) {
        plVar4 = local_58;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_58 != (longlong *)0x0) {
      FMemory::Free();
    }
    TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
    if (local_b8 != 0) {
      plVar4 = local_e8;
      if (local_c8 != (longlong *)0x0) {
        plVar4 = local_c8;
      }
      if (plVar4 != (longlong *)0x0) {
        (**(code **)(*plVar4 + 0x10))(plVar4,0);
      }
    }
    if (local_c8 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  FUN_14130a0b0(param_1,(char)param_1[0xb2]);
  return;
}



// FUNCTION 140ab72e0 FUN_140ab72e0 body=312 status=ok
// SIG undefined FUN_140ab72e0(void)

void FUN_140ab72e0(undefined8 param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  undefined1 local_88 [32];
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  
  FWeakObjectPtr::operator=(&local_res18,param_1);
  local_38 = (longlong *)0x0;
  local_28 = 0;
  puVar7 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar7 != (undefined8 *)0x0) {
    *puVar7 = &PTR_CopyToEmptyStorage_143fcfe68;
    *(undefined4 *)(puVar7 + 1) = local_res18;
    *(undefined4 *)((longlong)puVar7 + 0xc) = local_res1c;
    *(undefined4 *)(puVar7 + 2) = param_2;
  }
  local_68[0] = &LAB_140aa4e40;
  plVar8 = (longlong *)FUN_140596960(local_88,0,0xff);
  lVar3 = *plVar8;
  TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(lVar3 + 0x10,local_68);
  *(undefined4 *)(lVar3 + 0x60) = 2;
  lVar3 = *plVar8;
  lVar6 = plVar8[2];
  lVar4 = plVar8[1];
  lVar5 = *(longlong *)(lVar3 + 0x78);
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0x48) = *(int *)(lVar5 + 0x48) + 1;
    UNLOCK();
  }
  local_res20 = lVar5;
  FUN_1405ab110(lVar3,lVar4,(int)lVar6,1);
  if (local_28 != 0) {
    plVar8 = local_58;
    if (local_38 != (longlong *)0x0) {
      plVar8 = local_38;
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x10))(plVar8,0);
    }
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (lVar5 != 0) {
    LOCK();
    piVar1 = (int *)(lVar5 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(local_res20);
    }
  }
  return;
}



// FUNCTION 140ab7420 FUN_140ab7420 body=730 status=ok
// SIG undefined FUN_140ab7420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab7420(undefined8 param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  longlong param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong *plStack_100;
  undefined8 local_f8;
  longlong *local_f0;
  undefined1 local_e8 [8];
  longlong *local_e0;
  undefined8 local_c8;
  longlong *plStack_c0;
  undefined1 local_b8 [8];
  longlong *local_b0;
  undefined1 local_a0 [8];
  longlong *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  FTextFormat::FTextFormat(&local_108);
  local_88 = 0;
  local_80 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = 0;
  local_40 = 0;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_b8,L"{ContentDescription}\n\n{RedemptionInstructions}",
                     L"DownloadableEntitlementUtils",L"EntitlementMailBody");
  FTextFormat::FTextFormat(&local_f8,uVar7);
  plVar3 = plStack_100;
  uVar7 = local_108;
  local_108 = local_f8;
  plStack_100 = local_f0;
  local_f8 = uVar7;
  local_f0 = plVar3;
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
  if (local_b0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_b0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_b0)(local_b0);
      LOCK();
      piVar2 = (int *)((longlong)local_b0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_b0 + 8))(local_b0,1);
      }
    }
  }
  TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
  ::Emplace<wchar_t_const_(&)[9],FText>(&local_88,L"ContentDescription",param_4 + 8);
  cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
  if (cVar6 == '\x02') {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_e8,L"The item(s) granted here are now available in the game.",
               L"DownloadableEntitlementUtils",L"DurableOfferRedemptionInstr");
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    if (cVar6 == '\x01') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_e8,L"Press \'Accept\' to redeem the mail contents into your inventory.",
                 L"DownloadableEntitlementUtils",L"ConsumableOfferRedemptionInstr");
    }
    else {
      uVar7 = FUN_1404b03b0();
      FText::FText(local_e8,uVar7);
    }
  }
  TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
  ::Emplace<wchar_t_const_(&)[9],FText>(&local_88,L"RedemptionInstructions",local_e8);
  if (local_e0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_e0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_e0)(local_e0);
      LOCK();
      piVar2 = (int *)((longlong)local_e0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_e0 + 8))(local_e0,1);
      }
    }
  }
  local_c8 = local_108;
  plStack_c0 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_100 + 1) = (int)plStack_100[1] + 1;
    UNLOCK();
  }
  uVar7 = FText::Format(local_a0,&local_c8,&local_88);
  FText::operator=(param_5 + 0x38,uVar7);
  if (local_98 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_98 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_98)(local_98);
      LOCK();
      piVar2 = (int *)((longlong)local_98 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_98 + 8))(local_98,1);
      }
    }
  }
  local_40 = 0;
  if (local_48 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_88);
  plVar3 = plStack_100;
  if (plStack_100 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_100 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_100)(plStack_100);
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
  return;
}



// FUNCTION 140ab7700 FUN_140ab7700 body=715 status=ok
// SIG undefined FUN_140ab7700(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab7700(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  longlong lVar5;
  char cVar6;
  undefined8 uVar7;
  undefined1 auStack_138 [32];
  undefined8 local_118;
  longlong *plStack_110;
  undefined8 local_108;
  longlong *local_100;
  undefined1 local_f8 [8];
  longlong *local_f0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  FTextFormat::FTextFormat(&local_118);
  local_98 = 0;
  local_90 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar7 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_c8,L"{ContentDescription}\n\n{RedemptionInstructions}",
                     L"SparkDownloadableEntitlementUtils",L"EntitlementMailBody");
  FTextFormat::FTextFormat(&local_108,uVar7);
  plVar3 = plStack_110;
  uVar7 = local_118;
  local_118 = local_108;
  plStack_110 = local_100;
  local_108 = uVar7;
  local_100 = plVar3;
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
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_c0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)local_c0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_c0 + 8))(local_c0,1);
      }
    }
  }
  TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
  ::Emplace<wchar_t_const_(&)[9],FText>(&local_98,L"ContentDescription",*param_3 + 0x48);
  cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
  if (cVar6 == '\x02') {
    FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
              (local_f8,L"The item(s) granted here are now available in the game.",
               L"DownloadableEntitlementUtils",L"DurableOfferRedemptionInstr");
  }
  else {
    cVar6 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
    if (cVar6 == '\x01') {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (local_f8,L"Press \'Accept\' to redeem the mail contents into your inventory.",
                 L"DownloadableEntitlementUtils",L"ConsumableOfferRedemptionInstr");
    }
    else {
      uVar7 = FUN_1404b03b0();
      FText::FText(local_f8,uVar7);
    }
  }
  TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
  ::Emplace<wchar_t_const_(&)[9],FText>(&local_98,L"RedemptionInstructions",local_f8);
  if (local_f0 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_f0 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_f0)(local_f0);
      LOCK();
      piVar2 = (int *)((longlong)local_f0 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_f0 + 8))(local_f0,1);
      }
    }
  }
  local_d8 = local_118;
  plStack_d0 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_110 + 1) = (int)plStack_110[1] + 1;
    UNLOCK();
  }
  uVar7 = FText::Format(local_b0,&local_d8,&local_98);
  FText::operator=(param_4 + 0x38,uVar7);
  if (local_a8 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_a8 + 1;
    lVar5 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*local_a8)(local_a8);
      LOCK();
      piVar2 = (int *)((longlong)local_a8 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_a8 + 8))(local_a8,1);
      }
    }
  }
  local_50 = 0;
  if (local_58 != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_98);
  plVar3 = plStack_110;
  if (plStack_110 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_110 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_110)(plStack_110);
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
  return;
}



// FUNCTION 140ab79d0 FUN_140ab79d0 body=530 status=ok
// SIG undefined FUN_140ab79d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ab79d0(undefined8 param_1,longlong param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [32];
  undefined4 local_f8 [4];
  undefined8 local_e8;
  longlong *plStack_e0;
  undefined8 local_d8;
  longlong *plStack_d0;
  undefined1 local_c8 [8];
  longlong *local_c0;
  undefined1 local_b0 [8];
  longlong *local_a8;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  cVar5 = (**(code **)(**(longlong **)(param_2 + 0x10) + 0x10))();
  if (cVar5 == '\x01') {
    uVar6 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                      (local_c8,L"{title} ({count} available)",L"SparkDownloadableEntitlementUtils",
                       L"EntitlementSubject");
    FTextFormat::FTextFormat(&local_e8,uVar6);
    if (local_c0 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_c0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_c0)(local_c0);
        LOCK();
        piVar2 = (int *)((longlong)local_c0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_c0 + 8))(local_c0,1);
        }
      }
    }
    local_f8[0] = *(undefined4 *)(param_2 + 0x20);
    local_68 = 0xffffffff;
    local_98 = 0;
    local_90 = 0;
    local_78 = 0;
    local_70 = 0;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    FUN_140a9c730(&local_98,L"count",local_f8);
    TMapBase<FString,FFormatArgumentValue,FDefaultSetAllocator,FLocKeyMapFuncs<FFormatArgumentValue>_>
    ::Emplace<wchar_t_const_(&)[9],FText>(&local_98,L"title",*param_3 + 0x30);
    local_d8 = local_e8;
    plStack_d0 = plStack_e0;
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_e0 + 1) = (int)plStack_e0[1] + 1;
      UNLOCK();
    }
    uVar6 = FText::Format(local_b0,&local_d8,&local_98);
    FText::operator=(param_4 + 0x20,uVar6);
    if (local_a8 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_a8 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*local_a8)(local_a8);
        LOCK();
        piVar2 = (int *)((longlong)local_a8 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*local_a8 + 8))(local_a8,1);
        }
      }
    }
    local_50 = 0;
    if (local_58 != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<FString,FFormatArgumentValue>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (&local_98);
    if (plStack_e0 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_e0 + 1;
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar4 == 1) {
        (**(code **)*plStack_e0)(plStack_e0);
        LOCK();
        piVar2 = (int *)((longlong)plStack_e0 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plStack_e0 + 8))(plStack_e0,1);
        }
      }
    }
  }
  else {
    FText::operator=(param_4 + 0x20,*param_3 + 0x30);
  }
  return;
}



// FUNCTION 140ab7bf0 FUN_140ab7bf0 body=633 status=ok
// SIG undefined FUN_140ab7bf0(void)

void FUN_140ab7bf0(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  char cVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  wchar_t *pwVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong *plVar14;
  bool bVar15;
  longlong local_res10;
  undefined8 local_28;
  undefined8 uStack_20;
  
  thunk_FUN_142238430();
  uVar7 = FUN_142e80f20();
  lVar8 = (**(code **)(*param_1 + 0x628))(param_1,uVar7);
  param_1[0xab] = lVar8;
  if (lVar8 != 0) {
    local_28 = FUN_140ab3dd0;
    plVar14 = (longlong *)(lVar8 + 0x3a0);
    uStack_20._0_4_ = 0;
    plVar9 = (longlong *)FMemory::Realloc(0,0x30,0);
    if (plVar9 != (longlong *)0x0) {
      *plVar9 = (longlong)&PTR_FUN_1441db630;
      FWeakObjectPtr::operator=(plVar9 + 1,param_1);
      *(int *)(plVar9 + 2) = (int)local_28;
      *(int *)((longlong)plVar9 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar9 + 3) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)plVar9 + 0x1c) = uStack_20._4_4_;
      lVar10 = FDelegateHandle::GenerateNewID();
      plVar9[5] = lVar10;
    }
    if (&local_28 != plVar14) {
      if (plVar9 == (longlong *)0x0) {
        if ((*(int *)(lVar8 + 0x3a8) != 0) &&
           (plVar2 = (longlong *)*plVar14, plVar2 != (longlong *)0x0)) {
          (**(code **)(*plVar2 + 0x28))(plVar2,0);
          if (*plVar14 != 0) {
            lVar10 = FMemory::Realloc(*plVar14,0,0);
            *plVar14 = lVar10;
          }
          *(undefined4 *)(lVar8 + 0x3a8) = 0;
        }
      }
      else {
        (**(code **)(*plVar9 + 0x30))(plVar9,plVar14);
      }
    }
    if (plVar9 != (longlong *)0x0) {
      (**(code **)(*plVar9 + 0x28))(plVar9,0);
      lVar8 = FMemory::Realloc(plVar9,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
    pwVar11 = _guard_xfg_dispatch_icall_nop(L"&ADuelTotem::HandleUsedEvent",L"::");
    pwVar5 = (wchar_t *)0x0;
    while (pwVar4 = pwVar11, pwVar4 != (wchar_t *)0x0) {
      pwVar11 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar5 = pwVar4;
    }
    FName::FName(&local_res10,pwVar5 + 2,1);
    lVar8 = param_1[0xab];
    plVar14 = (longlong *)(lVar8 + 0x318);
    FWeakObjectPtr::operator=(&local_28,0);
    uStack_20 = 0;
    FWeakObjectPtr::operator=(&local_28,param_1);
    uStack_20 = local_res10;
    if ((local_res10 != 0) && (lVar10 = FWeakObjectPtr::Get(&local_28), lVar10 != 0)) {
      UObject::FindFunction(lVar10,uStack_20);
    }
    piVar3 = (int *)*plVar14;
    iVar1 = *(int *)(lVar8 + 800);
    for (piVar13 = piVar3; piVar13 != piVar3 + (longlong)iVar1 * 4; piVar13 = piVar13 + 4) {
      if ((((*piVar13 == (int)local_28) &&
           (local_28._4_4_ = (int)((ulonglong)local_28 >> 0x20),
           bVar15 = piVar13[1] == local_28._4_4_, bVar15)) ||
          ((cVar6 = FWeakObjectPtr::IsValid(piVar13), cVar6 == '\0' &&
           (cVar6 = FWeakObjectPtr::IsValid(&local_28), cVar6 == '\0')))) &&
         (*(longlong *)(piVar13 + 2) == uStack_20)) {
        if ((int)((longlong)piVar13 - (longlong)piVar3 >> 4) != -1) goto LAB_140ab7e46;
        break;
      }
    }
    iVar1 = *(int *)(lVar8 + 800);
    *(int *)(lVar8 + 800) = iVar1 + 1;
    if (*(int *)(lVar8 + 0x324) < iVar1 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar14,iVar1);
    }
    puVar12 = (undefined4 *)((longlong)iVar1 * 0x10 + *plVar14);
    *puVar12 = (int)local_28;
    puVar12[1] = local_28._4_4_;
    *(longlong *)(puVar12 + 2) = uStack_20;
LAB_140ab7e46:
    TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar14);
  }
  return;
}



// FUNCTION 140ab7e70 FUN_140ab7e70 body=102 status=ok
// SIG undefined FUN_140ab7e70(void)

void FUN_140ab7e70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  UObject::PostLoad();
  if (*(longlong *)(param_1 + 0x158) != 0) {
    lVar2 = UAITask::GetPrivateStaticClass();
    lVar1 = *(longlong *)(param_1 + 0x158);
    lVar4 = lVar1;
    if (lVar1 != 0) {
      while (lVar4 != lVar2) {
        lVar4 = *(longlong *)(lVar4 + 0x30);
        if (lVar4 == 0) {
          return;
        }
      }
      if (lVar1 != 0) {
        uVar3 = FUN_142fa27a0();
        *(undefined8 *)(param_1 + 0x148) = uVar3;
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
    }
  }
  return;
}



// FUNCTION 140ab7ee0 FUN_140ab7ee0 body=94 status=ok
// SIG undefined FUN_140ab7ee0(void)

void FUN_140ab7ee0(longlong param_1)

{
  if ((*(byte *)(*(longlong *)(param_1 + 0x118) + 0x94) & 0x18) == 0x10) {
    if (*(char *)(param_1 + 0x605) != '\0') {
      *(undefined1 *)(param_1 + 0x605) = 0;
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x208);
    }
    if (*(char *)(param_1 + 0x606) != '\0') {
      *(undefined1 *)(param_1 + 0x606) = 0;
      FUN_140ac1c00(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 140ab7f40 FUN_140ab7f40 body=1057 status=ok
// SIG undefined FUN_140ab7f40(void)

undefined8 FUN_140ab7f40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  undefined8 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_res18 [4];
  undefined8 local_78;
  char local_70;
  int local_6c;
  char local_68 [8];
  byte *local_60;
  int local_58;
  int local_54;
  uint local_50;
  char local_4c;
  undefined **local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 local_30;
  
  FUN_140a9ed30(local_68,param_2,1,0);
  local_78 = local_68;
  local_70 = local_68[0] == '\x04';
  if (local_68[0] == '\x04') {
    if (local_58 == 0) {
      local_68[0] = '\0';
      bVar2 = false;
    }
    else {
      cVar4 = FUN_140aa11e0(local_res18,local_60);
      if (cVar4 != '\0') {
        local_68[0] = '\x02';
        goto LAB_140ab7fac;
      }
      local_58 = 0;
      if (local_54 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_60,0);
      }
      local_50 = 0;
      bVar2 = false;
      local_68[0] = '\0';
    }
  }
  else if (local_68[0] == '\x02') {
LAB_140ab7fac:
    iVar12 = FUN_140ab6ff0(local_68,0,0);
    if (iVar12 == -1) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
      if (local_68[0] == '\x03') {
        local_68[0] = '\x02';
      }
    }
  }
  else {
    bVar2 = false;
  }
  FUN_140aa0190(&local_78);
  if (!bVar2) {
    uVar10 = 0;
    goto LAB_140ab80c8;
  }
  uVar6 = 0xffffffff;
  local_48 = &PTR_FUN_1442489b0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_78 = (char *)CONCAT44(0xffffffff,(undefined4)local_78);
  local_70 = '\0';
  local_6c = -1;
  if (local_68[0] == '\0') {
LAB_140ab809c:
    uVar10 = 0;
  }
  else {
    if (local_68[0] == '\x04') {
      if (local_58 != 0) {
        cVar4 = FUN_140aa11e0(local_res18,local_60);
        if (cVar4 != '\0') goto LAB_140ab8104;
        local_58 = 0;
        if (local_54 != 0) {
          TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_60,0);
        }
        local_50 = 0;
      }
      local_68[0] = '\0';
      goto LAB_140ab809c;
    }
    if (local_68[0] != '\x02') goto LAB_140ab809c;
LAB_140ab8104:
    local_50 = 0;
    local_68[0] = '\x03';
    uVar11 = 0;
    if (local_58 < 1) {
LAB_140ab8147:
      uVar6 = uVar11;
      if (local_4c != '\0') {
        local_res18[0] = 0;
        FUN_140ab8370(local_68,local_res18,1);
        FUN_140ab8370(local_68,local_res18,0x20);
        FUN_140ab8370(local_68,local_res18,0x10);
      }
    }
    else {
      local_50 = 7;
      uVar11 = *local_60 & 0x7f;
      if ((*local_60 & 0x7f) == 0) goto LAB_140ab8147;
      local_58 = 0;
      if (local_54 != 0) {
        TArray<unsigned_char,FDefaultAllocator>::ResizeTo(&local_60,0);
      }
      local_50 = 0;
      local_68[0] = '\0';
    }
    local_78 = (char *)CONCAT44(local_78._4_4_,uVar6);
    if ((int)uVar6 < 0) goto LAB_140ab809c;
    local_78 = (char *)(ulonglong)uVar6;
    cVar4 = FUN_140ab8370(local_68,(longlong)&local_78 + 4,7);
    if ((cVar4 == '\0') || (local_68[0] != '\x03')) goto LAB_140ab809c;
    uVar11 = local_50 >> 3;
    iVar12 = local_50 + uVar11 * -8;
    uVar6 = 8 - iVar12;
    if (3 < uVar6) {
      uVar6 = 4;
    }
    if (local_58 <= (int)uVar11) goto LAB_140ab809c;
    local_50 = local_50 + uVar6;
    uVar13 = 4 - uVar6;
    uVar9 = 0xffffffffU >> (0x20U - (char)uVar6 & 0x1f) & 0xff &
            (uint)(local_60[uVar11] >> ((byte)iVar12 & 0x1f));
    cVar4 = (char)uVar9;
    uVar3 = 8;
    if (uVar13 < 9) {
      uVar3 = uVar13;
    }
    while (uVar13 != 0) {
      uVar11 = uVar11 + 1;
      if (((int)uVar11 < 0) || (local_58 <= (int)uVar11)) goto LAB_140ab809c;
      local_50 = local_50 + uVar3;
      uVar13 = uVar13 - uVar3;
      uVar7 = uVar6 + uVar3;
      uVar9 = uVar9 | (0xffffffffU >> (0x20U - (char)uVar3 & 0x1f) & 0xff &
                      (uint)local_60[(int)uVar11]) << ((byte)uVar6 & 0x1f);
      cVar4 = (char)uVar9;
      uVar6 = uVar7;
      uVar3 = 8;
      if (uVar13 < 9) {
        uVar3 = uVar13;
      }
    }
    local_70 = cVar4;
    if (cVar4 == '\0') goto LAB_140ab809c;
    local_6c = 0;
    cVar4 = FUN_140ab8370(local_68,&local_6c,7);
    if (((cVar4 == '\0') || (local_6c < 0)) ||
       (cVar4 = (*(code *)local_48[1])(&local_48), cVar4 != local_70)) goto LAB_140ab809c;
    cVar4 = (*(code *)local_48[0xb])(&local_48,local_68,local_78._4_4_);
    if (((cVar4 == '\0') || (cVar4 = (*(code *)local_48[5])(&local_48), cVar4 == '\0')) ||
       (cVar4 = (*(code *)local_48[5])(&local_48), cVar4 == '\0')) goto LAB_140ab809c;
    lVar1 = local_38 + (longlong)(int)local_30 * 8;
    for (lVar8 = local_38; lVar8 != lVar1; lVar8 = lVar8 + 8) {
      lVar5 = FWeakObjectPtr::Get(lVar8);
      if (lVar5 != 0) {
        FUN_1404c4470(param_1,lVar5);
      }
    }
    uVar10 = 1;
  }
  if (local_38 != 0) {
    FMemory::Free(local_38);
  }
  local_48 = &PTR_FUN_1442486f8;
LAB_140ab80c8:
  if (local_60 != (byte *)0x0) {
    FMemory::Free();
  }
  return uVar10;
}



// FUNCTION 140ab8370 FUN_140ab8370 body=256 status=ok
// SIG undefined FUN_140ab8370(void)

ulonglong FUN_140ab8370(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  ulonglong in_RAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((*param_1 == '\x03') && (param_3 != 0)) {
    *param_2 = 0;
    uVar2 = *(uint *)(param_1 + 0x18) & 7;
    uVar1 = *(uint *)(param_1 + 0x18) >> 3;
    in_RAX = (ulonglong)uVar1;
    uVar3 = 8 - uVar2;
    if (param_3 <= uVar3) {
      uVar3 = param_3;
    }
    if ((int)uVar1 < *(int *)(param_1 + 0x10)) {
      param_3 = param_3 - uVar3;
      *param_2 = 0xffffffffU >> (0x20U - (char)uVar3 & 0x1f) & 0xff &
                 (uint)(*(byte *)(in_RAX + *(longlong *)(param_1 + 8)) >> (sbyte)uVar2);
      *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar3;
      uVar2 = 8;
      if (param_3 < 9) {
        uVar2 = param_3;
      }
      while( true ) {
        uVar1 = uVar1 + 1;
        in_RAX = (ulonglong)uVar1;
        if (param_3 == 0) {
          return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
        }
        if (((int)uVar1 < 0) || (*(int *)(param_1 + 0x10) <= (int)uVar1)) break;
        param_3 = param_3 - uVar2;
        uVar4 = uVar3 + uVar2;
        *param_2 = *param_2 |
                   (0xffffffffU >> (0x20U - (char)uVar2 & 0x1f) & 0xff &
                   (uint)*(byte *)((longlong)(int)uVar1 + *(longlong *)(param_1 + 8))) <<
                   ((byte)uVar3 & 0x1f);
        *(uint *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + uVar2;
        uVar3 = uVar4;
        uVar2 = 8;
        if (param_3 < 9) {
          uVar2 = param_3;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140ab8470 FUN_140ab8470 body=132 status=ok
// SIG undefined FUN_140ab8470(void)

void FUN_140ab8470(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if ((0 < *(int *)(param_1 + 0xb0)) && (*(char *)(param_1 + 0x9c) != '\0')) {
    plVar1 = *(longlong **)(param_1 + 0x68);
    lVar3 = (longlong)*(int *)(param_1 + 0xb0) * 0x60 + *(longlong *)(param_1 + 0xa8);
    plVar2 = plVar1 + (longlong)*(int *)(param_1 + 0x70) * 2;
    for (; plVar1 != plVar2; plVar1 = plVar1 + 2) {
      if (((int)plVar1[1] != 0) && (*plVar1 != 0)) {
        FUN_140aa4890((longlong *)(param_1 + 0x68),*(undefined8 *)(lVar3 + -0x50),
                      *(undefined8 *)(lVar3 + -0x48),lVar3 + -0x28,lVar3 + -0x18,
                      *(undefined1 *)(lVar3 + -8),1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ab8500 FUN_140ab8500 body=84 status=ok
// SIG undefined FUN_140ab8500(void)

undefined1 FUN_140ab8500(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::Get(param_2);
  lVar2 = FUN_140aaa210(param_1,uVar1);
  if (lVar2 != 0) {
    lVar2 = FUN_140aaa190(lVar2,*(undefined4 *)(param_2 + 8));
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 4) = 1;
    }
    return 1;
  }
  return 0;
}



// FUNCTION 140ab8560 FUN_140ab8560 body=120 status=ok
// SIG undefined FUN_140ab8560(void)

void FUN_140ab8560(longlong param_1,char param_2)

{
  undefined8 uVar1;
  
  FUN_14223a2c0();
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x475) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x468);
    }
  }
  else if ((*(byte *)(param_1 + 0x474) & 2) != 0) {
    *(longlong *)(param_1 + 0x4b8) = param_1;
    FUN_14288e3d0(param_1 + 0x468,0);
    uVar1 = AActor::GetLevel(param_1);
    FTickFunction::RegisterTickFunction(param_1 + 0x468,uVar1);
    return;
  }
  return;
}



// FUNCTION 140ab85e0 FUN_140ab85e0 body=1094 status=ok
// SIG undefined FUN_140ab85e0(void)

void FUN_140ab85e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  longlong local_68;
  longlong *plStack_60;
  longlong local_58;
  longlong *plStack_50;
  longlong local_48;
  longlong *plStack_40;
  undefined1 local_38 [8];
  longlong *local_30;
  
  if (param_2 != 0) {
    lVar14 = 0;
    FWeakObjectPtr::operator=();
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar4 = *(longlong *)(DAT_146b33f38 + 0x108);
    if (lVar4 != 0) {
      lVar10 = FUN_142b45e90();
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      FUN_142dcf3a0(param_2,&local_58);
      if (local_58 == 0) {
        plVar11 = &local_68;
        local_68 = 0;
        plStack_60 = (longlong *)0x0;
        bVar9 = false;
        bVar8 = false;
        bVar7 = true;
      }
      else {
        local_48 = local_58;
        plStack_40 = plStack_50;
        if (plStack_50 != (longlong *)0x0) {
          LOCK();
          *(int *)(plStack_50 + 1) = (int)plStack_50[1] + 1;
          UNLOCK();
        }
        plVar11 = (longlong *)FUN_142b4a990(uVar5,local_38,&local_48);
        bVar9 = true;
        bVar8 = true;
        bVar7 = false;
        lVar14 = *plVar11;
      }
      plVar6 = (longlong *)plVar11[1];
      plVar11[1] = 0;
      *plVar11 = 0;
      plVar11 = plStack_60;
      if ((bVar7) && (plStack_60 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_60 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_60)(plStack_60);
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_60 + 8))(plStack_60,1);
          }
        }
      }
      if ((bVar8) && (local_30 != (longlong *)0x0)) {
        LOCK();
        plVar11 = local_30 + 1;
        lVar10 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
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
      plVar11 = plStack_40;
      if ((bVar9) && (plStack_40 != (longlong *)0x0)) {
        LOCK();
        plVar1 = plStack_40 + 1;
        lVar10 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar10 == 1) {
          (**(code **)*plStack_40)(plStack_40);
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
      if (lVar14 != 0) {
        puVar12 = (undefined8 *)operator_new(0x38);
        if (puVar12 == (undefined8 *)0x0) {
          puVar12 = (undefined8 *)0x0;
          bVar7 = false;
        }
        else {
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          uVar5 = *(undefined8 *)(lVar4 + 0x40);
          *puVar12 = &PTR_FUN_1442486c8;
          FWeakObjectPtr::operator=(puVar12 + 1,uVar5);
          *puVar12 = &PTR_FUN_144248770;
          puVar12[2] = lVar14;
          puVar12[3] = plVar6;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
            UNLOCK();
          }
          FWeakObjectPtr::operator=(puVar12 + 4,param_2);
          puVar12[5] = 0;
          puVar12[6] = 0;
          bVar7 = true;
        }
        iVar3 = *(int *)(param_1 + 0x10);
        *(int *)(param_1 + 0x10) = iVar3 + 1;
        if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar3);
        }
        puVar15 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 8));
        *puVar15 = puVar12;
        puVar13 = (undefined8 *)operator_new(0x18);
        if (puVar13 != (undefined8 *)0x0) {
          *(undefined4 *)(puVar13 + 1) = 1;
          *puVar13 = &PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)puVar13 + 0xc) = 1;
          puVar13[2] = puVar12;
        }
        puVar15[1] = puVar13;
        SharedPointerInternals::EnableSharedFromThis(puVar15,puVar12,puVar12);
        if ((bVar7) && (plVar6 != (longlong *)0x0)) {
          LOCK();
          plVar11 = plVar6 + 1;
          lVar14 = *plVar11;
          *(int *)plVar11 = (int)*plVar11 + -1;
          UNLOCK();
          if ((int)lVar14 == 1) {
            (**(code **)*plVar6)(plVar6);
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
      puVar12 = (undefined8 *)operator_new(0x68);
      if (puVar12 == (undefined8 *)0x0) {
        puVar12 = (undefined8 *)0x0;
      }
      else {
        uVar5 = *(undefined8 *)(lVar4 + 0x48);
        *puVar12 = &PTR_FUN_1442486c8;
        FWeakObjectPtr::operator=(puVar12 + 1,uVar5);
        *puVar12 = &PTR__scalar_deleting_destructor__1442487a0;
        FWeakObjectPtr::operator=(puVar12 + 2,param_2);
        puVar12[3] = 0;
        puVar12[4] = 0;
        puVar12[7] = 0;
        puVar12[8] = 0;
        *(undefined4 *)(puVar12 + 9) = 0xffffffff;
        *(undefined4 *)((longlong)puVar12 + 0x4c) = 0;
        puVar12[0xb] = 0;
        *(undefined4 *)(puVar12 + 0xc) = 0;
      }
      puVar13 = (undefined8 *)0x0;
      iVar3 = *(int *)(param_1 + 0x10);
      *(int *)(param_1 + 0x10) = iVar3 + 1;
      if (*(int *)(param_1 + 0x14) < iVar3 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8,iVar3);
      }
      puVar16 = (undefined8 *)((longlong)iVar3 * 0x10 + *(longlong *)(param_1 + 8));
      *puVar16 = puVar12;
      puVar15 = (undefined8 *)operator_new(0x18);
      if (puVar15 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar15 + 1) = 1;
        *puVar15 = &PTR_FUN_143f3f2e0;
        *(undefined4 *)((longlong)puVar15 + 0xc) = 1;
        puVar15[2] = puVar12;
        puVar13 = puVar15;
      }
      puVar16[1] = puVar13;
      SharedPointerInternals::EnableSharedFromThis(puVar16,puVar12,puVar12);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar11 = plVar6 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plVar6)(plVar6);
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
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar11 = plStack_50 + 1;
        lVar14 = *plVar11;
        *(int *)plVar11 = (int)*plVar11 + -1;
        UNLOCK();
        if ((int)lVar14 == 1) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar2 = (int *)((longlong)plStack_50 + 0xc);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (**(code **)(*plStack_50 + 8))(plStack_50,1);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140ab8a30 FUN_140ab8a30 body=230 status=ok
// SIG undefined FUN_140ab8a30(void)

void FUN_140ab8a30(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_1 + 0x538);
  if (param_3 == '\0') {
    iVar4 = *(int *)(param_1 + 0x540);
    iVar5 = 0;
    if (0 < iVar4) {
      lVar6 = 0;
      do {
        lVar2 = *plVar1;
        if (*(longlong *)(lVar6 + lVar2) == param_2) {
          iVar3 = (iVar4 - iVar5) + -1;
          if (0 < iVar3) {
            iVar3 = 1;
          }
          if (iVar3 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(lVar2 + (longlong)iVar5 * 8),
                       (void *)(lVar2 + (longlong)(iVar4 - iVar3) * 8),(longlong)iVar3 << 3);
            iVar4 = *(int *)(param_1 + 0x540);
          }
          *(int *)(param_1 + 0x540) = iVar4 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          iVar4 = *(int *)(param_1 + 0x540);
          iVar5 = iVar5 + -1;
          lVar6 = lVar6 + -8;
        }
        iVar5 = iVar5 + 1;
        lVar6 = lVar6 + 8;
      } while (iVar5 < iVar4);
    }
    return;
  }
  iVar4 = *(int *)(param_1 + 0x540);
  *(int *)(param_1 + 0x540) = iVar4 + 1;
  if (*(int *)(param_1 + 0x544) < iVar4 + 1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar4);
  }
  *(longlong *)(*plVar1 + (longlong)iVar4 * 8) = param_2;
  return;
}



// FUNCTION 140ab8b20 FUN_140ab8b20 body=197 status=ok
// SIG undefined FUN_140ab8b20(void)

void FUN_140ab8b20(longlong param_1,longlong param_2,char param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  
  if (param_3 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x568);
    for (plVar3 = plVar1; plVar3 != plVar1 + *(int *)(param_1 + 0x570); plVar3 = plVar3 + 1) {
      if (*plVar3 == param_2) {
        iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
        if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x570))) {
          plVar1[iVar2] = 0;
        }
        break;
      }
    }
  }
  else {
    TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
    AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x568);
  }
  if ((((*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4fc)) && (*(int *)(param_1 + 0x520) == 0)
       ) && (*(int *)(param_1 + 0x530) == 0)) &&
     ((*(int *)(param_1 + 0x550) == 0 && (*(int *)(param_1 + 0x570) == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4 != (*(char *)(param_1 + 0x37) != '\0')) {
    FUN_14288e3d0(param_1 + 0x28);
    return;
  }
  return;
}



// FUNCTION 140ab8bf0 FUN_140ab8bf0 body=213 status=ok
// SIG undefined FUN_140ab8bf0(void)

void FUN_140ab8bf0(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  bool bVar5;
  
  lVar1 = *(longlong *)(param_1 + 0x460);
  if (lVar1 != 0) {
    if (param_2 == '\0') {
      plVar2 = *(longlong **)(lVar1 + 0x548);
      for (plVar4 = plVar2; plVar4 != plVar2 + *(int *)(lVar1 + 0x550); plVar4 = plVar4 + 1) {
        if (*plVar4 == param_1) {
          iVar3 = (int)((longlong)plVar4 - (longlong)plVar2 >> 3);
          if ((-1 < iVar3) && (iVar3 < *(int *)(lVar1 + 0x550))) {
            plVar2[iVar3] = 0;
          }
          break;
        }
      }
    }
    else {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar1 + 0x548);
    }
    if ((((*(int *)(lVar1 + 0x4d0) == *(int *)(lVar1 + 0x4fc)) && (*(int *)(lVar1 + 0x520) == 0)) &&
        (*(int *)(lVar1 + 0x530) == 0)) &&
       ((*(int *)(lVar1 + 0x550) == 0 && (*(int *)(lVar1 + 0x570) == 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5 != (*(char *)(lVar1 + 0x37) != '\0')) {
      FUN_14288e3d0(lVar1 + 0x28);
      return;
    }
  }
  return;
}



// FUNCTION 140ab8cd0 Rehash body=631 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_140ab8e0f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_140ab8e0f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x68 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 100) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0xc) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140ab8f50 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<TSharedPtr<SWidget,0>,FText>,TDefaultMapHashableKeyFuncs<TSharedPtr<SWidget,0>,FText,0>,FDefaultSetAllocator>
     ::Rehash(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_140ab908f;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_140ab908f:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x30 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x2c) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 5) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140ab91d0 FUN_140ab91d0 body=669 status=ok
// SIG undefined FUN_140ab91d0(void)

void FUN_140ab91d0(longlong param_1)

{
  longlong lVar1;
  uint *puVar2;
  bool bVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  lVar1 = param_1 + 0x230;
  if (*(longlong *)(param_1 + 0x240) != 0) {
    uVar4 = FMemory::Realloc(*(longlong *)(param_1 + 0x240),0,0);
    *(undefined8 *)(param_1 + 0x240) = uVar4;
  }
  puVar2 = (uint *)(param_1 + 0x248);
  uVar8 = *puVar2;
  if (uVar8 != 0) {
    TInlineAllocator<4,FDefaultAllocator>::ForElementType<unsigned_int>::ResizeAllocation();
    if (0 < (int)uVar8) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar8;
      do {
        lVar11 = *(longlong *)(param_1 + 0x240);
        if (*(longlong *)(param_1 + 0x240) == 0) {
          lVar11 = lVar1;
        }
        uVar9 = (longlong)(int)*puVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)(lVar11 + uVar9 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    uStack_54 = 1;
    puStack_28 = (uint *)(param_1 + 0x210);
    local_58 = 0;
    iVar7 = *(int *)(param_1 + 0x220);
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar7 != 0) {
      puVar14 = *(uint **)(param_1 + 0x218);
      if (*(uint **)(param_1 + 0x218) == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar8 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar8 == 0) {
        lVar11 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar6 = local_58 + 1;
        bVar3 = (int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar6;
        if (bVar3) goto LAB_140ab931f;
        uVar8 = puVar14[lVar11 + 1];
      }
      uStack_54 = -uVar8 & uVar8;
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
      if (iVar7 < iStack_44) {
LAB_140ab931f:
        iStack_44 = iVar7;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x200);
        if (*(longlong *)(param_1 + 0x200) == 0) {
          lVar11 = param_1;
        }
        puVar15 = (ulonglong *)(lVar11 + (longlong)iStack_1c * 0x40);
        iVar7 = (int)(*puVar15 >> 4);
        uVar12 = 0x9e3779b9U - iVar7 ^ iVar7 << 8;
        uVar10 = -(uVar12 + iVar7) ^ uVar12 >> 0xd;
        uVar8 = (iVar7 - uVar12) - uVar10 ^ uVar10 >> 0xc;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 0x10;
        uVar10 = (uVar10 - uVar12) - uVar8 ^ uVar12 >> 5;
        uVar8 = (uVar8 - uVar12) - uVar10 ^ uVar10 >> 3;
        uVar12 = (uVar12 - uVar8) - uVar10 ^ uVar8 << 10;
        uVar8 = ((uVar10 - uVar12) - uVar8 ^ uVar12 >> 0xf) & *puVar2 - 1;
        *(uint *)((longlong)puVar15 + 0x3c) = uVar8;
        lVar11 = *(longlong *)(param_1 + 0x240);
        if (*(longlong *)(param_1 + 0x240) == 0) {
          lVar11 = lVar1;
        }
        *(undefined4 *)(puVar15 + 7) =
             *(undefined4 *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4);
        lVar11 = *(longlong *)(param_1 + 0x240);
        if (*(longlong *)(param_1 + 0x240) == 0) {
          lVar11 = lVar1;
        }
        *(int *)(lVar11 + ((longlong)(int)*puVar2 - 1U & (longlong)(int)uVar8) * 4) = iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        FUN_1406e9690(&local_30);
      } while (iStack_1c < (int)puStack_28[4]);
    }
  }
  return;
}



// FUNCTION 140ab9470 FUN_140ab9470 body=525 status=ok
// SIG undefined FUN_140ab9470(void)

void FUN_140ab9470(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  uint *puVar12;
  int local_68;
  uint uStack_64;
  int iStack_54;
  int iStack_50;
  int local_40;
  uint uStack_3c;
  uint *puStack_38;
  uint local_30;
  int iStack_2c;
  int iStack_28;
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar6 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar6;
  }
  uVar5 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar5 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation(plVar1,0)
    ;
    if (0 < (int)uVar5) {
      uVar10 = 0;
      uVar11 = (ulonglong)uVar5;
      do {
        uVar9 = (longlong)(int)*plVar2 - 1U & uVar10;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        uVar10 = uVar10 + 1;
        *(undefined4 *)((longlong)plVar7 + uVar9 * 4) = 0xffffffff;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    iVar3 = (int)param_1[5];
    puStack_38 = (uint *)(param_1 + 2);
    uStack_64 = 1;
    local_68 = 0;
    iStack_54 = 0;
    iStack_50 = 0;
    if (iVar3 != 0) {
      puVar12 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar12 = puStack_38;
      }
      uVar5 = *puVar12;
      iStack_50 = 0;
      local_68 = 0;
      while (uVar5 == 0) {
        lVar6 = (longlong)local_68;
        iStack_50 = iStack_50 + 0x20;
        iVar8 = local_68 + 1;
        bVar4 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
        local_68 = iVar8;
        if (bVar4) goto LAB_140ab959f;
        uVar5 = puVar12[lVar6 + 1];
      }
      uStack_64 = -uVar5 & uVar5;
      iVar8 = 0x1f;
      if (uStack_64 != 0) {
        for (; uStack_64 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_64 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      iStack_54 = (iStack_50 - iVar8) + 0x1f;
      if (iVar3 < iStack_54) {
LAB_140ab959f:
        iStack_54 = iVar3;
      }
    }
    local_40 = local_68;
    uStack_3c = uStack_64;
    local_30 = 0xffffffff;
    iStack_2c = iStack_54;
    iStack_28 = iStack_50;
    if (iStack_54 < iVar3) {
      do {
        iVar3 = iStack_2c;
        lVar6 = (longlong)iStack_2c * 0x1c + *param_1;
        uVar5 = FUN_140aae940(lVar6);
        uVar5 = uVar5 & (int)*plVar2 - 1U;
        *(uint *)(lVar6 + 0x18) = uVar5;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar6 + 0x14) =
             *(undefined4 *)
              ((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar5) * 4) =
             iVar3;
        local_30 = local_30 & ~uStack_3c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_40);
      } while (iStack_2c < (int)puStack_38[6]);
    }
  }
  return;
}



// FUNCTION 140ab9680 FUN_140ab9680 body=640 status=ok
// SIG undefined FUN_140ab9680(void)

void FUN_140ab9680(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  uint *puVar14;
  ulonglong *puVar15;
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
  
  plVar1 = param_1 + 7;
  if (param_1[8] != 0) {
    lVar4 = FMemory::Realloc(param_1[8],0,0);
    param_1[8] = lVar4;
  }
  uVar9 = *(uint *)(param_1 + 9);
  plVar2 = param_1 + 9;
  if (uVar9 != 0) {
    TInlineAllocator<1,FDefaultAllocator>::ForElementType<FSetElementId>::ResizeAllocation();
    if (0 < (int)uVar9) {
      uVar5 = 0;
      uVar13 = (ulonglong)uVar9;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        uVar10 = (longlong)(int)*plVar2 - 1U & uVar5;
        uVar5 = uVar5 + 1;
        *(undefined4 *)((longlong)plVar6 + uVar10 * 4) = 0xffffffff;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
    }
    iVar8 = (int)param_1[5];
    puStack_28 = (uint *)(param_1 + 2);
    uStack_54 = 1;
    local_58 = 0;
    iStack_44 = 0;
    iStack_40 = 0;
    if (iVar8 != 0) {
      puVar14 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar14 = puStack_28;
      }
      uVar9 = *puVar14;
      iStack_40 = 0;
      local_58 = 0;
      while (uVar9 == 0) {
        lVar4 = (longlong)local_58;
        iStack_40 = iStack_40 + 0x20;
        iVar7 = local_58 + 1;
        bVar3 = (int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar7;
        if (bVar3) goto LAB_140ab97bf;
        uVar9 = puVar14[lVar4 + 1];
      }
      uStack_54 = -uVar9 & uVar9;
      iVar7 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar7 == 0; iVar7 = iVar7 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar7 = 0x20;
      }
      else {
        iVar7 = 0x1f - iVar7;
      }
      iStack_44 = (iStack_40 - iVar7) + 0x1f;
      if (iVar8 < iStack_44) {
LAB_140ab97bf:
        iStack_44 = iVar8;
      }
    }
    local_30 = local_58;
    uStack_2c = uStack_54;
    local_20 = 0xffffffff;
    iStack_1c = iStack_44;
    iStack_18 = iStack_40;
    if (iStack_44 < iVar8) {
      do {
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x98 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x94) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 0x12) =
             *(undefined4 *)
              ((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)(int)*plVar2 - 1U & (longlong)(int)uVar9) * 4) =
             iStack_1c;
        local_20 = local_20 & ~uStack_2c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_30);
      } while (iStack_1c < (int)puStack_28[6]);
    }
  }
  return;
}



// FUNCTION 140ab9900 FUN_140ab9900 body=431 status=ok
// SIG undefined FUN_140ab9900(void)

undefined8 FUN_140ab9900(longlong *param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  longlong *plVar10;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar8 = (int)(param_2 >> 4);
  uVar7 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
  uVar6 = (longlong)(int)param_1[9] - 1;
  uVar5 = -(uVar7 + iVar8) ^ uVar7 >> 0xd;
  uVar9 = (iVar8 - uVar7) - uVar5 ^ uVar5 >> 0xc;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 0x10;
  uVar5 = (uVar5 - uVar7) - uVar9 ^ uVar7 >> 5;
  uVar9 = (uVar9 - uVar7) - uVar5 ^ uVar5 >> 3;
  uVar7 = (uVar7 - uVar9) - uVar5 ^ uVar9 << 10;
  plVar10 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar10 = param_1 + 7;
  }
  iVar8 = *(int *)((longlong)plVar10 +
                  (((longlong)(int)((uVar5 - uVar7) - uVar9) ^ (ulonglong)(uVar7 >> 0xf)) & uVar6) *
                  4);
  if (iVar8 != -1) {
    lVar2 = *param_1;
    do {
      lVar3 = (longlong)iVar8 * 0x68;
      if (*(ulonglong *)(lVar3 + lVar2) == param_2) {
        lVar3 = (longlong)iVar8 * 0x68;
        uVar6 = (longlong)*(int *)(lVar3 + 100 + lVar2) & uVar6;
        piVar4 = (int *)((longlong)plVar10 + uVar6 * 4);
        iVar1 = *(int *)((longlong)plVar10 + uVar6 * 4);
        goto joined_r0x000140ab9a13;
      }
      iVar8 = *(int *)(lVar3 + 0x60 + lVar2);
    } while (iVar8 != -1);
  }
  return 0;
joined_r0x000140ab9a13:
  if (iVar1 == -1) {
LAB_140ab9a40:
    lVar3 = *param_1 + lVar3;
    *(undefined4 *)(lVar3 + 0x50) = 0;
    if (*(longlong *)(lVar3 + 0x48) != 0) {
      FMemory::Free();
    }
    FUN_140aa83f0(lVar3 + 8,0);
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FMemory::Free();
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<FString,TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar8,1);
    return 1;
  }
  if (iVar1 == iVar8) {
    *piVar4 = *(int *)(lVar3 + lVar2 + 0x60);
    goto LAB_140ab9a40;
  }
  piVar4 = (int *)((longlong)iVar1 * 0x68 + 0x60 + lVar2);
  iVar1 = *piVar4;
  goto joined_r0x000140ab9a13;
}



// FUNCTION 140ab9ab0 Remove body=353 status=ok
// SIG undefined Remove(void)

undefined8
TSet<TTuple<UObjectBase_const_*,FLightComponentLegacyMapBuildData>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLightComponentLegacyMapBuildData,0>,FDefaultSetAllocator>
::Remove(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar10 = (int)(param_2 >> 4);
  uVar7 = (longlong)(int)param_1[9] - 1;
  uVar8 = 0x9e3779b9U - iVar10 ^ iVar10 << 8;
  uVar5 = -(uVar8 + iVar10) ^ uVar8 >> 0xd;
  uVar11 = (iVar10 - uVar8) - uVar5 ^ uVar5 >> 0xc;
  uVar8 = (uVar8 - uVar11) - uVar5 ^ uVar11 << 0x10;
  uVar5 = (uVar5 - uVar8) - uVar11 ^ uVar8 >> 5;
  uVar11 = (uVar11 - uVar8) - uVar5 ^ uVar5 >> 3;
  uVar8 = (uVar8 - uVar11) - uVar5 ^ uVar11 << 10;
  plVar6 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar6 = param_1 + 7;
  }
  iVar10 = *(int *)((longlong)plVar6 +
                   (((longlong)(int)((uVar5 - uVar8) - uVar11) ^ (ulonglong)(uVar8 >> 0xf)) & uVar7)
                   * 4);
  if (iVar10 != -1) {
    lVar4 = *param_1;
    do {
      lVar9 = (longlong)iVar10;
      if (*(ulonglong *)(lVar4 + lVar9 * 0x28) == param_2) {
        uVar7 = (longlong)*(int *)(lVar4 + 0x24 + lVar9 * 0x28) & uVar7;
        puVar2 = (undefined4 *)((longlong)plVar6 + uVar7 * 4);
        iVar3 = *(int *)((longlong)plVar6 + uVar7 * 4);
        goto joined_r0x000140ab9bc2;
      }
      iVar10 = *(int *)(lVar4 + 0x20 + lVar9 * 0x28);
    } while (iVar10 != -1);
  }
  return 0;
joined_r0x000140ab9bc2:
  if (iVar3 == -1) {
LAB_140ab9be8:
    TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar10,1);
    return 1;
  }
  if (iVar3 == iVar10) {
    *puVar2 = *(undefined4 *)(lVar4 + lVar9 * 0x28 + 0x20);
    goto LAB_140ab9be8;
  }
  lVar1 = (longlong)iVar3 * 5 + 4;
  iVar3 = *(int *)(lVar4 + lVar1 * 8);
  puVar2 = (undefined4 *)(lVar4 + lVar1 * 8);
  goto joined_r0x000140ab9bc2;
}



// FUNCTION 140ab9c20 FUN_140ab9c20 body=575 status=ok
// SIG undefined FUN_140ab9c20(void)

undefined8 FUN_140ab9c20(longlong *param_1,ulonglong *param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong *plVar4;
  uint uVar5;
  int *piVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong *puVar16;
  
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
    return 0;
  }
  iVar14 = (int)(*param_2 >> 4);
  uVar12 = 0x9e3779b9U - iVar14 ^ iVar14 << 8;
  uVar5 = -(uVar12 + iVar14) ^ uVar12 >> 0xd;
  uVar15 = (iVar14 - uVar12) - uVar5 ^ uVar5 >> 0xc;
  uVar12 = (uVar12 - uVar15) - uVar5 ^ uVar15 << 0x10;
  uVar5 = (uVar5 - uVar12) - uVar15 ^ uVar12 >> 5;
  uVar15 = (uVar15 - uVar12) - uVar5 ^ uVar5 >> 3;
  uVar12 = (uVar12 - uVar15) - uVar5 ^ uVar15 << 10;
  uVar7 = ((longlong)(int)((uVar5 - uVar12) - uVar15) ^ (ulonglong)(uVar12 >> 0xf)) &
          (longlong)((int)param_1[9] + -1);
  plVar4 = (longlong *)param_1[8];
  if ((longlong *)param_1[8] == (longlong *)0x0) {
    plVar4 = param_1 + 7;
  }
  puVar16 = (ulonglong *)((longlong)plVar4 + uVar7 * 4);
  iVar14 = *(int *)((longlong)plVar4 + uVar7 * 4);
  if (iVar14 == -1) {
    return 0;
  }
  do {
    puVar10 = (ulonglong *)((longlong)iVar14 * 0x98 + *param_1);
    if (*puVar10 != 0) {
      uVar2 = FUN_142e49950();
      uVar7 = *puVar10;
      for (uVar8 = uVar7; uVar8 != 0; uVar8 = *(ulonglong *)(uVar8 + 0x30)) {
        if (uVar8 == uVar2) goto LAB_140ab9d35;
      }
    }
    uVar7 = 0;
LAB_140ab9d35:
    if (*param_2 != 0) {
      uVar3 = FUN_142e49950();
      uVar8 = *param_2;
      for (uVar2 = uVar8; uVar2 != 0; uVar2 = *(ulonglong *)(uVar2 + 0x30)) {
        if (uVar2 == uVar3) goto LAB_140ab9d60;
      }
    }
    uVar8 = 0;
LAB_140ab9d60:
    if (uVar7 == uVar8) {
      iVar14 = (int)*puVar16;
      if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_140ab9dff;
      lVar11 = *param_1;
      lVar13 = (longlong)iVar14 * 0x98;
      lVar9 = (longlong)(int)(*(uint *)(lVar13 + 0x94 + lVar11) & (int)param_1[9] - 1U);
      plVar4 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar4 = param_1 + 7;
      }
      piVar6 = (int *)((longlong)plVar4 + lVar9 * 4);
      iVar1 = *(int *)((longlong)plVar4 + lVar9 * 4);
      break;
    }
    puVar16 = puVar10 + 0x12;
    iVar14 = (int)*puVar16;
    if (iVar14 == -1) {
      return 0;
    }
  } while( true );
joined_r0x000140ab9dd3:
  if (iVar1 == -1) {
LAB_140ab9dff:
    lVar11 = (longlong)iVar14 * 0x98 + *param_1;
    *(undefined4 *)(lVar11 + 0x50) = 0;
    if (*(longlong *)(lVar11 + 0x48) != 0) {
      FMemory::Free();
    }
    TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSetElement<TTuple<unsigned_int,UAudioComponent::FSoundWavePlaybackTimeData>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
              (lVar11 + 8);
    TSparseArray<TSetElement<TTuple<FRHIVertexDeclaration_*,TArray<FVertexElement,TFixedAllocator<16>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
    ::RemoveAtUninitialized(param_1,iVar14,1);
    return 1;
  }
  if (iVar1 == iVar14) {
    *piVar6 = *(int *)(lVar13 + 0x90 + lVar11);
    goto LAB_140ab9dff;
  }
  piVar6 = (int *)((longlong)iVar1 * 0x98 + 0x90 + lVar11);
  iVar1 = *piVar6;
  goto joined_r0x000140ab9dd3;
}



// FUNCTION 140ab9e60 FUN_140ab9e60 body=229 status=ok
// SIG undefined FUN_140ab9e60(void)

void FUN_140ab9e60(longlong *param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  
  if (param_3 != 0) {
    plVar2 = (longlong *)(*param_1 + 0x38 + (longlong)param_2 * 0x60);
    iVar3 = param_3;
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_140591060(plVar2 + -3);
      plVar2 = plVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    iVar3 = (int)param_1[1];
    iVar1 = (iVar3 - param_2) - param_3;
    if (iVar1 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(*param_1 + (longlong)param_2 * 0x60),
                 (void *)((longlong)(param_2 + param_3) * 0x60 + *param_1),(longlong)iVar1 * 0x60);
      iVar3 = (int)param_1[1];
    }
    *(int *)(param_1 + 1) = iVar3 - param_3;
    if (param_4 != '\0') {
      TArray<FInspectStat,FDefaultAllocator>::ResizeShrink(param_1);
    }
  }
  return;
}



// FUNCTION 140ab9f50 RemoveAtUninitialized body=181 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FRHIVertexDeclaration_*,TArray<FVertexElement,TFixedAllocator<16>_>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x98;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x98 + *param_1) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x98;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140aba010 RemoveAtUninitialized body=176 status=ok
// SIG undefined RemoveAtUninitialized(void)

void TSparseArray<TSetElement<TTuple<FUniqueNetIdNull,TSharedRef<FUserOnlineAccountNull,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
     ::RemoveAtUninitialized(longlong *param_1,int param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  
  uVar10 = (ulonglong)param_2;
  if (param_3 != 0) {
    bVar3 = (byte)param_2 & 0x1f;
    uVar11 = 1 << bVar3 | 1U >> 0x20 - bVar3;
    lVar8 = uVar10 * 0x48;
    do {
      iVar9 = (int)uVar10;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x48) = iVar9;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar2 + lVar8) = 0xffffffff;
      if (*(int *)((longlong)param_1 + 0x34) < 1) {
        uVar4 = 0xffffffff;
      }
      else {
        uVar4 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar2 + 4 + lVar8) = uVar4;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar7 = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      iVar5 = iVar9;
      if (iVar9 < 0) {
        iVar5 = iVar9 + 0x1f;
      }
      uVar10 = (ulonglong)(iVar9 + 1);
      lVar8 = lVar8 + 0x48;
      puVar1 = (uint *)((longlong)plVar7 + (longlong)(iVar5 >> 5) * 4);
      uVar6 = ~uVar11;
      uVar11 = uVar11 << 1 | (uint)((int)uVar11 < 0);
      *puVar1 = *puVar1 & uVar6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140aba0c0 FUN_140aba0c0 body=327 status=ok
// SIG undefined FUN_140aba0c0(void)

void FUN_140aba0c0(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar7;
  uint uVar8;
  bool bVar9;
  int local_res10 [2];
  longlong *plVar6;
  
  if (param_2 != 0) {
    TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
    ::FindId((longlong *)(param_1 + 0x2a08),local_res10,param_2);
    plVar6 = (longlong *)0x0;
    plVar3 = plVar6;
    if (local_res10[0] != -1) {
      plVar3 = (longlong *)((longlong)local_res10[0] * 0x30 + *(longlong *)(param_1 + 0x2a08));
    }
    plVar7 = plVar3 + 1;
    if (plVar3 == (longlong *)0x0) {
      plVar7 = plVar6;
    }
    if (plVar7 != (longlong *)0x0) {
      FWeakObjectPtr::operator=(local_res10,param_3);
      iVar1 = (int)plVar7[1];
      if (iVar1 != 0) {
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(*plVar7,local_res10);
        bVar9 = cVar2 == '\0';
        plVar3 = plVar6;
        do {
          uVar4 = (uint)plVar6;
          uVar5 = uVar4;
          do {
            uVar5 = uVar5 + 1;
            plVar6 = (longlong *)(ulonglong)uVar5;
            if (iVar1 <= (int)uVar5) break;
            cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>
                              (*plVar7 + (longlong)(int)uVar5 * 8,local_res10);
          } while (bVar9 == (cVar2 == '\0'));
          if (bVar9 != false) {
            uVar8 = (uint)plVar3;
            if (uVar8 != uVar4) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(*plVar7 + (longlong)(int)uVar8 * 8),
                         (void *)(*plVar7 + (longlong)(int)uVar4 * 8),
                         (longlong)(int)(uVar5 - uVar4) << 3);
            }
            plVar3 = (longlong *)(ulonglong)(uVar8 + (uVar5 - uVar4));
          }
          bVar9 = (bool)(bVar9 ^ 1);
        } while ((int)uVar5 < iVar1);
        *(int *)(plVar7 + 1) = (int)plVar3;
      }
    }
  }
  return;
}



// FUNCTION 140aba210 FUN_140aba210 body=142 status=ok
// SIG undefined FUN_140aba210(void)

void FUN_140aba210(longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0xf8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 7);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0xf8,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 140aba2a0 ResizeGrow body=240 status=ok
// SIG undefined ResizeGrow(void)

void TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
               (void *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x18);
  if (uVar1 < 3) {
    uVar2 = 2;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x1c) != 0) || (4 < uVar1)) {
      lVar6 = (longlong)(int)uVar1 + 0x10 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3);
    }
    uVar3 = FMemory::QuantizeSize(lVar6 * 8,0);
    uVar2 = (uint)(uVar3 >> 3);
    if ((int)uVar2 < (int)uVar1) {
      uVar2 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x1c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x10);
  if (uVar2 < 3) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x10);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x10) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x10) = uVar5;
  return;
}



// FUNCTION 140aba390 FUN_140aba390 body=284 status=ok
// SIG undefined FUN_140aba390(void)

void FUN_140aba390(void *param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x708);
  if (uVar1 < 0x21) {
    uVar6 = 0x20;
  }
  else {
    lVar7 = 4;
    if ((*(int *)((longlong)param_1 + 0x70c) != 0) || (4 < uVar1)) {
      lVar7 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar3 = FMemory::QuantizeSize(lVar7 * 0x38,0);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar3;
    lVar7 = SUB168(ZEXT816(0x2492492492492493) * auVar2,8);
    uVar6 = (uint)((uVar3 - lVar7 >> 1) + lVar7 >> 5);
    if ((int)uVar6 < (int)uVar1) {
      uVar6 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x70c) = uVar6;
  pvVar4 = *(void **)((longlong)param_1 + 0x700);
  if (uVar6 < 0x21) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)param_2 * 0x38);
    pvVar4 = *(void **)((longlong)param_1 + 0x700);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar7 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar6 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar6 * 0x38,0);
        *(void **)((longlong)param_1 + 0x700) = pvVar4;
      }
      _guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)param_2 * 0x38);
      return;
    }
    lVar7 = (longlong)(int)uVar6 * 0x38;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar7,0);
  *(undefined8 *)((longlong)param_1 + 0x700) = uVar5;
  return;
}



// FUNCTION 140aba4b0 ResizeGrow body=151 status=ok
// SIG undefined ResizeGrow(void)

void TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<184,8>_>,FDefaultAllocator>::ResizeGrow
               (longlong *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar3 = 4;
  if ((*(int *)((longlong)param_1 + 0xc) != 0) || (4 < uVar1)) {
    lVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
  }
  uVar4 = FMemory::QuantizeSize(lVar3 * 0xb8,0);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar4;
  lVar3 = SUB168(ZEXT816(0x642c8590b21642c9) * auVar2,8);
  iVar5 = (int)((uVar4 - lVar3 >> 1) + lVar3 >> 7);
  if (iVar5 < (int)uVar1) {
    iVar5 = 0x7fffffff;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar5;
  if ((*param_1 != 0) || (iVar5 != 0)) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar5 * 0xb8,0);
    *param_1 = lVar3;
  }
  return;
}



// FUNCTION 140aba550 FUN_140aba550 body=291 status=ok
// SIG undefined FUN_140aba550(void)

void FUN_140aba550(void *param_1,int param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)((longlong)param_1 + 0x508);
  if (uVar1 < 0x21) {
    uVar5 = 0x20;
  }
  else {
    lVar6 = 4;
    if ((*(int *)((longlong)param_1 + 0x50c) != 0) || (4 < uVar1)) {
      lVar6 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10 + (longlong)(int)uVar1;
    }
    uVar2 = FMemory::QuantizeSize(lVar6 * 0x28,0);
    uVar5 = (uint)(uVar2 / 0x28);
    if ((int)uVar5 < (int)uVar1) {
      uVar5 = 0x7fffffff;
    }
  }
  *(uint *)((longlong)param_1 + 0x50c) = uVar5;
  pvVar3 = *(void **)((longlong)param_1 + 0x500);
  if (uVar5 < 0x21) {
    if (pvVar3 == (void *)0x0) {
      return;
    }
    _guard_xfg_dispatch_icall_nop(param_1,pvVar3,(longlong)param_2 * 0x28);
    pvVar3 = *(void **)((longlong)param_1 + 0x500);
    if (pvVar3 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar3 == (void *)0x0) {
      pvVar3 = (void *)0x0;
      if (uVar5 != 0) {
        pvVar3 = (void *)FMemory::Realloc(0,(longlong)(int)uVar5 * 0x28,0);
        *(void **)((longlong)param_1 + 0x500) = pvVar3;
      }
      _guard_xfg_dispatch_icall_nop(pvVar3,param_1,(longlong)param_2 * 0x28);
      return;
    }
    lVar6 = (longlong)(int)uVar5 * 0x28;
  }
  uVar4 = FMemory::Realloc(pvVar3,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x500) = uVar4;
  return;
}



// FUNCTION 140aba680 ResizeTo body=224 status=ok
// SIG undefined ResizeTo(void)

void TArray<TRefCountPtr<IPooledRenderTarget>,TInlineAllocator<4,TSizedDefaultAllocator<32>_>_>::
     ResizeTo(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar2 = 0;
  if (param_2 != 0) {
    if (param_2 < 5) {
      uVar2 = 4;
    }
    else {
      uVar3 = FMemory::QuantizeSize((longlong)(int)param_2 << 3,0);
      uVar2 = (uint)(uVar3 >> 3);
      if ((int)uVar2 < (int)param_2) {
        uVar2 = 0x7fffffff;
      }
    }
  }
  if (uVar2 == *(uint *)((longlong)param_1 + 0x2c)) {
    return;
  }
  iVar1 = *(int *)((longlong)param_1 + 0x28);
  *(uint *)((longlong)param_1 + 0x2c) = uVar2;
  pvVar4 = *(void **)((longlong)param_1 + 0x20);
  if (uVar2 < 5) {
    if (pvVar4 == (void *)0x0) {
      return;
    }
    ::_guard_xfg_dispatch_icall_nop(param_1,pvVar4,(longlong)iVar1 << 3);
    pvVar4 = *(void **)((longlong)param_1 + 0x20);
    if (pvVar4 == (void *)0x0) {
      return;
    }
    lVar6 = 0;
  }
  else {
    if (pvVar4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
      if (uVar2 != 0) {
        pvVar4 = (void *)FMemory::Realloc(0,(longlong)(int)uVar2 << 3,0);
        *(void **)((longlong)param_1 + 0x20) = pvVar4;
      }
      ::_guard_xfg_dispatch_icall_nop(pvVar4,param_1,(longlong)iVar1 << 3);
      return;
    }
    lVar6 = (longlong)(int)uVar2 << 3;
  }
  uVar5 = FMemory::Realloc(pvVar4,lVar6,0);
  *(undefined8 *)((longlong)param_1 + 0x20) = uVar5;
  return;
}



// FUNCTION 140aba760 ResizeTo body=118 status=ok
// SIG undefined ResizeTo(void)

void TArray<FTTLRaderInfo,FDefaultAllocator>::ResizeTo(longlong *param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0xb0,0);
    iVar3 = (int)(uVar1 / 0xb0);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if (iVar3 != *(int *)((longlong)param_1 + 0xc)) {
    *(int *)((longlong)param_1 + 0xc) = iVar3;
    if ((*param_1 != 0) || (iVar3 != 0)) {
      lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0xb0,0);
      *param_1 = lVar2;
    }
  }
  return;
}



// FUNCTION 140aba7e0 FUN_140aba7e0 body=1002 status=ok
// SIG undefined FUN_140aba7e0(void)

void FUN_140aba7e0(longlong param_1)

{
  longlong *plVar1;
  void *_Src;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 *puVar12;
  void *pvVar13;
  undefined8 *puVar14;
  undefined4 local_res10;
  undefined4 local_res14;
  undefined8 local_res18;
  undefined8 local_res20;
  void *local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_114;
  longlong local_108;
  longlong local_100 [2];
  longlong local_f0;
  longlong local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  int local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  void *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  longlong local_88 [2];
  longlong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [24];
  
  plVar1 = (longlong *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x140) = 0;
  if (*(int *)(param_1 + 0x144) != *(int *)(param_1 + 0x130)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1);
  }
  FWeakObjectPtr::operator=(&local_res10,param_1);
  puVar12 = *(undefined8 **)(param_1 + 0x128);
  puVar14 = puVar12 + (longlong)*(int *)(param_1 + 0x130) * 2;
  do {
    if (puVar12 == puVar14) {
      return;
    }
    cVar4 = FUN_1416fcfe0(puVar12,0);
    if (cVar4 != '\0') {
      iVar11 = *(int *)(puVar12 + 1);
      _Src = (void *)*puVar12;
      local_128 = (void *)0x0;
      pvVar13 = (void *)0x0;
      uVar5 = 0;
      if (iVar11 != 0) {
        local_120._0_4_ = iVar11;
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_128,iVar11,0);
        pvVar13 = local_128;
        _guard_xfg_dispatch_icall_nop(local_128,_Src,(longlong)iVar11 * 2);
        iVar11 = (int)local_120;
        uVar5 = local_120._4_4_;
      }
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_128 = (void *)0x0;
      local_120 = 0;
      local_a8 = pvVar13;
      local_a0 = iVar11;
      local_9c = uVar5;
      FUN_1417978e0(&local_f0,&local_a8);
      local_108 = local_f0;
      local_118 = 0xffffffff;
      local_114 = 0;
      FString::FString(local_100,&local_e8);
      if (local_e8 != 0) {
        FMemory::Free();
      }
      lVar6 = FWeakObjectPtr::Get(&local_118);
      if (lVar6 == 0) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        if ((DAT_1464b56f4 != local_114._4_4_) && (local_108 != 0)) {
          lVar6 = FUN_141796df0(&local_108);
          FWeakObjectPtr::operator=(&local_118,lVar6);
          if ((lVar6 != 0) || (DAT_1469e7e10 == '\0')) {
            LOCK();
            if (DAT_1464b56f4 == 0) {
              DAT_1464b56f4 = 0;
            }
            UNLOCK();
            local_114 = CONCAT44(DAT_1464b56f4,(undefined4)local_114);
          }
          lVar6 = FWeakObjectPtr::Get(&local_118);
          if (lVar6 != 0) goto LAB_140aba99c;
          goto LAB_140abaa2d;
        }
LAB_140abaa31:
        local_d8 = local_res10;
        local_d4 = local_res14;
        local_c0 = 0;
        local_d0 = local_118;
        local_cc = (undefined4)local_114;
        local_78 = local_108;
        local_b8 = 0;
        local_b0 = 0;
        local_res18 = 0;
        local_c8 = local_114._4_4_;
        FString::FString(local_70,local_100);
        FSoftObjectPath::operator=(&local_c0,&local_78);
        local_98 = 0;
        local_90 = 0;
        puVar9 = (undefined8 *)operator_new(0x48,&local_98);
        if (puVar9 != (undefined8 *)0x0) {
          local_res20 = 0;
          *puVar9 = &PTR_GetPoolName_14424ccd8;
          *(undefined4 *)(puVar9 + 1) = local_d8;
          *(undefined4 *)((longlong)puVar9 + 0xc) = local_d4;
          puVar9[5] = 0;
          *(undefined4 *)((longlong)puVar9 + 0x34) = 0;
          *(undefined4 *)(puVar9 + 2) = 0xffffffff;
          *(undefined4 *)((longlong)puVar9 + 0x14) = 0;
          puVar9[4] = 0;
          *(undefined4 *)(puVar9 + 6) = 0;
          if (0x7fffffff < *(uint *)((longlong)puVar9 + 0x34)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(puVar9 + 5,0);
          }
          if ((undefined2 *)puVar9[5] != (undefined2 *)0x0) {
            *(undefined2 *)puVar9[5] = 0;
          }
          *(undefined4 *)(puVar9 + 3) = 0;
          *(undefined4 *)(puVar9 + 2) = local_d0;
          *(undefined4 *)((longlong)puVar9 + 0x14) = local_cc;
          *(int *)(puVar9 + 3) = local_c8;
          local_60 = local_c0;
          FString::FString(local_58,&local_b8);
          FSoftObjectPath::operator=(puVar9 + 4,&local_60);
          uVar10 = FDelegateHandle::GenerateNewID();
          puVar9[8] = uVar10;
          *puVar9 = &PTR_GetPoolName_14424cd20;
        }
        FSoftObjectPath::GetLongPackageName(&local_108,local_88);
        FUN_1416fec20(local_88,&local_98,0,0,0xffffffff);
        if (local_88[0] != 0) {
          FMemory::Free();
        }
        if (local_b8 != 0) {
          FMemory::Free();
        }
      }
      else {
LAB_140aba99c:
        lVar7 = FUN_1413f21d0();
        if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar7 + 0x90) * 8) != lVar7 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (!bVar3) {
LAB_140abaa2d:
          goto LAB_140abaa31;
        }
        plVar2 = (longlong *)*plVar1;
        iVar11 = *(int *)(param_1 + 0x140);
        for (plVar8 = plVar2; plVar8 != plVar2 + iVar11; plVar8 = plVar8 + 1) {
          if (*plVar8 == lVar6) {
            if ((int)((longlong)plVar8 - (longlong)plVar2 >> 3) != -1) goto LAB_140abab8d;
            break;
          }
        }
        *(int *)(param_1 + 0x140) = iVar11 + 1;
        if (*(int *)(param_1 + 0x144) < iVar11 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        *(longlong *)(*plVar1 + (longlong)iVar11 * 8) = lVar6;
      }
LAB_140abab8d:
      if (local_100[0] != 0) {
        FMemory::Free();
      }
    }
    puVar12 = puVar12 + 2;
  } while( true );
}



// FUNCTION 140ababd0 FUN_140ababd0 body=211 status=ok
// SIG undefined FUN_140ababd0(void)

void FUN_140ababd0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 local_28 [32];
  
  if (((param_2 != 0) && (*(char *)(param_2 + 0xec0) == '\x03')) &&
     (lVar2 = *(longlong *)(param_2 + 0x10e0), lVar2 != 0)) {
    uVar1 = FUN_1404b03b0();
    uVar1 = FText::FText(local_28,uVar1);
    FUN_140ad1be0(lVar2,6,uVar1,0);
  }
  lVar2 = FUN_140aab960(param_1,param_2);
  if ((lVar2 != 0) && (param_2 != 0)) {
    plVar4 = *(longlong **)(lVar2 + 0x30);
    plVar3 = plVar4 + (longlong)*(int *)(lVar2 + 0x38) * 4;
    if (plVar4 != plVar3) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 4;
        if (plVar4 == plVar3) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        uVar1 = AActor::GetWorldTimerManager(param_1);
        FUN_142880530(uVar1,plVar4 + 2);
        plVar4[2] = 0;
        *(undefined1 *)(plVar4 + 3) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140abacb0 FUN_140abacb0 body=198 status=ok
// SIG undefined FUN_140abacb0(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140abacb0(uint param_1,void *param_2,uint param_3)

{
  ulonglong _Size;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *_Dst;
  ulonglong _Size_00;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar3 = auStack_48;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  if (param_3 != 0) {
    _Size = (ulonglong)param_1 % (ulonglong)param_3;
    _Size_00 = (ulonglong)(param_3 - (int)_Size);
    uVar2 = (ulonglong)(param_3 + 0xf) + 0xf;
    if (uVar2 <= param_3 + 0xf) {
      uVar2 = 0xffffffffffffff0;
    }
    uStack_50 = 0x140abad13;
    lVar1 = -(uVar2 & 0xfffffffffffffff0);
    puVar3 = auStack_48 + lVar1;
    _Dst = auStack_20 + lVar1;
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abad37;
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)(_Size_00 + (longlong)param_2),_Size);
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abad46;
    _guard_xfg_dispatch_icall_nop(_Dst + _Size,param_2,_Size_00);
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abad54;
    _guard_xfg_dispatch_icall_nop(param_2,_Dst,(ulonglong)param_3);
  }
  *(undefined8 *)(puVar3 + -8) = 0x140abad60;
  return;
}



// FUNCTION 140abad80 FUN_140abad80 body=194 status=ok
// SIG undefined FUN_140abad80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140abad80(uint param_1,void *param_2,uint param_3)

{
  ulonglong _Size;
  longlong lVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  undefined1 *_Dst;
  ulonglong _Size_00;
  undefined8 uStack_50;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  undefined1 auStack_20 [8];
  
  puVar3 = auStack_48;
  local_28 = DAT_1468387a8 ^ (ulonglong)&local_28;
  if (param_3 != 0) {
    _Size = (ulonglong)param_1 % (ulonglong)param_3;
    _Size_00 = (ulonglong)(param_3 - (int)_Size);
    uVar2 = (ulonglong)(param_3 + 0xf) + 0xf;
    if (uVar2 <= param_3 + 0xf) {
      uVar2 = 0xffffffffffffff0;
    }
    uStack_50 = 0x140abade3;
    lVar1 = -(uVar2 & 0xfffffffffffffff0);
    puVar3 = auStack_48 + lVar1;
    _Dst = auStack_20 + lVar1;
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abae03;
    _guard_xfg_dispatch_icall_nop(_Dst,(void *)(_Size + (longlong)param_2),_Size_00);
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abae12;
    _guard_xfg_dispatch_icall_nop(_Dst + _Size_00,param_2,_Size);
    *(undefined8 *)(auStack_48 + lVar1 + -8) = 0x140abae20;
    _guard_xfg_dispatch_icall_nop(param_2,_Dst,(ulonglong)param_3);
  }
  *(undefined8 *)(puVar3 + -8) = 0x140abae2c;
  return;
}



// FUNCTION 140abae50 FUN_140abae50 body=247 status=ok
// SIG undefined FUN_140abae50(void)

undefined8 FUN_140abae50(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  uVar6 = 0;
  if ((*(longlong *)(param_1 + 0x10) != 0) && (cVar2 = FUN_143003230(), cVar2 != '\0')) {
    FUN_142fea440(param_1);
    return 1;
  }
  iVar5 = *(int *)(param_1 + 0x58) + -1;
  if (-1 < iVar5) {
    lVar7 = (longlong)iVar5 * 8;
    lVar8 = (longlong)*(int *)(param_1 + 0x58) << 3;
    lVar9 = lVar7;
    do {
      plVar1 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x50));
      if ((plVar1 != (longlong *)0x0) &&
         (cVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2), cVar2 != '\0')) {
        iVar3 = *(int *)(param_1 + 0x58);
        iVar4 = (iVar3 - iVar5) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar9 + *(longlong *)(param_1 + 0x50)),
                     (void *)(lVar8 + *(longlong *)(param_1 + 0x50)),(longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x58);
        }
        *(int *)(param_1 + 0x58) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x50);
        uVar6 = 1;
      }
      lVar8 = lVar8 + -8;
      lVar9 = lVar9 + -8;
      lVar7 = lVar7 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return uVar6;
}



// FUNCTION 140abaf50 FUN_140abaf50 body=426 status=ok
// SIG undefined FUN_140abaf50(void)

char FUN_140abaf50(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 local_88 [16];
  longlong local_78;
  longlong local_68;
  longlong local_58;
  longlong local_48;
  longlong local_38;
  int local_30;
  
  cVar5 = '\0';
  _guard_xfg_dispatch_icall_nop(local_88,0,0x68);
  cVar2 = FUN_143001780(local_88,param_1);
  if (cVar2 != '\0') {
    if ((local_78 == 0) || (cVar2 = FUN_143003230(local_78,param_2), cVar2 == '\0')) {
      iVar4 = local_30 + -1;
      if (-1 < iVar4) {
        lVar7 = (longlong)iVar4 * 8;
        lVar6 = (longlong)local_30 << 3;
        lVar8 = lVar7;
        do {
          plVar1 = *(longlong **)(lVar7 + local_38);
          if ((plVar1 != (longlong *)0x0) &&
             (cVar2 = (**(code **)(*plVar1 + 0x2a8))(plVar1,param_2), cVar2 != '\0')) {
            iVar3 = (local_30 - iVar4) + -1;
            if (iVar3 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)(lVar8 + local_38),(void *)(lVar6 + local_38),(longlong)iVar3 << 3)
              ;
            }
            local_30 = local_30 + -1;
            TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(&local_38);
            cVar5 = '\x01';
          }
          lVar6 = lVar6 + -8;
          lVar8 = lVar8 + -8;
          lVar7 = lVar7 + -8;
          iVar4 = iVar4 + -1;
        } while (-1 < iVar4);
      }
      if (cVar5 == '\0') goto LAB_140abb0a1;
    }
    else {
      FUN_142fea440(local_88);
      cVar5 = '\x01';
    }
    FUN_142ff5940(local_88,param_1,1);
  }
LAB_140abb0a1:
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return cVar5;
}



// FUNCTION 140abb100 FUN_140abb100 body=396 status=ok
// SIG undefined FUN_140abb100(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140abb100(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong *plVar9;
  int iVar10;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar10 = *(int *)(param_1 + 0x30);
  uVar6 = 0;
  uVar8 = uVar6;
  if (0 < iVar10) {
    iVar3 = rand();
    uVar4 = (uint)((float)iVar3 * 3.051851e-05 * (float)iVar10);
    uVar1 = iVar10 - 1U;
    if ((int)uVar4 <= (int)(iVar10 - 1U)) {
      uVar1 = uVar4;
    }
    uVar8 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) goto LAB_140abb17f;
  }
  if ((int)uVar8 < *(int *)(param_1 + 0x30)) {
    uVar6 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x28) + (longlong)(int)uVar8 * 8);
  }
LAB_140abb17f:
  uVar5 = FUN_140aac530(param_1,param_2);
  if (uVar6 == 0) {
    local_34 = 0;
    puVar7 = &local_38;
  }
  else {
    puVar7 = (undefined4 *)FUN_142ff8050(uVar6,&local_38,param_2,uVar5);
  }
  if (*(char *)(puVar7 + 1) != '\0') {
    local_38 = *puVar7;
  }
  if ((uVar6 == 0) || (*(char *)(puVar7 + 1) == '\0')) {
    uVar8 = (ulonglong)puVar7 & 0xffffffffffffff00;
  }
  else {
    local_58 = 0;
    local_60 = 0;
    local_48 = 0;
    local_40 = 0;
    local_68 = param_2;
    cVar2 = FUN_143013ad0(&local_48,uVar6,1,local_38);
    if ((cVar2 == '\0') || (cVar2 = FUN_140ab4860(param_1,&local_48,param_3), cVar2 == '\0')) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
    if ((int)local_40 != 0) {
      plVar9 = (longlong *)(local_48 + 0x38);
      iVar10 = (int)local_40;
      do {
        if (plVar9[2] != 0) {
          FMemory::Free();
        }
        if (*plVar9 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar9 + -3);
        plVar9 = plVar9 + 0xc;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return uVar8;
}



// FUNCTION 140abb290 FUN_140abb290 body=364 status=ok
// SIG undefined FUN_140abb290(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_140abb290(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  int iVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined1 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined4 local_38;
  char local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_88;
  iVar9 = *(int *)(param_1 + 0x20);
  uVar6 = 0;
  uVar7 = uVar6;
  if (0 < iVar9) {
    iVar3 = rand();
    uVar4 = (uint)((float)iVar3 * 3.051851e-05 * (float)iVar9);
    uVar1 = iVar9 - 1U;
    if ((int)uVar4 <= (int)(iVar9 - 1U)) {
      uVar1 = uVar4;
    }
    uVar7 = (ulonglong)uVar1;
    if ((int)uVar1 < 0) goto LAB_140abb30d;
  }
  if ((int)uVar7 < *(int *)(param_1 + 0x20)) {
    uVar6 = FWeakObjectPtr::Get(*(longlong *)(param_1 + 0x18) + (longlong)(int)uVar7 * 8);
  }
LAB_140abb30d:
  uVar5 = FUN_140aac530(param_1,param_2);
  uVar7 = FUN_142ff7db0(&local_38,uVar6,param_2,uVar5);
  if ((uVar6 == 0) || (local_34 == '\0')) {
    uVar7 = uVar7 & 0xffffffffffffff00;
  }
  else {
    local_50 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = 0;
    local_48 = 0;
    local_40 = 0;
    cVar2 = FUN_143013fe0(&local_48,uVar6,local_38,param_2);
    if ((cVar2 == '\0') || (cVar2 = FUN_140ab4860(param_1,&local_48,param_3), cVar2 == '\0')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    if ((int)local_40 != 0) {
      plVar8 = (longlong *)(local_48 + 0x38);
      iVar9 = (int)local_40;
      do {
        if (plVar8[2] != 0) {
          FMemory::Free();
        }
        if (*plVar8 != 0) {
          FMemory::Free();
        }
        TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                  (plVar8 + -3);
        plVar8 = plVar8 + 0xc;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    if (local_48 != 0) {
      FMemory::Free();
    }
  }
  return uVar7;
}



// FUNCTION 140abb400 FUN_140abb400 body=33 status=ok
// SIG undefined FUN_140abb400(void)

void FUN_140abb400(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x30) != '\0')) {
    lVar1 = FUN_140aae0c0();
    *(undefined4 *)(lVar1 + 8) = param_3;
  }
  return;
}



// FUNCTION 140abb430 FUN_140abb430 body=1039 status=ok
// SIG undefined FUN_140abb430(void)

void FUN_140abb430(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  float fVar13;
  int local_68;
  uint uStack_64;
  int iStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  int local_48;
  undefined4 uStack_44;
  longlong *local_40;
  int iStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x184) = *(undefined1 *)(param_2 + 0x30);
    *(undefined1 *)(param_1 + 0x185) = *(undefined1 *)(param_2 + 0x31);
    *(undefined8 *)(param_1 + 0x188) = *(undefined8 *)(param_2 + 0x38);
    plVar8 = (longlong *)(param_1 + 400);
    if (plVar8 != (longlong *)(param_2 + 0x40)) {
      _Src = *(void **)(param_2 + 0x40);
      iVar6 = *(int *)(param_2 + 0x48);
      *(int *)(param_1 + 0x198) = iVar6;
      if ((iVar6 == 0) && (*(int *)(param_1 + 0x19c) == 0)) {
        *(undefined4 *)(param_1 + 0x19c) = 0;
      }
      else {
        FUN_140aba210(plVar8,iVar6);
        _guard_xfg_dispatch_icall_nop((void *)*plVar8,_Src,(longlong)iVar6 * 0xf8);
      }
    }
    *(undefined8 *)(param_1 + 0x1a0) = *(undefined8 *)(param_2 + 0x50);
    *(undefined1 *)(param_1 + 0x1a8) = *(undefined1 *)(param_2 + 0x58);
    *(undefined4 *)(param_1 + 0x1ac) = *(undefined4 *)(param_2 + 0x5c);
    if (*(longlong *)(param_1 + 0x188) != 0) {
      plVar7 = (longlong *)*plVar8;
      iVar6 = *(int *)(param_1 + 0x198);
      lVar12 = (longlong)iVar6 * 0xf8;
      plVar9 = plVar7 + (longlong)iVar6 * 0x1f;
      for (; plVar7 != plVar9; plVar7 = plVar7 + 0x1f) {
        if (*plVar7 == *(longlong *)(param_1 + 0x188)) goto LAB_140abb643;
      }
      *(int *)(param_1 + 0x198) = iVar6 + 1;
      if (*(int *)(param_1 + 0x19c) < iVar6 + 1) {
        TArray<FMaterialShaderMapId,FDefaultAllocator>::ResizeGrow(plVar8);
      }
      lVar3 = *plVar8;
      uVar4 = *(undefined8 *)(param_1 + 0x188);
      pbVar1 = (byte *)(lVar12 + 0x14 + lVar3);
      *pbVar1 = *pbVar1 & 0xf0;
      *(undefined8 *)(lVar12 + lVar3) = uVar4;
      *(undefined4 *)(lVar12 + 8 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0xc + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0x10 + lVar3) = 0xbf800000;
      *(undefined4 *)(lVar12 + 0x18 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x20 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x28 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x30 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x38 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x40 + lVar3) = 0;
      *(undefined4 *)(lVar12 + 0x48 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0x50 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x58 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x60 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x68 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x70 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x78 + lVar3) = 0;
      *(undefined4 *)(lVar12 + 0x80 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0x88 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x90 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0x98 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xa0 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xa8 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xb0 + lVar3) = 0;
      *(undefined4 *)(lVar12 + 0xb8 + lVar3) = 0x3f800000;
      *(undefined4 *)(lVar12 + 0xc0 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 200 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xd0 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xd8 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xe0 + lVar3) = 0;
      *(undefined8 *)(lVar12 + 0xe8 + lVar3) = 0;
      *(undefined4 *)(lVar12 + 0xf0 + lVar3) = 0x3f800000;
    }
LAB_140abb643:
    if (*(char *)(param_1 + 0x182) != '\0') {
      if (*(longlong *)(param_1 + 0x238) != 0) {
        plVar8 = (longlong *)*plVar8;
        plVar9 = plVar8 + (longlong)*(int *)(param_1 + 0x198) * 0x1f;
        for (; plVar8 != plVar9; plVar8 = plVar8 + 0x1f) {
          if (*plVar8 == *(longlong *)(param_1 + 0x238)) goto LAB_140abb6d1;
        }
      }
      lVar12 = *(longlong *)(param_1 + 0x1a0);
      if ((lVar12 != 0) || (lVar12 = *(longlong *)(param_1 + 0x188), lVar12 != 0)) {
        if (*(char *)(param_1 + 0x1a8) == '\0') {
          fVar13 = -1.0;
        }
        else {
          fVar13 = *(float *)(param_1 + 0x1ac);
          if (fVar13 <= 0.0) {
            fVar13 = 0.0;
          }
        }
        FUN_140aa3670(param_1,lVar12,fVar13,0,0,0);
      }
    }
LAB_140abb6d1:
    if ((*(longlong *)(param_1 + 0x220) != 0) && (iVar6 = FUN_142235230(), iVar6 != 3)) {
      FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
      iVar6 = *(int *)(param_1 + 0x360);
      puStack_30 = (uint *)(param_1 + 0x348);
      local_68 = 0;
      uStack_64 = 1;
      local_58._4_4_ = 0;
      uStack_50 = 0;
      if (iVar6 != 0) {
        puVar11 = *(uint **)(param_1 + 0x358);
        if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
          puVar11 = puStack_30;
        }
        uVar2 = *puVar11;
        uStack_50 = 0;
        local_68 = 0;
        while (uVar2 == 0) {
          lVar12 = (longlong)local_68;
          uStack_50 = uStack_50 + 0x20;
          iVar10 = local_68 + 1;
          bVar5 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_68;
          local_68 = iVar10;
          if (bVar5) goto LAB_140abb7ab;
          uVar2 = puVar11[lVar12 + 1];
        }
        uStack_64 = -uVar2 & uVar2;
        iVar10 = 0x1f;
        if (uStack_64 != 0) {
          for (; uStack_64 >> iVar10 == 0; iVar10 = iVar10 + -1) {
          }
        }
        if (uStack_64 == 0) {
          iVar10 = 0x20;
        }
        else {
          iVar10 = 0x1f - iVar10;
        }
        local_58._4_4_ = (uStack_50 - iVar10) + 0x1f;
        if (iVar6 < local_58._4_4_) {
LAB_140abb7ab:
          local_58._4_4_ = iVar6;
        }
      }
      uStack_28 = 0xffffffff;
      iStack_24 = local_58._4_4_;
      iStack_20 = uStack_50;
      uStack_1c = iStack_4c;
      iStack_38 = local_68;
      uStack_34 = uStack_64;
      iStack_60 = local_68;
      uStack_5c = uStack_64;
      local_48 = uStack_50;
      uStack_44 = iStack_4c;
      uStack_50 = 0xffffffff;
      iStack_4c = local_58._4_4_;
      bVar5 = local_58._4_4_ < iVar6;
      local_40 = (longlong *)(param_1 + 0x338);
      local_58 = puStack_30;
      if (bVar5) {
        do {
          FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),
                        *(undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)iStack_4c * 0x18)
                       );
          uStack_50 = uStack_50 & ~uStack_5c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_60);
        } while (iStack_4c < (int)local_58[6]);
      }
    }
  }
  return;
}



// FUNCTION 140abb840 FUN_140abb840 body=425 status=ok
// SIG undefined FUN_140abb840(void)

void FUN_140abb840(longlong param_1,char param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  uint *puVar6;
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
  
  if (((*(char *)(param_1 + 0x184) != param_2) &&
      (*(char *)(param_1 + 0x184) = param_2, *(longlong *)(param_1 + 0x220) != 0)) &&
     (iVar3 = FUN_142235230(), iVar3 != 3)) {
    FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),param_1);
    local_58 = 0;
    uStack_54 = 1;
    iVar3 = *(int *)(param_1 + 0x360);
    puStack_20 = (uint *)(param_1 + 0x348);
    local_48._4_4_ = 0;
    uStack_40 = 0;
    if (iVar3 != 0) {
      puVar6 = *(uint **)(param_1 + 0x358);
      if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
        puVar6 = puStack_20;
      }
      uVar1 = *puVar6;
      uStack_40 = 0;
      local_58 = 0;
      while (uVar1 == 0) {
        lVar5 = (longlong)local_58;
        uStack_40 = uStack_40 + 0x20;
        iVar4 = local_58 + 1;
        bVar2 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_58;
        local_58 = iVar4;
        if (bVar2) goto LAB_140abb94f;
        uVar1 = puVar6[lVar5 + 1];
      }
      uStack_54 = -uVar1 & uVar1;
      iVar4 = 0x1f;
      if (uStack_54 != 0) {
        for (; uStack_54 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_54 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_48._4_4_ = (uStack_40 - iVar4) + 0x1f;
      if (iVar3 < local_48._4_4_) {
LAB_140abb94f:
        local_48._4_4_ = iVar3;
      }
    }
    iStack_28 = local_58;
    uStack_24 = uStack_54;
    uStack_18 = 0xffffffff;
    iStack_14 = local_48._4_4_;
    iStack_10 = uStack_40;
    uStack_c = iStack_3c;
    iStack_50 = local_58;
    uStack_4c = uStack_54;
    local_38 = uStack_40;
    uStack_34 = iStack_3c;
    uStack_40 = 0xffffffff;
    iStack_3c = local_48._4_4_;
    bVar2 = local_48._4_4_ < iVar3;
    local_30 = (longlong *)(param_1 + 0x338);
    local_48 = puStack_20;
    if (bVar2) {
      do {
        FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),
                      *(undefined8 *)(*(longlong *)(param_1 + 0x338) + (longlong)iStack_3c * 0x18));
        uStack_40 = uStack_40 & ~uStack_4c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
      } while (iStack_3c < (int)local_48[6]);
    }
  }
  return;
}



// FUNCTION 140abb9f0 FUN_140abb9f0 body=97 status=ok
// SIG undefined FUN_140abb9f0(void)

void FUN_140abb9f0(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x1a0);
  *(undefined1 *)(param_1 + 0x182) = 1;
  if ((lVar1 != 0) || (lVar1 = *(longlong *)(param_1 + 0x188), lVar1 != 0)) {
    if (*(char *)(param_1 + 0x1a8) == '\0') {
      fVar2 = -1.0;
    }
    else {
      fVar2 = *(float *)(param_1 + 0x1ac);
      if (fVar2 <= 0.0) {
        fVar2 = 0.0;
      }
    }
    FUN_140aa3670(0,lVar1,fVar2,1,0,0);
  }
  return;
}



// FUNCTION 140abba60 FUN_140abba60 body=529 status=ok
// SIG undefined FUN_140abba60(void)

void FUN_140abba60(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  uint *puVar9;
  int local_res8 [2];
  undefined8 local_res10;
  int local_res18 [2];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  undefined8 local_58;
  uint uStack_50;
  int iStack_4c;
  uint local_48;
  undefined4 uStack_44;
  longlong *local_40;
  uint uStack_38;
  uint uStack_34;
  uint *puStack_30;
  undefined4 uStack_28;
  int iStack_24;
  uint uStack_20;
  undefined4 uStack_1c;
  
  *(undefined8 *)(param_1 + 0x228) = param_2;
  if (param_3 <= 0.0) {
    lVar5 = *(longlong *)(param_1 + 0x120);
    if (lVar5 == 0) {
      lVar5 = FUN_1423407b0();
    }
    param_3 = *(float *)(lVar5 + 0x790);
  }
  *(float *)(param_1 + 0x230) = param_3;
  iVar1 = *(int *)(param_1 + 0x2f8);
  puStack_30 = (uint *)(param_1 + 0x2e0);
  plVar8 = (longlong *)0x0;
  local_68 = 0;
  uStack_64 = 1;
  local_58._4_4_ = 0;
  uStack_50 = 0;
  if (iVar1 != 0) {
    puVar9 = *(uint **)(param_1 + 0x2f0);
    if (*(uint **)(param_1 + 0x2f0) == (uint *)0x0) {
      puVar9 = puStack_30;
    }
    uVar2 = *puVar9;
    plVar6 = plVar8;
    plVar7 = plVar8;
    while (uVar2 == 0) {
      iVar4 = (int)plVar6;
      uStack_50 = (int)plVar7 + 0x20;
      plVar7 = (longlong *)(ulonglong)uStack_50;
      local_68 = iVar4 + 1;
      plVar6 = (longlong *)(ulonglong)local_68;
      if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140abbb4f;
      uVar2 = puVar9[(longlong)iVar4 + 1];
    }
    uStack_64 = -uVar2 & uVar2;
    iVar4 = 0x1f;
    if (uStack_64 != 0) {
      for (; uStack_64 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_64 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_58._4_4_ = (uStack_50 - iVar4) + 0x1f;
    if (iVar1 < local_58._4_4_) {
LAB_140abbb4f:
      local_58._4_4_ = iVar1;
    }
  }
  uStack_28 = 0xffffffff;
  iStack_24 = local_58._4_4_;
  uStack_20 = uStack_50;
  uStack_1c = iStack_4c;
  uStack_38 = local_68;
  uStack_34 = uStack_64;
  uStack_60 = local_68;
  uStack_5c = uStack_64;
  local_48 = uStack_50;
  uStack_44 = iStack_4c;
  uStack_50 = 0xffffffff;
  iStack_4c = local_58._4_4_;
  bVar3 = local_58._4_4_ < iVar1;
  local_40 = (longlong *)(param_1 + 0x2d0);
  local_58 = puStack_30;
  if (bVar3) {
    do {
      lVar5 = *(longlong *)(param_1 + 0x220);
      TSet<TTuple<USoundClass_*,FSoundMixClassOverride>,TDefaultMapHashableKeyFuncs<USoundClass_*,FSoundMixClassOverride,0>,FDefaultSetAllocator>
      ::FindId(lVar5 + 0x4c8,local_res18,
               *(undefined8 *)(*(longlong *)(param_1 + 0x2d0) + (longlong)iStack_4c * 0x18));
      plVar6 = plVar8;
      if (local_res18[0] != -1) {
        plVar6 = (longlong *)((longlong)local_res18[0] * 0x68 + *(longlong *)(lVar5 + 0x4c8));
      }
      plVar7 = plVar6 + 1;
      if (plVar6 == (longlong *)0x0) {
        plVar7 = plVar8;
      }
      if (plVar7 != (longlong *)0x0) {
        local_res10 = *(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x38);
        FUN_140aa9f10(plVar7,local_res8,&local_res10);
        plVar6 = plVar8;
        if (local_res8[0] != -1) {
          plVar6 = (longlong *)((longlong)local_res8[0] * 0x98 + *plVar7);
        }
        plVar7 = plVar6 + 1;
        if (plVar6 == (longlong *)0x0) {
          plVar7 = plVar8;
        }
        if (plVar7 != (longlong *)0x0) {
          *(undefined1 *)(plVar7 + 0x10) = 1;
        }
      }
      uStack_50 = uStack_50 & ~uStack_5c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_60);
    } while (iStack_4c < (int)local_58[6]);
  }
  return;
}



// FUNCTION 140abbc80 FUN_140abbc80 body=136 status=ok
// SIG undefined FUN_140abbc80(void)

void FUN_140abbc80(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined1 local_28 [32];
  
  plVar2 = *(longlong **)(param_1 + 0x2b8);
  if (plVar2 != (longlong *)0x0) {
    iVar1 = *(int *)((longlong)plVar2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar6;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1d & 1) == 0) {
      lVar4 = *plVar2;
      uVar5 = FText::FText(local_28,param_2);
      (**(code **)(lVar4 + 0x2d0))(*(undefined8 *)(param_1 + 0x2b8),uVar5);
    }
  }
  return;
}



// FUNCTION 140abbd10 FUN_140abbd10 body=1244 status=ok
// SIG undefined FUN_140abbd10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140abbd10(longlong param_1,longlong param_2,longlong param_3,char param_4)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined4 local_140;
  char local_138;
  char local_137;
  longlong *local_130;
  int local_128;
  int local_120;
  undefined4 local_11c;
  undefined4 local_118;
  longlong *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0 [3];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined1 local_c8 [8];
  undefined8 local_c0;
  code *local_b8;
  longlong local_a8 [4];
  longlong *local_88;
  int local_78;
  ulonglong local_68;
  
  if (param_3 == 0) {
    return;
  }
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  if ((*(longlong *)(param_2 + 0x10) != 0) &&
     (*(char *)(*(longlong *)(param_2 + 0x10) + 0x484) == '\x02')) {
    return;
  }
  if (param_4 == '\0') {
    return;
  }
  plVar9 = (longlong *)0x0;
  local_138 = '\0';
  local_110 = (longlong *)0x0;
  local_120 = 0;
  local_137 = param_4;
  local_f8 = param_2;
  if (((param_4 == '\x02') && (lVar3 = FUN_140aae140(param_2,param_3), lVar3 != 0)) &&
     (*(char *)(lVar3 + 8) != '\0')) {
    local_138 = '\x01';
    plVar4 = (longlong *)FUN_140aae190(param_1,&local_130,param_3);
    if (local_f0 != plVar4) {
      local_110 = (longlong *)*plVar4;
      *plVar4 = 0;
      local_120 = (int)plVar4[1];
      plVar4[1] = 0;
    }
    if (local_130 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  plVar6 = *(longlong **)(param_2 + 0x30);
  plVar4 = (longlong *)(param_2 + 0x30);
  plVar5 = plVar6 + (longlong)*(int *)(param_2 + 0x38) * 4;
  for (; plVar6 != plVar5; plVar6 = plVar6 + 4) {
    if (*plVar6 == param_3) {
      if ((char)plVar6[1] != '\0') goto LAB_140abc12d;
      break;
    }
  }
  plVar5 = (longlong *)FUN_140aab960(param_1,param_3);
  plVar6 = plVar9;
  if (plVar5 != (longlong *)0x0) {
    lVar8 = *plVar5;
    lVar3 = lVar8 + (longlong)(int)plVar5[1] * 0x18;
    for (; plVar6 = plVar9, lVar8 != lVar3; lVar8 = lVar8 + 0x18) {
      plVar6 = *(longlong **)(lVar8 + 8);
      plVar5 = plVar6 + (longlong)*(int *)(lVar8 + 0x10) * 4;
      for (; plVar6 != plVar5; plVar6 = plVar6 + 4) {
        if (*plVar6 == param_3) goto LAB_140abbe8e;
      }
    }
  }
LAB_140abbe8e:
  plVar5 = plVar6 + 3;
  if (plVar6 == (longlong *)0x0) {
    plVar5 = plVar9;
  }
  if (((plVar5 != (longlong *)0x0) && (*plVar5 != 0)) && (*(longlong *)(param_3 + 0x908) != 0)) {
    FUN_142df2ca0();
  }
  iVar2 = *(int *)(param_2 + 0x38);
  *(int *)(param_2 + 0x38) = iVar2 + 1;
  if (*(int *)(param_2 + 0x3c) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeGrow(plVar4,iVar2);
  }
  lVar3 = *plVar4;
  lVar8 = (longlong)iVar2 * 0x20;
  *(undefined8 *)(lVar8 + lVar3) = 0;
  *(undefined1 *)(lVar8 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar8 + 0x10 + lVar3) = 0;
  *(undefined1 *)(lVar8 + 0x18 + lVar3) = 0;
  local_f0[0] = *plVar4;
  *(longlong *)(lVar8 + local_f0[0]) = param_3;
  *(char *)(lVar8 + 8 + local_f0[0]) = param_4;
  local_130 = (longlong *)0x0;
  local_128 = 0;
  FWeakObjectPtr::operator=(&local_100,param_3);
  FWeakObjectPtr::operator=(&local_108,param_1);
  local_11c = local_100;
  local_118 = local_fc;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 == (longlong *)0x0) {
    if (((local_128 != 0) && (local_130 != (longlong *)0x0)) &&
       ((**(code **)(*local_130 + 0x28))(local_130,0), local_130 != (longlong *)0x0)) {
      local_130 = (longlong *)FMemory::Realloc(local_130,0,0);
    }
  }
  else {
    *plVar4 = (longlong)&PTR_GetPoolName_14424cd68;
    *(undefined4 *)(plVar4 + 1) = local_108;
    *(undefined4 *)((longlong)plVar4 + 0xc) = local_104;
    *(undefined4 *)(plVar4 + 2) = local_11c;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_118;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar4[4] = lVar3;
    *plVar4 = (longlong)&PTR_GetPoolName_14424cdb0;
    FUN_140aa7130(plVar4,&local_130);
  }
  if (plVar4 != (longlong *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4,0);
    lVar3 = FMemory::Realloc(plVar4,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x518) + 0xf0);
  uVar7 = AActor::GetWorldTimerManager(param_1);
  local_d8 = 0;
  local_d0 = 0;
  if ((local_128 != 0) && (local_130 != (longlong *)0x0)) {
    (**(code **)(*local_130 + 0x30))(local_130,&local_d8);
  }
  FWeakObjectPtr::operator=(local_c8,0);
  local_140 = 0xbf800000;
  local_c0 = 0;
  local_88 = (longlong *)0x0;
  local_78 = 0;
  local_b8 = AK::MemoryMgr::StartProfileThreadUsage;
  local_148 = 0;
  FUN_142880850(uVar7,local_f0[0] + 0x10 + lVar8,&local_d8,uVar1);
  if (local_78 != 0) {
    plVar4 = local_a8;
    if (local_88 != (longlong *)0x0) {
      plVar4 = local_88;
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4,0);
    }
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free();
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_d8);
  lVar3 = local_f8;
  FUN_141309cc0(param_1,param_3,local_137,*(undefined1 *)(local_f8 + 0x4c));
  FUN_140aa5550(param_1,lVar3);
  if (local_128 != 0) {
    if (local_130 == (longlong *)0x0) goto LAB_140abc12d;
    (**(code **)(*local_130 + 0x28))(local_130,0);
    if (local_130 != (longlong *)0x0) {
      local_130 = (longlong *)FMemory::Realloc(local_130,0,0);
    }
    local_128 = 0;
  }
  if (local_130 != (longlong *)0x0) {
    FMemory::Free(local_130);
  }
LAB_140abc12d:
  plVar4 = local_110;
  if (local_138 != '\0') {
    plVar6 = (longlong *)
             ((ulonglong)((longlong)(local_110 + local_120) + (7 - (longlong)local_110)) >> 3);
    if (local_110 + local_120 < local_110) {
      plVar6 = plVar9;
    }
    plVar5 = local_110;
    if (plVar6 != (longlong *)0x0) {
      do {
        lVar3 = *plVar5;
        if ((((lVar3 != 0) && (lVar3 != param_3)) &&
            (lVar8 = FUN_140aab960(param_1,lVar3), lVar8 != 0)) &&
           ((*(longlong *)(lVar8 + 0x10) == 0 ||
            (*(char *)(*(longlong *)(lVar8 + 0x10) + 0x484) != '\x02')))) {
          FUN_140abbd10(param_1,lVar8,lVar3,2);
        }
        plVar5 = plVar5 + 1;
        plVar9 = (longlong *)((longlong)plVar9 + 1);
      } while (plVar9 != plVar6);
    }
  }
  if (plVar4 != (longlong *)0x0) {
    FMemory::Free(plVar4);
  }
  return;
}



// FUNCTION 140abc1f0 FUN_140abc1f0 body=126 status=ok
// SIG undefined FUN_140abc1f0(void)

void FUN_140abc1f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    param_2 = *(longlong *)(DAT_146b17150 + 0x6c8);
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    lVar1 = FUN_14270d150();
    if (lVar1 != param_2) {
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x7e8))
                (*(longlong **)(param_1 + 0x4b0),0,0x3f800000,1);
      (**(code **)(**(longlong **)(param_1 + 0x4b0) + 0x850))
                (*(longlong **)(param_1 + 0x4b0),param_2);
    }
  }
  return;
}



// FUNCTION 140abc270 FUN_140abc270 body=833 status=ok
// SIG undefined FUN_140abc270(void)

void FUN_140abc270(longlong *param_1,float param_2,float param_3,char param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  float fVar7;
  longlong *local_68;
  float local_60;
  float local_50;
  longlong *local_48;
  float local_40;
  
  cVar4 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar4 == '\0') {
    if (0.0 <= param_2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
    }
    else {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0xa2) = param_2;
    if (0.0 <= param_3) {
      fVar7 = DAT_146295c24;
      if (param_3 <= DAT_146295c24) {
        fVar7 = param_3;
      }
    }
    else {
      fVar7 = 0.0;
    }
    *(float *)((longlong)param_1 + 0x514) = fVar7;
    if (param_1[0x9e] != 0) {
      FUN_140ae8600(param_1[0x9e],param_1,param_1[0x9d]);
    }
    if (((longlong *)param_1[2])[0x1f] == 0) {
      (**(code **)(*(longlong *)param_1[2] + 0x368))();
    }
    local_40 = *(float *)(param_1[0x2d] + 0x20c);
    if (local_40 == 0.0) {
      local_40 = 1.0;
    }
    local_48 = param_1;
    if (param_4 != '\0') {
      if ((*(char *)((longlong)param_1 + 0x55c) == '\0') || (lVar5 = param_1[0x8c], lVar5 == 0)) {
        (**(code **)(*param_1 + 0x6f8))(param_1,0);
      }
      else {
        local_68 = param_1;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(lVar5 + 0x558,&local_68);
        if ((*(int *)(lVar5 + 0x560) != 0) != (*(char *)(lVar5 + 0x477) != '\0')) {
          FUN_14288e3d0(lVar5 + 0x468);
        }
      }
    }
    if (param_1[0xa0] != 0) {
      FUN_1405a9420(param_1[0xa0],SQRT(*(float *)((longlong)param_1 + 0x4c4)) * 63.661976);
      lVar5 = FUN_140a08d00();
      if (lVar5 != 0) {
        FUN_1405aaad0(param_1[0xa0],*(undefined8 *)(lVar5 + 0x2e8),
                      *(undefined4 *)((longlong)param_1 + 0x514),0,4);
        FUN_1405aaad0(param_1[0xa0],*(undefined8 *)(lVar5 + 0x2f0),
                      *(float *)(param_1 + 0xa2) * 100.0,0,4);
      }
    }
    plVar6 = *(longlong **)(param_1[0x2d] + 0x1a0);
    plVar1 = plVar6 + *(int *)(param_1[0x2d] + 0x1a8);
    for (; plVar6 != plVar1; plVar6 = plVar6 + 1) {
      plVar2 = (longlong *)*plVar6;
      if (((plVar2 != (longlong *)param_1[0xc2]) && (plVar2 != (longlong *)0x0)) &&
         (plVar2 != (longlong *)param_1[0x9a])) {
        lVar5 = FUN_142923000();
        if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
            lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          FUN_140aa1450(&local_48,plVar2);
        }
        else {
          lVar5 = FUN_1429f11d0();
          if ((*(int *)(plVar2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
             (*(longlong *)(*(longlong *)(plVar2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
              != lVar5 + 0x88)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) && ((*(byte *)((longlong)plVar2 + 0x24c) & 0x10) != 0)) {
            lVar5 = FUN_14178ca30(plVar2);
            fVar7 = *(float *)((longlong)param_1 + 0x514);
            local_60 = fVar7 * *(float *)(lVar5 + 0x20c);
            local_68 = (longlong *)
                       CONCAT44(*(float *)((longlong)param_1 + 0x51c) * fVar7 *
                                *(float *)(lVar5 + 0x208),
                                *(float *)(param_1 + 0xa3) * fVar7 * *(float *)(lVar5 + 0x204));
            local_50 = local_60;
            (**(code **)(*plVar2 + 0x3f8))(plVar2,&local_68);
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 140abc5c0 FUN_140abc5c0 body=252 status=ok
// SIG undefined FUN_140abc5c0(void)

void FUN_140abc5c0(longlong *param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 0x9f) = param_2;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  cVar1 = (char)param_1[0x9f];
  *(undefined4 *)(param_1 + 0xa1) = *(undefined4 *)(lVar4 + 0x790);
  if (cVar1 == '\0') {
    uVar3 = *(undefined4 *)((longlong)param_1 + 0x564);
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x56c);
    uVar5 = (undefined4)param_1[0xad];
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        *(undefined4 *)((longlong)param_1 + 0x50c) = *(undefined4 *)((longlong)param_1 + 0x57c);
        return;
      }
      if (cVar1 == '\x03') {
        *(undefined4 *)((longlong)param_1 + 0x50c) = 0;
        FUN_140abc270(param_1,(int)param_1[0xb0],*(undefined4 *)((longlong)param_1 + 0x584),1);
        plVar2 = (longlong *)param_1[0x96];
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 0x638))(plVar2,0);
        }
        plVar2 = (longlong *)param_1[0x9a];
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140abc659. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x638))(plVar2,0);
          return;
        }
      }
      return;
    }
    uVar3 = (undefined4)param_1[0xaf];
    uVar6 = *(undefined4 *)((longlong)param_1 + 0x574);
    uVar5 = (undefined4)param_1[0xae];
  }
  *(undefined4 *)((longlong)param_1 + 0x50c) = uVar3;
  FUN_140abc270(param_1,uVar5,uVar6,1);
  return;
}



// FUNCTION 140abc6c0 FUN_140abc6c0 body=81 status=ok
// SIG undefined FUN_140abc6c0(void)

void FUN_140abc6c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140aae6a0();
  if (lVar1 != 0) {
    uVar2 = FWeakObjectPtr::Get(param_2);
    lVar1 = FUN_140aaa210(lVar1,uVar2);
    if (lVar1 != 0) {
      lVar1 = FUN_140aaa190(lVar1,*(undefined4 *)(param_2 + 8));
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0xc) = 1;
      }
    }
  }
  return;
}



// FUNCTION 140abc720 FUN_140abc720 body=1021 status=ok
// SIG undefined FUN_140abc720(void)

bool FUN_140abc720(longlong param_1,char param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float extraout_XMM0_Da;
  float fVar10;
  char local_res8 [8];
  undefined1 local_7c [84];
  
  lVar3 = *(longlong *)(param_1 + 0xa8);
  lVar7 = (longlong)*(int *)(param_1 + 0xb0) * 0x60;
  if (DAT_146b33f38 == (longlong *)0x0) {
    FUN_142d7ebe0();
  }
  lVar2 = (**(code **)(*DAT_146b33f38 + 0x280))();
  if (lVar2 == 0) {
    return false;
  }
  if ((*(char *)(lVar7 + -7 + lVar3) != '\0') ||
     (cVar1 = FBuildPatchAppManifest::NeedsResaving(*(undefined8 *)(lVar7 + -0x58 + lVar3)),
     cVar1 == '\0')) {
    return true;
  }
  if ((*(char *)(param_1 + 0xa6) == '\0') &&
     (cVar1 = FUN_14059ee90(lVar3 + -0x40 + lVar7), cVar1 == '\0')) {
    return (bool)*(undefined1 *)(param_1 + 0x9c);
  }
  if (*(char *)(param_1 + 0xa6) != '\0') {
    lVar6 = *(longlong *)(lVar7 + -0x58 + lVar3);
    lVar4 = *(longlong *)(lVar6 + 0x120);
    if (lVar4 == 0) {
      lVar4 = FUN_1423407b0();
      lVar6 = *(longlong *)(lVar7 + -0x58 + lVar3);
    }
    pfVar5 = (float *)FUN_1405ea480(lVar6,local_7c);
    if (DAT_1468536c6 != '\0') {
      return false;
    }
    if (DAT_1468536c5 == '\0') {
      return false;
    }
    if (DAT_1468536c8 == 0) {
      return false;
    }
    fVar9 = 0.0;
    fVar10 = 0.0;
    fVar8 = 0.0;
    lVar3 = FUN_14059b380(DAT_1468536c8,lVar4,pfVar5,0);
    if (lVar3 != 0) {
      fVar9 = (float)*(undefined8 *)(lVar3 + 0x2e0);
      fVar10 = (float)((ulonglong)*(undefined8 *)(lVar3 + 0x2e0) >> 0x20);
      fVar8 = *(float *)(lVar3 + 0x2e8);
    }
    fVar10 = SQRT((fVar10 - pfVar5[1]) * (fVar10 - pfVar5[1]) +
                  (fVar9 - *pfVar5) * (fVar9 - *pfVar5) + (fVar8 - pfVar5[2]) * (fVar8 - pfVar5[2]))
             * 0.00033333333;
    fVar8 = 0.0;
    if ((0.0 <= fVar10) && (fVar8 = fVar10, 1.0 <= fVar10)) {
      fVar8 = 1.0;
    }
    fVar8 = 1.0 - fVar8;
    FUN_140a37090(fVar8 * fVar8 * fVar8);
    *(undefined1 *)(param_1 + 0xa4) = 1;
    fVar8 = (extraout_XMM0_Da * 0.5 - extraout_XMM0_Da) * fVar8 + extraout_XMM0_Da;
    goto LAB_140abca32;
  }
  lVar6 = lVar7 + lVar3;
  lVar3 = FUN_14059bf10(*(undefined8 *)(lVar7 + -0x40 + lVar3),
                        *(undefined4 *)(lVar7 + -0x30 + lVar3));
  if ((*(uint *)(lVar3 + 0x60) >> 9 & 1) == 0) {
    return true;
  }
  if ((*(uint *)(lVar3 + 0x60) >> 10 & 1) == 0) {
    return false;
  }
  local_res8[0] = '\0';
  FUN_14059b170(lVar6 + -0x40,local_res8);
  fVar8 = (float)FUN_140a37090();
  if ((local_res8[0] == '\0') && (fVar8 == -200.0)) {
    local_res8[0] = '\x01';
  }
  fVar10 = SQRT(*(float *)(*(longlong *)(lVar6 + -0x40) + 300)) * (1.0 / *(float *)(lVar3 + 0x38));
  if (0.0 <= fVar10) {
    if (1.0 <= fVar10) {
      fVar10 = 1.0;
    }
  }
  else {
    fVar10 = 0.0;
  }
  fVar9 = (float)FUN_140a37090(*(undefined4 *)(*(longlong *)(lVar6 + -0x40) + 0x2a4));
  fVar10 = (float)FUN_140aa3620(fVar10);
  fVar9 = fVar9 + fVar10;
  cVar1 = '\x01';
  if (*(char *)(param_1 + 0xa5) == '\0') {
    cVar1 = param_2;
  }
  param_2 = cVar1;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  if (param_2 == '\0') {
LAB_140abc8f1:
    if (local_res8[0] != '\0') {
      fVar8 = fVar9;
    }
  }
  else if (local_res8[0] != '\0') {
    if (*(char *)(*(longlong *)(lVar6 + -0x40) + 0x2a0) != '\0') {
      fVar9 = 0.0;
      *(undefined1 *)(param_1 + 0xa5) = 1;
    }
    goto LAB_140abc8f1;
  }
  if (((param_2 == '\0') && (local_res8[0] == '\0')) && (*(char *)(param_1 + 0xa4) != '\0')) {
    *(float *)(param_1 + 0xa0) = fVar8;
  }
  *(char *)(param_1 + 0xa4) = local_res8[0];
LAB_140abca32:
  if (param_2 != '\0') {
    *(float *)(param_1 + 0xa0) = fVar8;
    return fVar8 < (*(float *)(lVar2 + 0x94) + *(float *)(lVar2 + 0x98)) * 0.5;
  }
  cVar1 = *(char *)(param_1 + 0x9c);
  if (fVar8 < *(float *)(lVar2 + 0x98) || fVar8 == *(float *)(lVar2 + 0x98)) {
    if (fVar8 < *(float *)(lVar2 + 0x94)) {
      if (cVar1 == '\0') {
        fVar10 = *(float *)(param_1 + 0xa0) - fVar8;
        if (*(float *)(lVar2 + 0x9c) <= fVar10 && fVar10 != *(float *)(lVar2 + 0x9c)) {
          cVar1 = '\x01';
        }
      }
      else {
        cVar1 = '\x01';
      }
    }
  }
  else if ((cVar1 != '\0') &&
          (fVar10 = fVar8 - *(float *)(param_1 + 0xa0),
          *(float *)(lVar2 + 0x9c) <= fVar10 && fVar10 != *(float *)(lVar2 + 0x9c))) {
    cVar1 = '\0';
  }
  fVar10 = *(float *)(param_1 + 0xa0);
  if (cVar1 == '\0') {
    if (fVar10 <= fVar8) {
      fVar10 = fVar8;
    }
    *(float *)(param_1 + 0xa0) = fVar10;
    return false;
  }
  if (fVar8 <= fVar10) {
    fVar10 = fVar8;
  }
  *(float *)(param_1 + 0xa0) = fVar10;
  return (bool)cVar1;
}



// FUNCTION 140abcb20 FUN_140abcb20 body=158 status=ok
// SIG undefined FUN_140abcb20(void)

ulonglong FUN_140abcb20(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  ulonglong in_RAX;
  longlong *plVar2;
  
  if ((param_2 != 0) && (*(char *)(param_2 + 0x183) == '\0')) {
    plVar2 = *(longlong **)(param_1 + 0x328);
    in_RAX = (ulonglong)*(int *)(param_1 + 0x330);
    plVar1 = plVar2 + in_RAX;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_2) goto LAB_140abcbae;
    }
    plVar2 = *(longlong **)(param_2 + 0x328);
    in_RAX = (ulonglong)*(int *)(param_2 + 0x330);
    plVar1 = plVar2 + in_RAX;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_1) goto LAB_140abcbae;
    }
    plVar2 = *(longlong **)(param_2 + 0x2a8);
    in_RAX = (ulonglong)*(int *)(param_2 + 0x2b0);
    plVar1 = plVar2 + in_RAX;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 1) {
      if (*plVar2 == param_3) {
        return CONCAT71((int7)(int3)((uint)*(int *)(param_2 + 0x2b0) >> 8),1);
      }
    }
  }
LAB_140abcbae:
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 140abcbc0 FUN_140abcbc0 body=2125 status=ok
// SIG undefined FUN_140abcbc0(void)

void FUN_140abcbc0(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  wchar_t *pwVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  wchar_t *pwVar13;
  wchar_t *pwVar14;
  wchar_t *pwVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  uint *puVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  int local_res8;
  undefined4 uStackX_c;
  longlong local_res10;
  wchar_t *local_res18;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  undefined1 local_88 [16];
  longlong *local_78;
  undefined2 local_70;
  longlong *local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  plVar16 = *(longlong **)(param_1 + 0x118);
  *(undefined1 *)(param_1 + 0x183) = 1;
  uVar11 = UScrollBox::GetPrivateStaticClass();
  lVar12 = (**(code **)(*plVar16 + 0x628))(plVar16,uVar11);
  if (lVar12 != 0) {
    FUN_140483870(lVar12 + 0x1e8,param_1);
  }
  pwVar15 = (wchar_t *)0x0;
  local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98);
  local_40 = (longlong *)CONCAT44(local_40._4_4_,(undefined4)local_40);
  if ((*(longlong *)(param_1 + 0x238) != 0) &&
     (local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98),
     local_40 = (longlong *)CONCAT44(local_40._4_4_,(undefined4)local_40),
     *(longlong *)(param_1 + 0x220) != 0)) {
    local_78 = (longlong *)(param_1 + 0x2d0);
    iVar1 = *(int *)(param_1 + 0x2f8);
    puStack_58 = (uint *)(param_1 + 0x2e0);
    local_a8 = (longlong *)0x100000000;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    if (iVar1 != 0) {
      puVar18 = *(uint **)(param_1 + 0x2f0);
      if (*(uint **)(param_1 + 0x2f0) == (uint *)0x0) {
        puVar18 = puStack_58;
      }
      uVar9 = *puVar18;
      pwVar20 = pwVar15;
      pwVar19 = pwVar15;
      while (uVar9 == 0) {
        iVar10 = (int)pwVar20;
        uStack_90 = (int)pwVar19 + 0x20;
        pwVar19 = (wchar_t *)(ulonglong)uStack_90;
        pwVar20 = (wchar_t *)(ulonglong)(iVar10 + 1U);
        local_a8._4_4_ = (uint)((ulonglong)local_a8 >> 0x20);
        local_a8 = (longlong *)CONCAT44(local_a8._4_4_,iVar10 + 1U);
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_140abccdc;
        uVar9 = puVar18[(longlong)iVar10 + 1];
      }
      uVar9 = -uVar9 & uVar9;
      iVar10 = 0x1f;
      if (uVar9 != 0) {
        for (; uVar9 >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      local_a8 = (longlong *)CONCAT44(uVar9,(uint)local_a8);
      if (uVar9 == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      local_98._4_4_ = (uStack_90 - iVar10) + 0x1f;
      if (iVar1 < local_98._4_4_) {
LAB_140abccdc:
        local_98._4_4_ = iVar1;
      }
    }
    uStack_50 = CONCAT44(local_98._4_4_,0xffffffff);
    auVar4._8_4_ = uStack_90;
    auVar4._0_8_ = uStack_50;
    auVar4._12_4_ = iStack_8c;
    local_40._0_4_ = SUB84(local_78,0);
    local_40._4_4_ = (undefined4)((ulonglong)local_78 >> 0x20);
    uStack_60 = local_a8;
    local_70 = 0;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0 = local_a8;
    uStack_48 = auVar4._8_8_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = uStack_48;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = local_98._4_4_ < *(int *)(param_1 + 0x2f8);
    local_a8 = local_78;
    local_68 = local_78;
    local_98 = puStack_58;
    local_40 = local_78;
    if (bVar3) {
      do {
        if (*(int *)(*local_a8 + 0xc + (longlong)iStack_8c * 0x18) == 0) {
          FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),
                        *(undefined8 *)(*local_a8 + (longlong)iStack_8c * 0x18),param_1,
                        *(undefined8 *)(param_1 + 0x238),0);
        }
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
      } while (iStack_8c < (int)local_98[6]);
      if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
      }
    }
  }
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 0x2d0,0);
  plVar16 = (longlong *)(param_1 + 0x338);
  puStack_58 = (uint *)(param_1 + 0x348);
  iVar1 = *(int *)(param_1 + 0x360);
  local_a8._0_4_ = 0;
  local_a8._4_4_ = 1;
  local_98._4_4_ = 0;
  uStack_90 = 0;
  local_40._0_4_ = SUB84(plVar16,0);
  local_40._4_4_ = (undefined4)((ulonglong)plVar16 >> 0x20);
  local_a8 = plVar16;
  local_78 = plVar16;
  local_68 = plVar16;
  local_98 = puStack_58;
  local_40 = plVar16;
  if (*(longlong *)(param_1 + 0x220) == 0) {
    if (iVar1 != 0) {
      puVar18 = *(uint **)(param_1 + 0x358);
      if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
        puVar18 = puStack_58;
      }
      uVar9 = *puVar18;
      pwVar20 = pwVar15;
      pwVar19 = pwVar15;
      while (uVar9 == 0) {
        iVar10 = (int)pwVar20;
        uStack_90 = (int)pwVar19 + 0x20;
        pwVar19 = (wchar_t *)(ulonglong)uStack_90;
        local_a8._0_4_ = iVar10 + 1;
        pwVar20 = (wchar_t *)(ulonglong)(uint)local_a8;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_140abcfaa;
        uVar9 = puVar18[(longlong)iVar10 + 1];
      }
      local_a8._4_4_ = -uVar9 & uVar9;
      iVar10 = 0x1f;
      if (local_a8._4_4_ != 0) {
        for (; local_a8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (local_a8._4_4_ == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      local_98._4_4_ = (uStack_90 - iVar10) + 0x1f;
      if (iVar1 < local_98._4_4_) {
LAB_140abcfaa:
        local_98._4_4_ = iVar1;
      }
    }
    uStack_50 = CONCAT44(local_98._4_4_,0xffffffff);
    auVar6._8_4_ = uStack_90;
    auVar6._0_8_ = uStack_50;
    auVar6._12_4_ = iStack_8c;
    uStack_48 = auVar6._8_8_;
    uStack_60._0_4_ = (uint)local_a8;
    uStack_60._4_4_ = local_a8._4_4_;
    local_70 = 0;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0._0_4_ = (uint)local_a8;
    uStack_a0._4_4_ = local_a8._4_4_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = uStack_48;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = *(int *)(param_1 + 0x360) <= local_98._4_4_;
    if (bVar3) goto LAB_140abd06a;
    do {
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(*(longlong *)(*local_a8 + (longlong)iStack_8c * 0x18) + 0x338,param_1);
      uStack_90 = uStack_90 & ~uStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
  }
  else {
    if (iVar1 != 0) {
      puVar18 = *(uint **)(param_1 + 0x358);
      if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
        puVar18 = puStack_58;
      }
      uVar9 = *puVar18;
      pwVar20 = pwVar15;
      pwVar19 = pwVar15;
      while (uVar9 == 0) {
        iVar10 = (int)pwVar20;
        uStack_90 = (int)pwVar19 + 0x20;
        pwVar19 = (wchar_t *)(ulonglong)uStack_90;
        local_a8._0_4_ = iVar10 + 1;
        pwVar20 = (wchar_t *)(ulonglong)(uint)local_a8;
        if ((int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar10) goto LAB_140abce6a;
        uVar9 = puVar18[(longlong)iVar10 + 1];
      }
      local_a8._4_4_ = -uVar9 & uVar9;
      iVar10 = 0x1f;
      if (local_a8._4_4_ != 0) {
        for (; local_a8._4_4_ >> iVar10 == 0; iVar10 = iVar10 + -1) {
        }
      }
      if (local_a8._4_4_ == 0) {
        iVar10 = 0x20;
      }
      else {
        iVar10 = 0x1f - iVar10;
      }
      local_98._4_4_ = (uStack_90 - iVar10) + 0x1f;
      if (iVar1 < local_98._4_4_) {
LAB_140abce6a:
        local_98._4_4_ = iVar1;
      }
    }
    uStack_50 = CONCAT44(local_98._4_4_,0xffffffff);
    auVar5._8_4_ = uStack_90;
    auVar5._0_8_ = uStack_50;
    auVar5._12_4_ = iStack_8c;
    uStack_48 = auVar5._8_8_;
    uStack_60._0_4_ = (uint)local_a8;
    uStack_60._4_4_ = local_a8._4_4_;
    local_70 = 0;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    uStack_a0._0_4_ = (uint)local_a8;
    uStack_a0._4_4_ = local_a8._4_4_;
    local_88._8_4_ = (undefined4)local_40;
    local_88._0_8_ = uStack_48;
    local_88._12_4_ = local_40._4_4_;
    bVar3 = *(int *)(param_1 + 0x360) <= local_98._4_4_;
    if (bVar3) goto LAB_140abd06a;
    do {
      plVar8 = local_a8;
      lVar12 = (longlong)iStack_8c;
      TSet<TTuple<IOnlineUserCloud_*,FDelegateHandle>,TDefaultMapHashableKeyFuncs<IOnlineUserCloud_*,FDelegateHandle,0>,FDefaultSetAllocator>
      ::Remove(*(longlong *)(*local_a8 + lVar12 * 0x18) + 0x338,param_1);
      FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(*plVar8 + lVar12 * 0x18));
      uStack_90 = uStack_90 & ~uStack_a0._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_a0);
    } while (iStack_8c < (int)local_98[6]);
  }
  if (((char)local_70 != '\0') && (local_70._1_1_ != '\0')) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::ConditionalRehash(local_78,(int)local_78[1] - *(int *)((longlong)local_78 + 0x34),1);
    local_98 = local_98;
  }
LAB_140abd06a:
  TSet<TTuple<UObject_*,FObjectGraphNode_*>,TDefaultMapHashableKeyFuncs<UObject_*,FObjectGraphNode_*,0>,FDefaultSetAllocator>
  ::Empty(plVar16,0);
  plVar16 = *(longlong **)(param_1 + 0x280);
  pwVar20 = (wchar_t *)((longlong)*(int *)(param_1 + 0x288) & 0x1fffffffffffffff);
  if (plVar16 + *(int *)(param_1 + 0x288) < plVar16) {
    pwVar20 = pwVar15;
  }
  pwVar19 = pwVar15;
  if (pwVar20 != (wchar_t *)0x0) {
    do {
      lVar12 = *plVar16;
      if (lVar12 != 0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnBeginDamageOverlap",L"::");
        pwVar14 = pwVar15;
        while (pwVar7 = pwVar13, pwVar7 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar14 = pwVar7;
        }
        FName::FName(&local_res8,pwVar14 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (lVar12 + 0x570,param_1,CONCAT44(uStackX_c,local_res8));
        pwVar13 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnEndDamageOverlap",L"::");
        pwVar14 = pwVar15;
        while (pwVar7 = pwVar13, pwVar7 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar14 = pwVar7;
        }
        FName::FName(&local_res10,pwVar14 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar12 + 0x580,param_1,local_res10);
      }
      plVar16 = plVar16 + 1;
      pwVar19 = (wchar_t *)((longlong)pwVar19 + 1);
    } while (pwVar19 != pwVar20);
  }
  plVar16 = *(longlong **)(param_1 + 0x2a8);
  pwVar20 = (wchar_t *)((longlong)*(int *)(param_1 + 0x2b0) & 0x1fffffffffffffff);
  if (plVar16 + *(int *)(param_1 + 0x2b0) < plVar16) {
    pwVar20 = pwVar15;
  }
  pwVar19 = pwVar15;
  if (pwVar20 != (wchar_t *)0x0) {
    do {
      lVar12 = *plVar16;
      if (lVar12 != 0) {
        pwVar13 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnBeginInteractionOverlap",L"::");
        pwVar14 = pwVar15;
        while (pwVar7 = pwVar13, pwVar7 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar14 = pwVar7;
        }
        FName::FName(&local_res8,pwVar14 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (lVar12 + 0x570,param_1,CONCAT44(uStackX_c,local_res8));
        pwVar13 = _guard_xfg_dispatch_icall_nop
                            (L"&UElementalInteractionComponent::OnEndInteractionOverlap",L"::");
        pwVar14 = pwVar15;
        while (pwVar7 = pwVar13, pwVar7 != (wchar_t *)0x0) {
          pwVar13 = _guard_xfg_dispatch_icall_nop(pwVar7 + 1,L"::");
          pwVar14 = pwVar7;
        }
        FName::FName(&local_res10,pwVar14 + 2,1);
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove(lVar12 + 0x580,param_1,local_res10);
      }
      plVar16 = plVar16 + 1;
      pwVar19 = (wchar_t *)((longlong)pwVar19 + 1);
    } while (pwVar19 != pwVar20);
  }
  *(undefined4 *)(param_1 + 0x288) = 0;
  if (*(int *)(param_1 + 0x28c) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x280,0);
  }
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  if (*(int *)(param_1 + 0x2b4) != 0) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x2a8,0);
  }
  local_res10 = *(longlong *)(param_1 + 0x118);
  if (((local_res10 != 0) && ((*(byte *)(local_res10 + 0x94) & 2) == 0)) &&
     (*(longlong *)(param_1 + 0x220) != 0)) {
    local_a8 = (undefined8 *)0x0;
    uStack_a0 = 0;
    AActor::GetOverlappingActors(local_res10,&local_a8,0);
    local_res18 = (wchar_t *)
                  ((ulonglong)
                   ((longlong)(local_a8 + (int)(uint)uStack_a0) + (7 - (longlong)local_a8)) >> 3);
    if (local_a8 + (int)(uint)uStack_a0 < local_a8) {
      local_res18 = pwVar15;
    }
    puVar17 = local_a8;
    pwVar20 = pwVar15;
    if (local_res18 != (wchar_t *)0x0) {
      do {
        plVar16 = (longlong *)*puVar17;
        uVar11 = UInputKeySelector::GetPrivateStaticClass();
        lVar12 = (**(code **)(*plVar16 + 0x628))(plVar16,uVar11);
        if ((lVar12 != 0) && (lVar2 = *(longlong *)(lVar12 + 0x238), lVar2 != 0)) {
          TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::FindId(lVar12 + 0x2d0,&local_res8,local_res10);
          pwVar19 = pwVar15;
          if (local_res8 != -1) {
            pwVar19 = (wchar_t *)(*(longlong *)(lVar12 + 0x2d0) + (longlong)local_res8 * 0x18);
          }
          pwVar14 = pwVar19 + 4;
          if (pwVar19 == (wchar_t *)0x0) {
            pwVar14 = pwVar15;
          }
          if ((pwVar14 != (wchar_t *)0x0) && (*(int *)(pwVar14 + 2) == 0)) {
            FUN_140ab48f0(*(undefined8 *)(param_1 + 0x220),local_res10,lVar12,0,lVar2);
          }
        }
        puVar17 = puVar17 + 1;
        pwVar20 = (wchar_t *)((longlong)pwVar20 + 1);
      } while (pwVar20 != local_res18);
    }
    if (local_a8 != (undefined8 *)0x0) {
      FMemory::Free(local_a8);
    }
  }
  return;
}



// FUNCTION 140abd410 FUN_140abd410 body=206 status=ok
// SIG undefined FUN_140abd410(void)

longlong FUN_140abd410(undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (param_2 == 0) {
    return 0;
  }
  local_28 = param_3[2];
  uStack_20 = param_3[3];
  local_38 = *param_3;
  uStack_30 = param_3[1];
  local_18 = *(undefined4 *)(param_3 + 4);
  uStack_14 = *(undefined4 *)((longlong)param_3 + 0x24);
  uStack_10 = *(undefined4 *)(param_3 + 5);
  uStack_c = *(undefined4 *)((longlong)param_3 + 0x2c);
  lVar1 = FUN_140abdb80(param_1,*(undefined8 *)(param_2 + 0x30),&local_38,
                        *(undefined8 *)(param_2 + 0x38),*(undefined8 *)(param_2 + 0x40),
                        *(undefined4 *)(param_2 + 0x48),param_4,*(undefined4 *)(param_2 + 0x4c),
                        param_5,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = UGameplayStatics::FinishSpawningActor(lVar1,&local_38);
    uVar3 = FUN_142231800(lVar2);
    FUN_140abba60(*(undefined8 *)(lVar2 + 0x4d8),uVar3,0);
  }
  return lVar2;
}



// FUNCTION 140abd4e0 FUN_140abd4e0 body=145 status=ok
// SIG undefined FUN_140abd4e0(void)

longlong FUN_140abd4e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8,
                      undefined8 param_9)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140abdb80(param_8,param_6,param_3,param_4,param_5,param_6,param_7,param_8,param_9,0);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = UGameplayStatics::FinishSpawningActor(lVar1,param_3);
    uVar3 = FUN_142231800(lVar2);
    FUN_140abba60(*(undefined8 *)(lVar2 + 0x4d8),uVar3,0);
  }
  return lVar2;
}



// FUNCTION 140abd580 FUN_140abd580 body=93 status=ok
// SIG undefined FUN_140abd580(void)

void FUN_140abd580(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  
  *(undefined8 *)(param_1 + 0x388) = param_3;
  *(undefined8 *)(param_1 + 0x390) = *param_2;
  *(undefined4 *)(param_1 + 0x398) = *(undefined4 *)(param_2 + 1);
  lVar1 = *(longlong *)(param_1 + 0x120);
  *(undefined8 *)(param_1 + 0x3a0) = param_4;
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
  }
  *(undefined4 *)(param_1 + 0x3a8) = *(undefined4 *)(lVar1 + 0x790);
  FUN_140aa26f0(*(undefined8 *)(param_1 + 0x220),param_1);
  return;
}



// FUNCTION 140abd5e0 FUN_140abd5e0 body=1189 status=ok
// SIG undefined FUN_140abd5e0(void)

void FUN_140abd5e0(longlong *param_1,longlong *param_2,longlong *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  ulonglong uVar18;
  longlong *local_res8;
  longlong *local_48;
  uint local_40;
  uint local_3c;
  
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  iVar9 = (int)param_2[1];
  local_res8 = param_1;
  if (iVar2 < 0) {
    if (iVar9 != 0) {
      plVar13 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      iVar2 = *(int *)((longlong)param_2 + 0xc);
    }
    *(undefined4 *)(param_2 + 1) = 0;
    if (iVar2 != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_2,0);
    }
  }
  else {
    if (iVar9 != 0) {
      plVar13 = (longlong *)(*param_2 + 8);
      do {
        if (*plVar13 != 0) {
          FMemory::Free();
        }
        plVar13 = plVar13 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    *(undefined4 *)(param_2 + 1) = 0;
  }
  uVar16 = 0;
  plVar13 = (longlong *)*param_3;
  plVar17 = plVar13 + (longlong)(int)param_3[1] * 2;
  iVar2 = 0;
  plVar6 = local_res8;
  for (; local_res8 = plVar6, plVar13 != plVar17; plVar13 = plVar13 + 2) {
    iVar9 = (int)param_2[1];
    lVar10 = (longlong)iVar9;
    *(int *)(param_2 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_2 + 0xc) < iVar9 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_2,iVar9);
    }
    lVar7 = *param_2;
    *(undefined8 *)(lVar7 + lVar10 * 0x18) = 0;
    *(undefined8 *)(lVar7 + 8 + lVar10 * 0x18) = 0;
    *(undefined8 *)(lVar7 + 0x10 + lVar10 * 0x18) = 0;
    if (0 < (int)plVar13[1]) {
      lVar10 = *param_2 + lVar10 * 0x18;
      uVar8 = uVar16;
      uVar18 = uVar16;
      do {
        iVar9 = *(int *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x10) = iVar9 + 1;
        if (*(int *)(lVar10 + 0x14) < iVar9 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeGrow(lVar10 + 8,iVar9);
        }
        lVar7 = *(longlong *)(lVar10 + 8);
        lVar4 = (longlong)iVar9 * 0x20;
        *(undefined8 *)(lVar4 + lVar7) = 0;
        *(undefined1 *)(lVar4 + 8 + lVar7) = 0;
        *(undefined8 *)(lVar4 + 0x10 + lVar7) = 0;
        *(undefined8 *)(lVar4 + 0x18 + lVar7) = 0;
        plVar6 = (longlong *)(*(longlong *)(lVar10 + 8) + lVar4);
        lVar7 = *(longlong *)(uVar18 + *plVar13);
        *(bool *)(plVar6 + 1) = (int)uVar8 == 0;
        *plVar6 = lVar7;
        if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x908) != 0)) {
          plVar6[3] = *(longlong *)(*(longlong *)(lVar7 + 0x908) + 0x180);
        }
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
        uVar18 = uVar18 + 8;
      } while ((int)uVar12 < (int)plVar13[1]);
    }
    plVar6 = local_res8;
  }
  lVar10 = plVar6[0xa3];
  if (lVar10 != 0) {
    iVar9 = (int)param_2[9];
    if (((-1 < iVar9) && (iVar9 < *(int *)(lVar10 + 0x100))) &&
       (plVar13 = (longlong *)((longlong)iVar9 * 0x10 + *(longlong *)(lVar10 + 0xf8)),
       uVar8 = uVar16, uVar18 = uVar16, uVar15 = uVar16, 0 < (int)param_2[1])) {
      do {
        if ((-1 < (longlong)uVar18) && ((int)uVar8 < (int)plVar13[1])) {
          uVar1 = *(undefined8 *)(*plVar13 + uVar18 * 8);
          *(undefined8 *)(uVar15 + *param_2) = uVar1;
          lVar10 = *(longlong *)(uVar15 + 8 + *param_2);
          lVar7 = (longlong)*(int *)(uVar15 + 0x10 + *param_2) * 0x20 + lVar10;
          for (; lVar10 != lVar7; lVar10 = lVar10 + 0x20) {
            *(undefined8 *)(lVar10 + 0x10) = uVar1;
          }
        }
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
        uVar18 = uVar18 + 1;
        uVar15 = uVar15 + 0x18;
      } while ((int)uVar12 < (int)param_2[1]);
    }
  }
  lVar7 = *param_2;
  iVar9 = (int)param_2[1];
  local_48 = (longlong *)0x0;
  local_40 = 0;
  local_3c = 0;
  lVar10 = lVar7 + (longlong)iVar9 * 0x18;
  uVar8 = uVar16;
  uVar18 = uVar16;
  if (lVar7 != lVar10) {
    do {
      plVar13 = *(longlong **)(lVar7 + 8);
      plVar17 = plVar13 + (longlong)*(int *)(lVar7 + 0x10) * 4;
      for (; plVar13 != plVar17; plVar13 = plVar13 + 4) {
        if (*plVar13 != 0) {
          local_40 = (int)uVar18 + 1;
          if ((int)uVar8 < (int)local_40) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_48,uVar18);
          }
          local_48[(int)uVar18] = *plVar13;
          uVar8 = (ulonglong)local_3c;
          uVar18 = (ulonglong)local_40;
        }
      }
      lVar7 = lVar7 + 0x18;
    } while (lVar7 != lVar10);
    iVar9 = (int)param_2[1];
    lVar7 = *param_2;
  }
  lVar10 = lVar7 + (longlong)iVar9 * 0x18;
  uVar8 = uVar16;
  do {
    if (lVar7 == lVar10) {
      *(bool *)((longlong)param_2 + 0x4c) = iVar2 != 2;
      plVar13 = (longlong *)FUN_140aa71e0(plVar6);
      param_2[2] = (longlong)plVar13;
      if (plVar13 != (longlong *)0x0) {
        local_res8 = plVar13;
        (**(code **)(*plVar6 + 0x600))(plVar6);
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(plVar6 + 0x8b,&local_res8);
        FUN_140aaf340(param_2[2],param_2,param_4);
      }
      lVar7 = *param_2;
      lVar10 = lVar7 + (longlong)(int)param_2[1] * 0x18;
      plVar13 = local_48;
      for (; local_48 = plVar13, lVar7 != lVar10; lVar7 = lVar7 + 0x18) {
        puVar11 = *(undefined8 **)(lVar7 + 8);
        puVar14 = puVar11 + (longlong)*(int *)(lVar7 + 0x10) * 4;
        for (; puVar11 != puVar14; puVar11 = puVar11 + 4) {
          FUN_140aa59c0(plVar6,*puVar11);
        }
        plVar13 = local_48;
      }
      uVar8 = (ulonglong)((longlong)(plVar13 + (int)local_40) + (7 - (longlong)plVar13)) >> 3;
      if (plVar13 + (int)local_40 < plVar13) {
        uVar8 = uVar16;
      }
      if (uVar8 != 0) {
        do {
          lVar10 = *plVar13;
          if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x2c70) != 0)) {
            lVar7 = *(longlong *)(*(longlong *)(lVar10 + 0x2c70) + 0x1470);
            if ((lVar7 != 0) && (*(char *)(lVar7 + 0x458) != '\x02')) {
              thunk_FUN_1414b7270();
            }
            thunk_FUN_141400bb0(lVar10);
          }
          plVar13 = plVar13 + 1;
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar8);
      }
      plVar13 = (longlong *)param_2[2];
      if ((plVar13 != (longlong *)0x0) && ((char)plVar13[0x25] == '\x03')) {
        *(undefined1 *)((longlong)plVar13 + 0x484) = 0;
        (**(code **)(*plVar13 + 0x600))();
      }
      FUN_141309d10(plVar6,&local_48);
      if (local_48 != (longlong *)0x0) {
        FMemory::Free();
      }
      return;
    }
    plVar13 = *(longlong **)(lVar7 + 8);
    plVar17 = plVar13 + (longlong)*(int *)(lVar7 + 0x10) * 4;
    for (; iVar2 = (int)uVar8, plVar13 != plVar17; plVar13 = plVar13 + 4) {
      if (*plVar13 != 0) {
        plVar3 = (longlong *)param_2[6];
        plVar5 = plVar3 + (longlong)(int)param_2[7] * 4;
        for (; plVar3 != plVar5; plVar3 = plVar3 + 4) {
          if (*plVar3 == *plVar13) {
            if ((char)plVar3[1] != '\0') goto LAB_140abd909;
            break;
          }
        }
        uVar8 = (ulonglong)(iVar2 + 1);
      }
LAB_140abd909:
    }
    lVar7 = lVar7 + 0x18;
  } while( true );
}



// FUNCTION 140abda90 FUN_140abda90 body=172 status=ok
// SIG undefined FUN_140abda90(void)

undefined8 FUN_140abda90(char *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint local_res8 [2];
  
  if (*param_1 != '\0') {
    iVar2 = FUN_140ab6ff0(param_1,0,0);
    *param_2 = iVar2;
    if (-1 < iVar2) {
      param_2[1] = 0;
      cVar1 = FUN_140ab8370(param_1,param_2 + 1,7);
      if (cVar1 != '\0') {
        local_res8[0] = 0;
        cVar1 = FUN_140ab8370(param_1,local_res8,4);
        if (cVar1 != '\0') {
          *(char *)(param_2 + 2) = (char)local_res8[0];
          if ((char)local_res8[0] != '\0') {
            param_2[3] = 0;
            cVar1 = FUN_140ab8370(param_1,param_2 + 3,7);
            if ((cVar1 != '\0') && (-1 < param_2[3])) {
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 140abdb40 FUN_140abdb40 body=49 status=ok
// SIG undefined FUN_140abdb40(void)

void FUN_140abdb40(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0xc)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo(param_1,0);
    *(undefined1 *)(param_1 + 0x18) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



// FUNCTION 140abdb80 FUN_140abdb80 body=960 status=ok
// SIG undefined FUN_140abdb80(void)

longlong *
FUN_140abdb80(longlong *param_1,longlong *param_2,longlong param_3,longlong param_4,longlong param_5
             ,undefined4 param_6,undefined8 param_7,float param_8,longlong param_9,char param_10)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  lVar6 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar6 == 0) {
    return (longlong *)0x0;
  }
  iVar5 = FUN_1428cf800(lVar6);
  if (iVar5 == 3) {
    return (longlong *)0x0;
  }
  if (param_2 == (longlong *)0x0) {
    return (longlong *)0x0;
  }
  plVar7 = (longlong *)FUN_14130d4b0();
  plVar10 = param_2;
  while (plVar10 != plVar7) {
    plVar10 = (longlong *)plVar10[6];
    if (plVar10 == (longlong *)0x0) {
      return (longlong *)0x0;
    }
  }
  plVar10 = (longlong *)0x0;
  if (param_8 <= 0.0) {
    if (param_5 == 0) {
      plVar8 = (longlong *)FUN_14130d4b0();
      plVar7 = param_2;
      do {
        plVar9 = param_2;
        if (plVar7 == plVar8) break;
        plVar7 = (longlong *)plVar7[6];
        plVar9 = plVar10;
      } while (plVar7 != (longlong *)0x0);
      lVar6 = plVar9[0x1f];
      if (lVar6 == 0) {
        (**(code **)(*plVar9 + 0x368))(plVar9);
        lVar6 = plVar9[0x1f];
      }
      param_8 = *(float *)(lVar6 + 0x574);
    }
    else {
      param_8 = *(float *)(param_5 + 0x40);
    }
  }
  if (DAT_146295c24 < param_8) {
    param_8 = DAT_146295c24;
  }
  plVar8 = (longlong *)FUN_14130c760();
  plVar9 = (longlong *)FUN_14130d4b0();
  plVar7 = param_2;
  do {
    plVar3 = param_2;
    if (plVar7 == plVar9) break;
    plVar7 = (longlong *)plVar7[6];
    plVar3 = plVar10;
  } while (plVar7 != (longlong *)0x0);
  do {
    uVar13 = 0;
    if (plVar3 == (longlong *)0x0) goto LAB_140abdd33;
    if (plVar3 == plVar8) {
      local_58 = param_6;
      plVar8 = (longlong *)FUN_14130d4b0();
      plVar7 = param_2;
      break;
    }
    plVar3 = (longlong *)plVar3[6];
  } while( true );
  while (plVar7 = (longlong *)plVar7[6], plVar9 = plVar10, plVar7 != (longlong *)0x0) {
    plVar9 = param_2;
    if (plVar7 == plVar8) break;
  }
  cVar4 = FUN_140aa6260(param_1,plVar9,param_8,param_3,&local_58);
  uVar13 = local_58;
  if (cVar4 != '\0') {
LAB_140abdd33:
    if (param_10 == '\0') {
      local_54 = *(undefined4 *)(param_3 + 0x10);
      local_50 = *(undefined4 *)(param_3 + 0x14);
      local_4c = *(undefined4 *)(param_3 + 0x18);
      if (((param_1 != (longlong *)0x0) &&
          (lVar6 = (**(code **)(*param_1 + 0x148))(param_1), lVar6 != 0)) &&
         (lVar6 = FUN_140aab610(lVar6), lVar6 != 0)) {
        puVar12 = *(undefined8 **)(lVar6 + 0x538);
        puVar1 = puVar12 + *(int *)(lVar6 + 0x540);
        for (; puVar12 != puVar1; puVar12 = puVar12 + 1) {
          cVar4 = FUN_140adad90(*puVar12,&local_54);
          if (cVar4 != '\0') {
            return (longlong *)0x0;
          }
        }
      }
    }
    plVar8 = (longlong *)FUN_14130d4b0();
    plVar7 = param_2;
    do {
      plVar9 = param_2;
      if (plVar7 == plVar8) break;
      plVar7 = (longlong *)plVar7[6];
      plVar9 = plVar10;
    } while (plVar7 != (longlong *)0x0);
    plVar10 = (longlong *)FUN_142443830(param_1,plVar9,param_3,1,param_7);
    if (plVar10 != (longlong *)0x0) {
      lVar6 = FUN_14130d4b0();
      if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
         (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
          lVar6 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        if (param_4 != 0) {
          plVar10[0x9e] = param_4;
        }
        *(undefined4 *)(plVar10 + 0xac) = uVar13;
        *(float *)((longlong)plVar10 + 0x574) = param_8;
        *(undefined1 *)((longlong)plVar10 + 0x55c) = 1;
        if (param_5 != 0) {
          *(undefined4 *)((longlong)plVar10 + 0x564) = *(undefined4 *)(param_5 + 0x30);
          *(undefined4 *)(plVar10 + 0xad) = *(undefined4 *)(param_5 + 0x34);
          *(undefined4 *)((longlong)plVar10 + 0x56c) = *(undefined4 *)(param_5 + 0x38);
          *(undefined4 *)(plVar10 + 0xae) = *(undefined4 *)(param_5 + 0x3c);
          *(undefined4 *)(plVar10 + 0xaf) = *(undefined4 *)(param_5 + 0x44);
          *(undefined4 *)((longlong)plVar10 + 0x57c) = *(undefined4 *)(param_5 + 0x48);
          *(undefined4 *)(plVar10 + 0xb0) = *(undefined4 *)(param_5 + 0x4c);
          *(undefined4 *)((longlong)plVar10 + 0x584) = *(undefined4 *)(param_5 + 0x50);
        }
        if (param_9 != 0) {
          plVar10[0x2a] = param_9;
        }
        if (plVar10[0x9c] == 0) {
          uVar11 = FUN_142dfdf30();
          lVar6 = (**(code **)(*plVar10 + 0x628))(plVar10,uVar11);
          plVar10[0x9c] = lVar6;
          if (lVar6 == 0) {
            plVar7 = (longlong *)FUN_142dfdf30();
            lVar6 = plVar7[0x1f];
            if (lVar6 == 0) {
              (**(code **)(*plVar7 + 0x368))(plVar7);
              lVar6 = plVar7[0x1f];
            }
            lVar6 = FUN_142227070(plVar10,lVar6,DAT_146867988);
            plVar10[0x9c] = lVar6;
            *(undefined1 *)(lVar6 + 0x1d1) = 1;
            FUN_14234b150(plVar10[0x9c]);
            return plVar10;
          }
          return plVar10;
        }
        return plVar10;
      }
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 140abdf40 FUN_140abdf40 body=496 status=ok
// SIG undefined FUN_140abdf40(void)

ulonglong FUN_140abdf40(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  if ((*(char *)(param_1 + 0x128) == '\x03') && (param_2 != 0)) {
    iVar1 = *(int *)(param_2 + 0xc);
    uVar10 = 0;
    uVar6 = uVar10;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar8 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar8;
      uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
    }
    if ((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) {
      lVar5 = FUN_140c45020(param_2);
      uVar2 = *(undefined8 *)(param_2 + 0x470);
      if (lVar5 != 0) {
        iVar1 = *(int *)(lVar5 + 0xc);
        uVar6 = uVar10;
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar8 = iVar1 >> 0x1f & 0xffff;
          uVar4 = iVar1 + uVar8;
          uVar6 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                  (longlong)(int)((uVar4 & 0xffff) - uVar8) * 0x18;
        }
        if (((((*(uint *)(uVar6 + 8) >> 0x1d & 1) == 0) &&
             (cVar3 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(lVar5), cVar3 == '\0'
             )) && (cVar3 = FUN_140e1ace0(lVar5), cVar3 != '\0')) &&
           ((cVar3 = FUN_140ab3e80(param_1,uVar2), cVar3 == '\0' &&
            (plVar7 = (longlong *)FUN_140aa7410(param_1), plVar7 != (longlong *)0x0)))) {
          FUN_14223e980(param_1,1);
          FUN_140aaf7f0(plVar7,lVar5,0,uVar2);
          FUN_140ac1690(plVar7,uVar2);
          FUN_140ab5cb0(plVar7);
          lVar5 = (**(code **)(*plVar7 + 0x148))(plVar7);
          if ((lVar5 != 0) &&
             ((lVar5 = UWorld::GetGameState<APVPGameState>(lVar5), lVar5 != 0 &&
              (*(longlong *)(lVar5 + 0x5a8) != 0)))) {
            do {
              uVar4 = (uint)uVar10;
              if ((-1 < (int)uVar4) && (uVar4 < 2)) {
                lVar9 = *(longlong *)(lVar5 + 0x5a8) + 0x468 + (longlong)(int)uVar4 * 0x50;
                if ((lVar9 != 0) && (*(longlong **)(lVar9 + 0x18) == plVar7)) {
                  lVar5 = param_1 + 0x468 + (longlong)(int)uVar4 * 0x50;
                  if (lVar5 == 0) {
                    return uVar10;
                  }
                  *(longlong *)(lVar5 + 0x40) = param_2;
                  return uVar10;
                }
              }
              uVar10 = (ulonglong)(uVar4 + 1);
            } while (uVar4 + 1 < 2);
          }
          return 0xffffffff;
        }
      }
    }
  }
  return 0xffffffff;
}



// FUNCTION 140abe130 FUN_140abe130 body=442 status=ok
// SIG undefined FUN_140abe130(void)

void FUN_140abe130(longlong param_1,undefined1 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0xa8);
  piVar6 = piVar5 + (longlong)*(int *)(param_1 + 0xb0) * 0x18;
  if (piVar5 != piVar6) {
    while (*piVar5 != *(int *)(param_1 + 0x98)) {
      piVar5 = piVar5 + 0x18;
      if (piVar5 == piVar6) {
        return;
      }
    }
    plVar2 = *(longlong **)(param_1 + 0x50);
    plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x58) * 2;
    for (; plVar2 != plVar4; plVar2 = plVar2 + 2) {
      if (((int)plVar2[1] != 0) && (*plVar2 != 0)) {
        FUN_1404ffab0(param_1 + 0x50,*(undefined8 *)(piVar5 + 4),*(undefined8 *)(piVar5 + 6),param_2
                     );
        break;
      }
    }
    if (*(char *)(param_1 + 0x9c) != '\0') {
      plVar2 = *(longlong **)(param_1 + 0x80);
      plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x88) * 2;
      for (; plVar2 != plVar4; plVar2 = plVar2 + 2) {
        if (((int)plVar2[1] != 0) && (*plVar2 != 0)) {
          FUN_1404ffab0(param_1 + 0x80,*(undefined8 *)(piVar5 + 4),*(undefined8 *)(piVar5 + 6),
                        param_2);
          break;
        }
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    cVar1 = FUN_14059f160(piVar5 + 8);
    if (cVar1 != '\0') {
      if (DAT_146b33f38 == (longlong *)0x0) {
        FUN_142d7ebe0();
      }
      lVar3 = (**(code **)(*DAT_146b33f38 + 0x280))();
      if ((((lVar3 != 0) &&
           (FUN_1405aaa50(*(undefined8 *)(piVar5 + 8),*(undefined8 *)(lVar3 + 0x50),0,0,4,0),
           *(char *)((longlong)piVar5 + 0x59) != '\0')) && (*(longlong *)(piVar5 + 2) != 0)) &&
         (*(char *)(*(longlong *)(piVar5 + 2) + 0x280) == '\0')) {
        FUN_1405aaa50(*(undefined8 *)(piVar5 + 8),*(undefined8 *)(lVar3 + 0x58),0,0,4,0);
      }
    }
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x9d) = 0;
    *(undefined1 *)(param_1 + 0xa5) = 0;
  }
  return;
}



// FUNCTION 140abe2f0 Unlock body=5 status=ok
// SIG undefined Unlock(void)

void FVulkanStagingBuffer::Unlock(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



// FUNCTION 140abe300 FUN_140abe300 body=309 status=ok
// SIG undefined FUN_140abe300(void)

undefined8 FUN_140abe300(undefined8 param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  wint_t wVar2;
  wint_t wVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  
  puVar6 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_143f3eda8;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  for (pwVar4 = L"playerlevel";
      (wVar1 = *(wchar_t *)((longlong)(puVar5 + -0xa2120dfc) + (longlong)pwVar4), wVar1 != L'\0' ||
      (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
    if (wVar1 != *pwVar4) {
      wVar2 = towlower(wVar1);
      wVar3 = towlower(*pwVar4);
      if (wVar2 != wVar3) {
        if (wVar2 == wVar3) {
          return 1;
        }
        if (*(int *)(param_2 + 1) == 0) {
          puVar5 = &DAT_143f3eda8;
        }
        else {
          puVar5 = (undefined2 *)*param_2;
        }
        for (pwVar4 = L"offerlevel";
            (wVar1 = *(wchar_t *)((longlong)(puVar5 + -0xa2120e08) + (longlong)pwVar4),
            wVar1 != L'\0' || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
          if (wVar1 != *pwVar4) {
            wVar2 = towlower(wVar1);
            wVar3 = towlower(*pwVar4);
            if (wVar2 != wVar3) {
              if (wVar2 == wVar3) {
                return 2;
              }
              if (*(int *)(param_2 + 1) != 0) {
                puVar6 = (undefined2 *)*param_2;
              }
              for (pwVar4 = L"playerlevelforced";
                  (wVar1 = *(wchar_t *)((longlong)(puVar6 + -0xa2120e14) + (longlong)pwVar4),
                  wVar1 != L'\0' || (*pwVar4 != L'\0')); pwVar4 = pwVar4 + 1) {
                if (wVar1 != *pwVar4) {
                  wVar2 = towlower(wVar1);
                  wVar3 = towlower(*pwVar4);
                  if (wVar2 != wVar3) {
                    if (wVar2 == wVar3) {
                      return 3;
                    }
                    return 0;
                  }
                }
              }
              return 3;
            }
          }
        }
        return 2;
      }
    }
  }
  return 1;
}



// FUNCTION 140abe440 FUN_140abe440 body=347 status=ok
// SIG undefined FUN_140abe440(void)

bool FUN_140abe440(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong *plVar5;
  int local_res8 [2];
  longlong local_res20;
  longlong local_18 [2];
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res20,0);
  if (cVar1 != '\0') {
    cVar1 = FUN_1405e99e0(param_3,*(undefined8 *)(param_1 + 0x38),local_18);
    if (cVar1 != '\0') {
      lVar3 = FUN_14291fb80();
      if ((*(int *)(*(longlong *)(local_res20 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        local_res20 = *(longlong *)(local_res20 + 0x488);
      }
      lVar3 = local_res20;
      if (local_res20 != 0) {
        uVar4 = FUN_1430a8880();
        plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar3,uVar4);
        if (plVar5 != (longlong *)0x0) {
          lVar3 = (**(code **)(*plVar5 + 0xf0))(plVar5,0);
          if (lVar3 != 0) {
            if (DAT_146b33f38 == 0) {
              FUN_142d7ebe0();
            }
            if (*(longlong *)(DAT_146b33f38 + 0xd8) != 0) {
              plVar5 = (longlong *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x230);
              TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
              ::FindId(plVar5,local_res8,*(undefined8 *)(lVar3 + 0x480));
              if ((local_res8[0] != -1) &&
                 (lVar3 = *plVar5 + (longlong)local_res8[0] * 0x18, lVar3 != 0)) {
                return *(longlong *)(lVar3 + 8) != local_18[0];
              }
              return local_18[0] != 0;
            }
          }
        }
      }
    }
  }
  return (bool)2;
}



// FUNCTION 140abe5a0 FUN_140abe5a0 body=86 status=ok
// SIG undefined FUN_140abe5a0(void)

bool FUN_140abe5a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 local_res8 [4];
  
  local_res8[0] = 0;
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x38),local_res8,0);
  if ((cVar1 != '\0') && (*(longlong *)(param_1 + 0x30) != 0)) {
    cVar1 = FUN_142c48f60(*(longlong *)(param_1 + 0x30),local_res8[0],0);
    return cVar1 == '\0';
  }
  return (bool)2;
}



// FUNCTION 140abe600 FUN_140abe600 body=347 status=ok
// SIG undefined FUN_140abe600(void)

bool FUN_140abe600(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int local_res8 [2];
  longlong *local_res20;
  undefined8 local_18 [2];
  
  lVar6 = 0;
  local_res20 = (longlong *)0x0;
  local_18[0] = 0;
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res20,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_1405e99e0(param_3,*(undefined8 *)(param_1 + 0x38),local_18);
    plVar4 = local_res20;
    if (cVar2 != '\0') {
      if (local_res20 != (longlong *)0x0) {
        lVar3 = FUN_1428dfc70();
        if ((*(int *)(plVar4[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
           (*(longlong *)(*(longlong *)(plVar4[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
            lVar3 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (bVar1) {
          plVar4 = (longlong *)(**(code **)(*plVar4 + 0x678))(plVar4);
          if (plVar4 != (longlong *)0x0) {
            uVar5 = UThrobber::GetPrivateStaticClass();
            lVar6 = (**(code **)(*plVar4 + 0x628))(plVar4,uVar5);
          }
        }
      }
      if (DAT_146b33f38 == 0) {
        FUN_142d7ebe0();
      }
      if ((lVar6 != 0) && (*(longlong *)(DAT_146b33f38 + 0xd8) != 0)) {
        plVar4 = (longlong *)(*(longlong *)(DAT_146b33f38 + 0xd8) + 0x1e0);
        TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
        ::FindId(plVar4,local_res8,local_18[0]);
        if (local_res8[0] != -1) {
          lVar3 = *plVar4 + (longlong)local_res8[0] * 0x18;
          if ((lVar3 != 0) && (puVar7 = (undefined8 *)(lVar3 + 8), puVar7 != (undefined8 *)0x0)) {
            cVar2 = (**(code **)(*(longlong *)(lVar6 + 0x178) + 0x18))
                              ((longlong *)(lVar6 + 0x178),*puVar7);
            return cVar2 == '\0';
          }
        }
      }
    }
  }
  return (bool)2;
}



// FUNCTION 140abe760 FUN_140abe760 body=308 status=ok
// SIG undefined FUN_140abe760(void)

bool FUN_140abe760(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  char local_res8 [24];
  longlong *local_res20;
  
  local_res20 = (longlong *)0x0;
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res20,0);
  plVar1 = local_res20;
  if (cVar2 == '\0') {
    return (bool)2;
  }
  if (local_res20 != (longlong *)0x0) {
    lVar4 = FUN_1428dfc70();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) {
      lVar4 = (**(code **)(*plVar1 + 0x678))(plVar1);
      if (lVar4 != 0) {
        lVar5 = FUN_1413f82e0();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          lVar5 = lVar4 + 0x12d0;
          if (*(longlong *)(lVar4 + 0x910) != 0) {
            FUN_142d1bf20(*(longlong *)(lVar4 + 0x910),lVar5);
          }
          cVar2 = FUN_142d52a00(lVar5);
          if (cVar2 != '\0') {
            uVar6 = FUN_142d52a20(lVar5);
            uVar6 = FArchive::operator<<(uVar6);
            cVar2 = FUN_142d62440(uVar6,local_res8);
            if (cVar2 != '\0') {
              return local_res8[0] == '\0';
            }
          }
        }
      }
    }
  }
  return true;
}



// FUNCTION 140abe8a0 FUN_140abe8a0 body=271 status=ok
// SIG undefined FUN_140abe8a0(void)

bool FUN_140abe8a0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *local_res8;
  longlong *local_res20;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar1 == '\0') {
    return (bool)2;
  }
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x38),&local_res20,0);
  if (cVar1 == '\0') {
    return (bool)2;
  }
  if (local_res8 == (longlong *)0x0) {
LAB_140abe928:
    plVar5 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(local_res8[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res8[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar5 = local_res8;
    if (!bVar2) goto LAB_140abe928;
  }
  if (local_res20 != (longlong *)0x0) {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(local_res20[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res20[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_140abe96c;
  }
  local_res20 = (longlong *)0x0;
LAB_140abe96c:
  if ((plVar5 != (longlong *)0x0) && (local_res20 != (longlong *)0x0)) {
    lVar3 = (**(code **)(*local_res20 + 0x678))(local_res20);
    lVar4 = (**(code **)(*plVar5 + 0x678))(plVar5);
    return lVar4 != lVar3;
  }
  return (bool)2;
}



// FUNCTION 140abe9b0 FUN_140abe9b0 body=131 status=ok
// SIG undefined FUN_140abe9b0(void)

bool FUN_140abe9b0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  cVar1 = FUN_1405e99e0(param_3,param_1[6],&local_res8);
  if (cVar1 != '\0') {
    uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar3 = FUN_1405e8e00(uVar2);
    if (lVar3 != 0) {
      uVar2 = (**(code **)(*param_1 + 0x148))(param_1);
      cVar1 = FUN_1405e9c30(lVar3,local_res8,uVar2);
      return cVar1 == '\0';
    }
  }
  return (bool)2;
}



// FUNCTION 140abea40 FUN_140abea40 body=738 status=ok
// SIG undefined FUN_140abea40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140abea40(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  bool bVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  longlong *local_res8;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  float local_64;
  longlong local_60;
  int local_58;
  
  local_res8 = (longlong *)0x0;
  cVar4 = FUN_1405ea5e0(param_3,param_1[6],&local_res8,0);
  plVar11 = local_res8;
  if ((cVar4 != '\0') && (local_res8 != (longlong *)0x0)) {
    lVar6 = FUN_1428dfc70();
    if ((*(int *)(plVar11[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar11[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
        lVar6 + 0x88)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if (bVar5) {
      plVar7 = (longlong *)(**(code **)(*plVar11 + 0x678))(plVar11);
      if (plVar7 != (longlong *)0x0) {
        plVar11 = plVar7;
      }
      lVar6 = plVar11[0x2d];
      if (lVar6 == 0) {
        local_78 = _DAT_1468b5d90;
        local_70 = DAT_1468b5d98;
      }
      else {
        local_78 = *(undefined8 *)(lVar6 + 0x220);
        local_70 = *(float *)(lVar6 + 0x228);
      }
      local_80 = local_70;
      local_88 = local_78;
      uVar8 = (**(code **)(*param_1 + 0x148))(param_1);
      UWorld::GetPlayerControllerIterator(uVar8,&local_60);
      fVar3 = local_80;
      fVar2 = local_88._4_4_;
      fVar1 = (float)local_88;
      do {
        if ((local_58 < 0) || (*(int *)(local_60 + 8) <= local_58)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (!bVar5) {
          return 1;
        }
        lVar6 = FWeakObjectPtr::Get();
        if (lVar6 != 0) {
          lVar9 = FUN_14145f370();
          if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
            bVar5 = false;
          }
          else {
            bVar5 = true;
          }
          if ((((bVar5) && (plVar7 = *(longlong **)(lVar6 + 0x990), plVar7 != (longlong *)0x0)) &&
              (plVar7 != plVar11)) &&
             ((plVar7[0x21c] != 0 && (cVar4 = FUN_140adac80(), cVar4 != '\0')))) {
            if ((char)param_1[7] == '\0') {
              fVar14 = 3000.0;
            }
            else {
              fVar14 = *(float *)((longlong)param_1 + 0x3c);
            }
            lVar6 = plVar7[0x2d];
            if (lVar6 == 0) {
              local_80 = DAT_1468b5d98;
              puVar10 = &local_88;
              local_88 = _DAT_1468b5d90;
            }
            else {
              puVar10 = &local_78;
              local_70 = *(float *)(lVar6 + 0x228);
              local_78 = *(undefined8 *)(lVar6 + 0x220);
            }
            local_64 = *(float *)(puVar10 + 1);
            fVar13 = (float)((ulonglong)*puVar10 >> 0x20) - fVar2;
            fVar12 = (float)*puVar10 - fVar1;
            if (fVar13 * fVar13 + fVar12 * fVar12 + (local_64 - fVar3) * (local_64 - fVar3) <
                fVar14 * fVar14) {
              return 0;
            }
          }
        }
        local_58 = local_58 + 1;
      } while( true );
    }
  }
  return 2;
}



// FUNCTION 140abed30 FUN_140abed30 body=293 status=ok
// SIG undefined FUN_140abed30(void)

undefined8 FUN_140abed30(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *local_res8;
  longlong local_res20;
  
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),&local_res8,0);
  if (cVar1 == '\0') {
    return 2;
  }
  cVar1 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x38),&local_res20,0);
  if (cVar1 == '\0') {
    return 2;
  }
  if (local_res8 == (longlong *)0x0) {
LAB_140abedb8:
    plVar6 = (longlong *)0x0;
  }
  else {
    lVar3 = FUN_1428dfc70();
    if ((*(int *)(local_res8[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(local_res8[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    plVar6 = local_res8;
    if (!bVar2) goto LAB_140abedb8;
  }
  if (local_res20 != 0) {
    lVar3 = FUN_14148cad0();
    if ((*(int *)(*(longlong *)(local_res20 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(local_res20 + 0x10) + 0x88) +
         (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar3 = local_res20;
    if (bVar2) goto LAB_140abedfc;
  }
  lVar3 = 0;
LAB_140abedfc:
  if ((plVar6 == (longlong *)0x0) || (lVar3 == 0)) {
    return 2;
  }
  uVar4 = (**(code **)(*plVar6 + 0x688))(plVar6);
  lVar5 = FUN_141227860(lVar3,uVar4,0);
  if ((lVar5 != 0) && (lVar5 != *(longlong *)(lVar3 + 0x668))) {
    return 0;
  }
  return 1;
}



// FUNCTION 140abee60 FUN_140abee60 body=263 status=ok
// SIG undefined FUN_140abee60(void)

bool FUN_140abee60(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  char cVar2;
  bool bVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong *local_res8 [4];
  
  cVar2 = FUN_1405ea5e0(param_3,*(undefined8 *)(param_1 + 0x30),local_res8,0);
  plVar5 = local_res8[0];
  if (cVar2 == '\0') {
    return (bool)2;
  }
  if (local_res8[0] == (longlong *)0x0) {
    return (bool)2;
  }
  lVar4 = FUN_1428dfc70();
  plVar1 = local_res8[0];
  if ((*(int *)(plVar5[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
     (*(longlong *)(*(longlong *)(plVar5[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
      lVar4 + 0x88)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (!bVar3) {
    if (local_res8[0] == (longlong *)0x0) {
      return (bool)2;
    }
    lVar4 = FUN_1428e7a40();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) {
      return (bool)2;
    }
    plVar5 = (longlong *)local_res8[0][0x23];
    if (plVar5 == (longlong *)0x0) {
      return (bool)2;
    }
  }
  plVar5 = (longlong *)(**(code **)(*plVar5 + 0x678))(plVar5);
  if (plVar5 != (longlong *)0x0) {
    uVar6 = FUN_1412e9ee0();
    lVar4 = (**(code **)(*plVar5 + 0x628))(plVar5,uVar6);
    if (lVar4 != 0) {
      cVar2 = FUN_140e27b50(lVar4);
      return cVar2 == '\0';
    }
  }
  return (bool)2;
}



// FUNCTION 140abef70 FUN_140abef70 body=376 status=ok
// SIG undefined FUN_140abef70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140abef70(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = 0;
  cVar2 = FUN_1405e99e0(param_3,param_1[6],&local_88);
  if (cVar2 != '\0') {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
    uVar4 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar5 = FUN_142f6c9f0(uVar4);
    if ((lVar5 != 0) && (lVar1 != 0)) {
      local_78 = &local_88;
      local_80 = 0;
      uStack_70 = &local_80;
      local_38 = (longlong *)0x0;
      local_28 = 0;
      puVar6 = (undefined8 *)FUN_140438ef0(0x18,local_58);
      if (puVar6 != (undefined8 *)0x0) {
        *puVar6 = &PTR_FUN_143f77c18;
        *(undefined4 *)(puVar6 + 1) = (undefined4)local_78;
        *(undefined4 *)((longlong)puVar6 + 0xc) = local_78._4_4_;
        *(undefined4 *)(puVar6 + 2) = (undefined4)uStack_70;
        *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_70._4_4_;
      }
      local_68[0] = &LAB_140aa4e00;
      iVar3 = FUN_142f5ca80(lVar5,local_68);
      if (local_28 != 0) {
        plVar7 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar7 = local_38;
        }
        if (plVar7 != (longlong *)0x0) {
          (**(code **)(*plVar7 + 0x10))(plVar7,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if ((iVar3 == 2) && (iVar3 = FUN_142f5c9d0(lVar5,local_80), iVar3 != 2)) {
        return 0;
      }
      return 1;
    }
  }
  return 2;
}



// FUNCTION 140abf0f0 FUN_140abf0f0 body=286 status=ok
// SIG undefined FUN_140abf0f0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined1 FUN_140abf0f0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined8 local_78 [2];
  code *local_68 [2];
  longlong local_58 [4];
  longlong *local_38;
  int local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_78[0] = 0;
  cVar1 = FUN_1405e99e0(param_3,param_1[6],local_78);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar4 = FUN_142f6c9f0(uVar3);
    uVar3 = local_78[0];
    if (lVar4 != 0) {
      local_38 = (longlong *)0x0;
      local_28 = 0;
      puVar5 = (undefined8 *)FUN_140438ef0(0x10,local_58);
      if (puVar5 != (undefined8 *)0x0) {
        puVar5[1] = uVar3;
        *puVar5 = &PTR_FUN_143f77b70;
      }
      local_68[0] = FUN_140a86410;
      iVar2 = FUN_142f5ca80(lVar4,local_68);
      if (local_28 != 0) {
        plVar6 = local_58;
        if (local_38 != (longlong *)0x0) {
          plVar6 = local_38;
        }
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x10))(plVar6,0);
        }
      }
      if (local_38 != (longlong *)0x0) {
        FMemory::Free();
      }
      if (iVar2 != 4) {
        return iVar2 != 2;
      }
    }
  }
  return 2;
}



// FUNCTION 140abf210 FUN_140abf210 body=488 status=ok
// SIG undefined FUN_140abf210(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_140abf210(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  code *local_88 [2];
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  local_98 = 0;
  local_90 = 0;
  cVar2 = FUN_1405e99e0(param_3,param_1[6],&local_98);
  if ((cVar2 != '\0') && (cVar2 = FUN_1405e99e0(param_3,param_1[7],&local_90), cVar2 != '\0')) {
    if (DAT_146b33f38 == 0) {
      FUN_142d7ebe0();
    }
    lVar1 = *(longlong *)(DAT_146b33f38 + 0xd8);
    uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
    lVar6 = FUN_142f6c9f0(uVar5);
    uVar5 = local_98;
    if ((lVar6 != 0) && (lVar1 != 0)) {
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77b70;
        puVar7[1] = uVar5;
      }
      local_88[0] = FUN_140a86410;
      iVar3 = FUN_142f5ca80(lVar6,local_88);
      if (local_48 != 0) {
        plVar8 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar8 = local_58;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      uVar5 = local_90;
      local_58 = (longlong *)0x0;
      local_48 = 0;
      puVar7 = (undefined8 *)FUN_140438ef0(0x10,local_78);
      if (puVar7 != (undefined8 *)0x0) {
        *puVar7 = &PTR_FUN_143f77b70;
        puVar7[1] = uVar5;
      }
      local_88[0] = FUN_140a86410;
      uVar4 = FUN_142f5ca80(lVar6,local_88);
      if (local_48 != 0) {
        plVar8 = local_78;
        if (local_58 != (longlong *)0x0) {
          plVar8 = local_58;
        }
        if (plVar8 != (longlong *)0x0) {
          (**(code **)(*plVar8 + 0x10))(plVar8,0);
        }
      }
      if (local_58 != (longlong *)0x0) {
        FMemory::Free();
      }
      if ((iVar3 != 4) && (uVar4 != 4)) {
        if ((iVar3 == 2) && (uVar4 < 2)) {
          return 0;
        }
        return 1;
      }
    }
  }
  return 2;
}



// FUNCTION 140abf400 FUN_140abf400 body=27 status=ok
// SIG undefined FUN_140abf400(void)

void FUN_140abf400(undefined8 param_1)

{
  FUN_1422406d0();
  FUN_140ac0dc0(param_1);
  return;
}



// FUNCTION 140abf420 FUN_140abf420 body=1011 status=ok
// SIG undefined FUN_140abf420(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140abf420(longlong param_1,undefined4 param_2)

{
  void *_Src;
  longlong lVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  undefined1 auStack_ca8 [32];
  undefined8 local_c88;
  undefined4 local_c80;
  undefined8 *local_c78;
  int local_c70;
  undefined8 local_c68 [160];
  undefined8 *local_768;
  undefined8 local_760;
  undefined1 local_758 [1792];
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_ca8;
  FUN_1422406d0();
  puVar6 = (undefined8 *)0x0;
  local_58 = 0;
  local_50 = 0;
  if (*(int *)(param_1 + 0x4d0) != *(int *)(param_1 + 0x4fc)) {
    FUN_140abfce0(param_1,param_2,local_758);
  }
  if (*(int *)(param_1 + 0x520) != 0) {
    local_c70 = *(int *)(param_1 + 0x520);
    lVar8 = (longlong)local_c70;
    _Src = *(void **)(param_1 + 0x518);
    local_c78 = (undefined8 *)0x0;
    puVar10 = puVar6;
    if (local_c70 != 0) {
      TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_c78,local_c70,0);
      puVar10 = local_c78;
      _guard_xfg_dispatch_icall_nop(local_c78,_Src,lVar8 << 3);
    }
    iVar5 = local_c70;
    *(undefined4 *)(param_1 + 0x520) = 0;
    if (0x7fffffff < *(uint *)(param_1 + 0x524)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(param_1 + 0x518);
    }
    puVar7 = (undefined8 *)((ulonglong)((longlong)(puVar10 + iVar5) + (7 - (longlong)puVar10)) >> 3)
    ;
    if (puVar10 + iVar5 < puVar10) {
      puVar7 = puVar6;
    }
    puVar9 = puVar10;
    if (puVar7 != (undefined8 *)0x0) {
      do {
        FUN_140ac2040(*puVar9);
        puVar6 = (undefined8 *)((longlong)puVar6 + 1);
        puVar9 = puVar9 + 1;
      } while (puVar6 != puVar7);
    }
    if (puVar10 != (undefined8 *)0x0) {
      FMemory::Free(puVar10);
    }
  }
  local_768 = (undefined8 *)0x0;
  local_760 = 0;
  if (*(int *)(param_1 + 0x530) != 0) {
    FUN_140ac06a0(param_1,param_2,local_c68);
  }
  if ((*(int *)(param_1 + 0x550) != 0) && (iVar5 = *(int *)(param_1 + 0x550) + -1, -1 < iVar5)) {
    lVar8 = (longlong)iVar5 * 8;
    lVar11 = lVar8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x548);
      if (*(longlong *)(lVar8 + lVar1) == 0) {
        iVar3 = *(int *)(param_1 + 0x550);
        iVar2 = (iVar3 - iVar5) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + lVar1),(void *)(lVar1 + (longlong)(iVar3 - iVar2) * 8),
                     (longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x550);
        }
        *(int *)(param_1 + 0x550) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x548);
      }
      else {
        FUN_140ac1130();
      }
      lVar11 = lVar11 + -8;
      lVar8 = lVar8 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if ((*(int *)(param_1 + 0x570) != 0) && (iVar5 = *(int *)(param_1 + 0x570) + -1, -1 < iVar5)) {
    lVar8 = (longlong)iVar5 * 8;
    lVar11 = lVar8;
    do {
      lVar1 = *(longlong *)(param_1 + 0x568);
      if (*(longlong *)(lVar8 + lVar1) == 0) {
        iVar3 = *(int *)(param_1 + 0x570);
        iVar2 = (iVar3 - iVar5) + -1;
        if (0 < iVar2) {
          iVar2 = 1;
        }
        if (iVar2 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar11 + lVar1),(void *)(lVar1 + (longlong)(iVar3 - iVar2) * 8),
                     (longlong)iVar2 << 3);
          iVar3 = *(int *)(param_1 + 0x570);
        }
        *(int *)(param_1 + 0x570) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x568);
      }
      else {
        FUN_140c2a340();
      }
      lVar11 = lVar11 + -8;
      lVar8 = lVar8 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  if ((int)local_760 != 0) {
    puVar6 = local_c68;
    if (local_768 != (undefined8 *)0x0) {
      puVar6 = local_768;
    }
    puVar10 = puVar6 + (longlong)(int)local_760 * 5;
    for (; puVar6 != puVar10; puVar6 = puVar6 + 5) {
      local_c80 = *(undefined4 *)(puVar6 + 4);
      local_c88 = puVar6[3];
      FUN_140aa3670(*puVar6,puVar6[1],*(undefined4 *)(puVar6 + 2),0);
    }
  }
  if ((int)local_50 != 0) {
    FUN_140aa2f60(param_1);
  }
  if ((((*(int *)(param_1 + 0x4d0) == *(int *)(param_1 + 0x4fc)) && (*(int *)(param_1 + 0x520) == 0)
       ) && (*(int *)(param_1 + 0x530) == 0)) &&
     ((*(int *)(param_1 + 0x550) == 0 && (*(int *)(param_1 + 0x570) == 0)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (bVar4 != (*(char *)(param_1 + 0x37) != '\0')) {
    FUN_14288e3d0(param_1 + 0x28);
  }
  if (local_768 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140abf840 FUN_140abf840 body=1166 status=ok
// SIG undefined FUN_140abf840(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140abf840(longlong param_1)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  uint uVar13;
  longlong *plVar14;
  longlong *plVar15;
  int iVar16;
  longlong *plVar17;
  int iVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  longlong *local_a0;
  int local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  longlong local_60 [2];
  longlong *local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  local_a8 = param_1;
  FUN_1405f5e10();
  lVar5 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x148))(param_1 + -0x28);
  if (((lVar5 != 0) && (iVar4 = FUN_1428cf800(lVar5), iVar4 != 3)) &&
     (*(int *)(param_1 + 0x29e8) != *(int *)(param_1 + 0x2a14))) {
    iVar4 = *(int *)(param_1 + 0x29d8);
    plVar12 = (longlong *)0x0;
    plVar10 = *(longlong **)(param_1 + 0x29d0);
    local_50 = (longlong *)0x0;
    local_48 = 0;
    local_70 = (longlong *)0x0;
    plVar7 = (longlong *)((longlong)iVar4 & 0x1fffffffffffffff);
    if (plVar10 + iVar4 < plVar10) {
      plVar7 = plVar12;
    }
    local_a0 = plVar7;
    local_78 = plVar10;
    if (plVar7 != (longlong *)0x0) {
      do {
        plVar14 = local_70;
        lVar5 = *plVar10;
        local_68 = lVar5;
        if (lVar5 != 0) {
          local_78 = plVar10;
          TSet<TTuple<UObjectBase_const_*,FLockedViewState::FPlayerState>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FLockedViewState::FPlayerState,0>,FDefaultSetAllocator>
          ::FindId(param_1 + 0x29e0,&local_98,lVar5);
          uVar1 = local_48;
          if (local_98 == -1) {
            lVar6 = 0;
          }
          else {
            lVar6 = (longlong)local_98 * 0x30 + *(longlong *)(param_1 + 0x29e0);
          }
          plVar7 = (longlong *)0x0;
          plVar17 = (longlong *)(lVar6 + 8);
          if (lVar6 == 0) {
            plVar17 = plVar7;
          }
          if (plVar17 == (longlong *)0x0) {
            lVar6 = (longlong)(int)local_48;
            iVar4 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar4);
            if (local_48._4_4_ < iVar4) {
              TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                        (local_60,uVar1 & 0xffffffff);
              plVar12 = local_50;
            }
            plVar7 = local_60;
            if (plVar12 != (longlong *)0x0) {
              plVar7 = plVar12;
            }
            plVar7[lVar6] = lVar5;
            plVar7 = local_a0;
            plVar12 = local_50;
          }
          else {
            iVar4 = (int)plVar17[1];
            if (iVar4 != 0) {
              local_90 = *(undefined4 *)*plVar17;
              local_8c = ((undefined4 *)*plVar17)[1];
              cVar2 = FWeakObjectPtr::IsValid(&local_90);
              bVar20 = cVar2 != '\0';
              plVar10 = plVar7;
              plVar15 = plVar7;
              do {
                local_94 = (uint)plVar10;
                uVar13 = local_94;
                do {
                  plVar7 = (longlong *)((longlong)plVar7 + 1);
                  uVar13 = uVar13 + 1;
                  plVar10 = (longlong *)(ulonglong)uVar13;
                  if ((longlong)iVar4 <= (longlong)plVar7) break;
                  local_88 = *(undefined4 *)(*plVar17 + (longlong)plVar7 * 8);
                  local_84 = *(undefined4 *)(*plVar17 + 4 + (longlong)plVar7 * 8);
                  cVar2 = FWeakObjectPtr::IsValid(&local_88);
                } while (bVar20 == (cVar2 != '\0'));
                iVar11 = uVar13 - local_94;
                if (bVar20 != false) {
                  uVar13 = (uint)plVar15;
                  if (uVar13 != local_94) {
                    _guard_xfg_dispatch_icall_nop
                              ((void *)(*plVar17 + (longlong)(int)uVar13 * 8),
                               (void *)(*plVar17 + (longlong)(int)local_94 * 8),
                               (longlong)iVar11 << 3);
                  }
                  plVar15 = (longlong *)(ulonglong)(uVar13 + iVar11);
                }
                bVar20 = (bool)(bVar20 ^ 1);
              } while ((longlong)plVar7 < (longlong)iVar4);
              *(int *)(plVar17 + 1) = (int)plVar15;
              plVar7 = local_a0;
              plVar12 = local_50;
              lVar5 = local_68;
              plVar10 = local_78;
              plVar14 = local_70;
              param_1 = local_a8;
              if ((int)plVar15 != 0) goto LAB_140abfb02;
            }
            local_80 = 0;
            if (((plVar17[3] != 0) &&
                (lVar6 = FWeakObjectPtr::Get(plVar17 + 2), plVar12 = local_50, lVar6 != 0)) &&
               (lVar6 = UObject::FindFunction(lVar6,plVar17[3]), plVar12 = local_50, lVar6 != 0)) {
              plVar7 = (longlong *)FWeakObjectPtr::Get(plVar17 + 2);
              uVar8 = FUN_14178ac60(plVar7,plVar17[3]);
              (**(code **)(*plVar7 + 0x208))(plVar7,uVar8,0);
              plVar12 = local_50;
            }
            uVar1 = local_48;
            lVar6 = (longlong)(int)local_48;
            iVar4 = (int)local_48 + 1;
            local_48 = CONCAT44(local_48._4_4_,iVar4);
            if (local_48._4_4_ < iVar4) {
              TArray<FRHITexture_*,TInlineAllocator<2,FDefaultAllocator>_>::ResizeGrow
                        (local_60,uVar1 & 0xffffffff);
              plVar12 = local_50;
            }
            plVar7 = local_60;
            if (plVar12 != (longlong *)0x0) {
              plVar7 = plVar12;
            }
            plVar7[lVar6] = lVar5;
            plVar7 = local_a0;
            plVar12 = local_50;
            param_1 = local_a8;
          }
        }
LAB_140abfb02:
        plVar10 = plVar10 + 1;
        local_70 = (longlong *)((longlong)plVar14 + 1);
      } while (local_70 != plVar7);
      iVar4 = *(int *)(param_1 + 0x29d8);
      local_78 = plVar10;
    }
    plVar10 = (longlong *)0x0;
    if (iVar4 != 0) {
      plVar17 = (longlong *)0x0;
      plVar14 = (longlong *)0x0;
      plVar7 = local_60;
      if (plVar12 != (longlong *)0x0) {
        plVar7 = plVar10;
      }
      plVar7 = (longlong *)((ulonglong)plVar7 | (ulonglong)plVar12);
      plVar15 = plVar7 + (int)local_48;
      for (; plVar7 != plVar15; plVar7 = plVar7 + 1) {
        if (*plVar7 == **(longlong **)(param_1 + 0x29d0)) {
          bVar19 = 0;
          goto LAB_140abfbc4;
        }
      }
      bVar19 = 1;
      plVar14 = plVar10;
      plVar17 = plVar10;
LAB_140abfbc4:
      do {
        lVar5 = (longlong)iVar4;
        iVar11 = (int)plVar14;
        plVar10 = (longlong *)((longlong)plVar10 + 1);
        plVar14 = (longlong *)(ulonglong)(iVar11 + 1);
        if ((longlong)plVar10 < lVar5) {
          plVar7 = local_60;
          if (plVar12 != (longlong *)0x0) {
            plVar7 = plVar12;
          }
          plVar15 = (longlong *)(*(longlong *)(param_1 + 0x29d0) + (longlong)plVar10 * 8);
          do {
            for (plVar9 = plVar7; plVar9 != plVar7 + (int)local_48; plVar9 = plVar9 + 1) {
              if (*plVar9 == *plVar15) {
                bVar3 = 0;
                goto LAB_140abfc14;
              }
            }
            bVar3 = 1;
LAB_140abfc14:
            if (bVar19 != bVar3) break;
            plVar14 = (longlong *)(ulonglong)((int)plVar14 + 1);
            plVar10 = (longlong *)((longlong)plVar10 + 1);
            plVar15 = plVar15 + 1;
          } while ((longlong)plVar10 < lVar5);
        }
        iVar18 = (int)plVar14 - iVar11;
        if (bVar19 != 0) {
          iVar16 = (int)plVar17;
          if (iVar16 != iVar11) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*(longlong *)(local_a8 + 0x29d0) + (longlong)iVar16 * 8),
                       (void *)(*(longlong *)(local_a8 + 0x29d0) + (longlong)iVar11 * 8),
                       (longlong)iVar18 << 3);
            plVar12 = local_50;
          }
          plVar17 = (longlong *)(ulonglong)(uint)(iVar16 + iVar18);
        }
        bVar19 = bVar19 ^ 1;
        param_1 = local_a8;
      } while ((longlong)plVar10 < lVar5);
      *(int *)(local_a8 + 0x29d8) = (int)plVar17;
    }
    if (plVar12 != (longlong *)0x0) {
      FMemory::Free(plVar12);
    }
  }
  return;
}



// FUNCTION 140abfce0 FUN_140abfce0 body=2485 status=ok
// SIG undefined FUN_140abfce0(void)

void FUN_140abfce0(longlong param_1,float param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  bool bVar7;
  longlong *plVar8;
  longlong *plVar9;
  char cVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  uint *puVar19;
  longlong lVar20;
  longlong lVar21;
  longlong *plVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  int local_1f8;
  uint uStack_1f4;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  undefined8 uStack_1d0;
  uint *puStack_1c8;
  undefined1 auStack_1c0 [16];
  longlong *local_1b0;
  undefined8 uStack_1a8;
  uint *puStack_1a0;
  undefined1 auStack_198 [16];
  undefined8 uStack_188;
  longlong *local_178;
  undefined8 uStack_170;
  uint *local_168;
  undefined8 uStack_160;
  undefined1 local_158 [16];
  longlong *local_148;
  undefined2 local_140;
  longlong *local_138;
  undefined8 uStack_130;
  uint *local_128;
  undefined8 uStack_120;
  undefined1 local_118 [16];
  longlong *local_108;
  undefined2 local_100;
  longlong *local_f8;
  undefined8 uStack_f0;
  uint *local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [16];
  longlong *local_c8;
  undefined2 local_c0;
  undefined1 local_98 [16];
  
  local_178 = (longlong *)(param_1 + 0x4c8);
  uStack_1f4 = 1;
  iVar4 = *(int *)(param_1 + 0x4f0);
  puStack_1c8 = (uint *)(param_1 + 0x4d8);
  local_1f8 = 0;
  iStack_1e4 = 0;
  iStack_1e0 = 0;
  if (iVar4 != 0) {
    puVar19 = *(uint **)(param_1 + 0x4e8);
    if (*(uint **)(param_1 + 0x4e8) == (uint *)0x0) {
      puVar19 = puStack_1c8;
    }
    uVar5 = *puVar19;
    local_1f8 = 0;
    iStack_1e0 = 0;
    while (uVar5 == 0) {
      lVar15 = (longlong)local_1f8;
      iStack_1e0 = iStack_1e0 + 0x20;
      iVar14 = local_1f8 + 1;
      bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
      local_1f8 = iVar14;
      if (bVar7) goto LAB_140abfdc5;
      uVar5 = puVar19[lVar15 + 1];
    }
    uStack_1f4 = uVar5 - 1 & uVar5 ^ uVar5;
    iVar14 = 0x1f;
    if (uStack_1f4 != 0) {
      for (; uStack_1f4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uStack_1f4 == 0) {
      iVar14 = 0x20;
    }
    else {
      iVar14 = 0x1f - iVar14;
    }
    iStack_1e4 = (iStack_1e0 - iVar14) + 0x1f;
    if (iVar4 < iStack_1e4) {
LAB_140abfdc5:
      iStack_1e4 = iVar4;
    }
  }
  uStack_160 = CONCAT44(iStack_1e4,0xffffffff);
  auStack_1c0._8_4_ = iStack_1e0;
  auStack_1c0._0_8_ = uStack_160;
  auStack_1c0._12_4_ = uStack_1dc;
  uStack_1d0 = CONCAT44(uStack_1f4,local_1f8);
  local_140 = 0;
  uStack_188._0_4_ = SUB84(local_178,0);
  uStack_188._4_4_ = (undefined4)((ulonglong)local_178 >> 0x20);
  local_158._8_4_ = (undefined4)uStack_188;
  local_158._0_8_ = auStack_1c0._8_8_;
  local_158._12_4_ = uStack_188._4_4_;
  uStack_188 = local_178;
  uStack_170 = uStack_1d0;
  local_168 = puStack_1c8;
  local_148 = local_178;
  if (iStack_1e4 < *(int *)(param_1 + 0x4f0)) {
    do {
      lVar15 = (longlong)iStack_1e4 * 0x68;
      if ((*(byte *)(*(longlong *)(lVar15 + *local_178) + 0x91) & 0x40) != 0) {
        uStack_1f4 = 1;
        local_1b0 = (longlong *)(*local_178 + 8 + lVar15);
        iVar4 = (int)local_1b0[5];
        puStack_1a0 = (uint *)(local_1b0 + 2);
        local_1f8 = 0;
        iStack_1e4 = 0;
        iStack_1e0 = 0;
        if (iVar4 != 0) {
          puVar19 = (uint *)local_1b0[4];
          if ((uint *)local_1b0[4] == (uint *)0x0) {
            puVar19 = puStack_1a0;
          }
          uVar5 = *puVar19;
          local_1f8 = 0;
          iStack_1e0 = 0;
          while (uVar5 == 0) {
            lVar16 = (longlong)local_1f8;
            iStack_1e0 = iStack_1e0 + 0x20;
            iVar14 = local_1f8 + 1;
            bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
            local_1f8 = iVar14;
            if (bVar7) goto LAB_140abff75;
            uVar5 = puVar19[lVar16 + 1];
          }
          uStack_1f4 = uVar5 - 1 & uVar5 ^ uVar5;
          iVar14 = 0x1f;
          if (uStack_1f4 != 0) {
            for (; uStack_1f4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
            }
          }
          if (uStack_1f4 == 0) {
            iVar14 = 0x20;
          }
          else {
            iVar14 = 0x1f - iVar14;
          }
          iStack_1e4 = (iStack_1e0 - iVar14) + 0x1f;
          if (iVar4 < iStack_1e4) {
LAB_140abff75:
            iStack_1e4 = iVar4;
          }
        }
        uStack_e0 = CONCAT44(iStack_1e4,0xffffffff);
        auStack_198._8_4_ = iStack_1e0;
        auStack_198._0_8_ = uStack_e0;
        auStack_198._12_4_ = uStack_1dc;
        uStack_1a8 = CONCAT44(uStack_1f4,local_1f8);
        local_c0 = 0;
        local_98._8_4_ = SUB84(local_1b0,0);
        local_98._12_4_ = (undefined4)((ulonglong)local_1b0 >> 0x20);
        local_d8._8_4_ = local_98._8_4_;
        local_d8._0_8_ = auStack_198._8_8_;
        local_d8._12_4_ = local_98._12_4_;
        local_98._0_8_ = auStack_198._8_8_;
        plVar22 = local_178;
        local_f8 = local_1b0;
        uStack_f0 = uStack_1a8;
        local_e8 = puStack_1a0;
        local_c8 = local_1b0;
        if (iStack_1e4 < iVar4) {
          do {
            plVar9 = local_f8;
            lVar21 = (longlong)iStack_1e4 * 0x98;
            lVar16 = *local_f8;
            if (((0.0 < *(float *)(lVar21 + 0x5c + lVar16)) &&
                (fVar23 = *(float *)(lVar21 + 0x78 + lVar16), 0.0 <= fVar23)) &&
               (fVar23 = fVar23 - param_2, *(float *)(lVar21 + 0x78 + lVar16) = fVar23,
               fVar23 <= 0.0)) {
              if (*(char *)(lVar21 + 0x88 + lVar16) != '\0') {
                *(undefined8 *)(lVar21 + 0x80 + lVar16) = 0;
                fVar23 = -1.0;
                local_1f8 = 0;
                uStack_1f4 = 1;
                *(undefined1 *)(lVar21 + 0x88 + *local_f8) = 0;
                iStack_1e4 = 0;
                iStack_1e0 = 0;
                plVar17 = (longlong *)(*local_f8 + 8 + lVar21);
                iVar4 = (int)plVar17[5];
                puStack_1c8 = (uint *)(plVar17 + 2);
                if (iVar4 != 0) {
                  puVar19 = (uint *)plVar17[4];
                  if ((uint *)plVar17[4] == (uint *)0x0) {
                    puVar19 = puStack_1c8;
                  }
                  uVar5 = *puVar19;
                  while (uVar5 == 0) {
                    lVar16 = (longlong)local_1f8;
                    iStack_1e0 = iStack_1e0 + 0x20;
                    iVar14 = local_1f8 + 1;
                    bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
                    local_1f8 = iVar14;
                    if (bVar7) goto LAB_140ac0125;
                    uVar5 = puVar19[lVar16 + 1];
                  }
                  uStack_1f4 = uVar5 - 1 & uVar5 ^ uVar5;
                  iVar14 = 0x1f;
                  if (uStack_1f4 != 0) {
                    for (; uStack_1f4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                    }
                  }
                  if (uStack_1f4 == 0) {
                    iVar14 = 0x20;
                  }
                  else {
                    iVar14 = 0x1f - iVar14;
                  }
                  iStack_1e4 = (iStack_1e0 - iVar14) + 0x1f;
                  if (iVar4 < iStack_1e4) {
LAB_140ac0125:
                    iStack_1e4 = iVar4;
                  }
                }
                uStack_1d0 = CONCAT44(uStack_1f4,local_1f8);
                auStack_198._4_4_ = iStack_1e4;
                auStack_198._0_4_ = 0xffffffff;
                auStack_198._8_4_ = iStack_1e0;
                auStack_1c0._8_4_ = iStack_1e0;
                auStack_1c0._0_8_ = auStack_198._0_8_;
                local_1b0 = plVar17;
                uStack_1a8 = uStack_1d0;
                puStack_1a0 = puStack_1c8;
                if (iStack_1e4 < iVar4) {
                  do {
                    lVar16 = *(longlong *)(*plVar17 + (longlong)iStack_1e4 * 0x28);
                    lVar12 = *(longlong *)(lVar16 + 0x228);
                    if ((lVar12 != 0) && (fVar23 < *(float *)(lVar16 + 0x230))) {
                      *(longlong *)(*plVar9 + 0x80 + lVar21) = lVar12;
                      fVar23 = *(float *)(*(longlong *)(*plVar17 + (longlong)iStack_1e4 * 0x28) +
                                         0x230);
                    }
                    auStack_1c0._0_4_ = auStack_1c0._0_4_ & ~uStack_1d0._4_4_;
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_1d0);
                    iStack_1e4 = auStack_1c0._4_4_;
                  } while ((int)auStack_1c0._4_4_ < (int)puStack_1c8[6]);
                }
              }
              iVar4 = *(int *)(param_3 + 0x708);
              lVar16 = *plVar9;
              lVar12 = *plVar22;
              *(int *)(param_3 + 0x708) = iVar4 + 1;
              if (*(int *)(param_3 + 0x70c) < iVar4 + 1) {
                FUN_140aba390(param_3,iVar4);
              }
              uVar3 = *(undefined1 *)(lVar16 + 0x89 + lVar21);
              uVar13 = *(undefined8 *)(lVar16 + 0x80 + lVar21);
              fVar23 = 0.0;
              uStack_1f4 = 1;
              lVar20 = *(longlong *)(param_3 + 0x700);
              if (*(longlong *)(param_3 + 0x700) == 0) {
                lVar20 = param_3;
              }
              uVar6 = *(undefined8 *)(lVar16 + lVar21);
              lVar18 = (longlong)iVar4 * 0x38;
              iStack_1e4 = 0;
              iStack_1e0 = 0;
              *(undefined8 *)(lVar20 + lVar18) = *(undefined8 *)(lVar12 + lVar15);
              *(undefined8 *)(lVar20 + 8 + lVar18) = uVar6;
              puVar1 = (undefined8 *)(lVar16 + 0x58 + lVar21);
              uVar6 = puVar1[1];
              local_1f8 = 0;
              puVar2 = (undefined8 *)(lVar20 + 0x10 + lVar18);
              *puVar2 = *puVar1;
              puVar2[1] = uVar6;
              uVar11 = *(undefined4 *)(lVar16 + 0x68 + lVar21);
              *(undefined8 *)(lVar20 + 0x28 + lVar18) = uVar13;
              *(undefined1 *)(lVar20 + 0x30 + lVar18) = uVar3;
              *(undefined4 *)(lVar20 + 0x20 + lVar18) = uVar11;
              plVar17 = (longlong *)(*plVar9 + 8 + lVar21);
              puStack_1a0 = (uint *)(plVar17 + 2);
              plVar22 = *(longlong **)(*plVar22 + lVar15);
              *(undefined4 *)(plVar17 + 0xd) = 0x7f7fffff;
              *(undefined4 *)((longlong)plVar17 + 0x6c) = 0x7f7fffff;
              *(undefined4 *)((longlong)plVar17 + 0x54) = 0;
              *(undefined4 *)(plVar17 + 0xc) = 0xbf800000;
              *(undefined4 *)((longlong)plVar17 + 0x5c) = 0xbf800000;
              *(undefined4 *)(plVar17 + 0xb) = 0xbf800000;
              *(undefined1 *)((longlong)plVar17 + 0x81) = 0;
              iVar4 = (int)plVar17[5];
              if (iVar4 != 0) {
                puVar19 = (uint *)plVar17[4];
                if ((uint *)plVar17[4] == (uint *)0x0) {
                  puVar19 = puStack_1a0;
                }
                uVar5 = *puVar19;
                local_1f8 = 0;
                iStack_1e0 = 0;
                while (uVar5 == 0) {
                  lVar16 = (longlong)local_1f8;
                  iStack_1e0 = iStack_1e0 + 0x20;
                  iVar14 = local_1f8 + 1;
                  bVar7 = (int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_1f8;
                  local_1f8 = iVar14;
                  if (bVar7) goto LAB_140ac0365;
                  uVar5 = puVar19[lVar16 + 1];
                }
                uStack_1f4 = uVar5 - 1 & uVar5 ^ uVar5;
                iVar14 = 0x1f;
                if (uStack_1f4 != 0) {
                  for (; uStack_1f4 >> iVar14 == 0; iVar14 = iVar14 + -1) {
                  }
                }
                if (uStack_1f4 == 0) {
                  iVar14 = 0x20;
                }
                else {
                  iVar14 = 0x1f - iVar14;
                }
                iStack_1e4 = (iStack_1e0 - iVar14) + 0x1f;
                if (iVar4 < iStack_1e4) {
LAB_140ac0365:
                  iStack_1e4 = iVar4;
                }
              }
              uStack_120 = CONCAT44(iStack_1e4,0xffffffff);
              auStack_198._8_4_ = iStack_1e0;
              auStack_198._0_8_ = uStack_120;
              uStack_1a8 = CONCAT44(uStack_1f4,local_1f8);
              local_100 = 0;
              local_98._8_4_ = SUB84(plVar17,0);
              local_98._12_4_ = (undefined4)((ulonglong)plVar17 >> 0x20);
              local_118._8_4_ = local_98._8_4_;
              local_118._0_8_ = auStack_198._8_8_;
              local_118._12_4_ = local_98._12_4_;
              local_98._0_8_ = auStack_198._8_8_;
              local_1b0 = plVar17;
              local_138 = plVar17;
              uStack_130 = uStack_1a8;
              local_128 = puStack_1a0;
              local_108 = plVar17;
              if (iStack_1e4 < iVar4) {
                do {
                  plVar8 = local_138;
                  lVar16 = (longlong)iStack_1e4;
                  if (*(char *)(*(longlong *)(*local_138 + lVar16 * 0x28) + 0x2cc) == '\0') {
LAB_140ac0566:
                    lVar12 = *(longlong *)(*(longlong *)(*plVar8 + lVar16 * 0x28) + 0x2c0);
                    if (lVar12 == 0) goto LAB_140ac045f;
                    uVar13 = FUN_142df3580(plVar22);
                    uVar11 = FUN_142df3570(lVar12,uVar13);
                    cVar10 = FUN_142d1f280(*(longlong *)(*plVar8 + lVar16 * 0x28) + 0x2c8,uVar11);
                    if (cVar10 != '\0') goto LAB_140ac045f;
                    *(undefined1 *)(*plVar8 + 8 + lVar16 * 0x28) = 0;
                  }
                  else {
                    if (plVar22 == (longlong *)0x0) {
LAB_140ac044e:
                      bVar7 = false;
                    }
                    else {
                      lVar12 = FUN_1429d7ab0();
                      if ((*(int *)(plVar22[2] + 0x90) < *(int *)(lVar12 + 0x90)) ||
                         (*(longlong *)
                           (*(longlong *)(plVar22[2] + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
                           ) != lVar12 + 0x88)) {
                        bVar7 = false;
                      }
                      else {
                        bVar7 = true;
                      }
                      if ((!bVar7) ||
                         (cVar10 = (**(code **)(*plVar22 + 0x780))(plVar22), cVar10 == '\0'))
                      goto LAB_140ac044e;
                      bVar7 = true;
                    }
                    if (!bVar7) goto LAB_140ac0566;
                    *(undefined1 *)((longlong)plVar17 + 0x81) = 1;
LAB_140ac045f:
                    lVar12 = *(longlong *)(*(longlong *)(*plVar8 + lVar16 * 0x28) + 0x238);
                    fVar24 = *(float *)(lVar12 + 0x80);
                    fVar25 = *(float *)(lVar12 + 0x84);
                    if (fVar24 <= 0.0) {
                      fVar24 = 0.0;
                    }
                    if (fVar25 <= 0.1) {
                      fVar25 = 0.1;
                    }
                    if (*(float *)(plVar17 + 0xd) <= fVar24) {
                      fVar24 = *(float *)(plVar17 + 0xd);
                    }
                    *(float *)(plVar17 + 0xd) = fVar24;
                    fVar24 = fVar25;
                    if (*(float *)((longlong)plVar17 + 0x6c) <= fVar25) {
                      fVar24 = *(float *)((longlong)plVar17 + 0x6c);
                    }
                    *(float *)((longlong)plVar17 + 0x6c) = fVar24;
                    fVar25 = *(float *)(*plVar8 + 0xc + lVar16 * 0x28) / fVar25;
                    if (fVar23 < fVar25) {
                      fVar23 = fVar25;
                    }
                    fVar24 = *(float *)(*plVar8 + 0x10 + lVar16 * 0x28);
                    if (fVar24 <= *(float *)(plVar17 + 0xb)) {
                      fVar24 = *(float *)(plVar17 + 0xb);
                    }
                    *(float *)(plVar17 + 0xb) = fVar24;
                    fVar24 = *(float *)(*plVar8 + 0x14 + lVar16 * 0x28);
                    if (fVar24 <= *(float *)((longlong)plVar17 + 0x5c)) {
                      fVar24 = *(float *)((longlong)plVar17 + 0x5c);
                    }
                    *(float *)((longlong)plVar17 + 0x5c) = fVar24;
                    fVar24 = *(float *)(*plVar8 + 0x18 + lVar16 * 0x28);
                    if (fVar24 <= *(float *)(plVar17 + 0xc)) {
                      fVar24 = *(float *)(plVar17 + 0xc);
                    }
                    *(float *)(plVar17 + 0xc) = fVar24;
                    *(undefined1 *)(*plVar8 + 8 + lVar16 * 0x28) = 1;
                  }
                  uStack_120 = CONCAT44(uStack_120._4_4_,(uint)uStack_120 & ~uStack_130._4_4_);
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_130);
                  iStack_1e4 = uStack_120._4_4_;
                } while (uStack_120._4_4_ < (int)local_128[6]);
                if (((char)local_100 != '\0') && (local_100._1_1_ != '\0')) {
                  TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
                  ::ConditionalRehash(local_108,
                                      (int)local_108[1] - *(int *)((longlong)local_108 + 0x34),1);
                }
              }
              *(float *)((longlong)plVar17 + 0x54) = fVar23 * *(float *)((longlong)plVar17 + 0x6c);
              lVar16 = *plVar9;
              fVar23 = *(float *)(lVar21 + 0x74 + lVar16);
              plVar22 = local_178;
              if (fVar23 <= 0.0) {
                *(undefined4 *)(lVar21 + 0x78 + lVar16) = 0;
              }
              else {
                *(float *)(lVar21 + 0x78 + lVar16) = fVar23 + *(float *)(lVar21 + 0x78 + lVar16);
              }
            }
            uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)uStack_e0 & ~uStack_f0._4_4_);
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_f0);
            iStack_1e4 = uStack_e0._4_4_;
          } while (uStack_e0._4_4_ < (int)local_e8[6]);
          if (((char)local_c0 != '\0') && (local_c0._1_1_ != '\0')) {
            FUN_140aa6d40(local_c8,(int)local_c8[1] - *(int *)((longlong)local_c8 + 0x34),1);
          }
        }
      }
      uStack_160 = CONCAT44(uStack_160._4_4_,(uint)uStack_160 & ~uStack_170._4_4_);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_170);
      iStack_1e4 = uStack_160._4_4_;
    } while (uStack_160._4_4_ < (int)local_168[6]);
    if (((char)local_140 != '\0') && (local_140._1_1_ != '\0')) {
      TSet<TTuple<UFlareSimulatedSector_*,SectorVariation>,TDefaultMapHashableKeyFuncs<UFlareSimulatedSector_*,SectorVariation,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_148,(int)local_148[1] - *(int *)((longlong)local_148 + 0x34),1);
    }
  }
  return;
}



// FUNCTION 140ac06a0 FUN_140ac06a0 body=663 status=ok
// SIG undefined FUN_140ac06a0(void)

void FUN_140ac06a0(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *plVar9;
  float fVar10;
  longlong *local_78;
  int local_70;
  longlong local_68;
  longlong lStack_60;
  float local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  _Src = *(void **)(param_1 + 0x528);
  local_70 = *(int *)(param_1 + 0x530);
  lVar6 = (longlong)local_70;
  plVar5 = (longlong *)0x0;
  local_78 = (longlong *)0x0;
  plVar9 = plVar5;
  if (local_70 != 0) {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(&local_78,local_70,0);
    plVar9 = local_78;
    _guard_xfg_dispatch_icall_nop(local_78,_Src,lVar6 << 3);
  }
  iVar3 = local_70;
  *(undefined4 *)(param_1 + 0x530) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x534)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo((undefined8 *)(param_1 + 0x528),0);
  }
  plVar8 = (longlong *)((ulonglong)((longlong)(plVar9 + iVar3) + (7 - (longlong)plVar9)) >> 3);
  if (plVar9 + iVar3 < plVar9) {
    plVar8 = plVar5;
  }
  plVar7 = plVar9;
  if (plVar8 != (longlong *)0x0) {
    do {
      lVar6 = *plVar7;
      lStack_60 = 0;
      local_58 = -1.0;
      uStack_50 = 0;
      local_48 = 0;
      local_68 = lVar6;
      if (lVar6 != 0) {
        lStack_60 = *(longlong *)(lVar6 + 0x238);
        local_58 = (float)FUN_140aae390(lVar6);
      }
      FUN_140ac0940(lVar6,param_2,&local_68);
      if ((lStack_60 == *(longlong *)(lVar6 + 0x238)) &&
         (0.0 <= local_58 == (bool)*(char *)(lVar6 + 0x240))) {
        if (*(char *)(lVar6 + 0x240) != '\0') {
          fVar10 = (float)FUN_140aae390();
          if ((fVar10 != 0.0) && ((local_58 == 0.0 || (fVar10 < local_58)))) {
            iVar3 = *(int *)(param_3 + 0x508);
            lVar6 = (longlong)iVar3;
            *(int *)(param_3 + 0x508) = iVar3 + 1;
            if (*(int *)(param_3 + 0x50c) < iVar3 + 1) {
              FUN_140aba550(param_3,iVar3);
            }
            lVar4 = *(longlong *)(param_3 + 0x500);
            if (*(longlong *)(param_3 + 0x500) == 0) {
              lVar4 = param_3;
            }
            plVar1 = (longlong *)(lVar4 + lVar6 * 0x28);
            *plVar1 = local_68;
            plVar1[1] = lStack_60;
            puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28);
            *puVar2 = CONCAT44(uStack_54,local_58);
            puVar2[1] = uStack_50;
            *(ulonglong *)(lVar4 + 0x20 + lVar6 * 0x28) = CONCAT44(uStack_44,local_48);
          }
        }
      }
      else {
        iVar3 = *(int *)(param_3 + 0x508);
        lVar6 = (longlong)iVar3;
        *(int *)(param_3 + 0x508) = iVar3 + 1;
        if (*(int *)(param_3 + 0x50c) < iVar3 + 1) {
          FUN_140aba550(param_3,iVar3);
        }
        lVar4 = *(longlong *)(param_3 + 0x500);
        if (*(longlong *)(param_3 + 0x500) == 0) {
          lVar4 = param_3;
        }
        plVar1 = (longlong *)(lVar4 + lVar6 * 0x28);
        *plVar1 = local_68;
        plVar1[1] = lStack_60;
        puVar2 = (undefined8 *)(lVar4 + 0x10 + lVar6 * 0x28);
        *puVar2 = CONCAT44(uStack_54,local_58);
        puVar2[1] = uStack_50;
        *(ulonglong *)(lVar4 + 0x20 + lVar6 * 0x28) = CONCAT44(uStack_44,local_48);
      }
      plVar5 = (longlong *)((longlong)plVar5 + 1);
      plVar7 = plVar7 + 1;
    } while (plVar5 != plVar8);
  }
  if (plVar9 != (longlong *)0x0) {
    FMemory::Free(plVar9);
  }
  return;
}



// FUNCTION 140ac0940 FUN_140ac0940 body=1151 status=ok
// SIG undefined FUN_140ac0940(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac0940(longlong param_1,undefined4 param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  undefined4 uVar6;
  bool bVar7;
  ulonglong uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong *puVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  longlong lVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  uint *puVar21;
  byte bVar22;
  float fVar23;
  int local_res8 [2];
  undefined4 local_res10 [2];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  uint uStack_90;
  int iStack_8c;
  uint local_88;
  int iStack_84;
  longlong local_80;
  longlong local_78;
  undefined4 *local_70;
  longlong local_68;
  undefined8 uStack_60;
  uint *puStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  uint uStack_48;
  int iStack_44;
  
  if (*(char *)(param_1 + 0x184) == '\x01') {
    return;
  }
  uVar18 = *(ulonglong *)(param_3 + 8);
  uVar19 = 0;
  bVar7 = false;
  lVar4 = *(longlong *)(param_1 + 0x248);
  local_70 = local_res10;
  bVar22 = 0;
  local_res10[0] = param_2;
  local_80 = param_1;
  local_78 = param_3;
  bVar5 = false;
  if ((uVar18 == 0) || (*(longlong *)(param_1 + 0x388) == 0)) {
LAB_140ac0af3:
    bVar7 = bVar5;
    lVar1 = param_1 + 0x3b0;
    puStack_58 = (uint *)(param_1 + 0x5c0);
    iVar3 = *(int *)(param_1 + 0x5d0);
    local_a8 = 0x100000000;
    local_98._4_4_ = 0;
    uStack_90 = 0;
    if (iVar3 != 0) {
      puVar21 = *(uint **)(param_1 + 0x5c8);
      if (*(uint **)(param_1 + 0x5c8) == (uint *)0x0) {
        puVar21 = puStack_58;
      }
      uVar11 = *puVar21;
      uVar18 = uVar19;
      uVar13 = uVar19;
      while (uVar11 == 0) {
        iVar12 = (int)uVar18;
        uStack_90 = (int)uVar13 + 0x20;
        uVar13 = (ulonglong)uStack_90;
        uVar18 = (ulonglong)(iVar12 + 1U);
        uVar8 = (ulonglong)local_a8 >> 0x20;
        local_a8 = CONCAT44((int)uVar8,iVar12 + 1U);
        if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar12) goto LAB_140ac0b9f;
        uVar11 = puVar21[(longlong)iVar12 + 1];
      }
      uVar11 = -uVar11 & uVar11;
      iVar12 = 0x1f;
      if (uVar11 != 0) {
        for (; uVar11 >> iVar12 == 0; iVar12 = iVar12 + -1) {
        }
      }
      local_a8 = CONCAT44(uVar11,(undefined4)local_a8);
      if (uVar11 == 0) {
        iVar12 = 0x20;
      }
      else {
        iVar12 = 0x1f - iVar12;
      }
      local_98._4_4_ = (uStack_90 - iVar12) + 0x1f;
      if (iVar3 < local_98._4_4_) {
LAB_140ac0b9f:
        local_98._4_4_ = iVar3;
      }
    }
    uStack_50 = 0xffffffff;
    iStack_4c = local_98._4_4_;
    uStack_48 = uStack_90;
    iStack_44 = iStack_8c;
    uStack_60 = local_a8;
    uStack_a0 = local_a8;
    local_88 = uStack_90;
    iStack_84 = iStack_8c;
    uStack_90 = 0xffffffff;
    iStack_8c = local_98._4_4_;
    bVar5 = local_98._4_4_ < iVar3;
    local_68 = lVar1;
    local_98 = puStack_58;
    if (bVar5) {
      do {
        lVar17 = *(longlong *)(param_1 + 0x5b0);
        lVar20 = lVar17;
        if (lVar17 == 0) {
          lVar20 = lVar1;
        }
        if (lVar17 == 0) {
          lVar17 = lVar1;
        }
        bVar10 = FUN_140aa16f0(&local_80,*(undefined8 *)(lVar17 + (longlong)iStack_8c * 0x40),
                               lVar20 + 8 + (longlong)iStack_8c * 0x40,0);
        bVar22 = bVar22 | bVar10;
        uStack_90 = uStack_90 & ~uStack_a0._4_4_;
        FUN_1406e9690(&uStack_a0);
      } while (iStack_8c < (int)local_98[4]);
      if (bVar22 != 0) goto LAB_140ac0d23;
    }
    FUN_140aa9d20(lVar1,local_res8,*(undefined8 *)(param_1 + 0x238));
    uVar18 = uVar19;
    if (local_res8[0] != -1) {
      lVar17 = *(longlong *)(param_1 + 0x5b0);
      if (*(longlong *)(param_1 + 0x5b0) == 0) {
        lVar17 = lVar1;
      }
      uVar18 = lVar17 + (longlong)local_res8[0] * 0x40;
    }
    uVar13 = uVar18 + 8;
    if (uVar18 == 0) {
      uVar13 = uVar19;
    }
    if (uVar13 == 0) {
      cVar9 = FUN_140aa16f0(&local_80,0,0,0);
      if (cVar9 != '\0') {
        bVar22 = 1;
        lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
        if (lVar1 == 0) {
          local_80 = _DAT_1468b5d90;
          uVar6 = DAT_1468b5d98;
        }
        else {
          local_80 = *(longlong *)(lVar1 + 0x220);
          uVar6 = *(undefined4 *)(lVar1 + 0x228);
        }
        local_78 = CONCAT44(local_78._4_4_,uVar6);
        *(longlong *)(param_1 + 600) = local_80;
        *(undefined4 *)(param_1 + 0x260) = uVar6;
      }
    }
  }
  else {
    cVar9 = FUN_140aa16f0(&local_80,*(longlong *)(param_1 + 0x388),0,1);
    if (cVar9 == '\0') {
      *(undefined8 *)(param_1 + 0x388) = 0;
      *(undefined8 *)(param_1 + 0x3a0) = 0;
      bVar5 = true;
      goto LAB_140ac0af3;
    }
    bVar22 = 1;
    *(undefined8 *)(param_1 + 600) = *(undefined8 *)(param_1 + 0x390);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(param_1 + 0x398);
    if ((uVar18 != *(ulonglong *)(param_3 + 8)) ||
       (local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98),
       lVar4 != *(longlong *)(param_1 + 0x248))) {
      plVar15 = *(longlong **)(uVar18 + 0x90);
      plVar2 = plVar15 + (longlong)*(int *)(uVar18 + 0x98) * 3;
      for (; plVar15 != plVar2; plVar15 = plVar15 + 3) {
        if (*plVar15 == *(longlong *)(param_1 + 0x388)) {
          uVar19 = *(ulonglong *)(param_1 + 0x188);
          if (plVar15[1] != 0) {
            uVar19 = plVar15[1];
          }
          break;
        }
      }
      local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98);
      if ((*(ulonglong *)(param_3 + 8) == uVar19) &&
         (local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98),
         *(longlong *)(param_1 + 0x248) == 0)) {
        if (*(char *)(uVar19 + 0x30) != '\x02') {
          puVar14 = *(ulonglong **)(param_1 + 400);
          puVar16 = puVar14 + (longlong)*(int *)(param_1 + 0x198) * 0x1f;
          for (; puVar14 != puVar16; puVar14 = puVar14 + 0x1f) {
            if (*puVar14 == uVar19) {
              if (puVar14 != (ulonglong *)0x0) {
                fVar23 = *(float *)(puVar14 + 2);
                if (fVar23 < 0.0) {
                  fVar23 = *(float *)(uVar19 + 0x8c);
                }
                goto LAB_140ac0aa9;
              }
              break;
            }
          }
        }
        fVar23 = -1.0;
LAB_140ac0aa9:
        *(float *)(param_3 + 0x10) = fVar23;
        bVar7 = true;
        *(undefined8 *)(param_1 + 0x388) = 0;
        *(undefined8 *)(param_1 + 0x3a0) = 0;
        local_98 = (uint *)CONCAT44(local_98._4_4_,(undefined4)local_98);
      }
    }
  }
LAB_140ac0d23:
  if (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_3 + 8)) {
    if (*(longlong *)(param_1 + 0x248) != lVar4) {
      TBaseMulticastDelegate<void>::Broadcast(param_1 + 0x208);
    }
    if (*(char *)(param_1 + 0x604) == '\0') goto LAB_140ac0d78;
    if (bVar22 != 0) {
      if (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_3 + 8)) {
        FUN_140ac1c00(param_1);
      }
      goto LAB_140ac0d78;
    }
  }
  else {
LAB_140ac0d78:
    if (bVar22 != 0) goto LAB_140ac0d8c;
  }
  if ((!bVar7) && (*(longlong *)(param_1 + 0x388) == 0)) {
    return;
  }
LAB_140ac0d8c:
  FUN_140aa26f0(*(undefined8 *)(param_1 + 0x220),param_1);
  return;
}



// FUNCTION 140ac0dc0 FUN_140ac0dc0 body=877 status=ok
// SIG undefined FUN_140ac0dc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac0dc0(longlong *param_1)

{
  longlong lVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  int iVar9;
  float *pfVar10;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a8;
  float local_a0;
  undefined8 local_98;
  float local_90;
  float local_80;
  
  if (*(char *)((longlong)param_1 + 0x484) != '\x01') {
    return;
  }
  lVar6 = param_1[0x8e];
  pfVar10 = (float *)0x0;
  pfVar13 = pfVar10;
  if (lVar6 != 0) {
    if ((char)param_1[0x92] == '\0') {
      pfVar13 = (float *)(lVar6 + 0x90);
    }
    else if ((char)param_1[0x92] == '\x01') {
      pfVar13 = (float *)(lVar6 + 0xc0);
    }
  }
  if (pfVar13 == (float *)0x0) {
    return;
  }
  if ((char)param_1[0x25] != '\x03') {
    return;
  }
  lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
  if (lVar6 == 0) {
    fVar17 = 0.0;
  }
  else {
    lVar6 = (**(code **)(*param_1 + 0x148))(param_1);
    fVar17 = *(float *)(lVar6 + 0x790);
  }
  lVar6 = param_1[0x2d];
  if (lVar6 == 0) {
    local_98 = _DAT_1468b5d90;
    local_90 = DAT_1468b5d98;
  }
  else {
    local_90 = *(float *)(lVar6 + 0x228);
    local_98 = *(undefined8 *)(lVar6 + 0x220);
  }
  fVar5 = local_90;
  local_a8 = local_98;
  uVar3 = local_a8;
  local_a0 = local_90;
  if (param_1[0x8e] != 0) {
    iVar9 = *(int *)((longlong)param_1 + 0x48c) + -2;
    if (iVar9 < 1) {
      iVar9 = 0;
    }
    if ((char)param_1[0x92] == '\0') {
      lVar6 = 0x90;
    }
    else {
      if ((char)param_1[0x92] != '\x01') goto LAB_140ac0f31;
      lVar6 = 0xc0;
    }
    lVar6 = param_1[0x8e] + lVar6;
    if (((lVar6 != 0) && (pfVar10 = (float *)0x0, -1 < iVar9)) && (iVar9 < *(int *)(lVar6 + 0x18)))
    {
      pfVar10 = (float *)(*(longlong *)(lVar6 + 0x10) + (longlong)iVar9 * 0xc);
    }
  }
LAB_140ac0f31:
  if (pfVar10 == (float *)0x0) {
    fVar18 = 1.0;
  }
  else {
    fVar18 = pfVar10[1];
  }
  plVar11 = (longlong *)param_1[0x8c];
  plVar12 = plVar11 + (longlong)(int)param_1[0x8d] * 2;
  if (plVar11 != plVar12) {
    local_a8._4_4_ = (float)((ulonglong)local_98 >> 0x20);
    fVar4 = local_a8._4_4_;
    local_a8._0_4_ = (float)local_98;
    fVar2 = (float)local_a8;
    local_a8 = uVar3;
    do {
      lVar6 = *plVar11;
      if (lVar6 != 0) {
        lVar1 = *(longlong *)(lVar6 + 0x168);
        if (lVar1 == 0) {
          local_a0 = DAT_1468b5d98;
          puVar7 = &local_a8;
          local_a8 = _DAT_1468b5d90;
        }
        else {
          puVar7 = &local_98;
          local_90 = *(float *)(lVar1 + 0x228);
          local_98 = *(undefined8 *)(lVar1 + 0x220);
        }
        local_80 = *(float *)(puVar7 + 1);
        fVar16 = *(float *)(plVar11 + 1);
        fVar14 = (float)*puVar7 - fVar2;
        fVar15 = (float)((ulonglong)*puVar7 >> 0x20) - fVar4;
        if (fVar15 * fVar15 + fVar14 * fVar14 + (local_80 - fVar5) * (local_80 - fVar5) <=
            fVar18 * fVar18) {
          if (0.0 <= fVar16) {
            *(undefined4 *)(plVar11 + 1) = 0xbf800000;
          }
        }
        else {
          if (fVar16 < 0.0) {
            *(float *)(plVar11 + 1) = fVar17;
            fVar16 = fVar17;
          }
          if ((*(char *)((longlong)plVar11 + 0xc) == '\0') &&
             (*pfVar13 <= fVar17 - fVar16 && fVar17 - fVar16 != *pfVar13)) {
            *(undefined1 *)((longlong)plVar11 + 0xc) = 1;
            lVar1 = param_1[0x8f];
            if (((lVar1 != 0) &&
                ((*(char *)(lVar1 + 0x128) == '\x03' &&
                 (lVar8 = FUN_140aab960(lVar1,lVar6), lVar8 != 0)))) &&
               ((*(longlong *)(lVar8 + 0x10) == 0 ||
                (*(char *)(*(longlong *)(lVar8 + 0x10) + 0x484) != '\x02')))) {
              FUN_140abbd10(lVar1,lVar8,lVar6,3);
            }
          }
        }
      }
      plVar11 = plVar11 + 2;
    } while (plVar11 != plVar12);
  }
  return;
}



// FUNCTION 140ac1130 FUN_140ac1130 body=915 status=ok
// SIG undefined FUN_140ac1130(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140ac1130(longlong *param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  float fVar7;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  longlong local_c0 [3];
  longlong local_a8;
  undefined4 local_a0;
  undefined1 local_98 [8];
  undefined8 local_90;
  code *local_88;
  longlong local_78 [4];
  longlong *local_58;
  int local_48;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(float *)((longlong)param_1 + 0x50c) <= 0.0) {
    fVar7 = 1.0;
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x148))();
    fVar7 = (*(float *)(lVar3 + 0x790) - *(float *)(param_1 + 0xa1)) /
            *(float *)((longlong)param_1 + 0x50c);
    if (1.0 <= fVar7) {
      fVar7 = 1.0;
    }
  }
  if ((char)param_1[0x9f] == '\0') {
    if (1.0 <= fVar7) {
      FUN_140abc5c0(param_1,1);
      FUN_140ab8bf0(param_1,0);
      if (((char)param_1[0x25] == '\x03') && (0.0 < *(float *)((longlong)param_1 + 0x50c))) {
        FWeakObjectPtr::operator=(&local_c8,param_1);
        plVar6 = param_1 + 0xb3;
        plVar4 = (longlong *)FMemory::Realloc(0,0x20);
        if (plVar4 != (longlong *)0x0) {
          *plVar4 = (longlong)&PTR_GetPoolName_14424cdf8;
          *(undefined4 *)(plVar4 + 1) = local_c8;
          *(undefined4 *)((longlong)plVar4 + 0xc) = local_c4;
          lVar3 = FDelegateHandle::GenerateNewID();
          plVar4[3] = lVar3;
          *plVar4 = (longlong)&PTR_GetPoolName_14424ce40;
        }
        if (local_c0 != plVar6) {
          if (plVar4 == (longlong *)0x0) {
            if (((int)param_1[0xb4] != 0) &&
               (plVar2 = (longlong *)*plVar6, plVar2 != (longlong *)0x0)) {
              (**(code **)(*plVar2 + 0x28))(plVar2,0);
              if (*plVar6 != 0) {
                lVar3 = FMemory::Realloc(*plVar6,0,0);
                *plVar6 = lVar3;
              }
              *(undefined4 *)(param_1 + 0xb4) = 0;
            }
          }
          else {
            (**(code **)(*plVar4 + 0x30))(plVar4,plVar6);
          }
        }
        if (plVar4 != (longlong *)0x0) {
          (**(code **)(*plVar4 + 0x28))(plVar4,0);
          lVar3 = FMemory::Realloc(plVar4,0,0);
          if (lVar3 != 0) {
            FMemory::Free(lVar3);
          }
        }
        lVar3 = (**(code **)(*param_1 + 0x148))(param_1);
        if (*(longlong *)(lVar3 + 400) == 0) {
          uVar5 = *(undefined8 *)(lVar3 + 0x3f8);
        }
        else {
          uVar5 = *(undefined8 *)(*(longlong *)(lVar3 + 400) + 0x90);
        }
        uVar1 = *(undefined4 *)((longlong)param_1 + 0x50c);
        local_a8 = 0;
        local_a0 = 0;
        if (((plVar6 != &local_a8) && ((int)param_1[0xb4] != 0)) &&
           (plVar6 = (longlong *)*plVar6, plVar6 != (longlong *)0x0)) {
          (**(code **)(*plVar6 + 0x30))(plVar6,&local_a8);
        }
        FWeakObjectPtr::operator=(local_98,0);
        local_d0 = 0xbf800000;
        local_d8 = 0;
        local_90 = 0;
        local_58 = (longlong *)0x0;
        local_48 = 0;
        local_88 = AK::MemoryMgr::StartProfileThreadUsage;
        FUN_142880850(uVar5,param_1 + 0xb2,&local_a8,uVar1);
        if (local_48 != 0) {
          plVar6 = local_78;
          if (local_58 != (longlong *)0x0) {
            plVar6 = local_58;
          }
          if (plVar6 != (longlong *)0x0) {
            (**(code **)(*plVar6 + 0x10))(plVar6,0);
          }
        }
        if (local_58 != (longlong *)0x0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_a8);
      }
    }
    else {
      FUN_140abc270(param_1,(*(float *)(param_1 + 0xae) - *(float *)(param_1 + 0xad)) * fVar7 +
                            *(float *)(param_1 + 0xad),
                    (*(float *)((longlong)param_1 + 0x574) - *(float *)((longlong)param_1 + 0x56c))
                    * fVar7 + *(float *)((longlong)param_1 + 0x56c),1);
    }
  }
  else if ((char)param_1[0x9f] == '\x02') {
    if (1.0 <= fVar7) {
      FUN_140abc5c0(param_1,3);
      FUN_140ab8bf0(param_1,0);
      (**(code **)(*param_1 + 0x6d0))(param_1,0);
    }
    else {
      FUN_140abc270(param_1,(*(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0xae)) * fVar7 +
                            *(float *)(param_1 + 0xae),
                    (*(float *)((longlong)param_1 + 0x584) - *(float *)((longlong)param_1 + 0x574))
                    * fVar7 + *(float *)((longlong)param_1 + 0x574),1);
    }
  }
  return;
}



// FUNCTION 140ac14d0 FUN_140ac14d0 body=62 status=ok
// SIG undefined FUN_140ac14d0(void)

undefined8 * FUN_140ac14d0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"OVERRIDE ME",0x18);
  return param_2;
}



// FUNCTION 140ac1510 FUN_140ac1510 body=96 status=ok
// SIG undefined FUN_140ac1510(void)

undefined8 FUN_140ac1510(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  wchar_t *pwVar3;
  
  lVar1 = FWeakObjectPtr::Get();
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(lVar1 + 0x48);
  }
  if (lVar1 == 0) {
    pwVar3 = L"None";
  }
  else {
    puVar2 = (undefined8 *)FText::ToString(lVar1 + 0x40);
    if (*(int *)(puVar2 + 1) == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)*puVar2;
    }
  }
  FString::PrintfImpl(param_2,L"CURRENCY (%s)",pwVar3);
  return param_2;
}



// FUNCTION 140ac1570 FUN_140ac1570 body=37 status=ok
// SIG undefined FUN_140ac1570(void)

undefined8 FUN_140ac1570(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"CUSTOMIZATIONS (%i)",*(undefined4 *)(param_1 + 0x18));
  return param_2;
}



// FUNCTION 140ac15a0 FUN_140ac15a0 body=62 status=ok
// SIG undefined FUN_140ac15a0(void)

undefined8 * FUN_140ac15a0(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"IMPLEMENT ME",0x1a);
  return param_2;
}



// FUNCTION 140ac15e0 FUN_140ac15e0 body=124 status=ok
// SIG undefined FUN_140ac15e0(void)

undefined8 FUN_140ac15e0(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  bool bVar2;
  wchar_t *pwVar3;
  longlong local_18 [2];
  
  bVar2 = false;
  if (*(char *)(param_1 + 0x10) == '\x04') {
    puVar1 = (undefined8 *)FUN_14301bb40((char *)(param_1 + 0x10),local_18);
    if (*(int *)(puVar1 + 1) == 0) {
      pwVar3 = L"";
      bVar2 = true;
    }
    else {
      pwVar3 = (wchar_t *)*puVar1;
      bVar2 = true;
    }
  }
  else {
    pwVar3 = L"INVALID";
  }
  FString::PrintfImpl(param_2,L"SN: %s",pwVar3);
  if ((bVar2) && (local_18[0] != 0)) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 140ac1660 FUN_140ac1660 body=37 status=ok
// SIG undefined FUN_140ac1660(void)

undefined8 FUN_140ac1660(longlong param_1,undefined8 param_2)

{
  FString::PrintfImpl(param_2,L"ITEM POOLS (%i)",*(undefined4 *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 140ac1690 FUN_140ac1690 body=76 status=ok
// SIG undefined FUN_140ac1690(void)

void FUN_140ac1690(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x591) != '\x03') && (param_2 != 0)) {
    cVar1 = AFGCentralStorageContainer::AddToCentralStorageSubsystem(param_2);
    if (cVar1 == '\0') {
      cVar1 = FUN_140e1ace0(param_2);
      if (cVar1 != '\0') {
        FUN_140ab6290(param_1,param_2);
      }
    }
  }
  return;
}



// FUNCTION 140ac16e0 FUN_140ac16e0 body=426 status=ok
// SIG undefined FUN_140ac16e0(void)

void FUN_140ac16e0(longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 local_28 [8];
  longlong *local_20;
  
  if ((((((char)param_1[0x25] == '\x03') && (lVar7 = (**(code **)(*param_1 + 0x148))(), lVar7 != 0))
       && (param_2 != 0)) && (cVar6 = FUN_140aa4e50(param_1,param_2), cVar6 != '\0')) &&
     ((param_3 == 0 || (cVar6 = FUN_140aa4e50(param_1,param_3), cVar6 != '\0')))) {
    lVar8 = FUN_140c41820(param_2);
    lVar7 = *(longlong *)(param_2 + 0x920);
    if ((lVar7 != 0) && (lVar4 = param_1[0xa3], *(longlong *)(lVar4 + 0x80) != 0)) {
      lVar9 = FUN_142e20fc0();
      lVar4 = *(longlong *)(lVar4 + 0x80);
      for (lVar5 = lVar4; lVar5 != 0; lVar5 = *(longlong *)(lVar5 + 0x30)) {
        if (lVar5 == lVar9) {
          if (((lVar4 != 0) && (lVar8 == 0)) &&
             (FUN_142c7bae0(lVar7,local_28,*(undefined8 *)(param_1[0xa3] + 0x80)),
             local_20 != (longlong *)0x0)) {
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
          break;
        }
      }
    }
    lVar7 = FUN_140aa7410(param_1);
    if (lVar7 != 0) {
      FUN_140aaf7f0(lVar7,param_2,0,param_3);
    }
    FUN_14223e980(param_1,1);
    FUN_141309c70(param_1,param_2,param_3);
    iVar3 = (int)param_1[0xa2];
    *(int *)(param_1 + 0xa2) = iVar3 + 1;
    if (*(int *)((longlong)param_1 + 0x514) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1 + 0xa1,iVar3);
    }
    *(longlong *)(param_1[0xa1] + (longlong)iVar3 * 8) = lVar7;
  }
  return;
}



// FUNCTION 140ac1890 FUN_140ac1890 body=192 status=ok
// SIG undefined FUN_140ac1890(void)

void FUN_140ac1890(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  
  plVar1 = *(longlong **)(param_1 + 0x558);
  iVar4 = *(int *)(param_1 + 0x560);
  plVar3 = plVar1;
  do {
    if (plVar3 == plVar1 + iVar4) {
LAB_140ac1921:
      if ((*(int *)(param_1 + 0x560) != 0) != (*(char *)(param_1 + 0x477) != '\0')) {
        FUN_14288e3d0(param_1 + 0x468);
      }
      return;
    }
    if (*plVar3 == param_2) {
      iVar2 = (int)((longlong)plVar3 - (longlong)plVar1 >> 3);
      if (iVar2 != -1) {
        iVar5 = (iVar4 - iVar2) + -1;
        if (0 < iVar5) {
          iVar5 = 1;
        }
        if (iVar5 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (plVar1 + iVar2,plVar1 + (iVar4 - iVar5),(longlong)iVar5 << 3);
          iVar4 = *(int *)(param_1 + 0x560);
        }
        *(int *)(param_1 + 0x560) = iVar4 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(param_1 + 0x558);
      }
      goto LAB_140ac1921;
    }
    plVar3 = plVar3 + 1;
  } while( true );
}



// FUNCTION 140ac1950 FUN_140ac1950 body=63 status=ok
// SIG undefined FUN_140ac1950(void)

void FUN_140ac1950(longlong *param_1,char param_2)

{
  if (*(char *)((longlong)param_1 + 0x591) != param_2) {
    (**(code **)(*param_1 + 0x600))();
    *(char *)((longlong)param_1 + 0x591) = param_2;
    FUN_14130a0f0(param_1,param_2);
  }
  return;
}



// FUNCTION 140ac1990 FUN_140ac1990 body=621 status=ok
// SIG undefined FUN_140ac1990(void)

void FUN_140ac1990(longlong param_1,char param_2,undefined1 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  
  lVar7 = *(longlong *)(param_1 + 0xa8);
  lVar9 = (longlong)*(int *)(param_1 + 0xb0) * 0x60 + lVar7;
  for (; lVar7 != lVar9; lVar7 = lVar7 + 0x60) {
    if ((*(longlong *)(lVar7 + 8) != 0) &&
       (cVar2 = UActorComponent::IsComponentTickEnabled(), cVar2 == '\0')) {
      (**(code **)(**(longlong **)(lVar7 + 8) + 0x358))(*(longlong **)(lVar7 + 8),1);
    }
  }
  cVar2 = *(char *)(param_1 + 0x9c);
  cVar1 = *(char *)(param_1 + 0x9d);
  cVar3 = FUN_140abc720(param_1,param_2);
  *(char *)(param_1 + 0x9c) = cVar3;
  *(char *)(param_1 + 0x9d) = cVar3;
  if ((param_2 != '\0') || (cVar3 != cVar2)) {
    lVar7 = *(longlong *)(param_1 + 0xa8);
    lVar9 = (longlong)*(int *)(param_1 + 0xb0) * 0x60;
    if (cVar3 != cVar2) {
      if (cVar3 == '\0') {
        plVar4 = *(longlong **)(param_1 + 0x80);
        plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x88) * 2;
        for (; plVar4 != plVar6; plVar4 = plVar4 + 2) {
          if (((int)plVar4[1] != 0) && (*plVar4 != 0)) {
            FUN_1404ffab0(param_1 + 0x80,*(undefined8 *)(lVar9 + -0x50 + lVar7),
                          *(undefined8 *)(lVar9 + -0x48 + lVar7),0);
            break;
          }
        }
      }
      else {
        plVar4 = *(longlong **)(param_1 + 0x68);
        plVar6 = plVar4 + (longlong)*(int *)(param_1 + 0x70) * 2;
        for (; plVar4 != plVar6; plVar4 = plVar4 + 2) {
          if (((int)plVar4[1] != 0) && (*plVar4 != 0)) {
            FUN_140aa4890(param_1 + 0x68,*(undefined8 *)(lVar9 + -0x50 + lVar7),
                          *(undefined8 *)(lVar9 + -0x48 + lVar7),lVar7 + -0x28 + lVar9,
                          lVar7 + -0x18 + lVar9,*(undefined1 *)(lVar9 + -8 + lVar7),param_3);
            break;
          }
        }
      }
    }
    if (param_2 != '\0') goto LAB_140ac1b15;
  }
  if (*(char *)(param_1 + 0x9d) == cVar1) {
    return;
  }
LAB_140ac1b15:
  lVar9 = *(longlong *)(param_1 + 0xa8);
  lVar8 = (longlong)*(int *)(param_1 + 0xb0) * 0x60;
  lVar7 = lVar8 + lVar9;
  cVar2 = FUN_14059ee90(lVar7 + -0x40);
  if (cVar2 != '\0') {
    if (DAT_146b33f38 == (longlong *)0x0) {
      FUN_142d7ebe0();
    }
    lVar5 = (**(code **)(*DAT_146b33f38 + 0x280))();
    if (lVar5 != 0) {
      if (param_2 == '\0') {
        uVar11 = 0x3e99999a;
      }
      else {
        uVar11 = 0;
      }
      if (*(char *)(param_1 + 0x9d) == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = 0x3f800000;
      }
      FUN_1405aaa50(*(undefined8 *)(lVar7 + -0x40),*(undefined8 *)(lVar5 + 0x50),uVar10,uVar11,4,0);
      if (((*(char *)(lVar8 + -7 + lVar9) != '\0') &&
          (lVar9 = *(longlong *)(lVar8 + -0x58 + lVar9), lVar9 != 0)) &&
         (*(char *)(lVar9 + 0x280) == '\0')) {
        FUN_1405aaa50(*(undefined8 *)(lVar7 + -0x40),*(undefined8 *)(lVar5 + 0x58),0x3f800000,0,4,0)
        ;
      }
    }
  }
  return;
}



// FUNCTION 140ac1c00 FUN_140ac1c00 body=1079 status=ok
// SIG undefined FUN_140ac1c00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ac1c00(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  float fVar13;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if ((*(int *)(lVar4 + 0x38) < DAT_146867af0) &&
     (_Init_thread_header(&DAT_146867af0), DAT_146867af0 == -1)) {
    FName::FName(&DAT_146867ae8,L"ElementalInteraction_HitLocation",1);
    _Init_thread_footer(&DAT_146867af0);
  }
  if ((*(int *)(lVar4 + 0x38) < DAT_146867b00) &&
     (_Init_thread_header(&DAT_146867b00), DAT_146867b00 == -1)) {
    FName::FName(&DAT_146867af8,L"ElementalInteraction_SpreadAmount",1);
    _Init_thread_footer(&DAT_146867b00);
  }
  if (*(longlong *)(param_1 + 0x220) != 0) {
    plVar12 = *(longlong **)(param_1 + 0x618);
    plVar9 = plVar12 + *(int *)(param_1 + 0x620);
    for (; plVar12 != plVar9; plVar12 = plVar12 + 1) {
      plVar1 = (longlong *)*plVar12;
      if (plVar1 != (longlong *)0x0) {
        iVar11 = 0;
        iVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
        if (0 < iVar3) {
          do {
            lVar4 = (**(code **)(*plVar1 + 0x560))(plVar1,iVar11);
            if (lVar4 != 0) {
              lVar5 = FUN_1429ba110();
              if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
                   (longlong)*(int *)(lVar5 + 0x90) * 8) != lVar5 + 0x88)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (!bVar2) {
                lVar4 = UMaterialInstanceDynamic::Create(lVar4,plVar1);
                if (lVar4 == 0) goto LAB_140ac1eac;
                (**(code **)(*plVar1 + 0x568))(plVar1,iVar11,lVar4);
              }
              if (*(longlong *)(param_1 + 0x248) == 0) {
                plVar8 = *(longlong **)(param_1 + 400);
                plVar10 = plVar8 + (longlong)*(int *)(param_1 + 0x198) * 0x1f;
                if (plVar8 != plVar10) {
                  do {
                    if (*plVar8 == *(longlong *)(param_1 + 0x238)) {
                      lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x118) + 0x168);
                      if (lVar5 == 0) {
                        local_84 = DAT_1468b5d98;
                        puVar7 = &local_8c;
                        local_8c = _DAT_1468b5d90;
                      }
                      else {
                        puVar7 = (undefined8 *)&local_98;
                        local_98 = *(undefined4 *)(lVar5 + 0x220);
                        local_90 = *(undefined4 *)(lVar5 + 0x228);
                        uStack_94 = *(undefined4 *)(lVar5 + 0x224);
                      }
                      local_80 = *puVar7;
                      local_78 = *(undefined4 *)(puVar7 + 1);
                      puVar6 = (undefined4 *)FLinearColor::FLinearColor(local_48,&local_80);
                      local_68 = *puVar6;
                      uStack_64 = puVar6[1];
                      uStack_60 = puVar6[2];
                      uStack_5c = puVar6[3];
                      FUN_1425a2be0(lVar4,DAT_146867ae8,&local_68);
                      if (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_1 + 0x188)) {
                        fVar13 = 0.0;
                      }
                      else {
                        fVar13 = *(float *)(param_1 + 0x644);
                      }
                      goto LAB_140ac1e9d;
                    }
                    plVar8 = plVar8 + 0x1f;
                  } while (plVar8 != plVar10);
                }
              }
              else {
                fVar13 = *(float *)(param_1 + 0x264);
                if (*(longlong *)(param_1 + 0x238) != *(longlong *)(param_1 + 0x188)) {
                  fVar13 = 1.0 - fVar13;
                }
                puVar6 = (undefined4 *)FLinearColor::FLinearColor(local_58,param_1 + 600);
                local_68 = *puVar6;
                uStack_64 = puVar6[1];
                uStack_60 = puVar6[2];
                uStack_5c = puVar6[3];
                FUN_1425a2be0(lVar4,DAT_146867ae8,&local_68);
                fVar13 = fVar13 * *(float *)(param_1 + 0x644);
LAB_140ac1e9d:
                FUN_1425a2750(lVar4,DAT_146867af8,fVar13);
              }
            }
LAB_140ac1eac:
            iVar11 = iVar11 + 1;
            iVar3 = (**(code **)(*plVar1 + 0x6c8))(plVar1);
          } while (iVar11 < iVar3);
        }
      }
    }
    if ((*(longlong *)(param_1 + 0x628) != 0) && (lVar4 = FUN_140a08d00(), lVar4 != 0)) {
      if (*(longlong *)(param_1 + 0x248) == 0) {
        plVar9 = *(longlong **)(param_1 + 400);
        plVar12 = plVar9 + (longlong)*(int *)(param_1 + 0x198) * 0x1f;
        fVar13 = 0.0;
        if (plVar9 != plVar12) {
          do {
            if (*plVar9 == *(longlong *)(param_1 + 0x238)) {
              fVar13 = 1.0;
              if (*(longlong *)(param_1 + 0x238) == *(longlong *)(param_1 + 0x188)) {
                fVar13 = 0.0;
              }
              break;
            }
            plVar9 = plVar9 + 0x1f;
          } while (plVar9 != plVar12);
        }
      }
      else {
        fVar13 = *(float *)(param_1 + 0x264);
        if (*(longlong *)(param_1 + 0x238) != *(longlong *)(param_1 + 0x188)) {
          fVar13 = 1.0 - *(float *)(param_1 + 0x264);
        }
      }
      FUN_1405aaad0(*(undefined8 *)(param_1 + 0x628),*(undefined8 *)(lVar4 + 0x2e0),fVar13 * 100.0,0
                    ,4);
    }
  }
  return;
}



// FUNCTION 140ac2040 FUN_140ac2040 body=2090 status=ok
// SIG undefined FUN_140ac2040(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140ac2257) */

void FUN_140ac2040(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  uint *puVar15;
  longlong lVar16;
  undefined1 auStack_168 [32];
  undefined1 local_148;
  undefined1 local_147 [7];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  uint uStack_128;
  int iStack_124;
  uint local_120;
  int iStack_11c;
  int local_118 [2];
  longlong local_110;
  int local_108 [2];
  longlong *local_100;
  uint uStack_f8;
  uint uStack_f4;
  uint *puStack_f0;
  undefined4 uStack_e8;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  longlong *local_d8;
  longlong local_d0 [8];
  longlong *local_90;
  undefined8 local_88;
  undefined1 local_80 [64];
  undefined1 *local_40;
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  puVar10 = (undefined1 *)0x0;
  lVar16 = param_1 + 0x3b0;
  local_40 = (undefined1 *)0x0;
  puStack_f0 = (uint *)(param_1 + 0x5c0);
  local_38 = 0;
  local_34 = 0;
  iVar5 = *(int *)(param_1 + 0x5d0);
  local_140._0_4_ = 0;
  local_140._4_4_ = 1;
  local_130._4_4_ = 0;
  uStack_128 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)(param_1 + 0x5c8);
    if (*(uint **)(param_1 + 0x5c8) == (uint *)0x0) {
      puVar15 = puStack_f0;
    }
    uVar11 = *puVar15;
    puVar13 = puVar10;
    puVar12 = puVar10;
    while (uVar11 == 0) {
      iVar4 = (int)puVar13;
      uStack_128 = (int)puVar12 + 0x20;
      puVar12 = (undefined1 *)(ulonglong)uStack_128;
      local_140._0_4_ = iVar4 + 1;
      puVar13 = (undefined1 *)(ulonglong)(uint)local_140;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ac2143;
      uVar11 = puVar15[(longlong)iVar4 + 1];
    }
    local_140._4_4_ = -uVar11 & uVar11;
    iVar4 = 0x1f;
    if (local_140._4_4_ != 0) {
      for (; local_140._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_140._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_130._4_4_ = (uStack_128 - iVar4) + 0x1f;
    if (iVar5 < local_130._4_4_) {
LAB_140ac2143:
      local_130._4_4_ = iVar5;
    }
  }
  uStack_e8 = 0xffffffff;
  iStack_e4 = local_130._4_4_;
  uStack_e0 = uStack_128;
  uStack_f8 = (uint)local_140;
  uStack_f4 = local_140._4_4_;
  uStack_138._0_4_ = (uint)local_140;
  uStack_138._4_4_ = local_140._4_4_;
  local_120 = uStack_128;
  uStack_128 = 0xffffffff;
  iStack_124 = local_130._4_4_;
  bVar3 = local_130._4_4_ < iVar5;
  puVar13 = puVar10;
  puVar12 = puVar10;
  local_140 = (longlong *)lVar16;
  local_100 = (longlong *)lVar16;
  local_130 = puStack_f0;
  if (bVar3) {
    while( true ) {
      iVar5 = iStack_124;
      lVar8 = (longlong)local_140;
      local_38 = (int)puVar13 + 1;
      lVar7 = *(longlong *)((longlong)local_140 + 0x200);
      if ((int)puVar12 < (int)local_38) {
        TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_80,puVar13);
      }
      if (lVar7 == 0) {
        lVar7 = lVar8;
      }
      puVar12 = local_80;
      if (local_40 != (undefined1 *)0x0) {
        puVar12 = local_40;
      }
      *(undefined8 *)(puVar12 + (longlong)(int)puVar13 * 8) =
           *(undefined8 *)(lVar7 + (longlong)iVar5 * 0x40);
      uStack_128 = uStack_128 & ~uStack_138._4_4_;
      FUN_1406e9690(&uStack_138);
      if ((int)local_130[4] <= iStack_124) break;
      puVar13 = (undefined1 *)(ulonglong)local_38;
      puVar12 = (undefined1 *)(ulonglong)local_34;
    }
  }
  local_148 = 0;
  puVar13 = local_80;
  if (local_40 != (undefined1 *)0x0) {
    puVar13 = puVar10;
  }
  AlgoImpl::IntroSortInternal<void_*,FIdentityFunctor,TLess<void>_>
            ((ulonglong)puVar13 | (ulonglong)local_40,(longlong)(int)local_38,0,&local_148);
  FUN_140aa8230(lVar16,0);
  for (local_118[0] = 0x1f; 0xffffffffU >> local_118[0] == 0; local_118[0] = local_118[0] + -1) {
  }
  if (0 < (int)*(uint *)(param_1 + 0x5f8)) {
    uVar14 = (ulonglong)*(uint *)(param_1 + 0x5f8);
    puVar13 = puVar10;
    do {
      lVar7 = *(longlong *)(param_1 + 0x5f0);
      if (*(longlong *)(param_1 + 0x5f0) == 0) {
        lVar7 = param_1 + 0x5e0;
      }
      uVar6 = (longlong)*(int *)(param_1 + 0x5f8) - 1U & (ulonglong)puVar13;
      puVar13 = puVar13 + 1;
      *(undefined4 *)(lVar7 + uVar6 * 4) = 0xffffffff;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
  }
  local_140 = local_d0;
  uStack_138 = local_147;
  local_90 = (longlong *)0x0;
  local_88 = 0;
  local_147[0] = 0;
  local_130._0_4_ = (undefined4)param_1;
  local_130._4_4_ = (int)((ulonglong)param_1 >> 0x20);
  if (*(char *)(param_1 + 0x240) != '\0') {
    FUN_140aa0c80(&local_140,*(undefined8 *)(param_1 + 0x238),param_1);
  }
  plVar1 = (longlong *)(param_1 + 0x338);
  puStack_f0 = (uint *)(param_1 + 0x348);
  *(int *)(param_1 + 0x600) = DAT_1468674c0;
  iVar5 = *(int *)(param_1 + 0x360);
  local_140._0_4_ = 0;
  local_140._4_4_ = 1;
  local_130._4_4_ = 0;
  uStack_128 = 0;
  if (iVar5 != 0) {
    puVar15 = *(uint **)(param_1 + 0x358);
    if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
      puVar15 = puStack_f0;
    }
    uVar11 = *puVar15;
    puVar13 = puVar10;
    puVar12 = puVar10;
    while (uVar11 == 0) {
      iVar4 = (int)puVar13;
      uStack_128 = (int)puVar12 + 0x20;
      puVar12 = (undefined1 *)(ulonglong)uStack_128;
      local_140._0_4_ = iVar4 + 1;
      puVar13 = (undefined1 *)(ulonglong)(uint)local_140;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ac23b2;
      uVar11 = puVar15[(longlong)iVar4 + 1];
    }
    local_140._4_4_ = -uVar11 & uVar11;
    iVar4 = 0x1f;
    if (local_140._4_4_ != 0) {
      for (; local_140._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (local_140._4_4_ == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_130._4_4_ = (uStack_128 - iVar4) + 0x1f;
    if (iVar5 < local_130._4_4_) {
LAB_140ac23b2:
      local_130._4_4_ = iVar5;
    }
  }
  uStack_e8 = 0xffffffff;
  iStack_e4 = local_130._4_4_;
  uStack_e0 = uStack_128;
  iStack_dc = iStack_124;
  uStack_f8 = (uint)local_140;
  uStack_f4 = local_140._4_4_;
  uStack_138._0_4_ = (uint)local_140;
  uStack_138._4_4_ = local_140._4_4_;
  local_120 = uStack_128;
  iStack_11c = iStack_124;
  uStack_128 = 0xffffffff;
  iStack_124 = local_130._4_4_;
  bVar3 = local_130._4_4_ < iVar5;
  local_140 = plVar1;
  local_100 = plVar1;
  local_130 = puStack_f0;
  if (bVar3) {
    do {
      plVar9 = local_140;
      lVar7 = (longlong)iStack_124;
      lVar8 = FUN_140aac230(*(undefined8 *)(lVar7 * 0x18 + *local_140));
      if (lVar8 != 0) {
        uVar2 = *(undefined8 *)(lVar7 * 0x18 + *plVar9);
        local_110 = lVar8;
        if ((uint)local_88 == 8) {
          local_147[0] = 1;
        }
        else {
          if ((*(char *)(lVar8 + 0x150) != '\0') &&
             (lVar7 = *(longlong *)(lVar8 + 0x38), lVar7 != 0)) {
            lVar8 = FUN_142e49950();
            do {
              if (lVar7 == lVar8) {
                plVar9 = *(longlong **)(local_110 + 0x38);
                if (plVar9 == (longlong *)0x0) {
                  lVar7 = 0;
                }
                else {
                  lVar7 = plVar9[0x1f];
                  if (lVar7 == 0) {
                    (**(code **)(*plVar9 + 0x368))(plVar9);
                    lVar7 = plVar9[0x1f];
                  }
                }
                local_110 = FUN_140aabd10(param_1,lVar7);
                if (local_110 == 0) goto LAB_140ac25fa;
                break;
              }
              lVar7 = *(longlong *)(lVar7 + 0x30);
            } while (lVar7 != 0);
          }
          lVar7 = local_110;
          FUN_140aa9d20(lVar16,local_108,local_110);
          uVar14 = local_88;
          puVar13 = puVar10;
          if (local_108[0] != -1) {
            lVar8 = *(longlong *)(param_1 + 0x5b0);
            if (*(longlong *)(param_1 + 0x5b0) == 0) {
              lVar8 = lVar16;
            }
            puVar13 = (undefined1 *)(lVar8 + (longlong)local_108[0] * 0x40);
          }
          puVar12 = puVar13 + 8;
          if (puVar13 == (undefined1 *)0x0) {
            puVar12 = puVar10;
          }
          if (puVar12 == (undefined1 *)0x0) {
            lVar8 = (longlong)(int)(uint)local_88;
            iVar5 = (uint)local_88 + 1;
            local_88 = CONCAT44(local_88._4_4_,iVar5);
            if (local_88._4_4_ < iVar5) {
              TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow
                        (local_d0,uVar14 & 0xffffffff);
              lVar7 = local_110;
            }
            plVar9 = local_d0;
            if (local_90 != (longlong *)0x0) {
              plVar9 = local_90;
            }
            local_d8 = &local_110;
            plVar9[lVar8] = lVar7;
            FUN_140a9cbe0(lVar16,local_118,&local_d8,0);
            lVar7 = *(longlong *)(param_1 + 0x5b0);
            if (*(longlong *)(param_1 + 0x5b0) == 0) {
              lVar7 = lVar16;
            }
            uVar14 = (longlong)local_118[0] * 0x40 + 8 + lVar7;
            uVar11 = *(uint *)(uVar14 + 0x28);
            *(uint *)(uVar14 + 0x28) = uVar11 + 1;
            if (*(int *)(uVar14 + 0x2c) < (int)(uVar11 + 1)) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (uVar14,uVar11);
            }
            uVar6 = *(ulonglong *)(uVar14 + 0x20);
            if (*(ulonglong *)(uVar14 + 0x20) == 0) {
              uVar6 = uVar14;
            }
          }
          else {
            uVar11 = *(uint *)(puVar12 + 0x28);
            if (3 < uVar11) goto LAB_140ac25fa;
            *(uint *)(puVar12 + 0x28) = uVar11 + 1;
            if (*(int *)(puVar12 + 0x2c) < (int)(uVar11 + 1)) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                        (puVar12,uVar11);
            }
            uVar6 = (ulonglong)(*(longlong *)(puVar12 + 0x20) != 0) - 1 & (ulonglong)puVar12 |
                    *(ulonglong *)(puVar12 + 0x20);
          }
          *(undefined8 *)(uVar6 + (longlong)(int)uVar11 * 8) = uVar2;
        }
      }
LAB_140ac25fa:
      uStack_128 = uStack_128 & ~uStack_138._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
    } while (iStack_124 < (int)local_130[6]);
  }
  local_148 = 0;
  plVar9 = local_d0;
  if (local_90 != (longlong *)0x0) {
    plVar9 = local_90;
  }
  AlgoImpl::IntroSortInternal<void_*,FIdentityFunctor,TLess<void>_>
            (plVar9,(longlong)(int)(uint)local_88,0,&local_148);
  if (((uint)local_88 == local_38) && (0 < (int)local_38)) {
    plVar9 = local_d0;
    if (local_90 != (longlong *)0x0) {
      plVar9 = local_90;
    }
    puVar13 = local_80;
    if (local_40 != (undefined1 *)0x0) {
      puVar13 = local_40;
    }
    lVar16 = (longlong)puVar13 - (longlong)plVar9;
    puVar13 = puVar10;
    do {
      if (*plVar9 != *(longlong *)(lVar16 + (longlong)plVar9)) goto LAB_140ac26bc;
      uVar11 = (int)puVar13 + 1;
      puVar13 = (undefined1 *)(ulonglong)uVar11;
      plVar9 = plVar9 + 1;
    } while ((int)uVar11 < (int)local_38);
  }
  if ((uint)local_88 != local_38) {
LAB_140ac26bc:
    FUN_140aa26f0(*(undefined8 *)(param_1 + 0x220),param_1);
    iVar5 = *(int *)(param_1 + 0x360);
    puStack_f0 = (uint *)(param_1 + 0x348);
    local_140._0_4_ = 0;
    local_140._4_4_ = 1;
    local_130._4_4_ = 0;
    uStack_128 = 0;
    if (iVar5 != 0) {
      puVar15 = *(uint **)(param_1 + 0x358);
      if (*(uint **)(param_1 + 0x358) == (uint *)0x0) {
        puVar15 = puStack_f0;
      }
      uVar11 = *puVar15;
      puVar13 = puVar10;
      while (uVar11 == 0) {
        iVar4 = (int)puVar13;
        uStack_128 = (int)puVar10 + 0x20;
        puVar10 = (undefined1 *)(ulonglong)uStack_128;
        local_140._0_4_ = iVar4 + 1;
        puVar13 = (undefined1 *)(ulonglong)(uint)local_140;
        if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 <= iVar4) goto LAB_140ac276c;
        uVar11 = puVar15[(longlong)iVar4 + 1];
      }
      local_140._4_4_ = -uVar11 & uVar11;
      iVar4 = 0x1f;
      if (local_140._4_4_ != 0) {
        for (; local_140._4_4_ >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (local_140._4_4_ == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      local_130._4_4_ = (uStack_128 - iVar4) + 0x1f;
      if (iVar5 < local_130._4_4_) {
LAB_140ac276c:
        local_130._4_4_ = iVar5;
      }
    }
    uStack_e8 = 0xffffffff;
    iStack_e4 = local_130._4_4_;
    uStack_e0 = uStack_128;
    iStack_dc = iStack_124;
    uStack_f8 = (uint)local_140;
    uStack_f4 = local_140._4_4_;
    uStack_138._0_4_ = (uint)local_140;
    uStack_138._4_4_ = local_140._4_4_;
    local_120 = uStack_128;
    iStack_11c = iStack_124;
    uStack_128 = 0xffffffff;
    iStack_124 = local_130._4_4_;
    bVar3 = local_130._4_4_ < iVar5;
    local_140 = plVar1;
    local_100 = plVar1;
    local_130 = puStack_f0;
    if (bVar3) {
      do {
        FUN_140aa2620(*(undefined8 *)(param_1 + 0x220),
                      *(undefined8 *)(*local_140 + (longlong)iStack_124 * 0x18));
        uStack_128 = uStack_128 & ~uStack_138._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_138);
      } while (iStack_124 < (int)local_130[6]);
    }
  }
  DAT_1468674c0 = DAT_1468674c0 + 1;
  if (local_90 != (longlong *)0x0) {
    FMemory::Free(local_90);
  }
  if (local_40 != (undefined1 *)0x0) {
    FMemory::Free(local_40);
  }
  return;
}



// FUNCTION 140ac2870 FUN_140ac2870 body=891 status=ok
// SIG undefined FUN_140ac2870(void)

void FUN_140ac2870(longlong *param_1,longlong *param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint uVar8;
  longlong lVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  undefined8 local_a8;
  uint uStack_a0;
  int iStack_9c;
  undefined1 local_98 [16];
  longlong *local_88;
  undefined2 local_80;
  longlong *local_78;
  uint uStack_70;
  uint uStack_6c;
  uint *puStack_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  
  *(undefined4 *)(param_1 + 0xd) = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0x7f7fffff;
  puStack_68 = (uint *)(param_1 + 2);
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0xbf800000;
  fVar13 = 0.0;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0xb) = 0xbf800000;
  *(undefined1 *)((longlong)param_1 + 0x81) = 0;
  iVar1 = (int)param_1[5];
  local_b8 = 0;
  uStack_b4 = 1;
  local_a8._4_4_ = 0;
  uStack_a0 = 0;
  if (iVar1 != 0) {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = puStack_68;
    }
    uVar8 = *puVar10;
    local_b8 = 0;
    uStack_a0 = 0;
    while (uVar8 == 0) {
      lVar9 = (longlong)(int)local_b8;
      uStack_a0 = uStack_a0 + 0x20;
      uVar8 = local_b8 + 1;
      bVar2 = (int)(iVar1 + -1 + (iVar1 + -1 >> 0x1f & 0x1fU)) >> 5 <= (int)local_b8;
      local_b8 = uVar8;
      if (bVar2) goto LAB_140ac2970;
      uVar8 = puVar10[lVar9 + 1];
    }
    uStack_b4 = uVar8 - 1 & uVar8 ^ uVar8;
    iVar4 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar4 == 0; iVar4 = iVar4 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar4 = 0x20;
    }
    else {
      iVar4 = 0x1f - iVar4;
    }
    local_a8._4_4_ = (uStack_a0 - iVar4) + 0x1f;
    if (iVar1 < local_a8._4_4_) {
LAB_140ac2970:
      local_a8._4_4_ = iVar1;
    }
  }
  auStack_60._4_4_ = local_a8._4_4_;
  auStack_60._0_4_ = 0xffffffff;
  auStack_60._8_4_ = uStack_a0;
  auStack_60._12_4_ = iStack_9c;
  uStack_70 = local_b8;
  uStack_6c = uStack_b4;
  local_80 = 0;
  local_50._0_4_ = SUB84(param_1,0);
  local_50._4_4_ = (undefined4)((ulonglong)param_1 >> 0x20);
  uStack_a0 = 0xffffffff;
  iStack_9c = local_a8._4_4_;
  uStack_b0 = local_b8;
  uStack_ac = uStack_b4;
  local_98._8_4_ = (undefined4)local_50;
  local_98._0_8_ = auStack_60._8_8_;
  local_98._12_4_ = local_50._4_4_;
  bVar2 = local_a8._4_4_ < (int)param_1[5];
  local_88 = param_1;
  local_78 = param_1;
  local_50 = param_1;
  local_a8 = puStack_68;
  if (bVar2) {
    do {
      lVar9 = (longlong)iStack_9c;
      if (*(char *)(*(longlong *)(*param_1 + lVar9 * 0x28) + 0x2cc) == '\0') {
LAB_140ac2b97:
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + lVar9 * 0x28) + 0x2c0);
        if (lVar6 == 0) goto LAB_140ac2a7f;
        uVar7 = FUN_142df3580(param_2);
        uVar5 = FUN_142df3570(lVar6,uVar7);
        cVar3 = FUN_142d1f280(*(longlong *)(*param_1 + lVar9 * 0x28) + 0x2c8,uVar5);
        if (cVar3 != '\0') goto LAB_140ac2a7f;
        *(undefined1 *)(*param_1 + 8 + lVar9 * 0x28) = 0;
      }
      else {
        if (param_2 == (longlong *)0x0) {
LAB_140ac2a6e:
          bVar2 = false;
        }
        else {
          lVar6 = FUN_1429d7ab0();
          if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar6 + 0x90)) ||
             (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
              != lVar6 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_140ac2a6e;
          cVar3 = (**(code **)(*param_2 + 0x780))(param_2);
          if (cVar3 == '\0') goto LAB_140ac2a6e;
          bVar2 = true;
        }
        if (!bVar2) goto LAB_140ac2b97;
        *(undefined1 *)((longlong)param_1 + 0x81) = 1;
LAB_140ac2a7f:
        lVar6 = *(longlong *)(*(longlong *)(*param_1 + lVar9 * 0x28) + 0x238);
        fVar11 = *(float *)(lVar6 + 0x80);
        fVar12 = *(float *)(lVar6 + 0x84);
        if (fVar11 <= 0.0) {
          fVar11 = 0.0;
        }
        if (fVar12 <= 0.1) {
          fVar12 = 0.1;
        }
        if (*(float *)(param_1 + 0xd) <= fVar11) {
          fVar11 = *(float *)(param_1 + 0xd);
        }
        *(float *)(param_1 + 0xd) = fVar11;
        fVar11 = *(float *)((longlong)param_1 + 0x6c);
        if (fVar12 <= *(float *)((longlong)param_1 + 0x6c)) {
          fVar11 = fVar12;
        }
        *(float *)((longlong)param_1 + 0x6c) = fVar11;
        fVar12 = *(float *)(*param_1 + 0xc + lVar9 * 0x28) / fVar12;
        if (fVar13 < fVar12) {
          fVar13 = fVar12;
        }
        fVar11 = *(float *)(*param_1 + 0x10 + lVar9 * 0x28);
        if (fVar11 <= *(float *)(param_1 + 0xb)) {
          fVar11 = *(float *)(param_1 + 0xb);
        }
        *(float *)(param_1 + 0xb) = fVar11;
        fVar11 = *(float *)(*param_1 + 0x14 + lVar9 * 0x28);
        if (fVar11 <= *(float *)((longlong)param_1 + 0x5c)) {
          fVar11 = *(float *)((longlong)param_1 + 0x5c);
        }
        *(float *)((longlong)param_1 + 0x5c) = fVar11;
        fVar11 = *(float *)(*param_1 + 0x18 + lVar9 * 0x28);
        if (fVar11 <= *(float *)(param_1 + 0xc)) {
          fVar11 = *(float *)(param_1 + 0xc);
        }
        *(float *)(param_1 + 0xc) = fVar11;
        *(undefined1 *)(*param_1 + 8 + lVar9 * 0x28) = 1;
      }
      uStack_a0 = uStack_a0 & ~uStack_ac;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&uStack_b0);
    } while (iStack_9c < (int)local_a8[6]);
    if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
      TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
      ::ConditionalRehash(local_88,(int)local_88[1] - *(int *)((longlong)local_88 + 0x34),1);
    }
  }
  *(float *)((longlong)param_1 + 0x54) = fVar13 * *(float *)((longlong)param_1 + 0x6c);
  return;
}



// FUNCTION 140ac2bf0 FUN_140ac2bf0 body=322 status=ok
// SIG undefined FUN_140ac2bf0(void)

void FUN_140ac2bf0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = 0;
  if (*(longlong *)(param_1 + 0x4d8) != 0) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x4d8) + 0x238);
  }
  if (((lVar4 == 0) || (*(longlong *)(param_1 + 0x4d0) == 0)) ||
     (iVar3 = FUN_142235230(), iVar3 == 3)) {
    lVar4 = *(longlong *)(param_1 + 0x608);
  }
  else {
    lVar1 = *(longlong *)(lVar4 + 0x148);
    if ((lVar1 == 0) || (lVar4 = UUiModelCharacterUtils::GetPostProcessManager(), lVar1 == lVar4)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    lVar4 = *(longlong *)(param_1 + 0x608);
    if (bVar2) {
      if (lVar4 == 0) {
        FUN_1417846f0(param_1,
                      L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                     );
        uVar5 = FUN_142fc2900();
        uVar5 = FUN_1417985e0(uVar5,param_1,0,0,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x608) = uVar5;
        FUN_142fa6a10(uVar5,*(undefined8 *)(param_1 + 0x4d0));
        lVar4 = *(longlong *)(param_1 + 0x608);
      }
      *(longlong *)(lVar4 + 0x50) = lVar1;
      FUN_142fb4770(*(undefined8 *)(param_1 + 0x608),
                    *(undefined4 *)(*(longlong *)(param_1 + 0x4d0) + 0x1e8));
      return;
    }
  }
  if (lVar4 != 0) {
    FUN_142f97a90(lVar4);
    *(undefined8 *)(param_1 + 0x608) = 0;
  }
  return;
}


