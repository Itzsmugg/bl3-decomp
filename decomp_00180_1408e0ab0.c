// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1408e0ab0 FUN_1408e0ab0 body=6 status=ok
// SIG undefined FUN_1408e0ab0(void)

undefined8 FUN_1408e0ab0(void)

{
  return 0x18902fc0;
}



// FUNCTION 1408e0ac0 FUN_1408e0ac0 body=34 status=ok
// SIG undefined FUN_1408e0ac0(void)

void FUN_1408e0ac0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408e08e0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetMapGPUHotspots_14413bdd8,1);
  return;
}



// FUNCTION 1408e0af0 FUN_1408e0af0 body=113 status=ok
// SIG undefined FUN_1408e0af0(void)

void FUN_1408e0af0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468621d0 == 0) {
    if (DAT_1468621f8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468621f8,&PTR_s__Script_GbxPerfScope_14413bdb0);
    }
    lVar1 = DAT_1468621f8;
    uVar2 = FUN_1408e0ab0();
    DAT_1468621d0 = GetStaticStruct(FUN_1408e0ba0,lVar1,L"PerfSample",0x1c,uVar2);
  }
  return;
}



// FUNCTION 1408e0b70 FUN_1408e0b70 body=47 status=ok
// SIG undefined FUN_1408e0b70(void)

longlong FUN_1408e0b70(void)

{
  if (DAT_1468621e8 == 0) {
    FUN_141786440(&DAT_1468621e8,&PTR_GetPrivateStaticClass_14413b790);
  }
  return DAT_1468621e8;
}



// FUNCTION 1408e0ba0 FUN_1408e0ba0 body=47 status=ok
// SIG undefined FUN_1408e0ba0(void)

longlong FUN_1408e0ba0(void)

{
  if (DAT_1468621e0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468621e0,&PTR_FUN_146283600);
  }
  return DAT_1468621e0;
}



// FUNCTION 1408e0bd0 FUN_1408e0bd0 body=297 status=ok
// SIG undefined FUN_1408e0bd0(void)

void FUN_1408e0bd0(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [2];
  undefined8 local_res20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
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
  local_48 = 0xffffffffffffffff;
  uStack_40 = 0;
  local_38 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_28 = (undefined4)local_48;
  uStack_24 = local_48._4_4_;
  uStack_20 = (undefined4)uStack_40;
  uStack_1c = uStack_40._4_4_;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_18 = local_38;
  FUN_1408df270(param_1,local_res20,local_res10[0],&local_28);
  return;
}



// FUNCTION 1408e0d00 FUN_1408e0d00 body=179 status=ok
// SIG undefined FUN_1408e0d00(void)

void FUN_1408e0d00(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [24];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144045a78;
    plVar2[1] = (longlong)FUN_1408e4d70;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144045ac0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146533130,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146533138;
    lVar3 = (longlong)DAT_146533138;
    DAT_146533138 = DAT_146533138 + 1;
    if (DAT_14653313c < DAT_146533138) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146533130,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146533130);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  return;
}



// FUNCTION 1408e0dc0 FUN_1408e0dc0 body=404 status=ok
// SIG undefined FUN_1408e0dc0(void)

void FUN_1408e0dc0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FVectorParameterNameAndCurves,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = param_2[1];
    puVar4 = param_1 + 4;
    lVar5 = 4;
    lVar3 = (longlong)param_1 + 0x54;
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    do {
      *(undefined8 *)(lVar3 + -0x2c) = 0;
      lVar5 = lVar5 + -1;
      *(undefined8 *)(lVar3 + -0x24) = 0;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined4 *)(lVar3 + 4) = 0xffffffff;
      *(undefined4 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      *puVar4 = &PTR_FUN_14413ebc8;
      *(undefined1 *)(lVar3 + 0x24) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x24 - (longlong)param_1));
      *(undefined1 *)(lVar3 + 0x25) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x25 - (longlong)param_1));
      *(undefined4 *)(lVar3 + 0x28) =
           *(undefined4 *)((longlong)param_2 + lVar3 + (0x28 - (longlong)param_1));
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      iVar1 = *(int *)((longlong)param_2 + lVar3 + (0x34 - (longlong)param_1));
      _Src = *(void **)((longlong)param_2 + lVar3 + (0x2c - (longlong)param_1));
      *(int *)(lVar3 + 0x34) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(lVar3 + 0x2c,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x2c),_Src,(longlong)iVar1 * 0x1c);
      }
      puVar4 = puVar4 + 0xe;
      lVar3 = lVar3 + 0x70;
    } while (lVar5 != 0);
    puVar4 = param_2 + 0x3c;
    param_2 = param_2 + 0x3d;
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)puVar4;
    param_1 = param_1 + 0x3d;
  }
  return;
}



// FUNCTION 1408e0f60 FUN_1408e0f60 body=177 status=ok
// SIG undefined FUN_1408e0f60(void)

void FUN_1408e0f60(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1408e7690(param_1,param_3 + param_5,param_4);
  puVar5 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    param_2 = param_2 + 0x20;
    do {
      uVar2 = *(undefined4 *)(param_2 + -0x1c);
      uVar3 = *(undefined4 *)(param_2 + -0x18);
      uVar4 = *(undefined4 *)(param_2 + -0x14);
      *puVar5 = *(undefined4 *)(param_2 + -0x20);
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      *(undefined8 *)(puVar5 + 4) = *(undefined8 *)(param_2 + -0x10);
      *(undefined8 *)(puVar5 + 6) = *(undefined8 *)(param_2 + -8);
      FRichCurve::FRichCurve(puVar5 + 8,param_2);
      puVar1 = (undefined4 *)(param_2 + 0x70);
      param_2 = param_2 + 0x98;
      puVar5[0x24] = *puVar1;
      puVar5 = puVar5 + 0x26;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408e1020 FUN_1408e1020 body=406 status=ok
// SIG undefined FUN_1408e1020(void)

void FUN_1408e1020(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FAnimPhysLinkedBody,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    uVar2 = param_2[1];
    puVar4 = param_1 + 4;
    lVar5 = 4;
    lVar3 = (longlong)param_1 + 0x54;
    *param_1 = *param_2;
    param_1[1] = uVar2;
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    do {
      *(undefined8 *)(lVar3 + -0x2c) = 0;
      lVar5 = lVar5 + -1;
      *(undefined8 *)(lVar3 + -0x24) = 0;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined4 *)(lVar3 + 4) = 0xffffffff;
      *(undefined4 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      *puVar4 = &PTR_FUN_14413ebc8;
      *(undefined1 *)(lVar3 + 0x24) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x24 - (longlong)param_1));
      *(undefined1 *)(lVar3 + 0x25) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x25 - (longlong)param_1));
      *(undefined4 *)(lVar3 + 0x28) =
           *(undefined4 *)((longlong)param_2 + lVar3 + (0x28 - (longlong)param_1));
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      iVar1 = *(int *)((longlong)param_2 + lVar3 + (0x34 - (longlong)param_1));
      _Src = *(void **)((longlong)param_2 + lVar3 + (0x2c - (longlong)param_1));
      *(int *)(lVar3 + 0x34) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(lVar3 + 0x2c,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x2c),_Src,(longlong)iVar1 * 0x1c);
      }
      puVar4 = puVar4 + 0xe;
      lVar3 = lVar3 + 0x70;
    } while (lVar5 != 0);
    puVar4 = param_2 + 0x3c;
    uVar2 = param_2[0x3d];
    param_2 = param_2 + 0x3e;
    param_1[0x3c] = *puVar4;
    param_1[0x3d] = uVar2;
    param_1 = param_1 + 0x3e;
  }
  return;
}



// FUNCTION 1408e11c0 FUN_1408e11c0 body=390 status=ok
// SIG undefined FUN_1408e11c0(void)

void FUN_1408e11c0(undefined8 *param_1,undefined8 *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1408e77b0(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    puVar4 = param_1 + 1;
    *param_1 = *param_2;
    lVar3 = (longlong)param_1 + 0x3c;
    lVar5 = 4;
    do {
      *(undefined8 *)(lVar3 + -0x2c) = 0;
      lVar5 = lVar5 + -1;
      *(undefined8 *)(lVar3 + -0x24) = 0;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *(undefined4 *)(lVar3 + 4) = 0xffffffff;
      *(undefined4 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x14) = 0;
      *(undefined4 *)(lVar3 + 0x1c) = 0;
      *puVar4 = &PTR_FUN_14413ebc8;
      *(undefined1 *)(lVar3 + 0x24) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x24 - (longlong)param_1));
      *(undefined1 *)(lVar3 + 0x25) =
           *(undefined1 *)((longlong)param_2 + lVar3 + (0x25 - (longlong)param_1));
      *(undefined4 *)(lVar3 + 0x28) =
           *(undefined4 *)((longlong)param_2 + lVar3 + (0x28 - (longlong)param_1));
      *(undefined8 *)(lVar3 + 0x2c) = 0;
      iVar1 = *(int *)((longlong)param_2 + lVar3 + (0x34 - (longlong)param_1));
      _Src = *(void **)((longlong)param_2 + lVar3 + (0x2c - (longlong)param_1));
      *(int *)(lVar3 + 0x34) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)(lVar3 + 0x38) = 0;
      }
      else {
        TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(lVar3 + 0x2c,iVar1,0);
        _guard_xfg_dispatch_icall_nop(*(void **)(lVar3 + 0x2c),_Src,(longlong)iVar1 * 0x1c);
      }
      puVar4 = puVar4 + 0xe;
      lVar3 = lVar3 + 0x70;
    } while (lVar5 != 0);
    puVar4 = param_2 + 0x39;
    uVar2 = param_2[0x3a];
    param_2 = param_2 + 0x3b;
    param_1[0x39] = *puVar4;
    param_1[0x3a] = uVar2;
    param_1 = param_1 + 0x3b;
  }
  return;
}



// FUNCTION 1408e1350 FUN_1408e1350 body=164 status=ok
// SIG undefined FUN_1408e1350(void)

longlong FUN_1408e1350(longlong param_1,undefined8 param_2)

{
  longlong local_res18 [2];
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  FName::FName(local_res18,param_2,0);
  if (((int)local_res18[0] != 0) || ((int)((ulonglong)local_res18[0] >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140472e10(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == local_res18[0]) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140472e10(&local_28);
    }
  }
  return 0;
}



// FUNCTION 1408e1400 FindField<UProperty> body=139 status=ok
// SIG undefined FindField<UProperty>(void)

longlong FindField<UProperty>(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_140472e10(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_140472e10(&local_28);
    }
  }
  return 0;
}



// FUNCTION 1408e1490 FindField<UStructProperty> body=139 status=ok
// SIG undefined FindField<UStructProperty>(void)

longlong FindField<UStructProperty>(longlong param_1,longlong param_2)

{
  longlong local_28;
  longlong local_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  if (((int)param_2 != 0) || ((int)((ulonglong)param_2 >> 0x20) != 0)) {
    if (param_1 == 0) {
      local_20 = 0;
    }
    else {
      local_20 = *(longlong *)(param_1 + 0x38);
    }
    local_18 = 0xffffffff;
    local_14 = 0x101;
    local_12 = 0;
    local_28 = param_1;
    FUN_14067b390(&local_28);
    while (local_20 != 0) {
      if (*(longlong *)(local_20 + 0x18) == param_2) {
        return local_20;
      }
      local_20 = *(longlong *)(local_20 + 0x28);
      FUN_14067b390(&local_28);
    }
  }
  return 0;
}



// FUNCTION 1408e1520 FUN_1408e1520 body=280 status=ok
// SIG undefined FUN_1408e1520(void)

longlong ** FUN_1408e1520(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong **pplVar2;
  longlong lVar3;
  longlong **pplVar4;
  longlong local_res20;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (param_1 == 0) {
    return (longlong **)0x0;
  }
  pplVar4 = (longlong **)0x0;
  local_30 = (undefined8 *)0x0;
  local_28 = 1;
  uVar1 = UFloatProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_30,0);
  local_48 = 0;
  local_res20 = 0;
  *local_30 = uVar1;
  local_40 = (longlong *)0x0;
  local_38 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_40,0);
  *local_40 = param_3;
  pplVar2 = &local_40;
  if (param_3 == 0) {
    pplVar2 = pplVar4;
  }
  lVar3 = FUN_1408e3ba0(&local_48,&local_res20,param_1,param_2,&local_30,pplVar2);
  if (lVar3 != 0) {
    pplVar4 = (longlong **)(*(int *)(local_res20 + 0x44) + local_48);
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_30 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return pplVar4;
}



// FUNCTION 1408e1640 FUN_1408e1640 body=280 status=ok
// SIG undefined FUN_1408e1640(void)

longlong ** FUN_1408e1640(longlong param_1,undefined8 param_2,longlong param_3)

{
  undefined8 uVar1;
  longlong **pplVar2;
  longlong lVar3;
  longlong **pplVar4;
  longlong local_res20;
  longlong local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  if (param_1 == 0) {
    return (longlong **)0x0;
  }
  pplVar4 = (longlong **)0x0;
  local_30 = (undefined8 *)0x0;
  local_28 = 1;
  uVar1 = UStructProperty::GetPrivateStaticClass();
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_30,0);
  local_48 = 0;
  local_res20 = 0;
  *local_30 = uVar1;
  local_40 = (longlong *)0x0;
  local_38 = 1;
  TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_40,0);
  *local_40 = param_3;
  pplVar2 = &local_40;
  if (param_3 == 0) {
    pplVar2 = pplVar4;
  }
  lVar3 = FUN_1408e3ba0(&local_48,&local_res20,param_1,param_2,&local_30,pplVar2);
  if (lVar3 != 0) {
    pplVar4 = (longlong **)(*(int *)(local_res20 + 0x44) + local_48);
  }
  if (local_40 != (longlong *)0x0) {
    FMemory::Free();
  }
  if (local_30 != (undefined8 *)0x0) {
    FMemory::Free();
  }
  return pplVar4;
}



// FUNCTION 1408e1760 FUN_1408e1760 body=802 status=ok
// SIG undefined FUN_1408e1760(void)

undefined8 * FUN_1408e1760(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_14413f6b0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined4 *)(param_1 + 0x96) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  *(byte *)((longlong)param_1 + 0x92) = *(byte *)((longlong)param_1 + 0x92) | 0x40;
  *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) | 8;
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x29) = 0x402ccccd;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDayComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1408ea260();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_SkyLightComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_DirectionalLightComponent0",1);
  uVar3 = *puVar1;
  uVar2 = UAtmosphericFogComponent::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8c] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_AtmosphericFogComponent0",1);
  uVar3 = *puVar1;
  uVar2 = APlayerStateRemnant::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8e] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_ExponentialHeightFogComponent0",1);
  uVar3 = *puVar1;
  uVar2 = AGameStateBase::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x8f] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_StaticMeshComponent0",1);
  uVar3 = *puVar1;
  uVar2 = FUN_142a232e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x90] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"TimeOfDay_PostProcessComponent0",1);
  uVar3 = *puVar1;
  uVar2 = ACineCameraActor::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0x91] = uVar3;
  local_res8 = 0;
  FUN_142399e30(param_1[0x8d],param_1[0x2d],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8c],param_1[0x2d],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8e],param_1[0x2d],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x8f],param_1[0x2d],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x90],param_1[0x2d],0);
  local_res8 = 0;
  FUN_142399e30(param_1[0x91],param_1[0x2d],0);
  *(undefined1 *)(param_1[0x8f] + 0x365) = 1;
  return param_1;
}



// FUNCTION 1408e1a90 FRichCurve body=166 status=ok
// SIG undefined FRichCurve(void)

undefined8 * FRichCurve::FRichCurve(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *param_1 = &PTR_FUN_14413ebc8;
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)((longlong)param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined4 *)((longlong)param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0x68);
  _Src = *(void **)(param_2 + 0x60);
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(param_1 + 0xc,iVar1,0);
    ::_guard_xfg_dispatch_icall_nop((void *)param_1[0xc],_Src,(longlong)iVar1 * 0x1c);
  }
  return param_1;
}



// FUNCTION 1408e1bb0 FUN_1408e1bb0 body=49 status=ok
// SIG undefined FUN_1408e1bb0(void)

undefined8 * FUN_1408e1bb0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_14413fe08;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[7] = param_2;
  return param_1;
}



// FUNCTION 1408e1bf0 FUN_1408e1bf0 body=155 status=ok
// SIG undefined FUN_1408e1bf0(void)

undefined8 * FUN_1408e1bf0(undefined8 *param_1)

{
  ulonglong uVar1;
  
  UMaterialExpression::UMaterialExpression();
  uVar1 = (ulonglong)_tls_index;
  *param_1 = &PTR_FUN_14413f3e0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x38) <
      DAT_146862368) {
    _Init_thread_header(&DAT_146862368);
    if (DAT_146862368 == -1) {
      FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                (&DAT_146862350,L"Time of day",L"TimeOfDay",L"TimeOfDay");
      atexit(FUN_143e44e20);
      _Init_thread_footer(&DAT_146862368);
      return param_1;
    }
  }
  return param_1;
}



// FUNCTION 1408e1c90 FUN_1408e1c90 body=282 status=ok
// SIG undefined FUN_1408e1c90(void)

undefined8 * FUN_1408e1c90(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237f6c0(param_1,uVar1);
  *param_1 = &PTR_FUN_14413ee68;
  param_1[5] = &PTR_LAB_14413f3b0;
  param_1[0x5a] = 0;
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)((longlong)param_1 + 0x369) = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  *(undefined8 *)((longlong)param_1 + 0x37c) = 1;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x394) = 0;
  param_1[0x73] = 0;
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 8;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined2 *)(param_1 + 0x74) = 1;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  return param_1;
}



// FUNCTION 1408e1db0 FUN_1408e1db0 body=40 status=ok
// SIG undefined FUN_1408e1db0(void)

undefined8 * FUN_1408e1db0(undefined8 *param_1)

{
  FUN_1417818c0();
  *(undefined4 *)(param_1 + 7) = 0x43340000;
  *param_1 = &PTR_FUN_14413fe78;
  return param_1;
}



// FUNCTION 1408e1de0 FUN_1408e1de0 body=63 status=ok
// SIG undefined FUN_1408e1de0(void)

undefined8 * FUN_1408e1de0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x201;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_14413e898;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1408e1e20 FUN_1408e1e20 body=46 status=ok
// SIG undefined FUN_1408e1e20(void)

undefined8 * FUN_1408e1e20(undefined8 *param_1)

{
  FUN_141781840();
  *(undefined1 *)((longlong)param_1 + 0x34) = 1;
  *param_1 = &PTR_FUN_143fcf3b0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1408e1e50 FUN_1408e1e50 body=213 status=ok
// SIG undefined FUN_1408e1e50(void)

undefined8 * FUN_1408e1e50(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 local_res8;
  longlong local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  FUN_1417818c0();
  *param_1 = &PTR__scalar_deleting_destructor__14413ebf0;
  plVar1 = param_1 + 6;
  *plVar1 = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  local_res8 = param_1[3];
  FName::ToString(&local_res8,&local_18);
  if (plVar1 != &local_18) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    *plVar1 = local_18;
    *(undefined4 *)(param_1 + 7) = local_10;
    *(undefined4 *)((longlong)param_1 + 0x3c) = local_c;
    return param_1;
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1408e1f30 FUN_1408e1f30 body=102 status=ok
// SIG undefined FUN_1408e1f30(void)

undefined8 * FUN_1408e1f30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_141781840(param_1,uVar1);
  *(undefined2 *)((longlong)param_1 + 0x34) = 0x101;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_1441400f0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  return param_1;
}



// FUNCTION 1408e1fa0 FUN_1408e1fa0 body=157 status=ok
// SIG undefined FUN_1408e1fa0(void)

void FUN_1408e1fa0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x1e0;
    do {
      lVar4 = 4;
      lVar1 = lVar3;
      do {
        lVar1 = lVar1 + -0x70;
        FRichCurve::~FRichCurve(lVar1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + 0x1e8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408e2040 FUN_1408e2040 body=108 status=ok
// SIG undefined FUN_1408e2040(void)

void FUN_1408e2040(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x28;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 0x40);
      FUN_1408e2260(lVar1);
      FUN_1408e21f0(lVar1 + -0x20);
      lVar1 = lVar1 + 0x78;
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



// FUNCTION 1408e20b0 FUN_1408e20b0 body=157 status=ok
// SIG undefined FUN_1408e20b0(void)

void FUN_1408e20b0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x1e0;
    do {
      lVar4 = 4;
      lVar1 = lVar3;
      do {
        lVar1 = lVar1 + -0x70;
        FRichCurve::~FRichCurve(lVar1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + 0x1f0;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408e2150 FUN_1408e2150 body=157 status=ok
// SIG undefined FUN_1408e2150(void)

void FUN_1408e2150(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar3 = lVar3 + 0x1c8;
    do {
      lVar4 = 4;
      lVar1 = lVar3;
      do {
        lVar1 = lVar1 + -0x70;
        FRichCurve::~FRichCurve(lVar1);
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar3 = lVar3 + 0x1d8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408e21f0 FUN_1408e21f0 body=102 status=ok
// SIG undefined FUN_1408e21f0(void)

void FUN_1408e21f0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1408e2150(param_1 + 2);
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    lVar1 = lVar1 + 8;
    do {
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x80;
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



// FUNCTION 1408e2260 FUN_1408e2260 body=121 status=ok
// SIG undefined FUN_1408e2260(void)

void FUN_1408e2260(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  FUN_1408e20b0(param_1 + 6);
  FUN_1408e1fa0(param_1 + 4);
  FUN_1408e20b0(param_1 + 2);
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x20;
    do {
      FRichCurve::~FRichCurve(lVar1);
      lVar1 = lVar1 + 0x98;
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



// FUNCTION 1408e22e0 FUN_1408e22e0 body=113 status=ok
// SIG undefined FUN_1408e22e0(void)

undefined8 * FUN_1408e22e0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
      return param_1;
    }
    TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar1);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 4);
  }
  return param_1;
}



// FUNCTION 1408e2360 FUN_1408e2360 body=370 status=ok
// SIG undefined FUN_1408e2360(void)

longlong * FUN_1408e2360(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar5 = (longlong *)(*param_1 + 0x18);
    do {
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 5;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  iVar7 = (int)param_2[1];
  lVar1 = *param_2;
  *(int *)(param_1 + 1) = iVar7;
  if ((iVar7 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1,iVar7);
    puVar9 = (undefined4 *)*param_1;
    if (iVar7 != 0) {
      puVar6 = (undefined8 *)(lVar1 + 8);
      puVar8 = puVar9 + 9;
      do {
        *puVar9 = *(undefined4 *)(puVar6 + -1);
        *(undefined8 *)(puVar8 + -7) = *puVar6;
        *(undefined1 *)(puVar8 + -5) = *(undefined1 *)(puVar6 + 1);
        puVar8[-4] = *(undefined4 *)((longlong)puVar6 + 0xc);
        *(undefined8 *)(puVar8 + -3) = 0;
        iVar4 = *(int *)(puVar6 + 3);
        lVar1 = puVar6[2];
        puVar8[-1] = iVar4;
        if (iVar4 == 0) {
          *puVar8 = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar8 + -3,iVar4,0);
          puVar2 = *(undefined4 **)(puVar8 + -3);
          puVar3 = (undefined4 *)(lVar1 + 4);
          do {
            *puVar2 = puVar3[-1];
            puVar2[1] = *puVar3;
            puVar2[2] = puVar3[1];
            puVar2[3] = puVar3[2];
            iVar4 = iVar4 + -1;
            puVar2 = puVar2 + 4;
            puVar3 = puVar3 + 4;
          } while (iVar4 != 0);
        }
        puVar9 = puVar9 + 10;
        puVar8 = puVar8 + 10;
        puVar6 = puVar6 + 5;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
  }
  return param_1;
}



// FUNCTION 1408e24e0 FUN_1408e24e0 body=317 status=ok
// SIG undefined FUN_1408e24e0(void)

longlong * FUN_1408e24e0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined4 *puVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  if (param_1 != param_2) {
    iVar6 = (int)param_1[1];
    if (iVar6 != 0) {
      lVar3 = *param_1 + 8;
      do {
        FRichCurve::~FRichCurve(lVar3);
        lVar3 = lVar3 + 0x80;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar6 = (int)param_2[1];
    lVar3 = *param_2;
    *(int *)(param_1 + 1) = iVar6;
    if ((iVar6 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_1,iVar6);
      puVar7 = (undefined8 *)*param_1;
      if (iVar6 != 0) {
        puVar4 = (undefined4 *)(lVar3 + 0x78);
        do {
          *puVar7 = *(undefined8 *)(puVar4 + -0x1e);
          FRichCurve::FRichCurve(puVar7 + 1,puVar4 + -0x1c);
          uVar2 = *puVar4;
          puVar4 = puVar4 + 0x20;
          *(undefined4 *)(puVar7 + 0xf) = uVar2;
          puVar7 = puVar7 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
    }
  }
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    iVar6 = (int)param_1[3];
    if (iVar6 != 0) {
      lVar3 = *plVar1 + 0x1c8;
      do {
        lVar5 = 4;
        lVar8 = lVar3;
        do {
          lVar8 = lVar8 + -0x70;
          FRichCurve::~FRichCurve(lVar8);
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
        lVar3 = lVar3 + 0x1d8;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    FUN_1408e11c0(plVar1,param_2[2],(int)param_2[3],*(undefined4 *)((longlong)param_1 + 0x1c),0);
  }
  return param_1;
}



// FUNCTION 1408e2620 FUN_1408e2620 body=467 status=ok
// SIG undefined FUN_1408e2620(void)

longlong * FUN_1408e2620(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  
  if (param_1 != param_2) {
    iVar4 = (int)param_1[1];
    if (iVar4 != 0) {
      lVar2 = *param_1 + 0x20;
      do {
        FRichCurve::~FRichCurve(lVar2);
        lVar2 = lVar2 + 0x98;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1408e0f60(param_1,*param_2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc),0);
  }
  plVar1 = param_1 + 2;
  if (plVar1 != param_2 + 2) {
    iVar4 = (int)param_1[3];
    if (iVar4 != 0) {
      lVar2 = *plVar1 + 0x1e0;
      do {
        lVar3 = 4;
        lVar5 = lVar2;
        do {
          lVar5 = lVar5 + -0x70;
          FRichCurve::~FRichCurve(lVar5);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar2 = lVar2 + 0x1f0;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1408e1020(plVar1,param_2[2],(int)param_2[3],*(undefined4 *)((longlong)param_1 + 0x1c),0);
  }
  plVar1 = param_1 + 4;
  if (plVar1 != param_2 + 4) {
    iVar4 = (int)param_1[5];
    if (iVar4 != 0) {
      lVar2 = *plVar1 + 0x1e0;
      do {
        lVar3 = 4;
        lVar5 = lVar2;
        do {
          lVar5 = lVar5 + -0x70;
          FRichCurve::~FRichCurve(lVar5);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar2 = lVar2 + 0x1e8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1408e0dc0(plVar1,param_2[4],(int)param_2[5],*(undefined4 *)((longlong)param_1 + 0x2c),0);
  }
  plVar1 = param_1 + 6;
  if (plVar1 != param_2 + 6) {
    iVar4 = (int)param_1[7];
    if (iVar4 != 0) {
      lVar2 = *plVar1 + 0x1e0;
      do {
        lVar3 = 4;
        lVar5 = lVar2;
        do {
          lVar5 = lVar5 + -0x70;
          FRichCurve::~FRichCurve(lVar5);
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
        lVar2 = lVar2 + 0x1f0;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    FUN_1408e1020(plVar1,param_2[6],(int)param_2[7],*(undefined4 *)((longlong)param_1 + 0x3c),0);
  }
  return param_1;
}



// FUNCTION 1408e2800 FUN_1408e2800 body=107 status=ok
// SIG undefined FUN_1408e2800(void)

longlong FUN_1408e2800(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 1408e2870 `scalar_deleting_destructor' body=98 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FIndexedCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__14413eb30;
  *(undefined4 *)(param_1 + 10) = 0;
  if (param_1[9] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408e28e0 FUN_1408e28e0 body=52 status=ok
// SIG undefined FUN_1408e28e0(void)

undefined8 FUN_1408e28e0(undefined8 param_1,ulonglong param_2)

{
  FRichCurve::~FRichCurve();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 1408e2920 FUN_1408e2920 body=82 status=ok
// SIG undefined FUN_1408e2920(void)

undefined8 * FUN_1408e2920(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14413fe08;
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14413fd98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1408e2980 FUN_1408e2980 body=43 status=ok
// SIG undefined FUN_1408e2980(void)

undefined8 * FUN_1408e2980(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14413fd98;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,8);
  }
  return param_1;
}



// FUNCTION 1408e29b0 FUN_1408e29b0 body=136 status=ok
// SIG undefined FUN_1408e29b0(void)

longlong FUN_1408e29b0(longlong param_1,ulonglong param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(param_1 + 0x398) + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle();
    }
  }
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x358);
  FUN_1408e2260(param_1 + 0x318);
  FUN_1408e21f0(param_1 + 0x2f8);
  FUN_1408e2040(param_1 + 0x2e0);
  FUN_1405911f0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 1408e2a40 `scalar_deleting_destructor' body=160 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong FNiagaraDynamicDataRibbon::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x90) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x70) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1408e2ae0 FUN_1408e2ae0 body=126 status=ok
// SIG undefined FUN_1408e2ae0(void)

longlong FUN_1408e2ae0(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x48) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 1408e2b60 FUN_1408e2b60 body=89 status=ok
// SIG undefined FUN_1408e2b60(void)

void FUN_1408e2b60(longlong param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  
  FUN_14232c410();
  if ((*(byte *)(param_1 + 0xb8) & 2) != 0) {
    if (*(char *)(param_1 + 0x394) == '\0') {
      uVar2 = *(undefined4 *)(param_1 + 0x378);
    }
    else {
      uVar2 = *(undefined4 *)(param_1 + 0x390);
    }
    plVar1 = (longlong *)FUN_14233fea0(param_1);
    (**(code **)(*plVar1 + 0x2b8))(plVar1,uVar2);
  }
  return;
}



// FUNCTION 1408e2bc0 FUN_1408e2bc0 body=231 status=ok
// SIG undefined FUN_1408e2bc0(void)

void FUN_1408e2bc0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined4 local_res10;
  undefined4 local_res14;
  
  if (param_2 != 0) {
    FWeakObjectPtr::operator=(&local_res10);
    plVar1 = (longlong *)(param_1 + 0x4c0);
    lVar4 = *plVar1;
    iVar3 = *(int *)(param_1 + 0x4c8);
    for (lVar6 = lVar4; lVar6 != lVar4 + (longlong)iVar3 * 8; lVar6 = lVar6 + 8) {
      cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar6,&local_res10);
      if (cVar5 != '\0') {
        if ((int)(lVar6 - lVar4 >> 3) != -1) goto LAB_1408e2c65;
        break;
      }
    }
    iVar3 = *(int *)(param_1 + 0x4c8);
    *(int *)(param_1 + 0x4c8) = iVar3 + 1;
    if (*(int *)(param_1 + 0x4cc) < iVar3 + 1) {
      TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
    }
    puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
    *puVar2 = local_res10;
    puVar2[1] = local_res14;
LAB_1408e2c65:
    if (*(longlong *)(param_1 + 0x458) != 0) {
      FUN_1408e32f0(param_1);
      FUN_1408e44c0(*(longlong *)(param_1 + 0x458) + 0x2d0,param_1);
    }
  }
  return;
}



// FUNCTION 1408e2cb0 FUN_1408e2cb0 body=325 status=ok
// SIG undefined FUN_1408e2cb0(void)

void FUN_1408e2cb0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar5 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar5 != '\0') {
    lVar6 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar6 = *(longlong *)(lVar6 + 0x118);
    if (lVar6 != 0) {
      lVar7 = AFGPoleHologram::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar6 + 0x10) + 0x90) < *(int *)(lVar7 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar6 + 0x10) + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8
           ) != lVar7 + 0x88)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      if ((bVar4) && (param_2 != 0)) {
        FWeakObjectPtr::operator=(&local_res8,param_2);
        plVar1 = (longlong *)(lVar6 + 0x4c0);
        lVar7 = *plVar1;
        iVar3 = *(int *)(lVar6 + 0x4c8);
        for (lVar8 = lVar7; lVar8 != lVar7 + (longlong)iVar3 * 8; lVar8 = lVar8 + 8) {
          cVar5 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(lVar8,&local_res8);
          if (cVar5 != '\0') {
            if ((int)(lVar8 - lVar7 >> 3) != -1) goto LAB_1408e2db7;
            break;
          }
        }
        iVar3 = *(int *)(lVar6 + 0x4c8);
        *(int *)(lVar6 + 0x4c8) = iVar3 + 1;
        if (*(int *)(lVar6 + 0x4cc) < iVar3 + 1) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar3);
        }
        puVar2 = (undefined4 *)(*plVar1 + (longlong)iVar3 * 8);
        *puVar2 = local_res8;
        puVar2[1] = local_resc;
LAB_1408e2db7:
        if (*(longlong *)(lVar6 + 0x458) != 0) {
          FUN_1408e32f0(lVar6);
          FUN_1408e44c0(*(longlong *)(lVar6 + 0x458) + 0x2d0,lVar6);
        }
      }
    }
  }
  return;
}



// FUNCTION 1408e2e00 FUN_1408e2e00 body=76 status=ok
// SIG undefined FUN_1408e2e00(void)

void FUN_1408e2e00(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x40))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1408e2e50 FUN_1408e2e50 body=266 status=ok
// SIG undefined FUN_1408e2e50(void)

void FUN_1408e2e50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_48;
  int local_44;
  undefined1 local_40 [56];
  
  uVar4 = FRichCurve::Eval(param_2,param_4,0);
  uVar5 = FRichCurve::Eval(param_3,param_5,0);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_40);
  FRichCurve::AddKey(param_6,&local_44,param_4,uVar4,0,*puVar2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_40);
  FRichCurve::AddKey(param_6,&local_48,param_5,uVar5,0,*puVar2);
  if (local_44 != local_48) {
    do {
      piVar3 = (int *)FUN_1423d3530(param_6,local_40,local_44);
      iVar1 = *piVar3;
      if (iVar1 == local_48) {
        return;
      }
      FRichCurve::DeleteKey(param_6,iVar1);
    } while (iVar1 != local_48);
  }
  return;
}



// FUNCTION 1408e2f60 FUN_1408e2f60 body=840 status=ok
// SIG undefined FUN_1408e2f60(void)

void FUN_1408e2f60(longlong param_1,undefined8 *param_2)

{
  wchar_t wVar1;
  void *_Src;
  bool bVar2;
  char cVar3;
  wint_t wVar4;
  wint_t wVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined2 *puVar8;
  int iVar9;
  wchar_t *pwVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  longlong lVar13;
  float fVar14;
  float fVar15;
  ulonglong local_res8;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  int local_50;
  
  puVar8 = (undefined2 *)0x0;
  iVar9 = 0;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_1408e22e0(param_1 + 8);
  local_50 = *(int *)(param_2 + 1);
  lVar13 = (longlong)local_50;
  _Src = (void *)*param_2;
  local_58 = (undefined2 *)0x0;
  puVar11 = puVar8;
  if (local_50 != 0) {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_58,local_50,0);
    puVar11 = local_58;
    _guard_xfg_dispatch_icall_nop(local_58,_Src,lVar13 << 4);
  }
  plVar12 = *(longlong **)(param_1 + 8);
  plVar6 = plVar12 + (longlong)*(int *)(param_1 + 0x10) * 2;
  for (; plVar12 != plVar6; plVar12 = plVar12 + 2) {
    if (*plVar12 == param_2[2]) {
      if (puVar11 != (undefined2 *)0x0) {
        FMemory::Free(puVar11);
      }
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x18);
      puVar11 = puVar8;
      if ((cVar3 == '\0') ||
         ((lVar13 = FWeakObjectPtr::Get(param_1 + 0x18), *(longlong *)(lVar13 + 0x120) == 0 &&
          (lVar13 = FUN_1423407b0(lVar13), puVar11 = (undefined2 *)0x0, lVar13 == 0))))
      goto LAB_1408e31af;
      lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
      lVar13 = *(longlong *)(lVar7 + 0x120);
      if (lVar13 == 0) {
        lVar13 = FUN_1423407b0(lVar7);
      }
      local_res8 = *(ulonglong *)(lVar13 + 0x18);
      FName::ToString(&local_res8,&local_58);
      pwVar10 = L"DesertBoss_P";
      puVar11 = &DAT_143f3eda8;
      if (local_50 != 0) {
        puVar11 = local_58;
      }
      goto LAB_1408e30c6;
    }
  }
  if (puVar11 != (undefined2 *)0x0) {
    FMemory::Free(puVar11);
  }
  goto LAB_1408e3010;
LAB_1408e30c6:
  wVar1 = *(wchar_t *)((longlong)(puVar11 + -0xa209e034) + (longlong)pwVar10);
  if ((wVar1 == L'\0') && (*pwVar10 == L'\0')) goto LAB_1408e3105;
  if (wVar1 != *pwVar10) {
    wVar4 = towlower(wVar1);
    wVar5 = towlower(*pwVar10);
    if (wVar4 != wVar5) goto LAB_1408e30fd;
  }
  pwVar10 = pwVar10 + 1;
  goto LAB_1408e30c6;
LAB_1408e3199:
  iVar9 = (uint)wVar4 - (uint)wVar5;
LAB_1408e31a1:
  puVar11 = (undefined2 *)0x3;
  if (iVar9 == 0) goto LAB_1408e31aa;
LAB_1408e31af:
  bVar2 = false;
  goto LAB_1408e31b2;
LAB_1408e30fd:
  iVar9 = (uint)wVar4 - (uint)wVar5;
LAB_1408e3105:
  puVar11 = (undefined2 *)0x1;
  if (iVar9 != 0) {
    lVar7 = FWeakObjectPtr::Get(param_1 + 0x18);
    lVar13 = *(longlong *)(lVar7 + 0x120);
    if (lVar13 == 0) {
      lVar13 = FUN_1423407b0(lVar7);
    }
    local_res8 = *(ulonglong *)(lVar13 + 0x18);
    FName::ToString(&local_res8,&local_68);
    pwVar10 = L"FinalBoss_P";
    puVar11 = &DAT_143f3eda8;
    if (local_60 != 0) {
      puVar11 = local_68;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar11 + -0xa209e044) + (longlong)pwVar10);
      if ((wVar1 == L'\0') && (*pwVar10 == L'\0')) {
        iVar9 = 0;
        goto LAB_1408e31a1;
      }
      if (wVar1 != *pwVar10) {
        wVar4 = towlower(wVar1);
        wVar5 = towlower(*pwVar10);
        if (wVar4 != wVar5) goto LAB_1408e3199;
      }
      pwVar10 = pwVar10 + 1;
    } while( true );
  }
LAB_1408e31aa:
  bVar2 = true;
LAB_1408e31b2:
  if ((((ulonglong)puVar11 & 2) != 0) &&
     (puVar11 = (undefined2 *)(ulonglong)((uint)puVar11 & 0xfffffffd), local_68 != (undefined2 *)0x0
     )) {
    FMemory::Free();
  }
  if ((((ulonglong)puVar11 & 1) != 0) && (local_58 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if (!bVar2) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)plVar12 + 0xc);
  }
LAB_1408e3010:
  fVar14 = *(float *)(param_1 + 0x20);
  fVar15 = 0.0;
  if (0.0 <= fVar14) {
    if (1.0 <= fVar14) {
      fVar14 = 1.0;
    }
  }
  else {
    fVar14 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar14;
  if (*(longlong **)(param_1 + 0x38) != (longlong *)0x0) {
    puVar8 = (undefined2 *)(**(code **)(**(longlong **)(param_1 + 0x38) + 0x148))();
  }
  cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar3 == '\0') {
    if (puVar8 != (undefined2 *)0x0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(puVar8 + 0x3c8);
    }
  }
  else {
    lVar13 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (*(char *)(lVar13 + 0x2d8) == '\0') {
      if (*(longlong *)(lVar13 + 0x2d0) != 0) {
        fVar15 = *(float *)(*(longlong *)(lVar13 + 0x2d0) + 0x38);
      }
    }
    else {
      fVar15 = *(float *)(lVar13 + 0x2dc);
    }
    lVar13 = FWeakObjectPtr::Get(param_1 + 0x18);
    *(float *)(param_1 + 0x34) =
         ((float)(*(int *)(lVar13 + 0x37c) - 1) + *(float *)(param_1 + 0x20)) * fVar15;
  }
  return;
}



// FUNCTION 1408e32b0 FUN_1408e32b0 body=50 status=ok
// SIG undefined FUN_1408e32b0(void)

void FUN_1408e32b0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid();
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_1408e3850(uVar1,*(undefined4 *)(param_1 + 8));
    return;
  }
  return;
}



// FUNCTION 1408e32f0 FUN_1408e32f0 body=164 status=ok
// SIG undefined FUN_1408e32f0(void)

void FUN_1408e32f0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar5 = *(int *)(param_1 + 0x4c8) + -1;
  if (-1 < iVar5) {
    plVar1 = (longlong *)(param_1 + 0x4c0);
    lVar6 = (longlong)iVar5 << 3;
    lVar7 = (longlong)*(int *)(param_1 + 0x4c8) << 3;
    do {
      cVar2 = FWeakObjectPtr::IsValid(*plVar1 + lVar6);
      if (cVar2 == '\0') {
        iVar3 = *(int *)(param_1 + 0x4c8);
        iVar4 = (iVar3 - iVar5) + -1;
        if (iVar4 != 0) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(lVar6 + *plVar1),(void *)(lVar7 + *plVar1),(longlong)iVar4 << 3);
          iVar3 = *(int *)(param_1 + 0x4c8);
        }
        *(int *)(param_1 + 0x4c8) = iVar3 + -1;
        TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
      }
      lVar7 = lVar7 + -8;
      lVar6 = lVar6 + -8;
      iVar5 = iVar5 + -1;
    } while (-1 < iVar5);
  }
  return;
}



// FUNCTION 1408e33a0 FUN_1408e33a0 body=681 status=ok
// SIG undefined FUN_1408e33a0(void)

void FUN_1408e33a0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  
  if (*(char *)(param_1 + 0x99) != '\0') {
    plVar2 = *(longlong **)(param_1 + 0x10);
    plVar1 = plVar2 + (longlong)*(int *)(param_1 + 0x18) * 0xf;
    for (; plVar2 != plVar1; plVar2 = plVar2 + 0xf) {
      if (*plVar2 == *(longlong *)(param_1 + 0x20)) goto LAB_1408e33ea;
    }
    plVar2 = (longlong *)(param_1 + 0x20);
LAB_1408e33ea:
    if (*(char *)(param_1 + 0x9a) != '\0') {
      lVar3 = *(longlong *)(param_1 + 0x28);
      lVar4 = (longlong)*(int *)(param_1 + 0x30) * 0x80 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x80) {
        FUN_1423e1470(lVar3 + 8,0xbf800000);
      }
      lVar3 = *(longlong *)(param_1 + 0x38);
      lVar4 = (longlong)*(int *)(param_1 + 0x40) * 0x1d8 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x1d8) {
        FUN_1423e1470(lVar3 + 8,0xbf800000);
        FUN_1423e1470(lVar3 + 0x78,0xbf800000);
        FUN_1423e1470(lVar3 + 0xe8,0xbf800000);
        FUN_1423e1470(lVar3 + 0x158,0xbf800000);
      }
      lVar3 = *(longlong *)(param_1 + 0x48);
      lVar4 = (longlong)*(int *)(param_1 + 0x50) * 0x98 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x98) {
        FUN_1423e1470(lVar3 + 0x20,0xbf800000);
      }
      lVar3 = *(longlong *)(param_1 + 0x58);
      lVar4 = (longlong)*(int *)(param_1 + 0x60) * 0x1f0 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x1f0) {
        FUN_1423e1470(lVar3 + 0x20,0xbf800000);
        FUN_1423e1470(lVar3 + 0x90,0xbf800000);
        FUN_1423e1470(lVar3 + 0x100,0xbf800000);
        FUN_1423e1470(lVar3 + 0x170,0xbf800000);
      }
      lVar3 = *(longlong *)(param_1 + 0x68);
      lVar4 = (longlong)*(int *)(param_1 + 0x70) * 0x1e8 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x1e8) {
        FUN_1423e1470(lVar3 + 0x20,0xbf800000);
        FUN_1423e1470(lVar3 + 0x90,0xbf800000);
        FUN_1423e1470(lVar3 + 0x100,0xbf800000);
        FUN_1423e1470(lVar3 + 0x170,0xbf800000);
      }
      lVar3 = *(longlong *)(param_1 + 0x78);
      lVar4 = (longlong)*(int *)(param_1 + 0x80) * 0x1f0 + lVar3;
      for (; lVar3 != lVar4; lVar3 = lVar3 + 0x1f0) {
        FUN_1423e1470(lVar3 + 0x20,0xbf800000);
        FUN_1423e1470(lVar3 + 0x90,0xbf800000);
        FUN_1423e1470(lVar3 + 0x100,0xbf800000);
        FUN_1423e1470(lVar3 + 0x170,0xbf800000);
      }
      *(undefined1 *)(param_1 + 0x9a) = 0;
      return;
    }
    *(longlong *)(param_1 + 0x20) = *plVar2;
    FUN_1408e24e0(param_1 + 0x28,plVar2 + 1);
    FUN_1408e2620(param_1 + 0x48,plVar2 + 5);
    FUN_1408e2360(param_1 + 0x88,plVar2 + 0xd);
    *(undefined1 *)(param_1 + 0x99) = 0;
  }
  return;
}



// FUNCTION 1408e3650 FUN_1408e3650 body=118 status=ok
// SIG undefined FUN_1408e3650(void)

void FUN_1408e3650(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x369) != '\0') {
    if (*(longlong *)(param_1 + 0x398) != 0) {
      puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x398) + 8);
      LOCK();
      uVar2 = *puVar1;
      if (uVar2 == 0) {
        *puVar1 = 0;
        uVar2 = 0;
      }
      UNLOCK();
      if ((uVar2 >> 0x1a & 1) == 0) {
        uVar3 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar3,param_1 + 0x398,0xff);
      }
    }
    FUN_1408e33a0(param_1 + 0x2d0);
    FUN_1408e3850(param_1,*(undefined4 *)(param_1 + 0x378));
  }
  return;
}



// FUNCTION 1408e36d0 FUN_1408e36d0 body=93 status=ok
// SIG undefined FUN_1408e36d0(void)

void FUN_1408e36d0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  FUN_142338230();
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x394) == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x378);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x390);
    }
    plVar2 = (longlong *)FUN_14233fea0(param_1);
    (**(code **)(*plVar2 + 0x2b8))(plVar2,uVar3);
  }
  return;
}



// FUNCTION 1408e3730 FUN_1408e3730 body=62 status=ok
// SIG undefined FUN_1408e3730(void)

void FUN_1408e3730(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_142338f40();
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14233fea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001408e3761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b8))(plVar2,0);
    return;
  }
  return;
}



// FUNCTION 1408e3770 FUN_1408e3770 body=67 status=ok
// SIG undefined FUN_1408e3770(void)

void FUN_1408e3770(undefined8 param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  UActorComponent::DestroyRenderState_Concurrent();
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    plVar2 = (longlong *)FUN_14233fea0(param_1);
                    /* WARNING: Could not recover jumptable at 0x0001408e37a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x2b8))(plVar2,0xbf800000);
    return;
  }
  return;
}



// FUNCTION 1408e37c0 FUN_1408e37c0 body=129 status=ok
// SIG undefined FUN_1408e37c0(void)

void FUN_1408e37c0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x458);
  if (lVar2 != 0) {
    puVar4 = *(undefined8 **)(lVar2 + 0x2e0);
    puVar3 = puVar4 + (longlong)*(int *)(lVar2 + 0x2e8) * 0xf;
    for (; puVar4 != puVar3; puVar4 = puVar4 + 0xf) {
      iVar1 = (int)param_2[1];
      *(int *)(param_2 + 1) = iVar1 + 1;
      if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
        TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *puVar4;
    }
  }
  return;
}



// FUNCTION 1408e3850 FUN_1408e3850 body=278 status=ok
// SIG undefined FUN_1408e3850(void)

void FUN_1408e3850(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x2f8);
  lVar2 = (longlong)*(int *)(param_1 + 0x300) * 0x80 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x80) {
    uVar3 = FRichCurve::Eval(lVar1 + 8,param_2,0);
    *(undefined4 *)(lVar1 + 0x78) = uVar3;
  }
  lVar1 = *(longlong *)(param_1 + 0x308);
  lVar2 = (longlong)*(int *)(param_1 + 0x310) * 0x1d8 + lVar1;
  for (; lVar1 != lVar2; lVar1 = lVar1 + 0x1d8) {
    uVar3 = FRichCurve::Eval(lVar1 + 8,param_2,0);
    *(undefined4 *)(lVar1 + 0x1c8) = uVar3;
    uVar3 = FRichCurve::Eval(lVar1 + 0x78,param_2);
    *(undefined4 *)(lVar1 + 0x1cc) = uVar3;
    uVar3 = FRichCurve::Eval(lVar1 + 0xe8,param_2);
    *(undefined4 *)(lVar1 + 0x1d0) = uVar3;
    uVar3 = FRichCurve::Eval(lVar1 + 0x158,param_2);
    *(undefined4 *)(lVar1 + 0x1d4) = uVar3;
  }
  FUN_1408e3970(param_1 + 0x2d0,param_2);
  return;
}



// FUNCTION 1408e3970 FUN_1408e3970 body=551 status=ok
// SIG undefined FUN_1408e3970(void)

void FUN_1408e3970(longlong param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  undefined1 local_res8 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar3 = (longlong)*(int *)(param_1 + 0x50) * 0x98 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x98) {
    uVar4 = FRichCurve::Eval(lVar2 + 0x20,param_2,0);
    *(undefined4 *)(lVar2 + 0x90) = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x58);
  lVar3 = (longlong)*(int *)(param_1 + 0x60) * 0x1f0 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x1f0) {
    uVar4 = FRichCurve::Eval(lVar2 + 0x20,param_2,0);
    *(undefined4 *)(lVar2 + 0x1e0) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x90,param_2);
    *(undefined4 *)(lVar2 + 0x1e4) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x100,param_2);
    *(undefined4 *)(lVar2 + 0x1e8) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x170,param_2);
    *(undefined4 *)(lVar2 + 0x1ec) = uVar4;
  }
  lVar2 = *(longlong *)(param_1 + 0x68);
  lVar3 = (longlong)*(int *)(param_1 + 0x70) * 0x1e8 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x1e8) {
    local_28 = FRichCurve::Eval(lVar2 + 0x20,param_2,0);
    local_24 = FRichCurve::Eval(lVar2 + 0x90,param_2);
    local_20 = FRichCurve::Eval(lVar2 + 0x100,param_2);
    local_1c = FRichCurve::Eval(lVar2 + 0x170,param_2);
    puVar1 = (undefined4 *)FLinearColor::ToFColor(&local_28,local_res8,1);
    *(undefined4 *)(lVar2 + 0x1e0) = *puVar1;
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  lVar3 = (longlong)*(int *)(param_1 + 0x80) * 0x1f0 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x1f0) {
    uVar4 = FRichCurve::Eval(lVar2 + 0x20,param_2,0);
    *(undefined4 *)(lVar2 + 0x1e0) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x90,param_2);
    *(undefined4 *)(lVar2 + 0x1e4) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x100,param_2);
    *(undefined4 *)(lVar2 + 0x1e8) = uVar4;
    uVar4 = FRichCurve::Eval(lVar2 + 0x170,param_2);
    *(undefined4 *)(lVar2 + 0x1ec) = uVar4;
  }
  return;
}



// FUNCTION 1408e3ba0 FUN_1408e3ba0 body=505 status=ok
// SIG undefined FUN_1408e3ba0(void)

ulonglong FUN_1408e3ba0(undefined8 *param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                       longlong *param_5,undefined8 *param_6)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 local_res20;
  longlong local_78 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  longlong lStack_50;
  ulonglong local_48;
  
  uVar12 = 0;
  *param_1 = 0;
  *param_2 = 0;
  local_res20 = param_4;
  FName::ToString(&local_res20,local_78);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  local_48 = 0;
  local_58 = 0;
  lStack_50 = 0;
  uVar8 = FName::ToString(&local_res20,local_68);
  FMatineeUtils::FMatineePropertyQuery::PerformQuery(&local_58,param_3,param_3,uVar2,uVar8);
  lVar7 = lStack_50;
  if (lStack_50 == 0) goto LAB_1408e3d66;
  bVar6 = false;
  if (param_5 != (longlong *)0x0) {
    uVar14 = uVar12;
    uVar15 = uVar12;
    if ((int)param_5[1] < 1) goto LAB_1408e3d66;
    do {
      lVar3 = *(longlong *)(uVar15 + *param_5);
      lVar9 = UStructProperty::GetPrivateStaticClass();
      lVar4 = *(longlong *)(lVar7 + 0x10);
      if ((*(int *)(lVar4 + 0x90) < *(int *)(lVar9 + 0x90)) ||
         (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
          lVar9 + 0x88)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        if (param_6 == (undefined8 *)0x0) goto LAB_1408e3d2c;
        if (0 < *(int *)(param_6 + 1)) {
          plVar10 = (longlong *)*param_6;
          uVar11 = uVar12;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0x70) + 0x18) == *plVar10) {
              bVar6 = true;
              break;
            }
            uVar11 = uVar11 + 1;
            plVar10 = plVar10 + 1;
          } while ((longlong)uVar11 < (longlong)*(int *)(param_6 + 1));
        }
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x90);
        if ((*(int *)(lVar4 + 0x90) < iVar1) ||
           (*(longlong *)(*(longlong *)(lVar4 + 0x88) + (longlong)iVar1 * 8) != lVar3 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if (bVar5) goto LAB_1408e3d2c;
      }
      uVar13 = (int)uVar14 + 1;
      uVar14 = (ulonglong)uVar13;
      uVar15 = uVar15 + 8;
    } while ((int)uVar13 < (int)param_5[1]);
    if (!bVar6) goto LAB_1408e3d66;
  }
LAB_1408e3d2c:
  *param_2 = lStack_50;
  *param_1 = local_58;
  uVar12 = local_48;
LAB_1408e3d66:
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return uVar12;
}



// FUNCTION 1408e3da0 FUN_1408e3da0 body=951 status=ok
// SIG undefined FUN_1408e3da0(void)

void FUN_1408e3da0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_res18 [16];
  short local_28 [2];
  undefined8 local_24;
  
  FUN_14238b980();
  piVar5 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x38);
  if ((*piVar5 < DAT_146862378) && (_Init_thread_header(&DAT_146862378), DAT_146862378 == -1)) {
    uVar1 = FUN_1408ea260();
    FUN_1408ea260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TimeOfDay",1);
    DAT_146862370 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146862378);
  }
  iVar4 = 0;
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146862370 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146862370 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146862370 + 0x30));
  }
  if ((*piVar5 < DAT_146862388) && (_Init_thread_header(&DAT_146862388), DAT_146862388 == -1)) {
    uVar1 = FUN_1408ea260();
    FUN_1408ea260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CycleCount",1);
    DAT_146862380 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146862388);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146862380 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146862380 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146862380 + 0x30));
  }
  if ((*piVar5 < DAT_146862398) && (_Init_thread_header(&DAT_146862398), DAT_146862398 == -1)) {
    uVar1 = FUN_1408ea260();
    FUN_1408ea260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"bShouldTick",1);
    DAT_146862390 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_146862398);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_146862390 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_146862390 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_146862390 + 0x30));
  }
  if ((*piVar5 < DAT_1468623a8) && (_Init_thread_header(&DAT_1468623a8), DAT_1468623a8 == -1)) {
    uVar1 = FUN_1408ea260();
    FUN_1408ea260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"CurrentLayerName",1);
    DAT_1468623a0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468623a8);
  }
  iVar3 = iVar4;
  if (0 < *(int *)(DAT_1468623a0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468623a0 + 0x40) + (short)iVar3;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(DAT_1468623a0 + 0x30));
  }
  if ((*piVar5 < DAT_1468623b8) && (_Init_thread_header(&DAT_1468623b8), DAT_1468623b8 == -1)) {
    uVar1 = FUN_1408ea260();
    FUN_1408ea260();
    puVar2 = (undefined8 *)FName::FName(local_res18,L"TransitionTimeLeft",1);
    DAT_1468623b0 = FUN_1405dfb00(uVar1,*puVar2);
    _Init_thread_footer(&DAT_1468623b8);
  }
  if (0 < *(int *)(DAT_1468623b0 + 0x30)) {
    do {
      local_28[0] = *(short *)(DAT_1468623b0 + 0x40) + (short)iVar4;
      local_24 = 0;
      TArray<FLifetimeProperty,FDefaultAllocator>::AddUniqueImpl<FLifetimeProperty>
                (param_2,local_28);
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(DAT_1468623b0 + 0x30));
  }
  return;
}



// FUNCTION 1408e4160 GetNumKeys body=85 status=ok
// SIG undefined GetNumKeys(void)

undefined8 FIndexedCurve::GetNumKeys(void)

{
  LowLevelFatalErrorHandler
            ("D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x25,
             L"Pure virtual not implemented (%s)",L"FIndexedCurve::GetNumKeys");
  FDebug::AssertFailed
            (&DAT_143f3f584,
             "D:\\Oak\\main\\Engine\\Source\\Runtime\\Engine\\Classes\\Curves/IndexedCurve.h",0x25,
             L"Pure virtual not implemented (%s)",L"FIndexedCurve::GetNumKeys");
  return 0;
}



// FUNCTION 1408e41c0 FUN_1408e41c0 body=102 status=ok
// SIG undefined FUN_1408e41c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1408e41c0(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_146862348) {
    _Init_thread_header(&DAT_146862348);
    if (DAT_146862348 == -1) {
      _DAT_146862338 = 0;
      _DAT_146862340 = 0;
      _Init_thread_footer(&DAT_146862348);
    }
  }
  return &DAT_146862338;
}



// FUNCTION 1408e4230 FUN_1408e4230 body=406 status=ok
// SIG undefined FUN_1408e4230(void)

undefined8 * FUN_1408e4230(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 local_res18;
  
  *param_1 = 0;
  if (((param_2 == 0) || (lVar3 = FMistWorldUtils::GetDebugEntityDrawSystem(param_2), lVar3 == 0))
     || (lVar3 = FUN_142f416d0(lVar3,param_2,local_res8), lVar3 == 0)) {
    return param_1;
  }
  lVar1 = lVar3 + 0x90;
  lVar4 = FUN_1405ec200(lVar1);
  if (lVar4 == 0) {
    return param_1;
  }
  lVar5 = FUN_142e67c90();
  if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
      lVar5 + 0x88)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    return param_1;
  }
  lVar4 = FWeakObjectPtr::Get(lVar1);
  if (lVar4 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 != *(int *)(lVar3 + 0x98)) &&
       (local_res10 = 0, *(longlong *)(lVar3 + 0xa0) != 0)) {
      lVar4 = FUN_141796df0();
      FWeakObjectPtr::operator=(lVar1,lVar4);
      if ((lVar4 != 0) || (DAT_1469e7e10 == '\0')) {
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        *(int *)(lVar3 + 0x98) = DAT_1464b56f4;
      }
      lVar4 = FWeakObjectPtr::Get(lVar1);
      if (lVar4 != 0) goto LAB_1408e4340;
    }
  }
  else {
LAB_1408e4340:
    lVar3 = FUN_142e67c90();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1408e4379;
  }
  lVar4 = 0;
LAB_1408e4379:
  puVar6 = (undefined8 *)FText::ToString(lVar4 + 0x30);
  if (*(int *)(puVar6 + 1) == 0) {
    puVar7 = &DAT_143f3eda8;
  }
  else {
    puVar7 = (undefined2 *)*puVar6;
  }
  FName::FName(&local_res18,puVar7,1);
  *param_1 = local_res18;
  return param_1;
}



// FUNCTION 1408e43d0 FUN_1408e43d0 body=6 status=ok
// SIG undefined FUN_1408e43d0(void)

undefined4 FUN_1408e43d0(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



// FUNCTION 1408e43e0 FUN_1408e43e0 body=75 status=ok
// SIG undefined FUN_1408e43e0(void)

undefined8 FUN_1408e43e0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408e441f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
          return uVar3;
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1408e4430 FUN_1408e4430 body=51 status=ok
// SIG undefined FUN_1408e4430(void)

ulonglong FUN_1408e4430(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  
  uVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if ((char)uVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1 + 0x18);
    return (ulonglong)*(byte *)(lVar2 + 0x368);
  }
  return uVar1 & 0xffffffffffffff00;
}



// FUNCTION 1408e4470 FUN_1408e4470 body=74 status=ok
// SIG undefined FUN_1408e4470(void)

ulonglong FUN_1408e4470(longlong *param_1)

{
  ulonglong in_RAX;
  longlong lVar1;
  longlong *plVar2;
  ulonglong uVar3;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    in_RAX = 0;
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
      in_RAX = 0;
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2);
        in_RAX = 0;
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408e44af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (**(code **)(*plVar2 + 0x48))(plVar2);
          return uVar3;
        }
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1408e44c0 FUN_1408e44c0 body=451 status=ok
// SIG undefined FUN_1408e44c0(void)

void FUN_1408e44c0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  int *piVar5;
  undefined4 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined4 *puVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 local_res8;
  undefined4 local_resc;
  longlong local_res10;
  undefined4 local_res18;
  undefined4 local_res1c;
  longlong local_res20;
  
  lVar7 = *(longlong *)(param_1 + 0x10);
  lVar10 = (longlong)*(int *)(param_1 + 0x18) * 0x78 + lVar7;
  for (; local_res10 = param_2, lVar7 != lVar10; lVar7 = lVar7 + 0x78) {
    lVar8 = *(longlong *)(lVar7 + 0x68);
    lVar11 = lVar8 + (longlong)*(int *)(lVar7 + 0x70) * 0x28;
    if (lVar8 != lVar11) {
      piVar5 = (int *)(lVar8 + 0x24);
      do {
        piVar5[-1] = 0;
        if (*piVar5 != 0) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeTo(piVar5 + -3,0);
        }
        lVar8 = lVar8 + 0x28;
        piVar5 = piVar5 + 10;
      } while (lVar8 != lVar11);
    }
    param_2 = local_res10;
  }
  if (param_2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x10);
    local_res20 = (longlong)*(int *)(param_1 + 0x18) * 0x78 + lVar7;
    if (lVar7 != local_res20) {
      do {
        lVar11 = *(longlong *)(lVar7 + 0x68);
        lVar10 = lVar11 + (longlong)*(int *)(lVar7 + 0x70) * 0x28;
        if (lVar11 != lVar10) {
          piVar5 = (int *)(lVar11 + 0x20);
          do {
            puVar6 = *(undefined4 **)(param_2 + 0x4c0);
            puVar1 = puVar6 + (longlong)*(int *)(param_2 + 0x4c8) * 2;
            for (; puVar6 != puVar1; puVar6 = puVar6 + 2) {
              local_res8 = *puVar6;
              local_resc = puVar6[1];
              cVar3 = FWeakObjectPtr::IsValid(&local_res8);
              if (cVar3 != '\0') {
                uVar4 = FWeakObjectPtr::Get(&local_res8);
                lVar8 = UObject::FindFunction(uVar4,*(undefined8 *)(piVar5 + -6));
                if (lVar8 != 0) {
                  iVar2 = *piVar5;
                  *piVar5 = iVar2 + 1;
                  if (piVar5[1] < iVar2 + 1) {
                    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(piVar5 + -2,iVar2);
                  }
                  puVar9 = (undefined4 *)((longlong)iVar2 * 0x10 + *(longlong *)(piVar5 + -2));
                  FWeakObjectPtr::operator=(&local_res18,lVar8);
                  *puVar9 = local_res8;
                  puVar9[1] = local_resc;
                  puVar9[2] = local_res18;
                  puVar9[3] = local_res1c;
                }
              }
              param_2 = local_res10;
            }
            lVar11 = lVar11 + 0x28;
            piVar5 = piVar5 + 10;
          } while (lVar11 != lVar10);
        }
        lVar7 = lVar7 + 0x78;
      } while (lVar7 != local_res20);
    }
  }
  return;
}



// FUNCTION 1408e4690 FUN_1408e4690 body=1103 status=ok
// SIG undefined FUN_1408e4690(void)

void FUN_1408e4690(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int *piVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 local_res8;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  lVar2 = (longlong)*(int *)(param_1 + 0x18) * 0x78 + lVar4;
  if (lVar4 != lVar2) {
    piVar5 = (int *)(lVar4 + 0x50);
    do {
      puVar6 = *(undefined8 **)(piVar5 + -10);
      puVar7 = puVar6 + (longlong)piVar5[-8] * 0x13;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 0x13) {
        local_res8 = *puVar6;
        uVar3 = 0;
        if (param_2 != 0) {
          cVar1 = FName::operator==<wchar_t>(&local_res8,L"DirectionalLight");
          if (cVar1 == '\0') {
            cVar1 = FName::operator==<wchar_t>(&local_res8,L"SkyLight");
            if (cVar1 == '\0') {
              cVar1 = FName::operator==<wchar_t>(&local_res8,L"AtmosphericFog");
              if (cVar1 == '\0') {
                cVar1 = FName::operator==<wchar_t>(&local_res8,L"ExponentialHeightFog");
                if (cVar1 == '\0') {
                  cVar1 = FName::operator==<wchar_t>(&local_res8,L"PostProcess");
                  uVar3 = 0;
                  if (cVar1 != '\0') {
                    uVar3 = *(undefined8 *)(param_2 + 0x488);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_2 + 0x478);
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_2 + 0x470);
              }
            }
            else {
              uVar3 = *(undefined8 *)(param_2 + 0x468);
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_2 + 0x460);
          }
        }
        puVar6[2] = uVar3;
        uVar3 = FUN_1408e1520(uVar3,puVar6[1],0);
        puVar6[3] = uVar3;
      }
      puVar6 = *(undefined8 **)(piVar5 + -6);
      puVar7 = puVar6 + (longlong)piVar5[-4] * 0x3e;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 0x3e) {
        local_res8 = *puVar6;
        uVar3 = 0;
        if (param_2 != 0) {
          cVar1 = FName::operator==<wchar_t>(&local_res8,L"DirectionalLight");
          if (cVar1 == '\0') {
            cVar1 = FName::operator==<wchar_t>(&local_res8,L"SkyLight");
            if (cVar1 == '\0') {
              cVar1 = FName::operator==<wchar_t>(&local_res8,L"AtmosphericFog");
              if (cVar1 == '\0') {
                cVar1 = FName::operator==<wchar_t>(&local_res8,L"ExponentialHeightFog");
                if (cVar1 == '\0') {
                  cVar1 = FName::operator==<wchar_t>(&local_res8,L"PostProcess");
                  uVar3 = 0;
                  if (cVar1 != '\0') {
                    uVar3 = *(undefined8 *)(param_2 + 0x488);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_2 + 0x478);
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_2 + 0x470);
              }
            }
            else {
              uVar3 = *(undefined8 *)(param_2 + 0x468);
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_2 + 0x460);
          }
        }
        puVar6[2] = uVar3;
        uVar3 = FUN_1408e1640(uVar3,puVar6[1],0x41);
        puVar6[3] = uVar3;
      }
      puVar6 = *(undefined8 **)(piVar5 + -2);
      puVar7 = puVar6 + (longlong)*piVar5 * 0x3d;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 0x3d) {
        local_res8 = *puVar6;
        uVar3 = 0;
        if (param_2 != 0) {
          cVar1 = FName::operator==<wchar_t>(&local_res8,L"DirectionalLight");
          if (cVar1 == '\0') {
            cVar1 = FName::operator==<wchar_t>(&local_res8,L"SkyLight");
            if (cVar1 == '\0') {
              cVar1 = FName::operator==<wchar_t>(&local_res8,L"AtmosphericFog");
              if (cVar1 == '\0') {
                cVar1 = FName::operator==<wchar_t>(&local_res8,L"ExponentialHeightFog");
                if (cVar1 == '\0') {
                  cVar1 = FName::operator==<wchar_t>(&local_res8,L"PostProcess");
                  uVar3 = 0;
                  if (cVar1 != '\0') {
                    uVar3 = *(undefined8 *)(param_2 + 0x488);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_2 + 0x478);
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_2 + 0x470);
              }
            }
            else {
              uVar3 = *(undefined8 *)(param_2 + 0x468);
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_2 + 0x460);
          }
        }
        puVar6[2] = uVar3;
        uVar3 = FUN_1408e1640(uVar3,puVar6[1],0x3e);
        puVar6[3] = uVar3;
      }
      puVar6 = *(undefined8 **)(piVar5 + 2);
      puVar7 = puVar6 + (longlong)piVar5[4] * 0x3e;
      for (; puVar6 != puVar7; puVar6 = puVar6 + 0x3e) {
        local_res8 = *puVar6;
        uVar3 = 0;
        if (param_2 != 0) {
          cVar1 = FName::operator==<wchar_t>(&local_res8,L"DirectionalLight");
          if (cVar1 == '\0') {
            cVar1 = FName::operator==<wchar_t>(&local_res8,L"SkyLight");
            if (cVar1 == '\0') {
              cVar1 = FName::operator==<wchar_t>(&local_res8,L"AtmosphericFog");
              if (cVar1 == '\0') {
                cVar1 = FName::operator==<wchar_t>(&local_res8,L"ExponentialHeightFog");
                if (cVar1 == '\0') {
                  cVar1 = FName::operator==<wchar_t>(&local_res8,L"PostProcess");
                  uVar3 = 0;
                  if (cVar1 != '\0') {
                    uVar3 = *(undefined8 *)(param_2 + 0x488);
                  }
                }
                else {
                  uVar3 = *(undefined8 *)(param_2 + 0x478);
                }
              }
              else {
                uVar3 = *(undefined8 *)(param_2 + 0x470);
              }
            }
            else {
              uVar3 = *(undefined8 *)(param_2 + 0x468);
            }
          }
          else {
            uVar3 = *(undefined8 *)(param_2 + 0x460);
          }
        }
        puVar6[2] = uVar3;
        uVar3 = FUN_1408e1640(uVar3,puVar6[1],0x39);
        puVar6[3] = uVar3;
      }
      lVar4 = lVar4 + 0x78;
      piVar5 = piVar5 + 0x1e;
    } while (lVar4 != lVar2);
  }
  return;
}



// FUNCTION 1408e4ae0 FUN_1408e4ae0 body=39 status=ok
// SIG undefined FUN_1408e4ae0(void)

void FUN_1408e4ae0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(8);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_14413e858;
    return;
  }
  return;
}



// FUNCTION 1408e4b10 FUN_1408e4b10 body=596 status=ok
// SIG undefined FUN_1408e4b10(void)

void FUN_1408e4b10(longlong param_1)

{
  wchar_t wVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  wint_t wVar5;
  wint_t wVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong lVar9;
  int iVar10;
  wchar_t *pwVar11;
  int iVar12;
  undefined2 *puVar13;
  ulonglong local_res8;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  
  iVar12 = 0;
  bVar3 = false;
  bVar2 = false;
  local_res8 = local_res8 & 0xffffffff00000000;
  FUN_142393b20();
  lVar7 = *(longlong *)(param_1 + 0x120);
  if (lVar7 == 0) {
    lVar7 = FUN_1423407b0(param_1);
    if (lVar7 != 0) goto LAB_1408e4b4e;
  }
  else {
LAB_1408e4b4e:
    plVar8 = (longlong *)FUN_142d5ecc0(lVar7);
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b8))(plVar8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x50))(plVar8,param_1);
      }
    }
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (lVar9 == 0) {
    lVar9 = FUN_1423407b0(param_1);
  }
  if (lVar9 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x120);
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    local_res8 = *(ulonglong *)(lVar9 + 0x18);
    FName::ToString(&local_res8,&local_38);
    puVar13 = &DAT_143f3eda8;
    if (local_30 != 0) {
      puVar13 = local_38;
    }
    pwVar11 = L"DesertBoss_P";
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar13 + -0xa209e264) + (longlong)pwVar11);
      if ((wVar1 == L'\0') && (*pwVar11 == L'\0')) {
        iVar10 = 0;
        goto LAB_1408e4c2f;
      }
      if (wVar1 != *pwVar11) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_1408e4c27;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_1408e4cd7:
  bVar4 = false;
  goto LAB_1408e4cda;
LAB_1408e4cc1:
  iVar12 = (uint)wVar5 - (uint)wVar6;
LAB_1408e4cc9:
  bVar3 = true;
  bVar2 = true;
  if (iVar12 != 0) goto LAB_1408e4cd7;
  goto LAB_1408e4cd2;
LAB_1408e4c27:
  iVar10 = (uint)wVar5 - (uint)wVar6;
LAB_1408e4c2f:
  bVar2 = false;
  if (iVar10 != 0) {
    lVar9 = *(longlong *)(param_1 + 0x120);
    if (lVar9 == 0) {
      lVar9 = FUN_1423407b0(param_1);
    }
    local_res8 = *(ulonglong *)(lVar9 + 0x18);
    FName::ToString(&local_res8,&local_48);
    pwVar11 = L"FinalBoss_P";
    puVar13 = &DAT_143f3eda8;
    if (local_40 != 0) {
      puVar13 = local_48;
    }
    do {
      wVar1 = *(wchar_t *)((longlong)(puVar13 + -0xa209e274) + (longlong)pwVar11);
      if ((wVar1 == L'\0') && (*pwVar11 == L'\0')) goto LAB_1408e4cc9;
      if (wVar1 != *pwVar11) {
        wVar5 = towlower(wVar1);
        wVar6 = towlower(*pwVar11);
        if (wVar5 != wVar6) goto LAB_1408e4cc1;
      }
      pwVar11 = pwVar11 + 1;
    } while( true );
  }
LAB_1408e4cd2:
  bVar3 = true;
  bVar4 = true;
LAB_1408e4cda:
  if (bVar2) {
    if (local_48 != (undefined2 *)0x0) {
      FMemory::Free();
    }
  }
  if ((bVar3) && (local_38 != (undefined2 *)0x0)) {
    FMemory::Free();
  }
  if ((bVar4) && (lVar7 != 0)) {
    plVar8 = (longlong *)FUN_142d5ecc0(lVar7);
    if (plVar8 != (longlong *)0x0) {
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x2b8))(plVar8);
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x10))(plVar8,0x3f400000,1);
        (**(code **)(*plVar8 + 0x18))(plVar8);
      }
    }
  }
  return;
}



// FUNCTION 1408e4d70 FUN_1408e4d70 body=7156 status=ok
// SIG undefined FUN_1408e4d70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1408e4d70(longlong *param_1,longlong param_2)

{
  float *pfVar1;
  byte *pbVar2;
  void *pvVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong *plVar11;
  undefined2 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined8 *puVar19;
  int iVar20;
  int iVar21;
  undefined2 *puVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1e8 [32];
  double local_1c8;
  double local_1c0;
  double local_1b8;
  undefined8 *local_1a8;
  undefined8 local_1a0;
  undefined8 *local_198;
  undefined8 local_190;
  undefined4 local_188 [2];
  undefined2 *local_180;
  undefined8 local_178;
  float local_170 [2];
  undefined8 *local_168;
  int local_160;
  int iStack_15c;
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 local_148;
  float local_140;
  float local_13c;
  undefined8 *local_138;
  undefined8 local_130;
  undefined8 *local_128;
  longlong local_120 [2];
  undefined8 *local_110;
  longlong *local_108;
  longlong *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  longlong local_e8 [2];
  longlong local_d8 [2];
  longlong local_c8 [2];
  undefined4 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  char local_94;
  longlong local_88;
  longlong local_80;
  undefined8 local_68;
  char local_60;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  puVar19 = (undefined8 *)0x0;
  local_188[0] = 0;
  local_108 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x38) < DAT_1468623c8) && (_Init_thread_header(&DAT_1468623c8), DAT_1468623c8 == -1))
  {
    FName::FName(&DAT_1468623c0,"TimeOfDay",1);
    _Init_thread_footer(&DAT_1468623c8);
  }
  if (((param_2 != 0) && (param_1 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*param_1 + 0x740))(param_1,&DAT_1468623c0), puVar14 = DAT_146b19a68,
     cVar4 != '\0')) {
    puVar10 = puVar19;
    if (DAT_146b19a68 != (undefined8 *)0x0) {
      puVar6 = (undefined8 *)AFGPoleHologram::GetPrivateStaticClass();
      local_138 = puVar19;
      if (puVar6 != (undefined8 *)0x0) {
        puVar7 = (undefined8 *)AFGPoleHologram::GetPrivateStaticClass();
        puVar15 = puVar6;
        do {
          local_138 = puVar6;
          if (puVar15 == puVar7) break;
          puVar15 = (undefined8 *)puVar15[6];
          local_138 = puVar19;
        } while (puVar15 != (undefined8 *)0x0);
      }
      local_f8 = puVar14;
      local_b8 = 5;
      local_60 = '\0';
      FUN_14044bc80(&local_b0,&local_f8,&local_138);
      FUN_14045a130();
      if (local_94 == '\0') {
        if (local_60 != '\0') {
          local_60 = '\0';
          UWorld::RemoveOnActorSpawnedHandler(local_b0,local_68);
          if (local_80 != 0) {
            FMemory::Free();
          }
          if (local_a8 != 0) {
            FMemory::Free();
          }
        }
        if (local_88 != 0) {
          puVar10 = *(undefined8 **)(local_88 + 0x458);
        }
      }
      else if (local_60 != '\0') {
        local_60 = '\0';
        UWorld::RemoveOnActorSpawnedHandler(local_b0,local_68);
        if (local_80 != 0) {
          FMemory::Free();
        }
        if (local_a8 != 0) {
          FMemory::Free();
        }
      }
    }
    local_110 = puVar10;
    bVar23 = puVar10 == (undefined8 *)0x0;
    if (bVar23) {
      local_160 = 0;
      ppuVar8 = &local_168;
      local_f0 = (undefined8 *)0x0;
    }
    else {
      local_138 = (undefined8 *)puVar10[0x5e];
      ppuVar8 = (undefined8 **)FName::ToString(&local_138,local_120);
      local_f0 = *ppuVar8;
    }
    *ppuVar8 = (undefined8 *)0x0;
    iVar20 = *(int *)(ppuVar8 + 1);
    ppuVar8[1] = (undefined8 *)0x0;
    if ((bVar23) && (local_168 != (undefined8 *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar23) && (local_120[0] != 0)) {
      FMemory::Free();
    }
    fVar25 = 0.0;
    fVar24 = 0.0;
    if (puVar10 != (undefined8 *)0x0) {
      fVar25 = *(float *)(puVar10 + 0x6f);
      fVar24 = (float)*(uint *)((longlong)puVar10 + 0x37c);
    }
    bVar23 = puVar10 == (undefined8 *)0x0;
    if (bVar23) {
      local_160 = 0;
      ppuVar8 = &local_168;
    }
    else {
      ppuVar8 = (undefined8 **)FUN_1408e8070(local_120,*(undefined1 *)(puVar10 + 0x6d));
      puVar19 = *ppuVar8;
    }
    local_f8 = puVar19;
    *ppuVar8 = (undefined8 *)0x0;
    iVar17 = *(int *)(ppuVar8 + 1);
    ppuVar8[1] = (undefined8 *)0x0;
    if ((bVar23) && (local_168 != (undefined8 *)0x0)) {
      FMemory::Free();
    }
    if ((!bVar23) && (local_120[0] != 0)) {
      FMemory::Free();
    }
    plVar11 = (longlong *)(param_2 + 0x98);
    local_148 = (undefined2 *)
                CONCAT44((float)DAT_1464aa748._1_1_ * 0.003921569,
                         (float)DAT_1464aa748._2_1_ * 0.003921569);
    local_140 = (float)(byte)DAT_1464aa748 * 0.003921569;
    local_13c = (float)DAT_1464aa748._3_1_ * 0.003921569;
    local_100 = plVar11;
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_148);
    local_170[0] = 0.0;
    FString::PrintfImpl(&local_168,L"Current Time of Day: %.6f",(double)fVar25);
    FUN_1428a6fb0(plVar11,&local_168,local_170);
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    local_170[0] = 0.0;
    FString::PrintfImpl(&local_168,L"Current Cycle: %d",(longlong)fVar24 & 0xffffffff);
    FUN_1428a6fb0(plVar11,&local_168,local_170);
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    puVar14 = local_f0;
    local_170[0] = 0.0;
    puVar6 = (undefined8 *)&DAT_143f3eda8;
    if (iVar20 != 0) {
      puVar6 = local_f0;
    }
    FString::PrintfImpl(&local_168,L"Current Time of Day Layer: %s",puVar6);
    FUN_1428a6fb0(plVar11,&local_168,local_170);
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    local_170[0] = 0.0;
    puVar6 = (undefined8 *)&DAT_143f3eda8;
    if (iVar17 != 0) {
      puVar6 = puVar19;
    }
    FString::PrintfImpl(&local_168,L"Current Time of Day State: %s",puVar6);
    FUN_1428a6fb0(plVar11,&local_168,local_170);
    if (local_168 != (undefined8 *)0x0) {
      FMemory::Free();
    }
    if (puVar10 != (undefined8 *)0x0) {
      lVar16 = 0;
      if (puVar10[0x5a] != 0) {
        lVar16 = *(longlong *)(puVar10[0x5a] + 0x28);
      }
      lVar9 = puVar10[0x24];
      if (lVar9 == 0) {
        lVar9 = FUN_1423407b0(puVar10);
      }
      if ((lVar16 != 0) && (lVar9 != 0)) {
        local_138 = (undefined8 *)FUN_1428cccb0(lVar9,lVar16);
        puVar19 = (undefined8 *)puVar10[0x5f];
        puVar14 = puVar19 + (longlong)*(int *)(puVar10 + 0x60) * 0x10;
        local_158 = puVar14;
        if (puVar19 != puVar14) {
          do {
            puVar10 = (undefined8 *)FName::ToString(&DAT_1468623c0);
            iVar20 = *(int *)(puVar10 + 1);
            local_1a8 = (undefined8 *)*puVar10;
            *puVar10 = 0;
            local_1a0._0_4_ = *(float *)(puVar10 + 1);
            local_1a0._4_4_ = *(int *)((longlong)puVar10 + 0xc);
            puVar10[1] = 0;
            iVar17 = (int)(float)local_1a0;
            if (local_1a0._4_4_ < (int)((2 - (uint)(iVar20 != 0)) + (int)(float)local_1a0)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a8);
              iVar17 = (int)(float)local_1a0;
            }
            local_1a0._0_4_ = (float)((2 - (uint)(iVar17 != 0)) + iVar17);
            puVar10 = local_1a8;
            iVar21 = local_1a0._4_4_;
            iVar20 = (int)(float)local_1a0;
            if (local_1a0._4_4_ < (int)(float)local_1a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar17);
              puVar10 = local_1a8;
              iVar21 = local_1a0._4_4_;
              iVar20 = (int)(float)local_1a0;
            }
            local_1a8 = (undefined8 *)0x0;
            local_1a0 = 0;
            lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
            *(undefined2 *)((longlong)puVar10 + lVar16 * 2) = 0x2e;
            *(undefined2 *)((longlong)puVar10 + (lVar16 + 1) * 2) = 0;
            puVar6 = (undefined8 *)FName::ToString(puVar19,&local_148);
            if (iVar20 < 2) {
              puVar15 = (undefined8 *)*puVar6;
              *puVar6 = 0;
              iVar21 = *(int *)(puVar6 + 1);
              puVar6[1] = 0;
              if (puVar10 != (undefined8 *)0x0) {
                FMemory::Free(puVar10);
              }
            }
            else {
              iVar17 = *(int *)(puVar6 + 1) + -1;
              if (*(int *)(puVar6 + 1) == 0) {
                iVar17 = 0;
              }
              if ((iVar20 != 0) || (iVar5 = 1, iVar17 == 0)) {
                iVar5 = 0;
              }
              local_198 = puVar10;
              local_190._4_4_ = iVar21;
              if (iVar21 < iVar20 + iVar5 + iVar17) {
                local_190._0_4_ = (float)iVar20;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
                iVar20 = (int)(float)local_190;
              }
              pvVar3 = (void *)*puVar6;
              puVar15 = local_198;
              iVar21 = iVar20;
              if (iVar17 != 0) {
                iVar21 = iVar17 + (uint)(iVar20 == 0) + iVar20;
                local_190 = CONCAT44(local_190._4_4_,iVar21);
                if (local_190._4_4_ < iVar21) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar20);
                  iVar21 = (int)(float)local_190;
                }
                puVar15 = local_198;
                puVar22 = (undefined2 *)
                          ((longlong)local_198 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar17 * 2);
                puVar22[iVar17] = 0;
              }
              local_198 = (undefined8 *)0x0;
              local_190 = 0;
              puVar14 = local_158;
            }
            if (local_120[0] != 0) {
              FMemory::Free();
            }
            if (local_148 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            puVar10 = (undefined8 *)&DAT_143f3eda8;
            if (iVar21 != 0) {
              puVar10 = puVar15;
            }
            FName::FName(&local_128,puVar10,1);
            cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_128);
            if (cVar4 != '\0') {
              local_170[0] = 0.0;
              cVar4 = UMaterialParameterCollectionInstance::GetScalarParameterValue
                                (local_138,*puVar19,local_170);
              if (cVar4 != '\0') {
                local_188[0] = 0;
                puVar10 = (undefined8 *)FName::ToString(puVar19,&local_180);
                if (*(int *)(puVar10 + 1) == 0) {
                  puVar22 = &DAT_143f3eda8;
                }
                else {
                  puVar22 = (undefined2 *)*puVar10;
                }
                FString::PrintfImpl(&local_168,L"Material Parameter %s: %.3f",puVar22,
                                    (double)local_170[0]);
                FUN_1428a6fb0(local_100,&local_168,local_188);
                if (local_168 != (undefined8 *)0x0) {
                  FMemory::Free();
                }
                if (local_180 != (undefined2 *)0x0) {
                  FMemory::Free();
                }
              }
            }
            if (puVar15 != (undefined8 *)0x0) {
              FMemory::Free(puVar15);
            }
            puVar19 = puVar19 + 0x10;
          } while (puVar19 != puVar14);
        }
        puVar19 = (undefined8 *)local_110[0x61];
        puVar14 = puVar19 + (longlong)*(int *)(local_110 + 0x62) * 0x3b;
        puVar10 = local_110;
        local_128 = puVar14;
        if (puVar19 != puVar14) {
          do {
            puVar10 = (undefined8 *)FName::ToString(&DAT_1468623c0);
            iVar20 = *(int *)(puVar10 + 1);
            local_1a8 = (undefined8 *)*puVar10;
            *puVar10 = 0;
            local_1a0._0_4_ = *(float *)(puVar10 + 1);
            local_1a0._4_4_ = *(int *)((longlong)puVar10 + 0xc);
            puVar10[1] = 0;
            iVar17 = (int)(float)local_1a0;
            if (local_1a0._4_4_ < (int)((2 - (uint)(iVar20 != 0)) + (int)(float)local_1a0)) {
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a8);
              iVar17 = (int)(float)local_1a0;
            }
            local_1a0._0_4_ = (float)((2 - (uint)(iVar17 != 0)) + iVar17);
            puVar10 = local_1a8;
            iVar21 = local_1a0._4_4_;
            iVar20 = (int)(float)local_1a0;
            if (local_1a0._4_4_ < (int)(float)local_1a0) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar17);
              puVar10 = local_1a8;
              iVar21 = local_1a0._4_4_;
              iVar20 = (int)(float)local_1a0;
            }
            local_1a8 = (undefined8 *)0x0;
            local_1a0 = 0;
            lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
            *(undefined2 *)((longlong)puVar10 + lVar16 * 2) = 0x2e;
            *(undefined2 *)((longlong)puVar10 + (lVar16 + 1) * 2) = 0;
            puVar6 = (undefined8 *)FName::ToString(puVar19,&local_180);
            if (iVar20 < 2) {
              puVar15 = (undefined8 *)*puVar6;
              *puVar6 = 0;
              iVar21 = *(int *)(puVar6 + 1);
              puVar6[1] = 0;
              if (puVar10 != (undefined8 *)0x0) {
                FMemory::Free(puVar10);
              }
            }
            else {
              iVar17 = *(int *)(puVar6 + 1) + -1;
              if (*(int *)(puVar6 + 1) == 0) {
                iVar17 = 0;
              }
              if ((iVar20 != 0) || (iVar5 = 1, iVar17 == 0)) {
                iVar5 = 0;
              }
              local_198 = puVar10;
              local_190._4_4_ = iVar21;
              if (iVar21 < iVar20 + iVar17 + iVar5) {
                local_190._0_4_ = (float)iVar20;
                TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
                iVar20 = (int)(float)local_190;
              }
              pvVar3 = (void *)*puVar6;
              puVar15 = local_198;
              iVar21 = iVar20;
              if (iVar17 != 0) {
                iVar21 = (uint)(iVar20 == 0) + iVar20 + iVar17;
                local_190 = CONCAT44(local_190._4_4_,iVar21);
                if (local_190._4_4_ < iVar21) {
                  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,iVar20);
                  iVar21 = (int)(float)local_190;
                }
                puVar15 = local_198;
                puVar22 = (undefined2 *)
                          ((longlong)local_198 + ((longlong)iVar20 - (ulonglong)(iVar20 != 0)) * 2);
                _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar17 * 2);
                puVar22[iVar17] = 0;
              }
              local_198 = (undefined8 *)0x0;
              local_190 = 0;
              puVar14 = local_128;
            }
            if (local_120[0] != 0) {
              FMemory::Free();
            }
            if (local_180 != (undefined2 *)0x0) {
              FMemory::Free();
            }
            puVar10 = (undefined8 *)&DAT_143f3eda8;
            if (iVar21 != 0) {
              puVar10 = puVar15;
            }
            FName::FName(&local_158,puVar10,1);
            cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_158);
            if ((cVar4 != '\0') &&
               (cVar4 = UMaterialParameterCollectionInstance::GetVectorParameterValue
                                  (local_138,*puVar19,&local_148), cVar4 != '\0')) {
              local_188[0] = 0;
              puVar10 = (undefined8 *)FName::ToString(puVar19,local_e8);
              if (*(int *)(puVar10 + 1) == 0) {
                puVar22 = &DAT_143f3eda8;
              }
              else {
                puVar22 = (undefined2 *)*puVar10;
              }
              local_1b8 = (double)local_13c;
              local_1c0 = (double)local_140;
              local_1c8 = (double)local_148._4_4_;
              FString::PrintfImpl(&local_168,L"Material Parameter %s: <%.3f, %.3f, %.3f, %.3f>",
                                  puVar22,(double)(float)local_148);
              FUN_1428a6fb0(local_100,&local_168,local_188);
              if (local_168 != (undefined8 *)0x0) {
                FMemory::Free();
              }
              if (local_e8[0] != 0) {
                FMemory::Free();
              }
            }
            if (puVar15 != (undefined8 *)0x0) {
              FMemory::Free(puVar15);
            }
            puVar19 = puVar19 + 0x3b;
            puVar10 = local_110;
          } while (puVar19 != puVar14);
        }
      }
      puVar19 = (undefined8 *)puVar10[99];
      puVar14 = puVar19 + (longlong)*(int *)(puVar10 + 100) * 0x13;
      local_128 = puVar14;
      if (puVar19 != puVar14) {
        do {
          puVar10 = (undefined8 *)FName::ToString(puVar19);
          iVar20 = *(int *)(puVar10 + 1);
          local_1a8 = (undefined8 *)*puVar10;
          *puVar10 = 0;
          local_1a0._0_4_ = *(float *)(puVar10 + 1);
          local_1a0._4_4_ = *(int *)((longlong)puVar10 + 0xc);
          puVar10[1] = 0;
          iVar17 = (int)(float)local_1a0;
          if (local_1a0._4_4_ < (int)((2 - (uint)(iVar20 != 0)) + (int)(float)local_1a0)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_1a8);
            iVar17 = (int)(float)local_1a0;
          }
          local_1a0._0_4_ = (float)((2 - (uint)(iVar17 != 0)) + iVar17);
          puVar10 = local_1a8;
          iVar20 = local_1a0._4_4_;
          fVar25 = (float)local_1a0;
          if (local_1a0._4_4_ < (int)(float)local_1a0) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,iVar17);
            puVar10 = local_1a8;
            iVar20 = local_1a0._4_4_;
            fVar25 = (float)local_1a0;
          }
          local_1a8 = (undefined8 *)0x0;
          local_1a0 = 0;
          lVar16 = (longlong)iVar17 - (ulonglong)(iVar17 != 0);
          *(undefined2 *)((longlong)puVar10 + lVar16 * 2) = 0x2e;
          *(undefined2 *)((longlong)puVar10 + (lVar16 + 1) * 2) = 0;
          puVar6 = (undefined8 *)FName::ToString(puVar19 + 1,local_d8);
          if ((int)fVar25 < 2) {
            puVar15 = (undefined8 *)*puVar6;
            *puVar6 = 0;
            fVar25 = *(float *)(puVar6 + 1);
            puVar6[1] = 0;
            if (puVar10 != (undefined8 *)0x0) {
              FMemory::Free(puVar10);
            }
          }
          else {
            iVar17 = *(int *)(puVar6 + 1) + -1;
            if (*(int *)(puVar6 + 1) == 0) {
              iVar17 = 0;
            }
            if ((fVar25 != 0.0) || (iVar21 = 1, iVar17 == 0)) {
              iVar21 = 0;
            }
            local_198 = puVar10;
            local_190._4_4_ = iVar20;
            if (iVar20 < (int)fVar25 + iVar21 + iVar17) {
              local_190._0_4_ = fVar25;
              TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_198);
              fVar25 = (float)local_190;
            }
            pvVar3 = (void *)*puVar6;
            puVar15 = local_198;
            if (iVar17 != 0) {
              fVar24 = (float)(iVar17 + (uint)(fVar25 == 0.0) + (int)fVar25);
              local_190 = CONCAT44(local_190._4_4_,fVar24);
              if (local_190._4_4_ < (int)fVar24) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,fVar25);
                fVar24 = (float)local_190;
              }
              puVar15 = local_198;
              puVar22 = (undefined2 *)
                        ((longlong)local_198 +
                        ((longlong)(int)fVar25 - (ulonglong)(fVar25 != 0.0)) * 2);
              _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar17 * 2);
              puVar22[iVar17] = 0;
              fVar25 = fVar24;
            }
            local_198 = (undefined8 *)0x0;
            local_190 = 0;
            puVar14 = local_128;
          }
          puVar22 = (undefined2 *)0x0;
          if (local_e8[0] != 0) {
            FMemory::Free();
          }
          if (local_d8[0] != 0) {
            FMemory::Free();
          }
          plVar11 = (longlong *)FName::ToString(&DAT_1468623c0);
          lVar16 = plVar11[1];
          local_138 = (undefined8 *)*plVar11;
          *plVar11 = 0;
          local_130._0_4_ = (int)plVar11[1];
          local_130._4_4_ = *(int *)((longlong)plVar11 + 0xc);
          plVar11[1] = 0;
          iVar20 = (int)local_130;
          if (local_130._4_4_ < (int)((2 - (uint)((int)lVar16 != 0)) + (int)local_130)) {
            TArray<wchar_t,FDefaultAllocator>::ResizeTo(&local_138);
            iVar20 = (int)local_130;
          }
          local_130._0_4_ = (2 - (uint)(iVar20 != 0)) + iVar20;
          puVar10 = local_138;
          iVar17 = (int)local_130;
          iVar21 = local_130._4_4_;
          if (local_130._4_4_ < (int)local_130) {
            TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_138,iVar20);
            puVar10 = local_138;
            iVar17 = (int)local_130;
            iVar21 = local_130._4_4_;
          }
          iStack_15c = iVar21;
          local_138 = (undefined8 *)0x0;
          lVar16 = (longlong)iVar20 - (ulonglong)(iVar20 != 0);
          local_130 = 0;
          *(undefined2 *)((longlong)puVar10 + lVar16 * 2) = 0x2e;
          *(undefined2 *)((longlong)puVar10 + lVar16 * 2 + 2) = 0;
          local_168 = puVar10;
          local_160 = iVar17;
          if (iVar17 < 2) {
            local_148 = (undefined2 *)0x0;
            local_140 = fVar25;
            if (fVar25 == 0.0) {
              local_13c = 0.0;
              fVar24 = fVar25;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,fVar25,0);
              puVar22 = local_148;
              _guard_xfg_dispatch_icall_nop(local_148,puVar15,(longlong)(int)fVar25 * 2);
              fVar24 = local_140;
            }
          }
          else {
            puVar12 = (undefined2 *)(ulonglong)((int)fVar25 - 1);
            if (fVar25 == 0.0) {
              puVar12 = puVar22;
            }
            iVar20 = (int)puVar12;
            if ((iVar17 != 0) || (puVar12 = (undefined2 *)0x1, iVar20 == 0)) {
              puVar12 = puVar22;
            }
            TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                      (&local_180,&local_168,iVar20 + (int)puVar12);
            uVar18 = local_178;
            puVar22 = local_180;
            if (iVar20 != 0) {
              iVar17 = (int)(float)local_178;
              lVar16 = (longlong)(int)(float)local_178;
              iVar21 = (uint)((float)local_178 == 0.0) + iVar20 + (int)(float)local_178;
              local_178 = CONCAT44(local_178._4_4_,iVar21);
              if ((int)local_178._4_4_ < iVar21) {
                TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,uVar18 & 0xffffffff);
              }
              puVar22 = local_180;
              puVar12 = local_180 + (lVar16 - (ulonglong)(iVar17 != 0));
              _guard_xfg_dispatch_icall_nop(puVar12,puVar15,(longlong)iVar20 * 2);
              puVar12[iVar20] = 0;
            }
            fVar24 = (float)local_178;
            local_13c = local_178._4_4_;
            local_178 = 0;
            local_180 = (undefined2 *)0x0;
            puVar10 = local_168;
          }
          if (puVar10 != (undefined8 *)0x0) {
            FMemory::Free(puVar10);
          }
          if (local_c8[0] != 0) {
            FMemory::Free();
          }
          puVar12 = &DAT_143f3eda8;
          if (fVar24 != 0.0) {
            puVar12 = puVar22;
          }
          FName::FName(&local_158,puVar12,1);
          cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_158);
          if ((cVar4 != '\0') && ((float *)puVar19[3] != (float *)0x0)) {
            local_188[0] = 0;
            puVar10 = (undefined8 *)&DAT_143f3eda8;
            if (fVar25 != 0.0) {
              puVar10 = puVar15;
            }
            FString::PrintfImpl(local_120,L"%s: %.3f",puVar10,(double)*(float *)puVar19[3]);
            FUN_1428a6fb0(local_100,local_120,local_188);
            if (local_120[0] != 0) {
              FMemory::Free();
            }
          }
          if (puVar22 != (undefined2 *)0x0) {
            FMemory::Free(puVar22);
          }
          if (puVar15 != (undefined8 *)0x0) {
            FMemory::Free(puVar15);
          }
          puVar19 = puVar19 + 0x13;
          puVar10 = local_110;
        } while (puVar19 != puVar14);
      }
      lVar16 = puVar10[0x65];
      lVar9 = (longlong)*(int *)(puVar10 + 0x66) * 0x1f0 + lVar16;
      for (; lVar16 != lVar9; lVar16 = lVar16 + 0x1f0) {
        lVar13 = FName::ToString(lVar16,local_c8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_198,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar20 = (int)(float)local_190;
        lVar13 = (longlong)(int)(float)local_190;
        iVar21 = (2 - (uint)((float)local_190 != 0.0)) + (int)(float)local_190;
        iVar17 = local_190._4_4_;
        if (local_190._4_4_ < iVar21) {
          uVar18 = local_190 & 0xffffffff;
          local_190._0_4_ = (float)iVar21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,uVar18);
          iVar17 = local_190._4_4_;
          iVar21 = (int)(float)local_190;
        }
        puVar19 = local_198;
        local_168 = local_198;
        local_198 = (undefined8 *)0x0;
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        local_190 = 0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        local_160 = iVar21;
        iStack_15c = iVar17;
        puVar14 = (undefined8 *)FName::ToString(lVar16 + 8,local_d8);
        if (iVar21 < 2) {
          puVar10 = (undefined8 *)*puVar14;
          *puVar14 = 0;
          fVar25 = *(float *)(puVar14 + 1);
          puVar14[1] = 0;
        }
        else {
          iVar20 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar20 = 0;
          }
          if ((iVar21 != 0) || (iVar17 = 1, iVar20 == 0)) {
            iVar17 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_1a8,&local_168,iVar17 + iVar20);
          uVar18 = local_1a0;
          pvVar3 = (void *)*puVar14;
          puVar10 = local_1a8;
          if (iVar20 != 0) {
            iVar17 = (int)(float)local_1a0;
            lVar13 = (longlong)(int)(float)local_1a0;
            iVar21 = (uint)((float)local_1a0 == 0.0) + (int)(float)local_1a0 + iVar20;
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar21);
            if (local_1a0._4_4_ < iVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar18 & 0xffffffff);
            }
            puVar10 = local_1a8;
            puVar22 = (undefined2 *)((longlong)local_1a8 + (lVar13 - (ulonglong)(iVar17 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar20 * 2);
            puVar22[iVar20] = 0;
          }
          fVar25 = (float)local_1a0;
          local_1a8 = (undefined8 *)0x0;
          local_1a0 = 0;
          puVar19 = local_168;
        }
        puVar22 = (undefined2 *)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        lVar13 = FName::ToString(&DAT_1468623c0,local_e8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_158,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar20 = (int)local_150;
        lVar13 = (longlong)(int)local_150;
        iVar17 = (2 - (uint)((int)local_150 != 0)) + (int)local_150;
        if (local_150._4_4_ < iVar17) {
          uVar18 = local_150 & 0xffffffff;
          local_150._0_4_ = iVar17;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar18);
          iVar17 = (int)local_150;
        }
        puVar19 = local_158;
        local_130 = CONCAT44(local_150._4_4_,iVar17);
        local_150 = 0;
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        local_138 = local_158;
        local_158 = (undefined8 *)0x0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        if (iVar17 < 2) {
          local_148 = (undefined2 *)0x0;
          local_140 = fVar25;
          if (fVar25 == 0.0) {
            local_13c = 0.0;
            fVar24 = fVar25;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,fVar25,0);
            puVar22 = local_148;
            _guard_xfg_dispatch_icall_nop(local_148,puVar10,(longlong)(int)fVar25 * 2);
            fVar24 = local_140;
          }
        }
        else {
          puVar12 = (undefined2 *)(ulonglong)((int)fVar25 - 1);
          if (fVar25 == 0.0) {
            puVar12 = puVar22;
          }
          iVar20 = (int)puVar12;
          if ((iVar17 != 0) || (iVar17 = 1, iVar20 == 0)) {
            iVar17 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_180,&local_138,iVar17 + iVar20);
          uVar18 = local_178;
          puVar22 = local_180;
          if (iVar20 != 0) {
            iVar17 = (int)(float)local_178;
            lVar13 = (longlong)(int)(float)local_178;
            iVar21 = (uint)((float)local_178 == 0.0) + iVar20 + (int)(float)local_178;
            local_178 = CONCAT44(local_178._4_4_,iVar21);
            if ((int)local_178._4_4_ < iVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,uVar18 & 0xffffffff);
            }
            puVar22 = local_180;
            puVar12 = local_180 + (lVar13 - (ulonglong)(iVar17 != 0));
            _guard_xfg_dispatch_icall_nop(puVar12,puVar10,(longlong)iVar20 * 2);
            puVar12[iVar20] = 0;
          }
          local_13c = local_178._4_4_;
          local_180 = (undefined2 *)0x0;
          fVar24 = (float)local_178;
          local_178 = 0;
          puVar19 = local_138;
        }
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_e8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = &DAT_143f3eda8;
        if (fVar24 != 0.0) {
          puVar12 = puVar22;
        }
        FName::FName(&local_128,puVar12);
        cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_128);
        if ((cVar4 != '\0') && (pfVar1 = *(float **)(lVar16 + 0x18), pfVar1 != (float *)0x0)) {
          local_188[0] = 0;
          local_1b8 = (double)pfVar1[3];
          puVar19 = (undefined8 *)&DAT_143f3eda8;
          if (fVar25 != 0.0) {
            puVar19 = puVar10;
          }
          local_1c0 = (double)pfVar1[2];
          local_1c8 = (double)pfVar1[1];
          FString::PrintfImpl(local_120,L"%s: <%.3f, %.3f, %.3f, %.3>",puVar19,(double)*pfVar1);
          FUN_1428a6fb0(local_100,local_120);
          if (local_120[0] != 0) {
            FMemory::Free();
          }
        }
        if (puVar22 != (undefined2 *)0x0) {
          FMemory::Free(puVar22);
        }
        if (puVar10 != (undefined8 *)0x0) {
          FMemory::Free(puVar10);
        }
      }
      lVar16 = local_110[0x67];
      lVar9 = (longlong)*(int *)(local_110 + 0x68) * 0x1e8 + lVar16;
      for (; lVar16 != lVar9; lVar16 = lVar16 + 0x1e8) {
        lVar13 = FName::ToString(lVar16,local_c8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_198,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar20 = (int)(float)local_190;
        lVar13 = (longlong)(int)(float)local_190;
        iVar21 = (2 - (uint)((float)local_190 != 0.0)) + (int)(float)local_190;
        iVar17 = local_190._4_4_;
        if (local_190._4_4_ < iVar21) {
          uVar18 = local_190 & 0xffffffff;
          local_190._0_4_ = (float)iVar21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,uVar18);
          iVar17 = local_190._4_4_;
          iVar21 = (int)(float)local_190;
        }
        puVar19 = local_198;
        local_168 = local_198;
        local_198 = (undefined8 *)0x0;
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        local_190 = 0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        local_160 = iVar21;
        iStack_15c = iVar17;
        puVar14 = (undefined8 *)FName::ToString(lVar16 + 8,local_d8);
        if (iVar21 < 2) {
          puVar10 = (undefined8 *)*puVar14;
          *puVar14 = 0;
          fVar25 = *(float *)(puVar14 + 1);
          puVar14[1] = 0;
        }
        else {
          iVar20 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar20 = 0;
          }
          if ((iVar21 != 0) || (iVar17 = 1, iVar20 == 0)) {
            iVar17 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_1a8,&local_168,iVar20 + iVar17);
          uVar18 = local_1a0;
          pvVar3 = (void *)*puVar14;
          puVar10 = local_1a8;
          if (iVar20 != 0) {
            iVar17 = (int)(float)local_1a0;
            lVar13 = (longlong)(int)(float)local_1a0;
            iVar21 = (uint)((float)local_1a0 == 0.0) + iVar20 + (int)(float)local_1a0;
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar21);
            if (local_1a0._4_4_ < iVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar18 & 0xffffffff);
            }
            puVar10 = local_1a8;
            puVar22 = (undefined2 *)((longlong)local_1a8 + (lVar13 - (ulonglong)(iVar17 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar20 * 2);
            puVar22[iVar20] = 0;
          }
          fVar25 = (float)local_1a0;
          local_1a8 = (undefined8 *)0x0;
          local_1a0 = 0;
          puVar19 = local_168;
        }
        puVar22 = (undefined2 *)0x0;
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        lVar13 = FName::ToString(&DAT_1468623c0,local_e8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_158,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar20 = (int)local_150;
        lVar13 = (longlong)(int)local_150;
        iVar17 = (2 - (uint)((int)local_150 != 0)) + (int)local_150;
        if (local_150._4_4_ < iVar17) {
          uVar18 = local_150 & 0xffffffff;
          local_150._0_4_ = iVar17;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar18);
          iVar17 = (int)local_150;
        }
        puVar19 = local_158;
        local_130 = CONCAT44(local_150._4_4_,iVar17);
        local_150 = 0;
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        local_138 = local_158;
        local_158 = (undefined8 *)0x0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        if (iVar17 < 2) {
          local_148 = (undefined2 *)0x0;
          local_140 = fVar25;
          if (fVar25 == 0.0) {
            local_13c = 0.0;
            fVar24 = fVar25;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_148,fVar25,0);
            puVar22 = local_148;
            _guard_xfg_dispatch_icall_nop(local_148,puVar10,(longlong)(int)fVar25 * 2);
            fVar24 = local_140;
          }
        }
        else {
          puVar12 = (undefined2 *)(ulonglong)((int)fVar25 - 1);
          if (fVar25 == 0.0) {
            puVar12 = puVar22;
          }
          iVar20 = (int)puVar12;
          if ((iVar17 != 0) || (iVar17 = 1, iVar20 == 0)) {
            iVar17 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_180,&local_138,iVar17 + iVar20);
          uVar18 = local_178;
          puVar22 = local_180;
          if (iVar20 != 0) {
            iVar17 = (int)(float)local_178;
            lVar13 = (longlong)(int)(float)local_178;
            iVar21 = (uint)((float)local_178 == 0.0) + iVar20 + (int)(float)local_178;
            local_178 = CONCAT44(local_178._4_4_,iVar21);
            if ((int)local_178._4_4_ < iVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,uVar18 & 0xffffffff);
            }
            puVar22 = local_180;
            puVar12 = local_180 + (lVar13 - (ulonglong)(iVar17 != 0));
            _guard_xfg_dispatch_icall_nop(puVar12,puVar10,(longlong)iVar20 * 2);
            puVar12[iVar20] = 0;
          }
          local_13c = local_178._4_4_;
          local_180 = (undefined2 *)0x0;
          fVar24 = (float)local_178;
          local_178 = 0;
          puVar19 = local_138;
        }
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_e8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = &DAT_143f3eda8;
        if (fVar24 != 0.0) {
          puVar12 = puVar22;
        }
        FName::FName(&local_128,puVar12);
        cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_128);
        if ((cVar4 != '\0') && (pbVar2 = *(byte **)(lVar16 + 0x18), pbVar2 != (byte *)0x0)) {
          local_188[0] = 0;
          puVar19 = (undefined8 *)&DAT_143f3eda8;
          if (fVar25 != 0.0) {
            puVar19 = puVar10;
          }
          local_1c0 = (double)CONCAT44(local_1c0._4_4_,(uint)*pbVar2);
          local_1c8 = (double)CONCAT44(local_1c8._4_4_,(uint)pbVar2[1]);
          FString::PrintfImpl(local_120,L"%s: <%d, %d, %d>",puVar19,pbVar2[2]);
          FUN_1428a6fb0(local_100,local_120);
          if (local_120[0] != 0) {
            FMemory::Free();
          }
        }
        if (puVar22 != (undefined2 *)0x0) {
          FMemory::Free(puVar22);
        }
        if (puVar10 != (undefined8 *)0x0) {
          FMemory::Free(puVar10);
        }
      }
      lVar16 = local_110[0x69];
      lVar9 = (longlong)*(int *)(local_110 + 0x6a) * 0x1f0 + lVar16;
      puVar19 = local_f8;
      puVar14 = local_f0;
      for (; local_f8 = puVar19, local_f0 = puVar14, lVar16 != lVar9; lVar16 = lVar16 + 0x1f0) {
        lVar13 = FName::ToString(lVar16,local_c8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_198,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar20 = (int)(float)local_190;
        lVar13 = (longlong)(int)(float)local_190;
        iVar21 = (2 - (uint)((float)local_190 != 0.0)) + (int)(float)local_190;
        iVar17 = local_190._4_4_;
        if (local_190._4_4_ < iVar21) {
          uVar18 = local_190 & 0xffffffff;
          local_190._0_4_ = (float)iVar21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_198,uVar18);
          iVar17 = local_190._4_4_;
          iVar21 = (int)(float)local_190;
        }
        puVar19 = local_198;
        local_168 = local_198;
        local_198 = (undefined8 *)0x0;
        lVar13 = lVar13 - (ulonglong)(iVar20 != 0);
        local_190 = 0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        local_160 = iVar21;
        iStack_15c = iVar17;
        puVar14 = (undefined8 *)FName::ToString(lVar16 + 8,local_d8);
        if (iVar21 < 2) {
          puVar10 = (undefined8 *)*puVar14;
          *puVar14 = 0;
          iVar20 = *(int *)(puVar14 + 1);
          puVar14[1] = 0;
        }
        else {
          iVar20 = *(int *)(puVar14 + 1) + -1;
          if (*(int *)(puVar14 + 1) == 0) {
            iVar20 = 0;
          }
          if ((iVar21 != 0) || (iVar17 = 1, iVar20 == 0)) {
            iVar17 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_1a8,&local_168,iVar20 + iVar17);
          uVar18 = local_1a0;
          pvVar3 = (void *)*puVar14;
          puVar10 = local_1a8;
          if (iVar20 != 0) {
            iVar17 = (int)(float)local_1a0;
            lVar13 = (longlong)(int)(float)local_1a0;
            iVar21 = (uint)((float)local_1a0 == 0.0) + iVar20 + (int)(float)local_1a0;
            local_1a0 = CONCAT44(local_1a0._4_4_,iVar21);
            if (local_1a0._4_4_ < iVar21) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_1a8,uVar18 & 0xffffffff);
            }
            puVar10 = local_1a8;
            puVar22 = (undefined2 *)((longlong)local_1a8 + (lVar13 - (ulonglong)(iVar17 != 0)) * 2);
            _guard_xfg_dispatch_icall_nop(puVar22,pvVar3,(longlong)iVar20 * 2);
            puVar22[iVar20] = 0;
          }
          iVar20 = (int)(float)local_1a0;
          local_1a8 = (undefined8 *)0x0;
          local_1a0 = 0;
          puVar19 = local_168;
        }
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_c8[0] != 0) {
          FMemory::Free();
        }
        if (local_d8[0] != 0) {
          FMemory::Free();
        }
        lVar13 = FName::ToString(&DAT_1468623c0,local_e8);
        TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                  (&local_158,lVar13,2 - (uint)(*(int *)(lVar13 + 8) != 0));
        iVar17 = (int)local_150;
        lVar13 = (longlong)(int)local_150;
        iVar21 = (2 - (uint)((int)local_150 != 0)) + (int)local_150;
        if (local_150._4_4_ < iVar21) {
          uVar18 = local_150 & 0xffffffff;
          local_150._0_4_ = iVar21;
          TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_158,uVar18);
          iVar21 = (int)local_150;
        }
        puVar19 = local_158;
        local_130 = CONCAT44(local_150._4_4_,iVar21);
        local_150 = 0;
        lVar13 = lVar13 - (ulonglong)(iVar17 != 0);
        local_138 = local_158;
        local_158 = (undefined8 *)0x0;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2) = 0x2e;
        *(undefined2 *)((longlong)puVar19 + lVar13 * 2 + 2) = 0;
        if (iVar21 < 2) {
          local_148 = (undefined2 *)0x0;
          local_1c8 = (double)((ulonglong)local_1c8 & 0xffffffff00000000);
          TArray<wchar_t,FDefaultAllocator>::CopyToEmpty<wchar_t>(&local_148,puVar10,iVar20,0);
          puVar22 = local_148;
        }
        else {
          iVar17 = iVar20 + -1;
          if (iVar20 == 0) {
            iVar17 = 0;
          }
          if ((iVar21 != 0) || (iVar21 = 1, iVar17 == 0)) {
            iVar21 = 0;
          }
          TArray<wchar_t,FDefaultAllocator>::TArray<wchar_t,FDefaultAllocator><wchar_t>
                    (&local_180,&local_138,iVar21 + iVar17);
          uVar18 = local_178;
          puVar22 = local_180;
          if (iVar17 != 0) {
            iVar21 = (int)(float)local_178;
            lVar13 = (longlong)(int)(float)local_178;
            iVar5 = (uint)((float)local_178 == 0.0) + iVar17 + (int)(float)local_178;
            local_178 = CONCAT44(local_178._4_4_,iVar5);
            if ((int)local_178._4_4_ < iVar5) {
              TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_180,uVar18 & 0xffffffff);
            }
            puVar22 = local_180;
            puVar12 = local_180 + (lVar13 - (ulonglong)(iVar21 != 0));
            _guard_xfg_dispatch_icall_nop(puVar12,puVar10,(longlong)iVar17 * 2);
            puVar12[iVar17] = 0;
          }
          local_13c = local_178._4_4_;
          local_180 = (undefined2 *)0x0;
          local_140 = (float)local_178;
          local_178 = 0;
          puVar19 = local_138;
        }
        fVar25 = local_140;
        if (puVar19 != (undefined8 *)0x0) {
          FMemory::Free(puVar19);
        }
        if (local_e8[0] != 0) {
          FMemory::Free();
        }
        puVar12 = &DAT_143f3eda8;
        if (fVar25 != 0.0) {
          puVar12 = puVar22;
        }
        FName::FName(&local_128,puVar12);
        cVar4 = (**(code **)(*local_108 + 0x740))(local_108,&local_128);
        if ((cVar4 != '\0') && (lVar13 = *(longlong *)(lVar16 + 0x18), lVar13 != 0)) {
          local_188[0] = 0;
          local_1b8 = (double)*(float *)(lVar13 + 0xc);
          puVar19 = (undefined8 *)&DAT_143f3eda8;
          if (iVar20 != 0) {
            puVar19 = puVar10;
          }
          local_1c0 = (double)*(float *)(lVar13 + 8);
          local_1c8 = (double)*(float *)(lVar13 + 4);
          FString::PrintfImpl(local_120,L"%s: <%.3f, %.3f, %.3f, %.3>",puVar19);
          FUN_1428a6fb0(local_100,local_120);
          if (local_120[0] != 0) {
            FMemory::Free();
          }
        }
        if (puVar22 != (undefined2 *)0x0) {
          FMemory::Free(puVar22);
        }
        if (puVar10 != (undefined8 *)0x0) {
          FMemory::Free(puVar10);
        }
        puVar19 = local_f8;
        puVar14 = local_f0;
      }
    }
    if (puVar19 != (undefined8 *)0x0) {
      FMemory::Free(puVar19);
    }
    if (puVar14 != (undefined8 *)0x0) {
      FMemory::Free(puVar14);
    }
  }
  return;
}



// FUNCTION 1408e6970 FUN_1408e6970 body=93 status=ok
// SIG undefined FUN_1408e6970(void)

void FUN_1408e6970(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_142394230();
  lVar1 = *(longlong *)(param_1 + 0x120);
  if ((lVar1 == 0) && (lVar1 = FUN_1423407b0(param_1), lVar1 == 0)) {
    return;
  }
  plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
  if ((plVar2 != (longlong *)0x0) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001408e69c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x58))(plVar2,param_1);
    return;
  }
  return;
}



// FUNCTION 1408e69d0 FUN_1408e69d0 body=51 status=ok
// SIG undefined FUN_1408e69d0(void)

void FUN_1408e69d0(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_1408e79c0(uVar1,0);
    return;
  }
  return;
}



// FUNCTION 1408e6a10 FUN_1408e6a10 body=72 status=ok
// SIG undefined FUN_1408e6a10(void)

void FUN_1408e6a10(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408e6a4f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x18))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1408e6a60 PerformQuery body=1179 status=ok
// SIG undefined PerformQuery(void)

void FMatineeUtils::FMatineePropertyQuery::PerformQuery
               (undefined8 *param_1,longlong param_2,undefined8 param_3,void *param_4,
               longlong *param_5)

{
  int iVar1;
  void *pvVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined2 *puVar7;
  ulonglong uVar8;
  uint uVar9;
  undefined2 *puVar10;
  undefined8 in_stack_ffffffffffffff68;
  undefined4 uVar11;
  undefined2 *local_88;
  undefined2 *local_80;
  undefined8 local_78;
  void *local_70;
  ulonglong local_68;
  undefined2 *local_60;
  undefined8 local_58;
  void *local_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  
  uVar11 = (undefined4)((ulonglong)in_stack_ffffffffffffff68 >> 0x20);
  local_78 = 2;
  local_60 = (undefined2 *)0x0;
  local_58 = 0;
  local_70 = (void *)0x0;
  local_68 = 0;
  local_80 = (undefined2 *)0x0;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&local_80,0);
  puVar10 = local_80;
  FGenericPlatformString::Memcpy(local_80,&DAT_143f73c90,4);
  cVar3 = FUN_1404e14f0(param_5,&local_80,&local_60,&local_70,CONCAT44(uVar11,1),0);
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  puVar10 = local_60;
  if (cVar3 == '\0') {
    if ((int)param_5[1] == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*param_5;
    }
    FName::FName(&local_80,puVar7,0);
    puVar7 = local_80;
    if (((int)local_80 != 0) || ((int)((ulonglong)local_80 >> 0x20) != 0)) {
      if (param_4 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = *(ulonglong *)((longlong)param_4 + 0x38);
      }
      local_40 = 0xffffffff;
      local_3c = 0x101;
      local_3a = 0;
      local_50 = param_4;
      FUN_140472e10(&local_50);
      while (local_48 != 0) {
        if (*(undefined2 **)(local_48 + 0x18) == puVar7) {
          if (local_48 != 0) {
            *param_1 = param_3;
            param_1[1] = local_48;
            param_1[2] = param_2;
            pvVar2 = local_70;
            goto joined_r0x0001408e6d18;
          }
          break;
        }
        local_48 = *(ulonglong *)(local_48 + 0x28);
        FUN_140472e10(&local_50);
      }
    }
    local_80 = (undefined2 *)0x0;
    local_78 = 0;
    UObject::CollectDefaultSubobjects(param_2,&local_80,0);
    uVar8 = 0;
    puVar7 = local_80;
    uVar6 = uVar8;
    if (0 < (int)local_78) {
      do {
        iVar1 = (int)param_5[1];
        pvVar2 = (void *)*param_5;
        local_50 = (void *)0x0;
        local_48 = CONCAT44(local_48._4_4_,iVar1);
        lVar4 = *(longlong *)(uVar8 + (longlong)local_80);
        if (iVar1 == 0) {
          local_48 = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,iVar1,0);
          ::_guard_xfg_dispatch_icall_nop(local_50,pvVar2,(longlong)iVar1 * 2);
        }
        PerformQuery(param_1,lVar4,lVar4,*(undefined8 *)(lVar4 + 0x10),&local_50);
        if (param_1[1] != 0) {
          if (local_80 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          puVar10 = local_60;
          if (local_70 != (void *)0x0) {
            FMemory::Free();
            puVar10 = local_60;
          }
          goto joined_r0x0001408e6ef7;
        }
        uVar9 = (int)uVar6 + 1;
        uVar8 = uVar8 + 8;
        puVar7 = local_80;
        uVar6 = (ulonglong)uVar9;
        puVar10 = local_60;
      } while ((int)uVar9 < (int)local_78);
    }
  }
  else {
    puVar7 = &DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar7 = local_60;
    }
    FName::FName(&local_80,puVar7,0);
    puVar7 = local_80;
    if (((int)local_80 != 0) || ((int)((ulonglong)local_80 >> 0x20) != 0)) {
      if (param_4 == (void *)0x0) {
        local_48 = 0;
      }
      else {
        local_48 = *(ulonglong *)((longlong)param_4 + 0x38);
      }
      local_40 = 0xffffffff;
      local_3c = 0x101;
      local_3a = 0;
      local_50 = param_4;
      FUN_14067b390();
      pvVar2 = local_70;
      uVar6 = local_48;
      while (local_70 = pvVar2, local_48 = uVar6, uVar6 != 0) {
        if (*(undefined2 **)(uVar6 + 0x18) == puVar7) {
          if (uVar6 != 0) {
            lVar4 = (longlong)(int)local_68;
            iVar1 = *(int *)(uVar6 + 0x44);
            local_60 = (undefined2 *)0x0;
            uVar8 = local_58 >> 0x20;
            local_58 = CONCAT44((int)uVar8,(int)local_68);
            if ((int)local_68 == 0) {
              local_58 = local_68 & 0xffffffff;
            }
            else {
              TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_68 & 0xffffffff,0);
              ::_guard_xfg_dispatch_icall_nop(local_60,pvVar2,lVar4 * 2);
            }
            PerformQuery(param_1,param_2,iVar1 + param_2,*(undefined8 *)(uVar6 + 0x70),&local_60);
            goto joined_r0x0001408e6d18;
          }
          break;
        }
        local_48 = *(ulonglong *)(uVar6 + 0x28);
        FUN_14067b390();
        pvVar2 = local_70;
        uVar6 = local_48;
      }
    }
    puVar7 = &DAT_143f3eda8;
    if ((int)local_58 != 0) {
      puVar7 = puVar10;
    }
    FName::FName(&local_80,puVar7,1);
    uVar6 = 0;
    local_60 = (undefined2 *)0x0;
    local_58 = 0;
    UObject::CollectDefaultSubobjects(param_2,&local_60,0);
    puVar7 = local_60;
    if (0 < (int)local_58) {
      local_88 = (undefined2 *)0x0;
      uVar8 = uVar6;
      do {
        lVar4 = *(longlong *)(uVar6 + (longlong)local_60);
        FLinkerLoad::FindSubobjectRedirectName(&local_88,&local_80,*(undefined8 *)(lVar4 + 0x10));
        pvVar2 = local_70;
        puVar7 = local_80;
        if (local_88 != (undefined2 *)0x0) {
          puVar7 = local_88;
        }
        if (*(undefined2 **)(lVar4 + 0x18) == puVar7) {
          lVar5 = (longlong)(int)local_68;
          local_50 = (void *)0x0;
          local_48 = CONCAT44(local_48._4_4_,(int)local_68);
          if ((int)local_68 == 0) {
            local_48 = local_68 & 0xffffffff;
          }
          else {
            TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_68 & 0xffffffff,0);
            ::_guard_xfg_dispatch_icall_nop(local_50,pvVar2,lVar5 * 2);
          }
          PerformQuery(param_1,lVar4,lVar4,*(undefined8 *)(lVar4 + 0x10),&local_50);
          if (local_60 != (undefined2 *)0x0) {
            FMemory::Free();
          }
          goto joined_r0x0001408e6d18;
        }
        uVar9 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar9;
        uVar6 = uVar6 + 8;
        puVar7 = local_60;
      } while ((int)uVar9 < (int)local_58);
    }
  }
  pvVar2 = local_70;
  if (puVar7 != (undefined2 *)0x0) {
    FMemory::Free();
    pvVar2 = local_70;
  }
joined_r0x0001408e6d18:
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
joined_r0x0001408e6ef7:
  if (puVar10 != (undefined2 *)0x0) {
    FMemory::Free(puVar10);
  }
  if (*param_5 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1408e6f00 FUN_1408e6f00 body=51 status=ok
// SIG undefined FUN_1408e6f00(void)

void FUN_1408e6f00(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar2 != '\0') {
    uVar1 = FWeakObjectPtr::Get(param_1 + 0x18);
    FUN_1408e79c0(uVar1,1);
    return;
  }
  return;
}



// FUNCTION 1408e6f40 FUN_1408e6f40 body=88 status=ok
// SIG undefined FUN_1408e6f40(void)

void FUN_1408e6f40(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  
  if (*(longlong **)(param_1 + 0x38) == (longlong *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x148))();
  }
  puVar2 = (undefined8 *)FUN_1408e4230(local_res8,uVar1);
  *(undefined8 *)(param_2 + 0x10) = *puVar2;
  FUN_1408e8d90(param_1);
  FUN_1408e22e0(param_2,param_1 + 8);
  return;
}



// FUNCTION 1408e6fa0 FUN_1408e6fa0 body=830 status=ok
// SIG undefined FUN_1408e6fa0(void)

void FUN_1408e6fa0(longlong param_1)

{
  float *pfVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  float *pfVar11;
  char *pcVar12;
  longlong lVar13;
  longlong *plVar14;
  int iVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  float fVar19;
  float fVar20;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong *local_58;
  uint local_50;
  uint local_4c;
  
  FUN_1422384a0();
  if (*(longlong *)(param_1 + 0x458) == 0) {
    return;
  }
  if ((*(uint *)(param_1 + 8) >> 4 & 1) != 0) {
    return;
  }
  FUN_1408e4690(*(longlong *)(param_1 + 0x458) + 0x2d0,param_1);
  FUN_1408e44c0(*(longlong *)(param_1 + 0x458) + 0x2d0,param_1);
  lVar13 = *(longlong *)(param_1 + 0x458);
  fVar20 = 0.0;
  if (*(char *)(lVar13 + 0x2d8) == '\0') {
    if (*(longlong *)(lVar13 + 0x2d0) == 0) {
      fVar19 = 0.0;
    }
    else {
      fVar19 = *(float *)(*(longlong *)(lVar13 + 0x2d0) + 0x38);
    }
  }
  else {
    fVar19 = *(float *)(lVar13 + 0x2dc);
  }
  plVar10 = (longlong *)0x0;
  *(float *)(lVar13 + 0x378) = *(float *)(param_1 + 0x4b0) / fVar19;
  lVar13 = *(longlong *)(param_1 + 0x4b8);
  if (lVar13 == 0) {
    lVar9 = *(longlong *)(param_1 + 0x458);
    local_58 = (longlong *)0x0;
    local_4c = 0;
    if (lVar9 != 0) {
      plVar14 = *(longlong **)(lVar9 + 0x2e0);
      plVar18 = plVar14 + (longlong)*(int *)(lVar9 + 0x2e8) * 0xf;
      plVar16 = plVar10;
      plVar17 = plVar10;
      if (plVar14 != plVar18) {
        do {
          iVar15 = (int)plVar10;
          local_50 = iVar15 + 1;
          if ((int)plVar17 < (int)local_50) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_58,plVar10);
            plVar17 = (longlong *)(ulonglong)local_4c;
            plVar16 = local_58;
          }
          plVar10 = (longlong *)(ulonglong)local_50;
          lVar9 = *plVar14;
          plVar14 = plVar14 + 0xf;
          plVar16[iVar15] = lVar9;
        } while (plVar14 != plVar18);
        if (0 < (int)local_50) {
          lVar13 = *plVar16;
        }
        if (plVar16 != (longlong *)0x0) {
          FMemory::Free(plVar16);
        }
      }
    }
  }
  FUN_1408e7bc0(*(longlong *)(param_1 + 0x458) + 0x2d0,lVar13);
  lVar13 = *(longlong *)(param_1 + 0x458);
  if (*(char *)(lVar13 + 0x2d8) == '\0') {
    if (*(longlong *)(lVar13 + 0x2d0) != 0) {
      fVar20 = *(float *)(*(longlong *)(lVar13 + 0x2d0) + 0x38);
    }
  }
  else {
    fVar20 = *(float *)(lVar13 + 0x2dc);
  }
  fVar19 = *(float *)(param_1 + 0x4b0);
  *(undefined1 *)(lVar13 + 0x368) = 0;
  if (0 < *(int *)(lVar13 + 0x360)) {
    pfVar11 = *(float **)(lVar13 + 0x358);
    bVar5 = false;
    pfVar1 = pfVar11 + (longlong)*(int *)(lVar13 + 0x360) * 10;
    if (pfVar11 != pfVar1) {
      do {
        if (fVar19 / fVar20 < *pfVar11) break;
        if (*(char *)(pfVar11 + 4) != '\0') {
          *(char *)(lVar13 + 0x368) = *(char *)(pfVar11 + 4);
          bVar5 = true;
        }
        pfVar11 = pfVar11 + 10;
      } while (pfVar11 != pfVar1);
      if (bVar5) goto LAB_1408e71fa;
    }
    iVar15 = *(int *)(lVar13 + 0x360) + -1;
    if (-1 < iVar15) {
      lVar9 = (longlong)iVar15;
      pcVar12 = (char *)(*(longlong *)(lVar13 + 0x358) + (lVar9 * 5 + 2) * 8);
      do {
        if (*pcVar12 != '\0') {
          *(undefined1 *)(lVar13 + 0x368) =
               *(undefined1 *)(*(longlong *)(lVar13 + 0x358) + 0x10 + (longlong)iVar15 * 0x28);
          break;
        }
        iVar15 = iVar15 + -1;
        pcVar12 = pcVar12 + -0x28;
        lVar9 = lVar9 + -1;
      } while (-1 < lVar9);
    }
  }
LAB_1408e71fa:
  lVar13 = *(longlong *)(param_1 + 0x4a0);
  lVar9 = (longlong)*(int *)(param_1 + 0x4a8) * 0x38 + lVar13;
  for (; lVar13 != lVar9; lVar13 = lVar13 + 0x38) {
    if (*(longlong *)(lVar13 + 8) != 0) {
      uVar8 = *(undefined8 *)(*(longlong *)(lVar13 + 8) + 0x458);
      *(undefined8 *)(lVar13 + 0x30) = uVar8;
      puVar6 = (undefined4 *)FUN_14236c8c0(uVar8,&local_58);
      uVar2 = puVar6[1];
      uVar3 = puVar6[2];
      uVar4 = puVar6[3];
      *(undefined4 *)(lVar13 + 0x20) = *puVar6;
      *(undefined4 *)(lVar13 + 0x24) = uVar2;
      *(undefined4 *)(lVar13 + 0x28) = uVar3;
      *(undefined4 *)(lVar13 + 0x2c) = uVar4;
      puVar7 = (undefined8 *)FName::FName(local_res18,L"LightColor",1);
      uVar8 = FUN_1408e1640(*(undefined8 *)(lVar13 + 0x30),*puVar7,0x3e);
      *(undefined8 *)(lVar13 + 0x10) = uVar8;
      puVar7 = (undefined8 *)FName::FName(local_res20,L"Intensity",1);
      uVar8 = FUN_1408e1520(*(undefined8 *)(lVar13 + 0x30),*puVar7,0);
      *(undefined8 *)(lVar13 + 0x18) = uVar8;
    }
  }
  return;
}



// FUNCTION 1408e72f0 FUN_1408e72f0 body=181 status=ok
// SIG undefined FUN_1408e72f0(void)

void FUN_1408e72f0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_1423946d0();
  if (DAT_146862304 < *(uint *)(param_1 + 0x37c)) {
    FUN_1408e3650(param_1);
  }
  lVar1 = *(longlong *)(param_1 + 0x120);
  if (lVar1 == 0) {
    lVar1 = FUN_1423407b0(param_1);
    if (lVar1 == 0) goto LAB_1408e735f;
  }
  plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
  if (plVar2 != (longlong *)0x0) {
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined4 *)(param_1 + 0x378),0);
    }
  }
LAB_1408e735f:
  if (DAT_146862330 != *(float *)(param_1 + 0x378)) {
    *(undefined1 *)(param_1 + 0x3a1) = 1;
  }
  if (DAT_146862308 != *(longlong *)(param_1 + 0x380)) {
    FUN_1408e8b50(param_1,*(longlong *)(param_1 + 0x380),*(undefined4 *)(param_1 + 0x388));
    return;
  }
  return;
}



// FUNCTION 1408e73b0 FUN_1408e73b0 body=287 status=ok
// SIG undefined FUN_1408e73b0(void)

void FUN_1408e73b0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  longlong local_res10;
  
  if (param_2 == 0) goto LAB_1408e7438;
  FUN_1408e4230(&local_res10);
  if (local_res10 == 0) {
LAB_1408e7410:
    cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    if (cVar1 != '\0') {
      lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
      *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(lVar3 + 0x378);
    }
  }
  else if (local_res10 != *(longlong *)(param_1 + 0x28)) {
    plVar2 = *(longlong **)(param_1 + 8);
    plVar4 = plVar2 + (longlong)*(int *)(param_1 + 0x10) * 2;
    for (; plVar2 != plVar4; plVar2 = plVar2 + 2) {
      if (*plVar2 == local_res10) {
        *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)((longlong)plVar2 + 0xc);
        goto LAB_1408e742f;
      }
    }
    goto LAB_1408e7410;
  }
LAB_1408e742f:
  *(longlong *)(param_1 + 0x28) = local_res10;
LAB_1408e7438:
  fVar5 = *(float *)(param_1 + 0x20);
  fVar6 = 0.0;
  if (0.0 <= fVar5) {
    if (1.0 <= fVar5) {
      fVar5 = 1.0;
    }
  }
  else {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x20) = fVar5;
  cVar1 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar1 == '\0') {
    if (param_2 != 0) {
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x790);
      return;
    }
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    if (*(char *)(lVar3 + 0x2d8) == '\0') {
      if (*(longlong *)(lVar3 + 0x2d0) != 0) {
        fVar6 = *(float *)(*(longlong *)(lVar3 + 0x2d0) + 0x38);
      }
    }
    else {
      fVar6 = *(float *)(lVar3 + 0x2dc);
    }
    fVar6 = fVar6 * *(float *)(param_1 + 0x20);
  }
  *(float *)(param_1 + 0x34) = fVar6;
  return;
}



// FUNCTION 1408e74d0 FUN_1408e74d0 body=62 status=ok
// SIG undefined FUN_1408e74d0(void)

void FUN_1408e74d0(longlong param_1)

{
  FUN_1423947d0();
  DAT_146862304 = *(undefined4 *)(param_1 + 0x37c);
  DAT_146862308 = *(undefined8 *)(param_1 + 0x380);
  DAT_146862330 = *(undefined4 *)(param_1 + 0x378);
  return;
}



// FUNCTION 1408e7520 FUN_1408e7520 body=52 status=ok
// SIG undefined FUN_1408e7520(void)

void FUN_1408e7520(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res8 [8];
  
  FUN_1408e8d90();
  puVar1 = (undefined8 *)FUN_1408e4230(local_res8,param_2);
  *(undefined8 *)(param_1 + 0x28) = *puVar1;
  return;
}



// FUNCTION 1408e7560 FUN_1408e7560 body=157 status=ok
// SIG undefined FUN_1408e7560(void)

void FUN_1408e7560(longlong param_1,longlong param_2)

{
  bool bVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    lVar3 = FUN_1408ea260();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) goto LAB_1408e75ad;
  }
  param_2 = 0;
LAB_1408e75ad:
  if ((*(char *)(param_1 + 0x30) == '\0') && (param_2 != 0)) {
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x378);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  param_1 = param_1 + 0x18;
  FWeakObjectPtr::operator=(param_1,param_2);
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    uVar4 = FWeakObjectPtr::Get(param_1);
    FUN_1408e92d0(uVar4,0);
  }
  return;
}



// FUNCTION 1408e7600 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FVectorParameterNameAndCurves,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1e8,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0xc9714fbcda3ac11) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1e8,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1408e7690 FUN_1408e7690 body=130 status=ok
// SIG undefined FUN_1408e7690(void)

void FUN_1408e7690(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x98,0);
    iVar3 = (int)(uVar1 / 0x98);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x98,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1408e7720 ResizeForCopy body=142 status=ok
// SIG undefined ResizeForCopy(void)

void TArray<FAnimPhysLinkedBody,FDefaultAllocator>::ResizeForCopy
               (longlong *param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 != 0) {
    uVar2 = FMemory::QuantizeSize((longlong)param_2 * 0x1f0,0);
    auVar1._8_8_ = 0;
    auVar1._0_8_ = uVar2;
    lVar3 = SUB168(ZEXT816(0x842108421084211) * auVar1,8);
    iVar4 = (int)((uVar2 - lVar3 >> 1) + lVar3 >> 8);
    if (iVar4 < param_2) {
      iVar4 = 0x7fffffff;
    }
  }
  if ((iVar4 != param_3) && ((*param_1 != 0 || (iVar4 != 0)))) {
    lVar3 = FMemory::Realloc(*param_1,(longlong)iVar4 * 0x1f0,0);
    *param_1 = lVar3;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar4;
  return;
}



// FUNCTION 1408e77b0 FUN_1408e77b0 body=130 status=ok
// SIG undefined FUN_1408e77b0(void)

void FUN_1408e77b0(longlong *param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_2 != 0) {
    uVar1 = FMemory::QuantizeSize((longlong)param_2 * 0x1d8,0);
    iVar3 = (int)(uVar1 / 0x1d8);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
  }
  if ((iVar3 != param_3) && ((*param_1 != 0 || (iVar3 != 0)))) {
    lVar2 = FMemory::Realloc(*param_1,(longlong)iVar3 * 0x1d8,0);
    *param_1 = lVar2;
  }
  *(int *)((longlong)param_1 + 0xc) = iVar3;
  return;
}



// FUNCTION 1408e7840 FUN_1408e7840 body=93 status=ok
// SIG undefined FUN_1408e7840(void)

void FUN_1408e7840(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  FUN_14234e7b0();
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x394) == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x378);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x390);
    }
    plVar2 = (longlong *)FUN_14233fea0(param_1);
    (**(code **)(*plVar2 + 0x2b8))(plVar2,uVar3);
  }
  return;
}



// FUNCTION 1408e78a0 FUN_1408e78a0 body=93 status=ok
// SIG undefined FUN_1408e78a0(void)

void FUN_1408e78a0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  
  UActorComponent::SendRenderDynamicData_Concurrent();
  lVar1 = FUN_14233fea0(param_1);
  if (lVar1 != 0) {
    if (*(char *)(param_1 + 0x394) == '\0') {
      uVar3 = *(undefined4 *)(param_1 + 0x378);
    }
    else {
      uVar3 = *(undefined4 *)(param_1 + 0x390);
    }
    plVar2 = (longlong *)FUN_14233fea0(param_1);
    (**(code **)(*plVar2 + 0x2b8))(plVar2,uVar3);
  }
  return;
}



// FUNCTION 1408e7900 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  AActor::Serialize();
  FArchive::UsingCustomVersion(param_2,&DAT_146283818);
  return;
}



// FUNCTION 1408e7930 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_14234e7d0();
  FArchive::UsingCustomVersion(param_2,&DAT_146283818);
  return;
}



// FUNCTION 1408e7960 Serialize body=34 status=ok
// SIG undefined Serialize(void)

void AAkReverbVolume::Serialize(undefined8 param_1,undefined8 param_2)

{
  FUN_141763960();
  FArchive::UsingCustomVersion(param_2,&DAT_146283818);
  return;
}



// FUNCTION 1408e7990 FUN_1408e7990 body=34 status=ok
// SIG undefined FUN_1408e7990(void)

void FUN_1408e7990(longlong param_1,float param_2)

{
  if ((param_2 != *(float *)(param_1 + 0x390)) &&
     (*(float *)(param_1 + 0x390) = param_2, *(char *)(param_1 + 0x394) != '\0')) {
    FUN_1408e92d0(param_1,0);
    return;
  }
  return;
}



// FUNCTION 1408e79c0 FUN_1408e79c0 body=119 status=ok
// SIG undefined FUN_1408e79c0(void)

void FUN_1408e79c0(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = AFGPoleHologram::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((bVar2) && (*(char *)(lVar1 + 0x128) != '\x03')) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x3a0) = param_2;
  return;
}



// FUNCTION 1408e7a40 FUN_1408e7a40 body=137 status=ok
// SIG undefined FUN_1408e7a40(void)

ulonglong FUN_1408e7a40(longlong param_1,ulonglong param_2,char param_3)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
  
  *(int *)(param_1 + 0x20) = (int)param_2;
  if (param_3 == '\0') {
    return param_2;
  }
  cVar2 = FWeakObjectPtr::IsValid(param_1 + 0x18);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x18);
    uVar1 = *(undefined4 *)(param_1 + 0x20);
    FUN_1408e3650(lVar3);
    *(int *)(lVar3 + 0x37c) = *(int *)(lVar3 + 0x37c) + 1;
    *(undefined4 *)(lVar3 + 0x378) = uVar1;
    FUN_1408e92d0(lVar3,0);
    return (ulonglong)*(uint *)(param_1 + 0x20);
  }
  return (ulonglong)*(uint *)(param_1 + 0x20);
}



// FUNCTION 1408e7ad0 FUN_1408e7ad0 body=86 status=ok
// SIG undefined FUN_1408e7ad0(void)

void FUN_1408e7ad0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,1);
  }
  return;
}



// FUNCTION 1408e7b30 FUN_1408e7b30 body=57 status=ok
// SIG undefined FUN_1408e7b30(void)

void FUN_1408e7b30(longlong param_1,char param_2)

{
  if (*(char *)(param_1 + 0x394) != param_2) {
    FUN_1408e3650();
    *(char *)(param_1 + 0x394) = param_2;
    FUN_1408e92d0(param_1,0);
  }
  return;
}



// FUNCTION 1408e7b70 FUN_1408e7b70 body=72 status=ok
// SIG undefined FUN_1408e7b70(void)

void FUN_1408e7b70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      plVar2 = (longlong *)FUN_142d5ecc0(lVar1);
      if (plVar2 != (longlong *)0x0) {
        plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2);
        if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001408e7baf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar2 + 0x20))(plVar2);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 1408e7bc0 FUN_1408e7bc0 body=114 status=ok
// SIG undefined FUN_1408e7bc0(void)

void FUN_1408e7bc0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x10);
  plVar3 = plVar2 + (longlong)*(int *)(param_1 + 0x18) * 0xf;
  for (; plVar2 != plVar3; plVar2 = plVar2 + 0xf) {
    lVar1 = *plVar2;
    if (lVar1 == param_2) goto LAB_1408e7bfa;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  plVar2 = (longlong *)(param_1 + 0x20);
LAB_1408e7bfa:
  *(longlong *)(param_1 + 0x20) = lVar1;
  FUN_1408e24e0(param_1 + 0x28,plVar2 + 1);
  FUN_1408e2620(param_1 + 0x48,plVar2 + 5);
  FUN_1408e2360(param_1 + 0x88,plVar2 + 0xd);
  return;
}



// FUNCTION 1408e7c40 FUN_1408e7c40 body=1060 status=ok
// SIG undefined FUN_1408e7c40(void)

void FUN_1408e7c40(longlong param_1,float param_2)

{
  ulonglong *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  bool bVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined8 *puVar13;
  float fVar14;
  longlong local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  longlong local_b8 [4];
  longlong *local_98;
  int local_88;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_68 [64];
  
  FUN_142357eb0();
  if (*(longlong *)(param_1 + 0x2d0) == 0) {
    return;
  }
  lVar9 = *(longlong *)(param_1 + 0x120);
  if (((lVar9 != 0) || (lVar9 = FUN_1423407b0(param_1), plVar11 = (longlong *)0x0, lVar9 != 0)) &&
     (plVar10 = (longlong *)FUN_142d5ecc0(lVar9), plVar11 = (longlong *)0x0,
     plVar10 != (longlong *)0x0)) {
    plVar11 = (longlong *)(**(code **)(*plVar10 + 0x2b8))(plVar10);
  }
  if (*(char *)(param_1 + 0x394) != '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0x3a0) == '\0') && (*(char *)(param_1 + 0x3a1) == '\0')) {
    return;
  }
  if (*(char *)(param_1 + 0x2d8) == '\0') {
    if (*(longlong *)(param_1 + 0x2d0) == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = *(float *)(*(longlong *)(param_1 + 0x2d0) + 0x38);
    }
  }
  else {
    fVar14 = *(float *)(param_1 + 0x2dc);
  }
  param_2 = param_2 / fVar14;
  if (*(char *)(param_1 + 0x3a0) == '\0') {
    param_2 = 0.0;
  }
  if (plVar11 == (longlong *)0x0) {
    fVar14 = param_2 + *(float *)(param_1 + 0x378);
  }
  else {
    lVar9 = *plVar11;
    fVar14 = (float)(**(code **)(lVar9 + 8))(plVar11);
    fVar14 = (float)(**(code **)(lVar9 + 0x10))(plVar11,fVar14 + param_2,0);
  }
  *(float *)(param_1 + 0x378) = fVar14;
  if (0.0 < *(float *)(param_1 + 0x388)) {
    param_2 = *(float *)(param_1 + 0x388) - param_2;
    if (param_2 <= 0.0) {
      param_2 = 0.0;
    }
    *(float *)(param_1 + 0x388) = param_2;
  }
  plVar10 = *(longlong **)(param_1 + 0x118);
  if (plVar10 == (longlong *)0x0) {
LAB_1408e7dc1:
    plVar10 = (longlong *)0x0;
  }
  else {
    lVar9 = AFGPoleHologram::GetPrivateStaticClass();
    if ((*(int *)(plVar10[2] + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar10[2] + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8) !=
        lVar9 + 0x88)) {
      bVar7 = false;
    }
    else {
      bVar7 = true;
    }
    if (!bVar7) goto LAB_1408e7dc1;
  }
  if ((1.0 <= *(float *)(param_1 + 0x378)) &&
     ((plVar10 == (longlong *)0x0 || ((char)plVar10[0x25] == '\x03')))) {
    fVar14 = *(float *)(param_1 + 0x378) - 1.0;
    if (plVar11 != (longlong *)0x0) {
      fVar14 = (float)(**(code **)(*plVar11 + 0x10))(plVar11,fVar14,0);
    }
    *(float *)(param_1 + 0x378) = fVar14;
    *(int *)(param_1 + 0x37c) = *(int *)(param_1 + 0x37c) + 1;
    FUN_1408e3650(param_1);
  }
  if ((*(char *)(param_1 + 0x3a0) == '\0') && (*(char *)(param_1 + 0x3a1) != '\0')) {
    FUN_1408e92d0(param_1,0);
    return;
  }
  if ((DAT_146283810 != '\0') && (*(longlong *)(param_1 + 0x398) != 0)) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x398) + 8);
    LOCK();
    uVar12 = *puVar1;
    if (uVar12 == 0) {
      *puVar1 = 0;
      uVar12 = 0;
    }
    UNLOCK();
    if ((uVar12 >> 0x1a & 1) == 0) {
      return;
    }
  }
  FUN_1408e92d0(param_1,DAT_146283810);
  if (DAT_146283810 == '\0') {
    return;
  }
  uVar3 = *(undefined4 *)(param_1 + 0x378);
  FWeakObjectPtr::operator=(&local_d0,param_1);
  local_78 = local_d0;
  local_74 = local_cc;
  local_98 = (longlong *)0x0;
  local_88 = 0;
  puVar13 = (undefined8 *)FUN_140438ef0(0x18,local_b8);
  if (puVar13 != (undefined8 *)0x0) {
    *puVar13 = &PTR_CopyToEmptyStorage_143fcfe68;
    *(undefined4 *)(puVar13 + 1) = local_d0;
    *(undefined4 *)((longlong)puVar13 + 0xc) = local_cc;
    *(undefined4 *)(puVar13 + 2) = uVar3;
  }
  local_c8 = FUN_1408e32b0;
  plVar11 = (longlong *)FUN_140596960(local_68,0,0xff);
  lVar9 = *plVar11;
  *(undefined8 *)(lVar9 + 0x40) = 0;
  *(undefined4 *)(lVar9 + 0x50) = 0;
  if (local_98 == (longlong *)0x0) {
    _guard_xfg_dispatch_icall_nop((longlong *)(lVar9 + 0x20),local_b8,0x20);
  }
  if (*(longlong *)(lVar9 + 0x40) != 0) {
    FMemory::Free();
  }
  *(longlong **)(lVar9 + 0x40) = local_98;
  local_98 = (longlong *)0x0;
  *(int *)(lVar9 + 0x50) = local_88;
  local_88 = 0;
  if (*(int *)(lVar9 + 0x50) != 0) {
    plVar10 = *(longlong **)(lVar9 + 0x40);
    if (*(longlong **)(lVar9 + 0x40) == (longlong *)0x0) {
      plVar10 = (longlong *)(lVar9 + 0x20);
    }
    if (plVar10 != (longlong *)0x0) {
      (**(code **)(*plVar10 + 8))();
      *(code **)(lVar9 + 0x10) = local_c8;
      goto LAB_1408e7f7b;
    }
  }
  *(code **)(lVar9 + 0x10) = AK::MemoryMgr::StartProfileThreadUsage;
LAB_1408e7f7b:
  local_c8 = AK::MemoryMgr::StartProfileThreadUsage;
  *(undefined4 *)(lVar9 + 0x60) = 0xff;
  lVar9 = *plVar11;
  lVar8 = plVar11[2];
  lVar5 = plVar11[1];
  lVar6 = *(longlong *)(lVar9 + 0x78);
  if (lVar6 != 0) {
    LOCK();
    *(int *)(lVar6 + 0x48) = *(int *)(lVar6 + 0x48) + 1;
    UNLOCK();
  }
  local_d8 = lVar6;
  FUN_1405ab110(lVar9,lVar5,(int)lVar8,1);
  if (local_88 != 0) {
    plVar11 = local_b8;
    if (local_98 != (longlong *)0x0) {
      plVar11 = local_98;
    }
    if (plVar11 != (longlong *)0x0) {
      (**(code **)(*plVar11 + 0x10))(plVar11,0);
    }
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free();
  }
  plVar11 = (longlong *)(param_1 + 0x398);
  if (plVar11 == &local_d8) {
    if (lVar6 == 0) {
      return;
    }
    LOCK();
    piVar2 = (int *)(lVar6 + 0x48);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    lVar9 = local_d8;
  }
  else {
    lVar9 = *plVar11;
    *plVar11 = lVar6;
    if (lVar9 == 0) {
      return;
    }
    LOCK();
    piVar2 = (int *)(lVar9 + 0x48);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
  }
  if (iVar4 == 1) {
    FGraphEvent::Recycle(lVar9);
  }
  return;
}



// FUNCTION 1408e8070 FUN_1408e8070 body=216 status=ok
// SIG undefined FUN_1408e8070(void)

undefined8 * FUN_1408e8070(undefined8 *param_1,char param_2)

{
  wchar_t *pwVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == '\x01') {
    *(undefined4 *)(param_1 + 1) = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"Morning";
  }
  else {
    if (param_2 == '\x02') {
      *(undefined4 *)(param_1 + 1) = 4;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      FGenericPlatformString::Memcpy(*param_1,&DAT_14413e7a8,8);
      return param_1;
    }
    if (param_2 != '\x03') {
      if (param_2 != '\x04') {
        return param_1;
      }
      *(undefined4 *)(param_1 + 1) = 6;
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
      FGenericPlatformString::Memcpy(*param_1,L"Night",0xc);
      return param_1;
    }
    *(undefined4 *)(param_1 + 1) = 8;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_1,0);
    pwVar1 = L"Evening";
  }
  FGenericPlatformString::Memcpy(*param_1,pwVar1,0x10);
  return param_1;
}



// FUNCTION 1408e8150 FUN_1408e8150 body=218 status=ok
// SIG undefined FUN_1408e8150(void)

void FUN_1408e8150(longlong param_1,float param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float fVar9;
  
  param_1 = param_1 + 0x18;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    lVar4 = FWeakObjectPtr::Get(param_1);
    if (*(char *)(lVar4 + 0x2d8) == '\0') {
      if (*(longlong *)(lVar4 + 0x2d0) == 0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = *(float *)(*(longlong *)(lVar4 + 0x2d0) + 0x38);
      }
    }
    else {
      fVar9 = *(float *)(lVar4 + 0x2dc);
    }
    lVar5 = FWeakObjectPtr::Get(param_1);
    uVar7 = 0;
    iVar1 = *(int *)(lVar5 + 0x2e8);
    lVar4 = *(longlong *)(lVar5 + 0x2f0);
    if (0 < iVar1) {
      plVar6 = *(longlong **)(lVar5 + 0x2e0);
      uVar8 = uVar7;
      do {
        uVar3 = (int)uVar8 + 1;
        if (*plVar6 == lVar4) {
          if ((int)uVar3 < iVar1) {
            lVar4 = (*(longlong **)(lVar5 + 0x2e0))[((longlong)(int)uVar8 + 1) * 0xf];
          }
          break;
        }
        uVar7 = uVar7 + 1;
        plVar6 = plVar6 + 0xf;
        uVar8 = (ulonglong)uVar3;
      } while ((longlong)uVar7 < (longlong)iVar1);
    }
    FUN_1408e8b50(lVar5,lVar4,param_2 / fVar9);
  }
  return;
}



// FUNCTION 1408e8230 FUN_1408e8230 body=83 status=ok
// SIG undefined FUN_1408e8230(void)

void FUN_1408e8230(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1408e8290 FUN_1408e8290 body=1929 status=ok
// SIG undefined FUN_1408e8290(void)

void FUN_1408e8290(longlong param_1,longlong param_2,float param_3,float param_4)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined4 *puVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  ulonglong local_res8;
  longlong local_b8;
  uint local_b0;
  undefined4 local_ac;
  longlong local_a8;
  uint local_a0;
  longlong local_98;
  uint local_90;
  undefined4 local_8c;
  longlong local_88;
  uint local_80;
  longlong local_78;
  uint local_70;
  longlong local_68;
  uint local_60;
  
  if (param_2 != *(longlong *)(param_1 + 0x20)) {
    param_4 = param_3 + param_4;
    *(bool *)(param_1 + 0x9a) = 1.0 < param_4;
    plVar12 = *(longlong **)(param_1 + 0x10);
    plVar6 = plVar12 + (longlong)*(int *)(param_1 + 0x18) * 0xf;
    for (; plVar12 != plVar6; plVar12 = plVar12 + 0xf) {
      lVar13 = *plVar12;
      if (*plVar12 == param_2) goto LAB_1408e8319;
    }
    plVar12 = (longlong *)(param_1 + 0x20);
    lVar13 = *(longlong *)(param_1 + 0x20);
LAB_1408e8319:
    *(longlong *)(param_1 + 0x20) = lVar13;
    FUN_1408e2360(param_1 + 0x88,plVar12 + 0xd);
    uVar10 = *(uint *)(param_1 + 0x30);
    lVar8 = 0;
    lVar13 = *(longlong *)(param_1 + 0x28);
    local_b8 = 0;
    local_b0 = uVar10;
    if (uVar10 == 0) {
      local_ac = 0;
    }
    else {
      TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(&local_b8,uVar10,0);
      lVar13 = lVar13 - local_b8;
      puVar7 = (undefined4 *)(local_b8 + 0x78);
      do {
        *(undefined8 *)(puVar7 + -0x1e) = *(undefined8 *)(lVar13 + -0x78 + (longlong)puVar7);
        FRichCurve::FRichCurve(puVar7 + -0x1c,lVar13 + -0x70 + (longlong)puVar7);
        *puVar7 = *(undefined4 *)(lVar13 + (longlong)puVar7);
        puVar7 = puVar7 + 0x20;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_a8 = 0;
    FUN_1408e11c0(&local_a8,*(undefined8 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x40),0,0);
    FUN_1408e24e0(param_1 + 0x28,plVar12 + 1);
    lVar13 = local_b8;
    if (0 < (int)local_b0) {
      uVar11 = (ulonglong)local_b0;
      do {
        FUN_1408e2e50(param_1,lVar13 + 8 + lVar8,plVar12[1] + 8 + lVar8,param_3,param_4,
                      *(longlong *)(param_1 + 0x28) + 8 + lVar8);
        lVar8 = lVar8 + 0x80;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_res8 = (ulonglong)local_a0;
    if (0 < (int)local_a0) {
      lVar8 = -0x78 - local_a8;
      lVar13 = local_a8 + 0x78;
      do {
        lVar1 = *(longlong *)(param_1 + 0x38);
        lVar9 = lVar8 + lVar13;
        lVar2 = plVar12[3];
        FUN_1408e2e50(param_1,lVar13 + -0x70,lVar2 + 8 + lVar9,param_3,param_4,lVar1 + 8 + lVar9);
        FUN_1408e2e50(param_1,lVar13,lVar2 + 0x78 + lVar9,param_3,param_4,lVar1 + 0x78 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0x70,lVar2 + 0xe8 + lVar9,param_3,param_4,
                      lVar1 + 0xe8 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0xe0,lVar2 + 0x158 + lVar9,param_3,param_4,
                      lVar1 + 0x158 + lVar9);
        lVar13 = lVar13 + 0x1d8;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
    lVar8 = 0;
    uVar10 = *(uint *)(param_1 + 0x50);
    lVar13 = *(longlong *)(param_1 + 0x48);
    local_98 = 0;
    local_90 = uVar10;
    if (uVar10 == 0) {
      local_8c = 0;
    }
    else {
      FUN_1408e7690(&local_98,uVar10,0);
      lVar13 = lVar13 - local_98;
      lVar9 = local_98 + 0x20;
      do {
        puVar7 = (undefined4 *)(lVar13 + -0x20 + lVar9);
        uVar3 = puVar7[1];
        uVar4 = puVar7[2];
        uVar5 = puVar7[3];
        *(undefined4 *)(lVar9 + -0x20) = *puVar7;
        *(undefined4 *)(lVar9 + -0x1c) = uVar3;
        *(undefined4 *)(lVar9 + -0x18) = uVar4;
        *(undefined4 *)(lVar9 + -0x14) = uVar5;
        *(undefined8 *)(lVar9 + -0x10) = *(undefined8 *)(lVar13 + -0x10 + lVar9);
        *(undefined8 *)(lVar9 + -8) = *(undefined8 *)(lVar13 + -8 + lVar9);
        FRichCurve::FRichCurve(lVar9,lVar13 + lVar9);
        *(undefined4 *)(lVar9 + 0x70) = *(undefined4 *)(lVar13 + 0x70 + lVar9);
        lVar9 = lVar9 + 0x98;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    local_88 = 0;
    FUN_1408e1020(&local_88,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x60),0,0);
    local_78 = 0;
    FUN_1408e0dc0(&local_78,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),0,0);
    local_68 = 0;
    FUN_1408e1020(&local_68,*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80),0,0);
    FUN_1408e2620(param_1 + 0x48,plVar12 + 5);
    lVar13 = local_98;
    if (0 < (int)local_90) {
      uVar11 = (ulonglong)local_90;
      do {
        FUN_1408e2e50(param_1,lVar13 + 0x20 + lVar8,plVar12[5] + 0x20 + lVar8,param_3,param_4,
                      *(longlong *)(param_1 + 0x48) + 0x20 + lVar8);
        lVar8 = lVar8 + 0x98;
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
    local_res8 = (ulonglong)local_80;
    if (0 < (int)local_80) {
      lVar8 = -0x90 - local_88;
      lVar13 = local_88 + 0x90;
      do {
        lVar1 = *(longlong *)(param_1 + 0x58);
        lVar9 = lVar13 + lVar8;
        lVar2 = plVar12[7];
        FUN_1408e2e50(param_1,lVar13 + -0x70,lVar2 + 0x20 + lVar9,param_3,param_4,
                      lVar1 + 0x20 + lVar9);
        FUN_1408e2e50(param_1,lVar13,lVar2 + 0x90 + lVar9,param_3,param_4,lVar1 + 0x90 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0x70,lVar2 + 0x100 + lVar9,param_3,param_4,
                      lVar1 + 0x100 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0xe0,lVar2 + 0x170 + lVar9,param_3,param_4,
                      lVar1 + 0x170 + lVar9);
        lVar13 = lVar13 + 0x1f0;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
    local_res8 = (ulonglong)local_70;
    if (0 < (int)local_70) {
      lVar8 = -0x90 - local_78;
      lVar13 = local_78 + 0x90;
      do {
        lVar1 = *(longlong *)(param_1 + 0x68);
        lVar9 = lVar13 + lVar8;
        lVar2 = plVar12[9];
        FUN_1408e2e50(param_1,lVar13 + -0x70,lVar2 + 0x20 + lVar9,param_3,param_4,
                      lVar1 + 0x20 + lVar9);
        FUN_1408e2e50(param_1,lVar13,lVar2 + 0x90 + lVar9,param_3,param_4,lVar1 + 0x90 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0x70,lVar2 + 0x100 + lVar9,param_3,param_4,
                      lVar1 + 0x100 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0xe0,lVar2 + 0x170 + lVar9,param_3,param_4,
                      lVar1 + 0x170 + lVar9);
        lVar13 = lVar13 + 0x1e8;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
    local_res8 = (ulonglong)local_60;
    if (0 < (int)local_60) {
      lVar8 = -0x90 - local_68;
      lVar13 = local_68 + 0x90;
      do {
        lVar1 = *(longlong *)(param_1 + 0x78);
        lVar9 = lVar13 + lVar8;
        lVar2 = plVar12[0xb];
        FUN_1408e2e50(param_1,lVar13 + -0x70,lVar2 + 0x20 + lVar9,param_3,param_4,
                      lVar1 + 0x20 + lVar9);
        FUN_1408e2e50(param_1,lVar13,lVar2 + 0x90 + lVar9,param_3,param_4,lVar1 + 0x90 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0x70,lVar2 + 0x100 + lVar9,param_3,param_4,
                      lVar1 + 0x100 + lVar9);
        FUN_1408e2e50(param_1,lVar13 + 0xe0,lVar2 + 0x170 + lVar9,param_3,param_4,
                      lVar1 + 0x170 + lVar9);
        lVar13 = lVar13 + 0x1f0;
        local_res8 = local_res8 - 1;
      } while (local_res8 != 0);
    }
    *(undefined1 *)(param_1 + 0x99) = 1;
    FUN_1408e20b0(&local_68);
    FUN_1408e1fa0(&local_78);
    FUN_1408e20b0(&local_88);
    lVar13 = local_98;
    if (local_90 != 0) {
      lVar8 = local_98 + 0x20;
      uVar10 = local_90;
      do {
        FRichCurve::~FRichCurve(lVar8);
        lVar8 = lVar8 + 0x98;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (lVar13 != 0) {
      FMemory::Free(lVar13);
    }
    FUN_1408e2150(&local_a8);
    lVar13 = local_b8;
    if (local_b0 != 0) {
      lVar8 = local_b8 + 8;
      uVar10 = local_b0;
      do {
        FRichCurve::~FRichCurve(lVar8);
        lVar8 = lVar8 + 0x80;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (lVar13 != 0) {
      FMemory::Free(lVar13);
    }
  }
  return;
}



// FUNCTION 1408e8a20 FUN_1408e8a20 body=128 status=ok
// SIG undefined FUN_1408e8a20(void)

void FUN_1408e8a20(longlong param_1,undefined8 param_2,float param_3)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  float fVar4;
  
  param_1 = param_1 + 0x18;
  cVar2 = FWeakObjectPtr::IsValid(param_1);
  if (cVar2 != '\0') {
    lVar3 = FWeakObjectPtr::Get(param_1);
    if (*(char *)(lVar3 + 0x2d8) == '\0') {
      if (*(longlong *)(lVar3 + 0x2d0) == 0) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = *(float *)(*(longlong *)(lVar3 + 0x2d0) + 0x38);
      }
    }
    else {
      fVar4 = *(float *)(lVar3 + 0x2dc);
    }
    uVar1 = FWeakObjectPtr::Get(param_1);
    FUN_1408e8b50(uVar1,param_2,param_3 / fVar4);
  }
  return;
}



// FUNCTION 1408e8aa0 FUN_1408e8aa0 body=173 status=ok
// SIG undefined FUN_1408e8aa0(void)

void FUN_1408e8aa0(longlong *param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined2 *puVar4;
  undefined1 local_res8 [8];
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    if ((int)param_2[1] == 0) {
      puVar4 = &DAT_143f3eda8;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    lVar1 = *plVar2;
    puVar3 = (undefined8 *)FName::FName(local_res8,puVar4,1);
    (**(code **)(lVar1 + 0x28))(plVar2,*puVar3,param_3);
  }
  if (*param_2 == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1408e8b50 FUN_1408e8b50 body=203 status=ok
// SIG undefined FUN_1408e8b50(void)

void FUN_1408e8b50(longlong param_1,undefined8 param_2,float param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x398) + 8);
    LOCK();
    uVar2 = *puVar1;
    if (uVar2 == 0) {
      *puVar1 = 0;
      uVar2 = 0;
    }
    UNLOCK();
    if ((uVar2 >> 0x1a & 1) == 0) {
      uVar3 = FTaskGraphInterface::Get();
      FTaskGraphInterface::WaitUntilTaskCompletes(uVar3,param_1 + 0x398,0xff);
    }
  }
  if (1e-08 < ABS(param_3)) {
    FUN_1408e8290(param_1 + 0x2d0,param_2,*(undefined4 *)(param_1 + 0x378),param_3);
  }
  else {
    FUN_1408e7bc0();
  }
  *(undefined8 *)(param_1 + 0x380) = *(undefined8 *)(param_1 + 0x2f0);
  *(float *)(param_1 + 0x388) = param_3;
  FUN_1408e3850(param_1,*(undefined4 *)(param_1 + 0x378));
  *(undefined1 *)(param_1 + 0x3a1) = 1;
  return;
}



// FUNCTION 1408e8c20 FUN_1408e8c20 body=196 status=ok
// SIG undefined FUN_1408e8c20(void)

void FUN_1408e8c20(longlong param_1,float param_2)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  
  param_1 = param_1 + 0x18;
  cVar1 = FWeakObjectPtr::IsValid(param_1);
  if (cVar1 != '\0') {
    lVar2 = FWeakObjectPtr::Get(param_1);
    if (*(char *)(lVar2 + 0x2d8) == '\0') {
      if (*(longlong *)(lVar2 + 0x2d0) == 0) {
        fVar8 = 0.0;
      }
      else {
        fVar8 = *(float *)(*(longlong *)(lVar2 + 0x2d0) + 0x38);
      }
    }
    else {
      fVar8 = *(float *)(lVar2 + 0x2dc);
    }
    lVar3 = FWeakObjectPtr::Get(param_1);
    uVar5 = 0;
    lVar2 = *(longlong *)(lVar3 + 0x2f0);
    if (0 < *(int *)(lVar3 + 0x2e8)) {
      plVar4 = *(longlong **)(lVar3 + 0x2e0);
      uVar7 = uVar5;
      do {
        iVar6 = (int)uVar7;
        if (*plVar4 == lVar2) {
          if (0 < iVar6) {
            lVar2 = (*(longlong **)(lVar3 + 0x2e0))[(longlong)iVar6 * 0xf + -0xf];
          }
          break;
        }
        uVar7 = (ulonglong)(iVar6 + 1);
        uVar5 = uVar5 + 1;
        plVar4 = plVar4 + 0xf;
      } while ((longlong)uVar5 < (longlong)*(int *)(lVar3 + 0x2e8));
    }
    FUN_1408e8b50(lVar3,lVar2,param_2 / fVar8);
  }
  return;
}



// FUNCTION 1408e8cf0 FUN_1408e8cf0 body=83 status=ok
// SIG undefined FUN_1408e8cf0(void)

void FUN_1408e8cf0(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((param_1 != (longlong *)0x0) && (lVar1 = (**(code **)(*param_1 + 0x148))(), lVar1 != 0)) &&
      (plVar2 = (longlong *)FUN_142d5ecc0(lVar1), plVar2 != (longlong *)0x0)) &&
     (plVar2 = (longlong *)(**(code **)(*plVar2 + 0x2b8))(plVar2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,param_2);
  }
  return;
}



// FUNCTION 1408e8d50 FUN_1408e8d50 body=53 status=ok
// SIG undefined FUN_1408e8d50(void)

void FUN_1408e8d50(longlong param_1)

{
  char cVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  cVar1 = FUN_14058c1e0((undefined4 *)(param_1 + 0x18));
  if (cVar1 != '\0') {
    FWeakObjectPtr::operator=(&local_res8,0);
    *(undefined4 *)(param_1 + 0x18) = local_res8;
    *(undefined4 *)(param_1 + 0x1c) = local_resc;
  }
  return;
}



// FUNCTION 1408e8d90 FUN_1408e8d90 body=497 status=ok
// SIG undefined FUN_1408e8d90(void)

void FUN_1408e8d90(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  float fVar8;
  float fVar9;
  longlong local_res8;
  
  if ((*(longlong **)(param_1 + 0x38) != (longlong *)0x0) &&
     (lVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x148))(), lVar4 != 0)) {
    FUN_1408e4230(&local_res8,lVar4);
    cVar3 = FWeakObjectPtr::IsValid(param_1 + 0x18);
    lVar2 = local_res8;
    if ((cVar3 == '\0') ||
       (lVar5 = FWeakObjectPtr::Get(param_1 + 0x18), *(longlong *)(lVar5 + 0x2d0) == 0)) {
      fVar9 = *(float *)(lVar4 + 0x790);
    }
    else {
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
      if (*(char *)(lVar4 + 0x2d8) == '\0') {
        if (*(longlong *)(lVar4 + 0x2d0) == 0) {
          fVar8 = 0.0;
        }
        else {
          fVar8 = *(float *)(*(longlong *)(lVar4 + 0x2d0) + 0x38);
        }
      }
      else {
        fVar8 = *(float *)(lVar4 + 0x2dc);
      }
      lVar4 = FWeakObjectPtr::Get(param_1 + 0x18);
      local_res8 = 0;
      fVar9 = ((float)(*(int *)(lVar4 + 0x37c) - 1) + *(float *)(param_1 + 0x20)) * fVar8;
      if (lVar2 != 0) {
        plVar6 = *(longlong **)(param_1 + 8);
        iVar1 = *(int *)(param_1 + 0x10);
        lVar4 = (longlong)iVar1 * 0x10;
        plVar7 = plVar6 + (longlong)iVar1 * 2;
        for (; plVar6 != plVar7; plVar6 = plVar6 + 2) {
          if (*plVar6 == lVar2) goto LAB_1408e8ece;
        }
        *(int *)(param_1 + 0x10) = iVar1 + 1;
        if (*(int *)(param_1 + 0x14) < iVar1 + 1) {
          TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 8);
        }
        lVar5 = *(longlong *)(param_1 + 8);
        *(longlong *)(lVar4 + lVar5) = lVar2;
        *(undefined8 *)(lVar4 + 8 + lVar5) = 0;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 8) + lVar4);
LAB_1408e8ece:
        *(float *)(plVar6 + 1) = fVar8;
      }
    }
    fVar8 = fVar9 - *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x34) = fVar9;
    if (0.0 < fVar8) {
      plVar7 = *(longlong **)(param_1 + 8);
      plVar6 = plVar7 + (longlong)*(int *)(param_1 + 0x10) * 2;
      for (; plVar7 != plVar6; plVar7 = plVar7 + 2) {
        if (*plVar7 == lVar2) {
          *(undefined4 *)((longlong)plVar7 + 0xc) = *(undefined4 *)(param_1 + 0x20);
        }
        else {
          fVar9 = fVar8 / *(float *)(plVar7 + 1) + *(float *)((longlong)plVar7 + 0xc);
          *(float *)((longlong)plVar7 + 0xc) = fVar9;
          if (1.0 < fVar9) {
            *(float *)((longlong)plVar7 + 0xc) = fVar9 - (float)(int)fVar9;
          }
        }
      }
    }
  }
  return;
}



// FUNCTION 1408e8f90 FUN_1408e8f90 body=331 status=ok
// SIG undefined FUN_1408e8f90(void)

void FUN_1408e8f90(longlong param_1,float param_2,float param_3,float param_4)

{
  float *pfVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  float fVar9;
  
  if (param_3 < param_2) {
    fVar9 = param_2;
    if (1.0 <= param_2) {
      fVar9 = 1.0;
    }
    FUN_1408e8f90(param_1,fVar9,0x3f800000,(int)param_4 + -1);
    param_2 = param_2 + -1.0;
  }
  pfVar8 = *(float **)(param_1 + 0x88);
  pfVar1 = pfVar8 + (longlong)*(int *)(param_1 + 0x90) * 10;
  for (; pfVar8 != pfVar1; pfVar8 = pfVar8 + 10) {
    if (((param_2 <= *pfVar8) && (*pfVar8 < param_3)) && ((uint)pfVar8[5] < (uint)param_4)) {
      pfVar8[5] = param_4;
      lVar7 = *(longlong *)(pfVar8 + 6);
      lVar5 = (longlong)(int)pfVar8[8] * 0x10 + lVar7;
      if (lVar7 != lVar5) {
        lVar6 = lVar7 + 8;
        do {
          cVar2 = FWeakObjectPtr::IsValid(lVar7);
          if ((cVar2 != '\0') && (cVar2 = FWeakObjectPtr::IsValid(lVar6), cVar2 != '\0')) {
            plVar3 = (longlong *)FWeakObjectPtr::Get(lVar7);
            uVar4 = FWeakObjectPtr::Get(lVar6);
            (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,0);
          }
          lVar7 = lVar7 + 0x10;
          lVar6 = lVar6 + 0x10;
        } while (lVar7 != lVar5);
      }
      if (*(char *)(pfVar8 + 4) != '\0') {
        *(char *)(param_1 + 0x98) = *(char *)(pfVar8 + 4);
      }
    }
  }
  return;
}



// FUNCTION 1408e90e0 FUN_1408e90e0 body=483 status=ok
// SIG undefined FUN_1408e90e0(void)

void FUN_1408e90e0(longlong param_1)

{
  float *pfVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
  
  lVar6 = *(longlong *)(param_1 + 0x48);
  lVar8 = (longlong)*(int *)(param_1 + 0x50) * 0x98 + lVar6;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x98) {
    pfVar7 = *(float **)(lVar6 + 0x18);
    if ((pfVar7 != (float *)0x0) && (*(float *)(lVar6 + 0x90) != *pfVar7)) {
      *pfVar7 = *(float *)(lVar6 + 0x90);
      (**(code **)(**(longlong **)(lVar6 + 0x10) + 600))
                (*(longlong **)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 8));
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x58);
  lVar8 = (longlong)*(int *)(param_1 + 0x60) * 0x1f0 + lVar6;
  if (lVar6 != lVar8) {
    pfVar7 = (float *)(lVar6 + 0x1e8);
    do {
      pfVar1 = *(float **)(pfVar7 + -0x74);
      if ((pfVar1 != (float *)0x0) &&
         ((((pfVar7[-2] != *pfVar1 || (pfVar7[-1] != pfVar1[1])) || (*pfVar7 != pfVar1[2])) ||
          (pfVar7[1] != pfVar1[3])))) {
        fVar3 = pfVar7[-1];
        fVar4 = *pfVar7;
        fVar5 = pfVar7[1];
        *pfVar1 = pfVar7[-2];
        pfVar1[1] = fVar3;
        pfVar1[2] = fVar4;
        pfVar1[3] = fVar5;
        (**(code **)(**(longlong **)(pfVar7 + -0x76) + 600))
                  (*(longlong **)(pfVar7 + -0x76),*(undefined8 *)(pfVar7 + -0x78));
      }
      lVar6 = lVar6 + 0x1f0;
      pfVar7 = pfVar7 + 0x7c;
    } while (lVar6 != lVar8);
  }
  lVar6 = *(longlong *)(param_1 + 0x68);
  lVar8 = (longlong)*(int *)(param_1 + 0x70) * 0x1e8 + lVar6;
  for (; lVar6 != lVar8; lVar6 = lVar6 + 0x1e8) {
    piVar2 = *(int **)(lVar6 + 0x18);
    if ((piVar2 != (int *)0x0) && (*piVar2 != *(int *)(lVar6 + 0x1e0))) {
      *piVar2 = *(int *)(lVar6 + 0x1e0);
      (**(code **)(**(longlong **)(lVar6 + 0x10) + 600))
                (*(longlong **)(lVar6 + 0x10),*(undefined8 *)(lVar6 + 8));
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x78);
  lVar8 = (longlong)*(int *)(param_1 + 0x80) * 0x1f0 + lVar6;
  if (lVar6 != lVar8) {
    pfVar7 = (float *)(lVar6 + 0x1e8);
    do {
      pfVar1 = *(float **)(pfVar7 + -0x74);
      if ((pfVar1 != (float *)0x0) &&
         (((pfVar7[-2] != *pfVar1 || (pfVar7[-1] != pfVar1[1])) ||
          ((*pfVar7 != pfVar1[2] || (pfVar7[1] != pfVar1[3])))))) {
        fVar3 = pfVar7[-1];
        fVar4 = *pfVar7;
        fVar5 = pfVar7[1];
        *pfVar1 = pfVar7[-2];
        pfVar1[1] = fVar3;
        pfVar1[2] = fVar4;
        pfVar1[3] = fVar5;
        (**(code **)(**(longlong **)(pfVar7 + -0x76) + 600))
                  (*(longlong **)(pfVar7 + -0x76),*(undefined8 *)(pfVar7 + -0x78));
      }
      lVar6 = lVar6 + 0x1f0;
      pfVar7 = pfVar7 + 0x7c;
    } while (lVar6 != lVar8);
  }
  return;
}



// FUNCTION 1408e92d0 FUN_1408e92d0 body=937 status=ok
// SIG undefined FUN_1408e92d0(void)

void FUN_1408e92d0(longlong param_1,char param_2)

{
  ulonglong *puVar1;
  longlong *plVar2;
  bool bVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_68 [64];
  
  if (*(longlong *)(param_1 + 0x398) != 0) {
    puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x398) + 8);
    LOCK();
    uVar4 = *puVar1;
    if (uVar4 == 0) {
      *puVar1 = 0;
      uVar4 = 0;
    }
    UNLOCK();
    if (param_2 == '\0') {
      if ((uVar4 >> 0x1a & 1) == 0) {
        uVar6 = FTaskGraphInterface::Get();
        FTaskGraphInterface::WaitUntilTaskCompletes(uVar6,param_1 + 0x398,0xff);
      }
    }
    else if ((uVar4 >> 0x1a & 1) == 0) {
      return;
    }
  }
  plVar2 = (longlong *)(param_1 + 0x2d0);
  if (*plVar2 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x394) == '\0') {
    fVar14 = *(float *)(param_1 + 0x378);
  }
  else {
    fVar14 = *(float *)(param_1 + 0x390);
  }
  lVar12 = *(longlong *)(param_1 + 0x118);
  if (lVar12 != 0) {
    lVar5 = AFGPoleHologram::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (bVar3) goto LAB_1408e93b2;
  }
  lVar12 = 0;
LAB_1408e93b2:
  if (param_2 == '\0') {
    FUN_1408e3850(param_1,fVar14);
  }
  lVar5 = *(longlong *)(param_1 + 0x120);
  if (lVar5 == 0) {
    lVar5 = FUN_1423407b0(param_1);
  }
  if ((*plVar2 != 0) && (*(longlong *)(*plVar2 + 0x28) != 0)) {
    uVar6 = FUN_1428cccb0(lVar5);
    puVar8 = *(undefined8 **)(param_1 + 0x2f8);
    puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x300) * 0x10;
    for (; puVar8 != puVar9; puVar8 = puVar8 + 0x10) {
      UMaterialParameterCollectionInstance::SetScalarParameterValue
                (uVar6,*puVar8,*(undefined4 *)(puVar8 + 0xf));
    }
    puVar8 = *(undefined8 **)(param_1 + 0x308);
    puVar9 = puVar8 + (longlong)*(int *)(param_1 + 0x310) * 0x3b;
    for (; puVar8 != puVar9; puVar8 = puVar8 + 0x3b) {
      UMaterialParameterCollectionInstance::SetVectorParameterValue(uVar6,*puVar8,puVar8 + 0x39);
    }
  }
  FUN_1408e90e0(plVar2);
  if (lVar12 != 0) {
    FUN_1408e8f90(plVar2,*(undefined4 *)(param_1 + 0x38c),fVar14,*(undefined4 *)(param_1 + 0x37c));
  }
  lVar12 = *(longlong *)(param_1 + 0x118);
  if (lVar12 != 0) {
    lVar5 = AFGPoleHologram::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if ((bVar3) && (*(longlong *)(lVar12 + 0x460) != 0)) {
      FUN_14236c8c0(*(longlong *)(lVar12 + 0x460),local_68);
      pfVar11 = *(float **)(lVar12 + 0x4a0);
      fVar15 = *(float *)(*(longlong *)(lVar12 + 0x460) + 0x2e4);
      pfVar10 = pfVar11 + (longlong)*(int *)(lVar12 + 0x4a8) * 0xe;
      for (; pfVar11 != pfVar10; pfVar11 = pfVar11 + 0xe) {
        if (((*(longlong *)(pfVar11 + 0xc) != 0) && (*(longlong *)(pfVar11 + 4) != 0)) &&
           (*(longlong *)(pfVar11 + 6) != 0)) {
          puVar7 = (undefined4 *)FLinearColor::ToFColor(local_68,local_res10,1);
          **(undefined4 **)(pfVar11 + 4) = *puVar7;
          **(float **)(pfVar11 + 6) = fVar15 * *pfVar11;
          lVar12 = **(longlong **)(pfVar11 + 0xc);
          puVar8 = (undefined8 *)FName::FName(local_res18,L"LightColor",1);
          (**(code **)(lVar12 + 600))(*(undefined8 *)(pfVar11 + 0xc),*puVar8);
          lVar12 = **(longlong **)(pfVar11 + 0xc);
          puVar8 = (undefined8 *)FName::FName(local_res20,L"Intensity",1);
          (**(code **)(lVar12 + 600))(*(undefined8 *)(pfVar11 + 0xc),*puVar8);
        }
      }
    }
  }
  if ((*plVar2 != 0) && (lVar12 = *(longlong *)(*plVar2 + 0x30), lVar12 != 0)) {
    if (*(char *)(param_1 + 0x394) == '\0') {
      uVar13 = *(undefined4 *)(param_1 + 0x378);
    }
    else {
      uVar13 = *(undefined4 *)(param_1 + 0x390);
    }
    uVar13 = FUN_1405a9460(lVar12,uVar13,0x3f80000000000000);
    FUN_1405aa060(*(undefined8 *)(*plVar2 + 0x30),uVar13,0,4);
  }
  fVar15 = 0.0;
  if ((0.0 <= fVar14) && (fVar15 = fVar14, 1.0 <= fVar14)) {
    fVar15 = 1.0;
  }
  *(float *)(param_1 + 0x38c) = fVar15;
  FUN_1423424c0(param_1);
  *(undefined1 *)(param_1 + 0x3a1) = 0;
  return;
}



// FUNCTION 1408e96a0 FUN_1408e96a0 body=151 status=ok
// SIG undefined FUN_1408e96a0(void)

longlong FUN_1408e96a0(void)

{
  if (DAT_146862608 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayCycleInstance",&DAT_146862608,FUN_140447710,
                  0x58,0x12000000,0,L"Engine",InternalConstructor<UMTMeshCommand_UpdateUVChannel>,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862608;
}



// FUNCTION 1408e9740 FUN_1408e9740 body=162 status=ok
// SIG undefined FUN_1408e9740(void)

longlong FUN_1408e9740(void)

{
  if (DAT_1468624d8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"MaterialExpressionTimeOfDay",&DAT_1468624d8,
                  FUN_140447710,0x40,0x10000000,0,L"Engine",&LAB_1408ea8f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  UMaterialExpression::GetPrivateStaticClass,&LAB_140447700,0);
  }
  return DAT_1468624d8;
}



// FUNCTION 1408e97f0 FUN_1408e97f0 body=47 status=ok
// SIG undefined FUN_1408e97f0(void)

longlong FUN_1408e97f0(void)

{
  if (DAT_146862508 == 0) {
    FUN_141786440(&DAT_146862508,&PTR_GetPrivateStaticClass_144140bb0);
  }
  return DAT_146862508;
}



// FUNCTION 1408e9820 FUN_1408e9820 body=47 status=ok
// SIG undefined FUN_1408e9820(void)

longlong FUN_1408e9820(void)

{
  if (DAT_1468624f0 == 0) {
    FUN_141786a30(&DAT_1468624f0,&PTR_FUN_146283a20);
  }
  return DAT_1468624f0;
}



// FUNCTION 1408e9850 FUN_1408e9850 body=47 status=ok
// SIG undefined FUN_1408e9850(void)

longlong FUN_1408e9850(void)

{
  if (DAT_1468624f8 == 0) {
    FUN_141786a30(&DAT_1468624f8,&PTR_FUN_146283ad0);
  }
  return DAT_1468624f8;
}



// FUNCTION 1408e9880 FUN_1408e9880 body=47 status=ok
// SIG undefined FUN_1408e9880(void)

longlong FUN_1408e9880(void)

{
  if (DAT_146862500 == 0) {
    FUN_141786a30(&DAT_146862500,&PTR_FUN_146283b50);
  }
  return DAT_146862500;
}



// FUNCTION 1408e98d0 FUN_1408e98d0 body=47 status=ok
// SIG undefined FUN_1408e98d0(void)

longlong FUN_1408e98d0(void)

{
  if (DAT_146862630 == 0) {
    FUN_141786440(&DAT_146862630,&PTR_FUN_144141140);
  }
  return DAT_146862630;
}



// FUNCTION 1408e9930 FUN_1408e9930 body=151 status=ok
// SIG undefined FUN_1408e9930(void)

longlong FUN_1408e9930(void)

{
  if (DAT_146862638 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayKeyBase",&DAT_146862638,FUN_140447710,0x38,
                  0x10000001,0,L"Engine",&LAB_1408ea940,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146862638;
}



// FUNCTION 1408e99d0 FUN_1408e99d0 body=47 status=ok
// SIG undefined FUN_1408e99d0(void)

longlong FUN_1408e99d0(void)

{
  if (DAT_1468626a8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468626a8,&PTR_FUN_1462859c0);
  }
  return DAT_1468626a8;
}



// FUNCTION 1408e9a00 FUN_1408e9a00 body=162 status=ok
// SIG undefined FUN_1408e9a00(void)

longlong FUN_1408e9a00(void)

{
  if (DAT_146862620 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayEventKey",&DAT_146862620,FUN_140447710,0x48,
                  0x10000000,0,L"Engine",&LAB_1408ea930,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1408e9930,&LAB_140447700,0);
  }
  return DAT_146862620;
}



// FUNCTION 1408e9ab0 FUN_1408e9ab0 body=53 status=ok
// SIG undefined FUN_1408e9ab0(void)

void FUN_1408e9ab0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144143dc0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408e9af0 FUN_1408e9af0 body=162 status=ok
// SIG undefined FUN_1408e9af0(void)

longlong FUN_1408e9af0(void)

{
  if (DAT_146862568 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayBlueprintLibrary",&DAT_146862568,FUN_1408ec190,
                  0x28,0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146862568;
}



// FUNCTION 1408e9ba0 FUN_1408e9ba0 body=47 status=ok
// SIG undefined FUN_1408e9ba0(void)

longlong FUN_1408e9ba0(void)

{
  if (DAT_146862560 == 0) {
    FUN_141786440(&DAT_146862560,&PTR_FUN_144141b20);
  }
  return DAT_146862560;
}



// FUNCTION 1408e9bd0 FUN_1408e9bd0 body=47 status=ok
// SIG undefined FUN_1408e9bd0(void)

longlong FUN_1408e9bd0(void)

{
  if (DAT_146862518 == 0) {
    FUN_141786a30(&DAT_146862518,&PTR_FUN_146283fd0);
  }
  return DAT_146862518;
}



// FUNCTION 1408e9c00 FUN_1408e9c00 body=47 status=ok
// SIG undefined FUN_1408e9c00(void)

longlong FUN_1408e9c00(void)

{
  if (DAT_146862520 == 0) {
    FUN_141786a30(&DAT_146862520,&PTR_FUN_146284050);
  }
  return DAT_146862520;
}



// FUNCTION 1408e9c30 FUN_1408e9c30 body=47 status=ok
// SIG undefined FUN_1408e9c30(void)

longlong FUN_1408e9c30(void)

{
  if (DAT_146862528 == 0) {
    FUN_141786a30(&DAT_146862528,&PTR_FUN_146284150);
  }
  return DAT_146862528;
}



// FUNCTION 1408e9c60 FUN_1408e9c60 body=53 status=ok
// SIG undefined FUN_1408e9c60(void)

void FUN_1408e9c60(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144143ed8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9ca0 FUN_1408e9ca0 body=47 status=ok
// SIG undefined FUN_1408e9ca0(void)

longlong FUN_1408e9ca0(void)

{
  if (DAT_146862530 == 0) {
    FUN_141786a30(&DAT_146862530,&PTR_FUN_1462841d0);
  }
  return DAT_146862530;
}



// FUNCTION 1408e9cd0 FUN_1408e9cd0 body=47 status=ok
// SIG undefined FUN_1408e9cd0(void)

longlong FUN_1408e9cd0(void)

{
  if (DAT_146862538 == 0) {
    FUN_141786a30(&DAT_146862538,&PTR_FUN_1462842c0);
  }
  return DAT_146862538;
}



// FUNCTION 1408e9d00 FUN_1408e9d00 body=47 status=ok
// SIG undefined FUN_1408e9d00(void)

longlong FUN_1408e9d00(void)

{
  if (DAT_146862540 == 0) {
    FUN_141786a30(&DAT_146862540,&PTR_FUN_146284340);
  }
  return DAT_146862540;
}



// FUNCTION 1408e9d30 FUN_1408e9d30 body=47 status=ok
// SIG undefined FUN_1408e9d30(void)

longlong FUN_1408e9d30(void)

{
  if (DAT_146862548 == 0) {
    FUN_141786a30(&DAT_146862548,&PTR_FUN_1462843c0);
  }
  return DAT_146862548;
}



// FUNCTION 1408e9d60 FUN_1408e9d60 body=47 status=ok
// SIG undefined FUN_1408e9d60(void)

longlong FUN_1408e9d60(void)

{
  if (DAT_146862550 == 0) {
    FUN_141786a30(&DAT_146862550,&PTR_FUN_1462844b0);
  }
  return DAT_146862550;
}



// FUNCTION 1408e9d90 FUN_1408e9d90 body=47 status=ok
// SIG undefined FUN_1408e9d90(void)

longlong FUN_1408e9d90(void)

{
  if (DAT_146862558 == 0) {
    FUN_141786a30(&DAT_146862558,&PTR_FUN_146284590);
  }
  return DAT_146862558;
}



// FUNCTION 1408e9dc0 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FAnimNode_Fabrik_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1f0;
    *puVar1 = &PTR_FUN_144143ff0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 1408e9e00 FUN_1408e9e00 body=53 status=ok
// SIG undefined FUN_1408e9e00(void)

void FUN_1408e9e00(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1e8;
    *puVar1 = &PTR_FUN_144144108;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9e40 FUN_1408e9e40 body=53 status=ok
// SIG undefined FUN_1408e9e40(void)

void FUN_1408e9e40(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1f0;
    *puVar1 = &PTR_FUN_144144220;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9e90 FUN_1408e9e90 body=53 status=ok
// SIG undefined FUN_1408e9e90(void)

void FUN_1408e9e90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x98;
    *puVar1 = &PTR_FUN_144144338;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9ed0 FUN_1408e9ed0 body=53 status=ok
// SIG undefined FUN_1408e9ed0(void)

void FUN_1408e9ed0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144134d30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9f10 FUN_1408e9f10 body=53 status=ok
// SIG undefined FUN_1408e9f10(void)

void FUN_1408e9f10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *puVar1 = &PTR_FUN_144144450;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9f50 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FStructSerializerTestStruct_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x1d8;
    *puVar1 = &PTR_FUN_144144568;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9f90 FUN_1408e9f90 body=53 status=ok
// SIG undefined FUN_1408e9f90(void)

void FUN_1408e9f90(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_144144680;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408e9fe0 FUN_1408e9fe0 body=151 status=ok
// SIG undefined FUN_1408e9fe0(void)

longlong FUN_1408e9fe0(void)

{
  if (DAT_1468626e8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayLayer",&DAT_1468626e8,FUN_140447710,0xa0,
                  0x10000000,0,L"Engine",&LAB_1408ea960,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468626e8;
}



// FUNCTION 1408ea080 FUN_1408ea080 body=47 status=ok
// SIG undefined FUN_1408ea080(void)

longlong FUN_1408ea080(void)

{
  if (DAT_1468624c8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
  }
  return DAT_1468624c8;
}



// FUNCTION 1408ea0b0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong AFGPoleHologram::GetPrivateStaticClass(void)

{
  if (DAT_146862510 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayActor",&DAT_146862510,FUN_1408ec160,0x4d0,
                  0x10000000,0,L"Engine",&LAB_1408ea8a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AActor::AddReferencedObjects,
                  &LAB_140493a70,&LAB_140447700,0);
  }
  return DAT_146862510;
}



// FUNCTION 1408ea160 FUN_1408ea160 body=53 status=ok
// SIG undefined FUN_1408ea160(void)

void FUN_1408ea160(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144144798;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408ea1a0 FUN_1408ea1a0 body=162 status=ok
// SIG undefined FUN_1408ea1a0(void)

longlong FUN_1408ea1a0(void)

{
  if (DAT_146862718 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayPropertyKey",&DAT_146862718,FUN_140447710,0x88,
                  0x10000000,0,L"Engine",&LAB_1408ea970,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_1408e9930,&LAB_140447700,0);
  }
  return DAT_146862718;
}



// FUNCTION 1408ea260 FUN_1408ea260 body=162 status=ok
// SIG undefined FUN_1408ea260(void)

longlong FUN_1408ea260(void)

{
  if (DAT_1468625b8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayComponent",&DAT_1468625b8,FUN_1408ec1c0,0x3b0,
                  0x10000000,0,L"Engine",&LAB_1408ea910,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405bc4a0,&LAB_140447700,0);
  }
  return DAT_1468625b8;
}



// FUNCTION 1408ea310 FUN_1408ea310 body=47 status=ok
// SIG undefined FUN_1408ea310(void)

longlong FUN_1408ea310(void)

{
  if (DAT_1468625b0 == 0) {
    FUN_141786440(&DAT_1468625b0,&PTR_FUN_144142d50);
  }
  return DAT_1468625b0;
}



// FUNCTION 1408ea340 FUN_1408ea340 body=47 status=ok
// SIG undefined FUN_1408ea340(void)

longlong FUN_1408ea340(void)

{
  if (DAT_1468625a0 == 0) {
    FUN_141786a30(&DAT_1468625a0,&PTR_FUN_146284a70);
  }
  return DAT_1468625a0;
}



// FUNCTION 1408ea370 FUN_1408ea370 body=47 status=ok
// SIG undefined FUN_1408ea370(void)

longlong FUN_1408ea370(void)

{
  if (DAT_1468625a8 == 0) {
    FUN_141786a30(&DAT_1468625a8,&PTR_FUN_146284b30);
  }
  return DAT_1468625a8;
}



// FUNCTION 1408ea3a0 FUN_1408ea3a0 body=53 status=ok
// SIG undefined FUN_1408ea3a0(void)

void FUN_1408ea3a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &PTR_FUN_144143750;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408ea3e0 FUN_1408ea3e0 body=53 status=ok
// SIG undefined FUN_1408ea3e0(void)

void FUN_1408ea3e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_144143868;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408ea420 FUN_1408ea420 body=53 status=ok
// SIG undefined FUN_1408ea420(void)

void FUN_1408ea420(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144143980;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 1408ea470 FUN_1408ea470 body=151 status=ok
// SIG undefined FUN_1408ea470(void)

longlong FUN_1408ea470(void)

{
  if (DAT_1468625f8 == 0) {
    FUN_14171ccd0(L"/Script/GbxTimeOfDay",L"TimeOfDayCycle",&DAT_1468625f8,FUN_140447710,0x40,
                  0x10000000,0,L"Engine",&LAB_1408ea920,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_1468625f8;
}



// FUNCTION 1408ea510 FUN_1408ea510 body=47 status=ok
// SIG undefined FUN_1408ea510(void)

longlong FUN_1408ea510(void)

{
  if (DAT_1468625e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468625e8,&PTR_FUN_146284ef0);
  }
  return DAT_1468625e8;
}



// FUNCTION 1408ea540 FUN_1408ea540 body=547 status=ok
// SIG undefined FUN_1408ea540(void)

void FUN_1408ea540(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  FUN_1405d95e0(param_1,param_5 + param_3,param_4);
  puVar9 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar11 = (undefined4 *)(param_2 + 0x40);
    puVar10 = puVar9 + 7;
    do {
      *puVar9 = *(undefined8 *)(puVar11 + -0x10);
      puVar10[-6] = 0;
      iVar6 = puVar11[-0xc];
      lVar8 = *(longlong *)(puVar11 + -0xe);
      *(int *)(puVar10 + -5) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar10 + -0x24) = 0;
      }
      else {
        TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(puVar10 + -6,iVar6,0);
        puVar5 = (undefined8 *)puVar10[-6];
        puVar7 = (undefined4 *)(lVar8 + 0x78);
        do {
          *puVar5 = *(undefined8 *)(puVar7 + -0x1e);
          FRichCurve::FRichCurve(puVar5 + 1,puVar7 + -0x1c);
          uVar2 = *puVar7;
          puVar7 = puVar7 + 0x20;
          *(undefined4 *)(puVar5 + 0xf) = uVar2;
          puVar5 = puVar5 + 0x10;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar10[-4] = 0;
      FUN_1408e11c0(puVar10 + -4,*(undefined8 *)(puVar11 + -10),puVar11[-8],0,0);
      puVar10[-2] = 0;
      iVar6 = puVar11[-4];
      lVar8 = *(longlong *)(puVar11 + -6);
      *(int *)(puVar10 + -1) = iVar6;
      if (iVar6 == 0) {
        *(undefined4 *)((longlong)puVar10 + -4) = 0;
      }
      else {
        FUN_1408e7690(puVar10 + -2,iVar6,0);
        puVar7 = (undefined4 *)puVar10[-2];
        lVar8 = lVar8 + 0x20;
        do {
          uVar2 = *(undefined4 *)(lVar8 + -0x1c);
          uVar3 = *(undefined4 *)(lVar8 + -0x18);
          uVar4 = *(undefined4 *)(lVar8 + -0x14);
          *puVar7 = *(undefined4 *)(lVar8 + -0x20);
          puVar7[1] = uVar2;
          puVar7[2] = uVar3;
          puVar7[3] = uVar4;
          *(undefined8 *)(puVar7 + 4) = *(undefined8 *)(lVar8 + -0x10);
          *(undefined8 *)(puVar7 + 6) = *(undefined8 *)(lVar8 + -8);
          FRichCurve::FRichCurve(puVar7 + 8,lVar8);
          puVar1 = (undefined4 *)(lVar8 + 0x70);
          lVar8 = lVar8 + 0x98;
          puVar7[0x24] = *puVar1;
          puVar7 = puVar7 + 0x26;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *puVar10 = 0;
      FUN_1408e1020(puVar10,*(undefined8 *)(puVar11 + -2),*puVar11,0,0);
      puVar10[2] = 0;
      FUN_1408e0dc0(puVar10 + 2,*(undefined8 *)(puVar11 + 2),puVar11[4],0,0);
      puVar10[4] = 0;
      FUN_1408e1020(puVar10 + 4,*(undefined8 *)(puVar11 + 6),puVar11[8],0,0);
      puVar10[6] = 0;
      FUN_1408ea770(puVar10 + 6,*(undefined8 *)(puVar11 + 10),puVar11[0xc],0,0);
      puVar9 = puVar9 + 0xf;
      puVar10 = puVar10 + 0xf;
      puVar11 = puVar11 + 0x1e;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408ea770 FUN_1408ea770 body=298 status=ok
// SIG undefined FUN_1408ea770(void)

void FUN_1408ea770(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar7 = (undefined4 *)*param_1;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_2 + 8);
    puVar6 = puVar7 + 9;
    do {
      *puVar7 = *(undefined4 *)(puVar5 + -1);
      *(undefined8 *)(puVar6 + -7) = *puVar5;
      *(undefined1 *)(puVar6 + -5) = *(undefined1 *)(puVar5 + 1);
      puVar6[-4] = *(undefined4 *)((longlong)puVar5 + 0xc);
      *(undefined8 *)(puVar6 + -3) = 0;
      iVar4 = *(int *)(puVar5 + 3);
      lVar1 = puVar5[2];
      puVar6[-1] = iVar4;
      if (iVar4 == 0) {
        *puVar6 = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(puVar6 + -3,iVar4,0);
        puVar2 = *(undefined4 **)(puVar6 + -3);
        puVar3 = (undefined4 *)(lVar1 + 4);
        do {
          *puVar2 = puVar3[-1];
          puVar2[1] = *puVar3;
          puVar2[2] = puVar3[1];
          puVar2[3] = puVar3[2];
          iVar4 = iVar4 + -1;
          puVar2 = puVar2 + 4;
          puVar3 = puVar3 + 4;
        } while (iVar4 != 0);
      }
      puVar7 = puVar7 + 10;
      puVar6 = puVar6 + 10;
      puVar5 = puVar5 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1408ea8b0 InternalConstructor<UMTMeshCommand_UpdateUVChannel> body=59 status=ok
// SIG undefined InternalConstructor<UMTMeshCommand_UpdateUVChannel>(void)

void InternalConstructor<UMTMeshCommand_UpdateUVChannel>(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_141781840(puVar1,param_1);
    *puVar1 = &PTR__scalar_deleting_destructor__144143ab8;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
  }
  return;
}



// FUNCTION 1408eaaa0 FUN_1408eaaa0 body=110 status=ok
// SIG undefined FUN_1408eaaa0(void)

undefined8 * FUN_1408eaaa0(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  *param_1 = 0;
  lVar3 = 4;
  lVar1 = (longlong)param_1 + 0x3c;
  puVar2 = param_1 + 1;
  do {
    *(undefined8 *)(lVar1 + -0x2c) = 0;
    *(undefined8 *)(lVar1 + -0x24) = 0;
    *(undefined8 *)(lVar1 + -0xc) = 0;
    *(undefined8 *)(lVar1 + -4) = 0;
    *(undefined4 *)(lVar1 + 4) = 0xffffffff;
    *(undefined4 *)(lVar1 + 8) = 0;
    *(undefined8 *)(lVar1 + 0x14) = 0;
    *(undefined4 *)(lVar1 + 0x1c) = 0;
    *puVar2 = &PTR_FUN_14413ebc8;
    *(undefined2 *)(lVar1 + 0x24) = 0x404;
    *(undefined4 *)(lVar1 + 0x28) = 0x7f7fffff;
    *(undefined8 *)(lVar1 + 0x2c) = 0;
    *(undefined8 *)(lVar1 + 0x34) = 0;
    lVar3 = lVar3 + -1;
    lVar1 = lVar1 + 0x70;
    puVar2 = puVar2 + 0xe;
  } while (lVar3 != 0);
  return param_1;
}



// FUNCTION 1408eab10 FUN_1408eab10 body=150 status=ok
// SIG undefined FUN_1408eab10(void)

void FUN_1408eab10(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      FUN_1408e2150(plVar3 + 2);
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 8;
        do {
          FRichCurve::~FRichCurve(lVar1);
          lVar1 = lVar1 + 0x80;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 1408eabb0 FUN_1408eabb0 body=169 status=ok
// SIG undefined FUN_1408eabb0(void)

void FUN_1408eabb0(undefined8 *param_1)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int iVar4;
  
  plVar3 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      FUN_1408e20b0(plVar3 + 6);
      FUN_1408e1fa0(plVar3 + 4);
      FUN_1408e20b0(plVar3 + 2);
      iVar4 = (int)plVar3[1];
      lVar1 = *plVar3;
      if (iVar4 != 0) {
        lVar1 = lVar1 + 0x20;
        do {
          FRichCurve::~FRichCurve(lVar1);
          lVar1 = lVar1 + 0x98;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        lVar1 = *plVar3;
      }
      if (lVar1 != 0) {
        FMemory::Free();
      }
      plVar3 = plVar3 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar3 = (longlong *)*param_1;
  }
  if (plVar3 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar3);
  return;
}



// FUNCTION 1408eac60 FUN_1408eac60 body=140 status=ok
// SIG undefined FUN_1408eac60(void)

void FUN_1408eac60(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_1 + 0x88);
  FUN_1408e2260(param_1 + 0x48);
  FUN_1408e21f0(param_1 + 0x28);
  iVar2 = *(int *)(param_1 + 0x18);
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x28;
    do {
      TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
      ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar1 + 0x40);
      FUN_1408e2260(lVar1);
      FUN_1408e21f0(lVar1 + -0x20);
      lVar1 = lVar1 + 0x78;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x10);
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1408eacf0 FUN_1408eacf0 body=175 status=ok
// SIG undefined FUN_1408eacf0(void)

undefined8 * FUN_1408eacf0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  
  *param_1 = *param_2;
  FUN_1408e24e0(param_1 + 1,param_2 + 1);
  FUN_1408e2620(param_1 + 5,param_2 + 5);
  plVar1 = param_1 + 0xd;
  if (plVar1 != param_2 + 0xd) {
    iVar3 = *(int *)(param_1 + 0xe);
    if (iVar3 != 0) {
      plVar2 = (longlong *)(*plVar1 + 0x18);
      do {
        if (*plVar2 != 0) {
          FMemory::Free();
        }
        plVar2 = plVar2 + 5;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    FUN_1408ea770(plVar1,param_2[0xd],*(undefined4 *)(param_2 + 0xe),
                  *(undefined4 *)((longlong)param_1 + 0x74),0);
  }
  return param_1;
}



// FUNCTION 1408eada0 operator= body=133 status=ok
// SIG undefined operator=(void)

longlong FRichCurve::operator=(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  puVar1 = (undefined8 *)(param_1 + 0x60);
  *(undefined1 *)(param_1 + 0x58) = *(undefined1 *)(param_2 + 0x58);
  *(undefined1 *)(param_1 + 0x59) = *(undefined1 *)(param_2 + 0x59);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_2 + 0x5c);
  if (puVar1 != (undefined8 *)(param_2 + 0x60)) {
    _Src = *(void **)(param_2 + 0x60);
    iVar2 = *(int *)(param_2 + 0x68);
    *(int *)(param_1 + 0x68) = iVar2;
    if ((iVar2 == 0) && (*(int *)(param_1 + 0x6c) == 0)) {
      *(undefined4 *)(param_1 + 0x6c) = 0;
    }
    else {
      TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(puVar1,iVar2);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,_Src,(longlong)iVar2 * 0x1c);
    }
  }
  return param_1;
}



// FUNCTION 1408eae30 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UViewportStatsSubsystem::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  FUN_1408eabb0(param_1 + 0x48);
  FUN_1408eab10(param_1 + 0x38);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x58);
  }
  return param_1;
}



// FUNCTION 1408eae90 FUN_1408eae90 body=100 status=ok
// SIG undefined FUN_1408eae90(void)

void FUN_1408eae90(undefined8 param_1,undefined8 *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x70);
  *param_2 = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  *(undefined4 *)(param_2 + 8) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x44) = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0;
  param_2[1] = &PTR_FUN_14413ebc8;
  *(undefined2 *)(param_2 + 0xc) = 0x404;
  *(undefined4 *)((longlong)param_2 + 100) = 0x7f7fffff;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  return;
}



// FUNCTION 1408eaf60 FUN_1408eaf60 body=83 status=ok
// SIG undefined FUN_1408eaf60(void)

void FUN_1408eaf60(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x78);
  *(undefined8 *)((longlong)param_2 + 0x10) = 0;
  *(undefined8 *)((longlong)param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 0x20) = 0;
  *(undefined8 *)((longlong)param_2 + 0x28) = 0;
  *(undefined8 *)((longlong)param_2 + 0x30) = 0;
  *(undefined8 *)((longlong)param_2 + 0x38) = 0;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  return;
}



// FUNCTION 1408eafc0 FUN_1408eafc0 body=86 status=ok
// SIG undefined FUN_1408eafc0(void)

void FUN_1408eafc0(undefined8 param_1,undefined8 *param_2)

{
  GUID *pguid;
  undefined8 *puVar1;
  undefined1 local_res10 [24];
  
  pguid = (GUID *)(param_2 + 1);
  *param_2 = 0;
  pguid->Data1 = 0;
  pguid->Data2 = 0;
  pguid->Data3 = 0;
  param_2[2] = 0;
  FWindowsPlatformMisc::CreateGuid(pguid);
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *(undefined4 *)((longlong)param_2 + 0x2c) = 0x3f800000;
  puVar1 = (undefined8 *)FName::FName(local_res10,L"Vector4",1);
  *param_2 = *puVar1;
  return;
}



// FUNCTION 1408eb060 FUN_1408eb060 body=38 status=ok
// SIG undefined FUN_1408eb060(void)

void FUN_1408eb060(undefined8 param_1,void *param_2)

{
  _guard_xfg_dispatch_icall_nop(param_2,0,0x1d8);
  FUN_1408eaaa0(param_2);
  return;
}



// FUNCTION 1408eb090 FUN_1408eb090 body=310 status=ok
// SIG undefined FUN_1408eb090(void)

undefined8 FUN_1408eb090(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = param_3[1];
    lVar7 = 4;
    *param_2 = *param_3;
    param_2[1] = uVar4;
    piVar6 = (int *)((longlong)param_2 + 0x8c);
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    do {
      piVar1 = piVar6 + -3;
      *(undefined1 *)(piVar6 + -5) =
           *(undefined1 *)((longlong)param_3 + (-0x14 - (longlong)param_2) + (longlong)piVar6);
      *(undefined1 *)((longlong)piVar6 + -0x13) =
           *(undefined1 *)((longlong)param_3 + (-0x13 - (longlong)param_2) + (longlong)piVar6);
      piVar6[-4] = *(int *)((longlong)param_3 + (-0x10 - (longlong)param_2) + (longlong)piVar6);
      piVar5 = (int *)((longlong)piVar6 + (longlong)param_3 + (-0xc - (longlong)param_2));
      if (piVar1 != piVar5) {
        iVar3 = *(int *)((longlong)piVar6 + (longlong)param_3 + (-4 - (longlong)param_2));
        _Src = *(void **)piVar5;
        piVar6[-1] = iVar3;
        if ((iVar3 == 0) && (*piVar6 == 0)) {
          *piVar6 = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar3);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar3 * 0x1c);
        }
      }
      piVar6 = piVar6 + 0x1c;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar2 = param_3 + 0x3c;
    param_3 = param_3 + 0x3d;
    *(undefined4 *)(param_2 + 0x3c) = *(undefined4 *)puVar2;
    param_2 = param_2 + 0x3d;
  }
  return 1;
}



// FUNCTION 1408eb1d0 FUN_1408eb1d0 body=105 status=ok
// SIG undefined FUN_1408eb1d0(void)

undefined8 FUN_1408eb1d0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x78);
    do {
      *(undefined8 *)(puVar1 + -0x1e) = *(undefined8 *)(param_3 + -0x78 + (longlong)puVar1);
      FRichCurve::operator=(puVar1 + -0x1c,param_3 + -0x70 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1 = puVar1 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408eb240 FUN_1408eb240 body=126 status=ok
// SIG undefined FUN_1408eb240(void)

undefined8 FUN_1408eb240(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    param_2 = param_2 + 0x20;
    do {
      puVar1 = (undefined4 *)(param_3 + -0x20 + param_2);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(undefined4 *)(param_2 + -0x20) = *puVar1;
      *(undefined4 *)(param_2 + -0x1c) = uVar2;
      *(undefined4 *)(param_2 + -0x18) = uVar3;
      *(undefined4 *)(param_2 + -0x14) = uVar4;
      *(undefined8 *)(param_2 + -0x10) = *(undefined8 *)(param_3 + -0x10 + param_2);
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8 + param_2);
      FRichCurve::operator=(param_2,param_3 + param_2);
      *(undefined4 *)(param_2 + 0x70) = *(undefined4 *)(param_3 + 0x70 + param_2);
      param_2 = param_2 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408eb2c0 FUN_1408eb2c0 body=218 status=ok
// SIG undefined FUN_1408eb2c0(void)

undefined8 FUN_1408eb2c0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  if (param_4 != 0) {
    plVar3 = (longlong *)(param_3 + 0x68);
    do {
      *param_2 = plVar3[-0xd];
      FUN_1408e24e0(param_2 + 1,plVar3 + -0xc);
      FUN_1408e2620(param_2 + 5,plVar3 + -8);
      plVar1 = param_2 + 0xd;
      if (plVar1 != plVar3) {
        iVar4 = (int)param_2[0xe];
        if (iVar4 != 0) {
          plVar2 = (longlong *)(*plVar1 + 0x18);
          do {
            if (*plVar2 != 0) {
              FMemory::Free();
            }
            plVar2 = plVar2 + 5;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408ea770(plVar1,*plVar3,(int)plVar3[1],*(undefined4 *)((longlong)param_2 + 0x74),0);
      }
      plVar3 = plVar3 + 0xf;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0xf;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408eb3a0 FUN_1408eb3a0 body=390 status=ok
// SIG undefined FUN_1408eb3a0(void)

undefined8 FUN_1408eb3a0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int local_res20;
  
  if (param_4 != 0) {
    plVar8 = (longlong *)(param_3 + 0x10);
    local_res20 = param_4;
    do {
      if (param_2 != plVar8 + -2) {
        iVar5 = (int)param_2[1];
        if (iVar5 != 0) {
          lVar2 = *param_2 + 8;
          do {
            FRichCurve::~FRichCurve(lVar2);
            lVar2 = lVar2 + 0x80;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        iVar5 = (int)plVar8[-1];
        lVar2 = plVar8[-2];
        *(int *)(param_2 + 1) = iVar5;
        if ((iVar5 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FModuleDescriptor,FDefaultAllocator>::ResizeForCopy(param_2,iVar5);
          puVar6 = (undefined8 *)*param_2;
          if (iVar5 != 0) {
            puVar3 = (undefined4 *)(lVar2 + 0x78);
            do {
              *puVar6 = *(undefined8 *)(puVar3 + -0x1e);
              FRichCurve::FRichCurve(puVar6 + 1,puVar3 + -0x1c);
              uVar1 = *puVar3;
              puVar3 = puVar3 + 0x20;
              *(undefined4 *)(puVar6 + 0xf) = uVar1;
              puVar6 = puVar6 + 0x10;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
        }
      }
      plVar9 = param_2 + 2;
      if (plVar9 != plVar8) {
        iVar5 = (int)param_2[3];
        if (iVar5 != 0) {
          lVar2 = *plVar9 + 0x1c8;
          do {
            lVar4 = 4;
            lVar7 = lVar2;
            do {
              lVar7 = lVar7 + -0x70;
              FRichCurve::~FRichCurve(lVar7);
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            lVar2 = lVar2 + 0x1d8;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        FUN_1408e11c0(plVar9,*plVar8,(int)plVar8[1],*(undefined4 *)((longlong)param_2 + 0x1c),0);
      }
      plVar8 = plVar8 + 4;
      local_res20 = local_res20 + -1;
      param_2 = param_2 + 4;
    } while (local_res20 != 0);
  }
  return 1;
}



// FUNCTION 1408eb530 FUN_1408eb530 body=549 status=ok
// SIG undefined FUN_1408eb530(void)

undefined8 FUN_1408eb530(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  int local_res20;
  
  if (param_4 != 0) {
    plVar6 = (longlong *)(param_3 + 0x10);
    local_res20 = param_4;
    do {
      if (param_2 != plVar6 + -2) {
        iVar4 = (int)param_2[1];
        if (iVar4 != 0) {
          lVar2 = *param_2 + 0x20;
          do {
            FRichCurve::~FRichCurve(lVar2);
            lVar2 = lVar2 + 0x98;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408e0f60(param_2,plVar6[-2],(int)plVar6[-1],*(undefined4 *)((longlong)param_2 + 0xc),0)
        ;
      }
      plVar1 = param_2 + 2;
      if (plVar1 != plVar6) {
        iVar4 = (int)param_2[3];
        if (iVar4 != 0) {
          lVar2 = *plVar1 + 0x1e0;
          do {
            lVar3 = 4;
            lVar5 = lVar2;
            do {
              lVar5 = lVar5 + -0x70;
              FRichCurve::~FRichCurve(lVar5);
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            lVar2 = lVar2 + 0x1f0;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408e1020(plVar1,*plVar6,(int)plVar6[1],*(undefined4 *)((longlong)param_2 + 0x1c),0);
      }
      plVar1 = param_2 + 4;
      if (plVar1 != plVar6 + 2) {
        iVar4 = (int)param_2[5];
        if (iVar4 != 0) {
          lVar2 = *plVar1 + 0x1e0;
          do {
            lVar3 = 4;
            lVar5 = lVar2;
            do {
              lVar5 = lVar5 + -0x70;
              FRichCurve::~FRichCurve(lVar5);
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            lVar2 = lVar2 + 0x1e8;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408e0dc0(plVar1,plVar6[2],(int)plVar6[3],*(undefined4 *)((longlong)param_2 + 0x2c),0);
      }
      plVar1 = param_2 + 6;
      if (plVar1 != plVar6 + 4) {
        iVar4 = (int)param_2[7];
        if (iVar4 != 0) {
          lVar2 = *plVar1 + 0x1e0;
          do {
            lVar3 = 4;
            lVar5 = lVar2;
            do {
              lVar5 = lVar5 + -0x70;
              FRichCurve::~FRichCurve(lVar5);
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
            lVar2 = lVar2 + 0x1f0;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408e1020(plVar1,plVar6[4],(int)plVar6[5],*(undefined4 *)((longlong)param_2 + 0x3c),0);
      }
      plVar6 = plVar6 + 8;
      local_res20 = local_res20 + -1;
      param_2 = param_2 + 8;
    } while (local_res20 != 0);
  }
  return 1;
}



// FUNCTION 1408eb7a0 FUN_1408eb7a0 body=299 status=ok
// SIG undefined FUN_1408eb7a0(void)

undefined8 FUN_1408eb7a0(undefined8 param_1,longlong *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  
  if (param_4 != 0) {
    plVar5 = (longlong *)(param_3 + 0x10);
    do {
      *param_2 = plVar5[-2];
      plVar1 = param_2 + 2;
      *(char *)(param_2 + 1) = (char)plVar5[-1];
      *(undefined4 *)((longlong)param_2 + 0xc) = *(undefined4 *)((longlong)plVar5 + -4);
      if (plVar1 != plVar5) {
        iVar4 = (int)param_2[3];
        if (iVar4 != 0) {
          lVar3 = *plVar1 + 0x28;
          do {
            TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
            ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(lVar3 + 0x40);
            FUN_1408e2260(lVar3);
            FUN_1408e21f0(lVar3 + -0x20);
            lVar3 = lVar3 + 0x78;
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
        }
        FUN_1408ea540(plVar1,*plVar5,(int)plVar5[1],*(undefined4 *)((longlong)param_2 + 0x1c),0);
      }
      FUN_1408eacf0(param_2 + 4,plVar5 + 2);
      *(char *)(param_2 + 0x13) = (char)plVar5[0x11];
      *(undefined1 *)((longlong)param_2 + 0x99) = *(undefined1 *)((longlong)plVar5 + 0x89);
      puVar2 = (undefined1 *)((longlong)plVar5 + 0x8a);
      plVar5 = plVar5 + 0x14;
      *(undefined1 *)((longlong)param_2 + 0x9a) = *puVar2;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x14;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408eb8d0 FUN_1408eb8d0 body=244 status=ok
// SIG undefined FUN_1408eb8d0(void)

undefined8 FUN_1408eb8d0(undefined8 param_1,undefined4 *param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  if (param_4 != 0) {
    puVar6 = (undefined8 *)(param_3 + 8);
    do {
      *param_2 = *(undefined4 *)(puVar6 + -1);
      plVar1 = (longlong *)(param_2 + 6);
      *(undefined8 *)(param_2 + 2) = *puVar6;
      *(undefined1 *)(param_2 + 4) = *(undefined1 *)(puVar6 + 1);
      param_2[5] = *(undefined4 *)((longlong)puVar6 + 0xc);
      if (plVar1 != puVar6 + 2) {
        iVar5 = *(int *)(puVar6 + 3);
        lVar2 = puVar6[2];
        param_2[8] = iVar5;
        if ((iVar5 == 0) && (param_2[9] == 0)) {
          param_2[9] = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(plVar1,iVar5);
          if (iVar5 != 0) {
            puVar3 = (undefined4 *)(lVar2 + 4);
            puVar4 = (undefined4 *)*plVar1;
            do {
              *puVar4 = puVar3[-1];
              puVar4[1] = *puVar3;
              puVar4[2] = puVar3[1];
              puVar4[3] = puVar3[2];
              iVar5 = iVar5 + -1;
              puVar3 = puVar3 + 4;
              puVar4 = puVar4 + 4;
            } while (iVar5 != 0);
          }
        }
      }
      puVar6 = puVar6 + 5;
      param_4 = param_4 + -1;
      param_2 = param_2 + 10;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1408eb9d0 FUN_1408eb9d0 body=168 status=ok
// SIG undefined FUN_1408eb9d0(void)

undefined8 FUN_1408eb9d0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  undefined8 *puVar1;
  int iVar2;
  void *_Src;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    if (param_2 != param_3) {
      iVar2 = *(int *)(param_3 + 1);
      _Src = (void *)*param_3;
      *(int *)(param_2 + 1) = iVar2;
      if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
        *(undefined4 *)((longlong)param_2 + 0xc) = 0;
      }
      else {
        TArray<FString,FDefaultAllocator>::ResizeForCopy(param_2,iVar2);
        _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 4);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    param_2[2] = *puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1408eba80 FUN_1408eba80 body=314 status=ok
// SIG undefined FUN_1408eba80(void)

undefined8 FUN_1408eba80(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    uVar4 = param_3[1];
    lVar7 = 4;
    *param_2 = *param_3;
    param_2[1] = uVar4;
    piVar6 = (int *)((longlong)param_2 + 0x8c);
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    do {
      piVar1 = piVar6 + -3;
      *(undefined1 *)(piVar6 + -5) =
           *(undefined1 *)((longlong)param_3 + (-0x14 - (longlong)param_2) + (longlong)piVar6);
      *(undefined1 *)((longlong)piVar6 + -0x13) =
           *(undefined1 *)((longlong)param_3 + (-0x13 - (longlong)param_2) + (longlong)piVar6);
      piVar6[-4] = *(int *)((longlong)param_3 + (-0x10 - (longlong)param_2) + (longlong)piVar6);
      piVar5 = (int *)((longlong)piVar6 + (longlong)param_3 + (-0xc - (longlong)param_2));
      if (piVar1 != piVar5) {
        iVar3 = *(int *)((longlong)piVar6 + (longlong)param_3 + (-4 - (longlong)param_2));
        _Src = *(void **)piVar5;
        piVar6[-1] = iVar3;
        if ((iVar3 == 0) && (*piVar6 == 0)) {
          *piVar6 = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar3);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar3 * 0x1c);
        }
      }
      piVar6 = piVar6 + 0x1c;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar2 = param_3 + 0x3c;
    uVar4 = param_3[0x3d];
    param_3 = param_3 + 0x3e;
    param_2[0x3c] = *puVar2;
    param_2[0x3d] = uVar4;
    param_2 = param_2 + 0x3e;
  }
  return 1;
}



// FUNCTION 1408ebbc0 FUN_1408ebbc0 body=297 status=ok
// SIG undefined FUN_1408ebbc0(void)

undefined8 FUN_1408ebbc0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  void *_Src;
  undefined8 uVar4;
  int *piVar5;
  int *piVar6;
  longlong lVar7;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    lVar7 = 4;
    *param_2 = *param_3;
    piVar6 = (int *)((longlong)param_2 + 0x74);
    do {
      piVar1 = piVar6 + -3;
      *(undefined1 *)(piVar6 + -5) =
           *(undefined1 *)((longlong)param_3 + (-0x14 - (longlong)param_2) + (longlong)piVar6);
      *(undefined1 *)((longlong)piVar6 + -0x13) =
           *(undefined1 *)((longlong)param_3 + (-0x13 - (longlong)param_2) + (longlong)piVar6);
      piVar6[-4] = *(int *)((longlong)param_3 + (-0x10 - (longlong)param_2) + (longlong)piVar6);
      piVar5 = (int *)((longlong)piVar6 + (longlong)param_3 + (-0xc - (longlong)param_2));
      if (piVar1 != piVar5) {
        iVar3 = *(int *)((longlong)piVar6 + (longlong)param_3 + (-4 - (longlong)param_2));
        _Src = *(void **)piVar5;
        piVar6[-1] = iVar3;
        if ((iVar3 == 0) && (*piVar6 == 0)) {
          *piVar6 = 0;
        }
        else {
          TArray<FDetectedFaceFeature2D,FDefaultAllocator>::ResizeForCopy(piVar1,iVar3);
          _guard_xfg_dispatch_icall_nop(*(void **)piVar1,_Src,(longlong)iVar3 * 0x1c);
        }
      }
      piVar6 = piVar6 + 0x1c;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    puVar2 = param_3 + 0x39;
    uVar4 = param_3[0x3a];
    param_3 = param_3 + 0x3b;
    param_2[0x39] = *puVar2;
    param_2[0x3a] = uVar4;
    param_2 = param_2 + 0x3b;
  }
  return 1;
}



// FUNCTION 1408ebcf0 FUN_1408ebcf0 body=61 status=ok
// SIG undefined FUN_1408ebcf0(void)

void FUN_1408ebcf0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 4;
  param_2 = param_2 + 0x1e0;
  do {
    param_2 = param_2 + -0x70;
    FRichCurve::~FRichCurve(param_2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1408ebd50 FUN_1408ebd50 body=41 status=ok
// SIG undefined FUN_1408ebd50(void)

void FUN_1408ebd50(undefined8 param_1,longlong param_2)

{
  TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>::
  ~TArray<FNiagaraMeshMaterialOverride,TSizedDefaultAllocator<32>_>(param_2 + 0x68);
  FUN_1408e2260(param_2 + 0x28);
  FUN_1408e21f0(param_2 + 8);
  return;
}



// FUNCTION 1408ebdb0 FUN_1408ebdb0 body=61 status=ok
// SIG undefined FUN_1408ebdb0(void)

void FUN_1408ebdb0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = 4;
  param_2 = param_2 + 0x1c8;
  do {
    param_2 = param_2 + -0x70;
    FRichCurve::~FRichCurve(param_2);
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}



// FUNCTION 1408ebdf0 FUN_1408ebdf0 body=85 status=ok
// SIG undefined FUN_1408ebdf0(void)

void FUN_1408ebdf0(void)

{
  if (DAT_1468623d8 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    DAT_1468623d8 = GetStaticEnum(FUN_1408ecc90,DAT_1468624c8,L"ETimeOfDayKeyType");
  }
  return;
}



// FUNCTION 1408ebe50 FUN_1408ebe50 body=85 status=ok
// SIG undefined FUN_1408ebe50(void)

void FUN_1408ebe50(void)

{
  if (DAT_1468623d0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    DAT_1468623d0 = GetStaticEnum(FUN_1408eccc0,DAT_1468624c8,L"ETimeOfDayState");
  }
  return;
}



// FUNCTION 1408ebeb0 FUN_1408ebeb0 body=6 status=ok
// SIG undefined FUN_1408ebeb0(void)

undefined8 FUN_1408ebeb0(void)

{
  return 0x7b138227;
}



// FUNCTION 1408ebec0 FUN_1408ebec0 body=6 status=ok
// SIG undefined FUN_1408ebec0(void)

undefined8 FUN_1408ebec0(void)

{
  return 0x69de9eae;
}



// FUNCTION 1408ebed0 FUN_1408ebed0 body=6 status=ok
// SIG undefined FUN_1408ebed0(void)

undefined8 FUN_1408ebed0(void)

{
  return 0x462e6193;
}



// FUNCTION 1408ebee0 FUN_1408ebee0 body=6 status=ok
// SIG undefined FUN_1408ebee0(void)

undefined8 FUN_1408ebee0(void)

{
  return 0x993236a5;
}



// FUNCTION 1408ebef0 FUN_1408ebef0 body=6 status=ok
// SIG undefined FUN_1408ebef0(void)

undefined8 FUN_1408ebef0(void)

{
  return 0xeeda5c31;
}



// FUNCTION 1408ebf00 FUN_1408ebf00 body=6 status=ok
// SIG undefined FUN_1408ebf00(void)

undefined8 FUN_1408ebf00(void)

{
  return 0xa27ad1e9;
}



// FUNCTION 1408ebf10 FUN_1408ebf10 body=6 status=ok
// SIG undefined FUN_1408ebf10(void)

undefined8 FUN_1408ebf10(void)

{
  return 0x53c4b8a3;
}



// FUNCTION 1408ebf20 FUN_1408ebf20 body=6 status=ok
// SIG undefined FUN_1408ebf20(void)

undefined8 FUN_1408ebf20(void)

{
  return 0xd7e4f1a0;
}



// FUNCTION 1408ebf30 FUN_1408ebf30 body=6 status=ok
// SIG undefined FUN_1408ebf30(void)

undefined8 FUN_1408ebf30(void)

{
  return 0xc34308ee;
}



// FUNCTION 1408ebf40 FUN_1408ebf40 body=6 status=ok
// SIG undefined FUN_1408ebf40(void)

undefined8 FUN_1408ebf40(void)

{
  return 0x8a6f01d3;
}



// FUNCTION 1408ebf50 FUN_1408ebf50 body=6 status=ok
// SIG undefined FUN_1408ebf50(void)

undefined8 FUN_1408ebf50(void)

{
  return 0xc12982a9;
}



// FUNCTION 1408ebf60 FUN_1408ebf60 body=6 status=ok
// SIG undefined FUN_1408ebf60(void)

undefined8 FUN_1408ebf60(void)

{
  return 0xd93aaec8;
}



// FUNCTION 1408ebf70 FUN_1408ebf70 body=6 status=ok
// SIG undefined FUN_1408ebf70(void)

undefined8 FUN_1408ebf70(void)

{
  return 0x14b1b3e3;
}



// FUNCTION 1408ebf80 FUN_1408ebf80 body=6 status=ok
// SIG undefined FUN_1408ebf80(void)

undefined8 FUN_1408ebf80(void)

{
  return 0xbe030125;
}



// FUNCTION 1408ebf90 FUN_1408ebf90 body=6 status=ok
// SIG undefined FUN_1408ebf90(void)

undefined8 FUN_1408ebf90(void)

{
  return 0xc155f563;
}



// FUNCTION 1408ebfa0 FUN_1408ebfa0 body=6 status=ok
// SIG undefined FUN_1408ebfa0(void)

undefined8 FUN_1408ebfa0(void)

{
  return 0x6dea8499;
}



// FUNCTION 1408ebfb0 FUN_1408ebfb0 body=6 status=ok
// SIG undefined FUN_1408ebfb0(void)

undefined8 FUN_1408ebfb0(void)

{
  return 0x71b5ebb;
}



// FUNCTION 1408ebfc0 FUN_1408ebfc0 body=6 status=ok
// SIG undefined FUN_1408ebfc0(void)

undefined8 FUN_1408ebfc0(void)

{
  return 0x3ecb2e8d;
}



// FUNCTION 1408ebfd0 FUN_1408ebfd0 body=6 status=ok
// SIG undefined FUN_1408ebfd0(void)

undefined8 FUN_1408ebfd0(void)

{
  return 0xe21193df;
}



// FUNCTION 1408ec000 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408ec070 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408ec0e0 Serialize body=112 status=ok
// SIG undefined Serialize(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void UObject::Serialize(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined **local_1c8 [53];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_1e8;
  FUN_1416880d0(local_1c8);
  local_20 = 0;
  local_1c8[0] = &PTR__scalar_deleting_destructor__143fd6160;
  AAkReverbVolume::Serialize(param_1,local_1c8);
  FArchiveFromStructuredArchive::~FArchiveFromStructuredArchive(local_1c8);
  return;
}



// FUNCTION 1408ec150 GetPrivateStaticClass body=5 status=ok
// SIG undefined GetPrivateStaticClass(void)

void UMaterialExpression::GetPrivateStaticClass(void)

{
  GetPrivateStaticClass();
  return;
}



// FUNCTION 1408ec160 FUN_1408ec160 body=34 status=ok
// SIG undefined FUN_1408ec160(void)

void FUN_1408ec160(void)

{
  undefined8 uVar1;
  
  uVar1 = AFGPoleHologram::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddEventListener_144143688,3);
  return;
}



// FUNCTION 1408ec190 FUN_1408ec190 body=34 status=ok
// SIG undefined FUN_1408ec190(void)

void FUN_1408ec190(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408e9af0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddTimeOfDayListener_1441436c0,9);
  return;
}



// FUNCTION 1408ec1c0 FUN_1408ec1c0 body=34 status=ok
// SIG undefined FUN_1408ec1c0(void)

void FUN_1408ec1c0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408ea260();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_SetCinematicTimeOfDay_144143a98,2);
  return;
}



// FUNCTION 1408ec1f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTextBlockStyle::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862670 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebeb0();
    DAT_146862670 = GetStaticStruct(FUN_1408eccf0,lVar1,L"ColorPropertyLayerCurve",0x1e8,uVar2);
  }
  return;
}



// FUNCTION 1408ec270 FUN_1408ec270 body=113 status=ok
// SIG undefined FUN_1408ec270(void)

void FUN_1408ec270(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468624e0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebec0();
    DAT_1468624e0 = GetStaticStruct(FUN_1408ecd20,lVar1,L"ControlledLight",0x38,uVar2);
  }
  return;
}



// FUNCTION 1408ec2f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468626d0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebed0();
    DAT_1468626d0 = GetStaticStruct(FUN_1408ecd50,lVar1,L"FloatParamLayerCurve",0x80,uVar2);
  }
  return;
}



// FUNCTION 1408ec370 FUN_1408ec370 body=113 status=ok
// SIG undefined FUN_1408ec370(void)

void FUN_1408ec370(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862690 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebee0();
    DAT_146862690 = GetStaticStruct(FUN_1408ecd80,lVar1,L"FloatPropertyLayerCurve",0x98,uVar2);
  }
  return;
}



// FUNCTION 1408ec3f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862580 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebef0();
    DAT_146862580 = GetStaticStruct(FUN_1408ecdb0,lVar1,L"LayerCurveData",0x78,uVar2);
  }
  return;
}



// FUNCTION 1408ec470 FUN_1408ec470 body=113 status=ok
// SIG undefined FUN_1408ec470(void)

void FUN_1408ec470(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468626b0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf00();
    DAT_1468626b0 = GetStaticStruct(FUN_1408ecde0,lVar1,L"LayerParameterCurves",0x20,uVar2);
  }
  return;
}



// FUNCTION 1408ec4f0 FUN_1408ec4f0 body=113 status=ok
// SIG undefined FUN_1408ec4f0(void)

void FUN_1408ec4f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862650 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf10();
    DAT_146862650 = GetStaticStruct(FUN_1408ece10,lVar1,L"LayerPropertyCurves",0x40,uVar2);
  }
  return;
}



// FUNCTION 1408ec570 FUN_1408ec570 body=113 status=ok
// SIG undefined FUN_1408ec570(void)

void FUN_1408ec570(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862700 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf20();
    DAT_146862700 = GetStaticStruct(FUN_1408ece40,lVar1,L"PlanetCycleInfo",0x10,uVar2);
  }
  return;
}



// FUNCTION 1408ec5f0 FUN_1408ec5f0 body=113 status=ok
// SIG undefined FUN_1408ec5f0(void)

void FUN_1408ec5f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468626a0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf30();
    DAT_1468626a0 = GetStaticStruct(FUN_1408e99d0,lVar1,L"PropertyLayerCurveBase",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408ec670 FUN_1408ec670 body=113 status=ok
// SIG undefined FUN_1408ec670(void)

void FUN_1408ec670(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468625e0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf40();
    DAT_1468625e0 = GetStaticStruct(FUN_1408ea510,lVar1,L"TODCollectionParam",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408ec6f0 FUN_1408ec6f0 body=113 status=ok
// SIG undefined FUN_1408ec6f0(void)

void FUN_1408ec6f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862640 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf50();
    DAT_146862640 = GetStaticStruct(FUN_1408ece70,lVar1,L"TODCollectionVector4Parameter",0x30,uVar2)
    ;
  }
  return;
}



// FUNCTION 1408ec770 FUN_1408ec770 body=113 status=ok
// SIG undefined FUN_1408ec770(void)

void FUN_1408ec770(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468625d0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf60();
    DAT_1468625d0 = GetStaticStruct(FUN_1408ecea0,lVar1,L"TODScalarCollectionParam",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408ec7f0 FUN_1408ec7f0 body=113 status=ok
// SIG undefined FUN_1408ec7f0(void)

void FUN_1408ec7f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468625c0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf70();
    DAT_1468625c0 = GetStaticStruct(FUN_1408eced0,lVar1,L"TODVectorCollectionParam",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408ec870 FUN_1408ec870 body=113 status=ok
// SIG undefined FUN_1408ec870(void)

void FUN_1408ec870(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862570 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf80();
    DAT_146862570 = GetStaticStruct(FUN_1408ecf00,lVar1,L"TimeOfDayCycleInstanceData",0xa0,uVar2);
  }
  return;
}



// FUNCTION 1408ec8f0 FUN_1408ec8f0 body=113 status=ok
// SIG undefined FUN_1408ec8f0(void)

void FUN_1408ec8f0(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862590 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebf90();
    DAT_146862590 = GetStaticStruct(FUN_1408ecf30,lVar1,L"TimeOfDayEvent",0x28,uVar2);
  }
  return;
}



// FUNCTION 1408ec970 FUN_1408ec970 body=113 status=ok
// SIG undefined FUN_1408ec970(void)

void FUN_1408ec970(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468626f0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebfa0();
    DAT_1468626f0 = GetStaticStruct(FUN_1408ecf60,lVar1,L"TimeOfDaySaveGameData",0x18,uVar2);
  }
  return;
}



// FUNCTION 1408ec9f0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCustomizedToolMenu::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862660 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebfb0();
    DAT_146862660 = GetStaticStruct(FUN_1408ecf90,lVar1,L"Vector4PropertyLayerCurve",0x1f0,uVar2);
  }
  return;
}



// FUNCTION 1408eca70 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FStructSerializerTestStruct::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1468626c0 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebfc0();
    DAT_1468626c0 = GetStaticStruct(FUN_1408ecfc0,lVar1,L"VectorParamLayerCurve",0x1d8,uVar2);
  }
  return;
}



// FUNCTION 1408ecaf0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FCustomizedToolMenu::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146862680 == 0) {
    if (DAT_1468624c8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_1468624c8,&PTR_s__Script_GbxTimeOfDay_144143630);
    }
    lVar1 = DAT_1468624c8;
    uVar2 = FUN_1408ebfd0();
    DAT_146862680 = GetStaticStruct(FUN_1408ecff0,lVar1,L"VectorPropertyLayerCurve",0x1f0,uVar2);
  }
  return;
}



// FUNCTION 1408ecb70 FUN_1408ecb70 body=47 status=ok
// SIG undefined FUN_1408ecb70(void)

longlong FUN_1408ecb70(void)

{
  if (DAT_146862600 == 0) {
    FUN_141786440(&DAT_146862600,&PTR_FUN_144140780);
  }
  return DAT_146862600;
}



// FUNCTION 1408ecba0 FUN_1408ecba0 body=47 status=ok
// SIG undefined FUN_1408ecba0(void)

longlong FUN_1408ecba0(void)

{
  if (DAT_1468624d0 == 0) {
    FUN_141786440(&DAT_1468624d0,&PTR_FUN_144140550);
  }
  return DAT_1468624d0;
}



// FUNCTION 1408ecbd0 FUN_1408ecbd0 body=47 status=ok
// SIG undefined FUN_1408ecbd0(void)

longlong FUN_1408ecbd0(void)

{
  if (DAT_1468625f0 == 0) {
    FUN_141786440(&DAT_1468625f0,&PTR_FUN_1441431b0);
  }
  return DAT_1468625f0;
}



// FUNCTION 1408ecc00 FUN_1408ecc00 body=47 status=ok
// SIG undefined FUN_1408ecc00(void)

longlong FUN_1408ecc00(void)

{
  if (DAT_146862618 == 0) {
    FUN_141786440(&DAT_146862618,&PTR_FUN_144140d20);
  }
  return DAT_146862618;
}



// FUNCTION 1408ecc30 FUN_1408ecc30 body=47 status=ok
// SIG undefined FUN_1408ecc30(void)

longlong FUN_1408ecc30(void)

{
  if (DAT_1468626e0 == 0) {
    FUN_141786440(&DAT_1468626e0,&PTR_FUN_144142200);
  }
  return DAT_1468626e0;
}



// FUNCTION 1408ecc60 FUN_1408ecc60 body=47 status=ok
// SIG undefined FUN_1408ecc60(void)

longlong FUN_1408ecc60(void)

{
  if (DAT_146862710 == 0) {
    FUN_141786440(&DAT_146862710,&PTR_FUN_1441426c0);
  }
  return DAT_146862710;
}



// FUNCTION 1408ecc90 FUN_1408ecc90 body=47 status=ok
// SIG undefined FUN_1408ecc90(void)

longlong FUN_1408ecc90(void)

{
  if (DAT_146862628 == 0) {
    FUN_1417866a0(&DAT_146862628,&PTR_FUN_146286440);
  }
  return DAT_146862628;
}



// FUNCTION 1408eccc0 FUN_1408eccc0 body=47 status=ok
// SIG undefined FUN_1408eccc0(void)

longlong FUN_1408eccc0(void)

{
  if (DAT_146862610 == 0) {
    FUN_1417866a0(&DAT_146862610,&PTR_FUN_1462863f0);
  }
  return DAT_146862610;
}



// FUNCTION 1408eccf0 FUN_1408eccf0 body=47 status=ok
// SIG undefined FUN_1408eccf0(void)

longlong FUN_1408eccf0(void)

{
  if (DAT_146862678 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862678,&PTR_FUN_1462857c0);
  }
  return DAT_146862678;
}



// FUNCTION 1408ecd20 FUN_1408ecd20 body=47 status=ok
// SIG undefined FUN_1408ecd20(void)

longlong FUN_1408ecd20(void)

{
  if (DAT_1468624e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468624e8,&PTR_FUN_146283960);
  }
  return DAT_1468624e8;
}



// FUNCTION 1408ecd50 FUN_1408ecd50 body=47 status=ok
// SIG undefined FUN_1408ecd50(void)

longlong FUN_1408ecd50(void)

{
  if (DAT_1468626d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_1468626d8,&PTR_FUN_146285c40);
  }
  return DAT_1468626d8;
}



// FUNCTION 1408ecd80 FUN_1408ecd80 body=47 status=ok
// SIG undefined FUN_1408ecd80(void)

longlong FUN_1408ecd80(void)

{
  if (DAT_146862698 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862698,&PTR_FUN_146285940);
  }
  return DAT_146862698;
}



// FUNCTION 1408ecdb0 FUN_1408ecdb0 body=47 status=ok
// SIG undefined FUN_1408ecdb0(void)

longlong FUN_1408ecdb0(void)

{
  if (DAT_146862588 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146862588,&PTR_FUN_146284880);
  }
  return DAT_146862588;
}


