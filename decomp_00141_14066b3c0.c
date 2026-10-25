// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 14066b3c0 FUN_14066b3c0 body=82 status=ok
// SIG undefined FUN_14066b3c0(void)

void FUN_14066b3c0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146856fe8 == 0) {
    uVar1 = FUN_14066b0f0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146856fe8 = GetStaticStruct(FUN_14066b780,uVar2,L"GbxTestHierarchicalCommandL2",0x30,uVar1);
  }
  return;
}



// FUNCTION 14066b420 FUN_14066b420 body=82 status=ok
// SIG undefined FUN_14066b420(void)

void FUN_14066b420(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146856ff8 == 0) {
    uVar1 = FUN_14066b100();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146856ff8 = GetStaticStruct(FUN_14066b7b0,uVar2,L"GbxTestHierarchicalCommandL3",0x20,uVar1);
  }
  return;
}



// FUNCTION 14066b480 FUN_14066b480 body=82 status=ok
// SIG undefined FUN_14066b480(void)

void FUN_14066b480(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468571c0 == 0) {
    uVar1 = FUN_14066b110();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468571c0 = GetStaticStruct(FUN_14066b7e0,uVar2,L"TestInfoMaterial",0x20,uVar1);
  }
  return;
}



// FUNCTION 14066b4e0 FUN_14066b4e0 body=82 status=ok
// SIG undefined FUN_14066b4e0(void)

void FUN_14066b4e0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468571e0 == 0) {
    uVar1 = FUN_14066b140();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468571e0 = GetStaticStruct(FUN_14066b810,uVar2,L"TestInfoMesh",0x24,uVar1);
  }
  return;
}



// FUNCTION 14066b540 FUN_14066b540 body=82 status=ok
// SIG undefined FUN_14066b540(void)

void FUN_14066b540(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468571d0 == 0) {
    uVar1 = FUN_14066b130();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468571d0 = GetStaticStruct(FUN_14066b840,uVar2,L"TestInfoMeshLOD",0x1c,uVar1);
  }
  return;
}



// FUNCTION 14066b5a0 FUN_14066b5a0 body=82 status=ok
// SIG undefined FUN_14066b5a0(void)

void FUN_14066b5a0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_1468571f0 == 0) {
    uVar1 = FUN_14066b120();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_1468571f0 = GetStaticStruct(FUN_14066b870,uVar2,L"TestInfoMeshLODSummary",0x24,uVar1);
  }
  return;
}



// FUNCTION 14066b600 FUN_14066b600 body=82 status=ok
// SIG undefined FUN_14066b600(void)

void FUN_14066b600(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857210 == 0) {
    uVar1 = FUN_14066b150();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857210 = GetStaticStruct(FUN_14066b8a0,uVar2,L"TestInfoParticleEmitter",0x30,uVar1);
  }
  return;
}



// FUNCTION 14066b660 FUN_14066b660 body=82 status=ok
// SIG undefined FUN_14066b660(void)

void FUN_14066b660(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857200 == 0) {
    uVar1 = FUN_14066b160();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857200 = GetStaticStruct(FUN_14066b8d0,uVar2,L"TestInfoParticleSystem",0x60,uVar1);
  }
  return;
}



// FUNCTION 14066b6c0 FUN_14066b6c0 body=47 status=ok
// SIG undefined FUN_14066b6c0(void)

longlong FUN_14066b6c0(void)

{
  if (DAT_146857008 == 0) {
    FUN_141786440(&DAT_146857008,&PTR_FUN_144031040);
  }
  return DAT_146857008;
}



// FUNCTION 14066b6f0 FUN_14066b6f0 body=47 status=ok
// SIG undefined FUN_14066b6f0(void)

longlong FUN_14066b6f0(void)

{
  if (DAT_146857020 == 0) {
    FUN_1417866a0(&DAT_146857020,&PTR_Z_Construct_UPackage__Script_Engine_1462252e0);
  }
  return DAT_146857020;
}



// FUNCTION 14066b720 FUN_14066b720 body=47 status=ok
// SIG undefined FUN_14066b720(void)

longlong FUN_14066b720(void)

{
  if (DAT_146857018 == 0) {
    FUN_1417866a0(&DAT_146857018,&PTR_Z_Construct_UPackage__Script_Engine_146225290);
  }
  return DAT_146857018;
}



// FUNCTION 14066b750 FUN_14066b750 body=47 status=ok
// SIG undefined FUN_14066b750(void)

longlong FUN_14066b750(void)

{
  if (DAT_146856fe0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146856fe0,&PTR_Z_Construct_UPackage__Script_Engine_146220870);
  }
  return DAT_146856fe0;
}



// FUNCTION 14066b780 FUN_14066b780 body=47 status=ok
// SIG undefined FUN_14066b780(void)

longlong FUN_14066b780(void)

{
  if (DAT_146856ff0 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146856ff0,&PTR_Z_Construct_UPackage__Script_Engine_1462209a0);
  }
  return DAT_146856ff0;
}



// FUNCTION 14066b7b0 FUN_14066b7b0 body=47 status=ok
// SIG undefined FUN_14066b7b0(void)

longlong FUN_14066b7b0(void)

{
  if (DAT_146857000 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857000,&PTR_Z_Construct_UPackage__Script_Engine_146220a20);
  }
  return DAT_146857000;
}



// FUNCTION 14066b7e0 FUN_14066b7e0 body=47 status=ok
// SIG undefined FUN_14066b7e0(void)

longlong FUN_14066b7e0(void)

{
  if (DAT_1468571c8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468571c8,&PTR_Z_Construct_UPackage__Script_Engine_146224460);
  }
  return DAT_1468571c8;
}



// FUNCTION 14066b810 FUN_14066b810 body=47 status=ok
// SIG undefined FUN_14066b810(void)

longlong FUN_14066b810(void)

{
  if (DAT_1468571e8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468571e8,&PTR_Z_Construct_UPackage__Script_Engine_1462246a0);
  }
  return DAT_1468571e8;
}



// FUNCTION 14066b840 FUN_14066b840 body=47 status=ok
// SIG undefined FUN_14066b840(void)

longlong FUN_14066b840(void)

{
  if (DAT_1468571d8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468571d8,&PTR_Z_Construct_UPackage__Script_Engine_146224560);
  }
  return DAT_1468571d8;
}



// FUNCTION 14066b870 FUN_14066b870 body=47 status=ok
// SIG undefined FUN_14066b870(void)

longlong FUN_14066b870(void)

{
  if (DAT_1468571f8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_1468571f8,&PTR_Z_Construct_UPackage__Script_Engine_146224790);
  }
  return DAT_1468571f8;
}



// FUNCTION 14066b8a0 FUN_14066b8a0 body=47 status=ok
// SIG undefined FUN_14066b8a0(void)

longlong FUN_14066b8a0(void)

{
  if (DAT_146857218 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857218,&PTR_Z_Construct_UPackage__Script_Engine_146225240);
  }
  return DAT_146857218;
}



// FUNCTION 14066b8d0 FUN_14066b8d0 body=47 status=ok
// SIG undefined FUN_14066b8d0(void)

longlong FUN_14066b8d0(void)

{
  if (DAT_146857208 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857208,&PTR_Z_Construct_UPackage__Script_Engine_146224cd0);
  }
  return DAT_146857208;
}



// FUNCTION 14066b900 FUN_14066b900 body=274 status=ok
// SIG undefined FUN_14066b900(void)

void FUN_14066b900(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = (longlong *)0x0;
  local_20 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
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
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066ba20 FUN_14066ba20 body=215 status=ok
// SIG undefined FUN_14066ba20(void)

void FUN_14066ba20(undefined8 param_1,longlong param_2)

{
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((int)local_28 + 0x10);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066bb00 execCheckPermission body=147 status=ok
// SIG undefined execCheckPermission(void)

void UAndroidPermissionFunctionLibrary::execCheckPermission
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
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
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066bba0 execPutSecureByte body=210 status=ok
// SIG undefined execPutSecureByte(void)

void UMagicLeapSecureStorage::execPutSecureByte
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
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
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_18,local_res10[0]);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066bc80 FUN_14066bc80 body=724 status=ok
// SIG undefined FUN_14066bc80(void)

void FUN_14066bc80(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int local_res10 [2];
  undefined1 *local_res18;
  int local_res20 [2];
  int local_98;
  int local_94;
  void *local_90;
  ulonglong local_88;
  void *local_80;
  ulonglong local_78;
  longlong local_70 [2];
  void *local_60;
  int local_58;
  undefined4 local_54;
  void *local_50;
  int local_48;
  undefined4 local_44;
  
  local_70[0] = 0;
  local_70[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  local_res18 = param_3;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  plVar4 = local_70;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar5 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar6 = local_res20[0] != 0;
  local_98 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  bVar7 = local_98 != 0;
  local_94 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_94);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_94);
  }
  pvVar1 = local_90;
  bVar8 = local_94 != 0;
  local_60 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_88;
  local_58 = (int)local_88;
  if ((int)local_88 == 0) {
    local_54 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_60,local_88 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_60,pvVar1,lVar3 * 2);
  }
  pvVar1 = local_80;
  lVar3 = (longlong)(int)local_78;
  local_50 = (void *)0x0;
  local_48 = (int)local_78;
  if ((int)local_78 == 0) {
    local_44 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_78 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_50,pvVar1,lVar3 * 2);
  }
  uVar2 = FUN_140642f20(plVar4,&local_50,&local_60,bVar5,bVar6,bVar7,bVar8);
  *local_res18 = uVar2;
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_70[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066bf60 FUN_14066bf60 body=230 status=ok
// SIG undefined FUN_14066bf60(void)

void FUN_14066bf60(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140643060(local_28 + 2,local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066c050 execGetInputDescriptorForCheat body=200 status=ok
// SIG undefined execGetInputDescriptorForCheat(void)

void UCheatManagerGunfire::execGetInputDescriptorForCheat
               (undefined8 param_1,longlong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined8 local_res10;
  longlong *local_18;
  int local_10;
  
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
  uVar1 = GetAllCheats(&local_18,local_res10);
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(param_3,uVar1);
  plVar2 = local_18;
  for (; local_10 != 0; local_10 = local_10 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  return;
}



// FUNCTION 14066c120 execConcat_StrStr body=296 status=ok
// SIG undefined execConcat_StrStr(void)

void UKismetStringLibrary::execConcat_StrStr(undefined8 param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  longlong local_38 [6];
  
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  plVar1 = (longlong *)UCheatManagerGunfire::GetAllCheats(local_38 + 4,local_38 + 2,local_38);
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
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066c250 FUN_14066c250 body=1038 status=ok
// SIG undefined FUN_14066c250(void)

void FUN_14066c250(undefined8 param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 *puVar4;
  int iVar5;
  longlong *plVar6;
  longlong **pplVar7;
  longlong **pplVar8;
  bool bVar9;
  bool bVar10;
  int local_c8;
  int local_c4;
  longlong *local_c0;
  ulonglong local_b8;
  longlong *local_b0;
  undefined8 local_a8;
  longlong *local_a0;
  undefined8 local_98;
  void *local_90;
  ulonglong local_88;
  void *local_80;
  ulonglong local_78;
  void *local_70;
  int local_68;
  undefined4 local_64;
  void *local_60;
  int local_58;
  undefined4 local_54;
  undefined8 *local_50;
  int local_48;
  undefined4 local_44;
  
  local_a0 = (longlong *)0x0;
  local_98 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_a0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_a0);
  }
  local_b0 = (longlong *)0x0;
  local_a8 = 0;
  pplVar8 = &local_a0;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar8 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_b0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_b0);
  }
  local_c0 = (longlong *)0x0;
  local_b8 = 0;
  pplVar7 = &local_b0;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar7 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c0);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c0);
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_90);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_90);
  }
  local_c8 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c8);
  }
  bVar9 = local_c8 != 0;
  local_c4 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_c4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_c4);
  }
  pvVar2 = local_90;
  bVar10 = local_c4 != 0;
  local_70 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_88;
  local_68 = (int)local_88;
  if ((int)local_88 == 0) {
    local_64 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_70,local_88 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_70,pvVar2,lVar3 << 3);
  }
  pvVar2 = local_80;
  lVar3 = (longlong)(int)local_78;
  local_60 = (void *)0x0;
  local_58 = (int)local_78;
  if ((int)local_78 == 0) {
    local_54 = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_60,local_78 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_60,pvVar2,lVar3 << 3);
  }
  plVar6 = local_c0;
  iVar5 = (int)local_b8;
  local_50 = (undefined8 *)0x0;
  local_48 = (int)local_b8;
  if ((int)local_b8 == 0) {
    local_44 = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_50,local_b8 & 0xffffffff,0);
    puVar4 = local_50;
    do {
      *puVar4 = 0;
      iVar1 = (int)plVar6[1];
      pvVar2 = (void *)*plVar6;
      *(int *)(puVar4 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar4,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar4,pvVar2,(longlong)iVar1 * 2);
      }
      puVar4 = puVar4 + 2;
      plVar6 = plVar6 + 2;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_140643f00(pplVar8,pplVar7,&local_50,&local_60,&local_70,bVar9,bVar10);
  if (local_90 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_80 != (void *)0x0) {
    FMemory::Free();
  }
  plVar6 = local_c0;
  for (iVar5 = (int)local_b8; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_c0 != (longlong *)0x0) {
    FMemory::Free(local_c0);
  }
  plVar6 = local_b0;
  for (iVar5 = (int)local_a8; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_b0 != (longlong *)0x0) {
    FMemory::Free(local_b0);
  }
  plVar6 = local_a0;
  for (iVar5 = (int)local_98; iVar5 != 0; iVar5 = iVar5 + -1) {
    if (*plVar6 != 0) {
      FMemory::Free();
    }
    plVar6 = plVar6 + 2;
  }
  if (local_a0 != (longlong *)0x0) {
    FMemory::Free(local_a0);
  }
  return;
}



// FUNCTION 14066c660 FUN_14066c660 body=956 status=ok
// SIG undefined FUN_14066c660(void)

void FUN_14066c660(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  longlong **pplVar4;
  longlong **pplVar5;
  longlong **pplVar6;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_68 = (longlong *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_78 = (longlong *)0x0;
  local_70 = 0;
  pplVar4 = &local_68;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar4 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_88 = (longlong *)0x0;
  local_80 = 0;
  pplVar6 = &local_78;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar6 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_98 = (longlong *)0x0;
  local_90 = 0;
  pplVar5 = &local_88;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar5 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_98);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_98);
  }
  local_28 = 0;
  local_20 = 0;
  pplVar2 = &local_98;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = 0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = 0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14064dad0(pplVar4,pplVar6,pplVar5,pplVar2,&local_28,&local_38,&local_48,&local_58);
  if (local_58 != 0) {
    FMemory::Free();
  }
  if (local_48 != 0) {
    FMemory::Free();
  }
  if (local_38 != 0) {
    FMemory::Free();
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  plVar1 = local_98;
  for (iVar3 = (int)local_90; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_98 != (longlong *)0x0) {
    FMemory::Free(local_98);
  }
  plVar1 = local_88;
  for (iVar3 = (int)local_80; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_88 != (longlong *)0x0) {
    FMemory::Free(local_88);
  }
  plVar1 = local_78;
  for (iVar3 = (int)local_70; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_78 != (longlong *)0x0) {
    FMemory::Free(local_78);
  }
  plVar1 = local_68;
  for (iVar3 = (int)local_60; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}



// FUNCTION 14066ca20 execPlayAnimations body=264 status=ok
// SIG undefined execPlayAnimations(void)

void UChromaSDKPluginBPLibrary::execPlayAnimations(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  int local_res10 [2];
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
  local_res10[0] = 0;
  pplVar2 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14064f340(pplVar2,local_res10[0] != 0);
  plVar1 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
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



// FUNCTION 14066cb30 FUN_14066cb30 body=230 status=ok
// SIG undefined FUN_14066cb30(void)

void FUN_14066cb30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14064fad0(local_28 + 2,plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066cc20 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14064fcf0(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066cd00 FUN_14066cd00 body=223 status=ok
// SIG undefined FUN_14066cd00(void)

void FUN_14066cd00(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10;
  longlong local_18 [2];
  
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
  local_res10 = 0;
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1406514e0(plVar1,local_res10);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066cde0 FUN_14066cde0 body=273 status=ok
// SIG undefined FUN_14066cde0(void)

void FUN_14066cde0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [2];
  undefined8 local_res20;
  longlong local_18 [2];
  
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140651970(local_res20,local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066cf00 FUN_14066cf00 body=413 status=ok
// SIG undefined FUN_14066cf00(void)

void FUN_14066cf00(undefined8 param_1,longlong param_2)

{
  longlong **pplVar1;
  longlong *plVar2;
  int iVar3;
  longlong *plVar4;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_18 = 0;
  local_10 = 0;
  pplVar1 = &local_38;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar1 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  local_20 = 0;
  plVar2 = &local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  plVar4 = &local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140652360(pplVar1,plVar2,plVar4);
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  plVar2 = local_38;
  for (iVar3 = (int)local_30; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar2 != 0) {
      FMemory::Free();
    }
    plVar2 = plVar2 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  return;
}



// FUNCTION 14066d0a0 FUN_14066d0a0 body=210 status=ok
// SIG undefined FUN_14066d0a0(void)

void FUN_14066d0a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_28 [4];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140653290(local_res10[0],plVar1);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066d180 FUN_14066d180 body=251 status=ok
// SIG undefined FUN_14066d180(void)

void FUN_14066d180(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_38 [8];
  undefined8 local_30;
  
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
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  puVar1 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140653f80(local_res20,local_res10[0],puVar1);
  return;
}



// FUNCTION 14066d280 FUN_14066d280 body=250 status=ok
// SIG undefined FUN_14066d280(void)

void FUN_14066d280(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_68 [12];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar1 = local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140652f90(local_res10[0],plVar1);
  if (local_68[2] != 0) {
    FMemory::Free();
  }
  if (local_68[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066d380 FUN_14066d380 body=413 status=ok
// SIG undefined FUN_14066d380(void)

void FUN_14066d380(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 local_res10;
  longlong local_78 [3];
  undefined1 local_60 [40];
  undefined1 local_38 [48];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  DSP::CAkDistortion::CAkDistortion(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar1 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_14063ebd0(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  puVar2 = local_38;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  plVar3 = local_78;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140653fa0(local_res10,puVar1,puVar2,plVar3);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066d520 FUN_14066d520 body=256 status=ok
// SIG undefined FUN_14066d520(void)

void FUN_14066d520(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_28 [32];
  
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
  FUN_14063ebe0(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140653ff0(local_res20,local_res10[0],puVar1);
  return;
}



// FUNCTION 14066d620 FUN_14066d620 body=413 status=ok
// SIG undefined FUN_14066d620(void)

void FUN_14066d620(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  undefined8 local_res10;
  undefined1 local_88 [40];
  undefined1 local_60 [40];
  longlong local_38 [6];
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  DSP::CAkDistortion::CAkDistortion(local_88);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_88);
  }
  puVar1 = local_88;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_14063ebd0(local_60);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
  }
  puVar2 = local_60;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar2 = *(undefined1 **)(param_2 + 0x38);
  }
  FUN_14063ec20(local_38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar3 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar3 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140654000(local_res10,puVar1,puVar2,plVar3);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066d7c0 FUN_14066d7c0 body=256 status=ok
// SIG undefined FUN_14066d7c0(void)

void FUN_14066d7c0(undefined8 param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined4 local_res10 [4];
  undefined8 local_res20;
  undefined1 local_28 [32];
  
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
  FUN_14063ebe0(local_28);
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  puVar1 = local_28;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140654090(local_res20,local_res10[0],puVar1);
  return;
}



// FUNCTION 14066d8c0 FUN_14066d8c0 body=220 status=ok
// SIG undefined FUN_14066d8c0(void)

void FUN_14066d8c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_38 [6];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  thunk_FUN_140653d20(local_res10[0],plVar1);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066d9a0 FUN_14066d9a0 body=128 status=ok
// SIG undefined FUN_14066d9a0(void)

void FUN_14066d9a0(undefined8 param_1,longlong param_2,undefined8 *param_3)

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
  uVar1 = FUN_1406551f0(local_res10);
  *param_3 = uVar1;
  return;
}



// FUNCTION 14066da20 execPutSecureString body=230 status=ok
// SIG undefined execPutSecureString(void)

void UMagicLeapSecureStorage::execPutSecureString
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_28 + 2,local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066db10 FUN_14066db10 body=293 status=ok
// SIG undefined FUN_14066db10(void)

void FUN_14066db10(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 local_res10 [8];
  longlong local_28 [4];
  
  local_28[2] = 0;
  local_28[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28 + 2);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_28[0] = 0;
  local_28[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(local_28 + 2,local_res10[0],local_28);
  *param_3 = uVar1;
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_28[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066dc40 FUN_14066dc40 body=41 status=ok
// SIG undefined FUN_14066dc40(void)

void FUN_14066dc40(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread();
  *param_3 = uVar1;
  return;
}



// FUNCTION 14066dc70 FUN_14066dc70 body=210 status=ok
// SIG undefined FUN_14066dc70(void)

void FUN_14066dc70(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140656000(local_18,puVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066dd50 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140656110(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066ddf0 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140656180(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066de90 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1406561f0(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066df30 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_140656260(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066dfd0 execGetInstalledContent body=148 status=ok
// SIG undefined execGetInstalledContent(void)

void UMobilePatchingLibrary::execGetInstalledContent
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
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
  uVar1 = FUN_1406562d0(local_18);
  *param_3 = uVar1;
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066e070 FUN_14066e070 body=210 status=ok
// SIG undefined FUN_14066e070(void)

void FUN_14066e070(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 local_res10 [3];
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
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  puVar1 = local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar1 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140656340(local_18,puVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066e150 FUN_14066e150 body=353 status=ok
// SIG undefined FUN_14066e150(void)

void FUN_14066e150(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_18 = 0;
  local_10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_28 = 0;
  local_20 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = (longlong *)0x0;
  local_30 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((long)&local_18);
  plVar1 = local_38;
  for (iVar2 = (int)local_30; iVar2 != 0; iVar2 = iVar2 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  if (local_28 != 0) {
    FMemory::Free();
  }
  if (local_18 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066e2c0 execRecordEventWithAttribute body=298 status=ok
// SIG undefined execRecordEventWithAttribute(void)

void UAnalyticsBlueprintLibrary::execRecordEventWithAttribute(undefined8 param_1,longlong param_2)

{
  longlong local_38 [6];
  
  local_38[4] = 0;
  local_38[5] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 4);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 4);
  }
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  AK::MemoryMgr::StartProfileThreadUsage((int)local_38 + 0x20);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  if (local_38[4] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066e3f0 FUN_14066e3f0 body=493 status=ok
// SIG undefined FUN_14066e3f0(void)

void FUN_14066e3f0(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  void *pvVar1;
  undefined1 uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong **pplVar5;
  int iVar6;
  longlong *local_68;
  undefined8 local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = (longlong *)0x0;
  local_60 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pvVar1 = local_58;
  local_38 = (void *)0x0;
  pplVar5 = &local_68;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar5 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar3 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar3 * 2);
  }
  pvVar1 = local_48;
  lVar3 = (longlong)(int)local_40;
  local_28 = (void *)0x0;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar3 * 2);
  }
  uVar2 = FUN_1406588e0(&local_28,&local_38,pplVar5);
  *param_3 = uVar2;
  plVar4 = local_68;
  for (iVar6 = (int)local_60; iVar6 != 0; iVar6 = iVar6 + -1) {
    if (*plVar4 != 0) {
      FMemory::Free();
    }
    plVar4 = plVar4 + 2;
  }
  if (local_68 != (longlong *)0x0) {
    FMemory::Free(local_68);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066e5e0 FUN_14066e5e0 body=522 status=ok
// SIG undefined FUN_14066e5e0(void)

void FUN_14066e5e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong *plStack_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_88 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_88);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_88);
  }
  local_68 = 0;
  puVar6 = &local_88;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_60 = 0;
  plStack_58 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_80 = 0xffffffffffffffff;
  uStack_78 = 0;
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_80);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_80);
  }
  local_38 = (undefined4)local_80;
  uStack_34 = local_80._4_4_;
  uStack_30 = (undefined4)uStack_78;
  uStack_2c = uStack_78._4_4_;
  local_28 = local_70;
  local_50 = local_68;
  local_48 = local_60;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_40 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_58 + 1) = (int)plStack_58[1] + 1;
    UNLOCK();
  }
  FUN_14065bf20(puVar6,&local_50,local_res20[0],local_res10[0],&local_38);
  plVar5 = plStack_58;
  if (plStack_58 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_58 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_58)(plStack_58);
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



// FUNCTION 14066e7f0 FUN_14066e7f0 body=415 status=ok
// SIG undefined FUN_14066e7f0(void)

void FUN_14066e7f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong *plStack_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  
  local_58 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_50 = 0;
  puVar6 = &local_58;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar6 = *(undefined8 **)(param_2 + 0x38);
  }
  local_48 = 0;
  plStack_40 = (longlong *)0x0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_38 = local_50;
  local_30 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    *(int *)(plStack_40 + 1) = (int)plStack_40[1] + 1;
    UNLOCK();
  }
  FUN_14065c230(puVar6,&local_38,local_res10[0],local_res20[0]);
  plVar5 = plStack_40;
  if (plStack_40 != (longlong *)0x0) {
    LOCK();
    plVar1 = plStack_40 + 1;
    lVar4 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar4 == 1) {
      (**(code **)*plStack_40)(plStack_40);
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



// FUNCTION 14066e990 FUN_14066e990 body=359 status=ok
// SIG undefined FUN_14066e990(void)

void FUN_14066e990(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_48;
  bVar3 = local_res10[0] != 0;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar2 << 2);
  }
  plVar1 = (longlong *)FUN_14065c5d0(local_28,&local_38,bVar3);
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066eb00 FUN_14066eb00 body=359 status=ok
// SIG undefined FUN_14066eb00(void)

void FUN_14066eb00(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_48;
  bVar3 = local_res10[0] != 0;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(&local_38,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar2 << 2);
  }
  plVar1 = (longlong *)FUN_14065c7b0(local_28,&local_38,bVar3);
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066ec70 FUN_14066ec70 body=359 status=ok
// SIG undefined FUN_14066ec70(void)

void FUN_14066ec70(undefined8 param_1,longlong param_2,longlong *param_3)

{
  void *_Src;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  int local_res10 [2];
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  longlong local_28 [2];
  
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  _Src = local_48;
  bVar3 = local_res10[0] != 0;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_30 = (int)local_40;
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
              (&local_38,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,_Src,lVar2 << 3);
  }
  plVar1 = (longlong *)FUN_14065c810(local_28,&local_38,bVar3);
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
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066ede0 FUN_14066ede0 body=488 status=ok
// SIG undefined FUN_14066ede0(void)

void FUN_14066ede0(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong *plVar5;
  bool bVar6;
  int local_res10 [2];
  longlong *local_58;
  ulonglong local_50;
  undefined8 *local_48;
  int local_40;
  undefined4 local_3c;
  longlong *local_38;
  int local_30;
  
  local_58 = (longlong *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  plVar5 = local_58;
  bVar6 = local_res10[0] != 0;
  iVar4 = (int)local_50;
  local_48 = (undefined8 *)0x0;
  local_40 = (int)local_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  if ((int)local_50 == 0) {
    local_3c = 0;
  }
  else {
    TArray<FString,FDefaultAllocator>::ResizeForCopy(&local_48,local_50 & 0xffffffff,0);
    puVar3 = local_48;
    do {
      *puVar3 = 0;
      iVar1 = (int)plVar5[1];
      _Src = (void *)*plVar5;
      *(int *)(puVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
      }
      else {
        TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(puVar3,iVar1,0);
        _guard_xfg_dispatch_icall_nop((void *)*puVar3,_Src,(longlong)iVar1 * 2);
      }
      puVar3 = puVar3 + 2;
      plVar5 = plVar5 + 2;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  uVar2 = FUN_14065c9f0(&local_38,&local_48,bVar6);
  TArray<FChromaSDKColors,FDefaultAllocator>::operator=(param_3,uVar2);
  plVar5 = local_38;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_38 != (longlong *)0x0) {
    FMemory::Free(local_38);
  }
  plVar5 = local_58;
  for (iVar4 = (int)local_50; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar5 != 0) {
      FMemory::Free();
    }
    plVar5 = plVar5 + 2;
  }
  if (local_58 != (longlong *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}



// FUNCTION 14066efd0 FUN_14066efd0 body=393 status=ok
// SIG undefined FUN_14066efd0(void)

void FUN_14066efd0(undefined8 param_1,longlong param_2)

{
  void *_Src;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  int local_res10 [4];
  int local_res20 [2];
  undefined8 local_58;
  void *local_50;
  ulonglong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_50 = (void *)0x0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  _Src = local_50;
  bVar3 = local_res20[0] != 0;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar1 = (longlong)(int)local_48;
  local_38 = (int)local_48;
  if ((int)local_48 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_48 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,_Src,lVar1 * 2);
  }
  FUN_14065ce30(&local_40,local_58,bVar2,bVar3);
  if (local_50 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 14066f170 FUN_14066f170 body=162 status=ok
// SIG undefined FUN_14066f170(void)

longlong FUN_14066f170(void)

{
  if (DAT_146857488 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"GbxTestPlanCommandlet",&DAT_146857488,FUN_140447710,0x80,
                  0x10000008,0,L"Engine",&LAB_140670120,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  thunk_FUN_14291cef0,&LAB_140447700,0);
  }
  return DAT_146857488;
}



// FUNCTION 14066f240 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UCurveFloat::GetPrivateStaticClass(void)

{
  if (DAT_146857538 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"TestPolicyContent",&DAT_146857538,
                  StaticRegisterNativesUCurveFloat,0xb0,0x10000000,0,L"Engine",&LAB_140670140,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14066fd50,&LAB_140447700,0);
  }
  return DAT_146857538;
}



// FUNCTION 14066f2f0 FUN_14066f2f0 body=47 status=ok
// SIG undefined FUN_14066f2f0(void)

longlong FUN_14066f2f0(void)

{
  if (DAT_146857530 == 0) {
    FUN_141786440(&DAT_146857530,&PTR_GetPrivateStaticClass_144033630);
  }
  return DAT_146857530;
}



// FUNCTION 14066f320 FUN_14066f320 body=47 status=ok
// SIG undefined FUN_14066f320(void)

longlong FUN_14066f320(void)

{
  if (DAT_146857528 == 0) {
    FUN_141786a30(&DAT_146857528,&PTR_FUN_146228c20);
  }
  return DAT_146857528;
}



// FUNCTION 14066f360 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UViewport::GetPrivateStaticClass(void)

{
  if (DAT_146857580 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"TestPolicySimulation",&DAT_146857580,
                  StaticRegisterNativesUViewport,0x140,0x10000000,0,L"Engine",&LAB_140670150,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  FUN_14066fd50,&LAB_140447700,0);
  }
  return DAT_146857580;
}



// FUNCTION 14066f410 FUN_14066f410 body=47 status=ok
// SIG undefined FUN_14066f410(void)

longlong FUN_14066f410(void)

{
  if (DAT_146857578 == 0) {
    FUN_141786440(&DAT_146857578,&PTR_GetPrivateStaticClass_144033b40);
  }
  return DAT_146857578;
}



// FUNCTION 14066f440 FUN_14066f440 body=47 status=ok
// SIG undefined FUN_14066f440(void)

longlong FUN_14066f440(void)

{
  if (DAT_146857540 == 0) {
    FUN_141786a30(&DAT_146857540,&PTR_FUN_146228ce0);
  }
  return DAT_146857540;
}



// FUNCTION 14066f470 FUN_14066f470 body=47 status=ok
// SIG undefined FUN_14066f470(void)

longlong FUN_14066f470(void)

{
  if (DAT_146857548 == 0) {
    FUN_141786a30(&DAT_146857548,&PTR_FUN_146228d70);
  }
  return DAT_146857548;
}



// FUNCTION 14066f4a0 FUN_14066f4a0 body=47 status=ok
// SIG undefined FUN_14066f4a0(void)

longlong FUN_14066f4a0(void)

{
  if (DAT_146857550 == 0) {
    FUN_141786a30(&DAT_146857550,&PTR_FUN_146228df0);
  }
  return DAT_146857550;
}



// FUNCTION 14066f4d0 FUN_14066f4d0 body=47 status=ok
// SIG undefined FUN_14066f4d0(void)

longlong FUN_14066f4d0(void)

{
  if (DAT_146857558 == 0) {
    FUN_141786a30(&DAT_146857558,&PTR_FUN_146228f60);
  }
  return DAT_146857558;
}



// FUNCTION 14066f500 FUN_14066f500 body=47 status=ok
// SIG undefined FUN_14066f500(void)

longlong FUN_14066f500(void)

{
  if (DAT_146857560 == 0) {
    FUN_141786a30(&DAT_146857560,&PTR_FUN_146229160);
  }
  return DAT_146857560;
}



// FUNCTION 14066f530 FUN_14066f530 body=47 status=ok
// SIG undefined FUN_14066f530(void)

longlong FUN_14066f530(void)

{
  if (DAT_146857568 == 0) {
    FUN_141786a30(&DAT_146857568,&PTR_FUN_1462292a0);
  }
  return DAT_146857568;
}



// FUNCTION 14066f560 FUN_14066f560 body=47 status=ok
// SIG undefined FUN_14066f560(void)

longlong FUN_14066f560(void)

{
  if (DAT_146857570 == 0) {
    FUN_141786a30(&DAT_146857570,&PTR_FUN_1462292e0);
  }
  return DAT_146857570;
}



// FUNCTION 14066f590 FUN_14066f590 body=53 status=ok
// SIG undefined FUN_14066f590(void)

void FUN_14066f590(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_1440356a8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14066f5e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146857388 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"TestLibraryPerformance",&DAT_146857388,FUN_140670820,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146857388;
}



// FUNCTION 14066f690 FUN_14066f690 body=47 status=ok
// SIG undefined FUN_14066f690(void)

longlong FUN_14066f690(void)

{
  if (DAT_146857380 == 0) {
    FUN_141786440(&DAT_146857380,&PTR_GetPrivateStaticClass_144033e00);
  }
  return DAT_146857380;
}



// FUNCTION 14066f6c0 FUN_14066f6c0 body=47 status=ok
// SIG undefined FUN_14066f6c0(void)

longlong FUN_14066f6c0(void)

{
  if (DAT_146857370 == 0) {
    FUN_141786a30(&DAT_146857370,&PTR_FUN_1462259c0);
  }
  return DAT_146857370;
}



// FUNCTION 14066f6f0 FUN_14066f6f0 body=47 status=ok
// SIG undefined FUN_14066f6f0(void)

longlong FUN_14066f6f0(void)

{
  if (DAT_146857378 == 0) {
    FUN_141786a30(&DAT_146857378,&PTR_FUN_146225ac0);
  }
  return DAT_146857378;
}



// FUNCTION 14066f730 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass(void)

{
  if (DAT_146857468 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"TestLibrarySimulation",&DAT_146857468,FUN_140670850,0x28,
                  0x10000000,0,L"Engine",FUN_1405d87d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140493aa0,&LAB_140447700,0);
  }
  return DAT_146857468;
}



// FUNCTION 14066f7e0 FUN_14066f7e0 body=53 status=ok
// SIG undefined FUN_14066f7e0(void)

void FUN_14066f7e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144035478;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14066f820 FUN_14066f820 body=53 status=ok
// SIG undefined FUN_14066f820(void)

void FUN_14066f820(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_144035590;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14066f860 FUN_14066f860 body=47 status=ok
// SIG undefined FUN_14066f860(void)

longlong FUN_14066f860(void)

{
  if (DAT_146857460 == 0) {
    FUN_141786440(&DAT_146857460,&PTR_GetPrivateStaticClass_1440327a0);
  }
  return DAT_146857460;
}



// FUNCTION 14066f890 FUN_14066f890 body=47 status=ok
// SIG undefined FUN_14066f890(void)

longlong FUN_14066f890(void)

{
  if (DAT_1468573a0 == 0) {
    FUN_141786a30(&DAT_1468573a0,&PTR_FUN_146225d70);
  }
  return DAT_1468573a0;
}



// FUNCTION 14066f8c0 FUN_14066f8c0 body=47 status=ok
// SIG undefined FUN_14066f8c0(void)

longlong FUN_14066f8c0(void)

{
  if (DAT_1468573a8 == 0) {
    FUN_141786a30(&DAT_1468573a8,&PTR_FUN_146225df0);
  }
  return DAT_1468573a8;
}



// FUNCTION 14066f8f0 FUN_14066f8f0 body=47 status=ok
// SIG undefined FUN_14066f8f0(void)

longlong FUN_14066f8f0(void)

{
  if (DAT_1468573b0 == 0) {
    FUN_141786a30(&DAT_1468573b0,&PTR_FUN_146225ec0);
  }
  return DAT_1468573b0;
}



// FUNCTION 14066f920 FUN_14066f920 body=47 status=ok
// SIG undefined FUN_14066f920(void)

longlong FUN_14066f920(void)

{
  if (DAT_1468573b8 == 0) {
    FUN_141786a30(&DAT_1468573b8,&PTR_FUN_146225f90);
  }
  return DAT_1468573b8;
}



// FUNCTION 14066f950 FUN_14066f950 body=47 status=ok
// SIG undefined FUN_14066f950(void)

longlong FUN_14066f950(void)

{
  if (DAT_1468573c0 == 0) {
    FUN_141786a30(&DAT_1468573c0,&PTR_FUN_146226060);
  }
  return DAT_1468573c0;
}



// FUNCTION 14066f980 FUN_14066f980 body=47 status=ok
// SIG undefined FUN_14066f980(void)

longlong FUN_14066f980(void)

{
  if (DAT_1468573c8 == 0) {
    FUN_141786a30(&DAT_1468573c8,&PTR_FUN_146226130);
  }
  return DAT_1468573c8;
}



// FUNCTION 14066f9b0 FUN_14066f9b0 body=47 status=ok
// SIG undefined FUN_14066f9b0(void)

longlong FUN_14066f9b0(void)

{
  if (DAT_1468573d0 == 0) {
    FUN_141786a30(&DAT_1468573d0,&PTR_FUN_1462261c0);
  }
  return DAT_1468573d0;
}



// FUNCTION 14066f9e0 FUN_14066f9e0 body=47 status=ok
// SIG undefined FUN_14066f9e0(void)

longlong FUN_14066f9e0(void)

{
  if (DAT_1468573d8 == 0) {
    FUN_141786a30(&DAT_1468573d8,&PTR_FUN_146226240);
  }
  return DAT_1468573d8;
}



// FUNCTION 14066fa10 FUN_14066fa10 body=47 status=ok
// SIG undefined FUN_14066fa10(void)

longlong FUN_14066fa10(void)

{
  if (DAT_1468573e0 == 0) {
    FUN_141786a30(&DAT_1468573e0,&PTR_FUN_146226280);
  }
  return DAT_1468573e0;
}



// FUNCTION 14066fa40 FUN_14066fa40 body=47 status=ok
// SIG undefined FUN_14066fa40(void)

longlong FUN_14066fa40(void)

{
  if (DAT_1468573e8 == 0) {
    FUN_141786a30(&DAT_1468573e8,&PTR_FUN_146226300);
  }
  return DAT_1468573e8;
}



// FUNCTION 14066fa70 FUN_14066fa70 body=47 status=ok
// SIG undefined FUN_14066fa70(void)

longlong FUN_14066fa70(void)

{
  if (DAT_1468573f0 == 0) {
    FUN_141786a30(&DAT_1468573f0,&PTR_FUN_146226380);
  }
  return DAT_1468573f0;
}



// FUNCTION 14066faa0 FUN_14066faa0 body=47 status=ok
// SIG undefined FUN_14066faa0(void)

longlong FUN_14066faa0(void)

{
  if (DAT_1468573f8 == 0) {
    FUN_141786a30(&DAT_1468573f8,&PTR_FUN_1462264b0);
  }
  return DAT_1468573f8;
}



// FUNCTION 14066fad0 FUN_14066fad0 body=47 status=ok
// SIG undefined FUN_14066fad0(void)

longlong FUN_14066fad0(void)

{
  if (DAT_146857400 == 0) {
    FUN_141786a30(&DAT_146857400,&PTR_FUN_146226670);
  }
  return DAT_146857400;
}



// FUNCTION 14066fb00 FUN_14066fb00 body=47 status=ok
// SIG undefined FUN_14066fb00(void)

longlong FUN_14066fb00(void)

{
  if (DAT_146857408 == 0) {
    FUN_141786a30(&DAT_146857408,&PTR_FUN_1462266b0);
  }
  return DAT_146857408;
}



// FUNCTION 14066fb30 FUN_14066fb30 body=47 status=ok
// SIG undefined FUN_14066fb30(void)

longlong FUN_14066fb30(void)

{
  if (DAT_146857410 == 0) {
    FUN_141786a30(&DAT_146857410,&PTR_FUN_1462267d0);
  }
  return DAT_146857410;
}



// FUNCTION 14066fb60 FUN_14066fb60 body=47 status=ok
// SIG undefined FUN_14066fb60(void)

longlong FUN_14066fb60(void)

{
  if (DAT_146857418 == 0) {
    FUN_141786a30(&DAT_146857418,&PTR_FUN_1462268d0);
  }
  return DAT_146857418;
}



// FUNCTION 14066fb90 FUN_14066fb90 body=47 status=ok
// SIG undefined FUN_14066fb90(void)

longlong FUN_14066fb90(void)

{
  if (DAT_146857420 == 0) {
    FUN_141786a30(&DAT_146857420,&PTR_FUN_146226ac0);
  }
  return DAT_146857420;
}



// FUNCTION 14066fbc0 FUN_14066fbc0 body=47 status=ok
// SIG undefined FUN_14066fbc0(void)

longlong FUN_14066fbc0(void)

{
  if (DAT_146857428 == 0) {
    FUN_141786a30(&DAT_146857428,&PTR_FUN_146226b00);
  }
  return DAT_146857428;
}



// FUNCTION 14066fbf0 FUN_14066fbf0 body=47 status=ok
// SIG undefined FUN_14066fbf0(void)

longlong FUN_14066fbf0(void)

{
  if (DAT_146857430 == 0) {
    FUN_141786a30(&DAT_146857430,&PTR_FUN_146226c80);
  }
  return DAT_146857430;
}



// FUNCTION 14066fc20 FUN_14066fc20 body=47 status=ok
// SIG undefined FUN_14066fc20(void)

longlong FUN_14066fc20(void)

{
  if (DAT_146857438 == 0) {
    FUN_141786a30(&DAT_146857438,&PTR_FUN_146226e00);
  }
  return DAT_146857438;
}



// FUNCTION 14066fc50 FUN_14066fc50 body=47 status=ok
// SIG undefined FUN_14066fc50(void)

longlong FUN_14066fc50(void)

{
  if (DAT_146857440 == 0) {
    FUN_141786a30(&DAT_146857440,&PTR_FUN_146227060);
  }
  return DAT_146857440;
}



// FUNCTION 14066fc80 FUN_14066fc80 body=47 status=ok
// SIG undefined FUN_14066fc80(void)

longlong FUN_14066fc80(void)

{
  if (DAT_146857448 == 0) {
    FUN_141786a30(&DAT_146857448,&PTR_FUN_146227240);
  }
  return DAT_146857448;
}



// FUNCTION 14066fcb0 FUN_14066fcb0 body=47 status=ok
// SIG undefined FUN_14066fcb0(void)

longlong FUN_14066fcb0(void)

{
  if (DAT_146857450 == 0) {
    FUN_141786a30(&DAT_146857450,&PTR_FUN_146227460);
  }
  return DAT_146857450;
}



// FUNCTION 14066fce0 FUN_14066fce0 body=47 status=ok
// SIG undefined FUN_14066fce0(void)

longlong FUN_14066fce0(void)

{
  if (DAT_146857458 == 0) {
    FUN_141786a30(&DAT_146857458,&PTR_FUN_146227640);
  }
  return DAT_146857458;
}



// FUNCTION 14066fd10 FUN_14066fd10 body=53 status=ok
// SIG undefined FUN_14066fd10(void)

void FUN_14066fd10(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *puVar1 = &PTR_FUN_1440357e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 14066fd50 FUN_14066fd50 body=151 status=ok
// SIG undefined FUN_14066fd50(void)

longlong FUN_14066fd50(void)

{
  if (DAT_146857520 == 0) {
    FUN_14171ccd0(L"/Script/GbxTest",L"TestPolicy",&DAT_146857520,FUN_140670880,0xb0,0x10000000,0,
                  L"Engine",&LAB_140670130,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146857520;
}



// FUNCTION 14066fdf0 FUN_14066fdf0 body=47 status=ok
// SIG undefined FUN_14066fdf0(void)

longlong FUN_14066fdf0(void)

{
  if (DAT_146857518 == 0) {
    FUN_141786440(&DAT_146857518,&PTR_FUN_1440332c0);
  }
  return DAT_146857518;
}



// FUNCTION 14066fe20 FUN_14066fe20 body=47 status=ok
// SIG undefined FUN_14066fe20(void)

longlong FUN_14066fe20(void)

{
  if (DAT_146857498 == 0) {
    FUN_141786a30(&DAT_146857498,&PTR_FUN_1462276d0);
  }
  return DAT_146857498;
}



// FUNCTION 14066fe50 FUN_14066fe50 body=47 status=ok
// SIG undefined FUN_14066fe50(void)

longlong FUN_14066fe50(void)

{
  if (DAT_1468574a0 == 0) {
    FUN_141786a30(&DAT_1468574a0,&PTR_FUN_1462277f0);
  }
  return DAT_1468574a0;
}



// FUNCTION 14066fe80 FUN_14066fe80 body=47 status=ok
// SIG undefined FUN_14066fe80(void)

longlong FUN_14066fe80(void)

{
  if (DAT_1468574a8 == 0) {
    FUN_141786a30(&DAT_1468574a8,&PTR_FUN_146227870);
  }
  return DAT_1468574a8;
}



// FUNCTION 14066feb0 FUN_14066feb0 body=47 status=ok
// SIG undefined FUN_14066feb0(void)

longlong FUN_14066feb0(void)

{
  if (DAT_1468574b0 == 0) {
    FUN_141786a30(&DAT_1468574b0,&PTR_FUN_1462278f0);
  }
  return DAT_1468574b0;
}



// FUNCTION 14066fee0 FUN_14066fee0 body=47 status=ok
// SIG undefined FUN_14066fee0(void)

longlong FUN_14066fee0(void)

{
  if (DAT_1468574b8 == 0) {
    FUN_141786a30(&DAT_1468574b8,&PTR_FUN_146227970);
  }
  return DAT_1468574b8;
}



// FUNCTION 14066ff10 FUN_14066ff10 body=47 status=ok
// SIG undefined FUN_14066ff10(void)

longlong FUN_14066ff10(void)

{
  if (DAT_1468574c0 == 0) {
    FUN_141786a30(&DAT_1468574c0,&PTR_FUN_146227aa0);
  }
  return DAT_1468574c0;
}



// FUNCTION 14066ff40 FUN_14066ff40 body=47 status=ok
// SIG undefined FUN_14066ff40(void)

longlong FUN_14066ff40(void)

{
  if (DAT_1468574c8 == 0) {
    FUN_141786a30(&DAT_1468574c8,&PTR_FUN_146227c60);
  }
  return DAT_1468574c8;
}



// FUNCTION 14066ff70 FUN_14066ff70 body=47 status=ok
// SIG undefined FUN_14066ff70(void)

longlong FUN_14066ff70(void)

{
  if (DAT_1468574d0 == 0) {
    FUN_141786a30(&DAT_1468574d0,&PTR_FUN_146227d60);
  }
  return DAT_1468574d0;
}



// FUNCTION 14066ffa0 FUN_14066ffa0 body=47 status=ok
// SIG undefined FUN_14066ffa0(void)

longlong FUN_14066ffa0(void)

{
  if (DAT_1468574d8 == 0) {
    FUN_141786a30(&DAT_1468574d8,&PTR_FUN_146227de0);
  }
  return DAT_1468574d8;
}



// FUNCTION 14066ffd0 FUN_14066ffd0 body=47 status=ok
// SIG undefined FUN_14066ffd0(void)

longlong FUN_14066ffd0(void)

{
  if (DAT_1468574e0 == 0) {
    FUN_141786a30(&DAT_1468574e0,&PTR_FUN_146227e60);
  }
  return DAT_1468574e0;
}



// FUNCTION 140670000 FUN_140670000 body=47 status=ok
// SIG undefined FUN_140670000(void)

longlong FUN_140670000(void)

{
  if (DAT_1468574e8 == 0) {
    FUN_141786a30(&DAT_1468574e8,&PTR_FUN_146227fe0);
  }
  return DAT_1468574e8;
}



// FUNCTION 140670030 FUN_140670030 body=47 status=ok
// SIG undefined FUN_140670030(void)

longlong FUN_140670030(void)

{
  if (DAT_1468574f0 == 0) {
    FUN_141786a30(&DAT_1468574f0,&PTR_FUN_146228160);
  }
  return DAT_1468574f0;
}



// FUNCTION 140670060 FUN_140670060 body=47 status=ok
// SIG undefined FUN_140670060(void)

longlong FUN_140670060(void)

{
  if (DAT_1468574f8 == 0) {
    FUN_141786a30(&DAT_1468574f8,&PTR_FUN_1462283c0);
  }
  return DAT_1468574f8;
}



// FUNCTION 140670090 FUN_140670090 body=47 status=ok
// SIG undefined FUN_140670090(void)

longlong FUN_140670090(void)

{
  if (DAT_146857500 == 0) {
    FUN_141786a30(&DAT_146857500,&PTR_FUN_1462285a0);
  }
  return DAT_146857500;
}



// FUNCTION 1406700c0 FUN_1406700c0 body=47 status=ok
// SIG undefined FUN_1406700c0(void)

longlong FUN_1406700c0(void)

{
  if (DAT_146857508 == 0) {
    FUN_141786a30(&DAT_146857508,&PTR_FUN_1462287c0);
  }
  return DAT_146857508;
}



// FUNCTION 1406700f0 FUN_1406700f0 body=47 status=ok
// SIG undefined FUN_1406700f0(void)

longlong FUN_1406700f0(void)

{
  if (DAT_146857510 == 0) {
    FUN_141786a30(&DAT_146857510,&PTR_FUN_1462289a0);
  }
  return DAT_146857510;
}



// FUNCTION 1406701a0 FUN_1406701a0 body=110 status=ok
// SIG undefined FUN_1406701a0(void)

undefined8 FUN_1406701a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar1 = (undefined4 *)(param_2 + 0x20);
    do {
      *(undefined1 *)(puVar1 + -8) = *(undefined1 *)(param_3 + -0x20 + (longlong)puVar1);
      FKey::operator=(puVar1 + -6,param_3 + -0x18 + (longlong)puVar1);
      *puVar1 = *(undefined4 *)(param_3 + (longlong)puVar1);
      puVar1[1] = *(undefined4 *)(param_3 + 4 + (longlong)puVar1);
      puVar1[2] = *(undefined4 *)(param_3 + 8 + (longlong)puVar1);
      puVar1[3] = *(undefined4 *)(param_3 + 0xc + (longlong)puVar1);
      puVar1 = puVar1 + 0xc;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140670210 Copy body=167 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FPhoWidgetPath>::Copy
          (undefined8 param_1,undefined8 *param_2,undefined8 *param_3,int param_4)

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
        TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
        ::_guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
      }
    }
    puVar1 = param_3 + 2;
    param_3 = param_3 + 3;
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)puVar1;
    param_2 = param_2 + 3;
  }
  return 1;
}



// FUNCTION 1406702c0 FUN_1406702c0 body=221 status=ok
// SIG undefined FUN_1406702c0(void)

undefined8 FUN_1406702c0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  undefined4 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 0x10);
    do {
      if (param_2 != (undefined8 *)(puVar3 + -4)) {
        iVar2 = puVar3[-2];
        _Src = *(void **)(puVar3 + -4);
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
        }
      }
      *(undefined4 *)(param_2 + 2) = *puVar3;
      *(undefined4 *)((longlong)param_2 + 0x14) = puVar3[1];
      *(undefined4 *)(param_2 + 3) = puVar3[2];
      param_2[4] = *(undefined8 *)(puVar3 + 4);
      *(undefined1 *)(param_2 + 5) = *(undefined1 *)(puVar3 + 6);
      puVar1 = (undefined1 *)((longlong)puVar3 + 0x19);
      puVar3 = puVar3 + 0xc;
      *(undefined1 *)((longlong)param_2 + 0x29) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 6;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1406703a0 FUN_1406703a0 body=217 status=ok
// SIG undefined FUN_1406703a0(void)

undefined8 FUN_1406703a0(undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  void *_Src;
  undefined8 *puVar3;
  
  if (param_4 != 0) {
    puVar3 = (undefined8 *)(param_3 + 0x10);
    do {
      if (param_2 != puVar3 + -2) {
        iVar2 = *(int *)(puVar3 + -1);
        _Src = (void *)puVar3[-2];
        *(int *)(param_2 + 1) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0xc) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0xc) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(param_2,iVar2);
          _guard_xfg_dispatch_icall_nop((void *)*param_2,_Src,(longlong)iVar2 << 3);
        }
      }
      param_2[2] = *puVar3;
      param_2[3] = puVar3[1];
      *(undefined4 *)(param_2 + 4) = *(undefined4 *)(puVar3 + 2);
      *(undefined1 *)((longlong)param_2 + 0x24) = *(undefined1 *)((longlong)puVar3 + 0x14);
      puVar1 = (undefined1 *)((longlong)puVar3 + 0x15);
      puVar3 = puVar3 + 5;
      *(undefined1 *)((longlong)param_2 + 0x25) = *puVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 5;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140670480 FUN_140670480 body=77 status=ok
// SIG undefined FUN_140670480(void)

void FUN_140670480(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x18);
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



// FUNCTION 1406704d0 FUN_1406704d0 body=55 status=ok
// SIG undefined FUN_1406704d0(void)

void FUN_1406704d0(void)

{
  undefined8 uVar1;
  
  if (DAT_146857230 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146857230 = GetStaticEnum(FUN_140670ac0,uVar1,L"EDiscovery");
  }
  return;
}



// FUNCTION 140670510 FUN_140670510 body=55 status=ok
// SIG undefined FUN_140670510(void)

void FUN_140670510(void)

{
  undefined8 uVar1;
  
  if (DAT_146857220 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146857220 = GetStaticEnum(FUN_140670b20,uVar1,L"EGbxTestPlanOutput");
  }
  return;
}



// FUNCTION 140670550 FUN_140670550 body=55 status=ok
// SIG undefined FUN_140670550(void)

void FUN_140670550(void)

{
  undefined8 uVar1;
  
  if (DAT_146857228 == 0) {
    uVar1 = Z_Construct_UPackage__Script_Engine();
    DAT_146857228 = GetStaticEnum(FUN_140670af0,uVar1,L"EGbxTestPlan");
  }
  return;
}



// FUNCTION 140670590 FUN_140670590 body=6 status=ok
// SIG undefined FUN_140670590(void)

undefined8 FUN_140670590(void)

{
  return 0x4bac1a01;
}



// FUNCTION 1406705a0 FUN_1406705a0 body=6 status=ok
// SIG undefined FUN_1406705a0(void)

undefined8 FUN_1406705a0(void)

{
  return 0xfe6d78a6;
}



// FUNCTION 1406705b0 FUN_1406705b0 body=6 status=ok
// SIG undefined FUN_1406705b0(void)

undefined8 FUN_1406705b0(void)

{
  return 0x4de1b650;
}



// FUNCTION 1406705c0 FUN_1406705c0 body=6 status=ok
// SIG undefined FUN_1406705c0(void)

undefined8 FUN_1406705c0(void)

{
  return 0x2e65ab69;
}



// FUNCTION 1406705d0 FUN_1406705d0 body=258 status=ok
// SIG undefined FUN_1406705d0(void)

void FUN_1406705d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong *local_28;
  undefined8 local_20;
  longlong *local_18;
  undefined8 local_10;
  
  local_28 = (longlong *)0x0;
  local_20 = 0;
  local_18 = (longlong *)0x0;
  local_10 = 0;
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_28);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(&local_18,param_3);
  lVar1 = *param_1;
  uVar2 = FUN_14178ac60(param_1,DAT_146857320);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_28);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_2,&local_28);
  TArray<FString,TSizedDefaultAllocator<32>_>::operator=(param_3,&local_18);
  plVar3 = local_18;
  for (iVar4 = (int)local_10; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_18 != (longlong *)0x0) {
    FMemory::Free(local_18);
  }
  plVar3 = local_28;
  for (iVar4 = (int)local_20; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (*plVar3 != 0) {
      FMemory::Free();
    }
    plVar3 = plVar3 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}



// FUNCTION 1406706e0 FUN_1406706e0 body=61 status=ok
// SIG undefined FUN_1406706e0(void)

void FUN_1406706e0(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res8;
  
  lVar1 = *param_1;
  local_res8 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146857338);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_res8);
  return;
}



// FUNCTION 140670720 FUN_140670720 body=159 status=ok
// SIG undefined FUN_140670720(void)

void FUN_140670720(longlong *param_1,void **param_2)

{
  uint uVar1;
  void *_Src;
  longlong lVar2;
  undefined8 uVar3;
  void *local_18;
  ulonglong local_10;
  
  local_18 = (void *)0x0;
  local_10 = 0;
  if (&local_18 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    _Src = *param_2;
    local_10 = (ulonglong)uVar1;
    if (uVar1 != 0) {
      TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,uVar1,0);
      _guard_xfg_dispatch_icall_nop(local_18,_Src,(longlong)(int)uVar1 * 2);
    }
  }
  lVar2 = *param_1;
  uVar3 = FUN_14178ac60(param_1,DAT_146857328);
  (**(code **)(lVar2 + 0x208))(param_1,uVar3,&local_18);
  if (local_18 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406707c0 FUN_1406707c0 body=90 status=ok
// SIG undefined FUN_1406707c0(void)

void FUN_1406707c0(longlong *param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_18;
  char local_10;
  
  local_10 = *param_3 != '\0';
  lVar1 = *param_1;
  local_18 = param_2;
  uVar2 = FUN_14178ac60(param_1,DAT_146857330);
  (**(code **)(lVar1 + 0x208))(param_1,uVar2,&local_18);
  *param_3 = local_10;
  return;
}



// FUNCTION 140670820 FUN_140670820 body=34 status=ok
// SIG undefined FUN_140670820(void)

void FUN_140670820(void)

{
  undefined8 uVar1;
  
  uVar1 = UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_GenerateLevelGrid_1440357c0,2);
  return;
}



// FUNCTION 140670850 FUN_140670850 body=34 status=ok
// SIG undefined FUN_140670850(void)

void FUN_140670850(void)

{
  undefined8 uVar1;
  
  uVar1 = UHeadMountedDisplayFunctionLibrary::GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_CanReceiveBackgroundInput_144035900,0x18)
  ;
  return;
}



// FUNCTION 140670880 FUN_140670880 body=34 status=ok
// SIG undefined FUN_140670880(void)

void FUN_140670880(void)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14066fd50();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_ClearSavedTestCommand_144035b80,0x10);
  return;
}



// FUNCTION 1406708b0 StaticRegisterNativesUCurveFloat body=34 status=ok
// SIG undefined StaticRegisterNativesUCurveFloat(void)

void UCurveFloat::StaticRegisterNativesUCurveFloat(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_OnValidForImport_144035c80,1);
  return;
}



// FUNCTION 1406708e0 StaticRegisterNativesUViewport body=34 status=ok
// SIG undefined StaticRegisterNativesUViewport(void)

void UViewport::StaticRegisterNativesUViewport(void)

{
  undefined8 uVar1;
  
  uVar1 = GetPrivateStaticClass();
  FNativeFunctionRegistrar::RegisterFunctions(uVar1,&PTR_s_AddTestDriver_144035c90,6);
  return;
}



// FUNCTION 140670910 FUN_140670910 body=82 status=ok
// SIG undefined FUN_140670910(void)

void FUN_140670910(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857390 == 0) {
    uVar1 = FUN_140670590();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857390 = GetStaticStruct(FUN_140670b50,uVar2,L"GbxTestInputAction",0x30,uVar1);
  }
  return;
}



// FUNCTION 140670970 FUN_140670970 body=82 status=ok
// SIG undefined FUN_140670970(void)

void FUN_140670970(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857340 == 0) {
    uVar1 = FUN_1406705a0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857340 = GetStaticStruct(FUN_140670b80,uVar2,L"TestInfoSkeletalMesh",0x18,uVar1);
  }
  return;
}



// FUNCTION 1406709d0 FUN_1406709d0 body=82 status=ok
// SIG undefined FUN_1406709d0(void)

void FUN_1406709d0(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857350 == 0) {
    uVar1 = FUN_1406705b0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857350 = GetStaticStruct(FUN_140670bb0,uVar2,L"TestInfoStaticMesh",0x30,uVar1);
  }
  return;
}



// FUNCTION 140670a30 FUN_140670a30 body=82 status=ok
// SIG undefined FUN_140670a30(void)

void FUN_140670a30(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146857360 == 0) {
    uVar1 = FUN_1406705c0();
    uVar2 = Z_Construct_UPackage__Script_Engine();
    DAT_146857360 = GetStaticStruct(FUN_140670be0,uVar2,L"TestInfoTexture",0x28,uVar1);
  }
  return;
}



// FUNCTION 140670a90 FUN_140670a90 body=47 status=ok
// SIG undefined FUN_140670a90(void)

longlong FUN_140670a90(void)

{
  if (DAT_146857480 == 0) {
    FUN_141786440(&DAT_146857480,&PTR_FUN_144033090);
  }
  return DAT_146857480;
}



// FUNCTION 140670ac0 FUN_140670ac0 body=47 status=ok
// SIG undefined FUN_140670ac0(void)

longlong FUN_140670ac0(void)

{
  if (DAT_146857490 == 0) {
    FUN_1417866a0(&DAT_146857490,&PTR_Z_Construct_UPackage__Script_Engine_1462293f0);
  }
  return DAT_146857490;
}



// FUNCTION 140670af0 FUN_140670af0 body=47 status=ok
// SIG undefined FUN_140670af0(void)

longlong FUN_140670af0(void)

{
  if (DAT_146857478 == 0) {
    FUN_1417866a0(&DAT_146857478,&PTR_Z_Construct_UPackage__Script_Engine_1462293a0);
  }
  return DAT_146857478;
}



// FUNCTION 140670b20 FUN_140670b20 body=47 status=ok
// SIG undefined FUN_140670b20(void)

longlong FUN_140670b20(void)

{
  if (DAT_146857470 == 0) {
    FUN_1417866a0(&DAT_146857470,&PTR_Z_Construct_UPackage__Script_Engine_146229350);
  }
  return DAT_146857470;
}



// FUNCTION 140670b50 FUN_140670b50 body=47 status=ok
// SIG undefined FUN_140670b50(void)

longlong FUN_140670b50(void)

{
  if (DAT_146857398 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857398,&PTR_Z_Construct_UPackage__Script_Engine_146225c90);
  }
  return DAT_146857398;
}



// FUNCTION 140670b80 FUN_140670b80 body=47 status=ok
// SIG undefined FUN_140670b80(void)

longlong FUN_140670b80(void)

{
  if (DAT_146857348 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857348,&PTR_Z_Construct_UPackage__Script_Engine_1462253f0);
  }
  return DAT_146857348;
}



// FUNCTION 140670bb0 FUN_140670bb0 body=47 status=ok
// SIG undefined FUN_140670bb0(void)

longlong FUN_140670bb0(void)

{
  if (DAT_146857358 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857358,&PTR_Z_Construct_UPackage__Script_Engine_146225620);
  }
  return DAT_146857358;
}



// FUNCTION 140670be0 FUN_140670be0 body=47 status=ok
// SIG undefined FUN_140670be0(void)

longlong FUN_140670be0(void)

{
  if (DAT_146857368 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146857368,&PTR_Z_Construct_UPackage__Script_Engine_146225850);
  }
  return DAT_146857368;
}



// FUNCTION 140670c10 FUN_140670c10 body=128 status=ok
// SIG undefined FUN_140670c10(void)

void FUN_140670c10(undefined8 param_1,longlong param_2)

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
  FUN_140641d90(param_1,local_res10);
  return;
}



// FUNCTION 140670c90 execRandomBoolFromStream body=142 status=ok
// SIG undefined execRandomBoolFromStream(void)

void UKismetMathLibrary::execRandomBoolFromStream
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar2 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = BuildSettings::IsPromotedBuild(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140670d40 FUN_140670d40 body=357 status=ok
// SIG undefined FUN_140670d40(void)

void FUN_140670d40(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_28;
  longlong local_20 [3];
  
  local_20[0] = 0;
  local_20[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  local_28 = 0;
  plVar1 = local_20;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14064eb30(plVar1,local_28,local_res20[0],local_res10[0] != 0);
  if (local_20[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140670eb0 execGetIndianaPC body=42 status=ok
// SIG undefined execGetIndianaPC(void)

void AIndianaPlayerCharacter::execGetIndianaPC
               (undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = UGeneral_Player::GetActor();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140670ee0 FUN_140670ee0 body=130 status=ok
// SIG undefined FUN_140670ee0(void)

void FUN_140670ee0(undefined8 param_1,longlong param_2)

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
  FUN_1406558a0(param_1,local_res10[0] != 0);
  return;
}



// FUNCTION 140670f70 execRandomBoolFromStream body=142 status=ok
// SIG undefined execRandomBoolFromStream(void)

void UKismetMathLibrary::execRandomBoolFromStream
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 local_res10;
  
  local_res10 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  puVar2 = &local_res10;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FOutputDevice::CanBeUsedOnAnyThread(puVar2);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140671000 FUN_140671000 body=41 status=ok
// SIG undefined FUN_140671000(void)

void FUN_140671000(undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = FUN_140655a80();
  *param_3 = uVar1;
  return;
}



// FUNCTION 140671030 FUN_140671030 body=356 status=ok
// SIG undefined FUN_140671030(void)

void FUN_140671030(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong **pplVar2;
  int iVar3;
  longlong **pplVar4;
  longlong *local_28;
  undefined8 local_20;
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
  local_28 = (longlong *)0x0;
  local_20 = 0;
  pplVar2 = &local_18;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar2 = *(longlong ***)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  pplVar4 = &local_28;
  if (*(longlong ***)(param_2 + 0x38) != (longlong **)0x0) {
    pplVar4 = *(longlong ***)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x280))(param_1,pplVar2,pplVar4);
  plVar1 = local_28;
  for (iVar3 = (int)local_20; iVar3 != 0; iVar3 = iVar3 + -1) {
    if (*plVar1 != 0) {
      FMemory::Free();
    }
    plVar1 = plVar1 + 2;
  }
  if (local_28 != (longlong *)0x0) {
    FMemory::Free(local_28);
  }
  plVar1 = local_18;
  for (iVar3 = (int)local_10; iVar3 != 0; iVar3 = iVar3 + -1) {
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



// FUNCTION 1406711a0 FUN_1406711a0 body=152 status=ok
// SIG undefined FUN_1406711a0(void)

void FUN_1406711a0(longlong *param_1,longlong param_2)

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
  (**(code **)(*param_1 + 0x278))(param_1,local_18);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140671240 FUN_140671240 body=210 status=ok
// SIG undefined FUN_140671240(void)

void FUN_140671240(longlong *param_1,longlong param_2)

{
  undefined1 *puVar1;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  local_res8[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  puVar1 = local_res8;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar1 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  (**(code **)(*param_1 + 0x2d0))(param_1,local_res10,puVar1);
  return;
}



// FUNCTION 140671320 FUN_140671320 body=387 status=ok
// SIG undefined FUN_140671320(void)

void FUN_140671320(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_38 [4];
  
  local_38[2] = 0;
  local_38[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38 + 2);
  }
  local_38[0] = 0;
  local_38[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_38);
  }
  local_res20[0] = 0;
  plVar1 = local_38;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  FUN_140657e60(param_1,local_38 + 2,plVar1,local_res20[0],local_res10[0]);
  if (local_38[0] != 0) {
    FMemory::Free();
  }
  if (local_38[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406714b0 FUN_1406714b0 body=500 status=ok
// SIG undefined FUN_1406714b0(void)

void FUN_1406714b0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  bool bVar2;
  int local_res10 [4];
  int local_res20 [2];
  undefined4 local_58;
  undefined4 local_54;
  longlong local_50 [5];
  
  local_50[2] = 0;
  local_50[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50 + 2);
  }
  local_50[0] = 0;
  local_50[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_50);
  }
  local_54 = 0;
  plVar1 = local_50;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_54);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  bVar2 = local_res10[0] != 0;
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
  FUN_140657e90(param_1,local_50 + 2,plVar1,local_54,local_58,bVar2,local_res20[0] != 0);
  if (local_50[0] != 0) {
    FMemory::Free();
  }
  if (local_50[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406716b0 FUN_1406716b0 body=143 status=ok
// SIG undefined FUN_1406716b0(void)

void FUN_1406716b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = 0;
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
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140657eb0(&local_28);
  return;
}



// FUNCTION 140671740 FUN_140671740 body=159 status=ok
// SIG undefined FUN_140671740(void)

void FUN_140671740(undefined8 param_1,longlong param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = 0;
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
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140657f20(param_1,&local_28);
  return;
}



// FUNCTION 140671800 FUN_140671800 body=143 status=ok
// SIG undefined FUN_140671800(void)

void FUN_140671800(undefined8 param_1,longlong param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = 0;
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
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_1406585f0(&local_28);
  return;
}



// FUNCTION 140671890 FUN_140671890 body=159 status=ok
// SIG undefined FUN_140671890(void)

void FUN_140671890(undefined8 param_1,longlong param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_48 = 0;
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
  local_18 = local_38;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_140658650(param_1,&local_28);
  return;
}



// FUNCTION 140671930 FUN_140671930 body=112 status=ok
// SIG undefined FUN_140671930(void)

void FUN_140671930(undefined8 param_1,longlong param_2)

{
  undefined8 local_res10 [3];
  
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
  FUN_140658880(local_res10[0]);
  return;
}



// FUNCTION 1406719a0 FUN_1406719a0 body=407 status=ok
// SIG undefined FUN_1406719a0(void)

void FUN_1406719a0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pvVar1 = local_58;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_48;
  lVar2 = (longlong)(int)local_40;
  local_28 = (void *)0x0;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_14065a680(param_1,local_res10[0],&local_28,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140671b40 FUN_140671b40 body=401 status=ok
// SIG undefined FUN_140671b40(void)

void FUN_140671b40(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 local_res10 [8];
  void *local_48;
  ulonglong local_40;
  void *local_38;
  ulonglong local_30;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  void *local_18;
  int local_10;
  undefined4 local_c;
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = (void *)0x0;
  local_30 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_38);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  pvVar1 = local_48;
  local_28 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_40;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_38;
  lVar2 = (longlong)(int)local_30;
  local_18 = (void *)0x0;
  local_10 = (int)local_30;
  if ((int)local_30 == 0) {
    local_c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_18,local_30 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_18,pvVar1,lVar2 * 2);
  }
  FUN_14065a9b0(local_res10[0],&local_18,&local_28);
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_38 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140671ce0 FUN_140671ce0 body=456 status=ok
// SIG undefined FUN_140671ce0(void)

void FUN_140671ce0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [8];
  int local_res20 [2];
  longlong local_78 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_78[2] = 0;
  local_78[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14065abf0(param_1,bVar1,local_78 + 2,local_78,&local_38,local_res10[0]);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140671eb0 FUN_140671eb0 body=434 status=ok
// SIG undefined FUN_140671eb0(void)

void FUN_140671eb0(undefined8 param_1,longlong param_2)

{
  bool bVar1;
  undefined1 local_res10 [16];
  int local_res20 [2];
  longlong local_78 [4];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_res20[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  bVar1 = local_res20[0] != 0;
  local_78[2] = 0;
  local_78[3] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78 + 2);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78 + 2);
  }
  local_78[0] = 0;
  local_78[1] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_78);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_38 = (undefined4)local_58;
  uStack_34 = local_58._4_4_;
  uStack_30 = (undefined4)uStack_50;
  uStack_2c = uStack_50._4_4_;
  local_28 = local_48;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14065ad40(bVar1,local_78 + 2,local_78,&local_38,local_res10[0]);
  if (local_78[0] != 0) {
    FMemory::Free();
  }
  if (local_78[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672090 FUN_140672090 body=286 status=ok
// SIG undefined FUN_140672090(void)

void FUN_140672090(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined4 local_res10 [4];
  undefined4 local_res20 [2];
  longlong local_28 [2];
  
  local_28[0] = 0;
  local_28[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_28);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_28);
  }
  local_res20[0] = 0;
  plVar1 = local_28;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
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
  FUN_14065b3b0(param_1,plVar1,local_res20[0],local_res10[0]);
  if (local_28[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406721b0 execSteamWorkshop_DownloadItem body=206 status=ok
// SIG undefined execSteamWorkshop_DownloadItem(void)

void USteamWorkshopLibrary::execSteamWorkshop_DownloadItem
               (undefined8 param_1,longlong param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int local_res10 [2];
  undefined8 local_res18 [2];
  
  local_res18[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res18);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res18);
  }
  local_res10[0] = 0;
  puVar2 = local_res18;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  uVar1 = BuildSettings::IsPromotedBuild(puVar2,local_res10[0] != 0);
  *param_3 = uVar1;
  return;
}



// FUNCTION 140672280 execGetDataTableRowNames body=210 status=ok
// SIG undefined execGetDataTableRowNames(void)

void UDataTableFunctionLibrary::execGetDataTableRowNames(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 local_res10 [3];
  longlong local_18 [2];
  
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14065bdf0(local_res10[0],plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672360 execGetPerceivedActors body=226 status=ok
// SIG undefined execGetPerceivedActors(void)

void UAIPerceptionComponent::execGetPerceivedActors(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
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
  plVar1 = local_18;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar1 = *(longlong **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_14065be80(param_1,local_res10,plVar1);
  if (local_18[0] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672450 FUN_140672450 body=611 status=ok
// SIG undefined FUN_140672450(void)

void FUN_140672450(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined4 local_res10 [2];
  undefined4 local_res20 [2];
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  local_70 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_68 = 0;
  local_60 = 0;
  puVar8 = &local_78;
  if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
    puVar8 = *(undefined8 **)(param_2 + 0x38);
  }
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res20[0] = 0;
  plVar7 = &local_68;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar7 = *(longlong **)(param_2 + 0x38);
  }
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
  local_58 = 0xffffffffffffffff;
  uStack_50 = 0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_38 = local_58;
  uStack_30 = uStack_50;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  local_28 = local_48;
  FUN_14065c300(local_70,puVar8,plVar7,local_res20[0],local_res10[0],&local_38);
  if ((int)local_60 != 0) {
    plVar7 = (longlong *)(local_68 + 0x18);
    iVar6 = (int)local_60;
    do {
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
      plVar7 = plVar7 + 6;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  if (local_68 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672700 FUN_140672700 body=128 status=ok
// SIG undefined FUN_140672700(void)

void FUN_140672700(long param_1,longlong param_2)

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
  AK::MemoryMgr::StartProfileThreadUsage(param_1);
  return;
}



// FUNCTION 140672780 FUN_140672780 body=486 status=ok
// SIG undefined FUN_140672780(void)

void FUN_140672780(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pvVar1 = local_68;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_60;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_58;
  lVar2 = (longlong)(int)local_50;
  local_38 = (void *)0x0;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  FUN_14065ce90(param_1,puVar3,local_res20[0],&local_38,&local_48);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672970 FUN_140672970 body=477 status=ok
// SIG undefined FUN_140672970(void)

void FUN_140672970(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pvVar1 = local_58;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_48;
  lVar2 = (longlong)(int)local_40;
  local_28 = (void *)0x0;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_14065cf90(puVar3,local_res20[0],&local_28,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672b50 FUN_140672b50 body=486 status=ok
// SIG undefined FUN_140672b50(void)

void FUN_140672b50(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  pvVar1 = local_68;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_60;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_58;
  lVar2 = (longlong)(int)local_50;
  local_38 = (void *)0x0;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  FUN_14065d100(param_1,puVar3,local_res20[0],&local_38,&local_48);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672d40 FUN_140672d40 body=477 status=ok
// SIG undefined FUN_140672d40(void)

void FUN_140672d40(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined1 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_res10[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_res20[0] = 0;
  puVar3 = local_res10;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar3 = *(undefined1 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  pvVar1 = local_58;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_48;
  lVar2 = (longlong)(int)local_40;
  local_28 = (void *)0x0;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_14065d200(puVar3,local_res20[0],&local_28,&local_38);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140672f20 FUN_140672f20 body=691 status=ok
// SIG undefined FUN_140672f20(void)

void FUN_140672f20(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [2];
  void *local_68;
  ulonglong local_60;
  void *local_58;
  ulonglong local_50;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_70[0] = 0;
  puVar3 = &local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_70);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_74 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  pvVar1 = local_68;
  local_48 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_60;
  local_40 = (int)local_60;
  if ((int)local_60 == 0) {
    local_3c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_48,local_60 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_48,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_58;
  lVar2 = (longlong)(int)local_50;
  local_38 = (void *)0x0;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  FUN_14065d370(param_1,puVar3,local_70[0],local_res20[0],local_res10[0],&local_38,&local_48,
                local_74);
  if (local_68 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406731e0 FUN_1406731e0 body=685 status=ok
// SIG undefined FUN_1406731e0(void)

void FUN_1406731e0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60 [2];
  void *local_58;
  ulonglong local_50;
  void *local_48;
  ulonglong local_40;
  void *local_38;
  int local_30;
  undefined4 local_2c;
  void *local_28;
  int local_20;
  undefined4 local_1c;
  
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_60[0] = 0;
  puVar3 = &local_68;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_60);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_48 = (void *)0x0;
  local_40 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_48);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_58);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
  local_64 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  pvVar1 = local_58;
  local_38 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_50;
  local_30 = (int)local_50;
  if ((int)local_50 == 0) {
    local_2c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_38,local_50 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_38,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_48;
  lVar2 = (longlong)(int)local_40;
  local_28 = (void *)0x0;
  local_20 = (int)local_40;
  if ((int)local_40 == 0) {
    local_1c = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_28,local_40 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_28,pvVar1,lVar2 * 2);
  }
  FUN_14065d540(puVar3,local_60[0],local_res20[0],local_res10[0],&local_28,&local_38,local_64);
  if (local_58 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140673490 FUN_140673490 body=625 status=ok
// SIG undefined FUN_140673490(void)

void FUN_140673490(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  ulonglong local_68;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_74 = 0;
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  pvVar1 = local_70;
  local_50 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_68;
  local_48 = (int)local_68;
  if ((int)local_68 == 0) {
    local_44 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_68 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_50,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_60;
  lVar2 = (longlong)(int)local_58;
  local_40 = (void *)0x0;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  FUN_14065d780(param_1,puVar3,local_74,local_78,local_res10[0],&local_40,&local_50);
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140673710 FUN_140673710 body=617 status=ok
// SIG undefined FUN_140673710(void)

void FUN_140673710(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  ulonglong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_64 = 0;
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pvVar1 = local_60;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_58;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_50;
  lVar2 = (longlong)(int)local_48;
  local_30 = (void *)0x0;
  local_28 = (int)local_48;
  if ((int)local_48 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_48 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_30,pvVar1,lVar2 * 2);
  }
  FUN_14065d880(puVar3,local_64,local_68,local_res10[0],&local_30,&local_40);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140673980 FUN_140673980 body=621 status=ok
// SIG undefined FUN_140673980(void)

void FUN_140673980(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [16];
  undefined1 local_res20 [8];
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  ulonglong local_68;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_78 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_74 = 0;
  puVar3 = &local_78;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  pvVar1 = local_70;
  local_50 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_68;
  local_48 = (int)local_68;
  if ((int)local_68 == 0) {
    local_44 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_68 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_50,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_60;
  lVar2 = (longlong)(int)local_58;
  local_40 = (void *)0x0;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  FUN_14065da30(param_1,puVar3,local_74,local_res20[0],local_res10[0],&local_40,&local_50);
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140673bf0 FUN_140673bf0 body=612 status=ok
// SIG undefined FUN_140673bf0(void)

void FUN_140673bf0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  undefined1 local_res20 [8];
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  ulonglong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_68 = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_64 = 0;
  puVar3 = &local_68;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
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
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pvVar1 = local_60;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_58;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_50;
  lVar2 = (longlong)(int)local_48;
  local_30 = (void *)0x0;
  local_28 = (int)local_48;
  if ((int)local_48 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_48 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_30,pvVar1,lVar2 * 2);
  }
  FUN_14065dbd0(puVar3,local_64,local_res20[0],local_res10[0],&local_30,&local_40);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140673e60 FUN_140673e60 body=620 status=ok
// SIG undefined FUN_140673e60(void)

void FUN_140673e60(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [16];
  undefined4 local_res20 [2];
  undefined4 local_78;
  undefined4 local_74;
  void *local_70;
  ulonglong local_68;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  int local_48;
  undefined4 local_44;
  void *local_40;
  int local_38;
  undefined4 local_34;
  
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_74 = 0;
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_74);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_74);
  }
  local_78 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_78);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_78);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  local_70 = (void *)0x0;
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_70);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_70);
  }
  pvVar1 = local_70;
  local_50 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_68;
  local_48 = (int)local_68;
  if ((int)local_68 == 0) {
    local_44 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_50,local_68 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_50,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_60;
  lVar2 = (longlong)(int)local_58;
  local_40 = (void *)0x0;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  FUN_14065ddf0(param_1,puVar3,local_74,local_78,local_res10[0],&local_40,&local_50);
  if (local_70 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 1406740d0 FUN_1406740d0 body=611 status=ok
// SIG undefined FUN_1406740d0(void)

void FUN_1406740d0(undefined8 param_1,longlong param_2)

{
  void *pvVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined1 local_res10 [8];
  undefined4 local_res20 [2];
  undefined4 local_68;
  undefined4 local_64;
  void *local_60;
  ulonglong local_58;
  void *local_50;
  ulonglong local_48;
  void *local_40;
  int local_38;
  undefined4 local_34;
  void *local_30;
  int local_28;
  undefined4 local_24;
  
  local_res20[0] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res20);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res20);
  }
  local_64 = 0;
  puVar3 = local_res20;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)(param_2 + 0x38);
  }
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_64);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_64);
  }
  local_68 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_68);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
  local_res10[0] = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res10);
  }
  local_50 = (void *)0x0;
  local_48 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_50);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
  local_60 = (void *)0x0;
  local_58 = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_60);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_60);
  }
  pvVar1 = local_60;
  local_40 = (void *)0x0;
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  lVar2 = (longlong)(int)local_58;
  local_38 = (int)local_58;
  if ((int)local_58 == 0) {
    local_34 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_40,local_58 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_40,pvVar1,lVar2 * 2);
  }
  pvVar1 = local_50;
  lVar2 = (longlong)(int)local_48;
  local_30 = (void *)0x0;
  local_28 = (int)local_48;
  if ((int)local_48 == 0) {
    local_24 = 0;
  }
  else {
    TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(&local_30,local_48 & 0xffffffff,0);
    _guard_xfg_dispatch_icall_nop(local_30,pvVar1,lVar2 * 2);
  }
  FUN_14065ded0(puVar3,local_64,local_68,local_res10[0],&local_30,&local_40);
  if (local_60 != (void *)0x0) {
    FMemory::Free();
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 140674340 FUN_140674340 body=278 status=ok
// SIG undefined FUN_140674340(void)

void FUN_140674340(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10 [4];
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
  FUN_14065f650(local_res20,local_res10[0],&local_28);
  return;
}



// FUNCTION 140674460 FUN_140674460 body=266 status=ok
// SIG undefined FUN_140674460(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * FUN_140674460(undefined8 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  longlong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_1468387a8 ^ (ulonglong)auStack_98;
  puVar1 = (undefined4 *)*param_1;
  local_68 = 0;
  uStack_60 = 0;
  local_40 = 0;
  *param_2 = *puVar1;
  param_2[1] = puVar1[1];
  *(undefined8 *)(param_2 + 2) = 0;
  *(undefined8 *)(param_2 + 4) = 0;
  *(undefined8 *)(param_2 + 10) = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0xe] = 0xffffffff;
  param_2[0xf] = 0;
  *(undefined8 *)(param_2 + 0x12) = 0;
  param_2[0x14] = 0;
  local_30 = 0;
  local_78 = 0;
  local_70 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = 0;
  TSparseArray<TSetElement<FShaderPipelineKey>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::operator=(param_2 + 2,&local_78);
  lVar2 = local_38;
  if (local_38 == 0) {
    _guard_xfg_dispatch_icall_nop(param_2 + 0x10,&local_40,4);
  }
  if (*(longlong *)(param_2 + 0x12) != 0) {
    FMemory::Free();
  }
  *(longlong *)(param_2 + 0x12) = lVar2;
  param_2[0x14] = (undefined4)local_30;
  local_38 = 0;
  local_30 = local_30 & 0xffffffff00000000;
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (&local_78);
  return param_2;
}



// FUNCTION 140674570 AddUniqueImpl<FKey_const_&> body=199 status=ok
// SIG undefined AddUniqueImpl<FKey_const_&>(void)

int TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>
              (longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  iVar2 = (int)param_1[1];
  plVar3 = (longlong *)*param_1;
  lVar1 = (longlong)iVar2 * 0x18;
  if (plVar3 != plVar3 + (longlong)iVar2 * 3) {
    plVar7 = plVar3;
    do {
      if (*plVar7 == *param_2) {
        iVar6 = (int)(((longlong)plVar7 - (longlong)plVar3) / 0x18);
        if (iVar6 != -1) {
          return iVar6;
        }
        break;
      }
      plVar7 = plVar7 + 3;
    } while (plVar7 != plVar3 + (longlong)iVar2 * 3);
  }
  *(int *)(param_1 + 1) = iVar2 + 1;
  if (*(int *)((longlong)param_1 + 0xc) < iVar2 + 1) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
              (param_1,iVar2);
  }
  lVar4 = *param_1;
  *(longlong *)(lVar4 + lVar1) = *param_2;
  *(longlong *)(lVar4 + 8 + lVar1) = param_2[1];
  lVar5 = param_2[2];
  *(longlong *)(lVar4 + 0x10 + lVar1) = lVar5;
  if (lVar5 != 0) {
    LOCK();
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    UNLOCK();
  }
  return iVar2;
}



// FUNCTION 140674640 FUN_140674640 body=238 status=ok
// SIG undefined FUN_140674640(void)

ulonglong FUN_140674640(longlong *param_1,longlong *param_2)

{
  uint uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar1 = *(uint *)(param_1 + 0x29);
  lVar5 = (longlong)(int)uVar1;
  plVar4 = (longlong *)param_1[0x28];
  if ((longlong *)param_1[0x28] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  if (plVar4 != plVar4 + lVar5 * 4) {
    plVar2 = plVar4;
    do {
      if ((*plVar2 == *param_2) && (*(float *)(param_2 + 3) == *(float *)(plVar2 + 3))) {
        uVar3 = (longlong)plVar2 - (longlong)plVar4 >> 5;
        if ((int)uVar3 != -1) {
          return uVar3;
        }
        break;
      }
      plVar2 = plVar2 + 4;
    } while (plVar2 != plVar4 + lVar5 * 4);
  }
  *(uint *)(param_1 + 0x29) = uVar1 + 1;
  if (*(int *)((longlong)param_1 + 0x14c) < (int)(uVar1 + 1)) {
    FUN_14067ddb0(param_1);
  }
  plVar4 = (longlong *)param_1[0x28];
  if ((longlong *)param_1[0x28] == (longlong *)0x0) {
    plVar4 = param_1;
  }
  plVar4[lVar5 * 4] = *param_2;
  plVar4[lVar5 * 4 + 1] = param_2[1];
  plVar4[lVar5 * 4 + 2] = param_2[2];
  param_2[2] = 0;
  param_2[1] = 0;
  *(int *)(plVar4 + lVar5 * 4 + 3) = (int)param_2[3];
  return (ulonglong)uVar1;
}



// FUNCTION 140674730 FUN_140674730 body=308 status=ok
// SIG undefined FUN_140674730(void)

void FUN_140674730(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar6 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = &PTR_FUN_1440385e0;
      param_1[1] = *puVar6;
      *param_1 = &PTR__scalar_deleting_destructor__144038610;
      param_1[2] = 0;
      iVar5 = *(int *)(puVar6 + 2);
      lVar2 = puVar6[1];
      *(int *)(param_1 + 3) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar5,0);
        puVar4 = (undefined8 *)param_1[2];
        puVar3 = (undefined8 *)(lVar2 + 8);
        do {
          *puVar4 = puVar3[-1];
          puVar4[1] = *puVar3;
          lVar2 = puVar3[1];
          puVar4[2] = lVar2;
          if (lVar2 != 0) {
            LOCK();
            *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
            UNLOCK();
          }
          puVar4[3] = puVar3[2];
          puVar1 = puVar3 + 3;
          puVar3 = puVar3 + 5;
          *(undefined4 *)(puVar4 + 4) = *(undefined4 *)puVar1;
          puVar4 = puVar4 + 5;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      param_1 = param_1 + 4;
      puVar6 = puVar6 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140674870 FUN_140674870 body=292 status=ok
// SIG undefined FUN_140674870(void)

void FUN_140674870(undefined8 *param_1,longlong param_2,int param_3,int param_4,int param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 *puVar5;
  
  *(int *)(param_1 + 1) = param_3;
  if (((param_3 == 0) && (param_5 == 0)) && (param_4 == 0)) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    return;
  }
  TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(param_1,param_3 + param_5,param_4);
  param_1 = (undefined8 *)*param_1;
  if (param_3 != 0) {
    puVar5 = (undefined8 *)(param_2 + 8);
    do {
      *param_1 = &PTR_FUN_1440385e0;
      param_1[1] = *puVar5;
      *param_1 = &PTR__scalar_deleting_destructor__1440385f8;
      param_1[2] = 0;
      iVar4 = *(int *)(puVar5 + 2);
      lVar1 = puVar5[1];
      *(int *)(param_1 + 3) = iVar4;
      if (iVar4 == 0) {
        *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
      }
      else {
        TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar4,0);
        puVar3 = (undefined8 *)param_1[2];
        puVar2 = (undefined8 *)(lVar1 + 8);
        do {
          *puVar3 = puVar2[-1];
          puVar3[1] = *puVar2;
          lVar1 = puVar2[1];
          puVar3[2] = lVar1;
          if (lVar1 != 0) {
            LOCK();
            *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
            UNLOCK();
          }
          puVar3 = puVar3 + 3;
          puVar2 = puVar2 + 3;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      param_1 = param_1 + 4;
      puVar5 = puVar5 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1406749a0 FUN_1406749a0 body=631 status=ok
// SIG undefined FUN_1406749a0(void)

int * FUN_1406749a0(longlong *param_1,int *param_2,undefined8 param_3,undefined1 *param_4)

{
  int iVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  longlong *plVar6;
  undefined1 uVar7;
  int iVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  bool bVar13;
  int local_res8 [2];
  uint local_res10;
  uint local_res14;
  undefined8 local_res18;
  undefined1 *local_res20;
  
  uVar12 = 0xffffffff;
  local_res20 = param_4;
  local_res18 = param_3;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<FMeshElementAttributeData,FDefaultAllocator>::ResizeGrow(param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar4 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar1 = *(int *)((longlong)iVar8 * 0x60 + 4 + *param_1);
    *(int *)(param_1 + 6) = iVar1;
    *(int *)((longlong)param_1 + 0x34) = iVar4;
    if (iVar4 != 0) {
      *(undefined4 *)((longlong)iVar1 * 0x60 + *param_1) = 0xffffffff;
    }
  }
  plVar6 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar6 == (longlong *)0x0) {
    plVar6 = param_1 + 2;
  }
  puVar11 = (uint *)((longlong)plVar6 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4)
  ;
  *puVar11 = *puVar11 | 1 << ((byte)iVar8 & 0x1f);
  puVar11 = (uint *)((longlong)iVar8 * 0x60 + *param_1);
  FUN_140674460(local_res18,puVar11);
  puVar11[0x16] = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_res14 = puVar11[1];
    local_res10 = *puVar11;
    TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,&local_res10);
    iVar8 = local_res8[0];
    lVar9 = (longlong)local_res8[0];
    bVar13 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar13);
    if (bVar13) {
      _Dst = (void *)(lVar9 * 0x60 + *param_1);
      *(undefined4 *)((longlong)_Dst + 0x50) = 0;
      if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
        FMemory::Free();
      }
      TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
                ((longlong)_Dst + 8);
      _guard_xfg_dispatch_icall_nop(_Dst,puVar11,0x58);
      iVar1 = *param_2;
      bVar2 = (byte)iVar1 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)((longlong)(int)param_1[6] * 0x60 + *param_1) = iVar1;
      }
      puVar5 = (undefined4 *)((longlong)iVar1 * 0x60 + *param_1);
      *puVar5 = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar12 = (undefined4)param_1[6];
      }
      puVar5[1] = uVar12;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar1;
      plVar6 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar6 == (longlong *)0x0) {
        plVar6 = param_1 + 2;
      }
      puVar11 = (uint *)((longlong)plVar6 +
                        (longlong)((int)(iVar1 + (iVar1 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar11 = *puVar11 & ~(1 << bVar2 | 1U >> 0x20 - bVar2);
      uVar7 = (undefined1)local_res8[0];
      goto LAB_140674bfb;
    }
  }
  uVar7 = 0;
  cVar3 = TSet<TTuple<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UObject,FWeakObjectPtr>,TSet<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,DefaultKeyFuncs<FLinkerPlaceholderBase::FPlaceholderValuePropertyPath,0>,FDefaultSetAllocator>,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  local_res20 = param_4;
  if (cVar3 == '\0') {
    uVar10 = (puVar11[1] ^ *puVar11) & (int)param_1[9] - 1U;
    puVar11[0x17] = uVar10;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    puVar11[0x16] =
         *(uint *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4);
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(int *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar10) * 4) =
         *param_2;
  }
LAB_140674bfb:
  if (local_res20 != (undefined1 *)0x0) {
    *local_res20 = uVar7;
  }
  return param_2;
}



// FUNCTION 140674c20 FUN_140674c20 body=667 status=ok
// SIG undefined FUN_140674c20(void)

int * FUN_140674c20(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  longlong lVar12;
  undefined4 uVar13;
  uint uVar14;
  bool bVar15;
  int local_res8 [2];
  
  uVar13 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar8 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar8 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar8 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar8);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar8 = (int)param_1[6];
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar2 = *(int *)(*param_1 + 4 + (longlong)iVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar2;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar2 * 0x18) = 0xffffffff;
    }
  }
  plVar7 = (longlong *)param_1[4];
  *param_2 = iVar8;
  if (plVar7 == (longlong *)0x0) {
    plVar7 = param_1 + 2;
  }
  puVar1 = (uint *)((longlong)plVar7 + (longlong)((int)(iVar8 + (iVar8 >> 0x1f & 0x1fU)) >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar8 & 0x1f);
  _Src = (ulonglong *)(*param_1 + (longlong)iVar8 * 0x18);
  uVar3 = *(ulonglong *)*param_3;
  *_Src = uVar3;
  *(undefined4 *)(_Src + 1) = 0xffffffff;
  *(undefined4 *)((longlong)_Src + 0xc) = 0;
  *(undefined4 *)(_Src + 2) = 0xffffffff;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    iVar8 = local_res8[0];
    lVar12 = (longlong)local_res8[0];
    bVar15 = local_res8[0] != -1;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar15);
    if (bVar15) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar12 * 0x18),_Src,0x10);
      iVar2 = *param_2;
      bVar4 = (byte)iVar2 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar2;
      }
      lVar12 = *param_1;
      *(undefined4 *)(lVar12 + (longlong)iVar2 * 0x18) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar13 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar12 + 4 + (longlong)iVar2 * 0x18) = uVar13;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar2;
      plVar7 = (longlong *)param_1[4];
      *param_2 = iVar8;
      if (plVar7 == (longlong *)0x0) {
        plVar7 = param_1 + 2;
      }
      puVar1 = (uint *)((longlong)plVar7 +
                       (longlong)((int)(iVar2 + (iVar2 >> 0x1f & 0x1fU)) >> 5) * 4);
      *puVar1 = *puVar1 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      uVar11 = (undefined1)local_res8[0];
      goto LAB_140674e97;
    }
  }
  uVar11 = 0;
  cVar5 = TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
          ::ConditionalRehash(param_1,(int)param_1[1] - *(int *)((longlong)param_1 + 0x34),0);
  if (cVar5 == '\0') {
    iVar8 = (int)(*_Src >> 4);
    uVar10 = 0x9e3779b9U - iVar8 ^ iVar8 << 8;
    uVar14 = -(iVar8 + uVar10) ^ uVar10 >> 0xd;
    uVar9 = (iVar8 - uVar10) - uVar14 ^ uVar14 >> 0xc;
    uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 0x10;
    uVar14 = (uVar14 - uVar10) - uVar9 ^ uVar10 >> 5;
    uVar9 = (uVar9 - uVar10) - uVar14 ^ uVar14 >> 3;
    uVar10 = (uVar10 - uVar9) - uVar14 ^ uVar9 << 10;
    uVar9 = ((uVar14 - uVar10) - uVar9 ^ uVar10 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)_Src + 0x14) = uVar9;
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(undefined4 *)(_Src + 2) =
         *(undefined4 *)
          ((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar7 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar7 = param_1 + 7;
    }
    *(int *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         *param_2;
  }
LAB_140674e97:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = uVar11;
  }
  return param_2;
}



// FUNCTION 140674ec0 Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_> body=772 status=ok
// SIG undefined Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>(void)

uint * TSet<TTuple<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*>,TDefaultMapHashableKeyFuncs<FFlareResourceDescription_*,UFlareSimulatedSpacecraft_*,0>,FDefaultSetAllocator>
       ::
       Emplace<TPairInitializer<FFlareResourceDescription_*_const_&,UFlareSimulatedSpacecraft_*_const_&>_>
                 (longlong *param_1,uint *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uVar17;
  bool bVar18;
  uint local_res8 [2];
  ulonglong *local_res10;
  
  iVar12 = 1;
  uVar17 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    uVar11 = *(uint *)(param_1 + 1);
    *(uint *)(param_1 + 1) = uVar11 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < (int)(uVar11 + 1)) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,uVar11);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    uVar11 = *(uint *)(param_1 + 6);
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar9 = *(int *)(*param_1 + 4 + (longlong)(int)uVar11 * 0x18);
    *(int *)(param_1 + 6) = iVar9;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar9 * 0x18) = 0xffffffff;
    }
  }
  plVar8 = (longlong *)param_1[4];
  *param_2 = uVar11;
  local_res8[0] = local_res8[0] & 0xffffff00;
  lVar7 = (longlong)((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar8 == (longlong *)0x0) {
    plVar8 = param_1 + 2;
  }
  puVar16 = (uint *)((longlong)plVar8 + lVar7);
  *puVar16 = *puVar16 | 1 << ((byte)uVar11 & 0x1f);
  puVar2 = (ulonglong *)param_3[1];
  lVar1 = (longlong)(int)uVar11 * 0x18;
  local_res10 = (ulonglong *)(*param_1 + lVar1);
  uVar3 = *(ulonglong *)*param_3;
  *local_res10 = uVar3;
  local_res10[1] = *puVar2;
  *(undefined4 *)(local_res10 + 2) = 0xffffffff;
  uVar15 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar15 != 1) {
    TSet<TTuple<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*>,TDefaultMapHashableKeyFuncs<UGeometryCacheTrackStreamable_*,FStreamingGeometryCacheData_*,0>,FDefaultSetAllocator>
    ::FindId(param_1,local_res8,uVar3);
    uVar6 = local_res8[0];
    lVar10 = (longlong)(int)local_res8[0];
    bVar18 = local_res8[0] != 0xffffffff;
    local_res8[0] = CONCAT31(local_res8[0]._1_3_,bVar18);
    if (bVar18) {
      ::_guard_xfg_dispatch_icall_nop((void *)(*param_1 + lVar10 * 0x18),local_res10,0x10);
      bVar4 = (byte)uVar11 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(uint *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = uVar11;
      }
      lVar10 = *param_1;
      *(undefined4 *)(lVar1 + lVar10) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        uVar17 = (undefined4)param_1[6];
      }
      *(undefined4 *)(lVar1 + 4 + lVar10) = uVar17;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(uint *)(param_1 + 6) = uVar11;
      plVar8 = (longlong *)param_1[4];
      *param_2 = uVar6;
      if (plVar8 == (longlong *)0x0) {
        plVar8 = param_1 + 2;
      }
      puVar16 = (uint *)((longlong)plVar8 + lVar7);
      *puVar16 = *puVar16 & ~(1 << bVar4 | 1U >> 0x20 - bVar4);
      goto LAB_140675195;
    }
  }
  if (3 < uVar15) {
    uVar6 = (uVar15 >> 1) + 8;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    iVar9 = 0x20;
    cVar13 = '\0';
    if (uVar6 != 0) {
      iVar9 = 0x1f - iVar12;
    }
    uVar6 = (uVar15 >> 1) + 7;
    iVar12 = 0x1f;
    if (uVar6 != 0) {
      for (; uVar6 >> iVar12 == 0; iVar12 = iVar12 + -1) {
      }
    }
    if (uVar6 != 0) {
      cVar13 = '\x1f' - (char)iVar12;
    }
    iVar12 = 1 << (~(byte)((iVar9 << 0x1a) >> 0x1f) & 0x20U - cVar13 & 0x1f);
  }
  if (((int)uVar15 < 1) || (((int)param_1[9] != 0 && (iVar12 <= (int)param_1[9])))) {
    iVar12 = (int)(*local_res10 >> 4);
    uVar6 = 0x9e3779b9U - iVar12 ^ iVar12 << 8;
    uVar14 = -(iVar12 + uVar6) ^ uVar6 >> 0xd;
    uVar15 = (iVar12 - uVar6) - uVar14 ^ uVar14 >> 0xc;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 0x10;
    uVar14 = (uVar14 - uVar6) - uVar15 ^ uVar6 >> 5;
    uVar15 = (uVar15 - uVar6) - uVar14 ^ uVar14 >> 3;
    uVar6 = (uVar6 - uVar15) - uVar14 ^ uVar15 << 10;
    uVar15 = ((uVar14 - uVar6) - uVar15 ^ uVar6 >> 0xf) & (int)param_1[9] - 1U;
    *(uint *)((longlong)local_res10 + 0x14) = uVar15;
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(undefined4 *)(local_res10 + 2) =
         *(undefined4 *)
          ((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4);
    plVar8 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar8 = param_1 + 7;
    }
    *(uint *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar15) * 4) =
         uVar11;
  }
  else {
    *(int *)(param_1 + 9) = iVar12;
    TSet<TTuple<FFlareSpacecraftDescription_const_*,int>,TDefaultMapHashableKeyFuncs<FFlareSpacecraftDescription_const_*,int,0>,FDefaultSetAllocator>
    ::Rehash(param_1);
  }
LAB_140675195:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = (undefined1)local_res8[0];
  }
  return param_2;
}



// FUNCTION 1406751d0 FUN_1406751d0 body=631 status=ok
// SIG undefined FUN_1406751d0(void)

void FUN_1406751d0(undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  bool bVar16;
  
  iVar9 = (param_2 + -2) / 2;
  if (-1 < iVar9) {
    iVar10 = iVar9 * 2 + 1;
    iVar1 = iVar10;
    iVar12 = iVar9;
joined_r0x000140675205:
    do {
      if (iVar10 < param_2) {
        iVar10 = iVar9 * 2;
        iVar11 = iVar10 + 1;
        if (iVar10 + 2 < param_2) {
          bVar16 = *(uint *)(param_1 + ((longlong)iVar10 + 2) * 6 + 1) <
                   *(uint *)(param_1 + (longlong)iVar11 * 6 + 1);
          if (*(uint *)(param_1 + ((longlong)iVar10 + 2) * 6 + 1) ==
              *(uint *)(param_1 + (longlong)iVar11 * 6 + 1)) {
            bVar16 = *(uint *)((longlong)param_1 + ((longlong)iVar10 + 2) * 0x30 + 0xc) <
                     *(uint *)((longlong)param_1 + (longlong)iVar11 * 0x30 + 0xc);
          }
          if (bVar16) {
            iVar11 = iVar10;
          }
          iVar11 = iVar11 + 1;
        }
        puVar14 = param_1 + (longlong)iVar9 * 6;
        puVar13 = param_1 + (longlong)iVar11 * 6;
        bVar16 = *(uint *)(puVar14 + 1) < *(uint *)(puVar13 + 1);
        if (*(uint *)(puVar14 + 1) == *(uint *)(puVar13 + 1)) {
          bVar16 = *(uint *)((longlong)puVar14 + 0xc) < *(uint *)((longlong)puVar13 + 0xc);
        }
        if (bVar16) {
          if (puVar14 != puVar13) {
            uVar2 = puVar13[1];
            uVar3 = *puVar14;
            uVar4 = puVar14[1];
            uVar5 = puVar14[2];
            uVar6 = puVar14[3];
            uVar7 = puVar14[4];
            uVar8 = puVar14[5];
            *puVar14 = *puVar13;
            puVar14[1] = uVar2;
            uVar2 = puVar13[3];
            puVar14[2] = puVar13[2];
            puVar14[3] = uVar2;
            uVar2 = puVar13[5];
            puVar14[4] = puVar13[4];
            puVar14[5] = uVar2;
            *puVar13 = uVar3;
            puVar13[1] = uVar4;
            puVar13[2] = uVar5;
            puVar13[3] = uVar6;
            puVar13[4] = uVar7;
            puVar13[5] = uVar8;
          }
          iVar10 = iVar11 * 2 + 1;
          iVar9 = iVar11;
          goto joined_r0x000140675205;
        }
      }
      iVar10 = iVar1 + -2;
      iVar9 = iVar12 + -1;
      iVar1 = iVar10;
      iVar12 = iVar9;
    } while (-1 < iVar9);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar13 = param_1 + (longlong)param_2 * 6;
    do {
      if (param_1 != puVar13) {
        uVar2 = puVar13[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        *param_1 = *puVar13;
        param_1[1] = uVar2;
        uVar2 = puVar13[3];
        param_1[2] = puVar13[2];
        param_1[3] = uVar2;
        uVar2 = puVar13[5];
        param_1[4] = puVar13[4];
        param_1[5] = uVar2;
        *puVar13 = uVar3;
        puVar13[1] = uVar4;
        puVar13[2] = uVar5;
        puVar13[3] = uVar6;
        puVar13[4] = uVar7;
        puVar13[5] = uVar8;
      }
      iVar9 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar9 * 2;
          iVar10 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            bVar16 = *(uint *)(param_1 + ((longlong)iVar1 + 2) * 6 + 1) <
                     *(uint *)(param_1 + (longlong)iVar10 * 6 + 1);
            if (*(uint *)(param_1 + ((longlong)iVar1 + 2) * 6 + 1) ==
                *(uint *)(param_1 + (longlong)iVar10 * 6 + 1)) {
              bVar16 = *(uint *)((longlong)param_1 + ((longlong)iVar1 + 2) * 0x30 + 0xc) <
                       *(uint *)((longlong)param_1 + (longlong)iVar10 * 0x30 + 0xc);
            }
            if (bVar16) {
              iVar10 = iVar1;
            }
            iVar10 = iVar10 + 1;
          }
          puVar15 = param_1 + (longlong)iVar9 * 6;
          puVar14 = param_1 + (longlong)iVar10 * 6;
          bVar16 = *(uint *)(puVar15 + 1) < *(uint *)(puVar14 + 1);
          if (*(uint *)(puVar15 + 1) == *(uint *)(puVar14 + 1)) {
            bVar16 = *(uint *)((longlong)puVar15 + 0xc) < *(uint *)((longlong)puVar14 + 0xc);
          }
          if (!bVar16) break;
          if (puVar15 != puVar14) {
            uVar2 = puVar14[1];
            uVar3 = *puVar15;
            uVar4 = puVar15[1];
            uVar5 = puVar15[2];
            uVar6 = puVar15[3];
            uVar7 = puVar15[4];
            uVar8 = puVar15[5];
            *puVar15 = *puVar14;
            puVar15[1] = uVar2;
            uVar2 = puVar14[3];
            puVar15[2] = puVar14[2];
            puVar15[3] = uVar2;
            uVar2 = puVar14[5];
            puVar15[4] = puVar14[4];
            puVar15[5] = uVar2;
            *puVar14 = uVar3;
            puVar14[1] = uVar4;
            puVar14[2] = uVar5;
            puVar14[3] = uVar6;
            puVar14[4] = uVar7;
            puVar14[5] = uVar8;
          }
          iVar9 = iVar10;
        } while (iVar10 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar13 = puVar13 + -6;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 140675450 FUN_140675450 body=942 status=ok
// SIG undefined FUN_140675450(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_140675450(longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  bool bVar24;
  float fVar25;
  undefined1 auStack_378 [48];
  longlong local_348;
  longlong local_338;
  longlong lStack_330;
  undefined4 local_328;
  undefined1 local_320 [744];
  ulonglong local_38;
  
  if (1 < param_2) {
    local_38 = DAT_1468387a8 ^ (ulonglong)auStack_378;
    lStack_330 = param_2 * 0x30 + -0x30 + param_1;
    fVar25 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar25 = fVar25 + 1.8446744e+19;
    }
    local_338 = param_1;
    fVar25 = _guard_xfg_dispatch_icall_nop(fVar25);
    local_328 = (undefined4)(longlong)(fVar25 + fVar25);
    _guard_xfg_dispatch_icall_nop(local_320,0,0x2e8);
    plVar23 = &local_338;
    do {
      puVar22 = (undefined8 *)*plVar23;
      puVar17 = (undefined8 *)plVar23[1];
      lVar1 = plVar23[2];
      local_348._0_4_ = (int)lVar1;
      lVar16 = ((longlong)puVar17 - (longlong)puVar22) / 0x30 + 1;
      puVar21 = puVar22;
      if ((int)local_348 != 0) {
LAB_140675540:
        if (8 < lVar16) {
          if (lVar16 < 0) {
            lVar16 = lVar16 + 1;
          }
          puVar22 = puVar21 + (lVar16 >> 1) * 6;
          if (puVar22 != puVar21) {
            uVar9 = puVar21[1];
            uVar2 = *(undefined4 *)puVar22;
            uVar3 = *(undefined4 *)((longlong)puVar22 + 4);
            uVar4 = *(undefined4 *)(puVar22 + 1);
            uVar5 = *(undefined4 *)((longlong)puVar22 + 0xc);
            uVar10 = puVar22[2];
            uVar11 = puVar22[3];
            uVar12 = puVar22[4];
            uVar13 = puVar22[5];
            *puVar22 = *puVar21;
            puVar22[1] = uVar9;
            uVar9 = puVar21[3];
            puVar22[2] = puVar21[2];
            puVar22[3] = uVar9;
            uVar6 = *(undefined4 *)((longlong)puVar21 + 0x24);
            uVar7 = *(undefined4 *)(puVar21 + 5);
            uVar8 = *(undefined4 *)((longlong)puVar21 + 0x2c);
            *(undefined4 *)(puVar22 + 4) = *(undefined4 *)(puVar21 + 4);
            *(undefined4 *)((longlong)puVar22 + 0x24) = uVar6;
            *(undefined4 *)(puVar22 + 5) = uVar7;
            *(undefined4 *)((longlong)puVar22 + 0x2c) = uVar8;
            *(undefined4 *)puVar21 = uVar2;
            *(undefined4 *)((longlong)puVar21 + 4) = uVar3;
            *(undefined4 *)(puVar21 + 1) = uVar4;
            *(undefined4 *)((longlong)puVar21 + 0xc) = uVar5;
            puVar21[2] = uVar10;
            puVar21[3] = uVar11;
            puVar21[4] = uVar12;
            puVar21[5] = uVar13;
          }
          puVar19 = puVar17 + 6;
          puVar22 = puVar21;
LAB_1406755a0:
          puVar18 = puVar22;
          puVar22 = puVar18 + 6;
          if (puVar22 <= puVar17) goto code_r0x0001406755a9;
          goto LAB_1406755c6;
        }
        for (; puVar22 = puVar21, puVar19 = puVar21, puVar21 < puVar17; puVar17 = puVar17 + -6) {
          while (puVar18 = puVar22, puVar22 = puVar19 + 6, puVar22 <= puVar17) {
            bVar24 = *(uint *)(puVar18 + 1) < *(uint *)(puVar22 + 1);
            if (*(uint *)(puVar18 + 1) == *(uint *)(puVar22 + 1)) {
              bVar24 = *(uint *)((longlong)puVar18 + 0xc) < *(uint *)((longlong)puVar19 + 0x3c);
            }
            puVar19 = puVar22;
            if (!bVar24) {
              puVar22 = puVar18;
            }
          }
          if (puVar18 != puVar17) {
            uVar9 = puVar17[1];
            uVar10 = *puVar18;
            uVar11 = puVar18[1];
            uVar12 = puVar18[2];
            uVar13 = puVar18[3];
            uVar14 = puVar18[4];
            uVar15 = puVar18[5];
            *puVar18 = *puVar17;
            puVar18[1] = uVar9;
            uVar9 = puVar17[3];
            puVar18[2] = puVar17[2];
            puVar18[3] = uVar9;
            uVar9 = puVar17[5];
            puVar18[4] = puVar17[4];
            puVar18[5] = uVar9;
            *puVar17 = uVar10;
            puVar17[1] = uVar11;
            puVar17[2] = uVar12;
            puVar17[3] = uVar13;
            puVar17[4] = uVar14;
            puVar17[5] = uVar15;
          }
        }
        goto LAB_14067572a;
      }
LAB_14067571b:
      local_348 = lVar1;
      FUN_1406751d0(puVar22,lVar16,param_3,param_4);
LAB_14067572a:
      plVar23 = plVar23 + -3;
    } while (&local_338 <= plVar23);
  }
  return;
code_r0x0001406755a9:
  bVar24 = *(uint *)(puVar21 + 1) < *(uint *)(puVar18 + 7);
  if (*(uint *)(puVar21 + 1) == *(uint *)(puVar18 + 7)) {
    bVar24 = *(uint *)((longlong)puVar21 + 0xc) < *(uint *)((longlong)puVar18 + 0x3c);
  }
  if (!bVar24) goto LAB_1406755a0;
LAB_1406755c6:
  do {
    puVar20 = puVar19;
    puVar19 = puVar20 + -6;
    if (puVar19 <= puVar21) break;
    bVar24 = *(uint *)(puVar20 + -5) < *(uint *)(puVar21 + 1);
    if (*(uint *)(puVar20 + -5) == *(uint *)(puVar21 + 1)) {
      bVar24 = *(uint *)((longlong)puVar20 + -0x24) < *(uint *)((longlong)puVar21 + 0xc);
    }
  } while (!bVar24);
  if (puVar22 <= puVar19) {
    if (puVar22 != puVar19) {
      uVar9 = puVar20[-5];
      uVar2 = *(undefined4 *)puVar22;
      uVar3 = *(undefined4 *)((longlong)puVar18 + 0x34);
      uVar4 = *(undefined4 *)(puVar18 + 7);
      uVar5 = *(undefined4 *)((longlong)puVar18 + 0x3c);
      uVar10 = puVar18[8];
      uVar11 = puVar18[9];
      uVar12 = puVar18[10];
      uVar13 = puVar18[0xb];
      *puVar22 = *puVar19;
      puVar18[7] = uVar9;
      uVar9 = puVar20[-3];
      puVar18[8] = puVar20[-4];
      puVar18[9] = uVar9;
      uVar6 = *(undefined4 *)((longlong)puVar20 + -0xc);
      uVar7 = *(undefined4 *)(puVar20 + -1);
      uVar8 = *(undefined4 *)((longlong)puVar20 + -4);
      *(undefined4 *)(puVar18 + 10) = *(undefined4 *)(puVar20 + -2);
      *(undefined4 *)((longlong)puVar18 + 0x54) = uVar6;
      *(undefined4 *)(puVar18 + 0xb) = uVar7;
      *(undefined4 *)((longlong)puVar18 + 0x5c) = uVar8;
      *(undefined4 *)puVar19 = uVar2;
      *(undefined4 *)((longlong)puVar20 + -0x2c) = uVar3;
      *(undefined4 *)(puVar20 + -5) = uVar4;
      *(undefined4 *)((longlong)puVar20 + -0x24) = uVar5;
      puVar20[-4] = uVar10;
      puVar20[-3] = uVar11;
      puVar20[-2] = uVar12;
      puVar20[-1] = uVar13;
    }
    goto LAB_1406755a0;
  }
  if (puVar21 != puVar19) {
    uVar9 = puVar20[-5];
    uVar2 = *(undefined4 *)puVar21;
    uVar3 = *(undefined4 *)((longlong)puVar21 + 4);
    uVar4 = *(undefined4 *)(puVar21 + 1);
    uVar5 = *(undefined4 *)((longlong)puVar21 + 0xc);
    uVar10 = puVar21[2];
    uVar11 = puVar21[3];
    uVar12 = puVar21[4];
    uVar13 = puVar21[5];
    *puVar21 = *puVar19;
    puVar21[1] = uVar9;
    uVar9 = puVar20[-3];
    puVar21[2] = puVar20[-4];
    puVar21[3] = uVar9;
    uVar6 = *(undefined4 *)((longlong)puVar20 + -0xc);
    uVar7 = *(undefined4 *)(puVar20 + -1);
    uVar8 = *(undefined4 *)((longlong)puVar20 + -4);
    *(undefined4 *)(puVar21 + 4) = *(undefined4 *)(puVar20 + -2);
    *(undefined4 *)((longlong)puVar21 + 0x24) = uVar6;
    *(undefined4 *)(puVar21 + 5) = uVar7;
    *(undefined4 *)((longlong)puVar21 + 0x2c) = uVar8;
    *(undefined4 *)puVar19 = uVar2;
    *(undefined4 *)((longlong)puVar20 + -0x2c) = uVar3;
    *(undefined4 *)(puVar20 + -5) = uVar4;
    *(undefined4 *)((longlong)puVar20 + -0x24) = uVar5;
    puVar20[-4] = uVar10;
    puVar20[-3] = uVar11;
    puVar20[-2] = uVar12;
    puVar20[-1] = uVar13;
  }
  local_348._0_4_ = (int)local_348 + -1;
  lVar16 = (longlong)puVar19 + (-0x30 - (longlong)puVar21);
  lVar16 = lVar16 / 6 + (lVar16 >> 0x3f);
  if ((lVar16 >> 3) - (lVar16 >> 0x3f) < ((longlong)puVar17 - (longlong)puVar22) / 0x30) {
    if (puVar22 < puVar17) {
      *plVar23 = (longlong)puVar22;
      plVar23[1] = (longlong)puVar17;
      *(int *)(plVar23 + 2) = (int)local_348;
      plVar23 = plVar23 + 3;
    }
    if (puVar19 <= puVar21 + 6) goto LAB_14067572a;
    puVar17 = puVar20 + -0xc;
    puVar22 = puVar21;
  }
  else {
    if (puVar21 + 6 < puVar19) {
      *plVar23 = (longlong)puVar21;
      plVar23[1] = (longlong)(puVar20 + -0xc);
      *(int *)(plVar23 + 2) = (int)local_348;
      plVar23 = plVar23 + 3;
    }
    if (puVar17 <= puVar22) goto LAB_14067572a;
  }
  lVar16 = ((longlong)puVar17 - (longlong)puVar22) / 0x30 + 1;
  puVar21 = puVar22;
  if ((int)local_348 == 0) goto LAB_14067571b;
  goto LAB_140675540;
}



// FUNCTION 140675800 FUN_140675800 body=405 status=ok
// SIG undefined FUN_140675800(void)

int FUN_140675800(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)*param_1 != *(longlong *)*param_2;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      plVar6 = (longlong *)(*param_1 + lVar8 * 0x18);
      do {
        if (bVar13 != (*plVar6 != *(longlong *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 3;
      } while (lVar8 < lVar9);
    }
    iVar7 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar7 != 0) {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar11 * 0x18 + 0x10);
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 3;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x18),
                   (void *)(*param_1 + (longlong)iVar11 * 0x18),(longlong)iVar7 * 0x18);
      }
      iVar10 = iVar10 + iVar7;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 1406759a0 FUN_1406759a0 body=409 status=ok
// SIG undefined FUN_1406759a0(void)

int FUN_1406759a0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  
  iVar3 = (int)param_1[1];
  lVar9 = (longlong)iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar10 = 0;
  bVar13 = *(longlong *)*param_1 != *(longlong *)*param_2;
  lVar8 = 0;
  iVar11 = 0;
  do {
    lVar8 = lVar8 + 1;
    iVar12 = iVar11 + 1;
    if (lVar8 < lVar9) {
      plVar6 = (longlong *)(*param_1 + lVar8 * 0x28);
      do {
        if (bVar13 != (*plVar6 != *(longlong *)*param_2)) break;
        iVar12 = iVar12 + 1;
        lVar8 = lVar8 + 1;
        plVar6 = plVar6 + 5;
      } while (lVar8 < lVar9);
    }
    iVar7 = iVar12 - iVar11;
    if (bVar13 == false) {
      if (iVar7 != 0) {
        plVar6 = (longlong *)(*param_1 + (longlong)iVar11 * 0x28 + 0x10);
        do {
          plVar4 = (longlong *)*plVar6;
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
              iVar11 = *piVar2;
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (iVar11 == 1) {
                (**(code **)(*plVar4 + 8))(plVar4,1);
              }
            }
          }
          plVar6 = plVar6 + 5;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
    else {
      if (iVar10 != iVar11) {
        _guard_xfg_dispatch_icall_nop
                  ((void *)(*param_1 + (longlong)iVar10 * 0x28),
                   (void *)(*param_1 + (longlong)iVar11 * 0x28),(longlong)iVar7 * 0x28);
      }
      iVar10 = iVar10 + iVar7;
    }
    bVar13 = (bool)(bVar13 ^ 1);
    iVar11 = iVar12;
    if (lVar9 <= lVar8) {
      *(int *)(param_1 + 1) = iVar10;
      return iVar3 - iVar10;
    }
  } while( true );
}



// FUNCTION 140675b40 FUN_140675b40 body=144 status=ok
// SIG undefined FUN_140675b40(void)

undefined8 * FUN_140675b40(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar1 = param_1 + 1;
  *param_1 = *param_2;
  *plVar1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  if (((param_2 + 1 != plVar1) && (*(int *)(param_2 + 2) != 0)) &&
     (plVar2 = (longlong *)param_2[1], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))(plVar2,plVar1);
  }
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  return param_1;
}



// FUNCTION 140675bd0 FUN_140675bd0 body=199 status=ok
// SIG undefined FUN_140675bd0(void)

undefined8 * FUN_140675bd0(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = param_1 + 2;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *plVar2 = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if (((param_2 + 2 != plVar2) && (*(int *)(param_2 + 3) != 0)) &&
     (plVar1 = (longlong *)param_2[2], plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,plVar2);
  }
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (((param_2 + 4 != param_1 + 4) && (*(int *)(param_2 + 5) != 0)) &&
     (plVar2 = (longlong *)param_2[4], plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x30))();
  }
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0x44) = *(undefined4 *)((longlong)param_2 + 0x44);
  uVar3 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar3;
  return param_1;
}



// FUNCTION 140675ca0 FUN_140675ca0 body=182 status=ok
// SIG undefined FUN_140675ca0(void)

undefined8 * FUN_140675ca0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  *param_1 = &PTR_FUN_1440385e0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__144038610;
  param_1[2] = 0;
  iVar5 = *(int *)(param_2 + 0x18);
  lVar2 = *(longlong *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FActorSequenceObjectReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar5,0);
    puVar4 = (undefined8 *)param_1[2];
    puVar3 = (undefined8 *)(lVar2 + 8);
    do {
      *puVar4 = puVar3[-1];
      puVar4[1] = *puVar3;
      lVar2 = puVar3[1];
      puVar4[2] = lVar2;
      if (lVar2 != 0) {
        LOCK();
        *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
        UNLOCK();
      }
      puVar4[3] = puVar3[2];
      puVar1 = puVar3 + 3;
      puVar3 = puVar3 + 5;
      *(undefined4 *)(puVar4 + 4) = *(undefined4 *)puVar1;
      puVar4 = puVar4 + 5;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return param_1;
}



// FUNCTION 140675d60 FUN_140675d60 body=166 status=ok
// SIG undefined FUN_140675d60(void)

undefined8 * FUN_140675d60(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_1440385e0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  *param_1 = &PTR__scalar_deleting_destructor__1440385f8;
  param_1[2] = 0;
  iVar4 = *(int *)(param_2 + 0x18);
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(int *)(param_1 + 3) = iVar4;
  if (iVar4 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(param_1 + 2,iVar4,0);
    puVar3 = (undefined8 *)param_1[2];
    puVar2 = (undefined8 *)(lVar1 + 8);
    do {
      *puVar3 = puVar2[-1];
      puVar3[1] = *puVar2;
      lVar1 = puVar2[1];
      puVar3[2] = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      puVar3 = puVar3 + 3;
      puVar2 = puVar2 + 3;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return param_1;
}



// FUNCTION 140675e80 FUN_140675e80 body=63 status=ok
// SIG undefined FUN_140675e80(void)

undefined8 * FUN_140675e80(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_144039418;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[10] = 0;
  param_1[9] = &PTR__scalar_deleting_destructor__144038610;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 140676020 FUN_140676020 body=381 status=ok
// SIG undefined FUN_140676020(void)

undefined8 * FUN_140676020(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  void *pvVar6;
  ulonglong uVar7;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  
  pvVar6 = ThreadLocalStoragePointer;
  uVar7 = (ulonglong)_tls_index;
  *param_1 = 0;
  param_1[1] = 0;
  lVar4 = *(longlong *)((longlong)pvVar6 + uVar7 * 8);
  param_1[2] = 0;
  param_1[3] = 0;
  if ((*(int *)(lVar4 + 0x38) < DAT_146857760) &&
     (_Init_thread_header(&DAT_146857760), DAT_146857760 == -1)) {
    atexit((_func_5014 *)&LAB_143e406c0);
    _Init_thread_footer(&DAT_146857760);
  }
  if (DAT_14685775c < 0) {
    FUN_1406792d0(&DAT_146857750,0);
  }
  else {
    if (DAT_146857758 != 0) {
      plVar10 = (longlong *)(DAT_146857750 + 0x10);
      iVar9 = DAT_146857758;
      do {
        plVar5 = (longlong *)*plVar10;
        if (plVar5 != (longlong *)0x0) {
          LOCK();
          plVar1 = plVar5 + 1;
          lVar4 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar4 == 1) {
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
        plVar10 = plVar10 + 3;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    DAT_146857758 = 0;
  }
  (**(code **)(*param_2 + 8))(param_2,&DAT_146857750);
  lVar4 = DAT_146857750 + (longlong)DAT_146857758 * 0x18;
  for (lVar8 = DAT_146857750; lVar8 != lVar4; lVar8 = lVar8 + 0x18) {
    TArray<FKey,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FKey_const_&>(param_1 + 2,lVar8);
  }
  return param_1;
}



// FUNCTION 1406761a0 UInputDelegateBinding body=33 status=ok
// SIG undefined UInputDelegateBinding(void)

undefined8 * UInputDelegateBinding::UInputDelegateBinding(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_144038ab8;
  return param_1;
}



// FUNCTION 1406761d0 FUN_1406761d0 body=43 status=ok
// SIG undefined FUN_1406761d0(void)

undefined8 * FUN_1406761d0(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_144038ff8;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140676200 FUN_140676200 body=43 status=ok
// SIG undefined FUN_140676200(void)

undefined8 * FUN_140676200(undefined8 *param_1)

{
  UDynamicBlueprintBinding::UDynamicBlueprintBinding();
  *param_1 = &PTR_FUN_144038d58;
  param_1[5] = 0;
  param_1[6] = 0;
  return param_1;
}



// FUNCTION 140676230 FUN_140676230 body=229 status=ok
// SIG undefined FUN_140676230(void)

undefined8 * FUN_140676230(undefined8 *param_1)

{
  FUN_14235e750();
  *param_1 = &PTR_FUN_144038650;
  param_1[5] = &PTR_LAB_144038a60;
  param_1[0x40] = &PTR_LAB_144038a90;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(undefined4 *)((longlong)param_1 + 0x23c) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0xffffffff;
  param_1[0x49] = 0;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  *(byte *)(param_1 + 0x19) = *(byte *)(param_1 + 0x19) | 1;
  *(undefined1 *)(param_1 + 0x5d) = 1;
  *(undefined1 *)((longlong)param_1 + 0x2b9) = 1;
  return param_1;
}



// FUNCTION 140676320 FUN_140676320 body=179 status=ok
// SIG undefined FUN_140676320(void)

void FUN_140676320(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x140);
  iVar6 = *(int *)(param_1 + 0x148);
  lVar7 = lVar5;
  if (lVar5 == 0) {
    lVar7 = param_1;
  }
  if (iVar6 != 0) {
    plVar8 = (longlong *)(lVar7 + 0x10);
    do {
      plVar4 = (longlong *)*plVar8;
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
      plVar8 = plVar8 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    lVar5 = *(longlong *)(param_1 + 0x140);
  }
  if (lVar5 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 1406763e0 FUN_1406763e0 body=99 status=ok
// SIG undefined FUN_1406763e0(void)

void FUN_1406763e0(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar1);
      lVar1 = lVar1 + 0x58;
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



// FUNCTION 140676450 FUN_140676450 body=155 status=ok
// SIG undefined FUN_140676450(void)

void FUN_140676450(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = (int)param_1[1];
  lVar1 = *param_1;
  if (iVar2 != 0) {
    do {
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x50) != 0) {
        FMemory::Free();
      }
      if (*(longlong *)(lVar1 + 0x40) != 0) {
        FMemory::Free();
      }
      TArray<FNamedInterfaceDef,FDefaultAllocator>::~TArray<FNamedInterfaceDef,FDefaultAllocator>
                (lVar1 + 0x30);
      if (*(longlong *)(lVar1 + 0x20) != 0) {
        FMemory::Free();
      }
      FUN_1406764f0(lVar1 + 0x10);
      FUN_1406766c0(lVar1);
      lVar1 = lVar1 + 0x70;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    lVar1 = *param_1;
  }
  if (lVar1 != 0) {
    FMemory::Free(lVar1);
  }
  return;
}



// FUNCTION 1406764f0 FUN_1406764f0 body=135 status=ok
// SIG undefined FUN_1406764f0(void)

void FUN_1406764f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__144038610;
      FUN_140676620(puVar1 + 2);
      *puVar1 = &PTR_FUN_1440385e0;
      puVar1 = puVar1 + 4;
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



// FUNCTION 140676580 FUN_140676580 body=159 status=ok
// SIG undefined FUN_140676580(void)

void FUN_140676580(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  plVar1 = (longlong *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      plVar1[4] = (longlong)&PTR__scalar_deleting_destructor__144038610;
      FUN_140676620(plVar1 + 6);
      plVar1[4] = (longlong)&PTR_FUN_1440385e0;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar1 + 2);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar1);
  return;
}



// FUNCTION 140676620 FUN_140676620 body=159 status=ok
// SIG undefined FUN_140676620(void)

void FUN_140676620(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
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
      plVar7 = plVar7 + 5;
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



// FUNCTION 1406766c0 FUN_1406766c0 body=135 status=ok
// SIG undefined FUN_1406766c0(void)

void FUN_1406766c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)*param_1;
  iVar2 = *(int *)(param_1 + 1);
  if (iVar2 != 0) {
    do {
      *puVar1 = &PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(puVar1 + 2);
      *puVar1 = &PTR_FUN_1440385e0;
      puVar1 = puVar1 + 4;
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



// FUNCTION 140676750 FUN_140676750 body=225 status=ok
// SIG undefined FUN_140676750(void)

void FUN_140676750(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  int iVar6;
  longlong *plVar7;
  
  plVar7 = (longlong *)*param_1;
  iVar6 = *(int *)(param_1 + 1);
  if (iVar6 != 0) {
    do {
      plVar4 = (longlong *)plVar7[0xb];
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
      plVar7[4] = (longlong)&PTR__scalar_deleting_destructor__1440385f8;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar7 + 6);
      plVar7[4] = (longlong)&PTR_FUN_1440385e0;
      TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
      ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(plVar7 + 2);
      if (*plVar7 != 0) {
        FMemory::Free();
      }
      plVar7 = plVar7 + 0xc;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    plVar7 = (longlong *)*param_1;
  }
  if (plVar7 == (longlong *)0x0) {
    return;
  }
  FMemory::Free(plVar7);
  return;
}



// FUNCTION 140676840 ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator> body=159 status=ok
// SIG undefined ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(void)

void TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
     ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(longlong *param_1)

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
    plVar7 = (longlong *)(lVar5 + 0x10);
    do {
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
      plVar7 = plVar7 + 3;
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



// FUNCTION 1406768e0 ~TArray<FControllerIcons,TSizedDefaultAllocator<32>_> body=118 status=ok
// SIG undefined ~TArray<FControllerIcons,TSizedDefaultAllocator<32>_>(void)

void TArray<FControllerIcons,TSizedDefaultAllocator<32>_>::
     ~TArray<FControllerIcons,TSizedDefaultAllocator<32>_>(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar1 + 6);
      TArray<FSaveGameUserSetting,FDefaultAllocator>::
      ~TArray<FSaveGameUserSetting,FDefaultAllocator>(plVar1 + 4);
      if (plVar1[2] != 0) {
        FMemory::Free();
      }
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 8;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 140676960 FUN_140676960 body=44 status=ok
// SIG undefined FUN_140676960(void)

void FUN_140676960(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144038610;
  FUN_140676620(param_1 + 2);
  *param_1 = &PTR_FUN_1440385e0;
  return;
}



// FUNCTION 140676990 FUN_140676990 body=99 status=ok
// SIG undefined FUN_140676990(void)

void FUN_140676990(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_144039418;
  param_1[9] = &PTR__scalar_deleting_destructor__144038610;
  FUN_140676620(param_1 + 0xb);
  param_1[9] = &PTR_FUN_1440385e0;
  *param_1 = &PTR__scalar_deleting_destructor__144039298;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140676a00 FUN_140676a00 body=99 status=ok
// SIG undefined FUN_140676a00(void)

void FUN_140676a00(undefined8 *param_1)

{
  *param_1 = &PTR__scalar_deleting_destructor__144039308;
  param_1[9] = &PTR__scalar_deleting_destructor__1440385f8;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 0xb);
  param_1[9] = &PTR_FUN_1440385e0;
  *param_1 = &PTR__scalar_deleting_destructor__144039298;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 140676a70 FUN_140676a70 body=930 status=ok
// SIG undefined FUN_140676a70(void)

void FUN_140676a70(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x1e8);
  iVar8 = *(int *)(param_1 + 0x1f0);
  if (iVar8 != 0) {
    plVar6 = (longlong *)(lVar7 + 0x50);
    do {
      TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
      ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(plVar6 + 2);
      *(undefined4 *)(plVar6 + 1) = 0;
      if (*plVar6 != 0) {
        FMemory::Free();
      }
      FUN_140679550(plVar6 + -8,0);
      if (plVar6[-4] != 0) {
        FMemory::Free();
      }
      if (plVar6[-8] != 0) {
        FMemory::Free();
      }
      plVar6 = plVar6 + 0xe;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x1e8);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>::
  ~TArray<TSharedRef<FShaderCommonCompileJob,1>,TSizedDefaultAllocator<32>_>(param_1 + 0x1d8);
  iVar8 = *(int *)(param_1 + 0x1d0);
  lVar7 = *(longlong *)(param_1 + 0x1c8);
  if (iVar8 != 0) {
    plVar6 = (longlong *)(lVar7 + 0x18);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar6 + 1);
      plVar4 = (longlong *)*plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar6 = plVar6 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x1c8);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  iVar8 = *(int *)(param_1 + 0x1c0);
  lVar7 = *(longlong *)(param_1 + 0x1b8);
  if (iVar8 != 0) {
    plVar6 = (longlong *)(lVar7 + 0x20);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar6 + 1);
      plVar4 = (longlong *)*plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar6 = plVar6 + 9;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x1b8);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  iVar8 = *(int *)(param_1 + 0x1b0);
  lVar7 = *(longlong *)(param_1 + 0x1a8);
  if (iVar8 != 0) {
    plVar6 = (longlong *)(lVar7 + 0x18);
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(plVar6 + 1);
      plVar4 = (longlong *)*plVar6;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar4 + 1;
        lVar7 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)lVar7 == 1) {
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
      plVar6 = plVar6 + 8;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x1a8);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  iVar8 = *(int *)(param_1 + 0x1a0);
  lVar7 = *(longlong *)(param_1 + 0x198);
  if (iVar8 != 0) {
    lVar7 = lVar7 + 0x10;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      lVar7 = lVar7 + 0x38;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x198);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  iVar8 = *(int *)(param_1 + 400);
  lVar7 = *(longlong *)(param_1 + 0x188);
  if (iVar8 != 0) {
    lVar7 = lVar7 + 8;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      lVar7 = lVar7 + 0x28;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x188);
  }
  if (lVar7 != 0) {
    FMemory::Free();
  }
  iVar8 = *(int *)(param_1 + 0x180);
  lVar7 = *(longlong *)(param_1 + 0x178);
  if (iVar8 != 0) {
    lVar7 = lVar7 + 0x28;
    do {
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7 + 0x10);
      TBaseDelegate<FText>::~TBaseDelegate<FText>(lVar7);
      plVar6 = *(longlong **)(lVar7 + -0x10);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        plVar4 = plVar6 + 1;
        lVar5 = *plVar4;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)lVar5 == 1) {
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
      lVar7 = lVar7 + 0x60;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    lVar7 = *(longlong *)(param_1 + 0x178);
  }
  if (lVar7 != 0) {
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



// FUNCTION 140676e20 FUN_140676e20 body=503 status=ok
// SIG undefined FUN_140676e20(void)

longlong FUN_140676e20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  void *pvVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  undefined8 *puVar8;
  
  FString::operator=();
  FString::operator=(param_1 + 0x10,param_2 + 0x10);
  plVar1 = (longlong *)(param_1 + 0x20);
  if (plVar1 != (longlong *)(param_2 + 0x20)) {
    plVar5 = (longlong *)*plVar1;
    for (iVar7 = *(int *)(param_1 + 0x28); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (plVar5[2] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
    }
    iVar7 = *(int *)(param_2 + 0x28);
    lVar3 = *(longlong *)(param_2 + 0x20);
    *(int *)(param_1 + 0x28) = iVar7;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x2c) == 0)) {
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      lVar6 = *plVar1;
      if (iVar7 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x10);
        do {
          FString::FString(lVar6,puVar8 + -2);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          iVar2 = *(int *)(puVar8 + 1);
          pvVar4 = (void *)*puVar8;
          *(int *)(lVar6 + 0x18) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(lVar6 + 0x1c) = 0;
          }
          else {
            TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy
                      (lVar6 + 0x10,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar6 + 0x10),pvVar4,(longlong)iVar2 << 3);
          }
          lVar6 = lVar6 + 0x20;
          puVar8 = puVar8 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  plVar1 = (longlong *)(param_1 + 0x30);
  if (plVar1 != (longlong *)(param_2 + 0x30)) {
    plVar5 = (longlong *)*plVar1;
    for (iVar7 = *(int *)(param_1 + 0x38); iVar7 != 0; iVar7 = iVar7 + -1) {
      if (plVar5[2] != 0) {
        FMemory::Free();
      }
      if (*plVar5 != 0) {
        FMemory::Free();
      }
      plVar5 = plVar5 + 4;
    }
    iVar7 = *(int *)(param_2 + 0x38);
    lVar3 = *(longlong *)(param_2 + 0x30);
    *(int *)(param_1 + 0x38) = iVar7;
    if ((iVar7 == 0) && (*(int *)(param_1 + 0x3c) == 0)) {
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    else {
      TArray<FStringFormatArg,FDefaultAllocator>::ResizeForCopy(plVar1,iVar7);
      lVar6 = *plVar1;
      if (iVar7 != 0) {
        puVar8 = (undefined8 *)(lVar3 + 0x10);
        do {
          FString::FString(lVar6,puVar8 + -2);
          *(undefined8 *)(lVar6 + 0x10) = 0;
          iVar2 = *(int *)(puVar8 + 1);
          pvVar4 = (void *)*puVar8;
          *(int *)(lVar6 + 0x18) = iVar2;
          if (iVar2 == 0) {
            *(undefined4 *)(lVar6 + 0x1c) = 0;
          }
          else {
            TArray<FBoneReference,FDefaultAllocator>::ResizeForCopy(lVar6 + 0x10,iVar2,0);
            _guard_xfg_dispatch_icall_nop(*(void **)(lVar6 + 0x10),pvVar4,(longlong)iVar2 * 0x18);
          }
          lVar6 = lVar6 + 0x20;
          puVar8 = puVar8 + 4;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
      }
    }
  }
  return param_1;
}



// FUNCTION 140677020 FUN_140677020 body=125 status=ok
// SIG undefined FUN_140677020(void)

ulonglong FUN_140677020(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x30) | *(uint *)(param_1 + 0x34) | *(uint *)(param_1 + 0x38) |
          *(uint *)(param_1 + 0x3c);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x30) | *(uint *)(param_2 + 0x34) | *(uint *)(param_2 + 0x38) |
            *(uint *)(param_2 + 0x3c);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) &&
       (((*(uint *)(param_2 + 0x30) == *(uint *)(param_1 + 0x30) &&
         *(uint *)(param_2 + 0x34) == *(uint *)(param_1 + 0x34)) &&
        *(uint *)(param_2 + 0x38) == *(uint *)(param_1 + 0x38)) &&
        *(uint *)(param_2 + 0x3c) == *(uint *)(param_1 + 0x3c))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 1406770a0 FUN_1406770a0 body=125 status=ok
// SIG undefined FUN_1406770a0(void)

ulonglong FUN_1406770a0(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x48) | *(uint *)(param_1 + 0x4c) | *(uint *)(param_1 + 0x50) |
          *(uint *)(param_1 + 0x54);
  uVar2 = (ulonglong)uVar1;
  if (uVar1 != 0) {
    uVar1 = *(uint *)(param_2 + 0x48) | *(uint *)(param_2 + 0x4c) | *(uint *)(param_2 + 0x50) |
            *(uint *)(param_2 + 0x54);
    uVar2 = (ulonglong)uVar1;
    if ((uVar1 != 0) &&
       (((*(uint *)(param_2 + 0x48) == *(uint *)(param_1 + 0x48) &&
         *(uint *)(param_2 + 0x4c) == *(uint *)(param_1 + 0x4c)) &&
        *(uint *)(param_2 + 0x50) == *(uint *)(param_1 + 0x50)) &&
        *(uint *)(param_2 + 0x54) == *(uint *)(param_1 + 0x54))) {
      return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
    }
  }
  return uVar2 & 0xffffffffffffff00;
}



// FUNCTION 140677120 FUN_140677120 body=171 status=ok
// SIG undefined FUN_140677120(void)

undefined8 FUN_140677120(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  float *pfVar4;
  float *pfVar5;
  longlong *plVar6;
  
  if (param_1 != param_2) {
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return 0;
    }
    plVar6 = *(longlong **)(param_1 + 0x10);
    plVar1 = plVar6 + (longlong)*(int *)(param_1 + 0x18) * 5;
    if (plVar6 != plVar1) {
      plVar2 = *(longlong **)(param_2 + 0x10);
      pfVar5 = (float *)(plVar6 + 4);
      do {
        if (plVar2 == plVar2 + (longlong)*(int *)(param_2 + 0x18) * 5) {
          return 0;
        }
        pfVar4 = (float *)(plVar2 + 4);
        plVar3 = plVar2;
        while ((((*plVar3 != *plVar6 || (pfVar5[-2] != pfVar4[-2])) || (pfVar5[-1] != pfVar4[-1]))
               || (*pfVar5 != *pfVar4))) {
          plVar3 = plVar3 + 5;
          pfVar4 = pfVar4 + 10;
          if (plVar3 == plVar2 + (longlong)*(int *)(param_2 + 0x18) * 5) {
            return 0;
          }
        }
        plVar6 = plVar6 + 5;
        pfVar5 = pfVar5 + 10;
      } while (plVar6 != plVar1);
    }
  }
  return 1;
}



// FUNCTION 1406771f0 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12DynamicRHIModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144038610;
  FUN_140676620(param_1 + 2);
  *param_1 = &PTR_FUN_1440385e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140677240 `scalar_deleting_destructor' body=76 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FD3D12DynamicRHIModule::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440385f8;
  TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>::
  ~TArray<TTuple<FName,TSharedPtr<FCulture,1>_>,FDefaultAllocator>(param_1 + 2);
  *param_1 = &PTR_FUN_1440385e0;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x20);
  }
  return param_1;
}



// FUNCTION 140677290 `scalar_deleting_destructor' body=86 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
Chaos::Softs::FPBDExtremeDeformationConstraints::_scalar_deleting_destructor_
          (undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144039298;
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x48);
  }
  return param_1;
}



// FUNCTION 1406772f0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundEffectSubmix::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144039488;
  FUN_140676990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140677330 FUN_140677330 body=52 status=ok
// SIG undefined FUN_140677330(void)

undefined8 FUN_140677330(undefined8 param_1,ulonglong param_2)

{
  FUN_140676990();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x70);
  }
  return param_1;
}



// FUNCTION 140677370 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 FWorldTilesGatherer::_scalar_deleting_destructor_(undefined8 param_1,ulonglong param_2)

{
  FUN_140676a00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 1406773b0 `scalar_deleting_destructor' body=62 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FSoundEffectSubmix::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__1440394f8;
  FUN_140676a00();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}


