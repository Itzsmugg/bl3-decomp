// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14216c4a0 execSlotAsUniformGridSlot body=128 status=ok
// SIG undefined execSlotAsUniformGridSlot(void)

void UWidgetLayoutLibrary::execSlotAsUniformGridSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = SlotAsUniformGridSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c520 execSlotAsVerticalBoxSlot body=128 status=ok
// SIG undefined execSlotAsVerticalBoxSlot(void)

void UWidgetLayoutLibrary::execSlotAsVerticalBoxSlot
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = SlotAsVerticalBoxSlot(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216c5a0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UWrapBoxSlot::GetPrivateStaticClass(void)

{
  if (DAT_146aeabe8 == 0) {
    FUN_14171ccd0(L"/Script/UMG",L"WrapBoxSlot",&DAT_146aeabe8,StaticRegisterNativesUWrapBoxSlot,
                  0x60,0x10000000,0,L"Engine",&LAB_14216c780,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UPanelSlot::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_146aeabe8;
}



// FUNCTION 14216c650 FUN_14216c650 body=47 status=ok
// SIG undefined FUN_14216c650(void)

longlong FUN_14216c650(void)

{
  if (DAT_146aeabe0 == 0) {
    FUN_141786440(&DAT_146aeabe0,&PTR_GetPrivateStaticClass_144fd3bc0);
  }
  return DAT_146aeabe0;
}



// FUNCTION 14216c680 FUN_14216c680 body=47 status=ok
// SIG undefined FUN_14216c680(void)

longlong FUN_14216c680(void)

{
  if (DAT_146aeabb8 == 0) {
    FUN_141786a30(&DAT_146aeabb8,&PTR_FUN_1465251b0);
  }
  return DAT_146aeabb8;
}



// FUNCTION 14216c6b0 FUN_14216c6b0 body=47 status=ok
// SIG undefined FUN_14216c6b0(void)

longlong FUN_14216c6b0(void)

{
  if (DAT_146aeabc0 == 0) {
    FUN_141786a30(&DAT_146aeabc0,&PTR_FUN_1465251f0);
  }
  return DAT_146aeabc0;
}



// FUNCTION 14216c6e0 FUN_14216c6e0 body=47 status=ok
// SIG undefined FUN_14216c6e0(void)

longlong FUN_14216c6e0(void)

{
  if (DAT_146aeabc8 == 0) {
    FUN_141786a30(&DAT_146aeabc8,&PTR_FUN_146525270);
  }
  return DAT_146aeabc8;
}



// FUNCTION 14216c710 FUN_14216c710 body=47 status=ok
// SIG undefined FUN_14216c710(void)

longlong FUN_14216c710(void)

{
  if (DAT_146aeabd0 == 0) {
    FUN_141786a30(&DAT_146aeabd0,&PTR_FUN_1465252f0);
  }
  return DAT_146aeabd0;
}



// FUNCTION 14216c740 FUN_14216c740 body=47 status=ok
// SIG undefined FUN_14216c740(void)

longlong FUN_14216c740(void)

{
  if (DAT_146aeabd8 == 0) {
    FUN_141786a30(&DAT_146aeabd8,&PTR_FUN_146525370);
  }
  return DAT_146aeabd8;
}



// FUNCTION 14216c7a0 StaticRegisterNativesUWrapBoxSlot body=34 status=ok
// SIG undefined StaticRegisterNativesUWrapBoxSlot(void)

void UWrapBoxSlot::StaticRegisterNativesUWrapBoxSlot(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetFillEmptySpace_144fd3d70,5);
  return;
}



// FUNCTION 14216c7d0 execSetFillEmptySpace body=130 status=ok
// SIG undefined execSetFillEmptySpace(void)

void UWrapBoxSlot::execSetFillEmptySpace(undefined8 param_1,longlong param_2)

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
  SetFillEmptySpace(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 14216c860 execSetFillSpanWhenLessThan body=123 status=ok
// SIG undefined execSetFillSpanWhenLessThan(void)

void UWrapBoxSlot::execSetFillSpanWhenLessThan(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [6];
  
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
  SetFillSpanWhenLessThan(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216c8e0 execSetHorizontalAlignment body=118 status=ok
// SIG undefined execSetHorizontalAlignment(void)

void UWrapBoxSlot::execSetHorizontalAlignment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  SetHorizontalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216c960 execSetPadding body=131 status=ok
// SIG undefined execSetPadding(void)

void UWrapBoxSlot::execSetPadding(undefined8 param_1,longlong param_2)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_18 = (undefined4)local_28;
  uStack_14 = local_28._4_4_;
  uStack_10 = (undefined4)uStack_20;
  uStack_c = uStack_20._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  SetPadding(param_1,&local_18);
  return;
}



// FUNCTION 14216c9f0 execSetVerticalAlignment body=118 status=ok
// SIG undefined execSetVerticalAlignment(void)

void UWrapBoxSlot::execSetVerticalAlignment(undefined8 param_1,longlong param_2)

{
  undefined1 local_res10 [24];
  
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
  SetVerticalAlignment(param_1,local_res10[0]);
  return;
}



// FUNCTION 14216ca70 FUN_14216ca70 body=620 status=ok
// SIG undefined FUN_14216ca70(void)

undefined8 * FUN_14216ca70(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  *param_1 = &PTR_FUN_144fd4300;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x43fa0000;
  *(undefined2 *)((longlong)param_1 + 0x464) = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"TransformComponent",1);
  uVar4 = *puVar2;
  uVar3 = FUN_1429ff160();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8d] = uVar4;
  param_1[0x2d] = uVar4;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"CraneYawControl",1);
  uVar4 = *puVar2;
  uVar3 = FUN_1429ff160();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8e] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0x8d],0);
  lVar1 = param_1[0x8e];
  *(undefined8 *)(lVar1 + 0x1ec) = 0;
  *(undefined4 *)(lVar1 + 500) = 0x428c0000;
  lVar1 = param_1[0x8e];
  *(ulonglong *)(lVar1 + 0x1f8) = (ulonglong)*(uint *)((longlong)param_1 + 0x45c) << 0x20;
  *(undefined4 *)(lVar1 + 0x200) = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"CranePitchControl",1);
  uVar4 = *puVar2;
  uVar3 = FUN_1429ff160();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x8f] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0x8e],0);
  lVar1 = param_1[0x8f];
  *(ulonglong *)(lVar1 + 0x1f8) = (ulonglong)*(uint *)(param_1 + 0x8b);
  *(undefined4 *)(lVar1 + 0x200) = 0;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"CraneCameraMount",1);
  uVar4 = *puVar2;
  uVar3 = FUN_1429ff160();
  uVar4 = FUN_141752410(param_1,uVar4,uVar3,uVar3,1,0,0);
  param_1[0x90] = uVar4;
  local_res8 = 0;
  FUN_142399e30(uVar4,param_1[0x8f],0);
  lVar1 = param_1[0x90];
  *(ulonglong *)(lVar1 + 0x1ec) = (ulonglong)*(uint *)(param_1 + 0x8c);
  *(undefined4 *)(lVar1 + 500) = 0xc1700000;
  return param_1;
}



// FUNCTION 14216cce0 FUN_14216cce0 body=328 status=ok
// SIG undefined FUN_14216cce0(void)

undefined8 * FUN_14216cce0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 6;
  *param_1 = &PTR__scalar_deleting_destructor__144fd49e8;
  *(undefined4 *)(param_1 + 0x8b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x45c) = 0;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TransformComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RailSplineComponent",1);
  uVar3 = *puVar1;
  uVar2 = UGNewsMenuItem::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x8c],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"RailCameraMount",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1429ff160();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x8d],0);
  return param_1;
}



// FUNCTION 14216ce30 FUN_14216ce30 body=214 status=ok
// SIG undefined FUN_14216ce30(void)

undefined8 * FUN_14216ce30(undefined8 *param_1,longlong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 local_res8 [8];
  
  FUN_141784790(param_2,L"CameraComponent");
  uVar2 = FUN_14216efa0();
  puVar3 = (undefined8 *)FName::FName(local_res8,L"CameraComponent",1);
  FObjectInitializer::FOverrides::Add(param_2 + 0x20,*puVar3,uVar2,param_2);
  FUN_1422dfc00(param_1,param_2);
  lVar5 = param_1[0x8c];
  *param_1 = &PTR_FUN_144fd50d0;
  if (lVar5 != 0) {
    lVar4 = FUN_14216efa0();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8)
        != lVar4 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_14216cede;
  }
  lVar5 = 0;
LAB_14216cede:
  *(byte *)((longlong)param_1 + 0x34) = *(byte *)((longlong)param_1 + 0x34) | 2;
  param_1[0x159] = lVar5;
  AActor::SetActorTickEnabled(param_1,1);
  return param_1;
}



// FUNCTION 14216cf10 FUN_14216cf10 body=712 status=ok
// SIG undefined FUN_14216cf10(void)

undefined8 * FUN_14216cf10(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_18 [2];
  
  uVar2 = FUN_14178c940();
  FUN_1422e1120(param_1,uVar2);
  *param_1 = &PTR_FUN_144fd57c0;
  param_1[5] = &PTR_LAB_144fd5d20;
  *(undefined1 *)(param_1 + 0x131) = 1;
  *(undefined4 *)((longlong)param_1 + 0x98c) = 0x47c35000;
  *(byte *)((longlong)param_1 + 0x9a4) = *(byte *)((longlong)param_1 + 0x9a4) & 0xfe;
  param_1[0x132] = 0;
  *(byte *)(param_1 + 0x136) = *(byte *)(param_1 + 0x136) & 0xfe;
  *(undefined8 *)((longlong)param_1 + 0x9b4) = 0x41000000;
  param_1[0x13f] = 0;
  param_1[0x140] = 0;
  param_1[0x141] = 0;
  param_1[0x142] = 0;
  param_1[0x143] = 0;
  param_1[0x144] = 0;
  param_1[0x145] = 0;
  param_1[0x146] = 0;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(uint *)(param_1 + 0x5d) = *(uint *)(param_1 + 0x5d) | 1;
  *(undefined4 *)(param_1 + 300) = 0x41c71eb8;
  *(undefined4 *)((longlong)param_1 + 0x964) = 0x41955c29;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0x42480000;
  *(undefined4 *)(param_1 + 0x12e) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x974) = 0x40000000;
  *(undefined4 *)(param_1 + 0x12f) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x97c) = 0x41700000;
  *(undefined4 *)(param_1 + 0x130) = 7;
  *(undefined1 *)((longlong)param_1 + 0x7d4) = 2;
  FUN_14216e010(param_1);
  lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  if (*(int *)(lVar1 + 0x38) < DAT_146aeac68) {
    _Init_thread_header(&DAT_146aeac68);
    if (DAT_146aeac68 == -1) {
      FUN_141785db0(L"/Engine/ArtTools/RenderToTexture/Meshes/S_1_Unit_Plane.S_1_Unit_Plane");
      local_18[0] = 0;
      local_18[1] = 0x46;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy
                (local_18[0],
                 L"/Engine/ArtTools/RenderToTexture/Meshes/S_1_Unit_Plane.S_1_Unit_Plane",0x8c);
      FUN_14179acf0(local_18,1);
      DAT_146aeac60 = FUN_14095c6b0(local_18);
      if (DAT_146aeac60 == 0) {
        FUN_14178ab20(L"/Engine/ArtTools/RenderToTexture/Meshes/S_1_Unit_Plane.S_1_Unit_Plane");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aeac68);
    }
  }
  param_1[0x13b] = DAT_146aeac60;
  if (*(int *)(lVar1 + 0x38) < DAT_146aeac78) {
    _Init_thread_header(&DAT_146aeac78);
    if (DAT_146aeac78 == -1) {
      FUN_141785db0(L"/Engine/EngineDebugMaterials/M_SimpleTranslucent.M_SimpleTranslucent");
      local_18[0] = 0;
      local_18[1] = 0x45;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_18,0);
      FGenericPlatformString::Memcpy
                (local_18[0],L"/Engine/EngineDebugMaterials/M_SimpleTranslucent.M_SimpleTranslucent"
                 ,0x8a);
      FUN_14179acf0(local_18,1);
      DAT_146aeac70 = FUN_14044ea10(local_18);
      if (DAT_146aeac70 == 0) {
        FUN_14178ab20(L"/Engine/EngineDebugMaterials/M_SimpleTranslucent.M_SimpleTranslucent");
      }
      if (local_18[0] != 0) {
        FMemory::Free();
      }
      _Init_thread_footer(&DAT_146aeac78);
    }
  }
  param_1[0x13c] = DAT_146aeac70;
  return param_1;
}



// FUNCTION 14216d1e0 FUN_14216d1e0 body=425 status=ok
// SIG undefined FUN_14216d1e0(void)

void FUN_14216d1e0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  
  if (*(longlong *)(param_1 + 0x948) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0x940);
  lVar1 = *(longlong *)(param_1 + 0x938);
  if (iVar2 != 0) {
    plVar3 = (longlong *)(lVar1 + 0x5d8);
    do {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 0xc0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x938);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8e8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8d8) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x2b0);
  if (*(longlong *)(param_1 + 0x2a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x180) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x150);
  if (*(longlong *)(param_1 + 0x128) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x108) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xe8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    FMemory::Free();
  }
  FTickFunction::~FTickFunction(param_1 + 0x30);
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_143f47c68;
  FUN_141782120(param_1);
  return;
}



// FUNCTION 14216d3a0 FUN_14216d3a0 body=52 status=ok
// SIG undefined FUN_14216d3a0(void)

undefined8 FUN_14216d3a0(undefined8 param_1,ulonglong param_2)

{
  FUN_1404571d0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x488);
  }
  return param_1;
}



// FUNCTION 14216d3e0 FUN_14216d3e0 body=90 status=ok
// SIG undefined FUN_14216d3e0(void)

longlong FUN_14216d3e0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0xa78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa68) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xad0);
  }
  return param_1;
}



// FUNCTION 14216d440 FUN_14216d440 body=237 status=ok
// SIG undefined FUN_14216d440(void)

longlong FUN_14216d440(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0xa28) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xa18) != 0) {
    FMemory::Free();
  }
  iVar2 = *(int *)(param_1 + 0xa10);
  plVar1 = *(longlong **)(param_1 + 0xa08);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 5;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0xa08);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  iVar2 = *(int *)(param_1 + 0xa00);
  plVar1 = *(longlong **)(param_1 + 0x9f8);
  if (iVar2 != 0) {
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = *(longlong **)(param_1 + 0x9f8);
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  FUN_14216d1e0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa40);
  }
  return param_1;
}



// FUNCTION 14216d530 FUN_14216d530 body=640 status=ok
// SIG undefined FUN_14216d530(void)

void FUN_14216d530(longlong param_1)

{
  byte *pbVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_res8;
  undefined8 local_res10;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  lVar3 = *(longlong *)(param_1 + 0x118);
  if ((lVar3 != 0) && (*(longlong *)(param_1 + 0x9e8) == 0)) {
    local_res8 = 0;
    local_res10 = 0;
    FUN_1417846f0(lVar3,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
                 );
    uVar2 = FUN_142a232e0();
    uVar2 = FUN_1417985e0(uVar2,lVar3,0,0x100008,0,0,0,0,0);
    *(undefined8 *)(param_1 + 0x9e8) = uVar2;
    local_res8 = 0;
    FUN_142399e30(uVar2,param_1,0);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x9e8) + 200);
    *pbVar1 = *pbVar1 & 0xfb;
    (**(code **)(**(longlong **)(param_1 + 0x9e8) + 0x928))
              (*(longlong **)(param_1 + 0x9e8),*(undefined8 *)(param_1 + 0x9d8));
    (**(code **)(**(longlong **)(param_1 + 0x9e8) + 0x640))
              (*(longlong **)(param_1 + 0x9e8),DAT_146aefc58);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x9e8) + 0x24c);
    *pbVar1 = *pbVar1 & 0xbf;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x9e8) + 0x2f1);
    *pbVar1 = *pbVar1 & 0xef;
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x9e8) + 0x664);
    *pbVar1 = *pbVar1 & 0xfd;
    *(undefined1 *)(*(longlong *)(param_1 + 0x9e8) + 0xca) = *(undefined1 *)(param_1 + 0xca);
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x9e8) + 0x2f1);
    *pbVar1 = *pbVar1 & 0xfd;
    lVar3 = *(longlong *)(param_1 + 0x9e8);
    local_20 = 0.0;
    *(undefined8 *)(lVar3 + 0x204) = 0x461c4000461c4000;
    *(undefined4 *)(lVar3 + 0x20c) = 0x3f800000;
    lVar3 = *(longlong *)(param_1 + 0x9e8);
    *(undefined8 *)(lVar3 + 0x1f8) = 0x42b40000;
    *(undefined4 *)(lVar3 + 0x200) = 0;
    lVar3 = *(longlong *)(param_1 + 0x120);
    if (lVar3 == 0) {
      lVar3 = FUN_1423407b0(param_1);
    }
    FUN_14234b270(*(undefined8 *)(param_1 + 0x9e8),lVar3);
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x9e8) + 0x5a0))
                      (*(longlong **)(param_1 + 0x9e8),0,*(undefined8 *)(param_1 + 0x9e0));
    *(longlong *)(param_1 + 0x9f0) = lVar3;
    if (lVar3 != 0) {
      local_28 = (float)*(byte *)(param_1 + 0x9ae) * 0.003921569;
      local_1c = (float)*(byte *)(param_1 + 0x9af) * 0.003921569;
      local_24 = (float)*(byte *)(param_1 + 0x9ad) * 0.003921569;
      local_20 = (float)*(byte *)(param_1 + 0x9ac) * 0.003921569;
      puVar4 = (undefined8 *)FName::FName(&local_res8,L"Color",1);
      FUN_1425a2be0(*(undefined8 *)(param_1 + 0x9f0),*puVar4,&local_28);
    }
  }
  return;
}



// FUNCTION 14216d7b0 FUN_14216d7b0 body=84 status=ok
// SIG undefined FUN_14216d7b0(void)

void FUN_14216d7b0(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_14216e010();
  FUN_1422f01a0(param_1,param_2,param_3);
  (**(code **)(*param_1 + 0x558))(param_1,param_2,param_3);
  *(byte *)(param_1 + 0x13a) = *(byte *)(param_1 + 0x13a) & 0xfe;
  return;
}



// FUNCTION 14216d820 FUN_14216d820 body=389 status=ok
// SIG undefined FUN_14216d820(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float FUN_14216d820(longlong param_1,float *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_38;
  
  fVar9 = 0.0;
  if (*(char *)(param_1 + 0x988) == '\x01') {
    fVar9 = *(float *)(param_1 + 0x98c);
  }
  else if (*(char *)(param_1 + 0x988) == '\x02') {
    if (*(longlong *)(param_1 + 0x990) == 0) {
      fVar9 = *(float *)(param_1 + 0x9a0);
      fVar8 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x998) >> 0x20);
      local_38 = (float)*(undefined8 *)(param_1 + 0x998);
    }
    else {
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x990) + 0x168);
      if (lVar1 == 0) {
        local_38 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar5 = (float)(_DAT_146aeac20 & _DAT_146aeac30);
        fVar6 = (float)(uRam0000000146aeac24 & uRam0000000146aeac34);
        fVar7 = (float)(uRam0000000146aeac28 & uRam0000000146aeac38);
        fVar10 = 0.0;
        fVar11 = 0.0;
        fVar12 = 0.0;
        fVar13 = fRam0000000146aeac2c;
      }
      else {
        fVar10 = *(float *)(lVar1 + 0x210);
        fVar11 = *(float *)(lVar1 + 0x214);
        fVar12 = *(float *)(lVar1 + 0x218);
        local_38 = *(float *)(lVar1 + 0x220);
        fVar8 = *(float *)(lVar1 + 0x224);
        fVar9 = *(float *)(lVar1 + 0x228);
        fVar5 = *(float *)(lVar1 + 0x230);
        fVar6 = *(float *)(lVar1 + 0x234);
        fVar7 = *(float *)(lVar1 + 0x238);
        fVar13 = *(float *)(lVar1 + 0x21c);
      }
      fVar5 = *(float *)(param_1 + 0x998) * fVar5;
      fVar6 = *(float *)(param_1 + 0x99c) * fVar6;
      fVar7 = *(float *)(param_1 + 0x9a0) * fVar7;
      fVar2 = fVar7 * fVar11 - fVar6 * fVar12;
      fVar3 = fVar5 * fVar12 - fVar7 * fVar10;
      fVar4 = fVar6 * fVar10 - fVar5 * fVar11;
      fVar2 = fVar2 + fVar2;
      fVar3 = fVar3 + fVar3;
      fVar4 = fVar4 + fVar4;
      local_38 = (fVar4 * fVar11 - fVar3 * fVar12) + fVar13 * fVar2 + fVar5 + local_38;
      fVar8 = (fVar2 * fVar12 - fVar4 * fVar10) + fVar13 * fVar3 + fVar6 + fVar8;
      fVar9 = (fVar3 * fVar10 - fVar2 * fVar11) + fVar13 * fVar4 + fVar7 + fVar9;
    }
    return SQRT((fVar8 - param_2[1]) * (fVar8 - param_2[1]) +
                (local_38 - *param_2) * (local_38 - *param_2) +
                (fVar9 - param_2[2]) * (fVar9 - param_2[2])) + *(float *)(param_1 + 0x9b8);
  }
  return fVar9 + *(float *)(param_1 + 0x9b8);
}



// FUNCTION 14216d9b0 FUN_14216d9b0 body=181 status=ok
// SIG undefined FUN_14216d9b0(void)

undefined8 * FUN_14216d9b0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_14216efa0();
  lVar3 = plVar1[0x1f];
  if (lVar3 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar3 = plVar1[0x1f];
  }
  lVar2 = 0;
  if (0 < *(int *)(lVar3 + 0xa00)) {
    lVar4 = *(longlong *)(lVar3 + 0x9f8);
    do {
      if ((*(float *)(param_1 + 0x960) == *(float *)(lVar4 + 0x10)) &&
         (*(float *)(param_1 + 0x964) == *(float *)(lVar4 + 0x14))) {
        FString::FString(param_2);
        return param_2;
      }
      lVar2 = lVar2 + 1;
      lVar4 = lVar4 + 0x20;
    } while (lVar2 < *(int *)(lVar3 + 0xa00));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14216da70 FUN_14216da70 body=58 status=ok
// SIG undefined FUN_14216da70(void)

float FUN_14216da70(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x9c0)) {
    fVar1 = _guard_xfg_dispatch_icall_nop
                      ((0.5 / *(float *)(param_1 + 0x9c0)) * *(float *)(param_1 + 0x960));
    fVar1 = fVar1 * 114.59155;
  }
  return fVar1;
}



// FUNCTION 14216dab0 FUN_14216dab0 body=244 status=ok
// SIG undefined FUN_14216dab0(void)

undefined8 * FUN_14216dab0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar1 = (longlong *)FUN_14216efa0();
  lVar4 = plVar1[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    lVar4 = plVar1[0x1f];
  }
  lVar3 = 0;
  if (0 < *(int *)(lVar4 + 0xa10)) {
    lVar5 = *(longlong *)(lVar4 + 0xa08);
    pfVar2 = (float *)(lVar5 + 0x18);
    do {
      if ((((*(float *)(param_1 + 0x96c) == pfVar2[-2]) &&
           (*(float *)(param_1 + 0x970) == pfVar2[-1])) && (*(float *)(param_1 + 0x974) == *pfVar2))
         && (((*(float *)(param_1 + 0x978) == pfVar2[1] &&
              (*(float *)(param_1 + 0x97c) == pfVar2[2])) &&
             (pfVar2[3] == *(float *)(param_1 + 0x980))))) {
        FString::FString(param_2,lVar5);
        return param_2;
      }
      lVar3 = lVar3 + 1;
      lVar5 = lVar5 + 0x28;
      pfVar2 = pfVar2 + 10;
    } while (lVar3 < *(int *)(lVar4 + 0xa10));
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 14216dbb0 FUN_14216dbb0 body=297 status=ok
// SIG undefined FUN_14216dbb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14216dbb0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (*(longlong *)(param_1 + 0xaa8) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xaa8) + 0x168);
    if (lVar1 == 0) {
      fVar12 = 0.0;
      fVar13 = 0.0;
      fVar14 = 0.0;
      fVar5 = (float)(_DAT_146aeac20 & _DAT_146aeac30);
      fVar6 = (float)(uRam0000000146aeac24 & uRam0000000146aeac34);
      fVar7 = (float)(uRam0000000146aeac28 & uRam0000000146aeac38);
      fVar8 = 0.0;
      fVar9 = 0.0;
      fVar10 = 0.0;
      fVar11 = fRam0000000146aeac2c;
    }
    else {
      fVar8 = *(float *)(lVar1 + 0x210);
      fVar9 = *(float *)(lVar1 + 0x214);
      fVar10 = *(float *)(lVar1 + 0x218);
      fVar12 = *(float *)(lVar1 + 0x220);
      fVar13 = *(float *)(lVar1 + 0x224);
      fVar14 = *(float *)(lVar1 + 0x228);
      fVar5 = *(float *)(lVar1 + 0x230);
      fVar6 = *(float *)(lVar1 + 0x234);
      fVar7 = *(float *)(lVar1 + 0x238);
      fVar11 = *(float *)(lVar1 + 0x21c);
    }
    fVar5 = *(float *)(param_1 + 0xab0) * fVar5;
    fVar6 = *(float *)(param_1 + 0xab4) * fVar6;
    fVar7 = *(float *)(param_1 + 0xab8) * fVar7;
    fVar2 = fVar7 * fVar9 - fVar6 * fVar10;
    fVar3 = fVar5 * fVar10 - fVar7 * fVar8;
    fVar4 = fVar6 * fVar8 - fVar5 * fVar9;
    fVar2 = fVar2 + fVar2;
    fVar3 = fVar3 + fVar3;
    fVar4 = fVar4 + fVar4;
    *param_2 = CONCAT44((fVar2 * fVar10 - fVar4 * fVar8) + fVar11 * fVar3 + fVar6 + fVar13,
                        (fVar4 * fVar9 - fVar3 * fVar10) + fVar11 * fVar2 + fVar5 + fVar12);
    *(float *)(param_2 + 1) = (fVar3 * fVar8 - fVar2 * fVar9) + fVar11 * fVar4 + fVar7 + fVar14;
    return param_2;
  }
  *param_2 = *(undefined8 *)(param_1 + 0xab0);
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 0xab8);
  return param_2;
}



// FUNCTION 14216dce0 FUN_14216dce0 body=58 status=ok
// SIG undefined FUN_14216dce0(void)

float FUN_14216dce0(longlong param_1)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 < *(float *)(param_1 + 0x9c0)) {
    fVar1 = _guard_xfg_dispatch_icall_nop
                      ((0.5 / *(float *)(param_1 + 0x9c0)) * *(float *)(param_1 + 0x964));
    fVar1 = fVar1 * 114.59155;
  }
  return fVar1;
}



// FUNCTION 14216dd30 FUN_14216dd30 body=27 status=ok
// SIG undefined FUN_14216dd30(void)

void FUN_14216dd30(longlong param_1)

{
  FUN_1422f4f60();
  *(byte *)(param_1 + 0x9d0) = *(byte *)(param_1 + 0x9d0) | 1;
  return;
}



// FUNCTION 14216dd70 FUN_14216dd70 body=429 status=ok
// SIG undefined FUN_14216dd70(void)

void FUN_14216dd70(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  
  FUN_142349c40();
  plVar8 = (longlong *)FUN_14216efa0();
  lVar12 = plVar8[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar12 = plVar8[0x1f];
  }
  iVar2 = *(int *)(lVar12 + 0xa00);
  lVar14 = 0;
  lVar11 = lVar14;
  lVar13 = lVar14;
  if (0 < (longlong)iVar2) {
    do {
      lVar3 = *(longlong *)(lVar12 + 0x9f8);
      if (*(int *)(param_1 + 0xa20) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0xa18);
      }
      if (*(int *)(lVar13 + 8 + lVar3) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(lVar13 + lVar3);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
      if (iVar7 == 0) {
        *(undefined8 *)(param_1 + 0x960) = *(undefined8 *)(lVar13 + 0x10 + lVar3);
        *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(lVar13 + 0x18 + lVar3);
        break;
      }
      lVar11 = lVar11 + 1;
      lVar13 = lVar13 + 0x20;
    } while (lVar11 < iVar2);
  }
  plVar8 = (longlong *)FUN_14216efa0();
  lVar12 = plVar8[0x1f];
  if (lVar12 == 0) {
    (**(code **)(*plVar8 + 0x368))(plVar8);
    lVar12 = plVar8[0x1f];
  }
  iVar2 = *(int *)(lVar12 + 0xa10);
  lVar11 = lVar14;
  if (0 < (longlong)iVar2) {
    do {
      lVar13 = *(longlong *)(lVar12 + 0xa08);
      if (*(int *)(param_1 + 0xa30) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(param_1 + 0xa28);
      }
      if (*(int *)(lVar14 + 8 + lVar13) == 0) {
        puVar9 = &DAT_143f3eda8;
      }
      else {
        puVar9 = *(undefined2 **)(lVar14 + lVar13);
      }
      iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar9,puVar10);
      if (iVar7 == 0) {
        puVar1 = (undefined4 *)(lVar14 + 0x10 + lVar13);
        uVar4 = puVar1[1];
        uVar5 = puVar1[2];
        uVar6 = puVar1[3];
        *(undefined4 *)(param_1 + 0x96c) = *puVar1;
        *(undefined4 *)(param_1 + 0x970) = uVar4;
        *(undefined4 *)(param_1 + 0x974) = uVar5;
        *(undefined4 *)(param_1 + 0x978) = uVar6;
        *(undefined8 *)(param_1 + 0x97c) = *(undefined8 *)(lVar14 + 0x20 + lVar13);
        break;
      }
      lVar11 = lVar11 + 1;
      lVar14 = lVar14 + 0x28;
    } while (lVar11 < iVar2);
  }
  *(undefined4 *)(param_1 + 0x9c4) = *(undefined4 *)(param_1 + 0xa3c);
  *(undefined4 *)(param_1 + 0x9c0) = *(undefined4 *)(param_1 + 0xa38);
  FUN_14216e010(param_1);
  return;
}



// FUNCTION 14216df20 FUN_14216df20 body=180 status=ok
// SIG undefined FUN_14216df20(void)

void FUN_14216df20(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_28 [16];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  uVar3 = FUN_142238430();
  lVar1 = *(longlong *)(param_1 + 0x168);
  if (lVar1 == 0) {
    uVar6 = (undefined4)DAT_1468b5da0;
    uVar7 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    uVar3 = DAT_1468b5da8;
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
    iVar4 = movmskps(uVar3,auVar2);
    if (iVar4 != 0) {
      *(float *)(lVar1 + 0x250) = local_18;
      *(float *)(lVar1 + 0x254) = fStack_14;
      *(float *)(lVar1 + 600) = fStack_10;
      *(float *)(lVar1 + 0x25c) = fStack_c;
      puVar5 = (undefined8 *)FQuat::Rotator(&local_18,local_28);
      *(undefined8 *)(lVar1 + 0x260) = *puVar5;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
    }
    uVar6 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    uVar3 = *(undefined4 *)(lVar1 + 0x268);
  }
  *(ulonglong *)(param_1 + 0xa98) = CONCAT44(uVar7,uVar6);
  *(undefined4 *)(param_1 + 0xaa0) = uVar3;
  return;
}



// FUNCTION 14216dfe0 FUN_14216dfe0 body=34 status=ok
// SIG undefined FUN_14216dfe0(void)

void FUN_14216dfe0(longlong param_1)

{
  FUN_14216e010();
  *(byte *)(param_1 + 0x9d0) = *(byte *)(param_1 + 0x9d0) | 1;
  FUN_1422f56f0(param_1);
  return;
}



// FUNCTION 14216e010 FUN_14216e010 body=327 status=ok
// SIG undefined FUN_14216e010(void)

void FUN_14216e010(longlong param_1)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x9c0);
  fVar2 = *(float *)(param_1 + 0x96c);
  if ((*(float *)(param_1 + 0x96c) <= fVar3) &&
     (fVar2 = *(float *)(param_1 + 0x970), fVar3 <= *(float *)(param_1 + 0x970))) {
    fVar2 = fVar3;
  }
  fVar3 = *(float *)(param_1 + 0x9c4);
  *(float *)(param_1 + 0x9c0) = fVar2;
  fVar2 = *(float *)(param_1 + 0x974);
  if ((*(float *)(param_1 + 0x974) <= fVar3) &&
     (fVar2 = *(float *)(param_1 + 0x978), fVar3 <= *(float *)(param_1 + 0x978))) {
    fVar2 = fVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  *(float *)(param_1 + 0x9c4) = fVar2;
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0();
    if (lVar1 != 0) goto LAB_14216e086;
  }
  else {
LAB_14216e086:
    lVar1 = UWorld::GetWorldSettings(lVar1,0,1);
    if (lVar1 != 0) {
      fVar3 = *(float *)(lVar1 + 0x588);
      goto LAB_14216e0aa;
    }
  }
  fVar3 = 100.0;
LAB_14216e0aa:
  fVar3 = fVar3 * *(float *)(param_1 + 0x97c) * 0.001;
  if (fVar3 <= *(float *)(param_1 + 0x98c)) {
    fVar3 = *(float *)(param_1 + 0x98c);
  }
  *(float *)(param_1 + 0x98c) = fVar3;
  if (*(float *)(param_1 + 0x9c0) <= 0.0) {
    fVar3 = 0.0;
  }
  else {
    fVar3 = _guard_xfg_dispatch_icall_nop
                      ((0.5 / *(float *)(param_1 + 0x9c0)) * *(float *)(param_1 + 0x960));
    fVar3 = fVar3 * 114.59155;
  }
  *(float *)(param_1 + 0x2d0) = fVar3;
  if (0.0 < *(float *)(param_1 + 0x964)) {
    fVar3 = *(float *)(param_1 + 0x960) / *(float *)(param_1 + 0x964);
    *(float *)(param_1 + 0x968) = fVar3;
    *(float *)(param_1 + 0x2e4) = fVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x968) = 0;
  *(undefined4 *)(param_1 + 0x2e4) = 0;
  return;
}



// FUNCTION 14216e160 FUN_14216e160 body=221 status=ok
// SIG undefined FUN_14216e160(void)

void FUN_14216e160(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  plVar3 = (longlong *)FUN_14216efa0();
  lVar7 = plVar3[0x1f];
  if (lVar7 == 0) {
    (**(code **)(*plVar3 + 0x368))(plVar3);
    lVar7 = plVar3[0x1f];
  }
  iVar1 = *(int *)(lVar7 + 0xa00);
  if (0 < (longlong)iVar1) {
    lVar6 = 0;
    lVar8 = lVar6;
    do {
      puVar9 = (undefined8 *)(*(longlong *)(lVar7 + 0x9f8) + lVar8);
      if (*(int *)(param_2 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar9 + 1) == 0) {
        puVar4 = &DAT_143f3eda8;
      }
      else {
        puVar4 = (undefined2 *)*puVar9;
      }
      iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar4,puVar5);
      if (iVar2 == 0) {
        *(undefined8 *)(param_1 + 0x960) = puVar9[2];
        *(undefined4 *)(param_1 + 0x968) = *(undefined4 *)(puVar9 + 3);
        return;
      }
      lVar6 = lVar6 + 1;
      lVar8 = lVar8 + 0x20;
    } while (lVar6 < iVar1);
  }
  return;
}



// FUNCTION 14216e240 FUN_14216e240 body=225 status=ok
// SIG undefined FUN_14216e240(void)

void FUN_14216e240(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  
  plVar4 = (longlong *)FUN_14216efa0();
  lVar8 = plVar4[0x1f];
  if (lVar8 == 0) {
    (**(code **)(*plVar4 + 0x368))(plVar4);
    lVar8 = plVar4[0x1f];
  }
  iVar1 = *(int *)(lVar8 + 0xa10);
  if (0 < (longlong)iVar1) {
    lVar7 = 0;
    lVar9 = lVar7;
    do {
      puVar10 = (undefined8 *)(*(longlong *)(lVar8 + 0xa08) + lVar9);
      if (*(int *)(param_2 + 1) == 0) {
        puVar6 = &DAT_143f3eda8;
      }
      else {
        puVar6 = (undefined2 *)*param_2;
      }
      if (*(int *)(puVar10 + 1) == 0) {
        puVar5 = &DAT_143f3eda8;
      }
      else {
        puVar5 = (undefined2 *)*puVar10;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar5,puVar6);
      if (iVar3 == 0) {
        uVar2 = puVar10[3];
        *(undefined8 *)(param_1 + 0x96c) = puVar10[2];
        *(undefined8 *)(param_1 + 0x974) = uVar2;
        *(undefined8 *)(param_1 + 0x97c) = puVar10[4];
        return;
      }
      lVar7 = lVar7 + 1;
      lVar9 = lVar9 + 0x28;
    } while (lVar7 < iVar1);
  }
  return;
}



// FUNCTION 14216e330 FUN_14216e330 body=27 status=ok
// SIG undefined FUN_14216e330(void)

void FUN_14216e330(undefined8 param_1)

{
  FUN_1422406d0();
  FUN_14216e9e0(param_1);
  return;
}



// FUNCTION 14216e350 FUN_14216e350 body=221 status=ok
// SIG undefined FUN_14216e350(void)

void FUN_14216e350(longlong param_1)

{
  float fVar1;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  
  FUN_1422406d0();
  if ((*(longlong *)(param_1 + 0x468) != 0) && (*(longlong *)(param_1 + 0x470) != 0)) {
    fVar1 = (float)FUN_1423b1370();
    FUN_1423aee90(*(undefined8 *)(param_1 + 0x468),&local_38,fVar1 * *(float *)(param_1 + 0x458),1);
    local_28 = local_38;
    local_20 = local_30;
    FUN_1423990b0(*(undefined8 *)(param_1 + 0x470),&local_28,0,0,0);
    if (*(char *)(param_1 + 0x45c) != '\0') {
      FUN_1423af6a0(*(undefined8 *)(param_1 + 0x468),&local_28,fVar1 * *(float *)(param_1 + 0x458),1
                   );
      FUN_142399b10(*(undefined8 *)(param_1 + 0x470),&local_28,0,0,0);
    }
  }
  return;
}



// FUNCTION 14216e430 FUN_14216e430 body=523 status=ok
// SIG undefined FUN_14216e430(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14216e430(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  float fVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  float fVar7;
  float local_58;
  float local_54;
  float local_50;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  float fStack_30;
  float fStack_2c;
  undefined1 local_28 [32];
  
  FUN_1422406d0();
  if ((*(longlong *)(param_1 + 0x460) != 0) && ((*(byte *)(param_1 + 0xa90) & 1) != 0)) {
    FUN_14216dbb0(param_1,&local_38);
    lVar1 = *(longlong *)(param_1 + 0x168);
    if (lVar1 == 0) {
      local_48 = _DAT_1468b5d90;
      local_40 = DAT_1468b5d98;
    }
    else {
      local_48 = *(undefined8 *)(lVar1 + 0x220);
      local_40 = *(float *)(lVar1 + 0x228);
    }
    local_58 = (float)local_38 - (float)local_48;
    local_54 = local_38._4_4_ - (float)((ulonglong)local_48 >> 0x20);
    local_50 = fStack_30 - local_40;
    if ((*(byte *)(param_1 + 0xac0) & 1) == 0) {
      uVar6 = FVector::Rotation(&local_58,&local_48);
      puVar5 = (undefined8 *)
               FMath::RInterpTo(local_28,param_1 + 0xa98,uVar6,param_2,
                                *(undefined4 *)(param_1 + 0xa94));
    }
    else {
      puVar5 = (undefined8 *)FVector::Rotation(&local_58,&local_38);
    }
    uVar6 = *puVar5;
    fVar7 = *(float *)(puVar5 + 1);
    fVar3 = local_40;
    if (((*(byte *)(param_1 + 0xabc) & 1) != 0) &&
       (lVar1 = *(longlong *)(param_1 + 0x168), fVar7 = DAT_1468b5da8, fVar3 = DAT_1468b5da8,
       lVar1 != 0)) {
      fVar7 = *(float *)(lVar1 + 0x210);
      local_38 = *(undefined8 *)(lVar1 + 0x210);
      fStack_30 = *(float *)(lVar1 + 0x218);
      fStack_2c = *(float *)(lVar1 + 0x21c);
      auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != *(float *)(lVar1 + 0x214));
      auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != fVar7);
      auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_30);
      auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_2c);
      iVar4 = movmskps((int)puVar5,auVar2);
      if (iVar4 != 0) {
        *(float *)(lVar1 + 0x250) = fVar7;
        *(float *)(lVar1 + 0x254) = *(float *)(lVar1 + 0x214);
        *(float *)(lVar1 + 600) = fStack_30;
        *(float *)(lVar1 + 0x25c) = fStack_2c;
        puVar5 = (undefined8 *)FQuat::Rotator(&local_38,local_28);
        *(undefined8 *)(lVar1 + 0x260) = *puVar5;
        *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar5 + 1);
      }
      fVar7 = *(float *)(lVar1 + 0x268);
      fVar3 = *(float *)(lVar1 + 0x268);
    }
    local_40 = fVar3;
    local_38 = uVar6;
    fStack_30 = fVar7;
    AActor::SetActorRotation(param_1,&local_38,0);
    *(undefined8 *)(param_1 + 0xa98) = uVar6;
    *(float *)(param_1 + 0xaa0) = fVar7;
  }
  *(byte *)(param_1 + 0xac0) = *(byte *)(param_1 + 0xac0) & 0xfe;
  return;
}



// FUNCTION 14216e640 FUN_14216e640 body=515 status=ok
// SIG undefined FUN_14216e640(void)

void FUN_14216e640(longlong param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  float local_50;
  
  lVar6 = *(longlong *)(param_1 + 0x9e8);
  if ((*(byte *)(param_1 + 0x9a8) & 1) == 0) {
    if (lVar6 != 0) {
      FUN_142398ec0(lVar6,0,1);
      *(undefined8 *)(param_1 + 0x9e8) = 0;
      *(undefined8 *)(param_1 + 0x9f0) = 0;
    }
    goto LAB_14216e818;
  }
  if (lVar6 == 0) {
    FUN_14216d530(param_1);
  }
  if ((*(longlong *)(param_1 + 0x9d8) == 0) || (*(longlong *)(param_1 + 0x9e8) == 0))
  goto LAB_14216e818;
  fVar1 = *(float *)(param_1 + 0x210);
  fVar2 = *(float *)(param_1 + 0x214);
  fVar3 = *(float *)(param_1 + 0x218);
  fVar4 = *(float *)(param_1 + 0x21c);
  local_68 = *(undefined8 *)(param_1 + 0x220);
  local_60 = *(float *)(param_1 + 0x228);
  lVar6 = *(longlong *)(param_1 + 0x120);
  fVar9 = -fVar2;
  fVar9 = fVar9 + fVar9;
  fVar8 = fVar3 + fVar3;
  if (lVar6 == 0) {
    lVar6 = FUN_1423407b0(param_1);
  }
  if (lVar6 == 0) {
LAB_14216e774:
    fVar7 = (float)FUN_14216d820(param_1,&local_68);
  }
  else {
    cVar5 = UWorld::IsGameWorld(lVar6);
    if (cVar5 == '\0') goto LAB_14216e774;
    fVar7 = *(float *)(param_1 + 0x9c8);
  }
  local_60 = (fVar9 * fVar4 + fVar8 * fVar1) * fVar7 + *(float *)(param_1 + 0x228);
  local_68 = CONCAT44((fVar8 * fVar4 - fVar9 * fVar1) * fVar7 + *(float *)(param_1 + 0x224),
                      ((fVar9 * fVar2 - fVar8 * fVar3) + 1.0) * fVar7 + *(float *)(param_1 + 0x220))
  ;
  local_50 = local_60;
  FUN_1423990b0(*(undefined8 *)(param_1 + 0x9e8),&local_68,0,0,0);
LAB_14216e818:
  FUN_142357eb0(param_1,param_2,param_3,param_4);
  return;
}



// FUNCTION 14216e850 FUN_14216e850 body=393 status=ok
// SIG undefined FUN_14216e850(void)

void FUN_14216e850(longlong param_1,undefined4 param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  float fVar4;
  
  if (*(char *)(param_1 + 0x988) == '\0') {
    *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) & 0xf07fffff;
    *(uint *)(param_3 + 0x54) = *(uint *)(param_3 + 0x54) & 0xffffff7f;
    return;
  }
  *(undefined4 *)(param_3 + 0x3c) = 0x3f800000;
  *(uint *)(param_3 + 0x54) = *(uint *)(param_3 + 0x54) | 0x80;
  *(undefined1 *)(param_3 + 0x514) = *(undefined1 *)(param_1 + 0x7d4);
  *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 0x1000000;
  uVar1 = *(uint *)(param_3 + 0x50);
  *(undefined4 *)(param_3 + 0x368) = *(undefined4 *)(param_1 + 0x9c4);
  *(uint *)(param_3 + 0x50) = uVar1 | 0x2000000;
  uVar3 = *(undefined4 *)(param_1 + 0x974);
  *(uint *)(param_3 + 0x50) = uVar1 | 0x6000000;
  *(undefined4 *)(param_3 + 0x36c) = uVar3;
  *(undefined4 *)(param_3 + 0x370) = *(undefined4 *)(param_1 + 0x980);
  uVar3 = FUN_14216d820(param_1,param_3);
  lVar2 = *(longlong *)(param_1 + 0x120);
  *(undefined4 *)(param_1 + 0x9c8) = uVar3;
  if (lVar2 == 0) {
    lVar2 = FUN_1423407b0(param_1);
    if (lVar2 != 0) goto LAB_14216e922;
  }
  else {
LAB_14216e922:
    lVar2 = UWorld::GetWorldSettings(lVar2,0,1);
    if (lVar2 != 0) {
      fVar4 = *(float *)(lVar2 + 0x588);
      goto LAB_14216e946;
    }
  }
  fVar4 = 100.0;
LAB_14216e946:
  fVar4 = fVar4 * *(float *)(param_1 + 0x97c) * 0.001;
  if (fVar4 <= *(float *)(param_1 + 0x9c8)) {
    fVar4 = *(float *)(param_1 + 0x9c8);
  }
  *(float *)(param_1 + 0x9c8) = fVar4;
  if (((*(byte *)(param_1 + 0x9b0) & 1) != 0) && ((*(byte *)(param_1 + 0x9d0) & 1) == 0)) {
    fVar4 = (float)FMath::FInterpTo(*(undefined4 *)(param_1 + 0x9cc),fVar4,param_2,
                                    *(undefined4 *)(param_1 + 0x9b4));
    *(float *)(param_1 + 0x9c8) = fVar4;
  }
  *(float *)(param_1 + 0x9cc) = fVar4;
  *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 0x800000;
  uVar3 = *(undefined4 *)(param_1 + 0x9c8);
  *(uint *)(param_3 + 0x50) = *(uint *)(param_3 + 0x50) | 0x8000000;
  *(undefined4 *)(param_3 + 0x520) = uVar3;
  *(undefined4 *)(param_3 + 0x51c) = *(undefined4 *)(param_1 + 0x960);
  return;
}



// FUNCTION 14216e9e0 FUN_14216e9e0 body=734 status=ok
// SIG undefined FUN_14216e9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14216e9e0(longlong param_1)

{
  float *pfVar1;
  longlong lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong in_stack_ffffffffffffffa8;
  ulonglong uVar17;
  undefined8 local_48;
  ulonglong uStack_40;
  ulonglong local_38;
  undefined4 local_30;
  undefined1 local_28 [32];
  
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = (ulonglong)*(uint *)(param_1 + 0x45c) << 0x20;
  local_30 = 0;
  uVar17 = in_stack_ffffffffffffffa8 & 0xffffffffffffff00;
  FUN_142398470(*(undefined8 *)(param_1 + 0x470),&local_38,0,0,uVar17);
  local_38 = (ulonglong)*(uint *)(param_1 + 0x458);
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_30 = 0;
  FUN_142398470(*(undefined8 *)(param_1 + 0x478),&local_38,0,0,uVar17 & 0xffffffffffffff00);
  lVar10 = *(longlong *)(param_1 + 0x480);
  pfVar1 = (float *)(lVar10 + 0x280);
  local_30 = *(undefined4 *)(lVar10 + 500);
  local_38 = CONCAT44((int)((ulonglong)*(undefined8 *)(lVar10 + 0x1ec) >> 0x20),
                      *(undefined4 *)(param_1 + 0x460));
  if (((*(float *)(lVar10 + 0x1f8) != *pfVar1) ||
      (*(float *)(lVar10 + 0x1fc) != *(float *)(lVar10 + 0x284))) ||
     (*(float *)(lVar10 + 0x200) != *(float *)(lVar10 + 0x288))) {
    local_48 = *(ulonglong *)*(undefined1 (*) [12])(lVar10 + 0x1f8);
    auVar11._12_4_ = 0;
    auVar11._0_12_ = *(undefined1 (*) [12])(lVar10 + 0x1f8);
    fVar3 = (float)DAT_146aeac10;
    fVar4 = DAT_146aeac10._4_4_;
    fVar5 = DAT_146aeac10._8_4_;
    auVar11 = divps(auVar11,_DAT_146aeac10);
    fVar14 = (float)local_48 - (float)(int)auVar11._0_4_ * fVar3;
    fVar15 = (float)(local_48 >> 0x20) - (float)(int)auVar11._4_4_ * fVar4;
    fVar16 = *(float *)(lVar10 + 0x200) - (float)(int)auVar11._8_4_ * fVar5;
    fVar14 = (float)(((uint)(fVar14 + fVar3) ^ (uint)fVar14) & -(uint)(0.0 <= fVar14) ^
                    (uint)(fVar14 + fVar3));
    fVar15 = (float)(((uint)(fVar15 + fVar4) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar4));
    fVar16 = (float)(((uint)(fVar16 + fVar5) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar5));
    uVar13 = ((uint)(fVar16 - fVar5) ^ (uint)fVar16) & -(uint)(fRam0000000146aeac08 < fVar16) ^
             (uint)fVar16;
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar13);
    *(ulonglong *)pfVar1 =
         CONCAT44(((uint)(fVar15 - fVar4) ^ (uint)fVar15) & -(uint)(fRam0000000146aeac04 < fVar15) ^
                  (uint)fVar15,
                  ((uint)(fVar14 - fVar3) ^ (uint)fVar14) & -(uint)(_DAT_146aeac00 < fVar14) ^
                  (uint)fVar14);
    *(uint *)(lVar10 + 0x288) = uVar13;
    puVar9 = (undefined8 *)FRotator::Quaternion(pfVar1,local_28);
    uVar6 = puVar9[1];
    *(undefined8 *)(lVar10 + 0x270) = *puVar9;
    *(undefined8 *)(lVar10 + 0x278) = uVar6;
  }
  local_48 = *(undefined8 *)(lVar10 + 0x270);
  uStack_40 = *(ulonglong *)(lVar10 + 0x278);
  uVar17 = 0;
  uVar7 = FUN_142397be0(lVar10,&local_38,&local_48,0,0,0);
  lVar10 = *(longlong *)(param_1 + 0x480);
  lVar2 = *(longlong *)(lVar10 + 400);
  if (lVar2 == 0) {
    local_38 = 0;
  }
  else {
    fVar3 = *(float *)(lVar2 + 0x210);
    local_48 = *(ulonglong *)(lVar2 + 0x210);
    fVar4 = *(float *)(lVar2 + 0x218);
    uStack_40 = *(ulonglong *)(lVar2 + 0x218);
    auVar12._4_4_ = -(uint)(*(float *)(lVar2 + 0x254) != *(float *)(lVar2 + 0x214));
    auVar12._0_4_ = -(uint)(*(float *)(lVar2 + 0x250) != fVar3);
    auVar12._8_4_ = -(uint)(*(float *)(lVar2 + 600) != fVar4);
    auVar12._12_4_ = -(uint)(*(float *)(lVar2 + 0x25c) != *(float *)(lVar2 + 0x21c));
    iVar8 = movmskps(uVar7,auVar12);
    if (iVar8 != 0) {
      *(float *)(lVar2 + 0x250) = fVar3;
      *(float *)(lVar2 + 0x254) = *(float *)(lVar2 + 0x214);
      *(float *)(lVar2 + 600) = fVar4;
      *(float *)(lVar2 + 0x25c) = *(float *)(lVar2 + 0x21c);
      puVar9 = (undefined8 *)FQuat::Rotator(&local_48,&local_38);
      *(undefined8 *)(lVar2 + 0x260) = *puVar9;
      *(undefined4 *)(lVar2 + 0x268) = *(undefined4 *)(puVar9 + 1);
      lVar10 = *(longlong *)(param_1 + 0x480);
    }
    local_38 = *(ulonglong *)(lVar2 + 0x260);
  }
  local_48 = local_38;
  if (*(char *)(param_1 + 0x464) == '\0') {
    local_48 = local_38 & 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 0x465) == '\0') {
    local_48 = CONCAT44(*(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0x1fc),(undefined4)local_48
                       );
  }
  uStack_40 = uStack_40 & 0xffffffff00000000;
  local_38 = local_48;
  local_30 = 0;
  FUN_142399b90(lVar10,&local_38,0,0,uVar17 & 0xffffffffffffff00);
  return;
}



// FUNCTION 14216ecc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UUGRichTextBlock::GetPrivateStaticClass(void)

{
  if (DAT_146aeacd8 == 0) {
    FUN_14171ccd0(L"/Script/CinematicCamera",L"CameraRig_Crane",&DAT_146aeacd8,FUN_140447710,0x488,
                  0x10000000,0,L"Engine",&LAB_14216f2f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146aeacd8;
}



// FUNCTION 14216ed70 FUN_14216ed70 body=47 status=ok
// SIG undefined FUN_14216ed70(void)

longlong FUN_14216ed70(void)

{
  if (DAT_146aeadc0 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860);
  }
  return DAT_146aeadc0;
}



// FUNCTION 14216edc0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong APlayerState::GetPrivateStaticClass(void)

{
  if (DAT_146aeace8 == 0) {
    FUN_14171ccd0(L"/Script/CinematicCamera",L"CameraRig_Rail",&DAT_146aeace8,FUN_140447710,0x478,
                  0x10000000,0,L"Engine",&LAB_14216f310,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146aeace8;
}



// FUNCTION 14216ee80 FUN_14216ee80 body=162 status=ok
// SIG undefined FUN_14216ee80(void)

longlong FUN_14216ee80(void)

{
  if (DAT_146aead10 == 0) {
    FUN_14171ccd0(L"/Script/CinematicCamera",L"CineCameraActor",&DAT_146aead10,FUN_14216f5a0,0xad0,
                  0x10000000,0,L"Engine",&LAB_14216f330,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  thunk_FUN_14290f280,&LAB_140447700,0);
  }
  return DAT_146aead10;
}



// FUNCTION 14216ef30 FUN_14216ef30 body=47 status=ok
// SIG undefined FUN_14216ef30(void)

longlong FUN_14216ef30(void)

{
  if (DAT_146aead08 == 0) {
    FUN_141786440(&DAT_146aead08,&PTR_FUN_144fd6300);
  }
  return DAT_146aead08;
}



// FUNCTION 14216ef60 FUN_14216ef60 body=47 status=ok
// SIG undefined FUN_14216ef60(void)

longlong FUN_14216ef60(void)

{
  if (DAT_146aead00 == 0) {
    FUN_141786a30(&DAT_146aead00,&PTR_FUN_146525be0);
  }
  return DAT_146aead00;
}



// FUNCTION 14216efa0 FUN_14216efa0 body=162 status=ok
// SIG undefined FUN_14216efa0(void)

longlong FUN_14216efa0(void)

{
  if (DAT_146aeadb8 == 0) {
    FUN_14171ccd0(L"/Script/CinematicCamera",L"CineCameraComponent",&DAT_146aeadb8,FUN_14216f5d0,
                  0xa40,0x10000004,0,L"Engine",&LAB_14216f350,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_14216f590,&LAB_140447700,0);
  }
  return DAT_146aeadb8;
}



// FUNCTION 14216f050 FUN_14216f050 body=47 status=ok
// SIG undefined FUN_14216f050(void)

longlong FUN_14216f050(void)

{
  if (DAT_146aeadb0 == 0) {
    FUN_141786440(&DAT_146aeadb0,&PTR_FUN_144fd6e60);
  }
  return DAT_146aeadb0;
}



// FUNCTION 14216f080 FUN_14216f080 body=47 status=ok
// SIG undefined FUN_14216f080(void)

longlong FUN_14216f080(void)

{
  if (DAT_146aead80 == 0) {
    FUN_141786a30(&DAT_146aead80,&PTR_FUN_1465263c0);
  }
  return DAT_146aead80;
}



// FUNCTION 14216f0b0 FUN_14216f0b0 body=47 status=ok
// SIG undefined FUN_14216f0b0(void)

longlong FUN_14216f0b0(void)

{
  if (DAT_146aead88 == 0) {
    FUN_141786a30(&DAT_146aead88,&PTR_FUN_146526400);
  }
  return DAT_146aead88;
}



// FUNCTION 14216f0e0 FUN_14216f0e0 body=47 status=ok
// SIG undefined FUN_14216f0e0(void)

longlong FUN_14216f0e0(void)

{
  if (DAT_146aead90 == 0) {
    FUN_141786a30(&DAT_146aead90,&PTR_FUN_1465264b0);
  }
  return DAT_146aead90;
}



// FUNCTION 14216f110 FUN_14216f110 body=47 status=ok
// SIG undefined FUN_14216f110(void)

longlong FUN_14216f110(void)

{
  if (DAT_146aead98 == 0) {
    FUN_141786a30(&DAT_146aead98,&PTR_FUN_1465264f0);
  }
  return DAT_146aead98;
}



// FUNCTION 14216f140 FUN_14216f140 body=47 status=ok
// SIG undefined FUN_14216f140(void)

longlong FUN_14216f140(void)

{
  if (DAT_146aeada0 == 0) {
    FUN_141786a30(&DAT_146aeada0,&PTR_FUN_1465265a0);
  }
  return DAT_146aeada0;
}



// FUNCTION 14216f170 FUN_14216f170 body=47 status=ok
// SIG undefined FUN_14216f170(void)

longlong FUN_14216f170(void)

{
  if (DAT_146aeada8 == 0) {
    FUN_141786a30(&DAT_146aeada8,&PTR_FUN_1465265e0);
  }
  return DAT_146aeada8;
}



// FUNCTION 14216f1a0 FUN_14216f1a0 body=53 status=ok
// SIG undefined FUN_14216f1a0(void)

void FUN_14216f1a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *puVar1 = &PTR_FUN_144fd73a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14216f1e0 FUN_14216f1e0 body=53 status=ok
// SIG undefined FUN_14216f1e0(void)

void FUN_14216f1e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144fd74b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14216f220 FUN_14216f220 body=53 status=ok
// SIG undefined FUN_14216f220(void)

void FUN_14216f220(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144fd75d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14216f260 FUN_14216f260 body=53 status=ok
// SIG undefined FUN_14216f260(void)

void FUN_14216f260(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_1447cfb08;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 14216f2a0 FUN_14216f2a0 body=53 status=ok
// SIG undefined FUN_14216f2a0(void)

void FUN_14216f2a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144fd76e8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14216f3c0 Copy body=89 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FNamedFilmbackPreset>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10 + param_2);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18 + param_2);
      param_2 = param_2 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14216f420 Copy body=91 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNamedLensPreset>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    do {
      FString::operator=(param_2,param_3 + param_2);
      puVar1 = (undefined4 *)(param_3 + 0x10 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + 0x10) = *puVar1;
      *(undefined4 *)(param_2 + 0x14) = uVar2;
      *(undefined4 *)(param_2 + 0x18) = uVar3;
      *(undefined4 *)(param_2 + 0x1c) = uVar4;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_3 + 0x20 + param_2);
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14216f480 ECameraFocusMethod_StaticEnum body=85 status=ok
// SIG undefined ECameraFocusMethod_StaticEnum(void)

void ECameraFocusMethod_StaticEnum(void)

{
  if (DAT_146aeac80 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    DAT_146aeac80 = GetStaticEnum(FUN_14216f9e0,DAT_146aeadc0,L"ECameraFocusMethod");
  }
  return;
}



// FUNCTION 14216f4e0 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC(void)

{
  return 0x4486bd34;
}



// FUNCTION 14216f4f0 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC(void)

{
  return 0x1820ff76;
}



// FUNCTION 14216f500 FUN_14216f500 body=6 status=ok
// SIG undefined FUN_14216f500(void)

undefined8 FUN_14216f500(void)

{
  return 0x3a6e57fc;
}



// FUNCTION 14216f510 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC(void)

{
  return 0xe138dabb;
}



// FUNCTION 14216f520 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC(void)

{
  return 0x8e89cf34;
}



// FUNCTION 14216f530 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC(void)

{
  return 0xfcae9f13;
}



// FUNCTION 14216f540 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC(void)

{
  return 0xedab198b;
}



// FUNCTION 14216f580 thunk_FUN_14290f280 body=5 status=ok
// SIG undefined thunk_FUN_14290f280(void)

void thunk_FUN_14290f280(void)

{
  FUN_14290f280();
  return;
}



// FUNCTION 14216f5a0 FUN_14216f5a0 body=34 status=ok
// SIG undefined FUN_14216f5a0(void)

void FUN_14216f5a0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14216ee80();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetCineCameraComponent_144fd7360,1);
  return;
}



// FUNCTION 14216f5d0 FUN_14216f5d0 body=34 status=ok
// SIG undefined FUN_14216f5d0(void)

void FUN_14216f5d0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14216efa0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetFilmbackPresetName_144fd7800,6);
  return;
}



// FUNCTION 14216f600 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCameraFilmbackSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead70 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FCameraFilmbackSettings_CRC();
    DAT_146aead70 = GetStaticStruct(FUN_14216fa10,lVar1,L"CameraFilmbackSettings",0xc,uVar2);
  }
  return;
}



// FUNCTION 14216f680 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCameraFocusSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead20 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FCameraFocusSettings_CRC();
    DAT_146aead20 = GetStaticStruct(FUN_14216fa40,lVar1,L"CameraFocusSettings",0x38,uVar2);
  }
  return;
}



// FUNCTION 14216f700 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCameraLensSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead50 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = FUN_14216f500();
    DAT_146aead50 = GetStaticStruct(FUN_14216fa70,lVar1,L"CameraLensSettings",0x18,uVar2);
  }
  return;
}



// FUNCTION 14216f780 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCameraLookatTrackingSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aeacf0 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FCameraLookatTrackingSettings_CRC();
    DAT_146aeacf0 = GetStaticStruct(FUN_14216faa0,lVar1,L"CameraLookatTrackingSettings",0x30,uVar2);
  }
  return;
}



// FUNCTION 14216f800 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCameraTrackingFocusSettings::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead30 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FCameraTrackingFocusSettings_CRC();
    DAT_146aead30 = GetStaticStruct(FUN_14216fad0,lVar1,L"CameraTrackingFocusSettings",0x18,uVar2);
  }
  return;
}



// FUNCTION 14216f880 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNamedFilmbackPreset::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead60 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FNamedFilmbackPreset_CRC();
    DAT_146aead60 = GetStaticStruct(FUN_14216fb00,lVar1,L"NamedFilmbackPreset",0x20,uVar2);
  }
  return;
}



// FUNCTION 14216f900 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNamedLensPreset::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146aead40 == 0) {
    if (DAT_146aeadc0 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146aeadc0,&PTR_s__Script_CinematicCamera_144fd7860)
      ;
    }
    lVar1 = DAT_146aeadc0;
    uVar2 = Get_Z_Construct_UScriptStruct_FNamedLensPreset_CRC();
    DAT_146aead40 = GetStaticStruct(FUN_14216fb30,lVar1,L"NamedLensPreset",0x28,uVar2);
  }
  return;
}



// FUNCTION 14216f980 FUN_14216f980 body=47 status=ok
// SIG undefined FUN_14216f980(void)

longlong FUN_14216f980(void)

{
  if (DAT_146aeacd0 == 0) {
    FUN_141786440(&DAT_146aeacd0,&PTR_GetPrivateStaticClass_144fd5db0);
  }
  return DAT_146aeacd0;
}



// FUNCTION 14216f9b0 FUN_14216f9b0 body=47 status=ok
// SIG undefined FUN_14216f9b0(void)

longlong FUN_14216f9b0(void)

{
  if (DAT_146aeace0 == 0) {
    FUN_141786440(&DAT_146aeace0,&PTR_GetPrivateStaticClass_144fd5f90);
  }
  return DAT_146aeace0;
}



// FUNCTION 14216f9e0 FUN_14216f9e0 body=47 status=ok
// SIG undefined FUN_14216f9e0(void)

longlong FUN_14216f9e0(void)

{
  if (DAT_146aead18 == 0) {
    FUN_1417866a0(&DAT_146aead18,&PTR_FUN_146526a80);
  }
  return DAT_146aead18;
}



// FUNCTION 14216fa10 FUN_14216fa10 body=47 status=ok
// SIG undefined FUN_14216fa10(void)

longlong FUN_14216fa10(void)

{
  if (DAT_146aead78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead78,&PTR_FUN_146526340);
  }
  return DAT_146aead78;
}



// FUNCTION 14216fa40 FUN_14216fa40 body=47 status=ok
// SIG undefined FUN_14216fa40(void)

longlong FUN_14216fa40(void)

{
  if (DAT_146aead28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead28,&PTR_FUN_146525e60);
  }
  return DAT_146aead28;
}



// FUNCTION 14216fa70 FUN_14216fa70 body=47 status=ok
// SIG undefined FUN_14216fa70(void)

longlong FUN_14216fa70(void)

{
  if (DAT_146aead58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead58,&PTR_FUN_146526190);
  }
  return DAT_146aead58;
}



// FUNCTION 14216faa0 FUN_14216faa0 body=47 status=ok
// SIG undefined FUN_14216faa0(void)

longlong FUN_14216faa0(void)

{
  if (DAT_146aeacf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aeacf8,&PTR_FUN_146525b20);
  }
  return DAT_146aeacf8;
}



// FUNCTION 14216fad0 FUN_14216fad0 body=47 status=ok
// SIG undefined FUN_14216fad0(void)

longlong FUN_14216fad0(void)

{
  if (DAT_146aead38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead38,&PTR_FUN_146525fe0);
  }
  return DAT_146aead38;
}



// FUNCTION 14216fb00 FUN_14216fb00 body=47 status=ok
// SIG undefined FUN_14216fb00(void)

longlong FUN_14216fb00(void)

{
  if (DAT_146aead68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead68,&PTR_FUN_146526250);
  }
  return DAT_146aead68;
}



// FUNCTION 14216fb30 FUN_14216fb30 body=47 status=ok
// SIG undefined FUN_14216fb30(void)

longlong FUN_14216fb30(void)

{
  if (DAT_146aead48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146aead48,&PTR_FUN_1465260a0);
  }
  return DAT_146aead48;
}



// FUNCTION 14216fb80 FUN_14216fb80 body=122 status=ok
// SIG undefined FUN_14216fb80(void)

void FUN_14216fb80(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14216d9b0(param_1,local_18);
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
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14216fc00 FUN_14216fc00 body=45 status=ok
// SIG undefined FUN_14216fc00(void)

void FUN_14216fc00(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14216da70();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216fc30 FUN_14216fc30 body=122 status=ok
// SIG undefined FUN_14216fc30(void)

void FUN_14216fc30(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_18 [2];
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)FUN_14216dab0(param_1,local_18);
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
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14216fcb0 FUN_14216fcb0 body=45 status=ok
// SIG undefined FUN_14216fcb0(void)

void FUN_14216fcb0(undefined8 param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_14216dce0();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14216fce0 FUN_14216fce0 body=148 status=ok
// SIG undefined FUN_14216fce0(void)

void FUN_14216fce0(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14216e160(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14216fd80 FUN_14216fd80 body=148 status=ok
// SIG undefined FUN_14216fd80(void)

void FUN_14216fd80(undefined8 param_1,longlong param_2)

{
  longlong local_18 [2];
  
  local_18[0] = 0;
  local_18[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_18);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14216e240(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14216fe20 FUN_14216fe20 body=1145 status=ok
// SIG undefined FUN_14216fe20(void)

undefined8 * FUN_14216fe20(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong local_138;
  undefined8 local_130;
  longlong local_128 [3];
  undefined8 local_110;
  longlong local_108 [3];
  undefined8 local_f0;
  longlong local_e8 [13];
  undefined4 local_80;
  undefined4 local_7c;
  longlong local_78;
  undefined4 local_70;
  undefined4 local_6c;
  longlong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  char local_58;
  undefined1 local_57;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined2 *local_28;
  int local_20;
  undefined1 local_18 [8];
  longlong *local_10;
  
  if ((((int)param_3[1] == 0) || ((longlong *)*param_3 == (longlong *)0x0)) ||
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x18))(), cVar4 == '\0')) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    plVar8 = (longlong *)0x0;
    local_57 = 1;
    local_e8[0xc] = 0;
    local_78 = 0;
    local_68 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_128[0] = 0;
    local_128[1] = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_128,0);
    FGenericPlatformString::Memcpy(local_128[0],L"APIKeyET",0x12);
    plVar7 = plVar8;
    if ((int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_138,local_128,1);
    if (local_e8[0xc] != 0) {
      FMemory::Free();
    }
    local_e8[0xc] = local_138;
    local_80 = (undefined4)local_130;
    local_7c = local_130._4_4_;
    local_130 = 0;
    local_138 = 0;
    if (local_128[0] != 0) {
      FMemory::Free();
    }
    local_108[0] = 0;
    local_108[1] = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_108,0);
    FGenericPlatformString::Memcpy(local_108[0],L"APIServerET",0x18);
    plVar7 = plVar8;
    if ((int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,local_128 + 2,local_108,1);
    if (local_78 != 0) {
      FMemory::Free();
    }
    local_78 = local_128[2];
    local_70 = (undefined4)local_110;
    local_6c = local_110._4_4_;
    local_110 = 0;
    local_128[2] = 0;
    if (local_108[0] != 0) {
      FMemory::Free();
    }
    local_e8[0] = 0;
    local_e8[1] = 0xd;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8,0);
    FGenericPlatformString::Memcpy(local_e8[0],L"AppVersionET",0x1a);
    plVar7 = plVar8;
    if ((int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,local_108 + 2,local_e8,0);
    if (local_68 != 0) {
      FMemory::Free();
    }
    local_68 = local_108[2];
    local_60 = (undefined4)local_f0;
    local_5c = local_f0._4_4_;
    local_f0 = 0;
    local_108[2] = 0;
    if (local_e8[0] != 0) {
      FMemory::Free();
    }
    local_e8[2] = 0;
    local_e8[3] = 0x12;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 2,0);
    FGenericPlatformString::Memcpy(local_e8[2],L"UseLegacyProtocol",0x24);
    plVar7 = plVar8;
    if ((int)param_3[1] != 0) {
      plVar7 = (longlong *)*param_3;
    }
    (**(code **)(*plVar7 + 0x38))(plVar7,&local_28,local_e8 + 2,0);
    puVar6 = &DAT_143f3eda8;
    if (local_20 != 0) {
      puVar6 = local_28;
    }
    local_58 = FToBoolHelper::FromCStringWide(puVar6);
    if (local_28 != (undefined2 *)0x0) {
      FMemory::Free();
    }
    if (local_e8[2] != 0) {
      FMemory::Free();
    }
    if (local_58 == '\0') {
      local_e8[6] = 0;
      local_e8[7] = 0xf;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 6,0);
      FGenericPlatformString::Memcpy(local_e8[6],L"AppEnvironment",0x1e);
      plVar7 = plVar8;
      if ((int)param_3[1] != 0) {
        plVar7 = (longlong *)*param_3;
      }
      (**(code **)(*plVar7 + 0x38))(plVar7,local_e8 + 4,local_e8 + 6,1);
      if (local_50 != 0) {
        FMemory::Free();
      }
      local_50 = local_e8[4];
      local_48 = local_e8[5];
      local_e8[5] = 0;
      local_e8[4] = 0;
      if (local_e8[6] != 0) {
        FMemory::Free();
      }
      local_e8[10] = 0;
      local_e8[0xb] = 0xb;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_e8 + 10,0);
      FGenericPlatformString::Memcpy(local_e8[10],L"UploadType",0x16);
      if ((int)param_3[1] != 0) {
        plVar8 = (longlong *)*param_3;
      }
      (**(code **)(*plVar8 + 0x38))(plVar8,local_e8 + 8,local_e8 + 10,1);
      if (local_40 != 0) {
        FMemory::Free();
      }
      local_40 = local_e8[8];
      local_38 = local_e8[9];
      local_e8[9] = 0;
      local_e8[8] = 0;
      if (local_e8[10] != 0) {
        FMemory::Free();
      }
    }
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x48))(param_1,local_18,local_e8 + 0xc);
    *param_2 = *puVar5;
    lVar3 = puVar5[1];
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      LOCK();
      *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
      UNLOCK();
    }
    if (local_10 != (longlong *)0x0) {
      LOCK();
      plVar8 = local_10 + 1;
      lVar3 = *plVar8;
      *(int *)plVar8 = (int)*plVar8 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*local_10)(local_10);
        LOCK();
        piVar1 = (int *)((longlong)local_10 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*local_10 + 8))(local_10,1);
        }
      }
    }
    if (local_40 != 0) {
      FMemory::Free();
    }
    if (local_50 != 0) {
      FMemory::Free();
    }
    if (local_68 != 0) {
      FMemory::Free();
    }
    if (local_78 != 0) {
      FMemory::Free();
    }
    if (local_e8[0xc] != 0) {
      FMemory::Free();
    }
  }
  return param_2;
}



// FUNCTION 1421702a0 FUN_1421702a0 body=355 status=ok
// SIG undefined FUN_1421702a0(void)

undefined8 * FUN_1421702a0(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  if (*(int *)(param_3 + 8) < 2) {
    *param_2 = 0;
    param_2[1] = 0;
    return param_2;
  }
  lVar3 = operator_new(0x118);
  plVar7 = (longlong *)0x0;
  plVar4 = plVar7;
  if (lVar3 != 0) {
    plVar4 = (longlong *)FUN_142170ba0(lVar3,param_3);
  }
  *param_2 = plVar4;
  plVar5 = (longlong *)operator_new(0x18);
  plVar6 = plVar7;
  if (plVar5 != (longlong *)0x0) {
    *(undefined4 *)(plVar5 + 1) = 1;
    *(undefined4 *)((longlong)plVar5 + 0xc) = 1;
    *plVar5 = (longlong)&PTR_FUN_144fd9a38;
    plVar5[2] = (longlong)plVar4;
    plVar6 = plVar5;
  }
  param_2[1] = plVar6;
  plVar5 = plVar4 + 4;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = plVar7;
  }
  if (plVar5 != (longlong *)0x0) {
    if (*plVar5 != 0) {
      if (plVar5[1] != 0) {
        piVar1 = (int *)(plVar5[1] + 8);
        LOCK();
        iVar2 = *piVar1;
        if (iVar2 == 0) {
          *piVar1 = 0;
          iVar2 = 0;
        }
        UNLOCK();
        if (0 < iVar2) {
          return param_2;
        }
      }
      plVar6 = (longlong *)param_2[1];
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
    }
    *plVar5 = (longlong)plVar4;
    plVar4 = (longlong *)plVar5[1];
    if (plVar6 != plVar4) {
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
        UNLOCK();
        plVar4 = (longlong *)plVar5[1];
      }
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar4 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar4 + 8))(plVar4,1);
        }
      }
      plVar5[1] = (longlong)plVar6;
    }
    if (plVar6 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar6 + 1;
      lVar3 = *plVar4;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)lVar3 == 1) {
        (**(code **)*plVar6)(plVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar6 + 8))(plVar6,1);
        }
      }
    }
  }
  return param_2;
}



// FUNCTION 142170410 StartupModule body=54 status=ok
// SIG undefined StartupModule(void)

void FAIModule::StartupModule(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined1 local_res10 [24];
  
  puVar2 = (undefined8 *)FName::FName(local_res10,&DAT_144fd8eb4,1);
  uVar1 = *puVar2;
  uVar3 = FUN_14168dc80();
  FUN_141690010(uVar3,uVar1);
  return;
}



// FUNCTION 142170450 FUN_142170450 body=229 status=ok
// SIG undefined FUN_142170450(void)

void FUN_142170450(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *local_38;
  int local_30;
  undefined8 local_28;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  local_28 = *param_4;
  local_18 = *param_3;
  uStack_14 = param_3[1];
  uStack_10 = param_3[2];
  uStack_c = param_3[3];
  local_20 = param_4[1];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  uVar6 = FUN_142170750(&local_38,param_2,&local_18,&local_28);
  TBaseDelegate<FSlateBrush_const_*>::operator=(param_1,uVar6);
  if (local_30 != 0) {
    if (local_38 == (longlong *)0x0) goto LAB_1421704f3;
    (**(code **)(*local_38 + 0x28))(local_38,0);
    if (local_38 != (longlong *)0x0) {
      local_38 = (longlong *)FMemory::Realloc(local_38,0,0);
    }
    local_30 = 0;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
LAB_1421704f3:
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142170540 CopyToEmpty<FAnalyticsEventAttribute> body=170 status=ok
// SIG undefined CopyToEmpty<FAnalyticsEventAttribute>(void)

void TArray<FAnalyticsEventAttribute,FDefaultAllocator>::CopyToEmpty<FAnalyticsEventAttribute>
               (longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  lVar2 = *param_1;
  if (param_3 != 0) {
    puVar1 = (undefined8 *)(param_2 + 0x20);
    do {
      FString::FString(lVar2,puVar1 + -4);
      FString::FString(lVar2 + 0x10,puVar1 + -2);
      *(undefined8 *)(lVar2 + 0x20) = *puVar1;
      *(undefined1 *)(lVar2 + 0x28) = *(undefined1 *)(puVar1 + 1);
      *(undefined4 *)(lVar2 + 0x2c) = *(undefined4 *)((longlong)puVar1 + 0xc);
      lVar2 = lVar2 + 0x30;
      param_3 = param_3 + -1;
      puVar1 = puVar1 + 6;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1421705f0 FUN_1421705f0 body=347 status=ok
// SIG undefined FUN_1421705f0(void)

undefined8 *
FUN_1421705f0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  plVar4 = (longlong *)param_2[1];
  local_38 = *param_2;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  plVar5 = (longlong *)param_4[1];
  uVar6 = *param_4;
  uVar7 = *param_3;
  uVar8 = param_3[1];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_30 = plVar4;
  lVar9 = operator_new(0x40,param_1);
  if (lVar9 != 0) {
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    local_48 = uVar6;
    local_40 = plVar5;
    local_28 = uVar7;
    uStack_20 = uVar8;
    FUN_142170a20(lVar9,&local_38,&local_28,&local_48);
  }
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar5 + 1;
    lVar9 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
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
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar5 = plVar4 + 1;
    lVar9 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142170750 FUN_142170750 body=379 status=ok
// SIG undefined FUN_142170750(void)

undefined8
FUN_142170750(undefined8 param_1,longlong param_2,undefined4 *param_3,undefined8 *param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  bool bVar7;
  undefined8 local_48;
  longlong local_40;
  longlong *local_38;
  longlong *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = *param_4;
  local_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  local_40 = param_4[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  plVar2 = *(longlong **)(param_2 + 0x28);
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
          plVar6 = *(longlong **)(param_2 + 0x20);
          LOCK();
          *(int *)(plVar2 + 1) = (int)plVar2[1] + 1;
          UNLOCK();
          LOCK();
          plVar5 = plVar2 + 1;
          lVar3 = *plVar5;
          *(int *)plVar5 = (int)*plVar5 + -1;
          UNLOCK();
          plVar5 = plVar2;
          if ((int)lVar3 == 1) {
            (**(code **)*plVar2)(plVar2);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              (**(code **)(*plVar2 + 8))(plVar2,1);
            }
          }
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
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_38 = plVar6;
  local_30 = plVar5;
  FUN_1421705f0(param_1,&local_38,&local_28,&local_48);
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
  plVar2 = (longlong *)param_4[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar6 = plVar2 + 1;
    lVar3 = *plVar6;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)lVar3 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar4 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 1421708d0 Insert<FDefaultAllocator> body=333 status=ok
// SIG undefined Insert<FDefaultAllocator>(void)

int TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>::Insert<FDefaultAllocator>
              (longlong *param_1,longlong *param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar8 = *(uint *)(param_2 + 1);
  uVar9 = (ulonglong)(int)uVar8;
  iVar5 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar5 + uVar8;
  if (*(int *)((longlong)param_1 + 0xc) < (int)(iVar5 + uVar8)) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar5);
  }
  _Src = (void *)(*param_1 + (longlong)param_3 * 0x30);
  ::_guard_xfg_dispatch_icall_nop
            ((void *)(uVar9 * 0x30 + (longlong)_Src),_Src,(longlong)(iVar5 - param_3) * 0x30);
  lVar7 = *param_2;
  lVar4 = *param_1 + (longlong)param_3 * 0x30;
  while (uVar8 != 0) {
    FString::FString(lVar4,lVar7);
    *(undefined8 *)(lVar4 + 0x10) = 0;
    iVar5 = *(int *)(lVar7 + 0x18);
    lVar2 = *(longlong *)(lVar7 + 0x10);
    *(int *)(lVar4 + 0x18) = iVar5;
    if (iVar5 == 0) {
      *(undefined4 *)(lVar4 + 0x1c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(lVar4 + 0x10,iVar5,0);
      lVar3 = *(longlong *)(lVar4 + 0x10);
      puVar6 = (undefined8 *)(lVar2 + 0x20);
      do {
        FString::FString(lVar3,puVar6 + -4);
        FString::FString(lVar3 + 0x10,puVar6 + -2);
        *(undefined8 *)(lVar3 + 0x20) = *puVar6;
        *(undefined1 *)(lVar3 + 0x28) = *(undefined1 *)(puVar6 + 1);
        *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)((longlong)puVar6 + 0xc);
        lVar3 = lVar3 + 0x30;
        iVar5 = iVar5 + -1;
        puVar6 = puVar6 + 6;
      } while (iVar5 != 0);
    }
    *(undefined8 *)(lVar4 + 0x20) = *(undefined8 *)(lVar7 + 0x20);
    *(uint *)(lVar4 + 0x28) =
         *(uint *)(lVar4 + 0x28) ^ (*(uint *)(lVar4 + 0x28) ^ *(uint *)(lVar7 + 0x28)) & 1;
    puVar1 = (uint *)(lVar7 + 0x28);
    lVar7 = lVar7 + 0x30;
    *(uint *)(lVar4 + 0x28) = *(uint *)(lVar4 + 0x28) ^ (*puVar1 ^ *(uint *)(lVar4 + 0x28)) & 2;
    lVar4 = lVar4 + 0x30;
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
  }
  return param_3;
}



// FUNCTION 142170a20 FUN_142170a20 body=250 status=ok
// SIG undefined FUN_142170a20(void)

undefined8 *
FUN_142170a20(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  plVar4 = (longlong *)param_4[1];
  uVar10 = *param_4;
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar8 = param_3[2];
  uVar9 = param_3[3];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  *param_1 = &PTR_GetPoolName_144fd9a58;
  param_1[1] = *param_2;
  lVar5 = param_2[1];
  param_1[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
    UNLOCK();
  }
  *(undefined4 *)(param_1 + 3) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar7;
  *(undefined4 *)(param_1 + 4) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar9;
  param_1[5] = uVar10;
  param_1[6] = plVar4;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  uVar10 = FDelegateHandle::GenerateNewID();
  param_1[7] = uVar10;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  *param_1 = &PTR_GetPoolName_144fd9aa0;
  plVar4 = (longlong *)param_4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return param_1;
}



// FUNCTION 142170b20 FAnalyticsEventEntry body=126 status=ok
// SIG undefined FAnalyticsEventEntry(void)

undefined8 *
FAnalyticsProviderET::FAnalyticsEventEntry::FAnalyticsEventEntry
          (undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,byte param_4,byte param_5)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  param_1[2] = 0;
  param_1[2] = *param_3;
  *param_3 = 0;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_3 + 0xc);
  param_3[1] = 0;
  FDateTime::UtcNow(param_1 + 4);
  *(uint *)(param_1 + 5) = *(uint *)(param_1 + 5) & 0xfffffffe;
  *(uint *)(param_1 + 5) = ((uint)param_4 | *(uint *)(param_1 + 5)) & 0xfffffffd | (uint)param_5 * 2
  ;
  return param_1;
}



// FUNCTION 142170ba0 FUN_142170ba0 body=1399 status=ok
// SIG undefined FUN_142170ba0(void)

undefined8 * FUN_142170ba0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  void *pvVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  short *psVar8;
  void **ppvVar9;
  int iVar10;
  void **ppvVar11;
  uint uVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  void *pvVar16;
  undefined2 *in_stack_ffffffffffffff98;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  undefined8 local_30;
  
  *param_1 = &PTR__purecall_144fd9818;
  uVar6 = FUN_14164ab60();
  FUN_14158c9d0(param_1 + 1,L"FAnalyticsProviderET",0,uVar6);
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = &PTR_StartSession_144fd9920;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = &PTR_LAB_144fd9a28;
  FString::FString(param_1 + 7,param_2);
  FString::FString(param_1 + 9,param_2 + 0x10);
  param_1[0xb] = 0;
  ppvVar11 = (void **)(param_1 + 0xf);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *ppvVar11 = (void *)0x0;
  param_1[0x10] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8c) = 0x42700000;
  *(undefined4 *)(param_1 + 0x11) = 0x14;
  *(undefined4 *)(param_1 + 0x12) = 0x42f00000;
  param_1[0x13] = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)((longlong)param_1 + 0xa9) = *(undefined1 *)(param_2 + 0x30);
  *(undefined1 *)((longlong)param_1 + 0xaa) = *(undefined1 *)(param_2 + 0x31);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  plVar1 = param_1 + 0x1a;
  *plVar1 = 0;
  param_1[0x1b] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x1c),4000);
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  if ((*(int *)(param_1 + 8) < 2) || (*(int *)(param_1 + 10) < 2)) {
    in_stack_ffffffffffffff98 = &DAT_143f3eda8;
    if (*(int *)(param_1 + 10) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)param_1[9];
    }
    if (*(int *)(param_1 + 8) == 0) {
      puVar15 = &DAT_143f3eda8;
    }
    else {
      puVar15 = (undefined2 *)param_1[7];
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x149,L"AnalyticsET: APIKey (%s) and APIServer (%s) cannot be empty!",
               puVar15,puVar7);
    if (*(int *)(param_1 + 10) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)param_1[9];
    }
    if (*(int *)(param_1 + 8) != 0) {
      in_stack_ffffffffffffff98 = (undefined2 *)param_1[7];
    }
    FDebug::AssertFailed
              (&DAT_144fd792c,"Unknown",0x149,
               L"AnalyticsET: APIKey (%s) and APIServer (%s) cannot be empty!",
               in_stack_ffffffffffffff98,puVar7);
  }
  uVar6 = FCommandLine::Get();
  cVar5 = FParse::Param(uVar6,L"ANALYTICSDISABLECACHING");
  bVar4 = false;
  bVar3 = true;
  if (cVar5 == '\0') {
    if (*(char *)(param_1 + 0x14) != '\0') {
      iVar10 = *(int *)(param_1 + 0x11) + 1;
      goto LAB_142170db1;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  iVar10 = 2;
LAB_142170db1:
  if (*(int *)((longlong)param_1 + 0xdc) < iVar10) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(plVar1);
  }
  iVar10 = *(int *)(param_1 + 0x1b);
  *(int *)(param_1 + 0x1b) = iVar10 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar10 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar1,iVar10);
  }
  pvVar16 = (void *)0x0;
  puVar13 = (undefined8 *)((longlong)iVar10 * 0x30 + *plVar1);
  *puVar13 = 0;
  puVar13[1] = 0;
  puVar13[2] = 0;
  puVar13[3] = 0;
  FDateTime::UtcNow(puVar13 + 4);
  *(uint *)(puVar13 + 5) = *(uint *)(puVar13 + 5) & 0xfffffffe;
  *(uint *)(puVar13 + 5) = *(uint *)(puVar13 + 5) | 2;
  local_40 = *(int *)(param_2 + 0x28);
  lVar14 = (longlong)local_40;
  pvVar2 = *(void **)(param_2 + 0x20);
  local_48 = (void *)0x0;
  if (local_40 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_40,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar2,lVar14 * 2);
  }
  uVar6 = FCommandLine::Get();
  FParse::Value(uVar6,L"ANALYTICSAPPVERSION=",&local_48,0);
  if (local_40 < 2) {
    psVar8 = (short *)FUN_14162b4e0();
    local_58 = (void *)0x0;
    local_50 = 0;
    if ((psVar8 != (short *)0x0) && (*psVar8 != 0)) {
      lVar14 = -1;
      do {
        lVar14 = lVar14 + 1;
      } while (psVar8[lVar14] != 0);
      uVar12 = (int)lVar14 + 1;
      local_50 = (ulonglong)uVar12;
      if (0 < (int)uVar12) {
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      }
      pvVar16 = local_58;
      FGenericPlatformString::Memcpy(local_58,psVar8,(longlong)(int)uVar12 * 2);
    }
    ppvVar9 = &local_58;
    bVar4 = true;
    bVar3 = false;
  }
  else {
    uVar6 = FUN_14162b4e0();
    ppvVar9 = (void **)FString::Replace(&local_48,&local_38,L"%VERSION%",uVar6,
                                        (ulonglong)in_stack_ffffffffffffff98 & 0xffffffff00000000);
    pvVar16 = local_58;
  }
  if (ppvVar11 != ppvVar9) {
    if (*ppvVar11 != (void *)0x0) {
      FMemory::Free();
    }
    *ppvVar11 = *ppvVar9;
    *ppvVar9 = (void *)0x0;
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(ppvVar9 + 1);
    *(undefined4 *)((longlong)param_1 + 0x84) = *(undefined4 *)((longlong)ppvVar9 + 0xc);
    ppvVar9[1] = (void *)0x0;
    pvVar16 = local_58;
  }
  if (bVar3) {
    if (local_38 != (void *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar4) && (pvVar16 != (void *)0x0)) {
    FMemory::Free(pvVar16);
  }
  if (*(char *)((longlong)param_1 + 0xa9) == '\0') {
    if (*(int *)(param_2 + 0x40) < 2) {
      local_38 = (void *)0x0;
      local_30 = 0x15;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_38,0);
      FGenericPlatformString::Memcpy(local_38,L"datacollector-binary",0x2a);
      ppvVar11 = &local_38;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      iVar10 = *(int *)(param_2 + 0x40);
      pvVar2 = *(void **)(param_2 + 0x38);
      local_58 = (void *)0x0;
      local_50 = CONCAT44(local_50._4_4_,iVar10);
      if (iVar10 == 0) {
        local_50 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_58,iVar10,0);
        _guard_xfg_dispatch_icall_nop(local_58,pvVar2,(longlong)iVar10 * 2);
      }
      ppvVar11 = &local_58;
      bVar4 = false;
      bVar3 = true;
    }
    FString::operator=(param_1 + 0x16,ppvVar11);
    if (bVar3) {
      if (local_58 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((bVar4) && (local_38 != (void *)0x0)) {
      FMemory::Free();
    }
    if (*(int *)(param_2 + 0x50) < 2) {
      local_58 = (void *)0x0;
      local_50 = 0xe;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
      FGenericPlatformString::Memcpy(local_58,L"eteventstream",0x1c);
      ppvVar11 = &local_58;
      bVar4 = true;
      bVar3 = false;
    }
    else {
      iVar10 = *(int *)(param_2 + 0x50);
      pvVar2 = *(void **)(param_2 + 0x48);
      local_38 = (void *)0x0;
      local_30 = CONCAT44(local_30._4_4_,iVar10);
      if (iVar10 == 0) {
        local_30 = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,iVar10,0);
        _guard_xfg_dispatch_icall_nop(local_38,pvVar2,(longlong)iVar10 * 2);
      }
      ppvVar11 = &local_38;
      bVar4 = false;
      bVar3 = true;
    }
    FString::operator=(param_1 + 0x18,ppvVar11);
    if (bVar3) {
      if (local_38 != (void *)0x0) {
        FMemory::Free();
      }
    }
    if ((bVar4) && (local_58 != (void *)0x0)) {
      FMemory::Free();
    }
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 142171120 ~TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator> body=95 status=ok
// SIG undefined ~TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>(void)

void TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>::
     ~TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
                (plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 142171180 FUN_142171180 body=134 status=ok
// SIG undefined FUN_142171180(void)

void FUN_142171180(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = (longlong *)param_1[6];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar5 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  plVar4 = (longlong *)param_1[2];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar4 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar3 == 1) && (plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  *param_1 = IDelegateInstance::vftable;
  return;
}



// FUNCTION 142171210 FUN_142171210 body=474 status=ok
// SIG undefined FUN_142171210(void)

void FUN_142171210(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  *param_1 = (longlong)&PTR_StartSession_144fd9920;
  param_1[1] = (longlong)&PTR_LAB_144fd9a28;
  *(undefined1 *)(param_1 + 0x15) = 1;
  if ((char)param_1[6] != '\0') {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"SessionEnd",0x16);
    (**(code **)(*param_1 + 200))(param_1,&local_18,&local_28);
    plVar3 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (plVar3[2] != 0) {
        FMemory::Free();
      }
      if (*plVar3 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 6;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
  ::
  ~TArray<TFunction<TOptional<FExpressionError>___cdecl(FExpressionTokenConsumer_&)>,FDefaultAllocator>
            (param_1 + 0x21);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>::
  ~TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>(param_1 + 0x1a);
  if (param_1[0x18] != 0) {
    FMemory::Free();
  }
  if (param_1[0x16] != 0) {
    FMemory::Free();
  }
  if (param_1[0xf] != 0) {
    FMemory::Free();
  }
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  if (param_1[0xb] != 0) {
    FMemory::Free();
  }
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  if (param_1[7] != 0) {
    FMemory::Free();
  }
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (plVar3 != (longlong *)0x0)) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  FTickerObjectBase::~FTickerObjectBase(param_1 + 1);
  *param_1 = (longlong)&PTR__purecall_144fd9510;
  return;
}



// FUNCTION 1421713f0 operator= body=154 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FAnalyticsEventAttribute,FDefaultAllocator>::operator=
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    plVar1 = (longlong *)*param_1;
    iVar2 = *(int *)(param_1 + 1);
    if (iVar2 != 0) {
      do {
        if (plVar1[2] != 0) {
          FMemory::Free();
        }
        if (*plVar1 != 0) {
          FMemory::Free();
        }
        plVar1 = plVar1 + 6;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      plVar1 = (longlong *)*param_1;
    }
    if (plVar1 != (longlong *)0x0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
  }
  return param_1;
}



// FUNCTION 1421714a0 FUN_1421714a0 body=52 status=ok
// SIG undefined FUN_1421714a0(void)

undefined8 FUN_1421714a0(undefined8 param_1,ulonglong param_2)

{
  FUN_142171180();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1421714e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FBuildTileConesCS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142171210();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 142171520 FUN_142171520 body=43 status=ok
// SIG undefined FUN_142171520(void)

undefined8 * FUN_142171520(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__purecall_144fd9510;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 142171550 FUN_142171550 body=120 status=ok
// SIG undefined FUN_142171550(void)

void FUN_142171550(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x40);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &PTR_GetPoolName_144fd9a58;
    puVar3[1] = *(undefined8 *)(param_1 + 8);
    lVar1 = *(longlong *)(param_1 + 0x10);
    puVar3[2] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 0xc) = *(int *)(lVar1 + 0xc) + 1;
      UNLOCK();
    }
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    puVar3[3] = *(undefined8 *)(param_1 + 0x18);
    puVar3[4] = uVar2;
    puVar3[5] = *(undefined8 *)(param_1 + 0x28);
    lVar1 = *(longlong *)(param_1 + 0x30);
    puVar3[6] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
    }
    puVar3[7] = *(undefined8 *)(param_1 + 0x38);
    *puVar3 = &PTR_GetPoolName_144fd9aa0;
  }
  return;
}



// FUNCTION 1421715d0 DestroyObject body=47 status=ok
// SIG undefined DestroyObject(void)

void SharedPointerInternals::
     TReferenceControllerWithDeleter<TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>,SharedPointerInternals::DefaultDeleter<TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>_>_>
     ::DestroyObject(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 != 0) {
    TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>::
    ~TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>(lVar1);
    FMemory::operator_delete(lVar1,0x10);
    return;
  }
  return;
}



// FUNCTION 142171600 FUN_142171600 body=25 status=ok
// SIG undefined FUN_142171600(void)

void FUN_142171600(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142171611. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xc0))(plVar1,1);
    return;
  }
  return;
}



// FUNCTION 142171620 EndSession body=236 status=ok
// SIG undefined EndSession(void)

void FAnalyticsProviderET::EndSession(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  if ((char)param_1[6] != '\0') {
    local_28 = (longlong *)0x0;
    local_20 = 0;
    local_18 = 0;
    local_10 = 0xb;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_18,0);
    FGenericPlatformString::Memcpy(local_18,L"SessionEnd",0x16);
    (**(code **)(*param_1 + 200))(param_1,&local_18,&local_28);
    plVar1 = local_28;
    for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 6;
    }
    if (local_28 != (longlong *)0x0) {
      FMemory::Free(local_28);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1);
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(int *)((longlong)param_1 + 0x74) != 0) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0xd,0);
  }
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}



// FUNCTION 142171710 FUN_142171710 body=1665 status=ok
// SIG undefined FUN_142171710(void)

void FUN_142171710(longlong param_1,longlong param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong local_188;
  int local_180;
  int local_17c;
  longlong local_178;
  undefined8 local_170;
  longlong local_168;
  undefined8 local_160;
  undefined8 local_158;
  uint local_150;
  longlong local_148;
  undefined8 local_140;
  longlong local_138;
  undefined8 local_130;
  longlong local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 local_100;
  undefined4 local_fc;
  void *local_f8;
  int local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined1 local_e0;
  undefined4 local_dc;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  void *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  longlong local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined1 local_80;
  undefined4 local_7c;
  void *local_78;
  ulonglong local_70;
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  
  plVar4 = param_5;
  if (((longlong *)*param_3 == (longlong *)0x0) ||
     (iVar7 = (**(code **)(*(longlong *)*param_3 + 0x40))(), 6 < iVar7 - 200U)) {
    puVar9 = (undefined8 *)FDateTime::UtcNow(&param_5);
    *(undefined8 *)(param_1 + 0x98) = *puVar9;
    if ((*plVar4 != 0) && (*(char *)(param_1 + 0xa0) != '\0')) {
      if (*(int *)(param_1 + 0xd8) < 0x400) {
        local_188 = 0;
        uVar8 = 0;
        local_17c = 0;
        if ((longlong *)*param_3 != (longlong *)0x0) {
          uVar8 = (**(code **)(*(longlong *)*param_3 + 0x40))();
        }
        FString::PrintfImpl(&local_78,&DAT_144fd9140,uVar8);
        local_148 = 0;
        local_140 = 0xc;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_148,0);
        lVar13 = local_148;
        FGenericPlatformString::Memcpy(local_148,L"HTTP_STATUS",0x18);
        pvVar6 = local_78;
        local_108 = lVar13;
        local_100 = (undefined4)local_140;
        local_fc = local_140._4_4_;
        local_f8 = (void *)0x0;
        iVar7 = (int)local_70;
        local_f0 = iVar7;
        if (iVar7 == 0) {
          local_ec = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_f8,local_70 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_f8,pvVar6,(longlong)iVar7 * 2);
        }
        local_e0 = 0;
        local_e8 = 0;
        local_dc = 0;
        local_180 = 1;
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_188,0);
        lVar13 = local_188;
        FString::FString(local_188,&local_108);
        FString::FString(lVar13 + 0x10,&local_f8);
        *(undefined1 *)(lVar13 + 0x28) = local_e0;
        *(undefined4 *)(lVar13 + 0x2c) = local_dc;
        *(undefined8 *)(lVar13 + 0x20) = local_e8;
        if (local_f8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_108 != 0) {
          FMemory::Free();
        }
        if (local_78 != (void *)0x0) {
          FMemory::Free();
        }
        FString::PrintfImpl(&local_68,&DAT_144fd9160,*(undefined4 *)(*plVar4 + 8));
        local_138 = 0;
        local_130 = 0x10;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,0);
        lVar11 = local_138;
        FGenericPlatformString::Memcpy(local_138,L"EVENTS_IN_BATCH",0x20);
        pvVar6 = local_68;
        local_d8 = lVar11;
        local_d0 = (undefined4)local_130;
        local_cc = local_130._4_4_;
        local_c8 = (void *)0x0;
        iVar7 = (int)local_60;
        local_c0 = iVar7;
        if (iVar7 == 0) {
          local_bc = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_c8,local_60 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_c8,pvVar6,(longlong)iVar7 * 2);
        }
        iVar7 = local_180;
        lVar11 = (longlong)local_180;
        local_b8 = 0;
        local_b0 = 0;
        local_180 = local_180 + 1;
        local_ac = 0;
        if (local_17c < local_180) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_188,iVar7);
          lVar13 = local_188;
        }
        iVar12 = local_17c;
        iVar7 = local_180;
        lVar11 = lVar11 * 0x30 + lVar13;
        FString::FString(lVar11,&local_d8);
        FString::FString(lVar11 + 0x10,&local_c8);
        *(undefined1 *)(lVar11 + 0x28) = local_b0;
        *(undefined4 *)(lVar11 + 0x2c) = local_ac;
        *(undefined8 *)(lVar11 + 0x20) = local_b8;
        if (local_c8 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_d8 != 0) {
          FMemory::Free();
        }
        if (local_68 != (void *)0x0) {
          FMemory::Free();
        }
        FString::PrintfImpl(&local_58,&DAT_144fd9188,*(undefined4 *)(param_1 + 0xd8));
        local_128 = 0;
        local_120 = 0xe;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_128,0);
        lVar11 = local_128;
        FGenericPlatformString::Memcpy(local_128,L"EVENTS_QUEUED",0x1c);
        pvVar6 = local_58;
        local_a8 = lVar11;
        local_a0 = (undefined4)local_120;
        local_98 = (void *)0x0;
        local_9c = local_120._4_4_;
        iVar10 = (int)local_50;
        local_90 = iVar10;
        if (iVar10 == 0) {
          local_8c = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_98,local_50 & 0xffffffff,0);
          _guard_xfg_dispatch_icall_nop(local_98,pvVar6,(longlong)iVar10 * 2);
        }
        local_180 = iVar7 + 1;
        local_88 = 0;
        local_80 = 0;
        local_7c = 0;
        if (iVar12 < local_180) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_188,iVar7);
          lVar13 = local_188;
          iVar12 = local_17c;
        }
        iVar10 = local_180;
        lVar11 = (longlong)iVar7 * 0x30 + lVar13;
        FString::FString(lVar11,&local_a8);
        FString::FString(lVar11 + 0x10,&local_98);
        *(undefined1 *)(lVar11 + 0x28) = local_80;
        *(undefined4 *)(lVar11 + 0x2c) = local_7c;
        *(undefined8 *)(lVar11 + 0x20) = local_88;
        if (local_98 != (void *)0x0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
        if (local_58 != (void *)0x0) {
          FMemory::Free();
        }
        local_110 = 0x15;
        local_118 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_118,0);
        uVar5 = local_118;
        FGenericPlatformString::Memcpy(local_118,L"ET.DroppedSubmission",0x2a);
        local_170 = local_110;
        local_178 = uVar5;
        local_160 = CONCAT44(iVar12,iVar10);
        local_168 = lVar13;
        FDateTime::UtcNow();
        iVar7 = *(int *)(param_1 + 0xd8);
        local_150 = local_150 & 0xfffffffc;
        *(int *)(param_1 + 0xd8) = iVar7 + 1;
        if (*(int *)(param_1 + 0xdc) < iVar7 + 1) {
          TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0xd0,iVar7);
        }
        puVar9 = (undefined8 *)((longlong)iVar7 * 0x30 + *(longlong *)(param_1 + 0xd0));
        *puVar9 = 0;
        *puVar9 = local_178;
        local_178 = 0;
        *(undefined4 *)(puVar9 + 1) = (undefined4)local_170;
        *(undefined4 *)((longlong)puVar9 + 0xc) = local_170._4_4_;
        local_170 = 0;
        puVar9[2] = 0;
        puVar9[2] = local_168;
        local_168 = 0;
        *(undefined4 *)(puVar9 + 3) = (undefined4)local_160;
        *(undefined4 *)((longlong)puVar9 + 0x1c) = local_160._4_4_;
        local_160 = 0;
        puVar9[4] = local_158;
        *(uint *)(puVar9 + 5) = *(uint *)(puVar9 + 5) ^ (local_150 ^ *(uint *)(puVar9 + 5)) & 1;
        *(uint *)(puVar9 + 5) = *(uint *)(puVar9 + 5) ^ (local_150 ^ *(uint *)(puVar9 + 5)) & 2;
        TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
                  (&local_168);
        if (local_178 != 0) {
          FMemory::Free();
        }
      }
      if ((*(char *)(param_1 + 0xa0) != '\0') && (*(int *)(param_1 + 0xd8) < 0x100)) {
        TArray<FAnalyticsProviderET::FAnalyticsEventEntry,FDefaultAllocator>::
        Insert<FDefaultAllocator>(param_1 + 0xd0,*plVar4,0);
      }
    }
  }
  plVar3 = *(longlong **)(param_2 + 8);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar13 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar4 = (longlong *)plVar4[1];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    lVar13 = *plVar3;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)lVar13 == 1) {
      (**(code **)*plVar4)(plVar4);
      LOCK();
      piVar2 = (int *)((longlong)plVar4 + 0xc);
      iVar7 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (**(code **)(*plVar4 + 8))(plVar4,1);
      }
    }
  }
  return;
}



// FUNCTION 142171da0 FUN_142171da0 body=404 status=ok
// SIG undefined FUN_142171da0(void)

void FUN_142171da0(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  longlong local_30;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar7 = (longlong *)0x0;
  plVar6 = plVar2;
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar2[1];
    bVar8 = iVar5 == 0;
    if (bVar8) {
      *(int *)(plVar2 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (plVar6 = plVar7, !bVar8) {
      LOCK();
      bVar8 = iVar5 == (int)plVar2[1];
      if (bVar8) {
        *(int *)(plVar2 + 1) = iVar5 + 1;
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
      iVar5 = (int)plVar2[1];
      bVar8 = iVar5 == 0;
      if (bVar8) {
        *(int *)(plVar2 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  local_58 = *(undefined8 *)(param_1 + 0x28);
  local_20 = *(undefined4 *)(param_1 + 0x18);
  uStack_1c = *(undefined4 *)(param_1 + 0x1c);
  pcVar3 = *(code **)(param_1 + 0x18);
  iStack_18 = *(int *)(param_1 + 0x20);
  uStack_14 = *(undefined4 *)(param_1 + 0x24);
  local_50 = *(longlong *)(param_1 + 0x30);
  if (local_50 != 0) {
    LOCK();
    *(int *)(local_50 + 8) = *(int *)(local_50 + 8) + 1;
    UNLOCK();
  }
  local_48 = *param_3;
  local_40 = param_3[1];
  if (local_40 != 0) {
    LOCK();
    *(int *)(local_40 + 8) = *(int *)(local_40 + 8) + 1;
    UNLOCK();
  }
  local_38 = *param_2;
  local_30 = param_2[1];
  if (local_30 != 0) {
    LOCK();
    *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
    UNLOCK();
  }
  (*pcVar3)((longlong)iStack_18 + (longlong)plVar7,&local_38,&local_48,param_4,&local_58);
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    plVar2 = plVar6 + 1;
    lVar4 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar6 + 8))(plVar6,1);
      }
    }
  }
  plVar2 = (longlong *)param_2[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  plVar2 = (longlong *)param_3[1];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    plVar7 = plVar2 + 1;
    lVar4 = *plVar7;
    *(int *)plVar7 = (int)*plVar7 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar2)(plVar2);
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      iVar5 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar2 + 8))(plVar2,1);
      }
    }
  }
  return;
}



// FUNCTION 142171f40 FUN_142171f40 body=511 status=ok
// SIG undefined FUN_142171f40(void)

undefined8 FUN_142171f40(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  longlong local_10;
  
  plVar3 = *(longlong **)(param_1 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    iVar5 = (int)plVar3[1];
    bVar6 = iVar5 == 0;
    if (bVar6) {
      *(int *)(plVar3 + 1) = 0;
      iVar5 = 0;
    }
    UNLOCK();
    while (!bVar6) {
      LOCK();
      bVar6 = iVar5 == (int)plVar3[1];
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
      }
      UNLOCK();
      if (bVar6) {
        if (plVar3 != (longlong *)0x0) {
          if (*(longlong *)(param_1 + 8) != 0) {
            local_28 = *param_3;
            local_20 = param_3[1];
            if (local_20 != 0) {
              LOCK();
              *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
              UNLOCK();
            }
            local_18 = *param_2;
            local_10 = param_2[1];
            if (local_10 != 0) {
              LOCK();
              *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
              UNLOCK();
            }
            FUN_142171da0(param_1,&local_18,&local_28);
            LOCK();
            plVar1 = plVar3 + 1;
            lVar4 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar4 == 1) {
              (**(code **)*plVar3)(plVar3);
              LOCK();
              piVar2 = (int *)((longlong)plVar3 + 0xc);
              iVar5 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar5 == 1) {
                (**(code **)(*plVar3 + 8))(plVar3,1);
              }
            }
            plVar3 = (longlong *)param_2[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            plVar3 = (longlong *)param_3[1];
            if (plVar3 != (longlong *)0x0) {
              LOCK();
              plVar1 = plVar3 + 1;
              lVar4 = *plVar1;
              *(int *)plVar1 = (int)*plVar1 + -1;
              UNLOCK();
              if ((int)lVar4 == 1) {
                (**(code **)*plVar3)(plVar3);
                LOCK();
                piVar2 = (int *)((longlong)plVar3 + 0xc);
                iVar5 = *piVar2;
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (iVar5 == 1) {
                  (**(code **)(*plVar3 + 8))(plVar3,1);
                }
              }
            }
            return 1;
          }
          LOCK();
          plVar1 = plVar3 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plVar3)(plVar3);
            LOCK();
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              (**(code **)(*plVar3 + 8))(plVar3,1);
            }
          }
        }
        break;
      }
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar6 = iVar5 == 0;
      if (bVar6) {
        *(int *)(plVar3 + 1) = 0;
        iVar5 = 0;
      }
      UNLOCK();
    }
  }
  plVar3 = (longlong *)param_2[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  plVar3 = (longlong *)param_3[1];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    plVar1 = plVar3 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plVar3)(plVar3);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      iVar5 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (**(code **)(*plVar3 + 8))(plVar3,1);
      }
    }
  }
  return 0;
}



// FUNCTION 142172140 FUN_142172140 body=9021 status=ok
// SIG undefined FUN_142172140(void)

void FUN_142172140(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  void *pvVar3;
  void *pvVar4;
  size_t sVar5;
  longlong **pplVar6;
  double dVar7;
  undefined4 uVar8;
  undefined8 *_Src;
  wchar_t *pwVar9;
  char cVar10;
  BOOL BVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong *plVar18;
  undefined8 uVar19;
  int iVar20;
  longlong *plVar21;
  undefined2 *puVar22;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar23;
  int iVar24;
  wchar_t *pwVar26;
  undefined2 *puVar27;
  int iVar28;
  int iVar29;
  ulonglong uVar30;
  int iVar31;
  longlong lVar32;
  undefined2 local_res10 [4];
  undefined2 local_res18 [4];
  undefined2 local_res20 [4];
  void *local_528;
  int local_520;
  int local_51c;
  wchar_t *local_518;
  int local_510;
  int local_50c;
  longlong *local_508;
  longlong *local_500;
  longlong local_4f8;
  ulonglong local_4f0;
  longlong *local_4e8;
  undefined8 local_4e0;
  void *local_4d8;
  undefined8 local_4d0;
  undefined2 local_4c8 [4];
  undefined2 local_4c0 [4];
  undefined2 local_4b8 [4];
  undefined2 local_4b0 [4];
  undefined2 local_4a8 [8];
  LPCRITICAL_SECTION local_498;
  undefined4 uStack_490;
  uint uStack_48c;
  longlong *local_488;
  longlong *plStack_480;
  void *local_478;
  int local_470;
  int local_46c;
  void *local_468;
  int local_460;
  int local_45c;
  wchar_t *local_458;
  ulonglong local_450;
  undefined8 *local_448;
  ulonglong local_440;
  wchar_t *local_438;
  ulonglong local_430;
  wchar_t *local_428;
  ulonglong local_420;
  wchar_t *local_418;
  ulonglong local_410;
  longlong *local_408;
  longlong *local_400;
  longlong *local_3f8;
  longlong *local_3f0;
  longlong *local_3e8;
  longlong local_3e0;
  undefined8 local_3d8;
  longlong local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  undefined8 local_3b8;
  longlong local_3b0;
  undefined8 local_3a8;
  longlong *local_3a0;
  longlong *local_398;
  longlong local_390;
  undefined8 local_388;
  longlong local_380;
  undefined8 local_378;
  longlong local_370;
  undefined8 local_368;
  wchar_t *local_360;
  int local_358;
  int local_354;
  longlong local_350;
  undefined8 local_348;
  longlong local_340;
  undefined8 local_338;
  undefined8 local_330;
  wchar_t *local_328;
  int local_320;
  undefined4 local_31c;
  wchar_t *local_318;
  int local_310;
  undefined4 local_30c;
  longlong local_308;
  undefined8 local_300;
  longlong *local_2f8;
  longlong *local_2f0;
  void *local_2e8;
  int local_2e0;
  undefined4 local_2dc;
  undefined8 *local_2d8;
  int local_2d0;
  undefined4 local_2cc;
  wchar_t *local_2c8;
  int local_2c0;
  undefined4 local_2bc;
  wchar_t *local_2b8;
  int local_2b0;
  undefined4 local_2ac;
  longlong local_2a8 [3];
  longlong local_290;
  void *local_288;
  int local_280;
  void *local_278;
  int local_270;
  void *local_268;
  int local_260;
  code *local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [8];
  longlong local_240 [2];
  longlong local_230 [2];
  longlong local_220 [2];
  longlong local_210 [2];
  longlong local_200 [2];
  longlong local_1f0 [3];
  longlong *local_1d8;
  longlong *plStack_1d0;
  code *local_1c8;
  longlong lStack_1c0;
  longlong local_1b8 [2];
  longlong local_1a8 [2];
  longlong local_198 [2];
  longlong local_188 [2];
  longlong local_178 [2];
  longlong local_168 [2];
  longlong local_158 [2];
  longlong local_148 [2];
  longlong local_138 [2];
  longlong local_128 [2];
  longlong local_118 [2];
  undefined1 local_108 [16];
  code *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [40];
  ulonglong uVar25;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe0);
  local_498 = lpCriticalSection;
  BVar11 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar11 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  if (1 < *(int *)(param_1 + 0xd8)) {
    puVar12 = (undefined8 *)FName::FName(local_248,&DAT_144fd7ea4,1);
    uVar13 = FUN_14168dc80();
    cVar10 = FModuleManager::IsModuleLoaded(uVar13,*puVar12);
    if (cVar10 != '\0') {
      plVar18 = (longlong *)0x0;
      local_308 = 0;
      local_300 = 0;
      FDateTime::UtcNow(local_2a8 + 2);
      local_4e8 = (longlong *)0x0;
      local_4e0 = 0;
      if (*(char *)(param_1 + 0xa9) == '\0') {
        local_488 = (longlong *)0x0;
        plStack_480 = (longlong *)0x0;
        if (*(char *)(param_1 + 0xaa) == '\0') {
          plVar14 = (longlong *)operator_new(0x10);
          plVar15 = plVar18;
          if (plVar14 != (longlong *)0x0) {
            *plVar14 = 0;
            plVar14[1] = 0;
            plVar15 = plVar14;
          }
          local_3a0 = plVar15;
          plVar14 = (longlong *)operator_new(0x18);
          if (plVar14 != (longlong *)0x0) {
            *(undefined4 *)(plVar14 + 1) = 1;
            *plVar14 = (longlong)&PTR_DestroyObject_144fd9a48;
            *(undefined4 *)((longlong)plVar14 + 0xc) = 1;
            plVar14[2] = (longlong)plVar15;
            plVar18 = plVar14;
          }
          local_398 = plVar18;
          SharedPointerInternals::EnableSharedFromThis(&local_3a0,plVar15,plVar15);
          local_488 = local_3a0;
          local_3a0 = (longlong *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&plStack_480,&local_398);
          plVar18 = local_398;
          if (local_398 != (longlong *)0x0) {
            LOCK();
            plVar15 = local_398 + 1;
            lVar17 = *plVar15;
            *(int *)plVar15 = (int)*plVar15 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_398)(local_398);
              LOCK();
              piVar1 = (int *)((longlong)plVar18 + 0xc);
              iVar31 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar31 == 1) {
                (**(code **)(*plVar18 + 8))(plVar18,1);
              }
            }
          }
          plVar18 = local_488;
          if (*(int *)((longlong)local_488 + 0xc) < *(int *)(param_1 + 0xd8)) {
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
            ::ResizeTo(local_488);
          }
        }
        else {
          plVar18 = (longlong *)0x0;
        }
        plVar15 = (longlong *)operator_new(0x40);
        if (plVar15 == (longlong *)0x0) {
          plVar15 = (longlong *)0x0;
        }
        else {
          puVar12 = (undefined8 *)operator_new();
          if (puVar12 == (undefined8 *)0x0) {
            puVar12 = (undefined8 *)0x0;
          }
          else {
            local_330 = 0;
            FArchive::FArchive();
            puVar12[0x13] = plVar15 + 5;
            puVar12[0x12] = 0;
            puVar12[0x14] = local_330;
            *puVar12 = &PTR_FUN_143f4a100;
            FArchive::SetIsSaving(puVar12,1);
            FArchive::SetIsPersistent(puVar12,0);
          }
          plVar15[1] = (longlong)puVar12;
          plVar15[2] = 0;
          plVar15[3] = 0;
          *plVar15 = (longlong)&PTR__scalar_deleting_destructor__143f607b8;
          plVar15[4] = 0;
          plVar15[5] = 0;
          plVar15[6] = 0;
          plVar15[7] = (longlong)&local_308;
        }
        plVar14 = (longlong *)0x0;
        plVar16 = (longlong *)operator_new(0x18);
        if (plVar16 != (longlong *)0x0) {
          *(undefined4 *)(plVar16 + 1) = 1;
          *plVar16 = (longlong)&PTR_FUN_143f3f2e0;
          *(undefined4 *)((longlong)plVar16 + 0xc) = 1;
          plVar16[2] = (longlong)plVar15;
          plVar14 = plVar16;
        }
        local_2f8 = plVar15;
        local_2f0 = plVar14;
        SharedPointerInternals::EnableSharedFromThis(&local_2f8,plVar15,plVar15);
        plVar14 = local_2f0;
        plVar15 = local_2f8;
        local_408 = local_2f0;
        if (local_2f0 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_2f0 + 1) = (int)local_2f0[1] + 1;
          UNLOCK();
          plVar18 = local_488;
          if (local_2f0 != (longlong *)0x0) {
            LOCK();
            plVar16 = local_2f0 + 1;
            lVar17 = *plVar16;
            *(int *)plVar16 = (int)*plVar16 + -1;
            UNLOCK();
            if ((int)lVar17 == 1) {
              (**(code **)*local_2f0)(local_2f0);
              LOCK();
              piVar1 = (int *)((longlong)plVar14 + 0xc);
              iVar31 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              plVar18 = local_488;
              if (iVar31 == 1) {
                (**(code **)(*plVar14 + 8))(plVar14,1);
                plVar18 = local_488;
              }
            }
          }
        }
        FUN_14068b290(plVar15);
        local_390 = 0;
        local_388 = 7;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_390,0);
        FGenericPlatformString::Memcpy(local_390,L"Events",0xe);
        if ((((int)plVar15[4] - 2U & 0xfffffff5) != 0) || ((int)plVar15[4] == 10)) {
          local_res10[0] = 0x2c;
          (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_res10,2);
        }
        (**(code **)(*plVar15 + 0x18))(plVar15,&local_390);
        local_res18[0] = 0x3a;
        (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_res18,2);
        local_res20[0] = 0x5b;
        (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_res20,2);
        *(int *)((longlong)plVar15 + 0x24) = *(int *)((longlong)plVar15 + 0x24) + 1;
        iVar31 = (int)plVar15[3];
        *(int *)(plVar15 + 3) = iVar31 + 1;
        if (*(int *)((longlong)plVar15 + 0x1c) < iVar31 + 1) {
          TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar15 + 2,iVar31);
        }
        *(undefined4 *)(plVar15[2] + (longlong)iVar31 * 4) = 5;
        *(undefined4 *)(plVar15 + 4) = 4;
        if (local_390 != 0) {
          FMemory::Free();
        }
        plVar14 = *(longlong **)(param_1 + 0xd0);
        local_508 = plVar14 + (longlong)*(int *)(param_1 + 0xd8) * 6;
        local_500 = plVar14;
        if (plVar14 != local_508) {
          plVar16 = plVar14 + 3;
          do {
            local_500 = plVar14;
            if ((*(byte *)(plVar16 + 2) & 2) == 0) {
              FUN_14068b290(plVar15);
              local_380 = 0;
              local_378 = 10;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_380,0);
              FGenericPlatformString::Memcpy(local_380,L"EventName",0x14);
              uVar13 = FString::FString(local_c8,plVar14);
              FUN_1404f77b0(plVar15,&local_380,uVar13);
              if (local_380 != 0) {
                FMemory::Free();
              }
              local_290 = local_2a8[2] - plVar16[1];
              FTimespan::ToString(&local_290,&local_288);
              local_370 = 0;
              local_368 = 0xb;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_370,0);
              FGenericPlatformString::Memcpy(local_370,L"DateOffset",0x16);
              pvVar3 = local_288;
              lVar17 = (longlong)local_280;
              local_2e8 = (void *)0x0;
              local_2e0 = local_280;
              if (local_280 == 0) {
                local_2dc = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_2e8,local_280,0);
                _guard_xfg_dispatch_icall_nop(local_2e8,pvVar3,lVar17 * 2);
              }
              FUN_1404f77b0(plVar15,&local_370,&local_2e8);
              if (local_370 != 0) {
                FMemory::Free();
              }
              plVar21 = local_4e8 + (longlong)(int)local_4e0 * 6;
              for (plVar14 = local_4e8; plVar14 != plVar21; plVar14 = plVar14 + 6) {
                iVar31 = *(int *)((longlong)plVar14 + 0x2c);
                if (iVar31 == 0) {
                  uVar13 = FString::FString(local_98);
LAB_1421728b8:
                  FUN_1404f77b0(plVar15,plVar14,uVar13);
                }
                else {
                  if (iVar31 == 1) {
                    uVar13 = FAnalyticsEventAttribute::ToString(plVar14,local_a8);
                    goto LAB_1421728b8;
                  }
                  if (iVar31 == 2) {
                    uVar13 = FAnalyticsEventAttribute::ToString(plVar14,local_b8);
                    goto LAB_1421728b8;
                  }
                  if (iVar31 == 4) {
                    FUN_142176e50(plVar15,plVar14,plVar14 + 2);
                  }
                }
              }
              lVar17 = plVar16[-1];
              if ((*(byte *)(plVar16 + 2) & 1) == 0) {
                lVar2 = lVar17 + (longlong)(int)*plVar16 * 0x30;
                if (lVar17 != lVar2) {
                  lVar32 = lVar17 + 0x10;
                  do {
                    iVar31 = *(int *)(lVar32 + 0x1c);
                    if (iVar31 == 0) {
                      uVar13 = FString::FString(local_68,lVar32);
LAB_142172958:
                      FUN_1404f77b0(plVar15,lVar17,uVar13);
                    }
                    else {
                      if (iVar31 == 1) {
                        uVar13 = FAnalyticsEventAttribute::ToString(lVar17,local_78);
                        goto LAB_142172958;
                      }
                      if (iVar31 == 2) {
                        uVar13 = FAnalyticsEventAttribute::ToString(lVar17,local_88);
                        goto LAB_142172958;
                      }
                      if (iVar31 == 4) {
                        FUN_142176e50(plVar15,lVar17,lVar32);
                      }
                    }
                    lVar17 = lVar17 + 0x30;
                    lVar32 = lVar32 + 0x30;
                  } while (lVar17 != lVar2);
                }
              }
              else {
                lVar2 = lVar17 + (longlong)(int)*plVar16 * 0x30;
                if (lVar17 != lVar2) {
                  iVar31 = (int)plVar15[4];
                  do {
                    if (((iVar31 - 2U & 0xfffffff5) != 0) || (iVar31 == 10)) {
                      local_4a8[0] = 0x2c;
                      (**(code **)(*(longlong *)plVar15[1] + 0x50))
                                ((longlong *)plVar15[1],local_4a8,2);
                    }
                    (**(code **)(*plVar15 + 0x18))(plVar15,lVar17);
                    local_4c8[0] = 0x3a;
                    (**(code **)(*(longlong *)plVar15[1] + 0x50))
                              ((longlong *)plVar15[1],local_4c8,2);
                    if (*(int *)(lVar17 + 0x18) == 0) {
                      puVar22 = &DAT_143f3eda8;
                      iVar31 = 0;
                    }
                    else {
                      puVar22 = *(undefined2 **)(lVar17 + 0x10);
                      iVar31 = *(int *)(lVar17 + 0x18) + -1;
                    }
                    (**(code **)(*(longlong *)plVar15[1] + 0x50))
                              ((longlong *)plVar15[1],puVar22,(longlong)iVar31 * 2);
                    lVar17 = lVar17 + 0x30;
                    *(undefined4 *)(plVar15 + 4) = 7;
                    iVar31 = 7;
                    plVar18 = local_488;
                  } while (lVar17 != lVar2);
                }
              }
              *(int *)((longlong)plVar15 + 0x24) = *(int *)((longlong)plVar15 + 0x24) + -1;
              local_4c0[0] = 0x7d;
              (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_4c0,2);
              *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
              TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar15 + 2);
              *(undefined4 *)(plVar15 + 4) = 3;
              if (plVar18 != (longlong *)0x0) {
                iVar31 = (int)plVar18[1];
                *(int *)(plVar18 + 1) = iVar31 + 1;
                if (*(int *)((longlong)plVar18 + 0xc) < iVar31 + 1) {
                  TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar18,iVar31);
                }
                plVar14 = (longlong *)((longlong)iVar31 * 0x30 + *plVar18);
                *plVar14 = 0;
                *plVar14 = *local_500;
                *local_500 = 0;
                *(int *)(plVar14 + 1) = (int)plVar16[-2];
                *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar16 + -0xc);
                plVar16[-2] = 0;
                plVar14[2] = 0;
                plVar14[2] = plVar16[-1];
                plVar16[-1] = 0;
                *(int *)(plVar14 + 3) = (int)*plVar16;
                *(int *)((longlong)plVar14 + 0x1c) = *(int *)((longlong)plVar16 + 4);
                *plVar16 = 0;
                plVar14[4] = plVar16[1];
                *(uint *)(plVar14 + 5) =
                     *(uint *)(plVar14 + 5) ^ (*(uint *)(plVar14 + 5) ^ *(uint *)(plVar16 + 2)) & 1;
                *(uint *)(plVar14 + 5) =
                     *(uint *)(plVar14 + 5) ^ (*(uint *)(plVar14 + 5) ^ *(uint *)(plVar16 + 2)) & 2;
              }
              plVar14 = local_500;
              if (local_288 != (void *)0x0) {
                FMemory::Free();
              }
            }
            else if (plVar18 == (longlong *)0x0) {
              TArray<FAnalyticsEventAttribute,FDefaultAllocator>::operator=(&local_4e8);
            }
            else {
              pplVar6 = (longlong **)(plVar16 + -1);
              if (&local_4e8 != pplVar6) {
                plVar14 = local_4e8;
                for (iVar31 = (int)local_4e0; iVar31 != 0; iVar31 = iVar31 + -1) {
                  if (plVar14[2] != 0) {
                    FMemory::Free();
                  }
                  if (*plVar14 != 0) {
                    FMemory::Free();
                  }
                  plVar14 = plVar14 + 6;
                }
                local_4e0._4_4_ = (undefined4)((ulonglong)local_4e0 >> 0x20);
                uVar8 = local_4e0._4_4_;
                TArray<FAnalyticsEventAttribute,FDefaultAllocator>::
                CopyToEmpty<FAnalyticsEventAttribute>(&local_4e8,*pplVar6,(int)*plVar16,uVar8,0);
              }
              plVar14 = local_500;
              iVar31 = (int)plVar18[1];
              *(int *)(plVar18 + 1) = iVar31 + 1;
              if (*(int *)((longlong)plVar18 + 0xc) < iVar31 + 1) {
                TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar18,iVar31);
              }
              plVar21 = (longlong *)((longlong)iVar31 * 0x30 + *plVar18);
              *plVar21 = 0;
              *plVar21 = *plVar14;
              *plVar14 = 0;
              *(int *)(plVar21 + 1) = (int)plVar16[-2];
              *(int *)((longlong)plVar21 + 0xc) = *(int *)((longlong)plVar16 + -0xc);
              plVar16[-2] = 0;
              plVar21[2] = 0;
              plVar21[2] = (longlong)*pplVar6;
              *pplVar6 = (longlong *)0x0;
              *(int *)(plVar21 + 3) = (int)*plVar16;
              *(int *)((longlong)plVar21 + 0x1c) = *(int *)((longlong)plVar16 + 4);
              *plVar16 = 0;
              plVar21[4] = plVar16[1];
              *(uint *)(plVar21 + 5) =
                   *(uint *)(plVar21 + 5) ^ (*(uint *)(plVar21 + 5) ^ *(uint *)(plVar16 + 2)) & 1;
              *(uint *)(plVar21 + 5) =
                   *(uint *)(plVar21 + 5) ^ (*(uint *)(plVar21 + 5) ^ *(uint *)(plVar16 + 2)) & 2;
            }
            plVar14 = plVar14 + 6;
            plVar16 = plVar16 + 6;
            lpCriticalSection = local_498;
            local_500 = plVar14;
          } while (plVar14 != local_508);
        }
        *(int *)((longlong)plVar15 + 0x24) = *(int *)((longlong)plVar15 + 0x24) + -1;
        local_4b8[0] = 0x5d;
        (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_4b8,2);
        *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar15 + 2);
        *(undefined4 *)(plVar15 + 4) = 5;
        *(int *)((longlong)plVar15 + 0x24) = *(int *)((longlong)plVar15 + 0x24) + -1;
        local_4b0[0] = 0x7d;
        (**(code **)(*(longlong *)plVar15[1] + 0x50))((longlong *)plVar15[1],local_4b0,2);
        *(int *)(plVar15 + 3) = (int)plVar15[3] + -1;
        TArray<enum_EJson,FDefaultAllocator>::ResizeShrink(plVar15 + 2);
        *(undefined4 *)(plVar15 + 4) = 3;
        (**(code **)(*plVar15 + 8))(plVar15);
        puVar12 = (undefined8 *)FUN_141f2eb00(local_240,param_1 + 0x68);
        local_360 = (wchar_t *)0x0;
        local_354 = 0;
        iVar31 = *(int *)(puVar12 + 1) + -1;
        if (*(int *)(puVar12 + 1) == 0) {
          iVar31 = 0;
        }
        local_358 = iVar31 + 0x29;
        if (0 < local_358) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_360,0);
        }
        iVar28 = local_354;
        iVar24 = local_358;
        pwVar26 = local_360;
        builtin_wcsncpy(local_360,L"datarouter/api/v1/public/data?SessionID=",0x28);
        _guard_xfg_dispatch_icall_nop(local_360 + 0x28,(void *)*puVar12,(longlong)iVar31 * 2);
        pwVar26[(longlong)iVar31 + 0x28] = L'\0';
        local_518 = pwVar26;
        local_510 = iVar24;
        local_50c = iVar28;
        if (local_240[0] != 0) {
          FMemory::Free();
        }
        local_498 = (LPCRITICAL_SECTION)FUN_141f2eb00(local_230,param_1 + 0x38);
        local_2d8 = (undefined8 *)0x0;
        iVar31 = *(int *)((longlong)local_498 + 8) + -1;
        if (*(int *)((longlong)local_498 + 8) == 0) {
          iVar31 = 0;
        }
        local_2cc = 0;
        local_2d0 = iVar31 + 8;
        if (0 < local_2d0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2d8,0);
        }
        puVar12 = local_2d8;
        *local_2d8 = 0x70007000410026;
        *(undefined4 *)(local_2d8 + 1) = 0x440049;
        *(undefined2 *)((longlong)local_2d8 + 0xc) = 0x3d;
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)local_2d8 + 0xe),local_498->DebugInfo,(longlong)iVar31 * 2);
        *(undefined2 *)((longlong)puVar12 + (longlong)iVar31 * 2 + 0xe) = 0;
        iVar31 = iVar24;
        if ((local_2d0 != 0) && (iVar20 = local_2d0 + -1, iVar20 != 0)) {
          local_510 = iVar24 + (uint)(iVar24 == 0) + iVar20;
          if (iVar28 < local_510) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar24);
            pwVar26 = local_518;
            iVar28 = local_50c;
          }
          iVar31 = local_510;
          _guard_xfg_dispatch_icall_nop
                    (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)),puVar12,
                     (longlong)iVar20 * 2);
          (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)))[iVar20] = L'\0';
        }
        if (puVar12 != (undefined8 *)0x0) {
          FMemory::Free(puVar12);
        }
        if (local_230[0] != 0) {
          FMemory::Free();
        }
        local_498 = (LPCRITICAL_SECTION)FUN_141f2eb00(local_220,param_1 + 0x78);
        iVar24 = *(int *)((longlong)local_498 + 8) + -1;
        if (*(int *)((longlong)local_498 + 8) == 0) {
          iVar24 = 0;
        }
        local_2c8 = (wchar_t *)0x0;
        local_2bc = 0;
        local_2c0 = iVar24 + 0xd;
        if (0 < local_2c0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2c8,0);
        }
        iVar20 = local_2c0;
        pwVar9 = local_2c8;
        builtin_wcsncpy(local_2c8,L"&AppVersion=",0xc);
        _guard_xfg_dispatch_icall_nop(local_2c8 + 0xc,local_498->DebugInfo,(longlong)iVar24 * 2);
        pwVar9[(longlong)iVar24 + 0xc] = L'\0';
        iVar24 = iVar31;
        if (iVar20 != 0) {
          iVar20 = iVar20 + -1;
          local_508 = (longlong *)CONCAT44(local_508._4_4_,iVar20);
          if (iVar20 != 0) {
            local_510 = iVar31 + (uint)(iVar31 == 0) + iVar20;
            if (iVar28 < local_510) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar31);
              pwVar26 = local_518;
              iVar28 = local_50c;
            }
            iVar24 = local_510;
            lVar17 = (longlong)(int)local_508;
            _guard_xfg_dispatch_icall_nop
                      (pwVar26 + ((longlong)iVar31 - (ulonglong)(iVar31 != 0)),pwVar9,lVar17 * 2);
            (pwVar26 + ((longlong)iVar31 - (ulonglong)(iVar31 != 0)))[lVar17] = L'\0';
          }
        }
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
        if (local_220[0] != 0) {
          FMemory::Free();
        }
        local_498 = (LPCRITICAL_SECTION)FUN_141f2eb00(local_210,param_1 + 0x58);
        iVar31 = *(int *)((longlong)local_498 + 8) + -1;
        if (*(int *)((longlong)local_498 + 8) == 0) {
          iVar31 = 0;
        }
        local_2b8 = (wchar_t *)0x0;
        local_2ac = 0;
        local_2b0 = iVar31 + 9;
        if (0 < local_2b0) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_2b8,0);
        }
        iVar20 = local_2b0;
        pwVar9 = local_2b8;
        builtin_wcsncpy(local_2b8,L"&UserID=",8);
        _guard_xfg_dispatch_icall_nop(local_2b8 + 8,local_498->DebugInfo,(longlong)iVar31 * 2);
        pwVar9[(longlong)iVar31 + 8] = L'\0';
        iVar31 = iVar24;
        if (iVar20 != 0) {
          iVar20 = iVar20 + -1;
          local_508 = (longlong *)CONCAT44(local_508._4_4_,iVar20);
          if (iVar20 != 0) {
            local_510 = iVar20 + (uint)(iVar24 == 0) + iVar24;
            if (iVar28 < local_510) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar24);
              pwVar26 = local_518;
              iVar28 = local_50c;
            }
            iVar31 = local_510;
            lVar17 = (longlong)(int)local_508;
            _guard_xfg_dispatch_icall_nop
                      (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)),pwVar9,lVar17 * 2);
            (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)))[lVar17] = L'\0';
          }
        }
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
        if (local_210[0] != 0) {
          FMemory::Free();
        }
        local_498 = (LPCRITICAL_SECTION)FUN_141f2eb00(local_200,param_1 + 0xb0);
        iVar24 = *(int *)((longlong)local_498 + 8) + -1;
        if (*(int *)((longlong)local_498 + 8) == 0) {
          iVar24 = 0;
        }
        local_328 = (wchar_t *)0x0;
        local_31c = 0;
        local_320 = iVar24 + 0x11;
        if (0 < local_320) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_328,0);
        }
        iVar20 = local_320;
        pwVar9 = local_328;
        builtin_wcsncpy(local_328,L"&AppEnvironment=",0x10);
        _guard_xfg_dispatch_icall_nop(local_328 + 0x10,local_498->DebugInfo,(longlong)iVar24 * 2);
        pwVar9[(longlong)iVar24 + 0x10] = L'\0';
        iVar24 = iVar31;
        if (iVar20 != 0) {
          iVar20 = iVar20 + -1;
          local_508 = (longlong *)CONCAT44(local_508._4_4_,iVar20);
          if (iVar20 != 0) {
            local_510 = iVar20 + (uint)(iVar31 == 0) + iVar31;
            if (iVar28 < local_510) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar31);
              pwVar26 = local_518;
              iVar28 = local_50c;
            }
            iVar24 = local_510;
            lVar17 = (longlong)(int)local_508;
            _guard_xfg_dispatch_icall_nop
                      (pwVar26 + ((longlong)iVar31 - (ulonglong)(iVar31 != 0)),pwVar9,lVar17 * 2);
            (pwVar26 + ((longlong)iVar31 - (ulonglong)(iVar31 != 0)))[lVar17] = L'\0';
          }
        }
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
        if (local_200[0] != 0) {
          FMemory::Free();
        }
        local_498 = (LPCRITICAL_SECTION)FUN_141f2eb00(local_1f0,param_1 + 0xc0);
        iVar31 = local_498->LockCount + -1;
        if (local_498->LockCount == 0) {
          iVar31 = 0;
        }
        local_318 = (wchar_t *)0x0;
        local_30c = 0;
        local_310 = iVar31 + 0xd;
        if (0 < local_310) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_318,0);
        }
        iVar20 = local_310;
        pwVar9 = local_318;
        builtin_wcsncpy(local_318,L"&UploadType=",0xc);
        _guard_xfg_dispatch_icall_nop(local_318 + 0xc,local_498->DebugInfo,(longlong)iVar31 * 2);
        pwVar9[(longlong)iVar31 + 0xc] = L'\0';
        iVar31 = iVar24;
        if (iVar20 != 0) {
          iVar20 = iVar20 + -1;
          local_508 = (longlong *)CONCAT44(local_508._4_4_,iVar20);
          if (iVar20 != 0) {
            local_510 = iVar20 + (uint)(iVar24 == 0) + iVar24;
            if (iVar28 < local_510) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_518,iVar24);
              pwVar26 = local_518;
            }
            iVar31 = local_510;
            lVar17 = (longlong)(int)local_508;
            _guard_xfg_dispatch_icall_nop
                      (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)),pwVar9,lVar17 * 2);
            (pwVar26 + ((longlong)iVar24 - (ulonglong)(iVar24 != 0)))[lVar17] = L'\0';
          }
        }
        if (pwVar9 != (wchar_t *)0x0) {
          FMemory::Free(pwVar9);
        }
        if (local_1f0[0] != 0) {
          FMemory::Free();
        }
        plVar18 = (longlong *)FHttpModule::Get();
        (**(code **)(*plVar18 + 0x40))(plVar18,&local_400);
        local_338 = 0x20;
        local_340 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_340,0);
        FGenericPlatformString::Memcpy(local_340,L"application/json; charset=utf-8",0x40);
        local_350 = 0;
        local_348 = 0xd;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_350,0);
        FGenericPlatformString::Memcpy(local_350,L"Content-Type",0x1a);
        (**(code **)(*local_400 + 0x68))(local_400,&local_350,&local_340);
        if (local_350 != 0) {
          FMemory::Free();
        }
        if (local_340 != 0) {
          FMemory::Free();
        }
        plVar18 = local_400;
        iVar24 = *(int *)(param_1 + 0x50);
        if (iVar24 < 2) {
          local_478 = (void *)0x0;
          local_470 = iVar31;
          if (iVar31 == 0) {
            local_46c = 0;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_478,iVar31,0);
            _guard_xfg_dispatch_icall_nop(local_478,pwVar26,(longlong)iVar31 * 2);
          }
        }
        else {
          iVar28 = 0;
          if (iVar31 != 0) {
            iVar28 = iVar31 + -1;
          }
          if ((iVar24 != 0) || (iVar31 = 1, iVar28 == 0)) {
            iVar31 = 0;
          }
          local_468 = (void *)0x0;
          TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>
                    (&local_468,*(undefined8 *)(param_1 + 0x48),iVar24,0,iVar31 + iVar28);
          iVar31 = local_460;
          local_478 = local_468;
          if (iVar28 != 0) {
            lVar17 = (longlong)local_460;
            local_460 = (uint)(local_460 == 0) + iVar28 + local_460;
            if (local_45c < local_460) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_468,iVar31);
            }
            pvVar4 = local_468;
            pvVar3 = (void *)((longlong)local_468 + (lVar17 - (ulonglong)(iVar31 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(pvVar3,pwVar26,(longlong)iVar28 * 2);
            *(undefined2 *)((longlong)iVar28 * 2 + (longlong)pvVar3) = 0;
            local_478 = pvVar4;
          }
          local_470 = local_460;
          local_46c = local_45c;
        }
        (**(code **)(*plVar18 + 0x50))(plVar18,&local_478);
        if (local_478 != (void *)0x0) {
          FMemory::Free();
        }
        local_3d8 = 5;
        local_3e0 = 0;
        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3e0,0);
        FGenericPlatformString::Memcpy(local_3e0,L"POST",10);
        (**(code **)(*local_400 + 0x48))(local_400,&local_3e0);
        if (local_3e0 != 0) {
          FMemory::Free();
        }
        (**(code **)(*local_400 + 0x60))(local_400,&local_308);
        if (*(char *)(param_1 + 0xa8) == '\0') {
          local_1d8 = local_488;
          plStack_1d0 = plStack_480;
          local_498 = (LPCRITICAL_SECTION)FUN_142171710;
          uStack_490 = 0;
          lStack_1c0 = (ulonglong)uStack_48c << 0x20;
          local_1c8 = FUN_142171710;
          if (plStack_480 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_480 + 1) = (int)plStack_480[1] + 1;
            UNLOCK();
            pwVar26 = local_518;
          }
          uVar13 = (**(code **)(*local_400 + 0x80))();
          FUN_142170450(uVar13,param_1,&local_1c8,&local_1d8);
        }
        (**(code **)(*local_400 + 0x78))();
        if (local_3f8 != (longlong *)0x0) {
          LOCK();
          plVar18 = local_3f8 + 1;
          lVar17 = *plVar18;
          *(int *)plVar18 = (int)*plVar18 + -1;
          UNLOCK();
          pwVar26 = local_518;
          if ((int)lVar17 == 1) {
            (**(code **)*local_3f8)(local_3f8);
            LOCK();
            piVar1 = (int *)((longlong)local_3f8 + 0xc);
            iVar31 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            pwVar26 = local_518;
            if (iVar31 == 1) {
              (**(code **)(*local_3f8 + 8))(local_3f8,1);
              pwVar26 = local_518;
            }
          }
        }
        if (pwVar26 != (wchar_t *)0x0) {
          FMemory::Free(pwVar26);
        }
        plVar18 = local_408;
        if (local_408 != (longlong *)0x0) {
          LOCK();
          plVar15 = local_408 + 1;
          lVar17 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*local_408)(local_408);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar31 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar31 == 1) {
              (**(code **)(*plVar18 + 8))(plVar18,1);
            }
          }
        }
        plVar18 = plStack_480;
        if (plStack_480 != (longlong *)0x0) {
          LOCK();
          plVar15 = plStack_480 + 1;
          lVar17 = *plVar15;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)lVar17 == 1) {
            (**(code **)*plStack_480)(plStack_480);
            LOCK();
            piVar1 = (int *)((longlong)plVar18 + 0xc);
            iVar31 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar31 == 1) {
              (**(code **)(*plStack_480 + 8))(plStack_480,1);
            }
          }
        }
      }
      else {
        plVar18 = *(longlong **)(param_1 + 0xd0);
        local_408 = plVar18 + (longlong)*(int *)(param_1 + 0xd8) * 6;
        local_500 = plVar18;
        if (plVar18 != local_408) {
          do {
            iVar31 = 0;
            local_500 = plVar18;
            if ((*(byte *)(plVar18 + 5) & 2) == 0) {
              iVar28 = 0;
              local_4d8 = (void *)0x0;
              local_4d0 = 0;
              iVar24 = iVar28;
              if (0 < (int)local_4e0) {
                do {
                  if (0x27 < iVar28) break;
                  plVar18 = local_4e8 + (longlong)iVar28 * 6;
                  uVar13 = FAnalyticsEventAttribute::ToString(plVar18,local_198);
                  puVar12 = (undefined8 *)FUN_141f2eb00(local_1a8,uVar13);
                  if (*(int *)(puVar12 + 1) == 0) {
                    puVar22 = &DAT_143f3eda8;
                  }
                  else {
                    puVar22 = (undefined2 *)*puVar12;
                  }
                  puVar12 = (undefined8 *)FUN_141f2eb00(local_1b8,plVar18);
                  if (*(int *)(puVar12 + 1) == 0) {
                    puVar27 = &DAT_143f3eda8;
                  }
                  else {
                    puVar27 = (undefined2 *)*puVar12;
                  }
                  FString::PrintfImpl(&local_278,L"&AttributeName%d=%s&AttributeValue%d=%s",iVar28,
                                      puVar27,iVar28,puVar22);
                  pvVar3 = local_278;
                  if (local_270 == 0) {
                    iVar20 = 0;
                  }
                  else {
                    iVar20 = local_270 + -1;
                  }
                  if (iVar20 != 0) {
                    iVar29 = iVar20 + (uint)(iVar31 == 0) + iVar31;
                    local_4d0 = CONCAT44(local_4d0._4_4_,iVar29);
                    if (iVar24 < iVar29) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,iVar31);
                      iVar29 = (int)local_4d0;
                      iVar24 = local_4d0._4_4_;
                    }
                    pvVar4 = (void *)((longlong)local_4d8 +
                                     ((longlong)iVar31 - (ulonglong)(iVar31 != 0)) * 2);
                    _guard_xfg_dispatch_icall_nop(pvVar4,pvVar3,(longlong)iVar20 * 2);
                    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar4) = 0;
                    iVar31 = iVar29;
                  }
                  if (local_278 != (void *)0x0) {
                    FMemory::Free(local_278);
                  }
                  if (local_1b8[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_1a8[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_198[0] != 0) {
                    FMemory::Free();
                  }
                  iVar28 = iVar28 + 1;
                } while (iVar28 < (int)local_4e0);
              }
              uVar25 = 0;
              local_508 = (longlong *)((ulonglong)local_508 & 0xffffffff00000000);
              uVar30 = uVar25;
              iVar31 = (int)local_4d0;
              if (0 < (int)local_500[3]) {
                do {
                  plVar18 = local_500;
                  iVar24 = (int)uVar25;
                  if (0x27 < iVar28) break;
                  lVar17 = local_500[2];
                  iVar20 = *(int *)(lVar17 + 0x2c + uVar30);
                  if (iVar20 == 0) {
LAB_142173929:
                    FString::FString(&local_4f8,lVar17 + 0x10 + uVar30);
                  }
                  else if (iVar20 == 1) {
                    dVar7 = *(double *)(lVar17 + 0x20 + uVar30);
                    if (dVar7 - (double)(int)dVar7 == 0.0) {
                      FString::PrintfImpl(&local_4f8,L"%lld",(longlong)dVar7);
                    }
                    else {
                      FString::SanitizeFloat(&local_4f8,lVar17,1);
                    }
                  }
                  else if (iVar20 == 2) {
                    pwVar26 = L"false";
                    if (*(char *)(lVar17 + 0x28 + uVar30) != '\0') {
                      pwVar26 = L"true";
                    }
                    local_4f8 = 0;
                    local_4f0 = 0;
                    if (*pwVar26 != L'\0') {
                      lVar17 = -1;
                      do {
                        lVar2 = lVar17 + 1;
                        lVar17 = lVar17 + 1;
                      } while (pwVar26[lVar2] != L'\0');
                      uVar23 = (int)lVar17 + 1;
                      local_4f0 = (ulonglong)uVar23;
                      if (0 < (int)uVar23) {
                        TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
                      }
                      FGenericPlatformString::Memcpy(local_4f8,pwVar26,(longlong)(int)uVar23 * 2);
                      iVar24 = (int)local_508;
                    }
                  }
                  else if (iVar20 == 3) {
                    local_4f0 = 5;
                    local_4f8 = 0;
                    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4f8,0);
                    FGenericPlatformString::Memcpy(local_4f8,L"null",10);
                  }
                  else {
                    if (iVar20 == 4) goto LAB_142173929;
                    local_4f8 = 0;
                    local_4f0 = 0;
                  }
                  iVar20 = 0;
                  puVar12 = (undefined8 *)FUN_141f2eb00(local_178,&local_4f8);
                  if (*(int *)(puVar12 + 1) == 0) {
                    puVar22 = &DAT_143f3eda8;
                  }
                  else {
                    puVar22 = (undefined2 *)*puVar12;
                  }
                  puVar12 = (undefined8 *)
                            FUN_141f2eb00(local_188,(longlong)iVar24 * 0x30 + plVar18[2]);
                  if (*(int *)(puVar12 + 1) == 0) {
                    puVar27 = &DAT_143f3eda8;
                  }
                  else {
                    puVar27 = (undefined2 *)*puVar12;
                  }
                  FString::PrintfImpl(&local_268,L"&AttributeName%d=%s&AttributeValue%d=%s",iVar28,
                                      puVar27,iVar28,puVar22);
                  pvVar3 = local_268;
                  if (local_260 != 0) {
                    iVar20 = local_260 + -1;
                  }
                  if (iVar20 != 0) {
                    iVar24 = iVar20 + (uint)(iVar31 == 0) + iVar31;
                    local_4d0 = CONCAT44(local_4d0._4_4_,iVar24);
                    if (local_4d0._4_4_ < iVar24) {
                      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_4d8,iVar31);
                      iVar24 = (int)local_4d0;
                    }
                    pvVar4 = (void *)((longlong)local_4d8 +
                                     ((longlong)iVar31 - (ulonglong)(iVar31 != 0)) * 2);
                    _guard_xfg_dispatch_icall_nop(pvVar4,pvVar3,(longlong)iVar20 * 2);
                    *(undefined2 *)((longlong)iVar20 * 2 + (longlong)pvVar4) = 0;
                    iVar31 = iVar24;
                    iVar24 = (int)local_508;
                  }
                  if (local_268 != (void *)0x0) {
                    FMemory::Free(local_268);
                  }
                  if (local_188[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_178[0] != 0) {
                    FMemory::Free();
                  }
                  if (local_4f8 != 0) {
                    FMemory::Free();
                  }
                  uVar23 = iVar24 + 1;
                  uVar25 = (ulonglong)uVar23;
                  uVar30 = uVar30 + 0x30;
                  iVar28 = iVar28 + 1;
                  local_508 = (longlong *)CONCAT44(local_508._4_4_,uVar23);
                } while ((int)uVar23 < (int)local_500[3]);
              }
              plVar18 = (longlong *)FHttpModule::Get();
              (**(code **)(*plVar18 + 0x40))(plVar18,&local_3f0);
              local_3c0 = 0;
              local_3b8 = 0xb;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3c0,0);
              FGenericPlatformString::Memcpy(local_3c0,L"text/plain",0x16);
              local_3d0 = 0;
              local_3c8 = 0xd;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3d0,0);
              FGenericPlatformString::Memcpy(local_3d0,L"Content-Type",0x1a);
              (**(code **)(*local_3f0 + 0x68))(local_3f0,&local_3d0,&local_3c0);
              if (local_3d0 != 0) {
                FMemory::Free();
              }
              if (local_3c0 != 0) {
                FMemory::Free();
              }
              local_528 = (void *)0x0;
              local_520 = *(int *)(param_1 + 0x50);
              lVar17 = (longlong)local_520;
              pvVar3 = *(void **)(param_1 + 0x48);
              if (local_520 == 0) {
                local_51c = 0;
              }
              else {
                TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_528,local_520,0);
                _guard_xfg_dispatch_icall_nop(local_528,pvVar3,lVar17 * 2);
              }
              puVar12 = (undefined8 *)FUN_141f2eb00(local_168,param_1 + 0x68);
              local_458 = (wchar_t *)0x0;
              iVar24 = *(int *)(puVar12 + 1) + -1;
              if (*(int *)(puVar12 + 1) == 0) {
                iVar24 = 0;
              }
              uVar23 = iVar24 + 0x17;
              local_450 = (ulonglong)uVar23;
              if (0 < (int)uVar23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_458,0);
                uVar23 = (uint)local_450;
              }
              pwVar26 = local_458;
              builtin_wcsncpy(local_458,L"SendEvent.1?SessionID=",0x16);
              _guard_xfg_dispatch_icall_nop(local_458 + 0x16,(void *)*puVar12,(longlong)iVar24 * 2);
              iVar28 = local_520;
              pwVar26[(longlong)iVar24 + 0x16] = L'\0';
              local_458 = (wchar_t *)0x0;
              local_450 = 0;
              if ((uVar23 != 0) && (uVar23 - 1 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + (uVar23 - 1) + local_520;
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar28);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar28 != 0)) * 2);
                sVar5 = (longlong)(int)uVar23 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar3,pwVar26,sVar5);
                *(undefined2 *)((longlong)pvVar3 + sVar5) = 0;
              }
              if (pwVar26 != (wchar_t *)0x0) {
                FMemory::Free(pwVar26);
              }
              if (local_168[0] != 0) {
                FMemory::Free();
              }
              puVar12 = (undefined8 *)FUN_141f2eb00(local_158,param_1 + 0x38);
              local_448 = (undefined8 *)0x0;
              iVar24 = *(int *)(puVar12 + 1) + -1;
              if (*(int *)(puVar12 + 1) == 0) {
                iVar24 = 0;
              }
              uVar23 = iVar24 + 8;
              local_440 = (ulonglong)uVar23;
              if (0 < (int)uVar23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_448,0);
                uVar23 = (uint)local_440;
              }
              _Src = local_448;
              *local_448 = 0x70007000410026;
              *(undefined4 *)(local_448 + 1) = 0x440049;
              *(undefined2 *)((longlong)local_448 + 0xc) = 0x3d;
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)local_448 + 0xe),(void *)*puVar12,(longlong)iVar24 * 2);
              iVar28 = local_520;
              *(undefined2 *)((longlong)_Src + (longlong)iVar24 * 2 + 0xe) = 0;
              local_448 = (undefined8 *)0x0;
              local_440 = 0;
              if ((uVar23 != 0) && (uVar23 - 1 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + (uVar23 - 1) + local_520;
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar28);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar28 != 0)) * 2);
                sVar5 = (longlong)(int)uVar23 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar3,_Src,sVar5);
                *(undefined2 *)((longlong)pvVar3 + sVar5) = 0;
              }
              if (_Src != (undefined8 *)0x0) {
                FMemory::Free(_Src);
              }
              if (local_158[0] != 0) {
                FMemory::Free();
              }
              puVar12 = (undefined8 *)FUN_141f2eb00(local_148,param_1 + 0x78);
              local_438 = (wchar_t *)0x0;
              iVar28 = 0;
              iVar24 = *(int *)(puVar12 + 1) + -1;
              if (*(int *)(puVar12 + 1) == 0) {
                iVar24 = iVar28;
              }
              uVar23 = iVar24 + 0xd;
              local_430 = (ulonglong)uVar23;
              if (0 < (int)uVar23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_438,0);
                uVar23 = (uint)local_430;
              }
              pwVar26 = local_438;
              builtin_wcsncpy(local_438,L"&AppVersion=",0xc);
              _guard_xfg_dispatch_icall_nop(local_438 + 0xc,(void *)*puVar12,(longlong)iVar24 * 2);
              iVar20 = local_520;
              pwVar26[(longlong)iVar24 + 0xc] = L'\0';
              local_438 = (wchar_t *)0x0;
              local_430 = 0;
              if ((uVar23 != 0) && (uVar23 - 1 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + (uVar23 - 1) + local_520;
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar20);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar20 != 0)) * 2);
                sVar5 = (longlong)(int)uVar23 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar3,pwVar26,sVar5);
                *(undefined2 *)((longlong)pvVar3 + sVar5) = 0;
              }
              if (pwVar26 != (wchar_t *)0x0) {
                FMemory::Free(pwVar26);
              }
              if (local_148[0] != 0) {
                FMemory::Free();
              }
              puVar12 = (undefined8 *)FUN_141f2eb00(local_138,param_1 + 0x58);
              local_428 = (wchar_t *)0x0;
              iVar24 = *(int *)(puVar12 + 1) + -1;
              if (*(int *)(puVar12 + 1) == 0) {
                iVar24 = iVar28;
              }
              uVar23 = iVar24 + 9;
              local_420 = (ulonglong)uVar23;
              if (0 < (int)uVar23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_428,0);
                uVar23 = (uint)local_420;
              }
              pwVar26 = local_428;
              builtin_wcsncpy(local_428,L"&UserID=",8);
              _guard_xfg_dispatch_icall_nop(local_428 + 8,(void *)*puVar12,(longlong)iVar24 * 2);
              iVar20 = local_520;
              pwVar26[(longlong)iVar24 + 8] = L'\0';
              local_428 = (wchar_t *)0x0;
              local_420 = 0;
              if ((uVar23 != 0) && (uVar23 - 1 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + local_520 + (uVar23 - 1);
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar20);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar20 != 0)) * 2);
                sVar5 = (longlong)(int)uVar23 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar3,pwVar26,sVar5);
                *(undefined2 *)(sVar5 + (longlong)pvVar3) = 0;
              }
              if (pwVar26 != (wchar_t *)0x0) {
                FMemory::Free(pwVar26);
              }
              if (local_138[0] != 0) {
                FMemory::Free();
              }
              puVar12 = (undefined8 *)FUN_141f2eb00(local_128,local_500);
              local_418 = (wchar_t *)0x0;
              iVar24 = *(int *)(puVar12 + 1) + -1;
              if (*(int *)(puVar12 + 1) == 0) {
                iVar24 = iVar28;
              }
              uVar23 = iVar24 + 0xc;
              local_410 = (ulonglong)uVar23;
              if (0 < (int)uVar23) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_418,0);
                uVar23 = (uint)local_410;
              }
              pwVar26 = local_418;
              builtin_wcsncpy(local_418,L"&EventName=",0xb);
              _guard_xfg_dispatch_icall_nop(local_418 + 0xb,(void *)*puVar12,(longlong)iVar24 * 2);
              iVar28 = local_520;
              pwVar26[(longlong)iVar24 + 0xb] = L'\0';
              local_418 = (wchar_t *)0x0;
              local_410 = 0;
              if ((uVar23 != 0) && (uVar23 - 1 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + local_520 + (uVar23 - 1);
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar28);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar28 != 0)) * 2);
                sVar5 = (longlong)(int)uVar23 * 2 - 2;
                _guard_xfg_dispatch_icall_nop(pvVar3,pwVar26,sVar5);
                *(undefined2 *)(sVar5 + (longlong)pvVar3) = 0;
              }
              if (pwVar26 != (wchar_t *)0x0) {
                FMemory::Free(pwVar26);
              }
              if (local_128[0] != 0) {
                FMemory::Free();
              }
              iVar24 = local_520;
              if ((iVar31 != 0) && (iVar31 = iVar31 + -1, iVar31 != 0)) {
                lVar17 = (longlong)local_520;
                local_520 = (uint)(local_520 == 0) + local_520 + iVar31;
                if (local_51c < local_520) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_528,iVar24);
                }
                pvVar3 = (void *)((longlong)local_528 + (lVar17 - (ulonglong)(iVar24 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(pvVar3,local_4d8,(longlong)iVar31 * 2);
                *(undefined2 *)((longlong)iVar31 * 2 + (longlong)pvVar3) = 0;
              }
              (**(code **)(*local_3f0 + 0x50))(local_3f0,&local_528);
              (**(code **)*local_3f0)(local_3f0,local_118);
              if (local_118[0] != 0) {
                FMemory::Free();
              }
              local_3b0 = 0;
              local_3a8 = 4;
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_3b0,0);
              FGenericPlatformString::Memcpy(local_3b0,&DAT_144fd8c98,8);
              (**(code **)(*local_3f0 + 0x48))(local_3f0,&local_3b0);
              if (local_3b0 != 0) {
                FMemory::Free();
              }
              if (*(char *)(param_1 + 0xa8) == '\0') {
                local_258 = FUN_142171710;
                uStack_250 = 0;
                local_d8 = 0;
                uStack_d0 = 0;
                uVar13 = (**(code **)(*local_3f0 + 0x80))();
                uStack_f0 = CONCAT44(uStack_24c,uStack_250);
                local_108 = ZEXT816(0);
                local_f8 = local_258;
                uVar19 = FUN_142170750(local_e8,param_1,&local_f8,local_108);
                TBaseDelegate<FSlateBrush_const_*>::operator=(uVar13,uVar19);
                TBaseDelegate<FText>::~TBaseDelegate<FText>(local_e8);
                TSharedPtr<FTcpSerializedMessage,1>::~TSharedPtr<FTcpSerializedMessage,1>(&local_d8)
                ;
              }
              (**(code **)(*local_3f0 + 0x78))();
              if (local_528 != (void *)0x0) {
                FMemory::Free();
              }
              plVar18 = local_3e8;
              if (local_3e8 != (longlong *)0x0) {
                LOCK();
                plVar15 = local_3e8 + 1;
                lVar17 = *plVar15;
                *(int *)plVar15 = (int)*plVar15 + -1;
                UNLOCK();
                if ((int)lVar17 == 1) {
                  (**(code **)*local_3e8)(local_3e8);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar18 + 0xc);
                  iVar31 = *piVar1;
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (iVar31 == 1) {
                    (**(code **)(*plVar18 + 8))(plVar18,1);
                  }
                }
              }
              if (local_4d8 != (void *)0x0) {
                FMemory::Free(local_4d8);
              }
            }
            else {
              TArray<FAnalyticsEventAttribute,FDefaultAllocator>::operator=(&local_4e8,plVar18 + 2);
              local_500 = plVar18;
            }
            plVar18 = local_500 + 6;
            lpCriticalSection = local_498;
            local_500 = plVar18;
          } while (plVar18 != local_408);
        }
      }
      plVar18 = (longlong *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x8c);
      iVar31 = *(int *)(param_1 + 0xdc);
      plVar15 = (longlong *)*plVar18;
      iVar24 = *(int *)(param_1 + 0xd8);
      iVar28 = 0;
      if (iVar31 < 0) {
        if (iVar24 != 0) {
          do {
            TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
                      (plVar15 + 2);
            if (*plVar15 != 0) {
              FMemory::Free();
            }
            plVar15 = plVar15 + 6;
            iVar24 = iVar24 + -1;
          } while (iVar24 != 0);
          iVar31 = *(int *)(param_1 + 0xdc);
        }
        *(undefined4 *)(param_1 + 0xd8) = 0;
        if (iVar31 != 0) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>
          ::ResizeTo(plVar18,0);
          iVar28 = *(int *)(param_1 + 0xd8);
        }
      }
      else {
        for (; iVar24 != 0; iVar24 = iVar24 + -1) {
          TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
                    (plVar15 + 2);
          if (*plVar15 != 0) {
            FMemory::Free();
          }
          plVar15 = plVar15 + 6;
        }
        *(undefined4 *)(param_1 + 0xd8) = 0;
      }
      local_2a8[0] = 0;
      local_2a8[1] = 0;
      *(int *)(param_1 + 0xd8) = iVar28 + 1;
      if (*(int *)(param_1 + 0xdc) < iVar28 + 1) {
        TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar18,iVar28);
      }
      FAnalyticsProviderET::FAnalyticsEventEntry::FAnalyticsEventEntry
                ((longlong)iVar28 * 0x30 + *plVar18,local_2a8,&local_4e8,0,1);
      if (local_2a8[0] != 0) {
        FMemory::Free();
      }
      TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
                (&local_4e8);
      if (local_308 != 0) {
        FMemory::Free();
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142174476. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 142174480 GetDefaultEventAttributes body=188 status=ok
// SIG undefined GetDefaultEventAttributes(void)

longlong FAnalyticsProviderET::GetDefaultEventAttributes(longlong param_1)

{
  uint *puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  BOOL BVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe0);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  lVar4 = *(longlong *)(param_1 + 0xd0);
  lVar3 = (longlong)*(int *)(param_1 + 0xd8) * 0x30 + lVar4;
  do {
    if (lVar3 == lVar4) {
      iVar5 = -1;
      goto LAB_1421744e7;
    }
    puVar1 = (uint *)(lVar3 + -8);
    lVar3 = lVar3 + -0x30;
  } while ((*puVar1 >> 1 & 1) == 0);
  lVar4 = (lVar3 - lVar4) / 6 + (lVar3 - lVar4 >> 0x3f);
  iVar5 = (int)(lVar4 >> 3) - (int)(lVar4 >> 0x3f);
LAB_1421744e7:
  lVar4 = *(longlong *)(param_1 + 0xd0);
  LeaveCriticalSection(lpCriticalSection);
  return lVar4 + 0x10 + (longlong)iVar5 * 0x30;
}



// FUNCTION 142174540 FUN_142174540 body=39 status=ok
// SIG undefined FUN_142174540(void)

void FUN_142174540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144fd7888;
    return;
  }
  return;
}



// FUNCTION 142174570 RecordCurrencyGiven body=114 status=ok
// SIG undefined RecordCurrencyGiven(void)

/* WARNING: Removing unreachable block (ram,0x0001421745a1) */
/* WARNING: Removing unreachable block (ram,0x0001421745aa) */
/* WARNING: Removing unreachable block (ram,0x0001421745af) */
/* WARNING: Removing unreachable block (ram,0x0001421745b7) */
/* WARNING: Removing unreachable block (ram,0x0001421745bc) */
/* WARNING: Removing unreachable block (ram,0x0001421745c5) */
/* WARNING: Removing unreachable block (ram,0x0001421745cf) */

void IAnalyticsProvider::RecordCurrencyGiven(longlong *param_1)

{
  (**(code **)(*param_1 + 0x88))();
  return;
}



// FUNCTION 1421745f0 RecordCurrencyGiven body=707 status=ok
// SIG undefined RecordCurrencyGiven(void)

void IAnalyticsProvider::RecordCurrencyGiven
               (longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  double local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  iVar3 = (int)param_4[1];
  lVar2 = *param_4;
  local_78 = (longlong *)0x0;
  local_70 = iVar3;
  if (iVar3 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_78,iVar3,0);
    plVar1 = local_78 + 4;
    plVar4 = (longlong *)(lVar2 + 0x20);
    do {
      FString::FString(plVar1 + -4,plVar4 + -4);
      FString::FString(plVar1 + -2,plVar4 + -2);
      *plVar1 = *plVar4;
      *(char *)(plVar1 + 1) = (char)plVar4[1];
      *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      iVar3 = iVar3 + -1;
      plVar1 = plVar1 + 6;
      plVar4 = plVar4 + 6;
    } while (iVar3 != 0);
  }
  local_58 = 0;
  local_50 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"GameCurrencyType",0x22);
  FString::FString(&local_48,param_2);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_70 = local_70 + 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"GameCurrencyAmount",0x26);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = (double)param_3;
  local_30 = 0;
  local_70 = local_70 + 1;
  local_48 = 0;
  local_40 = 0;
  local_2c = 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0xf;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"Currency Given",0x1e);
  (**(code **)(*param_1 + 0x58))(param_1,&local_68,&local_78);
  plVar1 = local_78;
  iVar3 = local_70;
  if (local_68 != 0) {
    FMemory::Free();
    plVar1 = local_78;
    iVar3 = local_70;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 1421748c0 RecordCurrencyPurchase body=731 status=ok
// SIG undefined RecordCurrencyPurchase(void)

void IAnalyticsProvider::RecordCurrencyPurchase
               (longlong *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
               float param_5,undefined8 param_6)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  double local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  local_68 = (longlong *)0x0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"RealCurrencyType",0x22);
  FString::FString(&local_48,param_4);
  uVar1 = local_60;
  lVar3 = (longlong)(int)local_60;
  local_38 = 0.0;
  local_30 = 0;
  local_2c = 0;
  iVar2 = (int)local_60 + 1;
  local_60 = CONCAT44(local_60._4_4_,iVar2);
  if (local_60._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
  }
  plVar4 = local_68 + lVar3 * 6;
  FString::FString(plVar4,&local_58);
  FString::FString(plVar4 + 2,&local_48);
  *(undefined1 *)(plVar4 + 5) = local_30;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_2c;
  plVar4[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"RealMoneyCost",0x1c);
  uVar1 = local_60;
  lVar3 = (longlong)(int)local_60;
  local_38 = (double)param_5;
  local_30 = 0;
  iVar2 = (int)local_60 + 1;
  local_48 = 0;
  local_40 = 0;
  local_2c = 1;
  local_60 = CONCAT44(local_60._4_4_,iVar2);
  if (local_60._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
  }
  plVar4 = local_68 + lVar3 * 6;
  FString::FString(plVar4,&local_58);
  FString::FString(plVar4 + 2,&local_48);
  *(undefined1 *)(plVar4 + 5) = local_30;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_2c;
  plVar4[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0x10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"PaymentProvider",0x20);
  FString::FString(&local_48,param_6);
  uVar1 = local_60;
  lVar3 = (longlong)(int)local_60;
  local_38 = 0.0;
  local_30 = 0;
  local_2c = 0;
  iVar2 = (int)local_60 + 1;
  local_60 = CONCAT44(local_60._4_4_,iVar2);
  if (local_60._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,uVar1 & 0xffffffff);
  }
  plVar4 = local_68 + lVar3 * 6;
  FString::FString(plVar4,&local_58);
  FString::FString(plVar4 + 2,&local_48);
  *(undefined1 *)(plVar4 + 5) = local_30;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_2c;
  plVar4[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x78))(param_1,param_2,param_3,&local_68);
  plVar4 = local_68;
  for (iVar2 = (int)local_60; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar4[2] != 0) {
      FMemory::Free();
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 6;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 142174ba0 RecordCurrencyPurchase body=113 status=ok
// SIG undefined RecordCurrencyPurchase(void)

/* WARNING: Removing unreachable block (ram,0x000142174bd0) */
/* WARNING: Removing unreachable block (ram,0x000142174bd9) */
/* WARNING: Removing unreachable block (ram,0x000142174bde) */
/* WARNING: Removing unreachable block (ram,0x000142174be6) */
/* WARNING: Removing unreachable block (ram,0x000142174beb) */
/* WARNING: Removing unreachable block (ram,0x000142174bf4) */
/* WARNING: Removing unreachable block (ram,0x000142174bfe) */

void IAnalyticsProvider::RecordCurrencyPurchase(longlong *param_1)

{
  (**(code **)(*param_1 + 0x78))();
  return;
}



// FUNCTION 142174c20 RecordCurrencyPurchase body=707 status=ok
// SIG undefined RecordCurrencyPurchase(void)

void IAnalyticsProvider::RecordCurrencyPurchase
               (longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  double local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  iVar3 = (int)param_4[1];
  lVar2 = *param_4;
  local_78 = (longlong *)0x0;
  local_70 = iVar3;
  if (iVar3 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_78,iVar3,0);
    plVar1 = local_78 + 4;
    plVar4 = (longlong *)(lVar2 + 0x20);
    do {
      FString::FString(plVar1 + -4,plVar4 + -4);
      FString::FString(plVar1 + -2,plVar4 + -2);
      *plVar1 = *plVar4;
      *(char *)(plVar1 + 1) = (char)plVar4[1];
      *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      iVar3 = iVar3 + -1;
      plVar1 = plVar1 + 6;
      plVar4 = plVar4 + 6;
    } while (iVar3 != 0);
  }
  local_58 = 0;
  local_50 = 0x11;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"GameCurrencyType",0x22);
  FString::FString(&local_48,param_2);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_70 = local_70 + 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0x13;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"GameCurrencyAmount",0x26);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = (double)param_3;
  local_30 = 0;
  local_70 = local_70 + 1;
  local_48 = 0;
  local_40 = 0;
  local_2c = 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"Currency Purchase",0x24);
  (**(code **)(*param_1 + 0x58))(param_1,&local_68,&local_78);
  plVar1 = local_78;
  iVar3 = local_70;
  if (local_68 != 0) {
    FMemory::Free();
    plVar1 = local_78;
    iVar3 = local_70;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 142174ef0 RecordError body=114 status=ok
// SIG undefined RecordError(void)

void IAnalyticsProvider::RecordError(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_18);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 142174f70 RecordError body=531 status=ok
// SIG undefined RecordError(void)

void IAnalyticsProvider::RecordError(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined2 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_68;
  int local_60;
  int local_5c;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28;
  undefined1 local_20;
  undefined4 local_1c;
  
  iVar4 = (int)param_3[1];
  lVar3 = *param_3;
  local_68 = (longlong *)0x0;
  local_60 = iVar4;
  if (iVar4 == 0) {
    local_5c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4,0);
    plVar1 = local_68 + 4;
    plVar5 = (longlong *)(lVar3 + 0x20);
    do {
      FString::FString(plVar1 + -4,plVar5 + -4);
      FString::FString(plVar1 + -2,plVar5 + -2);
      *plVar1 = *plVar5;
      *(char *)(plVar1 + 1) = (char)plVar5[1];
      *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
      iVar4 = iVar4 + -1;
      plVar1 = plVar1 + 6;
      plVar5 = plVar5 + 6;
    } while (iVar4 != 0);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar2 = &DAT_143f3eda8;
  }
  else {
    puVar2 = (undefined2 *)*param_2;
  }
  local_48 = 0;
  local_40 = 6;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Error",0xc);
  LexToString<wchar_t>(local_38,puVar2);
  iVar4 = local_60;
  lVar3 = (longlong)local_60;
  local_28 = 0;
  local_20 = 0;
  local_1c = 0;
  local_60 = local_60 + 1;
  if (local_5c < local_60) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_68,iVar4);
  }
  plVar1 = local_68 + lVar3 * 6;
  FString::FString(plVar1,&local_48);
  FString::FString(plVar1 + 2,local_38);
  *(undefined1 *)(plVar1 + 5) = local_20;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_1c;
  plVar1[4] = local_28;
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0xb;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"Game Error",0x16);
  (**(code **)(*param_1 + 0x58))(param_1,&local_58,&local_68);
  plVar1 = local_68;
  iVar4 = local_60;
  if (local_58 != 0) {
    FMemory::Free();
    plVar1 = local_68;
    iVar4 = local_60;
  }
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 142175190 RecordEvent body=289 status=ok
// SIG undefined RecordEvent(void)

void FAnalyticsProviderET::RecordEvent(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_28;
  int local_20;
  undefined4 local_1c;
  undefined1 local_18 [16];
  
  iVar4 = (int)param_3[1];
  lVar1 = *param_3;
  local_28 = (longlong *)0x0;
  local_20 = iVar4;
  if (iVar4 == 0) {
    local_1c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_28,iVar4,0);
    plVar3 = local_28 + 4;
    plVar5 = (longlong *)(lVar1 + 0x20);
    do {
      FString::FString(plVar3 + -4,plVar5 + -4);
      FString::FString(plVar3 + -2,plVar5 + -2);
      *plVar3 = *plVar5;
      *(char *)(plVar3 + 1) = (char)plVar5[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + 6;
      plVar5 = plVar5 + 6;
    } while (iVar4 != 0);
  }
  lVar1 = *param_1;
  uVar2 = FString::FString(local_18,param_2);
  (**(code **)(lVar1 + 200))(param_1,uVar2,&local_28);
  plVar3 = local_28;
  for (iVar4 = local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (plVar3[2] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 6;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1421752c0 RecordEvent body=312 status=ok
// SIG undefined RecordEvent(void)

void FAnalyticsProviderET::RecordEvent(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  puVar7 = (undefined8 *)param_1[0x21];
  puVar6 = puVar7 + (longlong)(int)param_1[0x22] * 10;
  if (puVar7 != puVar6) {
    plVar5 = puVar7 + 6;
    do {
      local_res8[0] = 0;
      if ((int)plVar5[2] == 0) {
LAB_14217532b:
        uVar3 = 0;
      }
      else {
        plVar4 = (longlong *)*plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          plVar4 = plVar5 + -4;
        }
        if (plVar4 == (longlong *)0x0) goto LAB_14217532b;
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar7)(uVar3,param_2,param_3,local_res8);
      puVar7 = puVar7 + 10;
      plVar5 = plVar5 + 10;
    } while (puVar7 != puVar6);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  }
  iVar1 = (int)param_1[0x1b];
  *(int *)(param_1 + 0x1b) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a,iVar1);
  }
  FAnalyticsEventEntry::FAnalyticsEventEntry
            ((longlong)iVar1 * 0x30 + param_1[0x1a],param_2,param_3,0,0);
  if ((char)param_1[0x14] == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142175400 RecordEvent body=308 status=ok
// SIG undefined RecordEvent(void)

void IAnalyticsProvider::RecordEvent
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_48;
  undefined8 local_40;
  longlong local_38 [2];
  longlong local_28 [2];
  longlong local_18;
  undefined1 local_10;
  undefined4 local_c;
  
  local_48 = (longlong *)0x0;
  local_40 = 0;
  FString::FString(local_38,param_3);
  FString::FString(local_28,param_4);
  uVar1 = local_40;
  lVar3 = (longlong)(int)local_40;
  local_18 = 0;
  local_10 = 0;
  local_c = 0;
  iVar2 = (int)local_40 + 1;
  local_40 = CONCAT44(local_40._4_4_,iVar2);
  if (local_40._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,uVar1 & 0xffffffff);
  }
  plVar4 = local_48 + lVar3 * 6;
  FString::FString(plVar4,local_38);
  FString::FString(plVar4 + 2,local_28);
  *(undefined1 *)(plVar4 + 5) = local_10;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_c;
  plVar4[4] = local_18;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x58))(param_1,param_2,&local_48);
  plVar4 = local_48;
  for (iVar2 = (int)local_40; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar4[2] != 0) {
      FMemory::Free();
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 6;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 142175540 RecordEventJson body=312 status=ok
// SIG undefined RecordEventJson(void)

void FAnalyticsProviderET::RecordEventJson(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  BOOL BVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 local_res8 [8];
  
  puVar7 = (undefined8 *)param_1[0x21];
  puVar6 = puVar7 + (longlong)(int)param_1[0x22] * 10;
  if (puVar7 != puVar6) {
    plVar5 = puVar7 + 6;
    do {
      local_res8[0] = 1;
      if ((int)plVar5[2] == 0) {
LAB_1421755ab:
        uVar3 = 0;
      }
      else {
        plVar4 = (longlong *)*plVar5;
        if ((longlong *)*plVar5 == (longlong *)0x0) {
          plVar4 = plVar5 + -4;
        }
        if (plVar4 == (longlong *)0x0) goto LAB_1421755ab;
        uVar3 = (**(code **)(*plVar4 + 8))();
      }
      (*(code *)*puVar7)(uVar3,param_2,param_3,local_res8);
      puVar7 = puVar7 + 10;
      plVar5 = plVar5 + 10;
    } while (puVar7 != puVar6);
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  }
  iVar1 = (int)param_1[0x1b];
  *(int *)(param_1 + 0x1b) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0xdc) < iVar1 + 1) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1 + 0x1a,iVar1);
  }
  FAnalyticsEventEntry::FAnalyticsEventEntry
            ((longlong)iVar1 * 0x30 + param_1[0x1a],param_2,param_3,1,0);
  if ((char)param_1[0x14] == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1c));
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142175680 RecordItemPurchase body=543 status=ok
// SIG undefined RecordItemPurchase(void)

void IAnalyticsProvider::RecordItemPurchase
               (longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
               undefined4 param_5)

{
  ulonglong uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  double local_28;
  undefined1 local_20;
  undefined4 local_1c;
  
  local_40 = 9;
  local_58 = (longlong *)0x0;
  local_50 = 0;
  local_48 = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"Currency",0x12);
  FString::FString(&local_38,param_3);
  uVar1 = local_50;
  lVar3 = (longlong)(int)local_50;
  local_28 = 0.0;
  local_20 = 0;
  local_1c = 0;
  iVar2 = (int)local_50 + 1;
  local_50 = CONCAT44(local_50._4_4_,iVar2);
  if (local_50._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_58,uVar1 & 0xffffffff);
  }
  plVar4 = local_58 + lVar3 * 6;
  FString::FString(plVar4,&local_48);
  FString::FString(plVar4 + 2,&local_38);
  *(undefined1 *)(plVar4 + 5) = local_20;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_1c;
  plVar4[4] = (longlong)local_28;
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  local_48 = 0;
  local_40 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
  FGenericPlatformString::Memcpy(local_48,L"PerItemCost",0x18);
  uVar1 = local_50;
  lVar3 = (longlong)(int)local_50;
  local_28 = (double)param_4;
  local_20 = 0;
  iVar2 = (int)local_50 + 1;
  local_38 = 0;
  local_30 = 0;
  local_1c = 1;
  local_50 = CONCAT44(local_50._4_4_,iVar2);
  if (local_50._4_4_ < iVar2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_58,uVar1 & 0xffffffff);
  }
  plVar4 = local_58 + lVar3 * 6;
  FString::FString(plVar4,&local_48);
  FString::FString(plVar4 + 2,&local_38);
  *(undefined1 *)(plVar4 + 5) = local_20;
  *(undefined4 *)((longlong)plVar4 + 0x2c) = local_1c;
  plVar4[4] = (longlong)local_28;
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  (**(code **)(*param_1 + 0x60))(param_1,param_2,param_5,&local_58);
  plVar4 = local_58;
  for (iVar2 = (int)local_50; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar4[2] != 0) {
      FMemory::Free();
    }
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 6;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 1421758a0 RecordItemPurchase body=707 status=ok
// SIG undefined RecordItemPurchase(void)

void IAnalyticsProvider::RecordItemPurchase
               (longlong *param_1,undefined8 param_2,int param_3,longlong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_78;
  int local_70;
  int local_6c;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  double local_38;
  undefined1 local_30;
  undefined4 local_2c;
  
  iVar3 = (int)param_4[1];
  lVar2 = *param_4;
  local_78 = (longlong *)0x0;
  local_70 = iVar3;
  if (iVar3 == 0) {
    local_6c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_78,iVar3,0);
    plVar1 = local_78 + 4;
    plVar4 = (longlong *)(lVar2 + 0x20);
    do {
      FString::FString(plVar1 + -4,plVar4 + -4);
      FString::FString(plVar1 + -2,plVar4 + -2);
      *plVar1 = *plVar4;
      *(char *)(plVar1 + 1) = (char)plVar4[1];
      *(undefined4 *)((longlong)plVar1 + 0xc) = *(undefined4 *)((longlong)plVar4 + 0xc);
      iVar3 = iVar3 + -1;
      plVar1 = plVar1 + 6;
      plVar4 = plVar4 + 6;
    } while (iVar3 != 0);
  }
  local_58 = 0;
  local_50 = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"ItemId",0xe);
  FString::FString(&local_48,param_2);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = 0.0;
  local_30 = 0;
  local_2c = 0;
  local_70 = local_70 + 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_58 = 0;
  local_50 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_58,0);
  FGenericPlatformString::Memcpy(local_58,L"ItemQuantity",0x1a);
  iVar3 = local_70;
  lVar2 = (longlong)local_70;
  local_38 = (double)param_3;
  local_30 = 0;
  local_70 = local_70 + 1;
  local_48 = 0;
  local_40 = 0;
  local_2c = 1;
  if (local_6c < local_70) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_78,iVar3);
  }
  plVar1 = local_78 + lVar2 * 6;
  FString::FString(plVar1,&local_58);
  FString::FString(plVar1 + 2,&local_48);
  *(undefined1 *)(plVar1 + 5) = local_30;
  *(undefined4 *)((longlong)plVar1 + 0x2c) = local_2c;
  plVar1[4] = (longlong)local_38;
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_58 != 0) {
    FMemory::Free();
  }
  local_68 = 0;
  local_60 = 0xe;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_68,0);
  FGenericPlatformString::Memcpy(local_68,L"Item Purchase",0x1c);
  (**(code **)(*param_1 + 0x58))(param_1,&local_68,&local_78);
  plVar1 = local_78;
  iVar3 = local_70;
  if (local_68 != 0) {
    FMemory::Free();
    plVar1 = local_78;
    iVar3 = local_70;
  }
  for (; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 142175b70 RecordProgress body=253 status=ok
// SIG undefined RecordProgress(void)

void IAnalyticsProvider::RecordProgress(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_20 = 1;
  local_28 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_28,0);
  FString::FString(local_28,param_3);
  local_18 = (longlong *)0x0;
  local_10 = 0;
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,&local_28,&local_18);
  plVar1 = local_18;
  for (iVar2 = (int)local_10; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (plVar1[2] != 0) {
      FMemory::Free();
    }
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 6;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  plVar1 = local_28;
  for (iVar2 = (int)local_20; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 142175c70 RecordProgress body=174 status=ok
// SIG undefined RecordProgress(void)

void IAnalyticsProvider::RecordProgress
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_18;
  undefined8 local_10;
  
  local_10 = 1;
  local_18 = (longlong *)0x0;
  TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&local_18,0);
  FString::FString(local_18,param_3);
  (**(code **)(*param_1 + 0xb8))(param_1,param_2,&local_18,param_4);
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



// FUNCTION 142175d20 RecordProgress body=1089 status=ok
// SIG undefined RecordProgress(void)

void IAnalyticsProvider::RecordProgress
               (longlong *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  void *_Src;
  short *psVar1;
  uint uVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  short *psVar9;
  short *psVar10;
  int iVar11;
  longlong local_res10;
  longlong *local_a8;
  int local_a0;
  int local_9c;
  short *local_98;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  longlong local_78;
  ulonglong local_70;
  longlong local_68;
  undefined1 local_60;
  undefined4 local_5c;
  
  iVar6 = (int)param_4[1];
  iVar11 = 0;
  lVar5 = *param_4;
  local_a8 = (longlong *)0x0;
  local_a0 = iVar6;
  if (iVar6 == 0) {
    local_9c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_a8,iVar6,0);
    plVar3 = local_a8 + 4;
    plVar8 = (longlong *)(lVar5 + 0x20);
    do {
      FString::FString(plVar3 + -4,plVar8 + -4);
      FString::FString(plVar3 + -2,plVar8 + -2);
      *plVar3 = *plVar8;
      *(char *)(plVar3 + 1) = (char)plVar8[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar8 + 0xc);
      iVar6 = iVar6 + -1;
      plVar3 = plVar3 + 6;
      plVar8 = plVar8 + 6;
    } while (iVar6 != 0);
  }
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  local_88 = 0;
  local_80 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"ProgressType",0x1a);
  LexToString<wchar_t>(&local_78,puVar4);
  iVar6 = local_a0;
  lVar5 = (longlong)local_a0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_a0 = local_a0 + 1;
  if (local_9c < local_a0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_a8,iVar6);
  }
  plVar3 = local_a8 + lVar5 * 6;
  FString::FString(plVar3,&local_88);
  FString::FString(plVar3 + 2);
  *(undefined1 *)(plVar3 + 5) = local_60;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = local_5c;
  plVar3[4] = local_68;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  psVar1 = (short *)0x0;
  local_98 = (short *)0x0;
  local_90._4_4_ = 0;
  psVar9 = &DAT_143f3eda8;
  psVar10 = psVar1;
  if (0 < (int)param_3[1]) {
    local_res10 = 0;
    psVar9 = psVar1;
    do {
      iVar7 = *(int *)(local_res10 + 8 + *param_3);
      iVar6 = iVar7 + -1;
      _Src = *(void **)(local_res10 + *param_3);
      if (iVar7 == 0) {
        iVar6 = 0;
      }
      if (iVar6 != 0) {
        iVar7 = (int)psVar1;
        local_90._0_4_ = iVar7 + (uint)(iVar7 == 0) + iVar6;
        if ((int)psVar9 < (int)(uint)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,psVar1);
          psVar9 = (short *)(ulonglong)local_90._4_4_;
          psVar10 = local_98;
        }
        psVar1 = (short *)(ulonglong)(uint)local_90;
        ::_guard_xfg_dispatch_icall_nop
                  (psVar10 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)),_Src,(longlong)iVar6 * 2);
        (psVar10 + ((longlong)iVar7 - (ulonglong)(iVar7 != 0)))[iVar6] = 0;
      }
      iVar11 = iVar11 + 1;
      if (iVar11 < (int)param_3[1]) {
        iVar6 = (int)psVar1;
        local_90._0_4_ = (2 - (uint)(iVar6 != 0)) + iVar6;
        if ((int)psVar9 < (int)(uint)local_90) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98);
          psVar9 = (short *)(ulonglong)local_90._4_4_;
          psVar10 = local_98;
        }
        psVar1 = (short *)(ulonglong)(uint)local_90;
        lVar5 = (longlong)iVar6 - (ulonglong)(iVar6 != 0);
        psVar10[lVar5] = 0x2e;
        psVar10[lVar5 + 1] = 0;
      }
      local_res10 = local_res10 + 0x10;
    } while (iVar11 < (int)param_3[1]);
    psVar9 = psVar10;
    if ((int)psVar1 == 0) {
      psVar9 = &DAT_143f3eda8;
    }
  }
  local_88 = 0;
  local_80 = 0x12;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_88,0);
  FGenericPlatformString::Memcpy(local_88,L"ProgressHierarchy",0x24);
  local_70 = 0;
  local_78 = 0;
  if ((psVar9 != (short *)0x0) && (*psVar9 != 0)) {
    lVar5 = -1;
    do {
      lVar5 = lVar5 + 1;
    } while (psVar9[lVar5] != 0);
    uVar2 = (int)lVar5 + 1;
    local_70 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_78,0);
    }
    FGenericPlatformString::Memcpy(local_78,psVar9,(longlong)(int)uVar2 * 2);
  }
  iVar6 = local_a0;
  lVar5 = (longlong)local_a0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  local_a0 = local_a0 + 1;
  if (local_9c < local_a0) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_a8,iVar6);
  }
  plVar3 = local_a8 + lVar5 * 6;
  FString::FString(plVar3,&local_88);
  FString::FString(plVar3 + 2,&local_78);
  *(undefined1 *)(plVar3 + 5) = local_60;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = local_5c;
  plVar3[4] = local_68;
  if (local_78 != 0) {
    FMemory::Free();
  }
  if (local_88 != 0) {
    FMemory::Free();
  }
  local_98 = (short *)0x0;
  local_90 = 0xc;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_98,0);
  FGenericPlatformString::Memcpy(local_98,L"Progression",0x18);
  (**(code **)(*param_1 + 0x58))(param_1,&local_98,&local_a8);
  if (local_98 != (short *)0x0) {
    FMemory::Free();
  }
  plVar3 = local_a8;
  iVar6 = local_a0;
  if (psVar10 != (short *)0x0) {
    FMemory::Free(psVar10);
    plVar3 = local_a8;
    iVar6 = local_a0;
  }
  for (; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (plVar3[2] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 6;
  }
  if (local_a8 != (longlong *)0x0) {
    FMemory::Free(local_a8);
  }
  return;
}



// FUNCTION 142176170 SetAge body=342 status=ok
// SIG undefined SetAge(void)

void IAnalyticsProvider::SetAge(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  longlong lVar2;
  short *psVar3;
  longlong local_48;
  ulonglong local_40;
  longlong local_38 [4];
  short *local_18;
  int local_10;
  
  FString::PrintfImpl(&local_18,&DAT_1440da628,param_2);
  psVar3 = &DAT_143f3eda8;
  if (local_10 != 0) {
    psVar3 = local_18;
  }
  local_40 = 0;
  local_48 = 0;
  if ((psVar3 != (short *)0x0) && (*psVar3 != 0)) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (psVar3[lVar2] != 0);
    uVar1 = (int)lVar2 + 1;
    local_40 = (ulonglong)uVar1;
    if (0 < (int)uVar1) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_48,0);
    }
    FGenericPlatformString::Memcpy(local_48,psVar3,(longlong)(int)uVar1 * 2);
  }
  local_38[2] = 0;
  local_38[3] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38 + 2,0);
  FGenericPlatformString::Memcpy(local_38[2],&DAT_144fd9618,8);
  local_38[0] = 0;
  local_38[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_38,0);
  FGenericPlatformString::Memcpy(local_38[0],&DAT_144fd9618,8);
  RecordEvent(param_1,local_38,local_38 + 2,&local_48);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_18 != (short *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421762d0 SetAppID body=134 status=ok
// SIG undefined SetAppID(void)

void FAnalyticsProviderET::SetAppID(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  plVar1 = param_1 + 7;
  puVar3 = &DAT_143f3eda8;
  if ((int)param_2[1] == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if ((int)param_1[8] != 0) {
    puVar3 = (undefined2 *)*plVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    if (plVar1 != param_2) {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      *plVar1 = *param_2;
      *param_2 = 0;
      *(int *)(param_1 + 8) = (int)param_2[1];
      *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0xc);
      param_2[1] = 0;
    }
  }
  return;
}



// FUNCTION 142176360 SetBuildInfo body=184 status=ok
// SIG undefined SetBuildInfo(void)

void IAnalyticsProvider::SetBuildInfo(undefined8 param_1,undefined8 param_2)

{
  longlong local_28 [4];
  
  local_28[3] = 10;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"BuildInfo",0x14);
  local_28[0] = 0;
  local_28[1] = 10;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"BuildInfo",0x14);
  RecordEvent(param_1,local_28,local_28 + 2,param_2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142176420 SetDefaultEventAttributes body=442 status=ok
// SIG undefined SetDefaultEventAttributes(void)

void FAnalyticsProviderET::SetDefaultEventAttributes(longlong param_1,undefined8 *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  int iVar1;
  BOOL BVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  longlong local_18;
  uint local_10;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xe0);
  BVar2 = TryEnterCriticalSection(lpCriticalSection);
  if (BVar2 == 0) {
    EnterCriticalSection(lpCriticalSection);
  }
  plVar4 = (longlong *)(param_1 + 0xd0);
  iVar1 = *(int *)(param_1 + 0xd8);
  if ((*(byte *)(*plVar4 + -8 + (longlong)iVar1 * 0x30) & 2) == 0) {
    *(int *)(param_1 + 0xd8) = iVar1 + 1;
    if (*(int *)(param_1 + 0xdc) < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar4);
    }
    puVar3 = (undefined8 *)((longlong)iVar1 * 0x30 + *plVar4);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[2] = *param_2;
    *param_2 = 0;
    *(undefined4 *)(puVar3 + 3) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((longlong)puVar3 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    FDateTime::UtcNow(puVar3 + 4);
    *(uint *)(puVar3 + 5) = *(uint *)(puVar3 + 5) & 0xfffffffe;
    *(uint *)(puVar3 + 5) = *(uint *)(puVar3 + 5) | 2;
  }
  else {
    local_28 = *param_2;
    *param_2 = 0;
    local_20 = *(undefined4 *)(param_2 + 1);
    local_1c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_38 = 0;
    local_30 = 0;
    FDateTime::UtcNow(&local_18);
    local_10 = local_10 & 0xfffffffe | 2;
    plVar4 = (longlong *)(*plVar4 + -0x30 + (longlong)*(int *)(param_1 + 0xd8) * 0x30);
    if (plVar4 != &local_38) {
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      *plVar4 = local_38;
      local_38 = 0;
      *(undefined4 *)(plVar4 + 1) = (undefined4)local_30;
      *(undefined4 *)((longlong)plVar4 + 0xc) = local_30._4_4_;
      local_30 = 0;
    }
    TArray<FAnalyticsEventAttribute,FDefaultAllocator>::operator=(plVar4 + 2,&local_28);
    plVar4[4] = local_18;
    *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 5) ^ (*(uint *)(plVar4 + 5) ^ local_10) & 1;
    *(uint *)(plVar4 + 5) = *(uint *)(plVar4 + 5) ^ (*(uint *)(plVar4 + 5) ^ local_10) & 2;
    TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(&local_28);
    if (local_38 != 0) {
      FMemory::Free();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001421765d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}



// FUNCTION 1421765e0 SetEventCallback body=84 status=ok
// SIG undefined SetEventCallback(void)

void FAnalyticsProviderET::SetEventCallback(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x110);
  *(int *)(param_1 + 0x110) = iVar1 + 1;
  if (*(int *)(param_1 + 0x114) < iVar1 + 1) {
    TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x108),iVar1);
  }
  ::TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
            ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x108),param_2);
  return;
}



// FUNCTION 142176640 SetGender body=184 status=ok
// SIG undefined SetGender(void)

void IAnalyticsProvider::SetGender(undefined8 param_1,undefined8 param_2)

{
  longlong local_28 [4];
  
  local_28[3] = 7;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Gender",0xe);
  local_28[0] = 0;
  local_28[1] = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Gender",0xe);
  RecordEvent(param_1,local_28,local_28 + 2,param_2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 142176700 SetLocation body=184 status=ok
// SIG undefined SetLocation(void)

void IAnalyticsProvider::SetLocation(undefined8 param_1,undefined8 param_2)

{
  longlong local_28 [4];
  
  local_28[3] = 9;
  local_28[2] = 0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28 + 2,0);
  FGenericPlatformString::Memcpy(local_28[2],L"Location",0x12);
  local_28[0] = 0;
  local_28[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(local_28,0);
  FGenericPlatformString::Memcpy(local_28[0],L"Location",0x12);
  RecordEvent(param_1,local_28,local_28 + 2,param_2);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1421767c0 SetSessionID body=100 status=ok
// SIG undefined SetSessionID(void)

undefined8 FAnalyticsProviderET::SetSessionID(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  
  puVar2 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar3 = &DAT_143f3eda8;
  }
  else {
    puVar3 = (undefined2 *)*param_2;
  }
  if ((int)param_1[0xe] != 0) {
    puVar2 = (undefined2 *)param_1[0xd];
  }
  iVar1 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar2,puVar3);
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1);
    FString::operator=(param_1 + 0xd,param_2);
  }
  return 1;
}



// FUNCTION 142176830 SetUserID body=139 status=ok
// SIG undefined SetUserID(void)

void FAnalyticsProviderET::SetUserID(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  
  uVar2 = FCommandLine::Get();
  cVar1 = FParse::Value(uVar2,L"ANALYTICSUSERID=",param_1 + 0xb,0);
  if (cVar1 == '\0') {
    (**(code **)(*param_1 + 0x20))(param_1);
    FString::operator=(param_1 + 0xb,param_2);
    return;
  }
  puVar3 = &DAT_143f3eda8;
  if (*(int *)(param_2 + 1) == 0) {
    puVar4 = &DAT_143f3eda8;
  }
  else {
    puVar4 = (undefined2 *)*param_2;
  }
  if ((int)param_1[0xc] != 0) {
    puVar3 = (undefined2 *)param_1[0xb];
  }
  FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar3,puVar4);
  return;
}



// FUNCTION 1421768c0 StartSession body=581 status=ok
// SIG undefined StartSession(void)

undefined8 FAnalyticsProviderET::StartSession(longlong *param_1,undefined8 *param_2)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_48;
  int local_40;
  int local_3c;
  GUID local_38;
  void *local_28;
  ulonglong local_20;
  
  if ((char)param_1[6] != '\0') {
    (**(code **)(*param_1 + 8))();
  }
  local_38.Data1 = 0;
  local_38.Data2 = 0;
  local_38.Data3 = 0;
  local_38.Data4[0] = '\0';
  local_38.Data4[1] = '\0';
  local_38.Data4[2] = '\0';
  local_38.Data4[3] = '\0';
  local_38.Data4[4] = '\0';
  local_38.Data4[5] = '\0';
  local_38.Data4[6] = '\0';
  local_38.Data4[7] = '\0';
  FWindowsPlatformMisc::CreateGuid(&local_38);
  plVar1 = (longlong *)FUN_141682af0(&local_38,&local_28,2);
  plVar3 = param_1 + 0xd;
  if (plVar3 != plVar1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    *plVar3 = *plVar1;
    *plVar1 = 0;
    *(int *)(param_1 + 0xe) = (int)plVar1[1];
    *(undefined4 *)((longlong)param_1 + 0x74) = *(undefined4 *)((longlong)plVar1 + 0xc);
    plVar1[1] = 0;
  }
  if (local_28 != (void *)0x0) {
    FMemory::Free();
  }
  local_48 = (longlong *)*param_2;
  *param_2 = 0;
  local_40 = *(int *)(param_2 + 1);
  local_3c = *(int *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  local_28 = (void *)0x0;
  local_20 = 8;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  _Src = local_28;
  FGenericPlatformString::Convert<char,wchar_t>(local_28,8,"Windows",8,0x3f);
  iVar4 = local_40;
  lVar2 = (longlong)local_40;
  local_40 = local_40 + 1;
  if (local_3c < local_40) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(&local_48,iVar4);
  }
  plVar3 = local_48 + lVar2 * 6;
  *plVar3 = 0;
  plVar3[1] = 9;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(plVar3,0);
  FGenericPlatformString::Memcpy(*plVar3,L"Platform",0x12);
  lVar2 = (longlong)(int)local_20;
  plVar3[2] = 0;
  *(int *)(plVar3 + 3) = (int)local_20;
  if ((int)local_20 == 0) {
    *(undefined4 *)((longlong)plVar3 + 0x1c) = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar3 + 2,local_20 & 0xffffffff,0);
    ::_guard_xfg_dispatch_icall_nop((void *)plVar3[2],_Src,lVar2 * 2);
  }
  plVar3[4] = 0;
  *(undefined1 *)(plVar3 + 5) = 0;
  *(undefined4 *)((longlong)plVar3 + 0x2c) = 0;
  if (_Src != (void *)0x0) {
    FMemory::Free(_Src);
  }
  local_28 = (void *)0x0;
  local_20 = 0xd;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_28,0);
  FGenericPlatformString::Memcpy(local_28,L"SessionStart",0x1a);
  (**(code **)(*param_1 + 200))(param_1,&local_28,&local_48);
  *(undefined1 *)(param_1 + 6) = 1;
  plVar3 = local_48;
  for (iVar4 = local_40; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (plVar3[2] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 6;
  }
  if (local_48 != (longlong *)0x0) {
    FMemory::Free(local_48);
  }
  return 1;
}



// FUNCTION 142176b10 StartSession body=256 status=ok
// SIG undefined StartSession(void)

undefined1 FAnalyticsProviderET::StartSession(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  longlong *local_18;
  int local_10;
  undefined4 local_c;
  
  iVar4 = (int)param_2[1];
  lVar1 = *param_2;
  local_18 = (longlong *)0x0;
  local_10 = iVar4;
  if (iVar4 == 0) {
    local_c = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(&local_18,iVar4,0);
    plVar3 = local_18 + 4;
    plVar5 = (longlong *)(lVar1 + 0x20);
    do {
      FString::FString(plVar3 + -4,plVar5 + -4);
      FString::FString(plVar3 + -2,plVar5 + -2);
      *plVar3 = *plVar5;
      *(char *)(plVar3 + 1) = (char)plVar5[1];
      *(undefined4 *)((longlong)plVar3 + 0xc) = *(undefined4 *)((longlong)plVar5 + 0xc);
      iVar4 = iVar4 + -1;
      plVar3 = plVar3 + 6;
      plVar5 = plVar5 + 6;
    } while (iVar4 != 0);
  }
  uVar2 = (**(code **)(*param_1 + 0xd0))(param_1,&local_18);
  plVar3 = local_18;
  for (iVar4 = local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (plVar3[2] != 0) {
      FMemory::Free();
    }
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 6;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return uVar2;
}



// FUNCTION 142176c10 Tick body=217 status=ok
// SIG undefined Tick(void)

undefined8 FAnalyticsProviderET::Tick(longlong param_1,float param_2)

{
  BOOL BVar1;
  longlong *plVar2;
  undefined1 local_res8 [8];
  
  BVar1 = TryEnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  if (BVar1 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  }
  if (1 < *(int *)(param_1 + 0xd0)) {
    param_2 = *(float *)(param_1 + 0x9c) - param_2;
    *(float *)(param_1 + 0x9c) = param_2;
    if (((param_2 <= 0.0) || (*(int *)(param_1 + 0x80) <= *(int *)(param_1 + 0xd0))) &&
       (DAT_1468c21b0 != DAT_146aeadcc)) {
      DAT_146aeadcc = (uint)DAT_1468c21b0;
      plVar2 = (longlong *)FDateTime::UtcNow(local_res8);
      if ((double)*(float *)(param_1 + 0x88) <=
          (double)(*plVar2 - *(longlong *)(param_1 + 0x90)) * 1e-07) {
        (**(code **)(*(longlong *)(param_1 + -8) + 0x20))(param_1 + -8);
      }
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xd8));
  return 1;
}



// FUNCTION 142176cf0 ToString body=352 status=ok
// SIG undefined ToString(void)

undefined8 * FAnalyticsEventAttribute::ToString(longlong param_1,undefined8 *param_2)

{
  double dVar1;
  wchar_t *pwVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)(param_1 + 0x2c);
  if (iVar3 != 0) {
    if (iVar3 == 1) {
      dVar1 = *(double *)(param_1 + 0x20);
      if (dVar1 - (double)(int)dVar1 == 0.0) {
        FString::PrintfImpl(param_2,L"%lld",(longlong)dVar1);
        return param_2;
      }
      FString::SanitizeFloat(param_2,dVar1,1);
      return param_2;
    }
    if (iVar3 == 2) {
      pwVar2 = L"false";
      if (*(char *)(param_1 + 0x28) != '\0') {
        pwVar2 = L"true";
      }
      *param_2 = 0;
      param_2[1] = 0;
      if (*pwVar2 != L'\0') {
        lVar4 = -1;
        do {
          lVar4 = lVar4 + 1;
        } while (pwVar2[lVar4] != L'\0');
        iVar3 = (int)lVar4 + 1;
        *(int *)(param_2 + 1) = iVar3;
        if (0 < iVar3) {
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
        }
        FGenericPlatformString::Memcpy(*param_2,pwVar2,(longlong)iVar3 * 2);
      }
      return param_2;
    }
    if (iVar3 == 3) {
      *param_2 = 0;
      param_2[1] = 5;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
      FGenericPlatformString::Memcpy(*param_2,L"null",10);
      return param_2;
    }
    if (iVar3 != 4) {
      *param_2 = 0;
      param_2[1] = 0;
      return param_2;
    }
  }
  FString::FString(param_2,param_1 + 0x10);
  return param_2;
}



// FUNCTION 142176e50 FUN_142176e50 body=184 status=ok
// SIG undefined FUN_142176e50(void)

void FUN_142176e50(longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  undefined2 local_res8 [4];
  
  if ((((int)param_1[4] - 2U & 0xfffffff5) != 0) || ((int)param_1[4] == 10)) {
    local_res8[0] = 0x2c;
    (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  }
  (**(code **)(*param_1 + 0x18))(param_1,param_2);
  local_res8[0] = 0x3a;
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],local_res8,2);
  iVar2 = *(int *)(param_3 + 1) + -1;
  if (*(int *)(param_3 + 1) == 0) {
    iVar2 = 0;
    puVar1 = &DAT_143f3eda8;
  }
  else {
    puVar1 = (undefined2 *)*param_3;
  }
  (**(code **)(*(longlong *)param_1[1] + 0x50))((longlong *)param_1[1],puVar1,(longlong)iVar2 * 2);
  *(undefined4 *)(param_1 + 4) = 7;
  return;
}



// FUNCTION 142176f10 FUN_142176f10 body=66 status=ok
// SIG undefined FUN_142176f10(void)

void FUN_142176f10(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdbad0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdbb58;
  }
  return;
}



// FUNCTION 142176f80 FUN_142176f80 body=43 status=ok
// SIG undefined FUN_142176f80(void)

undefined8 * FUN_142176f80(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144fdca40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 142176fb0 FUN_142176fb0 body=26 status=ok
// SIG undefined FUN_142176fb0(void)

undefined1 FUN_142176fb0(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 8) == '\0') {
    FUN_14218f800();
  }
  return 1;
}



// FUNCTION 142177000 FUN_142177000 body=66 status=ok
// SIG undefined FUN_142177000(void)

void FUN_142177000(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdbbe8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdbc60;
  }
  return;
}



// FUNCTION 142177050 FUN_142177050 body=46 status=ok
// SIG undefined FUN_142177050(void)

void FUN_142177050(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x98) == '\0') {
    uVar2 = FUN_14218cdd0();
    FUN_140b9e990(lVar1,uVar2);
    return;
  }
  return;
}



// FUNCTION 142177080 FUN_142177080 body=106 status=ok
// SIG undefined FUN_142177080(void)

float FUN_142177080(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  fVar1 = 0.0;
  fVar2 = (float)(((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430) -
          *(float *)(param_4 + 0x9c);
  if (0.0 < fVar2) {
    fVar1 = (float)*param_3 / fVar2;
  }
  return fVar1;
}



// FUNCTION 1421770f0 FUN_1421770f0 body=43 status=ok
// SIG undefined FUN_1421770f0(void)

undefined1 FUN_1421770f0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (*(char *)(lVar1 + 0x98) == '\0') {
    uVar2 = FUN_14218cdd0();
    FUN_140b9e990(lVar1,uVar2);
  }
  return 1;
}



// FUNCTION 142177130 FUN_142177130 body=66 status=ok
// SIG undefined FUN_142177130(void)

void FUN_142177130(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdbcf8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdbd40;
  }
  return;
}



// FUNCTION 142177190 FUN_142177190 body=26 status=ok
// SIG undefined FUN_142177190(void)

undefined1 FUN_142177190(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x68) == '\0') {
    FUN_14218f880();
  }
  return 1;
}



// FUNCTION 142177200 FUN_142177200 body=101 status=ok
// SIG undefined FUN_142177200(void)

float FUN_142177200(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  LARGE_INTEGER local_res20;
  
  QueryPerformanceCounter(&local_res20);
  fVar1 = 0.0;
  fVar2 = (float)(((double)local_res20.QuadPart * DAT_1468b02f8 + 16777216.0) - DAT_1468e2430) -
          *(float *)(param_4 + 0x9c);
  if (0.0 < fVar2) {
    fVar1 = *(float *)(param_3 + 4) / fVar2;
  }
  return fVar1;
}



// FUNCTION 142177290 FUN_142177290 body=108 status=ok
// SIG undefined FUN_142177290(void)

ulonglong FUN_142177290(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar2 + 1)) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
    }
    *(undefined8 *)(*plVar1 + (longlong)(int)uVar2 * 8) = 0;
    return (ulonglong)uVar2;
  }
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  *(undefined8 *)(*plVar1 + uVar3 * 8) = 0;
  return uVar3;
}



// FUNCTION 142177300 FUN_142177300 body=81 status=ok
// SIG undefined FUN_142177300(void)

void FUN_142177300(longlong param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2 >> 8;
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x18))) {
    iVar1 = *(int *)(param_1 + 0x28);
    *(int *)(param_1 + 0x28) = iVar1 + 1;
    if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x20),iVar1);
    }
    *(int *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar1 * 4) = iVar2;
  }
  return;
}



// FUNCTION 142177360 FUN_142177360 body=66 status=ok
// SIG undefined FUN_142177360(void)

void FUN_142177360(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdbec8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdbf20;
  }
  return;
}



// FUNCTION 1421773b0 FUN_1421773b0 body=52 status=ok
// SIG undefined FUN_1421773b0(void)

void FUN_1421773b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218c8a0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 1421773f0 FUN_1421773f0 body=54 status=ok
// SIG undefined FUN_1421773f0(void)

undefined8 FUN_1421773f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218c8a0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177430 FUN_142177430 body=66 status=ok
// SIG undefined FUN_142177430(void)

void FUN_142177430(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdbf98;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc008;
  }
  return;
}



// FUNCTION 142177480 FUN_142177480 body=52 status=ok
// SIG undefined FUN_142177480(void)

void FUN_142177480(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218cc90();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 1421774c0 FUN_1421774c0 body=54 status=ok
// SIG undefined FUN_1421774c0(void)

undefined8 FUN_1421774c0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218cc90();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177500 FUN_142177500 body=66 status=ok
// SIG undefined FUN_142177500(void)

void FUN_142177500(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc090;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc0f0;
  }
  return;
}



// FUNCTION 142177550 FUN_142177550 body=60 status=ok
// SIG undefined FUN_142177550(void)

void FUN_142177550(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_14218d0e0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return;
}



// FUNCTION 142177590 FUN_142177590 body=62 status=ok
// SIG undefined FUN_142177590(void)

undefined1 FUN_142177590(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_14218d0e0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177640 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FGunfireNavigationGeometryExport::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  if (param_1[4] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_144fdca40;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x30);
  }
  return param_1;
}



// FUNCTION 1421776a0 FUN_1421776a0 body=66 status=ok
// SIG undefined FUN_1421776a0(void)

void FUN_1421776a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc1e8;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc230;
  }
  return;
}



// FUNCTION 1421776f0 FUN_1421776f0 body=68 status=ok
// SIG undefined FUN_1421776f0(void)

void FUN_1421776f0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_14218d320();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return;
}



// FUNCTION 142177760 FUN_142177760 body=108 status=ok
// SIG undefined FUN_142177760(void)

ulonglong FUN_142177760(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar2 + 1)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)(int)uVar2 * 4) = 0xff7fffff;
    return (ulonglong)uVar2;
  }
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  *(undefined4 *)(*plVar1 + uVar3 * 4) = 0xff7fffff;
  return uVar3;
}



// FUNCTION 1421777d0 FUN_1421777d0 body=70 status=ok
// SIG undefined FUN_1421777d0(void)

undefined1 FUN_1421777d0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 6) == '\0') {
    puVar3 = (undefined8 *)FUN_14218d320();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 6) != '\0') {
        *(undefined1 *)(puVar1 + 6) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      uVar2 = puVar3[5];
      puVar1[4] = puVar3[4];
      puVar1[5] = uVar2;
      *(undefined1 *)(puVar1 + 6) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177820 FUN_142177820 body=66 status=ok
// SIG undefined FUN_142177820(void)

void FUN_142177820(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc2c0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc320;
  }
  return;
}



// FUNCTION 142177870 FUN_142177870 body=62 status=ok
// SIG undefined FUN_142177870(void)

void FUN_142177870(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c4a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 1421778b0 FUN_1421778b0 body=64 status=ok
// SIG undefined FUN_1421778b0(void)

undefined1 FUN_1421778b0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c4a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 1421778f0 FUN_1421778f0 body=66 status=ok
// SIG undefined FUN_1421778f0(void)

void FUN_1421778f0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc370;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc3b8;
  }
  return;
}



// FUNCTION 142177940 FUN_142177940 body=62 status=ok
// SIG undefined FUN_142177940(void)

void FUN_142177940(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c6a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return;
}



// FUNCTION 142177980 FUN_142177980 body=64 status=ok
// SIG undefined FUN_142177980(void)

undefined1 FUN_142177980(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 3) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c6a0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 3) != '\0') {
        *(undefined1 *)(puVar1 + 3) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      puVar1[2] = puVar3[2];
      *(undefined1 *)(puVar1 + 3) = 1;
    }
  }
  return 1;
}



// FUNCTION 1421779c0 FUN_1421779c0 body=66 status=ok
// SIG undefined FUN_1421779c0(void)

void FUN_1421779c0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc400;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc448;
  }
  return;
}



// FUNCTION 142177a10 FUN_142177a10 body=60 status=ok
// SIG undefined FUN_142177a10(void)

void FUN_142177a10(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c9e0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return;
}



// FUNCTION 142177a50 FUN_142177a50 body=62 status=ok
// SIG undefined FUN_142177a50(void)

undefined1 FUN_142177a50(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 4) == '\0') {
    puVar3 = (undefined8 *)FUN_14218c9e0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 4) != '\0') {
        *(undefined1 *)(puVar1 + 4) = 0;
      }
      uVar2 = puVar3[1];
      *puVar1 = *puVar3;
      puVar1[1] = uVar2;
      uVar2 = puVar3[3];
      puVar1[2] = puVar3[2];
      puVar1[3] = uVar2;
      *(undefined1 *)(puVar1 + 4) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177a90 FUN_142177a90 body=66 status=ok
// SIG undefined FUN_142177a90(void)

void FUN_142177a90(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc490;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc518;
  }
  return;
}



// FUNCTION 142177ae0 FUN_142177ae0 body=52 status=ok
// SIG undefined FUN_142177ae0(void)

void FUN_142177ae0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218ceb0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 142177b60 FUN_142177b60 body=54 status=ok
// SIG undefined FUN_142177b60(void)

undefined8 FUN_142177b60(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218ceb0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177ba0 FUN_142177ba0 body=66 status=ok
// SIG undefined FUN_142177ba0(void)

void FUN_142177ba0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc560;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc5a8;
  }
  return;
}



// FUNCTION 142177c00 FUN_142177c00 body=26 status=ok
// SIG undefined FUN_142177c00(void)

undefined1 FUN_142177c00(longlong param_1)

{
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x68) == '\0') {
    FUN_14218f8e0();
  }
  return 1;
}



// FUNCTION 142177c20 FUN_142177c20 body=66 status=ok
// SIG undefined FUN_142177c20(void)

void FUN_142177c20(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc5f0;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc638;
  }
  return;
}



// FUNCTION 142177c70 FUN_142177c70 body=52 status=ok
// SIG undefined FUN_142177c70(void)

void FUN_142177c70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218cff0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return;
}



// FUNCTION 142177cb0 FUN_142177cb0 body=54 status=ok
// SIG undefined FUN_142177cb0(void)

undefined8 FUN_142177cb0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 1) == '\0') {
    puVar2 = (undefined8 *)FUN_14218cff0();
    if (puVar2 != puVar1) {
      if (*(char *)(puVar1 + 1) != '\0') {
        *(undefined1 *)(puVar1 + 1) = 0;
      }
      *puVar1 = *puVar2;
      *(undefined1 *)(puVar1 + 1) = 1;
    }
  }
  return 1;
}



// FUNCTION 142177d30 FUN_142177d30 body=108 status=ok
// SIG undefined FUN_142177d30(void)

ulonglong FUN_142177d30(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar2 + 1)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)(int)uVar2 * 4) = 0x7f7fffff;
    return (ulonglong)uVar2;
  }
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  *(undefined4 *)(*plVar1 + uVar3 * 4) = 0x7f7fffff;
  return uVar3;
}



// FUNCTION 142177e10 FUN_142177e10 body=115 status=ok
// SIG undefined FUN_142177e10(void)

ulonglong FUN_142177e10(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar1 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar1 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar1 + 1)) {
      TArray<FRotator,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x10),uVar1);
    }
    uVar4 = (ulonglong)uVar1;
    uVar3 = (longlong)(int)uVar1;
  }
  else {
    uVar4 = (ulonglong)
            *(int *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
    uVar3 = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x10);
  *(undefined1 *)(lVar2 + 8 + uVar3 * 0xc) = 1;
  *(undefined4 *)(lVar2 + 4 + uVar3 * 0xc) = 0x41000000;
  *(undefined4 *)(lVar2 + uVar3 * 0xc) = 0;
  return uVar4;
}



// FUNCTION 142177f70 FUN_142177f70 body=58 status=ok
// SIG undefined FUN_142177f70(void)

void FUN_142177f70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc7d8;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144fdc850;
  }
  return;
}



// FUNCTION 142177ff0 FUN_142177ff0 body=20 status=ok
// SIG undefined FUN_142177ff0(void)

undefined1 FUN_142177ff0(longlong param_1)

{
  FUN_14217f880(param_1 + 8);
  return 1;
}



// FUNCTION 142178030 FUN_142178030 body=108 status=ok
// SIG undefined FUN_142178030(void)

ulonglong FUN_142178030(longlong param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  
  plVar1 = (longlong *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    *(uint *)(param_1 + 0x18) = uVar2 + 1;
    if (*(int *)(param_1 + 0x1c) < (int)(uVar2 + 1)) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(plVar1,uVar2);
    }
    *(undefined4 *)(*plVar1 + (longlong)(int)uVar2 * 4) = 0;
    return (ulonglong)uVar2;
  }
  uVar3 = (ulonglong)
          *(int *)(*(longlong *)(param_1 + 0x20) + -4 + (longlong)*(int *)(param_1 + 0x28) * 4);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
  *(undefined4 *)(*plVar1 + uVar3 * 4) = 0;
  return uVar3;
}



// FUNCTION 1421780a0 FUN_1421780a0 body=58 status=ok
// SIG undefined FUN_1421780a0(void)

void FUN_1421780a0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc8a0;
    puVar1[2] = *(undefined8 *)(param_1 + 0x10);
    *puVar1 = &PTR_GetPoolName_144fdc8e8;
  }
  return;
}



// FUNCTION 1421780f0 FUN_1421780f0 body=20 status=ok
// SIG undefined FUN_1421780f0(void)

undefined1 FUN_1421780f0(longlong param_1)

{
  FUN_142181db0(param_1 + 8);
  return 1;
}



// FUNCTION 142178160 FUN_142178160 body=66 status=ok
// SIG undefined FUN_142178160(void)

void FUN_142178160(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdc970;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_144fdc9b8;
  }
  return;
}



// FUNCTION 1421781c0 FUN_1421781c0 body=20 status=ok
// SIG undefined FUN_1421781c0(void)

undefined1 FUN_1421781c0(longlong param_1)

{
  FUN_14218f200(*(undefined8 *)(param_1 + 8));
  return 1;
}



// FUNCTION 1421781e0 FUN_1421781e0 body=56 status=ok
// SIG undefined FUN_1421781e0(void)

void FUN_1421781e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_144fdca00;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  }
  return;
}



// FUNCTION 142178220 FUN_142178220 body=54 status=ok
// SIG undefined FUN_142178220(void)

void FUN_142178220(longlong param_1,undefined8 param_2)

{
  if (*(int *)(*(undefined8 **)(param_1 + 8) + 1) != 0) {
    FUN_142185640(param_2,&DAT_146aeb1b8,**(undefined8 **)(param_1 + 8));
    return;
  }
  FUN_142185640(param_2,&DAT_146aeb1b8,&DAT_143f3eda8);
  return;
}



// FUNCTION 142178260 FUN_142178260 body=285 status=ok
// SIG undefined FUN_142178260(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_142178260(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_c8 [128];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_d8 = param_2;
  FUN_14217bdd0(param_1,0);
  cVar2 = FUN_14218fca0(param_1);
  if (cVar2 != '\0') {
    cVar2 = FUN_14218fca0(param_1);
    if (cVar2 != '\0') {
      local_48 = 0;
      local_40 = 0;
      local_38 = param_4;
      FString::FString(local_30,param_1 + 8);
      iVar1 = *(int *)(param_1 + 0x2e0);
      *(int *)(param_1 + 0x2e0) = iVar1 + 1;
      if (*(int *)(param_1 + 0x2e4) < iVar1 + 1) {
        FUN_140ae1b70(param_1 + 0x38,iVar1);
      }
      lVar3 = *(longlong *)(param_1 + 0x2d8);
      if (*(longlong *)(param_1 + 0x2d8) == 0) {
        lVar3 = param_1 + 0x38;
      }
      FUN_14217e760((longlong)iVar1 * 0xa8 + lVar3,local_c8);
      if (local_30[0] != 0) {
        FMemory::Free();
      }
      FUN_14217ebe0(local_c8);
    }
  }
  return param_1;
}



// FUNCTION 142178380 FUN_142178380 body=46 status=ok
// SIG undefined FUN_142178380(void)

undefined8 FUN_142178380(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  FUN_142178260(param_1,&local_18,param_2,param_3);
  return param_1;
}



// FUNCTION 1421783b0 FUN_1421783b0 body=869 status=ok
// SIG undefined FUN_1421783b0(void)

longlong * FUN_1421783b0(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  void *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  uVar2 = *(uint *)(param_2 + 5);
  local_50 = (uint *)(param_2 + 2);
  uStack_c4 = 1;
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = local_50;
    }
    uVar9 = *puVar11;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar8 = local_c8 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar8;
      if (bVar3) goto LAB_14217849f;
      uVar9 = puVar11[lVar10 + 1];
    }
    uStack_c4 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_b4 = (iStack_b0 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_b4) {
LAB_14217849f:
      uStack_b4 = uVar2;
    }
  }
  uStack_84 = *(uint *)(param_2 + 5);
  uStack_90 = CONCAT44(uStack_c4,local_c8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_b4;
  uStack_78 = CONCAT44(uStack_ac,iStack_b0);
  iVar8 = (int)uStack_84 >> 5;
  local_98 = (int)param_2;
  uStack_94 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_88 = -1 << ((byte)uStack_84 & 0x1f);
  uStack_80 = uStack_84 & 0xffffffe0;
  uStack_7c = uStack_b4;
  local_60 = local_98;
  uStack_5c = uStack_94;
  iStack_58 = local_c8;
  uStack_54 = uStack_c4;
  local_40 = uStack_78;
  local_98 = iVar8;
  uVar9 = uStack_84;
  if (uStack_84 != uVar2) {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = local_50;
    }
    uVar9 = puVar11[iVar8] & uStack_88;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar3) goto LAB_14217857c;
      uVar9 = puVar11[lVar10 + 1];
      uStack_88 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uStack_80 - iVar8) + 0x1f;
    uVar9 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_14217857c:
      uStack_84 = uVar2;
      uVar9 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_44 == uVar9) && (local_50 == (uint *)(param_2 + 2))) &&
       ((longlong *)CONCAT44(uStack_5c,local_60) == param_2)) break;
    FSoftObjectPath::ToString
              ((longlong)(int)uStack_44 * 0x20 + *(longlong *)CONCAT44(uStack_5c,local_60),&local_70
              );
    plVar6 = (longlong *)operator_new(0x30);
    _Src = local_70;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_DestroyObject_144cde280;
      *(undefined4 *)(plVar6 + 3) = 0;
      plVar6[2] = (longlong)&PTR_AsObject_143f605c8;
      plVar6[4] = 0;
      lVar10 = (longlong)local_68;
      *(int *)(plVar6 + 5) = local_68;
      if (local_68 == 0) {
        *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
        *(undefined4 *)(plVar6 + 3) = 2;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar6 + 4,local_68,0);
        _guard_xfg_dispatch_icall_nop((void *)plVar6[4],_Src,lVar10 * 2);
        *(undefined4 *)(plVar6 + 3) = 2;
      }
    }
    local_a8 = plVar6 + 2;
    local_a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_a8);
    if (local_70 != (void *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_a0;
    plVar6 = local_a8;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar8);
    }
    plVar5 = local_a0;
    plVar7 = (longlong *)((longlong)iVar8 * 0x10 + *param_1);
    *plVar7 = (longlong)plVar6;
    plVar7[1] = (longlong)plVar4;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return param_1;
}



// FUNCTION 142178720 FUN_142178720 body=869 status=ok
// SIG undefined FUN_142178720(void)

longlong * FUN_142178720(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  longlong *plVar4;
  longlong *plVar5;
  void *_Src;
  longlong *plVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  uint *puVar11;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  longlong *local_a8;
  longlong *local_a0;
  int local_98;
  undefined4 uStack_94;
  undefined8 uStack_90;
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined8 uStack_78;
  void *local_70;
  int local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  uint uStack_54;
  uint *local_50;
  uint uStack_48;
  uint uStack_44;
  undefined8 local_40;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (0 < (int)param_2[1] - *(int *)((longlong)param_2 + 0x34)) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  uVar2 = *(uint *)(param_2 + 5);
  local_50 = (uint *)(param_2 + 2);
  uStack_c4 = 1;
  local_c8 = 0;
  uStack_b4 = 0;
  iStack_b0 = 0;
  if (uVar2 != 0) {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = local_50;
    }
    uVar9 = *puVar11;
    iStack_b0 = 0;
    local_c8 = 0;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_c8;
      iStack_b0 = iStack_b0 + 0x20;
      iVar8 = local_c8 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
      local_c8 = iVar8;
      if (bVar3) goto LAB_14217880f;
      uVar9 = puVar11[lVar10 + 1];
    }
    uStack_c4 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uStack_c4 != 0) {
      for (; uStack_c4 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uStack_c4 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_b4 = (iStack_b0 - iVar8) + 0x1f;
    if ((int)uVar2 < (int)uStack_b4) {
LAB_14217880f:
      uStack_b4 = uVar2;
    }
  }
  uStack_84 = *(uint *)(param_2 + 5);
  uStack_90 = CONCAT44(uStack_c4,local_c8);
  uStack_48 = 0xffffffff;
  uStack_44 = uStack_b4;
  uStack_78 = CONCAT44(uStack_ac,iStack_b0);
  iVar8 = (int)uStack_84 >> 5;
  local_98 = (int)param_2;
  uStack_94 = (undefined4)((ulonglong)param_2 >> 0x20);
  uStack_88 = -1 << ((byte)uStack_84 & 0x1f);
  uStack_80 = uStack_84 & 0xffffffe0;
  uStack_7c = uStack_b4;
  local_60 = local_98;
  uStack_5c = uStack_94;
  iStack_58 = local_c8;
  uStack_54 = uStack_c4;
  local_40 = uStack_78;
  local_98 = iVar8;
  uVar9 = uStack_84;
  if (uStack_84 != uVar2) {
    puVar11 = (uint *)param_2[4];
    if ((uint *)param_2[4] == (uint *)0x0) {
      puVar11 = local_50;
    }
    uVar9 = puVar11[iVar8] & uStack_88;
    while (uVar9 == 0) {
      lVar10 = (longlong)local_98;
      uStack_80 = uStack_80 + 0x20;
      iVar8 = local_98 + 1;
      bVar3 = (int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_98;
      local_98 = iVar8;
      if (bVar3) goto LAB_1421788ec;
      uVar9 = puVar11[lVar10 + 1];
      uStack_88 = 0xffffffff;
    }
    uVar9 = -uVar9 & uVar9;
    iVar8 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar8 == 0; iVar8 = iVar8 + -1) {
      }
    }
    if (uVar9 == 0) {
      iVar8 = 0x20;
    }
    else {
      iVar8 = 0x1f - iVar8;
    }
    uStack_84 = (uStack_80 - iVar8) + 0x1f;
    uVar9 = uStack_84;
    if ((int)uVar2 < (int)uStack_84) {
LAB_1421788ec:
      uStack_84 = uVar2;
      uVar9 = uVar2;
    }
  }
  while( true ) {
    if (((uStack_44 == uVar9) && (local_50 == (uint *)(param_2 + 2))) &&
       ((longlong *)CONCAT44(uStack_5c,local_60) == param_2)) break;
    FName::ToString((longlong)(int)uStack_44 * 0x10 + *(longlong *)CONCAT44(uStack_5c,local_60),
                    &local_70);
    plVar6 = (longlong *)operator_new(0x30);
    _Src = local_70;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      *(undefined4 *)(plVar6 + 1) = 1;
      *(undefined4 *)((longlong)plVar6 + 0xc) = 1;
      *plVar6 = (longlong)&PTR_DestroyObject_144cde280;
      *(undefined4 *)(plVar6 + 3) = 0;
      plVar6[2] = (longlong)&PTR_AsObject_143f605c8;
      plVar6[4] = 0;
      lVar10 = (longlong)local_68;
      *(int *)(plVar6 + 5) = local_68;
      if (local_68 == 0) {
        *(undefined4 *)((longlong)plVar6 + 0x2c) = 0;
        *(undefined4 *)(plVar6 + 3) = 2;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(plVar6 + 4,local_68,0);
        _guard_xfg_dispatch_icall_nop((void *)plVar6[4],_Src,lVar10 * 2);
        *(undefined4 *)(plVar6 + 3) = 2;
      }
    }
    local_a8 = plVar6 + 2;
    local_a0 = plVar6;
    SharedPointerInternals::EnableSharedFromThis(&local_a8);
    if (local_70 != (void *)0x0) {
      FMemory::Free();
    }
    plVar4 = local_a0;
    plVar6 = local_a8;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      *(int *)(local_a0 + 1) = (int)local_a0[1] + 1;
      UNLOCK();
    }
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar8);
    }
    plVar5 = local_a0;
    plVar7 = (longlong *)((longlong)iVar8 * 0x10 + *param_1);
    *plVar7 = (longlong)plVar6;
    plVar7[1] = (longlong)plVar4;
    if (local_a0 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_a0 + 1;
      lVar10 = *plVar6;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_a0)(local_a0);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        iVar8 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar8 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5,1);
        }
      }
    }
    uStack_48 = uStack_48 & ~uStack_54;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_58);
  }
  return param_1;
}



// FUNCTION 142178a90 FUN_142178a90 body=150 status=ok
// SIG undefined FUN_142178a90(void)

undefined8 * FUN_142178a90(undefined8 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcaa0;
      puVar2[1] = uVar1;
      puVar2[2] = *param_3;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142178b30 FUN_142178b30 body=149 status=ok
// SIG undefined FUN_142178b30(void)

undefined8 * FUN_142178b30(undefined8 *param_1,longlong *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcb18;
      puVar2[1] = uVar1;
      *(undefined4 *)(puVar2 + 2) = *param_3;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142178bd0 FUN_142178bd0 body=150 status=ok
// SIG undefined FUN_142178bd0(void)

undefined8 * FUN_142178bd0(undefined8 *param_1,longlong *param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 local_res8;
  
  local_res8 = *param_1;
  puVar2 = (undefined8 *)(**(code **)(*param_2 + 0x18))(param_2,&local_res8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)operator_new(0x18);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = (undefined8 *)0x0;
    }
    else {
      uVar1 = *param_1;
      *puVar2 = &PTR_FUN_144fdcb48;
      puVar2[1] = uVar1;
      *(undefined1 *)(puVar2 + 2) = *param_3;
    }
    (**(code **)(*param_2 + 0x20))(param_2,puVar2);
    FUN_142186e60(param_2,puVar2);
  }
  return puVar2;
}



// FUNCTION 142178c70 FUN_142178c70 body=727 status=ok
// SIG undefined FUN_142178c70(void)

int * FUN_142178c70(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  char cVar12;
  longlong *plVar13;
  int iVar14;
  bool bVar15;
  
  iVar8 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x10) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar13 +
                   (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar10 & 0x1f);
  bVar15 = false;
  plVar13 = (longlong *)((longlong)iVar10 * 0x10 + *param_1);
  *plVar13 = *param_3;
  *(undefined4 *)(plVar13 + 1) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    lVar3 = *plVar13;
    iVar10 = iVar14;
    if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
      iVar5 = FUN_140438070(lVar3);
      plVar7 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar7 = param_1 + 7;
      }
      iVar5 = *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)iVar5) * 4);
      if (iVar5 != -1) {
        do {
          iVar10 = iVar5;
          if (*(longlong *)(*param_1 + (longlong)iVar5 * 0x10) == lVar3) break;
          iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
          iVar10 = iVar14;
        } while (iVar5 != -1);
      }
    }
    bVar15 = iVar10 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar10 * 0x10 + *param_1),plVar13,8);
      iVar8 = *param_2;
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar8;
      }
      puVar9 = (undefined4 *)((longlong)iVar8 * 0x10 + *param_1);
      *puVar9 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      puVar9[1] = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar10;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar13 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_142178f1a;
    }
  }
  uVar11 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (3 < uVar11) {
    uVar6 = (uVar11 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar8 = 0x20;
    cVar12 = '\0';
    if (uVar6 != 0) {
      iVar8 = 0x1f - iVar14;
    }
    uVar6 = (uVar11 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar12 = '\x1f' - (char)iVar14;
    }
    iVar8 = 1 << (~(byte)((iVar8 << 0x1a) >> 0x1f) & 0x20U - cVar12 & 0x1f);
  }
  if (((int)uVar11 < 1) || (((int)param_1[9] != 0 && (iVar8 <= (int)param_1[9])))) {
    iVar14 = *param_2;
    uVar11 = FUN_140438070(*plVar13);
    uVar11 = (int)param_1[9] - 1U & uVar11;
    *(uint *)((longlong)plVar13 + 0xc) = uVar11;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 1) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         iVar14;
  }
  else {
    *(int *)(param_1 + 9) = iVar8;
    FUN_142192b70(param_1);
  }
LAB_142178f1a:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 142178f50 FUN_142178f50 body=712 status=ok
// SIG undefined FUN_142178f50(void)

int * FUN_142178f50(longlong *param_1,int *param_2,longlong *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar6 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x10);
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar4 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar13 + lVar4);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = *param_3;
  lVar7 = (longlong)iVar10 * 0x10;
  plVar13 = (longlong *)(*param_1 + lVar7);
  *plVar13 = lVar1;
  *(undefined4 *)(plVar13 + 1) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      lVar1 = *(longlong *)(lVar1 + 0x28);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar1 >> 0x20) + (int)lVar1) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*(longlong *)(*param_1 + (longlong)iVar8 * 0x10) + 0x28) == lVar1)
          break;
          iVar8 = *(int *)(*param_1 + 8 + (longlong)iVar8 * 0x10);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    bVar16 = iVar9 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar9 * 0x10 + *param_1),plVar13,8);
      bVar2 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar10;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar7 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar7 + 4 + lVar1) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar4);
      *puVar14 = *puVar14 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1421791f3;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar6 = 0x20;
    if (uVar3 != 0) {
      iVar6 = 0x1f - iVar15;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar3 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar6 = 1 << (~(byte)((iVar6 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar6 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*(undefined8 *)(*plVar13 + 0x28) >> 0x20) +
             (int)*(undefined8 *)(*plVar13 + 0x28) & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0xc) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 1) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar6;
    FUN_1421932b0(param_1);
  }
LAB_1421791f3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 142179220 FUN_142179220 body=626 status=ok
// SIG undefined FUN_142179220(void)

int * FUN_142179220(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  void *_Dst;
  bool bVar9;
  int local_res8 [2];
  int local_38 [2];
  undefined8 *local_30;
  
  TSparseArray<TSetElement<TTuple<FName,FNameArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::AddUninitialized(param_1,local_38);
  *param_2 = local_38[0];
  *local_30 = *param_3;
  FString::FString(local_30 + 1,param_3 + 1);
  *(undefined4 *)(local_30 + 3) = 0xffffffff;
  bVar9 = false;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::FindId
              (param_1,local_res8);
    bVar9 = local_res8[0] != -1;
    if (bVar9) {
      _Dst = (void *)((longlong)local_res8[0] * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,local_30,0x18);
      TSparseArray<TSetElement<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,*param_2,1);
      *param_2 = local_res8[0];
      goto LAB_142179462;
    }
  }
  cVar2 = TSet<FSoftObjectPath,DefaultKeyFuncs<FSoftObjectPath,0>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34));
  if (cVar2 == '\0') {
    iVar1 = *param_2;
    uVar8 = (int)((ulonglong)*local_30 >> 0x20) + (int)*local_30;
    uVar7 = uVar8 >> 0xd ^ -uVar8;
    uVar5 = (-0x61c88647 - uVar7) - uVar8 ^ uVar7 << 8;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 10;
    if (*(int *)(local_30 + 2) == 0) {
      puVar6 = &DAT_143f3eda8;
    }
    else {
      puVar6 = (undefined2 *)local_30[1];
    }
    uVar3 = FUN_140438070(puVar6);
    uVar7 = ((uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xf) - uVar3 ^ uVar3 >> 0xd;
    uVar5 = (-0x61c88647 - uVar7) - uVar3 ^ uVar7 << 8;
    uVar8 = (uVar3 - uVar5) - uVar7 ^ uVar5 >> 0xd;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 0xc;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 0x10;
    uVar8 = (uVar8 - uVar5) - uVar7 ^ uVar5 >> 5;
    uVar7 = (uVar7 - uVar5) - uVar8 ^ uVar8 >> 3;
    uVar5 = (uVar5 - uVar7) - uVar8 ^ uVar7 << 10;
    uVar5 = ((uVar8 - uVar5) - uVar7 ^ uVar5 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_30 + 0x1c) = uVar5;
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(undefined4 *)(local_30 + 3) =
         *(undefined4 *)
          ((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
    plVar4 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar4 = param_1 + 7;
    }
    *(int *)((longlong)plVar4 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) = iVar1
    ;
  }
LAB_142179462:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar9;
  }
  return param_2;
}



// FUNCTION 1421794a0 FUN_1421794a0 body=806 status=ok
// SIG undefined FUN_1421794a0(void)

int * FUN_1421794a0(longlong *param_1,int *param_2,undefined8 *param_3,longlong param_4)

{
  uint *puVar1;
  void *_Dst;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool local_res8;
  
  iVar13 = 1;
  iVar14 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar7 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
    *(int *)(param_1 + 6) = iVar7;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar7 * 0x28) = 0xffffffff;
    }
  }
  plVar11 = (longlong *)param_1[4];
  *param_2 = iVar9;
  local_res8 = false;
  if (plVar11 == (longlong *)0x0) {
    plVar11 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar11 + (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar1 = *puVar1 | 1 << ((byte)iVar9 & 0x1f);
  plVar11 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
  lVar10 = *(longlong *)*param_3;
  *plVar11 = lVar10;
  plVar11[1] = 0;
  plVar11[2] = 0;
  *(undefined1 *)(plVar11 + 3) = 0;
  *(undefined4 *)(plVar11 + 4) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar8 = iVar14;
    if (uVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)((int)((ulonglong)lVar10 >> 0x20) + (int)lVar10) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(longlong *)(*param_1 + (longlong)iVar7 * 0x28) == lVar10) break;
          iVar7 = *(int *)(*param_1 + 0x20 + (longlong)iVar7 * 0x28);
          iVar8 = iVar14;
        } while (iVar7 != -1);
      }
    }
    local_res8 = iVar8 != -1;
    if (local_res8) {
      lVar4 = (longlong)iVar8;
      lVar10 = *param_1;
      iVar13 = *(int *)(lVar10 + 0x10 + lVar4 * 0x28);
      _Dst = (void *)(lVar10 + lVar4 * 0x28);
      lVar10 = *(longlong *)(lVar10 + 8 + lVar4 * 0x28);
      if (iVar13 != 0) {
        lVar10 = lVar10 + 8;
        do {
          TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar10);
          lVar10 = lVar10 + 0x20;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
        lVar10 = *(longlong *)((longlong)_Dst + 8);
      }
      if (lVar10 != 0) {
        FMemory::Free();
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar11,0x20);
      iVar13 = *param_2;
      bVar2 = (byte)iVar13 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x28) = iVar13;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar10 + (longlong)iVar13 * 0x28) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar14 = (int)param_1[6];
      }
      *(int *)(lVar10 + 4 + (longlong)iVar13 * 0x28) = iVar14;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar13;
      plVar11 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar11 == (longlong *)0x0) {
        plVar11 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar11 +
                       (longlong)((int)(iVar13 + (iVar13 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_14217979d;
    }
  }
  if (3 < uVar12) {
    uVar3 = (uVar12 >> 1) + 8;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    iVar13 = 0x20;
    cVar6 = '\0';
    if (uVar3 != 0) {
      iVar13 = 0x1f - iVar14;
    }
    uVar3 = (uVar12 >> 1) + 7;
    iVar14 = 0x1f;
    if (uVar3 != 0) {
      for (; uVar3 >> iVar14 == 0; iVar14 = iVar14 + -1) {
      }
    }
    if (uVar3 != 0) {
      cVar6 = '\x1f' - (char)iVar14;
    }
    iVar13 = 1 << (~(byte)((iVar13 << 0x1a) >> 0x1f) & 0x20U - cVar6 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar13 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar11 >> 0x20) + (int)*plVar11 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar11 + 0x24) = uVar12;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(undefined4 *)(plVar11 + 4) =
         *(undefined4 *)
          ((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar11 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar11 = param_1 + 7;
    }
    *(int *)((longlong)plVar11 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar9;
  }
  else {
    *(int *)(param_1 + 9) = iVar13;
    TSet<TTuple<FName,FVariantData>,TDefaultMapHashableKeyFuncs<FName,FVariantData,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14217979d:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 1421797d0 FUN_1421797d0 body=472 status=ok
// SIG undefined FUN_1421797d0(void)

void FUN_1421797d0(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  undefined2 *puVar13;
  longlong *plVar14;
  longlong *local_40;
  
  plVar14 = (longlong *)*param_1;
  plVar1 = plVar14 + (longlong)(int)param_1[1] * 9;
  do {
    if (plVar14 == plVar1) {
      return;
    }
    lVar5 = plVar14[3];
    if ((lVar5 == 0) || (lVar5 == *(longlong *)(*(longlong *)*param_2 + 0x28))) {
      iVar4 = *(int *)((undefined8 *)param_2[1] + 1);
      if (iVar4 == 0) {
LAB_1421798c4:
        lVar5 = *plVar14;
        if (*(longlong *)(*param_3 + 0x28) != 0) {
          plVar8 = (longlong *)FUN_14218dae0(*param_3,param_3[1]);
          puVar11 = (undefined8 *)*plVar8;
          puVar3 = puVar11 + (int)plVar8[1];
          for (; puVar11 != puVar3; puVar11 = puVar11 + 1) {
            plVar8 = (longlong *)*puVar11;
            if (*plVar8 == lVar5) goto LAB_142179960;
          }
        }
        if ((int)plVar14[2] == 0) {
          puVar13 = &DAT_143f3eda8;
        }
        else {
          puVar13 = (undefined2 *)plVar14[1];
        }
        lVar5 = *param_3;
        lVar6 = param_3[1];
        plVar8 = (longlong *)FUN_142191000(*plVar14,lVar5,puVar13);
        plVar9 = (longlong *)FUN_14218dae0(lVar5,lVar6);
        iVar4 = (int)plVar9[1];
        *(int *)(plVar9 + 1) = iVar4 + 1;
        if (*(int *)((longlong)plVar9 + 0xc) < iVar4 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar9,iVar4);
        }
        *(longlong **)(*plVar9 + (longlong)iVar4 * 8) = plVar8;
LAB_142179960:
        local_40 = plVar8;
        (**(code **)param_3[2])(((undefined8 *)param_3[2])[1],plVar14,&local_40);
      }
      else {
        iVar12 = 0;
        if ((*plVar14 != 0) && (lVar5 != 0)) {
          if (((int)plVar14[5] == 0) || ((int)plVar14[5] == 1)) {
            iVar12 = 1;
          }
          else {
            iVar10 = (int)plVar14[7] + -1;
            if ((int)plVar14[7] == 0) {
              iVar10 = iVar12;
            }
            iVar12 = (iVar10 != 0) + 2;
          }
        }
        piVar7 = *(int **)param_2[1];
        piVar2 = piVar7 + iVar4;
        for (; piVar7 != piVar2; piVar7 = piVar7 + 1) {
          if (*piVar7 == iVar12) goto LAB_1421798c4;
        }
      }
    }
    plVar14 = plVar14 + 9;
  } while( true );
}



// FUNCTION 1421799b0 FUN_1421799b0 body=160 status=ok
// SIG undefined FUN_1421799b0(void)

undefined8 * FUN_1421799b0(undefined8 param_1,undefined8 *param_2)

{
  undefined **local_b8 [18];
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  *param_2 = 0;
  param_2[1] = 0;
  FArchive::FArchive(local_b8);
  local_28 = 0;
  local_b8[0] = &PTR_FUN_143f4a3a0;
  local_18 = 0x7fffffffffffffff;
  local_20 = param_1;
  FArchive::SetIsLoading(local_b8,1);
  FArchive::SetIsPersistent(local_b8,1);
  FUN_14158ce90(local_b8,param_2);
  FArchive::~FArchive(local_b8);
  return param_2;
}



// FUNCTION 142179a50 FUN_142179a50 body=439 status=ok
// SIG undefined FUN_142179a50(void)

void FUN_142179a50(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x000142179a7a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(byte *)(param_1 + (longlong)iVar9 * 4 + 3) <
              *(byte *)(param_1 + (longlong)iVar8 * 4 + 0xb)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(byte *)(puVar11 + 3) < *(byte *)(puVar12 + 3)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000142179a7a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(byte *)(param_1 + (longlong)iVar8 * 4 + 3) <
                *(byte *)(param_1 + (longlong)iVar1 * 4 + 0xb)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(byte *)(puVar13 + 3) <= *(byte *)(puVar12 + 3)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142179c10 FUN_142179c10 body=439 status=ok
// SIG undefined FUN_142179c10(void)

void FUN_142179c10(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  
  iVar7 = (param_2 + -2) / 2;
  if (-1 < iVar7) {
    iVar8 = iVar7 * 2 + 1;
    iVar1 = iVar8;
    iVar10 = iVar7;
joined_r0x000142179c3a:
    do {
      if (iVar8 < param_2) {
        iVar8 = iVar7 * 2;
        iVar9 = iVar8 + 1;
        if (iVar8 + 2 < param_2) {
          if (*(byte *)(param_1 + (longlong)iVar8 * 4 + 0xb) <
              *(byte *)(param_1 + (longlong)iVar9 * 4 + 3)) {
            iVar9 = iVar8;
          }
          iVar9 = iVar9 + 1;
        }
        puVar12 = param_1 + (longlong)iVar7 * 4;
        puVar11 = param_1 + (longlong)iVar9 * 4;
        if (*(byte *)(puVar12 + 3) < *(byte *)(puVar11 + 3)) {
          if (puVar12 != puVar11) {
            uVar2 = puVar11[1];
            uVar3 = *puVar12;
            uVar4 = puVar12[1];
            uVar5 = puVar12[2];
            uVar6 = puVar12[3];
            *puVar12 = *puVar11;
            puVar12[1] = uVar2;
            uVar2 = puVar11[3];
            puVar12[2] = puVar11[2];
            puVar12[3] = uVar2;
            *puVar11 = uVar3;
            puVar11[1] = uVar4;
            puVar11[2] = uVar5;
            puVar11[3] = uVar6;
          }
          iVar8 = iVar9 * 2 + 1;
          iVar7 = iVar9;
          goto joined_r0x000142179c3a;
        }
      }
      iVar8 = iVar1 + -2;
      iVar7 = iVar10 + -1;
      iVar1 = iVar8;
      iVar10 = iVar7;
    } while (-1 < iVar7);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar11 = param_1 + (longlong)param_2 * 4;
    do {
      if (param_1 != puVar11) {
        uVar2 = puVar11[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        *param_1 = *puVar11;
        param_1[1] = uVar2;
        uVar2 = puVar11[3];
        param_1[2] = puVar11[2];
        param_1[3] = uVar2;
        *puVar11 = uVar3;
        puVar11[1] = uVar4;
        puVar11[2] = uVar5;
        puVar11[3] = uVar6;
      }
      iVar7 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar7 * 2;
          iVar8 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(byte *)(param_1 + (longlong)iVar1 * 4 + 0xb) <
                *(byte *)(param_1 + (longlong)iVar8 * 4 + 3)) {
              iVar8 = iVar1;
            }
            iVar8 = iVar8 + 1;
          }
          puVar13 = param_1 + (longlong)iVar7 * 4;
          puVar12 = param_1 + (longlong)iVar8 * 4;
          if (*(byte *)(puVar12 + 3) <= *(byte *)(puVar13 + 3)) break;
          if (puVar13 != puVar12) {
            uVar2 = puVar12[1];
            uVar3 = *puVar13;
            uVar4 = puVar13[1];
            uVar5 = puVar13[2];
            uVar6 = puVar13[3];
            *puVar13 = *puVar12;
            puVar13[1] = uVar2;
            uVar2 = puVar12[3];
            puVar13[2] = puVar12[2];
            puVar13[3] = uVar2;
            *puVar12 = uVar3;
            puVar12[1] = uVar4;
            puVar12[2] = uVar5;
            puVar12[3] = uVar6;
          }
          iVar7 = iVar8;
        } while (iVar8 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar11 = puVar11 + -4;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 142179dd0 FUN_142179dd0 body=706 status=ok
// SIG undefined FUN_142179dd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142179dd0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar23);
    local_318 = (undefined4)(longlong)(fVar23 + fVar23);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar17 = &local_328;
    do {
      puVar22 = (undefined8 *)*plVar17;
      puVar20 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_338._0_4_ = (int)lVar2;
      lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
      puVar21 = puVar22;
      if ((int)local_338 != 0) {
LAB_142179ea0:
        if (8 < lVar15) {
          puVar22 = puVar21 + (lVar15 / 2) * 4;
          if (puVar22 != puVar21) {
            uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar4 = *(undefined4 *)(puVar21 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar6 = *(undefined4 *)puVar22;
            uVar7 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar3;
            *(undefined4 *)(puVar22 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
            uVar10 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar10;
            *(undefined4 *)puVar21 = uVar6;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar7;
            *(undefined4 *)(puVar21 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar9;
            puVar21[2] = uVar11;
            puVar21[3] = uVar12;
          }
          puVar18 = puVar20 + 4;
          puVar22 = puVar21;
LAB_142179ef0:
          puVar16 = puVar22;
          puVar22 = puVar16 + 4;
          if (puVar22 <= puVar20) goto code_r0x000142179ef9;
          goto LAB_142179f03;
        }
        for (; puVar22 = puVar21, puVar18 = puVar21, puVar21 < puVar20; puVar20 = puVar20 + -4) {
          while (puVar16 = puVar22, puVar22 = puVar18 + 4, puVar22 <= puVar20) {
            pbVar1 = (byte *)(puVar18 + 7);
            puVar18 = puVar22;
            if (*(byte *)(puVar16 + 3) <= *pbVar1) {
              puVar22 = puVar16;
            }
          }
          if (puVar16 != puVar20) {
            uVar10 = puVar20[1];
            uVar11 = *puVar16;
            uVar12 = puVar16[1];
            uVar13 = puVar16[2];
            uVar14 = puVar16[3];
            *puVar16 = *puVar20;
            puVar16[1] = uVar10;
            uVar10 = puVar20[3];
            puVar16[2] = puVar20[2];
            puVar16[3] = uVar10;
            *puVar20 = uVar11;
            puVar20[1] = uVar12;
            puVar20[2] = uVar13;
            puVar20[3] = uVar14;
          }
        }
        goto LAB_142179ff5;
      }
LAB_142179fe6:
      local_338 = lVar2;
      FUN_142179a50(puVar22,lVar15,param_3,param_4);
LAB_142179ff5:
      plVar17 = plVar17 + -3;
    } while (&local_328 <= plVar17);
  }
  return;
code_r0x000142179ef9:
  if (*(byte *)(puVar21 + 3) <= *(byte *)(puVar16 + 7)) goto LAB_142179ef0;
LAB_142179f03:
  do {
    puVar19 = puVar18;
    puVar18 = puVar19 + -4;
    if (puVar18 <= puVar21) break;
  } while (*(byte *)(puVar19 + -1) <= *(byte *)(puVar21 + 3));
  if (puVar22 <= puVar18) {
    if (puVar22 != puVar18) {
      uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
      uVar4 = *(undefined4 *)(puVar19 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
      uVar6 = *(undefined4 *)puVar22;
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uVar8 = *(undefined4 *)(puVar16 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar16 + 0x2c);
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
      *(undefined4 *)(puVar16 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
      uVar10 = puVar19[-1];
      puVar16[6] = puVar19[-2];
      puVar16[7] = uVar10;
      *(undefined4 *)puVar18 = uVar6;
      *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
      *(undefined4 *)(puVar19 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
      puVar19[-2] = uVar11;
      puVar19[-1] = uVar12;
    }
    goto LAB_142179ef0;
  }
  if (puVar21 != puVar18) {
    uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
    uVar4 = *(undefined4 *)(puVar19 + -3);
    uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
    uVar6 = *(undefined4 *)puVar21;
    uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
    uVar8 = *(undefined4 *)(puVar21 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
    uVar11 = puVar21[2];
    uVar12 = puVar21[3];
    *(undefined4 *)puVar21 = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
    uVar10 = puVar19[-1];
    puVar21[2] = puVar19[-2];
    puVar21[3] = uVar10;
    *(undefined4 *)puVar18 = uVar6;
    *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
    *(undefined4 *)(puVar19 + -3) = uVar8;
    *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
    puVar19[-2] = uVar11;
    puVar19[-1] = uVar12;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar18 + (-0x20 - (longlong)puVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar20 - (longlong)puVar22 & 0xffffffffffffffe0U)) {
    if (puVar22 < puVar20) {
      *plVar17 = (longlong)puVar22;
      plVar17[1] = (longlong)puVar20;
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar18 <= puVar21 + 4) goto LAB_142179ff5;
    puVar20 = puVar19 + -8;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *plVar17 = (longlong)puVar21;
      plVar17[1] = (longlong)(puVar19 + -8);
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar20 <= puVar22) goto LAB_142179ff5;
  }
  lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
  puVar21 = puVar22;
  if ((int)local_338 == 0) goto LAB_142179fe6;
  goto LAB_142179ea0;
}



// FUNCTION 14217a0a0 FUN_14217a0a0 body=706 status=ok
// SIG undefined FUN_14217a0a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_14217a0a0(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  byte *pbVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  float fVar23;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x20 + -0x20 + param_1;
    fVar23 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar23 = fVar23 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar23 = _guard_xfg_dispatch_icall_nop(fVar23);
    local_318 = (undefined4)(longlong)(fVar23 + fVar23);
    _guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar17 = &local_328;
    do {
      puVar22 = (undefined8 *)*plVar17;
      puVar20 = (undefined8 *)plVar17[1];
      lVar2 = plVar17[2];
      local_338._0_4_ = (int)lVar2;
      lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
      puVar21 = puVar22;
      if ((int)local_338 != 0) {
LAB_14217a170:
        if (8 < lVar15) {
          puVar22 = puVar21 + (lVar15 / 2) * 4;
          if (puVar22 != puVar21) {
            uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
            uVar4 = *(undefined4 *)(puVar21 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
            uVar6 = *(undefined4 *)puVar22;
            uVar7 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar8 = *(undefined4 *)(puVar22 + 1);
            uVar9 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar11 = puVar22[2];
            uVar12 = puVar22[3];
            *(undefined4 *)puVar22 = *(undefined4 *)puVar21;
            *(undefined4 *)((longlong)puVar22 + 4) = uVar3;
            *(undefined4 *)(puVar22 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar22 + 0xc) = uVar5;
            uVar10 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar10;
            *(undefined4 *)puVar21 = uVar6;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar7;
            *(undefined4 *)(puVar21 + 1) = uVar8;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar9;
            puVar21[2] = uVar11;
            puVar21[3] = uVar12;
          }
          puVar18 = puVar20 + 4;
          puVar22 = puVar21;
LAB_14217a1c0:
          puVar16 = puVar22;
          puVar22 = puVar16 + 4;
          if (puVar22 <= puVar20) goto code_r0x00014217a1c9;
          goto LAB_14217a1d3;
        }
        for (; puVar22 = puVar21, puVar18 = puVar21, puVar21 < puVar20; puVar20 = puVar20 + -4) {
          while (puVar16 = puVar22, puVar22 = puVar18 + 4, puVar22 <= puVar20) {
            pbVar1 = (byte *)(puVar18 + 7);
            puVar18 = puVar22;
            if (*pbVar1 <= *(byte *)(puVar16 + 3)) {
              puVar22 = puVar16;
            }
          }
          if (puVar16 != puVar20) {
            uVar10 = puVar20[1];
            uVar11 = *puVar16;
            uVar12 = puVar16[1];
            uVar13 = puVar16[2];
            uVar14 = puVar16[3];
            *puVar16 = *puVar20;
            puVar16[1] = uVar10;
            uVar10 = puVar20[3];
            puVar16[2] = puVar20[2];
            puVar16[3] = uVar10;
            *puVar20 = uVar11;
            puVar20[1] = uVar12;
            puVar20[2] = uVar13;
            puVar20[3] = uVar14;
          }
        }
        goto LAB_14217a2c5;
      }
LAB_14217a2b6:
      local_338 = lVar2;
      FUN_142179c10(puVar22,lVar15,param_3,param_4);
LAB_14217a2c5:
      plVar17 = plVar17 + -3;
    } while (&local_328 <= plVar17);
  }
  return;
code_r0x00014217a1c9:
  if (*(byte *)(puVar16 + 7) <= *(byte *)(puVar21 + 3)) goto LAB_14217a1c0;
LAB_14217a1d3:
  do {
    puVar19 = puVar18;
    puVar18 = puVar19 + -4;
    if (puVar18 <= puVar21) break;
  } while (*(byte *)(puVar21 + 3) <= *(byte *)(puVar19 + -1));
  if (puVar22 <= puVar18) {
    if (puVar22 != puVar18) {
      uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
      uVar4 = *(undefined4 *)(puVar19 + -3);
      uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
      uVar6 = *(undefined4 *)puVar22;
      uVar7 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uVar8 = *(undefined4 *)(puVar16 + 5);
      uVar9 = *(undefined4 *)((longlong)puVar16 + 0x2c);
      uVar11 = puVar16[6];
      uVar12 = puVar16[7];
      *(undefined4 *)puVar22 = *(undefined4 *)puVar18;
      *(undefined4 *)((longlong)puVar16 + 0x24) = uVar3;
      *(undefined4 *)(puVar16 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar16 + 0x2c) = uVar5;
      uVar10 = puVar19[-1];
      puVar16[6] = puVar19[-2];
      puVar16[7] = uVar10;
      *(undefined4 *)puVar18 = uVar6;
      *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
      *(undefined4 *)(puVar19 + -3) = uVar8;
      *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
      puVar19[-2] = uVar11;
      puVar19[-1] = uVar12;
    }
    goto LAB_14217a1c0;
  }
  if (puVar21 != puVar18) {
    uVar3 = *(undefined4 *)((longlong)puVar19 + -0x1c);
    uVar4 = *(undefined4 *)(puVar19 + -3);
    uVar5 = *(undefined4 *)((longlong)puVar19 + -0x14);
    uVar6 = *(undefined4 *)puVar21;
    uVar7 = *(undefined4 *)((longlong)puVar21 + 4);
    uVar8 = *(undefined4 *)(puVar21 + 1);
    uVar9 = *(undefined4 *)((longlong)puVar21 + 0xc);
    uVar11 = puVar21[2];
    uVar12 = puVar21[3];
    *(undefined4 *)puVar21 = *(undefined4 *)puVar18;
    *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
    *(undefined4 *)(puVar21 + 1) = uVar4;
    *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
    uVar10 = puVar19[-1];
    puVar21[2] = puVar19[-2];
    puVar21[3] = uVar10;
    *(undefined4 *)puVar18 = uVar6;
    *(undefined4 *)((longlong)puVar19 + -0x1c) = uVar7;
    *(undefined4 *)(puVar19 + -3) = uVar8;
    *(undefined4 *)((longlong)puVar19 + -0x14) = uVar9;
    puVar19[-2] = uVar11;
    puVar19[-1] = uVar12;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)puVar18 + (-0x20 - (longlong)puVar21) & 0xffffffffffffffe0U) <
      (longlong)((longlong)puVar20 - (longlong)puVar22 & 0xffffffffffffffe0U)) {
    if (puVar22 < puVar20) {
      *plVar17 = (longlong)puVar22;
      plVar17[1] = (longlong)puVar20;
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar18 <= puVar21 + 4) goto LAB_14217a2c5;
    puVar20 = puVar19 + -8;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 4 < puVar18) {
      *plVar17 = (longlong)puVar21;
      plVar17[1] = (longlong)(puVar19 + -8);
      *(int *)(plVar17 + 2) = (int)local_338;
      plVar17 = plVar17 + 3;
    }
    if (puVar20 <= puVar22) goto LAB_14217a2c5;
  }
  lVar15 = ((longlong)puVar20 - (longlong)puVar22 >> 5) + 1;
  puVar21 = puVar22;
  if ((int)local_338 == 0) goto LAB_14217a2b6;
  goto LAB_14217a170;
}



// FUNCTION 14217a370 FUN_14217a370 body=482 status=ok
// SIG undefined FUN_14217a370(void)

void FUN_14217a370(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0 [3];
  undefined2 local_d8;
  ushort local_d6;
  undefined **local_c8 [18];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  if ((*(longlong *)*param_2 != 0) &&
     (cVar3 = FUN_1407ce010((longlong *)*param_2 + 1), cVar3 != '\0')) {
    plVar4 = (longlong *)*param_1;
    plVar1 = plVar4 + (longlong)(int)param_1[1] * 5;
    if (plVar4 != plVar1) {
      do {
        if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
           (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
            *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
          return;
        }
        plVar4 = plVar4 + 5;
      } while (plVar4 != plVar1);
    }
    local_108 = (void *)0x0;
    local_100 = *(int *)((undefined8 *)*param_3 + 1);
    lVar5 = (longlong)local_100;
    _Src = *(void **)*param_3;
    if (local_100 == 0) {
      local_fc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
      _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar5 * 2);
    }
    local_f8 = *param_2;
    local_d8 = 0xffff;
    local_d6 = local_d6 & 0xfff8;
    FUN_140636940(local_f0);
    FArchive::FArchive(local_c8);
    local_38 = 0;
    local_c8[0] = &PTR_FUN_143f4a100;
    local_30 = local_f0;
    local_28 = 0;
    FArchive::SetIsSaving(local_c8,1);
    FArchive::SetIsPersistent(local_c8,1);
    FUN_14158ce90(local_c8,&local_108);
    FArchive::~FArchive(local_c8);
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
    *plVar1 = local_f8;
    *(ushort *)((longlong)plVar1 + 0x22) = *(ushort *)((longlong)plVar1 + 0x22) & 0xfff8;
    *(undefined2 *)(plVar1 + 4) = 0xffff;
    FUN_14217f450(plVar1 + 1,local_f0);
    if (((local_d6 & 1) != 0) && (local_f0[0] != 0)) {
      FMemory::Free();
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14217a560 FUN_14217a560 body=486 status=ok
// SIG undefined FUN_14217a560(void)

void FUN_14217a560(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  longlong *plVar1;
  int iVar2;
  void *_Src;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  void *local_108;
  int local_100;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0 [3];
  undefined2 local_d8;
  ushort local_d6;
  undefined **local_c8 [18];
  undefined8 local_38;
  longlong *local_30;
  undefined8 local_28;
  
  if ((*(longlong *)*param_2 != 0) &&
     (cVar3 = FUN_1407ce010((longlong *)*param_2 + 1), cVar3 != '\0')) {
    plVar4 = (longlong *)*param_1;
    plVar1 = plVar4 + (longlong)(int)param_1[1] * 5;
    if (plVar4 != plVar1) {
      do {
        if ((*(longlong *)*plVar4 == *(longlong *)*param_2) &&
           (*(longlong *)(((longlong *)*plVar4)[1] + 0x28) ==
            *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
          return;
        }
        plVar4 = plVar4 + 5;
      } while (plVar4 != plVar1);
    }
    local_108 = (void *)0x0;
    local_100 = *(int *)(*(longlong *)*param_3 + 0x38);
    lVar5 = (longlong)local_100;
    _Src = *(void **)(*(longlong *)*param_3 + 0x30);
    if (local_100 == 0) {
      local_fc = 0;
    }
    else {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_108,local_100,0);
      _guard_xfg_dispatch_icall_nop(local_108,_Src,lVar5 * 2);
    }
    local_f8 = *param_2;
    local_d8 = 0xffff;
    local_d6 = local_d6 & 0xfff8;
    FUN_140636940(local_f0);
    FArchive::FArchive(local_c8);
    local_38 = 0;
    local_c8[0] = &PTR_FUN_143f4a100;
    local_30 = local_f0;
    local_28 = 0;
    FArchive::SetIsSaving(local_c8,1);
    FArchive::SetIsPersistent(local_c8,1);
    FUN_14158ce90(local_c8,&local_108);
    FArchive::~FArchive(local_c8);
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
    *plVar1 = local_f8;
    *(ushort *)((longlong)plVar1 + 0x22) = *(ushort *)((longlong)plVar1 + 0x22) & 0xfff8;
    *(undefined2 *)(plVar1 + 4) = 0xffff;
    FUN_14217f450(plVar1 + 1,local_f0);
    if (((local_d6 & 1) != 0) && (local_f0[0] != 0)) {
      FMemory::Free();
    }
    if (local_108 != (void *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14217a750 FUN_14217a750 body=503 status=ok
// SIG undefined FUN_14217a750(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_14217a750(int *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90 [8];
  undefined8 *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  plVar5 = (longlong *)FUN_14218b420();
  bVar8 = false;
  if (plVar5 != (longlong *)0x0) {
    iVar4 = (int)plVar5[1];
    bVar8 = iVar4 != 0;
    if (iVar4 != 0) {
      if ((char)plVar5[2] != '\0') {
        local_98[0] = 0;
        FUN_14217a0a0(*plVar5,(longlong)iVar4,0,local_98);
        *(undefined1 *)(plVar5 + 2) = 0;
      }
      *param_1 = *param_1 + 1;
      puVar7 = (undefined8 *)*plVar5;
      iVar4 = *param_1;
      puVar6 = puVar7 + (longlong)(int)plVar5[1] * 4;
      if (puVar7 != puVar6) {
        do {
          uVar1 = *puVar7;
          uVar2 = *param_3;
          if (((*(int *)(puVar7 + 2) != 0) && ((longlong *)puVar7[1] != (longlong *)0x0)) &&
             (cVar3 = (**(code **)(*(longlong *)puVar7[1] + 0x18))(), cVar3 != '\0')) {
            plVar5 = (longlong *)0x0;
            if (*(int *)(puVar7 + 2) != 0) {
              plVar5 = (longlong *)puVar7[1];
            }
            (**(code **)(*plVar5 + 0x40))(plVar5,uVar1,uVar2);
          }
          puVar7 = puVar7 + 4;
        } while (puVar7 != puVar6);
        iVar4 = *param_1;
      }
      *param_1 = iVar4 + -1;
      if ((iVar4 + -1 == 0) && (param_1[0x28] != 0)) {
        puVar7 = *(undefined8 **)(param_1 + 0x26);
        local_50 = (undefined8 *)0x0;
        if (puVar7 == (undefined8 *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_90,param_1 + 0x16,0x40);
        }
        if (local_50 != (undefined8 *)0x0) {
          FMemory::Free();
          puVar7 = *(undefined8 **)(param_1 + 0x26);
        }
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        local_48 = param_1[0x28];
        puVar6 = local_90;
        if (puVar7 != (undefined8 *)0x0) {
          puVar6 = puVar7;
        }
        local_44 = param_1[0x29];
        local_50 = puVar7;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        puVar7 = puVar6 + local_48;
        for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
          FUN_142195170(param_1,*puVar6);
        }
        if (local_50 != (undefined8 *)0x0) {
          FMemory::Free(local_50);
        }
      }
    }
  }
  return bVar8;
}



// FUNCTION 14217a950 FUN_14217a950 body=627 status=ok
// SIG undefined FUN_14217a950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_14217a950(int *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  longlong *plVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [8];
  undefined8 local_90 [8];
  undefined8 *local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar7 = 0;
  if (param_1[4] != param_1[0xf]) {
    piVar8 = *(int **)(param_1 + 0x12);
    if (*(int **)(param_1 + 0x12) == (int *)0x0) {
      piVar8 = param_1 + 0x10;
    }
    uVar7 = piVar8[(longlong)((int)((ulonglong)param_2 >> 0x20) + (int)param_2) &
                   (longlong)param_1[0x14] - 1U];
    if (uVar7 != 0xffffffff) {
      do {
        plVar9 = (longlong *)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar7 * 0x28);
        if (*(longlong *)(*(longlong *)(param_1 + 2) + (longlong)(int)uVar7 * 0x28) == param_2) {
          if (uVar7 != 0xffffffff) goto LAB_14217a9e3;
          break;
        }
        uVar7 = *(uint *)(plVar9 + 4);
      } while (uVar7 != 0xffffffff);
    }
  }
  plVar9 = (longlong *)0x0;
LAB_14217a9e3:
  plVar10 = plVar9 + 1;
  if (plVar9 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
  }
  if (plVar10 == (longlong *)0x0) {
    uVar7 = uVar7 & 0xffffff00;
  }
  else {
    iVar1 = (int)plVar10[1];
    if (iVar1 != 0) {
      if ((char)plVar10[2] != '\0') {
        local_98[0] = 0;
        FUN_142179dd0(*plVar10,(longlong)iVar1,0,local_98);
        *(undefined1 *)(plVar10 + 2) = 0;
      }
      *param_1 = *param_1 + 1;
      lVar13 = *plVar10;
      iVar6 = *param_1;
      lVar12 = (longlong)(int)plVar10[1] * 0x20 + lVar13;
      if (lVar13 != lVar12) {
        do {
          uVar2 = param_3[1];
          uVar3 = *param_3;
          uVar4 = param_3[2];
          if (((*(int *)(lVar13 + 0x10) != 0) && (*(longlong **)(lVar13 + 8) != (longlong *)0x0)) &&
             (cVar5 = (**(code **)(**(longlong **)(lVar13 + 8) + 0x18))(), cVar5 != '\0')) {
            if (*(int *)(lVar13 + 0x10) == 0) {
              plVar9 = (longlong *)0x0;
            }
            else {
              plVar9 = *(longlong **)(lVar13 + 8);
            }
            (**(code **)(*plVar9 + 0x40))(plVar9,uVar4,uVar3,uVar2);
          }
          lVar13 = lVar13 + 0x20;
        } while (lVar13 != lVar12);
        iVar6 = *param_1;
      }
      *param_1 = iVar6 + -1;
      if ((iVar6 + -1 == 0) && (param_1[0x28] != 0)) {
        puVar14 = *(undefined8 **)(param_1 + 0x26);
        local_50 = (undefined8 *)0x0;
        if (puVar14 == (undefined8 *)0x0) {
          _guard_xfg_dispatch_icall_nop(local_90,param_1 + 0x16,0x40);
        }
        if (local_50 != (undefined8 *)0x0) {
          FMemory::Free();
          puVar14 = *(undefined8 **)(param_1 + 0x26);
        }
        param_1[0x26] = 0;
        param_1[0x27] = 0;
        local_48 = param_1[0x28];
        puVar11 = local_90;
        if (puVar14 != (undefined8 *)0x0) {
          puVar11 = puVar14;
        }
        local_44 = param_1[0x29];
        local_50 = puVar14;
        param_1[0x28] = 0;
        param_1[0x29] = 0;
        puVar14 = puVar11 + local_48;
        for (; puVar11 != puVar14; puVar11 = puVar11 + 1) {
          FUN_142195170(param_1,*puVar11);
        }
        if (local_50 != (undefined8 *)0x0) {
          FMemory::Free(local_50);
        }
      }
    }
    uVar7 = (uint)(iVar1 != 0);
  }
  return uVar7;
}



// FUNCTION 14217abd0 FUN_14217abd0 body=428 status=ok
// SIG undefined FUN_14217abd0(void)

int FUN_14217abd0(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  byte bVar2;
  longlong *plVar3;
  int iVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  byte bVar11;
  
  iVar1 = (int)param_1[1];
  lVar8 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar5 = 0;
  uVar7 = uVar5;
  uVar10 = uVar5;
  if ((*(longlong *)(*param_1 + 0x18) == 0) ||
     (*(longlong *)(*param_1 + 0x18) == *(longlong *)(*(longlong *)*param_2 + 0x28))) {
    bVar11 = 1;
  }
  else {
    bVar11 = 0;
  }
  do {
    iVar4 = (int)uVar5;
    uVar7 = uVar7 + 1;
    uVar5 = (ulonglong)(iVar4 + 1);
    if ((longlong)uVar7 < lVar8) {
      plVar3 = (longlong *)(*param_1 + 0x18 + uVar7 * 0x48);
      do {
        if ((*plVar3 == 0) || (*plVar3 == *(longlong *)(*(longlong *)*param_2 + 0x28))) {
          bVar2 = 1;
        }
        else {
          bVar2 = 0;
        }
        if (bVar11 != bVar2) break;
        uVar5 = (ulonglong)((int)uVar5 + 1);
        uVar7 = uVar7 + 1;
        plVar3 = plVar3 + 9;
      } while ((longlong)uVar7 < lVar8);
    }
    iVar6 = (int)uVar5 - iVar4;
    if (bVar11 == 0) {
      if (iVar6 != 0) {
        plVar3 = (longlong *)(*param_1 + (longlong)iVar4 * 0x48 + 0x20);
        do {
          if (plVar3[2] != 0) {
            FMemory::Free();
          }
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          if (plVar3[-3] != 0) {
            FMemory::Free();
          }
          plVar3 = plVar3 + 9;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
    else {
      iVar9 = (int)uVar10;
      if (iVar9 != iVar4) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar9 * 0x48),
                   (void *)(*param_1 + (longlong)iVar4 * 0x48),(longlong)iVar6 * 0x48);
      }
      uVar10 = (ulonglong)(uint)(iVar9 + iVar6);
    }
    bVar11 = bVar11 ^ 1;
    if (lVar8 <= (longlong)uVar7) {
      *(int *)(param_1 + 1) = (int)uVar10;
      return iVar1 - (int)uVar10;
    }
  } while( true );
}



// FUNCTION 14217ad80 FUN_14217ad80 body=508 status=ok
// SIG undefined FUN_14217ad80(void)

int FUN_14217ad80(longlong *param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  int local_res8;
  
  iVar1 = (int)param_1[1];
  lVar13 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  local_res8 = 0;
  cVar5 = FUN_142182580(param_2,*param_1);
  bVar15 = cVar5 == '\0';
  lVar12 = 0;
  iVar10 = 0;
  do {
    iVar11 = iVar10 + 1;
    lVar12 = lVar12 + 1;
    if (lVar12 < lVar13) {
      lVar14 = lVar12 * 0x48;
      do {
        lVar2 = *param_1;
        lVar3 = *param_2;
        lVar4 = *(longlong *)(lVar2 + 0x18 + lVar14);
        if ((lVar4 == 0) || (lVar4 == *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x28))) {
          iVar7 = *(int *)(lVar2 + 0x28 + lVar14);
          if ((iVar7 != 0) && (iVar7 != 1)) {
            if (lVar4 == *(longlong *)(*(longlong *)(lVar3 + 0x30) + 0x28)) {
              if (*(int *)(lVar3 + 0x40) == 0) {
                puVar8 = &DAT_143f3eda8;
              }
              else {
                puVar8 = *(undefined2 **)(lVar3 + 0x38);
              }
              iVar7 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>
                                (*(undefined8 *)(lVar2 + 0x20 + lVar14),puVar8);
              if (iVar7 == 0) goto LAB_14217ae88;
            }
            goto LAB_14217ae84;
          }
LAB_14217ae88:
          bVar6 = true;
        }
        else {
LAB_14217ae84:
          bVar6 = false;
        }
        if (bVar15 != bVar6) break;
        iVar11 = iVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar14 = lVar14 + 0x48;
      } while (lVar12 < lVar13);
    }
    iVar7 = iVar11 - iVar10;
    if (bVar15 == false) {
      if (iVar7 != 0) {
        plVar9 = (longlong *)(*param_1 + 0x20 + (longlong)iVar10 * 0x48);
        do {
          if (plVar9[2] != 0) {
            FMemory::Free();
          }
          if (*plVar9 != 0) {
            FMemory::Free();
          }
          if (plVar9[-3] != 0) {
            FMemory::Free();
          }
          plVar9 = plVar9 + 9;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (local_res8 != iVar10) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)local_res8 * 0x48),
                   (void *)(*param_1 + (longlong)iVar10 * 0x48),(longlong)iVar7 * 0x48);
      }
      local_res8 = local_res8 + iVar7;
    }
    bVar15 = (bool)(bVar15 ^ 1);
    iVar10 = iVar11;
    if (lVar13 <= lVar12) {
      *(int *)(param_1 + 1) = local_res8;
      return iVar1 - local_res8;
    }
  } while( true );
}



// FUNCTION 14217af80 FUN_14217af80 body=398 status=ok
// SIG undefined FUN_14217af80(void)

void FUN_14217af80(longlong *param_1,longlong *param_2,longlong *param_3)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong lStack_38;
  undefined8 local_30;
  undefined2 local_28;
  ushort local_26;
  
  if ((*(longlong *)*param_2 != 0) &&
     (cVar4 = FUN_1407ce010((longlong *)*param_2 + 1), cVar4 != '\0')) {
    plVar6 = (longlong *)*param_1;
    iVar2 = (int)param_1[1];
    lVar5 = (longlong)iVar2;
    plVar1 = plVar6 + lVar5 * 5;
    if (plVar6 != plVar1) {
      do {
        if ((*(longlong *)*plVar6 == *(longlong *)*param_2) &&
           (*(longlong *)(((longlong *)*plVar6)[1] + 0x28) ==
            *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
          local_48 = *param_3;
          uStack_40 = (undefined4)param_3[1];
          uStack_3c = *(undefined4 *)((longlong)param_3 + 0xc);
          lStack_38 = 0;
          local_30 = CONCAT44(local_30._4_4_,CONCAT22(local_30._2_2_,0xb)) & 0xfffffffffff8ffff;
          FUN_14217f450(plVar6 + 1,&local_48);
          lVar5 = local_48;
          if ((local_30 & 0x10000) == 0) {
            return;
          }
          goto LAB_14217b09e;
        }
        plVar6 = plVar6 + 5;
      } while (plVar6 != plVar1);
    }
    local_48 = *param_2;
    uStack_40 = (undefined4)*param_3;
    uStack_3c = *(undefined4 *)((longlong)param_3 + 4);
    lStack_38 = param_3[1];
    local_26 = local_26 & 0xfff8;
    local_30 = 0;
    local_28 = 0xb;
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    lVar3 = *param_1;
    *(longlong *)(lVar3 + lVar5 * 0x28) = local_48;
    lVar3 = lVar3 + lVar5 * 0x28;
    *(ushort *)(lVar3 + 0x22) = *(ushort *)(lVar3 + 0x22) & 0xfff8;
    *(undefined2 *)(lVar3 + 0x20) = 0xffff;
    FUN_14217f450(lVar3 + 8,&uStack_40);
    if ((local_26 & 1) != 0) {
      lVar5 = CONCAT44(uStack_3c,uStack_40);
LAB_14217b09e:
      if (lVar5 != 0) {
        FMemory::Free();
      }
    }
  }
  return;
}



// FUNCTION 14217b110 FUN_14217b110 body=347 status=ok
// SIG undefined FUN_14217b110(void)

void FUN_14217b110(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  longlong *plVar5;
  longlong local_48;
  longlong local_40 [2];
  undefined2 local_30;
  ushort local_2e;
  undefined2 local_28;
  ushort local_26;
  
  if ((*(longlong *)*param_2 != 0) &&
     (cVar4 = FUN_1407ce010((longlong *)*param_2 + 1), cVar4 != '\0')) {
    plVar5 = (longlong *)*param_1;
    plVar1 = plVar5 + (longlong)(int)param_1[1] * 5;
    if (plVar5 != plVar1) {
      do {
        if ((*(longlong *)*plVar5 == *(longlong *)*param_2) &&
           (*(longlong *)(((longlong *)*plVar5)[1] + 0x28) ==
            *(longlong *)(((longlong *)*param_2)[1] + 0x28))) {
          local_30 = 0xffff;
          local_2e = local_2e & 0xfff8;
          FUN_14217f4f0(&local_48,param_3);
          FUN_14217f450(plVar5 + 1,&local_48);
          local_40[0] = local_48;
          uVar3 = local_2e;
          goto joined_r0x00014217b262;
        }
        plVar5 = plVar5 + 5;
      } while (plVar5 != plVar1);
    }
    local_48 = *param_2;
    local_28 = 0xffff;
    local_26 = local_26 & 0xfff8;
    FUN_14217f4f0(local_40,param_3);
    iVar2 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
    }
    plVar1 = (longlong *)(*param_1 + (longlong)iVar2 * 0x28);
    *plVar1 = local_48;
    *(ushort *)((longlong)plVar1 + 0x22) = *(ushort *)((longlong)plVar1 + 0x22) & 0xfff8;
    *(undefined2 *)(plVar1 + 4) = 0xffff;
    FUN_14217f450(plVar1 + 1,local_40);
    uVar3 = local_26;
joined_r0x00014217b262:
    if (((uVar3 & 1) != 0) && (local_40[0] != 0)) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 14217b270 FUN_14217b270 body=95 status=ok
// SIG undefined FUN_14217b270(void)

float FUN_14217b270(undefined8 param_1)

{
  short *psVar1;
  short *psVar2;
  double dVar3;
  
  psVar1 = (short *)FUN_14218bef0();
  if ((*psVar1 != 0) && (*(int *)(psVar1 + 0x78) != 0)) {
    psVar2 = (short *)0x0;
    if (*(longlong *)(psVar1 + 0x70) == 0) {
      psVar2 = psVar1 + 0x60;
    }
    if (psVar2 != (short *)0x0 || *(longlong *)(psVar1 + 0x70) != 0) {
      dVar3 = (double)FUN_142182720(psVar1 + 0x58,param_1);
      return (float)dVar3;
    }
  }
  return 0.0;
}



// FUNCTION 14217b2d0 FUN_14217b2d0 body=490 status=ok
// SIG undefined FUN_14217b2d0(void)

longlong * FUN_14217b2d0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar3 = (int)(param_2 + 3 + (param_2 + 3 >> 0x1f & 3U)) >> 2;
  FUN_142189050(param_1,uVar3);
  if (0 < (int)uVar3) {
    uVar5 = (ulonglong)uVar3;
    do {
      uVar4 = FMemory::Malloc(0x400,0);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar1 * 8) = uVar4;
      puVar2 = *(undefined2 **)(*param_1 + (longlong)iVar1 * 8);
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = 0;
        *(undefined8 *)(puVar2 + 0x20) = 0;
        *(undefined4 *)(puVar2 + 0x28) = 0;
        *(code **)(puVar2 + 8) = FString::FString;
        *(undefined8 *)(puVar2 + 0x48) = 0;
        *(undefined4 *)(puVar2 + 0x50) = 0;
        *(code **)(puVar2 + 0x30) = FHardwareCursor::GetHandle;
        *(undefined8 *)(puVar2 + 0x70) = 0;
        *(undefined4 *)(puVar2 + 0x78) = 0;
        *(undefined1 **)(puVar2 + 0x58) = &LAB_14202be10;
        puVar2[0x80] = 0;
        *(undefined8 *)(puVar2 + 0xa0) = 0;
        *(undefined4 *)(puVar2 + 0xa8) = 0;
        *(code **)(puVar2 + 0x88) = FString::FString;
        *(undefined8 *)(puVar2 + 200) = 0;
        *(undefined4 *)(puVar2 + 0xd0) = 0;
        *(code **)(puVar2 + 0xb0) = FHardwareCursor::GetHandle;
        *(undefined8 *)(puVar2 + 0xf0) = 0;
        *(undefined4 *)(puVar2 + 0xf8) = 0;
        *(undefined1 **)(puVar2 + 0xd8) = &LAB_14202be10;
        puVar2[0x100] = 0;
        *(undefined8 *)(puVar2 + 0x120) = 0;
        *(undefined4 *)(puVar2 + 0x128) = 0;
        *(code **)(puVar2 + 0x108) = FString::FString;
        *(undefined8 *)(puVar2 + 0x148) = 0;
        *(undefined4 *)(puVar2 + 0x150) = 0;
        *(code **)(puVar2 + 0x130) = FHardwareCursor::GetHandle;
        *(undefined8 *)(puVar2 + 0x170) = 0;
        *(undefined4 *)(puVar2 + 0x178) = 0;
        *(undefined1 **)(puVar2 + 0x158) = &LAB_14202be10;
        puVar2[0x180] = 0;
        *(undefined8 *)(puVar2 + 0x1a0) = 0;
        *(undefined4 *)(puVar2 + 0x1a8) = 0;
        *(code **)(puVar2 + 0x188) = FString::FString;
        *(undefined8 *)(puVar2 + 0x1c8) = 0;
        *(undefined4 *)(puVar2 + 0x1d0) = 0;
        *(code **)(puVar2 + 0x1b0) = FHardwareCursor::GetHandle;
        *(undefined8 *)(puVar2 + 0x1f0) = 0;
        *(undefined4 *)(puVar2 + 0x1f8) = 0;
        *(undefined1 **)(puVar2 + 0x1d8) = &LAB_14202be10;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14217b4c0 FUN_14217b4c0 body=545 status=ok
// SIG undefined FUN_14217b4c0(void)

longlong * FUN_14217b4c0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar4 = (param_2 + 2) / 3;
  FUN_142189300(param_1,uVar4);
  if (0 < (int)uVar4) {
    plVar1 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    uVar7 = (ulonglong)uVar4;
    do {
      uVar5 = FMemory::Malloc(0x360,0);
      iVar2 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar2 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar2);
      }
      *(undefined8 *)(*param_1 + (longlong)iVar2 * 8) = uVar5;
      lVar6 = *(longlong *)(*param_1 + (longlong)iVar2 * 8);
      if (lVar6 != 0) {
        lVar3 = *plVar1;
        lVar6 = lVar6 + 0x14;
        lVar8 = 3;
        do {
          *(undefined8 *)(lVar6 + -0xc) = 0;
          lVar8 = lVar8 + -1;
          *(undefined8 *)(lVar6 + -4) = 0;
          *(undefined ***)(lVar6 + -0x14) = &PTR_FUN_144fdcb78;
          *(undefined8 *)(lVar6 + 4) = 0;
          *(undefined8 *)(lVar6 + 0xc) = 0;
          *(undefined8 *)(lVar6 + 0x14) = 2;
          if ((*(int *)(lVar3 + 0x38) < DAT_146aeb930) &&
             (_Init_thread_header(&DAT_146aeb930), DAT_146aeb930 == -1)) {
            FUN_14217c030(&DAT_146aeb870);
            atexit((_func_5014 *)&LAB_143ea70e0);
            _Init_thread_footer(&DAT_146aeb930);
          }
          *(undefined **)(lVar6 + 0x1c) = &DAT_146aeb870;
          *(undefined8 *)(lVar6 + 0x24) = 0;
          *(undefined8 *)(lVar6 + 0x2c) = 0;
          FUN_14217bd20(lVar6 + 0x34);
          FUN_14217bd20(lVar6 + 0x3c);
          *(byte *)(lVar6 + 0x44) = *(byte *)(lVar6 + 0x44) & 0xf0;
          *(undefined8 *)(lVar6 + 0x4c) = 0;
          *(undefined8 *)(lVar6 + 0x54) = 0;
          *(undefined8 *)(lVar6 + 0x5c) = 0;
          *(undefined8 *)(lVar6 + 100) = 0;
          *(undefined8 *)(lVar6 + 0x6c) = 0;
          *(undefined1 *)(lVar6 + 0x75) = 0;
          *(undefined8 *)(lVar6 + 0x7c) = 0;
          *(undefined8 *)(lVar6 + 0x84) = 0;
          *(undefined8 *)(lVar6 + 0x8c) = 0;
          *(undefined8 *)(lVar6 + 0x94) = 0;
          *(undefined8 *)(lVar6 + 0x9c) = 0;
          *(undefined8 *)(lVar6 + 0xa4) = 0;
          *(undefined8 *)(lVar6 + 0xdc) = 0;
          *(undefined8 *)(lVar6 + 0xe4) = 0;
          *(undefined8 *)(lVar6 + 0xec) = 0;
          *(undefined8 *)(lVar6 + 0xf4) = 0;
          *(undefined8 *)(lVar6 + 0xfc) = 0;
          *(undefined8 *)(lVar6 + 0x104) = 0;
          lVar6 = lVar6 + 0x120;
        } while (lVar8 != 0);
      }
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  return param_1;
}



// FUNCTION 14217b6f0 FUN_14217b6f0 body=473 status=ok
// SIG undefined FUN_14217b6f0(void)

longlong * FUN_14217b6f0(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 2) = param_2;
  uVar3 = (param_2 + 9) / 10;
  FUN_142189440(param_1,uVar3);
  if (0 < (int)uVar3) {
    uVar5 = (ulonglong)uVar3;
    do {
      uVar4 = FMemory::Malloc(0x3c0,0);
      iVar1 = (int)param_1[1];
      *(int *)(param_1 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_1 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
      }
      *(undefined8 *)((longlong)iVar1 * 8 + *param_1) = uVar4;
      puVar2 = *(undefined8 **)((longlong)iVar1 * 8 + *param_1);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = 0;
        puVar2[8] = 0;
        *(undefined4 *)(puVar2 + 10) = 0;
        puVar2[2] = FUN_1407c3030;
        puVar2[0xc] = 0;
        puVar2[0x14] = 0;
        *(undefined4 *)(puVar2 + 0x16) = 0;
        puVar2[0xe] = FUN_1407c3030;
        puVar2[0x18] = 0;
        puVar2[0x20] = 0;
        *(undefined4 *)(puVar2 + 0x22) = 0;
        puVar2[0x1a] = FUN_1407c3030;
        puVar2[0x24] = 0;
        puVar2[0x2c] = 0;
        *(undefined4 *)(puVar2 + 0x2e) = 0;
        puVar2[0x26] = FUN_1407c3030;
        puVar2[0x30] = 0;
        puVar2[0x38] = 0;
        *(undefined4 *)(puVar2 + 0x3a) = 0;
        puVar2[0x32] = FUN_1407c3030;
        puVar2[0x3c] = 0;
        puVar2[0x44] = 0;
        *(undefined4 *)(puVar2 + 0x46) = 0;
        puVar2[0x3e] = FUN_1407c3030;
        puVar2[0x48] = 0;
        puVar2[0x50] = 0;
        *(undefined4 *)(puVar2 + 0x52) = 0;
        puVar2[0x4a] = FUN_1407c3030;
        puVar2[0x54] = 0;
        puVar2[0x5c] = 0;
        *(undefined4 *)(puVar2 + 0x5e) = 0;
        puVar2[0x56] = FUN_1407c3030;
        puVar2[0x60] = 0;
        puVar2[0x68] = 0;
        *(undefined4 *)(puVar2 + 0x6a) = 0;
        puVar2[0x62] = FUN_1407c3030;
        puVar2[0x6c] = 0;
        puVar2[0x74] = 0;
        *(undefined4 *)(puVar2 + 0x76) = 0;
        puVar2[0x6e] = FUN_1407c3030;
      }
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return param_1;
}



// FUNCTION 14217b8d0 FUN_14217b8d0 body=70 status=ok
// SIG undefined FUN_14217b8d0(void)

undefined8 *
FUN_14217b8d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14217e4b0(local_res8);
  uVar1 = FUN_142178b30(uVar1,param_3,param_4);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217b920 FUN_14217b920 body=54 status=ok
// SIG undefined FUN_14217b920(void)

undefined8 * FUN_14217b920(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14217e4b0(local_res8);
  uVar1 = FUN_142187070(uVar1,param_3);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217b960 FUN_14217b960 body=54 status=ok
// SIG undefined FUN_14217b960(void)

undefined8 * FUN_14217b960(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14217e4b0(local_res8);
  uVar1 = FUN_142187120(uVar1,param_3);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217b9a0 FUN_14217b9a0 body=70 status=ok
// SIG undefined FUN_14217b9a0(void)

undefined8 *
FUN_14217b9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14217e4b0(local_res8);
  uVar1 = FUN_142178bd0(uVar1,param_3,param_4);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217b9f0 FUN_14217b9f0 body=54 status=ok
// SIG undefined FUN_14217b9f0(void)

undefined8 * FUN_14217b9f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 local_res8 [8];
  
  uVar1 = FUN_14217e4b0(local_res8);
  uVar1 = FUN_142187260(uVar1,param_3);
  *param_1 = uVar1;
  return param_1;
}



// FUNCTION 14217ba30 FUN_14217ba30 body=740 status=ok
// SIG undefined FUN_14217ba30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong * FUN_14217ba30(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined2 *puVar10;
  longlong *plVar11;
  ulonglong local_res8;
  undefined1 *local_38;
  ulonglong *puStack_30;
  
  lVar7 = 0;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  cVar3 = FUN_142190080(param_4);
  if ((cVar3 == '\0') ||
     ((local_res8 = 0xd3, *(longlong *)(param_4 + 0x28) != 0xd3 &&
      ((((*(int *)(param_4 + 0x88) == 0 || (*(int *)(param_4 + 0x88) == 1)) ||
        (*(int *)(param_4 + 0x98) == 0)) || (*(int *)(param_4 + 0x98) == 1)))))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146aeb860) &&
       (_Init_thread_header(&DAT_146aeb860), DAT_146aeb860 == -1)) {
      if ((DAT_146aeaea8 == '\0') &&
         (puVar9 = (undefined8 *)FUN_14218cff0(), puVar9 != &DAT_146aeaea0)) {
        DAT_146aeaea0 = *puVar9;
        DAT_146aeaea8 = '\x01';
      }
      uVar2 = DAT_146aeaea0;
      uVar8 = FGuid::NewGuid(&local_38);
      FUN_142178260(&DAT_146aeb568,uVar8,L"NULL",uVar2);
      atexit(FUN_143ea74f0);
      _Init_thread_footer(&DAT_146aeb860);
      *param_1 = (longlong)&DAT_146aeb568;
    }
    else {
      *param_1 = (longlong)&DAT_146aeb568;
    }
  }
  else {
    puStack_30 = &local_res8;
    local_res8 = 0;
    local_38 = &LAB_142183e90;
    lVar6 = FUN_1415d8310(&local_38,&DAT_1465273c0);
    plVar11 = *(longlong **)(lVar6 + 0x38);
    if (*(longlong **)(lVar6 + 0x38) == (longlong *)0x0) {
      plVar11 = (longlong *)(lVar6 + 0x18);
    }
    plVar1 = plVar11 + *(int *)(lVar6 + 0x40);
    for (; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      if (*(int *)(*plVar11 + 0x10) == 0) {
        puVar10 = &DAT_143f3eda8;
      }
      else {
        puVar10 = *(undefined2 **)(*plVar11 + 8);
      }
      iVar4 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar10,param_3);
      if (iVar4 == 0) {
        *param_1 = *plVar11;
        return param_1;
      }
    }
    if ((_DAT_146aeae80 & 0x3ffffff) == 0) {
      lVar6 = operator_new(0x2f8);
      if (lVar6 != 0) {
        lVar7 = FUN_142178260(lVar6,param_2,param_3,param_4);
      }
    }
    else {
      uVar5 = FUN_142192450(&DAT_146aeae78);
      if (uVar5 != 0) {
        lVar7 = *(longlong *)
                 ((&DAT_1468a81f8)[uVar5 >> 0xe] + 8 + (ulonglong)(uVar5 & 0x3fff) * 0x18);
        FLockFreeLinkPolicy::FreeLockFreeLink(uVar5);
      }
      lVar7 = FUN_142178260(lVar7,param_2,param_3,param_4);
    }
    *param_1 = lVar7;
    puStack_30 = &local_res8;
    *(undefined1 *)(param_1 + 1) = 1;
    local_38 = &LAB_142183e90;
    local_res8 = local_res8 & 0xffffffffffffff00;
    lVar7 = FUN_1415d8310(&local_38,&DAT_1465273c0);
    iVar4 = *(int *)(lVar7 + 0x40);
    *(int *)(lVar7 + 0x40) = iVar4 + 1;
    if (*(int *)(lVar7 + 0x44) < iVar4 + 1) {
      TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeGrow
                (lVar7 + 0x18,iVar4);
    }
    lVar6 = *(longlong *)(lVar7 + 0x38);
    if (*(longlong *)(lVar7 + 0x38) == 0) {
      lVar6 = lVar7 + 0x18;
    }
    *(longlong *)(lVar6 + (longlong)iVar4 * 8) = *param_1;
  }
  return param_1;
}



// FUNCTION 14217bd20 FUN_14217bd20 body=172 status=ok
// SIG undefined FUN_14217bd20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14217bd20(undefined8 *param_1)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146aeb988) {
    _Init_thread_header(&DAT_146aeb988);
    if (DAT_146aeb988 == -1) {
      DAT_146aeb968 = 0;
      FUN_14217c140(&DAT_146aeb970);
      DAT_146aeb978 = 0;
      _DAT_146aeb980 = 0;
      atexit((_func_5014 *)&LAB_143ea7530);
      _Init_thread_footer(&DAT_146aeb988);
      *param_1 = &DAT_146aeb968;
      return param_1;
    }
  }
  *param_1 = &DAT_146aeb968;
  return param_1;
}



// FUNCTION 14217bdd0 FUN_14217bdd0 body=352 status=ok
// SIG undefined FUN_14217bdd0(void)

longlong *
FUN_14217bdd0(longlong *param_1,undefined8 param_2,short *param_3,longlong param_4,int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_28 [16];
  
  FUN_14217c140();
  iVar3 = 0;
  iVar5 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  cVar1 = FUN_142194620(param_4);
  if (cVar1 == '\0') {
    return param_1;
  }
  cVar1 = FUN_142190080(param_4);
  if (cVar1 == '\0') {
    return param_1;
  }
  if (*(longlong *)(param_4 + 0x28) != 0xd3) {
    if (*(int *)(param_4 + 0x88) == 0) {
      return param_1;
    }
    if (*(int *)(param_4 + 0x88) == 1) {
      return param_1;
    }
    iVar6 = *(int *)(param_4 + 0x98) + -1;
    if (*(int *)(param_4 + 0x98) == 0) {
      iVar6 = iVar5;
    }
    if (iVar6 == 0) {
      return param_1;
    }
  }
  *param_1 = param_4;
  if ((short *)param_1[1] != param_3) {
    if ((param_3 != (short *)0x0) && (*param_3 != 0)) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (param_3[lVar4] != 0);
      iVar3 = (int)lVar4 + 1;
    }
    *(undefined4 *)(param_1 + 2) = 0;
    if (*(int *)((longlong)param_1 + 0x14) != iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 1,iVar3);
      iVar5 = (int)param_1[2];
    }
    *(int *)(param_1 + 2) = iVar5 + iVar3;
    if (*(int *)((longlong)param_1 + 0x14) < iVar5 + iVar3) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1 + 1,iVar5);
    }
    if (iVar3 != 0) {
      _guard_xfg_dispatch_icall_nop((void *)param_1[1],param_3,(longlong)iVar3 * 2);
    }
  }
  if (((param_5[3] == 0 && param_5[2] == 0) && param_5[1] == 0) && *param_5 == 0) {
    piVar2 = (int *)FGuid::NewGuid(local_28);
    iVar5 = *piVar2;
    iVar3 = piVar2[1];
    iVar6 = piVar2[2];
    iVar7 = piVar2[3];
  }
  else {
    iVar5 = *param_5;
    iVar3 = param_5[1];
    iVar6 = param_5[2];
    iVar7 = param_5[3];
  }
  *(int *)(param_1 + 5) = iVar5;
  *(int *)((longlong)param_1 + 0x2c) = iVar3;
  *(int *)(param_1 + 6) = iVar6;
  *(int *)((longlong)param_1 + 0x34) = iVar7;
  return param_1;
}



// FUNCTION 14217bf30 FUN_14217bf30 body=222 status=ok
// SIG undefined FUN_14217bf30(void)

undefined8 * FUN_14217bf30(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  longlong *local_18;
  undefined4 local_10;
  
  *param_1 = &PTR_FUN_144fdcaf8;
  param_1[1] = 0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_10 = 3;
  local_18 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    plVar1[1] = (longlong)param_1;
    *plVar1 = (longlong)&DAT_143f3ed00;
    plVar1[2] = (longlong)FUN_140520750;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
    *plVar1 = (longlong)&PTR_GetPoolName_143f3ed48;
  }
  puVar3 = (undefined8 *)FUN_1421928f0(local_res8,param_2,param_3,&local_18);
  param_1[1] = *puVar3;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1,0);
    lVar2 = FMemory::Realloc(plVar1,0,0);
    if (lVar2 != 0) {
      FMemory::Free(lVar2);
    }
  }
  return param_1;
}



// FUNCTION 14217c010 FUN_14217c010 body=22 status=ok
// SIG undefined FUN_14217c010(void)

undefined8 * FUN_14217c010(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144fdcaf8;
  param_1[1] = 0;
  return param_1;
}


