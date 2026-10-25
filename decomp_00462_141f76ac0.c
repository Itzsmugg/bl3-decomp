// batch file for Borderlands3.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 141f76ac0 FUN_141f76ac0 body=123 status=ok
// SIG undefined FUN_141f76ac0(void)

void FUN_141f76ac0(undefined8 param_1,longlong param_2)

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
  FUN_141f587d0(param_1,local_res10[0]);
  return;
}



// FUNCTION 141f76b80 FUN_141f76b80 body=126 status=ok
// SIG undefined FUN_141f76b80(void)

void FUN_141f76b80(undefined8 param_1,longlong param_2)

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
  FUN_141f5ae70(param_1,local_res10[0]);
  return;
}



// FUNCTION 141f76c20 FUN_141f76c20 body=136 status=ok
// SIG undefined FUN_141f76c20(void)

void FUN_141f76c20(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uStackX_14 = 0;
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
  FUN_141f5b0b0(param_1,CONCAT44(uStackX_14,local_res10));
  return;
}



// FUNCTION 141f76cb0 FUN_141f76cb0 body=123 status=ok
// SIG undefined FUN_141f76cb0(void)

void FUN_141f76cb0(undefined8 param_1,longlong param_2)

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
  FUN_141f5b140(param_1,local_res10[0]);
  return;
}



// FUNCTION 141f76d50 FUN_141f76d50 body=136 status=ok
// SIG undefined FUN_141f76d50(void)

void FUN_141f76d50(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  uStackX_14 = 0;
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
  FUN_141f634a0(param_1,CONCAT44(uStackX_14,local_res10));
  return;
}



// FUNCTION 141f76de0 FUN_141f76de0 body=128 status=ok
// SIG undefined FUN_141f76de0(void)

void FUN_141f76de0(longlong param_1,longlong param_2)

{
  int local_res8 [2];
  
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
  *(bool *)(param_1 + 0x415) = local_res8[0] != 0;
  return;
}



// FUNCTION 141f76e60 FUN_141f76e60 body=188 status=ok
// SIG undefined FUN_141f76e60(void)

void FUN_141f76e60(undefined8 param_1,longlong param_2)

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
  FUN_141f65450(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141f76f20 execSetFrameRate body=129 status=ok
// SIG undefined execSetFrameRate(void)

void UMovieSceneSequencePlayer::execSetFrameRate(undefined8 param_1,longlong param_2)

{
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  local_res10 = 60000;
  uStackX_14 = 1;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,&local_res10);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),&local_res10);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  FUN_141f655d0(param_1,CONCAT44(uStackX_14,local_res10));
  return;
}



// FUNCTION 141f76fb0 FUN_141f76fb0 body=123 status=ok
// SIG undefined FUN_141f76fb0(void)

void FUN_141f76fb0(undefined8 param_1,longlong param_2)

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
  FUN_141f65d20(param_1,local_res10[0]);
  return;
}



// FUNCTION 141f77030 FUN_141f77030 body=251 status=ok
// SIG undefined FUN_141f77030(void)

void FUN_141f77030(longlong param_1,longlong param_2)

{
  int iVar1;
  float local_res8 [2];
  ulonglong local_res10;
  
  local_res8[0] = 0.0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x80) = *(undefined8 *)(*(longlong *)(param_2 + 0x80) + 0x28);
    FUN_14179aca0(param_2,local_res8);
  }
  else {
    FFrame::Step(param_2,*(undefined8 *)(param_2 + 0x18),local_res8);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (ulonglong)(*(longlong *)(param_2 + 0x20) != 0) + *(longlong *)(param_2 + 0x20);
  iVar1 = (int)((ulonglong)*(undefined8 *)(param_1 + 0x760) >> 0x20);
  local_res10 = (ulonglong)*(uint *)(param_1 + 0x3e0);
  if (*(char *)(param_1 + 0x3c8) == '\x01') {
    FUN_141f5b140();
    return;
  }
  FUN_141f587d0(param_1,((float)iVar1 * 0.0 +
                        (float)((longlong)(int)*(uint *)(param_1 + 0x3e0) * (longlong)iVar1)) /
                        (float)(int)*(undefined8 *)(param_1 + 0x760) + local_res8[0]);
  return;
}



// FUNCTION 141f77130 FUN_141f77130 body=190 status=ok
// SIG undefined FUN_141f77130(void)

void FUN_141f77130(undefined8 param_1,longlong param_2)

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
  FUN_141f65d30(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141f771f0 FUN_141f771f0 body=190 status=ok
// SIG undefined FUN_141f771f0(void)

void FUN_141f771f0(undefined8 param_1,longlong param_2)

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
  FUN_141f65ff0(param_1,local_res20[0],local_res10[0]);
  return;
}



// FUNCTION 141f772d0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSubTrack::GetPrivateStaticClass(void)

{
  if (DAT_146acaad8 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneSubTrack",&DAT_146acaad8,FUN_140447710,0x68,
                  0x10000000,0,L"Engine",&LAB_141f775d0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7830,&LAB_140447700,0);
  }
  return DAT_146acaad8;
}



// FUNCTION 141f77390 FUN_141f77390 body=53 status=ok
// SIG undefined FUN_141f77390(void)

void FUN_141f77390(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144f2a960;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f773e0 FUN_141f773e0 body=53 status=ok
// SIG undefined FUN_141f773e0(void)

void FUN_141f773e0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &PTR_FUN_144f2aa78;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f77420 FUN_141f77420 body=47 status=ok
// SIG undefined FUN_141f77420(void)

longlong FUN_141f77420(void)

{
  if (DAT_146acaa98 == 0) {
    FUN_141786440(&DAT_146acaa98,&PTR_LAB_144f29f50);
  }
  return DAT_146acaa98;
}



// FUNCTION 141f77460 FUN_141f77460 body=53 status=ok
// SIG undefined FUN_141f77460(void)

void FUN_141f77460(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x90;
    *puVar1 = &PTR_FUN_144f2a848;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141f774a0 FUN_141f774a0 body=53 status=ok
// SIG undefined FUN_141f774a0(void)

void FUN_141f774a0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f2abd0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f774e0 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSubSection::GetPrivateStaticClass(void)

{
  if (DAT_146acaac8 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneSubSection",&DAT_146acaac8,FUN_140447710,0x150,
                  0x10000000,0,L"Engine",&LAB_141f775c0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_1405b7840,&LAB_140447700,0);
  }
  return DAT_146acaac8;
}



// FUNCTION 141f77610 FUN_141f77610 body=43 status=ok
// SIG undefined FUN_141f77610(void)

undefined8 * FUN_141f77610(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_143fcdb48;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141f776c0 Copy body=397 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FMovieSceneSpawnable>::Copy
          (undefined8 param_1,undefined8 *param_2,longlong param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  int *piVar7;
  
  if (param_4 != 0) {
    piVar7 = (int *)(param_3 + 0x58);
    do {
      uVar6 = *(undefined8 *)(piVar7 + -0x14);
      *param_2 = *(undefined8 *)(piVar7 + -0x16);
      param_2[1] = uVar6;
      piVar1 = (int *)(param_2 + 6);
      iVar2 = piVar7[-0x11];
      iVar4 = piVar7[-0x10];
      iVar5 = piVar7[-0xf];
      *(int *)(param_2 + 2) = piVar7[-0x12];
      *(int *)((longlong)param_2 + 0x14) = iVar2;
      *(int *)(param_2 + 3) = iVar4;
      *(int *)((longlong)param_2 + 0x1c) = iVar5;
      iVar2 = piVar7[-0xd];
      iVar4 = piVar7[-0xc];
      iVar5 = piVar7[-0xb];
      *(int *)(param_2 + 4) = piVar7[-0xe];
      *(int *)((longlong)param_2 + 0x24) = iVar2;
      *(int *)(param_2 + 5) = iVar4;
      *(int *)((longlong)param_2 + 0x2c) = iVar5;
      if (piVar1 != piVar7 + -10) {
        iVar2 = piVar7[-8];
        pvVar3 = *(void **)(piVar7 + -10);
        *(int *)(param_2 + 7) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x3c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x3c) = 0;
        }
        else {
          TArray<FOnlineAsyncTask_*,TSizedDefaultAllocator<32>_>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 3);
        }
      }
      iVar2 = piVar7[-5];
      iVar4 = piVar7[-4];
      iVar5 = piVar7[-3];
      piVar1 = (int *)(param_2 + 10);
      *(int *)(param_2 + 8) = piVar7[-6];
      *(int *)((longlong)param_2 + 0x44) = iVar2;
      *(int *)(param_2 + 9) = iVar4;
      *(int *)((longlong)param_2 + 0x4c) = iVar5;
      if (piVar1 != piVar7 + -2) {
        iVar2 = *piVar7;
        pvVar3 = *(void **)(piVar7 + -2);
        *(int *)(param_2 + 0xb) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x5c) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
        }
        else {
          TArray<wchar_t,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 * 2);
        }
      }
      piVar1 = (int *)(param_2 + 0xd);
      param_2[0xc] = *(undefined8 *)(piVar7 + 2);
      if (piVar1 != piVar7 + 4) {
        iVar2 = piVar7[6];
        pvVar3 = *(void **)(piVar7 + 4);
        *(int *)(param_2 + 0xe) = iVar2;
        if ((iVar2 == 0) && (*(int *)((longlong)param_2 + 0x74) == 0)) {
          *(undefined4 *)((longlong)param_2 + 0x74) = 0;
        }
        else {
          TArray<FString,FDefaultAllocator>::ResizeForCopy(piVar1,iVar2);
          ::_guard_xfg_dispatch_icall_nop(*(void **)piVar1,pvVar3,(longlong)iVar2 << 4);
        }
      }
      *(char *)(param_2 + 0xf) = (char)piVar7[8];
      piVar1 = piVar7 + 10;
      piVar7 = piVar7 + 0x24;
      param_2[0x10] = *(undefined8 *)piVar1;
      param_4 = param_4 + -1;
      param_2 = param_2 + 0x12;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f77850 Destruct body=62 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FMovieSceneSpawnable>::Destruct
               (undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x50) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_2 + 0x30) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f77890 ESpawnOwnership_StaticEnum body=55 status=ok
// SIG undefined ESpawnOwnership_StaticEnum(void)

void ESpawnOwnership_StaticEnum(void)

{
  undefined8 uVar1;
  
  if (DAT_146acaa48 == 0) {
    uVar1 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acaa48 = GetStaticEnum(FUN_141f77e00,uVar1,L"ESpawnOwnership");
  }
  return;
}



// FUNCTION 141f778d0 GetPrivateStaticClass body=151 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneSignedObject::GetPrivateStaticClass(void)

{
  if (DAT_146acaaa0 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneSignedObject",&DAT_146acaaa0,FUN_140447710,0x50,
                  0x10000000,0,L"Engine",&LAB_141f775a0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_140447700,&LAB_140447700,0);
  }
  return DAT_146acaaa0;
}



// FUNCTION 141f77970 GetPrivateStaticClass body=162 status=ok
// SIG undefined GetPrivateStaticClass(void)

longlong UMovieSceneTrack::GetPrivateStaticClass(void)

{
  if (DAT_146acaaf8 == 0) {
    FUN_14171ccd0(L"/Script/MovieScene",L"MovieSceneTrack",&DAT_146acaaf8,FUN_140447710,0x58,
                  0x10000001,0,L"Engine",&LAB_141f775f0,
                  TBaseFunctorDelegateInstance<TTypeWrapper<void>___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_&),<lambda_25ffbec97ad7f86618b3b2a9f2d578bf>_>
                  ::GetBoundProgramCounterForTimerManager,AK::MemoryMgr::StartProfileThreadUsage,
                  &LAB_141f70ea0,&LAB_140447700,0);
  }
  return DAT_146acaaf8;
}



// FUNCTION 141f77a20 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC(void)

{
  return 0xb163d65e;
}



// FUNCTION 141f77a30 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC(void)

{
  return 0x58d2a036;
}



// FUNCTION 141f77a40 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC(void)

{
  return 0x22cbe6b;
}



// FUNCTION 141f77a50 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC(void)

{
  return 0x3f847d77;
}



// FUNCTION 141f77a60 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC(void)

{
  return 0x58181d44;
}



// FUNCTION 141f77a70 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC(void)

{
  return 0xcbe0144e;
}



// FUNCTION 141f77a90 FUN_141f77a90 body=160 status=ok
// SIG undefined FUN_141f77a90(void)

undefined8 FUN_141f77a90(undefined4 *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  FArchive::UsingCustomVersion(param_2,&DAT_1464b0068);
  iVar2 = FArchive::CustomVer(param_2,&DAT_1464b0068);
  if (iVar2 < 0x13) {
    return 0;
  }
  puVar1 = *(undefined4 **)param_2[1];
  if (puVar1 + 1 <= (undefined4 *)((undefined8 *)param_2[1])[1]) {
    *param_1 = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
    return 1;
  }
  (**(code **)(*param_2 + 0x50))(param_2,param_1,4);
  if ((*(byte *)((longlong)param_2 + 0x29) & 0x10) != 0) {
    FArchive::ByteSwap(param_2,param_1,4);
  }
  return 1;
}



// FUNCTION 141f77b30 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSequenceTransform::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acaa88 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneSequenceTransform_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acaa88 = GetStaticStruct(FUN_141f77e30,uVar2,L"MovieSceneSequenceTransform",0xc,uVar1);
  }
  return;
}



// FUNCTION 141f77b90 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneSpawnable::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acaab0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneSpawnable_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acaab0 = GetStaticStruct(FUN_141f77e60,uVar2,L"MovieSceneSpawnable",0x90,uVar1);
  }
  return;
}



// FUNCTION 141f77bf0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTrackEvalOptions::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acaae0 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneTrackEvalOptions_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acaae0 = GetStaticStruct(FUN_141f77e90,uVar2,L"MovieSceneTrackEvalOptions",4,uVar1);
  }
  return;
}



// FUNCTION 141f77c50 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTrackIdentifier::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acab00 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneTrackIdentifier_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acab00 = GetStaticStruct(FUN_141f77ec0,uVar2,L"MovieSceneTrackIdentifier",4,uVar1);
  }
  return;
}



// FUNCTION 141f77cb0 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTrackImplementation::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acab20 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementation_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acab20 = GetStaticStruct(FUN_141f77ef0,uVar2,L"MovieSceneTrackImplementation",0x10,uVar1)
    ;
  }
  return;
}



// FUNCTION 141f77d10 StaticStruct body=82 status=ok
// SIG undefined StaticStruct(void)

void FMovieSceneTrackImplementationPtr::StaticStruct(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (DAT_146acab10 == 0) {
    uVar1 = Get_Z_Construct_UScriptStruct_FMovieSceneTrackImplementationPtr_CRC();
    uVar2 = Z_Construct_UPackage__Script_MovieScene();
    DAT_146acab10 =
         GetStaticStruct(FUN_141f77f20,uVar2,L"MovieSceneTrackImplementationPtr",0x38,uVar1);
  }
  return;
}



// FUNCTION 141f77d70 FUN_141f77d70 body=47 status=ok
// SIG undefined FUN_141f77d70(void)

longlong FUN_141f77d70(void)

{
  if (DAT_146acaac0 == 0) {
    FUN_141786440(&DAT_146acaac0,&PTR_GetPrivateStaticClass_144f2a4f0);
  }
  return DAT_146acaac0;
}



// FUNCTION 141f77da0 FUN_141f77da0 body=47 status=ok
// SIG undefined FUN_141f77da0(void)

longlong FUN_141f77da0(void)

{
  if (DAT_146acaad0 == 0) {
    FUN_141786440(&DAT_146acaad0,&PTR_GetPrivateStaticClass_144f29a00);
  }
  return DAT_146acaad0;
}



// FUNCTION 141f77dd0 FUN_141f77dd0 body=47 status=ok
// SIG undefined FUN_141f77dd0(void)

longlong FUN_141f77dd0(void)

{
  if (DAT_146acaaf0 == 0) {
    FUN_141786440(&DAT_146acaaf0,&PTR_LAB_144f29c90);
  }
  return DAT_146acaaf0;
}



// FUNCTION 141f77e00 FUN_141f77e00 body=47 status=ok
// SIG undefined FUN_141f77e00(void)

longlong FUN_141f77e00(void)

{
  if (DAT_146acaaa8 == 0) {
    FUN_1417866a0(&DAT_146acaaa8,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db940);
  }
  return DAT_146acaaa8;
}



// FUNCTION 141f77e30 FUN_141f77e30 body=47 status=ok
// SIG undefined FUN_141f77e30(void)

longlong FUN_141f77e30(void)

{
  if (DAT_146acaa90 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acaa90,&PTR_Z_Construct_UPackage__Script_MovieScene_1464dafa0);
  }
  return DAT_146acaa90;
}



// FUNCTION 141f77e60 FUN_141f77e60 body=47 status=ok
// SIG undefined FUN_141f77e60(void)

longlong FUN_141f77e60(void)

{
  if (DAT_146acaab8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acaab8,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db2c0);
  }
  return DAT_146acaab8;
}



// FUNCTION 141f77e90 FUN_141f77e90 body=47 status=ok
// SIG undefined FUN_141f77e90(void)

longlong FUN_141f77e90(void)

{
  if (DAT_146acaae8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acaae8,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db760);
  }
  return DAT_146acaae8;
}



// FUNCTION 141f77ec0 FUN_141f77ec0 body=47 status=ok
// SIG undefined FUN_141f77ec0(void)

longlong FUN_141f77ec0(void)

{
  if (DAT_146acab08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acab08,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db850);
  }
  return DAT_146acab08;
}



// FUNCTION 141f77ef0 FUN_141f77ef0 body=47 status=ok
// SIG undefined FUN_141f77ef0(void)

longlong FUN_141f77ef0(void)

{
  if (DAT_146acab28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acab28,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db8f0);
  }
  return DAT_146acab28;
}



// FUNCTION 141f77f20 FUN_141f77f20 body=47 status=ok
// SIG undefined FUN_141f77f20(void)

longlong FUN_141f77f20(void)

{
  if (DAT_146acab18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct
              (&DAT_146acab18,&PTR_Z_Construct_UPackage__Script_MovieScene_1464db8a0);
  }
  return DAT_146acab18;
}



// FUNCTION 141f77f50 FUN_141f77f50 body=111 status=ok
// SIG undefined FUN_141f77f50(void)

undefined8 * FUN_141f77f50(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x28);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[1] = 0;
    *puVar2 = &PTR_FUN_1440104d0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR__scalar_deleting_destructor__144f2acf8;
    puVar2[3] = 0;
    puVar2[4] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f77fc0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
TImagePixelData<FColor>::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_FUN_1440104c8;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x28);
  }
  return param_1;
}



// FUNCTION 141f78010 FUN_141f78010 body=1008 status=ok
// SIG undefined FUN_141f78010(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f78010(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,
                  undefined4 param_5,longlong param_6)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_138 [32];
  undefined1 local_118;
  undefined4 *local_110;
  undefined4 local_108;
  undefined8 local_f8;
  float local_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_58;
  
  local_58 = DAT_1468387a8 ^ (ulonglong)auStack_138;
  local_b8 = *param_3;
  fStack_b4 = param_3[1];
  fStack_b0 = param_3[2];
  fStack_ac = param_3[3];
  local_a8 = *(undefined8 *)(param_3 + 4);
  uStack_a0 = *(undefined8 *)(param_3 + 6);
  local_98 = param_3[8];
  fStack_94 = param_3[9];
  fStack_90 = param_3[10];
  fStack_8c = param_3[0xb];
  if (*(char *)(param_1 + 0x30) != '\0') {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      local_f8 = *(undefined8 *)(param_1 + 0x20);
      local_f0 = *(float *)(param_1 + 0x28);
    }
    else {
      fVar3 = *(float *)(param_1 + 0x28);
      fVar4 = *(float *)(param_1 + 0x24);
      fVar7 = *(float *)(param_1 + 0x20);
      fVar5 = fVar3 * fStack_b4 - fVar4 * fStack_b0;
      fVar6 = fVar7 * fStack_b0 - fVar3 * local_b8;
      fVar8 = fVar4 * local_b8 - fVar7 * fStack_b4;
      fVar5 = fVar5 + fVar5;
      fVar6 = fVar6 + fVar6;
      fVar8 = fVar8 + fVar8;
      local_f0 = (fVar6 * local_b8 - fVar5 * fStack_b4) + fStack_ac * fVar8 + fVar3;
      local_f8 = CONCAT44((fVar5 * fStack_b0 - fVar8 * local_b8) + fStack_ac * fVar6 + fVar4,
                          (fVar8 * fStack_b4 - fVar6 * fStack_b0) + fStack_ac * fVar5 + fVar7);
    }
    local_108 = 0;
    local_110 = &DAT_1468b5d90;
    local_118 = 0;
    AnimationCore::SolveAim(&local_e8,&local_b8,param_1 + 0x34,&local_f8);
    fVar6 = fStack_b4 * local_e8;
    fVar8 = local_b8 * local_e8;
    fVar3 = local_b8 * fStack_e4;
    fVar4 = fStack_b4 * fStack_e4;
    fVar7 = local_b8 * fStack_e0;
    fVar5 = fStack_b0 * fStack_e0;
    local_b8 = fStack_ac * local_e8 * _DAT_146acaba0 + fStack_dc * local_b8 +
               fStack_b0 * fStack_e4 * _DAT_146acab90 + fStack_b4 * fStack_e0 * _DAT_146acab80;
    fStack_b4 = fStack_b0 * local_e8 * fRam0000000146acaba4 + fStack_dc * fStack_b4 +
                fStack_ac * fStack_e4 * fRam0000000146acab94 + fVar7 * fRam0000000146acab84;
    fStack_b0 = fVar6 * fRam0000000146acaba8 + fStack_dc * fStack_b0 + fVar3 * fRam0000000146acab98
                + fStack_ac * fStack_e0 * fRam0000000146acab88;
    fStack_ac = fVar8 * fRam0000000146acabac + fStack_dc * fStack_ac + fVar4 * fRam0000000146acab9c
                + fVar5 * fRam0000000146acab8c;
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_f8 = *(ulonglong *)(param_1 + 0x10);
    local_f0 = *(float *)(param_1 + 0x18);
  }
  else {
    fVar3 = *(float *)(param_1 + 0x18);
    fVar4 = *(float *)(param_1 + 0x14);
    fVar7 = *(float *)(param_1 + 0x10);
    fVar5 = fVar3 * fStack_b4 - fVar4 * fStack_b0;
    fVar6 = fVar7 * fStack_b0 - fVar3 * local_b8;
    fVar8 = fVar4 * local_b8 - fVar7 * fStack_b4;
    fVar5 = fVar5 + fVar5;
    fVar6 = fVar6 + fVar6;
    fVar8 = fVar8 + fVar8;
    local_f0 = (fVar6 * local_b8 - fVar5 * fStack_b4) + fStack_ac * fVar8 + fVar3;
    local_f8 = CONCAT44((fVar5 * fStack_b0 - fVar8 * local_b8) + fStack_ac * fVar6 + fVar4,
                        (fVar8 * fStack_b4 - fVar6 * fStack_b0) + fStack_ac * fVar5 + fVar7);
  }
  local_e8 = *(float *)(param_2 + 0x10);
  fStack_e4 = *(float *)(param_2 + 0x14);
  fStack_e0 = *(float *)(param_2 + 0x18);
  local_108 = 0;
  local_110 = &DAT_1468b5d90;
  local_118 = 0;
  AnimationCore::SolveAim(&local_c8,&local_b8,&local_e8,&local_f8);
  fVar6 = fStack_b4 * local_c8;
  fVar8 = local_b8 * local_c8;
  fVar3 = local_b8 * fStack_c4;
  fVar4 = fStack_b4 * fStack_c4;
  fVar7 = local_b8 * fStack_c0;
  fVar5 = fStack_b0 * fStack_c0;
  local_b8 = fStack_ac * local_c8 * _DAT_146acaba0 + fStack_bc * local_b8 +
             fStack_b0 * fStack_c4 * _DAT_146acab90 + fStack_b4 * fStack_c0 * _DAT_146acab80;
  fStack_b4 = fStack_b0 * local_c8 * fRam0000000146acaba4 + fStack_bc * fStack_b4 +
              fStack_ac * fStack_c4 * fRam0000000146acab94 + fVar7 * fRam0000000146acab84;
  fStack_b0 = fVar6 * fRam0000000146acaba8 + fStack_bc * fStack_b0 + fVar3 * fRam0000000146acab98 +
              fStack_ac * fStack_c0 * fRam0000000146acab88;
  fStack_ac = fVar8 * fRam0000000146acabac + fStack_bc * fStack_ac + fVar4 * fRam0000000146acab9c +
              fVar5 * fRam0000000146acab8c;
  FUN_14162bcf0(&local_b8,&local_88,param_4);
  local_d8 = local_88;
  uStack_d4 = uStack_84;
  uStack_d0 = uStack_80;
  uStack_cc = uStack_7c;
  FQuat::Rotator(&local_d8,&local_f8);
  if (*(char *)(param_1 + 8) == '\0') {
    local_f0 = 0.0;
  }
  if (*(char *)(param_1 + 9) == '\0') {
    local_f8 = local_f8 & 0xffffffff00000000;
  }
  if (*(char *)(param_1 + 10) == '\0') {
    local_f8 = local_f8 & 0xffffffff;
  }
  puVar2 = (undefined4 *)FRotator::Quaternion(&local_f8,&local_e8);
  iVar1 = *(int *)(param_6 + 0x28);
  local_d8 = *puVar2;
  uStack_d4 = puVar2[1];
  uStack_d0 = puVar2[2];
  uStack_cc = puVar2[3];
  *(int *)(param_6 + 0x28) = iVar1 + 1;
  if (*(int *)(param_6 + 0x2c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_6 + 0x20,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_6 + 0x20));
  *puVar2 = local_d8;
  puVar2[1] = uStack_d4;
  puVar2[2] = uStack_d0;
  puVar2[3] = uStack_cc;
  iVar1 = *(int *)(param_6 + 0x68);
  *(int *)(param_6 + 0x68) = iVar1 + 1;
  if (*(int *)(param_6 + 0x6c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6 + 0x60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_6 + 0x60) + (longlong)iVar1 * 4) = param_5;
  return;
}



// FUNCTION 141f78400 AccumulateConstraintTransform body=705 status=ok
// SIG undefined AccumulateConstraintTransform(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FTransformConstraintDescription::AccumulateConstraintTransform
               (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined4 param_5,longlong *param_6)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_1468387a8 ^ (ulonglong)auStack_c8;
  FUN_14162bcf0(param_2,&local_78,param_4);
  cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
  if (cVar3 == '\0') {
    cVar3 = (**(code **)(*param_1 + 0x18))(param_1);
    if (cVar3 != '\0') {
      local_a8 = local_68;
      local_a0 = uStack_60;
      uStack_a4 = uStack_64;
      if ((char)param_1[1] == '\0') {
        local_a8 = 0;
      }
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        uStack_a4 = 0;
      }
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        local_a0 = 0;
      }
      iVar1 = (int)param_6[3];
      *(int *)(param_6 + 3) = iVar1 + 1;
      if (*(int *)((longlong)param_6 + 0x1c) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_6 + 2,iVar1);
      }
      lVar2 = param_6[2];
      *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(uStack_a4,local_a8);
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = local_a0;
      iVar1 = (int)param_6[0xb];
      *(int *)(param_6 + 0xb) = iVar1 + 1;
      if (*(int *)((longlong)param_6 + 0x5c) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6 + 10,iVar1);
      }
      *(undefined4 *)(param_6[10] + (longlong)iVar1 * 4) = param_5;
    }
    cVar3 = (**(code **)(*param_1 + 0x10))(param_1);
    if (cVar3 != '\0') {
      local_98 = local_78;
      uStack_94 = uStack_74;
      uStack_90 = uStack_70;
      uStack_8c = uStack_6c;
      FQuat::Rotator(&local_98,&local_a8);
      if ((char)param_1[1] == '\0') {
        local_a0 = 0;
      }
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        local_a8 = 0;
      }
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        uStack_a4 = 0;
      }
      puVar4 = (undefined4 *)FRotator::Quaternion(&local_a8,local_88);
      local_98 = *puVar4;
      uStack_94 = puVar4[1];
      uStack_90 = puVar4[2];
      uStack_8c = puVar4[3];
      FMultiTransformBlendHelper::AddRotation(param_6,&local_98,param_5);
    }
    cVar3 = (**(code **)(*param_1 + 0x20))(param_1);
    if (cVar3 != '\0') {
      local_a8 = local_58;
      local_a0 = uStack_50;
      uStack_a4 = uStack_54;
      if ((char)param_1[1] == '\0') {
        local_a8 = 0;
      }
      if (*(char *)((longlong)param_1 + 9) == '\0') {
        uStack_a4 = 0;
      }
      if (*(char *)((longlong)param_1 + 10) == '\0') {
        local_a0 = 0;
      }
      iVar1 = (int)param_6[7];
      *(int *)(param_6 + 7) = iVar1 + 1;
      if (*(int *)((longlong)param_6 + 0x3c) < iVar1 + 1) {
        TArray<FRotator,FDefaultAllocator>::ResizeGrow(param_6 + 6,iVar1);
      }
      lVar2 = param_6[6];
      *(ulonglong *)(lVar2 + (longlong)iVar1 * 0xc) = CONCAT44(uStack_a4,local_a8);
      *(undefined4 *)(lVar2 + 8 + (longlong)iVar1 * 0xc) = local_a0;
      iVar1 = (int)param_6[0xf];
      *(int *)(param_6 + 0xf) = iVar1 + 1;
      if (*(int *)((longlong)param_6 + 0x7c) < iVar1 + 1) {
        TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6 + 0xe,iVar1);
      }
      *(undefined4 *)(param_6[0xe] + (longlong)iVar1 * 4) = param_5;
    }
  }
  else {
    iVar1 = (int)param_6[1];
    *(int *)(param_6 + 1) = iVar1 + 1;
    if (*(int *)((longlong)param_6 + 0xc) < iVar1 + 1) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(param_6,iVar1);
    }
    puVar5 = (undefined8 *)((longlong)iVar1 * 0x30 + *param_6);
    *puVar5 = CONCAT44(uStack_74,local_78);
    puVar5[1] = CONCAT44(uStack_6c,uStack_70);
    *(undefined4 *)(puVar5 + 2) = local_68;
    *(undefined4 *)((longlong)puVar5 + 0x14) = uStack_64;
    *(undefined4 *)(puVar5 + 3) = uStack_60;
    *(undefined4 *)((longlong)puVar5 + 0x1c) = uStack_5c;
    *(undefined4 *)(puVar5 + 4) = local_58;
    *(undefined4 *)((longlong)puVar5 + 0x24) = uStack_54;
    *(undefined4 *)(puVar5 + 5) = uStack_50;
    *(undefined4 *)((longlong)puVar5 + 0x2c) = uStack_4c;
    iVar1 = (int)param_6[9];
    *(int *)(param_6 + 9) = iVar1 + 1;
    if (*(int *)((longlong)param_6 + 0x4c) < iVar1 + 1) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_6 + 8,iVar1);
    }
    *(undefined4 *)(param_6[8] + (longlong)iVar1 * 4) = param_5;
  }
  return;
}



// FUNCTION 141f786d0 AddRotation body=154 status=ok
// SIG undefined AddRotation(void)

void FMultiTransformBlendHelper::AddRotation
               (longlong param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x28);
  *(int *)(param_1 + 0x28) = iVar1 + 1;
  if (*(int *)(param_1 + 0x2c) < iVar1 + 1) {
    TArray<FDelegateBase,FHeapAllocator>::ResizeGrow(param_1 + 0x20,iVar1);
  }
  puVar2 = (undefined4 *)((longlong)iVar1 * 0x10 + *(longlong *)(param_1 + 0x20));
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  iVar1 = *(int *)(param_1 + 0x68);
  *(int *)(param_1 + 0x68) = iVar1 + 1;
  if (*(int *)(param_1 + 0x6c) < iVar1 + 1) {
    TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(param_1 + 0x60,iVar1);
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x60) + (longlong)iVar1 * 4) = param_3;
  return;
}



// FUNCTION 141f78770 FUN_141f78770 body=3393 status=ok
// SIG undefined FUN_141f78770(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f78770(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar6 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_3 = *(undefined8 *)param_2;
    *(undefined8 *)(param_3 + 2) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_3 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_3 + 6) = uVar6;
    uVar6 = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_3 + 8) = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_3 + 10) = uVar6;
  }
  else if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
          (uVar8 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(),
          fVar37 = fRam0000000146acabc8, fVar30 = fRam0000000146acabc4, fVar28 = _DAT_146acabc0,
          fVar31 = fRam0000000146acab7c, fVar29 = fRam0000000146acab78,
          fVar27 = fRam0000000146acab74, fVar24 = _DAT_146acab70, fVar54 = fRam0000000146acab58,
          fVar53 = fRam0000000146acab54, fVar51 = _DAT_146acab50, (char)uVar8 == '\0')) {
    if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar7 != '\0')) {
      fVar51 = *(float *)(param_1 + 0x30);
      fVar53 = *(float *)(param_1 + 0x34);
      fVar54 = *(float *)(param_1 + 0x38);
      fVar24 = *param_4;
      fVar27 = param_4[1];
      fVar29 = param_4[2];
      fVar31 = param_4[3];
      fVar28 = fVar54 * fVar27 - fVar53 * fVar29;
      fVar30 = fVar51 * fVar29 - fVar54 * fVar24;
      fVar37 = fVar53 * fVar24 - fVar51 * fVar27;
      fVar28 = fVar28 + fVar28;
      fVar30 = fVar30 + fVar30;
      fVar37 = fVar37 + fVar37;
      auVar10._4_4_ = param_2[5] + (fVar28 * fVar29 - fVar37 * fVar24) + fVar31 * fVar30 + fVar53;
      auVar10._0_4_ = param_2[4] + (fVar37 * fVar27 - fVar30 * fVar29) + fVar31 * fVar28 + fVar51;
      auVar10._8_4_ = param_2[6] + (fVar30 * fVar24 - fVar28 * fVar27) + fVar31 * fVar37 + fVar54;
      auVar10._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 4) = auVar10;
    }
    if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(), fVar24 = fRam0000000146acab7c,
       fVar54 = fRam0000000146acab78, fVar53 = fRam0000000146acab74, fVar51 = _DAT_146acab70,
       cVar7 != '\0')) {
      fVar27 = *param_2;
      fVar29 = param_2[1];
      fVar31 = param_2[2];
      fVar28 = param_2[3];
      fVar30 = *param_4;
      fVar37 = param_4[1];
      fVar38 = param_4[2];
      fVar39 = param_4[3];
      fVar52 = *(float *)(param_1 + 0x20);
      fVar20 = *(float *)(param_1 + 0x24);
      fVar22 = *(float *)(param_1 + 0x28);
      fVar23 = *(float *)(param_1 + 0x2c);
      fVar59 = fVar39 * fVar27 * _DAT_146acaba0 + fVar28 * fVar30 + fVar38 * fVar29 * _DAT_146acab90
               + fVar37 * fVar31 * _DAT_146acab80;
      fVar55 = fVar38 * fVar27 * fRam0000000146acaba4 + fVar28 * fVar37 +
               fVar39 * fVar29 * fRam0000000146acab94 + fVar30 * fVar31 * fRam0000000146acab84;
      fVar15 = fVar37 * fVar27 * fRam0000000146acaba8 + fVar28 * fVar38 +
               fVar30 * fVar29 * fRam0000000146acab98 + fVar39 * fVar31 * fRam0000000146acab88;
      fVar27 = fVar30 * fVar27 * fRam0000000146acabac + fVar28 * fVar39 +
               fVar37 * fVar29 * fRam0000000146acab9c + fVar38 * fVar31 * fRam0000000146acab8c;
      fVar21 = fVar59 * fVar23 * _DAT_146acaba0 + fVar27 * fVar52 + fVar55 * fVar22 * _DAT_146acab90
               + fVar20 * fVar15 * _DAT_146acab80;
      fVar19 = fVar59 * fVar22 * fRam0000000146acaba4 + fVar27 * fVar20 +
               fVar55 * fVar23 * fRam0000000146acab94 + fVar52 * fVar15 * fRam0000000146acab84;
      fVar14 = fVar59 * fVar20 * fRam0000000146acaba8 + fVar27 * fVar22 +
               fVar55 * fVar52 * fRam0000000146acab98 + fVar23 * fVar15 * fRam0000000146acab88;
      fVar52 = fVar59 * fVar52 * fRam0000000146acabac + fVar27 * fVar23 +
               fVar55 * fVar20 * fRam0000000146acab9c + fVar22 * fVar15 * fRam0000000146acab8c;
      *param_3 = fVar21;
      param_3[1] = fVar19;
      param_3[2] = fVar14;
      param_3[3] = fVar52;
      auVar18._0_4_ = fVar21 * fVar21 + fVar14 * fVar14;
      auVar18._4_4_ = fVar19 * fVar19 + fVar52 * fVar52;
      auVar18._8_4_ = fVar14 * fVar14 + fVar21 * fVar21;
      auVar18._12_4_ = fVar52 * fVar52 + fVar19 * fVar19;
      fVar30 = auVar18._4_4_ + auVar18._0_4_;
      fVar37 = auVar18._8_4_ + auVar18._4_4_;
      fVar38 = auVar18._12_4_ + auVar18._8_4_;
      fVar39 = auVar18._0_4_ + auVar18._12_4_;
      auVar1._4_4_ = fVar37;
      auVar1._0_4_ = fVar30;
      auVar1._8_4_ = fVar38;
      auVar1._12_4_ = fVar39;
      auVar10 = rsqrtps(auVar18,auVar1);
      fVar27 = auVar10._0_4_;
      fVar29 = auVar10._4_4_;
      fVar31 = auVar10._8_4_;
      fVar28 = auVar10._12_4_;
      fVar27 = (fVar51 - fVar27 * fVar27 * fVar30 * fVar51) * fVar27 + fVar27;
      fVar29 = (fVar53 - fVar29 * fVar29 * fVar37 * fVar53) * fVar29 + fVar29;
      fVar31 = (fVar54 - fVar31 * fVar31 * fVar38 * fVar54) * fVar31 + fVar31;
      fVar28 = (fVar24 - fVar28 * fVar28 * fVar39 * fVar24) * fVar28 + fVar28;
      fVar53 = (float)(((uint)(((fVar53 - fVar29 * fVar29 * fVar37 * fVar53) * fVar29 + fVar29) *
                              fVar19) ^ uRam0000000146acab64) &
                       -(uint)(fRam0000000146acabd4 <= fVar37) ^ uRam0000000146acab64);
      fVar54 = (float)(((uint)(((fVar54 - fVar31 * fVar31 * fVar38 * fVar54) * fVar31 + fVar31) *
                              fVar14) ^ uRam0000000146acab68) &
                       -(uint)(fRam0000000146acabd8 <= fVar38) ^ uRam0000000146acab68);
      fVar24 = (float)(((uint)(((fVar24 - fVar28 * fVar28 * fVar39 * fVar24) * fVar28 + fVar28) *
                              fVar52) ^ uRam0000000146acab6c) &
                       -(uint)(fRam0000000146acabdc <= fVar39) ^ uRam0000000146acab6c);
      *param_3 = (float)(((uint)(((fVar51 - fVar27 * fVar27 * fVar30 * fVar51) * fVar27 + fVar27) *
                                fVar21) ^ _DAT_146acab60) & -(uint)(_DAT_146acabd0 <= fVar30) ^
                        _DAT_146acab60);
      param_3[1] = fVar53;
      param_3[2] = fVar54;
      param_3[3] = fVar24;
    }
    if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar7 != '\0')) {
      auVar2._4_4_ = param_2[9] * param_4[9] * *(float *)(param_1 + 0x44);
      auVar2._0_4_ = param_2[8] * param_4[8] * *(float *)(param_1 + 0x40);
      auVar2._8_4_ = param_2[10] * param_4[10] * *(float *)(param_1 + 0x48);
      auVar2._12_4_ = 0;
      *(undefined1 (*) [16])(param_3 + 8) = auVar2;
    }
  }
  else {
    auVar10 = *(undefined1 (*) [16])(param_4 + 8);
    fVar38 = auVar10._0_4_;
    fVar52 = auVar10._4_4_;
    fVar22 = auVar10._8_4_;
    fVar59 = auVar10._12_4_;
    auVar1 = *(undefined1 (*) [16])(param_1 + 0x40);
    fVar39 = auVar1._0_4_;
    fVar20 = auVar1._4_4_;
    fVar23 = auVar1._8_4_;
    fVar55 = auVar1._12_4_;
    auVar10 = minps(auVar1,auVar10);
    local_118 = _DAT_146acabc0;
    fStack_114 = fRam0000000146acabc4;
    fStack_110 = fRam0000000146acabc8;
    fStack_10c = fRam0000000146acabcc;
    auVar11._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146acabc4);
    auVar11._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146acabc0);
    auVar11._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146acabc8);
    auVar11._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146acabcc);
    iVar9 = movmskps(uVar8,auVar11);
    if (iVar9 == 0) {
      fVar51 = *param_4;
      fVar53 = param_4[1];
      fVar54 = param_4[2];
      fVar28 = param_4[3];
      fVar30 = *(float *)(param_1 + 0x20);
      fVar37 = *(float *)(param_1 + 0x24);
      fVar39 = *(float *)(param_1 + 0x28);
      fVar20 = *(float *)(param_1 + 0x2c);
      fVar23 = *(float *)(param_1 + 0x30) * fVar38;
      fVar15 = *(float *)(param_1 + 0x34) * fVar52;
      fVar21 = *(float *)(param_1 + 0x38) * fVar22;
      fVar19 = *(float *)(param_1 + 0x3c) * fVar59;
      fVar55 = *(float *)(param_1 + 0x4c);
      fVar56 = fVar38 * *(float *)(param_1 + 0x40);
      fVar57 = fVar52 * *(float *)(param_1 + 0x44);
      fVar58 = fVar22 * *(float *)(param_1 + 0x48);
      fVar52 = fVar20 * fVar51 * _DAT_146acaba0 + fVar28 * fVar30 + fVar53 * fVar39 * _DAT_146acab90
               + fVar54 * fVar37 * _DAT_146acab80;
      fVar22 = fVar39 * fVar51 * fRam0000000146acaba4 + fVar28 * fVar37 +
               fVar53 * fVar20 * fRam0000000146acab94 + fVar54 * fVar30 * fRam0000000146acab84;
      fVar14 = fVar37 * fVar51 * fRam0000000146acaba8 + fVar28 * fVar39 +
               fVar53 * fVar30 * fRam0000000146acab98 + fVar54 * fVar20 * fRam0000000146acab88;
      fVar20 = fVar30 * fVar51 * fRam0000000146acabac + fVar28 * fVar20 +
               fVar53 * fVar37 * fRam0000000146acab9c + fVar54 * fVar39 * fRam0000000146acab8c;
      fVar30 = fVar21 * fVar53 - fVar15 * fVar54;
      fVar37 = fVar23 * fVar54 - fVar21 * fVar51;
      fVar38 = fVar15 * fVar51 - fVar23 * fVar53;
      fVar39 = fVar19 * fVar28 - fVar19 * fVar28;
      fVar30 = fVar30 + fVar30;
      fVar37 = fVar37 + fVar37;
      fVar38 = fVar38 + fVar38;
      fVar39 = fVar39 + fVar39;
      local_c8 = (fVar38 * fVar53 - fVar37 * fVar54) + fVar30 * fVar28 + fVar23 + param_4[4];
      fStack_c4 = (fVar30 * fVar54 - fVar38 * fVar51) + fVar37 * fVar28 + fVar15 + param_4[5];
      fStack_c0 = (fVar37 * fVar51 - fVar30 * fVar53) + fVar38 * fVar28 + fVar21 + param_4[6];
      fVar51 = (fVar39 * fVar28 - fVar39 * fVar28) + fVar39 * fVar28 + fVar19 + param_4[7];
      uVar8 = 0;
    }
    else {
      fVar15 = *param_4;
      fVar21 = param_4[1];
      fVar19 = param_4[2];
      fVar14 = param_4[3];
      fVar5 = param_4[4];
      fVar25 = param_4[5];
      fVar26 = param_4[6];
      fVar32 = fVar21 + fVar21;
      fVar34 = fVar19 + fVar19;
      fVar56 = fVar38 * fVar39;
      fVar57 = fVar52 * fVar20;
      fVar58 = fVar22 * fVar23;
      fVar35 = (fVar15 + fVar15) * fVar15;
      fVar33 = (fVar15 + fVar15) * fVar14;
      fVar48 = (fVar34 * fVar14 + fVar32 * fVar15) * fVar38;
      fVar49 = (fVar33 + fVar34 * fVar21) * fVar52;
      fVar50 = (fVar32 * fVar14 + fVar34 * fVar15) * fVar22;
      fVar40 = fVar52 * (fVar32 * fVar15 - fVar34 * fVar14);
      fVar42 = fVar22 * (fVar34 * fVar21 - fVar33);
      fVar43 = fVar38 * (fVar34 * fVar15 - fVar32 * fVar14);
      fVar14 = (float)((uint)((_DAT_146acab50 - (fVar34 * fVar19 + fVar32 * fVar21)) * fVar38) &
                      _DAT_146acab40);
      fVar19 = (float)((uint)((fRam0000000146acab54 - (fVar34 * fVar19 + fVar35)) * fVar52) &
                      uRam0000000146acab44);
      fVar21 = (float)((uint)((fRam0000000146acab58 - (fVar32 * fVar21 + fVar35)) * fVar22) &
                      uRam0000000146acab48);
      fVar32 = (float)((uint)((fRam0000000146acab5c - (fVar35 + fVar35)) * fVar59) &
                      uRam0000000146acab4c);
      fVar38 = *(float *)(param_1 + 0x20);
      fVar52 = *(float *)(param_1 + 0x24);
      fVar22 = *(float *)(param_1 + 0x28);
      fVar15 = *(float *)(param_1 + 0x2c);
      fVar33 = fVar52 + fVar52;
      fVar35 = fVar22 + fVar22;
      fVar36 = (fVar38 + fVar38) * fVar38;
      fVar34 = (fVar38 + fVar38) * fVar15;
      fVar45 = (fVar35 * fVar15 + fVar33 * fVar38) * fVar39;
      fVar46 = (fVar34 + fVar35 * fVar52) * fVar20;
      fVar47 = (fVar33 * fVar15 + fVar35 * fVar38) * fVar23;
      fVar41 = fVar20 * (fVar33 * fVar38 - fVar35 * fVar15);
      fVar34 = fVar23 * (fVar35 * fVar52 - fVar34);
      fVar44 = fVar39 * (fVar35 * fVar38 - fVar33 * fVar15);
      fVar15 = (float)((uint)((_DAT_146acab50 - (fVar35 * fVar22 + fVar33 * fVar52)) * fVar39) &
                      _DAT_146acab40);
      fVar20 = (float)((uint)((fRam0000000146acab54 - (fVar35 * fVar22 + fVar36)) * fVar20) &
                      uRam0000000146acab44);
      fVar22 = (float)((uint)((fRam0000000146acab58 - (fVar33 * fVar52 + fVar36)) * fVar23) &
                      uRam0000000146acab48);
      fVar23 = (float)((uint)((fRam0000000146acab5c - (fVar36 + fVar36)) * fVar55) &
                      uRam0000000146acab4c);
      fVar38 = *(float *)(param_1 + 0x30);
      fVar39 = *(float *)(param_1 + 0x34);
      fVar52 = *(float *)(param_1 + 0x38);
      local_f8 = fVar45 * fVar40 + fVar15 * fVar14 + fVar44 * fVar50 + fVar23 * fVar5;
      fStack_f4 = fVar45 * fVar19 + fVar15 * fVar48 + fVar44 * fVar42 + fVar23 * fVar25;
      fStack_f0 = fVar45 * fVar49 + fVar15 * fVar43 + fVar44 * fVar21 + fVar23 * fVar26;
      fStack_ec = fVar45 * fVar32 + fVar15 * fVar32 + fVar44 * fVar32 +
                  fVar23 * fRam0000000146acab5c;
      local_e8 = fVar20 * fVar40 + fVar41 * fVar14 + fVar46 * fVar50 + fVar23 * fVar5;
      fStack_e4 = fVar20 * fVar19 + fVar41 * fVar48 + fVar46 * fVar42 + fVar23 * fVar25;
      fStack_e0 = fVar20 * fVar49 + fVar41 * fVar43 + fVar46 * fVar21 + fVar23 * fVar26;
      fStack_dc = fVar20 * fVar32 + fVar41 * fVar32 + fVar46 * fVar32 +
                  fVar23 * fRam0000000146acab5c;
      local_d8 = fVar34 * fVar40 + fVar47 * fVar14 + fVar22 * fVar50 + fVar23 * fVar5;
      fStack_d4 = fVar34 * fVar19 + fVar47 * fVar48 + fVar22 * fVar42 + fVar23 * fVar25;
      fStack_d0 = fVar34 * fVar49 + fVar47 * fVar43 + fVar22 * fVar21 + fVar23 * fVar26;
      fStack_cc = fVar34 * fVar32 + fVar47 * fVar32 + fVar22 * fVar32 +
                  fVar23 * fRam0000000146acab5c;
      local_c8 = fVar39 * fVar40 + fVar38 * fVar14 + fVar52 * fVar50 + fRam0000000146acab5c * fVar5;
      fStack_c4 = fVar39 * fVar19 + fVar38 * fVar48 + fVar52 * fVar42 +
                  fRam0000000146acab5c * fVar25;
      fStack_c0 = fVar39 * fVar49 + fVar38 * fVar43 + fVar52 * fVar21 +
                  fRam0000000146acab5c * fVar26;
      fStack_bc = fVar39 * fVar32 + fVar38 * fVar32 + fVar52 * fVar32 +
                  fRam0000000146acab5c * fRam0000000146acab5c;
      FMatrix::RemoveScaling(&local_f8);
      fVar51 = (float)(-(uint)(fVar28 <= fVar56) & (_DAT_146acabb0 ^ (uint)fVar51) ^ _DAT_146acabb0)
      ;
      fVar53 = (float)(-(uint)(fVar30 <= fVar57) & (uRam0000000146acabb4 ^ (uint)fVar53) ^
                      uRam0000000146acabb4);
      fVar54 = (float)(-(uint)(fVar37 <= fVar58) & (uRam0000000146acabb8 ^ (uint)fVar54) ^
                      uRam0000000146acabb8);
      local_f8 = local_f8 * fVar51;
      fStack_f4 = fStack_f4 * fVar51;
      fStack_f0 = fStack_f0 * fVar51;
      fStack_e0 = fStack_e0 * fVar53;
      fStack_e4 = fStack_e4 * fVar53;
      local_e8 = local_e8 * fVar53;
      fStack_d0 = fStack_d0 * fVar54;
      local_d8 = local_d8 * fVar54;
      fStack_d4 = fStack_d4 * fVar54;
      uVar8 = FQuat::FQuat(&local_118,&local_f8);
      auVar16._0_4_ = local_118 * local_118 + fStack_110 * fStack_110;
      auVar16._4_4_ = fStack_114 * fStack_114 + fStack_10c * fStack_10c;
      auVar16._8_4_ = fStack_110 * fStack_110 + local_118 * local_118;
      auVar16._12_4_ = fStack_10c * fStack_10c + fStack_114 * fStack_114;
      fVar37 = auVar16._4_4_ + auVar16._0_4_;
      fVar38 = auVar16._8_4_ + auVar16._4_4_;
      fVar39 = auVar16._12_4_ + auVar16._8_4_;
      fVar20 = auVar16._0_4_ + auVar16._12_4_;
      auVar3._4_4_ = fVar38;
      auVar3._0_4_ = fVar37;
      auVar3._8_4_ = fVar39;
      auVar3._12_4_ = fVar20;
      auVar10 = rsqrtps(auVar16,auVar3);
      fVar53 = auVar10._0_4_;
      fVar54 = auVar10._4_4_;
      fVar28 = auVar10._8_4_;
      fVar30 = auVar10._12_4_;
      fVar53 = (fVar24 - fVar53 * fVar53 * fVar37 * fVar24) * fVar53 + fVar53;
      fVar54 = (fVar27 - fVar54 * fVar54 * fVar38 * fVar27) * fVar54 + fVar54;
      fVar28 = (fVar29 - fVar28 * fVar28 * fVar39 * fVar29) * fVar28 + fVar28;
      fVar30 = (fVar31 - fVar30 * fVar30 * fVar20 * fVar31) * fVar30 + fVar30;
      fVar51 = 0.0;
      fVar52 = (float)(((uint)(((fVar24 - fVar53 * fVar53 * fVar37 * fVar24) * fVar53 + fVar53) *
                              local_118) ^ _DAT_146acab60) & -(uint)(1e-08 <= fVar37) ^
                      _DAT_146acab60);
      fVar22 = (float)(((uint)(((fVar27 - fVar54 * fVar54 * fVar38 * fVar27) * fVar54 + fVar54) *
                              fStack_114) ^ uRam0000000146acab64) & -(uint)(1e-08 <= fVar38) ^
                      uRam0000000146acab64);
      fVar14 = (float)(((uint)(((fVar29 - fVar28 * fVar28 * fVar39 * fVar29) * fVar28 + fVar28) *
                              fStack_110) ^ uRam0000000146acab68) & -(uint)(1e-08 <= fVar39) ^
                      uRam0000000146acab68);
      fVar20 = (float)(((uint)(((fVar31 - fVar30 * fVar30 * fVar20 * fVar31) * fVar30 + fVar30) *
                              fStack_10c) ^ uRam0000000146acab6c) & -(uint)(1e-08 <= fVar20) ^
                      uRam0000000146acab6c);
    }
    fVar19 = fRam0000000146acab58;
    fVar21 = fRam0000000146acab54;
    fVar15 = _DAT_146acab50;
    fVar59 = fVar59 * fVar55;
    auVar10 = *(undefined1 (*) [16])(param_2 + 8);
    fVar53 = auVar10._0_4_;
    fVar54 = auVar10._4_4_;
    fVar28 = auVar10._8_4_;
    fVar30 = auVar10._12_4_;
    auVar12._4_4_ = fVar57;
    auVar12._0_4_ = fVar56;
    auVar12._8_4_ = fVar58;
    auVar12._12_4_ = fVar59;
    fVar37 = *param_2;
    fVar38 = param_2[1];
    fVar39 = param_2[2];
    fVar23 = param_2[3];
    auVar10 = minps(auVar12,auVar10);
    auVar13._4_4_ = -(uint)(auVar10._4_4_ < fRam0000000146acabc4);
    auVar13._0_4_ = -(uint)(auVar10._0_4_ < _DAT_146acabc0);
    auVar13._8_4_ = -(uint)(auVar10._8_4_ < fRam0000000146acabc8);
    auVar13._12_4_ = -(uint)(auVar10._12_4_ < fRam0000000146acabcc);
    iVar9 = movmskps(uVar8,auVar13);
    if (iVar9 == 0) {
      local_c8 = fVar53 * local_c8;
      fStack_c4 = fVar54 * fStack_c4;
      fStack_c0 = fVar28 * fStack_c0;
      fVar51 = fVar30 * fVar51;
      fVar53 = fVar53 * fVar56;
      fVar54 = fVar54 * fVar57;
      fVar28 = fVar28 * fVar58;
      fVar30 = fVar30 * fVar59;
      fVar59 = fVar37 * fVar20 * _DAT_146acaba0 + fVar52 * fVar23 + fVar38 * fVar14 * _DAT_146acab90
               + fVar39 * fVar22 * _DAT_146acab80;
      fVar55 = fVar37 * fVar14 * fRam0000000146acaba4 + fVar22 * fVar23 +
               fVar38 * fVar20 * fRam0000000146acab94 + fVar39 * fVar52 * fRam0000000146acab84;
      fVar15 = fVar37 * fVar22 * fRam0000000146acaba8 + fVar14 * fVar23 +
               fVar38 * fVar52 * fRam0000000146acab98 + fVar39 * fVar20 * fRam0000000146acab88;
      fVar52 = fVar37 * fVar52 * fRam0000000146acabac + fVar20 * fVar23 +
               fVar38 * fVar22 * fRam0000000146acab9c + fVar39 * fVar14 * fRam0000000146acab8c;
      fVar24 = fStack_c0 * fVar38 - fStack_c4 * fVar39;
      fVar27 = local_c8 * fVar39 - fStack_c0 * fVar37;
      fVar29 = fStack_c4 * fVar37 - local_c8 * fVar38;
      fVar31 = fVar51 * fVar23 - fVar51 * fVar23;
      fVar24 = fVar24 + fVar24;
      fVar27 = fVar27 + fVar27;
      fVar29 = fVar29 + fVar29;
      fVar31 = fVar31 + fVar31;
      local_c8 = (fVar29 * fVar38 - fVar27 * fVar39) + fVar24 * fVar23 + local_c8 + param_2[4];
      fStack_c4 = (fVar24 * fVar39 - fVar29 * fVar37) + fVar27 * fVar23 + fStack_c4 + param_2[5];
      fStack_c0 = (fVar27 * fVar37 - fVar24 * fVar38) + fVar29 * fVar23 + fStack_c0 + param_2[6];
      fVar51 = (fVar31 * fVar23 - fVar31 * fVar23) + fVar31 * fVar23 + fVar51 + param_2[7];
    }
    else {
      fVar51 = param_2[4];
      fVar55 = param_2[5];
      fVar5 = param_2[6];
      fVar25 = fVar38 + fVar38;
      fVar32 = fVar39 + fVar39;
      local_108 = fVar56 * fVar53;
      fStack_104 = fVar57 * fVar54;
      fStack_100 = fVar58 * fVar28;
      fStack_fc = fVar59 * fVar30;
      fVar33 = (fVar37 + fVar37) * fVar37;
      fVar26 = (fVar37 + fVar37) * fVar23;
      fVar43 = (fVar32 * fVar23 + fVar25 * fVar37) * fVar53;
      fVar34 = (fVar26 + fVar32 * fVar38) * fVar54;
      fVar44 = (fVar25 * fVar23 + fVar32 * fVar37) * fVar28;
      fVar35 = fVar54 * (fVar25 * fVar37 - fVar32 * fVar23);
      fVar36 = fVar28 * (fVar32 * fVar38 - fVar26);
      fVar40 = fVar53 * (fVar32 * fVar37 - fVar25 * fVar23);
      fVar37 = (float)((uint)((_DAT_146acab50 - (fVar32 * fVar39 + fVar25 * fVar38)) * fVar53) &
                      _DAT_146acab40);
      fVar39 = (float)((uint)((fRam0000000146acab54 - (fVar32 * fVar39 + fVar33)) * fVar54) &
                      uRam0000000146acab44);
      fVar38 = (float)((uint)((fRam0000000146acab58 - (fVar25 * fVar38 + fVar33)) * fVar28) &
                      uRam0000000146acab48);
      fVar23 = (float)((uint)((fRam0000000146acab5c - (fVar33 + fVar33)) * fVar30) &
                      uRam0000000146acab4c);
      fVar54 = fVar22 + fVar22;
      fVar28 = fVar14 + fVar14;
      fVar25 = fVar52 * (fVar52 + fVar52);
      fVar53 = fVar20 * (fVar52 + fVar52);
      fVar33 = (fVar20 * fVar28 + fVar52 * fVar54) * fVar56;
      fVar41 = (fVar53 + fVar22 * fVar28) * fVar57;
      fVar42 = (fVar20 * fVar54 + fVar52 * fVar28) * fVar58;
      fVar26 = fVar57 * (fVar52 * fVar54 - fVar20 * fVar28);
      fVar32 = fVar58 * (fVar22 * fVar28 - fVar53);
      fVar20 = fVar56 * (fVar52 * fVar28 - fVar20 * fVar54);
      fVar53 = (float)((uint)((_DAT_146acab50 - (fVar14 * fVar28 + fVar22 * fVar54)) * fVar56) &
                      _DAT_146acab40);
      fVar28 = (float)((uint)((fRam0000000146acab54 - (fVar14 * fVar28 + fVar25)) * fVar57) &
                      uRam0000000146acab44);
      fVar30 = (float)((uint)((fRam0000000146acab58 - (fVar22 * fVar54 + fVar25)) * fVar58) &
                      uRam0000000146acab48);
      fVar52 = (float)((uint)((fRam0000000146acab5c - (fVar25 + fVar25)) * fVar59) &
                      uRam0000000146acab4c);
      local_f8 = fVar33 * fVar35 + fVar53 * fVar37 + fVar20 * fVar44 + fVar52 * fVar51;
      fStack_f4 = fVar33 * fVar39 + fVar53 * fVar43 + fVar20 * fVar36 + fVar52 * fVar55;
      fStack_f0 = fVar33 * fVar34 + fVar53 * fVar40 + fVar20 * fVar38 + fVar52 * fVar5;
      fStack_ec = fVar33 * fVar23 + fVar53 * fVar23 + fVar20 * fVar23 +
                  fVar52 * fRam0000000146acab5c;
      local_e8 = fVar26 * fVar37 + fVar28 * fVar35 + fVar41 * fVar44 + fVar52 * fVar51;
      fStack_e4 = fVar26 * fVar43 + fVar28 * fVar39 + fVar41 * fVar36 + fVar52 * fVar55;
      fStack_e0 = fVar26 * fVar40 + fVar28 * fVar34 + fVar41 * fVar38 + fVar52 * fVar5;
      fStack_dc = fVar26 * fVar23 + fVar28 * fVar23 + fVar41 * fVar23 +
                  fVar52 * fRam0000000146acab5c;
      fVar53 = local_c8 * fVar43;
      fVar54 = local_c8 * fVar40;
      fVar28 = local_c8 * fVar23;
      local_d8 = fVar32 * fVar35 + fVar42 * fVar37 + fVar30 * fVar44 + fVar52 * fVar51;
      fStack_d4 = fVar32 * fVar39 + fVar42 * fVar43 + fVar30 * fVar36 + fVar52 * fVar55;
      fStack_d0 = fVar32 * fVar34 + fVar42 * fVar40 + fVar30 * fVar38 + fVar52 * fVar5;
      fStack_cc = fVar32 * fVar23 + fVar42 * fVar23 + fVar30 * fVar23 +
                  fVar52 * fRam0000000146acab5c;
      fVar34 = fStack_c4 * fVar34;
      fVar30 = fStack_c4 * fVar23;
      fVar23 = fStack_c0 * fVar23;
      local_c8 = fStack_c4 * fVar35 + local_c8 * fVar37 + fStack_c0 * fVar44 +
                 fRam0000000146acab5c * fVar51;
      fStack_c4 = fStack_c4 * fVar39 + fVar53 + fStack_c0 * fVar36 + fRam0000000146acab5c * fVar55;
      fStack_c0 = fVar34 + fVar54 + fStack_c0 * fVar38 + fRam0000000146acab5c * fVar5;
      fStack_bc = fVar30 + fVar28 + fVar23 + fRam0000000146acab5c * fRam0000000146acab5c;
      local_118 = _DAT_146acabc0;
      fStack_114 = fRam0000000146acabc4;
      fStack_110 = fRam0000000146acabc8;
      fStack_10c = fRam0000000146acabcc;
      FMatrix::RemoveScaling(&local_f8);
      fVar30 = fStack_fc;
      fVar28 = fStack_100;
      fVar54 = fStack_104;
      fVar53 = local_108;
      fVar51 = (float)(-(uint)(local_118 <= local_108) & (_DAT_146acabb0 ^ (uint)fVar15) ^
                      _DAT_146acabb0);
      fVar37 = (float)(-(uint)(fStack_114 <= fStack_104) & (uRam0000000146acabb4 ^ (uint)fVar21) ^
                      uRam0000000146acabb4);
      fVar38 = (float)(-(uint)(fStack_110 <= fStack_100) & (uRam0000000146acabb8 ^ (uint)fVar19) ^
                      uRam0000000146acabb8);
      local_f8 = local_f8 * fVar51;
      fStack_f0 = fStack_f0 * fVar51;
      fStack_f4 = fStack_f4 * fVar51;
      fStack_e0 = fStack_e0 * fVar37;
      fStack_e4 = fStack_e4 * fVar37;
      local_e8 = local_e8 * fVar37;
      fStack_d0 = fStack_d0 * fVar38;
      local_d8 = local_d8 * fVar38;
      fStack_d4 = fStack_d4 * fVar38;
      FQuat::FQuat(&local_108,&local_f8);
      auVar17._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar17._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar17._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar17._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar20 = auVar17._4_4_ + auVar17._0_4_;
      fVar22 = auVar17._8_4_ + auVar17._4_4_;
      fVar23 = auVar17._12_4_ + auVar17._8_4_;
      fVar21 = auVar17._0_4_ + auVar17._12_4_;
      auVar4._4_4_ = fVar22;
      auVar4._0_4_ = fVar20;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar21;
      auVar10 = rsqrtps(auVar17,auVar4);
      fVar37 = auVar10._0_4_;
      fVar38 = auVar10._4_4_;
      fVar39 = auVar10._8_4_;
      fVar52 = auVar10._12_4_;
      fVar37 = (fVar24 - fVar37 * fVar37 * fVar20 * fVar24) * fVar37 + fVar37;
      fVar38 = (fVar27 - fVar38 * fVar38 * fVar22 * fVar27) * fVar38 + fVar38;
      fVar39 = (fVar29 - fVar39 * fVar39 * fVar23 * fVar29) * fVar39 + fVar39;
      fVar52 = (fVar31 - fVar52 * fVar52 * fVar21 * fVar31) * fVar52 + fVar52;
      fVar51 = 0.0;
      fVar59 = (float)(((uint)(((fVar24 - fVar37 * fVar37 * fVar20 * fVar24) * fVar37 + fVar37) *
                              local_108) ^ _DAT_146acab60) & -(uint)(1e-08 <= fVar20) ^
                      _DAT_146acab60);
      fVar55 = (float)(((uint)(((fVar27 - fVar38 * fVar38 * fVar22 * fVar27) * fVar38 + fVar38) *
                              fStack_104) ^ uRam0000000146acab64) & -(uint)(1e-08 <= fVar22) ^
                      uRam0000000146acab64);
      fVar15 = (float)(((uint)(((fVar29 - fVar39 * fVar39 * fVar23 * fVar29) * fVar39 + fVar39) *
                              fStack_100) ^ uRam0000000146acab68) & -(uint)(1e-08 <= fVar23) ^
                      uRam0000000146acab68);
      fVar52 = (float)(((uint)(((fVar31 - fVar52 * fVar52 * fVar21 * fVar31) * fVar52 + fVar52) *
                              fStack_fc) ^ uRam0000000146acab6c) & -(uint)(1e-08 <= fVar21) ^
                      uRam0000000146acab6c);
    }
    *param_3 = fVar59;
    param_3[1] = fVar55;
    param_3[2] = fVar15;
    param_3[3] = fVar52;
    param_3[4] = local_c8;
    param_3[5] = fStack_c4;
    param_3[6] = fStack_c0;
    param_3[7] = fVar51;
    param_3[8] = fVar53;
    param_3[9] = fVar54;
    param_3[10] = fVar28;
    param_3[0xb] = fVar30;
  }
  return;
}



// FUNCTION 141f794d0 FUN_141f794d0 body=776 status=ok
// SIG undefined FUN_141f794d0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141f794d0(undefined8 *param_1,float *param_2,float param_3,float *param_4)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
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
  float fVar28;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar7 = *(int *)(param_1 + 1);
  uVar14 = (ulonglong)iVar7;
  uVar12 = iVar7 - 1;
  if (iVar7 == 0) {
    *param_2 = *param_4;
    param_2[1] = param_4[1];
    param_2[2] = param_4[2];
    param_2[3] = param_4[3];
    return param_2;
  }
  pfVar10 = (float *)*param_1;
  uVar13 = iVar7 - 1;
  if (*pfVar10 <= param_3) {
    lVar8 = uVar14 - 1;
    if (param_3 < pfVar10[lVar8 * 0x14]) {
      uVar13 = 0;
      while (1 < iVar7) {
        uVar6 = (int)((int)uVar14 + uVar13) / 2;
        uVar14 = uVar14 & 0xffffffff;
        if (param_3 < pfVar10[(longlong)(int)uVar6 * 0x14]) {
          uVar14 = (ulonglong)uVar6;
          uVar6 = uVar13;
        }
        uVar13 = uVar6;
        iVar7 = (int)uVar14 - uVar6;
      }
    }
    if (uVar13 != 0xffffffff) {
      if (uVar13 == uVar12) {
        pfVar11 = pfVar10 + lVar8 * 0x14;
        if (*(char *)(param_1 + 2) == '\0') {
          *param_2 = pfVar11[4];
          param_2[1] = pfVar11[5];
          param_2[2] = pfVar11[6];
          fVar17 = pfVar11[7];
          goto LAB_141f797b7;
        }
        if (*(float *)((longlong)param_1 + 0x14) + *pfVar11 <= param_3) goto LAB_141f7979f;
      }
      if ((*(char *)(param_1 + 2) == '\0') || (uVar13 != uVar12)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      lVar8 = (longlong)(int)uVar13;
      iVar7 = 0;
      if (!bVar1) {
        iVar7 = uVar13 + 1;
      }
      lVar9 = (longlong)iVar7;
      if (bVar1) {
        local_1c = *(float *)((longlong)param_1 + 0x14);
      }
      else {
        local_1c = pfVar10[lVar9 * 0x14] - pfVar10[lVar8 * 0x14];
      }
      if ((0.0 < local_1c) && (*(char *)(pfVar10 + lVar8 * 0x14 + 0x10) != '\x02')) {
        fVar17 = (param_3 - pfVar10[lVar8 * 0x14]) / local_1c;
        if (*(char *)(pfVar10 + lVar8 * 0x14 + 0x10) == '\0') {
          pfVar10 = (float *)FQuat::Slerp_NotNormalized
                                       (&local_28,pfVar10 + lVar8 * 0x14 + 4,
                                        pfVar10 + lVar9 * 0x14 + 4,fVar17);
          fVar5 = fRam0000000146acab7c;
          fVar4 = fRam0000000146acab78;
          fVar3 = fRam0000000146acab74;
          fVar2 = _DAT_146acab70;
          *param_2 = *pfVar10;
          param_2[1] = pfVar10[1];
          param_2[2] = pfVar10[2];
          param_2[3] = pfVar10[3];
          fVar17 = *param_2;
          fVar26 = param_2[1];
          fVar27 = param_2[2];
          fVar28 = param_2[3];
          auVar15._0_4_ = fVar17 * fVar17 + fVar27 * fVar27;
          auVar15._4_4_ = fVar26 * fVar26 + fVar28 * fVar28;
          auVar15._8_4_ = fVar27 * fVar27 + fVar17 * fVar17;
          auVar15._12_4_ = fVar28 * fVar28 + fVar26 * fVar26;
          fVar22 = auVar15._4_4_ + auVar15._0_4_;
          fVar23 = auVar15._8_4_ + auVar15._4_4_;
          fVar24 = auVar15._12_4_ + auVar15._8_4_;
          fVar25 = auVar15._0_4_ + auVar15._12_4_;
          auVar16._4_4_ = fVar23;
          auVar16._0_4_ = fVar22;
          auVar16._8_4_ = fVar24;
          auVar16._12_4_ = fVar25;
          auVar16 = rsqrtps(auVar15,auVar16);
          fVar18 = auVar16._0_4_;
          fVar19 = auVar16._4_4_;
          fVar20 = auVar16._8_4_;
          fVar21 = auVar16._12_4_;
          fVar18 = (fVar2 - fVar18 * fVar18 * fVar22 * fVar2) * fVar18 + fVar18;
          fVar19 = (fVar3 - fVar19 * fVar19 * fVar23 * fVar3) * fVar19 + fVar19;
          fVar20 = (fVar4 - fVar20 * fVar20 * fVar24 * fVar4) * fVar20 + fVar20;
          fVar21 = (fVar5 - fVar21 * fVar21 * fVar25 * fVar5) * fVar21 + fVar21;
          fVar26 = (float)(((uint)(((fVar3 - fVar19 * fVar19 * fVar23 * fVar3) * fVar19 + fVar19) *
                                  fVar26) ^ uRam0000000146acab64) & -(uint)(1e-08 <= fVar23) ^
                          uRam0000000146acab64);
          fVar27 = (float)(((uint)(((fVar4 - fVar20 * fVar20 * fVar24 * fVar4) * fVar20 + fVar20) *
                                  fVar27) ^ uRam0000000146acab68) & -(uint)(1e-08 <= fVar24) ^
                          uRam0000000146acab68);
          fVar28 = (float)(((uint)(((fVar5 - fVar21 * fVar21 * fVar25 * fVar5) * fVar21 + fVar21) *
                                  fVar28) ^ uRam0000000146acab6c) & -(uint)(1e-08 <= fVar25) ^
                          uRam0000000146acab6c);
          *param_2 = (float)(((uint)(((fVar2 - fVar18 * fVar18 * fVar22 * fVar2) * fVar18 + fVar18)
                                    * fVar17) ^ _DAT_146acab60) & -(uint)(1e-08 <= fVar22) ^
                            _DAT_146acab60);
          param_2[1] = fVar26;
          param_2[2] = fVar27;
          param_2[3] = fVar28;
          return param_2;
        }
        pfVar11 = pfVar10 + lVar9 * 0x14 + 8;
        local_24 = local_1c * pfVar10[lVar8 * 0x14 + 0xd];
        local_38 = *pfVar11 * local_1c;
        fStack_34 = pfVar11[1] * local_1c;
        fStack_30 = pfVar11[2] * local_1c;
        fStack_2c = pfVar11[3] * local_1c;
        local_28 = local_1c * pfVar10[lVar8 * 0x14 + 0xc];
        local_20 = local_1c * pfVar10[lVar8 * 0x14 + 0xe];
        local_1c = local_1c * pfVar10[lVar8 * 0x14 + 0xf];
        FUN_141637320(param_2,pfVar10 + lVar8 * 0x14 + 4,&local_28,pfVar10 + lVar9 * 0x14 + 4,
                      &local_38,fVar17);
        return param_2;
      }
      *param_2 = pfVar10[lVar8 * 0x14 + 4];
      param_2[1] = pfVar10[lVar8 * 0x14 + 5];
      param_2[2] = pfVar10[lVar8 * 0x14 + 6];
      fVar17 = pfVar10[lVar8 * 0x14 + 7];
      goto LAB_141f797b7;
    }
  }
LAB_141f7979f:
  *param_2 = pfVar10[4];
  param_2[1] = pfVar10[5];
  param_2[2] = pfVar10[6];
  fVar17 = pfVar10[7];
LAB_141f797b7:
  param_2[3] = fVar17;
  return param_2;
}



// FUNCTION 141f797e0 FUN_141f797e0 body=1071 status=ok
// SIG undefined FUN_141f797e0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_141f797e0(longlong *param_1,uint *param_2)

{
  float *pfVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  ulonglong in_RAX;
  float *pfVar7;
  float *pfVar8;
  longlong lVar9;
  float extraout_XMM0_Da;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  
  if ((0 < (int)param_1[1]) &&
     (in_RAX = FMultiTransformBlendHelper::GetTotalWeight(param_1,param_1 + 8),
     1e-05 < extraout_XMM0_Da)) {
    fVar16 = 1.0;
    if (1.0 < extraout_XMM0_Da) {
      fVar16 = 1.0 / extraout_XMM0_Da;
    }
    pfVar7 = (float *)*param_1;
    pfVar8 = (float *)param_1[8];
    fVar10 = fVar16 * *pfVar8;
    fStack_ec = pfVar7[3] * fVar10;
    local_f8 = *pfVar7 * fVar10;
    fStack_f4 = pfVar7[1] * fVar10;
    fStack_f0 = pfVar7[2] * fVar10;
    fVar12 = pfVar7[9] * fVar10;
    fVar26 = pfVar7[4] * fVar10;
    fVar28 = pfVar7[5] * fVar10;
    fVar25 = pfVar7[6] * fVar10;
    fVar27 = pfVar7[8] * fVar10;
    fVar10 = pfVar7[10] * fVar10;
    if (1 < (longlong)(int)param_1[1]) {
      pfVar7 = pfVar7 + 0x14;
      lVar9 = (longlong)(int)param_1[1] + -1;
      do {
        pfVar8 = pfVar8 + 1;
        fVar17 = fVar16 * *pfVar8;
        pfVar1 = pfVar7 + -8;
        pfVar4 = pfVar7 + -7;
        pfVar5 = pfVar7 + -6;
        pfVar6 = pfVar7 + -5;
        fVar26 = (pfVar7[-4] - fVar26) * fVar17 + fVar26;
        fVar28 = (pfVar7[-3] - fVar28) * fVar17 + fVar28;
        fVar25 = (pfVar7[-2] - fVar25) * fVar17 + fVar25;
        fVar27 = *pfVar7 * fVar17 + fVar27;
        fVar12 = pfVar7[1] * fVar17 + fVar12;
        fVar10 = pfVar7[2] * fVar17 + fVar10;
        if (*pfVar4 * fStack_f4 + *pfVar1 * local_f8 + *pfVar5 * fStack_f0 + *pfVar6 * fStack_ec <
            0.0) {
          fVar11 = -1.0;
          fVar15 = -fVar17;
        }
        else {
          fVar11 = 1.0;
          fVar15 = fVar17;
        }
        fVar11 = fVar11 - fVar15;
        pfVar7 = pfVar7 + 0xc;
        fStack_f4 = fStack_f4 * fVar11 + *pfVar4 * fVar17;
        fStack_f0 = fStack_f0 * fVar11 + *pfVar5 * fVar17;
        fStack_ec = fStack_ec * fVar11 + *pfVar6 * fVar17;
        local_f8 = local_f8 * fVar11 + *pfVar1 * fVar17;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    auVar13._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
    auVar13._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
    auVar13._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
    auVar13._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
    fVar18 = auVar13._4_4_ + auVar13._0_4_;
    fVar19 = auVar13._8_4_ + auVar13._4_4_;
    fVar20 = auVar13._12_4_ + auVar13._8_4_;
    fVar21 = auVar13._0_4_ + auVar13._12_4_;
    auVar2._4_4_ = fVar19;
    auVar2._0_4_ = fVar18;
    auVar2._8_4_ = fVar20;
    auVar2._12_4_ = fVar21;
    auVar14 = rsqrtps(auVar13,auVar2);
    fVar16 = auVar14._0_4_;
    fVar17 = auVar14._4_4_;
    fVar15 = auVar14._8_4_;
    fVar11 = auVar14._12_4_;
    fVar16 = (_DAT_146acab70 - fVar16 * fVar16 * fVar18 * _DAT_146acab70) * fVar16 + fVar16;
    fVar17 = (fRam0000000146acab74 - fVar17 * fVar17 * fVar19 * fRam0000000146acab74) * fVar17 +
             fVar17;
    fVar15 = (fRam0000000146acab78 - fVar15 * fVar15 * fVar20 * fRam0000000146acab78) * fVar15 +
             fVar15;
    fVar11 = (fRam0000000146acab7c - fVar11 * fVar11 * fVar21 * fRam0000000146acab7c) * fVar11 +
             fVar11;
    uVar22 = ((uint)(((fRam0000000146acab74 - fVar17 * fVar17 * fVar19 * fRam0000000146acab74) *
                      fVar17 + fVar17) * fStack_f4) ^ uRam0000000146acab64) &
             -(uint)(1e-08 <= fVar19) ^ uRam0000000146acab64;
    uVar23 = ((uint)(((fRam0000000146acab78 - fVar15 * fVar15 * fVar20 * fRam0000000146acab78) *
                      fVar15 + fVar15) * fStack_f0) ^ uRam0000000146acab68) &
             -(uint)(1e-08 <= fVar20) ^ uRam0000000146acab68;
    uVar24 = ((uint)(((fRam0000000146acab7c - fVar11 * fVar11 * fVar21 * fRam0000000146acab7c) *
                      fVar11 + fVar11) * fStack_ec) ^ uRam0000000146acab6c) &
             -(uint)(1e-08 <= fVar21) ^ uRam0000000146acab6c;
    *param_2 = ((uint)(((_DAT_146acab70 - fVar16 * fVar16 * fVar18 * _DAT_146acab70) * fVar16 +
                       fVar16) * local_f8) ^ _DAT_146acab60) & -(uint)(1e-08 <= fVar18) ^
               _DAT_146acab60;
    param_2[1] = uVar22;
    param_2[2] = uVar23;
    param_2[3] = uVar24;
    auVar3._4_4_ = fVar28;
    auVar3._0_4_ = fVar26;
    auVar3._8_4_ = fVar25;
    auVar3._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar3;
    auVar14._4_4_ = fVar12;
    auVar14._0_4_ = fVar27;
    auVar14._8_4_ = fVar10;
    auVar14._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 8) = auVar14;
    return CONCAT71((int7)((ulonglong)pfVar7 >> 8),1);
  }
  return in_RAX & 0xffffffffffffff00;
}



// FUNCTION 141f79c10 GetBlendedRotation body=703 status=ok
// SIG undefined GetBlendedRotation(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FMultiTransformBlendHelper::GetBlendedRotation(longlong param_1,float *param_2)

{
  ulonglong in_RAX;
  float *pfVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  float extraout_XMM0_Da;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  if ((*(int *)(param_1 + 0x28) < 1) ||
     (in_RAX = GetTotalWeight(param_1,param_1 + 0x60), extraout_XMM0_Da <= 1e-05)) {
    uVar2 = in_RAX & 0xffffffffffffff00;
  }
  else {
    fVar19 = 1.0;
    if (1.0 < extraout_XMM0_Da) {
      fVar19 = 1.0 / extraout_XMM0_Da;
    }
    iVar4 = 1;
    fVar8 = fVar19 * **(float **)(param_1 + 0x60);
    pfVar1 = *(float **)(param_1 + 0x20);
    fVar9 = pfVar1[1];
    fVar13 = pfVar1[2];
    fVar14 = pfVar1[3];
    *param_2 = fVar8 * *pfVar1;
    param_2[1] = fVar8 * fVar9;
    param_2[2] = fVar8 * fVar13;
    param_2[3] = fVar8 * fVar14;
    if (1 < *(int *)(param_1 + 0x28)) {
      fVar9 = param_2[1];
      lVar3 = 0x10;
      fVar13 = *param_2;
      lVar5 = 4;
      fVar14 = param_2[2];
      fVar8 = param_2[3];
      do {
        fVar15 = fVar19 * *(float *)(lVar5 + *(longlong *)(param_1 + 0x60));
        pfVar1 = *(float **)(param_1 + 0x20);
        fVar16 = fVar15 * *(float *)(lVar3 + (longlong)pfVar1);
        fVar17 = fVar15 * *(float *)(lVar3 + 4 + (longlong)pfVar1);
        fVar18 = fVar15 * *(float *)(lVar3 + 8 + (longlong)pfVar1);
        fVar15 = fVar15 * *(float *)(lVar3 + 0xc + (longlong)pfVar1);
        if (0.0 <= fVar16 * fVar13 + fVar17 * fVar9 + fVar18 * fVar14 + fVar15 * fVar8) {
          fVar9 = fVar9 + fVar17;
          fVar13 = fVar16 + fVar13;
          fVar14 = fVar18 + fVar14;
          fVar8 = fVar8 + fVar15;
        }
        else {
          fVar13 = fVar13 - fVar16;
          fVar9 = fVar9 - fVar17;
          fVar14 = fVar14 - fVar18;
          fVar8 = fVar8 - fVar15;
        }
        *param_2 = fVar13;
        iVar4 = iVar4 + 1;
        param_2[1] = fVar9;
        lVar5 = lVar5 + 4;
        param_2[2] = fVar14;
        lVar3 = lVar3 + 0x10;
        param_2[3] = fVar8;
      } while (iVar4 < *(int *)(param_1 + 0x28));
    }
    fVar19 = *param_2;
    fVar9 = param_2[1];
    fVar13 = param_2[2];
    fVar14 = param_2[3];
    uVar2 = CONCAT71((int7)((ulonglong)pfVar1 >> 8),1);
    auVar6._0_4_ = fVar19 * fVar19 + fVar13 * fVar13;
    auVar6._4_4_ = fVar9 * fVar9 + fVar14 * fVar14;
    auVar6._8_4_ = fVar13 * fVar13 + fVar19 * fVar19;
    auVar6._12_4_ = fVar14 * fVar14 + fVar9 * fVar9;
    fVar18 = auVar6._4_4_ + auVar6._0_4_;
    fVar10 = auVar6._8_4_ + auVar6._4_4_;
    fVar11 = auVar6._12_4_ + auVar6._8_4_;
    fVar12 = auVar6._0_4_ + auVar6._12_4_;
    auVar7._4_4_ = fVar10;
    auVar7._0_4_ = fVar18;
    auVar7._8_4_ = fVar11;
    auVar7._12_4_ = fVar12;
    auVar7 = rsqrtps(auVar6,auVar7);
    fVar8 = auVar7._0_4_;
    fVar15 = auVar7._4_4_;
    fVar16 = auVar7._8_4_;
    fVar17 = auVar7._12_4_;
    fVar8 = (_DAT_146acab70 - fVar8 * fVar8 * fVar18 * _DAT_146acab70) * fVar8 + fVar8;
    fVar15 = (fRam0000000146acab74 - fVar15 * fVar15 * fVar10 * fRam0000000146acab74) * fVar15 +
             fVar15;
    fVar16 = (fRam0000000146acab78 - fVar16 * fVar16 * fVar11 * fRam0000000146acab78) * fVar16 +
             fVar16;
    fVar17 = (fRam0000000146acab7c - fVar17 * fVar17 * fVar12 * fRam0000000146acab7c) * fVar17 +
             fVar17;
    fVar9 = (float)(((uint)(((fRam0000000146acab74 - fVar15 * fVar15 * fVar10 * fRam0000000146acab74
                             ) * fVar15 + fVar15) * fVar9) ^ uRam0000000146acab64) &
                    -(uint)(1e-08 <= fVar10) ^ uRam0000000146acab64);
    fVar13 = (float)(((uint)(((fRam0000000146acab78 -
                              fVar16 * fVar16 * fVar11 * fRam0000000146acab78) * fVar16 + fVar16) *
                            fVar13) ^ uRam0000000146acab68) & -(uint)(1e-08 <= fVar11) ^
                    uRam0000000146acab68);
    fVar14 = (float)(((uint)(((fRam0000000146acab7c -
                              fVar17 * fVar17 * fVar12 * fRam0000000146acab7c) * fVar17 + fVar17) *
                            fVar14) ^ uRam0000000146acab6c) & -(uint)(1e-08 <= fVar12) ^
                    uRam0000000146acab6c);
    *param_2 = (float)(((uint)(((_DAT_146acab70 - fVar8 * fVar8 * fVar18 * _DAT_146acab70) * fVar8 +
                               fVar8) * fVar19) ^ _DAT_146acab60) & -(uint)(1e-08 <= fVar18) ^
                      _DAT_146acab60);
    param_2[1] = fVar9;
    param_2[2] = fVar13;
    param_2[3] = fVar14;
  }
  return uVar2;
}



// FUNCTION 141f79ee0 GetTotalWeight body=152 status=ok
// SIG undefined GetTotalWeight(void)

undefined8 FMultiTransformBlendHelper::GetTotalWeight(undefined8 param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar12 = 0.0;
  fVar8 = 0.0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  pfVar5 = (float *)*param_2;
  uVar6 = 0;
  uVar7 = (longlong)*(int *)(param_2 + 1) & 0x3fffffffffffffff;
  if (pfVar5 + *(int *)(param_2 + 1) < pfVar5) {
    uVar7 = uVar6;
  }
  if (uVar7 == 0) {
    return 0;
  }
  if (7 < uVar7) {
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = 0.0;
    do {
      uVar6 = uVar6 + 8;
      fVar12 = fVar12 + *pfVar5;
      fVar13 = fVar13 + pfVar5[1];
      fVar14 = fVar14 + pfVar5[2];
      fVar15 = fVar15 + pfVar5[3];
      pfVar1 = pfVar5 + 4;
      pfVar2 = pfVar5 + 5;
      pfVar3 = pfVar5 + 6;
      pfVar4 = pfVar5 + 7;
      pfVar5 = pfVar5 + 8;
      fVar8 = fVar8 + *pfVar1;
      fVar9 = fVar9 + *pfVar2;
      fVar10 = fVar10 + *pfVar3;
      fVar11 = fVar11 + *pfVar4;
    } while (uVar6 != (uVar7 & 0xfffffffffffffff8));
    fVar9 = fVar15 + fVar11 + fVar13 + fVar9;
    fVar12 = fVar14 + fVar10 + fVar12 + fVar8 + fVar9;
  }
  for (; uVar6 != uVar7; uVar6 = uVar6 + 1) {
    fVar12 = fVar12 + *pfVar5;
    pfVar5 = pfVar5 + 1;
  }
  return CONCAT44(fVar9,fVar12);
}



// FUNCTION 141f79f80 FUN_141f79f80 body=1256 status=ok
// SIG undefined FUN_141f79f80(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f79f80(longlong param_1,float *param_2,float *param_3,float *param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  undefined8 *puVar8;
  float fVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  uint uVar25;
  float fVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined1 auStack_108 [32];
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined1 local_d8 [48];
  undefined1 local_a8 [48];
  ulonglong local_78;
  
  uVar3 = uRam00000001468b5b78;
  local_78 = DAT_1468387a8 ^ (ulonglong)auStack_108;
  *(undefined8 *)(param_1 + 0x20) = _DAT_1468b5b70;
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  uVar3 = uRam00000001468b5b88;
  *(undefined8 *)(param_1 + 0x30) = _DAT_1468b5b80;
  *(undefined8 *)(param_1 + 0x38) = uVar3;
  uVar6 = uRam00000001468b5b9c;
  uVar5 = uRam00000001468b5b98;
  uVar4 = uRam00000001468b5b94;
  *(undefined4 *)(param_1 + 0x40) = _DAT_1468b5b90;
  *(undefined4 *)(param_1 + 0x44) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = uVar6;
  if (*(char *)(param_1 + 0x14) != '\0') {
    if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
       (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x28))(), cVar7 == '\0')) {
      if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x18))(), cVar7 != '\0')) {
        fVar21 = *param_4 * _DAT_146acabe0;
        fVar22 = param_4[1] * fRam0000000146acabe4;
        fVar24 = param_4[2] * fRam0000000146acabe8;
        fVar26 = param_4[3] * fRam0000000146acabec;
        fVar16 = param_2[4] - param_3[4];
        fVar12 = param_2[5] - param_3[5];
        fVar19 = param_2[6] - param_3[6];
        fVar13 = fVar19 * fVar22 - fVar12 * fVar24;
        fVar14 = fVar16 * fVar24 - fVar19 * fVar21;
        fVar15 = fVar12 * fVar21 - fVar16 * fVar22;
        fVar13 = fVar13 + fVar13;
        fVar14 = fVar14 + fVar14;
        fVar15 = fVar15 + fVar15;
        auVar11._4_4_ = (fVar13 * fVar24 - fVar15 * fVar21) + fVar26 * fVar14 + fVar12;
        auVar11._0_4_ = (fVar15 * fVar22 - fVar14 * fVar24) + fVar26 * fVar13 + fVar16;
        auVar11._8_4_ = (fVar14 * fVar21 - fVar13 * fVar22) + fVar26 * fVar15 + fVar19;
        auVar11._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = auVar11;
      }
      if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x10))(),
         fVar15 = fRam0000000146acab7c, fVar14 = fRam0000000146acab78, fVar13 = fRam0000000146acab74
         , fVar12 = _DAT_146acab70, cVar7 != '\0')) {
        fVar16 = param_3[3];
        fVar19 = *param_2;
        fVar21 = param_2[1];
        fVar22 = param_2[2];
        fVar24 = param_2[3];
        fVar17 = -*param_3;
        fVar26 = -param_3[1];
        fVar20 = -param_3[2];
        fStack_dc = param_4[3];
        fVar18 = -*param_4;
        fVar9 = -param_4[1];
        fStack_e0 = -param_4[2];
        fVar30 = fVar24 * fVar17 * _DAT_146acaba0 + fVar16 * fVar19 +
                 fVar22 * fVar26 * _DAT_146acab90 + fVar21 * fVar20 * _DAT_146acab80;
        fVar31 = fVar22 * fVar17 * fRam0000000146acaba4 + fVar16 * fVar21 +
                 fVar24 * fVar26 * fRam0000000146acab94 + fVar19 * fVar20 * fRam0000000146acab84;
        fVar32 = fVar21 * fVar17 * fRam0000000146acaba8 + fVar16 * fVar22 +
                 fVar19 * fVar26 * fRam0000000146acab98 + fVar24 * fVar20 * fRam0000000146acab88;
        fVar16 = fVar19 * fVar17 * fRam0000000146acabac + fVar16 * fVar24 +
                 fVar21 * fVar26 * fRam0000000146acab9c + fVar22 * fVar20 * fRam0000000146acab8c;
        local_e8 = -*param_4;
        fStack_e4 = -param_4[1];
        fVar17 = fVar18 * fVar16 * _DAT_146acaba0 + fStack_dc * fVar30 +
                 fVar9 * fVar32 * _DAT_146acab90 + fStack_e0 * fVar31 * _DAT_146acab80;
        fVar28 = fVar18 * fVar32 * fRam0000000146acaba4 + fStack_dc * fVar31 +
                 fVar9 * fVar16 * fRam0000000146acab94 + fStack_e0 * fVar30 * fRam0000000146acab84;
        fVar29 = fVar18 * fVar31 * fRam0000000146acaba8 + fStack_dc * fVar32 +
                 fVar9 * fVar30 * fRam0000000146acab98 + fStack_e0 * fVar16 * fRam0000000146acab88;
        fVar18 = fVar18 * fVar30 * fRam0000000146acabac + fStack_dc * fVar16 +
                 fVar9 * fVar31 * fRam0000000146acab9c + fStack_e0 * fVar32 * fRam0000000146acab8c;
        *(float *)(param_1 + 0x20) = fVar17;
        *(float *)(param_1 + 0x24) = fVar28;
        *(float *)(param_1 + 0x28) = fVar29;
        *(float *)(param_1 + 0x2c) = fVar18;
        auVar10._0_4_ = fVar17 * fVar17 + fVar29 * fVar29;
        auVar10._4_4_ = fVar28 * fVar28 + fVar18 * fVar18;
        auVar10._8_4_ = fVar29 * fVar29 + fVar17 * fVar17;
        auVar10._12_4_ = fVar18 * fVar18 + fVar28 * fVar28;
        fVar24 = auVar10._4_4_ + auVar10._0_4_;
        fVar26 = auVar10._8_4_ + auVar10._4_4_;
        fVar9 = auVar10._12_4_ + auVar10._8_4_;
        fVar20 = auVar10._0_4_ + auVar10._12_4_;
        auVar2._4_4_ = fVar26;
        auVar2._0_4_ = fVar24;
        auVar2._8_4_ = fVar9;
        auVar2._12_4_ = fVar20;
        auVar11 = rsqrtps(auVar10,auVar2);
        fVar16 = auVar11._0_4_;
        fVar19 = auVar11._4_4_;
        fVar21 = auVar11._8_4_;
        fVar22 = auVar11._12_4_;
        fVar16 = (fVar12 - fVar16 * fVar16 * fVar24 * fVar12) * fVar16 + fVar16;
        fVar19 = (fVar13 - fVar19 * fVar19 * fVar26 * fVar13) * fVar19 + fVar19;
        fVar21 = (fVar14 - fVar21 * fVar21 * fVar9 * fVar14) * fVar21 + fVar21;
        fVar22 = (fVar15 - fVar22 * fVar22 * fVar20 * fVar15) * fVar22 + fVar22;
        uVar23 = ((uint)(((fVar13 - fVar19 * fVar19 * fVar26 * fVar13) * fVar19 + fVar19) * fVar28)
                 ^ uRam0000000146acab64) & -(uint)(fRam0000000146acabd4 <= fVar26) ^
                 uRam0000000146acab64;
        uVar25 = ((uint)(((fVar14 - fVar21 * fVar21 * fVar9 * fVar14) * fVar21 + fVar21) * fVar29) ^
                 uRam0000000146acab68) & -(uint)(fRam0000000146acabd8 <= fVar9) ^
                 uRam0000000146acab68;
        uVar27 = ((uint)(((fVar15 - fVar22 * fVar22 * fVar20 * fVar15) * fVar22 + fVar22) * fVar18)
                 ^ uRam0000000146acab6c) & -(uint)(fRam0000000146acabdc <= fVar20) ^
                 uRam0000000146acab6c;
        *(uint *)(param_1 + 0x20) =
             ((uint)(((fVar12 - fVar16 * fVar16 * fVar24 * fVar12) * fVar16 + fVar16) * fVar17) ^
             _DAT_146acab60) & -(uint)(_DAT_146acabd0 <= fVar24) ^ _DAT_146acab60;
        *(uint *)(param_1 + 0x24) = uVar23;
        *(uint *)(param_1 + 0x28) = uVar25;
        *(uint *)(param_1 + 0x2c) = uVar27;
      }
      if ((*(longlong **)(param_1 + 8) != (longlong *)0x0) &&
         (cVar7 = (**(code **)(**(longlong **)(param_1 + 8) + 0x20))(), cVar7 != '\0')) {
        if (1e-08 < ABS(param_3[8])) {
          fVar12 = 1.0 / param_3[8];
        }
        else {
          fVar12 = 0.0;
        }
        if (1e-08 < ABS(param_3[9])) {
          fVar13 = 1.0 / param_3[9];
        }
        else {
          fVar13 = 0.0;
        }
        if (1e-08 < ABS(param_3[10])) {
          fVar14 = 1.0 / param_3[10];
        }
        else {
          fVar14 = 0.0;
        }
        if (1e-08 < ABS(param_4[8])) {
          fVar15 = 1.0 / param_4[8];
        }
        else {
          fVar15 = 0.0;
        }
        if (1e-08 < ABS(param_4[9])) {
          fVar16 = 1.0 / param_4[9];
        }
        else {
          fVar16 = 0.0;
        }
        if (1e-08 < ABS(param_4[10])) {
          fVar19 = 1.0 / param_4[10];
        }
        else {
          fVar19 = 0.0;
        }
        auVar1._4_4_ = param_2[9] * fVar13 * fVar16;
        auVar1._0_4_ = param_2[8] * fVar12 * fVar15;
        auVar1._8_4_ = param_2[10] * fVar14 * fVar19;
        auVar1._12_4_ = 0;
        *(undefined1 (*) [16])(param_1 + 0x40) = auVar1;
      }
    }
    else {
      FUN_14162bcf0(param_2,local_d8,param_3);
      puVar8 = (undefined8 *)FUN_14162bcf0(local_d8,local_a8,param_4);
      uVar3 = puVar8[1];
      *(undefined8 *)(param_1 + 0x20) = *puVar8;
      *(undefined8 *)(param_1 + 0x28) = uVar3;
      uVar3 = puVar8[3];
      *(undefined8 *)(param_1 + 0x30) = puVar8[2];
      *(undefined8 *)(param_1 + 0x38) = uVar3;
      uVar3 = puVar8[5];
      *(undefined8 *)(param_1 + 0x40) = puVar8[4];
      *(undefined8 *)(param_1 + 0x48) = uVar3;
    }
  }
  return;
}



// FUNCTION 141f7a470 SolveAim body=1202 status=ok
// SIG undefined SolveAim(void)

undefined4 *
AnimationCore::SolveAim
          (undefined4 *param_1,longlong param_2,float *param_3,float *param_4,char param_5,
          float *param_6,float param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float local_88;
  float local_84;
  float local_80;
  
  fVar3 = param_4[1];
  fVar5 = *param_4;
  fVar1 = param_4[2];
  if ((0.01 <= ABS(1.0 - (fVar5 * fVar5 + fVar3 * fVar3 + fVar1 * fVar1))) ||
     ((param_5 != '\0' &&
      (0.01 <= ABS(1.0 - (*param_6 * *param_6 + param_6[1] * param_6[1] + param_6[2] * param_6[2])))
      ))) {
    *param_1 = DAT_1464aa810;
    param_1[1] = DAT_1464aa814;
    param_1[2] = DAT_1464aa818;
    param_1[3] = DAT_1464aa81c;
  }
  else {
    fVar7 = *param_3 - *(float *)(param_2 + 0x10);
    fVar8 = param_3[1] - *(float *)(param_2 + 0x14);
    fVar9 = param_3[2] - *(float *)(param_2 + 0x18);
    fVar2 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
    if (1e-08 < fVar2) {
      auVar6 = rsqrtss(ZEXT416((uint)fVar2),ZEXT416((uint)fVar2));
      fVar4 = auVar6._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar2 * 0.5 * fVar4 * fVar4);
      fVar7 = fVar7 * fVar4;
      fVar8 = fVar8 * fVar4;
      fVar9 = fVar9 * fVar4;
    }
    local_88 = fVar7;
    local_84 = fVar8;
    local_80 = fVar9;
    if (1e-05 < param_7) {
      if (180.0 <= param_7) {
        param_7 = 180.0;
      }
      fVar4 = fVar5 * fVar7 + fVar3 * fVar8 + fVar1 * fVar9;
      fVar2 = -1.0;
      if ((-1.0 <= fVar4) && (fVar2 = fVar4, 1.0 <= fVar4)) {
        fVar2 = 1.0;
      }
      fVar2 = ::_guard_xfg_dispatch_icall_nop(fVar2);
      if (param_7 * 0.017453292 < fVar2) {
        fVar2 = (param_7 * 0.017453292) / fVar2;
        fVar7 = (fVar7 - fVar5) * fVar2 + fVar5;
        fVar8 = (fVar8 - fVar3) * fVar2 + fVar3;
        fVar9 = (fVar9 - fVar1) * fVar2 + fVar1;
        fVar3 = fVar8 * fVar8 + fVar7 * fVar7 + fVar9 * fVar9;
        local_88 = fVar7;
        local_84 = fVar8;
        local_80 = fVar9;
        if (1e-08 < fVar3) {
          auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
          fVar5 = auVar6._0_4_;
          fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
          fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
          fVar7 = fVar7 * fVar5;
          fVar8 = fVar8 * fVar5;
          fVar9 = fVar9 * fVar5;
          local_88 = fVar7;
          local_84 = fVar8;
          local_80 = fVar9;
        }
      }
    }
    if (param_5 != '\0') {
      fVar3 = *param_6 * fVar7 + param_6[1] * fVar8 + param_6[2] * fVar9;
      local_88 = fVar7 - *param_6 * fVar3;
      local_84 = fVar8 - param_6[1] * fVar3;
      local_80 = fVar9 - param_6[2] * fVar3;
      fVar3 = local_88 * local_88 + local_84 * local_84 + local_80 * local_80;
      if (1e-08 < fVar3) {
        auVar6 = rsqrtss(ZEXT416((uint)fVar3),ZEXT416((uint)fVar3));
        fVar5 = auVar6._0_4_;
        fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
        fVar5 = fVar5 + fVar5 * (0.5 - fVar3 * 0.5 * fVar5 * fVar5);
        local_88 = fVar5 * local_88;
        local_84 = fVar5 * local_84;
        local_80 = fVar5 * local_80;
      }
    }
    FQuat::FindBetweenNormals(param_1,param_4,&local_88);
  }
  return param_1;
}



// FUNCTION 141f7a930 FUN_141f7a930 body=2793 status=ok
// SIG undefined FUN_141f7a930(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141f7a930(float *param_1,undefined8 param_2,float *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float *pfVar18;
  float *pfVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float *pfVar22;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 auVar34 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  uint uVar56;
  uint uVar57;
  float fVar58;
  uint uVar59;
  uint uVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined1 auStack_268 [32];
  undefined4 local_248;
  longlong *local_240;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  longlong local_1e8 [2];
  float *local_1d8;
  undefined8 local_1d0;
  longlong local_1c8;
  undefined8 local_1c0;
  float *local_1b8;
  undefined8 local_1b0;
  longlong local_1a8;
  undefined8 local_1a0;
  float *local_198;
  undefined8 local_190;
  longlong local_188;
  undefined8 local_180;
  float *local_178;
  undefined8 local_170;
  undefined8 local_168;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined8 local_148;
  undefined8 uStack_140;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  undefined1 local_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  ulonglong local_f8;
  
  local_f8 = DAT_1468387a8 ^ (ulonglong)auStack_268;
  lVar17 = param_4[1];
  lVar16 = (longlong)(int)lVar17;
  uVar20 = 0;
  local_1e8[0] = 0;
  local_1e8[1] = 0;
  local_1d8 = (float *)0x0;
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c0 = 0;
  local_1b8 = (float *)0x0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a0 = 0;
  local_198 = (float *)0x0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = (float *)0x0;
  local_170 = 0;
  local_238 = param_2;
  local_168 = param_1;
  FUN_14162bcf0(param_2,&local_128);
  uVar10 = local_238;
  uVar21 = uVar20;
  if (0 < (int)lVar17) {
    do {
      lVar17 = *param_4 + uVar21;
      if (1e-05 < *(float *)(lVar17 + 0x10)) {
        local_228 = *(undefined8 *)(lVar17 + 0x50);
        uStack_220 = *(undefined8 *)(lVar17 + 0x58);
        local_218 = *(undefined8 *)(lVar17 + 0x60);
        uStack_210 = *(undefined8 *)(lVar17 + 0x68);
        local_208 = *(undefined8 *)(lVar17 + 0x70);
        uStack_200 = *(undefined8 *)(lVar17 + 0x78);
        local_138 = (float)((uint)_DAT_146acab50 & _DAT_146acab40);
        fStack_134 = (float)((uint)fRam0000000146acab54 & uRam0000000146acab44);
        fStack_130 = (float)((uint)fRam0000000146acab58 & uRam0000000146acab48);
        fStack_12c = (float)((uint)fRam0000000146acab5c & uRam0000000146acab4c);
        local_158 = 0.0;
        fStack_154 = 0.0;
        fStack_150 = 0.0;
        fStack_14c = fRam0000000146acab5c;
        local_148 = 0;
        uStack_140 = 0;
        FUN_141f78770(lVar17,0,&local_158,param_3);
        plVar1 = *(longlong **)(lVar17 + 8);
        if (plVar1 != (longlong *)0x0) {
          local_248 = *(undefined4 *)(lVar17 + 0x10);
          local_240 = local_1e8;
          (**(code **)(*plVar1 + 8))(plVar1,&local_158,uVar10,param_3);
        }
      }
      lVar16 = lVar16 + -1;
      uVar21 = uVar21 + 0x80;
      param_1 = local_168;
    } while (lVar16 != 0);
  }
  uVar60 = uRam0000000146acab4c;
  uVar59 = uRam0000000146acab48;
  uVar57 = uRam0000000146acab44;
  uVar56 = _DAT_146acab40;
  local_138 = (float)((uint)_DAT_146acab50 & _DAT_146acab40);
  fStack_134 = (float)((uint)fRam0000000146acab54 & uRam0000000146acab44);
  fStack_130 = (float)((uint)fRam0000000146acab58 & uRam0000000146acab48);
  fStack_12c = (float)((uint)fRam0000000146acab5c & uRam0000000146acab4c);
  local_158 = 0.0;
  fStack_154 = 0.0;
  fStack_150 = 0.0;
  fStack_14c = fRam0000000146acab5c;
  local_148 = 0;
  uStack_140 = 0;
  uVar11 = FUN_141f797e0(local_1e8,&local_158);
  pfVar22 = local_178;
  pfVar19 = local_198;
  pfVar18 = local_1b8;
  if ((char)uVar11 != '\0') {
    local_128 = local_158;
    fStack_124 = fStack_154;
    fStack_120 = fStack_150;
    fStack_11c = fStack_14c;
    fStack_110 = (float)uStack_140;
    local_118 = (undefined1  [8])local_148;
    fStack_10c = uStack_140._4_4_;
    local_108._4_4_ = fStack_134;
    local_108._0_4_ = local_138;
    fStack_100 = fStack_130;
    fStack_fc = fStack_12c;
    fVar27 = local_138;
    fVar29 = fStack_134;
    fVar31 = fStack_130;
    fVar45 = fStack_12c;
    fVar47 = (float)local_148;
    fVar49 = local_148._4_4_;
    fVar52 = (float)uStack_140;
    fVar43 = uStack_140._4_4_;
    goto LAB_141f7adf8;
  }
  fVar45 = 1.0;
  if ((int)local_1d0 < 1) {
LAB_141f7ac98:
    fVar47 = (float)local_118._0_4_;
    fVar49 = (float)local_118._4_4_;
    fVar52 = fStack_110;
    fVar43 = fStack_10c;
  }
  else {
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    fVar47 = 0.0;
    uVar21 = (ulonglong)((longlong)(local_198 + (int)local_190) + (3 - (longlong)local_198)) >> 2;
    if (local_198 + (int)local_190 < local_198) {
      uVar21 = uVar20;
    }
    if (uVar21 == 0) goto LAB_141f7ac98;
    pfVar13 = local_198;
    uVar15 = uVar20;
    if (7 < uVar21) {
      fVar49 = 0.0;
      fVar52 = 0.0;
      fVar43 = 0.0;
      fVar26 = 0.0;
      do {
        uVar15 = uVar15 + 8;
        fVar49 = fVar49 + *pfVar13;
        fVar52 = fVar52 + pfVar13[1];
        fVar43 = fVar43 + pfVar13[2];
        fVar26 = fVar26 + pfVar13[3];
        pfVar14 = pfVar13 + 4;
        pfVar3 = pfVar13 + 5;
        pfVar4 = pfVar13 + 6;
        pfVar5 = pfVar13 + 7;
        pfVar13 = pfVar13 + 8;
        fVar27 = fVar27 + *pfVar14;
        fVar29 = fVar29 + *pfVar3;
        fVar31 = fVar31 + *pfVar4;
        fVar47 = fVar47 + *pfVar5;
      } while (uVar15 != (uVar21 & 0xfffffffffffffff8));
      fVar27 = fVar43 + fVar31 + fVar49 + fVar27 + fVar26 + fVar47 + fVar52 + fVar29;
    }
    for (; uVar15 != uVar21; uVar15 = uVar15 + 1) {
      fVar27 = fVar27 + *pfVar13;
      pfVar13 = pfVar13 + 1;
    }
    if (fVar27 <= 1e-05) goto LAB_141f7ac98;
    fVar29 = 1.0;
    if (1.0 < fVar27) {
      fVar29 = 1.0 / fVar27;
    }
    fVar52 = fVar29 * *local_198;
    fVar47 = fVar52 * *local_1d8;
    fVar49 = fVar52 * local_1d8[1];
    fVar52 = fVar52 * local_1d8[2];
    if (1 < (int)local_1d0) {
      pfVar14 = local_1d8 + 5;
      uVar21 = (ulonglong)((int)local_1d0 - 1);
      pfVar13 = local_198;
      do {
        pfVar13 = pfVar13 + 1;
        fVar31 = fVar29 * *pfVar13;
        pfVar3 = pfVar14 + -2;
        pfVar4 = pfVar14 + -1;
        fVar27 = *pfVar14;
        pfVar14 = pfVar14 + 3;
        fVar47 = fVar47 + fVar31 * *pfVar3;
        fVar49 = fVar49 + fVar31 * *pfVar4;
        fVar52 = fVar52 + fVar31 * fVar27;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    local_118._4_4_ = fVar49;
    local_118._0_4_ = fVar47;
    fStack_110 = fVar52;
    fStack_10c = 0.0;
    uVar56 = _DAT_146acab40;
    uVar57 = uRam0000000146acab44;
    uVar59 = uRam0000000146acab48;
    uVar60 = uRam0000000146acab4c;
    fVar43 = 0.0;
  }
  pfVar13 = (float *)FMultiTransformBlendHelper::GetBlendedRotation(local_1e8,&local_168);
  if ((char)pfVar13 != '\0') {
    local_128 = (float)local_168;
    fStack_124 = local_168._4_4_;
    fStack_120 = fStack_160;
    fStack_11c = fStack_15c;
  }
  if (0 < (int)local_1b0) {
    fVar27 = 0.0;
    fVar29 = 0.0;
    fVar31 = 0.0;
    fVar26 = 0.0;
    uVar21 = (ulonglong)((longlong)(pfVar22 + (int)local_170) + (3 - (longlong)pfVar22)) >> 2;
    if (pfVar22 + (int)local_170 < pfVar22) {
      uVar21 = uVar20;
    }
    pfVar13 = pfVar22;
    if (uVar21 != 0) {
      if (7 < uVar21) {
        fVar28 = 0.0;
        fVar30 = 0.0;
        fVar37 = 0.0;
        fVar41 = 0.0;
        do {
          uVar20 = uVar20 + 8;
          fVar28 = fVar28 + *pfVar13;
          fVar30 = fVar30 + pfVar13[1];
          fVar37 = fVar37 + pfVar13[2];
          fVar41 = fVar41 + pfVar13[3];
          pfVar14 = pfVar13 + 4;
          pfVar3 = pfVar13 + 5;
          pfVar4 = pfVar13 + 6;
          pfVar5 = pfVar13 + 7;
          pfVar13 = pfVar13 + 8;
          fVar27 = fVar27 + *pfVar14;
          fVar29 = fVar29 + *pfVar3;
          fVar31 = fVar31 + *pfVar4;
          fVar26 = fVar26 + *pfVar5;
        } while (uVar20 != (uVar21 & 0xfffffffffffffff8));
        fVar27 = fVar37 + fVar31 + fVar28 + fVar27 + fVar41 + fVar26 + fVar30 + fVar29;
      }
      for (; uVar20 != uVar21; uVar20 = uVar20 + 1) {
        fVar27 = fVar27 + *pfVar13;
        pfVar13 = pfVar13 + 1;
      }
      uVar11 = SUB84(pfVar13,0);
      if (1e-05 < fVar27) {
        if (1.0 < fVar27) {
          fVar45 = 1.0 / fVar27;
        }
        fVar31 = fVar45 * *pfVar22;
        fVar27 = fVar31 * *pfVar18;
        fVar29 = fVar31 * pfVar18[1];
        fVar31 = fVar31 * pfVar18[2];
        if (1 < (int)local_1b0) {
          uVar20 = (ulonglong)((int)local_1b0 - 1);
          pfVar14 = pfVar18 + 5;
          pfVar13 = pfVar22;
          do {
            pfVar13 = pfVar13 + 1;
            fVar26 = fVar45 * *pfVar13;
            fVar27 = fVar27 * fVar26 * pfVar14[-2];
            fVar29 = fVar29 * fVar26 * pfVar14[-1];
            fVar31 = fVar31 * fVar26 * *pfVar14;
            uVar20 = uVar20 - 1;
            pfVar14 = pfVar14 + 3;
          } while (uVar20 != 0);
        }
        fVar45 = 0.0;
        local_108._4_4_ = fVar29;
        local_108._0_4_ = fVar27;
        fStack_100 = fVar31;
        fStack_fc = 0.0;
        goto LAB_141f7adf8;
      }
    }
  }
  uVar11 = SUB84(pfVar13,0);
  fVar27 = (float)local_108._0_4_;
  fVar29 = (float)local_108._4_4_;
  fVar31 = fStack_100;
  fVar45 = fStack_fc;
LAB_141f7adf8:
  fVar26 = fRam0000000146acab5c;
  param_1[4] = 0.0;
  param_1[5] = 0.0;
  param_1[6] = 0.0;
  param_1[7] = 0.0;
  *param_1 = 0.0;
  param_1[1] = 0.0;
  param_1[2] = 0.0;
  param_1[3] = fVar26;
  fVar26 = (float)((uint)fRam0000000146acab54 & uVar57);
  fVar28 = (float)((uint)fRam0000000146acab58 & uVar59);
  fVar30 = (float)((uint)fRam0000000146acab5c & uVar60);
  param_1[8] = (float)((uint)_DAT_146acab50 & uVar56);
  param_1[9] = fVar26;
  param_1[10] = fVar28;
  param_1[0xb] = fVar30;
  fVar9 = fRam0000000146acab58;
  fVar8 = fRam0000000146acab54;
  fVar7 = _DAT_146acab50;
  auVar24 = *(undefined1 (*) [16])(param_3 + 8);
  fVar26 = auVar24._0_4_;
  fVar28 = auVar24._4_4_;
  fVar30 = auVar24._8_4_;
  fVar37 = auVar24._12_4_;
  fVar41 = *param_3;
  fVar42 = param_3[1];
  fVar36 = param_3[2];
  fVar40 = param_3[3];
  auVar23._4_4_ = fVar29;
  auVar23._0_4_ = fVar27;
  auVar23._8_4_ = fVar31;
  auVar23._12_4_ = fVar45;
  auVar24 = minps(auVar23,auVar24);
  auVar25._4_4_ = -(uint)(auVar24._4_4_ < fRam0000000146acabc4);
  auVar25._0_4_ = -(uint)(auVar24._0_4_ < _DAT_146acabc0);
  auVar25._8_4_ = -(uint)(auVar24._8_4_ < fRam0000000146acabc8);
  auVar25._12_4_ = -(uint)(auVar24._12_4_ < fRam0000000146acabcc);
  iVar12 = movmskps(uVar11,auVar25);
  if (iVar12 == 0) {
    fVar7 = param_3[4];
    fVar8 = param_3[5];
    fVar9 = param_3[6];
    fVar6 = param_3[7];
    fVar47 = fVar26 * fVar47;
    fVar49 = fVar28 * fVar49;
    fVar52 = fVar30 * fVar52;
    fVar43 = fVar37 * fVar43;
    fVar39 = fVar41 * fStack_11c * _DAT_146acaba0;
    fVar44 = fVar41 * fStack_120 * fRam0000000146acaba4;
    fVar46 = fVar41 * fStack_124 * fRam0000000146acaba8;
    fVar58 = fVar41 * local_128 * fRam0000000146acabac;
    fVar33 = fVar42 * fStack_120 * _DAT_146acab90;
    fVar32 = fVar42 * fStack_11c * fRam0000000146acab94;
    fVar35 = fVar42 * local_128 * fRam0000000146acab98;
    fVar38 = fVar42 * fStack_124 * fRam0000000146acab9c;
    param_1[8] = fVar26 * fVar27;
    param_1[9] = fVar28 * fVar29;
    param_1[10] = fVar30 * fVar31;
    param_1[0xb] = fVar37 * fVar45;
    fVar27 = fVar36 * local_128 * fRam0000000146acab84;
    fVar29 = fVar36 * fStack_11c * fRam0000000146acab88;
    fVar31 = fVar36 * fStack_120 * fRam0000000146acab8c;
    *param_1 = fVar39 + fVar40 * local_128 + fVar33 + fVar36 * fStack_124 * _DAT_146acab80;
    param_1[1] = fVar44 + fVar40 * fStack_124 + fVar32 + fVar27;
    param_1[2] = fVar46 + fVar40 * fStack_120 + fVar35 + fVar29;
    param_1[3] = fVar58 + fVar40 * fStack_11c + fVar38 + fVar31;
    fVar27 = fVar52 * fVar42 - fVar49 * fVar36;
    fVar29 = fVar47 * fVar36 - fVar52 * fVar41;
    fVar31 = fVar49 * fVar41 - fVar47 * fVar42;
    fVar45 = fVar43 * fVar40 - fVar43 * fVar40;
    fVar27 = fVar27 + fVar27;
    fVar29 = fVar29 + fVar29;
    fVar31 = fVar31 + fVar31;
    fVar45 = fVar45 + fVar45;
    param_1[4] = (fVar31 * fVar42 - fVar29 * fVar36) + fVar27 * fVar40 + fVar47 + fVar7;
    param_1[5] = (fVar27 * fVar36 - fVar31 * fVar41) + fVar29 * fVar40 + fVar49 + fVar8;
    param_1[6] = (fVar29 * fVar41 - fVar27 * fVar42) + fVar31 * fVar40 + fVar52 + fVar9;
    param_1[7] = (fVar45 * fVar40 - fVar45 * fVar40) + fVar45 * fVar40 + fVar43 + fVar6;
  }
  else {
    fVar35 = fVar42 + fVar42;
    fVar38 = fVar36 + fVar36;
    fVar44 = (fVar41 + fVar41) * fVar41;
    fVar58 = fVar40 * (fVar41 + fVar41);
    fVar61 = (fVar40 * fVar38 + fVar41 * fVar35) * fVar26;
    fVar62 = (fVar58 + fVar42 * fVar38) * fVar28;
    fVar63 = (fVar40 * fVar35 + fVar41 * fVar38) * fVar30;
    fVar43 = param_3[4];
    fVar6 = param_3[5];
    fVar33 = param_3[6];
    fVar32 = (float)((uint)((_DAT_146acab50 - (fVar38 * fVar36 + fVar35 * fVar42)) * fVar26) &
                    _DAT_146acab40);
    fVar36 = (float)((uint)((fRam0000000146acab54 - (fVar38 * fVar36 + fVar44)) * fVar28) &
                    uRam0000000146acab44);
    fVar39 = (float)((uint)((fRam0000000146acab58 - (fVar35 * fVar42 + fVar44)) * fVar30) &
                    uRam0000000146acab48);
    fVar44 = (float)((uint)((fRam0000000146acab5c - (fVar44 + fVar44)) * fVar37) &
                    uRam0000000146acab4c);
    fVar46 = fVar28 * (fVar41 * fVar35 - fVar40 * fVar38);
    fVar58 = fVar30 * (fVar42 * fVar38 - fVar58);
    fVar50 = fVar26 * (fVar41 * fVar38 - fVar40 * fVar35);
    fVar40 = fStack_124 + fStack_124;
    fVar42 = fStack_120 + fStack_120;
    fVar35 = (local_128 + local_128) * local_128;
    fVar41 = (local_128 + local_128) * fStack_11c;
    fVar53 = (fVar42 * fStack_11c + fVar40 * local_128) * fVar27;
    fVar54 = (fVar41 + fVar42 * fStack_124) * fVar29;
    fVar55 = (fVar40 * fStack_11c + fVar42 * local_128) * fVar31;
    fVar38 = fVar29 * (fVar40 * local_128 - fVar42 * fStack_11c);
    fVar48 = fVar31 * (fVar42 * fStack_124 - fVar41);
    fVar51 = fVar27 * (fVar42 * local_128 - fVar40 * fStack_11c);
    fVar41 = (float)((uint)((_DAT_146acab50 - (fVar42 * fStack_120 + fVar40 * fStack_124)) * fVar27)
                    & _DAT_146acab40);
    fVar42 = (float)((uint)((fRam0000000146acab54 - (fVar42 * fStack_120 + fVar35)) * fVar29) &
                    uRam0000000146acab44);
    fVar40 = (float)((uint)((fRam0000000146acab58 - (fVar40 * fStack_124 + fVar35)) * fVar31) &
                    uRam0000000146acab48);
    fVar35 = (float)((uint)((fRam0000000146acab5c - (fVar35 + fVar35)) * fVar45) &
                    uRam0000000146acab4c);
    local_228._0_4_ = fVar53 * fVar46 + fVar41 * fVar32 + fVar51 * fVar63 + fVar35 * fVar43;
    local_228._4_4_ = fVar53 * fVar36 + fVar41 * fVar61 + fVar51 * fVar58 + fVar35 * fVar6;
    uStack_220._0_4_ = fVar53 * fVar62 + fVar41 * fVar50 + fVar51 * fVar39 + fVar35 * fVar33;
    uStack_220._4_4_ =
         fVar53 * fVar44 + fVar41 * fVar44 + fVar51 * fVar44 + fVar35 * fRam0000000146acab5c;
    local_218._0_4_ = fVar42 * fVar46 + fVar38 * fVar32 + fVar54 * fVar63 + fVar35 * fVar43;
    local_218._4_4_ = fVar42 * fVar36 + fVar38 * fVar61 + fVar54 * fVar58 + fVar35 * fVar6;
    uStack_210._0_4_ = fVar42 * fVar62 + fVar38 * fVar50 + fVar54 * fVar39 + fVar35 * fVar33;
    uStack_210._4_4_ =
         fVar42 * fVar44 + fVar38 * fVar44 + fVar54 * fVar44 + fVar35 * fRam0000000146acab5c;
    local_208._0_4_ = fVar48 * fVar46 + fVar55 * fVar32 + fVar40 * fVar63 + fVar35 * fVar43;
    local_208._4_4_ = fVar48 * fVar36 + fVar55 * fVar61 + fVar40 * fVar58 + fVar35 * fVar6;
    uStack_200._0_4_ = fVar48 * fVar62 + fVar55 * fVar50 + fVar40 * fVar39 + fVar35 * fVar33;
    uStack_200._4_4_ =
         fVar48 * fVar44 + fVar55 * fVar44 + fVar40 * fVar44 + fVar35 * fRam0000000146acab5c;
    local_1f8 = fVar49 * fVar46 + fVar47 * fVar32 + fVar52 * fVar63 + fRam0000000146acab5c * fVar43;
    fStack_1f4 = fVar49 * fVar36 + fVar47 * fVar61 + fVar52 * fVar58 + fRam0000000146acab5c * fVar6;
    fStack_1f0 = fVar49 * fVar62 + fVar47 * fVar50 + fVar52 * fVar39 + fRam0000000146acab5c * fVar33
    ;
    fStack_1ec = fVar49 * fVar44 + fVar47 * fVar44 + fVar52 * fVar44 +
                 fRam0000000146acab5c * fRam0000000146acab5c;
    FMatrix::RemoveScaling(&local_228);
    fVar47 = (float)(-(uint)(_DAT_146acabc0 <= fVar26 * fVar27) & (_DAT_146acabb0 ^ (uint)fVar7) ^
                    _DAT_146acabb0);
    fVar49 = (float)(-(uint)(fRam0000000146acabc4 <= fVar28 * fVar29) &
                     (uRam0000000146acabb4 ^ (uint)fVar8) ^ uRam0000000146acabb4);
    fVar52 = (float)(-(uint)(fRam0000000146acabc8 <= fVar30 * fVar31) &
                     (uRam0000000146acabb8 ^ (uint)fVar9) ^ uRam0000000146acabb8);
    uStack_220 = CONCAT44(uStack_220._4_4_,(float)uStack_220 * fVar47);
    local_228 = CONCAT44(local_228._4_4_ * fVar47,(float)local_228 * fVar47);
    uStack_210 = CONCAT44(uStack_210._4_4_,(float)uStack_210 * fVar49);
    uStack_200 = CONCAT44(uStack_200._4_4_,(float)uStack_200 * fVar52);
    local_218 = CONCAT44(local_218._4_4_ * fVar49,(float)local_218 * fVar49);
    local_208 = CONCAT44(local_208._4_4_ * fVar52,(float)local_208 * fVar52);
    FQuat::FQuat(&local_168,&local_228);
    local_238 = CONCAT44(local_238._4_4_,0x322bcc77);
    auVar34._0_4_ = (float)local_168 * (float)local_168 + fStack_160 * fStack_160;
    auVar34._4_4_ = local_168._4_4_ * local_168._4_4_ + fStack_15c * fStack_15c;
    auVar34._8_4_ = fStack_160 * fStack_160 + (float)local_168 * (float)local_168;
    auVar34._12_4_ = fStack_15c * fStack_15c + local_168._4_4_ * local_168._4_4_;
    fVar41 = auVar34._4_4_ + auVar34._0_4_;
    fVar42 = auVar34._8_4_ + auVar34._4_4_;
    fVar36 = auVar34._12_4_ + auVar34._8_4_;
    fVar40 = auVar34._0_4_ + auVar34._12_4_;
    auVar2._4_4_ = fVar42;
    auVar2._0_4_ = fVar41;
    auVar2._8_4_ = fVar36;
    auVar2._12_4_ = fVar40;
    auVar24 = rsqrtps(auVar34,auVar2);
    fVar47 = auVar24._0_4_;
    fVar49 = auVar24._4_4_;
    fVar52 = auVar24._8_4_;
    fVar43 = auVar24._12_4_;
    fVar47 = (_DAT_146acab70 - fVar47 * fVar47 * fVar41 * _DAT_146acab70) * fVar47 + fVar47;
    fVar49 = (fRam0000000146acab74 - fVar49 * fVar49 * fVar42 * fRam0000000146acab74) * fVar49 +
             fVar49;
    fVar52 = (fRam0000000146acab78 - fVar52 * fVar52 * fVar36 * fRam0000000146acab78) * fVar52 +
             fVar52;
    fVar43 = (fRam0000000146acab7c - fVar43 * fVar43 * fVar40 * fRam0000000146acab7c) * fVar43 +
             fVar43;
    auVar24._4_4_ = fStack_1f4;
    auVar24._0_4_ = local_1f8;
    auVar24._8_4_ = fStack_1f0;
    fVar47 = (float)(((uint)(((_DAT_146acab70 - fVar47 * fVar47 * fVar41 * _DAT_146acab70) * fVar47
                             + fVar47) * (float)local_168) ^ _DAT_146acab60) &
                     -(uint)(1e-08 <= fVar41) ^ _DAT_146acab60);
    fVar49 = (float)(((uint)(((fRam0000000146acab74 -
                              fVar49 * fVar49 * fVar42 * fRam0000000146acab74) * fVar49 + fVar49) *
                            local_168._4_4_) ^ uRam0000000146acab64) & -(uint)(1e-08 <= fVar42) ^
                    uRam0000000146acab64);
    fVar52 = (float)(((uint)(((fRam0000000146acab78 -
                              fVar52 * fVar52 * fVar36 * fRam0000000146acab78) * fVar52 + fVar52) *
                            fStack_160) ^ uRam0000000146acab68) & -(uint)(1e-08 <= fVar36) ^
                    uRam0000000146acab68);
    fVar43 = (float)(((uint)(((fRam0000000146acab7c -
                              fVar43 * fVar43 * fVar40 * fRam0000000146acab7c) * fVar43 + fVar43) *
                            fStack_15c) ^ uRam0000000146acab6c) & -(uint)(1e-08 <= fVar40) ^
                    uRam0000000146acab6c);
    param_1[8] = fVar26 * fVar27;
    param_1[9] = fVar28 * fVar29;
    param_1[10] = fVar30 * fVar31;
    param_1[0xb] = fVar37 * fVar45;
    auVar24._12_4_ = 0;
    *(undefined1 (*) [16])(param_1 + 4) = auVar24;
    *param_1 = fVar47;
    param_1[1] = fVar49;
    param_1[2] = fVar52;
    param_1[3] = fVar43;
    pfVar18 = local_1b8;
    pfVar19 = local_198;
    pfVar22 = local_178;
  }
  if (pfVar22 != (float *)0x0) {
    FMemory::Free(pfVar22);
    pfVar18 = local_1b8;
    pfVar19 = local_198;
  }
  if (local_188 != 0) {
    FMemory::Free();
    pfVar18 = local_1b8;
    pfVar19 = local_198;
  }
  if (pfVar19 != (float *)0x0) {
    FMemory::Free(pfVar19);
    pfVar18 = local_1b8;
  }
  if (local_1a8 != 0) {
    FMemory::Free();
    pfVar18 = local_1b8;
  }
  if (pfVar18 != (float *)0x0) {
    FMemory::Free(pfVar18);
  }
  if (local_1c8 != 0) {
    FMemory::Free();
  }
  if (local_1d8 != (float *)0x0) {
    FMemory::Free();
  }
  if (local_1e8[0] != 0) {
    FMemory::Free();
  }
  return param_1;
}



// FUNCTION 141f7b420 SolveFabrik body=1650 status=ok
// SIG undefined SolveFabrik(void)

undefined8
AnimationCore::SolveFabrik(longlong *param_1,float *param_2,float param_3,float param_4,int param_5)

{
  longlong lVar1;
  undefined8 uVar2;
  float *pfVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  
  uVar2 = 0;
  pfVar3 = (float *)*param_1;
  fVar12 = *param_2 - *pfVar3;
  lVar10 = (longlong)(int)param_1[1];
  fVar11 = param_2[2] - pfVar3[2];
  fVar13 = param_2[1] - pfVar3[1];
  if (fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11 <= param_3 * param_3) {
    lVar6 = lVar10 + -1;
    fVar11 = param_2[1] - pfVar3[lVar6 * 0xe + 1];
    fVar12 = *param_2 - pfVar3[lVar6 * 0xe];
    fVar13 = param_2[2] - pfVar3[lVar6 * 0xe + 2];
    if (param_4 < SQRT(fVar11 * fVar11 + fVar12 * fVar12 + fVar13 * fVar13)) {
      *(undefined8 *)(pfVar3 + lVar6 * 0xe) = *(undefined8 *)param_2;
      pfVar3[lVar6 * 0xe + 2] = param_2[2];
      lVar4 = *param_1;
      lVar9 = (lVar10 + -2) * 0x38;
      iVar7 = 0;
      do {
        lVar8 = lVar10 + -2;
        lVar1 = lVar9;
        if (param_5 <= iVar7) break;
        while (0 < lVar8) {
          lVar4 = *param_1;
          fVar17 = *(float *)(lVar4 + lVar1) - *(float *)(lVar4 + 0x38 + lVar1);
          fVar16 = *(float *)(lVar4 + 4 + lVar1) - *(float *)(lVar4 + 0x3c + lVar1);
          fVar15 = *(float *)(lVar4 + 8 + lVar1) - *(float *)(lVar4 + 0x40 + lVar1);
          fVar12 = fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15;
          auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
          fVar13 = auVar14._0_4_;
          fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
          fVar11 = *(float *)(lVar4 + 0x44 + lVar1);
          fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
          *(ulonglong *)(lVar4 + lVar1) =
               CONCAT44(fVar16 * fVar13 * fVar11 + *(float *)(lVar4 + 0x3c + lVar1),
                        fVar17 * fVar13 * fVar11 + *(float *)(lVar4 + 0x38 + lVar1));
          *(float *)(lVar4 + 8 + lVar1) =
               fVar15 * fVar13 * fVar11 + *(float *)(lVar4 + 0x40 + lVar1);
          lVar8 = lVar8 + -1;
          lVar1 = lVar1 + -0x38;
        }
        lVar8 = 1;
        lVar4 = 0x38;
        if (1 < lVar6) {
          do {
            lVar1 = *param_1;
            lVar8 = lVar8 + 1;
            fVar17 = *(float *)(lVar1 + lVar4) - *(float *)(lVar1 + -0x38 + lVar4);
            fVar16 = *(float *)(lVar1 + 4 + lVar4) - *(float *)(lVar1 + -0x34 + lVar4);
            fVar15 = *(float *)(lVar1 + 8 + lVar4) - *(float *)(lVar1 + -0x30 + lVar4);
            fVar12 = fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15;
            auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
            fVar13 = auVar14._0_4_;
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            fVar11 = *(float *)(lVar1 + 0xc + lVar4);
            fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
            *(ulonglong *)(lVar1 + lVar4) =
                 CONCAT44(fVar16 * fVar13 * fVar11 + *(float *)(lVar1 + -0x34 + lVar4),
                          fVar17 * fVar13 * fVar11 + *(float *)(lVar1 + -0x38 + lVar4));
            *(float *)(lVar1 + 8 + lVar4) =
                 fVar15 * fVar13 * fVar11 + *(float *)(lVar1 + -0x30 + lVar4);
            lVar4 = lVar4 + 0x38;
          } while (lVar8 < lVar6);
        }
        lVar4 = *param_1;
        fVar12 = *param_2 - *(float *)(lVar9 + lVar4);
        fVar13 = param_2[1] - *(float *)(lVar9 + 4 + lVar4);
        fVar11 = param_2[2] - *(float *)(lVar9 + 8 + lVar4);
        iVar7 = iVar7 + 1;
      } while (param_4 < ABS(*(float *)(lVar4 + 0xc + lVar6 * 0x38) -
                             SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar11 * fVar11)));
      pfVar5 = (float *)(lVar6 * 0x38 + lVar4);
      pfVar3 = (float *)((lVar10 + -2) * 0x38 + lVar4);
      fVar15 = *pfVar5 - *pfVar3;
      fVar16 = pfVar5[1] - pfVar3[1];
      fVar17 = pfVar5[2] - pfVar3[2];
      fVar12 = fVar16 * fVar16 + fVar15 * fVar15 + fVar17 * fVar17;
      auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
      fVar13 = auVar14._0_4_;
      fVar11 = pfVar5[3];
      fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
      fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
      fVar12 = pfVar3[2];
      *(ulonglong *)pfVar5 =
           CONCAT44(fVar13 * fVar16 * fVar11 + pfVar3[1],fVar13 * fVar15 * fVar11 + *pfVar3);
      pfVar5[2] = fVar13 * fVar17 * fVar11 + fVar12;
      uVar2 = 1;
    }
  }
  else {
    if (1 < lVar10) {
      lVar10 = lVar10 + -1;
      lVar6 = 0x38;
      do {
        lVar4 = *param_1;
        fVar17 = *param_2 - *(float *)(lVar4 + -0x38 + lVar6);
        fVar16 = param_2[1] - *(float *)(lVar4 + -0x34 + lVar6);
        fVar15 = param_2[2] - *(float *)(lVar4 + -0x30 + lVar6);
        fVar12 = fVar16 * fVar16 + fVar17 * fVar17 + fVar15 * fVar15;
        auVar14 = rsqrtss(ZEXT416((uint)fVar12),ZEXT416((uint)fVar12));
        fVar13 = auVar14._0_4_;
        fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
        fVar11 = *(float *)(lVar4 + 0xc + lVar6);
        fVar13 = fVar13 + fVar13 * (0.5 - fVar12 * 0.5 * fVar13 * fVar13);
        *(ulonglong *)(lVar4 + lVar6) =
             CONCAT44(fVar16 * fVar13 * fVar11 + *(float *)(lVar4 + -0x34 + lVar6),
                      fVar17 * fVar13 * fVar11 + *(float *)(lVar4 + -0x38 + lVar6));
        *(float *)(lVar4 + 8 + lVar6) = fVar15 * fVar13 * fVar11 + *(float *)(lVar4 + -0x30 + lVar6)
        ;
        lVar6 = lVar6 + 0x38;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
    }
    uVar2 = 1;
  }
  return uVar2;
}



// FUNCTION 141f7baa0 FUN_141f7baa0 body=2466 status=ok
// SIG undefined FUN_141f7baa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f7baa0(longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  float param_5,float param_6,undefined8 *param_7,float param_8,float param_9,
                  float param_10,int param_11,undefined8 *param_12,longlong *param_13,
                  longlong *param_14,float param_15,longlong *param_16)

{
  float *pfVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined8 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong lVar15;
  undefined1 (*pauVar16) [12];
  float *pfVar17;
  longlong *plVar18;
  int iVar19;
  longlong *plVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar37;
  float fVar38;
  undefined1 auVar36 [16];
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined8 local_1a8;
  float local_1a0;
  undefined8 local_198;
  float local_190;
  float local_188;
  float fStack_184;
  float local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  longlong local_138 [2];
  longlong local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined1 local_e8 [168];
  
  plVar13 = param_16;
  plVar20 = (longlong *)0x0;
  *(undefined4 *)(param_16 + 1) = 0;
  if ((*(int *)((longlong)param_16 + 0xc) < 0) && (*(int *)((longlong)param_16 + 0xc) != 0)) {
    TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<48,8>_>,TSizedDefaultAllocator<32>_>::
    ResizeTo(param_16,0);
  }
  puVar12 = param_12;
  uVar43 = 0;
  lVar15 = *param_2;
  param_16._0_4_ = 0;
  fVar41 = ((param_6 - param_15) * param_9 + param_15) / param_15;
  if (param_10 == 0.0) {
    local_168 = *(undefined8 *)(lVar15 + 4);
    local_160 = *(float *)(lVar15 + 0xc);
  }
  else {
    plVar18 = plVar20;
    if (*(int *)(param_12 + 1) != 0) {
      plVar18 = (longlong *)*param_12;
    }
    uVar43 = (**(code **)(*plVar18 + 0x38))(param_15,lVar15 + 4,param_10,&param_16);
    local_1a8 = 0;
    local_1a0 = 0.0;
    puVar14 = (undefined8 *)FInterpCurve<FVector>::Eval(param_2,&local_158,uVar43,&local_1a8);
    local_168 = *puVar14;
    local_160 = *(float *)(puVar14 + 1);
  }
  iVar23 = (int)param_1[1];
  uStack_170 = &param_6;
  param_6 = (float)((uint)param_6 & 0xffffff00);
  local_178 = &LAB_141f794c0;
  lVar15 = FUN_1415d8310();
  iVar2 = *(int *)(lVar15 + 0x20);
  if (iVar2 < iVar23) {
    *(int *)(lVar15 + 0x20) = iVar23;
    if (*(int *)(lVar15 + 0x24) < iVar23) {
      TArray<unsigned_int,FDefaultAllocator>::ResizeGrow(lVar15 + 0x18);
    }
    _guard_xfg_dispatch_icall_nop
              ((void *)(*(longlong *)(lVar15 + 0x18) + (longlong)iVar2 * 4),0,
               (longlong)(iVar23 - iVar2) << 2);
  }
  else if ((iVar23 < iVar2) && (iVar23 != iVar2)) {
    *(int *)(lVar15 + 0x20) = iVar23;
    TArray<enum_EJson,FDefaultAllocator>::ResizeShrink();
  }
  iVar2 = (int)plVar13[1];
  if (iVar2 < iVar23) {
    *(int *)(plVar13 + 1) = iVar23;
    iVar19 = iVar23 - iVar2;
    if (*(int *)((longlong)plVar13 + 0xc) < iVar23) {
      TArray<FTransform,FDefaultAllocator>::ResizeGrow(plVar13,iVar2);
    }
    uVar11 = uRam0000000146acab4c;
    uVar10 = uRam0000000146acab48;
    uVar9 = uRam0000000146acab44;
    uVar8 = _DAT_146acab40;
    puVar7 = (undefined4 *)((longlong)iVar2 * 0x30 + *plVar13);
    uVar25 = uRam0000000146acab5c;
    for (; uRam0000000146acab5c = uVar25, iVar19 != 0; iVar19 = iVar19 + -1) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = uVar25;
      *(undefined8 *)(puVar7 + 4) = 0;
      *(undefined8 *)(puVar7 + 6) = 0;
      uVar25 = uRam0000000146acab54 & uVar9;
      uVar26 = uRam0000000146acab58 & uVar10;
      uVar27 = uRam0000000146acab5c & uVar11;
      puVar7[8] = _DAT_146acab50 & uVar8;
      puVar7[9] = uVar25;
      puVar7[10] = uVar26;
      puVar7[0xb] = uVar27;
      puVar7 = puVar7 + 0xc;
      uVar25 = uRam0000000146acab5c;
    }
  }
  else if ((iVar23 < iVar2) && (iVar23 != iVar2)) {
    *(int *)(plVar13 + 1) = iVar23;
    TArray<FCloudFile,FDefaultAllocator>::ResizeShrink();
  }
  local_128 = (longlong)iVar23;
  if (0 < iVar23) {
    local_1a8 = 0;
    local_1a0 = 0.0;
    local_198 = 0;
    local_190 = 0.0;
    plVar18 = plVar20;
    do {
      uVar24 = uVar43;
      if (0 < (longlong)plVar20) {
        fVar28 = fVar41 * *(float *)(*param_14 + (longlong)plVar20 * 4);
        if (*(int *)(puVar12 + 1) == 0) {
          uVar24 = (**(code **)(_DAT_00000000 + 0x38))(0,&local_168,fVar28,&param_16);
        }
        else {
          plVar3 = (longlong *)*puVar12;
          uVar24 = (**(code **)(*plVar3 + 0x38))(plVar3,&local_168,fVar28,&param_16);
        }
      }
      *(undefined4 *)(*(longlong *)(lVar15 + 0x18) + (longlong)plVar20 * 4) = uVar24;
      lVar22 = *plVar13;
      pauVar16 = (undefined1 (*) [12])
                 FInterpCurve<FVector>::Eval
                           (param_2,&local_188,
                            *(undefined4 *)(*(longlong *)(lVar15 + 0x18) + (longlong)plVar20 * 4),
                            &local_1a8);
      fVar28 = *(float *)(*pauVar16 + 8);
      uVar6 = *(undefined8 *)*pauVar16;
      auVar5._12_4_ = 0;
      auVar5._0_12_ = *pauVar16;
      *(undefined1 (*) [16])((longlong)plVar18 + lVar22 + 0x10) = auVar5;
      pauVar16 = (undefined1 (*) [12])
                 FInterpCurve<FVector>::Eval
                           (param_4,local_138,
                            *(undefined4 *)(*(longlong *)(lVar15 + 0x18) + (longlong)plVar20 * 4),
                            &local_198);
      plVar20 = (longlong *)((longlong)plVar20 + 1);
      auVar36._12_4_ = 0;
      auVar36._0_12_ = *pauVar16;
      *(undefined1 (*) [16])((longlong)plVar18 + lVar22 + 0x20) = auVar36;
      plVar18 = plVar18 + 6;
      local_168 = uVar6;
      local_160 = fVar28;
      local_150 = fVar28;
    } while ((longlong)plVar20 < local_128);
    iVar23 = (int)local_128;
  }
  iVar2 = param_11;
  fVar41 = param_8;
  puVar12 = param_7;
  lVar22 = 0;
  param_15 = 0.0;
  if (0 < local_128) {
    param_9 = (float)(iVar23 + -1);
    lVar21 = 0;
    local_138[0] = 0x10;
    local_118 = 0;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0x3f800000;
    do {
      lVar4 = *plVar13;
      FUN_141f794d0(param_3,&local_f8,*(undefined4 *)(*(longlong *)(lVar15 + 0x18) + lVar22 * 4),
                    &local_118);
      if (*(int *)(puVar12 + 1) == 0) {
        plVar20 = (longlong *)0x0;
      }
      else {
        plVar20 = (longlong *)*puVar12;
      }
      local_158 = (float)(**(code **)(*plVar20 + 0x38))
                                   (plVar20,(1.0 / param_5) *
                                            *(float *)(*(longlong *)(lVar15 + 0x18) + lVar22 * 4));
      local_158 = local_158 + fVar41;
      if (iVar2 == 3) {
        local_154 = 0.0;
        local_150 = local_158;
LAB_141f7bf1e:
        local_158 = 0.0;
      }
      else {
        local_150 = 0.0;
        local_154 = local_158;
        if ((iVar2 == 1) || (local_154 = 0.0, iVar2 != 2)) goto LAB_141f7bf1e;
      }
      FRotator::Quaternion(&local_158,&local_108);
      local_148 = DAT_1464aa810;
      fStack_144 = DAT_1464aa814;
      fStack_140 = DAT_1464aa818;
      fStack_13c = DAT_1464aa81c;
      local_178 = (undefined1 *)CONCAT44(DAT_1464aa814,DAT_1464aa810);
      uStack_170 = (undefined4 *)CONCAT44(DAT_1464aa81c,DAT_1464aa818);
      fVar28 = DAT_1464aa810;
      fVar40 = DAT_1464aa814;
      fVar42 = DAT_1464aa818;
      fVar34 = DAT_1464aa81c;
      if ((int)param_15 < (int)param_9) {
        pfVar17 = (float *)(lVar21 + 0x10 + lVar4);
        pfVar1 = (float *)(lVar21 + 0x40 + *plVar13);
        fVar42 = *pfVar1 - *pfVar17;
        fVar40 = pfVar1[1] - pfVar17[1];
        local_1a0 = pfVar1[2] - pfVar17[2];
        local_1a8 = CONCAT44(fVar40,fVar42);
        fVar28 = fVar40 * fVar40 + fVar42 * fVar42 + local_1a0 * local_1a0;
        if (1e-08 < fVar28) {
          auVar36 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
          fVar34 = auVar36._0_4_;
          fVar34 = fVar34 + fVar34 * (0.5 - fVar28 * 0.5 * fVar34 * fVar34);
          fVar34 = fVar34 + fVar34 * (0.5 - fVar28 * 0.5 * fVar34 * fVar34);
          local_1a0 = local_1a0 * fVar34;
          local_1a8 = CONCAT44(fVar40 * fVar34,fVar42 * fVar34);
          pfVar17 = (float *)(lVar21 + 0x30 + *param_1);
          fVar28 = *pfVar17;
          fVar40 = pfVar17[1];
          fVar42 = pfVar17[2];
          fVar34 = pfVar17[3];
          if (iVar2 == 1) {
            fVar29 = fVar40 * 0.0 - fVar42 * 0.0;
            fVar30 = fVar42 * 1.0 - fVar28 * 0.0;
            fVar31 = fVar28 * 0.0 - fVar40 * 1.0;
            fVar29 = fVar29 + fVar29;
            fVar30 = fVar30 + fVar30;
            fVar31 = fVar31 + fVar31;
            local_188 = (fVar31 * fVar40 - fVar30 * fVar42) + fVar34 * fVar29 + 1.0;
            fStack_184 = (fVar29 * fVar42 - fVar31 * fVar28) + fVar34 * fVar30 + 0.0;
            local_180 = (fVar30 * fVar28 - fVar29 * fVar40) + fVar34 * fVar31 + 0.0;
          }
          else {
            if (iVar2 == 2) {
              fVar29 = 1.0;
              fVar30 = 0.0;
            }
            else {
              fVar29 = 0.0;
              fVar30 = 1.0;
            }
            fVar31 = fVar30 * fVar40 - fVar29 * fVar42;
            fVar32 = fVar42 * 0.0 - fVar30 * fVar28;
            fVar33 = fVar29 * fVar28 - fVar40 * 0.0;
            fVar31 = fVar31 + fVar31;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            local_188 = (fVar33 * fVar40 - fVar32 * fVar42) + fVar34 * fVar31 + 0.0;
            fStack_184 = (fVar31 * fVar42 - fVar33 * fVar28) + fVar34 * fVar32 + fVar29;
            local_180 = (fVar32 * fVar28 - fVar31 * fVar40) + fVar34 * fVar33 + fVar30;
          }
          fVar28 = fStack_184 * fStack_184 + local_188 * local_188 + local_180 * local_180;
          if (fVar28 == 1.0) {
            local_198 = CONCAT44(fStack_184,local_188);
            local_190 = local_180;
          }
          else if (1e-08 <= fVar28) {
            auVar36 = rsqrtss(ZEXT416((uint)fVar28),ZEXT416((uint)fVar28));
            fVar40 = auVar36._0_4_;
            fVar40 = fVar40 + fVar40 * (0.5 - fVar28 * 0.5 * fVar40 * fVar40);
            fVar40 = fVar40 + fVar40 * (0.5 - fVar28 * 0.5 * fVar40 * fVar40);
            local_190 = local_180 * fVar40;
            local_198 = CONCAT44(fStack_184 * fVar40,local_188 * fVar40);
          }
          else {
            local_190 = DAT_1468b5d98;
            local_198 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
          }
          pfVar17 = (float *)FQuat::FindBetweenNormals(local_e8,&local_198,&local_1a8);
          local_148 = *pfVar17;
          fStack_144 = pfVar17[1];
          fStack_140 = pfVar17[2];
          fStack_13c = pfVar17[3];
        }
        pfVar17 = (float *)(local_138[0] + *param_13);
        local_178 = *(undefined1 **)pfVar17;
        uStack_170 = *(undefined4 **)(pfVar17 + 2);
        fVar28 = *pfVar17;
        fVar40 = pfVar17[1];
        fVar42 = pfVar17[2];
        fVar34 = pfVar17[3];
      }
      param_15 = (float)((int)param_15 + 1);
      local_138[0] = local_138[0] + 0x10;
      lVar22 = lVar22 + 1;
      fVar29 = fStack_13c * local_108 * _DAT_146acaba0 + fStack_fc * local_148 +
               fStack_140 * fStack_104 * _DAT_146acab90 + fStack_144 * fStack_100 * _DAT_146acab80;
      fVar30 = fStack_140 * local_108 * fRam0000000146acaba4 + fStack_fc * fStack_144 +
               fStack_13c * fStack_104 * fRam0000000146acab94 +
               local_148 * fStack_100 * fRam0000000146acab84;
      fVar31 = fStack_144 * local_108 * fRam0000000146acaba8 + fStack_fc * fStack_140 +
               local_148 * fStack_104 * fRam0000000146acab98 +
               fStack_13c * fStack_100 * fRam0000000146acab88;
      fVar32 = local_148 * local_108 * fRam0000000146acabac + fStack_fc * fStack_13c +
               fStack_144 * fStack_104 * fRam0000000146acab9c +
               fStack_140 * fStack_100 * fRam0000000146acab8c;
      fVar35 = fVar34 * fVar29 * _DAT_146acaba0 + fVar32 * fVar28 + fVar42 * fVar30 * _DAT_146acab90
               + fVar40 * fVar31 * _DAT_146acab80;
      fVar37 = fVar42 * fVar29 * fRam0000000146acaba4 + fVar32 * fVar40 +
               fVar34 * fVar30 * fRam0000000146acab94 + fVar28 * fVar31 * fRam0000000146acab84;
      fVar38 = fVar40 * fVar29 * fRam0000000146acaba8 + fVar32 * fVar42 +
               fVar28 * fVar30 * fRam0000000146acab98 + fVar34 * fVar31 * fRam0000000146acab88;
      fVar39 = fVar28 * fVar29 * fRam0000000146acabac + fVar32 * fVar34 +
               fVar40 * fVar30 * fRam0000000146acab9c + fVar42 * fVar31 * fRam0000000146acab8c;
      fVar31 = fStack_f0 * fVar35 * fRam0000000146acaba4;
      fVar32 = fStack_f4 * fVar35 * fRam0000000146acaba8;
      fVar33 = local_f8 * fVar35 * fRam0000000146acabac;
      fVar28 = fStack_ec * fVar37 * fRam0000000146acab94;
      fVar40 = local_f8 * fVar37 * fRam0000000146acab98;
      fVar42 = fStack_f4 * fVar37 * fRam0000000146acab9c;
      fVar34 = local_f8 * fVar38 * fRam0000000146acab84;
      fVar29 = fStack_ec * fVar38 * fRam0000000146acab88;
      fVar30 = fStack_f0 * fVar38 * fRam0000000146acab8c;
      pfVar17 = (float *)(lVar21 + lVar4);
      *pfVar17 = fStack_ec * fVar35 * _DAT_146acaba0 + fVar39 * local_f8 +
                 fStack_f0 * fVar37 * _DAT_146acab90 + fStack_f4 * fVar38 * _DAT_146acab80;
      pfVar17[1] = fVar31 + fVar39 * fStack_f4 + fVar28 + fVar34;
      pfVar17[2] = fVar32 + fVar39 * fStack_f0 + fVar40 + fVar29;
      pfVar17[3] = fVar33 + fVar39 * fStack_ec + fVar42 + fVar30;
      lVar21 = lVar21 + 0x30;
    } while (lVar22 < local_128);
  }
  return;
}



// FUNCTION 141f7c450 SolveTwoBoneIK body=1705 status=ok
// SIG undefined SolveTwoBoneIK(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void AnimationCore::SolveTwoBoneIK
               (float *param_1,float *param_2,longlong param_3,undefined4 param_4,undefined8 param_5
               ,undefined4 param_6,undefined4 param_7,undefined1 param_8,undefined4 param_9,
               undefined4 param_10)

{
  float fVar1;
  undefined1 auVar2 [16];
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
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  local_e8 = *(undefined8 *)(param_3 + 0x10);
  uStack_e0 = *(undefined8 *)(param_3 + 0x18);
  auVar18 = *(undefined1 (*) [16])(param_1 + 4);
  fVar7 = auVar18._0_4_;
  fVar17 = auVar18._4_4_;
  fVar1 = auVar18._8_4_;
  fVar3 = param_2[4];
  fVar6 = param_2[5];
  fVar4 = param_2[6];
  local_128 = fVar7;
  local_124 = fVar17;
  local_120 = fVar1;
  local_118 = fVar3;
  local_114 = fVar6;
  local_110 = fVar4;
  local_c8 = fVar6;
  fStack_c4 = fVar6;
  fStack_c0 = fVar6;
  fStack_bc = fVar6;
  local_b8 = fVar4;
  fStack_b4 = fVar4;
  fStack_b0 = fVar4;
  fStack_ac = fVar4;
  SolveTwoBoneIK(&local_128,&local_118,&local_f8,param_4,param_5,&local_108,&local_f8,param_6,
                 param_7,param_8,param_9,param_10);
  local_114 = fVar6 - fVar17;
  local_110 = fVar4 - fVar1;
  local_118 = fVar3 - fVar7;
  fVar6 = local_114 * local_114 + local_118 * local_118 + local_110 * local_110;
  if (fVar6 != 1.0) {
    if (1e-08 <= fVar6) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar4 = auVar19._0_4_;
      fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
      fVar4 = fVar4 + fVar4 * (0.5 - fVar6 * 0.5 * fVar4 * fVar4);
      local_118 = local_118 * fVar4;
      local_114 = local_114 * fVar4;
      local_110 = local_110 * fVar4;
    }
    else {
      local_118 = DAT_1468b5d90;
      local_114 = DAT_1468b5d94;
      local_110 = DAT_1468b5d98;
    }
  }
  local_128 = local_108 - fVar7;
  local_124 = local_104 - fVar17;
  local_120 = local_100 - fVar1;
  fVar7 = local_124 * local_124 + local_128 * local_128 + local_120 * local_120;
  if (fVar7 != 1.0) {
    if (1e-08 <= fVar7) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar17 = auVar19._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      local_128 = local_128 * fVar17;
      local_124 = local_124 * fVar17;
      local_120 = local_120 * fVar17;
    }
    else {
      local_128 = DAT_1468b5d90;
      local_124 = DAT_1468b5d94;
      local_120 = DAT_1468b5d98;
    }
  }
  FQuat::FindBetweenNormals(&local_d8,&local_118,&local_128);
  fVar7 = *param_1;
  fVar17 = param_1[1];
  fVar1 = param_1[2];
  fVar6 = param_1[3];
  local_128 = (float)local_e8 - fVar3;
  local_124 = local_e8._4_4_ - local_c8;
  local_120 = (float)uStack_e0 - local_b8;
  fVar11 = fVar1 * local_d8 * fRam0000000146acaba4;
  fVar13 = fVar17 * local_d8 * fRam0000000146acaba8;
  fVar15 = fVar7 * local_d8 * fRam0000000146acabac;
  fVar8 = fVar7 * fStack_d0 * fRam0000000146acab84;
  fVar9 = fVar6 * fStack_d0 * fRam0000000146acab88;
  fVar10 = fVar1 * fStack_d0 * fRam0000000146acab8c;
  fVar3 = fVar6 * fStack_d4 * fRam0000000146acab94;
  fVar4 = fVar7 * fStack_d4 * fRam0000000146acab98;
  fVar5 = fVar17 * fStack_d4 * fRam0000000146acab9c;
  *param_1 = fVar6 * local_d8 * _DAT_146acaba0 + fStack_cc * fVar7 +
             fVar1 * fStack_d4 * _DAT_146acab90 + fVar17 * fStack_d0 * _DAT_146acab80;
  param_1[1] = fVar11 + fStack_cc * fVar17 + fVar3 + fVar8;
  param_1[2] = fVar13 + fStack_cc * fVar1 + fVar4 + fVar9;
  param_1[3] = fVar15 + fStack_cc * fVar6 + fVar5 + fVar10;
  auVar19._12_4_ = 0;
  auVar19._0_12_ = auVar18._0_12_;
  *(undefined1 (*) [16])(param_1 + 4) = auVar19;
  fVar7 = local_124 * local_124 + local_128 * local_128 + local_120 * local_120;
  if (fVar7 != 1.0) {
    if (fVar7 < 1e-08) {
      local_128 = DAT_1468b5d90;
      local_124 = DAT_1468b5d94;
      local_120 = DAT_1468b5d98;
    }
    else {
      auVar18 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar17 = auVar18._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      local_128 = local_128 * fVar17;
      local_124 = local_124 * fVar17;
      local_120 = local_120 * fVar17;
    }
  }
  local_118 = local_f8 - local_108;
  auVar18._4_4_ = local_104;
  auVar18._0_4_ = local_108;
  auVar18._8_4_ = local_100;
  local_114 = local_f4 - local_104;
  local_110 = local_f0 - local_100;
  fVar7 = local_114 * local_114 + local_118 * local_118 + local_110 * local_110;
  if (fVar7 != 1.0) {
    if (1e-08 <= fVar7) {
      auVar19 = rsqrtss(ZEXT416((uint)fVar7),ZEXT416((uint)fVar7));
      fVar17 = auVar19._0_4_;
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      fVar17 = fVar17 + fVar17 * (0.5 - fVar7 * 0.5 * fVar17 * fVar17);
      local_118 = fVar17 * local_118;
      local_114 = fVar17 * local_114;
      local_110 = fVar17 * local_110;
    }
    else {
      local_118 = DAT_1468b5d90;
      local_114 = DAT_1468b5d94;
      local_110 = DAT_1468b5d98;
    }
  }
  FQuat::FindBetweenNormals(&local_b8,&local_128,&local_118);
  fVar7 = *param_2;
  fVar17 = param_2[1];
  fVar1 = param_2[2];
  fVar3 = param_2[3];
  fVar15 = fVar3 * local_b8 * _DAT_146acaba0;
  fVar12 = fVar1 * local_b8 * fRam0000000146acaba4;
  fVar14 = fVar17 * local_b8 * fRam0000000146acaba8;
  fVar16 = fVar7 * local_b8 * fRam0000000146acabac;
  fVar9 = fVar17 * fStack_b0 * _DAT_146acab80;
  fVar10 = fVar7 * fStack_b0 * fRam0000000146acab84;
  fVar11 = fVar3 * fStack_b0 * fRam0000000146acab88;
  fVar13 = fVar1 * fStack_b0 * fRam0000000146acab8c;
  fVar6 = fVar1 * fStack_b4 * _DAT_146acab90;
  fVar4 = fVar3 * fStack_b4 * fRam0000000146acab94;
  fVar5 = fVar7 * fStack_b4 * fRam0000000146acab98;
  fVar8 = fVar17 * fStack_b4 * fRam0000000146acab9c;
  auVar18._12_4_ = 0;
  *(undefined1 (*) [16])(param_2 + 4) = auVar18;
  *param_2 = fVar15 + fStack_ac * fVar7 + fVar6 + fVar9;
  param_2[1] = fVar12 + fStack_ac * fVar17 + fVar4 + fVar10;
  param_2[2] = fVar14 + fStack_ac * fVar1 + fVar5 + fVar11;
  param_2[3] = fVar16 + fStack_ac * fVar3 + fVar8 + fVar13;
  auVar2._4_4_ = local_f4;
  auVar2._0_4_ = local_f8;
  auVar2._8_4_ = local_f0;
  auVar2._12_4_ = 0;
  *(undefined1 (*) [16])(param_3 + 0x10) = auVar2;
  return;
}



// FUNCTION 141f7cb00 SolveTwoBoneIK body=239 status=ok
// SIG undefined SolveTwoBoneIK(void)

void AnimationCore::SolveTwoBoneIK(void)

{
  SolveTwoBoneIK();
  return;
}



// FUNCTION 141f7cbf0 SolveTwoBoneIK body=1597 status=ok
// SIG undefined SolveTwoBoneIK(void)

void AnimationCore::SolveTwoBoneIK
               (float *param_1,undefined8 *param_2,undefined8 param_3,float *param_4,
               undefined8 *param_5,undefined8 *param_6,undefined8 *param_7,float param_8,
               float param_9,char param_10,float param_11,float param_12)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float local_e8;
  float fStack_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  
  fVar10 = 0.0;
  uVar1 = *param_5;
  fVar11 = *(float *)(param_5 + 1);
  local_e8 = (float)uVar1 - *param_1;
  fStack_e4 = (float)((ulonglong)uVar1 >> 0x20) - param_1[1];
  local_e0 = fVar11 - param_1[2];
  fVar3 = param_8 + param_9;
  fVar5 = fStack_e4 * fStack_e4 + local_e8 * local_e8 + local_e0 * local_e0;
  fVar9 = SQRT(fVar5);
  if (0.0001 <= fVar9) {
    if (fVar5 != 1.0) {
      if (1e-08 <= fVar5) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
        fVar12 = auVar8._0_4_;
        fVar12 = fVar12 + fVar12 * (0.5 - fVar5 * 0.5 * fVar12 * fVar12);
        fVar12 = fVar12 + fVar12 * (0.5 - fVar5 * 0.5 * fVar12 * fVar12);
        local_e8 = local_e8 * fVar12;
        fStack_e4 = fStack_e4 * fVar12;
        local_e0 = local_e0 * fVar12;
      }
      else {
        local_e0 = DAT_1468b5d98;
        local_e8 = DAT_1468b5d90;
        fStack_e4 = DAT_1468b5d94;
      }
    }
  }
  else {
    local_e8 = 1.0;
    fStack_e4 = 0.0;
    local_e0 = 0.0;
    fVar9 = 0.0001;
  }
  fVar5 = *param_4 - *param_1;
  fVar12 = param_4[1] - param_1[1];
  fVar13 = param_4[2] - param_1[2];
  local_c8 = uVar1;
  local_c0 = fVar11;
  if (9.999999e-09 <= fVar12 * fVar12 + fVar5 * fVar5 + fVar13 * fVar13) {
    local_d8 = fStack_e4 * fVar13 - local_e0 * fVar12;
    local_d4 = local_e0 * fVar5 - local_e8 * fVar13;
    local_d0 = local_e8 * fVar12 - fStack_e4 * fVar5;
    if (9.999999e-09 <= local_d4 * local_d4 + local_d8 * local_d8 + local_d0 * local_d0) {
      fVar6 = fStack_e4 * fVar12 + local_e8 * fVar5 + local_e0 * fVar13;
      fVar5 = fVar5 - local_e8 * fVar6;
      fVar12 = fVar12 - fStack_e4 * fVar6;
      fVar13 = fVar13 - local_e0 * fVar6;
      fVar6 = fVar12 * fVar12 + fVar5 * fVar5 + fVar13 * fVar13;
      if (1e-08 < fVar6) {
        auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
        fVar7 = auVar8._0_4_;
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar7 = fVar7 + fVar7 * (0.5 - fVar6 * 0.5 * fVar7 * fVar7);
        fVar5 = fVar5 * fVar7;
        fVar12 = fVar12 * fVar7;
        fVar13 = fVar13 * fVar7;
      }
    }
    else {
      FVector::FindBestAxisVectors(&local_e8,&local_d8,&local_c8);
      fVar5 = (float)local_c8;
      fVar12 = local_c8._4_4_;
      fVar13 = local_c0;
    }
  }
  else {
    fVar5 = 0.0;
    fVar12 = 1.0;
    fVar13 = 0.0;
  }
  fVar2 = local_e0;
  fVar7 = fStack_e4;
  fVar6 = local_e8;
  if (((param_10 != '\0') && (0.0001 < param_12 - param_11)) && (0.0001 < fVar3)) {
    fVar4 = (fVar9 / fVar3 - param_11) / (param_12 - param_11);
    if (0.0 <= fVar4) {
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
    }
    else {
      fVar4 = 0.0;
    }
    fVar4 = (param_12 - 1.0) * fVar4;
    if (0.0001 < fVar4) {
      fVar4 = fVar4 + 1.0;
      param_9 = param_9 * fVar4;
      param_8 = param_8 * fVar4;
      fVar3 = fVar3 * fVar4;
    }
  }
  *param_7 = uVar1;
  *(float *)(param_7 + 1) = fVar11;
  *param_6 = *param_2;
  *(undefined4 *)(param_6 + 1) = *(undefined4 *)(param_2 + 1);
  if (fVar9 < fVar3) {
    fVar11 = (param_8 + param_8) * fVar9;
    if (fVar11 == 0.0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = ((fVar9 * fVar9 + param_8 * param_8) - param_9 * param_9) / fVar11;
    }
    fVar9 = -1.0;
    if ((-1.0 <= fVar11) && (fVar9 = fVar11, 1.0 <= fVar11)) {
      fVar9 = 1.0;
    }
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar9);
    fVar9 = ::_guard_xfg_dispatch_icall_nop(fVar9);
    fVar9 = fVar9 * param_8;
    fVar3 = param_8 * param_8 - fVar9 * fVar9;
    if (0.0 < fVar3) {
      fVar10 = SQRT(fVar3);
    }
    if (fVar11 < 0.0) {
      fVar10 = -fVar10;
    }
    fVar3 = fVar6 * fVar10 + *param_1 + fVar5 * fVar9;
    fVar5 = fVar7 * fVar10 + param_1[1] + fVar12 * fVar9;
    fVar11 = fVar2 * fVar10 + param_1[2] + fVar13 * fVar9;
  }
  else {
    fVar11 = param_1[2];
    *param_7 = CONCAT44(fStack_e4 * fVar3 + param_1[1],local_e8 * fVar3 + *param_1);
    *(float *)(param_7 + 1) = local_e0 * fVar3 + fVar11;
    fVar3 = local_e8 * param_8 + *param_1;
    fVar5 = fStack_e4 * param_8 + param_1[1];
    fVar11 = local_e0 * param_8 + param_1[2];
  }
  *param_6 = CONCAT44(fVar5,fVar3);
  *(float *)(param_6 + 1) = fVar11;
  return;
}



// FUNCTION 141f7d230 SolveTwoBoneIK body=228 status=ok
// SIG undefined SolveTwoBoneIK(void)

void AnimationCore::SolveTwoBoneIK(void)

{
  SolveTwoBoneIK();
  return;
}



// FUNCTION 141f7d320 FUN_141f7d320 body=47 status=ok
// SIG undefined FUN_141f7d320(void)

longlong FUN_141f7d320(void)

{
  if (DAT_146acaca8 == 0) {
    UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
  }
  return DAT_146acaca8;
}



// FUNCTION 141f7d350 FUN_141f7d350 body=53 status=ok
// SIG undefined FUN_141f7d350(void)

void FUN_141f7d350(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f2c008;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f7d390 FUN_141f7d390 body=47 status=ok
// SIG undefined FUN_141f7d390(void)

longlong FUN_141f7d390(void)

{
  if (DAT_146acad18 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad18,&PTR_FUN_1464dc090);
  }
  return DAT_146acad18;
}



// FUNCTION 141f7d3c0 FUN_141f7d3c0 body=53 status=ok
// SIG undefined FUN_141f7d3c0(void)

void FUN_141f7d3c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x80;
    *puVar1 = &PTR_FUN_144f2c340;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141f7d400 FUN_141f7d400 body=53 status=ok
// SIG undefined FUN_141f7d400(void)

void FUN_141f7d400(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f2c458;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d440 FUN_141f7d440 body=53 status=ok
// SIG undefined FUN_141f7d440(void)

void FUN_141f7d440(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x40;
    *puVar1 = &PTR_FUN_144f2c570;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d480 FUN_141f7d480 body=53 status=ok
// SIG undefined FUN_141f7d480(void)

void FUN_141f7d480(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x18;
    *puVar1 = &PTR_FUN_144f2c688;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d4c0 FUN_141f7d4c0 body=53 status=ok
// SIG undefined FUN_141f7d4c0(void)

void FUN_141f7d4c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &PTR_FUN_144f2c7a0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d500 FUN_141f7d500 body=53 status=ok
// SIG undefined FUN_141f7d500(void)

void FUN_141f7d500(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x28;
    *puVar1 = &PTR_FUN_144f2c8b8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d540 FUN_141f7d540 body=53 status=ok
// SIG undefined FUN_141f7d540(void)

void FUN_141f7d540(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x60;
    *puVar1 = &PTR_FUN_144f2c9d0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return;
  }
  return;
}



// FUNCTION 141f7d580 NewStructOps body=53 status=ok
// SIG undefined NewStructOps(void)

void Z_Construct_UScriptStruct_FConstraintDescription_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xd;
    *puVar1 = &PTR_FUN_144f2cae8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141f7d5c0 FUN_141f7d5c0 body=53 status=ok
// SIG undefined FUN_141f7d5c0(void)

void FUN_141f7d5c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 9;
    *puVar1 = &PTR_FUN_144f2cc00;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141f7d600 FUN_141f7d600 body=53 status=ok
// SIG undefined FUN_141f7d600(void)

void FUN_141f7d600(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 3;
    *puVar1 = &PTR_FUN_144f2cd18;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 1;
    return;
  }
  return;
}



// FUNCTION 141f7d640 FUN_141f7d640 body=53 status=ok
// SIG undefined FUN_141f7d640(void)

void FUN_141f7d640(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x24;
    *puVar1 = &PTR_FUN_144f2ce30;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return;
  }
  return;
}



// FUNCTION 141f7d680 FUN_141f7d680 body=53 status=ok
// SIG undefined FUN_141f7d680(void)

void FUN_141f7d680(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x78;
    *puVar1 = &PTR_FUN_144f2d0b0;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d6c0 FUN_141f7d6c0 body=53 status=ok
// SIG undefined FUN_141f7d6c0(void)

void FUN_141f7d6c0(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x70;
    *puVar1 = &PTR_FUN_144f2d1c8;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return;
  }
  return;
}



// FUNCTION 141f7d700 FAxis body=324 status=ok
// SIG undefined FAxis(void)

undefined8 * FAxis::FAxis(undefined8 *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  float fVar7;
  
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar7 = param_2[2];
  fVar4 = fVar1 * fVar1 + fVar2 * fVar2 + fVar7 * fVar7;
  if (fVar4 == 1.0) {
    uVar3 = *(undefined8 *)param_2;
    fVar7 = param_2[2];
  }
  else if (1e-08 <= fVar4) {
    auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
    fVar5 = auVar6._0_4_;
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar5 = fVar5 + fVar5 * (0.5 - fVar4 * 0.5 * fVar5 * fVar5);
    fVar7 = fVar7 * fVar5;
    uVar3 = CONCAT44(fVar2 * fVar5,fVar1 * fVar5);
  }
  else {
    uVar3 = CONCAT44(DAT_1468b5d94,DAT_1468b5d90);
    fVar7 = DAT_1468b5d98;
  }
  *param_1 = uVar3;
  *(float *)(param_1 + 1) = fVar7;
  return param_1;
}



// FUNCTION 141f7d850 operator= body=112 status=ok
// SIG undefined operator=(void)

char * FConstraintDescriptor::operator=(char *param_1,char *param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    param_1[0xb] = '\0';
    param_1[0xc] = '\0';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
  }
  *param_1 = *param_2;
  if (*(longlong *)(param_2 + 8) != 0) {
    if (*param_2 == '\0') {
      Set(param_1);
      return param_1;
    }
    if (*param_2 == '\x01') {
      Set(param_1);
    }
  }
  return param_1;
}



// FUNCTION 141f7d8c0 operator= body=524 status=ok
// SIG undefined operator=(void)

undefined8 * FNodeHierarchyData::operator=(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  bool bVar6;
  longlong lVar7;
  int iVar8;
  uint *puVar9;
  longlong *plVar10;
  undefined1 local_res8 [8];
  int local_78;
  uint uStack_74;
  int iStack_70;
  uint uStack_6c;
  undefined8 local_68;
  uint uStack_60;
  int iStack_5c;
  int local_58;
  undefined4 uStack_54;
  longlong *local_50;
  int iStack_48;
  uint uStack_44;
  uint *puStack_40;
  undefined4 uStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  
  if (param_1 != param_2) {
    iVar3 = *(int *)(param_2 + 1);
    pvVar5 = (void *)*param_2;
    *(int *)(param_1 + 1) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      TArray<FString,FDefaultAllocator>::ResizeForCopy(param_1,iVar3);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,pvVar5,(longlong)iVar3 << 4);
    }
  }
  puVar1 = param_1 + 2;
  if (puVar1 != param_2 + 2) {
    iVar3 = *(int *)(param_2 + 3);
    pvVar5 = (void *)param_2[2];
    *(int *)(param_1 + 3) = iVar3;
    if ((iVar3 == 0) && (*(int *)((longlong)param_1 + 0x1c) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
    }
    else {
      TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(puVar1,iVar3);
      ::_guard_xfg_dispatch_icall_nop((void *)*puVar1,pvVar5,(longlong)iVar3 * 0x30);
    }
  }
  plVar2 = param_1 + 4;
  plVar10 = param_2 + 4;
  if (plVar2 != plVar10) {
    TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
    ::Empty(plVar2,*(int *)(param_2 + 5) - *(int *)((longlong)param_2 + 0x54));
    iVar3 = *(int *)(param_2 + 9);
    puStack_40 = (uint *)(param_2 + 6);
    local_78 = 0;
    uStack_74 = 1;
    local_68._4_4_ = 0;
    uStack_60 = 0;
    if (iVar3 != 0) {
      puVar9 = (uint *)param_2[8];
      if ((uint *)param_2[8] == (uint *)0x0) {
        puVar9 = puStack_40;
      }
      uVar4 = *puVar9;
      uStack_60 = 0;
      local_78 = 0;
      while (uVar4 == 0) {
        lVar7 = (longlong)local_78;
        uStack_60 = uStack_60 + 0x20;
        iVar8 = local_78 + 1;
        bVar6 = (int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 <= local_78;
        local_78 = iVar8;
        if (bVar6) goto LAB_141f7da3b;
        uVar4 = puVar9[lVar7 + 1];
      }
      uStack_74 = -uVar4 & uVar4;
      iVar8 = 0x1f;
      if (uStack_74 != 0) {
        for (; uStack_74 >> iVar8 == 0; iVar8 = iVar8 + -1) {
        }
      }
      if (uStack_74 == 0) {
        iVar8 = 0x20;
      }
      else {
        iVar8 = 0x1f - iVar8;
      }
      local_68._4_4_ = (uStack_60 - iVar8) + 0x1f;
      if (iVar3 < local_68._4_4_) {
LAB_141f7da3b:
        local_68._4_4_ = iVar3;
      }
    }
    uStack_38 = 0xffffffff;
    iStack_34 = local_68._4_4_;
    iStack_30 = uStack_60;
    uStack_2c = iStack_5c;
    iStack_48 = local_78;
    uStack_44 = uStack_74;
    iStack_70 = local_78;
    uStack_6c = uStack_74;
    local_58 = uStack_60;
    uStack_54 = iStack_5c;
    uStack_60 = 0xffffffff;
    iStack_5c = local_68._4_4_;
    bVar6 = local_68._4_4_ < iVar3;
    local_50 = plVar10;
    local_68 = puStack_40;
    if (bVar6) {
      do {
        FUN_14084b330(plVar2,local_res8,*plVar10 + (longlong)iStack_5c * 0x18,0);
        uStack_60 = uStack_60 & ~uStack_6c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&iStack_70);
      } while (iStack_5c < (int)local_68[6]);
    }
  }
  return param_1;
}



// FUNCTION 141f7dad0 FUN_141f7dad0 body=43 status=ok
// SIG undefined FUN_141f7dad0(void)

undefined8 * FUN_141f7dad0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f2c120;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x40);
  }
  return param_1;
}



// FUNCTION 141f7db00 FUN_141f7db00 body=43 status=ok
// SIG undefined FUN_141f7db00(void)

undefined8 * FUN_141f7db00(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f2c120;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x10);
  }
  return param_1;
}



// FUNCTION 141f7db30 `scalar_deleting_destructor' body=126 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FNodeHierarchyWithUserData::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR__scalar_deleting_destructor__144f2cf48;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (param_1[0xd] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 5);
  if (param_1[3] != 0) {
    FMemory::Free();
  }
  if (param_1[1] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x78);
  }
  return param_1;
}



// FUNCTION 141f7dbb0 FUN_141f7dbb0 body=43 status=ok
// SIG undefined FUN_141f7dbb0(void)

undefined8 * FUN_141f7dbb0(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_FUN_144f2c120;
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 141f7dbe0 AccumulateConstraintTransform body=82 status=ok
// SIG undefined AccumulateConstraintTransform(void)

void FConstraintDescriptionEx::AccumulateConstraintTransform(void)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/Constraint.h",0x153,L"Pure virtual not implemented (%s)"
             ,L"AccumulateConstraintTransform");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/Constraint.h",0x153,
             L"Pure virtual not implemented (%s)");
  return;
}



// FUNCTION 141f7dc40 BuildNodeNameToIndexMapping body=113 status=ok
// SIG undefined BuildNodeNameToIndexMapping(void)

void FNodeHierarchyData::BuildNodeNameToIndexMapping(longlong *param_1)

{
  int iVar1;
  int local_res8 [2];
  longlong local_res10;
  
  TSet<TTuple<FName,unsigned_char>,TDefaultMapHashableKeyFuncs<FName,unsigned_char,0>,FDefaultSetAllocator>
  ::Empty(param_1 + 4,0);
  iVar1 = 0;
  if (0 < (int)param_1[1]) {
    do {
      local_res10 = (longlong)iVar1 * 0x10 + *param_1;
      TSet<TTuple<FName,int>,TDefaultMapHashableKeyFuncs<FName,int,0>,FDefaultSetAllocator>::
      Emplace<TKeyInitializer<FName_const_&>_>(param_1 + 4,local_res8,&local_res10,0);
      *(int *)(param_1[4] + 8 + (longlong)local_res8[0] * 0x18) = iVar1;
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[1]);
  }
  return;
}



// FUNCTION 141f7dcc0 FUN_141f7dcc0 body=71 status=ok
// SIG undefined FUN_141f7dcc0(void)

void FUN_141f7dcc0(undefined8 param_1,undefined8 *param_2)

{
  *(undefined2 *)(param_2 + 1) = 0x101;
  *(undefined1 *)((longlong)param_2 + 10) = 1;
  *param_2 = &PTR_FUN_144f2c288;
  FAxis::FAxis(param_2 + 2,&DAT_1464aa7a8);
  FAxis::FAxis(param_2 + 4,&DAT_1464aa798);
  *(undefined1 *)(param_2 + 6) = 0;
  return;
}



// FUNCTION 141f7de80 Construct body=91 status=ok
// SIG undefined Construct(void)

void UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>::Construct
               (undefined8 param_1,undefined8 *param_2)

{
  ::_guard_xfg_dispatch_icall_nop(param_2 + 2,0,0x68);
  *param_2 = &PTR__scalar_deleting_destructor__144f2cf48;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  *(undefined4 *)(param_2 + 0xb) = 0xffffffff;
  *(undefined4 *)((longlong)param_2 + 0x5c) = 0;
  param_2[0xd] = 0;
  *(undefined4 *)(param_2 + 0xe) = 0;
  return;
}



// FUNCTION 141f7dfb0 Copy body=158 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FConstraintData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  if (param_4 != 0) {
    param_3 = param_3 - param_2;
    puVar7 = (undefined8 *)(param_2 + 0x40);
    do {
      FConstraintDescriptor::operator=(puVar7 + -8,param_3 + -0x40 + (longlong)puVar7);
      *(undefined4 *)(puVar7 + -6) = *(undefined4 *)(param_3 + -0x30 + (longlong)puVar7);
      *(undefined1 *)((longlong)puVar7 + -0x2c) =
           *(undefined1 *)(param_3 + -0x2c + (longlong)puVar7);
      puVar1 = (undefined8 *)(param_3 + -0x20 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-4] = *puVar1;
      puVar7[-3] = uVar6;
      puVar1 = (undefined8 *)(param_3 + -0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[-2] = *puVar1;
      puVar7[-1] = uVar6;
      uVar6 = ((undefined8 *)(param_3 + (longlong)puVar7))[1];
      *puVar7 = *(undefined8 *)(param_3 + (longlong)puVar7);
      puVar7[1] = uVar6;
      puVar1 = (undefined8 *)(param_3 + 0x10 + (longlong)puVar7);
      uVar6 = puVar1[1];
      puVar7[2] = *puVar1;
      puVar7[3] = uVar6;
      puVar2 = (undefined4 *)(param_3 + 0x20 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 4) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x24) = uVar3;
      *(undefined4 *)(puVar7 + 5) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x2c) = uVar5;
      puVar2 = (undefined4 *)(param_3 + 0x30 + (longlong)puVar7);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(puVar7 + 6) = *puVar2;
      *(undefined4 *)((longlong)puVar7 + 0x34) = uVar3;
      *(undefined4 *)(puVar7 + 7) = uVar4;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = uVar5;
      puVar7 = puVar7 + 0x10;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f7e0c0 Copy body=158 status=ok
// SIG undefined Copy(void)

undefined8
UScriptStruct::TCppStructOps<FConstraintDescriptor>::Copy
          (undefined8 param_1,char *param_2,char *param_3,int param_4)

{
  undefined8 *puVar1;
  
  for (; param_4 != 0; param_4 = param_4 + -1) {
    puVar1 = *(undefined8 **)(param_2 + 8);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
    }
    *param_2 = *param_3;
    if (*(longlong *)(param_3 + 8) != 0) {
      if (*param_3 == '\0') {
        FConstraintDescriptor::Set(param_2);
      }
      else if (*param_3 == '\x01') {
        FConstraintDescriptor::Set(param_2);
      }
    }
    param_3 = param_3 + 0x10;
    param_2 = param_2 + 0x10;
  }
  return 1;
}



// FUNCTION 141f7e1d0 Copy body=71 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNodeHierarchyData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_2 = param_2 - param_3;
    do {
      FNodeHierarchyData::operator=(param_2 + param_3,param_3);
      param_3 = param_3 + 0x70;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f7e220 Copy body=72 status=ok
// SIG undefined Copy(void)

undefined1
UScriptStruct::TCppStructOps<FNodeHierarchyWithUserData>::Copy
          (undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  
  if (param_4 != 0) {
    lVar1 = param_3 + 8;
    do {
      FNodeHierarchyData::operator=(lVar1 + (param_2 - param_3),lVar1);
      lVar1 = lVar1 + 0x78;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 141f7e2f0 Destruct body=42 status=ok
// SIG undefined Destruct(void)

void UScriptStruct::TCppStructOps<FConstraintData>::Destruct(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_2 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_2 + 8) = 0;
  }
  return;
}



// FUNCTION 141f7e320 FUN_141f7e320 body=81 status=ok
// SIG undefined FUN_141f7e320(void)

void FUN_141f7e320(undefined8 param_1,longlong *param_2)

{
  *(undefined4 *)(param_2 + 0xd) = 0;
  if (param_2[0xc] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_2 + 4);
  if (param_2[2] != 0) {
    FMemory::Free();
  }
  if (*param_2 != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f7e3c0 EConstraintType_StaticEnum body=85 status=ok
// SIG undefined EConstraintType_StaticEnum(void)

void EConstraintType_StaticEnum(void)

{
  if (DAT_146acac20 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    DAT_146acac20 = GetStaticEnum(FUN_141f7f420,DAT_146acaca8,L"EConstraintType");
  }
  return;
}



// FUNCTION 141f7e420 ETransformConstraintType_StaticEnum body=85 status=ok
// SIG undefined ETransformConstraintType_StaticEnum(void)

void ETransformConstraintType_StaticEnum(void)

{
  if (DAT_146acac18 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    DAT_146acac18 = GetStaticEnum(FUN_141f7f450,DAT_146acaca8,L"ETransformConstraintType");
  }
  return;
}



// FUNCTION 141f7e480 GetDisplayString body=62 status=ok
// SIG undefined GetDisplayString(void)

undefined8 * FAimConstraintDescription::GetDisplayString(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  param_2[1] = 4;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,&DAT_144f2c2c8,8);
  return param_2;
}



// FUNCTION 141f7e4c0 GetDisplayString body=142 status=ok
// SIG undefined GetDisplayString(void)

undefined8 * FConstraintDescriptionEx::GetDisplayString(undefined8 param_1,undefined8 *param_2)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/Constraint.h",0x163,L"Pure virtual not implemented (%s)"
             ,L"GetDisplayString");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/Constraint.h",0x163,
             L"Pure virtual not implemented (%s)",L"GetDisplayString");
  *param_2 = 0;
  param_2[1] = 5;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
  return param_2;
}



// FUNCTION 141f7e550 GetDisplayString body=271 status=ok
// SIG undefined GetDisplayString(void)

undefined8 * FTransformConstraintDescription::GetDisplayString(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x10);
  *param_2 = 0;
  *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  if (cVar1 == '\0') {
    *(undefined4 *)(param_2 + 1) = 0xc;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Translation",0x18);
    return param_2;
  }
  if (cVar1 == '\x01') {
    *(undefined4 *)(param_2 + 1) = 9;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Rotation",0x12);
    return param_2;
  }
  if (cVar1 == '\x02') {
    *(undefined4 *)(param_2 + 1) = 6;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,L"Scale",0xc);
    return param_2;
  }
  if (cVar1 != '\x03') {
    *(undefined4 *)(param_2 + 1) = 5;
    TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
    FGenericPlatformString::Memcpy(*param_2,&DAT_143f3edc8,10);
    return param_2;
  }
  *(undefined4 *)(param_2 + 1) = 7;
  TArray<wchar_t,FDefaultAllocator>::ResizeGrow(param_2,0);
  FGenericPlatformString::Memcpy(*param_2,L"Parent",0xe);
  return param_2;
}



// FUNCTION 141f7e660 GetGlobalTransform body=120 status=ok
// SIG undefined GetGlobalTransform(void)

longlong FNodeHierarchyWithUserData::GetGlobalTransform(longlong param_1,int param_2)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/NodeHierarchy.h",0xe0,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetGlobalTransform")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/NodeHierarchy.h",0xe0,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetGlobalTransform")
  ;
  return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 141f7e6e0 GetGlobalTransform body=120 status=ok
// SIG undefined GetGlobalTransform(void)

longlong FNodeHierarchyWithUserData::GetGlobalTransform(longlong param_1,int param_2)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/NodeHierarchy.h",0xde,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetGlobalTransform")
  ;
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/NodeHierarchy.h",0xde,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetGlobalTransform")
  ;
  return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 141f7e760 GetLocalTransform body=120 status=ok
// SIG undefined GetLocalTransform(void)

longlong FNodeHierarchyWithUserData::GetLocalTransform(longlong param_1,int param_2)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/NodeHierarchy.h",0xdf,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetLocalTransform");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/NodeHierarchy.h",0xdf,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetLocalTransform");
  return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 141f7e7e0 GetLocalTransform body=120 status=ok
// SIG undefined GetLocalTransform(void)

longlong FNodeHierarchyWithUserData::GetLocalTransform(longlong param_1,int param_2)

{
  LowLevelFatalErrorHandler
            ("Runtime\\AnimationCore/Public/NodeHierarchy.h",0xdd,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetLocalTransform");
  FDebug::AssertFailed
            (&DAT_143f3f584,"Runtime\\AnimationCore/Public/NodeHierarchy.h",0xdd,
             L"Pure virtual not implemented (%s)",L"FNodeHierarchyWithUserData::GetLocalTransform");
  return (longlong)param_2 * 0x30 + *(longlong *)(param_1 + 0x18);
}



// FUNCTION 141f7e860 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC(void)

{
  return 0x7fe696b7;
}



// FUNCTION 141f7e870 FUN_141f7e870 body=6 status=ok
// SIG undefined FUN_141f7e870(void)

undefined8 FUN_141f7e870(void)

{
  return 0x361364c4;
}



// FUNCTION 141f7e880 Get_Z_Construct_UScriptStruct_FConstraintData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraintData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraintData_CRC(void)

{
  return 0xd9595c29;
}



// FUNCTION 141f7e890 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC(void)

{
  return 0x53361eec;
}



// FUNCTION 141f7e8a0 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC(void)

{
  return 0xbfa21a0;
}



// FUNCTION 141f7e8b0 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC(void)

{
  return 0xc6c8d94;
}



// FUNCTION 141f7e8c0 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC(void)

{
  return 0xad0f0b61;
}



// FUNCTION 141f7e8d0 Get_Z_Construct_UScriptStruct_FEulerTransform_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FEulerTransform_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FEulerTransform_CRC(void)

{
  return 0xf76e459b;
}



// FUNCTION 141f7e8e0 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC(void)

{
  return 0x9bea95d;
}



// FUNCTION 141f7e8f0 Get_Z_Construct_UScriptStruct_FNodeChain_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNodeChain_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNodeChain_CRC(void)

{
  return 0x8d0f12a5;
}



// FUNCTION 141f7e900 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC(void)

{
  return 0x6d8a856a;
}



// FUNCTION 141f7e910 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC(void)

{
  return 0xf0ccde7;
}



// FUNCTION 141f7e920 Get_Z_Construct_UScriptStruct_FNodeObject_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FNodeObject_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FNodeObject_CRC(void)

{
  return 0xa07dfee;
}



// FUNCTION 141f7e930 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC(void)

{
  return 0x565ca75;
}



// FUNCTION 141f7e940 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC(void)

{
  return 0xa9a48275;
}



// FUNCTION 141f7e950 Get_Z_Construct_UScriptStruct_FTransformFilter_CRC body=6 status=ok
// SIG undefined Get_Z_Construct_UScriptStruct_FTransformFilter_CRC(void)

undefined8 Get_Z_Construct_UScriptStruct_FTransformFilter_CRC(void)

{
  return 0x35d37045;
}



// FUNCTION 141f7e970 FUN_141f7e970 body=139 status=ok
// SIG undefined FUN_141f7e970(void)

void FUN_141f7e970(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 9);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 10);
  FUN_1406da970(param_2,param_1 + 0x10);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x1c);
  FUN_1406da970(param_2,param_1 + 0x20);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x2c);
                    /* WARNING: Could not recover jumptable at 0x000141f7e9f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 0x30);
  return;
}



// FUNCTION 141f7ea00 FUN_141f7ea00 body=66 status=ok
// SIG undefined FUN_141f7ea00(void)

void FUN_141f7ea00(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 8))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 9);
                    /* WARNING: Could not recover jumptable at 0x000141f7ea3e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 8))(param_2,param_1 + 10);
  return;
}



// FUNCTION 141f7ea50 FUN_141f7ea50 body=141 status=ok
// SIG undefined FUN_141f7ea50(void)

void FUN_141f7ea50(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  
  (**(code **)(*param_2 + 8))(param_2,param_1 + 8);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 9);
  (**(code **)(*param_2 + 8))(param_2,param_1 + 10);
  puVar1 = *(undefined1 **)param_2[1];
  if (puVar1 + 1 <= (undefined1 *)((undefined8 *)param_2[1])[1]) {
    *(undefined1 *)(param_1 + 0x10) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000141f7ead9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x50))(param_2,(undefined1 *)(param_1 + 0x10),1);
  return;
}



// FUNCTION 141f7eae0 Set body=169 status=ok
// SIG undefined Set(void)

void FConstraintDescriptor::Set(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 8);
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar2 = (undefined8 *)operator_new(0x40);
  if (puVar2 != (undefined8 *)0x0) {
    *puVar2 = &PTR_FUN_144f2c120;
    *(undefined2 *)(puVar2 + 1) = *(undefined2 *)(param_2 + 8);
    *(undefined1 *)((longlong)puVar2 + 10) = *(undefined1 *)(param_2 + 10);
    *puVar2 = &PTR_FUN_144f2c288;
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    puVar2[2] = *(undefined8 *)(param_2 + 0x10);
    puVar2[3] = uVar1;
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    puVar2[4] = *(undefined8 *)(param_2 + 0x20);
    puVar2[5] = uVar1;
    *(undefined1 *)(puVar2 + 6) = *(undefined1 *)(param_2 + 0x30);
    *(undefined8 *)((longlong)puVar2 + 0x34) = *(undefined8 *)(param_2 + 0x34);
    *(undefined4 *)((longlong)puVar2 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    *(undefined8 **)(param_1 + 8) = puVar2;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141f7eb90 Set body=134 status=ok
// SIG undefined Set(void)

void FConstraintDescriptor::Set(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar1 = (undefined8 *)operator_new(0x18);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &PTR_FUN_144f2c120;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 8);
    *(undefined1 *)((longlong)puVar1 + 10) = *(undefined1 *)(param_2 + 10);
    *puVar1 = &PTR_FUN_144f2c1f8;
    *(undefined1 *)(puVar1 + 2) = *(undefined1 *)(param_2 + 0x10);
    *(undefined8 **)(param_1 + 8) = puVar1;
    return;
  }
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



// FUNCTION 141f7ec20 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAimConstraintDescription::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acacf0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FAimConstraintDescription_CRC();
    DAT_146acacf0 = GetStaticStruct(FUN_141f7f480,lVar1,L"AimConstraintDescription",0x40,uVar2);
  }
  return;
}



// FUNCTION 141f7eca0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FAxis::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acacb0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = FUN_141f7e870();
    DAT_146acacb0 = GetStaticStruct(FUN_141f7f4b0,lVar1,L"Axis",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f7ed20 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acacd0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraintData_CRC();
    DAT_146acacd0 = GetStaticStruct(FUN_141f7f4e0,lVar1,L"ConstraintData",0x80,uVar2);
  }
  return;
}



// FUNCTION 141f7eda0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintDescription::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad40 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraintDescription_CRC();
    DAT_146acad40 = GetStaticStruct(FUN_141f7f510,lVar1,L"ConstraintDescription",0xd,uVar2);
  }
  return;
}



// FUNCTION 141f7ee20 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintDescriptionEx::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad10 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraintDescriptionEx_CRC();
    DAT_146acad10 = GetStaticStruct(FUN_141f7d390,lVar1,L"ConstraintDescriptionEx",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f7eea0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintDescriptor::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acace0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraintDescriptor_CRC();
    DAT_146acace0 = GetStaticStruct(FUN_141f7f540,lVar1,L"ConstraintDescriptor",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f7ef20 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FConstraintOffset::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad30 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FConstraintOffset_CRC();
    DAT_146acad30 = GetStaticStruct(FUN_141f7f570,lVar1,L"ConstraintOffset",0x60,uVar2);
  }
  return;
}



// FUNCTION 141f7efa0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FEulerTransform::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad70 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FEulerTransform_CRC();
    DAT_146acad70 = GetStaticStruct(FUN_141f7f5a0,lVar1,L"EulerTransform",0x24,uVar2);
  }
  return;
}



// FUNCTION 141f7f020 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FFilterOptionPerAxis::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad60 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FFilterOptionPerAxis_CRC();
    DAT_146acad60 = GetStaticStruct(FUN_141f7f5d0,lVar1,L"FilterOptionPerAxis",3,uVar2);
  }
  return;
}



// FUNCTION 141f7f0a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeChain::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad80 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FNodeChain_CRC();
    DAT_146acad80 = GetStaticStruct(FUN_141f7f600,lVar1,L"NodeChain",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f7f120 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acada0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FNodeHierarchyData_CRC();
    DAT_146acada0 = GetStaticStruct(FUN_141f7f630,lVar1,L"NodeHierarchyData",0x70,uVar2);
  }
  return;
}



// FUNCTION 141f7f1a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeHierarchyWithUserData::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad90 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FNodeHierarchyWithUserData_CRC();
    DAT_146acad90 = GetStaticStruct(FUN_141f7f660,lVar1,L"NodeHierarchyWithUserData",0x78,uVar2);
  }
  return;
}



// FUNCTION 141f7f220 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FNodeObject::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acadb0 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FNodeObject_CRC();
    DAT_146acadb0 = GetStaticStruct(FUN_141f7f690,lVar1,L"NodeObject",0x10,uVar2);
  }
  return;
}



// FUNCTION 141f7f2a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTransformConstraint::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad20 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FTransformConstraint_CRC();
    DAT_146acad20 = GetStaticStruct(FUN_141f7f6c0,lVar1,L"TransformConstraint",0x28,uVar2);
  }
  return;
}



// FUNCTION 141f7f320 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTransformConstraintDescription::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad00 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FTransformConstraintDescription_CRC();
    DAT_146acad00 =
         GetStaticStruct(FUN_141f7f6f0,lVar1,L"TransformConstraintDescription",0x18,uVar2);
  }
  return;
}



// FUNCTION 141f7f3a0 StaticStruct body=113 status=ok
// SIG undefined StaticStruct(void)

void FTransformFilter::StaticStruct(void)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_146acad50 == 0) {
    if (DAT_146acaca8 == 0) {
      UE4CodeGen_Private::ConstructUPackage(&DAT_146acaca8,&PTR_s__Script_AnimationCore_144f2bfe0);
    }
    lVar1 = DAT_146acaca8;
    uVar2 = Get_Z_Construct_UScriptStruct_FTransformFilter_CRC();
    DAT_146acad50 = GetStaticStruct(FUN_141f7f720,lVar1,L"TransformFilter",9,uVar2);
  }
  return;
}



// FUNCTION 141f7f420 FUN_141f7f420 body=47 status=ok
// SIG undefined FUN_141f7f420(void)

longlong FUN_141f7f420(void)

{
  if (DAT_146acacc8 == 0) {
    FUN_1417866a0(&DAT_146acacc8,&PTR_FUN_1464dcc00);
  }
  return DAT_146acacc8;
}



// FUNCTION 141f7f450 FUN_141f7f450 body=47 status=ok
// SIG undefined FUN_141f7f450(void)

longlong FUN_141f7f450(void)

{
  if (DAT_146acacc0 == 0) {
    FUN_1417866a0(&DAT_146acacc0,&PTR_FUN_1464dcbb0);
  }
  return DAT_146acacc0;
}



// FUNCTION 141f7f480 FUN_141f7f480 body=47 status=ok
// SIG undefined FUN_141f7f480(void)

longlong FUN_141f7f480(void)

{
  if (DAT_146acacf8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acacf8,&PTR_FUN_1464dbed0);
  }
  return DAT_146acacf8;
}



// FUNCTION 141f7f4b0 FUN_141f7f4b0 body=47 status=ok
// SIG undefined FUN_141f7f4b0(void)

longlong FUN_141f7f4b0(void)

{
  if (DAT_146acacb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acacb8,&PTR_FUN_1464dba50);
  }
  return DAT_146acacb8;
}



// FUNCTION 141f7f4e0 FUN_141f7f4e0 body=47 status=ok
// SIG undefined FUN_141f7f4e0(void)

longlong FUN_141f7f4e0(void)

{
  if (DAT_146acacd8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acacd8,&PTR_FUN_1464dbc10);
  }
  return DAT_146acacd8;
}



// FUNCTION 141f7f510 FUN_141f7f510 body=47 status=ok
// SIG undefined FUN_141f7f510(void)

longlong FUN_141f7f510(void)

{
  if (DAT_146acad48 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad48,&PTR_FUN_1464dc600);
  }
  return DAT_146acad48;
}



// FUNCTION 141f7f540 FUN_141f7f540 body=47 status=ok
// SIG undefined FUN_141f7f540(void)

longlong FUN_141f7f540(void)

{
  if (DAT_146acace8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acace8,&PTR_FUN_1464dbd10);
  }
  return DAT_146acace8;
}



// FUNCTION 141f7f570 FUN_141f7f570 body=47 status=ok
// SIG undefined FUN_141f7f570(void)

longlong FUN_141f7f570(void)

{
  if (DAT_146acad38 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad38,&PTR_FUN_1464dc350);
  }
  return DAT_146acad38;
}



// FUNCTION 141f7f5a0 FUN_141f7f5a0 body=47 status=ok
// SIG undefined FUN_141f7f5a0(void)

longlong FUN_141f7f5a0(void)

{
  if (DAT_146acad78 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad78,&PTR_FUN_1464dc960);
  }
  return DAT_146acad78;
}



// FUNCTION 141f7f5d0 FUN_141f7f5d0 body=47 status=ok
// SIG undefined FUN_141f7f5d0(void)

longlong FUN_141f7f5d0(void)

{
  if (DAT_146acad68 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad68,&PTR_FUN_1464dc850);
  }
  return DAT_146acad68;
}



// FUNCTION 141f7f600 FUN_141f7f600 body=47 status=ok
// SIG undefined FUN_141f7f600(void)

longlong FUN_141f7f600(void)

{
  if (DAT_146acad88 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad88,&PTR_FUN_1464dc9b0);
  }
  return DAT_146acad88;
}



// FUNCTION 141f7f630 FUN_141f7f630 body=47 status=ok
// SIG undefined FUN_141f7f630(void)

longlong FUN_141f7f630(void)

{
  if (DAT_146acada8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acada8,&PTR_FUN_1464dcb10);
  }
  return DAT_146acada8;
}



// FUNCTION 141f7f660 FUN_141f7f660 body=47 status=ok
// SIG undefined FUN_141f7f660(void)

longlong FUN_141f7f660(void)

{
  if (DAT_146acad98 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad98,&PTR_FUN_1464dca40);
  }
  return DAT_146acad98;
}



// FUNCTION 141f7f690 FUN_141f7f690 body=47 status=ok
// SIG undefined FUN_141f7f690(void)

longlong FUN_141f7f690(void)

{
  if (DAT_146acadb8 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acadb8,&PTR_FUN_1464dcb60);
  }
  return DAT_146acadb8;
}



// FUNCTION 141f7f6c0 FUN_141f7f6c0 body=47 status=ok
// SIG undefined FUN_141f7f6c0(void)

longlong FUN_141f7f6c0(void)

{
  if (DAT_146acad28 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad28,&PTR_FUN_1464dc1d0);
  }
  return DAT_146acad28;
}



// FUNCTION 141f7f6f0 FUN_141f7f6f0 body=47 status=ok
// SIG undefined FUN_141f7f6f0(void)

longlong FUN_141f7f6f0(void)

{
  if (DAT_146acad08 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad08,&PTR_FUN_1464dbfd0);
  }
  return DAT_146acad08;
}



// FUNCTION 141f7f720 FUN_141f7f720 body=47 status=ok
// SIG undefined FUN_141f7f720(void)

longlong FUN_141f7f720(void)

{
  if (DAT_146acad58 == 0) {
    UE4CodeGen_Private::ConstructUScriptStruct(&DAT_146acad58,&PTR_FUN_1464dc710);
  }
  return DAT_146acad58;
}



// FUNCTION 141f7f750 FUN_141f7f750 body=210 status=ok
// SIG undefined FUN_141f7f750(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f7f750(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  DAT_146aef1f0 = (undefined8 *)operator_new(0xb0);
  if (DAT_146aef1f0 != (undefined8 *)0x0) {
    DAT_146aef1f0[1] = 0;
    DAT_146aef1f0[2] = 0;
    DAT_146aef1f0[3] = 0;
    DAT_146aef1f0[4] = 0;
    *(undefined1 *)(DAT_146aef1f0 + 5) = 0;
    *DAT_146aef1f0 = &PTR_FUN_144f2f840;
    *(undefined4 *)(DAT_146aef1f0 + 6) = 0xffffffff;
    DAT_146aef1f0[7] = 0;
    *(undefined1 *)(DAT_146aef1f0 + 8) = 0;
    DAT_146aef1f0[9] = DAT_146aef320;
    *(undefined1 *)(DAT_146aef1f0 + 10) = 0;
    *(undefined8 *)((longlong)DAT_146aef1f0 + 0x54) = 0;
    *(undefined4 *)((longlong)DAT_146aef1f0 + 0x5c) = 0;
    DAT_146aef1f0[0xc] = 0xffffffffffffffff;
    *(undefined4 *)(DAT_146aef1f0 + 0xd) = 0xffff;
    DAT_146aef1f0[0xf] = 0;
    uVar1 = uRam0000000146acadfc;
    DAT_146aef1f0[0x12] = 0;
    DAT_146aef1f0[0x13] = 0;
    *(undefined4 *)(DAT_146aef1f0 + 0x10) = 0;
    *(undefined4 *)((longlong)DAT_146aef1f0 + 0x84) = 0;
    *(undefined4 *)(DAT_146aef1f0 + 0x11) = 0;
    *(uint *)((longlong)DAT_146aef1f0 + 0x8c) = uVar1;
    uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
    uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
    uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
    *(uint *)(DAT_146aef1f0 + 0x14) = _DAT_146acadf0 & _DAT_146acae00;
    *(uint *)((longlong)DAT_146aef1f0 + 0xa4) = uVar1;
    *(uint *)(DAT_146aef1f0 + 0x15) = uVar2;
    *(uint *)((longlong)DAT_146aef1f0 + 0xac) = uVar3;
    DAT_146aef1f8 = 0xb0;
    return;
  }
  DAT_146aef1f0 = (undefined8 *)0x0;
  DAT_146aef1f8 = 0xb0;
  return;
}



// FUNCTION 141f7f830 FUN_141f7f830 body=238 status=ok
// SIG undefined FUN_141f7f830(void)

void FUN_141f7f830(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong local_18 [2];
  
  plVar2 = (longlong *)FMemory::Realloc(0,0x30);
  if (plVar2 != (longlong *)0x0) {
    *plVar2 = (longlong)&PTR_FUN_1442e8068;
    FWeakObjectPtr::operator=(plVar2 + 1,param_2);
    plVar2[2] = param_3;
    lVar3 = FDelegateHandle::GenerateNewID();
    plVar2[4] = lVar3;
    *plVar2 = (longlong)&PTR_FUN_1442e80b0;
  }
  if (local_18 != param_1) {
    if (plVar2 == (longlong *)0x0) {
      if (((int)param_1[1] != 0) && (plVar1 = (longlong *)*param_1, plVar1 != (longlong *)0x0)) {
        (**(code **)(*plVar1 + 0x28))(plVar1,0);
        if (*param_1 != 0) {
          lVar3 = FMemory::Realloc(*param_1,0,0);
          *param_1 = lVar3;
        }
        *(undefined4 *)(param_1 + 1) = 0;
      }
    }
    else {
      (**(code **)(*plVar2 + 0x30))(plVar2,param_1);
    }
  }
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,0);
    lVar3 = FMemory::Realloc(plVar2,0,0);
    if (lVar3 != 0) {
      FMemory::Free(lVar3);
    }
  }
  return;
}



// FUNCTION 141f7f920 CopyToEmpty<FAnimPhysShape> body=312 status=ok
// SIG undefined CopyToEmpty<FAnimPhysShape>(void)

void TArray<FAnimPhysShape,FDefaultAllocator>::CopyToEmpty<FAnimPhysShape>
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
        TArray<FVector,FDefaultAllocator>::ResizeForCopy(puVar4 + -3,iVar2,0);
        ::_guard_xfg_dispatch_icall_nop(*(void **)(puVar4 + -3),pvVar3,(longlong)iVar2 * 0xc);
      }
      param_1 = param_1 + 6;
      puVar4[1] = piVar5[6];
      *(undefined8 *)(puVar4 + 2) = *(undefined8 *)(piVar5 + 7);
      piVar1 = piVar5 + 9;
      piVar5 = piVar5 + 0xc;
      puVar4[4] = *piVar1;
      puVar4 = puVar4 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 141f7fa60 FUN_141f7fa60 body=710 status=ok
// SIG undefined FUN_141f7fa60(void)

int * FUN_141f7fa60(longlong *param_1,int *param_2,undefined8 *param_3,undefined1 *param_4)

{
  longlong lVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char cVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  
  iVar7 = 1;
  iVar15 = -1;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) < iVar10 + 1) {
      TArray<TSparseArrayElementOrFreeListLink<TAlignedBytes<24,8>_>,FDefaultAllocator>::ResizeGrow
                (param_1,iVar10);
    }
    TBitArray<FDefaultBitArrayAllocator>::Add(param_1 + 2,0,1);
  }
  else {
    iVar10 = (int)param_1[6];
    iVar9 = *(int *)((longlong)param_1 + 0x34) + -1;
    iVar8 = *(int *)(*param_1 + 4 + (longlong)iVar10 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    *(int *)((longlong)param_1 + 0x34) = iVar9;
    if (iVar9 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar13 = (longlong *)param_1[4];
  *param_2 = iVar10;
  lVar5 = (longlong)((int)(iVar10 + (iVar10 >> 0x1f & 0x1fU)) >> 5) * 4;
  if (plVar13 == (longlong *)0x0) {
    plVar13 = param_1 + 2;
  }
  bVar16 = false;
  puVar14 = (uint *)((longlong)plVar13 + lVar5);
  *puVar14 = *puVar14 | 1 << ((byte)iVar10 & 0x1f);
  lVar1 = (longlong)iVar10 * 0x18;
  plVar13 = (longlong *)(*param_1 + lVar1);
  lVar2 = *(longlong *)*param_3;
  *plVar13 = lVar2;
  *(undefined2 *)(plVar13 + 1) = 0;
  *(undefined4 *)(plVar13 + 2) = 0xffffffff;
  uVar12 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar12 != 1) {
    iVar9 = iVar15;
    if (uVar12 != 0) {
      plVar6 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar6 = param_1 + 7;
      }
      iVar8 = *(int *)((longlong)plVar6 +
                      ((longlong)((int)((ulonglong)lVar2 >> 0x20) + (int)lVar2) &
                      (longlong)(int)param_1[9] - 1U) * 4);
      if (iVar8 != -1) {
        do {
          iVar9 = iVar8;
          if (*(longlong *)(*param_1 + (longlong)iVar8 * 0x18) == lVar2) break;
          iVar8 = *(int *)(*param_1 + 0x10 + (longlong)iVar8 * 0x18);
          iVar9 = iVar15;
        } while (iVar8 != -1);
      }
    }
    bVar16 = iVar9 != -1;
    if (bVar16) {
      _guard_xfg_dispatch_icall_nop((void *)(*param_1 + (longlong)iVar9 * 0x18),plVar13,0x10);
      bVar3 = (byte)iVar10 & 0x1f;
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(*param_1 + (longlong)(int)param_1[6] * 0x18) = iVar10;
      }
      lVar2 = *param_1;
      *(undefined4 *)(lVar1 + lVar2) = 0xffffffff;
      if (0 < *(int *)((longlong)param_1 + 0x34)) {
        iVar15 = (int)param_1[6];
      }
      *(int *)(lVar1 + 4 + lVar2) = iVar15;
      *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
      *(int *)(param_1 + 6) = iVar10;
      plVar13 = (longlong *)param_1[4];
      *param_2 = iVar9;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = param_1 + 2;
      }
      puVar14 = (uint *)((longlong)plVar13 + lVar5);
      *puVar14 = *puVar14 & ~(1 << bVar3 | 1U >> 0x20 - bVar3);
      goto LAB_141f7fd01;
    }
  }
  if (3 < uVar12) {
    uVar4 = (uVar12 >> 1) + 8;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    iVar7 = 0x20;
    if (uVar4 != 0) {
      iVar7 = 0x1f - iVar15;
    }
    uVar4 = (uVar12 >> 1) + 7;
    iVar15 = 0x1f;
    if (uVar4 != 0) {
      for (; uVar4 >> iVar15 == 0; iVar15 = iVar15 + -1) {
      }
    }
    if (uVar4 == 0) {
      cVar11 = '\0';
    }
    else {
      cVar11 = '\x1f' - (char)iVar15;
    }
    iVar7 = 1 << (~(byte)((iVar7 << 0x1a) >> 0x1f) & 0x20U - cVar11 & 0x1f);
  }
  if (((int)uVar12 < 1) || (((int)param_1[9] != 0 && (iVar7 <= (int)param_1[9])))) {
    uVar12 = (int)((ulonglong)*plVar13 >> 0x20) + (int)*plVar13 & (int)param_1[9] - 1U;
    *(uint *)((longlong)plVar13 + 0x14) = uVar12;
    plVar6 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar6 = param_1 + 7;
    }
    *(undefined4 *)(plVar13 + 2) =
         *(undefined4 *)
          ((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4);
    plVar13 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar13 = param_1 + 7;
    }
    *(int *)((longlong)plVar13 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar12) * 4) =
         iVar10;
  }
  else {
    *(int *)(param_1 + 9) = iVar7;
    FUN_1404b4e10(param_1);
  }
LAB_141f7fd01:
  if (param_4 != (undefined1 *)0x0) {
    *param_4 = bVar16;
  }
  return param_2;
}



// FUNCTION 141f7fd30 FUN_141f7fd30 body=178 status=ok
// SIG undefined FUN_141f7fd30(void)

longlong * FUN_141f7fd30(longlong param_1,int param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x8d8) != *(int *)(param_1 + 0x904)) {
    lVar4 = *(longlong *)(param_1 + 0x910);
    if (*(longlong *)(param_1 + 0x910) == 0) {
      lVar4 = param_1 + 0x908;
    }
    iVar3 = *(int *)(lVar4 + ((longlong)*(int *)(param_1 + 0x918) - 1U & (longlong)param_2) * 4);
    if (iVar3 != -1) {
      lVar4 = *(longlong *)(param_1 + 0x8d0);
      do {
        lVar6 = (longlong)iVar3;
        if (*(int *)(lVar4 + lVar6 * 0x18) == param_2) {
          if (iVar3 == -1) {
            return (longlong *)0x0;
          }
          lVar4 = lVar4 + lVar6 * 0x18;
          if (lVar4 == 0) {
            return (longlong *)0x0;
          }
          plVar1 = *(longlong **)(lVar4 + 8);
          if (plVar1 == (longlong *)0x0) {
            return (longlong *)0x0;
          }
          lVar4 = *plVar1;
          uVar5 = FUN_141fa6810();
          cVar2 = (**(code **)(lVar4 + 8))(plVar1,uVar5);
          if (cVar2 == '\0') {
            return (longlong *)0x0;
          }
          return plVar1;
        }
        iVar3 = *(int *)(lVar4 + 0x10 + lVar6 * 0x18);
      } while (iVar3 != -1);
    }
  }
  return (longlong *)0x0;
}



// FUNCTION 141f7fdf0 GetAnimatedSocketTransform<FCompactPose> body=1490 status=ok
// SIG undefined GetAnimatedSocketTransform<FCompactPose>(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FSocketReference::GetAnimatedSocketTransform<FCompactPose>
                  (longlong param_1,float *param_2,longlong *param_3)

{
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  float *pfVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
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
  float fVar51;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  
  uVar11 = uRam00000001468b5b88;
  uVar10 = _DAT_1468b5b80;
  uVar9 = uRam00000001468b5b78;
  iVar12 = *(int *)(param_1 + 0xc);
  if (iVar12 == -1) {
    *(undefined8 *)param_2 = _DAT_1468b5b70;
    *(undefined8 *)(param_2 + 2) = uVar9;
    uVar9 = uRam00000001468b5b98;
    *(undefined8 *)(param_2 + 8) = _DAT_1468b5b90;
    *(undefined8 *)(param_2 + 10) = uVar9;
    *(undefined8 *)(param_2 + 4) = uVar10;
    *(undefined8 *)(param_2 + 6) = uVar11;
  }
  else {
    if (*(char *)((longlong)iVar12 + param_3[3]) == '\0') {
      FUN_14060c680(param_3);
    }
    fVar25 = fRam0000000146acaecc;
    fVar31 = fRam0000000146acaec8;
    fVar29 = fRam0000000146acaec4;
    fVar28 = _DAT_146acaec0;
    fVar8 = fRam0000000146acadfc;
    fVar7 = fRam0000000146acadf8;
    fVar6 = fRam0000000146acadf4;
    fVar5 = _DAT_146acadf0;
    auVar19 = *(undefined1 (*) [16])(param_1 + 0x30);
    fVar22 = auVar19._0_4_;
    fVar26 = auVar19._4_4_;
    fVar34 = auVar19._8_4_;
    fVar38 = auVar19._12_4_;
    pfVar13 = (float *)((longlong)iVar12 * 0x30 + *param_3);
    *param_2 = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = fVar8;
    auVar20 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar24 = auVar20._0_4_;
    fVar27 = auVar20._4_4_;
    fVar36 = auVar20._8_4_;
    fVar39 = auVar20._12_4_;
    fVar49 = *pfVar13;
    fVar50 = pfVar13[1];
    fVar51 = pfVar13[2];
    fVar18 = pfVar13[3];
    fVar2 = pfVar13[4];
    fVar3 = pfVar13[5];
    fVar4 = pfVar13[6];
    fVar23 = pfVar13[7];
    fVar14 = (float)((uint)fVar5 & _DAT_146acae00);
    fVar15 = (float)((uint)fVar6 & uRam0000000146acae04);
    fVar16 = (float)((uint)fVar7 & uRam0000000146acae08);
    fVar17 = (float)((uint)fVar8 & uRam0000000146acae0c);
    auVar19 = minps(auVar19,auVar20);
    param_2[4] = 0.0;
    param_2[5] = 0.0;
    param_2[6] = 0.0;
    param_2[7] = 0.0;
    auVar20._4_4_ = -(uint)(auVar19._4_4_ < fVar29);
    auVar20._0_4_ = -(uint)(auVar19._0_4_ < fVar28);
    auVar20._8_4_ = -(uint)(auVar19._8_4_ < fVar31);
    auVar20._12_4_ = -(uint)(auVar19._12_4_ < fVar25);
    iVar12 = movmskps((int)pfVar13,auVar20);
    param_2[8] = fVar14;
    param_2[9] = fVar15;
    param_2[10] = fVar16;
    param_2[0xb] = fVar17;
    if (iVar12 == 0) {
      fVar5 = *(float *)(param_1 + 0x10);
      fVar6 = *(float *)(param_1 + 0x14);
      fVar7 = *(float *)(param_1 + 0x18);
      fVar8 = *(float *)(param_1 + 0x1c);
      fVar14 = *(float *)(param_1 + 0x20) * fVar24;
      fVar15 = *(float *)(param_1 + 0x24) * fVar27;
      fVar16 = *(float *)(param_1 + 0x28) * fVar36;
      fVar17 = *(float *)(param_1 + 0x2c) * fVar39;
      fVar28 = fVar49 * fVar8 * _DAT_146acae30;
      fVar29 = fVar49 * fVar7 * fRam0000000146acae34;
      fVar31 = fVar49 * fVar6 * fRam0000000146acae38;
      fVar25 = fVar49 * fVar5 * fRam0000000146acae3c;
      param_2[8] = fVar22 * fVar24;
      param_2[9] = fVar26 * fVar27;
      param_2[10] = fVar34 * fVar36;
      param_2[0xb] = fVar38 * fVar39;
      fVar27 = fVar50 * fVar8 * fRam0000000146acae24;
      fVar34 = fVar50 * fVar5 * fRam0000000146acae28;
      fVar36 = fVar50 * fVar6 * fRam0000000146acae2c;
      fVar22 = fVar51 * fVar5 * fRam0000000146acae14;
      fVar24 = fVar51 * fVar8 * fRam0000000146acae18;
      fVar26 = fVar51 * fVar7 * fRam0000000146acae1c;
      *param_2 = fVar28 + fVar18 * fVar5 + fVar50 * fVar7 * _DAT_146acae20 +
                 fVar51 * fVar6 * _DAT_146acae10;
      param_2[1] = fVar29 + fVar18 * fVar6 + fVar27 + fVar22;
      param_2[2] = fVar31 + fVar18 * fVar7 + fVar34 + fVar24;
      param_2[3] = fVar25 + fVar18 * fVar8 + fVar36 + fVar26;
      fVar22 = fVar16 * fVar50 - fVar15 * fVar51;
      fVar24 = fVar14 * fVar51 - fVar16 * fVar49;
      fVar26 = fVar15 * fVar49 - fVar14 * fVar50;
      fVar27 = fVar17 * fVar18 - fVar17 * fVar18;
      fVar22 = fVar22 + fVar22;
      fVar24 = fVar24 + fVar24;
      fVar26 = fVar26 + fVar26;
      fVar27 = fVar27 + fVar27;
      param_2[4] = (fVar26 * fVar50 - fVar24 * fVar51) + fVar22 * fVar18 + fVar14 + fVar2;
      param_2[5] = (fVar22 * fVar51 - fVar26 * fVar49) + fVar24 * fVar18 + fVar15 + fVar3;
      param_2[6] = (fVar24 * fVar49 - fVar22 * fVar50) + fVar26 * fVar18 + fVar16 + fVar4;
      param_2[7] = (fVar27 * fVar18 - fVar27 * fVar18) + fVar27 * fVar18 + fVar17 + fVar23;
    }
    else {
      fVar14 = fVar50 + fVar50;
      fVar25 = fVar51 + fVar51;
      fVar16 = (fVar49 + fVar49) * fVar49;
      fVar23 = (fVar49 + fVar49) * fVar18;
      fVar46 = (fVar25 * fVar18 + fVar14 * fVar49) * fVar24;
      fVar47 = (fVar23 + fVar25 * fVar50) * fVar27;
      fVar48 = (fVar14 * fVar18 + fVar25 * fVar49) * fVar36;
      fVar32 = fVar27 * (fVar14 * fVar49 - fVar25 * fVar18);
      fVar35 = fVar36 * (fVar25 * fVar50 - fVar23);
      fVar37 = fVar24 * (fVar25 * fVar49 - fVar14 * fVar18);
      fVar23 = (float)((uint)((fVar5 - (fVar25 * fVar51 + fVar14 * fVar50)) * fVar24) &
                      _DAT_146acae00);
      fVar25 = (float)((uint)((fVar6 - (fVar25 * fVar51 + fVar16)) * fVar27) & uRam0000000146acae04)
      ;
      fVar15 = (float)((uint)((fVar7 - (fVar14 * fVar50 + fVar16)) * fVar36) & uRam0000000146acae08)
      ;
      fVar17 = (float)((uint)((fVar8 - (fVar16 + fVar16)) * fVar39) & uRam0000000146acae0c);
      fVar49 = *(float *)(param_1 + 0x10);
      fVar50 = *(float *)(param_1 + 0x14);
      fVar51 = *(float *)(param_1 + 0x18);
      fVar18 = *(float *)(param_1 + 0x1c);
      fVar16 = fVar50 + fVar50;
      fVar30 = fVar51 + fVar51;
      fVar33 = fVar49 * (fVar49 + fVar49);
      fVar14 = (fVar49 + fVar49) * fVar18;
      fVar43 = (fVar30 * fVar18 + fVar16 * fVar49) * fVar22;
      fVar44 = (fVar14 + fVar30 * fVar50) * fVar26;
      fVar45 = (fVar16 * fVar18 + fVar30 * fVar49) * fVar34;
      fVar40 = fVar26 * (fVar16 * fVar49 - fVar30 * fVar18);
      fVar41 = fVar34 * (fVar30 * fVar50 - fVar14);
      fVar42 = fVar22 * (fVar30 * fVar49 - fVar16 * fVar18);
      fVar18 = (float)((uint)((fVar5 - (fVar51 * fVar30 + fVar50 * fVar16)) * fVar22) &
                      _DAT_146acae00);
      fVar14 = (float)((uint)((fVar6 - (fVar51 * fVar30 + fVar33)) * fVar26) & uRam0000000146acae04)
      ;
      fVar16 = (float)((uint)((fVar7 - (fVar50 * fVar16 + fVar33)) * fVar34) & uRam0000000146acae08)
      ;
      fVar30 = (float)((uint)((fVar8 - (fVar33 + fVar33)) * fVar38) & uRam0000000146acae0c);
      fVar49 = *(float *)(param_1 + 0x20);
      fVar50 = *(float *)(param_1 + 0x24);
      fVar51 = *(float *)(param_1 + 0x28);
      local_e8 = fVar43 * fVar32 + fVar18 * fVar23 + fVar42 * fVar48 + fVar30 * fVar2;
      fStack_e4 = fVar43 * fVar25 + fVar18 * fVar46 + fVar42 * fVar35 + fVar30 * fVar3;
      fStack_e0 = fVar43 * fVar47 + fVar18 * fVar37 + fVar42 * fVar15 + fVar30 * fVar4;
      fStack_dc = fVar43 * fVar17 + fVar18 * fVar17 + fVar42 * fVar17 + fVar30 * fVar8;
      local_d8 = fVar14 * fVar32 + fVar40 * fVar23 + fVar44 * fVar48 + fVar30 * fVar2;
      fStack_d4 = fVar14 * fVar25 + fVar40 * fVar46 + fVar44 * fVar35 + fVar30 * fVar3;
      fStack_d0 = fVar14 * fVar47 + fVar40 * fVar37 + fVar44 * fVar15 + fVar30 * fVar4;
      fStack_cc = fVar14 * fVar17 + fVar40 * fVar17 + fVar44 * fVar17 + fVar30 * fVar8;
      local_c8 = fVar41 * fVar32 + fVar45 * fVar23 + fVar16 * fVar48 + fVar30 * fVar2;
      fStack_c4 = fVar41 * fVar25 + fVar45 * fVar46 + fVar16 * fVar35 + fVar30 * fVar3;
      fStack_c0 = fVar41 * fVar47 + fVar45 * fVar37 + fVar16 * fVar15 + fVar30 * fVar4;
      fStack_bc = fVar41 * fVar17 + fVar45 * fVar17 + fVar16 * fVar17 + fVar30 * fVar8;
      local_b8 = fVar50 * fVar32 + fVar49 * fVar23 + fVar51 * fVar48 + fVar8 * fVar2;
      fStack_b4 = fVar50 * fVar25 + fVar49 * fVar46 + fVar51 * fVar35 + fVar8 * fVar3;
      fStack_b0 = fVar50 * fVar47 + fVar49 * fVar37 + fVar51 * fVar15 + fVar8 * fVar4;
      fStack_ac = fVar50 * fVar17 + fVar49 * fVar17 + fVar51 * fVar17 + fVar8 * fVar8;
      FMatrix::RemoveScaling(&local_e8);
      fVar49 = (float)(-(uint)(fVar28 <= fVar22 * fVar24) & (_DAT_146acaeb0 ^ (uint)fVar5) ^
                      _DAT_146acaeb0);
      fVar50 = (float)(-(uint)(fVar29 <= fVar26 * fVar27) & (uRam0000000146acaeb4 ^ (uint)fVar6) ^
                      uRam0000000146acaeb4);
      fVar51 = (float)(-(uint)(fVar31 <= fVar34 * fVar36) & (uRam0000000146acaeb8 ^ (uint)fVar7) ^
                      uRam0000000146acaeb8);
      local_e8 = local_e8 * fVar49;
      fStack_e0 = fStack_e0 * fVar49;
      fStack_e4 = fStack_e4 * fVar49;
      fStack_d0 = fStack_d0 * fVar50;
      fStack_d4 = fStack_d4 * fVar50;
      local_d8 = local_d8 * fVar50;
      fStack_c0 = fStack_c0 * fVar51;
      local_c8 = local_c8 * fVar51;
      fStack_c4 = fStack_c4 * fVar51;
      FQuat::FQuat(&local_f8,&local_e8);
      fVar18 = fRam0000000146acaeac;
      fVar51 = fRam0000000146acaea8;
      fVar50 = fRam0000000146acaea4;
      fVar49 = _DAT_146acaea0;
      param_2[8] = fVar22 * fVar24;
      param_2[9] = fVar26 * fVar27;
      param_2[10] = fVar34 * fVar36;
      param_2[0xb] = fVar38 * fVar39;
      auVar21._0_4_ = local_f8 * local_f8 + fStack_f0 * fStack_f0;
      auVar21._4_4_ = fStack_f4 * fStack_f4 + fStack_ec * fStack_ec;
      auVar21._8_4_ = fStack_f0 * fStack_f0 + local_f8 * local_f8;
      auVar21._12_4_ = fStack_ec * fStack_ec + fStack_f4 * fStack_f4;
      fVar34 = auVar21._4_4_ + auVar21._0_4_;
      fVar36 = auVar21._8_4_ + auVar21._4_4_;
      fVar38 = auVar21._12_4_ + auVar21._8_4_;
      fVar39 = auVar21._0_4_ + auVar21._12_4_;
      auVar1._4_4_ = fVar36;
      auVar1._0_4_ = fVar34;
      auVar1._8_4_ = fVar38;
      auVar1._12_4_ = fVar39;
      auVar19 = rsqrtps(auVar21,auVar1);
      fVar22 = auVar19._0_4_;
      fVar24 = auVar19._4_4_;
      fVar26 = auVar19._8_4_;
      fVar27 = auVar19._12_4_;
      fVar22 = (fVar49 - fVar22 * fVar22 * fVar34 * fVar49) * fVar22 + fVar22;
      fVar24 = (fVar50 - fVar24 * fVar24 * fVar36 * fVar50) * fVar24 + fVar24;
      fVar26 = (fVar51 - fVar26 * fVar26 * fVar38 * fVar51) * fVar26 + fVar26;
      fVar27 = (fVar18 - fVar27 * fVar27 * fVar39 * fVar18) * fVar27 + fVar27;
      auVar19._4_4_ = fStack_b4;
      auVar19._0_4_ = local_b8;
      auVar19._8_4_ = fStack_b0;
      fVar22 = (float)(((uint)(((fVar49 - fVar22 * fVar22 * fVar34 * fVar49) * fVar22 + fVar22) *
                              local_f8) ^ _DAT_146acae90) & -(uint)(1e-08 <= fVar34) ^
                      _DAT_146acae90);
      fVar24 = (float)(((uint)(((fVar50 - fVar24 * fVar24 * fVar36 * fVar50) * fVar24 + fVar24) *
                              fStack_f4) ^ uRam0000000146acae94) & -(uint)(1e-08 <= fVar36) ^
                      uRam0000000146acae94);
      fVar26 = (float)(((uint)(((fVar51 - fVar26 * fVar26 * fVar38 * fVar51) * fVar26 + fVar26) *
                              fStack_f0) ^ uRam0000000146acae98) & -(uint)(1e-08 <= fVar38) ^
                      uRam0000000146acae98);
      fVar27 = (float)(((uint)(((fVar18 - fVar27 * fVar27 * fVar39 * fVar18) * fVar27 + fVar27) *
                              fStack_ec) ^ uRam0000000146acae9c) & -(uint)(1e-08 <= fVar39) ^
                      uRam0000000146acae9c);
      auVar19._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar19;
      *param_2 = fVar22;
      param_2[1] = fVar24;
      param_2[2] = fVar26;
      param_2[3] = fVar27;
    }
  }
  return param_2;
}



// FUNCTION 141f803d0 FUN_141f803d0 body=422 status=ok
// SIG undefined FUN_141f803d0(void)

float * FUN_141f803d0(longlong *param_1,float *param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  double dVar6;
  
  plVar1 = (longlong *)*param_1;
  if (plVar1 != (longlong *)0x0) {
    lVar4 = UNumericProperty::GetPrivateStaticClass();
    if ((*(int *)(plVar1[2] + 0x90) < *(int *)(lVar4 + 0x90)) ||
       (*(longlong *)(*(longlong *)(plVar1[2] + 0x88) + (longlong)*(int *)(lVar4 + 0x90) * 8) !=
        lVar4 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      cVar3 = (**(code **)(*plVar1 + 0x370))(plVar1);
      if (cVar3 != '\0') {
        dVar6 = (double)(**(code **)(*plVar1 + 0x3b8))();
        *param_2 = (float)dVar6;
        *(undefined1 *)(param_2 + 1) = 1;
        return param_2;
      }
      lVar4 = (**(code **)(*plVar1 + 0x3a8))(plVar1,param_1[1]);
      goto LAB_141f80471;
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = UBoolProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      *param_2 = (float)((*(byte *)(lVar4 + 0x73) &
                         *(byte *)((ulonglong)*(byte *)(lVar4 + 0x71) + param_1[1])) != 0);
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
  }
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar5 = UEnumProperty::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x90) < *(int *)(lVar5 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x88) + (longlong)*(int *)(lVar5 + 0x90) * 8)
        != lVar5 + 0x88)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      lVar4 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x3a8))
                        (*(longlong **)(lVar4 + 0x70),param_1[1]);
LAB_141f80471:
      *param_2 = (float)lVar4;
      *(undefined1 *)(param_2 + 1) = 1;
      return param_2;
    }
  }
  *(undefined1 *)(param_2 + 1) = 0;
  return param_2;
}



// FUNCTION 141f80580 FUN_141f80580 body=2781 status=ok
// SIG undefined FUN_141f80580(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141f80580(char *param_1,float *param_2,float *param_3,longlong param_4,
                     undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  int iVar12;
  float *pfVar13;
  undefined8 *puVar14;
  float fVar18;
  float fVar20;
  float fVar21;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar19;
  undefined1 auVar17 [16];
  float fVar22;
  float fVar25;
  float fVar26;
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
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
  float fVar51;
  float fVar52;
  float fVar53;
  undefined1 auStack_178 [48];
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
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
  undefined1 local_f8 [48];
  ulonglong local_c8;
  
  fVar18 = fRam0000000146acadfc;
  local_c8 = DAT_1468387a8 ^ (ulonglong)auStack_178;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar18;
  fVar18 = (float)((uint)fRam0000000146acadf4 & uRam0000000146acae04);
  fVar20 = (float)((uint)fRam0000000146acadf8 & uRam0000000146acae08);
  fVar21 = (float)((uint)fRam0000000146acadfc & uRam0000000146acae0c);
  param_2[8] = (float)((uint)_DAT_146acadf0 & _DAT_146acae00);
  param_2[9] = fVar18;
  param_2[10] = fVar20;
  param_2[0xb] = fVar21;
  if (*param_1 == '\0') {
    if ((((*(int *)(param_1 + 0x10) != -1) && (param_1[0x14] == '\0')) &&
        (iVar12 = *(int *)(param_1 + 0x18), iVar12 != -1)) &&
       ((-1 < iVar12 && (iVar12 < *(int *)(param_4 + 8))))) {
      pfVar13 = (float *)FUN_140611730(param_4,iVar12,param_5);
      fVar36 = fRam0000000146acaec8;
      fVar35 = fRam0000000146acaec4;
      fVar27 = _DAT_146acaec0;
      fVar53 = fRam0000000146acadf8;
      fVar52 = fRam0000000146acadf4;
      fVar51 = _DAT_146acadf0;
      auVar15 = *(undefined1 (*) [16])(param_3 + 8);
      fVar18 = auVar15._0_4_;
      fVar21 = auVar15._4_4_;
      fVar2 = auVar15._8_4_;
      fVar4 = auVar15._12_4_;
      auVar17 = *(undefined1 (*) [16])(pfVar13 + 8);
      fVar20 = auVar17._0_4_;
      fVar1 = auVar17._4_4_;
      fVar3 = auVar17._8_4_;
      fVar5 = auVar17._12_4_;
      auVar15 = minps(auVar15,auVar17);
      auVar17._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146acaec4);
      auVar17._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146acaec0);
      auVar17._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146acaec8);
      auVar17._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146acaecc);
      iVar12 = movmskps((int)param_4,auVar17);
      if (iVar12 != 0) {
        fVar37 = *pfVar13;
        fVar38 = pfVar13[1];
        fVar30 = pfVar13[2];
        fVar22 = pfVar13[3];
        fVar9 = pfVar13[4];
        fVar10 = pfVar13[5];
        fVar19 = pfVar13[6];
        fVar26 = fVar38 + fVar38;
        fVar32 = fVar30 + fVar30;
        fVar34 = (fVar37 + fVar37) * fVar37;
        fVar33 = (fVar37 + fVar37) * fVar22;
        fVar29 = *param_3;
        fVar31 = param_3[1];
        fVar28 = param_3[2];
        fVar25 = param_3[3];
        fVar48 = (fVar32 * fVar22 + fVar26 * fVar37) * fVar20;
        fVar49 = (fVar33 + fVar32 * fVar38) * fVar1;
        fVar50 = (fVar26 * fVar22 + fVar32 * fVar37) * fVar3;
        fVar39 = fVar1 * (fVar26 * fVar37 - fVar32 * fVar22);
        fVar41 = fVar3 * (fVar32 * fVar38 - fVar33);
        fVar43 = fVar20 * (fVar32 * fVar37 - fVar26 * fVar22);
        fVar22 = (float)((uint)((_DAT_146acadf0 - (fVar32 * fVar30 + fVar26 * fVar38)) * fVar20) &
                        _DAT_146acae00);
        fVar33 = (float)((uint)((fRam0000000146acadf4 - (fVar32 * fVar30 + fVar34)) * fVar1) &
                        uRam0000000146acae04);
        fVar26 = (float)((uint)((fRam0000000146acadf8 - (fVar26 * fVar38 + fVar34)) * fVar3) &
                        uRam0000000146acae08);
        fVar32 = (float)((uint)((fRam0000000146acadfc - (fVar34 + fVar34)) * fVar5) &
                        uRam0000000146acae0c);
        fVar37 = fVar31 + fVar31;
        fVar38 = fVar28 + fVar28;
        fVar34 = fVar29 * (fVar29 + fVar29);
        fVar30 = fVar25 * (fVar29 + fVar29);
        fVar45 = (fVar25 * fVar38 + fVar29 * fVar37) * fVar18;
        fVar46 = (fVar30 + fVar31 * fVar38) * fVar21;
        fVar47 = (fVar25 * fVar37 + fVar29 * fVar38) * fVar2;
        fVar40 = fVar21 * (fVar29 * fVar37 - fVar25 * fVar38);
        fVar42 = fVar2 * (fVar31 * fVar38 - fVar30);
        fVar44 = fVar18 * (fVar29 * fVar38 - fVar25 * fVar37);
        fVar29 = (float)((uint)((_DAT_146acadf0 - (fVar28 * fVar38 + fVar31 * fVar37)) * fVar18) &
                        _DAT_146acae00);
        fVar28 = (float)((uint)((fRam0000000146acadf4 - (fVar28 * fVar38 + fVar34)) * fVar21) &
                        uRam0000000146acae04);
        fVar31 = (float)((uint)((fRam0000000146acadf8 - (fVar31 * fVar37 + fVar34)) * fVar2) &
                        uRam0000000146acae08);
        fVar25 = (float)((uint)((fRam0000000146acadfc - (fVar34 + fVar34)) * fVar4) &
                        uRam0000000146acae0c);
        fVar37 = param_3[4];
        fVar38 = param_3[5];
        fVar30 = param_3[6];
        local_148 = fVar45 * fVar39 + fVar29 * fVar22 + fVar44 * fVar50 + fVar25 * fVar9;
        fStack_144 = fVar45 * fVar33 + fVar29 * fVar48 + fVar44 * fVar41 + fVar25 * fVar10;
        fStack_140 = fVar45 * fVar49 + fVar29 * fVar43 + fVar44 * fVar26 + fVar25 * fVar19;
        fStack_13c = fVar45 * fVar32 + fVar29 * fVar32 + fVar44 * fVar32 +
                     fVar25 * fRam0000000146acadfc;
        local_138 = fVar28 * fVar39 + fVar40 * fVar22 + fVar46 * fVar50 + fVar25 * fVar9;
        fStack_134 = fVar28 * fVar33 + fVar40 * fVar48 + fVar46 * fVar41 + fVar25 * fVar10;
        fStack_130 = fVar28 * fVar49 + fVar40 * fVar43 + fVar46 * fVar26 + fVar25 * fVar19;
        fStack_12c = fVar28 * fVar32 + fVar40 * fVar32 + fVar46 * fVar32 +
                     fVar25 * fRam0000000146acadfc;
        local_128 = fVar42 * fVar39 + fVar47 * fVar22 + fVar31 * fVar50 + fVar25 * fVar9;
        fStack_124 = fVar42 * fVar33 + fVar47 * fVar48 + fVar31 * fVar41 + fVar25 * fVar10;
        fStack_120 = fVar42 * fVar49 + fVar47 * fVar43 + fVar31 * fVar26 + fVar25 * fVar19;
        fStack_11c = fVar42 * fVar32 + fVar47 * fVar32 + fVar31 * fVar32 +
                     fVar25 * fRam0000000146acadfc;
        local_118 = fVar38 * fVar39 + fVar37 * fVar22 + fVar30 * fVar50 +
                    fRam0000000146acadfc * fVar9;
        fStack_114 = fVar38 * fVar33 + fVar37 * fVar48 + fVar30 * fVar41 +
                     fRam0000000146acadfc * fVar10;
        fStack_110 = fVar38 * fVar49 + fVar37 * fVar43 + fVar30 * fVar26 +
                     fRam0000000146acadfc * fVar19;
        fStack_10c = fVar38 * fVar32 + fVar37 * fVar32 + fVar30 * fVar32 +
                     fRam0000000146acadfc * fRam0000000146acadfc;
        FMatrix::RemoveScaling(&local_148);
        fVar51 = (float)(-(uint)(fVar27 <= fVar20 * fVar18) & (_DAT_146acaeb0 ^ (uint)fVar51) ^
                        _DAT_146acaeb0);
        fVar52 = (float)(-(uint)(fVar35 <= fVar1 * fVar21) & (uRam0000000146acaeb4 ^ (uint)fVar52) ^
                        uRam0000000146acaeb4);
        fVar53 = (float)(-(uint)(fVar36 <= fVar3 * fVar2) & (uRam0000000146acaeb8 ^ (uint)fVar53) ^
                        uRam0000000146acaeb8);
        local_148 = local_148 * fVar51;
        fStack_144 = fStack_144 * fVar51;
        fStack_140 = fStack_140 * fVar51;
        fStack_130 = fStack_130 * fVar52;
        fStack_134 = fStack_134 * fVar52;
        local_138 = local_138 * fVar52;
        fStack_120 = fStack_120 * fVar53;
        local_128 = local_128 * fVar53;
        fStack_124 = fStack_124 * fVar53;
        FQuat::FQuat(&local_108,&local_148);
        auVar24._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
        auVar24._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
        auVar24._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
        auVar24._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
        fVar35 = auVar24._4_4_ + auVar24._0_4_;
        fVar36 = auVar24._8_4_ + auVar24._4_4_;
        fVar37 = auVar24._12_4_ + auVar24._8_4_;
        fVar38 = auVar24._0_4_ + auVar24._12_4_;
        auVar15._4_4_ = fVar36;
        auVar15._0_4_ = fVar35;
        auVar15._8_4_ = fVar37;
        auVar15._12_4_ = fVar38;
        auVar15 = rsqrtps(auVar24,auVar15);
        fVar51 = auVar15._0_4_;
        fVar52 = auVar15._4_4_;
        fVar53 = auVar15._8_4_;
        fVar27 = auVar15._12_4_;
        fVar51 = (_DAT_146acaea0 - fVar51 * fVar51 * fVar35 * _DAT_146acaea0) * fVar51 + fVar51;
        fVar52 = (fRam0000000146acaea4 - fVar52 * fVar52 * fVar36 * fRam0000000146acaea4) * fVar52 +
                 fVar52;
        fVar53 = (fRam0000000146acaea8 - fVar53 * fVar53 * fVar37 * fRam0000000146acaea8) * fVar53 +
                 fVar53;
        fVar27 = (fRam0000000146acaeac - fVar27 * fVar27 * fVar38 * fRam0000000146acaeac) * fVar27 +
                 fVar27;
        fVar51 = (float)(((uint)(((_DAT_146acaea0 - fVar51 * fVar51 * fVar35 * _DAT_146acaea0) *
                                  fVar51 + fVar51) * local_108) ^ _DAT_146acae90) &
                         -(uint)(1e-08 <= fVar35) ^ _DAT_146acae90);
        fVar52 = (float)(((uint)(((fRam0000000146acaea4 -
                                  fVar52 * fVar52 * fVar36 * fRam0000000146acaea4) * fVar52 + fVar52
                                 ) * fStack_104) ^ uRam0000000146acae94) & -(uint)(1e-08 <= fVar36)
                        ^ uRam0000000146acae94);
        fVar53 = (float)(((uint)(((fRam0000000146acaea8 -
                                  fVar53 * fVar53 * fVar37 * fRam0000000146acaea8) * fVar53 + fVar53
                                 ) * fStack_100) ^ uRam0000000146acae98) & -(uint)(1e-08 <= fVar37)
                        ^ uRam0000000146acae98);
        fVar27 = (float)(((uint)(((fRam0000000146acaeac -
                                  fVar27 * fVar27 * fVar38 * fRam0000000146acaeac) * fVar27 + fVar27
                                 ) * fStack_fc) ^ uRam0000000146acae9c) & -(uint)(1e-08 <= fVar38) ^
                        uRam0000000146acae9c);
        auVar8._4_4_ = fStack_114;
        auVar8._0_4_ = local_118;
        auVar8._8_4_ = fStack_110;
        auVar8._12_4_ = 0;
        *(undefined1 (*) [16])(param_2 + 4) = auVar8;
        *param_2 = fVar51;
        param_2[1] = fVar52;
        param_2[2] = fVar53;
        param_2[3] = fVar27;
        param_2[8] = fVar20 * fVar18;
        param_2[9] = fVar1 * fVar21;
        param_2[10] = fVar3 * fVar2;
        param_2[0xb] = fVar5 * fVar4;
        return param_2;
      }
      fVar51 = *pfVar13;
      fVar52 = pfVar13[1];
      fVar53 = pfVar13[2];
      fVar27 = pfVar13[3];
      fVar35 = *param_3;
      fVar36 = param_3[1];
      fVar37 = param_3[2];
      fVar38 = param_3[3];
      fVar40 = param_3[4] * fVar20;
      fVar41 = param_3[5] * fVar1;
      fVar42 = param_3[6] * fVar3;
      fVar43 = param_3[7] * fVar5;
      fVar44 = fVar37 * fVar51 * fRam0000000146acae34;
      fVar45 = fVar36 * fVar51 * fRam0000000146acae38;
      fVar46 = fVar35 * fVar51 * fRam0000000146acae3c;
      fVar25 = fVar52 * fVar38 * fRam0000000146acae24;
      fVar26 = fVar52 * fVar35 * fRam0000000146acae28;
      fVar34 = fVar52 * fVar36 * fRam0000000146acae2c;
      fVar19 = fVar53 * fVar35 * fRam0000000146acae14;
      fVar29 = fVar53 * fVar38 * fRam0000000146acae18;
      fVar31 = fVar53 * fVar37 * fRam0000000146acae1c;
      fVar28 = fVar42 * fVar52 - fVar41 * fVar53;
      fVar33 = fVar40 * fVar53 - fVar42 * fVar51;
      fVar32 = fVar41 * fVar51 - fVar40 * fVar52;
      fVar39 = fVar43 * fVar27 - fVar43 * fVar27;
      fVar28 = fVar28 + fVar28;
      fVar33 = fVar33 + fVar33;
      fVar32 = fVar32 + fVar32;
      fVar39 = fVar39 + fVar39;
      fVar30 = pfVar13[4];
      fVar22 = pfVar13[5];
      fVar9 = pfVar13[6];
      fVar10 = pfVar13[7];
      *param_2 = fVar38 * fVar51 * _DAT_146acae30 + fVar27 * fVar35 +
                 fVar52 * fVar37 * _DAT_146acae20 + fVar53 * fVar36 * _DAT_146acae10;
      param_2[1] = fVar44 + fVar27 * fVar36 + fVar25 + fVar19;
      param_2[2] = fVar45 + fVar27 * fVar37 + fVar26 + fVar29;
      param_2[3] = fVar46 + fVar27 * fVar38 + fVar34 + fVar31;
      param_2[8] = fVar20 * fVar18;
      param_2[9] = fVar1 * fVar21;
      param_2[10] = fVar3 * fVar2;
      param_2[0xb] = fVar5 * fVar4;
      param_2[4] = (fVar32 * fVar52 - fVar33 * fVar53) + fVar27 * fVar28 + fVar40 + fVar30;
      param_2[5] = (fVar28 * fVar53 - fVar32 * fVar51) + fVar27 * fVar33 + fVar41 + fVar22;
      param_2[6] = (fVar33 * fVar51 - fVar28 * fVar52) + fVar27 * fVar32 + fVar42 + fVar9;
      param_2[7] = (fVar39 * fVar27 - fVar39 * fVar27) + fVar27 * fVar39 + fVar43 + fVar10;
      return param_2;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != -1) {
    pfVar13 = (float *)FSocketReference::GetAnimatedSocketTransform<FCompactPose>
                                 (param_1 + 0x20,0,param_4);
    fVar36 = fRam0000000146acaec8;
    fVar35 = fRam0000000146acaec4;
    fVar27 = _DAT_146acaec0;
    fVar53 = fRam0000000146acadf8;
    fVar52 = fRam0000000146acadf4;
    fVar51 = _DAT_146acadf0;
    auVar15 = *(undefined1 (*) [16])(param_3 + 8);
    fVar18 = auVar15._0_4_;
    fVar21 = auVar15._4_4_;
    fVar2 = auVar15._8_4_;
    fVar4 = auVar15._12_4_;
    auVar17 = *(undefined1 (*) [16])(pfVar13 + 8);
    fVar20 = auVar17._0_4_;
    fVar1 = auVar17._4_4_;
    fVar3 = auVar17._8_4_;
    fVar5 = auVar17._12_4_;
    auVar15 = minps(auVar15,auVar17);
    auVar16._4_4_ = -(uint)(auVar15._4_4_ < fRam0000000146acaec4);
    auVar16._0_4_ = -(uint)(auVar15._0_4_ < _DAT_146acaec0);
    auVar16._8_4_ = -(uint)(auVar15._8_4_ < fRam0000000146acaec8);
    auVar16._12_4_ = -(uint)(auVar15._12_4_ < fRam0000000146acaecc);
    iVar12 = movmskps((int)pfVar13,auVar16);
    if (iVar12 != 0) {
      fVar37 = *pfVar13;
      fVar38 = pfVar13[1];
      fVar30 = pfVar13[2];
      fVar22 = pfVar13[3];
      fVar9 = pfVar13[4];
      fVar10 = pfVar13[5];
      fVar19 = pfVar13[6];
      fVar28 = fVar38 + fVar38;
      fVar31 = fVar30 + fVar30;
      fVar33 = fVar37 * (fVar37 + fVar37);
      fVar29 = (fVar37 + fVar37) * fVar22;
      fVar48 = (fVar31 * fVar22 + fVar28 * fVar37) * fVar20;
      fVar49 = (fVar29 + fVar31 * fVar38) * fVar1;
      fVar50 = (fVar28 * fVar22 + fVar31 * fVar37) * fVar3;
      fVar39 = fVar1 * (fVar28 * fVar37 - fVar31 * fVar22);
      fVar41 = fVar3 * (fVar31 * fVar38 - fVar29);
      fVar43 = fVar20 * (fVar31 * fVar37 - fVar28 * fVar22);
      fVar29 = (float)((uint)((_DAT_146acadf0 - (fVar30 * fVar31 + fVar38 * fVar28)) * fVar20) &
                      _DAT_146acae00);
      fVar31 = (float)((uint)((fRam0000000146acadf4 - (fVar30 * fVar31 + fVar33)) * fVar1) &
                      uRam0000000146acae04);
      fVar25 = (float)((uint)((fRam0000000146acadf8 - (fVar38 * fVar28 + fVar33)) * fVar3) &
                      uRam0000000146acae08);
      fVar26 = (float)((uint)((fRam0000000146acadfc - (fVar33 + fVar33)) * fVar5) &
                      uRam0000000146acae0c);
      fVar37 = *param_3;
      fVar38 = param_3[1];
      fVar30 = param_3[2];
      fVar22 = param_3[3];
      fVar33 = fVar38 + fVar38;
      fVar32 = fVar30 + fVar30;
      fVar34 = fVar37 * (fVar37 + fVar37);
      fVar28 = (fVar37 + fVar37) * fVar22;
      fVar45 = (fVar32 * fVar22 + fVar33 * fVar37) * fVar18;
      fVar46 = (fVar28 + fVar32 * fVar38) * fVar21;
      fVar47 = (fVar33 * fVar22 + fVar32 * fVar37) * fVar2;
      fVar40 = fVar21 * (fVar33 * fVar37 - fVar32 * fVar22);
      fVar42 = fVar2 * (fVar32 * fVar38 - fVar28);
      fVar44 = fVar18 * (fVar32 * fVar37 - fVar33 * fVar22);
      fVar22 = (float)((uint)((_DAT_146acadf0 - (fVar30 * fVar32 + fVar38 * fVar33)) * fVar18) &
                      _DAT_146acae00);
      fVar28 = (float)((uint)((fRam0000000146acadf4 - (fVar30 * fVar32 + fVar34)) * fVar21) &
                      uRam0000000146acae04);
      fVar33 = (float)((uint)((fRam0000000146acadf8 - (fVar38 * fVar33 + fVar34)) * fVar2) &
                      uRam0000000146acae08);
      fVar32 = (float)((uint)((fRam0000000146acadfc - (fVar34 + fVar34)) * fVar4) &
                      uRam0000000146acae0c);
      fVar37 = param_3[4];
      fVar38 = param_3[5];
      fVar30 = param_3[6];
      local_148 = fVar45 * fVar39 + fVar22 * fVar29 + fVar44 * fVar50 + fVar32 * fVar9;
      fStack_144 = fVar45 * fVar31 + fVar22 * fVar48 + fVar44 * fVar41 + fVar32 * fVar10;
      fStack_140 = fVar45 * fVar49 + fVar22 * fVar43 + fVar44 * fVar25 + fVar32 * fVar19;
      fStack_13c = fVar45 * fVar26 + fVar22 * fVar26 + fVar44 * fVar26 +
                   fVar32 * fRam0000000146acadfc;
      local_138 = fVar28 * fVar39 + fVar40 * fVar29 + fVar46 * fVar50 + fVar32 * fVar9;
      fStack_134 = fVar28 * fVar31 + fVar40 * fVar48 + fVar46 * fVar41 + fVar32 * fVar10;
      fStack_130 = fVar28 * fVar49 + fVar40 * fVar43 + fVar46 * fVar25 + fVar32 * fVar19;
      fStack_12c = fVar28 * fVar26 + fVar40 * fVar26 + fVar46 * fVar26 +
                   fVar32 * fRam0000000146acadfc;
      local_128 = fVar42 * fVar39 + fVar47 * fVar29 + fVar33 * fVar50 + fVar32 * fVar9;
      fStack_124 = fVar42 * fVar31 + fVar47 * fVar48 + fVar33 * fVar41 + fVar32 * fVar10;
      fStack_120 = fVar42 * fVar49 + fVar47 * fVar43 + fVar33 * fVar25 + fVar32 * fVar19;
      fStack_11c = fVar42 * fVar26 + fVar47 * fVar26 + fVar33 * fVar26 +
                   fVar32 * fRam0000000146acadfc;
      local_118 = fVar38 * fVar39 + fVar37 * fVar29 + fVar30 * fVar50 + fRam0000000146acadfc * fVar9
      ;
      fStack_114 = fVar38 * fVar31 + fVar37 * fVar48 + fVar30 * fVar41 +
                   fRam0000000146acadfc * fVar10;
      fStack_110 = fVar38 * fVar49 + fVar37 * fVar43 + fVar30 * fVar25 +
                   fRam0000000146acadfc * fVar19;
      fStack_10c = fVar38 * fVar26 + fVar37 * fVar26 + fVar30 * fVar26 +
                   fRam0000000146acadfc * fRam0000000146acadfc;
      FMatrix::RemoveScaling(&local_148);
      fVar51 = (float)(-(uint)(fVar27 <= fVar20 * fVar18) & (_DAT_146acaeb0 ^ (uint)fVar51) ^
                      _DAT_146acaeb0);
      fVar52 = (float)(-(uint)(fVar35 <= fVar1 * fVar21) & (uRam0000000146acaeb4 ^ (uint)fVar52) ^
                      uRam0000000146acaeb4);
      fVar53 = (float)(-(uint)(fVar36 <= fVar3 * fVar2) & (uRam0000000146acaeb8 ^ (uint)fVar53) ^
                      uRam0000000146acaeb8);
      local_148 = local_148 * fVar51;
      fStack_140 = fStack_140 * fVar51;
      fStack_144 = fStack_144 * fVar51;
      fStack_130 = fStack_130 * fVar52;
      fStack_134 = fStack_134 * fVar52;
      local_138 = local_138 * fVar52;
      fStack_120 = fStack_120 * fVar53;
      local_128 = local_128 * fVar53;
      fStack_124 = fStack_124 * fVar53;
      FQuat::FQuat(&local_108,&local_148);
      auVar23._0_4_ = local_108 * local_108 + fStack_100 * fStack_100;
      auVar23._4_4_ = fStack_104 * fStack_104 + fStack_fc * fStack_fc;
      auVar23._8_4_ = fStack_100 * fStack_100 + local_108 * local_108;
      auVar23._12_4_ = fStack_fc * fStack_fc + fStack_104 * fStack_104;
      fVar35 = auVar23._4_4_ + auVar23._0_4_;
      fVar36 = auVar23._8_4_ + auVar23._4_4_;
      fVar37 = auVar23._12_4_ + auVar23._8_4_;
      fVar38 = auVar23._0_4_ + auVar23._12_4_;
      auVar6._4_4_ = fVar36;
      auVar6._0_4_ = fVar35;
      auVar6._8_4_ = fVar37;
      auVar6._12_4_ = fVar38;
      auVar15 = rsqrtps(auVar23,auVar6);
      fVar51 = auVar15._0_4_;
      fVar52 = auVar15._4_4_;
      fVar53 = auVar15._8_4_;
      fVar27 = auVar15._12_4_;
      fVar51 = (_DAT_146acaea0 - fVar51 * fVar51 * fVar35 * _DAT_146acaea0) * fVar51 + fVar51;
      fVar52 = (fRam0000000146acaea4 - fVar52 * fVar52 * fVar36 * fRam0000000146acaea4) * fVar52 +
               fVar52;
      fVar53 = (fRam0000000146acaea8 - fVar53 * fVar53 * fVar37 * fRam0000000146acaea8) * fVar53 +
               fVar53;
      fVar27 = (fRam0000000146acaeac - fVar27 * fVar27 * fVar38 * fRam0000000146acaeac) * fVar27 +
               fVar27;
      fVar51 = (float)(((uint)(((_DAT_146acaea0 - fVar51 * fVar51 * fVar35 * _DAT_146acaea0) *
                                fVar51 + fVar51) * local_108) ^ _DAT_146acae90) &
                       -(uint)(1e-08 <= fVar35) ^ _DAT_146acae90);
      fVar52 = (float)(((uint)(((fRam0000000146acaea4 -
                                fVar52 * fVar52 * fVar36 * fRam0000000146acaea4) * fVar52 + fVar52)
                              * fStack_104) ^ uRam0000000146acae94) & -(uint)(1e-08 <= fVar36) ^
                      uRam0000000146acae94);
      fVar53 = (float)(((uint)(((fRam0000000146acaea8 -
                                fVar53 * fVar53 * fVar37 * fRam0000000146acaea8) * fVar53 + fVar53)
                              * fStack_100) ^ uRam0000000146acae98) & -(uint)(1e-08 <= fVar37) ^
                      uRam0000000146acae98);
      fVar27 = (float)(((uint)(((fRam0000000146acaeac -
                                fVar27 * fVar27 * fVar38 * fRam0000000146acaeac) * fVar27 + fVar27)
                              * fStack_fc) ^ uRam0000000146acae9c) & -(uint)(1e-08 <= fVar38) ^
                      uRam0000000146acae9c);
      auVar7._4_4_ = fStack_114;
      auVar7._0_4_ = local_118;
      auVar7._8_4_ = fStack_110;
      auVar7._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar7;
      *param_2 = fVar51;
      param_2[1] = fVar52;
      param_2[2] = fVar53;
      param_2[3] = fVar27;
      param_2[8] = fVar20 * fVar18;
      param_2[9] = fVar1 * fVar21;
      param_2[10] = fVar3 * fVar2;
      param_2[0xb] = fVar5 * fVar4;
      return param_2;
    }
    fVar51 = *pfVar13;
    fVar52 = pfVar13[1];
    fVar53 = pfVar13[2];
    fVar27 = pfVar13[3];
    fVar35 = *param_3;
    fVar36 = param_3[1];
    fVar37 = param_3[2];
    fVar38 = param_3[3];
    fVar40 = param_3[4] * fVar20;
    fVar41 = param_3[5] * fVar1;
    fVar42 = param_3[6] * fVar3;
    fVar43 = param_3[7] * fVar5;
    fVar44 = fVar37 * fVar51 * fRam0000000146acae34;
    fVar45 = fVar36 * fVar51 * fRam0000000146acae38;
    fVar46 = fVar35 * fVar51 * fRam0000000146acae3c;
    fVar28 = fVar52 * fVar38 * fRam0000000146acae24;
    fVar25 = fVar52 * fVar35 * fRam0000000146acae28;
    fVar33 = fVar52 * fVar36 * fRam0000000146acae2c;
    fVar19 = fVar53 * fVar35 * fRam0000000146acae14;
    fVar29 = fVar53 * fVar38 * fRam0000000146acae18;
    fVar31 = fVar53 * fVar37 * fRam0000000146acae1c;
    fVar26 = fVar42 * fVar52 - fVar41 * fVar53;
    fVar32 = fVar40 * fVar53 - fVar42 * fVar51;
    fVar34 = fVar41 * fVar51 - fVar40 * fVar52;
    fVar39 = fVar43 * fVar27 - fVar43 * fVar27;
    fVar26 = fVar26 + fVar26;
    fVar32 = fVar32 + fVar32;
    fVar34 = fVar34 + fVar34;
    fVar39 = fVar39 + fVar39;
    fVar30 = pfVar13[4];
    fVar22 = pfVar13[5];
    fVar9 = pfVar13[6];
    fVar10 = pfVar13[7];
    *param_2 = fVar38 * fVar51 * _DAT_146acae30 + fVar27 * fVar35 + fVar52 * fVar37 * _DAT_146acae20
               + fVar53 * fVar36 * _DAT_146acae10;
    param_2[1] = fVar44 + fVar27 * fVar36 + fVar28 + fVar19;
    param_2[2] = fVar45 + fVar27 * fVar37 + fVar25 + fVar29;
    param_2[3] = fVar46 + fVar27 * fVar38 + fVar33 + fVar31;
    param_2[8] = fVar18 * fVar20;
    param_2[9] = fVar21 * fVar1;
    param_2[10] = fVar2 * fVar3;
    param_2[0xb] = fVar4 * fVar5;
    param_2[4] = (fVar34 * fVar52 - fVar32 * fVar53) + fVar26 * fVar27 + fVar40 + fVar30;
    param_2[5] = (fVar26 * fVar53 - fVar34 * fVar51) + fVar32 * fVar27 + fVar41 + fVar22;
    param_2[6] = (fVar32 * fVar51 - fVar26 * fVar52) + fVar34 * fVar27 + fVar42 + fVar9;
    param_2[7] = (fVar39 * fVar27 - fVar39 * fVar27) + fVar39 * fVar27 + fVar43 + fVar10;
    return param_2;
  }
  puVar14 = (undefined8 *)FUN_14162bcf0(param_3,local_f8);
  uVar11 = puVar14[1];
  *(undefined8 *)param_2 = *puVar14;
  *(undefined8 *)(param_2 + 2) = uVar11;
  uVar11 = puVar14[3];
  *(undefined8 *)(param_2 + 4) = puVar14[2];
  *(undefined8 *)(param_2 + 6) = uVar11;
  uVar11 = puVar14[5];
  *(undefined8 *)(param_2 + 8) = puVar14[4];
  *(undefined8 *)(param_2 + 10) = uVar11;
  return param_2;
}



// FUNCTION 141f81060 FUN_141f81060 body=554 status=ok
// SIG undefined FUN_141f81060(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_141f81060(char *param_1,float *param_2,float *param_3,longlong param_4,
                     undefined8 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 local_res8 [8];
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  fVar6 = fRam0000000146acadfc;
  param_2[4] = 0.0;
  param_2[5] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  *param_2 = 0.0;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = fVar6;
  fVar6 = (float)(uRam0000000146acadf4 & uRam0000000146acae04);
  fVar7 = (float)(uRam0000000146acadf8 & uRam0000000146acae08);
  fVar8 = (float)((uint)fRam0000000146acadfc & uRam0000000146acae0c);
  param_2[8] = (float)(_DAT_146acadf0 & _DAT_146acae00);
  param_2[9] = fVar6;
  param_2[10] = fVar7;
  param_2[0xb] = fVar8;
  if (*param_1 == '\0') {
    if ((((*(int *)(param_1 + 0x10) != -1) && (param_1[0x14] == '\0')) &&
        (iVar1 = *(int *)(param_1 + 0x18), iVar1 != -1)) &&
       ((-1 < iVar1 && (iVar1 < *(int *)(param_4 + 8))))) {
      pfVar5 = (float *)FUN_140611730(param_4,iVar1);
      fVar6 = *pfVar5;
      fVar7 = pfVar5[1];
      fVar8 = pfVar5[2];
      fVar15 = pfVar5[3];
      *param_2 = fVar6;
      param_2[1] = fVar7;
      param_2[2] = fVar8;
      param_2[3] = fVar15;
      fVar16 = pfVar5[4];
      fVar17 = pfVar5[5];
      fVar4 = pfVar5[6];
      fVar12 = pfVar5[7];
      param_2[4] = fVar16;
      param_2[5] = fVar17;
      param_2[6] = fVar4;
      param_2[7] = fVar12;
      fVar12 = pfVar5[8];
      fVar13 = pfVar5[9];
      fVar14 = pfVar5[10];
      fVar9 = pfVar5[0xb];
      param_2[8] = fVar12;
      param_2[9] = fVar13;
      param_2[10] = fVar14;
      param_2[0xb] = fVar9;
      fVar12 = *param_3 * fVar12;
      fVar13 = param_3[1] * fVar13;
      fVar14 = param_3[2] * fVar14;
      fVar9 = fVar14 * fVar7 - fVar13 * fVar8;
      fVar10 = fVar12 * fVar8 - fVar14 * fVar6;
      fVar11 = fVar13 * fVar6 - fVar12 * fVar7;
      fVar9 = fVar9 + fVar9;
      fVar10 = fVar10 + fVar10;
      fVar11 = fVar11 + fVar11;
      auVar3._4_4_ = (fVar9 * fVar8 - fVar11 * fVar6) + fVar15 * fVar10 + fVar13 + fVar17;
      auVar3._0_4_ = (fVar11 * fVar7 - fVar10 * fVar8) + fVar15 * fVar9 + fVar12 + fVar16;
      auVar3._8_4_ = (fVar10 * fVar6 - fVar9 * fVar7) + fVar15 * fVar11 + fVar14 + fVar4;
      auVar3._12_4_ = 0;
      *(undefined1 (*) [16])(param_2 + 4) = auVar3;
      return param_2;
    }
  }
  else if (*(int *)(param_1 + 0x2c) != -1) {
    FSocketReference::GetAnimatedSocketTransform<FCompactPose>(param_1 + 0x20,&local_58,param_4);
    fVar15 = *param_3 * local_38;
    fVar16 = param_3[1] * fStack_34;
    fVar17 = param_3[2] * fStack_30;
    *param_2 = local_58;
    param_2[1] = fStack_54;
    param_2[2] = fStack_50;
    param_2[3] = fStack_4c;
    param_2[8] = local_38;
    param_2[9] = fStack_34;
    param_2[10] = fStack_30;
    param_2[0xb] = fStack_2c;
    fVar6 = fVar17 * fStack_54 - fVar16 * fStack_50;
    fVar7 = fVar15 * fStack_50 - fVar17 * local_58;
    fVar8 = fVar16 * local_58 - fVar15 * fStack_54;
    fVar6 = fVar6 + fVar6;
    fVar7 = fVar7 + fVar7;
    fVar8 = fVar8 + fVar8;
    auVar2._4_4_ = (fVar6 * fStack_50 - fVar8 * local_58) + fStack_4c * fVar7 + fVar16 + fStack_44;
    auVar2._0_4_ = (fVar8 * fStack_54 - fVar7 * fStack_50) + fStack_4c * fVar6 + fVar15 + local_48;
    auVar2._8_4_ = (fVar7 * local_58 - fVar6 * fStack_54) + fStack_4c * fVar8 + fVar17 + fStack_40;
    auVar2._12_4_ = 0;
    *(undefined1 (*) [16])(param_2 + 4) = auVar2;
    return param_2;
  }
  <lambda_b3205ff4250ac606abeecfcf17be6fdb>::operator()(local_res8,param_3,param_5,param_2);
  return param_2;
}



// FUNCTION 141f81290 HeapSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_> body=537 status=ok
// SIG undefined HeapSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>(void)

void AlgoImpl::
     HeapSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
               (undefined8 *param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  int *piVar17;
  
  iVar11 = (param_2 + -2) / 2;
  if (-1 < iVar11) {
    iVar12 = iVar11 * 2 + 1;
    iVar1 = iVar12;
    iVar15 = iVar11;
joined_r0x000141f812ba:
    do {
      if (iVar12 < param_2) {
        iVar12 = iVar11 * 2;
        iVar14 = iVar12 + 1;
        if (iVar12 + 2 < param_2) {
          if (*(int *)(param_1 + ((longlong)iVar12 + 2) * 8) <
              *(int *)(param_1 + (longlong)iVar14 * 8)) {
            iVar14 = iVar12;
          }
          iVar14 = iVar14 + 1;
        }
        piVar13 = (int *)(param_1 + (longlong)iVar14 * 8);
        piVar17 = (int *)(param_1 + (longlong)iVar11 * 8);
        if (*piVar17 < *piVar13) {
          if (piVar17 != piVar13) {
            uVar2 = *(undefined8 *)(piVar13 + 2);
            uVar3 = *(undefined8 *)piVar17;
            uVar4 = *(undefined8 *)(piVar17 + 2);
            uVar5 = *(undefined8 *)(piVar17 + 4);
            uVar6 = *(undefined8 *)(piVar17 + 6);
            uVar7 = *(undefined8 *)(piVar17 + 8);
            uVar8 = *(undefined8 *)(piVar17 + 10);
            uVar9 = *(undefined8 *)(piVar17 + 0xc);
            uVar10 = *(undefined8 *)(piVar17 + 0xe);
            *(undefined8 *)piVar17 = *(undefined8 *)piVar13;
            *(undefined8 *)(piVar17 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar13 + 4);
            *(undefined8 *)(piVar17 + 6) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 10);
            *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar13 + 8);
            *(undefined8 *)(piVar17 + 10) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 0xe);
            *(undefined8 *)(piVar17 + 0xc) = *(undefined8 *)(piVar13 + 0xc);
            *(undefined8 *)(piVar17 + 0xe) = uVar2;
            *(undefined8 *)piVar13 = uVar3;
            *(undefined8 *)(piVar13 + 2) = uVar4;
            *(undefined8 *)(piVar13 + 4) = uVar5;
            *(undefined8 *)(piVar13 + 6) = uVar6;
            *(undefined8 *)(piVar13 + 8) = uVar7;
            *(undefined8 *)(piVar13 + 10) = uVar8;
            *(undefined8 *)(piVar13 + 0xc) = uVar9;
            *(undefined8 *)(piVar13 + 0xe) = uVar10;
          }
          iVar12 = iVar14 * 2 + 1;
          iVar11 = iVar14;
          goto joined_r0x000141f812ba;
        }
      }
      iVar12 = iVar1 + -2;
      iVar11 = iVar15 + -1;
      iVar1 = iVar12;
      iVar15 = iVar11;
    } while (-1 < iVar11);
  }
  param_2 = param_2 + -1;
  if (0 < param_2) {
    puVar16 = param_1 + (longlong)param_2 * 8;
    do {
      if (param_1 != puVar16) {
        uVar2 = puVar16[1];
        uVar3 = *param_1;
        uVar4 = param_1[1];
        uVar5 = param_1[2];
        uVar6 = param_1[3];
        uVar7 = param_1[4];
        uVar8 = param_1[5];
        uVar9 = param_1[6];
        uVar10 = param_1[7];
        *param_1 = *puVar16;
        param_1[1] = uVar2;
        uVar2 = puVar16[3];
        param_1[2] = puVar16[2];
        param_1[3] = uVar2;
        uVar2 = puVar16[5];
        param_1[4] = puVar16[4];
        param_1[5] = uVar2;
        uVar2 = puVar16[7];
        param_1[6] = puVar16[6];
        param_1[7] = uVar2;
        *puVar16 = uVar3;
        puVar16[1] = uVar4;
        puVar16[2] = uVar5;
        puVar16[3] = uVar6;
        puVar16[4] = uVar7;
        puVar16[5] = uVar8;
        puVar16[6] = uVar9;
        puVar16[7] = uVar10;
      }
      iVar11 = 0;
      if (1 < param_2) {
        do {
          iVar1 = iVar11 * 2;
          iVar12 = iVar1 + 1;
          if (iVar1 + 2 < param_2) {
            if (*(int *)(param_1 + ((longlong)iVar1 + 2) * 8) <
                *(int *)(param_1 + (longlong)iVar12 * 8)) {
              iVar12 = iVar1;
            }
            iVar12 = iVar12 + 1;
          }
          piVar13 = (int *)(param_1 + (longlong)iVar12 * 8);
          piVar17 = (int *)(param_1 + (longlong)iVar11 * 8);
          if (*piVar13 <= *piVar17) break;
          if (piVar17 != piVar13) {
            uVar2 = *(undefined8 *)(piVar13 + 2);
            uVar3 = *(undefined8 *)piVar17;
            uVar4 = *(undefined8 *)(piVar17 + 2);
            uVar5 = *(undefined8 *)(piVar17 + 4);
            uVar6 = *(undefined8 *)(piVar17 + 6);
            uVar7 = *(undefined8 *)(piVar17 + 8);
            uVar8 = *(undefined8 *)(piVar17 + 10);
            uVar9 = *(undefined8 *)(piVar17 + 0xc);
            uVar10 = *(undefined8 *)(piVar17 + 0xe);
            *(undefined8 *)piVar17 = *(undefined8 *)piVar13;
            *(undefined8 *)(piVar17 + 2) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 6);
            *(undefined8 *)(piVar17 + 4) = *(undefined8 *)(piVar13 + 4);
            *(undefined8 *)(piVar17 + 6) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 10);
            *(undefined8 *)(piVar17 + 8) = *(undefined8 *)(piVar13 + 8);
            *(undefined8 *)(piVar17 + 10) = uVar2;
            uVar2 = *(undefined8 *)(piVar13 + 0xe);
            *(undefined8 *)(piVar17 + 0xc) = *(undefined8 *)(piVar13 + 0xc);
            *(undefined8 *)(piVar17 + 0xe) = uVar2;
            *(undefined8 *)piVar13 = uVar3;
            *(undefined8 *)(piVar13 + 2) = uVar4;
            *(undefined8 *)(piVar13 + 4) = uVar5;
            *(undefined8 *)(piVar13 + 6) = uVar6;
            *(undefined8 *)(piVar13 + 8) = uVar7;
            *(undefined8 *)(piVar13 + 10) = uVar8;
            *(undefined8 *)(piVar13 + 0xc) = uVar9;
            *(undefined8 *)(piVar13 + 0xe) = uVar10;
          }
          iVar11 = iVar12;
        } while (iVar12 * 2 + 1 < param_2);
      }
      param_2 = param_2 + -1;
      puVar16 = puVar16 + -8;
    } while (0 < param_2);
  }
  return;
}



// FUNCTION 141f814b0 IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_> body=859 status=ok
// SIG undefined IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void AlgoImpl::
     IntroSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
               (longlong param_1,ulonglong param_2,undefined1 param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  longlong lVar18;
  int *piVar19;
  longlong *plVar20;
  int *piVar21;
  int *piVar22;
  int *piVar23;
  int *piVar24;
  int *piVar25;
  float fVar26;
  undefined1 auStack_368 [48];
  longlong local_338;
  longlong local_328;
  longlong lStack_320;
  undefined4 local_318;
  undefined1 local_310 [744];
  ulonglong local_28;
  
  if (1 < param_2) {
    local_28 = DAT_1468387a8 ^ (ulonglong)auStack_368;
    lStack_320 = param_2 * 0x40 + -0x40 + param_1;
    fVar26 = (float)(longlong)param_2;
    if ((longlong)param_2 < 0) {
      fVar26 = fVar26 + 1.8446744e+19;
    }
    local_328 = param_1;
    fVar26 = ::_guard_xfg_dispatch_icall_nop(fVar26);
    local_318 = (undefined4)(longlong)(fVar26 + fVar26);
    ::_guard_xfg_dispatch_icall_nop(local_310,0,0x2e8);
    plVar20 = &local_328;
    do {
      piVar25 = (int *)*plVar20;
      piVar23 = (int *)plVar20[1];
      lVar1 = plVar20[2];
      local_338._0_4_ = (int)lVar1;
      lVar18 = ((longlong)piVar23 - (longlong)piVar25 >> 6) + 1;
      piVar24 = piVar25;
      if ((int)local_338 != 0) {
LAB_141f81580:
        if (8 < lVar18) {
          piVar25 = piVar24 + (lVar18 / 2) * 0x10;
          if (piVar25 != piVar24) {
            uVar9 = *(undefined8 *)(piVar24 + 2);
            iVar2 = *piVar25;
            iVar3 = piVar25[1];
            iVar4 = piVar25[2];
            iVar5 = piVar25[3];
            uVar10 = *(undefined8 *)(piVar25 + 4);
            uVar11 = *(undefined8 *)(piVar25 + 6);
            uVar12 = *(undefined8 *)(piVar25 + 8);
            uVar13 = *(undefined8 *)(piVar25 + 10);
            uVar14 = *(undefined8 *)(piVar25 + 0xc);
            uVar15 = *(undefined8 *)(piVar25 + 0xe);
            *(undefined8 *)piVar25 = *(undefined8 *)piVar24;
            *(undefined8 *)(piVar25 + 2) = uVar9;
            uVar9 = *(undefined8 *)(piVar24 + 6);
            *(undefined8 *)(piVar25 + 4) = *(undefined8 *)(piVar24 + 4);
            *(undefined8 *)(piVar25 + 6) = uVar9;
            iVar6 = piVar24[9];
            iVar7 = piVar24[10];
            iVar8 = piVar24[0xb];
            piVar25[8] = piVar24[8];
            piVar25[9] = iVar6;
            piVar25[10] = iVar7;
            piVar25[0xb] = iVar8;
            uVar9 = *(undefined8 *)(piVar24 + 0xe);
            *(undefined8 *)(piVar25 + 0xc) = *(undefined8 *)(piVar24 + 0xc);
            *(undefined8 *)(piVar25 + 0xe) = uVar9;
            *piVar24 = iVar2;
            piVar24[1] = iVar3;
            piVar24[2] = iVar4;
            piVar24[3] = iVar5;
            *(undefined8 *)(piVar24 + 4) = uVar10;
            *(undefined8 *)(piVar24 + 6) = uVar11;
            *(undefined8 *)(piVar24 + 8) = uVar12;
            *(undefined8 *)(piVar24 + 10) = uVar13;
            *(undefined8 *)(piVar24 + 0xc) = uVar14;
            *(undefined8 *)(piVar24 + 0xe) = uVar15;
          }
          piVar21 = piVar23 + 0x10;
          piVar25 = piVar24;
LAB_141f815f0:
          piVar19 = piVar25;
          piVar25 = piVar19 + 0x10;
          if (piVar25 <= piVar23) goto code_r0x000141f815f9;
          goto LAB_141f81600;
        }
        for (; piVar21 = piVar24, piVar25 = piVar24, piVar24 < piVar23; piVar23 = piVar23 + -0x10) {
          while (piVar19 = piVar21, piVar25 = piVar25 + 0x10, piVar25 <= piVar23) {
            piVar21 = piVar25;
            if (*piVar25 <= *piVar19) {
              piVar21 = piVar19;
            }
          }
          if (piVar19 != piVar23) {
            uVar9 = *(undefined8 *)(piVar23 + 2);
            uVar10 = *(undefined8 *)piVar19;
            uVar11 = *(undefined8 *)(piVar19 + 2);
            uVar12 = *(undefined8 *)(piVar19 + 4);
            uVar13 = *(undefined8 *)(piVar19 + 6);
            uVar14 = *(undefined8 *)(piVar19 + 8);
            uVar15 = *(undefined8 *)(piVar19 + 10);
            uVar16 = *(undefined8 *)(piVar19 + 0xc);
            uVar17 = *(undefined8 *)(piVar19 + 0xe);
            *(undefined8 *)piVar19 = *(undefined8 *)piVar23;
            *(undefined8 *)(piVar19 + 2) = uVar9;
            uVar9 = *(undefined8 *)(piVar23 + 6);
            *(undefined8 *)(piVar19 + 4) = *(undefined8 *)(piVar23 + 4);
            *(undefined8 *)(piVar19 + 6) = uVar9;
            uVar9 = *(undefined8 *)(piVar23 + 10);
            *(undefined8 *)(piVar19 + 8) = *(undefined8 *)(piVar23 + 8);
            *(undefined8 *)(piVar19 + 10) = uVar9;
            uVar9 = *(undefined8 *)(piVar23 + 0xe);
            *(undefined8 *)(piVar19 + 0xc) = *(undefined8 *)(piVar23 + 0xc);
            *(undefined8 *)(piVar19 + 0xe) = uVar9;
            *(undefined8 *)piVar23 = uVar10;
            *(undefined8 *)(piVar23 + 2) = uVar11;
            *(undefined8 *)(piVar23 + 4) = uVar12;
            *(undefined8 *)(piVar23 + 6) = uVar13;
            *(undefined8 *)(piVar23 + 8) = uVar14;
            *(undefined8 *)(piVar23 + 10) = uVar15;
            *(undefined8 *)(piVar23 + 0xc) = uVar16;
            *(undefined8 *)(piVar23 + 0xe) = uVar17;
          }
        }
        goto LAB_141f8173b;
      }
LAB_141f8172c:
      local_338 = lVar1;
      HeapSortInternal<FBoneTransform,FIdentityFunctor,TDereferenceWrapper<FBoneTransform,FCompareBoneTransformIndex>_>
                (piVar25,lVar18,param_3,param_4);
LAB_141f8173b:
      plVar20 = plVar20 + -3;
    } while (&local_328 <= plVar20);
  }
  return;
code_r0x000141f815f9:
  if (*piVar25 <= *piVar24) goto LAB_141f815f0;
LAB_141f81600:
  do {
    piVar22 = piVar21;
    piVar21 = piVar22 + -0x10;
    if (piVar21 <= piVar24) break;
  } while (*piVar24 <= *piVar21);
  if (piVar25 <= piVar21) {
    if (piVar25 != piVar21) {
      uVar9 = *(undefined8 *)(piVar22 + -0xe);
      iVar2 = *piVar25;
      iVar3 = piVar19[0x11];
      iVar4 = piVar19[0x12];
      iVar5 = piVar19[0x13];
      uVar10 = *(undefined8 *)(piVar19 + 0x14);
      uVar11 = *(undefined8 *)(piVar19 + 0x16);
      uVar12 = *(undefined8 *)(piVar19 + 0x18);
      uVar13 = *(undefined8 *)(piVar19 + 0x1a);
      uVar14 = *(undefined8 *)(piVar19 + 0x1c);
      uVar15 = *(undefined8 *)(piVar19 + 0x1e);
      *(undefined8 *)piVar25 = *(undefined8 *)piVar21;
      *(undefined8 *)(piVar19 + 0x12) = uVar9;
      uVar9 = *(undefined8 *)(piVar22 + -10);
      *(undefined8 *)(piVar19 + 0x14) = *(undefined8 *)(piVar22 + -0xc);
      *(undefined8 *)(piVar19 + 0x16) = uVar9;
      iVar6 = piVar22[-7];
      iVar7 = piVar22[-6];
      iVar8 = piVar22[-5];
      piVar19[0x18] = piVar22[-8];
      piVar19[0x19] = iVar6;
      piVar19[0x1a] = iVar7;
      piVar19[0x1b] = iVar8;
      uVar9 = *(undefined8 *)(piVar22 + -2);
      *(undefined8 *)(piVar19 + 0x1c) = *(undefined8 *)(piVar22 + -4);
      *(undefined8 *)(piVar19 + 0x1e) = uVar9;
      *piVar21 = iVar2;
      piVar22[-0xf] = iVar3;
      piVar22[-0xe] = iVar4;
      piVar22[-0xd] = iVar5;
      *(undefined8 *)(piVar22 + -0xc) = uVar10;
      *(undefined8 *)(piVar22 + -10) = uVar11;
      *(undefined8 *)(piVar22 + -8) = uVar12;
      *(undefined8 *)(piVar22 + -6) = uVar13;
      *(undefined8 *)(piVar22 + -4) = uVar14;
      *(undefined8 *)(piVar22 + -2) = uVar15;
    }
    goto LAB_141f815f0;
  }
  if (piVar24 != piVar21) {
    uVar9 = *(undefined8 *)(piVar22 + -0xe);
    iVar2 = *piVar24;
    iVar3 = piVar24[1];
    iVar4 = piVar24[2];
    iVar5 = piVar24[3];
    uVar10 = *(undefined8 *)(piVar24 + 4);
    uVar11 = *(undefined8 *)(piVar24 + 6);
    uVar12 = *(undefined8 *)(piVar24 + 8);
    uVar13 = *(undefined8 *)(piVar24 + 10);
    uVar14 = *(undefined8 *)(piVar24 + 0xc);
    uVar15 = *(undefined8 *)(piVar24 + 0xe);
    *(undefined8 *)piVar24 = *(undefined8 *)piVar21;
    *(undefined8 *)(piVar24 + 2) = uVar9;
    uVar9 = *(undefined8 *)(piVar22 + -10);
    *(undefined8 *)(piVar24 + 4) = *(undefined8 *)(piVar22 + -0xc);
    *(undefined8 *)(piVar24 + 6) = uVar9;
    iVar6 = piVar22[-7];
    iVar7 = piVar22[-6];
    iVar8 = piVar22[-5];
    piVar24[8] = piVar22[-8];
    piVar24[9] = iVar6;
    piVar24[10] = iVar7;
    piVar24[0xb] = iVar8;
    uVar9 = *(undefined8 *)(piVar22 + -2);
    *(undefined8 *)(piVar24 + 0xc) = *(undefined8 *)(piVar22 + -4);
    *(undefined8 *)(piVar24 + 0xe) = uVar9;
    *piVar21 = iVar2;
    piVar22[-0xf] = iVar3;
    piVar22[-0xe] = iVar4;
    piVar22[-0xd] = iVar5;
    *(undefined8 *)(piVar22 + -0xc) = uVar10;
    *(undefined8 *)(piVar22 + -10) = uVar11;
    *(undefined8 *)(piVar22 + -8) = uVar12;
    *(undefined8 *)(piVar22 + -6) = uVar13;
    *(undefined8 *)(piVar22 + -4) = uVar14;
    *(undefined8 *)(piVar22 + -2) = uVar15;
  }
  local_338._0_4_ = (int)local_338 + -1;
  if ((longlong)((longlong)piVar21 + (-0x40 - (longlong)piVar24) & 0xffffffffffffffc0U) <
      (longlong)((longlong)piVar23 - (longlong)piVar25 & 0xffffffffffffffc0U)) {
    if (piVar25 < piVar23) {
      *plVar20 = (longlong)piVar25;
      plVar20[1] = (longlong)piVar23;
      *(int *)(plVar20 + 2) = (int)local_338;
      plVar20 = plVar20 + 3;
    }
    if (piVar21 <= piVar24 + 0x10) goto LAB_141f8173b;
    piVar23 = piVar22 + -0x20;
    piVar25 = piVar24;
  }
  else {
    if (piVar24 + 0x10 < piVar21) {
      *plVar20 = (longlong)piVar24;
      plVar20[1] = (longlong)(piVar22 + -0x20);
      *(int *)(plVar20 + 2) = (int)local_338;
      plVar20 = plVar20 + 3;
    }
    if (piVar23 <= piVar25) goto LAB_141f8173b;
  }
  lVar18 = ((longlong)piVar23 - (longlong)piVar25 >> 6) + 1;
  piVar24 = piVar25;
  if ((int)local_338 == 0) goto LAB_141f8172c;
  goto LAB_141f81580;
}



// FUNCTION 141f81810 FUN_141f81810 body=306 status=ok
// SIG undefined FUN_141f81810(void)

void FUN_141f81810(longlong param_1,longlong *param_2,longlong *param_3)

{
  bool bVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (*(longlong *)(param_1 + 0x60) == *(longlong *)(param_1 + 0x58)) {
    return;
  }
  *param_2 = 0;
  lVar5 = *param_3;
  if ((lVar5 == 0) ||
     (lVar3 = *(longlong *)(param_1 + 0x58), *(int *)(lVar5 + 0x608) == *(int *)(lVar5 + 0x634)))
  goto LAB_141f8192f;
  lVar6 = *(longlong *)(lVar5 + 0x640);
  if (*(longlong *)(lVar5 + 0x640) == 0) {
    lVar6 = lVar5 + 0x638;
  }
  iVar2 = *(int *)(lVar6 + ((longlong)((int)((ulonglong)lVar3 >> 0x20) + (int)lVar3) &
                           (longlong)*(int *)(lVar5 + 0x648) - 1U) * 4);
  if (iVar2 == -1) goto LAB_141f8192f;
  lVar5 = *(longlong *)(lVar5 + 0x600);
  while (lVar6 = (longlong)iVar2, *(longlong *)(lVar5 + lVar6 * 0x18) != lVar3) {
    iVar2 = *(int *)(lVar5 + 0x10 + lVar6 * 0x18);
    if (iVar2 == -1) {
      *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
      return;
    }
  }
  if (((iVar2 == -1) || (lVar5 = lVar5 + lVar6 * 0x18, lVar5 == 0)) ||
     (plVar4 = (longlong *)(lVar5 + 8), plVar4 == (longlong *)0x0)) goto LAB_141f8192f;
  lVar5 = *plVar4;
  if (lVar5 == 0) {
LAB_141f81925:
    lVar5 = 0;
  }
  else {
    lVar3 = UBlendSpaceBase::GetPrivateStaticClass();
    if ((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x90) < *(int *)(lVar3 + 0x90)) ||
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x88) + (longlong)*(int *)(lVar3 + 0x90) * 8)
        != lVar3 + 0x88)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) goto LAB_141f81925;
  }
  *param_2 = lVar5;
LAB_141f8192f:
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x58);
  return;
}



// FUNCTION 141f81950 FUN_141f81950 body=333 status=ok
// SIG undefined FUN_141f81950(void)

undefined4 * FUN_141f81950(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 6) = uVar6;
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar3 = param_2[0xd];
  uVar4 = param_2[0xe];
  uVar5 = param_2[0xf];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar3;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  param_1[0x12] = param_2[0x12];
  *(undefined8 *)(param_1 + 0x14) = 0;
  iVar1 = param_2[0x16];
  pvVar2 = *(void **)(param_2 + 0x14);
  param_1[0x16] = iVar1;
  if (iVar1 == 0) {
    param_1[0x17] = 0;
  }
  else {
    TArray<int,FDefaultAllocator>::ResizeForCopy(param_1 + 0x14,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x14),pvVar2,(longlong)iVar1 << 2);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  iVar1 = param_2[0x1a];
  pvVar2 = *(void **)(param_2 + 0x18);
  param_1[0x1a] = iVar1;
  if (iVar1 == 0) {
    param_1[0x1b] = 0;
  }
  else {
    TArray<FFormatArgumentValue,FDefaultAllocator>::ResizeForCopy(param_1 + 0x18,iVar1,0);
    _guard_xfg_dispatch_icall_nop(*(void **)(param_1 + 0x18),pvVar2,(longlong)iVar1 * 0x30);
  }
  FUN_141f84030(param_1 + 0x1c,param_2 + 0x1c);
  *(undefined8 *)(param_1 + 0x2e) = *(undefined8 *)(param_2 + 0x2e);
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = param_2[0x31];
  *(undefined8 *)(param_1 + 0x32) = *(undefined8 *)(param_2 + 0x32);
  param_1[0x34] = param_2[0x34];
  *(undefined1 *)(param_1 + 0x35) = *(undefined1 *)(param_2 + 0x35);
  param_1[0x36] = param_2[0x36];
  return param_1;
}



// FUNCTION 141f81aa0 FUN_141f81aa0 body=294 status=ok
// SIG undefined FUN_141f81aa0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f81aa0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_141f81fd0();
  *param_1 = &PTR_FUN_144f2fa80;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0;
  param_1[0x34] = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  uVar1 = uRam0000000146acadfc;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined4 *)(param_1 + 0x3b) = 0;
  *(uint *)((longlong)param_1 + 0x1dc) = uVar1;
  uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x3e) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 500) = uVar1;
  *(uint *)(param_1 + 0x3f) = uVar2;
  *(uint *)((longlong)param_1 + 0x1fc) = uVar3;
  param_1[0x40] = 0;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  uVar1 = uRam0000000146acadfc;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(uint *)((longlong)param_1 + 0x22c) = uVar1;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x48) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x244) = uVar1;
  *(uint *)(param_1 + 0x49) = uVar2;
  *(uint *)((longlong)param_1 + 0x24c) = uVar3;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  return param_1;
}



// FUNCTION 141f81bd0 FUN_141f81bd0 body=617 status=ok
// SIG undefined FUN_141f81bd0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f81bd0(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_141206ee0();
  *(undefined1 *)(param_1 + 0x28) = 0;
  *param_1 = &PTR_FUN_144f2f708;
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  param_1[0x30] = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x1b4) = 0;
  param_1[0x37] = 0;
  *(undefined2 *)(param_1 + 0x38) = 1;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x39) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x3b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1dc) = 0;
  *(undefined2 *)(param_1 + 0x3c) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x1e4) = 4;
  *(undefined4 *)(param_1 + 0x3d) = 1;
  *(undefined2 *)((longlong)param_1 + 0x1ec) = 0x101;
  *(undefined1 *)((longlong)param_1 + 0x1ee) = 1;
  *(undefined2 *)(param_1 + 0x41) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  *(undefined1 *)(param_1 + 0x49) = 1;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined4 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x28c) = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
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
  uVar1 = uRam0000000146acadfc;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  *(undefined4 *)((longlong)param_1 + 0x354) = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  *(uint *)((longlong)param_1 + 0x35c) = uVar1;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x6e) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x374) = uVar1;
  *(uint *)(param_1 + 0x6f) = uVar2;
  *(uint *)((longlong)param_1 + 0x37c) = uVar3;
  uVar1 = uRam0000000146acadfc;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)((longlong)param_1 + 900) = 0;
  *(undefined4 *)(param_1 + 0x71) = 0;
  *(uint *)((longlong)param_1 + 0x38c) = uVar1;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x74) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x3a4) = uVar1;
  *(uint *)(param_1 + 0x75) = uVar2;
  *(uint *)((longlong)param_1 + 0x3ac) = uVar3;
  return param_1;
}



// FUNCTION 141f81e40 FUN_141f81e40 body=275 status=ok
// SIG undefined FUN_141f81e40(void)

undefined8 * FUN_141f81e40(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_Initialize_AnyThread_144f2fbd0;
  *(undefined4 *)(param_1 + 6) = 0xffffffff;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  param_1[10] = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 100) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined2 *)((longlong)param_1 + 0x74) = 0x100;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x11] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x12,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1d) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xec) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)((longlong)param_1 + 0xfc) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0x41200000;
  param_1[0x21] = 0x41200000;
  *(undefined1 *)(param_1 + 0x22) = 0;
  *(undefined2 *)((longlong)param_1 + 0x114) = 0;
  return param_1;
}



// FUNCTION 141f81f60 FUN_141f81f60 body=63 status=ok
// SIG undefined FUN_141f81f60(void)

undefined8 * FUN_141f81f60(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f316b8;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  return param_1;
}



// FUNCTION 141f81fa0 FUN_141f81fa0 body=43 status=ok
// SIG undefined FUN_141f81fa0(void)

undefined8 * FUN_141f81fa0(undefined8 *param_1)

{
  FUN_141f81fd0();
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *param_1 = &PTR_FUN_144f2fcc0;
  return param_1;
}



// FUNCTION 141f81fd0 FUN_141f81fd0 body=194 status=ok
// SIG undefined FUN_141f81fd0(void)

undefined8 * FUN_141f81fd0(undefined8 *param_1)

{
  FUN_142286ad0();
  *(undefined4 *)((longlong)param_1 + 0x74) = 0x3f800000;
  *param_1 = &PTR_FUN_144f2f930;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0xf) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined4 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0x7f7fffff;
  *(undefined4 *)(param_1 + 0x29) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  return param_1;
}



// FUNCTION 141f820a0 FUN_141f820a0 body=196 status=ok
// SIG undefined FUN_141f820a0(void)

undefined8 * FUN_141f820a0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f317f0;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0xbf800000;
  *(undefined8 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  *(undefined1 *)((longlong)param_1 + 0x19c) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x35) = 0;
  *(uint *)((longlong)param_1 + 0x1ac) = *(uint *)((longlong)param_1 + 0x1ac) & 0xfffffe00;
  *(undefined1 *)(param_1 + 0x36) = 0;
  return param_1;
}



// FUNCTION 141f82170 FUN_141f82170 body=110 status=ok
// SIG undefined FUN_141f82170(void)

undefined8 * FUN_141f82170(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31928;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  return param_1;
}



// FUNCTION 141f821e0 FUN_141f821e0 body=111 status=ok
// SIG undefined FUN_141f821e0(void)

undefined8 * FUN_141f821e0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31a60;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0x1000000;
  return param_1;
}



// FUNCTION 141f82250 FUN_141f82250 body=137 status=ok
// SIG undefined FUN_141f82250(void)

undefined8 * FUN_141f82250(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31b98;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  return param_1;
}



// FUNCTION 141f822e0 FAnimNode_CopyPoseFromMesh body=180 status=ok
// SIG undefined FAnimNode_CopyPoseFromMesh(void)

undefined8 * FAnimNode_CopyPoseFromMesh::FAnimNode_CopyPoseFromMesh(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f2fe10;
  FWeakObjectPtr::operator=(param_1 + 6,0);
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return param_1;
}



// FUNCTION 141f823f0 FUN_141f823f0 body=342 status=ok
// SIG undefined FUN_141f823f0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f823f0(undefined8 *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31cd0;
  uVar1 = uRam00000001468b5b78;
  param_1[0x28] = _DAT_1468b5b70;
  param_1[0x29] = uVar1;
  uVar1 = uRam00000001468b5b88;
  param_1[0x2a] = _DAT_1468b5b80;
  param_1[0x2b] = uVar1;
  uVar1 = uRam00000001468b5b98;
  param_1[0x2c] = _DAT_1468b5b90;
  param_1[0x2d] = uVar1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x31) = 0xffffffff;
  param_1[0x33] = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0xffffffffffffffff;
  uVar2 = uRam0000000146acadfc;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(uint *)((longlong)param_1 + 0x1cc) = uVar2;
  uVar2 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar3 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar4 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x3c) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x1e4) = uVar2;
  *(uint *)(param_1 + 0x3d) = uVar3;
  *(uint *)((longlong)param_1 + 0x1ec) = uVar4;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  param_1[0x3f] = 0;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0xffffffff;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x22c) = 10;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 141f82550 FUN_141f82550 body=191 status=ok
// SIG undefined FUN_141f82550(void)

undefined8 * FUN_141f82550(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31e10;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  param_1[0x2e] = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  param_1[0x31] = 0;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f000000;
  return param_1;
}



// FUNCTION 141f82610 FUN_141f82610 body=90 status=ok
// SIG undefined FUN_141f82610(void)

undefined8 * FUN_141f82610(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f31f48;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x28) = 0x3c23d70a;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0xc;
  return param_1;
}



// FUNCTION 141f82670 FUN_141f82670 body=423 status=ok
// SIG undefined FUN_141f82670(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f82670(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f32080;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  param_1[0x2e] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 0x33) = 0xffffffff;
  param_1[0x34] = 0;
  param_1[0x35] = 0xffffffffffffffff;
  uVar1 = uRam0000000146acadfc;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x37) = 0;
  *(uint *)((longlong)param_1 + 0x1bc) = uVar1;
  uVar1 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar2 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar3 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x3a) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x1d4) = uVar1;
  *(uint *)(param_1 + 0x3b) = uVar2;
  *(uint *)((longlong)param_1 + 0x1dc) = uVar3;
  *(undefined1 *)(param_1 + 0x30) = 0;
  param_1[0x31] = 0;
  param_1[0x3c] = 0x42c80000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x1ec) = 1;
  *(undefined4 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)((longlong)param_1 + 500) = 0x3f800000;
  FAxis::FAxis((longlong)param_1 + 0x1fc,&DAT_1464dcc58);
  *(undefined2 *)((longlong)param_1 + 0x20c) = 0;
  param_1[0x42] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x43) = 0;
  FAxis::FAxis((longlong)param_1 + 0x21c,&DAT_1464dcc68);
  *(undefined4 *)((longlong)param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined8 *)((longlong)param_1 + 0x234) = 0;
  *(undefined8 *)((longlong)param_1 + 0x23c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x244) = DAT_1468b5d98;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  FAxis::FAxis((longlong)param_1 + 0x274,&DAT_1464aa7a8);
  return param_1;
}



// FUNCTION 141f82870 FUN_141f82870 body=301 status=ok
// SIG undefined FUN_141f82870(void)

undefined8 * FUN_141f82870(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_141206ee0();
  cVar1 = '\0';
  *param_1 = &PTR_FUN_144f321b8;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x181) = 3;
  param_1[0x31] = 0;
  cVar2 = '\0';
  if (*(char *)(param_2 + 0xe) != '\0') {
    cVar2 = '\x02' - (*(char *)((longlong)param_2 + 0x73) != '\0');
  }
  *(char *)((longlong)param_1 + 0x17c) = cVar2;
  cVar2 = cVar1;
  if (*(char *)((longlong)param_2 + 0x71) != '\0') {
    cVar2 = '\x02' - (*(char *)((longlong)param_2 + 0x74) != '\0');
  }
  *(char *)((longlong)param_1 + 0x17d) = cVar2;
  if (*(char *)((longlong)param_2 + 0x72) != '\0') {
    cVar1 = '\x02' - (*(char *)((longlong)param_2 + 0x75) != '\0');
  }
  *(char *)((longlong)param_1 + 0x17e) = cVar1;
  *(undefined1 *)((longlong)param_1 + 0x17f) = *(undefined1 *)((longlong)param_2 + 0x79);
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)((longlong)param_2 + 0x7a);
  param_1[0x28] = *param_2;
  param_1[0x2b] = param_2[0x14];
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x15);
  *(undefined8 *)((longlong)param_1 + 0x164) = *(undefined8 *)((longlong)param_2 + 0xac);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0xb4);
  uVar3 = *(undefined4 *)(param_2 + 0x18);
  param_1[0x2e] = param_2[0x17];
  *(undefined4 *)(param_1 + 0x2f) = uVar3;
  uVar3 = FInputScaleBias::ApplyTo(param_1 + 0xb,*(undefined4 *)((longlong)param_1 + 0x54));
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar3;
  return param_1;
}



// FUNCTION 141f829a0 FUN_141f829a0 body=180 status=ok
// SIG undefined FUN_141f829a0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f829a0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f321b8;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x2c) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x164) = DAT_1468b5da0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = DAT_1468b5da8;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x1000000;
  *(undefined2 *)(param_1 + 0x30) = 0x101;
  param_1[0x31] = 0;
  return param_1;
}



// FUNCTION 141f82ac0 FUN_141f82ac0 body=163 status=ok
// SIG undefined FUN_141f82ac0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f82ac0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f322f0;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2b) = 1;
  *(undefined8 *)((longlong)param_1 + 0x15c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x164) = DAT_1468b5d98;
  param_1[0x2d] = DAT_1468b5da0;
  *(undefined4 *)(param_1 + 0x2e) = DAT_1468b5da8;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  return param_1;
}



// FUNCTION 141f82b70 FUN_141f82b70 body=71 status=ok
// SIG undefined FUN_141f82b70(void)

undefined8 * FUN_141f82b70(undefined8 *param_1)

{
  FUN_141f82ce0();
  *param_1 = &PTR_FUN_144f30418;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x1a] = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  return param_1;
}



// FUNCTION 141f82bc0 FUN_141f82bc0 body=286 status=ok
// SIG undefined FUN_141f82bc0(void)

undefined8 * FUN_141f82bc0(undefined8 *param_1)

{
  FUN_141f82ce0();
  *param_1 = &PTR_FUN_144f30568;
  param_1[0x17] = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)((longlong)param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x22) = 0;
  *(undefined4 *)(param_1 + 0x21) = 3;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x111) = 2;
  *(undefined4 *)((longlong)param_1 + 0x114) = 0x38d1b717;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x27) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  *(undefined4 *)((longlong)param_1 + 0x14c) = 0x3e800000;
  *(undefined2 *)(param_1 + 0x29) = 0x100;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  return param_1;
}



// FUNCTION 141f82ce0 FUN_141f82ce0 body=97 status=ok
// SIG undefined FUN_141f82ce0(void)

undefined8 * FUN_141f82ce0(undefined8 *param_1)

{
  FUN_142286ad0();
  *param_1 = &PTR_FUN_144f302c8;
  param_1[0xd] = 0;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return param_1;
}



// FUNCTION 141f82de0 FUN_141f82de0 body=183 status=ok
// SIG undefined FUN_141f82de0(void)

undefined8 * FUN_141f82de0(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = &PTR_FUN_144f307a8;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xffffffffffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x15,0x3e4ccccd);
  *(undefined4 *)(param_1 + 0x1d) = 0;
  *(undefined4 *)((longlong)param_1 + 0xec) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return param_1;
}



// FUNCTION 141f82fe0 FUN_141f82fe0 body=114 status=ok
// SIG undefined FUN_141f82fe0(void)

undefined8 * FUN_141f82fe0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f329f8;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)((longlong)param_1 + 0x174) = 0;
  return param_1;
}



// FUNCTION 141f83060 FUN_141f83060 body=270 status=ok
// SIG undefined FUN_141f83060(void)

undefined8 * FUN_141f83060(undefined8 *param_1)

{
  FUN_141f81fd0();
  *param_1 = &PTR_FUN_144f30a78;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  *(undefined2 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  param_1[0x35] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x36,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = 0;
  param_1[0x40] = 0x3f800000;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x20c) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)((longlong)param_1 + 0x21c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0x41200000;
  param_1[0x45] = 0x41200000;
  *(undefined1 *)(param_1 + 0x46) = 0;
  return param_1;
}



// FUNCTION 141f832a0 FUN_141f832a0 body=415 status=ok
// SIG undefined FUN_141f832a0(void)

undefined8 * FUN_141f832a0(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f32da8;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  param_1[0x2b] = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x2d) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x2e) = 0x101;
  *(undefined4 *)((longlong)param_1 + 0x174) = 2;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  *(undefined4 *)(param_1 + 0x32) = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0x33,0x3e4ccccd);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(undefined1 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x46) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x51) = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  *(undefined1 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  return param_1;
}



// FUNCTION 141f83440 FUN_141f83440 body=239 status=ok
// SIG undefined FUN_141f83440(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f83440(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f32518;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x2b) = 0;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined1 *)((longlong)param_1 + 0x172) = 0;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0x42480000;
  *(undefined4 *)((longlong)param_1 + 0x164) = 0x40800000;
  *(undefined4 *)(param_1 + 0x2d) = 0x43800000;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x1010100;
  *(undefined4 *)((longlong)param_1 + 0x17c) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x184) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x18c) = DAT_1468b5d98;
  param_1[0x32] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x33) = DAT_1468b5d98;
  *(undefined8 *)((longlong)param_1 + 0x19c) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = DAT_1468b5d98;
  return param_1;
}



// FUNCTION 141f83530 FUN_141f83530 body=531 status=ok
// SIG undefined FUN_141f83530(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f83530(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f32650;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2b) = 2;
  *(undefined2 *)((longlong)param_1 + 0x15c) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x41200000;
  FRuntimeFloatCurve::FRuntimeFloatCurve(param_1 + 0x2d);
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 500) = 0x3f800000;
  param_1[0x3f] = 0x3f800000;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x41) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0x41200000;
  *(undefined8 *)((longlong)param_1 + 0x214) = 0x41200000;
  *(undefined1 *)((longlong)param_1 + 0x21c) = 0;
  *(undefined1 *)(param_1 + 0x44) = 0;
  *(undefined4 *)((longlong)param_1 + 0x224) = 0;
  param_1[0x45] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x46) = DAT_1468b5d98;
  *(undefined1 *)((longlong)param_1 + 0x234) = 0;
  param_1[0x47] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x254) = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  uVar3 = uRam0000000146acadfc;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((longlong)param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  *(uint *)((longlong)param_1 + 0x27c) = uVar3;
  uVar3 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar4 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar5 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x52) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x294) = uVar3;
  *(uint *)(param_1 + 0x53) = uVar4;
  *(uint *)((longlong)param_1 + 0x29c) = uVar5;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  uVar1 = FRuntimeFloatCurve::GetRichCurve(param_1 + 0x2d);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res10,0,0x41200000,0,*puVar2);
  puVar2 = (undefined4 *)FKeyHandle::FKeyHandle(local_res8);
  FRichCurve::AddKey(uVar1,local_res10,0x3f800000,0x40a00000,0,*puVar2);
  return param_1;
}



// FUNCTION 141f83750 FUN_141f83750 body=209 status=ok
// SIG undefined FUN_141f83750(void)

undefined8 * FUN_141f83750(undefined8 *param_1)

{
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f32788;
  param_1[0x28] = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  FAxis::FAxis(param_1 + 0x2b,&DAT_1464aa7a8);
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined1 *)((longlong)param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xffffffff;
  FAxis::FAxis(param_1 + 0x30,&DAT_1464aa7a8);
  FAxis::FAxis(param_1 + 0x32,&DAT_1464aa7a8);
  param_1[0x34] = 0x42b40000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  param_1[0x36] = 0;
  *(undefined2 *)(param_1 + 0x37) = 0xffff;
  return param_1;
}



// FUNCTION 141f83830 FUN_141f83830 body=511 status=ok
// SIG undefined FUN_141f83830(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_141f83830(undefined8 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  FUN_141206ee0();
  *param_1 = &PTR_FUN_144f328c0;
  param_1[0x28] = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x29) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(uint *)(param_1 + 0x2b) = *(uint *)(param_1 + 0x2b) & 0xfffffffe;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2c) = 0x3f99999a;
  *(undefined4 *)((longlong)param_1 + 0x164) = (undefined4)DAT_1468b5d88;
  uVar1 = DAT_1468b5d88._4_4_;
  *(uint *)((longlong)param_1 + 0x16c) = *(uint *)((longlong)param_1 + 0x16c) & 0xfffffffc;
  *(undefined4 *)(param_1 + 0x2d) = uVar1;
  *(undefined1 *)(param_1 + 0x2e) = 1;
  param_1[0x2f] = 0;
  param_1[0x30] = _DAT_1468b5d90;
  *(undefined4 *)(param_1 + 0x31) = DAT_1468b5d98;
  param_1[0x33] = 0;
  *(undefined1 *)((longlong)param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x35) = 0xffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0xffffffffffffffff;
  uVar2 = uRam0000000146acadfc;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  *(undefined4 *)(param_1 + 0x39) = 0;
  *(uint *)((longlong)param_1 + 0x1cc) = uVar2;
  uVar2 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar3 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar4 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x3c) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x1e4) = uVar2;
  *(uint *)(param_1 + 0x3d) = uVar3;
  *(uint *)((longlong)param_1 + 0x1ec) = uVar4;
  *(undefined1 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x3e) = 1;
  *(undefined8 *)((longlong)param_1 + 500) = _DAT_1468b5d90;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = DAT_1468b5d98;
  param_1[0x40] = 0;
  param_1[0x43] = 0;
  *(undefined1 *)((longlong)param_1 + 0x224) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x45) = 0xffffffff;
  param_1[0x46] = 0;
  param_1[0x47] = 0xffffffffffffffff;
  uVar2 = uRam0000000146acadfc;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x244) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(uint *)((longlong)param_1 + 0x24c) = uVar2;
  uVar2 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar3 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar4 = uRam0000000146acadfc & uRam0000000146acae0c;
  *(uint *)(param_1 + 0x4c) = _DAT_146acadf0 & _DAT_146acae00;
  *(uint *)((longlong)param_1 + 0x264) = uVar2;
  *(uint *)(param_1 + 0x4d) = uVar3;
  *(uint *)((longlong)param_1 + 0x26c) = uVar4;
  *(undefined1 *)(param_1 + 0x42) = 0;
  param_1[0x43] = 0;
  *(undefined1 *)(param_1 + 0x4e) = 1;
  FAxis::FAxis((longlong)param_1 + 0x274,&DAT_1464aa7a8);
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  param_1[0x51] = 0xffffffffffffffff;
  return param_1;
}



// FUNCTION 141f83a30 FAnimPhysLinkedBody body=800 status=ok
// SIG undefined FAnimPhysLinkedBody(void)

undefined8 * FAnimPhysLinkedBody::FAnimPhysLinkedBody(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)((longlong)param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar1 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  uVar1 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x11];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = uVar1;
  uVar1 = param_2[0x13];
  param_1[0x12] = param_2[0x12];
  param_1[0x13] = uVar1;
  uVar1 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = uVar1;
  uVar1 = param_2[0x17];
  param_1[0x16] = param_2[0x16];
  param_1[0x17] = uVar1;
  param_1[0x18] = param_2[0x18];
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
  *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
  *(undefined4 *)((longlong)param_1 + 0xd4) = *(undefined4 *)((longlong)param_2 + 0xd4);
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)((longlong)param_1 + 0xdc) = *(undefined4 *)((longlong)param_2 + 0xdc);
  param_1[0x1c] = param_2[0x1c];
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
  *(undefined4 *)(param_1 + 0x1e) = *(undefined4 *)(param_2 + 0x1e);
  *(undefined4 *)((longlong)param_1 + 0xf4) = *(undefined4 *)((longlong)param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined4 *)((longlong)param_1 + 0xfc) = *(undefined4 *)((longlong)param_2 + 0xfc);
  param_1[0x20] = param_2[0x20];
  *(undefined4 *)(param_1 + 0x21) = *(undefined4 *)(param_2 + 0x21);
  *(undefined4 *)(param_1 + 0x22) = *(undefined4 *)(param_2 + 0x22);
  *(undefined4 *)((longlong)param_1 + 0x114) = *(undefined4 *)((longlong)param_2 + 0x114);
  *(undefined4 *)(param_1 + 0x23) = *(undefined4 *)(param_2 + 0x23);
  *(undefined4 *)((longlong)param_1 + 0x11c) = *(undefined4 *)((longlong)param_2 + 0x11c);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  uVar1 = *(undefined8 *)((longlong)param_2 + 300);
  *(undefined8 *)((longlong)param_1 + 0x124) = *(undefined8 *)((longlong)param_2 + 0x124);
  *(undefined8 *)((longlong)param_1 + 300) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x134) = *(undefined8 *)((longlong)param_2 + 0x134);
  *(undefined1 *)((longlong)param_1 + 0x13c) = *(undefined1 *)((longlong)param_2 + 0x13c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined1 *)((longlong)param_1 + 0x144) = *(undefined1 *)((longlong)param_2 + 0x144);
  *(undefined4 *)(param_1 + 0x29) = *(undefined4 *)(param_2 + 0x29);
  *(undefined4 *)((longlong)param_1 + 0x14c) = *(undefined4 *)((longlong)param_2 + 0x14c);
  param_1[0x2a] = param_2[0x2a];
  *(undefined4 *)(param_1 + 0x2b) = *(undefined4 *)(param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)((longlong)param_1 + 0x164) = *(undefined4 *)((longlong)param_2 + 0x164);
  *(undefined4 *)(param_1 + 0x2d) = *(undefined4 *)(param_2 + 0x2d);
  *(undefined4 *)((longlong)param_1 + 0x16c) = *(undefined4 *)((longlong)param_2 + 0x16c);
  param_1[0x2e] = param_2[0x2e];
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x2f);
  *(undefined8 *)((longlong)param_1 + 0x17c) = *(undefined8 *)((longlong)param_2 + 0x17c);
  *(undefined4 *)((longlong)param_1 + 0x184) = *(undefined4 *)((longlong)param_2 + 0x184);
  param_1[0x32] = param_2[0x32];
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  *(undefined1 *)((longlong)param_1 + 0x19c) = *(undefined1 *)((longlong)param_2 + 0x19c);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  param_1[0x35] = 0;
  TArray<FAnimPhysShape,FDefaultAllocator>::CopyToEmpty<FAnimPhysShape>
            (param_1 + 0x35,param_2[0x35],*(undefined4 *)(param_2 + 0x36),0,0);
  uVar1 = param_2[0x39];
  param_1[0x38] = param_2[0x38];
  param_1[0x39] = uVar1;
  param_1[0x3a] = param_2[0x3a];
  param_1[0x3c] = param_2[0x3c];
  return param_1;
}



// FUNCTION 141f83d50 FUN_141f83d50 body=645 status=ok
// SIG undefined FUN_141f83d50(void)

undefined8 * FUN_141f83d50(undefined8 *param_1)

{
  FUN_14083cb80();
  *param_1 = &PTR_FUN_144f31638;
  param_1[0xd8] = 0;
  param_1[0xd9] = 0;
  param_1[0xda] = 0;
  param_1[0xdb] = 0;
  *(undefined1 *)(param_1 + 0xdc) = 0;
  param_1[0xd7] = &PTR_Initialize_AnyThread_144f2fbd0;
  *(undefined4 *)(param_1 + 0xdd) = 0xffffffff;
  param_1[0xde] = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0xffffffff;
  param_1[0xe1] = 0;
  *(undefined1 *)(param_1 + 0xe2) = 0;
  *(undefined4 *)(param_1 + 0xe3) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x71c) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x724) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe5) = 0;
  *(undefined2 *)((longlong)param_1 + 0x72c) = 0x100;
  param_1[0xe6] = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  param_1[0xe8] = 0;
  FAlphaBlend::FAlphaBlend(param_1 + 0xe9,0x3e4ccccd);
  *(undefined1 *)(param_1 + 0xf0) = 0;
  param_1[0xf1] = 0;
  *(undefined4 *)((longlong)param_1 + 0x794) = 0;
  param_1[0xf3] = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x7a4) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x7ac) = 0;
  *(undefined4 *)(param_1 + 0xf6) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined4 *)((longlong)param_1 + 0x7bc) = 0x41200000;
  param_1[0xf8] = 0x41200000;
  *(undefined1 *)(param_1 + 0xf9) = 0;
  *(undefined2 *)((longlong)param_1 + 0x7cc) = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  *(undefined1 *)(param_1 + 0xff) = 0;
  param_1[0xfa] = &PTR_FUN_144f301d0;
  param_1[0x100] = 0;
  param_1[0x101] = 0;
  param_1[0x102] = 0;
  param_1[0x103] = 0;
  *(undefined2 *)(param_1 + 0x104) = 0x100;
  param_1[0x106] = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0x3f800000;
  param_1[0x107] = 0;
  param_1[0x108] = 0;
  param_1[0x109] = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x10d] = 0;
  param_1[0x10e] = 0;
  *(undefined1 *)(param_1 + 0x10f) = 0;
  param_1[0x10a] = &PTR_FUN_144f301d0;
  param_1[0x110] = 0;
  param_1[0x111] = 0;
  param_1[0x112] = 0;
  param_1[0x113] = 0;
  *(undefined2 *)(param_1 + 0x114) = 0x100;
  param_1[0x116] = 0;
  *(undefined8 *)((longlong)param_1 + 0x8a4) = 0x3f800000;
  param_1[0x117] = 0;
  param_1[0x118] = 0;
  param_1[0x119] = 0;
  param_1[0x11a] = 0;
  param_1[0x11b] = 0;
  param_1[0x11e] = 0;
  param_1[0x11f] = 0;
  *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x904) = 0;
  param_1[0x122] = 0;
  *(undefined4 *)(param_1 + 0x123) = 0;
  return param_1;
}



// FUNCTION 141f83fe0 FUN_141f83fe0 body=80 status=ok
// SIG undefined FUN_141f83fe0(void)

longlong FUN_141f83fe0(longlong param_1)

{
  SharedPointerInternals::FSharedReferencer<0>::FSharedReferencer<0>();
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 0x68) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 0;
  return param_1;
}



// FUNCTION 141f84030 FUN_141f84030 body=176 status=ok
// SIG undefined FUN_141f84030(void)

undefined8 * FUN_141f84030(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    TArray<FPaperTileMetadata,FDefaultAllocator>::ResizeForCopy(param_1,iVar1,0);
    _guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 6);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined1 *)((longlong)param_1 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x2c);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return param_1;
}



// FUNCTION 141f84110 FUN_141f84110 body=24 status=ok
// SIG undefined FUN_141f84110(void)

undefined8 * FUN_141f84110(undefined8 *param_1)

{
  *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}



// FUNCTION 141f84130 FUN_141f84130 body=33 status=ok
// SIG undefined FUN_141f84130(void)

undefined8 * FUN_141f84130(undefined8 *param_1)

{
  FUN_1422552b0();
  *param_1 = &PTR__scalar_deleting_destructor__14410b0f0;
  return param_1;
}



// FUNCTION 141f84160 UAnimNotify_PlayMontageNotify body=43 status=ok
// SIG undefined UAnimNotify_PlayMontageNotify(void)

undefined8 * UAnimNotify_PlayMontageNotify::UAnimNotify_PlayMontageNotify(undefined8 *param_1)

{
  UAnimNotify::UAnimNotify();
  *param_1 = &PTR_FUN_144f30d10;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 141f84190 UAnimNotify_PlayMontageNotifyWindow body=43 status=ok
// SIG undefined UAnimNotify_PlayMontageNotifyWindow(void)

undefined8 *
UAnimNotify_PlayMontageNotifyWindow::UAnimNotify_PlayMontageNotifyWindow(undefined8 *param_1)

{
  UAnimNotifyState::UAnimNotifyState();
  *param_1 = &PTR_FUN_144f30fc0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  return param_1;
}



// FUNCTION 141f841c0 UAnimSequencerInstance body=37 status=ok
// SIG undefined UAnimSequencerInstance(void)

undefined8 * UAnimSequencerInstance::UAnimSequencerInstance(undefined8 *param_1)

{
  FUN_1422552b0();
  *(byte *)((longlong)param_1 + 0x31) = *(byte *)((longlong)param_1 + 0x31) & 0xfe;
  *param_1 = &PTR__scalar_deleting_destructor__144f31298;
  return param_1;
}



// FUNCTION 141f841f0 UKismetAnimationLibrary body=230 status=ok
// SIG undefined UKismetAnimationLibrary(void)

undefined8 * UKismetAnimationLibrary::UKismetAnimationLibrary(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined1 local_48 [24];
  undefined8 local_30;
  undefined1 local_28 [8];
  longlong *local_20;
  
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary();
  *param_1 = &PTR_FUN_143f4b3b0;
  lVar5 = FInternationalization::ForUseOnlyByLocMacroAndGraphNodeTextLiterals_CreateText
                    (local_48,L"Animation Library Warning",L"UKismetAnimationLibrary",
                     L"AnimationLibraryWarning");
  local_30 = DAT_146acb018;
  FText::FText(local_28,lVar5);
  plVar4 = *(longlong **)(lVar5 + 8);
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
  FBlueprintSupport::RegisterBlueprintWarning(&local_30);
  if (local_20 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_20 + 1;
    lVar5 = *plVar4;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)lVar5 == 1) {
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
  return param_1;
}



// FUNCTION 141f842e0 UPlayMontageCallbackProxy body=128 status=ok
// SIG undefined UPlayMontageCallbackProxy(void)

undefined8 * UPlayMontageCallbackProxy::UPlayMontageCallbackProxy(undefined8 *param_1)

{
  FUN_141781840();
  *param_1 = &PTR__scalar_deleting_destructor__144f32b30;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined4 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0xffffffff;
  *(uint *)((longlong)param_1 + 0x84) = *(uint *)((longlong)param_1 + 0x84) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return param_1;
}



// FUNCTION 141f84360 FUN_141f84360 body=126 status=ok
// SIG undefined FUN_141f84360(void)

void FUN_141f84360(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  int iVar3;
  
  lVar1 = *param_1;
  iVar3 = (int)param_1[1];
  if (iVar3 != 0) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    do {
      if (plVar2[2] != 0) {
        FMemory::Free();
      }
      if (*plVar2 != 0) {
        FMemory::Free();
      }
      if (plVar2[-2] != 0) {
        FMemory::Free();
      }
      plVar2 = plVar2 + 0x1c;
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



// FUNCTION 141f843e0 ~TArray<FAnimPhysLinkedBody,FDefaultAllocator> body=96 status=ok
// SIG undefined ~TArray<FAnimPhysLinkedBody,FDefaultAllocator>(void)

void TArray<FAnimPhysLinkedBody,FDefaultAllocator>::~TArray<FAnimPhysLinkedBody,FDefaultAllocator>
               (longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  
  lVar1 = *param_1;
  iVar2 = (int)param_1[1];
  if (iVar2 != 0) {
    lVar1 = lVar1 + 0x1a8;
    do {
      TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>(lVar1);
      lVar1 = lVar1 + 0x1f0;
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



// FUNCTION 141f84440 ~TArray<FAnimPhysShape,FDefaultAllocator> body=100 status=ok
// SIG undefined ~TArray<FAnimPhysShape,FDefaultAllocator>(void)

void TArray<FAnimPhysShape,FDefaultAllocator>::~TArray<FAnimPhysShape,FDefaultAllocator>
               (undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
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
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141f844b0 FUN_141f844b0 body=120 status=ok
// SIG undefined FUN_141f844b0(void)

void FUN_141f844b0(longlong *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  
  lVar2 = *param_1;
  iVar4 = (int)param_1[1];
  if (iVar4 != 0) {
    plVar3 = (longlong *)(lVar2 + 8);
    do {
      puVar1 = (undefined8 *)*plVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
        *plVar3 = 0;
      }
      plVar3 = plVar3 + 0x10;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    lVar2 = *param_1;
  }
  if (lVar2 != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f84530 FUN_141f84530 body=98 status=ok
// SIG undefined FUN_141f84530(void)

void FUN_141f84530(undefined8 *param_1)

{
  longlong *plVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  plVar1 = (longlong *)*param_1;
  if (iVar2 != 0) {
    do {
      FRichCurve::~FRichCurve(plVar1 + 5);
      if (*plVar1 != 0) {
        FMemory::Free();
      }
      plVar1 = plVar1 + 0x15;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    plVar1 = (longlong *)*param_1;
  }
  if (plVar1 != (longlong *)0x0) {
    FMemory::Free(plVar1);
  }
  return;
}



// FUNCTION 141f845a0 FUN_141f845a0 body=114 status=ok
// SIG undefined FUN_141f845a0(void)

void FUN_141f845a0(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  FUN_14084c260(param_1 + 0x24);
  puVar3 = param_1 + 0x25;
  lVar2 = 3;
  do {
    plVar1 = puVar3 + -6;
    puVar3 = puVar3 + -6;
    lVar2 = lVar2 + -1;
    if (*plVar1 != 0) {
      FMemory::Free();
    }
  } while (lVar2 != 0);
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  return;
}



// FUNCTION 141f84620 FUN_141f84620 body=100 status=ok
// SIG undefined FUN_141f84620(void)

void FUN_141f84620(undefined8 *param_1)

{
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[8] != 0) {
    FMemory::Free();
  }
  if (param_1[6] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f84690 FUN_141f84690 body=62 status=ok
// SIG undefined FUN_141f84690(void)

void FUN_141f84690(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FMemory::Free();
  }
  if (*(longlong *)(param_1 + 0x20) != 0) {
    FMemory::Free();
    return;
  }
  return;
}



// FUNCTION 141f846d0 operator= body=114 status=ok
// SIG undefined operator=(void)

undefined8 *
TArray<FTransform,TMemStackAllocator<0>_>::operator=(undefined8 *param_1,undefined8 *param_2)

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
    FUN_140615970(param_1,iVar1);
    ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 * 0x30);
  }
  return param_1;
}



// FUNCTION 141f84750 operator= body=131 status=ok
// SIG undefined operator=(void)

undefined8 * FBlendedCurve::operator=(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = (void *)*param_2;
    iVar1 = *(int *)(param_2 + 1);
    *(int *)(param_1 + 1) = iVar1;
    if ((iVar1 == 0) && (*(int *)((longlong)param_1 + 0xc) == 0)) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_141dab210(param_1,iVar1);
      ::_guard_xfg_dispatch_icall_nop((void *)*param_1,_Src,(longlong)iVar1 << 3);
    }
  }
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined1 *)((longlong)param_1 + 0x1a) = *(undefined1 *)((longlong)param_2 + 0x1a);
  return param_1;
}



// FUNCTION 141f847e0 FUN_141f847e0 body=797 status=ok
// SIG undefined FUN_141f847e0(void)

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_141f847e0(undefined8 param_1,float *param_2,float *param_3,undefined4 *param_4,
                  undefined8 param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
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
  undefined1 auStack_118 [32];
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulonglong local_68;
  
  local_68 = DAT_1468387a8 ^ (ulonglong)auStack_118;
  FUN_14162bcf0(param_3,&local_98,param_2);
  local_e8 = local_98;
  uStack_e4 = uStack_94;
  uStack_e0 = uStack_90;
  uStack_dc = uStack_8c;
  FUN_141638100(&local_e8,param_5,&local_d8,local_b8);
  local_f8 = 0x322bcc77;
  auVar3._0_4_ = local_d8 * local_d8 + fStack_d0 * fStack_d0;
  auVar3._4_4_ = fStack_d4 * fStack_d4 + fStack_cc * fStack_cc;
  auVar3._8_4_ = fStack_d0 * fStack_d0 + local_d8 * local_d8;
  auVar3._12_4_ = fStack_cc * fStack_cc + fStack_d4 * fStack_d4;
  fVar15 = auVar3._4_4_ + auVar3._0_4_;
  fVar17 = auVar3._8_4_ + auVar3._4_4_;
  fVar19 = auVar3._12_4_ + auVar3._8_4_;
  fVar21 = auVar3._0_4_ + auVar3._12_4_;
  auVar4._4_4_ = fVar17;
  auVar4._0_4_ = fVar15;
  auVar4._8_4_ = fVar19;
  auVar4._12_4_ = fVar21;
  auVar4 = rsqrtps(auVar3,auVar4);
  fVar7 = auVar4._0_4_;
  fVar9 = auVar4._4_4_;
  fVar11 = auVar4._8_4_;
  fVar13 = auVar4._12_4_;
  fVar7 = (_DAT_146acaea0 - fVar7 * fVar7 * _DAT_146acaea0 * fVar15) * fVar7 + fVar7;
  fVar9 = (fRam0000000146acaea4 - fVar9 * fVar9 * fRam0000000146acaea4 * fVar17) * fVar9 + fVar9;
  fVar11 = (fRam0000000146acaea8 - fVar11 * fVar11 * fRam0000000146acaea8 * fVar19) * fVar11 +
           fVar11;
  fVar13 = (fRam0000000146acaeac - fVar13 * fVar13 * fRam0000000146acaeac * fVar21) * fVar13 +
           fVar13;
  local_e8 = *param_4;
  uStack_e4 = param_4[1];
  uStack_e0 = param_4[2];
  uStack_dc = param_4[3];
  local_d8 = (float)(((uint)(((_DAT_146acaea0 - fVar7 * fVar7 * _DAT_146acaea0 * fVar15) * fVar7 +
                             fVar7) * local_d8) ^ _DAT_146acae90) & -(uint)(1e-08 <= fVar15) ^
                    _DAT_146acae90);
  fStack_d4 = (float)(((uint)(((fRam0000000146acaea4 - fVar9 * fVar9 * fRam0000000146acaea4 * fVar17
                               ) * fVar9 + fVar9) * fStack_d4) ^ uRam0000000146acae94) &
                      -(uint)(1e-08 <= fVar17) ^ uRam0000000146acae94);
  fStack_d0 = (float)(((uint)(((fRam0000000146acaea8 -
                               fVar11 * fVar11 * fRam0000000146acaea8 * fVar19) * fVar11 + fVar11) *
                             fStack_d0) ^ uRam0000000146acae98) & -(uint)(1e-08 <= fVar19) ^
                     uRam0000000146acae98);
  fStack_cc = (float)(((uint)(((fRam0000000146acaeac -
                               fVar13 * fVar13 * fRam0000000146acaeac * fVar21) * fVar13 + fVar13) *
                             fStack_cc) ^ uRam0000000146acae9c) & -(uint)(1e-08 <= fVar21) ^
                     uRam0000000146acae9c);
  FUN_141638100(&local_e8,param_5,local_a8,&local_c8);
  fVar21 = fRam0000000146acaeac;
  fVar19 = fRam0000000146acaea8;
  fVar17 = fRam0000000146acaea4;
  fVar15 = _DAT_146acaea0;
  auVar5._0_4_ = local_c8 * local_c8 + fStack_c0 * fStack_c0;
  auVar5._4_4_ = fStack_c4 * fStack_c4 + fStack_bc * fStack_bc;
  auVar5._8_4_ = fStack_c0 * fStack_c0 + local_c8 * local_c8;
  auVar5._12_4_ = fStack_bc * fStack_bc + fStack_c4 * fStack_c4;
  fVar16 = auVar5._4_4_ + auVar5._0_4_;
  fVar18 = auVar5._8_4_ + auVar5._4_4_;
  fVar20 = auVar5._12_4_ + auVar5._8_4_;
  fVar22 = auVar5._0_4_ + auVar5._12_4_;
  auVar1._4_4_ = fVar18;
  auVar1._0_4_ = fVar16;
  auVar1._8_4_ = fVar20;
  auVar1._12_4_ = fVar22;
  auVar4 = rsqrtps(auVar5,auVar1);
  fVar8 = auVar4._0_4_;
  fVar10 = auVar4._4_4_;
  fVar12 = auVar4._8_4_;
  fVar14 = auVar4._12_4_;
  fVar8 = (_DAT_146acaea0 - fVar8 * fVar8 * fVar16 * _DAT_146acaea0) * fVar8 + fVar8;
  fVar10 = (fRam0000000146acaea4 - fVar10 * fVar10 * fVar18 * fRam0000000146acaea4) * fVar10 +
           fVar10;
  fVar12 = (fRam0000000146acaea8 - fVar12 * fVar12 * fVar20 * fRam0000000146acaea8) * fVar12 +
           fVar12;
  fVar14 = (fRam0000000146acaeac - fVar14 * fVar14 * fVar22 * fRam0000000146acaeac) * fVar14 +
           fVar14;
  fVar7 = *param_2;
  fVar9 = param_2[1];
  fVar11 = param_2[2];
  fVar13 = param_2[3];
  fVar23 = (float)(((uint)(((_DAT_146acaea0 - fVar8 * fVar8 * fVar16 * _DAT_146acaea0) * fVar8 +
                           fVar8) * local_c8) ^ _DAT_146acae90) & -(uint)(1e-08 <= fVar16) ^
                  _DAT_146acae90);
  fVar24 = (float)(((uint)(((fRam0000000146acaea4 - fVar10 * fVar10 * fVar18 * fRam0000000146acaea4)
                            * fVar10 + fVar10) * fStack_c4) ^ uRam0000000146acae94) &
                   -(uint)(1e-08 <= fVar18) ^ uRam0000000146acae94);
  fVar25 = (float)(((uint)(((fRam0000000146acaea8 - fVar12 * fVar12 * fVar20 * fRam0000000146acaea8)
                            * fVar12 + fVar12) * fStack_c0) ^ uRam0000000146acae98) &
                   -(uint)(1e-08 <= fVar20) ^ uRam0000000146acae98);
  fVar14 = (float)(((uint)(((fRam0000000146acaeac - fVar14 * fVar14 * fVar22 * fRam0000000146acaeac)
                            * fVar14 + fVar14) * fStack_bc) ^ uRam0000000146acae9c) &
                   -(uint)(1e-08 <= fVar22) ^ uRam0000000146acae9c);
  fVar8 = fStack_cc * fVar7 * _DAT_146acae30 + fVar13 * local_d8 +
          fStack_d0 * fVar9 * _DAT_146acae20 + fStack_d4 * fVar11 * _DAT_146acae10;
  fVar10 = fStack_d0 * fVar7 * fRam0000000146acae34 + fVar13 * fStack_d4 +
           fStack_cc * fVar9 * fRam0000000146acae24 + local_d8 * fVar11 * fRam0000000146acae14;
  fVar12 = fStack_d4 * fVar7 * fRam0000000146acae38 + fVar13 * fStack_d0 +
           local_d8 * fVar9 * fRam0000000146acae28 + fStack_cc * fVar11 * fRam0000000146acae18;
  fVar7 = local_d8 * fVar7 * fRam0000000146acae3c + fVar13 * fStack_cc +
          fStack_d4 * fVar9 * fRam0000000146acae2c + fStack_d0 * fVar11 * fRam0000000146acae1c;
  fVar16 = fVar14 * fVar8 * _DAT_146acae30 + fVar7 * fVar23 + fVar25 * fVar10 * _DAT_146acae20 +
           fVar24 * fVar12 * _DAT_146acae10;
  fVar18 = fVar25 * fVar8 * fRam0000000146acae34 + fVar7 * fVar24 +
           fVar14 * fVar10 * fRam0000000146acae24 + fVar23 * fVar12 * fRam0000000146acae14;
  fVar20 = fVar24 * fVar8 * fRam0000000146acae38 + fVar7 * fVar25 +
           fVar23 * fVar10 * fRam0000000146acae28 + fVar14 * fVar12 * fRam0000000146acae18;
  fVar22 = fVar23 * fVar8 * fRam0000000146acae3c + fVar7 * fVar14 +
           fVar24 * fVar10 * fRam0000000146acae2c + fVar25 * fVar12 * fRam0000000146acae1c;
  *param_3 = fVar16;
  param_3[1] = fVar18;
  param_3[2] = fVar20;
  param_3[3] = fVar22;
  auVar6._0_4_ = fVar16 * fVar16 + fVar20 * fVar20;
  auVar6._4_4_ = fVar18 * fVar18 + fVar22 * fVar22;
  auVar6._8_4_ = fVar20 * fVar20 + fVar16 * fVar16;
  auVar6._12_4_ = fVar22 * fVar22 + fVar18 * fVar18;
  fVar8 = auVar6._4_4_ + auVar6._0_4_;
  fVar10 = auVar6._8_4_ + auVar6._4_4_;
  fVar12 = auVar6._12_4_ + auVar6._8_4_;
  fVar14 = auVar6._0_4_ + auVar6._12_4_;
  auVar2._4_4_ = fVar10;
  auVar2._0_4_ = fVar8;
  auVar2._8_4_ = fVar12;
  auVar2._12_4_ = fVar14;
  auVar4 = rsqrtps(auVar6,auVar2);
  fVar7 = auVar4._0_4_;
  fVar9 = auVar4._4_4_;
  fVar11 = auVar4._8_4_;
  fVar13 = auVar4._12_4_;
  fVar7 = (fVar15 - fVar7 * fVar7 * fVar8 * fVar15) * fVar7 + fVar7;
  fVar9 = (fVar17 - fVar9 * fVar9 * fVar10 * fVar17) * fVar9 + fVar9;
  fVar11 = (fVar19 - fVar11 * fVar11 * fVar12 * fVar19) * fVar11 + fVar11;
  fVar13 = (fVar21 - fVar13 * fVar13 * fVar14 * fVar21) * fVar13 + fVar13;
  fVar9 = (float)(((uint)(((fVar17 - fVar9 * fVar9 * fVar10 * fVar17) * fVar9 + fVar9) * fVar18) ^
                  uRam0000000146acae94) & -(uint)(fRam0000000146acaee4 <= fVar10) ^
                 uRam0000000146acae94);
  fVar11 = (float)(((uint)(((fVar19 - fVar11 * fVar11 * fVar12 * fVar19) * fVar11 + fVar11) * fVar20
                          ) ^ uRam0000000146acae98) & -(uint)(fRam0000000146acaee8 <= fVar12) ^
                  uRam0000000146acae98);
  fVar13 = (float)(((uint)(((fVar21 - fVar13 * fVar13 * fVar14 * fVar21) * fVar13 + fVar13) * fVar22
                          ) ^ uRam0000000146acae9c) & -(uint)(fRam0000000146acaeec <= fVar14) ^
                  uRam0000000146acae9c);
  *param_3 = (float)(((uint)(((fVar15 - fVar7 * fVar7 * fVar8 * fVar15) * fVar7 + fVar7) * fVar16) ^
                     _DAT_146acae90) & -(uint)(_DAT_146acaee0 <= fVar8) ^ _DAT_146acae90);
  param_3[1] = fVar9;
  param_3[2] = fVar11;
  param_3[3] = fVar13;
  return;
}



// FUNCTION 141f84b00 FUN_141f84b00 body=151 status=ok
// SIG undefined FUN_141f84b00(void)

undefined8 * FUN_141f84b00(void)

{
  DWORD DVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x228);
  if (puVar2 != (undefined8 *)0x0) {
    _guard_xfg_dispatch_icall_nop(puVar2 + 2,0,0x218);
    *puVar2 = &PTR_FUN_1440104d0;
    puVar2[1] = 0;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(puVar2 + 2) = DVar1;
    *puVar2 = &PTR_FUN_144f302c0;
    puVar2[0x1b] = 0;
    puVar2[0x1c] = 0;
    puVar2[0x21] = 0;
    puVar2[0x22] = 0;
    puVar2[0x43] = 0;
    puVar2[0x44] = 0;
    return puVar2;
  }
  return (undefined8 *)0x0;
}



// FUNCTION 141f84ba0 operator() body=336 status=ok
// SIG undefined operator()(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void <lambda_b3205ff4250ac606abeecfcf17be6fdb>::operator()
               (undefined8 param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar12;
  float fVar13;
  undefined1 in_XMM5 [16];
  undefined1 auVar11 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  uVar4 = uRam0000000146acadfc;
  *(undefined8 *)(param_4 + 4) = 0;
  *(undefined8 *)(param_4 + 6) = 0;
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = 0;
  param_4[3] = uVar4;
  uVar4 = uRam0000000146acadf4 & uRam0000000146acae04;
  uVar5 = uRam0000000146acadf8 & uRam0000000146acae08;
  uVar6 = uRam0000000146acadfc & uRam0000000146acae0c;
  param_4[8] = _DAT_146acadf0 & _DAT_146acae00;
  param_4[9] = uVar4;
  param_4[10] = uVar5;
  param_4[0xb] = uVar6;
  auVar11 = *(undefined1 (*) [16])(param_3 + 8);
  fVar1 = auVar11._0_4_;
  fVar2 = auVar11._4_4_;
  fVar3 = auVar11._8_4_;
  fVar14 = *param_3 * _DAT_146acaed0;
  fVar15 = param_3[1] * fRam0000000146acaed4;
  fVar16 = param_3[2] * fRam0000000146acaed8;
  fVar17 = param_3[3] * fRam0000000146acaedc;
  auVar11 = rcpps(in_XMM5,auVar11);
  fVar18 = (float)((uint)(*param_2 - param_3[4]) & _DAT_146acae00);
  fVar19 = (float)((uint)(param_2[1] - param_3[5]) & uRam0000000146acae04);
  fVar20 = (float)((uint)(param_2[2] - param_3[6]) & uRam0000000146acae08);
  fVar7 = fVar20 * fVar15 - fVar19 * fVar16;
  fVar8 = fVar18 * fVar16 - fVar20 * fVar14;
  fVar9 = fVar19 * fVar14 - fVar18 * fVar15;
  fVar10 = auVar11._0_4_;
  fVar12 = auVar11._4_4_;
  fVar13 = auVar11._8_4_;
  fVar7 = fVar7 + fVar7;
  fVar8 = fVar8 + fVar8;
  fVar9 = fVar9 + fVar9;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar1;
  fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar3;
  fVar10 = (fVar10 + fVar10) - fVar10 * fVar10 * fVar1;
  fVar12 = (fVar12 + fVar12) - fVar12 * fVar12 * fVar2;
  fVar13 = (fVar13 + fVar13) - fVar13 * fVar13 * fVar3;
  auVar11._4_4_ =
       ((fVar7 * fVar16 - fVar9 * fVar14) + fVar17 * fVar8 + fVar19) *
       (float)(-(uint)((float)((uint)fVar2 & uRam0000000146acaf04) <= fRam0000000146acaef4) &
               (uint)fVar12 ^ (uint)fVar12);
  auVar11._0_4_ =
       ((fVar9 * fVar15 - fVar8 * fVar16) + fVar17 * fVar7 + fVar18) *
       (float)(-(uint)((float)((uint)fVar1 & _DAT_146acaf00) <= _DAT_146acaef0) & (uint)fVar10 ^
              (uint)fVar10);
  auVar11._8_4_ =
       ((fVar8 * fVar14 - fVar7 * fVar15) + fVar17 * fVar9 + fVar20) *
       (float)(-(uint)((float)((uint)fVar3 & uRam0000000146acaf08) <= fRam0000000146acaef8) &
               (uint)fVar13 ^ (uint)fVar13);
  auVar11._12_4_ = 0;
  *(undefined1 (*) [16])(param_4 + 4) = auVar11;
  return;
}



// FUNCTION 141f84cf0 FUN_141f84cf0 body=52 status=ok
// SIG undefined FUN_141f84cf0(void)

undefined8 FUN_141f84cf0(undefined8 param_1,ulonglong param_2)

{
  FUN_141f845a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x260);
  }
  return param_1;
}



// FUNCTION 141f84d30 FUN_141f84d30 body=271 status=ok
// SIG undefined FUN_141f84d30(void)

undefined8 * FUN_141f84d30(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x65] != 0) {
    FMemory::Free();
  }
  if (param_1[99] != 0) {
    FMemory::Free();
  }
  if (param_1[0x61] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5f] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x5b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x59] != 0) {
    FMemory::Free();
  }
  if (param_1[0x57] != 0) {
    FMemory::Free();
  }
  TArray<FAnimPhysLinkedBody,FDefaultAllocator>::~TArray<FAnimPhysLinkedBody,FDefaultAllocator>
            (param_1 + 0x55);
  if (param_1[0x4d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x4a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x3b0);
  }
  return param_1;
}



// FUNCTION 141f84e40 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_ApplyAdditive::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x118);
  }
  return param_1;
}



// FUNCTION 141f84e90 FUN_141f84e90 body=123 status=ok
// SIG undefined FUN_141f84e90(void)

undefined8 * FUN_141f84e90(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  if (param_1[0x28] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141f84f10 FUN_141f84f10 body=52 status=ok
// SIG undefined FUN_141f84f10(void)

undefined8 FUN_141f84f10(undefined8 param_1,ulonglong param_2)

{
  FUN_141f845a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x168);
  }
  return param_1;
}



// FUNCTION 141f84f50 `scalar_deleting_destructor' body=52 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8
TCompositeObjectDistanceFieldsCS<1,1>::_scalar_deleting_destructor_
          (undefined8 param_1,ulonglong param_2)

{
  FUN_141f845a0();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x160);
  }
  return param_1;
}



// FUNCTION 141f84f90 FUN_141f84f90 body=89 status=ok
// SIG undefined FUN_141f84f90(void)

undefined8 * FUN_141f84f90(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141f84ff0 FUN_141f84ff0 body=135 status=ok
// SIG undefined FUN_141f84ff0(void)

undefined8 * FUN_141f84ff0(undefined8 *param_1,ulonglong param_2)

{
  FUN_141f844b0(param_1 + 0x2f);
  if (param_1[0x2d] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2b] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}



// FUNCTION 141f85080 FUN_141f85080 body=89 status=ok
// SIG undefined FUN_141f85080(void)

undefined8 * FUN_141f85080(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x178);
  }
  return param_1;
}



// FUNCTION 141f850e0 `scalar_deleting_destructor' body=89 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_SpringBone::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x180);
  }
  return param_1;
}



// FUNCTION 141f85140 `scalar_deleting_destructor' body=157 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_CopyPoseFromMesh::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<TTuple<IOnlineUserCloud_*,FDelegateHandle>_>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FMemory::Free();
  }
  TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSetElement<UActorComponent_*>,TSparseArrayAllocator<FDefaultAllocator,FDefaultBitArrayAllocator>_>
            (param_1 + 9);
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xe8);
  }
  return param_1;
}



// FUNCTION 141f851e0 `scalar_deleting_destructor' body=72 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_CurveSource::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x68);
  }
  return param_1;
}



// FUNCTION 141f85230 `scalar_deleting_destructor' body=89 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 * FAnimNode_LookAt::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x240);
  }
  return param_1;
}



// FUNCTION 141f85290 FUN_141f85290 body=106 status=ok
// SIG undefined FUN_141f85290(void)

undefined8 * FUN_141f85290(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x34] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x1b8);
  }
  return param_1;
}



// FUNCTION 141f85300 FUN_141f85300 body=118 status=ok
// SIG undefined FUN_141f85300(void)

undefined8 * FUN_141f85300(undefined8 *param_1,ulonglong param_2)

{
  FUN_141f84360(param_1 + 0x2b);
  if (param_1[0x29] != 0) {
    FMemory::Free();
  }
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x170);
  }
  return param_1;
}



// FUNCTION 141f85380 FUN_141f85380 body=89 status=ok
// SIG undefined FUN_141f85380(void)

undefined8 * FUN_141f85380(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x290);
  }
  return param_1;
}



// FUNCTION 141f853e0 FUN_141f853e0 body=89 status=ok
// SIG undefined FUN_141f853e0(void)

undefined8 * FUN_141f853e0(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x21] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x198);
  }
  return param_1;
}



// FUNCTION 141f85440 `scalar_deleting_destructor' body=114 status=ok
// SIG undefined `scalar_deleting_destructor'(void)

undefined8 *
FAnimNode_ModifyCurve::_scalar_deleting_destructor_(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0xe] != 0) {
    FMemory::Free();
  }
  if (param_1[0xc] != 0) {
    FMemory::Free();
  }
  if (param_1[10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x88);
  }
  return param_1;
}



// FUNCTION 141f854c0 FUN_141f854c0 body=52 status=ok
// SIG undefined FUN_141f854c0(void)

undefined8 FUN_141f854c0(undefined8 param_1,ulonglong param_2)

{
  FUN_141f84620();
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x80);
  }
  return param_1;
}



// FUNCTION 141f85500 FUN_141f85500 body=123 status=ok
// SIG undefined FUN_141f85500(void)

undefined8 * FUN_141f85500(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0xd8);
  }
  return param_1;
}



// FUNCTION 141f85580 FUN_141f85580 body=220 status=ok
// SIG undefined FUN_141f85580(void)

undefined8 * FUN_141f85580(undefined8 *param_1,ulonglong param_2)

{
  if (param_1[0x2e] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x2a] != 0) {
    FMemory::Free();
  }
  FUN_141f84530(param_1 + 0x24);
  if (param_1[0x1c] != 0) {
    FMemory::Free();
  }
  if (param_1[0x19] != 0) {
    FMemory::Free();
  }
  if (param_1[0x14] != 0) {
    FMemory::Free();
  }
  if (param_1[0x12] != 0) {
    FMemory::Free();
  }
  if (param_1[0x10] != 0) {
    FMemory::Free();
  }
  *param_1 = &PTR_ReadLocalVoiceData_1440104f8;
  if (param_1[2] != 0) {
    FMemory::Free();
  }
  if ((param_2 & 1) != 0) {
    FMemory::operator_delete(param_1,0x188);
  }
  return param_1;
}


