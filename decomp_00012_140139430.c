// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140139430 `dynamic_initializer_for_'ModuleRegistrantActorSequence'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantActorSequence''(void)

void _dynamic_initializer_for__ModuleRegistrantActorSequence__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)
              TBaseRawMethodDelegateInstance<0,FStaticallyLinkedModuleRegistrant<FDefaultModuleImpl>,class_IModuleInterface*___ptr64___cdecl(void)>
              ::vftable;
    plVar1[1] = (longlong)&DAT_146862d64;
    plVar1[2] = (longlong)FUN_14043cbe0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ActorSequence",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 1401395c0 `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference''(void)

void _dynamic_initializer_for__ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReference__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1441600f8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReference",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140139620 `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap''(void)

void _dynamic_initializer_for__ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferenceMap__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x20;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14415fec8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReferenceMap",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140139680 `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences''(void)

void _dynamic_initializer_for__ScriptStruct_ActorSequence_StaticRegisterNativesFActorSequenceObjectReferences__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14415ffe0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReferences",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 140139700 FUN_140139700 body=66 status=ok
// SIG undefined FUN_140139700(void)

void FUN_140139700(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EActorSequenceObjectReferenceType",1);
  UObjectCompiledInDeferEnum
            (EActorSequenceObjectReferenceType_StaticEnum,L"/Script/ActorSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140139750 FUN_140139750 body=66 status=ok
// SIG undefined FUN_140139750(void)

void FUN_140139750(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReference",1);
  UObjectCompiledInDeferStruct
            (FActorSequenceObjectReference::StaticStruct,L"/Script/ActorSequence",*puVar1,0,0);
  return;
}



// FUNCTION 1401397a0 FUN_1401397a0 body=66 status=ok
// SIG undefined FUN_1401397a0(void)

void FUN_1401397a0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReferenceMap",1);
  UObjectCompiledInDeferStruct
            (FActorSequenceObjectReferenceMap::StaticStruct,L"/Script/ActorSequence",*puVar1,0,0);
  return;
}



// FUNCTION 1401397f0 FUN_1401397f0 body=66 status=ok
// SIG undefined FUN_1401397f0(void)

void FUN_1401397f0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ActorSequenceObjectReferences",1);
  UObjectCompiledInDeferStruct
            (FActorSequenceObjectReferences::StaticStruct,L"/Script/ActorSequence",*puVar1,0,0);
  return;
}



// FUNCTION 140139840 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequence'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequence''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UActorSequence__(void)

{
  UObjectCompiledInDefer
            (FUN_1409275e0,UActorSequence::GetPrivateStaticClass,L"UActorSequence",
             L"/Script/ActorSequence",0,0,0);
  return;
}



// FUNCTION 140139880 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequenceComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequenceComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UActorSequenceComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_140927610,FUN_140926bb0,L"UActorSequenceComponent",L"/Script/ActorSequence",0,0,0);
  return;
}



// FUNCTION 1401398c0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequencePlayer'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UActorSequencePlayer''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UActorSequencePlayer__(void)

{
  UObjectCompiledInDefer
            (FUN_140927640,FUN_140926d40,L"UActorSequencePlayer",L"/Script/ActorSequence",0,0,0);
  return;
}



// FUNCTION 140139cd0 `dynamic_initializer_for_'ModuleRegistrantLauncherChunkInstaller'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantLauncherChunkInstaller''(void)

void _dynamic_initializer_for__ModuleRegistrantLauncherChunkInstaller__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1468631c0;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FLauncherChunkInstallerModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"LauncherChunkInstaller",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 140139dd0 FUN_140139dd0 body=126 status=ok
// SIG undefined FUN_140139dd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139dd0(void)

{
  _DAT_1468634a0 = CONCAT44(DAT_1468631d0,DAT_1468631d0);
  uRam00000001468634a8 = CONCAT44(DAT_1468631d0,DAT_1468631d0);
  return;
}



// FUNCTION 140139e50 FUN_140139e50 body=83 status=ok
// SIG undefined FUN_140139e50(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139e50(void)

{
  _DAT_146863240 = 0xffffffffffffffff;
  uRam0000000146863248 = 0xffffffffffffffff;
  return;
}



// FUNCTION 140139eb0 FUN_140139eb0 body=41 status=ok
// SIG undefined FUN_140139eb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139eb0(void)

{
  _DAT_146863360 = 0x3727c5ac3727c5ac;
  uRam0000000146863368 = 0x3727c5ac3727c5ac;
  return;
}



// FUNCTION 140139ee0 FUN_140139ee0 body=126 status=ok
// SIG undefined FUN_140139ee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139ee0(void)

{
  _DAT_146863410 = CONCAT44(DAT_1468631d4,DAT_1468631d4);
  uRam0000000146863418 = CONCAT44(DAT_1468631d4,DAT_1468631d4);
  return;
}



// FUNCTION 140139f60 FUN_140139f60 body=41 status=ok
// SIG undefined FUN_140139f60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139f60(void)

{
  _DAT_1468632c0 = 0x7f7fc99e7f7fc99e;
  uRam00000001468632c8 = 0x7f7fc99e7f7fc99e;
  return;
}



// FUNCTION 140139fa0 FUN_140139fa0 body=41 status=ok
// SIG undefined FUN_140139fa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139fa0(void)

{
  _DAT_1468632a0 = 0x3c8efa353c8efa35;
  uRam00000001468632a8 = 0x3c8efa353c8efa35;
  return;
}



// FUNCTION 140139fd0 FUN_140139fd0 body=41 status=ok
// SIG undefined FUN_140139fd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140139fd0(void)

{
  _DAT_146863480 = 0x3c0efa353c0efa35;
  uRam0000000146863488 = 0x3c0efa353c0efa35;
  return;
}



// FUNCTION 14013a570 FUN_14013a570 body=41 status=ok
// SIG undefined FUN_14013a570(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a570(void)

{
  _DAT_1468632f0 = 0;
  uRam00000001468632f8 = 0x3f80000000000000;
  return;
}



// FUNCTION 14013a5a0 FUN_14013a5a0 body=41 status=ok
// SIG undefined FUN_14013a5a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a5a0(void)

{
  _DAT_1468634e0 = 0x3f8000003f800000;
  uRam00000001468634e8 = 0xbf8000003f800000;
  return;
}



// FUNCTION 14013a5d0 FUN_14013a5d0 body=41 status=ok
// SIG undefined FUN_14013a5d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a5d0(void)

{
  _DAT_146863430 = 0x42fe000042fe0000;
  uRam0000000146863438 = 0x42fe000042fe0000;
  return;
}



// FUNCTION 14013a600 FUN_14013a600 body=41 status=ok
// SIG undefined FUN_14013a600(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a600(void)

{
  _DAT_1468635a0 = 0x4334000043340000;
  uRam00000001468635a8 = 0x4334000043340000;
  return;
}



// FUNCTION 14013a630 FUN_14013a630 body=41 status=ok
// SIG undefined FUN_14013a630(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a630(void)

{
  _DAT_146863420 = 0x437f0000437f0000;
  uRam0000000146863428 = 0x437f0000437f0000;
  return;
}



// FUNCTION 14013a660 FUN_14013a660 body=41 status=ok
// SIG undefined FUN_14013a660(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a660(void)

{
  _DAT_146863270 = 0x43b4000043b40000;
  uRam0000000146863278 = 0x43b4000043b40000;
  return;
}



// FUNCTION 14013a690 FUN_14013a690 body=126 status=ok
// SIG undefined FUN_14013a690(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a690(void)

{
  _DAT_146863300 = 0x3fffffff3fffffff;
  uRam0000000146863308 = 0x3fffffff3fffffff;
  return;
}



// FUNCTION 14013a710 FUN_14013a710 body=83 status=ok
// SIG undefined FUN_14013a710(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a710(void)

{
  _DAT_146863550 = 0x7f8000007f800000;
  uRam0000000146863558 = 0x7f8000007f800000;
  return;
}



// FUNCTION 14013a770 FUN_14013a770 body=41 status=ok
// SIG undefined FUN_14013a770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a770(void)

{
  _DAT_146863330 = 0x3f800000bf800000;
  uRam0000000146863338 = 0x3f8000003f800000;
  return;
}



// FUNCTION 14013a7a0 FUN_14013a7a0 body=41 status=ok
// SIG undefined FUN_14013a7a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a7a0(void)

{
  _DAT_1468634c0 = 0xbf800000bf800000;
  uRam00000001468634c8 = 0xbf800000bf800000;
  return;
}



// FUNCTION 14013a7d0 FUN_14013a7d0 body=41 status=ok
// SIG undefined FUN_14013a7d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a7d0(void)

{
  _DAT_1468631f0 = 0xbf000000bf000000;
  uRam00000001468631f8 = 0xbf000000bf000000;
  return;
}



// FUNCTION 14013a800 FUN_14013a800 body=41 status=ok
// SIG undefined FUN_14013a800(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a800(void)

{
  _DAT_1468634d0 = 0xc2fe0000c2fe0000;
  uRam00000001468634d8 = 0xc2fe0000c2fe0000;
  return;
}



// FUNCTION 14013a830 FUN_14013a830 body=41 status=ok
// SIG undefined FUN_14013a830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a830(void)

{
  _DAT_146863490 = 0x3f8000003f800000;
  uRam0000000146863498 = 0x3f8000003f800000;
  return;
}



// FUNCTION 14013a860 FUN_14013a860 body=41 status=ok
// SIG undefined FUN_14013a860(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a860(void)

{
  _DAT_1468633f0 = 0x3f0000003f000000;
  uRam00000001468633f8 = 0x3f0000003f000000;
  return;
}



// FUNCTION 14013a890 FUN_14013a890 body=41 status=ok
// SIG undefined FUN_14013a890(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a890(void)

{
  _DAT_1468632d0 = 0x3c23d70a3c23d70a;
  uRam00000001468632d8 = 0x3c23d70a3c23d70a;
  return;
}



// FUNCTION 14013a8c0 FUN_14013a8c0 body=41 status=ok
// SIG undefined FUN_14013a8c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a8c0(void)

{
  _DAT_1468632e0 = 0x4000000040000000;
  uRam00000001468632e8 = 0x4000000040000000;
  return;
}



// FUNCTION 14013a8f0 FUN_14013a8f0 body=41 status=ok
// SIG undefined FUN_14013a8f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a8f0(void)

{
  _DAT_146863400 = 0;
  uRam0000000146863408 = 0;
  return;
}



// FUNCTION 14013a920 FUN_14013a920 body=47 status=ok
// SIG undefined FUN_14013a920(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a920(void)

{
  _DAT_146863200 = 0xffffffffffffffff;
  uRam0000000146863208 = 0xffffffffffffffff;
  return;
}



// FUNCTION 14013a950 FUN_14013a950 body=47 status=ok
// SIG undefined FUN_14013a950(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a950(void)

{
  _DAT_146863350 = 0xffffffffffffffff;
  uRam0000000146863358 = 0xffffffffffffffff;
  return;
}



// FUNCTION 14013a980 FUN_14013a980 body=47 status=ok
// SIG undefined FUN_14013a980(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a980(void)

{
  _DAT_146863510 = 0x100000001;
  uRam0000000146863518 = 0x100000001;
  return;
}



// FUNCTION 14013a9b0 FUN_14013a9b0 body=47 status=ok
// SIG undefined FUN_14013a9b0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a9b0(void)

{
  _DAT_1468634b0 = 0x8000000080000000;
  uRam00000001468634b8 = 0x8000000080000000;
  return;
}



// FUNCTION 14013a9e0 FUN_14013a9e0 body=47 status=ok
// SIG undefined FUN_14013a9e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013a9e0(void)

{
  _DAT_146863570 = 0x7fffffff7fffffff;
  uRam0000000146863578 = 0x7fffffff7fffffff;
  return;
}



// FUNCTION 14013aa10 FUN_14013aa10 body=47 status=ok
// SIG undefined FUN_14013aa10(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013aa10(void)

{
  _DAT_146863560 = 0;
  uRam0000000146863568 = 0;
  return;
}



// FUNCTION 14013aa40 `dynamic_initializer_for_'InvalidBoundingBox'' body=73 status=ok
// SIG undefined `dynamic_initializer_for_'InvalidBoundingBox''(void)

void FNavigationSystem::_dynamic_initializer_for__InvalidBoundingBox__(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  
  puVar2 = &DAT_1468b5d90;
  puVar3 = &DAT_14686345c;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *(undefined1 *)puVar2;
    puVar2 = (undefined4 *)((longlong)puVar2 + 1);
    puVar3 = puVar3 + 1;
  }
  puVar3 = &DAT_14686345c;
  puVar4 = &DAT_146863450;
  for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  DAT_146863468 = 0;
  return;
}



// FUNCTION 14013aad0 FUN_14013aad0 body=41 status=ok
// SIG undefined FUN_14013aad0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013aad0(void)

{
  _DAT_146863500 = 0x38d1b71738d1b717;
  uRam0000000146863508 = 0x38d1b71738d1b717;
  return;
}



// FUNCTION 14013ab00 FUN_14013ab00 body=41 status=ok
// SIG undefined FUN_14013ab00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ab00(void)

{
  _DAT_146863230 = 0x3ea2f9833ea2f983;
  uRam0000000146863238 = 0x3ea2f9833ea2f983;
  return;
}



// FUNCTION 14013ab30 FUN_14013ab30 body=41 status=ok
// SIG undefined FUN_14013ab30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ab30(void)

{
  _DAT_146863290 = 0x3e22f9833e22f983;
  uRam0000000146863298 = 0x3e22f9833e22f983;
  return;
}



// FUNCTION 14013ab60 FUN_14013ab60 body=41 status=ok
// SIG undefined FUN_14013ab60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ab60(void)

{
  _DAT_146863540 = 0x40490fdb40490fdb;
  uRam0000000146863548 = 0x40490fdb40490fdb;
  return;
}



// FUNCTION 14013ab90 FUN_14013ab90 body=41 status=ok
// SIG undefined FUN_14013ab90(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ab90(void)

{
  _DAT_146863530 = 0x3f490fdb3f490fdb;
  uRam0000000146863538 = 0x3f490fdb3f490fdb;
  return;
}



// FUNCTION 14013abc0 FUN_14013abc0 body=41 status=ok
// SIG undefined FUN_14013abc0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013abc0(void)

{
  _DAT_1468631e0 = 0x3fc90fdb3fc90fdb;
  uRam00000001468631e8 = 0x3fc90fdb3fc90fdb;
  return;
}



// FUNCTION 14013abf0 FUN_14013abf0 body=41 status=ok
// SIG undefined FUN_14013abf0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013abf0(void)

{
  _DAT_146863470 = 0xbf800000bf800000;
  uRam0000000146863478 = 0x3f800000bf800000;
  return;
}



// FUNCTION 14013ac20 FUN_14013ac20 body=41 status=ok
// SIG undefined FUN_14013ac20(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ac20(void)

{
  _DAT_146863280 = 0xbf8000003f800000;
  uRam0000000146863288 = 0xbf8000003f800000;
  return;
}



// FUNCTION 14013ac50 FUN_14013ac50 body=41 status=ok
// SIG undefined FUN_14013ac50(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ac50(void)

{
  _DAT_146863340 = 0x3f8000003f800000;
  uRam0000000146863348 = 0xbf800000bf800000;
  return;
}



// FUNCTION 14013ac80 FUN_14013ac80 body=41 status=ok
// SIG undefined FUN_14013ac80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ac80(void)

{
  _DAT_146863310 = 0x3f800000bf800000;
  uRam0000000146863318 = 0xbf8000003f800000;
  return;
}



// FUNCTION 14013acb0 FUN_14013acb0 body=41 status=ok
// SIG undefined FUN_14013acb0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013acb0(void)

{
  _DAT_146863580 = 0x42652ee042652ee0;
  uRam0000000146863588 = 0x42652ee042652ee0;
  return;
}



// FUNCTION 14013ace0 FUN_14013ace0 body=41 status=ok
// SIG undefined FUN_14013ace0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ace0(void)

{
  _DAT_1468632b0 = 0x3f8000003f800000;
  uRam00000001468632b8 = 0x3f8000003f800000;
  return;
}



// FUNCTION 14013ad10 FUN_14013ad10 body=83 status=ok
// SIG undefined FUN_14013ad10(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ad10(void)

{
  _DAT_146863260 = 0x8000000080000000;
  uRam0000000146863268 = 0x8000000080000000;
  return;
}



// FUNCTION 14013ad70 FUN_14013ad70 body=83 status=ok
// SIG undefined FUN_14013ad70(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ad70(void)

{
  _DAT_146863320 = 0x7fffffff7fffffff;
  uRam0000000146863328 = 0x7fffffff7fffffff;
  return;
}



// FUNCTION 14013add0 FUN_14013add0 body=41 status=ok
// SIG undefined FUN_14013add0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013add0(void)

{
  _DAT_146863220 = 0x322bcc77322bcc77;
  uRam0000000146863228 = 0x322bcc77322bcc77;
  return;
}



// FUNCTION 14013ae00 FUN_14013ae00 body=41 status=ok
// SIG undefined FUN_14013ae00(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ae00(void)

{
  _DAT_146863520 = 0x322bcc77322bcc77;
  uRam0000000146863528 = 0x322bcc77322bcc77;
  return;
}



// FUNCTION 14013ae30 FUN_14013ae30 body=41 status=ok
// SIG undefined FUN_14013ae30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ae30(void)

{
  _DAT_146863250 = 0x3c23d70a3c23d70a;
  uRam0000000146863258 = 0x3c23d70a3c23d70a;
  return;
}



// FUNCTION 14013ae60 FUN_14013ae60 body=41 status=ok
// SIG undefined FUN_14013ae60(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013ae60(void)

{
  _DAT_146863210 = 0x40c90fdb40c90fdb;
  uRam0000000146863218 = 0x40c90fdb40c90fdb;
  return;
}



// FUNCTION 14013ae90 `dynamic_initializer_for_'VirtualBonePrefix'' body=314 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

/* WARNING: Removing unreachable block (ram,0x00014013af9d) */

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  int iVar1;
  longlong local_40;
  
  DAT_146863590 = 0;
  DAT_14686359c = 0;
  local_40 = -1;
  do {
    local_40 = local_40 + 1;
  } while ((&DAT_144160c80)[local_40] != 0);
  iVar1 = (int)local_40 + 1;
  DAT_146863598 = iVar1;
  if (0 < iVar1) {
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146863590,0);
  }
  FGenericPlatformString::Memcpy(DAT_146863590,&DAT_144160c80,(longlong)iVar1 << 1);
  atexit(_dynamic_atexit_destructor_for__VirtualBonePrefix__);
  return;
}



// FUNCTION 14013afd0 FUN_14013afd0 body=83 status=ok
// SIG undefined FUN_14013afd0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013afd0(void)

{
  _DAT_1468634f0 = 0xffffffffffffffff;
  uRam00000001468634f8 = 0xffffffff;
  return;
}



// FUNCTION 14013b030 `dynamic_initializer_for_'a'' body=45 status=ok
// SIG undefined `dynamic_initializer_for_'a''(void)

void VectorSinConstantsSSE::_dynamic_initializer_for__a__(void)

{
  float fVar1;
  
  fVar1 = ::_guard_xfg_dispatch_icall_nop(0.225);
  DAT_1468631d0 = fVar1 * 16.0;
  return;
}



// FUNCTION 14013b060 `dynamic_initializer_for_'b'' body=45 status=ok
// SIG undefined `dynamic_initializer_for_'b''(void)

void VectorSinConstantsSSE::_dynamic_initializer_for__b__(void)

{
  float fVar1;
  
  fVar1 = ::_guard_xfg_dispatch_icall_nop(0.225);
  DAT_1468631d4 = 0.775 / fVar1;
  return;
}



// FUNCTION 14013b090 FUN_14013b090 body=41 status=ok
// SIG undefined FUN_14013b090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b090(void)

{
  _DAT_1468635c0 = 0x4334000043340000;
  uRam00000001468635c8 = 0x4334000043340000;
  return;
}



// FUNCTION 14013b0c0 FUN_14013b0c0 body=41 status=ok
// SIG undefined FUN_14013b0c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b0c0(void)

{
  _DAT_1468635d0 = 0x43b4000043b40000;
  uRam00000001468635d8 = 0x43b4000043b40000;
  return;
}



// FUNCTION 14013b0f0 `dynamic_initializer_for_'ModuleRegistrantAudioCapture'' body=28 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantAudioCapture''(void)

void _dynamic_initializer_for__ModuleRegistrantAudioCapture__(void)

{
  FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>::
  FStaticallyLinkedModuleRegistrant<FAudioCaptureModule>(&DAT_1468635b0,"AudioCapture");
  return;
}



// FUNCTION 14013b160 FUN_14013b160 body=126 status=ok
// SIG undefined FUN_14013b160(void)

void FUN_14013b160(void)

{
  DAT_1468635e8 = 0x700;
  DAT_1468635f0 = 0xc2fbef1d;
  DAT_1468635f8 = 0;
  DAT_146863600 = 0;
  DAT_1468635e0 = &PTR_FUN_144162c88;
  UClassCompiledInDefer(&DAT_1468635e0,L"UAudioCaptureComponent",0x700,0xc2fbef1d);
  return;
}



// FUNCTION 14013b1e0 FUN_14013b1e0 body=41 status=ok
// SIG undefined FUN_14013b1e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b1e0(void)

{
  _DAT_146863610 = 0x4334000043340000;
  uRam0000000146863618 = 0x4334000043340000;
  return;
}



// FUNCTION 14013b210 FUN_14013b210 body=41 status=ok
// SIG undefined FUN_14013b210(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b210(void)

{
  _DAT_146863620 = 0x43b4000043b40000;
  uRam0000000146863628 = 0x43b4000043b40000;
  return;
}



// FUNCTION 14013b240 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAudioCaptureComponent'' body=152 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UAudioCaptureComponent''(void)

/* WARNING: Removing unreachable block (ram,0x00014013b24a) */

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UAudioCaptureComponent__(void)

{
  UObjectCompiledInDefer
            (Z_Construct_UPackage__Script_AudioCapture,FUN_14093ce30,L"UAudioCaptureComponent",
             L"/Script/AudioCapture",0,0,0);
  return;
}



// FUNCTION 14013b2f0 FUN_14013b2f0 body=256 status=ok
// SIG undefined FUN_14013b2f0(void)

void FUN_14013b2f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863670;
    plVar1[2] = (longlong)FUN_14093dcf0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"AudioMixerWwise",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013b430 FUN_14013b430 body=58 status=ok
// SIG undefined FUN_14013b430(void)

void FUN_14013b430(void)

{
  UObjectCompiledInDefer
            (FUN_14093ea00,UOculusHMDRuntimeSettings::GetPrivateStaticClass,
             L"UAudioMixerWwiseSettings",L"/Script/AudioMixerWwise",0,0,0);
  return;
}



// FUNCTION 14013b470 FUN_14013b470 body=117 status=ok
// SIG undefined FUN_14013b470(void)

void FUN_14013b470(void)

{
  FVertexFactoryType::FVertexFactoryType
            (&DAT_1468636d0,L"FCableVertexFactory",L"/Engine/Private/CableVertexFactory.ush",1,1,1,1
             ,0,FUN_14093f980,FUN_140942430,AK::MemoryMgr::StartProfileThreadUsage,
             FOutputDevice::CanBeUsedOnAnyThread);
  atexit((_func_5014 *)&LAB_143e451b0);
  return;
}



// FUNCTION 14013b510 FUN_14013b510 body=117 status=ok
// SIG undefined FUN_14013b510(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b510(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468638e0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CableComponent.SleepDeltaThreshold",0x3c23d70a,&DAT_144163f38,0);
  _DAT_1468638d8 = &PTR_FUN_143f3ecf8;
  DAT_1468638e8 = (**(code **)(*DAT_1468638e0 + 0x40))(DAT_1468638e0);
  atexit(FUN_143e451c0);
  return;
}



// FUNCTION 14013b590 FUN_14013b590 body=117 status=ok
// SIG undefined FUN_14013b590(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013b590(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468638c8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"CableComponent.SleepSpeedThreshold",0x3c23d70a,&DAT_144163ee8,0);
  _DAT_1468638c0 = &PTR_FUN_143f3ecf8;
  DAT_1468638d0 = (**(code **)(*DAT_1468638c8 + 0x40))(DAT_1468638c8);
  atexit(FUN_143e45210);
  return;
}



// FUNCTION 14013b680 FUN_14013b680 body=67 status=ok
// SIG undefined FUN_14013b680(void)

void FUN_14013b680(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_1462883d8 + 0x28))();
    atexit(FUN_143e45260);
    return;
  }
  FUN_141edf270(&PTR_PTR_1462883d8);
  atexit(FUN_143e45260);
  return;
}



// FUNCTION 14013b6d0 `dynamic_initializer_for_'ModuleRegistrantCableComponent'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantCableComponent''(void)

void _dynamic_initializer_for__ModuleRegistrantCableComponent__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863950;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"CableComponent",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013b910 FUN_14013b910 body=66 status=ok
// SIG undefined FUN_14013b910(void)

void FUN_14013b910(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EFollowCableMovementMode",1);
  UObjectCompiledInDeferEnum(FUN_140943b00,L"/Script/CableComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013b960 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ACableActor'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_ACableActor''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_ACableActor__(void)

{
  UObjectCompiledInDefer(FUN_140943c10,FUN_140943640,L"ACableActor",L"/Script/CableComponent",0,0,0)
  ;
  return;
}



// FUNCTION 14013b9a0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCableComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCableComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UCableComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_1409437f0,FUN_140943740,L"UCableComponent",L"/Script/CableComponent",0,0,0);
  return;
}



// FUNCTION 14013b9e0 FUN_14013b9e0 body=58 status=ok
// SIG undefined FUN_14013b9e0(void)

void FUN_14013b9e0(void)

{
  UObjectCompiledInDefer
            (FUN_140943a30,UAnimMontage::GetPrivateStaticClass,L"UFollowCableMovementComponent",
             L"/Script/CableComponent",0,0,0);
  return;
}



// FUNCTION 14013ba40 `dynamic_initializer_for_'ModuleRegistrantCustomMeshComponent'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantCustomMeshComponent''(void)

void _dynamic_initializer_for__ModuleRegistrantCustomMeshComponent__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863a70;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"CustomMeshComponent",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013bba0 `dynamic_initializer_for_'ScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle''(void)

void _dynamic_initializer_for__ScriptStruct_CustomMeshComponent_StaticRegisterNativesFCustomMeshTriangle__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144166fc8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"CustomMeshTriangle",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013bc20 FUN_14013bc20 body=66 status=ok
// SIG undefined FUN_14013bc20(void)

void FUN_14013bc20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"CustomMeshTriangle",1);
  UObjectCompiledInDeferStruct
            (FCustomMeshTriangle::StaticStruct,L"/Script/CustomMeshComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013bc70 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCustomMeshComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UCustomMeshComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UCustomMeshComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_140946340,UMovieScene3DTransformSection::GetPrivateStaticClass,
             L"UCustomMeshComponent",L"/Script/CustomMeshComponent",0,0,0);
  return;
}



// FUNCTION 14013bcb0 FUN_14013bcb0 body=256 status=ok
// SIG undefined FUN_14013bcb0(void)

void FUN_14013bcb0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863b4c;
    plVar1[2] = (longlong)FUN_140946990;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WinDPXController",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013bdb0 `dynamic_initializer_for_'ModuleRegistrantExampleDeviceProfileSelector'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantExampleDeviceProfileSelector''(void)

void _dynamic_initializer_for__ModuleRegistrantExampleDeviceProfileSelector__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863b4d;
    plVar1[2] = (longlong)FUN_140946a10;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ExampleDeviceProfileSelector",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013beb0 `dynamic_initializer_for_'CVarEnableRigidBodyNode'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarEnableRigidBodyNode''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarEnableRigidBodyNode__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146863bf8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"p.RigidBodyNode",1,
                  L"Enables/disables rigid body node updates and evaluations",0x40);
  _DAT_146863bf0 = &PTR_FUN_143f3ecf8;
  DAT_146863c00 = (**(code **)(*DAT_146863bf8 + 0x38))(DAT_146863bf8);
  atexit(FUN_143e452a0);
  return;
}



// FUNCTION 14013bf30 `dynamic_initializer_for_'CVarRigidBodyLODThreshold'' body=115 status=ok
// SIG undefined `dynamic_initializer_for_'CVarRigidBodyLODThreshold''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _dynamic_initializer_for__CVarRigidBodyLODThreshold__(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_146863c10 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"p.RigidBodyLODThreshold",0xffffffff,
                  L"Max LOD that rigid body node is allowed to run on. Provides a global threshold that overrides per-node the LODThreshold property. -1 means no override."
                  ,0x40);
  _DAT_146863c08 = &PTR_FUN_143f3ecf8;
  DAT_146863c18 = (**(code **)(*DAT_146863c10 + 0x38))(DAT_146863c10);
  atexit(FUN_143e452f0);
  return;
}



// FUNCTION 14013c000 `dynamic_initializer_for_'ModuleRegistrantImmediatePhysics'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantImmediatePhysics''(void)

void _dynamic_initializer_for__ModuleRegistrantImmediatePhysics__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863b51;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ImmediatePhysics",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013c1b0 `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo''(void)

void _dynamic_initializer_for__ScriptStruct_Engine_StaticRegisterNativesFMinimalViewInfo__(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x5c0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144168068;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_RigidBody",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c230 FUN_14013c230 body=66 status=ok
// SIG undefined FUN_14013c230(void)

void FUN_14013c230(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ESimulationSpace",1);
  UObjectCompiledInDeferEnum(ESimulationSpace_StaticEnum,L"/Script/ImmediatePhysics",*puVar1,0,0);
  return;
}



// FUNCTION 14013c280 FUN_14013c280 body=66 status=ok
// SIG undefined FUN_14013c280(void)

void FUN_14013c280(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimNode_RigidBody",1);
  UObjectCompiledInDeferStruct(FUN_14095bfe0,L"/Script/ImmediatePhysics",*puVar1,0,0);
  return;
}



// FUNCTION 14013c380 `dynamic_initializer_for_'ModuleRegistrantPhysXVehicles'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantPhysXVehicles''(void)

void _dynamic_initializer_for__ModuleRegistrantPhysXVehicles__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146863d30;
    plVar1[2] = (longlong)FUN_1409658f0;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"PhysXVehicles",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013c5f0 FUN_14013c5f0 body=92 status=ok
// SIG undefined FUN_14013c5f0(void)

void FUN_14013c5f0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x158;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14416ffc0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"AnimNode_WheelHandler",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c650 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFReplicatedVehicleState__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x14;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144170d98;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ReplicatedVehicleState",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c6b0 FUN_14013c6b0 body=92 status=ok
// SIG undefined FUN_14013c6b0(void)

void FUN_14013c6b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x58;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144170110;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"StartVehicleUpdatesTickFunction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c710 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFTireConfigMaterialFriction__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_1441709d0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"TireConfigMaterialFriction",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c770 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleAnimInstanceProxy__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x6e0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    *puVar1 = &PTR_FUN_144170ae8;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleAnimInstanceProxy",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c7d0 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleDifferential4WData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x1c;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144171440;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleDifferential4WData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c830 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleEngineData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144171328;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleEngineData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c890 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleGearData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0xc;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_143fd6698;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleGearData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c8f0 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleInputRate__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144170c80;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleInputRate",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c950 `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData''(void)

void _dynamic_initializer_for__ScriptStruct_PhysXVehicles_StaticRegisterNativesFVehicleTransmissionData__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144171210;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VehicleTransmissionData",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013c9b0 FUN_14013c9b0 body=92 status=ok
// SIG undefined FUN_14013c9b0(void)

void FUN_14013c9b0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x38;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144170eb0;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"WheelSetup",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013ca30 FUN_14013ca30 body=66 status=ok
// SIG undefined FUN_14013ca30(void)

void FUN_14013ca30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVehicleDifferential4W",1);
  UObjectCompiledInDeferEnum(EVehicleDifferential4W_StaticEnum,L"/Script/PhysXVehicles",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 14013ca80 FUN_14013ca80 body=66 status=ok
// SIG undefined FUN_14013ca80(void)

void FUN_14013ca80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EWheelSweepType",1);
  UObjectCompiledInDeferEnum(EWheelSweepType_StaticEnum,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cad0 FUN_14013cad0 body=66 status=ok
// SIG undefined FUN_14013cad0(void)

void FUN_14013cad0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"AnimNode_WheelHandler",1);
  UObjectCompiledInDeferStruct
            (FClothLODDataCommon::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cb20 FUN_14013cb20 body=66 status=ok
// SIG undefined FUN_14013cb20(void)

void FUN_14013cb20(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ReplicatedVehicleState",1);
  UObjectCompiledInDeferStruct
            (FReplicatedVehicleState::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cb70 FUN_14013cb70 body=66 status=ok
// SIG undefined FUN_14013cb70(void)

void FUN_14013cb70(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"StartVehicleUpdatesTickFunction",1);
  UObjectCompiledInDeferStruct(FUN_14096e180,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cbc0 FUN_14013cbc0 body=66 status=ok
// SIG undefined FUN_14013cbc0(void)

void FUN_14013cbc0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"TireConfigMaterialFriction",1);
  UObjectCompiledInDeferStruct
            (FTireConfigMaterialFriction::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cc10 FUN_14013cc10 body=66 status=ok
// SIG undefined FUN_14013cc10(void)

void FUN_14013cc10(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleAnimInstanceProxy",1);
  UObjectCompiledInDeferStruct
            (FVehicleAnimInstanceProxy::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cc60 FUN_14013cc60 body=66 status=ok
// SIG undefined FUN_14013cc60(void)

void FUN_14013cc60(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleDifferential4WData",1);
  UObjectCompiledInDeferStruct
            (FVehicleDifferential4WData::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013ccb0 FUN_14013ccb0 body=66 status=ok
// SIG undefined FUN_14013ccb0(void)

void FUN_14013ccb0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleEngineData",1);
  UObjectCompiledInDeferStruct
            (FVehicleEngineData::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cd00 FUN_14013cd00 body=66 status=ok
// SIG undefined FUN_14013cd00(void)

void FUN_14013cd00(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleGearData",1);
  UObjectCompiledInDeferStruct(FVehicleGearData::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cd50 FUN_14013cd50 body=66 status=ok
// SIG undefined FUN_14013cd50(void)

void FUN_14013cd50(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleInputRate",1);
  UObjectCompiledInDeferStruct(FVehicleInputRate::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0)
  ;
  return;
}



// FUNCTION 14013cda0 FUN_14013cda0 body=66 status=ok
// SIG undefined FUN_14013cda0(void)

void FUN_14013cda0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VehicleTransmissionData",1);
  UObjectCompiledInDeferStruct
            (FVehicleTransmissionData::StaticStruct,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013cdf0 FUN_14013cdf0 body=66 status=ok
// SIG undefined FUN_14013cdf0(void)

void FUN_14013cdf0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"WheelSetup",1);
  UObjectCompiledInDeferStruct(FUN_14096e580,L"/Script/PhysXVehicles",*puVar1,0,0);
  return;
}



// FUNCTION 14013ce40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AWheeledVehicle'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_AWheeledVehicle''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_AWheeledVehicle__(void)

{
  UObjectCompiledInDefer
            (FUN_14096e600,FUN_14096c310,L"AWheeledVehicle",L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013ce80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USimpleWheeledVehicleMovementComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_USimpleWheeledVehicleMovementComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_USimpleWheeledVehicleMovementComponent__
               (void)

{
  UObjectCompiledInDefer
            (FUN_14096ccf0,UWheeledVehicleMovementComponent4W::GetPrivateStaticClass,
             L"USimpleWheeledVehicleMovementComponent",L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013cec0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UTireConfig'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UTireConfig''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UTireConfig__(void)

{
  UObjectCompiledInDefer
            (FUN_14096e630,UTireConfig::GetPrivateStaticClass,L"UTireConfig",
             L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013cf00 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVehicleAnimInstance'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVehicleAnimInstance''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVehicleAnimInstance__(void)

{
  UObjectCompiledInDefer
            (FUN_14096d020,FUN_14096d210,L"UVehicleAnimInstance",L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013cf40 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVehicleWheel'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVehicleWheel''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVehicleWheel__(void)

{
  UObjectCompiledInDefer
            (FUN_14096d120,FUN_14096caa0,L"UVehicleWheel",L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013cf80 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent4W'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent4W''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent4W__(void)

{
  UObjectCompiledInDefer
            (FUN_14096e660,AFGConveyorPoleStackable::GetPrivateStaticClass,
             L"UWheeledVehicleMovementComponent4W",L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013cfc0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UWheeledVehicleMovementComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_14096cd20,FUN_14096cb40,L"UWheeledVehicleMovementComponent",
             L"/Script/PhysXVehicles",0,0,0);
  return;
}



// FUNCTION 14013d030 `dynamic_initializer_for_'ModuleRegistrantProceduralMeshComponent'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantProceduralMeshComponent''(void)

void _dynamic_initializer_for__ModuleRegistrantProceduralMeshComponent__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146864140;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"ProceduralMeshComponent",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013d1f0 `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshSection'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshSection''(void)

void _dynamic_initializer_for__ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshSection__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_144174360;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProcMeshSection",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013d250 `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshTangent'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshTangent''(void)

void _dynamic_initializer_for__ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshTangent__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144174590;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProcMeshTangent",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013d2b0 `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshVertex'' body=92 status=ok
// SIG undefined `dynamic_initializer_for_'ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshVertex''(void)

void _dynamic_initializer_for__ScriptStruct_ProceduralMeshComponent_StaticRegisterNativesFProcMeshVertex__
               (void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x4c;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    *puVar1 = &PTR_FUN_144174478;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"ProcMeshVertex",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013d330 FUN_14013d330 body=66 status=ok
// SIG undefined FUN_14013d330(void)

void FUN_14013d330(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EProcMeshSliceCapOption",1);
  UObjectCompiledInDeferEnum
            (EProcMeshSliceCapOption_StaticEnum,L"/Script/ProceduralMeshComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013d380 FUN_14013d380 body=66 status=ok
// SIG undefined FUN_14013d380(void)

void FUN_14013d380(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProcMeshSection",1);
  UObjectCompiledInDeferStruct
            (FProcMeshSection::StaticStruct,L"/Script/ProceduralMeshComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013d3d0 FUN_14013d3d0 body=66 status=ok
// SIG undefined FUN_14013d3d0(void)

void FUN_14013d3d0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProcMeshTangent",1);
  UObjectCompiledInDeferStruct
            (FProcMeshTangent::StaticStruct,L"/Script/ProceduralMeshComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013d420 FUN_14013d420 body=66 status=ok
// SIG undefined FUN_14013d420(void)

void FUN_14013d420(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ProcMeshVertex",1);
  UObjectCompiledInDeferStruct
            (FProcMeshVertex::StaticStruct,L"/Script/ProceduralMeshComponent",*puVar1,0,0);
  return;
}



// FUNCTION 14013d470 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UKismetProceduralMeshLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UKismetProceduralMeshLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UKismetProceduralMeshLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_14097bb20,UKismetProceduralMeshLibrary::GetPrivateStaticClass,
             L"UKismetProceduralMeshLibrary",L"/Script/ProceduralMeshComponent",0,0,0);
  return;
}



// FUNCTION 14013d4b0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UProceduralMeshComponent'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UProceduralMeshComponent''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UProceduralMeshComponent__(void)

{
  UObjectCompiledInDefer
            (FUN_14097bcf0,UCheckBox::GetPrivateStaticClass,L"UProceduralMeshComponent",
             L"/Script/ProceduralMeshComponent",0,0,0);
  return;
}



// FUNCTION 14013d4f0 FUN_14013d4f0 body=256 status=ok
// SIG undefined FUN_14013d4f0(void)

void FUN_14013d4f0(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1468642b8;
    plVar1[2] = (longlong)FUN_14097f180;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WinDualShock",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013d5f0 `dynamic_initializer_for_'ModuleRegistrantRuntimePhysXCooking'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantRuntimePhysXCooking''(void)

void _dynamic_initializer_for__ModuleRegistrantRuntimePhysXCooking__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1468642b9;
    plVar1[2] = (longlong)
                FStaticallyLinkedModuleRegistrant<FRuntimePhysXPlatformModule>::InitializeModule;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"RuntimePhysXCooking",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013d730 FUN_14013d730 body=256 status=ok
// SIG undefined FUN_14013d730(void)

void FUN_14013d730(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146864300;
    plVar1[2] = (longlong)FUN_14067ad20;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WebMMoviePlayer",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013d830 FUN_14013d830 body=67 status=ok
// SIG undefined FUN_14013d830(void)

void FUN_14013d830(void)

{
  char cVar1;
  
  cVar1 = IsInRenderingThread();
  if (cVar1 != '\0') {
    (**(code **)(PTR_PTR_146290310 + 0x28))();
    atexit(FUN_143e45390);
    return;
  }
  FUN_141edf270(&PTR_PTR_146290310);
  atexit(FUN_143e45390);
  return;
}



// FUNCTION 14013d880 FUN_14013d880 body=256 status=ok
// SIG undefined FUN_14013d880(void)

void FUN_14013d880(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146864314;
    plVar1[2] = (longlong)FUN_140986190;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WebMMedia",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013d980 FUN_14013d980 body=256 status=ok
// SIG undefined FUN_14013d980(void)

void FUN_14013d980(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_14686433c;
    plVar1[2] = (longlong)FUN_140988960;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WebMMediaFactory",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013da80 FUN_14013da80 body=115 status=ok
// SIG undefined FUN_14013da80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14013da80(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468643a0 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 0x10))
                 (DAT_1468b1f88,L"WMFMovieStreamerDoNotAllocate",1,
                  L"If to avoid standalone allocation for movie texture update.\n  0 = Do not avoid\n  1 = Avoid"
                  ,0);
  _DAT_146864398 = &PTR_FUN_143f3ecf8;
  DAT_1468643a8 = (**(code **)(*DAT_1468643a0 + 0x38))(DAT_1468643a0);
  atexit(FUN_143e453f0);
  return;
}



// FUNCTION 14013db40 `dynamic_initializer_for_'ModuleRegistrantWindowsMoviePlayer'' body=256 status=ok
// SIG undefined `dynamic_initializer_for_'ModuleRegistrantWindowsMoviePlayer''(void)

void _dynamic_initializer_for__ModuleRegistrantWindowsMoviePlayer__(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_146864390;
    plVar1[2] = (longlong)FUN_14098a240;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"WindowsMoviePlayer",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013dc60 FUN_14013dc60 body=256 status=ok
// SIG undefined FUN_14013dc60(void)

void FUN_14013dc60(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  undefined1 local_res18 [16];
  longlong *local_28;
  int local_20;
  undefined8 *local_18;
  longlong **local_10;
  
  local_28 = (longlong *)0x0;
  plVar1 = (longlong *)FMemory::Realloc(0,0x30);
  local_20 = 3;
  local_28 = plVar1;
  if (plVar1 != (longlong *)0x0) {
    *plVar1 = (longlong)&PTR_GetPoolName_143f3f4f8;
    plVar1[1] = (longlong)&DAT_1468643b8;
    plVar1[2] = (longlong)FUN_14098f940;
    lVar2 = FDelegateHandle::GenerateNewID();
    plVar1[4] = lVar2;
  }
  puVar3 = (undefined8 *)FName::FName(local_res18,"VaRestPlugin",1);
  local_res10 = *puVar3;
  lVar2 = FUN_14168dc80();
  local_18 = &local_res10;
  local_10 = &local_28;
  FUN_140437c00(lVar2 + 0x58,local_res8,&local_18,0);
  if (local_20 != 0) {
    if (local_28 == (longlong *)0x0) {
      return;
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
  return;
}



// FUNCTION 14013dde0 FUN_14013dde0 body=92 status=ok
// SIG undefined FUN_14013dde0(void)

void FUN_14013dde0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x0;
  }
  else {
    *(undefined4 *)(puVar1 + 1) = 0x30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    *puVar1 = &PTR_FUN_14417cd00;
  }
  puVar2 = (undefined8 *)FName::FName(local_res8,L"VaRestCallResponse",1);
  UScriptStruct::DeferCppStructOps(*puVar2,puVar1);
  return;
}



// FUNCTION 14013de40 FUN_14013de40 body=66 status=ok
// SIG undefined FUN_14013de40(void)

void FUN_14013de40(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERequestContentType",1);
  UObjectCompiledInDeferEnum(ERequestContentType_StaticEnum,L"/Script/VaRestPlugin",*puVar1,0,0);
  return;
}



// FUNCTION 14013de90 FUN_14013de90 body=66 status=ok
// SIG undefined FUN_14013de90(void)

void FUN_14013de90(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERequestStatus",1);
  UObjectCompiledInDeferEnum(ERequestStatus_StaticEnum,L"/Script/VaRestPlugin",*puVar1,0,0);
  return;
}



// FUNCTION 14013dee0 FUN_14013dee0 body=66 status=ok
// SIG undefined FUN_14013dee0(void)

void FUN_14013dee0(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"ERequestVerb",1);
  UObjectCompiledInDeferEnum(ERequestVerb_StaticEnum,L"/Script/VaRestPlugin",*puVar1,0,0);
  return;
}



// FUNCTION 14013df30 FUN_14013df30 body=66 status=ok
// SIG undefined FUN_14013df30(void)

void FUN_14013df30(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"EVaJson",1);
  UObjectCompiledInDeferEnum(EVaJson_StaticEnum,L"/Script/VaRestPlugin",*puVar1,0,0);
  return;
}



// FUNCTION 14013df80 FUN_14013df80 body=66 status=ok
// SIG undefined FUN_14013df80(void)

void FUN_14013df80(void)

{
  undefined8 *puVar1;
  undefined1 local_res8 [32];
  
  puVar1 = (undefined8 *)FName::FName(local_res8,L"VaRestCallResponse",1);
  UObjectCompiledInDeferStruct
            (FVaRestCallResponse::StaticStruct,L"/Script/VaRestPlugin",*puVar1,0,0);
  return;
}



// FUNCTION 14013dfd0 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestJsonObject'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestJsonObject''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVaRestJsonObject__(void)

{
  UObjectCompiledInDefer
            (FUN_140994160,UPlayFabJsonObject::GetPrivateStaticClass,L"UVaRestJsonObject",
             L"/Script/VaRestPlugin",0,0,0);
  return;
}



// FUNCTION 14013e010 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestJsonValue'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestJsonValue''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVaRestJsonValue__(void)

{
  UObjectCompiledInDefer
            (FUN_1409947f0,UVaRestJsonValue::GetPrivateStaticClass,L"UVaRestJsonValue",
             L"/Script/VaRestPlugin",0,0,0);
  return;
}



// FUNCTION 14013e050 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestLibrary'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestLibrary''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVaRestLibrary__(void)

{
  UObjectCompiledInDefer
            (FUN_140994b50,UVaRestLibrary::GetPrivateStaticClass,L"UVaRestLibrary",
             L"/Script/VaRestPlugin",0,0,0);
  return;
}



// FUNCTION 14013e090 `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestRequestJSON'' body=58 status=ok
// SIG undefined `dynamic_initializer_for_'Z_CompiledInDefer_UClass_UVaRestRequestJSON''(void)

void _dynamic_initializer_for__Z_CompiledInDefer_UClass_UVaRestRequestJSON__(void)

{
  UObjectCompiledInDefer
            (FUN_140993b80,UPropertyValue::GetPrivateStaticClass,L"UVaRestRequestJSON",
             L"/Script/VaRestPlugin",0,0,0);
  return;
}



// FUNCTION 14013e110 FUN_14013e110 body=59 status=ok
// SIG undefined FUN_14013e110(void)

void FUN_14013e110(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294400,0);
  FGenericPlatformString::Memcpy(DAT_146294400,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e454c0);
  return;
}



// FUNCTION 14013e1f0 FUN_14013e1f0 body=59 status=ok
// SIG undefined FUN_14013e1f0(void)

void FUN_14013e1f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943b0,0);
  FGenericPlatformString::Memcpy(DAT_1462943b0,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e454e0);
  return;
}



// FUNCTION 14013e230 FUN_14013e230 body=59 status=ok
// SIG undefined FUN_14013e230(void)

void FUN_14013e230(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294330,0);
  FGenericPlatformString::Memcpy(DAT_146294330,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e45500);
  return;
}



// FUNCTION 14013e290 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943d0,0);
  FGenericPlatformString::Memcpy(DAT_1462943d0,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e45520);
  return;
}



// FUNCTION 14013e2d0 FUN_14013e2d0 body=59 status=ok
// SIG undefined FUN_14013e2d0(void)

void FUN_14013e2d0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294260,0);
  FGenericPlatformString::Memcpy(DAT_146294260,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e45540);
  return;
}



// FUNCTION 14013e350 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943a0,0);
  FGenericPlatformString::Memcpy(DAT_1462943a0,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e45560);
  return;
}



// FUNCTION 14013e390 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294320,0);
  FGenericPlatformString::Memcpy(DAT_146294320,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e45580);
  return;
}



// FUNCTION 14013e410 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294450,0);
  FGenericPlatformString::Memcpy(DAT_146294450,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e455a0);
  return;
}



// FUNCTION 14013e490 FUN_14013e490 body=59 status=ok
// SIG undefined FUN_14013e490(void)

void FUN_14013e490(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944b0,0);
  FGenericPlatformString::Memcpy(DAT_1462944b0,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e455c0);
  return;
}



// FUNCTION 14013e5b0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294550,0);
  FGenericPlatformString::Memcpy(DAT_146294550,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e455e0);
  return;
}



// FUNCTION 14013e5f0 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943f0,0);
  FGenericPlatformString::Memcpy(DAT_1462943f0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e45600);
  return;
}



// FUNCTION 14013e630 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294440,0);
  FGenericPlatformString::Memcpy(DAT_146294440,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e45620);
  return;
}



// FUNCTION 14013e6b0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294460,0);
  FGenericPlatformString::Memcpy(DAT_146294460,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e45640);
  return;
}



// FUNCTION 14013e770 FUN_14013e770 body=59 status=ok
// SIG undefined FUN_14013e770(void)

void FUN_14013e770(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294290,0);
  FGenericPlatformString::Memcpy(DAT_146294290,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e45660);
  return;
}



// FUNCTION 14013e7b0 FUN_14013e7b0 body=59 status=ok
// SIG undefined FUN_14013e7b0(void)

void FUN_14013e7b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294500,0);
  FGenericPlatformString::Memcpy(DAT_146294500,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e45680);
  return;
}



// FUNCTION 14013e7f0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944f0,0);
  FGenericPlatformString::Memcpy(DAT_1462944f0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e456a0);
  return;
}



// FUNCTION 14013e830 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944d0,0);
  FGenericPlatformString::Memcpy(DAT_1462944d0,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e456c0);
  return;
}



// FUNCTION 14013e870 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944c0,0);
  FGenericPlatformString::Memcpy(DAT_1462944c0,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e456e0);
  return;
}



// FUNCTION 14013e8b0 FUN_14013e8b0 body=59 status=ok
// SIG undefined FUN_14013e8b0(void)

void FUN_14013e8b0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944e0,0);
  FGenericPlatformString::Memcpy(DAT_1462944e0,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e45700);
  return;
}



// FUNCTION 14013e8f0 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294410,0);
  FGenericPlatformString::Memcpy(DAT_146294410,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e45720);
  return;
}



// FUNCTION 14013e930 FUN_14013e930 body=59 status=ok
// SIG undefined FUN_14013e930(void)

void FUN_14013e930(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294420,0);
  FGenericPlatformString::Memcpy(DAT_146294420,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e45740);
  return;
}



// FUNCTION 14013e970 FUN_14013e970 body=59 status=ok
// SIG undefined FUN_14013e970(void)

void FUN_14013e970(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294520,0);
  FGenericPlatformString::Memcpy(DAT_146294520,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e45760);
  return;
}



// FUNCTION 14013e9b0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294380,0);
  FGenericPlatformString::Memcpy(DAT_146294380,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45780);
  return;
}



// FUNCTION 14013e9f0 FUN_14013e9f0 body=59 status=ok
// SIG undefined FUN_14013e9f0(void)

void FUN_14013e9f0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294300,0);
  FGenericPlatformString::Memcpy(DAT_146294300,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e457a0);
  return;
}



// FUNCTION 14013ea30 FUN_14013ea30 body=59 status=ok
// SIG undefined FUN_14013ea30(void)

void FUN_14013ea30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942a0,0);
  FGenericPlatformString::Memcpy(DAT_1462942a0,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e457c0);
  return;
}



// FUNCTION 14013ea70 FUN_14013ea70 body=59 status=ok
// SIG undefined FUN_14013ea70(void)

void FUN_14013ea70(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294280,0);
  FGenericPlatformString::Memcpy(DAT_146294280,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e457e0);
  return;
}



// FUNCTION 14013eab0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943c0,0);
  FGenericPlatformString::Memcpy(DAT_1462943c0,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e45800);
  return;
}



// FUNCTION 14013eb80 FUN_14013eb80 body=59 status=ok
// SIG undefined FUN_14013eb80(void)

void FUN_14013eb80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294540,0);
  FGenericPlatformString::Memcpy(DAT_146294540,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e45820);
  return;
}



// FUNCTION 14013ed00 FUN_14013ed00 body=59 status=ok
// SIG undefined FUN_14013ed00(void)

void FUN_14013ed00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462941d0,0);
  FGenericPlatformString::Memcpy(DAT_1462941d0,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e45840);
  return;
}



// FUNCTION 14013ed40 FUN_14013ed40 body=59 status=ok
// SIG undefined FUN_14013ed40(void)

void FUN_14013ed40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294230,0);
  FGenericPlatformString::Memcpy(DAT_146294230,L"LocationX",0x14);
  atexit((_func_5014 *)&LAB_143e45860);
  return;
}



// FUNCTION 14013ed80 FUN_14013ed80 body=59 status=ok
// SIG undefined FUN_14013ed80(void)

void FUN_14013ed80(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294240,0);
  FGenericPlatformString::Memcpy(DAT_146294240,L"LocationY",0x14);
  atexit((_func_5014 *)&LAB_143e45880);
  return;
}



// FUNCTION 14013edc0 FUN_14013edc0 body=59 status=ok
// SIG undefined FUN_14013edc0(void)

void FUN_14013edc0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294250,0);
  FGenericPlatformString::Memcpy(DAT_146294250,L"LocationZ",0x14);
  atexit((_func_5014 *)&LAB_143e458a0);
  return;
}



// FUNCTION 14013ee00 FUN_14013ee00 body=59 status=ok
// SIG undefined FUN_14013ee00(void)

void FUN_14013ee00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294270,0);
  FGenericPlatformString::Memcpy(DAT_146294270,L"LookingForHelp",0x1e);
  atexit((_func_5014 *)&LAB_143e458c0);
  return;
}



// FUNCTION 14013ee40 FUN_14013ee40 body=59 status=ok
// SIG undefined FUN_14013ee40(void)

void FUN_14013ee40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462941e0,0);
  FGenericPlatformString::Memcpy(DAT_1462941e0,L"MapName",0x10);
  atexit((_func_5014 *)&LAB_143e458e0);
  return;
}



// FUNCTION 14013eec0 FUN_14013eec0 body=59 status=ok
// SIG undefined FUN_14013eec0(void)

void FUN_14013eec0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294560,0);
  FGenericPlatformString::Memcpy(DAT_146294560,L"MismatchedBeaconNetVersions",0x38);
  atexit((_func_5014 *)&LAB_143e45900);
  return;
}



// FUNCTION 14013ef00 FUN_14013ef00 body=59 status=ok
// SIG undefined FUN_14013ef00(void)

void FUN_14013ef00(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294580,0);
  FGenericPlatformString::Memcpy(DAT_146294580,L"MissingDLC",0x16);
  atexit((_func_5014 *)&LAB_143e45920);
  return;
}



// FUNCTION 14013ef40 FUN_14013ef40 body=59 status=ok
// SIG undefined FUN_14013ef40(void)

void FUN_14013ef40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294220,0);
  FGenericPlatformString::Memcpy(DAT_146294220,L"MissionHash",0x18);
  atexit((_func_5014 *)&LAB_143e45940);
  return;
}



// FUNCTION 14013f1c0 FUN_14013f1c0 body=59 status=ok
// SIG undefined FUN_14013f1c0(void)

void FUN_14013f1c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294510,0);
  FGenericPlatformString::Memcpy(DAT_146294510,L"NetworkFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e45960);
  return;
}



// FUNCTION 14013f240 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294530,0);
  FGenericPlatformString::Memcpy(DAT_146294530,L"NotAcceptingReservations",0x32);
  atexit((_func_5014 *)&LAB_143e45980);
  return;
}



// FUNCTION 14013f2a0 FUN_14013f2a0 body=59 status=ok
// SIG undefined FUN_14013f2a0(void)

void FUN_14013f2a0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294200,0);
  FGenericPlatformString::Memcpy(DAT_146294200,L"PartyPlayerCount",0x22);
  atexit((_func_5014 *)&LAB_143e459a0);
  return;
}



// FUNCTION 14013f3c0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294210,0);
  FGenericPlatformString::Memcpy(DAT_146294210,L"PlayerClassIdentifierHash",0x34);
  atexit((_func_5014 *)&LAB_143e459c0);
  return;
}



// FUNCTION 14013f400 FUN_14013f400 body=59 status=ok
// SIG undefined FUN_14013f400(void)

void FUN_14013f400(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462944a0,0);
  FGenericPlatformString::Memcpy(DAT_1462944a0,L"PlayerId",0x12);
  atexit((_func_5014 *)&LAB_143e459e0);
  return;
}



// FUNCTION 14013f500 LocalizationSourceControlSettingsCategoryName'' body=59 status=ok
// SIG undefined LocalizationSourceControlSettingsCategoryName''(void)

void `dynamic_initializer_for_'FLocalizationSourceControlSettings::
     LocalizationSourceControlSettingsCategoryName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294470,0);
  FGenericPlatformString::Memcpy(DAT_146294470,L"ProvingGroundChallengesCompletion",0x44);
  atexit((_func_5014 *)&LAB_143e45a00);
  return;
}



// FUNCTION 14013f580 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294490,0);
  FGenericPlatformString::Memcpy(DAT_146294490,L"RaidChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e45a20);
  return;
}



// FUNCTION 14013f600 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462941c0,0);
  FGenericPlatformString::Memcpy(DAT_1462941c0,L"<img src=\"%s\"></>",0x24);
  atexit((_func_5014 *)&LAB_143e45a40);
  return;
}



// FUNCTION 14013f920 FUN_14013f920 body=59 status=ok
// SIG undefined FUN_14013f920(void)

void FUN_14013f920(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462941f0,0);
  FGenericPlatformString::Memcpy(DAT_1462941f0,L"SessionId",0x14);
  atexit((_func_5014 *)&LAB_143e45a60);
  return;
}



// FUNCTION 14013f960 FUN_14013f960 body=59 status=ok
// SIG undefined FUN_14013f960(void)

void FUN_14013f960(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294390,0);
  FGenericPlatformString::Memcpy(DAT_146294390,L"ShieldJsonData",0x1e);
  atexit((_func_5014 *)&LAB_143e45a80);
  return;
}



// FUNCTION 14013f9a0 `dynamic_initializer_for_'StatusStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'StatusStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__StatusStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294310,0);
  FGenericPlatformString::Memcpy(DAT_146294310,L"ShieldSerialNumber",0x26);
  atexit((_func_5014 *)&LAB_143e45aa0);
  return;
}



// FUNCTION 14013fa00 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462943e0,0);
  FGenericPlatformString::Memcpy(DAT_1462943e0,L"SkinCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e45ac0);
  return;
}



// FUNCTION 14013fa40 FUN_14013fa40 body=59 status=ok
// SIG undefined FUN_14013fa40(void)

void FUN_14013fa40(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294480,0);
  FGenericPlatformString::Memcpy(DAT_146294480,L"SlaughterChallengesCompletion",0x3c);
  atexit((_func_5014 *)&LAB_143e45ae0);
  return;
}



// FUNCTION 14013fb30 FUN_14013fb30 body=59 status=ok
// SIG undefined FUN_14013fb30(void)

void FUN_14013fb30(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942b0,0);
  FGenericPlatformString::Memcpy(DAT_1462942b0,L"TimePlayed",0x16);
  atexit((_func_5014 *)&LAB_143e45b20);
  return;
}



// FUNCTION 14013fb90 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294570,0);
  FGenericPlatformString::Memcpy(DAT_146294570,L"UnexpectedControlMessage",0x32);
  atexit((_func_5014 *)&LAB_143e45b40);
  return;
}



// FUNCTION 14013fc50 `dynamic_initializer_for_'VirtualBonePrefix'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'VirtualBonePrefix''(void)

void VirtualBoneNameHelpers::_dynamic_initializer_for__VirtualBonePrefix__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294180,0);
  FGenericPlatformString::Memcpy(DAT_146294180,&DAT_14418e2f0,8);
  atexit((_func_5014 *)&LAB_143e45b60);
  return;
}



// FUNCTION 14013fc90 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294340,0);
  FGenericPlatformString::Memcpy(DAT_146294340,L"Weapon1JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45b80);
  return;
}



// FUNCTION 14013fcd0 FUN_14013fcd0 body=59 status=ok
// SIG undefined FUN_14013fcd0(void)

void FUN_14013fcd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942c0,0);
  FGenericPlatformString::Memcpy(DAT_1462942c0,L"Weapon1SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e45ba0);
  return;
}



// FUNCTION 14013fd10 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294350,0);
  FGenericPlatformString::Memcpy(DAT_146294350,L"Weapon2JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45bc0);
  return;
}



// FUNCTION 14013fd50 FUN_14013fd50 body=59 status=ok
// SIG undefined FUN_14013fd50(void)

void FUN_14013fd50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942d0,0);
  FGenericPlatformString::Memcpy(DAT_1462942d0,L"Weapon2SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e45be0);
  return;
}



// FUNCTION 14013fd90 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294360,0);
  FGenericPlatformString::Memcpy(DAT_146294360,L"Weapon3JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45c00);
  return;
}



// FUNCTION 14013fdd0 FUN_14013fdd0 body=59 status=ok
// SIG undefined FUN_14013fdd0(void)

void FUN_14013fdd0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942e0,0);
  FGenericPlatformString::Memcpy(DAT_1462942e0,L"Weapon3SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e45c20);
  return;
}



// FUNCTION 14013fe10 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294370,0);
  FGenericPlatformString::Memcpy(DAT_146294370,L"Weapon4JsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45c40);
  return;
}



// FUNCTION 14013fe50 FUN_14013fe50 body=59 status=ok
// SIG undefined FUN_14013fe50(void)

void FUN_14013fe50(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462942f0,0);
  FGenericPlatformString::Memcpy(DAT_1462942f0,L"Weapon4SerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e45c60);
  return;
}



// FUNCTION 14013fe90 FUN_14013fe90 body=59 status=ok
// SIG undefined FUN_14013fe90(void)

void FUN_14013fe90(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294430,0);
  FGenericPlatformString::Memcpy(DAT_146294430,L"WeaponChallengesCompletion",0x36);
  atexit((_func_5014 *)&LAB_143e45c80);
  return;
}



// FUNCTION 14013ff50 EOL_String'' body=115 status=ok
// SIG undefined EOL_String''(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void `dynamic_initializer_for_'FDlgConfigWriter::EOL_String__(void)

{
  undefined *puVar1;
  int iVar2;
  longlong lVar3;
  
  puVar1 = PTR_DAT_1462940e0;
  if ((PTR_DAT_1462940e0 != (undefined *)0x0) && (*(short *)PTR_DAT_1462940e0 != 0)) {
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(short *)(PTR_DAT_1462940e0 + lVar3 * 2) != 0);
    iVar2 = (int)lVar3 + 1;
    _DAT_146864ae0 = iVar2;
    if (0 < iVar2) {
      TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146864ad8,0);
    }
    FGenericPlatformString::Memcpy(DAT_146864ad8,puVar1,(longlong)iVar2 * 2);
  }
  atexit((_func_5014 *)&LAB_143e45ca0);
  return;
}



// FUNCTION 140140310 `dynamic_initializer_for_'WyveFloatPartsMuzzleName'' body=133 status=ok
// SIG undefined `dynamic_initializer_for_'WyveFloatPartsMuzzleName''(void)

void _dynamic_initializer_for__WyveFloatPartsMuzzleName__(void)

{
  FName::FName(&DAT_146865300,L"Null",1);
  FName::FName(&DAT_146865308,L"Technical",1);
  FName::FName(&DAT_146865310,L"Outrunner",1);
  FName::FName(&DAT_146865318,L"Revolver",1);
  FName::FName(&DAT_146865320,L"Emperor",1);
  return;
}



// FUNCTION 1401403e0 FUN_1401403e0 body=59 status=ok
// SIG undefined FUN_1401403e0(void)

void FUN_1401403e0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462948b0,0);
  FGenericPlatformString::Memcpy(DAT_1462948b0,L"AbilityData",0x18);
  atexit((_func_5014 *)&LAB_143e45cc0);
  return;
}



// FUNCTION 1401404c0 FUN_1401404c0 body=59 status=ok
// SIG undefined FUN_1401404c0(void)

void FUN_1401404c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294860,0);
  FGenericPlatformString::Memcpy(DAT_146294860,L"ArtifactJsonData",0x22);
  atexit((_func_5014 *)&LAB_143e45ce0);
  return;
}



// FUNCTION 140140500 FUN_140140500 body=59 status=ok
// SIG undefined FUN_140140500(void)

void FUN_140140500(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462947e0,0);
  FGenericPlatformString::Memcpy(DAT_1462947e0,L"ArtifactSerialNumber",0x2a);
  atexit((_func_5014 *)&LAB_143e45d00);
  return;
}



// FUNCTION 140140540 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294880,0);
  FGenericPlatformString::Memcpy(DAT_146294880,L"BodyCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e45d20);
  return;
}



// FUNCTION 140140580 FUN_140140580 body=117 status=ok
// SIG undefined FUN_140140580(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140140580(void)

{
  if (DAT_1468b1f88 == (longlong *)0x0) {
    IConsoleManager::SetupSingleton();
  }
  DAT_1468652a8 =
       (longlong *)
       (**(code **)(*DAT_1468b1f88 + 8))
                 (DAT_1468b1f88,L"ai.angry_patrol_threshold",0x40a00000,&DAT_14419e23c,1);
  _DAT_1468652a0 = &PTR_FUN_143f3ecf8;
  _DAT_1468652b0 = (**(code **)(*DAT_1468652a8 + 0x40))(DAT_1468652a8);
  atexit(FUN_143e45d40);
  return;
}



// FUNCTION 140140600 FUN_140140600 body=59 status=ok
// SIG undefined FUN_140140600(void)

void FUN_140140600(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294710,0);
  FGenericPlatformString::Memcpy(DAT_146294710,L"CanJoin",0x10);
  atexit((_func_5014 *)&LAB_143e45d90);
  return;
}



// FUNCTION 140140680 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294850,0);
  FGenericPlatformString::Memcpy(DAT_146294850,L"ClassItemJsonData",0x24);
  atexit((_func_5014 *)&LAB_143e45db0);
  return;
}



// FUNCTION 1401406c0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462947d0,0);
  FGenericPlatformString::Memcpy(DAT_1462947d0,L"ClassItemSerialNumber",0x2c);
  atexit((_func_5014 *)&LAB_143e45dd0);
  return;
}



// FUNCTION 140140740 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294900,0);
  FGenericPlatformString::Memcpy(DAT_146294900,L"CrewChallengesCompletion",0x32);
  atexit((_func_5014 *)&LAB_143e45df0);
  return;
}



// FUNCTION 1401407c0 FUN_1401407c0 body=59 status=ok
// SIG undefined FUN_1401407c0(void)

void FUN_1401407c0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294960,0);
  FGenericPlatformString::Memcpy(DAT_146294960,L"DateTime",0x12);
  atexit((_func_5014 *)&LAB_143e45e10);
  return;
}



// FUNCTION 1401408e0 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294a00,0);
  FGenericPlatformString::Memcpy(DAT_146294a00,L"DuplicateReservationFound",0x34);
  atexit((_func_5014 *)&LAB_143e45e30);
  return;
}



// FUNCTION 140140920 `dynamic_initializer_for_'kResultStringCannotLoadPreset'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringCannotLoadPreset''(void)

void _dynamic_initializer_for__kResultStringCannotLoadPreset__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462948a0,0);
  FGenericPlatformString::Memcpy(DAT_1462948a0,L"EmoteCustomizationHash",0x2e);
  atexit((_func_5014 *)&LAB_143e45e50);
  return;
}



// FUNCTION 140140960 `dynamic_initializer_for_'AutogeneratedDefaultValueName'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'AutogeneratedDefaultValueName''(void)

void PinHelpers::_dynamic_initializer_for__AutogeneratedDefaultValueName__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462948f0,0);
  FGenericPlatformString::Memcpy(DAT_1462948f0,L"EnemyChallengesCompletion",0x34);
  atexit((_func_5014 *)&LAB_143e45e70);
  return;
}



// FUNCTION 1401409e0 `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kResultStringAssetDefAlrealdyLoaded''(void)

void _dynamic_initializer_for__kResultStringAssetDefAlrealdyLoaded__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294910,0);
  FGenericPlatformString::Memcpy(DAT_146294910,L"ExplorationChallengesCompletion",0x40);
  atexit((_func_5014 *)&LAB_143e45e90);
  return;
}



// FUNCTION 140140aa0 FUN_140140aa0 body=59 status=ok
// SIG undefined FUN_140140aa0(void)

void FUN_140140aa0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294740,0);
  FGenericPlatformString::Memcpy(DAT_146294740,L"FriendActivityStatus",0x2a);
  atexit((_func_5014 *)&LAB_143e45eb0);
  return;
}



// FUNCTION 140140ae0 FUN_140140ae0 body=59 status=ok
// SIG undefined FUN_140140ae0(void)

void FUN_140140ae0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462949b0,0);
  FGenericPlatformString::Memcpy(DAT_1462949b0,L"ChallengeInfo",0x1c);
  atexit((_func_5014 *)&LAB_143e45ed0);
  return;
}



// FUNCTION 140140b20 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462949a0,0);
  FGenericPlatformString::Memcpy(DAT_1462949a0,L"FriendCrewQuarterInfo",0x2c);
  atexit((_func_5014 *)&LAB_143e45ef0);
  return;
}



// FUNCTION 140140b60 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294980,0);
  FGenericPlatformString::Memcpy(DAT_146294980,L"FriendLoadOutInfo",0x24);
  atexit((_func_5014 *)&LAB_143e45f10);
  return;
}



// FUNCTION 140140ba0 `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PerfCounter_NumServerMoveCorrections''(void)

void _dynamic_initializer_for__PerfCounter_NumServerMoveCorrections__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294970,0);
  FGenericPlatformString::Memcpy(DAT_146294970,L"FriendStatusPresenceInfo",0x32);
  atexit((_func_5014 *)&LAB_143e45f30);
  return;
}



// FUNCTION 140140be0 FUN_140140be0 body=59 status=ok
// SIG undefined FUN_140140be0(void)

void FUN_140140be0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294990,0);
  FGenericPlatformString::Memcpy(DAT_146294990,L"FriendSkillTreeInfo",0x28);
  atexit((_func_5014 *)&LAB_143e45f50);
  return;
}



// FUNCTION 140140c20 `dynamic_initializer_for_'PipelineExtension'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'PipelineExtension''(void)

void _dynamic_initializer_for__PipelineExtension__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462948c0,0);
  FGenericPlatformString::Memcpy(DAT_1462948c0,L"FriendStatusThing",0x24);
  atexit((_func_5014 *)&LAB_143e45f70);
  return;
}



// FUNCTION 140140c60 FUN_140140c60 body=59 status=ok
// SIG undefined FUN_140140c60(void)

void FUN_140140c60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462948d0,0);
  FGenericPlatformString::Memcpy(DAT_1462948d0,L"GameCompletion",0x1e);
  atexit((_func_5014 *)&LAB_143e45f90);
  return;
}



// FUNCTION 140140ca0 FUN_140140ca0 body=59 status=ok
// SIG undefined FUN_140140ca0(void)

void FUN_140140ca0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462949d0,0);
  FGenericPlatformString::Memcpy(DAT_1462949d0,L"GenericFailure",0x1e);
  atexit((_func_5014 *)&LAB_143e45fb0);
  return;
}



// FUNCTION 140140ce0 `dynamic_initializer_for_'WasDebuggerStoreKey'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'WasDebuggerStoreKey''(void)

void SessionManagerDefs::_dynamic_initializer_for__WasDebuggerStoreKey__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294830,0);
  FGenericPlatformString::Memcpy(DAT_146294830,L"GrenadeJsonData",0x20);
  atexit((_func_5014 *)&LAB_143e45fd0);
  return;
}



// FUNCTION 140140d20 FUN_140140d20 body=59 status=ok
// SIG undefined FUN_140140d20(void)

void FUN_140140d20(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462947b0,0);
  FGenericPlatformString::Memcpy(DAT_1462947b0,L"GrenadeSerialNumber",0x28);
  atexit((_func_5014 *)&LAB_143e45ff0);
  return;
}



// FUNCTION 140140d60 FUN_140140d60 body=59 status=ok
// SIG undefined FUN_140140d60(void)

void FUN_140140d60(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294750,0);
  FGenericPlatformString::Memcpy(DAT_146294750,L"GuardianRank",0x1a);
  atexit((_func_5014 *)&LAB_143e46010);
  return;
}



// FUNCTION 140140da0 FUN_140140da0 body=59 status=ok
// SIG undefined FUN_140140da0(void)

void FUN_140140da0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294730,0);
  FGenericPlatformString::Memcpy(DAT_146294730,L"HasSelectedCharacter",0x2a);
  atexit((_func_5014 *)&LAB_143e46030);
  return;
}



// FUNCTION 140140de0 `dynamic_initializer_for_'kAchievementName_SimultaneousInfected'' body=59 status=ok
// SIG undefined `dynamic_initializer_for_'kAchievementName_SimultaneousInfected''(void)

void `anonymous_namespace'::_dynamic_initializer_for__kAchievementName_SimultaneousInfected__(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294870,0);
  FGenericPlatformString::Memcpy(DAT_146294870,L"HeadCustomizationHash",0x2c);
  atexit((_func_5014 *)&LAB_143e46050);
  return;
}



// FUNCTION 140140eb0 FUN_140140eb0 body=59 status=ok
// SIG undefined FUN_140140eb0(void)

void FUN_140140eb0(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_1462949f0,0);
  FGenericPlatformString::Memcpy(DAT_1462949f0,L"InvalidClientBeaconType",0x30);
  atexit((_func_5014 *)&LAB_143e46070);
  return;
}



// FUNCTION 140141030 FUN_140141030 body=59 status=ok
// SIG undefined FUN_140141030(void)

void FUN_140141030(void)

{
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(&DAT_146294680,0);
  FGenericPlatformString::Memcpy(DAT_146294680,L"Level",0xc);
  atexit((_func_5014 *)&LAB_143e46090);
  return;
}


