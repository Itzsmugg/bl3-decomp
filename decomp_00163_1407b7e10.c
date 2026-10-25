// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1407b7e10 FUN_1407b7e10 body=55 status=ok
// SIG undefined FUN_1407b7e10(void)

void FUN_1407b7e10(void)

{
  undefined8 uVar1;
  
  if (DAT_14685bf40 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685bf40 = GetStaticEnum(FUN_1407b8240,uVar1,L"EInitialPathAction");
  }
  return;
}



// FUNCTION 1407b7e50 FUN_1407b7e50 body=55 status=ok
// SIG undefined FUN_1407b7e50(void)

void FUN_1407b7e50(void)

{
  undefined8 uVar1;
  
  if (DAT_14685bf30 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685bf30 = GetStaticEnum(FUN_1407b8270,uVar1,L"ESmartObjectTaskResult");
  }
  return;
}



// FUNCTION 1407b7e90 FUN_1407b7e90 body=55 status=ok
// SIG undefined FUN_1407b7e90(void)

void FUN_1407b7e90(void)

{
  undefined8 uVar1;
  
  if (DAT_14685bf38 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_14685bf38 = GetStaticEnum(FUN_1407b82a0,uVar1,L"ESmartObjectUseResult");
  }
  return;
}



// FUNCTION 1407b7ed0 FUN_1407b7ed0 body=6 status=ok
// SIG undefined FUN_1407b7ed0(void)

undefined8 FUN_1407b7ed0(void)

{
  return 0x782a2e90;
}



// FUNCTION 1407b7ee0 FUN_1407b7ee0 body=6 status=ok
// SIG undefined FUN_1407b7ee0(void)

undefined8 FUN_1407b7ee0(void)

{
  return 0x200022b9;
}



// FUNCTION 1407b7ef0 FUN_1407b7ef0 body=6 status=ok
// SIG undefined FUN_1407b7ef0(void)

undefined8 FUN_1407b7ef0(void)

{
  return 0x77608dc1;
}



// FUNCTION 1407b7f00 FUN_1407b7f00 body=6 status=ok
// SIG undefined FUN_1407b7f00(void)

undefined8 FUN_1407b7f00(void)

{
  return 0x626e57de;
}



// FUNCTION 1407b7f10 FUN_1407b7f10 body=6 status=ok
// SIG undefined FUN_1407b7f10(void)

undefined8 FUN_1407b7f10(void)

{
  return 0x804c0b82;
}



// FUNCTION 1407b7f60 thunk_FUN_142e6f660 body=5 status=ok
// SIG undefined thunk_FUN_142e6f660(void)

void thunk_FUN_142e6f660(void)

{
  FUN_142e6f660();
  return;
}



// FUNCTION 1407b7f70 FUN_1407b7f70 body=34 status=ok
// SIG undefined FUN_1407b7f70(void)

void FUN_1407b7f70(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407b78d0();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GetTerritoryComponent_1440d7d70,1);
  return;
}



// FUNCTION 1407b7fa0 FUN_1407b7fa0 body=34 status=ok
// SIG undefined FUN_1407b7fa0(void)

void FUN_1407b7fa0(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1407b7340();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnCycleActor_1440d76e0,2);
  return;
}



// FUNCTION 1407b7fd0 FUN_1407b7fd0 body=34 status=ok
// SIG undefined FUN_1407b7fd0(void)

void FUN_1407b7fd0(void)

{
  undefined8 uVar1;
  
  uVar1 = UEnvQueryContext_Target::StaticClass();
  FNativeFunctionRegistrar::RegisterFunctions
            (uVar1,&PTR_s_GenerateSpawnerByOwningSpawner_1440d7cf0,3);
  return;
}



// FUNCTION 1407b8000 FUN_1407b8000 body=82 status=ok
// SIG undefined FUN_1407b8000(void)

void FUN_1407b8000(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685c010 == 0) {
    uVar1 = FUN_1407b7ee0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685c010 = GetStaticStruct(FUN_1407b82d0,uVar2,L"SmartAction",0x10,uVar1);
  }
  return;
}



// FUNCTION 1407b8060 FUN_1407b8060 body=82 status=ok
// SIG undefined FUN_1407b8060(void)

void FUN_1407b8060(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685c040 == 0) {
    uVar1 = FUN_1407b7ed0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685c040 = GetStaticStruct(FUN_1407b8300,uVar2,L"SmartActionUseInfo",0x18,uVar1);
  }
  return;
}



// FUNCTION 1407b80c0 FUN_1407b80c0 body=82 status=ok
// SIG undefined FUN_1407b80c0(void)

void FUN_1407b80c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685c030 == 0) {
    uVar1 = FUN_1407b7ef0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685c030 = GetStaticStruct(FUN_1407b8330,uVar2,L"SmartObjectActionSet",0x20,uVar1);
  }
  return;
}



// FUNCTION 1407b8120 FUN_1407b8120 body=82 status=ok
// SIG undefined FUN_1407b8120(void)

void FUN_1407b8120(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685bff0 == 0) {
    uVar1 = FUN_1407b7f00();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685bff0 = GetStaticStruct(FUN_1407b8360,uVar2,L"SmartObjectPreviewState",0xf0,uVar1);
  }
  return;
}



// FUNCTION 1407b8180 FUN_1407b8180 body=82 status=ok
// SIG undefined FUN_1407b8180(void)

void FUN_1407b8180(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_14685c020 == 0) {
    uVar1 = FUN_1407b7f10();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_14685c020 = GetStaticStruct(FUN_1407b8390,uVar2,L"SmartObjectUseRequest",0x28,uVar1);
  }
  return;
}



// FUNCTION 1407b81e0 FUN_1407b81e0 body=47 status=ok
// SIG undefined FUN_1407b81e0(void)

longlong FUN_1407b81e0(void)

{
  if (DAT_14685c050 == 0) {
    FUN_141786440(&DAT_14685c050,&PTR_GetPrivateStaticClass_1440d71e0);
  }
  return DAT_14685c050;
}



// FUNCTION 1407b8210 FUN_1407b8210 body=47 status=ok
// SIG undefined FUN_1407b8210(void)

longlong FUN_1407b8210(void)

{
  if (DAT_14685c090 == 0) {
    FUN_141786440(&DAT_14685c090,&PTR_GetPrivateStaticClass_1440d72b0);
  }
  return DAT_14685c090;
}



// FUNCTION 1407b8240 FUN_1407b8240 body=47 status=ok
// SIG undefined FUN_1407b8240(void)

longlong FUN_1407b8240(void)

{
  if (DAT_14685c088 == 0) {
    FUN_1417866a0(&DAT_14685c088,&PTR_Z_Construct_UPackage__Script_Engine_14625a690);
  }
  return DAT_14685c088;
}



// FUNCTION 1407b8270 FUN_1407b8270 body=47 status=ok
// SIG undefined FUN_1407b8270(void)

longlong FUN_1407b8270(void)

{
  if (DAT_14685c000 == 0) {
    FUN_1417866a0(&DAT_14685c000,&PTR_Z_Construct_UPackage__Script_Engine_14625a5f0);
  }
  return DAT_14685c000;
}



// FUNCTION 1407b82a0 FUN_1407b82a0 body=47 status=ok
// SIG undefined FUN_1407b82a0(void)

longlong FUN_1407b82a0(void)

{
  if (DAT_14685c008 == 0) {
    FUN_1417866a0(&DAT_14685c008,&PTR_Z_Construct_UPackage__Script_Engine_14625a640);
  }
  return DAT_14685c008;
}



// FUNCTION 1407b82d0 FUN_1407b82d0 body=47 status=ok
// SIG undefined FUN_1407b82d0(void)

longlong FUN_1407b82d0(void)

{
  if (DAT_14685c018 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c018,&PTR_Z_Construct_UPackage__Script_Engine_146259d70);
  }
  return DAT_14685c018;
}



// FUNCTION 1407b8300 FUN_1407b8300 body=47 status=ok
// SIG undefined FUN_1407b8300(void)

longlong FUN_1407b8300(void)

{
  if (DAT_14685c048 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c048,&PTR_Z_Construct_UPackage__Script_Engine_14625a040);
  }
  return DAT_14685c048;
}



// FUNCTION 1407b8330 FUN_1407b8330 body=47 status=ok
// SIG undefined FUN_1407b8330(void)

longlong FUN_1407b8330(void)

{
  if (DAT_14685c038 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c038,&PTR_Z_Construct_UPackage__Script_Engine_146259e50);
  }
  return DAT_14685c038;
}



// FUNCTION 1407b8360 FUN_1407b8360 body=47 status=ok
// SIG undefined FUN_1407b8360(void)

longlong FUN_1407b8360(void)

{
  if (DAT_14685bff8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685bff8,&PTR_Z_Construct_UPackage__Script_Engine_146259ca0);
  }
  return DAT_14685bff8;
}



// FUNCTION 1407b8390 FUN_1407b8390 body=47 status=ok
// SIG undefined FUN_1407b8390(void)

longlong FUN_1407b8390(void)

{
  if (DAT_14685c028 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_14685c028,&PTR_Z_Construct_UPackage__Script_Engine_146259dc0);
  }
  return DAT_14685c028;
}



// FUNCTION 1407b83c0 FUN_1407b83c0 body=191 status=ok
// SIG undefined FUN_1407b83c0(void)

void FUN_1407b83c0(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 local_res10;
  undefined8 local_res18;
  
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
  uVar1 = FUN_1407786a0(local_res18,local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407b8480 FUN_1407b8480 body=308 status=ok
// SIG undefined FUN_1407b8480(void)

void FUN_1407b8480(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined1 local_res10 [8];
  undefined4 local_res18 [2];
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
  local_res18[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
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
  uVar1 = FUN_140778850(local_28[0],local_res20,local_res18[0],local_res10[0]);
  *param_3 = uVar1;
  return;
}



// FUNCTION 1407b85c0 FUN_1407b85c0 body=118 status=ok
// SIG undefined FUN_1407b85c0(void)

void FUN_1407b85c0(undefined8 param_1,longlong param_2)

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
  FUN_14077d2c0(param_1,local_res10[0]);
  return;
}



// FUNCTION 1407b8660 FUN_1407b8660 body=175 status=ok
// SIG undefined FUN_1407b8660(void)

void FUN_1407b8660(undefined8 param_1,longlong param_2)

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
  FUN_140784e80(local_res20,local_res10[0]);
  return;
}



// FUNCTION 1407b8710 FUN_1407b8710 body=976 status=ok
// SIG undefined FUN_1407b8710(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407b8710(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_res10 [8];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_144045958;
    plVar2[1] = (longlong)FUN_1407d12c0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_1440459a0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535748,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146535750;
    lVar3 = (longlong)DAT_146535750;
    DAT_146535750 = DAT_146535750 + 1;
    if (DAT_146535754 < DAT_146535750) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535748,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535748);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_1407d0d80;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535790,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146535798;
    lVar3 = (longlong)DAT_146535798;
    DAT_146535798 = DAT_146535798 + 1;
    if (DAT_14653579c < DAT_146535798) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535790,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_146535790);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_1440459e8;
    plVar2[1] = (longlong)FUN_1407d1060;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_144045a30;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357a8,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1465357b0;
    lVar3 = (longlong)DAT_1465357b0;
    DAT_1465357b0 = DAT_1465357b0 + 1;
    if (DAT_1465357b4 < DAT_1465357b0) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357a8,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1465357a8);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fca720;
    plVar2[1] = (longlong)FUN_1407cf630;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fca768;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1465357f0,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1465357f8;
    lVar3 = (longlong)DAT_1465357f8;
    DAT_1465357f8 = DAT_1465357f8 + 1;
    if (DAT_1465357fc < DAT_1465357f8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1465357f0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + _DAT_1465357f0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143fca720;
    plVar2[1] = (longlong)FUN_1407cf750;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143fca768;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_146535808,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_146535810;
    lVar3 = (longlong)DAT_146535810;
    DAT_146535810 = DAT_146535810 + 1;
    if (DAT_146535814 < DAT_146535810) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_146535808,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_146535808);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  plVar2 = (longlong *)FMemory::Realloc(0,0x20);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9a8;
    plVar2[1] = (longlong)FUN_1407cf9e0;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[3] = lVar3;
    *plVar2 = (longlong)&PTR_GetPoolName_143f4c9f0;
    FMulticastDelegateBase<FWeakObjectPtr>::CompactInvocationList(&DAT_1464b57d0,1);
    (**(code **)(*plVar2 + 0x20))(plVar2,local_res10);
    iVar1 = DAT_1464b57d8;
    lVar3 = (longlong)DAT_1464b57d8;
    DAT_1464b57d8 = DAT_1464b57d8 + 1;
    if (DAT_1464b57dc < DAT_1464b57d8) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(&DAT_1464b57d0,iVar1);
    }
    puVar4 = (undefined8 *)(lVar3 * 0x10 + DAT_1464b57d0);
    *puVar4 = plVar2;
    *(undefined4 *)(puVar4 + 1) = 2;
  }
  return;
}



// FUNCTION 1407b8ae0 AddReferencedObjects body=391 status=ok
// SIG undefined AddReferencedObjects(void)

void FAnimSharingModule::AddReferencedObjects(undefined8 param_1,longlong *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  uint *puVar5;
  int iVar6;
  int local_78;
  uint uStack_74;
  int iStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int iStack_50;
  uint uStack_4c;
  undefined *local_48;
  uint uStack_40;
  int iStack_3c;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  uint uStack_18;
  int iStack_14;
  undefined8 uStack_10;
  
  uStack_74 = 1;
  local_78 = 0;
  iStack_64 = 0;
  iStack_60 = 0;
  iVar6 = (int)DAT_14625a748;
  if (iVar6 != 0) {
    puVar5 = DAT_14625a740;
    if (DAT_14625a740 == (uint *)0x0) {
      puVar5 = (uint *)&DAT_14625a730;
    }
    uVar1 = *puVar5;
    iStack_60 = 0;
    local_78 = 0;
    while (uVar1 == 0) {
      lVar4 = (longlong)local_78;
      iStack_60 = iStack_60 + 0x20;
      iVar3 = local_78 + 1;
      bVar2 = (int)(iVar6 + -1 + (iVar6 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
      local_78 = iVar3;
      if (bVar2) goto LAB_1407b8bac;
      uVar1 = puVar5[lVar4 + 1];
    }
    uStack_74 = -uVar1 & uVar1;
    iVar3 = 0x1f;
    if (uStack_74 != 0) {
      for (; uStack_74 >> iVar3 == 0; iVar3 = iVar3 + -1) {
      }
    }
    if (uStack_74 == 0) {
      iVar3 = 0x20;
    }
    else {
      iVar3 = 0x1f - iVar3;
    }
    iStack_64 = (iStack_60 - iVar3) + 0x1f;
    if (iVar6 < iStack_64) {
LAB_1407b8bac:
      iStack_64 = iVar6;
    }
  }
  uStack_40 = 0xffffffff;
  iStack_3c = iStack_64;
  local_38 = CONCAT44(uStack_5c,iStack_60);
  uStack_28 = CONCAT44(uStack_74,local_78);
  local_30 = &DAT_14625a720;
  puStack_20 = &DAT_14625a730;
  iStack_50 = local_78;
  uStack_4c = uStack_74;
  local_48 = &DAT_14625a730;
  uStack_10 = local_38;
  uStack_18 = uStack_40;
  iStack_14 = iStack_3c;
  while ((iStack_3c != iVar6 || (local_48 != &DAT_14625a730))) {
    (**(code **)(*param_2 + 0x38))
              (param_2,DAT_14625a720 + 8 + (longlong)iStack_3c * 0x18,
               *(undefined8 *)(DAT_14625a720 + (longlong)iStack_3c * 0x18),0);
    uStack_40 = uStack_40 & ~uStack_4c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_50);
  }
  return;
}



// FUNCTION 1407b8c70 FUN_1407b8c70 body=66 status=ok
// SIG undefined FUN_1407b8c70(void)

void FUN_1407b8c70(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x20);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440da598;
    puVar1[1] = *(undefined8 *)(param_1 + 8);
    puVar1[3] = *(undefined8 *)(param_1 + 0x18);
    *puVar1 = &PTR_GetPoolName_1440da5e0;
  }
  return;
}



// FUNCTION 1407b8cc0 FUN_1407b8cc0 body=84 status=ok
// SIG undefined FUN_1407b8cc0(void)

void FUN_1407b8cc0(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 10) == '\0') {
    puVar3 = (undefined8 *)FUN_1407c72b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 10) != '\0') {
        *(undefined1 *)(puVar1 + 10) = 0;
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
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
  }
  return;
}



// FUNCTION 1407b8d20 FUN_1407b8d20 body=86 status=ok
// SIG undefined FUN_1407b8d20(void)

undefined1 FUN_1407b8d20(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (*(char *)(puVar1 + 10) == '\0') {
    puVar3 = (undefined8 *)FUN_1407c72b0();
    if (puVar3 != puVar1) {
      if (*(char *)(puVar1 + 10) != '\0') {
        *(undefined1 *)(puVar1 + 10) = 0;
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
      uVar2 = puVar3[7];
      puVar1[6] = puVar3[6];
      puVar1[7] = uVar2;
      uVar2 = puVar3[9];
      puVar1[8] = puVar3[8];
      puVar1[9] = uVar2;
      *(undefined1 *)(puVar1 + 10) = 1;
    }
  }
  return 1;
}



// FUNCTION 1407b8d80 FUN_1407b8d80 body=73 status=ok
// SIG undefined FUN_1407b8d80(void)

undefined8 * FUN_1407b8d80(undefined8 *param_1,undefined8 *param_2)

{
  FUN_14217e740();
  FUN_142194380(param_1,0x21,0,0,0);
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  return param_1;
}



// FUNCTION 1407b8dd0 GetHandle body=4 status=ok
// SIG undefined GetHandle(void)

undefined8 FHardwareCursor::GetHandle(undefined8 *param_1)

{
  return *param_1;
}



// FUNCTION 1407b8de0 FUN_1407b8de0 body=251 status=ok
// SIG undefined FUN_1407b8de0(void)

int FUN_1407b8de0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  iVar1 = (int)param_1[0x501];
  lVar4 = (longlong)iVar1;
  plVar5 = (longlong *)param_1[0x500];
  if ((longlong *)param_1[0x500] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  if (plVar5 != plVar5 + lVar4 * 5) {
    plVar6 = plVar5;
    do {
      if (*plVar6 == *param_2) {
        iVar2 = (int)(((longlong)plVar6 - (longlong)plVar5) / 0x28);
        if (iVar2 != -1) {
          return iVar2;
        }
        break;
      }
      plVar6 = plVar6 + 5;
    } while (plVar6 != plVar5 + lVar4 * 5);
  }
  *(int *)(param_1 + 0x501) = iVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x280c) < iVar1 + 1) {
    FUN_1407d8d40(param_1,iVar1);
  }
  lVar3 = param_2[1];
  plVar5 = (longlong *)param_1[0x500];
  if ((longlong *)param_1[0x500] == (longlong *)0x0) {
    plVar5 = param_1;
  }
  plVar5[lVar4 * 5] = *param_2;
  (plVar5 + lVar4 * 5)[1] = lVar3;
  lVar3 = param_2[3];
  plVar5[lVar4 * 5 + 2] = param_2[2];
  (plVar5 + lVar4 * 5 + 2)[1] = lVar3;
  plVar5[lVar4 * 5 + 4] = param_2[4];
  return iVar1;
}



// FUNCTION 1407b8ee0 FUN_1407b8ee0 body=125 status=ok
// SIG undefined FUN_1407b8ee0(void)

ulonglong FUN_1407b8ee0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = TArray<FSoftObjectPath,FDefaultAllocator>::Find();
  if ((int)uVar3 == -1) {
    uVar2 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar2 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar2 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar2);
    }
    puVar1 = (undefined8 *)(*param_1 + (longlong)(int)uVar2 * 0x18);
    *puVar1 = *param_2;
    puVar1[1] = 0;
    puVar1[1] = param_2[1];
    param_2[1] = 0;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
    param_2[2] = 0;
    uVar3 = (ulonglong)uVar2;
  }
  return uVar3;
}



// FUNCTION 1407b8f60 FUN_1407b8f60 body=458 status=ok
// SIG undefined FUN_1407b8f60(void)

void FUN_1407b8f60(longlong *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FInAppPurchaseProductInfo,FDefaultAllocator>::ResizeForCopy
            (param_1,param_3 + param_5,param_4);
  puVar5 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar3 = (undefined4 *)(param_2 + 0xa4);
    puVar4 = (undefined4 *)((longlong)puVar5 + 0xa4);
    do {
      *puVar5 = *(undefined8 *)(puVar3 + -0x29);
      *(undefined1 *)(puVar4 + -0x27) = *(undefined1 *)(puVar3 + -0x27);
      puVar4[-0x26] = puVar3[-0x26];
      puVar4[-0x25] = puVar3[-0x25];
      puVar4[-0x24] = puVar3[-0x24];
      *(undefined1 *)(puVar4 + -0x23) = *(undefined1 *)(puVar3 + -0x23);
      *(undefined1 *)((longlong)puVar4 + -0x8b) = *(undefined1 *)((longlong)puVar3 + -0x8b);
      *(undefined1 *)((longlong)puVar4 + -0x8a) = *(undefined1 *)((longlong)puVar3 + -0x8a);
      *(undefined1 *)((longlong)puVar4 + -0x89) = *(undefined1 *)((longlong)puVar3 + -0x89);
      *(undefined8 *)(puVar4 + -0x22) = *(undefined8 *)(puVar3 + -0x22);
      puVar4[-0x20] = puVar3[-0x20];
      *(undefined8 *)(puVar4 + -0x1f) = *(undefined8 *)(puVar3 + -0x1f);
      puVar4[-0x1d] = puVar3[-0x1d];
      *(undefined8 *)(puVar4 + -0x1c) = *(undefined8 *)(puVar3 + -0x1c);
      puVar4[-0x1a] = puVar3[-0x1a];
      *(undefined8 *)(puVar4 + -0x19) = *(undefined8 *)(puVar3 + -0x19);
      puVar4[-0x17] = puVar3[-0x17];
      *(undefined8 *)(puVar4 + -0x15) = *(undefined8 *)(puVar3 + -0x15);
      FString::FString(puVar4 + -0x13,puVar3 + -0x13);
      puVar4[-0xf] = puVar3[-0xf];
      puVar4[-0xe] = puVar3[-0xe];
      *(undefined8 *)(puVar4 + -0xd) = *(undefined8 *)(puVar3 + -0xd);
      puVar4[-0xb] = puVar3[-0xb];
      puVar4[-10] = puVar3[-10];
      *(undefined2 *)(puVar4 + -9) = *(undefined2 *)(puVar3 + -9);
      *(undefined1 *)((longlong)puVar4 + -0x22) = *(undefined1 *)((longlong)puVar3 + -0x22);
      *(undefined8 *)(puVar4 + -7) = *(undefined8 *)(puVar3 + -7);
      lVar2 = *(longlong *)(puVar3 + -5);
      *(longlong *)(puVar4 + -5) = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar5 = puVar5 + 0x15;
      *(undefined8 *)(puVar4 + -3) = *(undefined8 *)(puVar3 + -3);
      puVar4[-1] = puVar3[-1];
      uVar1 = *puVar3;
      puVar3 = puVar3 + 0x2a;
      *puVar4 = uVar1;
      puVar4 = puVar4 + 0x2a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1407b9130 FUN_1407b9130 body=695 status=ok
// SIG undefined FUN_1407b9130(void)

int * FUN_1407b9130(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined1 uVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  void *_Dst;
  ulonglong *_Src;
  bool bVar16;
  int local_res8 [2];
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TSizedDefaultAllocator<32>_>::
      ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar2 = *(int *)((longlong)iVar8 * 0x20 + 4 + *param_1);
    iVar15 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar15;
    if (iVar15 != 0) {
      *(undefined4 *)((longlong)iVar2 * 0x20 + *param_1) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (ulonglong *)((longlong)iVar8 * 0x20 + *param_1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = 0;
  _Src[2] = 0;
  *(undefined4 *)(_Src + 3) = 0xffffffff;
  iVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar15 != 1) {
    TSet<TTuple<IAsyncReadRequest_*,FWeakAsyncPackagePtr>,TDefaultMapHashableKeyFuncs<IAsyncReadRequest_*,FWeakAsyncPackagePtr,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar2 = local_res8[0];
    lVar13 = (longlong)local_res8[0];
    bVar16 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar16);
    if (bVar16) {
      _Dst = (void *)(lVar13 * 0x20 + *param_1);
      if (*(longlong *)((longlong)_Dst + 8) != 0) {
        FMemory::Free();
        iVar8 = *param_2;
      }
      _guard_xfg_dispatch_icall_nop(_Dst,_Src,0x18);
      bVar4 = (byte)iVar8 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x20 + *param_1) = iVar8;
      }
      uVar6 = 0xffffffff;
      puVar11 = (undefined4 *)((longlong)iVar8 * 0x20 + *param_1);
      *puVar11 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar6 = (undefined4)param_1[6];
      }
      puVar11[1] = uVar6;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar8;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar2;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar12 = (undefined1)local_res8[0];
      goto LAB_1407b93c3;
    }
  }
  uVar12 = 0;
  cVar5 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,iVar15,0);
  if (cVar5 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar14 = -(uVar10 + iVar8) ^ uVar10 >> 0xd;
    uVar9 = (iVar8 - uVar10) - uVar14 ^ uVar14 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 0x10;
    uVar14 = (uVar14 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar14 ^ uVar14 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 10;
    uVar9 = ((uVar14 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x1c) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 3) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_1407b93c3:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar12;
  }
  return param_2;
}



// FUNCTION 1407b93f0 FUN_1407b93f0 body=614 status=ok
// SIG undefined FUN_1407b93f0(void)

int * FUN_1407b93f0(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint *_Src;
  int iVar13;
  bool bVar14;
  
  iVar13 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar9 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar9 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar9 + 1) {
      TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1,iVar9);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar9 = (int)param_1[6];
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar9 * 0x10);
    iVar12 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar12;
    if (iVar12 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar5 = (longlong *)param_1[4];
  *param_2 = iVar9;
  lVar4 = (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar5 == (longlong *)0x0) {
    plVar5 = param_1 + 2;
  }
  puVar10 = (uint *)((longlong)plVar5 + lVar4);
  *puVar10 = *puVar10 | 1 << ((byte)iVar9 & 0x1f);
  puVar10 = (uint *)param_3[1];
  bVar14 = false;
  lVar6 = (longlong)iVar9 * 0x10;
  _Src = (uint *)(*param_1 + lVar6);
  *_Src = *(uint *)*param_3;
  _Src[1] = *puVar10;
  _Src[2] = 0xffffffff;
  iVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (iVar12 != 1) {
    iVar8 = iVar13;
    if (iVar12 != 0) {
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = param_1 + 7;
      }
      iVar7 = *(int *)((longlong)plVar5 +
                      ((longlong)(int)param_1[9] - 1U & (longlong)(int)*_Src) * 4);
      if (iVar7 != -1) {
        do {
          iVar8 = iVar7;
          if (*(uint *)(*param_1 + (longlong)iVar7 * 0x10) == *_Src) break;
          iVar7 = *(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10);
          iVar8 = iVar13;
        } while (iVar7 != -1);
      }
    }
    bVar14 = iVar8 != -1;
    if (bVar14) {
      _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar8 * 0x10 + *param_1),_Src,8);
      bVar2 = (byte)iVar9 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x10) = iVar9;
      }
      lVar1 = *param_1;
      *(undefined4 *)(lVar6 + lVar1) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar13 = (int)param_1[6];
      }
      *(int *)(lVar6 + 4 + lVar1) = iVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar9;
      plVar5 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar5 == (longlong *)0x0) {
        plVar5 = param_1 + 2;
      }
      puVar10 = (uint *)((longlong)plVar5 + lVar4);
      *puVar10 = *puVar10 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      goto LAB_1407b962c;
    }
  }
  cVar3 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,iVar12,0);
  if (cVar3 == '\0') {
    uVar11 = (int)param_1[9] - 1U & *_Src;
    _Src[3] = uVar11;
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    _Src[2] = *(uint *)((longlong)plVar5 +
                       ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4);
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = param_1 + 7;
    }
    *(int *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar11) * 4) =
         *param_2;
  }
LAB_1407b962c:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar14;
  }
  return param_2;
}



// FUNCTION 1407b9660 Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_> body=968 status=ok
// SIG undefined Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>(void)

int * TSet<TTuple<UFlareCompany_*,__int64>,TDefaultMapHashableKeyFuncs<UFlareCompany_*,__int64,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UFlareCompany_*_const_&,__int64_&&>_>
                (longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  ulonglong *_Src;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  bool bVar19;
  
  iVar10 = 1;
  iVar18 = -1;
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
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar11 = *(int *)(*param_1 + 4 + (longlong)iVar12 * 0x18);
    *(int *)(param_1 + 6) = iVar11;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar11 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = iVar12;
  lVar7 = (longlong)((int)(iVar12 + (iVar12 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  bVar19 = false;
  puVar17 = (uint *)((longlong)plVar8 + lVar7);
  *puVar17 = *puVar17 | 1 << ((byte)iVar12 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  lVar1 = (longlong)iVar12 * 0x18;
  _Src = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  _Src[1] = *puVar2;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  uVar16 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar16 != 1) {
    iVar11 = iVar18;
    if (uVar16 != 0) {
      iVar6 = (int)(uVar3 >> 4);
      uVar14 = 0x9e3779b9U - iVar6 ^ iVar6 << 8;
      uVar9 = -(uVar14 + iVar6) ^ uVar14 >> 0xd;
      uVar15 = (iVar6 - uVar14) - uVar9 ^ uVar9 >> 0xc;
      uVar14 = (uVar14 - uVar15) - uVar9 ^ uVar15 << 0x10;
      uVar9 = (uVar9 - uVar14) - uVar15 ^ uVar14 >> 5;
      uVar15 = (uVar15 - uVar14) - uVar9 ^ uVar9 >> 3;
      uVar14 = (uVar14 - uVar15) - uVar9 ^ uVar15 << 10;
      plVar8 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar8 = param_1 + 7;
      }
      iVar6 = *(int *)((longlong)plVar8 +
                      (((longlong)(int)((uVar9 - uVar14) - uVar15) ^ (ulonglong)(uVar14 >> 0xf)) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar6 != -1) {
        do {
          iVar11 = iVar6;
          if (*(ulonglong *)(*param_1 + (longlong)iVar6 * 0x18) == uVar3) break;
          iVar6 = *(int *)(*param_1 + 0x10 + (longlong)iVar6 * 0x18);
          iVar11 = iVar18;
        } while (iVar6 != -1);
      }
    }
    bVar19 = iVar11 != -1;
    if (bVar19) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar11 * 0x18),_Src,0x10);
      bVar5 = (byte)iVar12 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar12;
      }
      lVar4 = *param_1;
      *(undefined4 *)(lVar1 + lVar4) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar18 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar4) = iVar18;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar12;
      plVar8 = (longlong *)param_1[4];
      *param_2 = iVar11;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar17 = (uint *)((longlong)plVar8 + lVar7);
      *puVar17 = *puVar17 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1407b99fd;
    }
  }
  if (3 < uVar16) {
    uVar9 = (uVar16 >> 1) + 8;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    iVar10 = 0x20;
    if (uVar9 != 0) {
      iVar10 = 0x1f - iVar18;
    }
    uVar9 = (uVar16 >> 1) + 7;
    iVar18 = 0x1f;
    if (uVar9 != 0) {
      for (; uVar9 >> iVar18 == 0; iVar18 = iVar18 + -1) {
      }
    }
    if (uVar9 == 0) {
      cVar13 = '\0';
    }
    else {
      cVar13 = '\x1f' - (char)iVar18;
    }
    iVar10 = 1 << (~(byte)((iVar10 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar16 < 1) || (((int)param_1[9] != 0 && (iVar10 <= (int)param_1[9])))) {
    iVar18 = (int)(*_Src >> 4);
    uVar9 = 0x9e3779b9U - iVar18 ^ iVar18 << 8;
    uVar14 = -(uVar9 + iVar18) ^ uVar9 >> 0xd;
    uVar16 = (iVar18 - uVar9) - uVar14 ^ uVar14 >> 0xc;
    uVar9 = (uVar9 - uVar16) - uVar14 ^ uVar16 << 0x10;
    uVar14 = (uVar14 - uVar9) - uVar16 ^ uVar9 >> 5;
    uVar16 = (uVar16 - uVar9) - uVar14 ^ uVar14 >> 3;
    uVar9 = (uVar9 - uVar16) - uVar14 ^ uVar16 << 10;
    uVar16 = ((uVar14 - uVar9) - uVar16 ^ uVar9 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar16;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(int *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar16) * 4) =
         iVar12;
  }
  else {
    *(int *)(param_1 + 9) = iVar10;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_1407b99fd:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar19;
  }
  return param_2;
}



// FUNCTION 1407b9a30 FUN_1407b9a30 body=875 status=ok
// SIG undefined FUN_1407b9a30(void)

uint * FUN_1407b9a30(longlong param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  char cVar10;
  longlong lVar11;
  uint uVar12;
  undefined4 uVar13;
  bool bVar14;
  uint local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 *local_res18;
  
  uVar13 = 0xffffffff;
  local_res18 = param_3;
  if (*(int *)(param_1 + 0x16c) == 0) {
    uVar6 = *(uint *)(param_1 + 0x148);
    *(uint *)(param_1 + 0x148) = uVar6 + 1;
    if (*(int *)(param_1 + 0x14c) < (int)(uVar6 + 1)) {
      FUN_1407d8920(param_1,uVar6);
    }
    FUN_1406dc2a0(param_1 + 0x150,0,1);
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x168);
    lVar8 = *(longlong *)(param_1 + 0x140);
    if (*(longlong *)(param_1 + 0x140) == 0) {
      lVar8 = param_1;
    }
    iVar4 = *(int *)(param_1 + 0x16c) + -1;
    iVar7 = *(int *)(lVar8 + 4 + (longlong)(int)uVar6 * 0x14);
    *(int *)(param_1 + 0x168) = iVar7;
    *(int *)(param_1 + 0x16c) = iVar4;
    if (iVar4 != 0) {
      lVar8 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar8 = param_1;
      }
      *(undefined4 *)(lVar8 + (longlong)iVar7 * 0x14) = 0xffffffff;
    }
  }
  *param_2 = uVar6;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar8 = *(longlong *)(param_1 + 0x158);
  if (*(longlong *)(param_1 + 0x158) == 0) {
    lVar8 = param_1 + 0x150;
  }
  puVar1 = (uint *)(lVar8 + (longlong)((int)(uVar6 + ((int)uVar6 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar6 & 0x1f);
  lVar8 = *(longlong *)(param_1 + 0x140);
  if (*(longlong *)(param_1 + 0x140) == 0) {
    lVar8 = param_1;
  }
  puVar1 = (uint *)(lVar8 + (longlong)(int)uVar6 * 0x14);
  puVar2 = (uint *)*local_res18;
  puVar3 = (uint *)local_res18[1];
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  puVar1[2] = *puVar3;
  puVar1[3] = 0xffffffff;
  if (*(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x16c) != 1) {
    local_res14 = puVar1[1];
    local_res10 = *puVar1;
    FUN_1407c60e0(param_1,local_res8,&local_res10);
    uVar6 = local_res8[0];
    lVar8 = (longlong)(int)local_res8[0];
    bVar14 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar14);
    if (bVar14) {
      lVar11 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar11 = param_1;
      }
      _guard_xfg_dispatch_icall_nop((void *)(lVar11 + lVar8 * 0x14),puVar1,0xc);
      uVar12 = *param_2;
      bVar5 = (byte)uVar12 & 0x1f;
      if (*(int *)(param_1 + 0x16c) != 0) {
        lVar8 = *(longlong *)(param_1 + 0x140);
        if (*(longlong *)(param_1 + 0x140) == 0) {
          lVar8 = param_1;
        }
        *(uint *)(lVar8 + (longlong)*(int *)(param_1 + 0x168) * 0x14) = uVar12;
      }
      lVar8 = *(longlong *)(param_1 + 0x140);
      if (*(longlong *)(param_1 + 0x140) == 0) {
        lVar8 = param_1;
      }
      *(undefined4 *)(lVar8 + (longlong)(int)uVar12 * 0x14) = 0xffffffff;
      if (0 < *(int *)(param_1 + 0x16c)) {
        uVar13 = *(undefined4 *)(param_1 + 0x168);
      }
      *(undefined4 *)(lVar8 + 4 + (longlong)(int)uVar12 * 0x14) = uVar13;
      *(int *)(param_1 + 0x16c) = *(int *)(param_1 + 0x16c) + 1;
      *(uint *)(param_1 + 0x168) = uVar12;
      lVar8 = *(longlong *)(param_1 + 0x158);
      *param_2 = uVar6;
      if (lVar8 == 0) {
        lVar8 = param_1 + 0x150;
      }
      puVar1 = (uint *)(lVar8 + (longlong)((int)(uVar12 + ((int)uVar12 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar5 | 1U >> 0x20 - bVar5);
      goto LAB_1407b9d75;
    }
  }
  uVar12 = *(int *)(param_1 + 0x148) - *(int *)(param_1 + 0x16c);
  uVar6 = uVar12 >> 1;
  iVar4 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  iVar7 = 0x20;
  if (uVar6 != 0) {
    iVar7 = 0x1f - iVar4;
  }
  uVar6 = uVar6 - 1;
  iVar4 = 0x1f;
  if (uVar6 != 0) {
    for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
    }
  }
  if (uVar6 == 0) {
    cVar10 = '\0';
  }
  else {
    cVar10 = '\x1f' - (char)iVar4;
  }
  uVar9 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar10 & 0x1f);
  uVar6 = 8;
  if ((7 < uVar9) && (uVar6 = uVar9, uVar12 < 4)) {
    uVar6 = 8;
  }
  if (((int)uVar12 < 1) ||
     ((*(int *)(param_1 + 0x198) != 0 && ((int)uVar6 <= *(int *)(param_1 + 0x198))))) {
    uVar6 = (*puVar1 ^ puVar1[1]) & *(int *)(param_1 + 0x198) - 1U;
    puVar1[4] = uVar6;
    lVar8 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar8 = param_1 + 0x170;
    }
    puVar1[3] = *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)(int)uVar6)
                                  * 4);
    lVar8 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar8 = param_1 + 0x170;
    }
    *(uint *)(lVar8 + ((longlong)*(int *)(param_1 + 0x198) - 1U & (longlong)(int)uVar6) * 4) =
         *param_2;
  }
  else {
    *(uint *)(param_1 + 0x198) = uVar6;
    FUN_1407d6dd0(param_1);
  }
LAB_1407b9d75:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1407b9da0 FUN_1407b9da0 body=165 status=ok
// SIG undefined FUN_1407b9da0(void)

longlong FUN_1407b9da0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = *param_1;
  lVar5 = (longlong)(int)param_1[1] * 0xa8 + lVar4;
  do {
    if (lVar4 == lVar5) {
      return 0;
    }
    lVar1 = *(longlong *)(lVar4 + 0x48);
    if (lVar1 == 0) {
LAB_1407b9e0e:
      bVar2 = false;
    }
    else {
      lVar3 = FUN_1407e06a0();
      if ((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
           ) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((!bVar2) || (*(char *)(lVar1 + 0x38) != '\0')) goto LAB_1407b9e0e;
      bVar2 = true;
    }
    if (bVar2) {
      return lVar4;
    }
    lVar4 = lVar4 + 0xa8;
  } while( true );
}



// FUNCTION 1407b9e50 FUN_1407b9e50 body=463 status=ok
// SIG undefined FUN_1407b9e50(void)

longlong FUN_1407b9e50(longlong param_1,undefined1 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  
  if (param_1 != 0) {
    lVar3 = UAnimMontage::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = FUN_1407b9da0(param_1 + 0x80,*param_2);
      return lVar3;
    }
    lVar3 = UMaterialInstanceConstant::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar3 = FUN_1407b9da0(param_1 + 0x80,*param_2);
      if (lVar3 != 0) {
        return lVar3;
      }
      lVar3 = *(longlong *)(param_1 + 0x168);
      lVar7 = (longlong)*(int *)(param_1 + 0x170) * 0x58 + lVar3;
      for (; lVar3 != lVar7; lVar3 = lVar3 + 0x58) {
        lVar5 = *(longlong *)(lVar3 + 0x28);
        if (lVar5 != 0) {
          lVar4 = UAnimMontage::GetPrivateStaticClass();
          if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) +
               (longlong)*(int *)(lVar4 + 0x90) * 8) != lVar4 + 0x88)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if ((bVar2) && (lVar5 = FUN_1407b9da0(lVar5 + 0x80,*param_2), lVar5 != 0)) {
            return lVar5;
          }
        }
      }
    }
    else {
      lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar3 + 0x90) * 8) != lVar3 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (bVar2) {
        plVar6 = *(longlong **)(param_1 + 200);
        plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0xd0) * 3;
        for (; plVar6 != plVar1; plVar6 = plVar6 + 3) {
          if ((*plVar6 != 0) && (lVar3 = FUN_1407b9da0(*plVar6 + 0x80,*param_2), lVar3 != 0)) {
            return lVar3;
          }
        }
      }
    }
  }
  return 0;
}



// FUNCTION 1407ba020 FUN_1407ba020 body=1073 status=ok
// SIG undefined FUN_1407ba020(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ba020(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong **_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_e8 [32];
  char local_c8;
  longlong *local_c0;
  int local_b8;
  uint uStack_b4;
  uint *puStack_b0;
  undefined4 local_a8;
  uint uStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  int local_90;
  int local_8c;
  longlong *local_88;
  int iStack_80;
  uint uStack_7c;
  uint *local_78;
  uint uStack_70;
  uint uStack_6c;
  longlong **local_68;
  longlong *local_60;
  undefined8 uStack_58;
  uint *puStack_50;
  uint uStack_48;
  uint uStack_44;
  longlong **pplStack_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  *(undefined4 *)(param_2 + 0x28) = 0;
  local_c8 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x2c)) {
    TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_b4 = 1;
  local_c0 = (longlong *)(param_1 + 0x2b0);
  local_98 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_b0 = (uint *)(param_1 + 0x2c0);
  local_8c = 0;
  iVar13 = 0;
  local_b8 = 0;
  uStack_a4 = 0;
  iStack_a0 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar12 = *puVar10;
    iStack_a0 = 0;
    local_b8 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_b8;
      iStack_a0 = iStack_a0 + 0x20;
      iVar5 = local_b8 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_b8;
      local_b8 = iVar5;
      if (bVar3) goto LAB_1407ba13a;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_b4 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_b4 != 0) {
      for (; uStack_b4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_b4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_a4 = (iStack_a0 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_a4) {
LAB_1407ba13a:
      uStack_a4 = uVar1;
    }
  }
  local_a8 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_58 = CONCAT44(uStack_b4,local_b8);
  uStack_70 = 0xffffffff;
  uStack_6c = uStack_a4;
  local_68 = (longlong **)CONCAT44(uStack_9c,iStack_a0);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_80 = local_b8;
  uStack_7c = uStack_b4;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_b0;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1407ba1fd;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1407ba1fd:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_78 = puStack_b0;
  local_60 = local_c0;
  puStack_50 = puStack_b0;
  pplStack_40 = local_68;
  local_88 = local_c0;
  uStack_48 = uStack_70;
  uStack_44 = uStack_6c;
  while( true ) {
    if ((uStack_6c == uVar12) && (local_78 == puStack_b0)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_88 == local_c0)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_88 + (longlong)(int)uStack_6c * 0x10);
    if (lVar7 != 0) {
      lVar4 = FUN_142e6b880();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x28) = iVar2 + 1;
        if (*(int *)(param_2 + 0x2c) < iVar2 + 1) {
          TArray<FAnimNode_3DBlend::FActiveSample,TInlineAllocator<4,FDefaultAllocator>_>::
          ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x20);
        if (*(longlong *)(param_2 + 0x20) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_c8 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_90 = iVar13 + 1;
        if (iVar5 < local_90) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_98,iVar13);
          plVar11 = local_98;
          iVar5 = local_8c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_90;
      }
    }
    uStack_70 = uStack_70 & ~uStack_7c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_80);
  }
  if (local_c8 != '\0') {
    uVar8 = 0;
    pplStack_40 = (longlong **)0x0;
    local_38 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1407ba020(*(longlong *)(*plVar14 + 0x2d8),&local_60,1);
          iVar13 = (int)local_38;
          lVar7 = (longlong)(int)local_38;
          if ((int)local_38 != 0) {
            iVar5 = *(int *)(param_2 + 0x28);
            if (*(int *)(param_2 + 0x2c) < (int)local_38 + iVar5) {
              TArray<TRefCountPtr<FGraphEvent>,TInlineAllocator<4,FDefaultAllocator>_>::ResizeTo
                        (param_2);
              iVar5 = *(int *)(param_2 + 0x28);
            }
            _Src = &local_60;
            if (pplStack_40 != (longlong **)0x0) {
              _Src = pplStack_40;
            }
            lVar4 = *(longlong *)(param_2 + 0x20);
            if (*(longlong *)(param_2 + 0x20) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + iVar13;
            local_38 = local_38 & 0xffffffff00000000;
          }
        }
        plVar14 = plVar14 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar15);
      if (pplStack_40 != (longlong **)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1407ba460 FUN_1407ba460 body=1136 status=ok
// SIG undefined FUN_1407ba460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407ba460(longlong param_1,longlong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined1 *_Src;
  ulonglong uVar8;
  uint uVar9;
  uint *puVar10;
  longlong *plVar11;
  uint uVar12;
  int iVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_178 [32];
  char local_158;
  longlong *local_150;
  int local_148;
  uint uStack_144;
  uint *puStack_140;
  undefined4 local_138;
  uint uStack_134;
  int iStack_130;
  undefined4 uStack_12c;
  longlong *local_128;
  int local_120;
  int local_11c;
  longlong *local_118;
  int iStack_110;
  uint uStack_10c;
  uint *local_108;
  uint uStack_100;
  uint uStack_fc;
  undefined8 local_f8;
  longlong *local_f0;
  undefined8 uStack_e8;
  uint *puStack_e0;
  uint uStack_d8;
  uint uStack_d4;
  undefined8 uStack_d0;
  undefined1 local_c8 [128];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  *(undefined4 *)(param_2 + 0x88) = 0;
  local_158 = param_3;
  if (0x7fffffff < *(uint *)(param_2 + 0x8c)) {
    FUN_1407418a0(param_2,0);
  }
  plVar11 = (longlong *)0x0;
  uStack_144 = 1;
  local_150 = (longlong *)(param_1 + 0x2b0);
  local_128 = (longlong *)0x0;
  uVar1 = *(uint *)(param_1 + 0x2d8);
  puStack_140 = (uint *)(param_1 + 0x2c0);
  local_11c = 0;
  iVar13 = 0;
  local_148 = 0;
  uStack_134 = 0;
  iStack_130 = 0;
  if (uVar1 != 0) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar12 = *puVar10;
    iStack_130 = 0;
    local_148 = 0;
    while (uVar12 == 0) {
      lVar7 = (longlong)local_148;
      iStack_130 = iStack_130 + 0x20;
      iVar5 = local_148 + 1;
      bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_148;
      local_148 = iVar5;
      if (bVar3) goto LAB_1407ba580;
      uVar12 = puVar10[lVar7 + 1];
    }
    uStack_144 = uVar12 - 1 & uVar12 ^ uVar12;
    iVar5 = 0x1f;
    if (uStack_144 != 0) {
      for (; uStack_144 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uStack_144 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uStack_134 = (iStack_130 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uStack_134) {
LAB_1407ba580:
      uStack_134 = uVar1;
    }
  }
  local_138 = 0xffffffff;
  uVar12 = *(uint *)(param_1 + 0x2d8);
  uStack_e8 = CONCAT44(uStack_144,local_148);
  uStack_100 = 0xffffffff;
  uStack_fc = uStack_134;
  local_f8 = CONCAT44(uStack_12c,iStack_130);
  uVar9 = uVar12 & 0xffffffe0;
  iStack_110 = local_148;
  uStack_10c = uStack_144;
  if (uVar12 != uVar1) {
    puVar10 = *(uint **)(param_1 + 0x2d0);
    if (*(uint **)(param_1 + 0x2d0) == (uint *)0x0) {
      puVar10 = puStack_140;
    }
    uVar6 = puVar10[(int)uVar12 >> 5] & -1 << ((byte)uVar12 & 0x1f);
    iVar5 = (int)uVar12 >> 5;
    while (uVar6 == 0) {
      uVar9 = uVar9 + 0x20;
      if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar5) goto LAB_1407ba64d;
      uVar6 = puVar10[(longlong)iVar5 + 1];
      iVar5 = iVar5 + 1;
    }
    uVar6 = uVar6 - 1 & uVar6 ^ uVar6;
    iVar5 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar5 == 0; iVar5 = iVar5 + -1) {
      }
    }
    if (uVar6 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0x1f - iVar5;
    }
    uVar12 = (uVar9 - iVar5) + 0x1f;
    if ((int)uVar1 < (int)uVar12) {
LAB_1407ba64d:
      uVar12 = uVar1;
    }
  }
  iVar5 = 0;
  local_108 = puStack_140;
  local_f0 = local_150;
  puStack_e0 = puStack_140;
  uStack_d0 = local_f8;
  local_118 = local_150;
  uStack_d8 = uStack_100;
  uStack_d4 = uStack_fc;
  while( true ) {
    if ((uStack_fc == uVar12) && (local_108 == puStack_140)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if ((bVar3) && (local_118 == local_150)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) break;
    lVar7 = *(longlong *)(*local_118 + (longlong)(int)uStack_fc * 0x10);
    if (lVar7 != 0) {
      lVar4 = AGVersusPlayerState::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        iVar2 = *(int *)(param_2 + 0x88);
        *(int *)(param_2 + 0x88) = iVar2 + 1;
        if (*(int *)(param_2 + 0x8c) < iVar2 + 1) {
          TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeGrow(param_2,iVar2);
        }
        lVar4 = *(longlong *)(param_2 + 0x80);
        if (*(longlong *)(param_2 + 0x80) == 0) {
          lVar4 = param_2;
        }
        *(longlong *)(lVar4 + (longlong)iVar2 * 8) = lVar7;
      }
    }
    if ((local_158 != '\0') && (lVar7 != 0)) {
      lVar4 = UUGStartScreenUW::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar4 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8
           ) != lVar4 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        local_120 = iVar13 + 1;
        if (iVar5 < local_120) {
          TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_128,iVar13);
          plVar11 = local_128;
          iVar5 = local_11c;
        }
        plVar11[iVar13] = lVar7;
        iVar13 = local_120;
      }
    }
    uStack_100 = uStack_100 & ~uStack_10c;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_110);
  }
  if (local_158 != '\0') {
    uVar8 = 0;
    local_48 = (undefined1 *)0x0;
    local_40 = 0;
    uVar15 = (ulonglong)((longlong)(plVar11 + iVar13) + (7 - (longlong)plVar11)) >> 3;
    if (plVar11 + iVar13 < plVar11) {
      uVar15 = uVar8;
    }
    plVar14 = plVar11;
    if (uVar15 != 0) {
      do {
        if (*(longlong *)(*plVar14 + 0x2d8) != 0) {
          FUN_1407ba460(*(longlong *)(*plVar14 + 0x2d8),local_c8,1);
          iVar13 = (int)local_40;
          lVar7 = (longlong)(int)local_40;
          if ((int)local_40 != 0) {
            iVar5 = *(int *)(param_2 + 0x88);
            if (*(int *)(param_2 + 0x8c) < (int)local_40 + iVar5) {
              FUN_1407418a0(param_2);
              iVar5 = *(int *)(param_2 + 0x88);
            }
            _Src = local_c8;
            if (local_48 != (undefined1 *)0x0) {
              _Src = local_48;
            }
            lVar4 = *(longlong *)(param_2 + 0x80);
            if (*(longlong *)(param_2 + 0x80) == 0) {
              lVar4 = param_2;
            }
            _guard_xfg_dispatch_icall_nop((void *)(lVar4 + (longlong)iVar5 * 8),_Src,lVar7 << 3);
            *(int *)(param_2 + 0x88) = *(int *)(param_2 + 0x88) + iVar13;
            local_40 = local_40 & 0xffffffff00000000;
          }
        }
        uVar8 = uVar8 + 1;
        plVar14 = plVar14 + 1;
      } while (uVar8 != uVar15);
      if (local_48 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
  }
  if (plVar11 != (longlong *)0x0) {
    FMemory::Free(plVar11);
  }
  return;
}



// FUNCTION 1407ba8d0 FUN_1407ba8d0 body=208 status=ok
// SIG undefined FUN_1407ba8d0(void)

longlong FUN_1407ba8d0(longlong param_1,int param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x88) <= param_2)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x80);
  if (*(longlong *)(param_1 + 0x80) == 0) {
    lVar3 = param_1;
  }
  plVar4 = (longlong *)(lVar3 + (longlong)param_2 * 0x20);
  if (plVar4 == (longlong *)0x0) {
    return 0;
  }
  if ((short)plVar4[3] != 0x28) {
    if ((short)plVar4[3] != 0x27) {
      return 0;
    }
    local_18 = (undefined4)*plVar4;
    uStack_14 = *(undefined4 *)((longlong)plVar4 + 4);
    uStack_10 = (undefined4)plVar4[1];
    uStack_c = *(undefined4 *)((longlong)plVar4 + 0xc);
    lVar3 = FHardwareCursor::GetHandle(&local_18);
    return lVar3;
  }
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    lVar2 = UObject::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8)
        != lVar2 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return lVar3;
    }
  }
  return 0;
}



// FUNCTION 1407ba9a0 FUN_1407ba9a0 body=112 status=ok
// SIG undefined FUN_1407ba9a0(void)

longlong FUN_1407ba9a0(longlong *param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  if ((short)param_1[3] != 0x28) {
    return 0;
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    lVar3 = UObject::GetPrivateStaticClass();
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



// FUNCTION 1407baa10 FUN_1407baa10 body=69 status=ok
// SIG undefined FUN_1407baa10(void)

ulonglong FUN_1407baa10(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UMaterialInstanceConstant::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1407baa60 FUN_1407baa60 body=69 status=ok
// SIG undefined FUN_1407baa60(void)

ulonglong FUN_1407baa60(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = UAnimMontage::GetPrivateStaticClass();
  iVar1 = *(int *)(lVar2 + 0x90);
  uVar3 = (longlong)iVar1;
  if ((iVar1 <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x90)) &&
     (uVar3 = *(ulonglong *)(*(longlong *)(param_1 + 0x10) + 0x88),
     *(longlong *)(uVar3 + (longlong)iVar1 * 8) == lVar2 + 0x88)) {
    return CONCAT71((int7)(uVar3 >> 8),1);
  }
  return uVar3 & 0xffffffffffffff00;
}



// FUNCTION 1407baab0 NewObject<UTTLSaveOptionObject> body=89 status=ok
// SIG undefined NewObject<UTTLSaveOptionObject>(void)

void NewObject<UTTLSaveOptionObject>(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1417846f0(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSuobject<> instead."
               );
  uVar1 = FUN_1407e4b30();
  FUN_1417985e0(uVar1,param_1,0,0,0,0,0,0,0);
  return;
}



// FUNCTION 1407bab10 FUN_1407bab10 body=416 status=ok
// SIG undefined FUN_1407bab10(void)

int FUN_1407bab10(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  bool bVar10;
  
  iVar1 = (int)param_1[0x19];
  lVar3 = (longlong)iVar1;
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = 0;
  plVar2 = (longlong *)param_1[0x18];
  if ((longlong *)param_1[0x18] == (longlong *)0x0) {
    plVar2 = param_1;
  }
  bVar10 = *plVar2 != 0;
  uVar6 = uVar4;
  uVar9 = uVar4;
  do {
    iVar5 = (int)uVar6;
    uVar4 = uVar4 + 1;
    uVar6 = (ulonglong)(iVar5 + 1);
    if ((longlong)uVar4 < lVar3) {
      plVar2 = (longlong *)param_1[0x18];
      if ((longlong *)param_1[0x18] == (longlong *)0x0) {
        plVar2 = param_1;
      }
      plVar2 = plVar2 + uVar4 * 3;
      do {
        if (bVar10 != (*plVar2 != 0)) break;
        uVar6 = (ulonglong)((int)uVar6 + 1);
        uVar4 = uVar4 + 1;
        plVar2 = plVar2 + 3;
      } while ((longlong)uVar4 < lVar3);
    }
    iVar7 = (int)uVar6 - iVar5;
    if (bVar10 == false) {
      plVar2 = (longlong *)param_1[0x18];
      if ((longlong *)param_1[0x18] == (longlong *)0x0) {
        plVar2 = param_1;
      }
      if (iVar7 != 0) {
        plVar2 = plVar2 + (longlong)iVar5 * 3 + 1;
        do {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          plVar2 = plVar2 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      iVar8 = (int)uVar9;
      if (iVar8 != iVar5) {
        plVar2 = (longlong *)param_1[0x18];
        if ((longlong *)param_1[0x18] == (longlong *)0x0) {
          plVar2 = param_1;
        }
        _guard_xfg_dispatch_icall_nop
                  (plVar2 + (longlong)iVar8 * 3,plVar2 + (longlong)iVar5 * 3,(longlong)iVar7 * 0x18)
        ;
      }
      uVar9 = (ulonglong)(uint)(iVar8 + iVar7);
    }
    bVar10 = (bool)(bVar10 ^ 1);
    if (lVar3 <= (longlong)uVar4) {
      *(int *)(param_1 + 0x19) = (int)uVar9;
      return iVar1 - (int)uVar9;
    }
  } while( true );
}



// FUNCTION 1407bacb0 FUN_1407bacb0 body=406 status=ok
// SIG undefined FUN_1407bacb0(void)

int FUN_1407bacb0(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  iVar3 = (int)param_1[1];
  lVar6 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar11 = 0;
  bVar14 = *(char *)(*param_1 + 8) != '\x03';
  lVar9 = 0;
  iVar12 = 0;
  do {
    lVar9 = lVar9 + 1;
    iVar13 = iVar12 + 1;
    if (lVar9 < lVar6) {
      pcVar7 = (char *)(*param_1 + 8 + lVar9 * 0xa8);
      do {
        if (bVar14 != (*pcVar7 != '\x03')) break;
        iVar13 = iVar13 + 1;
        lVar9 = lVar9 + 1;
        pcVar7 = pcVar7 + 0xa8;
      } while (lVar9 < lVar6);
    }
    iVar8 = iVar13 - iVar12;
    if (bVar14 == false) {
      if (iVar8 != 0) {
        plVar10 = (longlong *)((longlong)iVar12 * 0xa8 + 0x58 + *param_1);
        do {
          plVar4 = (longlong *)plVar10[7];
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
              iVar12 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar12 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          if (*plVar10 != 0) {
            FMemory::Free();
          }
          plVar10 = plVar10 + 0x15;
          iVar8 = iVar8 + -1;
        } while (iVar8 != 0);
      }
    }
    else {
      if (iVar11 != iVar12) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)((longlong)iVar11 * 0xa8 + *param_1),
                   (void *)((longlong)iVar12 * 0xa8 + *param_1),(longlong)iVar8 * 0xa8);
      }
      iVar11 = iVar11 + iVar8;
    }
    bVar14 = (bool)(bVar14 ^ 1);
    iVar12 = iVar13;
    if (lVar6 <= lVar9) {
      *(int *)(param_1 + 1) = iVar11;
      return iVar3 - iVar11;
    }
  } while( true );
}



// FUNCTION 1407bae50 FUN_1407bae50 body=30 status=ok
// SIG undefined FUN_1407bae50(void)

void FUN_1407bae50(undefined8 param_1)

{
  FUN_142194380(param_1,0xe,0,1,0);
  return;
}



// FUNCTION 1407bae70 FUN_1407bae70 body=30 status=ok
// SIG undefined FUN_1407bae70(void)

void FUN_1407bae70(undefined8 param_1)

{
  FUN_142194380(param_1,10,0,0,1);
  return;
}



// FUNCTION 1407bae90 FUN_1407bae90 body=525 status=ok
// SIG undefined FUN_1407bae90(void)

void FUN_1407bae90(undefined4 *param_1,undefined4 *param_2,longlong param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  char cVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  undefined4 *puVar15;
  ulonglong local_60;
  undefined4 *local_58;
  longlong local_48 [2];
  
  if ((param_1 != param_2) && (local_58 = param_1 + 6, local_58 != param_2)) {
    puVar15 = param_1 + 0xb;
    local_60 = 2;
    do {
      uVar1 = local_60 - 1;
      do {
        uVar13 = 0;
        uVar14 = 0;
        if (local_60 != 1) {
          uVar12 = *(undefined8 *)(param_3 + 8);
          do {
            cVar10 = (char)uVar12;
            do {
              uVar11 = std::_guard_xfg_dispatch_icall_nop();
            } while (*(ulonglong *)(param_3 + 0x10) < (ulonglong)uVar11);
            uVar12 = *(undefined8 *)(param_3 + 8);
            uVar13 = (uVar13 << (cVar10 - 1U & 0x3f)) * 2 | (ulonglong)uVar11;
            uVar14 = (uVar14 << ((char)uVar12 - 1U & 0x3f)) * 2 | *(ulonglong *)(param_3 + 0x10);
          } while (uVar14 < uVar1);
        }
      } while ((uVar14 / local_60 <= uVar13 / local_60) && (uVar14 % local_60 != uVar1));
      if (uVar13 % local_60 != uVar1) {
        lVar9 = *(longlong *)(puVar15 + -3);
        puVar4 = param_1 + (uVar13 % local_60) * 6;
        plVar2 = (longlong *)(puVar15 + -3);
        plVar3 = (longlong *)(puVar4 + 2);
        uVar5 = *(undefined1 *)(puVar15 + -4);
        uVar6 = *local_58;
        *plVar2 = 0;
        uVar7 = puVar15[-1];
        uVar8 = *puVar15;
        *(undefined8 *)(puVar15 + -1) = 0;
        *local_58 = *puVar4;
        *(undefined1 *)(puVar15 + -4) = *(undefined1 *)(puVar4 + 1);
        if (plVar2 != plVar3) {
          if (*plVar2 != 0) {
            FMemory::Free();
          }
          *plVar2 = *plVar3;
          *plVar3 = 0;
          puVar15[-1] = puVar4[4];
          *puVar15 = puVar4[5];
          *(undefined8 *)(puVar4 + 4) = 0;
        }
        *puVar4 = uVar6;
        *(undefined1 *)(puVar4 + 1) = uVar5;
        if (plVar3 == local_48) {
          if (lVar9 != 0) {
            FMemory::Free(lVar9);
          }
        }
        else {
          if (*plVar3 != 0) {
            FMemory::Free();
          }
          *plVar3 = lVar9;
          puVar4[4] = uVar7;
          puVar4[5] = uVar8;
        }
      }
      local_60 = local_60 + 1;
      local_58 = local_58 + 6;
      puVar15 = puVar15 + 6;
    } while (local_58 != param_2);
  }
  return;
}



// FUNCTION 1407bb0a0 FUN_1407bb0a0 body=310 status=ok
// SIG undefined FUN_1407bb0a0(void)

longlong FUN_1407bb0a0(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong *plVar12;
  
  plVar12 = (longlong *)0x0;
  plVar4 = (longlong *)param_1[0x10];
  if ((longlong *)param_1[0x10] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar1 = plVar4 + (int)param_1[0x11];
  plVar10 = plVar1;
  if ((plVar4 != plVar1) && (plVar4 + 1 != plVar1)) {
    plVar6 = plVar4 + 1;
    lVar8 = *plVar4;
    do {
      plVar3 = plVar6;
      plVar6 = plVar3 + 1;
      if (lVar8 == *plVar3) {
        plVar10 = (longlong *)((ulonglong)((longlong)plVar1 + (7 - (longlong)plVar6)) >> 3);
        if (plVar1 < plVar6) {
          plVar10 = plVar12;
        }
        plVar3 = plVar12;
        if (plVar10 != (longlong *)0x0) {
          do {
            if (*plVar4 != *plVar6) {
              plVar4 = plVar4 + 1;
              *plVar4 = *plVar6;
            }
            plVar6 = plVar6 + 1;
            plVar3 = (longlong *)((longlong)plVar3 + 1);
          } while (plVar3 != plVar10);
        }
        plVar10 = plVar4 + 1;
        break;
      }
      plVar4 = plVar3;
      lVar8 = *plVar3;
    } while (plVar6 != plVar1);
  }
  uVar11 = param_1[0x10];
  iVar5 = (int)param_1[0x11];
  lVar8 = (longlong)plVar1 - (longlong)plVar10 >> 3;
  if (uVar11 == 0) {
    plVar12 = param_1;
  }
  if ((plVar10 != (longlong *)(((ulonglong)plVar12 | uVar11) + (longlong)iVar5 * 8)) &&
     (iVar7 = (int)lVar8, 0 < iVar7)) {
    uVar11 = uVar11 | (ulonglong)plVar12;
    iVar9 = (int)((longlong)((longlong)plVar10 - uVar11) >> 3);
    iVar2 = (iVar5 - iVar9) - iVar7;
    if (iVar2 != 0) {
      _guard_xfg_dispatch_icall_nop
                ((void *)(uVar11 + (longlong)iVar9 * 8),
                 (void *)(uVar11 + (longlong)(iVar9 + iVar7) * 8),(longlong)iVar2 << 3);
      iVar5 = (int)param_1[0x11];
    }
    *(int *)(param_1 + 0x11) = iVar5 - iVar7;
    TArray<AEmitter_*,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(param_1);
  }
  return lVar8;
}



// FUNCTION 1407bb1e0 TFunction<void___cdecl(void)> body=112 status=ok
// SIG undefined TFunction<void___cdecl(void)>(void)

undefined8 *
TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>
          (undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_2 + 8) != 0) {
    puVar2 = (undefined8 *)param_2[6];
    if ((undefined8 *)param_2[6] == (undefined8 *)0x0) {
      puVar2 = param_2 + 2;
    }
    if (puVar2 != (undefined8 *)0x0) {
      plVar1 = (longlong *)(**(code **)*puVar2)(puVar2,param_1 + 2);
      (**(code **)(*plVar1 + 8))(plVar1);
      *param_1 = *param_2;
      return param_1;
    }
  }
  *param_1 = FUN_1407c3030;
  return param_1;
}



// FUNCTION 1407bb250 FUN_1407bb250 body=497 status=ok
// SIG undefined FUN_1407bb250(void)

undefined8 * FUN_1407bb250(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  plVar1 = param_1 + 0x95;
  *param_1 = &PTR_FUN_1440dbb88;
  param_1[0x8b] = &PTR_LAB_1440dc278;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *plVar1 = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SceneComp",1);
  uVar6 = *puVar3;
  uVar4 = FUN_1429ff160();
  lVar5 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x90] = lVar5;
  *(undefined1 *)(lVar5 + 0x24e) = 0;
  param_1[0x2d] = param_1[0x90];
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnPointComponent",1);
  uVar6 = *puVar3;
  uVar4 = AGVersusPlayerState::GetPrivateStaticClass();
  uVar6 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x91] = uVar6;
  local_res8 = 0;
  FUN_142399e30(uVar6,param_1[0x90],0);
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnRoot",1);
  uVar6 = *puVar3;
  uVar4 = FUN_1429ff160();
  lVar5 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x94] = lVar5;
  *(undefined1 *)(lVar5 + 0x24e) = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x97] = param_1;
    param_1[0x96] = &DAT_14685c3b0;
    *plVar1 = (longlong)DAT_14685c3b0;
    DAT_14685c3b0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  *param_1 = &PTR__scalar_deleting_destructor__1440dc298;
  param_1[0x8b] = &PTR_LAB_1440dc988;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  return param_1;
}



// FUNCTION 1407bb450 FUN_1407bb450 body=459 status=ok
// SIG undefined FUN_1407bb450(void)

undefined8 * FUN_1407bb450(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  plVar1 = param_1 + 0x95;
  *param_1 = &PTR_FUN_1440dbb88;
  param_1[0x8b] = &PTR_LAB_1440dc278;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  *plVar1 = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SceneComp",1);
  uVar6 = *puVar3;
  uVar4 = FUN_1429ff160();
  lVar5 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x90] = lVar5;
  *(undefined1 *)(lVar5 + 0x24e) = 0;
  param_1[0x2d] = param_1[0x90];
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnPointComponent",1);
  uVar6 = *puVar3;
  uVar4 = AGVersusPlayerState::GetPrivateStaticClass();
  uVar6 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x91] = uVar6;
  local_res8 = 0;
  FUN_142399e30(uVar6,param_1[0x90],0);
  puVar3 = (undefined8 *)FName::FName(&local_res8,L"SpawnRoot",1);
  uVar6 = *puVar3;
  uVar4 = FUN_1429ff160();
  lVar5 = FUN_141752410(param_1,uVar6,uVar4,uVar4,1,0,0);
  param_1[0x94] = lVar5;
  *(undefined1 *)(lVar5 + 0x24e) = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x97] = param_1;
    param_1[0x96] = &DAT_14685c3b0;
    *plVar1 = (longlong)DAT_14685c3b0;
    DAT_14685c3b0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407bb620 FUN_1407bb620 body=684 status=ok
// SIG undefined FUN_1407bb620(void)

undefined8 * FUN_1407bb620(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_res8;
  
  FUN_14221fbd0();
  *param_1 = &PTR_FUN_1440ddd20;
  param_1[0x8b] = &PTR_LAB_1440de438;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 2;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  param_1[0xbc] = 0;
  *(byte *)((longlong)param_1 + 0x91) = *(byte *)((longlong)param_1 + 0x91) & 0xbf;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnerComponent",1);
  uVar3 = *puVar1;
  uVar2 = FUN_1407e27e0();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb1] = uVar3;
  param_1[0x2d] = uVar3;
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnPointComponent",1);
  uVar3 = *puVar1;
  uVar2 = AGVersusPlayerState::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb3] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnerLinkComponent",1);
  uVar3 = *puVar1;
  uVar2 = UCheckBox::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb2] = uVar3;
  local_res8 = 0;
  FUN_142399e30(uVar3,param_1[0x2d],0);
  puVar1 = (undefined8 *)FName::FName(&local_res8,L"SpawnerTeamComponent",1);
  uVar3 = *puVar1;
  uVar2 = UAnimMontage::GetPrivateStaticClass();
  uVar3 = FUN_141752410(param_1,uVar3,uVar2,uVar2,1,0,0);
  param_1[0xb4] = uVar3;
  return param_1;
}



// FUNCTION 1407bb8d0 FUN_1407bb8d0 body=17 status=ok
// SIG undefined FUN_1407bb8d0(void)

undefined1 * FUN_1407bb8d0(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return param_1;
}



// FUNCTION 1407bb8f0 FUN_1407bb8f0 body=221 status=ok
// SIG undefined FUN_1407bb8f0(void)

longlong FUN_1407bb8f0(longlong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  FUN_142de2eb0(param_1 + 8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  puVar5 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)(param_1 + 8) = *puVar5;
  *(undefined1 *)(param_1 + 9) = puVar5[1];
  *(undefined1 *)(param_1 + 10) = puVar5[2];
  *(undefined1 *)(param_1 + 0xb) = puVar5[3];
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(puVar5 + 0x10);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(puVar5 + 0x20);
  *(undefined8 *)(param_1 + 0x30) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(puVar5 + 0x30);
  *(undefined8 *)(param_1 + 0x40) = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(puVar5 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = uVar4;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x68) = uVar2;
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x66;
  FUN_142df3150(param_1 + 8,7);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x80);
  return param_1;
}



// FUNCTION 1407bb9d0 FUN_1407bb9d0 body=15 status=ok
// SIG undefined FUN_1407bb9d0(void)

undefined4 * FUN_1407bb9d0(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return param_1;
}



// FUNCTION 1407bb9e0 FUN_1407bb9e0 body=93 status=ok
// SIG undefined FUN_1407bb9e0(void)

longlong FUN_1407bb9e0(longlong param_1)

{
  FUN_142de2d20(param_1 + 8,0x3f800000,0);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  FUN_142de2c00(param_1 + 0xa0,1,2);
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) | 0x6e;
  *(byte *)(param_1 + 0xa1) = *(byte *)(param_1 + 0xa1) | 0x6e;
  *(undefined4 *)(param_1 + 0x120) = 1;
  return param_1;
}



// FUNCTION 1407bba40 FUN_1407bba40 body=411 status=ok
// SIG undefined FUN_1407bba40(void)

undefined8 * FUN_1407bba40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_88 [128];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  FUN_142de2eb0(param_1 + 9);
  FUN_142de2eb0(param_1 + 0x1a);
  puVar2 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)(param_1 + 9) = *puVar2;
  *(undefined1 *)((longlong)param_1 + 0x49) = puVar2[1];
  *(undefined1 *)((longlong)param_1 + 0x4a) = puVar2[2];
  *(undefined1 *)((longlong)param_1 + 0x4b) = puVar2[3];
  *(undefined8 *)((longlong)param_1 + 0x4c) = *(undefined8 *)(puVar2 + 4);
  param_1[0xb] = *(undefined8 *)(puVar2 + 0x10);
  param_1[0xc] = *(undefined8 *)(puVar2 + 0x18);
  uVar1 = *(undefined8 *)(puVar2 + 0x28);
  param_1[0xd] = *(undefined8 *)(puVar2 + 0x20);
  param_1[0xe] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x38);
  param_1[0xf] = *(undefined8 *)(puVar2 + 0x30);
  param_1[0x10] = uVar1;
  uVar1 = *(undefined8 *)(puVar2 + 0x48);
  param_1[0x11] = *(undefined8 *)(puVar2 + 0x40);
  param_1[0x12] = uVar1;
  param_1[0x13] = *(undefined8 *)(puVar2 + 0x50);
  uVar1 = *(undefined8 *)(puVar2 + 0x60);
  param_1[0x14] = *(undefined8 *)(puVar2 + 0x58);
  param_1[0x15] = uVar1;
  param_1[0x16] = *(undefined8 *)(puVar2 + 0x68);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(puVar2 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0xbc) = *(undefined4 *)(puVar2 + 0x74);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(puVar2 + 0x78);
  *(byte *)((longlong)param_1 + 0x49) = *(byte *)((longlong)param_1 + 0x49) | 0x6e;
  *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 9);
  *(undefined1 *)((longlong)param_1 + 0xd1) = *(undefined1 *)((longlong)param_1 + 0x49);
  *(undefined1 *)((longlong)param_1 + 0xd2) = *(undefined1 *)((longlong)param_1 + 0x4a);
  *(undefined1 *)((longlong)param_1 + 0xd3) = *(undefined1 *)((longlong)param_1 + 0x4b);
  *(undefined8 *)((longlong)param_1 + 0xd4) = *(undefined8 *)((longlong)param_1 + 0x4c);
  param_1[0x1c] = param_1[0xb];
  param_1[0x1d] = param_1[0xc];
  param_1[0x1e] = param_1[0xd];
  param_1[0x1f] = param_1[0xe];
  param_1[0x20] = param_1[0xf];
  param_1[0x21] = param_1[0x10];
  param_1[0x22] = param_1[0x11];
  param_1[0x23] = param_1[0x12];
  param_1[0x24] = param_1[0x13];
  param_1[0x25] = param_1[0x14];
  param_1[0x26] = param_1[0x15];
  param_1[0x27] = param_1[0x16];
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x17);
  *(undefined4 *)((longlong)param_1 + 0x144) = *(undefined4 *)((longlong)param_1 + 0xbc);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_1 + 0x18);
  return param_1;
}



// FUNCTION 1407bbbe0 FUN_1407bbbe0 body=178 status=ok
// SIG undefined FUN_1407bbbe0(void)

undefined8 * FUN_1407bbbe0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  if (((param_2 + 9 != param_1 + 9) && (*(int *)(param_2 + 10) != 0)) &&
     (plVar1 = (longlong *)param_2[9], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))();
  }
  param_1[0xb] = param_2[0xb];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined2 *)((longlong)param_1 + 100) = *(undefined2 *)((longlong)param_2 + 100);
  *(undefined1 *)((longlong)param_1 + 0x66) = *(undefined1 *)((longlong)param_2 + 0x66);
  return param_1;
}



// FUNCTION 1407bbca0 FUN_1407bbca0 body=107 status=ok
// SIG undefined FUN_1407bbca0(void)

undefined8 * FUN_1407bbca0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FWeakObjectPtr::operator=(param_1 + 5,0);
  param_1[6] = 0;
  FWeakObjectPtr::operator=(param_1 + 7,0);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)((longlong)param_1 + 100) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66) = 0;
  return param_1;
}



// FUNCTION 1407bbd10 FUN_1407bbd10 body=198 status=ok
// SIG undefined FUN_1407bbd10(void)

longlong FUN_1407bbd10(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_1407bbbe0();
  *(undefined4 *)(param_1 + 0x68) = param_3;
  if (*(longlong *)(param_1 + 0x30) == 0) {
LAB_1407bbd5e:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x28);
    if (lVar3 == 0) goto LAB_1407bbd5e;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0x30));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x6c) = bVar4;
  if (*(longlong *)(param_1 + 0x40) == 0) {
LAB_1407bbd93:
    bVar4 = false;
  }
  else {
    lVar3 = FWeakObjectPtr::Get(param_1 + 0x38);
    if (lVar3 == 0) goto LAB_1407bbd93;
    lVar3 = UObject::FindFunction(lVar3,*(undefined8 *)(param_1 + 0x40));
    bVar4 = lVar3 != 0;
  }
  *(bool *)(param_1 + 0x6d) = bVar4;
  if ((*(int *)(param_1 + 0x50) != 0) && (*(longlong **)(param_1 + 0x48) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x48) + 0x18))();
    if (cVar1 != '\0') {
      uVar2 = 1;
      goto LAB_1407bbdb6;
    }
  }
  uVar2 = 0;
LAB_1407bbdb6:
  *(undefined1 *)(param_1 + 0x6e) = uVar2;
  *(bool *)(param_1 + 0x6f) = *(longlong *)(param_1 + 0x58) != 0;
  return param_1;
}



// FUNCTION 1407bbde0 FUN_1407bbde0 body=27 status=ok
// SIG undefined FUN_1407bbde0(void)

undefined8 * FUN_1407bbde0(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *(undefined1 *)((longlong)param_1 + 0xc) = 0;
  return param_1;
}



// FUNCTION 1407bbe00 FUN_1407bbe00 body=214 status=ok
// SIG undefined FUN_1407bbe00(void)

undefined8 * FUN_1407bbe00(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  float fVar3;
  undefined8 local_88 [2];
  undefined1 local_78 [80];
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x70);
  *param_1 = *param_2;
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_2 + 2);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,param_1 + 2,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  param_1[0xc] = param_2[0xc];
  local_88[0] = 0xffffffffffffffff;
  fVar3 = (float)FUN_142de77e0(param_3 + 8,*param_1,0,local_88);
  *(float *)(param_1 + 1) = fVar3 * *(float *)(param_2 + 1);
  return param_1;
}



// FUNCTION 1407bbee0 FUN_1407bbee0 body=222 status=ok
// SIG undefined FUN_1407bbee0(void)

undefined8 *
FUN_1407bbee0(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 local_78 [80];
  
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0xc),0,100);
  *(undefined4 *)(param_1 + 1) = 0x3f800000;
  *param_1 = param_2;
  lVar1 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_78,param_3);
  FGenericPlatformMemory::MemswapGreaterThan8(lVar1,param_1 + 2,0x50);
  if (*(int *)(lVar1 + 0x40) != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    if (*(longlong **)(lVar1 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(lVar1 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(lVar1 + 0x30) != 0) {
    FMemory::Free();
  }
  param_1[0xc] = param_4;
  if (*(int *)(param_3 + 0x40) != 0) {
    plVar2 = *(longlong **)(param_3 + 0x30);
    if (*(longlong **)(param_3 + 0x30) == (longlong *)0x0) {
      plVar2 = (longlong *)(param_3 + 0x10);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,0);
    }
  }
  if (*(longlong *)(param_3 + 0x30) != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1407bbfc0 FUN_1407bbfc0 body=344 status=ok
// SIG undefined FUN_1407bbfc0(void)

undefined4 * FUN_1407bbfc0(undefined4 *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_3c [12];
  undefined8 local_30;
  longlong *local_28 [2];
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  *(undefined8 *)(param_1 + 0x10) = param_2;
  puVar9 = (undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0xe) = 0;
  local_28[0] = (longlong *)0x0;
  *param_1 = 0xffffffff;
  *puVar9 = 0;
  *(undefined8 *)(param_1 + 0x14) = 0;
  if (puVar9 != &local_30) {
    *puVar9 = 0;
    local_30 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(param_1 + 0x14,local_28);
    plVar6 = local_28[0];
    if (local_28[0] != (longlong *)0x0) {
      LOCK();
      plVar1 = local_28[0] + 1;
      lVar10 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar10 == 1) {
        (**(code **)*local_28[0])(local_28[0]);
        LOCK();
        piVar2 = (int *)((longlong)plVar6 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*local_28[0] + 8))(local_28[0],1);
        }
      }
    }
  }
  lVar10 = *(longlong *)(param_1 + 0x10);
  lVar8 = *(longlong *)(lVar10 + 0x120);
  if (lVar8 == 0) {
    lVar8 = FUN_1423407b0(lVar10);
    lVar10 = *(longlong *)(param_1 + 0x10);
  }
  *(longlong *)(param_1 + 8) = lVar8;
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(lVar10 + 0x118);
  uVar4 = *(undefined4 *)(lVar10 + 0x224);
  uVar5 = *(undefined4 *)(lVar10 + 0x228);
  param_1[1] = *(undefined4 *)(lVar10 + 0x220);
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  local_18 = *(float *)(lVar10 + 0x210);
  fStack_14 = *(float *)(lVar10 + 0x214);
  fStack_10 = *(float *)(lVar10 + 0x218);
  fStack_c = *(float *)(lVar10 + 0x21c);
  auVar3._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != fStack_14);
  auVar3._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != local_18);
  auVar3._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_10);
  auVar3._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_c);
  iVar7 = movmskps(uVar5,auVar3);
  if (iVar7 != 0) {
    *(float *)(lVar10 + 0x250) = local_18;
    *(float *)(lVar10 + 0x254) = fStack_14;
    *(float *)(lVar10 + 600) = fStack_10;
    *(float *)(lVar10 + 0x25c) = fStack_c;
    puVar9 = (undefined8 *)FQuat::Rotator(&local_18,local_3c);
    *(undefined8 *)(lVar10 + 0x260) = *puVar9;
    *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar9 + 1);
  }
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(lVar10 + 0x260);
  param_1[6] = *(undefined4 *)(lVar10 + 0x268);
  return param_1;
}



// FUNCTION 1407bc120 FUN_1407bc120 body=567 status=ok
// SIG undefined FUN_1407bc120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_1407bc120(undefined4 *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  char cVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *plStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  float local_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  uVar9 = 0;
  puVar1 = (undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x14) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x58);
  if ((longlong *)*param_2 != (longlong *)0x0) {
    uVar9 = (**(code **)(*(longlong *)*param_2 + 0x148))();
  }
  *(undefined8 *)(param_1 + 8) = uVar9;
  *(longlong *)(param_1 + 0xe) = param_2[8];
  if ((*(char *)(param_3 + 1) == '\x02') &&
     (plVar4 = (longlong *)param_3[10], plVar4 != (longlong *)0x0)) {
    cVar7 = (**(code **)(*plVar4 + 0x2a0))(plVar4,*param_3);
    if (cVar7 != '\0') goto LAB_1407bc27f;
  }
  lVar5 = *(longlong *)(param_1 + 0xe);
  if (lVar5 != 0) {
    iVar8 = *(int *)(param_3 + 2);
    if ((-1 < iVar8) && (iVar8 < *(int *)(lVar5 + 0x978))) {
      lVar5 = *(longlong *)(*(longlong *)(lVar5 + 0x970) + (longlong)iVar8 * 8);
      *(longlong *)(param_1 + 0x10) = lVar5;
      local_88 = *(undefined4 *)(lVar5 + 0x220);
      uStack_84 = *(undefined4 *)(lVar5 + 0x224);
      local_80 = *(undefined4 *)(lVar5 + 0x228);
      uStack_4c = *(undefined4 *)(lVar5 + 0x22c);
      *(undefined4 *)((longlong)param_3 + 0x1c) = local_88;
      *(undefined4 *)(param_3 + 4) = uStack_84;
      *(undefined4 *)((longlong)param_3 + 0x24) = local_80;
      lVar5 = *(longlong *)(param_1 + 0x10);
      local_78 = *(float *)(lVar5 + 0x210);
      fStack_74 = *(float *)(lVar5 + 0x214);
      fStack_70 = *(float *)(lVar5 + 0x218);
      fStack_6c = *(float *)(lVar5 + 0x21c);
      auVar6._4_4_ = -(uint)(*(float *)(lVar5 + 0x254) != fStack_74);
      auVar6._0_4_ = -(uint)(*(float *)(lVar5 + 0x250) != local_78);
      auVar6._8_4_ = -(uint)(*(float *)(lVar5 + 600) != fStack_70);
      auVar6._12_4_ = -(uint)(*(float *)(lVar5 + 0x25c) != fStack_6c);
      iVar8 = movmskps(local_80,auVar6);
      local_58 = local_88;
      uStack_54 = uStack_84;
      uStack_50 = local_80;
      if (iVar8 != 0) {
        *(float *)(lVar5 + 0x250) = local_78;
        *(float *)(lVar5 + 0x254) = fStack_74;
        *(float *)(lVar5 + 600) = fStack_70;
        *(float *)(lVar5 + 0x25c) = fStack_6c;
        puVar10 = (undefined8 *)FQuat::Rotator(&local_78,local_68);
        *(undefined8 *)(lVar5 + 0x260) = *puVar10;
        *(undefined4 *)(lVar5 + 0x268) = *(undefined4 *)(puVar10 + 1);
      }
      param_3[5] = *(undefined8 *)(lVar5 + 0x260);
      *(undefined4 *)(param_3 + 6) = *(undefined4 *)(lVar5 + 0x268);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x118);
    }
  }
LAB_1407bc27f:
  *param_1 = *(undefined4 *)((longlong)param_3 + 0x14);
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)((longlong)param_3 + 0x1c);
  param_1[3] = *(undefined4 *)((longlong)param_3 + 0x24);
  *(undefined8 *)(param_1 + 4) = param_3[5];
  param_1[6] = *(undefined4 *)(param_3 + 6);
  plVar4 = (longlong *)param_3[0x12];
  uVar9 = param_3[0x11];
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  local_98 = uVar9;
  plStack_90 = plVar4;
  if (&local_98 != puVar1) {
    local_98 = *puVar1;
    plStack_90 = *(longlong **)(param_1 + 0x14);
    *puVar1 = uVar9;
    *(longlong **)(param_1 + 0x14) = plVar4;
    local_48 = uVar9;
    plStack_40 = plVar4;
  }
  plVar4 = plStack_90;
  if (plStack_90 != (longlong *)0x0) {
    LOCK();
    plVar2 = plStack_90 + 1;
    lVar5 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
      (**(code **)*plStack_90)(plStack_90);
      LOCK();
      piVar3 = (int *)((longlong)plVar4 + 0xc);
      iVar8 = *piVar3;
      *piVar3 = *piVar3 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        (**(code **)(*plStack_90 + 8))(plStack_90,1);
      }
    }
  }
  *(undefined8 *)(param_1 + 10) = param_3[0x13];
  return param_1;
}



// FUNCTION 1407bc360 FUN_1407bc360 body=47 status=ok
// SIG undefined FUN_1407bc360(void)

undefined4 * FUN_1407bc360(undefined4 *param_1)

{
  *(undefined8 *)(param_1 + 0x14) = 0;
  _guard_xfg_dispatch_icall_nop(param_1 + 1,0,0x54);
  *param_1 = 0xffffffff;
  return param_1;
}



// FUNCTION 1407bc3d0 FUN_1407bc3d0 body=56 status=ok
// SIG undefined FUN_1407bc3d0(void)

undefined8 * FUN_1407bc3d0(undefined8 *param_1)

{
  FUN_142dc1920();
  *param_1 = &PTR_FUN_1440dc9a8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  return param_1;
}



// FUNCTION 1407bc410 FUN_1407bc410 body=310 status=ok
// SIG undefined FUN_1407bc410(void)

undefined8 * FUN_1407bc410(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  FString::FString(param_1 + 0xb,param_2 + 0xb);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  param_1[0x11] = param_2[0x11];
  lVar1 = param_2[0x12];
  param_1[0x12] = lVar1;
  if (lVar1 != 0) {
    LOCK();
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    UNLOCK();
  }
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 1407bc550 FUN_1407bc550 body=64 status=ok
// SIG undefined FUN_1407bc550(void)

void * FUN_1407bc550(void *param_1)

{
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined8 *)((longlong)param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0xa4) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0xa8);
  *(undefined4 *)((longlong)param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xc) = 0xffffffff;
  return param_1;
}



// FUNCTION 1407bc590 FUN_1407bc590 body=15 status=ok
// SIG undefined FUN_1407bc590(void)

undefined8 * FUN_1407bc590(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  *param_1 = param_3;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 1407bc5a0 FUN_1407bc5a0 body=744 status=ok
// SIG undefined FUN_1407bc5a0(void)

undefined8 * FUN_1407bc5a0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 9) = *(undefined1 *)((longlong)param_2 + 9);
  *(undefined1 *)((longlong)param_1 + 10) = *(undefined1 *)((longlong)param_2 + 10);
  *(undefined1 *)((longlong)param_1 + 0xb) = *(undefined1 *)((longlong)param_2 + 0xb);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined1 *)((longlong)param_1 + 0x14) = *(undefined1 *)((longlong)param_2 + 0x14);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined2 *)((longlong)param_1 + 0x2c) = *(undefined2 *)((longlong)param_2 + 0x2c);
  *(undefined1 *)((longlong)param_1 + 0x2e) = *(undefined1 *)((longlong)param_2 + 0x2e);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  param_1[10] = param_2[10];
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x5c) = *(undefined1 *)((longlong)param_2 + 0x5c);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)((longlong)param_1 + 100) = *(undefined4 *)((longlong)param_2 + 100);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_1[0xe] = 0;
  param_1[0xe] = param_2[0xe];
  param_2[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  param_2[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x10] = param_2[0x10];
  param_2[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
  *(undefined4 *)((longlong)param_1 + 0x8c) = *(undefined4 *)((longlong)param_2 + 0x8c);
  param_2[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  param_1[0x13] = 0;
  param_1[0x13] = param_2[0x13];
  param_2[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  param_2[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0x15);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)((longlong)param_2 + 0xac);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)((longlong)param_2 + 0xb4);
  param_1[0x17] = 0;
  param_1[0x17] = param_2[0x17];
  param_2[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)((longlong)param_2 + 0xc4);
  param_2[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x19] = param_2[0x19];
  param_2[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  param_2[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1b] = param_2[0x1b];
  param_2[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  param_2[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  param_1[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = 0;
  TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_1 + 0x1e,param_2 + 0x1e);
  if (param_2[0x26] == 0) {
    _guard_xfg_dispatch_icall_nop(param_1 + 0x25,param_2 + 0x25,4);
  }
  if (param_1[0x26] != 0) {
    FMemory::Free();
  }
  param_1[0x26] = param_2[0x26];
  param_2[0x26] = 0;
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(param_2 + 0x27);
  *(undefined4 *)(param_2 + 0x27) = 0;
  return param_1;
}



// FUNCTION 1407bc890 FUN_1407bc890 body=128 status=ok
// SIG undefined FUN_1407bc890(void)

void * FUN_1407bc890(void *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x88) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xe0) = 0;
  *(undefined8 *)((longlong)param_1 + 0xf8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x110) = 0;
  *(undefined8 *)((longlong)param_1 + 0x118) = 0;
  *(undefined4 *)((longlong)param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x124) = 0;
  *(undefined8 *)((longlong)param_1 + 0x130) = 0;
  *(undefined4 *)((longlong)param_1 + 0x138) = 0;
  _guard_xfg_dispatch_icall_nop(param_1,0,0x140);
  return param_1;
}



// FUNCTION 1407bc910 FUN_1407bc910 body=223 status=ok
// SIG undefined FUN_1407bc910(void)

longlong * FUN_1407bc910(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  *param_1 = param_2;
  if (param_2 != 0) {
    lVar3 = FUN_1407e2730();
    if ((*(int *)(*(longlong *)(param_2 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8
         ) != lVar3 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (!bVar2) {
      param_2 = 0;
    }
    param_1[1] = param_2;
    plVar1 = (longlong *)*param_1;
    uVar4 = UCircularThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    plVar1 = (longlong *)*param_1;
    param_1[2] = lVar3;
    uVar4 = FUN_1407e27e0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    plVar1 = (longlong *)*param_1;
    param_1[3] = lVar3;
    uVar4 = UCheckBox::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar4);
    param_1[4] = lVar3;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return param_1;
}



// FUNCTION 1407bca10 FUN_1407bca10 body=699 status=ok
// SIG undefined FUN_1407bca10(void)

undefined4 * FUN_1407bca10(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  longlong *plVar2;
  void *_Src;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  *(undefined1 *)((longlong)param_1 + 0x1d) = *(undefined1 *)((longlong)param_2 + 0x1d);
  *(undefined1 *)((longlong)param_1 + 0x1e) = *(undefined1 *)((longlong)param_2 + 0x1e);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[10] = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  *(undefined1 *)((longlong)param_1 + 0x2d) = *(undefined1 *)((longlong)param_2 + 0x2d);
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  puVar8 = *(undefined4 **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<8,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0xc,iVar1,0);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = param_2 + 0xc;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x14);
    if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
      puVar7 = param_1 + 0xc;
    }
    _guard_xfg_dispatch_icall_nop(puVar7,puVar8,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x1c) = 0;
  iVar1 = param_2[0x1e];
  puVar8 = *(undefined4 **)(param_2 + 0x1c);
  param_1[0x1e] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1f] = 0;
  }
  else {
    TArray<unsigned_int,TInlineAllocator<4,FDefaultAllocator>_>::ResizeForCopy
              (param_1 + 0x18,iVar1,0);
    if (puVar8 == (undefined4 *)0x0) {
      puVar8 = param_2 + 0x18;
    }
    puVar7 = *(undefined4 **)(param_1 + 0x1c);
    if (*(undefined4 **)(param_1 + 0x1c) == (undefined4 *)0x0) {
      puVar7 = param_1 + 0x18;
    }
    _guard_xfg_dispatch_icall_nop(puVar7,puVar8,(longlong)iVar1 << 2);
  }
  uVar6 = *(undefined8 *)(param_2 + 0x22);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x22) = uVar6;
  uVar3 = param_2[0x25];
  uVar4 = param_2[0x26];
  uVar5 = param_2[0x27];
  param_1[0x24] = param_2[0x24];
  param_1[0x25] = uVar3;
  param_1[0x26] = uVar4;
  param_1[0x27] = uVar5;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar6 = *(undefined8 *)(param_2 + 0x2c);
  *(undefined8 *)(param_1 + 0x2a) = *(undefined8 *)(param_2 + 0x2a);
  *(undefined8 *)(param_1 + 0x2c) = uVar6;
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = param_2[0x30];
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  param_1[0x34] = param_2[0x34];
  *(undefined8 *)(param_1 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  param_1[0x37] = param_2[0x37];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = param_2[0x39];
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3b] = param_2[0x3b];
  *(longlong *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = 0;
  if (((param_2 + 0x3c != param_1 + 0x3c) && (param_2[0x3e] != 0)) &&
     (plVar2 = *(longlong **)(param_2 + 0x3c), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  iVar1 = param_2[0x42];
  _Src = *(void **)(param_2 + 0x40);
  param_1[0x42] = iVar1;
  if (iVar1 == 0) {
    param_1[0x43] = 0;
  }
  else {
    TArray<FLiveLinkFrame,FDefaultAllocator>::ResizeForCopy(param_1 + 0x40,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x40),_Src,(longlong)iVar1 * 0x90);
  }
  *(undefined1 *)(param_1 + 0x44) = *(undefined1 *)(param_2 + 0x44);
  return param_1;
}



// FUNCTION 1407bccd0 UAnimNotify_WeaponFire body=44 status=ok
// SIG undefined UAnimNotify_WeaponFire(void)

undefined8 * UAnimNotify_WeaponFire::UAnimNotify_WeaponFire(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  UAnimNotify::UAnimNotify(param_1,uVar1);
  *param_1 = &PTR_FUN_1440da638;
  return param_1;
}



// FUNCTION 1407bcd00 FUN_1407bcd00 body=120 status=ok
// SIG undefined FUN_1407bcd00(void)

undefined8 * FUN_1407bcd00(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_142c62eb0();
  *param_1 = &PTR__scalar_deleting_destructor__1440da8e8;
  param_1[5] = &PTR_LAB_1440dab98;
  param_1[0xc] = &PTR_LAB_1440dabe0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ba) = 1;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0xd) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x6a) = 1;
  *(undefined1 *)((longlong)param_1 + 0x17e) = 0;
  *(undefined1 *)(param_1 + 0x2c) = 1;
  *(undefined1 *)((longlong)param_1 + 0x72) = 1;
  uVar1 = FHyperlinkStyle::StaticStruct();
  param_1[0xb] = uVar1;
  return param_1;
}



// FUNCTION 1407bcd80 FUN_1407bcd80 body=146 status=ok
// SIG undefined FUN_1407bcd80(void)

undefined8 * FUN_1407bcd80(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_141781840();
  *(undefined1 *)(param_1 + 5) = 1;
  plVar1 = param_1 + 0x10;
  *param_1 = &PTR_FUN_1440db848;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  *(undefined2 *)((longlong)param_1 + 0x54) = 0;
  *(undefined1 *)((longlong)param_1 + 0x56) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *plVar1 = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x12] = param_1;
    param_1[0x11] = &DAT_14685c2f0;
    *plVar1 = (longlong)DAT_14685c2f0;
    DAT_14685c2f0 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407bce20 FUN_1407bce20 body=685 status=ok
// SIG undefined FUN_1407bce20(void)

undefined8 * FUN_1407bce20(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 local_48;
  longlong local_40 [2];
  undefined8 local_30;
  undefined1 local_28 [16];
  
  FUN_1417818c0();
  puVar1 = param_1 + 5;
  *puVar1 = &PTR__purecall_143f740d8;
  plVar3 = (longlong *)FUN_1404cfca0();
  lVar2 = plVar3[1];
  iVar5 = (int)lVar2 + 1;
  *(int *)(plVar3 + 1) = iVar5;
  if (*(int *)((longlong)plVar3 + 0xc) < iVar5) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar3);
  }
  *(undefined8 **)(*plVar3 + (longlong)(int)lVar2 * 8) = puVar1;
  *param_1 = &PTR_FUN_1440db588;
  *puVar1 = &PTR_FUN_1440db800;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  _guard_xfg_dispatch_icall_nop((void *)((longlong)param_1 + 0x54),0,0x54);
  *(undefined4 *)(param_1 + 10) = 0xffffffff;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if (0x7fffffff < *(uint *)((longlong)param_1 + 0x20c)) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_1 + 0x40,0);
  }
  if ((undefined2 *)param_1[0x40] != (undefined2 *)0x0) {
    *(undefined2 *)param_1[0x40] = 0;
  }
  *(undefined4 *)(param_1 + 0x3e) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  *(undefined4 *)(param_1 + 0x51) = 0xffffffff;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x2c4) = 0;
  param_1[0x5a] = 0;
  *(undefined4 *)(param_1 + 0x5b) = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x314) = 0;
  param_1[100] = 0;
  *(undefined4 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x38) = 1000;
  *(undefined1 *)((longlong)param_1 + 0x1c4) = 1;
  *(undefined4 *)(param_1 + 0x3a) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x3b) = 10;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 1;
  *(undefined4 *)(param_1 + 0x39) = 0x44610000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 3000;
  *(undefined4 *)(param_1 + 0x3c) = 15000;
  uVar4 = FUN_1407e52a0();
  FSoftObjectPath::FSoftObjectPath(&local_48,uVar4);
  local_30 = local_48;
  FString::FString(local_28,local_40);
  FSoftObjectPath::operator=(param_1 + 0x35,&local_30);
  if (local_40[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 1407bd0d0 FUN_1407bd0d0 body=354 status=ok
// SIG undefined FUN_1407bd0d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1407bd0d0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar1);
  *param_1 = &PTR_FUN_1440dabf0;
  param_1[5] = &PTR_LAB_1440db4e8;
  param_1[0x5a] = &PTR_LAB_1440db518;
  param_1[0xde] = &PTR_LAB_1440db570;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  *(undefined4 *)((longlong)param_1 + 0x894) = 0;
  *(undefined4 *)(param_1 + 0x112) = 0xffffffff;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  param_1[0x11f] = 0;
  param_1[0x120] = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  uVar2 = uRam000000014685c0dc;
  param_1[0x126] = 0;
  param_1[0x127] = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)((longlong)param_1 + 0x924) = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  *(uint *)((longlong)param_1 + 0x92c) = uVar2;
  uVar2 = uRam000000014685c0d4 & uRam000000014685c0e4;
  uVar3 = uRam000000014685c0d8 & uRam000000014685c0e8;
  uVar4 = uRam000000014685c0dc & uRam000000014685c0ec;
  *(uint *)(param_1 + 0x128) = _DAT_14685c0d0 & _DAT_14685c0e0;
  *(uint *)((longlong)param_1 + 0x944) = uVar2;
  *(uint *)(param_1 + 0x129) = uVar3;
  *(uint *)((longlong)param_1 + 0x94c) = uVar4;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12d] = 2;
  param_1[0x12f] = 0;
  *(byte *)((longlong)param_1 + 0x24c) = *(byte *)((longlong)param_1 + 0x24c) | 0x40;
  *(undefined1 *)(param_1 + 0x119) = 1;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xef | 8;
  *(undefined4 *)((longlong)param_1 + 0x8ec) = 0x447a0000;
  return param_1;
}



// FUNCTION 1407bd240 FUN_1407bd240 body=228 status=ok
// SIG undefined FUN_1407bd240(void)

undefined8 * FUN_1407bd240(undefined8 *param_1)

{
  longlong *plVar1;
  char cVar2;
  
  FUN_142dc2300();
  plVar1 = param_1 + 0x105;
  *param_1 = &PTR_FUN_1440dc9e8;
  param_1[5] = &PTR_LAB_1440dd300;
  param_1[0x5a] = &PTR_LAB_1440dd330;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined4 *)(param_1 + 0xff) = 0;
  param_1[0x100] = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined2 *)((longlong)param_1 + 0x80a) = 0;
  *(undefined4 *)(param_1 + 0x102) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x814) = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  *plVar1 = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  *(undefined1 *)(param_1 + 0xfb) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6f1) = 0;
  cVar2 = UObjectBaseUtility::IsTemplate(param_1,0x30);
  if (cVar2 == '\0') {
    param_1[0x107] = param_1;
    param_1[0x106] = &DAT_14685c3e8;
    *plVar1 = (longlong)DAT_14685c3e8;
    DAT_14685c3e8 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407bd330 FUN_1407bd330 body=601 status=ok
// SIG undefined FUN_1407bd330(void)

undefined8 * FUN_1407bd330(undefined8 *param_1)

{
  longlong *plVar1;
  
  FUN_14178c940();
  FUN_14237eb90(param_1);
  *param_1 = &PTR_FUN_1440dd388;
  plVar1 = param_1 + 0x10e;
  param_1[5] = &PTR_LAB_1440ddc98;
  param_1[0x5a] = &PTR_LAB_1440ddcc8;
  *(undefined1 *)(param_1 + 0xde) = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  param_1[0xf7] = 0;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  *(undefined1 *)(param_1 + 0x10d) = 1;
  *plVar1 = 0;
  param_1[0x10f] = 0;
  param_1[0x110] = 0;
  *(undefined4 *)(param_1 + 0x112) = 0;
  param_1[0x113] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  param_1[0x11b] = 0;
  param_1[0x11c] = 0;
  *(undefined4 *)((longlong)param_1 + 0x8e9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x8ed) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8ef) = 0;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  param_1[0x124] = 0;
  param_1[0x125] = 0;
  *(undefined4 *)(param_1 + 0x126) = 0xffffffff;
  param_1[0x128] = 0;
  param_1[0x129] = 0;
  param_1[299] = 0;
  param_1[300] = 0;
  param_1[0x12e] = 0;
  param_1[0x12f] = 0;
  *(uint *)((longlong)param_1 + 0xc4) = *(uint *)((longlong)param_1 + 0xc4) | 1;
  *(byte *)((longlong)param_1 + 0x2f1) = *(byte *)((longlong)param_1 + 0x2f1) & 0xfd;
  *(undefined1 *)(param_1 + 0x111) = 1;
  *(undefined4 *)((longlong)param_1 + 0x8cc) = 0x45fa0000;
  *(undefined1 *)(param_1 + 0x11a) = 1;
  *(undefined4 *)(param_1 + 0x11e) = 0x40a00000;
  *(undefined1 *)((longlong)param_1 + 0x98b) = 1;
  *(undefined1 *)(param_1 + 0x12a) = 1;
  *(undefined4 *)((longlong)param_1 + 0x96c) = 0x44fa0000;
  if ((*(byte *)(param_1 + 1) & 0x30) == 0) {
    param_1[0x110] = param_1;
    param_1[0x10f] = &DAT_14685c220;
    *plVar1 = (longlong)DAT_14685c220;
    DAT_14685c220 = plVar1;
    if (*plVar1 != 0) {
      *(longlong **)(*plVar1 + 8) = plVar1;
    }
  }
  return param_1;
}



// FUNCTION 1407bd590 FUN_1407bd590 body=194 status=ok
// SIG undefined FUN_1407bd590(void)

undefined8 * FUN_1407bd590(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14178c940();
  FUN_14237eb90(param_1,uVar1);
  *param_1 = &PTR_FUN_1440de458;
  param_1[5] = &PTR_LAB_1440ded40;
  param_1[0x5a] = &PTR_LAB_1440ded70;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 1;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  param_1[0xe6] = 0;
  param_1[0xe7] = 0;
  *(undefined1 *)(param_1 + 0xe8) = 0;
  param_1[0xe9] = 0;
  param_1[0xea] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(byte *)((longlong)param_1 + 0x24d) = *(byte *)((longlong)param_1 + 0x24d) & 0xef | 8;
  return param_1;
}



// FUNCTION 1407bd660 FUN_1407bd660 body=255 status=ok
// SIG undefined FUN_1407bd660(void)

undefined8 * FUN_1407bd660(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 local_88 [128];
  
  uVar4 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar4);
  *param_1 = &PTR__scalar_deleting_destructor__1440df540;
  FUN_142de2eb0(param_1 + 7);
  puVar5 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)(param_1 + 7) = *puVar5;
  *(undefined1 *)((longlong)param_1 + 0x39) = puVar5[1];
  *(undefined1 *)((longlong)param_1 + 0x3a) = puVar5[2];
  *(undefined1 *)((longlong)param_1 + 0x3b) = puVar5[3];
  *(undefined8 *)((longlong)param_1 + 0x3c) = *(undefined8 *)(puVar5 + 4);
  param_1[9] = *(undefined8 *)(puVar5 + 0x10);
  param_1[10] = *(undefined8 *)(puVar5 + 0x18);
  uVar4 = *(undefined8 *)(puVar5 + 0x28);
  param_1[0xb] = *(undefined8 *)(puVar5 + 0x20);
  param_1[0xc] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x38);
  param_1[0xd] = *(undefined8 *)(puVar5 + 0x30);
  param_1[0xe] = uVar4;
  uVar4 = *(undefined8 *)(puVar5 + 0x48);
  param_1[0xf] = *(undefined8 *)(puVar5 + 0x40);
  param_1[0x10] = uVar4;
  param_1[0x11] = *(undefined8 *)(puVar5 + 0x50);
  uVar1 = *(undefined4 *)(puVar5 + 0x5c);
  uVar2 = *(undefined4 *)(puVar5 + 0x60);
  uVar3 = *(undefined4 *)(puVar5 + 100);
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(puVar5 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x13) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  param_1[0x14] = *(undefined8 *)(puVar5 + 0x68);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(puVar5 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0xac) = *(undefined4 *)(puVar5 + 0x74);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar5 + 0x78);
  *(byte *)((longlong)param_1 + 0x39) = *(byte *)((longlong)param_1 + 0x39) | 0x66;
  FUN_142df3150(param_1 + 7,7);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_1 + 0x16);
  return param_1;
}



// FUNCTION 1407bd760 FUN_1407bd760 body=891 status=ok
// SIG undefined FUN_1407bd760(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1407bd760(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 local_88 [128];
  
  uVar6 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar6);
  *param_1 = &PTR__scalar_deleting_destructor__1440df870;
  FUN_142de2eb0(param_1 + 8);
  puVar1 = param_1 + 0x18;
  FUN_142de2eb0(puVar1);
  puVar2 = param_1 + 0x28;
  FUN_142de2eb0(puVar2);
  FUN_142de2eb0(param_1 + 0x3a);
  puVar7 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)(param_1 + 8) = *puVar7;
  *(undefined1 *)((longlong)param_1 + 0x41) = puVar7[1];
  *(undefined1 *)((longlong)param_1 + 0x42) = puVar7[2];
  *(undefined1 *)((longlong)param_1 + 0x43) = puVar7[3];
  *(undefined8 *)((longlong)param_1 + 0x44) = *(undefined8 *)(puVar7 + 4);
  param_1[10] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0xb] = *(undefined8 *)(puVar7 + 0x18);
  uVar6 = *(undefined8 *)(puVar7 + 0x28);
  param_1[0xc] = *(undefined8 *)(puVar7 + 0x20);
  param_1[0xd] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x38);
  param_1[0xe] = *(undefined8 *)(puVar7 + 0x30);
  param_1[0xf] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x48);
  param_1[0x10] = *(undefined8 *)(puVar7 + 0x40);
  param_1[0x11] = uVar6;
  param_1[0x12] = *(undefined8 *)(puVar7 + 0x50);
  uVar3 = *(undefined4 *)(puVar7 + 0x5c);
  uVar4 = *(undefined4 *)(puVar7 + 0x60);
  uVar5 = *(undefined4 *)(puVar7 + 100);
  *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(puVar7 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x9c) = uVar3;
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0xa4) = uVar5;
  param_1[0x15] = *(undefined8 *)(puVar7 + 0x68);
  *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(puVar7 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0xb4) = *(undefined4 *)(puVar7 + 0x74);
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(puVar7 + 0x78);
  *(byte *)((longlong)param_1 + 0x41) = *(byte *)((longlong)param_1 + 0x41) | 0x66;
  FUN_142df3150(param_1 + 8,7);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x17);
  puVar7 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)puVar1 = *puVar7;
  *(undefined1 *)((longlong)param_1 + 0xc1) = puVar7[1];
  *(undefined1 *)((longlong)param_1 + 0xc2) = puVar7[2];
  *(undefined1 *)((longlong)param_1 + 0xc3) = puVar7[3];
  *(undefined8 *)((longlong)param_1 + 0xc4) = *(undefined8 *)(puVar7 + 4);
  param_1[0x1a] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0x1b] = *(undefined8 *)(puVar7 + 0x18);
  uVar6 = *(undefined8 *)(puVar7 + 0x28);
  param_1[0x1c] = *(undefined8 *)(puVar7 + 0x20);
  param_1[0x1d] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x38);
  param_1[0x1e] = *(undefined8 *)(puVar7 + 0x30);
  param_1[0x1f] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x48);
  param_1[0x20] = *(undefined8 *)(puVar7 + 0x40);
  param_1[0x21] = uVar6;
  param_1[0x22] = *(undefined8 *)(puVar7 + 0x50);
  uVar3 = *(undefined4 *)(puVar7 + 0x5c);
  uVar4 = *(undefined4 *)(puVar7 + 0x60);
  uVar5 = *(undefined4 *)(puVar7 + 100);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(puVar7 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x11c) = uVar3;
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x124) = uVar5;
  param_1[0x25] = *(undefined8 *)(puVar7 + 0x68);
  *(undefined4 *)(param_1 + 0x26) = *(undefined4 *)(puVar7 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x134) = *(undefined4 *)(puVar7 + 0x74);
  *(undefined4 *)(param_1 + 0x27) = *(undefined4 *)(puVar7 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0xc1) = *(undefined1 *)((longlong)param_1 + 0x41);
  FUN_142df3150(puVar1,7);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x27);
  puVar7 = (undefined1 *)FUN_142de2c00(local_88,1,2);
  *(undefined1 *)puVar2 = *puVar7;
  *(undefined1 *)((longlong)param_1 + 0x141) = puVar7[1];
  *(undefined1 *)((longlong)param_1 + 0x142) = puVar7[2];
  *(undefined1 *)((longlong)param_1 + 0x143) = puVar7[3];
  *(undefined8 *)((longlong)param_1 + 0x144) = *(undefined8 *)(puVar7 + 4);
  param_1[0x2a] = *(undefined8 *)(puVar7 + 0x10);
  param_1[0x2b] = *(undefined8 *)(puVar7 + 0x18);
  uVar6 = *(undefined8 *)(puVar7 + 0x28);
  param_1[0x2c] = *(undefined8 *)(puVar7 + 0x20);
  param_1[0x2d] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x38);
  param_1[0x2e] = *(undefined8 *)(puVar7 + 0x30);
  param_1[0x2f] = uVar6;
  uVar6 = *(undefined8 *)(puVar7 + 0x48);
  param_1[0x30] = *(undefined8 *)(puVar7 + 0x40);
  param_1[0x31] = uVar6;
  param_1[0x32] = *(undefined8 *)(puVar7 + 0x50);
  uVar3 = *(undefined4 *)(puVar7 + 0x5c);
  uVar4 = *(undefined4 *)(puVar7 + 0x60);
  uVar5 = *(undefined4 *)(puVar7 + 100);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(puVar7 + 0x58);
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar3;
  *(undefined4 *)(param_1 + 0x34) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar5;
  param_1[0x35] = *(undefined8 *)(puVar7 + 0x68);
  *(undefined4 *)(param_1 + 0x36) = *(undefined4 *)(puVar7 + 0x70);
  *(undefined4 *)((longlong)param_1 + 0x1b4) = *(undefined4 *)(puVar7 + 0x74);
  *(undefined4 *)(param_1 + 0x37) = *(undefined4 *)(puVar7 + 0x78);
  *(undefined1 *)((longlong)param_1 + 0x141) = *(undefined1 *)((longlong)param_1 + 0x41);
  FUN_142df3150(puVar2,7);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x37);
  *(undefined1 *)(param_1 + 0x3a) = DAT_14685c270;
  *(undefined1 *)((longlong)param_1 + 0x1d1) = DAT_14685c271;
  *(undefined1 *)((longlong)param_1 + 0x1d2) = DAT_14685c272;
  *(undefined1 *)((longlong)param_1 + 0x1d3) = DAT_14685c273;
  *(undefined8 *)((longlong)param_1 + 0x1d4) = DAT_14685c274;
  param_1[0x3c] = DAT_14685c280;
  param_1[0x3d] = DAT_14685c288;
  uVar6 = uRam000000014685c298;
  param_1[0x3e] = _DAT_14685c290;
  param_1[0x3f] = uVar6;
  uVar6 = uRam000000014685c2a8;
  param_1[0x40] = _DAT_14685c2a0;
  param_1[0x41] = uVar6;
  uVar6 = uRam000000014685c2b8;
  param_1[0x42] = _DAT_14685c2b0;
  param_1[0x43] = uVar6;
  param_1[0x44] = DAT_14685c2c0;
  uVar6 = uRam000000014685c2d0;
  param_1[0x45] = _DAT_14685c2c8;
  param_1[0x46] = uVar6;
  param_1[0x47] = DAT_14685c2d8;
  *(undefined4 *)(param_1 + 0x48) = DAT_14685c2e0;
  *(undefined4 *)((longlong)param_1 + 0x244) = DAT_14685c2e4;
  *(undefined4 *)(param_1 + 0x49) = DAT_14685c2e8;
  return param_1;
}



// FUNCTION 1407bdae0 FUN_1407bdae0 body=111 status=ok
// SIG undefined FUN_1407bdae0(void)

undefined8 * FUN_1407bdae0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_14178c940();
  UFontFaceInterface::UFontFaceInterface(param_1,uVar2);
  *param_1 = &PTR__scalar_deleting_destructor__1440dfba0;
  param_1[6] = 0;
  param_1[7] = 1;
  TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
            (param_1 + 6,0);
  puVar1 = (undefined8 *)param_1[6];
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  return param_1;
}



// FUNCTION 1407bdb50 FUN_1407bdb50 body=87 status=ok
// SIG undefined FUN_1407bdb50(void)

undefined8 * FUN_1407bdb50(undefined8 *param_1)

{
  FUN_142de33e0();
  *param_1 = &PTR_FUN_1440dedc8;
  param_1[5] = &PTR_LAB_1440df1d0;
  param_1[0x2f] = &PTR_LAB_1440df200;
  param_1[0x37] = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  return param_1;
}



// FUNCTION 1407bdbb0 FUN_1407bdbb0 body=109 status=ok
// SIG undefined FUN_1407bdbb0(void)

void FUN_1407bdbb0(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x18);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 7;
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



// FUNCTION 1407bdc20 FUN_1407bdc20 body=101 status=ok
// SIG undefined FUN_1407bdc20(void)

void FUN_1407bdc20(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0xb0);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x18;
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



// FUNCTION 1407bdc90 FUN_1407bdc90 body=131 status=ok
// SIG undefined FUN_1407bdc90(void)

void FUN_1407bdc90(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      if (plVar1[6] != 0) {
        FMemory::Free();
      }
      if (plVar1[4] != 0) {
        FMemory::Free();
      }
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x2b;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 1407bdd20 FUN_1407bdd20 body=155 status=ok
// SIG undefined FUN_1407bdd20(void)

void FUN_1407bdd20(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR_FUN_1440dc9a8;
      if (puVar1[0x1c] != 0) {
        FMemory::Free();
      }
      *puVar1 = &PTR_FUN_14408b3d8;
      TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar1 + 6);
      puVar1 = puVar1 + 0x1e;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    puVar1 = (undefined8 *)*param_1;
  }
  if (puVar1 == (undefined8 *)0x0) {
    return;
  }
  FMemory::Free(puVar1);
  return;
}



// FUNCTION 1407bddc0 FUN_1407bddc0 body=176 status=ok
// SIG undefined FUN_1407bddc0(void)

void FUN_1407bddc0(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x58);
    do {
      plVar4 = (longlong *)plVar7[7];
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
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0x15;
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



// FUNCTION 1407bde70 FUN_1407bde70 body=265 status=ok
// SIG undefined FUN_1407bde70(void)

void FUN_1407bde70(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x130);
    do {
      *(undefined4 *)(plVar2 + 1) = 0;
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::Empty(plVar2 + -8,0);
      if (plVar2[-4] != 0) {
        FMemory::Free();
      }
      if (plVar2[-8] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xb] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xd] != 0) {
        FMemory::Free();
      }
      if (plVar2[-0xf] != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (plVar2 + -0x13);
      if (plVar2[-0x16] != 0) {
        FMemory::Free();
      }
      FUN_1407bddc0(plVar2 + -0x18);
      plVar2 = plVar2 + 0x28;
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



// FUNCTION 1407bdf80 FUN_1407bdf80 body=122 status=ok
// SIG undefined FUN_1407bdf80(void)

void FUN_1407bdf80(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x148) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    TArray<TTuple<FMovieSceneSequenceID,FGuid>,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
    ResizeTo(param_1,0);
  }
  *(undefined4 *)(param_1 + 0x168) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    *(undefined4 *)(param_1 + 0x164) = 0;
    TBitArray<TInlineAllocator<1,FDefaultAllocator>_>::Realloc(param_1 + 0x150,0);
  }
  if (*(longlong *)(param_1 + 0x158) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407be000 FUN_1407be000 body=97 status=ok
// SIG undefined FUN_1407be000(void)

void FUN_1407be000(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x120) != 0) {
    FMemory::Free();
  }
  plVar4 = *(longlong **)(param_1 + 0x58);
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



// FUNCTION 1407be070 FUN_1407be070 body=118 status=ok
// SIG undefined FUN_1407be070(void)

void FUN_1407be070(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_1 + 0x90);
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
  if (*(longlong *)(param_1 + 0x58) == 0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1407be0f0 FUN_1407be0f0 body=187 status=ok
// SIG undefined FUN_1407be0f0(void)

void FUN_1407be0f0(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(longlong *)(param_1 + 0x130) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0xf0,0);
  if (*(longlong *)(param_1 + 0x110) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FMemory::Free();
  }
  TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
            (param_1 + 0x98);
  if (*(longlong *)(param_1 + 0x80) != 0) {
    FMemory::Free();
  }
  FUN_1407bddc0(param_1 + 0x70);
  return;
}



// FUNCTION 1407be1b0 FUN_1407be1b0 body=203 status=ok
// SIG undefined FUN_1407be1b0(void)

void FUN_1407be1b0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x90) != 0) {
    if (*(longlong *)(param_1 + 0x80) == 0) {
      **(longlong **)(param_1 + 0x88) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x88) = *(longlong *)(param_1 + 0x80);
      *(undefined8 *)(*(longlong *)(param_1 + 0x80) + 8) = *(undefined8 *)(param_1 + 0x88);
      *(undefined8 *)(param_1 + 0x80) = 0;
    }
    *(undefined8 *)(param_1 + 0x88) = 0;
    *(undefined8 *)(param_1 + 0x90) = 0;
  }
  plVar4 = *(longlong **)(param_1 + 0x78);
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
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  return;
}



// FUNCTION 1407be280 operator= body=678 status=ok
// SIG undefined operator=(void)

longlong *
TSparseArray<TSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
::operator=(longlong *param_1,longlong *param_2)

{
  uint *_Dst;
  uint uVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  uint *puVar7;
  uint uVar8;
  int local_78;
  uint uStack_74;
  uint uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  int local_50;
  uint uStack_4c;
  uint *puStack_48;
  uint local_40;
  uint uStack_3c;
  undefined8 uStack_38;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_1 + 5);
    _Dst = (uint *)(param_1 + 2);
    uStack_74 = 1;
    local_78 = 0;
    uStack_64 = 0;
    iStack_60 = 0;
    if (uVar1 != 0) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar2 = *puVar7;
      iStack_60 = 0;
      local_78 = 0;
      while (uVar2 == 0) {
        lVar6 = (longlong)local_78;
        iStack_60 = iStack_60 + 0x20;
        iVar4 = local_78 + 1;
        bVar3 = (int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar4;
        if (bVar3) goto LAB_1407be35d;
        uVar2 = puVar7[lVar6 + 1];
      }
      uStack_74 = -uVar2 & uVar2;
      iVar4 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (iStack_60 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1407be35d:
        uStack_64 = uVar1;
      }
    }
    uVar2 = *(uint *)(param_1 + 5);
    local_40 = 0xffffffff;
    uStack_3c = uStack_64;
    uStack_38 = CONCAT44(uStack_5c,iStack_60);
    uVar8 = uVar2 & 0xffffffe0;
    local_50 = local_78;
    uStack_4c = uStack_74;
    puStack_48 = _Dst;
    uStack_64 = uVar2;
    if (uVar2 != uVar1) {
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = _Dst;
      }
      uVar5 = puVar7[(int)uVar2 >> 5] & -1 << ((byte)uVar2 & 0x1f);
      iVar4 = (int)uVar2 >> 5;
      while (uVar5 == 0) {
        uVar8 = uVar8 + 0x20;
        if ((int)((uVar1 - 1) + ((int)(uVar1 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar4)
        goto LAB_1407be413;
        uVar5 = puVar7[(longlong)iVar4 + 1];
        iVar4 = iVar4 + 1;
      }
      uVar5 = -uVar5 & uVar5;
      iVar4 = 0x1f;
      if (uVar5 != 0) {
        for (; uVar5 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      if (uVar5 == 0) {
        iVar4 = 0x20;
      }
      else {
        iVar4 = 0x1f - iVar4;
      }
      uStack_64 = (uVar8 - iVar4) + 0x1f;
      if ((int)uVar1 < (int)uStack_64) {
LAB_1407be413:
        uStack_64 = uVar1;
      }
    }
    while ((uStack_3c != uStack_64 || (puStack_48 != _Dst))) {
      if (*(longlong *)((longlong)(int)uStack_3c * 0x20 + 8 + *param_1) != 0) {
        FMemory::Free();
      }
      local_40 = local_40 & ~uStack_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_50);
    }
    if (*param_1 != 0) {
      FMemory::Free();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (_Dst != (uint *)(param_2 + 2)) {
      if (param_2[4] == 0) {
        ::_guard_xfg_dispatch_icall_nop(_Dst,param_2 + 2,0x10);
      }
      if (param_1[4] != 0) {
        FMemory::Free();
      }
      param_1[4] = param_2[4];
      param_2[4] = 0;
      *(int *)(param_1 + 5) = (int)param_2[5];
      *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
      param_2[5] = 0;
    }
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    *(undefined4 *)((longlong)param_2 + 0x34) = 0;
    *(undefined4 *)(param_2 + 6) = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1407be530 FUN_1407be530 body=471 status=ok
// SIG undefined FUN_1407be530(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 * FUN_1407be530(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  longlong *plStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_68;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x19) = *(undefined1 *)((longlong)param_2 + 0x19);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  *(undefined1 *)((longlong)param_1 + 0x1b) = *(undefined1 *)((longlong)param_2 + 0x1b);
  *(undefined8 *)((longlong)param_1 + 0x1c) = *(undefined8 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  param_1[5] = param_2[5];
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined8 *)((longlong)param_1 + 0x34) = *(undefined8 *)((longlong)param_2 + 0x34);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  param_1[8] = param_2[8];
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = param_2[10];
  FString::operator=(param_1 + 0xb,param_2 + 0xb);
  puVar3 = param_1 + 0x11;
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = *(undefined4 *)((longlong)param_2 + 0x6c);
  param_1[0xe] = param_2[0xe];
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
  *(undefined4 *)((longlong)param_1 + 0x7c) = *(undefined4 *)((longlong)param_2 + 0x7c);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined1 *)((longlong)param_1 + 0x82) = *(undefined1 *)((longlong)param_2 + 0x82);
  plVar5 = (longlong *)param_2[0x12];
  uVar6 = param_2[0x11];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
    UNLOCK();
  }
  local_48 = uVar6;
  plStack_40 = plVar5;
  if (&local_48 != puVar3) {
    local_48 = *puVar3;
    plStack_40 = (longlong *)param_1[0x12];
    *puVar3 = uVar6;
    param_1[0x12] = plVar5;
    local_38 = uVar6;
    plStack_30 = plVar5;
  }
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)*plStack_40)(plStack_40);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*plStack_40 + 8))(plStack_40,1);
      }
    }
  }
  param_1[0x13] = param_2[0x13];
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)((longlong)param_1 + 0xa4) = *(undefined4 *)((longlong)param_2 + 0xa4);
  return param_1;
}



// FUNCTION 1407be710 FUN_1407be710 body=484 status=ok
// SIG undefined FUN_1407be710(void)

longlong * FUN_1407be710(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  int local_res8 [2];
  
  (**(code **)(*param_1 + 0x78))
            (param_1,(longlong)*(int *)(param_2 + 200) * 0x18,
             (longlong)*(int *)(param_2 + 0xcc) * 0x18);
  puVar9 = (undefined8 *)0x0;
  local_res8[0] = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_res8[0] = *(int *)(param_2 + 200);
  }
  plVar4 = (longlong *)param_1[1];
  if ((int *)plVar4[1] < (int *)*plVar4 + 1) {
    (**(code **)(*param_1 + 0x50))(param_1,local_res8,4);
    if ((*(byte *)((longlong)param_1 + 0x29) & 0x10) != 0) {
      FArchive::ByteSwap(param_1,local_res8,4);
    }
  }
  else {
    local_res8[0] = *(int *)*plVar4;
    *plVar4 = *plVar4 + 4;
  }
  bVar2 = *(byte *)(param_1 + 5);
  if (((-1 < (char)bVar2) && (-1 < local_res8[0])) &&
     (((*(byte *)((longlong)param_1 + 0x2b) & 8) == 0 || (local_res8[0] < 0xaaaab)))) {
    if ((bVar2 & 1) == 0) {
      *(int *)(param_2 + 200) = local_res8[0];
      if (0 < local_res8[0]) {
        do {
          lVar5 = *(longlong *)(param_2 + 0xc0);
          if (*(longlong *)(param_2 + 0xc0) == 0) {
            lVar5 = param_2;
          }
          lVar5 = lVar5 + (longlong)(int)puVar9 * 0x18;
          (**(code **)(*param_1 + 0x40))(param_1,lVar5);
          FUN_14158ce90(param_1,lVar5 + 8);
          uVar7 = (int)puVar9 + 1;
          puVar9 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < *(int *)(param_2 + 200));
      }
    }
    else {
      FUN_1407c5440(param_2,local_res8[0]);
      puVar8 = puVar9;
      if (0 < local_res8[0]) {
        do {
          iVar3 = *(int *)(param_2 + 200);
          *(int *)(param_2 + 200) = iVar3 + 1;
          if (*(int *)(param_2 + 0xcc) < iVar3 + 1) {
            TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_2,iVar3);
          }
          lVar5 = *(longlong *)(param_2 + 0xc0);
          if (*(longlong *)(param_2 + 0xc0) == 0) {
            lVar5 = param_2;
          }
          puVar1 = (undefined8 *)(lVar5 + (longlong)iVar3 * 0x18);
          puVar6 = puVar9;
          if (puVar1 != (undefined8 *)0x0) {
            *puVar1 = 0;
            puVar1[1] = 0;
            puVar1[2] = 0;
            puVar6 = puVar1;
          }
          (**(code **)(*param_1 + 0x40))(param_1,puVar6);
          FUN_14158ce90(param_1,puVar6 + 1);
          uVar7 = (int)puVar8 + 1;
          puVar8 = (undefined8 *)(ulonglong)uVar7;
        } while ((int)uVar7 < local_res8[0]);
      }
    }
    return param_1;
  }
  *(byte *)(param_1 + 5) = bVar2 | 0x80;
  return param_1;
}



// FUNCTION 1407be900 FUN_1407be900 body=182 status=ok
// SIG undefined FUN_1407be900(void)

longlong FUN_1407be900(longlong param_1,longlong *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined1 local_28 [8];
  longlong local_20;
  
  if ((*param_2 != 0) && ((*(byte *)(*param_2 + 10) & 1) == 0)) {
    cVar1 = UObjectBase::IsValidLowLevel();
    if (cVar1 != '\0') {
      lVar2 = UObjectBaseUtility::GetOutermost(*param_2);
      param_2 = (longlong *)*param_2;
      if (lVar2 == *(longlong *)(param_1 + 0x98)) {
        lVar2 = param_2[4];
        if ((lVar2 != 0) && (lVar2 == *(longlong *)(param_1 + 0xa0))) {
          *(longlong **)(param_1 + 0xa0) = param_2;
          (**(code **)(*param_2 + 0xa8))(param_2,param_1);
          *(longlong *)(param_1 + 0xa0) = lVar2;
        }
      }
      else {
        uVar3 = FSoftObjectPath::FSoftObjectPath(local_28,param_2);
        FUN_1407b8ee0(*(undefined8 *)(param_1 + 0x90),uVar3);
        if (local_20 != 0) {
          FMemory::Free();
          return param_1;
        }
      }
    }
  }
  return param_1;
}



// FUNCTION 1407be9c0 FUN_1407be9c0 body=142 status=ok
// SIG undefined FUN_1407be9c0(void)

ulonglong FUN_1407be9c0(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  ulonglong in_RAX;
  char cVar3;
  
  iVar1 = *(int *)((longlong)param_1 + 0xc);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  if ((iVar1 != iVar2) ||
     (in_RAX = (ulonglong)*(uint *)(param_2 + 1), *(uint *)(param_1 + 1) != *(uint *)(param_2 + 1)))
  {
    if ((iVar1 < 0) ||
       (((*(int *)(*param_1 + 600) <= iVar1 || ((int)param_1[1] < 0)) ||
        (in_RAX = *(ulonglong *)(*param_1 + 0x250),
        *(int *)((longlong)iVar1 * 0x140 + 0x78 + in_RAX) <= (int)param_1[1])))) {
      cVar3 = '\0';
    }
    else {
      cVar3 = '\x01';
    }
    if (((iVar2 < 0) || (*(int *)(*param_2 + 600) <= iVar2)) ||
       (((int)param_2[1] < 0 ||
        (in_RAX = *(ulonglong *)(*param_2 + 0x250),
        *(int *)((longlong)iVar2 * 0x140 + 0x78 + in_RAX) <= (int)param_2[1])))) {
      in_RAX = in_RAX & 0xffffffffffffff00;
    }
    else {
      in_RAX = CONCAT71((int7)(in_RAX >> 8),1);
    }
    if (cVar3 != (char)in_RAX) {
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407bea50 FUN_1407bea50 body=117 status=ok
// SIG undefined FUN_1407bea50(void)

ulonglong FUN_1407bea50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  
  iVar1 = *param_1;
  uVar4 = (ulonglong)iVar1;
  iVar2 = *param_2;
  if (iVar1 != iVar2) {
    lVar3 = *(longlong *)(param_1 + 2);
    if (((lVar3 == 0) || (iVar1 < 0)) || (*(int *)(lVar3 + 0x6f8) <= iVar1)) {
      bVar5 = false;
    }
    else {
      bVar5 = *(longlong *)(*(ulonglong *)(lVar3 + 0x6f0) + 0x18 + uVar4 * 0x28) != 0;
      uVar4 = *(ulonglong *)(lVar3 + 0x6f0);
    }
    lVar3 = *(longlong *)(param_2 + 2);
    if (((lVar3 == 0) || (iVar2 < 0)) || (*(int *)(lVar3 + 0x6f8) <= iVar2)) {
      uVar4 = uVar4 & 0xffffffffffffff00;
    }
    else {
      uVar4 = CONCAT71((int7)((ulonglong)*(longlong *)(lVar3 + 0x6f0) >> 8),
                       *(longlong *)(*(longlong *)(lVar3 + 0x6f0) + 0x18 + (longlong)iVar2 * 0x28)
                       != 0);
    }
    if (bVar5 != SUB81(uVar4,0)) {
      return CONCAT71((int7)(uVar4 >> 8),1);
    }
  }
  return uVar4 & 0xffffffffffffff00;
}



// FUNCTION 1407bead0 FUN_1407bead0 body=48 status=ok
// SIG undefined FUN_1407bead0(void)

ulonglong FUN_1407bead0(int *param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong in_RAX;
  
  lVar2 = *(longlong *)(param_1 + 2);
  if (lVar2 != 0) {
    iVar1 = *param_1;
    in_RAX = (ulonglong)iVar1;
    if ((-1 < iVar1) && (iVar1 < *(int *)(lVar2 + 0x6f8))) {
      return CONCAT71((int7)((ulonglong)*(longlong *)(lVar2 + 0x6f0) >> 8),
                      *(longlong *)(*(longlong *)(lVar2 + 0x6f0) + 0x18 + in_RAX * 0x28) != 0);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407beb00 FUN_1407beb00 body=43 status=ok
// SIG undefined FUN_1407beb00(void)

undefined8 FUN_1407beb00(longlong *param_1)

{
  return *(undefined8 *)
          ((longlong)(int)param_1[1] * 0xa8 +
          *(longlong *)
           ((longlong)*(int *)((longlong)param_1 + 0xc) * 0x140 + 0x70 +
           *(longlong *)(*param_1 + 0x250)));
}



// FUNCTION 1407beb30 FUN_1407beb30 body=24 status=ok
// SIG undefined FUN_1407beb30(void)

undefined8 FUN_1407beb30(int *param_1)

{
  return *(undefined8 *)
          (*(longlong *)(*(longlong *)(param_1 + 2) + 0x6f0) + 0x18 + (longlong)*param_1 * 0x28);
}



// FUNCTION 1407beb50 operator++ body=8 status=ok
// SIG undefined operator++(void)

void FCorePlayerControllerIterator::operator++(longlong param_1)

{
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  FUN_1407c0ab0();
  return;
}



// FUNCTION 1407beb60 FUN_1407beb60 body=79 status=ok
// SIG undefined FUN_1407beb60(void)

void FUN_1407beb60(int *param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 2);
  iVar3 = *param_1 + 1;
  *param_1 = iVar3;
  if (lVar1 != 0) {
    while ((-1 < iVar3 && (iVar3 < *(int *)(lVar1 + 0x6f8)))) {
      cVar2 = FUN_1407bead0(param_1);
      if (cVar2 != '\0') {
        return;
      }
      iVar3 = iVar3 + 1;
      *param_1 = iVar3;
    }
  }
  return;
}



// FUNCTION 1407bebb0 FUN_1407bebb0 body=577 status=ok
// SIG undefined FUN_1407bebb0(void)

undefined4 FUN_1407bebb0(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  undefined8 local_res8;
  
  plVar7 = *(longlong **)param_1[1];
  if (plVar7 == (longlong *)0x0) {
    return 1;
  }
  plVar8 = (longlong *)plVar7[0x1f];
  if (plVar8 == (longlong *)0x0) {
    (**(code **)(*plVar7 + 0x368))(plVar7);
    plVar8 = (longlong *)plVar7[0x1f];
    if (plVar8 == (longlong *)0x0) {
      return 1;
    }
  }
  lVar9 = *param_1;
  if (*(char *)(lVar9 + 0x919) != '\0') {
    uVar2 = UThrobber::GetPrivateStaticClass();
    lVar3 = (**(code **)(*plVar8 + 0x628))(plVar8,uVar2);
    if (lVar3 == 0) {
      return 2;
    }
    lVar9 = *param_1;
    if (*(char *)(lVar9 + 0x919) != '\0') {
      plVar8 = *(longlong **)(lVar9 + 0x8f8);
      bVar10 = (*(byte *)(lVar9 + 0x918) & 0xfd) != 0;
      plVar7 = plVar8 + *(int *)(lVar9 + 0x900);
      if (plVar8 != plVar7) {
        plVar1 = *(longlong **)(lVar3 + 0x188);
        do {
          if (plVar1 != plVar1 + *(int *)(lVar3 + 400)) {
            plVar4 = plVar1;
            do {
              if (*plVar4 == *plVar8) {
                if (bVar10) goto LAB_1407becb4;
                bVar10 = true;
                goto LAB_1407beccd;
              }
              plVar4 = plVar4 + 1;
            } while (plVar4 != plVar1 + *(int *)(lVar3 + 400));
          }
          if (bVar10) {
            bVar10 = false;
            break;
          }
LAB_1407becb4:
          plVar8 = plVar8 + 1;
        } while (plVar8 != plVar7);
      }
LAB_1407beccd:
      if ((byte)(*(byte *)(lVar9 + 0x918) - 2) < 2) {
        bVar10 = !bVar10;
      }
      if (!bVar10) {
        return 2;
      }
    }
  }
  lVar9 = *(longlong *)(lVar9 + 0x8e0);
  local_res8 = 0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar2 = *(undefined8 *)param_1[1];
  uVar5 = FUN_142e27720();
  lVar3 = FUN_142c491e0(uVar2,uVar5);
  if (lVar3 != 0) {
    lVar6 = FUN_142e27720();
    if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if ((bVar10) && (plVar7 = (longlong *)FUN_142c713f0(lVar3,&local_res8,lVar9), *plVar7 != 0)) {
      lVar6 = FUN_142e20fc0();
      lVar9 = *plVar7;
      lVar3 = lVar9;
      if (lVar9 != 0) {
        while (lVar3 != lVar6) {
          lVar3 = *(longlong *)(lVar3 + 0x30);
          if (lVar3 == 0) {
            return 3;
          }
        }
        if (lVar9 != 0) {
          return 0;
        }
      }
    }
  }
  return 3;
}



// FUNCTION 1407bee00 FUN_1407bee00 body=229 status=ok
// SIG undefined FUN_1407bee00(void)

ulonglong FUN_1407bee00(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined1 *in_RAX;
  float fVar5;
  undefined8 local_res10;
  
  if (*param_2 == 0) goto LAB_1407bee65;
  if (*(char *)(*param_1 + 0x28) == '\0') {
    lVar1 = *(longlong *)(*param_1 + 0x40);
    if (lVar1 != 0) {
      cVar2 = FUN_1407c3030(lVar1 + 0x6f0);
      if (cVar2 != '\0') goto LAB_1407bee72;
    }
    iVar3 = (**(code **)(*(longlong *)*param_2 + 0x288))((longlong *)*param_2,1);
    if ((iVar3 != 0) &&
       (*(int *)(*(longlong *)*param_1 + 0x1c0) < iVar3 + *(int *)(*(longlong *)*param_1 + 0x23c)))
    {
      in_RAX = (undefined1 *)param_1[1];
      *in_RAX = 1;
      goto LAB_1407bee65;
    }
  }
LAB_1407bee72:
  in_RAX = (undefined1 *)0x0;
  if ((char)param_2[0x13] != '\0') {
    iVar3 = FUN_1407c9bd0(*param_1,*param_2,(char)param_2[0x13] == '\x02');
    local_res10 = 0xffffffffffffffff;
    fVar5 = (float)FUN_142de77e0(param_2 + 0x14,param_1[2],0,&local_res10);
    uVar4 = (int)ROUND(fVar5 * 2.0 + 0.5) >> 1;
    in_RAX = (undefined1 *)(ulonglong)uVar4;
    if ((int)uVar4 <= iVar3) {
LAB_1407bee65:
      return (ulonglong)in_RAX & 0xffffffffffffff00;
    }
  }
  return CONCAT71((int7)((ulonglong)in_RAX >> 8),1);
}



// FUNCTION 1407befc0 `scalar_deleting_destructor' body=73 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong UPaperFlipbookComponent::_scalar_deleting_destructor_(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  FUN_1407731b0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4d0);
  }
  return param_1;
}



// FUNCTION 1407bf010 FUN_1407bf010 body=52 status=ok
// SIG undefined FUN_1407bf010(void)

undefined8 FUN_1407bf010(undefined8 param_1,ulonglong param_2)

{
  FUN_1407731b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x4c0);
  }
  return param_1;
}



// FUNCTION 1407bf050 FUN_1407bf050 body=388 status=ok
// SIG undefined FUN_1407bf050(void)

longlong FUN_1407bf050(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x5b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x578) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x568) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x558) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x548) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x538) != 0) {
    FMemory::Free();
  }
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x520);
  if (*(longlong *)(param_1 + 0x510) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x500) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4f0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4e0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4d0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4c0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4b0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x4a0) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x490) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x480) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x470) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x460) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x458) = &PTR_FUN_143fce298;
  FUN_1404571d0(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x5e8);
  }
  return param_1;
}



// FUNCTION 1407bf1e0 FUN_1407bf1e0 body=94 status=ok
// SIG undefined FUN_1407bf1e0(void)

undefined8 * FUN_1407bf1e0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_1440dc9a8;
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 6);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xf0);
  }
  return param_1;
}



// FUNCTION 1407bf240 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FPostProcessPassThroughPS::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_142c63cd0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1c0);
  }
  return param_1;
}



// FUNCTION 1407bf280 FUN_1407bf280 body=52 status=ok
// SIG undefined FUN_1407bf280(void)

undefined8 FUN_1407bf280(undefined8 param_1,ulonglong param_2)

{
  FUN_1407be1b0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x98);
  }
  return param_1;
}



// FUNCTION 1407bf2c0 FUN_1407bf2c0 body=380 status=ok
// SIG undefined FUN_1407bf2c0(void)

longlong FUN_1407bf2c0(longlong param_1,ulonglong param_2)

{
  int iVar1;
  longlong lVar2;
  
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(longlong *)(param_1 + 800) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty(param_1 + 0x2e0,0);
  if (*(longlong *)(param_1 + 0x300) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  if (*(longlong *)(param_1 + 0x2d0) != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x290);
  if (*(longlong *)(param_1 + 0x270) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x260) != 0) {
    FMemory::Free();
  }
  FUN_1407bde70(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x220) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x200) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x1b0) != 0) {
    FMemory::Free();
  }
  FUN_1407bdc20(param_1 + 0x198);
  iVar1 = *(int *)(param_1 + 400);
  lVar2 = *(longlong *)(param_1 + 0x188);
  if (iVar1 != 0) {
    lVar2 = lVar2 + 0x48;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
      lVar2 = lVar2 + 0x70;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    lVar2 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar2 != 0) {
    FMemory::Free();
  }
  FUN_1407be000(param_1 + 0x48);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  FUN_1404bf750(param_1 + 0x28);
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x330);
  }
  return param_1;
}



// FUNCTION 1407bf440 FUN_1407bf440 body=216 status=ok
// SIG undefined FUN_1407bf440(void)

longlong FUN_1407bf440(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 0x958);
  if (*(longlong *)(param_1 + 0x908) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x8f8) != 0) {
    FMemory::Free();
  }
  *(undefined4 *)(param_1 + 0x8c0) = 0;
  if (*(longlong *)(param_1 + 0x8b8) != 0) {
    FMemory::Free();
  }
  FUN_1407bdf80(param_1 + 0x728);
  if (*(longlong *)(param_1 + 0x718) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x708) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f8) != 0) {
    FMemory::Free();
  }
  *(undefined ***)(param_1 + 0x6f0) = &PTR_FUN_1440732c8;
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x980);
  }
  return param_1;
}



// FUNCTION 1407bf520 FUN_1407bf520 body=189 status=ok
// SIG undefined FUN_1407bf520(void)

longlong FUN_1407bf520(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x838) != 0) {
    if (*(longlong *)(param_1 + 0x828) == 0) {
      **(longlong **)(param_1 + 0x830) = 0;
    }
    else {
      **(longlong **)(param_1 + 0x830) = *(longlong *)(param_1 + 0x828);
      *(undefined8 *)(*(longlong *)(param_1 + 0x828) + 8) = *(undefined8 *)(param_1 + 0x830);
      *(undefined8 *)(param_1 + 0x828) = 0;
    }
    *(undefined8 *)(param_1 + 0x830) = 0;
    *(undefined8 *)(param_1 + 0x838) = 0;
  }
  if (*(longlong *)(param_1 + 0x818) != 0) {
    FMemory::Free();
  }
  FUN_1407bdd20(param_1 + 0x7e8);
  *(undefined ***)(param_1 + 0x700) = &PTR_FUN_14408b3d8;
  TBaseDelegate<FText>::~TBaseDelegate<FText>(param_1 + 0x730);
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x840);
  }
  return param_1;
}



// FUNCTION 1407bf5e0 FUN_1407bf5e0 body=52 status=ok
// SIG undefined FUN_1407bf5e0(void)

undefined8 FUN_1407bf5e0(undefined8 param_1,ulonglong param_2)

{
  FUN_1407734e0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x990);
  }
  return param_1;
}



// FUNCTION 1407bf620 FUN_1407bf620 body=124 status=ok
// SIG undefined FUN_1407bf620(void)

longlong FUN_1407bf620(longlong param_1,ulonglong param_2)

{
  if (*(longlong *)(param_1 + 0x758) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x748) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x700) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x6f0) != 0) {
    FMemory::Free();
  }
  FUN_14061f760(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x770);
  }
  return param_1;
}



// FUNCTION 1407bf6a0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FGlobalShader::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xc0);
  }
  return param_1;
}



// FUNCTION 1407bf6e0 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
FShaderCompilerEnvironment::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_141782120();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x250);
  }
  return param_1;
}



// FUNCTION 1407bf720 `scalar_deleting_destructor' body=130 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

longlong ULevelStreamingRequests::_scalar_deleting_destructor_(longlong param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x30);
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x20;
    do {
      FUN_1407bdc90(lVar1);
      lVar1 = lVar1 + 0x38;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *(longlong *)(param_1 + 0x30);
  }
  if (lVar1 != 0) {
    FMemory::Free();
  }
  FUN_141782120(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 1407bf7b0 FUN_1407bf7b0 body=81 status=ok
// SIG undefined FUN_1407bf7b0(void)

longlong FUN_1407bf7b0(longlong param_1,ulonglong param_2)

{
  TArray<FDelegateBase,FHeapAllocator>::~TArray<FDelegateBase,FHeapAllocator>(param_1 + 400);
  *(undefined ***)(param_1 + 0x178) = &PTR_FUN_1440732c8;
  FUN_140458c20(param_1);
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1d8);
  }
  return param_1;
}



// FUNCTION 1407bf810 thunk_FUN_1407d7200 body=5 status=ok
// SIG undefined thunk_FUN_1407d7200(void)

void thunk_FUN_1407d7200(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 auStackX_18 [16];
  
  piVar2 = (int *)FUN_1407c7790(param_1,auStackX_18,param_2);
  iVar1 = *piVar2;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) &&
     (lVar5 = (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250), lVar5 != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0x70);
    plVar3 = plVar4 + (longlong)*(int *)(lVar5 + 0x78) * 0x15;
    if (plVar4 != plVar3) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 0x15;
        if (plVar4 == plVar3) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1407d70b0(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1407bf8d0 FUN_1407bf8d0 body=507 status=ok
// SIG undefined FUN_1407bf8d0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407bf8d0(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  longlong local_a0;
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  iVar2 = *(int *)(param_3 + 0xc);
  if ((-1 < iVar2) && (iVar2 < *(int *)(param_1 + 0x38))) {
    iVar5 = 0;
    lVar6 = *(longlong *)(*param_2 + 0x10) + (longlong)iVar2 * 0x38;
    puVar7 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar2 * 0x38);
    *(int *)(lVar6 + 0xc) = *(int *)(lVar6 + 0xc) + -1;
    *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
    iVar2 = *(int *)(lVar6 + 0x30);
    if (0 < iVar2) {
      piVar3 = *(int **)(lVar6 + 0x28);
      do {
        if (*piVar3 == *(int *)(param_3 + 0x14)) {
          if (iVar5 < 0) {
            return;
          }
          if (iVar2 <= iVar5) {
            return;
          }
          FUN_1407bc410(local_f8,param_3);
          local_ec = *(undefined4 *)((longlong)iVar5 * 8 + 4 + *(longlong *)(lVar6 + 0x28));
          local_108 = *(undefined8 *)
                       ((longlong)*(int *)(param_3 + 0xc) * 0x38 + *(longlong *)(*param_2 + 0x10));
          plVar1 = (longlong *)*puVar7;
          local_100 = param_2[1];
          (**(code **)(*plVar1 + 0x2b8))(plVar1,&local_108,local_f8);
          FUN_1407d7010(lVar6 + 0x18,puVar7 + 4,*(undefined8 *)(param_3 + 0x50));
          iVar2 = *(int *)(lVar6 + 0x30);
          iVar4 = (iVar2 - iVar5) + -1;
          if (iVar4 != 0) {
            _guard_xfg_dispatch_icall_nop
                      ((void *)((longlong)iVar5 * 8 + *(longlong *)(lVar6 + 0x28)),
                       (void *)(*(longlong *)(lVar6 + 0x28) + (longlong)(iVar5 + 1) * 8),
                       (longlong)iVar4 << 3);
            iVar2 = *(int *)(lVar6 + 0x30);
          }
          *(int *)(lVar6 + 0x30) = iVar2 + -1;
          TArray<FFurSkinData_*,FDefaultAllocator>::ResizeShrink(lVar6 + 0x28);
          FUN_1407c3590(param_1,param_2);
          FUN_1407de3c0(param_1,param_2);
          if (local_68 != (longlong *)0x0) {
            LOCK();
            plVar1 = local_68 + 1;
            lVar6 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar6 == 1) {
              (**(code **)*local_68)(local_68);
              LOCK();
              piVar3 = (int *)((longlong)local_68 + 0xc);
              iVar2 = *piVar3;
              *piVar3 = *piVar3 + -1;
              UNLOCK();
              if (iVar2 == 1) {
                (**(code **)(*local_68 + 8))(local_68,1);
              }
            }
          }
          if (local_a0 == 0) {
            return;
          }
          FMemory::Free();
          return;
        }
        iVar5 = iVar5 + 1;
        piVar3 = piVar3 + 2;
      } while (iVar5 < iVar2);
    }
  }
  return;
}



// FUNCTION 1407bfad0 FUN_1407bfad0 body=253 status=ok
// SIG undefined FUN_1407bfad0(void)

void FUN_1407bfad0(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  longlong *plVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_res18 [16];
  longlong local_18;
  longlong local_10;
  
  piVar3 = (int *)FUN_1407c7790(param_1,local_res18,param_2);
  iVar1 = *piVar3;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) &&
     (lVar8 = (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250), lVar8 != 0)) {
    plVar4 = *(longlong **)(lVar8 + 0x70);
    plVar7 = plVar4 + (longlong)*(int *)(lVar8 + 0x78) * 0x15;
    if (plVar4 != plVar7) {
      while (local_10 = *plVar4, local_10 != param_2) {
        plVar4 = plVar4 + 0x15;
        if (plVar4 == plVar7) {
          return;
        }
      }
      if ((plVar4 != (longlong *)0x0) && (local_10 != 0)) {
        iVar1 = *(int *)(local_10 + 0xc);
        if (iVar1 < (int)DAT_1469e91c4) {
          uVar6 = iVar1 >> 0x1f & 0xffff;
          uVar2 = iVar1 + uVar6;
          lVar5 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar2 >> 0x10) * 8) +
                  (longlong)(int)((uVar2 & 0xffff) - uVar6) * 0x18;
        }
        else {
          lVar5 = 0;
        }
        if (((*(uint *)(lVar5 + 8) >> 0x1d & 1) == 0) &&
           (local_18 = *(longlong *)(lVar8 + 0x38), local_18 != 0)) {
          TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                    (local_18 + 0x480,&local_18);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407bfc50 FUN_1407bfc50 body=379 status=ok
// SIG undefined FUN_1407bfc50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407bfc50(longlong param_1,longlong *param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined1 auStack_128 [32];
  undefined8 local_108;
  longlong local_100;
  undefined1 local_f8 [12];
  undefined4 local_ec;
  longlong local_a0;
  longlong *local_68;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_128;
  lVar8 = (longlong)*(int *)(param_3 + 0xc) * 0x38;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x30) + lVar8);
  lVar8 = *(longlong *)(*param_2 + 0x10) + lVar8;
  *(int *)(lVar8 + 0xc) = *(int *)(lVar8 + 0xc) + 1;
  *(int *)(lVar8 + 0x10) = *(int *)(lVar8 + 0x10) + 1;
  local_108 = *(undefined8 *)
               ((longlong)*(int *)(param_3 + 0xc) * 0x38 + *(longlong *)(*param_2 + 0x10));
  local_100 = param_2[1];
  uVar5 = (**(code **)(*(longlong *)*puVar9 + 0x2d0))();
  iVar4 = *(int *)(lVar8 + 0x30);
  iVar6 = iVar4 + 1;
  *(int *)(lVar8 + 0x30) = iVar6;
  if (*(int *)(lVar8 + 0x34) < iVar6) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(lVar8 + 0x28);
  }
  lVar3 = (longlong)iVar4 * 8;
  *(undefined8 *)(lVar3 + *(longlong *)(lVar8 + 0x28)) = 0;
  puVar7 = (undefined4 *)(lVar3 + *(longlong *)(lVar8 + 0x28));
  *puVar7 = *(undefined4 *)(param_3 + 0x14);
  puVar7[1] = uVar5;
  FUN_1407bc410(local_f8,param_3);
  local_ec = uVar5;
  FUN_1407bfde0(lVar8 + 0x18,puVar9 + 4,*(undefined8 *)(param_3 + 0x50));
  (**(code **)(*(longlong *)*puVar9 + 0x2a8))((longlong *)*puVar9,&local_108,local_f8);
  FUN_1407c3590(param_1,param_2);
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    lVar8 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar8 == 1) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)(*local_68 + 8))(local_68,1);
      }
    }
  }
  if (local_a0 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407bfde0 FUN_1407bfde0 body=158 status=ok
// SIG undefined FUN_1407bfde0(void)

void FUN_1407bfde0(longlong *param_1,longlong *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  
  if ((param_3 != (longlong *)0x0) && (iVar7 = 0, 0 < (int)param_2[1])) {
    lVar6 = 0;
    do {
      lVar2 = *param_1;
      lVar3 = *param_2;
      uVar5 = (**(code **)(*param_3 + 0x2d8))(param_3);
      cVar4 = FUN_1407cebc0((longlong)iVar7 * 0x158 + lVar3,uVar5);
      if (cVar4 != '\0') {
        piVar1 = (int *)(lVar2 + lVar6);
        *piVar1 = *piVar1 + 1;
        piVar1 = (int *)(lVar2 + 8 + lVar6);
        *piVar1 = *piVar1 + 1;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (iVar7 < (int)param_2[1]);
  }
  return;
}



// FUNCTION 1407bfe80 FUN_1407bfe80 body=169 status=ok
// SIG undefined FUN_1407bfe80(void)

int FUN_1407bfe80(longlong *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  longlong lVar3;
  
  iVar1 = (int)param_1[1];
  *(int *)(param_1 + 1) = iVar1 + param_2;
  if (*(int *)((longlong)param_1 + 0xc) < iVar1 + param_2) {
    TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_1,iVar1);
  }
  puVar2 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_1);
  if (param_2 != 0) {
    lVar3 = (longlong)puVar2 + 0x24;
    do {
      *(undefined4 *)(lVar3 + -0x20) = 0;
      *(undefined8 *)(lVar3 + -0xc) = 0;
      *(undefined8 *)(lVar3 + -4) = 0;
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      *(undefined4 *)(lVar3 + -0x1c) = 0xffffffff;
      param_2 = param_2 + -1;
      puVar2 = puVar2 + 6;
      lVar3 = lVar3 + 0x30;
    } while (param_2 != 0);
  }
  return iVar1;
}



// FUNCTION 1407bff30 FUN_1407bff30 body=326 status=ok
// SIG undefined FUN_1407bff30(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int * FUN_1407bff30(longlong param_1,int *param_2,longlong *param_3)

{
  int iVar1;
  char *pcVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_198 [32];
  undefined8 local_178;
  longlong local_168;
  undefined1 local_160 [312];
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_198;
  uVar3 = 0;
  local_178 = 0;
  if (*param_3 == 0) {
    *param_2 = -1;
  }
  else {
    iVar1 = *(int *)(param_1 + 600);
    if (0 < iVar1) {
      pcVar2 = (char *)(*(longlong *)(param_1 + 0x250) + 0x14);
      uVar6 = uVar3;
      do {
        iVar5 = (int)uVar6;
        if ((*(longlong *)(pcVar2 + 4) == *param_3) && (*pcVar2 == '\x01')) {
          if (iVar5 != -1) {
            *param_2 = iVar5;
            return param_2;
          }
          break;
        }
        uVar6 = (ulonglong)(iVar5 + 1);
        uVar3 = uVar3 + 1;
        pcVar2 = pcVar2 + 0x140;
      } while ((longlong)uVar3 < (longlong)iVar1);
    }
    _guard_xfg_dispatch_icall_nop(local_160,0,0x138);
    plVar7 = (longlong *)(param_1 + 0x250);
    iVar5 = *(int *)(param_1 + 600);
    *(int *)(param_1 + 600) = iVar5 + 1;
    local_168 = param_1;
    if (*(int *)(param_1 + 0x25c) < iVar5 + 1) {
      FUN_1407d8cb0(plVar7,iVar5);
    }
    FUN_1407bc5a0((longlong)iVar5 * 0x140 + *plVar7,&local_168);
    FUN_1407be0f0(&local_168);
    lVar4 = (longlong)iVar1 * 0x140 + *plVar7;
    *(undefined1 *)(lVar4 + 9) = 1;
    *(longlong *)(lVar4 + 0x18) = *param_3;
    *(undefined1 *)(lVar4 + 0x14) = 1;
    *(undefined1 *)(lVar4 + 0x2a) = 2;
    *(undefined1 *)(lVar4 + 0x2c) = 0;
    *param_2 = iVar1;
  }
  return param_2;
}



// FUNCTION 1407c0080 FUN_1407c0080 body=156 status=ok
// SIG undefined FUN_1407c0080(void)

void FUN_1407c0080(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 local_48 [64];
  
  if (*(char *)(param_1 + 0x1f8) == '\x02') {
    lVar2 = FUN_1407cb7a0(param_1 + -0x6f0,local_48);
    uVar3 = *(undefined4 *)(lVar2 + 0x10);
    uVar4 = *(undefined4 *)(lVar2 + 0x14);
    uVar5 = *(undefined4 *)(lVar2 + 0x18);
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + -0x4d0);
    uVar4 = *(undefined4 *)(param_1 + -0x4cc);
    uVar5 = *(undefined4 *)(param_1 + -0x4c8);
  }
  iVar1 = (int)param_2[1];
  *(int *)(param_2 + 1) = iVar1 + 1;
  if (*(int *)((longlong)param_2 + 0xc) < iVar1 + 1) {
    TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_2,iVar1);
  }
  lVar2 = *param_2;
  *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(uVar4,uVar3);
  *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = uVar5;
  return;
}



// FUNCTION 1407c0120 FUN_1407c0120 body=1904 status=ok
// SIG undefined FUN_1407c0120(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c0120(longlong *param_1,undefined8 *param_2,undefined4 *param_3)

{
  float *pfVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  float *pfVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_248 [32];
  float *local_228;
  undefined4 local_220;
  undefined8 *local_218;
  undefined *local_210;
  undefined8 local_208;
  undefined4 local_200;
  float *local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  undefined1 local_190 [8];
  undefined1 local_188 [8];
  undefined1 local_180 [8];
  undefined1 local_178 [8];
  undefined1 local_170 [8];
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_158;
  undefined2 local_154;
  undefined1 local_152;
  undefined4 local_150;
  undefined1 local_14c;
  undefined4 local_148;
  undefined2 local_144;
  longlong local_120;
  undefined8 local_118;
  longlong local_100;
  undefined8 local_f8;
  ulonglong local_e8;
  
  local_e8 = DAT_1468387a8 ^ (ulonglong)auStack_248;
  local_1f8 = (float *)param_3;
  lVar3 = (**(code **)(*param_1 + 0x148))();
  if ((lVar3 != 0) && (lVar4 = (**(code **)(*(longlong *)*param_2 + 0x690))(), lVar4 == 0)) {
    plVar7 = param_1 + 0x33;
    lVar4 = param_1[0x34];
    iVar2 = (int)lVar4 + 1;
    *(int *)(param_1 + 0x34) = iVar2;
    if (*(int *)((longlong)param_1 + 0x1a4) < iVar2) {
      FUN_1404852a0(plVar7);
    }
    lVar11 = (longlong)(int)lVar4 * 0xc0;
    _guard_xfg_dispatch_icall_nop((void *)(*plVar7 + lVar11),0,0xc0);
    lVar4 = *plVar7;
    *(float *)(lVar11 + lVar4) = *local_1f8;
    FWeakObjectPtr::operator=(lVar4 + 4 + lVar11,*param_2);
    FUN_14222da00(*param_2,0,&local_1f0,&local_1e0);
    local_158 = 0x10000;
    local_160 = 0;
    local_120 = 0;
    local_118 = 0;
    local_100 = 0;
    local_f8 = 0;
    local_150 = 0;
    local_1f8 = (float *)0x0;
    local_168 = 0;
    local_154 = 0;
    local_14c = 0;
    local_152 = 0;
    local_148 = 0;
    local_144 = 0x101;
    FCollisionQueryParams::AddIgnoredActor(&local_168,*param_2);
    uVar9 = 0;
    plVar7 = (longlong *)param_1[0x4e];
    uVar8 = (longlong)(int)param_1[0x4f] & 0x1fffffffffffffff;
    if (plVar7 + (int)param_1[0x4f] < plVar7) {
      uVar8 = uVar9;
    }
    if (uVar8 != 0) {
      do {
        lVar6 = 0;
        if (*plVar7 != 0) {
          lVar6 = *(longlong *)(*plVar7 + 0x488);
        }
        if (lVar6 != 0) {
          FCollisionQueryParams::AddIgnoredActor();
        }
        plVar7 = plVar7 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar8);
    }
    pfVar10 = (float *)param_1[0x4c];
    pfVar1 = pfVar10 + (longlong)(int)param_1[0x4d] * 3;
    local_1f8 = pfVar1;
    if (pfVar10 != pfVar1) {
      lVar11 = lVar4 + 0x10 + lVar11;
      do {
        fVar16 = local_1f0 - *pfVar10;
        fVar15 = local_1ec - pfVar10[1];
        fVar12 = fVar15 * fVar15 + fVar16 * fVar16;
        if (fVar12 == 1.0) {
          fVar13 = fVar15;
          fVar17 = fVar16;
          fVar18 = local_1e8 - pfVar10[2];
          if (local_1e8 - pfVar10[2] != 0.0) {
LAB_1407c0433:
            fVar13 = fVar15;
            fVar17 = fVar16;
            fVar18 = 0.0;
          }
        }
        else {
          fVar13 = DAT_1468b5d94;
          fVar17 = DAT_1468b5d90;
          fVar18 = DAT_1468b5d98;
          if (1e-08 <= fVar12) {
            auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
            fVar13 = auVar14._0_4_;
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            fVar16 = fVar16 * fVar13;
            fVar15 = fVar15 * fVar13;
            goto LAB_1407c0433;
          }
        }
        fVar12 = local_1e0;
        if (local_1e0 <= local_1dc) {
          fVar12 = local_1dc;
        }
        local_200 = 0;
        local_208 = 0;
        local_210 = &DAT_146aefe68;
        local_218 = &local_168;
        if (fVar12 <= local_1d8) {
          fVar12 = local_1d8;
        }
        local_228 = &local_1f0;
        local_220 = 3;
        local_1d0 = (fVar18 * DAT_1464aa798._4_4_ - fVar13 * DAT_1464aa7a0) * fVar12;
        local_1c0 = local_1f0 - local_1d0;
        local_1bc = (fVar17 * DAT_1464aa7a0 - fVar18 * (float)DAT_1464aa798) * fVar12;
        local_1d0 = local_1d0 + local_1f0;
        local_1cc = local_1bc + local_1ec;
        local_1c8 = (fVar13 * (float)DAT_1464aa798 - fVar17 * DAT_1464aa798._4_4_) * fVar12;
        local_1b8 = local_1e8 - local_1c8;
        local_1c8 = local_1c8 + local_1e8;
        local_1ac = local_1ec + DAT_1464aa798._4_4_ * fVar12;
        local_1bc = local_1ec - local_1bc;
        local_19c = local_1ec - DAT_1464aa798._4_4_ * fVar12;
        local_1b0 = local_1f0 + (float)DAT_1464aa798 * fVar12;
        local_1a0 = local_1f0 - (float)DAT_1464aa798 * fVar12;
        local_1a8 = local_1e8 + DAT_1464aa7a0 * fVar12;
        local_198 = local_1e8 - DAT_1464aa7a0 * fVar12;
        puVar5 = (undefined8 *)FUN_142330010(lVar3,local_190,1,pfVar10);
        iVar2 = *(int *)(lVar11 + 0xa8);
        *(int *)(lVar11 + 0xa8) = iVar2 + 1;
        if (*(int *)(lVar11 + 0xac) < iVar2 + 1) {
          TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
          ::ResizeGrow(lVar11,iVar2);
        }
        local_200 = 0;
        local_208 = 0;
        lVar4 = *(longlong *)(lVar11 + 0xa0);
        if (*(longlong *)(lVar11 + 0xa0) == 0) {
          lVar4 = lVar11;
        }
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = *puVar5;
        local_210 = &DAT_146aefe68;
        local_218 = &local_168;
        local_228 = &local_1d0;
        local_220 = 3;
        puVar5 = (undefined8 *)FUN_142330010(lVar3,local_188,1,pfVar10);
        iVar2 = *(int *)(lVar11 + 0xa8);
        *(int *)(lVar11 + 0xa8) = iVar2 + 1;
        if (*(int *)(lVar11 + 0xac) < iVar2 + 1) {
          TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
          ::ResizeGrow(lVar11,iVar2);
        }
        local_200 = 0;
        local_208 = 0;
        lVar4 = *(longlong *)(lVar11 + 0xa0);
        if (*(longlong *)(lVar11 + 0xa0) == 0) {
          lVar4 = lVar11;
        }
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = *puVar5;
        local_210 = &DAT_146aefe68;
        local_218 = &local_168;
        local_228 = &local_1c0;
        local_220 = 3;
        puVar5 = (undefined8 *)FUN_142330010(lVar3,local_180,1,pfVar10);
        iVar2 = *(int *)(lVar11 + 0xa8);
        *(int *)(lVar11 + 0xa8) = iVar2 + 1;
        if (*(int *)(lVar11 + 0xac) < iVar2 + 1) {
          TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
          ::ResizeGrow(lVar11,iVar2);
        }
        local_200 = 0;
        local_208 = 0;
        lVar4 = *(longlong *)(lVar11 + 0xa0);
        if (*(longlong *)(lVar11 + 0xa0) == 0) {
          lVar4 = lVar11;
        }
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = *puVar5;
        local_210 = &DAT_146aefe68;
        local_218 = &local_168;
        local_228 = &local_1b0;
        local_220 = 3;
        puVar5 = (undefined8 *)FUN_142330010(lVar3,local_178,1,pfVar10);
        iVar2 = *(int *)(lVar11 + 0xa8);
        *(int *)(lVar11 + 0xa8) = iVar2 + 1;
        if (*(int *)(lVar11 + 0xac) < iVar2 + 1) {
          TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
          ::ResizeGrow(lVar11,iVar2);
        }
        local_200 = 0;
        local_208 = 0;
        lVar4 = *(longlong *)(lVar11 + 0xa0);
        if (*(longlong *)(lVar11 + 0xa0) == 0) {
          lVar4 = lVar11;
        }
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = *puVar5;
        local_210 = &DAT_146aefe68;
        local_218 = &local_168;
        local_228 = &local_1a0;
        local_220 = 3;
        puVar5 = (undefined8 *)FUN_142330010(lVar3,local_170,1,pfVar10);
        iVar2 = *(int *)(lVar11 + 0xa8);
        *(int *)(lVar11 + 0xa8) = iVar2 + 1;
        if (*(int *)(lVar11 + 0xac) < iVar2 + 1) {
          TArray<FSlateCachedFastPathRenderingData_*,TInlineAllocator<20,TSizedDefaultAllocator<32>_>_>
          ::ResizeGrow(lVar11,iVar2);
        }
        lVar4 = *(longlong *)(lVar11 + 0xa0);
        if (*(longlong *)(lVar11 + 0xa0) == 0) {
          lVar4 = lVar11;
        }
        pfVar10 = pfVar10 + 3;
        *(undefined8 *)(lVar4 + (longlong)iVar2 * 8) = *puVar5;
      } while (pfVar10 != pfVar1);
    }
    if (local_100 != 0) {
      FMemory::Free();
    }
    if (local_120 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407c0890 FUN_1407c0890 body=161 status=ok
// SIG undefined FUN_1407c0890(void)

void FUN_1407c0890(undefined4 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  iVar1 = param_1[0x4a];
  param_1[0x4a] = iVar1 + 1;
  if ((int)param_1[0x4b] < iVar1 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
    puVar2 = param_1 + 0x18;
  }
  puVar2 = puVar2 + (longlong)iVar1 * 6;
  FWeakObjectPtr::operator=(puVar2,0);
  FWeakObjectPtr::operator=(puVar2 + 2,param_2);
  puVar2[4] = 0;
  *(undefined2 *)(puVar2 + 5) = 0;
  *(undefined1 *)((longlong)puVar2 + 0x16) = 0;
  return;
}



// FUNCTION 1407c0940 FUN_1407c0940 body=171 status=ok
// SIG undefined FUN_1407c0940(void)

void FUN_1407c0940(undefined4 *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = 0;
  iVar1 = param_1[0x4a];
  param_1[0x4a] = iVar1 + 1;
  if ((int)param_1[0x4b] < iVar1 + 1) {
    TArray<FCompactPose,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(param_1 + 0x18,iVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0x48);
  if (*(undefined4 **)(param_1 + 0x48) == (undefined4 *)0x0) {
    puVar2 = param_1 + 0x18;
  }
  puVar2 = puVar2 + (longlong)iVar1 * 6;
  FWeakObjectPtr::operator=(puVar2,0);
  FWeakObjectPtr::operator=(puVar2 + 2,param_2);
  puVar2[4] = *param_3;
  *(undefined2 *)(puVar2 + 5) = *(undefined2 *)(param_3 + 1);
  *(undefined1 *)((longlong)puVar2 + 0x16) = *(undefined1 *)((longlong)param_3 + 6);
  return;
}



// FUNCTION 1407c09f0 FUN_1407c09f0 body=166 status=ok
// SIG undefined FUN_1407c09f0(void)

void FUN_1407c09f0(longlong param_1,longlong param_2,int param_3)

{
  longlong local_res10 [3];
  
  if (param_2 != 0) {
    local_res10[0] = param_2;
    if (*(char *)(param_1 + 0x968) == '\x02') {
      if ((param_3 < 0) || (*(int *)(param_1 + 0x960) <= param_3)) {
        if (*(int *)(param_1 + 0x960) == 0) {
          FUN_1407bfe80(param_1 + 0x958,1);
        }
        param_3 = 0;
      }
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>
                ((longlong)param_3 * 0x30 + *(longlong *)(param_1 + 0x958) + 0x18,local_res10);
    }
    else {
      TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
      AddUniqueImpl<UGeometryCacheComponent_*_const_&>(param_1 + 0x940,local_res10);
      if (*(char *)(param_1 + 0x968) == '\0') {
        *(undefined1 *)(param_1 + 0x968) = 1;
      }
    }
    FUN_1407df9c0(param_1);
    FUN_1407c3a30(param_1);
  }
  return;
}



// FUNCTION 1407c0aa0 <lambda_invoker_cdecl> body=3 status=ok
// SIG undefined <lambda_invoker_cdecl>(void)

void <lambda_a8cc8296dde5d0c9e0a57530f5774840>::<lambda_invoker_cdecl>(int *param_1)

{
  *param_1 = *param_1 + 1;
  return;
}



// FUNCTION 1407c0ab0 FUN_1407c0ab0 body=154 status=ok
// SIG undefined FUN_1407c0ab0(void)

void FUN_1407c0ab0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  iVar3 = *(int *)((longlong)param_1 + 0xc);
  do {
    if ((iVar3 < 0) || (lVar1 = *param_1, *(int *)(lVar1 + 600) <= iVar3)) {
      return;
    }
    iVar2 = (int)param_1[1];
    while (-1 < iVar2) {
      lVar4 = *(longlong *)(lVar1 + 0x250) + (longlong)iVar3 * 0x140;
      if ((*(int *)(lVar4 + 0x78) <= iVar2) ||
         (*(longlong *)((longlong)iVar2 * 0xa8 + *(longlong *)(lVar4 + 0x70)) != 0)) {
        if ((-1 < iVar2) &&
           (iVar2 < *(int *)(*(longlong *)(lVar1 + 0x250) + 0x78 + (longlong)iVar3 * 0x140))) {
          return;
        }
        break;
      }
      iVar2 = iVar2 + 1;
      *(int *)(param_1 + 1) = iVar2;
    }
    if ((char)param_1[2] == '\0') {
      return;
    }
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + 1) = 0;
    *(int *)((longlong)param_1 + 0xc) = iVar3;
  } while( true );
}



// FUNCTION 1407c0b50 FUN_1407c0b50 body=45 status=ok
// SIG undefined FUN_1407c0b50(void)

undefined8 * FUN_1407c0b50(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  undefined4 uVar1;
  
  if (param_3 != 0) {
    uVar1 = *(undefined4 *)(param_3 + 0x930);
    *param_2 = param_1;
    *(undefined4 *)(param_2 + 1) = uVar1;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
    return param_2;
  }
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0xffffffff;
  *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  return param_2;
}



// FUNCTION 1407c0b80 FUN_1407c0b80 body=18 status=ok
// SIG undefined FUN_1407c0b80(void)

undefined8 * FUN_1407c0b80(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = param_1;
  *(undefined4 *)(param_2 + 1) = 0;
  *(undefined1 *)((longlong)param_2 + 0xc) = 1;
  return param_2;
}



// FUNCTION 1407c0ba0 FUN_1407c0ba0 body=73 status=ok
// SIG undefined FUN_1407c0ba0(void)

void FUN_1407c0ba0(undefined8 param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_142c6f640(param_1,1);
  if (lVar1 != 0) {
    UAnimMontage::GetPrivateStaticClass();
  }
  uVar2 = FUN_142c6f130(param_1);
  FUN_142cad710(uVar2,&DAT_146b300f0);
  FUN_1407d9790(param_1);
  FUN_142c66fe0(param_1);
  return;
}



// FUNCTION 1407c0bf0 FUN_1407c0bf0 body=1203 status=ok
// SIG undefined FUN_1407c0bf0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c0bf0(longlong param_1,int *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 uVar12;
  longlong lVar13;
  float fVar14;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  int local_190;
  int local_18c;
  int local_188 [2];
  undefined8 local_180;
  undefined4 local_178;
  undefined8 local_174;
  longlong local_168;
  undefined2 *local_160;
  undefined8 local_158;
  longlong *local_150;
  longlong *local_148;
  ulonglong local_140;
  longlong local_138;
  undefined8 local_130;
  undefined8 local_128;
  longlong local_120;
  longlong *local_118;
  ulonglong local_110;
  undefined1 local_108 [24];
  undefined8 local_f0 [16];
  undefined8 *local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_1468387a8 ^ (ulonglong)auStack_1b8;
  lVar9 = (longlong)*param_2 * 0x140 + *(longlong *)(param_1 + 0x250);
  local_150 = *(longlong **)(*(longlong *)(lVar9 + 0x40) + 0x900);
  if ((local_150 != (longlong *)0x0) ||
     (local_150 = *(longlong **)(*(longlong *)(lVar9 + 0x40) + 0x8f8), local_150 != (longlong *)0x0)
     ) {
    local_70 = (undefined8 *)0x0;
    local_68 = 0;
    local_138 = lVar9;
    local_120 = param_1;
    (**(code **)(*local_150 + 0x2f8))(local_150,local_f0);
    if ((int)local_68 != 0) {
      lVar13 = *(longlong *)(lVar9 + 0x38);
      puVar5 = local_f0;
      if (local_70 != (undefined8 *)0x0) {
        puVar5 = local_70;
      }
      local_198 = 0;
      uVar12 = *puVar5;
      local_160 = (undefined2 *)0x0;
      local_158 = 0;
      local_178 = 0xffffffff;
      local_174 = 0;
      local_168 = 0;
      local_180 = uVar12;
      if (lVar13 == 0) {
        local_198 = 0;
        local_168 = 0;
      }
      else {
        uVar3 = FSoftObjectPath::FSoftObjectPath(local_108,lVar13);
        FSoftObjectPath::operator=(&local_168,uVar3);
        FWeakObjectPtr::operator=(&local_178,lVar13);
        LOCK();
        if (DAT_1464b56f4 == 0) {
          DAT_1464b56f4 = 0;
        }
        UNLOCK();
        local_174 = CONCAT44(DAT_1464b56f4,(undefined4)local_174);
      }
      *(undefined4 *)(lVar9 + 0xe0) = 0;
      if (0x7fffffff < *(uint *)(lVar9 + 0xe4)) {
        TArray<void_*,FDefaultAllocator>::ResizeTo(lVar9 + 0xd8,0);
      }
      local_148 = *(longlong **)(param_1 + 0x220);
      local_140 = 0;
      local_110 = (longlong)*(int *)(param_1 + 0x228) & 0x1fffffffffffffff;
      if (local_148 + *(int *)(param_1 + 0x228) < local_148) {
        local_110 = 0;
      }
      if (local_110 != 0) {
        do {
          lVar9 = *local_148;
          lVar13 = *(longlong *)(lVar9 + 0x88);
          lVar10 = (longlong)*(int *)(lVar9 + 0x90) * 0x20 + lVar13;
          for (; lVar13 != lVar10; lVar13 = lVar13 + 0x20) {
            plVar4 = *(longlong **)(lVar13 + 0x10);
            plVar11 = plVar4 + (longlong)*(int *)(lVar13 + 0x18) * 4;
            for (; plVar4 != plVar11; plVar4 = plVar4 + 4) {
              if ((DAT_14685c0c0 == '\0') || ((char)plVar4[3] != '\0')) {
                plVar8 = (longlong *)*plVar4;
                plVar1 = plVar8 + (longlong)(int)plVar4[1] * 3;
                for (; plVar8 != plVar1; plVar8 = plVar8 + 3) {
                  if (*plVar8 == local_168) {
                    puVar7 = &DAT_143f3eda8;
                    if ((int)local_158 != 0) {
                      puVar7 = local_160;
                    }
                    if ((int)plVar8[2] == 0) {
                      puVar6 = &DAT_143f3eda8;
                    }
                    else {
                      puVar6 = (undefined2 *)plVar8[1];
                    }
                    iVar2 = FGenericPlatformStricmp::Stricmp<wchar_t,wchar_t>(puVar6,puVar7);
                    if (iVar2 == 0) {
                      lVar13 = plVar4[2];
                      uVar12 = local_180;
                      goto LAB_1407c0ecf;
                    }
                  }
                }
              }
            }
            uVar12 = local_180;
          }
          if ((DAT_14685c0c0 == '\0') || (*(char *)(lVar9 + 0x80) == '\0')) {
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(lVar9 + 0x30,&local_190,uVar12);
            if (local_190 == -1) {
              lVar13 = 0;
            }
            else {
              lVar13 = *(longlong *)(lVar9 + 0x30) + (longlong)local_190 * 0x18;
            }
            plVar4 = (longlong *)(lVar13 + 8);
            if (lVar13 == 0) {
              plVar4 = (longlong *)0x0;
            }
            if (plVar4 != (longlong *)0x0) {
              lVar13 = *plVar4;
LAB_1407c0ecf:
              if (lVar13 != 0) {
                (**(code **)(*local_150 + 0x300))(local_150);
                uVar12 = local_180;
              }
            }
          }
          local_198 = FUN_1407ca5d0(lVar9,&local_178,uVar12);
          lVar13 = local_138;
          if (local_198 != 0) {
            iVar2 = *(int *)(local_138 + 0xe0);
            *(int *)(local_138 + 0xe0) = iVar2 + 1;
            if (*(int *)(local_138 + 0xe4) < iVar2 + 1) {
              TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow
                        (local_138 + 0xd8,iVar2);
            }
            *(longlong *)(*(longlong *)(lVar13 + 0xd8) + (longlong)iVar2 * 8) = local_198;
            local_130 = 0xffffffffffffffff;
            fVar14 = (float)FUN_142de77e0(lVar9 + 0x128,0,0,&local_130);
            *(int *)(lVar13 + 0xe8) = (int)ROUND(fVar14 * 2.0 + 0.5) >> 1;
            local_128 = 0xffffffffffffffff;
            fVar14 = (float)FUN_142de77e0(lVar9 + 0xa8,0,0,&local_128);
            lVar9 = local_120;
            TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
            ::FindId(local_120 + 0x290,&local_18c,local_198);
            if ((local_18c == -1) ||
               (lVar13 = *(longlong *)(lVar9 + 0x290) + (longlong)local_18c * 0x18, lVar13 == 0)) {
              local_118 = &local_198;
              FUN_140608300(lVar9 + 0x290,local_188,&local_118,0);
              lVar13 = *(longlong *)(lVar9 + 0x290) + (longlong)local_188[0] * 0x18;
            }
            *(int *)(lVar13 + 8) = (int)ROUND(fVar14 * 2.0 + 0.5) >> 1;
          }
          local_148 = local_148 + 1;
          local_140 = local_140 + 1;
        } while (local_140 != local_110);
      }
      if (local_160 != (undefined2 *)0x0) {
        FMemory::Free();
      }
    }
    if (local_70 != (undefined8 *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407c10b0 FUN_1407c10b0 body=247 status=ok
// SIG undefined FUN_1407c10b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c10b0(undefined8 param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8;
  longlong local_a0 [16];
  longlong *local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_1407c8230(param_1,local_a0);
  uVar3 = 0;
  plVar1 = local_a0;
  if (local_20 != (longlong *)0x0) {
    plVar1 = local_20;
  }
  FUN_14074b5e0(plVar1,plVar1 + local_18,(longlong)local_18,local_a8);
  FUN_1407bb0a0(local_a0);
  plVar1 = local_a0;
  if (local_20 != (longlong *)0x0) {
    plVar1 = local_20;
  }
  uVar2 = (longlong)local_18 & 0x1fffffffffffffff;
  if (plVar1 + local_18 < plVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      if ((longlong *)*plVar1 != (longlong *)0x0) {
        (**(code **)(*(longlong *)*plVar1 + 0x330))();
      }
      plVar1 = plVar1 + 1;
      uVar3 = uVar3 + 1;
    } while (uVar3 != uVar2);
  }
  if (local_20 != (longlong *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407c11b0 FUN_1407c11b0 body=405 status=ok
// SIG undefined FUN_1407c11b0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c11b0(longlong param_1,int param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  undefined1 auStack_f8 [32];
  longlong local_d8 [16];
  longlong *local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  if ((((param_1 != 0) && (local_48 = DAT_1468387a8 ^ (ulonglong)auStack_f8, param_2 != -1)) &&
      (param_3 != 0)) &&
     (lVar4 = (longlong)param_2 * 0x30 + *(longlong *)(param_3 + 0x958),
     *(longlong *)(lVar4 + 0x10) != 0)) {
    plVar7 = *(longlong **)(lVar4 + 0x18);
    plVar1 = plVar7 + *(int *)(lVar4 + 0x20);
    if (plVar7 != plVar1) {
      do {
        if (*plVar7 != 0) {
          plVar3 = (longlong *)(*plVar7 + 0x458);
          local_58 = (longlong *)0x0;
          local_50 = 0;
          (**(code **)(*plVar3 + 0x10))(plVar3,local_d8);
          plVar3 = local_d8;
          if (local_58 != (longlong *)0x0) {
            plVar3 = local_58;
          }
          uVar5 = (longlong)(int)local_50 & 0x1fffffffffffffff;
          if (plVar3 + (int)local_50 < plVar3) {
            uVar5 = 0;
          }
          uVar6 = 0;
          if (uVar5 != 0) {
            do {
              plVar2 = (longlong *)*plVar3;
              if (plVar2 != (longlong *)0x0) {
                (**(code **)(*plVar2 + 0x8f0))(plVar2,param_3,*(undefined8 *)(lVar4 + 0x10));
              }
              plVar3 = plVar3 + 1;
              uVar6 = uVar6 + 1;
            } while (uVar6 != uVar5);
          }
          if (local_58 != (longlong *)0x0) {
            FMemory::Free();
          }
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 != plVar1);
    }
  }
  return;
}



// FUNCTION 1407c1350 FUN_1407c1350 body=58 status=ok
// SIG undefined FUN_1407c1350(void)

undefined1 FUN_1407c1350(longlong param_1,undefined1 param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    lVar2 = FUN_1407cb650();
    if (lVar2 != 0) {
      uVar1 = FUN_1407c1390(lVar2,param_2,1);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1407c1390 FUN_1407c1390 body=298 status=ok
// SIG undefined FUN_1407c1390(void)

undefined8 FUN_1407c1390(longlong param_1,char param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar7;
  ulonglong uVar6;
  
  if (param_3 == '\0') {
    if (*(char *)(param_1 + 0x5c) != '\0') {
      iVar2 = *(int *)(param_1 + 0x60);
      if (param_2 != '\0') {
        iVar2 = iVar2 + *(int *)(param_1 + 0x68);
      }
      if (iVar2 < 1) {
        return 1;
      }
    }
    return 0;
  }
  uVar6 = 0;
  uVar5 = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x40) + 0x980);
    uVar7 = uVar6;
    if (lVar3 != 0) {
      uVar7 = *(ulonglong *)(lVar3 + 0x590);
    }
    uVar5 = uVar6;
    uVar6 = uVar7;
    if (uVar7 != 0) {
      while (((iVar2 = (int)uVar5, -1 < iVar2 && (iVar2 < *(int *)(uVar7 + 0x6f8))) &&
             (*(longlong *)(*(longlong *)(uVar7 + 0x6f0) + 0x18 + (longlong)iVar2 * 0x28) == 0))) {
        uVar5 = (ulonglong)(iVar2 + 1);
      }
    }
  }
  do {
    iVar2 = (int)uVar5;
    if (((iVar2 == -1) || (uVar6 == 0)) ||
       ((iVar2 < 0 ||
        ((*(int *)(uVar6 + 0x6f8) <= iVar2 ||
         (*(longlong *)(*(longlong *)(uVar6 + 0x6f0) + 0x18 + (longlong)iVar2 * 0x28) == 0)))))) {
      return 1;
    }
    lVar3 = FUN_1407cb650();
    if ((lVar3 == 0) || (cVar1 = FUN_1407c1390(lVar3,param_2,0), cVar1 == '\0')) {
      return 0;
    }
    do {
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
      if (((int)uVar4 < 0) || (*(int *)(uVar6 + 0x6f8) <= (int)uVar4)) break;
    } while (*(longlong *)(*(longlong *)(uVar6 + 0x6f0) + 0x18 + (longlong)(int)uVar4 * 0x28) == 0);
  } while( true );
}



// FUNCTION 1407c14c0 FUN_1407c14c0 body=64 status=ok
// SIG undefined FUN_1407c14c0(void)

void FUN_1407c14c0(undefined8 param_1,undefined1 param_2,undefined1 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    FUN_1407c1390(lVar1,param_2,param_3);
    return;
  }
  return;
}



// FUNCTION 1407c1500 FUN_1407c1500 body=399 status=ok
// SIG undefined FUN_1407c1500(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c1500(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined1 local_70;
  undefined1 local_68;
  undefined8 local_58;
  longlong local_50 [4];
  longlong *local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  if ((*(longlong *)(param_1 + 0x118) != 0) && (param_2 != (longlong *)0x0)) {
    local_30 = (longlong *)0x0;
    local_28 = 0;
    FUN_1407ba020(*(longlong *)(param_1 + 0x118),local_50,0);
    plVar6 = local_50;
    if (local_30 != (longlong *)0x0) {
      plVar6 = local_30;
    }
    plVar1 = plVar6 + (int)local_28;
    for (; (lVar5 = 0, plVar6 != plVar1 &&
           ((lVar5 = *plVar6, lVar5 == 0 ||
            (*(longlong *)(lVar5 + 0x18) != *(longlong *)(param_1 + 0x978))))); plVar6 = plVar6 + 1)
    {
    }
    lVar3 = (**(code **)(*param_2 + 0x688))(param_2);
    if ((lVar3 == 0) || (lVar5 == 0)) {
      lVar5 = AHeoCon::GetPrivateStaticClass();
      if ((*(int *)(param_2[2] + 0x90) < *(int *)(lVar5 + 0x90)) ||
         (*(longlong *)(*(longlong *)(param_2[2] + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8) !=
          lVar5 + 0x88)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      local_58 = 0;
      if (bVar2) {
        local_68 = 0;
        local_70 = 1;
        local_78 = 2;
        FUN_142cb6f40(param_2,param_1,0,2);
      }
      else {
        FUN_1422232e0(param_2,param_1,&DAT_146532184,0);
      }
    }
    else {
      FUN_142ce1dc0(lVar5,lVar3,1);
    }
    uVar4 = UScrollBox::GetPrivateStaticClass();
    lVar5 = (**(code **)(*param_2 + 0x628))(param_2,uVar4);
    if (lVar5 != 0) {
      FUN_142d14700(lVar5);
    }
    if (local_30 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407c1690 FUN_1407c1690 body=250 status=ok
// SIG undefined FUN_1407c1690(void)

undefined8 FUN_1407c1690(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  float local_res8 [2];
  undefined1 local_18 [8];
  longlong *local_10;
  
  if (((char)param_1[1] == '\0') ||
     (lVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
              ::GetBoundProgramCounterForTimerManager(param_1 + 2), lVar4 != 0)) {
    lVar4 = TBaseStaticDelegateInstance<TTypeWrapper<void>___cdecl(FInstallBundleRequestResultInfo),bool,bool,bool,bool>
            ::GetBoundProgramCounterForTimerManager(param_1 + 2);
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x38))(param_1);
      *(undefined1 *)((longlong)param_1 + 0xd1) = 0;
      local_res8[0] = 3.4028235e+38;
      FUN_1407d15b0(param_1[0x1b],local_18,lVar4,local_res8);
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
      if (local_res8[0] != 3.4028235e+38) {
        *(undefined4 *)(param_1 + 0x19) = 0;
        *(undefined1 *)(param_1 + 0x1a) = 1;
        *(float *)((longlong)param_1 + 0xcc) = local_res8[0] + 0.5;
        return 1;
      }
    }
  }
  else {
    *(undefined1 *)((longlong)param_1 + 0xd1) = 1;
  }
  return 0;
}



// FUNCTION 1407c1790 FUN_1407c1790 body=2466 status=ok
// SIG undefined FUN_1407c1790(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001407c18cf) */
/* WARNING: Removing unreachable block (ram,0x0001407c1a3f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c1790(longlong *param_1)

{
  longlong *plVar1;
  float fVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined1 uVar18;
  uint uVar19;
  ulonglong uVar20;
  void *pvVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  float fVar24;
  undefined1 auStack_558 [32];
  ulonglong local_538;
  undefined1 *local_530;
  undefined *local_528;
  undefined1 local_518 [16];
  ulonglong local_508;
  undefined4 local_500;
  undefined4 local_4f8;
  undefined4 local_4f4;
  undefined4 local_4f0;
  undefined4 local_4e8;
  undefined4 local_4e4;
  float local_4e0;
  undefined4 local_4d8;
  undefined4 local_4d4;
  float local_4d0;
  undefined4 local_4c8;
  undefined4 local_4c4;
  undefined4 local_4c0;
  longlong local_4b8;
  undefined8 local_4b0;
  undefined4 local_4a8;
  float local_49c;
  ulonglong local_498;
  float fStack_490;
  float fStack_48c;
  float local_480;
  undefined4 local_470;
  undefined1 local_468 [16];
  byte local_458 [12];
  undefined4 local_44c;
  float local_448;
  undefined8 local_444 [15];
  undefined1 local_3c8 [128];
  undefined1 *local_348;
  ulonglong local_340;
  undefined1 local_338 [256];
  undefined1 *local_238;
  undefined8 local_230;
  undefined1 local_228 [256];
  undefined1 *local_128;
  ulonglong local_120;
  undefined1 local_118 [72];
  longlong local_d0;
  longlong local_b0;
  ulonglong local_98;
  
  local_98 = DAT_1468387a8 ^ (ulonglong)auStack_558;
  lVar10 = (**(code **)(*param_1 + 0x148))();
  if ((char)param_1[0xb5] == '\0') {
    return;
  }
  if (lVar10 == 0) {
    return;
  }
  cVar8 = UWorld::IsGameWorld(lVar10);
  if (cVar8 != '\0') {
    return;
  }
  if (DAT_1468b616c != '\0') {
    return;
  }
  local_4b8 = (**(code **)(*param_1 + 0x148))(param_1);
  if (local_4b8 == 0) {
    return;
  }
  uVar16 = 0;
  local_348 = (undefined1 *)0x0;
  local_340 = 0;
  FUN_1407ba460(param_1,local_3c8,0);
  uVar17 = (uint)local_340;
  local_128 = (undefined1 *)0x0;
  local_120 = 0;
  if ((int)(uint)local_340 < 1) {
    if (((int)(uint)local_340 < 0) && ((uint)local_340 != 0)) {
      local_120 = local_340 & 0xffffffff;
      TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(local_228)
      ;
      goto LAB_1407c1905;
    }
  }
  else {
    local_120 = local_340 & 0xffffffff;
    TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
    ResizeGrow(local_228,0);
    puVar11 = local_228;
    if (local_128 != (undefined1 *)0x0) {
      puVar11 = local_128;
    }
    if (uVar17 != 0) {
      puVar11 = puVar11 + 0xd;
      do {
        *(undefined2 *)(puVar11 + -1) = 0;
        puVar11 = puVar11 + 0x10;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
LAB_1407c1905:
  }
  uVar22 = uVar16;
  uVar23 = uVar16;
  uVar20 = uVar16;
  uVar17 = (uint)local_340;
  if (0 < (int)(uint)local_340) {
    do {
      puVar11 = local_3c8;
      if (local_348 != (undefined1 *)0x0) {
        puVar11 = local_348;
      }
      lVar10 = *(longlong *)(puVar11 + uVar20);
      puVar11 = local_228;
      if (local_128 != (undefined1 *)0x0) {
        puVar11 = local_128;
      }
      uVar3 = *(undefined4 *)(lVar10 + 0x224);
      local_500 = *(undefined4 *)(lVar10 + 0x228);
      *(undefined4 *)(puVar11 + uVar22) = *(undefined4 *)(lVar10 + 0x220);
      *(undefined4 *)((longlong)(puVar11 + uVar22) + 4) = uVar3;
      *(undefined4 *)(puVar11 + uVar22 + 8) = local_500;
      if ((*(char *)(lVar10 + 0x8c8) == '\0') || (*(char *)(lVar10 + 0x951) != '\0')) {
        uVar18 = 0;
      }
      else {
        uVar18 = 1;
      }
      puVar11 = local_228;
      if (local_128 != (undefined1 *)0x0) {
        puVar11 = local_128;
      }
      uVar19 = (int)uVar23 + 1;
      puVar11[uVar22 + 0xc] = uVar18;
      uVar22 = uVar22 + 0x10;
      uVar23 = (ulonglong)uVar19;
      uVar20 = uVar20 + 8;
      uVar17 = (uint)local_340;
    } while ((int)uVar19 < (int)(uint)local_340);
  }
  local_238 = (undefined1 *)0x0;
  local_230 = 0;
  if ((int)uVar17 < 1) {
    if ((-1 < (int)uVar17) || (uVar17 == 0)) goto LAB_1407c1a7b;
    local_238 = (undefined1 *)0x0;
    local_230 = (ulonglong)uVar17;
    TArray<D3D12_STATE_SUBOBJECT,TInlineAllocator<16,FDefaultAllocator>_>::ResizeShrink(local_338);
  }
  else {
    local_230 = (ulonglong)uVar17;
    TArray<FNiagaraRendererVariableInfo,TInlineAllocator<16,TSizedDefaultAllocator<32>_>_>::
    ResizeGrow(local_338,0);
    puVar11 = local_338;
    if (local_238 != (undefined1 *)0x0) {
      puVar11 = local_238;
    }
    if (uVar17 != 0) {
      puVar11 = puVar11 + 0xd;
      do {
        *(undefined2 *)(puVar11 + -1) = 0;
        puVar11 = puVar11 + 0x10;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
  }
  uVar17 = (uint)local_340;
LAB_1407c1a7b:
  if (0 < (int)uVar17) {
    uVar20 = (ulonglong)_tls_index;
    pvVar21 = ThreadLocalStoragePointer;
    uVar22 = uVar16;
    uVar23 = uVar16;
    do {
      puVar11 = local_3c8;
      if (local_348 != (undefined1 *)0x0) {
        puVar11 = local_348;
      }
      lVar10 = *(longlong *)(puVar11 + uVar22);
      if (lVar10 != param_1[0xb3]) {
        plVar15 = (longlong *)param_1[0xb6];
        plVar1 = plVar15 + (int)param_1[0xb7];
        for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
          if (*plVar15 == *(longlong *)(lVar10 + 0x18)) goto LAB_1407c1e71;
        }
        fVar2 = *(float *)(lVar10 + 0x8ec);
        if ((*(int *)(*(longlong *)((longlong)pvVar21 + uVar20 * 8) + 0x38) < DAT_14685c420) &&
           (_Init_thread_header(&DAT_14685c420), DAT_14685c420 == -1)) {
          FName::FName(&DAT_14685c418,L"AutoGroundSpawnPointComponents",1);
          _Init_thread_footer(&DAT_14685c420);
        }
        if (*(longlong *)(lVar10 + 400) == 0) {
          lVar4 = param_1[0x2d];
          if (lVar4 == 0) {
            local_4a8 = DAT_1468b5d98;
            puVar12 = &local_4b0;
            local_4b0 = _DAT_1468b5d90;
          }
          else {
            local_4f8 = *(undefined4 *)(lVar4 + 0x220);
            local_4f4 = *(undefined4 *)(lVar4 + 0x224);
            puVar12 = (undefined8 *)&local_4f8;
            local_4f0 = *(undefined4 *)(lVar4 + 0x228);
          }
          fVar24 = *(float *)(puVar12 + 1);
          local_49c = fVar24;
        }
        else {
          fVar24 = *(float *)(*(longlong *)(lVar10 + 400) + 0x228);
        }
        uVar3 = *(undefined4 *)(lVar10 + 0x220);
        uVar6 = *(undefined4 *)(lVar10 + 0x224);
        local_4c0 = *(undefined4 *)(lVar10 + 0x228);
        local_4d0 = fVar24 + 200.0;
        local_4e0 = fVar24 - fVar2;
        local_4e8 = uVar3;
        local_4e4 = uVar6;
        local_4d8 = uVar3;
        local_4d4 = uVar6;
        local_4c8 = uVar3;
        local_4c4 = uVar6;
        _guard_xfg_dispatch_icall_nop(local_458,0,0x90);
        local_44c = 0x3f800000;
        local_538 = 0;
        FUN_1422ffb20(local_118,DAT_14685c418,local_518,0);
        FCollisionQueryParams::AddIgnoredActor(local_118,param_1);
        FUN_142301590(local_118,lVar10);
        local_528 = &DAT_146aefe68;
        local_530 = local_118;
        local_538 = local_538 & 0xffffffff00000000;
        cVar8 = UWorld::LineTraceSingleByChannel(local_4b8,local_458,&local_4d8,&local_4e8);
        if (cVar8 == '\0') {
          puVar11 = local_338;
          if (local_238 != (undefined1 *)0x0) {
            puVar11 = local_238;
          }
          *(undefined4 *)(puVar11 + uVar23) = uVar3;
          *(undefined4 *)((longlong)(puVar11 + uVar23) + 4) = uVar6;
          *(float *)(puVar11 + uVar23 + 8) = fVar24;
          puVar11 = local_338;
          if (local_238 != (undefined1 *)0x0) {
            puVar11 = local_238;
          }
          puVar11[uVar23 + 0xc] = 0;
          local_480 = fVar24;
        }
        else {
          if (((local_458[0] & 2) != 0) || (local_448 <= 0.0)) {
            bVar7 = true;
          }
          else {
            bVar7 = false;
          }
          puVar12 = (undefined8 *)&local_4c8;
          if (!bVar7) {
            puVar12 = local_444;
          }
          puVar11 = local_338;
          if (local_238 != (undefined1 *)0x0) {
            puVar11 = local_238;
          }
          uVar3 = *(undefined4 *)(puVar12 + 1);
          *(undefined8 *)(puVar11 + uVar23) = *puVar12;
          *(undefined4 *)(puVar11 + uVar23 + 8) = uVar3;
          puVar11 = local_338;
          if (local_238 != (undefined1 *)0x0) {
            puVar11 = local_238;
          }
          puVar11[uVar23 + 0xc] = 1;
        }
        puVar11 = local_238;
        puVar13 = local_338;
        if (local_238 != (undefined1 *)0x0) {
          puVar13 = local_238;
        }
        puVar13[uVar23 + 0xd] = 1;
        fVar2 = *(float *)(lVar10 + 0x210);
        local_498 = *(ulonglong *)(lVar10 + 0x210);
        fStack_490 = *(float *)(lVar10 + 0x218);
        fStack_48c = *(float *)(lVar10 + 0x21c);
        auVar5._4_4_ = -(uint)(*(float *)(lVar10 + 0x254) != *(float *)(lVar10 + 0x214));
        auVar5._0_4_ = -(uint)(*(float *)(lVar10 + 0x250) != fVar2);
        auVar5._8_4_ = -(uint)(*(float *)(lVar10 + 600) != fStack_490);
        auVar5._12_4_ = -(uint)(*(float *)(lVar10 + 0x25c) != fStack_48c);
        iVar9 = movmskps((int)puVar11,auVar5);
        if (iVar9 != 0) {
          *(float *)(lVar10 + 0x250) = fVar2;
          *(float *)(lVar10 + 0x254) = *(float *)(lVar10 + 0x214);
          *(float *)(lVar10 + 600) = fStack_490;
          *(float *)(lVar10 + 0x25c) = fStack_48c;
          puVar12 = (undefined8 *)FQuat::Rotator(&local_498,local_468);
          *(undefined8 *)(lVar10 + 0x260) = *puVar12;
          *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(puVar12 + 1);
        }
        local_498 = *(ulonglong *)(lVar10 + 0x260);
        fStack_490 = *(float *)(lVar10 + 0x268);
        local_508 = local_498 & 0xffffffff00000000;
        local_470 = 0;
        local_500 = 0;
        local_538 = local_538 & 0xffffffffffffff00;
        FUN_142399b90(lVar10,&local_508,0,0);
        if (local_b0 != 0) {
          FMemory::Free();
        }
        if (local_d0 != 0) {
          FMemory::Free();
        }
        uVar20 = (ulonglong)_tls_index;
        pvVar21 = ThreadLocalStoragePointer;
        uVar17 = (uint)local_340;
      }
LAB_1407c1e71:
      uVar19 = (int)uVar16 + 1;
      uVar16 = (ulonglong)uVar19;
      uVar22 = uVar22 + 8;
      uVar23 = uVar23 + 0x10;
    } while ((int)uVar19 < (int)uVar17);
  }
  puVar13 = local_128;
  uVar16 = 0;
  puVar11 = local_338;
  if (local_238 != (undefined1 *)0x0) {
    puVar11 = local_238;
  }
  puVar14 = puVar11 + (longlong)(int)local_230 * 0x10;
  for (; puVar11 != puVar14; puVar11 = puVar11 + 0x10) {
    if ((puVar11[0xd] != '\0') && (puVar11[0xc] != '\0')) goto LAB_1407c1f7d;
  }
  lVar10 = (longlong)(int)local_120;
  local_230 = CONCAT44(local_230._4_4_,(int)local_120);
  if (((int)local_120 == 0) && (local_230._4_4_ == 0)) {
    local_230 = local_120 & 0xffffffff;
  }
  else {
    FUN_1407d8610(local_338,local_120 & 0xffffffff,local_230._4_4_);
    puVar11 = local_228;
    if (puVar13 != (undefined1 *)0x0) {
      puVar11 = puVar13;
    }
    puVar13 = local_338;
    if (local_238 != (undefined1 *)0x0) {
      puVar13 = local_238;
    }
    _guard_xfg_dispatch_icall_nop(puVar13,puVar11,lVar10 << 4);
    uVar17 = (uint)local_340;
  }
LAB_1407c1f7d:
  uVar22 = uVar16;
  uVar23 = uVar16;
  if (0 < (int)uVar17) {
    do {
      puVar11 = local_3c8;
      if (local_348 != (undefined1 *)0x0) {
        puVar11 = local_348;
      }
      puVar13 = local_338;
      if (local_238 != (undefined1 *)0x0) {
        puVar13 = local_238;
      }
      lVar10 = *(longlong *)(puVar11 + uVar23);
      if (puVar13[uVar16 + 0xd] != '\0') {
        plVar15 = (longlong *)param_1[0xb6];
        plVar1 = plVar15 + (int)param_1[0xb7];
        for (; plVar15 != plVar1; plVar15 = plVar15 + 1) {
          if (*plVar15 == *(longlong *)(lVar10 + 0x18)) goto LAB_1407c2058;
        }
        local_508 = *(ulonglong *)(puVar13 + uVar16);
        local_500 = *(undefined4 *)(puVar13 + uVar16 + 8);
        local_538 = local_538 & 0xffffffffffffff00;
        FUN_1423990b0(lVar10,&local_508,0,0);
        puVar11 = local_338;
        if (local_238 != (undefined1 *)0x0) {
          puVar11 = local_238;
        }
        *(bool *)(lVar10 + 0x8c8) = puVar11[uVar16 + 0xc] != '\0';
        uVar17 = (uint)local_340;
      }
LAB_1407c2058:
      uVar19 = (int)uVar22 + 1;
      uVar16 = uVar16 + 0x10;
      uVar22 = (ulonglong)uVar19;
      uVar23 = uVar23 + 8;
    } while ((int)uVar19 < (int)uVar17);
  }
  FUN_1407d6850(param_1);
  if (local_238 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_128 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  if (local_348 != (undefined1 *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407c2140 FUN_1407c2140 body=772 status=ok
// SIG undefined FUN_1407c2140(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c2140(longlong param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 auStack_168 [32];
  undefined **local_148;
  longlong lStack_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined ***local_110;
  longlong local_108 [24];
  longlong *local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_168;
  FUN_142c675e0();
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  uVar4 = FUN_142c6f640(param_1,1);
  uVar11 = 0;
  if (uVar4 != 0) {
    lVar5 = UTextureRenderTarget::StaticClass();
    if ((*(int *)(*(longlong *)(uVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) goto LAB_1407c21d1;
  }
  uVar4 = uVar11;
LAB_1407c21d1:
  uVar6 = FUN_142c86b70(param_1,&local_148);
  FUN_142cad2c0(uVar6,uVar4);
  lVar5 = FUN_142c728d0(param_1);
  if ((lVar5 == 0) || (cVar3 = UWorld::IsGameWorld(lVar5), cVar3 != '\0')) {
    local_148 = &PTR_LAB_1440e0148;
    local_110 = &local_148;
    lStack_140 = param_1;
    FUN_142c6db40(param_1,&local_148);
    lVar5 = *(longlong *)(param_1 + 0x10);
    plVar7 = (longlong *)FUN_142c6f130(param_1);
    if (plVar7 != (longlong *)0x0) {
      uVar6 = FUN_142e39920();
      lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
      if (lVar8 != 0) {
        pcVar10 = (char *)(lVar5 + 0x1b8);
        if (*(char *)(lVar5 + 0x1b9) == '\0') {
          pcVar10 = (char *)(lVar8 + 0x4b0);
        }
        cVar3 = *pcVar10;
        puVar9 = (undefined8 *)FManaTextureResource::GetSizeXY(param_1,&local_148);
        FUN_142cff920(lVar8,cVar3 != '\x05',*puVar9);
      }
      uVar6 = UScrollBox::GetPrivateStaticClass();
      lVar8 = (**(code **)(*plVar7 + 0x628))(plVar7,uVar6);
      if (lVar8 != 0) {
        FUN_142dafbc0(lVar8 + 0x3d0,&DAT_14685c1b0);
      }
      if (*(char *)(lVar5 + 0x1ba) != '\0') {
        local_48 = (longlong *)0x0;
        local_40 = 0;
        FUN_140725150(plVar7,local_108,0);
        plVar7 = local_108;
        if (local_48 != (longlong *)0x0) {
          plVar7 = local_48;
        }
        uVar4 = (longlong)(int)local_40 & 0x1fffffffffffffff;
        if (plVar7 + (int)local_40 < plVar7) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          do {
            plVar1 = (longlong *)*plVar7;
            if (plVar1 != (longlong *)0x0) {
              FUN_142db9760(param_1 + 0x440,plVar1);
              puVar9 = (undefined8 *)(**(code **)(*plVar1 + 0x4d0))(plVar1);
              local_148 = (undefined **)*puVar9;
              lStack_140 = puVar9[1];
              local_138 = *(undefined4 *)(puVar9 + 2);
              uStack_134 = *(undefined4 *)((longlong)puVar9 + 0x14);
              uStack_130 = *(undefined4 *)(puVar9 + 3);
              uStack_12c = *(undefined4 *)((longlong)puVar9 + 0x1c);
              FCollisionResponseContainer::SetResponse(&local_148,0,0);
              FCollisionResponseContainer::SetResponse(&local_148,1);
              FCollisionResponseContainer::SetResponse(&local_148,2);
              FCollisionResponseContainer::SetResponse(&local_148,5);
              FCollisionResponseContainer::SetResponse(&local_148,7);
              (**(code **)(*plVar1 + 0x840))(plVar1,&local_148);
            }
            plVar7 = plVar7 + 1;
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar4);
        }
        if (local_48 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1407c2450 FUN_1407c2450 body=123 status=ok
// SIG undefined FUN_1407c2450(void)

void FUN_1407c2450(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  longlong lVar3;
  
  uVar1 = DAT_14685c0c2;
  DAT_14685c0c2 = 1;
  lVar2 = *(longlong *)(param_1 + 0x250);
  lVar3 = (longlong)*(int *)(param_1 + 600) * 0x140 + lVar2;
  for (; lVar2 != lVar3; lVar2 = lVar2 + 0x140) {
    FUN_1407c4c60(lVar2);
  }
  FUN_1417502d0(param_1);
  DAT_14685c0c2 = uVar1;
  return;
}



// FUNCTION 1407c24d0 FUN_1407c24d0 body=124 status=ok
// SIG undefined FUN_1407c24d0(void)

void FUN_1407c24d0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  longlong lVar3;
  
  FUN_142385110();
  lVar1 = *(longlong *)(param_1 + 0x118);
  if (lVar1 != 0) {
    lVar3 = FUN_1407e7ae0();
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
      *(longlong *)(param_1 + 0x8d0) = lVar1;
      return;
    }
  }
  *(undefined8 *)(param_1 + 0x8d0) = 0;
  return;
}



// FUNCTION 1407c2550 FUN_1407c2550 body=530 status=ok
// SIG undefined FUN_1407c2550(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c2550(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  bool bVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 auStack_e8 [32];
  longlong local_c8 [16];
  longlong *local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  FUN_142385110();
  uVar7 = param_1[0x23];
  uVar8 = 0;
  if (uVar7 != 0) {
    lVar6 = FUN_1407e2730();
    if ((*(int *)(*(longlong *)(uVar7 + 0x10) + 0x90) < *(int *)(lVar6 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(uVar7 + 0x10) + 0x88) + (longlong)*(int *)(lVar6 + 0x90) * 8)
        != lVar6 + 0x88)) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (bVar4) goto LAB_1407c25c4;
  }
  uVar7 = uVar8;
LAB_1407c25c4:
  param_1[0x130] = uVar7;
  lVar6 = (**(code **)(*param_1 + 0x908))(param_1);
  param_1[0x127] = lVar6;
  FUN_1407ddd80(param_1);
  FUN_1407ddb90(param_1);
  if (param_1[0x11f] != 0) {
    plVar1 = param_1 + 0x124;
    *(undefined4 *)(param_1 + 0x125) = 0;
    if (0x7fffffff < *(uint *)((longlong)param_1 + 0x92c)) {
      TArray<void_*,FDefaultAllocator>::ResizeTo(plVar1,0);
    }
    FUN_1407c8230(param_1,local_c8);
    plVar9 = local_c8;
    if (local_48 != (longlong *)0x0) {
      plVar9 = local_48;
    }
    uVar7 = (longlong)local_40 & 0x1fffffffffffffff;
    if (plVar9 + local_40 < plVar9) {
      uVar7 = uVar8;
    }
    if (uVar7 != 0) {
      do {
        plVar3 = (longlong *)*plVar9;
        if ((plVar3 != (longlong *)0x0) &&
           (cVar5 = (**(code **)(*plVar3 + 800))(plVar3), cVar5 == '\0')) {
          iVar2 = (int)param_1[0x125];
          *(int *)(param_1 + 0x125) = iVar2 + 1;
          if (*(int *)((longlong)param_1 + 0x92c) < iVar2 + 1) {
            TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(plVar1,iVar2);
          }
          *(longlong **)(*plVar1 + (longlong)iVar2 * 8) = plVar3;
        }
        plVar9 = plVar9 + 1;
        uVar8 = uVar8 + 1;
      } while (uVar8 != uVar7);
    }
    if (local_48 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  if (((((char)param_1[0x111] == '\0') && (lVar6 = FUN_1407cb650(param_1), lVar6 != 0)) &&
      (*(char *)(lVar6 + 0xb) != '\0')) &&
     (((char)param_1[0x111] == '\0' &&
      (*(undefined1 *)(param_1 + 0x111) = 1, *(char *)((longlong)param_1 + 0x8c9) != '\0')))) {
    (**(code **)(*param_1 + 0x900))(param_1);
  }
  return;
}



// FUNCTION 1407c2770 FUN_1407c2770 body=78 status=ok
// SIG undefined FUN_1407c2770(void)

void FUN_1407c2770(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  FUN_142de5760();
  plVar1 = *(longlong **)(param_1 + 0x118);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_1407e27e0();
    lVar3 = (**(code **)(*plVar1 + 0x628))(plVar1,uVar2);
    if (lVar3 != 0) {
      FUN_1407c58e0(param_1,lVar3);
    }
  }
  return;
}



// FUNCTION 1407c27c0 FUN_1407c27c0 body=182 status=ok
// SIG undefined FUN_1407c27c0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c27c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined1 local_d0 [12];
  undefined4 local_c4;
  undefined4 local_bc;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  local_30 = 0xffffffff;
  local_78 = 0;
  local_70 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4e = 0;
  local_48 = 0;
  uStack_40 = 0;
  _guard_xfg_dispatch_icall_nop(local_d0,0,0xa8);
  local_bc = 0xffffffff;
  local_c4 = 0xffffffff;
  local_d8 = param_2;
  FUN_1407be530(local_d0,param_3);
  TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>(param_1,&local_d8);
  FUN_1407be070(local_d0);
  return;
}



// FUNCTION 1407c2880 FUN_1407c2880 body=324 status=ok
// SIG undefined FUN_1407c2880(void)

void FUN_1407c2880(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_130;
  byte local_12f;
  longlong local_b0 [2];
  undefined1 local_a0;
  undefined1 local_98;
  byte local_97;
  undefined4 local_18;
  
  lVar3 = *(longlong *)(param_1 + 0xd0);
  if (lVar3 == 0) {
    lVar3 = NewObject<UTTLSaveOptionObject>();
    *(longlong *)(param_1 + 0xd0) = lVar3;
  }
  FUN_1407c5610(lVar3);
  FUN_142de2d20(&local_130,0x3f800000,0);
  local_b0[0] = 0;
  local_b0[1] = 0;
  FUN_142de2c00(&local_98,1,2);
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  lVar3 = *(longlong *)(param_1 + 0xd0);
  local_12f = local_12f | 0x6e;
  local_97 = local_97 | 0x6e;
  local_a0 = *(undefined1 *)(param_1 + 200);
  local_18 = 1;
  iVar1 = *(int *)(lVar3 + 0x38);
  *(int *)(lVar3 + 0x38) = iVar1 + 1;
  if (*(int *)(lVar3 + 0x3c) < iVar1 + 1) {
    FUN_1407d8a60(lVar3 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x128 + *(longlong *)(lVar3 + 0x30));
  *puVar4 = uVar2;
  FUN_142de2b80(puVar4 + 1,&local_130);
  FString::FString(puVar4 + 0x11,local_b0);
  *(undefined1 *)(puVar4 + 0x13) = local_a0;
  FUN_142de2b80(puVar4 + 0x14,&local_98);
  *(undefined4 *)(puVar4 + 0x24) = local_18;
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407c29d0 FUN_1407c29d0 body=324 status=ok
// SIG undefined FUN_1407c29d0(void)

void FUN_1407c29d0(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_130;
  byte local_12f;
  longlong local_b0 [2];
  undefined1 local_a0;
  undefined1 local_98;
  byte local_97;
  undefined4 local_18;
  
  lVar3 = *(longlong *)(param_1 + 0x260);
  if (lVar3 == 0) {
    lVar3 = NewObject<UTTLSaveOptionObject>();
    *(longlong *)(param_1 + 0x260) = lVar3;
  }
  FUN_1407c5610(lVar3);
  FUN_142de2d20(&local_130,0x3f800000,0);
  local_b0[0] = 0;
  local_b0[1] = 0;
  FUN_142de2c00(&local_98,1,2);
  uVar2 = *(undefined8 *)(param_1 + 0x250);
  lVar3 = *(longlong *)(param_1 + 0x260);
  local_12f = local_12f | 0x6e;
  local_97 = local_97 | 0x6e;
  local_a0 = *(undefined1 *)(param_1 + 600);
  local_18 = 1;
  iVar1 = *(int *)(lVar3 + 0x38);
  *(int *)(lVar3 + 0x38) = iVar1 + 1;
  if (*(int *)(lVar3 + 0x3c) < iVar1 + 1) {
    FUN_1407d8a60(lVar3 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x128 + *(longlong *)(lVar3 + 0x30));
  *puVar4 = uVar2;
  FUN_142de2b80(puVar4 + 1,&local_130);
  FString::FString(puVar4 + 0x11,local_b0);
  *(undefined1 *)(puVar4 + 0x13) = local_a0;
  FUN_142de2b80(puVar4 + 0x14,&local_98);
  *(undefined4 *)(puVar4 + 0x24) = local_18;
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407c2b20 FUN_1407c2b20 body=309 status=ok
// SIG undefined FUN_1407c2b20(void)

void FUN_1407c2b20(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined1 local_130;
  byte local_12f;
  longlong local_b0 [2];
  undefined1 local_a0;
  undefined1 local_98;
  byte local_97;
  undefined4 local_18;
  
  lVar3 = *(longlong *)(param_1 + 0x48);
  if (lVar3 == 0) {
    lVar3 = NewObject<UTTLSaveOptionObject>();
    *(longlong *)(param_1 + 0x48) = lVar3;
  }
  FUN_1407c5610(lVar3);
  FUN_142de2d20(&local_130,0x3f800000,0);
  local_b0[0] = 0;
  local_b0[1] = 0;
  FUN_142de2c00(&local_98,1,2);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_12f = local_12f | 0x6e;
  local_97 = local_97 | 0x6e;
  local_a0 = *(undefined1 *)(param_1 + 0x40);
  local_18 = 1;
  iVar1 = *(int *)(lVar3 + 0x38);
  *(int *)(lVar3 + 0x38) = iVar1 + 1;
  if (*(int *)(lVar3 + 0x3c) < iVar1 + 1) {
    FUN_1407d8a60(lVar3 + 0x30,iVar1);
  }
  puVar4 = (undefined8 *)((longlong)iVar1 * 0x128 + *(longlong *)(lVar3 + 0x30));
  *puVar4 = uVar2;
  FUN_142de2b80(puVar4 + 1,&local_130);
  FString::FString(puVar4 + 0x11,local_b0);
  *(undefined1 *)(puVar4 + 0x13) = local_a0;
  FUN_142de2b80(puVar4 + 0x14,&local_98);
  *(undefined4 *)(puVar4 + 0x24) = local_18;
  if (local_b0[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1407c2c60 FUN_1407c2c60 body=973 status=ok
// SIG undefined FUN_1407c2c60(void)

void FUN_1407c2c60(longlong param_1)

{
  uint *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  bool bVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  void *_Src;
  int local_c8;
  uint uStack_c4;
  uint uStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  void *local_a8;
  int local_a0;
  int local_9c;
  longlong *local_98;
  int iStack_90;
  uint uStack_8c;
  uint *local_88;
  uint uStack_80;
  uint uStack_7c;
  undefined8 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  uint *puStack_60;
  uint uStack_58;
  uint uStack_54;
  undefined8 uStack_50;
  
  plVar2 = (longlong *)(param_1 + 0x970);
  *(undefined4 *)(param_1 + 0x978) = 0;
  if (0x7fffffff < *(uint *)(param_1 + 0x97c)) {
    TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2,0);
  }
  if (*(char *)(param_1 + 0x968) == '\0') {
    if (*(longlong *)(param_1 + 0x118) != 0) {
      FUN_1406d4410(*(longlong *)(param_1 + 0x118),plVar2,0);
      return;
    }
  }
  else {
    plVar10 = *(longlong **)(param_1 + 0x940);
    plVar4 = plVar10 + *(int *)(param_1 + 0x948);
    for (; plVar10 != plVar4; plVar10 = plVar10 + 1) {
      lVar7 = *plVar10;
      if (lVar7 != 0) {
        uStack_c4 = 1;
        plVar3 = (longlong *)(lVar7 + 0x2b0);
        local_c8 = 0;
        uVar5 = *(uint *)(lVar7 + 0x2d8);
        puVar1 = (uint *)(lVar7 + 0x2c0);
        _Src = (void *)0x0;
        iVar9 = 0;
        local_a8 = (void *)0x0;
        iVar14 = 0;
        local_9c = 0;
        uStack_b4 = 0;
        iStack_b0 = 0;
        if (uVar5 != 0) {
          puVar16 = *(uint **)(lVar7 + 0x2d0);
          if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar6 = *puVar16;
          iStack_b0 = 0;
          local_c8 = 0;
          while (uVar6 == 0) {
            lVar13 = (longlong)local_c8;
            iStack_b0 = iStack_b0 + 0x20;
            iVar11 = local_c8 + 1;
            bVar8 = (int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= local_c8;
            local_c8 = iVar11;
            if (bVar8) goto LAB_1407c2df0;
            uVar6 = puVar16[lVar13 + 1];
          }
          uStack_c4 = uVar6 - 1 & uVar6 ^ uVar6;
          iVar11 = 0x1f;
          if (uStack_c4 != 0) {
            for (; uStack_c4 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uStack_c4 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_b4 = (iStack_b0 - iVar11) + 0x1f;
          if ((int)uVar5 < (int)uStack_b4) {
LAB_1407c2df0:
            uStack_b4 = uVar5;
          }
        }
        uVar6 = *(uint *)(lVar7 + 0x2d8);
        uStack_80 = 0xffffffff;
        uStack_7c = uStack_b4;
        local_78 = CONCAT44(uStack_ac,iStack_b0);
        uStack_68 = CONCAT44(uStack_c4,local_c8);
        uVar15 = uVar6 & 0xffffffe0;
        iStack_90 = local_c8;
        uStack_8c = uStack_c4;
        local_88 = puVar1;
        local_70 = plVar3;
        puStack_60 = puVar1;
        uStack_50 = local_78;
        local_98 = plVar3;
        uStack_58 = uStack_80;
        uStack_54 = uStack_7c;
        uStack_b4 = uVar6;
        if (uVar6 != uVar5) {
          puVar16 = *(uint **)(lVar7 + 0x2d0);
          if (*(uint **)(lVar7 + 0x2d0) == (uint *)0x0) {
            puVar16 = puVar1;
          }
          uVar12 = puVar16[(int)uVar6 >> 5] & -1 << ((byte)uVar6 & 0x1f);
          iVar11 = (int)uVar6 >> 5;
          while (uVar12 == 0) {
            uVar15 = uVar15 + 0x20;
            if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 <= iVar11)
            goto LAB_1407c2eca;
            uVar12 = puVar16[(longlong)iVar11 + 1];
            iVar11 = iVar11 + 1;
          }
          uVar12 = uVar12 - 1 & uVar12 ^ uVar12;
          iVar11 = 0x1f;
          if (uVar12 != 0) {
            for (; uVar12 >> iVar11 == 0; iVar11 = iVar11 + -1) {
            }
          }
          if (uVar12 == 0) {
            iVar11 = 0x20;
          }
          else {
            iVar11 = 0x1f - iVar11;
          }
          uStack_b4 = (uVar15 - iVar11) + 0x1f;
          if ((int)uVar5 < (int)uStack_b4) {
LAB_1407c2eca:
            uStack_b4 = uVar5;
          }
        }
        while( true ) {
          if ((uStack_7c == uStack_b4) && (local_88 == puVar1)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((bVar8) && (local_98 == plVar3)) {
            bVar8 = false;
          }
          else {
            bVar8 = true;
          }
          if (!bVar8) break;
          lVar7 = *(longlong *)(*local_98 + (longlong)(int)uStack_7c * 0x10);
          if (lVar7 != 0) {
            lVar13 = AGVersusPlayerState::GetPrivateStaticClass();
            if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x90) < *(int *)(lVar13 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar13 + 0x90) * 8) != lVar13 + 0x88)) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (bVar8) {
              local_a0 = iVar14 + 1;
              if (iVar9 < local_a0) {
                TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(&local_a8,iVar14);
                _Src = local_a8;
                iVar9 = local_9c;
              }
              *(longlong *)((longlong)_Src + (longlong)iVar14 * 8) = lVar7;
              iVar14 = local_a0;
            }
          }
          uStack_80 = uStack_80 & ~uStack_8c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_90);
        }
        if (iVar14 != 0) {
          iVar9 = *(int *)(param_1 + 0x978);
          if (*(int *)(param_1 + 0x97c) < iVar9 + iVar14) {
            TArray<void_*,FDefaultAllocator>::ResizeTo(plVar2);
            iVar9 = *(int *)(param_1 + 0x978);
          }
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*plVar2 + (longlong)iVar9 * 8),_Src,(longlong)iVar14 << 3);
          *(int *)(param_1 + 0x978) = *(int *)(param_1 + 0x978) + iVar14;
        }
        if (_Src != (void *)0x0) {
          FMemory::Free(_Src);
        }
      }
    }
  }
  return;
}



// FUNCTION 1407c3030 FUN_1407c3030 body=4 status=ok
// SIG undefined FUN_1407c3030(void)

undefined1 FUN_1407c3030(undefined1 *param_1)

{
  return *param_1;
}



// FUNCTION 1407c3050 FUN_1407c3050 body=186 status=ok
// SIG undefined FUN_1407c3050(void)

bool FUN_1407c3050(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x919) == '\0') {
    return true;
  }
  plVar4 = *(longlong **)(param_1 + 0x8f8);
  bVar5 = (*(byte *)(param_1 + 0x918) & 0xfd) != 0;
  plVar1 = plVar4 + *(int *)(param_1 + 0x900);
  if (plVar4 != plVar1) {
    plVar2 = (longlong *)*param_2;
    do {
      if (plVar2 != plVar2 + (int)param_2[1]) {
        plVar3 = plVar2;
        do {
          if (*plVar3 == *plVar4) {
            if (bVar5) goto LAB_1407c30d4;
            bVar5 = true;
            goto LAB_1407c30f2;
          }
          plVar3 = plVar3 + 1;
        } while (plVar3 != plVar2 + (int)param_2[1]);
      }
      if (bVar5) {
        bVar5 = false;
        break;
      }
LAB_1407c30d4:
      plVar4 = plVar4 + 1;
    } while (plVar4 != plVar1);
  }
LAB_1407c30f2:
  if ((byte)(*(byte *)(param_1 + 0x918) - 2) < 2) {
    bVar5 = bVar5 == false;
  }
  return bVar5;
}



// FUNCTION 1407c3110 FUN_1407c3110 body=26 status=ok
// SIG undefined FUN_1407c3110(void)

ulonglong FUN_1407c3110(longlong param_1)

{
  uint uVar1;
  ulonglong in_RAX;
  
  if (*(int *)(param_1 + 0x44) == -1) {
    uVar1 = *(uint *)(param_1 + 0x1cc);
    in_RAX = (ulonglong)uVar1;
    if (*(int *)(param_1 + 0x240) < (int)uVar1) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 1407c3130 FUN_1407c3130 body=519 status=ok
// SIG undefined FUN_1407c3130(void)

void FUN_1407c3130(longlong param_1,int param_2)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  int iVar12;
  bool bVar13;
  undefined8 local_res20;
  
  lVar9 = *(longlong *)(param_1 + 0x188);
  iVar5 = *(int *)(param_1 + 400);
  lVar8 = (longlong)iVar5 * 0x70 + lVar9;
  if (lVar9 != lVar8) {
    plVar11 = (longlong *)(lVar9 + 0x40);
    do {
      if ((int)plVar11[5] == param_2) {
        if (((int)plVar11[2] != 0) && ((longlong *)plVar11[1] != (longlong *)0x0)) {
          cVar1 = (**(code **)(*(longlong *)plVar11[1] + 0x18))();
          if (cVar1 != '\0') {
            if ((int)plVar11[2] == 0) {
              plVar3 = (longlong *)0x0;
            }
            else {
              plVar3 = (longlong *)plVar11[1];
            }
            (**(code **)(*plVar3 + 0x38))(plVar3,0);
          }
        }
        if (*plVar11 != 0) {
          lVar2 = FWeakObjectPtr::Get(plVar11 + -1);
          if (lVar2 != 0) {
            lVar2 = UObject::FindFunction(lVar2);
            if (lVar2 != 0) {
              local_res20 = 0;
              plVar3 = (longlong *)FWeakObjectPtr::Get(plVar11 + -1);
              uVar4 = FUN_14178ac60(plVar3,*plVar11);
              (**(code **)(*plVar3 + 0x208))(plVar3,uVar4,&local_res20);
            }
          }
        }
      }
      lVar9 = lVar9 + 0x70;
      plVar11 = plVar11 + 0xe;
    } while (lVar9 != lVar8);
    iVar5 = *(int *)(param_1 + 400);
  }
  if (iVar5 != 0) {
    iVar12 = 0;
    bVar13 = *(int *)(*(longlong *)(param_1 + 0x188) + 0x68) != param_2;
    lVar8 = (longlong)iVar5;
    lVar9 = 0;
    iVar5 = 0;
    do {
      lVar9 = lVar9 + 1;
      iVar7 = iVar5 + 1;
      if (lVar9 < lVar8) {
        piVar6 = (int *)(*(longlong *)(param_1 + 0x188) + 0x68 + lVar9 * 0x70);
        do {
          if (bVar13 != (*piVar6 != param_2)) break;
          iVar7 = iVar7 + 1;
          lVar9 = lVar9 + 1;
          piVar6 = piVar6 + 0x1c;
        } while (lVar9 < lVar8);
      }
      iVar10 = iVar7 - iVar5;
      if (bVar13 == false) {
        if (iVar10 != 0) {
          lVar2 = (longlong)iVar5 * 0x70 + 0x48 + *(longlong *)(param_1 + 0x188);
          do {
            TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar2);
            lVar2 = lVar2 + 0x70;
            iVar10 = iVar10 + -1;
          } while (iVar10 != 0);
        }
      }
      else {
        if (iVar12 != iVar5) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)((longlong)iVar12 * 0x70 + *(longlong *)(param_1 + 0x188)),
                     (void *)((longlong)iVar5 * 0x70 + *(longlong *)(param_1 + 0x188)),
                     (longlong)iVar10 * 0x70);
        }
        iVar12 = iVar12 + iVar10;
      }
      bVar13 = (bool)(bVar13 ^ 1);
      iVar5 = iVar7;
    } while (lVar9 < lVar8);
    *(int *)(param_1 + 400) = iVar12;
  }
  return;
}



// FUNCTION 1407c3340 FUN_1407c3340 body=88 status=ok
// SIG undefined FUN_1407c3340(void)

void FUN_1407c3340(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = UEngine::GetWorldFromContextObject(DAT_146b17150,param_1,1);
  if (lVar2 != 0) {
    iVar1 = FUN_1428cf800(lVar2);
    if (iVar1 != 3) {
      lVar2 = FUN_1407c74b0(lVar2);
      if (lVar2 != 0) {
        FUN_1407c3130(lVar2,param_2);
      }
    }
  }
  return;
}



// FUNCTION 1407c33a0 FUN_1407c33a0 body=77 status=ok
// SIG undefined FUN_1407c33a0(void)

void FUN_1407c33a0(longlong *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((param_1[8] == 0) || (*(char *)(param_1[8] + 0x988) == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (*(char *)((longlong)param_1 + 0x5c) != '\0') {
    iVar2 = (int)param_1[0xc];
    if (bVar1) {
      iVar2 = iVar2 + (int)param_1[0xd];
    }
    if ((iVar2 < 1) && (*(float *)(param_1 + 0xb) == 0.0)) {
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(*param_1 + 0x230);
      FUN_1407dda30(param_1);
      return;
    }
  }
  return;
}



// FUNCTION 1407c33f0 FUN_1407c33f0 body=115 status=ok
// SIG undefined FUN_1407c33f0(void)

void FUN_1407c33f0(longlong param_1)

{
  longlong local_res8 [4];
  
  if ((((*(char *)(param_1 + 8) != '\0') &&
       (local_res8[0] = *(longlong *)(param_1 + 0x40), local_res8[0] != 0)) &&
      (*(char *)(local_res8[0] + 0x8ca) != '\0')) &&
     ((*(int *)(param_1 + 0x10) != 2 &&
      (*(undefined1 *)(param_1 + 8) = 0, *(int *)(param_1 + 0x10) == 0)))) {
    *(undefined4 *)(param_1 + 0x10) = 1;
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (local_res8[0] + 0x818,local_res8);
    local_res8[0] = *(longlong *)(param_1 + 0x38);
    if (local_res8[0] != 0) {
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (local_res8[0] + 0x568,local_res8);
    }
  }
  return;
}



// FUNCTION 1407c3470 FUN_1407c3470 body=280 status=ok
// SIG undefined FUN_1407c3470(void)

void FUN_1407c3470(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar9;
  
  iVar1 = *(int *)(param_1 + 0x928);
  if (iVar1 != 0) {
    uVar5 = 0;
    uVar9 = uVar5;
    uVar11 = uVar5;
    if (((longlong *)**(longlong **)(param_1 + 0x920) == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x920) + 800))(), cVar3 != '\0')
       ) {
      bVar6 = 0;
    }
    else {
      bVar6 = 1;
    }
    do {
      uVar7 = (uint)uVar9;
      uVar8 = uVar7;
      do {
        uVar5 = uVar5 + 1;
        uVar8 = uVar8 + 1;
        if ((longlong)iVar1 <= (longlong)uVar5) break;
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x920) + uVar5 * 8);
        if ((plVar2 == (longlong *)0x0) || (cVar3 = (**(code **)(*plVar2 + 800))(), cVar3 != '\0'))
        {
          bVar4 = 0;
        }
        else {
          bVar4 = 1;
        }
      } while (bVar6 == bVar4);
      if (bVar6 != 0) {
        uVar10 = (uint)uVar11;
        if (uVar10 != uVar7) {
          _guard_xfg_dispatch_icall_nop
                    ((void *)(*(longlong *)(param_1 + 0x920) + (longlong)(int)uVar10 * 8),
                     (void *)(*(longlong *)(param_1 + 0x920) + (longlong)(int)uVar7 * 8),
                     (longlong)(int)(uVar8 - uVar7) << 3);
        }
        uVar11 = (ulonglong)(uVar10 + (uVar8 - uVar7));
      }
      bVar6 = bVar6 ^ 1;
      uVar9 = (ulonglong)uVar8;
    } while ((longlong)uVar5 < (longlong)iVar1);
    *(int *)(param_1 + 0x928) = (int)uVar11;
  }
  return;
}



// FUNCTION 1407c3590 FUN_1407c3590 body=288 status=ok
// SIG undefined FUN_1407c3590(void)

void FUN_1407c3590(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  char cVar8;
  bool bVar9;
  undefined8 local_28;
  undefined8 local_20;
  
  piVar2 = (int *)*param_2;
  iVar1 = *piVar2;
  if (iVar1 != -1) {
    if (iVar1 < 0) {
      return;
    }
    if (*(int *)(param_1 + 0x38) <= iVar1) {
      return;
    }
    lVar3 = *(longlong *)(param_1 + 0x30);
    lVar7 = (longlong)iVar1 * 0x38;
    lVar4 = *(longlong *)(piVar2 + 4);
    cVar8 = *(char *)(lVar3 + 8 + lVar7);
    bVar9 = cVar8 == '\0';
    bVar5 = bVar9;
    if (*(char *)(lVar3 + 9 + lVar7) != '\0') {
      bVar5 = *(float *)(lVar3 + 0xc + lVar7) <=
              *(float *)(*(longlong *)param_2[1] + 0x230) - (float)piVar2[2];
    }
    if (*(char *)(lVar3 + 0x10 + lVar7) != '\0') {
      local_28 = *(undefined8 *)(lVar4 + lVar7);
      local_20 = param_2[1];
      iVar6 = (**(code **)(**(longlong **)(lVar3 + lVar7) + 0x2a0))
                        (*(longlong **)(lVar3 + lVar7),&local_28);
      iVar1 = *(int *)(lVar4 + 0x10 + lVar7);
      cVar8 = *(char *)(lVar3 + 8 + lVar7);
      if (iVar1 <= iVar6) {
        iVar1 = iVar6;
      }
      bVar9 = *(float *)(lVar3 + 0x14 + lVar7) <= (float)*(int *)(lVar4 + 8 + lVar7) / (float)iVar1;
    }
    if (cVar8 == '\0') {
      if (!bVar5) {
        return;
      }
    }
    else if (bVar5) goto LAB_1407c368b;
    if (!bVar9) {
      return;
    }
  }
LAB_1407c368b:
  piVar2 = (int *)*param_2;
  *piVar2 = *piVar2 + 1;
  if (*piVar2 < *(int *)(param_1 + 0x38)) {
    piVar2[2] = *(int *)(*(longlong *)param_2[1] + 0x230);
  }
  return;
}



// FUNCTION 1407c36b0 FUN_1407c36b0 body=387 status=ok
// SIG undefined FUN_1407c36b0(void)

void FUN_1407c36b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  longlong local_18;
  longlong local_10;
  
  plVar1 = *(longlong **)(param_1 + 0x48);
  if (plVar1 != (longlong *)0x0) {
    local_18 = *(longlong *)(param_1 + 0x50);
    local_10 = param_1;
    iVar4 = (**(code **)(*plVar1 + 0x2c8))(plVar1,&local_18);
    iVar5 = iVar4 + -1;
    if (*(int *)(param_1 + 0xb0) < iVar5) {
      lVar2 = *(longlong *)(param_1 + 0x40);
      if (lVar2 != 0) {
        local_10 = CONCAT44(local_10._4_4_,iVar5);
        local_18 = lVar2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar2 + 0x808,&local_18);
      }
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 != 0) {
        local_10 = CONCAT44(local_10._4_4_,iVar5);
        local_18 = lVar2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar2 + 0x4f0,&local_18);
      }
      *(int *)(param_1 + 0xb0) = iVar5;
      if ((*(longlong *)(param_1 + 0x40) != 0) &&
         (*(char *)(*(longlong *)(param_1 + 0x40) + 0x8ca) == '\x02')) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        FUN_1407c33f0(param_1);
      }
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (((lVar2 != 0) && (*(char *)(lVar2 + 0x888) != '\0')) && (*(int *)(param_1 + 0xa8) < iVar4))
    {
      local_10 = CONCAT44(local_10._4_4_,iVar4);
      local_18 = lVar2;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar2 + 0x7e8,&local_18);
      lVar2 = *(longlong *)(param_1 + 0x38);
      if (lVar2 != 0) {
        local_10 = CONCAT44(local_10._4_4_,iVar4);
        local_18 = lVar2;
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (lVar2 + 0x4d0,&local_18);
      }
      *(int *)(param_1 + 0xa8) = iVar4;
    }
    cVar3 = FUN_1407cd950(param_1);
    if ((cVar3 != '\0') && (*(int *)(param_1 + 0xac) < iVar4)) {
      local_18 = *(longlong *)(param_1 + 0x40);
      if (local_18 != 0) {
        local_10 = CONCAT44(local_10._4_4_,iVar4);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (local_18 + 0x7f8,&local_18);
      }
      local_18 = *(longlong *)(param_1 + 0x38);
      if (local_18 != 0) {
        local_10 = CONCAT44(local_10._4_4_,iVar4);
        TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                  (local_18 + 0x4e0,&local_18);
      }
      *(int *)(param_1 + 0xac) = iVar4;
    }
  }
  return;
}



// FUNCTION 1407c3840 FUN_1407c3840 body=102 status=ok
// SIG undefined FUN_1407c3840(void)

void FUN_1407c3840(byte *param_1,byte *param_2)

{
  byte bVar1;
  
  if (param_1[1] == 0) {
    bVar1 = *param_2;
    if (*param_2 <= *param_1) {
      bVar1 = *param_1;
    }
    *param_1 = bVar1;
  }
  if (param_1[3] == 0) {
    bVar1 = param_2[2];
    if (param_2[2] <= param_1[2]) {
      bVar1 = param_1[2];
    }
    param_1[2] = bVar1;
  }
  if (param_1[5] == 0) {
    bVar1 = param_2[4];
    if (param_2[4] <= param_1[4]) {
      bVar1 = param_1[4];
    }
    param_1[4] = bVar1;
  }
  return;
}



// FUNCTION 1407c38b0 FUN_1407c38b0 body=38 status=ok
// SIG undefined FUN_1407c38b0(void)

void FUN_1407c38b0(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x588) != 0) {
    lVar1 = FUN_1407cb650();
    if (lVar1 != 0) {
      *(undefined4 *)(lVar1 + 0x10) = 2;
    }
  }
  return;
}



// FUNCTION 1407c38e0 FUN_1407c38e0 body=26 status=ok
// SIG undefined FUN_1407c38e0(void)

void FUN_1407c38e0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cb650();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  return;
}



// FUNCTION 1407c3900 FUN_1407c3900 body=127 status=ok
// SIG undefined FUN_1407c3900(void)

float * FUN_1407c3900(longlong param_1,float *param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  undefined8 local_28;
  float local_20;
  float local_18;
  float local_14;
  float local_10;
  
  local_20 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0);
  local_28 = 0;
  FRotator::RotateVector(param_3 + 0x10,&local_18,&local_28);
  fVar1 = *(float *)(param_3 + 8);
  *param_2 = local_18 + *(float *)(param_3 + 4);
  fVar2 = *(float *)(param_3 + 0xc);
  param_2[1] = local_14 + fVar1;
  param_2[2] = local_10 + fVar2;
  return param_2;
}



// FUNCTION 1407c3980 ConditionalRehash body=161 status=ok
// SIG undefined ConditionalRehash(void)

undefined8
TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::ConditionalRehash
          (longlong param_1,uint param_2,char param_3)

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
      Rehash(param_1);
      return 1;
    }
  }
  return 0;
}



// FUNCTION 1407c3a30 FUN_1407c3a30 body=137 status=ok
// SIG undefined FUN_1407c3a30(void)

void FUN_1407c3a30(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong local_res8;
  
  uVar2 = 0;
  plVar1 = *(longlong **)(param_1 + 0x940);
  uVar3 = (longlong)*(int *)(param_1 + 0x948) & 0x1fffffffffffffff;
  if (plVar1 + *(int *)(param_1 + 0x948) < plVar1) {
    uVar3 = uVar2;
  }
  if (uVar3 != 0) {
    do {
      if ((*plVar1 != 0) && (param_1 != 0)) {
        local_res8 = param_1;
        TArray<UGeometryCacheComponent_*,FDefaultAllocator>::
        AddUniqueImpl<UGeometryCacheComponent_*_const_&>(*plVar1 + 0x490,&local_res8);
      }
      plVar1 = plVar1 + 1;
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
  return;
}



// FUNCTION 1407c3ac0 FUN_1407c3ac0 body=54 status=ok
// SIG undefined FUN_1407c3ac0(void)

void FUN_1407c3ac0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x588) != 0) {
    FUN_1407ddb90();
  }
  if (*(longlong *)(param_1 + 0x590) != 0) {
    FUN_1407de4d0();
    return;
  }
  return;
}



// FUNCTION 1407c3b00 FUN_1407c3b00 body=1073 status=ok
// SIG undefined FUN_1407c3b00(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c3b00(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  undefined1 uVar7;
  longlong lVar8;
  ulonglong *puVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  ulonglong uVar15;
  int iVar17;
  longlong *plVar18;
  longlong *plVar19;
  ulonglong uVar20;
  undefined1 auStack_1c8 [32];
  char local_1a8;
  int local_1a4;
  longlong local_1a0;
  longlong local_198;
  longlong *local_190;
  longlong local_188;
  undefined1 local_180 [312];
  ulonglong local_48;
  ulonglong uVar16;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1c8;
  local_1a0 = param_2;
  cVar6 = UAbilityTask::IsWaitingOnRemotePlayerdata(*(undefined8 *)(param_2 + 0x118));
  iVar17 = *(int *)(param_2 + 0x930);
  cVar6 = (cVar6 == '\0') + '\x02';
  if ((iVar17 < 0) || (*(int *)(param_1 + 600) <= iVar17)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  local_1a8 = cVar6;
  local_1a4 = iVar17;
  if (bVar3) {
    *(longlong *)((longlong)iVar17 * 0x140 + 0x40 + *(longlong *)(param_1 + 0x250)) = param_2;
    lVar12 = *(longlong *)(param_2 + 0x900);
    if (lVar12 == 0) {
      lVar12 = *(longlong *)(param_2 + 0x8f8);
    }
    *(longlong *)((longlong)iVar17 * 0x140 + 0x48 + *(longlong *)(param_1 + 0x250)) = lVar12;
    goto LAB_1407c3ee5;
  }
  lVar12 = *(longlong *)(param_2 + 0x118);
  uVar16 = 0;
  if (lVar12 == 0) {
    local_198 = 0;
    uVar20 = uVar16;
  }
  else {
    uVar20 = *(ulonglong *)(lVar12 + 0x18);
  }
  lVar8 = UObjectBaseUtility::GetOutermost(param_2);
  iVar2 = *(int *)(param_1 + 600);
  lVar8 = *(longlong *)(lVar8 + 0x18);
  if (cVar6 == '\x02') {
    iVar4 = iVar17;
    iVar5 = local_1a4;
    if (0 < iVar2) {
      plVar18 = (longlong *)(*(longlong *)(param_1 + 0x250) + 0x18);
      puVar9 = (ulonglong *)(*(longlong *)(param_1 + 0x250) + 0x20);
      uVar15 = uVar16;
      do {
        iVar13 = (int)uVar15;
        if ((*puVar9 == uVar20) && (iVar4 = iVar13, iVar5 = iVar13, *plVar18 == lVar8)) break;
        uVar15 = (ulonglong)(iVar13 + 1U);
        puVar9 = puVar9 + 0x28;
        plVar18 = plVar18 + 0x28;
        iVar4 = iVar17;
        iVar5 = local_1a4;
      } while ((int)(iVar13 + 1U) < iVar2);
    }
    local_1a4 = iVar5;
    iVar17 = iVar4;
    if ((iVar17 < 0) || (iVar2 <= iVar17)) {
      uVar16 = 1;
    }
    cVar6 = (char)uVar16;
    if (cVar6 != '\0') goto LAB_1407c3c6b;
  }
  else {
    if (0 < iVar2) {
      pcVar10 = (char *)(*(longlong *)(param_1 + 0x250) + 0x14);
      do {
        if (*pcVar10 == '\0') break;
        uVar14 = (int)uVar16 + 1;
        uVar16 = (ulonglong)uVar14;
        pcVar10 = pcVar10 + 0x140;
      } while ((int)uVar14 < iVar2);
    }
    cVar6 = '\x01';
LAB_1407c3c6b:
    local_1a4 = iVar2;
    _guard_xfg_dispatch_icall_nop(local_180,0,0x138);
    iVar17 = *(int *)(param_1 + 600);
    *(int *)(param_1 + 600) = iVar17 + 1;
    local_188 = param_1;
    if (*(int *)(param_1 + 0x25c) < iVar17 + 1) {
      FUN_1407d8cb0((longlong *)(param_1 + 0x250),iVar17);
    }
    FUN_1407bc5a0((longlong)iVar17 * 0x140 + *(longlong *)(param_1 + 0x250),&local_188);
    FUN_1407be0f0(&local_188);
    iVar17 = iVar2;
  }
  plVar18 = (longlong *)((longlong)iVar17 * 0x140 + *(longlong *)(param_1 + 0x250));
  plVar18[8] = local_1a0;
  plVar18[6] = lVar12;
  if (lVar12 == 0) {
LAB_1407c3d20:
    lVar12 = 0;
  }
  else {
    lVar11 = FUN_1407e2730();
    if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar11 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) + (longlong)*(int *)(lVar11 + 0x90) * 8
         ) != lVar11 + 0x88)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (!bVar3) goto LAB_1407c3d20;
  }
  param_2 = local_1a0;
  plVar18[3] = lVar8;
  plVar18[7] = lVar12;
  plVar18[4] = uVar20;
  *(char *)((longlong)plVar18 + 0x14) = local_1a8;
  *(undefined1 *)((longlong)plVar18 + 9) = 1;
  *(undefined4 *)(plVar18 + 5) = *(undefined4 *)(local_1a0 + 0x8e9);
  *(undefined2 *)((longlong)plVar18 + 0x2c) = *(undefined2 *)(local_1a0 + 0x8ed);
  *(undefined1 *)((longlong)plVar18 + 0x2e) = *(undefined1 *)(local_1a0 + 0x8ef);
  lVar12 = *(longlong *)(local_1a0 + 0x900);
  if (lVar12 == 0) {
    lVar12 = *(longlong *)(local_1a0 + 0x8f8);
  }
  plVar18[9] = lVar12;
  if ((cVar6 == '\0') && (*(char *)((longlong)plVar18 + 0x2a) != '\x01')) {
    uVar7 = 0;
  }
  else {
    FUN_1407d7830(plVar18);
    uVar7 = 1;
  }
  *(undefined1 *)((longlong)plVar18 + 10) = uVar7;
  if (((longlong *)plVar18[9] != (longlong *)0x0) &&
     (cVar6 = (**(code **)(*(longlong *)plVar18[9] + 0x308))(), cVar6 != '\0')) {
    local_198 = plVar18[10];
    local_190 = plVar18;
    (**(code **)(*(longlong *)plVar18[9] + 800))((longlong *)plVar18[9],&local_198);
    if (((longlong *)*plVar18 != (longlong *)0x0) &&
       ((lVar12 = (**(code **)(*(longlong *)*plVar18 + 0x148))(), lVar12 != 0 &&
        (lVar12 = *(longlong *)(lVar12 + 0x148), lVar12 != 0)))) {
      lVar8 = ARemnantQuest::GetPrivateStaticClass();
      if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
           (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
      if (bVar3) {
        plVar19 = *(longlong **)(lVar12 + 0x470);
        plVar1 = plVar19 + *(int *)(lVar12 + 0x478);
        param_2 = local_1a0;
        for (; local_1a0 = param_2, plVar19 != plVar1; plVar19 = plVar19 + 1) {
          if (((longlong *)*plVar19 != (longlong *)0x0) &&
             (lVar12 = (**(code **)(*(longlong *)*plVar19 + 0x668))(), lVar12 != 0)) {
            lVar8 = FUN_14291fb80();
            if ((*(int *)(*(longlong *)(lVar12 + 0x10) + 0x90) < *(int *)(lVar8 + 0x90)) ||
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar12 + 0x10) + 0x88) +
                 (longlong)*(int *)(lVar8 + 0x90) * 8) != lVar8 + 0x88)) {
              bVar3 = false;
            }
            else {
              bVar3 = true;
            }
            if (bVar3) {
              local_198 = plVar18[10];
              local_190 = plVar18;
              (**(code **)(*(longlong *)plVar18[9] + 0x310))
                        ((longlong *)plVar18[9],&local_198,lVar12);
            }
          }
          param_2 = local_1a0;
        }
      }
    }
  }
LAB_1407c3ee5:
  *(int *)(param_2 + 0x930) = iVar17;
  FUN_1407c0bf0(param_1,&local_1a4);
  FUN_1407c10b0(*(undefined8 *)((longlong)local_1a4 * 0x140 + 0x40 + *(longlong *)(param_1 + 0x250))
               );
  return;
}



// FUNCTION 1407c3f40 FUN_1407c3f40 body=58 status=ok
// SIG undefined FUN_1407c3f40(void)

undefined8 FUN_1407c3f40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    uVar1 = FUN_1407e1190();
    plVar2 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(param_2,uVar1);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001407c3f6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
      return uVar1;
    }
  }
  return 0;
}



// FUNCTION 1407c3f80 FUN_1407c3f80 body=139 status=ok
// SIG undefined FUN_1407c3f80(void)

int * FUN_1407c3f80(longlong param_1,longlong param_2)

{
  int *piVar1;
  float fVar2;
  undefined8 local_res8;
  
  piVar1 = (int *)operator_new(0xc);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1[0] = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
  }
  piVar1[0] = 0;
  piVar1[1] = 0;
  piVar1[2] = 0;
  local_res8 = 0xffffffffffffffff;
  fVar2 = (float)FUN_142de77e0(param_1 + 0x38,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30),0,
                               &local_res8);
  *piVar1 = (int)ROUND(fVar2 * 2.0 + 0.5) >> 1;
  return piVar1;
}



// FUNCTION 1407c4010 FUN_1407c4010 body=243 status=ok
// SIG undefined FUN_1407c4010(void)

undefined8 * FUN_1407c4010(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined8 local_res8;
  
  puVar2 = (undefined8 *)operator_new(0x18);
  puVar4 = (undefined8 *)0x0;
  puVar5 = puVar4;
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar5 = puVar2;
  }
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(puVar5 + 2) = iVar1;
  if (*(int *)((longlong)puVar5 + 0x14) < iVar1) {
    TArray<IHeadMountedDisplayModule_*,FDefaultAllocator>::ResizeGrow(puVar5 + 1);
  }
  _guard_xfg_dispatch_icall_nop((void *)puVar5[1],0,(longlong)iVar1 << 3);
  puVar2 = puVar4;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      local_res8 = 0xffffffffffffffff;
      fVar6 = (float)FUN_142de77e0((longlong)(int)puVar4 * 0x90 + *(longlong *)(param_1 + 0x30) + 8,
                                   *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30),0,&local_res8)
      ;
      uVar3 = (int)puVar4 + 1;
      puVar4 = (undefined8 *)(ulonglong)uVar3;
      *(int *)((longlong)puVar2 + puVar5[1]) = (int)fVar6;
      puVar2 = puVar2 + 1;
    } while ((int)uVar3 < *(int *)(param_1 + 0x38));
  }
  return puVar5;
}



// FUNCTION 1407c4110 FUN_1407c4110 body=309 status=ok
// SIG undefined FUN_1407c4110(void)

undefined8 * FUN_1407c4110(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  float fVar3;
  undefined8 local_res8;
  
  puVar1 = (undefined8 *)operator_new(0x2c);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    *(undefined4 *)(puVar1 + 5) = 0;
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  local_res8 = 0xffffffffffffffff;
  fVar3 = (float)FUN_142de77e0(param_1 + 0x40,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30),0,
                               &local_res8);
  *(int *)(puVar1 + 1) = (int)ROUND(fVar3 * 2.0 + 0.5) >> 1;
  local_res8 = 0xffffffffffffffff;
  fVar3 = (float)FUN_142de77e0(param_1 + 0xc0,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30),0,
                               &local_res8);
  *(int *)((longlong)puVar1 + 0xc) = (int)ROUND(fVar3 * 2.0 + 0.5) >> 1;
  local_res8 = 0xffffffffffffffff;
  fVar3 = (float)FUN_142de77e0(param_1 + 0x140,*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x30),0,
                               &local_res8);
  iVar2 = (int)ROUND(fVar3 * 2.0 + 0.5) >> 1;
  if (iVar2 <= *(int *)((longlong)puVar1 + 0xc)) {
    iVar2 = *(int *)((longlong)puVar1 + 0xc);
  }
  *(int *)(puVar1 + 2) = iVar2;
  return puVar1;
}



// FUNCTION 1407c4250 FUN_1407c4250 body=298 status=ok
// SIG undefined FUN_1407c4250(void)

undefined8 * FUN_1407c4250(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined8 local_38;
  undefined8 local_30;
  
  puVar3 = (undefined8 *)operator_new(0x20);
  puVar7 = (undefined8 *)0x0;
  puVar6 = puVar7;
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar6 = puVar3;
  }
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  iVar1 = *(int *)(param_1 + 0x38);
  *(int *)(puVar6 + 3) = iVar1;
  if (*(int *)((longlong)puVar6 + 0x1c) < iVar1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<56,8>_>,FDefaultAllocator>::ResizeGrow
              (puVar6 + 2);
  }
  _guard_xfg_dispatch_icall_nop((void *)puVar6[2],0,(longlong)iVar1 * 0x38);
  puVar3 = puVar7;
  if (0 < *(int *)(param_1 + 0x38)) {
    do {
      local_30 = *(undefined8 *)(param_2 + 8);
      lVar5 = puVar6[2];
      local_38 = 0;
      plVar2 = *(longlong **)((longlong)puVar3 + *(longlong *)(param_1 + 0x30));
      uVar4 = (**(code **)(*plVar2 + 0x2e8))(plVar2,&local_38);
      *(undefined8 *)((longlong)puVar3 + lVar5) = uVar4;
      lVar5 = (longlong)(int)puVar7 * 0x38;
      FUN_1407cc680(lVar5 + puVar6[2] + 0x18,*(longlong *)(param_1 + 0x30) + 0x20 + lVar5,
                    *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x38));
      uVar8 = (int)puVar7 + 1;
      puVar7 = (undefined8 *)(ulonglong)uVar8;
      puVar3 = puVar3 + 7;
    } while ((int)uVar8 < *(int *)(param_1 + 0x38));
  }
  *puVar6 = 0xffffffffffffffff;
  return puVar6;
}



// FUNCTION 1407c4380 FUN_1407c4380 body=39 status=ok
// SIG undefined FUN_1407c4380(void)

void FUN_1407c4380(void)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)operator_new();
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = 0;
    *puVar1 = 0;
    return;
  }
  DAT_00000000 = 0;
  return;
}



// FUNCTION 1407c43b0 FUN_1407c43b0 body=113 status=ok
// SIG undefined FUN_1407c43b0(void)

bool FUN_1407c43b0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x168);
  if (*(longlong *)(param_1 + 0x168) == 0) {
    lVar2 = param_1 + 0xa8;
  }
  plVar1 = (longlong *)FWeakObjectPtr::Get(lVar2 + 8);
  bVar3 = plVar1 == (longlong *)0x0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x278))(plVar1,(int *)(param_1 + 0x48));
    bVar3 = *(int *)(param_1 + 0x48) == 0x7fffffff;
  }
  if (bVar3 != false) {
    FUN_1407c63e0(param_1);
  }
  return bVar3;
}



// FUNCTION 1407c4430 FUN_1407c4430 body=330 status=ok
// SIG undefined FUN_1407c4430(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c4430(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_f8 [32];
  undefined1 local_d8 [88];
  longlong local_80;
  longlong *local_48;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_f8;
  if (*(char *)(param_2 + 3) == '\0') {
    if (*(char *)(param_2 + 1) == '\x02') {
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
      *(int *)((longlong)param_1 + 0x6c) = *(int *)((longlong)param_1 + 0x6c) + -1;
      *(undefined1 *)(param_2 + 1) = 3;
    }
    else {
      if (*(char *)(param_2 + 1) != '\x01') {
        return;
      }
      *(int *)(param_1 + 0xc) = (int)param_1[0xc] + -1;
      *(int *)(param_1 + 0xd) = (int)param_1[0xd] + 1;
    }
    FUN_1407bc410(local_d8);
    uVar3 = *param_2;
    *(undefined1 *)(param_2 + 3) = 1;
    *(undefined4 *)((longlong)param_2 + 0x14) = 0xffffffff;
    *(undefined4 *)((longlong)param_2 + 0xc) = 0xffffffff;
    FUN_1407cfba0(param_1,local_d8,0);
    *param_2 = uVar3;
    if ((param_1[8] == 0) || (*(char *)(param_1[8] + 0x988) == '\0')) {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
    if (*(char *)((longlong)param_1 + 0x5c) != '\0') {
      iVar6 = (int)param_1[0xc];
      if (bVar4) {
        iVar6 = iVar6 + (int)param_1[0xd];
      }
      if ((iVar6 < 1) && (*(float *)(param_1 + 0xb) == 0.0)) {
        *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(*param_1 + 0x230);
        FUN_1407dda30(param_1);
      }
    }
    if (local_48 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_48 + 1;
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar5 == 1) {
        (**(code **)*local_48)(local_48);
        LOCK();
        piVar2 = (int *)((longlong)local_48 + 0xc);
        iVar6 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar6 == 1) {
          (**(code **)(*local_48 + 8))(local_48,1);
        }
      }
    }
    if (local_80 != 0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407c4580 FUN_1407c4580 body=136 status=ok
// SIG undefined FUN_1407c4580(void)

void FUN_1407c4580(longlong param_1,longlong param_2)

{
  int iVar1;
  int *piVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_res18 [16];
  
  piVar2 = (int *)FUN_1407c7790(param_1,local_res18,param_2);
  iVar1 = *piVar2;
  if (((-1 < iVar1) && (iVar1 < *(int *)(param_1 + 600))) &&
     (lVar5 = (longlong)iVar1 * 0x140 + *(longlong *)(param_1 + 0x250), lVar5 != 0)) {
    plVar4 = *(longlong **)(lVar5 + 0x70);
    plVar3 = plVar4 + (longlong)*(int *)(lVar5 + 0x78) * 0x15;
    if (plVar4 != plVar3) {
      while (*plVar4 != param_2) {
        plVar4 = plVar4 + 0x15;
        if (plVar4 == plVar3) {
          return;
        }
      }
      if (plVar4 != (longlong *)0x0) {
        FUN_1407c4430(lVar5);
      }
    }
  }
  return;
}



// FUNCTION 1407c4610 FUN_1407c4610 body=711 status=ok
// SIG undefined FUN_1407c4610(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c4610(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong *plVar8;
  uint uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  undefined1 auStack_2868 [32];
  undefined1 local_2848 [10240];
  ulonglong local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_2868;
  local_48 = 0;
  local_40._0_4_ = 0;
  local_40 = 0;
  lVar10 = *(longlong *)(param_2 + 0x2800);
  if (*(longlong *)(param_2 + 0x2800) == 0) {
    lVar10 = param_2;
  }
  lVar6 = lVar10 + (longlong)*(int *)(param_2 + 0x2808) * 0x28;
  if (lVar10 != lVar6) {
    do {
      FUN_1407b8de0(local_2848,*(longlong *)(lVar10 + 0x20) + 0x718);
      lVar10 = lVar10 + 0x28;
    } while (lVar10 != lVar6);
  }
  puVar5 = local_2848;
  if (local_48 != 0) {
    puVar5 = (undefined1 *)0x0;
  }
  plVar11 = (longlong *)((ulonglong)puVar5 | local_48);
  plVar1 = plVar11 + (longlong)(int)local_40 * 5;
  for (; plVar11 != plVar1; plVar11 = plVar11 + 5) {
    lVar10 = *plVar11;
    if ((((lVar10 != 0) && (plVar11[3] != 0)) && (plVar11[2] != 0)) &&
       (((lVar6 = plVar11[4], lVar6 != 0 && (*(char *)(lVar6 + 0x740) == '\0')) &&
        ((*(byte *)(lVar10 + 0x94) & 2) == 0)))) {
      uVar4 = *(uint *)(lVar10 + 0xc);
      puVar5 = (undefined1 *)0x0;
      if ((int)uVar4 < (int)DAT_1469e91c4) {
        uVar9 = uVar4 & 0xffff;
        if ((int)uVar4 < 0) {
          uVar4 = uVar4 + 0xffff;
          uVar9 = uVar9 - 0x10000;
        }
        puVar5 = (undefined1 *)
                 (*(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar4 >> 0x10) * 8) +
                 (longlong)(int)uVar9 * 0x18);
      }
      if ((((*(uint *)(puVar5 + 8) >> 0x1d & 1) == 0) && (lVar6 != param_1)) &&
         ((*(longlong *)(param_1 + 0x718) != 0 &&
          ((((*(longlong *)(param_1 + 0x730) != 0 && (*(longlong *)(param_1 + 0x728) != 0)) &&
            (*(longlong *)(param_1 + 0x738) != 0)) &&
           ((*(char *)(*(longlong *)(param_1 + 0x738) + 0x740) == '\0' &&
            (cVar3 = FUN_1407cd900(), cVar3 == '\0')))))))) {
        plVar12 = *(longlong **)(*(longlong *)(param_1 + 0x738) + 0x748);
        plVar2 = plVar12 + *(int *)(*(longlong *)(param_1 + 0x738) + 0x750);
        for (; plVar12 != plVar2; plVar12 = plVar12 + 1) {
          lVar10 = *plVar12;
          lVar6 = FUN_1407ce820(param_1,*(undefined8 *)(lVar10 + 0x10));
          if (lVar6 == lVar10) goto LAB_1407c4882;
          uVar7 = FUN_1407e5ab0();
          plVar8 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar10,uVar7);
          (**(code **)(*plVar8 + 0x20))(plVar8,lVar6);
        }
      }
    }
  }
LAB_1407c4882:
  if (local_48 != 0) {
    FMemory::Free(local_48);
  }
  return;
}



// FUNCTION 1407c48e0 FUN_1407c48e0 body=89 status=ok
// SIG undefined FUN_1407c48e0(void)

void FUN_1407c48e0(longlong param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x28);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_GetPoolName_1440e0178;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)((longlong)puVar1 + 0x14) = *(undefined4 *)(param_1 + 0x14);
    puVar1[4] = *(undefined8 *)(param_1 + 0x20);
    *puVar1 = &PTR_GetPoolName_1440e01c0;
  }
  return;
}



// FUNCTION 1407c4940 FUN_1407c4940 body=98 status=ok
// SIG undefined FUN_1407c4940(void)

void FUN_1407c4940(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x30);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_1440e00b8;
    *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((longlong)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2[2] = *(undefined8 *)(param_1 + 0x10);
    puVar2[3] = uVar1;
    *(undefined4 *)(puVar2 + 4) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)((longlong)puVar2 + 0x24) = *(undefined4 *)(param_1 + 0x24);
    puVar2[5] = *(undefined8 *)(param_1 + 0x28);
    *puVar2 = &PTR_FUN_1440e0100;
  }
  return;
}



// FUNCTION 1407c49b0 FUN_1407c49b0 body=22 status=ok
// SIG undefined FUN_1407c49b0(void)

void FUN_1407c49b0(undefined8 param_1,longlong param_2)

{
  if (param_2 != 0) {
    FUN_142227350(param_2,0,1);
    return;
  }
  return;
}



// FUNCTION 1407c49d0 FUN_1407c49d0 body=322 status=ok
// SIG undefined FUN_1407c49d0(void)

void FUN_1407c49d0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *local_18;
  int local_10;
  
  if ((*(longlong *)(param_1 + 0x588) != 0) && (lVar6 = FUN_1407cb650(), lVar6 != 0)) {
    local_18 = (undefined8 *)0x0;
    FUN_1407b8f60(&local_18,*(undefined8 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x78),0,0);
    puVar9 = local_18 + (longlong)local_10 * 0x15;
    for (puVar7 = local_18; puVar7 != puVar9; puVar7 = puVar7 + 0x15) {
      if (*(char *)(puVar7 + 1) == '\x01') {
        FUN_142227350(*puVar7,0,1);
      }
    }
    iVar8 = *(int *)(lVar6 + 0x78);
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*(longlong *)(lVar6 + 0x70) + 0x58);
      do {
        plVar4 = (longlong *)plVar10[7];
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
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 0x15;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(lVar6 + 0x78) = 0;
    if (*(int *)(lVar6 + 0x7c) != 0) {
      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo((longlong *)(lVar6 + 0x70),0);
    }
    FUN_1407bddc0(&local_18);
  }
  return;
}



// FUNCTION 1407c4b20 FUN_1407c4b20 body=306 status=ok
// SIG undefined FUN_1407c4b20(void)

void FUN_1407c4b20(void)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  undefined8 *local_18;
  int local_10;
  
  lVar6 = FUN_1407cb650();
  if (lVar6 != 0) {
    local_18 = (undefined8 *)0x0;
    FUN_1407b8f60(&local_18,*(undefined8 *)(lVar6 + 0x70),*(undefined4 *)(lVar6 + 0x78),0,0);
    puVar9 = local_18 + (longlong)local_10 * 0x15;
    for (puVar7 = local_18; puVar7 != puVar9; puVar7 = puVar7 + 0x15) {
      if (*(char *)(puVar7 + 1) == '\x01') {
        FUN_142227350(*puVar7,0,1);
      }
    }
    iVar8 = *(int *)(lVar6 + 0x78);
    if (iVar8 != 0) {
      plVar10 = (longlong *)(*(longlong *)(lVar6 + 0x70) + 0x58);
      do {
        plVar4 = (longlong *)plVar10[7];
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
        if (*plVar10 != 0) {
          FMemory::Free();
        }
        plVar10 = plVar10 + 0x15;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    *(undefined4 *)(lVar6 + 0x78) = 0;
    if (*(int *)(lVar6 + 0x7c) != 0) {
      TArray<FDragonData_SpineFeetPair,FDefaultAllocator>::ResizeTo((longlong *)(lVar6 + 0x70),0);
    }
    FUN_1407bddc0(&local_18);
  }
  return;
}



// FUNCTION 1407c4c60 FUN_1407c4c60 body=214 status=ok
// SIG undefined FUN_1407c4c60(void)

void FUN_1407c4c60(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 local_18;
  longlong *plStack_10;
  
  lVar7 = *(longlong *)(param_1 + 0x70);
  lVar6 = (longlong)*(int *)(param_1 + 0x78) * 0xa8 + lVar7;
  if (lVar7 != lVar6) {
    puVar8 = (undefined8 *)(lVar7 + 0x88);
    do {
      local_18 = 0;
      plStack_10 = (longlong *)0x0;
      if (puVar8 != &local_18) {
        *puVar8 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=(puVar8 + 1,&plStack_10);
        plVar5 = plStack_10;
        if (plStack_10 != (longlong *)0x0) {
          LOCK();
          plVar1 = plStack_10 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
            (**(code **)*plStack_10)(plStack_10);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            iVar3 = *piVar2;
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (iVar3 == 1) {
              (**(code **)(*plStack_10 + 8))(plStack_10,1);
            }
          }
        }
      }
      lVar7 = lVar7 + 0xa8;
      puVar8 = puVar8 + 0x15;
    } while (lVar7 != lVar6);
  }
  return;
}



// FUNCTION 1407c4d50 FUN_1407c4d50 body=52 status=ok
// SIG undefined FUN_1407c4d50(void)

void FUN_1407c4d50(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 8) != 0) {
      FMemory::Free();
    }
    FMemory::operator_delete(lVar1,0x18);
    return;
  }
  return;
}



// FUNCTION 1407c4da0 FUN_1407c4da0 body=166 status=ok
// SIG undefined FUN_1407c4da0(void)

void FUN_1407c4da0(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_18;
  longlong local_10;
  
  lVar1 = *param_2;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x38)) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(lVar3 + *(longlong *)(param_1 + 0x30));
      local_18 = *(undefined8 *)(lVar3 + *(longlong *)(*param_2 + 0x10));
      local_10 = param_2[1];
      (**(code **)(*plVar2 + 0x2f0))(plVar2,&local_18);
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 0x38;
    } while (iVar4 < *(int *)(param_1 + 0x38));
  }
  if (lVar1 == 0) {
    return;
  }
  FUN_1407bdbb0(lVar1 + 0x10);
  FMemory::operator_delete(lVar1,0x20);
  return;
}



// FUNCTION 1407c4e80 InitHardwareSurvey body=8 status=ok
// SIG undefined InitHardwareSurvey(void)

void UEngine::InitHardwareSurvey(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x8c8) = 0;
  return;
}



// FUNCTION 1407c4e90 FUN_1407c4e90 body=189 status=ok
// SIG undefined FUN_1407c4e90(void)

void FUN_1407c4e90(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  lVar4 = *(longlong *)(param_1 + 0x588);
  if ((((lVar4 != 0) && (*(char *)(lVar4 + 0x888) != '\0')) &&
      (*(undefined1 *)(lVar4 + 0x888) = 0, *(char *)(lVar4 + 0x8c9) != '\0')) &&
     ((lVar4 = FUN_1407cb650(), lVar4 != 0 && (*(char *)(lVar4 + 0x5c) == '\0')))) {
    *(undefined1 *)(lVar4 + 0x5c) = 1;
    if ((*(int *)(lVar4 + 100) < 1) && (*(int *)(lVar4 + 0x10) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_1407ddae0();
    }
    if ((*(longlong *)(lVar4 + 0x40) == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x40) + 0x988) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(lVar4 + 0x60);
      if (bVar2) {
        iVar3 = iVar3 + *(int *)(lVar4 + 0x68);
      }
      if (iVar3 < 1) {
        FUN_1407dda30(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407c4f50 FUN_1407c4f50 body=173 status=ok
// SIG undefined FUN_1407c4f50(void)

void FUN_1407c4f50(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  longlong lVar4;
  
  if ((((*(char *)(param_1 + 0x888) != '\0') &&
       (*(undefined1 *)(param_1 + 0x888) = 0, *(char *)(param_1 + 0x8c9) != '\0')) &&
      (lVar4 = FUN_1407cb650(), lVar4 != 0)) && (*(char *)(lVar4 + 0x5c) == '\0')) {
    *(undefined1 *)(lVar4 + 0x5c) = 1;
    if ((*(int *)(lVar4 + 100) < 1) && (*(int *)(lVar4 + 0x10) == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
      FUN_1407ddae0();
    }
    if ((*(longlong *)(lVar4 + 0x40) == 0) ||
       (*(char *)(*(longlong *)(lVar4 + 0x40) + 0x988) == '\0')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar1) {
      iVar3 = *(int *)(lVar4 + 0x60);
      if (bVar2) {
        iVar3 = iVar3 + *(int *)(lVar4 + 0x68);
      }
      if (iVar3 < 1) {
        FUN_1407dda30(lVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1407c5000 FUN_1407c5000 body=456 status=ok
// SIG undefined FUN_1407c5000(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c5000(longlong param_1,longlong param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 auStack_c8 [32];
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  undefined8 local_98;
  float local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  if (0 < *(int *)(param_2 + 0x128)) {
    plVar6 = (longlong *)0x0;
    lVar4 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar4 = param_2 + 0x60;
    }
    lVar4 = FWeakObjectPtr::Get(lVar4);
    if (lVar4 != 0) {
      if (*(longlong *)(param_2 + 0x50) != 0) {
        uVar5 = FUN_1407e1190();
        plVar6 = (longlong *)UObjectBaseUtility::GetInterfaceAddress(lVar4,uVar5);
        if (plVar6 != (longlong *)0x0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,param_2 + 0x50);
        }
      }
      local_90 = *(float *)(param_1 + 0xec) - *(float *)(param_1 + 0xe0);
      local_98 = 0;
      FRotator::RotateVector(param_2 + 0x18,&local_a8,&local_98);
      fVar1 = *(float *)(param_2 + 0xc);
      fVar2 = *(float *)(param_2 + 0x10);
      fVar3 = *(float *)(param_2 + 0x14);
      FRotator::Quaternion(param_2 + 0x18,&local_a8);
      local_78._4_4_ = fStack_a4 + fVar2;
      local_78._0_4_ = local_a8 + fVar1;
      local_78._8_4_ = fStack_a0 + fVar3;
      local_78._12_4_ = 0;
      local_68._4_4_ = DAT_1464aa788._4_4_;
      local_68._0_4_ = (undefined4)DAT_1464aa788;
      local_68._8_4_ = DAT_1464aa790;
      local_68._12_4_ = 0;
      FUN_14222b9f0(lVar4,local_88,0,0);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)(*plVar6 + 0x20))(plVar6,param_2 + 0x50);
      }
    }
  }
  return;
}



// FUNCTION 1407c51d0 FUN_1407c51d0 body=621 status=ok
// SIG undefined FUN_1407c51d0(void)

void FUN_1407c51d0(longlong *param_1,longlong param_2)

{
  undefined4 uVar1;
  bool bVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 local_res8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 local_40;
  ushort local_3e;
  
  FActorSpawnParameters::FActorSpawnParameters(&local_68);
  local_60 = (**(code **)(*param_1 + 0x2d0))(param_1);
  local_40 = *(undefined1 *)((longlong)param_1 + 0xf1);
  lVar9 = 0;
  local_58 = *(undefined8 *)(param_2 + 0x30);
  if ((local_60 != 0) && (lVar3 = FUN_140cc25e0(*(undefined8 *)(param_2 + 0x28)), lVar3 != 0)) {
    local_res8 = 0;
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,local_res10);
    lVar10 = lVar9;
    if (*plVar4 != 0) {
      lVar5 = FUN_1428dfc70();
      for (lVar7 = *plVar4; (lVar10 = lVar9, lVar7 != 0 && (lVar10 = *plVar4, lVar7 != lVar5));
          lVar7 = *(longlong *)(lVar7 + 0x30)) {
      }
    }
    puVar6 = (undefined8 *)FUN_141791c20(local_res18,lVar3,lVar10,local_res8);
    local_68 = *puVar6;
  }
  local_3e = local_3e | 4;
  bVar2 = false;
  if (*(longlong *)(param_2 + 0x48) != 0) {
    local_res8 = 0;
    bVar2 = false;
    if (*(longlong *)(*(longlong *)(param_2 + 0x48) + 0x8e0) != 0) {
      bVar2 = true;
    }
  }
  local_90 = *(float *)((longlong)param_1 + 0xec) - *(float *)(param_1 + 0x1c);
  local_98 = 0;
  FRotator::RotateVector(param_2 + 0x18,&local_88,&local_98);
  local_78 = (float)local_88 + *(float *)(param_2 + 0xc);
  local_74 = local_88._4_4_ + *(float *)(param_2 + 0x10);
  local_70 = (float)local_80 + *(float *)(param_2 + 0x14);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x2c8))(param_1,local_res10);
  lVar3 = lVar9;
  if (*plVar4 != 0) {
    lVar7 = FUN_1428dfc70();
    for (lVar10 = *plVar4; (lVar3 = lVar9, lVar10 != 0 && (lVar3 = *plVar4, lVar10 != lVar7));
        lVar10 = *(longlong *)(lVar10 + 0x30)) {
    }
  }
  plVar4 = (longlong *)
           UWorld::SpawnActor(*(undefined8 *)(param_2 + 0x28),lVar3,&local_78,param_2 + 0x18,
                              &local_68);
  if (plVar4 != (longlong *)0x0) {
    if ((char)param_1[0x15] != '\0') {
      local_80 = 0;
      local_88 = param_1;
      uVar8 = FUN_1428e63f0();
      local_80 = UObjectBaseUtility::GetInterfaceAddress(param_1,uVar8);
      FUN_14223d480(plVar4,&local_88);
    }
    if (*(longlong *)(param_2 + 0x28) != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14625a720,&local_res8);
      if (((int)local_res8 != -1) &&
         (lVar3 = DAT_14625a720 + (longlong)(int)local_res8 * 0x18, lVar3 != 0)) {
        lVar9 = *(longlong *)(lVar3 + 8);
      }
    }
    if ((lVar9 != 0) && (*(longlong *)(param_2 + 0x40) != 0)) {
      uVar1 = *(undefined4 *)(*(longlong *)(param_2 + 0x40) + 0x930);
      *(longlong **)(lVar9 + 0x280) = plVar4;
      *(undefined4 *)(lVar9 + 0x288) = uVar1;
    }
    if (bVar2) {
      (**(code **)(*plVar4 + 0x6b0))(plVar4);
    }
    lVar9 = *(longlong *)(param_2 + 0x120);
    if (*(longlong *)(param_2 + 0x120) == 0) {
      lVar9 = param_2 + 0x60;
    }
    FWeakObjectPtr::operator=(lVar9,plVar4);
  }
  return;
}



// FUNCTION 1407c5440 FUN_1407c5440 body=135 status=ok
// SIG undefined FUN_1407c5440(void)

void FUN_1407c5440(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 200);
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar1 = param_1;
  }
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 8);
    do {
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != param_2) {
    TArray<FMovieSceneEntityAndAnimTypeID,TInlineAllocator<8,FDefaultAllocator>_>::ResizeTo
              (param_1,param_2);
  }
  return;
}



// FUNCTION 1407c54d0 Empty body=181 status=ok
// SIG undefined Empty(void)

void TSet<FLinkerLoad_*,DefaultKeyFuncs<FLinkerLoad_*,0>,FDefaultSetAllocator>::Empty
               (longlong param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeTo();
  }
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  uVar2 = param_2 + 0x1f + (param_2 + 0x1f >> 0x1f & 0x1fU) & 0xffffffe0;
  if (*(uint *)(param_1 + 0x2c) != uVar2) {
    *(uint *)(param_1 + 0x2c) = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(param_1 + 0x10,0);
  }
  cVar1 = TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,1>,FDefaultSetAllocator>::
          ConditionalRehash(param_1,param_2,1);
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



// FUNCTION 1407c5590 Empty body=117 status=ok
// SIG undefined Empty(void)

void TSet<TTuple<__int64_*,FString>,TDefaultMapHashableKeyFuncs<__int64_*,FString,0>,FDefaultSetAllocator>
     ::Empty(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  
  TSparseArray<TSetElement<TTuple<FName,FAnimNotifyArray>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::Empty();
  cVar1 = TSet<TTuple<FName,TSharedPtr<IOnlineSubsystem,1>_>,TDefaultMapHashableKeyFuncs<FName,TSharedPtr<IOnlineSubsystem,1>,0>,FDefaultSetAllocator>
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



// FUNCTION 1407c5610 FUN_1407c5610 body=100 status=ok
// SIG undefined FUN_1407c5610(void)

void FUN_1407c5610(longlong param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    plVar1 = (longlong *)(*(longlong *)(param_1 + 0x30) + 0x88);
    do {
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x25;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<296,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo((longlong *)(param_1 + 0x30),0);
  }
  return;
}



// FUNCTION 1407c56a0 NewProp_bCanFlinch_SetBit body=8 status=ok
// SIG undefined NewProp_bCanFlinch_SetBit(void)

void Z_Construct_UClass_AUGCharacter_Statics::NewProp_bCanFlinch_SetBit(longlong param_1)

{
  *(undefined1 *)(param_1 + 0x8c8) = 1;
  return;
}



// FUNCTION 1407c56b0 FUN_1407c56b0 body=48 status=ok
// SIG undefined FUN_1407c56b0(void)

void FUN_1407c56b0(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x588);
  if (((plVar1 != (longlong *)0x0) && ((char)plVar1[0x111] == '\0')) &&
     (*(undefined1 *)(plVar1 + 0x111) = 1, *(char *)((longlong)plVar1 + 0x8c9) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001407c56d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x900))();
    return;
  }
  return;
}



// FUNCTION 1407c56e0 FUN_1407c56e0 body=36 status=ok
// SIG undefined FUN_1407c56e0(void)

void FUN_1407c56e0(longlong *param_1)

{
  if (((char)param_1[0x111] == '\0') &&
     (*(undefined1 *)(param_1 + 0x111) = 1, *(char *)((longlong)param_1 + 0x8c9) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0001407c56fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x900))();
    return;
  }
  return;
}



// FUNCTION 1407c5710 FUN_1407c5710 body=27 status=ok
// SIG undefined FUN_1407c5710(void)

void FUN_1407c5710(undefined8 param_1)

{
  FUN_1407d9790();
  FUN_142c6b960(param_1);
  return;
}



// FUNCTION 1407c5730 FUN_1407c5730 body=27 status=ok
// SIG undefined FUN_1407c5730(void)

void FUN_1407c5730(undefined8 param_1)

{
  FUN_14233a670();
  FUN_1407ddd80(param_1);
  return;
}



// FUNCTION 1407c5750 FUN_1407c5750 body=47 status=ok
// SIG undefined FUN_1407c5750(void)

void FUN_1407c5750(longlong param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x740) = 1;
  FUN_1407de4d0();
  FUN_14233a670(param_1,param_2);
  return;
}



// FUNCTION 1407c5780 FUN_1407c5780 body=340 status=ok
// SIG undefined FUN_1407c5780(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

ulonglong FUN_1407c5780(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auStack_d8 [32];
  longlong local_b8 [16];
  longlong *local_38;
  int local_30;
  ulonglong local_28;
  
  uVar3 = DAT_1468387a8 ^ (ulonglong)auStack_d8;
  if ((param_2 == (longlong *)0x0) || (*(longlong *)(param_1 + 0x88) == 0)) {
LAB_1407c58b8:
    return uVar3 & 0xffffffffffffff00;
  }
  local_28 = uVar3;
  uVar4 = (**(code **)(*param_2 + 0x148))(param_2);
  lVar5 = FUN_1407c74b0(uVar4);
  uVar3 = 0;
  if (lVar5 == 0) goto LAB_1407c58b8;
  FUN_1407c80f0(*(undefined8 *)(param_1 + 0x88),local_b8);
  uVar3 = 0;
  plVar6 = local_b8;
  if (local_38 != (longlong *)0x0) {
    plVar6 = local_38;
  }
  uVar8 = (longlong)local_30 & 0x1fffffffffffffff;
  if (plVar6 + local_30 < plVar6) {
    uVar8 = uVar3;
  }
  uVar7 = uVar3;
  if (uVar8 != 0) {
    do {
      plVar1 = (longlong *)*plVar6;
      if (plVar1 != (longlong *)0x0) {
        uVar2 = (**(code **)(*plVar1 + 0x288))(plVar1,1);
        if ((int)uVar2 <= (int)(uint)uVar3) {
          uVar2 = (uint)uVar3;
        }
        uVar3 = (ulonglong)uVar2;
      }
      plVar6 = plVar6 + 1;
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar8);
    if (((int)uVar3 != 0) && (*(int *)(lVar5 + 0x1c0) < (int)uVar3 + *(int *)(lVar5 + 0x23c))) {
      uVar3 = 0;
      goto LAB_1407c5891;
    }
  }
  uVar3 = 1;
LAB_1407c5891:
  if (local_38 == (longlong *)0x0) {
    return uVar3;
  }
  FMemory::Free();
  return uVar3;
}



// FUNCTION 1407c58e0 FUN_1407c58e0 body=466 status=ok
// SIG undefined FUN_1407c58e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c58e0(longlong param_1,longlong param_2)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [128];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1468387a8 ^ (ulonglong)auStack_e8;
  uVar5 = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  if (param_2 != 0) {
    plVar3 = *(longlong **)(param_2 + 0x900);
    if ((plVar3 != (longlong *)0x0) ||
       (plVar3 = *(longlong **)(param_2 + 0x8f8), plVar3 != (longlong *)0x0)) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0;
      (**(code **)(*plVar3 + 0x2f8))(plVar3,local_c0);
      puVar4 = local_40;
      uVar7 = uVar5;
      uVar11 = uVar5;
      if (0 < (int)local_38) {
        do {
          puVar1 = local_c0;
          if (puVar4 != (undefined1 *)0x0) {
            puVar1 = puVar4;
          }
          if ((*(longlong *)(puVar1 + uVar7) != 0) &&
             (lVar8 = (longlong)*(int *)(*(longlong *)(puVar1 + uVar7) + 0x38), uVar6 = uVar5,
             uVar9 = uVar5, 0 < lVar8)) {
            do {
              puVar1 = local_c0;
              if (puVar4 != (undefined1 *)0x0) {
                puVar1 = puVar4;
              }
              if ((0 < *(int *)(*(longlong *)(puVar1 + uVar7) + 0x38)) &&
                 (plVar3 = *(longlong **)
                            (uVar9 + *(longlong *)(*(longlong *)(puVar1 + uVar7) + 0x30)),
                 plVar3 != (longlong *)0x0)) {
                lVar2 = (**(code **)(*plVar3 + 0x2e0))(plVar3);
                *(longlong *)(param_1 + 0x1d0) = lVar2;
                puVar4 = local_40;
                if (lVar2 != 0) break;
              }
              uVar6 = uVar6 + 1;
              uVar9 = uVar9 + 0x128;
            } while ((longlong)uVar6 < lVar8);
          }
          uVar10 = (int)uVar11 + 1;
          uVar7 = uVar7 + 8;
          uVar11 = (ulonglong)uVar10;
        } while ((int)uVar10 < (int)local_38);
      }
      if (puVar4 != (undefined1 *)0x0) {
        FMemory::Free();
      }
    }
    if (*(char *)(param_1 + 0x1c0) == '\0') {
      lVar8 = *(longlong *)(param_1 + 0x1d0);
    }
    else {
      lVar8 = *(longlong *)(param_1 + 0x1b8);
    }
    *(longlong *)(param_1 + 0x180) = lVar8;
    if (lVar8 != 0) {
      uVar5 = *(ulonglong *)(lVar8 + 0x18);
    }
    *(ulonglong *)(param_1 + 0x1c8) = uVar5;
  }
  return;
}



// FUNCTION 1407c5ac0 FUN_1407c5ac0 body=84 status=ok
// SIG undefined FUN_1407c5ac0(void)

void FUN_1407c5ac0(longlong param_1)

{
  longlong lVar1;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x951) = 0;
    local_18 = lVar1;
    local_10 = FWeakObjectPtr::Get(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x718,&local_18);
  }
  return;
}



// FUNCTION 1407c5b20 Execute body=90 status=ok
// SIG undefined Execute(void)

void TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,TTypeWrapper<void>___cdecl(FEncryptionKeyResponse_const_&),TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
     ::Execute(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  local_resc = *(undefined4 *)(param_1 + 0x24);
  local_res8 = *(undefined4 *)(param_1 + 0x20);
  (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,&local_res8);
  return;
}



// FUNCTION 1407c5b80 FUN_1407c5b80 body=86 status=ok
// SIG undefined FUN_1407c5b80(void)

undefined1 FUN_1407c5b80(longlong param_1)

{
  longlong lVar1;
  longlong local_18;
  undefined8 local_10;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x951) = 0;
    local_18 = lVar1;
    local_10 = FWeakObjectPtr::Get(param_1 + 0x10);
    TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
              (lVar1 + 0x718,&local_18);
  }
  return 1;
}



// FUNCTION 1407c5be0 ExecuteIfSafe body=130 status=ok
// SIG undefined ExecuteIfSafe(void)

undefined8
TBaseUObjectMethodDelegateInstance<0,AOnlineBeaconClient,void___cdecl(FEncryptionKeyResponse_const_&),TWeakObjectPtr<UNetConnection,FWeakObjectPtr>_>
::ExecuteIfSafe(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined4 local_res8;
  undefined4 local_resc;
  
  lVar1 = FWeakObjectPtr::Get(param_1 + 8);
  if (lVar1 != 0) {
    lVar1 = FWeakObjectPtr::Get(param_1 + 8);
    local_res8 = *(undefined4 *)(param_1 + 0x20);
    local_resc = *(undefined4 *)(param_1 + 0x24);
    (**(code **)(param_1 + 0x10))((int)*(undefined8 *)(param_1 + 0x18) + lVar1,param_2,&local_res8);
    return 1;
  }
  return 0;
}



// FUNCTION 1407c5c70 FUN_1407c5c70 body=7 status=ok
// SIG undefined FUN_1407c5c70(void)

void FUN_1407c5c70(undefined4 *param_1)

{
  *param_1 = 0x7fffffff;
  return;
}



// FUNCTION 1407c5c80 FUN_1407c5c80 body=976 status=ok
// SIG undefined FUN_1407c5c80(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1407c5c80(longlong *param_1,int *param_2)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  longlong lVar10;
  undefined1 uVar11;
  int *piVar12;
  ulonglong uVar13;
  longlong *plVar14;
  ulonglong uVar15;
  undefined1 auStack_1848 [32];
  undefined8 local_1828;
  undefined1 local_1818 [8];
  undefined8 local_1810;
  undefined4 local_1808;
  undefined4 local_1804;
  undefined1 local_1800 [72];
  longlong local_17b8;
  longlong local_1798;
  undefined1 local_1788 [32];
  undefined4 local_1768;
  undefined1 local_1764;
  undefined4 local_1760;
  undefined8 local_1718;
  undefined4 local_1710;
  longlong local_1708;
  undefined8 local_1700;
  undefined1 local_16e8 [5760];
  undefined1 *local_68;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1848;
  lVar4 = (**(code **)(*param_1 + 0x148))();
  if (lVar4 == 0) {
    uVar5 = 1;
  }
  else {
    piVar12 = *(int **)(param_2 + 0x2c);
    if (*(int **)(param_2 + 0x2c) == (int *)0x0) {
      piVar12 = param_2 + 4;
    }
    local_68 = (undefined1 *)0x0;
    local_58 = 0;
    piVar1 = piVar12 + (longlong)param_2[0x2e] * 2;
    if (piVar12 != piVar1) {
      local_1810 = 0;
      do {
        local_1808 = 0xffffffff;
        local_1804 = 0;
        local_1828 = 0;
        FUN_1422ffb20(local_1800,0,local_1818,0);
        FUN_1426d3dd0(local_1788);
        FUN_1426ea8d0(local_1788,2);
        local_1768 = 0;
        local_1764 = 0;
        local_1760 = 0;
        local_1718 = 0;
        local_1710 = 0;
        local_1708 = 0;
        local_1700 = 0;
        cVar2 = FUN_14234afa0(lVar4,piVar12,&local_1808);
        uVar13 = local_58;
        if (cVar2 == '\0') {
          if (local_1708 != 0) {
            FMemory::Free();
          }
          TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1718);
          if (local_1798 != 0) {
            FMemory::Free();
          }
          if (local_17b8 != 0) {
            FMemory::Free();
          }
          uVar5 = 0;
          goto LAB_1407c5f95;
        }
        lVar10 = (longlong)(int)local_58;
        iVar3 = (int)local_58 + 1;
        local_58 = CONCAT44(local_58._4_4_,iVar3);
        if (local_58._4_4_ < iVar3) {
          FUN_1407d8de0(local_16e8,uVar13 & 0xffffffff);
        }
        puVar9 = local_16e8;
        if (local_68 != (undefined1 *)0x0) {
          puVar9 = local_68;
        }
        FUN_1407bca10(puVar9 + lVar10 * 0x120,&local_1808);
        if (local_1708 != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(&local_1718);
        if (local_1798 != 0) {
          FMemory::Free();
        }
        if (local_17b8 != 0) {
          FMemory::Free();
        }
        piVar12 = piVar12 + 2;
      } while (piVar12 != piVar1);
    }
    puVar9 = local_16e8;
    if (local_68 != (undefined1 *)0x0) {
      puVar9 = (undefined1 *)0x0;
    }
    uVar13 = (ulonglong)puVar9 | (ulonglong)local_68;
    uVar15 = (longlong)(int)local_58 * 0x120 + uVar13;
    for (; uVar13 != uVar15; uVar13 = uVar13 + 0x120) {
      if (*(int *)(uVar13 + 0x108) == 0) {
LAB_1407c5f7a:
        uVar11 = 1;
        goto LAB_1407c5ed8;
      }
      pbVar6 = *(byte **)(uVar13 + 0x100);
      pbVar7 = pbVar6 + (longlong)*(int *)(uVar13 + 0x108) * 0x90;
      for (; pbVar6 != pbVar7; pbVar6 = pbVar6 + 0x90) {
        if ((~*pbVar6 & 1) != 0) goto LAB_1407c5f7a;
      }
    }
    uVar11 = 0;
LAB_1407c5ed8:
    iVar3 = *param_2;
    if (((-1 < iVar3) && (iVar3 < (int)param_1[0x4b])) &&
       (lVar4 = (longlong)iVar3 * 0x140 + param_1[0x4a], lVar4 != 0)) {
      lVar10 = FWeakObjectPtr::Get(param_2 + 1);
      plVar8 = *(longlong **)(lVar4 + 0x70);
      plVar14 = plVar8 + (longlong)*(int *)(lVar4 + 0x78) * 0x15;
      for (; plVar8 != plVar14; plVar8 = plVar8 + 0x15) {
        if (*plVar8 == lVar10) {
          if (plVar8 != (longlong *)0x0) {
            *(undefined1 *)(plVar8 + 0xf) = uVar11;
          }
          break;
        }
      }
    }
    uVar5 = 1;
LAB_1407c5f95:
    puVar9 = local_16e8;
    if (local_68 != (undefined1 *)0x0) {
      puVar9 = local_68;
    }
    if ((int)local_58 != 0) {
      puVar9 = puVar9 + 0xf0;
      iVar3 = (int)local_58;
      do {
        if (*(longlong *)(puVar9 + 0x10) != 0) {
          FMemory::Free();
        }
        TBaseDelegate<FText>::~TBaseDelegate<FText>(puVar9);
        if (*(longlong *)(puVar9 + -0x80) != 0) {
          FMemory::Free();
        }
        if (*(longlong *)(puVar9 + -0xa0) != 0) {
          FMemory::Free();
        }
        puVar9 = puVar9 + 0x120;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    if (local_68 != (undefined1 *)0x0) {
      FMemory::Free(local_68);
    }
  }
  return uVar5;
}



// FUNCTION 1407c6050 Find body=131 status=ok
// SIG undefined Find(void)

longlong TArray<FSoftObjectPath,FDefaultAllocator>::Find(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar4 = lVar1;
  while( true ) {
    if (lVar4 == lVar1 + (longlong)(int)lVar2 * 0x18) {
      return 0xffffffff;
    }
    cVar3 = FSoftObjectPath::operator==(lVar4,param_2);
    if (cVar3 != '\0') break;
    lVar4 = lVar4 + 0x18;
  }
  return (lVar4 - lVar1) / 0x18;
}



// FUNCTION 1407c60e0 FUN_1407c60e0 body=248 status=ok
// SIG undefined FUN_1407c60e0(void)

int * FUN_1407c60e0(longlong param_1,int *param_2,uint *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint local_res8;
  uint local_resc;
  undefined4 local_res20;
  undefined4 local_res24;
  
  if (*(int *)(param_1 + 0x148) != *(int *)(param_1 + 0x16c)) {
    lVar3 = *(longlong *)(param_1 + 400);
    if (*(longlong *)(param_1 + 400) == 0) {
      lVar3 = param_1 + 0x170;
    }
    iVar5 = *(int *)(lVar3 + ((longlong)(int)(param_3[1] ^ *param_3) &
                             (longlong)*(int *)(param_1 + 0x198) - 1U) * 4);
    if (iVar5 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x140);
      do {
        lVar1 = (longlong)iVar5 * 0x14;
        if (lVar3 == 0) {
          lVar3 = param_1;
        }
        local_res20 = *(undefined4 *)(lVar3 + lVar1);
        local_res24 = *(undefined4 *)(lVar3 + 4 + lVar1);
        local_res8 = *param_3;
        local_resc = param_3[1];
        cVar2 = operator==<UObject_const_,UObject_const_,FWeakObjectPtr>(&local_res20,&local_res8);
        if (cVar2 != '\0') {
          *param_2 = iVar5;
          return param_2;
        }
        lVar3 = *(longlong *)(param_1 + 0x140);
        lVar4 = lVar3;
        if (lVar3 == 0) {
          lVar4 = param_1;
        }
        iVar5 = *(int *)(lVar4 + 0xc + lVar1);
      } while (iVar5 != -1);
    }
  }
  *param_2 = -1;
  return param_2;
}



// FUNCTION 1407c61e0 FUN_1407c61e0 body=500 status=ok
// SIG undefined FUN_1407c61e0(void)

void FUN_1407c61e0(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  longlong local_18;
  longlong local_10;
  
  if (*(longlong **)(param_1 + 0x40) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_1 + 0x40) + 0x8f8))();
  }
  plVar6 = *(longlong **)(param_1 + 0x38);
  if (plVar6 != (longlong *)0x0) {
    (**(code **)(*plVar6 + 0x700))(plVar6,param_2);
  }
  lVar9 = *(longlong *)(param_1 + 0x40);
  iVar2 = (int)param_2[2];
  if (((((lVar9 != 0) && (-1 < iVar2)) && (iVar2 < *(int *)(lVar9 + 0x978))) &&
      (plVar6 = *(longlong **)(*(longlong *)(lVar9 + 0x970) + (longlong)iVar2 * 8),
      plVar6 != (longlong *)0x0)) ||
     (plVar6 = (longlong *)FWeakObjectPtr::Get(param_2 + 0x14), plVar6 != (longlong *)0x0)) {
    (**(code **)(*plVar6 + 0x8e8))(plVar6,param_2);
  }
  if ((char)param_2[3] != '\0') {
    return;
  }
  plVar6 = *(longlong **)(param_1 + 0x48);
  if (plVar6 != (longlong *)0x0) {
    local_18 = *(longlong *)(param_1 + 0x50);
    if (*(char *)((longlong)param_2 + 0x19) == '\0') {
      local_10 = param_1;
      (**(code **)(*plVar6 + 0x2a8))();
    }
    else {
      local_10 = param_1;
      (**(code **)(*plVar6 + 0x2b0))(plVar6,&local_18,param_2);
    }
  }
  FUN_1407dd530(param_1,param_2);
  if (*(char *)((longlong)param_2 + 0x19) != '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
      return;
    }
    iVar2 = *(int *)(lVar9 + 0xc);
    if (iVar2 < (int)DAT_1469e91c4) {
      uVar8 = iVar2 >> 0x1f & 0xffff;
      uVar5 = iVar2 + uVar8;
      lVar7 = *(longlong *)(DAT_1469e91b0 + (longlong)((int)uVar5 >> 0x10) * 8) +
              (longlong)(int)((uVar5 & 0xffff) - uVar8) * 0x18;
    }
    else {
      lVar7 = 0;
    }
    if ((*(uint *)(lVar7 + 8) >> 0x1d & 1) != 0) {
      return;
    }
    lVar7 = *(longlong *)(param_1 + 0x40);
    if (lVar7 != 0) {
      local_18 = lVar7;
      local_10 = lVar9;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar7 + 0x7b8,&local_18);
      lVar9 = *param_2;
    }
    lVar7 = *(longlong *)(param_1 + 0x38);
    if (lVar7 != 0) {
      local_18 = lVar7;
      local_10 = lVar9;
      TMulticastScriptDelegate<FWeakObjectPtr>::ProcessMulticastDelegate<UObject>
                (lVar7 + 0x4a0,&local_18);
      lVar9 = *param_2;
    }
    TBaseMulticastDelegate<void,FUniqueNetId_const_&,FUniqueNetId_const_&>::Broadcast
              (&DAT_14625a708,*(undefined8 *)(param_1 + 0x40),lVar9);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x5c);
  if (cVar1 == '\0') {
    plVar6 = *(longlong **)(param_1 + 0x48);
    if (plVar6 != (longlong *)0x0) {
      local_18 = *(longlong *)(param_1 + 0x50);
      local_10 = param_1;
      cVar3 = (**(code **)(*plVar6 + 0x298))(plVar6,&local_18);
      if (cVar3 != '\0') goto LAB_1407c63a9;
    }
    uVar4 = 0;
  }
  else {
LAB_1407c63a9:
    uVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x5c) = uVar4;
  FUN_1407c36b0(param_1);
  if ((cVar1 == '\0') && (*(char *)(param_1 + 0x5c) != '\0')) {
    FUN_1407ddae0(param_1);
  }
  return;
}



// FUNCTION 1407c63e0 FUN_1407c63e0 body=1004 status=ok
// SIG undefined FUN_1407c63e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c63e0(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  byte bVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  int local_98;
  longlong local_90;
  longlong local_88 [8];
  longlong *local_48;
  int local_40;
  int local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1468387a8 ^ (ulonglong)auStack_b8;
  lVar12 = (longlong)*(int *)(param_1 + 0x44) * 0x140 + *(longlong *)(param_1 + 0x250);
  lVar4 = *(longlong *)(lVar12 + 0x70);
  lVar10 = (longlong)*(int *)(lVar12 + 0x78) * 0xa8 + lVar4;
  while( true ) {
    if (lVar4 == lVar10) {
      if (*(int *)(param_1 + 0x44) != -1) {
        lVar4 = *(longlong *)(param_1 + 0x168);
        if (*(longlong *)(param_1 + 0x168) == 0) {
          lVar4 = param_1 + 0xa8;
        }
        lVar10 = lVar4 + (longlong)*(int *)(param_1 + 0x170) * 0x18;
        for (; lVar4 != lVar10; lVar4 = lVar4 + 0x18) {
          lVar12 = FWeakObjectPtr::Get(lVar4);
          if (lVar12 != 0) {
            FUN_142227350(lVar12,0,1);
          }
        }
        *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
      }
      return;
    }
    if (*(int *)(lVar4 + 0x14) == *(int *)(param_1 + 0x40)) break;
    lVar4 = lVar4 + 0xa8;
  }
  plVar8 = (longlong *)0x0;
  local_3c = 0;
  local_40 = 0;
  local_48 = (longlong *)0x0;
  local_98 = 0;
  plVar7 = plVar8;
  if (0 < *(int *)(param_1 + 0x170)) {
    do {
      lVar4 = *(longlong *)(param_1 + 0x168);
      if (*(longlong *)(param_1 + 0x168) == 0) {
        lVar4 = param_1 + 0xa8;
      }
      lVar4 = lVar4 + (longlong)plVar7 * 0x18;
      local_90 = FWeakObjectPtr::Get(lVar4);
      plVar3 = (longlong *)FWeakObjectPtr::Get(lVar4 + 8);
      if (plVar7 == (longlong *)0x0) {
        plVar5 = *(longlong **)(lVar12 + 0x70);
        plVar11 = plVar5 + (longlong)*(int *)(lVar12 + 0x78) * 0x15;
        for (; (plVar6 = plVar8, plVar5 != plVar11 &&
               (plVar6 = plVar5, *(int *)((longlong)plVar5 + 0x14) != *(int *)(param_1 + 0x40)));
            plVar5 = plVar5 + 0x15) {
        }
      }
      else {
        iVar2 = *(int *)(lVar12 + 0x78);
        iVar1 = iVar2 + 1;
        *(int *)(lVar12 + 0x78) = iVar1;
        if (*(int *)(lVar12 + 0x7c) < iVar1) {
          TArray<FGeometryCacheMeshData,FDefaultAllocator>::ResizeGrow(lVar12 + 0x70);
        }
        lVar10 = (longlong)iVar2 * 0xa8;
        _guard_xfg_dispatch_icall_nop((void *)(*(longlong *)(lVar12 + 0x70) + lVar10),0,0xa8);
        plVar6 = (longlong *)(lVar10 + *(longlong *)(lVar12 + 0x70));
        *(undefined1 *)(plVar6 + 3) = 1;
      }
      *plVar6 = local_90;
      plVar6[10] = (longlong)plVar3;
      iVar2 = 0;
      if (plVar3 != (longlong *)0x0) {
        iVar2 = (**(code **)(*plVar3 + 0x288))(plVar3,0);
      }
      *(int *)(plVar6 + 0xd) = iVar2;
      if (*(char *)((longlong)plVar6 + 0x7d) == '\0') {
        bVar9 = *(byte *)(lVar4 + 0x10);
        if (*(byte *)(lVar4 + 0x10) <= *(byte *)((longlong)plVar6 + 0x7c)) {
          bVar9 = *(byte *)((longlong)plVar6 + 0x7c);
        }
        *(byte *)((longlong)plVar6 + 0x7c) = bVar9;
      }
      if (*(char *)((longlong)plVar6 + 0x7f) == '\0') {
        bVar9 = *(byte *)(lVar4 + 0x12);
        if (*(byte *)(lVar4 + 0x12) <= *(byte *)((longlong)plVar6 + 0x7e)) {
          bVar9 = *(byte *)((longlong)plVar6 + 0x7e);
        }
        *(byte *)((longlong)plVar6 + 0x7e) = bVar9;
      }
      if (*(char *)((longlong)plVar6 + 0x81) == '\0') {
        bVar9 = *(byte *)(lVar4 + 0x14);
        if (*(byte *)(lVar4 + 0x14) <= *(byte *)(plVar6 + 0x10)) {
          bVar9 = *(byte *)(plVar6 + 0x10);
        }
        *(byte *)(plVar6 + 0x10) = bVar9;
      }
      if (*(char *)((longlong)plVar6 + 0x7d) == '\0') {
        bVar9 = *(byte *)(lVar12 + 0x28);
        if (*(byte *)(lVar12 + 0x28) <= *(byte *)((longlong)plVar6 + 0x7c)) {
          bVar9 = *(byte *)((longlong)plVar6 + 0x7c);
        }
        *(byte *)((longlong)plVar6 + 0x7c) = bVar9;
      }
      if (*(char *)((longlong)plVar6 + 0x7f) == '\0') {
        bVar9 = *(byte *)(lVar12 + 0x2a);
        if (*(byte *)(lVar12 + 0x2a) <= *(byte *)((longlong)plVar6 + 0x7e)) {
          bVar9 = *(byte *)((longlong)plVar6 + 0x7e);
        }
        *(byte *)((longlong)plVar6 + 0x7e) = bVar9;
      }
      if (*(char *)((longlong)plVar6 + 0x81) == '\0') {
        bVar9 = *(byte *)(lVar12 + 0x2c);
        if (*(byte *)(lVar12 + 0x2c) <= *(byte *)(plVar6 + 0x10)) {
          bVar9 = *(byte *)(plVar6 + 0x10);
        }
        *(byte *)(plVar6 + 0x10) = bVar9;
      }
      *(int *)(param_1 + 0x23c) = *(int *)(param_1 + 0x23c) + iVar2;
      if (*plVar6 != 0) {
        FUN_1407d6ae0(param_1);
        iVar2 = local_40;
        lVar4 = (longlong)local_40;
        local_40 = local_40 + 1;
        if (local_3c < local_40) {
          TArray<UActionBase_*,TInlineAllocator<8,FDefaultAllocator>_>::ResizeGrow(local_88,iVar2);
        }
        plVar3 = local_88;
        if (local_48 != (longlong *)0x0) {
          plVar3 = local_48;
        }
        plVar3[lVar4] = local_90;
      }
      FUN_1407cf310(lVar12,plVar6);
      local_98 = local_98 + 1;
      plVar7 = (longlong *)((longlong)plVar7 + 1);
    } while (local_98 < *(int *)(param_1 + 0x170));
  }
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  plVar7 = local_88;
  if (local_48 != (longlong *)0x0) {
    plVar7 = plVar8;
  }
  plVar7 = (longlong *)((ulonglong)plVar7 | (ulonglong)local_48);
  plVar3 = (longlong *)((longlong)local_40 & 0x1fffffffffffffff);
  if (plVar7 + local_40 < plVar7) {
    plVar3 = plVar8;
  }
  if (plVar3 != (longlong *)0x0) {
    do {
      plVar6 = *(longlong **)(lVar12 + 0x70);
      plVar5 = plVar6 + (longlong)*(int *)(lVar12 + 0x78) * 0x15;
      for (; plVar6 != plVar5; plVar6 = plVar6 + 0x15) {
        if (*plVar6 == *plVar7) {
          if (plVar6 != (longlong *)0x0) {
            FUN_1407c61e0(lVar12);
          }
          break;
        }
      }
      plVar7 = plVar7 + 1;
      plVar8 = (longlong *)((longlong)plVar8 + 1);
    } while (plVar8 != plVar3);
  }
  if (local_48 == (longlong *)0x0) {
    return;
  }
  FMemory::Free();
  return;
}



// FUNCTION 1407c67d0 FUN_1407c67d0 body=507 status=ok
// SIG undefined FUN_1407c67d0(void)

void FUN_1407c67d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  int iVar4;
  void *_Src;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  void *pvVar8;
  longlong *plVar9;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (*(int *)(param_1 + 0x1d0) < 1) {
    plVar9 = *(longlong **)(param_1 + 0x1b8);
    if (*(longlong **)(param_1 + 0x1b8) == (longlong *)0x0) {
      plVar9 = (longlong *)(param_1 + 0xf8);
    }
    plVar2 = plVar9 + (longlong)*(int *)(param_1 + 0x1c0) * 3;
    for (; plVar9 != plVar2; plVar9 = plVar9 + 3) {
      pvVar8 = (void *)0x0;
      if (*plVar9 == DAT_14685c348) {
        iVar4 = (int)plVar9[2];
        _Src = (void *)plVar9[1];
        local_68 = (void *)0x0;
        local_60._4_4_ = (undefined4)((ulonglong)local_60 >> 0x20);
        if (iVar4 == 0) {
          local_50 = iVar4;
          local_4c = 0;
        }
        else {
          local_60._0_4_ = iVar4;
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_68,iVar4,0);
          pvVar8 = local_68;
          _guard_xfg_dispatch_icall_nop(local_68,_Src,(longlong)iVar4 * 2);
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
        plVar1 = (longlong *)(param_1 + 0x1c8);
        lVar5 = *plVar1;
        iVar4 = *(int *)(param_1 + 0x1d0);
        for (lVar7 = lVar5; lVar7 != lVar5 + (longlong)iVar4 * 0x18; lVar7 = lVar7 + 0x18) {
          cVar6 = FSoftObjectPath::operator==(lVar7,&local_48);
          if (cVar6 != '\0') {
            if ((int)((lVar7 - lVar5) / 0x18) != -1) goto LAB_1407c6981;
            break;
          }
        }
        iVar4 = *(int *)(param_1 + 0x1d0);
        *(int *)(param_1 + 0x1d0) = iVar4 + 1;
        if (*(int *)(param_1 + 0x1d4) < iVar4 + 1) {
          TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::
          ResizeGrow(plVar1,iVar4);
        }
        puVar3 = (undefined8 *)(*plVar1 + (longlong)iVar4 * 0x18);
        *puVar3 = local_48;
        puVar3[1] = 0;
        puVar3[1] = local_40;
        local_40 = 0;
        *(undefined4 *)(puVar3 + 2) = (undefined4)local_38;
        *(undefined4 *)((longlong)puVar3 + 0x14) = local_38._4_4_;
        local_38 = 0;
LAB_1407c6981:
        if (local_40 != 0) {
          FMemory::Free();
        }
      }
    }
  }
  return;
}



// FUNCTION 1407c69d0 FUN_1407c69d0 body=131 status=ok
// SIG undefined FUN_1407c69d0(void)

void FUN_1407c69d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x44) != -1) {
    do {
      lVar2 = *(longlong *)(param_1 + 0x168);
      if (*(longlong *)(param_1 + 0x168) == 0) {
        lVar2 = param_1 + 0xa8;
      }
      plVar1 = (longlong *)FWeakObjectPtr::Get(lVar2 + 8);
      bVar3 = plVar1 == (longlong *)0x0;
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x278))(plVar1,param_1 + 0x48);
        bVar3 = *(int *)(param_1 + 0x48) == 0x7fffffff;
      }
      if (bVar3) {
        FUN_1407c63e0();
      }
    } while (*(int *)(param_1 + 0x44) != -1);
  }
  return;
}



// FUNCTION 1407c6a60 FUN_1407c6a60 body=107 status=ok
// SIG undefined FUN_1407c6a60(void)

void FUN_1407c6a60(longlong param_1)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  FUN_1407c3470();
  puVar1 = *(undefined8 **)(param_1 + 0x920);
  uVar3 = 0;
  uVar2 = (longlong)*(int *)(param_1 + 0x928) & 0x1fffffffffffffff;
  if (puVar1 + *(int *)(param_1 + 0x928) < puVar1) {
    uVar2 = uVar3;
  }
  if (uVar2 != 0) {
    do {
      (**(code **)(*(longlong *)*puVar1 + 0x328))();
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 1;
    } while (uVar3 != uVar2);
  }
  return;
}



// FUNCTION 1407c6ad0 FUN_1407c6ad0 body=140 status=ok
// SIG undefined FUN_1407c6ad0(void)

void FUN_1407c6ad0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uStack_1c;
  uint uStack_14;
  
  iVar4 = *(int *)(param_2 + 0x808);
  uVar3 = *(undefined4 *)(param_3 + 8);
  *(int *)(param_2 + 0x808) = iVar4 + 1;
  if (*(int *)(param_2 + 0x80c) < iVar4 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
    ::ResizeGrow(param_2,iVar4);
  }
  lVar5 = *(longlong *)(param_2 + 0x800);
  if (*(longlong *)(param_2 + 0x800) == 0) {
    lVar5 = param_2;
  }
  puVar1 = (undefined8 *)(lVar5 + (longlong)iVar4 * 0x20);
  *puVar1 = param_1;
  puVar1[1] = CONCAT44(uStack_1c,uVar3) & 0xffffff00ffffffff;
  plVar2 = (longlong *)(lVar5 + 0x10 + (longlong)iVar4 * 0x20);
  *plVar2 = (ulonglong)uStack_14 << 0x20;
  plVar2[1] = 0;
  return;
}



// FUNCTION 1407c6b80 FUN_1407c6b80 body=58 status=ok
// SIG undefined FUN_1407c6b80(void)

void FUN_1407c6b80(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = FUN_1407cad30(param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_1407c6bc0(lVar1,param_2,param_3);
  }
  return;
}



// FUNCTION 1407c6bc0 FUN_1407c6bc0 body=785 status=ok
// SIG undefined FUN_1407c6bc0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c6bc0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  float fVar1;
  int iVar2;
  char cVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 *puVar6;
  int iVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong *plVar13;
  float fVar14;
  undefined1 auStack_968 [32];
  undefined8 local_948 [2];
  undefined1 local_938 [80];
  undefined8 local_8e8;
  float local_8e0 [2];
  undefined1 local_8d8 [16];
  longlong local_8c8 [4];
  longlong *local_8a8;
  int local_898;
  undefined8 local_888;
  undefined1 local_878 [2048];
  undefined1 *local_78;
  undefined8 local_70;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_968;
  puVar10 = (undefined8 *)0x0;
  plVar12 = *(longlong **)(param_1 + 0x30);
  fVar14 = 0.0;
  local_78 = (undefined1 *)0x0;
  plVar13 = plVar12 + (longlong)*(int *)(param_1 + 0x38) * 0x25;
  local_70 = 0;
  if (plVar12 != plVar13) {
    do {
      if (*plVar12 != 0) {
        if (*(int *)(param_3 + 10) != 0) {
          plVar8 = (longlong *)param_3[8];
          puVar4 = puVar10;
          if (plVar8 == (longlong *)0x0) {
            puVar4 = param_3 + 4;
          }
          if (puVar4 != (undefined8 *)0x0 || plVar8 != (longlong *)0x0) {
            puVar4 = puVar10;
            if (*(int *)(param_3 + 10) != 0) {
              if (plVar8 == (longlong *)0x0) {
                plVar8 = param_3 + 4;
              }
              if (plVar8 != (longlong *)0x0) {
                puVar4 = (undefined8 *)(**(code **)(*plVar8 + 8))();
              }
            }
            cVar3 = (*(code *)param_3[2])(puVar4);
            if (cVar3 == '\0') goto LAB_1407c6d8a;
          }
        }
        _guard_xfg_dispatch_icall_nop(local_8e0,0,0x68);
        local_8e8 = *param_3;
        lVar5 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_938,param_3 + 2);
        FGenericPlatformMemory::MemswapGreaterThan8(lVar5,local_8d8,0x50);
        if (*(int *)(lVar5 + 0x40) != 0) {
          plVar8 = *(longlong **)(lVar5 + 0x30);
          if (*(longlong **)(lVar5 + 0x30) == (longlong *)0x0) {
            plVar8 = (longlong *)(lVar5 + 0x10);
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (*(longlong *)(lVar5 + 0x30) != 0) {
          FMemory::Free();
        }
        local_888 = param_3[0xc];
        local_948[0] = 0xffffffffffffffff;
        local_8e0[0] = (float)FUN_142de77e0(plVar12 + 1,local_8e8,0,local_948);
        local_8e0[0] = local_8e0[0] * *(float *)(param_3 + 1);
        if (0.0 < local_8e0[0]) {
          fVar14 = fVar14 + local_8e0[0];
          (**(code **)(*(longlong *)*plVar12 + 0x2c0))((longlong *)*plVar12,local_878,&local_8e8);
        }
        if (local_898 != 0) {
          plVar8 = local_8c8;
          if (local_8a8 != (longlong *)0x0) {
            plVar8 = local_8a8;
          }
          if (plVar8 != (longlong *)0x0) {
            (**(code **)(*plVar8 + 0x10))(plVar8,0);
          }
        }
        if (local_8a8 != (longlong *)0x0) {
          FMemory::Free();
        }
      }
LAB_1407c6d8a:
      plVar12 = plVar12 + 0x25;
    } while (plVar12 != plVar13);
    if (0.0 < fVar14) {
      fVar1 = *(float *)(param_3 + 1);
      puVar6 = local_878;
      if (local_78 != (undefined1 *)0x0) {
        puVar6 = local_78;
      }
      puVar9 = puVar6 + (longlong)(int)local_70 * 0x20;
      for (; puVar6 != puVar9; puVar6 = puVar6 + 0x20) {
        *(float *)(puVar6 + 8) = (fVar1 / fVar14) * *(float *)(puVar6 + 8);
      }
    }
  }
  iVar2 = (int)local_70;
  lVar5 = (longlong)(int)local_70;
  if ((int)local_70 != 0) {
    iVar7 = *(int *)(param_2 + 0x808);
    if (*(int *)(param_2 + 0x80c) < iVar7 + (int)local_70) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,TInlineAllocator<64,FDefaultAllocator>_>
      ::ResizeTo(param_2);
      iVar7 = *(int *)(param_2 + 0x808);
    }
    puVar6 = local_878;
    if (local_78 != (undefined1 *)0x0) {
      puVar6 = local_78;
    }
    lVar11 = *(longlong *)(param_2 + 0x800);
    if (*(longlong *)(param_2 + 0x800) == 0) {
      lVar11 = param_2;
    }
    _guard_xfg_dispatch_icall_nop((void *)((longlong)iVar7 * 0x20 + lVar11),puVar6,lVar5 << 5);
    *(int *)(param_2 + 0x808) = *(int *)(param_2 + 0x808) + iVar2;
  }
  if (local_78 != (undefined1 *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}



// FUNCTION 1407c6ee0 FUN_1407c6ee0 body=49 status=ok
// SIG undefined FUN_1407c6ee0(void)

void FUN_1407c6ee0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x328))();
  FUN_1407c6bc0(uVar1,param_2,param_3);
  return;
}



// FUNCTION 1407c6f50 FUN_1407c6f50 body=854 status=ok
// SIG undefined FUN_1407c6f50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1407c6f50(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  longlong lVar11;
  byte bVar12;
  undefined1 auStack_1a8 [32];
  byte local_188;
  int local_184;
  int local_180;
  longlong local_178;
  longlong local_170;
  undefined8 local_168;
  longlong local_160;
  undefined1 local_158 [80];
  undefined1 local_108 [80];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined1 local_ac [4];
  undefined1 local_a8 [16];
  longlong local_98 [4];
  longlong *local_78;
  int local_68;
  undefined8 *local_58;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_1a8;
  plVar5 = (longlong *)param_3[0xc];
  if (plVar5 != (longlong *)0x0) {
    lVar6 = *plVar5;
    lVar1 = *(longlong *)(param_1 + 0x30);
    lVar11 = (longlong)*(int *)(lVar6 + 4) * 0x38;
    local_168 = *(undefined8 *)(lVar11 + *(longlong *)(lVar6 + 0x10));
    local_160 = plVar5[1];
    lVar3 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_158);
    _guard_xfg_dispatch_icall_nop(local_ac,0,100);
    local_b8 = *param_3;
    local_b0 = 0x3f800000;
    lVar4 = TFunction<void___cdecl(void)>::TFunction<void___cdecl(void)>(local_108,lVar3);
    FGenericPlatformMemory::MemswapGreaterThan8(lVar4,local_a8,0x50);
    iVar7 = 0;
    if (*(int *)(lVar4 + 0x40) != 0) {
      plVar5 = *(longlong **)(lVar4 + 0x30);
      if (*(longlong **)(lVar4 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar4 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(lVar4 + 0x30) != 0) {
      FMemory::Free();
    }
    local_58 = &local_168;
    if (*(int *)(lVar3 + 0x40) != 0) {
      plVar5 = *(longlong **)(lVar3 + 0x30);
      if (*(longlong **)(lVar3 + 0x30) == (longlong *)0x0) {
        plVar5 = (longlong *)(lVar3 + 0x10);
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (*(longlong *)(lVar3 + 0x30) != 0) {
      FMemory::Free();
    }
    plVar5 = *(longlong **)(lVar11 + lVar1);
    (**(code **)(*plVar5 + 0x2e0))(plVar5,param_2,&local_b8);
    lVar3 = (longlong)*(int *)(param_2 + 0x101);
    if (*(int *)(param_2 + 0x101) != 0) {
      local_170 = *(longlong *)(lVar6 + 0x10) + 0x18 + (longlong)*(int *)(lVar6 + 4) * 0x38;
      local_184 = 0;
      local_178 = lVar1 + 0x20 + lVar11;
      puVar9 = (undefined8 *)param_2[0x100];
      if ((undefined8 *)param_2[0x100] == (undefined8 *)0x0) {
        puVar9 = param_2;
      }
      cVar2 = FUN_1407cd500(local_170,local_178,*puVar9);
      bVar12 = cVar2 == '\0';
      lVar6 = 0;
      iVar10 = iVar7;
      do {
        lVar4 = local_170;
        lVar1 = local_178;
        lVar6 = lVar6 + 1;
        iVar8 = iVar7 + 1;
        local_188 = bVar12;
        local_180 = iVar7;
        if (lVar6 < lVar3) {
          lVar11 = lVar6 * 0x20;
          do {
            puVar9 = (undefined8 *)param_2[0x100];
            if ((undefined8 *)param_2[0x100] == (undefined8 *)0x0) {
              puVar9 = param_2;
            }
            cVar2 = FUN_1407cd500(lVar4,lVar1,*(undefined8 *)((longlong)puVar9 + lVar11));
            iVar10 = local_184;
            if ((bool)bVar12 != (cVar2 == '\0')) break;
            iVar8 = iVar8 + 1;
            lVar6 = lVar6 + 1;
            lVar11 = lVar11 + 0x20;
          } while (lVar6 < lVar3);
        }
        iVar7 = iVar8;
        bVar12 = local_188;
        iVar8 = iVar7 - local_180;
        if (local_188 != 0) {
          if (iVar10 != local_180) {
            puVar9 = (undefined8 *)param_2[0x100];
            if ((undefined8 *)param_2[0x100] == (undefined8 *)0x0) {
              puVar9 = param_2;
            }
            _guard_xfg_dispatch_icall_nop
                      (puVar9 + (longlong)iVar10 * 4,puVar9 + (longlong)local_180 * 4,
                       (longlong)iVar8 << 5);
          }
          iVar10 = iVar10 + iVar8;
          local_184 = iVar10;
        }
        bVar12 = bVar12 ^ 1;
      } while (lVar6 < lVar3);
      *(int *)(param_2 + 0x101) = iVar10;
      local_188 = bVar12;
    }
    if (local_68 != 0) {
      plVar5 = local_98;
      if (local_78 != (longlong *)0x0) {
        plVar5 = local_78;
      }
      if (plVar5 != (longlong *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,0);
      }
    }
    if (local_78 != (longlong *)0x0) {
      FMemory::Free();
    }
  }
  return;
}



// FUNCTION 1407c72b0 FUN_1407c72b0 body=405 status=ok
// SIG undefined FUN_1407c72b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_1407c72b0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x38
              ) < DAT_14685c530) {
    _Init_thread_header(&DAT_14685c530);
    if (DAT_14685c530 == -1) {
      FUN_14217daf0(&DAT_14685c4e0);
      FUN_14217bd20(&DAT_14685c510);
      FUN_14217bd20(&DAT_14685c518);
      FUN_14217bd20(&DAT_14685c520);
      FUN_14217bd20(&DAT_14685c528);
      uVar1 = DAT_14685c4e0;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"unit_spawn_origin",1);
      puVar2 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar2,0);
      uVar1 = DAT_14685c4e0;
      _DAT_14685c510 = *puVar2;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"unit_spawn_probability",1);
      puVar2 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar2,0);
      uVar1 = DAT_14685c4e0;
      _DAT_14685c518 = *puVar2;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"unit_spawn_wave",1);
      puVar2 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar2,0);
      uVar1 = DAT_14685c4e0;
      _DAT_14685c520 = *puVar2;
      puVar2 = (undefined8 *)FName::FName(local_res8,L"unit_spawn_loc",1);
      puVar2 = (undefined8 *)FUN_14218dc00(uVar1,local_res10,*puVar2,0);
      _DAT_14685c528 = *puVar2;
      _Init_thread_footer(&DAT_14685c530);
      return &DAT_14685c4e0;
    }
  }
  return &DAT_14685c4e0;
}



// FUNCTION 1407c7450 FUN_1407c7450 body=89 status=ok
// SIG undefined FUN_1407c7450(void)

undefined8 FUN_1407c7450(longlong *param_1)

{
  longlong lVar1;
  int local_res8 [8];
  
  if (param_1 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_1 + 0x148))();
    if (lVar1 != 0) {
      TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
      ::FindId(&DAT_14625a720,local_res8,lVar1);
      if ((local_res8[0] != -1) &&
         (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
        return *(undefined8 *)(lVar1 + 8);
      }
    }
  }
  return 0;
}



// FUNCTION 1407c74b0 FUN_1407c74b0 body=75 status=ok
// SIG undefined FUN_1407c74b0(void)

undefined8 FUN_1407c74b0(longlong param_1)

{
  longlong lVar1;
  int local_res8 [8];
  
  if (param_1 != 0) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(&DAT_14625a720,local_res8,param_1);
    if ((local_res8[0] != -1) &&
       (lVar1 = DAT_14625a720 + (longlong)local_res8[0] * 0x18, lVar1 != 0)) {
      return *(undefined8 *)(lVar1 + 8);
    }
  }
  return 0;
}



// FUNCTION 1407c7500 FUN_1407c7500 body=59 status=ok
// SIG undefined FUN_1407c7500(void)

undefined8 FUN_1407c7500(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x128))) {
    lVar2 = *(longlong *)(param_1 + 0x120);
    if (*(longlong *)(param_1 + 0x120) == 0) {
      lVar2 = param_1 + 0x60;
    }
    uVar1 = FWeakObjectPtr::Get(lVar2 + (longlong)param_2 * 0x18);
    return uVar1;
  }
  return 0;
}



// FUNCTION 1407c7540 FUN_1407c7540 body=283 status=ok
// SIG undefined FUN_1407c7540(void)

longlong * FUN_1407c7540(longlong *param_1,longlong *param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_38 [24];
  longlong local_20;
  
  lVar2 = (**(code **)(*param_1 + 0x310))(param_1,local_38);
  lVar3 = FWeakObjectPtr::Get(lVar2);
  lVar6 = 0;
  lVar5 = lVar6;
  if (lVar3 == 0) {
    LOCK();
    if (DAT_1464b56f4 == 0) {
      DAT_1464b56f4 = 0;
    }
    UNLOCK();
    if ((DAT_1464b56f4 == *(int *)(lVar2 + 8)) || (*(longlong *)(lVar2 + 0x10) == 0))
    goto LAB_1407c7631;
    lVar3 = FUN_141796df0();
    FWeakObjectPtr::operator=(lVar2,lVar3);
    if ((lVar3 != 0) || (DAT_1469e7e10 == '\0')) {
      LOCK();
      if (DAT_1464b56f4 == 0) {
        DAT_1464b56f4 = 0;
      }
      UNLOCK();
      *(int *)(lVar2 + 8) = DAT_1464b56f4;
    }
    lVar3 = FWeakObjectPtr::Get(lVar2);
    if (lVar3 == 0) goto LAB_1407c7631;
  }
  lVar2 = FUN_14171bfe0();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x90) < *(int *)(lVar2 + 0x90)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x88) + (longlong)*(int *)(lVar2 + 0x90) * 8) !=
      lVar2 + 0x88)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    lVar4 = FUN_1428dfc70();
    lVar2 = lVar3;
    do {
      lVar5 = lVar3;
      if (lVar2 == lVar4) break;
      lVar2 = *(longlong *)(lVar2 + 0x30);
      lVar5 = lVar6;
    } while (lVar2 != 0);
  }
LAB_1407c7631:
  *param_2 = lVar5;
  if (local_20 != 0) {
    FMemory::Free();
  }
  return param_2;
}



// FUNCTION 1407c7660 FUN_1407c7660 body=102 status=ok
// SIG undefined FUN_1407c7660(void)

undefined4 * FUN_1407c7660(undefined8 param_1,undefined4 *param_2)

{
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *param_2 = 0xffffffff;
  param_2[1] = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  param_2[8] = 0;
  if (0x7fffffff < (uint)param_2[9]) {
    TArray<wchar_t,FDefaultAllocator>::ResizeTo(param_2 + 6,0);
  }
  if (*(undefined2 **)(param_2 + 6) != (undefined2 *)0x0) {
    **(undefined2 **)(param_2 + 6) = 0;
  }
  param_2[2] = 0;
  return param_2;
}


