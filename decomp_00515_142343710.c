// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 142343710 FUN_142343710 body=121 status=ok
// SIG undefined FUN_142343710(void)

void FUN_142343710(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  
  if (DAT_146531c24 < 0.0) {
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | 0x20;
    return;
  }
  lVar2 = FUN_14046f570();
  fVar1 = *(float *)(lVar2 + 0x798);
  if (DAT_146531c24 <= fVar1 - *(float *)(param_1 + 0x3b4)) {
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | 0x20;
    *(float *)(param_1 + 0x3b4) = fVar1;
    *(undefined4 *)(param_1 + 0x3b8) = 0;
    return;
  }
  *(int *)(param_1 + 0x3b8) = *(int *)(param_1 + 0x3b8) + 1;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | 0x20;
  return;
}



// FUNCTION 142343790 FUN_142343790 body=8 status=ok
// SIG undefined FUN_142343790(void)

void FUN_142343790(longlong param_1)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 8;
  return;
}



// FUNCTION 1423437a0 FUN_1423437a0 body=8 status=ok
// SIG undefined FUN_1423437a0(void)

void FUN_1423437a0(longlong param_1)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xf7;
  return;
}



// FUNCTION 1423437b0 FUN_1423437b0 body=8 status=ok
// SIG undefined FUN_1423437b0(void)

void FUN_1423437b0(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 4;
  return;
}



// FUNCTION 1423437c0 OnDestroyPhysicsState body=8 status=ok
// SIG undefined OnDestroyPhysicsState(void)

void UActorComponent::OnDestroyPhysicsState(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfb;
  return;
}



// FUNCTION 1423437d0 FUN_1423437d0 body=30 status=ok
// SIG undefined FUN_1423437d0(void)

void FUN_1423437d0(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1f8,local_res10);
  return;
}



// FUNCTION 1423437f0 FUN_1423437f0 body=780 status=ok
// SIG undefined FUN_1423437f0(void)

void FUN_1423437f0(longlong *param_1,int param_2,undefined1 param_3)

{
  longlong lVar1;
  char cVar2;
  float *pfVar3;
  undefined8 uVar4;
  longlong *plVar5;
  float local_28;
  float local_24;
  undefined4 local_20;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 != '\0') {
    if ((char)param_1[0x49] == '\x02') {
      *(undefined1 *)((longlong)param_1 + 0x4b2) = 2;
      *(undefined4 *)((longlong)param_1 + 0x194) = 0;
      (**(code **)(*param_1 + 0x748))(param_1);
    }
    else if (param_2 == 2) {
      if (((char)param_1[0x49] == (char)param_1[0x96]) ||
         (cVar2 = (**(code **)(*param_1 + 0x560))(param_1), cVar2 != '\0')) {
        cVar2 = (**(code **)(*param_1 + 0x750))(param_1);
        if (cVar2 == '\0') {
          return;
        }
      }
      else {
        (**(code **)(*param_1 + 0x748))(param_1);
      }
    }
    if ((byte)((char)param_1[0x49] - 1U) < 2) {
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x1000;
      *(undefined4 *)((longlong)param_1 + 0x194) = 0;
      *(char *)((longlong)param_1 + 0x4b2) = (char)param_1[0x49];
      lVar1 = param_1[0x2f];
      local_28 = *(float *)(lVar1 + 0x220);
      local_24 = *(float *)(lVar1 + 0x224);
      local_20 = *(undefined4 *)(lVar1 + 0x228);
      (**(code **)(*param_1 + 0x870))(param_1,&local_28,param_1 + 0x82,0,0);
      (**(code **)(*param_1 + 0x5e0))(param_1);
      if (((byte)(int)param_1[0x82] & 3) == 3) {
        uVar4 = FWeakObjectPtr::Get((longlong)param_1 + 0x494);
        (**(code **)(*param_1 + 0x6d8))(param_1,uVar4,param_1[0x94],1);
      }
      else {
        (**(code **)(*param_1 + 0x6d8))(param_1,0,0,1);
      }
      if (((char)param_1[0x109] != '\0') && (param_2 == 3)) {
        (**(code **)(*param_1 + 0x630))(param_1,&local_28);
        *(float *)((longlong)param_1 + 0x18c) = *(float *)((longlong)param_1 + 0x18c) - local_28;
        *(float *)(param_1 + 0x32) = *(float *)(param_1 + 0x32) - local_24;
      }
    }
    else {
      *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff8;
      *(undefined8 *)((longlong)param_1 + 0x414) = 0;
      _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
      *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffefff;
      if ((char)param_1[0x49] == '\x03') {
        pfVar3 = (float *)(**(code **)(*param_1 + 0x630))(param_1,&local_28);
        *(float *)((longlong)param_1 + 0x18c) = *(float *)((longlong)param_1 + 0x18c) + *pfVar3;
        *(float *)(param_1 + 0x32) = pfVar3[1] + *(float *)(param_1 + 0x32);
        *(float *)((longlong)param_1 + 0x194) = pfVar3[2] + *(float *)((longlong)param_1 + 0x194);
        (**(code **)(*(longlong *)param_1[0x44] + 0x8b0))();
      }
      (**(code **)(*param_1 + 0x6d8))(param_1,0,0,1);
      if ((char)param_1[0x49] == '\0') {
        *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xfffffff7;
        (**(code **)(*param_1 + 0x430))(param_1);
        *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) | 8;
        FUN_14231b760(param_1[0x44]);
        (**(code **)(*param_1 + 0x6f8))(param_1);
      }
    }
    if ((((char)param_1[0x49] == '\x03') && (param_2 != 3)) && (lVar1 = param_1[0x3f], lVar1 != 0))
    {
      uVar4 = UPathFollowingAgentInterface::GetPrivateStaticClass();
      plVar5 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar1,uVar4);
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x18))(plVar5);
      }
    }
    (**(code **)(*(longlong *)param_1[0x44] + 0x900))((longlong *)param_1[0x44],param_2,param_3);
  }
  return;
}



// FUNCTION 142343b00 FUN_142343b00 body=158 status=ok
// SIG undefined FUN_142343b00(void)

void FUN_142343b00(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 1;
  (**(code **)(*param_1 + 0x378))(param_1,0,0);
  if ((*(byte *)((longlong)param_1 + 0xba) & 2) != 0) {
    lVar1 = param_1[0x23];
    cVar2 = UWorld::IsGameWorld();
    if (((cVar2 == '\0') || (lVar1 == 0)) || ((*(byte *)(lVar1 + 0x93) & 8) != 0)) {
      (**(code **)(*param_1 + 0x280))(param_1,1);
    }
  }
  lVar1 = param_1[0x1a];
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x380) == 0)) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\x01';
  }
  *(char *)(param_1 + 0x1b) = cVar2;
  if (cVar2 != '\0') {
    param_1[0x1c] = *(longlong *)(lVar1 + 0x380);
  }
  return;
}



// FUNCTION 142343ba0 FUN_142343ba0 body=1839 status=ok
// SIG undefined FUN_142343ba0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142343ba0(longlong *param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 local_res8 [8];
  undefined8 local_48;
  int iStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) | 1;
  (**(code **)(*param_1 + 0x378))(param_1,0,0);
  if ((*(byte *)((longlong)param_1 + 0xba) & 2) != 0) {
    lVar5 = param_1[0x23];
    cVar3 = UWorld::IsGameWorld();
    if (((cVar3 == '\0') || (lVar5 == 0)) || ((*(byte *)(lVar5 + 0x93) & 8) != 0)) {
      (**(code **)(*param_1 + 0x280))(param_1,1);
    }
  }
  lVar5 = param_1[0x1a];
  if ((lVar5 == 0) || (*(longlong *)(lVar5 + 0x380) == 0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  *(char *)(param_1 + 0x1b) = cVar3;
  if (cVar3 != '\0') {
    param_1[0x1c] = *(longlong *)(lVar5 + 0x380);
  }
  local_48 = (longlong *)&LAB_141e16980;
  iStack_40 = 0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30,0);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af370,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af378;
    lVar5 = (longlong)DAT_1464af378;
    DAT_1464af378 = DAT_1464af378 + 1;
    if (DAT_1464af37c < DAT_1464af378) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af370,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af370);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_141e16970;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af388,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af390;
    lVar5 = (longlong)DAT_1464af390;
    DAT_1464af390 = DAT_1464af390 + 1;
    if (DAT_1464af394 < DAT_1464af390) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af388,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af388);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_141e16710;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3a0,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af3a8;
    lVar5 = (longlong)DAT_1464af3a8;
    DAT_1464af3a8 = DAT_1464af3a8 + 1;
    if (DAT_1464af3ac < DAT_1464af3a8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3a0,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af3a0);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_141e166f0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3b8,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af3c0;
    lVar5 = (longlong)DAT_1464af3c0;
    DAT_1464af3c0 = DAT_1464af3c0 + 1;
    if (DAT_1464af3c4 < DAT_1464af3c0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3b8,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af3b8);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_141e16720;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af3d0,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af3d8;
    lVar5 = (longlong)DAT_1464af3d8;
    DAT_1464af3d8 = DAT_1464af3d8 + 1;
    if (DAT_1464af3dc < DAT_1464af3d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af3d0,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af3d0);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  iStack_40 = 0;
  local_48 = (longlong *)&LAB_141e166e0;
  plVar4 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar4 != (longlong *)0x0) {
    *plVar4 = (longlong)&PTR_FUN_143f77b88;
    FWeakObjectPtr::operator=(plVar4 + 1,param_1);
    *(undefined4 *)(plVar4 + 2) = (undefined4)local_48;
    *(undefined4 *)((longlong)plVar4 + 0x14) = local_48._4_4_;
    *(int *)(plVar4 + 3) = iStack_40;
    *(undefined4 *)((longlong)plVar4 + 0x1c) = uStack_3c;
    lVar5 = FDelegateHandle::GenerateNewID();
    plVar4[5] = lVar5;
    *plVar4 = (longlong)&PTR_FUN_143f77bd0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af400,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar2 = DAT_1464af408;
    lVar5 = (longlong)DAT_1464af408;
    DAT_1464af408 = DAT_1464af408 + 1;
    if (DAT_1464af40c < DAT_1464af408) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af400,iVar2);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af400);
    *puVar6 = plVar4;
    *(undefined4 *)(puVar6 + 1) = 3;
  }
  uStack_30 = 0;
  local_38 = FUN_14232d570;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar6 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143fcfec0;
    FWeakObjectPtr::operator=(puVar6 + 1,param_1);
    *(undefined4 *)(puVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar6 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_2c;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[5] = uVar7;
    *puVar6 = &PTR_FUN_143fcff08;
  }
  iVar2 = iStack_40;
  plVar4 = local_48;
  if (iStack_40 == 0) {
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  else if (local_48 != (longlong *)0x0) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af418,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1464af420;
    lVar5 = (longlong)DAT_1464af420;
    DAT_1464af420 = DAT_1464af420 + 1;
    if (DAT_1464af424 < DAT_1464af420) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af418,iVar1);
    }
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af418);
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar2;
  }
  uStack_30 = 0;
  local_38 = FUN_142344720;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar6 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(puVar6 + 1,param_1);
    *(undefined4 *)(puVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar6 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_2c;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[5] = uVar7;
    *puVar6 = &PTR_FUN_143fcff98;
  }
  iVar2 = iStack_40;
  plVar4 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af280,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1464af288;
    lVar5 = (longlong)DAT_1464af288;
    DAT_1464af288 = DAT_1464af288 + 1;
    if (DAT_1464af28c < DAT_1464af288) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af280,iVar1);
    }
    local_48 = (longlong *)0x0;
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af280);
    iStack_40 = 0;
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar2;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  uStack_30 = 0;
  local_38 = FUN_1423437d0;
  local_48 = (longlong *)0x0;
  iStack_40 = 0;
  puVar6 = (undefined8 *)operator_new(0x30,&local_48);
  if (puVar6 != (undefined8 *)0x0) {
    *puVar6 = &PTR_FUN_143fcff50;
    FWeakObjectPtr::operator=(puVar6 + 1,param_1);
    *(undefined4 *)(puVar6 + 2) = (undefined4)local_38;
    *(undefined4 *)((longlong)puVar6 + 0x14) = local_38._4_4_;
    *(undefined4 *)(puVar6 + 3) = uStack_30;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uStack_2c;
    uVar7 = FDelegateHandle::GenerateNewID();
    puVar6[5] = uVar7;
    *puVar6 = &PTR_FUN_143fcff98;
  }
  iVar2 = iStack_40;
  plVar4 = local_48;
  if ((iStack_40 != 0) && (local_48 != (longlong *)0x0)) {
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464af298,1);
    (**(code **)(*plVar4 + 0x20))(plVar4,local_res8);
    iVar1 = DAT_1464af2a0;
    lVar5 = (longlong)DAT_1464af2a0;
    DAT_1464af2a0 = DAT_1464af2a0 + 1;
    if (DAT_1464af2a4 < DAT_1464af2a0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464af298,iVar1);
    }
    local_48 = (longlong *)0x0;
    puVar6 = (undefined8 *)(lVar5 * 0x10 + _DAT_1464af298);
    iStack_40 = 0;
    *puVar6 = plVar4;
    *(int *)(puVar6 + 1) = iVar2;
  }
  TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_48);
  return;
}



// FUNCTION 1423442d0 FUN_1423442d0 body=403 status=ok
// SIG undefined FUN_1423442d0(void)

void FUN_1423442d0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  char cVar3;
  undefined8 *puVar4;
  ulonglong local_res8;
  
  if (((*(byte *)((longlong)param_1 + 0x2f2) & 8) != 0) &&
     (cVar3 = (**(code **)(*param_1 + 0x2a0))(), cVar3 == '\0')) {
    if (param_1[0x32] != 0) {
      cVar3 = FWeakObjectPtr::IsValid(param_1 + 0xd4);
      if (cVar3 == '\0') {
        FWeakObjectPtr::operator=(param_1 + 0xd4,param_1[0x32]);
      }
      local_res8 = 0;
      if (param_1[0xd5] == 0) {
        param_1[0xd5] = param_1[0x33];
      }
      lVar2 = param_1[0x32];
      puVar4 = *(undefined8 **)(lVar2 + 0x1a0);
      puVar1 = puVar4 + *(int *)(lVar2 + 0x1a8);
      for (; puVar4 != puVar1; puVar4 = puVar4 + 1) {
        if ((longlong *)*puVar4 == param_1) {
          if ((((*(byte *)((longlong)param_1 + 0xba) & 2) == 0) ||
              (((*(char *)((longlong)param_1 + 0x5ec) != '\0' &&
                (*(char *)((longlong)param_1 + 0x5ed) != '\0')) &&
               (*(char *)((longlong)param_1 + 0x5ee) != '\0')))) ||
             ((param_1[0xd5] != param_1[0x33] ||
              (cVar3 = FUN_1405dc8f0(param_1 + 0xd4,lVar2), cVar3 != '\0')))) {
            local_res8 = local_res8 & 0xffffffff00000000;
            (**(code **)(*param_1 + 0x418))(param_1,&local_res8);
          }
          goto LAB_142344399;
        }
      }
      local_res8 = 0;
      FUN_142399e30(param_1,0,0);
    }
LAB_142344399:
    param_1[0xd7] = *(longlong *)((longlong)param_1 + 0x1ec);
    *(longlong *)((longlong)param_1 + 0x6c4) = param_1[0x3f];
    *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)((longlong)param_1 + 500);
    *(int *)((longlong)param_1 + 0x6cc) = (int)param_1[0x40];
    param_1[0xda] = *(longlong *)((longlong)param_1 + 0x204);
    *(undefined4 *)(param_1 + 0xdb) = *(undefined4 *)((longlong)param_1 + 0x20c);
  }
  FUN_142393b20(param_1);
  return;
}



// FUNCTION 142344470 FUN_142344470 body=205 status=ok
// SIG undefined FUN_142344470(void)

void FUN_142344470(longlong param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x118) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_142235230();
  }
  if (((*(uint *)(param_1 + 0x4b4) >> 0x13 & 1) != 0) && (iVar3 == 3)) {
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xfff7ffff;
  }
  FUN_142373250(param_1);
  if (((*(uint *)(param_1 + 8) >> 4 & 1) == 0) && (*(longlong *)(param_1 + 0x118) != 0)) {
    uVar4 = FUN_142232850();
    FUN_14247c340(param_1 + 0x140,uVar4);
  }
  lVar5 = FUN_14046f570(param_1);
  if (lVar5 != 0) {
    cVar1 = UWorld::IsPlayingReplay(lVar5);
    if (cVar1 != '\0') {
      uVar2 = 1;
      if (DAT_146531c2c == 1) {
        uVar2 = 3;
      }
      *(undefined1 *)(param_1 + 0x3f4) = uVar2;
      return;
    }
  }
  if ((iVar3 == 2) && (*(char *)(param_1 + 0x3f4) == '\x01')) {
    *(undefined1 *)(param_1 + 0x3f4) = 2;
  }
  return;
}



// FUNCTION 142344560 FUN_142344560 body=445 status=ok
// SIG undefined FUN_142344560(void)

void FUN_142344560(longlong *param_1)

{
  uint *puVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  undefined1 uVar7;
  
  cVar4 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar4 == '\0') {
    return;
  }
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | 0x20;
  if ((param_1[0xc2] != 0) && (lVar2 = *(longlong *)(param_1[0xc2] + 0x30), lVar2 != 0)) {
    puVar1 = (uint *)(lVar2 + 0x18);
    *puVar1 = *puVar1 | 8;
  }
  (**(code **)(*param_1 + 0x978))(param_1);
  lVar6 = 0;
  lVar2 = *(longlong *)(param_1[0x44] + 0x4d8);
  if ((((lVar2 == 0) || (((byte)(int)param_1[0x82] & 3) != 3)) ||
      (2.4 < *(float *)((longlong)param_1 + 0x414))) ||
     (0.0 < *(float *)((longlong)param_1 + 0x194))) {
    *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff8;
    *(undefined8 *)((longlong)param_1 + 0x414) = 0;
    _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
    *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  }
  else {
    lVar6 = FWeakObjectPtr::Get((longlong)param_1 + 0x494);
  }
  cVar4 = (char)param_1[0x49];
  if ((cVar4 == *(char *)((longlong)param_1 + 0x4b1)) || (cVar4 == '\x04')) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) ||
     (cVar5 = (**(code **)(*param_1 + 0x458))(param_1), cVar5 == '\0')) {
    if (((byte)(int)param_1[0x82] & 3) == 3) {
      if (lVar2 == 0) {
        if (lVar6 == 0) goto LAB_1423446bf;
      }
      else if (lVar6 == 0) goto LAB_142344699;
      if (!bVar3) {
        if (cVar4 == '\x03') {
          (**(code **)(*param_1 + 0x738))(param_1,param_1 + 0x84,0,0);
        }
        goto LAB_1423446bf;
      }
      uVar7 = (undefined1)param_1[0x96];
    }
    else {
LAB_142344699:
      if ((cVar4 == '\x03') || ((byte)((char)param_1[0x49] - 5U) < 2)) goto LAB_1423446bf;
      uVar7 = 3;
    }
  }
  else {
    if (bVar3) goto LAB_1423446bf;
    uVar7 = *(undefined1 *)((longlong)param_1 + 0x4b1);
  }
  (**(code **)(*param_1 + 0x5a0))(param_1,uVar7,0);
LAB_1423446bf:
  (**(code **)(*param_1 + 0x600))(param_1);
  return;
}



// FUNCTION 142344720 FUN_142344720 body=30 status=ok
// SIG undefined FUN_142344720(void)

void FUN_142344720(longlong param_1,undefined1 param_2)

{
  undefined1 local_res10 [24];
  
  local_res10[0] = param_2;
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
            (param_1 + 0x1e8,local_res10);
  return;
}



// FUNCTION 142344740 FUN_142344740 body=60 status=ok
// SIG undefined FUN_142344740(void)

void FUN_142344740(longlong param_1)

{
  *(undefined8 *)(param_1 + 0xd68) = *(undefined8 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xd70) = *(undefined4 *)(param_1 + 0xb8);
  return;
}



// FUNCTION 142344780 FUN_142344780 body=48 status=ok
// SIG undefined FUN_142344780(void)

void FUN_142344780(longlong param_1)

{
  int iVar1;
  BOOL BVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfe;
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(byte *)(param_1 + 0xc9) & 6) == 0) {
    return;
  }
  BVar2 = TryEnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  if (BVar2 == 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  }
  if ((*(uint *)(param_1 + 8) >> 0xf & 1) == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar5 = iVar1 >> 0x1f & 0xffff;
      uVar3 = iVar1 + uVar5;
      lVar4 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar3 >> 0x10) * 8) +
              (longlong)(int)((uVar3 & 0xffff) - uVar5) * 0x18;
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1c & 1) == 0) {
      lVar4 = FUN_14046f570(param_1);
      if (lVar4 != 0) {
        FUN_142541fb0(lVar4,param_1);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000142334b76. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_146aeff08);
  return;
}



// FUNCTION 1423447b0 FUN_1423447b0 body=197 status=ok
// SIG undefined FUN_1423447b0(void)

void FUN_1423447b0(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xfe;
  if (*(char *)(param_1 + 0xd8) != '\0') {
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
  }
  if ((*(byte *)(param_1 + 0xc9) & 6) != 0) {
    FUN_142334ae0();
  }
  FUN_140483870(&DAT_1464af370,param_1);
  FUN_140483870(&DAT_1464af388,param_1);
  FUN_140483870(&DAT_1464af3a0,param_1);
  FUN_140483870(&DAT_1464af3b8,param_1);
  FUN_140483870(&DAT_1464af3d0,param_1);
  FUN_140483870(&DAT_1464af400,param_1);
  FUN_140483870(&DAT_1464af418,param_1);
  FUN_140483870(&DAT_1464af280,param_1);
  FUN_140483870(&DAT_1464af298,param_1);
  return;
}



// FUNCTION 142344880 FUN_142344880 body=57 status=ok
// SIG undefined FUN_142344880(void)

void FUN_142344880(longlong *param_1)

{
  FUN_142394230();
  if ((param_1[0x23] != 0) && ((*(byte *)(param_1 + 0x5e) & 2) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001423448ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x560))(param_1);
  return;
}



// FUNCTION 1423448c0 FUN_1423448c0 body=267 status=ok
// SIG undefined FUN_1423448c0(void)

void FUN_1423448c0(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 local_res8;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  AK::MemoryMgr::StartProfileThreadUsage((long)param_1);
  if ((((*(byte *)(param_1 + 0xba) & 4) != 0) && ((*(byte *)(param_1 + 0x2f1) & 4) == 0)) &&
     (lVar8 = FUN_14233c7a0(param_1), lVar8 != 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x6b0);
    uVar2 = *(undefined8 *)(param_1 + 0x210);
    uVar3 = *(undefined8 *)(param_1 + 0x218);
    uVar4 = *(undefined8 *)(param_1 + 0x220);
    uVar5 = *(undefined8 *)(param_1 + 0x228);
    uVar6 = *(undefined8 *)(param_1 + 0x230);
    uVar7 = *(undefined8 *)(param_1 + 0x238);
    local_58 = 0;
    local_48 = 0;
    puVar9 = (undefined8 *)FUN_140438ef0(0x50,local_78);
    if (puVar9 != (undefined8 *)0x0) {
      *puVar9 = &PTR_CopyToEmptyStorage_144f51a70;
      puVar9[2] = lVar8;
      puVar9[3] = uVar1;
      puVar9[4] = uVar2;
      puVar9[5] = uVar3;
      puVar9[6] = uVar4;
      puVar9[7] = uVar5;
      puVar9[8] = uVar6;
      puVar9[9] = uVar7;
    }
    local_88[0] = FUN_1423326d0;
    FUN_1422f8a30(local_88,local_res8);
  }
  return;
}



// FUNCTION 1423449d0 OverlapAnyTestByChannel body=65 status=ok
// SIG undefined OverlapAnyTestByChannel(void)

void UWorld::OverlapAnyTestByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14230f860(param_1,param_5,param_2,param_3,param_4,param_6,param_7,&DAT_146aefe88);
  return;
}



// FUNCTION 142344a20 OverlapAnyTestByObjectType body=62 status=ok
// SIG undefined OverlapAnyTestByObjectType(void)

void UWorld::OverlapAnyTestByObjectType
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6)

{
  FUN_14230f860(param_1,param_5,param_2,param_3,DAT_146aefe3c,param_6,&DAT_146aefe68,param_4);
  return;
}



// FUNCTION 142344a60 OverlapAnyTestByChannel body=65 status=ok
// SIG undefined OverlapAnyTestByChannel(void)

void UWorld::OverlapAnyTestByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14230f990(param_1,param_5,param_2,param_3,param_4,param_6,param_7,&DAT_146aefe88);
  return;
}



// FUNCTION 142344ab0 OverlapMultiByChannel body=76 status=ok
// SIG undefined OverlapMultiByChannel(void)

void UWorld::OverlapMultiByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_14230fac0(param_1,param_6,param_3,param_4,param_2,param_5,param_7,param_8,&DAT_146aefe88);
  return;
}



// FUNCTION 142344b00 OverlapMultiByObjectType body=88 status=ok
// SIG undefined OverlapMultiByObjectType(void)

bool UWorld::OverlapMultiByObjectType
               (undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_14230fac0(param_1,param_6,param_3,param_4,param_2,DAT_146aefe3c,param_7,&DAT_146aefe68,param_5
               );
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 142344b60 FUN_142344b60 body=216 status=ok
// SIG undefined FUN_142344b60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142344b60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_1426d3dd0(&local_30);
  FUN_1426ea8d0(&local_30,2);
  cVar1 = FUN_142311390(param_5,local_38,&local_30);
  if (cVar1 == '\0') {
    local_38[0] = 0;
    local_30 = _DAT_146aefe68;
    uStack_2c = uRam0000000146aefe6c;
    uStack_28 = uRam0000000146aefe70;
    uStack_24 = uRam0000000146aefe74;
    local_20 = _DAT_146aefe78;
    uStack_18 = uRam0000000146aefe80;
  }
  FUN_14230fac0(param_1,param_6,param_3,param_4,param_2,local_38[0],param_7,&local_30,&DAT_146aefe88
               );
  return;
}



// FUNCTION 142344c40 FUN_142344c40 body=47 status=ok
// SIG undefined FUN_142344c40(void)

byte FUN_142344c40(longlong param_1)

{
  if (*(byte *)(param_1 + 0x248) != 6) {
    return (*(char *)(param_1 + 0x4b2) != '\x01') << ((byte)DAT_146af0138 & 0x1f) |
           *(byte *)(param_1 + 0x248);
  }
  return *(char *)(param_1 + 0x249) + DAT_146aefe41;
}



// FUNCTION 142344c70 FUN_142344c70 body=984 status=ok
// SIG undefined FUN_142344c70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142344c70(longlong *param_1,float *param_2,float param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float local_a8;
  
  if ((param_1[0x44] != 0) &&
     (*(float *)((longlong)param_1 + 0x194) <= 0.0 && *(float *)((longlong)param_1 + 0x194) != 0.0))
  {
    if (0.0 <= param_3) {
      fVar5 = (float)(**(code **)(*param_1 + 0x3f8))();
      uVar3 = FUN_14046f570(param_1);
      fVar6 = (float)UWorld::GetDefaultGravityZ(uVar3);
      if (fVar5 <= fVar6 * 0.9) {
        return;
      }
      if (0.0 <= param_3) {
        return;
      }
    }
    if ((*(float *)((longlong)param_1 + 0x18c) == 0.0) && (*(float *)(param_1 + 0x32) == 0.0)) {
      param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(param_1 + 0x6b) = DAT_1468b5d98;
    }
    else {
      fVar5 = param_2[1];
      fVar6 = param_2[2];
      fVar1 = *param_2;
      fVar15 = fVar1 * fVar1 + fVar5 * fVar5;
      fVar7 = fVar6 * fVar6 + fVar15;
      if (fVar7 == 1.0) {
        local_a8 = (float)*(undefined8 *)param_2;
        fVar16 = (float)((ulonglong)*(undefined8 *)param_2 >> 0x20);
        fVar14 = param_2[2];
      }
      else {
        fVar16 = DAT_1468b5d94;
        fVar14 = DAT_1468b5d98;
        local_a8 = DAT_1468b5d90;
        if (1e-08 <= fVar7) {
          auVar13 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
          fVar14 = auVar13._0_4_;
          fVar14 = fVar14 + fVar14 * (0.5 - fVar7 * 0.5 * fVar14 * fVar14);
          fVar14 = fVar14 + fVar14 * (0.5 - fVar7 * 0.5 * fVar14 * fVar14);
          local_a8 = fVar1 * fVar14;
          fVar16 = fVar5 * fVar14;
          fVar14 = fVar6 * fVar14;
        }
      }
      fVar7 = (float)(**(code **)(*param_1 + 0x6b8))(param_1);
      param_1[0x6a] = CONCAT44(fVar16 * fVar7,local_a8 * fVar7);
      *(float *)(param_1 + 0x6b) = fVar14 * fVar7;
      if ((SQRT(fVar15) < ABS(fVar6) * 0.5) &&
         (fVar15 * 0.5 <
          fVar5 * *(float *)(param_1 + 0x32) + fVar1 * *(float *)((longlong)param_1 + 0x18c) +
          fVar6 * *(float *)((longlong)param_1 + 0x194))) {
        *(uint *)(param_1 + 0x6a) = *(uint *)(param_1 + 0x6a) ^ 0x80000000;
        *(uint *)(param_1 + 0x6b) = *(uint *)(param_1 + 0x6b) ^ 0x80000000;
        *(uint *)((longlong)param_1 + 0x354) = *(uint *)((longlong)param_1 + 0x354) ^ 0x80000000;
      }
      lVar4 = *(longlong *)(param_1[0x44] + 0x4d0);
      uVar8 = *(uint *)(lVar4 + 0x230) & _DAT_146af0070;
      uVar9 = *(uint *)(lVar4 + 0x234) & uRam0000000146af0074;
      uVar10 = *(uint *)(lVar4 + 0x238) & uRam0000000146af0078;
      uVar11 = *(uint *)(lVar4 + 0x23c) & uRam0000000146af007c;
      auVar12._4_4_ = uVar9;
      auVar12._0_4_ = uVar8;
      auVar12._8_4_ = uVar10;
      auVar12._12_4_ = uVar11;
      auVar13._4_4_ = uVar10;
      auVar13._0_4_ = uVar9;
      auVar13._8_4_ = uVar8;
      auVar13._12_4_ = uVar11;
      auVar13 = minps(auVar12,auVar13);
      auVar2._4_4_ = uVar8;
      auVar2._0_4_ = uVar10;
      auVar2._8_4_ = uVar9;
      auVar2._12_4_ = uVar11;
      auVar13 = minps(auVar13,auVar2);
      if (auVar13._0_4_ * *(float *)(lVar4 + 0x714) * 1.5 <= SQRT(fVar15)) {
        if (fVar5 * *(float *)(param_1 + 0x32) + fVar1 * *(float *)((longlong)param_1 + 0x18c) +
            fVar6 * *(float *)((longlong)param_1 + 0x194) < 0.0) {
          lVar4 = FUN_14046f570(param_1);
          fVar5 = 0.2 - *(float *)(lVar4 + 0x7b0);
          if (fVar5 <= 0.0) {
            fVar5 = 0.0;
          }
          *(float *)(param_1 + 0x32) = fVar5 * *(float *)(param_1 + 0x32);
          *(float *)((longlong)param_1 + 0x18c) = fVar5 * *(float *)((longlong)param_1 + 0x18c);
        }
      }
      else {
        *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
        param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        *(float *)(param_1 + 0x6b) = DAT_1468b5d98;
      }
    }
  }
  return;
}



// FUNCTION 142345050 FUN_142345050 body=2618 status=ok
// SIG undefined FUN_142345050(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142345050(float *param_1,float param_2)

{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong lVar14;
  bool bVar15;
  char cVar16;
  char cVar17;
  int iVar18;
  longlong lVar19;
  longlong *plVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auStack_328 [32];
  float *local_308;
  undefined1 local_300;
  undefined8 local_2f8;
  float local_2f0;
  undefined8 local_2e8;
  float local_2e0;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float *local_2b8;
  float fStack_2b0;
  undefined4 uStack_2ac;
  undefined4 uStack_2a8;
  undefined4 uStack_2a4;
  longlong lStack_2a0;
  float local_298;
  undefined4 uStack_294;
  code *local_288 [2];
  undefined1 local_278 [32];
  undefined8 local_258;
  undefined4 local_248;
  undefined1 local_238 [448];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_328;
  lVar19 = FUN_14046f570();
  cVar16 = (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1);
  if (cVar16 == '\0') {
    return;
  }
  if (lVar19 == 0) {
    return;
  }
  uVar23 = 0;
  if ((*(char *)(param_1 + 0x92) == '\0') ||
     (plVar20 = *(longlong **)(param_1 + 0x5e), *(char *)((longlong)plVar20 + 0x24e) != '\x02')) {
LAB_142345a24:
    if ((((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x56c) & 8) == 0) &&
        ((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x56c) >> 9 & 1) == 0)) &&
       ((cVar16 = FUN_1423146e0(), cVar16 != '\0' &&
        (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x4c0) != 0)))) {
      FUN_142357d10(param_1,param_2);
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      param_1[0x1f1] = 0.0;
      FRootMotionSourceGroup::Clear(param_1 + 0x18a);
    }
    (**(code **)(*(longlong *)param_1 + 0x6f8))(param_1);
    return;
  }
  local_2f8 = 0;
  cVar16 = (**(code **)(*plVar20 + 0x400))(plVar20,0);
  if (cVar16 != '\0') goto LAB_142345a24;
  cVar16 = (**(code **)(*(longlong *)param_1 + 0x560))(param_1);
  if (cVar16 != '\0') {
    lVar3 = *(longlong *)(param_1 + 0x5e);
    local_2d8 = *(float *)(lVar3 + 0x220);
    fStack_2d4 = *(float *)(lVar3 + 0x224);
    fStack_2d0 = *(float *)(lVar3 + 0x228);
    fStack_2cc = *(float *)(lVar3 + 0x22c);
    if (((local_2d8 != param_1[0xd7]) || (fStack_2d4 != param_1[0xd8])) ||
       (fStack_2d0 != param_1[0xd9])) {
      uVar23 = 0x100;
    }
  }
  param_1[0xc0] = (float)((uint)param_1[0xc0] | uVar23);
  pfVar1 = param_1 + 0x18a;
  cVar16 = FUN_142453680(pfVar1);
  if (cVar16 != '\0') {
    param_1[0x1c5] = (param_1[99] - param_1[0xe0]) + param_1[0x1c5];
    param_1[0x1c6] = (param_1[100] - param_1[0xe1]) + param_1[0x1c6];
    param_1[0x1c7] = (param_1[0x65] - param_1[0xe2]) + param_1[0x1c7];
  }
  FUN_14237e6d0(local_238,*(longlong *)(param_1 + 0x5e),(uint)param_1[0xc0] >> 5 & 1,1);
  (**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,param_2);
  cVar16 = FUN_142340bf0(param_1);
  if ((cVar16 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x56c) & 0x208) == 0)) {
    FRootMotionSourceGroup::CleanUpInvalidRootMotion
              (pfVar1,param_2,*(longlong *)(param_1 + 0x88),param_1);
  }
  pfVar2 = param_1 + 99;
  lVar3 = *(longlong *)pfVar2;
  fVar24 = param_1[0x65];
  local_2e8 = *(undefined8 *)(*(longlong *)(param_1 + 0x5e) + 0x220);
  local_2e0 = *(float *)(*(longlong *)(param_1 + 0x5e) + 0x228);
  local_2f8 = lVar3;
  local_2f0 = fVar24;
  (**(code **)(*(longlong *)param_1 + 0x6f0))(param_1,param_2);
  (**(code **)(*(longlong *)param_1 + 0x700))(param_1,param_2);
  if ((*(char *)(param_1 + 0x92) == '\x02') && (((uint)param_1[0x12d] & 0x40000) != 0)) {
    (**(code **)(*(longlong *)param_1 + 0x750))(param_1);
  }
  (**(code **)(*(longlong *)param_1 + 0x628))(param_1);
  (**(code **)(*(longlong *)param_1 + 0x6f8))(param_1);
  cVar17 = FUN_142453680(pfVar1);
  if (cVar17 != '\0') {
    param_1[0x1c5] = (*pfVar2 - (float)local_2f8) + param_1[0x1c5];
    param_1[0x1c6] = (param_1[100] - local_2f8._4_4_) + param_1[0x1c6];
    param_1[0x1c7] = (param_1[0x65] - local_2f0) + param_1[0x1c7];
  }
  if (((cVar16 != '\0') && ((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x56c) & 8) == 0)) &&
     ((*(uint *)(*(longlong *)(param_1 + 0x88) + 0x56c) >> 9 & 1) == 0)) {
    cVar16 = FUN_1423146e0();
    if ((cVar16 != '\0') && (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x4c0) != 0)) {
      FUN_142357d10(param_1,param_2);
      cVar16 = (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1);
      if (cVar16 == '\0') goto LAB_14234562c;
      cVar16 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x778))();
      if (((cVar16 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x88) + 0x128) == '\x02')) &&
         (cVar16 = FUN_1423146c0(), cVar16 != '\0')) {
        lVar4 = *(longlong *)(param_1 + 0x88);
        *(undefined1 *)(lVar4 + 0x6d0) = *(undefined1 *)(param_1 + 0x1f0);
        *(float *)(lVar4 + 0x6d4) = param_1[0x1f1];
        lVar14 = *(longlong *)(param_1 + 0x1f6);
        *(longlong *)(lVar4 + 0x6e0) = *(longlong *)(param_1 + 500);
        *(longlong *)(lVar4 + 0x6e8) = lVar14;
        lVar14 = *(longlong *)(param_1 + 0x1fa);
        *(longlong *)(lVar4 + 0x6f0) = *(longlong *)(param_1 + 0x1f8);
        *(longlong *)(lVar4 + 0x6f8) = lVar14;
        fVar25 = param_1[0x1fd];
        fVar26 = param_1[0x1fe];
        fVar27 = param_1[0x1ff];
        *(float *)(lVar4 + 0x700) = param_1[0x1fc];
        *(float *)(lVar4 + 0x704) = fVar25;
        *(float *)(lVar4 + 0x708) = fVar26;
        *(float *)(lVar4 + 0x70c) = fVar27;
      }
    }
    local_308 = (float *)CONCAT71(local_308._1_7_,1);
    FUN_14245a080(pfVar1,param_2,*(longlong *)(param_1 + 0x88),param_1);
    cVar16 = (**(code **)(**(longlong **)(param_1 + 0x88) + 0x778))();
    if ((cVar16 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x88) + 0x128) == '\x02')) {
      FUN_14243f720(*(longlong *)(param_1 + 0x88) + 0x5d0,pfVar1);
    }
  }
  cVar16 = FRootMotionSourceGroup::HasOverrideVelocity(pfVar1);
  if ((cVar16 != '\0') ||
     (cVar16 = (**(code **)(*(longlong *)param_1 + 0xa60))(param_1), cVar16 != '\0')) {
    cVar16 = (**(code **)(*(longlong *)param_1 + 0xa60))(param_1);
    if (cVar16 == '\0') {
      if (0.0 < param_2) {
        local_2f0 = param_1[0x65];
        local_2f8 = *(longlong *)pfVar2;
        local_308 = (float *)&local_2f8;
        FRootMotionSourceGroup::AccumulateOverrideRootMotionVelocity
                  (pfVar1,param_2,*(longlong *)(param_1 + 0x88),param_1);
        *(longlong *)pfVar2 = local_2f8;
        fVar25 = local_2f0;
        goto LAB_1423455f4;
      }
    }
    else {
      if (*(longlong *)(*(longlong *)(param_1 + 0x88) + 0x4c0) != 0) {
        plVar20 = (longlong *)FUN_1423370f0(param_1,&local_2b8,param_1 + 500);
        *(undefined1 *)(param_1 + 0x1f0) = 1;
        lVar4 = plVar20[1];
        *(longlong *)(param_1 + 500) = *plVar20;
        *(longlong *)(param_1 + 0x1f6) = lVar4;
        lVar4 = plVar20[3];
        *(longlong *)(param_1 + 0x1f8) = plVar20[2];
        *(longlong *)(param_1 + 0x1fa) = lVar4;
        lVar4 = plVar20[5];
        *(longlong *)(param_1 + 0x1fc) = plVar20[4];
        *(longlong *)(param_1 + 0x1fe) = lVar4;
        auVar8._4_4_ = DAT_146531a94;
        auVar8._0_4_ = DAT_146531a90;
        auVar8._8_4_ = DAT_146531a98;
        auVar8._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x1fc) = auVar8;
        param_1[0x1f1] = 1.0;
      }
      if (0.0 < param_2) {
        local_2f8 = *(longlong *)(param_1 + 0x1f8);
        local_2f0 = param_1[0x1fa];
        local_308 = pfVar2;
        plVar20 = (longlong *)
                  (**(code **)(*(longlong *)param_1 + 0xa70))(param_1,&local_2c8,&local_2f8,param_2)
        ;
        *(longlong *)(param_1 + 0x200) = *plVar20;
        param_1[0x202] = *(float *)(plVar20 + 1);
        puVar21 = (undefined8 *)
                  (**(code **)(*(longlong *)param_1 + 0xa80))
                            (param_1,&local_2c8,param_1 + 0x200,pfVar2);
        *(undefined8 *)pfVar2 = *puVar21;
        fVar25 = *(float *)(puVar21 + 1);
LAB_1423455f4:
        param_1[0x65] = fVar25;
      }
    }
  }
  (**(code **)(**(longlong **)(param_1 + 0x88) + 0x918))(*(longlong **)(param_1 + 0x88),param_2);
  (**(code **)(*(longlong *)param_1 + 0x610))(param_1,param_2,0);
  cVar16 = (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1);
  if (cVar16 != '\0') {
    (**(code **)(*(longlong *)param_1 + 0x708))(param_1,param_2);
    if (((((uint)param_1[0x204] & 1) != 0) ||
        (cVar16 = (**(code **)(*(longlong *)param_1 + 0xa60))(param_1), cVar16 == '\0')) &&
       (cVar16 = FUN_1422358f0(*(longlong *)(param_1 + 0x88)), cVar16 == '\0')) {
      (**(code **)(*(longlong *)param_1 + 0x798))(param_1,param_2);
    }
    cVar16 = (**(code **)(*(longlong *)param_1 + 0xa60))(param_1);
    if (cVar16 != '\0') {
      lVar4 = *(longlong *)(param_1 + 0x5e);
      fVar25 = param_1[500];
      fVar26 = param_1[0x1f5];
      fVar27 = param_1[0x1f6];
      fVar9 = param_1[0x1f7];
      fVar10 = *(float *)(lVar4 + 0x210);
      fVar11 = *(float *)(lVar4 + 0x214);
      fVar12 = *(float *)(lVar4 + 0x218);
      fVar13 = *(float *)(lVar4 + 0x21c);
      local_2f8 = CONCAT44(local_2f8._4_4_,0x322bcc77);
      auVar5._4_4_ = -(uint)(1e-08 < (float)((uint)(fVar26 - DAT_1464aa814) & uRam0000000146af0074))
      ;
      auVar5._0_4_ = -(uint)(1e-08 < (float)((uint)(fVar25 - DAT_1464aa810) & _DAT_146af0070));
      auVar5._8_4_ = -(uint)(1e-08 < (float)((uint)(fVar27 - DAT_1464aa818) & uRam0000000146af0078))
      ;
      auVar5._12_4_ = -(uint)(1e-08 < (float)((uint)(fVar9 - DAT_1464aa81c) & uRam0000000146af007c))
      ;
      iVar18 = movmskps((int)lVar4,auVar5);
      if ((iVar18 != 0) &&
         (auVar7._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + fVar26) &
                                                uRam0000000146af0074)),
         auVar7._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + fVar25) & _DAT_146af0070)),
         auVar7._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + fVar27) &
                                               uRam0000000146af0078)),
         auVar7._12_4_ =
              -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + fVar9) & uRam0000000146af007c)),
         iVar18 = movmskps(iVar18,auVar7), iVar18 != 0)) {
        local_2d8 = fVar13 * fVar25 * _DAT_146af0160 + fVar9 * fVar10 +
                    fVar12 * fVar26 * _DAT_146af0150 + fVar11 * fVar27 * _DAT_146af0140;
        fStack_2d4 = fVar12 * fVar25 * fRam0000000146af0164 + fVar9 * fVar11 +
                     fVar13 * fVar26 * fRam0000000146af0154 + fVar10 * fVar27 * fRam0000000146af0144
        ;
        fStack_2d0 = fVar11 * fVar25 * fRam0000000146af0168 + fVar9 * fVar12 +
                     fVar10 * fVar26 * fRam0000000146af0158 + fVar13 * fVar27 * fRam0000000146af0148
        ;
        fStack_2cc = fVar10 * fVar25 * fRam0000000146af016c + fVar9 * fVar13 +
                     fVar11 * fVar26 * fRam0000000146af015c + fVar12 * fVar27 * fRam0000000146af014c
        ;
        uVar22 = FUN_14247f500();
        FUN_14247ea90(uVar22);
        local_300 = 0;
        local_308 = (float *)0x0;
        (**(code **)(*(longlong *)param_1 + 0x488))(param_1,&DAT_1468b5d90,&local_2d8,1);
      }
      *(undefined1 *)(param_1 + 0x1f0) = 0;
      param_1[0x1f1] = 0.0;
    }
    param_1[0x12d] = (float)((uint)param_1[0x12d] & 0xffbfffff);
    FUN_14237f990(local_238);
    uStack_2ac = (undefined4)local_2e8;
    uStack_2a8 = (undefined4)((ulonglong)local_2e8 >> 0x20);
    uStack_2a4 = local_2e0;
    local_258 = 0;
    local_248 = 0;
    local_2b8 = param_1;
    fStack_2b0 = param_2;
    lStack_2a0 = lVar3;
    local_298 = fVar24;
    puVar21 = (undefined8 *)FUN_140438ef0(0x30,local_278);
    if (puVar21 != (undefined8 *)0x0) {
      *puVar21 = &PTR_FUN_143f4d098;
      puVar21[1] = local_2b8;
      puVar21[2] = CONCAT44(uStack_2ac,fStack_2b0);
      puVar21[3] = CONCAT44(uStack_2a4,uStack_2a8);
      puVar21[4] = lStack_2a0;
      puVar21[5] = CONCAT44(uStack_294,local_298);
    }
    local_288[0] = FUN_142332210;
    FUN_14234b4d0(param_1,local_288);
    (**(code **)(*(longlong *)param_1 + 0x600))(param_1);
    (**(code **)(*(longlong *)param_1 + 0x470))(param_1);
    if ((*(longlong *)(param_1 + 0x88) == 0) ||
       (*(char *)(*(longlong *)(param_1 + 0x88) + 0x128) != '\x03')) {
      bVar15 = false;
    }
    else {
      bVar15 = true;
    }
    local_258 = 0;
    local_248 = 0;
    puVar21 = (undefined8 *)FUN_140438ef0(0x10,local_278);
    if (puVar21 != (undefined8 *)0x0) {
      puVar21[1] = param_1;
      *puVar21 = &PTR_FUN_143f77b70;
    }
    local_288[0] = (code *)&LAB_142332660;
    FUN_14234b4d0(param_1,local_288);
    lVar3 = *(longlong *)(param_1 + 0x5e);
    if (lVar3 == 0) {
      local_2f8 = _DAT_1468b5d90;
      local_2f0 = DAT_1468b5d98;
    }
    else {
      local_2f8 = *(undefined8 *)(lVar3 + 0x220);
      local_2f0 = *(float *)(lVar3 + 0x228);
    }
    local_2e0 = local_2f0;
    iVar18 = (int)&local_2c8;
    local_2e8 = local_2f8;
    fVar24 = DAT_1464aa810;
    fVar25 = DAT_1464aa814;
    fVar26 = DAT_1464aa818;
    fVar27 = DAT_1464aa81c;
    if (lVar3 != 0) {
      fVar24 = *(float *)(lVar3 + 0x210);
      fVar25 = *(float *)(lVar3 + 0x214);
      fVar26 = *(float *)(lVar3 + 0x218);
      fVar27 = *(float *)(lVar3 + 0x21c);
    }
    if ((((bVar15) && (lVar3 != 0)) &&
        ((*(longlong *)(param_1 + 0x46) == 0 ||
         (local_2d8 = fVar24, fStack_2d4 = fVar25, fStack_2d0 = fVar26, fStack_2cc = fVar27,
         local_2c8 = fVar24, fStack_2c4 = fVar25, fStack_2c0 = fVar26, fStack_2bc = fVar27,
         iVar18 = FUN_142235230(), iVar18 != 3)))) &&
       (((((float)local_2e8 != param_1[0xd7] || (local_2e8._4_4_ != param_1[0xd8])) ||
         (local_2e0 != param_1[0xd9])) ||
        (auVar6._4_4_ = -(uint)(param_1[0xdd] != fVar25),
        auVar6._0_4_ = -(uint)(param_1[0xdc] != fVar24),
        auVar6._8_4_ = -(uint)(param_1[0xde] != fVar26),
        auVar6._12_4_ = -(uint)(param_1[0xdf] != fVar27), iVar18 = movmskps(iVar18,auVar6),
        iVar18 != 0)))) {
      param_1[0xe3] = *(float *)(lVar19 + 0x790);
    }
    *(longlong *)(param_1 + 0xd7) = local_2f8;
    param_1[0xd9] = local_2f0;
    *(longlong *)(param_1 + 0xe0) = *(longlong *)pfVar2;
    param_1[0xe2] = param_1[0x65];
    param_1[0xdc] = fVar24;
    param_1[0xdd] = fVar25;
    param_1[0xde] = fVar26;
    param_1[0xdf] = fVar27;
    return;
  }
LAB_14234562c:
  FUN_14237f990(local_238);
  return;
}



// FUNCTION 142345a90 FUN_142345a90 body=17 status=ok
// SIG undefined FUN_142345a90(void)

void FUN_142345a90(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 auStackX_10 [6];
  
  plVar1 = *(longlong **)(param_1 + 0x220);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  lVar2 = *plVar1;
  auStackX_10[0] = param_2;
  uVar3 = FUN_14178ac60(plVar1,DAT_146b1c390);
  (**(code **)(lVar2 + 0x208))(plVar1,uVar3,auStackX_10);
  return;
}



// FUNCTION 142345ab0 FUN_142345ab0 body=4825 status=ok
// SIG undefined FUN_142345ab0(void)

void FUN_142345ab0(longlong *param_1,float param_2,int param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  float *pfVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float *in_stack_fffffffffffffc08;
  undefined8 uVar23;
  undefined4 uVar25;
  undefined8 uVar24;
  float *in_stack_fffffffffffffc10;
  undefined8 local_3e8;
  float local_3e0;
  undefined8 local_3d8;
  float local_3d0;
  float local_3c8;
  float local_3c4;
  float local_3c0;
  undefined8 local_3b8;
  float local_3b0;
  float local_3a8;
  float local_3a4;
  float local_3a0;
  float local_398;
  float fStack_394;
  float local_390;
  float local_388;
  float fStack_384;
  undefined4 local_380;
  undefined8 local_378;
  float local_370;
  undefined8 local_368;
  float local_360;
  undefined8 local_358;
  undefined4 local_350;
  undefined8 local_348;
  float local_340;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  float local_328;
  float fStack_324;
  float local_320;
  float local_318;
  float local_314;
  float local_310;
  float local_308;
  float fStack_304;
  float local_300;
  float local_2f8;
  float fStack_2f4;
  float local_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  float local_2d8;
  float local_2d4;
  float local_2d0;
  float local_2c8;
  undefined4 uStack_2c4;
  float local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  float local_2a4;
  undefined4 uStack_2a0;
  float local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  float local_288 [3];
  float local_27c;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248;
  undefined8 local_1f8;
  undefined4 local_1f0;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint local_1b8 [4];
  undefined1 local_1a8 [12];
  undefined4 local_19c;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_118 [12];
  undefined1 local_10c [12];
  undefined1 local_100 [12];
  undefined1 local_f4 [12];
  undefined1 local_e8 [176];
  
  if (1e-06 <= param_2) {
    (**(code **)(*param_1 + 0x718))(param_1,&local_388,param_2);
    local_380 = 0;
    fVar13 = local_388 * local_388 + fStack_384 * fStack_384;
    while( true ) {
      uVar25 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
      if ((int)param_1[0x78] <= param_3) break;
      fVar21 = *(float *)((longlong)param_1 + 0x3bc);
      param_3 = param_3 + 1;
      fVar22 = param_2;
      if (((fVar21 < param_2) && (param_3 < (int)param_1[0x78])) &&
         (fVar22 = param_2 * 0.5, fVar21 <= param_2 * 0.5)) {
        fVar22 = fVar21;
      }
      lVar4 = param_1[0x2f];
      if (fVar22 <= 1e-06) {
        fVar22 = 1e-06;
      }
      fVar21 = *(float *)(lVar4 + 0x220);
      fStack_2f4 = *(float *)(lVar4 + 0x224);
      local_2f0 = *(float *)(lVar4 + 0x228);
      uStack_1dc = *(undefined4 *)(lVar4 + 0x22c);
      param_2 = param_2 - fVar22;
      local_2e8 = *(undefined4 *)(lVar4 + 0x210);
      uStack_2e4 = *(undefined4 *)(lVar4 + 0x214);
      uStack_2e0 = *(undefined4 *)(lVar4 + 0x218);
      uStack_2dc = *(undefined4 *)(lVar4 + 0x21c);
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
      if ((char)param_1[0xe4] != '\0') {
        *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
        *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
        *(undefined1 *)(param_1 + 0xe4) = 0;
      }
      pfVar1 = (float *)((longlong)param_1 + 0x18c);
      uVar2 = *(undefined8 *)pfVar1;
      fVar19 = *(float *)((longlong)param_1 + 0x194);
      local_3d8 = uVar2;
      local_3d0 = fVar19;
      local_348 = uVar2;
      local_340 = fVar19;
      local_2f8 = fVar21;
      local_1e8 = fVar21;
      fStack_1e4 = fStack_2f4;
      fStack_1e0 = local_2f0;
      local_1d8 = fStack_2f4;
      fStack_1d4 = fStack_2f4;
      fStack_1d0 = fStack_2f4;
      fStack_1cc = fStack_2f4;
      local_1c8 = local_2f0;
      fStack_1c4 = local_2f0;
      fStack_1c0 = local_2f0;
      fStack_1bc = local_2f0;
      cVar7 = (**(code **)(*param_1 + 0xa60))(param_1);
      fVar18 = local_340;
      if ((cVar7 == '\0') &&
         (cVar7 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar7 == '\0')) {
        uVar12 = (**(code **)(*param_1 + 0x6c0))(param_1);
        if (0.0 < fVar13) {
          lVar4 = param_1[0x6a];
          lVar6 = param_1[0x6b];
          param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          *(float *)(param_1 + 0x6b) = DAT_1468b5d98;
          uVar24 = *(undefined8 *)pfVar1;
          uVar3 = *(undefined4 *)((longlong)param_1 + 0x194);
          *(undefined8 *)pfVar1 = uVar24;
          *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x194);
          uVar23 = CONCAT44(uVar25,uVar12);
          *(undefined4 *)((longlong)param_1 + 0x194) = 0;
          (**(code **)(*param_1 + 0x688))(param_1,fVar22,(int)param_1[0x5c],0,uVar23);
          uVar25 = (undefined4)((ulonglong)uVar23 >> 0x20);
          local_3d8 = *(undefined8 *)pfVar1;
          *(undefined8 *)pfVar1 = uVar24;
          *(undefined4 *)((longlong)param_1 + 0x194) = uVar3;
          param_1[0x6a] = lVar4;
          *(int *)(param_1 + 0x6b) = (int)lVar6;
          local_3d0 = fVar18;
        }
        lVar4 = param_1[0x6a];
        lVar6 = param_1[0x6b];
        param_1[0x6a] = CONCAT44(fStack_384,local_388);
        *(undefined4 *)(param_1 + 0x6b) = local_380;
        uVar24 = CONCAT44(uVar25,uVar12);
        *(undefined4 *)((longlong)param_1 + 0x194) = 0;
        (**(code **)(*param_1 + 0x688))(param_1,fVar22,(int)param_1[0x5c],0,uVar24);
        uVar25 = (undefined4)((ulonglong)uVar24 >> 0x20);
        *(float *)((longlong)param_1 + 0x194) = fVar18;
        param_1[0x6a] = lVar4;
        *(int *)(param_1 + 0x6b) = (int)lVar6;
        if (fVar13 <= 0.0) {
          local_3d8 = *(undefined8 *)pfVar1;
          local_3d0 = *(float *)((longlong)param_1 + 0x194);
        }
      }
      local_350 = (**(code **)(*param_1 + 0x3f8))(param_1);
      local_358 = 0;
      fVar15 = *(float *)(param_1[0x44] + 0x574);
      fVar17 = fVar22;
      if (0.0 < fVar15) {
        fVar20 = fVar15;
        if (fVar22 <= fVar15) {
          fVar20 = fVar22;
        }
        if (((*(byte *)(param_1 + 0x45) & 1) == 0) && (fVar17 = fVar22 - fVar20, fVar17 <= 0.0)) {
          fVar17 = 0.0;
        }
        *(float *)(param_1[0x44] + 0x574) = fVar15 - fVar20;
        if (*(float *)(param_1[0x44] + 0x574) <= 0.0) {
          FUN_14231b760();
        }
      }
      puVar9 = (undefined8 *)
               (**(code **)(*param_1 + 0x678))
                         (param_1,local_118,pfVar1,&local_358,CONCAT44(uVar25,fVar17));
      *(undefined8 *)pfVar1 = *puVar9;
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar9 + 1);
      if (fVar13 <= 0.0) {
        local_1f0 = *(undefined4 *)(puVar9 + 1);
        puVar10 = &local_1f8;
        local_1f8 = *puVar9;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(*param_1 + 0x678))(param_1,local_10c,&local_3d8,&local_358,fVar17);
      }
      uVar24 = *puVar10;
      local_3d0 = *(float *)(puVar10 + 1);
      local_3d8._0_4_ = (float)uVar24;
      local_3d8._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
      local_310 = 1.0 / fVar22;
      local_318 = (*pfVar1 - (float)local_3d8) * local_310;
      local_314 = (*(float *)(param_1 + 0x32) - local_3d8._4_4_) * local_310;
      local_310 = (*(float *)((longlong)param_1 + 0x194) - local_3d0) * local_310;
      local_3d8 = uVar24;
      FUN_14232e840(param_1,fVar22);
      if (((*(uint *)((longlong)param_1 + 0x4b4) >> 9 & 1) != 0) &&
         (*(float *)((longlong)param_1 + 0x194) <= 0.0)) {
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffffdff;
        (**(code **)(*param_1 + 0x670))(param_1);
      }
      _guard_xfg_dispatch_icall_nop(local_288,0,0x90);
      in_stack_fffffffffffffc08 = local_288;
      in_stack_fffffffffffffc10 =
           (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
      local_27c = 1.0;
      local_3c8 = ((float)local_348 + *pfVar1) * 0.5 * fVar22;
      local_3c4 = (local_348._4_4_ + *(float *)(param_1 + 0x32)) * 0.5 * fVar22;
      local_3c0 = (fVar18 + *(float *)((longlong)param_1 + 0x194)) * 0.5 * fVar22;
      FUN_1423755e0(param_1,&local_3c8,&local_2e8,1,in_stack_fffffffffffffc08,
                    in_stack_fffffffffffffc10);
      cVar7 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if (cVar7 == '\0') {
        return;
      }
      fVar18 = (1.0 - local_27c) * fVar22;
      cVar7 = (**(code **)(*param_1 + 0x568))(param_1);
      if (cVar7 != '\0') {
        local_378 = CONCAT44(fStack_2f4,local_2f8);
        local_370 = local_2f0;
        local_368 = uVar2;
        local_360 = fVar19;
        FUN_142356470(param_1,&local_378,&local_368,fVar22,fVar18 + param_2,param_3);
        return;
      }
      if ((local_288[0]._0_1_ & 1) != 0) {
        lVar4 = param_1[0x2f];
        local_2b0 = *(undefined4 *)(lVar4 + 0x220);
        local_2ac = *(undefined4 *)(lVar4 + 0x224);
        local_2a8 = *(undefined4 *)(lVar4 + 0x228);
        cVar7 = (**(code **)(*param_1 + 0x898))(param_1,&local_2b0,local_288);
        if (cVar7 != '\0') {
          (**(code **)(*param_1 + 0x738))(param_1,local_288,fVar18 + param_2,param_3);
          return;
        }
        local_3c8 = fVar22 * *pfVar1;
        local_3c4 = fVar22 * *(float *)(param_1 + 0x32);
        local_3c0 = fVar22 * *(float *)((longlong)param_1 + 0x194);
        if (((local_288[0]._0_1_ & 2) == 0) &&
           (cVar7 = (**(code **)(*param_1 + 0x8a0))(param_1,fVar22,&local_3c8,local_288),
           cVar7 != '\0')) {
          lVar4 = param_1[0x2f];
          local_338 = *(undefined4 *)(lVar4 + 0x220);
          local_334 = *(undefined4 *)(lVar4 + 0x224);
          local_330 = *(undefined4 *)(lVar4 + 0x228);
          local_1b8[0] = local_1b8[0] & 0xfffffff8;
          local_1b8[1] = 0;
          local_1b8[2] = 0;
          local_144 = 0xffffffff;
          local_140 = 0;
          local_13c = 0xffffffff;
          local_138 = 0;
          local_134 = 0xffffffff;
          local_130 = 0;
          local_128 = 0;
          local_120 = 0;
          _guard_xfg_dispatch_icall_nop(local_1a8,0,0x90);
          local_19c = 0x3f800000;
          (**(code **)(*param_1 + 0x870))(param_1,&local_338,local_1b8,0,0);
          if ((((byte)local_1b8[0] & 3) == 3) &&
             (cVar7 = (**(code **)(*param_1 + 0x898))(param_1,&local_338,local_1a8), cVar7 != '\0'))
          {
            (**(code **)(*param_1 + 0x738))(param_1,local_1a8,fVar18 + param_2,param_3);
            return;
          }
        }
        (**(code **)(*param_1 + 0x468))(param_1,local_288,fVar22);
        cVar7 = (**(code **)(*param_1 + 0x5c0))(param_1);
        if (cVar7 == '\0') {
          return;
        }
        cVar7 = (**(code **)(*param_1 + 0x558))(param_1);
        if (cVar7 == '\0') {
          return;
        }
        if (0.0 < fVar13) {
          pfVar11 = (float *)(**(code **)(*param_1 + 0x730))
                                       (param_1,local_100,fVar22,&local_318,local_288,
                                        (ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
          local_3c8 = (fVar22 * *pfVar11 + (float)local_3d8) * fVar22;
          local_3c4 = (fVar22 * pfVar11[1] + local_3d8._4_4_) * fVar22;
          local_3c0 = (fVar22 * pfVar11[2] + local_3d0) * fVar22;
        }
        fVar17 = local_248;
        fVar15 = local_24c;
        fVar19 = local_250;
        in_stack_fffffffffffffc10 = local_288;
        in_stack_fffffffffffffc08 = &local_3a8;
        local_3a8 = local_25c;
        local_3a4 = local_258;
        local_3a0 = local_254;
        (**(code **)(*param_1 + 0x4a0))
                  (param_1,&local_3e8,&local_3c8,1.0 - local_27c,in_stack_fffffffffffffc08,
                   in_stack_fffffffffffffc10);
        if (0.0001 < fVar18) {
          if ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) {
            fVar20 = 1.0 / fVar18;
            local_328 = (float)local_3e8 * fVar20;
            fStack_324 = local_3e8._4_4_ * fVar20;
            fVar20 = fVar20 * local_3e0;
            local_320 = fVar20;
            cVar7 = (**(code **)(*param_1 + 0xa60))(param_1);
            if ((cVar7 == '\0') ||
               (cVar7 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar7 != '\0'))
            {
              local_370 = local_320;
              pfVar11 = (float *)&local_378;
              local_378 = CONCAT44(fStack_324,local_328);
            }
            else {
              pfVar11 = &local_2a4;
              local_2a4 = *pfVar1;
              uStack_2a0 = (int)param_1[0x32];
              local_29c = fVar20;
            }
            fVar20 = pfVar11[2];
            *(undefined8 *)pfVar1 = *(undefined8 *)pfVar11;
            *(float *)((longlong)param_1 + 0x194) = fVar20;
          }
          if (0.0 < local_3e8._4_4_ * local_3c4 + (float)local_3e8 * local_3c8 +
                    local_3c0 * local_3e0) {
            in_stack_fffffffffffffc08 = local_288;
            in_stack_fffffffffffffc10 =
                 (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
            FUN_1423755e0(param_1,&local_3e8,&local_2e8,1,in_stack_fffffffffffffc08,
                          in_stack_fffffffffffffc10);
            if ((local_288[0]._0_1_ & 1) != 0) {
              lVar4 = param_1[0x2f];
              local_298 = *(undefined4 *)(lVar4 + 0x220);
              local_294 = *(undefined4 *)(lVar4 + 0x224);
              local_290 = *(undefined4 *)(lVar4 + 0x228);
              fVar20 = fVar18 * (1.0 - local_27c);
              cVar7 = (**(code **)(*param_1 + 0x898))(param_1,&local_298,local_288);
              if (cVar7 != '\0') {
                (**(code **)(*param_1 + 0x738))(param_1,local_288,fVar20 + param_2,param_3);
                return;
              }
              (**(code **)(*param_1 + 0x468))(param_1,local_288,fVar18,&local_3e8);
              cVar7 = (**(code **)(*param_1 + 0x5c0))(param_1);
              if (cVar7 == '\0') {
                return;
              }
              cVar7 = (**(code **)(*param_1 + 0x558))(param_1);
              if (cVar7 == '\0') {
                return;
              }
              if ((0.0 < fVar13) && (0.001 < local_254)) {
                in_stack_fffffffffffffc10 = local_288;
                local_2d8 = (float)local_3d8 * fVar18;
                local_2d4 = local_3d8._4_4_ * fVar18;
                local_2d0 = local_3d0 * fVar18;
                puVar9 = (undefined8 *)
                         (**(code **)(*param_1 + 0x4a0))
                                   (param_1,local_f4,&local_2d8,0x3f800000,&local_3a8,
                                    in_stack_fffffffffffffc10);
                local_3e8 = *puVar9;
                local_3e0 = *(float *)(puVar9 + 1);
              }
              (**(code **)(*param_1 + 0x4b0))(param_1,&local_3e8,local_288,&local_3a8);
              if (fVar13 <= 0.0) {
LAB_142346636:
                fVar14 = local_3e8._4_4_;
                fVar18 = (float)local_3e8;
              }
              else {
                in_stack_fffffffffffffc10 =
                     (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
                pfVar11 = (float *)(**(code **)(*param_1 + 0x730))
                                             (param_1,local_e8,fVar20,&local_318,local_288,
                                              in_stack_fffffffffffffc10);
                if (local_3a4 * fVar20 * pfVar11[1] + local_3a8 * fVar20 * *pfVar11 +
                    local_3a0 * fVar20 * pfVar11[2] <= 0.0) goto LAB_142346636;
                fVar18 = (float)local_3e8 + fVar20 * *pfVar11 * fVar20;
                fVar14 = local_3e8._4_4_ + fVar20 * pfVar11[1] * fVar20;
                local_3e0 = local_3e0 + fVar20 * pfVar11[2] * fVar20;
                local_3e8 = CONCAT44(fVar14,fVar18);
              }
              if ((0.0001 < fVar20) && ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0)) {
                fVar20 = 1.0 / fVar20;
                local_308 = fVar18 * fVar20;
                fStack_304 = fVar14 * fVar20;
                fVar20 = fVar20 * local_3e0;
                local_300 = fVar20;
                cVar7 = (**(code **)(*param_1 + 0xa60))(param_1);
                if ((cVar7 == '\0') ||
                   (cVar7 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5),
                   cVar7 != '\0')) {
                  local_360 = local_300;
                  pfVar11 = (float *)&local_368;
                  local_368 = CONCAT44(fStack_304,local_308);
                }
                else {
                  pfVar11 = &local_2c8;
                  local_2c8 = *pfVar1;
                  uStack_2c4 = (int)param_1[0x32];
                  local_2c0 = fVar20;
                }
                fVar18 = pfVar11[2];
                *(undefined8 *)pfVar1 = *(undefined8 *)pfVar11;
                *(float *)((longlong)param_1 + 0x194) = fVar18;
              }
              if ((((fVar17 <= 0.0) || (local_248 <= 0.0)) || (0.0001 < ABS(local_3e0))) ||
                 (0.0 <= local_250 * fVar19 + local_24c * fVar15 + fVar17 * local_248)) {
                bVar5 = false;
              }
              else {
                bVar5 = true;
              }
              in_stack_fffffffffffffc08 = local_288;
              in_stack_fffffffffffffc10 =
                   (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
              FUN_1423755e0(param_1,&local_3e8,&local_2e8,1,in_stack_fffffffffffffc08,
                            in_stack_fffffffffffffc10);
              if (local_27c == 0.0) {
                fVar19 = local_250 + local_3a8;
                fVar21 = local_24c + local_3a4;
                local_3b0 = local_3a0 + local_248;
                fVar18 = fVar21 * fVar21 + fVar19 * fVar19;
                if (fVar18 == 1.0) {
                  local_3b8 = CONCAT44(fVar21,fVar19);
                  if (local_3b0 != 0.0) {
LAB_1423468c2:
                    local_3b0 = 0.0;
                  }
                }
                else {
                  if (1e-08 <= fVar18) {
                    auVar16 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
                    fVar15 = auVar16._0_4_;
                    fVar15 = fVar15 + fVar15 * (0.5 - fVar18 * 0.5 * fVar15 * fVar15);
                    fVar15 = fVar15 + fVar15 * (0.5 - fVar18 * 0.5 * fVar15 * fVar15);
                    fVar21 = fVar15 * fVar21;
                    fVar19 = fVar15 * fVar19;
                    local_3b8 = CONCAT44(fVar21,fVar19);
                    goto LAB_1423468c2;
                  }
                  local_3b8 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
                  fVar21 = DAT_1468b5d94;
                  fVar19 = DAT_1468b5d90;
                  local_3b0 = DAT_1468b5d98;
                }
                if (((ABS(fVar19) <= 0.0001) && (ABS(fVar21) <= 0.0001)) &&
                   (ABS(local_3b0) <= 0.0001)) {
                  fStack_394 = -local_3a8;
                  fVar21 = fStack_394 * fStack_394 + local_3a4 * local_3a4;
                  if (fVar21 == 1.0) {
                    local_398 = local_3a4;
LAB_1423469bb:
                    local_390 = 0.0;
                  }
                  else {
                    if (1e-08 <= fVar21) {
                      auVar16 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
                      local_398 = auVar16._0_4_;
                      local_398 = local_398 +
                                  local_398 * (0.5 - fVar21 * 0.5 * local_398 * local_398);
                      local_398 = local_398 +
                                  local_398 * (0.5 - fVar21 * 0.5 * local_398 * local_398);
                      fStack_394 = local_398 * fStack_394;
                      local_398 = local_398 * local_3a4;
                      goto LAB_1423469bb;
                    }
                    local_398 = DAT_1468b5d90;
                    fStack_394 = DAT_1468b5d94;
                    local_390 = DAT_1468b5d98;
                  }
                  local_3b8 = CONCAT44(fStack_394,local_398);
                  local_3b0 = local_390;
                }
                in_stack_fffffffffffffc08 = local_288;
                in_stack_fffffffffffffc10 =
                     (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
                FUN_1423755e0(param_1,&local_3b8,&local_2e8,1,in_stack_fffffffffffffc08,
                              in_stack_fffffffffffffc10);
                fVar21 = local_1e8;
              }
              if (bVar5) {
LAB_142346c6f:
                (**(code **)(*param_1 + 0x738))(param_1,local_288,0,param_3);
                return;
              }
              lVar4 = param_1[0x2f];
              local_2bc = *(undefined4 *)(lVar4 + 0x220);
              local_2b8 = *(undefined4 *)(lVar4 + 0x224);
              local_2b4 = *(undefined4 *)(lVar4 + 0x228);
              cVar7 = (**(code **)(*param_1 + 0x898))(param_1,&local_2bc,local_288);
              if ((cVar7 != '\0') || (local_27c == 0.0)) goto LAB_142346c6f;
              fVar19 = *(float *)((longlong)param_1 + 0x2ec);
              if (fVar19 <= 0.0) {
                fVar19 = 0.0;
              }
              if (((0.0 < fVar19) && (local_27c == 1.0)) &&
                 (*(float *)((longlong)param_1 + 0x244) <= fVar17)) {
                lVar4 = param_1[0x2f];
                fVar21 = *(float *)(lVar4 + 0x220) - fVar21;
                fVar19 = *(float *)(lVar4 + 0x224) - local_1d8;
                if ((ABS(*(float *)(lVar4 + 0x228) - local_1c8) <= fVar22 * 0.2) &&
                   (fVar19 * fVar19 + fVar21 * fVar21 <= fVar22 * 4.0)) {
                  iVar8 = rand();
                  fVar21 = (float)(**(code **)(*param_1 + 0x400))(param_1);
                  *pfVar1 = fVar21 * 0.25 * ((float)iVar8 * 3.051851e-05 - 0.5) + *pfVar1;
                  iVar8 = rand();
                  fVar21 = (float)(**(code **)(*param_1 + 0x400))(param_1);
                  in_stack_fffffffffffffc10 =
                       (float *)((ulonglong)in_stack_fffffffffffffc10 & 0xffffffffffffff00);
                  in_stack_fffffffffffffc08 = local_288;
                  *(float *)(param_1 + 0x32) =
                       fVar21 * 0.25 * ((float)iVar8 * 3.051851e-05 - 0.5) +
                       *(float *)(param_1 + 0x32);
                  fVar21 = *(float *)(param_1 + 0x47) * 0.25;
                  if (fVar21 <= 1.0) {
                    fVar21 = 1.0;
                  }
                  *(float *)((longlong)param_1 + 0x194) = fVar21;
                  local_3e0 = fVar22 * *(float *)((longlong)param_1 + 0x194);
                  local_3e8 = CONCAT44(fVar22 * *(float *)(param_1 + 0x32),fVar22 * *pfVar1);
                  FUN_1423755e0(param_1,&local_3e8,&local_2e8,1,in_stack_fffffffffffffc08,
                                in_stack_fffffffffffffc10);
                }
              }
            }
          }
        }
      }
      if (*pfVar1 * *pfVar1 + *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) <=
          0.0009999999) {
        *pfVar1 = 0.0;
        *(undefined4 *)(param_1 + 0x32) = 0;
      }
      if (param_2 < 1e-06) {
        return;
      }
    }
  }
  return;
}



// FUNCTION 142346d90 FUN_142346d90 body=1157 status=ok
// SIG undefined FUN_142346d90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142346d90(longlong *param_1,float param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  undefined8 in_stack_fffffffffffffec8;
  undefined4 uVar10;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  float local_110;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [12];
  float local_cc;
  undefined1 local_ac [20];
  float local_98;
  
  uVar10 = (undefined4)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
  if (param_2 < 1e-06) {
    return;
  }
  if ((char)param_1[0xe4] != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0xa60))();
  if ((cVar2 == '\0') &&
     (cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar2 == '\0')) {
    if (((*(uint *)((longlong)param_1 + 0x4b4) & 0x400) != 0) &&
       (((*(float *)(param_1 + 0x6a) == 0.0 && (*(float *)((longlong)param_1 + 0x354) == 0.0)) &&
        (*(float *)(param_1 + 0x6b) == 0.0)))) {
      *(undefined8 *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
      *(float *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
    lVar3 = (**(code **)(*param_1 + 0x440))(param_1);
    lVar1 = *param_1;
    fVar9 = *(float *)(lVar3 + 0x498);
    uVar4 = (**(code **)(lVar1 + 0x6c0))(param_1);
    (**(code **)(lVar1 + 0x688))(param_1,param_2,fVar9 * 0.5,1,CONCAT44(uVar10,uVar4));
  }
  FUN_14232e840(param_1,param_2);
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  lVar1 = param_1[0x2f];
  local_128 = param_2 * *(float *)((longlong)param_1 + 0x18c);
  local_124 = param_2 * *(float *)(param_1 + 0x32);
  local_f8 = *(float *)(lVar1 + 0x220);
  fStack_f4 = *(float *)(lVar1 + 0x224);
  fVar9 = *(float *)(lVar1 + 0x228);
  uStack_ec = *(undefined4 *)(lVar1 + 0x22c);
  local_120 = param_2 * *(float *)((longlong)param_1 + 0x194);
  fStack_f0 = fVar9;
  _guard_xfg_dispatch_icall_nop(local_d8,0,0x90);
  local_cc = 1.0;
  local_108 = *(undefined8 *)(lVar1 + 0x210);
  uStack_100 = *(undefined4 *)(lVar1 + 0x218);
  uStack_fc = *(undefined4 *)(lVar1 + 0x21c);
  FUN_1423755e0(param_1,&local_128,&local_108,1,local_d8,0);
  if (local_cc < 1.0) {
    fVar6 = *(float *)((longlong)param_1 + 0x194);
    local_108 = 0;
    uStack_100 = 0xbf800000;
    fVar5 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
            *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) + fVar6 * fVar6;
    if (fVar5 == 1.0) {
      local_118 = *(undefined8 *)((longlong)param_1 + 0x18c);
      local_110 = *(float *)((longlong)param_1 + 0x194);
      fVar7 = local_110;
    }
    else {
      fVar7 = DAT_1468b5d98;
      if (1e-08 <= fVar5) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar6 * (fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7));
      }
    }
    if (((ABS(local_98) < 0.2) && (fVar7 * -1.0 < 0.5)) &&
       ((-0.2 < fVar7 * -1.0 &&
        (cVar2 = (**(code **)(*param_1 + 0x6c8))(param_1,local_d8), cVar2 != '\0')))) {
      fVar6 = 1.0 - local_cc;
      local_e8 = *(undefined8 *)(param_1[0x2f] + 0x220);
      uStack_e0 = *(undefined8 *)(param_1[0x2f] + 0x228);
      local_110 = local_120 * fVar6;
      local_118 = CONCAT44(local_124 * fVar6,local_128 * fVar6);
      cVar2 = (**(code **)(*param_1 + 0x6d0))(param_1,&local_108,&local_118,local_d8,0);
      if (cVar2 != '\0') {
        fVar9 = (fVar9 - (float)uStack_e0) + *(float *)(param_1[0x2f] + 0x228);
        goto LAB_142347162;
      }
    }
    (**(code **)(*param_1 + 0x468))(param_1,local_d8,param_2,&local_128);
    (**(code **)(*param_1 + 0x4a8))(param_1,&local_128,1.0 - local_cc,local_ac,local_d8,1);
  }
LAB_142347162:
  if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
      (cVar2 = (**(code **)(*param_1 + 0xa60))(param_1), cVar2 == '\0')) &&
     (cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar2 == '\0')) {
    lVar1 = param_1[0x2f];
    param_2 = 1.0 / param_2;
    fVar6 = *(float *)(lVar1 + 0x228);
    *(ulonglong *)((longlong)param_1 + 0x18c) =
         CONCAT44((*(float *)(lVar1 + 0x224) - fStack_f4) * param_2,
                  (*(float *)(lVar1 + 0x220) - local_f8) * param_2);
    *(float *)((longlong)param_1 + 0x194) = (fVar6 - fVar9) * param_2;
  }
  return;
}



// FUNCTION 142347220 FUN_142347220 body=2252 status=ok
// SIG undefined FUN_142347220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142347220(longlong *param_1,float param_2,int param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  float fVar19;
  ulonglong in_stack_fffffffffffffe30;
  undefined8 local_1b8;
  float local_1b0;
  undefined8 local_1a8;
  float fStack_1a0;
  undefined4 uStack_19c;
  float local_198;
  float fStack_194;
  float local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined8 local_178;
  longlong lStack_170;
  longlong local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_150;
  float local_14c;
  undefined4 local_148;
  byte local_138 [12];
  undefined4 local_12c;
  
  if (param_2 < 1e-06) {
    return;
  }
  if ((((param_1[0x44] == 0) || (*(longlong *)(param_1[0x44] + 0x490) == 0)) &&
      ((*(byte *)(param_1 + 0x60) & 0x80) == 0)) &&
     ((cVar7 = (**(code **)(*param_1 + 0xa60))(), cVar7 == '\0' &&
      (cVar7 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar7 == '\0')))) {
    param_1[0x6a] = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(undefined4 *)(param_1 + 0x6b) = DAT_1468b5d98;
    *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    return;
  }
  if ((char)param_1[0xe4] != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  (**(code **)(*param_1 + 0x848))(param_1);
  *(undefined4 *)(param_1 + 0x6b) = 0;
  cVar7 = (**(code **)(*param_1 + 0xa68))(param_1);
  if ((cVar7 == '\0') &&
     (cVar7 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar7 == '\0')) {
    lVar2 = *param_1;
    (**(code **)(lVar2 + 0x6c0))(param_1);
    (**(code **)(lVar2 + 0x688))(param_1,param_2);
  }
  FUN_14232e840(param_1,param_2);
  cVar7 = (**(code **)(*param_1 + 0x558))(param_1);
  if (cVar7 != '\0') {
    (**(code **)(*param_1 + 0x610))(param_1,param_2,param_3);
    return;
  }
  local_1b0 = *(float *)((longlong)param_1 + 0x194);
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x18c);
  lVar2 = param_1[0x2f];
  if (lVar2 == 0) {
    fStack_1a0 = DAT_146531c80;
    pfVar8 = (float *)&local_1a8;
    local_1a8 = DAT_146531c78;
  }
  else {
    local_188 = *(float *)(lVar2 + 0x220);
    fStack_184 = (float)*(undefined4 *)(lVar2 + 0x224);
    pfVar8 = &local_188;
    local_180 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
  }
  local_198 = *pfVar8;
  fStack_194 = pfVar8[1];
  local_1b8._0_4_ = (float)uVar1;
  local_1b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
  local_190 = pfVar8[2];
  local_150 = (float)local_1b8 * param_2;
  bVar6 = false;
  local_14c = local_1b8._4_4_ * param_2;
  local_148 = 0;
  local_160 = local_150 + local_198;
  local_15c = local_14c + fStack_194;
  local_168 = 0;
  local_178 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  lStack_170 = CONCAT44(lStack_170._4_4_,DAT_1468b5d98);
  if (param_1[0xa1] != 0) {
    if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x8000000) == 0) {
      if (((ABS(*(float *)(param_1 + 0x9f) - local_198) <= 0.0001) &&
          (ABS(*(float *)((longlong)param_1 + 0x4fc) - fStack_194) <= 0.0001)) &&
         (ABS(*(float *)(param_1 + 0xa0) - local_190) <= 0.0001)) {
LAB_14234768e:
        bVar6 = true;
        goto LAB_1423475e3;
      }
    }
    else {
      lVar2 = *(longlong *)(param_1[0x44] + 0x4d0);
      uVar11 = *(uint *)(lVar2 + 0x230) & _DAT_146af0070;
      uVar12 = *(uint *)(lVar2 + 0x234) & uRam0000000146af0074;
      uVar13 = *(uint *)(lVar2 + 0x238) & uRam0000000146af0078;
      uVar14 = *(uint *)(lVar2 + 0x23c) & uRam0000000146af007c;
      fVar19 = fStack_194 - *(float *)((longlong)param_1 + 0x4fc);
      auVar17._4_4_ = uVar12;
      auVar17._0_4_ = uVar11;
      auVar17._8_4_ = uVar13;
      auVar17._12_4_ = uVar14;
      auVar18._4_4_ = uVar13;
      auVar18._0_4_ = uVar12;
      auVar18._8_4_ = uVar11;
      auVar18._12_4_ = uVar14;
      auVar18 = minps(auVar17,auVar18);
      auVar4._4_4_ = uVar11;
      auVar4._0_4_ = uVar13;
      auVar4._8_4_ = uVar12;
      auVar4._12_4_ = uVar14;
      auVar18 = minps(auVar18,auVar4);
      fVar16 = auVar18._0_4_ * *(float *)(lVar2 + 0x710);
      if (local_190 <= *(float *)(param_1 + 0xa0)) {
        fVar10 = *(float *)(param_1 + 0xb6);
      }
      else {
        fVar10 = *(float *)((longlong)param_1 + 0x5ac);
      }
      if (fVar19 * fVar19 +
          (local_198 - *(float *)(param_1 + 0x9f)) * (local_198 - *(float *)(param_1 + 0x9f)) <=
          0.0001) {
        if (fVar10 <= 0.0) {
          fVar10 = 0.0;
        }
        if (ABS(local_190 - *(float *)(param_1 + 0xa0)) < fVar10 * (fVar16 + fVar16))
        goto LAB_14234768e;
      }
    }
    bVar6 = false;
  }
LAB_1423475e3:
  local_1b8 = uVar1;
  local_158 = local_190;
  if ((0.0001 < ABS(local_150)) || (0.0001 < ABS(local_14c))) {
    if ((bVar6) && ((*(uint *)((longlong)param_1 + 0x4b4) & 0x8000000) != 0)) {
      local_158 = *(float *)(param_1 + 0xa0);
    }
  }
  else if (bVar6) {
    lStack_170 = param_1[0xa0];
    local_168 = param_1[0xa1];
    fVar16 = fStack_194;
    uVar11 = _DAT_146af0070;
    uVar12 = uRam0000000146af0074;
    uVar13 = uRam0000000146af0078;
    uVar14 = uRam0000000146af007c;
    fVar19 = local_198;
    local_178 = *(longlong *)pfVar8;
    goto LAB_1423477c0;
  }
  cVar7 = (**(code **)(*param_1 + 0x8f0))(param_1,&local_160,&local_178);
  if (cVar7 == '\0') {
    lVar2 = param_1[0x2f];
    if (lVar2 == 0) {
      fStack_1a0 = DAT_146531c80;
      pfVar8 = (float *)&local_1a8;
      local_1a8 = DAT_146531c78;
    }
    else {
      local_188 = *(float *)(lVar2 + 0x220);
      fStack_184 = (float)*(undefined4 *)(lVar2 + 0x224);
      pfVar8 = &local_188;
      local_180 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
    }
    local_1b8 = *(undefined8 *)pfVar8;
    local_1b0 = pfVar8[2];
    cVar7 = (**(code **)(*param_1 + 0x8f0))(param_1,&local_1b8,&local_178);
    if (cVar7 == '\0') {
      param_1[0xa1] = 0;
      (**(code **)(*param_1 + 0x5a0))
                (param_1,(*(uint *)((longlong)param_1 + 0x4b4) & 0x20 | 0x10) >> 4,0);
      return;
    }
  }
  uVar14 = uRam0000000146af007c;
  uVar13 = uRam0000000146af0078;
  uVar12 = uRam0000000146af0074;
  uVar11 = _DAT_146af0070;
  param_1[0x9f] = local_178;
  param_1[0xa0] = lStack_170;
  param_1[0xa1] = local_168;
  fVar16 = local_178._4_4_;
  fVar19 = (float)local_178;
LAB_1423477c0:
  if (local_168 == 0) {
    (**(code **)(*param_1 + 0x5d0))(param_1,param_3 + 1);
  }
  else {
    local_1b0 = (float)lStack_170;
    local_1b8 = CONCAT44(fVar16,fVar19);
    if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x8000000) != 0) {
      lVar2 = *(longlong *)(param_1[0x44] + 0x4d0);
      uVar11 = *(uint *)(lVar2 + 0x230) & uVar11;
      uVar12 = *(uint *)(lVar2 + 0x234) & uVar12;
      uVar13 = *(uint *)(lVar2 + 0x238) & uVar13;
      uVar14 = *(uint *)(lVar2 + 0x23c) & uVar14;
      auVar15._4_4_ = uVar12;
      auVar15._0_4_ = uVar11;
      auVar15._8_4_ = uVar13;
      auVar15._12_4_ = uVar14;
      auVar3._4_4_ = uVar13;
      auVar3._0_4_ = uVar12;
      auVar3._8_4_ = uVar11;
      auVar3._12_4_ = uVar14;
      auVar18 = minps(auVar15,auVar3);
      auVar5._4_4_ = uVar11;
      auVar5._0_4_ = uVar13;
      auVar5._8_4_ = uVar12;
      auVar5._12_4_ = uVar14;
      auVar18 = minps(auVar18,auVar5);
      fVar16 = *(float *)((longlong)param_1 + 0x5ac);
      fVar19 = auVar18._0_4_ * *(float *)(lVar2 + 0x710);
      if (fVar16 <= 0.0) {
        fVar16 = 0.0;
      }
      in_stack_fffffffffffffe30 =
           CONCAT44((int)(in_stack_fffffffffffffe30 >> 0x20),fVar16 * (fVar19 + fVar19));
      puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x758))(param_1);
      uVar1 = *puVar9;
      local_1b0 = *(float *)(puVar9 + 1);
      local_1b8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_1b8._0_4_ = (float)uVar1;
      fVar16 = local_1b8._4_4_;
      fVar19 = (float)local_1b8;
      local_1b8 = uVar1;
    }
    local_188 = fVar19 - local_198;
    fStack_184 = fVar16 - fStack_194;
    local_180 = local_1b0 - local_190;
    if (((0.0001 < ABS(local_188)) || (0.0001 < ABS(fStack_184))) || (0.0001 < ABS(local_180))) {
      _guard_xfg_dispatch_icall_nop(local_138,0,0x90);
      lVar2 = param_1[0x2f];
      local_12c = 0x3f800000;
      local_1a8 = *(undefined8 *)(lVar2 + 0x210);
      fStack_1a0 = *(float *)(lVar2 + 0x218);
      uStack_19c = *(undefined4 *)(lVar2 + 0x21c);
      FUN_1423755e0(param_1,&local_188,&local_1a8,(byte)(*(uint *)(param_1 + 0x60) >> 2) & 1,
                    local_138,in_stack_fffffffffffffe30 & 0xffffffffffffff00);
      if (((local_138[0] & 1) != 0) && ((local_138[0] & 2) == 0)) {
        (**(code **)(*param_1 + 0x468))(param_1,local_138);
      }
    }
    if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
        (cVar7 = (**(code **)(*param_1 + 0xa60))(param_1), cVar7 == '\0')) &&
       (cVar7 = FRootMotionSourceGroup::HasVelocity(param_1 + 0xc5), cVar7 == '\0')) {
      lVar2 = param_1[0x2f];
      if (lVar2 == 0) {
        local_1a8 = DAT_146531c78;
        fStack_1a0 = DAT_146531c80;
      }
      else {
        local_1a8 = *(undefined8 *)(lVar2 + 0x220);
        fStack_1a0 = *(float *)(lVar2 + 0x228) - *(float *)(lVar2 + 0x1e4);
      }
      param_2 = 1.0 / param_2;
      fStack_1a0 = (fStack_1a0 - local_190) * param_2;
      *(ulonglong *)((longlong)param_1 + 0x18c) =
           CONCAT44(((float)((ulonglong)local_1a8 >> 0x20) - fStack_194) * param_2,
                    ((float)local_1a8 - local_198) * param_2);
      *(float *)((longlong)param_1 + 0x194) = fStack_1a0;
      (**(code **)(*param_1 + 0x848))(param_1);
    }
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  }
  return;
}



// FUNCTION 142347af0 FUN_142347af0 body=1846 status=ok
// SIG undefined FUN_142347af0(void)

void FUN_142347af0(longlong *param_1,float param_2,int param_3)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar16;
  undefined8 local_178;
  float local_170;
  undefined8 local_168;
  float local_160;
  undefined8 local_158;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined1 local_128 [12];
  float local_11c;
  undefined1 local_fc [20];
  float local_e8;
  
  uVar16 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  if (param_2 < 1e-06) {
    return;
  }
  if ((char)param_1[0xe4] != '\0') {
    *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  fVar8 = (float)(**(code **)(*param_1 + 0x680))();
  fVar12 = *(float *)(param_1 + 0x6b);
  fVar11 = *(float *)(param_1 + 0x5d);
  bVar3 = false;
  cVar4 = (**(code **)(*param_1 + 0xa60))(param_1);
  if ((cVar4 == '\0') &&
     (cVar4 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar4 == '\0')) {
    fVar13 = *(float *)(param_1 + 0x52) * 0.33;
    if ((*(float *)((longlong)param_1 + 0x194) <= fVar13) || (fVar8 * fVar11 == 0.0))
    goto LAB_142347bfa;
    fVar9 = *(float *)((longlong)param_1 + 0x194) * fVar8 * fVar8;
    if (fVar9 <= fVar13) {
      fVar9 = fVar13;
    }
    *(float *)((longlong)param_1 + 0x194) = fVar9;
  }
  else {
LAB_142347bfa:
    if (fVar8 < 0.65) {
      fVar13 = *(float *)(param_1 + 0x6b);
      fVar9 = fVar13;
      if (0.1 <= fVar13) {
        fVar9 = 0.1;
      }
      bVar3 = 0.0 < fVar13;
      *(float *)(param_1 + 0x6b) = fVar9;
    }
  }
  lVar7 = param_1[0x2f];
  local_148 = *(float *)(lVar7 + 0x220);
  fStack_144 = *(float *)(lVar7 + 0x224);
  fVar13 = *(float *)(lVar7 + 0x228);
  uStack_13c = *(undefined4 *)(lVar7 + 0x22c);
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  fStack_140 = fVar13;
  cVar4 = (**(code **)(*param_1 + 0xa60))(param_1);
  if ((cVar4 == '\0') &&
     (cVar4 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar4 == '\0')) {
    lVar6 = (**(code **)(*param_1 + 0x440))(param_1);
    lVar7 = *param_1;
    fVar9 = *(float *)(lVar6 + 0x498);
    uVar10 = (**(code **)(lVar7 + 0x6c0))(param_1);
    (**(code **)(lVar7 + 0x688))(param_1,param_2,fVar9 * 0.5 * fVar8,1,CONCAT44(uVar16,uVar10));
    fVar9 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
    *(float *)((longlong)param_1 + 0x194) =
         fVar9 * param_2 * (1.0 - fVar8 * fVar11) + *(float *)((longlong)param_1 + 0x194);
  }
  FUN_14232e840(param_1,param_2);
  local_170 = param_2 * *(float *)((longlong)param_1 + 0x194);
  fVar8 = param_2 * *(float *)((longlong)param_1 + 0x18c);
  fVar11 = *(float *)(param_1 + 0x32);
  _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
  local_11c = 1.0;
  local_178 = CONCAT44(param_2 * fVar11,fVar8);
  local_158 = CONCAT44(param_2 * fVar11,fVar8);
  local_150 = local_170;
  fVar11 = (float)FUN_142357a20(param_1,&local_158,local_128);
  cVar4 = (**(code **)(*param_1 + 0x568))(param_1);
  if (cVar4 == '\0') goto LAB_1423481bc;
  if ((local_11c < 1.0) && (param_1[0x44] != 0)) {
    (**(code **)(*param_1 + 0x828))(param_1,local_128,param_2);
    if ((bVar3) && (0.0 <= *(float *)((longlong)param_1 + 0x194))) {
      fVar9 = 1.0 - local_11c;
      fVar15 = fVar12 * param_2 + *(float *)((longlong)param_1 + 0x194);
      *(float *)((longlong)param_1 + 0x194) = fVar15;
      fVar12 = fVar9 * *(float *)((longlong)param_1 + 0x18c) * param_2;
      fVar8 = fVar9 * *(float *)(param_1 + 0x32) * param_2;
      local_170 = fVar9 * fVar15 * param_2;
      local_178 = CONCAT44(fVar8,fVar12);
      local_168 = CONCAT44(fVar8,fVar12);
      local_160 = local_170;
      FUN_142357a20(param_1,&local_168,local_128);
      cVar4 = (**(code **)(*param_1 + 0x568))(param_1);
      if (cVar4 == '\0') goto LAB_1423481bc;
    }
    fVar12 = *(float *)((longlong)param_1 + 0x194);
    local_158 = 0;
    local_150 = -1.0;
    fVar8 = *(float *)((longlong)param_1 + 0x18c) * *(float *)((longlong)param_1 + 0x18c) +
            *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32) + fVar12 * fVar12;
    if (fVar8 == 1.0) {
      local_168 = *(undefined8 *)((longlong)param_1 + 0x18c);
      local_160 = *(float *)((longlong)param_1 + 0x194);
      fVar9 = local_160;
    }
    else {
      fVar9 = DAT_1468b5d98;
      if (1e-08 <= fVar8) {
        auVar14 = rsqrtss(ZEXT416((uint)fVar8),ZEXT416((uint)fVar8));
        fVar9 = auVar14._0_4_;
        fVar9 = fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9);
        fVar9 = (fVar9 + fVar9 * (0.5 - fVar8 * 0.5 * fVar9 * fVar9)) * fVar12;
      }
    }
    if ((((ABS(local_e8) < 0.2) && (fVar9 * -1.0 < 0.5)) && (-0.2 < fVar9 * -1.0)) &&
       (cVar4 = (**(code **)(*param_1 + 0x6c8))(param_1,local_128), cVar4 != '\0')) {
      uVar1 = *(undefined8 *)((longlong)param_1 + 0x18c);
      uVar16 = *(undefined4 *)((longlong)param_1 + 0x194);
      local_138 = *(undefined8 *)(param_1[0x2f] + 0x220);
      uStack_130 = *(undefined8 *)(param_1[0x2f] + 0x228);
      fVar12 = 1.0 - local_11c;
      *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
      local_160 = local_170 * fVar12;
      local_168 = CONCAT44(local_178._4_4_ * fVar12,(float)local_178 * fVar12);
      cVar4 = (**(code **)(*param_1 + 0x6d0))(param_1,&local_158,&local_168,local_128,0);
      if (cVar4 != '\0') {
        cVar5 = (**(code **)(*param_1 + 0x568))(param_1);
        if (cVar5 == '\0') goto LAB_1423481bc;
        fVar13 = (fVar13 - (float)uStack_130) + *(float *)(param_1[0x2f] + 0x228);
      }
      *(undefined8 *)((longlong)param_1 + 0x18c) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x194) = uVar16;
      if (cVar4 != '\0') goto LAB_142348098;
    }
    (**(code **)(*param_1 + 0x468))(param_1,local_128,param_2,&local_178);
    (**(code **)(*param_1 + 0x4a8))(param_1,&local_178,1.0 - local_11c,local_fc,local_128,1);
  }
LAB_142348098:
  cVar4 = (**(code **)(*param_1 + 0xa60))(param_1);
  if (((cVar4 == '\0') &&
      (cVar4 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar4 == '\0')) &&
     (((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0 &&
      ((fVar12 = param_2 - fVar11 * param_2, 0.0001 < fVar12 && (param_1[0x44] != 0)))))) {
    lVar7 = (**(code **)(*param_1 + 0x440))(param_1);
    uVar16 = *(undefined4 *)((longlong)param_1 + 0x194);
    fVar12 = 1.0 / fVar12;
    bVar2 = *(byte *)(lVar7 + 0x49c);
    lVar7 = param_1[0x2f];
    local_150 = (*(float *)(lVar7 + 0x228) - fVar13) * fVar12;
    *(ulonglong *)((longlong)param_1 + 0x18c) =
         CONCAT44((*(float *)(lVar7 + 0x224) - fStack_144) * fVar12,
                  (*(float *)(lVar7 + 0x220) - local_148) * fVar12);
    *(float *)((longlong)param_1 + 0x194) = local_150;
    if ((~bVar2 & 1) != 0) {
      *(undefined4 *)((longlong)param_1 + 0x194) = uVar16;
    }
  }
  lVar7 = (**(code **)(*param_1 + 0x440))(param_1);
  if (((*(byte *)(lVar7 + 0x49c) & 1) == 0) &&
     (cVar4 = (**(code **)(*param_1 + 0x568))(param_1), cVar4 != '\0')) {
    (**(code **)(*param_1 + 0x5a0))(param_1,3);
  }
  cVar4 = (**(code **)(*param_1 + 0x568))(param_1);
  if (cVar4 != '\0') {
    return;
  }
LAB_1423481bc:
  (**(code **)(*param_1 + 0x610))(param_1,fVar11 * param_2,param_3 + 1);
  return;
}



// FUNCTION 142348230 FUN_142348230 body=3117 status=ok
// SIG undefined FUN_142348230(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142348230(longlong *param_1,float param_2,int param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined1 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float *in_stack_fffffffffffffc08;
  undefined4 uVar21;
  ulonglong in_stack_fffffffffffffc10;
  float local_3c8;
  float fStack_3c4;
  float local_3c0;
  float local_3b8;
  float local_3b4;
  float local_3b0;
  longlong local_3a8;
  float local_3a0;
  longlong local_398;
  undefined4 local_390;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 local_380;
  undefined8 local_378;
  float local_370;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined8 local_358;
  undefined4 local_350;
  longlong local_348;
  float local_340;
  longlong local_338;
  undefined4 local_330;
  float local_328;
  float fStack_324;
  float fStack_320;
  undefined4 uStack_31c;
  float local_310;
  float local_304;
  undefined1 local_300 [24];
  float local_2e8;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  uint local_2c8;
  uint local_2c0;
  undefined8 local_2bc;
  undefined1 local_2b0 [12];
  undefined4 local_2a4;
  undefined4 local_24c;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined4 local_238;
  undefined8 local_230;
  undefined4 local_228;
  undefined1 local_218 [16];
  float local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1f8 [44];
  undefined1 local_1cc [12];
  undefined1 local_1c0 [88];
  undefined1 local_168 [76];
  float local_11c;
  float local_110;
  
  if (1e-06 <= param_2) {
    if ((param_1[0x44] == 0) ||
       ((((*(longlong *)(param_1[0x44] + 0x490) == 0 && ((*(byte *)(param_1 + 0x60) & 0x80) == 0))
         && (cVar6 = (**(code **)(*param_1 + 0xa60))(), cVar6 == '\0')) &&
        ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0' &&
         (*(char *)(param_1[0x44] + 0x128) != '\x01')))))) {
      param_1[0x6a] = _DAT_1468b5d90;
      *(undefined4 *)(param_1 + 0x6b) = DAT_1468b5d98;
      *(longlong *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
      *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    }
    else {
      iVar8 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4e8))();
      if ((iVar8 - 1U & 0xfffffffd) == 0) {
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
        bVar5 = false;
        bVar4 = false;
joined_r0x00014234837e:
        do {
          if ((((param_2 < 1e-06) || ((int)param_1[0x78] <= param_3)) || (param_1[0x44] == 0)) ||
             ((((*(longlong *)(param_1[0x44] + 0x490) == 0 &&
                ((*(byte *)(param_1 + 0x60) & 0x80) == 0)) &&
               (cVar6 = (**(code **)(*param_1 + 0xa60))(param_1), cVar6 == '\0')) &&
              ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0'
               && (*(char *)(param_1[0x44] + 0x128) != '\x01')))))) break;
          *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
          iVar8 = param_3 + 1;
          fVar19 = *(float *)((longlong)param_1 + 0x3bc);
          fVar20 = param_2;
          if ((fVar19 < param_2) &&
             ((iVar8 < (int)param_1[0x78] && (fVar20 = param_2 * 0.5, fVar19 <= param_2 * 0.5)))) {
            fVar20 = fVar19;
          }
          if (fVar20 <= 1e-06) {
            fVar20 = 1e-06;
          }
          param_2 = param_2 - fVar20;
          plVar10 = (longlong *)FUN_14233f0e0(param_1);
          if (plVar10 == (longlong *)0x0) {
            local_3a0 = (float)DAT_1468b5d98;
            plVar11 = &local_3a8;
            local_3a8 = _DAT_1468b5d90;
          }
          else {
            plVar11 = (longlong *)&local_388;
            local_388 = (int)plVar10[0x44];
            local_380 = (int)plVar10[0x45];
            uStack_384 = *(undefined4 *)((longlong)plVar10 + 0x224);
          }
          local_338 = *plVar11;
          puVar1 = (uint *)(param_1 + 0x82);
          local_330 = (undefined4)plVar11[1];
          lVar13 = param_1[0x2f];
          local_3c8 = *(float *)(lVar13 + 0x220);
          fStack_3c4 = *(float *)(lVar13 + 0x224);
          local_3c0 = *(float *)(lVar13 + 0x228);
          local_208 = (float)((uint)local_208 ^ (*puVar1 ^ (uint)local_208) & 7);
          local_200 = (undefined4)param_1[0x83];
          local_204 = *(undefined4 *)((longlong)param_1 + 0x414);
          FUN_140729f20(local_1f8);
          if ((char)param_1[0xe4] != '\0') {
            *(undefined8 *)((longlong)param_1 + 0x18c) = *(undefined8 *)((longlong)param_1 + 0x714);
            *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)((longlong)param_1 + 0x71c);
            *(undefined1 *)(param_1 + 0xe4) = 0;
          }
          (**(code **)(*param_1 + 0x848))(param_1);
          lVar13 = *(longlong *)((longlong)param_1 + 0x18c);
          uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
          *(undefined4 *)(param_1 + 0x6b) = 0;
          cVar6 = (**(code **)(*param_1 + 0xa68))(param_1);
          if (cVar6 == '\0') {
            cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
            uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
            if (cVar6 == '\0') {
              lVar3 = *param_1;
              uVar15 = (**(code **)(lVar3 + 0x6c0))(param_1);
              in_stack_fffffffffffffc08 = (float *)CONCAT44(uVar21,uVar15);
              (**(code **)(lVar3 + 0x688))
                        (param_1,fVar20,(int)param_1[0x4e],0,in_stack_fffffffffffffc08);
            }
          }
          FUN_14232e840(param_1,fVar20);
          cVar6 = (**(code **)(*param_1 + 0x558))(param_1);
          if (cVar6 != '\0') {
            lVar13 = *param_1;
            param_2 = fVar20 + param_2;
LAB_142348d7c:
            (**(code **)(lVar13 + 0x610))(param_1,param_2,param_3);
            return;
          }
          local_378 = *(undefined8 *)((longlong)param_1 + 0x18c);
          local_370 = *(float *)((longlong)param_1 + 0x194);
          local_3b8 = (float)local_378 * fVar20;
          local_3b4 = (float)((ulonglong)local_378 >> 0x20) * fVar20;
          local_3b0 = local_370 * fVar20;
          if (((0.0001 < ABS(local_3b8)) || (0.0001 < ABS(local_3b4))) || (0.0001 < ABS(local_3b0)))
          {
            cVar6 = '\0';
          }
          else {
            cVar6 = '\x01';
          }
          local_2c8 = local_2c8 & 0xfffffffe;
          local_2c0 = local_2c0 & 0xfffffff8;
          local_248 = 0xffffffff00000000;
          uStack_240 = 0xffffffff00000000;
          local_238 = 0;
          local_230 = 0;
          local_228 = 0;
          local_2bc = 0;
          local_24c = 0xffffffff;
          _guard_xfg_dispatch_icall_nop(local_2b0,0,0x90);
          local_2a4 = 0x3f800000;
          param_3 = iVar8;
          if (cVar6 == '\0') {
            (**(code **)(*param_1 + 0x838))(param_1,&local_378,fVar20);
            cVar7 = (**(code **)(*param_1 + 0x558))(param_1);
            if (cVar7 != '\0') {
              fVar19 = SQRT(local_3b8 * local_3b8 + local_3b4 * local_3b4 + local_3b0 * local_3b0);
              if (0.0001 < fVar19) {
                fVar18 = *(float *)(param_1[0x2f] + 0x224) - fStack_3c4;
                fVar17 = *(float *)(param_1[0x2f] + 0x220) - local_3c8;
                fVar19 = SQRT(fVar18 * fVar18 + fVar17 * fVar17) * (1.0 / fVar19);
                if (1.0 <= fVar19) {
                  fVar19 = 1.0;
                }
                param_2 = param_2 + (1.0 - fVar19) * fVar20;
              }
              lVar13 = *param_1;
              goto LAB_142348d7c;
            }
            cVar7 = (**(code **)(*param_1 + 0x568))(param_1);
            uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
            if (cVar7 != '\0') goto LAB_142348cb6;
          }
          else {
            param_2 = 0.0;
          }
          if ((local_2c8 & 1) == 0) {
            lVar13 = param_1[0x2f];
            in_stack_fffffffffffffc08 = (float *)0x0;
            local_368 = *(undefined4 *)(lVar13 + 0x220);
            local_364 = *(undefined4 *)(lVar13 + 0x224);
            local_360 = *(undefined4 *)(lVar13 + 0x228);
            (**(code **)(*param_1 + 0x870))(param_1,&local_368,puVar1,cVar6,0);
          }
          else {
            *puVar1 = *puVar1 & 0xfffffff8;
            *puVar1 = *puVar1 | local_2c0 & 7;
            *(undefined4 *)((longlong)param_1 + 0x414) = (undefined4)local_2bc;
            *(undefined4 *)(param_1 + 0x83) = local_2bc._4_4_;
            FUN_140729f20(param_1 + 0x84,local_2b0);
          }
          cVar7 = (**(code **)(*param_1 + 0x7e8))(param_1);
          if ((cVar7 == '\0') && (((byte)*puVar1 & 3) != 3)) {
            local_358 = 0;
            local_350 = 0xbf800000;
            if (bVar4) {
              local_390 = DAT_1468b5d98;
              plVar11 = &local_398;
              local_398 = _DAT_1468b5d90;
            }
            else {
              plVar11 = (longlong *)
                        (**(code **)(*param_1 + 0x788))
                                  (param_1,local_218,&local_3c8,&local_3b8,&local_358);
            }
            local_348 = *plVar11;
            fVar19 = *(float *)(plVar11 + 1);
            fVar18 = (float)((ulonglong)local_348 >> 0x20);
            fVar17 = (float)local_348;
            local_340 = fVar19;
            if ((((float)local_348 == 0.0) && (fVar18 == 0.0)) && (fVar19 == 0.0)) {
              if (((cVar6 == '\0') && (plVar10 != (longlong *)0x0)) &&
                 ((iVar9 = (**(code **)(*plVar10 + 0x4e8))(), (iVar9 - 1U & 0xfffffffd) == 0 ||
                  (cVar6 = FUN_142314560(), cVar6 == '\0')))) {
                uVar14 = 0;
                if (!bVar5) goto LAB_142348b9e;
              }
              else {
                uVar14 = 1;
LAB_142348b9e:
                cVar6 = (**(code **)(*param_1 + 0x790))
                                  (param_1,&local_208,param_1 + 0x84,&local_3b8,&local_3c8,param_2,
                                   fVar20,iVar8,uVar14);
                if (cVar6 != '\0') {
                  return;
                }
              }
              FUN_14234cf70(param_1,&local_3c8,plVar10,&local_338,&local_208,1);
              break;
            }
            in_stack_fffffffffffffc08 = &local_208;
            in_stack_fffffffffffffc10 = in_stack_fffffffffffffc10 & 0xffffffffffffff00;
            FUN_14234cf70(param_1,&local_3c8,plVar10,&local_338,in_stack_fffffffffffffc08,
                          in_stack_fffffffffffffc10);
            bVar4 = true;
            fVar16 = 1.0 / fVar20;
            param_2 = param_2 + fVar20;
            local_310 = fVar19 * fVar16;
            *(ulonglong *)((longlong)param_1 + 0x18c) = CONCAT44(fVar18 * fVar16,fVar17 * fVar16);
            *(float *)((longlong)param_1 + 0x194) = local_310;
            goto joined_r0x00014234837e;
          }
          if (((byte)*puVar1 & 3) == 3) {
            cVar7 = (**(code **)(*param_1 + 0x5d8))(param_1,&local_208,puVar1);
            if (cVar7 != '\0') {
              FUN_142913490(param_1[0x44],local_1c0,local_1cc,&local_3c8,fVar20);
              cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
              if (cVar6 == '\0') {
                return;
              }
              (**(code **)(*param_1 + 0x5d0))(param_1,iVar8,param_2,fVar20,&local_3b8,&local_3c8);
              return;
            }
            if ((local_2c8 & 1) == 0) {
              (**(code **)(*param_1 + 0x5e0))(param_1);
            }
            uVar12 = FWeakObjectPtr::Get((longlong)param_1 + 0x494);
            (**(code **)(*param_1 + 0x6d8))(param_1,uVar12,param_1[0x94]);
          }
          else if (((*(byte *)(param_1 + 0x84) & 2) != 0) && (param_2 <= 0.0)) {
            FUN_140729f20(local_168);
            local_304 = local_11c + 2.4;
            local_110 = local_304;
            (**(code **)(*param_1 + 0x490))(param_1,local_300,local_168);
            local_2d8 = *(undefined8 *)(param_1[0x2f] + 0x210);
            uStack_2d0 = *(undefined8 *)(param_1[0x2f] + 0x218);
            (**(code **)(*param_1 + 0x498))(param_1,local_300,local_168);
            *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
          }
          cVar7 = (**(code **)(*param_1 + 0x568))(param_1);
          uVar21 = (undefined4)((ulonglong)in_stack_fffffffffffffc08 >> 0x20);
          if (cVar7 != '\0') {
            lVar13 = *(longlong *)((longlong)param_1 + 0x18c);
            uVar2 = *(undefined4 *)((longlong)param_1 + 0x194);
LAB_142348cb6:
            local_390 = uVar2;
            local_398 = lVar13;
            local_3a8 = CONCAT44(fStack_3c4,local_3c8);
            local_3a0 = local_3c0;
            FUN_142356470(param_1,&local_3a8,&local_398,fVar20,CONCAT44(uVar21,param_2),iVar8);
            return;
          }
          if ((((byte)*puVar1 & 3) != 3) && ((*(byte *)(param_1 + 0x84) & 2) == 0)) {
            if ((((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
                ((cVar6 == '\0' && (plVar10 != (longlong *)0x0)))) &&
               ((iVar9 = (**(code **)(*plVar10 + 0x4e8))(), (iVar9 - 1U & 0xfffffffd) == 0 ||
                (cVar6 = FUN_142314560(), cVar6 == '\0')))) {
              uVar14 = 0;
              if (!bVar5) goto LAB_142348a0c;
            }
            else {
              uVar14 = 1;
LAB_142348a0c:
              in_stack_fffffffffffffc08 = &local_3c8;
              in_stack_fffffffffffffc10 = CONCAT44((int)(in_stack_fffffffffffffc10 >> 0x20),param_2)
              ;
              cVar6 = (**(code **)(*param_1 + 0x790))
                                (param_1,&local_208,param_1 + 0x84,&local_3b8,
                                 in_stack_fffffffffffffc08,in_stack_fffffffffffffc10,fVar20,iVar8,
                                 uVar14);
              if (cVar6 != '\0') {
                return;
              }
            }
            bVar5 = true;
          }
          cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
          if ((((cVar6 != '\0') && ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0)) &&
              (cVar6 = (**(code **)(*param_1 + 0xa68))(param_1), cVar6 == '\0')) &&
             ((cVar6 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5), cVar6 == '\0' &&
              (1e-06 <= fVar20)))) {
            lVar13 = param_1[0x2f];
            fVar20 = 1.0 / fVar20;
            local_2e8 = (*(float *)(lVar13 + 0x228) - local_3c0) * fVar20;
            *(ulonglong *)((longlong)param_1 + 0x18c) =
                 CONCAT44((*(float *)(lVar13 + 0x224) - fStack_3c4) * fVar20,
                          (*(float *)(lVar13 + 0x220) - local_3c8) * fVar20);
            *(float *)((longlong)param_1 + 0x194) = local_2e8;
          }
          lVar13 = param_1[0x2f];
          local_328 = *(float *)(lVar13 + 0x220);
          fStack_324 = *(float *)(lVar13 + 0x224);
          fStack_320 = *(float *)(lVar13 + 0x228);
          uStack_31c = *(undefined4 *)(lVar13 + 0x22c);
        } while (((local_328 != local_3c8) || (fStack_324 != fStack_3c4)) ||
                (fStack_320 != local_3c0));
        cVar6 = (**(code **)(*param_1 + 0x560))(param_1);
        if (cVar6 != '\0') {
          (**(code **)(*param_1 + 0x848))(param_1);
        }
      }
      else {
        (**(code **)(*param_1 + 0x5a0))(param_1,1);
      }
    }
  }
  return;
}



// FUNCTION 142348e60 FUN_142348e60 body=1144 status=ok
// SIG undefined FUN_142348e60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142348e60(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  char cVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_d8;
  float fStack_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  
  if ((((*(byte *)(param_1 + 0x60) & 3) != 0) &&
      (cVar7 = (**(code **)(*param_1 + 0x5c0))(), cVar7 != '\0')) &&
     ((*(longlong *)(param_1[0x44] + 0x490) != 0 || ((*(byte *)(param_1 + 0x60) & 0x80) != 0)))) {
    lVar1 = param_1[0x2f];
    local_98 = *(float *)(lVar1 + 0x210);
    fStack_94 = *(float *)(lVar1 + 0x214);
    fStack_90 = *(float *)(lVar1 + 0x218);
    fStack_8c = *(float *)(lVar1 + 0x21c);
    auVar13._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_94);
    auVar13._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_98);
    auVar13._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_90);
    auVar13._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_8c);
    iVar8 = movmskps((int)param_1[0x44],auVar13);
    if (iVar8 != 0) {
      *(float *)(lVar1 + 0x250) = local_98;
      *(float *)(lVar1 + 0x254) = fStack_94;
      *(float *)(lVar1 + 600) = fStack_90;
      *(float *)(lVar1 + 0x25c) = fStack_8c;
      puVar9 = (undefined8 *)FQuat::Rotator(&local_98,local_a8);
      *(undefined8 *)(lVar1 + 0x260) = *puVar9;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar9 + 1);
    }
    local_c8 = *(undefined8 *)(lVar1 + 0x260);
    local_c0 = *(float *)(lVar1 + 0x268);
    (**(code **)(*param_1 + 0x658))(param_1,local_b8);
    if ((*(uint *)(param_1 + 0x60) & 2) == 0) {
      plVar2 = *(longlong **)(param_1[0x44] + 0x490);
      if (plVar2 == (longlong *)0x0) {
        return;
      }
      if ((*(uint *)(param_1 + 0x60) & 1) == 0) {
        return;
      }
      puVar9 = (undefined8 *)(**(code **)(*plVar2 + 0x760))(plVar2,local_a8);
    }
    else {
      puVar9 = (undefined8 *)
               (**(code **)(*param_1 + 0x660))(param_1,local_a8,&local_c8,param_2,local_b8);
    }
    local_d8 = (float)*puVar9;
    fStack_d4 = (float)((ulonglong)*puVar9 >> 0x20);
    local_d0 = *(float *)(puVar9 + 1);
    iVar8 = (**(code **)(*param_1 + 0x7a0))(param_1);
    fVar3 = (float)DAT_146af0030;
    fVar4 = DAT_146af0030._4_4_;
    fVar5 = DAT_146af0030._8_4_;
    fVar6 = DAT_146af0030._12_4_;
    if ((char)iVar8 == '\0') {
      auVar11._4_4_ = fStack_d4;
      auVar11._0_4_ = local_d8;
      auVar11._8_4_ = local_d0;
      auVar11._12_4_ = 0;
      auVar13 = divps(auVar11,_DAT_146af0030);
      local_d8 = local_d8 - (float)(int)auVar13._0_4_ * fVar3;
      fStack_d4 = fStack_d4 - (float)(int)auVar13._4_4_ * fVar4;
      local_d0 = local_d0 - (float)(int)auVar13._8_4_ * fVar5;
      local_d8 = (float)(((uint)(local_d8 + fVar3) ^ (uint)local_d8) & -(uint)(0.0 <= local_d8) ^
                        (uint)(local_d8 + fVar3));
      fStack_d4 = (float)(((uint)(fStack_d4 + fVar4) ^ (uint)fStack_d4) & -(uint)(0.0 <= fStack_d4)
                         ^ (uint)(fStack_d4 + fVar4));
      local_d0 = (float)(((uint)(local_d0 + fVar5) ^ (uint)local_d0) & -(uint)(0.0 <= local_d0) ^
                        (uint)(local_d0 + fVar5));
      local_d8 = (float)(((uint)(local_d8 - fVar3) ^ (uint)local_d8) &
                         -(uint)(_DAT_146af0020 < local_d8) ^ (uint)local_d8);
      fStack_d4 = (float)(((uint)(fStack_d4 - fVar4) ^ (uint)fStack_d4) &
                          -(uint)(fRam0000000146af0024 < fStack_d4) ^ (uint)fStack_d4);
      local_d0 = (float)(((uint)(local_d0 - fVar5) ^ (uint)local_d0) &
                         -(uint)(fRam0000000146af0028 < local_d0) ^ (uint)local_d0);
    }
    else {
      local_d8 = 0.0;
      iVar8 = (int)(fStack_d4 * 0.0027777778);
      fVar15 = (float)iVar8 * 360.0;
      if (ABS(fStack_d4) < ABS((float)iVar8 * 360.0)) {
        fVar15 = fStack_d4;
      }
      fStack_d4 = fStack_d4 - fVar15;
      if (fStack_d4 < 0.0) {
        fStack_d4 = fStack_d4 + 360.0;
      }
      if (180.0 < fStack_d4) {
        fStack_d4 = fStack_d4 - 360.0;
      }
      local_d0 = 0.0;
    }
    auVar12._4_4_ = local_c8._4_4_ - fStack_d4;
    auVar12._0_4_ = (float)local_c8 - local_d8;
    auVar12._8_4_ = local_c0 - local_d0;
    auVar12._12_4_ = 0;
    auVar13 = divps(auVar12,_DAT_146af0030);
    fVar15 = ((float)local_c8 - local_d8) - (float)(int)auVar13._0_4_ * fVar3;
    fVar16 = (local_c8._4_4_ - fStack_d4) - (float)(int)auVar13._4_4_ * fVar4;
    fVar17 = (local_c0 - local_d0) - (float)(int)auVar13._8_4_ * fVar5;
    fVar18 = 0.0 - (float)(int)auVar13._12_4_ * fVar6;
    fVar15 = (float)(((uint)(fVar15 + fVar3) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                    (uint)(fVar15 + fVar3));
    fVar16 = (float)(((uint)(fVar16 + fVar4) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                    (uint)(fVar16 + fVar4));
    fVar17 = (float)(((uint)(fVar17 + fVar5) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                    (uint)(fVar17 + fVar5));
    fVar18 = (float)(((uint)(fVar18 + fVar6) ^ (uint)fVar18) & -(uint)(0.0 <= fVar18) ^
                    (uint)(fVar18 + fVar6));
    auVar14._4_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar16 - fVar4) ^ (uint)fVar16) &
                                  -(uint)(fRam0000000146af0024 < fVar16) ^ (uint)fVar16) &
                                uRam0000000146af0074));
    auVar14._0_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar15 - fVar3) ^ (uint)fVar15) &
                                  -(uint)(_DAT_146af0020 < fVar15) ^ (uint)fVar15) & _DAT_146af0070)
                );
    auVar14._8_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar17 - fVar5) ^ (uint)fVar17) &
                                  -(uint)(fRam0000000146af0028 < fVar17) ^ (uint)fVar17) &
                                uRam0000000146af0078));
    auVar14._12_4_ =
         -(uint)(0.001 < (float)((((uint)(fVar18 - fVar6) ^ (uint)fVar18) &
                                  -(uint)(fRam0000000146af002c < fVar18) ^ (uint)fVar18) &
                                uRam0000000146af007c));
    iVar8 = movmskps(iVar8,auVar14);
    if (iVar8 != 0) {
      if (0.001 < ABS((float)local_c8 - local_d8)) {
        local_d8 = (float)FMath::FixedTurn();
      }
      if (0.001 < ABS(local_c8._4_4_ - fStack_d4)) {
        fStack_d4 = (float)FMath::FixedTurn();
      }
      if (0.001 < ABS(local_c0 - local_d0)) {
        local_d0 = (float)FMath::FixedTurn();
      }
      uVar10 = FUN_14247f500();
      FUN_14247ea90(uVar10);
      lVar1 = *param_1;
      uVar10 = FRotator::Quaternion(&local_d8,&local_98);
      (**(code **)(lVar1 + 0x488))(param_1,&DAT_1468b5d90,uVar10,1,0,0);
    }
  }
  return;
}



// FUNCTION 1423492e0 FUN_1423492e0 body=432 status=ok
// SIG undefined FUN_1423492e0(void)

void FUN_1423492e0(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 local_48;
  float local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  float local_20;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar1 != '\0') {
    if ((param_2 == 0) || ((*(byte *)(param_2 + 0x49c) & 1) == 0)) {
      cVar1 = (**(code **)(*param_1 + 0x568))(param_1);
      if (cVar1 != '\0') {
        (**(code **)(*param_1 + 0x5a0))(param_1,3);
        local_48 = 0;
        local_40 = 0.0;
        local_38 = 0;
        local_30 = 0;
        if ((0.0 < *(float *)(param_1 + 0x6b)) &&
           (cVar1 = (**(code **)(*param_1 + 0x648))(param_1,&local_48), cVar1 != '\0')) {
          if (0.0 < local_48._4_4_ * *(float *)((longlong)param_1 + 0x354) +
                    (float)local_48 * *(float *)(param_1 + 0x6a) +
                    local_40 * *(float *)(param_1 + 0x6b)) {
            local_20 = local_40;
            local_28 = local_48;
            cVar1 = (**(code **)(*param_1 + 0x7e0))(param_1,&local_28,&local_38);
            if (cVar1 != '\0') {
              local_20 = (float)local_30;
              local_28 = local_38;
              (**(code **)(*param_1 + 0x650))(param_1,&local_28);
              *(undefined4 *)((longlong)param_1 + 0x194) =
                   *(undefined4 *)((longlong)param_1 + 0x314);
            }
          }
        }
      }
    }
    else if ((*(uint *)(param_1 + 0x38) >> 3 & 1) == 0) {
      plVar2 = (longlong *)FUN_14233f470();
      if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142349340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
        return;
      }
    }
    else {
      cVar1 = (**(code **)(*param_1 + 0x568))(param_1);
      if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014234936c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x5a0))(param_1,4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1423494a0 FUN_1423494a0 body=1835 status=ok
// SIG undefined FUN_1423494a0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1423494a0(longlong *param_1,float param_2,float param_3,undefined4 param_4)

{
  float fVar1;
  void *_Src;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  byte bVar10;
  byte bVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined1 auStack_638 [32];
  longlong local_618;
  undefined4 *local_610;
  undefined4 *local_608;
  undefined1 local_5f8;
  undefined1 local_5f7;
  undefined1 local_5f6;
  undefined1 local_5f5;
  undefined4 local_5f4;
  undefined4 local_5f0 [2];
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5e0;
  undefined1 local_5d8 [80];
  longlong local_588;
  byte local_540;
  byte local_53f;
  byte local_53e;
  byte local_53d;
  float local_528;
  undefined4 local_524;
  undefined4 local_520;
  float local_51c;
  float local_518;
  float local_514;
  undefined4 local_510;
  undefined4 local_4cc;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4b0;
  longlong local_4a8;
  longlong lStack_4a0;
  longlong local_498;
  longlong lStack_490;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined1 local_460 [744];
  int local_178;
  int local_174;
  void *local_c0;
  int local_b8;
  int local_b4;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_638;
  lVar4 = FUN_14046f570();
  if ((*(byte *)((longlong)param_1 + 0xba) & 4) != 0) {
    bVar11 = *(byte *)(param_1 + 0x5e);
    *(byte *)(param_1 + 0x5e) = bVar11 & 0xfe;
    (**(code **)(*param_1 + 0x560))(param_1);
    *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) ^ (*(byte *)(param_1 + 0x5e) ^ bVar11) & 1
    ;
  }
  if ((param_1[0x5a] != 0) &&
     (((lVar4 == 0 || ((*(uint *)(lVar4 + 0x830) & 0x4000) != 0)) &&
      (lVar5 = FUN_14233c7a0(param_1), lVar5 != 0)))) {
    bVar11 = *(byte *)((longlong)param_1 + 0x2f2);
    *(byte *)((longlong)param_1 + 0x2f2) = bVar11 & 0xef;
    if ((bVar11 & 8) != 0) {
      puVar6 = (undefined8 *)FWeakObjectPtr::Get(param_1 + 0xd4);
      if (puVar6 == (undefined8 *)0x0) {
        FUN_1423333a0(param_1,1);
      }
      else {
        puVar14 = (undefined8 *)param_1[0x32];
        if (((puVar14 != (undefined8 *)0x0) && (puVar14 == puVar6)) &&
           (param_1[0x33] == param_1[0xd5])) {
          puVar12 = (undefined8 *)puVar14[0x34];
          puVar14 = puVar12 + *(int *)(puVar14 + 0x35);
          for (; puVar12 != puVar14; puVar12 = puVar12 + 1) {
            if ((longlong *)*puVar12 == param_1) goto LAB_1423496af;
          }
        }
        *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) & 0xef;
        *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) | bVar11 & 0x10;
        FUN_1423333a0(param_1,CONCAT71((int7)((ulonglong)puVar14 >> 8),1));
        param_1[0xd7] = *(longlong *)((longlong)param_1 + 0x1ec);
        *(undefined4 *)(param_1 + 0xd8) = *(undefined4 *)((longlong)param_1 + 500);
        *(longlong *)((longlong)param_1 + 0x6c4) = param_1[0x3f];
        *(int *)((longlong)param_1 + 0x6cc) = (int)param_1[0x40];
        param_1[0xda] = *(longlong *)((longlong)param_1 + 0x204);
        *(undefined4 *)(param_1 + 0xdb) = *(undefined4 *)((longlong)param_1 + 0x20c);
        local_5f8 = *(undefined1 *)((longlong)param_1 + 0x5ec);
        local_5f7 = *(undefined1 *)((longlong)param_1 + 0x5ed);
        local_5f6 = *(undefined1 *)((longlong)param_1 + 0x5ee);
        local_5f5 = 0;
        FUN_142382f60(param_1,puVar6,&local_5f8,param_1[0xd5]);
LAB_1423496af:
        *(byte *)((longlong)param_1 + 0x2f2) = *(byte *)((longlong)param_1 + 0x2f2) | 0x10;
      }
    }
    if ((*(byte *)(param_1 + 0x5e) & 8) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = FUN_14233c690(param_1);
    }
    local_5e8 = (undefined4)param_1[0x44];
    local_5e4 = *(undefined4 *)((longlong)param_1 + 0x224);
    local_5e0 = (undefined4)param_1[0x45];
    local_608 = &local_5f4;
    local_610 = local_5f0;
    local_5f0[0] = 0;
    local_5f4 = 0;
    local_618 = lVar7;
    FUN_1422cbaa0(lVar5,param_1[0x5a],lVar4,&local_5e8);
    FUN_14221fee0(local_5d8);
    FUN_14223d5f0(local_5d8,param_1);
    uVar8 = FUN_14046f570(param_1);
    FActiveSound::SetWorld(local_5d8,uVar8);
    FUN_14223f150(local_5d8,param_1[0x5a]);
    FUN_14223f1b0(local_5d8,param_1[0x5d]);
    local_588 = param_1[0xbc];
    fVar1 = *(float *)((longlong)param_1 + 0x30c);
    fVar15 = (float)FGenericPlatformMath::SRand();
    local_518 = (fVar15 * (*(float *)(param_1 + 0x61) - fVar1) + fVar1) * *(float *)(param_1 + 0x62)
    ;
    if ((*(byte *)((longlong)param_1 + 0x2f1) & 1) == 0) {
      local_4c8 = *(undefined4 *)(param_1[0x5a] + 0x5c);
    }
    else {
      local_4c8 = *(undefined4 *)((longlong)param_1 + 0x31c);
    }
    fVar1 = *(float *)((longlong)param_1 + 0x304);
    fVar15 = (float)FGenericPlatformMath::SRand();
    bVar11 = *(byte *)(param_1 + 0x5e);
    local_53e = (local_53e ^ bVar11) & 0x7f ^ bVar11;
    local_514 = (fVar15 * (*(float *)(param_1 + 0x60) - fVar1) + fVar1) *
                *(float *)((longlong)param_1 + 0x324);
    local_510 = (undefined4)param_1[0x65];
    local_528 = param_2;
    if (param_2 <= 0.0) {
      local_528 = 0.0;
    }
    if ((bVar11 & 0x20) == 0) {
      local_4cc = (**(code **)(*(longlong *)param_1[0x5a] + 0x2b8))();
      bVar11 = *(byte *)(param_1 + 0x5e);
    }
    else {
      local_4cc = (undefined4)param_1[100];
    }
    local_540 = local_540 ^ (bVar11 * '\x02' ^ local_540) & 8;
    if (((*(byte *)((longlong)param_1 + 0x2f1) & 2) == 0) ||
       (cVar2 = TScriptDelegate<FWeakObjectPtr>::IsBound(param_1 + 0xd2), cVar2 != '\0')) {
      cVar2 = '\x01';
    }
    else {
      cVar2 = '\0';
    }
    bVar11 = *(byte *)((longlong)param_1 + 0x2f1);
    local_53e = (byte)(*(byte *)(param_1 + 0x5e) >> 1 & 0x20 | bVar11 & 0x9f | bVar11 & 0x40) >> 5 |
                (*(byte *)((longlong)param_1 + 0x2f2) & 3) << 3 | local_53e & 0xe0;
    bVar10 = ~(bVar11 >> 2) & 1;
    local_53f = (bVar10 << 2 | bVar11 & 0xe0 | bVar11 & 8) << 2 | cVar2 << 2 | local_53f & 0x4b;
    if (bVar10 != 0) {
      local_4a8 = param_1[0x42];
      lStack_4a0 = param_1[0x43];
      local_498 = param_1[0x44];
      lStack_490 = param_1[0x45];
      local_488 = (undefined4)param_1[0x46];
      uStack_484 = *(undefined4 *)((longlong)param_1 + 0x234);
      uStack_480 = (undefined4)param_1[0x47];
      uStack_47c = *(undefined4 *)((longlong)param_1 + 0x23c);
    }
    bVar11 = -(lVar7 != 0) & 4;
    local_540 = *(byte *)(param_1 + 0x5e) >> 2 & 2 | bVar11 |
                ((*(byte *)((longlong)param_1 + 0x2f2) << 4 ^ local_540) & 0x40 ^ local_540) & 0xf9;
    if (bVar11 != 0) {
      FSoundAttenuationSettings::operator=(local_460,lVar7);
      uVar8 = FAudioDevice::GetGlobalFocusSettings(lVar5);
      local_4c4 = FSoundAttenuationSettings::GetFocusPriorityScale(lVar7,uVar8,local_5f4);
    }
    local_178 = 0;
    if (-1 < *(int *)((longlong)param_1 + 0x314)) {
      local_178 = *(int *)((longlong)param_1 + 0x314);
    }
    local_174 = 0;
    if (-1 < (int)param_1[99]) {
      local_174 = (int)param_1[99];
    }
    plVar9 = (longlong *)param_1[0xc5];
    plVar13 = plVar9 + (longlong)(int)param_1[0xc6] * 2;
    for (; plVar9 != plVar13; plVar9 = plVar9 + 2) {
      if (((int)plVar9[1] != 0) && (*plVar9 != 0)) goto LAB_142349a32;
    }
    if ((int)param_1[0xc4] < 1) {
      bVar11 = 0;
    }
    else {
LAB_142349a32:
      bVar11 = 1;
    }
    if ((int)param_1[0xc9] < 1) {
      plVar9 = (longlong *)param_1[0xca];
      plVar13 = plVar9 + (longlong)(int)param_1[0xcb] * 2;
      for (; plVar9 != plVar13; plVar9 = plVar9 + 2) {
        if (((int)plVar9[1] != 0) && (*plVar9 != 0)) goto LAB_142349a7c;
      }
      bVar10 = 0;
    }
    else {
LAB_142349a7c:
      bVar10 = 2;
    }
    if ((int)param_1[0xce] < 1) {
      plVar9 = (longlong *)param_1[0xcf];
      plVar13 = plVar9 + (longlong)(int)param_1[0xd0] * 2;
      for (; plVar9 != plVar13; plVar9 = plVar9 + 2) {
        if (((int)plVar9[1] != 0) && (*plVar9 != 0)) goto LAB_142349ac9;
      }
      bVar3 = 0;
    }
    else {
LAB_142349ac9:
      bVar3 = 4;
    }
    local_53d = local_53d & 0xf8 | bVar11 | bVar10 | bVar3;
    local_4b0 = local_5f0[0];
    if (&local_c0 != (void **)(param_1 + 0x5b)) {
      local_b8 = (int)param_1[0x5c];
      lVar4 = (longlong)local_b8;
      _Src = (void *)param_1[0x5b];
      if ((local_b8 != 0) || (local_b4 != 0)) {
        TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(&local_c0,local_b8);
        _guard_xfg_dispatch_icall_nop(local_c0,_Src,lVar4 << 5);
      }
    }
    local_524 = param_4;
    if (0.0 < param_3) {
      local_524 = 0;
      local_51c = param_3;
    }
    *(int *)((longlong)param_1 + 0x32c) = *(int *)((longlong)param_1 + 0x32c) + 1;
    local_520 = param_4;
    FUN_1422c0900(lVar5,local_5d8);
    *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 4;
    FActiveSound::~FActiveSound(local_5d8);
  }
  return;
}



// FUNCTION 142349bd0 PlaybackCompleted body=102 status=ok
// SIG undefined PlaybackCompleted(void)

void UAudioComponent::PlaybackCompleted(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined1 local_res10;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uStack_60 = CONCAT31(uStack_60._1_3_,param_2);
  local_28 = 0;
  local_18 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_48);
  if (puVar1 != (undefined8 *)0x0) {
    local_68 = (undefined4)param_1;
    uStack_64 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_68;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_64;
    *(undefined4 *)(puVar1 + 2) = uStack_60;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_5c;
  }
  local_58[0] = &LAB_1423323c0;
  FUN_1422f8d80(local_58,local_res10);
  return;
}



// FUNCTION 142349c40 FUN_142349c40 body=59 status=ok
// SIG undefined FUN_142349c40(void)

void FUN_142349c40(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1417931d0();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if ((plVar1 != (longlong *)0x0) && (*(char *)(param_1 + 0xca) != '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x000142349c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x630))(plVar1,param_1);
    return;
  }
  return;
}



// FUNCTION 142349c80 FUN_142349c80 body=99 status=ok
// SIG undefined FUN_142349c80(void)

void FUN_142349c80(longlong param_1)

{
  int iVar1;
  
  UObject::PostLoad();
  if (*(char *)(param_1 + 0xca) == '\x01') {
    iVar1 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
    if ((iVar1 < 0x1bd) && ((*(uint *)(param_1 + 8) >> 4 & 1) == 0)) {
      FUN_1423393a0(param_1);
      return;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xf0) = 0;
    if (*(int *)(param_1 + 0xf4) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0xe8,0);
      return;
    }
  }
  return;
}



// FUNCTION 142349cf0 FUN_142349cf0 body=54 status=ok
// SIG undefined FUN_142349cf0(void)

void FUN_142349cf0(longlong param_1)

{
  byte *pbVar1;
  int iVar2;
  
  FUN_1423945d0();
  iVar2 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if ((iVar2 < 0x145) && (*(longlong *)(param_1 + 0x6f8) != 0)) {
    pbVar1 = (byte *)(*(longlong *)(param_1 + 0x6f8) + 0x99);
    *pbVar1 = *pbVar1 & 0xbf;
  }
  return;
}



// FUNCTION 142349d30 FUN_142349d30 body=60 status=ok
// SIG undefined FUN_142349d30(void)

void FUN_142349d30(longlong param_1)

{
  float fVar1;
  
  FUN_1423945d0();
  if (DAT_1468b6169 == '\0') {
    fVar1 = *(float *)(param_1 + 0x710);
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    if (fVar1 <= *(float *)(param_1 + 0x714)) {
      fVar1 = *(float *)(param_1 + 0x714);
    }
    *(float *)(param_1 + 0x710) = fVar1;
  }
  return;
}



// FUNCTION 142349d70 FUN_142349d70 body=340 status=ok
// SIG undefined FUN_142349d70(void)

void FUN_142349d70(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  FUN_142374350();
  iVar3 = UObjectBaseUtility::GetLinkerUE4Version(param_1);
  if (iVar3 < 0x111) {
    *(undefined4 *)(param_1 + 0x2c4) = *(undefined4 *)(param_1 + 0x2b0);
  }
  if ((iVar3 < 0x127) && ((*(byte *)(param_1 + 0x344) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c4);
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2c4);
  }
  if (iVar3 < 0x153) {
    fVar5 = *(float *)(param_1 + 0x244);
    fVar6 = 0.0;
    if ((0.0 <= fVar5) && (fVar6 = fVar5, 1.0 <= fVar5)) {
      fVar6 = 1.0;
    }
    *(float *)(param_1 + 0x244) = fVar6;
    fVar5 = -1.0;
    if ((-1.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
      fVar5 = 1.0;
    }
    fVar5 = _guard_xfg_dispatch_icall_nop(fVar5);
    *(float *)(param_1 + 0x240) = fVar5 * 57.295776;
  }
  if (iVar3 < 0x176) {
    FUN_14246fd50(param_1 + 0x280,*(float *)(param_1 + 0x278) * *(float *)(param_1 + 0x348));
    FUN_14246fd40(param_1 + 0x2a4,param_1 + 0x274);
  }
  lVar1 = *(longlong *)(param_1 + 0x208);
  if (lVar1 != 0) {
    lVar4 = APostProcessVolume::GetPrivateStaticClass();
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
      *(longlong *)(param_1 + 0x220) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x220) = 0;
  return;
}



// FUNCTION 142349ed0 FUN_142349ed0 body=168 status=ok
// SIG undefined FUN_142349ed0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142349ed0(longlong *param_1,undefined4 param_2)

{
  undefined1 auStack_208 [32];
  undefined1 local_1e8 [448];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_208;
  if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x4000000) != 0) {
    FUN_14237e6d0(local_1e8,param_1[0x2f],*(uint *)(param_1 + 0x60) >> 5 & 1,1);
    (**(code **)(*param_1 + 0x5f0))(param_1,param_2);
    (**(code **)(*param_1 + 0x608))(param_1);
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfbffffff;
    FUN_14237f990(local_1e8);
  }
  return;
}



// FUNCTION 142349f80 FUN_142349f80 body=534 status=ok
// SIG undefined FUN_142349f80(void)

void FUN_142349f80(longlong param_1,longlong *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  ulonglong uVar8;
  longlong local_28;
  undefined8 local_20;
  ulonglong uVar7;
  
  if (param_2 == *(longlong **)(param_1 + 0x20)) {
    *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 2;
    return;
  }
  uVar2 = FUN_1428dfc70();
  uVar2 = UObjectBaseUtility::GetTypedOuter(param_1,uVar2);
  *(undefined8 *)(param_1 + 0x118) = uVar2;
  lVar3 = FUN_1428dfc70();
  if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
     (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
      lVar3 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar2 = FUN_1428dfc70();
    param_2 = (longlong *)UObjectBaseUtility::GetTypedOuter(param_2,uVar2);
  }
  plVar5 = *(longlong **)(param_1 + 0x118);
  if (plVar5 != param_2) {
    if (param_2 != (longlong *)0x0) {
      FUN_14223af50(param_2,param_1);
      plVar5 = *(longlong **)(param_1 + 0x118);
    }
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x630))(plVar5,param_1);
    }
    uVar7 = 0;
    local_28 = 0;
    local_20 = 0;
    FUN_1417a5b30(param_1,&local_28,0,0,0);
    uVar8 = uVar7;
    if (0 < (int)local_20) {
      do {
        lVar3 = *(longlong *)(uVar8 + local_28);
        lVar4 = FUN_1428dfc70();
        if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) {
          lVar4 = FUN_1428e7a40();
          if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            *(undefined8 *)(lVar3 + 0x118) = *(undefined8 *)(param_1 + 0x118);
            if (param_2 != (longlong *)0x0) {
              FUN_14223af50(param_2,lVar3);
            }
            plVar5 = *(longlong **)(param_1 + 0x118);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x630))(plVar5,lVar3);
            }
          }
          FUN_1417a5b30(lVar3,&local_28,0,0,0);
        }
        uVar6 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar6;
        uVar8 = uVar8 + 8;
      } while ((int)uVar6 < (int)local_20);
    }
    if (local_28 != 0) {
      FMemory::Free();
    }
  }
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) | 2;
  return;
}



// FUNCTION 14234a1a0 FUN_14234a1a0 body=1040 status=ok
// SIG undefined FUN_14234a1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234a1a0(longlong param_1,longlong *param_2,int param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  float *pfVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_58;
  float local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar1 = param_2[0x99];
  if (*(byte *)(lVar1 + 0x248) == 6) {
    bVar3 = *(char *)(lVar1 + 0x249) + DAT_146aefe41;
  }
  else {
    bVar3 = (*(char *)(lVar1 + 0x4b2) != '\x01') << ((byte)DAT_146af0138 & 0x1f) |
            *(byte *)(lVar1 + 0x248);
  }
  *(byte *)(param_1 + 0x150) = bVar3;
  *(byte *)(param_1 + 0x38) = bVar3;
  lVar1 = param_2[0x2d];
  if (lVar1 == 0) {
    local_58 = _DAT_1468b5d90;
    local_50 = (float)DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar1 + 0x220);
    local_50 = *(float *)(lVar1 + 0x228);
  }
  *(undefined8 *)(param_1 + 0x154) = local_58;
  *(float *)(param_1 + 0x15c) = local_50;
  lVar1 = param_2[0x2d];
  if (lVar1 == 0) {
    uVar8 = (undefined4)DAT_1468b5da0;
    uVar9 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_50 = (float)DAT_1468b5da8;
  }
  else {
    local_48 = *(float *)(lVar1 + 0x210);
    fStack_44 = *(float *)(lVar1 + 0x214);
    fStack_40 = *(float *)(lVar1 + 0x218);
    fStack_3c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_44);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_48);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_40);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_3c);
    iVar5 = movmskps(local_50,auVar2);
    if (iVar5 != 0) {
      *(float *)(lVar1 + 0x250) = local_48;
      *(float *)(lVar1 + 0x254) = fStack_44;
      *(float *)(lVar1 + 600) = fStack_40;
      *(float *)(lVar1 + 0x25c) = fStack_3c;
      puVar6 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
      *(undefined8 *)(lVar1 + 0x260) = *puVar6;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar6 + 1);
    }
    uVar8 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar9 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_50 = (float)*(undefined4 *)(lVar1 + 0x268);
  }
  local_58 = CONCAT44(uVar9,uVar8);
  *(undefined8 *)(param_1 + 0x160) = local_58;
  *(float *)(param_1 + 0x168) = local_50;
  puVar6 = (undefined8 *)(**(code **)(*param_2 + 0x308))(param_2,&local_58);
  *(undefined8 *)(param_1 + 0x16c) = *puVar6;
  *(undefined4 *)(param_1 + 0x174) = *(undefined4 *)(puVar6 + 1);
  lVar1 = param_2[0x9b];
  FWeakObjectPtr::operator=(param_1 + 400,lVar1);
  *(longlong *)(param_1 + 0x198) = param_2[0x9c];
  cVar4 = FUN_142314560(lVar1);
  if (cVar4 != '\0') {
    *(longlong *)(param_1 + 0x178) = param_2[0x9d];
    *(int *)(param_1 + 0x180) = (int)param_2[0x9e];
  }
  pfVar7 = (float *)(**(code **)(*param_2 + 0x738))(param_2,&local_58);
  local_50 = pfVar7[2];
  fVar10 = (float)(int)(local_50 * 0.0027777778) * 360.0;
  if (ABS(local_50) < ABS(fVar10)) {
    fVar10 = local_50;
  }
  local_50 = local_50 - fVar10;
  if (local_50 < 0.0) {
    local_50 = local_50 + 360.0;
  }
  fVar10 = pfVar7[1];
  fVar11 = (float)(int)(fVar10 * 0.0027777778) * 360.0;
  if (ABS(fVar10) < ABS(fVar11)) {
    fVar11 = fVar10;
  }
  fVar10 = fVar10 - fVar11;
  if (fVar10 < 0.0) {
    fVar10 = fVar10 + 360.0;
  }
  fVar11 = *pfVar7;
  fVar12 = (float)(int)(fVar11 * 0.0027777778) * 360.0;
  if (ABS(fVar11) < ABS(fVar12)) {
    fVar12 = fVar11;
  }
  fVar11 = fVar11 - fVar12;
  if (fVar11 < 0.0) {
    fVar11 = fVar11 + 360.0;
  }
  *(ulonglong *)(param_1 + 0x184) = CONCAT44(fVar10,fVar11);
  *(float *)(param_1 + 0x18c) = local_50;
  if (param_3 == 0) {
    puVar6 = (undefined8 *)FUN_142312520(param_2);
    if ((puVar6 != (undefined8 *)0x0) && (*(int *)(puVar6 + 0x31) < 1)) {
      FWeakObjectPtr::operator=(param_1 + 0x1c8,*puVar6);
      if (*(char *)((longlong)puVar6 + 0x184) == '\0') {
        uVar8 = *(undefined4 *)(puVar6 + 0x25);
      }
      else {
        uVar8 = *(undefined4 *)(puVar6 + 0x30);
      }
      *(undefined4 *)(param_1 + 0x1d0) = uVar8;
      *(char *)(param_1 + 0x1e0) = (char)param_2[0xda];
      *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)((longlong)param_2 + 0x6d4);
      lVar1 = param_2[0xdd];
      *(longlong *)(param_1 + 0x1f0) = param_2[0xdc];
      *(longlong *)(param_1 + 0x1f8) = lVar1;
      lVar1 = param_2[0xdf];
      *(longlong *)(param_1 + 0x200) = param_2[0xde];
      *(longlong *)(param_1 + 0x208) = lVar1;
      uVar8 = *(undefined4 *)((longlong)param_2 + 0x704);
      lVar1 = param_2[0xe1];
      uVar9 = *(undefined4 *)((longlong)param_2 + 0x70c);
      *(int *)(param_1 + 0x210) = (int)param_2[0xe0];
      *(undefined4 *)(param_1 + 0x214) = uVar8;
      *(int *)(param_1 + 0x218) = (int)lVar1;
      *(undefined4 *)(param_1 + 0x21c) = uVar9;
    }
    cVar4 = FRootMotionSourceGroup::HasActiveRootMotionSources(param_2 + 0xba);
    if (cVar4 != '\0') {
      FUN_14243f720(param_1 + 0x220,param_2 + 0xba);
    }
    lVar1 = param_2[0xb1];
    *(int *)(param_1 + 0x1a0) = (int)lVar1;
    iVar5 = DAT_146af07c0;
    *(int *)(param_1 + 0x1a4) = DAT_146af07c0;
    if ((*(int *)(param_1 + 0x148) != (int)lVar1) || (*(int *)(param_1 + 0x14c) != iVar5)) {
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 8;
    }
  }
  else if ((param_3 == 1) && ((*(byte *)((longlong)param_2 + 0x56c) & 0x40) != 0)) {
    FUN_14243f720(param_2 + 0xba,param_2[0x99] + 0x628);
  }
  return;
}



// FUNCTION 14234a5b0 FUN_14234a5b0 body=119 status=ok
// SIG undefined FUN_14234a5b0(void)

void FUN_14234a5b0(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    lVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8) !=
        lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      (**(code **)(*plVar1 + 0x378))(plVar1,param_1,param_2);
    }
  }
  return;
}



// FUNCTION 14234a630 FUN_14234a630 body=516 status=ok
// SIG undefined FUN_14234a630(void)

void FUN_14234a630(longlong param_1,longlong param_2)

{
  uint *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  
  cVar6 = FUN_14044af00(param_1 + 0x1c8,0);
  if (cVar6 != '\0') {
    if ((((*(byte *)(param_2 + 0x56c) & 0x20) != 0) &&
        (puVar7 = (undefined8 *)FUN_142312520(param_2), puVar7 != (undefined8 *)0x0)) &&
       (cVar6 = FUN_14058c1e0(param_1 + 0x1c8,*puVar7), cVar6 != '\0')) {
      *(undefined1 *)(param_1 + 0x1e0) = 0;
      *(undefined4 *)(param_1 + 0x1e4) = 0;
      if (*(char *)((longlong)puVar7 + 0x184) == '\0') {
        uVar8 = *(undefined4 *)(puVar7 + 0x25);
      }
      else {
        uVar8 = *(undefined4 *)(puVar7 + 0x30);
      }
      *(undefined4 *)(param_1 + 0x1d0) = uVar8;
      FUN_1422806e0(puVar7,*(undefined4 *)(param_1 + 0x20),param_1 + 0x1d0);
      *(undefined4 *)(puVar7 + 0x25) = *(undefined4 *)(param_1 + 0x1d0);
      *(undefined4 *)(puVar7 + 6) = 0xfffffffe;
      *(undefined4 *)(puVar7 + 7) = 0xfffffffe;
    }
    lVar2 = *(longlong *)(param_2 + 0x4c8);
    *(undefined1 *)(lVar2 + 0x7c0) = *(undefined1 *)(param_1 + 0x1e0);
    *(undefined4 *)(lVar2 + 0x7c4) = *(undefined4 *)(param_1 + 0x1e4);
    uVar5 = *(undefined8 *)(param_1 + 0x1f8);
    *(undefined8 *)(lVar2 + 2000) = *(undefined8 *)(param_1 + 0x1f0);
    *(undefined8 *)(lVar2 + 0x7d8) = uVar5;
    uVar5 = *(undefined8 *)(param_1 + 0x208);
    *(undefined8 *)(lVar2 + 0x7e0) = *(undefined8 *)(param_1 + 0x200);
    *(undefined8 *)(lVar2 + 0x7e8) = uVar5;
    uVar8 = *(undefined4 *)(param_1 + 0x214);
    uVar3 = *(undefined4 *)(param_1 + 0x218);
    uVar4 = *(undefined4 *)(param_1 + 0x21c);
    *(undefined4 *)(lVar2 + 0x7f0) = *(undefined4 *)(param_1 + 0x210);
    *(undefined4 *)(lVar2 + 0x7f4) = uVar8;
    *(undefined4 *)(lVar2 + 0x7f8) = uVar3;
    *(undefined4 *)(lVar2 + 0x7fc) = uVar4;
  }
  cVar6 = FRootMotionSourceGroup::HasActiveRootMotionSources(param_1 + 0x220);
  if (cVar6 != '\0') {
    if ((*(byte *)(param_2 + 0x56c) & 0x40) != 0) {
      FUN_142465d80(param_1 + 0x220,param_2 + 0x5d0,0);
      FRootMotionSourceGroup::CleanUpInvalidRootMotion
                (param_1 + 0x220,*(undefined4 *)(param_1 + 0x20),param_2,
                 *(undefined8 *)(param_2 + 0x4c8));
      FUN_14245a080(param_1 + 0x220,*(undefined4 *)(param_1 + 0x20),param_2,
                    *(undefined8 *)(param_2 + 0x4c8),0);
    }
    FUN_14243f720(*(longlong *)(param_2 + 0x4c8) + 0x628,param_1 + 0x220);
  }
  puVar1 = (uint *)(*(longlong *)(param_2 + 0x4c8) + 0x300);
  *puVar1 = *puVar1 ^ (*(int *)(param_1 + 0x18) << 4 ^
                      *(uint *)(*(longlong *)(param_2 + 0x4c8) + 0x300)) & 0x40;
  *(uint *)(param_2 + 0x56c) =
       *(uint *)(param_2 + 0x56c) ^
       (*(int *)(param_1 + 0x18) << 5 ^ *(uint *)(param_2 + 0x56c)) & 0x400;
  *(undefined4 *)(param_2 + 0x570) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_2 + 0x574) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_2 + 0x580) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_2 + 0x584) = *(undefined4 *)(param_1 + 0x34);
  return;
}



// FUNCTION 14234a840 FUN_14234a840 body=660 status=ok
// SIG undefined FUN_14234a840(void)

void FUN_14234a840(longlong *param_1,float param_2,longlong param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = *(float *)(param_3 + 0x60);
  plVar2 = (longlong *)FUN_14293b120();
  lVar4 = plVar2[0x1f];
  if (lVar4 == 0) {
    (**(code **)(*plVar2 + 0x368))(plVar2);
    lVar4 = plVar2[0x1f];
    if (lVar4 == 0) {
      return;
    }
  }
  if ((*(char *)(lVar4 + 0x4c0) != '\0') && (fVar6 != 0.0)) {
    lVar3 = FUN_14046f570(param_1);
    fVar6 = *(float *)(lVar3 + 0x790);
    fVar7 = (fVar6 - *(float *)(param_3 + 0x60)) * *(float *)(param_1[0x44] + 0xd0);
    fVar9 = (param_2 - *(float *)(param_3 + 0x58)) - fVar7;
    fVar8 = *(float *)(param_3 + 0x74) + fVar9;
    fVar10 = fVar9 + *(float *)(param_3 + 0x70);
    *(float *)(param_3 + 0x70) = fVar10;
    fVar5 = fVar8;
    if (0.0 < *(float *)(lVar4 + 0x4d0)) {
      fVar7 = *(float *)(lVar4 + 0x4d0) * fVar7;
      if (fVar8 <= 0.0) {
        fVar5 = fVar7 + fVar8;
        if (0.0 <= fVar5) {
          fVar5 = 0.0;
        }
      }
      else {
        fVar5 = fVar8 - fVar7;
        if (fVar5 <= 0.0) {
          fVar5 = 0.0;
        }
      }
    }
    fVar7 = *(float *)(lVar4 + 0x4c8);
    if (*(float *)(lVar4 + 0x4c8) <= fVar5) {
      fVar7 = fVar5;
    }
    fVar5 = fVar9;
    if (fVar8 != 0.0) {
      fVar5 = (fVar7 / fVar8) * fVar9;
    }
    if ((*(char *)(param_3 + 0x78) == '\0') || (*(float *)(param_3 + 0x74) <= 0.0)) {
      cVar1 = '\0';
    }
    else {
      cVar1 = '\x01';
    }
    *(char *)(param_3 + 0x78) = cVar1;
    if (cVar1 == '\0') {
      if (fVar7 < *(float *)(lVar4 + 0x4c4) || fVar7 == *(float *)(lVar4 + 0x4c4)) {
        *(float *)(param_3 + 0x74) = fVar7;
      }
      else {
        if (*(char *)(lVar4 + 0x4c1) == '\0') {
          fVar5 = 0.0;
        }
        else {
          *(undefined1 *)(param_3 + 0x78) = 1;
          fVar5 = fVar7 - fVar5;
        }
        *(float *)(param_3 + 0x74) = fVar5;
        (**(code **)(*param_1 + 0x998))
                  (param_1,fVar7,fVar10,fVar6 - *(float *)(param_3 + 0x84),fVar9);
        cVar1 = *(char *)(param_3 + 0x78);
      }
    }
    if (cVar1 != '\0') {
      if (*(char *)(lVar4 + 0x4d4) != '\0') {
        *(uint *)(param_3 + 0x6c) = *(uint *)(param_3 + 0x6c) | 1;
      }
      fVar7 = (fVar6 - *(float *)(param_3 + 8)) * *(float *)(param_1[0x44] + 0xd0);
      fVar5 = (float)FUN_14222dcf0();
      fVar5 = fVar5 * *(float *)(param_3 + 0x68);
      fVar6 = *(float *)(param_3 + 0x80);
      param_2 = param_2 - *(float *)(param_3 + 0x58);
      if (param_2 <= fVar5) {
        fVar5 = param_2;
      }
      if (fVar7 <= 0.0) {
        fVar6 = fVar6 + fVar5;
        *(float *)(param_3 + 0x80) = fVar6;
      }
      fVar8 = fVar6 + fVar5;
      if (fVar7 <= fVar6 + fVar5) {
        fVar8 = fVar7;
      }
      if (fVar8 < 0.0) {
        fVar8 = 0.0;
      }
      if (fVar7 > 0.0) {
        *(undefined4 *)(param_3 + 0x80) = 0;
      }
      fVar6 = *(float *)(lVar4 + 0x4cc);
      fVar5 = 0.0;
      if ((0.0 <= fVar6) && (fVar5 = fVar6, 1.0 <= fVar6)) {
        fVar5 = 1.0;
      }
      fVar6 = *(float *)(param_3 + 0x74);
      fVar7 = fVar5 * fVar8;
      if (fVar6 <= fVar5 * fVar8) {
        fVar7 = fVar6;
      }
      fVar7 = fVar8 - fVar7;
      if (fVar7 < 1e-06) {
        fVar7 = 1e-06;
      }
      *(float *)(param_3 + 0x7c) = fVar7;
      *(float *)(param_3 + 0x74) = fVar6 - (fVar8 - fVar7);
    }
  }
  return;
}



// FUNCTION 14234aae0 FUN_14234aae0 body=159 status=ok
// SIG undefined FUN_14234aae0(void)

void FUN_14234aae0(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  local_38 = 0;
  local_28 = 0;
  puVar1 = (undefined8 *)FUN_140438ef0(0x18,local_58);
  if (puVar1 != (undefined8 *)0x0) {
    local_78 = SUB84(param_1,0);
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    uStack_70 = (undefined4)param_2;
    uStack_6c = (undefined4)((ulonglong)param_2 >> 0x20);
    *puVar1 = &PTR_FUN_143f77c18;
    *(undefined4 *)(puVar1 + 1) = local_78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = uStack_74;
    *(undefined4 *)(puVar1 + 2) = uStack_70;
    *(undefined4 *)((longlong)puVar1 + 0x14) = uStack_6c;
  }
  local_68[0] = &LAB_142332870;
  uVar2 = FUN_14247f500();
  FUN_14247d5a0(uVar2,param_1,local_68);
                    /* WARNING: Could not recover jumptable at 0x00014234ab78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x610))(param_1,param_3,param_4);
  return;
}



// FUNCTION 14234ab80 FUN_14234ab80 body=1041 status=ok
// SIG undefined FUN_14234ab80(void)

undefined8 *
FUN_14234ab80(byte *param_1,undefined8 *param_2,float param_3,longlong param_4,float *param_5,
             float param_6,float param_7)

{
  byte *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  byte *pbVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  byte local_128 [12];
  undefined4 local_11c;
  
  fVar8 = param_5[2];
  uVar1 = *(undefined8 *)param_5;
  fVar12 = -(param_6 + param_7);
  if (fVar12 <= -1e-08) {
    local_148 = *param_5;
    local_144 = param_5[1];
    local_140 = param_5[2] + param_6;
    local_130 = param_5[2] - param_7;
    _Dst = param_1 + 0x510;
    if ((((((*_Dst & 1) == 0) || (local_148 != *(float *)(param_1 + 0x554))) ||
         (local_144 != *(float *)(param_1 + 0x558))) ||
        ((local_140 != *(float *)(param_1 + 0x55c) || (local_148 != *(float *)(param_1 + 0x560)))))
       || ((local_144 != *(float *)(param_1 + 0x564) || (local_130 != *(float *)(param_1 + 0x568))))
       ) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    fVar10 = *(float *)(param_1 + 0x5a4);
    *(float *)(param_1 + 0x5a4) = fVar10 - param_3;
    local_138 = local_148;
    local_134 = local_144;
    if (fVar10 - param_3 <= 0.0) {
      if ((!bVar6) || (pbVar7 = param_1, (*(uint *)(param_1 + 0x4b4) & 0x8000) != 0)) {
        _guard_xfg_dispatch_icall_nop(local_128,0,0x90);
        local_11c = 0x3f800000;
        (**(code **)(*(longlong *)param_1 + 0x760))
                  (param_1,&local_148,&local_138,param_4,param_5,local_128);
        pbVar7 = _Dst;
        if (((local_128[0] & 2) == 0) && ((local_128[0] & 1) != 0)) {
          FUN_140729f20(_Dst,local_128);
        }
        else {
          uVar4 = *(undefined4 *)(param_1 + 0x55c);
          uVar5 = *(undefined4 *)(param_1 + 0x568);
          uVar2 = *(undefined8 *)(param_1 + 0x560);
          uVar3 = *(undefined8 *)(param_1 + 0x554);
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
          *(undefined8 *)(param_1 + 0x554) = uVar3;
          *(undefined8 *)(param_1 + 0x560) = uVar2;
          *(undefined4 *)(param_1 + 0x55c) = uVar4;
          param_1[0x51c] = 0;
          param_1[0x51d] = 0;
          param_1[0x51e] = 0x80;
          param_1[0x51f] = 0x3f;
          *(undefined4 *)(param_1 + 0x568) = uVar5;
        }
      }
      fVar10 = *(float *)(param_1 + 0x5a0);
      fVar11 = 0.0;
      if (1e-08 < fVar10) {
        fVar11 = -*(float *)(param_1 + 0x5a4);
        if (1e-08 < ABS(fVar10)) {
          fVar9 = (float)(int)(fVar11 / fVar10) * fVar10;
          if (ABS(fVar11) < ABS(fVar9)) {
            fVar9 = fVar11;
          }
          fVar11 = fVar11 - fVar9;
        }
        else {
          AK::MemoryMgr::StartProfileThreadUsage((long)pbVar7);
          fVar10 = *(float *)(param_1 + 0x5a0);
          fVar11 = 0.0;
        }
      }
      *(float *)(param_1 + 0x5a4) = fVar10 - fVar11;
    }
    if (((*_Dst & 1) != 0) &&
       ((!bVar6 ||
        (fVar8 = *(float *)(param_4 + 8), 0.01 < ABS(fVar8 - *(float *)(param_1 + 0x538)))))) {
      fVar12 = (((*(float *)(param_1 + 0x534) - local_144) * *(float *)(param_1 + 0x540) +
                 (*(float *)(param_1 + 0x530) - local_148) * *(float *)(param_1 + 0x53c) +
                (*(float *)(param_1 + 0x538) - local_140) * *(float *)(param_1 + 0x544)) /
               (*(float *)(param_1 + 0x544) * fVar12)) * fVar12 + local_140;
      fVar8 = local_130;
      if ((local_130 <= fVar12) && (fVar8 = fVar12, local_140 <= fVar12)) {
        fVar8 = local_140;
      }
      fVar8 = (float)FMath::FInterpTo(*(undefined4 *)(param_4 + 8),fVar8);
      if ((fVar8 < local_130) || (local_130 = local_140, local_140 <= fVar8)) {
        fVar8 = local_130;
      }
    }
    *param_2 = uVar1;
    *(float *)(param_2 + 1) = fVar8;
  }
  else {
    *param_2 = uVar1;
    *(float *)(param_2 + 1) = fVar8;
  }
  return param_2;
}



// FUNCTION 14234afa0 FUN_14234afa0 body=147 status=ok
// SIG undefined FUN_14234afa0(void)

undefined8 FUN_14234afa0(longlong param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  if (*param_2 == *(int *)(param_1 + 0x380) + -1) {
    uVar2 = param_2[1] >> 0x1f & 0x3f;
    uVar1 = param_2[1] + uVar2;
    uVar2 = (uVar1 & 0x3f) - uVar2;
    iVar3 = (int)uVar1 >> 6;
    uVar1 = *(int *)(param_1 + 0x380) + 1U & 0x80000001;
    if ((int)uVar1 < 0) {
      uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
    }
    if (((-1 < iVar3) && (iVar3 < *(int *)((longlong)(int)uVar1 * 0x60 + 8 + param_1 + 0x2c0))) &&
       (uVar2 < 0x40)) {
      if ((longlong)(int)uVar2 * 0x120 +
          *(longlong *)
           (*(longlong *)((longlong)(int)uVar1 * 0x60 + param_1 + 0x2c0) + (longlong)iVar3 * 8) != 0
         ) {
        FUN_142328930(param_3);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14234b040 FUN_14234b040 body=77 status=ok
// SIG undefined FUN_14234b040(void)

void FUN_14234b040(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if ((bVar1 & 4) != 0) {
    TBaseMulticastDelegate<void,FUniqueNetId_const_&>::Broadcast(&DAT_146531c50,param_1);
    (**(code **)(*param_1 + 0x310))(param_1);
    bVar1 = *(byte *)(param_1 + 0x17);
  }
  if ((bVar1 & 1) != 0) {
    FUN_142338140(param_1);
    return;
  }
  return;
}



// FUNCTION 14234b090 FUN_14234b090 body=81 status=ok
// SIG undefined FUN_14234b090(void)

void FUN_14234b090(longlong *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x17);
  if ((bVar1 & 2) != 0) {
    (**(code **)(*param_1 + 0x300))();
    bVar1 = *(byte *)(param_1 + 0x17);
  }
  if (((bVar1 & 1) != 0) && (*(longlong *)(param_1[0x24] + 0x1b8) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x00014234b0d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x2e8))(param_1);
    return;
  }
  return;
}



// FUNCTION 14234b0f0 FUN_14234b0f0 body=92 status=ok
// SIG undefined FUN_14234b0f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234b0f0(longlong *param_1,byte param_2)

{
  if (((*(byte *)(param_1 + 0x17) & 1) != 0) && (*(byte *)(param_1 + 0x19) >> 7 != param_2)) {
    (**(code **)(*param_1 + 0x328))();
    _DAT_146af0210 = 0;
    *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0x7f | param_2 << 7;
  }
  return;
}



// FUNCTION 14234b150 FUN_14234b150 body=57 status=ok
// SIG undefined FUN_14234b150(void)

void FUN_14234b150(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong **)(param_1 + 0x118) != (longlong *)0x0) {
    lVar1 = (**(code **)(**(longlong **)(param_1 + 0x118) + 0x148))();
    if (lVar1 != 0) {
      FUN_14234b270(param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14234b190 RegisterComponentTickFunctions body=74 status=ok
// SIG undefined RegisterComponentTickFunctions(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UActorComponent::RegisterComponentTickFunctions(longlong param_1,char param_2)

{
  char cVar1;
  
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x3d) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x30);
    }
  }
  else {
    cVar1 = FUN_1423521e0(param_1,param_1 + 0x30);
    if (cVar1 != '\0') {
      _DAT_146af0210 = param_1;
      *(longlong *)(param_1 + 0x80) = param_1;
      return;
    }
  }
  _DAT_146af0210 = param_1;
  return;
}



// FUNCTION 14234b1e0 FUN_14234b1e0 body=132 status=ok
// SIG undefined FUN_14234b1e0(void)

void FUN_14234b1e0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  FUN_142374760();
  uVar1 = FUN_1424a1490();
  FUN_1424b0840(uVar1,param_1,param_2);
  if (param_2 == '\0') {
    if (*(char *)(param_1 + 0x5c5) != '\0') {
      FTickFunction::UnRegisterTickFunction(param_1 + 0x5b8);
    }
  }
  else {
    cVar2 = FUN_1423521e0(param_1,param_1 + 0x5b8);
    if (cVar2 != '\0') {
      *(longlong *)(param_1 + 0x608) = param_1;
      FTickFunction::AddPrerequisite(param_1 + 0x5b8,param_1,param_1 + 0x30);
      return;
    }
  }
  return;
}



// FUNCTION 14234b270 FUN_14234b270 body=596 status=ok
// SIG undefined FUN_14234b270(void)

void FUN_14234b270(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *local_18;
  undefined8 local_10;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  lVar8 = 0;
  if (iVar3 < (int)DAT_1469e91c4) {
    uVar10 = iVar3 >> 0x1f & 0xffff;
    uVar7 = iVar3 + uVar10;
    lVar8 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar7 >> 0x10) * 8) +
            (longlong)(int)((uVar7 & 0xffff) - uVar10) * 0x18;
  }
  if ((*(uint *)(lVar8 + 8) >> 0x1d & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  lVar8 = param_1[0x23];
  if ((lVar8 != 0) && (*(int *)(*(longlong *)(lVar8 + 0x10) + 0xb4) < 0)) {
    return;
  }
  if ((*(byte *)(param_1 + 0x19) & 8) == 0) {
    (**(code **)(*param_1 + 0x3b8))(param_1);
  }
  param_1[0x24] = param_2;
  FUN_14233a6f0(param_1);
  cVar6 = UWorld::IsGameWorld(param_2);
  if (cVar6 != '\0') {
    bVar2 = *(byte *)(param_1 + 0x19);
    if (lVar8 != 0) {
      if ((((bVar2 & 0x10) == 0) && ((bVar2 & 1) != 0)) && ((*(byte *)(lVar8 + 0x93) & 8) != 0)) {
        (**(code **)(*param_1 + 0x330))(param_1);
      }
      if ((((*(byte *)(lVar8 + 0x94) & 0x18) == 0x10) || ((*(byte *)(lVar8 + 0x94) & 0x18) == 8)) &&
         (FUN_14234b0f0(param_1,1), (*(byte *)(param_1 + 0x19) & 0x20) == 0)) {
        (**(code **)(*param_1 + 0x338))(param_1);
      }
      goto LAB_14234b36a;
    }
    if (((bVar2 & 0x10) == 0) && ((bVar2 & 1) != 0)) {
      (**(code **)(*param_1 + 0x330))(param_1);
    }
  }
  FUN_14234b0f0(param_1,1);
LAB_14234b36a:
  if ((byte)(*(char *)((longlong)param_1 + 0xca) - 1U) < 2) {
    local_18 = (longlong *)0x0;
    local_10 = 0;
    FUN_1417a5b30(param_1,&local_18,1,0,0x20000000);
    plVar1 = local_18 + (int)local_10;
    for (plVar11 = local_18; plVar11 != plVar1; plVar11 = plVar11 + 1) {
      lVar4 = *plVar11;
      if (lVar4 != 0) {
        lVar9 = FUN_1428e7a40();
        if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) +
             (longlong)*(int *)(lVar9 + 0x90) * 8) != lVar9 + 0x88)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        if ((((bVar5) && ((*(byte *)(lVar4 + 0xb9) & 4) != 0)) &&
            ((*(byte *)(lVar4 + 0xb8) & 1) == 0)) && (*(longlong *)(lVar4 + 0x118) == lVar8)) {
          FUN_14234b270(lVar4,param_2);
        }
      }
    }
    if (local_18 != (longlong *)0x0) {
      FMemory::Free(local_18);
    }
  }
  return;
}



// FUNCTION 14234b4d0 FUN_14234b4d0 body=225 status=ok
// SIG undefined FUN_14234b4d0(void)

void FUN_14234b4d0(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x870) == '\0') {
    iVar1 = *(int *)(param_1 + 0x880);
    *(int *)(param_1 + 0x880) = iVar1 + 1;
    if (*(int *)(param_1 + 0x884) < iVar1 + 1) {
      TArray<FPlayerReservation,FDefaultAllocator>::ResizeGrow((longlong *)(param_1 + 0x878),iVar1);
    }
    TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
              ((longlong)iVar1 * 0x50 + *(longlong *)(param_1 + 0x878),param_2);
  }
  else {
    if (*(int *)(param_2 + 8) != 0) {
      plVar3 = (longlong *)param_2[6];
      if ((longlong *)param_2[6] == (longlong *)0x0) {
        plVar3 = param_2 + 2;
      }
      if (plVar3 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar3 + 8))();
        (*(code *)*param_2)(uVar2);
        goto LAB_14234b56c;
      }
    }
    (*(code *)*param_2)(0);
  }
LAB_14234b56c:
  if (*(int *)(param_2 + 8) != 0) {
    plVar3 = (longlong *)param_2[6];
    if ((longlong *)param_2[6] == (longlong *)0x0) {
      plVar3 = param_2 + 2;
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  if (param_2[6] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14234b5c0 Rehash body=635 status=ok
// SIG undefined Rehash(void)

void TSet<TTuple<USceneComponent_*,FTransform>,TDefaultMapHashableKeyFuncs<USceneComponent_*,FTransform,0>,FDefaultSetAllocator>
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
        if (bVar3) goto LAB_14234b6ff;
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
LAB_14234b6ff:
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
        puVar15 = (ulonglong *)((longlong)iStack_1c * 0x50 + *param_1);
        iVar8 = (int)(*puVar15 >> 4);
        uVar11 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
        uVar12 = -(uVar11 + iVar8) ^ uVar11 >> 0xd;
        uVar9 = (iVar8 - uVar11) - uVar12 ^ uVar12 >> 0xc;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 0x10;
        uVar12 = (uVar12 - uVar11) - uVar9 ^ uVar11 >> 5;
        uVar9 = (uVar9 - uVar11) - uVar12 ^ uVar12 >> 3;
        uVar11 = (uVar11 - uVar9) - uVar12 ^ uVar9 << 10;
        uVar9 = ((uVar12 - uVar11) - uVar9 ^ uVar11 >> 0xf) & (int)*plVar2 - 1U;
        *(uint *)((longlong)puVar15 + 0x44) = uVar9;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(puVar15 + 8) =
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



// FUNCTION 14234b880 FUN_14234b880 body=547 status=ok
// SIG undefined FUN_14234b880(void)

void FUN_14234b880(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  longlong *plVar11;
  bool bVar12;
  undefined8 local_res18;
  longlong *local_res20;
  longlong local_a8 [2];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  plVar11 = (longlong *)*param_2;
  bVar12 = false;
  local_res20 = plVar11 + (int)param_2[1];
  if (plVar11 != local_res20) {
    do {
      uVar8 = 0;
      lVar7 = *plVar11;
      local_98 = 0;
      uStack_90 = 0;
      local_88 = 0;
      uStack_80 = 0;
      local_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      uStack_54 = 0;
      local_50 = 0;
      uStack_48 = 0;
      if (lVar7 == 0) {
        lVar7 = 0;
        lVar5 = 0;
      }
      else {
        local_78 = 0;
        uStack_70 = 0;
        lVar5 = UField::GetOwnerClass(lVar7);
        if (lVar5 == 0) {
          local_res18 = *(undefined8 *)(lVar7 + 0x18);
          bVar12 = true;
          FName::ToString(&local_res18,local_a8);
          cVar3 = FString::EndsWith(local_a8,L"__DelegateSignature",1);
          if (cVar3 == '\0') goto LAB_14234b96e;
          bVar2 = true;
        }
        else {
LAB_14234b96e:
          bVar2 = false;
        }
        if ((bVar12) && (bVar12 = false, local_a8[0] != 0)) {
          FMemory::Free();
        }
        if (bVar2) {
          lVar5 = UObjectBaseUtility::GetOutermost(lVar7);
        }
        lVar7 = *(longlong *)(lVar7 + 0x18);
        local_50 = local_78;
        uStack_48 = uStack_70;
      }
      iVar4 = *(int *)(param_1 + 0xf0);
      uVar10 = uVar8;
      if (0 < iVar4) {
        do {
          iVar9 = (int)uVar10;
          lVar1 = *(longlong *)(param_1 + 0xe8);
          if ((*(longlong *)(uVar8 + lVar1) == lVar5) && (*(longlong *)(uVar8 + 8 + lVar1) == lVar7)
             ) {
            if (((*(int *)(uVar8 + 0x1c + lVar1) == uStack_48._4_4_ &&
                 *(int *)(uVar8 + 0x18 + lVar1) == (int)uStack_48) &&
                *(int *)(uVar8 + 0x14 + lVar1) == local_50._4_4_) &&
                (int)local_50 == *(int *)(uVar8 + 0x10 + lVar1)) {
              iVar6 = (iVar4 - iVar9) + -1;
              if (0 < iVar6) {
                iVar6 = 1;
              }
              if (iVar6 != 0) {
                _guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar9 * 0x20 + lVar1),
                           (void *)((longlong)(iVar4 - iVar6) * 0x20 + lVar1),(longlong)iVar6 << 5);
                iVar4 = *(int *)(param_1 + 0xf0);
              }
              *(int *)(param_1 + 0xf0) = iVar4 + -1;
              TArray<FUniqueNetIdSteam,FDefaultAllocator>::ResizeShrink
                        ((longlong *)(param_1 + 0xe8));
              iVar4 = *(int *)(param_1 + 0xf0);
              iVar9 = iVar9 + -1;
              uVar8 = uVar8 - 0x20;
            }
          }
          uVar8 = uVar8 + 0x20;
          uVar10 = (ulonglong)(iVar9 + 1U);
        } while ((int)(iVar9 + 1U) < iVar4);
      }
      plVar11 = plVar11 + 1;
    } while (plVar11 != local_res20);
  }
  return;
}



// FUNCTION 14234bab0 FUN_14234bab0 body=271 status=ok
// SIG undefined FUN_14234bab0(void)

void FUN_14234bab0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0x88)) {
    lVar9 = 0;
    plVar1 = (longlong *)(param_1 + 0x80);
    do {
      lVar2 = *(longlong *)(lVar9 + *plVar1);
      if (lVar2 != 0) {
        if (param_2 != 0) {
          lVar5 = UAssetUserData::GetPrivateStaticClass();
          lVar8 = param_2;
          do {
            lVar6 = param_2;
            if (lVar8 == lVar5) goto LAB_14234bb20;
            lVar8 = *(longlong *)(lVar8 + 0x30);
          } while (lVar8 != 0);
        }
        lVar6 = 0;
LAB_14234bb20:
        lVar2 = *(longlong *)(lVar2 + 0x10);
        if ((*(int *)(lVar2 + 0x90) < *(int *)(lVar6 + 0x90)) ||
           (*(longlong *)(*(longlong *)(lVar2 + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8) !=
            lVar6 + 0x88)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
        if (bVar3) {
          iVar7 = *(int *)(param_1 + 0x88);
          iVar4 = (iVar7 - iVar10) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)(*plVar1 + (longlong)iVar10 * 8),
                       (void *)(*plVar1 + (longlong)(iVar10 + 1) * 8),(longlong)iVar4 << 3);
            iVar7 = *(int *)(param_1 + 0x88);
          }
          *(int *)(param_1 + 0x88) = iVar7 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(plVar1);
          return;
        }
      }
      iVar10 = iVar10 + 1;
      lVar9 = lVar9 + 8;
    } while (iVar10 < *(int *)(param_1 + 0x88));
  }
  return;
}



// FUNCTION 14234bbc0 FUN_14234bbc0 body=288 status=ok
// SIG undefined FUN_14234bbc0(void)

undefined1 FUN_14234bbc0(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  longlong lVar1;
  longlong lVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong local_18 [2];
  
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfd;
  lVar1 = *(longlong *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar4 = FUN_14175ed80();
  if ((lVar1 == *(longlong *)(param_1 + 0x18)) && (lVar2 == *(longlong *)(param_1 + 0x20))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((((*(byte *)(param_1 + 0xb9) & 2) == 0) && ((param_4 & 2) == 0)) && (bVar3)) {
    puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    puVar6 = &DAT_143f3eda8;
    if (*(int *)(puVar5 + 1) == 0) {
      puVar7 = &DAT_143f3eda8;
    }
    else {
      puVar7 = (undefined2 *)*puVar5;
    }
    LowLevelFatalErrorHandler
              ("Unknown",0x132,
               L"%s failed to route PostRename.  Please call Super::PostRename() in your <className>::PostRename() function. "
               ,puVar7);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
    puVar5 = (undefined8 *)UObjectBaseUtility::GetFullName(param_1,local_18,0);
    if (*(int *)(puVar5 + 1) != 0) {
      puVar6 = (undefined2 *)*puVar5;
    }
    FDebug::AssertFailed
              (&DAT_14503e97b,"Unknown",0x132,
               L"%s failed to route PostRename.  Please call Super::PostRename() in your <className>::PostRename() function. "
               ,puVar6);
    if (local_18[0] != 0) {
      FMemory::Free();
    }
  }
  return uVar4;
}



// FUNCTION 14234bce0 FUN_14234bce0 body=2587 status=ok
// SIG undefined FUN_14234bce0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234bce0(longlong *param_1,float param_2,undefined8 param_3)

{
  uint *puVar1;
  undefined1 (*pauVar2) [16];
  longlong *plVar3;
  int *piVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  bool bVar9;
  char cVar10;
  undefined4 uVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  int iVar20;
  float fVar21;
  undefined8 extraout_XMM0_Qb;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auStack_388 [32];
  longlong *local_368;
  longlong local_360;
  longlong *local_358;
  undefined8 local_350;
  float local_348;
  longlong *local_338;
  longlong *plStack_330;
  longlong local_328;
  undefined8 local_320;
  longlong *local_318 [2];
  undefined1 local_308 [16];
  undefined8 local_2f8;
  longlong *local_2f0;
  undefined8 local_2e8;
  longlong *plStack_2e0;
  longlong *local_2d8;
  undefined8 local_2d0;
  longlong *plStack_2c8;
  float local_2c0;
  float local_2bc;
  longlong local_2b8 [2];
  undefined4 local_2a8;
  float local_2a4;
  float local_2a0;
  longlong *local_290;
  uint local_280;
  undefined1 local_278 [16];
  undefined8 local_268;
  longlong *plStack_260;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined1 local_248 [448];
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_388;
  lVar19 = *(longlong *)(param_1[0x44] + 0x490);
  local_358 = (longlong *)param_3;
  if (lVar19 == 0) {
LAB_14234bd8e:
    local_328 = 0;
  }
  else {
    local_328 = lVar19;
    lVar12 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar19 + 0x10) + 0x90) < *(int *)(lVar12 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar19 + 0x10) + 0x88) + (longlong)*(int *)(lVar12 + 0x90) * 8
         ) != lVar12 + 0x88)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    if (!bVar9) goto LAB_14234bd8e;
    if (*(longlong *)(lVar19 + 0x510) != param_1[0x44]) {
      return;
    }
    if (*(longlong *)(lVar19 + 0x508) == 0) {
      return;
    }
  }
  plVar13 = (longlong *)param_1[0xc2];
  if (plVar13 == (longlong *)0x0) {
    plVar13 = (longlong *)(**(code **)(param_1[0x43] + 0x28))();
    param_1[0xc2] = (longlong)plVar13;
    if (plVar13 == (longlong *)0x0) {
      return;
    }
  }
  lVar19 = param_1[0x44];
  if (*(float *)(param_1 + 0xc4) < *(float *)((longlong)plVar13 + 0xc)) {
    iVar20 = 0;
    *(float *)((longlong)plVar13 + 0xc) =
         *(float *)((longlong)plVar13 + 0xc) - *(float *)(param_1 + 0xc4);
    if (0 < (int)plVar13[3]) {
      lVar12 = 0;
      do {
        iVar20 = iVar20 + 1;
        puVar1 = (uint *)(*(longlong *)(lVar12 + plVar13[2]) + 0x18);
        *puVar1 = *puVar1 | 0x10;
        lVar12 = lVar12 + 0x10;
      } while (iVar20 < (int)plVar13[3]);
    }
    if (plVar13[8] != 0) {
      puVar1 = (uint *)(plVar13[8] + 0x18);
      *puVar1 = *puVar1 | 0x10;
    }
    FRootMotionSourceGroup::ApplyTimeStampReset(param_1 + 0xc5,(int)param_1[0xc4]);
  }
  *(float *)((longlong)plVar13 + 0xc) = param_2 + *(float *)((longlong)plVar13 + 0xc);
  FUN_14222dcf0(lVar19);
  local_2e8 = 0;
  plStack_2e0 = (longlong *)0x0;
  if (plVar13[8] != 0) {
    lVar19 = 0;
    iVar20 = (int)plVar13[3] + -1;
    if (0 < iVar20) {
      lVar12 = 0;
      do {
        lVar16 = plVar13[2];
        cVar10 = (**(code **)(**(longlong **)(lVar12 + lVar16) + 0x20))
                           (*(longlong **)(lVar12 + lVar16),plVar13 + 8);
        if (cVar10 != '\0') {
          local_268 = *(undefined8 *)(lVar12 + lVar16);
          plStack_260 = *(longlong **)(lVar12 + 8 + lVar16);
          local_2d0 = 0;
          plVar17 = (longlong *)0x0;
          if (plStack_260 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_260 + 1) = (int)plStack_260[1] + 1;
            UNLOCK();
            local_2d0 = local_2e8;
            plVar17 = plStack_2e0;
          }
          local_2e8 = local_268;
          plStack_2e0 = plStack_260;
          plStack_2c8 = plVar17;
          if (plVar17 != (longlong *)0x0) {
            LOCK();
            plVar18 = plVar17 + 1;
            lVar19 = *plVar18;
            *(int *)plVar18 = (int)*plVar18 + -1;
            UNLOCK();
            if ((int)lVar19 == 1) {
              (**(code **)*plVar17)(plVar17);
              LOCK();
              piVar4 = (int *)((longlong)plVar17 + 0xc);
              iVar20 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              if (iVar20 == 1) {
                (**(code **)(*plStack_2c8 + 8))(plStack_2c8,1);
              }
            }
          }
          break;
        }
        lVar19 = lVar19 + 1;
        lVar12 = lVar12 + 0x10;
      } while (lVar19 < iVar20);
    }
  }
  (**(code **)(*plVar13 + 0x18))(plVar13,&local_338);
  plVar17 = local_338;
  local_358 = local_338;
  plVar18 = plStack_330;
  if (local_338 == (longlong *)0x0) goto LAB_14234c63f;
  local_368 = plVar13;
  (**(code **)(*local_338 + 0x10))(local_338,param_1[0x44]);
  plVar18 = (longlong *)plVar13[6];
  pauVar2 = (undefined1 (*) [16])(plVar13 + 6);
  local_2d8 = plVar18;
  if ((plVar18 != (longlong *)0x0) && ((*(byte *)(plVar18 + 3) & 0x10) == 0)) {
    lVar19 = *plVar18;
    fVar21 = (float)FUN_14222dcf0(param_1[0x44]);
    cVar10 = (**(code **)(lVar19 + 0x38))
                       (plVar18,&local_338,param_1[0x44],
                        fVar21 * *(float *)((longlong)plVar13 + 0x124));
    plVar17 = local_358;
    if (cVar10 != '\0') {
      (**(code **)(*plVar18 + 0x28))(plVar18,local_2b8);
      lVar19 = param_1[0x44];
      lVar12 = *param_1;
      lVar16 = *(longlong *)(lVar19 + 0x4d0);
      uVar22 = *(uint *)(lVar16 + 0x230) & _DAT_146af0070;
      uVar23 = *(uint *)(lVar16 + 0x234) & uRam0000000146af0074;
      uVar24 = *(uint *)(lVar16 + 0x238) & uRam0000000146af0078;
      uVar25 = *(uint *)(lVar16 + 0x23c) & uRam0000000146af007c;
      auVar27._4_4_ = uVar23;
      auVar27._0_4_ = uVar22;
      auVar27._8_4_ = uVar24;
      auVar27._12_4_ = uVar25;
      auVar28._4_4_ = uVar24;
      auVar28._0_4_ = uVar23;
      auVar28._8_4_ = uVar22;
      auVar28._12_4_ = uVar25;
      auVar28 = minps(auVar27,auVar28);
      auVar29._4_4_ = uVar22;
      auVar29._0_4_ = uVar24;
      auVar29._8_4_ = uVar23;
      auVar29._12_4_ = uVar25;
      auVar29 = minps(auVar28,auVar29);
      local_2c0 = auVar29._0_4_;
      local_2a4 = local_2c0 * *(float *)(lVar16 + 0x714);
      local_2a0 = local_2c0 * *(float *)(lVar16 + 0x710);
      local_2a8 = 3;
      uVar11 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
      uVar14 = FRotator::Quaternion(local_2d8 + 0x20,local_278);
      local_368 = (longlong *)&local_2a8;
      local_360 = lVar19;
      cVar10 = (**(code **)(lVar12 + 0x480))(param_1,local_2b8,uVar14,uVar11);
      plVar17 = local_358;
      if (cVar10 == '\0') {
        lVar19 = *(longlong *)(param_1[0x44] + 0x4c0);
        if (lVar19 != 0) {
          local_280 = (uint)*(byte *)(lVar19 + 0xb15);
          *(undefined1 *)(lVar19 + 0xb15) = 1;
        }
        FUN_14237e6d0(local_248,param_1[0x2f],1,1);
        plVar17 = local_358;
        local_368 = local_2b8;
        (**(code **)(*local_358 + 0x40))(local_358,local_2d8,param_1[0x44],local_328);
        (**(code **)(*param_1 + 0x608))(param_1);
        (**(code **)(*plVar17 + 0x18))(plVar17,param_1[0x44]);
        if (0 < (int)plVar13[3]) {
          lVar12 = plVar13[2];
          lVar16 = (longlong)(int)plVar13[3] + -1;
          if (*(longlong *)(lVar12 + lVar16 * 0x10) == *(longlong *)*pauVar2) {
            plVar18 = *(longlong **)(lVar12 + 8 + lVar16 * 0x10);
            *(undefined8 *)(lVar12 + 8 + lVar16 * 0x10) = 0;
            *(undefined8 *)(lVar12 + lVar16 * 0x10) = 0;
            local_290 = plVar18;
            TArray<TSharedPtr<Chaos::FImplicitObject,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                      (plVar13 + 2,(int)plVar13[3] + -1,1,0);
            if (plVar18 != (longlong *)0x0) {
              LOCK();
              plVar3 = plVar18 + 1;
              lVar12 = *plVar3;
              *(int *)plVar3 = (int)*plVar3 + -1;
              UNLOCK();
              if ((int)lVar12 == 1) {
                (**(code **)*local_290)();
                LOCK();
                piVar4 = (int *)((longlong)plVar18 + 0xc);
                iVar20 = *piVar4;
                *piVar4 = *piVar4 + -1;
                UNLOCK();
                if (iVar20 == 1) {
                  (**(code **)(*local_290 + 8))(local_290,1);
                }
              }
            }
          }
        }
        (**(code **)(*plVar13 + 0x10))(plVar13,pauVar2);
        local_318[0] = (longlong *)0x0;
        if (pauVar2 != (undefined1 (*) [16])&local_320) {
          *(longlong *)*pauVar2 = 0;
          local_320 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13 + 7,local_318);
          plVar18 = local_318[0];
          if (local_318[0] != (longlong *)0x0) {
            LOCK();
            plVar3 = local_318[0] + 1;
            lVar12 = *plVar3;
            *(int *)plVar3 = (int)*plVar3 + -1;
            UNLOCK();
            if ((int)lVar12 == 1) {
              (**(code **)*local_318[0])(local_318[0]);
              LOCK();
              piVar4 = (int *)((longlong)plVar18 + 0xc);
              iVar20 = *piVar4;
              *piVar4 = *piVar4 + -1;
              UNLOCK();
              plVar17 = local_358;
              if (iVar20 == 1) {
                (**(code **)(*local_318[0] + 8))(local_318[0],1);
                plVar17 = local_358;
              }
            }
          }
        }
        FUN_14237f990(local_248);
        if (lVar19 != 0) {
          *(undefined1 *)(lVar19 + 0xb15) = (undefined1)local_280;
        }
      }
    }
  }
  fVar21 = (float)(**(code **)(*param_1 + 0x6b8))(param_1);
  if (0.0001 <= fVar21) {
    fVar5 = *(float *)(plVar17 + 0x35);
    fVar6 = *(float *)((longlong)plVar17 + 0x1ac);
    local_348 = *(float *)(plVar17 + 0x36);
    fVar26 = fVar5 * fVar5 + fVar6 * fVar6 + local_348 * local_348;
    if (fVar26 <= fVar21 * fVar21) {
      local_350 = plVar17[0x35];
      local_348 = *(float *)(plVar17 + 0x36);
    }
    else {
      auVar30._8_8_ = 0;
      auVar30._0_8_ = CONCAT44(0,fVar26);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = CONCAT44(0,fVar26);
      auVar29 = rsqrtss(auVar30,auVar8);
      local_2bc = auVar29._0_4_;
      local_2bc = local_2bc + local_2bc * (0.5 - fVar26 * 0.5 * local_2bc * local_2bc);
      local_2bc = local_2bc + local_2bc * (0.5 - fVar26 * 0.5 * local_2bc * local_2bc);
      fVar21 = local_2bc * fVar21;
      local_348 = local_348 * fVar21;
      local_350 = CONCAT44(fVar6 * fVar21,fVar5 * fVar21);
    }
  }
  else {
    local_348 = DAT_1468b5d98;
    local_350 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
  }
  param_1[0x6a] = local_350;
  *(float *)(param_1 + 0x6b) = local_348;
  uVar11 = (**(code **)(*param_1 + 0x598))(param_1);
  lVar19 = param_1[0x44];
  *(undefined4 *)(param_1 + 0x76) = uVar11;
  *(undefined1 *)(lVar19 + 0x6d0) = 0;
  *(undefined4 *)(lVar19 + 0x6d4) = 0;
  FRootMotionSourceGroup::Clear(param_1[0x44] + 0x5d0);
  (**(code **)(*param_1 + 0x8f8))(param_1,(int)plVar17[4]);
  (**(code **)(*plVar17 + 0x30))(plVar17,param_1[0x44],0);
  if ((*(byte *)(param_1[0x44] + 0x90) & 0x10) == 0) {
LAB_14234c5da:
    local_2f0 = (longlong *)0x0;
    plVar18 = plStack_330;
    if (pauVar2 == (undefined1 (*) [16])&local_2f8) goto LAB_14234c63f;
    *(longlong *)*pauVar2 = 0;
    local_2f8 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(plVar13 + 7,&local_2f0);
    plVar13 = local_2f0;
    plVar18 = plStack_330;
    if (local_2f0 == (longlong *)0x0) goto LAB_14234c63f;
    LOCK();
    plVar17 = local_2f0 + 1;
    lVar19 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar19 != 1) goto LAB_14234c63f;
    (**(code **)*local_2f0)(local_2f0);
    LOCK();
    piVar4 = (int *)((longlong)plVar13 + 0xc);
    iVar20 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    plVar13 = local_2f0;
    plVar18 = plStack_330;
    if (iVar20 != 1) goto LAB_14234c63f;
  }
  else {
    iVar20 = (int)plVar13[3];
    *(int *)(plVar13 + 3) = iVar20 + 1;
    if (*(int *)((longlong)plVar13 + 0x1c) < iVar20 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar13 + 2,iVar20);
    }
    puVar15 = (undefined8 *)((longlong)iVar20 * 0x10 + plVar13[2]);
    *puVar15 = local_338;
    puVar15[1] = plStack_330;
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_330 + 1) = (int)plStack_330[1] + 1;
      UNLOCK();
    }
    lVar19 = FUN_14046f570(param_1);
    if (((DAT_146531c28 == 0) ||
        (cVar10 = (**(code **)(*param_1 + 0x960))(param_1,&local_338), cVar10 == '\0')) ||
       (*(longlong *)*pauVar2 != 0)) {
LAB_14234c5bb:
      *(undefined4 *)(plVar13 + 1) = *(undefined4 *)(lVar19 + 0x790);
      (**(code **)(*param_1 + 0x938))(param_1,plVar17,local_2e8);
      goto LAB_14234c5da;
    }
    uVar14 = (**(code **)(*param_1 + 0x968))(param_1,local_328,plVar13,&local_338);
    auVar31._0_12_ = ZEXT812(0x3c088889);
    auVar31._12_4_ = 0;
    if ((0.008333334 <= (float)uVar14) &&
       (auVar31._8_4_ = (int)extraout_XMM0_Qb, auVar31._0_8_ = uVar14,
       auVar31._12_4_ = (int)((ulonglong)extraout_XMM0_Qb >> 0x20), 0.2 <= (float)uVar14)) {
      auVar31._0_4_ = 0x3e4ccccd;
    }
    lVar12 = UWorld::GetWorldSettings(lVar19,0,1);
    if (auVar31._0_4_ <=
        *(float *)(lVar12 + 0x5e4) * *(float *)(lVar12 + 0x5e0) * *(float *)(lVar12 + 0x5e8) *
        (*(float *)(lVar19 + 0x790) - *(float *)(plVar13 + 1))) goto LAB_14234c5bb;
    local_308._8_8_ = plStack_330;
    local_308._0_8_ = local_338;
    uVar11 = (undefined4)((ulonglong)local_338 >> 0x20);
    uVar7 = (undefined4)((ulonglong)plStack_330 >> 0x20);
    if (plStack_330 != (longlong *)0x0) {
      LOCK();
      *(int *)(plStack_330 + 1) = (int)plStack_330[1] + 1;
      UNLOCK();
    }
    if (&local_308 != pauVar2) {
      local_308 = *pauVar2;
      *(int *)*pauVar2 = (int)local_338;
      *(undefined4 *)((longlong)plVar13 + 0x34) = uVar11;
      *(int *)(plVar13 + 7) = (int)plStack_330;
      *(undefined4 *)((longlong)plVar13 + 0x3c) = uVar7;
      local_258 = (int)local_338;
      uStack_254 = uVar11;
      uStack_250 = (int)plStack_330;
      uStack_24c = uVar7;
    }
    uVar14 = local_308._8_8_;
    plVar18 = plStack_330;
    if ((undefined8 *)local_308._8_8_ == (undefined8 *)0x0) goto LAB_14234c63f;
    LOCK();
    piVar4 = (int *)(local_308._8_8_ + 8);
    iVar20 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    if (iVar20 != 1) goto LAB_14234c63f;
    (*(code *)**(undefined8 **)local_308._8_8_)(local_308._8_8_);
    LOCK();
    piVar4 = (int *)(uVar14 + 0xc);
    iVar20 = *piVar4;
    *piVar4 = *piVar4 + -1;
    UNLOCK();
    plVar18 = plStack_330;
    if (iVar20 != 1) goto LAB_14234c63f;
    plVar13 = (longlong *)local_308._8_8_;
  }
  (**(code **)(*plVar13 + 8))(plVar13,1);
  plVar18 = plStack_330;
LAB_14234c63f:
  if (plVar18 != (longlong *)0x0) {
    LOCK();
    plVar13 = plVar18 + 1;
    lVar19 = *plVar13;
    *(int *)plVar13 = (int)*plVar13 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plVar18)(plVar18);
      LOCK();
      piVar4 = (int *)((longlong)plVar18 + 0xc);
      iVar20 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plVar18 + 8))(plVar18,1);
      }
    }
  }
  plVar13 = plStack_2e0;
  if (plStack_2e0 != (longlong *)0x0) {
    LOCK();
    plVar17 = plStack_2e0 + 1;
    lVar19 = *plVar17;
    *(int *)plVar17 = (int)*plVar17 + -1;
    UNLOCK();
    if ((int)lVar19 == 1) {
      (**(code **)*plStack_2e0)(plStack_2e0);
      LOCK();
      piVar4 = (int *)((longlong)plVar13 + 0xc);
      iVar20 = *piVar4;
      *piVar4 = *piVar4 + -1;
      UNLOCK();
      if (iVar20 == 1) {
        (**(code **)(*plStack_2e0 + 8))(plStack_2e0,1);
      }
    }
  }
  return;
}



// FUNCTION 14234c700 FUN_14234c700 body=571 status=ok
// SIG undefined FUN_14234c700(void)

void FUN_14234c700(longlong *param_1,float *param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if (0.0001 <= *param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]) {
    cVar3 = (**(code **)(*param_1 + 0x558))();
    if (cVar3 == '\0') {
      *(undefined8 *)((longlong)param_1 + 0x4cc) = *(undefined8 *)param_2;
      *(float *)((longlong)param_1 + 0x4d4) = param_2[2];
      *(uint *)((longlong)param_1 + 0x4b4) =
           (uint)param_3 << 0x17 | *(uint *)((longlong)param_1 + 0x4b4) & 0xff7fffff | 0x400000;
      cVar3 = (**(code **)(*param_1 + 0x560))(param_1);
      if (cVar3 != '\0') {
        *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
      }
    }
    else {
      fVar4 = (float)(**(code **)(*param_1 + 0x400))(param_1);
      if (0.0001 <= fVar4) {
        local_60 = param_2[2];
        fVar1 = *param_2;
        fVar2 = param_2[1];
        fVar5 = fVar1 * fVar1 + fVar2 * fVar2 + local_60 * local_60;
        if (fVar5 <= fVar4 * fVar4) {
          local_60 = param_2[2];
          local_58 = *(undefined8 *)param_2;
        }
        else {
          auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar6 = auVar7._0_4_;
          fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
          fVar4 = (fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6)) * fVar4;
          local_60 = local_60 * fVar4;
          local_58 = CONCAT44(fVar2 * fVar4,fVar1 * fVar4);
        }
      }
      else {
        local_60 = DAT_1468b5d98;
        local_58 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      }
      local_50 = local_60;
      (**(code **)(*param_1 + 0x5c8))(param_1,&local_58,local_60);
    }
  }
  return;
}



// FUNCTION 14234c940 FUN_14234c940 body=445 status=ok
// SIG undefined FUN_14234c940(void)

void FUN_14234c940(longlong *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  local_68 = *(undefined8 *)param_2;
  local_60 = param_2[2];
  if ((param_2[2] != 0.0) &&
     ((cVar4 = (**(code **)(*param_1 + 0x560))(), cVar4 != '\0' ||
      (cVar4 = (**(code **)(*param_1 + 0x558))(param_1), cVar4 != '\0')))) {
    fVar1 = param_2[2];
    fVar2 = *param_2;
    fVar3 = param_2[1];
    fVar5 = fVar2 * fVar2 + fVar3 * fVar3;
    fVar9 = SQRT(fVar1 * fVar1 + fVar5);
    if (fVar5 == 1.0) {
      fVar6 = fVar3;
      local_60 = 0.0;
      fVar8 = fVar2;
      if (fVar1 == 0.0) {
        local_58 = *(undefined8 *)param_2;
        fVar6 = (float)((ulonglong)local_58 >> 0x20);
        local_60 = param_2[2];
        fVar8 = (float)local_58;
      }
    }
    else {
      fVar6 = DAT_1468b5d94;
      local_60 = DAT_1468b5d98;
      fVar8 = DAT_1468b5d90;
      if (1e-08 <= fVar5) {
        auVar7 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar6 = auVar7._0_4_;
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar6 = fVar6 + fVar6 * (0.5 - fVar5 * 0.5 * fVar6 * fVar6);
        fVar8 = fVar2 * fVar6;
        fVar6 = fVar3 * fVar6;
        local_60 = 0.0;
      }
    }
    local_60 = local_60 * fVar9;
    local_68 = CONCAT44(fVar6 * fVar9,fVar8 * fVar9);
    local_50 = local_60;
  }
  FUN_142374c60(param_1,&local_68);
  return;
}



// FUNCTION 14234cb00 FUN_14234cb00 body=41 status=ok
// SIG undefined FUN_14234cb00(void)

void FUN_14234cb00(longlong param_1)

{
  undefined1 local_18 [24];
  
  if ((*(byte *)(param_1 + 0xb8) & 1) != 0) {
    FUN_142325970(local_18,param_1);
    FUN_1423283e0(local_18);
  }
  return;
}



// FUNCTION 14234cb30 FUN_14234cb30 body=230 status=ok
// SIG undefined FUN_14234cb30(void)

void FUN_14234cb30(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar4 = (int)param_1[1];
  if (iVar1 < param_2) {
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x30);
      do {
        if ((int)plVar3[2] != 0) {
          plVar2 = (longlong *)*plVar3;
          if ((longlong *)*plVar3 == (longlong *)0x0) {
            plVar2 = plVar3 + -4;
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,0);
          }
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar1 = *(int *)((longlong)param_1 + 0xc);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (iVar1 != param_2) {
      TArray<FSpriteInstanceData,FDefaultAllocator>::ResizeTo(param_1,param_2);
    }
  }
  else {
    if (iVar4 != 0) {
      plVar3 = (longlong *)(*param_1 + 0x30);
      do {
        if ((int)plVar3[2] != 0) {
          plVar2 = (longlong *)*plVar3;
          if ((longlong *)*plVar3 == (longlong *)0x0) {
            plVar2 = plVar3 + -4;
          }
          if (plVar2 != (longlong *)0x0) {
            (**(code **)(*plVar2 + 0x10))(plVar2,0);
          }
        }
        if (*plVar3 != 0) {
          FMemory::Free();
        }
        plVar3 = plVar3 + 10;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return;
}



// FUNCTION 14234cc20 FUN_14234cc20 body=603 status=ok
// SIG undefined FUN_14234cc20(void)

void FUN_14234cc20(longlong param_1)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  undefined4 local_res10;
  uint local_res14;
  undefined4 local_res18;
  uint local_res1c;
  
  uVar3 = *(int *)(param_1 + 0x380) + 1U & 0x80000001;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
  }
  plVar9 = (longlong *)((longlong)(int)uVar3 * 0x60 + param_1 + 0x2c0);
  if ((DAT_146531c10 != 0) && (cVar2 = FUN_141636a40(), cVar2 != '\0')) {
    uVar3 = *(int *)(param_1 + 0x380) + 1U & 0x80000001;
    if ((int)uVar3 < 0) {
      uVar3 = (uVar3 - 1 | 0xfffffffe) + 1;
    }
    if (0 < *(int *)((longlong)(int)uVar3 * 0x60 + 0x58 + param_1 + 0x2c0)) {
      plVar6 = (longlong *)FTaskGraphInterface::Get();
      plVar8 = (longlong *)(param_1 + 0x2f0 + (longlong)(int)uVar3 * 0x60);
      (**(code **)(*plVar6 + 0x48))(plVar6,plVar8,2);
      iVar4 = *(int *)((longlong)plVar8 + 0x2c);
      plVar6 = (longlong *)plVar8[4];
      iVar10 = (int)plVar8[5];
      if (iVar4 < 0) {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = plVar8;
        }
        if (iVar10 != 0) {
          do {
            if (*plVar6 != 0) {
              LOCK();
              piVar1 = (int *)(*plVar6 + 0x48);
              iVar4 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar4 == 1) {
                FGraphEvent::Recycle();
              }
            }
            plVar6 = plVar6 + 1;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
          iVar4 = *(int *)((longlong)plVar8 + 0x2c);
        }
        *(undefined4 *)(plVar8 + 5) = 0;
        if (iVar4 != 0) {
          TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                    (plVar8,0);
        }
      }
      else {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = plVar8;
        }
        for (; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (*plVar6 != 0) {
            LOCK();
            piVar1 = (int *)(*plVar6 + 0x48);
            iVar4 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar4 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar6 = plVar6 + 1;
        }
        *(undefined4 *)(plVar8 + 5) = 0;
      }
    }
  }
  uVar3 = 0;
  if ((int)plVar9[4] != 0) {
    do {
      uVar5 = uVar3 & 0x3f;
      uVar7 = uVar3;
      if ((int)uVar3 < 0) {
        uVar7 = uVar3 + 0x3f;
        uVar5 = uVar5 - 0x40;
      }
      lVar11 = (longlong)(int)uVar5 * 0x120 +
               *(longlong *)(*plVar9 + (longlong)((int)uVar7 >> 6) * 8);
      local_res10 = *(undefined4 *)(lVar11 + 0xbc);
      local_res14 = uVar3;
      if (((*(int *)(lVar11 + 0xf8) != 0) && (*(longlong **)(lVar11 + 0xf0) != (longlong *)0x0)) &&
         (cVar2 = (**(code **)(**(longlong **)(lVar11 + 0xf0) + 0x18))(), cVar2 != '\0')) {
        if (*(int *)(lVar11 + 0xf8) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar11 + 0xf0);
        }
        (**(code **)(*plVar6 + 0x40))(plVar6,&local_res10,lVar11);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)(plVar9 + 4));
  }
  uVar3 = 0;
  if (*(int *)((longlong)plVar9 + 0x24) != 0) {
    do {
      uVar5 = uVar3 & 0x3f;
      uVar7 = uVar3;
      if ((int)uVar3 < 0) {
        uVar7 = uVar3 + 0x3f;
        uVar5 = uVar5 - 0x40;
      }
      lVar11 = (longlong)(int)uVar5 * 0x110 +
               *(longlong *)(plVar9[2] + (longlong)((int)uVar7 >> 6) * 8);
      local_res18 = *(undefined4 *)(lVar11 + 0xbc);
      if (((*(int *)(lVar11 + 0xf8) != 0) && (*(longlong **)(lVar11 + 0xf0) != (longlong *)0x0)) &&
         (local_res1c = uVar3, cVar2 = (**(code **)(**(longlong **)(lVar11 + 0xf0) + 0x18))(),
         cVar2 != '\0')) {
        if (*(int *)(lVar11 + 0xf8) == 0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = *(longlong **)(lVar11 + 0xf0);
        }
        (**(code **)(*plVar6 + 0x40))(plVar6,&local_res18,lVar11);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != *(uint *)((longlong)plVar9 + 0x24));
  }
  return;
}



// FUNCTION 14234ce80 FUN_14234ce80 body=58 status=ok
// SIG undefined FUN_14234ce80(void)

void FUN_14234ce80(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x17c) = 0xbf800000;
  puVar1 = *(undefined8 **)(param_1 + 0x3f8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x3f8) = 0;
  }
  return;
}



// FUNCTION 14234cec0 FUN_14234cec0 body=58 status=ok
// SIG undefined FUN_14234cec0(void)

void FUN_14234cec0(longlong param_1)

{
  undefined8 *puVar1;
  
  *(undefined4 *)(param_1 + 0x17c) = 0xbf800000;
  puVar1 = *(undefined8 **)(param_1 + 0x400);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 0x400) = 0;
  }
  return;
}



// FUNCTION 14234cf00 FUN_14234cf00 body=52 status=ok
// SIG undefined FUN_14234cf00(void)

uint FUN_14234cf00(longlong param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = FUN_1423750c0();
  uVar2 = *(uint *)(param_1 + 0x4b4);
  uVar2 = (((uint)bVar1 << 5 | uVar2) ^ uVar2) & 0x20 ^ uVar2;
  *(uint *)(param_1 + 0x4b4) = uVar2;
  return uVar2 >> 5 & 0xffffff01;
}



// FUNCTION 14234cf40 FUN_14234cf40 body=45 status=ok
// SIG undefined FUN_14234cf40(void)

void FUN_14234cf40(longlong param_1)

{
  if (*(char *)(param_1 + 0x720) != '\0') {
    *(undefined8 *)(param_1 + 0x18c) = *(undefined8 *)(param_1 + 0x714);
    *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(param_1 + 0x71c);
    *(undefined1 *)(param_1 + 0x720) = 0;
  }
  return;
}



// FUNCTION 14234cf70 FUN_14234cf70 body=460 status=ok
// SIG undefined FUN_14234cf70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234cf70(longlong *param_1,undefined8 *param_2,longlong param_3,float *param_4,
                  uint *param_5,char param_6)

{
  int iVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 local_18;
  float fStack_10;
  undefined4 uStack_c;
  
  local_18 = *param_2;
  fStack_10 = *(float *)(param_2 + 1);
  if (((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0) &&
     ((*(uint *)(param_1 + 0x60) & 0x2000) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  FUN_1423990b0(param_1[0x2f],&local_18,0,0,uVar2);
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar6 = iVar1 >> 0x1f & 0xffff;
      uVar4 = iVar1 + uVar6;
      lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
              (longlong)(int)((uVar4 & 0xffff) - uVar6) * 0x18;
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) {
      cVar3 = FUN_142314560(param_3);
      if ((cVar3 != '\0') && (*(char *)(param_3 + 0x24e) != '\0')) {
        local_18 = *(undefined8 *)(param_3 + 0x220);
        fStack_10 = *(float *)(param_3 + 0x228);
        uStack_c = *(undefined4 *)(param_3 + 0x22c);
        if ((*(float *)(param_3 + 0x220) != *param_4) ||
           ((*(float *)(param_3 + 0x224) != param_4[1] || (fStack_10 != param_4[2]))))
        goto LAB_14234d0ce;
      }
      *(uint *)(param_1 + 0x82) =
           *(uint *)(param_1 + 0x82) ^ (*(uint *)(param_1 + 0x82) ^ *param_5) & 1;
      uVar4 = (*(uint *)(param_1 + 0x82) ^ *param_5) & 2 ^ *(uint *)(param_1 + 0x82);
      *(uint *)(param_1 + 0x82) = uVar4;
      *(uint *)(param_1 + 0x82) = (uVar4 ^ *param_5) & 4 ^ uVar4;
      *(uint *)((longlong)param_1 + 0x414) = param_5[1];
      *(uint *)(param_1 + 0x83) = param_5[2];
      FUN_140729f20(param_1 + 0x84,param_5 + 4);
      uVar7 = *(undefined8 *)(param_5 + 0x24);
      goto LAB_14234d0de;
    }
  }
LAB_14234d0ce:
  param_3 = 0;
  uVar7 = 0;
LAB_14234d0de:
  (**(code **)(*param_1 + 0x6d8))(param_1,param_3,uVar7,1);
  if (param_6 != '\0') {
    *(longlong *)((longlong)param_1 + 0x18c) = _DAT_1468b5d90;
    *(undefined4 *)((longlong)param_1 + 0x194) = DAT_1468b5d98;
    param_1[0x6a] = _DAT_1468b5d90;
    *(undefined4 *)(param_1 + 0x6b) = DAT_1468b5d98;
  }
  return;
}



// FUNCTION 14234d140 RoundAcceleration body=191 status=ok
// SIG undefined RoundAcceleration(void)

undefined8 *
UCharacterMovementComponent::RoundAcceleration
          (undefined8 param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  undefined8 uVar2;
  
  param_3[2] = (float)((int)ROUND(param_3[2] * 10.0 + param_3[2] * 10.0 + 0.5) >> 1) * 0.1;
  uVar2 = CONCAT44((float)((int)ROUND(param_3[1] * 10.0 + param_3[1] * 10.0 + 0.5) >> 1) * 0.1,
                   (float)((int)ROUND(*param_3 * 10.0 + *param_3 * 10.0 + 0.5) >> 1) * 0.1);
  *(undefined8 *)param_3 = uVar2;
  fVar1 = param_3[2];
  *param_2 = uVar2;
  *(float *)(param_2 + 1) = fVar1;
  return param_2;
}



// FUNCTION 14234d200 RunTraceTask body=217 status=ok
// SIG undefined RunTraceTask(void)

void `anonymous_namespace'::RunTraceTask(longlong param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeTo
                (param_1 + 0x100,0);
    }
    cVar2 = FWeakObjectPtr::IsValid(param_1);
    if (cVar2 != '\0') {
      uVar1 = FWeakObjectPtr::Get(param_1);
      FUN_14230fac0(uVar1,param_1 + 0xa8,param_1 + 200,param_1 + 0xe0,param_1 + 0x100,
                    *(undefined4 *)(param_1 + 0xb8),param_1 + 8,param_1 + 0x80,param_1 + 0xa0);
    }
    param_1 = param_1 + 0x110;
  }
  return;
}



// FUNCTION 14234d2e0 FUN_14234d2e0 body=2406 status=ok
// SIG undefined FUN_14234d2e0(void)

void FUN_14234d2e0(longlong param_1,int param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  undefined8 uVar8;
  byte *pbVar9;
  undefined8 *in_stack_fffffffffffffca8;
  undefined4 uVar11;
  undefined8 *puVar10;
  undefined8 *in_stack_fffffffffffffcb0;
  undefined4 uVar13;
  undefined8 *puVar12;
  undefined8 *in_stack_fffffffffffffcb8;
  undefined4 uVar15;
  undefined8 *puVar14;
  undefined8 local_328;
  undefined4 local_320;
  undefined8 local_318;
  undefined4 local_310;
  undefined8 local_308;
  undefined4 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined8 local_2d8;
  undefined4 local_2d0;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined8 local_298;
  undefined4 local_290;
  byte local_288 [4];
  undefined4 local_284;
  uint local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined8 local_274;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_260;
  undefined8 local_25c;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_244;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  undefined4 local_210;
  undefined8 local_208;
  undefined8 local_200;
  byte local_1f8 [4];
  undefined4 local_1f4;
  uint local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined8 local_1e4;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b4;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_167 [3];
  undefined4 local_164;
  uint local_160;
  undefined4 local_158;
  undefined8 local_154;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_13c;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d7 [3];
  undefined4 local_d4;
  uint local_d0;
  undefined4 local_c8;
  undefined8 local_c4;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_94;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  do {
    if (param_2 == 0) {
      return;
    }
    plVar1 = (longlong *)(param_1 + 0x100);
    *(undefined4 *)(param_1 + 0x108) = 0;
    if (*(int *)(param_1 + 0x10c) != 0) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<144,8>_>,FDefaultAllocator>::ResizeTo
                (plVar1);
    }
    cVar6 = FWeakObjectPtr::IsValid(param_1);
    uVar13 = (undefined4)((ulonglong)in_stack_fffffffffffffcb0 >> 0x20);
    uVar15 = (undefined4)((ulonglong)in_stack_fffffffffffffcb8 >> 0x20);
    uVar11 = (undefined4)((ulonglong)in_stack_fffffffffffffca8 >> 0x20);
    if (cVar6 == '\0') goto LAB_14234dbe9;
    iVar5 = *(int *)(param_1 + 0xa8);
    if (iVar5 == 0) {
LAB_14234d398:
      in_stack_fffffffffffffcb8 = (undefined8 *)(param_1 + 0xa0);
      in_stack_fffffffffffffcb0 = (undefined8 *)(param_1 + 0x80);
      in_stack_fffffffffffffca8 = (undefined8 *)(param_1 + 8);
      if (*(char *)(param_1 + 0x110) == '\x02') {
        uVar8 = FWeakObjectPtr::Get(param_1);
        puVar10 = (undefined8 *)CONCAT44(uVar11,*(undefined4 *)(param_1 + 0xb8));
        puVar12 = in_stack_fffffffffffffca8;
        puVar14 = in_stack_fffffffffffffcb0;
        FUN_142318d90(uVar8,plVar1,param_1 + 200,param_1 + 0xd4,puVar10,in_stack_fffffffffffffca8,
                      in_stack_fffffffffffffcb0,in_stack_fffffffffffffcb8);
        in_stack_fffffffffffffca8 = puVar10;
        in_stack_fffffffffffffcb0 = puVar12;
        in_stack_fffffffffffffcb8 = puVar14;
      }
      else if (*(char *)(param_1 + 0x110) == '\x01') {
        _guard_xfg_dispatch_icall_nop(local_1f8,0,0x90);
        local_2c8 = *(undefined8 *)(param_1 + 0xd4);
        local_2c0 = *(undefined4 *)(param_1 + 0xdc);
        local_2b8 = *(undefined8 *)(param_1 + 200);
        local_2b0 = *(undefined4 *)(param_1 + 0xd0);
        local_1ec = 0x3f800000;
        uVar8 = FWeakObjectPtr::Get(param_1);
        puVar10 = (undefined8 *)CONCAT44(uVar11,*(undefined4 *)(param_1 + 0xb8));
        puVar12 = in_stack_fffffffffffffca8;
        puVar14 = in_stack_fffffffffffffcb0;
        cVar6 = FUN_142319320(uVar8,local_1f8,&local_2b8,&local_2c8,puVar10,
                              in_stack_fffffffffffffca8,in_stack_fffffffffffffcb0,
                              in_stack_fffffffffffffcb8);
        in_stack_fffffffffffffca8 = puVar10;
        in_stack_fffffffffffffcb0 = puVar12;
        in_stack_fffffffffffffcb8 = puVar14;
        if (cVar6 != '\0') {
          iVar5 = *(int *)(param_1 + 0x108);
          *(int *)(param_1 + 0x108) = iVar5 + 1;
          if (*(int *)(param_1 + 0x10c) < iVar5 + 1) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                      (plVar1,iVar5);
            in_stack_fffffffffffffca8 = puVar10;
            in_stack_fffffffffffffcb0 = puVar12;
          }
          pbVar9 = (byte *)((longlong)iVar5 * 0x90 + *plVar1);
          *pbVar9 = *pbVar9 ^ (local_1f8[0] ^ *pbVar9) & 1;
          *pbVar9 = *pbVar9 ^ (*pbVar9 ^ local_1f8[0]) & 2;
          *(undefined4 *)(pbVar9 + 4) = local_1f4;
          *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) ^ (local_1f0 ^ *(uint *)(pbVar9 + 8)) & 1;
          *(undefined4 *)(pbVar9 + 0xc) = local_1ec;
          *(undefined4 *)(pbVar9 + 0x10) = local_1e8;
          *(undefined8 *)(pbVar9 + 0x14) = local_1e4;
          *(undefined4 *)(pbVar9 + 0x1c) = local_1dc;
          *(undefined8 *)(pbVar9 + 0x20) = local_1d8;
          *(undefined4 *)(pbVar9 + 0x28) = local_1d0;
          *(undefined8 *)(pbVar9 + 0x2c) = local_1cc;
          *(undefined4 *)(pbVar9 + 0x34) = local_1c4;
          *(undefined8 *)(pbVar9 + 0x38) = local_1c0;
          *(undefined4 *)(pbVar9 + 0x40) = local_1b8;
          *(undefined8 *)(pbVar9 + 0x44) = local_1b4;
          *(undefined4 *)(pbVar9 + 0x4c) = local_1ac;
          *(undefined8 *)(pbVar9 + 0x50) = local_1a8;
          *(undefined4 *)(pbVar9 + 0x58) = local_1a0;
          *(undefined4 *)(pbVar9 + 0x5c) = local_19c;
          *(undefined4 *)(pbVar9 + 0x60) = local_198;
          *(undefined4 *)(pbVar9 + 100) = local_194;
          *(undefined4 *)(pbVar9 + 0x68) = local_190;
          *(undefined4 *)(pbVar9 + 0x6c) = local_18c;
          *(undefined4 *)(pbVar9 + 0x70) = local_188;
          *(undefined4 *)(pbVar9 + 0x74) = local_184;
          *(undefined4 *)(pbVar9 + 0x78) = local_180;
          *(undefined8 *)(pbVar9 + 0x80) = local_178;
          *(undefined8 *)(pbVar9 + 0x88) = local_170;
          in_stack_fffffffffffffcb8 = puVar14;
        }
      }
      else {
        local_2a8 = *(undefined8 *)(param_1 + 0xd4);
        local_2a0 = *(undefined4 *)(param_1 + 0xdc);
        local_298 = *(undefined8 *)(param_1 + 200);
        local_290 = *(undefined4 *)(param_1 + 0xd0);
        uVar8 = FWeakObjectPtr::Get(param_1);
        cVar6 = FUN_142319a60(uVar8,&local_298,&local_2a8,*(undefined4 *)(param_1 + 0xb8),
                              in_stack_fffffffffffffca8,in_stack_fffffffffffffcb0,
                              in_stack_fffffffffffffcb8);
        if (cVar6 != '\0') {
          _guard_xfg_dispatch_icall_nop(local_d7,0,0x8f);
          iVar5 = *(int *)(param_1 + 0x108);
          iVar7 = iVar5 + 1;
          *(int *)(param_1 + 0x108) = iVar7;
          if (*(int *)(param_1 + 0x10c) < iVar7) {
            TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar1);
          }
          pbVar9 = (byte *)((longlong)iVar5 * 0x90 + *plVar1);
          *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) & 0xfffffffe;
          *(undefined4 *)(pbVar9 + 0x10) = local_c8;
          *pbVar9 = *pbVar9 & 0xfd | 1;
          *(undefined4 *)(pbVar9 + 4) = local_d4;
          *(undefined8 *)(pbVar9 + 0x20) = local_b8;
          *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) | local_d0 & 1;
          *(undefined8 *)(pbVar9 + 0x2c) = local_ac;
          *(undefined8 *)(pbVar9 + 0x38) = local_a0;
          *(undefined8 *)(pbVar9 + 0x44) = local_94;
          *(undefined8 *)(pbVar9 + 0x50) = local_88;
          *(undefined8 *)(pbVar9 + 0x14) = local_c4;
          *(undefined4 *)(pbVar9 + 0x1c) = local_bc;
          *(undefined4 *)(pbVar9 + 0x28) = local_b0;
          *(undefined4 *)(pbVar9 + 0x34) = local_a4;
          *(undefined4 *)(pbVar9 + 0x40) = local_98;
          *(undefined4 *)(pbVar9 + 0x4c) = local_8c;
          *(undefined4 *)(pbVar9 + 0x58) = local_80;
          *(undefined4 *)(pbVar9 + 0x60) = local_78;
          *(undefined4 *)(pbVar9 + 0x5c) = local_7c;
          pbVar9[0xc] = 0;
          pbVar9[0xd] = 0;
          pbVar9[0xe] = 0x80;
          pbVar9[0xf] = 0x3f;
          *(undefined4 *)(pbVar9 + 100) = local_74;
          *(undefined4 *)(pbVar9 + 0x68) = local_70;
          *(undefined4 *)(pbVar9 + 0x6c) = local_6c;
          *(undefined4 *)(pbVar9 + 0x70) = local_68;
          *(undefined4 *)(pbVar9 + 0x74) = local_64;
          *(undefined4 *)(pbVar9 + 0x78) = local_60;
          *(undefined8 *)(pbVar9 + 0x80) = local_58;
          uVar8 = local_50;
          goto LAB_14234dbe2;
        }
      }
    }
    else {
      if (iVar5 != 1) {
        if ((iVar5 == 2) || (iVar5 == 3)) {
          fVar4 = *(float *)(param_1 + 0xac);
joined_r0x00014234d411:
          if (0.0001 < fVar4) goto LAB_14234d413;
        }
        goto LAB_14234d398;
      }
      if ((*(float *)(param_1 + 0xac) <= 0.0001) && (*(float *)(param_1 + 0xb0) <= 0.0001)) {
        fVar4 = *(float *)(param_1 + 0xb4);
        goto joined_r0x00014234d411;
      }
LAB_14234d413:
      lVar2 = param_1 + 0xa0;
      lVar3 = param_1 + 0x80;
      in_stack_fffffffffffffcb8 = (undefined8 *)(param_1 + 8);
      if (*(char *)(param_1 + 0x110) == '\x02') {
        local_328 = *(undefined8 *)(param_1 + 0xd4);
        local_320 = *(undefined4 *)(param_1 + 0xdc);
        local_318 = *(undefined8 *)(param_1 + 200);
        local_310 = *(undefined4 *)(param_1 + 0xd0);
        uVar8 = FWeakObjectPtr::Get(param_1);
        puVar12 = (undefined8 *)CONCAT44(uVar15,*(undefined4 *)(param_1 + 0xb8));
        in_stack_fffffffffffffcb0 = &local_328;
        in_stack_fffffffffffffca8 = &local_318;
        FUN_14230fc20(uVar8,param_1 + 0xa8,param_1 + 0xe0,plVar1,in_stack_fffffffffffffca8,
                      in_stack_fffffffffffffcb0,puVar12,in_stack_fffffffffffffcb8,lVar3,lVar2);
        in_stack_fffffffffffffcb8 = puVar12;
      }
      else {
        if (*(char *)(param_1 + 0x110) == '\x01') {
          _guard_xfg_dispatch_icall_nop(local_288,0,0x90);
          local_308 = *(undefined8 *)(param_1 + 0xd4);
          local_300 = *(undefined4 *)(param_1 + 0xdc);
          local_2f8 = *(undefined8 *)(param_1 + 200);
          local_2f0 = *(undefined4 *)(param_1 + 0xd0);
          local_27c = 0x3f800000;
          uVar8 = FWeakObjectPtr::Get(param_1);
          puVar12 = (undefined8 *)CONCAT44(uVar15,*(undefined4 *)(param_1 + 0xb8));
          in_stack_fffffffffffffcb0 = &local_308;
          in_stack_fffffffffffffca8 = &local_2f8;
          cVar6 = FUN_1423103c0(uVar8,param_1 + 0xa8,param_1 + 0xe0,local_288,
                                in_stack_fffffffffffffca8,in_stack_fffffffffffffcb0,puVar12,
                                in_stack_fffffffffffffcb8,lVar3,lVar2);
          in_stack_fffffffffffffcb8 = puVar12;
          if (cVar6 != '\0') {
            iVar5 = *(int *)(param_1 + 0x108);
            *(int *)(param_1 + 0x108) = iVar5 + 1;
            if (*(int *)(param_1 + 0x10c) < iVar5 + 1) {
              TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow
                        (plVar1,iVar5);
            }
            pbVar9 = (byte *)((longlong)iVar5 * 0x90 + *plVar1);
            *pbVar9 = *pbVar9 ^ (local_288[0] ^ *pbVar9) & 1;
            *pbVar9 = *pbVar9 ^ (local_288[0] ^ *pbVar9) & 2;
            *(undefined4 *)(pbVar9 + 4) = local_284;
            *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) ^ (*(uint *)(pbVar9 + 8) ^ local_280) & 1;
            *(undefined4 *)(pbVar9 + 0xc) = local_27c;
            *(undefined4 *)(pbVar9 + 0x10) = local_278;
            *(undefined8 *)(pbVar9 + 0x14) = local_274;
            *(undefined4 *)(pbVar9 + 0x1c) = local_26c;
            *(undefined8 *)(pbVar9 + 0x20) = local_268;
            *(undefined4 *)(pbVar9 + 0x28) = local_260;
            *(undefined8 *)(pbVar9 + 0x2c) = local_25c;
            *(undefined4 *)(pbVar9 + 0x34) = local_254;
            *(undefined8 *)(pbVar9 + 0x38) = local_250;
            *(undefined4 *)(pbVar9 + 0x40) = local_248;
            *(undefined8 *)(pbVar9 + 0x44) = local_244;
            *(undefined4 *)(pbVar9 + 0x4c) = local_23c;
            *(undefined8 *)(pbVar9 + 0x50) = local_238;
            *(undefined4 *)(pbVar9 + 0x58) = local_230;
            *(undefined4 *)(pbVar9 + 0x5c) = local_22c;
            *(undefined4 *)(pbVar9 + 0x60) = local_228;
            *(undefined4 *)(pbVar9 + 100) = local_224;
            *(undefined4 *)(pbVar9 + 0x68) = local_220;
            *(undefined4 *)(pbVar9 + 0x6c) = local_21c;
            *(undefined4 *)(pbVar9 + 0x70) = local_218;
            *(undefined4 *)(pbVar9 + 0x74) = local_214;
            *(undefined4 *)(pbVar9 + 0x78) = local_210;
            *(undefined8 *)(pbVar9 + 0x80) = local_208;
            *(undefined8 *)(pbVar9 + 0x88) = local_200;
            in_stack_fffffffffffffcb8 = puVar12;
          }
          goto LAB_14234dbe9;
        }
        local_2e8 = *(undefined8 *)(param_1 + 0xd4);
        local_2e0 = *(undefined4 *)(param_1 + 0xdc);
        local_2d8 = *(undefined8 *)(param_1 + 200);
        local_2d0 = *(undefined4 *)(param_1 + 0xd0);
        uVar8 = FWeakObjectPtr::Get(param_1);
        in_stack_fffffffffffffcb0 = (undefined8 *)CONCAT44(uVar13,*(undefined4 *)(param_1 + 0xb8));
        in_stack_fffffffffffffca8 = &local_2e8;
        cVar6 = FUN_142310ba0(uVar8,param_1 + 0xa8,param_1 + 0xe0,&local_2d8,
                              in_stack_fffffffffffffca8,in_stack_fffffffffffffcb0,
                              in_stack_fffffffffffffcb8,lVar3,lVar2);
        if (cVar6 == '\0') goto LAB_14234dbe9;
        _guard_xfg_dispatch_icall_nop(local_167,0,0x8f);
        iVar5 = *(int *)(param_1 + 0x108);
        iVar7 = iVar5 + 1;
        *(int *)(param_1 + 0x108) = iVar7;
        if (*(int *)(param_1 + 0x10c) < iVar7) {
          TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(plVar1);
        }
        pbVar9 = (byte *)((longlong)iVar5 * 0x90 + *plVar1);
        *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) & 0xfffffffe;
        *(undefined4 *)(pbVar9 + 0x10) = local_158;
        *pbVar9 = *pbVar9 & 0xfd | 1;
        *(undefined4 *)(pbVar9 + 4) = local_164;
        *(undefined8 *)(pbVar9 + 0x20) = local_148;
        *(uint *)(pbVar9 + 8) = *(uint *)(pbVar9 + 8) | local_160 & 1;
        *(undefined8 *)(pbVar9 + 0x2c) = local_13c;
        *(undefined8 *)(pbVar9 + 0x38) = local_130;
        *(undefined8 *)(pbVar9 + 0x44) = local_124;
        *(undefined8 *)(pbVar9 + 0x50) = local_118;
        *(undefined8 *)(pbVar9 + 0x14) = local_154;
        *(undefined4 *)(pbVar9 + 0x1c) = local_14c;
        *(undefined4 *)(pbVar9 + 0x28) = local_140;
        *(undefined4 *)(pbVar9 + 0x34) = local_134;
        *(undefined4 *)(pbVar9 + 0x40) = local_128;
        *(undefined4 *)(pbVar9 + 0x4c) = local_11c;
        *(undefined4 *)(pbVar9 + 0x58) = local_110;
        *(undefined4 *)(pbVar9 + 0x60) = local_108;
        *(undefined4 *)(pbVar9 + 0x5c) = local_10c;
        pbVar9[0xc] = 0;
        pbVar9[0xd] = 0;
        pbVar9[0xe] = 0x80;
        pbVar9[0xf] = 0x3f;
        *(undefined4 *)(pbVar9 + 100) = local_104;
        *(undefined4 *)(pbVar9 + 0x68) = local_100;
        *(undefined4 *)(pbVar9 + 0x6c) = local_fc;
        *(undefined4 *)(pbVar9 + 0x70) = local_f8;
        *(undefined4 *)(pbVar9 + 0x74) = local_f4;
        *(undefined4 *)(pbVar9 + 0x78) = local_f0;
        *(undefined8 *)(pbVar9 + 0x80) = local_e8;
        uVar8 = local_e0;
LAB_14234dbe2:
        *(undefined8 *)(pbVar9 + 0x88) = uVar8;
      }
    }
LAB_14234dbe9:
    param_2 = param_2 + -1;
    param_1 = param_1 + 0x120;
  } while( true );
}



// FUNCTION 14234dc50 FUN_14234dc50 body=1198 status=ok
// SIG undefined FUN_14234dc50(void)

void FUN_14234dc50(longlong *param_1)

{
  float fVar1;
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
  undefined8 uVar13;
  longlong lVar14;
  undefined1 auVar15 [16];
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined8 uVar28;
  char cVar29;
  undefined4 uVar30;
  int iVar31;
  undefined8 *puVar32;
  uint *puVar33;
  float *pfVar34;
  undefined1 local_1d8 [16];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
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
  undefined1 local_168 [8];
  float fStack_160;
  float fStack_15c;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [64];
  undefined1 local_f8 [224];
  
  cVar29 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar29 != '\0') {
    uVar13 = *(undefined8 *)(param_1[0x44] + 0x4d8);
    cVar29 = FUN_142314560(uVar13);
    if ((cVar29 != '\0') && (cVar29 = FUN_1422358f0(param_1[0x44]), cVar29 == '\0')) {
      uVar30 = FUN_142311f90(uVar13,*(undefined8 *)(param_1[0x44] + 0x4e0),(longlong)param_1 + 0x24c
                             ,param_1 + 0x4c);
      lVar14 = param_1[0x2f];
      local_1c8 = *(float *)(lVar14 + 0x220) - *(float *)((longlong)param_1 + 0x24c);
      local_1c4 = *(float *)(lVar14 + 0x224) - *(float *)(param_1 + 0x4a);
      local_1c0 = *(float *)(lVar14 + 0x228) - *(float *)((longlong)param_1 + 0x254);
      if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x2000) == 0) {
        puVar33 = (uint *)FQuatRotationMatrix::FQuatRotationMatrix(local_138,param_1 + 0x4c);
        local_1d8 = ZEXT416(*puVar33);
        fVar1 = (float)puVar33[4];
        fVar2 = (float)puVar33[8];
        fVar3 = (float)puVar33[0xc];
        fVar4 = (float)puVar33[9];
        fVar5 = (float)puVar33[0xd];
        fVar6 = (float)puVar33[6];
        fVar7 = (float)puVar33[10];
        fVar8 = (float)puVar33[0xe];
        fVar9 = (float)puVar33[7];
        local_158 = ZEXT416(puVar33[2]);
        local_148 = ZEXT416(puVar33[3]);
        fVar10 = (float)puVar33[0xb];
        fVar11 = (float)puVar33[0xf];
        local_1b8 = *(undefined8 *)(lVar14 + 0x210);
        uStack_1b0 = *(undefined8 *)(lVar14 + 0x218);
        _local_168 = ZEXT416(puVar33[1]);
        fVar12 = (float)puVar33[5];
        pfVar34 = (float *)FQuatRotationMatrix::FQuatRotationMatrix(local_f8,&local_1b8);
        fVar16 = *pfVar34;
        fVar17 = pfVar34[1];
        fVar18 = pfVar34[2];
        fVar19 = pfVar34[3];
        uVar13 = *(undefined8 *)(pfVar34 + 0xc);
        uVar28 = *(undefined8 *)(pfVar34 + 0xe);
        fVar20 = pfVar34[4];
        fVar21 = pfVar34[5];
        fVar22 = pfVar34[6];
        fVar23 = pfVar34[7];
        fVar24 = pfVar34[8];
        fVar25 = pfVar34[9];
        fVar26 = pfVar34[10];
        fVar27 = pfVar34[0xb];
        local_168._4_4_ = fVar12;
        fStack_160 = fVar4;
        fStack_15c = fVar5;
        local_1a8 = fVar17 * (float)local_168._0_4_ + fVar16 * (float)local_1d8._0_4_ +
                    fVar18 * (float)local_158._0_4_ + fVar19 * (float)local_148._0_4_;
        fStack_1a4 = fVar17 * fVar12 + fVar16 * fVar1 + fVar18 * fVar6 + fVar19 * fVar9;
        fStack_1a0 = fVar17 * fVar4 + fVar16 * fVar2 + fVar18 * fVar7 + fVar19 * fVar10;
        fStack_19c = fVar17 * fVar5 + fVar16 * fVar3 + fVar18 * fVar8 + fVar19 * fVar11;
        local_198 = fVar21 * (float)local_168._0_4_ + fVar20 * (float)local_1d8._0_4_ +
                    fVar22 * (float)local_158._0_4_ + fVar23 * (float)local_148._0_4_;
        fStack_194 = fVar21 * fVar12 + fVar20 * fVar1 + fVar22 * fVar6 + fVar23 * fVar9;
        fStack_190 = fVar21 * fVar4 + fVar20 * fVar2 + fVar22 * fVar7 + fVar23 * fVar10;
        fStack_18c = fVar21 * fVar5 + fVar20 * fVar3 + fVar22 * fVar8 + fVar23 * fVar11;
        local_188 = fVar25 * (float)local_168._0_4_ + fVar24 * (float)local_1d8._0_4_ +
                    fVar26 * (float)local_158._0_4_ + fVar27 * (float)local_148._0_4_;
        fStack_184 = fVar25 * fVar12 + fVar24 * fVar1 + fVar26 * fVar6 + fVar27 * fVar9;
        fStack_180 = fVar25 * fVar4 + fVar24 * fVar2 + fVar26 * fVar7 + fVar27 * fVar10;
        fStack_17c = fVar25 * fVar5 + fVar24 * fVar3 + fVar26 * fVar8 + fVar27 * fVar11;
        local_1b8._0_4_ = (float)uVar13;
        local_1b8._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
        uStack_1b0._0_4_ = (float)uVar28;
        uStack_1b0._4_4_ = (float)((ulonglong)uVar28 >> 0x20);
        local_178 = (float)local_1b8 * (float)local_1d8._0_4_ +
                    local_1b8._4_4_ * (float)local_168._0_4_ +
                    (float)uStack_1b0 * (float)local_158._0_4_ +
                    uStack_1b0._4_4_ * (float)local_148._0_4_;
        fStack_174 = (float)local_1b8 * fVar1 + local_1b8._4_4_ * fVar12 + (float)uStack_1b0 * fVar6
                     + uStack_1b0._4_4_ * fVar9;
        fStack_170 = (float)local_1b8 * fVar2 + local_1b8._4_4_ * fVar4 + (float)uStack_1b0 * fVar7
                     + uStack_1b0._4_4_ * fVar10;
        fStack_16c = (float)local_1b8 * fVar3 + local_1b8._4_4_ * fVar5 + (float)uStack_1b0 * fVar8
                     + uStack_1b0._4_4_ * fVar11;
        local_1b8 = uVar13;
        uStack_1b0 = uVar28;
        FMatrix::Rotator(&local_1a8,local_1d8);
        FUN_14231c3c0(param_1[0x44],&local_1c8,local_1d8,1);
      }
      else {
        fVar1 = *(float *)(lVar14 + 0x210);
        local_1b8 = *(undefined8 *)(lVar14 + 0x210);
        fVar2 = *(float *)(lVar14 + 0x218);
        uStack_1b0 = *(undefined8 *)(lVar14 + 0x218);
        auVar15._4_4_ = -(uint)(*(float *)(lVar14 + 0x254) != *(float *)(lVar14 + 0x214));
        auVar15._0_4_ = -(uint)(*(float *)(lVar14 + 0x250) != fVar1);
        auVar15._8_4_ = -(uint)(*(float *)(lVar14 + 600) != fVar2);
        auVar15._12_4_ = -(uint)(*(float *)(lVar14 + 0x25c) != *(float *)(lVar14 + 0x21c));
        iVar31 = movmskps(uVar30,auVar15);
        if (iVar31 != 0) {
          *(float *)(lVar14 + 0x250) = fVar1;
          *(float *)(lVar14 + 0x254) = *(float *)(lVar14 + 0x214);
          *(float *)(lVar14 + 600) = fVar2;
          *(float *)(lVar14 + 0x25c) = *(float *)(lVar14 + 0x21c);
          puVar32 = (undefined8 *)FQuat::Rotator(&local_1b8,local_168);
          *(undefined8 *)(lVar14 + 0x260) = *puVar32;
          *(undefined4 *)(lVar14 + 0x268) = *(undefined4 *)(puVar32 + 1);
        }
        local_1d8._0_12_ = *(undefined1 (*) [12])(lVar14 + 0x260);
        FUN_14231c3c0(param_1[0x44],&local_1c8,local_1d8,0);
      }
    }
  }
  return;
}



// FUNCTION 14234e100 ScaleInputAcceleration body=287 status=ok
// SIG undefined ScaleInputAcceleration(void)

float * UCharacterMovementComponent::ScaleInputAcceleration
                  (longlong *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float local_48;
  
  local_48 = *param_3;
  fVar4 = param_3[1];
  fVar5 = param_3[2];
  fVar1 = local_48 * local_48 + fVar4 * fVar4 + fVar5 * fVar5;
  if (fVar1 <= 1.0) {
    fVar5 = param_3[2];
    fVar4 = (float)((ulonglong)*(undefined8 *)param_3 >> 0x20);
    local_48 = (float)*(undefined8 *)param_3;
  }
  else {
    auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
    fVar2 = auVar3._0_4_;
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    fVar2 = fVar2 + fVar2 * (0.5 - fVar1 * 0.5 * fVar2 * fVar2);
    local_48 = local_48 * fVar2;
    fVar4 = fVar4 * fVar2;
    fVar5 = fVar5 * fVar2;
  }
  fVar1 = (float)(**(code **)(*param_1 + 0x6b8))();
  *param_2 = local_48 * fVar1;
  param_2[1] = fVar4 * fVar1;
  param_2[2] = fVar5 * fVar1;
  return param_2;
}



// FUNCTION 14234e220 FUN_14234e220 body=1411 status=ok
// SIG undefined FUN_14234e220(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234e220(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 in_stack_fffffffffffffe58;
  undefined8 in_stack_fffffffffffffe60;
  undefined8 in_stack_fffffffffffffe70;
  undefined4 uVar20;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  float local_140;
  undefined1 local_138 [272];
  
  uVar20 = (undefined4)((ulonglong)in_stack_fffffffffffffe70 >> 0x20);
  uVar18 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  uVar19 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  plVar1 = param_1 + -0x43;
  cVar6 = (**(code **)(*plVar1 + 0x5c0))(plVar1);
  if (cVar6 != '\0') {
    lVar9 = param_1[0x80];
    if (lVar9 == 0) {
      lVar9 = (**(code **)(*param_1 + 0x30))(param_1);
      param_1[0x80] = lVar9;
    }
    if (0.0 < *(float *)(lVar9 + 0x10)) {
      lVar10 = FUN_14046f570(plVar1);
      fVar2 = *(float *)(lVar10 + 0x790);
      if (*(char *)(lVar9 + 0x50) == '\0') {
        fVar3 = *(float *)((longlong)param_1 + 0x1e4);
        fVar14 = *(float *)(param_1 + 0x3d);
        if ((*(uint *)(param_1 + 0x1d) & 0x2000) == 0) {
          if (fVar14 <= fVar3) {
            fVar14 = fVar3;
          }
        }
        else if (fVar3 <= fVar14) {
          fVar14 = fVar3;
        }
        if (fVar14 < fVar2 - *(float *)((longlong)param_1 + 0x17c)) {
          *(float *)((longlong)param_1 + 0x17c) = fVar2;
          cVar6 = FUN_1423146c0(param_1[1]);
          cVar7 = FUN_142340bf0(plVar1);
          fVar2 = (float)DAT_146af0030;
          fVar3 = DAT_146af0030._4_4_;
          fVar14 = DAT_146af0030._8_4_;
          if (cVar7 == '\0') {
            if (cVar6 == '\0') {
              if (((*(float *)(lVar9 + 0x24) == 0.0) && (*(float *)(lVar9 + 0x28) == 0.0)) &&
                 (*(float *)(lVar9 + 0x2c) == 0.0)) {
                bVar5 = true;
              }
              else {
                bVar5 = false;
              }
              lVar10 = *(longlong *)(lVar9 + 0x40);
              lVar4 = *plVar1;
              if (bVar5) {
                local_148 = *(undefined8 *)(lVar9 + 0x18);
                local_140 = *(float *)(lVar9 + 0x20);
                uVar8 = FUN_142344c40(plVar1);
                (**(code **)(lVar4 + 0xa20))
                          (plVar1,*(undefined4 *)(lVar9 + 0x10),&local_148,lVar10,
                           *(undefined8 *)(lVar9 + 0x48),lVar10 != 0,*(undefined1 *)(lVar9 + 0x51),
                           uVar8);
              }
              else {
                local_148 = *(undefined8 *)(lVar9 + 0x24);
                local_140 = *(float *)(lVar9 + 0x2c);
                local_158 = *(undefined8 *)(lVar9 + 0x18);
                local_150 = *(float *)(lVar9 + 0x20);
                uVar8 = FUN_142344c40(plVar1);
                (**(code **)(lVar4 + 0xa10))
                          (plVar1,*(undefined4 *)(lVar9 + 0x10),&local_158,&local_148,lVar10,
                           *(undefined8 *)(lVar9 + 0x48),lVar10 != 0,*(undefined1 *)(lVar9 + 0x51),
                           uVar8);
              }
            }
            else {
              uVar11 = *(undefined8 *)*(undefined1 (*) [12])(lVar9 + 0x30);
              auVar13._12_4_ = 0;
              auVar13._0_12_ = *(undefined1 (*) [12])(lVar9 + 0x30);
              auVar13 = divps(auVar13,_DAT_146af0030);
              fVar15 = (float)uVar11 - (float)(int)auVar13._0_4_ * fVar2;
              fVar16 = (float)((ulonglong)uVar11 >> 0x20) - (float)(int)auVar13._4_4_ * fVar3;
              fVar17 = *(float *)(lVar9 + 0x38) - (float)(int)auVar13._8_4_ * fVar14;
              fVar15 = (float)(((uint)(fVar15 + fVar2) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                              (uint)(fVar15 + fVar2));
              fVar16 = (float)(((uint)(fVar16 + fVar3) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                              (uint)(fVar16 + fVar3));
              fVar17 = (float)(((uint)(fVar17 + fVar14) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                              (uint)(fVar17 + fVar14));
              local_140 = (float)(((uint)(fVar17 - fVar14) ^ (uint)fVar17) &
                                  -(uint)(fRam0000000146af0028 < fVar17) ^ (uint)fVar17) *
                          0.0055555557;
              local_148 = CONCAT44((float)(((uint)(fVar16 - fVar3) ^ (uint)fVar16) &
                                           -(uint)(fRam0000000146af0024 < fVar16) ^ (uint)fVar16) *
                                   0.0055555557,
                                   (float)(((uint)(fVar15 - fVar2) ^ (uint)fVar15) &
                                           -(uint)(_DAT_146af0020 < fVar15) ^ (uint)fVar15) *
                                   0.0055555557);
              local_158 = *(undefined8 *)(lVar9 + 0x18);
              local_150 = *(float *)(lVar9 + 0x20);
              lVar10 = FUN_142312520(param_1[1]);
              if (*(char *)(lVar10 + 0x184) == '\0') {
                uVar19 = *(undefined4 *)(lVar10 + 0x128);
              }
              else {
                uVar19 = *(undefined4 *)(lVar10 + 0x180);
              }
              lVar10 = *(longlong *)(lVar9 + 0x40);
              lVar4 = *plVar1;
              uVar8 = FUN_142344c40(plVar1);
              (**(code **)(lVar4 + 0xa30))
                        (plVar1,*(undefined4 *)(lVar9 + 0x10),uVar19,&local_158,&local_148,
                         CONCAT44(uVar18,*(undefined4 *)(lVar9 + 0x2c)),lVar10,
                         *(undefined8 *)(lVar9 + 0x48),lVar10 != 0,*(undefined1 *)(lVar9 + 0x51),
                         uVar8);
            }
          }
          else {
            uVar11 = *(undefined8 *)*(undefined1 (*) [12])(lVar9 + 0x30);
            auVar12._12_4_ = 0;
            auVar12._0_12_ = *(undefined1 (*) [12])(lVar9 + 0x30);
            auVar13 = divps(auVar12,_DAT_146af0030);
            fVar15 = (float)uVar11 - (float)(int)auVar13._0_4_ * fVar2;
            fVar16 = (float)((ulonglong)uVar11 >> 0x20) - (float)(int)auVar13._4_4_ * fVar3;
            fVar17 = *(float *)(lVar9 + 0x38) - (float)(int)auVar13._8_4_ * fVar14;
            fVar15 = (float)(((uint)(fVar15 + fVar2) ^ (uint)fVar15) & -(uint)(0.0 <= fVar15) ^
                            (uint)(fVar15 + fVar2));
            fVar16 = (float)(((uint)(fVar16 + fVar3) ^ (uint)fVar16) & -(uint)(0.0 <= fVar16) ^
                            (uint)(fVar16 + fVar3));
            fVar17 = (float)(((uint)(fVar17 + fVar14) ^ (uint)fVar17) & -(uint)(0.0 <= fVar17) ^
                            (uint)(fVar17 + fVar14));
            local_150 = (float)(((uint)(fVar17 - fVar14) ^ (uint)fVar17) &
                                -(uint)(fRam0000000146af0028 < fVar17) ^ (uint)fVar17) *
                        0.0055555557;
            local_158 = CONCAT44((float)(((uint)(fVar16 - fVar3) ^ (uint)fVar16) &
                                         -(uint)(fRam0000000146af0024 < fVar16) ^ (uint)fVar16) *
                                 0.0055555557,
                                 (float)(((uint)(fVar15 - fVar2) ^ (uint)fVar15) &
                                         -(uint)(_DAT_146af0020 < fVar15) ^ (uint)fVar15) *
                                 0.0055555557);
            if (cVar6 == '\0') {
              uVar18 = 0xbf800000;
            }
            else {
              lVar10 = FUN_142312520(param_1[1]);
              if (*(char *)(lVar10 + 0x184) == '\0') {
                uVar18 = *(undefined4 *)(lVar10 + 0x128);
              }
              else {
                uVar18 = *(undefined4 *)(lVar10 + 0x180);
              }
            }
            lVar10 = *plVar1;
            lVar4 = *(longlong *)(lVar9 + 0x40);
            local_148 = local_158;
            local_158 = *(undefined8 *)(lVar9 + 0x18);
            local_140 = local_150;
            local_150 = *(float *)(lVar9 + 0x20);
            uVar8 = FUN_142344c40(plVar1);
            uVar11 = FUN_142326440(local_138,param_1 + 0x82);
            (**(code **)(lVar10 + 0xa40))
                      (plVar1,*(undefined4 *)(lVar9 + 0x10),uVar11,cVar6,CONCAT44(uVar19,uVar18),
                       &local_158,&local_148,CONCAT44(uVar20,*(undefined4 *)(lVar9 + 0x2c)),lVar4,
                       *(undefined8 *)(lVar9 + 0x48),lVar4 != 0,*(undefined1 *)(lVar9 + 0x51),uVar8)
            ;
          }
        }
      }
      else if (*(float *)(param_1 + 0x3c) <= fVar2 - *(float *)(param_1 + 0x2f) &&
               fVar2 - *(float *)(param_1 + 0x2f) != *(float *)(param_1 + 0x3c)) {
        *(float *)(param_1 + 0x2f) = fVar2;
        (**(code **)(*plVar1 + 0xa00))(plVar1,*(undefined4 *)(lVar9 + 0x10));
      }
      *(uint *)(lVar9 + 0x6c) = *(uint *)(lVar9 + 0x6c) & 0xfffffffe;
      *(undefined4 *)(lVar9 + 0x10) = 0;
      *(undefined1 *)(lVar9 + 0x50) = 0;
    }
  }
  return;
}



// FUNCTION 14234e7b0 FUN_14234e7b0 body=8 status=ok
// SIG undefined FUN_14234e7b0(void)

void FUN_14234e7b0(longlong param_1)

{
  *(byte *)(param_1 + 0xb9) = *(byte *)(param_1 + 0xb9) & 0xfe;
  return;
}



// FUNCTION 14234e7c0 SendRenderDynamicData_Concurrent body=8 status=ok
// SIG undefined SendRenderDynamicData_Concurrent(void)

void UActorComponent::SendRenderDynamicData_Concurrent(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0x7f;
  return;
}



// FUNCTION 14234e7d0 FUN_14234e7d0 body=115 status=ok
// SIG undefined FUN_14234e7d0(void)

void FUN_14234e7d0(longlong param_1,longlong param_2)

{
  char cVar1;
  
  FUN_141763960();
  if (*(char *)(param_1 + 0x14c) != '\0') {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
      return;
    }
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xef;
    *(undefined1 *)(param_1 + 0xca) = 0;
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) &&
     ((((*(ulonglong *)(param_2 + 0x30) >> 0x16 & 1) != 0 ||
       ((*(ulonglong *)(param_2 + 0x30) >> 0xc & 1) == 0)) &&
      (cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar1 == '\0')))) {
    *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 8;
  }
  return;
}



// FUNCTION 14234e850 FUN_14234e850 body=180 status=ok
// SIG undefined FUN_14234e850(void)

void FUN_14234e850(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  
  FUN_141763960();
  if (*(char *)(param_1 + 0x14c) != '\0') {
    if ((*(byte *)(param_2 + 0x28) & 1) == 0) goto LAB_14234e8b8;
    *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) & 0xef;
    *(undefined1 *)(param_1 + 0xca) = 0;
  }
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) &&
     (((*(ulonglong *)(param_2 + 0x30) >> 0x16 & 1) != 0 ||
      ((*(ulonglong *)(param_2 + 0x30) >> 0xc & 1) == 0)))) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar1 == '\0') {
      *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) | 8;
    }
  }
LAB_14234e8b8:
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0088);
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0088);
    if ((iVar2 < 0x16) && (*(float *)(param_1 + 800) != 10000.0)) {
      *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) | 0x20;
    }
  }
  return;
}



// FUNCTION 14234e910 FUN_14234e910 body=89 status=ok
// SIG undefined FUN_14234e910(void)

void FUN_14234e910(longlong param_1,longlong param_2)

{
  FUN_142396660();
  if ((((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0xe1)) &&
     ((*(float *)(param_1 + 0x718) != 0.0 || (*(int *)(param_2 + 0x40) < 0xd7)))) {
    *(float *)(param_1 + 0x710) = *(float *)(param_1 + 0x718);
    *(undefined4 *)(param_1 + 0x718) = 0;
  }
  return;
}



// FUNCTION 14234e970 FUN_14234e970 body=54 status=ok
// SIG undefined FUN_14234e970(void)

void FUN_14234e970(longlong param_1,longlong param_2)

{
  FUN_1423760b0();
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && (*(int *)(param_2 + 0x40) < 0x201)) {
    *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) | 8;
  }
  return;
}



// FUNCTION 14234e9b0 FUN_14234e9b0 body=334 status=ok
// SIG undefined FUN_14234e9b0(void)

undefined8 FUN_14234e9b0(longlong param_1)

{
  longlong lVar1;
  byte bVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  longlong *plVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float *in_stack_00000028;
  byte in_stack_00000048;
  undefined8 local_58;
  float local_50;
  float local_40;
  
  if ((*(uint *)(param_1 + 0x4b4) & 0x100) == 0) {
    lVar1 = *(longlong *)(param_1 + 0x178);
    fVar9 = *(float *)(lVar1 + 0x220) - *in_stack_00000028;
    fVar7 = *(float *)(lVar1 + 0x224) - in_stack_00000028[1];
    fVar8 = *(float *)(lVar1 + 0x228) - in_stack_00000028[2];
    local_58 = CONCAT44(fVar7,fVar9);
    local_50 = fVar8;
    local_40 = fVar8;
    plVar3 = (longlong *)FUN_14293b120();
    plVar6 = (longlong *)plVar3[0x1f];
    if (plVar6 == (longlong *)0x0) {
      (**(code **)(*plVar3 + 0x368))(plVar3);
      plVar6 = (longlong *)plVar3[0x1f];
    }
    register0x00000020 = (BADSPACEBASE *)(**(code **)(*plVar6 + 0x708))(plVar6,&local_58);
    if ((char)register0x00000020 != '\0') {
      *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) & 0xffffdfff;
      uVar4 = 0;
      if (*(float *)(param_1 + 0x404) * *(float *)(param_1 + 0x404) <
          fVar7 * fVar7 + fVar9 * fVar9 + fVar8 * fVar8) {
        uVar4 = 0x2000;
      }
      *(uint *)(param_1 + 0x300) = *(uint *)(param_1 + 0x300) | (uint)uVar4;
      return CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
  }
  if (*(byte *)(param_1 + 0x248) == 6) {
    bVar2 = *(char *)(param_1 + 0x249) + DAT_146aefe41;
    uVar5 = 0;
  }
  else {
    uVar5 = (undefined7)((ulonglong)register0x00000020 >> 8);
    bVar2 = (*(char *)(param_1 + 0x4b2) != '\x01') << ((byte)DAT_146af0138 & 0x1f) |
            *(byte *)(param_1 + 0x248);
  }
  return CONCAT71(uVar5,bVar2 != in_stack_00000048);
}



// FUNCTION 14234eb00 FUN_14234eb00 body=279 status=ok
// SIG undefined FUN_14234eb00(void)

void FUN_14234eb00(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined2 param_11)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_8);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14504b638;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(puVar3 + 1) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_resc;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)((longlong)puVar3 + 0x24) = uVar2;
    uVar2 = *(undefined4 *)(param_4 + 1);
    puVar3[5] = uVar1;
    *(undefined4 *)(puVar3 + 6) = uVar2;
    *(undefined1 *)((longlong)puVar3 + 0x34) = param_5;
    *(undefined1 *)((longlong)puVar3 + 0x35) = param_6;
    *(undefined4 *)(puVar3 + 7) = param_7;
    puVar3[8] = param_9;
    *(undefined1 *)(puVar3 + 9) = param_10;
    *(undefined2 *)((longlong)puVar3 + 0x4a) = param_11;
    *(undefined4 *)(puVar3 + 3) = param_2;
    puVar3[2] = param_1;
  }
  local_78[0] = &LAB_1423327d0;
  FUN_14234b4d0(param_1,local_78);
  return;
}



// FUNCTION 14234ec20 FUN_14234ec20 body=343 status=ok
// SIG undefined FUN_14234ec20(void)

void FUN_14234ec20(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_12);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x68,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14504b668;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *(undefined4 *)(puVar3 + 1) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0xc) = local_resc;
    *(undefined8 *)((longlong)puVar3 + 0x1c) = uVar1;
    *(undefined4 *)((longlong)puVar3 + 0x24) = uVar2;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = param_5;
    *(undefined4 *)(puVar3 + 6) = param_6;
    *(undefined4 *)(puVar3 + 3) = param_2;
    puVar3[2] = param_1;
    uVar2 = *(undefined4 *)(param_7 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x34) = *param_7;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = uVar2;
    *(undefined1 *)(puVar3 + 5) = param_4;
    uVar2 = *(undefined4 *)(param_8 + 1);
    puVar3[8] = *param_8;
    *(undefined4 *)(puVar3 + 9) = uVar2;
    *(undefined1 *)((longlong)puVar3 + 0x4c) = param_9;
    *(undefined1 *)((longlong)puVar3 + 0x4d) = param_10;
    *(undefined4 *)(puVar3 + 10) = param_11;
    puVar3[0xb] = param_13;
    *(undefined1 *)(puVar3 + 0xc) = param_14;
    *(undefined2 *)((longlong)puVar3 + 0x62) = param_15;
  }
  local_78[0] = &LAB_1423321a0;
  FUN_14234b4d0(param_1,local_78);
  return;
}



// FUNCTION 14234ed80 FUN_14234ed80 body=343 status=ok
// SIG undefined FUN_14234ed80(void)

void FUN_14234ed80(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_12);
  local_48 = 0;
  local_38 = 0;
  puVar4 = (undefined8 *)FUN_140438ef0(0x68,local_68);
  if (puVar4 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar4 = &PTR_FUN_14504b680;
    *(undefined4 *)((longlong)puVar4 + 0x24) = param_5;
    *(undefined8 *)((longlong)puVar4 + 0x14) = uVar1;
    *(undefined4 *)(puVar4 + 5) = param_6;
    uVar3 = *(undefined4 *)(param_7 + 1);
    *(undefined8 *)((longlong)puVar4 + 0x2c) = *param_7;
    *(undefined4 *)((longlong)puVar4 + 0x34) = uVar3;
    *(undefined4 *)(puVar4 + 2) = param_2;
    puVar4[1] = param_1;
    *(undefined4 *)((longlong)puVar4 + 0x1c) = uVar2;
    uVar2 = *(undefined4 *)(param_8 + 1);
    puVar4[7] = *param_8;
    *(undefined4 *)(puVar4 + 8) = uVar2;
    *(undefined1 *)((longlong)puVar4 + 0x44) = param_9;
    *(undefined1 *)((longlong)puVar4 + 0x45) = param_10;
    *(undefined4 *)(puVar4 + 9) = param_11;
    *(undefined1 *)(puVar4 + 4) = param_4;
    *(undefined4 *)((longlong)puVar4 + 0x4c) = local_res8;
    *(undefined4 *)(puVar4 + 10) = local_resc;
    puVar4[0xb] = param_13;
    *(undefined1 *)(puVar4 + 0xc) = param_14;
    *(undefined2 *)((longlong)puVar4 + 0x62) = param_15;
  }
  local_78[0] = &LAB_142332780;
  FUN_14234b4d0(param_1,local_78);
  return;
}



// FUNCTION 14234eee0 FUN_14234eee0 body=343 status=ok
// SIG undefined FUN_14234eee0(void)

void FUN_14234eee0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_12);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x60,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar3 = &PTR_FUN_14504b620;
    *(undefined1 *)((longlong)puVar3 + 0x21) = param_10;
    *(undefined4 *)((longlong)puVar3 + 0x24) = param_5;
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar1;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar2;
    *(undefined1 *)(puVar3 + 4) = param_4;
    *(undefined4 *)(puVar3 + 5) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_resc;
    puVar3[6] = param_13;
    *(undefined1 *)(puVar3 + 7) = param_14;
    *(undefined2 *)((longlong)puVar3 + 0x3a) = param_15;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = param_6;
    uVar2 = *(undefined4 *)(param_7 + 1);
    puVar3[8] = *param_7;
    *(undefined4 *)(puVar3 + 9) = uVar2;
    uVar2 = *(undefined4 *)(param_8 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x4c) = *param_8;
    *(undefined4 *)((longlong)puVar3 + 0x54) = uVar2;
    *(undefined1 *)(puVar3 + 0xb) = param_9;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = param_11;
  }
  local_78[0] = &LAB_1423326c0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 14234f040 FUN_14234f040 body=343 status=ok
// SIG undefined FUN_14234f040(void)

void FUN_14234f040(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 *param_7,undefined8 *param_8,
                  undefined1 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14,undefined2 param_15)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_12);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x60,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *puVar3 = &PTR_FUN_14504b620;
    *(undefined1 *)((longlong)puVar3 + 0x21) = param_10;
    *(undefined4 *)((longlong)puVar3 + 0x24) = param_5;
    *(undefined8 *)((longlong)puVar3 + 0x14) = uVar1;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x1c) = uVar2;
    *(undefined1 *)(puVar3 + 4) = param_4;
    *(undefined4 *)(puVar3 + 5) = local_res8;
    *(undefined4 *)((longlong)puVar3 + 0x2c) = local_resc;
    puVar3[6] = param_13;
    *(undefined1 *)(puVar3 + 7) = param_14;
    *(undefined2 *)((longlong)puVar3 + 0x3a) = param_15;
    *(undefined4 *)((longlong)puVar3 + 0x3c) = param_6;
    uVar2 = *(undefined4 *)(param_7 + 1);
    puVar3[8] = *param_7;
    *(undefined4 *)(puVar3 + 9) = uVar2;
    uVar2 = *(undefined4 *)(param_8 + 1);
    *(undefined8 *)((longlong)puVar3 + 0x4c) = *param_8;
    *(undefined4 *)((longlong)puVar3 + 0x54) = uVar2;
    *(undefined1 *)(puVar3 + 0xb) = param_9;
    *(undefined4 *)((longlong)puVar3 + 0x5c) = param_11;
  }
  local_78[0] = &LAB_1423327c0;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 14234f1a0 FUN_14234f1a0 body=1389 status=ok
// SIG undefined FUN_14234f1a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14234f1a0(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  float *param_5,longlong param_6,longlong param_7,char param_8)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  float fVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined8 local_78;
  float local_70;
  undefined8 local_68;
  float fStack_60;
  float fStack_5c;
  undefined1 local_58 [48];
  
  if (((*param_5 == 1.0) && (param_5[1] == 2.0)) && (param_5[2] == 3.0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    return;
  }
  lVar8 = param_1[0xc3];
  if (lVar8 == 0) {
    lVar8 = (**(code **)(param_1[0x43] + 0x30))();
    param_1[0xc3] = lVar8;
  }
  lVar14 = 0;
  lVar11 = *(longlong *)(param_1[0x44] + 0x490);
  if (lVar11 == 0) {
LAB_14234f28c:
    lVar11 = lVar14;
  }
  else {
    lVar9 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar11 + 0x10) + 0x90) < *(int *)(lVar9 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x88) + (longlong)*(int *)(lVar9 + 0x90) * 8)
        != lVar9 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_14234f28c;
  }
  lVar9 = FUN_14046f570(param_1);
  if (*(float *)(lVar9 + 0x790) != *(float *)(lVar8 + 0x5c)) {
    plVar10 = (longlong *)FUN_14293b120();
    plVar13 = (longlong *)plVar10[0x1f];
    if (plVar13 == (longlong *)0x0) {
      (**(code **)(*plVar10 + 0x368))(plVar10);
      plVar13 = (longlong *)plVar10[0x1f];
    }
    cVar5 = (**(code **)(*plVar13 + 0x700))(plVar13,lVar11,*(undefined4 *)(lVar8 + 0x5c));
    if (cVar5 != '\0') {
      return;
    }
  }
  local_78 = *(undefined8 *)param_5;
  local_70 = param_5[2];
  cVar5 = FUN_142314560(param_6);
  if (cVar5 != '\0') {
    FUN_142311f90(param_6,param_7,&local_68,local_58);
    local_70 = local_70 + fStack_60;
    local_78 = CONCAT44(local_78._4_4_ + local_68._4_4_,(float)local_78 + (float)local_68);
  }
  *(uint *)(param_1 + 0x60) =
       *(uint *)(param_1 + 0x60) ^
       (*(int *)(lVar8 + 0x6c) << 0xd ^ *(uint *)(param_1 + 0x60)) & 0x2000;
  if ((*(byte *)(lVar8 + 0x6c) & 1) == 0) {
    puVar12 = &local_78;
    cVar5 = (**(code **)(*param_1 + 0x948))
                      (param_1,param_2,param_3,param_4,puVar12,param_5,param_6,param_7,param_8);
    if (cVar5 == '\0') {
      lVar11 = FUN_1423235a0();
      if (*(char *)(lVar11 + 0x4b8) != '\0') {
        lVar11 = param_1[0x2f];
        if (((*(float *)(lVar11 + 0x220) - (float)local_78 == 0.0) &&
            (*(float *)(lVar11 + 0x224) - local_78._4_4_ == 0.0)) &&
           (*(float *)(lVar11 + 0x228) - local_70 == 0.0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (cVar5 = FUN_142344c40(param_1), param_8 == cVar5)) {
          lVar9 = param_1[0x44];
          if (lVar9 != 0) {
            lVar14 = *(longlong *)(lVar9 + 0x4d8);
          }
          if ((lVar14 == param_6) && ((lVar9 == 0 || (*(longlong *)(lVar9 + 0x4e0) == param_7))))
          goto LAB_14234f556;
        }
        local_68 = local_78;
        fStack_60 = local_70;
        FUN_1423990b0(lVar11,&local_68,0,0,(ulonglong)puVar12 & 0xffffffffffffff00);
        (**(code **)(*param_1 + 0x5b0))(param_1,param_8);
        (**(code **)(*param_1 + 0x6d8))(param_1,param_6,param_7,1);
        (**(code **)(*param_1 + 0x978))(param_1);
        (**(code **)(*param_1 + 0x608))(param_1);
        lVar11 = param_1[0x2f];
        if (lVar11 == 0) {
          local_68 = _DAT_1468b5d90;
          fStack_60 = (float)DAT_1468b5d98;
        }
        else {
          local_68 = *(undefined8 *)(lVar11 + 0x220);
          fStack_60 = *(float *)(lVar11 + 0x228);
        }
        *(undefined8 *)((longlong)param_1 + 0x35c) = local_68;
        *(float *)((longlong)param_1 + 0x364) = fStack_60;
        uVar15 = DAT_1464aa810;
        uVar16 = DAT_1464aa814;
        uVar17 = DAT_1464aa818;
        uVar18 = DAT_1464aa81c;
        if (lVar11 != 0) {
          uVar15 = *(undefined4 *)(lVar11 + 0x210);
          uVar16 = *(undefined4 *)(lVar11 + 0x214);
          uVar17 = *(undefined4 *)(lVar11 + 0x218);
          uVar18 = *(undefined4 *)(lVar11 + 0x21c);
        }
        param_1[0x6e] = CONCAT44(uVar16,uVar15);
        param_1[0x6f] = CONCAT44(uVar18,uVar17);
        param_1[0x70] = *(longlong *)((longlong)param_1 + 0x18c);
        *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)((longlong)param_1 + 0x194);
      }
LAB_14234f556:
      *(undefined4 *)(lVar8 + 0x10) = param_2;
      *(undefined1 *)(lVar8 + 0x50) = 1;
      goto LAB_14234f6c5;
    }
  }
  uVar1 = *(undefined8 *)(param_1[0x44] + 0x4d8);
  *(undefined8 *)(lVar8 + 0x24) = *(undefined8 *)((longlong)param_1 + 0x18c);
  *(undefined4 *)(lVar8 + 0x2c) = *(undefined4 *)((longlong)param_1 + 0x194);
  *(undefined8 *)(lVar8 + 0x40) = uVar1;
  *(undefined8 *)(lVar8 + 0x48) = *(undefined8 *)(param_1[0x44] + 0x4e0);
  local_68 = *(undefined8 *)(param_1[0x2f] + 0x220);
  fStack_60 = *(float *)(param_1[0x2f] + 0x228);
  puVar12 = (undefined8 *)FUN_142436cc0(local_58,&local_68,param_1);
  *(undefined8 *)(lVar8 + 0x18) = *puVar12;
  uVar15 = *(undefined4 *)(puVar12 + 1);
  *(undefined4 *)(lVar8 + 0x20) = uVar15;
  lVar11 = param_1[0x2f];
  fVar4 = *(float *)(lVar11 + 0x210);
  local_68 = *(undefined8 *)(lVar11 + 0x210);
  fStack_60 = *(float *)(lVar11 + 0x218);
  fStack_5c = *(float *)(lVar11 + 0x21c);
  auVar2._4_4_ = -(uint)(*(float *)(lVar11 + 0x254) != *(float *)(lVar11 + 0x214));
  auVar2._0_4_ = -(uint)(*(float *)(lVar11 + 0x250) != fVar4);
  auVar2._8_4_ = -(uint)(*(float *)(lVar11 + 600) != fStack_60);
  auVar2._12_4_ = -(uint)(*(float *)(lVar11 + 0x25c) != fStack_5c);
  iVar7 = movmskps(uVar15,auVar2);
  if (iVar7 != 0) {
    *(float *)(lVar11 + 0x250) = fVar4;
    *(float *)(lVar11 + 0x254) = *(float *)(lVar11 + 0x214);
    *(float *)(lVar11 + 600) = fStack_60;
    *(float *)(lVar11 + 0x25c) = fStack_5c;
    puVar12 = (undefined8 *)FQuat::Rotator(&local_68,local_58);
    *(undefined8 *)(lVar11 + 0x260) = *puVar12;
    *(undefined4 *)(lVar11 + 0x268) = *(undefined4 *)(puVar12 + 1);
  }
  *(undefined8 *)(lVar8 + 0x30) = *(undefined8 *)(lVar11 + 0x260);
  *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar11 + 0x268);
  cVar5 = FUN_142314560(uVar1);
  *(char *)(lVar8 + 0x51) = cVar5;
  if (cVar5 != '\0') {
    lVar11 = param_1[0x44];
    *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(lVar11 + 0x4e8);
    *(undefined4 *)(lVar8 + 0x20) = *(undefined4 *)(lVar11 + 0x4f0);
  }
  lVar11 = FUN_14046f570(param_1);
  uVar15 = *(undefined4 *)(lVar11 + 0x790);
  *(undefined4 *)(lVar8 + 0x14) = param_3;
  *(undefined4 *)(lVar8 + 0x10) = param_2;
  *(undefined4 *)(lVar8 + 0x5c) = uVar15;
  *(undefined1 *)(lVar8 + 0x50) = 0;
  if (*(byte *)(param_1 + 0x49) == 6) {
    bVar6 = *(char *)((longlong)param_1 + 0x249) + DAT_146aefe41;
  }
  else {
    bVar6 = (*(char *)((longlong)param_1 + 0x4b2) != '\x01') << ((byte)DAT_146af0138 & 0x1f) |
            *(byte *)(param_1 + 0x49);
  }
  *(byte *)(lVar8 + 0x52) = bVar6;
LAB_14234f6c5:
  *(uint *)(lVar8 + 0x6c) = *(uint *)(lVar8 + 0x6c) & 0xfffffffe;
  return;
}



// FUNCTION 14234f710 FUN_14234f710 body=136 status=ok
// SIG undefined FUN_14234f710(void)

void FUN_14234f710(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined7 uStack_5f;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar1 = *(undefined4 *)(param_3 + 1);
  uStack_6c = (undefined4)*param_3;
  uStack_68 = (undefined4)((ulonglong)*param_3 >> 0x20);
  local_28 = 0;
  local_18 = 0;
  puVar2 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar2 != (undefined8 *)0x0) {
    local_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar2 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar2 + 1) = local_78;
    *(undefined4 *)((longlong)puVar2 + 0xc) = uStack_74;
    *(undefined4 *)(puVar2 + 2) = param_2;
    *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_6c;
    puVar2[3] = CONCAT44(uVar1,uStack_68);
    puVar2[4] = CONCAT71(uStack_5f,param_4);
  }
  local_58[0] = FUN_142332160;
  FUN_14234b4d0(param_1,local_58);
  return;
}



// FUNCTION 14234f7a0 FUN_14234f7a0 body=136 status=ok
// SIG undefined FUN_14234f7a0(void)

void FUN_14234f7a0(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_6c;
  undefined4 uStack_5c;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  uVar2 = *(undefined4 *)(param_3 + 1);
  uVar1 = *param_3;
  uStack_6c = CONCAT31(uStack_6c._1_3_,param_4);
  local_28 = 0;
  local_18 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_48);
  if (puVar3 != (undefined8 *)0x0) {
    local_78 = (undefined4)param_1;
    uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
    *puVar3 = &PTR_FUN_143ff7760;
    *(undefined4 *)(puVar3 + 1) = local_78;
    *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
    *(undefined4 *)(puVar3 + 2) = param_2;
    *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
    puVar3[3] = uVar1;
    puVar3[4] = CONCAT44(uStack_5c,uVar2);
  }
  local_58[0] = &LAB_142332850;
  FUN_142339040(param_1,local_58);
  return;
}



// FUNCTION 14234f830 FUN_14234f830 body=267 status=ok
// SIG undefined FUN_14234f830(void)

void FUN_14234f830(undefined8 param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined1 param_5,undefined1 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 local_res8;
  undefined4 local_resc;
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  FWeakObjectPtr::operator=(&local_res8,param_8);
  local_48 = 0;
  local_38 = 0;
  puVar3 = (undefined8 *)FUN_140438ef0(0x50,local_68);
  if (puVar3 != (undefined8 *)0x0) {
    uVar1 = *param_3;
    *puVar3 = &PTR_FUN_14504b650;
    uVar2 = *(undefined4 *)(param_3 + 1);
    puVar3[3] = uVar1;
    uVar1 = *param_4;
    *(undefined4 *)(puVar3 + 4) = uVar2;
    *(undefined1 *)((longlong)puVar3 + 0x24) = param_6;
    *(undefined1 *)((longlong)puVar3 + 0x25) = param_5;
    uVar2 = *(undefined4 *)(param_4 + 1);
    puVar3[5] = uVar1;
    *(undefined4 *)(puVar3 + 6) = uVar2;
    *(undefined4 *)(puVar3 + 2) = param_2;
    puVar3[1] = param_1;
    *(undefined4 *)((longlong)puVar3 + 0x14) = param_7;
    *(undefined4 *)((longlong)puVar3 + 0x34) = local_res8;
    *(undefined4 *)(puVar3 + 7) = local_resc;
    puVar3[8] = param_9;
    *(undefined1 *)(puVar3 + 9) = param_10;
  }
  local_78[0] = &LAB_142332400;
  FUN_142339040(param_1,local_78);
  return;
}



// FUNCTION 14234f960 FUN_14234f960 body=35 status=ok
// SIG undefined FUN_14234f960(void)

void FUN_14234f960(longlong param_1,longlong param_2)

{
  uint uVar1;
  
  *(longlong *)(param_1 + 0x138) = param_2;
  uVar1 = *(uint *)(param_1 + 8) | 0x40000000;
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 8) & 0xbfffffff;
  }
  *(uint *)(param_1 + 8) = uVar1;
  return;
}



// FUNCTION 14234f990 FUN_14234f990 body=50 status=ok
// SIG undefined FUN_14234f990(void)

void FUN_14234f990(longlong param_1,undefined8 param_2)

{
  undefined4 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined4 *)FLinearColor::ToFColor(param_2,local_res8,1);
  *(undefined4 *)(param_1 + 0x6f0) = *puVar1;
  FUN_1423424e0(param_1);
  return;
}



// FUNCTION 14234fa00 FUN_14234fa00 body=127 status=ok
// SIG undefined FUN_14234fa00(void)

void FUN_14234fa00(longlong param_1,byte param_2)

{
  longlong lVar1;
  
  if ((*(uint *)(param_1 + 0x4b4) >> 0x13 & 1) != (uint)param_2) {
    *(undefined4 *)(param_1 + 0x4d8) = 0;
    *(uint *)(param_1 + 0x4b4) = (uint)param_2 << 0x13 | *(uint *)(param_1 + 0x4b4) & 0xfff7ffff;
    if (*(longlong *)(param_1 + 0x220) != 0) {
      lVar1 = FUN_14046f570(param_1);
      if ((*(longlong *)(lVar1 + 0x158) != 0) && (param_2 != 0)) {
        UAvoidanceManager::RegisterMovementComponent
                  (*(longlong *)(lVar1 + 0x158),param_1,*(undefined4 *)(param_1 + 0x4e8));
      }
    }
  }
  return;
}



// FUNCTION 14234fa80 FUN_14234fa80 body=7 status=ok
// SIG undefined FUN_14234fa80(void)

void FUN_14234fa80(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4dc) = param_2;
  return;
}



// FUNCTION 14234fa90 FUN_14234fa90 body=9 status=ok
// SIG undefined FUN_14234fa90(void)

void FUN_14234fa90(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4dc) = *param_2;
  return;
}



// FUNCTION 14234faa0 FUN_14234faa0 body=81 status=ok
// SIG undefined FUN_14234faa0(void)

void FUN_14234faa0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  FUN_142237a80(param_2,*(undefined4 *)(param_1 + 0x4d8));
  *(undefined8 *)(param_1 + 0x4b8) = *(undefined8 *)(param_1 + 0x18c);
  *(undefined4 *)(param_1 + 0x4c4) = param_3;
  *(undefined4 *)(param_1 + 0x4c0) = *(undefined4 *)(param_1 + 0x194);
  return;
}



// FUNCTION 14234fb00 FUN_14234fb00 body=53 status=ok
// SIG undefined FUN_14234fb00(void)

void FUN_14234fb00(longlong param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x220);
  if ((plVar1 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x4b4) & 0x200000) == 0)) {
    if (param_2 == 0) {
      param_3 = 0;
    }
                    /* WARNING: Could not recover jumptable at 0x00014234fb2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x838))(plVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 14234fb40 FUN_14234fb40 body=110 status=ok
// SIG undefined FUN_14234fb40(void)

void FUN_14234fb40(longlong *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  if (((byte)*param_2 & 3) == 3) {
    uVar1 = FWeakObjectPtr::Get(param_2 + 0x21);
                    /* WARNING: Could not recover jumptable at 0x00014234fb82. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x6d8))(param_1,uVar1,*(undefined8 *)(param_2 + 0x24),1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014234fba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6d8))(param_1,0,0,1);
  return;
}



// FUNCTION 14234fbb0 FUN_14234fbb0 body=443 status=ok
// SIG undefined FUN_14234fbb0(void)

void FUN_14234fbb0(longlong param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined7 uStack_6f;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2d8);
    plVar4 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x2e0);
    plVar8 = plVar4 + (longlong)iVar2 * 4;
    for (; plVar4 != plVar8; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined1 *)((longlong)plVar4 + 0xc) = param_3;
        goto LAB_14234fc5e;
      }
    }
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar5) = 0;
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
    *(longlong *)(lVar7 + *plVar1) = param_2;
    *(undefined1 *)(lVar7 + 0xc + *plVar1) = param_3;
LAB_14234fc5e:
    if (((*(byte *)(param_1 + 0xba) & 4) != 0) && (DAT_146b17150 != 0)) {
      if (*(int *)(param_1 + 0x2f4) == -1) {
        lVar5 = FUN_14046f570(param_1);
        if (lVar5 == 0) {
          lVar5 = FUN_142875430(DAT_146b17150);
        }
        else {
          lVar5 = UWorld::GetAudioDevice(lVar5);
        }
      }
      else {
        lVar5 = FUN_1428742d0();
        if (lVar5 == 0) {
          return;
        }
        lVar5 = FAudioDeviceManager::GetAudioDevice(lVar5,*(undefined4 *)(param_1 + 0x2f4));
      }
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x6b0);
        local_38 = 0;
        local_28 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_58);
        if (puVar6 != (undefined8 *)0x0) {
          local_88 = (undefined4)lVar5;
          uStack_84 = (undefined4)((ulonglong)lVar5 >> 0x20);
          uStack_80 = (undefined4)uVar3;
          uStack_7c = (undefined4)((ulonglong)uVar3 >> 0x20);
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_88;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_84;
          *(undefined4 *)(puVar6 + 2) = uStack_80;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_7c;
          puVar6[3] = param_2;
          puVar6[4] = CONCAT71(uStack_6f,param_3);
        }
        local_68[0] = FUN_142332420;
        FUN_1422f8a30(local_68,0);
      }
    }
  }
  return;
}



// FUNCTION 14234fd70 FUN_14234fd70 body=194 status=ok
// SIG undefined FUN_14234fd70(void)

void FUN_14234fd70(longlong *param_1,longlong *param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  lVar1 = param_2[1];
  param_1[0xe2] = *param_2;
  *(int *)(param_1 + 0xe3) = (int)lVar1;
  (**(code **)(*param_1 + 0x4b8))();
  FUN_1423424e0(param_1);
  (**(code **)(*param_1 + 0x8e8))(param_1);
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    local_18 = (undefined4)param_1[0x46];
    local_14 = *(undefined4 *)((longlong)param_1 + 0x234);
    local_10 = (undefined4)param_1[0x47];
    FUN_1426aef60(param_1 + 0x76,&local_18,1);
    if (param_3 != '\0') {
      iVar2 = (**(code **)(*param_1 + 0x4e8))(param_1);
      if ((iVar2 != 0) && (param_1[0x23] != 0)) {
        (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      }
    }
  }
  return;
}



// FUNCTION 14234fe40 FUN_14234fe40 body=109 status=ok
// SIG undefined FUN_14234fe40(void)

void FUN_14234fe40(longlong *param_1,byte param_2)

{
  byte bVar1;
  
  if (((*(byte *)(param_1 + 0x18) & 1) != param_2) &&
     (*(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) & 0xfe | param_2,
     (*(byte *)(param_1 + 0x17) & 1) != 0)) {
    if ((param_2 & 1) != 0) {
      bVar1 = (**(code **)(*param_1 + 0x3f0))();
      *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) & 0xef;
      *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | (bVar1 & 1) << 4;
      FUN_142251d60(param_1);
      return;
    }
    FUN_142251da0(param_1);
    return;
  }
  return;
}



// FUNCTION 14234feb0 FUN_14234feb0 body=204 status=ok
// SIG undefined FUN_14234feb0(void)

void FUN_14234feb0(longlong *param_1,float param_2,float param_3,char param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_3 <= 0.0) {
    param_3 = 0.0;
  }
  if (param_3 <= param_2) {
    param_3 = param_2;
  }
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  *(float *)(param_1 + 0xe2) = param_3;
  *(float *)((longlong)param_1 + 0x714) = param_2;
  (**(code **)(*param_1 + 0x4b8))();
  (**(code **)(*param_1 + 0x8e8))(param_1);
  FUN_1423424e0(param_1);
  if ((*(byte *)(param_1 + 0x17) & 4) != 0) {
    local_18 = (undefined4)param_1[0x46];
    local_14 = *(undefined4 *)((longlong)param_1 + 0x234);
    local_10 = (undefined4)param_1[0x47];
    FUN_1426aef60(param_1 + 0x76,&local_18,1);
    if (param_4 != '\0') {
      iVar1 = (**(code **)(*param_1 + 0x4e8))(param_1);
      if ((iVar1 != 0) && (param_1[0x23] != 0)) {
        (**(code **)(*param_1 + 0x488))(param_1,0,1,0);
      }
    }
  }
  return;
}



// FUNCTION 14234ff80 SetComponentTickEnabled body=60 status=ok
// SIG undefined SetComponentTickEnabled(void)

void UActorComponent::SetComponentTickEnabled(longlong param_1,undefined1 param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 2) != 0) {
    cVar1 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar1 == '\0') {
      FUN_14288e3d0(param_1 + 0x30,param_2);
    }
  }
  return;
}



// FUNCTION 14234ffc0 FUN_14234ffc0 body=369 status=ok
// SIG undefined FUN_14234ffc0(void)

void FUN_14234ffc0(longlong param_1,undefined1 param_2)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong **pplVar10;
  longlong *local_38 [2];
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (((*(byte *)(param_1 + 0x3c) & 2) != 0) &&
     (cVar6 = UObjectBaseUtility::IsTemplate(param_1,0x30), cVar6 == '\0')) {
    uStack_20 = 0;
    local_28 = &LAB_14232b984;
    plVar7 = (longlong *)FMemory::Realloc(0,0x30);
    local_38[0] = plVar7;
    if (plVar7 != (longlong *)0x0) {
      *plVar7 = (longlong)&PTR_FUN_1444f84e8;
      FWeakObjectPtr::operator=(plVar7 + 1,param_1);
      *(undefined4 *)(plVar7 + 2) = (undefined4)local_28;
      *(undefined4 *)((longlong)plVar7 + 0x14) = local_28._4_4_;
      *(undefined4 *)(plVar7 + 3) = uStack_20;
      *(undefined4 *)((longlong)plVar7 + 0x1c) = uStack_1c;
      *(undefined1 *)(plVar7 + 4) = param_2;
      lVar8 = FDelegateHandle::GenerateNewID();
      plVar7[5] = lVar8;
      *plVar7 = (longlong)&PTR_FUN_1444f8530;
    }
    plVar9 = (longlong *)FUN_141d29000(&local_28,0,0xff);
    lVar8 = *plVar9;
    pplVar10 = (longlong **)(lVar8 + 0x10);
    *pplVar10 = (longlong *)0x0;
    *(undefined4 *)(lVar8 + 0x18) = 0;
    if ((local_38 != pplVar10) && (plVar7 != (longlong *)0x0)) {
      (**(code **)(*plVar7 + 0x30))(plVar7,pplVar10);
    }
    *(undefined4 *)(lVar8 + 0x20) = 2;
    lVar8 = *plVar9;
    lVar5 = plVar9[2];
    lVar3 = plVar9[1];
    lVar4 = *(longlong *)(lVar8 + 0x30);
    piVar1 = (int *)(lVar4 + 0x48);
    if (lVar4 != 0) {
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      plVar7 = local_38[0];
    }
    FUN_1409691d0(lVar8,lVar3,(int)lVar5,1);
    if (lVar4 != 0) {
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      plVar7 = local_38[0];
      if (iVar2 == 1) {
        FGraphEvent::Recycle(lVar4);
        plVar7 = local_38[0];
      }
    }
    if (plVar7 != (longlong *)0x0) {
      (**(code **)(*plVar7 + 0x28))(plVar7,0);
      lVar8 = FMemory::Realloc(plVar7,0,0);
      if (lVar8 != 0) {
        FMemory::Free(lVar8);
      }
    }
  }
  return;
}



// FUNCTION 142350140 SetComponentTickInterval body=6 status=ok
// SIG undefined SetComponentTickInterval(void)

void UActorComponent::SetComponentTickInterval(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x70) = param_2;
  return;
}



// FUNCTION 142350150 FUN_142350150 body=192 status=ok
// SIG undefined FUN_142350150(void)

void FUN_142350150(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  
  if (((*(uint *)(param_1 + 0x38) >> 3 & 1) != 0) &&
     (cVar2 = (**(code **)(*param_1 + 0x458))(), cVar2 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000142350188. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x5a0))(param_1,*(undefined1 *)((longlong)param_1 + 0x4b1),0);
    return;
  }
  if ((param_1[0x44] == 0) || ((char)param_1[0x49] != (char)param_1[0x96])) {
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x194);
    (**(code **)(*param_1 + 0x5a0))(param_1,(char)param_1[0x96],0);
    if (((char)param_1[0x49] == '\x01') &&
       ((param_1[0x44] == 0 || (*(longlong *)(param_1[0x44] + 0x4d8) == 0)))) {
      *(undefined4 *)((longlong)param_1 + 0x194) = uVar1;
      (**(code **)(*param_1 + 0x5a0))(param_1,3);
    }
  }
  return;
}



// FUNCTION 142350210 FUN_142350210 body=443 status=ok
// SIG undefined FUN_142350210(void)

void FUN_142350210(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  code *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2d8);
    plVar4 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x2e0);
    plVar8 = plVar4 + (longlong)iVar2 * 4;
    for (; plVar4 != plVar8; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined4 *)(plVar4 + 1) = param_3;
        goto LAB_1423502bd;
      }
    }
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar5) = 0;
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
    *(longlong *)(lVar7 + *plVar1) = param_2;
    *(undefined4 *)(lVar7 + 8 + *plVar1) = param_3;
LAB_1423502bd:
    if (((*(byte *)(param_1 + 0xba) & 4) != 0) && (DAT_146b17150 != 0)) {
      if (*(int *)(param_1 + 0x2f4) == -1) {
        lVar5 = FUN_14046f570(param_1);
        if (lVar5 == 0) {
          lVar5 = FUN_142875430(DAT_146b17150);
        }
        else {
          lVar5 = UWorld::GetAudioDevice(lVar5);
        }
      }
      else {
        lVar5 = FUN_1428742d0();
        if (lVar5 == 0) {
          return;
        }
        lVar5 = FAudioDeviceManager::GetAudioDevice(lVar5,*(undefined4 *)(param_1 + 0x2f4));
      }
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x6b0);
        local_48 = 0;
        local_38 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_68);
        if (puVar6 != (undefined8 *)0x0) {
          local_98 = (undefined4)lVar5;
          uStack_94 = (undefined4)((ulonglong)lVar5 >> 0x20);
          uStack_90 = (undefined4)uVar3;
          uStack_8c = (undefined4)((ulonglong)uVar3 >> 0x20);
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_98;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_94;
          *(undefined4 *)(puVar6 + 2) = uStack_90;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_8c;
          puVar6[3] = param_2;
          puVar6[4] = CONCAT44(uStack_7c,param_3);
        }
        local_78[0] = FUN_142332570;
        FUN_1422f8a30(local_78,0);
      }
    }
  }
  return;
}



// FUNCTION 1423503d0 FUN_1423503d0 body=230 status=ok
// SIG undefined FUN_1423503d0(void)

void FUN_1423503d0(uint *param_1,byte *param_2,uint param_3,uint param_4,byte param_5)

{
  undefined1 local_b8 [12];
  uint local_ac;
  undefined8 local_a4;
  uint local_9c;
  undefined8 local_98;
  uint local_90;
  undefined8 local_74;
  uint local_6c;
  undefined8 local_68;
  uint local_60;
  
  if (((param_1[4] & 1) != 0) && ((*param_2 & 1) != 0)) {
    FUN_140729f20(local_b8,param_1 + 4);
    FUN_140729f20(param_1 + 4,param_2);
    param_1[7] = local_ac;
    *(undefined8 *)(param_1 + 9) = local_a4;
    *(undefined8 *)(param_1 + 0x15) = local_74;
    *(undefined8 *)(param_1 + 0xc) = local_98;
    param_1[0xe] = local_90;
    param_1[0xb] = local_9c;
    param_1[0x17] = local_6c;
    *(undefined8 *)(param_1 + 0x18) = local_68;
    param_1[0x1a] = local_60;
    param_1[1] = param_3;
    param_1[2] = param_4;
    *param_1 = (param_5 | 2) * 2 | *param_1 & 0xfffffffd;
  }
  return;
}



// FUNCTION 1423504c0 SetFromSweep body=70 status=ok
// SIG undefined SetFromSweep(void)

void FFindFloorResult::SetFromSweep(uint *param_1,byte *param_2,uint param_3,byte param_4)

{
  uint uVar1;
  
  if (((*param_2 & 1) == 0) || ((*param_2 & 2) != 0)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  param_1[1] = param_3;
  param_1[2] = 0;
  *param_1 = (*param_1 & 0xfffffffc | uVar1 | (uint)param_4 * 2) & 0xfffffffb;
  FUN_140729f20(param_1 + 4);
  return;
}



// FUNCTION 142350510 FUN_142350510 body=52 status=ok
// SIG undefined FUN_142350510(void)

void FUN_142350510(longlong *param_1,uint param_2)

{
  if (param_2 - 1 < 2) {
    *(char *)((longlong)param_1 + 0x4b2) = (char)param_2;
    if (((byte)(*(byte *)(param_1 + 0x49) - 1) < 2) && (*(byte *)(param_1 + 0x49) != param_2)) {
                    /* WARNING: Could not recover jumptable at 0x00014235053c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5a0))(param_1,param_2,0);
      return;
    }
  }
  return;
}



// FUNCTION 142350550 FUN_142350550 body=7 status=ok
// SIG undefined FUN_142350550(void)

void FUN_142350550(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4e0) = param_2;
  return;
}



// FUNCTION 142350560 FUN_142350560 body=9 status=ok
// SIG undefined FUN_142350560(void)

void FUN_142350560(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4e0) = *param_2;
  return;
}



// FUNCTION 142350570 FUN_142350570 body=7 status=ok
// SIG undefined FUN_142350570(void)

void FUN_142350570(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4e4) = param_2;
  return;
}



// FUNCTION 142350580 FUN_142350580 body=9 status=ok
// SIG undefined FUN_142350580(void)

void FUN_142350580(longlong param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x4e4) = *param_2;
  return;
}



// FUNCTION 142350590 FUN_142350590 body=972 status=ok
// SIG undefined FUN_142350590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142350590(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined8 local_58;
  undefined4 local_50;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  lVar1 = param_2[0x2d];
  if (lVar1 == 0) {
    local_58 = _DAT_1468b5d90;
    local_50 = DAT_1468b5d98;
  }
  else {
    local_58 = *(undefined8 *)(lVar1 + 0x220);
    local_50 = *(undefined4 *)(lVar1 + 0x228);
  }
  *(undefined8 *)(param_1 + 0x3c) = local_58;
  *(undefined4 *)(param_1 + 0x44) = local_50;
  lVar1 = param_2[0x2d];
  if (lVar1 == 0) {
    uVar12 = (undefined4)DAT_1468b5da0;
    uVar13 = (undefined4)((ulonglong)DAT_1468b5da0 >> 0x20);
    local_50 = DAT_1468b5da8;
  }
  else {
    local_48 = *(float *)(lVar1 + 0x210);
    fStack_44 = *(float *)(lVar1 + 0x214);
    fStack_40 = *(float *)(lVar1 + 0x218);
    fStack_3c = *(float *)(lVar1 + 0x21c);
    auVar20._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_44);
    auVar20._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_48);
    auVar20._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_40);
    auVar20._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_3c);
    iVar7 = movmskps(local_50,auVar20);
    if (iVar7 != 0) {
      *(float *)(lVar1 + 0x250) = local_48;
      *(float *)(lVar1 + 0x254) = fStack_44;
      *(float *)(lVar1 + 600) = fStack_40;
      *(float *)(lVar1 + 0x25c) = fStack_3c;
      puVar8 = (undefined8 *)FQuat::Rotator(&local_48,&local_58);
      *(undefined8 *)(lVar1 + 0x260) = *puVar8;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar8 + 1);
    }
    uVar12 = (undefined4)*(undefined8 *)(lVar1 + 0x260);
    uVar13 = (undefined4)((ulonglong)*(undefined8 *)(lVar1 + 0x260) >> 0x20);
    local_50 = *(undefined4 *)(lVar1 + 0x268);
  }
  local_58 = CONCAT44(uVar13,uVar12);
  *(undefined8 *)(param_1 + 0x100) = local_58;
  *(undefined4 *)(param_1 + 0x108) = local_50;
  lVar1 = param_2[0x99];
  *(undefined8 *)(param_1 + 0x54) = *(undefined8 *)(lVar1 + 0x18c);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(lVar1 + 0x194);
  lVar1 = param_2[0x9b];
  FWeakObjectPtr::operator=(param_1 + 0x138,lVar1);
  uVar5 = DAT_1464aa81c;
  uVar13 = DAT_1464aa818;
  uVar12 = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x120) = DAT_1464aa810;
  *(undefined4 *)(param_1 + 0x124) = uVar12;
  *(undefined4 *)(param_1 + 0x128) = uVar13;
  *(undefined4 *)(param_1 + 300) = uVar5;
  lVar2 = param_2[0x99];
  puVar11 = (uint *)(lVar2 + 0x410);
  *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) ^ (*puVar11 ^ *(uint *)(param_1 + 0x60)) & 1
  ;
  uVar10 = (*puVar11 ^ *(uint *)(param_1 + 0x60)) & 2 ^ *(uint *)(param_1 + 0x60);
  *(uint *)(param_1 + 0x60) = uVar10;
  *(uint *)(param_1 + 0x60) = (uVar10 ^ *puVar11) & 4 ^ uVar10;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(lVar2 + 0x414);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(lVar2 + 0x418);
  FUN_140729f20(param_1 + 0x70,lVar2 + 0x420);
  *(int *)(param_1 + 0x24) = (int)param_2[0x1a];
  *(longlong *)(param_1 + 0x140) = param_2[0x9c];
  *(int *)(param_1 + 0x148) = (int)param_2[0xb1];
  *(undefined4 *)(param_1 + 0x14c) = DAT_146af07c0;
  cVar6 = FUN_142314560(lVar1);
  if (cVar6 != '\0') {
    *(longlong *)(param_1 + 0x48) = param_2[0x9d];
    *(int *)(param_1 + 0x50) = (int)param_2[0x9e];
    FUN_142311f90(lVar1,*(undefined8 *)(param_1 + 0x140),&local_58,param_1 + 0x120);
  }
  pfVar9 = (float *)(**(code **)(*param_2 + 0x738))(param_2,&local_58);
  fVar21 = pfVar9[2];
  fVar17 = (float)(int)(fVar21 * 0.0027777778) * 360.0;
  if (ABS(fVar21) < ABS(fVar17)) {
    fVar17 = fVar21;
  }
  fVar21 = fVar21 - fVar17;
  if (fVar21 < 0.0) {
    fVar21 = fVar21 + 360.0;
  }
  fVar17 = pfVar9[1];
  fVar18 = (float)(int)(fVar17 * 0.0027777778) * 360.0;
  if (ABS(fVar17) < ABS(fVar18)) {
    fVar18 = fVar17;
  }
  fVar17 = fVar17 - fVar18;
  if (fVar17 < 0.0) {
    fVar17 = fVar17 + 360.0;
  }
  fVar18 = *pfVar9;
  fVar22 = (float)(int)(fVar18 * 0.0027777778) * 360.0;
  if (ABS(fVar18) < ABS(fVar22)) {
    fVar22 = fVar18;
  }
  fVar18 = fVar18 - fVar22;
  if (fVar18 < 0.0) {
    fVar18 = fVar18 + 360.0;
  }
  *(ulonglong *)(param_1 + 0x10c) = CONCAT44(fVar17,fVar18);
  *(float *)(param_1 + 0x114) = fVar21;
  lVar1 = param_2[0x9a];
  uVar10 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
  uVar14 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
  uVar15 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
  uVar16 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
  auVar19._4_4_ = uVar14;
  auVar19._0_4_ = uVar10;
  auVar19._8_4_ = uVar15;
  auVar19._12_4_ = uVar16;
  auVar3._4_4_ = uVar15;
  auVar3._0_4_ = uVar14;
  auVar3._8_4_ = uVar10;
  auVar3._12_4_ = uVar16;
  auVar20 = minps(auVar19,auVar3);
  auVar4._4_4_ = uVar10;
  auVar4._0_4_ = uVar15;
  auVar4._8_4_ = uVar14;
  auVar4._12_4_ = uVar16;
  auVar20 = minps(auVar20,auVar4);
  *(float *)(param_1 + 0x130) = auVar20._0_4_ * *(float *)(lVar1 + 0x714);
  *(float *)(param_1 + 0x134) = auVar20._0_4_ * *(float *)(lVar1 + 0x710);
  *(uint *)(param_1 + 0x18) =
       *(uint *)(param_1 + 0x18) ^
       (*(uint *)((longlong)param_2 + 0x56c) >> 2 ^ *(uint *)(param_1 + 0x18)) & 1;
  *(uint *)(param_1 + 0x18) =
       *(uint *)(param_1 + 0x18) ^
       (*(uint *)((longlong)param_2 + 0x56c) >> 5 ^ *(uint *)(param_1 + 0x18)) & 0x20;
  *(int *)(param_1 + 0x28) = (int)param_2[0xae];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x574);
  *(int *)(param_1 + 0x30) = (int)param_2[0xb0];
  return;
}



// FUNCTION 142350960 FUN_142350960 body=442 status=ok
// SIG undefined FUN_142350960(void)

void FUN_142350960(longlong param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2d8);
    plVar4 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x2e0);
    plVar8 = plVar4 + (longlong)iVar2 * 4;
    for (; plVar4 != plVar8; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        *(undefined4 *)(plVar4 + 2) = param_3;
        goto LAB_142350a0d;
      }
    }
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar5) = 0;
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
    *(longlong *)(lVar7 + *plVar1) = param_2;
    *(undefined4 *)(lVar7 + 0x10 + *plVar1) = param_3;
LAB_142350a0d:
    if (((*(byte *)(param_1 + 0xba) & 4) != 0) && (DAT_146b17150 != 0)) {
      if (*(int *)(param_1 + 0x2f4) == -1) {
        lVar5 = FUN_14046f570(param_1);
        if (lVar5 == 0) {
          lVar5 = FUN_142875430(DAT_146b17150);
        }
        else {
          lVar5 = UWorld::GetAudioDevice(lVar5);
        }
      }
      else {
        lVar5 = FUN_1428742d0();
        if (lVar5 == 0) {
          return;
        }
        lVar5 = FAudioDeviceManager::GetAudioDevice(lVar5,*(undefined4 *)(param_1 + 0x2f4));
      }
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x6b0);
        local_38 = 0;
        local_28 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_58);
        if (puVar6 != (undefined8 *)0x0) {
          local_88 = (undefined4)lVar5;
          uStack_84 = (undefined4)((ulonglong)lVar5 >> 0x20);
          uStack_80 = (undefined4)uVar3;
          uStack_7c = (undefined4)((ulonglong)uVar3 >> 0x20);
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_88;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_84;
          *(undefined4 *)(puVar6 + 2) = uStack_80;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_7c;
          puVar6[3] = param_2;
          puVar6[4] = CONCAT44(uStack_6c,param_3);
        }
        local_68[0] = FUN_1423321b0;
        FUN_1422f8a30(local_68,0);
      }
    }
  }
  return;
}



// FUNCTION 142350b20 FUN_142350b20 body=110 status=ok
// SIG undefined FUN_142350b20(void)

void FUN_142350b20(longlong *param_1,byte param_2)

{
  char cVar1;
  
  if ((*(byte *)(param_1 + 0x17) >> 3 & 1) != param_2) {
    cVar1 = (**(code **)(*param_1 + 0x2c0))();
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x260))(param_1);
      *(byte *)(param_1 + 0x17) = *(byte *)(param_1 + 0x17) & 0xf7 | param_2 << 3;
      if (param_1[0x23] != 0) {
        FUN_1422412b0(param_1[0x23],param_1);
      }
    }
  }
  return;
}



// FUNCTION 142350b90 FUN_142350b90 body=160 status=ok
// SIG undefined FUN_142350b90(void)

void FUN_142350b90(longlong param_1,undefined1 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_67;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  lVar2 = FUN_14233c7a0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x6b0);
    local_28 = 0;
    local_18 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar3 != (undefined8 *)0x0) {
      local_78 = (undefined4)lVar2;
      uStack_74 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_70 = (undefined4)uVar1;
      uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(puVar3 + 1) = local_78;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
      *(undefined4 *)(puVar3 + 2) = uStack_70;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
      *puVar3 = &PTR_FUN_143f4d0b0;
      puVar3[3] = CONCAT71(uStack_67,param_2);
    }
    local_58[0] = FUN_1423324f0;
    FUN_1422f8a30(local_58,local_res18);
  }
  return;
}



// FUNCTION 142350c30 FUN_142350c30 body=165 status=ok
// SIG undefined FUN_142350c30(void)

void FUN_142350c30(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res18;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar2 = FUN_14233c7a0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x6b0);
    local_38 = 0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      local_88 = (undefined4)lVar2;
      uStack_84 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_80 = (undefined4)uVar1;
      uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *(undefined4 *)(puVar3 + 1) = local_88;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
      *(undefined4 *)(puVar3 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
      *puVar3 = &PTR_FUN_143f4d0b0;
      puVar3[3] = CONCAT44(uStack_74,param_2);
    }
    local_68[0] = FUN_1423323d0;
    FUN_1422f8a30(local_68,local_res18);
  }
  return;
}



// FUNCTION 142350ce0 FUN_142350ce0 body=515 status=ok
// SIG undefined FUN_142350ce0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142350ce0(longlong *param_1,longlong param_2,undefined4 param_3,float *param_4,
                  longlong param_5)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 local_28;
  float local_20;
  undefined1 local_18 [16];
  
  *(undefined4 *)(param_1 + 4) = param_3;
  param_1[2] = param_2;
  (**(code **)(*param_1 + 0x18))();
  fVar6 = SQRT(*param_4 * *param_4 + param_4[1] * param_4[1] + param_4[2] * param_4[2]);
  *(float *)((longlong)param_1 + 0x1c4) = fVar6;
  if (fVar6 <= 1e-08) {
    local_28 = _DAT_1468b5d90;
    local_20 = DAT_1468b5d98;
  }
  else {
    fVar6 = 1.0 / fVar6;
    local_20 = fVar6 * param_4[2];
    local_28 = CONCAT44(fVar6 * param_4[1],fVar6 * *param_4);
  }
  param_1[0x37] = local_28;
  *(float *)(param_1 + 0x38) = local_20;
  local_20 = param_4[2];
  local_28 = *(longlong *)param_4;
  plVar4 = (longlong *)
           (**(code **)(**(longlong **)(param_2 + 0x4c8) + 0x918))
                     (*(longlong **)(param_2 + 0x4c8),local_18,&local_28);
  param_1[0x35] = *plVar4;
  *(int *)(param_1 + 0x36) = (int)plVar4[1];
  uVar7 = (**(code **)(**(longlong **)(param_2 + 0x4c8) + 0x400))();
  *(undefined4 *)((longlong)param_1 + 0x1b4) = uVar7;
  iVar5 = *(int *)(param_2 + 0x584) + -1;
  if (*(int *)(param_2 + 0x584) < 1) {
    iVar5 = 0;
  }
  *(int *)((longlong)param_1 + 0x34) = iVar5;
  *(uint *)(param_1 + 3) =
       *(uint *)(param_1 + 3) ^
       (*(uint *)(*(longlong *)(param_2 + 0x4c8) + 0x4b4) >> 10 ^ *(uint *)(param_1 + 3)) & 2;
  *(uint *)(param_1 + 3) =
       (*(uint *)(*(longlong *)(param_2 + 0x4c8) + 0x300) >> 4 ^ *(uint *)(param_1 + 3)) & 4 ^
       *(uint *)(param_1 + 3);
  lVar1 = *(longlong *)(param_2 + 0x4c8);
  if (*(byte *)(lVar1 + 0x248) == 6) {
    bVar2 = *(char *)(lVar1 + 0x249) + DAT_146aefe41;
  }
  else {
    bVar2 = (*(char *)(lVar1 + 0x4b2) != '\x01') << ((byte)DAT_146af0138 & 0x1f) |
            *(byte *)(lVar1 + 0x248);
  }
  *(byte *)((longlong)param_1 + 0x39) = bVar2;
  *(byte *)(param_1 + 7) = bVar2;
  cVar3 = FRootMotionSourceGroup::HasActiveRootMotionSources(*(longlong *)(param_2 + 0x4c8) + 0x628)
  ;
  if (cVar3 != '\0') {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 8;
  }
  lVar1 = *(longlong *)(param_2 + 0x4c8);
  if (((*(float *)(lVar1 + 0x4ec) != 0.0) || (*(float *)(lVar1 + 0x4f0) != 0.0)) ||
     (*(float *)(lVar1 + 0x4f4) != 0.0)) {
    *(uint *)(param_1 + 3) = *(uint *)(param_1 + 3) | 8;
  }
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_5 + 0xc);
  return;
}



// FUNCTION 142350ef0 FUN_142350ef0 body=330 status=ok
// SIG undefined FUN_142350ef0(void)

void FUN_142350ef0(longlong *param_1,uint param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  cVar1 = '\0';
  if (param_2 == 6) {
    cVar1 = param_3;
  }
  if (param_2 == 2) {
    lVar2 = FUN_14046f570();
    if (((lVar2 != 0) && (*(longlong *)(lVar2 + 0x138) != 0)) && (param_1[0x44] != 0)) {
      lVar2 = FUN_142250040();
      if (lVar2 != 0) goto LAB_142350f47;
    }
    param_2 = 1;
  }
LAB_142350f47:
  local_res8[0] = (uint)*(byte *)(param_1 + 0x49);
  if ((local_res8[0] != param_2) ||
     ((param_2 == 6 && (cVar1 != *(char *)((longlong)param_1 + 0x249))))) {
    local_res10[0] = *(undefined1 *)((longlong)param_1 + 0x249);
    *(char *)(param_1 + 0x49) = (char)param_2;
    *(char *)((longlong)param_1 + 0x249) = cVar1;
    cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if (cVar1 != '\0') {
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_78 = SUB84(param_1,0);
        uStack_74 = (undefined4)((ulonglong)param_1 >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_78;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
        puVar3[2] = local_res8;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = local_res10;
      }
      local_58[0] = &LAB_1423321f0;
      uVar4 = FUN_14247f500();
      FUN_14247d5a0(uVar4,param_1,local_58);
    }
  }
  return;
}



// FUNCTION 142351040 FUN_142351040 body=413 status=ok
// SIG undefined FUN_142351040(void)

void FUN_142351040(longlong param_1,char param_2)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  float fVar9;
  
  plVar8 = *(longlong **)(param_1 + 0x180);
  if (plVar8 != (longlong *)0x0) {
    if (param_2 != '\0') {
      (**(code **)(*plVar8 + 0x830))(plVar8,0);
      (**(code **)(**(longlong **)(param_1 + 0x180) + 0x830))();
      uVar2 = *(undefined8 *)(param_1 + 0x554);
      uVar6 = *(undefined4 *)(param_1 + 0x55c);
      uVar3 = *(undefined8 *)(param_1 + 0x560);
      uVar4 = *(undefined4 *)(param_1 + 0x568);
      _guard_xfg_dispatch_icall_nop((void *)(param_1 + 0x510),0,0x90);
      *(undefined8 *)(param_1 + 0x554) = uVar2;
      fVar9 = 0.0;
      *(undefined8 *)(param_1 + 0x560) = uVar3;
      *(undefined4 *)(param_1 + 0x55c) = uVar6;
      *(undefined4 *)(param_1 + 0x568) = uVar4;
      *(undefined4 *)(param_1 + 0x51c) = 0x3f800000;
      fVar1 = *(float *)(param_1 + 0x5a0);
      if (0.0 < fVar1) {
        iVar5 = rand();
        fVar9 = ((float)iVar5 * 3.051851e-05 - 1.0) * fVar1;
      }
      *(float *)(param_1 + 0x5a4) = fVar9;
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x220);
    if ((lVar7 != 0) && (*(longlong *)(lVar7 + 0x4d0) == *(longlong *)(param_1 + 0x178))) {
      lVar7 = UClass::GetDefaultObject<UDamageType>(*(undefined8 *)(lVar7 + 0x10));
      if (lVar7 == 0) {
        plVar8 = (longlong *)0x0;
      }
      else {
        plVar8 = *(longlong **)(lVar7 + 0x4d0);
      }
      if (plVar8 != (longlong *)0x0) {
        lVar7 = **(longlong **)(param_1 + 0x180);
        uVar6 = (**(code **)(*plVar8 + 0x4f0))(plVar8,0);
        (**(code **)(lVar7 + 0x830))(*(undefined8 *)(param_1 + 0x180),0,uVar6);
        lVar7 = **(longlong **)(param_1 + 0x180);
        uVar6 = (**(code **)(*plVar8 + 0x4f0))(plVar8,1);
        (**(code **)(lVar7 + 0x830))(*(undefined8 *)(param_1 + 0x180),1,uVar6);
      }
    }
  }
  return;
}



// FUNCTION 1423511e0 FUN_1423511e0 body=8 status=ok
// SIG undefined FUN_1423511e0(void)

void FUN_1423511e0(longlong param_1)

{
  *(byte *)(param_1 + 0xb8) = *(byte *)(param_1 + 0xb8) | 0x10;
  return;
}



// FUNCTION 1423511f0 FUN_1423511f0 body=58 status=ok
// SIG undefined FUN_1423511f0(void)

void FUN_1423511f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  bool bVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (param_2 == 0) {
    bVar2 = lVar1 == 0;
  }
  else {
    if (lVar1 == 0) goto LAB_142351210;
    bVar2 = param_2 == lVar1;
  }
  if (bVar2) {
    return;
  }
  if (lVar1 != 0) {
    if (param_2 != 0) {
      return;
    }
    *(undefined8 *)(param_1 + 0xd0) = 0;
    return;
  }
LAB_142351210:
  if (param_2 == 0) {
    return;
  }
  *(longlong *)(param_1 + 0xd0) = param_2;
  return;
}



// FUNCTION 142351230 FUN_142351230 body=214 status=ok
// SIG undefined FUN_142351230(void)

void FUN_142351230(longlong param_1,byte param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_67;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  if ((*(byte *)(param_1 + 0x2f2) >> 2 & 1) != param_2) {
    *(byte *)(param_1 + 0x2f2) = *(byte *)(param_1 + 0x2f2) & 0xfb | param_2 << 2;
    if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
      lVar2 = FUN_14233c7a0();
      if (lVar2 != 0) {
        uVar1 = *(undefined8 *)(param_1 + 0x6b0);
        local_28 = 0;
        local_18 = 0;
        puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
        if (puVar3 != (undefined8 *)0x0) {
          local_78 = (undefined4)lVar2;
          uStack_74 = (undefined4)((ulonglong)lVar2 >> 0x20);
          uStack_70 = (undefined4)uVar1;
          uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
          *(undefined4 *)(puVar3 + 1) = local_78;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
          *(undefined4 *)(puVar3 + 2) = uStack_70;
          *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
          *puVar3 = &PTR_FUN_143f4d0b0;
          puVar3[3] = CONCAT71(uStack_67,param_2);
        }
        local_58[0] = &LAB_1423324d0;
        FUN_1422f8a30(local_58,local_res10);
      }
    }
  }
  return;
}



// FUNCTION 142351310 FUN_142351310 body=202 status=ok
// SIG undefined FUN_142351310(void)

void FUN_142351310(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x324) = param_2;
  *(undefined4 *)(param_1 + 0x304) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x300) = 0x3f800000;
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    lVar2 = FUN_14233c7a0();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x6b0);
      local_38 = 0;
      local_28 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        local_88 = (undefined4)lVar2;
        uStack_84 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_80 = (undefined4)uVar1;
        uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_88;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
        *(undefined4 *)(puVar3 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT44(uStack_74,param_2);
      }
      local_68[0] = FUN_142332020;
      FUN_1422f8a30(local_68,local_res10);
    }
  }
  return;
}



// FUNCTION 1423513e0 FUN_1423513e0 body=530 status=ok
// SIG undefined FUN_1423513e0(void)

void FUN_1423513e0(longlong *param_1,undefined8 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 local_110 [144];
  undefined8 local_80;
  float local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined1 *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (param_1[0x44] != 0) {
    if (((*(uint *)(param_1 + 0x38) >> 3 & 1) != 0) &&
       (cVar6 = (**(code **)(*param_1 + 0x458))(), cVar6 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x000142351438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x5a0))(param_1,4);
      return;
    }
    cVar6 = (**(code **)(*param_1 + 0x558))(param_1);
    fVar9 = DAT_1468b5d90;
    fVar10 = DAT_1468b5d94;
    fVar8 = DAT_1468b5d98;
    if (cVar6 != '\0') {
      fVar8 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
      fVar9 = 0.0;
      fVar10 = 0.0;
    }
    fVar1 = *(float *)(param_1 + 0x6a);
    fVar2 = *(float *)((longlong)param_1 + 0x354);
    fVar3 = *(float *)(param_1 + 0x6b);
    uVar4 = *(undefined8 *)((longlong)param_1 + 0x18c);
    uVar5 = *(undefined4 *)((longlong)param_1 + 0x194);
    if ((byte)((char)param_1[0x96] - 1U) < 3) {
      (**(code **)(*param_1 + 0x5a0))(param_1,*(undefined1 *)((longlong)param_1 + 0x4b2),0);
    }
    else {
      (**(code **)(*param_1 + 0x7a8))();
    }
    FUN_140729f20(local_110,param_2);
    local_80 = CONCAT44(fVar10 + fVar2,fVar9 + fVar1);
    local_38 = 0;
    local_28 = 0;
    local_78 = fVar8 + fVar3;
    local_74 = uVar4;
    local_6c = uVar5;
    puVar7 = (undefined8 *)FUN_140438ef0(0xb8,local_58);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = &PTR_FUN_14504b5d8;
      puVar7[1] = param_1;
      FUN_140729f20(puVar7 + 2,local_110);
      puVar7[0x14] = local_80;
      *(float *)(puVar7 + 0x15) = local_78;
      *(undefined8 *)((longlong)puVar7 + 0xac) = local_74;
      *(undefined4 *)((longlong)puVar7 + 0xb4) = local_6c;
    }
    local_68[0] = &LAB_142332790;
    FUN_14234b4d0(param_1,local_68);
  }
  return;
}



// FUNCTION 142351620 FUN_142351620 body=144 status=ok
// SIG undefined FUN_142351620(void)

void FUN_142351620(longlong *param_1,longlong param_2)

{
  byte bVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x568))();
  bVar1 = *(byte *)(param_1 + 0x5e);
  *(byte *)(param_1 + 0x5e) = bVar1 & 0xfe;
  (**(code **)(*param_1 + 0x560))(param_1);
  param_1[0x5a] = param_2;
  *(byte *)(param_1 + 0x5e) = *(byte *)(param_1 + 0x5e) ^ (*(byte *)(param_1 + 0x5e) ^ bVar1) & 1;
  if (cVar2 != '\0') {
    (**(code **)(*param_1 + 0x558))(param_1,0);
  }
  return;
}



// FUNCTION 1423516b0 FUN_1423516b0 body=12 status=ok
// SIG undefined FUN_1423516b0(void)

void FUN_1423516b0(longlong param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0x6f0) = param_2;
  FUN_1423424e0();
  return;
}



// FUNCTION 142351710 FUN_142351710 body=183 status=ok
// SIG undefined FUN_142351710(void)

void FUN_142351710(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res20;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  lVar2 = FUN_14233c7a0();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x6b0);
    local_38 = 0;
    local_28 = 0;
    puVar3 = (undefined8 *)FUN_140438ef0(0x28,local_58);
    if (puVar3 != (undefined8 *)0x0) {
      local_88 = (undefined4)lVar2;
      uStack_84 = (undefined4)((ulonglong)lVar2 >> 0x20);
      uStack_80 = (undefined4)uVar1;
      uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
      *puVar3 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar3 + 1) = local_88;
      *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
      *(undefined4 *)(puVar3 + 2) = uStack_80;
      *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
      puVar3[3] = param_2;
      puVar3[4] = CONCAT44(uStack_6c,param_3);
    }
    local_68[0] = UE4Function_Private::
                  TFunctionRefCaller<<lambda_fff97fdabcd2abb92fe06fbbc979fa94>,void___cdecl(void)>::
                  Call;
    FUN_1422f8a30(local_68,local_res20);
  }
  return;
}



// FUNCTION 1423517d0 SetTickGroup body=4 status=ok
// SIG undefined SetTickGroup(void)

void UActorComponent::SetTickGroup(longlong param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x38) = param_2;
  return;
}



// FUNCTION 1423517e0 SetTickableWhenPaused body=8 status=ok
// SIG undefined SetTickableWhenPaused(void)

void UActorComponent::SetTickableWhenPaused(longlong param_1,byte param_2)

{
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) & 0xfe;
  *(byte *)(param_1 + 0x3c) = *(byte *)(param_1 + 0x3c) | param_2;
  return;
}



// FUNCTION 1423517f0 FUN_1423517f0 body=130 status=ok
// SIG undefined FUN_1423517f0(void)

void FUN_1423517f0(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  FTransform::IsValid(param_2);
  local_18 = *param_2;
  uStack_14 = param_2[1];
  uStack_10 = param_2[2];
  uStack_c = param_2[3];
  FQuat::Rotator(&local_18,&local_28);
  *(undefined8 *)(param_1 + 0xbc) = local_28;
  *(undefined4 *)(param_1 + 0xc4) = local_20;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  *(undefined4 *)(param_1 + 0xb0) = param_2[4];
  *(undefined4 *)(param_1 + 0xb4) = uVar1;
  *(undefined4 *)(param_1 + 0xb8) = uVar2;
  return;
}



// FUNCTION 142351880 FUN_142351880 body=188 status=ok
// SIG undefined FUN_142351880(void)

void FUN_142351880(longlong param_1,char param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_67;
  code *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) & 0xbf;
  *(byte *)(param_1 + 0x2f0) = *(byte *)(param_1 + 0x2f0) | param_2 << 6;
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    lVar2 = FUN_14233c7a0();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x6b0);
      local_28 = 0;
      local_18 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_48);
      if (puVar3 != (undefined8 *)0x0) {
        local_78 = (undefined4)lVar2;
        uStack_74 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_70 = (undefined4)uVar1;
        uStack_6c = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_78;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_74;
        *(undefined4 *)(puVar3 + 2) = uStack_70;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_6c;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT71(uStack_67,param_2);
      }
      local_58[0] = FUN_142332290;
      FUN_1422f8a30(local_58,local_res10);
    }
  }
  return;
}



// FUNCTION 142351990 FUN_142351990 body=1301 status=ok
// SIG undefined FUN_142351990(void)

void FUN_142351990(longlong *param_1,longlong param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  wchar_t *pwVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  wchar_t *pwVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  longlong *plVar16;
  wchar_t *pwVar17;
  undefined8 local_res10;
  longlong local_res18 [2];
  int local_48;
  int local_44;
  longlong local_40;
  
  if (param_2 != 0) {
    lVar8 = *(longlong *)(param_2 + 0x118);
    if (lVar8 == 0) {
      return;
    }
    lVar7 = APostProcessVolume::GetPrivateStaticClass();
    lVar8 = *(longlong *)(lVar8 + 0x10);
    if ((*(int *)(lVar8 + 0x90) < *(int *)(lVar7 + 0x90)) ||
       (*(longlong *)(*(longlong *)(lVar8 + 0x88) + (longlong)*(int *)(lVar7 + 0x90) * 8) !=
        lVar7 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
    lVar8 = FUN_142912e90();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8
         ) != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      return;
    }
  }
  uVar6 = *(uint *)(param_1 + 0x60);
  if ((uVar6 & 0x10) != 0) {
    param_1[0x61] = param_2;
    *(uint *)(param_1 + 0x60) = uVar6 | 0x10000;
    return;
  }
  pwVar11 = (wchar_t *)param_1[0x2f];
  pwVar17 = (wchar_t *)0x0;
  *(uint *)(param_1 + 0x60) = uVar6 & 0xfffeffff;
  param_1[0x61] = 0;
  pwVar12 = pwVar17;
  if (pwVar11 == (wchar_t *)0x0) {
LAB_142351b02:
    bVar2 = false;
  }
  else {
    lVar8 = FUN_1429f11d0();
    if ((*(int *)(*(longlong *)(pwVar11 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar11 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142351b02;
    iVar1 = *(int *)(pwVar11 + 6);
    pwVar10 = pwVar17;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      pwVar10 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18);
    }
    pwVar12 = pwVar11;
    if ((*(uint *)(pwVar10 + 4) >> 0x1d & 1) != 0) goto LAB_142351b02;
    bVar2 = true;
  }
  if ((bVar2) && (0 < *(int *)(pwVar12 + 700))) {
    pwVar9 = _guard_xfg_dispatch_icall_nop(L"&UCharacterMovementComponent::CapsuleTouched",L"::");
    pwVar10 = pwVar17;
    while (pwVar4 = pwVar9, pwVar4 != (wchar_t *)0x0) {
      pwVar9 = _guard_xfg_dispatch_icall_nop(pwVar4 + 1,L"::");
      pwVar10 = pwVar4;
    }
    FName::FName(&local_res10,pwVar10 + 2,1);
    TMulticastScriptDelegate<FWeakObjectPtr>::Remove(pwVar12 + 0x2b8,param_1,local_res10);
  }
  FUN_142378f20(param_1);
  pwVar12 = (wchar_t *)param_1[0x41];
  if (pwVar12 == (wchar_t *)0x0) {
LAB_142351bbd:
    pwVar12 = pwVar17;
  }
  else {
    lVar8 = APostProcessVolume::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(pwVar12 + 8) + 0x90) < *(int *)(lVar8 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(pwVar12 + 8) + 0x88) + (longlong)*(int *)(lVar8 + 0x90) * 8)
        != lVar8 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) goto LAB_142351bbd;
  }
  pwVar10 = (wchar_t *)param_1[0x2f];
  param_1[0x44] = (longlong)pwVar12;
  if (pwVar10 != pwVar11) {
    (**(code **)(*param_1 + 0x6f8))(param_1);
    pwVar10 = (wchar_t *)param_1[0x2f];
  }
  if (pwVar10 == (wchar_t *)0x0) {
    (**(code **)(*param_1 + 0x518))(param_1);
  }
  if (param_1[0x30] == 0) {
LAB_142351dd1:
    bVar2 = false;
  }
  else {
    iVar1 = *(int *)(param_1[0x30] + 0xc);
    pwVar11 = pwVar17;
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      pwVar11 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar11 + 4) >> 0x1d & 1) != 0) goto LAB_142351dd1;
    bVar2 = true;
    if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
      pwVar12 = _guard_xfg_dispatch_icall_nop(L"&UCharacterMovementComponent::CapsuleTouched",L"::")
      ;
      pwVar11 = pwVar17;
      while (pwVar10 = pwVar12, pwVar10 != (wchar_t *)0x0) {
        pwVar12 = _guard_xfg_dispatch_icall_nop(pwVar10 + 1,L"::");
        pwVar11 = pwVar10;
      }
      FName::FName(local_res18,pwVar11 + 2,1);
      lVar8 = param_1[0x30];
      plVar16 = (longlong *)(lVar8 + 0x570);
      FWeakObjectPtr::operator=(&local_48,0);
      local_40 = 0;
      FWeakObjectPtr::operator=(&local_48);
      local_40 = local_res18[0];
      local_res10 = 0;
      if ((local_res18[0] != 0) && (lVar7 = FWeakObjectPtr::Get(&local_48), lVar7 != 0)) {
        UObject::FindFunction(lVar7);
      }
      piVar14 = (int *)*plVar16;
      iVar1 = *(int *)(lVar8 + 0x578);
      for (piVar15 = piVar14; piVar15 != piVar14 + (longlong)iVar1 * 4; piVar15 = piVar15 + 4) {
        if (((*piVar15 == local_48) && (piVar15[1] == local_44)) ||
           ((cVar5 = FWeakObjectPtr::IsValid(piVar15), cVar5 == '\0' &&
            (cVar5 = FWeakObjectPtr::IsValid(&local_48), cVar5 == '\0')))) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if ((bVar3) && (*(longlong *)(piVar15 + 2) == local_40)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        if (bVar3) {
          if ((int)((longlong)piVar15 - (longlong)piVar14 >> 4) != -1) goto LAB_142351dc2;
          break;
        }
      }
      iVar1 = *(int *)(lVar8 + 0x578);
      *(int *)(lVar8 + 0x578) = iVar1 + 1;
      if (*(int *)(lVar8 + 0x57c) < iVar1 + 1) {
        TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(plVar16,iVar1);
      }
      piVar14 = (int *)((longlong)iVar1 * 0x10 + *plVar16);
      *piVar14 = local_48;
      piVar14[1] = local_44;
      *(longlong *)(piVar14 + 2) = local_40;
LAB_142351dc2:
      TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar16);
    }
  }
  if ((*(uint *)(param_1 + 0x60) & 8) != 0) {
    if (bVar2) {
      uVar6 = (uint)*(byte *)(param_1[0x30] + 0x2ef);
    }
    else {
      uVar6 = 0;
    }
    *(uint *)(param_1 + 0x60) = (uVar6 & 1) << 2 | *(uint *)(param_1 + 0x60) & 0xfffffff3;
  }
  if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x80000) == 0) {
    return;
  }
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0xc);
    if (iVar1 < (int)DAT_1469e91c4) {
      uVar13 = iVar1 >> 0x1f & 0xffff;
      uVar6 = iVar1 + uVar13;
      pwVar17 = (wchar_t *)
                (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar6 >> 0x10) * 8) +
                (longlong)(int)((uVar6 & 0xffff) - uVar13) * 0x18);
    }
    if ((*(uint *)(pwVar17 + 4) >> 0x1d & 1) == 0) {
      bVar2 = true;
      goto LAB_142351e6f;
    }
  }
  bVar2 = false;
LAB_142351e6f:
  if (bVar2) {
    lVar8 = FUN_14046f570(param_1);
    if (*(longlong *)(lVar8 + 0x158) != 0) {
      UAvoidanceManager::RegisterMovementComponent
                (*(longlong *)(lVar8 + 0x158),param_1,(int)param_1[0x9d]);
    }
  }
  return;
}



// FUNCTION 142351eb0 FUN_142351eb0 body=202 status=ok
// SIG undefined FUN_142351eb0(void)

void FUN_142351eb0(longlong param_1,undefined4 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res10;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_74;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  *(undefined4 *)(param_1 + 0x310) = param_2;
  *(undefined4 *)(param_1 + 0x30c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x308) = 0x3f800000;
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    lVar2 = FUN_14233c7a0();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_1 + 0x6b0);
      local_38 = 0;
      local_28 = 0;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        local_88 = (undefined4)lVar2;
        uStack_84 = (undefined4)((ulonglong)lVar2 >> 0x20);
        uStack_80 = (undefined4)uVar1;
        uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
        *(undefined4 *)(puVar3 + 1) = local_88;
        *(undefined4 *)((longlong)puVar3 + 0xc) = uStack_84;
        *(undefined4 *)(puVar3 + 2) = uStack_80;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_7c;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = CONCAT44(uStack_74,param_2);
      }
      local_68[0] = FUN_1423320c0;
      FUN_1422f8a30(local_68,local_res10);
    }
  }
  return;
}



// FUNCTION 142351f80 FUN_142351f80 body=63 status=ok
// SIG undefined FUN_142351f80(void)

void FUN_142351f80(longlong param_1,float param_2)

{
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_2) && (fVar1 = param_2, 90.0 <= param_2)) {
    fVar1 = 90.0;
  }
  *(float *)(param_1 + 0x240) = fVar1;
  fVar1 = _guard_xfg_dispatch_icall_nop(fVar1 * 0.017453292);
  *(float *)(param_1 + 0x244) = fVar1;
  return;
}



// FUNCTION 142351fc0 FUN_142351fc0 body=90 status=ok
// SIG undefined FUN_142351fc0(void)

void FUN_142351fc0(longlong param_1,float param_2)

{
  float _X;
  float fVar1;
  
  fVar1 = 0.0;
  if ((0.0 <= param_2) && (fVar1 = param_2, 1.0 <= param_2)) {
    fVar1 = 1.0;
  }
  *(float *)(param_1 + 0x244) = fVar1;
  _X = -1.0;
  if ((-1.0 <= fVar1) && (_X = fVar1, 1.0 <= fVar1)) {
    _X = 1.0;
  }
  fVar1 = _guard_xfg_dispatch_icall_nop(_X);
  *(float *)(param_1 + 0x240) = fVar1 * 57.295776;
  return;
}



// FUNCTION 142352020 FUN_142352020 body=442 status=ok
// SIG undefined FUN_142352020(void)

void FUN_142352020(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong *plVar8;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  code *local_68 [2];
  undefined1 local_58 [32];
  undefined8 local_38;
  undefined4 local_28;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x2d8);
    plVar4 = (longlong *)*plVar1;
    iVar2 = *(int *)(param_1 + 0x2e0);
    plVar8 = plVar4 + (longlong)iVar2 * 4;
    for (; plVar4 != plVar8; plVar4 = plVar4 + 4) {
      if (*plVar4 == param_2) {
        plVar4[3] = param_3;
        goto LAB_1423520cd;
      }
    }
    *(int *)(param_1 + 0x2e0) = iVar2 + 1;
    if (*(int *)(param_1 + 0x2e4) < iVar2 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(plVar1,iVar2);
    }
    lVar5 = *plVar1;
    lVar7 = (longlong)iVar2 * 0x20;
    *(undefined8 *)(lVar7 + lVar5) = 0;
    *(undefined4 *)(lVar7 + 8 + lVar5) = 0;
    *(undefined1 *)(lVar7 + 0xc + lVar5) = 0;
    *(undefined4 *)(lVar7 + 0x10 + lVar5) = 0;
    *(undefined8 *)(lVar7 + 0x18 + lVar5) = 0;
    *(longlong *)(lVar7 + *plVar1) = param_2;
    *(longlong *)(lVar7 + 0x18 + *plVar1) = param_3;
LAB_1423520cd:
    if (((*(byte *)(param_1 + 0xba) & 4) != 0) && (DAT_146b17150 != 0)) {
      if (*(int *)(param_1 + 0x2f4) == -1) {
        lVar5 = FUN_14046f570(param_1);
        if (lVar5 == 0) {
          lVar5 = FUN_142875430(DAT_146b17150);
        }
        else {
          lVar5 = UWorld::GetAudioDevice(lVar5);
        }
      }
      else {
        lVar5 = FUN_1428742d0();
        if (lVar5 == 0) {
          return;
        }
        lVar5 = FAudioDeviceManager::GetAudioDevice(lVar5,*(undefined4 *)(param_1 + 0x2f4));
      }
      if (lVar5 != 0) {
        uVar3 = *(undefined8 *)(param_1 + 0x6b0);
        local_38 = 0;
        local_28 = 0;
        puVar6 = (undefined8 *)FUN_140438ef0(0x28,local_58);
        if (puVar6 != (undefined8 *)0x0) {
          local_88 = (undefined4)lVar5;
          uStack_84 = (undefined4)((ulonglong)lVar5 >> 0x20);
          uStack_80 = (undefined4)uVar3;
          uStack_7c = (undefined4)((ulonglong)uVar3 >> 0x20);
          *puVar6 = &PTR_FUN_143ff7760;
          *(undefined4 *)(puVar6 + 1) = local_88;
          *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_84;
          *(undefined4 *)(puVar6 + 2) = uStack_80;
          *(undefined4 *)((longlong)puVar6 + 0x14) = uStack_7c;
          puVar6[3] = param_2;
          puVar6[4] = param_3;
        }
        local_68[0] = FUN_1423320f0;
        FUN_1422f8a30(local_68,0);
      }
    }
  }
  return;
}



// FUNCTION 1423521e0 FUN_1423521e0 body=168 status=ok
// SIG undefined FUN_1423521e0(void)

undefined1 FUN_1423521e0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((*(byte *)(param_2 + 0xc) & 2) != 0) {
    cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
    if (cVar2 == '\0') {
      lVar1 = *(longlong *)(param_1 + 0x118);
      if (lVar1 == 0) {
        lVar1 = FUN_14046f570(param_1);
        uVar4 = *(undefined8 *)(lVar1 + 0x30);
      }
      else {
        cVar2 = UObjectBaseUtility::IsTemplate(lVar1,0x30);
        if (cVar2 != '\0') {
          return 0;
        }
        uVar4 = AActor::GetLevel(lVar1);
      }
      if (((*(byte *)(param_2 + 0xc) & 4) == 0) && (*(char *)(param_2 + 0xf) == '\0')) {
        uVar3 = 0;
      }
      else {
        uVar3 = 1;
      }
      FUN_14288e3d0(param_2,uVar3);
      FTickFunction::RegisterTickFunction(param_2,uVar4);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142352290 FUN_142352290 body=691 status=ok
// SIG undefined FUN_142352290(void)

void FUN_142352290(longlong param_1,longlong param_2,undefined4 param_3,byte param_4)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  undefined1 local_res8 [8];
  longlong local_res10;
  undefined4 local_res18;
  byte local_res20;
  int local_a8 [2];
  ulonglong local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 *local_68;
  longlong local_60;
  int *local_58;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  iVar4 = DAT_1464a820c;
  if (((DAT_146aeffe8 != 0x800) && (iVar4 = DAT_1464a8208, DAT_146aeffe8 != 0x1000)) ||
     (uVar3 = DAT_146aefff0, iVar4 != 0)) {
    uVar3 = DAT_146aeffec | DAT_146aeffe8;
  }
  iVar11 = 0;
  *(uint *)(param_1 + 8) = uVar3 | 0xff;
  iVar4 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if ((param_2 != 0) && (iVar4 = 0, 0 < *(int *)(param_2 + 0x28))) {
    uStack_80 = local_res8;
    local_88 = &LAB_14043a650;
    local_98 = 0;
    iVar12 = iVar11;
    do {
      local_68 = &local_78;
      local_58 = local_a8;
      lVar5 = *(longlong *)(local_res10 + 0x20);
      if (*(longlong *)(local_res10 + 0x20) == 0) {
        lVar5 = local_res10;
      }
      local_res8[0] = 0;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      local_a8[0] = 0;
      lVar5 = *(longlong *)(lVar5 + local_98);
      LOCK();
      uVar6 = *(ulonglong *)(lVar5 + 8);
      if (uVar6 == 0) {
        *(ulonglong *)(lVar5 + 8) = 0;
        uVar6 = 0;
      }
      UNLOCK();
      uVar9 = uVar6 >> 0x1a;
      local_a0 = (ulonglong)((uint)uVar9 & 1);
      local_60 = param_1;
      uVar3 = FUN_14043a6c0(&local_68);
      while (uVar3 != 0) {
        uVar8 = (ulonglong)uVar3;
        uVar10 = (uVar6 & 0xfffffffffc000000) + 0x8000000;
        if (uVar10 >> 0x1a < uVar9) {
          LockFreeTagCounterHasOverflowed();
        }
        if (uVar3 == 0) {
          uVar9 = 0;
          uVar8 = uVar9;
        }
        else {
          uVar9 = (&DAT_1468a81f8)[uVar3 >> 0xe] + (ulonglong)(uVar3 & 0x3fff) * 0x18;
        }
        *(uint *)(uVar9 + 0x10) = (uint)uVar6 & 0x3ffffff;
        LOCK();
        bVar13 = uVar6 == *(ulonglong *)(lVar5 + 8);
        if (bVar13) {
          *(ulonglong *)(lVar5 + 8) = uVar10 | uVar8;
        }
        UNLOCK();
        if (bVar13) {
          bVar13 = true;
          goto LAB_142352497;
        }
        LOCK();
        uVar6 = *(ulonglong *)(lVar5 + 8);
        if (uVar6 == 0) {
          *(ulonglong *)(lVar5 + 8) = 0;
          uVar6 = 0;
        }
        UNLOCK();
        uVar9 = uVar6 >> 0x1a;
        local_a0 = (ulonglong)((uint)uVar9 & 1);
        uVar3 = FUN_14043a6c0(&local_68);
      }
      if (local_a8[0] != 0) {
        FLockFreeLinkPolicy::FreeLockFreeLink();
      }
      bVar13 = false;
LAB_142352497:
      iVar4 = iVar12 + 1;
      if (bVar13) {
        iVar4 = iVar12;
      }
      local_98 = local_98 + 8;
      iVar11 = iVar11 + 1;
      iVar12 = iVar4;
    } while (iVar11 < *(int *)(local_res10 + 0x28));
  }
  uVar2 = local_res18;
  LOCK();
  piVar1 = (int *)(param_1 + 0xc);
  iVar11 = *piVar1;
  *piVar1 = *piVar1 - ((uint)local_res20 + iVar4);
  UNLOCK();
  if (iVar11 == (uint)local_res20 + iVar4) {
    puVar7 = (undefined8 *)FTaskGraphInterface::Get();
    (**(code **)*puVar7)(puVar7,param_1,*(undefined4 *)(param_1 + 8),uVar2);
  }
  return;
}



// FUNCTION 142352550 FUN_142352550 body=15 status=ok
// SIG undefined FUN_142352550(void)

byte FUN_142352550(longlong param_1)

{
  return ~(*(byte *)(param_1 + 0xba) >> 2) & 1;
}



// FUNCTION 142352560 FUN_142352560 body=168 status=ok
// SIG undefined FUN_142352560(void)

undefined4 FUN_142352560(longlong param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined4 in_EAX;
  uint3 uVar5;
  int iVar4;
  
  if (((*(float *)(param_1 + 0x380) == *(float *)(param_1 + 0x18c)) &&
      (*(float *)(param_1 + 900) == *(float *)(param_1 + 400))) &&
     (*(float *)(param_1 + 0x388) == *(float *)(param_1 + 0x194))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  uVar5 = (uint3)((uint)in_EAX >> 8);
  if (((*(float *)(lVar1 + 0x220) == *(float *)(param_1 + 0x35c)) &&
      (*(float *)(lVar1 + 0x224) == *(float *)(param_1 + 0x360))) &&
     (*(float *)(lVar1 + 0x228) == *(float *)(param_1 + 0x364))) {
    iVar4 = (uint)uVar5 << 8;
  }
  else {
    iVar4 = CONCAT31(uVar5,1);
  }
  if (((!bVar3) && ((char)iVar4 == '\0')) &&
     (auVar2._4_4_ = -(uint)(*(float *)(param_1 + 0x374) != *(float *)(lVar1 + 0x214)),
     auVar2._0_4_ = -(uint)(*(float *)(param_1 + 0x370) != *(float *)(lVar1 + 0x210)),
     auVar2._8_4_ = -(uint)(*(float *)(param_1 + 0x378) != *(float *)(lVar1 + 0x218)),
     auVar2._12_4_ = -(uint)(*(float *)(param_1 + 0x37c) != *(float *)(lVar1 + 0x21c)),
     iVar4 = movmskps(iVar4,auVar2), iVar4 == 0)) {
    return 0;
  }
  return CONCAT31((int3)((uint)iVar4 >> 8),1);
}



// FUNCTION 142352610 FUN_142352610 body=239 status=ok
// SIG undefined FUN_142352610(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_142352610(longlong *param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  char cVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((0.0001 < *(float *)(param_4 + 0x34)) &&
     (((0.0001 < ABS(*(float *)(param_4 + 0x2c) - *(float *)(param_4 + 0x38)) ||
       (0.0001 < ABS(*(float *)(param_4 + 0x30) - *(float *)(param_4 + 0x3c)))) ||
      (0.0001 < ABS(*(float *)(param_4 + 0x34) - *(float *)(param_4 + 0x40)))))) {
    lVar1 = param_1[0x2f];
    local_18 = *(undefined4 *)(lVar1 + 0x220);
    local_14 = *(undefined4 *)(lVar1 + 0x224);
    local_10 = *(undefined4 *)(lVar1 + 0x228);
    lVar1 = *(longlong *)(param_1[0x44] + 0x4d0);
    uVar4 = *(uint *)(lVar1 + 0x230) & _DAT_146af0070;
    uVar5 = *(uint *)(lVar1 + 0x234) & uRam0000000146af0074;
    uVar6 = *(uint *)(lVar1 + 0x238) & uRam0000000146af0078;
    uVar7 = *(uint *)(lVar1 + 0x23c) & uRam0000000146af007c;
    auVar8._4_4_ = uVar5;
    auVar8._0_4_ = uVar4;
    auVar8._8_4_ = uVar6;
    auVar8._12_4_ = uVar7;
    auVar9._4_4_ = uVar6;
    auVar9._0_4_ = uVar5;
    auVar9._8_4_ = uVar4;
    auVar9._12_4_ = uVar7;
    auVar9 = minps(auVar8,auVar9);
    auVar2._4_4_ = uVar4;
    auVar2._0_4_ = uVar6;
    auVar2._8_4_ = uVar5;
    auVar2._12_4_ = uVar7;
    auVar9 = minps(auVar9,auVar2);
    cVar3 = (**(code **)(*param_1 + 0x868))
                      (param_1,&local_18,param_4 + 0x20,auVar9._0_4_ * *(float *)(lVar1 + 0x714));
    if (cVar3 != '\0') {
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142352700 FUN_142352700 body=124 status=ok
// SIG undefined FUN_142352700(void)

undefined8 FUN_142352700(longlong param_1,byte *param_2,char param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float extraout_XMM0_Da;
  float fVar4;
  
  if (((*param_2 & 1) != 0) && ((*param_2 & 2) == 0)) {
    fVar4 = *(float *)(param_1 + 0x2ec);
    if (fVar4 <= 0.0) {
      fVar4 = 0.0;
    }
    if (0.15 < fVar4) {
      if ((param_3 != '\0') &&
         (fVar4 = *(float *)(param_2 + 0x20), fVar1 = *(float *)(param_2 + 0x14),
         fVar2 = *(float *)(param_2 + 0x24), fVar3 = *(float *)(param_2 + 0x18), FUN_142340240(),
         (fVar2 - fVar3) * (fVar2 - fVar3) + (fVar4 - fVar1) * (fVar4 - fVar1) <=
         extraout_XMM0_Da * extraout_XMM0_Da)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 142352780 FUN_142352780 body=131 status=ok
// SIG undefined FUN_142352780(void)

ulonglong FUN_142352780(longlong param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  float local_28 [4];
  undefined1 local_18 [16];
  
  uVar3 = *(ulonglong *)(param_1 + 0x220);
  plVar2 = *(longlong **)(uVar3 + 0x490);
  if (plVar2 != (longlong *)0x0) {
    uVar3 = (**(code **)(*plVar2 + 0x720))(plVar2,local_28);
    if (0.0 < *(float *)(param_1 + 0x194)) {
      if (*(float *)(param_1 + 0x40c) <= local_28[0] && local_28[0] != *(float *)(param_1 + 0x40c))
      {
        puVar4 = (undefined8 *)FRotator::Vector(local_28,local_18);
        *param_2 = *puVar4;
        uVar1 = *(undefined4 *)(puVar4 + 1);
        *(undefined4 *)(param_2 + 1) = uVar1;
        return CONCAT71((uint7)(uint3)((uint)uVar1 >> 8),1);
      }
    }
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 142352810 ShouldRemainVertical body=52 status=ok
// SIG undefined ShouldRemainVertical(void)

undefined1 UCharacterMovementComponent::ShouldRemainVertical(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x558))(param_1);
    if (cVar1 == '\0') {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 142352850 FUN_142352850 body=35 status=ok
// SIG undefined FUN_142352850(void)

bool FUN_142352850(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  undefined1 local_res8 [32];
  
  piVar1 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                            (param_1 + 0x100,local_res8,param_2);
  return *piVar1 != -1;
}



// FUNCTION 1423528a0 ShouldSkipProperty body=69 status=ok
// SIG undefined ShouldSkipProperty(void)

undefined8 FComponentPropertyWriter::ShouldSkipProperty(longlong param_1,longlong param_2)

{
  int *piVar1;
  undefined1 local_res10 [24];
  
  if (((*(ulonglong *)(param_2 + 0x38) >> 0xd & 1) == 0) &&
     ((*(ulonglong *)(param_2 + 0x38) & 0x200000001) != 0)) {
    piVar1 = (int *)TSet<AActor_*,DefaultKeyFuncs<AActor_*,0>,FDefaultSetAllocator>::FindId
                              (param_1 + 0xb0,local_res10,param_2);
    if (*piVar1 == -1) {
      return 0;
    }
  }
  return 1;
}



// FUNCTION 1423528f0 FUN_1423528f0 body=91 status=ok
// SIG undefined FUN_1423528f0(void)

undefined1 FUN_1423528f0(undefined8 param_1)

{
  undefined1 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_142379760();
  lVar3 = FUN_14046f570(param_1);
  if (lVar3 != 0) {
    uVar4 = FUN_14046f570(param_1);
    cVar2 = UWorld::IsInSeamlessTravel(uVar4);
    if (cVar2 != '\0') {
      uVar1 = 1;
    }
    return uVar1;
  }
  return uVar1;
}



// FUNCTION 142352950 FUN_142352950 body=2439 status=ok
// SIG undefined FUN_142352950(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142352950(longlong *param_1,undefined4 param_2)

{
  float *pfVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  uint *puVar13;
  longlong lVar14;
  longlong lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_3c8 [32];
  undefined8 local_3a8;
  undefined8 local_398;
  float local_390;
  undefined8 local_388;
  float local_380;
  undefined1 local_378 [16];
  longlong *local_368;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined4 uStack_358;
  undefined4 uStack_354;
  undefined8 uStack_350;
  undefined4 local_348;
  undefined4 uStack_344;
  uint local_338 [2];
  uint local_330;
  undefined8 local_32c;
  undefined1 local_320 [12];
  undefined4 local_314;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_2a0;
  undefined4 local_298;
  code *local_288 [2];
  undefined1 local_278 [32];
  undefined8 local_258;
  undefined4 local_248;
  undefined1 local_238 [448];
  ulonglong local_78;
  
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_3c8;
  cVar8 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar8 == '\0') {
    return;
  }
  plVar5 = (longlong *)param_1[0x2f];
  if (*(char *)((longlong)plVar5 + 0x24e) != '\x02') {
    return;
  }
  local_398 = 0;
  cVar8 = (**(code **)(*plVar5 + 0x400))(plVar5,0);
  if (cVar8 != '\0') {
    return;
  }
  lVar10 = param_1[0x44];
  cVar8 = *(char *)(lVar10 + 0x128);
  if ((((cVar8 == '\x01') && (*(float *)(lVar10 + 0xb0) == 0.0)) &&
      (*(float *)(lVar10 + 0xb4) == 0.0)) && (*(float *)(lVar10 + 0xb8) == 0.0)) {
    fVar16 = *(float *)(lVar10 + 0xbc);
    fVar17 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
    if (ABS(fVar16) < ABS(fVar17)) {
      fVar17 = fVar16;
    }
    fVar16 = fVar16 - fVar17;
    if (fVar16 < 0.0) {
      fVar16 = fVar16 + 360.0;
    }
    if (fVar16 == 0.0) {
      fVar16 = *(float *)(lVar10 + 0xc0);
      fVar17 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
      if (ABS(fVar16) < ABS(fVar17)) {
        fVar17 = fVar16;
      }
      fVar16 = fVar16 - fVar17;
      if (fVar16 < 0.0) {
        fVar16 = fVar16 + 360.0;
      }
      if (fVar16 == 0.0) {
        fVar16 = *(float *)(lVar10 + 0xc4);
        fVar17 = (float)(int)(fVar16 * 0.0027777778) * 360.0;
        if (ABS(fVar16) < ABS(fVar17)) {
          fVar17 = fVar16;
        }
        fVar16 = fVar16 - fVar17;
        if (fVar16 < 0.0) {
          fVar16 = fVar16 + 360.0;
        }
        if (((fVar16 == 0.0) && (*(float *)(lVar10 + 0x98) == 0.0)) &&
           ((*(float *)(lVar10 + 0x9c) == 0.0 && (*(float *)(lVar10 + 0xa0) == 0.0)))) {
          return;
        }
      }
    }
  }
  if ((*(longlong *)(lVar10 + 0x508) == 0) && (*(char *)(lVar10 + 0x530) != '\0')) {
    return;
  }
  FUN_14237e6d0(local_238,param_1[0x2f],*(uint *)(param_1 + 0x60) >> 5 & 1,1);
  bVar7 = false;
  bVar6 = bVar7;
  if (cVar8 == '\x01') {
    if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x40) == 0) {
      bVar6 = false;
      if ((*(uint *)(param_1 + 0x60) & 0x100) != 0) {
LAB_142352bfd:
        (**(code **)(*param_1 + 0x978))(param_1);
        bVar6 = bVar7;
      }
    }
    else {
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffbf;
      lVar10 = FUN_14046f570(param_1);
      uVar3 = *(uint *)((longlong)param_1 + 0x4b4);
      *(undefined4 *)((longlong)param_1 + 0x83c) = *(undefined4 *)(lVar10 + 0x790);
      bVar7 = true;
      bVar6 = bVar7;
      if ((char)uVar3 < '\0') {
        (**(code **)(*param_1 + 0x5b0))(param_1);
        *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffff7f;
      }
      else if (((uVar3 & 0x20) != 0) || ((*(uint *)(param_1 + 0x60) & 0x100) != 0)) {
        *(uint *)((longlong)param_1 + 0x4b4) = uVar3 & 0xffffffdf;
        goto LAB_142352bfd;
      }
    }
  }
  if ((char)param_1[0x49] == '\0') {
    (**(code **)(*param_1 + 0x6f8))();
    FUN_14237f990(local_238);
    return;
  }
  (**(code **)(*param_1 + 0x628))(param_1);
  (**(code **)(*param_1 + 0x6f8))(param_1);
  pfVar1 = (float *)((longlong)param_1 + 0x18c);
  fVar16 = *(float *)(param_1 + 0x32);
  fVar17 = *pfVar1 * *pfVar1 + fVar16 * fVar16 +
           *(float *)((longlong)param_1 + 0x194) * *(float *)((longlong)param_1 + 0x194);
  if (fVar17 == 1.0) {
    lVar10 = *(longlong *)pfVar1;
    fVar19 = *(float *)((longlong)param_1 + 0x194);
  }
  else if (1e-08 <= fVar17) {
    auVar20 = rsqrtss(ZEXT416((uint)fVar17),ZEXT416((uint)fVar17));
    fVar18 = auVar20._0_4_;
    fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
    fVar18 = fVar18 + fVar18 * (0.5 - fVar17 * 0.5 * fVar18 * fVar18);
    fVar19 = fVar18 * *(float *)((longlong)param_1 + 0x194);
    fVar17 = fVar18 * fVar16;
    lVar10 = CONCAT44(fVar17,fVar18 * *pfVar1);
    local_398 = lVar10;
    local_390 = fVar19;
  }
  else {
    local_390 = DAT_1468b5d98;
    lVar10 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar17 = DAT_1468b5d90;
    fVar19 = DAT_1468b5d98;
    local_398 = lVar10;
  }
  param_1[0x6a] = lVar10;
  *(float *)(param_1 + 0x6b) = fVar19;
  *(undefined4 *)(param_1 + 0x76) = 0x3f800000;
  (**(code **)(*param_1 + 0x5e8))(param_1,param_2,fVar17);
  lVar10 = param_1[0x2f];
  uVar2 = *(undefined8 *)pfVar1;
  uVar4 = *(undefined4 *)((longlong)param_1 + 0x194);
  local_398._0_4_ = *(undefined4 *)(lVar10 + 0x220);
  local_398._4_4_ = *(undefined4 *)(lVar10 + 0x224);
  local_390 = *(float *)(lVar10 + 0x228);
  if (((bVar6) && ((*(uint *)(param_1 + 0x60) & 0x4000) != 0)) && (DAT_146531c20 != 0))
  goto LAB_1423530ad;
  local_338[0] = local_338[0] & 0xfffffffe;
  local_330 = local_330 & 0xfffffff8;
  local_2b8 = 0xffffffff00000000;
  uStack_2b0 = 0xffffffff00000000;
  local_32c = 0;
  local_2bc = 0xffffffff;
  local_2a8 = 0;
  local_2a0 = 0;
  local_298 = 0;
  _guard_xfg_dispatch_icall_nop(local_320,0,0x90);
  local_314 = 0x3f800000;
  (**(code **)(*param_1 + 0x7b0))(param_1,pfVar1,param_2,local_338);
  if ((char)param_1[0x49] == '\x02') {
    FUN_14233b6a0(param_1,param_2);
    goto LAB_1423530ad;
  }
  cVar9 = (**(code **)(*param_1 + 0x560))(param_1);
  if ((cVar9 == '\0') && ((char)param_1[0x49] != '\x03')) goto LAB_1423530ad;
  if (((*(byte *)(param_1[0x44] + 0x56c) & 0x80) == 0) || (cVar8 != '\x01')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((local_338[0] & 1) == 0) {
    if (0.0 < *(float *)((longlong)param_1 + 0x194)) {
      *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff8;
      *(undefined8 *)((longlong)param_1 + 0x414) = 0;
      _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
      *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
    }
    else {
      if (((*pfVar1 == 0.0) && (*(float *)(param_1 + 0x32) == 0.0)) &&
         (*(float *)((longlong)param_1 + 0x194) == 0.0)) {
        uVar11 = 1;
      }
      else {
        uVar11 = 0;
      }
      local_3a8 = 0;
      local_388 = *(undefined8 *)(param_1[0x2f] + 0x220);
      local_380 = *(float *)(param_1[0x2f] + 0x228);
      (**(code **)(*param_1 + 0x870))(param_1,&local_388,param_1 + 0x82,uVar11);
    }
  }
  else {
    puVar13 = (uint *)(param_1 + 0x82);
    *puVar13 = *puVar13 & 0xfffffff8;
    *puVar13 = *puVar13 | local_330 & 7;
    *(undefined4 *)((longlong)param_1 + 0x414) = (undefined4)local_32c;
    *(undefined4 *)(param_1 + 0x83) = local_32c._4_4_;
    FUN_140729f20(param_1 + 0x84);
  }
  puVar13 = (uint *)(param_1 + 0x82);
  if (((byte)*puVar13 & 3) != 3) {
    if ((!bVar6) &&
       (((*(float *)((longlong)param_1 + 0x194) <= 0.0 || ((*(byte *)(param_1 + 0x45) & 1) != 0)) ||
        (cVar8 = (**(code **)(*(longlong *)param_1[0x44] + 0x888))(), cVar8 == '\0')))) {
      local_380 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
      local_3a8 = CONCAT44(local_3a8._4_4_,param_2);
      local_388 = 0;
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x678))(param_1,local_378,pfVar1,&local_388);
      *(undefined8 *)pfVar1 = *puVar12;
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar12 + 1);
    }
    (**(code **)(*param_1 + 0x5a0))(param_1,3);
    goto LAB_1423530ad;
  }
  cVar8 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar8 != '\0') {
    if ((local_338[0] & 1) == 0) {
      (**(code **)(*param_1 + 0x5e0))(param_1);
    }
    uVar11 = FWeakObjectPtr::Get((longlong)param_1 + 0x494);
    (**(code **)(*param_1 + 0x6d8))(param_1,uVar11,param_1[0x94],1);
    goto LAB_1423530ad;
  }
  if ((char)param_1[0x49] != '\x03') goto LAB_1423530ad;
  if (*(float *)((longlong)param_1 + 0x414) <= 1.9) {
LAB_142353092:
    (**(code **)(*param_1 + 0x740))(param_1,param_1 + 0x84);
  }
  else {
    if (bVar6) {
      if (*(float *)((longlong)param_1 + 0x414) <= 2.4) goto LAB_142353092;
    }
    else {
      local_380 = (float)(**(code **)(*param_1 + 0x3f8))(param_1);
      local_3a8 = CONCAT44(local_3a8._4_4_,param_2);
      local_388 = 0;
      puVar12 = (undefined8 *)(**(code **)(*param_1 + 0x678))(param_1,local_378,pfVar1,&local_388);
      *(undefined8 *)pfVar1 = *puVar12;
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar12 + 1);
    }
    *puVar13 = *puVar13 & 0xfffffff8;
    *(undefined8 *)((longlong)param_1 + 0x414) = 0;
    _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
    *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  }
LAB_1423530ad:
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffbfffff;
  FUN_14237f990(local_238);
  uStack_35c = (undefined4)local_398;
  uStack_358 = local_398._4_4_;
  uStack_354 = local_390;
  local_258 = 0;
  local_248 = 0;
  local_368 = param_1;
  uStack_360 = param_2;
  uStack_350 = uVar2;
  local_348 = uVar4;
  puVar12 = (undefined8 *)FUN_140438ef0(0x30,local_278);
  if (puVar12 != (undefined8 *)0x0) {
    *puVar12 = &PTR_FUN_143f4d098;
    puVar12[1] = local_368;
    puVar12[2] = CONCAT44(uStack_35c,uStack_360);
    puVar12[3] = CONCAT44(uStack_354,uStack_358);
    puVar12[4] = uStack_350;
    puVar12[5] = CONCAT44(uStack_344,local_348);
  }
  local_288[0] = FUN_142332210;
  FUN_14234b4d0(param_1,local_288);
  (**(code **)(*param_1 + 0x600))(param_1);
  (**(code **)(*param_1 + 0x470))(param_1);
  lVar10 = param_1[0x2f];
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
  if (lVar10 == 0) {
    local_388 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    local_380 = DAT_1468b5d98;
  }
  else {
    local_388 = *(undefined8 *)(lVar10 + 0x220);
    local_380 = *(float *)(lVar10 + 0x228);
  }
  *(undefined8 *)((longlong)param_1 + 0x35c) = local_388;
  *(float *)((longlong)param_1 + 0x364) = local_380;
  lVar14 = _DAT_1464aa810;
  lVar15 = _DAT_1464aa818;
  if (lVar10 != 0) {
    lVar14 = *(longlong *)(lVar10 + 0x210);
    lVar15 = *(longlong *)(lVar10 + 0x218);
  }
  param_1[0x6e] = lVar14;
  param_1[0x6f] = lVar15;
  param_1[0x70] = *(longlong *)pfVar1;
  *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)((longlong)param_1 + 0x194);
  return;
}



// FUNCTION 1423532e0 FUN_1423532e0 body=772 status=ok
// SIG undefined FUN_1423532e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423532e0(longlong *param_1,float param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  int iVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 local_270;
  undefined4 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  float local_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  undefined4 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  longlong local_218;
  longlong lStack_210;
  undefined1 local_208 [448];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  if (((param_1[0x44] != 0) && (*(longlong *)(param_1[0x44] + 0x4c0) != 0)) && (0.0 < param_2)) {
    FUN_14237e6d0(local_208,param_1[0x2f],*(uint *)(param_1 + 0x60) >> 5 & 1,1);
    FUN_1423370f0(param_1,&local_238,param_3);
    puVar1 = (undefined8 *)((longlong)param_1 + 0x18c);
    *(undefined1 *)(param_1 + 0xf8) = 1;
    param_1[0xfe] = local_218;
    param_1[0xff] = lStack_210;
    *(undefined4 *)(param_1 + 0xfc) = local_228;
    *(undefined4 *)((longlong)param_1 + 0x7e4) = uStack_224;
    *(undefined4 *)(param_1 + 0xfd) = uStack_220;
    *(undefined4 *)((longlong)param_1 + 0x7ec) = uStack_21c;
    *(float *)(param_1 + 0xfa) = local_238;
    *(float *)((longlong)param_1 + 0x7d4) = fStack_234;
    *(float *)(param_1 + 0xfb) = fStack_230;
    *(float *)((longlong)param_1 + 0x7dc) = fStack_22c;
    auVar5._4_4_ = DAT_146531a94;
    auVar5._0_4_ = DAT_146531a90;
    auVar5._8_4_ = DAT_146531a98;
    auVar5._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 0xfe) = auVar5;
    *(undefined4 *)((longlong)param_1 + 0x7c4) = 0x3f800000;
    local_260 = local_228;
    local_25c = uStack_224;
    local_258 = uStack_220;
    local_278 = puVar1;
    plVar12 = (longlong *)(**(code **)(*param_1 + 0xa70))(param_1,&local_248,&local_260,param_2);
    param_1[0x100] = *plVar12;
    *(int *)(param_1 + 0x101) = (int)plVar12[1];
    puVar13 = (undefined8 *)
              (**(code **)(*param_1 + 0xa80))(param_1,&local_248,param_1 + 0x100,puVar1);
    *puVar1 = *puVar13;
    *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar13 + 1);
    if ((*(byte *)((longlong)param_1 + 0x4b4) & 0x80) != 0) {
      (**(code **)(*param_1 + 0x5b0))(param_1,*(undefined1 *)(param_1[0x44] + 0x564));
      *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffff7f;
    }
    uVar10 = (**(code **)(*param_1 + 0x610))(param_1,param_2,0);
    local_268 = 0x322bcc77;
    auVar3._4_4_ = -(uint)(1e-08 < (float)((uint)(fStack_234 - DAT_1464aa814) & uRam0000000146af0074
                                          ));
    auVar3._0_4_ = -(uint)(1e-08 < (float)((uint)(local_238 - DAT_1464aa810) & _DAT_146af0070));
    auVar3._8_4_ = -(uint)(1e-08 < (float)((uint)(fStack_230 - DAT_1464aa818) & uRam0000000146af0078
                                          ));
    auVar3._12_4_ =
         -(uint)(1e-08 < (float)((uint)(fStack_22c - DAT_1464aa81c) & uRam0000000146af007c));
    iVar11 = movmskps(uVar10,auVar3);
    if ((iVar11 != 0) &&
       (auVar4._4_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa814 + fStack_234) &
                                              uRam0000000146af0074)),
       auVar4._0_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa810 + local_238) & _DAT_146af0070)),
       auVar4._8_4_ = -(uint)(1e-08 < (float)((uint)(DAT_1464aa818 + fStack_230) &
                                             uRam0000000146af0078)),
       auVar4._12_4_ =
            -(uint)(1e-08 < (float)((uint)(DAT_1464aa81c + fStack_22c) & uRam0000000146af007c)),
       iVar11 = movmskps(iVar11,auVar4), iVar11 != 0)) {
      lVar2 = param_1[0x2f];
      fVar6 = *(float *)(lVar2 + 0x210);
      fVar7 = *(float *)(lVar2 + 0x214);
      fVar8 = *(float *)(lVar2 + 0x218);
      fVar9 = *(float *)(lVar2 + 0x21c);
      local_248 = fVar9 * local_238 * _DAT_146af0160 + fStack_22c * fVar6 +
                  fVar8 * fStack_234 * _DAT_146af0150 + fVar7 * fStack_230 * _DAT_146af0140;
      fStack_244 = fVar8 * local_238 * fRam0000000146af0164 + fStack_22c * fVar7 +
                   fVar9 * fStack_234 * fRam0000000146af0154 +
                   fVar6 * fStack_230 * fRam0000000146af0144;
      fStack_240 = fVar7 * local_238 * fRam0000000146af0168 + fStack_22c * fVar8 +
                   fVar6 * fStack_234 * fRam0000000146af0158 +
                   fVar9 * fStack_230 * fRam0000000146af0148;
      fStack_23c = fVar6 * local_238 * fRam0000000146af016c + fStack_22c * fVar9 +
                   fVar7 * fStack_234 * fRam0000000146af015c +
                   fVar8 * fStack_230 * fRam0000000146af014c;
      uVar14 = FUN_14247f500();
      FUN_14247ea90(uVar14);
      local_270 = 0;
      local_278 = (undefined8 *)0x0;
      (**(code **)(*param_1 + 0x488))(param_1,&DAT_1468b5d90,&local_248,1);
    }
    FUN_14237f990(local_208);
  }
  *(undefined1 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c4) = 0;
  return;
}



// FUNCTION 1423535f0 FUN_1423535f0 body=1604 status=ok
// SIG undefined FUN_1423535f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423535f0(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined1 local_78 [32];
  undefined8 local_58;
  undefined4 local_48;
  
  if (*(char *)((longlong)param_1 + 0x3f4) == '\x03') {
    lVar6 = param_1[0x2f];
    if (lVar6 == 0) {
      puVar2 = &local_f8;
      local_f8 = _DAT_1468b5d90;
      uStack_f0 = DAT_1468b5d98;
    }
    else {
      local_e8._0_4_ = *(undefined4 *)(lVar6 + 0x220);
      local_e8._4_4_ = *(undefined4 *)(lVar6 + 0x224);
      local_e0 = *(undefined4 *)(lVar6 + 0x228);
      puVar2 = &local_e8;
    }
    uVar3 = *(undefined8 *)((longlong)param_1 + 0x18c);
    uVar8 = *(undefined4 *)((longlong)param_1 + 0x194);
    (**(code **)(*param_1 + 0x920))();
    (**(code **)(*param_1 + 0x5b0))(param_1);
    (**(code **)(*param_1 + 0x470))(param_1);
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xffffffdf;
    FUN_14233a3f0(param_1[0x44] + 0x710);
    FRootMotionSourceGroup::Clear(param_1 + 0xc5);
    FRootMotionSourceGroup::Clear(param_1[0x44] + 0x5d0);
    uStack_b4 = *(undefined4 *)(puVar2 + 1);
    local_58 = 0;
    local_48 = 0;
    uStack_bc = (undefined4)*puVar2;
    uStack_b8 = (undefined4)((ulonglong)*puVar2 >> 0x20);
    local_c8 = param_1;
    uStack_c0 = param_2;
    uStack_b0 = uVar3;
    local_a8 = uVar8;
    puVar2 = (undefined8 *)FUN_140438ef0(0x30,local_78);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &PTR_FUN_143f4d098;
      puVar2[1] = local_c8;
      puVar2[2] = CONCAT44(uStack_bc,uStack_c0);
      puVar2[3] = CONCAT44(uStack_b4,uStack_b8);
      puVar2[4] = uStack_b0;
      puVar2[5] = CONCAT44(uStack_a4,local_a8);
    }
    local_88[0] = FUN_142332210;
    FUN_14234b4d0(param_1,local_88);
    lVar6 = param_1[0x2f];
    if (lVar6 == 0) {
      uStack_f0 = DAT_1468b5d98;
      puVar2 = &local_f8;
      local_f8 = _DAT_1468b5d90;
    }
    else {
      puVar2 = &local_e8;
      local_e8._0_4_ = *(undefined4 *)(lVar6 + 0x220);
      local_e0 = *(undefined4 *)(lVar6 + 0x228);
      local_e8._4_4_ = *(undefined4 *)(lVar6 + 0x224);
    }
    uVar8 = *(undefined4 *)(puVar2 + 1);
    *(undefined8 *)((longlong)param_1 + 0x35c) = *puVar2;
    *(undefined4 *)((longlong)param_1 + 0x364) = uVar8;
    uVar8 = DAT_1464aa810;
    uVar9 = DAT_1464aa814;
    uVar10 = DAT_1464aa818;
    uVar11 = DAT_1464aa81c;
    if (lVar6 != 0) {
      uVar8 = *(undefined4 *)(lVar6 + 0x210);
      uVar9 = *(undefined4 *)(lVar6 + 0x214);
      uVar10 = *(undefined4 *)(lVar6 + 0x218);
      uVar11 = *(undefined4 *)(lVar6 + 0x21c);
    }
    local_f8 = CONCAT44(uVar9,uVar8);
    param_1[0x6e] = local_f8;
    param_1[0x6f] = CONCAT44(uVar11,uVar10);
    param_1[0x70] = *(longlong *)((longlong)param_1 + 0x18c);
    *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)((longlong)param_1 + 0x194);
    return;
  }
  cVar1 = FUN_1423146c0(param_1[0x44]);
  if ((cVar1 == '\0') && (*(char *)(param_1[0x44] + 0x8ac) == '\0')) {
    cVar1 = FRootMotionSourceGroup::HasActiveRootMotionSources(param_1 + 0xc5);
    if (cVar1 == '\0') {
      if (*(char *)((longlong)param_1 + 0x80c) != '\0') {
        *(undefined1 *)((longlong)param_1 + 0x80c) = 0;
        FUN_14233a3f0(param_1[0x44] + 0x710,0);
        (**(code **)(*(longlong *)param_1[0x44] + 0x428))();
        (**(code **)(*(longlong *)param_1[0x44] + 0x848))();
        (**(code **)(*param_1 + 0x5b0))(param_1,*(undefined1 *)(param_1[0x44] + 0x564));
      }
      if ((*(uint *)(param_1 + 0x60) & 0x1000) == 0) {
        uVar3 = *(undefined8 *)(param_1[0x44] + 0x4c0);
      }
      else {
        uVar3 = 0;
      }
      FUN_1423267a0(&local_d8,uVar3);
      if ((*(byte *)(param_1[0x44] + 0x90) & 0x10) != 0) {
        cVar1 = FUN_1422358f0();
        if ((cVar1 == '\0') && (cVar1 = FUN_1423146e0(param_1[0x44]), cVar1 == '\0')) {
          (**(code **)(*param_1 + 0x900))(param_1,param_2);
          FUN_14237fa30(&local_d8);
          goto LAB_142353bf6;
        }
        (**(code **)(*param_1 + 0x8f8))(param_1,param_2);
      }
      FUN_14237fa30(&local_d8);
    }
    else {
      lVar6 = param_1[0x2f];
      lVar4 = param_1[0x44];
      *(undefined1 *)((longlong)param_1 + 0x80c) = 1;
      bVar7 = false;
      local_f8 = *(undefined8 *)(lVar6 + 0x220);
      uStack_f0 = *(undefined4 *)(lVar6 + 0x228);
      local_d8 = *(undefined4 *)(lVar6 + 0x210);
      uStack_d4 = *(undefined4 *)(lVar6 + 0x214);
      uStack_d0 = *(undefined4 *)(lVar6 + 0x218);
      uStack_cc = *(undefined4 *)(lVar6 + 0x21c);
      if (0 < *(int *)(lVar4 + 0x718)) {
        lVar6 = *(longlong *)(lVar4 + 0x710) + -0x188 + (longlong)*(int *)(lVar4 + 0x718) * 0x188;
        cVar1 = FUN_14231bd50(lVar4,lVar6);
        bVar7 = cVar1 != '\0';
        param_1[0x6a] = *(longlong *)(lVar6 + 0x150);
        *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(lVar6 + 0x158);
        (**(code **)(*(longlong *)param_1[0x44] + 0x438))((longlong *)param_1[0x44],lVar6 + 0x15c);
        param_1[0x70] = *(longlong *)(lVar6 + 0x15c);
        *(undefined4 *)(param_1 + 0x71) = *(undefined4 *)(lVar6 + 0x164);
        FUN_142465d80(param_1 + 0xc5,lVar6 + 0x50,1);
        lVar6 = param_1[0x44];
        if (*(int *)(lVar6 + 0x71c) < 0) {
          FUN_14233a3f0(lVar6 + 0x710,0);
        }
        else {
          iVar5 = *(int *)(lVar6 + 0x718);
          if (iVar5 != 0) {
            lVar4 = *(longlong *)(lVar6 + 0x710) + 0x58;
            do {
              if (*(longlong *)(lVar4 + 0x118) != 0) {
                FMemory::Free();
              }
              *(undefined ***)(lVar4 + -8) = &PTR__scalar_deleting_destructor__144080980;
              FUN_14074e760(lVar4 + 0x90);
              FUN_14074e810(lVar4);
              lVar4 = lVar4 + 0x188;
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
          }
          *(undefined4 *)(lVar6 + 0x718) = 0;
        }
      }
      (**(code **)(*param_1 + 0x8f8))(param_1,param_2);
      if (bVar7) {
        lVar6 = param_1[0x2f];
        local_98 = *(undefined8 *)(lVar6 + 0x210);
        uStack_90 = *(undefined8 *)(lVar6 + 0x218);
        local_e8._0_4_ = *(undefined4 *)(lVar6 + 0x220);
        local_e8._4_4_ = *(undefined4 *)(lVar6 + 0x224);
        local_e0 = *(undefined4 *)(lVar6 + 0x228);
        (**(code **)(param_1[0x43] + 0x20))(param_1 + 0x43,&local_f8,&local_d8,&local_e8,&local_98);
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0x80c) = 1;
    if (*(longlong *)(param_1[0x44] + 0x4c0) != 0) {
      FUN_142357d10(param_1,param_2);
      cVar1 = (**(code **)(*param_1 + 0x5c0))(param_1);
      if (cVar1 == '\0') {
        return;
      }
    }
    if ((char)param_1[0xf8] != '\0') {
      FUN_1423532e0(param_1,param_2,param_1 + 0xfa);
    }
    if (((*(byte *)(param_1 + 0x102) & 1) != 0) &&
       (cVar1 = FUN_1422358f0(param_1[0x44]), cVar1 == '\0')) {
      (**(code **)(*param_1 + 0x798))(param_1,param_2);
    }
    lVar6 = param_1[0x44];
    if ((lVar6 != 0) && (0 < *(int *)(lVar6 + 0x718))) {
      FUN_14231d870(lVar6,param_2);
    }
  }
LAB_142353bf6:
  if ((*(uint *)(param_1 + 0x60) & 0x1000) == 0) {
    (**(code **)(*param_1 + 0x920))(param_1,param_2);
  }
  return;
}



// FUNCTION 142353c40 FUN_142353c40 body=808 status=ok
// SIG undefined FUN_142353c40(void)

undefined8
FUN_142353c40(longlong *param_1,float *param_2,undefined4 param_3,undefined8 *param_4,byte *param_5,
             undefined1 param_6)

{
  char cVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  
  if ((*param_5 & 1) == 0) {
    return 0;
  }
  local_50 = *(float *)(param_4 + 1);
  local_58 = *param_4;
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if (cVar1 == '\0') goto LAB_142353f2a;
  if (local_50 <= 0.0) {
    if (((-0.0001 <= local_50) ||
        (1.9 < *(float *)((longlong)param_1 + 0x414) || *(float *)((longlong)param_1 + 0x414) == 1.9
        )) || ((*(byte *)(param_1 + 0x82) & 1) == 0)) goto LAB_142353f2a;
    local_60 = *(float *)((longlong)param_1 + 0x454);
    fVar3 = (float)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x44c) >> 0x20);
    local_68._0_4_ = (float)*(undefined8 *)((longlong)param_1 + 0x44c);
    if ((0.0 <= fVar3 * param_2[1] + (float)local_68 * *param_2 + local_60 * param_2[2]) ||
       (0.99999 <= local_60)) {
      local_60 = local_50;
      fVar3 = local_58._4_4_;
      local_68._0_4_ = (float)local_58;
    }
    fVar4 = (float)local_68 * (float)local_68 + fVar3 * fVar3;
    if (fVar4 == 1.0) {
      local_68 = CONCAT44(fVar3,(float)local_68);
      if (local_60 != 0.0) goto LAB_142353f00;
    }
    else {
      if (fVar4 < 1e-08) goto LAB_142353e6c;
      auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
      fVar5 = auVar6._0_4_;
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
      local_58._4_4_ = fVar5 * fVar3;
      fVar5 = fVar5 * (float)local_68;
LAB_142353ef6:
      local_68 = CONCAT44(local_58._4_4_,fVar5);
LAB_142353f00:
      local_60 = 0.0;
    }
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x7f0))(param_1,param_5);
    if (cVar1 != '\0') goto LAB_142353f2a;
    fVar3 = (float)local_58 * (float)local_58 + local_58._4_4_ * local_58._4_4_;
    if (fVar3 == 1.0) {
      local_68 = local_58;
      if (local_50 != 0.0) goto LAB_142353f00;
      local_60 = local_50;
    }
    else {
      if (1e-08 <= fVar3) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
        local_58._4_4_ = fVar5 * local_58._4_4_;
        fVar5 = fVar5 * (float)local_58;
        goto LAB_142353ef6;
      }
LAB_142353e6c:
      local_60 = DAT_1468b5d98;
      local_68 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    }
  }
  local_58 = local_68;
  local_50 = local_60;
LAB_142353f2a:
  uVar2 = FUN_1423798f0(param_1,param_2,param_3,&local_58,param_5,param_6);
  return uVar2;
}



// FUNCTION 142353f70 FUN_142353f70 body=94 status=ok
// SIG undefined FUN_142353f70(void)

void FUN_142353f70(longlong *param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x5c0))();
  if (((cVar1 != '\0') && (*(char *)((longlong)param_1 + 0x3f4) != '\0')) &&
     ((*(char *)(param_1[0x44] + 0x128) == '\x01' || (*(char *)(param_1[0x44] + 0x95) == '\x02'))))
  {
    FUN_142353fd0(param_1,param_2);
    FUN_142355300(param_1);
  }
  return;
}



// FUNCTION 142353fd0 FUN_142353fd0 body=4903 status=ok
// SIG undefined FUN_142353fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142353fd0(longlong *param_1,float param_2)

{
  void *_Dst;
  undefined1 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  double dVar7;
  bool bVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *plVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  float *pfVar17;
  int iVar18;
  longlong lVar19;
  undefined8 *puVar20;
  int iVar21;
  longlong *plVar22;
  longlong lVar23;
  int iVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
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
  uint uVar43;
  uint uVar44;
  uint uVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  uint uVar51;
  undefined4 local_178 [4];
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158 [4];
  float local_148;
  float fStack_144;
  float local_140;
  float local_138 [4];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  uint local_f8;
  float afStack_f4 [3];
  undefined1 local_e8 [16];
  undefined1 local_d8 [160];
  
  lVar12 = param_1[0xc2];
  if (lVar12 == 0) {
    lVar12 = (**(code **)(param_1[0x43] + 0x28))();
    param_1[0xc2] = lVar12;
    if (lVar12 == 0) {
      return;
    }
  }
  cVar9 = *(char *)((longlong)param_1 + 0x3f4);
  if (cVar9 != '\x01') {
    if (cVar9 == '\x02') {
      if (((*(float *)((longlong)param_1 + 0x18c) == 0.0) && (*(float *)(param_1 + 0x32) == 0.0)) &&
         (*(float *)((longlong)param_1 + 0x194) == 0.0)) {
        bVar8 = true;
      }
      else {
        bVar8 = false;
      }
      fVar35 = *(float *)(lVar12 + 0x118);
      if (bVar8) {
        fVar35 = fVar35 * 0.5;
      }
      fVar32 = 1.0;
      if (fVar35 <= param_2) {
        *(ulonglong *)(lVar12 + 0xb0) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        fVar35 = DAT_1468b5d98;
      }
      else {
        fVar35 = 1.0 - param_2 / fVar35;
        *(ulonglong *)(lVar12 + 0xb0) =
             CONCAT44(fVar35 * *(float *)(lVar12 + 0xb4),fVar35 * *(float *)(lVar12 + 0xb0));
        fVar35 = fVar35 * *(float *)(lVar12 + 0xb8);
      }
      *(float *)(lVar12 + 0xb8) = fVar35;
      fVar25 = *(float *)(lVar12 + 0xe0);
      fVar33 = *(float *)(lVar12 + 0xe4);
      fVar34 = *(float *)(lVar12 + 0xe8);
      fVar36 = *(float *)(lVar12 + 0xec);
      if (*(float *)(lVar12 + 0x11c) <= param_2) {
        *(float *)(lVar12 + 0xd0) = fVar25;
        *(float *)(lVar12 + 0xd4) = fVar33;
        *(float *)(lVar12 + 0xd8) = fVar34;
        *(float *)(lVar12 + 0xdc) = fVar36;
      }
      else {
        param_2 = param_2 / *(float *)(lVar12 + 0x11c);
        fVar37 = param_2;
        if (*(float *)(lVar12 + 0xd4) * fVar33 + *(float *)(lVar12 + 0xd0) * fVar25 +
            *(float *)(lVar12 + 0xd8) * fVar34 + *(float *)(lVar12 + 0xdc) * fVar36 < 0.0) {
          fVar32 = -1.0;
          fVar37 = -param_2;
        }
        fVar32 = fVar32 - fVar37;
        fVar47 = fVar25 * param_2 + *(float *)(lVar12 + 0xd0) * fVar32;
        fVar46 = fVar33 * param_2 + *(float *)(lVar12 + 0xd4) * fVar32;
        fVar42 = fVar34 * param_2 + *(float *)(lVar12 + 0xd8) * fVar32;
        fVar50 = fVar36 * param_2 + *(float *)(lVar12 + 0xdc) * fVar32;
        auVar29._0_4_ = fVar47 * fVar47 + fVar42 * fVar42;
        auVar29._4_4_ = fVar46 * fVar46 + fVar50 * fVar50;
        auVar29._8_4_ = fVar42 * fVar42 + fVar47 * fVar47;
        auVar29._12_4_ = fVar50 * fVar50 + fVar46 * fVar46;
        fVar48 = auVar29._4_4_ + auVar29._0_4_;
        fVar49 = auVar29._8_4_ + auVar29._4_4_;
        fVar39 = auVar29._12_4_ + auVar29._8_4_;
        fVar41 = auVar29._0_4_ + auVar29._12_4_;
        auVar5._4_4_ = fVar49;
        auVar5._0_4_ = fVar48;
        auVar5._8_4_ = fVar39;
        auVar5._12_4_ = fVar41;
        auVar28 = rsqrtps(auVar29,auVar5);
        fVar32 = auVar28._0_4_;
        fVar37 = auVar28._4_4_;
        fVar38 = auVar28._8_4_;
        fVar40 = auVar28._12_4_;
        fVar32 = (_DAT_146af0090 - fVar32 * fVar32 * fVar48 * _DAT_146af0090) * fVar32 + fVar32;
        fVar37 = (fRam0000000146af0094 - fVar37 * fVar37 * fVar49 * fRam0000000146af0094) * fVar37 +
                 fVar37;
        fVar38 = (fRam0000000146af0098 - fVar38 * fVar38 * fVar39 * fRam0000000146af0098) * fVar38 +
                 fVar38;
        fVar40 = (fRam0000000146af009c - fVar40 * fVar40 * fVar41 * fRam0000000146af009c) * fVar40 +
                 fVar40;
        uVar43 = ((uint)(((fRam0000000146af0094 - fVar37 * fVar37 * fVar49 * fRam0000000146af0094) *
                          fVar37 + fVar37) * fVar46) ^ uRam0000000146af0084) &
                 -(uint)(1e-08 <= fVar49) ^ uRam0000000146af0084;
        uVar44 = ((uint)(((fRam0000000146af0098 - fVar38 * fVar38 * fVar39 * fRam0000000146af0098) *
                          fVar38 + fVar38) * fVar42) ^ uRam0000000146af0088) &
                 -(uint)(1e-08 <= fVar39) ^ uRam0000000146af0088;
        uVar45 = ((uint)(((fRam0000000146af009c - fVar40 * fVar40 * fVar41 * fRam0000000146af009c) *
                          fVar40 + fVar40) * fVar50) ^ uRam0000000146af008c) &
                 -(uint)(1e-08 <= fVar41) ^ uRam0000000146af008c;
        *(uint *)(lVar12 + 0xd0) =
             ((uint)(((_DAT_146af0090 - fVar32 * fVar32 * fVar48 * _DAT_146af0090) * fVar32 + fVar32
                     ) * fVar47) ^ _DAT_146af0080) & -(uint)(1e-08 <= fVar48) ^ _DAT_146af0080;
        *(uint *)(lVar12 + 0xd4) = uVar43;
        *(uint *)(lVar12 + 0xd8) = uVar44;
        *(uint *)(lVar12 + 0xdc) = uVar45;
      }
      if (0.01 < ABS(*(float *)(lVar12 + 0xb0))) {
        return;
      }
      if (0.01 < ABS(*(float *)(lVar12 + 0xb4))) {
        return;
      }
      if (0.01 < ABS(*(float *)(lVar12 + 0xb8))) {
        return;
      }
      auVar26._4_4_ =
           -(uint)(1e-05 < (float)((uint)(*(float *)(lVar12 + 0xd4) - fVar33) & uRam0000000146af0074
                                  ));
      auVar26._0_4_ =
           -(uint)(1e-05 < (float)((uint)(*(float *)(lVar12 + 0xd0) - fVar25) & _DAT_146af0070));
      auVar26._8_4_ =
           -(uint)(1e-05 < (float)((uint)(*(float *)(lVar12 + 0xd8) - fVar34) & uRam0000000146af0078
                                  ));
      auVar26._12_4_ =
           -(uint)(1e-05 < (float)((uint)(*(float *)(lVar12 + 0xdc) - fVar36) & uRam0000000146af007c
                                  ));
      iVar10 = movmskps(fVar35,auVar26);
      if ((iVar10 != 0) &&
         (auVar3._4_4_ = -(uint)(1e-05 < (float)((uint)(fVar33 + *(float *)(lVar12 + 0xd4)) &
                                                uRam0000000146af0074)),
         auVar3._0_4_ = -(uint)(1e-05 < (float)((uint)(fVar25 + *(float *)(lVar12 + 0xd0)) &
                                               _DAT_146af0070)),
         auVar3._8_4_ = -(uint)(1e-05 < (float)((uint)(fVar34 + *(float *)(lVar12 + 0xd8)) &
                                               uRam0000000146af0078)),
         auVar3._12_4_ =
              -(uint)(1e-05 < (float)((uint)(fVar36 + *(float *)(lVar12 + 0xdc)) &
                                     uRam0000000146af007c)), iVar10 = movmskps(iVar10,auVar3),
         iVar10 != 0)) {
        return;
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
      *(ulonglong *)(lVar12 + 0xb0) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(lVar12 + 0xb8) = DAT_1468b5d98;
      *(float *)(lVar12 + 0xd0) = fVar25;
      *(float *)(lVar12 + 0xd4) = fVar33;
      *(float *)(lVar12 + 0xd8) = fVar34;
      *(float *)(lVar12 + 0xdc) = fVar36;
      return;
    }
    if (cVar9 != '\x03') {
      return;
    }
    lVar13 = FUN_14046f570(param_1);
    if (lVar13 == 0) {
      return;
    }
    if (*(longlong *)(lVar13 + 0x108) == 0) {
      return;
    }
    fVar35 = *(float *)(*(longlong *)(lVar13 + 0x108) + 0x548);
    if (0 < *(int *)(lVar12 + 0x150)) {
      do {
        _Dst = *(void **)(lVar12 + 0x148);
        if (fVar35 - 1.0 < *(float *)((longlong)_Dst + 0x34)) break;
        iVar10 = *(int *)(lVar12 + 0x150);
        if (iVar10 + -1 != 0) {
          _guard_xfg_dispatch_icall_nop
                    (_Dst,(void *)((longlong)_Dst + 0x38),(longlong)(iVar10 + -1) * 0x38);
          iVar10 = *(int *)(lVar12 + 0x150);
        }
        *(int *)(lVar12 + 0x150) = iVar10 + -1;
        TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
        ResizeShrink(lVar12 + 0x148);
      } while (0 < *(int *)(lVar12 + 0x150));
    }
    plVar14 = (longlong *)FUN_14240e720(*(undefined8 *)(lVar13 + 0x108),param_1[0x44]);
    iVar10 = 0;
    iVar24 = 1;
    if ((plVar14 != (longlong *)0x0) && (0 < (int)plVar14[1])) {
      lVar13 = 0;
      do {
        local_f8 = local_f8 & 0xffffff00;
        afStack_f4[0] = 0.0;
        plVar22 = *(longlong **)(lVar13 + *plVar14);
        FUN_142324640(&local_128,plVar22);
        FUN_142324640(&uStack_110,plVar22);
        FUN_142324640((longlong)&local_108 + 4,plVar22);
        FUN_141636260((longlong)&uStack_120 + 4,plVar22);
        puVar1 = *(undefined1 **)plVar22[1];
        if ((undefined1 *)((undefined8 *)plVar22[1])[1] < puVar1 + 1) {
          (**(code **)(*plVar22 + 0x50))(plVar22,&local_f8,1);
        }
        else {
          local_f8 = CONCAT31(local_f8._1_3_,*puVar1);
          *(longlong *)plVar22[1] = *(longlong *)plVar22[1] + 1;
        }
        if (((*(byte *)(plVar22 + 5) & 2) != 0) ||
           ((cVar9 = (**(code **)(*plVar22 + 0xa0))(plVar22), cVar9 == '\0' &&
            (-1 < (char)plVar22[5])))) {
          pfVar17 = *(float **)plVar22[1];
          if ((float *)((undefined8 *)plVar22[1])[1] < pfVar17 + 1) {
            (**(code **)(*plVar22 + 0x50))(plVar22,afStack_f4,4);
            if ((*(byte *)((longlong)plVar22 + 0x29) & 0x10) != 0) {
              FArchive::ByteSwap(plVar22,afStack_f4,4);
            }
          }
          else {
            afStack_f4[0] = *pfVar17;
            *(longlong *)plVar22[1] = *(longlong *)plVar22[1] + 4;
          }
        }
        if (ABS(afStack_f4[0]) <= 1e-08) {
          afStack_f4[0] = *(float *)(*(longlong *)(lVar13 + *plVar14) + 0xb0);
        }
        iVar21 = *(int *)(lVar12 + 0x150);
        *(int *)(lVar12 + 0x150) = iVar21 + 1;
        if (*(int *)(lVar12 + 0x154) < iVar21 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
          ResizeGrow(lVar12 + 0x148,iVar21);
        }
        lVar23 = *(longlong *)(lVar12 + 0x148);
        iVar10 = iVar10 + 1;
        lVar19 = (longlong)iVar21 * 0x38;
        lVar13 = lVar13 + 8;
        *(undefined8 *)(lVar19 + lVar23) = local_128;
        ((undefined8 *)(lVar19 + lVar23))[1] = uStack_120;
        puVar20 = (undefined8 *)(lVar19 + 0x10 + lVar23);
        *puVar20 = local_118;
        puVar20[1] = uStack_110;
        puVar20 = (undefined8 *)(lVar19 + 0x20 + lVar23);
        *puVar20 = local_108;
        puVar20[1] = uStack_100;
        *(ulonglong *)(lVar19 + 0x30 + lVar23) = CONCAT44(afStack_f4[0],local_f8);
        iVar21 = (int)plVar14[1];
      } while (iVar10 < iVar21);
      if ((0 < DAT_146531c30) && (1 < *(int *)(lVar12 + 0x150))) {
        lVar13 = 0x38;
        iVar21 = 2;
        iVar10 = iVar24;
        do {
          lVar23 = *(longlong *)(lVar12 + 0x148);
          if ((((ABS(*(float *)(lVar23 + lVar13) - *(float *)(lVar23 + -0x38 + lVar13)) <= 0.0001)
               && (ABS(*(float *)(lVar23 + 4 + lVar13) - *(float *)(lVar23 + -0x34 + lVar13)) <=
                   0.0001)) &&
              (ABS(*(float *)(lVar23 + 8 + lVar13) - *(float *)(lVar23 + -0x30 + lVar13)) <= 0.0001)
              ) && ((fVar32 = *(float *)(lVar23 + -0x1c + lVar13),
                    fVar25 = *(float *)(lVar23 + -0x20 + lVar13),
                    fVar33 = *(float *)(lVar23 + -0x18 + lVar13),
                    9.999999e-09 < fVar25 * fVar25 + fVar32 * fVar32 + fVar33 * fVar33 &&
                    (fVar32 = *(float *)(lVar23 + 0x1c + lVar13),
                    fVar25 = *(float *)(lVar23 + 0x18 + lVar13),
                    fVar33 = *(float *)(lVar23 + 0x20 + lVar13),
                    9.999999e-09 < fVar25 * fVar25 + fVar32 * fVar32 + fVar33 * fVar33)))) {
            iVar18 = *(int *)(lVar12 + 0x150);
            iVar11 = (iVar18 - iVar10) + -1;
            if (iVar11 != 0) {
              _guard_xfg_dispatch_icall_nop
                        ((void *)((longlong)iVar10 * 0x38 + lVar23),
                         (void *)((longlong)iVar21 * 0x38 + lVar23),(longlong)iVar11 * 0x38);
              iVar18 = *(int *)(lVar12 + 0x150);
            }
            *(int *)(lVar12 + 0x150) = iVar18 + -1;
            TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::
            ResizeShrink(lVar12 + 0x148);
            iVar10 = iVar10 + -1;
            iVar21 = iVar21 + -1;
            lVar13 = lVar13 + -0x38;
          }
          iVar10 = iVar10 + 1;
          iVar21 = iVar21 + 1;
          lVar13 = lVar13 + 0x38;
        } while (iVar10 < *(int *)(lVar12 + 0x150));
        iVar21 = (int)plVar14[1];
      }
      plVar22 = (longlong *)*plVar14;
      for (; iVar21 != 0; iVar21 = iVar21 + -1) {
        lVar13 = *plVar22;
        if (*(longlong *)(lVar13 + 0x90) != 0) {
          FMemory::Free();
        }
        FArchive::~FArchive(lVar13);
        FMemory::Free(*plVar22);
        plVar22 = plVar22 + 1;
      }
      *(undefined4 *)(plVar14 + 1) = 0;
      if (*(int *)((longlong)plVar14 + 0xc) != 0) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(plVar14,0);
      }
    }
    iVar21 = 0;
    iVar10 = *(int *)(lVar12 + 0x150);
    iVar18 = 0;
    if (0 < iVar10 + -1) {
      lVar13 = *(longlong *)(lVar12 + 0x148);
      pfVar17 = (float *)(lVar13 + 0x34);
      do {
        if ((*pfVar17 <= fVar35) && (fVar35 < pfVar17[0xe] || fVar35 == pfVar17[0xe])) {
          lVar19 = (longlong)iVar18 * 0x38;
          lVar23 = ((longlong)iVar18 + 1) * 0x38;
          fVar32 = *(float *)(lVar19 + 0x34 + lVar13);
          fVar25 = *(float *)(lVar23 + 0x34 + lVar13) - fVar32;
          if (fVar25 <= 1e-08) {
            fVar25 = 1.0;
          }
          else {
            fVar25 = (fVar35 - fVar32) / fVar25;
            if (0.0 <= fVar25) {
              if (1.0 <= fVar25) {
                fVar25 = 1.0;
              }
            }
            else {
              fVar25 = 0.0;
            }
          }
          local_148 = (*(float *)(lVar23 + lVar13) - *(float *)(lVar19 + lVar13)) * fVar25 +
                      *(float *)(lVar19 + lVar13);
          fStack_144 = (*(float *)(lVar23 + 4 + lVar13) - *(float *)(lVar19 + 4 + lVar13)) * fVar25
                       + *(float *)(lVar19 + 4 + lVar13);
          local_140 = (*(float *)(lVar23 + 8 + lVar13) - *(float *)(lVar19 + 8 + lVar13)) * fVar25 +
                      *(float *)(lVar19 + 8 + lVar13);
          pfVar17 = (float *)FRotator::Quaternion(lVar13 + 0xc + lVar23,&local_168);
          fVar35 = *pfVar17;
          fVar32 = pfVar17[1];
          fVar33 = pfVar17[2];
          fVar34 = pfVar17[3];
          pfVar17 = (float *)FRotator::Quaternion(lVar13 + 0xc + lVar19,local_d8);
          if (*pfVar17 * fVar35 + pfVar17[1] * fVar32 + pfVar17[2] * fVar33 + pfVar17[3] * fVar34 <
              0.0) {
            fVar36 = -1.0;
          }
          else {
            fVar36 = 1.0;
          }
          fVar48 = 1.0 - fVar25;
          fVar36 = fVar36 * fVar48;
          local_168 = fVar35 * fVar25 + fVar36 * *pfVar17;
          fStack_164 = fVar32 * fVar25 + fVar36 * pfVar17[1];
          fStack_15c = fVar34 * fVar25 + fVar36 * pfVar17[3];
          fVar36 = fVar33 * fVar25 + fVar36 * pfVar17[2];
          auVar30._0_4_ = local_168 * local_168 + fVar36 * fVar36;
          auVar30._4_4_ = fStack_164 * fStack_164 + fStack_15c * fStack_15c;
          auVar30._8_4_ = fVar36 * fVar36 + local_168 * local_168;
          auVar30._12_4_ = fStack_15c * fStack_15c + fStack_164 * fStack_164;
          fVar37 = auVar30._4_4_ + auVar30._0_4_;
          fVar38 = auVar30._8_4_ + auVar30._4_4_;
          fVar40 = auVar30._12_4_ + auVar30._8_4_;
          fVar46 = auVar30._0_4_ + auVar30._12_4_;
          auVar28._4_4_ = fVar38;
          auVar28._0_4_ = fVar37;
          auVar28._8_4_ = fVar40;
          auVar28._12_4_ = fVar46;
          auVar28 = rsqrtps(auVar30,auVar28);
          fVar35 = auVar28._0_4_;
          fVar32 = auVar28._4_4_;
          fVar33 = auVar28._8_4_;
          fVar34 = auVar28._12_4_;
          fVar35 = (_DAT_146af0090 - fVar35 * fVar35 * fVar37 * _DAT_146af0090) * fVar35 + fVar35;
          fVar32 = (fRam0000000146af0094 - fVar32 * fVar32 * fVar38 * fRam0000000146af0094) * fVar32
                   + fVar32;
          fVar33 = (fRam0000000146af0098 - fVar33 * fVar33 * fVar40 * fRam0000000146af0098) * fVar33
                   + fVar33;
          fVar34 = (fRam0000000146af009c - fVar34 * fVar34 * fVar46 * fRam0000000146af009c) * fVar34
                   + fVar34;
          uVar43 = ((uint)(((_DAT_146af0090 - fVar35 * fVar35 * fVar37 * _DAT_146af0090) * fVar35 +
                           fVar35) * local_168) ^ _DAT_146af0080) & -(uint)(1e-08 <= fVar37) ^
                   _DAT_146af0080;
          uVar44 = ((uint)(((fRam0000000146af0094 - fVar32 * fVar32 * fVar38 * fRam0000000146af0094)
                            * fVar32 + fVar32) * fStack_164) ^ uRam0000000146af0084) &
                   -(uint)(1e-08 <= fVar38) ^ uRam0000000146af0084;
          uVar45 = ((uint)(((fRam0000000146af0098 - fVar33 * fVar33 * fVar40 * fRam0000000146af0098)
                            * fVar33 + fVar33) * fVar36) ^ uRam0000000146af0088) &
                   -(uint)(1e-08 <= fVar40) ^ uRam0000000146af0088;
          uVar51 = ((uint)(((fRam0000000146af009c - fVar34 * fVar34 * fVar46 * fRam0000000146af009c)
                            * fVar34 + fVar34) * fStack_15c) ^ uRam0000000146af008c) &
                   -(uint)(1e-08 <= fVar46) ^ uRam0000000146af008c;
          fStack_160 = (*(float *)(lVar23 + 0x20 + lVar13) - *(float *)(lVar19 + 0x20 + lVar13)) *
                       fVar25 + *(float *)(lVar19 + 0x20 + lVar13);
          *(ulonglong *)((longlong)param_1 + 0x18c) =
               CONCAT44((*(float *)(lVar23 + 0x1c + lVar13) - *(float *)(lVar19 + 0x1c + lVar13)) *
                        fVar25 + *(float *)(lVar19 + 0x1c + lVar13),
                        (*(float *)(lVar23 + 0x18 + lVar13) - *(float *)(lVar19 + 0x18 + lVar13)) *
                        fVar25 + *(float *)(lVar19 + 0x18 + lVar13));
          *(float *)((longlong)param_1 + 0x194) = fStack_160;
          lVar2 = *(longlong *)(lVar12 + 0x148);
          param_1[0x6a] = *(longlong *)(lVar23 + 0x24 + lVar2);
          *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)(lVar23 + 0x2c + lVar2);
          local_158[1] = 0.0;
          local_158[2] = 0.0;
          local_158[0] = (float)*(byte *)(lVar19 + 0x30 + lVar13) * 1.40625;
          local_138[1] = 0.0;
          local_138[2] = 0.0;
          local_138[0] = (float)*(byte *)(lVar23 + 0x30 + lVar13) * 1.40625;
          pfVar17 = (float *)FRotator::Quaternion(local_138,local_d8);
          fVar35 = *pfVar17;
          fVar32 = pfVar17[1];
          fVar33 = pfVar17[2];
          fVar34 = pfVar17[3];
          pfVar17 = (float *)FRotator::Quaternion(local_158,local_e8);
          if (*pfVar17 * fVar35 + pfVar17[1] * fVar32 + pfVar17[2] * fVar33 + pfVar17[3] * fVar34 <
              0.0) {
            fVar48 = -fVar48;
          }
          fVar36 = pfVar17[1] * fVar48 + fVar32 * fVar25;
          fVar49 = *pfVar17 * fVar48 + fVar35 * fVar25;
          fVar37 = pfVar17[2] * fVar48 + fVar33 * fVar25;
          fVar34 = pfVar17[3] * fVar48 + fVar34 * fVar25;
          auVar31._0_4_ = fVar49 * fVar49 + fVar37 * fVar37;
          auVar31._4_4_ = fVar36 * fVar36 + fVar34 * fVar34;
          auVar31._8_4_ = fVar37 * fVar37 + fVar49 * fVar49;
          auVar31._12_4_ = fVar34 * fVar34 + fVar36 * fVar36;
          fVar38 = auVar31._4_4_ + auVar31._0_4_;
          fVar40 = auVar31._8_4_ + auVar31._4_4_;
          fVar46 = auVar31._12_4_ + auVar31._8_4_;
          fVar48 = auVar31._0_4_ + auVar31._12_4_;
          auVar6._4_4_ = fVar40;
          auVar6._0_4_ = fVar38;
          auVar6._8_4_ = fVar46;
          auVar6._12_4_ = fVar48;
          auVar28 = rsqrtps(auVar31,auVar6);
          fVar35 = auVar28._0_4_;
          fVar32 = auVar28._4_4_;
          fVar25 = auVar28._8_4_;
          fVar33 = auVar28._12_4_;
          fVar35 = (_DAT_146af0090 - fVar35 * fVar35 * fVar38 * _DAT_146af0090) * fVar35 + fVar35;
          fVar32 = (fRam0000000146af0094 - fVar32 * fVar32 * fVar40 * fRam0000000146af0094) * fVar32
                   + fVar32;
          fVar25 = (fRam0000000146af0098 - fVar25 * fVar25 * fVar46 * fRam0000000146af0098) * fVar25
                   + fVar25;
          fVar33 = (fRam0000000146af009c - fVar33 * fVar33 * fVar48 * fRam0000000146af009c) * fVar33
                   + fVar33;
          local_168 = (float)(((uint)(((_DAT_146af0090 - fVar35 * fVar35 * fVar38 * _DAT_146af0090)
                                       * fVar35 + fVar35) * fVar49) ^ _DAT_146af0080) &
                              -(uint)(1e-08 <= fVar38) ^ _DAT_146af0080);
          fStack_164 = (float)(((uint)(((fRam0000000146af0094 -
                                        fVar32 * fVar32 * fVar40 * fRam0000000146af0094) * fVar32 +
                                       fVar32) * fVar36) ^ uRam0000000146af0084) &
                               -(uint)(1e-08 <= fVar40) ^ uRam0000000146af0084);
          fStack_160 = (float)(((uint)(((fRam0000000146af0098 -
                                        fVar25 * fVar25 * fVar46 * fRam0000000146af0098) * fVar25 +
                                       fVar25) * fVar37) ^ uRam0000000146af0088) &
                               -(uint)(1e-08 <= fVar46) ^ uRam0000000146af0088);
          fStack_15c = (float)(((uint)(((fRam0000000146af009c -
                                        fVar33 * fVar33 * fVar48 * fRam0000000146af009c) * fVar33 +
                                       fVar33) * fVar34) ^ uRam0000000146af008c) &
                               -(uint)(1e-08 <= fVar48) ^ uRam0000000146af008c);
          FQuat::Rotator(&local_168,local_178);
          *(undefined4 *)(param_1[0x44] + 0x484) = local_178[0];
          (**(code **)(*param_1 + 0x470))(param_1);
          lVar13 = param_1[0x44];
          lVar23 = *(longlong *)(lVar13 + 0x4c0);
          if (lVar23 != 0) {
            *(undefined8 *)(lVar23 + 0x1ec) = *(undefined8 *)(lVar13 + 0x53c);
            *(undefined4 *)(lVar23 + 500) = *(undefined4 *)(lVar13 + 0x544);
            uVar15 = (**(code **)(*(longlong *)param_1[0x44] + 0x858))
                               ((longlong *)param_1[0x44],local_e8);
            puVar20 = (undefined8 *)FQuat::Rotator(uVar15,&local_168);
            *(undefined8 *)(lVar23 + 0x1f8) = *puVar20;
            *(undefined4 *)(lVar23 + 0x200) = *(undefined4 *)(puVar20 + 1);
          }
          *(ulonglong *)(lVar12 + 0xb0) = CONCAT44(fStack_144,local_148);
          *(float *)(lVar12 + 0xb8) = local_140;
          *(uint *)(lVar12 + 0xd0) = uVar43;
          *(uint *)(lVar12 + 0xd4) = uVar44;
          *(uint *)(lVar12 + 0xd8) = uVar45;
          *(uint *)(lVar12 + 0xdc) = uVar51;
          goto LAB_142354d64;
        }
        iVar18 = iVar18 + 1;
        pfVar17 = pfVar17 + 0xe;
      } while (iVar18 < iVar10 + -1);
    }
    if (0 < iVar10) {
      lVar13 = *(longlong *)(lVar12 + 0x148);
      fVar32 = ABS(*(float *)(lVar13 + 0x34) - fVar35);
      if (1 < iVar10) {
        pfVar17 = (float *)(lVar13 + 0x6c);
        do {
          iVar18 = iVar24;
          fVar25 = ABS(*pfVar17 - fVar35);
          if (fVar32 <= ABS(*pfVar17 - fVar35)) {
            iVar18 = iVar21;
            fVar25 = fVar32;
          }
          fVar32 = fVar25;
          iVar21 = iVar18;
          iVar24 = iVar24 + 1;
          pfVar17 = pfVar17 + 0xe;
        } while (iVar24 < iVar10);
      }
      puVar20 = (undefined8 *)((longlong)iVar21 * 0x38 + lVar13);
      *(undefined8 *)((longlong)param_1 + 0x18c) = puVar20[3];
      *(undefined4 *)((longlong)param_1 + 0x194) = *(undefined4 *)(puVar20 + 4);
      param_1[0x6a] = *(longlong *)((longlong)puVar20 + 0x24);
      *(undefined4 *)(param_1 + 0x6b) = *(undefined4 *)((longlong)puVar20 + 0x2c);
      *(float *)(param_1[0x44] + 0x484) = (float)*(byte *)(puVar20 + 6) * 1.40625;
      (**(code **)(*param_1 + 0x470))(param_1);
      lVar13 = param_1[0x44];
      lVar23 = *(longlong *)(lVar13 + 0x4c0);
      if (lVar23 != 0) {
        *(undefined8 *)(lVar23 + 0x1ec) = *(undefined8 *)(lVar13 + 0x53c);
        *(undefined4 *)(lVar23 + 500) = *(undefined4 *)(lVar13 + 0x544);
        uVar15 = (**(code **)(*(longlong *)param_1[0x44] + 0x858))
                           ((longlong *)param_1[0x44],local_e8);
        puVar16 = (undefined8 *)FQuat::Rotator(uVar15,local_178);
        *(undefined8 *)(lVar23 + 0x1f8) = *puVar16;
        *(undefined4 *)(lVar23 + 0x200) = *(undefined4 *)(puVar16 + 1);
      }
      *(undefined8 *)(lVar12 + 0xb0) = *puVar20;
      *(undefined4 *)(lVar12 + 0xb8) = *(undefined4 *)(puVar20 + 1);
      puVar20 = (undefined8 *)FRotator::Quaternion((longlong)puVar20 + 0xc,local_e8);
      uVar15 = puVar20[1];
      *(undefined8 *)(lVar12 + 0xd0) = *puVar20;
      *(undefined8 *)(lVar12 + 0xd8) = uVar15;
    }
LAB_142354d64:
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffefff;
    return;
  }
  FUN_14046f570(param_1);
  fVar35 = *(float *)(lVar12 + 0xf0);
  dVar7 = (double)param_2 + *(double *)(lVar12 + 0x100);
  *(double *)(lVar12 + 0x100) = dVar7;
  if (fVar35 <= 1e-08) {
    fVar35 = 1.0;
LAB_1423542f1:
    if (((0.0001 < ABS(*(float *)((longlong)param_1 + 0x18c))) ||
        (0.0001 < ABS(*(float *)(param_1 + 0x32)))) ||
       (0.0001 < ABS(*(float *)((longlong)param_1 + 0x194)))) {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
    if (bVar8) {
      *(ulonglong *)(lVar12 + 0xb0) = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
      *(float *)(lVar12 + 0xb8) = DAT_1468b5d98;
      *(undefined8 *)(lVar12 + 0x100) = *(undefined8 *)(lVar12 + 0xf8);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x1000;
      *(undefined8 *)(lVar12 + 0xd0) = *(undefined8 *)(lVar12 + 0xe0);
      *(undefined8 *)(lVar12 + 0xd8) = *(undefined8 *)(lVar12 + 0xe8);
    }
    else {
      fVar25 = 1.0 - fVar35;
      fVar32 = DAT_1468b5d98 * fVar35;
      *(ulonglong *)(lVar12 + 0xb0) =
           CONCAT44(fVar25 * *(float *)(lVar12 + 0xa8) + DAT_1468b5d94 * fVar35,
                    fVar25 * *(float *)(lVar12 + 0xa4) + DAT_1468b5d90 * fVar35);
      *(float *)(lVar12 + 0xb8) = fVar25 * *(float *)(lVar12 + 0xac) + fVar32;
      uVar43 = 0;
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) & 0xffffefff;
      if (1.15 <= fVar35) {
        uVar43 = 0x1000;
      }
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | uVar43;
      *(undefined8 *)(lVar12 + 0xd0) = *(undefined8 *)(lVar12 + 0xe0);
      *(undefined8 *)(lVar12 + 0xd8) = *(undefined8 *)(lVar12 + 0xe8);
    }
  }
  else {
    fVar25 = (float)dVar7;
    fVar32 = (float)((double)(fVar35 * 0.15) + *(double *)(lVar12 + 0xf8));
    if (fVar25 <= fVar32) {
      fVar32 = fVar25;
    }
    *(double *)(lVar12 + 0x100) = (double)fVar32;
    fVar35 = (fVar35 - (float)(*(double *)(lVar12 + 0xf8) - (double)fVar32)) / fVar35;
    if (0.0 <= fVar35) {
      if (1.15 <= fVar35) {
        fVar35 = 1.15;
      }
      if (0.9999 <= fVar35) goto LAB_1423542f1;
    }
    else {
      fVar35 = 0.0;
    }
    fVar25 = 1.0 - fVar35;
    fVar32 = DAT_1468b5d98 * fVar35;
    *(ulonglong *)(lVar12 + 0xb0) =
         CONCAT44(fVar25 * *(float *)(lVar12 + 0xa8) + DAT_1468b5d94 * fVar35,
                  fVar25 * *(float *)(lVar12 + 0xa4) + DAT_1468b5d90 * fVar35);
    *(float *)(lVar12 + 0xb8) = fVar25 * *(float *)(lVar12 + 0xac) + fVar32;
    if (*(float *)(lVar12 + 0xc0) * *(float *)(lVar12 + 0xe0) +
        *(float *)(lVar12 + 0xe4) * *(float *)(lVar12 + 0xc4) +
        *(float *)(lVar12 + 0xe8) * *(float *)(lVar12 + 200) +
        *(float *)(lVar12 + 0xec) * *(float *)(lVar12 + 0xcc) < 0.0) {
      fVar25 = -fVar25;
    }
    fVar46 = *(float *)(lVar12 + 0xe0) * fVar35 + *(float *)(lVar12 + 0xc0) * fVar25;
    fVar34 = *(float *)(lVar12 + 0xe4) * fVar35 + *(float *)(lVar12 + 0xc4) * fVar25;
    fVar48 = *(float *)(lVar12 + 0xe8) * fVar35 + *(float *)(lVar12 + 200) * fVar25;
    fVar49 = *(float *)(lVar12 + 0xec) * fVar35 + *(float *)(lVar12 + 0xcc) * fVar25;
    auVar27._0_4_ = fVar46 * fVar46 + fVar48 * fVar48;
    auVar27._4_4_ = fVar34 * fVar34 + fVar49 * fVar49;
    auVar27._8_4_ = fVar48 * fVar48 + fVar46 * fVar46;
    auVar27._12_4_ = fVar49 * fVar49 + fVar34 * fVar34;
    fVar36 = auVar27._4_4_ + auVar27._0_4_;
    fVar37 = auVar27._8_4_ + auVar27._4_4_;
    fVar38 = auVar27._12_4_ + auVar27._8_4_;
    fVar40 = auVar27._0_4_ + auVar27._12_4_;
    auVar4._4_4_ = fVar37;
    auVar4._0_4_ = fVar36;
    auVar4._8_4_ = fVar38;
    auVar4._12_4_ = fVar40;
    auVar28 = rsqrtps(auVar27,auVar4);
    fVar35 = auVar28._0_4_;
    fVar32 = auVar28._4_4_;
    fVar25 = auVar28._8_4_;
    fVar33 = auVar28._12_4_;
    fVar35 = (_DAT_146af0090 - fVar35 * fVar35 * fVar36 * _DAT_146af0090) * fVar35 + fVar35;
    fVar32 = (fRam0000000146af0094 - fVar32 * fVar32 * fVar37 * fRam0000000146af0094) * fVar32 +
             fVar32;
    fVar25 = (fRam0000000146af0098 - fVar25 * fVar25 * fVar38 * fRam0000000146af0098) * fVar25 +
             fVar25;
    fVar33 = (fRam0000000146af009c - fVar33 * fVar33 * fVar40 * fRam0000000146af009c) * fVar33 +
             fVar33;
    uVar43 = ((uint)(((fRam0000000146af0094 - fVar32 * fVar32 * fVar37 * fRam0000000146af0094) *
                      fVar32 + fVar32) * fVar34) ^ uRam0000000146af0084) & -(uint)(1e-08 <= fVar37)
             ^ uRam0000000146af0084;
    uVar44 = ((uint)(((fRam0000000146af0098 - fVar25 * fVar25 * fVar38 * fRam0000000146af0098) *
                      fVar25 + fVar25) * fVar48) ^ uRam0000000146af0088) & -(uint)(1e-08 <= fVar38)
             ^ uRam0000000146af0088;
    uVar45 = ((uint)(((fRam0000000146af009c - fVar33 * fVar33 * fVar40 * fRam0000000146af009c) *
                      fVar33 + fVar33) * fVar49) ^ uRam0000000146af008c) & -(uint)(1e-08 <= fVar40)
             ^ uRam0000000146af008c;
    *(uint *)(lVar12 + 0xd0) =
         ((uint)(((_DAT_146af0090 - fVar35 * fVar35 * fVar36 * _DAT_146af0090) * fVar35 + fVar35) *
                fVar46) ^ _DAT_146af0080) & -(uint)(1e-08 <= fVar36) ^ _DAT_146af0080;
    *(uint *)(lVar12 + 0xd4) = uVar43;
    *(uint *)(lVar12 + 0xd8) = uVar44;
    *(uint *)(lVar12 + 0xdc) = uVar45;
  }
  return;
}



// FUNCTION 142355300 FUN_142355300 body=1900 status=ok
// SIG undefined FUN_142355300(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142355300(longlong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  longlong lVar17;
  undefined8 *puVar18;
  float *pfVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
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
  ulonglong in_stack_fffffffffffffeb8;
  undefined8 local_138;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  longlong local_108;
  code *local_f8 [2];
  undefined1 local_e8 [32];
  undefined8 local_c8;
  undefined4 local_b8;
  
  lVar17 = *(longlong *)(param_1 + 0x610);
  if (lVar17 == 0) {
    lVar17 = (**(code **)(*(longlong *)(param_1 + 0x218) + 0x28))();
    *(longlong *)(param_1 + 0x610) = lVar17;
  }
  plVar7 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x4c0);
  if ((((lVar17 != 0) && (plVar7 != (longlong *)0x0)) &&
      (cVar14 = (**(code **)(*plVar7 + 0x400))(plVar7,0), cVar14 == '\0')) &&
     ((*(byte *)((longlong)plVar7 + 0x24c) & 4) == 0)) {
    cVar14 = *(char *)(param_1 + 0x3f4);
    if (cVar14 == '\x01') {
      pfVar19 = (float *)(lVar17 + 0xd0);
      fVar22 = (float)((ulonglong)*(undefined8 *)(lVar17 + 0xb0) >> 0x20);
      fVar3 = *(float *)(lVar17 + 0xb8);
      fVar29 = -*(float *)(lVar17 + 0xd8);
      local_138._0_4_ = (float)*(undefined8 *)(lVar17 + 0xb0);
      fVar32 = -*(float *)(lVar17 + 0xd4);
      fVar33 = -*pfVar19;
      local_128 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x53c);
      fVar4 = *(float *)(*(longlong *)(param_1 + 0x220) + 0x544);
      fVar30 = fVar3 * fVar32 - fVar22 * fVar29;
      fVar30 = fVar30 + fVar30;
      fVar31 = (float)local_138 * fVar29 - fVar3 * fVar33;
      fVar28 = fVar22 * fVar33 - (float)local_138 * fVar32;
      fVar21 = *(float *)(lVar17 + 0xdc);
      fVar31 = fVar31 + fVar31;
      fVar28 = fVar28 + fVar28;
      fVar20 = SUB84(local_128,0) +
               (fVar28 * fVar32 - fVar31 * fVar29) + (float)local_138 + fVar30 * fVar21;
      fVar22 = (float)((ulonglong)local_128 >> 0x20) +
               (fVar30 * fVar29 - fVar28 * fVar33) + fVar22 + fVar31 * fVar21;
      fVar21 = fVar4 + (fVar31 * fVar33 - fVar30 * fVar32) + fVar3 + fVar28 * fVar21;
      local_138 = CONCAT44(fVar22,fVar20);
      lVar8 = *(longlong *)(param_1 + 0x178);
      auVar10._4_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x214) - *(float *)(lVar17 + 0xd4)) &
                                  uRam0000000146af0074));
      auVar10._0_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x210) - *pfVar19) & _DAT_146af0070));
      auVar10._8_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x218) - *(float *)(lVar17 + 0xd8)) &
                                  uRam0000000146af0078));
      auVar10._12_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x21c) - *(float *)(lVar17 + 0xdc)) &
                                  uRam0000000146af007c));
      iVar16 = movmskps(fVar4,auVar10);
      if ((iVar16 == 0) ||
         (auVar13._4_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xd4) + *(float *)(lVar8 + 0x214))
                                      & uRam0000000146af0074)),
         auVar13._0_4_ =
              -(uint)(1e-08 < (float)((uint)(*pfVar19 + *(float *)(lVar8 + 0x210)) & _DAT_146af0070)
                     ),
         auVar13._8_4_ =
              -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xd8) + *(float *)(lVar8 + 0x218))
                                     & uRam0000000146af0078)),
         auVar13._12_4_ =
              -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xdc) + *(float *)(lVar8 + 0x21c))
                                     & uRam0000000146af007c)), iVar16 = movmskps(iVar16,auVar13),
         iVar16 == 0)) {
        uStack_120 = local_138;
        fStack_110 = (float)param_1;
        fStack_10c = (float)((ulonglong)param_1 >> 0x20);
        local_c8 = 0;
        local_b8 = 0;
        local_128 = plVar7;
        local_118 = fVar21;
        puVar18 = (undefined8 *)FUN_140438ef0(0x28,local_e8);
        if (puVar18 != (undefined8 *)0x0) {
          *puVar18 = &PTR_FUN_143ff7760;
          *(float *)(puVar18 + 1) = (float)local_128;
          *(float *)((longlong)puVar18 + 0xc) = local_128._4_4_;
          *(float *)(puVar18 + 2) = (float)uStack_120;
          *(float *)((longlong)puVar18 + 0x14) = uStack_120._4_4_;
          puVar18[3] = CONCAT44(fStack_114,local_118);
          puVar18[4] = CONCAT44(fStack_10c,fStack_110);
        }
        local_f8[0] = (code *)&LAB_1423324c0;
        FUN_14234b4d0(param_1,local_f8);
      }
      else {
        uVar5 = *(undefined4 *)(lVar8 + 0x200);
        uVar1 = *(undefined8 *)(lVar8 + 0x1f8);
        uVar2 = *(undefined8 *)((longlong)plVar7 + 0x1ec);
        uVar6 = *(undefined4 *)((longlong)plVar7 + 500);
        *(undefined8 *)((longlong)plVar7 + 0x1ec) = local_138;
        *(float *)((longlong)plVar7 + 500) = fVar21;
        uStack_120 = CONCAT44(uStack_120._4_4_,uVar5);
        FUN_142399b10(*(undefined8 *)(param_1 + 0x178),pfVar19,0,0,
                      in_stack_fffffffffffffeb8 & 0xffffffffffffff00);
        lVar17 = *(longlong *)(param_1 + 0x178);
        if ((((float)uVar1 == *(float *)(lVar17 + 0x1f8)) &&
            (local_128._4_4_ = (float)((ulonglong)uVar1 >> 0x20),
            local_128._4_4_ == *(float *)(lVar17 + 0x1fc))) &&
           ((float)uStack_120 == *(float *)(lVar17 + 0x200))) {
          local_c8 = 0;
          local_b8 = 0;
          local_128 = plVar7;
          uStack_120 = uVar2;
          local_118 = (float)uVar6;
          fStack_114 = fVar20;
          fStack_110 = fVar22;
          fStack_10c = fVar21;
          local_108 = param_1;
          puVar18 = (undefined8 *)FUN_140438ef0(0x30,local_e8);
          if (puVar18 != (undefined8 *)0x0) {
            *puVar18 = &PTR_FUN_143f4d098;
            puVar18[1] = local_128;
            puVar18[2] = uStack_120;
            puVar18[3] = CONCAT44(fStack_114,local_118);
            puVar18[4] = CONCAT44(fStack_10c,fStack_110);
            puVar18[5] = local_108;
          }
          local_f8[0] = (code *)&LAB_1423328c0;
          FUN_14234b4d0(param_1,local_f8);
        }
      }
    }
    else if (cVar14 == '\x02') {
      plVar9 = *(longlong **)(param_1 + 0x220);
      fVar21 = *(float *)(lVar17 + 0xb8);
      fVar3 = *(float *)(lVar17 + 0xb4);
      fVar4 = *(float *)(lVar17 + 0xb0);
      fVar20 = *(float *)((longlong)plVar9 + 0x544);
      local_128 = *(longlong **)((longlong)plVar9 + 0x53c);
      uStack_120 = CONCAT44(uStack_120._4_4_,fVar20);
      lVar8 = *(longlong *)(param_1 + 0x178);
      fVar25 = *(float *)(lVar8 + 0x210) * _DAT_146af01e0;
      fVar26 = *(float *)(lVar8 + 0x214) * fRam0000000146af01e4;
      fVar22 = *(float *)(lVar8 + 0x218) * fRam0000000146af01e8;
      fVar27 = *(float *)(lVar8 + 0x21c) * fRam0000000146af01ec;
      fVar33 = fVar21 * fVar26 - fVar3 * fVar22;
      fVar23 = fVar4 * fVar22 - fVar21 * fVar25;
      fVar24 = fVar3 * fVar25 - fVar4 * fVar26;
      fVar33 = fVar33 + fVar33;
      fVar23 = fVar23 + fVar23;
      fVar24 = fVar24 + fVar24;
      local_138 = CONCAT44((fVar33 * fVar22 - fVar24 * fVar25) + fVar27 * fVar23 + fVar3 +
                           (float)((ulonglong)local_128 >> 0x20),
                           (fVar24 * fVar26 - fVar23 * fVar22) + fVar27 * fVar33 + fVar4 +
                           SUB84(local_128,0));
      pfVar19 = (float *)(**(code **)(*plVar9 + 0x858))(plVar9,&local_128);
      fVar3 = *(float *)(lVar17 + 0xd0);
      fVar4 = *(float *)(lVar17 + 0xd4);
      fVar22 = *(float *)(lVar17 + 0xd8);
      fVar28 = *(float *)(lVar17 + 0xdc);
      local_c8 = 0;
      fVar29 = *pfVar19;
      fVar30 = pfVar19[1];
      fVar31 = pfVar19[2];
      fVar32 = pfVar19[3];
      local_b8 = 0;
      local_128._0_4_ =
           fVar3 * fVar32 * _DAT_146af0160 + fVar28 * fVar29 + fVar4 * fVar31 * _DAT_146af0150 +
           fVar22 * fVar30 * _DAT_146af0140;
      local_128._4_4_ =
           fVar3 * fVar31 * fRam0000000146af0164 + fVar28 * fVar30 +
           fVar4 * fVar32 * fRam0000000146af0154 + fVar22 * fVar29 * fRam0000000146af0144;
      uStack_120._0_4_ =
           fVar3 * fVar30 * fRam0000000146af0168 + fVar28 * fVar31 +
           fVar4 * fVar29 * fRam0000000146af0158 + fVar22 * fVar32 * fRam0000000146af0148;
      uStack_120._4_4_ =
           fVar3 * fVar29 * fRam0000000146af016c + fVar28 * fVar32 +
           fVar4 * fVar30 * fRam0000000146af015c + fVar22 * fVar31 * fRam0000000146af014c;
      puVar18 = (undefined8 *)FUN_140438ef0(0x50,local_e8);
      if (puVar18 != (undefined8 *)0x0) {
        *puVar18 = &PTR_FUN_14504b608;
        puVar18[3] = local_138;
        puVar18[2] = plVar7;
        *(float *)(puVar18 + 4) =
             (fVar23 * fVar25 - fVar33 * fVar26) + fVar27 * fVar24 + fVar21 + fVar20;
        *(float *)(puVar18 + 6) = (float)local_128;
        *(float *)((longlong)puVar18 + 0x34) = local_128._4_4_;
        *(float *)(puVar18 + 7) = (float)uStack_120;
        *(float *)((longlong)puVar18 + 0x3c) = uStack_120._4_4_;
        puVar18[8] = param_1;
      }
      local_f8[0] = FUN_142332350;
      FUN_14234b4d0(param_1,local_f8);
    }
    else if (cVar14 == '\x03') {
      lVar8 = *(longlong *)(param_1 + 0x178);
      fVar21 = *(float *)(lVar17 + 0xd0);
      auVar11._4_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x214) - *(float *)(lVar17 + 0xd4)) &
                                  uRam0000000146af0074));
      auVar11._0_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x210) - fVar21) & _DAT_146af0070));
      auVar11._8_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x218) - *(float *)(lVar17 + 0xd8)) &
                                  uRam0000000146af0078));
      auVar11._12_4_ =
           -(uint)(1e-08 < (float)((uint)(*(float *)(lVar8 + 0x21c) - *(float *)(lVar17 + 0xdc)) &
                                  uRam0000000146af007c));
      iVar16 = movmskps(3,auVar11);
      if ((iVar16 == 0) ||
         (auVar12._4_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xd4) + *(float *)(lVar8 + 0x214))
                                      & uRam0000000146af0074)),
         auVar12._0_4_ =
              -(uint)(1e-08 < (float)((uint)(fVar21 + *(float *)(lVar8 + 0x210)) & _DAT_146af0070)),
         auVar12._8_4_ =
              -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xd8) + *(float *)(lVar8 + 0x218))
                                     & uRam0000000146af0078)),
         auVar12._12_4_ =
              -(uint)(1e-08 < (float)((uint)(*(float *)(lVar17 + 0xdc) + *(float *)(lVar8 + 0x21c))
                                     & uRam0000000146af007c)), iVar16 = movmskps(iVar16,auVar12),
         iVar16 == 0)) {
        uStack_120._4_4_ = (float)((ulonglong)*(undefined8 *)(lVar8 + 0x228) >> 0x20);
        if ((ABS(*(float *)(lVar8 + 0x220) - *(float *)(lVar17 + 0xb0)) <= 0.0001) &&
           ((ABS(*(float *)(lVar8 + 0x224) - *(float *)(lVar17 + 0xb4)) <= 0.0001 &&
            (ABS(*(float *)(lVar8 + 0x228) - *(float *)(lVar17 + 0xb8)) <= 0.0001)))) {
          return;
        }
      }
      local_128 = *(longlong **)(lVar17 + 0xb0);
      uStack_120 = CONCAT44(uStack_120._4_4_,*(undefined4 *)(lVar17 + 0xb8));
      if (((*(byte *)(param_1 + 0x4b4) & 0x20) == 0) && ((*(uint *)(param_1 + 0x300) & 0x2000) == 0)
         ) {
        uVar15 = 0;
      }
      else {
        uVar15 = 1;
      }
      FUN_142399390(lVar8,&local_128,(float *)(lVar17 + 0xd0),0,0,uVar15);
    }
  }
  return;
}



// FUNCTION 142355a70 FUN_142355a70 body=1587 status=ok
// SIG undefined FUN_142355a70(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142355a70(longlong *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  double dVar1;
  double dVar2;
  float fVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  char cVar8;
  undefined1 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_98;
  float fStack_90;
  float fStack_8c;
  undefined1 local_88 [96];
  
  cVar8 = (**(code **)(param_1[-0x43] + 0x5c0))(param_1 + -0x43);
  if (cVar8 != '\0') {
    cVar8 = *(char *)(param_1[1] + 0x128);
    *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) & 0xffffefff;
    if (*(char *)((longlong)param_1 + 0x1dc) != '\x03') {
      if (*(char *)((longlong)param_1 + 0x1dc) == '\0') {
        local_98 = *(ulonglong *)param_4;
        fStack_90 = param_4[2];
        FUN_142399390(param_1[-0x14],&local_98,param_5,0,0,1);
        *(uint *)(param_1 + 0x1d) = *(uint *)(param_1 + 0x1d) | 0x1000;
      }
      else {
        lVar10 = param_1[0x7f];
        if (lVar10 == 0) {
          lVar10 = (**(code **)(*param_1 + 0x28))(param_1);
          param_1[0x7f] = lVar10;
          if (lVar10 == 0) {
            return;
          }
        }
        lVar11 = FUN_14046f570(param_1 + -0x43);
        if (lVar11 != 0) {
          fStack_90 = param_2[2] - param_4[2];
          fVar24 = *param_2 - *param_4;
          fVar26 = param_2[1] - param_4[1];
          if (((*(uint *)((longlong)param_1 + 0x29c) & 0x200000) != 0) &&
             (ABS(fStack_90) < *(float *)((longlong)param_1 + 0x39c))) {
            fStack_90 = 0.0;
          }
          fVar14 = *(float *)(lVar10 + 0x110);
          fVar15 = fVar26 * fVar26 + fVar24 * fVar24 + fStack_90 * fStack_90;
          if (fVar15 <= fVar14 * fVar14) {
            fVar24 = fVar24 + *(float *)(lVar10 + 0xb0);
            fStack_90 = fStack_90 + *(float *)(lVar10 + 0xb8);
            fVar26 = fVar26 + *(float *)(lVar10 + 0xb4);
          }
          else if (fVar15 <= *(float *)(lVar10 + 0x114) * *(float *)(lVar10 + 0x114)) {
            fVar23 = fStack_90;
            fVar25 = fVar24;
            fVar21 = fVar26;
            if ((fVar15 != 1.0) &&
               (fVar23 = DAT_1468b5d98, fVar25 = DAT_1468b5d90, fVar21 = DAT_1468b5d94,
               1e-08 <= fVar15)) {
              auVar22 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
              fVar21 = auVar22._0_4_;
              fVar21 = fVar21 + fVar21 * (0.5 - fVar15 * 0.5 * fVar21 * fVar21);
              fVar21 = fVar21 + fVar21 * (0.5 - fVar15 * 0.5 * fVar21 * fVar21);
              fVar23 = fStack_90 * fVar21;
              fVar25 = fVar24 * fVar21;
              fVar21 = fVar26 * fVar21;
            }
            fVar24 = fVar25 * fVar14 + *(float *)(lVar10 + 0xb0);
            fVar26 = fVar21 * fVar14 + *(float *)(lVar10 + 0xb4);
            fStack_90 = fVar23 * fVar14 + *(float *)(lVar10 + 0xb8);
            local_98 = CONCAT44(fVar26,fVar24);
          }
          else {
            local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
            fStack_90 = DAT_1468b5d98;
            fVar24 = DAT_1468b5d90;
            fVar26 = DAT_1468b5d94;
          }
          *(ulonglong *)(lVar10 + 0xb0) = CONCAT44(fVar26,fVar24);
          *(float *)(lVar10 + 0xb8) = fStack_90;
          if (*(char *)((longlong)param_1 + 0x1dc) == '\x01') {
            *(undefined8 *)(lVar10 + 0xa4) = *(undefined8 *)(lVar10 + 0xb0);
            *(float *)(lVar10 + 0xac) = fStack_90;
            uVar4 = *(undefined8 *)(param_3 + 2);
            *(undefined8 *)(lVar10 + 0xc0) = *(undefined8 *)param_3;
            *(undefined8 *)(lVar10 + 200) = uVar4;
            uVar4 = *(undefined8 *)(param_3 + 2);
            *(undefined8 *)(lVar10 + 0xd0) = *(undefined8 *)param_3;
            *(undefined8 *)(lVar10 + 0xd8) = uVar4;
            fVar24 = param_5[1];
            fVar26 = param_5[2];
            fVar14 = param_5[3];
            *(float *)(lVar10 + 0xe0) = *param_5;
            *(float *)(lVar10 + 0xe4) = fVar24;
            *(float *)(lVar10 + 0xe8) = fVar26;
            *(float *)(lVar10 + 0xec) = fVar14;
            FUN_1423267a0(local_88,*(undefined8 *)(param_1[1] + 0x4c0));
            local_98 = *(ulonglong *)param_4;
            fStack_90 = param_4[2];
            if (((*(byte *)((longlong)param_1 + 0x29c) & 0x20) == 0) &&
               ((*(uint *)(param_1 + 0x1d) & 0x2000) == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
            FUN_1423990b0(param_1[-0x14],&local_98,0,0,uVar9);
          }
          else {
            fVar24 = *param_3;
            fVar26 = param_3[1];
            fVar14 = param_3[2];
            fVar15 = param_3[3];
            fVar20 = -*param_5;
            fVar12 = -param_5[1];
            fStack_8c = param_5[3];
            fStack_90 = -param_5[2];
            fVar23 = *(float *)(lVar10 + 0xd0);
            fVar25 = *(float *)(lVar10 + 0xd4);
            fVar21 = *(float *)(lVar10 + 0xd8);
            fVar3 = *(float *)(lVar10 + 0xdc);
            local_98 = *(ulonglong *)param_5 ^ 0x8000000080000000;
            fVar27 = fVar15 * fVar20 * _DAT_146af0160 + fStack_8c * fVar24 +
                     fVar14 * fVar12 * _DAT_146af0150 + fVar26 * fStack_90 * _DAT_146af0140;
            fVar28 = fVar14 * fVar20 * fRam0000000146af0164 + fStack_8c * fVar26 +
                     fVar15 * fVar12 * fRam0000000146af0154 +
                     fVar24 * fStack_90 * fRam0000000146af0144;
            fVar29 = fVar26 * fVar20 * fRam0000000146af0168 + fStack_8c * fVar14 +
                     fVar24 * fVar12 * fRam0000000146af0158 +
                     fVar15 * fStack_90 * fRam0000000146af0148;
            fVar30 = fVar24 * fVar20 * fRam0000000146af016c + fStack_8c * fVar15 +
                     fVar26 * fVar12 * fRam0000000146af015c +
                     fVar14 * fStack_90 * fRam0000000146af014c;
            fVar17 = fVar21 * fVar27 * fRam0000000146af0164;
            fVar18 = fVar25 * fVar27 * fRam0000000146af0168;
            fVar19 = fVar23 * fVar27 * fRam0000000146af016c;
            fVar24 = fVar3 * fVar28 * fRam0000000146af0154;
            fVar26 = fVar23 * fVar28 * fRam0000000146af0158;
            fVar14 = fVar25 * fVar28 * fRam0000000146af015c;
            fVar15 = fVar23 * fVar29 * fRam0000000146af0144;
            fVar12 = fVar3 * fVar29 * fRam0000000146af0148;
            fVar20 = fVar21 * fVar29 * fRam0000000146af014c;
            *(float *)(lVar10 + 0xd0) =
                 fVar3 * fVar27 * _DAT_146af0160 + fVar30 * fVar23 +
                 fVar21 * fVar28 * _DAT_146af0150 + fVar25 * fVar29 * _DAT_146af0140;
            *(float *)(lVar10 + 0xd4) = fVar17 + fVar30 * fVar25 + fVar24 + fVar15;
            *(float *)(lVar10 + 0xd8) = fVar18 + fVar30 * fVar21 + fVar26 + fVar12;
            *(float *)(lVar10 + 0xdc) = fVar19 + fVar30 * fVar3 + fVar14 + fVar20;
            uVar7 = DAT_1464aa81c;
            uVar6 = DAT_1464aa818;
            uVar5 = DAT_1464aa814;
            *(undefined4 *)(lVar10 + 0xe0) = DAT_1464aa810;
            *(undefined4 *)(lVar10 + 0xe4) = uVar5;
            *(undefined4 *)(lVar10 + 0xe8) = uVar6;
            *(undefined4 *)(lVar10 + 0xec) = uVar7;
            FUN_1423267a0(local_88,*(undefined8 *)(param_1[1] + 0x4c0));
            local_98 = *(ulonglong *)param_4;
            fStack_90 = param_4[2];
            if (((*(byte *)((longlong)param_1 + 0x29c) & 0x20) == 0) &&
               ((*(uint *)(param_1 + 0x1d) & 0x2000) == 0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = 1;
            }
            FUN_142399390(param_1[-0x14],&local_98,param_5,0,0,uVar9);
          }
          FUN_14237fa30(local_88);
          dVar16 = *(double *)(lVar10 + 0x100);
          dVar1 = *(double *)(lVar10 + 0xf8);
          if (dVar1 < dVar16) {
            dVar16 = (dVar1 + dVar16) * 0.5;
            *(double *)(lVar10 + 0x100) = dVar16;
          }
          if (cVar8 == '\x01') {
            fVar24 = *(float *)(param_1[1] + 0x560);
          }
          else {
            fVar24 = *(float *)((longlong)param_1 + 0x174);
          }
          dVar13 = (double)fVar24;
          *(double *)(lVar10 + 0xf8) = dVar13;
          if (*(float *)(lVar10 + 0xf4) == 0.0) {
            dVar16 = dVar13;
            dVar1 = dVar13;
          }
          dVar2 = (dVar13 - dVar1) * 1.25;
          dVar1 = 0.0;
          if ((0.0 <= dVar2) &&
             (dVar1 = (double)*(float *)(lVar10 + 0x124) + (double)*(float *)(lVar10 + 0x124),
             dVar2 <= dVar1)) {
            dVar1 = dVar2;
          }
          dVar2 = dVar13 - dVar1;
          if ((dVar13 - dVar1 <= dVar16) && (dVar2 = dVar13, dVar16 <= dVar13)) {
            dVar2 = dVar16;
          }
          *(double *)(lVar10 + 0x100) = dVar2;
          *(float *)(lVar10 + 0xf0) = (float)(dVar13 - dVar2);
          *(undefined4 *)(lVar10 + 0xf4) = *(undefined4 *)(lVar11 + 0x790);
        }
      }
    }
  }
  return;
}



// FUNCTION 1423560b0 FUN_1423560b0 body=275 status=ok
// SIG undefined FUN_1423560b0(void)

void FUN_1423560b0(longlong *param_1)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  int iVar7;
  void *_Dst;
  undefined1 local_res8 [8];
  ulonglong uVar3;
  
  FUN_1422feb30(*param_1,(longlong)(int)param_1[1],local_res8[0],local_res8);
  uVar1 = *(uint *)(param_1 + 1);
  uVar3 = 0;
  if (0 < (int)(uVar1 - 1)) {
    pbVar4 = (byte *)*param_1;
    uVar5 = uVar3;
    while( true ) {
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      if ((*pbVar4 & 1) != 0) break;
      uVar5 = uVar5 + 1;
      pbVar4 = pbVar4 + 0x90;
      if ((longlong)(int)(uVar1 - 1) <= (longlong)uVar5) {
        return;
      }
    }
    if ((int)uVar1 < (int)uVar2) {
      iVar7 = uVar2 - uVar1;
      *(uint *)(param_1 + 1) = uVar2;
      if (*(int *)((longlong)param_1 + 0xc) < (int)uVar2) {
        TArray<FTTLMissionRankingEventAndReceiveData,FDefaultAllocator>::ResizeGrow(param_1);
      }
      _Dst = (void *)((longlong)(int)uVar1 * 0x90 + *param_1);
      if (iVar7 != 0) {
        puVar6 = (undefined4 *)((longlong)_Dst + 0x70);
        do {
          puVar6[-3] = 0xffffffff;
          puVar6[-2] = 0;
          puVar6[-1] = 0xffffffff;
          *puVar6 = 0;
          puVar6[1] = 0xffffffff;
          puVar6[2] = 0;
          *(undefined8 *)(puVar6 + 4) = 0;
          *(undefined8 *)(puVar6 + 6) = 0;
          _guard_xfg_dispatch_icall_nop(_Dst,0,0x90);
          _Dst = (void *)((longlong)_Dst + 0x90);
          puVar6[-0x19] = 0x3f800000;
          puVar6 = puVar6 + 0x24;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else if (((int)uVar2 < (int)uVar1) && (uVar2 != uVar1)) {
      *(uint *)(param_1 + 1) = uVar2;
      return;
    }
  }
  return;
}



// FUNCTION 1423561d0 FUN_1423561d0 body=241 status=ok
// SIG undefined FUN_1423561d0(void)

void FUN_1423561d0(longlong *param_1,undefined4 param_2,float param_3,float param_4,float *param_5,
                  float *param_6)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = *(float *)(param_1[0x2f] + 0x220) - *param_6;
  fVar3 = *(float *)(param_1[0x2f] + 0x224) - param_6[1];
  fVar4 = SQRT(*param_5 * *param_5 + param_5[1] * param_5[1] + param_5[2] * param_5[2]);
  if (0.0001 <= fVar4) {
    fVar2 = SQRT(fVar2 * fVar2 + fVar3 * fVar3) * (1.0 / fVar4);
    if (1.0 <= fVar2) {
      fVar2 = 1.0;
    }
    param_3 = param_3 + (1.0 - fVar2) * param_4;
  }
  else {
    param_3 = 0.0;
  }
  cVar1 = (**(code **)(*param_1 + 0x560))();
  if (cVar1 != '\0') {
    (**(code **)(*param_1 + 0x5a0))(param_1,3);
  }
                    /* WARNING: Could not recover jumptable at 0x0001423562ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x610))(param_1,param_3,param_2);
  return;
}



// FUNCTION 1423562d0 FUN_1423562d0 body=374 status=ok
// SIG undefined FUN_1423562d0(void)

void FUN_1423562d0(longlong *param_1,float param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  
  if ((((1e-06 <= param_2) && (param_3 < (int)param_1[0x78])) &&
      (cVar2 = (**(code **)(*param_1 + 0x5c0))(), cVar2 != '\0')) &&
     (cVar2 = (**(code **)(*(longlong *)param_1[0x2f] + 0x400))((longlong *)param_1[0x2f],0),
     cVar2 == '\0')) {
    uVar1 = *(uint *)(param_1 + 0x60);
    *(uint *)(param_1 + 0x60) = uVar1 | 0x10;
    switch((char)param_1[0x49]) {
    case '\0':
      break;
    case '\x01':
      (**(code **)(*param_1 + 0x800))(param_1,param_2,param_3);
      break;
    case '\x02':
      (**(code **)(*param_1 + 0x808))(param_1,param_2,param_3);
      break;
    case '\x03':
      (**(code **)(*param_1 + 0x710))(param_1,param_2,param_3);
      break;
    case '\x04':
      (**(code **)(*param_1 + 0x818))(param_1,param_2,param_3);
      break;
    case '\x05':
      (**(code **)(*param_1 + 0x810))(param_1,param_2,param_3);
      break;
    case '\x06':
      (**(code **)(*param_1 + 0x820))(param_1,param_2,param_3);
      break;
    default:
      (**(code **)(*param_1 + 0x5a0))(param_1,0,0);
    }
    *(uint *)(param_1 + 0x60) =
         *(uint *)(param_1 + 0x60) ^ ((uVar1 >> 4 & 0xff) << 4 ^ *(uint *)(param_1 + 0x60)) & 0x10;
    if ((*(uint *)(param_1 + 0x60) & 0x10000) != 0) {
      (**(code **)(*param_1 + 0x450))(param_1,param_1[0x61]);
    }
  }
  return;
}



// FUNCTION 142356470 FUN_142356470 body=1282 status=ok
// SIG undefined FUN_142356470(void)

void FUN_142356470(longlong *param_1,float *param_2,float *param_3,float param_4,float param_5,
                  int param_6)

{
  float fVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  if ((1e-06 <= param_5) && (1e-06 <= param_4)) {
    cVar2 = (**(code **)(*param_1 + 0xa60))();
    if (cVar2 == '\0') {
      cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
      if ((cVar2 == '\0') && ((*(byte *)((longlong)param_1 + 0x4b4) & 0x20) == 0)) {
        lVar3 = param_1[0x2f];
        fVar6 = 1.0 / param_4;
        fVar1 = *(float *)(lVar3 + 0x228);
        fVar5 = param_2[2];
        *(ulonglong *)((longlong)param_1 + 0x18c) =
             CONCAT44((*(float *)(lVar3 + 0x224) - param_2[1]) * fVar6,
                      (*(float *)(lVar3 + 0x220) - *param_2) * fVar6);
        *(float *)((longlong)param_1 + 0x194) = (fVar1 - fVar5) * fVar6;
        fVar5 = (*(float *)((longlong)param_1 + 0x194) + *(float *)((longlong)param_1 + 0x194)) -
                param_3[2];
        uStack_70 = CONCAT44(uStack_70._4_4_,fVar5);
        *(ulonglong *)((longlong)param_1 + 0x18c) =
             CONCAT44((*(float *)(param_1 + 0x32) + *(float *)(param_1 + 0x32)) - param_3[1],
                      (*(float *)((longlong)param_1 + 0x18c) + *(float *)((longlong)param_1 + 0x18c)
                      ) - *param_3);
        *(float *)((longlong)param_1 + 0x194) = fVar5;
        lVar3 = (**(code **)(*param_1 + 0x440))(param_1);
        fVar5 = *(float *)(lVar3 + 0x490);
        if (0.0001 <= fVar5) {
          fVar1 = *(float *)(param_1 + 0x32);
          fVar6 = *(float *)((longlong)param_1 + 0x18c);
          fVar10 = *(float *)((longlong)param_1 + 0x194);
          fVar7 = fVar6 * fVar6 + fVar1 * fVar1 + fVar10 * fVar10;
          if (fVar7 <= fVar5 * fVar5) {
            uVar4 = *(undefined8 *)((longlong)param_1 + 0x18c);
            fVar10 = *(float *)((longlong)param_1 + 0x194);
          }
          else {
            auVar9 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
            fVar8 = auVar9._0_4_;
            fVar8 = fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8);
            fVar5 = (fVar8 + fVar8 * (0.5 - fVar7 * 0.5 * fVar8 * fVar8)) * fVar5;
            fVar10 = fVar10 * fVar5;
            uVar4 = CONCAT44(fVar1 * fVar5,fVar6 * fVar5);
            local_98 = uVar4;
          }
        }
        else {
          uVar4 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          fVar10 = DAT_1468b5d98;
          local_98 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        }
        *(undefined8 *)((longlong)param_1 + 0x18c) = uVar4;
        *(float *)((longlong)param_1 + 0x194) = fVar10;
      }
    }
    local_88 = *(undefined8 *)param_2;
    local_80 = param_2[2];
    local_78 = *(undefined8 *)(param_1[0x2f] + 0x220);
    local_90 = *(float *)(param_1[0x2f] + 0x228);
    uStack_70 = CONCAT44(uStack_70._4_4_,local_90);
    FUN_14233b940(param_1,&local_98,&local_78,&local_88);
    lVar3 = param_1[0x2f];
    fVar5 = *(float *)(lVar3 + 0x220);
    fVar1 = *(float *)(lVar3 + 0x224);
    local_78 = *(undefined8 *)(lVar3 + 0x220);
    fVar6 = *(float *)(lVar3 + 0x228);
    uStack_70 = *(undefined8 *)(lVar3 + 0x228);
    if ((((float)local_98 != fVar5) || (local_98._4_4_ != fVar1)) || (local_90 != fVar6)) {
      fVar10 = SQRT((fVar1 - param_2[1]) * (fVar1 - param_2[1]) +
                    (fVar5 - *param_2) * (fVar5 - *param_2) +
                    (fVar6 - param_2[2]) * (fVar6 - param_2[2]));
      if (0.0001 < fVar10) {
        param_5 = param_5 + (SQRT((local_98._4_4_ - fVar1) * (local_98._4_4_ - fVar1) +
                                  ((float)local_98 - fVar5) * ((float)local_98 - fVar5) +
                                  (local_90 - fVar6) * (local_90 - fVar6)) * param_4) / fVar10;
      }
      local_78 = *(undefined8 *)(lVar3 + 0x210);
      uStack_70 = *(undefined8 *)(lVar3 + 0x218);
      local_90 = local_90 - fVar6;
      local_98 = CONCAT44(local_98._4_4_ - fVar1,(float)local_98 - fVar5);
      uVar4 = FUN_14247f500();
      FUN_14247ea90(uVar4);
      (**(code **)(*param_1 + 0x488))(param_1,&local_98,&local_78,1,0,0);
    }
    cVar2 = (**(code **)(*param_1 + 0xa60))(param_1);
    if (cVar2 == '\0') {
      cVar2 = FRootMotionSourceGroup::HasOverrideVelocity(param_1 + 0xc5);
      if (((cVar2 == '\0') && (-160.0 < *(float *)((longlong)param_1 + 0x194))) &&
         (*(float *)((longlong)param_1 + 0x194) < 0.0)) {
        *(float *)((longlong)param_1 + 0x194) =
             -80.0 - SQRT(*(float *)((longlong)param_1 + 0x18c) *
                          *(float *)((longlong)param_1 + 0x18c) +
                          *(float *)(param_1 + 0x32) * *(float *)(param_1 + 0x32)) * 0.7;
      }
    }
    if ((1e-06 <= param_5) && (param_6 < (int)param_1[0x78])) {
      (**(code **)(*param_1 + 0x818))(param_1,param_5);
    }
  }
  return;
}



// FUNCTION 142356980 FUN_142356980 body=1771 status=ok
// SIG undefined FUN_142356980(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_142356980(longlong *param_1,float *param_2,float *param_3,longlong param_4,
                       uint *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  char cVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  bool bVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_4c8 [32];
  byte *local_4a8;
  undefined1 local_4a0;
  float local_498;
  float local_494;
  float local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  byte local_478 [12];
  float local_46c;
  undefined1 local_464 [8];
  float local_45c;
  undefined1 local_458 [8];
  float local_450;
  float local_440;
  float local_43c;
  float local_438;
  uint local_3e8;
  uint local_3e0;
  undefined8 local_3dc;
  undefined1 local_3d0 [12];
  undefined4 local_3c4;
  undefined4 local_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined4 local_358;
  undefined8 local_350;
  undefined4 local_348;
  undefined8 local_338;
  undefined8 uStack_330;
  byte local_328 [12];
  undefined4 local_31c;
  undefined1 local_298 [448];
  ulonglong local_d8;
  
  local_d8 = DAT_1468387a8 ^ (ulonglong)auStack_4c8;
  uVar10 = (**(code **)(*param_1 + 0x6c8))(param_1,param_4);
  if (((char)uVar10 == '\0') || (fVar22 = *(float *)((longlong)param_1 + 0x234), fVar22 <= 0.0)) {
LAB_14235700b:
    return uVar10 & 0xffffffffffffff00;
  }
  fVar13 = *(float *)(param_4 + 0x28);
  fVar8 = *(float *)(param_1[0x2f] + 0x228);
  uVar10 = param_1[0x44];
  lVar7 = *(longlong *)(uVar10 + 0x4d0);
  uVar14 = *(uint *)(lVar7 + 0x230) & _DAT_146af0070;
  uVar15 = *(uint *)(lVar7 + 0x234) & uRam0000000146af0074;
  uVar16 = *(uint *)(lVar7 + 0x238) & uRam0000000146af0078;
  uVar17 = *(uint *)(lVar7 + 0x23c) & uRam0000000146af007c;
  auVar19._4_4_ = uVar15;
  auVar19._0_4_ = uVar14;
  auVar19._8_4_ = uVar16;
  auVar19._12_4_ = uVar17;
  auVar20._4_4_ = uVar16;
  auVar20._0_4_ = uVar15;
  auVar20._8_4_ = uVar14;
  auVar20._12_4_ = uVar17;
  auVar20 = minps(auVar19,auVar20);
  auVar21._4_4_ = uVar14;
  auVar21._0_4_ = uVar16;
  auVar21._8_4_ = uVar15;
  auVar21._12_4_ = uVar17;
  auVar21 = minps(auVar20,auVar21);
  fVar18 = auVar21._0_4_ * *(float *)(lVar7 + 0x710);
  fVar25 = auVar21._0_4_ * *(float *)(lVar7 + 0x714);
  if (((fVar18 - fVar25) + fVar8 < fVar13) ||
     (((fVar1 = *param_2, fVar1 == 0.0 && (param_2[1] == 0.0)) && (param_2[2] == 0.0))))
  goto LAB_14235700b;
  fVar2 = *(float *)(param_4 + 0x3c);
  fVar3 = param_2[1];
  fVar18 = fVar8 - fVar18;
  fVar4 = *(float *)(param_4 + 0x38);
  fVar5 = *(float *)(param_4 + 0x40);
  fVar6 = param_2[2];
  uVar10 = (**(code **)(*param_1 + 0x560))(param_1);
  fVar23 = fVar22;
  fVar24 = fVar18;
  if ((char)uVar10 != '\0') {
    uVar10 = 0;
    if (((byte)*(uint *)(param_1 + 0x82) & 3) == 3) {
      if ((*(uint *)(param_1 + 0x82) & 4) == 0) {
        fVar24 = *(float *)((longlong)param_1 + 0x414);
      }
      else {
        fVar24 = *(float *)(param_1 + 0x83);
      }
      if (fVar24 <= 0.0) {
        fVar24 = 0.0;
      }
      fVar23 = *(float *)((longlong)param_1 + 0x234) + 4.8;
      fVar22 = fVar22 - fVar24;
      fVar24 = fVar18 - fVar24;
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
      uVar11 = (**(code **)(*param_1 + 0x868))(param_1,param_4 + 0x14,param_4 + 0x20,fVar25);
      bVar12 = (char)uVar11 == '\0';
      uVar10 = CONCAT71((int7)((ulonglong)uVar11 >> 8),bVar12);
      if (((*(byte *)(param_1 + 0x82) & 4) != 0) || (bVar12)) {
        fVar18 = fVar18 - *(float *)((longlong)param_1 + 0x414);
      }
      else {
        fVar18 = *(float *)(param_1 + 0x89);
      }
    }
  }
  if (fVar13 <= fVar24) goto LAB_14235700b;
  FUN_14237e6d0(local_298,param_1[0x2f],1,1);
  _guard_xfg_dispatch_icall_nop(local_328,0,0x90);
  local_31c = 0x3f800000;
  local_488 = *(undefined8 *)(param_1[0x2f] + 0x210);
  uStack_480 = *(undefined8 *)(param_1[0x2f] + 0x218);
  local_498 = -(fVar22 * *param_2);
  local_494 = -(fVar22 * param_2[1]);
  local_490 = -(fVar22 * param_2[2]);
  uVar11 = FUN_14247f500();
  FUN_14247ea90(uVar11);
  local_4a8 = local_328;
  local_4a0 = 0;
  (**(code **)(*param_1 + 0x488))(param_1,&local_498,&local_488,1);
  if ((local_328[0] & 2) != 0) {
LAB_142356fec:
    FUN_142396200(local_298);
    FUN_14237f990(local_298);
    return 0;
  }
  _guard_xfg_dispatch_icall_nop(local_478,0,0x90);
  local_46c = 1.0;
  uVar11 = FUN_14247f500();
  FUN_14247ea90(uVar11);
  local_4a8 = local_478;
  local_4a0 = 0;
  (**(code **)(*param_1 + 0x488))(param_1,param_3,&local_488,1);
  if ((local_478[0] & 1) != 0) {
    if ((local_478[0] & 2) != 0) goto LAB_142356fec;
    if ((local_478[0] & local_328[0] & 1) != 0) {
      (**(code **)(*param_1 + 0x468))(param_1,local_328);
    }
    (**(code **)(*param_1 + 0x468))(param_1,local_478);
    cVar9 = (**(code **)(*param_1 + 0x558))(param_1);
    fVar22 = local_46c;
    if (cVar9 != '\0') goto LAB_142356fd9;
    local_4a8 = local_478;
    local_4a0 = 1;
    fVar13 = (float)(**(code **)(*param_1 + 0x4a8))(param_1,param_3);
    cVar9 = (**(code **)(*param_1 + 0x558))(param_1);
    if ((cVar9 != '\0') || ((fVar22 == 0.0 && (fVar13 == 0.0)))) goto LAB_142356fec;
  }
  local_498 = fVar23 * *param_2;
  local_338 = *(undefined8 *)(param_1[0x2f] + 0x210);
  uStack_330 = *(undefined8 *)(param_1[0x2f] + 0x218);
  local_494 = fVar23 * param_2[1];
  local_490 = fVar23 * param_2[2];
  uVar11 = FUN_14247f500();
  FUN_14247ea90(uVar11);
  local_4a8 = local_478;
  local_4a0 = 0;
  (**(code **)(*param_1 + 0x488))(param_1,&local_498,&local_338,1);
  if ((local_478[0] & 2) != 0) goto LAB_142356fec;
  local_3e8 = local_3e8 & 0xfffffffe;
  local_3e0 = local_3e0 & 0xfffffff8;
  local_368 = 0xffffffff00000000;
  uStack_360 = 0xffffffff00000000;
  local_358 = 0;
  local_350 = 0;
  local_348 = 0;
  local_3dc = 0;
  local_36c = 0xffffffff;
  _guard_xfg_dispatch_icall_nop(local_3d0,0,0x90);
  local_3c4 = 0x3f800000;
  if ((local_478[0] & 1) == 0) {
LAB_142356f89:
    if (param_5 != (uint *)0x0) {
      *param_5 = *param_5 & 0xfffffffe;
      *param_5 = *param_5 | local_3e8 & 1;
      param_5[2] = param_5[2] & 0xfffffff8;
      param_5[2] = param_5[2] | local_3e0 & 7;
      param_5[3] = (uint)local_3dc;
      param_5[4] = local_3dc._4_4_;
      FUN_140729f20(param_5 + 6,local_3d0);
    }
  }
  else {
    fVar18 = local_450 - fVar18;
    if (((*(float *)((longlong)param_1 + 0x234) <= fVar18 &&
          fVar18 != *(float *)((longlong)param_1 + 0x234)) ||
        (((cVar9 = (**(code **)(*param_1 + 0x7f0))(param_1,local_478), cVar9 == '\0' &&
          ((local_43c * param_3[1] + local_440 * *param_3 + local_438 * param_3[2] < 0.0 ||
           (fVar8 < local_45c)))) ||
         (cVar9 = (**(code **)(*param_1 + 0x868))(param_1,local_464,local_458,fVar25), cVar9 == '\0'
         )))) || ((0.0 < fVar18 &&
                  (cVar9 = (**(code **)(*param_1 + 0x6c8))(param_1,local_478), cVar9 == '\0'))))
    goto LAB_142356fec;
    if (param_5 != (uint *)0x0) {
      lVar7 = param_1[0x2f];
      local_4a8 = local_478;
      local_498 = *(float *)(lVar7 + 0x220);
      local_494 = *(float *)(lVar7 + 0x224);
      local_490 = *(float *)(lVar7 + 0x228);
      (**(code **)(*param_1 + 0x870))(param_1,&local_498,&local_3e0,0);
      if (((fVar8 < local_45c) && ((local_3e0 & 1) == 0)) &&
         (-(fVar5 * fVar6) - (fVar2 * fVar3 + fVar1 * fVar4) < 0.08)) goto LAB_142356fec;
      local_3e8 = local_3e8 | 1;
      goto LAB_142356f89;
    }
  }
  *(uint *)((longlong)param_1 + 0x4b4) =
       ~(*(uint *)((longlong)param_1 + 0x4b4) << 5) & 0x20 | *(uint *)((longlong)param_1 + 0x4b4);
LAB_142356fd9:
  FUN_14237f990(local_298);
  return 1;
}



// FUNCTION 142357070 FUN_142357070 body=64 status=ok
// SIG undefined FUN_142357070(void)

void FUN_142357070(longlong param_1)

{
  longlong lVar1;
  
  if ((*(byte *)(param_1 + 0xba) & 4) != 0) {
    *(byte *)(param_1 + 0xba) = *(byte *)(param_1 + 0xba) & 0xfb;
    lVar1 = FUN_14233c7a0();
    if (lVar1 != 0) {
      FUN_1422d98f0(lVar1,*(undefined8 *)(param_1 + 0x6b0));
      return;
    }
  }
  return;
}



// FUNCTION 1423570b0 FUN_1423570b0 body=86 status=ok
// SIG undefined FUN_1423570b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423570b0(longlong param_1)

{
  undefined4 uVar1;
  
  FUN_142379be0();
  *(undefined8 *)(param_1 + 0x350) = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xffbfffff;
  *(undefined4 *)(param_1 + 0x358) = uVar1;
  *(undefined8 *)(param_1 + 0x4cc) = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x4d4) = DAT_1468b5d98;
  return;
}



// FUNCTION 142357110 SweepMultiByChannel body=295 status=ok
// SIG undefined SweepMultiByChannel(void)

void UWorld::SweepMultiByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined4 param_6,int *param_7,undefined8 param_8,
               undefined8 param_9)

{
  float fVar1;
  int iVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = *param_7;
  if (iVar2 == 1) {
    if ((0.0001 < (float)param_7[1]) || (0.0001 < (float)param_7[2])) goto LAB_142357153;
    fVar1 = (float)param_7[3];
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_1423571f9;
    fVar1 = (float)param_7[1];
  }
  param_1 = 0x38d1b717;
  if (fVar1 <= 0.0001) {
LAB_1423571f9:
    FUN_142318d90(param_1,param_2,param_3,param_4,param_6,param_8,param_9,&DAT_146aefe88);
    return;
  }
LAB_142357153:
  local_20 = *(undefined4 *)(param_4 + 1);
  local_28 = *param_4;
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  FUN_14230fc20(local_18,param_7,param_5,param_2,&local_18,&local_28,param_6,param_8,param_9,
                &DAT_146aefe88);
  return;
}



// FUNCTION 142357240 SweepMultiByObjectType body=295 status=ok
// SIG undefined SweepMultiByObjectType(void)

bool UWorld::SweepMultiByObjectType
               (undefined8 param_1,longlong param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,int *param_7,undefined8 param_8)

{
  int iVar1;
  bool bVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar1 = *param_7;
  if (iVar1 == 1) {
    param_1 = 0x38d1b717;
    if ((((float)param_7[1] <= 0.0001) && ((float)param_7[2] <= 0.0001)) &&
       ((float)param_7[3] <= 0.0001)) goto LAB_14235729b;
    bVar2 = false;
  }
  else if ((iVar1 == 2) || (iVar1 == 3)) {
    param_1 = 0x38d1b717;
    bVar2 = (float)param_7[1] <= 0.0001;
  }
  else {
    bVar2 = true;
  }
  if (!bVar2) {
    local_20 = *(undefined4 *)(param_4 + 1);
    local_28 = *param_4;
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    FUN_14230fc20(local_18,param_7,param_5,param_2,&local_18,&local_28,DAT_146aefe3c,param_8,
                  &DAT_146aefe68,param_6);
    return 0 < *(int *)(param_2 + 8);
  }
LAB_14235729b:
  FUN_142318d90(param_1,param_2,param_3,param_4,DAT_146aefe3c,param_8,&DAT_146aefe68,param_6);
  return 0 < *(int *)(param_2 + 8);
}



// FUNCTION 142357370 FUN_142357370 body=436 status=ok
// SIG undefined FUN_142357370(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142357370(undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,int *param_7,undefined8 param_8)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined8 in_stack_ffffffffffffff78;
  undefined4 uVar4;
  undefined8 in_stack_ffffffffffffff88;
  undefined4 uVar5;
  undefined4 local_58 [4];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined8 uStack_10;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffffffffffff78 >> 0x20);
  uVar5 = (undefined4)((ulonglong)in_stack_ffffffffffffff88 >> 0x20);
  FUN_1426d3dd0(&local_28);
  FUN_1426ea8d0(&local_28,2);
  cVar3 = FUN_142311390(param_6,local_58);
  if (cVar3 == '\0') {
    local_58[0] = 0;
    local_28 = _DAT_146aefe68;
    uStack_24 = uRam0000000146aefe6c;
    uStack_20 = uRam0000000146aefe70;
    uStack_1c = uRam0000000146aefe74;
    local_18 = _DAT_146aefe78;
    uStack_10 = uRam0000000146aefe80;
  }
  iVar2 = *param_7;
  if (iVar2 == 1) {
    if (((float)param_7[1] <= 0.0001) && ((float)param_7[2] <= 0.0001)) {
      fVar1 = (float)param_7[3];
      goto joined_r0x0001423574e0;
    }
LAB_142357433:
    local_40 = *(undefined4 *)(param_4 + 1);
    local_48 = *param_4;
    local_30 = *(undefined4 *)(param_3 + 1);
    local_38 = *param_3;
    FUN_14230fc20(param_1,param_7,param_5,param_2,&local_38,&local_48,CONCAT44(uVar5,local_58[0]),
                  param_8,&local_28,&DAT_146aefe88);
  }
  else {
    if ((iVar2 == 2) || (iVar2 == 3)) {
      fVar1 = (float)param_7[1];
joined_r0x0001423574e0:
      if (0.0001 < fVar1) goto LAB_142357433;
    }
    FUN_142318d90(param_1,param_2,param_3,param_4,CONCAT44(uVar4,local_58[0]),param_8,&local_28,
                  &DAT_146aefe88);
  }
  return;
}



// FUNCTION 142357530 SweepSingleByChannel body=343 status=ok
// SIG undefined SweepSingleByChannel(void)

void UWorld::SweepSingleByChannel
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined4 param_6,int *param_7,undefined8 param_8,
               undefined8 param_9)

{
  float fVar1;
  int iVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = *param_7;
  if (iVar2 == 1) {
    if ((0.0001 < (float)param_7[1]) || (0.0001 < (float)param_7[2])) goto LAB_142357573;
    fVar1 = (float)param_7[3];
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_142357619;
    fVar1 = (float)param_7[1];
  }
  if (fVar1 <= 0.0001) {
LAB_142357619:
    local_20 = *(undefined4 *)(param_4 + 1);
    local_28 = *param_4;
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    FUN_142319320(local_18,param_2,&local_18,&local_28,param_6,param_8,param_9,&DAT_146aefe88);
    return;
  }
LAB_142357573:
  local_10 = *(undefined4 *)(param_4 + 1);
  local_18 = *param_4;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  FUN_1423103c0(local_28,param_7,param_5,param_2,&local_28,&local_18,param_6,param_8,param_9,
                &DAT_146aefe88);
  return;
}



// FUNCTION 142357690 SweepSingleByObjectType body=341 status=ok
// SIG undefined SweepSingleByObjectType(void)

void UWorld::SweepSingleByObjectType
               (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4,
               undefined8 param_5,undefined8 param_6,int *param_7,undefined8 param_8)

{
  float fVar1;
  int iVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = *param_7;
  if (iVar2 == 1) {
    if ((0.0001 < (float)param_7[1]) || (0.0001 < (float)param_7[2])) goto LAB_1423576d3;
    fVar1 = (float)param_7[3];
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_142357778;
    fVar1 = (float)param_7[1];
  }
  if (fVar1 <= 0.0001) {
LAB_142357778:
    local_20 = *(undefined4 *)(param_4 + 1);
    local_28 = *param_4;
    local_10 = *(undefined4 *)(param_3 + 1);
    local_18 = *param_3;
    FUN_142319320(local_18,param_2,&local_18,&local_28,DAT_146aefe3c,param_8,&DAT_146aefe68,param_6)
    ;
    return;
  }
LAB_1423576d3:
  local_10 = *(undefined4 *)(param_4 + 1);
  local_18 = *param_4;
  local_20 = *(undefined4 *)(param_3 + 1);
  local_28 = *param_3;
  FUN_1423103c0(local_28,param_7,param_5,param_2,&local_28,&local_18,DAT_146aefe3c,param_8,
                &DAT_146aefe68,param_6);
  return;
}



// FUNCTION 1423577f0 FUN_1423577f0 body=220 status=ok
// SIG undefined FUN_1423577f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423577f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined8 local_20;
  undefined8 uStack_18;
  
  FUN_1426d3dd0(&local_30);
  FUN_1426ea8d0(&local_30,2);
  cVar1 = FUN_142311390(param_6,local_38,&local_30);
  if (cVar1 == '\0') {
    local_38[0] = 0;
    local_30 = _DAT_146aefe68;
    uStack_2c = uRam0000000146aefe6c;
    uStack_28 = uRam0000000146aefe70;
    uStack_24 = uRam0000000146aefe74;
    local_20 = _DAT_146aefe78;
    uStack_18 = uRam0000000146aefe80;
  }
  UWorld::SweepSingleByChannel
            (param_1,param_2,param_3,param_4,param_5,local_38[0],param_7,param_8,&local_30);
  return;
}



// FUNCTION 1423578d0 SweepTestByChannel body=331 status=ok
// SIG undefined SweepTestByChannel(void)

void UWorld::SweepTestByChannel
               (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
               undefined4 param_5,int *param_6,undefined8 param_7,undefined8 param_8)

{
  float fVar1;
  int iVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  
  iVar2 = *param_6;
  if (iVar2 == 1) {
    if ((0.0001 < (float)param_6[1]) || (0.0001 < (float)param_6[2])) goto LAB_142357918;
    fVar1 = (float)param_6[3];
  }
  else {
    if ((iVar2 != 2) && (iVar2 != 3)) goto LAB_1423579b2;
    fVar1 = (float)param_6[1];
  }
  if (fVar1 <= 0.0001) {
LAB_1423579b2:
    local_20 = *(undefined4 *)(param_3 + 1);
    local_28 = *param_3;
    local_10 = *(undefined4 *)(param_2 + 1);
    local_18 = *param_2;
    FUN_142319a60(local_18,&local_18,&local_28,param_5,param_7,param_8,&DAT_146aefe88);
    return;
  }
LAB_142357918:
  local_10 = *(undefined4 *)(param_3 + 1);
  local_18 = *param_3;
  local_20 = *(undefined4 *)(param_2 + 1);
  local_28 = *param_2;
  FUN_142310ba0(local_28,param_6,param_4,&local_28,&local_18,param_5,param_7,param_8,&DAT_146aefe88)
  ;
  return;
}



// FUNCTION 142357a20 FUN_142357a20 body=747 status=ok
// SIG undefined FUN_142357a20(void)

float FUN_142357a20(longlong *param_1,float *param_2,undefined8 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  longlong lVar7;
  float fVar8;
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar7 = param_1[0x2f];
  fVar1 = *(float *)(lVar7 + 0x220);
  fVar2 = *(float *)(lVar7 + 0x224);
  fVar3 = *(float *)(lVar7 + 0x228);
  local_98 = *(undefined8 *)(lVar7 + 0x210);
  uStack_90._0_4_ = *(undefined4 *)(lVar7 + 0x218);
  uStack_90._4_4_ = *(undefined4 *)(lVar7 + 0x21c);
  local_b8 = fVar1;
  fStack_b4 = fVar2;
  local_b0 = fVar3;
  FUN_1423755e0(*(undefined4 *)(lVar7 + 0x210),param_2,&local_98,1,param_3,0);
  lVar7 = (**(code **)(*param_1 + 0x440))(param_1);
  if ((*(byte *)(lVar7 + 0x49c) & 1) == 0) {
    lVar7 = param_1[0x2f];
    local_a8 = *(undefined4 *)(lVar7 + 0x220);
    uStack_a4 = *(undefined4 *)(lVar7 + 0x224);
    local_a0 = *(undefined4 *)(lVar7 + 0x228);
    local_98 = CONCAT44(fStack_b4,local_b8);
    uStack_90 = CONCAT44(uStack_90._4_4_,local_b0);
    FUN_14233b940(param_1,&local_b8,&local_98,&local_a8);
    lVar7 = param_1[0x2f];
    fVar4 = *(float *)(lVar7 + 0x220);
    fVar5 = *(float *)(lVar7 + 0x224);
    fVar6 = *(float *)(lVar7 + 0x228);
    fVar8 = SQRT(*param_2 * *param_2 + param_2[1] * param_2[1] + param_2[2] * param_2[2]);
    if ((((local_b8 == fVar4) && (fStack_b4 == fVar5)) && (local_b0 == fVar6)) || (fVar8 <= 0.0001))
    {
      fVar8 = 0.0;
    }
    else {
      fVar8 = SQRT((fStack_b4 - fVar5) * (fStack_b4 - fVar5) +
                   (local_b8 - fVar4) * (local_b8 - fVar4) + (local_b0 - fVar6) * (local_b0 - fVar6)
                  ) * (1.0 / fVar8);
      if (0.0 < (fVar5 - fVar2) * (fStack_b4 - fVar5) + (fVar4 - fVar1) * (local_b8 - fVar4) +
                (fVar6 - fVar3) * (local_b0 - fVar6)) {
        fVar8 = 0.0;
      }
      local_98 = *(undefined8 *)(lVar7 + 0x210);
      uStack_90 = *(undefined8 *)(lVar7 + 0x218);
      local_b8 = local_b8 - fVar4;
      fStack_b4 = fStack_b4 - fVar5;
      local_b0 = local_b0 - fVar6;
      FUN_1423755e0(param_1,&local_b8,&local_98,1,param_3,0);
    }
  }
  else {
    fVar8 = 0.0;
  }
  return fVar8;
}



// FUNCTION 142357d10 FUN_142357d10 body=416 status=ok
// SIG undefined FUN_142357d10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_142357d10(longlong param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  undefined4 local_res10 [2];
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 *local_70;
  code *local_68 [2];
  undefined1 local_58 [16];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_a8;
  local_88 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x4c0);
  *(byte *)((longlong)local_88 + 0xb1d) = *(byte *)((longlong)local_88 + 0xb1d) | 1;
  local_res10[0] = param_2;
  if ((*(char *)(param_1 + 0x838) != '\0') ||
     (cVar1 = (**(code **)(*local_88 + 0x9a0))(), cVar1 != '\0')) {
    cVar1 = FUN_1423146e0(*(undefined8 *)(param_1 + 0x220));
    if (*(char *)(param_1 + 0x838) == '\0') {
      uStack_78 = &local_88;
      local_70 = local_res10;
      local_38 = 0;
      local_28 = 0;
      local_80 = param_1;
      puVar3 = (undefined8 *)FUN_140438ef0(0x20,local_58);
      if (puVar3 != (undefined8 *)0x0) {
        *(undefined4 *)(puVar3 + 1) = (undefined4)local_80;
        *(undefined4 *)((longlong)puVar3 + 0xc) = local_80._4_4_;
        *(undefined4 *)(puVar3 + 2) = (undefined4)uStack_78;
        *(undefined4 *)((longlong)puVar3 + 0x14) = uStack_78._4_4_;
        *puVar3 = &PTR_FUN_143f4d0b0;
        puVar3[3] = local_70;
      }
      local_68[0] = FUN_142332620;
      uVar4 = FUN_14247f500();
      FUN_14247d5a0(uVar4,param_1,local_68);
    }
    cVar2 = FUN_1423146e0(*(undefined8 *)(param_1 + 0x220));
    if ((cVar2 != '\0') || (cVar1 != '\0')) {
      FUN_1423a76a0(local_88,local_68);
      if ((char)local_68[0] != '\0') {
        pfVar5 = (float *)FUN_142311360(*(undefined8 *)(param_1 + 0x220),&local_80);
        fVar6 = (float)FUN_142311380(*(undefined8 *)(param_1 + 0x220));
        local_48 = local_48 * fVar6 * *pfVar5;
        fStack_44 = fStack_44 * fVar6 * pfVar5[1];
        fStack_40 = fStack_40 * fVar6 * pfVar5[2];
        fStack_3c = fStack_3c * 0.0;
        if ((char)local_68[0] != '\0') {
          FUN_142245a70(param_1 + 0x7c0,local_58);
        }
      }
    }
  }
  *(byte *)((longlong)local_88 + 0xb1d) = *(byte *)((longlong)local_88 + 0xb1d) & 0xfe;
  return;
}



// FUNCTION 142357eb0 FUN_142357eb0 body=91 status=ok
// SIG undefined FUN_142357eb0(void)

void FUN_142357eb0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1428e7d90();
  if (DAT_146531c14 != 0) {
    lVar1 = FUN_14046f570(param_1);
    if (lVar1 != 0) {
      if (*(longlong *)(lVar1 + 400) == 0) {
        lVar2 = lVar1 + 0x400;
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(lVar1 + 400) + 0x98);
      }
      FUN_1425328c0(lVar2,param_1,*(undefined4 *)(lVar1 + 0x7b0));
      return;
    }
  }
  return;
}



// FUNCTION 142357f10 FUN_142357f10 body=331 status=ok
// SIG undefined FUN_142357f10(void)

void FUN_142357f10(longlong *param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 local_28 [32];
  
  if (param_1[0x10a] != DAT_1468c21b0) {
    param_1[0x10a] = DAT_1468c21b0;
    FUN_14046f570();
    uVar1 = DAT_146af00c0;
    uVar3 = FUN_14168db40();
    FCsvProfiler::BeginStat(uVar3,"CharacterMovementTick",uVar1);
    (**(code **)(*param_1 + 0xaa0))(param_1,param_3);
    (**(code **)(*param_1 + 0x580))(param_1,local_28);
    cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x438))(param_1,param_2);
      if (cVar2 == '\0') {
        FUN_14237ac80(param_1,param_2,param_3,param_4);
        cVar2 = (**(code **)(*param_1 + 0x5c0))(param_1);
        if (cVar2 != '\0') {
          cVar2 = (**(code **)(*param_1 + 0xaa8))(param_1,param_2,param_3);
          if (cVar2 != '\0') {
            uVar3 = FUN_14247f500();
            cVar2 = FUN_14248a880(uVar3,param_1,param_2,local_28);
            if (cVar2 == '\0') {
              FUN_142358060(param_1,param_2,local_28);
              (**(code **)(*param_1 + 0xab0))(param_1,param_2);
            }
          }
        }
      }
    }
    uVar3 = FUN_14168db40();
    FCsvProfiler::EndStat(uVar3,"CharacterMovementTick",uVar1);
  }
  return;
}



// FUNCTION 142358060 FUN_142358060 body=781 status=ok
// SIG undefined FUN_142358060(void)

void FUN_142358060(longlong *param_1,float param_2,undefined8 param_3)

{
  byte bVar1;
  bool bVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  undefined1 local_98 [12];
  undefined1 local_8c [20];
  undefined1 *local_78 [2];
  undefined1 local_68 [32];
  undefined8 local_48;
  undefined4 local_38;
  
  lVar3 = param_1[0x10b];
  *(undefined1 *)(param_1 + 0x10b) = 1;
  puVar8 = (undefined8 *)param_1[0x10c];
  puVar10 = puVar8 + (longlong)(int)param_1[0x10d] * 10;
  if (puVar8 != puVar10) {
    plVar7 = puVar8 + 6;
    do {
      if ((int)plVar7[2] != 0) {
        plVar9 = (longlong *)*plVar7;
        if ((longlong *)*plVar7 == (longlong *)0x0) {
          plVar9 = plVar7 + -4;
        }
        if (plVar9 != (longlong *)0x0) {
          (**(code **)(*plVar9 + 8))();
        }
      }
      (*(code *)*puVar8)();
      puVar8 = puVar8 + 10;
      plVar7 = plVar7 + 10;
    } while (puVar8 != puVar10);
  }
  FUN_14234cb30(param_1 + 0x10c,0);
  *(char *)(param_1 + 0x10b) = (char)lVar3;
  *(float *)((longlong)param_1 + 0x4c4) = *(float *)((longlong)param_1 + 0x4c4) - param_2;
  bVar1 = *(byte *)(param_1[0x44] + 0x128);
  if (bVar1 < 2) {
    if (bVar1 == 1) {
      if ((*(uint *)(param_1 + 0x60) & 0x200) != 0) {
        local_48 = 0;
        local_38 = 0;
        puVar8 = (undefined8 *)FUN_140438ef0(0x10,local_68);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = param_1;
          *puVar8 = &PTR_FUN_143f77b70;
        }
        local_78[0] = &LAB_1423322d0;
        uVar6 = FUN_14247f500();
        FUN_14247d5a0(uVar6,param_1,local_78);
      }
      FUN_1423535f0(param_1,param_2);
    }
  }
  else {
    if (((bVar1 == 2) && (param_1[0x23] != 0)) && (iVar5 = FUN_142235230(), iVar5 == 3)) {
      bVar2 = true;
      (**(code **)(*param_1 + 0x930))(param_1);
    }
    else {
      bVar2 = false;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[0x44] + 0x778))();
    if ((cVar4 == '\0') &&
       ((*(longlong *)(param_1[0x44] + 0x490) != 0 ||
        (((*(byte *)(param_1 + 0x60) & 0x80) == 0 && (cVar4 = FUN_1423146e0(), cVar4 == '\0')))))) {
      if (*(char *)(param_1[0x44] + 0x95) == '\x02') {
        (**(code **)(*param_1 + 0x5e8))(param_1,param_2);
        (**(code **)(*param_1 + 0x600))(param_1);
        if (((DAT_146531c1c != 0) && ((*(uint *)(param_1 + 0x60) & 0x1000) == 0)) &&
           ((param_1[0x23] != 0 && (iVar5 = FUN_142235230(), iVar5 == 2)))) {
          (**(code **)(*param_1 + 0x920))(param_1,param_2);
        }
      }
    }
    else {
      (**(code **)(*(longlong *)param_1[0x44] + 0x910))((longlong *)param_1[0x44],param_2);
      lVar3 = *param_1;
      uVar6 = (**(code **)(lVar3 + 0x8c8))(param_1,local_98,param_3);
      plVar7 = (longlong *)(**(code **)(lVar3 + 0x8d0))(param_1,local_8c,uVar6);
      param_1[0x6a] = *plVar7;
      *(int *)(param_1 + 0x6b) = (int)plVar7[1];
      uVar11 = (**(code **)(*param_1 + 0x598))(param_1);
      *(undefined4 *)(param_1 + 0x76) = uVar11;
      if (*(char *)(param_1[0x44] + 0x128) == '\x03') {
        (**(code **)(*param_1 + 0x8f8))(param_1,param_2);
      }
      else if (bVar2) {
        (**(code **)(*param_1 + 0x928))(param_1,param_2,param_1 + 0x6a);
      }
    }
  }
  return;
}



// FUNCTION 142358370 FUN_142358370 body=325 status=ok
// SIG undefined FUN_142358370(void)

void FUN_142358370(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  
  if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x80000) != 0) {
    lVar1 = FUN_14046f570();
    lVar1 = *(longlong *)(lVar1 + 0x158);
    if (((lVar1 != 0) && ((*(uint *)((longlong)param_1 + 0x4b4) & 0x1000000) == 0)) &&
       (*(longlong *)(param_1[0x44] + 0x4d0) != 0)) {
      UAvoidanceManager::UpdateRVO(lVar1,param_1);
      FUN_14234faa0(param_1,lVar1,*(undefined4 *)(lVar1 + 0x38));
    }
    *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfeffffff;
  }
  if (*(char *)((longlong)param_1 + 0x31c) != '\0') {
    (**(code **)(*param_1 + 0x6e0))(param_1,param_2);
    (**(code **)(*param_1 + 0x6e8))(param_1,param_2);
  }
  lVar1 = param_1[0x10e];
  *(undefined1 *)(param_1 + 0x10e) = 1;
  puVar5 = (undefined8 *)param_1[0x10f];
  puVar3 = puVar5 + (longlong)(int)param_1[0x110] * 10;
  if (puVar5 != puVar3) {
    plVar4 = puVar5 + 6;
    do {
      if ((int)plVar4[2] != 0) {
        plVar2 = (longlong *)*plVar4;
        if ((longlong *)*plVar4 == (longlong *)0x0) {
          plVar2 = plVar4 + -4;
        }
        if (plVar2 != (longlong *)0x0) {
          (**(code **)(*plVar2 + 8))();
        }
      }
      (*(code *)*puVar5)();
      puVar5 = puVar5 + 10;
      plVar4 = plVar4 + 10;
    } while (puVar5 != puVar3);
  }
  FUN_14234cb30(param_1 + 0x10f,0);
  *(char *)(param_1 + 0x10e) = (char)lVar1;
  return;
}



// FUNCTION 1423584c0 FUN_1423584c0 body=287 status=ok
// SIG undefined FUN_1423584c0(void)

undefined8 FUN_1423584c0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  
  cVar3 = (**(code **)(*(longlong *)param_1[0x2f] + 0x400))((longlong *)param_1[0x2f],0);
  if ((char)((longlong *)param_1[0x44])[0x25] == '\x03') {
    if (((*(uint *)((longlong)param_1 + 0x4b4) & 0x400) != 0) && (cVar3 == '\0')) {
      return 1;
    }
    cVar4 = (**(code **)(*(longlong *)param_1[0x44] + 0x450))();
    if (cVar4 == '\0') {
      return 0;
    }
  }
  if (cVar3 == '\0') {
    return 1;
  }
  if ((((*(char *)(param_1[0x44] + 0x128) == '\x02') && (param_1[0x23] != 0)) &&
      (iVar5 = FUN_142235230(), iVar5 == 3)) &&
     (lVar1 = *(longlong *)(param_1[0x44] + 0x490), lVar1 != 0)) {
    lVar6 = FUN_1429e18b0();
    if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (lVar1 = *(longlong *)(lVar1 + 0x528), lVar1 != 0)) &&
       ((char)*(uint *)(lVar1 + 0x2c40) < '\0')) {
      *(uint *)(lVar1 + 0x2c40) = *(uint *)(lVar1 + 0x2c40) | 0x200;
    }
  }
  (**(code **)(*param_1 + 0x6f8))(param_1);
  return 0;
}



// FUNCTION 142358600 FUN_142358600 body=389 status=ok
// SIG undefined FUN_142358600(void)

void FUN_142358600(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  char local_res8 [8];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  undefined1 *local_58 [2];
  undefined1 local_48 [32];
  undefined8 local_28;
  undefined4 local_18;
  
  (**(code **)(*param_1 + 0x748))(param_1,0);
  local_res8[0] = '\x01';
  uVar5 = 0;
  if (param_1[0x44] != 0) {
    lVar1 = param_1[0x2f];
    local_28 = 0;
    local_18 = 0;
    local_88 = *(undefined4 *)(lVar1 + 0x220);
    local_84 = *(undefined4 *)(lVar1 + 0x224);
    local_80 = *(undefined4 *)(lVar1 + 0x228);
    local_78 = local_res8;
    local_68 = &local_88;
    uStack_70 = param_1;
    puVar2 = (undefined8 *)FUN_140438ef0(0x20,local_48);
    if (puVar2 != (undefined8 *)0x0) {
      *(undefined4 *)(puVar2 + 1) = (undefined4)local_78;
      *(undefined4 *)((longlong)puVar2 + 0xc) = local_78._4_4_;
      *(undefined4 *)(puVar2 + 2) = (undefined4)uStack_70;
      *(undefined4 *)((longlong)puVar2 + 0x14) = uStack_70._4_4_;
      *puVar2 = &PTR_FUN_143f4d0b0;
      puVar2[3] = local_68;
    }
    local_58[0] = &LAB_1423323b0;
    uVar3 = FUN_14247f500();
    FUN_14247d5a0(uVar3,param_1,local_58);
    if (local_res8[0] == '\0') {
      (**(code **)(*param_1 + 0x748))(param_1,1);
    }
    else {
      FUN_14223c850(param_1[0x44],&local_88,0,0,0);
    }
  }
  if ((char)param_1[0x49] == '\x02') {
    if (local_res8[0] == '\0') goto LAB_14235875a;
    cVar4 = (char)param_1[0x96];
    if (cVar4 == '\x02') {
      cVar4 = '\x01';
    }
  }
  else {
    if (local_res8[0] != '\0') goto LAB_14235875a;
    cVar4 = '\x02';
  }
  (**(code **)(*param_1 + 0x5a0))(param_1,cVar4,0);
LAB_14235875a:
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) & 0xfffbffff;
  if (local_res8[0] == '\0') {
    uVar5 = 0x40000;
  }
  *(uint *)((longlong)param_1 + 0x4b4) = *(uint *)((longlong)param_1 + 0x4b4) | uVar5;
  return;
}



// FUNCTION 142358790 FUN_142358790 body=629 status=ok
// SIG undefined FUN_142358790(void)

void FUN_142358790(longlong *param_1,float *param_2,longlong param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  char cVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float local_78;
  float fStack_74;
  
  uVar2 = *(undefined8 *)param_2;
  fVar3 = param_2[2];
  FUN_14237aec0();
  cVar4 = (**(code **)(*param_1 + 0x560))(param_1);
  if (cVar4 != '\0') {
    if (param_2[2] <= 0.0) {
      if (((param_2[2] < 0.0) &&
          (*(float *)((longlong)param_1 + 0x414) <= 1.9 &&
           *(float *)((longlong)param_1 + 0x414) != 1.9)) && ((*(byte *)(param_1 + 0x82) & 1) != 0))
      {
        param_2[2] = 0.0;
      }
    }
    else if (((*(float *)(param_3 + 0x34) <= *(float *)((longlong)param_1 + 0x244) &&
               *(float *)((longlong)param_1 + 0x244) != *(float *)(param_3 + 0x34)) &&
             (cVar4 = (**(code **)(*param_1 + 0x7f0))(param_1,param_3), cVar4 == '\0')) ||
            (fVar6 = *(float *)(param_3 + 0x34), fVar6 <= 0.0001)) {
      param_2[2] = 0.0;
    }
    else {
      fVar1 = param_2[2];
      fVar9 = 1.0 - *(float *)(param_3 + 0xc);
      local_78 = (float)uVar2;
      fStack_74 = (float)((ulonglong)uVar2 >> 0x20);
      fVar5 = *param_2 * *param_2 + param_2[1] * param_2[1] + fVar1 * fVar1;
      if (fVar5 == 1.0) {
        fVar7 = param_2[2];
      }
      else {
        fVar7 = DAT_1468b5d98;
        if (1e-08 <= fVar5) {
          auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
          fVar7 = auVar8._0_4_;
          fVar7 = fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7);
          fVar7 = fVar1 * (fVar7 + fVar7 * (0.5 - fVar5 * 0.5 * fVar7 * fVar7));
        }
      }
      *(ulonglong *)param_2 = CONCAT44(fStack_74 * fVar9,local_78 * fVar9);
      param_2[2] = ((fVar7 * SQRT(local_78 * local_78 + fStack_74 * fStack_74 + fVar3 * fVar3)) /
                   fVar6) * fVar9;
      fVar3 = param_2[2];
      if (*(float *)((longlong)param_1 + 0x234) < fVar3) {
        fVar6 = *(float *)((longlong)param_1 + 0x234) / fVar3;
        *param_2 = fVar6 * *param_2;
        param_2[2] = fVar3 * fVar6;
        param_2[1] = fVar6 * param_2[1];
      }
    }
  }
  return;
}



// FUNCTION 142358a10 FUN_142358a10 body=2328 status=ok
// SIG undefined FUN_142358a10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142358a10(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  char cVar9;
  char cVar10;
  undefined4 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong lVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  undefined1 auStack_298 [32];
  undefined8 *local_278;
  undefined1 **local_270;
  undefined8 *local_268;
  undefined1 **local_260;
  undefined *local_258;
  undefined8 *local_250;
  undefined8 local_248;
  float local_240;
  float local_238;
  float fStack_234;
  float local_230;
  float local_228 [4];
  undefined8 local_218;
  float local_210;
  undefined1 local_208 [4];
  float local_204 [3];
  undefined4 local_1f8;
  float local_1f4;
  float local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  float *local_1d8;
  float *pfStack_1d0;
  undefined4 local_1c8;
  float local_1c4;
  float local_1c0;
  longlong local_1b8 [2];
  longlong local_1a8;
  longlong lStack_1a0;
  byte local_198 [12];
  float local_18c;
  undefined1 *local_108 [2];
  undefined1 local_f8 [32];
  undefined8 local_d8;
  undefined4 local_c8;
  longlong local_c0;
  longlong local_a0;
  ulonglong local_88;
  
  local_88 = DAT_1468387a8 ^ (ulonglong)auStack_298;
  cVar9 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar9 == '\0') {
    return;
  }
  lVar14 = param_1[0x44];
  plVar1 = *(longlong **)(lVar14 + 0x10);
  local_1b8[0] = plVar1[0x1f];
  if (local_1b8[0] == 0) {
    (**(code **)(*plVar1 + 0x368))(plVar1);
    local_1b8[0] = plVar1[0x1f];
    lVar14 = param_1[0x44];
  }
  lVar2 = *(longlong *)(lVar14 + 0x4d0);
  fVar25 = *(float *)(lVar2 + 0x710);
  local_204[0] = *(float *)(*(longlong *)(local_1b8[0] + 0x4d0) + 0x710);
  if (fVar25 == local_204[0]) {
    if (param_2 == '\0') {
      *(uint *)(lVar14 + 0x56c) = *(uint *)(lVar14 + 0x56c) & 0xfffffffe;
    }
    local_d8 = 0;
    local_c8 = 0;
    puVar12 = (undefined8 *)FUN_140438ef0(0x10,local_f8);
    if (puVar12 != (undefined8 *)0x0) {
      puVar12[1] = param_1;
      *puVar12 = &PTR_FUN_143f77b70;
    }
    local_108[0] = &LAB_1423325f0;
    uVar13 = FUN_14247f500();
    FUN_14247d5a0(uVar13,param_1,local_108);
    return;
  }
  local_204[0] = local_204[0] - fVar25;
  auVar19._0_4_ = *(uint *)(lVar2 + 0x230) & _DAT_146af0070;
  auVar19._4_4_ = *(uint *)(lVar2 + 0x234) & uRam0000000146af0074;
  auVar19._8_4_ = *(uint *)(lVar2 + 0x238) & uRam0000000146af0078;
  auVar19._12_4_ = *(uint *)(lVar2 + 0x23c) & uRam0000000146af007c;
  lVar14 = param_1[0x2f];
  auVar20._4_4_ = auVar19._8_4_;
  auVar20._0_4_ = auVar19._4_4_;
  auVar20._8_4_ = auVar19._0_4_;
  auVar20._12_4_ = auVar19._12_4_;
  auVar20 = minps(auVar19,auVar20);
  auVar22._4_4_ = auVar19._0_4_;
  auVar22._0_4_ = auVar19._8_4_;
  auVar22._8_4_ = auVar19._4_4_;
  auVar22._12_4_ = auVar19._12_4_;
  auVar20 = minps(auVar20,auVar22);
  local_228[0] = auVar20._0_4_ * local_204[0];
  local_238 = *(float *)(lVar14 + 0x220);
  fStack_234 = *(float *)(lVar14 + 0x224);
  local_230 = *(float *)(lVar14 + 0x228);
  if (param_2 == '\0') {
    uVar13 = FUN_14046f570(param_1);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x38) < DAT_146af02e8) &&
       (_Init_thread_header(&DAT_146af02e8), DAT_146af02e8 == -1)) {
      FName::FName(&DAT_146af02e0,"CrouchTrace",1);
      _Init_thread_footer(&DAT_146af02e8);
    }
    local_278 = (undefined8 *)param_1[0x44];
    FUN_1422ffb20(local_108,DAT_146af02e0,local_208,0);
    FUN_1426d3dd0(&local_1e8);
    FUN_1426ea8d0(&local_1e8,2);
    (**(code **)(*param_1 + 0x478))(param_1,local_108,&local_1e8);
    lVar14 = *(longlong *)(param_1[0x44] + 0x4d0);
    uVar15 = *(uint *)(lVar14 + 0x230) & _DAT_146af0070;
    uVar16 = *(uint *)(lVar14 + 0x234) & uRam0000000146af0074;
    uVar17 = *(uint *)(lVar14 + 0x238) & uRam0000000146af0078;
    uVar18 = *(uint *)(lVar14 + 0x23c) & uRam0000000146af007c;
    auVar21._4_4_ = uVar16;
    auVar21._0_4_ = uVar15;
    auVar21._8_4_ = uVar17;
    auVar21._12_4_ = uVar18;
    auVar3._4_4_ = uVar17;
    auVar3._0_4_ = uVar16;
    auVar3._8_4_ = uVar15;
    auVar3._12_4_ = uVar18;
    auVar22 = minps(auVar21,auVar3);
    auVar6._4_4_ = uVar15;
    auVar6._0_4_ = uVar17;
    auVar6._8_4_ = uVar16;
    auVar6._12_4_ = uVar18;
    auVar22 = minps(auVar22,auVar6);
    local_1f4 = *(float *)(lVar14 + 0x714) * auVar22._0_4_;
    local_1f8 = 3;
    if (local_1f4 <= 0.0009999999) {
      local_1f4 = 0.0009999999;
    }
    local_1f0 = *(float *)(lVar14 + 0x710) * auVar22._0_4_ - (-0.0009999999 - local_228[0]);
    if (local_1f0 <= 0.0009999999) {
      local_1f0 = 0.0009999999;
    }
    uVar11 = (**(code **)(*(longlong *)param_1[0x2f] + 0x4f8))();
    local_260 = (undefined1 **)&DAT_146aefe88;
    local_268 = &local_1e8;
    local_270 = local_108;
    local_278 = (undefined8 *)CONCAT44(local_278._4_4_,uVar11);
    if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x1000) == 0) {
      cVar9 = FUN_14230f990(uVar13,&local_1f8,&local_238);
      if (cVar9 == '\0') goto LAB_142359000;
      if (local_228[0] <= 0.0) goto LAB_142359162;
      lVar14 = param_1[0x44];
      lVar2 = *(longlong *)(lVar14 + 0x4d0);
      uVar15 = *(uint *)(lVar2 + 0x230) & _DAT_146af0070;
      uVar16 = *(uint *)(lVar2 + 0x234) & uRam0000000146af0074;
      uVar17 = *(uint *)(lVar2 + 0x238) & uRam0000000146af0078;
      uVar18 = *(uint *)(lVar2 + 0x23c) & uRam0000000146af007c;
      auVar23._4_4_ = uVar16;
      auVar23._0_4_ = uVar15;
      auVar23._8_4_ = uVar17;
      auVar23._12_4_ = uVar18;
      auVar4._4_4_ = uVar17;
      auVar4._0_4_ = uVar16;
      auVar4._8_4_ = uVar15;
      auVar4._12_4_ = uVar18;
      auVar20 = minps(auVar23,auVar4);
      auVar7._4_4_ = uVar15;
      auVar7._0_4_ = uVar17;
      auVar7._8_4_ = uVar16;
      auVar7._12_4_ = uVar18;
      auVar20 = minps(auVar20,auVar7);
      fVar26 = auVar20._0_4_ * *(float *)(lVar2 + 0x710);
      fVar25 = fVar26 - auVar20._0_4_ * *(float *)(lVar2 + 0x714);
      fVar26 = fVar26 - fVar25;
      _guard_xfg_dispatch_icall_nop(local_198,0,0x90);
      local_18c = 1.0;
      lVar14 = *(longlong *)(lVar14 + 0x4d0);
      uVar15 = *(uint *)(lVar14 + 0x230) & _DAT_146af0070;
      uVar16 = *(uint *)(lVar14 + 0x234) & uRam0000000146af0074;
      uVar17 = *(uint *)(lVar14 + 0x238) & uRam0000000146af0078;
      uVar18 = *(uint *)(lVar14 + 0x23c) & uRam0000000146af007c;
      auVar24._4_4_ = uVar16;
      auVar24._0_4_ = uVar15;
      auVar24._8_4_ = uVar17;
      auVar24._12_4_ = uVar18;
      auVar5._4_4_ = uVar17;
      auVar5._0_4_ = uVar16;
      auVar5._8_4_ = uVar15;
      auVar5._12_4_ = uVar18;
      auVar20 = minps(auVar24,auVar5);
      auVar8._4_4_ = uVar15;
      auVar8._0_4_ = uVar17;
      auVar8._8_4_ = uVar16;
      auVar8._12_4_ = uVar18;
      auVar20 = minps(auVar20,auVar8);
      local_1c4 = auVar20._0_4_ * *(float *)(lVar14 + 0x714);
      local_1c8 = 3;
      local_1c0 = *(float *)(lVar14 + 0x710) * auVar20._0_4_ - fVar25;
      if (local_1c4 <= 0.0009999999) {
        local_1c4 = 0.0009999999;
      }
      if (local_1c0 <= 0.0009999999) {
        local_1c0 = 0.0009999999;
      }
      local_248 = (undefined1 *)CONCAT44(fStack_234,local_238);
      local_210 = local_230 - fVar26;
      local_218 = local_248;
      local_248 = (undefined1 *)CONCAT44(fStack_234,local_238);
      local_240 = local_230;
      if (0.0001 < local_1c4) {
        local_250 = &DAT_146aefe88;
        local_258 = &DAT_146aefe68;
        local_260 = local_108;
        local_270 = (undefined1 **)&local_218;
        local_268 = (undefined8 *)CONCAT44(local_268._4_4_,uVar11);
        local_278 = &local_248;
        FUN_1423103c0(uVar13,&local_1c8,&DAT_1464aa810,local_198);
      }
      else {
        local_260 = (undefined1 **)&DAT_146aefe88;
        local_268 = (undefined8 *)&DAT_146aefe68;
        local_270 = local_108;
        local_278 = (undefined8 *)CONCAT44(local_278._4_4_,uVar11);
        FUN_142319320(uVar13,local_198,&local_248,&local_218);
      }
      if ((local_198[0] & 2) == 0) {
        local_268 = &local_1e8;
        local_248 = (undefined1 *)CONCAT44(fStack_234,local_238);
        local_260 = (undefined1 **)&DAT_146aefe88;
        local_270 = local_108;
        local_278 = (undefined8 *)CONCAT44(local_278._4_4_,uVar11);
        local_240 = (local_230 - (local_18c * fVar26 + local_1c0)) + local_1f0 + 0.951;
        cVar9 = FUN_14230f990(uVar13,&local_1f8,&local_248,&DAT_1464aa810);
        if (cVar9 == '\0') {
          plVar1 = (longlong *)param_1[0x2f];
          local_268 = (undefined8 *)CONCAT71(local_268._1_7_,1);
          local_270 = (undefined1 **)((ulonglong)local_270 & 0xffffffff00000000);
          local_278 = (undefined8 *)0x0;
          local_1a8 = plVar1[0x42];
          lStack_1a0 = plVar1[0x43];
          local_210 = local_240 - local_230;
          local_218 = (undefined1 *)
                      CONCAT44(local_248._4_4_ - fStack_234,(float)local_248 - local_238);
          (**(code **)(*plVar1 + 0x490))(plVar1,&local_218,&local_1a8,0);
          goto LAB_142359000;
        }
      }
    }
    else {
      local_248 = (undefined1 *)CONCAT44(fStack_234,local_238);
      local_240 = (local_1f0 - fVar25 * auVar20._0_4_) + local_230;
      cVar9 = FUN_14230f990(uVar13,&local_1f8,&local_248,&DAT_1464aa810);
      if (cVar9 != '\0') {
        cVar10 = (**(code **)(*param_1 + 0x560))(param_1);
        if (((cVar10 != '\0') && ((*(byte *)(param_1 + 0x82) & 1) != 0)) &&
           (0.0009999999 < *(float *)((longlong)param_1 + 0x414))) {
          local_260 = (undefined1 **)&DAT_146aefe88;
          local_268 = &local_1e8;
          local_270 = local_108;
          local_240 = local_240 - (*(float *)((longlong)param_1 + 0x414) - 0.0009999999);
          local_278 = (undefined8 *)CONCAT44(local_278._4_4_,uVar11);
          cVar9 = FUN_14230f990(uVar13,&local_1f8,&local_248,&DAT_1464aa810);
        }
        if (cVar9 != '\0') goto LAB_14235916a;
      }
      cVar9 = '\0';
      plVar1 = (longlong *)param_1[0x2f];
      local_268 = (undefined8 *)CONCAT71(local_268._1_7_,1);
      local_270 = (undefined1 **)((ulonglong)local_270 & 0xffffffff00000000);
      local_278 = (undefined8 *)0x0;
      local_1a8 = plVar1[0x42];
      lStack_1a0 = plVar1[0x43];
      local_210 = local_240 - local_230;
      local_218 = (undefined1 *)CONCAT44(local_248._4_4_ - fStack_234,(float)local_248 - local_238);
      (**(code **)(*plVar1 + 0x490))(plVar1,&local_218,&local_1a8,0);
      *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x100;
LAB_142359162:
      if (cVar9 == '\0') {
LAB_142359000:
        *(uint *)(param_1[0x44] + 0x56c) = *(uint *)(param_1[0x44] + 0x56c) & 0xfffffffe;
        if (local_a0 != 0) {
          FMemory::Free();
        }
        if (local_c0 != 0) {
          FMemory::Free();
        }
        goto LAB_14235919f;
      }
    }
LAB_14235916a:
    if (local_a0 != 0) {
      FMemory::Free();
    }
    if (local_c0 != 0) {
      FMemory::Free();
    }
  }
  else {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x200;
LAB_14235919f:
    fVar25 = local_228[0];
    uStack_1e0 = local_1b8;
    local_1d8 = local_204;
    pfStack_1d0 = local_228;
    local_d8 = 0;
    local_c8 = 0;
    local_1e8 = param_1;
    puVar12 = (undefined8 *)FUN_140438ef0(0x28,local_f8);
    if (puVar12 != (undefined8 *)0x0) {
      *puVar12 = &PTR_FUN_143ff7760;
      *(undefined4 *)(puVar12 + 1) = (undefined4)local_1e8;
      *(undefined4 *)((longlong)puVar12 + 0xc) = local_1e8._4_4_;
      *(undefined4 *)(puVar12 + 2) = (undefined4)uStack_1e0;
      *(undefined4 *)((longlong)puVar12 + 0x14) = uStack_1e0._4_4_;
      puVar12[3] = local_1d8;
      puVar12[4] = pfStack_1d0;
    }
    local_108[0] = &LAB_142332860;
    uVar13 = FUN_14247f500();
    FUN_14247d5a0(uVar13,param_1,local_108);
    if (((param_2 != '\0') && (*(char *)(param_1[0x44] + 0x128) == '\x01')) &&
       ((lVar14 = FUN_14233f840(param_1), lVar14 != 0 && (*(float *)(lVar14 + 0xb8) != 0.0)))) {
      *(float *)(lVar14 + 0xb8) = fVar25 + *(float *)(lVar14 + 0xb8);
      *(undefined8 *)(lVar14 + 0xa4) = *(undefined8 *)(lVar14 + 0xb0);
      *(undefined4 *)(lVar14 + 0xac) = *(undefined4 *)(lVar14 + 0xb8);
    }
  }
  return;
}



// FUNCTION 142359330 UnbindDynamicDelegates body=313 status=ok
// SIG undefined UnbindDynamicDelegates(void)

void UComponentDelegateBinding::UnbindDynamicDelegates(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  
  iVar11 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar10 = 0;
    do {
      lVar7 = *(longlong *)(param_1 + 0x28) + lVar10;
      plVar3 = (longlong *)FUN_14233af10(param_2,lVar7,0);
      if (plVar3 != (longlong *)0x0) {
        lVar1 = *plVar3;
        lVar2 = plVar3[1];
        lVar7 = *(longlong *)(lVar7 + 0x10);
        for (lVar9 = lVar1; lVar9 != (longlong)(int)lVar2 * 0x10 + lVar1; lVar9 = lVar9 + 0x10) {
          if (((*(longlong *)(lVar9 + 8) == lVar7) && (param_2 != 0)) &&
             (lVar4 = FWeakObjectPtr::GetEvenIfUnreachable(lVar9), param_2 == lVar4)) {
            iVar8 = (int)(lVar9 - lVar1 >> 4);
            if (iVar8 != -1) {
              iVar6 = (int)plVar3[1];
              iVar5 = (iVar6 - iVar8) + -1;
              if (0 < iVar5) {
                iVar5 = 1;
              }
              if (iVar5 != 0) {
                ::_guard_xfg_dispatch_icall_nop
                          ((void *)((longlong)iVar8 * 0x10 + *plVar3),
                           (void *)((longlong)(iVar6 - iVar5) * 0x10 + *plVar3),(longlong)iVar5 << 4
                          );
                iVar6 = (int)plVar3[1];
              }
              *(int *)(plVar3 + 1) = iVar6 + -1;
            }
            break;
          }
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::CompactInvocationList(plVar3);
      }
      iVar11 = iVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (iVar11 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142359470 UnbindDynamicDelegatesForProperty body=151 status=ok
// SIG undefined UnbindDynamicDelegatesForProperty(void)

void UComponentDelegateBinding::UnbindDynamicDelegatesForProperty
               (longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    do {
      lVar1 = *(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18;
      lVar2 = FindField<UObjectProperty>
                        (*(undefined8 *)(param_2 + 0x10),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar3 * 0x18));
      if (lVar2 == param_3) {
        lVar2 = FUN_14233af10(param_2,lVar1,lVar2);
        if (lVar2 == 0) {
          return;
        }
        TMulticastScriptDelegate<FWeakObjectPtr>::Remove
                  (lVar2,param_2,*(undefined8 *)(lVar1 + 0x10));
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  return;
}



// FUNCTION 142359510 FUN_142359510 body=8 status=ok
// SIG undefined FUN_142359510(void)

void FUN_142359510(longlong param_1)

{
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 200) & 0xef;
  return;
}



// FUNCTION 142359520 UnpackNetworkMovementMode body=84 status=ok
// SIG undefined UnpackNetworkMovementMode(void)

void UCharacterMovementComponent::UnpackNetworkMovementMode
               (undefined8 param_1,byte param_2,byte *param_3,byte *param_4,char *param_5)

{
  byte bVar1;
  
  if (param_2 < DAT_146aefe41) {
    bVar1 = (byte)DAT_146af0138 & 0x1f;
    *param_3 = DAT_146aefe42 & param_2;
    *param_4 = 0 >> bVar1;
    *param_5 = (param_2 >> bVar1 != 0) + '\x01';
    return;
  }
  param_2 = param_2 - DAT_146aefe41;
  *param_3 = 6;
  *param_4 = param_2;
  *param_5 = '\x01';
  return;
}



// FUNCTION 142359580 FUN_142359580 body=81 status=ok
// SIG undefined FUN_142359580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_142359580(longlong *param_1)

{
  if ((*(byte *)(param_1 + 0x17) & 1) != 0) {
    if ((char)param_1[0x19] < '\0') {
      (**(code **)(*param_1 + 0x328))(param_1,0);
      *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) & 0x7f;
      _DAT_146af0210 = 0;
    }
    FUN_14233aad0(param_1);
    param_1[0x24] = 0;
  }
  return;
}



// FUNCTION 1423595e0 FUN_1423595e0 body=4429 status=ok
// SIG undefined FUN_1423595e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1423595e0(longlong *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  char cVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  longlong lVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  uint uVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
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
  float fVar41;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  float local_2b8;
  float fStack_2b4;
  float local_2b0;
  undefined8 local_2a8;
  float local_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  float local_280;
  float local_278;
  float fStack_274;
  float local_270;
  float local_268;
  float local_264;
  float local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  float local_248;
  float fStack_244;
  float fStack_240;
  undefined4 uStack_23c;
  float local_238;
  float fStack_234;
  float fStack_230;
  undefined4 uStack_22c;
  float local_228;
  float fStack_224;
  float fStack_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
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
  float local_188;
  float fStack_184;
  float fStack_180;
  float local_178;
  float fStack_174;
  float fStack_170;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined1 local_158 [12];
  undefined4 local_14c;
  
  cVar11 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar11 == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_1[0x44] + 0x4d8);
  cVar11 = FUN_142314560(plVar1);
  if (cVar11 == '\0') {
    return;
  }
  lVar17 = 0;
  if (plVar1 != (longlong *)0x0) {
    iVar14 = *(int *)((longlong)plVar1 + 0xc);
    lVar19 = lVar17;
    if (iVar14 < (int)DAT_1469e91c4) {
      uVar18 = iVar14 >> 0x1f & 0xffff;
      uVar12 = iVar14 + uVar18;
      lVar19 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
               (longlong)(int)((uVar12 & 0xffff) - uVar18) * 0x18;
    }
    if (((*(uint *)(lVar19 + 8) >> 0x1d & 1) == 0) && (plVar1[0x23] != 0)) {
      iVar14 = *(int *)(plVar1[0x23] + 0xc);
      if (iVar14 < (int)DAT_1469e91c4) {
        uVar18 = iVar14 >> 0x1f & 0xffff;
        uVar12 = iVar14 + uVar18;
        lVar17 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar12 >> 0x10) * 8) +
                 (longlong)(int)((uVar12 & 0xffff) - uVar18) * 0x18;
      }
      if ((*(uint *)(lVar17 + 8) >> 0x1d & 1) == 0) {
        uVar12 = *(uint *)(param_1 + 0x31);
        *(uint *)(param_1 + 0x31) = uVar12 | 1;
        local_258 = _DAT_1464aa810;
        uStack_250 = _DAT_1464aa818;
        local_280 = DAT_1468b5d98;
        local_288 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
        uVar13 = FUN_142311f90(plVar1,*(undefined8 *)(param_1[0x44] + 0x4e0),&local_268,&local_1c8);
        if ((char)uVar13 != '\0') {
          auVar40._4_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)((longlong)param_1 + 0x264) - fStack_1c4) &
                                      uRam0000000146af0074));
          auVar40._0_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x4c) - local_1c8) &
                                      _DAT_146af0070));
          auVar40._8_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)(param_1 + 0x4d) - fStack_1c0) &
                                      uRam0000000146af0078));
          auVar40._12_4_ =
               -(uint)(1e-08 < (float)((uint)(*(float *)((longlong)param_1 + 0x26c) - fStack_1bc) &
                                      uRam0000000146af007c));
          iVar14 = movmskps(uVar13,auVar40);
          if ((iVar14 == 0) ||
             (auVar25._4_4_ =
                   -(uint)(1e-08 < (float)((uint)(fStack_1c4 + *(float *)((longlong)param_1 + 0x264)
                                                 ) & uRam0000000146af0074)),
             auVar25._0_4_ =
                  -(uint)(1e-08 < (float)((uint)(local_1c8 + *(float *)(param_1 + 0x4c)) &
                                         _DAT_146af0070)),
             auVar25._8_4_ =
                  -(uint)(1e-08 < (float)((uint)(fStack_1c0 + *(float *)(param_1 + 0x4d)) &
                                         uRam0000000146af0078)),
             auVar25._12_4_ =
                  -(uint)(1e-08 < (float)((uint)(fStack_1bc + *(float *)((longlong)param_1 + 0x26c))
                                         & uRam0000000146af007c)), iVar14 = movmskps(iVar14,auVar25)
             , iVar14 == 0)) {
            bVar6 = false;
            if ((local_268 == *(float *)((longlong)param_1 + 0x24c)) &&
               ((local_264 == *(float *)(param_1 + 0x4a) &&
                (local_260 == *(float *)((longlong)param_1 + 0x254))))) goto LAB_14235a6e7;
            fVar34 = *(float *)((longlong)param_1 + 0x264);
            fVar42 = *(float *)(param_1 + 0x4d);
            fVar44 = *(float *)((longlong)param_1 + 0x26c);
          }
          else {
            bVar6 = true;
            fVar34 = *(float *)((longlong)param_1 + 0x264);
            fVar27 = -*(float *)(param_1 + 0x4c);
            fVar42 = *(float *)(param_1 + 0x4d);
            fVar44 = *(float *)((longlong)param_1 + 0x26c);
            fVar22 = -fVar34;
            fVar23 = -fVar42;
            local_298 = CONCAT44(fVar34,fVar27) ^ 0x8000000000000000;
            uStack_290 = CONCAT44(fVar44,fVar23);
            local_258 = CONCAT44(fVar23 * local_1c8 * fRam0000000146af0164 + fStack_1bc * fVar22 +
                                 fVar44 * fStack_1c4 * fRam0000000146af0154 +
                                 fVar27 * fStack_1c0 * fRam0000000146af0144,
                                 fVar44 * local_1c8 * _DAT_146af0160 + fStack_1bc * fVar27 +
                                 fVar23 * fStack_1c4 * _DAT_146af0150 +
                                 fVar22 * fStack_1c0 * _DAT_146af0140);
            uStack_250 = CONCAT44(fVar27 * local_1c8 * fRam0000000146af016c + fStack_1bc * fVar44 +
                                  fVar22 * fStack_1c4 * fRam0000000146af015c +
                                  fVar23 * fStack_1c0 * fRam0000000146af014c,
                                  fVar22 * local_1c8 * fRam0000000146af0168 + fStack_1bc * fVar23 +
                                  fVar27 * fStack_1c4 * fRam0000000146af0158 +
                                  fVar44 * fStack_1c0 * fRam0000000146af0148);
          }
          fVar22 = *(float *)(param_1 + 0x4c);
          fVar27 = fVar42 + fVar42;
          fVar23 = fVar34 + fVar34;
          fVar37 = (fVar22 + fVar22) * fVar22;
          uStack_23c = 0;
          fStack_230 = fVar44 * (fVar22 + fVar22);
          uStack_22c = 0;
          uStack_21c = 0;
          uStack_20c = 0x3f800000;
          local_248 = 1.0 - (fVar42 * fVar27 + fVar34 * fVar23);
          local_238 = fVar23 * fVar22 - fVar44 * fVar27;
          fStack_244 = fVar44 * fVar27 + fVar23 * fVar22;
          local_228 = fVar44 * fVar23 + fVar27 * fVar22;
          fStack_224 = fVar34 * fVar27 - fStack_230;
          fStack_230 = fStack_230 + fVar34 * fVar27;
          fStack_240 = fVar27 * fVar22 - fVar44 * fVar23;
          local_218 = *(undefined4 *)((longlong)param_1 + 0x24c);
          fStack_234 = 1.0 - (fVar42 * fVar27 + fVar37);
          uStack_214 = (undefined4)param_1[0x4a];
          fStack_220 = 1.0 - (fVar34 * fVar23 + fVar37);
          uStack_210 = *(undefined4 *)((longlong)param_1 + 0x254);
          fVar44 = fStack_1c4 * 2.0;
          fVar34 = fStack_1c0 * 2.0;
          fVar42 = local_1c8 * 2.0 * local_1c8;
          fStack_1f0 = local_1c8 * 2.0 * fStack_1bc;
          fStack_1fc = 0.0;
          fStack_1ec = 0.0;
          fStack_1dc = 0.0;
          fStack_1cc = 1.0;
          local_208 = 1.0 - (fVar34 * fStack_1c0 + fVar44 * fStack_1c4);
          local_1f8 = fVar44 * local_1c8 - fVar34 * fStack_1bc;
          fStack_204 = fVar34 * fStack_1bc + fVar44 * local_1c8;
          local_1e8 = fVar44 * fStack_1bc + fVar34 * local_1c8;
          fStack_1e4 = fVar34 * fStack_1c4 - fStack_1f0;
          fStack_200 = fVar34 * local_1c8 - fVar44 * fStack_1bc;
          fStack_1f0 = fStack_1f0 + fVar34 * fStack_1c4;
          local_1d8 = local_268;
          fStack_1f4 = 1.0 - (fVar34 * fStack_1c0 + fVar42);
          fStack_1e0 = 1.0 - (fVar44 * fStack_1c4 + fVar42);
          fStack_1d4 = local_264;
          fStack_1d0 = local_260;
          cVar11 = FUN_1422358f0(param_1[0x44]);
          fVar10 = fStack_1dc;
          fVar9 = fStack_1e0;
          fVar8 = fStack_1e4;
          fVar7 = local_1e8;
          fVar5 = fStack_1ec;
          fVar37 = fStack_1f0;
          fVar27 = fStack_1f4;
          fVar23 = local_1f8;
          fVar22 = fStack_1fc;
          fVar44 = fStack_200;
          fVar42 = fStack_204;
          fVar34 = local_208;
          if (cVar11 == '\0') {
            lVar17 = param_1[0x2f];
            fVar34 = *(float *)(lVar17 + 0x210);
            fVar42 = *(float *)(lVar17 + 0x214);
            local_298 = *(ulonglong *)(lVar17 + 0x210);
            fVar44 = *(float *)(lVar17 + 0x218);
            fVar22 = *(float *)(lVar17 + 0x21c);
            uStack_290 = *(undefined8 *)(lVar17 + 0x218);
            if ((bVar6) && ((*(uint *)((longlong)param_1 + 0x4b4) & 0x2000) == 0)) {
              fVar23 = *(float *)(lVar17 + 0x210);
              fVar27 = *(float *)(lVar17 + 0x214);
              local_2c8 = *(ulonglong *)(lVar17 + 0x210);
              fVar37 = *(float *)(lVar17 + 0x218);
              fVar5 = *(float *)(lVar17 + 0x21c);
              uStack_2c0 = *(undefined8 *)(lVar17 + 0x218);
              local_1a8 = fVar22 * (float)local_258 * _DAT_146af0160 + uStack_250._4_4_ * fVar34 +
                          fVar44 * local_258._4_4_ * _DAT_146af0150 +
                          fVar42 * (float)uStack_250 * _DAT_146af0140;
              fStack_1a4 = fVar44 * (float)local_258 * fRam0000000146af0164 +
                           uStack_250._4_4_ * fVar42 +
                           fVar22 * local_258._4_4_ * fRam0000000146af0154 +
                           fVar34 * (float)uStack_250 * fRam0000000146af0144;
              fStack_1a0 = fVar42 * (float)local_258 * fRam0000000146af0168 +
                           uStack_250._4_4_ * fVar44 +
                           fVar34 * local_258._4_4_ * fRam0000000146af0158 +
                           fVar22 * (float)uStack_250 * fRam0000000146af0148;
              fStack_19c = fVar34 * (float)local_258 * fRam0000000146af016c +
                           uStack_250._4_4_ * fVar22 +
                           fVar42 * local_258._4_4_ * fRam0000000146af015c +
                           fVar44 * (float)uStack_250 * fRam0000000146af014c;
              FRotator::FRotator(&local_2b8,&local_1a8);
              local_2a0 = local_2b0;
              uVar13 = (**(code **)(*(longlong *)param_1[0x44] + 0x7b0))
                                 ((longlong *)param_1[0x44],&local_2a8);
              lVar17 = param_1[0x2f];
              fVar34 = *(float *)(lVar17 + 0x210);
              fVar42 = *(float *)(lVar17 + 0x214);
              local_298 = *(ulonglong *)(lVar17 + 0x210);
              fVar44 = *(float *)(lVar17 + 0x218);
              fVar22 = *(float *)(lVar17 + 0x21c);
              uStack_290 = *(undefined8 *)(lVar17 + 0x218);
              auVar2._4_4_ = -(uint)(1e-06 < (float)((uint)(fVar27 - fVar42) & uRam0000000146af0074)
                                    );
              auVar2._0_4_ = -(uint)(1e-06 < (float)((uint)(fVar23 - fVar34) & _DAT_146af0070));
              auVar2._8_4_ = -(uint)(1e-06 < (float)((uint)(fVar37 - fVar44) & uRam0000000146af0078)
                                    );
              auVar2._12_4_ =
                   -(uint)(1e-06 < (float)((uint)(fVar5 - fVar22) & uRam0000000146af007c));
              iVar14 = movmskps(uVar13,auVar2);
              if (((iVar14 == 0) ||
                  (auVar26._4_4_ =
                        -(uint)(1e-06 < (float)((uint)(fVar42 + fVar27) & uRam0000000146af0074)),
                  auVar26._0_4_ = -(uint)(1e-06 < (float)((uint)(fVar34 + fVar23) & _DAT_146af0070))
                  , auVar26._8_4_ =
                         -(uint)(1e-06 < (float)((uint)(fVar44 + fVar37) & uRam0000000146af0078)),
                  auVar26._12_4_ =
                       -(uint)(1e-06 < (float)((uint)(fVar22 + fVar5) & uRam0000000146af007c)),
                  iVar14 = movmskps(iVar14,auVar26), iVar14 == 0)) &&
                 (((*(uint *)(param_1 + 0x60) & 2) != 0 ||
                  (((*(uint *)(param_1 + 0x60) & 1) != 0 &&
                   (*(longlong *)(param_1[0x44] + 0x490) != 0)))))) {
                local_2b8 = 0.0;
                local_2b0 = 0.0;
                uVar16 = FUN_14247f500();
                FUN_14247ea90(uVar16);
                lVar17 = *param_1;
                uVar16 = FRotator::Quaternion(&local_2b8,&local_1b8);
                (**(code **)(lVar17 + 0x488))(param_1,&DAT_1468b5d90,uVar16,0,0,0);
                lVar17 = param_1[0x2f];
                fVar34 = *(float *)(lVar17 + 0x210);
                fVar42 = *(float *)(lVar17 + 0x214);
                local_298 = *(ulonglong *)(lVar17 + 0x210);
                fVar44 = *(float *)(lVar17 + 0x218);
                fVar22 = *(float *)(lVar17 + 0x21c);
                uStack_290 = *(undefined8 *)(lVar17 + 0x218);
              }
              if (*(longlong *)(param_1[0x44] + 0x490) != 0) {
                fVar27 = -(float)local_2c8;
                fVar23 = -local_2c8._4_4_;
                uStack_2c0._0_4_ = -(float)uStack_2c0;
                local_2c8 = CONCAT44(local_2c8._4_4_,fVar27) ^ 0x8000000000000000;
                local_1b8 = uStack_2c0._4_4_ * fVar34 * _DAT_146af0160 + fVar22 * fVar27 +
                            (float)uStack_2c0 * fVar42 * _DAT_146af0150 +
                            fVar23 * fVar44 * _DAT_146af0140;
                fStack_1b4 = (float)uStack_2c0 * fVar34 * fRam0000000146af0164 + fVar22 * fVar23 +
                             uStack_2c0._4_4_ * fVar42 * fRam0000000146af0154 +
                             fVar27 * fVar44 * fRam0000000146af0144;
                fStack_1b0 = fVar23 * fVar34 * fRam0000000146af0168 + fVar22 * (float)uStack_2c0 +
                             fVar27 * fVar42 * fRam0000000146af0158 +
                             uStack_2c0._4_4_ * fVar44 * fRam0000000146af0148;
                fStack_1ac = fVar27 * fVar34 * fRam0000000146af016c + fVar22 * uStack_2c0._4_4_ +
                             fVar23 * fVar42 * fRam0000000146af015c +
                             (float)uStack_2c0 * fVar44 * fRam0000000146af014c;
                FQuat::Rotator(&local_298,&local_2a8);
                lVar17 = *param_1;
                uVar16 = FQuat::Rotator(&local_1b8,&local_2c8);
                (**(code **)(lVar17 + 0x5f8))(param_1,&local_2a8,uVar16);
                lVar17 = param_1[0x2f];
                local_298 = *(undefined8 *)(lVar17 + 0x210);
                uStack_290 = *(undefined8 *)(lVar17 + 0x218);
              }
            }
            fVar34 = *(float *)(lVar17 + 0x220);
            fVar42 = *(float *)(lVar17 + 0x224);
            lVar19 = *(longlong *)(param_1[0x44] + 0x4d0);
            uVar18 = *(uint *)(lVar19 + 0x230) & _DAT_146af0070;
            uVar20 = *(uint *)(lVar19 + 0x234) & uRam0000000146af0074;
            uVar21 = *(uint *)(lVar19 + 0x238) & uRam0000000146af0078;
            uVar24 = *(uint *)(lVar19 + 0x23c) & uRam0000000146af007c;
            auVar39._4_4_ = uVar20;
            auVar39._0_4_ = uVar18;
            auVar39._8_4_ = uVar21;
            auVar39._12_4_ = uVar24;
            auVar3._4_4_ = uVar21;
            auVar3._0_4_ = uVar20;
            auVar3._8_4_ = uVar18;
            auVar3._12_4_ = uVar24;
            auVar40 = minps(auVar39,auVar3);
            auVar4._4_4_ = uVar18;
            auVar4._0_4_ = uVar21;
            auVar4._8_4_ = uVar20;
            auVar4._12_4_ = uVar24;
            auVar40 = minps(auVar40,auVar4);
            fVar27 = auVar40._0_4_ * *(float *)(lVar19 + 0x710);
            fVar23 = *(float *)(lVar17 + 0x228) - fVar27;
            FMatrix::InverseFast(&local_248,&local_198);
            fVar44 = local_168 * 1.0 + fVar23 * local_178 + fVar42 * local_188 + fVar34 * local_198;
            fVar22 = fStack_164 * 1.0 + fVar23 * fStack_174 +
                     fVar42 * fStack_184 + fVar34 * fStack_194;
            fVar34 = fStack_160 * 1.0 + fVar23 * fStack_170 +
                     fVar42 * fStack_180 + fVar34 * fStack_190;
            local_2c8 = CONCAT44(fVar22,fVar44);
            uStack_2c0 = CONCAT44(0x3f800000,fVar34);
            local_2b0 = fVar27 + fStack_1d0 * 1.0 + fVar34 * fStack_1e0 +
                                 fVar22 * fStack_1f0 + fVar44 * fStack_200;
            local_2a8 = CONCAT44(fStack_1d4 * 1.0 + fVar34 * fStack_1e4 +
                                 fVar22 * fStack_1f4 + fVar44 * fStack_204,
                                 local_1d8 * 1.0 + fVar34 * local_1e8 +
                                 fVar22 * local_1f8 + fVar44 * local_208);
            local_2a0 = local_2b0;
            (**(code **)(*param_1 + 0x4f8))(param_1,&local_278,&local_2a8);
            lVar17 = param_1[0x2f];
            local_2b0 = local_270 - *(float *)(lVar17 + 0x228);
            local_2a8 = CONCAT44(fStack_274 - *(float *)(lVar17 + 0x224),
                                 local_278 - *(float *)(lVar17 + 0x220));
            local_2a0 = local_2b0;
            puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x4f0))(param_1,&local_2c8,&local_2a8);
            local_288 = *puVar15;
            local_280 = *(float *)(puVar15 + 1);
            if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x4000) == 0) {
              if (((!bVar6) && (local_268 - *(float *)((longlong)param_1 + 0x24c) == 0.0)) &&
                 (local_264 - *(float *)(param_1 + 0x4a) == 0.0)) {
                local_288 = 0;
              }
              _guard_xfg_dispatch_icall_nop(local_158,0,0x90);
              lVar17 = param_1[0x2f];
              local_14c = 0x3f800000;
              local_2b8 = *(float *)(lVar17 + 0x220);
              fStack_2b4 = *(float *)(lVar17 + 0x224);
              local_2b0 = *(float *)(lVar17 + 0x228);
              uVar16 = FUN_14247f500();
              FUN_14247ea90(uVar16);
              (**(code **)(*param_1 + 0x488))(param_1,&local_288,&local_298,1,local_158,0);
              lVar17 = param_1[0x2f];
              if (((0.0001 < ABS(*(float *)(lVar17 + 0x220) - (local_2b8 + (float)local_288))) ||
                  (0.0001 < ABS(*(float *)(lVar17 + 0x224) - (fStack_2b4 + local_288._4_4_)))) ||
                 (0.0001 < ABS(*(float *)(lVar17 + 0x228) - (local_2b0 + local_280)))) {
                (**(code **)(*param_1 + 0x8e8))(param_1,&local_288,&local_2b8,local_158);
              }
            }
            else {
              local_2a8 = CONCAT44(fStack_274,local_278);
              local_2a0 = local_270;
              FUN_142399390(param_1[0x2f],&local_2a8,&local_298,0,0,0);
            }
          }
          else {
            lVar17 = param_1[0x44];
            local_298._0_4_ = *(float *)(lVar17 + 0x4f4) * _DAT_146af01d0;
            local_298._4_4_ = *(float *)(lVar17 + 0x4f8) * fRam0000000146af01d4;
            uStack_290._0_4_ = *(float *)(lVar17 + 0x4fc) * fRam0000000146af01d8;
            local_298._0_4_ =
                 (float)local_298 - (float)(int)((float)local_298 * _DAT_146af01c0) * _DAT_146af01b0
            ;
            local_298._4_4_ =
                 local_298._4_4_ -
                 (float)(int)(local_298._4_4_ * fRam0000000146af01c4) * fRam0000000146af01b4;
            uStack_290._0_4_ =
                 (float)uStack_290 -
                 (float)(int)((float)uStack_290 * fRam0000000146af01c8) * fRam0000000146af01b8;
            fVar31 = fRam0000000146af01dc * 0.0 -
                     (float)(int)(fRam0000000146af01dc * 0.0 * fRam0000000146af01cc) *
                     fRam0000000146af01bc;
            uVar18 = -(uint)(_DAT_146af0180 < (float)((uint)(float)local_298 & _DAT_146af0070));
            uVar20 = -(uint)(fRam0000000146af0184 <
                            (float)((uint)local_298._4_4_ & uRam0000000146af0074));
            uVar21 = -(uint)(fRam0000000146af0188 <
                            (float)((uint)(float)uStack_290 & uRam0000000146af0078));
            local_298._0_4_ =
                 (float)(((uint)((float)((uint)(float)local_298 & _DAT_146af01a0 | _DAT_146af0190) -
                                (float)local_298) ^ (uint)(float)local_298) & uVar18 ^
                        (uint)(float)local_298);
            local_298._4_4_ =
                 (float)(((uint)((float)((uint)local_298._4_4_ & uRam0000000146af01a4 |
                                        uRam0000000146af0194) - local_298._4_4_) ^
                         (uint)local_298._4_4_) & uVar20 ^ (uint)local_298._4_4_);
            uStack_290._0_4_ =
                 (float)(((uint)((float)((uint)(float)uStack_290 & uRam0000000146af01a8 |
                                        uRam0000000146af0198) - (float)uStack_290) ^
                         (uint)(float)uStack_290) & uVar21 ^ (uint)(float)uStack_290);
            fVar31 = (float)(((uint)((float)((uint)fVar31 & uRam0000000146af01ac |
                                            uRam0000000146af019c) - fVar31) ^ (uint)fVar31) &
                             -(uint)(fRam0000000146af018c <
                                    (float)((uint)fVar31 & uRam0000000146af007c)) ^ (uint)fVar31);
            fVar28 = (float)local_298 * (float)local_298;
            fVar29 = local_298._4_4_ * local_298._4_4_;
            fVar30 = (float)uStack_290 * (float)uStack_290;
            fVar32 = fVar31 * fVar31;
            local_298._0_4_ =
                 (((((fVar28 * -2.3889859e-08 + 2.7525562e-06) * fVar28 + -0.00019840874) * fVar28 +
                   0.008333331) * fVar28 + -0.16666667) * fVar28 + 1.0) * (float)local_298;
            local_298._4_4_ =
                 (((((fVar29 * -2.3889859e-08 + 2.7525562e-06) * fVar29 + -0.00019840874) * fVar29 +
                   0.008333331) * fVar29 + -0.16666667) * fVar29 + 1.0) * local_298._4_4_;
            uStack_290._0_4_ =
                 (((((fVar30 * -2.3889859e-08 + 2.7525562e-06) * fVar30 + -0.00019840874) * fVar30 +
                   0.008333331) * fVar30 + -0.16666667) * fVar30 + 1.0) * (float)uStack_290;
            uStack_290._4_4_ =
                 (((((fVar32 * -2.3889859e-08 + 2.7525562e-06) * fVar32 + -0.00019840874) * fVar32 +
                   0.008333331) * fVar32 + -0.16666667) * fVar32 + 1.0) * fVar31;
            fVar38 = (((((fVar28 * -2.6051615e-07 + 2.4760495e-05) * fVar28 + -0.0013888378) *
                        fVar28 + 0.041666638) * fVar28 + -0.5) * fVar28 + 1.0) *
                     (float)((_DAT_146af0170 ^ _DAT_146af0050) & uVar18 ^ _DAT_146af0050);
            fVar41 = (((((fVar29 * -2.6051615e-07 + 2.4760495e-05) * fVar29 + -0.0013888378) *
                        fVar29 + 0.041666638) * fVar29 + -0.5) * fVar29 + 1.0) *
                     (float)((uRam0000000146af0174 ^ uRam0000000146af0054) & uVar20 ^
                            uRam0000000146af0054);
            fVar29 = (((((fVar30 * -2.6051615e-07 + 2.4760495e-05) * fVar30 + -0.0013888378) *
                        fVar30 + 0.041666638) * fVar30 + -0.5) * fVar30 + 1.0) *
                     (float)((uRam0000000146af0178 ^ uRam0000000146af0058) & uVar21 ^
                            uRam0000000146af0058);
            fVar31 = *(float *)(lVar17 + 0x4e8);
            fVar28 = *(float *)(lVar17 + 0x4f0);
            fVar30 = fVar41 * fVar38;
            uStack_23c = 0;
            uStack_22c = 0;
            uStack_21c = 0;
            fVar32 = fVar38 * local_298._4_4_;
            uStack_20c = 0x3f800000;
            fVar33 = -(fVar38 * (float)uStack_290);
            fVar36 = fVar41 * (float)uStack_290 * (float)local_298 - fVar29 * local_298._4_4_;
            fVar35 = local_298._4_4_ * (float)uStack_290 * (float)local_298 + fVar29 * fVar41;
            fVar38 = fVar29 * fVar38;
            fVar45 = fVar41 * (float)uStack_290 - local_298._4_4_ * fVar29 * (float)local_298;
            fVar43 = -(fVar41 * fVar29 * (float)local_298 + (float)uStack_290 * local_298._4_4_);
            fVar29 = *(float *)(lVar17 + 0x4ec);
            local_2c8 = CONCAT44(fVar41,fVar45);
            uStack_2c0 = CONCAT44(fVar41,fVar41);
            local_208 = fVar32 * local_1f8 + fVar30 * local_208 + (float)local_298 * local_1e8 +
                        local_1d8 * 0.0;
            fStack_204 = fVar32 * fStack_1f4 + fVar30 * fStack_204 + (float)local_298 * fStack_1e4 +
                         fStack_1d4 * 0.0;
            fStack_200 = fVar32 * fStack_1f0 + fVar30 * fStack_200 + (float)local_298 * fStack_1e0 +
                         fStack_1d0 * 0.0;
            fStack_1fc = fVar32 * fStack_1ec + fVar30 * fStack_1fc + (float)local_298 * fStack_1dc +
                         fStack_1cc * 0.0;
            local_1f8 = fVar35 * local_1f8 + fVar36 * fVar34 + fVar33 * local_1e8 + local_1d8 * 0.0;
            fStack_1f4 = fVar35 * fStack_1f4 + fVar36 * fVar42 + fVar33 * fStack_1e4 +
                         fStack_1d4 * 0.0;
            fStack_1f0 = fVar35 * fStack_1f0 + fVar36 * fVar44 + fVar33 * fStack_1e0 +
                         fStack_1d0 * 0.0;
            fStack_1ec = fVar35 * fStack_1ec + fVar36 * fVar22 + fVar33 * fStack_1dc +
                         fStack_1cc * 0.0;
            local_1e8 = fVar45 * fVar23 + fVar43 * fVar34 + fVar38 * local_1e8 + local_1d8 * 0.0;
            fStack_1e4 = fVar45 * fVar27 + fVar43 * fVar42 + fVar38 * fStack_1e4 + fStack_1d4 * 0.0;
            fStack_1e0 = fVar45 * fVar37 + fVar43 * fVar44 + fVar38 * fStack_1e0 + fStack_1d0 * 0.0;
            fStack_1dc = fVar45 * fVar5 + fVar43 * fVar22 + fVar38 * fStack_1dc + fStack_1cc * 0.0;
            local_1d8 = fVar29 * fVar23 + fVar31 * fVar34 + fVar28 * fVar7 + local_1d8 * 1.0;
            fStack_1d4 = fVar29 * fVar27 + fVar31 * fVar42 + fVar28 * fVar8 + fStack_1d4 * 1.0;
            fStack_1d0 = fVar29 * fVar37 + fVar31 * fVar44 + fVar28 * fVar9 + fStack_1d0 * 1.0;
            fStack_1cc = fVar29 * fVar5 + fVar31 * fVar22 + fVar28 * fVar10 + fStack_1cc * 1.0;
            if ((*(uint *)((longlong)param_1 + 0x4b4) & 0x2000) == 0) {
              puVar15 = (undefined8 *)FMatrix::ToQuat(&local_208,&local_1b8);
              lVar17 = param_1[0x2f];
            }
            else {
              lVar17 = param_1[0x2f];
              puVar15 = &local_2c8;
              local_2c8 = *(undefined8 *)(lVar17 + 0x210);
              uStack_2c0 = *(undefined8 *)(lVar17 + 0x218);
            }
            local_298 = CONCAT44(local_298._4_4_,*(undefined4 *)puVar15);
            local_298 = *puVar15;
            uStack_290 = CONCAT44(uStack_290._4_4_,*(undefined4 *)(puVar15 + 1));
            uStack_290 = puVar15[1];
            local_278 = local_1d8 - *(float *)(lVar17 + 0x220);
            fStack_274 = fStack_1d4 - *(float *)(lVar17 + 0x224);
            local_270 = fStack_1d0 - *(float *)(lVar17 + 0x228);
            uVar16 = FUN_14247f500();
            FUN_14247ea90(uVar16);
            (**(code **)(*param_1 + 0x488))(param_1,&local_278,&local_298,1,0,0);
          }
          cVar11 = (**(code **)(*plVar1 + 0x400))(plVar1,0);
          if ((cVar11 != '\0') && (*(longlong *)(param_1[0x44] + 0x4c0) != 0)) {
            FUN_1427d3830(*(longlong *)(param_1[0x44] + 0x4c0),&local_288,&local_258);
          }
        }
LAB_14235a6e7:
        *(uint *)(param_1 + 0x31) = uVar12;
        return;
      }
    }
  }
  (**(code **)(*param_1 + 0x6d8))(param_1,0,0,1);
  return;
}



// FUNCTION 14235a730 FUN_14235a730 body=368 status=ok
// SIG undefined FUN_14235a730(void)

void FUN_14235a730(longlong param_1,longlong param_2,float *param_3)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  float fVar6;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  plVar5 = (longlong *)0x0;
  if (*(longlong *)(param_1 + 0x220) != 0) {
    plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x220) + 0x490);
  }
  fVar6 = 0.0;
  if ((plVar5 != (longlong *)0x0) && ((*(uint *)(param_1 + 0x4b4) & 0x2000) == 0)) {
    (**(code **)(*plVar5 + 0x720))(plVar5,&local_48);
    local_38 = local_48 + *param_3;
    local_34 = local_44 + param_3[1];
    local_30 = local_40 + param_3[2];
    (**(code **)(*plVar5 + 0x728))(plVar5,&local_38,0);
    in_EAX = (**(code **)(*plVar5 + 0x840))(plVar5,param_3);
    fVar6 = local_40;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  if (plVar5 != (longlong *)0x0) {
    lVar1 = *(longlong *)(param_1 + 0x178);
    local_28 = *(float *)(lVar1 + 0x210);
    fStack_24 = *(float *)(lVar1 + 0x214);
    fStack_20 = *(float *)(lVar1 + 0x218);
    fStack_1c = *(float *)(lVar1 + 0x21c);
    auVar2._4_4_ = -(uint)(*(float *)(lVar1 + 0x254) != fStack_24);
    auVar2._0_4_ = -(uint)(*(float *)(lVar1 + 0x250) != local_28);
    auVar2._8_4_ = -(uint)(*(float *)(lVar1 + 600) != fStack_20);
    auVar2._12_4_ = -(uint)(*(float *)(lVar1 + 0x25c) != fStack_1c);
    iVar3 = movmskps(in_EAX,auVar2);
    if (iVar3 != 0) {
      *(float *)(lVar1 + 0x250) = local_28;
      *(float *)(lVar1 + 0x254) = fStack_24;
      *(float *)(lVar1 + 600) = fStack_20;
      *(float *)(lVar1 + 0x25c) = fStack_1c;
      puVar4 = (undefined8 *)FQuat::Rotator(&local_28,&local_38);
      *(undefined8 *)(lVar1 + 0x260) = *puVar4;
      *(undefined4 *)(lVar1 + 0x268) = *(undefined4 *)(puVar4 + 1);
    }
    local_30 = *(float *)(lVar1 + 0x268);
    lVar1 = *plVar5;
    *(float *)(param_2 + 8) = local_30;
    (**(code **)(lVar1 + 0x720))(plVar5,&local_48);
    local_40 = fVar6;
    (**(code **)(*plVar5 + 0x728))(plVar5,&local_48,0);
  }
  return;
}



// FUNCTION 14235a8a0 FUN_14235a8a0 body=510 status=ok
// SIG undefined FUN_14235a8a0(void)

void FUN_14235a8a0(longlong param_1)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  longlong *plVar4;
  longlong lVar5;
  byte bVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fStack_74;
  
  bVar3 = (bool)(*(byte *)(param_1 + 0x700) >> 3 & 1);
  if ((bVar3 != false) && (*(longlong *)(param_1 + 0x6f8) == 0)) {
    plVar4 = (longlong *)FUN_14178ca30();
    lVar5 = (**(code **)(*plVar4 + 0x6b8))(plVar4);
    bVar3 = lVar5 != 0;
    *(longlong *)(param_1 + 0x6f8) = lVar5;
  }
  if (bVar3 != false) {
    fVar7 = *(float *)(param_1 + 0x718);
    uVar1 = *(undefined8 *)(param_1 + 0x710);
    bVar6 = *(byte *)(param_1 + 0x700);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x38);
    uVar8 = uVar1;
    if ((float)uVar1 < 0.0001) {
      uVar8 = 0x3f800000;
    }
    fStack_74 = (float)((ulonglong)uVar1 >> 0x20);
    if (fStack_74 < 0.0001) {
      fStack_74 = 1.0;
    }
    if (fVar7 < 0.0001) {
      fVar7 = 1.0;
    }
    if ((((float)uVar8 * 2.0 != *(float *)(lVar5 + 200)) ||
        (fStack_74 * 2.0 != *(float *)(lVar5 + 0xcc))) ||
       (bVar2 = bVar6, fVar7 * 2.0 != *(float *)(lVar5 + 0xd0))) {
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      bVar2 = 0;
      bVar6 = *(byte *)(param_1 + 0x700);
    }
    *(byte *)(param_1 + 0x700) = (bVar2 & 0xf8 ^ bVar6) & 8 ^ bVar6;
  }
  FUN_14239dd80(param_1);
  if ((*(byte *)(param_1 + 0x700) & 8) == 0) {
    fVar7 = *(float *)(param_1 + 0x718);
    fVar9 = (float)*(undefined8 *)(param_1 + 0x710);
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x38);
    if (fVar9 < 0.0001) {
      fVar9 = 1.0;
    }
    fStack_74 = (float)((ulonglong)*(undefined8 *)(param_1 + 0x710) >> 0x20);
    if (fStack_74 < 0.0001) {
      fStack_74 = 1.0;
    }
    if (fVar7 < 0.0001) {
      fVar7 = 1.0;
    }
    FUN_1423517f0(lVar5,&DAT_1468b5b70);
    *(float *)(lVar5 + 200) = fVar9 * 2.0;
    *(float *)(lVar5 + 0xcc) = fStack_74 * 2.0;
    *(float *)(lVar5 + 0xd0) = fVar7 * 2.0;
  }
  return;
}



// FUNCTION 14235aaa0 FUN_14235aaa0 body=306 status=ok
// SIG undefined FUN_14235aaa0(void)

void FUN_14235aaa0(longlong param_1)

{
  byte bVar1;
  bool bVar2;
  longlong *plVar3;
  longlong lVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  
  bVar2 = (bool)(*(byte *)(param_1 + 0x700) >> 3 & 1);
  if ((bVar2 != false) && (*(longlong *)(param_1 + 0x6f8) == 0)) {
    plVar3 = (longlong *)FUN_14178ca30();
    lVar4 = (**(code **)(*plVar3 + 0x6b8))(plVar3);
    bVar2 = lVar4 != 0;
    *(longlong *)(param_1 + 0x6f8) = lVar4;
  }
  if (bVar2 != false) {
    bVar5 = *(byte *)(param_1 + 0x700);
    fVar6 = *(float *)(param_1 + 0x710) - *(float *)(param_1 + 0x714);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x48);
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    if ((*(float *)(param_1 + 0x714) != *(float *)(lVar4 + 200)) ||
       (bVar1 = bVar5, fVar6 + fVar6 != *(float *)(lVar4 + 0xcc))) {
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      bVar1 = 0;
      bVar5 = *(byte *)(param_1 + 0x700);
    }
    *(byte *)(param_1 + 0x700) = (bVar1 & 0xf8 ^ bVar5) & 8 ^ bVar5;
  }
  FUN_14239e5d0(param_1);
  if ((*(byte *)(param_1 + 0x700) & 8) == 0) {
    fVar6 = *(float *)(param_1 + 0x714);
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x6f8) + 0x48);
    fVar7 = *(float *)(param_1 + 0x710) - fVar6;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    FUN_1423517f0(lVar4,&DAT_1468b5b70);
    *(float *)(lVar4 + 200) = fVar6;
    *(float *)(lVar4 + 0xcc) = fVar7 + fVar7;
  }
  return;
}



// FUNCTION 14235abe0 FUN_14235abe0 body=64 status=ok
// SIG undefined FUN_14235abe0(void)

void FUN_14235abe0(longlong *param_1)

{
  char cVar1;
  
  cVar1 = (**(code **)(*param_1 + 0x550))();
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*param_1 + 0x778))(param_1);
    if (cVar1 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014235ac13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x770))(param_1,0);
      return;
    }
  }
  return;
}



// FUNCTION 14235ac20 FUN_14235ac20 body=120 status=ok
// SIG undefined FUN_14235ac20(void)

void FUN_14235ac20(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (**(code **)(*param_1 + 0x550))();
  uVar2 = *(uint *)((longlong)param_1 + 0x4b4) & 0x800;
  if (cVar1 != '\0') {
    if ((uVar2 != 0) && (cVar1 = (**(code **)(*param_1 + 0x778))(param_1), cVar1 != '\0')) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00014235ac63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x770))(param_1,0);
    return;
  }
  if ((uVar2 != 0) && (cVar1 = (**(code **)(*param_1 + 0x778))(param_1), cVar1 != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x00014235ac8b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x768))(param_1,0);
    return;
  }
  return;
}



// FUNCTION 14235aca0 FUN_14235aca0 body=173 status=ok
// SIG undefined FUN_14235aca0(void)

void FUN_14235aca0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  cVar2 = (**(code **)(*param_1 + 0x5c0))();
  if (cVar2 != '\0') {
    if (*(longlong *)(param_1[0x44] + 0x4d8) != 0) {
      lVar1 = param_1[0x2f];
      local_18 = *(undefined4 *)(lVar1 + 0x220);
      local_14 = *(undefined4 *)(lVar1 + 0x224);
      local_10 = *(undefined4 *)(lVar1 + 0x228);
      (**(code **)(*param_1 + 0x870))(param_1,&local_18,param_1 + 0x82,0,0);
      return;
    }
    *(uint *)(param_1 + 0x82) = *(uint *)(param_1 + 0x82) & 0xfffffff8;
    *(undefined8 *)((longlong)param_1 + 0x414) = 0;
    _guard_xfg_dispatch_icall_nop(param_1 + 0x84,0,0x90);
    *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3f800000;
  }
  return;
}



// FUNCTION 14235ad50 FUN_14235ad50 body=127 status=ok
// SIG undefined FUN_14235ad50(void)

void FUN_14235ad50(longlong param_1,byte param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x220);
  if (lVar2 != 0) {
    uVar1 = *(uint *)(lVar2 + 0x56c);
    *(uint *)(lVar2 + 0x56c) = ((uint)param_2 * 4 ^ uVar1) & 4 ^ uVar1;
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) & 0xfffff7ff;
    *(uint *)(param_1 + 0x4b4) = *(uint *)(param_1 + 0x4b4) | (param_2 & 2) << 10;
    plVar3 = *(longlong **)(param_1 + 0x220);
    if ((char)plVar3[0x25] == '\x03') {
      if ((*(uint *)((longlong)plVar3 + 0x56c) >> 2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014235adc7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x878))();
        return;
      }
      if ((uVar1 >> 2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014235adbd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x870))();
        return;
      }
    }
  }
  return;
}



// FUNCTION 14235add0 FUN_14235add0 body=264 status=ok
// SIG undefined FUN_14235add0(void)

undefined8 FUN_14235add0(longlong *param_1,float param_2,longlong param_3)

{
  longlong lVar1;
  float fVar2;
  
  if (0.0 < param_2) {
    fVar2 = param_2 - *(float *)(param_3 + 0x58);
    if (ABS(fVar2) <= *(float *)(param_1 + 0xc4) * 0.5) {
      if (*(float *)(param_3 + 0x58) < param_2) {
        (**(code **)(*param_1 + 0x990))();
        return 1;
      }
    }
    else if (fVar2 < 0.0) {
      fVar2 = *(float *)((longlong)param_1 + 0x624);
      lVar1 = FUN_14046f570();
      if (*(float *)(param_1 + 0xc4) * 0.5 <= *(float *)(lVar1 + 0x790) - fVar2) {
        lVar1 = FUN_14046f570(param_1);
        *(undefined4 *)((longlong)param_1 + 0x624) = *(undefined4 *)(lVar1 + 0x790);
        (**(code **)(*param_1 + 0x988))(param_1);
        *(float *)(param_3 + 0x58) = *(float *)(param_3 + 0x58) - *(float *)(param_1 + 0xc4);
        FRootMotionSourceGroup::ApplyTimeStampReset(param_1 + 0xc5,(int)param_1[0xc4]);
        return 1;
      }
    }
  }
  return 0;
}



// FUNCTION 14235aee0 WaitForAllAsyncTraceTasks body=317 status=ok
// SIG undefined WaitForAllAsyncTraceTasks(void)

void UWorld::WaitForAllAsyncTraceTasks(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  
  if ((DAT_146531c10 != 0) && (cVar3 = FUN_141636a40(), cVar3 != '\0')) {
    uVar4 = *(int *)(param_1 + 0x380) + 1U & 0x80000001;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
    }
    lVar8 = (longlong)(int)uVar4 * 0x60 + param_1 + 0x2c0;
    if (0 < *(int *)(lVar8 + 0x58)) {
      plVar6 = (longlong *)FTaskGraphInterface::Get();
      plVar1 = (longlong *)(lVar8 + 0x30);
      (**(code **)(*plVar6 + 0x48))(plVar6,plVar1,2);
      iVar5 = *(int *)(lVar8 + 0x5c);
      plVar6 = *(longlong **)(lVar8 + 0x50);
      iVar7 = *(int *)(lVar8 + 0x58);
      if (-1 < iVar5) {
        if (plVar6 == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        for (; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (*plVar6 != 0) {
            LOCK();
            piVar2 = (int *)(*plVar6 + 0x48);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar6 = plVar6 + 1;
        }
        *(undefined4 *)(lVar8 + 0x58) = 0;
        return;
      }
      if (plVar6 == (longlong *)0x0) {
        plVar6 = plVar1;
      }
      if (iVar7 != 0) {
        do {
          if (*plVar6 != 0) {
            LOCK();
            piVar2 = (int *)(*plVar6 + 0x48);
            iVar5 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar5 == 1) {
              FGraphEvent::Recycle();
            }
          }
          plVar6 = plVar6 + 1;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        iVar5 = *(int *)(lVar8 + 0x5c);
      }
      *(undefined4 *)(lVar8 + 0x58) = 0;
      if (iVar5 != 0) {
        TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(plVar1,0)
        ;
      }
    }
  }
  return;
}



// FUNCTION 14235b020 FUN_14235b020 body=181 status=ok
// SIG undefined FUN_14235b020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14235b020(longlong param_1)

{
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined8 *local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 local_34;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  local_48 = 1;
  local_34 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_70 = &local_58;
  local_30 = 0;
  local_44 = _DAT_1468b5d78;
  uStack_40 = uRam00000001468b5d7c;
  uStack_3c = uRam00000001468b5d80;
  uStack_38 = uRam00000001468b5d84;
  local_28 = 0;
  local_20 = 0;
  local_78 = 1;
  (**(code **)(*DAT_146ab6358 + 0x490))(DAT_146ab6358,local_68,&DAT_146ab6e78,0x20);
  TRefCountPtr<FRHIIndexBuffer>::operator=(param_1 + 0x30,local_68);
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(local_68);
  return;
}



// FUNCTION 14235b0e0 FUN_14235b0e0 body=89 status=ok
// SIG undefined FUN_14235b0e0(void)

undefined8 * FUN_14235b0e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_14504ee20;
  FRenderResource::ReleaseResource();
  *param_1 = &PTR_FUN_143f48ad0;
  TRefCountPtr<FRHIIndexBuffer>::~TRefCountPtr<FRHIIndexBuffer>(param_1 + 6);
  FUN_141edd2d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x38);
  }
  return param_1;
}



// FUNCTION 14235b140 CopyToEmpty<FBatchedMesh> body=301 status=ok
// SIG undefined CopyToEmpty<FBatchedMesh>(void)

void TArray<FBatchedMesh,FDefaultAllocator>::CopyToEmpty<FBatchedMesh>
               (undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    piVar5 = (int *)(param_2 + 8);
    puVar4 = (undefined4 *)((longlong)param_1 + 0x1c);
    do {
      *param_1 = 0;
      iVar2 = *piVar5;
      pvVar3 = *(void **)(piVar5 + -2);
      puVar4[-5] = iVar2;
      if (iVar2 == 0) {
        puVar4[-4] = 0;
      }
      else {
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(param_1,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar3,(longlong)iVar2 * 0xc);
      }
      *(undefined8 *)(puVar4 + -3) = 0;
      iVar2 = piVar5[4];
      pvVar3 = *(void **)(piVar5 + 2);
      puVar4[-1] = iVar2;
      if (iVar2 == 0) {
        *puVar4 = 0;
      }
      else {
        TArray<int,FDefaultAllocator>::ResizeForCopy(puVar4 + -3,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),pvVar3,(longlong)iVar2 << 2);
      }
      param_1 = param_1 + 6;
      puVar4[1] = piVar5[6];
      *(char *)(puVar4 + 2) = (char)piVar5[7];
      piVar1 = piVar5 + 8;
      piVar5 = piVar5 + 0xc;
      puVar4[3] = *piVar1;
      puVar4 = puVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14235b270 FUN_14235b270 body=313 status=ok
// SIG undefined FUN_14235b270(void)

void FUN_14235b270(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  void *_Src;
  uint uVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  
  lVar1 = *param_1;
  uVar2 = (longlong)(int)param_1[1];
  lVar3 = 0;
  while (uVar2 != 0) {
    uVar8 = uVar2 >> 1;
    uVar6 = (uint)uVar2;
    iVar4 = FName::Compare((uVar8 + lVar3) * 0x40 + lVar1,param_2);
    uVar2 = uVar8;
    if (iVar4 < 0) {
      lVar3 = (ulonglong)(uVar6 & 1) + uVar8 + lVar3;
    }
  }
  iVar4 = (int)lVar3;
  if ((-1 < iVar4) && (iVar4 < (int)param_1[1])) {
    iVar5 = FName::Compare(param_2,*param_1 + (longlong)iVar4 * 0x40);
    if (-1 < iVar5) {
      puVar7 = (undefined8 *)((longlong)iVar4 * 0x40 + *param_1);
      if (puVar7[5] != 0) {
        FMemory::Free();
      }
      if (puVar7[3] != 0) {
        FMemory::Free();
      }
      if (puVar7[1] != 0) {
        FMemory::Free();
      }
      goto LAB_14235b365;
    }
  }
  iVar5 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar5 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar5 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar5);
  }
  _Src = (void *)(*param_1 + (longlong)iVar4 * 0x40);
  _guard_xfg_dispatch_icall_nop((void *)((longlong)_Src + 0x40),_Src,(longlong)(iVar5 - iVar4) << 6)
  ;
  puVar7 = (undefined8 *)((longlong)iVar4 * 0x40 + *param_1);
LAB_14235b365:
  *puVar7 = *param_2;
  puVar7[1] = 0;
  puVar7[2] = 0;
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *(undefined4 *)(puVar7 + 7) = 0;
  return;
}



// FUNCTION 14235b3b0 FUN_14235b3b0 body=861 status=ok
// SIG undefined FUN_14235b3b0(void)

int * FUN_14235b3b0(longlong *param_1,int *param_2,longlong *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  undefined4 *puVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  char cVar14;
  uint uVar15;
  longlong *plVar16;
  void *_Dst;
  bool local_res8;
  undefined8 local_48;
  undefined8 local_40;
  
  iVar10 = 1;
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar4 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x30);
    *(int *)(param_1 + 6) = iVar4;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x30) = 0xffffffff;
    }
  }
  plVar16 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar16 == (longlong *)0x0) {
    plVar16 = param_1 + 2;
  }
  puVar3 = (uint *)((longlong)plVar16 +
                   (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar3 = *puVar3 | 1 << ((byte)iVar11 & 0x1f);
  param_3 = (longlong *)*param_3;
  plVar16 = (longlong *)((longlong)iVar11 * 0x30 + *param_1);
  *plVar16 = *param_3;
  plVar16[1] = param_3[1];
  lVar5 = param_3[2];
  plVar16[2] = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  plVar16[3] = 0;
  plVar16[4] = 0;
  local_48 = 0;
  local_40 = 0;
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(&local_48);
  *(undefined4 *)(plVar16 + 5) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  local_res8 = false;
  if (uVar15 != 1) {
    iVar11 = iVar13;
    if (uVar15 != 0) {
      lVar5 = *plVar16;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar12 = *(int *)((longlong)plVar9 +
                       ((longlong)((int)((ulonglong)lVar5 >> 0x20) + (int)lVar5) &
                       (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar12 != -1) {
        do {
          iVar11 = iVar12;
          if (*(longlong *)(*param_1 + (longlong)iVar12 * 0x30) == lVar5) break;
          iVar12 = *(int *)(*param_1 + 0x28 + (longlong)iVar12 * 0x30);
          iVar11 = iVar13;
        } while (iVar12 != -1);
      }
    }
    local_res8 = iVar11 != -1;
    if (local_res8) {
      _Dst = (void *)((longlong)iVar11 * 0x30 + *param_1);
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>
                ((longlong)_Dst + 0x18);
      plVar9 = *(longlong **)((longlong)_Dst + 0x10);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        lVar5 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          iVar10 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (iVar10 == 1) {
            (**(code **)(*plVar9 + 8))(plVar9,1);
          }
        }
      }
      _guard_xfg_dispatch_icall_nop(_Dst,plVar16,0x28);
      iVar10 = *param_2;
      bVar6 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x30) = iVar10;
      }
      puVar8 = (undefined4 *)((longlong)iVar10 * 0x30 + *param_1);
      *puVar8 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      puVar8[1] = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar16 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar16 == (longlong *)0x0) {
        plVar16 = param_1 + 2;
      }
      puVar3 = (uint *)((longlong)plVar16 +
                       (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar3 = *puVar3 & ~(1 << bVar6 | 1U >> 0x20 - bVar6);
      goto LAB_14235b6de;
    }
  }
  if (3 < uVar15) {
    uVar7 = (uVar15 >> 1) + 8;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    iVar10 = 0x20;
    cVar14 = '\0';
    if (uVar7 != 0) {
      iVar10 = 0x1f - iVar13;
    }
    uVar7 = (uVar15 >> 1) + 7;
    iVar13 = 0x1f;
    if (uVar7 != 0) {
      for (; uVar7 >> iVar13 == 0; iVar13 = iVar13 + -1) {
      }
    }
    if (uVar7 != 0) {
      cVar14 = '\x1f' - (char)iVar13;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar14 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    uVar15 = (int)((ulonglong)*plVar16 >> 0x20) + (int)*plVar16 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar16 + 0x2c) = uVar15;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(plVar16 + 5) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(int *)((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         *param_2;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FName,FOnlineSessionSetting>,TDefaultMapHashableKeyFuncs<FName,FOnlineSessionSetting,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_14235b6de:
  if (param_4 != 0) {
    *(bool *)param_4 = local_res8;
  }
  return param_2;
}



// FUNCTION 14235b710 FUN_14235b710 body=713 status=ok
// SIG undefined FUN_14235b710(void)

int * FUN_14235b710(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ushort uVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte bVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  ushort *_Src;
  uint *puVar15;
  int iVar16;
  bool bVar17;
  
  iVar9 = 1;
  iVar16 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar12 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar12 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar12 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar12);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar12 = (int)param_1[6];
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar10 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar10;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar10 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar7 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar17 = false;
  puVar15 = (uint *)((longlong)plVar8 + lVar7);
  *puVar15 = *puVar15 | 1 << ((byte)iVar12 & 0x1f);
  puVar3 = (undefined8 *)param_3[1];
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (ushort *)(*param_1 + lVar1);
  uVar2 = *(ushort *)*param_3;
  *_Src = uVar2;
  *(undefined8 *)(_Src + 4) = *puVar3;
  _Src[8] = 0xffff;
  _Src[9] = 0xffff;
  uVar14 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar14 != 1) {
    iVar11 = iVar16;
    if (uVar14 != 0) {
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar10 = *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar2) * 4);
      if (iVar10 != -1) {
        do {
          iVar11 = iVar10;
          if (*(ushort *)(*param_1 + (longlong)iVar10 * 0x18) == uVar2) break;
          iVar10 = *(int *)(*param_1 + 0x10 + (longlong)iVar10 * 0x18);
          iVar11 = iVar16;
        } while (iVar10 != -1);
      }
    }
    bVar17 = iVar11 != -1;
    if (bVar17) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar16 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar16;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar15 = (uint *)((longlong)plVar8 + lVar7);
      *puVar15 = *puVar15 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_14235b9b4;
    }
  }
  if (3 < uVar14) {
    uVar6 = (uVar14 >> 1) + 8;
    iVar16 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    iVar9 = 0x20;
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar16;
    }
    uVar6 = (uVar14 >> 1) + 7;
    iVar16 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar16 == 0; iVar16 = iVar16 + -1) {
      }
    }
    if (uVar6 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar16;
    }
    iVar9 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar14 < 1) || (((int)param_1[9] != 0 && (iVar9 <= (int)param_1[9])))) {
    uVar14 = (int)param_1[9] - 1U & (uint)*_Src;
    *(uint *)(_Src + 10) = uVar14;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 8) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar14) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (ulonglong)uVar14) * 4) = iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar9;
    FUN_1422b1d60(param_1);
  }
LAB_14235b9b4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar17;
  }
  return param_2;
}



// FUNCTION 14235b9e0 FUN_14235b9e0 body=797 status=ok
// SIG undefined FUN_14235b9e0(void)

int * FUN_14235b9e0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  undefined4 *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  longlong *plVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar11 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar11 + 1) {
      TArray<DragonChainLink,FDefaultAllocator>::ResizeGrow();
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2);
  }
  else {
    iVar11 = (int)param_1[6];
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar12 = *(int *)(*param_1 + 4 + (longlong)iVar11 * 0x28);
    *(int *)(param_1 + 6) = iVar12;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x28) = 0xffffffff;
    }
  }
  plVar9 = (longlong *)param_1[4];
  *param_2 = iVar11;
  if (plVar9 == (longlong *)0x0) {
    plVar9 = param_1 + 2;
  }
  bVar15 = false;
  puVar1 = (uint *)((longlong)plVar9 + (longlong)((int)(iVar11 + (iVar11 >> 0x1f & 0x1fU)) >> 5) * 4
                   );
  *puVar1 = *puVar1 | 1 << ((byte)iVar11 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar11 * 0x28);
  puVar2 = (undefined4 *)param_3[1];
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  *(undefined4 *)(_Src + 1) = *puVar2;
  *(undefined4 *)((longlong)_Src + 0xc) = uVar4;
  *(undefined4 *)(_Src + 2) = uVar5;
  *(undefined4 *)((longlong)_Src + 0x14) = uVar6;
  _Src[3] = *(ulonglong *)(puVar2 + 4);
  *(undefined4 *)(_Src + 4) = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    if (iVar12 != 0) {
      iVar8 = (int)(uVar3 >> 4);
      uVar13 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
      uVar10 = -(uVar13 + iVar8) ^ uVar13 >> 0xd;
      uVar14 = (iVar8 - uVar13) - uVar10 ^ uVar10 >> 0xc;
      uVar13 = (uVar13 - uVar14) - uVar10 ^ uVar14 << 0x10;
      uVar10 = (uVar10 - uVar13) - uVar14 ^ uVar13 >> 5;
      uVar14 = (uVar14 - uVar13) - uVar10 ^ uVar10 >> 3;
      uVar13 = (uVar13 - uVar14) - uVar10 ^ uVar14 << 10;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar9 +
                      (((longlong)(int)((uVar10 - uVar13) - uVar14) ^ (ulonglong)(uVar13 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar8 * 0x28) == uVar3) goto LAB_14235bbbb;
          iVar8 = *(int *)(*param_1 + 0x20 + (longlong)iVar8 * 0x28);
        } while (iVar8 != -1);
      }
    }
    iVar8 = -1;
LAB_14235bbbb:
    bVar15 = iVar8 != -1;
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar8 * 0x28),_Src,0x20);
      TSparseArray<TSetElement<TTuple<FString,TSharedPtr<FSlateMaterialBrush,0>_>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::RemoveAtUninitialized(param_1,iVar11,1);
      *param_2 = iVar8;
      goto LAB_14235bcd4;
    }
  }
  cVar7 = TSet<TTuple<TSharedPtr<FString,1>,FString>,TDefaultMapHashableKeyFuncs<TSharedPtr<FString,1>,FString,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar12,0);
  if (cVar7 == '\0') {
    iVar11 = (int)(*_Src >> 4);
    uVar13 = 0x9e3779b9U - iVar11 ^ iVar11 << 8;
    uVar14 = -(iVar11 + uVar13) ^ uVar13 >> 0xd;
    uVar10 = (iVar11 - uVar13) - uVar14 ^ uVar14 >> 0xc;
    uVar13 = (uVar13 - uVar10) - uVar14 ^ uVar10 << 0x10;
    uVar14 = (uVar14 - uVar13) - uVar10 ^ uVar13 >> 5;
    uVar10 = (uVar10 - uVar13) - uVar14 ^ uVar14 >> 3;
    uVar13 = (uVar13 - uVar10) - uVar14 ^ uVar10 << 10;
    uVar10 = ((uVar14 - uVar13) - uVar10 ^ uVar13 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x24) = uVar10;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 4) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_14235bcd4:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar15;
  }
  return param_2;
}



// FUNCTION 14235bd00 FUN_14235bd00 body=1803 status=ok
// SIG undefined FUN_14235bd00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14235bd00(float *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                     longlong param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar15 [16];
  float fVar23;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_res10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [2];
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
  longlong local_128 [6];
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_res10 = param_2;
  iVar7 = FUN_1423ac950(param_5);
  if (iVar7 == -1) {
    puVar8 = (undefined8 *)FName::ToString(&local_res10,local_188);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(&local_138,L"Invalid Bone Name \'%s\'",puVar11);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    local_188[0] = 0;
    puVar11 = &DAT_143f3eda8;
    if (fStack_130 != 0.0) {
      puVar11 = (undefined2 *)CONCAT44(fStack_134,local_138);
    }
    FUN_141790820(puVar11,3,0);
    fVar16 = fRam0000000146af03ec;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = fVar16;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    fVar16 = (float)((uint)fRam0000000146af03e4 & uRam0000000146af03f4);
    fVar18 = (float)((uint)fRam0000000146af03e8 & uRam0000000146af03f8);
    fVar21 = (float)((uint)fRam0000000146af03ec & uRam0000000146af03fc);
    param_1[8] = (float)((uint)_DAT_146af03e0 & _DAT_146af03f0);
    param_1[9] = fVar16;
    param_1[10] = fVar18;
    param_1[0xb] = fVar21;
    lVar10 = CONCAT44(fStack_134,local_138);
  }
  else {
    local_128[0] = 0;
    local_128[1] = 0;
    local_128[4] = 0;
    local_128[2] = 0;
    local_128[3] = 0;
    FA2CSPose::AllocateLocalPoses(local_128,param_4,param_5 + 0xa30);
    if (param_3 == 1) {
      FA2CSPose::GetComponentSpaceTransform(local_128,param_1,iVar7);
    }
    else {
      pfVar9 = (float *)FA2CSPose::GetComponentSpaceTransform(local_128,local_f8,iVar7);
      fVar16 = fRam0000000146af03ec;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = fVar16;
      fVar16 = (float)((uint)fRam0000000146af03e4 & uRam0000000146af03f4);
      fVar18 = (float)((uint)fRam0000000146af03e8 & uRam0000000146af03f8);
      fVar21 = (float)((uint)fRam0000000146af03ec & uRam0000000146af03fc);
      param_1[8] = (float)((uint)_DAT_146af03e0 & _DAT_146af03f0);
      param_1[9] = fVar16;
      param_1[10] = fVar18;
      param_1[0xb] = fVar21;
      fVar33 = fRam0000000146af05d8;
      fVar32 = fRam0000000146af05d4;
      fVar25 = _DAT_146af05d0;
      fVar50 = fRam0000000146af03e8;
      fVar49 = fRam0000000146af03e4;
      fVar48 = _DAT_146af03e0;
      auVar12 = *(undefined1 (*) [16])(pfVar9 + 8);
      fVar16 = auVar12._0_4_;
      fVar21 = auVar12._4_4_;
      fVar20 = auVar12._8_4_;
      fVar1 = auVar12._12_4_;
      auVar13 = *(undefined1 (*) [16])(param_5 + 0x230);
      fVar18 = auVar13._0_4_;
      fVar17 = auVar13._4_4_;
      fVar23 = auVar13._8_4_;
      fVar2 = auVar13._12_4_;
      auVar12 = minps(auVar12,auVar13);
      auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af05d4);
      auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af05d0);
      auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af05d8);
      auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af05dc);
      iVar7 = movmskps((int)pfVar9,auVar13);
      if (iVar7 == 0) {
        fVar48 = *(float *)(param_5 + 0x210);
        fVar49 = *(float *)(param_5 + 0x214);
        fVar50 = *(float *)(param_5 + 0x218);
        fVar25 = *(float *)(param_5 + 0x21c);
        fVar32 = *pfVar9;
        fVar33 = pfVar9[1];
        fVar34 = pfVar9[2];
        fVar35 = pfVar9[3];
        fVar4 = *(float *)(param_5 + 0x220);
        fVar14 = *(float *)(param_5 + 0x224);
        fVar5 = *(float *)(param_5 + 0x228);
        fVar6 = *(float *)(param_5 + 0x22c);
        fVar19 = fVar18 * pfVar9[4];
        fVar30 = fVar17 * pfVar9[5];
        fVar22 = fVar23 * pfVar9[6];
        fVar29 = fVar2 * pfVar9[7];
        fVar24 = fVar35 * fVar48 * _DAT_146af0590;
        fVar27 = fVar34 * fVar48 * fRam0000000146af0594;
        fVar28 = fVar33 * fVar48 * fRam0000000146af0598;
        fVar26 = fVar32 * fVar48 * fRam0000000146af059c;
        param_1[8] = fVar16 * fVar18;
        param_1[9] = fVar21 * fVar17;
        param_1[10] = fVar20 * fVar23;
        param_1[0xb] = fVar1 * fVar2;
        fVar17 = fVar49 * fVar35 * fRam0000000146af0584;
        fVar20 = fVar49 * fVar32 * fRam0000000146af0588;
        fVar23 = fVar49 * fVar33 * fRam0000000146af058c;
        fVar16 = fVar50 * fVar32 * fRam0000000146af0574;
        fVar18 = fVar50 * fVar35 * fRam0000000146af0578;
        fVar21 = fVar50 * fVar34 * fRam0000000146af057c;
        *param_1 = fVar24 + fVar25 * fVar32 + fVar49 * fVar34 * _DAT_146af0580 +
                   fVar50 * fVar33 * _DAT_146af0570;
        param_1[1] = fVar27 + fVar25 * fVar33 + fVar17 + fVar16;
        param_1[2] = fVar28 + fVar25 * fVar34 + fVar20 + fVar18;
        param_1[3] = fVar26 + fVar25 * fVar35 + fVar23 + fVar21;
        fVar16 = fVar22 * fVar49 - fVar30 * fVar50;
        fVar18 = fVar19 * fVar50 - fVar22 * fVar48;
        fVar21 = fVar30 * fVar48 - fVar19 * fVar49;
        fVar17 = fVar29 * fVar25 - fVar29 * fVar25;
        fVar16 = fVar16 + fVar16;
        fVar18 = fVar18 + fVar18;
        fVar21 = fVar21 + fVar21;
        fVar17 = fVar17 + fVar17;
        param_1[4] = (fVar21 * fVar49 - fVar18 * fVar50) + fVar16 * fVar25 + fVar19 + fVar4;
        param_1[5] = (fVar16 * fVar50 - fVar21 * fVar48) + fVar18 * fVar25 + fVar30 + fVar14;
        param_1[6] = (fVar18 * fVar48 - fVar16 * fVar49) + fVar21 * fVar25 + fVar22 + fVar5;
        param_1[7] = (fVar17 * fVar25 - fVar17 * fVar25) + fVar17 * fVar25 + fVar29 + fVar6;
      }
      else {
        fVar34 = *(float *)(param_5 + 0x210);
        fVar35 = *(float *)(param_5 + 0x214);
        fVar4 = *(float *)(param_5 + 0x218);
        fVar14 = *(float *)(param_5 + 0x21c);
        fVar5 = *(float *)(param_5 + 0x220);
        fVar6 = *(float *)(param_5 + 0x224);
        fVar24 = *(float *)(param_5 + 0x228);
        fVar26 = fVar35 + fVar35;
        fVar28 = fVar4 + fVar4;
        fVar30 = (fVar34 + fVar34) * fVar34;
        fVar27 = (fVar34 + fVar34) * fVar14;
        fVar45 = (fVar28 * fVar14 + fVar26 * fVar34) * fVar18;
        fVar46 = (fVar27 + fVar28 * fVar35) * fVar17;
        fVar47 = (fVar26 * fVar14 + fVar28 * fVar34) * fVar23;
        fVar36 = fVar17 * (fVar26 * fVar34 - fVar28 * fVar14);
        fVar38 = fVar23 * (fVar28 * fVar35 - fVar27);
        fVar40 = fVar18 * (fVar28 * fVar34 - fVar26 * fVar14);
        fVar27 = (float)((uint)((_DAT_146af03e0 - (fVar28 * fVar4 + fVar26 * fVar35)) * fVar18) &
                        _DAT_146af03f0);
        fVar28 = (float)((uint)((fRam0000000146af03e4 - (fVar28 * fVar4 + fVar30)) * fVar17) &
                        uRam0000000146af03f4);
        fVar19 = (float)((uint)((fRam0000000146af03e8 - (fVar26 * fVar35 + fVar30)) * fVar23) &
                        uRam0000000146af03f8);
        fVar22 = (float)((uint)((fRam0000000146af03ec - (fVar30 + fVar30)) * fVar2) &
                        uRam0000000146af03fc);
        fVar34 = *pfVar9;
        fVar35 = pfVar9[1];
        fVar4 = pfVar9[2];
        fVar14 = pfVar9[3];
        fVar30 = fVar35 + fVar35;
        fVar29 = fVar4 + fVar4;
        fVar31 = (fVar34 + fVar34) * fVar34;
        fVar26 = (fVar34 + fVar34) * fVar14;
        fVar42 = (fVar29 * fVar14 + fVar30 * fVar34) * fVar16;
        fVar43 = (fVar26 + fVar29 * fVar35) * fVar21;
        fVar44 = (fVar30 * fVar14 + fVar29 * fVar34) * fVar20;
        fVar37 = fVar21 * (fVar30 * fVar34 - fVar29 * fVar14);
        fVar39 = fVar20 * (fVar29 * fVar35 - fVar26);
        fVar41 = fVar16 * (fVar29 * fVar34 - fVar30 * fVar14);
        fVar14 = (float)((uint)((_DAT_146af03e0 - (fVar29 * fVar4 + fVar30 * fVar35)) * fVar16) &
                        _DAT_146af03f0);
        fVar26 = (float)((uint)((fRam0000000146af03e4 - (fVar29 * fVar4 + fVar31)) * fVar21) &
                        uRam0000000146af03f4);
        fVar30 = (float)((uint)((fRam0000000146af03e8 - (fVar30 * fVar35 + fVar31)) * fVar20) &
                        uRam0000000146af03f8);
        fVar29 = (float)((uint)((fRam0000000146af03ec - (fVar31 + fVar31)) * fVar1) &
                        uRam0000000146af03fc);
        fVar34 = pfVar9[4];
        fVar35 = pfVar9[5];
        fVar4 = pfVar9[6];
        local_178 = fVar42 * fVar36 + fVar14 * fVar27 + fVar41 * fVar47 + fVar29 * fVar5;
        fStack_174 = fVar42 * fVar28 + fVar14 * fVar45 + fVar41 * fVar38 + fVar29 * fVar6;
        fStack_170 = fVar42 * fVar46 + fVar14 * fVar40 + fVar41 * fVar19 + fVar29 * fVar24;
        fStack_16c = fVar42 * fVar22 + fVar14 * fVar22 + fVar41 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_168 = fVar26 * fVar36 + fVar37 * fVar27 + fVar43 * fVar47 + fVar29 * fVar5;
        fStack_164 = fVar26 * fVar28 + fVar37 * fVar45 + fVar43 * fVar38 + fVar29 * fVar6;
        fStack_160 = fVar26 * fVar46 + fVar37 * fVar40 + fVar43 * fVar19 + fVar29 * fVar24;
        fStack_15c = fVar26 * fVar22 + fVar37 * fVar22 + fVar43 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_158 = fVar39 * fVar36 + fVar44 * fVar27 + fVar30 * fVar47 + fVar29 * fVar5;
        fStack_154 = fVar39 * fVar28 + fVar44 * fVar45 + fVar30 * fVar38 + fVar29 * fVar6;
        fStack_150 = fVar39 * fVar46 + fVar44 * fVar40 + fVar30 * fVar19 + fVar29 * fVar24;
        fStack_14c = fVar39 * fVar22 + fVar44 * fVar22 + fVar30 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_148 = fVar35 * fVar36 + fVar34 * fVar27 + fVar4 * fVar47 +
                    fRam0000000146af03ec * fVar5;
        fStack_144 = fVar35 * fVar28 + fVar34 * fVar45 + fVar4 * fVar38 +
                     fRam0000000146af03ec * fVar6;
        fStack_140 = fVar35 * fVar46 + fVar34 * fVar40 + fVar4 * fVar19 +
                     fRam0000000146af03ec * fVar24;
        fStack_13c = fVar35 * fVar22 + fVar34 * fVar22 + fVar4 * fVar22 +
                     fRam0000000146af03ec * fRam0000000146af03ec;
        FMatrix::RemoveScaling(&local_178);
        fVar48 = (float)(-(uint)(fVar25 <= fVar16 * fVar18) & (_DAT_146af05c0 ^ (uint)fVar48) ^
                        _DAT_146af05c0);
        fVar49 = (float)(-(uint)(fVar32 <= fVar21 * fVar17) & (uRam0000000146af05c4 ^ (uint)fVar49)
                        ^ uRam0000000146af05c4);
        fVar50 = (float)(-(uint)(fVar33 <= fVar20 * fVar23) & (uRam0000000146af05c8 ^ (uint)fVar50)
                        ^ uRam0000000146af05c8);
        local_178 = local_178 * fVar48;
        fStack_174 = fStack_174 * fVar48;
        fStack_170 = fStack_170 * fVar48;
        fStack_164 = fStack_164 * fVar49;
        fStack_160 = fStack_160 * fVar49;
        local_168 = local_168 * fVar49;
        fStack_154 = fStack_154 * fVar50;
        fStack_150 = fStack_150 * fVar50;
        local_158 = local_158 * fVar50;
        FQuat::FQuat(&local_138,&local_178);
        local_188[0] = CONCAT44(local_188[0]._4_4_,0x322bcc77);
        auVar15._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
        auVar15._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
        auVar15._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
        auVar15._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
        fVar32 = auVar15._4_4_ + auVar15._0_4_;
        fVar33 = auVar15._8_4_ + auVar15._4_4_;
        fVar34 = auVar15._12_4_ + auVar15._8_4_;
        fVar35 = auVar15._0_4_ + auVar15._12_4_;
        auVar3._4_4_ = fVar33;
        auVar3._0_4_ = fVar32;
        auVar3._8_4_ = fVar34;
        auVar3._12_4_ = fVar35;
        auVar12 = rsqrtps(auVar15,auVar3);
        fVar48 = auVar12._0_4_;
        fVar49 = auVar12._4_4_;
        fVar50 = auVar12._8_4_;
        fVar25 = auVar12._12_4_;
        fVar48 = (_DAT_146af05b0 - fVar48 * fVar48 * fVar32 * _DAT_146af05b0) * fVar48 + fVar48;
        fVar49 = (fRam0000000146af05b4 - fVar49 * fVar49 * fVar33 * fRam0000000146af05b4) * fVar49 +
                 fVar49;
        fVar50 = (fRam0000000146af05b8 - fVar50 * fVar50 * fVar34 * fRam0000000146af05b8) * fVar50 +
                 fVar50;
        fVar25 = (fRam0000000146af05bc - fVar25 * fVar25 * fVar35 * fRam0000000146af05bc) * fVar25 +
                 fVar25;
        auVar12._4_4_ = fStack_144;
        auVar12._0_4_ = local_148;
        auVar12._8_4_ = fStack_140;
        fVar48 = (float)(((uint)(((_DAT_146af05b0 - fVar48 * fVar48 * fVar32 * _DAT_146af05b0) *
                                  fVar48 + fVar48) * local_138) ^ _DAT_146af05a0) &
                         -(uint)(1e-08 <= fVar32) ^ _DAT_146af05a0);
        fVar49 = (float)(((uint)(((fRam0000000146af05b4 -
                                  fVar49 * fVar49 * fVar33 * fRam0000000146af05b4) * fVar49 + fVar49
                                 ) * fStack_134) ^ uRam0000000146af05a4) & -(uint)(1e-08 <= fVar33)
                        ^ uRam0000000146af05a4);
        fVar50 = (float)(((uint)(((fRam0000000146af05b8 -
                                  fVar50 * fVar50 * fVar34 * fRam0000000146af05b8) * fVar50 + fVar50
                                 ) * fStack_130) ^ uRam0000000146af05a8) & -(uint)(1e-08 <= fVar34)
                        ^ uRam0000000146af05a8);
        fVar25 = (float)(((uint)(((fRam0000000146af05bc -
                                  fVar25 * fVar25 * fVar35 * fRam0000000146af05bc) * fVar25 + fVar25
                                 ) * fStack_12c) ^ uRam0000000146af05ac) & -(uint)(1e-08 <= fVar35)
                        ^ uRam0000000146af05ac);
        param_1[8] = fVar16 * fVar18;
        param_1[9] = fVar21 * fVar17;
        param_1[10] = fVar20 * fVar23;
        param_1[0xb] = fVar1 * fVar2;
        auVar12._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 4) = auVar12;
        *param_1 = fVar48;
        param_1[1] = fVar49;
        param_1[2] = fVar50;
        param_1[3] = fVar25;
      }
    }
    lVar10 = local_128[0];
    if (local_128[3] != 0) {
      FMemory::Free();
      lVar10 = local_128[0];
    }
  }
  if (lVar10 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14235c410 FUN_14235c410 body=1803 status=ok
// SIG undefined FUN_14235c410(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_14235c410(float *param_1,undefined8 param_2,int param_3,undefined8 param_4,
                     longlong param_5)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  undefined8 *puVar8;
  float *pfVar9;
  longlong lVar10;
  undefined2 *puVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar15 [16];
  float fVar23;
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
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined8 local_res10;
  undefined1 auStack_1a8 [32];
  longlong local_188 [2];
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
  longlong local_128 [6];
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  local_res10 = param_2;
  iVar7 = FUN_1423ac950(param_5);
  if (iVar7 == -1) {
    puVar8 = (undefined8 *)FName::ToString(&local_res10,local_188);
    if (*(int *)(puVar8 + 1) == 0) {
      puVar11 = &DAT_143f3eda8;
    }
    else {
      puVar11 = (undefined2 *)*puVar8;
    }
    FString::PrintfImpl(&local_138,L"Invalid Bone Name \'%s\'",puVar11);
    if (local_188[0] != 0) {
      FMemory::Free();
    }
    local_188[0] = 0;
    puVar11 = &DAT_143f3eda8;
    if (fStack_130 != 0.0) {
      puVar11 = (undefined2 *)CONCAT44(fStack_134,local_138);
    }
    FUN_141790820(puVar11,3,0);
    fVar16 = fRam0000000146af03ec;
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    param_1[3] = fVar16;
    param_1[4] = 0.0;
    param_1[5] = 0.0;
    param_1[6] = 0.0;
    param_1[7] = 0.0;
    fVar16 = (float)((uint)fRam0000000146af03e4 & uRam0000000146af03f4);
    fVar18 = (float)((uint)fRam0000000146af03e8 & uRam0000000146af03f8);
    fVar21 = (float)((uint)fRam0000000146af03ec & uRam0000000146af03fc);
    param_1[8] = (float)((uint)_DAT_146af03e0 & _DAT_146af03f0);
    param_1[9] = fVar16;
    param_1[10] = fVar18;
    param_1[0xb] = fVar21;
    lVar10 = CONCAT44(fStack_134,local_138);
  }
  else {
    local_128[0] = 0;
    local_128[1] = 0;
    local_128[4] = 0;
    local_128[2] = 0;
    local_128[3] = 0;
    FA2CSPose::AllocateLocalPoses(local_128,param_4,param_5 + 0xa88);
    if (param_3 == 1) {
      FA2CSPose::GetComponentSpaceTransform(local_128,param_1,iVar7);
    }
    else {
      pfVar9 = (float *)FA2CSPose::GetComponentSpaceTransform(local_128,local_f8,iVar7);
      fVar16 = fRam0000000146af03ec;
      param_1[4] = 0.0;
      param_1[5] = 0.0;
      param_1[6] = 0.0;
      param_1[7] = 0.0;
      *param_1 = 0.0;
      param_1[1] = 0.0;
      param_1[2] = 0.0;
      param_1[3] = fVar16;
      fVar16 = (float)((uint)fRam0000000146af03e4 & uRam0000000146af03f4);
      fVar18 = (float)((uint)fRam0000000146af03e8 & uRam0000000146af03f8);
      fVar21 = (float)((uint)fRam0000000146af03ec & uRam0000000146af03fc);
      param_1[8] = (float)((uint)_DAT_146af03e0 & _DAT_146af03f0);
      param_1[9] = fVar16;
      param_1[10] = fVar18;
      param_1[0xb] = fVar21;
      fVar33 = fRam0000000146af05d8;
      fVar32 = fRam0000000146af05d4;
      fVar25 = _DAT_146af05d0;
      fVar50 = fRam0000000146af03e8;
      fVar49 = fRam0000000146af03e4;
      fVar48 = _DAT_146af03e0;
      auVar12 = *(undefined1 (*) [16])(pfVar9 + 8);
      fVar16 = auVar12._0_4_;
      fVar21 = auVar12._4_4_;
      fVar20 = auVar12._8_4_;
      fVar1 = auVar12._12_4_;
      auVar13 = *(undefined1 (*) [16])(param_5 + 0x230);
      fVar18 = auVar13._0_4_;
      fVar17 = auVar13._4_4_;
      fVar23 = auVar13._8_4_;
      fVar2 = auVar13._12_4_;
      auVar12 = minps(auVar12,auVar13);
      auVar13._4_4_ = -(uint)(auVar12._4_4_ < fRam0000000146af05d4);
      auVar13._0_4_ = -(uint)(auVar12._0_4_ < _DAT_146af05d0);
      auVar13._8_4_ = -(uint)(auVar12._8_4_ < fRam0000000146af05d8);
      auVar13._12_4_ = -(uint)(auVar12._12_4_ < fRam0000000146af05dc);
      iVar7 = movmskps((int)pfVar9,auVar13);
      if (iVar7 == 0) {
        fVar48 = *(float *)(param_5 + 0x210);
        fVar49 = *(float *)(param_5 + 0x214);
        fVar50 = *(float *)(param_5 + 0x218);
        fVar25 = *(float *)(param_5 + 0x21c);
        fVar32 = *pfVar9;
        fVar33 = pfVar9[1];
        fVar34 = pfVar9[2];
        fVar35 = pfVar9[3];
        fVar4 = *(float *)(param_5 + 0x220);
        fVar14 = *(float *)(param_5 + 0x224);
        fVar5 = *(float *)(param_5 + 0x228);
        fVar6 = *(float *)(param_5 + 0x22c);
        fVar19 = fVar18 * pfVar9[4];
        fVar30 = fVar17 * pfVar9[5];
        fVar22 = fVar23 * pfVar9[6];
        fVar29 = fVar2 * pfVar9[7];
        fVar24 = fVar35 * fVar48 * _DAT_146af0590;
        fVar27 = fVar34 * fVar48 * fRam0000000146af0594;
        fVar28 = fVar33 * fVar48 * fRam0000000146af0598;
        fVar26 = fVar32 * fVar48 * fRam0000000146af059c;
        param_1[8] = fVar16 * fVar18;
        param_1[9] = fVar21 * fVar17;
        param_1[10] = fVar20 * fVar23;
        param_1[0xb] = fVar1 * fVar2;
        fVar17 = fVar49 * fVar35 * fRam0000000146af0584;
        fVar20 = fVar49 * fVar32 * fRam0000000146af0588;
        fVar23 = fVar49 * fVar33 * fRam0000000146af058c;
        fVar16 = fVar50 * fVar32 * fRam0000000146af0574;
        fVar18 = fVar50 * fVar35 * fRam0000000146af0578;
        fVar21 = fVar50 * fVar34 * fRam0000000146af057c;
        *param_1 = fVar24 + fVar25 * fVar32 + fVar49 * fVar34 * _DAT_146af0580 +
                   fVar50 * fVar33 * _DAT_146af0570;
        param_1[1] = fVar27 + fVar25 * fVar33 + fVar17 + fVar16;
        param_1[2] = fVar28 + fVar25 * fVar34 + fVar20 + fVar18;
        param_1[3] = fVar26 + fVar25 * fVar35 + fVar23 + fVar21;
        fVar16 = fVar22 * fVar49 - fVar30 * fVar50;
        fVar18 = fVar19 * fVar50 - fVar22 * fVar48;
        fVar21 = fVar30 * fVar48 - fVar19 * fVar49;
        fVar17 = fVar29 * fVar25 - fVar29 * fVar25;
        fVar16 = fVar16 + fVar16;
        fVar18 = fVar18 + fVar18;
        fVar21 = fVar21 + fVar21;
        fVar17 = fVar17 + fVar17;
        param_1[4] = (fVar21 * fVar49 - fVar18 * fVar50) + fVar16 * fVar25 + fVar19 + fVar4;
        param_1[5] = (fVar16 * fVar50 - fVar21 * fVar48) + fVar18 * fVar25 + fVar30 + fVar14;
        param_1[6] = (fVar18 * fVar48 - fVar16 * fVar49) + fVar21 * fVar25 + fVar22 + fVar5;
        param_1[7] = (fVar17 * fVar25 - fVar17 * fVar25) + fVar17 * fVar25 + fVar29 + fVar6;
      }
      else {
        fVar34 = *(float *)(param_5 + 0x210);
        fVar35 = *(float *)(param_5 + 0x214);
        fVar4 = *(float *)(param_5 + 0x218);
        fVar14 = *(float *)(param_5 + 0x21c);
        fVar5 = *(float *)(param_5 + 0x220);
        fVar6 = *(float *)(param_5 + 0x224);
        fVar24 = *(float *)(param_5 + 0x228);
        fVar26 = fVar35 + fVar35;
        fVar28 = fVar4 + fVar4;
        fVar30 = (fVar34 + fVar34) * fVar34;
        fVar27 = (fVar34 + fVar34) * fVar14;
        fVar45 = (fVar28 * fVar14 + fVar26 * fVar34) * fVar18;
        fVar46 = (fVar27 + fVar28 * fVar35) * fVar17;
        fVar47 = (fVar26 * fVar14 + fVar28 * fVar34) * fVar23;
        fVar36 = fVar17 * (fVar26 * fVar34 - fVar28 * fVar14);
        fVar38 = fVar23 * (fVar28 * fVar35 - fVar27);
        fVar40 = fVar18 * (fVar28 * fVar34 - fVar26 * fVar14);
        fVar27 = (float)((uint)((_DAT_146af03e0 - (fVar28 * fVar4 + fVar26 * fVar35)) * fVar18) &
                        _DAT_146af03f0);
        fVar28 = (float)((uint)((fRam0000000146af03e4 - (fVar28 * fVar4 + fVar30)) * fVar17) &
                        uRam0000000146af03f4);
        fVar19 = (float)((uint)((fRam0000000146af03e8 - (fVar26 * fVar35 + fVar30)) * fVar23) &
                        uRam0000000146af03f8);
        fVar22 = (float)((uint)((fRam0000000146af03ec - (fVar30 + fVar30)) * fVar2) &
                        uRam0000000146af03fc);
        fVar34 = *pfVar9;
        fVar35 = pfVar9[1];
        fVar4 = pfVar9[2];
        fVar14 = pfVar9[3];
        fVar30 = fVar35 + fVar35;
        fVar29 = fVar4 + fVar4;
        fVar31 = (fVar34 + fVar34) * fVar34;
        fVar26 = (fVar34 + fVar34) * fVar14;
        fVar42 = (fVar29 * fVar14 + fVar30 * fVar34) * fVar16;
        fVar43 = (fVar26 + fVar29 * fVar35) * fVar21;
        fVar44 = (fVar30 * fVar14 + fVar29 * fVar34) * fVar20;
        fVar37 = fVar21 * (fVar30 * fVar34 - fVar29 * fVar14);
        fVar39 = fVar20 * (fVar29 * fVar35 - fVar26);
        fVar41 = fVar16 * (fVar29 * fVar34 - fVar30 * fVar14);
        fVar14 = (float)((uint)((_DAT_146af03e0 - (fVar29 * fVar4 + fVar30 * fVar35)) * fVar16) &
                        _DAT_146af03f0);
        fVar26 = (float)((uint)((fRam0000000146af03e4 - (fVar29 * fVar4 + fVar31)) * fVar21) &
                        uRam0000000146af03f4);
        fVar30 = (float)((uint)((fRam0000000146af03e8 - (fVar30 * fVar35 + fVar31)) * fVar20) &
                        uRam0000000146af03f8);
        fVar29 = (float)((uint)((fRam0000000146af03ec - (fVar31 + fVar31)) * fVar1) &
                        uRam0000000146af03fc);
        fVar34 = pfVar9[4];
        fVar35 = pfVar9[5];
        fVar4 = pfVar9[6];
        local_178 = fVar42 * fVar36 + fVar14 * fVar27 + fVar41 * fVar47 + fVar29 * fVar5;
        fStack_174 = fVar42 * fVar28 + fVar14 * fVar45 + fVar41 * fVar38 + fVar29 * fVar6;
        fStack_170 = fVar42 * fVar46 + fVar14 * fVar40 + fVar41 * fVar19 + fVar29 * fVar24;
        fStack_16c = fVar42 * fVar22 + fVar14 * fVar22 + fVar41 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_168 = fVar26 * fVar36 + fVar37 * fVar27 + fVar43 * fVar47 + fVar29 * fVar5;
        fStack_164 = fVar26 * fVar28 + fVar37 * fVar45 + fVar43 * fVar38 + fVar29 * fVar6;
        fStack_160 = fVar26 * fVar46 + fVar37 * fVar40 + fVar43 * fVar19 + fVar29 * fVar24;
        fStack_15c = fVar26 * fVar22 + fVar37 * fVar22 + fVar43 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_158 = fVar39 * fVar36 + fVar44 * fVar27 + fVar30 * fVar47 + fVar29 * fVar5;
        fStack_154 = fVar39 * fVar28 + fVar44 * fVar45 + fVar30 * fVar38 + fVar29 * fVar6;
        fStack_150 = fVar39 * fVar46 + fVar44 * fVar40 + fVar30 * fVar19 + fVar29 * fVar24;
        fStack_14c = fVar39 * fVar22 + fVar44 * fVar22 + fVar30 * fVar22 +
                     fVar29 * fRam0000000146af03ec;
        local_148 = fVar35 * fVar36 + fVar34 * fVar27 + fVar4 * fVar47 +
                    fRam0000000146af03ec * fVar5;
        fStack_144 = fVar35 * fVar28 + fVar34 * fVar45 + fVar4 * fVar38 +
                     fRam0000000146af03ec * fVar6;
        fStack_140 = fVar35 * fVar46 + fVar34 * fVar40 + fVar4 * fVar19 +
                     fRam0000000146af03ec * fVar24;
        fStack_13c = fVar35 * fVar22 + fVar34 * fVar22 + fVar4 * fVar22 +
                     fRam0000000146af03ec * fRam0000000146af03ec;
        FMatrix::RemoveScaling(&local_178);
        fVar48 = (float)(-(uint)(fVar25 <= fVar16 * fVar18) & (_DAT_146af05c0 ^ (uint)fVar48) ^
                        _DAT_146af05c0);
        fVar49 = (float)(-(uint)(fVar32 <= fVar21 * fVar17) & (uRam0000000146af05c4 ^ (uint)fVar49)
                        ^ uRam0000000146af05c4);
        fVar50 = (float)(-(uint)(fVar33 <= fVar20 * fVar23) & (uRam0000000146af05c8 ^ (uint)fVar50)
                        ^ uRam0000000146af05c8);
        local_178 = local_178 * fVar48;
        fStack_174 = fStack_174 * fVar48;
        fStack_170 = fStack_170 * fVar48;
        fStack_164 = fStack_164 * fVar49;
        fStack_160 = fStack_160 * fVar49;
        local_168 = local_168 * fVar49;
        fStack_154 = fStack_154 * fVar50;
        fStack_150 = fStack_150 * fVar50;
        local_158 = local_158 * fVar50;
        FQuat::FQuat(&local_138,&local_178);
        local_188[0] = CONCAT44(local_188[0]._4_4_,0x322bcc77);
        auVar15._0_4_ = local_138 * local_138 + fStack_130 * fStack_130;
        auVar15._4_4_ = fStack_134 * fStack_134 + fStack_12c * fStack_12c;
        auVar15._8_4_ = fStack_130 * fStack_130 + local_138 * local_138;
        auVar15._12_4_ = fStack_12c * fStack_12c + fStack_134 * fStack_134;
        fVar32 = auVar15._4_4_ + auVar15._0_4_;
        fVar33 = auVar15._8_4_ + auVar15._4_4_;
        fVar34 = auVar15._12_4_ + auVar15._8_4_;
        fVar35 = auVar15._0_4_ + auVar15._12_4_;
        auVar3._4_4_ = fVar33;
        auVar3._0_4_ = fVar32;
        auVar3._8_4_ = fVar34;
        auVar3._12_4_ = fVar35;
        auVar12 = rsqrtps(auVar15,auVar3);
        fVar48 = auVar12._0_4_;
        fVar49 = auVar12._4_4_;
        fVar50 = auVar12._8_4_;
        fVar25 = auVar12._12_4_;
        fVar48 = (_DAT_146af05b0 - fVar48 * fVar48 * fVar32 * _DAT_146af05b0) * fVar48 + fVar48;
        fVar49 = (fRam0000000146af05b4 - fVar49 * fVar49 * fVar33 * fRam0000000146af05b4) * fVar49 +
                 fVar49;
        fVar50 = (fRam0000000146af05b8 - fVar50 * fVar50 * fVar34 * fRam0000000146af05b8) * fVar50 +
                 fVar50;
        fVar25 = (fRam0000000146af05bc - fVar25 * fVar25 * fVar35 * fRam0000000146af05bc) * fVar25 +
                 fVar25;
        auVar12._4_4_ = fStack_144;
        auVar12._0_4_ = local_148;
        auVar12._8_4_ = fStack_140;
        fVar48 = (float)(((uint)(((_DAT_146af05b0 - fVar48 * fVar48 * fVar32 * _DAT_146af05b0) *
                                  fVar48 + fVar48) * local_138) ^ _DAT_146af05a0) &
                         -(uint)(1e-08 <= fVar32) ^ _DAT_146af05a0);
        fVar49 = (float)(((uint)(((fRam0000000146af05b4 -
                                  fVar49 * fVar49 * fVar33 * fRam0000000146af05b4) * fVar49 + fVar49
                                 ) * fStack_134) ^ uRam0000000146af05a4) & -(uint)(1e-08 <= fVar33)
                        ^ uRam0000000146af05a4);
        fVar50 = (float)(((uint)(((fRam0000000146af05b8 -
                                  fVar50 * fVar50 * fVar34 * fRam0000000146af05b8) * fVar50 + fVar50
                                 ) * fStack_130) ^ uRam0000000146af05a8) & -(uint)(1e-08 <= fVar34)
                        ^ uRam0000000146af05a8);
        fVar25 = (float)(((uint)(((fRam0000000146af05bc -
                                  fVar25 * fVar25 * fVar35 * fRam0000000146af05bc) * fVar25 + fVar25
                                 ) * fStack_12c) ^ uRam0000000146af05ac) & -(uint)(1e-08 <= fVar35)
                        ^ uRam0000000146af05ac);
        param_1[8] = fVar16 * fVar18;
        param_1[9] = fVar21 * fVar17;
        param_1[10] = fVar20 * fVar23;
        param_1[0xb] = fVar1 * fVar2;
        auVar12._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 4) = auVar12;
        *param_1 = fVar48;
        param_1[1] = fVar49;
        param_1[2] = fVar50;
        param_1[3] = fVar25;
      }
    }
    lVar10 = local_128[0];
    if (local_128[3] != 0) {
      FMemory::Free();
      lVar10 = local_128[0];
    }
  }
  if (lVar10 != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 14235cb20 NewIntrusiveReferenceController<FInputActionBinding,FInputActionBinding_const_&> body=252 status=ok
// SIG undefined NewIntrusiveReferenceController<FInputActionBinding,FInputActionBinding_const_&>(void)

undefined8 *
SharedPointerInternals::
NewIntrusiveReferenceController<FInputActionBinding,FInputActionBinding_const_&>
          (undefined1 *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)operator_new(0x58);
  if (puVar3 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar3 + 1) = 1;
    *(undefined4 *)((longlong)puVar3 + 0xc) = 1;
    *puVar3 = &PTR_DestroyObject_14505ad98;
    *(undefined1 *)(puVar3 + 2) = *param_1;
    *(byte *)((longlong)puVar3 + 0x11) =
         *(byte *)((longlong)puVar3 + 0x11) ^ (param_1[1] ^ *(byte *)((longlong)puVar3 + 0x11)) & 1;
    plVar2 = puVar3 + 4;
    *(undefined1 *)((longlong)puVar3 + 0x12) = param_1[2];
    puVar3[3] = *(undefined8 *)(param_1 + 8);
    *plVar2 = 0;
    *(undefined4 *)(puVar3 + 5) = 0;
    if ((((longlong *)(param_1 + 0x10) != plVar2) && (*(int *)(param_1 + 0x18) != 0)) &&
       (plVar1 = *(longlong **)(param_1 + 0x10), plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x30))(plVar1,plVar2);
    }
    puVar3[6] = 0;
    *(undefined4 *)(puVar3 + 7) = 0;
    if ((((undefined8 *)(param_1 + 0x20) != puVar3 + 6) && (*(int *)(param_1 + 0x28) != 0)) &&
       (plVar2 = *(longlong **)(param_1 + 0x20), plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x30))();
    }
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)((longlong)puVar3 + 0x44) = *(undefined4 *)(param_1 + 0x34);
    puVar3[9] = *(undefined8 *)(param_1 + 0x38);
    *(undefined1 *)(puVar3 + 10) = param_1[0x40];
    return puVar3;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 14235cc20 FUN_14235cc20 body=126 status=ok
// SIG undefined FUN_14235cc20(void)

undefined8 * FUN_14235cc20(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  FUN_1424de090();
  *param_1 = &PTR_FUN_145055588;
  puVar1 = (undefined8 *)FName::FName(local_res8,L"HeightFogComponent0",1);
  uVar3 = *puVar1;
  uVar2 = AGameStateBase::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe;
  param_1[0x8b] = uVar3;
  param_1[0x2d] = uVar3;
  return param_1;
}



// FUNCTION 14235cca0 FUN_14235cca0 body=343 status=ok
// SIG undefined FUN_14235cca0(void)

undefined8 * FUN_14235cca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 local_res8;
  undefined1 local_res18 [16];
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_144091548;
  puVar2 = (undefined8 *)FName::FName(&local_res8,L"PortalComponent",1);
  uVar1 = *puVar2;
  uVar3 = UBlueprintGeneratedClass::GetPrivateStaticClass();
  lVar4 = FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  param_1[0x8b] = lVar4;
  *(undefined8 *)(lVar4 + 0x204) = 0x42c8000041200000;
  *(undefined4 *)(lVar4 + 0x20c) = 0x42c80000;
  param_1[0x2d] = param_1[0x8b];
  puVar2 = (undefined8 *)FName::FName(local_res18,L"DrawBox0",1);
  uVar1 = *puVar2;
  uVar3 = FUN_14290f330();
  plVar5 = (longlong *)FUN_141752410(param_1,uVar1,uVar3,uVar3,1,0,0);
  local_res8 = 0;
  FUN_142399e30(plVar5,param_1[0x8b],0);
  *(byte *)(plVar5 + 0x5f) = *(byte *)(plVar5 + 0x5f) | 0x40;
  (**(code **)(*plVar5 + 0x640))(plVar5,DAT_146aefc58);
  plVar5[0xe2] = 0x3f8000003f800000;
  *(undefined4 *)(plVar5 + 0xe3) = 0x3f800000;
  *(longlong **)(param_1[0x8b] + 0x2d0) = plVar5;
  return param_1;
}



// FUNCTION 14235ce00 FUN_14235ce00 body=615 status=ok
// SIG undefined FUN_14235ce00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14235ce00(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined1 local_78 [48];
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  FUN_14237e540();
  uVar7 = 0;
  *param_1 = &PTR_FUN_14504ee60;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x2e8);
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  if (*(longlong *)(param_2 + 0x2d8) != 0) {
    lVar2 = operator_new(0x60);
    uVar3 = uVar7;
    if (lVar2 != 0) {
      uVar3 = FUN_142325450(lVar2,*(undefined8 *)(param_2 + 0x2d8));
    }
    param_1[0xd] = uVar3;
    if (*(int *)(uVar3 + 8) < 1) {
      if (uVar3 != 0) {
        FComponentInstanceDataCache::~FComponentInstanceDataCache(uVar3);
        FMemory::operator_delete(uVar3,0x60);
      }
      param_1[0xd] = 0;
    }
    lVar2 = *(longlong *)(*(longlong *)(param_2 + 0x2d8) + 0x168);
    if (lVar2 != 0) {
      plVar6 = *(longlong **)(lVar2 + 0x1a0);
      uVar3 = (longlong)*(int *)(lVar2 + 0x1a8) & 0x1fffffffffffffff;
      if (plVar6 + *(int *)(lVar2 + 0x1a8) < plVar6) {
        uVar3 = uVar7;
      }
      if (uVar3 != 0) {
        do {
          lVar2 = *plVar6;
          if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x118) != *(longlong *)(param_2 + 0x2d8))) {
            local_b8 = 0xffffffff;
            local_88 = _DAT_146af03e0 & _DAT_146af03f0;
            uStack_84 = uRam0000000146af03e4 & uRam0000000146af03f4;
            uStack_80 = uRam0000000146af03e8 & uRam0000000146af03f8;
            uStack_7c = uRam0000000146af03ec & uRam0000000146af03fc;
            local_a8 = 0;
            lStack_a0 = (ulonglong)uRam0000000146af03ec << 0x20;
            local_b4 = 0;
            uStack_b0 = 0;
            local_ac = 0;
            local_98 = 0;
            uStack_90 = 0;
            FWeakObjectPtr::operator=(&local_b8);
            uStack_b0 = (undefined4)*(undefined8 *)(lVar2 + 0x198);
            local_ac = (undefined4)((ulonglong)*(undefined8 *)(lVar2 + 0x198) >> 0x20);
            puVar4 = (undefined8 *)FUN_14238d0c0(lVar2,local_78);
            iVar1 = *(int *)(param_1 + 0xf);
            local_a8 = *puVar4;
            lStack_a0 = puVar4[1];
            local_98 = puVar4[2];
            uStack_90 = puVar4[3];
            local_88 = *(uint *)(puVar4 + 4);
            uStack_84 = *(undefined4 *)((longlong)puVar4 + 0x24);
            uStack_80 = *(uint *)(puVar4 + 5);
            uStack_7c = *(undefined4 *)((longlong)puVar4 + 0x2c);
            *(int *)(param_1 + 0xf) = iVar1 + 1;
            if (*(int *)((longlong)param_1 + 0x7c) < iVar1 + 1) {
              TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<64,8>_>,FDefaultAllocator>::
              ResizeGrow(param_1 + 0xe,iVar1);
            }
            puVar5 = (undefined4 *)((longlong)iVar1 * 0x40 + param_1[0xe]);
            *puVar5 = local_b8;
            puVar5[1] = local_b4;
            *(ulonglong *)(puVar5 + 2) = CONCAT44(local_ac,uStack_b0);
            *(undefined8 *)(puVar5 + 4) = local_a8;
            *(longlong *)(puVar5 + 6) = lStack_a0;
            *(undefined8 *)(puVar5 + 8) = local_98;
            *(undefined8 *)(puVar5 + 10) = uStack_90;
            puVar5[0xc] = local_88;
            puVar5[0xd] = uStack_84;
            puVar5[0xe] = uStack_80;
            puVar5[0xf] = uStack_7c;
          }
          plVar6 = plVar6 + 1;
          uVar7 = uVar7 + 1;
        } while (uVar7 != uVar3);
      }
    }
  }
  return param_1;
}



// FUNCTION 14235d070 FUN_14235d070 body=744 status=ok
// SIG undefined FUN_14235d070(void)

undefined8 * FUN_14235d070(undefined8 *param_1,longlong param_2)

{
  float fVar1;
  bool bVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 local_48 [64];
  
  FUN_14235d360();
  *param_1 = &PTR_FUN_145052488;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_2 + 0x430) & 1;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = *(undefined4 *)(param_2 + 0x434);
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x438);
  *(undefined8 *)((longlong)param_1 + 0x1cc) = *(undefined8 *)(param_2 + 0x43c);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x444);
  iVar4 = *(int *)(param_2 + 0x454);
  if (iVar4 < 1) {
    iVar4 = 0;
  }
  *(int *)((longlong)param_1 + 0x1dc) = iVar4;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)((longlong)param_1 + 0x1e4) = *(undefined4 *)(param_2 + 0x45c);
  *(undefined4 *)(param_1 + 0x3d) = *(undefined4 *)(param_2 + 0x460);
  *(byte *)((longlong)param_1 + 0x1ec) = *(byte *)(param_2 + 0x464) & 1;
  if (*(char *)(param_2 + 0x398) == '\0') {
    uVar8 = 0;
  }
  else {
    uVar8 = *(undefined4 *)(param_2 + 0x470);
  }
  *(undefined4 *)(param_1 + 0x3e) = uVar8;
  *(undefined4 *)((longlong)param_1 + 500) = *(undefined4 *)(param_2 + 0x474);
  *(undefined4 *)(param_1 + 0x3f) = *(undefined4 *)(param_2 + 0x478);
  fVar10 = *(float *)(param_2 + 0x47c);
  fVar9 = 1000.0;
  if ((1000.0 <= fVar10) && (fVar9 = fVar10, 1e+06 <= fVar10)) {
    fVar9 = 1e+06;
  }
  *(float *)((longlong)param_1 + 0x1fc) = fVar9;
  fVar10 = *(float *)(param_1 + 0x3a);
  fVar9 = *(float *)((longlong)param_1 + 0x1cc);
  fVar1 = *(float *)((longlong)param_1 + 0x1d4);
  fVar11 = fVar9 * fVar9 + fVar10 * fVar10 + fVar1 * fVar1;
  if (1e-08 < fVar11) {
    auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
    fVar12 = auVar13._0_4_;
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    fVar12 = fVar12 + fVar12 * (0.5 - fVar11 * 0.5 * fVar12 * fVar12);
    *(float *)((longlong)param_1 + 0x1cc) = fVar9 * fVar12;
    *(float *)(param_1 + 0x3a) = fVar10 * fVar12;
    *(float *)((longlong)param_1 + 0x1d4) = fVar1 * fVar12;
  }
  if (*(char *)(param_2 + 0x24e) == '\x02') {
    fVar10 = *(float *)(param_2 + 0x44c);
  }
  else {
    fVar10 = *(float *)(param_2 + 0x450);
  }
  *(float *)(param_1 + 0x3b) = fVar10;
  iVar4 = *DAT_146af0488;
  if (*DAT_146af0488 < 0) {
    iVar4 = *(int *)(param_2 + 0x468);
  }
  if ((iVar4 != 0) && (100.0 < *(float *)(param_2 + 0x46c) - fVar10)) {
    *(float *)((longlong)param_1 + 0x1a4) = *(float *)(param_2 + 0x46c);
    *(int *)(param_1 + 0x35) = iVar4;
  }
  if (-1 < *DAT_146af04a0) {
    *(int *)((longlong)param_1 + 0x1dc) = *DAT_146af04a0;
  }
  lVar5 = FUN_14233fea0(param_2);
  if (lVar5 == 0) {
    bVar2 = true;
  }
  else {
    bVar2 = 1 < *(int *)(lVar5 + 8);
  }
  uVar7 = 0;
  if (((*(char *)(param_2 + 0x24e) == '\x01') && (uVar7 = 0, (*(byte *)(param_2 + 0x464) & 1) == 0))
     && (!bVar2)) {
    uVar7 = 0x40000;
  }
  uVar7 = *(uint *)(param_1 + 0x30) & 0xfffbffff | uVar7;
  *(uint *)(param_1 + 0x30) = uVar7;
  *(uint *)(param_1 + 0x30) = (*(int *)(param_2 + 0x490) << 0x11 ^ uVar7) & 0x20000 ^ uVar7;
  puVar6 = (undefined8 *)FLinearColor::FLinearColor(local_48,param_2 + 0x494);
  uVar3 = puVar6[1];
  *(undefined8 *)((longlong)param_1 + 0x1ac) = *puVar6;
  *(undefined8 *)((longlong)param_1 + 0x1b4) = uVar3;
  return param_1;
}



// FUNCTION 14235d360 FUN_14235d360 body=1754 status=ok
// SIG undefined FUN_14235d360(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14235d360(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  byte bVar3;
  undefined1 uVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  DWORD DVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  undefined4 *puVar14;
  float *pfVar15;
  longlong lVar16;
  longlong *plVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  longlong lVar24;
  float fVar25;
  float local_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  param_1[2] = param_2;
  *param_1 = &PTR_FUN_14504f408;
  uVar12 = FUN_14233fea0(param_2);
  param_1[3] = uVar12;
  lVar16 = 0;
  param_1[4] = 0;
  uVar12 = _DAT_1464aa7d8;
  uVar19 = 0;
  param_1[6] = _DAT_1464aa7d0;
  param_1[7] = uVar12;
  uVar12 = _DAT_1464aa7e8;
  param_1[8] = _DAT_1464aa7e0;
  param_1[9] = uVar12;
  uVar12 = _DAT_1464aa7f8;
  param_1[10] = _DAT_1464aa7f0;
  param_1[0xb] = uVar12;
  uVar12 = uRam00000001464aa808;
  param_1[0xc] = _DAT_1464aa800;
  param_1[0xd] = uVar12;
  uVar12 = _DAT_1464aa7d8;
  param_1[0xe] = _DAT_1464aa7d0;
  param_1[0xf] = uVar12;
  uVar12 = _DAT_1464aa7e8;
  param_1[0x10] = _DAT_1464aa7e0;
  param_1[0x11] = uVar12;
  uVar12 = _DAT_1464aa7f8;
  param_1[0x12] = _DAT_1464aa7f0;
  param_1[0x13] = uVar12;
  uVar12 = uRam00000001464aa808;
  param_1[0x14] = _DAT_1464aa800;
  param_1[0x15] = uVar12;
  *(undefined4 *)(param_1 + 0x16) = DAT_1464aa810;
  *(undefined4 *)((longlong)param_1 + 0xb4) = DAT_1464aa814;
  *(undefined4 *)(param_1 + 0x17) = DAT_1464aa818;
  *(undefined4 *)((longlong)param_1 + 0xbc) = DAT_1464aa81c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(int *)(param_1 + 0x22) = (int)param_2[0x5e];
  fVar25 = *(float *)((longlong)param_2 + 0x2f4);
  param_1[0x23] = 0;
  if (fVar25 <= 0.0) {
    fVar25 = 0.0;
  }
  *(float *)((longlong)param_1 + 0x114) = fVar25;
  *(int *)(param_1 + 0x24) = (int)param_2[99];
  *(int *)((longlong)param_1 + 0x124) = (int)param_2[0x68];
  *(undefined4 *)(param_1 + 0x25) = *(undefined4 *)((longlong)param_2 + 0x344);
  *(int *)((longlong)param_1 + 300) = (int)param_2[0x69];
  *(byte *)(param_1 + 0x26) =
       *(byte *)(param_1 + 0x26) ^
       (*(byte *)(param_1 + 0x26) ^ *(byte *)((longlong)param_2 + 0x34c)) & 1;
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)((longlong)param_2 + 0x314);
  lVar13 = param_2[0x5a];
  uVar11 = *(undefined4 *)((longlong)param_2 + 0x2d4);
  lVar24 = param_2[0x5b];
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x2dc);
  uVar22 = *(uint *)(param_1 + 0x30);
  param_1[0x2f] = 0;
  *(uint *)(param_1 + 0x30) = uVar22 & 0xfffffffe;
  *(int *)(param_1 + 0x27) = (int)lVar13;
  *(undefined4 *)((longlong)param_1 + 0x13c) = uVar11;
  *(int *)(param_1 + 0x28) = (int)lVar24;
  *(undefined4 *)((longlong)param_1 + 0x144) = uVar1;
  uVar23 = uVar19;
  if (*(char *)((longlong)param_2 + 0x24e) == '\x02') {
    uVar23 = 2;
  }
  *(uint *)(param_1 + 0x30) = uVar23 | uVar22 & 0xfffffffc;
  if ((param_2[0x23] == 0) || (uVar6 = 4, *(char *)((longlong)param_2 + 0x24e) != '\0')) {
    uVar6 = uVar19;
  }
  *(uint *)(param_1 + 0x30) = uVar23 | uVar22 & 0xfffffff8 | uVar6;
  uVar7 = 0;
  if ((param_2[0x23] == 0) || (uVar8 = 8, *(char *)((longlong)param_2 + 0x24e) == '\x02')) {
    uVar8 = uVar7;
  }
  *(uint *)(param_1 + 0x30) = uVar23 | uVar22 & 0xfffffff0 | uVar6 | uVar8;
  uVar18 = uVar7;
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x2ec) & 10) == 10) {
    uVar18 = 0x10;
  }
  *(uint *)(param_1 + 0x30) = uVar18 | uVar23 | uVar22 & 0xffffffe0 | uVar6 | uVar8;
  uVar21 = uVar19;
  if (((byte)*(undefined4 *)((longlong)param_2 + 0x2ec) & 6) == 6) {
    uVar21 = 0x20;
  }
  uVar21 = uVar21 | uVar18 | uVar23 | uVar22 & 0xffffffc0 | uVar6 | uVar8;
  *(uint *)(param_1 + 0x30) = uVar21;
  uVar21 = uVar21 ^ (*(int *)((longlong)param_2 + 0x34c) << 4 ^ uVar21) & 0x40;
  uVar22 = uVar21 & 0xffffff7f;
  *(uint *)(param_1 + 0x30) = uVar22;
  if (((*(byte *)((longlong)param_2 + 0x2ec) & 0x20) == 0) ||
     (uVar23 = 0x100, ((byte)uVar22 & 0x18) != 0x10)) {
    uVar23 = uVar19;
  }
  uVar23 = uVar21 & 0xfffffe7f | uVar23;
  *(uint *)(param_1 + 0x30) = uVar23;
  uVar23 = uVar23 ^ (*(int *)((longlong)param_2 + 0x2ec) << 3 ^ uVar23) & 0x200;
  *(uint *)(param_1 + 0x30) = uVar23;
  uVar23 = uVar23 ^ (*(int *)((longlong)param_2 + 0x34c) << 7 ^ uVar23) & 0x400;
  *(uint *)(param_1 + 0x30) = uVar23;
  uVar23 = uVar23 ^ (*(int *)((longlong)param_2 + 0x34c) << 6 ^ uVar23) & 0x800;
  *(uint *)(param_1 + 0x30) = uVar23;
  *(uint *)(param_1 + 0x30) = (*(int *)((longlong)param_2 + 0x2ec) << 8 ^ uVar23) & 0x1000 ^ uVar23;
  bVar3 = (**(code **)(*param_2 + 0x588))(param_2);
  uVar19 = ((uint)bVar3 << 0xd ^ *(uint *)(param_1 + 0x30)) & 0x2000 ^ *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar19;
  *(uint *)(param_1 + 0x30) = (*(int *)((longlong)param_2 + 0x34c) << 10 ^ uVar19) & 0x4000 ^ uVar19
  ;
  if ((*(byte *)((longlong)param_2 + 0x34c) & 0x10) != 0) {
    iVar9 = (**(code **)(*param_2 + 0x570))(param_2);
    uVar19 = 0x8000;
    if (iVar9 == 0) goto LAB_14235d6d4;
  }
  uVar19 = uVar7;
LAB_14235d6d4:
  uVar19 = *(uint *)(param_1 + 0x30) & 0xffff7fff | uVar19;
  *(uint *)(param_1 + 0x30) = uVar19;
  *(uint *)(param_1 + 0x30) =
       (uVar19 ^ ((uint)*(byte *)(param_2 + 0x73) << 0x10 ^ uVar19) & 0x10000) & 0xfff1ffff;
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x39c);
  uVar4 = (**(code **)(*param_2 + 0x570))(param_2);
  *(undefined1 *)(param_1 + 0x31) = uVar4;
  *(byte *)((longlong)param_1 + 0x189) = *(byte *)(param_2 + 0x6a) & 7;
  if (param_2[0x23] == 0) {
    lVar13 = param_2[3];
  }
  else {
    lVar13 = *(longlong *)(param_2[0x23] + 0x18);
  }
  param_1[0x32] = lVar13;
  lVar13 = UObjectBaseUtility::GetOutermost(param_2);
  pvVar2 = ThreadLocalStoragePointer;
  param_1[0x33] = *(undefined8 *)(lVar13 + 0x18);
  uVar20 = (ulonglong)_tls_index;
  *(undefined8 *)((longlong)param_1 + 0x1a4) = 0;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar20 * 8) + 0x38) < DAT_146af0670) &&
     (_Init_thread_header(&DAT_146af0670), DAT_146af0670 == -1)) {
    if (DAT_1468b1f88 == (longlong *)0x0) {
      IConsoleManager::SetupSingleton();
    }
    plVar17 = (longlong *)
              (**(code **)(*DAT_1468b1f88 + 0x98))(DAT_1468b1f88,L"r.AllowReflectiveShadowMaps");
    lVar13 = lVar16;
    if (plVar17 != (longlong *)0x0) {
      lVar13 = (**(code **)(*plVar17 + 0x38))(plVar17);
    }
    DAT_146af0668 = lVar13;
    _Init_thread_footer(&DAT_146af0670);
  }
  lVar13 = DAT_146af0668;
  if (DAT_146af0668 != 0) {
    cVar5 = FUN_1415ad720(&DAT_1468e2448);
    if (((cVar5 != '\0') || (DAT_1468c21ae == '\0')) ||
       (DVar10 = GetCurrentThreadId(), lVar24 = 4, DVar10 == DAT_1468c21c0)) {
      lVar24 = lVar16;
    }
    if (*(int *)(lVar24 + lVar13) == 0) {
      *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffff7fff;
    }
  }
  puVar14 = (undefined4 *)FUN_14236c8f0(param_2);
  if (((puVar14 == (undefined4 *)0x0) || ((*(uint *)(param_1 + 0x30) & 8) == 0)) ||
     ((*(uint *)(param_1 + 0x30) & 4) != 0)) {
    uVar11 = 0xffffffff;
  }
  else {
    uVar11 = *puVar14;
  }
  *(undefined4 *)(param_1 + 0x29) = uVar11;
  iVar9 = *(int *)((longlong)param_2 + 0x30c);
  if (iVar9 == -1) {
    iVar9 = *(int *)(param_1 + 0x29);
  }
  *(int *)((longlong)param_1 + 0x14c) = iVar9;
  param_1[0x2a] = param_1[2] + 0x3b0;
  fStack_1c = (float)(**(code **)(*param_2 + 0x590))(param_2);
  if (*(longlong *)(param_1[2] + 0x370) != 0) {
    param_1[0x2f] = *(longlong *)(param_1[2] + 0x370);
  }
  pfVar15 = (float *)FLinearColor::FLinearColor(&local_28,param_2 + 0x5d);
  local_28 = fStack_1c * *pfVar15;
  fStack_24 = fStack_1c * pfVar15[1];
  fStack_20 = fStack_1c * pfVar15[2];
  fStack_1c = fStack_1c * pfVar15[3];
  *(float *)(param_1 + 0x20) = local_28;
  *(float *)((longlong)param_1 + 0x104) = fStack_24;
  *(float *)(param_1 + 0x21) = fStack_20;
  *(float *)((longlong)param_1 + 0x10c) = fStack_1c;
  if ((*(byte *)((longlong)param_2 + 0x304) & 1) != 0) {
    pfVar15 = (float *)FLinearColor::MakeFromColorTemperature(&local_28,(int)param_2[0x5f]);
    *(float *)(param_1 + 0x20) = *pfVar15 * *(float *)(param_1 + 0x20);
    *(float *)((longlong)param_1 + 0x104) = pfVar15[1] * *(float *)((longlong)param_1 + 0x104);
    *(float *)(param_1 + 0x21) = pfVar15[2] * *(float *)(param_1 + 0x21);
    *(float *)((longlong)param_1 + 0x10c) = pfVar15[3] * *(float *)((longlong)param_1 + 0x10c);
  }
  if ((*(longlong **)(param_1[2] + 0x358) != (longlong *)0x0) &&
     (lVar13 = (**(code **)(**(longlong **)(param_1[2] + 0x358) + 0x290))(),
     *(char *)(lVar13 + 0x140) == '\x02')) {
    lVar16 = (**(code **)(**(longlong **)(param_1[2] + 0x358) + 0x2a8))
                       (*(longlong **)(param_1[2] + 0x358),0,0);
  }
  param_1[0x2e] = lVar16;
  lVar16 = param_1[2];
  param_1[0x2b] = *(undefined8 *)(lVar16 + 0x360);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(lVar16 + 0x368);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)(lVar16 + 0x380);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(lVar16 + 900);
  *(uint *)((longlong)param_1 + 0x1bc) =
       *(uint *)((longlong)param_1 + 0x1bc) ^
       ((uint)*(byte *)(lVar16 + 0x351) ^ *(uint *)((longlong)param_1 + 0x1bc)) & 1;
  return param_1;
}



// FUNCTION 14235da40 FUN_14235da40 body=1114 status=ok
// SIG undefined FUN_14235da40(void)

undefined8 * FUN_14235da40(undefined8 *param_1,longlong param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  DWORD DVar7;
  undefined8 uVar8;
  byte *pbVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined8 *local_res18;
  undefined8 *local_res20;
  undefined1 local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [32];
  
  uVar13 = 0;
  local_res10 = 0;
  FUN_14271d7c0(param_1,param_2,0);
  *param_1 = &PTR_FUN_145058470;
  FStaticMeshVertexBuffer::FStaticMeshVertexBuffer(param_1 + 0x74);
  FUN_1426f5920(param_1 + 0x91);
  param_1[0xb2] = 0;
  plVar10 = param_1 + 0xb5;
  param_1[0xb3] = 0;
  *(undefined2 *)(param_1 + 0xb4) = 0;
  *plVar10 = 0;
  iVar2 = *(int *)(param_2 + 0x6f8);
  _Src = *(void **)(param_2 + 0x6f0);
  *(int *)(param_1 + 0xb6) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5b4) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(plVar10,iVar2,0);
    _guard_xfg_dispatch_icall_nop((void *)*plVar10,_Src,(longlong)iVar2 * 0x28);
  }
  param_1[0xb7] = 0;
  puVar12 = param_1 + 0x1a5;
  *(undefined4 *)(param_1 + 0xb8) = DAT_1464aa730;
  *(undefined4 *)(param_1 + 0xba) = *(undefined4 *)(param_1[0x26] + 8);
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  param_1[0x11f] = 0;
  *(undefined1 *)(param_1 + 0x120) = 1;
  *(undefined1 *)((longlong)param_1 + 0x902) = 0;
  param_1[0x181] = 0;
  param_1[0x182] = 0;
  param_1[0x183] = 0;
  param_1[0xb9] = &PTR_FUN_144165fb0;
  param_1[0x184] = 0;
  param_1[0x185] = 0;
  param_1[0x186] = 0;
  param_1[0x187] = 0;
  param_1[0x188] = 0;
  param_1[0x189] = 0;
  param_1[0x192] = 0;
  param_1[0x193] = 0;
  param_1[0x194] = 0;
  param_1[0x199] = 0;
  param_1[0x19a] = 0;
  param_1[0x19b] = 0;
  param_1[0x19c] = 0;
  param_1[0x19d] = 0;
  param_1[0x19e] = 0;
  param_1[0x19f] = 0;
  param_1[0x1a0] = 0;
  param_1[0x1a1] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  lVar11 = 2;
  param_1[0x1a4] = 0;
  param_1[0x1a3] = param_1 + 0x184;
  *(undefined1 *)((longlong)param_1 + 0x901) = 1;
  if (puVar12 <= param_1 + 0x1a6) {
    for (; lVar11 != 0; lVar11 = lVar11 + -1) {
      *(undefined4 *)puVar12 = 0xffffffff;
      puVar12 = (undefined8 *)((longlong)puVar12 + 4);
    }
  }
  if (*(longlong *)(param_2 + 0x118) != 0) {
    uVar8 = AActor::GetLevel();
    FLevelUtils::FindStreamingLevel(uVar8);
  }
  uVar15 = uVar13;
  if (0 < *(int *)(param_1 + 0xb6)) {
    do {
      if (*(longlong *)(uVar15 + *plVar10) != 0) {
        pbVar9 = (byte *)FUN_142592090(*(longlong *)(uVar15 + *plVar10),local_78,
                                       *(undefined4 *)(param_1[0x26] + 8));
        *(byte *)(param_1 + 0xb7) = *(byte *)(param_1 + 0xb7) | *pbVar9;
        *(byte *)((longlong)param_1 + 0x5b9) = *(byte *)((longlong)param_1 + 0x5b9) | pbVar9[1];
        *(byte *)((longlong)param_1 + 0x5ba) = *(byte *)((longlong)param_1 + 0x5ba) | pbVar9[2];
        *(byte *)((longlong)param_1 + 0x5bb) = *(byte *)((longlong)param_1 + 0x5bb) | pbVar9[3];
        *(byte *)((longlong)param_1 + 0x5bc) = *(byte *)((longlong)param_1 + 0x5bc) | pbVar9[4];
        *(byte *)((longlong)param_1 + 0x5bd) = *(byte *)((longlong)param_1 + 0x5bd) | pbVar9[5];
        *(byte *)((longlong)param_1 + 0x5be) = *(byte *)((longlong)param_1 + 0x5be) | pbVar9[6];
        *(byte *)((longlong)param_1 + 0x5bf) = *(byte *)((longlong)param_1 + 0x5bf) | pbVar9[7];
      }
      uVar14 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar14;
      uVar15 = uVar15 + 0x28;
    } while ((int)uVar14 < *(int *)(param_1 + 0xb6));
  }
  (**(code **)(*DAT_146b17150 + 0x308))(DAT_146b17150,param_2,local_res8);
  FLinearColor::FLinearColor(local_70,local_res8);
  FPositionVertexBuffer::Init(param_1 + 0x91,1,1);
  FStaticMeshVertexBuffer::Init(param_1 + 0x74,1,1,1);
  if (*(int *)(param_1 + 0xb3) < 1) {
    iVar2 = *(int *)(param_1 + 0xb3);
    *(int *)(param_1 + 0xb3) = iVar2 + 1;
    if (*(int *)((longlong)param_1 + 0x59c) < iVar2 + 1) {
      FUN_14089e280(param_1 + 0x9c,iVar2);
    }
    puVar12 = (undefined8 *)param_1[0xb2];
    if ((undefined8 *)param_1[0xb2] == (undefined8 *)0x0) {
      puVar12 = param_1 + 0x9c;
    }
    FUN_14271d780(puVar12 + (longlong)iVar2 * 0xb);
  }
  puVar12 = (undefined8 *)param_1[0xb2];
  if ((undefined8 *)param_1[0xb2] == (undefined8 *)0x0) {
    puVar12 = param_1 + 0x9c;
  }
  FColorVertexBuffer::Init(puVar12,1);
  local_res18 = param_1;
  if ((DAT_146ac3ac6 != '\0') && (cVar6 = IsInRenderingThread(), cVar6 != '\0')) {
    uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14235fa20(&local_res18,uVar8);
    return param_1;
  }
  if ((DAT_146ac3ac5 == '\0') &&
     (((cVar6 = FUN_1415ad720(&DAT_1468e2448), cVar6 != '\0' || (DAT_1468c21ae == '\0')) ||
      (DVar7 = GetCurrentThreadId(), DVar7 == DAT_1468c21c0)))) {
    local_res20 = param_1;
    uVar8 = FBaseGraphTask::GetSmallTaskAllocator();
    FUN_14235fa20(&local_res20,uVar8);
    return param_1;
  }
  plVar10 = (longlong *)FUN_1423673e0(local_60,0,0xff);
  *(undefined8 **)(*plVar10 + 0x10) = param_1;
  lVar11 = *plVar10;
  lVar5 = plVar10[2];
  lVar3 = plVar10[1];
  lVar4 = *(longlong *)(lVar11 + 0x20);
  if (lVar4 != 0) {
    LOCK();
    *(int *)(lVar4 + 0x48) = *(int *)(lVar4 + 0x48) + 1;
    UNLOCK();
  }
  FUN_14048a3d0(lVar11,lVar3,(int)lVar5,1);
  if (lVar4 != 0) {
    LOCK();
    piVar1 = (int *)(lVar4 + 0x48);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      FGraphEvent::Recycle(lVar4);
    }
  }
  return param_1;
}



// FUNCTION 14235dea0 FUN_14235dea0 body=581 status=ok
// SIG undefined FUN_14235dea0(void)

undefined8 * FUN_14235dea0(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  FUN_14235d360();
  *param_1 = &PTR_FUN_1450578e0;
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0x2fc);
  *(undefined4 *)((longlong)param_1 + 0x1cc) = *(undefined4 *)(param_2 + 0x300);
  fVar5 = *(float *)(param_2 + 0x438);
  *(float *)((longlong)param_1 + 0x11c) = fVar5;
  fVar4 = *(float *)(param_2 + 0x434);
  if (0.0 <= fVar4) {
    fVar5 = fVar5 * 0.99999;
    if (fVar4 <= fVar5) {
      fVar5 = fVar4;
    }
  }
  else {
    fVar5 = 0.0;
  }
  *(float *)(param_1 + 0x23) = fVar5;
  *(uint *)(param_1 + 0x30) =
       *(uint *)(param_1 + 0x30) ^
       ((uint)*(byte *)(param_2 + 0x431) << 7 ^ *(uint *)(param_1 + 0x30)) & 0x80;
  fVar5 = *(float *)(param_2 + 0x440);
  uVar2 = *(uint *)(param_1 + 0x30);
  *(float *)(param_1 + 0x38) = fVar5;
  if (fVar5 <= 1e-05) {
    fVar5 = 1e-05;
  }
  *param_1 = &PTR__scalar_deleting_destructor__1450579f0;
  *(float *)((longlong)param_1 + 0x1c4) = 1.0 / fVar5;
  *(undefined4 *)(param_1 + 0x3a) = *(undefined4 *)(param_2 + 0x454);
  *(undefined4 *)((longlong)param_1 + 0x1d4) = *(undefined4 *)(param_2 + 0x458);
  *(undefined4 *)(param_1 + 0x3b) = *(undefined4 *)(param_2 + 0x45c);
  fVar5 = *(float *)(param_2 + 0x460);
  *(float *)((longlong)param_1 + 0x1dc) = fVar5;
  *(uint *)(param_1 + 0x3c) =
       *(uint *)(param_1 + 0x3c) ^ (*(uint *)(param_2 + 0x450) ^ *(uint *)(param_1 + 0x3c)) & 1;
  *(uint *)(param_1 + 0x3c) =
       (*(int *)(param_2 + 0x478) * 2 ^ *(uint *)(param_1 + 0x3c)) & 2 ^ *(uint *)(param_1 + 0x3c);
  fVar4 = *(float *)(param_2 + 0x440);
  *(float *)(param_1 + 0x38) = fVar4;
  if (fVar4 <= 1e-05) {
    fVar4 = 1e-05;
  }
  *(float *)((longlong)param_1 + 0x1c4) = 1.0 / fVar4;
  lVar1 = *(longlong *)(param_2 + 0x468);
  if (lVar1 != 0) {
    local_58 = *(undefined4 *)(lVar1 + 0x220);
    local_54 = *(undefined4 *)(lVar1 + 0x224);
    local_50 = *(undefined4 *)(lVar1 + 0x228);
    local_44 = *(undefined4 *)(lVar1 + 0x2e4);
    local_4c = *(undefined8 *)(lVar1 + 0x2dc);
    local_28 = *(undefined4 *)(lVar1 + 0x210);
    uStack_24 = *(undefined4 *)(lVar1 + 0x214);
    uStack_20 = *(undefined4 *)(lVar1 + 0x218);
    uStack_1c = *(undefined4 *)(lVar1 + 0x21c);
    local_40 = *(undefined8 *)(lVar1 + 0x2d0);
    local_38 = *(undefined4 *)(lVar1 + 0x2d8);
    FUN_142377bd0(param_1,&local_28,&local_58,&local_40,&local_4c);
    fVar5 = *(float *)((longlong)param_1 + 0x1dc);
    uVar2 = *(uint *)(param_1 + 0x30);
  }
  if (fVar5 == 0.0) {
    uVar3 = 0x80000;
  }
  else {
    uVar3 = 0;
  }
  uVar3 = uVar2 & 0xfff7ffff | uVar3;
  *(uint *)(param_1 + 0x30) = uVar3;
  *(uint *)(param_1 + 0x30) = ((uint)*(byte *)(param_2 + 0x431) << 7 ^ uVar3) & 0x80 ^ uVar3;
  return param_1;
}



// FUNCTION 14235e0f0 FUN_14235e0f0 body=67 status=ok
// SIG undefined FUN_14235e0f0(void)

undefined8 * FUN_14235e0f0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_14504ee80;
  param_1[5] = &PTR_LAB_14504f3d8;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) & 0xf7;
  return param_1;
}



// FUNCTION 14235e140 FUN_14235e140 body=137 status=ok
// SIG undefined FUN_14235e140(void)

undefined8 * FUN_14235e140(undefined8 *param_1)

{
  FUN_14237eb90();
  *(byte *)(param_1 + 0xe1) = *(byte *)(param_1 + 0xe1) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145050850;
  *(undefined8 *)((longlong)param_1 + 0x6fc) = 0x3c23d70a;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145051140;
  *(undefined4 *)((longlong)param_1 + 0x704) = 0;
  *(undefined4 *)((longlong)param_1 + 0x70c) = 0x43000000;
  *(undefined4 *)(param_1 + 0xe2) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x714) = 0x43800000;
  param_1[0xe3] = 0;
  *(undefined1 *)((longlong)param_1 + 0x2e6) = 0;
  FUN_142717090(param_1,0);
  return param_1;
}



// FUNCTION 14235e1d0 FUN_14235e1d0 body=277 status=ok
// SIG undefined FUN_14235e1d0(void)

undefined8 * FUN_14235e1d0(undefined8 *param_1)

{
  FUN_14235e8e0();
  *param_1 = &PTR__scalar_deleting_destructor__145051ea0;
  param_1[5] = &PTR_LAB_145052458;
  *(undefined4 *)(param_1 + 0x90) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0x40000000;
  *(undefined1 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3f800000;
  *(uint *)(param_1 + 0x86) = *(uint *)(param_1 + 0x86) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x34c) = *(uint *)((longlong)param_1 + 0x34c) | 4;
  *(uint *)((longlong)param_1 + 0x464) = *(uint *)((longlong)param_1 + 0x464) | 1;
  *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) | 0x40;
  *(undefined4 *)((longlong)param_1 + 0x494) = 0xff808080;
  *(undefined4 *)(param_1 + 0x87) = 0x47c35000;
  *(undefined4 *)((longlong)param_1 + 0x434) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x89) = 0x469c4000;
  *(undefined4 *)((longlong)param_1 + 0x44c) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x8a) = 0x461c4000;
  *(undefined4 *)(param_1 + 0x8e) = 0x46ea6000;
  *(undefined4 *)((longlong)param_1 + 0x47c) = 0x461c4000;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0x48927c00;
  *(undefined8 *)((longlong)param_1 + 0x474) = 0x3f0923a3;
  *(undefined4 *)((longlong)param_1 + 0x454) = 3;
  *(undefined4 *)(param_1 + 0x8b) = 0x40400000;
  *(undefined4 *)((longlong)param_1 + 0x45c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x8c) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235e2f0 FUN_14235e2f0 body=164 status=ok
// SIG undefined FUN_14235e2f0(void)

undefined8 * FUN_14235e2f0(undefined8 *param_1)

{
  FUN_14237eb90();
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *param_1 = &PTR_FUN_1450527f0;
  param_1[5] = &PTR_LAB_145047c50;
  param_1[0x5a] = &PTR_LAB_145047c80;
  *(undefined4 *)((longlong)param_1 + 0x6f4) = 0x42b40000;
  *(undefined4 *)(param_1 + 0xdf) = 0x3faaaaa8;
  *(undefined4 *)((longlong)param_1 + 0x6fc) = 0x42c80000;
  *(undefined4 *)(param_1 + 0xe0) = 0x447a0000;
  *(undefined4 *)(param_1 + 0xde) = 0xffff00ff;
  FUN_142717130(param_1,DAT_146aefc58);
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 14235e3a0 FUN_14235e3a0 body=97 status=ok
// SIG undefined FUN_14235e3a0(void)

undefined8 * FUN_14235e3a0(undefined8 *param_1)

{
  FUN_1423a0b90();
  *param_1 = &PTR__scalar_deleting_destructor__145053250;
  param_1[5] = &PTR_LAB_1450491d8;
  param_1[0x5a] = &PTR_LAB_145049208;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  FUN_1423974f0(param_1,0);
  return param_1;
}



// FUNCTION 14235e410 FUN_14235e410 body=245 status=ok
// SIG undefined FUN_14235e410(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14235e410(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145055010;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x3f2353f83ee4dd2f;
  *(undefined8 *)((longlong)param_1 + 0x2e4) = 0x3f8000003f800000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x40800000;
  param_1[5] = &PTR_LAB_145055558;
  *(undefined8 *)((longlong)param_1 + 0x31c) = 0x3e8000003e800000;
  *(undefined8 *)((longlong)param_1 + 0x324) = 0x3f8000003e000000;
  *(undefined4 *)(param_1 + 99) = 0x461c4000;
  uVar2 = _DAT_1464aa6c8;
  uVar1 = _DAT_1464aa6c0;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0x47c35000;
  *(undefined4 *)(param_1 + 0x62) = 0x447a0000;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x304) = uVar2;
  *(undefined4 *)(param_1 + 0x5a) = 0x3ca3d70a;
  *(undefined4 *)((longlong)param_1 + 0x32c) = 0x3e4ccccd;
  param_1[0x66] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x67) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0x3e4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x344) = DAT_1464aa730;
  *(undefined4 *)(param_1 + 0x6b) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 0x45bb8000;
  *(undefined4 *)(param_1 + 0x6c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x365) = 0;
  *(undefined4 *)(param_1 + 0x6d) = 0x447a0000;
  *(undefined1 *)((longlong)param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  return param_1;
}



// FUNCTION 14235e510 FUN_14235e510 body=180 status=ok
// SIG undefined FUN_14235e510(void)

undefined8 * FUN_14235e510(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145053ba0;
  param_1[5] = &PTR_LAB_1450540f8;
  param_1[0x5d] = &PTR_FUN_143f48bb8;
  *(undefined2 *)(param_1 + 0x5e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0xc2700000;
  param_1[0x5f] = 0x43c80000;
  param_1[0x60] = 0;
  *(undefined4 *)(param_1 + 0x61) = 0x45610000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x62);
  param_1[0x5d] = &PTR_FUN_143f48bb8;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(byte *)(param_1 + 0x5b) = *(byte *)(param_1 + 0x5b) | 4;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined4 *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235e5d0 FUN_14235e5d0 body=165 status=ok
// SIG undefined FUN_14235e5d0(void)

undefined8 * FUN_14235e5d0(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145054128;
  param_1[5] = &PTR_LAB_145054670;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 2;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) | 2;
  param_1[0x5a] = 0x3f7333333f733333;
  *(undefined4 *)(param_1 + 0x5b) = 0x3f733333;
  *(undefined8 *)((longlong)param_1 + 0x2dc) = 0x42c8000042c80000;
  *(undefined4 *)((longlong)param_1 + 0x2e4) = 0x42c80000;
  return param_1;
}



// FUNCTION 14235e680 FUN_14235e680 body=195 status=ok
// SIG undefined FUN_14235e680(void)

undefined8 * FUN_14235e680(undefined8 *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_14237eb90();
  lVar1 = param_1[0x23];
  *param_1 = &PTR_FUN_1450546a0;
  param_1[5] = &PTR_LAB_145054f88;
  param_1[0x5a] = &PTR_LAB_145054fb8;
  param_1[0xdf] = 0x3f800000;
  *(undefined2 *)(param_1 + 0xe0) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x364) = 0x40800000;
  if (lVar1 != 0) {
    lVar3 = APlayerState::GetPrivateStaticClass();
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
      param_1[0xea] = lVar1;
      return param_1;
    }
  }
  param_1[0xea] = 0;
  return param_1;
}



// FUNCTION 14235e750 FUN_14235e750 body=165 status=ok
// SIG undefined FUN_14235e750(void)

undefined8 * FUN_14235e750(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_14504fec0;
  param_1[5] = &PTR_LAB_1450502d0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(byte *)((longlong)param_1 + 0x1fc) = *(byte *)((longlong)param_1 + 0x1fc) & 0xfe;
  return param_1;
}



// FUNCTION 14235e800 FUN_14235e800 body=220 status=ok
// SIG undefined FUN_14235e800(void)

undefined8 * FUN_14235e800(undefined8 *param_1)

{
  FUN_14235ee30();
  *param_1 = &PTR_FUN_145055c78;
  param_1[5] = &PTR_LAB_1450561b8;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x1cc) = *(uint *)((longlong)param_1 + 0x1cc) & 0xfffffffd;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined2 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x3d4ccccd;
  *(undefined4 *)((longlong)param_1 + 0x224) = 8;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x48) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235e8e0 FUN_14235e8e0 body=555 status=ok
// SIG undefined FUN_14235e8e0(void)

undefined8 * FUN_14235e8e0(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145051198;
  param_1[5] = &PTR_LAB_14504f3d8;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x40490fdb;
  uVar1 = DAT_1464aa730;
  *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) | 0xf;
  *(undefined4 *)(param_1 + 0x5d) = uVar1;
  *param_1 = &PTR__scalar_deleting_destructor__145051748;
  param_1[5] = &PTR_LAB_145051d00;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  *(byte *)(param_1 + 0x6a) = *(byte *)(param_1 + 0x6a) & 0xf9 | 1;
  *(undefined4 *)(param_1 + 0x77) = 4;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0xc7efffffe0000000;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x76] = &PTR__scalar_deleting_destructor__1450516e8;
  *(undefined2 *)((longlong)param_1 + 0x414) = 0;
  *(undefined1 *)((longlong)param_1 + 0x416) = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  *(uint *)((longlong)param_1 + 0x34c) = *(uint *)((longlong)param_1 + 0x34c) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) & 0xfffffffe;
  *(uint *)(param_1 + 0x6f) = *(uint *)(param_1 + 0x6f) & 0xfffffffe;
  *(uint *)(param_1 + 0x71) = *(uint *)(param_1 + 0x71) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) & 0xffffffdf | 0x10;
  param_1[0x6c] = 0x4480000044800000;
  *(undefined4 *)(param_1 + 0x6d) = 0x44800000;
  *(undefined4 *)(param_1 + 0x5f) = 0x45cb2000;
  *(undefined4 *)((longlong)param_1 + 0x30c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x5e) = 0x3f800000;
  *(undefined4 *)(param_1 + 99) = 0x3f800000;
  param_1[0x68] = 0x3f000000;
  *(undefined4 *)(param_1 + 0x69) = 0;
  *(undefined4 *)((longlong)param_1 + 0x37c) = 0x3f800000;
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0x47c35000;
  *(undefined4 *)((longlong)param_1 + 900) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0x3e4ccccd;
  uVar1 = DAT_1464aa730;
  *(uint *)(param_1 + 0x85) = *(uint *)(param_1 + 0x85) & 0xfffffffe;
  *(uint *)((longlong)param_1 + 0x34c) = *(uint *)((longlong)param_1 + 0x34c) & 0xffffffdf;
  *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x394) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x39c) = 0x3b449ba6;
  *(undefined8 *)((longlong)param_1 + 0x2fc) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3a4) = 0x800;
  return param_1;
}



// FUNCTION 14235eb10 FUN_14235eb10 body=99 status=ok
// SIG undefined FUN_14235eb10(void)

undefined8 * FUN_14235eb10(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145051198;
  param_1[5] = &PTR_LAB_14504f3d8;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0x40490fdb;
  uVar1 = DAT_1464aa730;
  *(uint *)((longlong)param_1 + 0x2ec) = *(uint *)((longlong)param_1 + 0x2ec) | 0xf;
  *(undefined4 *)(param_1 + 0x5d) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x2f4) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235eb80 FUN_14235eb80 body=51 status=ok
// SIG undefined FUN_14235eb80(void)

undefined8 * FUN_14235eb80(undefined8 *param_1)

{
  FUN_14237f6c0();
  *param_1 = &PTR_FUN_145059da0;
  param_1[5] = &PTR_LAB_1442116d8;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  return param_1;
}



// FUNCTION 14235ebc0 FUN_14235ebc0 body=176 status=ok
// SIG undefined FUN_14235ebc0(void)

undefined8 * FUN_14235ebc0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145056de8;
  param_1[5] = &PTR_LAB_1450576e0;
  param_1[0x5a] = &PTR_LAB_145057710;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(byte *)((longlong)param_1 + 0xb9) = *(byte *)((longlong)param_1 + 0xb9) | 0x20;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  FUN_142717130(param_1,DAT_146aefc58);
  *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) | 0x40;
  FUN_1423974f0(param_1,0);
  *(uint *)(param_1 + 0xe5) = *(uint *)(param_1 + 0xe5) | 1;
  *(byte *)((longlong)param_1 + 0x2ee) = *(byte *)((longlong)param_1 + 0x2ee) | 0x20;
  *(undefined4 *)(param_1 + 0xe2) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235ec70 FUN_14235ec70 body=91 status=ok
// SIG undefined FUN_14235ec70(void)

undefined8 * FUN_14235ec70(undefined8 *param_1)

{
  FUN_14235e8e0();
  *param_1 = &PTR_FUN_1450561e8;
  param_1[5] = &PTR_LAB_1450567a0;
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x89) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x44800000;
  *(undefined4 *)(param_1 + 0x88) = 0x447a0000;
  return param_1;
}



// FUNCTION 14235ecd0 FUN_14235ecd0 body=89 status=ok
// SIG undefined FUN_14235ecd0(void)

undefined8 * FUN_14235ecd0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_145057b00;
  param_1[5] = &PTR_LAB_1450583e8;
  param_1[0x5a] = &PTR_LAB_145058418;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  FUN_142717130(param_1,DAT_146aefc58);
  return param_1;
}



// FUNCTION 14235ed30 FUN_14235ed30 body=109 status=ok
// SIG undefined FUN_14235ed30(void)

undefined8 * FUN_14235ed30(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_14504f510;
  param_1[5] = &PTR_LAB_14504fe38;
  param_1[0x5a] = &PTR_LAB_14504fe68;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 0x11;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 1;
  *(uint *)(param_1 + 0xe2) = *(uint *)(param_1 + 0xe2) | 1;
  return param_1;
}



// FUNCTION 14235eda0 FUN_14235eda0 body=140 status=ok
// SIG undefined FUN_14235eda0(void)

undefined8 * FUN_14235eda0(undefined8 *param_1)

{
  FUN_14237eb90();
  *param_1 = &PTR_FUN_1450585e8;
  param_1[5] = &PTR_LAB_145058ed0;
  param_1[0x5a] = &PTR_LAB_145058f00;
  param_1[0xde] = &PTR_LAB_145058f58;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) | 0x11;
  *(undefined1 *)((longlong)param_1 + 0x24e) = 0;
  FUN_1423974f0(param_1,0);
  FUN_142717130(param_1,DAT_146aefc60);
  return param_1;
}



// FUNCTION 14235ee30 FUN_14235ee30 body=141 status=ok
// SIG undefined FUN_14235ee30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14235ee30(undefined8 *param_1)

{
  undefined4 uVar1;
  
  FUN_142326e40();
  *param_1 = &PTR__scalar_deleting_destructor__145050300;
  param_1[5] = &PTR_LAB_145050818;
  *(undefined1 *)(param_1 + 7) = 0;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) & 0xfffffffe;
  *(uint *)(param_1 + 0x37) = *(uint *)(param_1 + 0x37) | 0xe;
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) | 2;
  *(undefined4 *)(param_1 + 0x31) = 0;
  param_1[0x34] = _DAT_1468b5d90;
  uVar1 = DAT_1468b5d98;
  *(uint *)(param_1 + 0x33) = *(uint *)(param_1 + 0x33) & 0xfffffffc;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(byte *)((longlong)param_1 + 0xba) = *(byte *)((longlong)param_1 + 0xba) | 2;
  *(undefined4 *)(param_1 + 0x35) = uVar1;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined2 *)((longlong)param_1 + 0x1bc) = 0;
  return param_1;
}



// FUNCTION 14235eec0 FUN_14235eec0 body=139 status=ok
// SIG undefined FUN_14235eec0(void)

undefined8 * FUN_14235eec0(undefined8 *param_1)

{
  FUN_14235ee30();
  *param_1 = &PTR_FUN_145058fa0;
  param_1[5] = &PTR_LAB_145059518;
  *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) & 0xffffffe0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x39) = 0xbf800000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x3a) = 0x3f000000;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(uint *)((longlong)param_1 + 500) = *(uint *)((longlong)param_1 + 500) & 0xfffffff9 | 9;
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xffffffe0;
  return param_1;
}



// FUNCTION 14235ef50 FUN_14235ef50 body=65 status=ok
// SIG undefined FUN_14235ef50(void)

undefined8 * FUN_14235ef50(undefined8 *param_1)

{
  FUN_142326e40();
  *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfd;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) | 1;
  *param_1 = &PTR__scalar_deleting_destructor__145059548;
  param_1[5] = &PTR_LAB_144ee2590;
  *(undefined4 *)(param_1 + 0x31) = 0x3f800000;
  return param_1;
}



// FUNCTION 14235efa0 FUN_14235efa0 body=74 status=ok
// SIG undefined FUN_14235efa0(void)

undefined8 * FUN_14235efa0(undefined8 *param_1)

{
  FUN_142326e40();
  *param_1 = &PTR_FUN_145059948;
  param_1[5] = &PTR_LAB_145059d40;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return param_1;
}



// FUNCTION 14235eff0 FUN_14235eff0 body=120 status=ok
// SIG undefined FUN_14235eff0(void)

undefined8 * FUN_14235eff0(undefined8 *param_1)

{
  FUN_14235e8e0();
  *(undefined4 *)((longlong)param_1 + 0x444) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x89) = 0x40000000;
  *(undefined1 *)((longlong)param_1 + 0x44c) = 0;
  *param_1 = &PTR_FUN_1450567d0;
  param_1[5] = &PTR_LAB_145056d88;
  *(undefined4 *)((longlong)param_1 + 0x43c) = 0x44800000;
  *(undefined4 *)(param_1 + 0x88) = 0x447a0000;
  param_1[0x8e] = 0;
  *(uint *)(param_1 + 0x8f) = *(uint *)(param_1 + 0x8f) & 0xfffffffe;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return param_1;
}



// FUNCTION 14235f070 FUN_14235f070 body=86 status=ok
// SIG undefined FUN_14235f070(void)

undefined8 * FUN_14235f070(undefined8 *param_1)

{
  FUN_1423a07f0();
  *param_1 = &PTR_FUN_14505a2e8;
  param_1[5] = &PTR_LAB_14505ad10;
  param_1[0x5a] = &PTR_LAB_14505ad40;
  param_1[0x146] = 0;
  param_1[0x147] = 0;
  FBoneContainer::FBoneContainer(param_1 + 0x148);
  return param_1;
}



// FUNCTION 14235f0d0 ~TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_> body=169 status=ok
// SIG undefined ~TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>(void)

void TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>::
     ~TArray<FCachedKeyToActionInfo,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x50);
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar2 + 2);
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      FUN_140679550(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0xe;
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



// FUNCTION 14235f180 ~TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_> body=168 status=ok
// SIG undefined ~TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>(void)

void TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>::
     ~TArray<FInputAxisKeyBinding,TSizedDefaultAllocator<32>_>(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  lVar5 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    plVar7 = (longlong *)(lVar5 + 0x18);
    do {
      FInputAxisUnifiedDelegate::~FInputAxisUnifiedDelegate(plVar7 + 1);
      plVar4 = (longlong *)*plVar7;
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
      plVar7 = plVar7 + 8;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *param_1;
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14235f230 FUN_14235f230 body=177 status=ok
// SIG undefined FUN_14235f230(void)

void FUN_14235f230(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  lVar7 = *param_1;
  iVar6 = (int)param_1[1];
  if (iVar6 != 0) {
    lVar7 = lVar7 + 0x28;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      plVar4 = *(longlong **)(lVar7 + -0x10);
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
      lVar7 = lVar7 + 0x60;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar7 = *param_1;
  }
  if (lVar7 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14235f2f0 FUN_14235f2f0 body=187 status=ok
// SIG undefined FUN_14235f2f0(void)

void FUN_14235f2f0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  
  lVar1 = *param_1;
  iVar5 = (int)param_1[1];
  if (iVar5 != 0) {
    plVar4 = (longlong *)(lVar1 + 8);
    do {
      if ((int)plVar4[1] == 0) {
        plVar3 = (longlong *)*plVar4;
        plVar2 = (longlong *)0x0;
      }
      else {
        plVar3 = (longlong *)*plVar4;
        plVar2 = plVar3;
      }
      if (plVar2 == (longlong *)0x0) {
        if (((int)plVar4[1] != 0) && (plVar3 != (longlong *)0x0)) {
          lVar1 = *plVar3;
          goto LAB_14235f34e;
        }
      }
      else {
        lVar1 = *plVar2;
        plVar3 = plVar2;
LAB_14235f34e:
        (**(code **)(lVar1 + 0x28))(plVar3,0);
        if (*plVar4 != 0) {
          lVar1 = FMemory::Realloc(*plVar4,0,0);
          *plVar4 = lVar1;
        }
        *(undefined4 *)(plVar4 + 1) = 0;
      }
      if (*plVar4 != 0) {
        FMemory::Free();
      }
      plVar4 = plVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 14235f3b0 FUN_14235f3b0 body=262 status=ok
// SIG undefined FUN_14235f3b0(void)

void FUN_14235f3b0(longlong *param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  
  lVar3 = *param_1;
  iVar7 = (int)param_1[1];
  if (iVar7 != 0) {
    plVar6 = (longlong *)(lVar3 + 0x28);
    do {
      if ((int)plVar6[1] == 0) {
        plVar5 = (longlong *)*plVar6;
        plVar4 = (longlong *)0x0;
      }
      else {
        plVar5 = (longlong *)*plVar6;
        plVar4 = plVar5;
      }
      if (plVar4 == (longlong *)0x0) {
        if (((int)plVar6[1] != 0) && (plVar5 != (longlong *)0x0)) {
          lVar3 = *plVar5;
          goto LAB_14235f413;
        }
      }
      else {
        lVar3 = *plVar4;
        plVar5 = plVar4;
LAB_14235f413:
        (**(code **)(lVar3 + 0x28))(plVar5,0);
        if (*plVar6 != 0) {
          lVar3 = FMemory::Realloc(*plVar6,0,0);
          *plVar6 = lVar3;
        }
        *(undefined4 *)(plVar6 + 1) = 0;
      }
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      plVar5 = (longlong *)plVar6[-1];
      if (plVar5 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar5 + 1;
        lVar3 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar3 == 1) {
          (**(code **)*plVar5)(plVar5);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar5 + 8))(plVar5);
          }
        }
      }
      plVar6 = plVar6 + 9;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
    lVar3 = *param_1;
  }
  if (lVar3 != 0) {
    FMemory::Free();
    return;
  }
  return;
}


